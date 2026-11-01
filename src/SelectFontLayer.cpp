#include <Geode/binding/SelectFontLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x1933f0
// Method: SelectFontLayer::updateFontLabel
// Hidden C++ exception states: #wind=4
__int64 __fastcall SelectFontLayer_updateFontLabel(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *v7; // [rsp+40h] [rbp+8h]
  void *v8; // [rsp+40h] [rbp+8h]
  void *v9; // [rsp+40h] [rbp+8h]

  result = *(_QWORD *)(a1 + 1072); /*0x193402*/
  if ( result && !*(_BYTE *)(result + 545) ) /*0x193412*/
  {
    v3 = *(_QWORD *)&qword_905FB0; /*0x19341f*/
    if ( *(_QWORD *)&qword_905FB0 /*0x193460*/
      || (v7 = operator new(0x690u),
          *(_QWORD *)&qword_905FB0 = sub_214250(v7),
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0),
          (v3 = *(_QWORD *)&qword_905FB0) != 0) )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 1072) + 320LL); /*0x193469*/
      result = GameLevelManager_hasLikedItem(v3, 5, v4, 1u, 0); /*0x193485*/
      if ( (_BYTE)result ) /*0x19348c*/
        return result; /*0x19348c*/
      result = GameLevelManager_hasLikedItem(v3, 5, v4, 0, 0); /*0x1934a8*/
      if ( (_BYTE)result ) /*0x1934af*/
        return result; /*0x1934af*/
      v3 = *(_QWORD *)&qword_905FB0; /*0x1934b5*/
    }
    v5 = qword_905FD0; /*0x1934bc*/
    if ( !qword_905FD0 ) /*0x1934c6*/
    {
      v8 = operator new(0x6E8u); /*0x1934d2*/
      qword_905FD0 = sub_2723A0(v8); /*0x1934e0*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1934f1*/
      v3 = *(_QWORD *)&qword_905FB0; /*0x1934f3*/
      v5 = qword_905FD0; /*0x1934fa*/
    }
    if ( *(_DWORD *)(v5 + 692) == *(_DWORD *)(v5 + 696) ) /*0x19350d*/
    {
      if ( !v3 ) /*0x193512*/
      {
        v9 = operator new(0x690u); /*0x19351e*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0x19352c*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x193539*/
        v3 = *(_QWORD *)&qword_905FB0; /*0x19353c*/
      }
      GameLevelManager_updateUserScore(v3); /*0x193546*/
    }
    v6 = LikeItemLayer_create(5u, *(_DWORD *)(*(_QWORD *)(a1 + 1072) + 320LL), 0); /*0x193560*/
    v6[85] = a1 + 1032; /*0x19356c*/
    return (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 1064LL))(v6); /*0x193580*/
  }
  return result; /*0x193582*/
}
