//
// FILE NAME: CIDEncode_Type.hpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 05/29/1999
//
// COPYRIGHT: $_CIDLib_CopyRight_$
//
//  $_CIDLib_CopyRight2_$
//
// DESCRIPTION:
//
//  This is the public types header for the CIDEncode facility. It contains
//  all the non-class public types.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
//  $_CIDLib_Log_$
//
#pragma once


namespace tCIDEncode
{
    // -----------------------------------------------------------------------
    //  This small structure is used where a mapping to or from a single byte
    //  character set to the Unicode character set is needed, which is pretty
    //  often.
    // -----------------------------------------------------------------------
    struct TCharMap
    {
        tCIDLib::TCh        chWide;
        tCIDLib::TCard1     c1Byte;
    };


    // -----------------------------------------------------------------------
    //  A counted pointer around a base text converter. This is used to return
    //  newly gen'ed up converters in a by value sort of way. They can also
    //  just have a pointer returned.
    // -----------------------------------------------------------------------
    using TTCvtPtr = TCntPtr<TTextConverter>;
}

