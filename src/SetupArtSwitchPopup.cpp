#include <Geode/binding/SetupArtSwitchPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x5d77f0
// Method: SetupArtSwitchPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *SetupArtSwitchPopup_create()
{
  _QWORD *v0; // r14

  v0 = operator new(0x418u); /*0x5d7818*/
  sub_5D5400(v0); /*0x5d7823*/
  *v0 = &SetupSFXPopup::`vftable'; /*0x5d782f*/
  v0[40] = &SetupSFXPopup::`vftable'; /*0x5d7839*/
  v0[41] = &SetupSFXPopup::`vftable'; /*0x5d7847*/
  v0[42] = &SetupSFXPopup::`vftable'; /*0x5d7855*/
  v0[43] = &SetupSFXPopup::`vftable'; /*0x5d7863*/
  v0[44] = &SetupSFXPopup::`vftable'; /*0x5d7871*/
  v0[51] = &SetupSFXPopup::`vftable'; /*0x5d787f*/
  v0[54] = &SetupSFXPopup::`vftable'; /*0x5d788d*/
  v0[68] = &SetupSFXPopup::`vftable'; /*0x5d789b*/
  v0[83] = &SetupSFXPopup::`vftable'; /*0x5d78a9*/
  v0[84] = &SetupSFXPopup::`vftable'; /*0x5d78b7*/
  v0[126] = &SetupSFXPopup::`vftable'; /*0x5d78c5*/
  v0[127] = &SetupSFXPopup::`vftable'; /*0x5d78d3*/
  *((_DWORD *)v0 + 256) = 0; /*0x5d78da*/
  v0[129] = 0; /*0x5d78e5*/
  *((_DWORD *)v0 + 261) = 0; /*0x5d78f0*/
  if ( (unsigned __int8)sub_5D7950((int)v0) ) /*0x5d7907*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x5d7913*/
    return v0; /*0x5d7919*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v0 + 8LL))(v0, 1); /*0x5d792d*/
    return 0; /*0x5d7930*/
  }
}

// [2/3] Address: 0x6040b0
// Method: SetupArtSwitchPopup::onArt
__int64 __fastcall SetupArtSwitchPopup_onArt(unsigned int *a1)
{
  float v2; // xmm0_4
  __int64 *v3; // rax
  unsigned int *v4; // rdx
  __int64 v5; // rcx

  v2 = (*(float (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 533); /*0x6040c1*/
  v3 = (__int64 *)sub_4572A0(a1[252], (unsigned int)(int)v2); /*0x6040d1*/
  v4 = a1 + 250; /*0x6040d8*/
  if ( !a1 ) /*0x6040e2*/
    v4 = 0; /*0x6040e2*/
  v5 = *v3; /*0x6040e6*/
  v3[87] = (__int64)v4; /*0x6040e9*/
  return (*(__int64 (__fastcall **)(__int64 *))(v5 + 1064))(v3); /*0x6040fa*/
}

// [3/3] Address: 0x604110
// Method: SetupArtSwitchPopup::selectArtClosed
// Hidden C++ exception states: #wind=1
double __fastcall SetupArtSwitchPopup_selectArtClosed(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rax
  const char *v5; // rbx
  cocos2d::CCSpriteFrameCache *v6; // rax
  struct cocos2d::CCSpriteFrame *v7; // rax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a2 + 680); /*0x60412c*/
  SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)(a1 - 1000), 0x215u, (float)v3); /*0x604145*/
  v4 = sub_6034F0(v9, (unsigned int)v3, *(unsigned int *)(a1 + 8)); /*0x604155*/
  v5 = (const char *)v4; /*0x60415a*/
  if ( *(_QWORD *)(v4 + 24) > 0xFu ) /*0x604162*/
    v5 = *(const char **)v4; /*0x604164*/
  v6 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x604167*/
  v7 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v6, v5); /*0x604173*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSpriteFrame *))(**(_QWORD **)(a1 + 16) + 1008LL))( /*0x60418a*/
    *(_QWORD *)(a1 + 16),
    v7);
  return sub_3C310(v9); /*0x604198*/
}
