#include <Geode/binding/DailyLevelNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x171360
// Method: DailyLevelNode::showSkipButton
__int64 __fastcall DailyLevelNode_showSkipButton(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 360); /*0x171369*/
  if ( v2 ) /*0x171373*/
  {
    v3 = *(_QWORD *)(a1 + 328); /*0x171375*/
    if ( !v3 || (result = (unsigned int)(*(_DWORD *)(v3 + 936) - *(_DWORD *)(v3 + 940)), (int)result < 100) ) /*0x171390*/
    {
      LOBYTE(v3) = 1; /*0x171395*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 336LL))(v2, v3); /*0x171397*/
      LOBYTE(v5) = 1; /*0x1713a4*/
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 360) + 1040LL))(*(_QWORD *)(a1 + 360), v5); /*0x1713ae*/
    }
  }
  return result; /*0x1713b5*/
}

// [3/3] Address: 0x171730
// Method: DailyLevelNode::FLAlert_Clicked
void __fastcall DailyLevelNode_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r8
  cocos2d::CCNode *v4; // rdx
  __int64 v5; // rcx

  if ( a3 ) /*0x171733*/
  {
    v3 = *(_QWORD *)(a1 + 8); /*0x171735*/
    v4 = (cocos2d::CCNode *)(a1 - 320); /*0x171739*/
    v5 = *(_QWORD *)(a1 + 16); /*0x171740*/
    *((_BYTE *)v4 + 368) = 1; /*0x171744*/
    DailyLevelPage_skipDailyLevel(v5, v4, v3); /*0x17174b*/
  }
}
