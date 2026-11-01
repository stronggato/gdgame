#include <Geode/binding/EnhancedGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/26] Address: 0xcac40
// Method: EnhancedGameObject::EnhancedGameObject
__int64 __fastcall EnhancedGameObject_EnhancedGameObject(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = (__int64 *)GameOptionsLayer_onUIPOptions(); /*0xcac49*/
  v3 = a1 + 784; /*0xcac50*/
  if ( !a1 ) /*0xcac5a*/
    v3 = 0; /*0xcac5a*/
  v4 = *v2; /*0xcac5e*/
  v2[131] = v3; /*0xcac61*/
  return (*(__int64 (__fastcall **)(__int64 *))(v4 + 1064))(v2); /*0xcac72*/
}

// [2/26] Address: 0xdc670
// Method: EnhancedGameObject::updateUserCoin
// Hidden C++ exception states: #wind=3
void __fastcall EnhancedGameObject_updateUserCoin(__int64 a1)
{
  float v2; // xmm1_4
  int v3; // edi
  int v4; // ecx
  char v5; // di
  void *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // [rsp+40h] [rbp-38h]
  void *v10; // [rsp+40h] [rbp-38h]
  void *Block[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  unsigned __int64 v13; // [rsp+60h] [rbp-18h]

  if ( !*(_BYTE *)(a1 + 782) ) /*0xdc68c*/
  {
    v2 = *(float *)(a1 + 936); /*0xdc699*/
    if ( v2 > 0.0 ) /*0xdc6a7*/
      PlayerObject_disablePlayerControls(a1, v2); /*0xdc6a9*/
    *(_OWORD *)Block = 0; /*0xdc6b1*/
    v12 = 0; /*0xdc6b6*/
    v13 = 15; /*0xdc6bf*/
    LOBYTE(Block[0]) = 0; /*0xdc6c8*/
    if ( *(__int64 *)(a1 + 768) <= 0 ) /*0xdc6d5*/
      v3 = -1; /*0xdc6df*/
    else
      v3 = *(_DWORD *)(a1 + 928); /*0xdc6d7*/
    v4 = qword_905FB0; /*0xdc6e4*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xdc6ee*/
    {
      v9 = operator new(0x690u); /*0xdc6fa*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0xdc708*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xdc719*/
      v4 = qword_905FB0; /*0xdc71b*/
    }
    v5 = sub_247D30(v4, *(_DWORD *)(*(_QWORD *)(a1 + 744) + 56LL), 0, *(_QWORD *)(a1 + 768), v3, 0, (__int64)Block); /*0xdc752*/
    if ( v13 > 0xF ) /*0xdc75e*/
    {
      v6 = Block[0]; /*0xdc763*/
      if ( v13 + 1 >= 0x1000 ) /*0xdc772*/
      {
        v6 = (void *)*((_QWORD *)Block[0] - 1); /*0xdc778*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0xdc787*/
          invoke_watson(0, 0, 0, 0, 0); /*0xdc79c*/
      }
      j_j_free(v6); /*0xdc7a6*/
    }
    if ( v5 ) /*0xdc7ae*/
    {
      v7 = a1 + 672; /*0xdc7b0*/
      v8 = *(_QWORD *)&qword_905FB0; /*0xdc7b7*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xdc7c1*/
      {
        v10 = operator new(0x690u); /*0xdc7cd*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0xdc7db*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xdc7ec*/
        v8 = *(_QWORD *)&qword_905FB0; /*0xdc7ee*/
      }
      *(_QWORD *)(v8 + 1392) = v7; /*0xdc7f5*/
    }
    else
    {
      *(_BYTE *)(a1 + 808) = 1; /*0xdc7fe*/
    }
  }
}

// [3/26] Address: 0x2850d0
// Method: EnhancedGameObject::getHasSyncedAnimation
__int64 __fastcall EnhancedGameObject_getHasSyncedAnimation(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 1402); /*0x2850d7*/
}

// [4/26] Address: 0x2850e0
// Method: EnhancedGameObject::getHasRotateAction
__int64 __fastcall EnhancedGameObject_getHasRotateAction(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 1403); /*0x2850e7*/
}

// [5/26] Address: 0x29e0b0
// Method: EnhancedGameObject::init
char __fastcall EnhancedGameObject_init(__int64 a1, const char *a2)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x29e0b9*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, a2) ) /*0x29e0c0*/
    return 0; /*0x29e0eb*/
  sub_287800(a1); /*0x29e0cd*/
  *(_DWORD *)(a1 + 1256) = 4; /*0x29e0d4*/
  *(_BYTE *)(a1 + 313) = 0; /*0x29e0de*/
  return 1; /*0x29e0e5*/
}

// [6/26] Address: 0x29e100
// Method: EnhancedGameObject::canAllowMultiActivate
bool __fastcall EnhancedGameObject_canAllowMultiActivate(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx

  v1 = *(_DWORD *)(a1 + 1036); /*0x29e100*/
  if ( v1 <= 286 ) /*0x29e10c*/
  {
    if ( v1 != 286 ) /*0x29e10e*/
    {
      switch ( v1 ) /*0x29e13f*/
      {
        case 10: /*0x29e13f*/
        case 11: /*0x29e13f*/
        case 12: /*0x29e13f*/
        case 13: /*0x29e13f*/
        case 35: /*0x29e13f*/
        case 36: /*0x29e13f*/
        case 45: /*0x29e13f*/
        case 46: /*0x29e13f*/
        case 47: /*0x29e13f*/
        case 67: /*0x29e13f*/
        case 84: /*0x29e13f*/
        case 99: /*0x29e13f*/
        case 101: /*0x29e13f*/
        case 111: /*0x29e13f*/
        case 140: /*0x29e13f*/
        case 141: /*0x29e13f*/
          return 1;
        default:
          return 0;
      }
    }
    return 1; /*0x29e10e*/
  }
  if ( v1 > 1594 ) /*0x29e147*/
  {
    if ( v1 > 2926 ) /*0x29e18c*/
    {
      v12 = v1 - 3004; /*0x29e1ad*/
      if ( !v12 ) /*0x29e1b3*/
        return 1; /*0x29e1b3*/
      v13 = v12 - 1; /*0x29e1b5*/
      if ( !v13 ) /*0x29e1b8*/
        return 1; /*0x29e1b8*/
      v14 = v13 - 22; /*0x29e1ba*/
      if ( !v14 ) /*0x29e1bd*/
        return 1; /*0x29e1bd*/
      return v14 == 616; /*0x29e1bf*/
    }
    else
    {
      if ( v1 == 2926 ) /*0x29e18e*/
        return 1; /*0x29e18e*/
      v9 = v1 - 1704; /*0x29e190*/
      if ( !v9 ) /*0x29e196*/
        return 1; /*0x29e196*/
      v10 = v9 - 47; /*0x29e198*/
      if ( !v10 ) /*0x29e19b*/
        return 1; /*0x29e19b*/
      v11 = v10 - 182; /*0x29e19d*/
      if ( !v11 ) /*0x29e1a3*/
        return 1; /*0x29e1a3*/
      return v11 == 969; /*0x29e1a5*/
    }
  }
  else
  {
    if ( v1 == 1594 ) /*0x29e149*/
      return 1; /*0x29e149*/
    if ( v1 > 1022 ) /*0x29e151*/
    {
      v6 = v1 - 1330; /*0x29e16f*/
      if ( !v6 ) /*0x29e175*/
        return 1; /*0x29e175*/
      v7 = v6 - 1; /*0x29e177*/
      if ( !v7 ) /*0x29e17a*/
        return 1; /*0x29e17a*/
      v8 = v7 - 1; /*0x29e17c*/
      if ( !v8 ) /*0x29e17f*/
        return 1; /*0x29e17f*/
      return v8 == 1; /*0x29e181*/
    }
    else
    {
      if ( v1 == 1022 ) /*0x29e153*/
        return 1; /*0x29e153*/
      v2 = v1 - 287; /*0x29e155*/
      if ( !v2 ) /*0x29e15b*/
        return 1; /*0x29e15b*/
      v3 = v2 - 373; /*0x29e15d*/
      if ( !v3 ) /*0x29e163*/
        return 1; /*0x29e163*/
      v4 = v3 - 85; /*0x29e165*/
      if ( !v4 ) /*0x29e168*/
        return 1; /*0x29e168*/
      return v4 == 2; /*0x29e16a*/
    }
  }
}

// [7/26] Address: 0x29e260
// Method: EnhancedGameObject::resetObject
char __fastcall EnhancedGameObject_resetObject(__int64 a1)
{
  char result; // al
  __int64 v3; // rax

  GameObject_resetObject((__int64 *)a1); /*0x29e269*/
  result = -*(_BYTE *)(a1 + 1384); /*0x29e277*/
  *(_WORD *)(a1 + 1460) = 0; /*0x29e279*/
  *(_BYTE *)(a1 + 1459) = 0; /*0x29e282*/
  *(_BYTE *)(a1 + 1360) = 0; /*0x29e28b*/
  *(_QWORD *)(a1 + 1364) = 0; /*0x29e292*/
  *(_QWORD *)(a1 + 1240) = -1; /*0x29e299*/
  *(_QWORD *)(a1 + 1248) = -1; /*0x29e2a4*/
  *(_DWORD *)(a1 + 1380) = 0; /*0x29e2b6*/
  *(_DWORD *)(a1 + 1444) = 0; /*0x29e2bc*/
  *(_DWORD *)(a1 + 1420) = 0; /*0x29e2c2*/
  *(float *)(a1 + 1372) = (float)-(result != 0); /*0x29e2c8*/
  if ( *(_BYTE *)(a1 + 1433) ) /*0x29e2d0*/
  {
    *(_BYTE *)(a1 + 1441) = 0; /*0x29e2df*/
    v3 = *(_QWORD *)(a1 + 320); /*0x29e2e5*/
    *(_QWORD *)(a1 + 1372) = 0; /*0x29e2e8*/
    *(_BYTE *)(a1 + 774) = 1; /*0x29e2ef*/
    return (*(__int64 (**)(void))(v3 + 40))(); /*0x29e2fb*/
  }
  return result; /*0x29e2ff*/
}

// [8/26] Address: 0x29e310
// Method: EnhancedGameObject::restoreObject
__int64 __fastcall EnhancedGameObject_restoreObject(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 978) = 0; /*0x29e319*/
  *(_BYTE *)(a1 + 774) = 0; /*0x29e320*/
  LOBYTE(a2) = -1; /*0x29e327*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 320) + 40LL))(a1 + 320, a2); /*0x29e333*/
  *(_WORD *)(a1 + 1460) = 0; /*0x29e336*/
  return result; /*0x29e33f*/
}

// [9/26] Address: 0x29e350
// Method: EnhancedGameObject::powerOnObject
void __fastcall EnhancedGameObject_powerOnObject(__int64 a1, int a2)
{
  *(_BYTE *)(a1 + 1360) = 1; /*0x29e350*/
  *(_DWORD *)(a1 + 1364) = a2; /*0x29e357*/
  *(_BYTE *)(a1 + 760) = 1; /*0x29e35d*/
}

// [10/26] Address: 0x29e370
// Method: EnhancedGameObject::powerOffObject
void __fastcall EnhancedGameObject_powerOffObject(__int64 a1)
{
  bool v1; // zf

  v1 = *(_BYTE *)(a1 + 760) == 0; /*0x29e370*/
  *(_DWORD *)(a1 + 1364) = 0; /*0x29e377*/
  if ( !v1 ) /*0x29e381*/
    *(_BYTE *)(a1 + 760) = 0; /*0x29e383*/
}

// [11/26] Address: 0x29e390
// Method: EnhancedGameObject::canMultiActivate
char __fastcall EnhancedGameObject_canMultiActivate(__int64 a1, char a2)
{
  if ( a2 ) /*0x29e392*/
  {
    if ( *(_BYTE *)(a1 + 1457) ) /*0x29e39f*/
      return 0; /*0x29e3a6*/
  }
  else if ( !*(_BYTE *)(a1 + 1458) ) /*0x29e394*/
  {
    return 0; /*0x29e39e*/
  }
  return 1; /*0x29e39e*/
}

// [12/26] Address: 0x29e3b0
// Method: EnhancedGameObject::triggerActivated
void __fastcall EnhancedGameObject_triggerActivated(__int64 a1)
{
  *(_WORD *)(a1 + 1460) = 257; /*0x29e3b0*/
}

