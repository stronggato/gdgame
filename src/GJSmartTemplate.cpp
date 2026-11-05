#include <Geode/binding/GJSmartTemplate.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/20] Address: 0x997e0
// Method: GJSmartTemplate::getRandomPrefab
// Hidden C++ exception states: #wind=1
void __fastcall GJSmartTemplate_getRandomPrefab(__int64 a1, float a2, __int64 a3)
{
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  size_t v10; // r8
  int v11; // ebx
  char *v12; // rax
  __int64 Buf2; // [rsp+30h] [rbp-78h] BYREF
  __int64 Buf2_8; // [rsp+38h] [rbp-70h]
  __int64 v15; // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+48h] [rbp-60h]
  void *Buf1[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-48h]
  unsigned __int64 v19; // [rsp+68h] [rbp-40h]

  v15 = 10; /*0x99820*/
  v16 = 15; /*0x99824*/
  Buf2 = *(_QWORD *)"audioScale"; /*0x99834*/
  Buf2_8 = *(unsigned __int16 *)"le"; /*0x99841*/
  BYTE2(Buf2_8) = 0; /*0x99846*/
  *(_OWORD *)Buf1 = 0; /*0x9984e*/
  v18 = 0; /*0x99853*/
  v19 = 0; /*0x9985b*/
  v5 = -1; /*0x99863*/
  do /*0x99873*/
    ++v5; /*0x99870*/
  while ( *(_BYTE *)(a3 + v5) ); /*0x99873*/
  sub_3C230(Buf1); /*0x9987f*/
  v6 = Buf1; /*0x99884*/
  v7 = (char *)Buf1[0]; /*0x99889*/
  v8 = v19; /*0x9988e*/
  if ( v19 > 0xF ) /*0x99897*/
    v6 = (void **)Buf1[0]; /*0x99897*/
  v9 = v18; /*0x9989b*/
  v10 = v18; /*0x998a0*/
  if ( v18 > 0xA ) /*0x998a7*/
    v10 = 10; /*0x998a7*/
  v11 = memcmp(v6, &Buf2, v10); /*0x998b5*/
  if ( !v11 ) /*0x998b9*/
  {
    if ( v9 >= 0xA ) /*0x998bf*/
      v11 = v9 > 0xA; /*0x998ce*/
    else
      v11 = -1; /*0x998c1*/
  }
  if ( v8 > 0xF ) /*0x998d5*/
  {
    v12 = v7; /*0x998db*/
    if ( v8 + 1 >= 0x1000 ) /*0x998e5*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x998eb*/
      if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x998fa*/
        invoke_watson(0, 0, 0, 0, 0); /*0x9990f*/
    }
    j_j_free(v7); /*0x99919*/
  }
  if ( !v11 ) /*0x99921*/
    *(float *)(a1 + 580) = a2; /*0x99923*/
}

// [2/20] Address: 0x21f880
// Method: GJSmartTemplate::getVerySimplifiedKey
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJSmartTemplate_getVerySimplifiedKey(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rax
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF

  v2 = cocos2d::CCFileUtils::sharedFileUtils(); /*0x21f8a3*/
  v3 = (void *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v2 + 136LL))(v2, v6); /*0x21f8b4*/
  v4 = sub_43D80(v3, "CCPlatformerSave.dat", 0x14u); /*0x21f8cb*/
  *(_OWORD *)a1 = 0; /*0x21f8d3*/
  *(_QWORD *)(a1 + 16) = 0; /*0x21f8d6*/
  *(_QWORD *)(a1 + 24) = 0; /*0x21f8da*/
  *(_OWORD *)a1 = *(_OWORD *)v4; /*0x21f8e1*/
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v4 + 16); /*0x21f8e8*/
  *(_QWORD *)(v4 + 16) = 0; /*0x21f8ec*/
  *(_QWORD *)(v4 + 24) = 15; /*0x21f8f0*/
  *(_BYTE *)v4 = 0; /*0x21f8f8*/
  sub_3C310(v6); /*0x21f900*/
  return a1; /*0x21f908*/
}

// [3/20] Address: 0x3b2f30
// Method: GJSmartTemplate::~GJSmartTemplate
// Hidden C++ exception states: #wind=1
char *__fastcall GJSmartTemplate__dtor_GJSmartTemplate(char *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx

  *(_QWORD *)Block = &GJSmartTemplate::`vftable'; /*0x3b2f4b*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 7); /*0x3b2f4e*/
  if ( v4 ) /*0x3b2f55*/
    cocos2d::CCObject::release(v4); /*0x3b2f57*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 8); /*0x3b2f5d*/
  if ( v5 ) /*0x3b2f64*/
    cocos2d::CCObject::release(v5); /*0x3b2f66*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 9); /*0x3b2f6c*/
  if ( v6 ) /*0x3b2f73*/
    cocos2d::CCObject::release(v6); /*0x3b2f75*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 10); /*0x3b2f7b*/
  if ( v7 ) /*0x3b2f82*/
    cocos2d::CCObject::release(v7); /*0x3b2f84*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 11); /*0x3b2f8a*/
  if ( v8 ) /*0x3b2f91*/
    cocos2d::CCObject::release(v8); /*0x3b2f93*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 12); /*0x3b2f99*/
  if ( v9 ) /*0x3b2fa0*/
    cocos2d::CCObject::release(v9); /*0x3b2fa2*/
  v10 = (cocos2d::CCObject *)*((_QWORD *)Block + 13); /*0x3b2fa8*/
  if ( v10 ) /*0x3b2faf*/
    cocos2d::CCObject::release(v10); /*0x3b2fb1*/
  sub_3C310(Block + 168); /*0x3b2fbe*/
  sub_3C310(Block + 136); /*0x3b2fca*/
  sub_3B95A0(Block + 112, Block + 112, *(_QWORD *)(*((_QWORD *)Block + 14) + 8LL)); /*0x3b2fdf*/
  j_j_free(*((void **)Block + 14)); /*0x3b2fed*/
  cocos2d::CCObject::~CCObject((cocos2d::CCObject *)Block); /*0x3b2ff5*/
  if ( (a2 & 1) != 0 ) /*0x3b3000*/
    j_j_free(Block); /*0x3b300a*/
  return Block; /*0x3b3012*/
}

// [4/20] Address: 0x3b3330
// Method: GJSmartTemplate::create
// Hidden C++ exception states: #wind=2
char *GJSmartTemplate_create()
{
  char *v0; // rdi
  _QWORD *v1; // rax
  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rbx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rax
  cocos2d::CCObject *v6; // rax
  cocos2d::CCObject *v7; // rax
  cocos2d::CCObject *v8; // rax
  cocos2d::CCObject *v9; // rax
  cocos2d::CCObject *v10; // rax

  v0 = (char *)operator new(0xD0u); /*0x3b3349*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v0); /*0x3b3354*/
  *(_QWORD *)v0 = &GJSmartTemplate::`vftable'; /*0x3b3362*/
  *((_QWORD *)v0 + 7) = 0; /*0x3b3367*/
  *((_QWORD *)v0 + 8) = 0; /*0x3b336b*/
  *((_QWORD *)v0 + 10) = 0; /*0x3b336f*/
  *((_QWORD *)v0 + 14) = 0; /*0x3b3373*/
  *((_QWORD *)v0 + 15) = 0; /*0x3b3377*/
  v1 = operator new(0x98u); /*0x3b3380*/
  *v1 = v1; /*0x3b3385*/
  v1[1] = v1; /*0x3b3388*/
  v1[2] = v1; /*0x3b338c*/
  *((_WORD *)v1 + 12) = 257; /*0x3b3390*/
  *((_QWORD *)v0 + 14) = v1; /*0x3b3396*/
  *((_DWORD *)v0 + 32) = 0; /*0x3b339a*/
  *(_OWORD *)(v0 + 136) = 0; /*0x3b33a3*/
  *((_QWORD *)v0 + 19) = 0; /*0x3b33aa*/
  *((_QWORD *)v0 + 20) = 15; /*0x3b33b1*/
  v0[136] = 0; /*0x3b33bc*/
  *(_OWORD *)(v0 + 168) = 0; /*0x3b33c3*/
  *((_QWORD *)v0 + 23) = 0; /*0x3b33ca*/
  *((_QWORD *)v0 + 24) = 15; /*0x3b33d1*/
  v0[168] = 0; /*0x3b33dc*/
  *((_QWORD *)v0 + 25) = 0; /*0x3b33e3*/
  v2 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x3b33ea*/
  v3 = v2; /*0x3b33f0*/
  if ( *((cocos2d::CCObject **)v0 + 7) != v2 ) /*0x3b33f7*/
  {
    if ( v2 ) /*0x3b33fc*/
      cocos2d::CCObject::retain(v2); /*0x3b3401*/
    v4 = (cocos2d::CCObject *)*((_QWORD *)v0 + 7); /*0x3b3407*/
    if ( v4 ) /*0x3b340e*/
      cocos2d::CCObject::release(v4); /*0x3b3410*/
    *((_QWORD *)v0 + 7) = v3; /*0x3b3416*/
  }
  v5 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x3b341a*/
  *((_QWORD *)v0 + 8) = v5; /*0x3b3420*/
  cocos2d::CCObject::retain(v5); /*0x3b3427*/
  v6 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x3b342d*/
  *((_QWORD *)v0 + 9) = v6; /*0x3b3433*/
  cocos2d::CCObject::retain(v6); /*0x3b343a*/
  v7 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x3b3440*/
  *((_QWORD *)v0 + 10) = v7; /*0x3b3446*/
  cocos2d::CCObject::retain(v7); /*0x3b344d*/
  v8 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x3b3453*/
  *((_QWORD *)v0 + 11) = v8; /*0x3b3459*/
  cocos2d::CCObject::retain(v8); /*0x3b3460*/
  v9 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x3b3466*/
  *((_QWORD *)v0 + 12) = v9; /*0x3b346c*/
  cocos2d::CCObject::retain(v9); /*0x3b3473*/
  v10 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x3b3479*/
  *((_QWORD *)v0 + 13) = v10; /*0x3b347f*/
  cocos2d::CCObject::retain(v10); /*0x3b3486*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x3b348f*/
  return v0; /*0x3b3498*/
}

