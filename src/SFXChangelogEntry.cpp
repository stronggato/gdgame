#include <Geode/binding/SFXChangelogEntry.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x47cab0
// Method: SFXChangelogEntry::~SFXChangelogEntry
cocos2d::CCObject *__fastcall SFXChangelogEntry__dtor_SFXChangelogEntry(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &SFXChangelogEntry::`vftable'; /*0x47cac6*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 9); /*0x47cac9*/
  if ( v4 ) /*0x47cad0*/
    cocos2d::CCObject::release(v4); /*0x47cad2*/
  cocos2d::CCObject::~CCObject(Block); /*0x47cadb*/
  if ( (a2 & 1) != 0 ) /*0x47cae6*/
    j_j_free(Block); /*0x47caf0*/
  return Block; /*0x47caf8*/
}
