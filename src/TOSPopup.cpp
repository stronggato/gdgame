#include <Geode/binding/TOSPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x396100
// Method: TOSPopup::~TOSPopup
_QWORD *__fastcall TOSPopup__dtor_TOSPopup(_QWORD *Block, char a2)
{
  *Block = &TOSPopup::`vftable'; /*0x396113*/
  Block[40] = &TOSPopup::`vftable'; /*0x396120*/
  Block[41] = &TOSPopup::`vftable'; /*0x39612e*/
  Block[42] = &TOSPopup::`vftable'; /*0x39613c*/
  Block[43] = &TOSPopup::`vftable'; /*0x39614a*/
  Block[44] = &TOSPopup::`vftable'; /*0x396158*/
  Block[51] = &TOSPopup::`vftable'; /*0x396166*/
  Block[54] = &TOSPopup::`vftable'; /*0x396174*/
  Block[68] = &TOSPopup::`vftable'; /*0x396182*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x396189*/
  if ( (a2 & 1) != 0 ) /*0x396191*/
    j_j_free(Block); /*0x39619b*/
  return Block; /*0x3961a0*/
}

// Address: 0x3a57d0
// Method: TOSPopup::init
// Hidden C++ exception states: #wind=1
bool __fastcall TOSPopup_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  void (__fastcall *v12)(__int64, __int64); // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  struct cocos2d::CCLabelBMFont *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  const struct cocos2d::CCPoint *v20; // rax
  char *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  cocos2d::CCArray *v30; // rdi
  int v31; // eax
  struct cocos2d::CCObject *v32; // rbx
  __int64 *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  struct cocos2d::CCSprite *v36; // rbx
  cocos2d::CCObject *v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  struct cocos2d::CCSprite *v42; // rbx
  cocos2d::CCObject *v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE v48[16]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v49; // [rsp+50h] [rbp-39h] BYREF
  __int64 v50; // [rsp+60h] [rbp-29h]
  __int64 v51; // [rsp+68h] [rbp-21h]
  float v52; // [rsp+F8h] [rbp+6Fh] BYREF
  float v53; // [rsp+FCh] [rbp+73h]
  float v54; // [rsp+100h] [rbp+77h] BYREF
  float v55; // [rsp+104h] [rbp+7Bh]
  __int128 *v56; // [rsp+108h] [rbp+7Fh] BYREF

  result = FLAlertLayer_init(a1, 150);
  if ( result )
  {
    *(_BYTE *)(a1 + 596) = 1;
    v4 = cocos2d::CCDirector::sharedDirector(v3);
    cocos2d::CCDirector::getWinSize(v4, &v52);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v48, 0.0, 0.0, 80.0, 80.0);
    v6 = cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5);
    v7 = *(_QWORD *)v6;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v56, 350.0, 200.0);
    (*(void (__fastcall **)(__int64, __int64))(v7 + 312))(v6, v8);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v6,
      4294967294LL);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, v52 * 0.5, v53 * 0.5);
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v6 + 184LL))(v6, &v54);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v48, 0.0, 0.0, 80.0, 80.0);
    v10 = cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v9);
    (**(void (__fastcall ***)(__int64, void *))(v10 + 320))(v10 + 320, &unk_6FE4A8);
    v11 = *(_QWORD *)(v10 + 320);
    v12 = *(void (__fastcall **)(__int64, __int64))(v11 + 40);
    LOBYTE(v11) = 60;
    v12(v10 + 320, v11);
    v13 = *(_QWORD *)v10;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v56, 320.0, 100.0);
    (*(void (__fastcall **)(__int64, __int64))(v13 + 312))(v10, v14);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v10,
      0xFFFFFFFFLL);
    v15 = *(_QWORD *)v10;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, v52 * 0.5, (float)(v53 * 0.5) + 6.0);
    (*(void (__fastcall **)(__int64, __int64))(v15 + 184))(v10, v16);
    v17 = cocos2d::CCLabelBMFont::create("Notice", "goldFont.fnt");
    v18 = *(_QWORD *)v17;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, v54, (float)(v55 + 100.0) - 16.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v18 + 184))(v17, v19);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v17);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v17 + 160LL))(v17);
    v56 = &v49;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    *(_QWORD *)&v49 = sub_3C460(112);
    v50 = 111;
    v51 = 111;
    strcpy(
      (char *)v49,
      "By tapping \"OK\", you accept the\n"
      "<cl>Terms of Use</c> and confirm that\n"
      "you have read the <cl>Privacy Policy</c>.");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v48, 0.5, 1.0);
    v21 = TextArea_create((__int64)&v49, &qword_6FFF68, 1.0, 1000.0, v20, 1109917696, 0, 0);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v21, 10);
    v22 = *(_QWORD *)v21;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, v52 * 0.5, (float)(v53 * 0.5) + 15.0);
    (*(void (__fastcall **)(char *, __int64))(v22 + 184))(v21, v23);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 160LL))(v21);
    v28 = cocos2d::CCMenu::create(v25, v24, v26, v27);
    *(_QWORD *)(a1 + 552) = v28;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v28, 10);
    v30 = (cocos2d::CCArray *)cocos2d::CCArray::create(v29);
    v31 = (unsigned int)ButtonSprite_create(
                          (int)"OK",
                          0,
                          0,
                          1.0,
                          0,
                          (__int64)"goldFont.fnt",
                          (__int64)"GJ_button_01.png",
                          0);
    v32 = CCMenuItemSpriteExtra_create(v31, 0, a1, (__int64)sub_3A5EA0);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
      *(_QWORD *)(a1 + 552),
      v32);
    cocos2d::CCArray::addObject(v30, v32);
    v33 = *(__int64 **)(a1 + 552);
    v34 = *v33;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, v52 * 0.5, (float)((float)(v53 * 0.5) - 100.0) + 25.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v34 + 184))(v33, v35);
    v36 = cocos2d::CCSprite::createWithSpriteFrameName("whiteSquare60_001.png");
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v36 + 40) + 40LL))((__int64)v36 + 320, 0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v36 + 120LL))(v36);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v36 + 136LL))(v36);
    v37 = CCMenuItemSpriteExtra_create((int)v36, 0, a1, (__int64)sub_3A5E70);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v37);
    *((_BYTE *)v37 + 408) = 0;
    v38 = *(_QWORD *)v37;
    v39 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, (float)(v52 * 0.5) - 80.0, (float)(v53 * 0.5) + 6.0);
    cocos2d::CCNode::convertToNodeSpace(v39, v48, v40);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v38 + 184))(v37, v41);
    v42 = cocos2d::CCSprite::createWithSpriteFrameName("whiteSquare60_001.png");
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v42 + 40) + 40LL))((__int64)v42 + 320, 0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v42 + 120LL))(v42);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v42 + 136LL))(v42);
    v43 = CCMenuItemSpriteExtra_create((int)v42, 0, a1, (__int64)sub_3A5E40);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v43);
    *((_BYTE *)v43 + 408) = 0;
    v44 = *(_QWORD *)v43;
    v45 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, (float)(v52 * 0.5) + 80.0, (float)(v53 * 0.5) - 14.0);
    cocos2d::CCNode::convertToNodeSpace(v45, v48, v46);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v44 + 184))(v43, v47);
    return 1;
  }
  return result;
}
