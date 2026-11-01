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
