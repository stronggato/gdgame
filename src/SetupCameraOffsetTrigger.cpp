#include <Geode/binding/SetupCameraOffsetTrigger.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x5a78e0
// Method: SetupCameraOffsetTrigger::~SetupCameraOffsetTrigger
cocos2d::CCNode *__fastcall SetupCameraOffsetTrigger__dtor_SetupCameraOffsetTrigger(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupCameraOffsetTrigger::`vftable'; /*0x5a78f3*/
  *((_QWORD *)Block + 40) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a7900*/
  *((_QWORD *)Block + 41) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a790e*/
  *((_QWORD *)Block + 42) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a791c*/
  *((_QWORD *)Block + 43) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a792a*/
  *((_QWORD *)Block + 44) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a7938*/
  *((_QWORD *)Block + 51) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a7946*/
  *((_QWORD *)Block + 54) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a7954*/
  *((_QWORD *)Block + 68) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a7962*/
  *((_QWORD *)Block + 83) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a7970*/
  *((_QWORD *)Block + 84) = &SetupCameraOffsetTrigger::`vftable'; /*0x5a797e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5a7985*/
  if ( (a2 & 1) != 0 ) /*0x5a798d*/
    j_j_free(Block); /*0x5a7997*/
  return Block; /*0x5a799c*/
}

