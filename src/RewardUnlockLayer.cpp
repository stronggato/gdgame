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

// Address: 0x55e970
// Method: RewardUnlockLayer::init
// Hidden C++ exception states: #wind=6
bool __fastcall RewardUnlockLayer_init(__int64 a1, int a2, cocos2d::CCObject *a3)
{
  bool result; // al
  __int64 v7; // rcx
  cocos2d::CCObject *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const char *v11; // rdx
  __int64 v12; // r8
  float v13; // xmm11_4
  __int128 *v14; // rbx
  __int64 v15; // rax
  cocos2d::CCNode *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  struct cocos2d::CCAction *v21; // rax
  __int64 v22; // rax
  cocos2d::CCNode *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  struct cocos2d::CCAction *v28; // rax
  struct cocos2d::CCAction *v29; // rax
  int i; // esi
  __int128 *v31; // rdx
  __int64 v32; // r8
  float *v33; // rdi
  void *v34; // rcx
  float j; // xmm0_4
  float v36; // xmm0_4
  float v37; // xmm7_4
  float v38; // xmm8_4
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rbx
  __int64 v44; // rax
  struct cocos2d::CCAction *v45; // rax
  cocos2d::CCSprite *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  struct cocos2d::CCActionInterval *v49; // rax
  struct cocos2d::CCAction *v50; // rax
  struct cocos2d::CCFiniteTimeAction *v51; // rbx
  __int64 v52; // rax
  struct cocos2d::CCAction *v53; // rax
  cocos2d::CCNode *v54; // rbx
  float v55; // xmm6_4
  __int64 v56; // rax
  struct cocos2d::CCAction *v57; // rax
  struct cocos2d::CCActionInterval *v58; // rax
  struct cocos2d::CCAction *v59; // rax
  const struct cocos2d::CCPoint *v60; // rax
  struct cocos2d::CCMoveBy *v61; // r13
  const struct cocos2d::CCPoint *v62; // rax
  struct cocos2d::CCMoveBy *v63; // r12
  const struct cocos2d::CCPoint *v64; // rax
  struct cocos2d::CCMoveBy *v65; // r15
  const struct cocos2d::CCPoint *v66; // rax
  struct cocos2d::CCMoveBy *v67; // r14
  const struct cocos2d::CCPoint *v68; // rax
  struct cocos2d::CCMoveBy *v69; // rsi
  const struct cocos2d::CCPoint *v70; // rax
  struct cocos2d::CCMoveBy *v71; // rdi
  struct cocos2d::CCDelayTime *v72; // rbx
  __int64 v73; // rax
  struct cocos2d::CCAction *v74; // rax
  __int64 v75; // r14
  unsigned int v76; // edi
  __int64 v77; // rax
  cocos2d::CCObject *v78; // rbx
  unsigned int v79; // edi
  __int64 v80; // rax
  cocos2d::CCObject *v81; // rbx
  struct cocos2d::CCMenu *v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rbx
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rbx
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  struct cocos2d::CCLabelBMFont *v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rbx
  struct cocos2d::CCFiniteTimeAction *v98; // rax
  struct cocos2d::CCAction *v99; // rax
  __int16 v100; // [rsp+50h] [rbp-B0h]
  __int16 v101; // [rsp+54h] [rbp-ACh] BYREF
  char v102; // [rsp+56h] [rbp-AAh]
  float v103; // [rsp+58h] [rbp-A8h] BYREF
  float v104; // [rsp+5Ch] [rbp-A4h]
  struct cocos2d::CCFiniteTimeAction *v105; // [rsp+60h] [rbp-A0h] BYREF
  char v106[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v107; // [rsp+70h] [rbp-90h]
  char v108[8]; // [rsp+78h] [rbp-88h] BYREF
  char v109[8]; // [rsp+80h] [rbp-80h] BYREF
  char v110[8]; // [rsp+88h] [rbp-78h] BYREF
  char v111[8]; // [rsp+90h] [rbp-70h] BYREF
  char v112[8]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v113; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v115; // [rsp+B8h] [rbp-48h]
  __int128 v116; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v117; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v118; // [rsp+D8h] [rbp-28h]
  __int128 v119; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v120; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v121; // [rsp+F8h] [rbp-8h]
  __int128 v122; // [rsp+100h] [rbp+0h] BYREF
  __int64 v123; // [rsp+110h] [rbp+10h]
  __int64 v124; // [rsp+118h] [rbp+18h]

  v107 = a1;
  result = FLAlertLayer_init(a1, 0);
  if ( result )
  {
    v8 = (cocos2d::CCObject *)cocos2d::CCArray::create(v7);
    *(_QWORD *)(a1 + 672) = v8;
    cocos2d::CCObject::retain(v8);
    v10 = cocos2d::CCDirector::sharedDirector(v9);
    cocos2d::CCDirector::getWinSize(v10, &v103);
    v11 = "GJ_square02.png";
    if ( a2 > 5 )
      v11 = "GJ_square06.png";
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v12 = -1;
    do
      ++v12;
    while ( v11[v12] );
    sub_3C230(&v119);
    v116 = 0;
    v117 = 0;
    v118 = 0;
    sub_3C230(&v116);
    v101 = -1;
    v102 = -1;
    v13 = 0.0;
    switch ( a2 )
    {
      case 6:
        v100 = 17421;
        v102 = 104;
        break;
      case 7:
        v100 = 25907;
        v102 = 74;
        v13 = -50.0;
        break;
      case 8:
        v100 = 8777;
        v102 = 94;
        v13 = 80.0;
        break;
      case 9:
        v100 = 9522;
        v102 = 56;
        break;
      default:
        goto LABEL_15;
    }
    v101 = v100;
LABEL_15:
    v14 = &v119;
    if ( v121 > 0xF )
      v14 = (__int128 *)v119;
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v113, 0.0, 0.0, 80.0, 80.0);
    v16 = (cocos2d::CCNode *)cocos2d::extension::CCScale9Sprite::create(v14, v15);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)v16 + 40) + 40LL))((_QWORD *)v16 + 40, 0);
    v17 = *(_QWORD *)v16;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v105, 340.0, 220.0);
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v17 + 312))(v16, v18);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v16,
      0xFFFFFFFFLL);
    v19 = *(_QWORD *)v16;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v105, v103 * 0.5, v104 * 0.5);
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v19 + 184))(v16, v20);
    v21 = cocos2d::CCFadeIn::create(0.2);
    cocos2d::CCNode::runAction(v16, v21);
    (**((void (__fastcall ***)(_QWORD *, __int16 *))v16 + 40))((_QWORD *)v16 + 40, &v101);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 672), v16);
    if ( a2 > 5 )
    {
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v113, 0.0, 0.0, 80.0, 80.0);
      v23 = (cocos2d::CCNode *)cocos2d::extension::CCScale9Sprite::create("GJ_square07.png", v22);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)v23 + 40) + 40LL))((_QWORD *)v23 + 40, 0);
      v24 = *(_QWORD *)v23;
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v105, 340.0, 220.0);
      (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v24 + 312))(v23, v25);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        v23,
        4294967294LL);
      v26 = *(_QWORD *)v23;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v105, v103 * 0.5, v104 * 0.5);
      (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v26 + 184))(v23, v27);
      v28 = cocos2d::CCFadeIn::create(0.2);
      cocos2d::CCNode::runAction(v23, v28);
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 672), v23);
    }
    v29 = cocos2d::CCFadeTo::create(0.2, 0x96u);
    cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v29);
    for ( i = 0; i < 4; ++i )
    {
      v31 = &v116;
      v32 = -1;
      if ( a2 == 9 )
      {
        if ( v118 > 0xF )
          v31 = (__int128 *)v116;
        v122 = 0;
        v123 = 0;
        v124 = 0;
        do
          ++v32;
        while ( *((_BYTE *)v31 + v32) );
        sub_3C230(&v122);
        v33 = (float *)sub_4C150(&v122);
        sub_3C310(&v122);
      }
      else
      {
        if ( v118 > 0xF )
          v31 = (__int128 *)v116;
        v113 = 0;
        v114 = 0;
        v115 = 0;
        do
          ++v32;
        while ( *((_BYTE *)v31 + v32) );
        sub_3C230(&v113);
        v33 = (float *)sub_4B5B0(&v113);
        if ( v115 > 0xF )
        {
          v34 = (void *)v113;
          if ( v115 + 1 >= 0x1000 )
          {
            v34 = *(void **)(v113 - 8);
            if ( (unsigned __int64)(v113 - (_QWORD)v34 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v34);
        }
        v114 = 0;
        v115 = 15;
        LOBYTE(v113) = 0;
        if ( a2 > 5 )
        {
          for ( j = v13; j < 0.0; j = j + 360.0 )
            ;
          v36 = (float)(j / 360.0) * 6.283185307179586;
          v33[150] = v36;
          sub_4BA60(v33);
        }
      }
      (*(void (__fastcall **)(_QWORD, float *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        v33,
        8);
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 672), (struct cocos2d::CCObject *)v33);
      v37 = 145.0;
      v38 = 85.0;
      if ( i )
      {
        switch ( i )
        {
          case 1:
            v37 = -145.0;
            v42 = *(_QWORD *)v33;
            (*(void (__fastcall **)(float *))(*(_QWORD *)v33 + 144LL))(v33);
            (*(void (__fastcall **)(float *))(v42 + 136))(v33);
            break;
          case 2:
            v40 = *(_QWORD *)v33;
            (*(void (__fastcall **)(float *))(*(_QWORD *)v33 + 128LL))(v33);
            (*(void (__fastcall **)(float *))(v40 + 120))(v33);
            v41 = *(_QWORD *)v33;
            (*(void (__fastcall **)(float *))(*(_QWORD *)v33 + 144LL))(v33);
            (*(void (__fastcall **)(float *))(v41 + 136))(v33);
            break;
          case 3:
            v38 = -85.0;
            v39 = *(_QWORD *)v33;
            (*(void (__fastcall **)(float *))(*(_QWORD *)v33 + 128LL))(v33);
            (*(void (__fastcall **)(float *))(v39 + 120))(v33);
            break;
        }
      }
      else
      {
        v37 = -145.0;
        v38 = -85.0;
      }
      v43 = *(_QWORD *)v33;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v105, (float)(v103 * 0.5) + v37, (float)(v104 * 0.5) + v38);
      (*(void (__fastcall **)(float *, __int64))(v43 + 184))(v33, v44);
      v45 = cocos2d::CCFadeIn::create(0.2);
      cocos2d::CCNode::runAction((cocos2d::CCNode *)v33, v45);
    }
    *(_QWORD *)(a1 + 680) = a3;
    if ( a3 )
      cocos2d::CCObject::retain(a3);
    *(_DWORD *)(a1 + 696) = a2;
    v46 = GJChestSprite_create(a2);
    *(_QWORD *)(a1 + 688) = v46;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v46,
      2);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v106, v103 * 0.5, (float)(v104 * 0.5) - 20.0);
    v47 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 320LL))(*(_QWORD *)(a1 + 688));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, 0.0, v104 + *(float *)(v47 + 4));
    cocos2d::CCPoint::operator+(v106, &v105, v48);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCFiniteTimeAction **))(**(_QWORD **)(a1 + 688) + 184LL))(
      *(_QWORD *)(a1 + 688),
      &v105);
    v49 = cocos2d::CCMoveTo::create(1.0, (const struct cocos2d::CCPoint *)v106);
    v50 = cocos2d::CCEaseBounceOut::create(v49);
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 688), v50);
    v51 = cocos2d::CCDelayTime::create(0.36000001);
    v52 = cocos2d::CCCallFunc::create(a1, RewardUnlockLayer_playDropSound);
    v53 = cocos2d::CCSequence::create(v51, v52, 0);
    cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v53);
    v54 = cocos2d::CCSprite::createWithSpriteFrameName("chest_shadow_001.png");
    if ( a2 == 1 )
      v55 = 0.80000001;
    else
      v55 = 1.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, 0.0, v55 * -48.0);
    cocos2d::CCPoint::operator+(v106, &v105, v56);
    (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCFiniteTimeAction **))(*(_QWORD *)v54 + 184LL))(
      v54,
      &v105);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v54,
      1);
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v54 + 40) + 40LL))((__int64)v54 + 320, 0);
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v54 + 160LL))(v54);
    v57 = cocos2d::CCFadeTo::create(0.40000001, 0x5Au);
    cocos2d::CCNode::runAction(v54, v57);
    v58 = cocos2d::CCScaleTo::create(1.0, v55 * 0.94999999);
    v59 = cocos2d::CCEaseBounceOut::create(v58);
    cocos2d::CCNode::runAction(v54, v59);
    v105 = cocos2d::CCDelayTime::create(1.2);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, -4.0, 0.0);
    v61 = cocos2d::CCMoveBy::create(0.050000001, v60);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v110, 4.0, 0.0);
    v63 = cocos2d::CCMoveBy::create(0.050000001, v62);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v111, -4.0, 0.0);
    v65 = cocos2d::CCMoveBy::create(0.050000001, v64);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v112, 4.0, 0.0);
    v67 = cocos2d::CCMoveBy::create(0.050000001, v66);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v109, -4.0, 0.0);
    v69 = cocos2d::CCMoveBy::create(0.050000001, v68);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v113, 4.0, 0.0);
    v71 = cocos2d::CCMoveBy::create(0.050000001, v70);
    v72 = cocos2d::CCDelayTime::create(0.2);
    v73 = cocos2d::CCCallFunc::create(v107, RewardUnlockLayer_step2);
    v74 = cocos2d::CCSequence::create(v105, v61, v63, v65, v67, v69, v71, v72, v73, 0);
    v75 = v107;
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(v107 + 688), v74);
    v76 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteBtn_001.png");
    *(_QWORD *)&v113 = operator new(0x208u);
    v77 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v113);
    v78 = (cocos2d::CCObject *)v77;
    if ( v77 )
    {
      if ( (unsigned __int8)sub_47940(v77, v76, 0, v75, (__int64)RewardUnlockLayer_onClose) )
      {
        cocos2d::CCObject::autorelease(v78);
        goto LABEL_58;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v78 + 8LL))(v78, 1);
    }
    v78 = 0;
