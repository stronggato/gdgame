#include <Geode/binding/TextAlertPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x3960c0
// Method: TextAlertPopup::~TextAlertPopup
cocos2d::CCNode *__fastcall TextAlertPopup__dtor_TextAlertPopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCNode::~CCNode(Block); /*0x3960cf*/
  if ( (a2 & 1) != 0 ) /*0x3960d8*/
    j_j_free(Block); /*0x3960e2*/
  return Block; /*0x3960e7*/
}

// [2/2] Address: 0x3a2cf0
// Method: TextAlertPopup::create
// Hidden C++ exception states: #wind=2
char __fastcall TextAlertPopup_create(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax
  struct cocos2d::CCLabelBMFont *v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCSprite *v16; // rax
  cocos2d::CCObject *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  float v22; // [rsp+60h] [rbp-B8h] BYREF
  float v23; // [rsp+64h] [rbp-B4h]
  __int128 *v24; // [rsp+68h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-98h]
  __int64 v27; // [rsp+88h] [rbp-90h]
  _BYTE v28[8]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v29[5]; // [rsp+98h] [rbp-80h] BYREF

  v29[4] = a4; /*0x3a2d28*/
  v24 = &v25; /*0x3a2d31*/
  v25 = 0; /*0x3a2d39*/
  v26 = 2; /*0x3a2d3e*/
  v27 = 15; /*0x3a2d49*/
  strcpy((char *)&v25, "OK"); /*0x3a2d59*/
  sub_3E4F0(v29, a4); /*0x3a2d6a*/
  if ( (unsigned __int8)sub_3A1A60(a1, a2, 0, 999, v8, (__int64)&v25, 1, 0, 1114636288, 0, 0) ) /*0x3a2db2*/
  {
    v11 = cocos2d::CCDirector::sharedDirector(v9); /*0x3a2dca*/
    cocos2d::CCDirector::getWinSize(v11, &v22); /*0x3a2dd8*/
    *(_BYTE *)(a1 + 712) = a3; /*0x3a2dde*/
    v12 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68); /*0x3a2df3*/
    *(_QWORD *)(a1 + 720) = v12; /*0x3a2df9*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 160LL))(v12); /*0x3a2e15*/
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x3a2e2e*/
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 720),
      1);
    v13 = *(__int64 **)(a1 + 720); /*0x3a2e34*/
    v14 = *v13; /*0x3a2e3b*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, v22 * 0.5, (float)((float)(v23 * 0.5) + 35.0) + 60.0); /*0x3a2e6b*/
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 184))(v13, v15); /*0x3a2e77*/
    v16 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsBtn_001.png"); /*0x3a2e84*/
    LODWORD(v14) = (_DWORD)v16; /*0x3a2e8a*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 160LL))(v16); /*0x3a2e9d*/
    v17 = CCMenuItemSpriteExtra_create(v14, 0, a1, (__int64)SetFolderPopup_onSetFolderName); /*0x3a2eb3*/
    *((_DWORD *)v17 + 93) = 1066192077; /*0x3a2eb6*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v17); /*0x3a2ed7*/
    v18 = *(_QWORD *)v17; /*0x3a2eda*/
    v19 = *(_QWORD *)(a1 + 552); /*0x3a2edd*/
    cocos2d::CCPoint::CCPoint( /*0x3a2f11*/
      (cocos2d::CCPoint *)&v24,
      (float)(v22 * 0.5) + 90.0,
      (float)((float)(v23 * 0.5) + 20.0) + 60.0);
    cocos2d::CCNode::convertToNodeSpace(v19, v28, v20); /*0x3a2f25*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v18 + 184))(v17, v21); /*0x3a2f31*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1080LL))(a1); /*0x3a2f3d*/
    sub_3C310(a4); /*0x3a2f47*/
    return 1; /*0x3a2f4c*/
  }
  else
  {
    sub_3C310(a4); /*0x3a2dbe*/
    return 0; /*0x3a2dc3*/
  }
}
