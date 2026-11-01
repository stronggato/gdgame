#include <Geode/binding/PagedListPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0xc0c60
// Method: PagedListPopup::~PagedListPopup
__int64 __fastcall PagedListPopup__dtor_PagedListPopup(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rcx

  *a1 = &PagedListPopup::`vftable'; /*0xc0c70*/
  a1[40] = &PagedListPopup::`vftable'; /*0xc0c7a*/
  a1[41] = &PagedListPopup::`vftable'; /*0xc0c88*/
  a1[42] = &PagedListPopup::`vftable'; /*0xc0c96*/
  a1[43] = &PagedListPopup::`vftable'; /*0xc0ca4*/
  a1[44] = &PagedListPopup::`vftable'; /*0xc0cb2*/
  a1[51] = &PagedListPopup::`vftable'; /*0xc0cc0*/
  a1[54] = &PagedListPopup::`vftable'; /*0xc0cce*/
  a1[68] = &PagedListPopup::`vftable'; /*0xc0cdc*/
  v2 = (cocos2d::CCObject *)a1[87]; /*0xc0ce3*/
  if ( v2 ) /*0xc0ced*/
    cocos2d::CCObject::release(v2); /*0xc0cef*/
  return StarInfoPopup__dtor_StarInfoPopup(a1); /*0xc0cf8*/
}

// [2/7] Address: 0xc1830
// Method: PagedListPopup::clearPageContent
double __fastcall PagedListPopup_clearPageContent(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  double result; // xmm0_8

  v3 = *(_QWORD *)(a1 + 688); /*0xc1839*/
  if ( v3 ) /*0xc1843*/
  {
    LOBYTE(a2) = 1; /*0xc184c*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 416) + 576LL))(*(_QWORD *)(v3 + 416), a2); /*0xc1856*/
    v4 = *(_QWORD *)(a1 + 688); /*0xc185c*/
    *(_DWORD *)(v4 + 432) = 0; /*0xc1866*/
    sub_7FF60(v4); /*0xc1870*/
    sub_801A0(); /*0xc1875*/
    sub_7FFD0(v4); /*0xc187d*/
    v5 = *(_QWORD *)(a1 + 688); /*0xc1882*/
    *(_DWORD *)(v5 + 436) = 0; /*0xc1889*/
    *(_DWORD *)(v5 + 476) = 0; /*0xc1893*/
    sub_7FF60(v5); /*0xc189d*/
    return sub_7FFD0(v6); /*0xc18a2*/
  }
  return result; /*0xc18ac*/
}

// [3/7] Address: 0xc1bc0
// Method: PagedListPopup::keyBackClicked
__int64 __fastcall PagedListPopup_keyBackClicked(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 1096LL))(a1 - 336, 0);
}

// [4/7] Address: 0xc1be0
// Method: PagedListPopup::ccTouchBegan
char __fastcall PagedListPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 368) && (unsigned __int8)sub_80430() ) /*0xc1c04*/
  {
    FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0xc1c16*/
    return 1; /*0xc1c2c*/
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0xc1c36*/
  if ( result ) /*0xc1c3d*/
    return 1; /*0xc1c3d*/
  return result; /*0xc1c1d*/
}

// [5/7] Address: 0xc1c50
// Method: PagedListPopup::ccTouchMoved
__int64 __fastcall PagedListPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 368) ) /*0xc1c65*/
    sub_804A0(); /*0xc1c74*/
  result = *(unsigned int *)(a2 + 56); /*0xc1c79*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0xc1c82*/
  {
    v7 = *(_QWORD *)(a1 + 232); /*0xc1c84*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0xc1c93*/
      return result; /*0xc1c93*/
    v7 = *(_QWORD *)(a1 + 304); /*0xc1c95*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 16LL))(v7 + 320, a2, a3); /*0xc1caf*/
}

// [6/7] Address: 0xc1cc0
// Method: PagedListPopup::ccTouchEnded
__int64 __fastcall PagedListPopup_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 368); /*0xc1cd5*/
  if ( v4 ) /*0xc1ce2*/
    SetupTriggerPopup_triggerSliderChanged(v4, a2, a3); /*0xc1ce4*/
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0xc1cf2*/
}

// [7/7] Address: 0xc1d10
// Method: PagedListPopup::ccTouchCancelled
__int64 __fastcall PagedListPopup_ccTouchCancelled(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 368) ) /*0xc1d25*/
    sub_805B0(); /*0xc1d34*/
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0xc1d42*/
}
