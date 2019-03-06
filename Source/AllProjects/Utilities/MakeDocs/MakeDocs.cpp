//
// FILE NAME: MakeDocs.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 06/10/1997
//
// COPYRIGHT: $_CIDLib_CopyRight_$
//
//  This file is part of a demonstration program of the CIDLib C++
//  Frameworks. Its contents are distributed 'as is', to provide guidance on
//  the use of the CIDLib system. However, these demos are not intended to
//  represent a full fledged applications. Any direct use of demo code in
//  user applications is at the user's discretion, and no warranties are
//  implied as to its correctness or applicability.
//
// DESCRIPTION:
//
//  This is the main module of the program. This program serves both as a
//  nice demonstration of a lot of the CIDLib system's non-GUI functionality
//  and as an important utility for the generation of the CIDLib HTML
//  documentation. All of the class and member documentation for CIDLib is
//  in the form of .ClassDoc files. These are text files with a canned format
//  that this program understands.
//
//  This ClassDoc files are parsed by this program, and it turns around and
//  outputs the text in some other format, such as HTML. Much of the output
//  is canned by this program, so it handles formatting for those parts.
//  Examples are the standard header panels, and headings in the standard
//  pages such as section titles, class names, member names, etc... It applies
//  standard formatting to these parts of the template, though it does it via
//  a plug in interface so that its done generically (see below.)
//
//  Besides the special headings and such that are generated by this program,
//  the .ClassDoc files use simple, HTML-like, formatting codes to control
//  the format of the text that is not part of the template text, e.g. to
//  indicate bold, source code, paragraph breaks, etc... This program uses
//  a plug in object interface to handle translation of these codes to the
//  required output language. This same interface is used when the canned
//  parts of the template are output also, so providing another derivative
//  and plugging it in could be used to quickly output the text as IPF, RTF,
//  SGML or whatever. Since the format is so simple, it could be output to
//  pretty much anything.
//
// CAVEATS/GOTCHAS:
//
//  1)  This program is an ad hoc program that suits exactly the needs of
//      the CIDLib documentation. You might be able to use it for other
//      things, but its not intended to be general purpose or handle any
//      extenuating circumstances.
//
// LOG:
//
//  $_CIDLib_Log_$
//

// -----------------------------------------------------------------------------
//  Include underlying headers.
// -----------------------------------------------------------------------------
#include    "MakeDocs.hpp"


// -----------------------------------------------------------------------------
//  Do RTTI macros for classes that have no.cpp files of their own
// -----------------------------------------------------------------------------
RTTIDecls(TDocError,TObject)



// -----------------------------------------------------------------------------
//  Local function prototypes
//
//  eMainTheadFunc
//      This is the thread function for the main thread that provides the
//      execution for this program.
// -----------------------------------------------------------------------------
tCIDLib::EExitCodes eMainThreadFunc
(
        TThread&            thrThis
        , tCIDLib::TVoid*   pData
);


// -----------------------------------------------------------------------------
//  Glocal data declarations
//
//  facMakeDocs
//      This is our facility object. This program is complex enough that its
//      advantageous to have a facility class of its own. This allows for
//      easy coordination of any global data.
// -----------------------------------------------------------------------------
TFacMakeDocs    facMakeDocs;


// -----------------------------------------------------------------------------
//  Include magic main module code
// -----------------------------------------------------------------------------
CIDLib_MainModule(TThread(L"MakeDocsMainThread", eMainThreadFunc))


// -----------------------------------------------------------------------------
//  Local functions
// -----------------------------------------------------------------------------

//
//  This is the main program thread, where the program starts. The use of the
//  CIDLib_MainModule macro above makes this thread start as the first thread.
//
tCIDLib::EExitCodes eMainThreadFunc(TThread& thrThis, tCIDLib::TVoid* const)
{
    // Let our caller go
    thrThis.Sync();

    // Display our little opening blurb.
    facMakeDocs.ShowBlurb();

    //
    //  Now lets work on the command line parms. This is done by the
    //  facility object, which stores away all of the information if it
    //  goes well.
    //
    if (!facMakeDocs.bParseCommandLine())
        return tCIDLib::EExitCodes::BadParameters;

    //
    //  Ok, kick off the work. We handle any exceptions here by just dumping
    //  out the info
    //
    try
    {
        // First build a list of all available classes
        facMakeDocs.BuildClassList();

        // Build the list of replacement tokens
        facMakeDocs.BuildTokenList();

        // And then generate the documentation
        facMakeDocs.GenerateDocs();
    }

    catch(TError& errToCatch)
    {
        // If this hasn't been logged already, then log it
        if (!errToCatch.bLogged())
        {
            errToCatch.AddStackLevel(CID_FILE, CID_LINE);
            TModule::LogEventObj(errToCatch);
        }

        facMakeDocs.strmOut()
            << facMakeDocs.strMsg(kDocMsgs::midError) << kCIDLib::DNewLn
            << facMakeDocs.strMsg(kDocMsgs::midInfo) << kCIDLib::NewLn
            << L"---------------------" << kCIDLib::NewLn
            << errToCatch
            << kCIDLib::NewLn << kCIDLib::EndLn;
        return tCIDLib::EExitCodes::FatalError;

    }

    // Watch for parser errors
    catch(const TDocError& errToCatch)
    {
        facMakeDocs.strmOut()
            << kCIDLib::NewLn << facMakeDocs.strMsg(kDocMsgs::midParseError) << kCIDLib::NewLn
            << facMakeDocs.strMsg(kDocMsgs::midLineNum)
            << errToCatch.c4Line() << kCIDLib::NewLn
            << facMakeDocs.strMsg(kDocMsgs::midErrorPrefix)
            << errToCatch.strText()
            << kCIDLib::NewLn << kCIDLib::EndLn;
        return tCIDLib::EExitCodes::FatalError;

    }

    //
    //  This is partly a test program so, just in case, catch any kernel
    //  errors so we can know when any are leaking through (they are not
    //  supposed to be seen by end user code!)
    //
    catch(const TKrnlError& kerrToCatch)
    {
        facMakeDocs.strmOut()
            << facMakeDocs.strMsg(kDocMsgs::midKrnlError) << kCIDLib::DNewLn
            << facMakeDocs.strMsg(kDocMsgs::midErrorPrefix)
            << kerrToCatch.errcId() << kCIDLib::NewLn << kCIDLib::EndLn;
        return tCIDLib::EExitCodes::FatalError;

    }

    // And watch for system errors
    catch(...)
    {
        facMakeDocs.strmOut()
            << facMakeDocs.strMsg(kDocMsgs::midSysError) << kCIDLib::NewLn << kCIDLib::EndLn;
        return tCIDLib::EExitCodes::SystemException;

    }

    return tCIDLib::EExitCodes::Normal;
}

