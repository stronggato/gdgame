#include <Geode/binding/CreateParticlePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/29] Address: 0x129730
// Method: CreateParticlePopup::updateParticleValueForType
void __fastcall CreateParticlePopup_updateParticleValueForType(__int64 a1, _QWORD *a2)
{
  int v2; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  const char *v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  const char *v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  const char *v19; // rcx
  float v20; // xmm6_4
  char *v21; // rcx
  cocos2d::CCString *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  const char *v25; // rcx
  int v26; // r15d
  char *v27; // r8
  char v28; // bl
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r8
  char **v36; // rax
  char *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int16 v42; // cx
  char v43; // dl
  __int64 v44; // rcx
  __int16 v45; // [rsp+30h] [rbp-50h] BYREF
  char v46; // [rsp+32h] [rbp-4Eh]
  char *String[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v48; // [rsp+50h] [rbp-30h]

  v2 = 0; /*0x129750*/
  if ( !*(_BYTE *)(a1 + 200) ) /*0x129758*/
  {
    switch ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) ) /*0x129795*/
    {
      case 3u: /*0x129795*/
        v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL, -4096); /*0x1297a8*/
        *(_OWORD *)String = 0; /*0x1297b1*/
        v6 = -1; /*0x1297b5*/
        v48 = 0; /*0x1297bc*/
        do /*0x1297c4*/
          ++v6; /*0x1297c1*/
        while ( *(_BYTE *)(v5 + v6) ); /*0x1297c4*/
        sub_3C230(String); /*0x1297d4*/
        v7 = (const char *)String; /*0x1297de*/
        if ( *((_QWORD *)&v48 + 1) > 0xFu ) /*0x1297e2*/
          v7 = String[0]; /*0x1297e2*/
        v8 = atoi(v7); /*0x1297e7*/
        v9 = *((_QWORD *)&v48 + 1); /*0x1297ed*/
        *(_DWORD *)(a1 + 608) = v8; /*0x1297f1*/
        if ( v9 > 0xF ) /*0x1297fc*/
        {
          v10 = String[0]; /*0x1297fe*/
          if ( v9 + 1 >= 0x1000 ) /*0x12980f*/
          {
            v10 = (char *)*((_QWORD *)String[0] - 1); /*0x129811*/
            if ( (unsigned __int64)(String[0] - v10 - 8) > 0x1F ) /*0x129824*/
              invoke_watson(0, 0, 0, 0, 0); /*0x129835*/
          }
          j_j_free(v10); /*0x12983c*/
        }
        if ( *(int *)(a1 + 608) >= 0 ) /*0x129851*/
          v2 = *(_DWORD *)(a1 + 608); /*0x129851*/
        if ( v2 > 999 ) /*0x12985b*/
          v2 = 999; /*0x12985b*/
        *(_DWORD *)(a1 + 608) = v2; /*0x12985e*/
        ColorSelectPopup_updateCustomColorIdx(a1 - 544); /*0x129865*/
        sub_607BB0(a1 - 544); /*0x129871*/
        break; /*0x129876*/
      case 4u: /*0x129795*/
        v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL, -4096); /*0x12988c*/
        *(_OWORD *)String = 0; /*0x129895*/
        v12 = -1; /*0x129899*/
        v48 = 0; /*0x1298a0*/
        do /*0x1298a8*/
          ++v12; /*0x1298a5*/
        while ( *(_BYTE *)(v11 + v12) ); /*0x1298a8*/
        sub_3C230(String); /*0x1298b8*/
        v13 = (const char *)String; /*0x1298c2*/
        if ( *((_QWORD *)&v48 + 1) > 0xFu ) /*0x1298c6*/
          v13 = String[0]; /*0x1298c6*/
        v14 = atoi(v13); /*0x1298cb*/
        v15 = *((_QWORD *)&v48 + 1); /*0x1298d1*/
        *(_DWORD *)(a1 + 616) = v14; /*0x1298d5*/
        if ( v15 > 0xF ) /*0x1298e0*/
        {
          v16 = String[0]; /*0x1298e2*/
          if ( v15 + 1 >= 0x1000 ) /*0x1298f3*/
          {
            v16 = (char *)*((_QWORD *)String[0] - 1); /*0x1298f5*/
            if ( (unsigned __int64)(String[0] - v16 - 8) > 0x1F ) /*0x129908*/
              invoke_watson(0, 0, 0, 0, 0); /*0x129919*/
          }
          j_j_free(v16); /*0x129920*/
        }
        if ( *(int *)(a1 + 616) >= 0 ) /*0x129935*/
          v2 = *(_DWORD *)(a1 + 616); /*0x129935*/
        if ( v2 > 999 ) /*0x12993f*/
          v2 = 999; /*0x12993f*/
        *(_DWORD *)(a1 + 616) = v2; /*0x129942*/
        sub_12A2E0(a1 - 544); /*0x129949*/
        break; /*0x12994e*/
      case 5u: /*0x129795*/
        v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL, -4096); /*0x129969*/
        *(_OWORD *)String = 0; /*0x129972*/
        v18 = -1; /*0x129976*/
        v48 = 0; /*0x12997d*/
        do /*0x129985*/
          ++v18; /*0x129982*/
        while ( *(_BYTE *)(v17 + v18) ); /*0x129985*/
        sub_3C230(String); /*0x129995*/
        v19 = (const char *)String; /*0x12999f*/
        if ( *((_QWORD *)&v48 + 1) > 0xFu ) /*0x1299a3*/
          v19 = String[0]; /*0x1299a3*/
        v20 = atof(v19); /*0x1299b5*/
        if ( *((_QWORD *)&v48 + 1) > 0xFu ) /*0x1299bd*/
        {
          v21 = String[0]; /*0x1299bf*/
          if ( (unsigned __int64)(*((_QWORD *)&v48 + 1) + 1LL) >= 0x1000 ) /*0x1299d0*/
          {
            v21 = (char *)*((_QWORD *)String[0] - 1); /*0x1299d2*/
            if ( (unsigned __int64)(String[0] - v21 - 8) > 0x1F ) /*0x1299e5*/
              invoke_watson(0, 0, 0, 0, 0); /*0x1299f6*/
          }
          j_j_free(v21); /*0x1299fd*/
        }
        v22 = cocos2d::CCString::createWithFormat("%.02f", v20); /*0x129a11*/
        *(float *)(a1 + 568) = cocos2d::CCString::floatValue(v22); /*0x129a27*/
        sub_127CE0(a1 - 544); /*0x129a30*/
        sub_83840(*(_QWORD *)(a1 + 496)); /*0x129a60*/
        break; /*0x129a60*/
      case 8u: /*0x129795*/
      case 9u: /*0x129795*/
      case 0xAu: /*0x129795*/
        v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL, -4096); /*0x129a9e*/
        *(_OWORD *)String = 0; /*0x129aa7*/
        v24 = -1; /*0x129aab*/
        v48 = 0; /*0x129ab2*/
        do /*0x129aba*/
          ++v24; /*0x129ab7*/
        while ( *(_BYTE *)(v23 + v24) ); /*0x129aba*/
        sub_3C230(String); /*0x129aca*/
        v25 = (const char *)String; /*0x129ad4*/
        if ( *((_QWORD *)&v48 + 1) > 0xFu ) /*0x129ad8*/
          v25 = String[0]; /*0x129ad8*/
        v26 = atoi(v25); /*0x129ae7*/
        if ( *((_QWORD *)&v48 + 1) > 0xFu ) /*0x129aee*/
        {
          v27 = String[0]; /*0x129af0*/
          if ( (unsigned __int64)(*((_QWORD *)&v48 + 1) + 1LL) >= 0x1000 ) /*0x129b01*/
          {
            v27 = (char *)*((_QWORD *)String[0] - 1); /*0x129b03*/
            if ( (unsigned __int64)(String[0] - v27 - 8) > 0x1F ) /*0x129b16*/
              invoke_watson(0, 0, 0, 0, 0); /*0x129b27*/
          }
          j_j_free(v27); /*0x129b31*/
        }
        v28 = -1; /*0x129b3c*/
        if ( v26 < 0 ) /*0x129b44*/
          v26 = 0; /*0x129b44*/
        if ( v26 < 255 ) /*0x129b4b*/
          v28 = v26; /*0x129b4b*/
        v29 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) - 8; /*0x129b52*/
        if ( v29 ) /*0x129b55*/
        {
          v30 = v29 - 1; /*0x129b57*/
          if ( v30 ) /*0x129b5a*/
          {
            if ( v30 == 1 ) /*0x129b5f*/
              *(_BYTE *)(a1 + 554) = v28; /*0x129b61*/
          }
          else
          {
            *(_BYTE *)(a1 + 553) = v28; /*0x129b6a*/
          }
        }
        else
        {
          *(_BYTE *)(a1 + 552) = v28; /*0x129b73*/
        }
        v31 = *(_QWORD *)(a1 + 472); /*0x129b86*/
        v45 = *(_WORD *)(a1 + 552); /*0x129b8d*/
        v46 = *(_BYTE *)(a1 + 554); /*0x129b99*/
        (*(void (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v31 + 1128LL))(v31, &v45); /*0x129b9f*/
        break; /*0x129ba5*/
      case 0xBu: /*0x129795*/
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 728) + 600LL) + 600LL; /*0x129bb8*/
        v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 8LL))(v32, -4096); /*0x129bc2*/
        v34 = -1; /*0x129bcb*/
        *(_OWORD *)String = 0; /*0x129bd2*/
        v35 = -1; /*0x129bd6*/
        v48 = 0; /*0x129bd9*/
        do /*0x129be3*/
          ++v35; /*0x129be0*/
        while ( *(_BYTE *)(v33 + v35) ); /*0x129be3*/
        sub_3C230(String); /*0x129bf0*/
        v36 = String; /*0x129bf9*/
        v37 = String[0]; /*0x129bfd*/
        v38 = -1; /*0x129c05*/
        if ( *((_QWORD *)&v48 + 1) > 0xFu ) /*0x129c08*/
          v36 = (char **)String[0]; /*0x129c08*/
        do /*0x129c13*/
          ++v38; /*0x129c10*/
        while ( *((_BYTE *)v36 + v38) ); /*0x129c13*/
        if ( *((_QWORD *)&v48 + 1) > 0xFu ) /*0x129c1d*/
        {
          if ( (unsigned __int64)(*((_QWORD *)&v48 + 1) + 1LL) >= 0x1000 ) /*0x129c2c*/
          {
            v37 = (char *)*((_QWORD *)String[0] - 1); /*0x129c2e*/
            if ( (unsigned __int64)(String[0] - v37 - 8) > 0x1F ) /*0x129c41*/
              invoke_watson(0, 0, 0, 0, 0); /*0x129c52*/
          }
          j_j_free(v37); /*0x129c59*/
        }
        if ( v38 == 6 ) /*0x129c62*/
        {
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 728) + 600LL) + 600LL; /*0x129c76*/
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39); /*0x129c80*/
          v48 = 0u; /*0x129c86*/
          *(_OWORD *)String = 0; /*0x129c8a*/
          do /*0x129c95*/
            ++v34; /*0x129c92*/
          while ( *(_BYTE *)(v40 + v34) ); /*0x129c95*/
          sub_3C230(String); /*0x129ca5*/
          v41 = CreateMenuItem_create(&v45, String); /*0x129cb2*/
          v42 = *(_WORD *)v41; /*0x129cb7*/
          v43 = *(_BYTE *)(v41 + 2); /*0x129cba*/
          *(_WORD *)(a1 + 552) = *(_WORD *)v41; /*0x129cbe*/
          *(_BYTE *)(a1 + 554) = v43; /*0x129cc6*/
          v45 = v42; /*0x129ccd*/
          v44 = *(_QWORD *)(a1 + 472); /*0x129cd1*/
          v46 = v43; /*0x129cd8*/
          (*(void (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v44 + 1128LL))(v44, &v45); /*0x129ce2*/
        }
        break; /*0x129ce2*/
      default:
        return;
    }
  }
}

