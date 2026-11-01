#include <Geode/binding/HSVLiveOverlay.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3bd780
// Method: HSVLiveOverlay::onSelectTab
__int64 __fastcall HSVLiveOverlay_onSelectTab(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3bd78f*/
  if ( *(_DWORD *)(a1 + 712) != (_DWORD)result ) /*0x3bd798*/
    return sub_3BD7B0(a1, (unsigned int)result); /*0x3bd7a4*/
  return result; /*0x3bd79f*/
}

// [2/3] Address: 0x3bd970
// Method: HSVLiveOverlay::keyBackClicked
__int64 __fastcall HSVLiveOverlay_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  void (__fastcall ***v3)(_QWORD, _QWORD *); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x3bd976*/
  *(_BYTE *)(a1 - 336 + 730) = 0; /*0x3bd982*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v1 + 992LL))(v1, 0); /*0x3bd98c*/
  v3 = (void (__fastcall ***)(_QWORD, _QWORD *))v1[88]; /*0x3bd992*/
  if ( v3 ) /*0x3bd99c*/
    (**v3)(v3, v1); /*0x3bd9a4*/
  LOBYTE(v2) = 1; /*0x3bd9a9*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2);
}

// [3/3] Address: 0x3bd9c0
// Method: HSVLiveOverlay::hsvChanged
int __fastcall HSVLiveOverlay_hsvChanged(__int64 a1, __int64 a2)
{
  struct cocos2d::CCArray *v4; // rax
  struct cocos2d::CCObject *v5; // rcx
  unsigned int v6; // edi
  int v7; // ebp
  BOOL v8; // r14d
  cocos2d::CCArray *v9; // rbx
  struct cocos2d::CCObject *v10; // rcx
  int v11; // eax
  __int64 RelativeSpriteColor; // rax
  __int128 v14; // [rsp+20h] [rbp-18h]

  LODWORD(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3bd9e6*/
  v5 = *(struct cocos2d::CCObject **)(a1 + 8); /*0x3bd9f0*/
  v6 = 0; /*0x3bd9f4*/
  v7 = (int)v4; /*0x3bd9fc*/
  v8 = (_DWORD)v4 != 1; /*0x3bd9fe*/
  v14 = *(_OWORD *)(a2 + 376); /*0x3bda02*/
  if ( v5 ) /*0x3bda0a*/
  {
    v4 = cocos2d::CCArray::createWithObject(v5); /*0x3bda0c*/
    v9 = v4; /*0x3bda12*/
  }
  else
  {
    v9 = *(cocos2d::CCArray **)(a1 + 16); /*0x3bda17*/
  }
  if ( v9 ) /*0x3bda1e*/
  {
    LODWORD(v4) = cocos2d::CCArray::count(v9); /*0x3bda23*/
    if ( (_DWORD)v4 ) /*0x3bda2b*/
    {
      do /*0x3bda89*/
      {
        v10 = cocos2d::CCArray::objectAtIndex(v9, v6); /*0x3bda3b*/
        v11 = *((_DWORD *)v10 + 259); /*0x3bda3e*/
        if ( v11 == 1006 || v11 == 899 ) /*0x3bda50*/
        {
          if ( v7 == 1 ) /*0x3bda6e*/
            *(_OWORD *)((char *)v10 + 1628) = v14; /*0x3bda75*/
        }
        else
        {
          RelativeSpriteColor = GameObject_getRelativeSpriteColor((__int64)v10, v8 + 1); /*0x3bda56*/
          if ( RelativeSpriteColor ) /*0x3bda5e*/
            *(_OWORD *)(RelativeSpriteColor + 16) = v14; /*0x3bda65*/
        }
        ++v6; /*0x3bda7f*/
        LODWORD(v4) = cocos2d::CCArray::count(v9); /*0x3bda81*/
      }
      while ( v6 < (unsigned int)v4 ); /*0x3bda89*/
    }
  }
  return (int)v4; /*0x3bda8b*/
}
