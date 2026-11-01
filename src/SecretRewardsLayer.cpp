#include <Geode/binding/SecretRewardsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/17] Address: 0x288360
// Method: SecretRewardsLayer::onSelectItem
// Hidden C++ exception states: #wind=9
double __fastcall SecretRewardsLayer_onSelectItem(__int64 a1, const char *a2)
{
  const char *v2; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  void **v7; // rcx
  cocos2d::CCObject *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void **v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rdi
  void **v23; // rdx
  __int128 *v24; // r15
  char *v25; // rbx
  __int64 v26; // rax
  void **v27; // r9
  void *v28; // rcx
  void *v29; // rcx
  const char *v30; // rcx
  __int64 v31; // rax
  struct cocos2d::CCSprite *v32; // rax
  cocos2d::CCObject *v33; // rcx
  struct cocos2d::CCSprite *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v3... [74378 chars total]

// [4/17] Address: 0x565a80
// Method: SecretRewardsLayer::scrollLayerMoved
void __fastcall SecretRewardsLayer_scrollLayerMoved(__int64 a1, float *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // rcx
  int v7; // eax
  int v8; // ebx
  float i; // xmm6_4
  __int64 v10; // r8
  float v11; // xmm0_4
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r11
  int v18; // ecx
  int v19; // ecx
  int v20; // r9d
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // al
  float v23; // xmm0_4
  float v24; // xmm2_4
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  void (__fastcall ***v28)(_QWORD, __int16 *, __int64); // rcx
  bool v29; // si
  __int16 v30; // [rsp+60h] [rbp+8h]
  __int16 v31; // [rsp+70h] [rbp+18h] BYREF
  char v32; // [rsp+72h] [rbp+1Ah]
  float v33; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 168) ) /*0x565a94*/
    return; /*0x565a94*/
  v4 = cocos2d::CCDirector::sharedDirector(a1); /*0x565aa9*/
  cocos2d::CCDirector::getWinSize(v4, &v33); /*0x565ab7*/
  v5 = *(_QWORD *)(a1 + 128); /*0x565abd*/
  if ( *(_BYTE *)(v5 + 456) ) /*0x565ac4*/
    v6 = *(cocos2d::CCArray **)(v5 + 448); /*0x565acd*/
  else
    v6 = *(cocos2d::CCArray **)(v5 + 480); /*0x565ad6*/
  v7 = cocos2d::CCArray::count(v6); /*0x565add*/
  v8 = v7; /*0x565af1*/
  for ( i = (float)-*a2 / v33; i < 0.0; i = i + (float)v7 ) /*0x565afc*/
    ; /*0x565b05*/
  v11 = floorf(i); /*0x565b11*/
  v12 = (int)v11 % v8; /*0x565b22*/
  v13 = v12 + 1; /*0x565b29*/
  if ( v12 + 1 == v8 ) /*0x565b2e*/
    v13 = 0; /*0x565b2e*/
  if ( !v12 ) /*0x565b37*/
    goto LABEL_16; /*0x565b37*/
  v14 = v12 - 1; /*0x565b39*/
  if ( !v14 ) /*0x565b3c*/
  {
    v16 = 50; /*0x565b57*/
    v10 = 50; /*0x565b59*/
    v17 = 50; /*0x565b5d*/
    goto LABEL_18; /*0x565b61*/
  }
  v15 = v14 - 1; /*0x565b3e*/
  if ( !v15 ) /*0x565b41*/
  {
    v17 = 120; /*0x565b52*/
LABEL_17:
    v16 = 70; /*0x565b66*/
    LOBYTE(v10) = 0; /*0x565b68*/
    goto LABEL_18; /*0x565b68*/
  }
  if ( v15 != 1 ) /*0x565b46*/
  {
LABEL_16:
    v17 = 75; /*0x565b63*/
    goto LABEL_17; /*0x565b63*/
  }
  v16 = 36; /*0x565b48*/
  LOBYTE(v10) = 27; /*0x565b4a*/
  v17 = 40; /*0x565b4d*/
LABEL_18:
  if ( !v13 ) /*0x565b6d*/
    goto LABEL_25; /*0x565b6d*/
  v18 = v13 - 1; /*0x565b6f*/
  if ( !v18 ) /*0x565b72*/
  {
    LOBYTE(v20) = 50; /*0x565b8d*/
    v21 = 50; /*0x565b90*/
    v22 = 50; /*0x565b94*/
    goto LABEL_27; /*0x565b98*/
  }
  v19 = v18 - 1; /*0x565b74*/
  if ( !v19 ) /*0x565b77*/
  {
    LOBYTE(v20) = 120; /*0x565b88*/
LABEL_26:
    v21 = 0; /*0x565b9d*/
    v22 = 70; /*0x565ba0*/
    goto LABEL_27; /*0x565ba0*/
  }
  if ( v19 != 1 ) /*0x565b7c*/
  {
LABEL_25:
    LOBYTE(v20) = 75; /*0x565b9a*/
    goto LABEL_26; /*0x565b9a*/
  }
  LOBYTE(v20) = 40; /*0x565b7e*/
  v21 = 27; /*0x565b81*/
  v22 = 36; /*0x565b84*/
LABEL_27:
  v23 = fminf(1.0, (float)((float)(i - (float)(int)v11) / 0.66666669) - 0.2); /*0x565ba2*/
  if ( v23 < 0.0 ) /*0x565bc4*/
    v23 = 0.0; /*0x565bc6*/
  v24 = fminf(1.0, v23); /*0x565bcc*/
  if ( v24 <= 0.0 ) /*0x565bd3*/
  {
    LOBYTE(v30) = v16; /*0x565c70*/
    LOBYTE(v20) = v17; /*0x565c74*/
    HIBYTE(v30) = v10; /*0x565c78*/
  }
  else if ( v24 == 1.0 ) /*0x565be9*/
  {
    LOBYTE(v30) = v22; /*0x565beb*/
    HIBYTE(v30) = v21; /*0x565bef*/
  }
  else
  {
    v25 = v16; /*0x565bfc*/
    v26 = v22 - v16; /*0x565bff*/
    v27 = (unsigned __int8)v10; /*0x565c01*/
    v10 = v17; /*0x565c05*/
    LOBYTE(v30) = (int)(float)((float)((float)v26 * v24) + (float)v25); /*0x565c2a*/
    HIBYTE(v30) = (int)(float)((float)((float)(v21 - v27) * v24) + (float)v27); /*0x565c4f*/
    v20 = (int)(float)((float)((float)((unsigned __int8)v20 - v17) * v24) + (float)v17); /*0x565c69*/
  }
  v28 = (void (__fastcall ***)(_QWORD, __int16 *, __int64))(*(_QWORD *)(a1 + 144) + 320LL); /*0x565c8e*/
  v31 = v30; /*0x565c95*/
  v32 = v20; /*0x565c9a*/
  (**v28)(v28, &v31, v10); /*0x565ca2*/
  v29 = *(_BYTE *)(a1 + 168) && (int)roundf(i) % v8 == 3; /*0x565cc6*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), !v29); /*0x565cdf*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 72) + 336LL))(*(_QWORD *)(a1 + 72), !v29); /*0x565cef*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 64) + 336LL))(*(_QWORD *)(a1 + 64), v29); /*0x565d00*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 80) + 336LL))(*(_QWORD *)(a1 + 80), v29); /*0x565d11*/
}

// [5/17] Address: 0x565fc0
// Method: SecretRewardsLayer::createSecondaryLayer
__int64 __fastcall SecretRewardsLayer_createSecondaryLayer(__int64 *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  void (__fastcall **v14)(__int64, __int64); // rbx
  __int64 v15; // rax
  int i; // esi
  struct cocos2d::CCSprite *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  struct cocos2d::CCLabelBMFont *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  int ChestItems; // eax
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  cocos2d::CCDirector *v33; // rax
  float v34; // xmm0_4
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  cocos2d::CCDirector *v38; // rax
  float ScreenTop; // xmm6_4
  __int64 v40; // rcx
  cocos2d::CCDirector *v41; // rax
  float ScreenRight; // xmm0_4
  __int64 v43; // rax
  _BYTE v45[16]; // [rsp+30h] [rbp-68h] BYREF
  float v46; // [rsp+A0h] [rbp+8h] BYREF
  float v47; // [rsp+A4h] [rbp+Ch]
  char v48; // [rsp+B0h] [rbp+18h] BYREF
  float v49; // [rsp+B4h] [rbp+1Ch]
  char v50; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1[54]; /*0x565fd8*/
  if ( v3 ) /*0x565ff2*/
  {
    a1[69] = 0; /*0x565ff4*/
    a1[56] = 0; /*0x565ffb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 512LL))(v3); /*0x566005*/
    a1[54] = 0; /*0x56600b*/
  }
  v5 = cocos2d::CCDirector::sharedDirector(v3); /*0x566012*/
  cocos2d::CCDirector::getWinSize(v5, &v46); /*0x566023*/
  v6 = cocos2d::CCLayer::create(); /*0x566029*/
  v7 = *a1; /*0x56602f*/
  a1[54] = v6; /*0x566035*/
  (*(void (__fastcall **)(__int64 *, __int64))(v7 + 464))(a1, v6); /*0x566046*/
  v8 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v45, 0.0, 0.0, 80.0, 80.0); /*0x566062*/
  v9 = cocos2d::extension::CCScale9Sprite::create("GJ_square05.png", v8); /*0x566072*/
  LOBYTE(v10) = 75; /*0x566078*/
  v11 = (_QWORD *)v9; /*0x56607a*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v9 + 320) + 40LL))(v9 + 320, v10); /*0x56608f*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v48, 370.0, 255.0); /*0x5660aa*/
  (*(void (__fastcall **)(_QWORD *, char *))(*v11 + 312LL))(v11, &v48); /*0x5660c5*/
  (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1[54] + 456LL))(a1[54], v11, 0xFFFFFFFFLL); /*0x5660db*/
  v12 = *v11; /*0x566103*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v46 * 0.5, v47 * 0.5); /*0x56610e*/
  (*(void (__fastcall **)(_QWORD *, __int64))(v12 + 184))(v11, v13); /*0x56611a*/
  v14 = (void (__fastcall **)(__int64, __int64))v11[40]; /*0x566127*/
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1[70] + 320) + 8LL))(a1[70] + 320); /*0x566138*/
  (*v14)((__int64)(v11 + 40), v15); /*0x566145*/
  for ( i = 0; i < 2; ++i ) /*0x56614f*/
  {
    v17 = cocos2d::CCSprite::createWithSpriteFrameName("chain_01_001.png"); /*0x56617a*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[54] + 456LL))( /*0x56618a*/
      a1[54],
      v17,
      0xFFFFFFFFLL);
    v18 = *(_QWORD *)v17; /*0x56618d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, 0.5, 0.0); /*0x56619e*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v18 + 288))(v17, v19); /*0x5661aa*/
    v20 = *(_QWORD *)v17; /*0x5661c7*/
    cocos2d::CCPoint::CCPoint( /*0x5661ff*/
      (cocos2d::CCPoint *)v45,
      (float)((float)((float)i * 100.0) + (float)((float)i * 100.0)) + (float)((float)(v46 * 0.5) - 100.0),
      (float)((float)(v49 * 0.5) + (float)(v47 * 0.5)) - 2.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v20 + 184))(v17, v21); /*0x56620b*/
    (**((void (__fastcall ***)(__int64, void *))v17 + 40))((__int64)v17 + 320, &unk_6FF614); /*0x566226*/
    LOBYTE(v22) = 75; /*0x566236*/
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v17 + 40) + 40LL))((__int64)v17 + 320, v22); /*0x566238*/
  }
  v23 = cocos2d::CCLabelBMFont::create(" ", "goldFont.fnt"); /*0x566254*/
  v24 = a1[54]; /*0x56625a*/
  a1[56] = (__int64)v23; /*0x566261*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v24 + 464LL))(v24, v23); /*0x566275*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[56] + 160LL))(a1[56]); /*0x56628a*/
  v25 = (__int64 *)a1[56]; /*0x5662b3*/
  v26 = *v25; /*0x5662c2*/
  cocos2d::CCPoint::CCPoint( /*0x5662d5*/
    (cocos2d::CCPoint *)&v50,
    v46 * 0.5,
    (float)((float)(v49 * 0.5) + (float)(v47 * 0.5)) + 17.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v26 + 184))(v25, v27); /*0x5662e1*/
  SecretRewardsLayer_updateUnlockedLabel(a1); /*0x5662ea*/
  ChestItems = SecretRewardsLayer_generateChestItems(a1, (unsigned int)a2); /*0x5662fa*/
  v30 = sub_3F960(ChestItems, v29, a2 <= 5, 0, 0); /*0x56630e*/
  v31 = a1[54]; /*0x566313*/
  a1[69] = v30; /*0x56631a*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 464LL))(v31, v30); /*0x56632e*/
  v33 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v32); /*0x566331*/
  v34 = cocos2d::CCDirector::getScreenBottom(v33) + 10.0; /*0x566351*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v46 * 0.5, v34); /*0x566360*/
  v35 = a1[69]; /*0x566366*/
  cocos2d::CCPoint::operator=(v35 + 572, v36); /*0x566377*/
  sub_40290(v35); /*0x566383*/
  *(_DWORD *)(a1[69] + 540) = 1063675494; /*0x56638f*/
  *(_BYTE *)(a1[69] + 608) = 1; /*0x5663a0*/
  v38 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v37); /*0x5663a7*/
  ScreenTop = cocos2d::CCDirector::getScreenTop(v38); /*0x5663b6*/
  v41 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v40); /*0x5663b9*/
  ScreenRight = cocos2d::CCDirector::getScreenRight(v41); /*0x5663c2*/
  v43 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v45, 0.0, 0.0, ScreenRight, ScreenTop); /*0x5663dc*/
  return cocos2d::CCRect::operator=(a1[69] + 612, v43); /*0x5663f9*/
}

