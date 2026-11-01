#include <Geode/binding/GJDifficultySprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x3a7450
// Method: GJDifficultySprite::create
// Hidden C++ exception states: #wind=2
cocos2d::CCSprite *GJDifficultySprite_create()
{
  cocos2d::CCSprite *v0; // rsi
  __int64 DifficultyFrame; // rax
  bool v2; // bl
  _BYTE Src[32]; // [rsp+28h] [rbp-30h] BYREF

  v0 = (cocos2d::CCSprite *)operator new(0x260u); /*0x3a747c*/
  cocos2d::CCSprite::CCSprite(v0); /*0x3a7487*/
  *(_QWORD *)v0 = &GJDifficultySprite::`vftable'; /*0x3a7494*/
  *((_QWORD *)v0 + 40) = &GJDifficultySprite::`vftable'; /*0x3a749e*/
  *((_QWORD *)v0 + 43) = &GJDifficultySprite::`vftable'; /*0x3a74ac*/
  *((_DWORD *)v0 + 150) = 0; /*0x3a74b3*/
  DifficultyFrame = GJDifficultySprite_getDifficultyFrame(Src); /*0x3a74c7*/
  if ( *(_QWORD *)(DifficultyFrame + 24) > 0xFu ) /*0x3a74d2*/
    DifficultyFrame = *(_QWORD *)DifficultyFrame; /*0x3a74d4*/
  v2 = cocos2d::CCSprite::initWithSpriteFrameName(v0, (const char *)DifficultyFrame); /*0x3a74e3*/
  sub_3C310(Src); /*0x3a74eb*/
  if ( v2 ) /*0x3a74f2*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x3a74f7*/
    return v0; /*0x3a74fd*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x3a7511*/
    return 0; /*0x3a7514*/
  }
}

// [2/2] Address: 0x3a7540
// Method: GJDifficultySprite::getDifficultyFrame
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJDifficultySprite_getDifficultyFrame(_QWORD *Src, int a2, int a3)
{
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  size_t v9; // r8
  char *v10; // rdx

  v6 = cocos2d::CCString::createWithFormat("difficulty_%02d_", a2); /*0x3a756b*/
  CString = cocos2d::CCString::getCString(v6); /*0x3a7574*/
  *(_OWORD *)Src = 0; /*0x3a757d*/
  Src[2] = 0; /*0x3a7580*/
  Src[3] = 0; /*0x3a7588*/
  v8 = -1; /*0x3a7590*/
  do /*0x3a75a3*/
    ++v8; /*0x3a75a0*/
  while ( CString[v8] ); /*0x3a75a3*/
  sub_3C230(Src); /*0x3a75b0*/
  if ( a3 == 1 && (unsigned int)(a2 - 6) <= 4 ) /*0x3a75c8*/
  {
    v9 = 12; /*0x3a75ca*/
    v10 = "btn2_001.png"; /*0x3a75d0*/
  }
  else
  {
    v9 = 11; /*0x3a75d9*/
    v10 = "btn_001.png"; /*0x3a75df*/
  }
  sub_43D80(Src, v10, v9); /*0x3a75e9*/
  if ( a2 == -1 ) /*0x3a75f1*/
    sub_3F5A0(Src, "difficulty_auto_btn_001.png", 0x1Bu); /*0x3a7603*/
  return Src; /*0x3a760b*/
}
