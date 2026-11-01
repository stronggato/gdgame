#include <Geode/binding/DemonFilterSelectLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0x43d0f0
// Method: DemonFilterSelectLayer::selectRating
unsigned int __fastcall DemonFilterSelectLayer_selectRating(__int64 a1, __int64 a2)
{
  int v3; // eax
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  void *v10; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x43d103*/
  v4 = *(cocos2d::CCArray **)(a1 + 664); /*0x43d106*/
  v5 = 0; /*0x43d10d*/
  *(_DWORD *)(a1 + 680) = v3; /*0x43d10f*/
  result = cocos2d::CCArray::count(v4); /*0x43d115*/
  if ( result ) /*0x43d11d*/
  {
    do /*0x43d194*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 664), v5); /*0x43d13f*/
      v8 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 952LL))(v7); /*0x43d154*/
      v9 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 56LL))(v7); /*0x43d15e*/
      v10 = &unk_6FEBAC; /*0x43d167*/
      if ( *(_DWORD *)(a1 + 680) == v9 ) /*0x43d177*/
        v10 = &unk_6FEBB0; /*0x43d179*/
      (**(void (__fastcall ***)(__int64, void *))(v8 + 320))(v8 + 320, v10); /*0x43d180*/
      ++v5; /*0x43d18a*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)); /*0x43d18c*/
    }
    while ( v5 < result ); /*0x43d194*/
  }
  return result; /*0x43d1a0*/
}

// [3/4] Address: 0x43d1b0
// Method: DemonFilterSelectLayer::onClose
__int64 __fastcall DemonFilterSelectLayer_onClose(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD); // rcx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x43d1be*/
  LOBYTE(v2) = 1; /*0x43d1c7*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2); /*0x43d1cc*/
  v4 = *(__int64 (__fastcall ****)(_QWORD, _QWORD))(a1 + 688); /*0x43d1d2*/
  if ( v4 ) /*0x43d1dc*/
    return (**v4)(v4, *(unsigned int *)(a1 + 680)); /*0x43d1ec*/
  return result; /*0x43d1ef*/
}

// [4/4] Address: 0x43d200
// Method: DemonFilterSelectLayer::keyBackClicked
__int64 __fastcall DemonFilterSelectLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD); // rcx

  v1 = a1 - 336; /*0x43d206*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x43d215*/
  LOBYTE(v2) = 1; /*0x43d21e*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v2); /*0x43d223*/
  v4 = *(__int64 (__fastcall ****)(_QWORD, _QWORD))(v1 + 688); /*0x43d229*/
  if ( v4 ) /*0x43d233*/
    return (**v4)(v4, *(unsigned int *)(v1 + 680)); /*0x43d243*/
  return result; /*0x43d246*/
}
