#include <Geode/binding/ThreadRequestPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0xd2060
// Method: ThreadRequestPopup::~ThreadRequestPopup
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ThreadRequestPopup__dtor_ThreadRequestPopup(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &ThreadRequestPopup::`vftable'; /*0xd2076*/
  Block[40] = &ThreadRequestPopup::`vftable'; /*0xd2080*/
  Block[41] = &ThreadRequestPopup::`vftable'; /*0xd208e*/
  Block[42] = &ThreadRequestPopup::`vftable'; /*0xd209c*/
  Block[43] = &ThreadRequestPopup::`vftable'; /*0xd20aa*/
  Block[44] = &ThreadRequestPopup::`vftable'; /*0xd20b8*/
  Block[51] = &ThreadRequestPopup::`vftable'; /*0xd20c6*/
  Block[54] = &ThreadRequestPopup::`vftable'; /*0xd20d4*/
  Block[68] = &ThreadRequestPopup::`vftable'; /*0xd20e2*/
  v4 = (cocos2d::CCObject *)Block[83]; /*0xd20e9*/
  if ( v4 ) /*0xd20f3*/
    cocos2d::CCObject::release(v4); /*0xd20f5*/
  StarInfoPopup__dtor_StarInfoPopup((__int64)Block); /*0xd20fe*/
  if ( (a2 & 1) != 0 ) /*0xd2108*/
    j_j_free(Block); /*0xd2112*/
  return Block; /*0xd211a*/
}
