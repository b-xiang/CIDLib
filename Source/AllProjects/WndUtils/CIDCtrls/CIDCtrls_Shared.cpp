// ----------------------------------------------------------------------------
//  FILE: CIDCtrls_Shared.cpp
//  DATE: Tue, Feb 26 15:38:52 2019 -0500
//
//  This file was generated by the Charmed Quark CIDIDL compiler. Do not make
//  changes by hand, because they will be lost if the file is regenerated.
// ----------------------------------------------------------------------------

#include "CIDCtrls_.hpp"

const TString kCIDCtrls::strDlgFlag_Sizeable(L"Sizeable");
const TString kCIDCtrls::strDlgFlag_ScreenOrigin(L"ScreenOrigin");
const TString kCIDCtrls::strDlgFlag_SetFgn(L"SetFgn");
const TString kCIDCtrls::strDlgFlag_UseOrigin(L"UseOrigin");
const TString kCIDCtrls::strDlgItemFlag_InitFocus(L"InitFocus");
const TString kCIDCtrls::strDlgItemFlag_Disabled(L"Disabled");
const TString kCIDCtrls::strHint_Animate(L"Animate");
const TString kCIDCtrls::strHint_AutoAll(L"AutoAll");
const TString kCIDCtrls::strHint_AutoLast(L"AutoLast");
const TString kCIDCtrls::strHint_AutoScroll(L"AutoScroll");
const TString kCIDCtrls::strHint_AutoSort(L"AutoSort");
const TString kCIDCtrls::strHint_AutoTicks(L"AutoTicks");
const TString kCIDCtrls::strHint_Border(L"Border");
const TString kCIDCtrls::strHint_Center(L"Center");
const TString kCIDCtrls::strHint_EndEllipsis(L"EndEllipsis");
const TString kCIDCtrls::strHint_CheckBox(L"CheckBox");
const TString kCIDCtrls::strHint_ColSort(L"ColSort");
const TString kCIDCtrls::strHint_CurValue(L"CurValue");
const TString kCIDCtrls::strHint_DefButton(L"DefButton");
const TString kCIDCtrls::strHint_EmphVal(L"EmphVal");
const TString kCIDCtrls::strHint_FinePrint(L"FinePrint");
const TString kCIDCtrls::strHint_FixedFirst(L"FixedFirst");
const TString kCIDCtrls::strHint_Grid(L"Grid");
const TString kCIDCtrls::strHint_Group(L"Group");
const TString kCIDCtrls::strHint_HorzScroll(L"HorzScroll");
const TString kCIDCtrls::strHint_Instruct(L"Instruct");
const TString kCIDCtrls::strHint_Invoke(L"Invoke");
const TString kCIDCtrls::strHint_Label(L"Label");
const TString kCIDCtrls::strHint_LeftSide(L"LeftSide");
const TString kCIDCtrls::strHint_LiveTrack(L"LiveTrack");
const TString kCIDCtrls::strHint_MultiVal(L"MultiVal");
const TString kCIDCtrls::strHint_NoAutoCheck(L"NoAutoCheck");
const TString kCIDCtrls::strHint_NoBorder(L"NoBorder");
const TString kCIDCtrls::strHint_NoTitles(L"NoTitles");
const TString kCIDCtrls::strHint_Number(L"Number");
const TString kCIDCtrls::strHint_ParentMenu(L"ParentMenu");
const TString kCIDCtrls::strHint_Password(L"Password");
const TString kCIDCtrls::strHint_Prefix(L"Prefix");
const TString kCIDCtrls::strHint_ReadOnly(L"ReadOnly");
const TString kCIDCtrls::strHint_ReportChanges(L"ReportChanges");
const TString kCIDCtrls::strHint_ReportClicks(L"ReportClicks");
const TString kCIDCtrls::strHint_SourceCode(L"SourceCode");
const TString kCIDCtrls::strHint_Sort(L"Sort");
const TString kCIDCtrls::strHint_Ticks(L"Ticks");
const TString kCIDCtrls::strHint_TopLevel(L"TopLevel");
const TString kCIDCtrls::strHint_Title(L"Title");
const TString kCIDCtrls::strHint_Transparent(L"Transparent");
const TString kCIDCtrls::strHint_TwoLine(L"TwoLine");
const TString kCIDCtrls::strHint_Vertical(L"Vertical");
const TString kCIDCtrls::strHint_VertScroll(L"VertScroll");
const TString kCIDCtrls::strHint_WantEnter(L"WantEnter");
const TString kCIDCtrls::strHint_Wrap(L"Wrap");


