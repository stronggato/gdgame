#include <Geode/binding/SearchButton.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x4374a0
// Method: SearchButton::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SearchButton_create(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v7; // rsi
  int v8; // edx
  int v9; // r9d

  v7 = operator new(0x268u); /*0x4374cc*/
  memset(v7, 0, 0x268u); /*0x4374df*/
  cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)v7); /*0x4374e7*/
  *v7 = &SearchButton::`vftable'; /*0x4374f4*/
  v7[40] = &SearchButton::`vftable'; /*0x4374fe*/
  v7[43] = &SearchButton::`vftable'; /*0x43750c*/
  v7[75] = 0; /*0x437513*/
  v7[76] = 0; /*0x43751e*/
  if ( (unsigned __int8)sub_4375D0((_DWORD)v7, v8, a2, v9, a4, a5) ) /*0x437543*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v7); /*0x43754f*/
    return v7; /*0x437555*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 8LL))(v7, 1); /*0x437569*/
    return 0; /*0x43756c*/
  }
}

// [2/2] Address: 0x437590
// Method: SearchButton::~SearchButton
cocos2d::CCSprite *__fastcall SearchButton__dtor_SearchButton(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCSprite::~CCSprite(Block); /*0x43759f*/
  if ( (a2 & 1) != 0 ) /*0x4375a8*/
    j_j_free(Block); /*0x4375b2*/
  return Block; /*0x4375b7*/
}
