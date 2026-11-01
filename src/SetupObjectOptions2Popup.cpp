#include <Geode/binding/SetupObjectOptions2Popup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5897f0
// Method: SetupObjectOptions2Popup::~SetupObjectOptions2Popup
cocos2d::CCNode *__fastcall SetupObjectOptions2Popup__dtor_SetupObjectOptions2Popup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupObjectOptions2Popup::`vftable'; /*0x589803*/
  *((_QWORD *)Block + 40) = &SetupObjectOptions2Popup::`vftable'; /*0x589810*/
  *((_QWORD *)Block + 41) = &SetupObjectOptions2Popup::`vftable'; /*0x58981e*/
  *((_QWORD *)Block + 42) = &SetupObjectOptions2Popup::`vftable'; /*0x58982c*/
  *((_QWORD *)Block + 43) = &SetupObjectOptions2Popup::`vftable'; /*0x58983a*/
  *((_QWORD *)Block + 44) = &SetupObjectOptions2Popup::`vftable'; /*0x589848*/
  *((_QWORD *)Block + 51) = &SetupObjectOptions2Popup::`vftable'; /*0x589856*/
  *((_QWORD *)Block + 54) = &SetupObjectOptions2Popup::`vftable'; /*0x589864*/
  *((_QWORD *)Block + 68) = &SetupObjectOptions2Popup::`vftable'; /*0x589872*/
  *((_QWORD *)Block + 83) = &SetupObjectOptions2Popup::`vftable'; /*0x589880*/
  *((_QWORD *)Block + 84) = &SetupObjectOptions2Popup::`vftable'; /*0x58988e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x589895*/
  if ( (a2 & 1) != 0 ) /*0x58989d*/
    j_j_free(Block); /*0x5898a7*/
  return Block; /*0x5898ac*/
}

// [2/2] Address: 0x592f80
// Method: SetupObjectOptions2Popup::onPlusButton
// Hidden C++ exception states: #wind=4
double __fastcall SetupObjectOptions2Popup_onPlusButton(cocos2d::CCDictionary **a1)
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

  v12 = 0; /*0x592f99*/
  v2 = operator new(0x18u); /*0x592fa3*/
  *v2 = v2; /*0x592fa8*/
  v2[1] = v2; /*0x592fab*/
  v11 = v2; /*0x592faf*/
  *(_OWORD *)Block = 0; /*0x592fb7*/
  v14 = 0; /*0x592fbd*/
  v15 = 7; /*0x592fc2*/
  v16 = 8; /*0x592fcb*/
  v10 = 1065353216; /*0x592fd4*/
  sub_3E200(Block, 16, v2); /*0x592fe9*/
  v3 = qword_905FD0; /*0x592fef*/
  if ( !qword_905FD0 ) /*0x592ff9*/
  {
    v17 = operator new(0x6E8u); /*0x593005*/
    qword_905FD0 = sub_2723A0(v17); /*0x593016*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x593027*/
    v3 = qword_905FD0; /*0x593029*/
  }
  v4 = sub_3F51E0(*(_QWORD *)(v3 + 568), &v10); /*0x593041*/
  v5 = Block[0]; /*0x593043*/
  if ( Block[0] ) /*0x59304b*/
  {
    if ( ((v14 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x593063*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x593069*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x593078*/
        invoke_watson(0, 0, 0, 0, 0); /*0x593089*/
    }
    j_j_free(v5); /*0x593090*/
  }
  v6 = (_QWORD **)v11; /*0x593095*/
  **((_QWORD **)v11 + 1) = 0; /*0x59309e*/
  v7 = *v6; /*0x5930a1*/
  if ( *v6 ) /*0x5930a1*/
  {
    do /*0x5930c3*/
    {
      v8 = (_QWORD *)*v7; /*0x5930b0*/
      j_j_free(v7); /*0x5930b8*/
      v7 = v8; /*0x5930bd*/
    }
    while ( v8 ); /*0x5930c3*/
  }
  j_j_free(v6); /*0x5930cd*/
  return SetupTriggerPopup_updateValue(a1, 0x157u, (float)v4); /*0x5930e1*/
}