static TEnumMap::TEnumValItem aeitemValues_ECalStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ECalStyles::SizeTo), 0, 0,  { L"", L"", L"", L"SizeTo", L"ECalStyles::SizeTo", L"" } }

};

static TEnumMap emapECalStyles
(
     L"ECalStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_ECalStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ECalStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ECalStyles eVal)
{
    return emapECalStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ECBStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ECBStyles::NoAuto), 0, 0,  { L"", L"", L"", L"NoAuto", L"ECBStyles::NoAuto", L"" } }

};

static TEnumMap emapECBStyles
(
     L"ECBStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_ECBStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ECBStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ECBStyles eVal)
{
    return emapECBStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EComboStyles[2] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EComboStyles::ReadOnly), 0, 0,  { L"", L"", L"", L"ReadOnly", L"EComboStyles::ReadOnly", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EComboStyles::Sort), 0, 0,  { L"", L"", L"", L"Sort", L"EComboStyles::Sort", L"" } }

};

static TEnumMap emapEComboStyles
(
     L"EComboStyles"
     , 2
     , kCIDLib::True
     , aeitemValues_EComboStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EComboStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EComboStyles eVal)
{
    return emapEComboStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ECustDrFlags[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ECustDrFlags::Disabled), 0, 0,  { L"", L"", L"", L"Disabled", L"ECustDrFlags::Disabled", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ECustDrFlags::Selected), 0, 0,  { L"", L"", L"", L"Selected", L"ECustDrFlags::Selected", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ECustDrFlags::Focus), 0, 0,  { L"", L"", L"", L"Focus", L"ECustDrFlags::Focus", L"" } }

};

static TEnumMap emapECustDrFlags
(
     L"ECustDrFlags"
     , 3
     , kCIDLib::True
     , aeitemValues_ECustDrFlags
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ECustDrFlags::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ECustDrFlags eVal)
{
    return emapECustDrFlags.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EEFStyles[6] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EEFStyles::Password), 0, 0,  { L"", L"", L"", L"Password", L"EEFStyles::Password", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EEFStyles::Number), 0, 0,  { L"", L"", L"", L"Number", L"EEFStyles::Number", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EEFStyles::UpperCase), 0, 0,  { L"", L"", L"", L"UpperCase", L"EEFStyles::UpperCase", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EEFStyles::CueOnFocus), 0, 0,  { L"", L"", L"", L"CueOnFocus", L"EEFStyles::CueOnFocus", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EEFStyles::ParentMenu), 0, 0,  { L"", L"", L"", L"ParentMenu", L"EEFStyles::ParentMenu", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EEFStyles::ReadOnly), 0, 0,  { L"", L"", L"", L"ReadOnly", L"EEFStyles::ReadOnly", L"" } }

};