// [7/17] Address: 0x5673e0
// Method: SecretRewardsLayer::onShop
// Hidden C++ exception states: #wind=4
char __fastcall SecretRewardsLayer_onShop(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct cocos2d::CCScene *v12; // rax
  struct cocos2d::CCScene *v13; // rbx
  __int64 v14; // rcx
  cocos2d::CCDirector *v15; // rax
  void *v17; // [rsp+38h] [rbp+10h]
  void *v18; // [rsp+38h] [rbp+10h]
  void *v19; // [rsp+38h] [rbp+10h]
  void *v20; // [rsp+38h] [rbp+10h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5673f3*/
  v4 = v3; /*0x5673f6*/
  v5 = v3 - 1; /*0x5673fb*/
  if ( v3 == 1 ) /*0x5673ff*/
  {
    v11 = qword_905FD0; /*0x567547*/
    if ( !qword_905FD0 ) /*0x567551*/
    {
      v20 = operator new(0x6E8u); /*0x56755d*/
      qword_905FD0 = sub_2723A0(v20); /*0x56756b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x56757c*/
      v11 = qword_905FD0; /*0x56757e*/
    }
    if ( !(unsigned __int8)sub_27B350(v11, "11", v5) ) /*0x56758c*/
    {
      LOBYTE(v3) = SecretRewardsLayer_showDialog01(a1); /*0x5675a2*/
      return v3; /*0x5675a2*/
    }
  }
  else
  {
    v6 = v3 - 2; /*0x567405*/
    if ( v3 == 2 ) /*0x567409*/
    {
      v10 = qword_905FD0; /*0x5674e7*/
      if ( !qword_905FD0 ) /*0x5674f1*/
      {
        v19 = operator new(0x6E8u); /*0x5674fd*/
        qword_905FD0 = sub_2723A0(v19); /*0x56750b*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x56751c*/
        v10 = qword_905FD0; /*0x56751e*/
      }
      if ( !(unsigned __int8)sub_27B350(v10, &word_732CCC, v6) ) /*0x56752c*/
      {
        LOBYTE(v3) = sub_56A4E0(a1); /*0x567542*/
        return v3; /*0x567542*/
      }
    }
    else
    {
      v7 = v3 - 3; /*0x56740f*/
      if ( v3 == 3 ) /*0x567413*/
      {
        v9 = qword_905FD0; /*0x567483*/
        if ( !qword_905FD0 ) /*0x56748d*/
        {
          v18 = operator new(0x6E8u); /*0x567499*/
          qword_905FD0 = sub_2723A0(v18); /*0x5674a7*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5674b8*/
          v9 = qword_905FD0; /*0x5674ba*/
        }
        if ( !(unsigned __int8)sub_27B350(v9, &word_755540, v7) ) /*0x5674c8*/
        {
          LOBYTE(v3) = SecretRewardsLayer_showDialogMechanic(a1); /*0x5674e2*/
          return v3; /*0x5674e2*/
        }
      }
      else
      {
        if ( v3 != 4 ) /*0x567419*/
          return v3; /*0x567419*/
        v8 = qword_905FD0; /*0x56741f*/
        if ( !qword_905FD0 ) /*0x567429*/
        {
          v17 = operator new(0x6E8u); /*0x567435*/
          qword_905FD0 = sub_2723A0(v17); /*0x567443*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x567454*/
          v8 = qword_905FD0; /*0x567456*/
        }
        if ( !(unsigned __int8)sub_27B350(v8, &word_755588, v7) ) /*0x567464*/
        {
          LOBYTE(v3) = sub_56C9F0(a1); /*0x56747e*/
          return v3; /*0x56747e*/
        }
      }
    }
  }
  v12 = (struct cocos2d::CCScene *)GJShopLayer_scene(v4); /*0x5675a9*/
  v13 = cocos2d::CCTransitionMoveInT::create(0.5, v12); /*0x5675bf*/
  v15 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v14); /*0x5675c2*/
  LOBYTE(v3) = cocos2d::CCDirector::replaceScene(v15, v13); /*0x5675ce*/
  if ( (_BYTE)v3 ) /*0x5675d6*/
    LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x5675e0*/
  return v3; /*0x567474*/
}

// [8/17] Address: 0x567600
// Method: SecretRewardsLayer::dialogClosed
// Hidden C++ exception states: #wind=4
char __fastcall SecretRewardsLayer_dialogClosed(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  struct cocos2d::CCScene *v14; // rax
  struct cocos2d::CCScene *v15; // rbx
  __int64 v16; // rcx
  cocos2d::CCDirector *v17; // rax
  void *v19; // [rsp+38h] [rbp+10h]
  void *v20; // [rsp+38h] [rbp+10h]
  void *v21; // [rsp+38h] [rbp+10h]
  void *v22; // [rsp+38h] [rbp+10h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x56761c*/
  {
    v5 = qword_905FD0; /*0x56761e*/
    if ( !qword_905FD0 ) /*0x567628*/
    {
      v19 = operator new(0x6E8u); /*0x567634*/
      qword_905FD0 = sub_2723A0(v19); /*0x567642*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x567653*/
      v5 = qword_905FD0; /*0x567655*/
    }
    LOBYTE(v4) = 1; /*0x56765c*/
    sub_27B1C0(v5, &word_732CCC, v4); /*0x567666*/
    v6 = 2; /*0x56766b*/
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x567681*/
  {
    v8 = qword_905FD0; /*0x567683*/
    if ( !qword_905FD0 ) /*0x56768d*/
    {
      v20 = operator new(0x6E8u); /*0x567699*/
      qword_905FD0 = sub_2723A0(v20); /*0x5676a7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5676b8*/
      v8 = qword_905FD0; /*0x5676ba*/
    }
    LOBYTE(v7) = 1; /*0x5676c1*/
    sub_27B1C0(v8, "11", v7); /*0x5676cb*/
    v6 = 1; /*0x5676d0*/
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0x5676e6*/
  {
    v10 = qword_905FD0; /*0x5676e8*/
    if ( !qword_905FD0 ) /*0x5676f2*/
    {
      v21 = operator new(0x6E8u); /*0x5676fe*/
      qword_905FD0 = sub_2723A0(v21); /*0x56770c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x56771d*/
      v10 = qword_905FD0; /*0x56771f*/
    }
    LOBYTE(v9) = 1; /*0x567726*/
    sub_27B1C0(v10, &word_755588, v9); /*0x567730*/
    v6 = 4; /*0x567735*/
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x567742*/
    if ( v11 != 4 ) /*0x567748*/
      return v11; /*0x567748*/
    v13 = qword_905FD0; /*0x56774e*/
    if ( !qword_905FD0 ) /*0x567758*/
    {
      v22 = operator new(0x6E8u); /*0x567764*/
      qword_905FD0 = sub_2723A0(v22); /*0x567772*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x567783*/
      v13 = qword_905FD0; /*0x567785*/
    }
    LOBYTE(v12) = 1; /*0x56778c*/
    sub_27B1C0(v13, &word_755540, v12); /*0x567796*/
    v6 = 3; /*0x56779b*/
  }
  v14 = (struct cocos2d::CCScene *)GJShopLayer_scene(v6); /*0x5677a0*/
  v15 = cocos2d::CCTransitionMoveInT::create(0.5, v14); /*0x5677b6*/
  v17 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v16); /*0x5677b9*/
  LOBYTE(v11) = cocos2d::CCDirector::replaceScene(v17, v15); /*0x5677c5*/
  if ( (_BYTE)v11 ) /*0x5677cd*/
    LOBYTE(v11) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 408) + 992LL))(a1 - 408, 0); /*0x5677df*/
  return v11; /*0x5677e5*/
}

// [9/17] Address: 0x5677f0
// Method: SecretRewardsLayer::onSpecialItem
// Hidden C++ exception states: #wind=5
__int64 __fastcall SecretRewardsLayer_onSpecialItem(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  signed int v9; // esi
  cocos2d::CCArray *v10; // rbx
  int v11; // edi
  const char *v12; // r8
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  __int64 v15; // r8
  int v16; // r9d
  struct cocos2d::CCObject *v17; // rax
  __int64 DialogLayer; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rbx
  cocos2d::CCObject *v28; // rcx
  __int16 v29; // [rsp+30h] [rbp-69h] BYREF
  char v30; // [rsp+32h] [rbp-67h]
  __int128 *v31; // [rsp+40h] [rbp-59h] BYREF
  __int128 v32; // [rsp+48h] [rbp-51h] BYREF
  __int64 v33; // [rsp+58h] [rbp-41h]
  __int64 v34; // [rsp+60h] [rbp-39h]
  __int128 *v35; // [rsp+68h] [rbp-31h] BYREF
  __int128 v36; // [rsp+70h] [rbp-29h] BYREF
  __int64 v37; // [rsp+80h] [rbp-19h]
  __int64 v38; // [rsp+88h] [rbp-11h]
  __int128 Src; // [rsp+90h] [rbp-9h]
  __int64 v40; // [rsp+A0h] [rbp+7h]
  __int64 v41; // [rsp+A8h] [rbp+Fh]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x567826*/
  Src = 0; /*0x56782f*/
  v40 = 0; /*0x567836*/
  v41 = 15; /*0x567840*/
  LOBYTE(Src) = 0; /*0x567844*/
  switch ( (_DWORD)result ) /*0x56784b*/
  {
    case 6: /*0x56784b*/
      v5 = *(_DWORD *)"0004"; /*0x567875*/
      v6 = 50; /*0x56787b*/
      break;
    case 7: /*0x56784b*/
      v5 = *(_DWORD *)"0005"; /*0x567868*/
      v6 = 100; /*0x56786e*/
      break;
    case 8: /*0x56784b*/
      v5 = *(_DWORD *)"0006"; /*0x56785b*/
      v6 = 200; /*0x567861*/
      break;
    default:
      return result; /*0x567855*/
  }
  v40 = 4; /*0x567885*/
  LODWORD(Src) = v5; /*0x567889*/
  BYTE4(Src) = 0; /*0x56788c*/
  v7 = qword_905FE0; /*0x567890*/
  if ( !qword_905FE0 ) /*0x56789a*/
  {
    v31 = (__int128 *)operator new(0x3E8u); /*0x5678a6*/
    qword_905FE0 = sub_2D2B40(v31); /*0x5678b3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x5678c4*/
    v7 = qword_905FE0; /*0x5678c6*/
  }
  v9 = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(v7 + 864)); /*0x5678da*/
  if ( v9 >= v6 ) /*0x5678de*/
  {
    v35 = &v32; /*0x567a5e*/
    v33 = 4; /*0x567a8e*/
    v34 = 15; /*0x567a92*/
    v32 = Src; /*0x567a99*/
    v24 = qword_905FE0; /*0x567adf*/
    if ( !qword_905FE0 ) /*0x567ae9*/
    {
      v31 = (__int128 *)operator new(0x3E8u); /*0x567af5*/
      qword_905FE0 = sub_2D2B40(v31); /*0x567b02*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x567b13*/
      v24 = qword_905FE0; /*0x567b16*/
    }
    result = GameStatsManager_unlockSpecialChest(v24, (__int64)&v32); /*0x567b21*/
    v26 = result; /*0x567b26*/
    if ( result ) /*0x567b2c*/
    {
      SecretRewardsLayer_switchToOpenedState(v25, a2); /*0x567b35*/
      v27 = sub_55E830(*(unsigned int *)(v26 + 64), 0); /*0x567b44*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v27, 100); /*0x567b5d*/
      v28 = *(cocos2d::CCObject **)(v27 + 704); /*0x567b60*/
      if ( v28 ) /*0x567b6a*/
        cocos2d::CCObject::release(v28); /*0x567b6c*/
      *(_QWORD *)(v27 + 704) = v26; /*0x567b72*/
      cocos2d::CCObject::retain((cocos2d::CCObject *)v26); /*0x567b7c*/
      if ( !*(_BYTE *)(v26 + 80) || (result = *(unsigned int *)(v27 + 696), *(_DWORD *)(v26 + 64) == (_DWORD)result) ) /*0x567b91*/
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v27 + 720) + 336LL))(*(_QWORD *)(v27 + 720), 0); /*0x567b9f*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v27 + 720) + 936LL))(*(_QWORD *)(v27 + 720), 0); /*0x567bb1*/
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v27 + 712) + 336LL))( /*0x567bc3*/
                   *(_QWORD *)(v27 + 712),
                   0);
        *(_BYTE *)(v27 + 700) = 1; /*0x567bc9*/
        if ( *(_BYTE *)(v27 + 701) ) /*0x567bd0*/
          return RewardUnlockLayer_playRewardEffect(v27); /*0x567bdc*/
      }
    }
  }
  else
  {
    v10 = (cocos2d::CCArray *)cocos2d::CCArray::create(v8); /*0x5678ea*/
    v11 = v6 - v9; /*0x5678ed*/
    v31 = &v36; /*0x5678f3*/
    v29 = -1; /*0x5678fe*/
    v30 = -1; /*0x567909*/
    v12 = "Chests"; /*0x567913*/
    if ( v11 == 1 ) /*0x56791d*/
      v12 = "Chest"; /*0x56791d*/
    v13 = cocos2d::CCString::createWithFormat( /*0x56792a*/
            "Unlock <cy>%i</c> more <cg>%s</c>, and you can collect this bonus.",
            v11,
            v12);
    CString = cocos2d::CCString::getCString(v13); /*0x567933*/
    v36 = 0; /*0x56793c*/
    v37 = 0; /*0x567940*/
    v38 = 0; /*0x567944*/
    v15 = -1; /*0x567948*/
    do /*0x567953*/
      ++v15; /*0x567950*/
    while ( CString[v15] ); /*0x567953*/
    sub_3C230(&v36); /*0x567961*/
    v33 = 13; /*0x56796c*/
    v34 = 15; /*0x567974*/
    strcpy((char *)&v32, "The Keymaster"); /*0x567980*/
    HIWORD(v32) = 0; /*0x56798b*/
    v17 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v32, (unsigned int)&v36, 2, v16, 0, (__int64)&v29); /*0x5679c0*/
    cocos2d::CCArray::addObject(v10, v17); /*0x5679cb*/
    DialogLayer = DialogLayer_createDialogLayer(0, v10, 2); /*0x5679e1*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x5679fa*/
    v20 = cocos2d::CCDirector::sharedDirector(v19); /*0x5679fd*/
    cocos2d::CCDirector::getWinSize(v20, &v31); /*0x567a0a*/
    v21 = **(_QWORD **)(DialogLayer + 560); /*0x567a17*/
    v22 = *(_QWORD *)(DialogLayer + 560); /*0x567a1a*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, *(float *)&v31 * 0.5, *((float *)&v31 + 1) * 0.5); /*0x567a3b*/
    (*(void (__fastcall **)(__int64, __int64))(v21 + 184))(v22, v23); /*0x567a47*/
    return sub_173300(DialogLayer); /*0x567a50*/
  }
  return result; /*0x567be2*/
}

