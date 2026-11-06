#include <Geode/binding/SetupEnterEffectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/10] Address: 0x5a0880
// Method: SetupEnterEffectPopup::triggerValueFromSliderValue
float __fastcall SetupEnterEffectPopup_triggerValueFromSliderValue(__int64 a1, unsigned int a2, float a3)
{
  float result; // xmm0_4

  result = SetupTriggerPopup_triggerValueFromSliderValue(a1, a2, a3); /*0x5a0888*/
  if ( (unsigned __int8)sub_5A0820(a2) ) /*0x5a088f*/
    return floorf(result) * 3.0; /*0x5a089d*/
  return result; /*0x5a08a5*/
}

// [3/10] Address: 0x5a08b0
// Method: SetupEnterEffectPopup::triggerSliderValueFromValue
__m128 __fastcall SetupEnterEffectPopup_triggerSliderValueFromValue(__int64 a1, unsigned int a2, float a3)
{
  int v3; // r8d
  __int64 v4; // r9

  if ( (unsigned __int8)sub_5A0820(a2) ) /*0x5a08bc*/
    a3 = a3 / 3.0; /*0x5a08cb*/
  return SetupTriggerPopup_triggerSliderValueFromValue(v4, v3, a3); /*0x5a08d3*/
}

// [4/10] Address: 0x5a08e0
// Method: SetupEnterEffectPopup::updateInputNode
struct cocos2d::CCObject *__fastcall SetupEnterEffectPopup_updateInputNode(__int64 a1, unsigned int a2, float a3)
{
  int v3; // r8d
  __int64 v4; // r9

  if ( (unsigned __int8)sub_5A0820(a2) ) /*0x5a08ec*/
    a3 = a3 / 3.0; /*0x5a08f5*/
  return SetupTriggerPopup_updateInputNode(v4, v3, a3); /*0x5a0903*/
}

// [5/10] Address: 0x5a0910
// Method: SetupEnterEffectPopup::updateInputValue
__int64 __fastcall SetupEnterEffectPopup_updateInputValue(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  float *v3; // r8

  result = sub_5A0820(a2); /*0x5a0916*/
  if ( (_BYTE)result ) /*0x5a091d*/
    *v3 = *v3 * 3.0; /*0x5a092c*/
  return result; /*0x5a0931*/
}