// [2/29] Address: 0x38eaf0
// Method: CreateParticlePopup::valueForParticleValue
__int64 __fastcall CreateParticlePopup_valueForParticleValue(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 ) /*0x38eb14*/
  {
    case 1: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38eb1c*/
      *(_QWORD *)(a1 + 16) = 4; /*0x38eb1f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38eb27*/
      strcpy((char *)a1, "Fire"); /*0x38eb2f*/
      result = a1; /*0x38eb19*/
      break; /*0x38eb3d*/
    case 2: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38eb41*/
      *(_QWORD *)(a1 + 16) = 3; /*0x38eb44*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38eb4c*/
      *(_WORD *)a1 = 25417; /*0x38eb5a*/
      *(_BYTE *)(a1 + 2) = 101; /*0x38eb64*/
      *(_BYTE *)(a1 + 3) = 0; /*0x38eb6a*/
      result = a1; /*0x38eb67*/
      break; /*0x38eb72*/
    case 3: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38eb76*/
      *(_QWORD *)(a1 + 16) = 6; /*0x38eb79*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38eb81*/
      strcpy((char *)a1, "Poison"); /*0x38eb8f*/
      result = a1; /*0x38eb9c*/
      break; /*0x38eba7*/
    case 4: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38ebab*/
      *(_QWORD *)(a1 + 16) = 6; /*0x38ebae*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38ebb6*/
      strcpy((char *)a1, "Shadow"); /*0x38ebc4*/
      result = a1; /*0x38ebd1*/
      break; /*0x38ebdc*/
    case 5: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38ebe3*/
      *(_QWORD *)(a1 + 16) = 4; /*0x38ebe6*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38ebee*/
      strcpy((char *)a1, "Lava"); /*0x38ebf6*/
      result = a1; /*0x38ebe0*/
      break; /*0x38ec04*/
    case 6: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38ec08*/
      *(_QWORD *)(a1 + 16) = 5; /*0x38ec0b*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38ec13*/
      *(_DWORD *)a1 = 1953653061; /*0x38ec21*/
      *(_BYTE *)(a1 + 4) = 104; /*0x38ec2a*/
      *(_BYTE *)(a1 + 5) = 0; /*0x38ec30*/
      result = a1; /*0x38ec2d*/
      break; /*0x38ec38*/
    case 7: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38ec3c*/
      *(_QWORD *)(a1 + 16) = 5; /*0x38ec3f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38ec47*/
      *(_DWORD *)a1 = 1869573186; /*0x38ec55*/
      *(_BYTE *)(a1 + 4) = 100; /*0x38ec5e*/
      *(_BYTE *)(a1 + 5) = 0; /*0x38ec64*/
      result = a1; /*0x38ec61*/
      break; /*0x38ec6c*/
    case 8: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38ec70*/
      *(_QWORD *)(a1 + 16) = 5; /*0x38ec73*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38ec7b*/
      *(_DWORD *)a1 = 1635018061; /*0x38ec89*/
      *(_BYTE *)(a1 + 4) = 108; /*0x38ec92*/
      *(_BYTE *)(a1 + 5) = 0; /*0x38ec98*/
      result = a1; /*0x38ec95*/
      break; /*0x38eca0*/
    case 9: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38eca4*/
      *(_QWORD *)(a1 + 16) = 5; /*0x38eca7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38ecaf*/
      *(_DWORD *)a1 = 1751607628; /*0x38ecbd*/
      *(_BYTE *)(a1 + 4) = 116; /*0x38ecc6*/
      *(_BYTE *)(a1 + 5) = 0; /*0x38eccc*/
      result = a1; /*0x38ecc9*/
      break; /*0x38ecd4*/
    case 10: /*0x38eb14*/
      *(_OWORD *)a1 = 0; /*0x38ecd8*/
      *(_QWORD *)(a1 + 16) = 5; /*0x38ecdb*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38ece3*/
      *(_DWORD *)a1 = 1819635539; /*0x38ecf1*/
      *(_BYTE *)(a1 + 4) = 115; /*0x38ecfa*/
      *(_BYTE *)(a1 + 5) = 0; /*0x38ed00*/
      result = a1; /*0x38ecfd*/
      break; /*0x38ed08*/
    default:
      *(_OWORD *)a1 = 0; /*0x38ed0f*/
      *(_QWORD *)(a1 + 16) = 2; /*0x38ed12*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38ed1a*/
      strcpy((char *)a1, "NA"); /*0x38ed22*/
      result = a1; /*0x38ed0c*/
      break; /*0x38ed0c*/
  }
  return result; /*0x38eb39*/
}

