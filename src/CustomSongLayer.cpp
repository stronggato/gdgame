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
