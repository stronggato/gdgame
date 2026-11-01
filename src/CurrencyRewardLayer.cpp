#include <Geode/binding/CurrencyRewardLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0xa4510
// Method: CurrencyRewardLayer::createObjectsFull
// Hidden C++ exception states: #wind=5
char __fastcall CurrencyRewardLayer_createObjectsFull(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        _QWORD *a7,
        size_t *a8)
{
  void *v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // r9d
  int v15; // ecx
  int v16; // eax
  float v17; // xmm3_4
  int v18; // r12d
  float v19; // xmm13_4
  float v20; // xmm2_4
  float v21; // xmm11_4
  float v22; // xmm10_4
  void *v23; // rdx
  float v24; // xmm12_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  __int64 v27; // r8
  float v28; // xmm8_4
  __int64 v29; // rbx
  const struct cocos2d::CCPoint *v30; // rax
  char *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  float v34; // xmm8_4
  __int64 v35; // rax
  __int64 v36; // rax
  void **v37; // rcx
  cocos2d::CCLabelBMFont *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  void *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  float v59; // xmm8_4
  float v60; // xmm8_4
  struct cocos2d::CCLabelBMFont *v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rax
  float v64; // xmm8_4
  __int64 v65; // rax
  float v66; // xmm2_4
  __int64 v67; // r8
  __int64 v68; // rdx
  int v69; // ecx
  float v70; // xmm9_4
  __int64 v71; // rax
  cocos2d::CCObject *v72; // rbx
  const char *v73; // r12
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rax
  cocos2d::CCObject *v79; // rbx
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rax
  __int128 *v86; // [rsp+70h] [rbp-90h] BYREF
  void *v87; // [rsp+78h] [rbp-88h] BYREF
  float v88; // [rsp+80h] [rbp-80h] BYREF
  float v89; // [rsp+84h] [rbp-7Ch]
  __int64 v90; // [rsp+88h] [rbp-78h] BYREF
  void *Block[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v92; // [rsp+A0h] [rbp-60h]
  __int128 v93; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-40h]
  __int64 v95; // [rsp+C8h] [rbp-38h]

  LODWORD(v86) = a3; /*0xa4581*/
  Block[0] = a5; /*0xa4593*/
  v90 = a6; /*0xa459e*/
  if ( !a2 ) /*0xa45b3*/
    return 0; /*0xa45b3*/
  v11 = (void *)a8[2]; /*0xa45b9*/
  v87 = v11; /*0xa45bd*/
  v12 = (__int64)(a7[1] - *a7) >> 2; /*0xa45ca*/
  v13 = cocos2d::CCDirector::sharedDirector(a1); /*0xa45ce*/
  cocos2d::CCDirector::getWinSize(v13, &v88); /*0xa45db*/
  v15 = 0; /*0xa45e1*/
  if ( (int)v12 > 0 ) /*0xa45eb*/
    v15 = 26; /*0xa45eb*/
  v16 = 156; /*0xa45ee*/
  if ( v11 ) /*0xa45fb*/
    v16 = 174; /*0xa45fb*/
  v17 = (float)(v16 + v15); /*0xa4604*/
  if ( (int)v12 <= 5 ) /*0xa460b*/
    v18 = v12; /*0xa461b*/
  else
    v18 = ((int)v12 + 1) / 2; /*0xa4616*/
  v19 = 24.0; /*0xa4627*/
  if ( v18 > 0 ) /*0xa4636*/
  {
    v20 = fmaxf(12.0, (float)((float)(v89 - 20.0) - v17) / (float)v18); /*0xa4659*/
    if ( v20 <= 24.0 ) /*0xa4661*/
      v19 = v20; /*0xa4663*/
  }
  v21 = v19 / 24.0; /*0xa466b*/
  v22 = (float)((float)v18 * v19) + v17; /*0xa467e*/
  if ( !(unsigned __int8)sub_6060E0(a1, 0, 0, v14, LODWORD(v22), 1, 0) ) /*0xa46ad*/
    return 0; /*0xa4f0d*/
  *(_QWORD *)(a1 + 1000) = a2; /*0xa46ba*/
  *(_DWORD *)(a1 + 1008) = (_DWORD)v86; /*0xa46c5*/
  if ( (size_t *)(a1 + 1016) != a8 ) /*0xa46d6*/
  {
    v23 = a8; /*0xa46d8*/
    if ( a8[3] > 0xF ) /*0xa46e0*/
      v23 = (void *)*a8; /*0xa46e2*/
    sub_3F5A0((void *)(a1 + 1016), v23, a8[2]); /*0xa46e9*/
  }
  v24 = v88 * 0.5; /*0xa46fc*/
  v25 = (float)(v89 * 0.5) + 0.0; /*0xa470c*/
  v26 = v22 * 0.5; /*0xa4711*/
  v93 = 0; /*0xa4722*/
  v94 = 0; /*0xa4728*/
  v95 = 0; /*0xa472c*/
  v27 = -1; /*0xa4730*/
  do /*0xa473a*/
    ++v27; /*0xa4737*/
  while ( *(_BYTE *)(a4 + v27) ); /*0xa473a*/
  sub_3C230(&v93); /*0xa4747*/
  sub_606E80(a1, &v93); /*0xa4753*/
  v28 = (float)(v25 + v26) - 52.0; /*0xa4758*/
  v86 = &v93; /*0xa4765*/
  v29 = sub_3E4F0(&v93, Block[0]); /*0xa4777*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.5, 0.5); /*0xa4784*/
  v31 = TextArea_create(v29, "chatFont.fnt", 1.0, 300.0, v30, 1101004800, 0, 0); /*0xa47c1*/
  (*(void (__fastcall **)(char *))(*(_QWORD *)v31 + 160LL))(v31); /*0xa47d9*/
  v32 = *(_QWORD *)v31; /*0xa47db*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, v24, v28); /*0xa47eb*/
  (*(void (__fastcall **)(char *, __int64))(v32 + 184))(v31, v33); /*0xa47f7*/
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v31, 1); /*0xa4810*/
  v34 = v28 - 32.0; /*0xa4816*/
  if ( v87 )
  {
    v35 = sub_6F1E0(&v93, a8, 60); /*0xa4838*/
    v36 = sub_58C00(v35, 0, "Reason: ", 8);
    *(_OWORD *)Block = 0; /*0xa4858*/
    v92 = 0u; /*0xa485e*/
    *(_OWORD *)Block = *(_OWORD *)v36; /*0xa4869*/
    v92 = *(_OWORD *)(v36 + 16); /*0xa4871*/
    *(_QWORD *)(v36 + 16) = 0; /*0xa4875*/
    *(_QWORD *)(v36 + 24) = 15; /*0xa4879*/
    *(_BYTE *)v36 = 0; /*0xa4881*/
    sub_3C310(&v93); /*0xa4888*/
    v37 = Block; /*0xa488d*/
    if ( *((_QWORD *)&v92 + 1) > 0xFu ) /*0xa4896*/
      v37 = (void **)Block[0]; /*0xa4896*/
    v38 = cocos2d::CCLabelBMFont::create((const char *)v37, "chatFont.fnt"); /*0xa48a8*/
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v38 + 160LL))(v38); /*0xa48c3*/
    LOWORD(v86) = -11521; /*0xa48d1*/
    BYTE2(v86) = 60; /*0xa48d6*/
    (**((void (__fastcall ***)(__int64, __int128 **))v38 + 46))((__int64)v38 + 368, &v86); /*0xa48ea*/
    cocos2d::CCLabelBMFont::limitLabelWidth(v38, 300.0, 0.55000001, 0.30000001); /*0xa48fd*/
    v39 = *(_QWORD *)v38; /*0xa4903*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, v24, v34); /*0xa4913*/
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v39 + 184))(v38, v40); /*0xa491f*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0xa4938*/
      *(_QWORD *)(a1 + 584),
      v38,
      1);
    v34 = v34 + -18.0; /*0xa493e*/
    if ( *((_QWORD *)&v92 + 1) > 0xFu ) /*0xa494f*/
    {
      v41 = Block[0]; /*0xa4954*/
      if ( (unsigned __int64)(*((_QWORD *)&v92 + 1) + 1LL) >= 0x1000 ) /*0xa4962*/
      {
        v41 = (void *)*((_QWORD *)Block[0] - 1); /*0xa4968*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v41 - 8) > 0x1F ) /*0xa4977*/
          invoke_watson(0, 0, 0, 0, 0); /*0xa4988*/
      }
      j_j_free(v41); /*0xa498f*/
    }
  }
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)Block, 0.0, 0.0, 40.0, 40.0); /*0xa49b2*/
  v43 = cocos2d::extension::CCScale9Sprite::create("square02b_small.png", v42); /*0xa49c8*/
  v44 = *(_QWORD *)v43; /*0xa49cb*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v87, 300.0, 26.0); /*0xa49e6*/
  (*(void (__fastcall **)(__int64, __int64))(v44 + 312))(v43, v45); /*0xa49f2*/
  LOWORD(v86) = 13405; /*0xa4a04*/
  BYTE2(v86) = 31; /*0xa4a09*/
  (**(void (__fastcall ***)(__int64, __int128 **))(v43 + 320))(v43 + 320, &v86); /*0xa4a1d*/
  v46 = *(_QWORD *)v43; /*0xa4a1f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, v24, v34 - 10.0); /*0xa4a3a*/
  (*(void (__fastcall **)(__int64, __int64))(v46 + 184))(v43, v47); /*0xa4a46*/
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v43, 0); /*0xa4a5c*/
  v50 = (__int64 *)sub_6F750(v49, v48, "Reason (optional)", 255); /*0xa4a7f*/
  *(_QWORD *)(a1 + 1048) = v50; /*0xa4a82*/
  v51 = *v50; /*0xa4a89*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, v24, v34 - 10.0); /*0xa4a98*/
  (*(void (__fastcall **)(__int64 *, __int64))(v51 + 184))(v50, v52); /*0xa4aa4*/
  v53 = *(_QWORD *)(a1 + 1048); /*0xa4aaa*/
  *(_DWORD *)(v53 + 572) = 1063675494; /*0xa4ab1*/
  sub_555B0(v53, v54); /*0xa4abb*/
  v55 = *(_QWORD *)(a1 + 1048); /*0xa4ac0*/
  *(_DWORD *)(v55 + 568) = 1133379584; /*0xa4ac7*/
  sub_555B0(v55, v56); /*0xa4ad1*/
  *(_OWORD *)Block = 0; /*0xa4ad9*/
  v92 = 0u; /*0xa4add*/
  Block[0] = (void *)sub_3C460(80); /*0xa4af2*/
  *(_QWORD *)&v92 = 75; /*0xa4af6*/
  *((_QWORD *)&v92 + 1) = 79; /*0xa4afe*/
  strcpy((char *)Block[0], "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,!?'\"-:;()/"); /*0xa4b0d*/
  GameManager_getMenuMusicFile(*(_DWORD **)(a1 + 1048), Block); /*0xa4b62*/
  v57 = *(_QWORD *)(a1 + 1048); /*0xa4b67*/
  *(_DWORD *)(v57 + 576) = 1061997773; /*0xa4b6e*/
  sub_555B0(v57, v58); /*0xa4b78*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1048) + 608LL) = a1 + 544; /*0xa4b8b*/
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0xa4ba9*/
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 1048),
    5);
  v59 = v34 + -30.0; /*0xa4baf*/
  if ( (int)v12 > 0 ) /*0xa4bbb*/
  {
    v60 = v59 - 5.0; /*0xa4bc1*/
    v61 = cocos2d::CCLabelBMFont::create("Categories (optional):", "goldFont.fnt"); /*0xa4bde*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v61 + 160LL))(v61); /*0xa4bf6*/
    v62 = *(_QWORD *)v61; /*0xa4bf8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, v24, v60); /*0xa4c08*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v62 + 184))(v61, v63); /*0xa4c14*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0xa4c2d*/
      *(_QWORD *)(a1 + 584),
      v61,
      1);
    v64 = v60 - v19; /*0xa4c33*/
    sub_98E50(a1 + 1056, a7); /*0xa4c42*/
    v65 = a1 + 1080; /*0xa4c47*/
    v66 = v21 * 0.60000002; /*0xa4c5a*/
    v67 = *(_QWORD *)(a1 + 584); /*0xa4c5e*/
    v68 = *(_QWORD *)(a1 + 552); /*0xa4c65*/
    v69 = a1 + 1056; /*0xa4c73*/
    if ( (int)v12 <= 5 ) /*0xa4c7e*/
      sub_BCD80( /*0xa4d0f*/
        v69,
        v68,
        v67,
        a1,
        (__int64)guard_check_icall_nop,
        v24 - 90.0,
        LODWORD(v64),
        LODWORD(v19),
        LODWORD(v66),
        v21 * 0.41999999,
        1129447424,
        v65,
        0,
        0);
    else
      sub_BCD80( /*0xa4ce4*/
        v69,
        v68,
        v67,
        a1,
        (__int64)guard_check_icall_nop,
        v24 - 140.0,
        LODWORD(v64),
        LODWORD(v19),
        LODWORD(v66),
        v21 * 0.34,
        1124597760,
        v65,
        v18,
        1126432768);
  }
  v70 = (float)(v25 - v26) + 24.0; /*0xa4d1e*/
  v87 = operator new(0x2C8u); /*0xa4d2d*/
  v71 = ButtonSprite_ButtonSprite((__int64)v87); /*0xa4d35*/
  v72 = (cocos2d::CCObject *)v71; /*0xa4d3a*/
  v73 = "GJ_button_01.png"; /*0xa4d3d*/
  if ( v71 ) /*0xa4d56*/
  {
    if ( ButtonSprite_init( /*0xa4d86*/
           v71,
           (__int64)"Cancel",
           80,
           0,
           1058642330,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1105199104) )
    {
      cocos2d::CCObject::autorelease(v72); /*0xa4d92*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v72 + 8LL))(v72, 1); /*0xa4da2*/
      v72 = 0; /*0xa4da5*/
    }
  }
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v72 + 160LL))(v72); /*0xa4dbb*/
  v74 = CCMenuItemSpriteExtra_create(v72, 0, a1, sub_9C4B8); /*0xa4dd5*/
  *(_DWORD *)(v74 + 372) = 1066192077; /*0xa4dd8*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v74); /*0xa4df9*/
  v75 = *(_QWORD *)v74; /*0xa4dfc*/
  v76 = *(_QWORD *)(a1 + 552); /*0xa4dff*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, v24 - 60.0, v70); /*0xa4e1b*/
  cocos2d::CCNode::convertToNodeSpace(v76, Block, v77); /*0xa4e2b*/
  (*(void (__fastcall **)(__int64, __int64))(v75 + 184))(v74, v78); /*0xa4e37*/
  if ( (int)v12 > 0 ) /*0xa4e47*/
    v73 = "GJ_button_06.png"; /*0xa4e47*/
  v79 = ButtonSprite_create(v90, 80, 0, 0.60000002, 1, (__int64)&qword_6FFF68, (__int64)v73, 1105199104); /*0xa4e79*/
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v79 + 160LL))(v79); /*0xa4e8d*/
  v80 = CCMenuItemSpriteExtra_create(v79, 0, a1, sub_A50D0); /*0xa4ea3*/
  *(_DWORD *)(v80 + 372) = 1066192077; /*0xa4ea6*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v80); /*0xa4ec4*/
  v81 = *(_QWORD *)v80; /*0xa4ec7*/
  v82 = *(_QWORD *)(a1 + 552); /*0xa4eca*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v90, v24 + 60.0, v70); /*0xa4ee6*/
  cocos2d::CCNode::convertToNodeSpace(v82, &v87, v83); /*0xa4ef7*/
  (*(void (__fastcall **)(__int64, __int64))(v81 + 184))(v80, v84); /*0xa4f03*/
  return 1; /*0xa4f0f*/
}