// [5/20] Address: 0x3b3890
// Method: GJSmartTemplate::saveRemapToDict
// Hidden C++ exception states: #wind=2
double __fastcall GJSmartTemplate_saveRemapToDict(__int64 a1, __int64 a2, size_t *a3, __int64 a4)
{
  __int64 v7; // rcx
  cocos2d::CCArray *v8; // r12
  unsigned int v9; // r15d
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  const void *v13; // rdx
  void **v14; // rcx
  char *v15; // rdi
  unsigned __int64 v16; // r13
  size_t v17; // r14
  size_t v18; // rbp
  size_t v19; // r8
  int v20; // ebx
  char *v21; // rax
  struct cocos2d::CCObject *v22; // rax
  void *Buf1[2]; // [rsp+48h] [rbp-60h] BYREF
  size_t v26; // [rsp+58h] [rbp-50h]
  unsigned __int64 v27; // [rsp+60h] [rbp-48h]

  if ( *(_QWORD *)(a2 + 16) ) /*0x3b38cb*/
  {
    v8 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(a4, a2); /*0x3b38df*/
    if ( !v8 ) /*0x3b38e5*/
    {
      v8 = (cocos2d::CCArray *)cocos2d::CCArray::create(v7); /*0x3b38ed*/
      cocos2d::CCDictionary::setObject(a4, v8, a2); /*0x3b38f9*/
    }
    v9 = 0; /*0x3b3901*/
    if ( cocos2d::CCArray::count(v8) ) /*0x3b3907*/
    {
      while ( 1 ) /*0x3b3926*/
      {
        v10 = cocos2d::CCArray::stringAtIndex(v8, v9); /*0x3b3926*/
        CString = cocos2d::CCString::getCString(v10); /*0x3b392f*/
        *(_OWORD *)Buf1 = 0; /*0x3b3938*/
        v26 = 0; /*0x3b393d*/
        v27 = 0; /*0x3b3942*/
        v12 = -1; /*0x3b3947*/
        do /*0x3b3953*/
          ++v12; /*0x3b3950*/
        while ( CString[v12] ); /*0x3b3953*/
        sub_3C230(Buf1); /*0x3b3962*/
        v13 = a3; /*0x3b3967*/
        if ( a3[3] > 0xF ) /*0x3b396f*/
          v13 = (const void *)*a3; /*0x3b3971*/
        v14 = Buf1; /*0x3b3974*/
        v15 = (char *)Buf1[0]; /*0x3b3979*/
        v16 = v27; /*0x3b397e*/
        if ( v27 > 0xF ) /*0x3b3987*/
          v14 = (void **)Buf1[0]; /*0x3b3987*/
        v17 = a3[2]; /*0x3b398b*/
        v18 = v26; /*0x3b398f*/
        v19 = v26; /*0x3b3994*/
        if ( v17 < v26 ) /*0x3b399a*/
          v19 = a3[2]; /*0x3b399a*/
        v20 = memcmp(v14, v13, v19); /*0x3b39a3*/
        if ( !v20 ) /*0x3b39a7*/
        {
          if ( v18 >= v17 ) /*0x3b39ac*/
            v20 = v18 > v17; /*0x3b39ba*/
          else
            v20 = -1; /*0x3b39ae*/
        }
        if ( v16 > 0xF ) /*0x3b39c1*/
        {
          v21 = v15; /*0x3b39c7*/
          if ( v16 + 1 >= 0x1000 ) /*0x3b39d1*/
          {
            v15 = (char *)*((_QWORD *)v15 - 1); /*0x3b39d7*/
            if ( (unsigned __int64)(v21 - v15 - 8) > 0x1F ) /*0x3b39e6*/
              invoke_watson(0, 0, 0, 0, 0); /*0x3b3a1f*/
          }
          j_j_free(v15); /*0x3b39eb*/
        }
        if ( !v20 ) /*0x3b39f2*/
          break; /*0x3b39f2*/
        if ( ++v9 >= cocos2d::CCArray::count(v8) ) /*0x3b3a03*/
          goto LABEL_25; /*0x3b3a03*/
      }
    }
    else
    {
LABEL_25:
      v22 = (struct cocos2d::CCObject *)cocos2d::CCString::create(a3); /*0x3b3a26*/
      cocos2d::CCArray::addObject(v8, v22); /*0x3b3a35*/
    }
  }
  sub_3C310(a2); /*0x3b3a41*/
  return sub_3C310(a3); /*0x3b3a4f*/
}

// [6/20] Address: 0x3b4330
// Method: GJSmartTemplate::getNoCornerKey
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJSmartTemplate_getNoCornerKey(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  const void *v5; // rdx
  void **v6; // rcx
  char *v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbp
  size_t v11; // r8
  char *v12; // rax
  void *Buf1[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h]

  if ( a3[2] ) /*0x3b4368*/
  {
    *(_OWORD *)Buf1 = 0; /*0x3b438a*/
    v15 = 0u; /*0x3b438f*/
    sub_3C230(Buf1); /*0x3b43b8*/
    sub_43D80(Buf1, "0000", 4u); /*0x3b43d0*/
    v5 = a3; /*0x3b43d5*/
    if ( a3[3] > 0xF ) /*0x3b43dd*/
      v5 = (const void *)*a3; /*0x3b43df*/
    v6 = Buf1; /*0x3b43e2*/
    v7 = (char *)Buf1[0]; /*0x3b43e7*/
    v8 = *((_QWORD *)&v15 + 1); /*0x3b43ec*/
    if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x3b43f5*/
      v6 = (void **)Buf1[0]; /*0x3b43f5*/
    v9 = a3[2]; /*0x3b43f9*/
    v10 = v15; /*0x3b43fd*/
    v11 = v15; /*0x3b4402*/
    if ( v9 < (unsigned __int64)v15 ) /*0x3b4408*/
      v11 = a3[2]; /*0x3b4408*/
    if ( !memcmp(v6, v5, v11) && v10 >= v9 && v10 <= v9 ) /*0x3b441a*/
    {
      *(_OWORD *)a2 = 0; /*0x3b441f*/
      *(_QWORD *)(a2 + 16) = 0; /*0x3b4422*/
      *(_QWORD *)(a2 + 24) = 15; /*0x3b4426*/
      *(_BYTE *)a2 = 0; /*0x3b442e*/
      if ( v8 > 0xF ) /*0x3b4434*/
      {
        v12 = v7; /*0x3b443a*/
        if ( v8 + 1 >= 0x1000 ) /*0x3b4444*/
        {
          v7 = (char *)*((_QWORD *)v7 - 1); /*0x3b444a*/
          if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x3b4459*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3b446a*/
        }
        j_j_free(v7); /*0x3b4474*/
      }
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)Buf1; /*0x3b4480*/
      *(_OWORD *)(a2 + 16) = v15; /*0x3b4488*/
    }
  }
  else
  {
    *(_OWORD *)a2 = 0; /*0x3b4374*/
    *(_QWORD *)(a2 + 16) = 0; /*0x3b4377*/
    *(_QWORD *)(a2 + 24) = 15; /*0x3b437b*/
    *(_BYTE *)a2 = 0; /*0x3b4383*/
  }
  sub_3C310(a3); /*0x3b448f*/
  return a2; /*0x3b4497*/
}

// [7/20] Address: 0x3b5310
// Method: GJSmartTemplate::getTotalChanceForPrefab
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJSmartTemplate_getTotalChanceForPrefab(__int64 a1, __int64 a2)
{
  cocos2d::CCArray *v4; // rdi
  unsigned int v5; // ebx
  unsigned int *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 i; // r9
  __int64 v11; // [rsp+20h] [rbp-48h]
  _BYTE v12[32]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = a2; /*0x3b5334*/
  v11 = sub_3E4F0(v12, a2); /*0x3b5346*/
  v4 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 56), v11); /*0x3b5358*/
  sub_3C310(v11); /*0x3b535e*/
  v5 = 0; /*0x3b5363*/
  if ( v4 ) /*0x3b5368*/
  {
    if ( cocos2d::CCArray::count(v4) ) /*0x3b536d*/
    {
      v6 = (unsigned int *)*((_QWORD *)v4 + 7); /*0x3b5377*/
      v7 = *v6; /*0x3b537b*/
      if ( (_DWORD)v7 ) /*0x3b537f*/
      {
        v8 = *((_QWORD *)v6 + 2); /*0x3b5381*/
        for ( i = v8 + 8 * (v7 - 1); v8 <= i; v8 += 8LL ) /*0x3b5390*/
        {
          if ( !*(_QWORD *)v8 ) /*0x3b5392*/
            break; /*0x3b5398*/
          v5 += *(_DWORD *)(*(_QWORD *)v8 + 124LL); /*0x3b539a*/
        }
      }
    }
  }
  sub_3C310(a2); /*0x3b53aa*/
  return v5; /*0x3b53b1*/
}

// [8/20] Address: 0x3b5eb0
// Method: GJSmartTemplate::getPrefabWithID
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall GJSmartTemplate_getPrefabWithID(__int64 a1, __int64 a2, int a3)
{
  cocos2d::CCArray *v5; // rax
  cocos2d::CCArray *v6; // rdi
  unsigned int v7; // ebx
  struct cocos2d::CCObject *v8; // rsi

  if ( a3 > 0 /*0x3b5f05*/
    && (v5 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 56), a2), (v6 = v5) != 0)
    && cocos2d::CCArray::count(v5)
    && (v7 = 0, cocos2d::CCArray::count(v6)) )
  {
    while ( 1 ) /*0x3b5f1b*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v6, v7); /*0x3b5f1b*/
      if ( *((_DWORD *)v8 + 30) == a3 ) /*0x3b5f22*/
        break; /*0x3b5f22*/
      if ( ++v7 >= cocos2d::CCArray::count(v6) ) /*0x3b5f31*/
        goto LABEL_7; /*0x3b5f31*/
    }
    sub_3C310(a2); /*0x3b5f60*/
    return v8; /*0x3b5f65*/
  }
  else
  {
LABEL_7:
    sub_3C310(a2); /*0x3b5f33*/
    return 0; /*0x3b5f3b*/
  }
}

// [9/20] Address: 0x3b5f70
// Method: GJSmartTemplate::offsetForDir
cocos2d::CCPoint *__fastcall GJSmartTemplate_offsetForDir(cocos2d::CCPoint *a1, int a2, unsigned int a3)
{
  float v4; // xmm6_4
  __int64 v7; // rcx
  float v8; // xmm2_4
  float v9; // xmm1_4

  v4 = 30.0; /*0x3b5f87*/
  ObjectToolbox_sharedState(); /*0x3b5f94*/
  if ( ObjectToolbox_gridNodeSizeForKey(v7, a3) == 15.0 ) /*0x3b5fad*/
    v4 = 15.0; /*0x3b5faf*/
  switch ( a2 ) /*0x3b5fcd*/
  {
    case 1: /*0x3b5fcd*/
      v8 = v4; /*0x3b5fcf*/
      goto LABEL_13; /*0x3b5fd2*/
    case 2: /*0x3b5fcd*/
      v8 = -v4; /*0x3b5fdb*/
      goto LABEL_13; /*0x3b5fde*/
    case 3: /*0x3b5fcd*/
      v4 = -v4; /*0x3b5fe0*/
      goto LABEL_7; /*0x3b5fe0*/
    case 4: /*0x3b5fcd*/
LABEL_7:
      v8 = 0.0; /*0x3b5fe7*/
      v9 = v4; /*0x3b5fea*/
      break; /*0x3b5fed*/
    case 5: /*0x3b5fcd*/
      v8 = v4; /*0x3b5ff2*/
      v9 = -v4; /*0x3b5ff5*/
      break; /*0x3b5ffc*/
    case 6: /*0x3b5fcd*/
      goto LABEL_10;
    case 7: /*0x3b5fcd*/
      v4 = -v4; /*0x3b5ffe*/
LABEL_10:
      v8 = v4; /*0x3b6005*/
      v9 = v4; /*0x3b6008*/
      break; /*0x3b600b*/
    case 8: /*0x3b5fcd*/
      v9 = v4; /*0x3b6010*/
      v8 = -v4; /*0x3b6013*/
      break; /*0x3b601a*/
    default:
      v8 = 0.0; /*0x3b601c*/
LABEL_13:
      v9 = 0.0; /*0x3b601f*/
      break; /*0x3b601f*/
  }
  cocos2d::CCPoint::CCPoint(a1, v9, v8); /*0x3b6022*/
  return a1; /*0x3b602b*/
}