// [3/29] Address: 0x5bc270
// Method: CreateParticlePopup::~CreateParticlePopup
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreateParticlePopup__dtor_CreateParticlePopup(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  cocos2d::CCObject *v12; // rcx

  *Block = &CreateParticlePopup::`vftable'; /*0x5bc286*/
  Block[40] = &CreateParticlePopup::`vftable'; /*0x5bc290*/
  Block[41] = &CreateParticlePopup::`vftable'; /*0x5bc29e*/
  Block[42] = &CreateParticlePopup::`vftable'; /*0x5bc2ac*/
  Block[43] = &CreateParticlePopup::`vftable'; /*0x5bc2ba*/
  Block[44] = &CreateParticlePopup::`vftable'; /*0x5bc2c8*/
  Block[51] = &CreateParticlePopup::`vftable'; /*0x5bc2d6*/
  Block[54] = &CreateParticlePopup::`vftable'; /*0x5bc2e4*/
  Block[68] = &CreateParticlePopup::`vftable'; /*0x5bc2f2*/
  Block[83] = &CreateParticlePopup::`vftable'; /*0x5bc300*/
  Block[84] = &CreateParticlePopup::`vftable'; /*0x5bc30e*/
  cocos2d::CCNode::removeAllChildrenWithCleanup((cocos2d::CCNode *)Block, 1); /*0x5bc317*/
  v4 = (cocos2d::CCObject *)Block[85]; /*0x5bc31d*/
  if ( v4 ) /*0x5bc327*/
    cocos2d::CCObject::release(v4); /*0x5bc329*/
  v5 = (cocos2d::CCObject *)Block[93]; /*0x5bc32f*/
  if ( v5 ) /*0x5bc339*/
    cocos2d::CCObject::release(v5); /*0x5bc33b*/
  v6 = (cocos2d::CCObject *)Block[94]; /*0x5bc341*/
  if ( v6 ) /*0x5bc34b*/
    cocos2d::CCObject::release(v6); /*0x5bc34d*/
  v7 = (cocos2d::CCObject *)Block[95]; /*0x5bc353*/
  if ( v7 ) /*0x5bc35d*/
    cocos2d::CCObject::release(v7); /*0x5bc35f*/
  v8 = (cocos2d::CCObject *)Block[96]; /*0x5bc365*/
  if ( v8 ) /*0x5bc36f*/
    cocos2d::CCObject::release(v8); /*0x5bc371*/
  v9 = (cocos2d::CCObject *)Block[120]; /*0x5bc377*/
  if ( v9 ) /*0x5bc381*/
    cocos2d::CCObject::release(v9); /*0x5bc383*/
  v10 = (cocos2d::CCObject *)Block[121]; /*0x5bc389*/
  if ( v10 ) /*0x5bc393*/
    cocos2d::CCObject::release(v10); /*0x5bc395*/
  v11 = (cocos2d::CCObject *)Block[90]; /*0x5bc39b*/
  if ( v11 ) /*0x5bc3a5*/
    cocos2d::CCObject::release(v11); /*0x5bc3a7*/
  v12 = (cocos2d::CCObject *)Block[87]; /*0x5bc3ad*/
  if ( v12 ) /*0x5bc3b7*/
    cocos2d::CCObject::release(v12); /*0x5bc3b9*/
  sub_3DA90(Block + 112); /*0x5bc3c6*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x5bc3ce*/
  if ( (a2 & 1) != 0 ) /*0x5bc3d8*/
    j_j_free(Block); /*0x5bc3e2*/
  return Block; /*0x5bc3ea*/
}

// [4/29] Address: 0x5bc440
// Method: CreateParticlePopup::create
// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreateParticlePopup_create(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h]

  v10 = a3; /*0x5bc463*/
  v6 = operator new(0x3F0u); /*0x5bc472*/
  FLAlertLayer_FLAlertLayer(v6); /*0x5bc47d*/
  *v6 = &CreateParticlePopup::`vftable'; /*0x5bc48a*/
  v6[40] = &CreateParticlePopup::`vftable'; /*0x5bc494*/
  v6[41] = &CreateParticlePopup::`vftable'; /*0x5bc4a2*/
  v6[42] = &CreateParticlePopup::`vftable'; /*0x5bc4b0*/
  v6[43] = &CreateParticlePopup::`vftable'; /*0x5bc4be*/
  v6[44] = &CreateParticlePopup::`vftable'; /*0x5bc4cc*/
  v6[51] = &CreateParticlePopup::`vftable'; /*0x5bc4da*/
  v6[54] = &CreateParticlePopup::`vftable'; /*0x5bc4e8*/
  v6[68] = &CreateParticlePopup::`vftable'; /*0x5bc4f6*/
  v6[83] = &CreateParticlePopup::`vftable'; /*0x5bc504*/
  v6[84] = &CreateParticlePopup::`vftable'; /*0x5bc512*/
  v6[85] = 0; /*0x5bc51c*/
  v6[86] = 0; /*0x5bc523*/
  v6[87] = 0; /*0x5bc52a*/
  *((_BYTE *)v6 + 704) = 0; /*0x5bc531*/
  v6[89] = 0; /*0x5bc538*/
  v6[90] = 0; /*0x5bc53f*/
  *((_DWORD *)v6 + 182) = -1; /*0x5bc546*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)((char *)v6 + 732)); /*0x5bc557*/
  v6[93] = 0; /*0x5bc55d*/
  v6[94] = 0; /*0x5bc564*/
  v6[95] = 0; /*0x5bc56b*/
  v6[97] = 0; /*0x5bc572*/
  v6[100] = 0; /*0x5bc579*/
  v6[101] = 0; /*0x5bc580*/
  v6[102] = 0; /*0x5bc587*/
  v6[103] = 0; /*0x5bc58e*/
  v6[104] = 0; /*0x5bc595*/
  v6[105] = 0; /*0x5bc59c*/
  v6[106] = 0; /*0x5bc5a3*/
  v6[107] = 0; /*0x5bc5aa*/
  v6[108] = 0; /*0x5bc5b1*/
  v6[112] = 0; /*0x5bc5b8*/
  v6[113] = 0; /*0x5bc5bf*/
  v6[114] = 0; /*0x5bc5c6*/
  v6[115] = 0; /*0x5bc5cd*/
  *((_DWORD *)v6 + 232) = 0; /*0x5bc5d4*/
  *((_BYTE *)v6 + 976) = 0; /*0x5bc5db*/
  *((_DWORD *)v6 + 245) = 0; /*0x5bc5e2*/
  v6[123] = 0; /*0x5bc5e9*/
  v6[124] = 0; /*0x5bc5f0*/
  *((_DWORD *)v6 + 250) = 0; /*0x5bc5f7*/
  *((_DWORD *)v6 + 251) = -1082130432; /*0x5bc5fe*/
  v7 = sub_3E4F0(v9, a3); /*0x5bc610*/
  if ( (unsigned __int8)sub_5BC670(v6, a1, a2, v7, v6) ) /*0x5bc621*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x5bc62d*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0x5bc63d*/
    v6 = 0; /*0x5bc640*/
  }
  sub_3C310(a3); /*0x5bc646*/
  return v6; /*0x5bc64e*/
}

// [6/29] Address: 0x5c1ed0
// Method: CreateParticlePopup::onDynamicColor
__int64 __fastcall CreateParticlePopup_onDynamicColor(__int64 a1)
{
  char v1; // al
  char v3; // cl
  __int64 v4; // rax
  __int64 v5; // rax
  cocos2d::CCArray *v6; // rcx
  unsigned int v7; // esi
  struct cocos2d::CCObject *v8; // rdi
  struct cocos2d::CCObject *v9; // rax

  v1 = *(_BYTE *)(a1 + 1000); /*0x5c1ed6*/
  v3 = v1 == 0; /*0x5c1ee2*/
  *(_BYTE *)(a1 + 1000) = v1 == 0; /*0x5c1ee5*/
  if ( !v1 ) /*0x5c1eed*/
  {
    v4 = *(_QWORD *)(a1 + 712); /*0x5c1eef*/
    if ( *(_BYTE *)(v4 + 748) ) /*0x5c1ef6*/
    {
      *(_BYTE *)(v4 + 748) = 0; /*0x5c1eff*/
      v3 = *(_BYTE *)(a1 + 1000); /*0x5c1f06*/
    }
  }
  v5 = *(_QWORD *)(a1 + 680); /*0x5c1f0d*/
  if ( v5 ) /*0x5c1f17*/
  {
    *(_BYTE *)(v5 + 817) = v3; /*0x5c1f19*/
  }
  else
  {
    v6 = *(cocos2d::CCArray **)(a1 + 688); /*0x5c1f24*/
    if ( v6 ) /*0x5c1f2e*/
    {
      v7 = 0; /*0x5c1f39*/
      if ( cocos2d::CCArray::count(v6) ) /*0x5c1f3b*/
      {
        do /*0x5c1fa8*/
        {
          v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v7); /*0x5c1f68*/
          v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 696), v7); /*0x5c1f6b*/
          *((_BYTE *)v8 + 817) = *(_BYTE *)(a1 + 1000); /*0x5c1f78*/
          if ( *(_BYTE *)(a1 + 1000) && *((_BYTE *)v9 + 748) ) /*0x5c1f87*/
            *((_BYTE *)v9 + 748) = 0; /*0x5c1f90*/
          ++v7; /*0x5c1f9e*/
        }
        while ( v7 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5c1fa8*/
      }
    }
  }
  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 864), *(unsigned __int8 *)(*(_QWORD *)(a1 + 712) + 748LL)); /*0x5c1fc9*/
  return CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 856), *(unsigned __int8 *)(a1 + 1000)); /*0x5c1fdc*/
}

// [7/29] Address: 0x5c1ff0
// Method: CreateParticlePopup::onUniformColor
__int64 __fastcall CreateParticlePopup_onUniformColor(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  cocos2d::CCArray *v4; // rcx
  struct cocos2d::CCObject *v5; // rax

  v1 = 0; /*0x5c2001*/
  sub_5C4830(a1, *(_BYTE *)(*(_QWORD *)(a1 + 712) + 748LL) == 0, 56, 0); /*0x5c2021*/
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 712) + 748LL) ) /*0x5c202d*/
  {
    v3 = *(_QWORD *)(a1 + 680); /*0x5c2036*/
    if ( v3 ) /*0x5c2040*/
    {
      *(_BYTE *)(v3 + 817) = 0; /*0x5c2042*/
    }
    else
    {
      v4 = *(cocos2d::CCArray **)(a1 + 688); /*0x5c204b*/
      if ( v4 && cocos2d::CCArray::count(v4) ) /*0x5c2057*/
      {
        do /*0x5c2088*/
        {
          v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v1++); /*0x5c206a*/
          *((_BYTE *)v5 + 817) = 0; /*0x5c2072*/
        }
        while ( v1 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5c2088*/
      }
    }
    *(_BYTE *)(a1 + 1000) = 0; /*0x5c208a*/
  }
  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 864), *(unsigned __int8 *)(*(_QWORD *)(a1 + 712) + 748LL)); /*0x5c20a6*/
  return CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 856), *(unsigned __int8 *)(a1 + 1000)); /*0x5c20b9*/
}

