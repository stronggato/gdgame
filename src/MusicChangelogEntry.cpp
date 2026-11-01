#include <Geode/binding/MusicChangelogEntry.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x47cb60
// Method: MusicChangelogEntry::~MusicChangelogEntry
cocos2d::CCObject *__fastcall MusicChangelogEntry__dtor_MusicChangelogEntry(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &MusicChangelogEntry::`vftable'; /*0x47cb76*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 9); /*0x47cb79*/
  if ( v4 ) /*0x47cb80*/
    cocos2d::CCObject::release(v4); /*0x47cb82*/
  cocos2d::CCObject::~CCObject(Block); /*0x47cb8b*/
  if ( (a2 & 1) != 0 ) /*0x47cb96*/
    j_j_free(Block); /*0x47cba0*/
  return Block; /*0x47cba8*/
}