// [10/20] Address: 0x3b6070
// Method: GJSmartTemplate::offsetForType
cocos2d::CCPoint *__fastcall GJSmartTemplate_offsetForType(cocos2d::CCPoint *a1, int a2)
{
  cocos2d::CCPoint *result; // rax

  switch ( a2 ) /*0x3b60a1*/
  {
    case '6': /*0x3b60a1*/
    case '9': /*0x3b60a1*/
    case 'A': /*0x3b60a1*/
    case 'D': /*0x3b60a1*/
      cocos2d::CCPoint::CCPoint(a1, 15.0, 0.0); /*0x3b60b1*/
      result = a1; /*0x3b60b7*/
      break; /*0x3b60bf*/
    case '7': /*0x3b60a1*/
    case '8': /*0x3b60a1*/
    case 'B': /*0x3b60a1*/
    case 'C': /*0x3b60a1*/
      cocos2d::CCPoint::CCPoint(a1, -15.0, 0.0); /*0x3b60ce*/
      result = a1; /*0x3b60d4*/
      break; /*0x3b60dc*/
    case 'E': /*0x3b60a1*/
    case 'G': /*0x3b60a1*/
    case 'J': /*0x3b60a1*/
    case 'L': /*0x3b60a1*/
      cocos2d::CCPoint::CCPoint(a1, 0.0, -15.0); /*0x3b60eb*/
      result = a1; /*0x3b60f1*/
      break; /*0x3b60f9*/
    case 'F': /*0x3b60a1*/
    case 'H': /*0x3b60a1*/
    case 'I': /*0x3b60a1*/
    case 'K': /*0x3b60a1*/
      cocos2d::CCPoint::CCPoint(a1, 0.0, 15.0); /*0x3b6108*/
      result = a1; /*0x3b610e*/
      break; /*0x3b6116*/
    default:
      cocos2d::CCPoint::CCPoint(a1, (const struct cocos2d::CCPoint *)&unk_904D10); /*0x3b6121*/
      result = a1; /*0x3b6127*/
      break; /*0x3b6127*/
  }
  return result; /*0x3b60ba*/
}

// [11/20] Address: 0x3b6160
// Method: GJSmartTemplate::applyTransformationsForType
void __fastcall GJSmartTemplate_applyTransformationsForType(int a1, cocos2d::CCSprite *a2)
{
  switch ( a1 ) /*0x3b6189*/
  {
    case '3': /*0x3b6189*/
    case '4': /*0x3b6189*/
    case '5': /*0x3b6189*/
    case 'C': /*0x3b6189*/
    case 'D': /*0x3b6189*/
    case 'G': /*0x3b6189*/
    case 'H': /*0x3b6189*/
    case 'I': /*0x3b6189*/
    case 'J': /*0x3b6189*/
      goto LABEL_2;
    case '8': /*0x3b6189*/
    case '9': /*0x3b6189*/
      cocos2d::CCSprite::setFlipX(a2, 1); /*0x3b61e3*/
      return; /*0x3b61e3*/
    case 'A': /*0x3b6189*/
    case 'B': /*0x3b6189*/
      cocos2d::CCSprite::setFlipY(a2, 1); /*0x3b61f4*/
      return; /*0x3b61f4*/
    case 'E': /*0x3b6189*/
    case 'F': /*0x3b6189*/
      cocos2d::CCSprite::setFlipX(a2, 1); /*0x3b6200*/
      goto LABEL_2; /*0x3b6206*/
    case 'K': /*0x3b6189*/
    case 'L': /*0x3b6189*/
      cocos2d::CCSprite::setFlipY(a2, 1); /*0x3b620d*/
LABEL_2:
      (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)a2 + 352LL))(a2); /*0x3b618b*/
      break; /*0x3b619e*/
    default:
      return;
  }
}

// [12/20] Address: 0x3b62a0
// Method: GJSmartTemplate::smartObjectToType
__int64 __fastcall GJSmartTemplate_smartObjectToType(_DWORD *a1, float *a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // ecx
  float v7; // xmm0_4
  bool v8; // dl

  v4 = 48; /*0x3b62c1*/
  if ( a1 ) /*0x3b62c9*/
  {
    v5 = a1[259] - 2895; /*0x3b62d5*/
    if ( v5 ) /*0x3b62db*/
    {
      v6 = v5 - 1; /*0x3b62e1*/
      if ( v6 ) /*0x3b62e4*/
      {
        if ( v6 == 1 ) /*0x3b62ed*/
        {
          v7 = fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 360LL))(a1)))); /*0x3b62ff*/
          v8 = v7 == 90.0 || v7 == 270.0; /*0x3b631c*/
          switch ( a1[273] ) /*0x3b6338*/
          {
            case 0: /*0x3b6338*/
            case 7: /*0x3b6338*/
              v4 = 54; /*0x3b633c*/
              if ( v8 ) /*0x3b6346*/
                v4 = 69; /*0x3b6346*/
              break; /*0x3b6346*/
            case 1: /*0x3b6338*/
            case 5: /*0x3b6338*/
              v4 = 8 * v8 + 65; /*0x3b635f*/
              break; /*0x3b6366*/
            case 2: /*0x3b6338*/
            case 4: /*0x3b6338*/
              v4 = 56; /*0x3b634d*/
              if ( v8 ) /*0x3b6357*/
                v4 = 71; /*0x3b6357*/
              break; /*0x3b6357*/
            case 3: /*0x3b6338*/
            case 6: /*0x3b6338*/
              v4 = 8 * v8 + 67; /*0x3b636b*/
              break; /*0x3b6372*/
            default:
              break;
          }
        }
      }
      else
      {
        switch ( a1[273] ) /*0x3b638a*/
        {
          case 0: /*0x3b638a*/
          case 7: /*0x3b638a*/
            v4 = 50; /*0x3b638c*/
            break; /*0x3b6391*/
          case 1: /*0x3b638a*/
          case 5: /*0x3b638a*/
            v4 = 52; /*0x3b639a*/
            break; /*0x3b639f*/
          case 2: /*0x3b638a*/
          case 4: /*0x3b638a*/
            v4 = 51; /*0x3b6393*/
            break; /*0x3b6398*/
          case 3: /*0x3b638a*/
          case 6: /*0x3b638a*/
            v4 = 53; /*0x3b63a1*/
            break; /*0x3b63a6*/
          default:
            break;
        }
      }
    }
    else
    {
      v4 = 49; /*0x3b63a8*/
    }
  }
  if ( !cocos2d::CCPoint::equals((cocos2d::CCPoint *)a2, (const struct cocos2d::CCPoint *)&unk_904D10) ) /*0x3b63b7*/
  {
    switch ( v4 ) /*0x3b63e5*/
    {
      case '6': /*0x3b63e5*/
      case 'A': /*0x3b63e5*/
        if ( *a2 > *(float *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 200LL))(a1) ) /*0x3b63fa*/
        {
          if ( v4 == 54 ) /*0x3b6403*/
          {
            v4 = 55; /*0x3b6418*/
          }
          else if ( v4 == 65 ) /*0x3b6408*/
          {
            v4 = 66; /*0x3b640e*/
          }
        }
        break; /*0x3b6413*/
      case '8': /*0x3b63e5*/
      case 'C': /*0x3b63e5*/
        if ( *(float *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 200LL))(a1) > *a2 ) /*0x3b6435*/
        {
          if ( v4 == 56 ) /*0x3b643a*/
          {
            v4 = 57; /*0x3b6448*/
          }
          else if ( v4 == 67 ) /*0x3b643f*/
          {
            v4 = 68; /*0x3b6441*/
          }
        }
        break; /*0x3b6446*/
      case 'E': /*0x3b63e5*/
      case 'G': /*0x3b63e5*/
        if ( *(float *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 200LL))(a1) + 4) > a2[1] ) /*0x3b6464*/
        {
          if ( v4 == 69 ) /*0x3b6469*/
          {
            v4 = 70; /*0x3b6477*/
          }
          else if ( v4 == 71 ) /*0x3b646e*/
          {
            v4 = 72; /*0x3b6470*/
          }
        }
        break; /*0x3b6475*/
      case 'I': /*0x3b63e5*/
      case 'K': /*0x3b63e5*/
        if ( a2[1] > *(float *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 200LL))(a1) + 4) ) /*0x3b6493*/
        {
          if ( v4 == 73 ) /*0x3b6498*/
          {
            v4 = 74; /*0x3b64a6*/
          }
          else if ( v4 == 75 ) /*0x3b649d*/
          {
            v4 = 76; /*0x3b649f*/
          }
        }
        break; /*0x3b64a4*/
      default:
        return v4;
    }
  }
  return v4; /*0x3b64ab*/
}

// [14/20] Address: 0x3b6920
// Method: GJSmartTemplate::rotateBlockType
__int64 __fastcall GJSmartTemplate_rotateBlockType(unsigned int a1, int a2)
{
  __int64 v2; // r9

  if ( a1 - 48 > 1 && a2 > 0 ) /*0x3b692e*/
  {
    v2 = (a2 - 1) / 0x5Au + 1; /*0x3b6955*/
    do /*0x3b6a10*/
    {
      if ( a1 - 50 <= 0x1A ) /*0x3b6966*/
      {
        switch ( a1 ) /*0x3b697d*/
        {
          case '2': /*0x3b697d*/
            a1 = 51; /*0x3b697f*/
            break; /*0x3b6984*/
          case '3': /*0x3b697d*/
            a1 = 53; /*0x3b6989*/
            break; /*0x3b698e*/
          case '4': /*0x3b697d*/
            a1 = 50; /*0x3b6990*/
            break; /*0x3b6995*/
          case '5': /*0x3b697d*/
            a1 = 52; /*0x3b6997*/
            break; /*0x3b699c*/
          case '6': /*0x3b697d*/
            a1 = 71; /*0x3b699e*/
            break; /*0x3b69a3*/
          case '7': /*0x3b697d*/
            a1 = 72; /*0x3b69ba*/
            break; /*0x3b69bf*/
          case '8': /*0x3b697d*/
            a1 = 75; /*0x3b69a5*/
            break; /*0x3b69aa*/
          case '9': /*0x3b697d*/
            a1 = 76; /*0x3b69c1*/
            break; /*0x3b69c6*/
          case ':': /*0x3b697d*/
          case ';': /*0x3b697d*/
          case '<': /*0x3b697d*/
          case '=': /*0x3b697d*/
          case '>': /*0x3b697d*/
          case '?': /*0x3b697d*/
          case '@': /*0x3b697d*/
            break;
          case 'A': /*0x3b697d*/
            a1 = 69; /*0x3b69ac*/
            break; /*0x3b69b1*/
          case 'B': /*0x3b697d*/
            a1 = 70; /*0x3b69c8*/
            break; /*0x3b69cd*/
          case 'C': /*0x3b697d*/
            a1 = 73; /*0x3b69b3*/
            break; /*0x3b69b8*/
          case 'D': /*0x3b697d*/
            a1 = 74; /*0x3b69cf*/
            break; /*0x3b69d4*/
          case 'E': /*0x3b697d*/
            a1 = 56; /*0x3b69d6*/
            break; /*0x3b69db*/
          case 'F': /*0x3b697d*/
            a1 = 57; /*0x3b69f2*/
            break; /*0x3b69f7*/
          case 'G': /*0x3b697d*/
            a1 = 67; /*0x3b69dd*/
            break; /*0x3b69e2*/
          case 'H': /*0x3b697d*/
            a1 = 68; /*0x3b69f9*/
            break; /*0x3b69fe*/
          case 'I': /*0x3b697d*/
            a1 = 54; /*0x3b69e4*/
            break; /*0x3b69e9*/
          case 'J': /*0x3b697d*/
            a1 = 55; /*0x3b6a00*/
            break; /*0x3b6a05*/
          case 'K': /*0x3b697d*/
            a1 = 65; /*0x3b69eb*/
            break; /*0x3b69f0*/
          case 'L': /*0x3b697d*/
            a1 = 66; /*0x3b6a07*/
            break; /*0x3b6a07*/
        }
      }
      --v2; /*0x3b6a0c*/
    }
    while ( v2 ); /*0x3b6a10*/
  }
  return a1; /*0x3b6a18*/
}

