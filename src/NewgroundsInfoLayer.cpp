#include <Geode/binding/NewgroundsInfoLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x37dc20
// Method: NewgroundsInfoLayer::onArtists
// Hidden C++ exception states: #wind=1
__int64 __fastcall NewgroundsInfoLayer_onArtists(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 (__fastcall *v3)(__int64); // rdx

  v2 = operator new(0x2C0u); /*0x37dc3c*/
  FLAlertLayer_FLAlertLayer((__int64)v2); /*0x37dc47*/
  *v2 = &ShardsPage::`vftable'; /*0x37dc53*/
  v2[40] = &ShardsPage::`vftable'; /*0x37dc5d*/
  v2[41] = &ShardsPage::`vftable'; /*0x37dc6b*/
  v2[42] = &ShardsPage::`vftable'; /*0x37dc79*/
  v2[43] = &ShardsPage::`vftable'; /*0x37dc87*/
  v2[44] = &ShardsPage::`vftable'; /*0x37dc95*/
  v2[51] = &ShardsPage::`vftable'; /*0x37dca3*/
  v2[54] = &ShardsPage::`vftable'; /*0x37dcb1*/
  v2[68] = &ShardsPage::`vftable'; /*0x37dcbf*/
  v2[83] = 0; /*0x37dcc8*/
  v2[84] = 0; /*0x37dccf*/
  v2[85] = 0; /*0x37dcd6*/
  v2[86] = 0; /*0x37dcdd*/
  *((_DWORD *)v2 + 174) = -1; /*0x37dce4*/
  if ( (unsigned __int8)ShardsPage_init(v2) ) /*0x37dd04*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x37dd14*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x37dd24*/
    v2 = 0; /*0x37dd27*/
  }
  v2[71] = a1; /*0x37dd2a*/
  v3 = *(__int64 (__fastcall **)(__int64))(*v2 + 1064LL); /*0x37dd34*/
  if ( v3 == TopArtistsLayer_show ) /*0x37dd48*/
    return TopArtistsLayer_show((__int64)v2); /*0x37dd59*/
  else
    return v3((__int64)v2); /*0x37dd6d*/
}

// Address: 0x164220
// Method: NewgroundsInfoLayer::init
// Hidden C++ exception states: #wind=4
bool __fastcall NewgroundsInfoLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // eax
  cocos2d::CCObject *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  struct cocos2d::CCLabelBMFont *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  float v28; // xmm7_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  __int64 v31; // rbx
  __int64 v32; // rax
  struct cocos2d::CCLabelBMFont *v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  struct cocos2d::CCLabelBMFont *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  cocos2d::CCObject *v45; // rbx
  cocos2d::CCObject *v46; // r13
  cocos2d::CCObject *v47; // rbx
  cocos2d::CCObject *v48; // r15
  cocos2d::CCObject *v49; // rbx
  cocos2d::CCObject *v50; // rsi
  cocos2d::CCObject *v51; // rbx
  cocos2d::CCObject *v52; // rbx
  __int64 v53; // rcx
  cocos2d::CCArray *v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // eax
  cocos2d::CCObject *v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  _BYTE v64[80]; // [rsp+50h] [rbp-29h] BYREF
  float v65; // [rsp+E8h] [rbp+6Fh] BYREF
  float v66; // [rsp+ECh] [rbp+73h]
  void *v67; // [rsp+F0h] [rbp+77h] BYREF
  char v68; // [rsp+F8h] [rbp+7Fh] BYREF

  result = FLAlertLayer_init(a1, 75);
  if ( result )
  {
    *(_BYTE *)(a1 + 596) = 1;
    v4 = cocos2d::CCDirector::sharedDirector(v3);
    cocos2d::CCDirector::getWinSize(v4, &v65);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v64, 0.0, 0.0, 80.0, 80.0);
    v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square02.png", v5);
    v7 = *v6;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v67, 440.0, 290.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v7 + 312))(v6, v8);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v6,
      0xFFFFFFFFLL);
    v9 = *v6;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v67, v65 * 0.5, v66 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v9 + 184))(v6, v10);
    v11 = cocos2d::CCLabelBMFont::create("Newgrounds", (const char *)&qword_6FFF68);
    v12 = *(_QWORD *)v11;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v67, v65 * 0.5, (float)((float)(v66 * 0.5) + 145.0) - 28.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 184))(v11, v13);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v11);
    v18 = cocos2d::CCMenu::create(v15, v14, v16, v17);
    *(_QWORD *)(a1 + 552) = v18;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v18, 10);
    v19 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    v20 = CCMenuItemSpriteExtra_create(v19, 0, a1, (__int64)UploadPopup_onClose);
    *((_DWORD *)v20 + 93) = 1069547520;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v20);
    v21 = *(_QWORD *)v20;
    v22 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v67,
      (float)((float)(v65 * 0.5) - 220.0) + 10.0,
      (float)((float)(v66 * 0.5) + 145.0) - 10.0);
    cocos2d::CCNode::convertToNodeSpace(v22, &v68, v23);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v21 + 184))(v20, v24);
    v25 = cocos2d::CCLabelBMFont::create("1. Find a song on Newgrounds.com", "goldFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 160LL))(v25);
    v26 = *(_QWORD *)v25;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v67, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v26 + 288))(v25, v27);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v25);
    v28 = v65 * 0.5;
    v29 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 320LL))(v25) * 0.5;
    v30 = (float)(v28
                - (float)((*(float (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 168LL))(v25) * v29))
        - 2.0;
    v31 = *(_QWORD *)v25;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v67, v30, (float)(v66 * 0.5) + 70.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v31 + 184))(v25, v32);
    v33 = cocos2d::CCLabelBMFont::create("2. Save the song ID", "goldFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v33 + 160LL))(v33);
    v34 = *(_QWORD *)v33;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v67, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v34 + 288))(v33, v35);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v33);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v68, 0.0, -30.0);
    v37 = v36;
    v38 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 200LL))(v25);
    cocos2d::CCPoint::operator+(v38, &v67, v37);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v33 + 184LL))(v33, &v67);
    v39 = cocos2d::CCLabelBMFont::create("3. Enter the ID in the search box", "goldFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v39 + 160LL))(v39);
    v40 = *(_QWORD *)v39;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v67, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v40 + 288))(v39, v41);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v39);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v68, 0.0, -30.0);
    v43 = v42;
    v44 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v33 + 200LL))(v33);
    cocos2d::CCPoint::operator+(v44, &v67, v43);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v39 + 184LL))(v39, &v67);
    v67 = operator new(0x2C8u);
    v45 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v67);
    if ( v45 )
    {
      if ( ButtonSprite_init(
             (__int64)v45,
             (__int64)"Artists",
             200,
             0,
             1053609165,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_02.png",
             1103626240) )
      {
        cocos2d::CCObject::autorelease(v45);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v45 + 8LL))(v45, 1);
        LODWORD(v45) = 0;
      }
    }
    v46 = CCMenuItemSpriteExtra_create((int)v45, 0, a1, (__int64)sub_164AE0);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v46);
    *((_DWORD *)v46 + 93) = 1066192077;
    v67 = operator new(0x2C8u);
    v47 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v67);
    if ( v47 )
    {
      if ( ButtonSprite_init(
             (__int64)v47,
             (__int64)"Newgrounds",
             200,
             0,
             1053609165,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_01.png",
             1103626240) )
      {
        cocos2d::CCObject::autorelease(v47);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v47 + 8LL))(v47, 1);
        LODWORD(v47) = 0;
      }
    }
    v48 = CCMenuItemSpriteExtra_create((int)v47, 0, a1, (__int64)sub_164AB0);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v48);
    *((_DWORD *)v48 + 93) = 1066192077;
    v67 = operator new(0x2C8u);
    v49 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v67);
    if ( v49 )
    {
      if ( ButtonSprite_init(
             (__int64)v49,
             (__int64)"Guidelines",
             200,
             0,
             1053609165,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_05.png",
             1103626240) )
      {
        cocos2d::CCObject::autorelease(v49);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v49 + 8LL))(v49, 1);
        LODWORD(v49) = 0;
      }
    }
    v50 = CCMenuItemSpriteExtra_create((int)v49, 0, a1, (__int64)sub_164C50);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v50);
    *((_DWORD *)v50 + 93) = 1066192077;
    v67 = operator new(0x2C8u);
    v51 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v67);
    if ( v51 )
    {
      if ( ButtonSprite_init(
             (__int64)v51,
             (__int64)"Support NG!",
             200,
             0,
             1053609165,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_03.png",
             1103626240) )
      {
        cocos2d::CCObject::autorelease(v51);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v51 + 8LL))(v51, 1);
        LODWORD(v51) = 0;
      }
    }
    v52 = CCMenuItemSpriteExtra_create((int)v51, 0, a1, (__int64)sub_164C20);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v52);
    *((_DWORD *)v52 + 93) = 1066192077;
    v54 = (cocos2d::CCArray *)cocos2d::CCArray::create(v53);
    cocos2d::CCArray::addObject(v54, v46);
    cocos2d::CCArray::addObject(v54, v48);
    cocos2d::CCArray::addObject(v54, v50);
    cocos2d::CCArray::addObject(v54, v52);
    v55 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v67, v65 * 0.5, (float)((float)(v66 * 0.5) - 145.0) + 40.0);
    cocos2d::CCNode::convertToNodeSpace(v55, &v68, v56);
    GameToolbox_alignItemsHorisontally((__int64)v54, 8.0, v57, 0);
    v58 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_helpBtn2_001.png");
    v59 = CCMenuItemSpriteExtra_create(v58, 0, a1, (__int64)sub_164C80);
    *((_DWORD *)v59 + 93) = 1067030938;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v59);
    v60 = *(_QWORD *)v59;
    v61 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v67,
      (float)((float)(v65 * 0.5) + 220.0) - 27.0,
      (float)((float)(v66 * 0.5) + 145.0) - 27.0);
    cocos2d::CCNode::convertToNodeSpace(v61, &v68, v62);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v60 + 184))(v59, v63);
    return 1;
  }
  return result;
}
