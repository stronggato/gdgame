#include <Geode/binding/LevelStatsInfoPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x424080
// Method: LevelStatsInfoPopup::keyBackClicked
__int64 __fastcall LevelStatsInfoPopup_keyBackClicked(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1; /*0x424087*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 336) + 520LL))(a1 - 336, a2);
}
