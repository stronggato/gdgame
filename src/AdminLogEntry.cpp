#include <Geode/Bindings.hpp>
#include <Geode/binding/AdminLogEntry.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x2140a0
// Method: AdminLogEntry::~AdminLogEntry
AdminLogEntry::~AdminLogEntry()
{
  auto Block = (cocos2d::CCLayer*)this;
  auto a1 = (char*)this;
  char a2 = 0;

  sub_3C310((char *)Block + 200); /*0x2140b6*/
  sub_3C310((char *)Block + 168); /*0x2140c2*/
  sub_3C310((char *)Block + 136); /*0x2140ce*/
  sub_3C310((char *)Block + 88); /*0x2140d7*/
  sub_3C310((char *)Block + 56); /*0x2140e0*/
//   cocos2d::CCObject::~CCObject(Block); /*0x2140e8*/ // cleaned base ctor/dtor
//   if ( (a2 & 1) != 0 ) /*0x2140f1*/
//     j_j_free(Block); /*0x2140fb*/ // cleaned scalar delete
  return; /*0x214100*/
}
