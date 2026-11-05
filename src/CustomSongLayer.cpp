#include <Geode/binding/CustomSongLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x161500
// Method: CustomSongLayer::~CustomSongLayer
_QWORD *__fastcall CustomSongLayer__dtor_CustomSongLayer(_QWORD *Block, char a2)
{
  *Block = &CustomSongLayer::`vftable'; /*0x161513*/
  Block[40] = &CustomSongLayer::`vftable'; /*0x161520*/
  Block[41] = &CustomSongLayer::`vftable'; /*0x16152e*/
  Block[42] = &CustomSongLayer::`vftable'; /*0x16153c*/
  Block[43] = &CustomSongLayer::`vftable'; /*0x16154a*/
  Block[44] = &CustomSongLayer::`vftable'; /*0x161558*/
  Block[51] = &CustomSongLayer::`vftable'; /*0x161566*/
  Block[54] = &CustomSongLayer::`vftable'; /*0x161574*/
  Block[68] = &CustomSongLayer::`vftable'; /*0x161582*/
  Block[83] = &CustomSongLayer::`vftable'; /*0x161590*/
  Block[84] = &CustomSongLayer::`vftable'; /*0x16159e*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x1615a5*/
  if ( (a2 & 1) != 0 ) /*0x1615ad*/
    j_j_free(Block); /*0x1615b7*/
  return Block; /*0x1615bc*/
}

// [2/9] Address: 0x1629e0
// Method: CustomSongLayer::onSongBrowser
__int64 __fastcall CustomSongLayer_onSongBrowser(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  cocos2d::CCScene *v5; // rdi
  __int64 v6; // rbx
  int HighestChildZ; // eax

  v3 = (_QWORD *)GJSongBrowser_create(); /*0x1629f7*/
  v4 = a1 + 664; /*0x1629fa*/
  if ( !a1 ) /*0x162a06*/
    v4 = 0; /*0x162a06*/
  v3[74] = v4; /*0x162a0a*/
  v5 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v2) + 272); /*0x162a17*/
  v6 = *(_QWORD *)v5; /*0x162a21*/
  HighestChildZ = cocos2d::CCScene::getHighestChildZ(v5); /*0x162a24*/
  (*(void (__fastcall **)(cocos2d::CCScene *, _QWORD *, _QWORD))(v6 + 456))(v5, v3, (unsigned int)(HighestChildZ + 1)); /*0x162a34*/
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v3 + 1080LL))(v3, 0);
}

// [3/9] Address: 0x162a60
// Method: CustomSongLayer::onMusicBrowser
__int64 __fastcall CustomSongLayer_onMusicBrowser(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  _QWORD *v4; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 680); /*0x162a6f*/
  if ( v2 ) /*0x162a79*/
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2); /*0x162a7e*/
  else
    v3 = 0; /*0x162a83*/
  v4 = MusicBrowser_create(v3, 0xFFFFFFFF); /*0x162a8c*/
  v5 = a1 + 672; /*0x162a94*/
  if ( !a1 ) /*0x162a9b*/
    v5 = 0; /*0x162a9b*/
  v4[110] = v5; /*0x162a9f*/
  return (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 1064LL))(v4); /*0x162ab3*/
}

// [4/9] Address: 0x162dc0
// Method: CustomSongLayer::dropDownLayerWillClose
void __fastcall CustomSongLayer_dropDownLayerWillClose(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  cocos2d::CCObject *v6; // rdi
  __int64 v7; // rcx
  cocos2d::CCObject *v8; // rax
  cocos2d::CCObject *v9; // rcx
  int v10; // ecx

  if ( *(_BYTE *)(a2 + 632) ) /*0x162dc6*/
  {
    (***(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 628)); /*0x162de8*/
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 8LL))(*(_QWORD *)(a1 + 16)); /*0x162df1*/
    v4 = SongInfoObject_create_0(v3); /*0x162df6*/
    v5 = *(_QWORD *)(a1 + 32); /*0x162dfb*/
    v6 = (cocos2d::CCObject *)v4; /*0x162dff*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 376) + 336LL))(*(_QWORD *)(v5 + 376), 0); /*0x162e15*/
    v7 = *(_QWORD *)(v5 + 480); /*0x162e18*/
    if ( v7 ) /*0x162e22*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 336LL))(v7, 0); /*0x162e30*/
    v8 = *(cocos2d::CCObject **)(v5 + 336); /*0x162e32*/
    if ( v8 != v6 ) /*0x162e3c*/
    {
      if ( v6 ) /*0x162e41*/
        cocos2d::CCObject::retain(v6); /*0x162e46*/
      v9 = *(cocos2d::CCObject **)(v5 + 336); /*0x162e4c*/
      if ( v9 ) /*0x162e56*/
        cocos2d::CCObject::release(v9); /*0x162e58*/
      *(_QWORD *)(v5 + 336) = v6; /*0x162e5e*/
      v8 = v6; /*0x162e65*/
    }
    if ( v8 ) /*0x162e70*/
      v10 = *((_DWORD *)v8 + 80); /*0x162e72*/
    else
      v10 = 0; /*0x162e7a*/
    *(_DWORD *)(v5 + 504) = v10; /*0x162e7c*/
    CustomSongWidget_updateSongInfo(v5); /*0x162e8a*/
  }
}

// [5/9] Address: 0x162ea0
// Method: CustomSongLayer::musicBrowserClosed
void __fastcall CustomSongLayer_musicBrowserClosed(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  cocos2d::CCObject *v6; // rdi
  __int64 v7; // rcx
  cocos2d::CCObject *v8; // rax
  cocos2d::CCObject *v9; // rcx
  int v10; // ecx

  if ( *(_BYTE *)(a2 + 873) ) /*0x162ea6*/
  {
    (***(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 8))(*(_QWORD *)(a1 + 8), *(unsigned int *)(a2 + 864)); /*0x162ec8*/
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8)); /*0x162ed1*/
    v4 = SongInfoObject_create_0(v3); /*0x162ed6*/
    v5 = *(_QWORD *)(a1 + 24); /*0x162edb*/
    v6 = (cocos2d::CCObject *)v4; /*0x162edf*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 376) + 336LL))(*(_QWORD *)(v5 + 376), 0); /*0x162ef5*/
    v7 = *(_QWORD *)(v5 + 480); /*0x162ef8*/
    if ( v7 ) /*0x162f02*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 336LL))(v7, 0); /*0x162f10*/
    v8 = *(cocos2d::CCObject **)(v5 + 336); /*0x162f12*/
    if ( v8 != v6 ) /*0x162f1c*/
    {
      if ( v6 ) /*0x162f21*/
        cocos2d::CCObject::retain(v6); /*0x162f26*/
      v9 = *(cocos2d::CCObject **)(v5 + 336); /*0x162f2c*/
      if ( v9 ) /*0x162f36*/
        cocos2d::CCObject::release(v9); /*0x162f38*/
      *(_QWORD *)(v5 + 336) = v6; /*0x162f3e*/
      v8 = v6; /*0x162f45*/
    }
    if ( v8 ) /*0x162f50*/
      v10 = *((_DWORD *)v8 + 80); /*0x162f52*/
    else
      v10 = 0; /*0x162f5a*/
    *(_DWORD *)(v5 + 504) = v10; /*0x162f5c*/
    CustomSongWidget_updateSongInfo(v5); /*0x162f6a*/
  }
}

// [6/9] Address: 0x162f80
// Method: CustomSongLayer::onClose
// Hidden C++ exception states: #wind=2
__int64 __fastcall CustomSongLayer_onClose(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h]

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 704); /*0x162f8d*/
  if ( v2 ) /*0x162f97*/
    (**v2)(v2); /*0x162f9c*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 688) + 1032LL))(*(_QWORD *)(a1 + 688), 0); /*0x162faa*/
  v3 = qword_905F60; /*0x162fb0*/
  if ( !qword_905F60 ) /*0x162fba*/
  {
    v7 = operator new(0x8A8u); /*0x162fc6*/
    qword_905F60 = sub_5AE20(v7); /*0x162fd4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x162fe5*/
    v3 = qword_905F60; /*0x162fe7*/
  }
  v4 = *(_QWORD *)(v3 + 552); /*0x162fee*/
  if ( v4 ) /*0x162ff8*/
    FMOD::ChannelControl::stop(v4); /*0x162ffa*/
  sub_3DB60(v3 + 1096); /*0x163007*/
  sub_3DB60(v3 + 1160); /*0x163013*/
  sub_3DB60(v3 + 1224); /*0x16301f*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x16302c*/
  LOBYTE(v5) = 1; /*0x163035*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v5);
}

// [7/9] Address: 0x163050
// Method: CustomSongLayer::keyBackClicked
__int64 __fastcall CustomSongLayer_keyBackClicked(__int64 a1)
{
  return CustomSongLayer_onClose(a1 - 336);
}

// [8/9] Address: 0x163060
// Method: CustomSongLayer::show
__int64 __fastcall CustomSongLayer_show(__int64 a1)
{
  unsigned __int8 v2; // al
  float v3; // xmm6_4
  struct cocos2d::CCActionInterval *v4; // rax
  struct cocos2d::CCAction *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct cocos2d::CCAction *v8; // rax
  __int64 v9; // rdx

  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 408) + 32LL))(a1 + 408); /*0x163080*/
  v3 = (float)v2; /*0x16309c*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 160LL))(*(_QWORD *)(a1 + 584)); /*0x16309f*/
  v4 = cocos2d::CCScaleTo::create(0.30000001, 1.0); /*0x1630b5*/
  v5 = cocos2d::CCEaseElasticOut::create(v4, 1.6); /*0x1630c6*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 584), v5); /*0x1630d6*/
  v7 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v6) + 272); /*0x1630e9*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x1630f0*/
    v7 = *(_QWORD *)(a1 + 568); /*0x1630fa*/
  if ( !*(_DWORD *)(a1 + 592) ) /*0x1630e2*/
    *(_DWORD *)(a1 + 592) = 105; /*0x163109*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 456LL))(v7, a1); /*0x163116*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, 0); /*0x16312c*/
  v8 = cocos2d::CCFadeTo::create(0.14, (int)v3); /*0x16313b*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v8); /*0x163147*/
  LOBYTE(v9) = 1; /*0x163150*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, v9);
}

// Address: 0x39d350
// Method: CustomSongLayer::init
// Hidden C++ exception states: #wind=2
char __fastcall CustomSongLayer_init(cocos2d::CCLayerColor *a1, __int64 a2, _QWORD *a3)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // r8
  const struct cocos2d::CCPoint *v25; // rax
  char *v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  cocos2d::CCLayerColor *v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  struct cocos2d::CCSprite *v34; // rax
  cocos2d::CCObject *v35; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  float v41; // [rsp+40h] [rbp-39h] BYREF
  float v42; // [rsp+44h] [rbp-35h]
  __int128 *v43; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v44[16]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v45; // [rsp+60h] [rbp-19h] BYREF
  __int64 v46; // [rsp+70h] [rbp-9h]
  __int64 v47; // [rsp+78h] [rbp-1h]
  _QWORD *v48; // [rsp+80h] [rbp+7h]

  v48 = a3;
  LODWORD(v43) = -1778384896;
  if ( cocos2d::CCLayerColor::initWithColor(a1, (const struct cocos2d::_ccColor4B *)&v43) )
  {
    sub_5ABA0(a1);
    *((_QWORD *)a1 + 83) = a2;
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 920LL))(a1, v7);
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 992LL))(a1, v8);
    v10 = cocos2d::CCDirector::sharedDirector(v9);
    cocos2d::CCDirector::getWinSize(v10, &v41);
    v11 = cocos2d::CCLayer::create();
    *((_QWORD *)a1 + 73) = v11;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 464LL))(a1, v11);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v44, 0.0, 0.0, 80.0, 80.0);
    v13 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square02.png", v12);
    v14 = *v13;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v43, 200.0, 100.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 312))(v13, v15);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**((_QWORD **)a1 + 73) + 456LL))(
      *((_QWORD *)a1 + 73),
      v13,
      0xFFFFFFFFLL);
    v16 = *v13;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v43, v41 * 0.5, v42 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v16 + 184))(v13, v17);
    v22 = cocos2d::CCMenu::create(v19, v18, v20, v21);
    *((_QWORD *)a1 + 69) = v22;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)a1 + 73) + 456LL))(*((_QWORD *)a1 + 73), v22, 10);
    v43 = &v45;
    v23 = a3;
    if ( a3[3] > 0xFu )
      v23 = (_QWORD *)*a3;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v24 = -1;
    do
      ++v24;
    while ( *((_BYTE *)v23 + v24) );
    sub_3C230(&v45);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v44, 0.5, 1.0);
    v26 = TextArea_create((__int64)&v45, "chatFont.fnt", 1.0, 400.0, v25, 1101004800, 0, 0);
    *((_QWORD *)a1 + 84) = v26;
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)a1 + 73) + 464LL))(*((_QWORD *)a1 + 73), v26);
    v27 = (__int64 *)*((_QWORD *)a1 + 84);
    v28 = *v27;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v44, v41 * 0.5, (float)(v42 * 0.5) - 20.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v28 + 184))(v27, v29);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 84) + 160LL))(*((_QWORD *)a1 + 84));
    *((_DWORD *)a1 + 160) = -1;
    v30 = LoadingCircle_create();
    *((_QWORD *)a1 + 85) = v30;
    *((_QWORD *)v30 + 69) = *((_QWORD *)a1 + 73);
    *(_BYTE *)(*((_QWORD *)a1 + 85) + 560LL) = 0;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 85) + 160LL))(*((_QWORD *)a1 + 85));
    LoadingCircle_show(*((_QWORD *)a1 + 85));
    v31 = *(__int64 **)(*((_QWORD *)a1 + 85) + 544LL);
    v32 = *v31;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v44, v41 * 0.5, (float)(v42 * 0.5) + 14.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v32 + 184))(v31, v33);
    v34 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    LODWORD(v32) = (_DWORD)v34;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v34 + 160LL))(v34);
    v35 = CCMenuItemSpriteExtra_create(v32, 0, (int)a1, (__int64)UploadActionPopup_onClose);
    *((_QWORD *)a1 + 86) = v35;
    *((_DWORD *)v35 + 93) = 1070386381;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 69) + 464LL))(
      *((_QWORD *)a1 + 69),
      *((_QWORD *)a1 + 86));
    v36 = (__int64 *)*((_QWORD *)a1 + 86);
    v37 = *v36;
    v38 = *((_QWORD *)a1 + 69);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v44,
      (float)((float)(v41 * 0.5) - 100.0) + 5.0,
      (float)((float)(v42 * 0.5) + 50.0) - 5.0);
    cocos2d::CCNode::convertToNodeSpace(v38, &v43, v39);
    (*(void (__fastcall **)(__int64 *, __int64))(v37 + 184))(v36, v40);
    sub_3C310(a3);
    return 1;
  }
  else
  {
    sub_3C310(a3);
    return 0;
  }
}
