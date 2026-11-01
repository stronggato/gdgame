#include <Geode/binding/SongObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x86600
// Method: SongObject::~SongObject
cocos2d::CCObject *__fastcall SongObject__dtor_SongObject(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject::~CCObject(Block); /*0x8660f*/
  if ( (a2 & 1) != 0 ) /*0x86618*/
    j_j_free(Block); /*0x86622*/
  return Block; /*0x86627*/
}
