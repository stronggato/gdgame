#include <Geode/binding/MusicChangelogLine.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x47cb10
// Method: MusicChangelogLine::~MusicChangelogLine
cocos2d::CCObject *__fastcall MusicChangelogLine__dtor_MusicChangelogLine(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 64); /*0x47cb23*/
  cocos2d::CCObject::~CCObject(Block); /*0x47cb2b*/
  if ( (a2 & 1) != 0 ) /*0x47cb34*/
    j_j_free(Block); /*0x47cb3e*/
  return Block; /*0x47cb43*/
}