// [13/26] Address: 0x29e3c0
// Method: EnhancedGameObject::activatedByPlayer
__int64 __fastcall EnhancedGameObject_activatedByPlayer(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a1; /*0x29e3ca*/
  *((_BYTE *)a1 + 1459) = 1; /*0x29e3d0*/
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 1592))(a1, *(unsigned __int8 *)(a2 + 2936)); /*0x29e3e1*/
  if ( !(_BYTE)result ) /*0x29e3e9*/
  {
    if ( *(_DWORD *)(a2 + 924) == 1 ) /*0x29e3f2*/
      *((_BYTE *)a1 + 1460) = 1; /*0x29e3f4*/
    else
      *((_BYTE *)a1 + 1461) = 1; /*0x29e406*/
  }
  return result; /*0x29e3fb*/
}

// [14/26] Address: 0x29e420
// Method: EnhancedGameObject::hasBeenActivatedByPlayer
char __fastcall EnhancedGameObject_hasBeenActivatedByPlayer(_BYTE *a1, __int64 a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 1592LL))( /*0x29e43a*/
         a1,
         *(unsigned __int8 *)(a2 + 2936)) )
  {
    return 0; /*0x29e444*/
  }
  if ( *(_DWORD *)(a2 + 924) == 1 ) /*0x29e458*/
    return a1[1460]; /*0x29e45a*/
  return a1[1461]; /*0x29e446*/
}

// [15/26] Address: 0x29e480
// Method: EnhancedGameObject::hasBeenActivated
bool __fastcall EnhancedGameObject_hasBeenActivated(__int64 a1)
{
  return *(_BYTE *)(a1 + 1460) || *(_BYTE *)(a1 + 1461); /*0x29e494*/
}

// [16/26] Address: 0x29e4a0
// Method: EnhancedGameObject::animationTriggered
__int64 __fastcall EnhancedGameObject_animationTriggered(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 1433) && (!*((_BYTE *)a1 + 1456) || *((_BYTE *)a1 + 773)) ) /*0x29e4bb*/
  {
    v3 = *a1; /*0x29e4c4*/
    *((_BYTE *)a1 + 1441) = 1; /*0x29e4d0*/
    *((_BYTE *)a1 + 774) = 0; /*0x29e4d7*/
    *((_DWORD *)a1 + 362) = -1; /*0x29e4de*/
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v3 + 1696))(a1, a2, 0xFFFFFFFFLL); /*0x29e4e8*/
    *((_DWORD *)a1 + 342) = 0; /*0x29e4ee*/
  }
  return result; /*0x29e4f8*/
}

// [17/26] Address: 0x29e500
// Method: EnhancedGameObject::saveActiveColors
char __fastcall EnhancedGameObject_saveActiveColors(__int64 a1)
{
  int v2; // eax

  LOBYTE(v2) = GameObject_saveActiveColors(a1); /*0x29e509*/
  if ( *(_BYTE *)(a1 + 1424) ) /*0x29e50e*/
  {
    if ( *(float *)(a1 + 1368) <= 0.0 && !*(_BYTE *)(a1 + 1384) ) /*0x29e523*/
    {
      v2 = rand(); /*0x29e52c*/
      *(float *)(a1 + 1368) = (float)v2 / 32767.0; /*0x29e541*/
    }
  }
  else
  {
    LOBYTE(v2) = 0; /*0x29e54b*/
    *(_QWORD *)(a1 + 1368) = 0; /*0x29e54d*/
  }
  if ( *(_BYTE *)(a1 + 1402) ) /*0x29e554*/
    LOBYTE(v2) = EnhancedGameObject_setupAnimationVariables(a1); /*0x29e565*/
  return v2; /*0x29e560*/
}

// [18/26] Address: 0x29e570
// Method: EnhancedGameObject::customObjectSetup
char __fastcall EnhancedGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  float v11; // xmm6_4
  char result; // al
  int v13; // eax
  const char *v14; // rcx
  float v15; // xmm1_4
  const char *v16; // rcx
  float v17; // xmm8_4
  int v18; // eax
  const char *v19; // rcx
  const char *v20; // rcx
  float v21; // xmm8_4
  int v22; // eax
  const char *v23; // rcx
  char v24; // cl
  int v25; // eax
  const char *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  const char *v29; // rcx
  int v30; // eax
  const char *v31; // rcx
  int v32; // eax
  const char *v33; // rcx
  const char *v34; // rcx

  v3 = 0; /*0x29e588*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 792LL) ) /*0x29e59d*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 3168LL); /*0x29e5ad*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 3192LL) > 0xFu ) /*0x29e5b9*/
      v8 = *(const char **)v8; /*0x29e5bb*/
    v7 = atoi(v8); /*0x29e5be*/
  }
  else
  {
    v7 = 0; /*0x29e5a6*/
  }
  *(_BYTE *)(a1 + 1458) = v7 != 0; /*0x29e5c9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3552LL) ) /*0x29e5d2*/
  {
    v10 = (const char *)(*(_QWORD *)a2 + 14208LL); /*0x29e5e2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14232LL) > 0xFu ) /*0x29e5ee*/
      v10 = *(const char **)v10; /*0x29e5f0*/
    v9 = atoi(v10); /*0x29e5f3*/
  }
  else
  {
    v9 = 0; /*0x29e5db*/
  }
  v11 = 0.0; /*0x29e609*/
  result = v9 != 0; /*0x29e60c*/
  *(_BYTE *)(a1 + 1457) = result; /*0x29e60f*/
  if ( *(_BYTE *)(a1 + 1403) ) /*0x29e615*/
  {
    if ( *(_QWORD *)(*(_QWORD *)a3 + 784LL) ) /*0x29e625*/
    {
      v14 = (const char *)(*(_QWORD *)a2 + 3136LL); /*0x29e635*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 3160LL) > 0xFu ) /*0x29e641*/
        v14 = *(const char **)v14; /*0x29e643*/
      v13 = atoi(v14); /*0x29e646*/
    }
    else
    {
      v13 = 0; /*0x29e62e*/
    }
    *(_BYTE *)(a1 + 1404) = v13 != 0; /*0x29e651*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 776LL) ) /*0x29e65a*/
    {
      v16 = (const char *)(*(_QWORD *)a2 + 3104LL); /*0x29e66b*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 3128LL) > 0xFu ) /*0x29e677*/
        v16 = *(const char **)v16; /*0x29e679*/
      v17 = atof(v16); /*0x29e686*/
      if ( isnan(v17) ) /*0x29e68f*/
        v15 = 0.0; /*0x29e699*/
      else
        v15 = fminf(1000000000.0, fmaxf(-1000000000.0, v17)); /*0x29e6ae*/
    }
    else
    {
      v15 = 0.0; /*0x29e663*/
    }
    *(float *)(a1 + 1408) = v15; /*0x29e6b2*/
    result = EnhancedGameObject_createRotateAction(a1, a2, 0); /*0x29e6c8*/
  }
  if ( *(_BYTE *)(a1 + 1402) ) /*0x29e6cd*/
  {
    if ( *(_QWORD *)(*(_QWORD *)a3 + 848LL) ) /*0x29e6dd*/
    {
      v19 = (const char *)(*(_QWORD *)a2 + 3392LL); /*0x29e6ed*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 3416LL) > 0xFu ) /*0x29e6f9*/
        v19 = *(const char **)v19; /*0x29e6fb*/
      v18 = atoi(v19); /*0x29e6fe*/
    }
    else
    {
      v18 = 0; /*0x29e6e6*/
    }
    *(_BYTE *)(a1 + 1424) = v18 != 0; /*0x29e709*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 856LL) ) /*0x29e712*/
    {
      v20 = (const char *)(*(_QWORD *)a2 + 3424LL); /*0x29e71e*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 3448LL) > 0xFu ) /*0x29e72a*/
        v20 = *(const char **)v20; /*0x29e72c*/
      v21 = atof(v20); /*0x29e739*/
      if ( !isnan(v21) ) /*0x29e742*/
        v11 = fminf(1000000000.0, fmaxf(-1000000000.0, v21)); /*0x29e759*/
    }
    *(float *)(a1 + 1428) = v11; /*0x29e75d*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 984LL) ) /*0x29e768*/
    {
      v23 = (const char *)(*(_QWORD *)a2 + 3936LL); /*0x29e778*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 3960LL) > 0xFu ) /*0x29e784*/
        v23 = *(const char **)v23; /*0x29e786*/
      v22 = atoi(v23); /*0x29e789*/
    }
    else
    {
      v22 = 0; /*0x29e771*/
    }
    v24 = v22 != 0; /*0x29e791*/
    *(_BYTE *)(a1 + 1433) = v22 != 0; /*0x29e794*/
    if ( !*(_BYTE *)(a1 + 1432) ) /*0x29e79a*/
    {
      if ( *(_QWORD *)(*(_QWORD *)a3 + 976LL) ) /*0x29e7a6*/
      {
        v26 = (const char *)(*(_QWORD *)a2 + 3904LL); /*0x29e7b6*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3928LL) > 0xFu ) /*0x29e7c2*/
          v26 = *(const char **)v26; /*0x29e7c4*/
        v25 = atoi(v26); /*0x29e7c7*/
        v24 = *(_BYTE *)(a1 + 1433); /*0x29e7cd*/
      }
      else
      {
        v25 = 0; /*0x29e7af*/
      }
      *(_BYTE *)(a1 + 1432) = v25 != 0; /*0x29e7d9*/
    }
    if ( v24 ) /*0x29e7e1*/
    {
      *(_BYTE *)(a1 + 1441) = 0; /*0x29e7ea*/
      v27 = *(_QWORD *)(a1 + 320); /*0x29e7f1*/
      *(_QWORD *)(a1 + 1376) = 0; /*0x29e7f6*/
      *(_QWORD *)(a1 + 1368) = 0; /*0x29e7fd*/
      *(_BYTE *)(a1 + 774) = 1; /*0x29e804*/
      (*(void (__fastcall **)(__int64, _QWORD))(v27 + 40))(a1 + 320, 0); /*0x29e80b*/
    }
    if ( *(_QWORD *)(*(_QWORD *)a3 + 1008LL) ) /*0x29e811*/
    {
      v29 = (const char *)(*(_QWORD *)a2 + 4032LL); /*0x29e821*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 4056LL) > 0xFu ) /*0x29e82d*/
        v29 = *(const char **)v29; /*0x29e82f*/
      v28 = atoi(v29); /*0x29e832*/
    }
    else
    {
      v28 = 0; /*0x29e81a*/
    }
    *(_BYTE *)(a1 + 1434) = v28 != 0; /*0x29e83d*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 1712LL) ) /*0x29e846*/
    {
      v31 = (const char *)(*(_QWORD *)a2 + 6848LL); /*0x29e856*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 6872LL) > 0xFu ) /*0x29e862*/
        v31 = *(const char **)v31; /*0x29e864*/
      v30 = atoi(v31); /*0x29e867*/
    }
    else
    {
      v30 = 0; /*0x29e84f*/
    }
    *(_BYTE *)(a1 + 1456) = v30 != 0; /*0x29e872*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3696LL) ) /*0x29e87b*/
    {
      v33 = (const char *)(*(_QWORD *)a2 + 14784LL); /*0x29e88b*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 14808LL) > 0xFu ) /*0x29e897*/
        v33 = *(const char **)v33; /*0x29e899*/
      v32 = atoi(v33); /*0x29e89c*/
    }
    else
    {
      v32 = 0; /*0x29e884*/
    }
    *(_DWORD *)(a1 + 1436) = v32; /*0x29e8a2*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 4736LL) ) /*0x29e8ab*/
    {
      v34 = (const char *)(*(_QWORD *)a2 + 18944LL); /*0x29e8b7*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 18968LL) > 0xFu ) /*0x29e8c3*/
        v34 = *(const char **)v34; /*0x29e8c5*/
      v3 = atoi(v34); /*0x29e8ce*/
    }
    *(_BYTE *)(a1 + 1440) = v3 != 0; /*0x29e8d5*/
    return v3 != 0; /*0x29e8d2*/
  }
  return result; /*0x29e8db*/
}