// [15/20] Address: 0x3b6d10
// Method: GJSmartTemplate::rotateKey
// Hidden C++ exception states: #wind=2
_QWORD *__fastcall GJSmartTemplate_rotateKey(_QWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 v6; // rcx
  char *v7; // r8
  unsigned __int64 v8; // r8
  unsigned int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned int v11; // r14d
  unsigned __int64 v12; // r8
  unsigned int v13; // ebp
  unsigned __int64 v14; // r8
  unsigned int v15; // ebx
  unsigned int v16; // r15d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned int v20; // r9d
  unsigned __int64 v21; // rdx
  unsigned int v22; // ebp
  unsigned int v23; // r14d
  unsigned int v24; // r11d
  int v25; // r11d
  int v26; // r11d
  _QWORD *v27; // r10
  unsigned int v28; // [rsp+20h] [rbp-78h]
  unsigned int v29; // [rsp+24h] [rbp-74h]
  unsigned int v30; // [rsp+28h] [rbp-70h]
  unsigned __int64 v33; // [rsp+40h] [rbp-58h]

  v4 = (unsigned __int64 *)a2; /*0x3b6d3b*/
  v33 = a2; /*0x3b6d3e*/
  if ( a3 ) /*0x3b6d5e*/
  {
    v6 = *(_QWORD *)(a2 + 16); /*0x3b6dbf*/
    if ( !v6 ) /*0x3b6dc6*/
      goto LABEL_38; /*0x3b6dc6*/
    v7 = (char *)a2; /*0x3b6dcc*/
    a2 = *(_QWORD *)(a2 + 24); /*0x3b6dcf*/
    if ( a2 > 0xF ) /*0x3b6dd7*/
      v7 = (char *)*v4; /*0x3b6dd9*/
    v28 = *v7; /*0x3b6de0*/
    if ( v6 <= 1 ) /*0x3b6de9*/
      goto LABEL_38; /*0x3b6de9*/
    v8 = (unsigned __int64)v4; /*0x3b6def*/
    if ( a2 > 0xF ) /*0x3b6df6*/
      v8 = *v4; /*0x3b6df8*/
    v9 = *(char *)(v8 + 1); /*0x3b6dfb*/
    if ( v6 <= 2 ) /*0x3b6e04*/
      goto LABEL_38; /*0x3b6e04*/
    v10 = (unsigned __int64)v4; /*0x3b6e0a*/
    if ( a2 > 0xF ) /*0x3b6e11*/
      v10 = *v4; /*0x3b6e13*/
    v11 = *(char *)(v10 + 2); /*0x3b6e16*/
    v6 = v4[2]; /*0x3b6e1b*/
    if ( v6 <= 3 ) /*0x3b6e23*/
      goto LABEL_38; /*0x3b6e23*/
    v12 = (unsigned __int64)v4; /*0x3b6e29*/
    if ( a2 > 0xF ) /*0x3b6e30*/
      v12 = *v4; /*0x3b6e32*/
    v13 = *(char *)(v12 + 3); /*0x3b6e35*/
    if ( v6 <= 4 ) /*0x3b6e3e*/
      goto LABEL_38; /*0x3b6e3e*/
    v14 = (unsigned __int64)v4; /*0x3b6e44*/
    if ( a2 > 0xF ) /*0x3b6e4b*/
      v14 = *v4; /*0x3b6e4d*/
    v15 = *(char *)(v14 + 4); /*0x3b6e50*/
    if ( v6 <= 5 ) /*0x3b6e59*/
      goto LABEL_38; /*0x3b6e59*/
    v6 = (unsigned __int64)v4; /*0x3b6e5f*/
    if ( a2 > 0xF ) /*0x3b6e66*/
      v6 = *v4; /*0x3b6e68*/
    v16 = *(char *)(v6 + 5); /*0x3b6e6b*/
    a2 = v4[2]; /*0x3b6e70*/
    if ( a2 <= 6 ) /*0x3b6e78*/
      goto LABEL_38; /*0x3b6e78*/
    v17 = (unsigned __int64)v4; /*0x3b6e7e*/
    v18 = v4[3]; /*0x3b6e81*/
    if ( v18 > 0xF ) /*0x3b6e89*/
      v17 = *v4; /*0x3b6e8b*/
    v6 = (unsigned int)*(char *)(v17 + 6); /*0x3b6e8e*/
    if ( a2 <= 7 ) /*0x3b6e96*/
      goto LABEL_38; /*0x3b6e96*/
    v19 = (unsigned __int64)v4; /*0x3b6e9c*/
    if ( v18 > 0xF ) /*0x3b6ea3*/
      v19 = *v4; /*0x3b6ea5*/
    v20 = *(char *)(v19 + 7); /*0x3b6ea8*/
    if ( a2 <= 8 ) /*0x3b6eb1*/
LABEL_38:
      sub_3E4D0(v6, a2); /*0x3b7066*/
    v21 = (unsigned __int64)v4; /*0x3b6eb7*/
    if ( v18 > 0xF ) /*0x3b6ebe*/
      v21 = *v4; /*0x3b6ec0*/
    switch ( a3 ) /*0x3b6ecb*/
    {
      case 90: /*0x3b6ecb*/
        v30 = v13; /*0x3b6ecd*/
        v29 = v15; /*0x3b6ed1*/
        v15 = v11; /*0x3b6ed5*/
        v22 = v20; /*0x3b6ed8*/
        v23 = v16; /*0x3b6edb*/
        break;
      case 180: /*0x3b6ecb*/
        v30 = v11; /*0x3b6ee8*/
        v29 = v9; /*0x3b6eed*/
        v9 = v13; /*0x3b6ef1*/
        v22 = *(char *)(v21 + 8); /*0x3b6ef3*/
        v23 = v20; /*0x3b6ef6*/
        LODWORD(v6) = v16; /*0x3b6efc*/
        break;
      case 270: /*0x3b6ecb*/
        v30 = v15; /*0x3b6f09*/
        v29 = v13; /*0x3b6f0d*/
        v15 = v9; /*0x3b6f11*/
        v9 = v11; /*0x3b6f13*/
        v22 = v6; /*0x3b6f16*/
        v23 = *(char *)(v21 + 8); /*0x3b6f18*/
        LODWORD(v6) = v20; /*0x3b6f1e*/
        break;
      default:
        v30 = v28; /*0x3b6f27*/
        v29 = v28; /*0x3b6f2f*/
        v15 = v28; /*0x3b6f33*/
        v9 = v28; /*0x3b6f37*/
        v22 = v28; /*0x3b6f3b*/
        v23 = v28; /*0x3b6f3f*/
        LODWORD(v6) = v28; /*0x3b6f49*/
        break;
    }
    GJSmartTemplate_rotateBlockType(v6, a3); /*0x3b6f4f*/
    GJSmartTemplate_rotateBlockType(v24, a3); /*0x3b6f5c*/
    GJSmartTemplate_rotateBlockType(v23, a3); /*0x3b6f69*/
    GJSmartTemplate_rotateBlockType(v22, a3); /*0x3b6f75*/
    GJSmartTemplate_rotateBlockType(v9, a3); /*0x3b6f81*/
    GJSmartTemplate_rotateBlockType(v15, a3); /*0x3b6f8c*/
    GJSmartTemplate_rotateBlockType(v29, a3); /*0x3b6f9f*/
    GJSmartTemplate_rotateBlockType(v30, v25); /*0x3b6fad*/
    GJSmartTemplate_rotateBlockType(v28, v26); /*0x3b6fbb*/
    *(_OWORD *)v27 = 0; /*0x3b6fc4*/
    v27[2] = 0; /*0x3b6fc8*/
    v27[3] = 15; /*0x3b6fd0*/
    *(_BYTE *)v27 = 0; /*0x3b6fd8*/
    sub_3CBD0(v27); /*0x3b6fea*/
    sub_3CBD0(a1); /*0x3b6ffa*/
    sub_3CBD0(a1); /*0x3b7006*/
    sub_3CBD0(a1); /*0x3b7012*/
    sub_3CBD0(a1); /*0x3b701e*/
    sub_3CBD0(a1); /*0x3b702a*/
    sub_3CBD0(a1); /*0x3b7036*/
    sub_3CBD0(a1); /*0x3b7042*/
    sub_3CBD0(a1); /*0x3b704e*/
    sub_3C310(v33); /*0x3b7059*/
    return a1; /*0x3b705e*/
  }
  else
  {
    *(_OWORD *)a1 = 0; /*0x3b6d63*/
    a1[2] = 0; /*0x3b6d67*/
    a1[3] = 0; /*0x3b6d6b*/
    *(_OWORD *)a1 = *(_OWORD *)a2; /*0x3b6d72*/
    *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16); /*0x3b6d7a*/
    *(_QWORD *)(a2 + 16) = 0; /*0x3b6d7f*/
    *(_QWORD *)(a2 + 24) = 15; /*0x3b6d83*/
    *(_BYTE *)a2 = 0; /*0x3b6d8b*/
    sub_3C310(a2); /*0x3b6d90*/
    return a1; /*0x3b6d95*/
  }
}