// [2/6] Address: 0x5a8d80
// Method: SetupCameraOffsetTrigger::determineStartValues
void __fastcall SetupCameraOffsetTrigger_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // r14
  int v4; // ebp
  int v5; // r12d
  int v6; // esi
  int v7; // r15d
  unsigned int v8; // r13d
  float v9; // xmm7_4
  float v10; // xmm8_4
  char v11; // bl
  struct cocos2d::CCObject *v12; // rax
  struct cocos2d::CCObject *v13; // rdi
  int v14; // eax
  const struct cocos2d::CCPoint *v15; // rdx
  const struct cocos2d::CCPoint *v16; // rdx
  char v17; // [rsp+20h] [rbp-A8h]
  char v18; // [rsp+21h] [rbp-A7h]
  float v19[2]; // [rsp+24h] [rbp-A4h] BYREF
  float v20[2]; // [rsp+2Ch] [rbp-9Ch] BYREF
  _BYTE v21[4]; // [rsp+34h] [rbp-94h] BYREF
  float v22; // [rsp+38h] [rbp-90h]
  _BYTE v23[4]; // [rsp+3Ch] [rbp-8Ch] BYREF
  float v24; // [rsp+40h] [rbp-88h]
  char v26; // [rsp+D8h] [rbp+10h]
  char v27; // [rsp+E0h] [rbp+18h]
  char v28; // [rsp+E8h] [rbp+20h]

  SetupTriggerPopup_determineStartValues(a1); /*0x5a8d92*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5a8d97*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5a8db1*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5a8db4*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5a8dbc*/
  }
  *(_DWORD *)(a1 + 1016) = -943501440; /*0x5a8dc3*/
  *(_DWORD *)(a1 + 1032) = -99999; /*0x5a8dcd*/
  *(_DWORD *)(a1 + 1088) = -99999; /*0x5a8dd7*/
  *(_DWORD *)(a1 + 1092) = -99999; /*0x5a8de1*/
  *(_DWORD *)(a1 + 1036) = -943501440; /*0x5a8deb*/
  if ( v3 ) /*0x5a8df8*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5a8e01*/
    {
      v4 = -99999; /*0x5a8e2b*/
      v5 = -99999; /*0x5a8e38*/
      v6 = -99999; /*0x5a8e43*/
      v7 = -99999; /*0x5a8e4a*/
      v8 = 0; /*0x5a8e55*/
      v9 = -99999.0; /*0x5a8e5d*/
      v28 = 0; /*0x5a8e60*/
      v18 = 0; /*0x5a8e67*/
      v10 = -99999.0; /*0x5a8e74*/
      v26 = 0; /*0x5a8e78*/
      v27 = 0; /*0x5a8e7f*/
      v17 = 0; /*0x5a8e86*/
      if ( cocos2d::CCArray::count(v3) ) /*0x5a8e8a*/
      {
        v11 = 0; /*0x5a8ea0*/
        do /*0x5a900a*/
        {
          v12 = cocos2d::CCArray::objectAtIndex(v3, v8); /*0x5a8ea8*/
          v13 = v12; /*0x5a8eb6*/
          if ( !v26 ) /*0x5a8eb9*/
          {
            if ( v10 == -99999.0 ) /*0x5a8ec9*/
            {
              v10 = *((float *)v12 + 367); /*0x5a8ecb*/
            }
            else if ( v10 != *((float *)v12 + 367) ) /*0x5a8ed7*/
            {
              v10 = -99999.0; /*0x5a8ed9*/
              v26 = 1; /*0x5a8edd*/
            }
          }
          if ( !v27 ) /*0x5a8eed*/
          {
            v14 = *((_DWORD *)v12 + 378); /*0x5a8eef*/
            if ( v4 == -99999 ) /*0x5a8efb*/
            {
              v4 = v14; /*0x5a8efd*/
            }
            else if ( v4 != v14 ) /*0x5a8f03*/
            {
              v4 = -99999; /*0x5a8f05*/
              v27 = 1; /*0x5a8f0a*/
            }
          }
          if ( !v28 ) /*0x5a8f1a*/
          {
            if ( v9 == -99999.0 ) /*0x5a8f29*/
            {
              v9 = *((float *)v13 + 379); /*0x5a8f2b*/
            }
            else if ( v9 != *((float *)v13 + 379) ) /*0x5a8f35*/
            {
              v9 = -99999.0; /*0x5a8f37*/
              v28 = 1; /*0x5a8f3a*/
            }
          }
          if ( !v17 ) /*0x5a8f47*/
          {
            v15 = (struct cocos2d::CCObject *)((char *)v13 + 1504); /*0x5a8f49*/
            if ( v5 == -99999 ) /*0x5a8f57*/
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v19, v15); /*0x5a8f5e*/
              v5 = (int)v19[0]; /*0x5a8f64*/
            }
            else
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, v15); /*0x5a8f72*/
              if ( v5 != (int)v20[0] ) /*0x5a8f81*/
              {
                v5 = -99999; /*0x5a8f83*/
                v17 = 1; /*0x5a8f89*/
              }
            }
          }
          if ( !v18 ) /*0x5a8f93*/
          {
            v16 = (struct cocos2d::CCObject *)((char *)v13 + 1504); /*0x5a8f95*/
            if ( v7 == -99999 ) /*0x5a8fa3*/
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v21, v16); /*0x5a8faa*/
              v7 = (int)v22; /*0x5a8fb0*/
            }
            else
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v23, v16); /*0x5a8fbe*/
              if ( v7 != (int)v24 ) /*0x5a8fcd*/
              {
                v7 = -99999; /*0x5a8fcf*/
                v18 = 1; /*0x5a8fd5*/
              }
            }
          }
          if ( !v11 ) /*0x5a8fdc*/
          {
            if ( v6 == -99999 ) /*0x5a8fea*/
            {
              v6 = *((_DWORD *)v13 + 382); /*0x5a8fec*/
            }
            else if ( v6 != *((_DWORD *)v13 + 382) ) /*0x5a8ff2*/
            {
              v6 = -99999; /*0x5a8ff4*/
              v11 = 1; /*0x5a8ff9*/
            }
          }
          ++v8; /*0x5a8ffe*/
        }
        while ( v8 < cocos2d::CCArray::count(v3) ); /*0x5a900a*/
        if ( v10 != -99999.0 ) /*0x5a9026*/
          *(float *)(a1 + 1016) = v10; /*0x5a9028*/
        if ( v4 != -99999 ) /*0x5a9037*/
          *(_DWORD *)(a1 + 1032) = v4; /*0x5a9039*/
        if ( v9 != -99999.0 ) /*0x5a9044*/
          *(float *)(a1 + 1036) = v9; /*0x5a9046*/
        if ( v5 != -99999 ) /*0x5a9055*/
          *(_DWORD *)(a1 + 1088) = v5; /*0x5a9057*/
        if ( v7 != -99999 ) /*0x5a9065*/
          *(_DWORD *)(a1 + 1092) = v7; /*0x5a9067*/
        if ( v6 != -99999 ) /*0x5a9074*/
          *(_DWORD *)(a1 + 1096) = v6; /*0x5a9076*/
      }
    }
  }
}

