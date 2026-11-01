#include <Geode/binding/CustomizeObjectLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/25] Address: 0x13cbd0
// Method: CustomizeObjectLayer::~CustomizeObjectLayer
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CustomizeObjectLayer__dtor_CustomizeObjectLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx

  *Block = &CustomizeObjectLayer::`vftable'; /*0x13cbe6*/
  Block[40] = &CustomizeObjectLayer::`vftable'; /*0x13cbf0*/
  Block[41] = &CustomizeObjectLayer::`vftable'; /*0x13cbfe*/
  Block[42] = &CustomizeObjectLayer::`vftable'; /*0x13cc0c*/
  Block[43] = &CustomizeObjectLayer::`vftable'; /*0x13cc1a*/
  Block[44] = &CustomizeObjectLayer::`vftable'; /*0x13cc28*/
  Block[51] = &CustomizeObjectLayer::`vftable'; /*0x13cc36*/
  Block[54] = &CustomizeObjectLayer::`vftable'; /*0x13cc44*/
  Block[68] = &CustomizeObjectLayer::`vftable'; /*0x13cc52*/
  Block[83] = &CustomizeObjectLayer::`vftable'; /*0x13cc60*/
  Block[84] = &CustomizeObjectLayer::`vftable'; /*0x13cc6e*/
  Block[85] = &CustomizeObjectLayer::`vftable'; /*0x13cc7c*/
  v4 = (cocos2d::CCObject *)Block[87]; /*0x13cc83*/
  if ( v4 ) /*0x13cc8d*/
    cocos2d::CCObject::release(v4); /*0x13cc8f*/
  v5 = (cocos2d::CCObject *)Block[88]; /*0x13cc95*/
  if ( v5 ) /*0x13cc9f*/
    cocos2d::CCObject::release(v5); /*0x13cca1*/
  v6 = (cocos2d::CCObject *)Block[89]; /*0x13cca7*/
  if ( v6 ) /*0x13ccb1*/
    cocos2d::CCObject::release(v6); /*0x13ccb3*/
  v7 = (cocos2d::CCObject *)Block[90]; /*0x13ccb9*/
  if ( v7 ) /*0x13ccc3*/
    cocos2d::CCObject::release(v7); /*0x13ccc5*/
  v8 = (cocos2d::CCObject *)Block[92]; /*0x13cccb*/
  if ( v8 ) /*0x13ccd5*/
    cocos2d::CCObject::release(v8); /*0x13ccd7*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x13cce0*/
  if ( (a2 & 1) != 0 ) /*0x13ccea*/
    j_j_free(Block); /*0x13ccf4*/
  return Block; /*0x13ccfc*/
}

// [2/25] Address: 0x13cd50
// Method: CustomizeObjectLayer::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CustomizeObjectLayer_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x3A0u); /*0x13cd74*/
  FLAlertLayer_FLAlertLayer(v4); /*0x13cd7f*/
  *v4 = &CustomizeObjectLayer::`vftable'; /*0x13cd8b*/
  v4[40] = &CustomizeObjectLayer::`vftable'; /*0x13cd95*/
  v4[41] = &CustomizeObjectLayer::`vftable'; /*0x13cda3*/
  v4[42] = &CustomizeObjectLayer::`vftable'; /*0x13cdb1*/
  v4[43] = &CustomizeObjectLayer::`vftable'; /*0x13cdbf*/
  v4[44] = &CustomizeObjectLayer::`vftable'; /*0x13cdcd*/
  v4[51] = &CustomizeObjectLayer::`vftable'; /*0x13cddb*/
  v4[54] = &CustomizeObjectLayer::`vftable'; /*0x13cde9*/
  v4[68] = &CustomizeObjectLayer::`vftable'; /*0x13cdf7*/
  v4[83] = &CustomizeObjectLayer::`vftable'; /*0x13ce05*/
  v4[84] = &CustomizeObjectLayer::`vftable'; /*0x13ce13*/
  v4[85] = &CustomizeObjectLayer::`vftable'; /*0x13ce21*/
  v4[86] = 0; /*0x13ce2a*/
  v4[87] = 0; /*0x13ce31*/
  v4[88] = 0; /*0x13ce38*/
  v4[90] = 0; /*0x13ce3f*/
  *((_DWORD *)v4 + 186) = 1; /*0x13ce46*/
  *((_DWORD *)v4 + 187) = 10; /*0x13ce50*/
  *((_WORD *)v4 + 376) = 0; /*0x13ce5a*/
  v4[97] = 0; /*0x13ce61*/
  v4[98] = 0; /*0x13ce68*/
  v4[99] = 0; /*0x13ce6f*/
  v4[103] = 0; /*0x13ce76*/
  *((_DWORD *)v4 + 208) = 0; /*0x13ce7d*/
  v4[105] = 0; /*0x13ce83*/
  v4[106] = 0; /*0x13ce8a*/
  *((_WORD *)v4 + 460) = 0; /*0x13ce91*/
  *((_BYTE *)v4 + 922) = 0; /*0x13ce98*/
  if ( (unsigned __int8)CustomizeObjectLayer_init(v4, a1, a2) ) /*0x13cea8*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x13ceb4*/
    return v4; /*0x13ceba*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x13cece*/
    return 0; /*0x13ced1*/
  }
}

// [4/25] Address: 0x13fa20
// Method: CustomizeObjectLayer::sliderChanged
__int64 __fastcall CustomizeObjectLayer_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm0_4
  float v4; // xmm0_4
  __int64 v5; // rcx

  Value = SliderThumb_getValue(a2); /*0x13fa2c*/
  v4 = roundf((float)(Value * 30.0) - 10.0); /*0x13fa41*/
  v5 = *(_QWORD *)(a1 + 688); /*0x13fa46*/
  *(_DWORD *)(a1 + 832) = (int)v4; /*0x13fa51*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1600LL))(v5); /*0x13fa5a*/
  return sub_13F850(a1); /*0x13fa63*/
}