LABEL_58:
    *(_QWORD *)(v75 + 720) = v78;
    *((_DWORD *)v78 + 93) = 1070386381;
    v79 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_rewardBtn_001.png");
    *(_QWORD *)&v113 = operator new(0x208u);
    v80 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v113);
    v81 = (cocos2d::CCObject *)v80;
    if ( v80 )
    {
      if ( (unsigned __int8)sub_47940(v80, v79, 0, v75, (__int64)RewardUnlockLayer_onClose) )
      {
        cocos2d::CCObject::autorelease(v81);
LABEL_63:
        *(_QWORD *)(v75 + 728) = v81;
        *((_DWORD *)v81 + 93) = 1070386381;
        v82 = cocos2d::CCMenu::create(*(struct cocos2d::CCMenuItem **)(v75 + 720), *(_QWORD *)(v75 + 728), 0);
        *(_QWORD *)(v75 + 552) = v82;
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *, __int64))(**(_QWORD **)(v75 + 584) + 456LL))(
          *(_QWORD *)(v75 + 584),
          v82,
          10);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v75 + 720) + 936LL))(*(_QWORD *)(v75 + 720), 0);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v75 + 720) + 336LL))(*(_QWORD *)(v75 + 720), 0);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v75 + 728) + 936LL))(*(_QWORD *)(v75 + 728), 0);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v75 + 728) + 336LL))(*(_QWORD *)(v75 + 728), 0);
        v83 = **(_QWORD **)(v75 + 720);
        v84 = *(_QWORD *)(v75 + 552);
        v85 = *(_QWORD *)(v75 + 720);
        cocos2d::CCPoint::CCPoint(
          (cocos2d::CCPoint *)&v113,
          (float)((float)(v103 * 0.5) - 170.0) + 10.0,
          (float)((float)(v104 * 0.5) + 110.0) - 10.0);
        cocos2d::CCNode::convertToNodeSpace(v84, v109, v86);
        (*(void (__fastcall **)(__int64, __int64))(v83 + 184))(v85, v87);
        v88 = **(_QWORD **)(v75 + 728);
        v89 = *(_QWORD *)(v75 + 552);
        v90 = *(_QWORD *)(v75 + 728);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v113, v103 * 0.5, (float)((float)(v104 * 0.5) - 110.0) + 0.0);
        cocos2d::CCNode::convertToNodeSpace(v89, v109, v91);
        (*(void (__fastcall **)(__int64, __int64))(v88 + 184))(v90, v92);
        v93 = cocos2d::CCLabelBMFont::create("Something went wrong...", "goldFont.fnt");
        *(_QWORD *)(v75 + 712) = v93;
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(v75 + 584) + 464LL))(
          *(_QWORD *)(v75 + 584),
          v93);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v75 + 712) + 160LL))(*(_QWORD *)(v75 + 712));
        v94 = **(_QWORD **)(v75 + 712);
        v95 = *(_QWORD *)(v75 + 712);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v113, v103 * 0.5, (float)(v104 * 0.5) - 90.0);
        (*(void (__fastcall **)(__int64, __int64))(v94 + 184))(v95, v96);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v75 + 712) + 336LL))(*(_QWORD *)(v75 + 712), 0);
        v97 = cocos2d::CCCallFunc::create(v75, RewardUnlockLayer_connectionTimeout);
        v98 = cocos2d::CCDelayTime::create(10.0);
        v99 = cocos2d::CCSequence::create(v98, v97, 0);
        cocos2d::CCNode::runAction((cocos2d::CCNode *)v75, v99);
        sub_3C310(&v116);
        sub_3C310(&v119);
        return 1;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v81 + 8LL))(v81, 1);
    }
    v81 = 0;
    goto LABEL_63;
  }
  return result;
}

