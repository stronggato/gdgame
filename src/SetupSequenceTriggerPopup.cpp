#include <Geode/binding/SetupSequenceTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x53770
// Method: SetupSequenceTriggerPopup::onChangeOrder
double __fastcall SetupSequenceTriggerPopup_onChangeOrder(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 *v8; // rax
  double result; // xmm0_8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]
  char v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 640) ) /*0x53776*/
  {
    *(_QWORD *)(a1 + 640) = a2; /*0x53787*/
    *(_DWORD *)(a1 + 680) = *(_DWORD *)(a2 + 624); /*0x53794*/
    *(_DWORD *)(a2 + 604) = *(_DWORD *)(a1 + 528); /*0x537a0*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 640)); /*0x537ba*/
    v3 = *(__int64 **)(a1 + 640); /*0x537c0*/
    v4 = *v3; /*0x537d2*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, 0.0, 0.0); /*0x537d5*/
    (*(void (__fastcall **)(__int64 *, __int64))(v4 + 184))(v3, v5); /*0x537e1*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 600) + 336LL))(*(_QWORD *)(a1 + 600), 0); /*0x537f3*/
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 600LL) + 8LL))(*(_QWORD *)(a1 + 600) + 600LL); /*0x5380a*/
    v10 = 0; /*0x5381c*/
    v11 = 0; /*0x53821*/
    v7 = -1; /*0x53826*/
    v12 = 0; /*0x5382d*/
    do /*0x53835*/
      ++v7; /*0x53832*/
    while ( *(_BYTE *)(v6 + v7) ); /*0x53835*/
    sub_3C230(&v10); /*0x53843*/
    SpriteAnimationManager_executeAnimation(a1, (void **)&v10); /*0x53850*/
    v8 = (unsigned __int64 *)sub_3E4F0(&v10, *(_QWORD *)(a1 + 640) + 632LL); /*0x53868*/
    return CCTextInputNode_updateDefaultFontValues(a1, v8); /*0x53873*/
  }
  return result; /*0x53878*/
}

// [2/6] Address: 0x9c3f0
// Method: SetupSequenceTriggerPopup::onSelect
__int64 __fastcall SetupSequenceTriggerPopup_onSelect(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 1048); /*0x9c400*/
  if ( v2 ) /*0x9c40a*/
    (**v2)(v2); /*0x9c40f*/
  return SetupTriggerPopup_onClose(a1); /*0x9c417*/
}

// [3/6] Address: 0x5d35c0
// Method: SetupSequenceTriggerPopup::~SetupSequenceTriggerPopup
cocos2d::CCNode *__fastcall SetupSequenceTriggerPopup__dtor_SetupSequenceTriggerPopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &SetupSequenceTriggerPopup::`vftable'; /*0x5d35d6*/
  *((_QWORD *)Block + 40) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d35e0*/
  *((_QWORD *)Block + 41) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d35ee*/
  *((_QWORD *)Block + 42) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d35fc*/
  *((_QWORD *)Block + 43) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d360a*/
  *((_QWORD *)Block + 44) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3618*/
  *((_QWORD *)Block + 51) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3626*/
  *((_QWORD *)Block + 54) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3634*/
  *((_QWORD *)Block + 68) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3642*/
  *((_QWORD *)Block + 83) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3650*/
  *((_QWORD *)Block + 84) = &SetupSequenceTriggerPopup::`vftable'; /*0x5d365e*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 127); /*0x5d3665*/
  if ( v4 ) /*0x5d366f*/
    cocos2d::CCObject::release(v4); /*0x5d3671*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5d367a*/
  if ( (a2 & 1) != 0 ) /*0x5d3684*/
    j_j_free(Block); /*0x5d368e*/
  return Block; /*0x5d3696*/
}