// [19/26] Address: 0x29e910
// Method: EnhancedGameObject::customSetup
char __fastcall EnhancedGameObject_customSetup(__int64 a1)
{
  __int64 v1; // rdx
  _DWORD *v3; // rax
  bool v4; // zf
  int v5; // ecx
  float v6; // xmm0_4
  int v7; // ecx
  float v8; // xmm0_4
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  float v12; // xmm0_4
  __int64 v13; // rdx
  _DWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm6_4
  int v22; // eax
  int v23; // ecx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  _DWORD *v30; // rax
  int v31; // eax
  float v32; // xmm0_4
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  int v35; // eax
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rdx
  int v42; // edx
  int v43; // edx
  int v44; // edx
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  _DWORD *v47; // rax
  _DWORD *v48; // rax
  _DWORD *v49; // rax
  float v50; // xmm1_4
  float v51; // xmm1_4
  int v52; // eax
  _DWORD *v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // rdx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  _DWORD *v62; // rax
  int v63; // eax
  _DWORD *v64; // rax
  int v65; // eax
  int v66; // eax
  _DWORD *v67; // rax
  int v68; // edx
  int v69; // edx
  _DWORD *v70; // rax
  int v71; // eax
  int v72; // eax
  int v73; // edx
  int v74; // edx
  int v75; // edx
  int v76; // edx
  int v77; // edx
  int v78; // edx
  _DWORD *v79; // rax
  int v80; // eax
  __m128i si128; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(unsigned int *)(a1 + 1036); /*0x29e941*/
  if ( (int)v1 <= 375 ) /*0x29e957*/
  {
    if ( (_DWORD)v1 != 375 ) /*0x29e95d*/
    {
      switch ( (int)v1 ) /*0x29e985*/
      {
        case 85: /*0x29e985*/
        case 86: /*0x29e985*/
        case 87: /*0x29e985*/
        case 97: /*0x29e985*/
        case 154: /*0x29e985*/
        case 155: /*0x29e985*/
        case 156: /*0x29e985*/
        case 222: /*0x29e985*/
        case 223: /*0x29e985*/
        case 224: /*0x29e985*/
          goto LABEL_29;
        case 88: /*0x29e985*/
        case 89: /*0x29e985*/
        case 98: /*0x29e985*/
          goto LABEL_114;
        case 137: /*0x29e985*/
        case 138: /*0x29e985*/
        case 139: /*0x29e985*/
        case 180: /*0x29e985*/
        case 181: /*0x29e985*/
        case 182: /*0x29e985*/
          v3 = *(_DWORD **)(a1 + 1104); /*0x29e987*/
          if ( v3 ) /*0x29e991*/
          {
            v3[1] = 1006; /*0x29e995*/
            *v3 = 0; /*0x29e99c*/
          }
          v4 = *(_BYTE *)(a1 + 1404) == 0; /*0x29e99e*/
          *(_DWORD *)(a1 + 928) = 7; /*0x29e9a5*/
          *(_DWORD *)(a1 + 1056) = 9; /*0x29e9af*/
          *(_DWORD *)(a1 + 1124) = 3; /*0x29e9b9*/
          if ( v4 ) /*0x29e9c3*/
            goto LABEL_188; /*0x29e9c3*/
          goto LABEL_190; /*0x29e9c3*/
        case 183: /*0x29e985*/
        case 184: /*0x29e985*/
        case 185: /*0x29e985*/
        case 186: /*0x29e985*/
        case 187: /*0x29e985*/
        case 188: /*0x29e985*/
          goto LABEL_137;
        default:
          return GameObject_customSetup((__int64 *)a1);
      }
      return GameObject_customSetup((__int64 *)a1);
    }
LABEL_91:
    *(_DWORD *)(a1 + 928) = 7; /*0x29f3a5*/
    *(_DWORD *)(a1 + 1056) = 9; /*0x29f3b8*/
    *(_DWORD *)(a1 + 1124) = 3; /*0x29f3c2*/
    if ( (int)v1 > 1521 ) /*0x29f3d2*/
    {
      switch ( (int)v1 ) /*0x29f4a9*/
      {
        case 1522: /*0x29f4a9*/
        case 1526: /*0x29f4a9*/
          goto LABEL_105;
        case 1523: /*0x29f4a9*/
        case 1527: /*0x29f4a9*/
          goto LABEL_108;
        case 1524: /*0x29f4a9*/
        case 1528: /*0x29f4a9*/
          goto LABEL_97;
        case 1525: /*0x29f4a9*/
          goto LABEL_102;
        default:
          break;
      }
    }
    else if ( (_DWORD)v1 == 1521 || (v42 = v1 - 375) == 0 ) /*0x29f3e4*/
    {
LABEL_102:
      v46 = *(_DWORD **)(a1 + 1104); /*0x29f4ab*/
      if ( v46 ) /*0x29f4b5*/
      {
        v46[1] = 1005; /*0x29f4b9*/
        *v46 = 0; /*0x29f4c0*/
      }
    }
    else
    {
      v43 = v42 - 1; /*0x29f3ea*/
      if ( v43 ) /*0x29f3ed*/
      {
        v44 = v43 - 1; /*0x29f3f3*/
        if ( v44 ) /*0x29f3f6*/
        {
          if ( v44 == 1 ) /*0x29f3ff*/
          {
LABEL_97:
            v45 = *(_DWORD **)(a1 + 1104); /*0x29f401*/
            if ( v45 ) /*0x29f40b*/
            {
              v45[1] = 1006; /*0x29f40f*/
              *v45 = 0; /*0x29f416*/
            }
          }
        }
        else
        {
LABEL_108:
          v48 = *(_DWORD **)(a1 + 1104); /*0x29f4f5*/
          if ( v48 ) /*0x29f4ff*/
          {
            v48[1] = 1005; /*0x29f507*/
            *v48 = 0; /*0x29f50e*/
          }
        }
      }
      else
      {
LABEL_105:
        v47 = *(_DWORD **)(a1 + 1104); /*0x29f4d0*/
        if ( v47 ) /*0x29f4da*/
        {
          v47[1] = 1006; /*0x29f4de*/
          *v47 = 0; /*0x29f4e5*/
        }
      }
    }
    if ( *(_BYTE *)(a1 + 1404) ) /*0x29f421*/
    {
LABEL_190:
      *(_BYTE *)(a1 + 1403) = 1; /*0x29fb28*/
      return GameObject_customSetup((__int64 *)a1); /*0x29fb2f*/
    }
    rand(); /*0x29f42e*/
    rand(); /*0x29f443*/
LABEL_189:
    EnhancedGameObject_createRotateAction(a1, v13, 0); /*0x29fb1d*/
    goto LABEL_190; /*0x29fb23*/
  }
  if ( (int)v1 > 1831 ) /*0x29e9f9*/
  {
    if ( (int)v1 > 2223 ) /*0x29f8ea*/
    {
      if ( (int)v1 > 2694 ) /*0x29fb3a*/
      {
        if ( (int)v1 > 3119 ) /*0x29fb77*/
        {
          if ( (int)v1 > 3483 ) /*0x29fc7d*/
          {
            v75 = v1 - 3484; /*0x29fcb7*/
            if ( v75 ) /*0x29fcbd*/
            {
              v76 = v75 - 8; /*0x29fcbf*/
              if ( v76 ) /*0x29fcc2*/
              {
                v77 = v76 - 1; /*0x29fcc4*/
                if ( v77 ) /*0x29fcc7*/
                {
                  v78 = v77 - 718; /*0x29fcc9*/
                  if ( v78 ) /*0x29fccf*/
                  {
                    if ( v78 != 89 ) /*0x29fcd4*/
                      return GameObject_customSetup((__int64 *)a1); /*0x29fcd4*/
                  }
                }
              }
            }
          }
          else if ( (_DWORD)v1 != 3483 ) /*0x29fc7f*/
          {
            if ( (int)v1 > 3303 ) /*0x29fc87*/
            {
              if ( (_DWORD)v1 != 3304 && (_DWORD)v1 != 3482 ) /*0x29fcb0*/
                return GameObject_customSetup((__int64 *)a1); /*0x29fcb0*/
            }
            else if ( (_DWORD)v1 != 3303 ) /*0x29fc89*/
            {
              v73 = v1 - 3120; /*0x29fc8b*/
              if ( v73 ) /*0x29fc91*/
              {
                v74 = v73 - 1; /*0x29fc93*/
                if ( v74 ) /*0x29fc96*/
                {
                  if ( v74 != 98 ) /*0x29fc9b*/
                    return GameObject_customSetup((__int64 *)a1); /*0x29fc9b*/
                }
              }
            }
          }
        }
        else if ( (_DWORD)v1 != 3119 ) /*0x29fb7d*/
        {
          switch ( (int)v1 ) /*0x29fbaa*/
          {
            case 2864: /*0x29fbaa*/
            case 2865: /*0x29fbaa*/
            case 2867: /*0x29fbaa*/
            case 2868: /*0x29fbaa*/
            case 2869: /*0x29fbaa*/
            case 2870: /*0x29fbaa*/
            case 2871: /*0x29fbaa*/
            case 2872: /*0x29fbaa*/
            case 2873: /*0x29fbaa*/
            case 2874: /*0x29fbaa*/
            case 2875: /*0x29fbaa*/
            case 2876: /*0x29fbaa*/
            case 2877: /*0x29fbaa*/
            case 2878: /*0x29fbaa*/
            case 2879: /*0x29fbaa*/
            case 2880: /*0x29fbaa*/
            case 2881: /*0x29fbaa*/
            case 2882: /*0x29fbaa*/
            case 2883: /*0x29fbaa*/
            case 2884: /*0x29fbaa*/
            case 2885: /*0x29fbaa*/
            case 2886: /*0x29fbaa*/
            case 2887: /*0x29fbaa*/
            case 2888: /*0x29fbaa*/
            case 2889: /*0x29fbaa*/
            case 2890: /*0x29fbaa*/
            case 2891: /*0x29fbaa*/
            case 2892: /*0x29fbaa*/
            case 2893: /*0x29fbaa*/
            case 2894: /*0x29fbaa*/
LABEL_200:
              v70 = *(_DWORD **)(a1 + 1104); /*0x29fbac*/
              *(_DWORD *)(a1 + 928) = 7; /*0x29fbb3*/
              if ( v70 ) /*0x29fbc0*/
              {
                v70[1] = 1; /*0x29fbc4*/
                *v70 = 0; /*0x29fbcb*/
              }
              *(_BYTE *)(a1 + 1402) = 1; /*0x29fbcd*/
              *(_BYTE *)(a1 + 1061) = 1; /*0x29fbd4*/
              v71 = rand(); /*0x29fbdb*/
              *(_BYTE *)(a1 + 1424) = 1; /*0x29fbe9*/
              *(float *)(a1 + 1388) = (float)((float)((float)v71 / 32767.0) * 0.40000001) + 0.80000001; /*0x29fc0b*/
              if ( (float)((float)rand() / 32767.0) <= 0.69999999 ) /*0x29fc2b*/
              {
                v72 = rand(); /*0x29fc4a*/
                *(_BYTE *)(a1 + 1061) = 0; /*0x29fc50*/
                *(float *)(a1 + 1368) = (float)((float)v72 / 32767.0) * 0.5; /*0x29fc6a*/
              }
              else
              {
                *(_BYTE *)(a1 + 1384) = 1; /*0x29fc2d*/
                *(_DWORD *)(a1 + 1372) = -1082130432; /*0x29fc34*/
                *(_BYTE *)(a1 + 1061) = 0; /*0x29fc3e*/
              }
              break; /*0x29fc45*/
            case 3000: /*0x29fbaa*/
            case 3001: /*0x29fbaa*/
            case 3002: /*0x29fbaa*/
LABEL_170:
              v9 = *(_DWORD **)(a1 + 1104); /*0x29f926*/
              if ( v9 ) /*0x29f930*/
              {
                v9[1] = 1; /*0x29f932*/
LABEL_172:
                *v9 = 0; /*0x29f939*/
              }
LABEL_173:
              *(_DWORD *)(a1 + 928) = 7; /*0x29f93d*/
              *(_DWORD *)(a1 + 1056) = 9; /*0x29f947*/
              *(_DWORD *)(a1 + 1124) = 3; /*0x29f951*/
              *(_BYTE *)(a1 + 1402) = 1; /*0x29f95b*/
              break; /*0x29f962*/
            default:
              return GameObject_customSetup((__int64 *)a1);
          }
          return GameObject_customSetup((__int64 *)a1);
        }
      }
      else if ( (_DWORD)v1 != 2694 ) /*0x29fb3c*/
      {
        v68 = v1 - 2246; /*0x29fb42*/
        if ( v68 ) /*0x29fb48*/
        {
          v69 = v68 - 359; /*0x29fb4e*/
          if ( v69 ) /*0x29fb54*/
          {
            if ( (unsigned int)(v69 - 24) >= 2 ) /*0x29fb5d*/
              return GameObject_customSetup((__int64 *)a1); /*0x29fb5d*/
          }
        }
      }
    }
    else if ( (_DWORD)v1 != 2223 ) /*0x29f8f0*/
    {
      switch ( (int)v1 ) /*0x29f91d*/
      {
        case 1832: /*0x29f91d*/
        case 1833: /*0x29f91d*/
        case 1834: /*0x29f91d*/
          goto LABEL_185;
        case 1839: /*0x29f91d*/
        case 1840: /*0x29f91d*/
        case 1841: /*0x29f91d*/
        case 1842: /*0x29f91d*/
          *(_BYTE *)(a1 + 1432) = 1; /*0x29f91f*/
          goto LABEL_170; /*0x29f91f*/
        case 1849: /*0x29f91d*/
        case 1850: /*0x29f91d*/
        case 1851: /*0x29f91d*/
        case 1852: /*0x29f91d*/
        case 1853: /*0x29f91d*/
        case 1854: /*0x29f91d*/
        case 1855: /*0x29f91d*/
        case 1856: /*0x29f91d*/
        case 1857: /*0x29f91d*/
        case 1858: /*0x29f91d*/
        case 1860: /*0x29f91d*/
          v64 = *(_DWORD **)(a1 + 1104); /*0x29fa0b*/
          *(_DWORD *)(a1 + 928) = 7; /*0x29fa12*/
          if ( v64 ) /*0x29fa1f*/
          {
            v64[1] = 1011; /*0x29fa23*/
            *v64 = 0; /*0x29fa2a*/
          }
          v65 = *(_DWORD *)(a1 + 1036); /*0x29fa2c*/
          *(_BYTE *)(a1 + 1402) = 1; /*0x29fa32*/
          if ( v65 != 1857 && v65 != 1860 ) /*0x29fa45*/
            *(_BYTE *)(a1 + 1061) = 1; /*0x29fa47*/
          v66 = rand(); /*0x29fa4e*/
          *(_BYTE *)(a1 + 1424) = 1; /*0x29fa5c*/
          *(float *)(a1 + 1388) = (float)((float)((float)v66 / 32767.0) * 0.40000001) + 0.80000001; /*0x29fa7e*/
          if ( (float)((float)rand() / 32767.0) > 0.69999999 ) /*0x29fa9e*/
            goto LABEL_184; /*0x29fa9e*/
          goto LABEL_177; /*0x29fa9e*/
        case 1936: /*0x29f91d*/
        case 1937: /*0x29f91d*/
        case 1938: /*0x29f91d*/
        case 1939: /*0x29f91d*/
LABEL_174:
          v62 = *(_DWORD **)(a1 + 1104); /*0x29f967*/
          *(_DWORD *)(a1 + 928) = 7; /*0x29f96e*/
          if ( v62 ) /*0x29f97b*/
          {
            v62[1] = 1011; /*0x29f97f*/
            *v62 = 0; /*0x29f986*/
          }
          *(_BYTE *)(a1 + 1402) = 1; /*0x29f988*/
          v63 = rand(); /*0x29f98f*/
          *(_BYTE *)(a1 + 1424) = 1; /*0x29f99d*/
          *(float *)(a1 + 1388) = (float)((float)((float)v63 / 32767.0) * 0.40000001) + 0.80000001; /*0x29f9bf*/
          if ( (float)((float)rand() / 32767.0) > 0.69999999 ) /*0x29f9df*/
          {
LABEL_184:
            *(_BYTE *)(a1 + 1384) = 1; /*0x29faa4*/
            *(_DWORD *)(a1 + 1372) = -1082130432; /*0x29faab*/
          }
          else
          {
LABEL_177:
            *(float *)(a1 + 1368) = (float)((float)rand() / 32767.0) * 0.5; /*0x29f9e5*/
          }
          break; /*0x29fa06*/
        case 2020: /*0x29f91d*/
        case 2021: /*0x29f91d*/
        case 2022: /*0x29f91d*/
        case 2023: /*0x29f91d*/
        case 2024: /*0x29f91d*/
        case 2025: /*0x29f91d*/
        case 2026: /*0x29f91d*/
        case 2027: /*0x29f91d*/
        case 2028: /*0x29f91d*/
        case 2029: /*0x29f91d*/
        case 2030: /*0x29f91d*/
        case 2031: /*0x29f91d*/
        case 2032: /*0x29f91d*/
        case 2033: /*0x29f91d*/
        case 2034: /*0x29f91d*/
        case 2035: /*0x29f91d*/
        case 2036: /*0x29f91d*/
        case 2037: /*0x29f91d*/
        case 2038: /*0x29f91d*/
        case 2039: /*0x29f91d*/
        case 2040: /*0x29f91d*/
        case 2041: /*0x29f91d*/
        case 2042: /*0x29f91d*/
        case 2043: /*0x29f91d*/
        case 2044: /*0x29f91d*/
        case 2045: /*0x29f91d*/
        case 2046: /*0x29f91d*/
        case 2047: /*0x29f91d*/
        case 2048: /*0x29f91d*/
        case 2049: /*0x29f91d*/
        case 2050: /*0x29f91d*/
        case 2051: /*0x29f91d*/
        case 2052: /*0x29f91d*/
        case 2053: /*0x29f91d*/
        case 2054: /*0x29f91d*/
        case 2055: /*0x29f91d*/
          goto LABEL_200;
        default:
          return GameObject_customSetup((__int64 *)a1);
      }
      return GameObject_customSetup((__int64 *)a1);
    }
    v79 = *(_DWORD **)(a1 + 1104); /*0x29fcda*/
    if ( v79 ) /*0x29fce4*/
    {
      v79[1] = 1; /*0x29fce8*/
      *v79 = 0; /*0x29fcef*/
    }
    v80 = *(_DWORD *)(a1 + 1036); /*0x29fcf1*/
    *(_DWORD *)(a1 + 928) = 7; /*0x29fcf7*/
    *(_DWORD *)(a1 + 1056) = 9; /*0x29fd01*/
    *(_DWORD *)(a1 + 1124) = 3; /*0x29fd0b*/
    *(_BYTE *)(a1 + 1061) = 1; /*0x29fd15*/
    *(_BYTE *)(a1 + 1402) = 1; /*0x29fd1c*/
    if ( v80 != 2605 && v80 != 2694 ) /*0x29fd2f*/
      *(float *)(a1 + 1388) = (float)((float)((float)rand() / 32767.0) * 0.40000001) + 0.80000001; /*0x29fd56*/
    sub_2BE290(a1); /*0x29fd61*/
    return GameObject_customSetup((__int64 *)a1); /*0x29fd61*/
  }
  if ( (_DWORD)v1 == 1831 ) /*0x29e9ff*/
  {
LABEL_185:
    v67 = *(_DWORD **)(a1 + 1104); /*0x29faba*/
    if ( v67 ) /*0x29fac4*/
    {
      v67[1] = 1007; /*0x29fac8*/
      *v67 = 0; /*0x29facf*/
    }
LABEL_187:
    v4 = *(_BYTE *)(a1 + 1404) == 0; /*0x29fad1*/
    *(_DWORD *)(a1 + 1124) = 3; /*0x29fad8*/
    *(_DWORD *)(a1 + 1056) = 9; /*0x29fae2*/
    *(_DWORD *)(a1 + 928) = 7; /*0x29faec*/
    if ( !v4 ) /*0x29faf6*/
      goto LABEL_190; /*0x29faf6*/
LABEL_188:
    rand(); /*0x29faf8*/
    goto LABEL_189; /*0x29faf8*/
  }
  if ( (int)v1 > 997 ) /*0x29ea0b*/
  {
    if ( (int)v1 <= 1330 ) /*0x29eb1f*/
    {
      if ( (_DWORD)v1 == 1330 ) /*0x29eb25*/
      {
        v24 = *(_QWORD **)(a1 + 1104); /*0x29ee1e*/
        *(_DWORD *)(a1 + 928) = 32; /*0x29ee25*/
        *(_BYTE *)(a1 + 976) = 1; /*0x29ee2f*/
        *(_DWORD *)(a1 + 916) = 1067030938; /*0x29ee36*/
        *(_DWORD *)(a1 + 920) = 1067030938; /*0x29ee40*/
        *(_DWORD *)(a1 + 1056) = 12; /*0x29ee4a*/
        *(_DWORD *)(a1 + 1124) = 3; /*0x29ee54*/
        if ( v24 ) /*0x29ee61*/
          *v24 = 0; /*0x29ee65*/
        if ( !*(_BYTE *)(a1 + 653) ) /*0x29ee68*/
        {
          v25 = GameObject_createAndAddParticle(a1, *(_DWORD *)(a1 + 928), (int)"ringEffect.plist", 4, 2); /*0x29ee93*/
          v26 = (__int64 *)v25; /*0x29ee98*/
          if ( v25 ) /*0x29ee9e*/
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 1528LL))(v25, 2); /*0x29eeb2*/
            v27 = *v26; /*0x29eeb5*/
            si128 = _mm_load_si128((const __m128i *)&xmmword_8315D0); /*0x29eec5*/
            (*(void (__fastcall **)(__int64 *, __m128i *))(v27 + 1352))(v26, &si128); /*0x29eed4*/
            v28 = *v26; /*0x29eee4*/
            si128 = _mm_load_si128((const __m128i *)&xmmword_831310); /*0x29eeea*/
            (*(void (__fastcall **)(__int64 *, __m128i *))(v28 + 1384))(v26, &si128); /*0x29eeef*/
          }
        }
        if ( *(_BYTE *)(a1 + 1404) ) /*0x29eef5*/
          goto LABEL_190; /*0x29eefc*/
        v20 = *(float *)(a1 + 1408); /*0x29ef02*/
        *(_DWORD *)(a1 + 1412) = 1132920832; /*0x29ef10*/
        v21 = 270.0; /*0x29ef1a*/
        if ( v20 == 0.0 ) /*0x29ef24*/
        {
          v29 = rand(); /*0x29ef26*/
          v23 = -1; /*0x29ef2c*/
          if ( (float)((float)v29 / 32767.0) > 0.5 ) /*0x29ef4c*/
            v23 = 1; /*0x29ef4c*/
        }
        else
        {
LABEL_60:
          v21 = v20; /*0x29ef51*/
          v23 = 1; /*0x29ef54*/
        }
      }
      else
      {
        switch ( (int)v1 ) /*0x29eb4f*/
        {
          case 998: /*0x29eb4f*/
          case 999: /*0x29eb4f*/
          case 1000: /*0x29eb4f*/
            goto LABEL_29;
          case 1019: /*0x29eb4f*/
          case 1020: /*0x29eb4f*/
          case 1021: /*0x29eb4f*/
            v11 = *(_DWORD **)(a1 + 1104); /*0x29ec05*/
            if ( v11 ) /*0x29ec0f*/
            {
              v11[1] = 1005; /*0x29ec13*/
              *v11 = 0; /*0x29ec1a*/
            }
            v4 = *(_BYTE *)(a1 + 1404) == 0; /*0x29ec1c*/
            v12 = *(float *)(a1 + 768) + *(float *)(a1 + 768); /*0x29ec2b*/
            *(_DWORD *)(a1 + 928) = 7; /*0x29ec2f*/
            *(_DWORD *)(a1 + 1056) = 9; /*0x29ec39*/
            *(_DWORD *)(a1 + 1124) = 3; /*0x29ec43*/
            *(_BYTE *)(a1 + 1220) = 1; /*0x29ec4d*/
            *(float *)(a1 + 764) = v12; /*0x29ec54*/
            *(float *)(a1 + 768) = v12; /*0x29ec5c*/
            if ( !v4 ) /*0x29ec64*/
              goto LABEL_190; /*0x29ec64*/
            byte_9037DD = byte_9037DD == 0; /*0x29ec71*/
            rand(); /*0x29ec78*/
            goto LABEL_189; /*0x29ec9d*/
          case 1022: /*0x29eb4f*/
            v15 = *(_QWORD **)(a1 + 1104); /*0x29ece0*/
            *(_DWORD *)(a1 + 928) = 29; /*0x29ece7*/
            *(_BYTE *)(a1 + 976) = 1; /*0x29ecf1*/
            *(_DWORD *)(a1 + 916) = 1067030938; /*0x29ecf8*/
            *(_DWORD *)(a1 + 920) = 1067030938; /*0x29ed02*/
            *(_DWORD *)(a1 + 1056) = 12; /*0x29ed0c*/
            *(_DWORD *)(a1 + 1124) = 3; /*0x29ed16*/
            if ( v15 ) /*0x29ed23*/
              *v15 = 0; /*0x29ed27*/
            if ( !*(_BYTE *)(a1 + 653) ) /*0x29ed2a*/
            {
              v16 = GameObject_createAndAddParticle(a1, *(_DWORD *)(a1 + 928), (int)"ringEffect.plist", 4, 2); /*0x29ed55*/
              v17 = (__int64 *)v16; /*0x29ed5a*/
              if ( v16 ) /*0x29ed60*/
              {
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 1528LL))(v16, 2); /*0x29ed74*/
                v18 = *v17; /*0x29ed77*/
                si128 = _mm_load_si128((const __m128i *)&xmmword_831430); /*0x29ed87*/
                (*(void (__fastcall **)(__int64 *, __m128i *))(v18 + 1352))(v17, &si128); /*0x29ed96*/
                v19 = *v17; /*0x29eda6*/
                si128 = _mm_load_si128((const __m128i *)&xmmword_8313C0); /*0x29edac*/
                (*(void (__fastcall **)(__int64 *, __m128i *))(v19 + 1384))(v17, &si128); /*0x29edb1*/
              }
            }
            if ( *(_BYTE *)(a1 + 1404) ) /*0x29edb7*/
              goto LABEL_190; /*0x29edbe*/
            v20 = *(float *)(a1 + 1408); /*0x29edc4*/
            *(_DWORD *)(a1 + 1412) = 1132920832; /*0x29edd2*/
            v21 = 270.0; /*0x29eddc*/
            if ( v20 != 0.0 ) /*0x29edea*/
              goto LABEL_60; /*0x29edea*/
            v22 = rand(); /*0x29edf0*/
            v23 = -1; /*0x29edf6*/
            if ( (float)((float)v22 / 32767.0) > 0.5 ) /*0x29ee16*/
              v23 = 1; /*0x29ee16*/
            break; /*0x29ee16*/
          case 1050: /*0x29eb4f*/
          case 1051: /*0x29eb4f*/
          case 1052: /*0x29eb4f*/
            v9 = *(_DWORD **)(a1 + 1104); /*0x29eb51*/
            if ( !v9 ) /*0x29eb5b*/
              goto LABEL_173; /*0x29eb5b*/
            v9[1] = 1007; /*0x29eb61*/
            goto LABEL_172; /*0x29eb68*/
          case 1053: /*0x29eb4f*/
          case 1054: /*0x29eb4f*/
            goto LABEL_170;
          case 1055: /*0x29eb4f*/
          case 1056: /*0x29eb4f*/
          case 1057: /*0x29eb4f*/
            v14 = *(_DWORD **)(a1 + 1104); /*0x29eca2*/
            if ( v14 ) /*0x29ecac*/
            {
              v14[1] = 1007; /*0x29ecb0*/
              *v14 = 0; /*0x29ecb7*/
            }
            *(_BYTE *)(a1 + 976) = 1; /*0x29ecb9*/
            *(_DWORD *)(a1 + 1064) = 1061997773; /*0x29ecc0*/
            *(_DWORD *)(a1 + 1068) = 1067030938; /*0x29ecca*/
            *(_BYTE *)(a1 + 1062) = 1; /*0x29ecd4*/
            goto LABEL_187; /*0x29ecdb*/
          case 1058: /*0x29eb4f*/
          case 1059: /*0x29eb4f*/
          case 1060: /*0x29eb4f*/
          case 1061: /*0x29eb4f*/
            goto LABEL_185;
          default:
            return GameObject_customSetup((__int64 *)a1);
        }
      }
      *(_BYTE *)(a1 + 1403) = 1; /*0x29ef60*/
      *(float *)(a1 + 1416) = (float)v23 * v21; /*0x29ef6b*/
      return GameObject_customSetup((__int64 *)a1); /*0x29ef73*/
    }
    switch ( (int)v1 ) /*0x29ef9d*/
    {
      case 1516: /*0x29ef9d*/
        v33 = *(_DWORD **)(a1 + 1104); /*0x29f039*/
        if ( v33 ) /*0x29f043*/
        {
          v33[1] = 1; /*0x29f047*/
          *v33 = 0; /*0x29f04e*/
        }
        *(_DWORD *)(a1 + 928) = 7; /*0x29f050*/
        *(_DWORD *)(a1 + 1056) = 9; /*0x29f05a*/
        *(_DWORD *)(a1 + 1124) = 3; /*0x29f064*/
        *(_BYTE *)(a1 + 1402) = 1; /*0x29f06e*/
        *(_BYTE *)(a1 + 1061) = 1; /*0x29f075*/
        return GameObject_customSetup((__int64 *)a1); /*0x29f07c*/
      case 1518: /*0x29ef9d*/
      case 1519: /*0x29ef9d*/
        goto LABEL_174;
      case 1521: /*0x29ef9d*/
      case 1522: /*0x29ef9d*/
      case 1523: /*0x29ef9d*/
      case 1524: /*0x29ef9d*/
      case 1525: /*0x29ef9d*/
      case 1526: /*0x29ef9d*/
      case 1527: /*0x29ef9d*/
      case 1528: /*0x29ef9d*/
        goto LABEL_91;
      case 1582: /*0x29ef9d*/
        v40 = *(_DWORD **)(a1 + 1104); /*0x29f2f0*/
        if ( v40 ) /*0x29f2ff*/
        {
          v40[1] = 1; /*0x29f303*/
          *v40 = 0; /*0x29f306*/
        }
        v4 = *(_BYTE *)(a1 + 1404) == 0; /*0x29f308*/
        *(_DWORD *)(a1 + 928) = 2; /*0x29f30f*/
        *(_WORD *)(a1 + 1061) = 257; /*0x29f319*/
        *(_DWORD *)(a1 + 908) = 1082130432; /*0x29f322*/
        *(_DWORD *)(a1 + 1056) = 9; /*0x29f32c*/
        *(_DWORD *)(a1 + 1124) = 3; /*0x29f336*/
        *(_BYTE *)(a1 + 976) = 1; /*0x29f340*/
        *(_DWORD *)(a1 + 1064) = 1063675494; /*0x29f347*/
        *(_DWORD *)(a1 + 1068) = 1067030938; /*0x29f351*/
        if ( !v4 ) /*0x29f35b*/
          goto LABEL_190; /*0x29f35b*/
        goto LABEL_90; /*0x29f35b*/
      case 1583: /*0x29ef9d*/
        v37 = *(_DWORD **)(a1 + 1104); /*0x29f167*/
        if ( v37 ) /*0x29f176*/
        {
          v37[1] = 1; /*0x29f17a*/
          *v37 = 0; /*0x29f17d*/
        }
        *(_DWORD *)(a1 + 928) = 2; /*0x29f17f*/
        *(_WORD *)(a1 + 1061) = 257; /*0x29f189*/
        *(_DWORD *)(a1 + 908) = 1082130432; /*0x29f192*/
        *(_DWORD *)(a1 + 1056) = 9; /*0x29f19c*/
        *(_DWORD *)(a1 + 1124) = 3; /*0x29f1a6*/
        *(_BYTE *)(a1 + 976) = 1; /*0x29f1b0*/
        *(_DWORD *)(a1 + 1064) = 1063675494; /*0x29f1b7*/
        *(_DWORD *)(a1 + 1068) = 1066192077; /*0x29f1c1*/
        *(_BYTE *)(a1 + 1402) = 1; /*0x29f1cb*/
        *(_BYTE *)(a1 + 1296) = 1; /*0x29f1d2*/
        v38 = rand(); /*0x29f1d9*/
        *(_BYTE *)(a1 + 1424) = 1; /*0x29f1e7*/
        *(float *)(a1 + 1388) = (float)((float)((float)v38 / 32767.0) * 0.40000001) + 0.80000001; /*0x29f209*/
        if ( (float)((float)rand() / 32767.0) <= 0.69999999 ) /*0x29f229*/
        {
          *(float *)(a1 + 1368) = (float)((float)rand() / 32767.0) * 0.5; /*0x29f257*/
        }
        else
        {
          *(_BYTE *)(a1 + 1384) = 1; /*0x29f22b*/
          *(_DWORD *)(a1 + 1372) = -1082130432; /*0x29f232*/
        }
        if ( !*(_BYTE *)(a1 + 653) ) /*0x29f25f*/
        {
          if ( !*(_BYTE *)(a1 + 1052) ) /*0x29f26c*/
            GameObject_createAndAddParticle(a1, *(_DWORD *)(a1 + 928), (int)"fireballEffect.plist", -2, 1); /*0x29f28f*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&si128, 0.0, 0.0); /*0x29f29f*/
          cocos2d::CCPoint::operator=(a1 + 820, v39); /*0x29f2af*/
          *(_BYTE *)(a1 + 817) = 1; /*0x29f2b5*/
          *(_BYTE *)(a1 + 1072) = 1; /*0x29f2bc*/
        }
        return GameObject_customSetup((__int64 *)a1); /*0x29f2c3*/
      case 1591: /*0x29ef9d*/
      case 1593: /*0x29ef9d*/
        v34 = *(_DWORD **)(a1 + 1104); /*0x29f081*/
        if ( v34 ) /*0x29f090*/
        {
          v34[1] = 1; /*0x29f094*/
          *v34 = 0; /*0x29f097*/
        }
        *(_DWORD *)(a1 + 928) = 7; /*0x29f099*/
        *(_BYTE *)(a1 + 1061) = 1; /*0x29f0a3*/
        *(_DWORD *)(a1 + 1056) = 9; /*0x29f0aa*/
        *(_DWORD *)(a1 + 1124) = 3; /*0x29f0b4*/
        *(_BYTE *)(a1 + 1402) = 1; /*0x29f0be*/
        v35 = rand(); /*0x29f0c5*/
        *(_BYTE *)(a1 + 1424) = 1; /*0x29f0cb*/
        *(_DWORD *)(a1 + 1444) = 1; /*0x29f0d2*/
        goto LABEL_73; /*0x29f0d2*/
      case 1592: /*0x29ef9d*/
        goto LABEL_170;
      case 1614: /*0x29ef9d*/
        GameObject_commonInteractiveSetup(a1); /*0x29f2cb*/
        *(_DWORD *)(a1 + 764) = 1103626240; /*0x29f2d0*/
        *(_DWORD *)(a1 + 768) = 1101004800; /*0x29f2da*/
        *(_BYTE *)(a1 + 1402) = 1; /*0x29f2e4*/
        return GameObject_customSetup((__int64 *)a1); /*0x29f2eb*/
      case 1618: /*0x29ef9d*/
        v36 = *(_DWORD **)(a1 + 1104); /*0x29f119*/
        if ( v36 ) /*0x29f123*/
        {
          v36[1] = 1011; /*0x29f127*/
          *v36 = 0; /*0x29f12e*/
        }
        *(_DWORD *)(a1 + 928) = 7; /*0x29f130*/
        *(_DWORD *)(a1 + 1056) = 9; /*0x29f13a*/
        *(_DWORD *)(a1 + 1124) = 3; /*0x29f144*/
        *(_BYTE *)(a1 + 1402) = 1; /*0x29f14e*/
        v35 = rand(); /*0x29f155*/
        *(_BYTE *)(a1 + 1424) = 1; /*0x29f15b*/
LABEL_73:
        *(float *)(a1 + 1368) = (float)((float)v35 / 32767.0) * 0.5; /*0x29f0d8*/
        v32 = (float)((float)rand() / 32767.0) * 0.40000001; /*0x29f10c*/
        goto LABEL_66; /*0x29f114*/
      case 1619: /*0x29ef9d*/
      case 1620: /*0x29ef9d*/
LABEL_137:
        *(_DWORD *)(a1 + 928) = 2; /*0x29f721*/
        v54 = 0; /*0x29f72e*/
        *(_DWORD *)(a1 + 1056) = 1; /*0x29f730*/
        *(_BYTE *)(a1 + 1403) = 1; /*0x29f73a*/
        if ( (_DWORD)v1 == 678 || (_DWORD)v1 == 679 || (_DWORD)v1 == 680 ) /*0x29f754*/
        {
          *(_DWORD *)(a1 + 1056) = 0; /*0x29f77d*/
        }
        else
        {
          *(_BYTE *)(a1 + 1081) = 1; /*0x29f765*/
          if ( (unsigned int)(v1 - 1619) < 2 ) /*0x29f75d*/
            *(_BYTE *)(a1 + 1061) = 0; /*0x29f775*/
        }
        if ( !*(_BYTE *)(a1 + 1404) ) /*0x29f783*/
        {
          v55 = (unsigned int)(v1 - 186); /*0x29f793*/
          if ( (_DWORD)v55 ) /*0x29f799*/
          {
            v55 = (unsigned int)(v55 - 1433); /*0x29f79b*/
            if ( (_DWORD)v55 ) /*0x29f7a1*/
            {
              if ( (_DWORD)v55 == 1 ) /*0x29f7a6*/
                v54 = -1; /*0x29f7b0*/
            }
            else
            {
              v54 = -1; /*0x29f7bf*/
            }
          }
          EnhancedGameObject_createRotateAction(a1, v55, v54); /*0x29f7d4*/
        }
        v56 = *(_DWORD *)(a1 + 1036); /*0x29f7d9*/
        if ( v56 > 678 ) /*0x29f7e5*/
        {
          v60 = v56 - 679; /*0x29f884*/
          if ( !v60 ) /*0x29f88a*/
            goto LABEL_156; /*0x29f88a*/
          v61 = v60 - 940; /*0x29f890*/
          if ( !v61 ) /*0x29f896*/
          {
            *(_DWORD *)(a1 + 908) = 1103626240; /*0x29f8d7*/
            return GameObject_customSetup((__int64 *)a1); /*0x29f8df*/
          }
          if ( v61 == 1 ) /*0x29f89b*/
          {
            *(_DWORD *)(a1 + 908) = 1097859072; /*0x29f8c2*/
            return GameObject_customSetup((__int64 *)a1); /*0x29f8ca*/
          }
        }
        else
        {
          if ( v56 == 678 ) /*0x29f7eb*/
          {
            *(float *)(a1 + 908) = *(float *)(a1 + 764) * 0.38; /*0x29f867*/
            *(_DWORD *)(a1 + 908) = 1106457395; /*0x29f877*/
            return GameObject_customSetup((__int64 *)a1); /*0x29f87f*/
          }
          v57 = v56 - 183; /*0x29f7ed*/
          if ( !v57 ) /*0x29f7f3*/
            goto LABEL_156; /*0x29f7f3*/
          v58 = v57 - 1; /*0x29f7f5*/
          if ( !v58 ) /*0x29f7f8*/
          {
            *(float *)(a1 + 908) = *(float *)(a1 + 764) * 0.34; /*0x29f84a*/
            return GameObject_customSetup((__int64 *)a1); /*0x29f852*/
          }
          v59 = v58 - 2; /*0x29f7fa*/
          if ( !v59 ) /*0x29f7fd*/
          {
            *(_DWORD *)(a1 + 908) = 1107374899; /*0x29f82d*/
            return GameObject_customSetup((__int64 *)a1); /*0x29f835*/
          }
          if ( v59 == 1 ) /*0x29f802*/
          {
LABEL_156:
            *(float *)(a1 + 908) = *(float *)(a1 + 764) * 0.36000001; /*0x29f808*/
            return GameObject_customSetup((__int64 *)a1); /*0x29f820*/
          }
        }
        *(float *)(a1 + 908) = *(float *)(a1 + 764) * 0.30000001; /*0x29f8ad*/
        return GameObject_customSetup((__int64 *)a1); /*0x29f8b5*/
      case 1697: /*0x29ef9d*/
      case 1698: /*0x29ef9d*/
      case 1699: /*0x29ef9d*/
        v30 = *(_DWORD **)(a1 + 1104); /*0x29ef9f*/
        if ( v30 ) /*0x29efa9*/
        {
          v30[1] = 1006; /*0x29efad*/
          *v30 = 0; /*0x29efb4*/
        }
        *(_DWORD *)(a1 + 928) = 7; /*0x29efb6*/
        *(_DWORD *)(a1 + 1056) = 9; /*0x29efc0*/
        *(_DWORD *)(a1 + 1124) = 3; /*0x29efca*/
        *(_BYTE *)(a1 + 1402) = 1; /*0x29efd4*/
        v31 = rand(); /*0x29efdb*/
        *(_BYTE *)(a1 + 1424) = 1; /*0x29efe1*/
        *(float *)(a1 + 1368) = (float)((float)v31 / 32767.0) * 0.5; /*0x29efff*/
        v32 = (float)((float)rand() / 32767.0) * 0.5; /*0x29f01c*/
LABEL_66:
        *(float *)(a1 + 1388) = v32 + 0.80000001; /*0x29f024*/
        return GameObject_customSetup((__int64 *)a1); /*0x29f034*/
      case 1705: /*0x29ef9d*/
      case 1706: /*0x29ef9d*/
      case 1707: /*0x29ef9d*/
      case 1708: /*0x29ef9d*/
      case 1709: /*0x29ef9d*/
      case 1710: /*0x29ef9d*/
      case 1734: /*0x29ef9d*/
      case 1735: /*0x29ef9d*/
      case 1736: /*0x29ef9d*/
        goto LABEL_114;
      case 1752: /*0x29ef9d*/
        v49 = *(_DWORD **)(a1 + 1104); /*0x29f515*/
        if ( v49 ) /*0x29f51f*/
        {
          v49[1] = 1007; /*0x29f523*/
          *v49 = 0; /*0x29f52a*/
        }
        v4 = *(_BYTE *)(a1 + 1404) == 0; /*0x29f52c*/
        *(_DWORD *)(a1 + 928) = 7; /*0x29f533*/
        *(_DWORD *)(a1 + 1056) = 9; /*0x29f53d*/
        *(_DWORD *)(a1 + 1124) = 3; /*0x29f547*/
        if ( !v4 ) /*0x29f551*/
          goto LABEL_190; /*0x29f551*/
LABEL_90:
        rand(); /*0x29f361*/
        EnhancedGameObject_createRotateAction(a1, v41, 1); /*0x29f394*/
        *(_BYTE *)(a1 + 1403) = 1; /*0x29f399*/
        return GameObject_customSetup((__int64 *)a1); /*0x29f3a0*/
      default:
        return GameObject_customSetup((__int64 *)a1);
    }
  }
  if ( (_DWORD)v1 == 997 ) /*0x29ea11*/
  {
LABEL_29:
    v10 = *(_DWORD **)(a1 + 1104); /*0x29eb6d*/
    if ( v10 ) /*0x29eb77*/
    {
      v10[1] = 1005; /*0x29eb7b*/
      *v10 = 0; /*0x29eb82*/
    }
    *(_DWORD *)(a1 + 928) = 7; /*0x29eb92*/
    *(_DWORD *)(a1 + 1056) = 9; /*0x29eb9c*/
    *(_DWORD *)(a1 + 1124) = 3; /*0x29eba6*/
    if ( *(_BYTE *)(a1 + 1404) ) /*0x29ebca*/
      goto LABEL_190; /*0x29ebd1*/
    goto LABEL_188; /*0x29ebd1*/
  }
  if ( (int)v1 <= 675 ) /*0x29ea1d*/
  {
    if ( (_DWORD)v1 != 675 ) /*0x29ea1f*/
    {
      switch ( (int)v1 ) /*0x29ea48*/
      {
        case 376: /*0x29ea48*/
        case 377: /*0x29ea48*/
        case 378: /*0x29ea48*/
          goto LABEL_91;
        case 394: /*0x29ea48*/
        case 395: /*0x29ea48*/
        case 396: /*0x29ea48*/
          goto LABEL_29;
        case 397: /*0x29ea48*/
        case 398: /*0x29ea48*/
        case 399: /*0x29ea48*/
          goto LABEL_114;
        default:
          return GameObject_customSetup((__int64 *)a1);
      }
      return GameObject_customSetup((__int64 *)a1);
    }
LABEL_114:
    v50 = *(float *)(a1 + 764); /*0x29f596*/
    *(_DWORD *)(a1 + 928) = 2; /*0x29f5b1*/
    *(float *)(a1 + 908) = v50 * 0.30000001; /*0x29f5bb*/
    if ( (int)v1 > 1705 ) /*0x29f5c9*/
    {
      v1 = (unsigned int)(v1 - 1706); /*0x29f69e*/
      switch ( (int)v1 ) /*0x29f6be*/
      {
        case 0: /*0x29f6be*/
          goto LABEL_132;
        case 2: /*0x29f6be*/
          goto LABEL_121;
        case 3: /*0x29f6be*/
        case 30: /*0x29f6be*/
          goto LABEL_125;
        case 28: /*0x29f6be*/
          goto LABEL_133;
        case 29: /*0x29f6be*/
          goto LABEL_134;
        default:
          goto LABEL_127;
      }
      goto LABEL_127;
    }
    if ( (_DWORD)v1 == 1705 ) /*0x29f5cf*/
      goto LABEL_130; /*0x29f5cf*/
    if ( (int)v1 > 398 ) /*0x29f5db*/
    {
      v1 = (unsigned int)(v1 - 675); /*0x29f60d*/
      if ( !(_DWORD)v1 ) /*0x29f613*/
      {
LABEL_133:
        *(_DWORD *)(a1 + 908) = 1107296256; /*0x29f6cd*/
        goto LABEL_127; /*0x29f6df*/
      }
      v1 = (unsigned int)(v1 - 1); /*0x29f619*/
      if ( !(_DWORD)v1 ) /*0x29f61c*/
      {
LABEL_134:
        *(float *)(a1 + 908) = v50 * 0.34; /*0x29f6e4*/
        goto LABEL_127; /*0x29f6fc*/
      }
      if ( (_DWORD)v1 != 1 ) /*0x29f625*/
      {
LABEL_127:
        if ( !*(_BYTE *)(a1 + 1404) ) /*0x29f637*/
          EnhancedGameObject_createRotateAction(a1, v1, 0); /*0x29f649*/
        v52 = *(_DWORD *)(a1 + 1036); /*0x29f64e*/
        *(_BYTE *)(a1 + 1403) = 1; /*0x29f659*/
        *(_WORD *)(a1 + 1081) = 257; /*0x29f660*/
        *(_DWORD *)(a1 + 1056) = 1; /*0x29f669*/
        switch ( v52 ) /*0x29f688*/
        {
          case 1705: /*0x29f688*/
          case 1706: /*0x29f688*/
          case 1707: /*0x29f688*/
          case 1708: /*0x29f688*/
          case 1709: /*0x29f688*/
          case 1710: /*0x29f688*/
            v53 = *(_DWORD **)(a1 + 1104); /*0x29f701*/
            if ( v53 ) /*0x29f70b*/
            {
              v53[1] = 1010; /*0x29f713*/
              *v53 = 0; /*0x29f71a*/
            }
            break; /*0x29f71c*/
          default:
            return GameObject_customSetup((__int64 *)a1);
        }
        return GameObject_customSetup((__int64 *)a1);
      }
    }
    else if ( (_DWORD)v1 != 398 ) /*0x29f5dd*/
    {
      v1 = (unsigned int)(v1 - 88); /*0x29f5df*/
      if ( (_DWORD)v1 ) /*0x29f5e2*/
      {
        v1 = (unsigned int)(v1 - 1); /*0x29f5e8*/
        if ( (_DWORD)v1 ) /*0x29f5eb*/
        {
          if ( (_DWORD)v1 == 308 ) /*0x29f5f7*/
LABEL_121:
            *(_DWORD *)(a1 + 908) = 1105670963; /*0x29f5f9*/
          goto LABEL_127; /*0x29f60b*/
        }
LABEL_132:
        v51 = v50 * 0.36000001; /*0x29f6c0*/
        goto LABEL_126; /*0x29f6c8*/
      }
LABEL_130:
      *(_DWORD *)(a1 + 908) = 1107374899; /*0x29f68a*/
      goto LABEL_127; /*0x29f69c*/
    }
LABEL_125:
    v51 = v50 * 0.31999999; /*0x29f627*/
LABEL_126:
    *(float *)(a1 + 908) = v51; /*0x29f62f*/
    goto LABEL_127; /*0x29f62f*/
  }
  switch ( (int)v1 ) /*0x29ea6f*/
  {
    case 676: /*0x29ea6f*/
    case 677: /*0x29ea6f*/
      goto LABEL_114;
    case 678: /*0x29ea6f*/
    case 679: /*0x29ea6f*/
    case 680: /*0x29ea6f*/
      goto LABEL_137;
    case 740: /*0x29ea6f*/
    case 741: /*0x29ea6f*/
    case 742: /*0x29ea6f*/
      v4 = *(_BYTE *)(a1 + 1404) == 0; /*0x29ea71*/
      *(_DWORD *)(a1 + 928) = 2; /*0x29ea78*/
      *(_DWORD *)(a1 + 1056) = 1; /*0x29ea82*/
      *(_BYTE *)(a1 + 1080) = 1; /*0x29ea8c*/
      if ( v4 ) /*0x29ea93*/
        EnhancedGameObject_createRotateAction(a1, v1, 0); /*0x29eab3*/
      v5 = *(_DWORD *)(a1 + 1036); /*0x29eab8*/
      v6 = *(float *)(a1 + 764); /*0x29eabe*/
      *(_BYTE *)(a1 + 1403) = 1; /*0x29eac6*/
      v7 = v5 - 740; /*0x29eacd*/
      if ( v7 ) /*0x29ead3*/
      {
        if ( v7 == 1 ) /*0x29ead8*/
          v8 = v6 * 0.36000001; /*0x29eaef*/
        else
          v8 = v6 * 0.30000001; /*0x29eada*/
        *(float *)(a1 + 908) = v8; /*0x29eae2*/
      }
      else
      {
        *(_DWORD *)(a1 + 908) = 1107374899; /*0x29eb0c*/
      }
      break; /*0x29eaea*/
    case 920: /*0x29ea6f*/
    case 921: /*0x29ea6f*/
    case 923: /*0x29ea6f*/
    case 924: /*0x29ea6f*/
      goto LABEL_174;
    default:
      return GameObject_customSetup((__int64 *)a1);
  }
  return GameObject_customSetup((__int64 *)a1); /*0x29fd6e*/
}

