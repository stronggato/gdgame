#include <Geode/binding/NCSInfoLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x165690
// Method: NCSInfoLayer::onLibrary
__int64 __fastcall NCSInfoLayer_onLibrary(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 672); /*0x16569f*/
  if ( v2 && (v3 = *(_QWORD *)(v2 + 680)) != 0 ) /*0x1656b5*/
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3); /*0x1656ba*/
  else
    v4 = 0; /*0x1656bf*/
  v5 = MusicBrowser_create(v4, 1u); /*0x1656c8*/
  v6 = *(_QWORD *)(a1 + 672); /*0x1656cd*/
  v7 = v6 == 0; /*0x1656d4*/
  v8 = v6 + 672; /*0x1656d7*/
  v9 = *v5; /*0x1656de*/
  if ( v7 ) /*0x1656e1*/
    v8 = 0; /*0x1656e1*/
  v5[110] = v8; /*0x1656e5*/
  return (*(__int64 (__fastcall **)(__int64 *))(v9 + 1064))(v5); /*0x1656f6*/
}
