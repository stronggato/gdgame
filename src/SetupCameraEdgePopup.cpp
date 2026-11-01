#include <Geode/binding/SetupCameraEdgePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0xc7640
// Method: SetupCameraEdgePopup::onCameraEdge
int __fastcall SetupCameraEdgePopup_onCameraEdge(__int64 a1, __int64 a2)
{
  int result; // eax
  cocos2d::CCArray *v4; // rcx
  signed int v5; // ebx
  struct cocos2d::CCObject *v6; // rax
  char *v7; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0xc7653*/
  v4 = *(cocos2d::CCArray **)(a1 + 800); /*0xc7656*/
  v5 = result; /*0xc765d*/
  if ( v4 && result >= 0 ) /*0xc7666*/
  {
    result = cocos2d::CCArray::count(v4); /*0xc7668*/
    if ( v5 < result ) /*0xc7670*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 800), v5); /*0xc767b*/
      v7 = ProfilePage_create(*((_DWORD *)v6 + 14), 0); /*0xc7686*/
      return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 1064LL))(v7); /*0xc7698*/
    }
  }
  return result; /*0xc769a*/
}

// [2/5] Address: 0x5a5430
// Method: SetupCameraEdgePopup::~SetupCameraEdgePopup
cocos2d::CCNode *__fastcall SetupCameraEdgePopup__dtor_SetupCameraEdgePopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &SetupCameraEdgePopup::`vftable'; /*0x5a5446*/
  *((_QWORD *)Block + 40) = &SetupCameraEdgePopup::`vftable'; /*0x5a5450*/
  *((_QWORD *)Block + 41) = &SetupCameraEdgePopup::`vftable'; /*0x5a545e*/
  *((_QWORD *)Block + 42) = &SetupCameraEdgePopup::`vftable'; /*0x5a546c*/
  *((_QWORD *)Block + 43) = &SetupCameraEdgePopup::`vftable'; /*0x5a547a*/
  *((_QWORD *)Block + 44) = &SetupCameraEdgePopup::`vftable'; /*0x5a5488*/
  *((_QWORD *)Block + 51) = &SetupCameraEdgePopup::`vftable'; /*0x5a5496*/
  *((_QWORD *)Block + 54) = &SetupCameraEdgePopup::`vftable'; /*0x5a54a4*/
  *((_QWORD *)Block + 68) = &SetupCameraEdgePopup::`vftable'; /*0x5a54b2*/
  *((_QWORD *)Block + 83) = &SetupCameraEdgePopup::`vftable'; /*0x5a54c0*/
  *((_QWORD *)Block + 84) = &SetupCameraEdgePopup::`vftable'; /*0x5a54ce*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 127); /*0x5a54d5*/
  if ( v4 ) /*0x5a54df*/
    cocos2d::CCObject::release(v4); /*0x5a54e1*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5a54ea*/
  if ( (a2 & 1) != 0 ) /*0x5a54f4*/
    j_j_free(Block); /*0x5a54fe*/
  return Block; /*0x5a5506*/
}

// [3/5] Address: 0x5a6090
// Method: SetupCameraEdgePopup::determineStartValues
void __fastcall SetupCameraEdgePopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rsi
  unsigned int v4; // edi
  struct cocos2d::CCObject *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax

  SetupTriggerPopup_determineStartValues(a1); /*0x5a609d*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5a60a2*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5a60bc*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5a60bf*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5a60c7*/
  }
  if ( v3 ) /*0x5a60d1*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5a60da*/
    {
      v4 = 0; /*0x5a60f7*/
      for ( *(_QWORD *)(a1 + 1008) = -1; v4 < cocos2d::CCArray::count(v3); ++v4 ) /*0x5a6104*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x5a6115*/
        v6 = *(_DWORD *)(a1 + 1008); /*0x5a611b*/
        v7 = *((_DWORD *)v5 + 370); /*0x5a6121*/
        if ( v6 == -1 ) /*0x5a612a*/
        {
          *(_DWORD *)(a1 + 1008) = v7; /*0x5a612c*/
        }
        else if ( v6 != v7 ) /*0x5a6136*/
        {
          *(_DWORD *)(a1 + 1008) = 0; /*0x5a6138*/
        }
        v8 = *(_DWORD *)(a1 + 1012); /*0x5a613e*/
        v9 = *((_DWORD *)v5 + 466); /*0x5a6144*/
        if ( v8 == -1 ) /*0x5a614d*/
        {
          *(_DWORD *)(a1 + 1012) = v9; /*0x5a614f*/
        }
        else if ( v8 != v9 ) /*0x5a6159*/
        {
          *(_DWORD *)(a1 + 1012) = 0; /*0x5a615b*/
        }
      }
    }
  }
}

// [4/5] Address: 0x5a62c0
// Method: SetupCameraEdgePopup::onUnlockEdge
__int64 __fastcall SetupCameraEdgePopup_onUnlockEdge(__int64 a1)
{
  *(_DWORD *)(a1 + 1008) = 0; /*0x5a62c9*/
  sub_5A6480(); /*0x5a62d3*/
  sub_5A6400(a1); /*0x5a62db*/
  return sub_607BB0(a1); /*0x5a62e3*/
}

// [5/5] Address: 0x5a62f0
// Method: SetupCameraEdgePopup::textChanged
void __fastcall SetupCameraEdgePopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  const char *v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  char *String[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x5a6309*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x5a632a*/
    *(_OWORD *)String = 0; /*0x5a6333*/
    v4 = -1; /*0x5a6338*/
    v10 = 0; /*0x5a633f*/
    do /*0x5a6348*/
      ++v4; /*0x5a6345*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x5a6348*/
    sub_3C230(String); /*0x5a6357*/
    v5 = (const char *)String; /*0x5a6362*/
    if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x5a6367*/
      v5 = String[0]; /*0x5a6367*/
    v6 = atoi(v5); /*0x5a636d*/
    v7 = *((_QWORD *)&v10 + 1); /*0x5a6373*/
    *(_DWORD *)(a1 + 464) = v6; /*0x5a6378*/
    if ( v7 > 0xF ) /*0x5a6382*/
    {
      v8 = String[0]; /*0x5a6384*/
      if ( v7 + 1 >= 0x1000 ) /*0x5a6396*/
      {
        v8 = (char *)*((_QWORD *)String[0] - 1); /*0x5a6398*/
        if ( (unsigned __int64)(String[0] - v8 - 8) > 0x1F ) /*0x5a63ab*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5a63c0*/
      }
      j_j_free(v8); /*0x5a63c7*/
    }
    sub_5A6480(a1 - 544); /*0x5a63d3*/
    sub_607BB0(a1 - 544); /*0x5a63df*/
  }
}