// Address: 0x561110
// Method: RewardUnlockLayer::playLabelEffect
// Hidden C++ exception states: #wind=1
void __fastcall RewardUnlockLayer_playLabelEffect(
        __int64 a1,
        int a2,
        int a3,
        cocos2d::CCNode *a4,
        __int64 a5,
        float a6)
{
  __int64 v8; // r14
  char v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  _BYTE *v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  char *v16; // r14
  void *v17; // rcx
  unsigned __int64 v18; // rsi
  _BYTE *v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  char *v22; // r14
  void *v23; // rcx
  unsigned __int64 v24; // rdi
  _BYTE *v25; // rbx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  char *v28; // rax
  char *v29; // rsi
  void *v30; // rcx
  _BYTE *v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rbx
  _BYTE *v34; // rbx
  unsigned __int64 v35; // rcx
  __int64 v36; // rbx
  _BYTE *v37; // rbx
  unsigned __int64 v38; // rcx
  __int64 v39; // rbx
  _BYTE *v40; // rbx
  unsigned __int64 v41; // rcx
  __int64 v42; // rbx
  _BYTE *v43; // rbx
  unsigned __int64 v44; // rcx
  __int64 v45; // rbx
  _BYTE *v46; // rbx
  unsigned __int64 v47; // rcx
  __int64 v48; // rbx
  _BYTE *v49; // rbx
  unsigned __int64 v50; // rcx
  __int64 v51; // rbx
  _BYTE *v52; // rbx
  unsigned __int64 v53; // rcx
  __int64 v54; // rbx
  _BYTE *v55; // rbx
  unsigned __int64 v56; // rcx
  __int64 v57; // rbx
  unsigned __int64 v58; // rsi
  _BYTE *v59; // rbx
  unsigned __int64 v60; // rcx
  __int64 v61; // rbx
  char *v62; // r14
  void *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  _BYTE *v67; // rbx
  unsigned __int64 v68; // rcx
  __int64 v69; // rbx
  cocos2d::CCNode *v70; // r15
  cocos2d::CCNode *v71; // rsi
  void **v72; // rcx
  cocos2d::CCNode *v73; // r14
  const char *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  cocos2d::CCString *v80; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v82; // r12
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdi
  struct cocos2d::CCActionInterval *v92; // rax
  struct cocos2d::CCEaseBounceOut *v93; // rbx
  struct cocos2d::CCFiniteTimeAction *v94; // rax
  struct cocos2d::CCAction *v95; // rax
  struct cocos2d::CCFiniteTimeAction *v96; // rax
  struct cocos2d::CCAction *v97; // rax
  struct cocos2d::CCFiniteTimeAction *v98; // rbx
  struct cocos2d::CCFadeIn *v99; // rax
  struct cocos2d::CCAction *v100; // rdi
  struct cocos2d::CCFiniteTimeAction *v101; // rbx
  struct cocos2d::CCFadeIn *v102; // rax
  struct cocos2d::CCAction *v103; // rbx
  struct cocos2d::CCFiniteTimeAction *v104; // rbx
  struct cocos2d::CCFadeIn *v105; // rax
  struct cocos2d::CCAction *v106; // rax
  void *v107; // rcx
  _BYTE v109[8]; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v110[8]; // [rsp+40h] [rbp-89h] BYREF
  int v111; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v112[8]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v113[8]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v114; // [rsp+60h] [rbp-69h]
  _BYTE v115[8]; // [rsp+68h] [rbp-61h] BYREF
  void *Block[2]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v117; // [rsp+80h] [rbp-49h]
  unsigned __int64 v118; // [rsp+88h] [rbp-41h]

  v111 = a2;
  v8 = a1;
  v114 = a5;
  *(_OWORD *)Block = 0;
  v117 = 0;
  v118 = 15;
  LOBYTE(Block[0]) = 0;
  v9 = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v112, (const struct cocos2d::CCPoint *)&unk_905588);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v113, (const struct cocos2d::CCPoint *)&unk_905588);
  switch ( a3 )
  {
    case 1:
      v12 = v118;
      if ( v118 < 0x17 )
      {
        v14 = v118 >> 1;
        v15 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
        {
          v15 = 31;
          if ( v118 + v14 > 0x1F )
            v15 = v118 + v14;
        }
        v16 = (char *)sub_3C460(v15 + 1);
        v117 = 23;
        v118 = v15;
        strcpy(v16, "currencyOrbIcon_001.png");
        v11 = 103;
        if ( v12 <= 0xF )
          goto LABEL_11;
        v17 = Block[0];
        if ( v12 + 1 < 0x1000
          || (v17 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) <= 0x1F) )
        {
          j_j_free(v17);
LABEL_11:
          Block[0] = v16;
          v8 = a1;
          goto LABEL_109;
        }
LABEL_107:
        invoke_watson(0, 0, 0, 0, 0);
      }
      v13 = Block[0];
      v117 = 23;
      memmove(Block[0], &xmmword_716E08, 0x17u);
      v13[23] = 0;