// [16/20] Address: 0x3b7070
// Method: GJSmartTemplate::flipKey
// Hidden C++ exception states: #wind=2
_QWORD *__fastcall GJSmartTemplate_flipKey(_QWORD *a1, unsigned __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  char **v5; // rax
  unsigned __int64 v7; // rcx
  char *v8; // r8
  char **v9; // r8
  unsigned int v10; // r14d
  char **v11; // rcx
  unsigned int v12; // edi
  char **v13; // r8
  unsigned int v14; // ebx
  char **v15; // r8
  unsigned int v16; // ebp
  char **v17; // rcx
  unsigned int v18; // r12d
  char **v19; // r8
  unsigned int v20; // r15d
  char **v21; // r8
  unsigned int v22; // r9d
  char **v23; // rcx
  unsigned int v24; // ebp
  unsigned int v25; // r14d
  unsigned int v26; // r11d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  _QWORD *v43; // r10
  unsigned int v44; // [rsp+20h] [rbp-78h]
  unsigned int v46; // [rsp+28h] [rbp-70h]
  unsigned int v47; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v49; // [rsp+40h] [rbp-58h]

  v5 = (char **)a2; /*0x3b709c*/
  v49 = a2; /*0x3b709f*/
  if ( a3 || a4 ) /*0x3b70c4*/
  {
    v7 = *(_QWORD *)(a2 + 16); /*0x3b7125*/
    if ( !v7 ) /*0x3b712c*/
      goto LABEL_37; /*0x3b712c*/
    v8 = (char *)a2; /*0x3b7132*/
    a2 = *(_QWORD *)(a2 + 24); /*0x3b7135*/
    if ( a2 > 0xF ) /*0x3b713d*/
      v8 = *v5; /*0x3b713f*/
    v44 = *v8; /*0x3b7146*/
    if ( v7 <= 1 ) /*0x3b714f*/
      goto LABEL_37; /*0x3b714f*/
    v9 = v5; /*0x3b7155*/
    if ( a2 > 0xF ) /*0x3b715c*/
      v9 = (char **)*v5; /*0x3b715e*/
    v10 = *((char *)v9 + 1); /*0x3b7161*/
    if ( v7 <= 2 ) /*0x3b716a*/
      goto LABEL_37; /*0x3b716a*/
    v11 = v5; /*0x3b7170*/
    if ( a2 > 0xF ) /*0x3b7177*/
      v11 = (char **)*v5; /*0x3b7179*/
    v12 = *((char *)v11 + 2); /*0x3b717c*/
    v7 = (unsigned __int64)v5[2]; /*0x3b7180*/
    if ( v7 <= 3 ) /*0x3b7188*/
      goto LABEL_37; /*0x3b7188*/
    v13 = v5; /*0x3b718e*/
    if ( a2 > 0xF ) /*0x3b7195*/
      v13 = (char **)*v5; /*0x3b7197*/
    v14 = *((char *)v13 + 3); /*0x3b719a*/
    if ( v7 <= 4 ) /*0x3b71a3*/
      goto LABEL_37; /*0x3b71a3*/
    v15 = v5; /*0x3b71a9*/
    if ( a2 > 0xF ) /*0x3b71b0*/
      v15 = (char **)*v5; /*0x3b71b2*/
    v16 = *((char *)v15 + 4); /*0x3b71b5*/
    if ( v7 <= 5 ) /*0x3b71be*/
      goto LABEL_37; /*0x3b71be*/
    v17 = v5; /*0x3b71c4*/
    if ( a2 > 0xF ) /*0x3b71cb*/
      v17 = (char **)*v5; /*0x3b71cd*/
    v18 = *((char *)v17 + 5); /*0x3b71d0*/
    v7 = (unsigned __int64)v5[2]; /*0x3b71d5*/
    if ( v7 <= 6 ) /*0x3b71dd*/
      goto LABEL_37; /*0x3b71dd*/
    v19 = v5; /*0x3b71e3*/
    if ( a2 > 0xF ) /*0x3b71ea*/
      v19 = (char **)*v5; /*0x3b71ec*/
    v20 = *((char *)v19 + 6); /*0x3b71ef*/
    if ( v7 <= 7 ) /*0x3b71f8*/
      goto LABEL_37; /*0x3b71f8*/
    v21 = v5; /*0x3b71fe*/
    if ( a2 > 0xF ) /*0x3b7205*/
      v21 = (char **)*v5; /*0x3b7207*/
    v22 = *((char *)v21 + 7); /*0x3b720a*/
    if ( v7 <= 8 ) /*0x3b7213*/
LABEL_37:
      sub_3E4D0(v7, a2); /*0x3b7395*/
    v23 = v5; /*0x3b7219*/
    if ( a2 > 0xF ) /*0x3b7220*/
      v23 = (char **)*v5; /*0x3b7222*/
    if ( a3 ) /*0x3b7231*/
    {
      v47 = v10; /*0x3b7233*/
      v46 = v16; /*0x3b7238*/
      v24 = v20; /*0x3b723c*/
      v25 = v18; /*0x3b723f*/
    }
    else if ( a4 ) /*0x3b7247*/
    {
      v47 = v12; /*0x3b7249*/
      v12 = v10; /*0x3b724d*/
      v46 = v14; /*0x3b7250*/
      v14 = v16; /*0x3b7254*/
      v24 = *((char *)v21 + 7); /*0x3b7256*/
      v25 = *((char *)v23 + 8); /*0x3b7259*/
      v22 = v20; /*0x3b725f*/
    }
    else
    {
      v47 = v44; /*0x3b7268*/
      v12 = v44; /*0x3b726c*/
      v46 = v44; /*0x3b7274*/
      v14 = v44; /*0x3b7278*/
      v24 = v44; /*0x3b727c*/
      v25 = v44; /*0x3b7280*/
      v22 = v44; /*0x3b728a*/
    }
    sub_3B6A90(v22, a3, a4); /*0x3b7296*/
    sub_3B6A90(v26, v27, v28); /*0x3b72a1*/
    sub_3B6A90(v25, v29, v30); /*0x3b72ac*/
    sub_3B6A90(v24, v31, v32); /*0x3b72b6*/
    sub_3B6A90(v14, v33, v34); /*0x3b72c0*/
    sub_3B6A90(v46, v35, v36); /*0x3b72cb*/
    sub_3B6A90(v12, v37, v38); /*0x3b72d4*/
    sub_3B6A90(v47, v39, v40); /*0x3b72df*/
    sub_3B6A90(v44, v41, v42); /*0x3b72ea*/
    *(_OWORD *)v43 = 0; /*0x3b72f3*/
    v43[2] = 0; /*0x3b72f7*/
    v43[3] = 15; /*0x3b72ff*/
    *(_BYTE *)v43 = 0; /*0x3b7307*/
    sub_3CBD0(v43); /*0x3b7319*/
    sub_3CBD0(a1); /*0x3b7329*/
    sub_3CBD0(a1); /*0x3b7335*/
    sub_3CBD0(a1); /*0x3b7341*/
    sub_3CBD0(a1); /*0x3b734d*/
    sub_3CBD0(a1); /*0x3b7359*/
    sub_3CBD0(a1); /*0x3b7365*/
    sub_3CBD0(a1); /*0x3b7371*/
    sub_3CBD0(a1); /*0x3b737d*/
    sub_3C310(v49); /*0x3b7388*/
    return a1; /*0x3b738d*/
  }
  else
  {
    *(_OWORD *)a1 = 0; /*0x3b70c9*/
    a1[2] = 0; /*0x3b70cd*/
    a1[3] = 0; /*0x3b70d1*/
    *(_OWORD *)a1 = *(_OWORD *)a2; /*0x3b70d8*/
    *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16); /*0x3b70e0*/
    *(_QWORD *)(a2 + 16) = 0; /*0x3b70e5*/
    *(_QWORD *)(a2 + 24) = 15; /*0x3b70e9*/
    *(_BYTE *)a2 = 0; /*0x3b70f1*/
    sub_3C310(a2); /*0x3b70f6*/
    return a1; /*0x3b70fb*/
  }
}