// [6/10] Address: 0x5ae560
// Method: SetupEnterEffectPopup::~SetupEnterEffectPopup
cocos2d::CCNode *__fastcall SetupEnterEffectPopup__dtor_SetupEnterEffectPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupEnterEffectPopup::`vftable'; /*0x5ae573*/
  *((_QWORD *)Block + 40) = &SetupEnterEffectPopup::`vftable'; /*0x5ae580*/
  *((_QWORD *)Block + 41) = &SetupEnterEffectPopup::`vftable'; /*0x5ae58e*/
  *((_QWORD *)Block + 42) = &SetupEnterEffectPopup::`vftable'; /*0x5ae59c*/
  *((_QWORD *)Block + 43) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5aa*/
  *((_QWORD *)Block + 44) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5b8*/
  *((_QWORD *)Block + 51) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5c6*/
  *((_QWORD *)Block + 54) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5d4*/
  *((_QWORD *)Block + 68) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5e2*/
  *((_QWORD *)Block + 83) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5f0*/
  *((_QWORD *)Block + 84) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5fe*/
  *((_QWORD *)Block + 125) = &SetupEnterEffectPopup::`vftable'; /*0x5ae60c*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5ae613*/
  if ( (a2 & 1) != 0 ) /*0x5ae61b*/
    j_j_free(Block); /*0x5ae625*/
  return Block; /*0x5ae62a*/
}

// [7/10] Address: 0x5b08f0
// Method: SetupEnterEffectPopup::determineStartValues
void __fastcall SetupEnterEffectPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rdi
  bool v4; // zf
  char v5; // si
  bool v6; // r14
  unsigned int v7; // ebp
  struct cocos2d::CCObject *v8; // rax
  int v9; // edx
  int v10; // ecx
  __m128 v11; // xmm2
  __m128i v12; // xmm2
  __m128 v13; // xmm1
  __m128 v14; // [rsp+20h] [rbp-38h]
  float v15; // [rsp+3Ch] [rbp-1Ch]

  SetupTriggerPopup_determineStartValues(a1); /*0x5b08fa*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5b08ff*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5b0919*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5b091c*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5b0924*/
  }
  if ( v3 ) /*0x5b092e*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5b0937*/
    {
      v4 = *(_DWORD *)(a1 + 1008) == 3021; /*0x5b0945*/
      v5 = 1; /*0x5b095c*/
      *(_DWORD *)(a1 + 1032) = -1; /*0x5b095f*/
      v6 = !v4; /*0x5b0975*/
      v7 = 0; /*0x5b0981*/
      for ( *(_OWORD *)(a1 + 1048) = xmmword_8F85D0; v7 < cocos2d::CCArray::count(v3); ++v7 ) /*0x5b098b*/
      {
        v8 = cocos2d::CCArray::objectAtIndex(v3, v7); /*0x5b09a5*/
        v9 = *(_DWORD *)(a1 + 1032); /*0x5b09ab*/
        v10 = *((_DWORD *)v8 + 464); /*0x5b09b1*/
        if ( v9 >= 0 ) /*0x5b09b9*/
        {
          if ( v9 != v10 ) /*0x5b09c5*/
            *(_DWORD *)(a1 + 1032) = 0; /*0x5b09c7*/
        }
        else
        {
          *(_DWORD *)(a1 + 1032) = v10; /*0x5b09bb*/
        }
        if ( !v6 ) /*0x5b09d1*/
        {
          if ( v5 ) /*0x5b09da*/
          {
            *(_OWORD *)(a1 + 1048) = *(_OWORD *)((char *)v8 + 1628); /*0x5b09e3*/
          }
          else
          {
            v11 = *(__m128 *)((char *)v8 + 1628); /*0x5b09ef*/
            if ( *(float *)(a1 + 1048) != v11.m128_f32[0] /*0x5b0a54*/
              || *(float *)(a1 + 1052) != _mm_shuffle_ps(v11, v11, 85).m128_f32[0]
              || *(float *)(a1 + 1056) != _mm_shuffle_ps(v11, v11, 170).m128_f32[0]
              || (v12 = _mm_srli_si128((__m128i)v11, 8), *(_BYTE *)(a1 + 1060) != v12.m128i_i8[4])
              || *(_BYTE *)(a1 + 1061) != v12.m128i_i8[5] )
            {
              v14.m128_i32[0] = -1165815185; /*0x5b0a56*/
              v6 = 1; /*0x5b0a5e*/
              *(unsigned __int64 *)((char *)v14.m128_u64 + 4) = 0; /*0x5b0a61*/
              LOWORD(v15) = 0; /*0x5b0a6b*/
              v13 = _mm_shuffle_ps(v14, v14, 147); /*0x5b0a77*/
              v13.m128_f32[0] = v15; /*0x5b0a7b*/
              v14 = _mm_shuffle_ps(v13, v13, 57); /*0x5b0a83*/
              *(__m128 *)(a1 + 1048) = v14; /*0x5b0a88*/
            }
          }
          v5 = 0; /*0x5b0a8f*/
        }
      }
    }
  }
}

// [8/10] Address: 0x5b0ac0
// Method: SetupEnterEffectPopup::valueDidChange
double __fastcall SetupEnterEffectPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, __int64 a3)
{
  float v3; // xmm2_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  double result; // xmm0_8

  v5 = a2 - 65; /*0x5b0ad6*/
  if ( !v5 ) /*0x5b0ad9*/
  {
    if ( v3 == 0.0 ) /*0x5b0bb0*/
      return result; /*0x5b0bb0*/
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 66) ) /*0x5b0bbe*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 66, 0); /*0x5b0bd7*/
    else
      sub_60A5A0(a1, 66); /*0x5b0be2*/
    v9 = 66; /*0x5b0be7*/
    return sub_60ABF0(a1, v9); /*0x5b0be7*/
  }
  v6 = v5 - 1; /*0x5b0adf*/
  if ( !v6 ) /*0x5b0ae2*/
  {
    if ( v3 == 0.0 ) /*0x5b0b61*/
      return result; /*0x5b0b61*/
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 65) ) /*0x5b0b73*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 65, 0); /*0x5b0b8c*/
    else
      sub_60A5A0(a1, 65); /*0x5b0b9c*/
    v9 = 65; /*0x5b0b92*/
    return sub_60ABF0(a1, v9); /*0x5b0bf2*/
  }
  v7 = v6 - 175; /*0x5b0ae4*/
  if ( v7 ) /*0x5b0aea*/
  {
    if ( v7 != 37 ) /*0x5b0aef*/
      return result; /*0x5b0aef*/
    if ( v3 == 0.0 ) /*0x5b0afd*/
      LOBYTE(a3) = 1; /*0x5b0aff*/
    else
      a3 = 0; /*0x5b0b04*/
  }
  else
  {
    LOBYTE(a3) = v3 == 0.0; /*0x5b0b11*/
  }
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 1, a3); /*0x5b0b23*/
  if ( v3 == 0.0 ) /*0x5b0b2e*/
    v8 = 0; /*0x5b0b30*/
  else
    LOBYTE(v8) = 1; /*0x5b0b35*/
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 2, v8); /*0x5b0b52*/
  return result; /*0x5b0bf7*/
}

// [9/10] Address: 0x5b0f20
// Method: SetupEnterEffectPopup::hsvPopupClosed
__int64 __fastcall SetupEnterEffectPopup_hsvPopupClosed(__int64 a1, __int64 a2, _OWORD *a3)
{
  *(_OWORD *)(a1 - 1000 + 1048) = *a3; /*0x5b0f2e*/
  *(_BYTE *)(a1 + 64) = 1; /*0x5b0f35*/
  return sub_5B0F40();
}

// [10/10] Address: 0x5b1020
// Method: SetupEnterEffectPopup::onClose
__int64 __fastcall SetupEnterEffectPopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCArray *v3; // rcx
  unsigned int v4; // edi
  struct cocos2d::CCObject *v5; // rax

  if ( *(_DWORD *)(a1 + 1008) == 3021 && *(_BYTE *)(a1 + 1064) ) /*0x5b103c*/
  {
    v2 = *(_QWORD *)(a1 + 680); /*0x5b1045*/
    if ( v2 ) /*0x5b104f*/
    {
      *(_OWORD *)(v2 + 1628) = *(_OWORD *)(a1 + 1048); /*0x5b1058*/
    }
    else
    {
      v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5b1061*/
      if ( v3 ) /*0x5b106b*/
      {
        v4 = 0; /*0x5b1072*/
        if ( cocos2d::CCArray::count(v3) ) /*0x5b1074*/
        {
          do /*0x5b10ae*/
          {
            v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v4++); /*0x5b1089*/
            *(_OWORD *)((char *)v5 + 1628) = *(_OWORD *)(a1 + 1048); /*0x5b1098*/
          }
          while ( v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5b10ae*/
        }
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x5b10bb*/
}

// Address: 0x391ff0
// Method: SetupEnterEffectPopup::init
// Hidden C++ exception states: #wind=5
void __fastcall SetupEnterEffectPopup_init(int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rax
  cocos2d::CCNode *v8; // rbx
  struct cocos2d::CCAction *v9; // rax
  cocos2d::CCNode *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  struct cocos2d::CCActionInterval *v13; // rax
  struct cocos2d::CCAction *v14; // rax
  __int64 v15; // rcx
  cocos2d::CCArray *v16; // r14
  struct cocos2d::CCObject *v17; // rax
  int i; // edi
  float v19; // xmm6_4
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCObject *v24; // rax
  struct cocos2d::CCObject *v25; // rax
  const struct cocos2d::CCPoint *v26; // rax
  struct cocos2d::CCObject *v27; // rax
  struct cocos2d::CCAction *v28; // rax
  _WORD *v29; // r8
  __int64 v30; // r9
  _WORD *v31; // rdx
  cocos2d::CCParticleSystem *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  struct cocos2d::CCFiniteTimeAction *v36; // rax
  struct cocos2d::CCAction *v37; // rax
  __int64 v38; // rbx
  struct cocos2d::CCFiniteTimeAction *v39; // rax
  struct cocos2d::CCAction *v40; // rax
  void *v41; // rcx
  _QWORD v42[2]; // [rsp+30h] [rbp-D0h] BYREF
  float v43[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v44[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int128 v47; // [rsp+68h] [rbp-98h] BYREF
  void *Block[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h]
  unsigned __int64 v50; // [rsp+90h] [rbp-70h]
  unsigned int v51[66]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v52[40]; // [rsp+1A8h] [rbp+A8h] BYREF

  v2 = qword_905F60;
  if ( !qword_905F60 )
  {
    v42[0] = operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v42[0]);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v2 = qword_905F60;
  }
  FMODAudioEngine_fadeOutMusic(v2, 0.5);
  v42[0] = v44;
  v44[15] = 0;
  v45 = 14;
  v46 = 15;
  strcpy(v44, "unlockPath.ogg");
  v5 = qword_905F60;
  if ( !qword_905F60 )
  {
    *(_QWORD *)&v47 = operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v47);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v5 = qword_905F60;
  }
  FMODAudioEngine_playEffect_0(v5, (__int64)v44, v3, v4, 1058642330);
  v7 = cocos2d::CCDirector::sharedDirector(v6);
  cocos2d::CCDirector::getWinSize(v7, v43);
  LODWORD(v42[0]) = 0;
  v8 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)v42);
  (*(void (__fastcall **)(int *, cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v8, 10);
  v9 = cocos2d::CCFadeTo::create(1.0, 0xAFu);
  cocos2d::CCNode::runAction(v8, v9);
  v10 = (cocos2d::CCNode *)GJPathSprite_create(a1[172]);
  sub_393750(v10);
  (*(void (__fastcall **)(int *, cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v10, 12);
  v11 = *(_QWORD *)v10;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, v43[0] * 0.5, v43[1] * 0.5);
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v11 + 184))(v10, v12);
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v10 + 160LL))(v10);
  v13 = cocos2d::CCScaleTo::create(2.0, 2.0);
  v14 = cocos2d::CCEaseInOut::create(v13, 1.0);
  cocos2d::CCNode::runAction(v10, v14);
  v16 = (cocos2d::CCArray *)cocos2d::CCArray::create(v15);
  v17 = cocos2d::CCDelayTime::create(1.0);
  cocos2d::CCArray::addObject(v16, v17);
  for ( i = 1; i != 61; ++i )
  {
    v19 = (float)rand();
    v20 = rand();
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v47,
      (float)((float)((float)((float)v20 / 32767.0) + (float)((float)v20 / 32767.0)) - 1.0) * (float)((float)i * 0.1),
      (float)((float)((float)(v19 / 32767.0) + (float)(v19 / 32767.0)) - 1.0) * (float)((float)i * 0.1));
    v22 = v21;
    v23 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v10 + 200LL))(v10);
    cocos2d::CCPoint::operator+(v23, v42, v22);
    v24 = cocos2d::CCMoveTo::create(0.0099999998, (const struct cocos2d::CCPoint *)v42);
    cocos2d::CCArray::addObject(v16, v24);
    v25 = cocos2d::CCDelayTime::create(0.016666668);
    cocos2d::CCArray::addObject(v16, v25);
  }
  v26 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v10 + 200LL))(v10);
  v27 = cocos2d::CCMoveTo::create(0.0099999998, v26);
  cocos2d::CCArray::addObject(v16, v27);
  v28 = cocos2d::CCSequence::create(v16);
  cocos2d::CCNode::runAction(v10, v28);
  *(_OWORD *)Block = 0;
  v49 = 0;
  v50 = 0;
  v29 = (_WORD *)sub_3C460(176);
  Block[0] = v29;
  v49 = 171;
  v50 = 175;
  qmemcpy(
    v29,
    "84a1.05a1.25a0.16a50a180a180a29a0a11a0a0a0a0a0a0a0a2a1a0a0a1a0a0a0a0.360784a0a1a0a1a1a0a0a1a0a0a0a0a0a1a0a0.8a0a",
    112);
  v31 = v29 + 64;
  qmemcpy(v29 + 56, "0a0a110a0a0a0a0a0a1a2a1a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a", 58);
  v29[85] = (unsigned __int8)a84a105a125a016[170];
  if ( v49 )
  {
    sub_6AE20(v51, v31, v29, v30);
    KeyframeObject_setupSpline((__int64 *)Block, (__int64)v51);
    v32 = GameToolbox_particleFromStruct(v51, 0, 0);
    sub_3C310(v52);
  }
  else
  {
    v32 = 0;
  }
  LOBYTE(v31) = 1;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, _WORD *))(*(_QWORD *)v32 + 1544LL))(v32, v31);
  (*(void (__fastcall **)(int *, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v32, 11);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v32 + 160LL))(v32);
  cocos2d::CCParticleSystem::resetSystem(v32);
  v33 = *(_QWORD *)v32;
  v34 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v10 + 200LL))(v10);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v33 + 184))(v32, v34);
  v47 = *(_OWORD *)sub_38E9E0(v42, (unsigned int)a1[172]);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int128 *))(*(_QWORD *)v32 + 1352LL))(v32, &v47);
  v47 = *(_OWORD *)sub_38E8D0(v42, (unsigned int)a1[172]);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int128 *))(*(_QWORD *)v32 + 1384LL))(v32, &v47);
  v35 = cocos2d::CCCallFunc::create(a1, GJPathPage_unlockAnimationStep2);
  v36 = cocos2d::CCDelayTime::create(0.5);
  v37 = cocos2d::CCSequence::create(v36, v35, 0);
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v37);
  v38 = cocos2d::CCCallFunc::create(a1, GJPathPage_unlockAnimationFinished);
  v39 = cocos2d::CCDelayTime::create(2.4000001);
  v40 = cocos2d::CCSequence::create(v39, v38, 0);
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v40);
  if ( v50 > 0xF )
  {
    v41 = Block[0];
    if ( v50 + 1 >= 0x1000 )
    {
      v41 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v41 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v41);
  }
}