LABEL_109:
      v70 = (cocos2d::CCNode *)cocos2d::CCNode::create(v11, v10);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(v8 + 584) + 456LL))(
        *(_QWORD *)(v8 + 584),
        v70,
        10);
      if ( a4 )
      {
        v71 = a4;
      }
      else
      {
        v72 = Block;
        if ( v118 > 0xF )
          v72 = (void **)Block[0];
        v71 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v72);
      }
      v73 = 0;
      if ( v9 )
      {
        v74 = "shard2Shadow_001.png";
        if ( a3 <= 8 )
          v74 = "shardShadow_001.png";
        v73 = cocos2d::CCSprite::createWithSpriteFrameName(v74);
        (*(void (__fastcall **)(cocos2d::CCNode *, cocos2d::CCNode *, __int64))(*(_QWORD *)v71 + 456LL))(
          v71,
          v73,
          0xFFFFFFFFLL);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v115, 0.0, 1.0);
        v76 = v75;
        cocos2d::CCNode::convertToNodeSpace(v71, v110, &unk_905588);
        cocos2d::CCPoint::operator+(v77, v109, v76);
        (*(void (__fastcall **)(cocos2d::CCNode *, _BYTE *))(*(_QWORD *)v73 + 184LL))(v73, v109);
      }
      (*(void (__fastcall **)(cocos2d::CCNode *, cocos2d::CCNode *))(*(_QWORD *)v70 + 464LL))(v70, v71);
      (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v71 + 160LL))(v71);
      if ( a4 )
      {
        v82 = 0;
      }
      else
      {
        v78 = *(_QWORD *)v71;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v110, 15.0, 0.0);
        (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v78 + 184))(v71, v79);
        v80 = cocos2d::CCString::createWithFormat("+%i", v111);
        CString = cocos2d::CCString::getCString(v80);
        v82 = cocos2d::CCLabelBMFont::create(CString, (const char *)&qword_6FFF68);
        v83 = *(_QWORD *)v82;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v110, 1.0, 0.5);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v83 + 288))(v82, v84);
        (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v70 + 464LL))(v70, v82);
        v85 = *(_QWORD *)v82;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v110, -2.0, -16.0);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v85 + 184))(v82, v86);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v110, -15.0, 0.0);
        v88 = v87;
        v89 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v71 + 200LL))(v71);
        cocos2d::CCPoint::operator+(v89, v109, v88);
        cocos2d::CCPoint::operator+(v109, &v111, v112);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, int *))(*(_QWORD *)v82 + 184LL))(v82, &v111);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v82 + 160LL))(v82);
        *((_DWORD *)v82 + 7) = 4;
        cocos2d::CCLabelBMFont::limitLabelWidth(v82, 40.0, 0.69999999, 0.0);
      }
      v90 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v71 + 200LL))(v71);
      cocos2d::CCPoint::operator+(v90, v109, v113);
      (*(void (__fastcall **)(cocos2d::CCNode *, _BYTE *))(*(_QWORD *)v71 + 184LL))(v71, v109);
      (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v70 + 184LL))(v70, v114);
      (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v70 + 160LL))(v70);
      v91 = cocos2d::CCCallFuncO::create(a1, guard_check_icall_nop, v70);
      v92 = cocos2d::CCScaleTo::create(0.30000001, 1.0);
      v93 = cocos2d::CCEaseBounceOut::create(v92);
      v94 = cocos2d::CCDelayTime::create(a6);
      v95 = cocos2d::CCSequence::create(v94, v93, 0);
      cocos2d::CCNode::runAction(v70, v95);
      v96 = cocos2d::CCDelayTime::create(a6 + 0.2);
      v97 = cocos2d::CCSequence::create(v96, v91, 0);
      cocos2d::CCNode::runAction(v70, v97);
      (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v71 + 40) + 40LL))((__int64)v71 + 320, 0);
      if ( v82 )
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v82 + 46) + 40LL))((__int64)v82 + 368, 0);
      v98 = cocos2d::CCDelayTime::create(a6);
      v99 = cocos2d::CCFadeIn::create(0.30000001);
      v100 = cocos2d::CCSequence::create(v98, v99, 0);
      v101 = cocos2d::CCDelayTime::create(a6);
      v102 = cocos2d::CCFadeIn::create(0.30000001);
      v103 = cocos2d::CCSequence::create(v101, v102, 0);
      cocos2d::CCNode::runAction(v71, v100);
      if ( v82 )
        cocos2d::CCNode::runAction(v82, v103);
      if ( v73 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v73 + 40) + 40LL))((__int64)v73 + 320, 0);
        v104 = cocos2d::CCDelayTime::create(a6);
        v105 = cocos2d::CCFadeIn::create(0.30000001);
        v106 = cocos2d::CCSequence::create(v104, v105, 0);
        cocos2d::CCNode::runAction(v73, v106);
      }
