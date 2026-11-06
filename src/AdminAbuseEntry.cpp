#include <Geode/binding/AdminAbuseEntry.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x2141f0
// Method: AdminAbuseEntry::~AdminAbuseEntry
AdminAbuseEntry::~AdminAbuseEntry()
{
  auto Block = (cocos2d::CCLayer*)this;
  auto a1 = (char*)this;
  char a2 = 0;

  sub_3C310((char *)Block + 152); /*0x214206*/
  sub_3C310((char *)Block + 112); /*0x21420f*/
  sub_3C310((char *)Block + 80); /*0x214218*/
//   cocos2d::CCObject::~CCObject(Block); /*0x214220*/ // cleaned base ctor/dtor
//   if ( (a2 & 1) != 0 ) /*0x214229*/
//     j_j_free(Block); /*0x214233*/ // cleaned scalar delete
  return; /*0x214238*/
}
