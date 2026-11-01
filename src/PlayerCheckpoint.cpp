#include <Geode/binding/PlayerCheckpoint.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x51c1e0
// Method: PlayerCheckpoint::~PlayerCheckpoint
_QWORD *__fastcall PlayerCheckpoint__dtor_PlayerCheckpoint(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &PlayerCheckpoint::`vftable'; /*0x51c1f6*/
  v4 = (cocos2d::CCObject *)Block[136]; /*0x51c1f9*/
  if ( v4 ) /*0x51c203*/
    cocos2d::CCObject::release(v4); /*0x51c205*/
  sub_7F2E0(Block + 170); /*0x51c212*/
  sub_3DA90(Block + 140); /*0x51c21e*/
  sub_3DB00(Block + 138); /*0x51c22a*/
  sub_3DA90(Block + 105); /*0x51c236*/
  sub_3DB00(Block + 103); /*0x51c242*/
  sub_685C0(Block + 61); /*0x51c24e*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)Block); /*0x51c256*/
  if ( (a2 & 1) != 0 ) /*0x51c261*/
    j_j_free(Block); /*0x51c26b*/
  return Block; /*0x51c273*/
}

// [2/3] Address: 0x529e60
// Method: PlayerCheckpoint::init
bool __fastcall PlayerCheckpoint_init(cocos2d::CCNode *a1)
{
  bool result; // al
  __int64 v3; // rcx
  cocos2d::CCObject *v4; // rax

  result = cocos2d::CCNode::init(a1); /*0x529e69*/
  if ( result ) /*0x529e71*/
  {
    v4 = (cocos2d::CCObject *)cocos2d::CCArray::create(v3); /*0x529e79*/
    *((_QWORD *)a1 + 136) = v4; /*0x529e82*/
    cocos2d::CCObject::retain(v4); /*0x529e89*/
    return 1; /*0x529e8f*/
  }
  return result; /*0x529e73*/
}

// [3/3] Address: 0x529f90
// Method: PlayerCheckpoint::create
// Hidden C++ exception states: #wind=13
char *PlayerCheckpoint_create()
{
  char *v0; // rdi
  _QWORD *v1; // rax
  bool (__fastcall *v2)(cocos2d::CCNode *); // rdx
  bool v3; // al

  v0 = (char *)operator new(0x1310u); /*0x529fa9*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v0); /*0x529fb4*/
  *(_QWORD *)v0 = &CheckpointObject::`vftable'; /*0x529fc2*/
  sub_306D20(v0 + 320); /*0x529fcc*/
  sub_51B9C0(v0 + 2064); /*0x529fd9*/
  sub_5AC50(v0 + 2784); /*0x529fe6*/
  *((_QWORD *)v0 + 460) = 0; /*0x529fee*/
  *((_QWORD *)v0 + 461) = 0; /*0x529ff5*/
  *((_QWORD *)v0 + 462) = 0; /*0x529ffc*/
  v0[3704] = 0; /*0x52a003*/
  *(_QWORD *)(v0 + 3708) = 0; /*0x52a00a*/
  *((_QWORD *)v0 + 465) = 0; /*0x52a011*/
  *((_QWORD *)v0 + 466) = 0; /*0x52a018*/
  *((_QWORD *)v0 + 467) = 0; /*0x52a01f*/
  *((_QWORD *)v0 + 468) = 0; /*0x52a026*/
  *((_QWORD *)v0 + 469) = 0; /*0x52a02d*/
  *((_QWORD *)v0 + 470) = 0; /*0x52a034*/
  *((_QWORD *)v0 + 471) = 0; /*0x52a03b*/
  *((_QWORD *)v0 + 472) = 0; /*0x52a042*/
  *((_QWORD *)v0 + 473) = 0; /*0x52a049*/
  sub_4FEA10(v0 + 3792); /*0x52a057*/
  *((_QWORD *)v0 + 578) = 0; /*0x52a05d*/
  *((_DWORD *)v0 + 1158) = 0; /*0x52a070*/
  *((_QWORD *)v0 + 580) = 0; /*0x52a072*/
  *((_QWORD *)v0 + 581) = 0; /*0x52a076*/
  v1 = operator new(0x98u); /*0x52a07f*/
  *v1 = v1; /*0x52a084*/
  v1[1] = v1; /*0x52a087*/
  *((_QWORD *)v0 + 580) = v1; /*0x52a08b*/
  *((_QWORD *)v0 + 582) = 0; /*0x52a093*/
  *((_QWORD *)v0 + 583) = 0; /*0x52a096*/
  *((_QWORD *)v0 + 584) = 0; /*0x52a09a*/
  *((_QWORD *)v0 + 585) = 7; /*0x52a09e*/
  *((_QWORD *)v0 + 586) = 8; /*0x52a0a6*/
  *((_DWORD *)v0 + 1158) = 1065353216; /*0x52a0ae*/
  sub_3E200(v0 + 4656, 16, *((_QWORD *)v0 + 580)); /*0x52a0bd*/
  *((_QWORD *)v0 + 587) = 0; /*0x52a0c3*/
  *((_QWORD *)v0 + 588) = 0; /*0x52a0ca*/
  *((_QWORD *)v0 + 589) = 0; /*0x52a0d1*/
  *((_DWORD *)v0 + 1180) = 0; /*0x52a0d8*/
  *((_QWORD *)v0 + 591) = 0; /*0x52a0de*/
  *((_QWORD *)v0 + 592) = 0; /*0x52a0e5*/
  *((_DWORD *)v0 + 1186) = 0; /*0x52a0ec*/
  sub_3DC10(v0 + 4752); /*0x52a0f9*/
  sub_3DC10(v0 + 4816); /*0x52a106*/
  v2 = *(bool (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v0 + 72LL); /*0x52a10f*/
  if ( v2 == GJUserMessage_init ) /*0x52a120*/
    v3 = cocos2d::CCNode::init((cocos2d::CCNode *)v0); /*0x52a122*/
  else
    v3 = v2((cocos2d::CCNode *)v0); /*0x52a12a*/
  if ( v3 ) /*0x52a12e*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x52a133*/
    return v0; /*0x52a139*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x52a15b*/
    return 0; /*0x52a15e*/
  }
}