// [4/6] Address: 0x5d36b0
// Method: SetupSequenceTriggerPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupSequenceTriggerPopup_create(__int64 a1)
{
  _QWORD *v2; // rdi

  v2 = operator new(0x408u); /*0x5d36c7*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v2); /*0x5d36d2*/
  *v2 = &SetupSequenceTriggerPopup::`vftable'; /*0x5d36de*/
  v2[40] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d36e8*/
  v2[41] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d36f6*/
  v2[42] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3704*/
  v2[43] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3712*/
  v2[44] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3720*/
  v2[51] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d372e*/
  v2[54] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d373c*/
  v2[68] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d374a*/
  v2[83] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3758*/
  v2[84] = &SetupSequenceTriggerPopup::`vftable'; /*0x5d3766*/
  v2[125] = 0; /*0x5d376d*/
  *((_BYTE *)v2 + 1009) = 0; /*0x5d3778*/
  v2[127] = 0; /*0x5d377f*/
  *((_DWORD *)v2 + 256) = 0; /*0x5d378a*/
  *((_BYTE *)v2 + 1028) = 0; /*0x5d3794*/
  if ( (unsigned __int8)sub_5D37E0(v2, a1) ) /*0x5d37a1*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x5d37ad*/
    return v2; /*0x5d37b3*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x5d37d0*/
    return 0; /*0x5d37d3*/
  }
}

// [5/6] Address: 0x5d4b30
// Method: SetupSequenceTriggerPopup::onCustomToggleTriggerValue
double __fastcall SetupSequenceTriggerPopup_onCustomToggleTriggerValue(cocos2d::CCDictionary **a1, __int64 a2)
{
  int v3; // eax
  cocos2d::CCDictionary *v4; // rcx
  int v5; // edi
  bool v6; // bl
  struct cocos2d::CCObject *v7; // rax
  unsigned int v8; // ebx
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rdx
  bool v11; // zf
  bool v12; // bl
  struct cocos2d::CCObject *v13; // rax
  struct cocos2d::CCObject *v14; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5d4b48*/
  v4 = a1[97]; /*0x5d4b4b*/
  v5 = v3; /*0x5d4b52*/
  if ( v3 < 100 ) /*0x5d4b57*/
  {
    v12 = v3 == 0; /*0x5d4b93*/
    v13 = cocos2d::CCDictionary::objectForKey(v4, 0); /*0x5d4b98*/
    CCMenuItemToggler_toggle((__int64)v13, v12); /*0x5d4ba4*/
    v14 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5d4bbb*/
    CCMenuItemToggler_toggle((__int64)v14, v5 == 1); /*0x5d4bc7*/
    v8 = 436; /*0x5d4bd8*/
    v9 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5d4bdd*/
    v11 = v5 == 2; /*0x5d4be3*/
  }
  else
  {
    v5 = v3 - 100; /*0x5d4b59*/
    v6 = v3 == 100; /*0x5d4b61*/
    v7 = cocos2d::CCDictionary::objectForKey(v4, 100); /*0x5d4b64*/
    CCMenuItemToggler_toggle((__int64)v7, v6); /*0x5d4b70*/
    v8 = 439; /*0x5d4b81*/
    v9 = cocos2d::CCDictionary::objectForKey(a1[97], 101); /*0x5d4b86*/
    v11 = v5 == 1; /*0x5d4b8c*/
  }
  LOBYTE(v10) = v11; /*0x5d4be6*/
  CCMenuItemToggler_toggle((__int64)v9, v10); /*0x5d4bec*/
  return SetupTriggerPopup_updateValue(a1, v8, (float)v5); /*0x5d4bfd*/
}

