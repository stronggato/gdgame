#include <Geode/binding/SetupAdvFollowRetargetPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x597d50
// Method: SetupAdvFollowRetargetPopup::updateDefaultTriggerValues
double __fastcall SetupAdvFollowRetargetPopup_updateDefaultTriggerValues(struct cocos2d::CCObject **a1)
{
  struct cocos2d::CCObject *v2; // rdi
  double result; // xmm0_8
  __int16 v4; // ax
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]

  SetupTriggerPopup_updateDefaultTriggerValues(a1); /*0x597d5d*/
  v2 = cocos2d::CCDictionary::objectForKey(a1[95], 71); /*0x597d74*/
  if ( v2 ) /*0x597d7a*/
  {
    if ( (*((float (__fastcall **)(struct cocos2d::CCObject **, __int64))*a1 + 146))(a1, 138) == 0.0 ) /*0x597da2*/
    {
      if ( (*((float (__fastcall **)(struct cocos2d::CCObject **, __int64))*a1 + 146))(a1, 200) == 0.0 ) /*0x597dba*/
      {
        *(float *)&result = (*((float (__fastcall **)(struct cocos2d::CCObject **, __int64))*a1 + 146))(a1, 201); /*0x597dc7*/
        if ( *(float *)&result == 0.0 ) /*0x597dd2*/
          return result; /*0x597dd2*/
        v6 = 1; /*0x597dd7*/
        v5 = 0; /*0x597de0*/
        LOWORD(v5) = 67; /*0x597de5*/
        goto LABEL_9; /*0x597dec*/
      }
      v4 = 12880; /*0x597dee*/
    }
    else
    {
      v4 = 12624; /*0x597df5*/
    }
    v6 = 2; /*0x597dfd*/
    v5 = 0; /*0x597e06*/
    BYTE2(v5) = 0; /*0x597e0b*/
    LOWORD(v5) = v4; /*0x597e10*/
LABEL_9:
    v7 = 15; /*0x597e15*/
    return CCTextInputNode_setString(v2, &v5); /*0x597e26*/
  }
  return result; /*0x597e30*/
}
