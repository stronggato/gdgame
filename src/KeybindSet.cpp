#include <Geode/binding/KeybindSet.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x4452a0
// Method: KeybindSet::chordsForAction
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall KeybindSet_chordsForAction(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // r10
  __int64 *v5; // r9
  __int64 *v6; // rax
  __int64 *i; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 **v10; // r9
  __int64 j; // rcx
  __int64 *k; // r9

  v4 = 0; /*0x4452ad*/
  *a2 = 0; /*0x4452b5*/
  a2[1] = 0; /*0x4452b8*/
  a2[2] = 0; /*0x4452bc*/
  v5 = *(__int64 **)(a1 + 8); /*0x4452c8*/
  v6 = (__int64 *)v5[1]; /*0x4452cc*/
  for ( i = v5; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 ) /*0x4452d3*/
  {
    if ( *((_DWORD *)v6 + 8) >= a3 ) /*0x4452e4*/
      i = v6; /*0x4452ec*/
    else
      v6 += 2; /*0x4452e6*/
  }
  if ( !*((_BYTE *)i + 25) && a3 >= *((_DWORD *)i + 8) && i != v5 ) /*0x44530b*/
  {
    v8 = (_QWORD *)i[5]; /*0x44530d*/
    v9 = (_QWORD *)*v8; /*0x445314*/
    while ( v9 != v8 ) /*0x44531a*/
    {
      ++v4; /*0x445320*/
      v10 = (__int64 **)v9[2]; /*0x445323*/
      if ( *((_BYTE *)v10 + 25) ) /*0x445327*/
      {
        for ( j = v9[1]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 8) ) /*0x445332*/
        {
          if ( v9 != *(_QWORD **)(j + 16) ) /*0x44533c*/
            break; /*0x44533c*/
          v9 = (_QWORD *)j; /*0x44533e*/
        }
        v9 = (_QWORD *)j; /*0x44534b*/
      }
      else
      {
        v9 = (_QWORD *)v9[2]; /*0x445350*/
        for ( k = *v10; !*((_BYTE *)k + 25); k = (__int64 *)*k ) /*0x445356*/
          v9 = k; /*0x445360*/
      }
    }
    sub_447D60(a2, *v8, v4); /*0x44537d*/
  }
  return a2; /*0x445385*/
}

// [2/5] Address: 0x445390
// Method: KeybindSet::actionsForChord
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall KeybindSet_actionsForChord(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v5; // rbx
  _DWORD *v6; // r8
  __int64 *v7; // rcx
  __int64 *i; // rax
  _DWORD *v9; // rdx
  __int64 **v10; // rcx
  __int64 *j; // rax
  __int64 *k; // rcx

  *a2 = 0; /*0x4453b0*/
  a2[1] = 0; /*0x4453b3*/
  a2[2] = 0; /*0x4453b7*/
  v5 = **(__int64 ***)(a1 + 8); /*0x4453c7*/
  while ( !*((_BYTE *)v5 + 25) ) /*0x4453ca*/
  {
    v6 = v5 + 4; /*0x4453e0*/
    v7 = (__int64 *)v5[5]; /*0x4453e4*/
    for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i ) /*0x4453ec*/
    {
      if ( *((_DWORD *)i + 7) >= a3 ) /*0x4453f5*/
        v7 = i; /*0x4453fd*/
      else
        i += 2; /*0x4453f7*/
    }
    if ( !*((_BYTE *)v7 + 25) && a3 >= *((_DWORD *)v7 + 7) ) /*0x445412*/
    {
      v9 = (_DWORD *)a2[1]; /*0x445414*/
      if ( v9 == (_DWORD *)a2[2] ) /*0x44541c*/
      {
        sub_689C0(a2, v9, v6); /*0x44542d*/
      }
      else
      {
        *v9 = *v6; /*0x445421*/
        a2[1] += 4LL; /*0x445423*/
      }
    }
    v10 = (__int64 **)v5[2]; /*0x445432*/
    if ( *((_BYTE *)v10 + 25) ) /*0x445436*/
    {
      for ( j = (__int64 *)v5[1]; !*((_BYTE *)j + 25); j = (__int64 *)j[1] ) /*0x445440*/
      {
        if ( v5 != (__int64 *)j[2] ) /*0x44544a*/
          break; /*0x44544a*/
        v5 = j; /*0x44544c*/
      }
      v5 = j; /*0x445459*/
    }
    else
    {
      v5 = (__int64 *)v5[2]; /*0x44545e*/
      for ( k = *v10; !*((_BYTE *)k + 25); k = (__int64 *)*k ) /*0x445464*/
        v5 = k; /*0x445470*/
    }
  }
  return a2; /*0x44548c*/
}

// [3/5] Address: 0x4454a0
// Method: KeybindSet::bindChord
__int64 __fastcall KeybindSet_bindChord(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3; /*0x4454a0*/
  v7 = a2; /*0x4454a5*/
  v4 = sub_389280(a1 + 8, &v8); /*0x4454ba*/
  result = sub_BB1F0(v4, v6, &v7); /*0x4454cc*/
  *(_BYTE *)(a1 + 24) = 1; /*0x4454d1*/
  return result; /*0x4454d5*/
}

// [4/5] Address: 0x4454e0
// Method: KeybindSet::unbindChord
void __fastcall KeybindSet_unbindChord(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rdx
  __int64 *v5; // rbx
  __int64 *i; // rax
  char *v7; // rbx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2; /*0x4454ea*/
  v3 = *(__int64 **)(a1 + 8); /*0x4454f3*/
  v5 = v3; /*0x4454fa*/
  for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i ) /*0x445501*/
  {
    if ( *((_DWORD *)i + 8) >= a3 ) /*0x44550b*/
      v5 = i; /*0x445513*/
    else
      i += 2; /*0x44550d*/
  }
  if ( !*((_BYTE *)v5 + 25) && a3 >= *((_DWORD *)v5 + 8) && v5 != v3 ) /*0x44552e*/
  {
    sub_BB450(v5 + 5, &v8); /*0x445539*/
    if ( !v5[6] ) /*0x44553e*/
    {
      v7 = (char *)sub_69860(a1 + 8, v5); /*0x445551*/
      sub_BB6F0(v7 + 40, v7 + 40); /*0x44555b*/
      j_j_free(v7); /*0x445568*/
    }
    *(_BYTE *)(a1 + 24) = 1; /*0x44556d*/
  }
}

// [5/5] Address: 0x446230
// Method: KeybindSet::~KeybindSet
char *__fastcall KeybindSet__dtor_KeybindSet(char *Block, char a2)
{
  sub_389620(Block + 8, Block + 8, *(_QWORD *)(*((_QWORD *)Block + 1) + 8LL)); /*0x446254*/
  j_j_free(*((void **)Block + 1)); /*0x446262*/
  *(_QWORD *)Block = &KeybindSource::`vftable'; /*0x44626e*/
  if ( (a2 & 1) != 0 ) /*0x446275*/
    j_j_free(Block); /*0x44627f*/
  return Block; /*0x446284*/
}
