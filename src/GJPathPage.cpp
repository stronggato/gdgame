#include <Geode/binding/GJPathPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/9] Address: 0x116bb0
// Method: GJPathPage::onActivatePath
void __fastcall GJPathPage_onActivatePath(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 476); /*0x116bb6*/
  if ( v1 > 0 ) /*0x116bbe*/
  {
    v2 = sub_182B60(a1); /*0x116bc0*/
    sub_182FE0(v2, (unsigned int)v1); /*0x116bcf*/
  }
}

// [3/9] Address: 0x38e7c0
// Method: GJPathPage::~GJPathPage
_QWORD *__fastcall GJPathPage__dtor_GJPathPage(_QWORD *Block, char a2)
{
  *Block = &GJPathPage::`vftable'; /*0x38e7d3*/
  Block[40] = &GJPathPage::`vftable'; /*0x38e7e0*/
  Block[41] = &GJPathPage::`vftable'; /*0x38e7ee*/
  Block[42] = &GJPathPage::`vftable'; /*0x38e7fc*/
  Block[43] = &GJPathPage::`vftable'; /*0x38e80a*/
  Block[44] = &GJPathPage::`vftable'; /*0x38e818*/
  Block[51] = &GJPathPage::`vftable'; /*0x38e826*/
  Block[54] = &GJPathPage::`vftable'; /*0x38e834*/
  Block[68] = &GJPathPage::`vftable'; /*0x38e842*/
  Block[83] = &GJPathPage::`vftable'; /*0x38e850*/
  Block[84] = &GJPathPage::`vftable'; /*0x38e85e*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x38e865*/
  if ( (a2 & 1) != 0 ) /*0x38e86d*/
    j_j_free(Block); /*0x38e877*/
  return Block; /*0x38e87c*/
}

// [4/9] Address: 0x38f730
// Method: GJPathPage::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJPathPage_create(unsigned int a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x2C0u); /*0x38f74e*/
  FLAlertLayer_FLAlertLayer((__int64)v4); /*0x38f759*/
  *v4 = &GJPathPage::`vftable'; /*0x38f765*/
  v4[40] = &GJPathPage::`vftable'; /*0x38f76f*/
  v4[41] = &GJPathPage::`vftable'; /*0x38f77d*/
  v4[42] = &GJPathPage::`vftable'; /*0x38f78b*/
  v4[43] = &GJPathPage::`vftable'; /*0x38f799*/
  v4[44] = &GJPathPage::`vftable'; /*0x38f7a7*/
  v4[51] = &GJPathPage::`vftable'; /*0x38f7b5*/
  v4[54] = &GJPathPage::`vftable'; /*0x38f7c3*/
  v4[68] = &GJPathPage::`vftable'; /*0x38f7d1*/
  v4[83] = &GJPathPage::`vftable'; /*0x38f7df*/
  v4[84] = &GJPathPage::`vftable'; /*0x38f7ed*/
  v4[85] = 0; /*0x38f7f4*/
  *((_DWORD *)v4 + 172) = 0; /*0x38f7ff*/
  *((_BYTE *)v4 + 692) = 0; /*0x38f809*/
  *((_DWORD *)v4 + 174) = 0; /*0x38f810*/
  if ( (unsigned __int8)sub_38F870(v4, a1, a2) ) /*0x38f822*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x38f82e*/
    return v4; /*0x38f834*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x38f856*/
    return 0; /*0x38f859*/
  }
}

// [5/9] Address: 0x391790
// Method: GJPathPage::didPurchaseItem
__int64 __fastcall GJPathPage_didPurchaseItem(__int64 a1)
{
  return SetupEnterEffectPopup_init(a1 - 672);
}

