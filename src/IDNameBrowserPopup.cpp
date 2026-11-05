#include <Geode/binding/IDNameBrowserPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x3bdac0
// Method: IDNameBrowserPopup::~IDNameBrowserPopup
_QWORD *__fastcall IDNameBrowserPopup__dtor_IDNameBrowserPopup(_QWORD *Block, char a2)
{
  *Block = &IDNameBrowserPopup::`vftable'; /*0x3bdad4*/
  Block[40] = &IDNameBrowserPopup::`vftable'; /*0x3bdae0*/
  Block[41] = &IDNameBrowserPopup::`vftable'; /*0x3bdaee*/
  Block[42] = &IDNameBrowserPopup::`vftable'; /*0x3bdafc*/
  Block[43] = &IDNameBrowserPopup::`vftable'; /*0x3bdb0a*/
  Block[44] = &IDNameBrowserPopup::`vftable'; /*0x3bdb18*/
  Block[51] = &IDNameBrowserPopup::`vftable'; /*0x3bdb26*/
  Block[54] = &IDNameBrowserPopup::`vftable'; /*0x3bdb34*/
  Block[68] = &IDNameBrowserPopup::`vftable'; /*0x3bdb42*/
  Block[83] = &IDNameBrowserPopup::`vftable'; /*0x3bdb50*/
  sub_3C14C0(Block + 95); /*0x3bdb5e*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x3bdb66*/
  if ( (a2 & 1) != 0 ) /*0x3bdb6e*/
    j_j_free(Block); /*0x3bdb78*/
  return Block; /*0x3bdb7d*/
}

// [2/11] Address: 0x3bf5d0
// Method: IDNameBrowserPopup::virtualRowCount
__int64 __fastcall IDNameBrowserPopup_virtualRowCount(__int64 a1)
{
  return (*(_QWORD *)(a1 + 104) - *(_QWORD *)(a1 + 96)) / 40LL; /*0x3bf5f6*/
}

// [3/11] Address: 0x3bf600
// Method: IDNameBrowserPopup::virtualRowHeight
float IDNameBrowserPopup_virtualRowHeight()
{
  return 24.0; /*0x3bf608*/
}

// [5/11] Address: 0x3bfb20
// Method: IDNameBrowserPopup::textChanged
__int64 __fastcall IDNameBrowserPopup_textChanged(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = a1 - 68; /*0x3bfb2d*/
  if ( a2 == a1[18] ) /*0x3bfb34*/
  {
    v3 = a1[19]; /*0x3bfb36*/
    if ( v3 ) /*0x3bfb40*/
    {
      *(_DWORD *)(v3 + 436) = 0; /*0x3bfb44*/
      *(_DWORD *)(v3 + 476) = 0; /*0x3bfb4a*/
      sub_7FF60(v3); /*0x3bfb50*/
      sub_7FFD0(v4); /*0x3bfb55*/
    }
    return sub_3BF030(v2); /*0x3bfb62*/
  }
  else if ( a2 == a1[21] || a2 == a1[22] ) /*0x3bfb77*/
  {
    return sub_3C0130(a1 - 68); /*0x3bfb81*/
  }
  return result; /*0x3bfb5d*/
}

// [6/11] Address: 0x3c11d0
// Method: IDNameBrowserPopup::show
__int64 __fastcall IDNameBrowserPopup_show(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x3c11e6*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x3c11ed*/
    v2 = *(_QWORD *)(a1 + 568); /*0x3c11f7*/
  if ( !*(_DWORD *)(a1 + 592) ) /*0x3c11df*/
    *(_DWORD *)(a1 + 592) = 110; /*0x3c1206*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1);
}

// [7/11] Address: 0x3c1330
// Method: IDNameBrowserPopup::keyBackClicked
__int64 __fastcall IDNameBrowserPopup_keyBackClicked(__int64 a1)
{
  return sub_3C1220(a1 - 336, 0);
}

// [8/11] Address: 0x3c1340
// Method: IDNameBrowserPopup::ccTouchBegan
char __fastcall IDNameBrowserPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 376) && (unsigned __int8)sub_80430() ) /*0x3c1364*/
  {
    FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x3c1376*/
    return 1; /*0x3c138c*/
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x3c1396*/
  if ( result ) /*0x3c139d*/
    return 1; /*0x3c139d*/
  return result; /*0x3c137d*/
}

// [9/11] Address: 0x3c13b0
// Method: IDNameBrowserPopup::ccTouchMoved
__int64 __fastcall IDNameBrowserPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 376) ) /*0x3c13c5*/
    sub_804A0(); /*0x3c13d4*/
  result = *(unsigned int *)(a2 + 56); /*0x3c13d9*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x3c13e2*/
  {
    v7 = *(_QWORD *)(a1 + 232); /*0x3c13e4*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x3c13f3*/
      return result; /*0x3c13f3*/
    v7 = *(_QWORD *)(a1 + 304); /*0x3c13f5*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 16LL))(v7 + 320, a2, a3); /*0x3c140f*/
}

// [10/11] Address: 0x3c1420
// Method: IDNameBrowserPopup::ccTouchEnded
__int64 __fastcall IDNameBrowserPopup_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 376); /*0x3c1435*/
  if ( v4 ) /*0x3c1442*/
    SetupTriggerPopup_triggerSliderChanged(v4, a2, a3); /*0x3c1444*/
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0x3c1452*/
}

// [11/11] Address: 0x3c1470
// Method: IDNameBrowserPopup::ccTouchCancelled
__int64 __fastcall IDNameBrowserPopup_ccTouchCancelled(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 376) ) /*0x3c1485*/
    sub_805B0(); /*0x3c1494*/
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x3c14a2*/
}

