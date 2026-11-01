#include <Geode/binding/ColorAction.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x35e980
// Method: ColorAction::~ColorAction
cocos2d::CCObject *__fastcall ColorAction__dtor_ColorAction(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject::~CCObject(Block); /*0x35e98f*/
  if ( (a2 & 1) != 0 ) /*0x35e998*/
    j_j_free(Block); /*0x35e9a2*/
  return Block; /*0x35e9a7*/
}

// [2/3] Address: 0x35f8c0
// Method: ColorAction::create
// Hidden C++ exception states: #wind=1
char *ColorAction_create()
{
  char *v1; // [rsp+30h] [rbp+8h]

  v1 = (char *)operator new(0xA8u); /*0x35f8ea*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v1); /*0x35f8f2*/
  *(_QWORD *)v1 = &ColorAction::`vftable'; /*0x35f8ff*/
  *((_WORD *)v1 + 28) = 0; /*0x35f902*/
  *((_QWORD *)v1 + 8) = 1065353216; /*0x35f908*/
  *((_DWORD *)v1 + 20) = 0; /*0x35f912*/
  v1[84] = 0; /*0x35f915*/
  *((_QWORD *)v1 + 11) = 0; /*0x35f918*/
  *((_DWORD *)v1 + 24) = 1065353216; /*0x35f91c*/
  *((_DWORD *)v1 + 25) = 1065353216; /*0x35f923*/
  *(_OWORD *)(v1 + 104) = xmmword_8F8490; /*0x35f931*/
  *((_DWORD *)v1 + 30) = 0; /*0x35f935*/
  *((_WORD *)v1 + 62) = 0; /*0x35f938*/
  v1[126] = 0; /*0x35f93c*/
  *((_QWORD *)v1 + 16) = 0; /*0x35f93f*/
  v1[136] = 0; /*0x35f946*/
  *((_QWORD *)v1 + 18) = 0; /*0x35f94c*/
  *((_QWORD *)v1 + 19) = 0; /*0x35f953*/
  *((_QWORD *)v1 + 20) = 0; /*0x35f95a*/
  *((_WORD *)v1 + 36) = -1; /*0x35f961*/
  v1[74] = -1; /*0x35f965*/
  *(_WORD *)(v1 + 75) = -1; /*0x35f969*/
  v1[77] = -1; /*0x35f96d*/
  *((_DWORD *)v1 + 22) = -1; /*0x35f971*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v1); /*0x35f97b*/
  return v1; /*0x35f984*/
}

// [3/3] Address: 0x360290
// Method: ColorAction::setupFromString
// Hidden C++ exception states: #wind=2
double __fastcall ColorAction_setupFromString(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v7; // [rsp+30h] [rbp-18h]

  v7 = a2; /*0x3602af*/
  *(_OWORD *)Block = 0; /*0x3602b7*/
  v4 = operator new(0x60u); /*0x3602c2*/
  *v4 = v4; /*0x3602c7*/
  v4[1] = v4; /*0x3602ca*/
  v4[2] = v4; /*0x3602ce*/
  *((_WORD *)v4 + 12) = 257; /*0x3602d2*/
  Block[0] = v4; /*0x3602d8*/
  GameLevelManager_onUpdateUserScoreCompleted(a2, (__int64)&unk_70F154, (__int64)Block); /*0x3602ec*/
  sub_360350(a1, Block); /*0x3602f9*/
  sub_D0820(Block, Block, *((_QWORD *)Block[0] + 1)); /*0x360312*/
  j_j_free(Block[0]); /*0x360321*/
  return sub_3C310(a2); /*0x36032f*/
}
