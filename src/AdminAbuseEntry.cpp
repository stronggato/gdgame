#include <Geode/binding/AdminAbuseEntry.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x2141f0
// Method: AdminAbuseEntry::~AdminAbuseEntry
cocos2d::CCObject *__fastcall AdminAbuseEntry__dtor_AdminAbuseEntry(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 152); /*0x214206*/
  sub_3C310((char *)Block + 112); /*0x21420f*/
  sub_3C310((char *)Block + 80); /*0x214218*/
  cocos2d::CCObject::~CCObject(Block); /*0x214220*/
  if ( (a2 & 1) != 0 ) /*0x214229*/
    j_j_free(Block); /*0x214233*/
  return Block; /*0x214238*/
}
