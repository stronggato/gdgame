#include <Geode/binding/SelectEventLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x5f8910
// Method: SelectEventLayer::onCustomToggleTriggerValue
_QWORD *__fastcall SelectEventLayer_onCustomToggleTriggerValue(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 *v5; // rdx
  __int64 *i; // rcx
  _QWORD *result; // rax
  _QWORD *j; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 k; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 ) /*0x5f8928*/
  {
    *(_BYTE *)(a1 + 1008) = 1; /*0x5f892e*/
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5f893b*/
    v5 = *(__int64 **)(a1 + 1040); /*0x5f893e*/
    for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i ) /*0x5f8949*/
    {
      if ( *((_DWORD *)i + 7) >= v4 ) /*0x5f8953*/
        v5 = i; /*0x5f895b*/
      else
        i += 2; /*0x5f8955*/
    }
    if ( *((_BYTE *)v5 + 25) || v4 < *((_DWORD *)v5 + 7) ) /*0x5f8970*/
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5f89a0*/
      sub_BB1F0(a1 + 1040, v13, &v14); /*0x5f89b0*/
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5f8980*/
      sub_BB450(a1 + 1040, &v14); /*0x5f898b*/
    }
  }
  result = *(_QWORD **)(a1 + 776); /*0x5f89b5*/
  if ( result ) /*0x5f89bf*/
  {
    result = (_QWORD *)result[7]; /*0x5f89c5*/
    if ( result ) /*0x5f89cc*/
    {
      for ( j = (_QWORD *)result[36]; ; j = (_QWORD *)j[36] ) /*0x5f89ce*/
      {
        v9 = result[33]; /*0x5f89e0*/
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9); /*0x5f89ed*/
        v11 = *(_QWORD *)(a1 + 1040); /*0x5f89f0*/
        for ( k = *(_QWORD *)(v11 + 8); !*(_BYTE *)(k + 25); k = *(_QWORD *)k ) /*0x5f89fb*/
        {
          if ( *(_DWORD *)(k + 28) >= v10 ) /*0x5f8a04*/
            v11 = k; /*0x5f8a0c*/
          else
            k += 16; /*0x5f8a06*/
        }
        LOBYTE(v11) = !*(_BYTE *)(v11 + 25) && v10 >= *(_DWORD *)(v11 + 28); /*0x5f8a1c*/
        CCMenuItemToggler_toggle(v9, v11); /*0x5f8a2c*/
        result = j; /*0x5f8a31*/
        if ( !j ) /*0x5f8a37*/
          break; /*0x5f8a37*/
      }
    }
  }
  return result; /*0x5f8a42*/
}

// [2/3] Address: 0x5f8a60
// Method: SelectEventLayer::onClose
__int64 __fastcall SelectEventLayer_onClose(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCObject *v3; // rcx
  struct cocos2d::CCArray *v4; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *i; // rsi

  if ( *(_BYTE *)(a1 + 1008) )
  {
    v2 = *(_QWORD *)(a1 + 1000); /*0x5f8a7d*/
    if ( v2 )
    {
      v3 = *(struct cocos2d::CCObject **)(v2 + 680); /*0x5f8a89*/
      v4 = v3 ? cocos2d::CCArray::createWithObject(v3) : *(struct cocos2d::CCArray **)(v2 + 688);
      if ( v4 ) /*0x5f8aa7*/
      {
        v5 = (unsigned int *)*((_QWORD *)v4 + 7); /*0x5f8aae*/
        v6 = *v5; /*0x5f8ab2*/
        if ( (_DWORD)v6 ) /*0x5f8ab6*/
        {
          v7 = (_QWORD *)*((_QWORD *)v5 + 2); /*0x5f8ab8*/
          for ( i = &v7[v6 - 1]; v7 <= i; ++v7 ) /*0x5f8acc*/
          {
            if ( !*v7 ) /*0x5f8ad0*/
              break; /*0x5f8ad6*/
            sub_C4C80(*v7 + 1856LL, a1 + 1040); /*0x5f8ae6*/
          }
        }
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x5f8b04*/
}

// [3/3] Address: 0x5f8f80
// Method: SelectEventLayer::onInfo
// Hidden C++ exception states: #wind=1
__int64 __fastcall SelectEventLayer_onInfo(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  cocos2d::CCObject *v6; // rbx
  __int128 v8; // [rsp+50h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  _BYTE v11[40]; // [rsp+70h] [rbp-28h] BYREF
  int v12; // [rsp+A0h] [rbp+8h] BYREF
  __int128 *v13; // [rsp+A8h] [rbp+10h]

  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5f8f95*/
  v3 = (_QWORD *)sub_2D27F0(a1 + 1024, &v12); /*0x5f8fab*/
  if ( v3[3] > 0xFu ) /*0x5f8fb5*/
    v3 = (_QWORD *)*v3; /*0x5f8fb7*/
  v8 = 0; /*0x5f8fbd*/
  v9 = 0; /*0x5f8fc4*/
  v10 = 0; /*0x5f8fc9*/
  v4 = -1; /*0x5f8fce*/
  do /*0x5f8fd8*/
    ++v4; /*0x5f8fd5*/
  while ( *((_BYTE *)v3 + v4) ); /*0x5f8fd8*/
  sub_3C230(&v8); /*0x5f8fe6*/
  v13 = &v8; /*0x5f8ff0*/
  sub_3E4F0(v11, &v8); /*0x5f9002*/
  v6 = FLAlertLayer_create_0(0, (int)"Info", v5, (__int64)"OK", 0, 1136525312, 0, 0, 1065353216); /*0x5f904e*/
  sub_3C310(&v8); /*0x5f9056*/
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v6 + 1064LL))(v6); /*0x5f906a*/
}