static TEnumMap emapEEFStyles
(
     L"EEFStyles"
     , 6
     , kCIDLib::True
     , aeitemValues_EEFStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EEFStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EEFStyles eVal)
{
    return emapEEFStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EFOpenOpts[9] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::ConfirmPrompt), 0, 0,  { L"", L"", L"", L"ConfirmPrompt", L"EFOpenOpts::ConfirmPrompt", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::FileMustExist), 0, 0,  { L"", L"", L"", L"FileMustExist", L"EFOpenOpts::FileMustExist", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::FileSystemOnly), 0, 0,  { L"", L"", L"", L"FileSystemOnly", L"EFOpenOpts::FileSystemOnly", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::MultiSelect), 0, 0,  { L"", L"", L"", L"MultiSelect", L"EFOpenOpts::MultiSelect", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::NoReadOnly), 0, 0,  { L"", L"", L"", L"NoReadOnly", L"EFOpenOpts::NoReadOnly", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::PathMustExist), 0, 0,  { L"", L"", L"", L"PathMustExist", L"EFOpenOpts::PathMustExist", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::SelectFolders), 0, 0,  { L"", L"", L"", L"SelectFolders", L"EFOpenOpts::SelectFolders", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::ShowSpecialFiles), 0, 0,  { L"", L"", L"", L"ShowSpecialFiles", L"EFOpenOpts::ShowSpecialFiles", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFOpenOpts::StrictTypes), 0, 0,  { L"", L"", L"", L"StrictTypes", L"EFOpenOpts::StrictTypes", L"" } }

};

static TEnumMap emapEFOpenOpts
(
     L"EFOpenOpts"
     , 9
     , kCIDLib::True
     , aeitemValues_EFOpenOpts
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EFOpenOpts::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EFOpenOpts eVal)
{
    return emapEFOpenOpts.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EFrameStyles[6] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EFrameStyles::NoActivate), 0, 0,  { L"", L"", L"", L"NoActivate", L"EFrameStyles::NoActivate", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFrameStyles::StatusBar), 0, 0,  { L"", L"", L"", L"StatusBar", L"EFrameStyles::StatusBar", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFrameStyles::MaxButton), 0, 0,  { L"", L"", L"", L"MaxButton", L"EFrameStyles::MaxButton", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFrameStyles::MinButton), 0, 0,  { L"", L"", L"", L"MinButton", L"EFrameStyles::MinButton", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFrameStyles::SysMenu), 0, 0,  { L"", L"", L"", L"SysMenu", L"EFrameStyles::SysMenu", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EFrameStyles::NoClose), 0, 0,  { L"", L"", L"", L"NoClose", L"EFrameStyles::NoClose", L"" } }

};

static TEnumMap emapEFrameStyles
(
     L"EFrameStyles"
     , 6
     , kCIDLib::True
     , aeitemValues_EFrameStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EFrameStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EFrameStyles eVal)
{
    return emapEFrameStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ELBStyles[6] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ELBStyles::Sorted), 0, 0,  { L"", L"", L"", L"Sorted", L"ELBStyles::Sorted", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ELBStyles::MultiSel), 0, 0,  { L"", L"", L"", L"MultiSel", L"ELBStyles::MultiSel", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ELBStyles::ScrollAlways), 0, 0,  { L"", L"", L"", L"ScrollAlways", L"ELBStyles::ScrollAlways", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ELBStyles::ReadOnly), 0, 0,  { L"", L"", L"", L"ReadOnly", L"ELBStyles::ReadOnly", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ELBStyles::AutoAddBottom), 0, 0,  { L"", L"", L"", L"AutoAddBottom", L"ELBStyles::AutoAddBottom", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ELBStyles::CustDraw), 0, 0,  { L"", L"", L"", L"CustDraw", L"ELBStyles::CustDraw", L"" } }

};

