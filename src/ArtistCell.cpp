#include <Geode/binding/ArtistCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x14f060
// Method: ArtistCell::~ArtistCell
_QWORD *__fastcall ArtistCell__dtor_ArtistCell(_QWORD *Block, char a2)
{
  *Block = &ArtistCell::`vftable'; /*0x14f073*/
  Block[40] = &ArtistCell::`vftable'; /*0x14f080*/
  Block[41] = &ArtistCell::`vftable'; /*0x14f08e*/
  Block[42] = &ArtistCell::`vftable'; /*0x14f09c*/
  Block[43] = &ArtistCell::`vftable'; /*0x14f0aa*/
  Block[44] = &ArtistCell::`vftable'; /*0x14f0b8*/
  URLCell__dtor_URLCell(Block); /*0x14f0bf*/
  if ( (a2 & 1) != 0 ) /*0x14f0c7*/
    j_j_free(Block); /*0x14f0d1*/
  return Block; /*0x14f0d6*/
}

// [2/2] Address: 0x14f0f0
// Method: ArtistCell::loadFromObject
// Hidden C++ exception states: #wind=3
void __fastcall ArtistCell_loadFromObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void **v4; // rcx
  cocos2d::CCLabelBMFont *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  struct cocos2d::CCMenu *v8; // r14
  cocos2d::CCObject *v9; // rbx
  cocos2d::CCObject *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  bool v19; // di
  void *v20; // rcx
  struct cocos2d::CCSprite *v21; // rax
  int v22; // ebx
  cocos2d::CCObject *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  void *v27; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v28[8]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v29[3]; // [rsp+60h] [rbp-58h] BYREF
  void *Block[2]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v31; // [rsp+88h] [rbp-30h]
  unsigned __int64 v32; // [rsp+90h] [rbp-28h]

  v2 = a2; /*0x14f117*/
  LOBYTE(a2) = 1; /*0x14f127*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2); /*0x14f129*/
  *(_QWORD *)(a1 + 560) = v2; /*0x14f12f*/
  sub_3E4F0(Block, v2 + 360); /*0x14f142*/
  v4 = Block; /*0x14f148*/
  if ( v32 > 0xF ) /*0x14f156*/
    v4 = (void **)Block[0]; /*0x14f156*/
  v5 = cocos2d::CCLabelBMFont::create((const char *)v4, (const char *)&qword_6FFF68); /*0x14f16c*/
  sub_3C310(Block); /*0x14f174*/
  cocos2d::CCLabelBMFont::limitLabelWidth(v5, 200.0, 0.80000001, 0.0); /*0x14f18f*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))( /*0x14f1a9*/
    *(_QWORD *)(a1 + 544),
    v5);
  v6 = *(_QWORD *)v5; /*0x14f1ac*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, 0.0, 0.5); /*0x14f1bf*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v6 + 288))(v5, v7); /*0x14f1cb*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v5 + 176LL))(v5); /*0x14f1ef*/
  v8 = cocos2d::CCMenu::create(0); /*0x14f1fd*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x14f21a*/
    *(_QWORD *)(a1 + 544),
    v8,
    3);
  v27 = operator new(0x2C8u); /*0x14f227*/
  v9 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v27); /*0x14f234*/
  if ( v9 ) /*0x14f23a*/
  {
    if ( ButtonSprite_init( /*0x14f281*/
           (__int64)v9,
           (__int64)"View",
           100,
           0,
           1058642330,
           0,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v9); /*0x14f28d*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x14f29d*/
      v9 = 0; /*0x14f2a0*/
    }
  }
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v9 + 160LL))(v9); /*0x14f2b0*/
  v10 = CCMenuItemSpriteExtra_create((int)v9, 0, a1, (__int64)sub_14F510); /*0x14f2ca*/
  *((_DWORD *)v10 + 93) = 1067030938; /*0x14f2cd*/
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v8 + 464LL))(v8, v10); /*0x14f2e7*/
  v11 = *(_QWORD *)v10; /*0x14f2ea*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, *(float *)(a1 + 528) - 38.0, *(float *)(a1 + 532) * 0.5); /*0x14f312*/
  cocos2d::CCNode::convertToNodeSpace(v8, v28, v12); /*0x14f323*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v11 + 184))(v10, v13); /*0x14f32f*/
  GameObject_addGlow(*(_QWORD *)(a1 + 560), v29); /*0x14f341*/
  v14 = 0; /*0x14f347*/
  v15 = (v29[1] - v29[0]) / 72LL; /*0x14f36f*/
  if ( v15 ) /*0x14f372*/
  {
    v16 = (_DWORD *)(v29[0] + 4LL); /*0x14f374*/
    while ( *v16 != 1 ) /*0x14f37b*/
    {
      ++v14; /*0x14f37d*/
      v16 += 18; /*0x14f380*/
      if ( v14 >= v15 ) /*0x14f387*/
        goto LABEL_11; /*0x14f387*/
    }
    sub_3E4F0(Block, v29[0] + 8 * (v14 + 8 * v14 + 5)); /*0x14f40c*/
    v18 = v32; /*0x14f412*/
    v17 = v31; /*0x14f41a*/
  }
  else
  {
LABEL_11:
    *(_OWORD *)Block = 0; /*0x14f389*/
    v17 = 0; /*0x14f391*/
    v18 = 15; /*0x14f393*/
    LOBYTE(Block[0]) = 0; /*0x14f398*/
  }
  sub_120170(v29); /*0x14f3a2*/
  v19 = v17 != 0; /*0x14f3aa*/
  if ( v18 > 0xF ) /*0x14f3b2*/
  {
    v20 = Block[0]; /*0x14f3b8*/
    if ( v18 + 1 >= 0x1000 ) /*0x14f3c7*/
    {
      v20 = (void *)*((_QWORD *)Block[0] - 1); /*0x14f3cd*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v20 - 8) > 0x1F ) /*0x14f3dc*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14f3f1*/
    }
    j_j_free(v20); /*0x14f427*/
  }
  if ( v19 ) /*0x14f42f*/
  {
    v21 = cocos2d::CCSprite::createWithSpriteFrameName("gj_ytIcon_001.png"); /*0x14f43c*/
    v22 = (int)v21; /*0x14f442*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v21 + 160LL))(v21); /*0x14f45a*/
    v23 = CCMenuItemSpriteExtra_create(v22, 0, a1, (__int64)sub_14F670); /*0x14f470*/
    *((_DWORD *)v23 + 93) = 1067030938; /*0x14f473*/
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v8 + 464LL))(v8, v23); /*0x14f48d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, -52.0, 0.0); /*0x14f4a0*/
    v25 = v24; /*0x14f4a6*/
    v26 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v10 + 200LL))(v10); /*0x14f4b6*/
    cocos2d::CCPoint::operator+(v26, &v27, v25); /*0x14f4c3*/
    (*(void (__fastcall **)(cocos2d::CCObject *, void **))(*(_QWORD *)v23 + 184LL))(v23, &v27); /*0x14f4d4*/
  }
}
