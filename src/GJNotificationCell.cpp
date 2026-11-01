#include <Geode/binding/GJNotificationCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x158740
// Method: GJNotificationCell::~GJNotificationCell
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJNotificationCell__dtor_GJNotificationCell(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &GJNotificationCell::`vftable'; /*0x158756*/
  Block[40] = &GJNotificationCell::`vftable'; /*0x158760*/
  Block[41] = &GJNotificationCell::`vftable'; /*0x15876e*/
  Block[42] = &GJNotificationCell::`vftable'; /*0x15877c*/
  Block[43] = &GJNotificationCell::`vftable'; /*0x15878a*/
  Block[44] = &GJNotificationCell::`vftable'; /*0x158798*/
  Block[70] = &GJNotificationCell::`vftable'; /*0x1587a6*/
  v4 = (cocos2d::CCObject *)Block[71]; /*0x1587ad*/
  if ( v4 ) /*0x1587b7*/
    cocos2d::CCObject::release(v4); /*0x1587b9*/
  URLCell__dtor_URLCell(Block); /*0x1587c2*/
  if ( (a2 & 1) != 0 ) /*0x1587cc*/
    j_j_free(Block); /*0x1587d6*/
  return Block; /*0x1587de*/
}

// [2/2] Address: 0x159f90
// Method: GJNotificationCell::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
void __fastcall GJNotificationCell_FLAlert_Clicked(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  void *v5; // [rsp+48h] [rbp+20h]

  if ( (_BYTE)a3 && *(_QWORD *)(a1 + 8) ) /*0x159f9d*/
  {
    v4 = *(_QWORD *)&qword_905FB0; /*0x159fa4*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x159fae*/
    {
      v5 = operator new(0x690u); /*0x159fba*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0x159fc8*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x159fd9*/
      v4 = *(_QWORD *)&qword_905FB0; /*0x159fdb*/
    }
    LOBYTE(a3) = 1; /*0x159fe6*/
    sub_24C0E0(v4, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 256LL), a3); /*0x159fef*/
  }
}
