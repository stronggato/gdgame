#include <Geode/binding/SongCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x14d820
// Method: SongCell::~SongCell
_QWORD *__fastcall SongCell__dtor_SongCell(_QWORD *Block, char a2)
{
  *Block = &SongCell::`vftable'; /*0x14d833*/
  Block[40] = &SongCell::`vftable'; /*0x14d840*/
  Block[41] = &SongCell::`vftable'; /*0x14d84e*/
  Block[42] = &SongCell::`vftable'; /*0x14d85c*/
  Block[43] = &SongCell::`vftable'; /*0x14d86a*/
  Block[44] = &SongCell::`vftable'; /*0x14d878*/
  URLCell__dtor_URLCell(Block); /*0x14d87f*/
  if ( (a2 & 1) != 0 ) /*0x14d887*/
    j_j_free(Block); /*0x14d891*/
  return Block; /*0x14d896*/
}

// [2/3] Address: 0x14d8b0
// Method: SongCell::loadFromObject
// Hidden C++ exception states: #wind=3
__int64 __fastcall SongCell_loadFromObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r15d
  __int64 AudioTitle; // rax
  struct cocos2d::CCLabelBMFont *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  cocos2d::CCObject *v12; // r14
  cocos2d::CCObject *v13; // rax
  struct cocos2d::CCMenu *v14; // rdi
  __int64 v15; // rbx
  float v16; // xmm6_4
  float *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  cocos2d::CCString *v20; // rax
  const char *CString; // rbx
  struct cocos2d::CCLabelBMFont *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  void *v30; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v31[8]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v32[32]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v33[32]; // [rsp+80h] [rbp-78h] BYREF

  v2 = a2; /*0x14d8e0*/
  LOBYTE(a2) = 1; /*0x14d8f0*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2); /*0x14d8f2*/
  *(_QWORD *)(a1 + 560) = v2; /*0x14d8f8*/
  v4 = LevelTools_artistForAudio(*(_DWORD *)(v2 + 56)); /*0x14d907*/
  AudioTitle = LevelTools_getAudioTitle((__int64)v32, *(_DWORD *)(v2 + 56)); /*0x14d912*/
  if ( *(_QWORD *)(AudioTitle + 24) > 0xFu ) /*0x14d91d*/
    AudioTitle = *(_QWORD *)AudioTitle; /*0x14d91f*/
  v6 = cocos2d::CCLabelBMFont::create((const char *)AudioTitle, (const char *)&qword_6FFF68); /*0x14d935*/
  sub_3C310(v32); /*0x14d93d*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))( /*0x14d956*/
    *(_QWORD *)(a1 + 544),
    v6);
  v7 = *(_QWORD *)v6; /*0x14d959*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 0.0, 0.5); /*0x14d971*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v7 + 288))(v6, v8); /*0x14d97d*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 160LL))(v6); /*0x14d991*/
  v9 = *(_QWORD *)v6; /*0x14d997*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 10.0, (float)(*(float *)(a1 + 532) * 0.5) + 10.0); /*0x14d9b8*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v9 + 184))(v6, v10); /*0x14d9c4*/
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 320LL))(v6) > 240.0 ) /*0x14d9e5*/
  {
    v11 = *(_QWORD *)v6; /*0x14d9e7*/
    (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 320LL))(v6); /*0x14d9ed*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(v11 + 160))(v6); /*0x14d9fd*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 168LL))(v6); /*0x14da09*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 160LL))(v6); /*0x14da20*/
  v30 = operator new(0x2C8u); /*0x14da30*/
  v12 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v30); /*0x14da3d*/
  if ( v12 ) /*0x14da43*/
  {
    if ( ButtonSprite_init( /*0x14da8a*/
           (__int64)v12,
           (__int64)"View",
           50,
           0,
           1058642330,
           0,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v12); /*0x14da96*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1); /*0x14daa6*/
      v12 = 0; /*0x14daa9*/
    }
  }
  v13 = CCMenuItemSpriteExtra_create((int)v12, 0, a1, (__int64)SongCell_onClick); /*0x14dabb*/
  *((_DWORD *)v13 + 93) = 1069547520; /*0x14dac0*/
  v14 = cocos2d::CCMenu::create(v13, 0); /*0x14dad5*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *))(**(_QWORD **)(a1 + 544) + 464LL))( /*0x14daec*/
    *(_QWORD *)(a1 + 544),
    v14);
  v15 = *(_QWORD *)v14; /*0x14daef*/
  v16 = *(float *)(a1 + 532) * 0.5; /*0x14dafa*/
  v17 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v12 + 320LL))(v12); /*0x14db05*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, (float)(*(float *)(a1 + 528) - (float)(*v17 * 0.5)) - 9.0, v16); /*0x14db30*/
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v15 + 184))(v14, v18); /*0x14db3c*/
  v19 = sub_45FF00(v33, v4); /*0x14db4d*/
  if ( *(_QWORD *)(v19 + 24) > 0xFu ) /*0x14db58*/
    v19 = *(_QWORD *)v19; /*0x14db5a*/
  v20 = cocos2d::CCString::createWithFormat("By %s", (const char *)v19); /*0x14db67*/
  CString = cocos2d::CCString::getCString(v20); /*0x14db76*/
  sub_3C310(v33); /*0x14db81*/
  v22 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt"); /*0x14db96*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))( /*0x14dbad*/
    *(_QWORD *)(a1 + 544),
    v22);
  v23 = *(_QWORD *)v22; /*0x14dbb0*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 0.0, 0.5); /*0x14dbbf*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v23 + 288))(v22, v24); /*0x14dbcb*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v22 + 160LL))(v22); /*0x14dbdf*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v31, 2.0, -21.0); /*0x14dbfa*/
  v26 = v25; /*0x14dc00*/
  v27 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 200LL))(v6); /*0x14dc10*/
  cocos2d::CCPoint::operator+(v27, &v30, v26); /*0x14dc1d*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v22 + 184LL))(v22, &v30); /*0x14dc2e*/
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v22 + 320LL))(v22) > 140.0 ) /*0x14dc4f*/
  {
    v28 = *(_QWORD *)v22; /*0x14dc51*/
    (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v22 + 320LL))(v22); /*0x14dc57*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(v28 + 160))(v22); /*0x14dc67*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v22 + 168LL))(v22); /*0x14dc73*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v22 + 160LL))(v22); /*0x14dc90*/
}

// [3/3] Address: 0x14dcd0
// Method: SongCell::onClick
__int64 __fastcall SongCell_onClick(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_62F560(*(unsigned int *)(*(_QWORD *)(a1 + 560) + 56LL)); /*0x14dcde*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 1064LL))(v1); /*0x14dcf0*/
}
