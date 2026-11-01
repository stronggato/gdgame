#include <Geode/binding/AudioEffectsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x99550
// Method: AudioEffectsLayer::resetAudioVars
void __fastcall AudioEffectsLayer_resetAudioVars(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  cocos2d::CCObject *v3; // rax

  v2 = *(cocos2d::CCArray **)(a1 + 560); /*0x99559*/
  if ( v2 ) /*0x99563*/
  {
    cocos2d::CCArray::removeAllObjects(v2); /*0x99565*/
    cocos2d::CCObject::release(*(cocos2d::CCObject **)(a1 + 560)); /*0x99572*/
    *(_QWORD *)(a1 + 560) = 0; /*0x99578*/
  }
  v3 = cocos2d::CCArray::createWithArray(*(struct cocos2d::CCArray **)(a1 + 552)); /*0x9958a*/
  *(_QWORD *)(a1 + 560) = v3; /*0x99593*/
  cocos2d::CCObject::retain(v3); /*0x9959a*/
  *(_DWORD *)(a1 + 568) = 0; /*0x995a0*/
}

// [2/3] Address: 0x995b0
// Method: AudioEffectsLayer::audioStep
// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsLayer_audioStep(__int64 a1, float a2)
{
  cocos2d::CCArray *v3; // rcx
  cocos2d::CCString *v4; // rax
  cocos2d::CCString *v5; // rax
  float v6; // xmm0_4
  float v7; // xmm6_4
  __int64 v8; // rax
  float v9; // xmm7_4
  struct cocos2d::CCFiniteTimeAction *v10; // rdi
  struct cocos2d::CCActionTween *v11; // rbx
  __int64 v12; // rax
  struct cocos2d::CCAction *v13; // rbx
  void *v14; // [rsp+50h] [rbp+8h]

  *(float *)(a1 + 568) = a2 + *(float *)(a1 + 568); /*0x995d4*/
  v3 = *(cocos2d::CCArray **)(a1 + 560); /*0x995dc*/
  if ( v3 ) /*0x995e6*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x995ec*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 560), 0); /*0x99603*/
      if ( *(float *)(a1 + 568) > cocos2d::CCString::floatValue(v4) ) /*0x9961d*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 560), 1u); /*0x9962f*/
        v6 = cocos2d::CCString::floatValue(v5); /*0x99638*/
        v7 = v6; /*0x9963e*/
        cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(a1 + 560), 0, 1); /*0x9964d*/
        cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(a1 + 560), 0, 1); /*0x9965f*/
        v8 = qword_905FD0; /*0x99665*/
        if ( !qword_905FD0 ) /*0x9966f*/
        {
          v14 = operator new(0x6E8u); /*0x9967b*/
          qword_905FD0 = sub_2723A0(v14); /*0x99689*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9969a*/
          v8 = qword_905FD0; /*0x9969c*/
        }
        if ( !*(_BYTE *)(*(_QWORD *)(v8 + 560) + 13088LL) ) /*0x996aa*/
        {
          if ( v6 == 1.0 ) /*0x996c0*/
          {
            v7 = 4.0; /*0x996c2*/
          }
          else if ( v6 == 0.89999998 ) /*0x996d5*/
          {
            v7 = 3.0; /*0x996d7*/
          }
          else if ( v6 == 0.80000001 ) /*0x996ea*/
          {
            v7 = 2.5; /*0x996ec*/
          }
          v9 = fminf(1.1, (float)(v7 * 0.2) + *(float *)(a1 + 580)); /*0x9970c*/
          if ( *(_BYTE *)(a1 + 576) || v9 >= *(float *)(a1 + 572) ) /*0x99720*/
          {
            *(float *)(a1 + 572) = v9; /*0x99726*/
            *(_BYTE *)(a1 + 576) = 0; /*0x9972e*/
            cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 0); /*0x9973a*/
            v10 = cocos2d::CCActionTween::create(0.050000001, "audioScale", *(float *)(a1 + 580), v9); /*0x99760*/
            v11 = cocos2d::CCActionTween::create(0.2, "audioScale", v9, 0.1); /*0x99783*/
            v12 = cocos2d::CCCallFunc::create(a1, AudioEffectsLayer_goingDown); /*0x99790*/
            v13 = cocos2d::CCSequence::create(v10, v12, v11, 0); /*0x997a8*/
            (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, 0); /*0x997b7*/
            cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v13); /*0x997c0*/
          }
        }
      }
    }
  }
}

// [3/3] Address: 0x99960
// Method: AudioEffectsLayer::goingDown
void __fastcall AudioEffectsLayer_goingDown(__int64 a1)
{
  *(_BYTE *)(a1 + 576) = 1; /*0x99960*/
}
