#include <Geode/binding/UploadPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x98df0
// Method: UploadPopup::onClose
__int64 __fastcall UploadPopup_onClose(__int64 a1)
{
  __int64 v2; // rdx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x98dfe*/
  LOBYTE(v2) = 1; /*0x98e07*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2);
}

// [2/6] Address: 0x42fe40
// Method: UploadPopup::show
__int64 __fastcall UploadPopup_show(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x42fe56*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x42fe5d*/
    v2 = *(_QWORD *)(a1 + 568); /*0x42fe67*/
  if ( !*(_DWORD *)(a1 + 592) ) /*0x42fe4f*/
    *(_DWORD *)(a1 + 592) = 105; /*0x42fe76*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1); /*0x42fe83*/
  LOBYTE(v3) = 1; /*0x42fe8c*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, v3);
}

// [4/6] Address: 0x62d8a0
// Method: UploadPopup::levelUploadFinished
__int64 __fastcall UploadPopup_levelUploadFinished(__int64 a1)
{
  struct cocos2d::CCSprite *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  const void *v15[7]; // [rsp+40h] [rbp-38h] BYREF
  float v16; // [rsp+80h] [rbp+8h] BYREF
  float v17; // [rsp+84h] [rbp+Ch]
  char v18; // [rsp+90h] [rbp+18h] BYREF
  char v19; // [rsp+98h] [rbp+20h] BYREF

  v2 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"); /*0x62d8c3*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v2 + 160LL))(v2); /*0x62d8c9*/
  v3 = *(_QWORD *)v2; /*0x62d8d3*/
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 544LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL)); /*0x62d8e0*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v3 + 184))(v2, v4); /*0x62d8ec*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 - 80) + 464LL))( /*0x62d8fc*/
    *(_QWORD *)(a1 - 80),
    v2);
  LoadingCircle_fadeAndRemove(*(_QWORD *)(a1 + 24)); /*0x62d906*/
  v5 = *(__int64 **)(a1 + 16); /*0x62d91e*/
  v15[2] = &loc_D + 2; /*0x62d93d*/
  v15[3] = &loc_D + 2; /*0x62d946*/
  strcpy((char *)v15, "Upload Complete"); /*0x62d94f*/
  TextArea_setString(v5, v15); /*0x62d95a*/
  v7 = cocos2d::CCDirector::sharedDirector(v6); /*0x62d95f*/
  cocos2d::CCDirector::getWinSize(v7, &v16); /*0x62d970*/
  v9 = ButtonSprite_create((unsigned int)"Back", 0, 0, v8, 0, (__int64)"goldFont.fnt", (__int64)"GJ_button_01.png", 0); /*0x62d9b0*/
  v10 = (__int64 *)CCMenuItemSpriteExtra_create(v9, 0, a1 - 664, UploadPopup_onReturnToLevel); /*0x62d9d1*/
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 - 112) + 464LL))(*(_QWORD *)(a1 - 112), v10); /*0x62d9e1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, v16 * 0.5, (float)((float)(v17 * 0.5) - 150.0) + 25.0); /*0x62da1e*/
  v11 = *v10; /*0x62da30*/
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 - 112), &v19, v12); /*0x62da36*/
  (*(void (__fastcall **)(__int64 *, __int64))(v11 + 184))(v10, v13); /*0x62da42*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x62da51*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 936LL))(*(_QWORD *)(a1 + 32), 0); /*0x62da66*/
}