// [17/20] Address: 0x3b73a0
// Method: GJSmartTemplate::logTemplateStatus
// Hidden C++ exception states: #wind=2
_OWORD *__fastcall GJSmartTemplate_logTemplateStatus(__int64 a1, _OWORD *a2)
{
  cocos2d::CCDictionary *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // r14d
  int v8; // r12d
  int v9; // r13d
  int v10; // edi
  cocos2d::CCArray *v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r15
  cocos2d::CCString *v14; // rax
  const char *CString; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void **v20; // rsi
  char *v21; // r12
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void **v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  char v31; // si
  cocos2d::CCArray *v32; // rax
  cocos2d::CCArray *v33; // rdi
  bool v34; // bl
  void *v35; // rcx
  char *v36; // rax
  cocos2d::CCString *v37; // rax
  const char *v38; // rax
  _OWORD *v39; // rbx
  int v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+34h] [rbp-CCh]
  int v43; // [rsp+38h] [rbp-C8h]
  int v44; // [rsp+3Ch] [rbp-C4h]
  unsigned int v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+44h] [rbp-BCh]
  cocos2d::CCArray *v47; // [rsp+48h] [rbp-B8h]
  __int128 v48; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  _OWORD *v55; // [rsp+A0h] [rbp-60h]
  void *v56[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v58; // [rsp+C8h] [rbp-38h]
  void *Src[2]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v60; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v61; // [rsp+E8h] [rbp-18h]
  char v62; // [rsp+F0h] [rbp-10h] BYREF

  v55 = a2; /*0x3b73ca*/
  v54 = a1; /*0x3b73ce*/
  v2 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x3b73e0*/
  v5 = cocos2d::CCNode::create(v4, v3); /*0x3b73e3*/
  sub_3B3120(v6, (unsigned int)&v62, 0, (_DWORD)v2, v5); /*0x3b73f8*/
  v44 = 0; /*0x3b73fd*/
  v7 = 0; /*0x3b7402*/
  v8 = 0; /*0x3b7405*/
  v42 = 0; /*0x3b7408*/
  v9 = 0; /*0x3b740d*/
  v43 = 0; /*0x3b7410*/
  v10 = 0; /*0x3b7415*/
  v41 = 0; /*0x3b7418*/
  v11 = cocos2d::CCDictionary::allKeys(v2); /*0x3b7426*/
  v47 = v11; /*0x3b7429*/
  v12 = 0; /*0x3b742e*/
  v45 = 0; /*0x3b7431*/
  v13 = -1; /*0x3b743e*/
  if ( cocos2d::CCArray::count(v11) ) /*0x3b7438*/
  {
    do /*0x3b76eb*/
    {
      v46 = v7; /*0x3b7450*/
      v14 = cocos2d::CCArray::stringAtIndex(v11, v12); /*0x3b745a*/
      CString = cocos2d::CCString::getCString(v14); /*0x3b7463*/
      *(_OWORD *)Src = 0; /*0x3b746c*/
      v60 = 0; /*0x3b7472*/
      v61 = 0; /*0x3b7476*/
      v16 = -1; /*0x3b747a*/
      do /*0x3b7483*/
        ++v16; /*0x3b7480*/
      while ( CString[v16] ); /*0x3b7483*/
      sub_3C230(Src); /*0x3b7490*/
      v48 = 0; /*0x3b7499*/
      v49 = 0; /*0x3b749e*/
      v50 = 0; /*0x3b74a3*/
      v20 = Src; /*0x3b74a8*/
      v21 = (char *)Src[0]; /*0x3b74ac*/
      v22 = v61; /*0x3b74b0*/
      if ( v61 > 0xF ) /*0x3b74b8*/
        v20 = (void **)Src[0]; /*0x3b74b8*/
      v23 = v60; /*0x3b74bc*/
      if ( v60 > 0x7FFFFFFFFFFFFFFFLL ) /*0x3b74cd*/
        sub_8D90(v18, v17, v19); /*0x3b77b3*/
      if ( v60 > 0xF ) /*0x3b74d7*/
      {
        v24 = v60 | 0xF; /*0x3b74f4*/
        if ( (v60 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3b74fb*/
        {
          if ( v24 < 0x16 ) /*0x3b750b*/
            v24 = 22; /*0x3b750b*/
        }
        else
        {
          v24 = 0x7FFFFFFFFFFFFFFFLL; /*0x3b74fd*/
        }
        *(_QWORD *)&v48 = sub_3C460(v24 + 1); /*0x3b7518*/
        v49 = v23; /*0x3b751d*/
        v50 = v24; /*0x3b7522*/
        memcpy((void *)v48, v20, v23 + 1); /*0x3b7531*/
      }
      else
      {
        v49 = v60; /*0x3b74d9*/
        v50 = 15; /*0x3b74de*/
        v48 = *(_OWORD *)v20; /*0x3b74ea*/
      }
      sub_3B32A0(v56, &v48); /*0x3b7541*/
      v51 = 0; /*0x3b754a*/
      v52 = 0; /*0x3b754f*/
      v53 = 0; /*0x3b7553*/
      v28 = v56; /*0x3b7557*/
      if ( v58 > 0xF ) /*0x3b7560*/
        v28 = (void **)v56[0]; /*0x3b7560*/
      v29 = v57; /*0x3b7565*/
      if ( v57 > 0x7FFFFFFFFFFFFFFFLL ) /*0x3b7576*/
        sub_8D90(v26, v25, v27); /*0x3b77ad*/
      if ( v57 > 0xF ) /*0x3b7580*/
      {
        v30 = v57 | 0xF; /*0x3b759b*/
        if ( (v57 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3b75a2*/
        {
          if ( v30 < 0x16 ) /*0x3b75b2*/
            v30 = 22; /*0x3b75b2*/
        }
        else
        {
          v30 = 0x7FFFFFFFFFFFFFFFLL; /*0x3b75a4*/
        }
        *(_QWORD *)&v51 = sub_3C460(v30 + 1); /*0x3b75bf*/
        v52 = v29; /*0x3b75c4*/
        v53 = v30; /*0x3b75c8*/
        memcpy((void *)v51, v28, v29 + 1); /*0x3b75d6*/
      }
      else
      {
        v52 = v57; /*0x3b7582*/
        v53 = 15; /*0x3b7586*/
        v51 = *(_OWORD *)v28; /*0x3b7591*/
      }
      v31 = sub_3B77C0(v26, &v51); /*0x3b75e5*/
      v32 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v54 + 56), v56); /*0x3b75f4*/
      v33 = v32; /*0x3b75fa*/
      v34 = v32 && cocos2d::CCArray::count(v32); /*0x3b760f*/
      ++v44; /*0x3b7615*/
      ++v7; /*0x3b7619*/
      if ( v31 ) /*0x3b761f*/
        v7 = v46; /*0x3b761f*/
      if ( v34 ) /*0x3b7627*/
      {
        ++v42; /*0x3b7629*/
        v43 += cocos2d::CCArray::count(v33); /*0x3b7636*/
      }
      v10 = v41; /*0x3b763a*/
      if ( !v31 && !v34 ) /*0x3b7645*/
        v10 = ++v41; /*0x3b7647*/
      if ( v58 > 0xF ) /*0x3b7655*/
      {
        v35 = v56[0]; /*0x3b765a*/
        if ( v58 + 1 >= 0x1000 ) /*0x3b7668*/
        {
          v35 = (void *)*((_QWORD *)v56[0] - 1); /*0x3b766e*/
          if ( (unsigned __int64)((char *)v56[0] - (char *)v35 - 8) > 0x1F ) /*0x3b767d*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3b7790*/
        }
        j_j_free(v35); /*0x3b7683*/
      }
      v57 = 0; /*0x3b768a*/
      v58 = 15; /*0x3b768e*/
      LOBYTE(v56[0]) = 0; /*0x3b7696*/
      if ( v22 > 0xF ) /*0x3b769d*/
      {
        v36 = v21; /*0x3b76a3*/
        if ( v22 + 1 >= 0x1000 ) /*0x3b76ad*/
        {
          v21 = (char *)*((_QWORD *)v21 - 1); /*0x3b76b3*/
          if ( (unsigned __int64)(v36 - v21 - 8) > 0x1F ) /*0x3b76c3*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3b77a6*/
        }
        j_j_free(v21); /*0x3b76cc*/
      }
      v12 = ++v45; /*0x3b76d5*/
      v11 = v47; /*0x3b76db*/
    }
    while ( v45 < cocos2d::CCArray::count(v47) ); /*0x3b76eb*/
    v8 = v42; /*0x3b76f1*/
    v9 = v43; /*0x3b76f6*/
  }
  v37 = cocos2d::CCString::createWithFormat(
          "Defined: %i / %i(%i), Variations : %i, Required Missing : %i",
          v8,
          v7,
          v44,
          v9,
          v10);
  v38 = cocos2d::CCString::getCString(v37); /*0x3b771f*/
  v39 = v55; /*0x3b7728*/
  *v55 = 0; /*0x3b772c*/
  *((_QWORD *)v39 + 2) = 0; /*0x3b7731*/
  *((_QWORD *)v39 + 3) = 0; /*0x3b7735*/
  do /*0x3b7743*/
    ++v13; /*0x3b7740*/
  while ( v38[v13] ); /*0x3b7743*/
  sub_3C230(v39); /*0x3b7752*/
  return v39; /*0x3b775a*/
}

// [18/20] Address: 0x3b7970
// Method: GJSmartTemplate::getTemplateState
// Hidden C++ exception states: #wind=4
unsigned int __fastcall GJSmartTemplate_getTemplateState(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  cocos2d::CCDictionary *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ecx
  cocos2d::CCArray *v9; // rbx
  unsigned int v10; // r12d
  unsigned int result; // eax
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void **v18; // rsi
  char *v19; // r15
  size_t v20; // rdi
  unsigned __int64 v21; // rbx
  cocos2d::CCArray *v22; // rbx
  void **v23; // rdx
  void **v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // esi
  void **v29; // r14
  size_t v30; // rdi
  size_t v31; // rbx
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  void **v36; // rsi
  size_t v37; // rdi
  size_t v38; // rbx
  __int64 v39; // rbx
  __int128 *v40; // rdi
  void *v41; // rcx
  __int128 *v42; // rdi
  void *v43; // rcx
  void *v44; // rcx
  char *v45; // rax
  __int128 v46; // [rsp+30h] [rbp-D0h] BYREF
  size_t v47; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+48h] [rbp-B8h]
  __int64 v49; // [rsp+50h] [rbp-B0h]
  cocos2d::CCArray *v50; // [rsp+58h] [rbp-A8h]
  void *v51[2]; // [rsp+68h] [rbp-98h] BYREF
  size_t Size; // [rsp+78h] [rbp-88h]
  unsigned __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  __int128 v55; // [rsp+98h] [rbp-68h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-58h]
  __int128 v57; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+D8h] [rbp-28h]
  char v60; // [rsp+DCh] [rbp-24h]
  int v61; // [rsp+E0h] [rbp-20h]
  __int16 v62; // [rsp+E4h] [rbp-1Ch]
  char v63; // [rsp+E6h] [rbp-1Ah]
  void *Src[2]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v65; // [rsp+100h] [rbp+0h]
  unsigned __int64 v66; // [rsp+108h] [rbp+8h]
  char v67[8]; // [rsp+110h] [rbp+10h] BYREF
  char v68[32]; // [rsp+118h] [rbp+18h] BYREF
  char v69[56]; // [rsp+138h] [rbp+38h] BYREF
  char v70; // [rsp+170h] [rbp+70h] BYREF

  v3 = a1; /*0x3b79a3*/
  v49 = a1; /*0x3b79a6*/
  v4 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x3b79b3*/
  v7 = cocos2d::CCNode::create(v6, v5); /*0x3b79b6*/
  sub_3B3120(v8, (unsigned int)&v70, 0, (_DWORD)v4, v7); /*0x3b79cb*/
  v9 = cocos2d::CCDictionary::allKeys(v4); /*0x3b79d9*/
  v50 = v9; /*0x3b79dc*/
  v10 = 0; /*0x3b79e1*/
  result = cocos2d::CCArray::count(v9); /*0x3b79e7*/
  if ( result ) /*0x3b79ef*/
  {
    do /*0x3b7f0d*/
    {
      v12 = cocos2d::CCArray::stringAtIndex(v9, v10); /*0x3b7a06*/
      CString = cocos2d::CCString::getCString(v12); /*0x3b7a0f*/
      *(_OWORD *)Src = 0; /*0x3b7a18*/
      v65 = 0; /*0x3b7a1c*/
      v66 = 0; /*0x3b7a20*/
      v14 = -1; /*0x3b7a24*/
      do /*0x3b7a33*/
        ++v14; /*0x3b7a30*/
      while ( CString[v14] ); /*0x3b7a33*/
      sub_3C230(Src); /*0x3b7a41*/
      v46 = 0; /*0x3b7a4a*/
      v47 = 0; /*0x3b7a4f*/
      v48 = 0; /*0x3b7a54*/
      v18 = Src; /*0x3b7a59*/
      v19 = (char *)Src[0]; /*0x3b7a5d*/
      if ( v66 > 0xF ) /*0x3b7a66*/
        v18 = (void **)Src[0]; /*0x3b7a66*/
      v20 = v65; /*0x3b7a6a*/
      if ( v65 > 0x7FFFFFFFFFFFFFFFLL ) /*0x3b7a7b*/
        sub_8D90(v16, v15, v17); /*0x3b7f8d*/
      if ( v65 > 0xF ) /*0x3b7a85*/
      {
        v21 = v65 | 0xF; /*0x3b7aa2*/
        if ( (v65 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3b7aa9*/
        {
          if ( v21 < 0x16 ) /*0x3b7ab9*/
            v21 = 22; /*0x3b7ab9*/
        }
        else
        {
          v21 = 0x7FFFFFFFFFFFFFFFLL; /*0x3b7aab*/
        }
        *(_QWORD *)&v46 = sub_3C460(v21 + 1); /*0x3b7ac6*/
        v47 = v20; /*0x3b7acb*/
        v48 = v21; /*0x3b7ad0*/
        memcpy((void *)v46, v18, v20 + 1); /*0x3b7adf*/
      }
      else
      {
        v47 = v65; /*0x3b7a87*/
        v48 = 15; /*0x3b7a8c*/
        v46 = *(_OWORD *)v18; /*0x3b7a98*/
      }
      sub_3B32A0(v51, &v46); /*0x3b7aee*/
      v22 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v3 + 56), v51); /*0x3b7b03*/
      v54 = 0; /*0x3b7b08*/
      v55 = 0; /*0x3b7b0f*/
      *(_QWORD *)&v56 = 0; /*0x3b7b13*/
      *((_QWORD *)&v56 + 1) = 15; /*0x3b7b17*/
      LOBYTE(v55) = 0; /*0x3b7b1f*/
      v57 = 0; /*0x3b7b23*/
      *(_QWORD *)&v58 = 0; /*0x3b7b27*/
      *((_QWORD *)&v58 + 1) = 15; /*0x3b7b2b*/
      LOBYTE(v57) = 0; /*0x3b7b33*/
      v59 = 0; /*0x3b7b37*/
      v60 = 0; /*0x3b7b3a*/
      v61 = 0; /*0x3b7b3e*/
      v62 = 0; /*0x3b7b41*/
      v63 = 0; /*0x3b7b45*/
      v23 = v51; /*0x3b7b49*/
      if ( v53 > 0xF ) /*0x3b7b53*/
        v23 = (void **)v51[0]; /*0x3b7b53*/
      sub_3F5A0(&v55, v23, Size); /*0x3b7b62*/
      v24 = v51; /*0x3b7b67*/
      if ( v53 > 0xF ) /*0x3b7b71*/
        v24 = (void **)v51[0]; /*0x3b7b71*/
      sub_3F5A0(&v57, v24, Size); /*0x3b7b80*/
      if ( v22 ) /*0x3b7b88*/
      {
        v28 = cocos2d::CCArray::count(v22); /*0x3b7b93*/
        v59 = v28; /*0x3b7b95*/
      }
      else
      {
        v28 = 0; /*0x3b7b9a*/
        v59 = 0; /*0x3b7b9c*/
      }
      v46 = 0; /*0x3b7ba2*/
      v47 = 0; /*0x3b7ba7*/
      v48 = 0; /*0x3b7bac*/
      v29 = v51; /*0x3b7bb1*/
      if ( v53 > 0xF ) /*0x3b7bbb*/
        v29 = (void **)v51[0]; /*0x3b7bbb*/
      v30 = Size; /*0x3b7bc1*/
      if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x3b7bd3*/
        sub_8D90(v26, v25, v27); /*0x3b7f87*/
      if ( Size > 0xF ) /*0x3b7bdd*/
      {
        v31 = Size | 0xF; /*0x3b7bfb*/
        if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3b7c02*/
        {
          if ( v31 < 0x16 ) /*0x3b7c12*/
            v31 = 22; /*0x3b7c12*/
        }
        else
        {
          v31 = 0x7FFFFFFFFFFFFFFFLL; /*0x3b7c04*/
        }
        *(_QWORD *)&v46 = sub_3C460(v31 + 1); /*0x3b7c1f*/
        v47 = v30; /*0x3b7c24*/
        v48 = v31; /*0x3b7c29*/
        memcpy((void *)v46, v29, v30 + 1); /*0x3b7c38*/
      }
      else
      {
        v47 = Size; /*0x3b7bdf*/
        v48 = 15; /*0x3b7be4*/
        v46 = *(_OWORD *)v29; /*0x3b7bf1*/
      }
      v32 = sub_3B77C0(v26, &v46); /*0x3b7c42*/
      v60 = v32; /*0x3b7c47*/
      if ( v28 > 0 || v32 ) /*0x3b7c54*/
      {
        v3 = v49; /*0x3b7e29*/
      }
      else
      {
        v46 = 0; /*0x3b7c5d*/
        v47 = 0; /*0x3b7c64*/
        v48 = 0; /*0x3b7c69*/
        v36 = v51; /*0x3b7c6e*/
        if ( v53 > 0xF ) /*0x3b7c78*/
          v36 = (void **)v51[0]; /*0x3b7c78*/
        v37 = Size; /*0x3b7c7e*/
        if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x3b7c90*/
          sub_8D90(v34, v33, v35); /*0x3b7f93*/
        if ( Size > 0xF ) /*0x3b7c9a*/
        {
          v38 = Size | 0xF; /*0x3b7cb7*/
          if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3b7cbe*/
          {
            if ( v38 < 0x16 ) /*0x3b7cce*/
              v38 = 22; /*0x3b7cce*/
          }
          else
          {
            v38 = 0x7FFFFFFFFFFFFFFFLL; /*0x3b7cc0*/
          }
          *(_QWORD *)&v46 = sub_3C460(v38 + 1); /*0x3b7cdb*/
          v47 = v37; /*0x3b7ce0*/
          v48 = v38; /*0x3b7ce5*/
          memcpy((void *)v46, v36, v37 + 1); /*0x3b7cf4*/
        }
        else
        {
          v47 = Size; /*0x3b7c9c*/
          v48 = 15; /*0x3b7ca1*/
          v46 = *(_OWORD *)v36; /*0x3b7cad*/
        }
        v3 = v49; /*0x3b7d02*/
        v39 = sub_3B44C0(v49, v67, &v46); /*0x3b7d0f*/
        v54 = *(_QWORD *)v39; /*0x3b7d15*/
        v40 = (__int128 *)(v39 + 8); /*0x3b7d19*/
        if ( &v55 != (__int128 *)(v39 + 8) ) /*0x3b7d24*/
        {
          if ( *((_QWORD *)&v56 + 1) > 0xFu ) /*0x3b7d2e*/
          {
            v41 = (void *)v55; /*0x3b7d33*/
            if ( (unsigned __int64)(*((_QWORD *)&v56 + 1) + 1LL) >= 0x1000 ) /*0x3b7d41*/
            {
              v41 = *(void **)(v55 - 8); /*0x3b7d47*/
              if ( (unsigned __int64)(v55 - (_QWORD)v41 - 8) > 0x1F ) /*0x3b7d56*/
LABEL_70:
                invoke_watson(0, 0, 0, 0, 0); /*0x3b7f3d*/
            }
            j_j_free(v41); /*0x3b7d5c*/
          }
          v55 = *v40; /*0x3b7d64*/
          v56 = *(_OWORD *)(v39 + 24); /*0x3b7d6c*/
          *(_QWORD *)(v39 + 24) = 0; /*0x3b7d70*/
          *(_QWORD *)(v39 + 32) = 15; /*0x3b7d78*/
          *(_BYTE *)v40 = 0; /*0x3b7d80*/
        }
        v42 = (__int128 *)(v39 + 40); /*0x3b7d83*/
        if ( &v57 != (__int128 *)(v39 + 40) ) /*0x3b7d8e*/
        {
          if ( *((_QWORD *)&v58 + 1) > 0xFu ) /*0x3b7d98*/
          {
            v43 = (void *)v57; /*0x3b7d9d*/
            if ( (unsigned __int64)(*((_QWORD *)&v58 + 1) + 1LL) >= 0x1000 ) /*0x3b7dab*/
            {
              v43 = *(void **)(v57 - 8); /*0x3b7db1*/
              if ( (unsigned __int64)(v57 - (_QWORD)v43 - 8) > 0x1F ) /*0x3b7dc0*/
                goto LABEL_70; /*0x3b7dc0*/
            }
            j_j_free(v43); /*0x3b7dc6*/
          }
          v57 = *v42; /*0x3b7dce*/
          v58 = *(_OWORD *)(v39 + 56); /*0x3b7dd6*/
          *(_QWORD *)(v39 + 56) = 0; /*0x3b7dda*/
          *(_QWORD *)(v39 + 64) = 15; /*0x3b7de2*/
          *(_BYTE *)v42 = 0; /*0x3b7dea*/
        }
        v59 = *(_DWORD *)(v39 + 72); /*0x3b7df0*/
        v60 = *(_BYTE *)(v39 + 76); /*0x3b7df7*/
        v61 = *(_DWORD *)(v39 + 80); /*0x3b7dfd*/
        v62 = *(_WORD *)(v39 + 84); /*0x3b7e04*/
        v63 = *(_BYTE *)(v39 + 86); /*0x3b7e12*/
        sub_3C310(v69); /*0x3b7e19*/
        sub_3C310(v68); /*0x3b7e22*/
      }
      if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a2 + 16) ) /*0x3b7e36*/
      {
        sub_3B97C0(a2, *(_QWORD *)(a2 + 8), &v54); /*0x3b7e55*/
      }
      else
      {
        sub_3B52A0(*(_QWORD *)(a2 + 8), &v54); /*0x3b7e3f*/
        *(_QWORD *)(a2 + 8) += 88LL; /*0x3b7e44*/
      }
      sub_3C310(&v57); /*0x3b7e5f*/
      sub_3C310(&v55); /*0x3b7e68*/
      if ( v53 > 0xF ) /*0x3b7e76*/
      {
        v44 = v51[0]; /*0x3b7e7b*/
        if ( v53 + 1 >= 0x1000 ) /*0x3b7e8a*/
        {
          v44 = (void *)*((_QWORD *)v51[0] - 1); /*0x3b7e90*/
          if ( (unsigned __int64)((char *)v51[0] - (char *)v44 - 8) > 0x1F ) /*0x3b7e9f*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3b7f6a*/
        }
        j_j_free(v44); /*0x3b7ea5*/
      }
      Size = 0; /*0x3b7eac*/
      v53 = 15; /*0x3b7eb1*/
      LOBYTE(v51[0]) = 0; /*0x3b7eb9*/
      if ( v66 > 0xF ) /*0x3b7ec6*/
      {
        v45 = v19; /*0x3b7ecc*/
        if ( v66 + 1 >= 0x1000 ) /*0x3b7ed6*/
        {
          v19 = (char *)*((_QWORD *)v19 - 1); /*0x3b7edc*/
          if ( (unsigned __int64)(v45 - v19 - 8) > 0x1F ) /*0x3b7eeb*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3b7f80*/
        }
        j_j_free(v19); /*0x3b7ef4*/
      }
      ++v10; /*0x3b7ef9*/
      v9 = v50; /*0x3b7efc*/
      result = cocos2d::CCArray::count(v50); /*0x3b7f04*/
    }
    while ( v10 < result ); /*0x3b7f0d*/
  }
  return result; /*0x3b7f13*/
}

