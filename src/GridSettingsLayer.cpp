#include <Geode/binding/GridSettingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x2c5330
// Method: GridSettingsLayer::~GridSettingsLayer
cocos2d::CCNode *__fastcall GridSettingsLayer__dtor_GridSettingsLayer(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GridSettingsLayer::`vftable'; /*0x2c5343*/
  *((_QWORD *)Block + 40) = &GridSettingsLayer::`vftable'; /*0x2c5350*/
  *((_QWORD *)Block + 41) = &GridSettingsLayer::`vftable'; /*0x2c535e*/
  *((_QWORD *)Block + 42) = &GridSettingsLayer::`vftable'; /*0x2c536c*/
  *((_QWORD *)Block + 43) = &GridSettingsLayer::`vftable'; /*0x2c537a*/
  *((_QWORD *)Block + 44) = &GridSettingsLayer::`vftable'; /*0x2c5388*/
  *((_QWORD *)Block + 51) = &GridSettingsLayer::`vftable'; /*0x2c5396*/
  *((_QWORD *)Block + 54) = &GridSettingsLayer::`vftable'; /*0x2c53a4*/
  *((_QWORD *)Block + 68) = &GridSettingsLayer::`vftable'; /*0x2c53b2*/
  *((_QWORD *)Block + 83) = &GridSettingsLayer::`vftable'; /*0x2c53c0*/
  *((_QWORD *)Block + 84) = &GridSettingsLayer::`vftable'; /*0x2c53ce*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x2c53d5*/
  if ( (a2 & 1) != 0 ) /*0x2c53dd*/
    j_j_free(Block); /*0x2c53e7*/
  return Block; /*0x2c53ec*/
}

// [3/4] Address: 0x2c5b30
// Method: GridSettingsLayer::getValue
double __fastcall GridSettingsLayer_getValue(__int64 a1, int a2)
{
  __int64 v2; // rax
  double result; // xmm0_8
  __int64 v4; // rax
  double v5; // xmm1_8

  if ( a2 == -2 ) /*0x2c5b33*/
  {
    v4 = *(_QWORD *)(a1 + 1000); /*0x2c5b60*/
    if ( v4 ) /*0x2c5b6a*/
    {
      *(_QWORD *)&v5 = *(unsigned int *)(v4 + 700); /*0x2c5b75*/
      if ( *(float *)&v5 <= 0.0 ) /*0x2c5b83*/
        *(_QWORD *)&v5 = 1106247680; /*0x2c5b85*/
      return v5; /*0x2c5b8d*/
    }
    else
    {
      *(_QWORD *)&result = 1106247680; /*0x2c5b6c*/
    }
  }
  else if ( a2 == -1 ) /*0x2c5b38*/
  {
    v2 = *(_QWORD *)(a1 + 1000); /*0x2c5b3e*/
    if ( v2 && *(_BYTE *)(v2 + 704) ) /*0x2c5b4a*/
      *(_QWORD *)&result = 1065353216; /*0x2c5b53*/
    else
      return 0.0; /*0x2c5b5c*/
  }
  else
  {
    return SetupTriggerPopup_getValue(a1, a2); /*0x2c5b38*/
  }
  return result; /*0x2c5b5b*/
}

// [4/4] Address: 0x2c5ba0
// Method: GridSettingsLayer::valueDidChange
__int64 __fastcall GridSettingsLayer_valueDidChange(__int64 a1, __int64 a2, float a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( (_DWORD)a2 == -2 ) /*0x2c5ba3*/
  {
    if ( *(_QWORD *)(a1 + 1000) ) /*0x2c5bce*/
      return SongOptionsLayer_onPlayback(); /*0x2c5bf3*/
  }
  else if ( (_DWORD)a2 == -1 ) /*0x2c5ba8*/
  {
    v3 = *(_QWORD *)(a1 + 1000); /*0x2c5baa*/
    if ( v3 ) /*0x2c5bb4*/
    {
      if ( a3 == 0.0 ) /*0x2c5bbe*/
      {
        return sub_1AB980(v3, 0); /*0x2c5bc2*/
      }
      else
      {
        LOBYTE(a2) = 1; /*0x2c5bc7*/
        return sub_1AB980(v3, a2); /*0x2c5bc9*/
      }
    }
  }
  return result; /*0x2c5bf8*/
}

// Address: 0x2c5400
// Method: GridSettingsLayer::onBuildWindowContent
// Hidden C++ exception states: #wind=2
double __fastcall GridSettingsLayer_onBuildWindowContent(__int64 a1)
{
  __int64 v2; // rax
  char *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  float v8; // xmm9_4
  float v9; // xmm7_4
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  const struct cocos2d::CCPoint *v17; // rax
  __int64 v18; // rax
  cocos2d::CCDictionary *v19; // rcx
  struct cocos2d::CCObject *v20; // rax
  cocos2d::CCDictionary *v21; // rcx
  struct cocos2d::CCObject *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  struct cocos2d::CCSprite *v25; // rax
  cocos2d::CCObject *v26; // rbx
  __int64 v27; // rax
  struct cocos2d::CCSprite *v28; // rax
  cocos2d::CCObject *v29; // rbx
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rax
  cocos2d::CCObject *v32; // rbx
  __int64 v33; // rax
  __int128 *v35; // [rsp+40h] [rbp-C0h] BYREF
  float v36[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  float v40; // [rsp+70h] [rbp-90h] BYREF
  float v41; // [rsp+74h] [rbp-8Ch]
  _QWORD v42[5]; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v45[8]; // [rsp+C8h] [rbp-38h] BYREF
  int v46; // [rsp+D0h] [rbp-30h]
  char v47; // [rsp+D4h] [rbp-2Ch]
  int v48; // [rsp+D8h] [rbp-28h]
  int v49; // [rsp+DCh] [rbp-24h]
  char v50; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+E4h] [rbp-1Ch]
  int v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+F8h] [rbp-8h]
  char v54; // [rsp+FDh] [rbp-3h]
  _BYTE v55[32]; // [rsp+108h] [rbp+8h] BYREF
  int v56; // [rsp+128h] [rbp+28h]
  _BYTE v57[32]; // [rsp+130h] [rbp+30h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1);
  cocos2d::CCDirector::getWinSize(v2, v36);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v40, v36[0] * 0.5, v36[1] * 0.5);
  *((_QWORD *)&v37 + 1) = 101;
  v38 = 9;
  v39 = 15;
  *(_QWORD *)&v37 = 0x7A69532064697247LL;
  sub_606E80(a1, &v37);
  v35 = &v37;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  *(_QWORD *)&v37 = sub_3C460(160);
  v38 = 153;
  v39 = 159;
  strcpy(
    (char *)v37,
    "<cg>Enable</c> to override the editor grid with a custom size.\n"
    "<cl>Shift+G</c> toggles it. <cl>Ctrl+G</c> cycles the preset sizes (7.5, 15, 30, 60, 120).");
  v42[1] = 101;
  v42[2] = 9;
  v42[3] = 15;
  v42[0] = 0x7A69532064697247LL;
  v3 = InfoAlertButton_create((__int64)v42, (__int64)&v37);
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v3);
  v4 = *(_QWORD *)v3;
  v5 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v35,
    (float)((float)(*(float *)(a1 + 1040) * 0.5) + v40) - 13.0,
    (float)((float)(*(float *)(a1 + 1044) * 0.5) + v41) - 13.0);
  cocos2d::CCNode::convertToNodeSpace(v5, v36, v6);
  (*(void (__fastcall **)(char *, __int64))(v4 + 184))(v3, v7);
  v8 = v40;
  v9 = v41 - 15.0;
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v37, 0.0, 0.0, 40.0, 40.0);
  v11 = cocos2d::extension::CCScale9Sprite::create("square02_small.png", v10);
  v12 = *(_QWORD *)v11;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v35, *(float *)(a1 + 732) - 30.0, 64.0);
  (*(void (__fastcall **)(__int64, __int64))(v12 + 312))(v11, v13);
  v14 = *(_QWORD *)v11;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, v8, v9 + 5.0);
  (*(void (__fastcall **)(__int64, __int64))(v14 + 184))(v11, v15);
  (**(void (__fastcall ***)(__int64, void *))(v11 + 320))(v11 + 320, &unk_6FE434);
  LOBYTE(v16) = 50;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v11 + 320) + 40LL))(v11 + 320, v16);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v11,
    0xFFFFFFFFLL);
  v35 = &v37;
  v38 = 7;
  v39 = 15;
  v37 = 0x64656C62616E45uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v36, v8 - 100.0, v9);
  SetupTriggerPopup_createToggleValueControl(a1, -1, (__int64)&v37, v17, 1, 0, 0, 1.0);
  sub_9ACF0(&v43);
  v43 = -2;
  sub_3F5A0(v44, "Size:", 5u);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, v8 + 15.0, v9 + 5.0);
  cocos2d::CCPoint::operator=(v45, v18);
  v46 = 1058642330;
  v47 = 0;
  v50 = 1;
  v54 = 1;
  v56 = 1057803469;
  v48 = 1;
  v53 = 1;
  v49 = 5;
  v51 = 1084227584;
  v52 = 1123024896;
  sub_608A30(a1, &v43);
  v36[0] = NAN;
  *(_BYTE *)sub_16C910(a1 + 872, v36) = 1;
  v19 = *(cocos2d::CCDictionary **)(a1 + 768);
  if ( v19 )
  {
    v20 = cocos2d::CCDictionary::objectForKey(v19, -2);
    if ( v20 )
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 51) + 456LL) + 416LL) = 999192629;
  }
  v21 = *(cocos2d::CCDictionary **)(a1 + 760);
  if ( v21 )
  {
    v22 = cocos2d::CCDictionary::objectForKey(v21, -2);
    if ( v22 )
    {
      v23 = *(_QWORD *)(a1 + 552);
      v24 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v22 + 200LL))(v22);
      cocos2d::CCNode::convertToNodeSpace(v23, v36, v24);
      v25 = cocos2d::CCSprite::createWithSpriteFrameName("edit_leftBtn2_001.png");
      LODWORD(v23) = (_DWORD)v25;
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v25 + 160LL))(v25);
      v26 = CCMenuItemSpriteExtra_create(v23, 0, a1, (__int64)sub_2C5CC0);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v26);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37, -64.800011, 0.0);
      cocos2d::CCPoint::operator+(v36, &v35, v27);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int128 **))(*(_QWORD *)v26 + 184LL))(v26, &v35);
      *((_DWORD *)v26 + 93) = 0x40000000;
      v28 = cocos2d::CCSprite::createWithSpriteFrameName("edit_rightBtn2_001.png");
      LODWORD(v26) = (_DWORD)v28;
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v28 + 160LL))(v28);
      v29 = CCMenuItemSpriteExtra_create((int)v26, 0, a1, (__int64)sub_2C5C50);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v29);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37, 64.800011, 0.0);
      cocos2d::CCPoint::operator+(v36, &v35, v30);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int128 **))(*(_QWORD *)v29 + 184LL))(v29, &v35);
      *((_DWORD *)v29 + 93) = 0x40000000;
      v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_trashBtn_001.png");
      LODWORD(v29) = (_DWORD)v31;
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 160LL))(v31);
      v32 = CCMenuItemSpriteExtra_create((int)v29, 0, a1, (__int64)sub_2C5C00);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v32);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37, 96.800011, 0.0);
      cocos2d::CCPoint::operator+(v36, &v35, v33);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int128 **))(*(_QWORD *)v32 + 184LL))(v32, &v35);
    }
  }
  sub_3C310(v57);
  sub_3C310(v55);
  return sub_3C310(v44);
}
