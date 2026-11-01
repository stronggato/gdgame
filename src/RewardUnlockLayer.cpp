#include <Geode/binding/RewardUnlockLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x270990
// Method: RewardUnlockLayer::create
// Hidden C++ exception states: #wind=1
int __fastcall RewardUnlockLayer_create(int a1, _DWORD *a2)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 i; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 j; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 k; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *m; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  cocos2d::CCArray *v21; // rbp
  unsigned int v22; // esi
  struct cocos2d::CCObject *v23; // rax
  void *v25; // [rsp+40h] [rbp+18h]

  v4 = *(_QWORD **)&qword_905FB0; /*0x2709a9*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x2709b3*/
  {
    v25 = operator new(0x690u); /*0x2709bf*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0x2709cd*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2709de*/
    v4 = *(_QWORD **)&qword_905FB0; /*0x2709e0*/
  }
  v5 = v4[107]; /*0x2709e7*/
  if ( v5 ) /*0x2709f1*/
  {
    v6 = *(_QWORD *)(v5 + 56); /*0x2709f3*/
    if ( v6 ) /*0x2709fa*/
    {
      for ( i = *(_QWORD *)(v6 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x2709fc*/
      {
        v8 = *(_QWORD *)(v6 + 264); /*0x270a03*/
        if ( v8 && *(_DWORD *)(v8 + 972) == 5 ) /*0x270a16*/
        {
          if ( a1 ) /*0x270a1a*/
          {
            if ( a1 == 2 && !*(_BYTE *)(v8 + 984) ) /*0x270a33*/
              goto LABEL_15; /*0x270a33*/
          }
          else if ( *(_BYTE *)(v8 + 984) ) /*0x270a1c*/
          {
            goto LABEL_15; /*0x270a23*/
          }
          if ( *(_QWORD *)(v8 + 1648) ) /*0x270a35*/
          {
            sub_260AB0(v8); /*0x270a3f*/
            ++*a2; /*0x270a44*/
          }
        }
LABEL_15:
        v6 = i; /*0x270a46*/
        if ( !i ) /*0x270a4c*/
          break; /*0x270a4c*/
      }
    }
  }
  v9 = v4[118]; /*0x270a57*/
  if ( v9 ) /*0x270a61*/
  {
    v10 = *(_QWORD *)(v9 + 56); /*0x270a63*/
    if ( v10 ) /*0x270a6a*/
    {
      for ( j = *(_QWORD *)(v10 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x270a6c*/
      {
        v12 = *(_QWORD *)(v10 + 264); /*0x270a73*/
        if ( v12 && *(_DWORD *)(v12 + 972) == 5 ) /*0x270a86*/
        {
          if ( a1 ) /*0x270a8a*/
          {
            if ( a1 == 2 && !*(_BYTE *)(v12 + 984) ) /*0x270aa3*/
              goto LABEL_29; /*0x270aa3*/
          }
          else if ( *(_BYTE *)(v12 + 984) ) /*0x270a8c*/
          {
            goto LABEL_29; /*0x270a93*/
          }
          if ( *(_QWORD *)(v12 + 1648) ) /*0x270aa5*/
          {
            sub_260AB0(v12); /*0x270aaf*/
            ++*a2; /*0x270ab4*/
          }
        }
LABEL_29:
        v10 = j; /*0x270ab6*/
        if ( !j ) /*0x270abc*/
          break; /*0x270abc*/
      }
    }
  }
  v13 = v4[129]; /*0x270ac7*/
  if ( v13 ) /*0x270ad1*/
  {
    v14 = *(_QWORD *)(v13 + 56); /*0x270ad3*/
    if ( v14 ) /*0x270ada*/
    {
      for ( k = *(_QWORD *)(v14 + 288); ; k = *(_QWORD *)(k + 288) ) /*0x270adc*/
      {
        v16 = *(_QWORD *)(v14 + 264); /*0x270ae3*/
        if ( v16 && *(_DWORD *)(v16 + 972) == 5 ) /*0x270af6*/
        {
          if ( a1 ) /*0x270afa*/
          {
            if ( a1 == 2 && !*(_BYTE *)(v16 + 984) ) /*0x270b13*/
              goto LABEL_43; /*0x270b13*/
          }
          else if ( *(_BYTE *)(v16 + 984) ) /*0x270afc*/
          {
            goto LABEL_43; /*0x270b03*/
          }
          if ( *(_QWORD *)(v16 + 1648) ) /*0x270b15*/
          {
            sub_260AB0(v16); /*0x270b1f*/
            ++*a2; /*0x270b24*/
          }
        }
LABEL_43:
        v14 = k; /*0x270b26*/
        if ( !k ) /*0x270b2c*/
          break; /*0x270b2c*/
      }
    }
  }
  v17 = (_QWORD *)v4[105]; /*0x270b37*/
  if ( v17 ) /*0x270b41*/
  {
    v17 = (_QWORD *)v17[7]; /*0x270b43*/
    if ( v17 ) /*0x270b4a*/
    {
      for ( m = (_QWORD *)v17[36]; ; m = (_QWORD *)m[36] ) /*0x270b4c*/
      {
        v19 = v17[33]; /*0x270b53*/
        if ( v19 && *(_DWORD *)(v19 + 972) == 5 ) /*0x270b66*/
        {
          if ( a1 ) /*0x270b6a*/
          {
            if ( a1 == 2 && !*(_BYTE *)(v19 + 984) ) /*0x270b83*/
              goto LABEL_57; /*0x270b83*/
          }
          else if ( *(_BYTE *)(v19 + 984) ) /*0x270b6c*/
          {
            goto LABEL_57; /*0x270b73*/
          }
          if ( *(_QWORD *)(v19 + 1648) ) /*0x270b85*/
          {
            sub_260AB0(v19); /*0x270b8f*/
            ++*a2; /*0x270b94*/
          }
        }
LABEL_57:
        v17 = m; /*0x270b96*/
        if ( !m ) /*0x270b9c*/
          break; /*0x270b9c*/
      }
    }
  }
  v20 = sub_466AC0(v17, a2); /*0x270ba7*/
  v21 = *(cocos2d::CCArray **)(v20 + 368); /*0x270bac*/
  if ( v21 ) /*0x270bb6*/
  {
    v22 = 0; /*0x270bb8*/
    LODWORD(v20) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(v20 + 368)); /*0x270bbd*/
    while ( v22 < (unsigned int)v20 ) /*0x270bc5*/
    {
      v23 = cocos2d::CCArray::objectAtIndex(v21, v22); /*0x270bd5*/
      if ( v23 && *((_DWORD *)v23 + 243) == 5 ) /*0x270be7*/
      {
        if ( a1 ) /*0x270beb*/
        {
          if ( a1 != 2 || *((_BYTE *)v23 + 984) ) /*0x270bfd*/
          {
LABEL_68:
            if ( *((_QWORD *)v23 + 206) ) /*0x270c06*/
            {
              sub_260AB0(v23); /*0x270c13*/
              ++*a2; /*0x270c18*/
            }
          }
        }
        else if ( !*((_BYTE *)v23 + 984) ) /*0x270bed*/
        {
          goto LABEL_68; /*0x270bf4*/
        }
      }
      ++v22; /*0x270c1a*/
      LODWORD(v20) = cocos2d::CCArray::count(v21); /*0x270c1f*/
    }
  }
  return v20; /*0x270c29*/
}

// [2/13] Address: 0x55cdf0
// Method: RewardUnlockLayer::~RewardUnlockLayer
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall RewardUnlockLayer__dtor_RewardUnlockLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *Block = &RewardUnlockLayer::`vftable'; /*0x55ce06*/
  Block[40] = &RewardUnlockLayer::`vftable'; /*0x55ce10*/
  Block[41] = &RewardUnlockLayer::`vftable'; /*0x55ce1e*/
  Block[42] = &RewardUnlockLayer::`vftable'; /*0x55ce2c*/
  Block[43] = &RewardUnlockLayer::`vftable'; /*0x55ce3a*/
  Block[44] = &RewardUnlockLayer::`vftable'; /*0x55ce48*/
  Block[51] = &RewardUnlockLayer::`vftable'; /*0x55ce56*/
  Block[54] = &RewardUnlockLayer::`vftable'; /*0x55ce64*/
  Block[68] = &RewardUnlockLayer::`vftable'; /*0x55ce72*/
  Block[83] = &RewardUnlockLayer::`vftable'; /*0x55ce80*/
  v4 = (cocos2d::CCObject *)Block[85]; /*0x55ce87*/
  if ( v4 ) /*0x55ce91*/
    cocos2d::CCObject::release(v4); /*0x55ce93*/
  v5 = (cocos2d::CCObject *)Block[88]; /*0x55ce99*/
  if ( v5 ) /*0x55cea3*/
    cocos2d::CCObject::release(v5); /*0x55cea5*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x55ceae*/
  if ( (a2 & 1) != 0 ) /*0x55ceb8*/
    j_j_free(Block); /*0x55cec2*/
  return Block; /*0x55ceca*/
}

// [4/13] Address: 0x55f6c0
// Method: RewardUnlockLayer::showCollectReward
char __fastcall RewardUnlockLayer_showCollectReward(__int64 a1, __int64 a2)
{
  cocos2d::CCObject *v4; // rcx
  bool v5; // zf

  if ( !a2 ) /*0x55f6d3*/
    return 0; /*0x55f6d3*/
  v4 = *(cocos2d::CCObject **)(a1 + 704); /*0x55f6d9*/
  if ( v4 ) /*0x55f6e3*/
    cocos2d::CCObject::release(v4); /*0x55f6e5*/
  *(_QWORD *)(a1 + 704) = a2; /*0x55f6ee*/
  cocos2d::CCObject::retain((cocos2d::CCObject *)a2); /*0x55f6f5*/
  if ( *(_BYTE *)(a2 + 80) ) /*0x55f6fb*/
  {
    if ( *(_DWORD *)(a2 + 64) != *(_DWORD *)(a1 + 696) ) /*0x55f70a*/
      return 0; /*0x55f76c*/
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 720) + 336LL))(*(_QWORD *)(a1 + 720), 0); /*0x55f718*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 720) + 936LL))(*(_QWORD *)(a1 + 720), 0); /*0x55f72a*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 712) + 336LL))(*(_QWORD *)(a1 + 712), 0); /*0x55f73c*/
  v5 = *(_BYTE *)(a1 + 701) == 0; /*0x55f742*/
  *(_BYTE *)(a1 + 700) = 1; /*0x55f749*/
  if ( !v5 ) /*0x55f750*/
    RewardUnlockLayer_playRewardEffect(a1); /*0x55f755*/
  return 1; /*0x55f75c*/
}

