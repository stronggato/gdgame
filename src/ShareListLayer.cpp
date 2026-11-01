#include <Geode/binding/ShareListLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x42eee0
// Method: ShareListLayer::onUnlisted
char __fastcall ShareListLayer_onUnlisted(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  char result; // al
  char v6; // cl

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x42eeef*/
  v4 = *(_QWORD *)(a1 + 664); /*0x42eef2*/
  if ( v3 == 1 ) /*0x42eefc*/
  {
    result = *(_BYTE *)(v4 + 394) == 0; /*0x42ef05*/
    *(_BYTE *)(v4 + 394) = result; /*0x42ef08*/
  }
  else
  {
    v6 = *(_BYTE *)(v4 + 393); /*0x42ef14*/
    *(_BYTE *)(v4 + 393) = v6 == 0; /*0x42ef20*/
    if ( v6 ) /*0x42ef28*/
      *(_BYTE *)(*(_QWORD *)(a1 + 664) + 394LL) = 0; /*0x42ef31*/
    return sub_42EF50(a1); /*0x42ef40*/
  }
  return result; /*0x42ef0e*/
}

// [2/2] Address: 0x42f130
// Method: ShareListLayer::onShare
// Hidden C++ exception states: #wind=2
__int64 __fastcall ShareListLayer_onShare(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  cocos2d::CCObject *v4; // rbx
  cocos2d::CCObject *v6; // rbx
  __int64 (__fastcall *v7)(__int64); // rdx
  __int64 v8; // rdx
  __int128 v9; // [rsp+50h] [rbp-58h] BYREF
  __int64 v10; // [rsp+60h] [rbp-48h]
  __int64 v11; // [rsp+68h] [rbp-40h]
  _BYTE v12[56]; // [rsp+70h] [rbp-38h] BYREF

  v2 = a1[83]; /*0x42f142*/
  if ( (unsigned int)((__int64)(*(_QWORD *)(v2 + 328) - *(_QWORD *)(v2 + 320)) >> 2) ) /*0x42f157*/
  {
    v6 = (cocos2d::CCObject *)operator new(0x2C0u); /*0x42f255*/
    FLAlertLayer_FLAlertLayer((__int64)v6); /*0x42f263*/
    *(_QWORD *)v6 = &UploadListPopup::`vftable'; /*0x42f26f*/
    *((_QWORD *)v6 + 40) = &UploadListPopup::`vftable'; /*0x42f279*/
    *((_QWORD *)v6 + 41) = &UploadListPopup::`vftable'; /*0x42f287*/
    *((_QWORD *)v6 + 42) = &UploadListPopup::`vftable'; /*0x42f295*/
    *((_QWORD *)v6 + 43) = &UploadListPopup::`vftable'; /*0x42f2a3*/
    *((_QWORD *)v6 + 44) = &UploadListPopup::`vftable'; /*0x42f2b1*/
    *((_QWORD *)v6 + 51) = &UploadListPopup::`vftable'; /*0x42f2bf*/
    *((_QWORD *)v6 + 54) = &UploadListPopup::`vftable'; /*0x42f2cd*/
    *((_QWORD *)v6 + 68) = &UploadListPopup::`vftable'; /*0x42f2db*/
    *((_QWORD *)v6 + 83) = &UploadListPopup::`vftable'; /*0x42f2e9*/
    *((_QWORD *)v6 + 84) = 0; /*0x42f2f2*/
    *((_QWORD *)v6 + 85) = 0; /*0x42f2f9*/
    *((_QWORD *)v6 + 86) = 0; /*0x42f300*/
    *((_QWORD *)v6 + 87) = 0; /*0x42f307*/
    if ( (unsigned __int8)UploadListPopup_init(v6, v2) ) /*0x42f314*/
    {
      cocos2d::CCObject::autorelease(v6); /*0x42f320*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x42f330*/
      v6 = 0; /*0x42f333*/
    }
    v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 1064LL); /*0x42f339*/
    if ( v7 == UploadPopup_show ) /*0x42f34d*/
      UploadPopup_show((__int64)v6); /*0x42f34f*/
    else
      v7((__int64)v6); /*0x42f356*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x42f360*/
    LOBYTE(v8) = 1; /*0x42f369*/
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v8); /*0x42f36e*/
  }
  else
  {
    v9 = 0; /*0x42f166*/
    *(_QWORD *)&v9 = sub_3C460(32); /*0x42f181*/
    v10 = 30; /*0x42f186*/
    v11 = 31; /*0x42f18f*/
    strcpy((char *)v9, "You can't share an empty list."); /*0x42f19f*/
    sub_3E4F0(v12, &v9); /*0x42f1de*/
    v4 = FLAlertLayer_create_0(0, (int)"Empty", v3, (__int64)"OK", 0, 1136525312, 0, 0, 1065353216); /*0x42f22a*/
    sub_3C310(&v9); /*0x42f232*/
    return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v4 + 1064LL))(v4); /*0x42f244*/
  }
}