// [19/20] Address: 0x3b7fa0
// Method: GJSmartTemplate::dataLoaded
// Hidden C++ exception states: #wind=1
unsigned int __fastcall GJSmartTemplate_dataLoaded(__int64 a1, DS_Dictionary *a2)
{
  __int64 StringForKey; // rax
  cocos2d::CCObject *DictForKey; // rax
  cocos2d::CCObject *v6; // rbx
  cocos2d::CCDictionary *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCArray *v9; // r12
  unsigned int v10; // r14d
  unsigned int result; // eax
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void **v18; // rsi
  size_t v19; // rdi
  size_t v20; // rbx
  __int64 v21; // rax
  unsigned int *v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 *i; // rdi
  __int64 v26; // rax
  void **v27; // rdx
  void *Src[2]; // [rsp+28h] [rbp-48h] BYREF
  size_t Size; // [rsp+38h] [rbp-38h]
  unsigned __int64 v30; // [rsp+40h] [rbp-30h]
  __int128 v31; // [rsp+48h] [rbp-28h] BYREF
  size_t v32; // [rsp+58h] [rbp-18h]
  __int64 v33; // [rsp+60h] [rbp-10h]

  *(_DWORD *)(a1 + 200) = DS_Dictionary::getIntegerForKey(a2, (const char *)&word_708050); /*0x3b7fdb*/
  StringForKey = DS_Dictionary::getStringForKey(a2, &v31, &word_708048); /*0x3b7ff0*/
  sub_58AD0(a1 + 136, StringForKey); /*0x3b8000*/
  sub_3C310(&v31); /*0x3b8009*/
  *(_BYTE *)(a1 + 130) = DS_Dictionary::getIntegerForKey(a2, (const char *)&word_70803C) != 0; /*0x3b8023*/
  *(_BYTE *)(a1 + 128) = DS_Dictionary::getIntegerForKey(a2, (const char *)&word_708038) != 0; /*0x3b803f*/
  *(_BYTE *)(a1 + 129) = DS_Dictionary::getIntegerForKey(a2, "6") != 0; /*0x3b805b*/
  *(_BYTE *)(a1 + 131) = DS_Dictionary::getIntegerForKey(a2, (const char *)&word_708030) != 0; /*0x3b8077*/
  DictForKey = DS_Dictionary::getDictForKey(a2, (const char *)&word_708044, 0); /*0x3b808b*/
  v6 = DictForKey; /*0x3b8091*/
  v7 = *(cocos2d::CCDictionary **)(a1 + 56); /*0x3b8094*/
  if ( v7 != DictForKey ) /*0x3b809b*/
  {
    if ( DictForKey ) /*0x3b80a0*/
      cocos2d::CCObject::retain(DictForKey); /*0x3b80a5*/
    v8 = *(cocos2d::CCObject **)(a1 + 56); /*0x3b80ab*/
    if ( v8 ) /*0x3b80b2*/
      cocos2d::CCObject::release(v8); /*0x3b80b4*/
    *(_QWORD *)(a1 + 56) = v6; /*0x3b80ba*/
    v7 = v6; /*0x3b80be*/
  }
  v9 = cocos2d::CCDictionary::allKeys(v7); /*0x3b80c7*/
  v10 = 0; /*0x3b80cd*/
  result = cocos2d::CCArray::count(v9); /*0x3b80d3*/
  if ( result ) /*0x3b80db*/
  {
    do /*0x3b823f*/
    {
      v12 = cocos2d::CCArray::stringAtIndex(v9, v10); /*0x3b80e7*/
      CString = cocos2d::CCString::getCString(v12); /*0x3b80f0*/
      *(_OWORD *)Src = 0; /*0x3b80f9*/
      Size = 0; /*0x3b80fd*/
      v30 = 0; /*0x3b8101*/
      v14 = -1; /*0x3b8105*/
      do /*0x3b8113*/
        ++v14; /*0x3b8110*/
      while ( CString[v14] ); /*0x3b8113*/
      sub_3C230(Src); /*0x3b8121*/
      v31 = 0; /*0x3b812a*/
      v32 = 0; /*0x3b812e*/
      v33 = 0; /*0x3b8132*/
      v18 = Src; /*0x3b8136*/
      if ( v30 > 0xF ) /*0x3b813f*/
        v18 = (void **)Src[0]; /*0x3b813f*/
      v19 = Size; /*0x3b8144*/
      if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x3b8155*/
        sub_8D90(v16, v15, v17); /*0x3b8269*/
      if ( Size > 0xF ) /*0x3b815f*/
      {
        v20 = Size | 0xF; /*0x3b8179*/
        if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3b8180*/
        {
          if ( v20 < 0x16 ) /*0x3b8190*/
            v20 = 22; /*0x3b8190*/
        }
        else
        {
          v20 = 0x7FFFFFFFFFFFFFFFLL; /*0x3b8182*/
        }
        *(_QWORD *)&v31 = sub_3C460(v20 + 1); /*0x3b819d*/
        v32 = v19; /*0x3b81a1*/
        v33 = v20; /*0x3b81a5*/
        memcpy((void *)v31, v18, v19 + 1); /*0x3b81b3*/
      }
      else
      {
        v32 = Size; /*0x3b8161*/
        v33 = 15; /*0x3b8165*/
        v31 = *(_OWORD *)v18; /*0x3b8170*/
      }
      sub_3B34B0(a1, &v31); /*0x3b81bf*/
      v21 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 56), Src); /*0x3b81cc*/
      if ( v21 ) /*0x3b81d5*/
      {
        v22 = *(unsigned int **)(v21 + 56); /*0x3b81d7*/
        v23 = *v22; /*0x3b81db*/
        if ( (_DWORD)v23 ) /*0x3b81df*/
        {
          v24 = (__int64 *)*((_QWORD *)v22 + 2); /*0x3b81e1*/
          for ( i = &v24[v23 - 1]; v24 <= i; ++v24 ) /*0x3b81f0*/
          {
            v26 = *v24; /*0x3b81f2*/
            if ( !*v24 ) /*0x3b81f2*/
              break; /*0x3b81f8*/
            if ( (void **)(v26 + 56) != Src ) /*0x3b8205*/
            {
              v27 = Src; /*0x3b8207*/
              if ( v30 > 0xF ) /*0x3b8210*/
                v27 = (void **)Src[0]; /*0x3b8210*/
              sub_3F5A0((void *)(v26 + 56), v27, Size); /*0x3b8219*/
            }
          }
        }
      }
      sub_3C310(Src); /*0x3b822b*/
      ++v10; /*0x3b8230*/
      result = cocos2d::CCArray::count(v9); /*0x3b8236*/
    }
    while ( v10 < result ); /*0x3b823f*/
  }
  return result; /*0x3b8245*/
}