// [20/26] Address: 0x2a0490
// Method: EnhancedGameObject::deactivateObject
__int64 __fastcall EnhancedGameObject_deactivateObject(__int64 *a1, __int64 a2)
{
  char v3; // cl
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax

  v3 = *((_BYTE *)a1 + 773); /*0x2a049d*/
  if ( (_BYTE)a2 ) /*0x2a04a6*/
    *((_BYTE *)a1 + 1006) = 1; /*0x2a04a8*/
  if ( *((_BYTE *)a1 + 1006) ) /*0x2a04af*/
  {
    if ( !v3 ) /*0x2a04c3*/
      return result; /*0x2a04c3*/
    v4 = *a1; /*0x2a04c9*/
    *((_BYTE *)a1 + 773) = 0; /*0x2a04d1*/
    (*(void (__fastcall **)(__int64 *, _QWORD))(v4 + 336))(a1, 0); /*0x2a04d8*/
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 520))(a1, 0); /*0x2a04e6*/
    *((_BYTE *)a1 + 1120) = 0; /*0x2a04ec*/
    if ( *((_WORD *)a1 + 508) != 0xFFFF || *((_WORD *)a1 + 509) != 0xFFFF ) /*0x2a0503*/
    {
      v6 = *a1; /*0x2a0505*/
      *((_DWORD *)a1 + 254) = -1; /*0x2a0513*/
      *((_BYTE *)a1 + 1024) = 1; /*0x2a051d*/
      (*(void (__fastcall **)(__int64 *))(v6 + 1288))(a1); /*0x2a0524*/
      result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 1296))(a1); /*0x2a0538*/
    }
    v7 = a1[94]; /*0x2a053e*/
    if ( v7 ) /*0x2a0548*/
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 520LL))(v7, 0); /*0x2a054f*/
    v8 = a1[112]; /*0x2a0555*/
    if ( v8 && !*((_BYTE *)a1 + 656) ) /*0x2a0561*/
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 520LL))(v8, 0); /*0x2a056f*/
  }
  else
  {
    *((_BYTE *)a1 + 1006) = 1; /*0x2a0577*/
    if ( !v3 ) /*0x2a0580*/
      return result; /*0x2a0580*/
  }
  if ( !*((_BYTE *)a1 + 773) && *((_BYTE *)a1 + 1433) ) /*0x2a058b*/
  {
    if ( *((_BYTE *)a1 + 1402) ) /*0x2a0594*/
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 1696))(a1, a2, 0xFFFFFFFFLL); /*0x2a05a9*/
      *((_BYTE *)a1 + 1441) = 0; /*0x2a05b1*/
      a1[172] = 0; /*0x2a05bf*/
      a1[171] = 0; /*0x2a05c6*/
      v9 = a1[40]; /*0x2a05cf*/
      *((_BYTE *)a1 + 774) = 1; /*0x2a05d2*/
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 40))(a1 + 40, 0); /*0x2a05d9*/
    }
  }
  return result; /*0x2a05dc*/
}