// [5/6] Address: 0x62da70
// Method: UploadPopup::levelUploadFailed
__int64 __fastcall UploadPopup_levelUploadFailed(__int64 a1)
{
  struct cocos2d::CCSprite *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r9d
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+58h] [rbp-20h]
  float v17; // [rsp+80h] [rbp+8h] BYREF
  float v18; // [rsp+84h] [rbp+Ch]
  char v19; // [rsp+90h] [rbp+18h] BYREF
  char v20; // [rsp+98h] [rbp+20h] BYREF

  v2 = cocos2d::CCSprite::createWithSpriteFrameName("exMark_001.png"); /*0x62da8c*/
  v3 = *(_QWORD *)v2; /*0x62da8f*/
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 544LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL)); /*0x62da9c*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v3 + 184))(v2, v4); /*0x62daa8*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 - 80) + 464LL))( /*0x62dab8*/
    *(_QWORD *)(a1 - 80),
    v2);
  LoadingCircle_fadeAndRemove(*(_QWORD *)(a1 + 24)); /*0x62dac2*/
  v14 = 0; /*0x62dad6*/
  *(_QWORD *)&v14 = sub_3C460(48); /*0x62daec*/
  v15 = 38; /*0x62daf6*/
  v16 = 47; /*0x62daff*/
  strcpy((char *)v14, "Upload Failed. Please try again later."); /*0x62db08*/
  TextArea_setString(*(__int64 **)(a1 + 16), (const void **)&v14); /*0x62db32*/
  v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x62db37*/
  cocos2d::CCDirector::getWinSize(v6, &v17); /*0x62db48*/
  v8 = ButtonSprite_create((unsigned int)"Close", 0, 0, v7, 0, (__int64)"goldFont.fnt", (__int64)"GJ_button_01.png", 0); /*0x62db88*/
  v9 = (__int64 *)CCMenuItemSpriteExtra_create(v8, 0, a1 - 664, UploadPopup_onClose); /*0x62dba9*/
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 - 112) + 464LL))(*(_QWORD *)(a1 - 112), v9); /*0x62dbb9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, v17 * 0.5, (float)((float)(v18 * 0.5) - 150.0) + 25.0); /*0x62dbf6*/
  v10 = *v9; /*0x62dc08*/
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 - 112), &v20, v11); /*0x62dc0e*/
  (*(void (__fastcall **)(__int64 *, __int64))(v10 + 184))(v9, v12); /*0x62dc1a*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x62dc29*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 936LL))(*(_QWORD *)(a1 + 32), 0); /*0x62dc3e*/
}

// [6/6] Address: 0x62dc50
// Method: UploadPopup::onReturnToLevel
// Hidden C++ exception states: #wind=3
double __fastcall UploadPopup_onReturnToLevel(__int64 *a1)
{
  struct cocos2d::CCScene *v2; // rax
  double result; // xmm0_8
  struct cocos2d::CCScene *v4; // rbx
  __int64 v5; // rcx
  cocos2d::CCDirector *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // [rsp+30h] [rbp+8h]
  void *v10; // [rsp+30h] [rbp+8h]

  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 992))(a1, 0); /*0x62dc5e*/
  v2 = (struct cocos2d::CCScene *)EditLevelLayer_scene(a1[84]); /*0x62dc6b*/
  *(_QWORD *)&result = 1056964608; /*0x62dc73*/
  v4 = cocos2d::CCTransitionFade::create(0.5, v2); /*0x62dc81*/
  v6 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v5); /*0x62dc84*/
  cocos2d::CCDirector::replaceScene(v6, v4); /*0x62dc90*/
  v7 = qword_905FD0; /*0x62dc96*/
  if ( !qword_905FD0 ) /*0x62dca0*/
  {
    v9 = operator new(0x6E8u); /*0x62dcac*/
    qword_905FD0 = sub_2723A0(v9); /*0x62dcba*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x62dccb*/
    v7 = qword_905FD0; /*0x62dccd*/
  }
  if ( *(_DWORD *)(v7 + 692) == *(_DWORD *)(v7 + 696) && !*(_BYTE *)(v7 + 688) ) /*0x62dce2*/
  {
    v8 = *(_QWORD *)&qword_905FB0; /*0x62dceb*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x62dcf5*/
    {
      v10 = operator new(0x690u); /*0x62dd01*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x62dd0f*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x62dd20*/
      v8 = *(_QWORD *)&qword_905FB0; /*0x62dd22*/
    }
    return GameLevelManager_updateUserScore(v8); /*0x62dd2e*/
  }
  return result; /*0x62dd29*/
}