// Address: 0x3bf610
// Method: IDNameBrowserPopup::mountVirtualRow
__int64 __fastcall IDNameBrowserPopup_mountVirtualRow(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v9; // rax
  float v10; // xmm10_4
  unsigned int v11; // r13d
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  void (__fastcall **v21)(__int64, __int16 *); // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCLabelBMFont *v24; // rdi
  void (__fastcall **v25)(__int64, __int16 *); // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  struct cocos2d::CCLabelBMFont *v30; // rbx
  int v31; // r12d
  cocos2d::CCObject *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  struct cocos2d::CCSprite *v38; // r14
  cocos2d::CCObject *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  struct cocos2d::CCSprite *v42; // rsi
  __int64 v43; // rdi
  cocos2d::CCObject *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int16 v48; // [rsp+30h] [rbp-99h] BYREF
  char v49; // [rsp+32h] [rbp-97h]
  _BYTE v50[12]; // [rsp+34h] [rbp-95h] BYREF
  float v51; // [rsp+40h] [rbp-89h] BYREF
  __int64 v52; // [rsp+48h] [rbp-81h]
  _BYTE v53[16]; // [rsp+50h] [rbp-79h] BYREF
  wchar_t Buffer[8]; // [rsp+60h] [rbp-69h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  v52 = a1;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v51, (const struct cocos2d::CCSize *)(v6 + 424));
  v9 = *(_QWORD *)(a1 + 96);
  v10 = v51 - 20.0;
  v11 = *(_DWORD *)(v9 + 40 * v4);
  v12 = v51 - 10.0;
  v13 = v51 * 0.5;
  v14 = (float)(v51 - 20.0) - 24.0;
  v15 = v9 + 8 + 40 * v4;
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v53, 0.0, 0.0, 40.0, 40.0);
  v17 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02_small.png", v16);
  v18 = *v17;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v50, v12 + v12, 44.0);
  (*(void (__fastcall **)(_QWORD *, __int64))(v18 + 312))(v17, v19);
  (*(void (__fastcall **)(_QWORD *))(*v17 + 160LL))(v17);
  v20 = 40;
  if ( (v4 & 1) == 0 )
    v20 = 70;
  (*(void (__fastcall **)(_QWORD *, __int64))(v17[40] + 40LL))(v17 + 40, v20);
  v21 = (void (__fastcall **)(__int64, __int16 *))v17[40];
  v48 = 0;
  v49 = 0;
  (*v21)((__int64)(v17 + 40), &v48);
  v22 = *v17;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, v13, 12.0);
  (*(void (__fastcall **)(_QWORD *, __int64))(v22 + 184))(v17, v23);
  (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a3 + 456LL))(a3, v17, 0);
  swprintf(Buffer, 0x10u, "%d:", v11);
  v24 = cocos2d::CCLabelBMFont::create((const char *)Buffer, (const char *)&qword_6FFF68);
  cocos2d::CCLabelBMFont::limitLabelWidth(v24, 34.0, 0.44999999, 0.0);
  v48 = -1;
  v25 = (void (__fastcall **)(__int64, __int16 *))*((_QWORD *)v24 + 46);
  v49 = -1;
  (*v25)((__int64)v24 + 368, &v48);
  v26 = *(_QWORD *)v24;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, 1.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v26 + 288))(v24, v27);
  v28 = *(_QWORD *)v24;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, 46.0, 12.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v28 + 184))(v24, v29);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a3 + 456LL))(a3, v24, 1);
  if ( *(_QWORD *)(v15 + 24) > 0xFu )
    v15 = *(_QWORD *)v15;
  v30 = cocos2d::CCLabelBMFont::create((const char *)v15, (const char *)&qword_6FFF68);
  v48 = -14211;
  v49 = -1;
  (**((void (__fastcall ***)(__int64, __int16 *))v30 + 46))((__int64)v30 + 368, &v48);
  cocos2d::CCLabelBMFont::limitLabelWidth(v30, (float)(v14 - 54.0) - 12.0, 0.44999999, 0.15000001);
  v31 = v52 - 664;
  v32 = CCMenuItemSpriteExtra_create((int)v30, 0, (int)v52 - 664, (__int64)sub_3BFB90);
  v33 = *(_QWORD *)v32;
  *((_DWORD *)v32 + 100) = 1066024305;
  (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(v33 + 64))(v32, v11);
  v34 = *(_QWORD *)v32;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, 0.0, 0.5);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v34 + 288))(v32, v35);
  v36 = *(_QWORD *)v32;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, 54.0, 12.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v36 + 184))(v32, v37);
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *, __int64))(*(_QWORD *)a4 + 456LL))(a4, v32, 1);
  v38 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_selectSongBtn_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 160LL))(v38);
  v39 = CCMenuItemSpriteExtra_create((int)v38, 0, v31, (__int64)sub_3BFCE0);
  (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v39 + 64LL))(v39, v11);
  v40 = *(_QWORD *)v39;
  *((_DWORD *)v39 + 93) = 1067869798;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, v14, 12.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v40 + 184))(v39, v41);
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)a4 + 464LL))(a4, v39);
  v42 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteBtn_001.png");
  if ( !v42 )
    v42 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_trashBtn_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v42 + 320LL))(v42);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 320LL))(v38);
  v43 = *(_QWORD *)v42;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 168LL))(v38);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v43 + 160))(v42);
  v44 = CCMenuItemSpriteExtra_create((int)v42, 0, v31, (__int64)sub_3BFDB0);
  (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v44 + 64LL))(v44, v11);
  v45 = *(_QWORD *)v44;
  *((_DWORD *)v44 + 93) = 1067869798;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, v10, 12.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v45 + 184))(v44, v46);
  return (*(__int64 (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)a4 + 464LL))(a4, v44);
}
