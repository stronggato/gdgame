#include <Geode/binding/CameraTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x6598f0
// Method: CameraTriggerGameObject::triggerObject
void __fastcall CameraTriggerGameObject_triggerObject(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  bool v11; // r8
  char v12; // cl
  char v13; // dl
  float v14; // xmm0_4
  float v15; // xmm2_4
  int v16; // edx

  v5 = a2; /*0x6598fd*/
  v6 = *(_DWORD *)(a1 + 1036); /*0x659900*/
  if ( v6 > 2016 ) /*0x65990c*/
  {
    if ( v6 == 2062 ) /*0x659b28*/
    {
      v16 = *(_DWORD *)(a1 + 1480); /*0x659be7*/
      switch ( *(_DWORD *)(a1 + 1864) ) /*0x659bf0*/
      {
        case 1: /*0x659bf0*/
          *(_DWORD *)(v5 + 1128) = v16; /*0x659c34*/
          break;
        case 2: /*0x659bf0*/
          *(_DWORD *)(v5 + 1132) = v16; /*0x659c23*/
          break;
        case 3: /*0x659bf0*/
          *(_DWORD *)(v5 + 1136) = v16; /*0x659c12*/
          break;
        case 4: /*0x659bf0*/
          *(_DWORD *)(v5 + 1140) = v16; /*0x659c01*/
          break;
      }
    }
    else
    {
      if ( v6 != 2925 ) /*0x659b34*/
      {
LABEL_16:
        EffectGameObject_triggerObject(a1, (_QWORD *)a2, a3, a4); /*0x659b36*/
        return; /*0x659b43*/
      }
      v12 = *(_BYTE *)(a1 + 1764); /*0x659b48*/
      v13 = *(_BYTE *)(a2 + 785); /*0x659b4f*/
      *(_BYTE *)(v5 + 785) = v12; /*0x659b56*/
      *(_BYTE *)(v5 + 786) = *(_BYTE *)(a1 + 1776); /*0x659b63*/
      if ( *(_BYTE *)(a1 + 1765) ) /*0x659b69*/
      {
        v14 = *(float *)(a1 + 1768); /*0x659b72*/
        *(float *)(v5 + 720) = v14; /*0x659b7a*/
        v15 = *(float *)(a1 + 1772); /*0x659b82*/
        *(float *)(v5 + 720) = fminf(fmaxf(v14, 1.0), 40.0); /*0x659b9a*/
        *(float *)(v5 + 716) = fminf(fmaxf(v15, 0.0), 1.0); /*0x659bb1*/
      }
      if ( v13 != v12 ) /*0x659bbb*/
        GJBaseGameLayer_updateDualGround(v5, *(_QWORD *)(v5 + 3576), *(_DWORD *)(v5 + 1344)); /*0x659bd1*/
    }
  }
  else
  {
    if ( v6 == 2016 ) /*0x659912*/
      return; /*0x659912*/
    v7 = v6 - 1914; /*0x659918*/
    if ( v7 ) /*0x65991e*/
    {
      v8 = v7 - 2; /*0x659924*/
      if ( v8 ) /*0x659927*/
      {
        if ( v8 == 99 ) /*0x65992c*/
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_QWORD *)a2 + 1280LL))( /*0x659991*/
            a2,
            *(_QWORD *)(*(_QWORD *)a2 + 1280LL),
            *(unsigned __int8 *)(a1 + 1568),
            *(unsigned __int8 *)(a1 + 1541),
            *(_DWORD *)(a1 + 1468),
            *(_DWORD *)(a1 + 1512),
            *(_DWORD *)(a1 + 1516),
            *(_DWORD *)(a1 + 924),
            *(_DWORD *)(a1 + 1688));
          return; /*0x65999d*/
        }
        goto LABEL_16; /*0x65992c*/
      }
      if ( *(_DWORD *)(a1 + 1528) != 2 ) /*0x6599a5*/
        AnimatedShopKeeper_startAnimating( /*0x6599e3*/
          a2,
          a2,
          a3,
          *(_DWORD *)(a1 + 1512),
          *(_DWORD *)(a1 + 1516),
          *(_DWORD *)(a1 + 924),
          *(_DWORD *)(a1 + 1688));
      if ( *(_DWORD *)(a1 + 1528) != 1 ) /*0x6599ef*/
        sub_33B390( /*0x659a31*/
          v5,
          a2,
          a3,
          *(_DWORD *)(a1 + 1512),
          *(_DWORD *)(a1 + 1516),
          *(_DWORD *)(a1 + 924),
          *(_DWORD *)(a1 + 1688));
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 1528); /*0x659a41*/
      v10 = a2; /*0x659a47*/
      LOBYTE(a2) = v9 != 2; /*0x659a55*/
      v11 = v9 != 1; /*0x659a5b*/
      if ( *(_BYTE *)(a1 + 1856) ) /*0x659a5f*/
        sub_3459B0( /*0x659b12*/
          v10,
          a2,
          v11,
          a4,
          *(_DWORD *)(a1 + 1512),
          *(_DWORD *)(a1 + 1516),
          *(_BYTE *)(a1 + 1868),
          *(_DWORD *)(a1 + 1872),
          *(_BYTE *)(a1 + 1876));
      else
        sub_345300( /*0x659ac6*/
          v10,
          *(_DWORD *)(a1 + 1484),
          (unsigned __int8)a2,
          v11,
          *(_BYTE *)(a1 + 1857),
          *(_DWORD *)(a1 + 1860),
          *(_DWORD *)(a1 + 1468),
          *(_DWORD *)(a1 + 1512),
          *(_DWORD *)(a1 + 1516),
          *(_BYTE *)(a1 + 1868),
          *(_DWORD *)(a1 + 1872));
    }
  }
}

