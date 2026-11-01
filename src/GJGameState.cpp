#include <Geode/binding/GJGameState.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x307970
// Method: GJGameState::tweenValue
__int64 __fastcall GJGameState_tweenValue(
        __int64 a1,
        float a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // rbx
  _BYTE v11[16]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v12[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+3Ch] [rbp-4Ch]
  int v14; // [rsp+44h] [rbp-44h]
  int v15; // [rsp+48h] [rbp-40h]
  __int16 v16; // [rsp+4Ch] [rbp-3Ch]
  int v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+54h] [rbp-34h]
  int v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a4; /*0x307973*/
  v9 = a1 + 640; /*0x307983*/
  v19 = a4; /*0x307995*/
  sub_351620(a1 + 640, &v19); /*0x30799f*/
  v14 = a6; /*0x3079c1*/
  v12[2] = a5; /*0x3079d4*/
  v17 = a8; /*0x3079e3*/
  v15 = a7; /*0x3079ee*/
  v18 = a9; /*0x3079f4*/
  *(float *)v12 = a2; /*0x3079f8*/
  *(float *)&v12[1] = a3; /*0x3079fe*/
  v13 = 0; /*0x307a04*/
  v16 = 0; /*0x307a0d*/
  return sub_34F950(v9, v11, &v20, v12); /*0x307a19*/
}

// [2/3] Address: 0x307a30
// Method: GJGameState::controlTweenAction
__int64 __fastcall GJGameState_controlTweenAction(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 *v4; // r10
  int v5; // ebx
  __int64 result; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(__int64 **)(a1 + 648); /*0x307a44*/
  v5 = a4; /*0x307a4b*/
  result = *v4; /*0x307a56*/
  if ( (__int64 *)*v4 != v4 ) /*0x307a5c*/
  {
    do /*0x307a60*/
    {
      if ( a3 == -1 ) /*0x307a63*/
      {
        if ( *(_DWORD *)(result + 52) == a2 ) /*0x307a6f*/
        {
LABEL_6:
          if ( v5 ) /*0x307a73*/
          {
            if ( v5 == 1 ) /*0x307a8e*/
            {
              *(_BYTE *)(result + 49) = 1; /*0x307a90*/
            }
            else if ( v5 == 2 ) /*0x307a98*/
            {
              *(_BYTE *)(result + 49) = 0; /*0x307a9a*/
            }
          }
          else
          {
            result = sub_34FB90(a1 + 640, &v10, result, a4); /*0x307a84*/
          }
        }
      }
      else if ( *(_DWORD *)(result + 56) == a3 ) /*0x307a68*/
      {
        goto LABEL_6; /*0x307a68*/
      }
      result = *(_QWORD *)result; /*0x307a9e*/
    }
    while ( result != *(_QWORD *)(a1 + 648) ); /*0x307a60*/
  }
  return result; /*0x307aaa*/
}

// [3/3] Address: 0x307c70
// Method: GJGameState::processStateTriggers
void __fastcall GJGameState_processStateTriggers(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *j; // rbx
  __int64 **v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *k; // r8
  __int64 m; // r9
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 *v12; // r8
  void *v13; // rax
  __int64 i; // rax
  __int64 *v15; // rcx

  v1 = *(_QWORD **)(a1 + 840); /*0x307c7f*/
  j = (_QWORD *)*v1; /*0x307c89*/
  if ( (_QWORD *)*v1 != v1 ) /*0x307c8f*/
  {
    do /*0x307db6*/
    {
      v4 = (__int64 **)j[2]; /*0x307ca6*/
      if ( *((_DWORD *)j + 9) >= *(_DWORD *)(a1 + 568) ) /*0x307cad*/
      {
        if ( *((_BYTE *)v4 + 25) ) /*0x307d64*/
        {
          for ( i = j[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) ) /*0x307d6f*/
          {
            if ( j != *(_QWORD **)(i + 16) ) /*0x307d79*/
              break; /*0x307d79*/
            j = (_QWORD *)i; /*0x307d7b*/
          }
          j = (_QWORD *)i; /*0x307d88*/
        }
        else
        {
          v15 = *v4; /*0x307d8d*/
          for ( j = (_QWORD *)j[2]; !*((_BYTE *)v15 + 25); v15 = (__int64 *)*v15 ) /*0x307d93*/
            j = v15; /*0x307da3*/
        }
      }
      else
      {
        v5 = j; /*0x307cb8*/
        v6 = j; /*0x307cbb*/
        if ( *((_BYTE *)v4 + 25) ) /*0x307cb3*/
        {
          v7 = j[1]; /*0x307cc0*/
          for ( k = j + 1; !*(_BYTE *)(v7 + 25); v7 = *(_QWORD *)(v7 + 8) ) /*0x307cc8*/
          {
            if ( j != *(_QWORD **)(v7 + 16) ) /*0x307cd4*/
              break; /*0x307cd4*/
            j = (_QWORD *)v7; /*0x307cd6*/
          }
          j = (_QWORD *)v7; /*0x307ce3*/
          m = a1 + 840; /*0x307ce6*/
          v10 = *k; /*0x307ced*/
          if ( !*(_BYTE *)(*k + 25LL) ) /*0x307cf0*/
          {
            m = a1 + 840; /*0x307cf6*/
            do /*0x307d11*/
            {
              if ( v6 != *(_QWORD **)(v10 + 16) ) /*0x307d04*/
                break; /*0x307d04*/
              v6 = (_QWORD *)v10; /*0x307d06*/
              v10 = *(_QWORD *)(v10 + 8); /*0x307d09*/
            }
            while ( !*(_BYTE *)(v10 + 25) ); /*0x307d11*/
          }
        }
        else
        {
          v11 = *v4; /*0x307d15*/
          for ( j = (_QWORD *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 ) /*0x307d1b*/
            j = v11; /*0x307d24*/
          v12 = *v4; /*0x307d30*/
          for ( m = a1 + 840; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 ) /*0x307d3a*/
            ; /*0x307d44*/
        }
        v13 = (void *)sub_69860(m, v5); /*0x307d50*/
        j_j_free(v13); /*0x307d5d*/
      }
    }
    while ( j != *(_QWORD **)(a1 + 840) ); /*0x307db6*/
  }
}