// [5/13] Address: 0x55f780
// Method: RewardUnlockLayer::connectionTimeout
__int64 __fastcall RewardUnlockLayer_connectionTimeout(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 700) ) /*0x55f786*/
  {
    LOBYTE(a2) = 1; /*0x55f799*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 720) + 336LL))(*(_QWORD *)(a1 + 720), a2); /*0x55f79e*/
    LOBYTE(v3) = 1; /*0x55f7ab*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 720) + 936LL))(*(_QWORD *)(a1 + 720), v3); /*0x55f7b0*/
    LOBYTE(v4) = 1; /*0x55f7bd*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 712) + 336LL))(*(_QWORD *)(a1 + 712), v4); /*0x55f7c7*/
  }
  return result; /*0x55f7ce*/
}

// [6/13] Address: 0x55f7e0
// Method: RewardUnlockLayer::playDropSound
// Hidden C++ exception states: #wind=2
__int64 RewardUnlockLayer_playDropSound()
{
  int v0; // ecx
  _WORD v2[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]
  void *v5; // [rsp+60h] [rbp+18h]

  v2[7] = 0; /*0x55f7f0*/
  v3 = 13; /*0x55f7f5*/
  v4 = 15; /*0x55f7fe*/
  strcpy((char *)v2, "chestLand.ogg"); /*0x55f80f*/
  v0 = qword_905F60; /*0x55f82f*/
  if ( !qword_905F60 ) /*0x55f839*/
  {
    v5 = operator new(0x8A8u); /*0x55f845*/
    qword_905F60 = sub_5AE20(v5); /*0x55f853*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x55f864*/
    v0 = qword_905F60; /*0x55f866*/
  }
  return FMODAudioEngine_playEffect(v0, (__int64)v2); /*0x55f877*/
}

