#include <Geode/binding/ParentalGateLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x49cfb0
// Method: ParentalGateLayer::~ParentalGateLayer
void __fastcall ParentalGateLayer__dtor_ParentalGateLayer(_QWORD *a1)
{
  *a1 = &NumberInputLayer::`vftable'; /*0x49cfc0*/
  a1[40] = &NumberInputLayer::`vftable'; /*0x49cfca*/
  a1[41] = &NumberInputLayer::`vftable'; /*0x49cfd8*/
  a1[42] = &NumberInputLayer::`vftable'; /*0x49cfe6*/
  a1[43] = &NumberInputLayer::`vftable'; /*0x49cff4*/
  a1[44] = &NumberInputLayer::`vftable'; /*0x49d002*/
  a1[51] = &NumberInputLayer::`vftable'; /*0x49d010*/
  a1[54] = &NumberInputLayer::`vftable'; /*0x49d01e*/
  a1[68] = &NumberInputLayer::`vftable'; /*0x49d02c*/
  sub_3C310(a1 + 91); /*0x49d03a*/
  sub_3C310(a1 + 87); /*0x49d046*/
  StarInfoPopup__dtor_StarInfoPopup((__int64)a1); /*0x49d053*/
}

// [2/2] Address: 0x4cfcf0
// Method: ParentalGateLayer::onDone
// Hidden C++ exception states: #wind=1
__int64 __fastcall ParentalGateLayer_onDone(_DWORD *a1)
{
  _DWORD *v2; // rcx
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  _WORD v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]

  v2 = a1 + 182; /*0x4cfcfd*/
  if ( *((_QWORD *)v2 + 3) > 0xFu ) /*0x4cfd09*/
    v2 = *(_DWORD **)v2; /*0x4cfd0b*/
  v3 = a1[192]; /*0x4cfd0e*/
  if ( atoi((const char *)v2) == v3 ) /*0x4cfd1c*/
  {
    v4 = sub_4CD200(); /*0x4cfd1e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 1064LL))(v4); /*0x4cfd30*/
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x4cfd3a*/
    LOBYTE(v5) = 1; /*0x4cfd43*/
    return (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v5); /*0x4cfd55*/
  }
  else
  {
    sub_4CFB10(a1); /*0x4cfd5f*/
    v14 = 0; /*0x4cfd74*/
    v15 = 0; /*0x4cfd7b*/
    v16 = 15; /*0x4cfd80*/
    LOBYTE(v14) = 0; /*0x4cfd89*/
    v11[7] = 0; /*0x4cfd8d*/
    v12 = 13; /*0x4cfd92*/
    v13 = 15; /*0x4cfd9b*/
    strcpy((char *)v11, "Wrong answer!"); /*0x4cfdac*/
    v7 = *(_QWORD *)a1; /*0x4cfdcc*/
    v10 = sub_3A4CA0(v11, v8, v9, 150, &v14); /*0x4cfdf4*/
    return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(v7 + 456))(a1, v10, 100); /*0x4cfe05*/
  }
}
