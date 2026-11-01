#include <Geode/binding/GJPathPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/9] Address: 0x116bb0
// Method: GJPathPage::onActivatePath
void __fastcall GJPathPage_onActivatePath(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 476); /*0x116bb6*/
  if ( v1 > 0 ) /*0x116bbe*/
  {
    v2 = sub_182B60(a1); /*0x116bc0*/
    sub_182FE0(v2, (unsigned int)v1); /*0x116bcf*/
  }
}

// [3/9] Address: 0x38e7c0
// Method: GJPathPage::~GJPathPage
_QWORD *__fastcall GJPathPage__dtor_GJPathPage(_QWORD *Block, char a2)
{
  *Block = &GJPathPage::`vftable'; /*0x38e7d3*/
  Block[40] = &GJPathPage::`vftable'; /*0x38e7e0*/
  Block[41] = &GJPathPage::`vftable'; /*0x38e7ee*/
  Block[42] = &GJPathPage::`vftable'; /*0x38e7fc*/
  Block[43] = &GJPathPage::`vftable'; /*0x38e80a*/
  Block[44] = &GJPathPage::`vftable'; /*0x38e818*/
  Block[51] = &GJPathPage::`vftable'; /*0x38e826*/
  Block[54] = &GJPathPage::`vftable'; /*0x38e834*/
  Block[68] = &GJPathPage::`vftable'; /*0x38e842*/
  Block[83] = &GJPathPage::`vftable'; /*0x38e850*/
  Block[84] = &GJPathPage::`vftable'; /*0x38e85e*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x38e865*/
  if ( (a2 & 1) != 0 ) /*0x38e86d*/
    j_j_free(Block); /*0x38e877*/
  return Block; /*0x38e87c*/
}

// [4/9] Address: 0x38f730
// Method: GJPathPage::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJPathPage_create(unsigned int a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x2C0u); /*0x38f74e*/
  FLAlertLayer_FLAlertLayer((__int64)v4); /*0x38f759*/
  *v4 = &GJPathPage::`vftable'; /*0x38f765*/
  v4[40] = &GJPathPage::`vftable'; /*0x38f76f*/
  v4[41] = &GJPathPage::`vftable'; /*0x38f77d*/
  v4[42] = &GJPathPage::`vftable'; /*0x38f78b*/
  v4[43] = &GJPathPage::`vftable'; /*0x38f799*/
  v4[44] = &GJPathPage::`vftable'; /*0x38f7a7*/
  v4[51] = &GJPathPage::`vftable'; /*0x38f7b5*/
  v4[54] = &GJPathPage::`vftable'; /*0x38f7c3*/
  v4[68] = &GJPathPage::`vftable'; /*0x38f7d1*/
  v4[83] = &GJPathPage::`vftable'; /*0x38f7df*/
  v4[84] = &GJPathPage::`vftable'; /*0x38f7ed*/
  v4[85] = 0; /*0x38f7f4*/
  *((_DWORD *)v4 + 172) = 0; /*0x38f7ff*/
  *((_BYTE *)v4 + 692) = 0; /*0x38f809*/
  *((_DWORD *)v4 + 174) = 0; /*0x38f810*/
  if ( (unsigned __int8)sub_38F870(v4, a1, a2) ) /*0x38f822*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x38f82e*/
    return v4; /*0x38f834*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x38f856*/
    return 0; /*0x38f859*/
  }
}

// [5/9] Address: 0x391790
// Method: GJPathPage::didPurchaseItem
__int64 __fastcall GJPathPage_didPurchaseItem(__int64 a1)
{
  return SetupEnterEffectPopup_init(a1 - 672);
}

