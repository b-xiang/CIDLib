//
// FILE NAME: CIDKernel_RawBits_Linux.Cpp
//
// AUTHOR: Will Mason
//
// CREATED: 02/25/1999
//
// COPYRIGHT: $_CIDLib_CopyRight_$
//
//  $_CIDLib_CopyRight2_$
//
// DESCRIPTION:
//
//  This file provides a set of methods for manipulating raw bit fields
//  inside various fundamental types. Most of them are inline and are
//  platform independent. This file provides the Win32 specific implementation
//  of a couple of them that require system services.
//
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
//  $_CIDLib_Log_$
//

// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include    "CIDKernel_.hpp"


// ---------------------------------------------------------------------------
//  Public functions
// ---------------------------------------------------------------------------
tCIDLib::TCard4 TRawBits::c4RotateLeft( const   tCIDLib::TCard4 c4Value
                                        , const tCIDLib::TCard4 c4RotateCount)
{
    tCIDLib::TCard4 c4Count = c4RotateCount % 32;
    return (c4Value << c4Count) | (c4Value >> (32 - c4Count));
}

tCIDLib::TCard4 TRawBits::c4RotateRight(const   tCIDLib::TCard4 c4Value
                                        , const tCIDLib::TCard4 c4RotateCount)
{
    tCIDLib::TCard4 c4Count = c4RotateCount % 32;
    return (c4Value >> c4Count) | (c4Value << (32 - c4Count));
}
