#include <Geode/binding/AdminLogEntry.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x2140a0
// Method: AdminLogEntry::~AdminLogEntry
cocos2d::CCObject *__fastcall AdminLogEntry__dtor_AdminLogEntry(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 200); /*0x2140b6*/
  sub_3C310((char *)Block + 168); /*0x2140c2*/
  sub_3C310((char *)Block + 136); /*0x2140ce*/
  sub_3C310((char *)Block + 88); /*0x2140d7*/
  sub_3C310((char *)Block + 56); /*0x2140e0*/
  cocos2d::CCObject::~CCObject(Block); /*0x2140e8*/
  if ( (a2 & 1) != 0 ) /*0x2140f1*/
    j_j_free(Block); /*0x2140fb*/
  return Block; /*0x214100*/
}
