#include <Geode/binding/SetupAdvFollowEditPhysicsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x59a940
// Method: SetupAdvFollowEditPhysicsPopup::valueDidChange
double __fastcall SetupAdvFollowEditPhysicsPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, float a3)
{
  int v4; // edx
  int v5; // edx
  struct cocos2d::CCObject *v6; // rax
  double result; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // rdx

  v4 = a2 - 306; /*0x59a956*/
  if ( !v4 ) /*0x59a95c*/
  {
    if ( a3 == 0.0 ) /*0x59aa10*/
      return result; /*0x59aa10*/
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 307) ) /*0x59aa1e*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 307, 0); /*0x59aa37*/
    else
      sub_60A5A0(a1, 307); /*0x59aa42*/
    v9 = 307; /*0x59aa47*/
    return sub_60ABF0(a1, v9); /*0x59aa47*/
  }
  v5 = v4 - 1; /*0x59a962*/
  if ( !v5 ) /*0x59a965*/
  {
    if ( a3 == 0.0 ) /*0x59a9c1*/
      return result; /*0x59a9c1*/
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 306) ) /*0x59a9d3*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 306, 0); /*0x59a9ec*/
    else
      sub_60A5A0(a1, 306); /*0x59a9fc*/
    v9 = 306; /*0x59a9f2*/
    return sub_60ABF0(a1, v9); /*0x59aa52*/
  }
  if ( v5 == 228 ) /*0x59a96d*/
  {
    v6 = cocos2d::CCDictionary::objectForKey(a1[123], 51); /*0x59a97f*/
    if ( v6 ) /*0x59a988*/
    {
      result = 0.0; /*0x59a98e*/
      v8 = 1; /*0x59a996*/
      if ( a3 != 0.0 ) /*0x59a99b*/
        v8 = 6; /*0x59a99d*/
      sub_3C4E40(v6, v8); /*0x59a9b4*/
    }
  }
  return result; /*0x59a9a5*/
}