static TEnumMap emapELBStyles
(
     L"ELBStyles"
     , 6
     , kCIDLib::True
     , aeitemValues_ELBStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ELBStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ELBStyles eVal)
{
    return emapELBStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMCLBStyles[10] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::NoTitles), 0, 0,  { L"", L"", L"", L"NoTitles", L"EMCLBStyles::NoTitles", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::MultiSel), 0, 0,  { L"", L"", L"", L"MultiSel", L"EMCLBStyles::MultiSel", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::FullRowSel), 0, 0,  { L"", L"", L"", L"FullRowSel", L"EMCLBStyles::FullRowSel", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::AutoLastCol), 0, 0,  { L"", L"", L"", L"AutoLastCol", L"EMCLBStyles::AutoLastCol", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::NoColResize), 0, 0,  { L"", L"", L"", L"NoColResize", L"EMCLBStyles::NoColResize", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::ColSort), 0, 0,  { L"", L"", L"", L"ColSort", L"EMCLBStyles::ColSort", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::DblBuffer), 0, 0,  { L"", L"", L"", L"DblBuffer", L"EMCLBStyles::DblBuffer", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::Sorted), 0, 0,  { L"", L"", L"", L"Sorted", L"EMCLBStyles::Sorted", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::FocusSel), 0, 0,  { L"", L"", L"", L"FocusSel", L"EMCLBStyles::FocusSel", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBStyles::GridLines), 0, 0,  { L"", L"", L"", L"GridLines", L"EMCLBStyles::GridLines", L"" } }

};

static TEnumMap emapEMCLBStyles
(
     L"EMCLBStyles"
     , 10
     , kCIDLib::True
     , aeitemValues_EMCLBStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EMCLBStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EMCLBStyles eVal)
{
    return emapEMCLBStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMCLBCustOpts[5] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustOpts::PreRow), 0, 0,  { L"", L"", L"", L"PreRow", L"EMCLBCustOpts::PreRow", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustOpts::PostRow), 0, 0,  { L"", L"", L"", L"PostRow", L"EMCLBCustOpts::PostRow", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustOpts::PreCol), 0, 0,  { L"", L"", L"", L"PreCol", L"EMCLBCustOpts::PreCol", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustOpts::PostCol), 0, 0,  { L"", L"", L"", L"PostCol", L"EMCLBCustOpts::PostCol", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustOpts::PostDraw), 0, 0,  { L"", L"", L"", L"PostDraw", L"EMCLBCustOpts::PostDraw", L"" } }

};

static TEnumMap emapEMCLBCustOpts
(
     L"EMCLBCustOpts"
     , 5
     , kCIDLib::True
     , aeitemValues_EMCLBCustOpts
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EMCLBCustOpts::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EMCLBCustOpts eVal)
{
    return emapEMCLBCustOpts.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMCLBCustRets[4] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustRets::NewFont), 0, 0,  { L"", L"", L"", L"NewFont", L"EMCLBCustRets::NewFont", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustRets::DontDraw), 0, 0,  { L"", L"", L"", L"DontDraw", L"EMCLBCustRets::DontDraw", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustRets::NewTextClr), 0, 0,  { L"", L"", L"", L"NewTextClr", L"EMCLBCustRets::NewTextClr", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMCLBCustRets::NewBgnClr), 0, 0,  { L"", L"", L"", L"NewBgnClr", L"EMCLBCustRets::NewBgnClr", L"" } }

};

static TEnumMap emapEMCLBCustRets
(
     L"EMCLBCustRets"
     , 4
     , kCIDLib::True
     , aeitemValues_EMCLBCustRets
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EMCLBCustRets::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EMCLBCustRets eVal)
{
    return emapEMCLBCustRets.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMLEStyles[4] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EMLEStyles::AutoScroll), 0, 0,  { L"", L"", L"", L"AutoScroll", L"EMLEStyles::AutoScroll", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMLEStyles::WantEnter), 0, 0,  { L"", L"", L"", L"WantEnter", L"EMLEStyles::WantEnter", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMLEStyles::ReadOnly), 0, 0,  { L"", L"", L"", L"ReadOnly", L"EMLEStyles::ReadOnly", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMLEStyles::ReportChanges), 0, 0,  { L"", L"", L"", L"ReportChanges", L"EMLEStyles::ReportChanges", L"" } }

};

