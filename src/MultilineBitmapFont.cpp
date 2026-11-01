#include <Geode/binding/MultilineBitmapFont.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x78990
// Method: MultilineBitmapFont::setOpacity
void __fastcall MultilineBitmapFont_setOpacity(cocos2d::CCArray **a1, unsigned __int8 a2)
{
  unsigned int i; // ebx
  struct cocos2d::CCObject *v5; // rax

  for ( i = 0; i < cocos2d::CCArray::count(a1[40]); ++i ) /*0x789ae*/
  {
    v5 = cocos2d::CCArray::objectAtIndex(a1[40], i); /*0x789c9*/
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v5 + 40) + 40LL))((__int64)v5 + 320, a2); /*0x789dd*/
  }
  cocos2d::CCSprite::setOpacity((cocos2d::CCSprite *)a1, a2); /*0x78a09*/
}

// [3/3] Address: 0x79c10
// Method: MultilineBitmapFont::moveSpecialDescriptors
unsigned int __fastcall MultilineBitmapFont_moveSpecialDescriptors(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v8; // rax
  int v9; // edx
  int v10; // ecx

  v6 = 0; /*0x79c33*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 632)); /*0x79c35*/
  if ( result ) /*0x79c3d*/
  {
    while ( 1 ) /*0x79c49*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 632), v6); /*0x79c49*/
      v9 = *((_DWORD *)v8 + 15); /*0x79c4f*/
      v10 = *((_DWORD *)v8 + 16); /*0x79c52*/
      if ( v9 <= a2 ) /*0x79c57*/
        break; /*0x79c57*/
      *((_DWORD *)v8 + 15) = v9 - a3; /*0x79c5b*/
      if ( v10 != -1 ) /*0x79c61*/
        goto LABEL_7; /*0x79c61*/
LABEL_8:
      ++v6; /*0x79c73*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 632)); /*0x79c7c*/
      if ( v6 >= result ) /*0x79c84*/
        return result; /*0x79c84*/
    }
    if ( v10 == -1 || v10 <= a2 ) /*0x79c6c*/
      goto LABEL_8; /*0x79c6c*/
LABEL_7:
    *((_DWORD *)v8 + 16) = v10 - a3; /*0x79c6e*/
    goto LABEL_8; /*0x79c70*/
  }
  return result; /*0x79c86*/
}