LABEL_127:
      if ( v118 > 0xF )
      {
        v107 = Block[0];
        if ( v118 + 1 >= 0x1000 )
        {
          v107 = (void *)*((_QWORD *)Block[0] - 1);
          if ( (unsigned __int64)((char *)Block[0] - (char *)v107 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v107);
      }
      return;
    case 3:
      v18 = v118;
      if ( v118 >= 0x15 )
      {
        v19 = Block[0];
        v117 = 21;
        memmove(Block[0], "GJ_bigDiamond_001.png", 0x15u);
        v19[21] = 0;
        goto LABEL_109;
      }
      v20 = v118 >> 1;
      v21 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v21 = 31;
        if ( v118 + v20 > 0x1F )
          v21 = v118 + v20;
      }
      v22 = (char *)sub_3C460(v21 + 1);
      v117 = 21;
      v118 = v21;
      strcpy(v22, "GJ_bigDiamond_001.png");
      v11 = (unsigned __int8)aGjBigdiamond00[20];
      if ( v18 <= 0xF )
        goto LABEL_21;
      v23 = Block[0];
      if ( v18 + 1 < 0x1000
        || (v23 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v23 - 8) <= 0x1F) )
      {
        j_j_free(v23);
LABEL_21:
        Block[0] = v22;
        v8 = a1;
        goto LABEL_109;
      }
      goto LABEL_107;
    case 4:
      v24 = v118;
      if ( v118 >= 0x14 )
      {
        v25 = Block[0];
        v117 = 20;
        memmove(Block[0], &xmmword_732B28, 0x14u);
        v25[20] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v26 = v118 >> 1;
      v27 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v27 = 31;
        if ( v26 + v118 > 0x1F )
          v27 = v26 + v118;
      }
      v28 = (char *)sub_3C460(v27 + 1);
      v117 = 20;
      v118 = v27;
      *(_OWORD *)v28 = xmmword_732B28;
      v11 = 1735290926;
