#include <Geode/binding/DropdownListPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x11dfc0
// Method: DropdownListPopup::~DropdownListPopup
_QWORD *__fastcall DropdownListPopup__dtor_DropdownListPopup(_QWORD *Block, char a2)
{
  *Block = &DropdownListPopup::`vftable'; /*0x11dfd9*/
  Block[40] = &DropdownListPopup::`vftable'; /*0x11dfe5*/
  Block[41] = &DropdownListPopup::`vftable'; /*0x11dff3*/
  Block[42] = &DropdownListPopup::`vftable'; /*0x11e001*/
  Block[43] = &DropdownListPopup::`vftable'; /*0x11e00f*/
  Block[44] = &DropdownListPopup::`vftable'; /*0x11e01d*/
  Block[51] = &DropdownListPopup::`vftable'; /*0x11e02b*/
  Block[54] = &DropdownListPopup::`vftable'; /*0x11e039*/
  Block[68] = &DropdownListPopup::`vftable'; /*0x11e047*/
  sub_3C310(Block + 105); /*0x11e055*/
  sub_3C310(Block + 97); /*0x11e061*/
  sub_3C310(Block + 92); /*0x11e06d*/
  sub_3DA90(Block + 86); /*0x11e079*/
  sub_120170(Block + 83); /*0x11e085*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x11e08d*/
  if ( (a2 & 1) != 0 ) /*0x11e096*/
    j_j_free(Block); /*0x11e0a0*/
  return Block; /*0x11e0a5*/
}

// [2/6] Address: 0x11fd90
// Method: DropdownListPopup::ccTouchBegan
bool __fastcall DropdownListPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rbx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  bool v12; // al
  char v13; // [rsp+30h] [rbp+8h] BYREF

  cocos2d::CCTouch::getLocation(a2, &v13); /*0x11fdb5*/
  v6 = (_QWORD *)(a1 - 320); /*0x11fdc7*/
  if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)(a1 + 568), (const struct cocos2d::CCPoint *)&v13) ) /*0x11fdce*/
  {
    v10 = v6[90]; /*0x11fe27*/
    if ( v10 ) /*0x11fe31*/
      sub_80640(v10, a2); /*0x11fe36*/
    v11 = *(_QWORD *)(a1 + 392); /*0x11fe3b*/
    v12 = (v11 || (v11 = *(_QWORD *)(a1 + 232)) != 0) /*0x11fe6a*/
       && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v11 + 320) + 8LL))(
            v11 + 320,
            a2,
            a3);
    *(_BYTE *)(a1 + 408) = v12; /*0x11fe70*/
    return 1; /*0x11fe76*/
  }
  else
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))v6[116]; /*0x11fdd8*/
    if ( v7 ) /*0x11fde2*/
    {
      v6[116] = 0; /*0x11fde4*/
      (**v7)(v7, a1 - 320); /*0x11fdf5*/
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*v6 + 992LL))(a1 - 320, 0); /*0x11fdff*/
    LOBYTE(v8) = 1; /*0x11fe08*/
    (*(void (__fastcall **)(__int64, __int64))(*v6 + 520LL))(a1 - 320, v8); /*0x11fe0d*/
    return cocos2d::CCRect::containsPoint((cocos2d::CCRect *)(a1 + 584), (const struct cocos2d::CCPoint *)&v13); /*0x11fe1f*/
  }
}

// [3/6] Address: 0x11fe90
// Method: DropdownListPopup::ccTouchMoved
void __fastcall DropdownListPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *(_QWORD *)(a1 + 400) ) /*0x11fea5*/
  {
    sub_80830(); /*0x11feb4*/
    v6 = *(_QWORD *)(a1 + 400); /*0x11feb9*/
    if ( *(_BYTE *)(v6 + 481) ) /*0x11fec0*/
    {
      *(_BYTE *)(v6 + 481) = 0; /*0x11fec9*/
      if ( !*(_BYTE *)(a1 + 408) ) /*0x11fed7*/
        return; /*0x11fed7*/
      v7 = *(_QWORD *)(a1 + 392); /*0x11fed9*/
      if ( v7 || (v7 = *(_QWORD *)(a1 + 232)) != 0 ) /*0x11feef*/
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 32LL))(v7 + 320, a2, a3); /*0x11ff01*/
      *(_BYTE *)(a1 + 408) = 0; /*0x11ff04*/
    }
  }
  if ( *(_BYTE *)(a1 + 408) ) /*0x11ff0b*/
  {
    v8 = *(_QWORD *)(a1 + 392); /*0x11ff14*/
    if ( v8 || (v8 = *(_QWORD *)(a1 + 232)) != 0 ) /*0x11ff2a*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 16LL))(v8 + 320, a2, a3); /*0x11ff3c*/
  }
}

// [4/6] Address: 0x11ff50
// Method: DropdownListPopup::ccTouchEnded
void __fastcall DropdownListPopup_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char v7; // di
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v5 = *(_QWORD *)(a1 + 400); /*0x11ff6a*/
  if ( v5 && *(_BYTE *)(v5 + 480) ) /*0x11ff79*/
  {
    v7 = 1; /*0x11ff82*/
  }
  else
  {
    v7 = 0; /*0x11ff87*/
    if ( !v5 ) /*0x11ff8d*/
      goto LABEL_6; /*0x11ff8d*/
  }
  sub_80AF0(v5); /*0x11ff8f*/
LABEL_6:
  if ( *(_BYTE *)(a1 + 408) ) /*0x11ff94*/
  {
    v8 = *(_QWORD *)(a1 + 392); /*0x11ff9d*/
    if ( v8 || (v8 = *(_QWORD *)(a1 + 232)) != 0 ) /*0x11ffb3*/
    {
      v9 = v8 + 320; /*0x11ffb5*/
      v10 = *(_QWORD *)(v8 + 320); /*0x11ffbf*/
      if ( v7 ) /*0x11ffc8*/
        (*(void (__fastcall **)(__int64, __int64, __int64))(v10 + 32))(v9, a2, a3); /*0x11ffca*/
      else
        (*(void (__fastcall **)(__int64, __int64, __int64))(v10 + 24))(v9, a2, a3); /*0x11ffcf*/
    }
    *(_BYTE *)(a1 + 408) = 0; /*0x11ffd2*/
  }
}

// [5/6] Address: 0x11fff0
// Method: DropdownListPopup::ccTouchCancelled
void __fastcall DropdownListPopup_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx

  v5 = *(_QWORD *)(a1 + 400); /*0x120005*/
  if ( v5 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v5 + 440) ) /*0x12001d*/
  {
    *(_DWORD *)(v5 + 440) = -1; /*0x120021*/
    *(_QWORD *)(v5 + 472) = 0; /*0x12002b*/
    *(_WORD *)(v5 + 480) = 0; /*0x120032*/
    *(_BYTE *)(v5 + 508) = 0; /*0x120039*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v5); /*0x12003f*/
  }
  if ( *(_BYTE *)(a1 + 408) ) /*0x120045*/
  {
    v7 = *(_QWORD *)(a1 + 392); /*0x12004e*/
    if ( v7 || (v7 = *(_QWORD *)(a1 + 232)) != 0 ) /*0x120064*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 32LL))(v7 + 320, a2, a3); /*0x120076*/
    *(_BYTE *)(a1 + 408) = 0; /*0x120079*/
  }
}

// [6/6] Address: 0x120090
// Method: DropdownListPopup::keyBackClicked
__int64 __fastcall DropdownListPopup_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  void (__fastcall ***v2)(_QWORD, _QWORD *); // rcx
  __int64 v3; // rdx

  v1 = (_QWORD *)(a1 - 336); /*0x120096*/
  v2 = *(void (__fastcall ****)(_QWORD, _QWORD *))(a1 + 592); /*0x12009d*/
  if ( v2 ) /*0x1200a7*/
  {
    v1[116] = 0; /*0x1200a9*/
    (**v2)(v2, v1); /*0x1200ba*/
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v1 + 992LL))(v1, 0); /*0x1200c4*/
  LOBYTE(v3) = 1; /*0x1200cd*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v3);
}
