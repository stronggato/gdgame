#include <Geode/binding/ScrollViewPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x61d430
// Method: ScrollViewPopup::ccTouchBegan
char __fastcall ScrollViewPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 352); /*0x61d445*/
  if ( v5 ) /*0x61d452*/
    sub_80640(v5, a2); /*0x61d454*/
  return FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x61d462*/
}

// [2/4] Address: 0x61d480
// Method: ScrollViewPopup::ccTouchMoved
__int64 __fastcall ScrollViewPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx

  if ( *(_QWORD *)(a1 + 352) ) /*0x61d495*/
  {
    sub_80830(); /*0x61d4a4*/
    v6 = *(_QWORD *)(a1 + 352); /*0x61d4a9*/
    if ( *(_BYTE *)(v6 + 481) ) /*0x61d4b0*/
    {
      *(_BYTE *)(v6 + 481) = 0; /*0x61d4bc*/
      return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x61d4d8*/
    }
  }
  result = *(unsigned int *)(a2 + 56); /*0x61d4dd*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x61d4e6*/
  {
    v8 = *(_QWORD *)(a1 + 232); /*0x61d4e8*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x61d4f7*/
      return result; /*0x61d4f7*/
    v8 = *(_QWORD *)(a1 + 304); /*0x61d4f9*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 16LL))(v8 + 320, a2, a3); /*0x61d4c9*/
}

// [3/4] Address: 0x61d530
// Method: ScrollViewPopup::ccTouchEnded
__int64 __fastcall ScrollViewPopup_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 352); /*0x61d545*/
  if ( v3 ) /*0x61d552*/
    sub_80AF0(v3); /*0x61d554*/
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0x61d562*/
}

// [4/4] Address: 0x61d580
// Method: ScrollViewPopup::ccTouchCancelled
__int64 __fastcall ScrollViewPopup_ccTouchCancelled(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 352); /*0x61d595*/
  if ( v3 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v3 + 440) ) /*0x61d5ad*/
  {
    *(_DWORD *)(v3 + 440) = -1; /*0x61d5b1*/
    *(_QWORD *)(v3 + 472) = 0; /*0x61d5bb*/
    *(_WORD *)(v3 + 480) = 0; /*0x61d5c2*/
    *(_BYTE *)(v3 + 508) = 0; /*0x61d5c9*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v3); /*0x61d5cf*/
  }
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x61d5de*/
}