// [7/13] Address: 0x55f880
// Method: RewardUnlockLayer::step2
// Hidden C++ exception states: #wind=2
struct cocos2d::CCAction *__fastcall RewardUnlockLayer_step2(cocos2d::CCNode *a1)
{
  int v2; // ecx
  __int64 v3; // rbx
  struct cocos2d::CCFiniteTimeAction *v4; // rax
  struct cocos2d::CCAction *v5; // rax
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  void *v10; // [rsp+60h] [rbp+18h]

  v8 = 15; /*0x55f897*/
  v9 = 15; /*0x55f8a0*/
  strcpy(v7, "chestOpen01.ogg"); /*0x55f8b1*/
  v2 = qword_905F60; /*0x55f8dd*/
  if ( !qword_905F60 ) /*0x55f8e7*/
  {
    v10 = operator new(0x8A8u); /*0x55f8f3*/
    qword_905F60 = sub_5AE20(v10); /*0x55f901*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x55f912*/
    v2 = qword_905F60; /*0x55f914*/
  }
  FMODAudioEngine_playEffect(v2, (__int64)v7); /*0x55f920*/
  sub_562400(*((_QWORD *)a1 + 86), 3, 0); /*0x55f934*/
  v3 = cocos2d::CCCallFunc::create(a1, RewardUnlockLayer_step3); /*0x55f949*/
  v4 = cocos2d::CCDelayTime::create(0.30000001); /*0x55f954*/
  v5 = cocos2d::CCSequence::create(v4, v3, 0); /*0x55f963*/
  return cocos2d::CCNode::runAction(a1, v5); /*0x55f96f*/
}