// [5/25] Address: 0x13fa70
// Method: CustomizeObjectLayer::onLiveEdit
// Hidden C++ exception states: #wind=1
__int64 __fastcall CustomizeObjectLayer_onLiveEdit(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *i; // rdi
  __int64 v12; // rcx
  void *v14; // [rsp+40h] [rbp+18h]

  LOBYTE(a2) = 1; /*0x13fa87*/
  v3 = sub_140FB0(a1, a2); /*0x13fa8e*/
  CustomizeObjectLayer_onClose(a1, 0); /*0x13fa95*/
  v4 = qword_905FD0; /*0x13fa9a*/
  if ( !qword_905FD0 ) /*0x13faa4*/
  {
    v14 = operator new(0x6E8u); /*0x13fab0*/
    qword_905FD0 = sub_2723A0(v14); /*0x13fabe*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x13facf*/
    v4 = qword_905FD0; /*0x13fad1*/
  }
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 568) + 14968LL); /*0x13fadf*/
  v6 = *(_QWORD *)(v5 + 1568); /*0x13fae6*/
  if ( v6 ) /*0x13faf0*/
  {
    *(_BYTE *)(v6 + 1141) = 0; /*0x13faf2*/
    GameObject_updateObjectEditorColor((_QWORD *)v6); /*0x13faf9*/
  }
  else if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v5 + 944)) ) /*0x13fb07*/
  {
    v7 = *(_QWORD *)(v5 + 944); /*0x13fb11*/
    if ( v7 ) /*0x13fb1b*/
    {
      v8 = *(unsigned int **)(v7 + 56); /*0x13fb1d*/
      v9 = *v8; /*0x13fb21*/
      if ( (_DWORD)v9 ) /*0x13fb25*/
      {
        v10 = (__int64 *)*((_QWORD *)v8 + 2); /*0x13fb27*/
        for ( i = &v10[v9 - 1]; v10 <= i; ++v10 ) /*0x13fb36*/
        {
          v12 = *v10; /*0x13fb38*/
          if ( !*v10 ) /*0x13fb38*/
            break; /*0x13fb3e*/
          *(_BYTE *)(v12 + 1141) = 0; /*0x13fb40*/
          GameObject_updateObjectEditorColor((_QWORD *)v12); /*0x13fb47*/
        }
      }
    }
  }
  return EditorUI_showLiveColorSelectForMode(v5, v3); /*0x13fb5a*/
}

// [6/25] Address: 0x13fbe0
// Method: CustomizeObjectLayer::onPaste
// Hidden C++ exception states: #wind=1
__int64 __fastcall CustomizeObjectLayer_onPaste(__int64 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *i; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // eax
  const char *CString; // rdx
  cocos2d::CCString *v15; // rax
  void *v17; // [rsp+40h] [rbp+8h]

  v2 = qword_905FD0; /*0x13fbf5*/
  if ( !qword_905FD0 ) /*0x13fbff*/
  {
    v17 = operator new(0x6E8u); /*0x13fc0b*/
    qword_905FD0 = sub_2723A0(v17); /*0x13fc19*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x13fc2a*/
    v2 = qword_905FD0; /*0x13fc2c*/
  }
  v3 = a1[87]; /*0x13fc33*/
  v4 = a1[86]; /*0x13fc3a*/
  v5 = *(_QWORD *)(v2 + 568); /*0x13fc41*/
  v6 = *(_QWORD *)(v5 + 14840); /*0x13fc48*/
  if ( v6 ) /*0x13fc52*/
  {
    if ( v4 ) /*0x13fc57*/
    {
      GameObject_duplicateColorMode(a1[86], v6); /*0x13fc5c*/
      *(_BYTE *)(v4 + 1156) = 1; /*0x13fc61*/
    }
    else if ( v3 ) /*0x13fc6d*/
    {
      v7 = *(unsigned int **)(v3 + 56); /*0x13fc6f*/
      v8 = *v7; /*0x13fc73*/
      if ( (_DWORD)v8 ) /*0x13fc77*/
      {
        v9 = (__int64 *)*((_QWORD *)v7 + 2); /*0x13fc79*/
        for ( i = &v9[v8 - 1]; v9 <= i; ++v9 ) /*0x13fc88*/
        {
          v11 = *v9; /*0x13fc90*/
          if ( !*v9 ) /*0x13fc90*/
            break; /*0x13fc96*/
          GameObject_duplicateColorMode(*v9, *(_QWORD *)(v5 + 14840)); /*0x13fca2*/
          *(_BYTE *)(v11 + 1156) = 1; /*0x13fca7*/
        }
      }
    }
  }
  CustomizeObjectLayer_updateCurrentSelection(a1); /*0x13fcba*/
  sub_1400B0(a1); /*0x13fcc2*/
  LOBYTE(v12) = 1; /*0x13fcc7*/
  v13 = sub_140FB0(a1, v12); /*0x13fccc*/
  if ( v13 < 1000 ) /*0x13fcd6*/
  {
    if ( v13 <= 0 ) /*0x13fce6*/
    {
      CString = " "; /*0x13fd05*/
    }
    else
    {
      v15 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v13); /*0x13fcf1*/
      CString = cocos2d::CCString::getCString(v15); /*0x13fd00*/
    }
  }
  else
  {
    CString = (const char *)GJSpecialColorSelect_textForColorIdx((unsigned int)v13); /*0x13fcdf*/
  }
  (**(void (__fastcall ***)(__int64, const char *))(a1[101] + 360))(a1[101] + 360, CString); /*0x13fd1d*/
  return CustomizeObjectLayer_updateHSVButtons(a1); /*0x13fd22*/
}

