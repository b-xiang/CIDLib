//
// FILE NAME: DAE1.cpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 03/20/2006
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
//  This is the main module for a program that demonstrates a basic digital
//  audio extraction support. It will display the available CDROMs that
//  have media ready and let you choose one. It will let you choose codec
//  and format to rip and a target path for the output.
//
//  Then it will show you the track info and ask if you want to rip the CD. If
//  so, it will rip the CD tracks to that path.
//
//  This uses the kernel level CDROM object (there's no higher level class
//  for low level CDROM control) is used here. So this is a little unusual
//  a CIDLib based program, because normally kernel level objects are not
//  used directly.
//
// CAVEATS/GOTCHAS:
//
//
// LOG:
//
//  $_CIDLib_Log_$
//


// ---------------------------------------------------------------------------
//  Includes. Note that the DAE class is not much used so it is not normally
//  included.
// ---------------------------------------------------------------------------
#include    "CIDDAE.hpp"


// ---------------------------------------------------------------------------
//  Forward references
// ---------------------------------------------------------------------------
tCIDLib::EExitCodes eMainThreadFunc
(
        TThread&            thrThis
        , tCIDLib::TVoid*   pData
);


// ---------------------------------------------------------------------------
//  Do the magic main module code
// ---------------------------------------------------------------------------
CIDLib_MainModule(TThread(L"DAE1MainThread", eMainThreadFunc))


// ---------------------------------------------------------------------------
//  Local data
// ---------------------------------------------------------------------------
TOutConsole         conOut;
TInConsole          conIn;
tCIDLib::TBoolean   bBreak;



// ---------------------------------------------------------------------------
//  Local functions
// ---------------------------------------------------------------------------


