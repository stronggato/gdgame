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

// Address: 0x59b290
// Method: SetupAdvFollowRetargetPopup::valueDidChange
// Hidden C++ exception states: #wind=1
void __fastcall SetupAdvFollowRetargetPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, float a3)
{
  struct cocos2d::CCObject *v5; // rax
  unsigned __int64 v6; // r14
  struct cocos2d::CCObject *v7; // rbx
  __int64 v8; // r8
  void *v9; // rcx
  void *Block[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v11; // [rsp+40h] [rbp-19h]
  __int64 v12; // [rsp+48h] [rbp-11h]
  __int128 v13; // [rsp+50h] [rbp-9h] BYREF
  __int64 v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]

  if ( a2 != 138 && a2 != 200 && a2 != 201 )
  {
    if ( a2 == 535 )
    {
      v5 = cocos2d::CCDictionary::objectForKey(a1[123], 51);
      if ( v5 )
      {
        if ( a3 == 0.0 )
          sub_3C4E40(v5, 1);
        else
          sub_3C4E40(v5, 6);
      }
    }
    return;
  }
  sub_60ABF0(a1, 71);
  *(_OWORD *)Block = 0;
  v11 = 1;
  v6 = 15;
  v12 = 15;
  LOWORD(Block[0]) = 48;
  if ( a3 != 0.0 )
  {
    if ( a2 == 138 )
    {
      v11 = 2;
      strcpy((char *)Block, "P1");
    }
    else
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 138) )
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 138, 0);
      else
        sub_60A5A0(a1, 138);
      sub_60ABF0(a1, 138);
      if ( a2 == 200 )
      {
        v11 = 2;
        strcpy((char *)Block, "P2");
LABEL_21:
        if ( cocos2d::CCDictionary::objectForKey(a1[94], 201) )
          (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 201, 0);
        else
          sub_60A5A0(a1, 201);
        sub_60ABF0(a1, 201);
        goto LABEL_26;
      }
    }
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 200) )
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 200, 0);
    else
      sub_60A5A0(a1, 200);
    sub_60ABF0(a1, 200);
    if ( a2 != 201 )
      goto LABEL_21;
    v11 = 1;
    LOWORD(Block[0]) = 67;
  }
LABEL_26:
  v7 = cocos2d::CCDictionary::objectForKey(a1[95], 71);
  if ( v7 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v8 = -1;
    do
      ++v8;
    while ( *((_BYTE *)Block + v8) );
    sub_3C230(&v13);
    CCTextInputNode_setString(v7, &v13);
    v6 = v12;
  }
  if ( v6 > 0xF )
  {
    v9 = Block[0];
    if ( v6 + 1 >= 0x1000 )
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v9);
  }
}