// [8/29] Address: 0x5c20d0
// Method: CreateParticlePopup::onSelectColor
__int64 __fastcall CreateParticlePopup_onSelectColor(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int16 *v8; // rax
  int v9; // ebx
  __m128 *v10; // rax
  __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int16 v18; // [rsp+40h] [rbp+8h]
  char v19; // [rsp+42h] [rbp+Ah]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c20ee*/
  switch ( v4 ) /*0x5c20f3*/
  {
    case 0: /*0x5c20f3*/
      v8 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 792) + 408LL) + 8LL))(*(_QWORD *)(a1 + 792) + 408LL); /*0x5c2106*/
      v6 = *v8; /*0x5c2109*/
      LOBYTE(v9) = *((_BYTE *)v8 + 2); /*0x5c210c*/
      v18 = *v8; /*0x5c2110*/
      goto LABEL_9; /*0x5c2115*/
    case 1: /*0x5c20f3*/
      v10 = (__m128 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 1344LL))(*(_QWORD *)(a1 + 712)); /*0x5c2126*/
LABEL_5:
      LOBYTE(v18) = (int)(float)(COERCE_FLOAT(*v10) * 255.0); /*0x5c212c*/
      HIBYTE(v18) = (int)(float)(_mm_shuffle_ps(*v10, *v10, 85).m128_f32[0] * 255.0); /*0x5c215d*/
      v9 = (int)(float)(_mm_shuffle_ps(*v10, *v10, 170).m128_f32[0] * 255.0); /*0x5c2161*/
      goto LABEL_9; /*0x5c2165*/
    case 2: /*0x5c20f3*/
      v10 = (__m128 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 1376LL))(*(_QWORD *)(a1 + 712)); /*0x5c2176*/
      goto LABEL_5; /*0x5c217c*/
  }
  LOBYTE(v9) = v19; /*0x5c217e*/
LABEL_9:
  v11 = ColorAction_create(v6, v5, v7); /*0x5c2183*/
  *(_WORD *)(v11 + 72) = v18; /*0x5c2195*/
  *(_BYTE *)(v11 + 74) = v9; /*0x5c219b*/
  *(_DWORD *)(v11 + 92) = 0; /*0x5c219e*/
  v12 = ColorSelectPopup_create(0, 0, v11); /*0x5c21aa*/
  v13 = *(_QWORD *)v12; /*0x5c21ad*/
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c21b7*/
  (*(void (__fastcall **)(char *, _QWORD))(v13 + 64))(v12, v14); /*0x5c21be*/
  v15 = *(_QWORD *)v12; /*0x5c21c1*/
  v16 = a1 + 664; /*0x5c21c4*/
  if ( !a1 ) /*0x5c21ce*/
    v16 = 0; /*0x5c21ce*/
  *((_QWORD *)v12 + 138) = v16; /*0x5c21d2*/
  return (*(__int64 (__fastcall **)(char *))(v15 + 1064))(v12);
}

// [9/29] Address: 0x5c2200
// Method: CreateParticlePopup::onDuplicateColor
__int64 __fastcall CreateParticlePopup_onDuplicateColor(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __m128 v5; // xmm2
  __int64 v6; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+31h] [rbp+9h]
  char v10; // [rsp+32h] [rbp+Ah]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 1344LL))(*(_QWORD *)(a1 + 712)); /*0x5c2213*/
  sub_5C4830(a1, v2, 34, 0); /*0x5c2229*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 1344LL))(*(_QWORD *)(a1 + 712)); /*0x5c2238*/
  sub_5C4830(a1, v3, 36, 0); /*0x5c224f*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 1344LL))(*(_QWORD *)(a1 + 712)); /*0x5c225e*/
  sub_5C4830(a1, v4, 38, 0); /*0x5c2275*/
  sub_5C5730(a1, 34); /*0x5c2282*/
  sub_5C5730(a1, 36); /*0x5c228f*/
  sub_5C5730(a1, 38); /*0x5c229c*/
  sub_5C54A0(a1, 34); /*0x5c22a9*/
  sub_5C54A0(a1, 36); /*0x5c22b6*/
  sub_5C54A0(a1, 38); /*0x5c22c3*/
  v5 = *(__m128 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 1344LL))(*(_QWORD *)(a1 + 712)); /*0x5c22e0*/
  v10 = (int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] * 255.0); /*0x5c231a*/
  v9 = (int)(float)(_mm_shuffle_ps(v5, v5, 85).m128_f32[0] * 255.0); /*0x5c2334*/
  v6 = *(_QWORD *)(a1 + 952); /*0x5c2344*/
  v8 = (int)(float)(v5.m128_f32[0] * 255.0); /*0x5c234b*/
  return (**(__int64 (__fastcall ***)(__int64, char *))(v6 + 320))(v6 + 320, &v8); /*0x5c236a*/
}

// [10/29] Address: 0x5c25c0
// Method: CreateParticlePopup::onPasteSettings
// Hidden C++ exception states: #wind=2
void __fastcall CreateParticlePopup_onPasteSettings(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int *v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 *i; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdx
  size_t v13[7]; // [rsp+20h] [rbp-38h] BYREF
  void *v14; // [rsp+70h] [rbp+18h]

  v2 = qword_905FD0; /*0x5c25d5*/
  if ( !qword_905FD0 ) /*0x5c25df*/
  {
    v14 = operator new(0x6E8u); /*0x5c25eb*/
    qword_905FD0 = sub_2723A0(v14); /*0x5c25f9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5c260a*/
    v2 = qword_905FD0; /*0x5c260c*/
  }
  v3 = *(_QWORD *)(v2 + 568); /*0x5c2613*/
  if ( v3 ) /*0x5c261d*/
  {
    v4 = a1[86]; /*0x5c2623*/
    v5 = a1[85]; /*0x5c262a*/
    v6 = *(_QWORD *)(v3 + 14848); /*0x5c2631*/
    if ( v6 ) /*0x5c263b*/
    {
      if ( v5 ) /*0x5c2644*/
      {
        sub_3E4F0(v13, v6 + 1464); /*0x5c2652*/
        ParticleGameObject_setParticleString(v5, v13); /*0x5c265f*/
        *(_BYTE *)(v5 + 1800) = *(_BYTE *)(*(_QWORD *)(v3 + 14848) + 1800LL); /*0x5c2672*/
        *(_BYTE *)(v5 + 1433) = *(_BYTE *)(*(_QWORD *)(v3 + 14848) + 1433LL); /*0x5c2686*/
        ParticleGameObject_updateParticle(v5); /*0x5c268f*/
      }
      else if ( v4 ) /*0x5c269c*/
      {
        v7 = *(unsigned int **)(v4 + 56); /*0x5c26a2*/
        v8 = *v7; /*0x5c26a6*/
        if ( (_DWORD)v8 ) /*0x5c26aa*/
        {
          v9 = (__int64 *)*((_QWORD *)v7 + 2); /*0x5c26ac*/
          for ( i = &v9[v8 - 1]; v9 <= i; ++v9 ) /*0x5c26bb*/
          {
            v11 = *v9; /*0x5c26c0*/
            if ( !*v9 ) /*0x5c26c0*/
              break; /*0x5c26c6*/
            sub_3E4F0(v13, *(_QWORD *)(v3 + 14848) + 1464LL); /*0x5c26db*/
            ParticleGameObject_setParticleString(v11, v13); /*0x5c26e8*/
            *(_BYTE *)(v11 + 1800) = *(_BYTE *)(*(_QWORD *)(v3 + 14848) + 1800LL); /*0x5c26fb*/
            *(_BYTE *)(v11 + 1433) = *(_BYTE *)(*(_QWORD *)(v3 + 14848) + 1433LL); /*0x5c270f*/
            ParticleGameObject_updateParticle(v11); /*0x5c2718*/
          }
        }
      }
    }
    CreateParticlePopup_willClose(a1); /*0x5c2729*/
    LOBYTE(v12) = 1; /*0x5c2731*/
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v12); /*0x5c2736*/
  }
}