// [6/9] Address: 0x392650
// Method: GJPathPage::unlockAnimationStep2
// Hidden C++ exception states: #wind=2
void __fastcall GJPathPage_unlockAnimationStep2(unsigned int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  void *v4; // r8
  __int64 v5; // r9
  cocos2d::CCParticleSystem *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rcx
  float v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+48h] [rbp-B8h] BYREF
  void *Block[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  unsigned __int64 v15; // [rsp+70h] [rbp-90h]
  unsigned int v16[66]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v17[40]; // [rsp+188h] [rbp+88h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x392683*/
  cocos2d::CCDirector::getWinSize(v2, v10); /*0x392691*/
  *(_OWORD *)Block = 0; /*0x39269a*/
  v14 = 0; /*0x39269f*/
  v15 = 0; /*0x3926a8*/
  v4 = (void *)sub_3C460(176); /*0x3926bb*/
  Block[0] = v4; /*0x3926be*/
  v14 = 170; /*0x3926c3*/
  v15 = 175; /*0x3926cc*/
  strcpy( /*0x3926df*/
    (char *)v4,
    "84a0.97a1a0.16a72a180a180a29a0a11a0a0a0a0a0a0a0a2a1a0a0a1a0a0a0a0a0a1a0a1a1a0a0a1a0a0.568627a0a0a0a1a0a0.8a0a0.2a0a1"
    "50a0a0a0a0a0a1a2a1a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0");
  if ( v14 ) /*0x392761*/
  {
    sub_6AE20(v16, v3, v4, v5); /*0x39276b*/
    KeyframeObject_setupSpline(Block, v16); /*0x39277a*/
    v6 = GameToolbox_particleFromStruct(v16, 0, 0); /*0x39278d*/
    sub_3C310(v17); /*0x392797*/
  }
  else
  {
    v6 = 0; /*0x392763*/
  }
  LOBYTE(v3) = 1; /*0x39279f*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v6 + 1544LL))(v6, v3); /*0x3927a4*/
  (*(void (__fastcall **)(unsigned int *, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v6, 11); /*0x3927b9*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v6 + 160LL))(v6); /*0x3927cd*/
  cocos2d::CCParticleSystem::resetSystem(v6); /*0x3927d6*/
  v7 = *(_QWORD *)v6; /*0x3927dc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, v10[0] * 0.5, v10[1] * 0.5); /*0x392800*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v7 + 184))(v6, v8); /*0x39280c*/
  v12 = *(_OWORD *)sub_38E9E0(v11, a1[172]); /*0x392825*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int128 *))(*(_QWORD *)v6 + 1352LL))(v6, &v12); /*0x392835*/
  v12 = *(_OWORD *)sub_38E8D0(v11, a1[172]); /*0x39284e*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int128 *))(*(_QWORD *)v6 + 1384LL))(v6, &v12); /*0x39285e*/
  if ( v15 > 0xF ) /*0x39286e*/
  {
    v9 = Block[0]; /*0x392873*/
    if ( v15 + 1 >= 0x1000 ) /*0x392882*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x392888*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x392897*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3928ac*/
    }
    j_j_free(v9); /*0x3928b3*/
  }
}

// [7/9] Address: 0x3931d0
// Method: GJPathPage::unlockAnimationFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJPathPage_unlockAnimationFinished(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct cocos2d::CCObject *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  cocos2d::CCTouchDispatcher *v7; // rax
  __int64 v8; // rdx
  _BYTE *v9; // rbx
  _BYTE *v10; // rbx
  void *v12; // [rsp+30h] [rbp+8h]

  *(_BYTE *)(a1 + 692) = 0; /*0x3931dd*/
  v2 = *(_DWORD *)(a1 + 688) + 29; /*0x3931ea*/
  v3 = qword_905FE0; /*0x3931ed*/
  if ( !qword_905FE0 ) /*0x3931f7*/
  {
    v12 = operator new(0x3E8u); /*0x393203*/
    qword_905FE0 = sub_2D2B40(v12); /*0x393211*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x393222*/
    v3 = qword_905FE0; /*0x393224*/
  }
  if ( (unsigned int)(v2 - 30) > 9 ) /*0x393233*/
    v2 = 0; /*0x393233*/
  *(_DWORD *)(v3 + 996) = v2; /*0x393236*/
  GJPathPage_onBack(a1); /*0x39323f*/
  *(_BYTE *)(*(_QWORD *)(a1 + 680) + 680LL) = 0; /*0x39324b*/
  v4 = *(struct cocos2d::CCObject **)(a1 + 680); /*0x393252*/
  v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x393259*/
  v7 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 144LL))(v6); /*0x39326c*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v7, v4); /*0x393274*/
  cocos2d::CCNode::stopAllActions(v4); /*0x39327d*/
  cocos2d::CCNode::unscheduleAllSelectors(v4); /*0x393286*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v4 + 992LL))(v4, 0); /*0x393294*/
  LOBYTE(v8) = 1; /*0x39329d*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 520LL))(v4, v8); /*0x3932a2*/
  v9 = (_BYTE *)sub_38ED60(); /*0x3932ad*/
  v9[596] = 1; /*0x3932b0*/
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 1064LL))(v9); /*0x3932c4*/
  v10 = GJPathPage_create(*(_DWORD *)(a1 + 688), (__int64)v9); /*0x3932d4*/
  v10[596] = 1; /*0x3932d7*/
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 1064LL))(v10); /*0x3932eb*/
  return sub_3928E0(v10); /*0x3932f0*/
}

// [8/9] Address: 0x393300
// Method: GJPathPage::onBack
void __fastcall GJPathPage_onBack(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int16 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+32h] [rbp+Ah]

  if ( !*(_BYTE *)(a1 + 692) ) /*0x393306*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x393316*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x393322*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, (struct cocos2d::CCObject *)a1); /*0x39332e*/
    cocos2d::CCNode::stopAllActions((cocos2d::CCNode *)a1); /*0x393337*/
    cocos2d::CCNode::unscheduleAllSelectors((cocos2d::CCNode *)a1); /*0x393340*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x39334e*/
    LOBYTE(v4) = 1; /*0x393357*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4); /*0x39335c*/
    v6 = -1; /*0x393373*/
    v5 = *(_QWORD *)(a1 + 680); /*0x393378*/
    v7 = -1; /*0x39337f*/
    (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(v5 + 672) + 320LL))(*(_QWORD *)(v5 + 672) + 320LL, &v6); /*0x393395*/
  }
}

// [9/9] Address: 0x3933a0
// Method: GJPathPage::keyBackClicked
void __fastcall GJPathPage_keyBackClicked(__int64 a1)
{
  GJPathPage_onBack(a1 - 336); /*0x3933a9*/
}
