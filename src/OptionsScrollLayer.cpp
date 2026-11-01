#include <Geode/binding/OptionsScrollLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x1bb5e0
// Method: OptionsScrollLayer::setupList
unsigned int __fastcall OptionsScrollLayer_setupList(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int result; // eax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct cocos2d::CCObject *v12; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0; /*0x1bb5e8*/
  v14 = 0; /*0x1bb5f4*/
  v13 = 0; /*0x1bb5fe*/
  v15 = 0; /*0x1bb603*/
  result = EditorUI_getEditColorTargets(a1, &v14, &v13, &v15); /*0x1bb60b*/
  v4 = v15; /*0x1bb610*/
  if ( v14 || v13 || v15 ) /*0x1bb626*/
  {
    sub_1BB800(a1); /*0x1bb62f*/
    sub_1BBB00(a1); /*0x1bb637*/
    *(_QWORD *)(a1 + 1616) = 0; /*0x1bb63c*/
    if ( v4 ) /*0x1bb646*/
    {
      v5 = 0; /*0x1bb648*/
      v6 = v4; /*0x1bb64a*/
      v7 = 0; /*0x1bb64d*/
    }
    else
    {
      v5 = v13; /*0x1bb651*/
      v6 = 0; /*0x1bb656*/
      v7 = v14; /*0x1bb659*/
    }
    v8 = InfoLayer_create(v7, v5, v6); /*0x1bb65e*/
    *(_QWORD *)(a1 + 1616) = v8; /*0x1bb663*/
    v9 = v8; /*0x1bb66a*/
    v10 = a1 + 416; /*0x1bb670*/
    if ( !a1 ) /*0x1bb677*/
      v10 = 0; /*0x1bb677*/
    v9[92] = v10; /*0x1bb67b*/
    *(_QWORD *)(*(_QWORD *)(a1 + 1616) + 568LL) = a1; /*0x1bb689*/
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1616) + 1064LL))(*(_QWORD *)(a1 + 1616)); /*0x1bb69a*/
    if ( !v4 ) /*0x1bb6a3*/
    {
      v11 = *(_QWORD *)(a1 + 1568); /*0x1bb6a5*/
      if ( v11 ) /*0x1bb6af*/
      {
        *(_BYTE *)(v11 + 1141) = 0; /*0x1bb6b1*/
        return GameObject_updateObjectEditorColor((_QWORD *)v11); /*0x1bb6be*/
      }
      else
      {
        result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1bb6ca*/
        if ( result ) /*0x1bb6d2*/
        {
          result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1bb6db*/
          if ( result ) /*0x1bb6e3*/
          {
            do /*0x1bb71f*/
            {
              v12 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v1); /*0x1bb6f9*/
              *((_BYTE *)v12 + 1141) = 0; /*0x1bb702*/
              GameObject_updateObjectEditorColor(v12); /*0x1bb709*/
              ++v1; /*0x1bb715*/
              result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1bb717*/
            }
            while ( v1 < result ); /*0x1bb71f*/
          }
        }
      }
    }
  }
  return result; /*0x1bb6b7*/
}

// [2/5] Address: 0x475e50
// Method: OptionsScrollLayer::~OptionsScrollLayer
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall OptionsScrollLayer__dtor_OptionsScrollLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *Block = &OptionsScrollLayer::`vftable'; /*0x475e66*/
  Block[40] = &OptionsScrollLayer::`vftable'; /*0x475e70*/
  Block[41] = &OptionsScrollLayer::`vftable'; /*0x475e7e*/
  Block[42] = &OptionsScrollLayer::`vftable'; /*0x475e8c*/
  Block[43] = &OptionsScrollLayer::`vftable'; /*0x475e9a*/
  Block[44] = &OptionsScrollLayer::`vftable'; /*0x475ea8*/
  Block[51] = &OptionsScrollLayer::`vftable'; /*0x475eb6*/
  Block[54] = &OptionsScrollLayer::`vftable'; /*0x475ec4*/
  Block[68] = &OptionsScrollLayer::`vftable'; /*0x475ed2*/
  Block[83] = &OptionsScrollLayer::`vftable'; /*0x475ee0*/
  v4 = (cocos2d::CCObject *)Block[84]; /*0x475ee7*/
  if ( v4 ) /*0x475ef1*/
    cocos2d::CCObject::release(v4); /*0x475ef3*/
  v5 = (cocos2d::CCObject *)Block[95]; /*0x475ef9*/
  if ( v5 ) /*0x475f03*/
    cocos2d::CCObject::release(v5); /*0x475f05*/
  sub_3C310(Block + 90); /*0x475f12*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x475f1a*/
  if ( (a2 & 1) != 0 ) /*0x475f24*/
    j_j_free(Block); /*0x475f2e*/
  return Block; /*0x475f36*/
}

