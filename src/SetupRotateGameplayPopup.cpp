#include <Geode/binding/SetupRotateGameplayPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x5d21c0
// Method: SetupRotateGameplayPopup::onPlusButton
double __fastcall SetupRotateGameplayPopup_onPlusButton(cocos2d::CCDictionary **a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  int v4; // esi
  void *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  int v10; // [rsp+30h] [rbp-48h] BYREF
  void *v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  void *Block[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]
  void *v17; // [rsp+90h] [rbp+18h]

  v12 = 0; /*0x5d21d9*/
  v2 = operator new(0x18u); /*0x5d21e3*/
  *v2 = v2; /*0x5d21e8*/
  v2[1] = v2; /*0x5d21eb*/
  v11 = v2; /*0x5d21ef*/
  *(_OWORD *)Block = 0; /*0x5d21f7*/
  v14 = 0; /*0x5d21fd*/
  v15 = 7; /*0x5d2202*/
  v16 = 8; /*0x5d220b*/
  v10 = 1065353216; /*0x5d2214*/
  sub_3E200(Block, 16, v2); /*0x5d2229*/
  v3 = qword_905FD0; /*0x5d222f*/
  if ( !qword_905FD0 ) /*0x5d2239*/
  {
    v17 = operator new(0x6E8u); /*0x5d2245*/
    qword_905FD0 = sub_2723A0(v17); /*0x5d2256*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5d2267*/
    v3 = qword_905FD0; /*0x5d2269*/
  }
  v4 = sub_3F4D10(*(_QWORD *)(v3 + 568), &v10); /*0x5d2281*/
  v5 = Block[0]; /*0x5d2283*/
  if ( Block[0] ) /*0x5d228b*/
  {
    if ( ((v14 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x5d22a3*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x5d22a9*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x5d22b8*/
        invoke_watson(0, 0, 0, 0, 0); /*0x5d22c9*/
    }
    j_j_free(v5); /*0x5d22d0*/
  }
  v6 = (_QWORD **)v11; /*0x5d22d5*/
  **((_QWORD **)v11 + 1) = 0; /*0x5d22de*/
  v7 = *v6; /*0x5d22e1*/
  if ( *v6 ) /*0x5d22e1*/
  {
    do /*0x5d2303*/
    {
      v8 = (_QWORD *)*v7; /*0x5d22f0*/
      j_j_free(v7); /*0x5d22f8*/
      v7 = v8; /*0x5d22fd*/
    }
    while ( v8 ); /*0x5d2303*/
  }
  j_j_free(v6); /*0x5d230d*/
  return SetupTriggerPopup_updateValue(a1, 0xADu, (float)v4); /*0x5d2321*/
}

// [3/3] Address: 0x5d2340
// Method: SetupRotateGameplayPopup::valueDidChange
__int64 __fastcall SetupRotateGameplayPopup_valueDidChange(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm2_4
  __int64 result; // rax

  if ( (_DWORD)a2 == 171 ) /*0x5d2346*/
  {
    if ( v3 == 0.0 ) /*0x5d2350*/
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, a2, 0); /*0x5d2358*/
    LOBYTE(a3) = 1; /*0x5d2362*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 171, a3); /*0x5d236a*/
  }
  else if ( (_DWORD)a2 == 169 ) /*0x5d2377*/
  {
    if ( v3 == 0.0 ) /*0x5d2381*/
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, a2, 0); /*0x5d2381*/
    LOBYTE(a3) = 1; /*0x5d2393*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 169, a3); /*0x5d239b*/
  }
  return result; /*0x5d23a2*/
}