// [11/29] Address: 0x5c2750
// Method: CreateParticlePopup::colorSelectClosed
_OWORD *__fastcall CreateParticlePopup_colorSelectClosed(_QWORD *a1, __int64 a2)
{
  _OWORD *result; // rax
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, __int16 *); // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int16 v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+4Ah] [rbp+12h]
  __int16 v13; // [rsp+50h] [rbp+18h] BYREF
  char v14; // [rsp+52h] [rbp+1Ah]

  result = (_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c2766*/
  v11 = *(_WORD *)(a2 + 1096); /*0x5c2771*/
  v12 = *(_BYTE *)(a2 + 1098); /*0x5c277f*/
  if ( (_DWORD)result ) /*0x5c2786*/
  {
    if ( (_DWORD)result == 1 ) /*0x5c2809*/
    {
      v13 = *(_WORD *)(a2 + 1096); /*0x5c2835*/
      sub_5C4830(a1 - 83, v5, 26, 0); /*0x5c284b*/
      sub_5C4830(a1 - 83, v7, 28, 0); /*0x5c286c*/
      sub_5C4830(a1 - 83, v8, 30, 0); /*0x5c2888*/
      sub_5C5730(a1 - 83, 26); /*0x5c2895*/
      sub_5C5730(a1 - 83, 28); /*0x5c28a2*/
      sub_5C5730(a1 - 83, 30); /*0x5c28af*/
      sub_5C54A0(a1 - 83, 26); /*0x5c28bc*/
      sub_5C54A0(a1 - 83, 28); /*0x5c28c9*/
      sub_5C54A0(a1 - 83, 30); /*0x5c28d6*/
      (**(void (__fastcall ***)(__int64, __int16 *))(a1[35] + 320LL))(a1[35] + 320LL, &v11); /*0x5c28f1*/
      *(_OWORD *)(a1[6] + 716LL) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[6] + 1344LL))(a1[6]); /*0x5c2907*/
      result = (_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[6] + 1376LL))(a1[6]); /*0x5c2915*/
      *(_OWORD *)(a1[6] + 732LL) = *result; /*0x5c2922*/
    }
    else if ( (_DWORD)result == 2 ) /*0x5c2931*/
    {
      v13 = *(_WORD *)(a2 + 1096); /*0x5c295d*/
      sub_5C4830(a1 - 83, v5, 34, 0); /*0x5c2973*/
      sub_5C4830(a1 - 83, v9, 36, 0); /*0x5c2994*/
      sub_5C4830(a1 - 83, v10, 38, 0); /*0x5c29b0*/
      sub_5C5730(a1 - 83, 34); /*0x5c29bd*/
      sub_5C5730(a1 - 83, 36); /*0x5c29ca*/
      sub_5C5730(a1 - 83, 38); /*0x5c29d7*/
      sub_5C54A0(a1 - 83, 34); /*0x5c29e4*/
      sub_5C54A0(a1 - 83, 36); /*0x5c29f1*/
      sub_5C54A0(a1 - 83, 38); /*0x5c29fe*/
      return (_OWORD *)(**(__int64 (__fastcall ***)(__int64, __int16 *))(a1[36] + 320LL))(a1[36] + 320LL, &v11); /*0x5c2a19*/
    }
  }
  else
  {
    (**(void (__fastcall ***)(__int64, __int16 *))(a1[16] + 408LL))(a1[16] + 408LL, &v11); /*0x5c279e*/
    (**(void (__fastcall ***)(__int64, __int16 *))(a1[34] + 320LL))(a1[34] + 320LL, &v11); /*0x5c27b6*/
    LOBYTE(v13) = -1 - v11; /*0x5c27c8*/
    v14 = -1 - v12; /*0x5c27d6*/
    v6 = (__int64 (__fastcall ***)(_QWORD, __int16 *))(a1[40] + 368LL); /*0x5c27e1*/
    HIBYTE(v13) = -1 - HIBYTE(v11); /*0x5c27e8*/
    return (_OWORD *)(**v6)(v6, &v13); /*0x5c27ef*/
  }
  return result; /*0x5c27f1*/
}

// [12/29] Address: 0x5c2a30
// Method: CreateParticlePopup::onMode
__int64 __fastcall CreateParticlePopup_onMode(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rdi
  const char *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c2a4d*/
  v4 = "GJ_button_04.png"; /*0x5c2a52*/
  v5 = "GJ_button_04.png"; /*0x5c2a66*/
  if ( v3 == *(_DWORD *)(a1 + 828) ) /*0x5c2a69*/
    v3 = 0; /*0x5c2a69*/
  *(_DWORD *)(a1 + 828) = v3; /*0x5c2a6c*/
  *(_DWORD *)(*(_QWORD *)(a1 + 792) + 544LL) = v3; /*0x5c2a79*/
  if ( *(_DWORD *)(a1 + 828) == 1 ) /*0x5c2a8d*/
    v5 = "GJ_button_01.png"; /*0x5c2a8d*/
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 800) + 952LL))(*(_QWORD *)(a1 + 800)); /*0x5c2a94*/
  sub_41FC0(v6, v5); /*0x5c2aa0*/
  v7 = "GJ_button_04.png"; /*0x5c2aac*/
  if ( *(_DWORD *)(a1 + 828) == 2 ) /*0x5c2ab6*/
    v7 = "GJ_button_01.png"; /*0x5c2ab6*/
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 808) + 952LL))(*(_QWORD *)(a1 + 808)); /*0x5c2abd*/
  sub_41FC0(v8, v7); /*0x5c2ac9*/
  if ( *(_DWORD *)(a1 + 828) == 3 ) /*0x5c2adc*/
    v4 = "GJ_button_01.png"; /*0x5c2adc*/
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 816) + 952LL))(*(_QWORD *)(a1 + 816)); /*0x5c2ae3*/
  return sub_41FC0(v9, v4); /*0x5c2aef*/
}

// [13/29] Address: 0x5c30f0
// Method: CreateParticlePopup::update
void __fastcall CreateParticlePopup_update(__int64 a1, float a2)
{
  float v3; // xmm0_4
  cocos2d::CCParticleSystem *v4; // rsi
  __int64 v5; // r14
  void (__fastcall **v6)(__int64, const char *); // rbp
  float ParticleDrawCost; // xmm0_4
  void (__fastcall *v8)(cocos2d::CCParticleSystem *); // rbx
  double v9; // xmm6_8
  unsigned int v10; // edi
  unsigned int v11; // eax
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  double v14; // xmm0_8
  float v15; // xmm8_4
  float v16; // xmm7_4
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm7_4
  __int64 v22; // rbx
  double v23; // xmm0_8
  cocos2d::CCParticleSystem *v24; // rcx

  if ( *(_BYTE *)(a1 + 976) ) /*0x5c30fb*/
  {
    v3 = a2 + *(float *)(a1 + 980); /*0x5c311e*/
    *(float *)(a1 + 980) = v3; /*0x5c3126*/
    if ( v3 >= 0.1 ) /*0x5c313a*/
    {
      v4 = *(cocos2d::CCParticleSystem **)(a1 + 712); /*0x5c3148*/
      *(_DWORD *)(a1 + 980) = 0; /*0x5c314f*/
      v5 = *(_QWORD *)(a1 + 984); /*0x5c315d*/
      v6 = *(void (__fastcall ***)(__int64, const char *))(v5 + 360); /*0x5c3167*/
      ParticleDrawCost = cocos2d::CCParticleSystem::getParticleDrawCost(v4); /*0x5c316e*/
      v8 = *(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v4 + 904LL); /*0x5c318c*/
      v9 = (float)(ParticleDrawCost / 10.0); /*0x5c3193*/
      v10 = (*(__int64 (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v4 + 1488LL))(v4); /*0x5c319c*/
      v8(v4); /*0x5c319e*/
      v12 = cocos2d::CCString::createWithFormat("%i/%i\n%.0f", v11, v10, v9); /*0x5c31b4*/
      CString = cocos2d::CCString::getCString(v12); /*0x5c31bd*/
      (*v6)(v5 + 360, CString); /*0x5c31cd*/
    }
  }
  v14 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 912LL))(*(_QWORD *)(a1 + 712)); /*0x5c31ec*/
  v15 = *(float *)&v14; /*0x5c31f2*/
  if ( *(float *)&v14 >= 0.0 ) /*0x5c31fd*/
  {
    *(float *)(a1 + 824) = a2 + *(float *)(a1 + 824); /*0x5c320c*/
    v16 = *(float *)(a1 + 1004); /*0x5c3215*/
    if ( v16 < 0.0 ) /*0x5c3221*/
    {
      v17 = *(_QWORD *)(a1 + 712); /*0x5c3242*/
      v18 = 214013 * qword_906080 + 2531011; /*0x5c3249*/
      qword_906080 = v18; /*0x5c3250*/
      v19 = *(float *)(v17 + 544); /*0x5c3257*/
      v20 = *(float *)(v17 + 548); /*0x5c325f*/
      if ( (float)((float)((float)((float)((float)((float)((v18 >> 16) & 0x7FFF) / 32767.0) /*0x5c3291*/
                                         + (float)((float)((v18 >> 16) & 0x7FFF) / 32767.0))
                                 - 1.0)
                         * v20)
                 + v19) >= 0.0 )
      {
        qword_906080 = 214013 * v18 + 2531011; /*0x5c32a5*/
        v21 = (float)(((214013 * v18 + 2531011) >> 16) & 0x7FFF); /*0x5c32b9*/
        v16 = (float)((float)((float)((float)(v21 / 32767.0) + (float)(v21 / 32767.0)) - 1.0) * v20) + v19; /*0x5c32cc*/
      }
      else
      {
        v16 = 0.0; /*0x5c3293*/
      }
      *(float *)(a1 + 1004) = v16; /*0x5c32d0*/
    }
    v22 = *(_QWORD *)(a1 + 712); /*0x5c32d9*/
    v23 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v22 + 976LL))(v22); /*0x5c32ed*/
    if ( *(float *)(a1 + 824) > (float)((float)((float)((*(float (__fastcall **)(__int64))(*(_QWORD *)v22 + 960LL))(v22) /*0x5c331b*/
                                                      + *(float *)&v23)
                                              + v16)
                                      + v15) )
    {
      v24 = *(cocos2d::CCParticleSystem **)(a1 + 712); /*0x5c331d*/
      *(_DWORD *)(a1 + 824) = 0; /*0x5c3320*/
      *(_DWORD *)(a1 + 1004) = -1082130432; /*0x5c332b*/
      cocos2d::CCParticleSystem::resetSystem(v24); /*0x5c3336*/
    }
  }
}

