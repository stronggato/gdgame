#include <Geode/binding/GameObjectCopy.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x406090
// Method: GameObjectCopy::~GameObjectCopy
cocos2d::CCObject *__fastcall GameObjectCopy__dtor_GameObjectCopy(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &GameObjectCopy::`vftable'; /*0x4060a6*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 7); /*0x4060a9*/
  if ( v4 ) /*0x4060b0*/
    cocos2d::CCObject::release(v4); /*0x4060b2*/
  cocos2d::CCObject::~CCObject(Block); /*0x4060bb*/
  if ( (a2 & 1) != 0 ) /*0x4060c6*/
    j_j_free(Block); /*0x4060d0*/
  return Block; /*0x4060d8*/
}

// [2/2] Address: 0x4060f0
// Method: GameObjectCopy::create
// Hidden C++ exception states: #wind=2
_OWORD *__fastcall GameObjectCopy_create(cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _OWORD *v5; // [rsp+38h] [rbp+10h]

  v5 = operator new(0x60u); /*0x40610f*/
  *v5 = 0; /*0x406117*/
  v5[1] = 0; /*0x40611a*/
  v5[2] = 0; /*0x40611e*/
  v5[3] = 0; /*0x406122*/
  v5[4] = 0; /*0x406126*/
  v5[5] = 0; /*0x40612a*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v5); /*0x406131*/
  *(_QWORD *)v5 = &GameObjectCopy::`vftable'; /*0x40613f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 4)); /*0x406146*/
  *((_QWORD *)v5 + 7) = a1; /*0x40614d*/
  cocos2d::CCObject::retain(a1); /*0x406154*/
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 7) + 200LL))(*((_QWORD *)v5 + 7)); /*0x406161*/
  cocos2d::CCPoint::operator=(v5 + 4, v2); /*0x40616e*/
  *((float *)v5 + 18) = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 7) + 376LL))(*((_QWORD *)v5 + 7)); /*0x406181*/
  *((float *)v5 + 19) = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 7) + 392LL))(*((_QWORD *)v5 + 7)); /*0x406193*/
  *((_BYTE *)v5 + 80) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 7) + 1272LL))(*((_QWORD *)v5 + 7)); /*0x4061a5*/
  *((_BYTE *)v5 + 81) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 7) + 1280LL))(*((_QWORD *)v5 + 7)); /*0x4061b5*/
  v3 = *((_QWORD *)v5 + 7); /*0x4061b8*/
  *((_DWORD *)v5 + 21) = *(_DWORD *)(v3 + 1160); /*0x4061c2*/
  *((_DWORD *)v5 + 22) = *(_DWORD *)(v3 + 1164); /*0x4061cb*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v5); /*0x4061d1*/
  return v5; /*0x4061da*/
}