LABEL_28:
      strcpy(v28 + 16, ".png");
LABEL_29:
      v29 = v28;
      if ( v24 <= 0xF )
        goto LABEL_33;
      v30 = Block[0];
      if ( v24 + 1 < 0x1000
        || (v30 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v30 - 8) <= 0x1F) )
      {
        j_j_free(v30);
LABEL_33:
        Block[0] = v29;
        v9 = 1;
        goto LABEL_109;
      }
      goto LABEL_107;
    case 5:
      v24 = v118;
      if ( v118 >= 0x13 )
      {
        v31 = Block[0];
        v117 = 19;
        memmove(Block[0], &xmmword_732B58, 0x13u);
        v31[19] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v32 = v118 >> 1;
      v33 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v33 = 31;
        if ( v118 + v32 > 0x1F )
          v33 = v118 + v32;
      }
      v28 = (char *)sub_3C460(v33 + 1);
      v117 = 19;
      v118 = v33;
      strcpy(v28, "iceShardBig_001.png");
      v11 = 103;
      goto LABEL_29;
    case 6:
      v24 = v118;
      if ( v118 >= 0x16 )
      {
        v34 = Block[0];
        v117 = 22;
        memmove(Block[0], &xmmword_732B40, 0x16u);
        v34[22] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v35 = v118 >> 1;
      v36 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v36 = 31;
        if ( v35 + v118 > 0x1F )
          v36 = v35 + v118;
      }
      v28 = (char *)sub_3C460(v36 + 1);
      v117 = 22;
      v118 = v36;
      strcpy(v28, "poisonShardBig_001.png");
      v11 = 26478;
      goto LABEL_29;
    case 7:
      v24 = v118;
      if ( v118 >= 0x16 )
      {
        v37 = Block[0];
        v117 = 22;
        memmove(Block[0], "shadowShardBig_001.png", 0x16u);
        v37[22] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v38 = v118 >> 1;
      v39 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v39 = 31;
        if ( v118 + v38 > 0x1F )
          v39 = v118 + v38;
      }
      v28 = (char *)sub_3C460(v39 + 1);
      v117 = 22;
      v118 = v39;
      strcpy(v28, "shadowShardBig_001.png");
      v11 = *(unsigned __int16 *)"ng";
      goto LABEL_29;
    case 8:
      v24 = v118;
      if ( v118 >= 0x14 )
      {
        v40 = Block[0];
        v117 = 20;
        memmove(Block[0], &xmmword_732B70, 0x14u);
        v40[20] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v41 = v118 >> 1;
      v42 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v42 = 31;
        if ( v41 + v118 > 0x1F )
          v42 = v41 + v118;
      }
      v28 = (char *)sub_3C460(v42 + 1);
      v117 = 20;
      v118 = v42;
      *(_OWORD *)v28 = xmmword_732B70;
      v11 = 1735290926;
      goto LABEL_28;
    case 9:
      v58 = v118;
      if ( v118 < 0x11 )
      {
        v60 = v118 >> 1;
        v61 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
        {
          v61 = 31;
          if ( v118 + v60 > 0x1F )
            v61 = v118 + v60;
        }
        v62 = (char *)sub_3C460(v61 + 1);
        v117 = 17;
        v118 = v61;
        strcpy(v62, "GJ_bigKey_001.png");
        if ( v58 > 0xF )
        {
          v63 = Block[0];
          if ( v58 + 1 >= 0x1000 )
          {
            v63 = (void *)*((_QWORD *)Block[0] - 1);
            if ( (unsigned __int64)((char *)Block[0] - (char *)v63 - 8) > 0x1F )
              goto LABEL_107;
          }
LABEL_96:
          j_j_free(v63);
        }
LABEL_97:
        Block[0] = v62;
        v8 = a1;
      }
      else
      {
        v59 = Block[0];
        v117 = 17;
        memmove(Block[0], &xmmword_732AE0, 0x11u);
        v59[17] = 0;
      }
