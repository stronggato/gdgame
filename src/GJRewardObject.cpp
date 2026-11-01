#include <Geode/binding/GJRewardObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x2f5070
// Method: GJRewardObject::createItemUnlock
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall GJRewardObject_createItemUnlock(int a1, int a2)
{
  cocos2d::CCObject *v5; // [rsp+40h] [rbp+18h]

  v5 = (cocos2d::CCObject *)operator new(0x48u); /*0x2f5090*/
  cocos2d::CCObject::CCObject(v5); /*0x2f5098*/
  *(_QWORD *)v5 = &GJRewardObject::`vftable'; /*0x2f50a5*/
  *((_DWORD *)v5 + 14) = 9; /*0x2f50a8*/
  *((_DWORD *)v5 + 16) = a2; /*0x2f50af*/
  *((_DWORD *)v5 + 17) = 1; /*0x2f50b2*/
  cocos2d::CCObject::autorelease(v5); /*0x2f50bc*/
  *((_DWORD *)v5 + 15) = a1; /*0x2f50c2*/
  return v5; /*0x2f50c8*/
}

// [2/3] Address: 0x2f50e0
// Method: GJRewardObject::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall GJRewardObject_create(int a1, int a2, int a3)
{
  cocos2d::CCObject *v7; // [rsp+48h] [rbp+20h]

  v7 = (cocos2d::CCObject *)operator new(0x48u); /*0x2f5108*/
  cocos2d::CCObject::CCObject(v7); /*0x2f5110*/
  *(_QWORD *)v7 = &GJRewardObject::`vftable'; /*0x2f511d*/
  *((_DWORD *)v7 + 14) = a1; /*0x2f5120*/
  *((_DWORD *)v7 + 16) = a3; /*0x2f5123*/
  *((_DWORD *)v7 + 17) = a2; /*0x2f5126*/
  cocos2d::CCObject::autorelease(v7); /*0x2f512c*/
  return v7; /*0x2f5135*/
}

// [3/3] Address: 0x2f5150
// Method: GJRewardObject::encodeWithCoder
void __fastcall GJRewardObject_encodeWithCoder(_DWORD *a1, DS_Dictionary *a2)
{
  DS_Dictionary::setIntegerForKey(a2, "kCEK", 9); /*0x2f5170*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708050, a1[14]); /*0x2f5184*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708048, a1[16]); /*0x2f5198*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708044, a1[17]); /*0x2f51ac*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_70803C, a1[15]); /*0x2f51ca*/
}