// [14/29] Address: 0x5c3420
// Method: CreateParticlePopup::textChanged
void __fastcall CreateParticlePopup_textChanged(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  const char *v6; // rcx
  char *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  char *String[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h]

  v2 = a1 - 544; /*0x5c3440*/
  if ( !*(_BYTE *)(a1 + 160) ) /*0x5c3439*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5c3466*/
    *(_OWORD *)String = 0; /*0x5c346f*/
    v5 = -1; /*0x5c3474*/
    v12 = 0; /*0x5c347b*/
    do /*0x5c3484*/
      ++v5; /*0x5c3481*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x5c3484*/
    sub_3C230(String); /*0x5c3493*/
    v6 = (const char *)String; /*0x5c349e*/
    if ( *((_QWORD *)&v12 + 1) > 0xFu ) /*0x5c34a3*/
      v6 = String[0]; /*0x5c34a3*/
    atof(v6); /*0x5c34a9*/
    if ( *((_QWORD *)&v12 + 1) > 0xFu ) /*0x5c34bf*/
    {
      v7 = String[0]; /*0x5c34c1*/
      if ( (unsigned __int64)(*((_QWORD *)&v12 + 1) + 1LL) >= 0x1000 ) /*0x5c34d3*/
      {
        v7 = (char *)*((_QWORD *)String[0] - 1); /*0x5c34d5*/
        if ( (unsigned __int64)(String[0] - v7 - 8) > 0x1F ) /*0x5c34e8*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5c34fd*/
      }
      j_j_free(v7); /*0x5c3504*/
    }
    (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x5c350f*/
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x5c352c*/
    sub_5C4830(v2, v9, v8, 0); /*0x5c353b*/
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x5c3546*/
    sub_5C54A0(v2, v10); /*0x5c354e*/
  }
}

// [15/29] Address: 0x5c4640
// Method: CreateParticlePopup::maxSliderValueForType
double __fastcall CreateParticlePopup_maxSliderValueForType(__int64 a1, int a2)
{
  double result; // xmm0_8

  switch ( a2 ) /*0x5c4663*/
  {
    case 1: /*0x5c4663*/
    case 5: /*0x5c4663*/
      *(_QWORD *)&result = 1065353216; /*0x5c466e*/
      break; /*0x5c4676*/
    case 3: /*0x5c4663*/
      *(_QWORD *)&result = 1008981770; /*0x5c4665*/
      break; /*0x5c466d*/
    case 6: /*0x5c4663*/
      *(_QWORD *)&result = 3274964992LL; /*0x5c4677*/
      break; /*0x5c467f*/
    case 12: /*0x5c4663*/
    case 13: /*0x5c4663*/
      *(_QWORD *)&result = 3296329728LL; /*0x5c4680*/
      break; /*0x5c4688*/
    case 14: /*0x5c4663*/
    case 16: /*0x5c4663*/
      *(_QWORD *)&result = 3293052928LL; /*0x5c4689*/
      break; /*0x5c4691*/
    case 54: /*0x5c4663*/
      *(_QWORD *)&result = 3283353600LL; /*0x5c4692*/
      break; /*0x5c469a*/
    default:
      result = 0.0; /*0x5c469b*/
      break; /*0x5c469b*/
  }
  return result; /*0x5c466d*/
}

// [16/29] Address: 0x5c4710
// Method: CreateParticlePopup::minSliderValueForType
float __fastcall CreateParticlePopup_minSliderValueForType(__int64 a1, int a2)
{
  float result; // xmm0_4

  switch ( a2 ) /*0x5c4737*/
  {
    case 1: /*0x5c4737*/
    case 5: /*0x5c4737*/
      result = 200.0; /*0x5c474b*/
      break; /*0x5c4753*/
    case 2: /*0x5c4737*/
      result = 4.0; /*0x5c4739*/
      break; /*0x5c4741*/
    case 3: /*0x5c4737*/
    case 4: /*0x5c4737*/
      result = 2.0; /*0x5c4742*/
      break; /*0x5c474a*/
    case 6: /*0x5c4737*/
    case 7: /*0x5c4737*/
      result = 180.0; /*0x5c4754*/
      break; /*0x5c475c*/
    case 8: /*0x5c4737*/
    case 9: /*0x5c4737*/
      result = 500.0; /*0x5c475d*/
      break; /*0x5c4765*/
    case 10: /*0x5c4737*/
    case 11: /*0x5c4737*/
    case 50: /*0x5c4737*/
    case 52: /*0x5c4737*/
      result = 100.0; /*0x5c4781*/
      break; /*0x5c4789*/
    case 12: /*0x5c4737*/
    case 13: /*0x5c4737*/
      result = 1200.0; /*0x5c4766*/
      break; /*0x5c476e*/
    case 14: /*0x5c4737*/
    case 16: /*0x5c4737*/
      result = 800.0; /*0x5c476f*/
      break; /*0x5c4777*/
    case 15: /*0x5c4737*/
    case 17: /*0x5c4737*/
      result = 600.0; /*0x5c4778*/
      break; /*0x5c4780*/
    case 18: /*0x5c4737*/
    case 19: /*0x5c4737*/
    case 20: /*0x5c4737*/
    case 21: /*0x5c4737*/
    case 51: /*0x5c4737*/
    case 53: /*0x5c4737*/
      result = 50.0; /*0x5c478a*/
      break; /*0x5c4792*/
    case 22: /*0x5c4737*/
    case 23: /*0x5c4737*/
    case 24: /*0x5c4737*/
    case 25: /*0x5c4737*/
    case 54: /*0x5c4737*/
    case 55: /*0x5c4737*/
      result = 360.0; /*0x5c4793*/
      break; /*0x5c479b*/
    case 46: /*0x5c4737*/
    case 47: /*0x5c4737*/
    case 69: /*0x5c4737*/
    case 70: /*0x5c4737*/
    case 71: /*0x5c4737*/
    case 72: /*0x5c4737*/
      result = 10.0; /*0x5c479c*/
      break; /*0x5c47a4*/
    default:
      result = 1.0; /*0x5c47a5*/
      break; /*0x5c47a5*/
  }
  return result; /*0x5c4741*/
}

// [17/29] Address: 0x5c5540
// Method: CreateParticlePopup::sliderBegan
__int64 __fastcall CreateParticlePopup_sliderBegan(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c554f*/
  switch ( v3 ) /*0x5c5575*/
  {
    case 6: /*0x5c5575*/
    case 7: /*0x5c5575*/
    case 8: /*0x5c5575*/
    case 9: /*0x5c5575*/
      result = *(_QWORD *)(a1 + 120); /*0x5c559f*/
      *(_DWORD *)(result + 548) = 3; /*0x5c55a3*/
      break; /*0x5c55a3*/
    case 10: /*0x5c5575*/
    case 11: /*0x5c5575*/
    case 50: /*0x5c5575*/
    case 52: /*0x5c5575*/
      result = *(_QWORD *)(a1 + 120); /*0x5c5577*/
      *(_DWORD *)(result + 548) = 1; /*0x5c557b*/
      break; /*0x5c558a*/
    case 12: /*0x5c5575*/
    case 13: /*0x5c5575*/
      result = *(_QWORD *)(a1 + 120); /*0x5c558b*/
      *(_DWORD *)(result + 548) = 2; /*0x5c558f*/
      break; /*0x5c559e*/
    default:
      result = (unsigned int)(v3 - 6); /*0xf1c0000000000004*/
      break; /*0xf1c0000000000004*/
  }
  return result; /*0x5c5585*/
}

// [18/29] Address: 0x5c5600
// Method: CreateParticlePopup::sliderEnded
__int64 __fastcall CreateParticlePopup_sliderEnded(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 120); /*0x5c5600*/
  *(_DWORD *)(result + 548) = 0; /*0x5c5604*/
  return result; /*0x5c560e*/
}

// [19/29] Address: 0x5c5610
// Method: CreateParticlePopup::sliderChanged
__int64 __fastcall CreateParticlePopup_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm6_4
  unsigned int v5; // ebx
  __int64 v6; // rcx
  double ParticlePopup_maxSliderValueForType; // xmm0_8
  __int64 v8; // rcx
  float v9; // xmm0_4
  __int64 v10; // rcx
  __int64 v11; // rdx

  Value = SliderThumb_getValue(a2); /*0x5c5633*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c563b*/
  ParticlePopup_maxSliderValueForType = CreateParticlePopup_maxSliderValueForType(v6, v5); /*0x5c563d*/
  v9 = (float)((float)(CreateParticlePopup_minSliderValueForType(v8, v5) - *(float *)&ParticlePopup_maxSliderValueForType) /*0x5c5656*/
             * Value)
     + *(float *)&ParticlePopup_maxSliderValueForType;
  if ( (unsigned __int8)CreateParticlePopup_particleValueIsInt(v10, v5) ) /*0x5c565a*/
    roundf(v9); /*0x5c5663*/
  else
    roundf(v9 * 100.0); /*0x5c5673*/
  sub_5C4830(a1, v11, v5, 0); /*0x5c568d*/
  sub_5C54A0(a1, v5); /*0x5c5697*/
  return sub_5C5730(a1, v5); /*0x5c56a1*/
}

