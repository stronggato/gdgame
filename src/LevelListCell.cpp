#include <Geode/binding/LevelListCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x1125b0
// Method: LevelListCell::onListInfo
char __fastcall LevelListCell_onListInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 328); /*0x1125b0*/
  if ( v2 ) /*0x1125ba*/
    return sub_7FE90(v2, a2); /*0x1125ba*/
  else
    return 0; /*0x1125c0*/
}

// [2/4] Address: 0x15bd80
// Method: LevelListCell::LevelListCell
__int64 __fastcall LevelListCell_LevelListCell(__int64 a1, __int64 a2)
{
  SmartTemplateCell_loadFromObject(a1, a2); /*0x15bd89*/
  *(_WORD *)(a1 + 568) = 0; /*0x15bd95*/
  *(_QWORD *)a1 = &LevelListCell::`vftable'; /*0x15bd9e*/
  *(_QWORD *)(a1 + 320) = &LevelListCell::`vftable'; /*0x15bda8*/
  *(_QWORD *)(a1 + 328) = &LevelListCell::`vftable'; /*0x15bdb6*/
  *(_QWORD *)(a1 + 336) = &LevelListCell::`vftable'; /*0x15bdc4*/
  *(_QWORD *)(a1 + 344) = &LevelListCell::`vftable'; /*0x15bdd2*/
  *(_QWORD *)(a1 + 352) = &LevelListCell::`vftable'; /*0x15bde0*/
  *(_QWORD *)(a1 + 560) = 0; /*0x15bdea*/
  return a1; /*0x15bdf5*/
}

// [4/4] Address: 0x15d540
// Method: LevelListCell::onViewProfile
__int64 __fastcall LevelListCell_onViewProfile(__int64 a1)
{
  __int64 result; // rax
  signed int v2; // ecx
  char *v3; // rax

  result = *(_QWORD *)(a1 + 560); /*0x15d544*/
  v2 = *(_DWORD *)(result + 364); /*0x15d54b*/
  if ( v2 > 0 ) /*0x15d553*/
  {
    v3 = ProfilePage_create(v2, 0); /*0x15d557*/
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 1064LL))(v3); /*0x15d56d*/
  }
  return result; /*0x15d569*/
}
