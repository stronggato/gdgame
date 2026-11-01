#include <Geode/binding/SelectPremadeLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x44d680
// Method: SelectPremadeLayer::onSelectPremade
void __fastcall SelectPremadeLayer_onSelectPremade(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebx

  v2 = *(_QWORD *)(a1 + 1032); /*0x44d68a*/
  if ( v2 ) /*0x44d697*/
  {
    v3 = *(_DWORD *)(v2 + 2104); /*0x44d69f*/
    *(_DWORD *)(*(_QWORD *)(a1 + 1032) + 2104LL) = v3 ^ (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x44d6b1*/
  }
}

// [2/3] Address: 0x594580
// Method: SelectPremadeLayer::~SelectPremadeLayer
_QWORD *__fastcall SelectPremadeLayer__dtor_SelectPremadeLayer(_QWORD *Block, char a2)
{
  *Block = &SelectPremadeLayer::`vftable'; /*0x594593*/
  Block[40] = &SelectPremadeLayer::`vftable'; /*0x5945a0*/
  Block[41] = &SelectPremadeLayer::`vftable'; /*0x5945ae*/
  Block[42] = &SelectPremadeLayer::`vftable'; /*0x5945bc*/
  Block[43] = &SelectPremadeLayer::`vftable'; /*0x5945ca*/
  Block[44] = &SelectPremadeLayer::`vftable'; /*0x5945d8*/
  Block[51] = &SelectPremadeLayer::`vftable'; /*0x5945e6*/
  Block[54] = &SelectPremadeLayer::`vftable'; /*0x5945f4*/
  Block[68] = &SelectPremadeLayer::`vftable'; /*0x594602*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x594609*/
  if ( (a2 & 1) != 0 ) /*0x594611*/
    j_j_free(Block); /*0x59461b*/
  return Block; /*0x594620*/
}