static TEnumMap emapEMLEStyles
(
     L"EMLEStyles"
     , 4
     , kCIDLib::True
     , aeitemValues_EMLEStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EMLEStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EMLEStyles eVal)
{
    return emapEMLEStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMLSStyles[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EMLSStyles::ReportClicks), 0, 0,  { L"", L"", L"", L"ReportClicks", L"EMLSStyles::ReportClicks", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMLSStyles::SizeToText), 0, 0,  { L"", L"", L"", L"SizeToText", L"EMLSStyles::SizeToText", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMLSStyles::NoWrap), 0, 0,  { L"", L"", L"", L"NoWrap", L"EMLSStyles::NoWrap", L"" } }

};

static TEnumMap emapEMLSStyles
(
     L"EMLSStyles"
     , 3
     , kCIDLib::True
     , aeitemValues_EMLSStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EMLSStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EMLSStyles eVal)
{
    return emapEMLSStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMouseActs[5] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EMouseActs::None), 0, 0,  { L"", L"", L"", L"None", L"EMouseActs::None", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMouseActs::Activate), 0, 0,  { L"", L"", L"", L"Activate", L"EMouseActs::Activate", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMouseActs::ActivateEat), 0, 0,  { L"", L"", L"", L"ActivateEat", L"EMouseActs::ActivateEat", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMouseActs::NoActivate), 0, 0,  { L"", L"", L"", L"NoActivate", L"EMouseActs::NoActivate", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMouseActs::NoActivateEat), 0, 0,  { L"", L"", L"", L"NoActivateEat", L"EMouseActs::NoActivateEat", L"" } }

};

static TEnumMap emapEMouseActs
(
     L"EMouseActs"
     , 5
     , kCIDLib::False
     , aeitemValues_EMouseActs
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EMouseActs::Count)
);

TTextOutStream& operator<<(TTextOutStream& strmTar, const tCIDCtrls::EMouseActs eVal)
{
    strmTar << emapEMouseActs.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, kCIDLib::False);
    return strmTar;
}
tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EMouseActs eVal)
{
    return emapEMouseActs.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMouseButts[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EMouseButts::Left), 0, 0,  { L"", L"", L"", L"Left", L"EMouseButts::Left", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMouseButts::Middle), 0, 0,  { L"", L"", L"", L"Middle", L"EMouseButts::Middle", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMouseButts::Right), 0, 0,  { L"", L"", L"", L"Right", L"EMouseButts::Right", L"" } }

};

static TEnumMap emapEMouseButts
(
     L"EMouseButts"
     , 3
     , kCIDLib::False
     , aeitemValues_EMouseButts
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EMouseButts::Count)
);

const TString& tCIDCtrls::strXlatEMouseButts(const tCIDCtrls::EMouseButts eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMouseButts.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCIDCtrls::EMouseButts tCIDCtrls::eXlatEMouseButts(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDCtrls::EMouseButts(emapEMouseButts.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TTextOutStream& operator<<(TTextOutStream& strmTar, const tCIDCtrls::EMouseButts eVal)
{
    strmTar << emapEMouseButts.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, kCIDLib::False);
    return strmTar;
}
tCIDCtrls::EMouseButts operator++(tCIDCtrls::EMouseButts& eVal, int)
{
    tCIDCtrls::EMouseButts eTmp = eVal;
    eVal = tCIDCtrls::EMouseButts(int(eVal)+1);
    return eTmp;
}

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EMouseButts eVal)
{
    return emapEMouseButts.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EMouseClicks[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EMouseClicks::Down), 0, 0,  { L"", L"", L"", L"Down", L"EMouseClicks::Down", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMouseClicks::Up), 0, 0,  { L"", L"", L"", L"Up", L"EMouseClicks::Up", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EMouseClicks::Double), 0, 0,  { L"", L"", L"", L"Double", L"EMouseClicks::Double", L"" } }

};