// [6/6] Address: 0x5d4c20
// Method: SetupSequenceTriggerPopup::updateGroupIDButtons
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupSequenceTriggerPopup_updateGroupIDButtons(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  unsigned int i; // ebx
  struct cocos2d::CCObject *v5; // rax
  __int64 *v6; // r15
  unsigned __int64 v7; // r12
  int v8; // eax
  float v9; // xmm6_4
  int v10; // eax
  float v11; // xmm9_4
  int v12; // eax
  float v13; // xmm8_4
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ebp
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // rdx
  const char *v23; // rcx
  cocos2d::CCString *v24; // rax
  char *CString; // rax
  size_t v26; // r8
  __int128 *v27; // rdi
  cocos2d::CCObject *v28; // rbx
  const char *v29; // rax
  cocos2d::CCObject *v30; // rdi
  float v31; // xmm0_4
  __int64 v32; // rax
  void *v33; // rcx
  int v34; // [rsp+50h] [rbp-E8h]
  int v35; // [rsp+54h] [rbp-E4h]
  float v36[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v38[8]; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE v39[8]; // [rsp+70h] [rbp-C8h] BYREF
  void *v40; // [rsp+78h] [rbp-C0h]
  void *v41; // [rsp+80h] [rbp-B8h]
  _BYTE v42[8]; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-90h]

  v2 = -1; /*0x5d4c6b*/
  v34 = -1; /*0x5d4c70*/
  v3 = *(_QWORD *)(a1 + 1000); /*0x5d4c74*/
  if ( v3 ) /*0x5d4c7e*/
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3); /*0x5d4c86*/
    v34 = v2; /*0x5d4c88*/
    *(_QWORD *)(a1 + 1000) = 0; /*0x5d4c8c*/
  }
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1016)); ++i ) /*0x5d4ca0*/
  {
    v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1016), i); /*0x5d4cb9*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v5 + 512LL))(v5); /*0x5d4ccc*/
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 1016)); /*0x5d4ce8*/
  v6 = (__int64 *)(*(_QWORD *)(a1 + 680) + 1856LL); /*0x5d4cf5*/
  v7 = (*(_QWORD *)(*(_QWORD *)(a1 + 680) + 1864LL) - *v6) >> 4; /*0x5d4d03*/
  v8 = 5; /*0x5d4d07*/
  if ( v7 > 0xA ) /*0x5d4d14*/
    v8 = 10; /*0x5d4d14*/
  v35 = v8; /*0x5d4d17*/
  if ( v7 <= 0xA ) /*0x5d4d1b*/
    v9 = 2.0; /*0x5d4d27*/
  else
    v9 = 4.5; /*0x5d4d1d*/
  v10 = 66; /*0x5d4d2f*/
  if ( v7 > 0xA ) /*0x5d4d39*/
    v10 = 35; /*0x5d4d39*/
  v11 = (float)v10; /*0x5d4d41*/
  v12 = 40; /*0x5d4d45*/
  if ( v7 > 0xA ) /*0x5d4d4f*/
    v12 = 15; /*0x5d4d4f*/
  v13 = (float)v12; /*0x5d4d57*/
  v14 = cocos2d::CCDirector::sharedDirector(35); /*0x5d4d5b*/
  cocos2d::CCDirector::getWinSize(v14, v36); /*0x5d4d69*/
  cocos2d::CCPoint::CCPoint( /*0x5d4da4*/
    (cocos2d::CCPoint *)&v37,
    (float)(v36[0] * 0.5) - (float)(v11 * v9),
    (float)(v36[1] * 0.5) + 34.0);
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v38, v15); /*0x5d4db9*/
  v16 = 0; /*0x5d4dbf*/
  v17 = *v6; /*0x5d4dc1*/
  result = (v6[1] - *v6) >> 4; /*0x5d4dcb*/
  if ( result ) /*0x5d4dd2*/
  {
    v19 = 0; /*0x5d4dd8*/
    result = v2; /*0x5d4ddb*/
    v37 = v2; /*0x5d4dde*/
    v20 = 0; /*0x5d4de3*/
    while ( 1 ) /*0x5d4e00*/
    {
      if ( v16 >= 20 ) /*0x5d4e03*/
        return result; /*0x5d4e03*/
      v43 = 0; /*0x5d4e0c*/
      v44 = 0; /*0x5d4e14*/
      v45 = 15; /*0x5d4e20*/
      LOBYTE(v43) = 0; /*0x5d4e28*/
      v21 = *(unsigned int *)(v20 + v17 + 8); /*0x5d4e30*/
      v22 = *(unsigned int *)(v20 + v17); /*0x5d4e35*/
      v23 = "%i-%i"; /*0x5d4e3d*/
      if ( v7 > 0xA ) /*0x5d4e44*/
        v23 = "%i\n%i"; /*0x5d4e46*/
      v24 = cocos2d::CCString::createWithFormat(v23, v22, v21); /*0x5d4e4d*/
      CString = (char *)cocos2d::CCString::getCString(v24); /*0x5d4e56*/
      v26 = -1; /*0x5d4e67*/
      do /*0x5d4e73*/
        ++v26; /*0x5d4e70*/
      while ( CString[v26] ); /*0x5d4e73*/
      sub_3F5A0(&v43, CString, v26); /*0x5d4e7a*/
      v27 = &v43; /*0x5d4e7f*/
      if ( v45 > 0xF ) /*0x5d4e90*/
        LODWORD(v27) = v43; /*0x5d4e90*/
      v40 = operator new(0x2C8u); /*0x5d4ea3*/
      v28 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v40); /*0x5d4eb0*/
      if ( v28 ) /*0x5d4eb6*/
      {
        v29 = "GJ_button_04.png"; /*0x5d4eb8*/
        if ( v16 == v34 ) /*0x5d4eca*/
          v29 = "GJ_button_03.png"; /*0x5d4eca*/
        if ( (unsigned __int8)ButtonSprite_init( /*0x5d4efe*/
                                (_DWORD)v28,
                                (_DWORD)v27,
                                (int)v13,
                                0,
                                1051931443,
                                1,
                                (__int64)&qword_6FFF68,
                                (__int64)v29,
                                1106247680) )
        {
          cocos2d::CCObject::autorelease(v28); /*0x5d4f0a*/
        }
        else
        {
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v28 + 8LL))(v28, 1); /*0x5d4f1a*/
          LODWORD(v28) = 0; /*0x5d4f1d*/
        }
      }
      v41 = operator new(0x208u); /*0x5d4f29*/
      v30 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v41); /*0x5d4f39*/
      if ( !v30 ) /*0x5d4f3f*/
        goto LABEL_33; /*0x5d4f3f*/
      if ( !(unsigned __int8)sub_47940((_DWORD)v30, (_DWORD)v28, 0, a1, (__int64)sub_5D50E0) ) /*0x5d4f59*/
        break; /*0x5d4f59*/
      cocos2d::CCObject::autorelease(v30); /*0x5d4f65*/