// [21/26] Address: 0x2a05f0
// Method: EnhancedGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall EnhancedGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 updated; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x2a0628*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x2a0635*/
  updated = UpdateAccountSettingsPopup_init(a1, v13, a3); /*0x2a0649*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, updated); /*0x2a0660*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a066f*/
  sub_3C310(v13); /*0x2a067d*/
  if ( *(_BYTE *)(a1 + 1458) ) /*0x2a0689*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0692*/
    *((_QWORD *)&v10 + 1) = 0; /*0x2a0697*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a06a6*/
    fmt::BasicWriter<char>::operator<<(v12, 99); /*0x2a06b6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x2a06bc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x2a06c1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a06d0*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1458)); /*0x2a06e2*/
  }
  if ( *(_BYTE *)(a1 + 1457) ) /*0x2a06e8*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x2a06f1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x2a06f6*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0705*/
    fmt::BasicWriter<char>::operator<<(v12, 444); /*0x2a0715*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x2a071b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x2a0720*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a072f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1457)); /*0x2a0741*/
  }
  if ( *(_BYTE *)(a1 + 1403) ) /*0x2a074a*/
  {
    if ( *(_BYTE *)(a1 + 1404) ) /*0x2a0757*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0760*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0765*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0774*/
      fmt::BasicWriter<char>::operator<<(v12, 98); /*0x2a0784*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a078a*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a078f*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a079e*/
      fmt::BasicWriter<char>::operator<<(v12, 1); /*0x2a07ae*/
    }
    else if ( *(float *)(a1 + 1408) != 0.0 ) /*0x2a07c3*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a07c5*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a07ca*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a07d9*/
      fmt::BasicWriter<char>::operator<<(v12, 97); /*0x2a07e9*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a07ef*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a07f4*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0803*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x2a0819*/
    }
  }
  if ( *(_BYTE *)(a1 + 1402) ) /*0x2a081f*/
  {
    if ( *(_BYTE *)(a1 + 1424) ) /*0x2a082c*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0835*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a083a*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0849*/
      fmt::BasicWriter<char>::operator<<(v12, 106); /*0x2a0859*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a085f*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0864*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0873*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1424)); /*0x2a0885*/
    }
    if ( *(_BYTE *)(a1 + 1433) ) /*0x2a088b*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0894*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0899*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a08a8*/
      fmt::BasicWriter<char>::operator<<(v12, 123); /*0x2a08b8*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a08be*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a08c3*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a08d2*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1433)); /*0x2a08e4*/
    }
    if ( *(_BYTE *)(a1 + 1456) ) /*0x2a08ea*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a08f3*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a08f8*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0907*/
      fmt::BasicWriter<char>::operator<<(v12, 214); /*0x2a0917*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a091d*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0922*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0931*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1456)); /*0x2a0943*/
    }
    if ( *(float *)(a1 + 1428) != 0.0 ) /*0x2a0956*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0958*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a095d*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a096c*/
      fmt::BasicWriter<char>::operator<<(v12, 107); /*0x2a097c*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0982*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0987*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0996*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x2a09ac*/
    }
    if ( *(_BYTE *)(a1 + 1432) ) /*0x2a09b2*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a09bb*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a09c0*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a09cf*/
      fmt::BasicWriter<char>::operator<<(v12, 122); /*0x2a09df*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a09e5*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a09ea*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a09f9*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1432)); /*0x2a0a0b*/
    }
    if ( *(_BYTE *)(a1 + 1434) ) /*0x2a0a11*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0a1a*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0a1f*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0a2e*/
      fmt::BasicWriter<char>::operator<<(v12, 126); /*0x2a0a3e*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0a44*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0a49*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0a58*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1434)); /*0x2a0a6a*/
    }
    if ( *(_DWORD *)(a1 + 1436) ) /*0x2a0a70*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0a79*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0a7e*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0a8d*/
      fmt::BasicWriter<char>::operator<<(v12, 462); /*0x2a0a9d*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0aa3*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0aa8*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0ab7*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1436)); /*0x2a0ac8*/
    }
    if ( *(_BYTE *)(a1 + 1440) ) /*0x2a0ace*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0ad7*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0adc*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0aeb*/
      fmt::BasicWriter<char>::operator<<(v12, 592); /*0x2a0afb*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x2a0b01*/
      *((_QWORD *)&v10 + 1) = 0; /*0x2a0b06*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2a0b15*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1440)); /*0x2a0b27*/
    }
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x2a0b32*/
  *(_OWORD *)a2 = 0; /*0x2a0b3b*/
  *(_QWORD *)(a2 + 16) = 0; /*0x2a0b3e*/
  *(_QWORD *)(a2 + 24) = 0; /*0x2a0b42*/
  v8 = -1; /*0x2a0b46*/
  do /*0x2a0b53*/
    ++v8; /*0x2a0b50*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x2a0b53*/
  sub_3C230(a2); /*0x2a0b60*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x2a0b6b*/
  return a2; /*0x2a0b74*/
}

