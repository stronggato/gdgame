#include <Geode/binding/UploadActionPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x39d220
// Method: UploadActionPopup::~UploadActionPopup
__int64 __fastcall UploadActionPopup__dtor_UploadActionPopup(_QWORD *a1)
{
  *a1 = &UploadActionPopup::`vftable'; /*0x39d227*/
  a1[40] = &UploadActionPopup::`vftable'; /*0x39d231*/
  a1[41] = &UploadActionPopup::`vftable'; /*0x39d23f*/
  a1[42] = &UploadActionPopup::`vftable'; /*0x39d24d*/
  a1[43] = &UploadActionPopup::`vftable'; /*0x39d25b*/
  a1[44] = &UploadActionPopup::`vftable'; /*0x39d269*/
  a1[51] = &UploadActionPopup::`vftable'; /*0x39d277*/
  a1[54] = &UploadActionPopup::`vftable'; /*0x39d285*/
  a1[68] = &UploadActionPopup::`vftable'; /*0x39d293*/
  return StarInfoPopup__dtor_StarInfoPopup(a1);
}

// [2/5] Address: 0x39d790
// Method: UploadActionPopup::showSuccessMessage
// Hidden C++ exception states: #wind=1
double __fastcall UploadActionPopup_showSuccessMessage(__int64 a1, _QWORD *a2)
{
  struct cocos2d::CCSprite *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  _QWORD *v13; // [rsp+48h] [rbp-30h]

  v13 = a2; /*0x39d7b1*/
  v4 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"); /*0x39d7c3*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v4 + 160LL))(v4); /*0x39d7d4*/
  v5 = *(_QWORD *)v4; /*0x39d7e8*/
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 680) + 544LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 680) + 544LL)); /*0x39d7ee*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v5 + 184))(v4, v6); /*0x39d7fa*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x39d80d*/
    *(_QWORD *)(a1 + 584),
    v4);
  LoadingCircle_fadeAndRemove(*(_QWORD *)(a1 + 680)); /*0x39d81a*/
  v7 = a2; /*0x39d81f*/
  if ( a2[3] > 0xFu ) /*0x39d827*/
    v7 = (_QWORD *)*a2; /*0x39d829*/
  v10 = 0; /*0x39d82f*/
  v11 = 0; /*0x39d836*/
  v12 = 0; /*0x39d83b*/
  v8 = -1; /*0x39d840*/
  do /*0x39d84a*/
    ++v8; /*0x39d847*/
  while ( *((_BYTE *)v7 + v8) ); /*0x39d84a*/
  sub_3C230(&v10); /*0x39d855*/
  TextArea_setString(*(__int64 **)(a1 + 672), (const void **)&v10); /*0x39d866*/
  *(_BYTE *)(a1 + 696) = 1; /*0x39d86b*/
  return sub_3C310(a2); /*0x39d87a*/
}

// [3/5] Address: 0x39d8a0
// Method: UploadActionPopup::showFailMessage
// Hidden C++ exception states: #wind=1
double __fastcall UploadActionPopup_showFailMessage(__int64 a1, _QWORD *a2)
{
  struct cocos2d::CCSprite *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  _QWORD *v13; // [rsp+48h] [rbp-30h]

  v13 = a2; /*0x39d8c1*/
  v4 = cocos2d::CCSprite::createWithSpriteFrameName("exMark_001.png"); /*0x39d8d3*/
  v5 = *(_QWORD *)v4; /*0x39d8e4*/
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 680) + 544LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 680) + 544LL)); /*0x39d8ea*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v5 + 184))(v4, v6); /*0x39d8f6*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x39d909*/
    *(_QWORD *)(a1 + 584),
    v4);
  LoadingCircle_fadeAndRemove(*(_QWORD *)(a1 + 680)); /*0x39d916*/
  v7 = a2; /*0x39d91b*/
  if ( a2[3] > 0xFu ) /*0x39d923*/
    v7 = (_QWORD *)*a2; /*0x39d925*/
  v10 = 0; /*0x39d92b*/
  v11 = 0; /*0x39d932*/
  v12 = 0; /*0x39d937*/
  v8 = -1; /*0x39d93c*/
  do /*0x39d946*/
    ++v8; /*0x39d943*/
  while ( *((_BYTE *)v7 + v8) ); /*0x39d946*/
  sub_3C230(&v10); /*0x39d951*/
  TextArea_setString(*(__int64 **)(a1 + 672), (const void **)&v10); /*0x39d962*/
  *(_BYTE *)(a1 + 696) = 0; /*0x39d967*/
  return sub_3C310(a2); /*0x39d976*/
}

// [4/5] Address: 0x39d9a0
// Method: UploadActionPopup::onClose
__int64 __fastcall UploadActionPopup_onClose(_QWORD *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD *); // rcx
  __int64 v4; // rdx

  v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))a1[83]; /*0x39d9a9*/
  if ( v2 ) /*0x39d9b3*/
    return (**v2)(v2, a1); /*0x39d9c0*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x39d9cb*/
  LOBYTE(v4) = 1; /*0x39d9d4*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v4);
}

// [5/5] Address: 0x39da80
// Method: UploadActionPopup::keyBackClicked
__int64 __fastcall UploadActionPopup_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v4; // rdx

  v1 = a1 - 336; /*0x39da86*/
  v2 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 328); /*0x39da8d*/
  if ( v2 ) /*0x39da97*/
    return (**v2)(v2, v1); /*0x39daa4*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x39daaf*/
  LOBYTE(v4) = 1; /*0x39dab8*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v4);
}
