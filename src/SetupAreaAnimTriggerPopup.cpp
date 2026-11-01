#include <Geode/binding/SetupAreaAnimTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x3bd050
// Method: SetupAreaAnimTriggerPopup::init
// Hidden C++ exception states: #wind=2
bool __fastcall SetupAreaAnimTriggerPopup_init(
        __int64 a1,
        cocos2d::CCObject *a2,
        cocos2d::CCObject *a3,
        __int64 a4,
        __int64 a5)
{
  bool result; // al
  __int64 v10; // rcx
  cocos2d::CCObject *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  cocos2d::CCObject *v14; // rax
  struct cocos2d::CCSprite *v15; // rbx
  struct cocos2d::CCMenuItem *v16; // rax
  struct cocos2d::CCMenu *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  cocos2d::CCObject *v22; // rax
  cocos2d::CCObject *v23; // rbx
  __int64 v24; // r15
  cocos2d::CCObject *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  _BYTE v37[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v38[8]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v39[8]; // [rsp+60h] [rbp-48h] BYREF
  void *v40; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v41[8]; // [rsp+70h] [rbp-38h] BYREF
  _BYTE v42[40]; // [rsp+78h] [rbp-30h] BYREF

  result = FLAlertLayer_init(a1, 0); /*0x3bd082*/
  if ( !result ) /*0x3bd089*/
    return result; /*0x3bd089*/
  *(_WORD *)(a1 + 731) = *(_WORD *)a4; /*0x3bd092*/
  *(_BYTE *)(a1 + 733) = *(_BYTE *)(a4 + 2); /*0x3bd09e*/
  v10 = a5; /*0x3bd0a5*/
  *(_WORD *)(a1 + 734) = *(_WORD *)a5; /*0x3bd0b0*/
  *(_BYTE *)(a1 + 736) = *(_BYTE *)(a5 + 2); /*0x3bd0bc*/
  if ( a2 ) /*0x3bd0c6*/
  {
    *(_QWORD *)(a1 + 672) = a2; /*0x3bd0c8*/
    v11 = a2; /*0x3bd0cf*/
  }
  else
  {
    if ( !a3 ) /*0x3bd0d7*/
      goto LABEL_7; /*0x3bd0d7*/
    *(_QWORD *)(a1 + 680) = a3; /*0x3bd0d9*/
    v11 = a3; /*0x3bd0e0*/
  }
  cocos2d::CCObject::retain(v11); /*0x3bd0e3*/
LABEL_7:
  *(_BYTE *)(a1 + 596) = 1; /*0x3bd0e9*/
  v12 = cocos2d::CCDirector::sharedDirector(v10); /*0x3bd0f1*/
  cocos2d::CCDirector::getWinSize(v12, v38); /*0x3bd0ff*/
  v14 = (cocos2d::CCObject *)cocos2d::CCArray::create(v13); /*0x3bd105*/
  *(_QWORD *)(a1 + 688) = v14; /*0x3bd10b*/
  cocos2d::CCObject::retain(v14); /*0x3bd115*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 920LL))(a1, 0); /*0x3bd123*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x3bd131*/
  v15 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x3bd144*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 160LL))(v15); /*0x3bd15f*/
  v16 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v15, 0, a1, sub_3BD730); /*0x3bd170*/
  v17 = cocos2d::CCMenu::create(v16, 0); /*0x3bd17a*/
  *(_QWORD *)(a1 + 552) = v17; /*0x3bd180*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x3bd1a1*/
    *(_QWORD *)(a1 + 584),
    v17,
    10);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v39, -81.0, 48.0); /*0x3bd1b9*/
  v19 = v18; /*0x3bd1bf*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v40, 157.0, 163.0); /*0x3bd1d7*/
  cocos2d::CCPoint::operator+(v20, v37, v19); /*0x3bd1e8*/
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 552) + 184LL))(*(_QWORD *)(a1 + 552), v37); /*0x3bd1fd*/
  sub_3BD530(a1); /*0x3bd206*/
  if ( *(_BYTE *)(a1 + 728) && *(_BYTE *)(a1 + 729) ) /*0x3bd219*/
  {
    v22 = (cocos2d::CCObject *)cocos2d::CCArray::create(v21); /*0x3bd227*/
    *(_QWORD *)(a1 + 696) = v22; /*0x3bd22d*/
    cocos2d::CCObject::retain(v22); /*0x3bd237*/
    v40 = operator new(0x2C8u); /*0x3bd247*/
    v23 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v40); /*0x3bd254*/
    if ( v23 ) /*0x3bd269*/
    {
      if ( (unsigned __int8)ButtonSprite_init( /*0x3bd2a0*/
                              (_DWORD)v23,
                              (unsigned int)&word_708050,
                              20,
                              0,
                              1056964608,
                              1,
                              (__int64)&qword_6FFF68,
                              (__int64)"GJ_button_01.png",
                              1106247680) )
      {
        cocos2d::CCObject::autorelease(v23); /*0x3bd2ac*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v23 + 8LL))(v23, 1); /*0x3bd2bc*/
        v23 = 0; /*0x3bd2bf*/
      }
    }
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v23 + 160LL))(v23); /*0x3bd2cf*/
    v24 = CCMenuItemSpriteExtra_create(v23, 0, a1, HSVLiveOverlay_onSelectTab); /*0x3bd2e9*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v24); /*0x3bd2f9*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 64LL))(v24, 1); /*0x3bd30b*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v23 + 64LL))(v23, 1); /*0x3bd31a*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 696), v23); /*0x3bd328*/
    v40 = operator new(0x2C8u); /*0x3bd338*/
    v25 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v40); /*0x3bd345*/
    if ( v25 ) /*0x3bd34b*/
    {
      if ( (unsigned __int8)ButtonSprite_init( /*0x3bd382*/
                              (_DWORD)v25,
                              (unsigned int)&word_708048,
                              20,
                              0,
                              1056964608,
                              1,
                              (__int64)&qword_6FFF68,
                              (__int64)"GJ_button_04.png",
                              1106247680) )
      {
        cocos2d::CCObject::autorelease(v25); /*0x3bd38e*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v25 + 8LL))(v25, 1); /*0x3bd39e*/
        v25 = 0; /*0x3bd3a1*/
      }
    }
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v25 + 160LL))(v25); /*0x3bd3b1*/
    v26 = CCMenuItemSpriteExtra_create(v25, 0, a1, HSVLiveOverlay_onSelectTab); /*0x3bd3cb*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v26); /*0x3bd3e2*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 64LL))(v26, 2); /*0x3bd3f4*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v25 + 64LL))(v25, 2); /*0x3bd406*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 696), v25); /*0x3bd413*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v40, 97.0, 36.0); /*0x3bd42e*/
    v28 = v27; /*0x3bd434*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v39, 157.0, 163.0); /*0x3bd44c*/
    cocos2d::CCPoint::operator+(v29, v37, v28); /*0x3bd45d*/
    v30 = *(_QWORD *)v24; /*0x3bd463*/
    v31 = *(_QWORD *)(a1 + 552); /*0x3bd466*/
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 584), v41, v37); /*0x3bd47e*/
    cocos2d::CCNode::convertToNodeSpace(v31, v42, v32); /*0x3bd48f*/
    (*(void (__fastcall **)(__int64, __int64))(v30 + 184))(v24, v33); /*0x3bd49b*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, 0.0, -24.0); /*0x3bd4b1*/
    v35 = v34; /*0x3bd4b7*/
    v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 200LL))(v24); /*0x3bd4c7*/
    cocos2d::CCPoint::operator+(v36, v37, v35); /*0x3bd4d4*/
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 184LL))(v26, v37); /*0x3bd4e5*/
  }
  sub_3BD7B0(a1, 2 - (unsigned int)(*(_BYTE *)(a1 + 728) != 0)); /*0x3bd4fd*/
  return 1; /*0x3bd504*/
}