// [2/3] Address: 0x659c50
// Method: CameraTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall CameraTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v11 = a2; /*0x659c88*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x659c95*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v14, a3); /*0x659ca9*/
  v11 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v12, SaveString); /*0x659cc0*/
  fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659ccf*/
  sub_3C310(v14); /*0x659cdd*/
  switch ( *(_DWORD *)(a1 + 1036) ) /*0x659cee*/
  {
    case 0x77A: /*0x659cee*/
      if ( *(float *)(a1 + 1468) != 0.0 ) /*0x65a46e*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a470*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a475*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a484*/
        fmt::BasicWriter<char>::operator<<(v13, 10); /*0x65a494*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a49a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a49f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a4ae*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a4c4*/
      }
      if ( *(_DWORD *)(a1 + 1512) ) /*0x65a4ca*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a4d3*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a4d8*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a4e7*/
        fmt::BasicWriter<char>::operator<<(v13, 30); /*0x65a4f7*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a4fd*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a502*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a511*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1512)); /*0x65a522*/
      }
      if ( *(float *)(a1 + 1516) != 0.0 ) /*0x65a535*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a537*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a53c*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a54b*/
        fmt::BasicWriter<char>::operator<<(v13, 85); /*0x65a55b*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a561*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a566*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a575*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a58b*/
      }
      if ( *(_DWORD *)(a1 + 1484) ) /*0x65a591*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a59a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a59f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a5ae*/
        fmt::BasicWriter<char>::operator<<(v13, 71); /*0x65a5be*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a5c4*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a5c9*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a5d8*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1484)); /*0x65a5e9*/
      }
      if ( *(_DWORD *)(a1 + 1528) ) /*0x65a5ef*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a5f8*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a5fd*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a60c*/
        fmt::BasicWriter<char>::operator<<(v13, 101); /*0x65a61c*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a622*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a627*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a636*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1528)); /*0x65a647*/
      }
      if ( *(_BYTE *)(a1 + 1856) ) /*0x65a64d*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a656*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a65b*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a66a*/
        fmt::BasicWriter<char>::operator<<(v13, 110); /*0x65a67a*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a680*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a685*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a694*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1856)); /*0x65a6a6*/
      }
      if ( *(_BYTE *)(a1 + 1857) ) /*0x65a6ac*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a6b5*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a6ba*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a6c9*/
        fmt::BasicWriter<char>::operator<<(v13, 212); /*0x65a6d9*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a6df*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a6e4*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a6f3*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1857)); /*0x65a705*/
      }
      if ( *(float *)(a1 + 1860) != 0.0 ) /*0x65a718*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a71a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a71f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a72e*/
        fmt::BasicWriter<char>::operator<<(v13, 213); /*0x65a73e*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a744*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a749*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a758*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a76e*/
      }
      if ( *(_BYTE *)(a1 + 1868) ) /*0x65a774*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a77d*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a782*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a791*/
        fmt::BasicWriter<char>::operator<<(v13, 453); /*0x65a7a1*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a7a7*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a7ac*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a7bb*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1868)); /*0x65a7cd*/
      }
      if ( *(float *)(a1 + 1872) != 0.0 ) /*0x65a7e0*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a7e2*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a7e7*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a7f6*/
        fmt::BasicWriter<char>::operator<<(v13, 454); /*0x65a806*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a80c*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a811*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a820*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a836*/
      }
      if ( *(_BYTE *)(a1 + 1876) ) /*0x65a83c*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a845*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a84a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a859*/
        fmt::BasicWriter<char>::operator<<(v13, 465); /*0x65a869*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a86f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a874*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a883*/
        v7 = *(unsigned __int8 *)(a1 + 1876); /*0x65a889*/
        goto LABEL_64; /*0x65a889*/
      }
      break;
    case 0x77C: /*0x659cee*/
      if ( *(float *)(a1 + 1504) != 0.0 ) /*0x65a206*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a208*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a20d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a21c*/
        fmt::BasicWriter<char>::operator<<(v13, 28); /*0x65a22c*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a232*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a237*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a246*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a25c*/
      }
      if ( *(float *)(a1 + 1508) != 0.0 ) /*0x65a26f*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a271*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a276*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a285*/
        fmt::BasicWriter<char>::operator<<(v13, 29); /*0x65a295*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a29b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a2a0*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a2af*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a2c5*/
      }
      if ( *(float *)(a1 + 1468) != 0.0 ) /*0x65a2d8*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a2da*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a2df*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a2ee*/
        fmt::BasicWriter<char>::operator<<(v13, 10); /*0x65a2fe*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a304*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a309*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a318*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a32e*/
      }
      if ( *(_DWORD *)(a1 + 1512) ) /*0x65a334*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a33d*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a342*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a351*/
        fmt::BasicWriter<char>::operator<<(v13, 30); /*0x65a361*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a367*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a36c*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a37b*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1512)); /*0x65a38c*/
      }
      if ( *(float *)(a1 + 1516) != 0.0 ) /*0x65a39f*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a3a1*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a3a6*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a3b5*/
        fmt::BasicWriter<char>::operator<<(v13, 85); /*0x65a3c5*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a3cb*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a3d0*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a3df*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a3f5*/
      }
      if ( *(_DWORD *)(a1 + 1528) ) /*0x65a3fb*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a408*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a40d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a41c*/
        fmt::BasicWriter<char>::operator<<(v13, 101); /*0x65a42c*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a432*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a437*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a446*/
        v7 = *(unsigned int *)(a1 + 1528); /*0x65a44c*/
        goto LABEL_64; /*0x65a452*/
      }
      break;
    case 0x7DF: /*0x659cee*/
      if ( *(float *)(a1 + 1468) != 0.0 ) /*0x659fa7*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659fa9*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659fae*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659fbd*/
        fmt::BasicWriter<char>::operator<<(v13, 10); /*0x659fcd*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659fd3*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659fd8*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659fe7*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x659ffd*/
      }
      if ( *(_DWORD *)(a1 + 1512) ) /*0x65a003*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a00c*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a011*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a020*/
        fmt::BasicWriter<char>::operator<<(v13, 30); /*0x65a030*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a036*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a03b*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a04a*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1512)); /*0x65a05b*/
      }
      if ( *(float *)(a1 + 1516) != 0.0 ) /*0x65a06e*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a070*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a075*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a084*/
        fmt::BasicWriter<char>::operator<<(v13, 85); /*0x65a094*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a09a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a09f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a0ae*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a0c4*/
      }
      if ( *(float *)(a1 + 1560) != 0.0 ) /*0x65a0d7*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a0d9*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a0de*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a0ed*/
        fmt::BasicWriter<char>::operator<<(v13, 68); /*0x65a0fd*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a103*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a108*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a117*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x65a12d*/
      }
      if ( *(_BYTE *)(a1 + 1568) ) /*0x65a133*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a13c*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a141*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a150*/
        fmt::BasicWriter<char>::operator<<(v13, 70); /*0x65a160*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a166*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a16b*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a17a*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1568)); /*0x65a18c*/
      }
      if ( *(_BYTE *)(a1 + 1541) ) /*0x65a192*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a19f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a1a4*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a1b3*/
        fmt::BasicWriter<char>::operator<<(v13, 394); /*0x65a1c3*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x65a1c9*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65a1ce*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65a1dd*/
        v7 = *(unsigned __int8 *)(a1 + 1541); /*0x65a1e3*/
        goto LABEL_64; /*0x65a1ea*/
      }
      break;
    case 0x7E0: /*0x659cee*/
      if ( *(float *)(a1 + 1504) != 0.0 ) /*0x659df0*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659df2*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659df7*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659e06*/
        fmt::BasicWriter<char>::operator<<(v13, 28); /*0x659e16*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659e1c*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659e21*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659e30*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x659e46*/
      }
      if ( *(float *)(a1 + 1508) != 0.0 ) /*0x659e59*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659e5b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659e60*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659e6f*/
        fmt::BasicWriter<char>::operator<<(v13, 29); /*0x659e7f*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659e85*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659e8a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659e99*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x659eaf*/
      }
      if ( *(float *)(a1 + 1760) != 0.0 ) /*0x659ec2*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659ec4*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659ec9*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659ed8*/
        fmt::BasicWriter<char>::operator<<(v13, 371); /*0x659ee8*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659eee*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659ef3*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659f02*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x659f18*/
      }
      if ( *(float *)(a1 + 1880) != 0.0 ) /*0x659f2b*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659f31*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659f36*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659f45*/
        fmt::BasicWriter<char>::operator<<(v13, 506); /*0x659f55*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659f5b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659f60*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659f6f*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x659f85*/
      }
      break;
    case 0x80E: /*0x659cee*/
      if ( *(_DWORD *)(a1 + 1480) ) /*0x659d1f*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659d28*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659d2d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659d3c*/
        fmt::BasicWriter<char>::operator<<(v13, 51); /*0x659d4c*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659d52*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659d57*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659d66*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x659d77*/
      }
      if ( *(_DWORD *)(a1 + 1864) ) /*0x659d7d*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659d8a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659d8f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659d9e*/
        fmt::BasicWriter<char>::operator<<(v13, 164); /*0x659dae*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x659db4*/
        *((_QWORD *)&v11 + 1) = 0; /*0x659db9*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x659dc8*/
        v7 = *(unsigned int *)(a1 + 1864); /*0x659dce*/
