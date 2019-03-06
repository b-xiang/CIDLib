// ----------------------------------------------------------------------------
//  FILE: TestOrb3_Types.hpp
//  DATE: Tue, Feb 26 15:38:53 2019 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------
#pragma once

#pragma CIDLIB_PACK(CIDLIBPACK)

// ----------------------------------------------------------------------------
// Types namespace
// ----------------------------------------------------------------------------
namespace tTestOrb3
{
    
    // ------------------------------------------------------------------------
    //  A test enum
    //                  
    // ------------------------------------------------------------------------
    enum class ETests
    {
        Val1
        , Val2
        , Val3
        , Count
        , Min = Val1
        , Max = Val3
        , ASynVal = Val3
    };
     const TString& strAltXlatETests(const ETests eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
     ETests eAltXlatETests(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     const TString& strAltXlat2ETests(const ETests eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
     ETests eAltXlat2ETests(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     tCIDLib::TVoid FormatETests
        (
                         TString&            strTarget
              , const    TString&            strPrefix
              , const    tCIDLib::TCh        chSepChar
              , const    TEnumMap::ETextVals eVal = TEnumMap::ETextVals::BaseName
        );
     tCIDLib::TBoolean bIsValidEnum(const ETests eVal);

    
    // ------------------------------------------------------------------------
    //  A loaded text test enum
    //                  
    // ------------------------------------------------------------------------
    enum class ELoadedVals
    {
        Val1
        , Val2
        , Val3
        , Count
        , Min = Val1
        , Max = Val3
    };
     const TString& strLoadELoadedVals(const ELoadedVals eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     tCIDLib::TInt4 i4AltNumELoadedVals(const ELoadedVals eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     ELoadedVals eAltNumELoadedVals(const tCIDLib::TInt4 i4Xlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     tCIDLib::TBoolean bIsValidEnum(const ELoadedVals eVal);

    
    // ------------------------------------------------------------------------
    //  A bitmapped (non-contiguous) text enum
    //                  
    // ------------------------------------------------------------------------
    enum class EBmpEnum : tCIDLib::TCard4
    {
        Bmp1 = 0x0001
        , Bmp2 = 0x0010
        , Bmp3 = 0x0200
        , Bmp23 = 0x0210
        , Count = 4
        , None = 0
        , AllBits = 0x211
    };
     EBmpEnum eXlatEBmpEnum(const TString& strToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::False);
     const TString& strXlatEBmpEnum(const EBmpEnum eToXlat, const tCIDLib::TBoolean bThrowIfNot = kCIDLib::True);
     tCIDLib::TVoid FormatEBmpEnum
        (
                         TString&            strTarget
              , const    TString&            strPrefix
              , const    tCIDLib::TCh        chSepChar
              , const    TEnumMap::ETextVals eVal = TEnumMap::ETextVals::Text
        );
     tCIDLib::TBoolean bIsValidEnum(const EBmpEnum eVal);

}

#pragma CIDLIB_POPPACK

 tTestOrb3::ETests operator++(tTestOrb3::ETests& eVal, int);
 TTextOutStream& operator<<(TTextOutStream& strmTar, const tTestOrb3::ETests eToStream);

 TTextOutStream& operator<<(TTextOutStream& strmTar, const tTestOrb3::ELoadedVals eToStream);

constexpr tTestOrb3::EBmpEnum operator|(const tTestOrb3::EBmpEnum eLHS, const tTestOrb3::EBmpEnum eRHS)
{    
    return tTestOrb3::EBmpEnum(tCIDLib::TEnumMaskType(eLHS) | tCIDLib::TEnumMaskType(eRHS));
}
constexpr tTestOrb3::EBmpEnum& operator|=(tTestOrb3::EBmpEnum& eLHS, const tTestOrb3::EBmpEnum eRHS)
{    
    eLHS = tTestOrb3::EBmpEnum(tCIDLib::TEnumMaskType(eLHS) | tCIDLib::TEnumMaskType(eRHS));
    return eLHS;
}
constexpr tTestOrb3::EBmpEnum operator&(const tTestOrb3::EBmpEnum eLHS, const tTestOrb3::EBmpEnum eRHS)
{    
    return tTestOrb3::EBmpEnum(tCIDLib::TEnumMaskType(eLHS) & tCIDLib::TEnumMaskType(eRHS));
}
constexpr tTestOrb3::EBmpEnum& operator&=(tTestOrb3::EBmpEnum& eLHS, const tTestOrb3::EBmpEnum eRHS)
{    
    eLHS = tTestOrb3::EBmpEnum(tCIDLib::TEnumMaskType(eLHS) & tCIDLib::TEnumMaskType(eRHS));
    return eLHS;
}
 TTextOutStream& operator<<(TTextOutStream& strmTar, const tTestOrb3::EBmpEnum eToStream);