// [3/6] Address: 0x5a9b90
// Method: SetupCameraOffsetTrigger::onTargetMode
__int64 __fastcall SetupCameraOffsetTrigger_onTargetMode(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  cocos2d::CCArray *v8; // rcx
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rdx

  v5 = 0; /*0x5a9bae*/
  if ( *(_DWORD *)(a1 + 1096) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) ) /*0x5a9bb6*/
    v6 = 0; /*0x5a9bb8*/
  else
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5a9bc2*/
  *(_DWORD *)(a1 + 1096) = v6; /*0x5a9bc5*/
  v7 = *(_QWORD *)(a1 + 680); /*0x5a9bcb*/
  if ( v7 ) /*0x5a9bd5*/
  {
    *(_DWORD *)(v7 + 1528) = v6; /*0x5a9bd7*/
  }
  else
  {
    v8 = *(cocos2d::CCArray **)(a1 + 688); /*0x5a9bdf*/
    if ( v8 && cocos2d::CCArray::count(v8) ) /*0x5a9beb*/
    {
      do /*0x5a9c2c*/
      {
        v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v5++); /*0x5a9c09*/
        *((_DWORD *)v9 + 382) = *(_DWORD *)(a1 + 1096); /*0x5a9c17*/
      }
      while ( v5 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5a9c2c*/
    }
  }
  LOBYTE(v4) = *(_DWORD *)(a1 + 1096) == 1; /*0x5a9c3c*/
  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 1104), v4); /*0x5a9c3f*/
  LOBYTE(v10) = *(_DWORD *)(a1 + 1096) == 2; /*0x5a9c52*/
  return CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 1112), v10); /*0x5a9c55*/
}

// [4/6] Address: 0x5a9c70
// Method: SetupCameraOffsetTrigger::textChanged
void __fastcall SetupCameraOffsetTrigger_textChanged(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r8
  const char *v8; // rcx
  float v9; // xmm6_4
  char *v10; // rcx
  cocos2d::CCString *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  const char *v15; // rcx
  int v16; // ebx
  char *v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  const char *v20; // rcx
  int v21; // ebx
  char *v22; // r8
  char *String[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v24; // [rsp+48h] [rbp-28h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x5a9c9c*/
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x5a9cb4*/
    if ( v4 ) /*0x5a9cb9*/
    {
      v5 = v4 - 1; /*0x5a9cbf*/
      if ( v5 ) /*0x5a9cc2*/
      {
        if ( v5 != 2 ) /*0x5a9ccb*/
          return; /*0x5a9ccb*/
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5a9ce2*/
        *(_OWORD *)String = 0; /*0x5a9ceb*/
        v7 = -1; /*0x5a9cef*/
        v24 = 0; /*0x5a9cf6*/
        do /*0x5a9d03*/
          ++v7; /*0x5a9d00*/
        while ( *(_BYTE *)(v6 + v7) ); /*0x5a9d03*/
        sub_3C230(String); /*0x5a9d10*/
        v8 = (const char *)String; /*0x5a9d1a*/
        if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x5a9d1e*/
          v8 = String[0]; /*0x5a9d1e*/
        v9 = atof(v8); /*0x5a9d30*/
        if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x5a9d38*/
        {
          v10 = String[0]; /*0x5a9d3a*/
          if ( (unsigned __int64)(*((_QWORD *)&v24 + 1) + 1LL) >= 0x1000 ) /*0x5a9d4b*/
          {
            v10 = (char *)*((_QWORD *)String[0] - 1); /*0x5a9d4d*/
            if ( (unsigned __int64)(String[0] - v10 - 8) > 0x1F ) /*0x5a9d60*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5a9d71*/
          }
          j_j_free(v10); /*0x5a9d78*/
        }
        v11 = cocos2d::CCString::createWithFormat("%.02f", v9); /*0x5a9d8c*/
        *(float *)(a1 + 472) = cocos2d::CCString::floatValue(v11); /*0x5a9da2*/
        sub_5AA230(a1 - 544); /*0x5a9daa*/
        v12 = *(_QWORD *)(a1 + 464); /*0x5a9dc2*/
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5a9def*/
        *(_OWORD *)String = 0; /*0x5a9df8*/
        v14 = -1; /*0x5a9dfc*/
        v24 = 0; /*0x5a9e03*/
        do /*0x5a9e13*/
          ++v14; /*0x5a9e10*/
        while ( *(_BYTE *)(v13 + v14) ); /*0x5a9e13*/
        sub_3C230(String); /*0x5a9e20*/
        v15 = (const char *)String; /*0x5a9e2a*/
        if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x5a9e2e*/
          v15 = String[0]; /*0x5a9e2e*/
        v16 = atoi(v15); /*0x5a9e3d*/
        if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x5a9e43*/
        {
          v17 = String[0]; /*0x5a9e45*/
          if ( (unsigned __int64)(*((_QWORD *)&v24 + 1) + 1LL) >= 0x1000 ) /*0x5a9e56*/
          {
            v17 = (char *)*((_QWORD *)String[0] - 1); /*0x5a9e58*/
            if ( (unsigned __int64)(String[0] - v17 - 8) > 0x1F ) /*0x5a9e6b*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5a9e7c*/
          }
          j_j_free(v17); /*0x5a9e86*/
        }
        *(_DWORD *)(a1 + 548) = (int)(float)((float)v16 * 3.0); /*0x5a9ea5*/
        sub_5AA140(a1 - 544); /*0x5a9eab*/
        floorf((float)*(int *)(a1 + 548) / 3.0); /*0x5a9ec3*/
        v12 = *(_QWORD *)(a1 + 536); /*0x5a9ef6*/
      }
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5a9f13*/
      *(_OWORD *)String = 0; /*0x5a9f1c*/
      v19 = -1; /*0x5a9f20*/
      v24 = 0; /*0x5a9f27*/
      do /*0x5a9f33*/
        ++v19; /*0x5a9f30*/
      while ( *(_BYTE *)(v18 + v19) ); /*0x5a9f33*/
      sub_3C230(String); /*0x5a9f40*/
      v20 = (const char *)String; /*0x5a9f4a*/
      if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x5a9f4e*/
        v20 = String[0]; /*0x5a9f4e*/
      v21 = atoi(v20); /*0x5a9f5d*/
      if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x5a9f63*/
      {
        v22 = String[0]; /*0x5a9f65*/
        if ( (unsigned __int64)(*((_QWORD *)&v24 + 1) + 1LL) >= 0x1000 ) /*0x5a9f76*/
        {
          v22 = (char *)*((_QWORD *)String[0] - 1); /*0x5a9f78*/
          if ( (unsigned __int64)(String[0] - v22 - 8) > 0x1F ) /*0x5a9f8b*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5a9f9c*/
        }
        j_j_free(v22); /*0x5a9fa6*/
      }
      *(_DWORD *)(a1 + 544) = (int)(float)((float)v21 * 3.0); /*0x5a9fc5*/
      SetupCameraOffsetTrigger_updateMoveCommandPosX(a1 - 544); /*0x5a9fcb*/
      floorf((float)*(int *)(a1 + 544) / 3.0); /*0x5a9fe3*/
      v12 = *(_QWORD *)(a1 + 528); /*0x5aa016*/
    }
    sub_83840(v12); /*0x5aa020*/
  }
}