LABEL_64:
        fmt::BasicWriter<char>::operator<<(v13, v7); /*0x65a890*/
      }
      break;
  }
  v8 = fmt::BasicWriter<char>::c_str(v13); /*0x65a89b*/
  *(_OWORD *)a2 = 0; /*0x65a8a9*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65a8ac*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65a8b0*/
  v9 = -1; /*0x65a8b4*/
  do /*0x65a8c3*/
    ++v9; /*0x65a8c0*/
  while ( *(_BYTE *)(v8 + v9) ); /*0x65a8c3*/
  sub_3C230(a2); /*0x65a8d0*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65a8db*/
  return a2; /*0x65a8e4*/
}

// [3/3] Address: 0x65a910
// Method: CameraTriggerGameObject::customObjectSetup
char __fastcall CameraTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // ebx
  int v8; // eax
  const char *v9; // rcx
  const char *v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm1_4
  const char *v13; // rcx
  float v14; // xmm8_4
  float v15; // xmm8_4
  const char *v16; // rcx
  float v17; // xmm8_4
  float v18; // xmm1_4
  const char *v19; // rcx
  float v20; // xmm10_4
  __int64 v21; // rax
  const char *v22; // rcx
  float v23; // xmm8_4
  float v24; // xmm6_4
  const char *v25; // rcx
  float v26; // xmm7_4
  float v27; // xmm7_4
  float v28; // xmm1_4
  const char *v29; // rcx
  float v30; // xmm9_4
  int v31; // ebx
  int v32; // eax
  const char *v33; // rcx
  const char *v34; // rcx
  float v35; // xmm7_4
  int v36; // eax
  const char *v37; // rcx
  const char *v38; // rcx
  float v39; // xmm6_4
  float v40; // xmm10_4
  const char *v41; // rcx
  float v42; // xmm7_4
  float v43; // xmm8_4
  const char *v44; // rcx
  float v45; // xmm7_4
  const char *v46; // rcx
  float v47; // xmm7_4
  float v48; // xmm7_4
  __int64 v49; // rax
  const char *v50; // rcx
  float v51; // xmm8_4
  int v52; // ebx
  int v53; // eax
  const char *v54; // rcx
  const char *v55; // rcx
  float v56; // xmm6_4
  const char *v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm7_4
  float v60; // xmm1_4
  const char *v61; // rcx
  float v62; // xmm8_4
  int v63; // ebx
  int v64; // eax
  const char *v65; // rcx
  int v66; // eax
  const char *v67; // rcx
  int v68; // eax
  const char *v69; // rcx
  int v70; // eax
  const char *v71; // rcx
  int v72; // eax
  const char *v73; // rcx
  float v74; // xmm1_4
  const char *v75; // rcx
  float v76; // xmm7_4
  int v77; // eax
  const char *v78; // rcx
  const char *v79; // rcx
  float v80; // xmm7_4
  const char *v81; // rcx
  char v83; // [rsp+90h] [rbp+8h] BYREF

  LOBYTE(v6) = EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65a948*/
  switch ( *(_DWORD *)(a1 + 1036) )
  {
    case 0x77A:
      v56 = 0.0; /*0x65af67*/
      if ( !*(_QWORD *)(*(_QWORD *)a3 + 680LL) ) /*0x65af7c*/
        goto LABEL_122; /*0x65af7c*/
      v57 = (const char *)(*(_QWORD *)a2 + 2720LL); /*0x65af89*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 2744LL) > 0xFu ) /*0x65af95*/
        v57 = *(const char **)v57; /*0x65af97*/
      v58 = atof(v57); /*0x65afa3*/
      v59 = isnan(v58) ? 0.0 : fminf(1000000000.0, fmaxf(-1000000000.0, v58));
      if ( v59 <= 0.0 ) /*0x65afcc*/
LABEL_122:
        v59 = 2.0; /*0x65afce*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 80LL) ) /*0x65afd9*/
      {
        v61 = (const char *)(*(_QWORD *)a2 + 320LL); /*0x65afe8*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 344LL) > 0xFu ) /*0x65aff4*/
          v61 = *(const char **)v61; /*0x65aff6*/
        v62 = atof(v61); /*0x65b003*/
        if ( isnan(v62) ) /*0x65b00c*/
          v60 = 0.0; /*0x65b016*/
        else
          v60 = fminf(1000000000.0, fmaxf(-1000000000.0, v62)); /*0x65b028*/
      }
      else
      {
        v60 = 0.0; /*0x65afe0*/
      }
      *(float *)(a1 + 1468) = v60; /*0x65b02c*/
      v63 = 0; /*0x65b034*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 240LL) ) /*0x65b039*/
      {
        v65 = (const char *)(*(_QWORD *)a2 + 960LL); /*0x65b049*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 984LL) > 0xFu ) /*0x65b055*/
          v65 = *(const char **)v65; /*0x65b057*/
        v64 = atoi(v65); /*0x65b05a*/
      }
      else
      {
        v64 = 0; /*0x65b042*/
      }
      *(float *)(a1 + 1516) = v59; /*0x65b060*/
      *(_DWORD *)(a1 + 1512) = v64; /*0x65b068*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x65b071*/
      {
        v67 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x65b081*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x65b08d*/
          v67 = *(const char **)v67; /*0x65b08f*/
        v66 = atoi(v67); /*0x65b092*/
      }
      else
      {
        v66 = 0; /*0x65b07a*/
      }
      *(_DWORD *)(a1 + 1484) = v66; /*0x65b098*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 808LL) ) /*0x65b0a1*/
      {
        v69 = (const char *)(*(_QWORD *)a2 + 3232LL); /*0x65b0b1*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3256LL) > 0xFu ) /*0x65b0bd*/
          v69 = *(const char **)v69; /*0x65b0bf*/
        v68 = atoi(v69); /*0x65b0c2*/
      }
      else
      {
        v68 = 0; /*0x65b0aa*/
      }
      *(_DWORD *)(a1 + 1528) = v68; /*0x65b0c8*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 880LL) ) /*0x65b0d1*/
      {
        v71 = (const char *)(*(_QWORD *)a2 + 3520LL); /*0x65b0e1*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3544LL) > 0xFu ) /*0x65b0ed*/
          v71 = *(const char **)v71; /*0x65b0ef*/
        v70 = atoi(v71); /*0x65b0f2*/
      }
      else
      {
        v70 = 0; /*0x65b0da*/
      }
      *(_BYTE *)(a1 + 1856) = v70 != 0; /*0x65b0fd*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1696LL) ) /*0x65b106*/
      {
        v73 = (const char *)(*(_QWORD *)a2 + 6784LL); /*0x65b116*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 6808LL) > 0xFu ) /*0x65b122*/
          v73 = *(const char **)v73; /*0x65b124*/
        v72 = atoi(v73); /*0x65b127*/
      }
      else
      {
        v72 = 0; /*0x65b10f*/
      }
      *(_BYTE *)(a1 + 1857) = v72 != 0; /*0x65b132*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1704LL) ) /*0x65b13b*/
      {
        v75 = (const char *)(*(_QWORD *)a2 + 6816LL); /*0x65b14c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 6840LL) > 0xFu ) /*0x65b158*/
          v75 = *(const char **)v75; /*0x65b15a*/
        v76 = atof(v75); /*0x65b166*/
        if ( isnan(v76) ) /*0x65b16d*/
          v74 = 0.0; /*0x65b177*/
        else
          v74 = fminf(1000000000.0, fmaxf(-1000000000.0, v76)); /*0x65b188*/
      }
      else
      {
        v74 = 0.0; /*0x65b144*/
      }
      *(float *)(a1 + 1860) = v74; /*0x65b18c*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 3624LL) ) /*0x65b197*/
      {
        v78 = (const char *)(*(_QWORD *)a2 + 14496LL); /*0x65b1a7*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 14520LL) > 0xFu ) /*0x65b1b3*/
          v78 = *(const char **)v78; /*0x65b1b5*/
        v77 = atoi(v78); /*0x65b1b8*/
      }
      else
      {
        v77 = 0; /*0x65b1a0*/
      }
      *(_BYTE *)(a1 + 1868) = v77 != 0; /*0x65b1c3*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 3632LL) ) /*0x65b1cc*/
      {
        v79 = (const char *)(*(_QWORD *)a2 + 14528LL); /*0x65b1d8*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 14552LL) > 0xFu ) /*0x65b1e4*/
          v79 = *(const char **)v79; /*0x65b1e6*/
        v80 = atof(v79); /*0x65b1f2*/
        if ( !isnan(v80) ) /*0x65b1f9*/
          v56 = fminf(1000000000.0, fmaxf(-1000000000.0, v80)); /*0x65b20c*/
      }
      *(float *)(a1 + 1872) = v56; /*0x65b211*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 3720LL) ) /*0x65b21c*/
      {
        v81 = (const char *)(*(_QWORD *)a2 + 14880LL); /*0x65b228*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 14904LL) > 0xFu ) /*0x65b234*/
          v81 = *(const char **)v81; /*0x65b236*/
        v63 = atoi(v81); /*0x65b23f*/
      }
      *(_BYTE *)(a1 + 1876) = v63 != 0; /*0x65b246*/
      LOBYTE(v6) = v63 != 0; /*0x65b243*/
      break;
    case 0x77C:
      if ( *(_QWORD *)(*(_QWORD *)a3 + 224LL) ) /*0x65ad6a*/
      {
        v41 = (const char *)(*(_QWORD *)a2 + 896LL); /*0x65ad80*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 920LL) > 0xFu ) /*0x65ad8c*/
          v41 = *(const char **)v41; /*0x65ad8e*/
        v42 = atof(v41); /*0x65ad9a*/
        v39 = 0.0; /*0x65ada7*/
        if ( isnan(v42) ) /*0x65ada1*/
          v40 = 0.0; /*0x65adae*/
        else
          v40 = fminf(1000000000.0, fmaxf(-1000000000.0, v42)); /*0x65adc0*/
      }
      else
      {
        v39 = 0.0; /*0x65ad74*/
        v40 = 0.0; /*0x65ad77*/
      }
      if ( *(_QWORD *)(*(_QWORD *)a3 + 232LL) ) /*0x65adc8*/
      {
        v44 = (const char *)(*(_QWORD *)a2 + 928LL); /*0x65addb*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 952LL) > 0xFu ) /*0x65ade7*/
          v44 = *(const char **)v44; /*0x65ade9*/
        v45 = atof(v44); /*0x65adf5*/
        if ( isnan(v45) ) /*0x65adfc*/
          v43 = 0.0; /*0x65ae06*/
        else
          v43 = fminf(1000000000.0, fmaxf(-1000000000.0, v45)); /*0x65ae18*/
      }
      else
      {
        v43 = 0.0; /*0x65add2*/
      }
      if ( !*(_QWORD *)(*(_QWORD *)a3 + 680LL) ) /*0x65ae20*/
        goto LABEL_99; /*0x65ae20*/
      v46 = (const char *)(*(_QWORD *)a2 + 2720LL); /*0x65ae2d*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 2744LL) > 0xFu ) /*0x65ae39*/
        v46 = *(const char **)v46; /*0x65ae3b*/
      v47 = atof(v46); /*0x65ae47*/
      v48 = isnan(v47) ? 0.0 : fminf(1000000000.0, fmaxf(-1000000000.0, v47));
      if ( v48 <= 0.0 ) /*0x65ae70*/
LABEL_99:
        v48 = 2.0; /*0x65ae72*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v83, v40, v43); /*0x65ae8a*/
      cocos2d::CCPoint::operator=(a1 + 1504, v49); /*0x65ae9a*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 80LL) ) /*0x65aea3*/
      {
        v50 = (const char *)(*(_QWORD *)a2 + 320LL); /*0x65aead*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 344LL) > 0xFu ) /*0x65aeb9*/
          v50 = *(const char **)v50; /*0x65aebb*/
        v51 = atof(v50); /*0x65aec8*/
        if ( !isnan(v51) ) /*0x65aed1*/
          v39 = fminf(1000000000.0, fmaxf(-1000000000.0, v51)); /*0x65aee4*/
      }
      v52 = 0; /*0x65aeef*/
      *(float *)(a1 + 1468) = v39; /*0x65aef1*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 240LL) ) /*0x65aefc*/
      {
        v54 = (const char *)(*(_QWORD *)a2 + 960LL); /*0x65af0c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 984LL) > 0xFu ) /*0x65af18*/
          v54 = *(const char **)v54; /*0x65af1a*/
        v53 = atoi(v54); /*0x65af1d*/
      }
      else
      {
        v53 = 0; /*0x65af05*/
      }
      *(float *)(a1 + 1516) = v48; /*0x65af23*/
      *(_DWORD *)(a1 + 1512) = v53; /*0x65af2b*/
      v6 = *(_QWORD *)a3; /*0x65af31*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 808LL) ) /*0x65af34*/
      {
        v55 = (const char *)(*(_QWORD *)a2 + 3232LL); /*0x65af40*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3256LL) > 0xFu ) /*0x65af4c*/
          v55 = *(const char **)v55; /*0x65af4e*/
        LODWORD(v6) = atoi(v55); /*0x65af51*/
        v52 = v6; /*0x65af57*/
      }
      *(_DWORD *)(a1 + 1528) = v52; /*0x65af59*/
      break;
    case 0x7DF:
      v24 = 0.0; /*0x65ab8b*/
      if ( !*(_QWORD *)(*(_QWORD *)a3 + 680LL) ) /*0x65aba0*/
        goto LABEL_50; /*0x65aba0*/
      v25 = (const char *)(*(_QWORD *)a2 + 2720LL); /*0x65abad*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 2744LL) > 0xFu ) /*0x65abb9*/
        v25 = *(const char **)v25; /*0x65abbb*/
      v26 = atof(v25); /*0x65abc7*/
      v27 = isnan(v26) ? 0.0 : fminf(1000000000.0, fmaxf(-1000000000.0, v26));
      if ( v27 <= 0.0 ) /*0x65abf0*/
LABEL_50:
        v27 = 2.0; /*0x65abf2*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 80LL) ) /*0x65abfd*/
      {
        v29 = (const char *)(*(_QWORD *)a2 + 320LL); /*0x65ac0c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 344LL) > 0xFu ) /*0x65ac18*/
          v29 = *(const char **)v29; /*0x65ac1a*/
        v30 = atof(v29); /*0x65ac27*/
        if ( isnan(v30) ) /*0x65ac30*/
          v28 = 0.0; /*0x65ac3a*/
        else
          v28 = fminf(1000000000.0, fmaxf(-1000000000.0, v30)); /*0x65ac4c*/
      }
      else
      {
        v28 = 0.0; /*0x65ac04*/
      }
      *(float *)(a1 + 1468) = v28; /*0x65ac50*/
      v31 = 0; /*0x65ac58*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 240LL) ) /*0x65ac5d*/
      {
        v33 = (const char *)(*(_QWORD *)a2 + 960LL); /*0x65ac6d*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 984LL) > 0xFu ) /*0x65ac79*/
          v33 = *(const char **)v33; /*0x65ac7b*/
        v32 = atoi(v33); /*0x65ac7e*/
      }
      else
      {
        v32 = 0; /*0x65ac66*/
      }
      *(float *)(a1 + 1516) = v27; /*0x65ac84*/
      *(_DWORD *)(a1 + 1512) = v32; /*0x65ac8c*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 544LL) ) /*0x65ac95*/
      {
        v34 = (const char *)(*(_QWORD *)a2 + 2176LL); /*0x65aca1*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2200LL) > 0xFu ) /*0x65acad*/
          v34 = *(const char **)v34; /*0x65acaf*/
        v35 = atof(v34); /*0x65acbb*/
        if ( !isnan(v35) ) /*0x65acc2*/
          v24 = fminf(1000000000.0, fmaxf(-1000000000.0, v35)); /*0x65acd5*/
      }
      *(float *)(a1 + 1560) = v24; /*0x65acda*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 560LL) ) /*0x65ace5*/
      {
        v37 = (const char *)(*(_QWORD *)a2 + 2240LL); /*0x65acf5*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2264LL) > 0xFu ) /*0x65ad01*/
          v37 = *(const char **)v37; /*0x65ad03*/
        v36 = atoi(v37); /*0x65ad06*/
      }
      else
      {
        v36 = 0; /*0x65acee*/
      }
      *(_BYTE *)(a1 + 1568) = v36 != 0; /*0x65ad11*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 3152LL) ) /*0x65ad1a*/
      {
        v38 = (const char *)(*(_QWORD *)a2 + 12608LL); /*0x65ad26*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 12632LL) > 0xFu ) /*0x65ad32*/
          v38 = *(const char **)v38; /*0x65ad34*/
        v31 = atoi(v38); /*0x65ad3d*/
      }
      *(_BYTE *)(a1 + 1541) = v31 != 0; /*0x65ad44*/
      LOBYTE(v6) = v31 != 0; /*0x65ad41*/
      break;
    case 0x7E0:
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2968LL) ) /*0x65a9f8*/
      {
        v13 = (const char *)(*(_QWORD *)a2 + 11872LL); /*0x65aa0d*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 11896LL) > 0xFu ) /*0x65aa19*/
          v13 = *(const char **)v13; /*0x65aa1b*/
        v14 = atof(v13); /*0x65aa28*/
        v11 = 0.0; /*0x65aa37*/
        if ( isnan(v14) ) /*0x65aa31*/
          v12 = 0.0; /*0x65aa3e*/
        else
          v12 = fminf(1000000000.0, fmaxf(-1000000000.0, v14)); /*0x65aa4f*/
      }
      else
      {
        v11 = 0.0; /*0x65aa02*/
        v12 = 0.0; /*0x65aa05*/
      }
      *(float *)(a1 + 1760) = v12; /*0x65aa53*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 232LL) ) /*0x65aa5e*/
      {
        v16 = (const char *)(*(_QWORD *)a2 + 928LL); /*0x65aa71*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 952LL) > 0xFu ) /*0x65aa7d*/
          v16 = *(const char **)v16; /*0x65aa7f*/
        v17 = atof(v16); /*0x65aa8c*/
        if ( isnan(v17) ) /*0x65aa95*/
          v15 = 0.0; /*0x65aa9f*/
        else
          v15 = fminf(1000000000.0, fmaxf(-1000000000.0, v17)); /*0x65aab1*/
      }
      else
      {
        v15 = 0.0; /*0x65aa68*/
      }
      if ( *(_QWORD *)(*(_QWORD *)a3 + 224LL) ) /*0x65aab9*/
      {
        v19 = (const char *)(*(_QWORD *)a2 + 896LL); /*0x65aacb*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 920LL) > 0xFu ) /*0x65aad7*/
          v19 = *(const char **)v19; /*0x65aad9*/
        v20 = atof(v19); /*0x65aae6*/
        if ( isnan(v20) ) /*0x65aaef*/
          v18 = 0.0; /*0x65aaf9*/
        else
          v18 = fminf(1000000000.0, fmaxf(-1000000000.0, v20)); /*0x65ab0a*/
      }
      else
      {
        v18 = 0.0; /*0x65aac3*/
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v83, v18, v15); /*0x65ab1a*/
      cocos2d::CCPoint::operator=(a1 + 1504, v21); /*0x65ab2a*/
      v6 = *(_QWORD *)a3; /*0x65ab30*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 4048LL) ) /*0x65ab33*/
      {
        v22 = (const char *)(*(_QWORD *)a2 + 16192LL); /*0x65ab40*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 16216LL) > 0xFu ) /*0x65ab4c*/
          v22 = *(const char **)v22; /*0x65ab4e*/
        v23 = atof(v22); /*0x65ab5b*/
        LODWORD(v6) = isnan(v23); /*0x65ab64*/
        if ( !(_DWORD)v6 ) /*0x65ab6c*/
          v11 = fminf(1000000000.0, fmaxf(-1000000000.0, v23)); /*0x65ab77*/
      }
      *(float *)(a1 + 1880) = v11; /*0x65ab7b*/
      break;
    case 0x80E:
      v7 = 0; /*0x65a982*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x65a984*/
      {
        v9 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x65a994*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65a9a0*/
          v9 = *(const char **)v9; /*0x65a9a2*/
        v8 = atoi(v9); /*0x65a9a5*/
      }
      else
      {
        v8 = 0; /*0x65a98d*/
      }
      *(_DWORD *)(a1 + 1480) = v8; /*0x65a9ab*/
      v6 = *(_QWORD *)a3; /*0x65a9b1*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1312LL) ) /*0x65a9b4*/
      {
        v10 = (const char *)(*(_QWORD *)a2 + 5248LL); /*0x65a9c0*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 5272LL) > 0xFu ) /*0x65a9cc*/
          v10 = *(const char **)v10; /*0x65a9ce*/
        LODWORD(v6) = atoi(v10); /*0x65a9d1*/
        v7 = v6; /*0x65a9d7*/
      }
      *(_DWORD *)(a1 + 1864) = v7; /*0x65a9d9*/
      break;
  }
  return v6; /*0x65b24c*/
}
