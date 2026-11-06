#include <Geode/binding/SelectPremadeLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x44d680
// Method: SelectPremadeLayer::onSelectPremade
void __fastcall SelectPremadeLayer_onSelectPremade(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebx

  v2 = *(_QWORD *)(a1 + 1032); /*0x44d68a*/
  if ( v2 ) /*0x44d697*/
  {
    v3 = *(_DWORD *)(v2 + 2104); /*0x44d69f*/
    *(_DWORD *)(*(_QWORD *)(a1 + 1032) + 2104LL) = v3 ^ (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x44d6b1*/
  }
}

// [2/3] Address: 0x594580
// Method: SelectPremadeLayer::~SelectPremadeLayer
_QWORD *__fastcall SelectPremadeLayer__dtor_SelectPremadeLayer(_QWORD *Block, char a2)
{
  *Block = &SelectPremadeLayer::`vftable'; /*0x594593*/
  Block[40] = &SelectPremadeLayer::`vftable'; /*0x5945a0*/
  Block[41] = &SelectPremadeLayer::`vftable'; /*0x5945ae*/
  Block[42] = &SelectPremadeLayer::`vftable'; /*0x5945bc*/
  Block[43] = &SelectPremadeLayer::`vftable'; /*0x5945ca*/
  Block[44] = &SelectPremadeLayer::`vftable'; /*0x5945d8*/
  Block[51] = &SelectPremadeLayer::`vftable'; /*0x5945e6*/
  Block[54] = &SelectPremadeLayer::`vftable'; /*0x5945f4*/
  Block[68] = &SelectPremadeLayer::`vftable'; /*0x594602*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x594609*/
  if ( (a2 & 1) != 0 ) /*0x594611*/
    j_j_free(Block); /*0x59461b*/
  return Block; /*0x594620*/
}

// Address: 0x599340
// Method: SelectPremadeLayer::init
// Hidden C++ exception states: #wind=5
bool __fastcall SelectPremadeLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int i; // r14d
  unsigned __int64 v22; // rdi
  __int128 *v23; // rsi
  cocos2d::CCObject *v24; // rbx
  cocos2d::CCObject *v25; // rdi
  float v26; // xmm0_4
  __int64 v27; // rax
  void *v28; // rcx
  cocos2d::CCObject *v29; // rbx
  cocos2d::CCObject *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  float v35; // [rsp+50h] [rbp-B0h] BYREF
  float v36; // [rsp+54h] [rbp-ACh]
  _BYTE v37[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[8]; // [rsp+70h] [rbp-90h] BYREF
  void *v40; // [rsp+78h] [rbp-88h] BYREF
  void *v41; // [rsp+80h] [rbp-80h]
  __int128 v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-60h]

  result = FLAlertLayer_init(a1, 150);
  if ( !result )
    return result;
  v4 = cocos2d::CCDirector::sharedDirector(v3);
  cocos2d::CCDirector::getWinSize(v4, &v35);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v38, 0.0, 0.0, 80.0, 80.0);
  v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5);
  v7 = *v6;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v37, 360.0, 260.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v7 + 312))(v6, v8);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v6,
    0xFFFFFFFFLL);
  v9 = *v6;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v37, v35 * 0.5, v36 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v9 + 184))(v6, v10);
  v11 = cocos2d::CCLabelBMFont::create("Select Premade", (const char *)&qword_6FFF68);
  v12 = *(_QWORD *)v11;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v37, v35 * 0.5, (float)((float)(v36 * 0.5) + 130.0) - 20.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 184))(v11, v13);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
    *(_QWORD *)(a1 + 584),
    v11);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 160LL))(v11);
  v18 = cocos2d::CCMenu::create(v15, v14, v16, v17);
  *(_QWORD *)(a1 + 552) = v18;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v18, 10);
  v19 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v37, v35 * 0.5, (float)((float)(v36 * 0.5) + 22.5) + 50.0);
  cocos2d::CCNode::convertToNodeSpace(v19, v39, v20);
  for ( i = 0; i < 2; ++i )
  {
    v42 = 0;
    v43 = 1;
    v22 = 15;
    v44 = 15;
    LOWORD(v42) = 45;
    if ( i )
    {
      if ( i != 1 )
        goto LABEL_8;
      v43 = 11;
      memmove(&v42, "Homing\nBall", 0xBu);
      BYTE11(v42) = 0;
    }
    else
    {
      v43 = 14;
      memmove(&v42, "Homing\nMissile", 0xEu);
      BYTE14(v42) = 0;
    }
    v22 = v44;
LABEL_8:
    v23 = &v42;
    if ( v22 > 0xF )
      v23 = (__int128 *)v42;
    v41 = operator new(0x2C8u);
    v24 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v41);
    if ( v24 )
    {
      if ( ButtonSprite_init(
             (__int64)v24,
             (__int64)v23,
             40,
             0,
             1061997773,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_04.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v24);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v24 + 8LL))(v24, 1);
        LODWORD(v24) = 0;
      }
    }
    v40 = operator new(0x208u);
    v25 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v40);
    if ( v25 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v25, (_DWORD)v24, 0, a1, (__int64)sub_599960) )
      {
        cocos2d::CCObject::autorelease(v25);
        goto LABEL_19;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v25 + 8LL))(v25, 1);
    }
    v25 = 0;
LABEL_19:
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v25);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v25 + 64LL))(v25, (unsigned int)i);
    v26 = floorf((float)(i / 3)) * -45.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v38, (float)((float)((float)(i % 3) * 110.0) - 110.0) + 55.0, v26);
    cocos2d::CCPoint::operator+(v39, v37, v27);
    (*(void (__fastcall **)(cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v25 + 184LL))(v25, v37);
    if ( v44 > 0xF )
    {
      v28 = (void *)v42;
      if ( v44 + 1 >= 0x1000 )
      {
        v28 = *(void **)(v42 - 8);
        if ( (unsigned __int64)(v42 - (_QWORD)v28 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v28);
    }
  }
  v38[0] = (__int64)operator new(0x2C8u);
  v29 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v38[0]);
  if ( v29 )
  {
    if ( ButtonSprite_init(
           (__int64)v29,
           (__int64)"Cancel",
           40,
           0,
           1061997773,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v29);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v29 + 8LL))(v29, 1);
      LODWORD(v29) = 0;
    }
  }
  v38[0] = (__int64)operator new(0x208u);
  v30 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v38[0]);
  if ( v30 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v30, (_DWORD)v29, 0, a1, (__int64)UploadPopup_onClose) )
    {
      cocos2d::CCObject::autorelease(v30);
      goto LABEL_34;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v30 + 8LL))(v30, 1);
  }
  v30 = 0;
LABEL_34:
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v30);
  v31 = *(_QWORD *)v30;
  v32 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v38, v35 * 0.5, (float)((float)(v36 * 0.5) - 130.0) + 25.0);
  cocos2d::CCNode::convertToNodeSpace(v32, &v40, v33);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v31 + 184))(v30, v34);
  return 1;
}