// [10/17] Address: 0x567c10
// Method: SecretRewardsLayer::switchToOpenedState
__int64 __fastcall SecretRewardsLayer_switchToOpenedState(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *i; // rsi
  __int64 v12; // rdi
  void (__fastcall **v13)(__int64, __int64 *); // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1; /*0x567c15*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2); /*0x567c29*/
  LOBYTE(v4) = 1; /*0x567c2f*/
  v5 = v3; /*0x567c3a*/
  sub_562400(v3, 4, v4); /*0x567c3d*/
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 480LL))(v5); /*0x567c4f*/
  if ( v6 ) /*0x567c55*/
  {
    v8 = *(unsigned int **)(v6 + 56); /*0x567c57*/
    v9 = *v8; /*0x567c5b*/
    if ( (_DWORD)v9 ) /*0x567c5f*/
    {
      v10 = (__int64 *)*((_QWORD *)v8 + 2); /*0x567c61*/
      for ( i = &v10[v9 - 1]; v10 <= i; ++v10 ) /*0x567c75*/
      {
        v12 = *v10; /*0x567c80*/
        if ( !*v10 ) /*0x567c80*/
          break; /*0x567c86*/
        LOBYTE(v7) = 100; /*0x567c96*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 320) + 40LL))(v12 + 320, v7); /*0x567c98*/
        v13 = *(void (__fastcall ***)(__int64, __int64 *))(v12 + 320); /*0x567c9b*/
        LOWORD(v15) = -26986; /*0x567cae*/
        BYTE2(v15) = -106; /*0x567cb5*/
        (*v13)(v12 + 320, &v15); /*0x567cba*/
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 936LL))(a2, 0);
}

// [11/17] Address: 0x567cf0
// Method: SecretRewardsLayer::updateUnlockedLabel
// Hidden C++ exception states: #wind=5
void __fastcall SecretRewardsLayer_updateUnlockedLabel(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 v4; // rcx
  unsigned int v5; // eax
  void (__fastcall **v6)(__int64, const char *); // rdi
  __int64 v7; // rbx
  cocos2d::CCString *v8; // rax
  const char *CString; // rax
  __int64 v10; // r8
  int v11; // r9d
  signed int v12; // edi
  int v13; // r9d
  signed int v14; // ebx
  cocos2d::CCString *v15; // rax
  const char *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  void **v19; // rdx
  struct cocos2d::CCObject *v20; // rax
  struct cocos2d::CCObject *v21; // rsi
  void **v22; // rdx
  __int64 v23; // rcx
  void *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 i; // rdx
  signed int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 j; // rdx
  signed int v32; // ecx
  __int16 v33; // [rsp+30h] [rbp-40h] BYREF
  char v34; // [rsp+32h] [rbp-3Eh]
  void *v35; // [rsp+38h] [rbp-38h]
  void *Block[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+50h] [rbp-20h]
  unsigned __int64 v38; // [rsp+58h] [rbp-18h]

  v2 = qword_905FE0; /*0x567d16*/
  if ( !qword_905FE0 ) /*0x567d20*/
  {
    v35 = operator new(0x3E8u); /*0x567d2c*/
    qword_905FE0 = sub_2D2B40(v35); /*0x567d39*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x567d4a*/
    v2 = qword_905FE0; /*0x567d4c*/
  }
  v3 = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(v2 + 864)); /*0x567d60*/
  v4 = qword_905FE0; /*0x567d62*/
  if ( !qword_905FE0 ) /*0x567d6c*/
  {
    v35 = operator new(0x3E8u); /*0x567d78*/
    qword_905FE0 = sub_2D2B40(v35); /*0x567d85*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x567d96*/
    v4 = qword_905FE0; /*0x567d98*/
  }
  v5 = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(v4 + 352)); /*0x567da6*/
  v6 = *(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 440) + 360LL); /*0x567db3*/
  v7 = *(_QWORD *)(a1 + 440); /*0x567dba*/
  v8 = cocos2d::CCString::createWithFormat("%i/%i", v3, v5); /*0x567dc9*/
  CString = cocos2d::CCString::getCString(v8); /*0x567dd2*/
  (*v6)(v7 + 360, CString); /*0x567de2*/
  if ( !*(_BYTE *)(a1 + 584) ) /*0x567de4*/
  {
    v10 = qword_905FE0; /*0x567df2*/
    if ( !qword_905FE0 ) /*0x567dfc*/
    {
      v35 = operator new(0x3E8u); /*0x567e08*/
      qword_905FE0 = sub_2D2B40(v35); /*0x567e15*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x567e26*/
      v10 = qword_905FE0; /*0x567e28*/
    }
    v11 = *(_DWORD *)(a1 + 588); /*0x567e2f*/
    if ( v11 ) /*0x567e39*/
    {
      v12 = 0; /*0x568009*/
      v25 = *(_QWORD *)(v10 + 864); /*0x56800b*/
      if ( v25 ) /*0x568015*/
      {
        v26 = *(_QWORD *)(v25 + 56); /*0x56801b*/
        if ( v26 ) /*0x568022*/
        {
          for ( i = *(_QWORD *)(v26 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x568028*/
          {
            v28 = v12++; /*0x568030*/
            if ( *(_DWORD *)(*(_QWORD *)(v26 + 264) + 64LL) != v11 ) /*0x56803f*/
              v12 = v28; /*0x56803f*/
            v26 = i; /*0x568042*/
            if ( !i ) /*0x568048*/
              break; /*0x568048*/
          }
        }
      }
    }
    else
    {
      v12 = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(v10 + 864)); /*0x567e4c*/
      v10 = qword_905FE0; /*0x567e4e*/
    }
    if ( !v10 ) /*0x567e58*/
    {
      v35 = operator new(0x3E8u); /*0x567e64*/
      qword_905FE0 = sub_2D2B40(v35); /*0x567e71*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x567e82*/
      v10 = qword_905FE0; /*0x567e84*/
    }
    v13 = *(_DWORD *)(a1 + 588); /*0x567e8b*/
    if ( v13 ) /*0x567e95*/
    {
      v14 = 0; /*0x568057*/
      v29 = *(_QWORD *)(v10 + 352); /*0x568059*/
      if ( v29 ) /*0x568063*/
      {
        v30 = *(_QWORD *)(v29 + 56); /*0x568069*/
        if ( v30 ) /*0x568070*/
        {
          for ( j = *(_QWORD *)(v30 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x568076*/
          {
            v32 = v14++; /*0x568080*/
            if ( *(_DWORD *)(*(_QWORD *)(v30 + 264) + 64LL) != v13 ) /*0x56808f*/
              v14 = v32; /*0x56808f*/
            v30 = j; /*0x568092*/
            if ( !j ) /*0x568098*/
              break; /*0x568098*/
          }
        }
      }
    }
    else
    {
      v14 = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(v10 + 352)); /*0x567ea8*/
    }
    v15 = cocos2d::CCString::createWithFormat("%i/%i", v12, v14); /*0x567eb6*/
    v16 = cocos2d::CCString::getCString(v15); /*0x567ebf*/
    *(_OWORD *)Block = 0; /*0x567ec8*/
    v37 = 0; /*0x567ecc*/
    v38 = 0; /*0x567ed4*/
    v17 = -1; /*0x567edc*/
    do /*0x567ee6*/
      ++v17; /*0x567ee3*/
    while ( v16[v17] ); /*0x567ee6*/
    sub_3C230(Block); /*0x567ef4*/
    v18 = *(_QWORD *)(a1 + 448); /*0x567efa*/
    if ( v18 ) /*0x567f04*/
    {
      v19 = Block; /*0x567f06*/
      if ( v38 > 0xF ) /*0x567f0f*/
        v19 = (void **)Block[0]; /*0x567f0f*/
      (**(void (__fastcall ***)(__int64, void **))(v18 + 360))(v18 + 360, v19); /*0x567f1e*/
    }
    v20 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 464), *(int *)(a1 + 588)); /*0x567f2e*/
    v21 = v20; /*0x567f34*/
    if ( v20 ) /*0x567f3a*/
    {
      v22 = Block; /*0x567f3c*/
      if ( v38 > 0xF ) /*0x567f45*/
        v22 = (void **)Block[0]; /*0x567f45*/
      (**((void (__fastcall ***)(__int64, void **))v20 + 45))((__int64)v20 + 360, v22); /*0x567f54*/
    }
    if ( v12 >= v14 ) /*0x567f59*/
    {
      v23 = *(_QWORD *)(a1 + 448); /*0x567f5b*/
      if ( v23 ) /*0x567f65*/
      {
        v33 = -256; /*0x567f71*/
        v34 = -1; /*0x567f75*/
        (**(void (__fastcall ***)(__int64, __int16 *))(v23 + 368))(v23 + 368, &v33); /*0x567f87*/
      }
      if ( v21 ) /*0x567f8c*/
      {
        v33 = -206; /*0x567f98*/
        v34 = 50; /*0x567f9c*/
        (**((void (__fastcall ***)(__int64, __int16 *))v21 + 46))((__int64)v21 + 368, &v33); /*0x567fae*/
      }
    }
    if ( v38 > 0xF ) /*0x567fb9*/
    {
      v24 = Block[0]; /*0x567fc2*/
      if ( v38 + 1 >= 0x1000 ) /*0x567fd0*/
      {
        v24 = (void *)*((_QWORD *)Block[0] - 1); /*0x567fda*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v24 - 8) > 0x1F ) /*0x567fe9*/
          invoke_watson(0, 0, 0, 0, 0); /*0x568002*/
      }
      j_j_free(v24); /*0x5680a7*/
    }
  }
}

