#include <Geode/binding/LikeItemLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x4646f0
// Method: LikeItemLayer::~LikeItemLayer
_QWORD *__fastcall LikeItemLayer__dtor_LikeItemLayer(_QWORD *Block, char a2)
{
  *Block = &LikeItemLayer::`vftable'; /*0x464703*/
  Block[40] = &LikeItemLayer::`vftable'; /*0x464710*/
  Block[41] = &LikeItemLayer::`vftable'; /*0x46471e*/
  Block[42] = &LikeItemLayer::`vftable'; /*0x46472c*/
  Block[43] = &LikeItemLayer::`vftable'; /*0x46473a*/
  Block[44] = &LikeItemLayer::`vftable'; /*0x464748*/
  Block[51] = &LikeItemLayer::`vftable'; /*0x464756*/
  Block[54] = &LikeItemLayer::`vftable'; /*0x464764*/
  Block[68] = &LikeItemLayer::`vftable'; /*0x464772*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x464779*/
  if ( (a2 & 1) != 0 ) /*0x464781*/
    j_j_free(Block); /*0x46478b*/
  return Block; /*0x464790*/
}

// [2/4] Address: 0x4647a0
// Method: LikeItemLayer::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall LikeItemLayer_create(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v6; // r14

  v6 = operator new(0x2B0u); /*0x4647c3*/
  FLAlertLayer_FLAlertLayer((__int64)v6); /*0x4647ce*/
  *v6 = &LikeItemLayer::`vftable'; /*0x4647da*/
  v6[40] = &LikeItemLayer::`vftable'; /*0x4647e4*/
  v6[41] = &LikeItemLayer::`vftable'; /*0x4647f2*/
  v6[42] = &LikeItemLayer::`vftable'; /*0x464800*/
  v6[43] = &LikeItemLayer::`vftable'; /*0x46480e*/
  v6[44] = &LikeItemLayer::`vftable'; /*0x46481c*/
  v6[51] = &LikeItemLayer::`vftable'; /*0x46482a*/
  v6[54] = &LikeItemLayer::`vftable'; /*0x464838*/
  v6[68] = &LikeItemLayer::`vftable'; /*0x464846*/
  v6[83] = 0; /*0x46484f*/
  *((_DWORD *)v6 + 168) = 0; /*0x464856*/
  v6[85] = 0; /*0x46485d*/
  if ( (unsigned __int8)LikeItemLayer_init(v6, a1, a2, a3) ) /*0x46486f*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x46487b*/
    return v6; /*0x464881*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0x464895*/
    return 0; /*0x464898*/
  }
}