// [22/26] Address: 0x2a0ba0
// Method: EnhancedGameObject::createRotateAction
void __fastcall EnhancedGameObject_createRotateAction(float *a1, float a2, int a3)
{
  float v4; // xmm6_4
  int v5; // eax

  v4 = a2; /*0x2a0bae*/
  if ( a2 != 0.0 ) /*0x2a0bb9*/
    a1[353] = a2; /*0x2a0bbb*/
  if ( a1[352] == 0.0 ) /*0x2a0bd0*/
  {
    if ( !a3 ) /*0x2a0bd5*/
    {
      v5 = rand(); /*0x2a0bd7*/
      a3 = -1; /*0x2a0bdd*/
      if ( (float)((float)v5 / 32767.0) > 0.5 ) /*0x2a0bfe*/
        a3 = 1; /*0x2a0bfe*/
    }
  }
  else
  {
    v4 = a1[352]; /*0x2a0c04*/
    a3 = 1; /*0x2a0c07*/
  }
  a1[354] = (float)a3 * v4; /*0x2a0c1e*/
}

// [23/26] Address: 0x2a0c30
// Method: EnhancedGameObject::updateRotateAction
void __fastcall EnhancedGameObject_updateRotateAction(__int64 a1, float a2)
{
  __int64 v3; // rax
  unsigned int *v4; // rsi
  __int64 v5; // rax
  __int64 **v6; // rsi
  __int64 **i; // rbp
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rax
  __int64 **v14; // rsi
  __int64 **j; // rbp
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int *v20; // rsi
  __int64 v21; // rax
  __int64 **v22; // rsi
  __int64 **k; // rbp
  __int64 *v24; // rdi
  __int64 v25; // rbx

  if ( !*(_BYTE *)(a1 + 1404) ) /*0x2a0c36*/
  {
    *(float *)(a1 + 1420) = a2 + *(float *)(a1 + 1420); /*0x2a0c6a*/
    v3 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 480LL))(); /*0x2a0c7d*/
    if ( v3 ) /*0x2a0c86*/
    {
      v4 = *(unsigned int **)(v3 + 56); /*0x2a0c88*/
      v5 = *v4; /*0x2a0c8c*/
      if ( (_DWORD)v5 ) /*0x2a0c90*/
      {
        v6 = (__int64 **)*((_QWORD *)v4 + 2); /*0x2a0c92*/
        for ( i = &v6[v5 - 1]; v6 <= i; ++v6 ) /*0x2a0ca1*/
        {
          v8 = *v6; /*0x2a0ca3*/
          if ( !*v6 ) /*0x2a0ca3*/
            break; /*0x2a0ca9*/
          v9 = *v8; /*0x2a0cab*/
          (*(void (__fastcall **)(__int64 *))(*v8 + 56))(*v6); /*0x2a0cb1*/
          (*(void (__fastcall **)(__int64 *))(v9 + 352))(v8); /*0x2a0cc2*/
        }
      }
    }
    v10 = *(_QWORD *)(a1 + 896); /*0x2a0cd9*/
    if ( !*(_BYTE *)(a1 + 874) ) /*0x2a0cd1*/
    {
      if ( v10 ) /*0x2a0ce5*/
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 480LL))(v10); /*0x2a0cea*/
        if ( v11 ) /*0x2a0cf3*/
        {
          v12 = *(unsigned int **)(v11 + 56); /*0x2a0cf5*/
          v13 = *v12; /*0x2a0cf9*/
          if ( (_DWORD)v13 ) /*0x2a0cfd*/
          {
            v14 = (__int64 **)*((_QWORD *)v12 + 2); /*0x2a0cff*/
            for ( j = &v14[v13 - 1]; v14 <= j; ++v14 ) /*0x2a0d0e*/
            {
              v16 = *v14; /*0x2a0d10*/
              if ( !*v14 ) /*0x2a0d10*/
                break; /*0x2a0d16*/
              v17 = *v16; /*0x2a0d18*/
              (*(void (__fastcall **)(__int64 *))(*v16 + 56))(*v14); /*0x2a0d1e*/
              (*(void (__fastcall **)(__int64 *))(v17 + 352))(v16); /*0x2a0d2f*/
            }
          }
        }
      }
    }
    v18 = *(_QWORD *)(a1 + 752); /*0x2a0d3e*/
    if ( v18 ) /*0x2a0d48*/
    {
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 480LL))(v18); /*0x2a0d4d*/
      if ( v19 ) /*0x2a0d56*/
      {
        v20 = *(unsigned int **)(v19 + 56); /*0x2a0d58*/
        v21 = *v20; /*0x2a0d5c*/
        if ( (_DWORD)v21 ) /*0x2a0d60*/
        {
          v22 = (__int64 **)*((_QWORD *)v20 + 2); /*0x2a0d62*/
          for ( k = &v22[v21 - 1]; v22 <= k; ++v22 ) /*0x2a0d71*/
          {
            v24 = *v22; /*0x2a0d73*/
            if ( !*v22 ) /*0x2a0d73*/
              break; /*0x2a0d79*/
            v25 = *v24; /*0x2a0d7b*/
            (*(void (__fastcall **)(__int64 *))(*v24 + 56))(*v22); /*0x2a0d81*/
            (*(void (__fastcall **)(__int64 *))(v25 + 352))(v24); /*0x2a0d92*/
          }
        }
      }
    }
  }
}