//
//  This is the the thread function for the main thread.
//
tCIDLib::EExitCodes eMainThreadFunc(TThread& thrThis, tCIDLib::TVoid*)
{
    TString strTmp;

    // We have to let our calling thread go first
    thrThis.Sync();

    try
    {
        // Iterate and display the available audio codecs
        TVector<TCIDDAEWMAEnc::TCodecInfo> colCodecs;
        const tCIDLib::TCard4 c4CodecCnt = TCIDDAEWMAEnc::c4EnumAudioCodecs(colCodecs);
        if (c4CodecCnt)
        {
            conOut << L"\nAvailable Audio Codecs:\n--------------------------\n";
            for (tCIDLib::TCard4 c4Index = 0; c4Index < c4CodecCnt; c4Index++)
            {
                if (c4Index < 9)
                    conOut << L' ';
                conOut  << (c4Index + 1)
                        << L". " << colCodecs[c4Index].m_strName
//                        << L"  (" << colCodecs[c4Index].m_c4Index << L")"
                        << L"\n";
            }
        }
         else
        {
            conOut << L"No audio codecs were found\n";
            return tCIDLib::EExitCodes::Normal;
        }
        conOut << kCIDLib::EndLn;

        // Ask them to select a codec
        conOut << L"\nEnter a codec number: " << kCIDLib::FlushIt;
        conIn >> strTmp;
        conOut << kCIDLib::EndLn;

        // Should be a number, so check it, and it must be a valid one
        tCIDLib::TCard4 c4CodecInd = strTmp.c4Val(tCIDLib::ERadices::Dec);
        if (!c4CodecInd || (c4CodecInd > c4CodecCnt))
        {
            conOut  << L"   The codec number was not valid\n"
                    << kCIDLib::EndLn;
            return tCIDLib::EExitCodes::Normal;
        }
        c4CodecInd--;

        // It's a good one, so enumerate the codec formats
        TVector<TCIDDAEWMAEnc::TCodecInfo> colFormats;
        const tCIDLib::TCard4 c4FmtCnt = TCIDDAEWMAEnc::c4EnumCodecFmts
        (
            colCodecs[c4CodecInd], colFormats
        );

        if (c4FmtCnt)
        {
            conOut << L"\nAvailable Codec Formats:\n--------------------------\n";
            for (tCIDLib::TCard4 c4Index = 0; c4Index < c4FmtCnt; c4Index++)
            {
                if (c4Index < 9)
                    conOut << L' ';
                conOut  << (c4Index + 1)
                        << L". " << colFormats[c4Index].m_strName
//                        << L"  (" << colFormats[c4Index].m_c4Index << L")"
                        << L"\n";
            }
        }
         else
        {
            conOut << L"No codecs formats were found\n";
            return tCIDLib::EExitCodes::Normal;
        }
        conOut << kCIDLib::EndLn;


        // Ask them to select a format
        conOut << L"\nEnter a format number: " << kCIDLib::FlushIt;
        conIn >> strTmp;
        conOut << kCIDLib::EndLn;

        // Should be a number, so check it, and it must be a valid one
        tCIDLib::TCard4 c4FmtInd = strTmp.c4Val(tCIDLib::ERadices::Dec);
        if (!c4FmtInd || (c4FmtInd > c4FmtCnt))
        {
            conOut  << L"   The format number was not valid\n"
                    << kCIDLib::EndLn;
            return tCIDLib::EExitCodes::Normal;
        }
        c4FmtInd--;

        // We can ask for a list of device paths of DAEs available
        const tCIDLib::TCard4 c4EnumBufSz = 2048;
        tCIDLib::TCh szBuf[c4EnumBufSz + 1];
        tCIDLib::TCard4 c4DevsFound;
        if (!TKrnlRemMedia::bEnumDrvs(szBuf, c4EnumBufSz, c4DevsFound))
        {
            conOut << L"Could not enumerate CDROMs" << kCIDLib::EndLn;
            return tCIDLib::EExitCodes::FatalError;
        }

        //
        //  Create an input text stream over it, and break them out into
        //  separate strings.
        //
        TKrnlRemMediaDrv    rmmdCur;
        TVector<TString>    colDevs;
        {
            TTextStringInStream strmEnum(new TString(szBuf), tCIDLib::EAdoptOpts::Adopt);
            for (tCIDLib::TCard4 c4Index = 0; c4Index < c4DevsFound; c4Index++)
            {
                strmEnum >> strTmp;

                // Try to open it. If we can't, then skip this one
                if (!rmmdCur.bSetPath(strTmp.pszBuffer()) || !rmmdCur.bOpen())
                    break;

                // If not read, or it's not a CD type media, skip it
                TKrnlRemMedia::EMediaTypes eType;
                if (rmmdCur.bCheckIsReady()
                &&  rmmdCur.bMediaType(eType)
                &&  TKrnlRemMedia::bIsCDType(eType))
                {
                    colDevs.objAdd(strTmp);
                }
                rmmdCur.Close();
            }
        }

        // If there weren't any, then say so
        if (colDevs.bIsEmpty())
        {
            conOut << L"No media was available\n" << kCIDLib::EndLn;
            return tCIDLib::EExitCodes::Normal;
        }

        // Store the new count
        c4DevsFound = colDevs.c4ElemCount();

        // Display them and let the user select one
        conOut  << L"Available Media:\n----------------------\n"
                << kCIDLib::EndLn;
        for (tCIDLib::TCard4 c4Index = 0; c4Index < c4DevsFound; c4Index++)
        {
            conOut  << tCIDLib::TCard4(c4Index + 1)
                    << L". " << colDevs[c4Index] << L"  ";

            rmmdCur.bSetPath(colDevs[c4Index].pszBuffer());
            if (rmmdCur.bOpen())
            {
                conOut << rmmdCur.pszDriveId();
                rmmdCur.Close();
            }
             else
            {
                conOut << L"(Could not open)";
            }
            conOut << kCIDLib::EndLn;
        }
        conOut << L"\nEnter Number: " << kCIDLib::FlushIt;
        conIn >> strTmp;
        conOut << kCIDLib::EndLn;

        // Should be a number, so check it, and it must be a valid one
        tCIDLib::TCard4 c4SelNum = strTmp.c4Val(tCIDLib::ERadices::Dec);
        if (c4SelNum > c4DevsFound)
        {
            conOut  << L"   The driver number was not valid\n"
                    << kCIDLib::EndLn;
            return tCIDLib::EExitCodes::Normal;
        }

        // Make it a zero based index now
        c4SelNum--;

        // Ok, we can set up the dive object now
        if (!rmmdCur.bSetPath(colDevs[c4SelNum].pszBuffer()))
        {
            conOut  << L"  The drive path could not be set\n"
                    << kCIDLib::EndLn;
            return tCIDLib::EExitCodes::Normal;
        }

        // Try to open the drive
        if (!rmmdCur.bOpen())
        {
            conOut  << L"   Could not open the drive\n" << kCIDLib::EndLn;
            return tCIDLib::EExitCodes::Normal;
        }

        // Try to query the TOCs
        TKrnlRemMedia::TCDTOCInfo TOCInfo;
        if (!rmmdCur.bQueryCDTOC(TOCInfo))
        {
            conOut  << L"  The table of contents could not be queried\n"
                    << kCIDLib::EndLn;
            return tCIDLib::EExitCodes::Normal;
        }

        // Display the available tracks
        conOut  << L"\nAvailable Tracks\n-------------------------\n"
                << kCIDLib::EndLn;
        tCIDLib::TCard4 c4StartBlock;
        tCIDLib::TCard4 c4BlockCnt;
        tCIDLib::TCard4 c4Minutes;
        tCIDLib::TCard4 c4Seconds;
        tCIDLib::TCard4 c4TrackNum = TOCInfo.c1FirstTrack;
        TStreamFmt strmfDef(0, 0, tCIDLib::EHJustify::Left, kCIDLib::chSpace);
        TStreamFmt strmfHM(2, 0, tCIDLib::EHJustify::Right, kCIDLib::chDigit0);
        for (; c4TrackNum <= TOCInfo.c1LastTrack; c4TrackNum++)
//        for (; c4TrackNum <= TOCInfo.c1FirstTrack; c4TrackNum++)
        {
            const tCIDLib::TBoolean bRes = TKrnlRemMedia::bExtractCDTrackInfo
            (
                TOCInfo
                , c4TrackNum
                , c4StartBlock
                , c4BlockCnt
                , c4Minutes
                , c4Seconds
            );

            if (bRes)
            {
                conOut  << (c4TrackNum + 1UL)
                        << L". Length=" << strmfHM << c4Minutes
                        << strmfDef << L":" << strmfHM << c4Seconds
                        << strmfDef << L"  (Start="
                        << c4StartBlock << L", Count=" << c4BlockCnt
                        << L")\n";
            }
        }
        conOut.Flush();

        // Ask if they want to rip this disc
        conOut << L"\nRip this disc(Y/N)?: " << kCIDLib::FlushIt;
        conIn >> strTmp;
        conOut << kCIDLib::EndLn;
        strTmp.ToUpper();
        if (strTmp != L"Y")
            return tCIDLib::EExitCodes::Normal;

        // Get a target directory
        TPathStr pathOut;
        conOut << L"\nEnter path to store tracks: " << kCIDLib::FlushIt;
        conIn >> pathOut;
        conOut << kCIDLib::EndLn;

        // Ok, let's create an encoder and a ripper
//        TCIDDAEWaveEnc daeeOut;
        TCIDDAEWMAEnc   daeeOut;
        TCIDDAERipper   daerOut;

        // Ask if they want jitter correction
        conOut << L"\nJitter Correction(Y/N)?: " << kCIDLib::FlushIt;
        conIn >> strTmp;
        conOut << kCIDLib::EndLn;
        strTmp.ToUpper();
        if (strTmp == L"Y")
            daerOut.eJitterOpt(tCIDDAE::EJitterOpts::Always);

        // Kick off the ripping process now
        const tCIDLib::TCard4 c4TrackCnt
        (
            (TOCInfo.c1LastTrack - TOCInfo.c1FirstTrack) + 1
        );

        TPathStr pathTrack;
        for (tCIDLib::TCard4 c4Index = 0; c4Index < c4TrackCnt; c4Index++)
//        for (tCIDLib::TCard4 c4Index = 0; c4Index < 3; c4Index++)
        {
            pathTrack = pathOut;
            pathTrack.AddLevel(L"Track ");
            pathTrack.AppendFormatted(c4Index + 1);
            pathTrack.AppendExt(L"wma");

            conOut << L"Ripping Track #" << (c4Index + 1UL) << L"\n     "
                   << pathTrack << kCIDLib::EndLn;

            daerOut.RipTrack
            (
                rmmdCur
                , colCodecs[c4CodecInd].m_strName
                , colFormats[c4FmtInd].m_strName
                , c4Index
                , daeeOut
                , pathTrack
                , bBreak
            );
        }

        // Display stats
        conOut  << L"\n\n         Stitches: " << daerOut.c4Stitches()
                << L"\n  Stitch Failures: " << daerOut.c4StitchErrs()
                << L"\n      Read Errors: " << daerOut.c4ReadErrs()
                << kCIDLib::EndLn;

        // Open the CD door
//        if (!rmmdCur.bOpenDoor(kCIDLib::True))
//            conOut << L"  \nCould not open CD door" << kCIDLib::EndLn;

        // We can close the CDROM object now
        rmmdCur.Close();
    }

    catch(TError& errToCatch)
    {
        // If this hasn't been logged already, then log it
        if (!errToCatch.bLogged())
        {
            errToCatch.AddStackLevel(CID_FILE, CID_LINE);
            TModule::LogEventObj(errToCatch);
        }

        conOut  <<  L"A CIDLib runtime error occured during processing. "
                <<  L"\nError: " << errToCatch.strErrText()
                << kCIDLib::NewLn << kCIDLib::EndLn;
        return tCIDLib::EExitCodes::FatalError;
    }

    //
    //  Kernel errors should never propogate out of CIDLib, but I test
    //  for them in my test programs so I can catch them if they do
    //  and fix them.
    //
    catch(const TKrnlError& kerrToCatch)
    {
        conOut << L"A kernel error occured during processing.\n  Error="
               << kerrToCatch.errcId() << kCIDLib::NewLn << kCIDLib::EndLn;
        return tCIDLib::EExitCodes::FatalError;
    }

    // Catch a general exception
    catch(...)
    {
        conOut << L"A general exception occured during processing\n"
               << kCIDLib::EndLn;
        return tCIDLib::EExitCodes::SystemException;
    }

    return tCIDLib::EExitCodes::Normal;
}