static TEnumMap emapEMouseClicks
(
     L"EMouseClicks"
     , 3
     , kCIDLib::False
     , aeitemValues_EMouseClicks
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EMouseClicks::Count)
);

const TString& tCIDCtrls::strXlatEMouseClicks(const tCIDCtrls::EMouseClicks eVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return emapEMouseClicks.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, bThrowIfNot);
}

tCIDCtrls::EMouseClicks tCIDCtrls::eXlatEMouseClicks(const TString& strVal, const tCIDLib::TBoolean bThrowIfNot)
{
    return tCIDCtrls::EMouseClicks(emapEMouseClicks.i4MapEnumText(strVal, TEnumMap::ETextVals::BaseName, bThrowIfNot));
}

TTextOutStream& operator<<(TTextOutStream& strmTar, const tCIDCtrls::EMouseClicks eVal)
{
    strmTar << emapEMouseClicks.strMapEnumVal(tCIDLib::TCard4(eVal), TEnumMap::ETextVals::BaseName, kCIDLib::False);
    return strmTar;
}
tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EMouseClicks eVal)
{
    return emapEMouseClicks.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EObjVStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EObjVStyles::MultiSel), 0, 0,  { L"", L"", L"", L"MultiSel", L"EObjVStyles::MultiSel", L"" } }

};

static TEnumMap emapEObjVStyles
(
     L"EObjVStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_EObjVStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EObjVStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EObjVStyles eVal)
{
    return emapEObjVStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EPBarStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EPBarStyles::Vertical), 0, 0,  { L"", L"", L"", L"Vertical", L"EPBarStyles::Vertical", L"" } }

};

static TEnumMap emapEPBarStyles
(
     L"EPBarStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_EPBarStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EPBarStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EPBarStyles eVal)
{
    return emapEPBarStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EPButtStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EPButtStyles::Default), 0, 0,  { L"", L"", L"", L"Default", L"EPButtStyles::Default", L"" } }

};

static TEnumMap emapEPButtStyles
(
     L"EPButtStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_EPButtStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EPButtStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EPButtStyles eVal)
{
    return emapEPButtStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ERBStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ERBStyles::NoAuto), 0, 0,  { L"", L"", L"", L"NoAuto", L"ERBStyles::NoAuto", L"" } }

};

static TEnumMap emapERBStyles
(
     L"ERBStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_ERBStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ERBStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ERBStyles eVal)
{
    return emapERBStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EScrAStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EScrAStyles::PlaceHolder), 0, 0,  { L"", L"", L"", L"PlaceHolder", L"EScrAStyles::PlaceHolder", L"" } }

};

static TEnumMap emapEScrAStyles
(
     L"EScrAStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_EScrAStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EScrAStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EScrAStyles eVal)
{
    return emapEScrAStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ESBStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ESBStyles::Placeholder), 0, 0,  { L"", L"", L"", L"Placeholder", L"ESBStyles::Placeholder", L"" } }

};

static TEnumMap emapESBStyles
(
     L"ESBStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_ESBStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ESBStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ESBStyles eVal)
{
    return emapESBStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ESldrStyles[4] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ESldrStyles::TrackEvs), 0, 0,  { L"", L"", L"", L"TrackEvs", L"ESldrStyles::TrackEvs", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ESldrStyles::Ticks), 0, 0,  { L"", L"", L"", L"Ticks", L"ESldrStyles::Ticks", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ESldrStyles::Vertical), 0, 0,  { L"", L"", L"", L"Vertical", L"ESldrStyles::Vertical", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ESldrStyles::AutoTicks), 0, 0,  { L"", L"", L"", L"AutoTicks", L"ESldrStyles::AutoTicks", L"" } }

};