// [2/5] Address: 0x1374a0
// Method: CurrencyRewardLayer::~CurrencyRewardLayer
// Hidden C++ exception states: #wind=1
cocos2d::CCLayer *__fastcall CurrencyRewardLayer__dtor_CurrencyRewardLayer(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &CurrencyRewardLayer::`vftable'; /*0x1374b6*/
  *((_QWORD *)Block + 40) = &CurrencyRewardLayer::`vftable'; /*0x1374c0*/
  *((_QWORD *)Block + 41) = &CurrencyRewardLayer::`vftable'; /*0x1374ce*/
  *((_QWORD *)Block + 42) = &CurrencyRewardLayer::`vftable'; /*0x1374dc*/
  *((_QWORD *)Block + 43) = &CurrencyRewardLayer::`vftable'; /*0x1374ea*/
  *((_QWORD *)Block + 44) = &CurrencyRewardLayer::`vftable'; /*0x1374f8*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 52); /*0x1374ff*/
  if ( v4 ) /*0x137509*/
    cocos2d::CCObject::release(v4); /*0x13750b*/
  cocos2d::CCLayer::~CCLayer(Block); /*0x137514*/
  if ( (a2 & 1) != 0 ) /*0x13751f*/
    j_j_free(Block); /*0x137529*/
  return Block; /*0x137531*/
}

