#include <Geode/binding/URLCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x3f0c0
// Method: URLCell::init
char __fastcall URLCell_init(__int64 a1)
{
  *(_QWORD *)(a1 + 560) = 0; /*0x3f0c0*/
  return 1; /*0x3f0cd*/
}

// [2/5] Address: 0x88ba0
// Method: URLCell::~URLCell
void __fastcall URLCell__dtor_URLCell(_QWORD *a1)
{
  *a1 = &TableViewCell::`vftable'; /*0x88bb0*/
  a1[40] = &TableViewCell::`vftable'; /*0x88bba*/
  a1[41] = &TableViewCell::`vftable'; /*0x88bc8*/
  a1[42] = &TableViewCell::`vftable'; /*0x88bd6*/
  a1[43] = &TableViewCell::`vftable'; /*0x88be4*/
  a1[44] = &TableViewCell::`vftable'; /*0x88bf2*/
  cocos2d::CCNode::removeAllChildrenWithCleanup((cocos2d::CCNode *)a1, 1); /*0x88bfb*/
  sub_3C310(a1 + 62); /*0x88c08*/
  cocos2d::CCObject::~CCObject((cocos2d::CCObject *)(a1 + 53)); /*0x88c14*/
  cocos2d::CCLayer::~CCLayer((cocos2d::CCLayer *)a1); /*0x88c22*/
}

// [3/5] Address: 0x146270
// Method: URLCell::draw
void __fastcall URLCell_draw(__int64 a1)
{
  const struct cocos2d::CCPoint *v1; // rax
  const struct cocos2d::CCPoint *v2; // rbx
  cocos2d *v3; // rax
  const struct cocos2d::CCPoint *v4; // r8
  const struct cocos2d::CCPoint *v5; // rax
  const struct cocos2d::CCPoint *v6; // rbx
  cocos2d *v7; // rax
  const struct cocos2d::CCPoint *v8; // r8
  float v9; // [rsp+40h] [rbp+8h] BYREF
  float v10; // [rsp+44h] [rbp+Ch]
  char v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v9, *(float *)(a1 + 528), *(float *)(a1 + 532)); /*0x146290*/
  cocos2d::ccDrawColor4B(0, 0, 0, 0x4Bu); /*0x1462a0*/
  glLineWidth(2.0); /*0x1462ae*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v9 - 1.0, v10); /*0x1462d1*/
  v2 = v1; /*0x1462e5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, 1.0, v10); /*0x1462e8*/
  cocos2d::ccDrawLine(v3, v2, v4); /*0x1462f4*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v9 - 1.0, 0.0); /*0x14630c*/
  v6 = v5; /*0x14631d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, 1.0, 0.0); /*0x146320*/
  cocos2d::ccDrawLine(v7, v6, v8); /*0x14632c*/
}

// [4/5] Address: 0x15d580
// Method: URLCell::loadFromObject
// Hidden C++ exception states: #wind=1
__int64 __fastcall URLCell_loadFromObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const char *v4; // rcx
  cocos2d::CCLabelBMFont *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  struct cocos2d::CCMenu *v8; // r14
  cocos2d::CCObject *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  void *v15; // [rsp+90h] [rbp+8h] BYREF
  char v16; // [rsp+98h] [rbp+10h] BYREF

  v2 = a2; /*0x15d59c*/
  LOBYTE(a2) = 1; /*0x15d5ac*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2); /*0x15d5ae*/
  *(_QWORD *)(a1 + 560) = v2; /*0x15d5b4*/
  v4 = (const char *)(v2 + 56); /*0x15d5bb*/
  if ( *(_QWORD *)(v2 + 80) > 0xFu ) /*0x15d5c4*/
    v4 = *(const char **)v4; /*0x15d5c6*/
  v5 = cocos2d::CCLabelBMFont::create(v4, (const char *)&qword_6FFF68); /*0x15d5d9*/
  cocos2d::CCLabelBMFont::limitLabelWidth(v5, 250.0, 0.5, 0.0); /*0x15d5f5*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))( /*0x15d60f*/
    *(_QWORD *)(a1 + 544),
    v5);
  v6 = *(_QWORD *)v5; /*0x15d612*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, 0.0, 0.5); /*0x15d623*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v6 + 288))(v5, v7); /*0x15d62f*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v5 + 176LL))(v5); /*0x15d64f*/
  v8 = cocos2d::CCMenu::create(0); /*0x15d65d*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x15d67a*/
    *(_QWORD *)(a1 + 544),
    v8,
    3);
  v15 = operator new(0x2C8u); /*0x15d687*/
  v9 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v15); /*0x15d697*/
  if ( v9 ) /*0x15d6a5*/
  {
    if ( ButtonSprite_init( /*0x15d6e4*/
           (__int64)v9,
           (__int64)"Open",
           100,
           0,
           1060320051,
           0,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v9); /*0x15d6f0*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x15d700*/
      v9 = 0; /*0x15d703*/
    }
  }
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v9 + 160LL))(v9); /*0x15d713*/
  v10 = CCMenuItemSpriteExtra_create(v9, 0, a1, URLCell_onURL); /*0x15d72d*/
  *(_DWORD *)(v10 + 372) = 1067030938; /*0x15d730*/
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(*(_QWORD *)v8 + 464LL))(v8, v10); /*0x15d74a*/
  v11 = *(_QWORD *)v10; /*0x15d74d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, *(float *)(a1 + 528) - 30.0, *(float *)(a1 + 532) * 0.5); /*0x15d770*/
  cocos2d::CCNode::convertToNodeSpace(v8, &v16, v12); /*0x15d784*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(v11 + 184))(v10, v13); /*0x15d796*/
}

// [5/5] Address: 0x15d7c0
// Method: URLCell::onURL
void __fastcall URLCell_onURL(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_QWORD *)(a1 + 560) ) /*0x15d7c6*/
  {
    v1 = cocos2d::CCApplication::sharedApplication(a1); /*0x15d7d3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1); /*0x15d7fd*/
  }
}
