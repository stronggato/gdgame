#include <Geode/binding/PurchaseItemPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3abc40
// Method: PurchaseItemPopup::~PurchaseItemPopup
_QWORD *__fastcall PurchaseItemPopup__dtor_PurchaseItemPopup(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &PurchaseItemPopup::`vftable'; /*0x3abc56*/
  Block[40] = &PurchaseItemPopup::`vftable'; /*0x3abc60*/
  Block[41] = &PurchaseItemPopup::`vftable'; /*0x3abc6e*/
  Block[42] = &PurchaseItemPopup::`vftable'; /*0x3abc7c*/
  Block[43] = &PurchaseItemPopup::`vftable'; /*0x3abc8a*/
  Block[44] = &PurchaseItemPopup::`vftable'; /*0x3abc98*/
  Block[51] = &PurchaseItemPopup::`vftable'; /*0x3abca6*/
  Block[54] = &PurchaseItemPopup::`vftable'; /*0x3abcb4*/
  Block[68] = &PurchaseItemPopup::`vftable'; /*0x3abcc2*/
  v4 = (cocos2d::CCObject *)Block[83]; /*0x3abcc9*/
  if ( v4 ) /*0x3abcd3*/
    cocos2d::CCObject::release(v4); /*0x3abcd5*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x3abcde*/
  if ( (a2 & 1) != 0 ) /*0x3abce8*/
    j_j_free(Block); /*0x3abcf2*/
  return Block; /*0x3abcfa*/
}

// [3/3] Address: 0x3b2430
// Method: PurchaseItemPopup::onPurchase
// Hidden C++ exception states: #wind=1
__int64 __fastcall PurchaseItemPopup_onPurchase(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, _QWORD); // rcx
  __int64 v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h]

  v2 = *(_DWORD *)(a1[83] + 320LL) - *(_DWORD *)(a1[83] + 324LL); /*0x3b244a*/
  v3 = qword_905FE0; /*0x3b2450*/
  if ( !qword_905FE0 ) /*0x3b245a*/
  {
    v7 = operator new(0x3E8u); /*0x3b2466*/
    qword_905FE0 = sub_2D2B40(v7); /*0x3b2474*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3b2485*/
    v3 = qword_905FE0; /*0x3b2488*/
  }
  if ( (unsigned __int8)sub_2D68E0(v3, v2) ) /*0x3b2491*/
  {
    v4 = (void (__fastcall ***)(_QWORD, _QWORD))a1[84]; /*0x3b249a*/
    if ( v4 ) /*0x3b24a4*/
      (**v4)(v4, a1[83]); /*0x3b24b0*/
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x3b24ba*/
  LOBYTE(v5) = 1; /*0x3b24c3*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v5);
}