// [3/4] Address: 0x4648b0
// Method: LikeItemLayer::init
bool __fastcall LikeItemLayer_init(__int64 a1, int a2, int a3, int a4)
{
  bool result; // al
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  struct cocos2d::CCSprite *v23; // rax
  cocos2d::CCObject *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  struct cocos2d::CCSprite *v29; // rax
  cocos2d::CCObject *v30; // rsi
  struct cocos2d::CCSprite *v31; // rax
  cocos2d::CCObject *v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  struct cocos2d::CCLabelBMFont *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  float v44; // [rsp+30h] [rbp-38h] BYREF
  float v45; // [rsp+34h] [rbp-34h]
  _BYTE v46[8]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v47[16]; // [rsp+40h] [rbp-28h] BYREF

  result = FLAlertLayer_init(a1, 75); /*0x4648d4*/
  if ( result ) /*0x4648db*/
  {
    *(_DWORD *)(a1 + 664) = a2; /*0x4648ec*/
    *(_DWORD *)(a1 + 668) = a3; /*0x4648f2*/
    *(_DWORD *)(a1 + 672) = a4; /*0x4648f8*/
    v10 = cocos2d::CCDirector::sharedDirector(v9); /*0x4648fe*/
    cocos2d::CCDirector::getWinSize(v10, &v44); /*0x46490c*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v47, 0.0, 0.0, 80.0, 80.0); /*0x46492b*/
    v12 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v11); /*0x464956*/
    v13 = *v12; /*0x464959*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v46, 200.0, 115.0); /*0x46495c*/
    (*(void (__fastcall **)(__int64 *, __int64))(v13 + 312))(v12, v14); /*0x464968*/
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x464981*/
      *(_QWORD *)(a1 + 584),
      v12,
      0xFFFFFFFFLL);
    v15 = *v12; /*0x4649a1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v46, v44 * 0.5, v45 * 0.5); /*0x4649ae*/
    (*(void (__fastcall **)(__int64 *, __int64))(v15 + 184))(v12, v16); /*0x4649ba*/
    v21 = cocos2d::CCMenu::create(v18, v17, v19, v20); /*0x4649c0*/
    v22 = *(_QWORD *)(a1 + 584); /*0x4649c6*/
    *(_QWORD *)(a1 + 552) = v21; /*0x4649d3*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 456LL))(v22, v21, 10); /*0x4649e7*/
    v23 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x4649f1*/
    LODWORD(v15) = (_DWORD)v23; /*0x4649ff*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v23 + 160LL))(v23); /*0x464a0f*/
    v24 = CCMenuItemSpriteExtra_create(v15, 0, a1, (__int64)UploadPopup_onClose); /*0x464a25*/
    *((_DWORD *)v24 + 93) = 1069547520; /*0x464a28*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v24); /*0x464a46*/
    v25 = *(_QWORD *)v24; /*0x464a55*/
    v26 = *(_QWORD *)(a1 + 552); /*0x464a58*/
    cocos2d::CCPoint::CCPoint( /*0x464a8e*/
      (cocos2d::CCPoint *)v46,
      (float)((float)(v44 * 0.5) - 100.0) + 5.0,
      (float)((float)(v45 * 0.5) + 57.5) - 5.0);
    cocos2d::CCNode::convertToNodeSpace(v26, v47, v27); /*0x464a9f*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v25 + 184))(v24, v28); /*0x464aab*/
    v29 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_likeBtn_001.png"); /*0x464ab8*/
    LODWORD(v26) = (_DWORD)v29; /*0x464ac6*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v29 + 160LL))(v29); /*0x464ad6*/
    v30 = CCMenuItemSpriteExtra_create(v26, 0, a1, (__int64)sub_464CA0); /*0x464af3*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v30); /*0x464b03*/
    v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_dislikeBtn_001.png"); /*0x464b0d*/
    LODWORD(v26) = (_DWORD)v31; /*0x464b1b*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 160LL))(v31); /*0x464b2b*/
    v32 = CCMenuItemSpriteExtra_create(v26, 0, a1, (__int64)sub_464CB0); /*0x464b48*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v32); /*0x464b58*/
    v33 = *(_QWORD *)v30; /*0x464b6c*/
    v34 = *(_QWORD *)(a1 + 552); /*0x464b6f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v47, (float)(v44 * 0.5) - 43.0, (float)(v45 * 0.5) - 15.0); /*0x464b90*/
    cocos2d::CCNode::convertToNodeSpace(v34, v46, v35); /*0x464ba1*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v33 + 184))(v30, v36); /*0x464bad*/
    v37 = *(_QWORD *)v32; /*0x464bc4*/
    v38 = *(_QWORD *)(a1 + 552); /*0x464bc7*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v47, (float)(v44 * 0.5) + 43.0, (float)(v45 * 0.5) - 15.0); /*0x464be8*/
    cocos2d::CCNode::convertToNodeSpace(v38, v46, v39); /*0x464bf9*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v37 + 184))(v32, v40); /*0x464c05*/
    v41 = cocos2d::CCLabelBMFont::create("Vote", (const char *)&qword_6FFF68); /*0x464c30*/
    v42 = *(_QWORD *)v41; /*0x464c38*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v47, v44 * 0.5, (float)((float)(v45 * 0.5) + 57.5) - 20.0); /*0x464c50*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v42 + 184))(v41, v43); /*0x464c5c*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x464c6f*/
      *(_QWORD *)(a1 + 584),
      v41);
    return 1; /*0x464c7b*/
  }
  return result; /*0x464c82*/
}

// [4/4] Address: 0x464cc0
// Method: LikeItemLayer::triggerLike
// Hidden C++ exception states: #wind=1
__int64 __fastcall LikeItemLayer_triggerLike(__int64 a1, unsigned __int8 a2)
{
  int v4; // ecx
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD, _QWORD); // rcx
  __int64 v6; // rdx
  void *v8; // [rsp+40h] [rbp+8h]

  v4 = qword_905FB0; /*0x464cd0*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x464cda*/
  {
    v8 = operator new(0x690u); /*0x464ce6*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v8); /*0x464cf4*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x464d05*/
    v4 = qword_905FB0; /*0x464d07*/
  }
  sub_257380(v4, *(_DWORD *)(a1 + 664), *(_DWORD *)(a1 + 668), a2, *(_DWORD *)(a1 + 672)); /*0x464d29*/
  v5 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 680); /*0x464d2e*/
  if ( v5 ) /*0x464d38*/
    (**v5)(v5, *(unsigned int *)(a1 + 664), *(unsigned int *)(a1 + 668), a2); /*0x464d4e*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x464d58*/
  LOBYTE(v6) = 1; /*0x464d61*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v6);
}