// [12/17] Address: 0x5680d0
// Method: SecretRewardsLayer::onGoldChest
// Hidden C++ exception states: #wind=8
void __fastcall SecretRewardsLayer_onGoldChest(cocos2d::CCNode *a1)
{
  __int64 v2; // rcx
  int Stat; // esi
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rsi
  struct cocos2d::CCObject *v7; // rdi
  int v8; // eax
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  __int64 v11; // r8
  void *v12; // rcx
  __int64 v13; // rbx
  cocos2d::CCObject *v14; // rcx
  __int64 v15; // rcx
  void (__fastcall **v16)(__int64, const char *); // rdi
  __int64 v17; // rbx
  unsigned int v18; // eax
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  struct cocos2d::CCFiniteTimeAction *v23; // rax
  struct cocos2d::CCAction *v24; // rax
  int v25; // edi
  char *v26; // rax
  int v27; // esi
  char *v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rbx
  int v31; // r9d
  __int64 v32; // rax
  __int64 DialogLayer; // rsi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  void *v39; // rcx
  __int128 *v40; // [rsp+30h] [rbp-49h] BYREF
  __int16 v41; // [rsp+40h] [rbp-39h] BYREF
  char v42; // [rsp+42h] [rbp-37h]
  __int128 v43; // [rsp+50h] [rbp-29h] BYREF
  __int64 v44; // [rsp+60h] [rbp-19h]
  __int64 v45; // [rsp+68h] [rbp-11h]
  char v46[8]; // [rsp+70h] [rbp-9h] BYREF
  void *Block[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v48; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v49; // [rsp+90h] [rbp+17h]
  void *v50[2]; // [rsp+98h] [rbp+1Fh]
  __int64 v51; // [rsp+A8h] [rbp+2Fh]
  unsigned __int64 v52; // [rsp+B0h] [rbp+37h]

  v2 = qword_905FE0; /*0x568101*/
  if ( !qword_905FE0 ) /*0x56810b*/
  {
    v40 = (__int128 *)operator new(0x3E8u); /*0x568117*/
    qword_905FE0 = sub_2D2B40(v40); /*0x568124*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x568135*/
    v2 = qword_905FE0; /*0x568137*/
  }
  Stat = GameStatsManager_getStat(v2, (const char *)&word_732D94); /*0x56814a*/
  v4 = qword_905FE0; /*0x56814c*/
  if ( !qword_905FE0 ) /*0x568156*/
  {
    v40 = (__int128 *)operator new(0x3E8u); /*0x568162*/
    qword_905FE0 = sub_2D2B40(v40); /*0x56816f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x568180*/
    v4 = qword_905FE0; /*0x568182*/
  }
  v5 = 6001; /*0x568189*/
  while ( (unsigned __int8)sub_2EB320(v4, v5) ) /*0x56819f*/
  {
    if ( (int)(++v5 - 6001) >= 30 ) /*0x5681ac*/
    {
      v5 = 0; /*0x5681ae*/
      break; /*0x5681ae*/
    }
  }
  if ( Stat >= 1 && v5 ) /*0x5681bc*/
  {
    v6 = qword_905FE0; /*0x5681c2*/
    if ( !qword_905FE0 ) /*0x5681cc*/
    {
      v40 = (__int128 *)operator new(0x3E8u); /*0x5681d8*/
      qword_905FE0 = sub_2D2B40(v40); /*0x5681e5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x5681f6*/
      v6 = qword_905FE0; /*0x5681f8*/
    }
    if ( !(unsigned __int8)sub_2EB320(v6, v5) ) /*0x568204*/
    {
      v7 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v6 + 352), (int)v5); /*0x568221*/
      if ( v7 ) /*0x568227*/
      {
        v8 = GameStatsManager_getStat(v6, (const char *)&word_732D94); /*0x568237*/
        if ( v8 >= 1 ) /*0x56823f*/
        {
          sub_2D7950(v6, &word_732D94, (unsigned int)(v8 - 1)); /*0x568253*/
          GameStatsManager_preProcessReward(v6, (__int64)v7); /*0x56825e*/
          GameStatsManager_registerRewardsFromItem(v6, (__int64)v7); /*0x568269*/
          v9 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v5); /*0x568277*/
          CString = cocos2d::CCString::getCString(v9); /*0x568280*/
          *(_OWORD *)Block = 0; /*0x568289*/
          v48 = 0; /*0x56828d*/
          v49 = 0; /*0x568291*/
          v11 = -1; /*0x568295*/
          do /*0x5682a3*/
            ++v11; /*0x5682a0*/
          while ( CString[v11] ); /*0x5682a3*/
          sub_3C230(Block); /*0x5682b1*/
          cocos2d::CCDictionary::setObject(*(_QWORD *)(v6 + 864), v7, Block); /*0x5682c5*/
          if ( v49 > 0xF ) /*0x5682d4*/
          {
            v12 = Block[0]; /*0x5682d9*/
            if ( v49 + 1 >= 0x1000 ) /*0x5682e7*/
            {
              v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x5682ed*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x5682fc*/
                invoke_watson(0, 0, 0, 0, 0); /*0x56830d*/
            }
            j_j_free(v12); /*0x568314*/
          }
          v13 = sub_55E830(*((unsigned int *)v7 + 16), 0); /*0x568323*/
          (*(void (__fastcall **)(cocos2d::CCNode *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v13, 100); /*0x56833c*/
          v14 = *(cocos2d::CCObject **)(v13 + 704); /*0x56833f*/
          if ( v14 ) /*0x568349*/
            cocos2d::CCObject::release(v14); /*0x56834b*/
          *(_QWORD *)(v13 + 704) = v7; /*0x568351*/
          cocos2d::CCObject::retain(v7); /*0x56835b*/
          if ( !*((_BYTE *)v7 + 80) || *((_DWORD *)v7 + 16) == *(_DWORD *)(v13 + 696) ) /*0x568370*/
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 720) + 336LL))(*(_QWORD *)(v13 + 720), 0); /*0x56837e*/
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 720) + 936LL))(*(_QWORD *)(v13 + 720), 0); /*0x568390*/
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 712) + 336LL))(*(_QWORD *)(v13 + 712), 0); /*0x5683a2*/
            *(_BYTE *)(v13 + 700) = 1; /*0x5683a8*/
            if ( *(_BYTE *)(v13 + 701) ) /*0x5683af*/
              RewardUnlockLayer_playRewardEffect(v13); /*0x5683bb*/
          }
          v15 = qword_905FE0; /*0x5683c0*/
          if ( !qword_905FE0 ) /*0x5683ca*/
          {
            v40 = (__int128 *)operator new(0x3E8u); /*0x5683d6*/
            qword_905FE0 = sub_2D2B40(v40); /*0x5683e3*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x5683f4*/
            v15 = qword_905FE0; /*0x5683f7*/
          }
          v16 = *(void (__fastcall ***)(__int64, const char *))(*((_QWORD *)a1 + 60) + 360LL); /*0x568405*/
          v17 = *((_QWORD *)a1 + 60); /*0x56840c*/
          v18 = GameStatsManager_getStat(v15, (const char *)&word_732D94); /*0x568416*/
          v19 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v18); /*0x568424*/
          v20 = cocos2d::CCString::getCString(v19); /*0x56842d*/
          (*v16)(v17 + 360, v20); /*0x56843d*/
          sub_568840(a1); /*0x568442*/
          v21 = qword_905F60; /*0x568447*/
          if ( !qword_905F60 ) /*0x568451*/
          {
            v40 = (__int128 *)operator new(0x8A8u); /*0x56845d*/
            qword_905F60 = sub_5AE20(v40); /*0x56846a*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x56847b*/
            v21 = qword_905F60; /*0x56847d*/
          }
          FMODAudioEngine_fadeMusic(v21, 1.0); /*0x56849d*/
          v22 = cocos2d::CCCallFunc::create(a1, sub_5687D0); /*0x5684b2*/
          v23 = cocos2d::CCDelayTime::create(3.2); /*0x5684bd*/
          v24 = cocos2d::CCSequence::create(v23, v22, 0); /*0x5684cc*/
          cocos2d::CCNode::runAction(a1, v24); /*0x5684d8*/
        }
      }
    }
  }
  else
  {
    v25 = 1 - Stat; /*0x5684e8*/
    *(_OWORD *)v50 = 0; /*0x5684ed*/
    v51 = 0; /*0x5684f1*/
    LOBYTE(v50[0]) = 0; /*0x5684fd*/
    v26 = (char *)sub_3C460(64); /*0x568506*/
    v52 = 63; /*0x56850e*/
    if ( v5 ) /*0x568518*/
    {
      v51 = 57; /*0x56855f*/
      strcpy(v26, "You need a <cy>Gold Key</c> to unlock this <cg>chest</c>."); /*0x56856e*/
    }
    else
    {
      v51 = 58; /*0x56851a*/
      strcpy(v26, "All out of <cy>Gold Chests</c> right now. Come back later."); /*0x568529*/
    }
    v50[0] = v26; /*0x5685a2*/
    if ( v25 <= 50 ) /*0x5685a9*/
    {
      if ( v25 <= 25 ) /*0x5685b5*/
      {
        v27 = 2; /*0x5685be*/
        if ( v25 > 10 ) /*0x5685cb*/
          v27 = 4; /*0x5685cb*/
      }
      else
      {
        v27 = 17; /*0x5685b7*/
      }
    }
    else
    {
      v27 = 18; /*0x5685ab*/
    }
    v40 = &v43; /*0x5685d2*/
    v41 = -1; /*0x5685dd*/
    v42 = -1; /*0x5685e8*/
    v43 = 0; /*0x5685ee*/
    v44 = 0; /*0x5685f2*/
    v45 = 0; /*0x5685f6*/
    v28 = v26; /*0x568603*/
    v29 = v51; /*0x568607*/
    v30 = 0x7FFFFFFFFFFFFFFFLL; /*0x56860b*/
    if ( (v51 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x568644*/
    {
      v30 = v51 | 0xF; /*0x568646*/
      if ( (v51 | 0xFuLL) < 0x16 ) /*0x568651*/
        v30 = 22; /*0x568651*/
    }
    *(_QWORD *)&v43 = sub_3C460(v30 + 1); /*0x56865e*/
    v44 = v29; /*0x568662*/
    v45 = v30; /*0x568666*/
    memcpy((void *)v43, v28, v29 + 1); /*0x568674*/
    v48 = 13; /*0x56867f*/
    v49 = 15; /*0x568687*/
    strcpy((char *)Block, "The Keymaster"); /*0x568697*/
    HIWORD(Block[1]) = 0; /*0x5686a2*/
    v32 = sub_1723F0((unsigned int)Block, (unsigned int)&v43, v27, v31, 0, (__int64)&v41); /*0x5686d4*/
    DialogLayer = DialogLayer_createDialogLayer(v32, 0, 2); /*0x5686e9*/
    DialogLayer_addToMainScene(DialogLayer); /*0x5686ef*/
    v35 = cocos2d::CCDirector::sharedDirector(v34); /*0x5686f4*/
    cocos2d::CCDirector::getWinSize(v35, &v40); /*0x568701*/
    v36 = **(_QWORD **)(DialogLayer + 560); /*0x56870e*/
    v37 = *(_QWORD *)(DialogLayer + 560); /*0x568711*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v46, *(float *)&v40 * 0.5, *((float *)&v40 + 1) * 0.5); /*0x568732*/
    (*(void (__fastcall **)(__int64, __int64))(v36 + 184))(v37, v38); /*0x56873e*/
    sub_173300(DialogLayer); /*0x568747*/
    if ( v52 > 0xF ) /*0x568755*/
    {
      v39 = v50[0]; /*0x56875a*/
      if ( v52 + 1 >= 0x1000 ) /*0x568768*/
      {
        v39 = (void *)*((_QWORD *)v50[0] - 1); /*0x56876e*/
        if ( (unsigned __int64)((char *)v50[0] - (char *)v39 - 8) > 0x1F ) /*0x56877d*/
          invoke_watson(0, 0, 0, 0, 0); /*0x56878e*/
      }
      j_j_free(v39); /*0x568795*/
    }
  }
}

// [13/17] Address: 0x5689b0
// Method: SecretRewardsLayer::onBack
// Hidden C++ exception states: #wind=1
char __fastcall SecretRewardsLayer_onBack(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const struct cocos2d::CCPoint *v4; // rax
  struct cocos2d::CCActionInterval *v5; // rax
  struct cocos2d::CCAction *v6; // rax
  const struct cocos2d::CCPoint *v7; // rax
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCFiniteTimeAction *v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCAction *v11; // rax
  struct cocos2d::CCScene *v13; // rax
  struct cocos2d::CCScene *v14; // rbx
  __int64 v15; // rcx
  cocos2d::CCDirector *v16; // rax
  void *v17; // [rsp+30h] [rbp+8h] BYREF
  char v18; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 584) ) /*0x5689bd*/
  {
    if ( !qword_905FD0 ) /*0x568b0c*/
    {
      v17 = operator new(0x6E8u); /*0x568b18*/
      qword_905FD0 = sub_2723A0(v17); /*0x568b26*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x568b37*/
    }
    sub_2732D0(); /*0x568b40*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x568b4d*/
    v13 = (struct cocos2d::CCScene *)CreatorLayer_scene(); /*0x568b53*/
    v14 = cocos2d::CCTransitionFade::create(0.5, v13); /*0x568b69*/
    v16 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v15); /*0x568b6c*/
    return cocos2d::CCDirector::replaceScene(v16, v14); /*0x568b82*/
  }
  else
  {
    *(_BYTE *)(a1 + 584) = 1; /*0x5689ca*/
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x5689d1*/
    cocos2d::CCDirector::getWinSize(v2, &v17); /*0x5689df*/
    LOBYTE(v3) = 1; /*0x5689ef*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 920LL))(*(_QWORD *)(a1 + 544), v3); /*0x5689f1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, 0.0, 0.0); /*0x568a02*/
    v5 = cocos2d::CCMoveTo::create(0.40000001, v4); /*0x568a13*/
    v6 = cocos2d::CCEaseInOut::create(v5, 2.0); /*0x568a24*/
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 424), v6); /*0x568a34*/
    if ( *(_QWORD *)(a1 + 432) ) /*0x568a3a*/
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 920LL))(*(_QWORD *)(a1 + 552), 0); /*0x568a54*/
      *(_QWORD *)(a1 + 552) = 0; /*0x568a5a*/
      *(_QWORD *)(a1 + 448) = 0; /*0x568a65*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, 0.0, *((float *)&v17 + 1) + 50.0); /*0x568a86*/
      v8 = cocos2d::CCMoveTo::create(0.40000001, v7); /*0x568a97*/
      v9 = cocos2d::CCEaseInOut::create(v8, 2.0); /*0x568aae*/
      v10 = cocos2d::CCCallFunc::create(*(_QWORD *)(a1 + 432), sub_3E5B0); /*0x568abf*/
      v11 = cocos2d::CCSequence::create(v9, v10, 0); /*0x568ace*/
      cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 432), v11); /*0x568ade*/
      *(_QWORD *)(a1 + 432) = 0; /*0x568ae4*/
    }
    return sub_565E80(a1); /*0x568af2*/
  }
}

// [14/17] Address: 0x568b90
// Method: SecretRewardsLayer::keyBackClicked
char __fastcall SecretRewardsLayer_keyBackClicked(__int64 a1)
{
  return SecretRewardsLayer_onBack(a1 - 336);
}

// [15/17] Address: 0x568ba0
// Method: SecretRewardsLayer::onExit
void __fastcall SecretRewardsLayer_onExit(cocos2d::CCLayer *a1)
{
  cocos2d::CCSpriteFrameCache *v1; // rax
  cocos2d::CCTextureCache *v2; // rax

  cocos2d::CCLayer::onExit(a1); /*0x568ba4*/
  v1 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x568baa*/
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v1, "TreasureRoomSheet.plist"); /*0x568bba*/
  v2 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x568bc0*/
  cocos2d::CCTextureCache::removeTextureForKey(v2, "TreasureRoomSheet.png"); /*0x568bd4*/
}

