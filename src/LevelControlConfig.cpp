#include <Geode/binding/LevelControlConfig.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x446180
// Method: LevelControlConfig::~LevelControlConfig
char *__fastcall LevelControlConfig__dtor_LevelControlConfig(char *Block, char a2)
{
  sub_447CD0(Block + 136); /*0x4461a0*/
  sub_389620(Block + 112, Block + 112, *(_QWORD *)(*((_QWORD *)Block + 14) + 8LL)); /*0x4461b5*/
  j_j_free(*((void **)Block + 14)); /*0x4461c3*/
  *((_QWORD *)Block + 13) = &KeybindSource::`vftable'; /*0x4461cf*/
  sub_389620(Block + 80, Block + 80, *(_QWORD *)(*((_QWORD *)Block + 10) + 8LL)); /*0x4461e3*/
  j_j_free(*((void **)Block + 10)); /*0x4461f1*/
  *((_QWORD *)Block + 9) = &KeybindSource::`vftable'; /*0x4461f9*/
  cocos2d::CCObject::~CCObject((cocos2d::CCObject *)Block); /*0x4461fd*/
  if ( (a2 & 1) != 0 ) /*0x446207*/
    j_j_free(Block); /*0x446211*/
  return Block; /*0x446216*/
}
