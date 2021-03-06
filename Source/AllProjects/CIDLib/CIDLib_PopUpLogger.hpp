//
// FILE NAME: CIDLib_PopUpLogger.hpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 11/27/1996
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2019
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and
//  the author (Dean Roddey.) It is licensed under the MIT Open Source
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  This is the header file for the CIDLib_PopUpLogger.Cpp file. This
//  file provides a simple implementation of MLogger, and supports logging
//  via the popup mechanism. This is sometimes useful during debugging.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
//  $_CIDLib_Log_$
//
#pragma once


#pragma CIDLIB_PACK(CIDLIBPACK)

// ---------------------------------------------------------------------------
//  CLASS: TPopUpLogger
// PREFIX: lgr
// ---------------------------------------------------------------------------
class CIDLIBEXP TPopUpLogger : public TObject, public MLogger
{
    public  :
        // -------------------------------------------------------------------
        //  Constructors and Destructor.
        // -------------------------------------------------------------------
        TPopUpLogger();

        TPopUpLogger(const TPopUpLogger&) = delete;

        ~TPopUpLogger();


        // -------------------------------------------------------------------
        //  Public operators
        // -------------------------------------------------------------------
        TPopUpLogger& operator=(const TPopUpLogger&) = delete;


        // -------------------------------------------------------------------
        //  Public, inherited methods
        // -------------------------------------------------------------------
        tCIDLib::TVoid LogEvent
        (
            const   TLogEvent&              logevToLog
        );


    private :
        // -------------------------------------------------------------------
        //  Do any needed magic macros
        // -------------------------------------------------------------------
        RTTIDefs(TPopUpLogger,TObject)
};

#pragma CIDLIB_POPPACK