// [8/13] Address: 0x55f980
// Method: RewardUnlockLayer::step3
__int64 __fastcall RewardUnlockLayer_step3(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 700) == 0; /*0x55f980*/
  *(_BYTE *)(a1 + 701) = 1; /*0x55f987*/
  if ( !v1 ) /*0x55f98e*/
    return RewardUnlockLayer_playRewardEffect(a1); /*0x55f98e*/
  return result; /*0x55f994*/
}

// [10/13] Address: 0x561090
// Method: RewardUnlockLayer::showCloseButton
struct cocos2d::CCAction *__fastcall RewardUnlockLayer_showCloseButton(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  cocos2d::CCNode *v4; // rbx
  struct cocos2d::CCAction *v5; // rax

  LOBYTE(a2) = 1; /*0x561099*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 728) + 336LL))(*(_QWORD *)(a1 + 728), a2); /*0x5610a5*/
  LOBYTE(v3) = 1; /*0x5610b2*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 728) + 936LL))(*(_QWORD *)(a1 + 728), v3); /*0x5610b7*/
  v4 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 728) + 952LL))(*(_QWORD *)(a1 + 728)); /*0x5610cd*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)v4 + 40) + 40LL))((_QWORD *)v4 + 40, 0); /*0x5610e0*/
  v5 = cocos2d::CCFadeIn::create(1.0); /*0x5610eb*/
  return cocos2d::CCNode::runAction(v4, v5); /*0x5610f7*/
}

// [12/13] Address: 0x5621a0
// Method: RewardUnlockLayer::currencyWillExit
__int64 __fastcall RewardUnlockLayer_currencyWillExit(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1; /*0x5621a4*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 336LL))(*(_QWORD *)(a1 - 112), a2);
}

// [13/13] Address: 0x5621b0
// Method: RewardUnlockLayer::onClose
__int64 __fastcall RewardUnlockLayer_onClose(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx

  v1 = a1[85]; /*0x5621b6*/
  if ( v1 && *(_QWORD **)(v1 + 720) == a1 ) /*0x5621cc*/
    *(_QWORD *)(v1 + 720) = 0; /*0x5621ce*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x5621de*/
  LOBYTE(v3) = 1; /*0x5621e7*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v3);
}
