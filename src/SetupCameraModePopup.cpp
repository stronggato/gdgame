#include <Geode/binding/SetupCameraModePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x5a65b0
// Method: SetupCameraModePopup::~SetupCameraModePopup
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall SetupCameraModePopup__dtor_SetupCameraModePopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *(_QWORD *)Block = &SetupCameraModePopup::`vftable'; /*0x5a65c6*/
  *((_QWORD *)Block + 40) = &SetupCameraModePopup::`vftable'; /*0x5a65d0*/
  *((_QWORD *)Block + 41) = &SetupCameraModePopup::`vftable'; /*0x5a65de*/
  *((_QWORD *)Block + 42) = &SetupCameraModePopup::`vftable'; /*0x5a65ec*/
  *((_QWORD *)Block + 43) = &SetupCameraModePopup::`vftable'; /*0x5a65fa*/
  *((_QWORD *)Block + 44) = &SetupCameraModePopup::`vftable'; /*0x5a6608*/
  *((_QWORD *)Block + 51) = &SetupCameraModePopup::`vftable'; /*0x5a6616*/
  *((_QWORD *)Block + 54) = &SetupCameraModePopup::`vftable'; /*0x5a6624*/
  *((_QWORD *)Block + 68) = &SetupCameraModePopup::`vftable'; /*0x5a6632*/
  *((_QWORD *)Block + 83) = &SetupCameraModePopup::`vftable'; /*0x5a6640*/
  *((_QWORD *)Block + 84) = &SetupCameraModePopup::`vftable'; /*0x5a664e*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 125); /*0x5a6655*/
  if ( v4 ) /*0x5a665f*/
    cocos2d::CCObject::release(v4); /*0x5a6661*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 126); /*0x5a6667*/
  if ( v5 ) /*0x5a6671*/
    cocos2d::CCObject::release(v5); /*0x5a6673*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5a667c*/
  if ( (a2 & 1) != 0 ) /*0x5a6686*/
    j_j_free(Block); /*0x5a6690*/
  return Block; /*0x5a6698*/
}

// [2/4] Address: 0x5a7290
// Method: SetupCameraModePopup::determineStartValues
void __fastcall SetupCameraModePopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rdi
  char v4; // bp
  unsigned int v5; // esi
  char v6; // r14
  float v7; // xmm7_4
  float v8; // xmm8_4
  struct cocos2d::CCObject *v9; // rax

  SetupTriggerPopup_determineStartValues(a1); /*0x5a729e*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5a72a3*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5a72bd*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5a72c0*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5a72c8*/
  }
  if ( v3 ) /*0x5a72d2*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5a72db*/
    {
      v4 = 0; /*0x5a72f6*/
      v5 = 0; /*0x5a72fe*/
      v6 = 0; /*0x5a7305*/
      v7 = -99999.0; /*0x5a7315*/
      v8 = -99999.0; /*0x5a731e*/
      *(_WORD *)(a1 + 1060) = 257; /*0x5a7322*/
      *(_BYTE *)(a1 + 1062) = 1; /*0x5a732b*/
      if ( cocos2d::CCArray::count(v3) ) /*0x5a7332*/
      {
        do /*0x5a73db*/
        {
          v9 = cocos2d::CCArray::objectAtIndex(v3, v5); /*0x5a7345*/
          if ( !*((_BYTE *)v9 + 1764) ) /*0x5a734b*/
            *(_BYTE *)(a1 + 1060) = 0; /*0x5a7354*/
          if ( !*((_BYTE *)v9 + 1765) ) /*0x5a735b*/
            *(_BYTE *)(a1 + 1061) = 0; /*0x5a7364*/
          if ( !v4 ) /*0x5a736e*/
          {
            if ( v8 == -99999.0 ) /*0x5a737e*/
            {
              v8 = *((float *)v9 + 442); /*0x5a7380*/
            }
            else if ( v8 != *((float *)v9 + 442) ) /*0x5a738c*/
            {
              v8 = -99999.0; /*0x5a738e*/
              v4 = 1; /*0x5a7392*/
            }
          }
          if ( !v6 ) /*0x5a7398*/
          {
            if ( v7 == -99999.0 ) /*0x5a73a7*/
            {
              v7 = *((float *)v9 + 443); /*0x5a73a9*/
            }
            else if ( v7 != *((float *)v9 + 443) ) /*0x5a73b3*/
            {
              v7 = -99999.0; /*0x5a73b5*/
              v6 = 1; /*0x5a73b8*/
            }
          }
          if ( *((_DWORD *)v9 + 259) != 2925 ) /*0x5a73c5*/
            *(_BYTE *)(a1 + 1062) = 0; /*0x5a73c7*/
          ++v5; /*0x5a73d1*/
        }
        while ( v5 < cocos2d::CCArray::count(v3) ); /*0x5a73db*/
        if ( v8 != -99999.0 ) /*0x5a73e7*/
          *(_DWORD *)(a1 + 1032) = (int)v8; /*0x5a73ee*/
        if ( v7 != -99999.0 ) /*0x5a73f9*/
          *(float *)(a1 + 1056) = v7; /*0x5a73fb*/
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 1061) ) /*0x5a7422*/
  {
    *(_DWORD *)(a1 + 1032) = 10; /*0x5a7430*/
    *(_DWORD *)(a1 + 1056) = 1056964608; /*0x5a743a*/
  }
}

// [3/4] Address: 0x5a75a0
// Method: SetupCameraModePopup::updateItemVisibility
unsigned int __fastcall SetupCameraModePopup_updateItemVisibility(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int i; // esi
  struct cocos2d::CCObject *v4; // rax
  unsigned int result; // eax
  struct cocos2d::CCObject *v6; // rax

  v2 = 0; /*0x5a75b2*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1000)); ++i ) /*0x5a75bd*/
  {
    v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1000), i); /*0x5a75d9*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v4 + 336LL))( /*0x5a75f3*/
      v4,
      *(unsigned __int8 *)(a1 + 1060));
  }
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1008)); /*0x5a7610*/
  if ( result ) /*0x5a7618*/
  {
    do /*0x5a7657*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1008), v2); /*0x5a7629*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v6 + 336LL))( /*0x5a7643*/
        v6,
        *(unsigned __int8 *)(a1 + 1061));
      ++v2; /*0x5a764d*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1008)); /*0x5a764f*/
    }
    while ( v2 < result ); /*0x5a7657*/
  }
  return result; /*0x5a7659*/
}

// [4/4] Address: 0x5a7760
// Method: SetupCameraModePopup::updateCameraEasing
int __fastcall SetupCameraModePopup_updateCameraEasing(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  struct cocos2d::CCObject *v4; // rax

  v1 = *(_QWORD *)(a1 + 680); /*0x5a7766*/
  if ( v1 ) /*0x5a7773*/
  {
    *(float *)(v1 + 1768) = (float)*(int *)(a1 + 1032); /*0x5a7780*/
  }
  else
  {
    v3 = 0; /*0x5a779a*/
    for ( LODWORD(v1) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x5a77a4*/
          v3 < (unsigned int)v1;
          LODWORD(v1) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) )
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v3++); /*0x5a77b9*/
      *((float *)v4 + 442) = (float)*(int *)(a1 + 1032); /*0x5a77cc*/
    }
  }
  return v1; /*0x5a7788*/
}