// [7/25] Address: 0x13fd40
// Method: CustomizeObjectLayer::onSettings
// Hidden C++ exception states: #wind=1
__int64 __fastcall CustomizeObjectLayer_onSettings(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // r14
  __int64 (__fastcall *v5)(__int64); // rdx

  v2 = *(_QWORD *)(a1 + 696); /*0x13fd58*/
  v3 = *(_QWORD *)(a1 + 688); /*0x13fd5f*/
  v4 = operator new(0x3F8u); /*0x13fd70*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x13fd7b*/
  *v4 = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fd87*/
  v4[40] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fd91*/
  v4[41] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fd9f*/
  v4[42] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fdad*/
  v4[43] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fdbb*/
  v4[44] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fdc9*/
  v4[51] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fdd7*/
  v4[54] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fde5*/
  v4[68] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fdf3*/
  v4[83] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fe01*/
  v4[84] = &CustomizeObjectSettingsPopup::`vftable'; /*0x13fe0f*/
  v4[125] = 0; /*0x13fe16*/
  *((_BYTE *)v4 + 1008) = 0; /*0x13fe21*/
  if ( (unsigned __int8)sub_141D60(v4, v3, v2, a1) ) /*0x13fe35*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x13fe41*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x13fe51*/
    v4 = 0; /*0x13fe54*/
  }
  v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 1064LL); /*0x13fe5a*/
  if ( v5 == SetupTriggerPopup_show ) /*0x13fe6e*/
    return SetupTriggerPopup_show((__int64)v4); /*0x13fe70*/
  else
    return v5((__int64)v4); /*0x13fe77*/
}

// [8/25] Address: 0x13ff20
// Method: CustomizeObjectLayer::colorSetupClosed
__int64 __fastcall CustomizeObjectLayer_colorSetupClosed(__int64 a1, int a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  const char *CString; // rdx
  cocos2d::CCString *v7; // rax

  CustomizeObjectLayer_updateSelected(a1 - 680); /*0x13ff40*/
  v4 = a2; /*0x13ff48*/
  if ( (unsigned int)(a2 - 10) <= 0x3DD ) /*0x13ff4f*/
  {
    *(_DWORD *)(a1 + 68) = a2; /*0x13ff58*/
    v4 = 1008; /*0x13ff5b*/
    *(_BYTE *)(a1 + 242) = 1; /*0x13ff60*/
    CustomizeObjectLayer_updateCustomColorLabels(a1 - 680); /*0x13ff67*/
    *(_BYTE *)(a1 + 242) = 0; /*0x13ff6c*/
  }
  v5 = sub_141880(a1 - 680, v4); /*0x13ff7c*/
  CustomizeObjectLayer_highlightSelected(a1 - 680, v5); /*0x13ff8b*/
  sub_1400B0(a1 - 680); /*0x13ff97*/
  if ( a2 < 1000 ) /*0x13ffa2*/
  {
    if ( a2 <= 0 ) /*0x13ffb2*/
    {
      CString = " "; /*0x13ffd1*/
    }
    else
    {
      v7 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)a2); /*0x13ffbd*/
      CString = cocos2d::CCString::getCString(v7); /*0x13ffcc*/
    }
  }
  else
  {
    CString = (const char *)GJSpecialColorSelect_textForColorIdx((unsigned int)a2); /*0x13ffab*/
  }
  return (**(__int64 (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 128) + 360LL))(
           *(_QWORD *)(a1 + 128) + 360LL,
           CString);
}

// [9/25] Address: 0x140000
// Method: CustomizeObjectLayer::onEditColor
// Hidden C++ exception states: #wind=1
__int64 __fastcall CustomizeObjectLayer_onEditColor(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  void *v9; // [rsp+30h] [rbp+8h]

  LOBYTE(a2) = 1; /*0x14000d*/
  v3 = sub_140FB0(a1, a2); /*0x140014*/
  v4 = qword_905FD0; /*0x140016*/
  if ( !qword_905FD0 ) /*0x140020*/
  {
    v9 = operator new(0x6E8u); /*0x14002c*/
    qword_905FD0 = sub_2723A0(v9); /*0x14003a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x14004b*/
    v4 = qword_905FD0; /*0x14004d*/
  }
  v5 = sub_3624A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 568) + 3592LL) + 320LL), v3); /*0x14006b*/
  v6 = (_QWORD *)ColorSelectPopup_create(0, 0, v5); /*0x140077*/
  v7 = a1 + 672; /*0x14007c*/
  if ( !a1 ) /*0x140088*/
    v7 = 0; /*0x140088*/
  v6[138] = v7; /*0x14008c*/
  return (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 1064LL))(v6); /*0x1400a0*/
}

// [10/25] Address: 0x1402c0
// Method: CustomizeObjectLayer::colorSelectClosed
__int64 __fastcall CustomizeObjectLayer_colorSelectClosed(__int64 a1)
{
  return sub_1400B0(a1 - 672);
}

// [11/25] Address: 0x1402d0
// Method: CustomizeObjectLayer::determineStartValues
unsigned int __fastcall CustomizeObjectLayer_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax
  char v4; // al
  int v5; // edx
  __int64 v6; // rsi
  __int16 v7; // ax
  char v8; // al
  __int64 v9; // rax
  int v10; // edx
  unsigned int result; // eax
  cocos2d::CCArray *v12; // rcx
  unsigned int v13; // edi
  struct cocos2d::CCObject *v14; // rax
  struct cocos2d::CCObject *v15; // rcx
  __int16 v16; // ax
  char v17; // al
  int v18; // edx
  __int64 v19; // rax
  __int16 v20; // ax
  char v21; // al
  __int64 v22; // rax
  int v23; // edx

  v2 = *(_QWORD *)(a1 + 688); /*0x1402dd*/
  if ( !v2 ) /*0x1402e7*/
  {
    v12 = *(cocos2d::CCArray **)(a1 + 696); /*0x1403af*/
    v13 = 0; /*0x1403bd*/
    *(_BYTE *)(a1 + 754) = 1; /*0x1403bf*/
    result = cocos2d::CCArray::count(v12); /*0x1403c6*/
    if ( !result ) /*0x1403ce*/
      return result; /*0x1403ce*/
    while ( 1 ) /*0x1403e9*/
    {
      v14 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 696), v13); /*0x1403e9*/
      v15 = v14; /*0x1403ef*/
      if ( !*(_BYTE *)(a1 + 752) ) /*0x1403f2*/
        break; /*0x1403f2*/
      if ( !*(_BYTE *)(a1 + 753) ) /*0x1403fb*/
        goto LABEL_33; /*0x140402*/
LABEL_43:
      if ( !*((_BYTE *)v15 + 1028) ) /*0x1404ba*/
        *(_BYTE *)(a1 + 754) = 0; /*0x1404c3*/
      ++v13; /*0x1404d1*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 696)); /*0x1404d3*/
      if ( v13 >= result ) /*0x1404db*/
        return result; /*0x1404db*/
    }
    v16 = *((_WORD *)v14 + 524); /*0x14040a*/
    if ( v16 ) /*0x140414*/
      v17 = v16 == 1; /*0x140423*/
    else
      v17 = *((_BYTE *)v15 + 1300); /*0x140416*/
    if ( v17 /*0x14044a*/
      || *((_QWORD *)v15 + 112)
      || (v18 = *(_DWORD *)(*((_QWORD *)v15 + 138) + 4LL), v18 == 1004)
      || (v19 = 0, !v18) )
    {
      v19 = *((_QWORD *)v15 + 138); /*0x14044c*/
    }
    *(_BYTE *)(a1 + 752) = v19 != 0; /*0x140459*/
LABEL_33:
    if ( !*(_BYTE *)(a1 + 753) ) /*0x14045f*/
    {
      v20 = *((_WORD *)v15 + 524); /*0x140468*/
      if ( v20 ) /*0x140472*/
        v21 = v20 == 1; /*0x140481*/
      else
        v21 = *((_BYTE *)v15 + 1300); /*0x140474*/
      if ( v21 /*0x1404a5*/
        || *((_QWORD *)v15 + 112)
        || (v22 = *((_QWORD *)v15 + 138), v23 = *(_DWORD *)(v22 + 4), v23 == 1004)
        || !v23 )
      {
        v22 = *((_QWORD *)v15 + 139); /*0x1404a7*/
      }
      *(_BYTE *)(a1 + 753) = v22 != 0; /*0x1404b4*/
    }
    goto LABEL_43; /*0x1404b4*/
  }
  v3 = *(_WORD *)(v2 + 1048); /*0x1402ed*/
  if ( v3 ) /*0x1402f7*/
    v4 = v3 == 1; /*0x140306*/
  else
    v4 = *(_BYTE *)(v2 + 1300); /*0x1402f9*/
  if ( v4 || *(_QWORD *)(v2 + 896) || (v5 = *(_DWORD *)(*(_QWORD *)(v2 + 1104) + 4LL), v5 == 1004) || !v5 ) /*0x14032b*/
    v6 = *(_QWORD *)(v2 + 1104); /*0x140331*/
  else
    v6 = 0; /*0x14032d*/
  *(_BYTE *)(a1 + 752) = v6 != 0; /*0x14033e*/
  v7 = *(_WORD *)(v2 + 1048); /*0x140344*/
  if ( v7 ) /*0x14034e*/
    v8 = v7 == 1; /*0x14035d*/
  else
    v8 = *(_BYTE *)(v2 + 1300); /*0x140350*/
  if ( v8 || *(_QWORD *)(v2 + 896) || (v9 = *(_QWORD *)(v2 + 1104), v10 = *(_DWORD *)(v9 + 4), v10 == 1004) || !v10 ) /*0x140382*/
    v9 = *(_QWORD *)(v2 + 1112); /*0x140384*/
  *(_BYTE *)(a1 + 753) = v9 != 0; /*0x140391*/
  result = *(unsigned __int8 *)(v2 + 1028); /*0x140397*/
  *(_BYTE *)(a1 + 754) = result; /*0x14039e*/
  return result; /*0x1403a4*/
}

// [12/25] Address: 0x140500
// Method: CustomizeObjectLayer::updateHSVButtons
__int64 __fastcall CustomizeObjectLayer_updateHSVButtons(__int64 a1)
{
  int v1; // ebx
  int v2; // r14d
  __int64 v3; // r8
  __int64 v5; // rdx
  __m128 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __m128 v9; // xmm6
  __m128 v10; // xmm1
  BOOL v11; // r12d
  __m128i v12; // xmm1
  _QWORD *v13; // rax
  const char *v14; // rbp
  const char *v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rdi
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  cocos2d::CCSpriteFrameCache *v23; // rax
  struct cocos2d::CCSpriteFrame *v24; // rax
  _BYTE v26[16]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 744); /*0x14051c*/
  v2 = 1; /*0x140522*/
  v3 = *(_QWORD *)(a1 + 696); /*0x140528*/
  v5 = *(_QWORD *)(a1 + 688); /*0x140532*/
  *(_DWORD *)(a1 + 744) = 1; /*0x14053c*/
  v6 = (__m128 *)sub_12EEA0(v26, v5, v3, 1); /*0x14054d*/
  v7 = *(_QWORD *)(a1 + 696); /*0x140552*/
  v8 = *(_QWORD *)(a1 + 688); /*0x14055e*/
  v9 = *v6; /*0x14056b*/
  *(_DWORD *)(a1 + 744) = 2; /*0x14056e*/
  v10 = *(__m128 *)sub_12EEA0(v26, v8, v7, 2); /*0x14057e*/
  *(_DWORD *)(a1 + 744) = v1; /*0x140581*/
  v11 = v9.m128_f32[0] == *(float *)&dword_8F8410 /*0x1405f1*/
     && _mm_shuffle_ps(v9, v9, 85).m128_f32[0] == *(float *)&dword_8F8414
     && _mm_shuffle_ps(v9, v9, 170).m128_f32[0] == *(float *)&dword_8F8418
     && v9.m128_i8[12] == (_BYTE)dword_8F841C
     && (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v9, 13)) == BYTE1(dword_8F841C);
  if ( v10.m128_f32[0] != *(float *)&dword_8F8410 /*0x140638*/
    || _mm_shuffle_ps(v10, v10, 85).m128_f32[0] != *(float *)&dword_8F8414
    || _mm_shuffle_ps(v10, v10, 170).m128_f32[0] != *(float *)&dword_8F8418
    || (v12 = _mm_srli_si128((__m128i)v10, 8), v12.m128i_i8[4] != (_BYTE)dword_8F841C)
    || v12.m128i_i8[5] != BYTE1(dword_8F841C) )
  {
    v2 = 0; /*0x14063a*/
  }
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 784) + 952LL))(*(_QWORD *)(a1 + 784)); /*0x140647*/
  v14 = "GJ_hsv2Btn_001.png"; /*0x14064d*/
  v15 = "GJ_hsv2Btn_001.png"; /*0x14065e*/
  v16 = v13; /*0x140661*/
  if ( v11 ) /*0x140664*/
    v15 = "GJ_hsvBtn_001.png"; /*0x140664*/
  v17 = *v13; /*0x140668*/
  v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x14066b*/
  v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v15); /*0x140677*/
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSpriteFrame *))(v17 + 1008))(v16, v19); /*0x140683*/
  v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 792) + 952LL))(*(_QWORD *)(a1 + 792)); /*0x140693*/
  v21 = v20; /*0x14069c*/
  if ( v2 ) /*0x14069f*/
    v14 = "GJ_hsvBtn_001.png"; /*0x14069f*/
  v22 = *v20; /*0x1406a3*/
  v23 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1406a6*/
  v24 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v23, v14); /*0x1406b2*/
  return (*(__int64 (__fastcall **)(_QWORD *, struct cocos2d::CCSpriteFrame *))(v22 + 1008))(v21, v24); /*0x1406c5*/
}

// [13/25] Address: 0x140980
// Method: CustomizeObjectLayer::hsvPopupClosed
__int64 __fastcall CustomizeObjectLayer_hsvPopupClosed(__int64 a1, __int64 a2, _OWORD *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // ebp
  __int64 RelativeSpriteColor; // rax
  struct cocos2d::CCObject *v10; // rcx
  __int16 v11; // ax
  bool v12; // al
  char *v13; // rdx
  int v14; // r8d
  unsigned __int8 v15; // al

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1409a0*/
  v6 = *(_QWORD *)(a1 + 24); /*0x1409a3*/
  v7 = 0; /*0x1409a7*/
  v8 = v5; /*0x1409a9*/
  if ( !v6 )
  {
    if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 32)) ) /*0x1409df*/
      return CustomizeObjectLayer_updateHSVButtons(a1 - 664); /*0x1409df*/
    while ( 1 )
    {
      v10 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 32), v7); /*0x1409fc*/
      v11 = *((_WORD *)v10 + 524); /*0x1409ff*/
      v12 = v11 ? v11 == 1 : *((_BYTE *)v10 + 1300);
      if ( v12 /*0x140a43*/
        || *((_QWORD *)v10 + 112)
        || (v13 = (char *)v10 + 1104, v14 = *(_DWORD *)(*((_QWORD *)v10 + 138) + 4LL), v14 == 1004)
        || !v14 )
      {
        v15 = 0; /*0x140a49*/
        v13 = (char *)v10 + 1104; /*0x140a4b*/
      }
      else
      {
        v15 = 1; /*0x140a45*/
      }
      if ( v8 != 1 ) /*0x140a55*/
        break; /*0x140a55*/
      if ( !v15 ) /*0x140a6d*/
        goto LABEL_17; /*0x140a6d*/
LABEL_19:
      if ( ++v7 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 32)) ) /*0x140a8c*/
        return CustomizeObjectLayer_updateHSVButtons(a1 - 664); /*0x140a8c*/
    }
    v13 = (char *)v10 + 8 * (v15 ^ 1LL) + 1104; /*0x140a65*/
LABEL_17:
    if ( *(_QWORD *)v13 ) /*0x140a6f*/
      *(_OWORD *)(*(_QWORD *)v13 + 16LL) = *a3; /*0x140a7a*/
    goto LABEL_19; /*0x140a7a*/
  }
  LOBYTE(v7) = v5 != 1; /*0x1409b3*/
  RelativeSpriteColor = GameObject_getRelativeSpriteColor(v6, v7 + 1); /*0x1409b9*/
  if ( RelativeSpriteColor ) /*0x1409c1*/
    *(_OWORD *)(RelativeSpriteColor + 16) = *a3; /*0x1409ca*/
  return CustomizeObjectLayer_updateHSVButtons(a1 - 664); /*0x140a99*/
}

// [14/25] Address: 0x140be0
// Method: CustomizeObjectLayer::onSelectMode
__int64 __fastcall CustomizeObjectLayer_onSelectMode(__int64 a1, __int64 a2)
{
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, const char *); // rcx
  const char *v5; // rdx
  const char *v6; // rsi
  const char *v7; // rbx
  __int64 v8; // rax
  const char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  const char *CString; // rdx
  cocos2d::CCString *v22; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x140bfd*/
  v4 = (void (__fastcall ***)(_QWORD, const char *))(*(_QWORD *)(a1 + 800) + 360LL); /*0x140c07*/
  *(_DWORD *)(a1 + 744) = v3; /*0x140c0e*/
  if ( v3 == 1 ) /*0x140c17*/
  {
    v5 = "Base Color"; /*0x140c19*/
  }
  else
  {
    v5 = "Detail Color"; /*0x140c22*/
    if ( v3 != 2 ) /*0x140c2c*/
      v5 = "Insert Text"; /*0x140c2e*/
  }
  (**v4)(v4, v5); /*0x140c38*/
  v6 = "GJ_button_04.png"; /*0x140c41*/
  v7 = "GJ_button_04.png"; /*0x140c56*/
  if ( *(_DWORD *)(a1 + 744) == 1 ) /*0x140c59*/
    v7 = "GJ_button_03.png"; /*0x140c59*/
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 760) + 952LL))(*(_QWORD *)(a1 + 760)); /*0x140c60*/
  sub_41FC0(v8, v7); /*0x140c6c*/
  v9 = "GJ_button_04.png"; /*0x140c78*/
  if ( *(_DWORD *)(a1 + 744) == 2 ) /*0x140c82*/
    v9 = "GJ_button_03.png"; /*0x140c82*/
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 768) + 952LL))(*(_QWORD *)(a1 + 768)); /*0x140c89*/
  sub_41FC0(v10, v9); /*0x140c95*/
  v11 = *(_QWORD *)(a1 + 776); /*0x140c9a*/
  if ( v11 ) /*0x140ca4*/
  {
    if ( *(_DWORD *)(a1 + 744) == 3 ) /*0x140cb0*/
      v6 = "GJ_button_03.png"; /*0x140cb0*/
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 952LL))(v11); /*0x140cb4*/
    sub_41FC0(v12, v6); /*0x140cc0*/
  }
  CustomizeObjectLayer_toggleVisible(a1); /*0x140cc8*/
  LOBYTE(v13) = *(_DWORD *)(a1 + 744) == 1; /*0x140cdb*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 784) + 336LL))(*(_QWORD *)(a1 + 784), v13); /*0x140ce1*/
  LOBYTE(v14) = *(_DWORD *)(a1 + 744) == 1; /*0x140cf5*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 784) + 936LL))(*(_QWORD *)(a1 + 784), v14); /*0x140cfb*/
  LOBYTE(v15) = *(_DWORD *)(a1 + 744) == 2; /*0x140d0f*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 792) + 336LL))(*(_QWORD *)(a1 + 792), v15); /*0x140d15*/
  LOBYTE(v16) = *(_DWORD *)(a1 + 744) == 2; /*0x140d29*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 792) + 936LL))(*(_QWORD *)(a1 + 792), v16); /*0x140d2f*/
  LOBYTE(v17) = *(_DWORD *)(a1 + 744) != 3; /*0x140d43*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 912) + 336LL))(*(_QWORD *)(a1 + 912), v17); /*0x140d49*/
  LOBYTE(v18) = *(_DWORD *)(a1 + 744) != 3; /*0x140d5d*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 912) + 936LL))(*(_QWORD *)(a1 + 912), v18); /*0x140d63*/
  CustomizeObjectLayer_updateHSVButtons(a1); /*0x140d6c*/
  sub_1400B0(a1); /*0x140d74*/
  LOBYTE(v19) = 1; /*0x140d79*/
  v20 = sub_140FB0(a1, v19); /*0x140d7e*/
  if ( v20 < 1000 ) /*0x140d88*/
  {
    if ( v20 <= 0 ) /*0x140d98*/
    {
      CString = " "; /*0x140db7*/
    }
    else
    {
      v22 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v20); /*0x140da3*/
      CString = cocos2d::CCString::getCString(v22); /*0x140db2*/
    }
  }
  else
  {
    CString = (const char *)GJSpecialColorSelect_textForColorIdx((unsigned int)v20); /*0x140d91*/
  }
  return (**(__int64 (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 808) + 360LL))(
           *(_QWORD *)(a1 + 808) + 360LL,
           CString);
}

// [15/25] Address: 0x140df0
// Method: CustomizeObjectLayer::toggleVisible
__int64 __fastcall CustomizeObjectLayer_toggleVisible(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int i; // esi
  struct cocos2d::CCObject *v4; // rax
  __int64 v5; // rdx
  unsigned int j; // esi
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax

  v2 = 0; /*0x140e0c*/
  *(_BYTE *)(a1 + 920) = *(_DWORD *)(a1 + 744) == 3; /*0x140e0e*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 712)); ++i ) /*0x140e1d*/
  {
    v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 712), i); /*0x140e39*/
    LOBYTE(v5) = *(_BYTE *)(a1 + 920) == 0; /*0x140e46*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 336LL))(v4, v5); /*0x140e56*/
  }
  for ( j = 0; j < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 736)); ++j ) /*0x140e75*/
  {
    v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 736), j); /*0x140e89*/
    LOBYTE(v8) = *(_BYTE *)(a1 + 920) == 0; /*0x140e96*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 336LL))(v7, v8); /*0x140ea6*/
  }
  if ( *(_BYTE *)(a1 + 921) ) /*0x140ebc*/
  {
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 720)) ) /*0x140ed0*/
    {
      do /*0x140f17*/
      {
        v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 720), v2); /*0x140ee9*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v9 + 336LL))( /*0x140f03*/
          v9,
          *(unsigned __int8 *)(a1 + 920));
        ++v2; /*0x140f0d*/
      }
      while ( v2 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 720)) ); /*0x140f17*/
    }
    v10 = *(_QWORD *)(a1 + 824); /*0x140f19*/
    if ( v10 ) /*0x140f23*/
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 920LL))(v10, *(unsigned __int8 *)(a1 + 920)); /*0x140f2f*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 824) + 336LL))( /*0x140f46*/
        *(_QWORD *)(a1 + 824),
        *(unsigned __int8 *)(a1 + 920));
    }
  }
  v11 = sub_140FB0(a1, 0); /*0x140f51*/
  if ( v11 - 10 <= 0x3DD ) /*0x140f5f*/
  {
    *(_BYTE *)(a1 + 922) = 1; /*0x140f64*/
    *(_DWORD *)(a1 + 748) = v11; /*0x140f6b*/
    CustomizeObjectLayer_updateCustomColorLabels(a1); /*0x140f71*/
    v11 = 1008; /*0x140f76*/
    *(_BYTE *)(a1 + 922) = 0; /*0x140f7b*/
  }
  v12 = sub_141880(a1, v11); /*0x140f87*/
  return CustomizeObjectLayer_highlightSelected(a1, v12); /*0x140f92*/
}

// [16/25] Address: 0x141150
// Method: CustomizeObjectLayer::updateCurrentSelection
__int64 __fastcall CustomizeObjectLayer_updateCurrentSelection(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rax

  v2 = sub_140FB0(a1, 0); /*0x14115b*/
  if ( v2 - 10 <= 0x3DD ) /*0x141169*/
  {
    *(_BYTE *)(a1 + 922) = 1; /*0x14116e*/
    *(_DWORD *)(a1 + 748) = v2; /*0x141175*/
    CustomizeObjectLayer_updateCustomColorLabels(a1); /*0x14117b*/
    v2 = 1008; /*0x141180*/
    *(_BYTE *)(a1 + 922) = 0; /*0x141185*/
  }
  v3 = sub_141880(a1, v2); /*0x141191*/
  return CustomizeObjectLayer_highlightSelected(a1, v3); /*0x14119c*/
}

// [17/25] Address: 0x141280
// Method: CustomizeObjectLayer::textInputOpened
// Hidden C++ exception states: #wind=1
void __fastcall CustomizeObjectLayer_textInputOpened(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  size_t v10; // r8
  int v11; // ebx
  char *v12; // rax
  __int128 Buf2; // [rsp+38h] [rbp-70h] BYREF
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  void *Buf1[2]; // [rsp+58h] [rbp-50h] BYREF
  __int128 v17; // [rsp+68h] [rbp-40h]

  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 1 ) /*0x1412ba*/
  {
    Buf2 = 0; /*0x1412c3*/
    v14 = 1; /*0x1412ce*/
    v15 = 15; /*0x1412d3*/
    LOWORD(Buf2) = 65; /*0x1412dc*/
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x1412f4*/
    *(_OWORD *)Buf1 = 0; /*0x1412fa*/
    v17 = 0; /*0x141302*/
    v5 = -1; /*0x141308*/
    do /*0x141313*/
      ++v5; /*0x141310*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x141313*/
    sub_3C230(Buf1); /*0x141322*/
    v6 = Buf1; /*0x141327*/
    v7 = (char *)Buf1[0]; /*0x14132c*/
    v8 = *((_QWORD *)&v17 + 1); /*0x141331*/
    if ( *((_QWORD *)&v17 + 1) > 0xFu ) /*0x14133a*/
      v6 = (void **)Buf1[0]; /*0x14133a*/
    v9 = v17; /*0x14133e*/
    v10 = v17; /*0x141343*/
    if ( (unsigned __int64)v17 > 1 ) /*0x14134a*/
      v10 = 1; /*0x14134a*/
    v11 = memcmp(v6, &Buf2, v10); /*0x141358*/
    if ( !v11 ) /*0x14135c*/
    {
      if ( v9 ) /*0x141362*/
        v11 = v9 > 1; /*0x141371*/
      else
        v11 = -1; /*0x141364*/
    }
    if ( v8 > 0xF ) /*0x141378*/
    {
      v12 = v7; /*0x14137e*/
      if ( v8 + 1 >= 0x1000 ) /*0x141388*/
      {
        v7 = (char *)*((_QWORD *)v7 - 1); /*0x14138e*/
        if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x14139d*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1413b2*/
      }
      j_j_free(v7); /*0x1413bc*/
    }
    if ( !v11 ) /*0x1413c4*/
    {
      sub_1416E0(a1 - 544, 0); /*0x1413cf*/
      *(_OWORD *)Buf1 = 0; /*0x1413d7*/
      *(_QWORD *)&v17 = 1; /*0x1413dc*/
      *((_QWORD *)&v17 + 1) = 15; /*0x1413e1*/
      LOWORD(Buf1[0]) = 32; /*0x1413ea*/
      SpriteAnimationManager_executeAnimation(a2, Buf1); /*0x1413f9*/
    }
  }
}

// [18/25] Address: 0x141430
// Method: CustomizeObjectLayer::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall CustomizeObjectLayer_textChanged(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  const char *v7; // rcx
  char *v8; // rcx
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  int v11; // edx
  const char *v12; // rdx
  cocos2d::CCString *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  char **v17; // rdx
  char *v18; // rcx
  __int128 v19; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h]
  __int64 v21; // [rsp+50h] [rbp-48h]
  char *String[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v23; // [rsp+68h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 378) ) /*0x141456*/
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x141469*/
    if ( v4 ) /*0x14146e*/
    {
      if ( v4 == 1 ) /*0x1415c9*/
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x1415e0*/
        *(_OWORD *)String = 0; /*0x1415e6*/
        v23 = 0; /*0x1415ee*/
        v15 = -1; /*0x1415f4*/
        v16 = -1; /*0x1415fb*/
        do /*0x141603*/
          ++v16; /*0x141600*/
        while ( *(_BYTE *)(v14 + v16) ); /*0x141603*/
        sub_3C230(String); /*0x141611*/
        v17 = String; /*0x141617*/
        if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x141622*/
          v17 = (char **)String[0]; /*0x141622*/
        v19 = 0; /*0x14162b*/
        v20 = 0; /*0x141630*/
        v21 = 0; /*0x141635*/
        do /*0x141643*/
          ++v15; /*0x141640*/
        while ( *((_BYTE *)v17 + v15) ); /*0x141643*/
        sub_3C230(&v19); /*0x141651*/
        sub_2A11F0(*(_QWORD *)(a1 + 144), &v19, 0); /*0x141665*/
        if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x141674*/
        {
          v18 = String[0]; /*0x141679*/
          if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x141688*/
          {
            v18 = (char *)*((_QWORD *)String[0] - 1); /*0x14168e*/
            if ( (unsigned __int64)(String[0] - v18 - 8) > 0x1F ) /*0x14169d*/
              invoke_watson(0, 0, 0, 0, 0); /*0x1416ae*/
          }
          j_j_free(v18); /*0x1416b5*/
        }
      }
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x141485*/
      *(_OWORD *)String = 0; /*0x14148b*/
      v23 = 0; /*0x141493*/
      v6 = -1; /*0x141499*/
      do /*0x1414a3*/
        ++v6; /*0x1414a0*/
      while ( *(_BYTE *)(v5 + v6) ); /*0x1414a3*/
      sub_3C230(String); /*0x1414b4*/
      v7 = (const char *)String; /*0x1414b9*/
      if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x1414c4*/
        v7 = String[0]; /*0x1414c4*/
      *(_DWORD *)(a1 + 204) = atoi(v7); /*0x1414d0*/
      if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x1414df*/
      {
        v8 = String[0]; /*0x1414e4*/
        if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x1414f3*/
        {
          v8 = (char *)*((_QWORD *)String[0] - 1); /*0x1414f9*/
          if ( (unsigned __int64)(String[0] - v8 - 8) > 0x1F ) /*0x141508*/
            invoke_watson(0, 0, 0, 0, 0); /*0x141519*/
        }
        j_j_free(v8); /*0x141520*/
      }
      v9 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(a1 + 204)); /*0x141532*/
      CString = cocos2d::CCString::getCString(v9); /*0x14153b*/
      ButtonSprite_setString(*(_QWORD *)(a1 + 312), CString); /*0x14154b*/
      CustomizeObjectLayer_updateSelected(a1 - 544); /*0x14155d*/
      sub_1400B0(a1 - 544); /*0x141569*/
      v11 = *(_DWORD *)(a1 + 204); /*0x14156e*/
      if ( v11 < 1000 ) /*0x14157a*/
      {
        if ( v11 <= 0 ) /*0x14158a*/
        {
          v12 = " "; /*0x1415a7*/
        }
        else
        {
          v13 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0x141593*/
          v12 = cocos2d::CCString::getCString(v13); /*0x1415a2*/
        }
      }
      else
      {
        v12 = (const char *)GJSpecialColorSelect_textForColorIdx((unsigned int)v11); /*0x141583*/
      }
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 264) + 360LL))( /*0x1415bf*/
        *(_QWORD *)(a1 + 264) + 360LL,
        v12);
    }
  }
}

// [19/25] Address: 0x141770
// Method: CustomizeObjectLayer::onBreakApart
// Hidden C++ exception states: #wind=1
void __fastcall CustomizeObjectLayer_onBreakApart(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // [rsp+30h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 688) ) /*0x141779*/
  {
    CustomizeObjectLayer_onClose(a1, 0); /*0x141785*/
    v2 = qword_905FD0; /*0x14178a*/
    if ( !qword_905FD0 ) /*0x141794*/
    {
      v3 = operator new(0x6E8u); /*0x1417a0*/
      qword_905FD0 = sub_2723A0(v3); /*0x1417ae*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1417bf*/
      v2 = qword_905FD0; /*0x1417c1*/
    }
    sub_3FA3D0(*(_QWORD *)(v2 + 568), *(_QWORD *)(a1 + 688)); /*0x1417db*/
  }
}

// [20/25] Address: 0x1417f0
// Method: CustomizeObjectLayer::updateCustomColorLabels
__int64 __fastcall CustomizeObjectLayer_updateCustomColorLabels(__int64 a1)
{
  cocos2d::CCString *v2; // rax
  const char *CString; // rbx
  __int64 v4; // r8
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(a1 + 748)); /*0x14180a*/
  CString = cocos2d::CCString::getCString(v2); /*0x141823*/
  ButtonSprite_setString(*(_QWORD *)(a1 + 856), CString); /*0x141826*/
  v6 = 0; /*0x141830*/
  v7 = 0; /*0x141835*/
  v4 = -1; /*0x14183a*/
  v8 = 0; /*0x141841*/
  do /*0x141849*/
    ++v4; /*0x141846*/
  while ( CString[v4] ); /*0x141849*/
  sub_3C230(&v6); /*0x141857*/
  return CCTextInputNode_setString(*(_QWORD *)(a1 + 816), &v6); /*0x14186d*/
}

// [21/25] Address: 0x141910
// Method: CustomizeObjectLayer::onSelectColor
__int64 __fastcall CustomizeObjectLayer_onSelectColor(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  const char *CString; // rdx
  cocos2d::CCString *v8; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x141926*/
  CustomizeObjectLayer_updateSelected(a1); /*0x14193b*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2); /*0x141946*/
  CustomizeObjectLayer_highlightSelected(a1, v4); /*0x141952*/
  sub_1400B0(a1); /*0x14195a*/
  LOBYTE(v5) = 1; /*0x14195f*/
  v6 = sub_140FB0(a1, v5); /*0x141964*/
  if ( v6 < 1000 ) /*0x14196e*/
  {
    if ( v6 <= 0 ) /*0x14197e*/
    {
      CString = " "; /*0x14199d*/
    }
    else
    {
      v8 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v6); /*0x141989*/
      CString = cocos2d::CCString::getCString(v8); /*0x141998*/
    }
  }
  else
  {
    CString = (const char *)GJSpecialColorSelect_textForColorIdx((unsigned int)v6); /*0x141977*/
  }
  return (**(__int64 (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 808) + 360LL))(
           *(_QWORD *)(a1 + 808) + 360LL,
           CString);
}

// [22/25] Address: 0x1419d0
// Method: CustomizeObjectLayer::updateSelected
void __fastcall CustomizeObjectLayer_updateSelected(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 RelativeSpriteColor; // rax
  _DWORD *v6; // rcx
  int v7; // ebx
  int v8; // eax
  cocos2d::CCArray *v9; // rcx
  unsigned int v10; // ebp
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  _DWORD *v14; // r9
  int v15; // ecx
  int v16; // eax

  v4 = *(_QWORD *)(a1 + 688); /*0x1419e8*/
  if ( v4 ) /*0x1419f2*/
  {
    RelativeSpriteColor = GameObject_getRelativeSpriteColor(v4, *(_DWORD *)(a1 + 744)); /*0x1419fb*/
    v6 = (_DWORD *)RelativeSpriteColor; /*0x141a00*/
    if ( RelativeSpriteColor ) /*0x141a06*/
    {
      v7 = 1101; /*0x141a0e*/
      if ( a2 ) /*0x141a15*/
      {
        if ( a2 < 0 ) /*0x141a17*/
          a2 = 0; /*0x141a17*/
        if ( a2 <= 1101 ) /*0x141a1c*/
          v7 = a2; /*0x141a20*/
      }
      else
      {
        v8 = *(_DWORD *)(RelativeSpriteColor + 4); /*0x141a2e*/
        if ( v8 < 0 ) /*0x141a33*/
          v8 = 0; /*0x141a33*/
        if ( v8 <= 1101 ) /*0x141a38*/
          v7 = v8; /*0x141a3c*/
        v6[1] = v7; /*0x141a48*/
        v7 = 0; /*0x141a4b*/
      }
      *v6 = v7; /*0x141a4d*/
      *(_BYTE *)(*(_QWORD *)(a1 + 688) + 1156LL) = 1; /*0x141a56*/
    }
  }
  else
  {
    v9 = *(cocos2d::CCArray **)(a1 + 696); /*0x141a62*/
    if ( v9 ) /*0x141a6c*/
    {
      v10 = 0; /*0x141a79*/
      if ( cocos2d::CCArray::count(v9) ) /*0x141a7b*/
      {
        do /*0x141b1a*/
        {
          v11 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 696), v10); /*0x141aa9*/
          v12 = GameObject_getRelativeSpriteColor((__int64)v11, *(_DWORD *)(a1 + 744)); /*0x141abc*/
          v14 = (_DWORD *)v12; /*0x141ac1*/
          if ( v12 ) /*0x141ac7*/
          {
            if ( a2 ) /*0x141acb*/
            {
              v15 = a2; /*0x141acd*/
              if ( a2 < 0 ) /*0x141acf*/
                v15 = 0; /*0x141acf*/
              if ( v15 <= 1101 ) /*0x141ad4*/
              {
                if ( v15 < 0 ) /*0x141adc*/
                  v15 = 1011; /*0x141adc*/
              }
              else
              {
                v15 = 1101; /*0x141ad6*/
              }
            }
            else
            {
              v16 = *(_DWORD *)(v12 + 4); /*0x141ae2*/
              if ( v16 < 0 ) /*0x141ae7*/
                v16 = 0; /*0x141ae7*/
              if ( v16 > 1101 ) /*0x141aec*/
                v16 = 1101; /*0x141aee*/
              v14[1] = v16; /*0x141af8*/
              v15 = 0; /*0x141afc*/
            }
            *v14 = v15; /*0x141afe*/
            *(_BYTE *)(v13 + 1156) = 1; /*0x141b01*/
          }
          ++v10; /*0x141b10*/
        }
        while ( v10 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 696)) ); /*0x141b1a*/
      }
    }
  }
}

// [23/25] Address: 0x141b40
// Method: CustomizeObjectLayer::highlightSelected
__int64 __fastcall CustomizeObjectLayer_highlightSelected(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v5; // rbx
  int v6; // eax
  const char *v7; // rdx
  bool v8; // bl

  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 704)); ++i ) /*0x141b64*/
  {
    v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 704), i); /*0x141b8f*/
    v6 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v5 + 56LL))(v5); /*0x141b9c*/
    v7 = "GJ_button_05.png"; /*0x141ba3*/
    if ( v6 != 1008 ) /*0x141bad*/
      v7 = "GJ_button_04.png"; /*0x141bad*/
    sub_41FC0(v5, v7); /*0x141bb1*/
  }
  v8 = 0; /*0x141bf7*/
  if ( a2 ) /*0x141bd6*/
  {
    sub_41FC0(a2, "GJ_button_02.png"); /*0x141be2*/
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1008 ) /*0x141bf5*/
      v8 = 1; /*0x141bd6*/
  }
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 872) + 336LL))(*(_QWORD *)(a1 + 872), v8); /*0x141c0a*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 880) + 336LL))(*(_QWORD *)(a1 + 880), v8); /*0x141c1d*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 816) + 920LL))(*(_QWORD *)(a1 + 816), v8); /*0x141c30*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 816) + 336LL))(*(_QWORD *)(a1 + 816), v8); /*0x141c43*/
  return (*(__int64 (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 888) + 336LL))(*(_QWORD *)(a1 + 888), v8);
}

// [24/25] Address: 0x141c70
// Method: CustomizeObjectLayer::onClose
// Hidden C++ exception states: #wind=2
__int64 __fastcall CustomizeObjectLayer_onClose(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h]

  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 608LL) = 0; /*0x141c80*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 816) + 1032LL))(*(_QWORD *)(a1 + 816), 0); /*0x141c97*/
  v2 = *(_QWORD *)(a1 + 824); /*0x141c9d*/
  if ( v2 ) /*0x141ca7*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1032LL))(v2, 0); /*0x141cae*/
    *(_QWORD *)(*(_QWORD *)(a1 + 824) + 608LL) = 0; /*0x141cbb*/
  }
  v3 = qword_905FD0; /*0x141cc6*/
  if ( !qword_905FD0 ) /*0x141cd0*/
  {
    v6 = operator new(0x6E8u); /*0x141cdc*/
    qword_905FD0 = sub_2723A0(v6); /*0x141cea*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x141cfb*/
    v3 = qword_905FD0; /*0x141cfd*/
  }
  *(_DWORD *)(v3 + 1004) = *(_DWORD *)(a1 + 748); /*0x141d0a*/
  EditorUI_updateObjectInfoLabel(*(_QWORD *)(*(_QWORD *)(v3 + 568) + 14968LL)); /*0x141d1e*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x141d2b*/
  LOBYTE(v4) = 1; /*0x141d34*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4);
}

// [25/25] Address: 0x141d50
// Method: CustomizeObjectLayer::keyBackClicked
__int64 __fastcall CustomizeObjectLayer_keyBackClicked(__int64 a1)
{
  return CustomizeObjectLayer_onClose(a1 - 336);
}