// [16/17] Address: 0x568be0
// Method: SecretRewardsLayer::showDialog01
// Hidden C++ exception states: #wind=4
__int64 __fastcall SecretRewardsLayer_showDialog01(_DWORD *a1)
{
  cocos2d::CCArray *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  char v6; // r15
  int v7; // r9d
  struct cocos2d::CCObject *v8; // rax
  int v9; // r9d
  struct cocos2d::CCObject *v10; // rax
  int v11; // r9d
  struct cocos2d::CCObject *v12; // rax
  int v13; // r9d
  struct cocos2d::CCObject *v14; // rax
  int v15; // r9d
  struct cocos2d::CCObject *v16; // rax
  int v17; // r9d
  struct cocos2d::CCObject *v18; // rax
  int v19; // r9d
  int v20; // r8d
  int v21; // r9d
  struct cocos2d::CCObject *v22; // rax
  int v23; // r9d
  struct cocos2d::CCObject *v24; // rax
  int v25; // r9d
  struct cocos2d::CCObject *v26; // rax
  int v27; // r9d
  struct cocos2d::CCObject *v28; // rax
  int v29; // r9d
  struct cocos2d::CCObject *v30; // rax
  int v31; // r9d
  struct cocos2d::CCObject *v32; // rax
  int v33; // r9d
  struct cocos2d::CCObject *v34; // rax
  int v35; // r9d
  struct cocos2d::CCObject *v36; // rax
  int v37; // r9d
  struct cocos2d::CCObject *v38; // rax
  cocos2d::CCString *v39; // rax
  const char *CString; // rax
  __int64 v41; // rbx
  __int64 v42; // r8
  int v43; // r9d
  struct cocos2d::CCObject *v44; // rax
  cocos2d::CCString *v45; // rax
  const char *v46; // rax
  int v47; // r9d
  struct cocos2d::CCObject *v48; // rax
  int v49; // r9d
  struct cocos2d::CCObject *v50; // rax
  int v51; // r9d
  struct cocos2d::CCObject *v52; // rax
  int v53; // r9d
  struct cocos2d::CCObject *v54; // rax
  __int64 v55; // r8
  __int64 v56; // rcx
  cocos2d::CCString *v57; // rax
  const char *v58; // rax
  __int64 v59; // rbx
  int v60; // r9d
  struct cocos2d::CCObject *v61; // rax
  int v62; // r9d
  struct cocos2d::CCObject *v63; // rax
  struct cocos2d::CCObject *v64; // rax
  __int64 DialogLayer; // rsi
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  char v72[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v73; // [rsp+38h] [rbp-48h]
  __int64 v74; // [rsp+40h] [rbp-40h]
  __int64 v75; // [rsp+48h] [rbp-38h]
  __int128 v76; // [rsp+50h] [rbp-30h] BYREF
  __int64 v77; // [rsp+60h] [rbp-20h]
  __int64 v78; // [rsp+68h] [rbp-18h]
  __int128 *v79; // [rsp+B8h] [rbp+38h] BYREF
  __int16 v80; // [rsp+C0h] [rbp+40h] BYREF
  char v81; // [rsp+C2h] [rbp+42h]

  v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x568c04*/
  v3 = qword_905FE0; /*0x568c07*/
  if ( !qword_905FE0 ) /*0x568c11*/
  {
    v79 = (__int128 *)operator new(0x3E8u); /*0x568c1d*/
    qword_905FE0 = sub_2D2B40(v79); /*0x568c2a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x568c3b*/
    v3 = qword_905FE0; /*0x568c3d*/
  }
  if ( (int)GameStatsManager_getStat(v3, "13") < 500 ) /*0x568c55*/
    goto LABEL_32; /*0x568c55*/
  v5 = qword_905FD0; /*0x568c5b*/
  if ( !qword_905FD0 ) /*0x568c65*/
  {
    v79 = (__int128 *)operator new(0x6E8u); /*0x568c71*/
    qword_905FD0 = sub_2723A0(v79); /*0x568c7e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x568c8f*/
    v5 = qword_905FD0; /*0x568c91*/
  }
  if ( (unsigned __int8)sub_27B350(v5, "10", v4) ) /*0x568c9f*/
  {
    v6 = 1; /*0x568cac*/
    v79 = &v76; /*0x568cb3*/
    v80 = -1; /*0x568cbe*/
    v81 = -1; /*0x568cc9*/
    v76 = 0; /*0x568ccf*/
    v77 = 0; /*0x568cd5*/
    v78 = 0; /*0x568cd9*/
    *(_QWORD *)&v76 = sub_3C460(64); /*0x568cea*/
    v77 = 53; /*0x568cee*/
    v78 = 63; /*0x568cf6*/
    strcpy((char *)v76, "Oh,<d020> the <cl>diamonds</c>.<d030>\nYou found them."); /*0x568d05*/
    v73 = 0; /*0x568d35*/
    v74 = 7; /*0x568d39*/
    v75 = 15; /*0x568d41*/
    strcpy(v72, "Scratch"); /*0x568d50*/
    v8 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 10, v7, 0, (__int64)&v80); /*0x568d93*/
    cocos2d::CCArray::addObject(v2, v8); /*0x568d9e*/
    v79 = &v76; /*0x568da8*/
    v80 = -1; /*0x568db3*/
    v81 = -1; /*0x568dbe*/
    v76 = 0; /*0x568dc4*/
    v77 = 0; /*0x568dc8*/
    v78 = 0; /*0x568dcc*/
    *(_QWORD *)&v76 = sub_3C460(64); /*0x568ddd*/
    v77 = 55; /*0x568de1*/
    v78 = 63; /*0x568de9*/
    strcpy((char *)v76, "Alright come in, <d010>quickly before someone sees you."); /*0x568df8*/
    v73 = 0; /*0x568e33*/
    v74 = 7; /*0x568e37*/
    v75 = 15; /*0x568e3f*/
    strcpy(v72, "Scratch"); /*0x568e4e*/
    v10 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 13, v9, 0, (__int64)&v80); /*0x568e89*/
    cocos2d::CCArray::addObject(v2, v10); /*0x568e94*/
    v79 = &v76; /*0x568e9e*/
    v80 = -1; /*0x568ea9*/
    v81 = -1; /*0x568eb4*/
    v76 = 0; /*0x568eba*/
    v77 = 0; /*0x568ebe*/
    v78 = 0; /*0x568ec2*/
    *(_QWORD *)&v76 = sub_3C460(48); /*0x568ed3*/
    v77 = 37; /*0x568ed7*/
    v78 = 47; /*0x568edf*/
    strcpy((char *)v76, "You never know who might be watching."); /*0x568eee*/
    v73 = 0; /*0x568f13*/
    v74 = 7; /*0x568f17*/
    v75 = 15; /*0x568f1f*/
    strcpy(v72, "Scratch"); /*0x568f2e*/
    v12 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 8, v11, 0, (__int64)&v80); /*0x568f69*/
    cocos2d::CCArray::addObject(v2, v12); /*0x568f74*/
    v79 = &v76; /*0x568f7e*/
    v80 = -1; /*0x568f89*/
    v81 = -1; /*0x568f94*/
    v76 = 0; /*0x568f9a*/
    v77 = 0; /*0x568f9e*/
    v78 = 0; /*0x568fa2*/
    *(_QWORD *)&v76 = sub_3C460(32); /*0x568fb0*/
    v77 = 21; /*0x568fb4*/
    v78 = 31; /*0x568fbc*/
    strcpy((char *)v76, "<d010>.<d010>.<d010>."); /*0x568fcb*/
    v73 = 0; /*0x568fe5*/
    v74 = 7; /*0x568fe9*/
    v75 = 15; /*0x568ff1*/
    strcpy(v72, "Scratch"); /*0x569000*/
    v14 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 9, v13, 0, (__int64)&v80); /*0x56903b*/
    cocos2d::CCArray::addObject(v2, v14); /*0x569046*/
  }
  else
  {
LABEL_32:
    v6 = 0; /*0x569051*/
    switch ( a1[142] ) /*0x569077*/
    {
      case 0: /*0x569077*/
        v79 = &v76; /*0x56907d*/
        v80 = -1; /*0x569088*/
        v81 = -1; /*0x569093*/
        v76 = 0; /*0x569099*/
        v77 = 0; /*0x56909d*/
        v78 = 0; /*0x5690a1*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x5690af*/
        v77 = 28; /*0x5690b3*/
        v78 = 31; /*0x5690bb*/
        strcpy((char *)v76, "Uhm,<d030> there is no rope."); /*0x5690ca*/
        v73 = 0; /*0x5690e7*/
        v74 = 7; /*0x5690eb*/
        v75 = 15; /*0x5690f3*/
        strcpy(v72, "Scratch"); /*0x569102*/
        v16 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 8, v15, 0, (__int64)&v80); /*0x569145*/
        cocos2d::CCArray::addObject(v2, v16); /*0x569150*/
        v79 = &v76; /*0x56915a*/
        v80 = -1; /*0x569165*/
        v81 = -1; /*0x569170*/
        v76 = 0; /*0x569176*/
        v77 = 0; /*0x56917a*/
        v78 = 0; /*0x56917e*/
        *(_QWORD *)&v76 = sub_3C460(64); /*0x56918f*/
        v77 = 54; /*0x569193*/
        v78 = 63; /*0x56919b*/
        strcpy((char *)v76, "Just<d010>.<d010>.<d010>. Pretend this never happened."); /*0x5691aa*/
        v73 = 0; /*0x5691db*/
        v74 = 7; /*0x5691df*/
        v75 = 15; /*0x5691e7*/
        strcpy(v72, "Scratch"); /*0x5691f6*/
        v18 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 9, v17, 0, (__int64)&v80); /*0x569231*/
        cocos2d::CCArray::addObject(v2, v18); /*0x56923c*/
        v79 = &v76; /*0x569246*/
        v80 = -1; /*0x569251*/
        v81 = -1; /*0x56925c*/
        v76 = 0; /*0x569262*/
        v77 = 0; /*0x569266*/
        v78 = 0; /*0x56926a*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x569278*/
        v77 = 21; /*0x56927c*/
        v78 = 31; /*0x569284*/
        strcpy((char *)v76, "<d010>.<d010>.<d010>."); /*0x569293*/
        v73 = 0; /*0x5692ad*/
        v74 = 7; /*0x5692b1*/
        v75 = 15; /*0x5692b9*/
        strcpy(v72, "Scratch"); /*0x5692c8*/
        v20 = 8; /*0x5692e4*/
        goto LABEL_24; /*0x5692ea*/
      case 1: /*0x569077*/
        v79 = &v76; /*0x5692f3*/
        v80 = -1; /*0x5692fe*/
        v81 = -1; /*0x569309*/
        v76 = 0; /*0x56930f*/
        v77 = 0; /*0x569313*/
        v78 = 0; /*0x569317*/
        *(_QWORD *)&v76 = sub_3C460(48); /*0x569328*/
        v77 = 38; /*0x56932c*/
        v78 = 47; /*0x569334*/
        strcpy((char *)v76, "I'm gonna need you to stop doing that."); /*0x569343*/
        v73 = 0; /*0x569369*/
        v74 = 7; /*0x56936d*/
        v75 = 15; /*0x569375*/
        strcpy(v72, "Scratch"); /*0x569384*/
        v22 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 13, v21, 0, (__int64)&v80); /*0x5693c7*/
        cocos2d::CCArray::addObject(v2, v22); /*0x5693d2*/
        v79 = &v76; /*0x5693dc*/
        v80 = -1; /*0x5693e7*/
        v81 = -1; /*0x5693f2*/
        v76 = 0; /*0x5693f8*/
        v77 = 0; /*0x5693fc*/
        v78 = 0; /*0x569400*/
        *(_QWORD *)&v76 = sub_3C460(64); /*0x56940e*/
        v77 = 48; /*0x569412*/
        v78 = 63; /*0x56941a*/
        strcpy((char *)v76, "If RubRub sees this I am in <cr>BIG</c> trouble."); /*0x569429*/
        v73 = 0; /*0x569446*/
        v74 = 7; /*0x56944a*/
        v75 = 15; /*0x569452*/
        strcpy(v72, "Scratch"); /*0x569461*/
        v24 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 8, v23, 0, (__int64)&v80); /*0x56949c*/
        cocos2d::CCArray::addObject(v2, v24); /*0x5694a7*/
        v79 = &v76; /*0x5694b1*/
        v80 = -1; /*0x5694bc*/
        v81 = -1; /*0x5694c7*/
        v76 = 0; /*0x5694cd*/
        v77 = 0; /*0x5694d1*/
        v78 = 0; /*0x5694d5*/
        *(_QWORD *)&v76 = sub_3C460(48); /*0x5694e3*/
        v77 = 36; /*0x5694e7*/
        v78 = 47; /*0x5694ef*/
        strcpy((char *)v76, "I hate that guy<d010>.<d010>.<d010>."); /*0x5694fe*/
        v73 = 0; /*0x569519*/
        v74 = 7; /*0x56951d*/
        v75 = 15; /*0x569525*/
        strcpy(v72, "Scratch"); /*0x569534*/
        v20 = 12; /*0x569550*/
        goto LABEL_24; /*0x569556*/
      case 2: /*0x569077*/
        v79 = &v76; /*0x56955f*/
        v80 = -1; /*0x56956a*/
        v81 = -1; /*0x569575*/
        v76 = 0; /*0x56957b*/
        v77 = 0; /*0x56957f*/
        v78 = 0; /*0x569583*/
        *(_QWORD *)&v76 = sub_3C460(64); /*0x569594*/
        v77 = 59; /*0x569598*/
        v78 = 63; /*0x5695a0*/
        strcpy((char *)v76, "Finally,<d020> I thought you wou<d010>.<d010>.<d010>.<d030>"); /*0x5695af*/
        v73 = 0; /*0x5695ee*/
        v74 = 7; /*0x5695f2*/
        v75 = 15; /*0x5695fa*/
        strcpy(v72, "Scratch"); /*0x569609*/
        v26 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 10, v25, 0, (__int64)&v80); /*0x56964c*/
        cocos2d::CCArray::addObject(v2, v26); /*0x569657*/
        v79 = &v76; /*0x569661*/
        v80 = -1; /*0x56966c*/
        v81 = -1; /*0x569677*/
        v76 = 0; /*0x56967d*/
        v77 = 0; /*0x569681*/
        v78 = 0; /*0x569685*/
        *(_QWORD *)&v76 = sub_3C460(48); /*0x569693*/
        v77 = 40; /*0x569697*/
        v78 = 47; /*0x56969f*/
        strcpy((char *)v76, "Wait,<d020> You're not the delivery guy."); /*0x5696ae*/
        v73 = 0; /*0x5696cd*/
        v74 = 7; /*0x5696d1*/
        v75 = 15; /*0x5696d9*/
        strcpy(v72, "Scratch"); /*0x5696e8*/
        v28 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 11, v27, 0, (__int64)&v80); /*0x569723*/
        cocos2d::CCArray::addObject(v2, v28); /*0x56972e*/
        v79 = &v76; /*0x569738*/
        v80 = -1; /*0x569743*/
        v81 = -1; /*0x56974e*/
        v76 = 0; /*0x569754*/
        v77 = 0; /*0x569758*/
        v78 = 0; /*0x56975c*/
        *(_QWORD *)&v76 = sub_3C460(80); /*0x56976a*/
        v77 = 64; /*0x56976e*/
        v78 = 79; /*0x569776*/
        strcpy((char *)v76, "How am I supposed to run a shop if I don't have any merchandise?"); /*0x569785*/
        v73 = 0; /*0x5697ad*/
        v74 = 7; /*0x5697b1*/
        v75 = 15; /*0x5697b9*/
        strcpy(v72, "Scratch"); /*0x5697c8*/
        v30 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 12, v29, 0, (__int64)&v80); /*0x569803*/
        cocos2d::CCArray::addObject(v2, v30); /*0x56980e*/
        v79 = &v76; /*0x569818*/
        v80 = -1; /*0x569823*/
        v81 = -1; /*0x56982e*/
        v76 = 0; /*0x569834*/
        v77 = 0; /*0x569838*/
        v78 = 0; /*0x56983c*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x56984a*/
        v77 = 24; /*0x56984e*/
        v78 = 31; /*0x569856*/
        strcpy((char *)v76, "I mean, <d040>what shop?"); /*0x569865*/
        v73 = 0; /*0x569879*/
        v74 = 7; /*0x56987d*/
        v75 = 15; /*0x569885*/
        strcpy(v72, "Scratch"); /*0x569894*/
        v32 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 13, v31, 0, (__int64)&v80); /*0x5698cf*/
        cocos2d::CCArray::addObject(v2, v32); /*0x5698da*/
        v79 = &v76; /*0x5698e4*/
        v80 = -1; /*0x5698ef*/
        v81 = -1; /*0x5698fa*/
        v76 = 0; /*0x569900*/
        v77 = 0; /*0x569904*/
        v78 = 0; /*0x569908*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x569916*/
        v77 = 21; /*0x56991a*/
        v78 = 31; /*0x569922*/
        strcpy((char *)v76, "<d010>.<d010>.<d010>."); /*0x569931*/
        v73 = 0; /*0x56994b*/
        v74 = 7; /*0x56994f*/
        v75 = 15; /*0x569957*/
        strcpy(v72, "Scratch"); /*0x569966*/
        v20 = 8; /*0x569982*/
        goto LABEL_24; /*0x569988*/
      case 3: /*0x569077*/
        v79 = &v76; /*0x569991*/
        v80 = -1; /*0x56999c*/
        v81 = -1; /*0x5699a7*/
        v76 = 0; /*0x5699ad*/
        v77 = 0; /*0x5699b1*/
        v78 = 0; /*0x5699b5*/
        *(_QWORD *)&v76 = sub_3C460(96); /*0x5699c6*/
        v77 = 89; /*0x5699ca*/
        v78 = 95; /*0x5699d2*/
        strcpy( /*0x5699e1*/
          (char *)v76,
          "Look,<d030> I can't let you in.\n<d040>Not without the<d010>.<d010>.<d010>. <cl>stuff</c>.");
        v73 = 0; /*0x569a2b*/
        v74 = 7; /*0x569a2f*/
        v75 = 15; /*0x569a37*/
        strcpy(v72, "Scratch"); /*0x569a46*/
        v34 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 8, v33, 0, (__int64)&v80); /*0x569a89*/
        cocos2d::CCArray::addObject(v2, v34); /*0x569a94*/
        v79 = &v76; /*0x569a9e*/
        v80 = -1; /*0x569aa9*/
        v81 = -1; /*0x569ab4*/
        v76 = 0; /*0x569aba*/
        v77 = 0; /*0x569abe*/
        v78 = 0; /*0x569ac2*/
        *(_QWORD *)&v76 = sub_3C460(80); /*0x569ad0*/
        v77 = 64; /*0x569ad4*/
        v78 = 79; /*0x569adc*/
        strcpy((char *)v76, "I'm not even supposed to be here.\nI'm just a glitch in the code."); /*0x569aeb*/
        v73 = 0; /*0x569b13*/
        v74 = 7; /*0x569b17*/
        v75 = 15; /*0x569b1f*/
        strcpy(v72, "Scratch"); /*0x569b2e*/
        v36 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 13, v35, 0, (__int64)&v80); /*0x569b69*/
        cocos2d::CCArray::addObject(v2, v36); /*0x569b74*/
        v79 = &v76; /*0x569b7e*/
        v80 = -1; /*0x569b89*/
        v81 = -1; /*0x569b94*/
        v76 = 0; /*0x569b9a*/
        v77 = 0; /*0x569b9e*/
        v78 = 0; /*0x569ba2*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x569bb3*/
        v77 = 23; /*0x569bb7*/
        v78 = 31; /*0x569bbf*/
        strcpy((char *)v76, "Did you hear something?"); /*0x569bce*/
        v73 = 0; /*0x569bf3*/
        v74 = 7; /*0x569bf7*/
        v75 = 15; /*0x569bff*/
        strcpy(v72, "Scratch"); /*0x569c0e*/
        v38 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 8, v37, 0, (__int64)&v80); /*0x569c49*/
        cocos2d::CCArray::addObject(v2, v38); /*0x569c54*/
        v79 = &v76; /*0x569c5e*/
        v80 = -1; /*0x569c69*/
        v81 = -1; /*0x569c74*/
        v76 = 0; /*0x569c7a*/
        v77 = 0; /*0x569c7e*/
        v78 = 0; /*0x569c82*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x569c90*/
        v77 = 21; /*0x569c94*/
        v78 = 31; /*0x569c9c*/
        strcpy((char *)v76, "<d010>.<d010>.<d010>."); /*0x569cab*/
        goto LABEL_23; /*0x569cc5*/
      case 4: /*0x569077*/
        v79 = &v76; /*0x569cce*/
        v80 = -1; /*0x569cd9*/
        v81 = -1; /*0x569ce4*/
        v39 = cocos2d::CCString::createWithFormat( /*0x569cf3*/
                "Alright, alright.<d010> If you collect\n<cy>%i</c> <cl>Diamonds</c> I will let you in.",
                500);
        CString = cocos2d::CCString::getCString(v39); /*0x569cfc*/
        v76 = 0; /*0x569d05*/
        v77 = 0; /*0x569d09*/
        v78 = 0; /*0x569d0d*/
        v41 = -1; /*0x569d11*/
        v42 = -1; /*0x569d18*/
        do /*0x569d23*/
          ++v42; /*0x569d20*/
        while ( CString[v42] ); /*0x569d23*/
        sub_3C230(&v76); /*0x569d30*/
        v73 = 0; /*0x569d36*/
        v74 = 7; /*0x569d3a*/
        v75 = 15; /*0x569d42*/
        strcpy(v72, "Scratch"); /*0x569d51*/
        v44 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 10, v43, 0, (__int64)&v80); /*0x569d94*/
        cocos2d::CCArray::addObject(v2, v44); /*0x569d9f*/
        v79 = &v76; /*0x569da9*/
        v80 = -1; /*0x569db4*/
        v81 = -1; /*0x569dbf*/
        v45 = cocos2d::CCString::createWithFormat("Usually the limit is %i, but you look a bit scary.", 1000); /*0x569dce*/
        v46 = cocos2d::CCString::getCString(v45); /*0x569dd7*/
        v76 = 0; /*0x569de0*/
        v77 = 0; /*0x569de4*/
        v78 = 0; /*0x569de8*/
        do /*0x569df3*/
          ++v41; /*0x569df0*/
        while ( v46[v41] ); /*0x569df3*/
        sub_3C230(&v76); /*0x569e03*/
        v73 = 0; /*0x569e09*/
        v74 = 7; /*0x569e0d*/
        v75 = 15; /*0x569e15*/
        strcpy(v72, "Scratch"); /*0x569e24*/
        v48 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 13, v47, 0, (__int64)&v80); /*0x569e5f*/
        cocos2d::CCArray::addObject(v2, v48); /*0x569e6a*/
        v79 = &v76; /*0x569e74*/
        v80 = -1; /*0x569e7f*/
        v81 = -1; /*0x569e8a*/
        v76 = 0; /*0x569e90*/
        v77 = 0; /*0x569e94*/
        v78 = 0; /*0x569e98*/
        *(_QWORD *)&v76 = sub_3C460(64); /*0x569ea9*/
        v77 = 52; /*0x569ead*/
        v78 = 63; /*0x569eb5*/
        strcpy((char *)v76, "Just, <d030>get out of here before someone sees you."); /*0x569ec4*/
        v73 = 0; /*0x569eea*/
        v74 = 7; /*0x569eee*/
        v75 = 15; /*0x569ef6*/
        strcpy(v72, "Scratch"); /*0x569f05*/
        v50 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 11, v49, 0, (__int64)&v80); /*0x569f40*/
        cocos2d::CCArray::addObject(v2, v50); /*0x569f4b*/
        v79 = &v76; /*0x569f55*/
        v80 = -1; /*0x569f60*/
        v81 = -1; /*0x569f6b*/
        v76 = 0; /*0x569f71*/
        v77 = 0; /*0x569f75*/
        v78 = 0; /*0x569f79*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x569f8a*/
        v77 = 29; /*0x569f8e*/
        v78 = 31; /*0x569f96*/
        strcpy((char *)v76, "Do you smell burning chicken?"); /*0x569fa5*/
        v73 = 0; /*0x569fcc*/
        v74 = 7; /*0x569fd0*/
        v75 = 15; /*0x569fd8*/
        strcpy(v72, "Scratch"); /*0x569fe7*/
        v52 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 8, v51, 0, (__int64)&v80); /*0x56a022*/
        cocos2d::CCArray::addObject(v2, v52); /*0x56a02d*/
        v79 = &v76; /*0x56a037*/
        v80 = -1; /*0x56a042*/
        v81 = -1; /*0x56a04d*/
        v76 = 0; /*0x56a053*/
        v77 = 0; /*0x56a057*/
        v78 = 0; /*0x56a05b*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x56a069*/
        v77 = 21; /*0x56a06d*/
        v78 = 31; /*0x56a075*/
        strcpy((char *)v76, "<d010>.<d010>.<d010>."); /*0x56a084*/
        v73 = 0; /*0x56a09e*/
        v74 = 7; /*0x56a0a2*/
        v75 = 15; /*0x56a0aa*/
        strcpy(v72, "Scratch"); /*0x56a0b9*/
        v54 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 9, v53, 0, (__int64)&v80); /*0x56a0f4*/
        cocos2d::CCArray::addObject(v2, v54); /*0x56a0ff*/
        v56 = qword_905FD0; /*0x56a105*/
        if ( !qword_905FD0 ) /*0x56a10f*/
        {
          v79 = (__int128 *)operator new(0x6E8u); /*0x56a11b*/
          qword_905FD0 = sub_2723A0(v79); /*0x56a128*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x56a139*/
          v56 = qword_905FD0; /*0x56a13c*/
        }
        LOBYTE(v55) = 1; /*0x56a143*/
        sub_27B1C0(v56, "10", v55); /*0x56a14d*/
        break; /*0x56a152*/
      case 5: /*0x569077*/
        v79 = &v76; /*0x56a15b*/
        v80 = -1; /*0x56a166*/
        v81 = -1; /*0x56a171*/
        v57 = cocos2d::CCString::createWithFormat("Collect <cy>%i</c> <cl>Diamonds</c> and I will let you in.", 500); /*0x56a180*/
        v58 = cocos2d::CCString::getCString(v57); /*0x56a189*/
        v76 = 0; /*0x56a192*/
        v77 = 0; /*0x56a196*/
        v78 = 0; /*0x56a19a*/
        v59 = -1; /*0x56a19e*/
        do /*0x56a1a8*/
          ++v59; /*0x56a1a5*/
        while ( v58[v59] ); /*0x56a1a8*/
        sub_3C230(&v76); /*0x56a1b8*/
        v73 = 0; /*0x56a1be*/
        v74 = 7; /*0x56a1c2*/
        v75 = 15; /*0x56a1ca*/
        strcpy(v72, "Scratch"); /*0x56a1d9*/
        v61 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 10, v60, 0, (__int64)&v80); /*0x56a219*/
        cocos2d::CCArray::addObject(v2, v61); /*0x56a224*/
        v79 = &v76; /*0x56a22e*/
        v80 = -1; /*0x56a239*/
        v81 = -1; /*0x56a244*/
        v76 = 0; /*0x56a24a*/
        v77 = 0; /*0x56a24e*/
        v78 = 0; /*0x56a252*/
        *(_QWORD *)&v76 = sub_3C460(48); /*0x56a263*/
        v77 = 38; /*0x56a267*/
        v78 = 47; /*0x56a26f*/
        strcpy((char *)v76, "Now go away, RubRub might be watching."); /*0x56a27e*/
        v73 = 0; /*0x56a2a4*/
        v74 = 7; /*0x56a2a8*/
        v75 = 15; /*0x56a2b0*/
        strcpy(v72, "Scratch"); /*0x56a2bf*/
        v63 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, 8, v62, 0, (__int64)&v80); /*0x56a302*/
        cocos2d::CCArray::addObject(v2, v63); /*0x56a30d*/
        v79 = &v76; /*0x56a317*/
        v80 = -1; /*0x56a322*/
        v81 = -1; /*0x56a32d*/
        v76 = 0; /*0x56a333*/
        v77 = 0; /*0x56a337*/
        v78 = 0; /*0x56a33b*/
        *(_QWORD *)&v76 = sub_3C460(32); /*0x56a349*/
        v77 = 21; /*0x56a34d*/
        v78 = 31; /*0x56a355*/
        strcpy((char *)v76, "<d010>.<d010>.<d010>."); /*0x56a364*/
