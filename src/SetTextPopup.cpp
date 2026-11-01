#include <Geode/binding/SetTextPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x395d60
// Method: SetTextPopup::~SetTextPopup
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall SetTextPopup__dtor_SetTextPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetTextPopup::`vftable'; /*0x395d76*/
  *((_QWORD *)Block + 40) = &SetTextPopup::`vftable'; /*0x395d80*/
  *((_QWORD *)Block + 41) = &SetTextPopup::`vftable'; /*0x395d8e*/
  *((_QWORD *)Block + 42) = &SetTextPopup::`vftable'; /*0x395d9c*/
  *((_QWORD *)Block + 43) = &SetTextPopup::`vftable'; /*0x395daa*/
  *((_QWORD *)Block + 44) = &SetTextPopup::`vftable'; /*0x395db8*/
  *((_QWORD *)Block + 51) = &SetTextPopup::`vftable'; /*0x395dc6*/
  *((_QWORD *)Block + 54) = &SetTextPopup::`vftable'; /*0x395dd4*/
  *((_QWORD *)Block + 68) = &SetTextPopup::`vftable'; /*0x395de2*/
  *((_QWORD *)Block + 83) = &SetTextPopup::`vftable'; /*0x395df0*/
  cocos2d::CCNode::removeAllChildrenWithCleanup(Block, 1); /*0x395df9*/
  sub_3C310((char *)Block + 696); /*0x395e06*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x395e0e*/
  if ( (a2 & 1) != 0 ) /*0x395e17*/
    j_j_free(Block); /*0x395e21*/
  return Block; /*0x395e29*/
}

// [2/4] Address: 0x3a43f0
// Method: SetTextPopup::onResetValue
void __fastcall SetTextPopup_onResetValue(__int64 a1)
{
  _QWORD *v2; // rax
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_3F5A0((void *)(a1 + 696), &byte_6E86E0, 0); /*0x3a440e*/
  *(_BYTE *)(a1 + 680) = 1; /*0x3a441a*/
  v2 = (_QWORD *)sub_3E4F0(v3, a1 + 696); /*0x3a4426*/
  CCTextInputNode_setString(*(_QWORD **)(a1 + 672), v2); /*0x3a4435*/
  *(_BYTE *)(a1 + 680) = 0; /*0x3a443f*/
}

// [3/4] Address: 0x3a4450
// Method: SetTextPopup::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall SetTextPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // rbx
  __int64 v5; // r8
  void **v6; // rdx
  void *v7; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 136) ) /*0x3a446c*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x3a448a*/
    *(_OWORD *)Block = 0; /*0x3a4490*/
    v9 = 0; /*0x3a4498*/
    v4 = -1; /*0x3a449e*/
    v5 = -1; /*0x3a44a5*/
    do /*0x3a44b3*/
      ++v5; /*0x3a44b0*/
    while ( *(_BYTE *)(v3 + v5) ); /*0x3a44b3*/
    sub_3C230(Block); /*0x3a44c2*/
    v6 = Block; /*0x3a44c8*/
    if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0x3a44d3*/
      v6 = (void **)Block[0]; /*0x3a44d3*/
    do /*0x3a44e3*/
      ++v4; /*0x3a44e0*/
    while ( *((_BYTE *)v6 + v4) ); /*0x3a44e3*/
    sub_3F5A0((void *)(a1 + 152), v6, v4); /*0x3a44f3*/
    if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0x3a4502*/
    {
      v7 = Block[0]; /*0x3a4507*/
      if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) + 1LL) >= 0x1000 ) /*0x3a4516*/
      {
        v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x3a451c*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x3a452b*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3a4540*/
      }
      j_j_free(v7); /*0x3a4547*/
    }
  }
}

// [4/4] Address: 0x3a4c80
// Method: SetTextPopup::keyBackClicked
__int64 __fastcall SetTextPopup_keyBackClicked(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 - 336; /*0x3a4c80*/
  *(_BYTE *)(v1 + 681) = 1; /*0x3a4c89*/
  return sub_3A4AE0(v1, 0);
}
