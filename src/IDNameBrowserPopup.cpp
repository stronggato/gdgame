#include <Geode/binding/IDNameBrowserPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x3bdac0
// Method: IDNameBrowserPopup::~IDNameBrowserPopup
_QWORD *__fastcall IDNameBrowserPopup__dtor_IDNameBrowserPopup(_QWORD *Block, char a2)
{
  *Block = &IDNameBrowserPopup::`vftable'; /*0x3bdad4*/
  Block[40] = &IDNameBrowserPopup::`vftable'; /*0x3bdae0*/
  Block[41] = &IDNameBrowserPopup::`vftable'; /*0x3bdaee*/
  Block[42] = &IDNameBrowserPopup::`vftable'; /*0x3bdafc*/
  Block[43] = &IDNameBrowserPopup::`vftable'; /*0x3bdb0a*/
  Block[44] = &IDNameBrowserPopup::`vftable'; /*0x3bdb18*/
  Block[51] = &IDNameBrowserPopup::`vftable'; /*0x3bdb26*/
  Block[54] = &IDNameBrowserPopup::`vftable'; /*0x3bdb34*/
  Block[68] = &IDNameBrowserPopup::`vftable'; /*0x3bdb42*/
  Block[83] = &IDNameBrowserPopup::`vftable'; /*0x3bdb50*/
  sub_3C14C0(Block + 95); /*0x3bdb5e*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x3bdb66*/
  if ( (a2 & 1) != 0 ) /*0x3bdb6e*/
    j_j_free(Block); /*0x3bdb78*/
  return Block; /*0x3bdb7d*/
}

// [2/11] Address: 0x3bf5d0
// Method: IDNameBrowserPopup::virtualRowCount
__int64 __fastcall IDNameBrowserPopup_virtualRowCount(__int64 a1)
{
  return (*(_QWORD *)(a1 + 104) - *(_QWORD *)(a1 + 96)) / 40LL; /*0x3bf5f6*/
}

// [3/11] Address: 0x3bf600
// Method: IDNameBrowserPopup::virtualRowHeight
float IDNameBrowserPopup_virtualRowHeight()
{
  return 24.0; /*0x3bf608*/
}

// [5/11] Address: 0x3bfb20
// Method: IDNameBrowserPopup::textChanged
__int64 __fastcall IDNameBrowserPopup_textChanged(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = a1 - 68; /*0x3bfb2d*/
  if ( a2 == a1[18] ) /*0x3bfb34*/
  {
    v3 = a1[19]; /*0x3bfb36*/
    if ( v3 ) /*0x3bfb40*/
    {
      *(_DWORD *)(v3 + 436) = 0; /*0x3bfb44*/
      *(_DWORD *)(v3 + 476) = 0; /*0x3bfb4a*/
      sub_7FF60(v3); /*0x3bfb50*/
      sub_7FFD0(v4); /*0x3bfb55*/
    }
    return sub_3BF030(v2); /*0x3bfb62*/
  }
  else if ( a2 == a1[21] || a2 == a1[22] ) /*0x3bfb77*/
  {
    return sub_3C0130(a1 - 68); /*0x3bfb81*/
  }
  return result; /*0x3bfb5d*/
}

// [6/11] Address: 0x3c11d0
// Method: IDNameBrowserPopup::show
__int64 __fastcall IDNameBrowserPopup_show(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x3c11e6*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x3c11ed*/
    v2 = *(_QWORD *)(a1 + 568); /*0x3c11f7*/
  if ( !*(_DWORD *)(a1 + 592) ) /*0x3c11df*/
    *(_DWORD *)(a1 + 592) = 110; /*0x3c1206*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1);
}

// [7/11] Address: 0x3c1330
// Method: IDNameBrowserPopup::keyBackClicked
__int64 __fastcall IDNameBrowserPopup_keyBackClicked(__int64 a1)
{
  return sub_3C1220(a1 - 336, 0);
}

// [8/11] Address: 0x3c1340
// Method: IDNameBrowserPopup::ccTouchBegan
char __fastcall IDNameBrowserPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 376) && (unsigned __int8)sub_80430() ) /*0x3c1364*/
  {
    FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x3c1376*/
    return 1; /*0x3c138c*/
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x3c1396*/
  if ( result ) /*0x3c139d*/
    return 1; /*0x3c139d*/
  return result; /*0x3c137d*/
}

// [9/11] Address: 0x3c13b0
// Method: IDNameBrowserPopup::ccTouchMoved
__int64 __fastcall IDNameBrowserPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 376) ) /*0x3c13c5*/
    sub_804A0(); /*0x3c13d4*/
  result = *(unsigned int *)(a2 + 56); /*0x3c13d9*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x3c13e2*/
  {
    v7 = *(_QWORD *)(a1 + 232); /*0x3c13e4*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x3c13f3*/
      return result; /*0x3c13f3*/
    v7 = *(_QWORD *)(a1 + 304); /*0x3c13f5*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 16LL))(v7 + 320, a2, a3); /*0x3c140f*/
}

// [10/11] Address: 0x3c1420
// Method: IDNameBrowserPopup::ccTouchEnded
__int64 __fastcall IDNameBrowserPopup_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 376); /*0x3c1435*/
  if ( v4 ) /*0x3c1442*/
    SetupTriggerPopup_triggerSliderChanged(v4, a2, a3); /*0x3c1444*/
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0x3c1452*/
}

// [11/11] Address: 0x3c1470
// Method: IDNameBrowserPopup::ccTouchCancelled
__int64 __fastcall IDNameBrowserPopup_ccTouchCancelled(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 376) ) /*0x3c1485*/
    sub_805B0(); /*0x3c1494*/
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x3c14a2*/
}