LABEL_23:
        strcpy(v72, "Scratch"); /*0x56a37e*/
        v75 = 15; /*0x56a3a1*/
        v74 = 7; /*0x56a3a9*/
        v73 = 0; /*0x56a3b1*/
        v20 = 9; /*0x56a3b5*/
LABEL_24:
        v64 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v72, (unsigned int)&v76, v20, v19, 0, (__int64)&v80); /*0x56a3bb*/
        cocos2d::CCArray::addObject(v2, v64); /*0x56a3df*/
        break; /*0x56a3df*/
      default:
        break;
    }
    if ( (int)++a1[142] > 5 ) /*0x56a3f4*/
      a1[142] = 0; /*0x56a3f6*/
  }
  DialogLayer = DialogLayer_createDialogLayer(0, v2, 2); /*0x56a40d*/
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x56a426*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)DialogLayer + 64LL))(DialogLayer, 1); /*0x56a438*/
  if ( v6 ) /*0x56a43e*/
    *(_QWORD *)(DialogLayer + 624) = a1 + 102; /*0x56a447*/
  v67 = cocos2d::CCDirector::sharedDirector(v66); /*0x56a44e*/
  cocos2d::CCDirector::getWinSize(v67, &v79); /*0x56a45b*/
  v68 = **(_QWORD **)(DialogLayer + 560); /*0x56a468*/
  v69 = *(_QWORD *)(DialogLayer + 560); /*0x56a46b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v80, *(float *)&v79 * 0.5, *((float *)&v79 + 1) * 0.5); /*0x56a48c*/
  (*(void (__fastcall **)(__int64, __int64))(v68 + 184))(v69, v70); /*0x56a498*/
  return sub_173300(DialogLayer); /*0x56a4a1*/
}