// [2/7] Address: 0x59d990
// Method: SetupAreaAnimTriggerPopup::~SetupAreaAnimTriggerPopup
_QWORD *__fastcall SetupAreaAnimTriggerPopup__dtor_SetupAreaAnimTriggerPopup(_QWORD *Block, char a2)
{
  *Block = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59d9a3*/
  Block[40] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59d9b0*/
  Block[41] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59d9be*/
  Block[42] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59d9cc*/
  Block[43] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59d9da*/
  Block[44] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59d9e8*/
  Block[51] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59d9f6*/
  Block[54] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59da04*/
  Block[68] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59da12*/
  Block[83] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59da20*/
  Block[84] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59da2e*/
  Block[127] = &SetupAreaAnimTriggerPopup::`vftable'; /*0x59da3c*/
  SetupAreaTintTriggerPopup__dtor_SetupAreaTintTriggerPopup(); /*0x59da43*/
  if ( (a2 & 1) != 0 ) /*0x59da4b*/
    j_j_free(Block); /*0x59da55*/
  return Block; /*0x59da5a*/
}

// [3/7] Address: 0x5a4f70
// Method: SetupAreaAnimTriggerPopup::createValueControlAdvancedAnim
// Hidden C++ exception states: #wind=2
double __fastcall SetupAreaAnimTriggerPopup_createValueControlAdvancedAnim(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        const struct cocos2d::CCPoint *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v17; // ebx
  int v18; // eax
  struct cocos2d::CCSprite *v19; // rbx
  struct cocos2d::CCObject *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCObject *PageContainer; // rax
  cocos2d::CCArray *v25; // rax
  _QWORD *v27; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v28[8]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v29[8]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v30[5]; // [rsp+98h] [rbp-70h] BYREF

  v30[4] = a3; /*0x5a4fa1*/
  v27 = v30; /*0x5a4fa9*/
  v17 = sub_3E4F0(v30, a3); /*0x5a4fbc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, a4); /*0x5a4fca*/
  sub_6088F0(a1, a2, v17, v18, a5, 0, a7, 6, 0, a10, a11, 0, a13, 1, 2, 0); /*0x5a504f*/
  v19 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_resetBtn_001.png"); /*0x5a5061*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v19 + 160LL))(v19); /*0x5a5079*/
  v20 = (struct cocos2d::CCObject *)CCMenuItemSpriteExtra_create( /*0x5a5090*/
                                      v19,
                                      0,
                                      a1,
                                      SetupAreaAnimTriggerPopup_onDeactivateAnimValue);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v20 + 64LL))(v20, a2); /*0x5a509f*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x5a50b9*/
    *(_QWORD *)(a1 + 552),
    v20);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, 100.0, 0.0); /*0x5a50cf*/
  cocos2d::CCPoint::operator+(a4, &v27, v21); /*0x5a50e3*/
  v22 = *(_QWORD *)v20; /*0x5a50e9*/
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v29, &v27); /*0x5a5103*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v22 + 184))(v20, v23); /*0x5a510f*/
  PageContainer = SetupTriggerPopup_getPageContainer(a1, 0); /*0x5a511a*/
  cocos2d::CCArray::addObject(PageContainer, v20); /*0x5a5125*/
  if ( a13 > 0 ) /*0x5a512e*/
  {
    v25 = (cocos2d::CCArray *)sub_606BC0(a1, (unsigned int)a13); /*0x5a5136*/
    cocos2d::CCArray::addObject(v25, v20); /*0x5a5141*/
  }
  return sub_3C310(a3); /*0x5a5150*/
}

// [4/7] Address: 0x5a5180
// Method: SetupAreaAnimTriggerPopup::updateDefaultTriggerValues
__int64 __fastcall SetupAreaAnimTriggerPopup_updateDefaultTriggerValues(struct cocos2d::CCObject **a1)
{
  cocos2d::CCArray *v2; // rsi
  unsigned int i; // ebx
  unsigned int v4; // ebp
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-30h]

  SetupTriggerPopup_updateDefaultTriggerValues(a1); /*0x5a518b*/
  v2 = cocos2d::CCDictionary::allKeys(a1[95]); /*0x5a51a0*/
  for ( i = 0; i < cocos2d::CCArray::count(v2); ++i ) /*0x5a51a5*/
  {
    v4 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(v2, i) + 14); /*0x5a51e1*/
    if ( (*((float (__fastcall **)(struct cocos2d::CCObject **, _QWORD))*a1 + 146))(a1, v4) == -99.0 ) /*0x5a51f4*/
    {
      v7 = 2; /*0x5a51f9*/
      v6 = 0; /*0x5a5202*/
      strcpy((char *)&v6, "NA"); /*0x5a520c*/
      v8 = 15; /*0x5a521c*/
      SetupTriggerPopup_updateInputNodeLabel((__int64)a1, v4, (__int64)&v6); /*0x5a5225*/
    }
  }
  return SetupAreaAnimTriggerPopup_updateTargetIDLabel(a1); /*0x5a524e*/
}

// [5/7] Address: 0x5a5260
// Method: SetupAreaAnimTriggerPopup::updateTargetIDLabel
struct cocos2d::CCObject *__fastcall SetupAreaAnimTriggerPopup_updateTargetIDLabel(cocos2d::CCDictionary **a1)
{
  struct cocos2d::CCObject *result; // rax
  struct cocos2d::CCObject *v3; // rdi
  BOOL v4; // eax
  __int64 *v5; // rdx

  result = cocos2d::CCDictionary::objectForKey(a1[103], 51); /*0x5a5279*/
  v3 = result; /*0x5a527f*/
  if ( result ) /*0x5a5285*/
  {
    v4 = (*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 355) != 0.0; /*0x5a52a4*/
    v5 = &qword_7E4B70; /*0x5a52c2*/
    if ( v4 ) /*0x5a52c9*/
      v5 = (__int64 *)"EffectID"; /*0x5a52c9*/
    return (struct cocos2d::CCObject *)(**((__int64 (__fastcall ***)(__int64, __int64 *))v3 + 45))( /*0x5a52cd*/
                                         (__int64)v3 + 360,
                                         v5);
  }
  return result; /*0x5a52cf*/
}

// [6/7] Address: 0x5a52e0
// Method: SetupAreaAnimTriggerPopup::onDeactivateAnimValue
double __fastcall SetupAreaAnimTriggerPopup_onDeactivateAnimValue(cocos2d::CCDictionary **a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5a5303*/
  SetupTriggerPopup_updateValue(a1, v3, -99.0); /*0x5a5305*/
  v6 = 2; /*0x5a530d*/
  v5 = 0; /*0x5a5316*/
  strcpy((char *)&v5, "NA"); /*0x5a532a*/
  v7 = 15; /*0x5a5331*/
  return SetupTriggerPopup_updateInputNodeLabel((__int64)a1, v3, (__int64)&v5); /*0x5a5342*/
}

// [7/7] Address: 0x5a5350
// Method: SetupAreaAnimTriggerPopup::valueDidChange
struct cocos2d::CCObject *__fastcall SetupAreaAnimTriggerPopup_valueDidChange(
        cocos2d::CCDictionary **a1,
        int a2,
        __int64 a3)
{
  float v3; // xmm2_4
  int v5; // edx
  struct cocos2d::CCObject *result; // rax
  __int64 v7; // r8

  v5 = a2 - 241; /*0x5a5361*/
  if ( v5 ) /*0x5a5367*/
  {
    if ( v5 == 114 ) /*0x5a536c*/
      return SetupAreaAnimTriggerPopup_updateTargetIDLabel(a1); /*0x5a5378*/
  }
  else
  {
    LOBYTE(a3) = v3 == 0.0; /*0x5a538a*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 1, a3); /*0x5a539c*/
    if ( v3 == 0.0 ) /*0x5a53ac*/
      v7 = 0; /*0x5a53ae*/
    else
      LOBYTE(v7) = 1; /*0x5a53b3*/
    return (struct cocos2d::CCObject *)(*((__int64 (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))( /*0x5a53c1*/
                                         a1,
                                         2,
                                         v7);
  }
  return result; /*0x5a536e*/
}
