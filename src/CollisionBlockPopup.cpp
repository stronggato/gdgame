#include <Geode/binding/CollisionBlockPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0xa39a0
// Method: CollisionBlockPopup::~CollisionBlockPopup
cocos2d::CCNode *__fastcall CollisionBlockPopup__dtor_CollisionBlockPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &CollisionBlockPopup::`vftable'; /*0xa39b3*/
  *((_QWORD *)Block + 40) = &CollisionBlockPopup::`vftable'; /*0xa39c0*/
  *((_QWORD *)Block + 41) = &CollisionBlockPopup::`vftable'; /*0xa39ce*/
  *((_QWORD *)Block + 42) = &CollisionBlockPopup::`vftable'; /*0xa39dc*/
  *((_QWORD *)Block + 43) = &CollisionBlockPopup::`vftable'; /*0xa39ea*/
  *((_QWORD *)Block + 44) = &CollisionBlockPopup::`vftable'; /*0xa39f8*/
  *((_QWORD *)Block + 51) = &CollisionBlockPopup::`vftable'; /*0xa3a06*/
  *((_QWORD *)Block + 54) = &CollisionBlockPopup::`vftable'; /*0xa3a14*/
  *((_QWORD *)Block + 68) = &CollisionBlockPopup::`vftable'; /*0xa3a22*/
  *((_QWORD *)Block + 83) = &CollisionBlockPopup::`vftable'; /*0xa3a30*/
  *((_QWORD *)Block + 84) = &CollisionBlockPopup::`vftable'; /*0xa3a3e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0xa3a45*/
  if ( (a2 & 1) != 0 ) /*0xa3a4d*/
    j_j_free(Block); /*0xa3a57*/
  return Block; /*0xa3a5c*/
}

// [2/2] Address: 0xa4000
// Method: CollisionBlockPopup::valueDidChange
__int64 __fastcall CollisionBlockPopup_valueDidChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 80 || a2 == 94 ) /*0xa4008*/
    return sub_607BB0(a1); /*0xa400a*/
  return result; /*0xa400f*/
}
