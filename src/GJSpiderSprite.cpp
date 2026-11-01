#include <Geode/binding/GJSpiderSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x3a8b70
// Method: GJSpiderSprite::~GJSpiderSprite
_QWORD *__fastcall GJSpiderSprite__dtor_GJSpiderSprite(_QWORD *Block, char a2)
{
  *Block = &GJSpiderSprite::`vftable'; /*0x3a8b83*/
  Block[40] = &GJSpiderSprite::`vftable'; /*0x3a8b90*/
  Block[43] = &GJSpiderSprite::`vftable'; /*0x3a8b9e*/
  GJRobotSprite__dtor_GJRobotSprite((__int64)Block); /*0x3a8ba5*/
  if ( (a2 & 1) != 0 ) /*0x3a8bad*/
    j_j_free(Block); /*0x3a8bb7*/
  return Block; /*0x3a8bbc*/
}

// [2/2] Address: 0x3aa170
// Method: GJSpiderSprite::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJSpiderSprite_create(unsigned int a1)
{
  _QWORD *v2; // rdi
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v2 = operator new(0x328u); /*0x3aa186*/
  sub_3A8A90(v2); /*0x3aa191*/
  *v2 = &GJSpiderSprite::`vftable'; /*0x3aa19d*/
  v2[40] = &GJSpiderSprite::`vftable'; /*0x3aa1a7*/
  v2[43] = &GJSpiderSprite::`vftable'; /*0x3aa1b5*/
  *((_DWORD *)v2 + 196) = 6; /*0x3aa1bc*/
  v4 = 0; /*0x3aa1c9*/
  v5 = 6; /*0x3aa1ce*/
  v6 = 15; /*0x3aa1d7*/
  strcpy((char *)&v4, "Spider"); /*0x3aa1e6*/
  if ( (unsigned __int8)GJRobotSprite_init(v2, a1, &v4) ) /*0x3aa205*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x3aa211*/
    return v2; /*0x3aa217*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x3aa22d*/
    return 0; /*0x3aa230*/
  }
}