// [20/29] Address: 0x5c56c0
// Method: CreateParticlePopup::particleValueIsInt
char __fastcall CreateParticlePopup_particleValueIsInt(__int64 a1, int a2)
{
  char result; // al

  switch ( a2 ) /*0x5c56e3*/
  {
    case 1: /*0x5c56e3*/
    case 5: /*0x5c56e3*/
    case 6: /*0x5c56e3*/
    case 7: /*0x5c56e3*/
    case 8: /*0x5c56e3*/
    case 9: /*0x5c56e3*/
    case 10: /*0x5c56e3*/
    case 11: /*0x5c56e3*/
    case 12: /*0x5c56e3*/
    case 13: /*0x5c56e3*/
    case 14: /*0x5c56e3*/
    case 15: /*0x5c56e3*/
    case 16: /*0x5c56e3*/
    case 17: /*0x5c56e3*/
    case 18: /*0x5c56e3*/
    case 19: /*0x5c56e3*/
    case 20: /*0x5c56e3*/
    case 21: /*0x5c56e3*/
    case 22: /*0x5c56e3*/
    case 23: /*0x5c56e3*/
    case 24: /*0x5c56e3*/
    case 25: /*0x5c56e3*/
    case 50: /*0x5c56e3*/
    case 51: /*0x5c56e3*/
    case 52: /*0x5c56e3*/
    case 53: /*0x5c56e3*/
    case 54: /*0x5c56e3*/
    case 55: /*0x5c56e3*/
      result = 1; /*0x5c56e5*/
      break; /*0x5c56e7*/
    default:
      result = 0; /*0x5c56e8*/
      break; /*0x5c56e8*/
  }
  return result; /*0x5c56e7*/
}

// [21/29] Address: 0x5c58e0
// Method: CreateParticlePopup::onPosType
__int64 __fastcall CreateParticlePopup_onPosType(_QWORD *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c5902*/
  sub_5C4830(a1, v4, 57, 0); /*0x5c590b*/
  if ( v3 ) /*0x5c5912*/
  {
    CCMenuItemToggler_toggle(a1[104], 0); /*0x5c591d*/
    if ( v3 == 1 ) /*0x5c5925*/
      return CCMenuItemToggler_toggle(a1[106], 0); /*0x5c5925*/
  }
  result = CCMenuItemToggler_toggle(a1[105], 0); /*0x5c5930*/
  if ( v3 != 2 ) /*0x5c5938*/
    return CCMenuItemToggler_toggle(a1[106], 0); /*0x5c5943*/
  return result; /*0x5c5948*/
}

// [22/29] Address: 0x5c5960
// Method: CreateParticlePopup::onEmitterMode
__int64 __fastcall CreateParticlePopup_onEmitterMode(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c5982*/
  sub_5C4830(a1, v4, 62, 0); /*0x5c598b*/
  LOBYTE(v5) = v3 == 0; /*0x5c5999*/
  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 872), v5); /*0x5c599c*/
  LOBYTE(v6) = v3 == 1; /*0x5c59ab*/
  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 880), v6); /*0x5c59ae*/
  LOBYTE(v7) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 1552LL))(*(_QWORD *)(a1 + 712)) == 0; /*0x5c59c8*/
  return CreateParticlePopup_toggleGravityMode(a1, v7); /*0x5c59cb*/
}

// [23/29] Address: 0x5c59e0
// Method: CreateParticlePopup::toggleGravityMode
__int64 __fastcall CreateParticlePopup_toggleGravityMode(__int64 a1, unsigned __int8 a2)
{
  cocos2d::CCDictionary *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  cocos2d::CCDictionary *v7; // r15
  struct cocos2d::CCObject *v8; // rax
  struct cocos2d::CCObject *v9; // rax
  struct cocos2d::CCObject *v10; // rax
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rdi
  unsigned __int8 v13; // bp
  __int64 v14; // r12
  struct cocos2d::CCObject *v15; // rax
  struct cocos2d::CCObject *v16; // rax
  struct cocos2d::CCObject *v17; // rax
  struct cocos2d::CCObject *v18; // rax
  unsigned int v19; // edi
  unsigned int i; // esi
  struct cocos2d::CCObject *v21; // rax
  struct cocos2d::CCObject *v22; // rax
  bool v23; // zf
  __int64 result; // rax

  v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 744), 0); /*0x5c5a1d*/
  v5 = 8; /*0x5c5a26*/
  v6 = 10; /*0x5c5a2b*/
  v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 752), 0); /*0x5c5a30*/
  do /*0x5c5aba*/
  {
    v8 = cocos2d::CCDictionary::objectForKey(v4, v5); /*0x5c5a39*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v8 + 336LL))(v8, a2); /*0x5c5a50*/
    v9 = cocos2d::CCDictionary::objectForKey(v4, v5); /*0x5c5a59*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v9 + 920LL))(v9, a2); /*0x5c5a70*/
    v10 = cocos2d::CCDictionary::objectForKey(v7, v5); /*0x5c5a79*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v10 + 336LL))(v10, a2); /*0x5c5a90*/
    v11 = cocos2d::CCDictionary::objectForKey(v7, v5); /*0x5c5a99*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v11 + 920LL))(v11, a2); /*0x5c5ab0*/
    ++v5; /*0x5c5ab3*/
    --v6; /*0x5c5ab6*/
  }
  while ( v6 ); /*0x5c5aba*/
  v12 = 50; /*0x5c5ac4*/
  v13 = a2 ^ 1; /*0x5c5ac9*/
  v14 = 6; /*0x5c5acd*/
  do /*0x5c5b5a*/
  {
    v15 = cocos2d::CCDictionary::objectForKey(v4, v12); /*0x5c5ad9*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v15 + 336LL))(v15, v13); /*0x5c5af0*/
    v16 = cocos2d::CCDictionary::objectForKey(v4, v12); /*0x5c5af9*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v16 + 920LL))(v16, v13); /*0x5c5b10*/
    v17 = cocos2d::CCDictionary::objectForKey(v7, v12); /*0x5c5b19*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v17 + 336LL))(v17, v13); /*0x5c5b30*/
    v18 = cocos2d::CCDictionary::objectForKey(v7, v12); /*0x5c5b39*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v18 + 920LL))(v18, v13); /*0x5c5b50*/
    ++v12; /*0x5c5b53*/
    --v14; /*0x5c5b56*/
  }
  while ( v14 ); /*0x5c5b5a*/
  v19 = 0; /*0x5c5b67*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 960)); ++i ) /*0x5c5b6b*/
  {
    v21 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 960), i); /*0x5c5b89*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v21 + 336LL))(v21, a2); /*0x5c5ba0*/
  }
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 968)) ) /*0x5c5bbd*/
  {
    do /*0x5c5c04*/
    {
      v22 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 968), v19); /*0x5c5bd9*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v22 + 336LL))(v22, v13); /*0x5c5bf0*/
      ++v19; /*0x5c5bfa*/
    }
    while ( v19 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 968)) ); /*0x5c5c04*/
  }
  v23 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 1552LL))(*(_QWORD *)(a1 + 712)) == 0; /*0x5c5c1b*/
  result = *(_QWORD *)(a1 + 792); /*0x5c5c1d*/
  *(_BYTE *)(result + 560) = v23; /*0x5c5c36*/
  return result; /*0x5c5c24*/
}

// [24/29] Address: 0x5c5c50
// Method: CreateParticlePopup::willClose
__int64 __fastcall CreateParticlePopup_willClose(cocos2d::CCArray **a1)
{
  struct cocos2d::CCObject *v2; // rax
  __int64 v3; // rcx
  __int64 i; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax

  v2 = cocos2d::CCArray::objectAtIndex(a1[93], 0); /*0x5c5c62*/
  if ( v2 ) /*0x5c5c6b*/
  {
    v3 = *((_QWORD *)v2 + 7); /*0x5c5c6d*/
    if ( v3 ) /*0x5c5c74*/
    {
      for ( i = *(_QWORD *)(v3 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x5c5c7b*/
      {
        v5 = *(__int64 **)(v3 + 264); /*0x5c5c90*/
        v6 = *v5; /*0x5c5c99*/
        v5[76] = 0; /*0x5c5c9c*/
        (*(void (__fastcall **)(__int64 *, _QWORD))(v6 + 1032))(v5, 0); /*0x5c5ca3*/
        v3 = i; /*0x5c5ca9*/
        if ( !i ) /*0x5c5caf*/
          break; /*0x5c5caf*/
      }
    }
  }
  return (*((__int64 (__fastcall **)(cocos2d::CCArray **, _QWORD))*a1 + 124))(a1, 0);
}

// [25/29] Address: 0x5c5ce0
// Method: CreateParticlePopup::onClose
__int64 __fastcall CreateParticlePopup_onClose(__int64 a1)
{
  __int64 v2; // rdx
  size_t *v3; // rax
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebp
  struct cocos2d::CCObject *v6; // rsi
  struct cocos2d::CCObject *v7; // rdi
  size_t *v8; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  CreateParticlePopup_willClose((cocos2d::CCArray **)a1); /*0x5c5ce9*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5c5cee*/
  {
    v3 = (size_t *)sub_6F960(v10, *(_QWORD *)(a1 + 712)); /*0x5c5d04*/
    ParticleGameObject_setParticleString(*(_QWORD *)(a1 + 680), v3); /*0x5c5d13*/
    *(_DWORD *)(*(_QWORD *)(a1 + 680) + 1804LL) = *(_DWORD *)(a1 + 996); /*0x5c5d25*/
    *(_BYTE *)(*(_QWORD *)(a1 + 680) + 1800LL) = *(_BYTE *)(*(_QWORD *)(a1 + 712) + 748LL); /*0x5c5d40*/
    ParticleGameObject_updateParticle(*(_QWORD *)(a1 + 680)); /*0x5c5d4d*/
  }
  else
  {
    v4 = *(cocos2d::CCArray **)(a1 + 688); /*0x5c5d57*/
    if ( v4 ) /*0x5c5d61*/
    {
      v5 = 0; /*0x5c5d6c*/
      if ( cocos2d::CCArray::count(v4) ) /*0x5c5d6e*/
      {
        do /*0x5c5df2*/
        {
          v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v5); /*0x5c5da8*/
          v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 696), v5); /*0x5c5db9*/
          v8 = (size_t *)sub_6F960(v10, v7); /*0x5c5dbc*/
          ParticleGameObject_setParticleString((__int64)v6, v8); /*0x5c5dc7*/
          *((_BYTE *)v6 + 1800) = *((_BYTE *)v7 + 748); /*0x5c5dd6*/
          ParticleGameObject_updateParticle((__int64)v6); /*0x5c5ddc*/
          ++v5; /*0x5c5de8*/
        }
        while ( v5 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5c5df2*/
      }
    }
  }
  LOBYTE(v2) = 1; /*0x5c5e06*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2);
}

// [26/29] Address: 0x5c5e20
// Method: CreateParticlePopup::keyBackClicked
__int64 __fastcall CreateParticlePopup_keyBackClicked(__int64 a1)
{
  return CreateParticlePopup_onClose(a1 - 336);
}

// [27/29] Address: 0x5c5e30
// Method: CreateParticlePopup::ccTouchBegan
__int64 __fastcall CreateParticlePopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE v9[8]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[48]; // [rsp+38h] [rbp-30h] BYREF
  char v11; // [rsp+70h] [rbp+8h] BYREF
  char v12; // [rsp+88h] [rbp+20h] BYREF

  cocos2d::CCTouch::getLocation(a2, &v12); /*0x5c5e4c*/
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 472), &v11, &v12); /*0x5c5e66*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v10, 0.0, 0.0, 120.0, 180.0); /*0x5c5e8d*/
  if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v10, (const struct cocos2d::CCPoint *)&v11) ) /*0x5c5e9d*/
  {
    v6 = *(_QWORD *)(a1 + 392); /*0x5c5eaa*/
    *(_DWORD *)(a1 + 408) = *(_DWORD *)(a2 + 56); /*0x5c5eb1*/
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 200LL))(v6); /*0x5c5ebf*/
    cocos2d::CCPoint::operator-(v7, v9, &v11); /*0x5c5ed2*/
    cocos2d::CCPoint::operator=(a1 + 412, v9); /*0x5c5ee4*/
    cocos2d::CCPoint::operator=(a1 + 412, &unk_905968); /*0x5c5ef8*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2, a3); /*0x5c5f0a*/
  }
  return FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x5c5f20*/
}