static TEnumMap emapESldrStyles
(
     L"ESldrStyles"
     , 4
     , kCIDLib::True
     , aeitemValues_ESldrStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ESldrStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ESldrStyles eVal)
{
    return emapESldrStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ESpinStyles[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ESpinStyles::Wrap), 0, 0,  { L"", L"", L"", L"Wrap", L"ESpinStyles::Wrap", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ESpinStyles::Numeric), 0, 0,  { L"", L"", L"", L"Numeric", L"ESpinStyles::Numeric", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ESpinStyles::ReadOnly), 0, 0,  { L"", L"", L"", L"ReadOnly", L"ESpinStyles::ReadOnly", L"" } }

};

static TEnumMap emapESpinStyles
(
     L"ESpinStyles"
     , 3
     , kCIDLib::True
     , aeitemValues_ESpinStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ESpinStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ESpinStyles eVal)
{
    return emapESpinStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ESClrStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ESClrStyles::ReportClicks), 0, 0,  { L"", L"", L"", L"ReportClicks", L"ESClrStyles::ReportClicks", L"" } }

};

static TEnumMap emapESClrStyles
(
     L"ESClrStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_ESClrStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ESClrStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ESClrStyles eVal)
{
    return emapESClrStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ESImgStyles[2] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ESImgStyles::ReportClicks), 0, 0,  { L"", L"", L"", L"ReportClicks", L"ESImgStyles::ReportClicks", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ESImgStyles::Transparent), 0, 0,  { L"", L"", L"", L"Transparent", L"ESImgStyles::Transparent", L"" } }

};

static TEnumMap emapESImgStyles
(
     L"ESImgStyles"
     , 2
     , kCIDLib::True
     , aeitemValues_ESImgStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ESImgStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ESImgStyles eVal)
{
    return emapESImgStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ESTextStyles[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ESTextStyles::NoMnemonics), 0, 0,  { L"", L"", L"", L"NoMnemonics", L"ESTextStyles::NoMnemonics", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ESTextStyles::ReportClicks), 0, 0,  { L"", L"", L"", L"ReportClicks", L"ESTextStyles::ReportClicks", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ESTextStyles::EndEllipsis), 0, 0,  { L"", L"", L"", L"EndEllipsis", L"ESTextStyles::EndEllipsis", L"" } }

};

static TEnumMap emapESTextStyles
(
     L"ESTextStyles"
     , 3
     , kCIDLib::True
     , aeitemValues_ESTextStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ESTextStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ESTextStyles eVal)
{
    return emapESTextStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ETabWStyles[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ETabWStyles::TwoLineHdr), 0, 0,  { L"", L"", L"", L"TwoLineHdr", L"ETabWStyles::TwoLineHdr", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETabWStyles::FixedFirst), 0, 0,  { L"", L"", L"", L"FixedFirst", L"ETabWStyles::FixedFirst", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETabWStyles::TopLevel), 0, 0,  { L"", L"", L"", L"TopLevel", L"ETabWStyles::TopLevel", L"" } }

};

static TEnumMap emapETabWStyles
(
     L"ETabWStyles"
     , 3
     , kCIDLib::True
     , aeitemValues_ETabWStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ETabWStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ETabWStyles eVal)
{
    return emapETabWStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ETreeStyles[6] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ETreeStyles::CheckBoxes), 0, 0,  { L"", L"", L"", L"CheckBoxes", L"ETreeStyles::CheckBoxes", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeStyles::HasLines), 0, 0,  { L"", L"", L"", L"HasLines", L"ETreeStyles::HasLines", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeStyles::ReadOnly), 0, 0,  { L"", L"", L"", L"ReadOnly", L"ETreeStyles::ReadOnly", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeStyles::SingleExp), 0, 0,  { L"", L"", L"", L"SingleExp", L"ETreeStyles::SingleExp", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeStyles::ToolTips), 0, 0,  { L"", L"", L"", L"ToolTips", L"ETreeStyles::ToolTips", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeStyles::InvokeOnEnter), 0, 0,  { L"", L"", L"", L"InvokeOnEnter", L"ETreeStyles::InvokeOnEnter", L"" } }

};

