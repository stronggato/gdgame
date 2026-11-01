#include <Geode/binding/Dropdown.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x11e0f0
// Method: Dropdown::~Dropdown
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall Dropdown__dtor_Dropdown(cocos2d::CCNode *Block, char a2)
{
  __int64 v4; // rax
  cocos2d::CCObject *v5; // rcx

  *(_QWORD *)Block = &Dropdown::`vftable'; /*0x11e10b*/
  *((_QWORD *)Block + 40) = &Dropdown::`vftable'; /*0x11e115*/
  v4 = *((_QWORD *)Block + 69); /*0x11e11c*/
  if ( v4 ) /*0x11e128*/
  {
    *(_QWORD *)(v4 + 928) = 0; /*0x11e12a*/
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)Block + 69) + 512LL))(*((_QWORD *)Block + 69)); /*0x11e13b*/
    *((_QWORD *)Block + 69) = 0; /*0x11e141*/
  }
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 49); /*0x11e148*/
  if ( v5 ) /*0x11e152*/
  {
    cocos2d::CCObject::release(v5); /*0x11e154*/
    *((_QWORD *)Block + 49) = 0; /*0x11e15a*/
  }
  sub_3C310((char *)Block + 512); /*0x11e168*/
  sub_3C310((char *)Block + 448); /*0x11e174*/
  sub_3C310((char *)Block + 408); /*0x11e180*/
  sub_74F50((char *)Block + 360); /*0x11e18c*/
  cocos2d::CCNode::~CCNode(Block); /*0x11e194*/
  if ( (a2 & 1) != 0 ) /*0x11e19f*/
    j_j_free(Block); /*0x11e1a9*/
  return Block; /*0x11e1b1*/
}

// [2/4] Address: 0x11e700
// Method: Dropdown::setPosition
void __fastcall Dropdown_setPosition(cocos2d::CCNode *a1, const struct cocos2d::CCPoint *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  cocos2d::CCNode::setPosition(a1, a2); /*0x11e715*/
  v4 = (__int64 *)*((_QWORD *)a1 + 49); /*0x11e71b*/
  if ( v4 ) /*0x11e725*/
  {
    v5 = *((_QWORD *)a1 + 42); /*0x11e727*/
    if ( v5 ) /*0x11e731*/
    {
      v6 = *v4; /*0x11e733*/
      cocos2d::CCNode::convertToNodeSpace(v5, &v8, a2); /*0x11e73e*/
      (*(void (__fastcall **)(__int64 *, __int64))(v6 + 184))(v4, v7); /*0x11e74a*/
    }
  }
}

// [3/4] Address: 0x11e760
// Method: Dropdown::setVisible
void __fastcall Dropdown_setVisible(cocos2d::CCNode *a1, bool a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  cocos2d::CCNode::setVisible(a1, a2); /*0x11e770*/
  if ( !a2 ) /*0x11e779*/
  {
    v4 = *((_QWORD *)a1 + 69); /*0x11e77b*/
    if ( v4 ) /*0x11e785*/
    {
      *((_QWORD *)a1 + 69) = 0; /*0x11e78e*/
      (**(void (__fastcall ***)(__int64))(v4 + 336))(v4 + 336); /*0x11e79c*/
    }
  }
  v5 = *((_QWORD *)a1 + 49); /*0x11e79e*/
  if ( v5 ) /*0x11e7a8*/
  {
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v5 + 336LL))(v5, a2); /*0x11e7b1*/
    (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)a1 + 49) + 936LL))(*((_QWORD *)a1 + 49), a2); /*0x11e7c5*/
  }
}

// [4/4] Address: 0x11ee30
// Method: Dropdown::dropdownListPopupClosed
void __fastcall Dropdown_dropdownListPopupClosed(__int64 a1, __int64 a2)
{
  if ( a2 == *(_QWORD *)(a1 + 232) ) /*0x11ee37*/
    *(_QWORD *)(a1 + 232) = 0; /*0x11ee39*/
}
