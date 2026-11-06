#include <Geode/binding/UploadListPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0x42f8c0
// Method: UploadListPopup::listUploadFinished
__int64 __fastcall UploadListPopup_listUploadFinished(__int64 a1)
{
  struct cocos2d::CCSprite *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  cocos2d::CCObject *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  const void *v14[7]; // [rsp+40h] [rbp-38h] BYREF
  float v15; // [rsp+80h] [rbp+8h] BYREF
  float v16; // [rsp+84h] [rbp+Ch]
  char v17; // [rsp+90h] [rbp+18h] BYREF
  char v18; // [rsp+98h] [rbp+20h] BYREF

  v2 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"); /*0x42f8e3*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v2 + 160LL))(v2); /*0x42f8e9*/
  v3 = *(_QWORD *)v2; /*0x42f8f3*/
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 544LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL)); /*0x42f900*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v3 + 184))(v2, v4); /*0x42f90c*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 - 80) + 464LL))( /*0x42f91c*/
    *(_QWORD *)(a1 - 80),
    v2);
  LoadingCircle_fadeAndRemove(*(_QWORD *)(a1 + 24)); /*0x42f926*/
  v5 = *(__int64 **)(a1 + 16); /*0x42f93e*/
  v14[2] = &loc_D + 2; /*0x42f95d*/
  v14[3] = &loc_D + 2; /*0x42f966*/
  strcpy((char *)v14, "Upload Complete"); /*0x42f96f*/
  TextArea_setString(v5, v14); /*0x42f97a*/
  v7 = cocos2d::CCDirector::sharedDirector(v6); /*0x42f97f*/
  cocos2d::CCDirector::getWinSize(v7, &v15); /*0x42f990*/
  v8 = (unsigned int)ButtonSprite_create( /*0x42f9d0*/
                       (int)"Back",
                       0,
                       0,
                       1.0,
                       0,
                       (__int64)"goldFont.fnt",
                       (__int64)"GJ_button_01.png",
                       0);
  v9 = CCMenuItemSpriteExtra_create(v8, 0, (int)a1 - 664, (__int64)UploadListPopup_onReturnToList); /*0x42f9f1*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 - 112) + 464LL))(*(_QWORD *)(a1 - 112), v9); /*0x42fa01*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, v15 * 0.5, (float)((float)(v16 * 0.5) - 150.0) + 25.0); /*0x42fa3e*/
  v10 = *(_QWORD *)v9; /*0x42fa50*/
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 - 112), &v18, v11); /*0x42fa56*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v10 + 184))(v9, v12); /*0x42fa62*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x42fa71*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 936LL))(*(_QWORD *)(a1 + 32), 0); /*0x42fa86*/
}

