#include <Geode/binding/BitmapFontCache.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3ce90
// Method: BitmapFontCache::fontWithConfigFile
// Hidden C++ exception states: #wind=4
_QWORD *__fastcall BitmapFontCache_fontWithConfigFile(__int64 a1, const char *a2, float a3)
{
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  const char *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rsi
  void *v11; // r8
  __int64 v12; // rbx
  void *v13; // r8
  _QWORD *v15; // rsi
  void *v16; // rcx
  void *Block[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h]
  unsigned __int64 v19; // [rsp+50h] [rbp-38h]

  v5 = cocos2d::CCString::createWithFormat("%s%f", a2, a3); /*0x3cec5*/
  CString = cocos2d::CCString::getCString(v5); /*0x3cece*/
  v7 = CString; /*0x3ced4*/
  *(_OWORD *)Block = 0; /*0x3ceda*/
  v18 = 0; /*0x3cee2*/
  v19 = 0; /*0x3cee7*/
  v8 = -1; /*0x3ceec*/
  v9 = -1; /*0x3cef3*/
  do /*0x3cef9*/
    ++v9; /*0x3cef6*/
  while ( CString[v9] ); /*0x3cef9*/
  sub_3C230(Block); /*0x3cf07*/
  v10 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 56), Block); /*0x3cf1c*/
  if ( v19 > 0xF ) /*0x3cf28*/
  {
    v11 = Block[0]; /*0x3cf2d*/
    if ( v19 + 1 >= 0x1000 ) /*0x3cf3c*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x3cf42*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x3cf51*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3cf62*/
    }
    j_j_free(v11); /*0x3cf6c*/
  }
  if ( v10 ) /*0x3cf74*/
  {
    *(_OWORD *)Block = 0; /*0x3cf7d*/
    v18 = 0; /*0x3cf82*/
    v19 = 0; /*0x3cf87*/
    do /*0x3cf93*/
      ++v8; /*0x3cf90*/
    while ( v7[v8] ); /*0x3cf93*/
    sub_3C230(Block); /*0x3cfa4*/
    v12 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 56), Block); /*0x3cfb9*/
    if ( v19 > 0xF ) /*0x3cfc5*/
    {
      v13 = Block[0]; /*0x3cfca*/
      if ( v19 + 1 >= 0x1000 ) /*0x3cfd9*/
      {
        v13 = (void *)*((_QWORD *)Block[0] - 1); /*0x3cfdf*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0x3cfee*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3cfff*/
      }
      j_j_free(v13); /*0x3d009*/
    }
    return (_QWORD *)v12; /*0x3d00e*/
  }
  else
  {
    v15 = operator new(0xB8u); /*0x3d020*/
    memset(v15, 0, 0xB8u); /*0x3d033*/
    cocos2d::CCObject::CCObject((cocos2d::CCObject *)v15); /*0x3d03b*/
    *v15 = &FontObject::`vftable'; /*0x3d049*/
    sub_3DC10(v15 + 7); /*0x3d050*/
    sub_3DC10(v15 + 15); /*0x3d05a*/
    sub_3D1C0(v15, a2); /*0x3d066*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v15); /*0x3d06e*/
    *(_OWORD *)Block = 0; /*0x3d077*/
    v18 = 0; /*0x3d07c*/
    v19 = 0; /*0x3d081*/
    do /*0x3d089*/
      ++v8; /*0x3d086*/
    while ( v7[v8] ); /*0x3d089*/
    sub_3C230(Block); /*0x3d09a*/
    cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 56), v15, Block); /*0x3d0ac*/
    if ( v19 > 0xF ) /*0x3d0bc*/
    {
      v16 = Block[0]; /*0x3d0c1*/
      if ( v19 + 1 >= 0x1000 ) /*0x3d0d0*/
      {
        v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d0d6*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x3d0e5*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3d0f6*/
      }
      j_j_free(v16); /*0x3d0fd*/
    }
    return v15; /*0x3d102*/
  }
}
