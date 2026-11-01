#include <Geode/binding/SetItemIDLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x593130
// Method: SetItemIDLayer::~SetItemIDLayer
cocos2d::CCNode *__fastcall SetItemIDLayer__dtor_SetItemIDLayer(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetItemIDLayer::`vftable'; /*0x593143*/
  *((_QWORD *)Block + 40) = &SetItemIDLayer::`vftable'; /*0x593150*/
  *((_QWORD *)Block + 41) = &SetItemIDLayer::`vftable'; /*0x59315e*/
  *((_QWORD *)Block + 42) = &SetItemIDLayer::`vftable'; /*0x59316c*/
  *((_QWORD *)Block + 43) = &SetItemIDLayer::`vftable'; /*0x59317a*/
  *((_QWORD *)Block + 44) = &SetItemIDLayer::`vftable'; /*0x593188*/
  *((_QWORD *)Block + 51) = &SetItemIDLayer::`vftable'; /*0x593196*/
  *((_QWORD *)Block + 54) = &SetItemIDLayer::`vftable'; /*0x5931a4*/
  *((_QWORD *)Block + 68) = &SetItemIDLayer::`vftable'; /*0x5931b2*/
  *((_QWORD *)Block + 83) = &SetItemIDLayer::`vftable'; /*0x5931c0*/
  *((_QWORD *)Block + 84) = &SetItemIDLayer::`vftable'; /*0x5931ce*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5931d5*/
  if ( (a2 & 1) != 0 ) /*0x5931dd*/
    j_j_free(Block); /*0x5931e7*/
  return Block; /*0x5931ec*/
}

// [2/4] Address: 0x5939c0
// Method: SetItemIDLayer::onCustomToggleTriggerValue
void __fastcall SetItemIDLayer_onCustomToggleTriggerValue(cocos2d::CCDictionary **a1, __int64 a2)
{
  int v3; // edi
  cocos2d::CCDictionary *v4; // rax
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rdx
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rdx
  struct cocos2d::CCObject *v13; // rax
  __int64 v14; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5939d6*/
  v4 = *a1; /*0x5939e0*/
  if ( (unsigned int)(v3 - 1) <= 1 ) /*0x5939e3*/
  {
    if ( v3 == (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))v4 + 146))(a1, 391) ) /*0x593aef*/
      v3 = 0; /*0x593aef*/
    SetupTriggerPopup_updateValue(a1, 0x187u, (float)v3); /*0x593afc*/
    v11 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x593b0d*/
    if ( v11 ) /*0x593b16*/
    {
      LOBYTE(v12) = v3 == 1; /*0x593b1e*/
      CCMenuItemToggler_toggle((__int64)v11, v12); /*0x593b21*/
    }
    v13 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x593b32*/
    if ( v13 ) /*0x593b3b*/
    {
      LOBYTE(v14) = v3 == 2; /*0x593b43*/
      CCMenuItemToggler_toggle((__int64)v13, v14); /*0x593b46*/
    }
  }
  else
  {
    if ( v3 == (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))v4 + 146))(a1, 390) ) /*0x593a01*/
      v3 = 0; /*0x593a01*/
    SetupTriggerPopup_updateValue(a1, 0x186u, (float)v3); /*0x593a0e*/
    v5 = cocos2d::CCDictionary::objectForKey(a1[97], -1); /*0x593a21*/
    if ( v5 ) /*0x593a2a*/
    {
      LOBYTE(v6) = v3 == -1; /*0x593a32*/
      CCMenuItemToggler_toggle((__int64)v5, v6); /*0x593a35*/
    }
    v7 = cocos2d::CCDictionary::objectForKey(a1[97], -2); /*0x593a48*/
    if ( v7 ) /*0x593a51*/
    {
      LOBYTE(v8) = v3 == -2; /*0x593a59*/
      CCMenuItemToggler_toggle((__int64)v7, v8); /*0x593a5c*/
    }
    v9 = cocos2d::CCDictionary::objectForKey(a1[97], -3); /*0x593a6f*/
    if ( v9 ) /*0x593a78*/
    {
      LOBYTE(v10) = v3 == -3; /*0x593a80*/
      CCMenuItemToggler_toggle((__int64)v9, v10); /*0x593a83*/
    }
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 80) ) /*0x593a94*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 80, 0); /*0x593aad*/
    else
      sub_60A5A0(a1, 80); /*0x593ab8*/
    sub_60ABF0(a1, 80); /*0x593ad2*/
  }
}

// [3/4] Address: 0x593b60
// Method: SetItemIDLayer::valueDidChange
void __fastcall SetItemIDLayer_valueDidChange(cocos2d::CCDictionary **a1, __int64 a2, __int64 a3)
{
  float v3; // xmm2_4
  cocos2d::CCArray *v5; // rsi
  unsigned int v6; // ebx
  int v7; // r14d
  struct cocos2d::CCObject *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbp
  float v11; // xmm1_4
  cocos2d::CCPoint *v12; // rcx
  __int64 v13; // rax
  struct cocos2d::CCObject *v14; // rax
  __int64 v15; // rdx
  char v16; // [rsp+20h] [rbp-48h] BYREF
  char v17; // [rsp+28h] [rbp-40h] BYREF
  char v18; // [rsp+88h] [rbp+20h] BYREF

  switch ( (_DWORD)a2 ) /*0x593b77*/
  {
    case 0x187: /*0x593b77*/
      if ( a1[85] ) /*0x593b7d*/
      {
        v5 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x593b9c*/
        cocos2d::CCArray::addObject(v5, a1[85]); /*0x593b9f*/
      }
      else
      {
        v5 = a1[86]; /*0x593ba7*/
      }
      v6 = 0; /*0x593bb1*/
      if ( cocos2d::CCArray::count(v5) ) /*0x593bb3*/
      {
        v7 = (int)v3; /*0x593bd8*/
        do /*0x593c5e*/
        {
          v8 = cocos2d::CCArray::objectAtIndex(v5, v6); /*0x593bf5*/
          v9 = (__int64 *)*((_QWORD *)v8 + 232); /*0x593bfb*/
          *((_DWORD *)v8 + 477) = v7; /*0x593c02*/
          if ( v9 ) /*0x593c0c*/
          {
            v10 = *v9; /*0x593c0e*/
            if ( v7 == 1 ) /*0x593c15*/
            {
              v11 = 0.0; /*0x593c17*/
              v12 = (cocos2d::CCPoint *)&v18; /*0x593c1a*/
            }
            else if ( v7 == 2 ) /*0x593c28*/
            {
              v11 = 1.0; /*0x593c2a*/
              v12 = (cocos2d::CCPoint *)&v16; /*0x593c2d*/
            }
            else
            {
              v11 = 0.5; /*0x593c34*/
              v12 = (cocos2d::CCPoint *)&v17; /*0x593c37*/
            }
            cocos2d::CCPoint::CCPoint(v12, v11, 0.5); /*0x593c3f*/
            (*(void (__fastcall **)(__int64 *, __int64))(v10 + 288))(v9, v13); /*0x593c4b*/
          }
          ++v6; /*0x593c54*/
        }
        while ( v6 < cocos2d::CCArray::count(v5) ); /*0x593c5e*/
      }
      break;
    case 0x186: /*0x593b77*/
      if ( v3 == -1.0 ) /*0x593c95*/
      {
        LOBYTE(a3) = 1; /*0x593c9a*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, a2, a3); /*0x593ca7*/
      }
      else
      {
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 136))(a1, 390, 0); /*0x593cc3*/
      }
      break;
    case 0x1D2: /*0x593b77*/
      v14 = cocos2d::CCDictionary::objectForKey(a1[123], 80); /*0x593cde*/
      if ( v14 ) /*0x593ce7*/
      {
        v15 = 2; /*0x593cf1*/
        if ( v3 != 0.0 ) /*0x593cf6*/
          v15 = 4; /*0x593cf8*/
        sub_3C4E40(v14, v15); /*0x593d0a*/
      }
      break;
  }
}

// [4/4] Address: 0x593d10
// Method: SetItemIDLayer::onClose
__int64 __fastcall SetItemIDLayer_onClose(__int64 a1)
{
  cocos2d::CCArray *v2; // rdi
  unsigned int i; // ebx
  struct cocos2d::CCObject *v4; // rax

  if ( *(_QWORD *)(a1 + 680) ) /*0x593d24*/
  {
    v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x593d44*/
    cocos2d::CCArray::addObject(v2, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x593d47*/
  }
  else
  {
    v2 = *(cocos2d::CCArray **)(a1 + 688); /*0x593d4f*/
  }
  for ( i = 0; i < cocos2d::CCArray::count(v2); ++i ) /*0x593d5b*/
  {
    v4 = cocos2d::CCArray::objectAtIndex(v2, i); /*0x593d6a*/
    LabelGameObject_updatePreviewLabel((__int64)v4); /*0x593d73*/
  }
  return SetupTriggerPopup_onClose(a1); /*0x593d8d*/
}
