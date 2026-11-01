#include <Geode/binding/GJNotification.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x215cc0
// Method: GJNotification::~GJNotification
cocos2d::CCObject *__fastcall GJNotification__dtor_GJNotification(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 264); /*0x215cd6*/
  sub_3C310((char *)Block + 208); /*0x215ce2*/
  sub_3C310((char *)Block + 160); /*0x215cee*/
  sub_3C310((char *)Block + 128); /*0x215cfa*/
  sub_3C310((char *)Block + 96); /*0x215d03*/
  sub_3C310((char *)Block + 64); /*0x215d0c*/
  cocos2d::CCObject::~CCObject(Block); /*0x215d14*/
  if ( (a2 & 1) != 0 ) /*0x215d1d*/
    j_j_free(Block); /*0x215d27*/
  return Block; /*0x215d2c*/
}