// [6/9] Address: 0x392650
// Method: GJPathPage::unlockAnimationStep2
// Hidden C++ exception states: #wind=2
void __fastcall GJPathPage_unlockAnimationStep2(unsigned int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  void *v4; // r8
  __int64 v5; // r9
  cocos2d::CCParticleSystem *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rcx
  float v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+48h] [rbp-B8h] BYREF
  void *Block[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  unsigned __int64 v15; // [rsp+70h] [rbp-90h]
  unsigned int v16[66]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v17[40]; // [rsp+188h] [rbp+88h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x392683*/
  cocos2d::CCDirector::getWinSize(v2, v10); /*0x392691*/
  *(_OWORD *)Block = 0; /*0x39269a*/
  v14 = 0; /*0x39269f*/
  v15 = 0; /*0x3926a8*/
  v4 = (void *)sub_3C460(176); /*0x3926bb*/
  Block[0] = v4; /*0x3926be*/
  v14 = 170; /*0x3926c3*/
  v15 = 175; /*0x3926cc*/
  strcpy( /*0x3926df*/
    (char *)v4,
    "84a0.97a1a0.16a72a180a180a29a0a11a0a0a0a0a0a0a0a2a1a0a0a1a0a0a0a0a0a1a0a1a1a0a0a1a0a0.568627a0a0a0a1a0a0.8a0a0.2a0a1"
    "50a0a0a0a0a0a1a2a1a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0");
  if ( v14 ) /*0x392761*/
  {
    sub_6AE20(v16, v3, v4, v5); /*0x39276b*/
    KeyframeObject_setupSpline(Block, v16); /*0x39277a*/
    v6 = GameToolbox_particleFromStruct(v16, 0, 0); /*0x39278d*/
    sub_3C310(v17); /*0x392797*/
  }
  else
  {
    v6 = 0; /*0x392763*/
  }
  LOBYTE(v3) = 1; /*0x39279f*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v6 + 1544LL))(v6, v3); /*0x3927a4*/
  (*(void (__fastcall **)(unsigned int *, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v6, 11); /*0x3927b9*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v6 + 160LL))(v6); /*0x3927cd*/
  cocos2d::CCParticleSystem::resetSystem(v6); /*0x3927d6*/
  v7 = *(_QWORD *)v6; /*0x3927dc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, v10[0] * 0.5, v10[1] * 0.5); /*0x392800*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v7 + 184))(v6, v8); /*0x39280c*/
  v12 = *(_OWORD *)sub_38E9E0(v11, a1[172]); /*0x392825*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int128 *))(*(_QWORD *)v6 + 1352LL))(v6, &v12); /*0x392835*/
  v12 = *(_OWORD *)sub_38E8D0(v11, a1[172]); /*0x39284e*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int128 *))(*(_QWORD *)v6 + 1384LL))(v6, &v12); /*0x39285e*/
  if ( v15 > 0xF ) /*0x39286e*/
  {
    v9 = Block[0]; /*0x392873*/
    if ( v15 + 1 >= 0x1000 ) /*0x392882*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x392888*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x392897*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3928ac*/
    }
    j_j_free(v9); /*0x3928b3*/
  }
}

// [7/9] Address: 0x3931d0
// Method: GJPathPage::unlockAnimationFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJPathPage_unlockAnimationFinished(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct cocos2d::CCObject *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  cocos2d::CCTouchDispatcher *v7; // rax
  __int64 v8; // rdx
  _BYTE *v9; // rbx
  _BYTE *v10; // rbx
  void *v12; // [rsp+30h] [rbp+8h]

  *(_BYTE *)(a1 + 692) = 0; /*0x3931dd*/
  v2 = *(_DWORD *)(a1 + 688) + 29; /*0x3931ea*/
  v3 = qword_905FE0; /*0x3931ed*/
  if ( !qword_905FE0 ) /*0x3931f7*/
  {
    v12 = operator new(0x3E8u); /*0x393203*/
    qword_905FE0 = sub_2D2B40(v12); /*0x393211*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x393222*/
    v3 = qword_905FE0; /*0x393224*/
  }
  if ( (unsigned int)(v2 - 30) > 9 ) /*0x393233*/
    v2 = 0; /*0x393233*/
  *(_DWORD *)(v3 + 996) = v2; /*0x393236*/
  GJPathPage_onBack(a1); /*0x39323f*/
  *(_BYTE *)(*(_QWORD *)(a1 + 680) + 680LL) = 0; /*0x39324b*/
  v4 = *(struct cocos2d::CCObject **)(a1 + 680); /*0x393252*/
  v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x393259*/
  v7 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 144LL))(v6); /*0x39326c*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v7, v4); /*0x393274*/
  cocos2d::CCNode::stopAllActions(v4); /*0x39327d*/
  cocos2d::CCNode::unscheduleAllSelectors(v4); /*0x393286*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v4 + 992LL))(v4, 0); /*0x393294*/
  LOBYTE(v8) = 1; /*0x39329d*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 520LL))(v4, v8); /*0x3932a2*/
  v9 = (_BYTE *)sub_38ED60(); /*0x3932ad*/
  v9[596] = 1; /*0x3932b0*/
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 1064LL))(v9); /*0x3932c4*/
  v10 = GJPathPage_create(*(_DWORD *)(a1 + 688), (__int64)v9); /*0x3932d4*/
  v10[596] = 1; /*0x3932d7*/
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 1064LL))(v10); /*0x3932eb*/
  return sub_3928E0(v10); /*0x3932f0*/
}

