#include <Geode/binding/UIButtonConfig.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x272290
// Method: UIButtonConfig::reset
void __fastcall UIButtonConfig_reset(__int64 a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a1 = 280; /*0x2722a9*/
  *(_QWORD *)(a1 + 4) = 120; /*0x2722af*/
  *(_DWORD *)(a1 + 12) = 1065353216; /*0x2722b7*/
  *(_DWORD *)(a1 + 16) = 255; /*0x2722be*/
  *(_DWORD *)(a1 + 20) = 1092616192; /*0x2722c5*/
  *(_BYTE *)(a1 + 24) = 0; /*0x2722cc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v3, 95.0, 36.0); /*0x2722d5*/
  cocos2d::CCPoint::operator=(a1 + 28, v2); /*0x2722e2*/
  *(_WORD *)(a1 + 36) = 0; /*0x2722e8*/
  *(_BYTE *)(a1 + 25) = 0; /*0x2722ee*/
  *(_BYTE *)(a1 + 38) = 0; /*0x2722f2*/
}
