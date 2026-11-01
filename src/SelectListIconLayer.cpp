#include <Geode/binding/SelectListIconLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x42da30
// Method: SelectListIconLayer::onSelect
unsigned int __fastcall SelectListIconLayer_onSelect(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v5; // rdi
  int v6; // eax
  void (__fastcall *v7)(char *, __int16 *); // r8
  __int16 *v8; // rdx
  _BYTE v9[3]; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 ) /*0x42da46*/
    *(_DWORD *)(a1 + 672) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x42da51*/
  v3 = 0; /*0x42da5e*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)); /*0x42da60*/
  if ( result ) /*0x42da68*/
  {
    do /*0x42dad1*/
    {
      v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 664), v3); /*0x42da7f*/
      v6 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v5 + 56LL))(v5); /*0x42da8c*/
      v7 = (void (__fastcall *)(char *, __int16 *))**((_QWORD **)v5 + 40); /*0x42da98*/
      if ( *(_DWORD *)(a1 + 672) == v6 ) /*0x42daa1*/
      {
        v8 = &word_6FEBA8; /*0x42dab6*/
      }
      else
      {
        memset(v9, 125, sizeof(v9)); /*0x42daa3*/
        v8 = (__int16 *)v9; /*0x42daaa*/
      }
      v7((char *)v5 + 320, v8); /*0x42dabd*/
      ++v3; /*0x42dac7*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)); /*0x42dac9*/
    }
    while ( v3 < result ); /*0x42dad1*/
  }
  return result; /*0x42dad8*/
}

// [3/3] Address: 0x42db30
// Method: SelectListIconLayer::keyBackClicked
__int64 __fastcall SelectListIconLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rdx

  v1 = a1 - 336; /*0x42db36*/
  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 344); /*0x42db3d*/
  if ( v2 ) /*0x42db47*/
    (**v2)(v2, v1); /*0x42db4f*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x42db59*/
  LOBYTE(v3) = 1; /*0x42db62*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v3);
}