// [3/4] Address: 0x42fa90
// Method: UploadListPopup::listUploadFailed
// Hidden C++ exception states: #wind=2
void __fastcall UploadListPopup_listUploadFailed(__int64 a1, __int64 a2, signed int a3)
{
  struct cocos2d::CCSprite *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  void *v15; // rdx
  char *p_Src; // r14
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  cocos2d::CCObject *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // rax
  float v26[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v28[8]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v29; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-1h]
  __int64 v31; // [rsp+70h] [rbp+7h]
  __int128 Src; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+88h] [rbp+1Fh]
  __int64 v34; // [rsp+90h] [rbp+27h]

  v5 = cocos2d::CCSprite::createWithSpriteFrameName("exMark_001.png"); /*0x42facf*/
  v6 = *(_QWORD *)v5; /*0x42fadd*/
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 544LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL)); /*0x42fae3*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v6 + 184))(v5, v7); /*0x42faef*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 - 80) + 464LL))( /*0x42faff*/
    *(_QWORD *)(a1 - 80),
    v5);
  LoadingCircle_fadeAndRemove(*(_QWORD *)(a1 + 24)); /*0x42fb09*/
  Src = 0; /*0x42fb11*/
  v10 = (char *)sub_3C460(48); /*0x42fb1f*/
  *(_QWORD *)&Src = v10; /*0x42fb22*/
  v12 = 38; /*0x42fb26*/
  v33 = 38; /*0x42fb2b*/
  v13 = 47; /*0x42fb2f*/
  v34 = 47; /*0x42fb35*/
  strcpy(v10, "Upload Failed. Please try again later."); /*0x42fb40*/
  if ( a3 < -1 ) /*0x42fb6a*/
  {
    sub_43D80(&Src, &word_788B58, 2u); /*0x42fb7d*/
    v14 = GameToolbox_intToString((__int64)&v29, a3); /*0x42fb89*/
    v15 = (void *)v14; /*0x42fb8f*/
    if ( *(_QWORD *)(v14 + 24) > 0xFu ) /*0x42fb97*/
      v15 = *(void **)v14; /*0x42fb99*/
    sub_43D80(&Src, v15, *(_QWORD *)(v14 + 16)); /*0x42fba4*/
    sub_3C310(&v29); /*0x42fbae*/
    sub_43D80(&Src, ")", 1u); /*0x42fbc4*/
    v13 = v34; /*0x42fbc9*/
    v12 = v33; /*0x42fbcd*/
    v10 = (char *)Src; /*0x42fbd1*/
  }
  v29 = 0; /*0x42fbd8*/
  v30 = 0; /*0x42fbdc*/
  v31 = 0; /*0x42fbe4*/
  p_Src = (char *)&Src; /*0x42fbec*/
  if ( v13 > 0xF ) /*0x42fbf4*/
    p_Src = v10; /*0x42fbf4*/
  v17 = 0x7FFFFFFFFFFFFFFFLL; /*0x42fbf8*/
  if ( v12 > 0x7FFFFFFFFFFFFFFFLL ) /*0x42fc05*/
    sub_8D90(v9, v8, v11); /*0x42fddc*/
  if ( v12 > 0xF ) /*0x42fc0f*/
  {
    if ( (v12 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x42fc31*/
    {
      v17 = v12 | 0xF; /*0x42fc33*/
      if ( (v12 | 0xF) < 0x16 ) /*0x42fc3e*/
        v17 = 22; /*0x42fc3e*/
    }
    *(_QWORD *)&v29 = sub_3C460(v17 + 1); /*0x42fc4b*/
    v30 = v12; /*0x42fc4f*/
    v31 = v17; /*0x42fc53*/
    memcpy((void *)v29, p_Src, v12 + 1); /*0x42fc61*/
  }
  else
  {
    v30 = v12; /*0x42fc11*/
    v31 = 15; /*0x42fc15*/
    v29 = *(_OWORD *)p_Src; /*0x42fc21*/
  }
  TextArea_setString(*(__int64 **)(a1 + 16), (const void **)&v29); /*0x42fc6e*/
  v19 = cocos2d::CCDirector::sharedDirector(v18); /*0x42fc73*/
  cocos2d::CCDirector::getWinSize(v19, v26); /*0x42fc80*/
  v20 = (unsigned int)ButtonSprite_create( /*0x42fcc0*/
                        (int)"Close",
                        0,
                        0,
                        1.0,
                        0,
                        (__int64)"goldFont.fnt",
                        (__int64)"GJ_button_01.png",
                        0);
  v21 = CCMenuItemSpriteExtra_create(v20, 0, (int)a1 - 664, (__int64)UploadPopup_onClose); /*0x42fcdd*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 - 112) + 464LL))(*(_QWORD *)(a1 - 112), v21); /*0x42fcf1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v27, v26[0] * 0.5, (float)((float)(v26[1] * 0.5) - 150.0) + 25.0); /*0x42fd22*/
  v22 = *(_QWORD *)v21; /*0x42fd28*/
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 - 112), v28, v23); /*0x42fd36*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v22 + 184))(v21, v24); /*0x42fd42*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x42fd51*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 936LL))(*(_QWORD *)(a1 + 32), 0); /*0x42fd60*/
  if ( v13 > 0xF ) /*0x42fd6b*/
  {
    v25 = v10; /*0x42fd71*/
    if ( v13 + 1 >= 0x1000 ) /*0x42fd7b*/
    {
      v10 = (char *)*((_QWORD *)v10 - 1); /*0x42fd81*/
      if ( (unsigned __int64)(v25 - v10 - 8) > 0x1F ) /*0x42fd90*/
        invoke_watson(0, 0, 0, 0, 0); /*0x42fda5*/
    }
    j_j_free(v10); /*0x42fdaf*/
  }
}

// [4/4] Address: 0x42fdf0
// Method: UploadListPopup::onReturnToList
bool __fastcall UploadListPopup_onReturnToList(__int64 *a1)
{
  struct cocos2d::CCScene *v2; // rax
  struct cocos2d::CCScene *v3; // rbx
  __int64 v4; // rcx
  cocos2d::CCDirector *v5; // rax

  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 992))(a1, 0); /*0x42fdfe*/
  v2 = (struct cocos2d::CCScene *)LevelListLayer_scene(a1[84]); /*0x42fe0b*/
  v3 = cocos2d::CCTransitionFade::create(0.5, v2); /*0x42fe21*/
  v5 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v4); /*0x42fe24*/
  return cocos2d::CCDirector::replaceScene(v5, v3); /*0x42fe30*/
}