// [28/29] Address: 0x5c5f30
// Method: CreateParticlePopup::ccTouchMoved
__int64 __fastcall CreateParticlePopup_ccTouchMoved(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r15d
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  const struct cocos2d::CCPoint *v18; // rdx
  const struct cocos2d::CCPoint *v19; // rdx
  bool v20; // zf
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rax
  const struct cocos2d::CCPoint *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  _BYTE v27[16]; // [rsp+30h] [rbp-30h] BYREF
  char v28; // [rsp+90h] [rbp+30h] BYREF
  float X; // [rsp+98h] [rbp+38h] BYREF
  float Y; // [rsp+9Ch] [rbp+3Ch]
  char v31; // [rsp+A8h] [rbp+48h] BYREF

  result = *(unsigned int *)(a2 + 56); /*0x5c5f3e*/
  v3 = a1 - 320; /*0x5c5f41*/
  v4 = a2; /*0x5c5f4b*/
  if ( (_DWORD)result != *(_DWORD *)(a1 - 320 + 728) ) /*0x5c5f57*/
  {
    if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x5c5f5f*/
    {
      v6 = *(_QWORD *)(a1 + 232); /*0x5c5f61*/
    }
    else
    {
      if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x5c5f73*/
        return result; /*0x5c5f73*/
      v6 = *(_QWORD *)(a1 + 304); /*0x5c5f79*/
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 320) + 16LL))(v6 + 320, a2); /*0x5c5f68*/
  }
  cocos2d::CCTouch::getLocation(a2, &v28); /*0x5c5f96*/
  v7 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 472), &X, &v28); /*0x5c5fab*/
  cocos2d::CCPoint::operator=(&v28, v7); /*0x5c5fb8*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v27, 0.0, 0.0, 120.0, 180.0); /*0x5c5fde*/
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 1552LL))(*(_QWORD *)(a1 + 392)); /*0x5c5ff8*/
  if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v27, (const struct cocos2d::CCPoint *)&v28) ) /*0x5c5fff*/
  {
    v9 = *(_DWORD *)(a1 + 508); /*0x5c6012*/
    switch ( v9 ) /*0x5c601c*/
    {
      case 0: /*0x5c601c*/
        cocos2d::CCPoint::operator+(&v28, &X, a1 + 412); /*0x5c602d*/
        (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 392) + 184LL))(*(_QWORD *)(a1 + 392), &X); /*0x5c6041*/
        goto LABEL_25; /*0x5c6047*/
      case 1: /*0x5c601c*/
        if ( !v8 ) /*0x5c6059*/
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 200LL))(*(_QWORD *)(a1 + 392)); /*0x5c6069*/
          cocos2d::CCPoint::operator-(v10, &X, &v28); /*0x5c607a*/
          sub_5C4830(v3, v11, 10, 0); /*0x5c6098*/
          sub_5C4830(v3, v12, 11, 0); /*0x5c60b5*/
          sub_5C5730(v3, 10); /*0x5c60c2*/
          sub_5C54A0(v3, 10); /*0x5c60cf*/
          sub_5C5730(v3, 11); /*0x5c60dc*/
          v13 = 11; /*0x5c60e1*/
          goto LABEL_24; /*0x5c60e6*/
        }
        break;
      case 2: /*0x5c601c*/
        if ( !v8 ) /*0x5c60f8*/
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 200LL))(*(_QWORD *)(a1 + 392)); /*0x5c6108*/
          cocos2d::CCPoint::operator-(v14, &v31, &v28); /*0x5c6119*/
          cocos2d::CCPoint::operator*(&v31, &X); /*0x5c612f*/
          sub_5C4830(v3, v15, 12, 0); /*0x5c6146*/
          sub_5C4830(v3, v16, 13, 0); /*0x5c615c*/
          sub_5C5730(v3, 12); /*0x5c6169*/
          sub_5C54A0(v3, 12); /*0x5c6176*/
          sub_5C5730(v3, 13); /*0x5c6183*/
          v13 = 13; /*0x5c6188*/
          goto LABEL_24; /*0x5c618d*/
        }
        break;
      case 3: /*0x5c601c*/
        v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 200LL))(*(_QWORD *)(a1 + 392)); /*0x5c6211*/
        cocos2d::CCPoint::operator-(v23, &X, &v28); /*0x5c6222*/
        if ( !v8 ) /*0x5c622b*/
        {
          cocos2d::ccpLength((cocos2d *)&X, v24); /*0x5c6231*/
          sub_5C4830(v3, v25, 8, 0); /*0x5c624e*/
        }
        atan2f(Y, X); /*0x5c625d*/
        sub_5C4830(v3, v26, 6, 0); /*0x5c62c4*/
        if ( !v8 ) /*0x5c62cc*/
        {
          sub_5C5730(v3, 8); /*0x5c62d6*/
          sub_5C54A0(v3, 8); /*0x5c62e3*/
        }
        sub_5C5730(v3, 6); /*0x5c62f0*/
        v13 = 6; /*0x5c62f5*/
LABEL_24:
        sub_5C54A0(v3, v13); /*0x5c62fa*/
        goto LABEL_25; /*0x5c62fd*/
      default:
        goto LABEL_25; /*0x5c6201*/
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 200LL))(*(_QWORD *)(a1 + 392)); /*0x5c619c*/
    cocos2d::CCPoint::operator-(v17, &X, &v28); /*0x5c61ad*/
    cocos2d::ccpLength((cocos2d *)&X, v18); /*0x5c61b7*/
    v20 = v9 == 1; /*0x5c61bd*/
    v21 = 50; /*0x5c61c5*/
    if ( !v20 ) /*0x5c61cb*/
      v21 = 52; /*0x5c61cd*/
    cocos2d::ccpLength((cocos2d *)&X, v19); /*0x5c61d3*/
    sub_5C4830(v3, v22, v21, 0); /*0x5c61e5*/
    sub_5C5730(v3, v21); /*0x5c61f0*/
    v13 = v21; /*0x5c61f5*/
    goto LABEL_24; /*0x5c61f8*/
  }
LABEL_25:
  result = *(unsigned int *)(v4 + 56); /*0x5c6307*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x5c631a*/
  {
    v6 = *(_QWORD *)(a1 + 232); /*0x5c631c*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x5c632b*/
      return result; /*0x5c632b*/
    v6 = *(_QWORD *)(a1 + 304); /*0x5c632d*/
  }
  a2 = v4; /*0x5c6334*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 320) + 16LL))(v6 + 320, a2); /*0x5c6347*/
}

// [29/29] Address: 0x5c6360
// Method: CreateParticlePopup::ccTouchEnded
__int64 __fastcall CreateParticlePopup_ccTouchEnded(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 408) == *(_DWORD *)(a2 + 56) ) /*0x5c6369*/
    *(_DWORD *)(a1 + 408) = -1; /*0x5c636b*/
  return FLAlertLayer_ccTouchEnded();
}
