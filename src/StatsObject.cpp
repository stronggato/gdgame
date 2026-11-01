#include <Geode/binding/StatsObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x14c270
// Method: StatsObject::create
// Hidden C++ exception states: #wind=2
_OWORD *__fastcall StatsObject_create(__int64 a1, int a2)
{
  _OWORD *v4; // rbx
  __int64 v5; // r8
  cocos2d::CCString *v6; // rax
  void *v7; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]
  unsigned __int64 v11; // [rsp+50h] [rbp-18h]

  v4 = operator new(0x48u); /*0x14c29d*/
  *v4 = 0; /*0x14c2aa*/
  v4[1] = 0; /*0x14c2ad*/
  v4[2] = 0; /*0x14c2b1*/
  v4[3] = 0; /*0x14c2b5*/
  *((_QWORD *)v4 + 8) = 0; /*0x14c2b9*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v4); /*0x14c2c0*/
  *(_QWORD *)v4 = &StatsObject::`vftable'; /*0x14c2cd*/
  *(_OWORD *)Block = 0; /*0x14c2d3*/
  v10 = 0; /*0x14c2d8*/
  v11 = 0; /*0x14c2e1*/
  v5 = -1; /*0x14c2ea*/
  do /*0x14c2f4*/
    ++v5; /*0x14c2f1*/
  while ( *(_BYTE *)(a1 + v5) ); /*0x14c2f4*/
  sub_3C230(Block); /*0x14c303*/
  v6 = (cocos2d::CCString *)cocos2d::CCString::create(Block); /*0x14c30e*/
  *((_QWORD *)v4 + 7) = cocos2d::CCString::getCString(v6); /*0x14c31d*/
  if ( v11 > 0xF ) /*0x14c32a*/
  {
    v7 = Block[0]; /*0x14c32f*/
    if ( v11 + 1 >= 0x1000 ) /*0x14c33e*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x14c344*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x14c353*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14c368*/
    }
    j_j_free(v7); /*0x14c36f*/
  }
  *((_DWORD *)v4 + 16) = a2; /*0x14c374*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x14c37a*/
  return v4; /*0x14c383*/
}

// [2/2] Address: 0x14c3b0
// Method: StatsObject::~StatsObject
cocos2d::CCObject *__fastcall StatsObject__dtor_StatsObject(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject::~CCObject(Block); /*0x14c3bf*/
  if ( (a2 & 1) != 0 ) /*0x14c3c8*/
    j_j_free(Block); /*0x14c3d2*/
  return Block; /*0x14c3d7*/
}
