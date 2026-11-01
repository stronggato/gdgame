#include <Geode/binding/MoveStepPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x2c5d40
// Method: MoveStepPopup::onBuildWindowContent
// Hidden C++ exception states: #wind=1
double __fastcall MoveStepPopup_onBuildWindowContent(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  cocos2d::CCString *v7; // rax
  char *CString; // rax
  size_t v9; // r8
  cocos2d::CCDictionary *v10; // rcx
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rax
  struct cocos2d::CCSprite *v13; // rax
  int v14; // ebx
  cocos2d::CCObject *v15; // rbx
  __int64 v16; // rax
  float v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  float v19[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v20[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[24]; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[32]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v24[8]; // [rsp+88h] [rbp-78h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  char v26; // [rsp+94h] [rbp-6Ch]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  char v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A4h] [rbp-5Ch]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+B8h] [rbp-48h]
  _BYTE v33[40]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v34[32]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x2c5d6d*/
  cocos2d::CCDirector::getWinSize(v2, v18); /*0x2c5d7b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v19, v18[0] * 0.5, v18[1] * 0.5); /*0x2c5da2*/
  v3 = (__int64 *)a1[126]; /*0x2c5da8*/
  v4 = *v3; /*0x2c5daf*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v21, 15.0, 15.0, 50.0, 50.0); /*0x2c5dd0*/
  (*(void (__fastcall **)(__int64 *, __int64))(v4 + 912))(v3, v5); /*0x2c5ddc*/
  sub_9ACF0(&v22); /*0x2c5de7*/
  v22 = -1; /*0x2c5ded*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, v19[0] - 16.0, v19[1]); /*0x2c5e0e*/
  cocos2d::CCPoint::operator=(v24, v6); /*0x2c5e1b*/
  v25 = 1058642330; /*0x2c5e21*/
  v26 = 1; /*0x2c5e28*/
  v29 = 1; /*0x2c5e2c*/
  v27 = 1; /*0x2c5e30*/
  v32 = 2; /*0x2c5e37*/
  v28 = 3; /*0x2c5e3e*/
  v30 = 1008981770; /*0x2c5e45*/
  v31 = 1133903872; /*0x2c5e4c*/
  v7 = cocos2d::CCString::createWithFormat("%g", 0x4024000000000000LL); /*0x2c5e67*/
  CString = (char *)cocos2d::CCString::getCString(v7); /*0x2c5e70*/
  v9 = -1; /*0x2c5e76*/
  do /*0x2c5e83*/
    ++v9; /*0x2c5e80*/
  while ( CString[v9] ); /*0x2c5e83*/
  sub_3F5A0(v34, CString, v9); /*0x2c5e91*/
  sub_608A30(a1, &v22); /*0x2c5e9e*/
  v18[0] = NAN; /*0x2c5ea3*/
  *(_BYTE *)sub_16C910(a1 + 109, v18) = 1; /*0x2c5ebc*/
  v10 = (cocos2d::CCDictionary *)a1[95]; /*0x2c5ebf*/
  if ( v10 ) /*0x2c5ec9*/
  {
    v11 = cocos2d::CCDictionary::objectForKey(v10, -1); /*0x2c5ed6*/
    if ( v11 ) /*0x2c5edf*/
    {
      v12 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 200LL))(v11); /*0x2c5ef2*/
      cocos2d::CCNode::convertToNodeSpace(a1[69], v18, v12); /*0x2c5f03*/
      v13 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_trashBtn_001.png"); /*0x2c5f10*/
      v14 = (int)v13; /*0x2c5f16*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v13 + 160LL))(v13); /*0x2c5f2e*/
      v15 = CCMenuItemSpriteExtra_create(v14, 0, (int)a1, (__int64)sub_2C6190); /*0x2c5f44*/
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(*(_QWORD *)a1[69] + 464LL))(a1[69], v15); /*0x2c5f5b*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v21, 66.0, 0.0); /*0x2c5f6e*/
      cocos2d::CCPoint::operator+(v18, v20, v16); /*0x2c5f81*/
      (*(void (__fastcall **)(cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v15 + 184LL))(v15, v20); /*0x2c5f92*/
    }
  }
  sub_3C310(v34); /*0x2c5f9d*/
  sub_3C310(v33); /*0x2c5fa6*/
  return sub_3C310(v23); /*0x2c5fb5*/
}

// [2/4] Address: 0x2c5fe0
// Method: MoveStepPopup::getValue
double __fastcall MoveStepPopup_getValue(__int64 a1, int a2)
{
  __int64 v2; // rax
  double result; // xmm0_8

  if ( a2 != -1 ) /*0x2c5fe3*/
    return SetupTriggerPopup_getValue(a1, a2); /*0x2c5fe3*/
  v2 = *(_QWORD *)(a1 + 1000); /*0x2c5fe9*/
  if ( v2 ) /*0x2c5ff3*/
    *(_QWORD *)&result = *(unsigned int *)(v2 + 1704); /*0x2c5ff5*/
  else
    *(_QWORD *)&result = 1092616192; /*0x2c5ffe*/
  return result; /*0x2c5ffd*/
}

// [3/4] Address: 0x2c6010
// Method: MoveStepPopup::valueDidChange
__int64 __fastcall MoveStepPopup_valueDidChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == -1 ) /*0x2c6013*/
  {
    if ( *(_QWORD *)(a1 + 1000) ) /*0x2c6015*/
      return GauntletSprite_toggleLockedSprite(); /*0x2c603a*/
  }
  return result; /*0x2c603f*/
}

// [4/4] Address: 0x2c6040
// Method: MoveStepPopup::textChanged
void __fastcall MoveStepPopup_textChanged(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  void *v6; // rcx
  __int64 v7; // rbx
  struct cocos2d::CCObject *v8; // rax
  unsigned int v9; // eax
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x2c6063*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x2c6080*/
    *(_OWORD *)Block = 0; /*0x2c6089*/
    v5 = -1; /*0x2c608e*/
    v11 = 0; /*0x2c6095*/
    do /*0x2c60a3*/
      ++v5; /*0x2c60a0*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x2c60a3*/
    sub_3C230(Block); /*0x2c60b1*/
    if ( *((_QWORD *)&v11 + 1) > 0xFu ) /*0x2c60bf*/
    {
      v6 = Block[0]; /*0x2c60c1*/
      if ( (unsigned __int64)(*((_QWORD *)&v11 + 1) + 1LL) >= 0x1000 ) /*0x2c60d3*/
      {
        v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x2c60d5*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x2c60e8*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2c60f9*/
      }
      j_j_free(v6); /*0x2c6100*/
    }
    if ( (_QWORD)v11 ) /*0x2c610a*/
    {
      SetupTriggerPopup_textChanged(a1, (__int64)a2); /*0x2c6160*/
    }
    else
    {
      v7 = (*(int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x2c611d*/
      v8 = cocos2d::CCFloat::create(10.0); /*0x2c6120*/
      cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 288), v8, v7); /*0x2c6133*/
      v9 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x2c613f*/
      sub_60ABF0(a1 - 544, v9); /*0x2c6153*/
    }
  }
}
