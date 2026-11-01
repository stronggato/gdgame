#include <Geode/binding/OptionsCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x14eb40
// Method: OptionsCell::~OptionsCell
_QWORD *__fastcall OptionsCell__dtor_OptionsCell(_QWORD *Block, char a2)
{
  *Block = &OptionsCell::`vftable'; /*0x14eb53*/
  Block[40] = &OptionsCell::`vftable'; /*0x14eb60*/
  Block[41] = &OptionsCell::`vftable'; /*0x14eb6e*/
  Block[42] = &OptionsCell::`vftable'; /*0x14eb7c*/
  Block[43] = &OptionsCell::`vftable'; /*0x14eb8a*/
  Block[44] = &OptionsCell::`vftable'; /*0x14eb98*/
  URLCell__dtor_URLCell(Block); /*0x14eb9f*/
  if ( (a2 & 1) != 0 ) /*0x14eba7*/
    j_j_free(Block); /*0x14ebb1*/
  return Block; /*0x14ebb6*/
}

// [2/3] Address: 0x14eff0
// Method: OptionsCell::onToggleOption
__int64 __fastcall OptionsCell_onToggleOption(__int64 a1)
{
  __int64 v1; // rdx
  void (__fastcall ***v3)(_QWORD); // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64, __int64, _QWORD); // rcx

  v1 = *(_QWORD *)(a1 + 560); /*0x14eff6*/
  if ( v1 ) /*0x14f003*/
  {
    v3 = *(void (__fastcall ****)(_QWORD))(v1 + 96); /*0x14f009*/
    *(_BYTE *)(v1 + 60) = *(_BYTE *)(v1 + 60) == 0; /*0x14f010*/
    if ( v3 ) /*0x14f016*/
      (**v3)(v3); /*0x14f01b*/
    result = *(_QWORD *)(a1 + 416); /*0x14f01d*/
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64, __int64, _QWORD))(result + 624); /*0x14f024*/
    if ( v5 ) /*0x14f02e*/
      return (**v5)(v5, a1, 24, 1, 0); /*0x14f04b*/
  }
  return result; /*0x14f04d*/
}
