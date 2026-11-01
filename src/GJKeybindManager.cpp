#include <Geode/binding/GJKeybindManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x384870
// Method: GJKeybindManager::handleGlobalAction
__int64 __fastcall GJKeybindManager_handleGlobalAction(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  return sub_385220(a2, a3);
}

// [2/3] Address: 0x384980
// Method: GJKeybindManager::~GJKeybindManager
char *__fastcall GJKeybindManager__dtor_GJKeybindManager(char *Block, char a2)
{
  qword_906000 = 0; /*0x384996*/
  *(_QWORD *)Block = &GJKeybindManager::`vftable'; /*0x3849a1*/
  sub_389620(Block + 200, Block + 200, *(_QWORD *)(*((_QWORD *)Block + 25) + 8LL)); /*0x3849c2*/
  j_j_free(*((void **)Block + 25)); /*0x3849d3*/
  sub_389620(Block + 184, Block + 184, *(_QWORD *)(*((_QWORD *)Block + 23) + 8LL)); /*0x3849f1*/
  j_j_free(*((void **)Block + 23)); /*0x384a02*/
  sub_3DA90(Block + 144); /*0x384a0e*/
  sub_3893B0(Block + 128); /*0x384a1a*/
  sub_3DA90(Block + 80); /*0x384a23*/
  sub_3893B0(Block + 64); /*0x384a2c*/
  cocos2d::CCObject::~CCObject((cocos2d::CCObject *)Block); /*0x384a34*/
  if ( (a2 & 1) != 0 ) /*0x384a3e*/
    j_j_free(Block); /*0x384a48*/
  return Block; /*0x384a4d*/
}

// [3/3] Address: 0x384ab0
// Method: GJKeybindManager::actionsForKey
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJKeybindManager_actionsForKey(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        char a6)
{
  unsigned int v8; // edx
  int v9; // eax
  int v10; // ecx
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // si
  __int64 *v16; // rbx
  int v17; // r8d
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  __int64 **v22; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  int v26; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v27; // [rsp+58h] [rbp+10h]
  int v28; // [rsp+60h] [rbp+18h]

  v27 = a2; /*0x384ab0*/
  *a2 = 0; /*0x384ace*/
  a2[1] = 0; /*0x384ad5*/
  a2[2] = 0; /*0x384add*/
  v28 = 1; /*0x384ae5*/
  v8 = a3; /*0x384aed*/
  if ( (unsigned int)a3 - 1001 > 0x2B ) /*0x384afa*/
  {
    v9 = a3 | 0x10000; /*0x384afe*/
    if ( !a4 ) /*0x384b05*/
      v9 = a3; /*0x384b05*/
    v10 = v9 | 0x20000; /*0x384b0a*/
    if ( !a5 ) /*0x384b13*/
      v10 = v9; /*0x384b13*/
    v8 = v10 | 0x40000; /*0x384b18*/
    if ( !a6 ) /*0x384b21*/
      v8 = v10; /*0x384b21*/
  }
  v11 = (__int64 *)(16 /*0x384b77*/
                  * (a1[13]
                   & (0x100000001B3LL
                    * (((unsigned __int64)v8 >> 24)
                     ^ (0x100000001B3LL
                      * (((unsigned __int64)v8 >> 16)
                       ^ (0x100000001B3LL
                        * ((0x100000001B3LL * ((unsigned __int8)v8 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v8))))))))
                  + a1[10]);
  v12 = v11[1]; /*0x384b7a*/
  v13 = a1[8]; /*0x384b7e*/
  if ( v12 != v13 ) /*0x384b85*/
  {
    v14 = *v11; /*0x384b87*/
    if ( v8 == *(_DWORD *)(v12 + 16) ) /*0x384b8d*/
      goto LABEL_14; /*0x384b8d*/
    while ( v12 != v14 ) /*0x384b93*/
    {
      v12 = *(_QWORD *)(v12 + 8); /*0x384b95*/
      if ( v8 == *(_DWORD *)(v12 + 16) ) /*0x384b9c*/
        goto LABEL_14; /*0x384b9c*/
    }
  }
  v12 = 0; /*0x384ba0*/
LABEL_14:
  if ( !v12 ) /*0x384ba5*/
    v12 = a1[8]; /*0x384ba5*/
  if ( v12 != v13 ) /*0x384bac*/
  {
    v15 = 0; /*0x384bb2*/
    v16 = **(__int64 ***)(v12 + 24); /*0x384bb9*/
    while ( !*((_BYTE *)v16 + 25) ) /*0x384bbc*/
    {
      v17 = *((_DWORD *)v16 + 7); /*0x384bd0*/
      v26 = v17; /*0x384bd4*/
      v18 = (__int64 *)(qword_906028 /*0x384c1f*/
                      + 16
                      * (qword_906040
                       & (0x100000001B3LL
                        * ((0x100000001B3LL
                          * (BYTE2(v17)
                           ^ (0x100000001B3LL
                            * ((0x100000001B3LL * ((unsigned __int8)v17 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v17)))))
                         ^ HIBYTE(v17)))));
      v19 = v18[1]; /*0x384c26*/
      if ( v19 != qword_906018 ) /*0x384c31*/
      {
        v20 = *v18; /*0x384c33*/
        if ( v17 == *(_DWORD *)(v19 + 16) ) /*0x384c3a*/
          goto LABEL_24; /*0x384c3a*/
        while ( v19 != v20 ) /*0x384c43*/
        {
          v19 = *(_QWORD *)(v19 + 8); /*0x384c45*/
          if ( v17 == *(_DWORD *)(v19 + 16) ) /*0x384c4d*/
            goto LABEL_24; /*0x384c4d*/
        }
      }
      v19 = 0; /*0x384c51*/
LABEL_24:
      if ( !v19 ) /*0x384c56*/
        goto LABEL_27; /*0x384c56*/
      if ( !v15 ) /*0x384c5b*/
      {
        v15 = 1; /*0x384c5d*/
LABEL_27:
        v21 = (_DWORD *)a2[1]; /*0x384c60*/
        if ( v21 == (_DWORD *)a2[2] ) /*0x384c68*/
        {
          sub_689C0(a2, v21, &v26); /*0x384c7c*/
        }
        else
        {
          *v21 = v17; /*0x384c6a*/
          a2[1] += 4LL; /*0x384c6d*/
        }
      }
      v22 = (__int64 **)v16[2]; /*0x384c81*/
      if ( *((_BYTE *)v22 + 25) ) /*0x384c85*/
      {
        for ( i = (__int64 *)v16[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] ) /*0x384c8f*/
        {
          if ( v16 != (__int64 *)i[2] ) /*0x384c99*/
            break; /*0x384c99*/
          v16 = i; /*0x384c9b*/
        }
        v16 = i; /*0x384ca8*/
      }
      else
      {
        v16 = (__int64 *)v16[2]; /*0x384cad*/
        for ( j = *v22; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x384cb3*/
          v16 = j; /*0x384cc0*/
      }
    }
  }
  return a2; /*0x384cdc*/
}
