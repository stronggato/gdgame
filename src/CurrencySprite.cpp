#include <Geode/binding/CurrencySprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x137540
// Method: CurrencySprite::CurrencySprite
// Hidden C++ exception states: #wind=1
__int64 __fastcall CurrencySprite_CurrencySprite(__int64 a1)
{
  CCSpritePlus_CCSpritePlus(a1); /*0x137552*/
  *(_QWORD *)a1 = &CurrencySprite::`vftable'; /*0x13755f*/
  *(_QWORD *)(a1 + 320) = &CurrencySprite::`vftable'; /*0x137569*/
  *(_QWORD *)(a1 + 344) = &CurrencySprite::`vftable'; /*0x137577*/
  *(_QWORD *)(a1 + 624) = 0; /*0x137580*/
  *(_QWORD *)(a1 + 632) = 0; /*0x137587*/
  *(_DWORD *)(a1 + 640) = 1; /*0x13758e*/
  *(_QWORD *)(a1 + 648) = 0; /*0x137598*/
  *(_DWORD *)(a1 + 656) = 1; /*0x13759f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 660)); /*0x1375b0*/
  *(_QWORD *)(a1 + 672) = 0; /*0x1375b6*/
  return a1; /*0x1375c0*/
}

// [2/3] Address: 0x13c8c0
// Method: CurrencySprite::rewardToSpriteType
__int64 __fastcall CurrencySprite_rewardToSpriteType(int a1)
{
  __int64 result; // rax

  switch ( a1 ) /*0x13c8db*/
  {
    case 1: /*0x13c8db*/
      result = 4; /*0x13c8dd*/
      break; /*0x13c8e2*/
    case 2: /*0x13c8db*/
      result = 5; /*0x13c8e3*/
      break; /*0x13c8e8*/
    case 3: /*0x13c8db*/
      result = 6; /*0x13c8e9*/
      break; /*0x13c8ee*/
    case 4: /*0x13c8db*/
      result = 7; /*0x13c8ef*/
      break; /*0x13c8f4*/
    case 5: /*0x13c8db*/
      result = 8; /*0x13c8f5*/
      break; /*0x13c8fa*/
    case 6: /*0x13c8db*/
      result = 9; /*0x13c8fb*/
      break; /*0x13c900*/
    case 10: /*0x13c8db*/
      result = 10; /*0x13c901*/
      break; /*0x13c906*/
    case 11: /*0x13c8db*/
      result = 11; /*0x13c907*/
      break; /*0x13c90c*/
    case 12: /*0x13c8db*/
      result = 12; /*0x13c90d*/
      break; /*0x13c912*/
    case 13: /*0x13c8db*/
      result = 13; /*0x13c913*/
      break; /*0x13c918*/
    case 14: /*0x13c8db*/
      result = 14; /*0x13c919*/
      break; /*0x13c91e*/
    case 15: /*0x13c8db*/
      result = 16; /*0x13c91f*/
      break; /*0x13c924*/
    default:
      result = 0; /*0x13c925*/
      break; /*0x13c925*/
  }
  return result; /*0x13c8e2*/
}

// [3/3] Address: 0x13c970
// Method: CurrencySprite::spriteTypeToStat
__int64 __fastcall CurrencySprite_spriteTypeToStat(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 ) /*0x13c998*/
  {
    case 4: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13c9a0*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13c9a3*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13c9ab*/
      strcpy((char *)a1, "18"); /*0x13c9b3*/
      result = a1; /*0x13c99d*/
      break; /*0x13c9c0*/
    case 5: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13c9c7*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13c9ca*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13c9d2*/
      strcpy((char *)a1, "19"); /*0x13c9da*/
      result = a1; /*0x13c9c4*/
      break; /*0x13c9e7*/
    case 6: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13c9ee*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13c9f1*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13c9f9*/
      strcpy((char *)a1, "17"); /*0x13ca01*/
      result = a1; /*0x13c9eb*/
      break; /*0x13ca0e*/
    case 7: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13ca15*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13ca18*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13ca20*/
      strcpy((char *)a1, "16"); /*0x13ca28*/
      result = a1; /*0x13ca12*/
      break; /*0x13ca35*/
    case 8: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13ca3c*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13ca3f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13ca47*/
      strcpy((char *)a1, "20"); /*0x13ca4f*/
      result = a1; /*0x13ca39*/
      break; /*0x13ca5c*/
    case 9: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13ca63*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13ca66*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13ca6e*/
      strcpy((char *)a1, "21"); /*0x13ca76*/
      result = a1; /*0x13ca60*/
      break; /*0x13ca83*/
    case 10: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13ca8a*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13ca8d*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13ca95*/
      strcpy((char *)a1, "23"); /*0x13ca9d*/
      result = a1; /*0x13ca87*/
      break; /*0x13caaa*/
    case 11: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13cab1*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13cab4*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13cabc*/
      strcpy((char *)a1, "24"); /*0x13cac4*/
      result = a1; /*0x13caae*/
      break; /*0x13cad1*/
    case 12: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13cad8*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13cadb*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13cae3*/
      strcpy((char *)a1, "25"); /*0x13caeb*/
      result = a1; /*0x13cad5*/
      break; /*0x13caf8*/
    case 13: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13caff*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13cb02*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13cb0a*/
      strcpy((char *)a1, "26"); /*0x13cb12*/
      result = a1; /*0x13cafc*/
      break; /*0x13cb1f*/
    case 14: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13cb26*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13cb29*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13cb31*/
      strcpy((char *)a1, "27"); /*0x13cb39*/
      result = a1; /*0x13cb23*/
      break; /*0x13cb46*/
    case 16: /*0x13c998*/
      *(_OWORD *)a1 = 0; /*0x13cb4d*/
      *(_QWORD *)(a1 + 16) = 2; /*0x13cb50*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13cb58*/
      strcpy((char *)a1, "43"); /*0x13cb60*/
      result = a1; /*0x13cb4a*/
      break; /*0x13cb6d*/
    default:
      *(_OWORD *)a1 = 0; /*0x13cb74*/
      *(_QWORD *)(a1 + 16) = 0; /*0x13cb77*/
      *(_QWORD *)(a1 + 24) = 15; /*0x13cb7b*/
      *(_BYTE *)a1 = 0; /*0x13cb83*/
      result = a1; /*0x13cb71*/
      break; /*0x13cb71*/
  }
  return result; /*0x13c9bc*/
}
