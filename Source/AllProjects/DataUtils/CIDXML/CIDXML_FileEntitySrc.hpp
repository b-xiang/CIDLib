//
// FILE NAME: CIDXML_FileEntitySrc.hpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 08/20/1999
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
//  This is the header file for the CIDXML_FileEntitySrc.Cpp file, which
//  implements the TFileEntitySrc class. This is a derivative of the base
//  entity source class which provides support for file based sources.
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
//  CLASS: TFileEntitySrc
// PREFIX: xsrc
// ---------------------------------------------------------------------------
class CIDXMLEXP TFileEntitySrc : public TXMLEntitySrc
{
    public  :
        // -------------------------------------------------------------------
        //  Constructors and Destructor
        // -------------------------------------------------------------------
        TFileEntitySrc
        (
            const   TString&                strSystemId
        );

        TFileEntitySrc
        (
            const   TString&                strParentSysId
            , const TString&                strSystemId
        );

        TFileEntitySrc
        (
            const   TString&                strParentSysId
            , const TString&                strSystemId
            , const TString&                strPublicId
        );

        ~TFileEntitySrc();


        // -------------------------------------------------------------------
        //  Public, inherited methods
        // -------------------------------------------------------------------
        [[nodiscard]] TBinInStream* pstrmMakeNew() const;


    private :
        // -------------------------------------------------------------------
        //  Do any needed magic macros
        // -------------------------------------------------------------------
        RTTIDefs(TFileEntitySrc,TXMLEntitySrc)
        DefPolyDup(TFileEntitySrc)
};

#pragma CIDLIB_POPPACK