// Address: 0x42f390
// Method: UploadListPopup::init
// Hidden C++ exception states: #wind=4
bool __fastcall UploadListPopup_init(__int64 a1, cocos2d::CCObject *a2)
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
  __int64 v36; // rcx
  int v37; // eax
  cocos2d::CCObject *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rcx
  cocos2d::CCDirector *v41; // rax
  float v42; // xmm7_4
  __int64 v43; // rcx
  cocos2d::CCDirector *v44; // rax
  float v45; // xmm0_4
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int128 *v50; // [rsp+40h] [rbp-29h] BYREF
  float v51; // [rsp+48h] [rbp-21h] BYREF
  float v52; // [rsp+4Ch] [rbp-1Dh]
  _BYTE v53[16]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v54; // [rsp+60h] [rbp-9h] BYREF
  __int64 v55; // [rsp+70h] [rbp+7h]
  unsigned __int64 v56; // [rsp+78h] [rbp+Fh]

  LODWORD(v50) = -1778384896;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v50);
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
    cocos2d::CCDirector::getWinSize(v8, &v51);
    v9 = cocos2d::CCLayer::create();
    *(_QWORD *)(a1 + 584) = v9;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v9);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v53, 0.0, 0.0, 80.0, 80.0);
    v11 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("square04_001.png", v10);
    v12 = v11[40];
    v13 = *(void (__fastcall **)(__int64 *, __int64))(v12 + 40);
    LOBYTE(v12) = -1;
    v13(v11 + 40, v12);
    (*(void (__fastcall **)(__int64 *, __int16 *))v11[40])(v11 + 40, &word_6FEBA0);
    v14 = *v11;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v50, 420.0, 300.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 312))(v11, v15);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v11,
      0xFFFFFFFFLL);
    v16 = *v11;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v51 * 0.5, v52 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v16 + 184))(v11, v17);
    sub_3E4F0(&v54, *(_QWORD *)(a1 + 672) + 440LL);
    v18 = (const char *)&v54;
    if ( v56 > 0xF )
      v18 = (const char *)v54;
    v19 = cocos2d::CCLabelBMFont::create(v18, "goldFont.fnt");
    sub_3C310(&v54);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v19);
    v20 = *(_QWORD *)v19;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v51 * 0.5, (float)((float)(v52 * 0.5) + 150.0) - 25.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v20 + 184))(v19, v21);
    v26 = cocos2d::CCMenu::create(v23, v22, v24, v25);
    *(_QWORD *)(a1 + 552) = v26;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v26, 10);
    v50 = &v54;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    *(_QWORD *)&v54 = sub_3C460(32);
    v55 = 30;
    v56 = 31;
    strcpy((char *)v54, "Please wait, uploading list...");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, 0.5, 1.0);
    v28 = TextArea_create((__int64)&v54, "chatFont.fnt", 1.0, 400.0, v27, 1101004800, 0, 0);
    *(_QWORD *)(a1 + 680) = v28;
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v28);
    v29 = **(_QWORD **)(a1 + 680);
    v30 = *(_QWORD *)(a1 + 680);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, v51 * 0.5, (float)(v52 * 0.5) - 30.0);
    (*(void (__fastcall **)(__int64, __int64))(v29 + 184))(v30, v31);
    *(_DWORD *)(a1 + 640) = -1;
    v32 = LoadingCircle_create();
    *(_QWORD *)(a1 + 688) = v32;
    *((_QWORD *)v32 + 69) = *(_QWORD *)(a1 + 584);
    *(_BYTE *)(*(_QWORD *)(a1 + 688) + 560LL) = 0;
    LoadingCircle_show(*(_QWORD *)(a1 + 688));
    v33 = *(__int64 **)(*(_QWORD *)(a1 + 688) + 544LL);
    v34 = *v33;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, v51 * 0.5, (float)(v52 * 0.5) + 20.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v34 + 184))(v33, v35);
    v36 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v50 = (__int128 *)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v50);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v36 = *(_QWORD *)&qword_905FB0;
    }
    *(_QWORD *)(v36 + 1408) = a1 + 664;
    sub_229D50(v36, *(_QWORD *)(a1 + 672));
    v37 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    v38 = CCMenuItemSpriteExtra_create(v37, 0, a1, (__int64)sub_42FEA0);
    *(_QWORD *)(a1 + 696) = v38;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v38);
    v39 = **(_QWORD **)(a1 + 696);
    v41 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v40);
    v42 = cocos2d::CCDirector::getScreenTop(v41) - 40.0;
    v44 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v43);
    v45 = cocos2d::CCDirector::getScreenLeft(v44) + 40.0;
    v46 = *(_QWORD *)(a1 + 552);
    v47 = *(_QWORD *)(a1 + 696);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, v45, v42);
    cocos2d::CCNode::convertToNodeSpace(v46, &v50, v48);
    (*(void (__fastcall **)(__int64, __int64))(v39 + 184))(v47, v49);
    return 1;
  }
  return result;
}
