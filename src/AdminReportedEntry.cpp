#include <Geode/binding/AdminReportedEntry.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x214110
// Method: AdminReportedEntry::~AdminReportedEntry
char *__fastcall AdminReportedEntry__dtor_AdminReportedEntry(char *Block, char a2)
{
  sub_3C310(Block + 216); /*0x214126*/
  sub_3C310(Block + 144); /*0x214132*/
  sub_3C310(Block + 112); /*0x21413b*/
  sub_3DA90(Block + 80); /*0x214144*/
  cocos2d::CCObject::~CCObject((cocos2d::CCObject *)Block); /*0x21414c*/
  if ( (a2 & 1) != 0 ) /*0x214155*/
    j_j_free(Block); /*0x21415f*/
  return Block; /*0x214164*/
}
