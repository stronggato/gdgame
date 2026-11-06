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

// Address: 0x62d2f0
// Method: UploadPopup::init
// Hidden C++ exception states: #wind=4
bool __fastcall UploadPopup_init(__int64 a1, cocos2d::CCObject *a2)
{
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64 *, __int64); // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  const char *v18; // rcx
  struct cocos2d::CCLabelBMFont *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  const struct cocos2d::CCPoint *v27; // rax
  char *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  cocos2d::CCLayerColor *v32; // rax
  __int64 *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  void (__fastcall ***v36)(__int64); // rbx
  __int64 v37; // rcx
  int v38; // eax
  cocos2d::CCObject *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rcx
  cocos2d::CCDirector *v42; // rax
  float v43; // xmm7_4
  __int64 v44; // rcx
  cocos2d::CCDirector *v45; // rax
  float v46; // xmm0_4
  __int64 v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int128 *v51; // [rsp+40h] [rbp-29h] BYREF
  float v52; // [rsp+48h] [rbp-21h] BYREF
  float v53; // [rsp+4Ch] [rbp-1Dh]
  _BYTE v54[16]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v55; // [rsp+60h] [rbp-9h] BYREF
  __int64 v56; // [rsp+70h] [rbp+7h]
  unsigned __int64 v57; // [rsp+78h] [rbp+Fh]

  LODWORD(v51) = -1778384896;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v51);
  if ( result )
  {
    sub_5ABA0(a1);
    *(_QWORD *)(a1 + 672) = a2;
    cocos2d::CCObject::retain(a2);
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v5);
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v6);
    v8 = cocos2d::CCDirector::sharedDirector(v7);
    cocos2d::CCDirector::getWinSize(v8, &v52);
    v9 = cocos2d::CCLayer::create();
    *(_QWORD *)(a1 + 584) = v9;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v9);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v54, 0.0, 0.0, 80.0, 80.0);
    v11 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("square04_001.png", v10);
    v12 = v11[40];
    v13 = *(void (__fastcall **)(__int64 *, __int64))(v12 + 40);
    LOBYTE(v12) = -1;
    v13(v11 + 40, v12);
    (*(void (__fastcall **)(__int64 *, void *))v11[40])(v11 + 40, &unk_6FF6B8);
    v14 = *v11;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v51, 420.0, 300.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 312))(v11, v15);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v11,
      0xFFFFFFFFLL);
    v16 = *v11;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v51, v52 * 0.5, v53 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v16 + 184))(v11, v17);
    sub_3E4F0(&v55, *(_QWORD *)(a1 + 672) + 344LL);
    v18 = (const char *)&v55;
    if ( v57 > 0xF )
      v18 = (const char *)v55;
    v19 = cocos2d::CCLabelBMFont::create(v18, "goldFont.fnt");
    sub_3C310(&v55);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v19);
    v20 = *(_QWORD *)v19;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v51, v52 * 0.5, (float)((float)(v53 * 0.5) + 150.0) - 25.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v20 + 184))(v19, v21);
    v26 = cocos2d::CCMenu::create(v23, v22, v24, v25);
    *(_QWORD *)(a1 + 552) = v26;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v26, 10);
    v51 = &v55;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    *(_QWORD *)&v55 = sub_3C460(32);
    v56 = 31;
    v57 = 31;
    strcpy((char *)v55, "Please wait, uploading level...");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v54, 0.5, 1.0);
    v28 = TextArea_create((__int64)&v55, "chatFont.fnt", 1.0, 400.0, v27, 1101004800, 0, 0);
    *(_QWORD *)(a1 + 680) = v28;
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v28);
    v29 = **(_QWORD **)(a1 + 680);
    v30 = *(_QWORD *)(a1 + 680);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v54, v52 * 0.5, (float)(v53 * 0.5) - 30.0);
    (*(void (__fastcall **)(__int64, __int64))(v29 + 184))(v30, v31);
    *(_DWORD *)(a1 + 640) = -1;
    v32 = LoadingCircle_create();
    *(_QWORD *)(a1 + 688) = v32;
    *((_QWORD *)v32 + 69) = *(_QWORD *)(a1 + 584);
    *(_BYTE *)(*(_QWORD *)(a1 + 688) + 560LL) = 0;
    LoadingCircle_show(*(_QWORD *)(a1 + 688));
    v33 = *(__int64 **)(*(_QWORD *)(a1 + 688) + 544LL);
    v34 = *v33;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v54, v52 * 0.5, (float)(v53 * 0.5) + 20.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v34 + 184))(v33, v35);
    v36 = (void (__fastcall ***)(__int64))(a1 + 664);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 672) + 857LL) )
    {
      (**v36)(a1 + 664);
      v55 = 0;
      v56 = 0;
      v57 = 0;
      *(_QWORD *)&v55 = sub_3C460(32);
      v56 = 22;
      v57 = 31;
      strcpy((char *)v55, "Level already uploaded");
      TextArea_setString(*(__int64 **)(a1 + 680), (const void **)&v55);
    }
    else
    {
      v37 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v51 = (__int128 *)operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v51);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v37 = *(_QWORD *)&qword_905FB0;
      }
      *(_QWORD *)(v37 + 1400) = v36;
      sub_226050(v37, *(_QWORD *)(a1 + 672));
    }
    v38 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    v39 = CCMenuItemSpriteExtra_create(v38, 0, a1, (__int64)sub_62DD40);
    *(_QWORD *)(a1 + 696) = v39;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v39);
    v40 = **(_QWORD **)(a1 + 696);
    v42 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v41);
    v43 = cocos2d::CCDirector::getScreenTop(v42) - 40.0;
    v45 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v44);
    v46 = cocos2d::CCDirector::getScreenLeft(v45) + 40.0;
    v47 = *(_QWORD *)(a1 + 552);
    v48 = *(_QWORD *)(a1 + 696);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v54, v46, v43);
    cocos2d::CCNode::convertToNodeSpace(v47, &v51, v49);
    (*(void (__fastcall **)(__int64, __int64))(v40 + 184))(v48, v50);
    return 1;
  }
  return result;
}