static TEnumMap emapETreeStyles
(
     L"ETreeStyles"
     , 6
     , kCIDLib::True
     , aeitemValues_ETreeStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ETreeStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ETreeStyles eVal)
{
    return emapETreeStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ETreeCustOpts[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ETreeCustOpts::PreItem), 0, 0,  { L"", L"", L"", L"PreItem", L"ETreeCustOpts::PreItem", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeCustOpts::PostItem), 0, 0,  { L"", L"", L"", L"PostItem", L"ETreeCustOpts::PostItem", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeCustOpts::PostDraw), 0, 0,  { L"", L"", L"", L"PostDraw", L"ETreeCustOpts::PostDraw", L"" } }

};

static TEnumMap emapETreeCustOpts
(
     L"ETreeCustOpts"
     , 3
     , kCIDLib::True
     , aeitemValues_ETreeCustOpts
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ETreeCustOpts::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ETreeCustOpts eVal)
{
    return emapETreeCustOpts.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_ETreeCustRets[3] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::ETreeCustRets::NewFont), 0, 0,  { L"", L"", L"", L"NewFont", L"ETreeCustRets::NewFont", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeCustRets::NewTextClr), 0, 0,  { L"", L"", L"", L"NewTextClr", L"ETreeCustRets::NewTextClr", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::ETreeCustRets::NewBgnClr), 0, 0,  { L"", L"", L"", L"NewBgnClr", L"ETreeCustRets::NewBgnClr", L"" } }

};

static TEnumMap emapETreeCustRets
(
     L"ETreeCustRets"
     , 3
     , kCIDLib::True
     , aeitemValues_ETreeCustRets
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::ETreeCustRets::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::ETreeCustRets eVal)
{
    return emapETreeCustRets.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EUpDnStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EUpDnStyles::Wrap), 0, 0,  { L"", L"", L"", L"Wrap", L"EUpDnStyles::Wrap", L"" } }

};

static TEnumMap emapEUpDnStyles
(
     L"EUpDnStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_EUpDnStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EUpDnStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EUpDnStyles eVal)
{
    return emapEUpDnStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EVSepStyles[1] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EVSepStyles::Left), 0, 0,  { L"", L"", L"", L"Left", L"EVSepStyles::Left", L"" } }

};

static TEnumMap emapEVSepStyles
(
     L"EVSepStyles"
     , 1
     , kCIDLib::True
     , aeitemValues_EVSepStyles
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EVSepStyles::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EVSepStyles eVal)
{
    return emapEVSepStyles.bIsValidEnum(tCIDLib::TCard4(eVal));

}



static TEnumMap::TEnumValItem aeitemValues_EWantInputs[4] = 
{
    {  tCIDLib::TInt4(tCIDCtrls::EWantInputs::AllKeys), 0, 0,  { L"", L"", L"", L"AllKeys", L"EWantInputs::AllKeys", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EWantInputs::Arrows), 0, 0,  { L"", L"", L"", L"Arrows", L"EWantInputs::Arrows", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EWantInputs::Chars), 0, 0,  { L"", L"", L"", L"Chars", L"EWantInputs::Chars", L"" } }
  , {  tCIDLib::TInt4(tCIDCtrls::EWantInputs::Tab), 0, 0,  { L"", L"", L"", L"Tab", L"EWantInputs::Tab", L"" } }

};

static TEnumMap emapEWantInputs
(
     L"EWantInputs"
     , 4
     , kCIDLib::True
     , aeitemValues_EWantInputs
     , nullptr
     , tCIDLib::TCard4(tCIDCtrls::EWantInputs::None)
);

tCIDLib::TBoolean tCIDCtrls::bIsValidEnum(const tCIDCtrls::EWantInputs eVal)
{
    return emapEWantInputs.bIsValidEnum(tCIDLib::TCard4(eVal));

}

