#include <Geode/binding/ColorChannelSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x35ea50
// Method: ColorChannelSprite::~ColorChannelSprite
cocos2d::CCSprite *__fastcall ColorChannelSprite__dtor_ColorChannelSprite(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCSprite::~CCSprite(Block); /*0x35ea5f*/
  if ( (a2 & 1) != 0 ) /*0x35ea68*/
    j_j_free(Block); /*0x35ea72*/
  return Block; /*0x35ea77*/
}

// [2/4] Address: 0x35f330
// Method: ColorChannelSprite::create
// Hidden C++ exception states: #wind=1
cocos2d::CCSprite *ColorChannelSprite_create()
{
  cocos2d::CCSprite *v0; // rbx

  v0 = (cocos2d::CCSprite *)operator new(0x270u); /*0x35f340*/
  cocos2d::CCSprite::CCSprite(v0); /*0x35f34b*/
  *(_QWORD *)v0 = &ColorChannelSprite::`vftable'; /*0x35f358*/
  *((_QWORD *)v0 + 40) = &ColorChannelSprite::`vftable'; /*0x35f362*/
  *((_QWORD *)v0 + 43) = &ColorChannelSprite::`vftable'; /*0x35f370*/
  *((_QWORD *)v0 + 75) = 0; /*0x35f377*/
  *((_QWORD *)v0 + 76) = 0; /*0x35f382*/
  *((_QWORD *)v0 + 77) = 0; /*0x35f38d*/
  if ( cocos2d::CCSprite::initWithSpriteFrameName(v0, "GJ_colorBtn_001.png") ) /*0x35f3b5*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x35f3c6*/
    return v0; /*0x35f3cc*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x35f3e4*/
    return 0; /*0x35f3e7*/
  }
}

// [3/4] Address: 0x35f3f0
// Method: ColorChannelSprite::init
bool __fastcall ColorChannelSprite_init(cocos2d::CCSprite *a1)
{
  return cocos2d::CCSprite::initWithSpriteFrameName(a1, "GJ_colorBtn_001.png"); /*0x35f406*/
}

// [4/4] Address: 0x35f5d0
// Method: ColorChannelSprite::updateOpacity
void __fastcall ColorChannelSprite_updateOpacity(_QWORD **a1, float a2)
{
  struct cocos2d::CCLabelBMFont **v2; // r14
  struct cocos2d::CCLabelBMFont *v4; // rax
  __int64 v5; // rcx
  float *v6; // rbx
  struct cocos2d::CCLabelBMFont *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  struct cocos2d::CCLabelBMFont *v14; // rcx
  void (__fastcall **v15)(__int64, const char *); // rbx
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  char v18; // [rsp+60h] [rbp+18h] BYREF

  v2 = (struct cocos2d::CCLabelBMFont **)(a1 + 76); /*0x35f5e3*/
  if ( a2 == 1.0 ) /*0x35f5f9*/
  {
    if ( !*v2 ) /*0x35f5ff*/
      return; /*0x35f5ff*/
  }
  else if ( !*v2 ) /*0x35f60a*/
  {
    v4 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68); /*0x35f627*/
    v5 = (__int64)*a1; /*0x35f62d*/
    *v2 = v4; /*0x35f633*/
    (*(void (__fastcall **)(_QWORD **, struct cocos2d::CCLabelBMFont *))(v5 + 464))(a1, v4); /*0x35f640*/
    v6 = (float *)((__int64 (__fastcall *)(_QWORD **))(*a1)[40])(a1); /*0x35f652*/
    v7 = *v2; /*0x35f655*/
    v8 = *(_QWORD *)*v2; /*0x35f662*/
    v9 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[40])(a1); /*0x35f665*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, *v6 * 0.5, (float)(*(float *)(v9 + 4) * 0.5) - 9.5); /*0x35f68d*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v8 + 184))(v7, v10); /*0x35f699*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)*v2 + 160LL))(*v2); /*0x35f6ad*/
  }
  v11 = *v2; /*0x35f6bf*/
  if ( a2 == 1.0 ) /*0x35f6c4*/
  {
    v12 = *(_QWORD *)v11; /*0x35f6c6*/
    v13 = 0; /*0x35f6c9*/
    v14 = *v2; /*0x35f6cb*/
  }
  else
  {
    v15 = (void (__fastcall **)(__int64, const char *))*((_QWORD *)v11 + 45); /*0x35f6d0*/
    v16 = cocos2d::CCString::createWithFormat("%0.2f", a2); /*0x35f6ea*/
    CString = cocos2d::CCString::getCString(v16); /*0x35f6f3*/
    (*v15)((__int64)v11 + 360, CString); /*0x35f703*/
    v14 = *v2; /*0x35f705*/
    LOBYTE(v13) = 1; /*0x35f708*/
    v12 = *(_QWORD *)*v2; /*0x35f70a*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 336))(v14, v13); /*0x35f70d*/
}
