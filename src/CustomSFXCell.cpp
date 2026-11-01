#include <Geode/binding/CustomSFXCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x14e2a0
// Method: CustomSFXCell::~CustomSFXCell
_QWORD *__fastcall CustomSFXCell__dtor_CustomSFXCell(_QWORD *Block, char a2)
{
  *Block = &CustomSFXCell::`vftable'; /*0x14e2b3*/
  Block[40] = &CustomSFXCell::`vftable'; /*0x14e2c0*/
  Block[41] = &CustomSFXCell::`vftable'; /*0x14e2ce*/
  Block[42] = &CustomSFXCell::`vftable'; /*0x14e2dc*/
  Block[43] = &CustomSFXCell::`vftable'; /*0x14e2ea*/
  Block[44] = &CustomSFXCell::`vftable'; /*0x14e2f8*/
  Block[70] = &CustomSFXCell::`vftable'; /*0x14e306*/
  URLCell__dtor_URLCell(); /*0x14e30d*/
  if ( (a2 & 1) != 0 ) /*0x14e315*/
    j_j_free(Block); /*0x14e31f*/
  return Block; /*0x14e324*/
}

// [2/10] Address: 0x14e3d0
// Method: CustomSFXCell::init
char __fastcall CustomSFXCell_init(__int64 a1)
{
  *(_QWORD *)(a1 + 568) = 0; /*0x14e3d0*/
  *(_WORD *)(a1 + 576) = 0; /*0x14e3dd*/
  *(_BYTE *)(a1 + 578) = 0; /*0x14e3e6*/
  return 1; /*0x14e3ed*/
}

// [3/10] Address: 0x14e550
// Method: CustomSFXCell::sfxObjectSelected
__int64 __fastcall CustomSFXCell_sfxObjectSelected(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 (__fastcall ***v4)(_QWORD, __int64, _QWORD, __int64, _QWORD); // rcx

  result = *(_QWORD *)(a1 - 144); /*0x14e554*/
  v2 = a1 - 560; /*0x14e55b*/
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64, _QWORD))(result + 624); /*0x14e565*/
  if ( v4 ) /*0x14e56f*/
    return (**v4)(v4, v2, *(unsigned int *)(a1 - 8), 1, 0); /*0x14e587*/
  return result; /*0x14e589*/
}

// [4/10] Address: 0x14e590
// Method: CustomSFXCell::sfxAddToFolder
__int64 __fastcall CustomSFXCell_sfxAddToFolder(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 (__fastcall ***v4)(_QWORD, __int64, _QWORD, __int64, _QWORD); // rcx

  result = *(_QWORD *)(a1 - 144); /*0x14e594*/
  v2 = a1 - 560; /*0x14e59b*/
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64, _QWORD))(result + 624); /*0x14e5a5*/
  if ( v4 ) /*0x14e5af*/
    return (**v4)(v4, v2, *(unsigned int *)(a1 - 8), 7, 0); /*0x14e5c7*/
  return result; /*0x14e5c9*/
}

// [5/10] Address: 0x14e5d0
// Method: CustomSFXCell::sfxEditCustomObject
__int64 __fastcall CustomSFXCell_sfxEditCustomObject(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 (__fastcall ***v4)(_QWORD, __int64, _QWORD, __int64, _QWORD); // rcx

  result = *(_QWORD *)(a1 - 144); /*0x14e5d4*/
  v2 = a1 - 560; /*0x14e5db*/
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64, _QWORD))(result + 624); /*0x14e5e5*/
  if ( v4 ) /*0x14e5ef*/
    return (**v4)(v4, v2, *(unsigned int *)(a1 - 8), 6, 0); /*0x14e607*/
  return result; /*0x14e609*/
}

// [6/10] Address: 0x14e610
// Method: CustomSFXCell::sfxToggleCustomSelect
__int64 __fastcall CustomSFXCell_sfxToggleCustomSelect(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 (__fastcall ***v4)(_QWORD, __int64, _QWORD, __int64, _QWORD); // rcx

  result = *(_QWORD *)(a1 - 144); /*0x14e614*/
  v2 = a1 - 560; /*0x14e61b*/
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD, __int64, _QWORD))(result + 624); /*0x14e625*/
  if ( v4 ) /*0x14e62f*/
    return (**v4)(v4, v2, *(unsigned int *)(a1 - 8), 8, 0); /*0x14e647*/
  return result; /*0x14e649*/
}

// [7/10] Address: 0x14e650
// Method: CustomSFXCell::isCustomEntrySelected
char __fastcall CustomSFXCell_isCustomEntrySelected(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 - 144) + 624LL); /*0x14e657*/
  if ( v1 ) /*0x14e661*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1); /*0x14e666*/
  else
    return 0; /*0x14e66a*/
}

// [8/10] Address: 0x14e670
// Method: CustomSFXCell::inCustomSFXTree
char __fastcall CustomSFXCell_inCustomSFXTree(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 - 144) + 624LL); /*0x14e677*/
  if ( v1 ) /*0x14e681*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1); /*0x14e686*/
  else
    return 0; /*0x14e68a*/
}

// [9/10] Address: 0x14e690
// Method: CustomSFXCell::showsSFXInfoButton
char __fastcall CustomSFXCell_showsSFXInfoButton(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 - 144) + 624LL); /*0x14e697*/
  if ( v1 ) /*0x14e6a1*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1); /*0x14e6a6*/
  else
    return 0; /*0x14e6aa*/
}

// [10/10] Address: 0x14e6b0
// Method: CustomSFXCell::getActiveCustomSFXID
__int64 __fastcall CustomSFXCell_getActiveCustomSFXID(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 - 144) + 624LL); /*0x14e6b7*/
  if ( v1 ) /*0x14e6c1*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1); /*0x14e6c6*/
  else
    return 0; /*0x14e6ca*/
}