// [25/26] Address: 0x2a39e0
// Method: EnhancedGameObject::updateAnimateOnTrigger
// Hidden C++ exception states: #wind=1
void __fastcall EnhancedGameObject_updateAnimateOnTrigger(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 1402) && *(_BYTE *)(a1 + 1433) ) /*0x2a39f6*/
  {
    v3 = a1 + 320; /*0x2a3a03*/
    if ( (_BYTE)a2 ) /*0x2a3a0c*/
    {
      *(_BYTE *)(a1 + 774) = 0; /*0x2a3a39*/
      LOBYTE(a2) = -1; /*0x2a3a43*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, a2); /*0x2a3a45*/
      *(_DWORD *)(a1 + 1448) = -1; /*0x2a3a48*/
      *(_BYTE *)(a1 + 1433) = 0; /*0x2a3a52*/
      v4 = qword_905FD0; /*0x2a3a59*/
      if ( !qword_905FD0 ) /*0x2a3a63*/
      {
        v8 = operator new(0x6E8u); /*0x2a3a6f*/
        qword_905FD0 = sub_2723A0(v8); /*0x2a3a7d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2a3a8e*/
        v4 = qword_905FD0; /*0x2a3a90*/
      }
      v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v4 + 416), *(int *)(a1 + 1036)); /*0x2a3aa5*/
      if ( v5 ) /*0x2a3aae*/
        v7 = *((unsigned int *)v5 + 14); /*0x2a3ab0*/
      else
        v7 = 1; /*0x2a3ab6*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1696LL))(a1, v6, v7); /*0x2a3ac5*/
      *(_BYTE *)(a1 + 1433) = 1; /*0x2a3acb*/
    }
    else
    {
      *(_BYTE *)(a1 + 1441) = 0; /*0x2a3a0e*/
      *(_QWORD *)(a1 + 1376) = 0; /*0x2a3a16*/
      *(_QWORD *)(a1 + 1368) = 0; /*0x2a3a1d*/
      *(_BYTE *)(a1 + 774) = 1; /*0x2a3a24*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, 0); /*0x2a3a35*/
    }
  }
}

