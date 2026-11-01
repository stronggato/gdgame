#include <Geode/binding/HardStreak.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x27b6f0
// Method: HardStreak::stopStroke
bool __fastcall HardStreak_stopStroke(__int64 a1)
{
  bool result; // al

  if ( GameManager_getGameVariable(a1, "0218") ) /*0x27b700*/
    return 1; /*0x27b700*/
  if ( GameManager_getGameVariable(a1, "0219") ) /*0x27b713*/
    return 1; /*0x27b713*/
  if ( GameManager_getGameVariable(a1, "0075") ) /*0x27b726*/
    return 1; /*0x27b726*/
  if ( GameManager_getGameVariable(a1, "0076") ) /*0x27b739*/
    return 1; /*0x27b739*/
  if ( GameManager_getGameVariable(a1, "0243") ) /*0x27b74c*/
    return 1; /*0x27b74c*/
  result = GameManager_getGameVariable(a1, "0077"); /*0x27b75f*/
  if ( result ) /*0x27b766*/
    return 1; /*0x27b76e*/
  return result; /*0x27b768*/
}

// [2/4] Address: 0x3bbe70
// Method: HardStreak::~HardStreak
cocos2d::CCDrawNode *__fastcall HardStreak__dtor_HardStreak(cocos2d::CCDrawNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &HardStreak::`vftable'; /*0x3bbe86*/
  *((_QWORD *)Block + 40) = &HardStreak::`vftable'; /*0x3bbe90*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 52); /*0x3bbe97*/
  if ( v4 ) /*0x3bbea1*/
    cocos2d::CCObject::release(v4); /*0x3bbea3*/
  cocos2d::CCDrawNode::~CCDrawNode(Block); /*0x3bbeac*/
  if ( (a2 & 1) != 0 ) /*0x3bbeb7*/
    j_j_free(Block); /*0x3bbec1*/
  return Block; /*0x3bbec9*/
}

// [3/4] Address: 0x3bbee0
// Method: HardStreak::create
// Hidden C++ exception states: #wind=2
char *HardStreak_create()
{
  char *v0; // rbx
  __int64 (__fastcall *v1)(char *); // rdx
  char v2; // al

  v0 = (char *)operator new(0x1C0u); /*0x3bbef0*/
  cocos2d::CCDrawNode::CCDrawNode((cocos2d::CCDrawNode *)v0); /*0x3bbefb*/
  *(_QWORD *)v0 = &HardStreak::`vftable'; /*0x3bbf09*/
  *((_QWORD *)v0 + 40) = &HardStreak::`vftable'; /*0x3bbf13*/
  *((_QWORD *)v0 + 52) = 0; /*0x3bbf1a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v0 + 424)); /*0x3bbf2c*/
  *((_DWORD *)v0 + 108) = 1065353216; /*0x3bbf32*/
  *((_DWORD *)v0 + 109) = 1065353216; /*0x3bbf3c*/
  *((_WORD *)v0 + 220) = 0; /*0x3bbf46*/
  v0[442] = 0; /*0x3bbf4f*/
  v1 = *(__int64 (__fastcall **)(char *))(*(_QWORD *)v0 + 72LL); /*0x3bbf59*/
  if ( (char *)v1 == (char *)HardStreak_init ) /*0x3bbf6a*/
    v2 = HardStreak_init(v0); /*0x3bbf6c*/
  else
    v2 = v1(v0); /*0x3bbf73*/
  if ( v2 ) /*0x3bbf77*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x3bbf7c*/
    return v0; /*0x3bbf82*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x3bbf9a*/
    return 0; /*0x3bbf9d*/
  }
}

// [4/4] Address: 0x3bbfb0
// Method: HardStreak::init
bool __fastcall HardStreak_init(cocos2d::CCArray **a1)
{
  bool result; // al
  __int64 v3; // rcx
  cocos2d::CCObject *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // [rsp+38h] [rbp+10h] BYREF

  result = cocos2d::CCDrawNode::init((cocos2d::CCDrawNode *)a1); /*0x3bbfb9*/
  if ( result ) /*0x3bbfc1*/
  {
    v4 = (cocos2d::CCObject *)cocos2d::CCArray::create(v3); /*0x3bbfc9*/
    a1[52] = v4; /*0x3bbfd2*/
    cocos2d::CCObject::retain(v4); /*0x3bbfd9*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, (const struct cocos2d::CCPoint *)&unk_904D70); /*0x3bbfeb*/
    sub_3BCC50(a1, v5); /*0x3bbff7*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, 10.0, 10.0); /*0x3bc00c*/
    cocos2d::CCPoint::operator=(a1 + 53, v6); /*0x3bc01c*/
    sub_3BC0A0(a1); /*0x3bc028*/
    (*((void (__fastcall **)(cocos2d::CCArray **))*a1 + 93))(a1); /*0x3bc033*/
    cocos2d::CCDrawNode::clear((cocos2d::CCDrawNode *)a1); /*0x3bc03c*/
    cocos2d::CCArray::removeAllObjects(a1[52]); /*0x3bc049*/
    return 1; /*0x3bc04f*/
  }
  return result; /*0x3bbfc3*/
}
