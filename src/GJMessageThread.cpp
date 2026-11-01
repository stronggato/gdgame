#include <Geode/binding/GJMessageThread.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0xaa270
// Method: GJMessageThread::~GJMessageThread
cocos2d::CCObject *__fastcall GJMessageThread__dtor_GJMessageThread(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 288); /*0xaa286*/
  sub_3C310((char *)Block + 256); /*0xaa292*/
  sub_3C310((char *)Block + 208); /*0xaa29e*/
  sub_3C310((char *)Block + 168); /*0xaa2aa*/
  sub_3C310((char *)Block + 136); /*0xaa2b6*/
  sub_3C310((char *)Block + 96); /*0xaa2bf*/
  sub_3C310((char *)Block + 64); /*0xaa2c8*/
  cocos2d::CCObject::~CCObject(Block); /*0xaa2d0*/
  if ( (a2 & 1) != 0 ) /*0xaa2d9*/
    j_j_free(Block); /*0xaa2e3*/
  return Block; /*0xaa2e8*/
}