// [17/17] Address: 0x56b780
// Method: SecretRewardsLayer::showDialogMechanic
// Hidden C++ exception states: #wind=4
__int64 __fastcall SecretRewardsLayer_showDialogMechanic(_DWORD *a1)
{
  cocos2d::CCArray *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  int Stat; // r14d
  __int64 v6; // rcx
  char v7; // r15
  int v8; // r9d
  struct cocos2d::CCObject *v9; // rax
  int v10; // r9d
  struct cocos2d::CCObject *v11; // rax
  int v12; // r9d
  struct cocos2d::CCObject *v13; // rax
  int v14; // r9d
  struct cocos2d::CCObject *v15; // rax
  int v16; // r9d
  struct cocos2d::CCObject *v17; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // r9d
  struct cocos2d::CCObject *v23; // rax
  cocos2d::CCString *v24; // rax
  const char *v25; // rax
  __int64 v26; // r8
  int v27; // r9d
  struct cocos2d::CCObject *v28; // rax
  int v29; // r9d
  struct cocos2d::CCObject *v30; // rax
  int v31; // r9d
  int v32; // r8d
  int v33; // r9d
  struct cocos2d::CCObject *v34; // rax
  cocos2d::CCString *v35; // rax
  const char *CString; // rax
  __int64 v37; // r8
  int v38; // r9d
  struct cocos2d::CCObject *v39; // rax
  int v40; // r9d
  struct cocos2d::CCObject *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  int v44; // r9d
  struct cocos2d::CCObject *v45; // rax
  int v46; // r9d
  struct cocos2d::CCObject *v47; // rax
  int v48; // r9d
  struct cocos2d::CCObject *v49; // rax
  int v50; // r9d
  struct cocos2d::CCObject *v51; // rax
  struct cocos2d::CCObject *v52; // rax
  __int64 DialogLayer; // r14
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rax
  __int128 v60; // [rsp+30h] [rbp-50h] BYREF
  __int64 v61; // [rsp+40h] [rbp-40h]
  __int64 v62; // [rsp+48h] [rbp-38h]
  __int128 v63; // [rsp+50h] [rbp-30h] BYREF
  __int64 v64; // [rsp+60h] [rbp-20h]
  __int64 v65; // [rsp+68h] [rbp-18h]
  __int128 *v66; // [rsp+B8h] [rbp+38h] BYREF
  __int16 v67; // [rsp+C0h] [rbp+40h] BYREF
  char v68; // [rsp+C2h] [rbp+42h]

  v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x56b7a4*/
  v3 = qword_905FE0; /*0x56b7a7*/
  if ( !qword_905FE0 ) /*0x56b7b1*/
  {
    v66 = (__int128 *)operator new(0x3E8u); /*0x56b7bd*/
    qword_905FE0 = sub_2D2B40(v66); /*0x56b7ca*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x56b7db*/
    v3 = qword_905FE0; /*0x56b7dd*/
  }
  Stat = GameStatsManager_getStat(v3, "13"); /*0x56b7f0*/
  if ( Stat >= 2000 ) /*0x56b7f8*/
  {
    v6 = qword_905FD0; /*0x56b7fe*/
    if ( !qword_905FD0 ) /*0x56b808*/
    {
      v66 = (__int128 *)operator new(0x6E8u); /*0x56b814*/
      qword_905FD0 = sub_2723A0(v66); /*0x56b821*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x56b832*/
      v6 = qword_905FD0; /*0x56b834*/
    }
    if ( (unsigned __int8)sub_27B350(v6, &word_75553C, v4) ) /*0x56b842*/
    {
      v7 = 1; /*0x56b84f*/
      v66 = &v60; /*0x56b856*/
      v67 = -1; /*0x56b861*/
      v68 = -1; /*0x56b86c*/
      v60 = 0; /*0x56b872*/
      v61 = 0; /*0x56b878*/
      v62 = 0; /*0x56b87c*/
      *(_QWORD *)&v60 = sub_3C460(64); /*0x56b88a*/
      v61 = 56; /*0x56b88e*/
      v62 = 63; /*0x56b896*/
      strcpy((char *)v60, "Now that's an impressive collection of <cl>Diamonds</c>!"); /*0x56b8a5*/
      v64 = 12; /*0x56b8d5*/
      v65 = 15; /*0x56b8dd*/
      strcpy((char *)&v63, "The Mechanic"); /*0x56b8ed*/
      BYTE13(v63) = 0; /*0x56b8f8*/
      HIWORD(v63) = 0; /*0x56b8f8*/
      v9 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v63, (unsigned int)&v60, 39, v8, 0, (__int64)&v67); /*0x56b924*/
      cocos2d::CCArray::addObject(v2, v9); /*0x56b92f*/
      v66 = &v63; /*0x56b939*/
      v67 = -1; /*0x56b944*/
      v68 = -1; /*0x56b94f*/
      v63 = 0; /*0x56b955*/
      v64 = 0; /*0x56b959*/
      v65 = 0; /*0x56b95d*/
      *(_QWORD *)&v63 = sub_3C460(48); /*0x56b96e*/
      v64 = 35; /*0x56b972*/
      v65 = 47; /*0x56b97a*/
      strcpy((char *)v63, "If anyone asks I didn't let you in."); /*0x56b989*/
      v61 = 12; /*0x56b9b6*/
      v62 = 15; /*0x56b9be*/
      strcpy((char *)&v60, "The Mechanic"); /*0x56b9ce*/
      BYTE13(v60) = 0; /*0x56b9d9*/
      HIWORD(v60) = 0; /*0x56b9d9*/
      v11 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 37, v10, 0, (__int64)&v67); /*0x56b9fd*/
      cocos2d::CCArray::addObject(v2, v11); /*0x56ba08*/
      v66 = &v63; /*0x56ba12*/
      v67 = -1; /*0x56ba1d*/
      v68 = -1; /*0x56ba28*/
      v63 = 0; /*0x56ba2e*/
      v64 = 0; /*0x56ba32*/
      v65 = 0; /*0x56ba36*/
      *(_QWORD *)&v63 = sub_3C460(80); /*0x56ba47*/
      v64 = 67; /*0x56ba4b*/
      v65 = 79; /*0x56ba53*/
      strcpy((char *)v63, "Scratch keeps trying to sneak past my security<d010>.<d010>.<d010>."); /*0x56ba62*/
      v61 = 12; /*0x56baa5*/
      v62 = 15; /*0x56baad*/
      strcpy((char *)&v60, "The Mechanic"); /*0x56babd*/
      BYTE13(v60) = 0; /*0x56bac8*/
      HIWORD(v60) = 0; /*0x56bac8*/
      v13 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 50, v12, 0, (__int64)&v67); /*0x56baec*/
      cocos2d::CCArray::addObject(v2, v13); /*0x56baf7*/
      v66 = &v63; /*0x56bb01*/
      v67 = -1; /*0x56bb0c*/
      v68 = -1; /*0x56bb17*/
      v63 = 0; /*0x56bb1d*/
      v64 = 0; /*0x56bb21*/
      v65 = 0; /*0x56bb25*/
      *(_QWORD *)&v63 = sub_3C460(48); /*0x56bb33*/
      v64 = 41; /*0x56bb37*/
      v65 = 47; /*0x56bb3f*/
      strcpy((char *)v63, "<i050><s260><co>I CAN'T SEE!?</c></s></i>"); /*0x56bb4e*/
      v61 = 12; /*0x56bb7d*/
      v62 = 15; /*0x56bb85*/
      strcpy((char *)&v60, "The Mechanic"); /*0x56bb95*/
      BYTE13(v60) = 0; /*0x56bba0*/
      HIWORD(v60) = 0; /*0x56bba0*/
      v15 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 44, v14, 0, (__int64)&v67); /*0x56bbc4*/
      cocos2d::CCArray::addObject(v2, v15); /*0x56bbcf*/
      v66 = &v63; /*0x56bbd9*/
      v67 = -1; /*0x56bbe4*/
      v68 = -1; /*0x56bbef*/
      v63 = 0; /*0x56bbf5*/
      v64 = 0; /*0x56bbf9*/
      v65 = 0; /*0x56bbfd*/
      *(_QWORD *)&v63 = sub_3C460(64); /*0x56bc0e*/
      v64 = 61; /*0x56bc12*/
      v65 = 63; /*0x56bc1a*/
      strcpy((char *)v63, "Ah sorry, <d020>my <cg>goggles</c> were off.\n<co>Come in</c>."); /*0x56bc29*/
      v61 = 12; /*0x56bc6c*/
      v62 = 15; /*0x56bc74*/
      strcpy((char *)&v60, "The Mechanic"); /*0x56bc84*/
      BYTE13(v60) = 0; /*0x56bc8f*/
      HIWORD(v60) = 0; /*0x56bc8f*/
      v17 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 51, v16, 0, (__int64)&v67); /*0x56bcb3*/
      cocos2d::CCArray::addObject(v2, v17); /*0x56bcbe*/
      goto LABEL_28; /*0x56bcc4*/
    }
  }
  v7 = 0; /*0x56bcc9*/
  v18 = a1[145]; /*0x56bccc*/
  if ( !v18 ) /*0x56bcd6*/
  {
    v66 = &v63; /*0x56c744*/
    v67 = -1; /*0x56c74f*/
    v68 = -1; /*0x56c75a*/
    v63 = 0; /*0x56c760*/
    v64 = 0; /*0x56c764*/
    v65 = 0; /*0x56c768*/
    *(_QWORD *)&v63 = sub_3C460(48); /*0x56c779*/
    v64 = 44; /*0x56c77d*/
    v65 = 47; /*0x56c785*/
    strcpy((char *)v63, "I'm in the middle of a job.\nCome back later."); /*0x56c794*/
    v61 = 12; /*0x56c7c2*/
    v62 = 15; /*0x56c7ca*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c7da*/
    BYTE13(v60) = 0; /*0x56c7e5*/
    HIWORD(v60) = 0; /*0x56c7e5*/
    v51 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 38, v50, 0, (__int64)&v67); /*0x56c813*/
    cocos2d::CCArray::addObject(v2, v51); /*0x56c81e*/
    v66 = &v63; /*0x56c828*/
    v67 = -1; /*0x56c833*/
    v68 = -1; /*0x56c83e*/
    v63 = 0; /*0x56c844*/
    v64 = 0; /*0x56c848*/
    v65 = 0; /*0x56c84c*/
    *(_QWORD *)&v63 = sub_3C460(64); /*0x56c85d*/
    v64 = 57; /*0x56c861*/
    v65 = 63; /*0x56c869*/
    strcpy((char *)v63, "<cl>Can never get any peace and quiet in this game...</c>"); /*0x56c878*/
    goto LABEL_24; /*0x56c878*/
  }
  v19 = v18 - 1; /*0x56bcdc*/
  if ( !v19 ) /*0x56bcdf*/
  {
    v66 = &v63; /*0x56c4fa*/
    v67 = -1; /*0x56c505*/
    v68 = -1; /*0x56c510*/
    v63 = 0; /*0x56c516*/
    v64 = 0; /*0x56c51a*/
    v65 = 0; /*0x56c51e*/
    *(_QWORD *)&v63 = sub_3C460(32); /*0x56c52f*/
    v64 = 30; /*0x56c533*/
    v65 = 31; /*0x56c53b*/
    strcpy((char *)v63, "<co>You again!? What now!?</c>"); /*0x56c54a*/
    v61 = 12; /*0x56c578*/
    v62 = 15; /*0x56c580*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c590*/
    BYTE13(v60) = 0; /*0x56c59b*/
    HIWORD(v60) = 0; /*0x56c59b*/
    v47 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 46, v46, 0, (__int64)&v67); /*0x56c5c9*/
    cocos2d::CCArray::addObject(v2, v47); /*0x56c5d4*/
    v66 = &v63; /*0x56c5de*/
    v67 = -1; /*0x56c5e9*/
    v68 = -1; /*0x56c5f4*/
    v63 = 0; /*0x56c5fa*/
    v64 = 0; /*0x56c5fe*/
    v65 = 0; /*0x56c602*/
    *(_QWORD *)&v63 = sub_3C460(48); /*0x56c610*/
    v64 = 32; /*0x56c614*/
    v65 = 47; /*0x56c61c*/
    strcpy((char *)v63, "I'm busy go bother someone else."); /*0x56c62b*/
    v61 = 12; /*0x56c644*/
    v62 = 15; /*0x56c64c*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c65c*/
    BYTE13(v60) = 0; /*0x56c667*/
    HIWORD(v60) = 0; /*0x56c667*/
    v49 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 51, v48, 0, (__int64)&v67); /*0x56c68d*/
    cocos2d::CCArray::addObject(v2, v49); /*0x56c698*/
    v66 = &v63; /*0x56c6a2*/
    v67 = -1; /*0x56c6ad*/
    v68 = -1; /*0x56c6b8*/
    v63 = 0; /*0x56c6be*/
    v64 = 0; /*0x56c6c2*/
    v65 = 0; /*0x56c6c6*/
    *(_QWORD *)&v63 = sub_3C460(80); /*0x56c6d7*/
    v64 = 78; /*0x56c6db*/
    v65 = 79; /*0x56c6e3*/
    strcpy((char *)v63, "<cl>You take one job then all of a sudden you're bugfixing the whole game.</c>"); /*0x56c6f2*/