// [3/5] Address: 0x47adf0
// Method: OptionsScrollLayer::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall OptionsScrollLayer_textChanged(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rdi
  void *v7; // rdx
  void **v8; // rcx
  void **v9; // rbx
  unsigned __int64 v10; // rsi
  size_t v11; // rbp
  void **v12; // rdx
  void **v13; // rax
  void *Buf1[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v16; // [rsp+50h] [rbp-38h]

  v3 = a1[19]; /*0x47ae1b*/
  if ( a2 == v3 ) /*0x47ae25*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 600) + 600LL) + 8LL))(*(_QWORD *)(v3 + 600) + 600LL); /*0x47ae3c*/
    *(_OWORD *)Buf1 = 0; /*0x47ae42*/
    Size = 0; /*0x47ae47*/
    v16 = 0; /*0x47ae4c*/
    v5 = -1; /*0x47ae51*/
    do /*0x47ae63*/
      ++v5; /*0x47ae60*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x47ae63*/
    sub_3C230(Buf1); /*0x47ae71*/
    v6 = (void **)(a1 + 22); /*0x47ae77*/
    v7 = a1 + 22; /*0x47ae7e*/
    if ( a1[25] > 0xFu ) /*0x47ae86*/
      v7 = *v6; /*0x47ae88*/
    v8 = Buf1; /*0x47ae8b*/
    v9 = (void **)Buf1[0]; /*0x47ae90*/
    v10 = v16; /*0x47ae95*/
    if ( v16 > 0xF ) /*0x47ae9e*/
      v8 = (void **)Buf1[0]; /*0x47ae9e*/
    v11 = Size; /*0x47aea2*/
    if ( Size != a1[24] || Size && memcmp(v8, v7, Size) ) /*0x47aeb5*/
    {
      if ( v6 != Buf1 ) /*0x47aec6*/
      {
        v12 = Buf1; /*0x47aec8*/
        if ( v10 > 0xF ) /*0x47aed1*/
          v12 = v9; /*0x47aed1*/
        sub_3F5A0(a1 + 22, v12, v11); /*0x47aedb*/
        v10 = v16; /*0x47aee0*/
        v9 = (void **)Buf1[0]; /*0x47aee5*/
      }
      sub_47AF70(a1 - 68, a1[16]); /*0x47aef8*/
    }
    if ( v10 > 0xF ) /*0x47af02*/
    {
      v13 = v9; /*0x47af08*/
      if ( v10 + 1 >= 0x1000 ) /*0x47af12*/
      {
        v9 = (void **)*(v9 - 1); /*0x47af18*/
        if ( (unsigned __int64)((char *)v13 - (char *)v9 - 8) > 0x1F ) /*0x47af27*/
          invoke_watson(0, 0, 0, 0, 0); /*0x47af38*/
      }
      j_j_free(v9); /*0x47af42*/
    }
  }
}

// [4/5] Address: 0x47b1b0
// Method: OptionsScrollLayer::keyBackClicked
__int64 __fastcall OptionsScrollLayer_keyBackClicked(__int64 a1)
{
  return sub_47B0E0(a1 - 336, 0);
}

// [5/5] Address: 0x47b1c0
// Method: OptionsScrollLayer::cellPerformedAction
char __fastcall OptionsScrollLayer_cellPerformedAction(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( a4 != 1 ) /*0x47b1c8*/
    return 0; /*0x47b1fe*/
  if ( *(_BYTE *)(a1 + 24) ) /*0x47b1ca*/
    sub_47AF70(a1 - 664, *(_QWORD *)(a1 + 8)); /*0x47b1db*/
  else
    CustomListView_reloadAll(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 544LL)); /*0x47b1f2*/
  return 1; /*0x47b1e2*/
}
