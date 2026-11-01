#include <Geode/binding/AdminReportQueueEntry.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x214180
// Method: AdminReportQueueEntry::~AdminReportQueueEntry
cocos2d::CCObject *__fastcall AdminReportQueueEntry__dtor_AdminReportQueueEntry(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 192); /*0x214196*/
  sub_3C310((char *)Block + 160); /*0x2141a2*/
  sub_3C310((char *)Block + 120); /*0x2141ab*/
  sub_3C310((char *)Block + 64); /*0x2141b4*/
  cocos2d::CCObject::~CCObject(Block); /*0x2141bc*/
  if ( (a2 & 1) != 0 ) /*0x2141c5*/
    j_j_free(Block); /*0x2141cf*/
  return Block; /*0x2141d4*/
}