LABEL_34:
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v30 + 64LL))(v30, (unsigned int)v16); /*0x5d4f7a*/
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x5d4f92*/
        *(_QWORD *)(a1 + 552),
        v30);
      v31 = floorf((float)(v16 / v35)) * -38.0; /*0x5d4fad*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, (float)(v16 % v35) * v11, v31); /*0x5d4fc9*/
      cocos2d::CCPoint::operator+(v38, v39, v32); /*0x5d4fdc*/
      (*(void (__fastcall **)(cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v30 + 184LL))(v30, v39); /*0x5d4fed*/
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 1016), v30); /*0x5d4ffd*/
      if ( v19 == v37 ) /*0x5d5008*/
        *(_QWORD *)(a1 + 1000) = v30; /*0x5d500a*/
      if ( v45 > 0xF ) /*0x5d501d*/
      {
        v33 = (void *)v43; /*0x5d5022*/
        if ( v45 + 1 >= 0x1000 ) /*0x5d5034*/
        {
          v33 = *(void **)(v43 - 8); /*0x5d503a*/
          if ( (unsigned __int64)(v43 - (_QWORD)v33 - 8) > 0x1F ) /*0x5d5049*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5d508c*/
        }
        j_j_free(v33); /*0x5d504b*/
      }
      ++v16; /*0x5d5050*/
      ++v19; /*0x5d5052*/
      v20 += 16; /*0x5d5055*/
      v17 = *v6; /*0x5d5059*/
      result = v16; /*0x5d5067*/
      if ( v16 >= (unsigned __int64)((v6[1] - *v6) >> 4) ) /*0x5d506d*/
        return result; /*0x5d506d*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v30 + 8LL))(v30, 1); /*0x5d4f75*/
LABEL_33:
    v30 = 0; /*0x5d4f78*/
    goto LABEL_34; /*0x5d4f78*/
  }
  return result; /*0x5d5093*/
}