LABEL_98:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v109, -7.0, 0.0);
      cocos2d::CCPoint::operator=(v112, v64);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v109, 0.0, -0.5);
      cocos2d::CCPoint::operator=(v113, v65);
      goto LABEL_109;
    case 10:
      v24 = v118;
      if ( v118 >= 0x19 )
      {
        v43 = Block[0];
        v117 = 25;
        memmove(Block[0], &xmmword_732BB8, 0x19u);
        v43[25] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v44 = v118 >> 1;
      v45 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v45 = 31;
        if ( v118 + v44 > 0x1F )
          v45 = v118 + v44;
      }
      v28 = (char *)sub_3C460(v45 + 1);
      v117 = 25;
      v118 = v45;
      strcpy(v28, "shard0201ShardBig_001.png");
      v11 = 103;
      goto LABEL_29;
    case 11:
      v24 = v118;
      if ( v118 >= 0x19 )
      {
        v46 = Block[0];
        v117 = 25;
        memmove(Block[0], &xmmword_732D00, 0x19u);
        v46[25] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v47 = v118 >> 1;
      v48 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v48 = 31;
        if ( v47 + v118 > 0x1F )
          v48 = v47 + v118;
      }
      v28 = (char *)sub_3C460(v48 + 1);
      v117 = 25;
      v118 = v48;
      strcpy(v28, "shard0202ShardBig_001.png");
      v11 = 103;
      goto LABEL_29;
    case 12:
      v24 = v118;
      if ( v118 >= 0x19 )
      {
        v49 = Block[0];
        v117 = 25;
        memmove(Block[0], &xmmword_732CE0, 0x19u);
        v49[25] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v50 = v118 >> 1;
      v51 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v51 = 31;
        if ( v50 + v118 > 0x1F )
          v51 = v50 + v118;
      }
      v28 = (char *)sub_3C460(v51 + 1);
      v117 = 25;
      v118 = v51;
      strcpy(v28, "shard0203ShardBig_001.png");
      v11 = 103;
      goto LABEL_29;
    case 13:
      v24 = v118;
      if ( v118 >= 0x19 )
      {
        v52 = Block[0];
        v117 = 25;
        memmove(Block[0], &xmmword_732D40, 0x19u);
        v52[25] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v53 = v118 >> 1;
      v54 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v54 = 31;
        if ( v118 + v53 > 0x1F )
          v54 = v118 + v53;
      }
      v28 = (char *)sub_3C460(v54 + 1);
      v117 = 25;
      v118 = v54;
      strcpy(v28, "shard0204ShardBig_001.png");
      v11 = 103;
      goto LABEL_29;
    case 14:
      v24 = v118;
      if ( v118 >= 0x19 )
      {
        v55 = Block[0];
        v117 = 25;
        memmove(Block[0], &xmmword_732D20, 0x19u);
        v55[25] = 0;
        v9 = 1;
        goto LABEL_109;
      }
      v56 = v118 >> 1;
      v57 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v57 = 31;
        if ( v118 + v56 > 0x1F )
          v57 = v118 + v56;
      }
      v28 = (char *)sub_3C460(v57 + 1);
      v117 = 25;
      v118 = v57;
      strcpy(v28, "shard0205ShardBig_001.png");
      v11 = 103;
      goto LABEL_29;
    case 16:
      v66 = v118;
      if ( v118 >= 0x15 )
      {
        v67 = Block[0];
        v117 = 21;
        memmove(Block[0], &xmmword_732BF8, 0x15u);
        v67[21] = 0;
        goto LABEL_98;
      }
      v68 = v118 >> 1;
      v69 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v118 <= 0x7FFFFFFFFFFFFFFFLL - (v118 >> 1) )
      {
        v69 = 31;
        if ( v118 + v68 > 0x1F )
          v69 = v118 + v68;
      }
      v62 = (char *)sub_3C460(v69 + 1);
      v117 = 21;
      v118 = v69;
      strcpy(v62, "GJ_bigGoldKey_001.png");
      if ( v66 <= 0xF )
        goto LABEL_97;
      v63 = Block[0];
      if ( v66 + 1 >= 0x1000 )
      {
        v63 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v63 - 8) > 0x1F )
          goto LABEL_107;
      }
      goto LABEL_96;
    default:
      if ( a4 )
        goto LABEL_109;
      goto LABEL_127;
  }
}

// Address: 0x55f9a0
// Method: RewardUnlockLayer::playRewardEffect
// Hidden C++ exception states: #wind=19
struct cocos2d::CCAction *__fastcall RewardUnlockLayer_playRewardEffect(cocos2d::CCNode *a1)
{
  int v2; // ecx
  int v3; // esi
  int v4; // ecx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdi
  cocos2d::CCArray *v10; // r13
  int v11; // r15d
  unsigned int v12; // ebx
  struct cocos2d::CCObject *v13; // rax
  __int64 v14; // rdi
  cocos2d::CCArray *v15; // rcx
  int v16; // r14d
  unsigned int v17; // ebx
  struct cocos2d::CCObject *v18; // rax
  __int64 v19; // rdi
  cocos2d::CCArray *v20; // rcx
  unsigned int v21; // ebx
  struct cocos2d::CCObject *v22; // rax
  int v23; // edi
  unsigned int v24; // ebx
  struct cocos2d::CCObject *v25; // rax
  int v26; // ecx
  int v27; // edi
  int v28; // eax
  BOOL v29; // ebx
  int v30; // ecx
  int v31; // ecx
  __int128 *v32; // rdx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  void (__fastcall *v37)(__int64); /... [25074 chars total]