// [26/26] Address: 0x2a3ae0
// Method: EnhancedGameObject::setupAnimationVariables
// Hidden C++ exception states: #wind=2
struct cocos2d::CCObject *__fastcall EnhancedGameObject_setupAnimationVariables(__int64 a1)
{
  struct cocos2d::CCObject *result; // rax
  __int64 v3; // rcx
  struct cocos2d::CCObject *v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  bool v15; // zf
  int v16; // ecx
  int v17; // ecx
  struct cocos2d::CCObject *v18; // kr08_8
  int v19; // ecx
  struct cocos2d::CCObject *v20; // kr18_8
  int v21; // ecx
  int v22; // ecx
  void *v23; // [rsp+30h] [rbp+8h]
  void *v24; // [rsp+30h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 1036) != 2065 ) /*0x2a3af3*/
  {
    v3 = qword_905FD0; /*0x2a3af9*/
    if ( !qword_905FD0 ) /*0x2a3b03*/
    {
      v23 = operator new(0x6E8u); /*0x2a3b0f*/
      qword_905FD0 = sub_2723A0(v23); /*0x2a3b1d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2a3b2e*/
      v3 = qword_905FD0; /*0x2a3b30*/
    }
    v4 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v3 + 408), *(int *)(a1 + 1036)); /*0x2a3b45*/
    if ( v4 ) /*0x2a3b4e*/
      v5 = *((_DWORD *)v4 + 14); /*0x2a3b50*/
    else
      LOWORD(v5) = 1; /*0x2a3b55*/
    *(_WORD *)(a1 + 1400) = v5; /*0x2a3b5a*/
    v6 = qword_905FD0; /*0x2a3b61*/
    if ( !qword_905FD0 ) /*0x2a3b6b*/
    {
      v24 = operator new(0x6E8u); /*0x2a3b77*/
      qword_905FD0 = sub_2723A0(v24); /*0x2a3b85*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2a3b96*/
      v6 = qword_905FD0; /*0x2a3b98*/
    }
    result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v6 + 400), *(int *)(a1 + 1036)); /*0x2a3bad*/
    if ( result ) /*0x2a3bb6*/
      v7 = *((_DWORD *)result + 14); /*0x2a3bb8*/
    else
      v7 = 1065353216; /*0x2a3bbf*/
    *(_DWORD *)(a1 + 1396) = v7; /*0x2a3bc7*/
  }
  v8 = *(float *)(a1 + 1388); /*0x2a3bcf*/
  if ( *(_BYTE *)(a1 + 1432) ) /*0x2a3bd7*/
  {
    v9 = *(float *)(a1 + 1428); /*0x2a3be0*/
    if ( v9 != 0.0 ) /*0x2a3bf0*/
      v8 = fabs(v9); /*0x2a3bf5*/
  }
  *(float *)(a1 + 1396) = *(float *)(a1 + 1396) / v8; /*0x2a3c08*/
  v10 = *(_DWORD *)(a1 + 1036); /*0x2a3c10*/
  if ( v10 > 1851 ) /*0x2a3c1c*/
  {
    if ( v10 > 2867 ) /*0x2a3ca0*/
    {
      v19 = v10 - 2868; /*0x2a3cd0*/
      v20 = result; /*0x2a3cdf*/
      result = (struct cocos2d::CCObject *)v19; /*0x2a3cdf*/
      switch ( v19 ) /*0x2a3cfb*/
      {
        case 0: /*0x2a3cfb*/
        case 1: /*0x2a3cfb*/
        case 2: /*0x2a3cfb*/
        case 3: /*0x2a3cfb*/
        case 4: /*0x2a3cfb*/
        case 7: /*0x2a3cfb*/
        case 8: /*0x2a3cfb*/
        case 9: /*0x2a3cfb*/
        case 10: /*0x2a3cfb*/
        case 12: /*0x2a3cfb*/
        case 14: /*0x2a3cfb*/
        case 15: /*0x2a3cfb*/
        case 17: /*0x2a3cfb*/
        case 18: /*0x2a3cfb*/
        case 19: /*0x2a3cfb*/
          goto LABEL_33;
        default:
          result = v20; /*0xf1c0000000000008*/
          goto LABEL_21; /*0xf1c0000000000008*/
      }
    }
    if ( v10 != 2867 ) /*0x2a3ca2*/
    {
      v17 = v10 - 1852; /*0x2a3ca4*/
      v18 = result; /*0x2a3cb2*/
      result = (struct cocos2d::CCObject *)v17; /*0x2a3cb2*/
      switch ( v17 ) /*0x2a3cce*/
      {
        case 0: /*0x2a3cce*/
        case 2: /*0x2a3cce*/
        case 3: /*0x2a3cce*/
        case 4: /*0x2a3cce*/
        case 8: /*0x2a3cce*/
        case 168: /*0x2a3cce*/
        case 169: /*0x2a3cce*/
        case 170: /*0x2a3cce*/
        case 172: /*0x2a3cce*/
        case 173: /*0x2a3cce*/
        case 174: /*0x2a3cce*/
        case 175: /*0x2a3cce*/
        case 176: /*0x2a3cce*/
        case 177: /*0x2a3cce*/
        case 178: /*0x2a3cce*/
        case 179: /*0x2a3cce*/
        case 181: /*0x2a3cce*/
        case 183: /*0x2a3cce*/
        case 184: /*0x2a3cce*/
        case 185: /*0x2a3cce*/
        case 186: /*0x2a3cce*/
        case 187: /*0x2a3cce*/
        case 188: /*0x2a3cce*/
        case 191: /*0x2a3cce*/
        case 192: /*0x2a3cce*/
        case 193: /*0x2a3cce*/
        case 194: /*0x2a3cce*/
        case 195: /*0x2a3cce*/
        case 196: /*0x2a3cce*/
        case 197: /*0x2a3cce*/
        case 198: /*0x2a3cce*/
        case 199: /*0x2a3cce*/
        case 200: /*0x2a3cce*/
        case 201: /*0x2a3cce*/
        case 202: /*0x2a3cce*/
        case 203: /*0x2a3cce*/
          break;
        default:
          result = v18; /*0xf1c0000000000004*/
          goto LABEL_21; /*0xf1c0000000000004*/
      }
    }
  }
  else if ( v10 != 1851 ) /*0x2a3c1e*/
  {
    v11 = v10 - 921; /*0x2a3c24*/
    if ( v11 ) /*0x2a3c2a*/
    {
      v12 = v11 - 598; /*0x2a3c30*/
      if ( v12 ) /*0x2a3c36*/
      {
        if ( v12 != 99 ) /*0x2a3c3f*/
          goto LABEL_21; /*0x2a3c3f*/
      }
    }
  }
LABEL_33:
  if ( *(_BYTE *)(a1 + 1434) ) /*0x2a3cfd*/
  {
LABEL_21:
    *(_BYTE *)(a1 + 1392) = 0; /*0x2a3c45*/
    *(_BYTE *)(a1 + 774) = 0; /*0x2a3c4c*/
    goto LABEL_22; /*0x2a3c4c*/
  }
  *(_BYTE *)(a1 + 1392) = 1; /*0x2a3d0a*/
LABEL_22:
  v13 = *(_DWORD *)(a1 + 1036); /*0x2a3c53*/
  if ( v13 == 1855 ) /*0x2a3c5f*/
  {
    *(_BYTE *)(a1 + 1393) = 1; /*0x2a3c65*/
  }
  else
  {
    *(_BYTE *)(a1 + 1393) = 0; /*0x2a3d16*/
    if ( v13 <= 1841 ) /*0x2a3d23*/
    {
      if ( v13 == 1841 ) /*0x2a3d29*/
        goto LABEL_40; /*0x2a3d29*/
      v21 = v13 - 1591; /*0x2a3d2b*/
      if ( !v21 ) /*0x2a3d31*/
        goto LABEL_40; /*0x2a3d31*/
      v22 = v21 - 2; /*0x2a3d33*/
      if ( !v22 ) /*0x2a3d36*/
        goto LABEL_40; /*0x2a3d36*/
      v16 = v22 - 246; /*0x2a3d38*/
      v15 = v16 == 0; /*0x2a3d38*/
      goto LABEL_26; /*0x2a3d3e*/
    }
  }
  v14 = v13 - 1842; /*0x2a3c6c*/
  if ( !v14 ) /*0x2a3c72*/
    goto LABEL_40; /*0x2a3c72*/
  v16 = v14 - 1050; /*0x2a3c78*/
  v15 = v16 == 0; /*0x2a3c78*/
LABEL_26:
  if ( !v15 && v16 != 1 ) /*0x2a3c87*/
  {
    *(_BYTE *)(a1 + 1394) = 0; /*0x2a3c8d*/
    return result; /*0x2a3c99*/
  }
LABEL_40:
  *(_BYTE *)(a1 + 1394) = 1; /*0x2a3d43*/
  return result; /*0x2a3c94*/
}