// [5/6] Address: 0x5aa050
// Method: SetupCameraOffsetTrigger::updateMoveCommandPosX
void __fastcall SetupCameraOffsetTrigger_updateMoveCommandPosX(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  unsigned int i; // esi
  const struct cocos2d::CCPoint *v5; // rbx
  __int64 v6; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF
  float v8; // [rsp+34h] [rbp+Ch]
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 680); /*0x5aa056*/
  if ( v1 ) /*0x5aa063*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, (const struct cocos2d::CCPoint *)(v1 + 1504)); /*0x5aa071*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v9, (float)*(int *)(a1 + 1088), v8); /*0x5aa08d*/
    cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 680) + 1504LL, v3); /*0x5aa0a4*/
  }
  else
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); ++i ) /*0x5aa0be*/
    {
      v5 = (struct cocos2d::CCObject *)((char *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), i) /*0x5aa0e4*/
                                      + 1504);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, v5); /*0x5aa0ee*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v9, (float)*(int *)(a1 + 1088), v8); /*0x5aa10a*/
      cocos2d::CCPoint::operator=(v5, v6); /*0x5aa116*/
    }
  }
}

// [6/6] Address: 0x5aa2b0
// Method: SetupCameraOffsetTrigger::onClose
__int64 __fastcall SetupCameraOffsetTrigger_onClose(_QWORD *a1)
{
  *(_QWORD *)(a1[125] + 608LL) = 0; /*0x5aa2c9*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[125] + 1032LL))(a1[125], 0); /*0x5aa2de*/
  *(_QWORD *)(a1[132] + 608LL) = 0; /*0x5aa2ed*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[132] + 1032LL))(a1[132], 0); /*0x5aa302*/
  *(_QWORD *)(a1[133] + 608LL) = 0; /*0x5aa311*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[133] + 1032LL))(a1[133], 0); /*0x5aa326*/
  return SetupTriggerPopup_onClose((__int64)a1); /*0x5aa332*/
}