// [20/20] Address: 0x3b8270
// Method: GJSmartTemplate::encodeWithCoder
void __fastcall GJSmartTemplate_encodeWithCoder(__int64 a1, DS_Dictionary *a2)
{
  DS_Dictionary::setIntegerForKey(a2, "kCEK", 10); /*0x3b8290*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708050, *(_DWORD *)(a1 + 200)); /*0x3b82a7*/
  DS_Dictionary::setStringForKey(a2, &word_708048, a1 + 136); /*0x3b82be*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_70803C, *(unsigned __int8 *)(a1 + 130)); /*0x3b82d6*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708038, *(unsigned __int8 *)(a1 + 128)); /*0x3b82ee*/
  DS_Dictionary::setIntegerForKey(a2, "6", *(unsigned __int8 *)(a1 + 129)); /*0x3b8306*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708030, *(unsigned __int8 *)(a1 + 131)); /*0x3b831e*/
  DS_Dictionary::setDictForKey(a2, (const char *)&word_708044, *(struct cocos2d::CCDictionary **)(a1 + 56)); /*0x3b833c*/
}

// Address: 0x3b6530
// Method: GJSmartTemplate::keyFromNeighbors
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJSmartTemplate_keyFromNeighbors(
        _QWORD *a1,
        const struct cocos2d::CCPoint *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  float v12; // xmm7_4
  float v13; // xmm9_4
  __int64 v14; // rcx
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm9_4
  float v18; // xmm9_4
  float v19; // xmm9_4
  float v20; // xmm9_4
  float v21; // xmm9_4
  float *v22; // rax
  _BYTE v25[8]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v28[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v30[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v32[8]; // [rsp+70h] [rbp-90h] BYREF
  float v33; // [rsp+78h] [rbp-88h] BYREF
  float v34; // [rsp+80h] [rbp-80h] BYREF
  float v35; // [rsp+88h] [rbp-78h] BYREF
  float v36; // [rsp+90h] [rbp-70h] BYREF
  float v37; // [rsp+98h] [rbp-68h] BYREF
  float v38; // [rsp+A0h] [rbp-60h] BYREF
  float v39; // [rsp+A8h] [rbp-58h] BYREF
  float v40; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v41; // [rsp+B8h] [rbp-48h]
  const struct cocos2d::CCPoint *v42; // [rsp+C0h] [rbp-40h]
  _DWORD *v43; // [rsp+C8h] [rbp-38h]
  _QWORD *v44; // [rsp+D0h] [rbp-30h]
  _BYTE v45[96]; // [rsp+D8h] [rbp-28h] BYREF

  v41 = a4;
  v43 = a3;
  v42 = a2;
  v44 = a1;
  v12 = 30.0;
  v13 = 30.0;
  ObjectToolbox_sharedState();
  v15 = ObjectToolbox_gridNodeSizeForKey(v14, 0);
  if ( v15 == 15.0 )
    v13 = 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, v13, -v13);
  cocos2d::CCPoint::operator+(a2, &v33, v25);
  v16 = 30.0;
  ObjectToolbox_sharedState();
  if ( v15 == 15.0 )
    v16 = 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v26, -v16, -v16);
  cocos2d::CCPoint::operator+(a2, &v34, v26);
  v17 = 30.0;
  ObjectToolbox_sharedState();
  if ( v15 == 15.0 )
    v17 = 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v27, v17, v17);
  cocos2d::CCPoint::operator+(a2, &v35, v27);
  v18 = 30.0;
  ObjectToolbox_sharedState();
  if ( v15 == 15.0 )
    v18 = 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, -v18, v18);
  cocos2d::CCPoint::operator+(a2, &v36, v28);
  v19 = 30.0;
  ObjectToolbox_sharedState();
  if ( v15 == 15.0 )
    v19 = 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v29, v19, 0.0);
  cocos2d::CCPoint::operator+(a2, &v37, v29);
  v20 = 30.0;
  ObjectToolbox_sharedState();
  if ( v15 == 15.0 )
    v20 = 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, -v20, 0.0);
  cocos2d::CCPoint::operator+(a2, &v38, v30);
  v21 = 30.0;
  ObjectToolbox_sharedState();
  if ( v15 == 15.0 )
    v21 = 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v31, 0.0, -v21);
  cocos2d::CCPoint::operator+(a2, &v39, v31);
  ObjectToolbox_sharedState();
  if ( v15 == 15.0 )
    v12 = 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, 0.0, v12);
  cocos2d::CCPoint::operator+(a2, &v40, v32);
  GJSmartTemplate_smartObjectToType(a11, &v33);
  GJSmartTemplate_smartObjectToType(a10, &v34);
  GJSmartTemplate_smartObjectToType(a9, &v35);
  GJSmartTemplate_smartObjectToType(a8, &v36);
  GJSmartTemplate_smartObjectToType(a7, &v37);
  GJSmartTemplate_smartObjectToType(a6, &v38);
  GJSmartTemplate_smartObjectToType(a5, &v39);
  GJSmartTemplate_smartObjectToType(v41, &v40);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v45, v42);
  GJSmartTemplate_smartObjectToType(v43, v22);
  *(_OWORD *)a1 = 0;
  a1[2] = 0;
  a1[3] = 15;
  *(_BYTE *)a1 = 0;
  sub_3CBD0(a1);
  sub_3CBD0(a1);
  sub_3CBD0(a1);
  sub_3CBD0(a1);
  sub_3CBD0(a1);
  sub_3CBD0(a1);
  sub_3CBD0(a1);
  sub_3CBD0(a1);
  sub_3CBD0(a1);
  return a1;
}