// [3/5] Address: 0x137680
// Method: CurrencyRewardLayer::create
// Hidden C++ exception states: #wind=2
char *__fastcall CurrencyRewardLayer_create(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const struct cocos2d::CCPoint *a9,
        int a10,
        int a11,
        int a12)
{
  char *v16; // r14
  __int64 v17; // rax
  char *v19; // [rsp+70h] [rbp-28h] BYREF

  v16 = (char *)operator new(0x280u); /*0x1376af*/
  v19 = v16; /*0x1376b2*/
  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)v16); /*0x1376ba*/
  *(_QWORD *)v16 = &CurrencyRewardLayer::`vftable'; /*0x1376c8*/
  *((_QWORD *)v16 + 40) = &CurrencyRewardLayer::`vftable'; /*0x1376d2*/
  *((_QWORD *)v16 + 41) = &CurrencyRewardLayer::`vftable'; /*0x1376e0*/
  *((_QWORD *)v16 + 42) = &CurrencyRewardLayer::`vftable'; /*0x1376ee*/
  *((_QWORD *)v16 + 43) = &CurrencyRewardLayer::`vftable'; /*0x1376fc*/
  *((_QWORD *)v16 + 44) = &CurrencyRewardLayer::`vftable'; /*0x13770a*/
  *((_QWORD *)v16 + 51) = 0; /*0x137714*/
  *((_QWORD *)v16 + 52) = 0; /*0x13771b*/
  *((_QWORD *)v16 + 53) = 0; /*0x137722*/
  *((_QWORD *)v16 + 54) = 0; /*0x137729*/
  *((_QWORD *)v16 + 56) = 0; /*0x137730*/
  *((_QWORD *)v16 + 57) = 0; /*0x137737*/
  *((_QWORD *)v16 + 58) = 0; /*0x13773e*/
  *((_QWORD *)v16 + 59) = 0; /*0x137745*/
  *((_QWORD *)v16 + 60) = 0; /*0x13774c*/
  *((_QWORD *)v16 + 62) = 0; /*0x137753*/
  *((_QWORD *)v16 + 63) = 0; /*0x13775a*/
  *((_QWORD *)v16 + 64) = 0; /*0x137761*/
  *((_QWORD *)v16 + 65) = 0; /*0x137768*/
  *((_QWORD *)v16 + 66) = 0; /*0x13776f*/
  *((_QWORD *)v16 + 67) = 0; /*0x137776*/
  *((_QWORD *)v16 + 68) = 0; /*0x13777d*/
  *((_QWORD *)v16 + 69) = 0; /*0x137784*/
  *((_QWORD *)v16 + 70) = 0; /*0x13778b*/
  *((_DWORD *)v16 + 142) = 1065353216; /*0x137792*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v16 + 572)); /*0x1377a4*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v16 + 580)); /*0x1377b1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v16 + 588)); /*0x1377be*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v16 + 596)); /*0x1377cb*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v16 + 604)); /*0x1377d8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v16 + 612)); /*0x1377e5*/
  *((_WORD *)v16 + 310) = 0; /*0x1377eb*/
  *((_QWORD *)v16 + 78) = 0; /*0x1377f3*/
  *((_QWORD *)v16 + 79) = 0; /*0x1377fa*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, a9); /*0x13780e*/
  if ( (unsigned __int8)sub_1378D0((_DWORD)v16, a1, a2, a3, a4, a5, a6, a7, a8, v17, a10, a11, a12) ) /*0x137880*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v16); /*0x13788c*/
    return v16; /*0x137892*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1); /*0x1378a6*/
    return 0; /*0x1378a9*/
  }
}

