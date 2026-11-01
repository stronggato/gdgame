#include <Geode/binding/TextStyleSection.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x77c60
// Method: TextStyleSection::~TextStyleSection
cocos2d::CCObject *__fastcall TextStyleSection__dtor_TextStyleSection(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject::~CCObject(Block); /*0x77c6f*/
  if ( (a2 & 1) != 0 ) /*0x77c78*/
    j_j_free(Block); /*0x77c82*/
  return Block; /*0x77c87*/
}

// [2/2] Address: 0x7a050
// Method: TextStyleSection::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall TextStyleSection_create(int a1, int a2, int a3)
{
  cocos2d::CCObject *v7; // [rsp+48h] [rbp+20h]

  v7 = (cocos2d::CCObject *)operator new(0x60u); /*0x7a078*/
  cocos2d::CCObject::CCObject(v7); /*0x7a080*/
  *(_QWORD *)v7 = &TextStyleSection::`vftable'; /*0x7a08d*/
  *((_QWORD *)v7 + 11) = 0; /*0x7a090*/
  *((_DWORD *)v7 + 14) = a3; /*0x7a098*/
  *((_DWORD *)v7 + 15) = a1; /*0x7a09b*/
  *((_DWORD *)v7 + 16) = a2; /*0x7a09e*/
  cocos2d::CCObject::autorelease(v7); /*0x7a0a4*/
  return v7; /*0x7a0ad*/
}