// [8/9] Address: 0x393300
// Method: GJPathPage::onBack
void __fastcall GJPathPage_onBack(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int16 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+32h] [rbp+Ah]

  if ( !*(_BYTE *)(a1 + 692) ) /*0x393306*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x393316*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x393322*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, (struct cocos2d::CCObject *)a1); /*0x39332e*/
    cocos2d::CCNode::stopAllActions((cocos2d::CCNode *)a1); /*0x393337*/
    cocos2d::CCNode::unscheduleAllSelectors((cocos2d::CCNode *)a1); /*0x393340*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x39334e*/
    LOBYTE(v4) = 1; /*0x393357*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4); /*0x39335c*/
    v6 = -1; /*0x393373*/
    v5 = *(_QWORD *)(a1 + 680); /*0x393378*/
    v7 = -1; /*0x39337f*/
    (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(v5 + 672) + 320LL))(*(_QWORD *)(v5 + 672) + 320LL, &v6); /*0x393395*/
  }
}

// [9/9] Address: 0x3933a0
// Method: GJPathPage::keyBackClicked
void __fastcall GJPathPage_keyBackClicked(__int64 a1)
{
  GJPathPage_onBack(a1 - 336); /*0x3933a9*/
}

// Address: 0xcbb80
// Method: GJPathPage::unlockAnimationStep3
// Hidden C++ exception states: #wind=6
char __fastcall GJPathPage_unlockAnimationStep3(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  float v8; // xmm8_4
  float v9; // xmm7_4
  char *v10; // r15
  _OWORD *v11; // rax
  char *v12; // rdx
  __int64 v13; // r8
  char *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct cocos2d::CCLabelBMFont *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  float v24; // xmm11_4
  cocos2d::CCObject *v25; // rbx
  cocos2d::CCObject *v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  cocos2d::CCObject *v31; // rbx
  cocos2d::CCObject *v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  cocos2d::CCObject *v37; // rbx
  cocos2d::CCObject *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int128 *v43; // [rsp+50h] [rbp-B0h] BYREF
  void *v44; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  float v48[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int128 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v56[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v57[8]; // [rsp+F8h] [rbp-8h] BYREF
  int v58; // [rsp+100h] [rbp+0h]
  char v59; // [rsp+104h] [rbp+4h]
  int v60; // [rsp+108h] [rbp+8h]
  int v61; // [rsp+10Ch] [rbp+Ch]
  char v62; // [rsp+110h] [rbp+10h]
  int v63; // [rsp+114h] [rbp+14h]
  int v64; // [rsp+118h] [rbp+18h]
  char v65; // [rsp+12Dh] [rbp+2Dh]
  _BYTE v66[32]; // [rsp+138h] [rbp+38h] BYREF
  int v67; // [rsp+158h] [rbp+58h]
  _BYTE v68[32]; // [rsp+160h] [rbp+60h] BYREF

  *(_QWORD *)(a1 + 1008) = a2;
  result = sub_6060E0(a1, 0, 0, a4, 1130102784, 1, 0);
  if ( result )
  {
    *(_BYTE *)(a1 + 744) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v48);
    v8 = v48[0] * 0.5;
    v9 = v48[1] * 0.5;
    v45 = 0;
    *(_QWORD *)&v45 = sub_3C460(32);
    v46 = 19;
    v47 = 31;
    strcpy((char *)v45, "Auto-Backup Options");
    sub_606E80(a1, &v45);
    v52 = 0;
    v10 = (char *)sub_3C460(256);
    *(_QWORD *)&v52 = v10;
    v53 = 255;
    v54 = 255;
    strcpy(
      v10,
      "<cy>Max per level:</c> number of backups kept for each level. When the limit is reached, the oldest is deleted whe"
      "n a new backup is created. 0 = unlimited.\n"
      "\n"
      "<cg>Prune Now:</c> applies the current limit immediately.\n"
      "<cr>Delete All:</c> deletes all backups.");
    v43 = &v45;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v11 = (_OWORD *)sub_3C460(256);
    *(_QWORD *)&v45 = v11;
    v46 = 255;
    v47 = 255;
    v12 = v10;
    v13 = 2;
    do
    {
      *v11 = *(_OWORD *)v12;
      v11[1] = *((_OWORD *)v12 + 1);
      v11[2] = *((_OWORD *)v12 + 2);
      v11[3] = *((_OWORD *)v12 + 3);
      v11[4] = *((_OWORD *)v12 + 4);
      v11[5] = *((_OWORD *)v12 + 5);
      v11[6] = *((_OWORD *)v12 + 6);
      v11 += 8;
      *(v11 - 1) = *((_OWORD *)v12 + 7);
      v12 += 128;
      --v13;
    }
    while ( v13 );
    v49 = 0;
    v50 = 0;
    v51 = 0;
    *(_QWORD *)&v49 = sub_3C460(32);
    v50 = 19;
    v51 = 31;
    strcpy((char *)v49, "Auto-Backup Options");
    v14 = InfoAlertButton_create((__int64)&v49, (__int64)&v45);
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v14);
    v15 = *(_QWORD *)v14;
    v16 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, (float)(v8 + 170.0) - 18.0, (float)(v9 + 110.0) - 19.0);
    cocos2d::CCNode::convertToNodeSpace(v16, &v43, v17);
    (*(void (__fastcall **)(char *, __int64))(v15 + 184))(v14, v18);
    sub_9ACF0(&v55);
    v55 = -1;
    sub_3F5A0(v56, "Max per level (0 = unlimited):", 0x1Eu);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, v8, v9 + 40.0);
    cocos2d::CCPoint::operator=(v57, v19);
    v58 = 1058642330;
    v59 = 1;
    v62 = 1;
    v65 = 1;
    v67 = 1057803469;
    v60 = 3;
    v61 = 4;
    v63 = 0;
    v64 = 1148846080;
    sub_608A30(a1, &v55);
    LODWORD(v43) = -1;
    *(_BYTE *)sub_16C910(a1 + 872, &v43) = 1;
    LODWORD(v43) = -1;
    *(_BYTE *)sub_16C910(a1 + 856, &v43) = 1;
    v20 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, "chatFont.fnt");
    *(_QWORD *)(a1 + 1016) = v20;
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v20 + 160LL))(v20);
    v21 = **(_QWORD **)(a1 + 1016);
    v22 = *(_QWORD *)(a1 + 1016);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, v8, v9 - 2.0);
    (*(void (__fastcall **)(__int64, __int64))(v21 + 184))(v22, v23);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 1016));
    sub_CC570(a1);
    v24 = v9 - 40.0;
    v44 = operator new(0x2C8u);
    v25 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v44);
    if ( v25 )
    {
      if ( ButtonSprite_init(
             (__int64)v25,
             (__int64)"Prune Now",
             64,
             0,
             1055286886,
             1,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_05.png",
             1103101952) )
      {
        cocos2d::CCObject::autorelease(v25);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v25 + 8LL))(v25, 1);
        LODWORD(v25) = 0;
      }
    }
    v26 = CCMenuItemSpriteExtra_create((int)v25, 0, a1, (__int64)ProfilePage_onInfo);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v26);
    v27 = *(_QWORD *)v26;
    v28 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, v8 - 45.0, v24);
    cocos2d::CCNode::convertToNodeSpace(v28, &v43, v29);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v27 + 184))(v26, v30);
    v44 = operator new(0x2C8u);
    v31 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v44);
    if ( v31 )
    {
      if ( ButtonSprite_init(
             (__int64)v31,
             (__int64)"Delete All",
             64,
             0,
             1055286886,
             1,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_06.png",
             1103101952) )
      {
        cocos2d::CCObject::autorelease(v31);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v31 + 8LL))(v31, 1);
        LODWORD(v31) = 0;
      }
    }
    v32 = CCMenuItemSpriteExtra_create((int)v31, 0, a1, (__int64)GJFriendRequest_create);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v32);
    v33 = *(_QWORD *)v32;
    v34 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, v8 + 45.0, v24);
    cocos2d::CCNode::convertToNodeSpace(v34, &v43, v35);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v33 + 184))(v32, v36);
    v44 = operator new(0x2C8u);
    v37 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v44);
    if ( v37 )
    {
      if ( ButtonSprite_init(
             (__int64)v37,
             (__int64)"OK",
             40,
             0,
             1061997773,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_01.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v37);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v37 + 8LL))(v37, 1);
        LODWORD(v37) = 0;
      }
    }
    v38 = CCMenuItemSpriteExtra_create((int)v37, 0, a1, (__int64)sub_9C4B8);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v38);
    v39 = *(_QWORD *)v38;
    v40 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, v8, (float)(v9 - 110.0) + 25.0);
    cocos2d::CCNode::convertToNodeSpace(v40, &v43, v41);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v39 + 184))(v38, v42);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1136LL))(a1);
    *(_BYTE *)(a1 + 744) = 0;
    sub_3C310(v68);
    sub_3C310(v66);
    sub_3C310(v56);
    j_j_free(v10);
    return 1;
  }
  return result;
}