// [5/5] Address: 0x13ae50
// Method: CurrencyRewardLayer::pulseSprite
struct cocos2d::CCAction *__fastcall CurrencyRewardLayer_pulseSprite(__int64 a1, cocos2d::CCNode *a2)
{
  struct cocos2d::CCAction *result; // rax
  double v4; // xmm0_8
  struct cocos2d::CCActionInterval *v5; // rax
  struct cocos2d::CCFiniteTimeAction *v6; // rbx
  double v7; // xmm0_8
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCEaseIn *v9; // rax
  struct cocos2d::CCAction *v10; // rbx

  result = cocos2d::CCNode::getActionByTag(a2, 99); /*0x13ae61*/
  if ( !result ) /*0x13ae6a*/
  {
    v4 = (*(double (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a2 + 168LL))(a2); /*0x13ae7b*/
    v5 = cocos2d::CCScaleTo::create(0.079999998, *(float *)&v4 * 1.5); /*0x13ae94*/
    v6 = cocos2d::CCEaseOut::create(v5, 1.8); /*0x13aeae*/
    v7 = (*(double (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a2 + 168LL))(a2); /*0x13aebb*/
    v8 = cocos2d::CCScaleTo::create(0.079999998, *(float *)&v7); /*0x13aec8*/
    v9 = cocos2d::CCEaseIn::create(v8, 1.8); /*0x13aed9*/
    v10 = cocos2d::CCSequence::create(v6, v9, 0); /*0x13aef3*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v10 + 64LL))(v10, 99); /*0x13af00*/
    return cocos2d::CCNode::runAction(a2, v10); /*0x13af09*/
  }
  return result; /*0x13af14*/
}