LABEL_24:
    BYTE13(v60) = 0; /*0x56c8ac*/
    HIWORD(v60) = 0; /*0x56c8c5*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c8c8*/
    v62 = 15; /*0x56c8cd*/
    v61 = 12; /*0x56c8d5*/
    v32 = 37; /*0x56c8dd*/
    goto LABEL_25; /*0x56c8dd*/
  }
  v20 = v19 - 1; /*0x56bce5*/
  if ( !v20 ) /*0x56bce8*/
  {
    v66 = &v63; /*0x56c353*/
    v67 = -1; /*0x56c35e*/
    v68 = -1; /*0x56c369*/
    v63 = 0; /*0x56c36f*/
    v64 = 0; /*0x56c373*/
    v65 = 0; /*0x56c377*/
    *(_QWORD *)&v63 = sub_3C460(80); /*0x56c388*/
    v64 = 65; /*0x56c38c*/
    v65 = 79; /*0x56c394*/
    strcpy((char *)v63, "<cl>Hmm so if I push here<d010>.<d010>.<d010>.<d040> maybe...</c>"); /*0x56c3a3*/
    v61 = 12; /*0x56c3db*/
    v62 = 15; /*0x56c3e3*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c3f3*/
    BYTE13(v60) = 0; /*0x56c3fe*/
    HIWORD(v60) = 0; /*0x56c3fe*/
    v45 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 45, v44, 0, (__int64)&v67); /*0x56c42c*/
    cocos2d::CCArray::addObject(v2, v45); /*0x56c437*/
    v66 = &v63; /*0x56c441*/
    v67 = -1; /*0x56c44c*/
    v68 = -1; /*0x56c457*/
    v63 = 0; /*0x56c45d*/
    v64 = 0; /*0x56c461*/
    v65 = 0; /*0x56c465*/
    *(_QWORD *)&v63 = sub_3C460(32); /*0x56c476*/
    v64 = 27; /*0x56c47a*/
    v65 = 31; /*0x56c482*/
    strcpy((char *)v63, "<cl>No, still broken...</c>"); /*0x56c491*/
    v61 = 12; /*0x56c4c1*/
    v62 = 15; /*0x56c4c9*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c4d9*/
    BYTE13(v60) = 0; /*0x56c4e4*/
    HIWORD(v60) = 0; /*0x56c4e4*/
    v32 = 49; /*0x56c4eb*/
LABEL_25:
    v52 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, v32, v31, 0, (__int64)&v67); /*0x56c8e3*/
    cocos2d::CCArray::addObject(v2, v52); /*0x56c907*/
    goto LABEL_26; /*0x56c907*/
  }
  v21 = v20 - 1; /*0x56bcee*/
  if ( !v21 ) /*0x56bcf1*/
  {
    v66 = &v63; /*0x56c05c*/
    v67 = -1; /*0x56c067*/
    v68 = -1; /*0x56c072*/
    v63 = 0; /*0x56c078*/
    v64 = 0; /*0x56c07c*/
    v65 = 0; /*0x56c080*/
    *(_QWORD *)&v63 = sub_3C460(64); /*0x56c091*/
    v64 = 62; /*0x56c095*/
    v65 = 63; /*0x56c09d*/
    strcpy((char *)v63, "I have enough work as it is, can't go around helping everyone."); /*0x56c0ac*/
    v61 = 12; /*0x56c0f0*/
    v62 = 15; /*0x56c0f8*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c108*/
    BYTE13(v60) = 0; /*0x56c113*/
    HIWORD(v60) = 0; /*0x56c113*/
    v34 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 51, v33, 0, (__int64)&v67); /*0x56c141*/
    cocos2d::CCArray::addObject(v2, v34); /*0x56c14c*/
    v66 = &v60; /*0x56c156*/
    v67 = -1; /*0x56c161*/
    v68 = -1; /*0x56c16c*/
    v35 = cocos2d::CCString::createWithFormat( /*0x56c17b*/
            "Collect <cy>%i</c> <cl>Diamonds</c> so I know you're legit, then we can talk.",
            2000);
    CString = cocos2d::CCString::getCString(v35); /*0x56c184*/
    v60 = 0; /*0x56c18d*/
    v61 = 0; /*0x56c191*/
    v62 = 0; /*0x56c195*/
    v37 = -1; /*0x56c199*/
    do /*0x56c1a3*/
      ++v37; /*0x56c1a0*/
    while ( CString[v37] ); /*0x56c1a3*/
    sub_3C230(&v60); /*0x56c1b1*/
    v64 = 12; /*0x56c1be*/
    v65 = 15; /*0x56c1c6*/
    strcpy((char *)&v63, "The Mechanic"); /*0x56c1d6*/
    BYTE13(v63) = 0; /*0x56c1e1*/
    HIWORD(v63) = 0; /*0x56c1e1*/
    v39 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v63, (unsigned int)&v60, 37, v38, 0, (__int64)&v67); /*0x56c207*/
    cocos2d::CCArray::addObject(v2, v39); /*0x56c212*/
    v66 = &v63; /*0x56c21c*/
    v67 = -1; /*0x56c227*/
    v68 = -1; /*0x56c232*/
    v63 = 0; /*0x56c238*/
    v64 = 0; /*0x56c23c*/
    v65 = 0; /*0x56c240*/
    *(_QWORD *)&v63 = sub_3C460(64); /*0x56c251*/
    v64 = 53; /*0x56c255*/
    v65 = 63; /*0x56c25d*/
    strcpy((char *)v63, "<cl>Who ordered this thing it doesn't even fit...</c>"); /*0x56c26c*/
    v61 = 12; /*0x56c2a3*/
    v62 = 15; /*0x56c2ab*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c2bb*/
    BYTE13(v60) = 0; /*0x56c2c6*/
    HIWORD(v60) = 0; /*0x56c2c6*/
    v41 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 49, v40, 0, (__int64)&v67); /*0x56c2ec*/
    cocos2d::CCArray::addObject(v2, v41); /*0x56c2f7*/
    v43 = qword_905FD0; /*0x56c2fd*/
    if ( !qword_905FD0 ) /*0x56c307*/
    {
      v66 = (__int128 *)operator new(0x6E8u); /*0x56c313*/
      qword_905FD0 = sub_2723A0(v66); /*0x56c320*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x56c331*/
      v43 = qword_905FD0; /*0x56c334*/
    }
    LOBYTE(v42) = 1; /*0x56c33b*/
    sub_27B1C0(v43, &word_75553C, v42); /*0x56c345*/
    goto LABEL_26; /*0x56c34a*/
  }
  if ( v21 == 1 )
  {
    v66 = &v63; /*0x56bd04*/
    v67 = -1; /*0x56bd0f*/
    v68 = -1; /*0x56bd1a*/
    v63 = 0; /*0x56bd20*/
    v64 = 0; /*0x56bd24*/
    v65 = 0; /*0x56bd28*/
    *(_QWORD *)&v63 = sub_3C460(48); /*0x56bd39*/
    v64 = 42; /*0x56bd3d*/
    v65 = 47; /*0x56bd45*/
    strcpy((char *)v63, "<cg>Scanning user<d010>.<d010>.<d010>.</c>"); /*0x56bd54*/
    v61 = 12; /*0x56bd84*/
    v62 = 15; /*0x56bd8c*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56bd9c*/
    BYTE13(v60) = 0; /*0x56bda7*/
    HIWORD(v60) = 0; /*0x56bda7*/
    v23 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 49, v22, 0, (__int64)&v67); /*0x56bdd3*/
    cocos2d::CCArray::addObject(v2, v23); /*0x56bdde*/
    v66 = &v60; /*0x56bde8*/
    v67 = -1; /*0x56bdf3*/
    v68 = -1; /*0x56bdfe*/
    v24 = cocos2d::CCString::createWithFormat(
            "<cg>Scan complete.</c>\nDiamonds: <cc>%i</c>, Required: <cy>%i</c>",
            Stat,
            2000);
    v25 = cocos2d::CCString::getCString(v24); /*0x56be1a*/
    v60 = 0; /*0x56be23*/
    v61 = 0; /*0x56be27*/
    v62 = 0; /*0x56be2b*/
    v26 = -1; /*0x56be2f*/
    do /*0x56be39*/
      ++v26; /*0x56be36*/
    while ( v25[v26] ); /*0x56be39*/
    sub_3C230(&v60); /*0x56be47*/
    v64 = 12; /*0x56be54*/
    v65 = 15; /*0x56be5c*/
    strcpy((char *)&v63, "The Mechanic"); /*0x56be6c*/
    BYTE13(v63) = 0; /*0x56be77*/
    HIWORD(v63) = 0; /*0x56be77*/
    v28 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v63, (unsigned int)&v60, 45, v27, 0, (__int64)&v67); /*0x56be9d*/
    cocos2d::CCArray::addObject(v2, v28); /*0x56bea8*/
    v66 = &v63; /*0x56beb2*/
    v67 = -1; /*0x56bebd*/
    v68 = -1; /*0x56bec8*/
    v63 = 0; /*0x56bece*/
    v64 = 0; /*0x56bed2*/
    v65 = 0; /*0x56bed6*/
    *(_QWORD *)&v63 = sub_3C460(48); /*0x56bee4*/
    v64 = 40; /*0x56bee8*/
    v65 = 47; /*0x56bef0*/
    strcpy((char *)v63, "<co>Hey who are you trying to fool?!</c>"); /*0x56beff*/
    v61 = 12; /*0x56bf25*/
    v62 = 15; /*0x56bf2d*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56bf3d*/
    BYTE13(v60) = 0; /*0x56bf48*/
    HIWORD(v60) = 0; /*0x56bf48*/
    v30 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v60, (unsigned int)&v63, 46, v29, 0, (__int64)&v67); /*0x56bf6e*/
    cocos2d::CCArray::addObject(v2, v30); /*0x56bf79*/
    v66 = &v63; /*0x56bf83*/
    v67 = -1; /*0x56bf8e*/
    v68 = -1; /*0x56bf99*/
    v63 = 0; /*0x56bf9f*/
    v64 = 0; /*0x56bfa3*/
    v65 = 0; /*0x56bfa7*/
    *(_QWORD *)&v63 = sub_3C460(96); /*0x56bfb8*/
    v64 = 92; /*0x56bfbc*/
    v65 = 95; /*0x56bfc4*/
    strcpy((char *)v63, "<cg>Come back</c> when you have\n<cy>collected</c> more <cl>Diamonds</c><d010>.<d010>.<d010>."); /*0x56bfd3*/
    v61 = 12; /*0x56c023*/
    v62 = 15; /*0x56c02b*/
    strcpy((char *)&v60, "The Mechanic"); /*0x56c03b*/
    BYTE13(v60) = 0; /*0x56c046*/
    HIWORD(v60) = 0; /*0x56c046*/
    v32 = 50; /*0x56c04d*/
    goto LABEL_25; /*0x56c053*/
  }
LABEL_26:
  if ( (int)++a1[145] > 4 ) /*0x56c91a*/
    a1[145] = 0; /*0x56c91c*/
LABEL_28:
  DialogLayer = DialogLayer_createDialogLayer(0, v2, 4); /*0x56c922*/
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x56c94b*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)DialogLayer + 64LL))(DialogLayer, 4); /*0x56c95d*/
  if ( v7 ) /*0x56c963*/
    *(_QWORD *)(DialogLayer + 624) = a1 + 102; /*0x56c96c*/
  v55 = cocos2d::CCDirector::sharedDirector(v54); /*0x56c973*/
  cocos2d::CCDirector::getWinSize(v55, &v66); /*0x56c980*/
  v56 = **(_QWORD **)(DialogLayer + 560); /*0x56c98d*/
  v57 = *(_QWORD *)(DialogLayer + 560); /*0x56c990*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v67, *(float *)&v66 * 0.5, *((float *)&v66 + 1) * 0.5); /*0x56c9b1*/
  (*(void (__fastcall **)(__int64, __int64))(v56 + 184))(v57, v58); /*0x56c9bd*/
  return sub_173300(DialogLayer); /*0x56c9c6*/
}
