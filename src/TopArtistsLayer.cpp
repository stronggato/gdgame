#include <Geode/binding/TopArtistsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x3ef70
// Method: TopArtistsLayer::ownsTouchPrio
char TopArtistsLayer_ownsTouchPrio()
{
  return 1; /*0x3ef72*/
}

// [2/9] Address: 0x45290
// Method: TopArtistsLayer::registerWithTouchDispatcher
void __fastcall TopArtistsLayer_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x4529d*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x452a5*/
  if ( !a1 ) /*0x452af*/
    v3 = 0; /*0x452af*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x452c0*/
  cocos2d::CCTouchDispatcher::addTargetedDelegate(v4, v3, -500, 1); /*0x452dc*/
}

// [3/9] Address: 0x98e20
// Method: TopArtistsLayer::keyBackClicked
__int64 __fastcall TopArtistsLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = a1 - 336; /*0x98e26*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x98e35*/
  LOBYTE(v2) = 1; /*0x98e3e*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v2);
}

// [4/9] Address: 0x9dd50
// Method: TopArtistsLayer::show
__int64 __fastcall TopArtistsLayer_show(__int64 a1)
{
  float v3; // xmm6_4
  const struct cocos2d::CCPoint *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCAction *v9; // rax
  __int64 v10; // rcx
  cocos2d::CCScene *v11; // rbx
  int v12; // eax
  struct cocos2d::CCAction *v13; // rax
  __int64 v14; // rdx
  char v15; // [rsp+50h] [rbp+8h] BYREF
  float v16; // [rsp+54h] [rbp+Ch]
  char v17; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 596) ) /*0x9dd56*/
    return FLAlertLayer_show(a1); /*0x9dd62*/
  v3 = (float)(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 408) + 32LL))(a1 + 408); /*0x9dda3*/
  v4 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 200LL))(*(_QWORD *)(a1 + 584)); /*0x9dda6*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, v4); /*0x9ddb4*/
  v5 = *(__int64 **)(a1 + 584); /*0x9ddba*/
  v6 = *v5; /*0x9ddd4*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, -160.0, v16); /*0x9ddd7*/
  (*(void (__fastcall **)(__int64 *, __int64))(v6 + 184))(v5, v7); /*0x9dde3*/
  v8 = cocos2d::CCMoveTo::create(0.5, (const struct cocos2d::CCPoint *)&v15); /*0x9ddf6*/
  v9 = cocos2d::CCEaseElasticOut::create(v8, 0.60000002); /*0x9de07*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 584), v9); /*0x9de17*/
  v11 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v10) + 272); /*0x9de28*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x9de2f*/
  {
    v11 = *(cocos2d::CCScene **)(a1 + 568); /*0x9de3b*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v11) + 1 >= 105 ) /*0x9de4e*/
      v12 = cocos2d::CCScene::getHighestChildZ(v11) + 1; /*0x9de60*/
    else
      v12 = 105; /*0x9de50*/
    *(_DWORD *)(a1 + 592) = v12; /*0x9de62*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0x9de68*/
    *(_DWORD *)(a1 + 592) = 105; /*0x9de74*/
  (*(void (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v11 + 456LL))(v11, a1); /*0x9de8d*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, 0); /*0x9dea3*/
  v13 = cocos2d::CCFadeTo::create(0.14, (int)v3); /*0x9deb2*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v13); /*0x9debe*/
  LOBYTE(v14) = 1; /*0x9dec7*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, v14); /*0x9dd67*/
}

// [6/9] Address: 0x669990
// Method: TopArtistsLayer::loadListFinished
__int64 __fastcall TopArtistsLayer_loadListFinished(__int64 a1, cocos2d::CCObject *a2)
{
  cocos2d::CCObject *v3; // rcx
  __int64 result; // rax

  if ( a2 ) /*0x669993*/
  {
    v3 = *(cocos2d::CCObject **)(a1 + 8); /*0x6699a7*/
    if ( v3 ) /*0x6699b6*/
    {
      cocos2d::CCObject::release(v3); /*0x6699b8*/
      *(_QWORD *)(a1 + 8) = 0; /*0x6699be*/
    }
    *(_QWORD *)(a1 + 8) = a2; /*0x6699c9*/
    cocos2d::CCObject::retain(a2); /*0x6699cd*/
    sub_669A20(a1 - 664, *(_QWORD *)(a1 + 8)); /*0x6699de*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 0); /*0x6699ec*/
  }
  return result; /*0x669a06*/
}

// [7/9] Address: 0x669a10
// Method: TopArtistsLayer::loadListFailed
__int64 __fastcall TopArtistsLayer_loadListFailed(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 0);
}

// [8/9] Address: 0x669b70
// Method: TopArtistsLayer::setupPageInfo
// Hidden C++ exception states: #wind=2
double __fastcall TopArtistsLayer_setupPageInfo(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // r8
  cocos2d::CCArray *v5; // rsi
  void *v6; // r8
  cocos2d::CCString *v7; // rax
  cocos2d::CCString *v8; // rax
  cocos2d::CCString *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r9d
  int v13; // edx
  int v14; // r8d
  cocos2d::CCString *v15; // rax
  const char *CString; // rax
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __m128i si128; // [rsp+48h] [rbp-20h]

  v2 = a2; /*0x669b8e*/
  if ( a2[3] > 0xFu ) /*0x669b9e*/
    a2 = (_QWORD *)*a2; /*0x669ba0*/
  *(_OWORD *)Block = 0; /*0x669ba6*/
  si128 = 0; /*0x669bae*/
  v4 = -1; /*0x669bb4*/
  do /*0x669bc3*/
    ++v4; /*0x669bc0*/
  while ( *((_BYTE *)a2 + v4) ); /*0x669bc3*/
  sub_3C230(Block); /*0x669bcf*/
  v5 = (cocos2d::CCArray *)sub_20BF00(Block); /*0x669bdf*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x669beb*/
  {
    v6 = Block[0]; /*0x669bf0*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x669bff*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x669c05*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x669c14*/
        invoke_watson(0, 0, 0, 0, 0); /*0x669c29*/
    }
    j_j_free(v6); /*0x669c33*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x669c40*/
  LOBYTE(Block[0]) = 0; /*0x669c46*/
  if ( cocos2d::CCArray::count(v5) >= 3 ) /*0x669c57*/
  {
    v7 = cocos2d::CCArray::objectAtIndex(v5, 0); /*0x669c62*/
    *(_DWORD *)(a1 + 64) = cocos2d::CCString::intValue(v7); /*0x669c71*/
    v8 = cocos2d::CCArray::objectAtIndex(v5, 1u); /*0x669c7c*/
    *(_DWORD *)(a1 + 68) = cocos2d::CCString::intValue(v8); /*0x669c8b*/
    v9 = cocos2d::CCArray::objectAtIndex(v5, 2u); /*0x669c96*/
    *(_DWORD *)(a1 + 72) = cocos2d::CCString::intValue(v9); /*0x669ca5*/
    if ( *(_DWORD *)(a1 + 68) ) /*0x669caf*/
      LOBYTE(v10) = 1; /*0x669cb9*/
    else
      v10 = 0; /*0x669cb5*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 336LL))(*(_QWORD *)(a1 + 40), v10); /*0x669cbb*/
    if ( *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 68) < *(_DWORD *)(a1 + 64) ) /*0x669cd1*/
      LOBYTE(v11) = 1; /*0x669cd7*/
    else
      v11 = 0; /*0x669cd3*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), v11); /*0x669cd9*/
    v12 = *(_DWORD *)(a1 + 64); /*0x669ce0*/
    v13 = *(_DWORD *)(a1 + 68); /*0x669ce4*/
    v14 = v13 + *(_DWORD *)(a1 + 72); /*0x669ceb*/
    if ( v14 >= v12 ) /*0x669cf1*/
      v14 = *(_DWORD *)(a1 + 64); /*0x669cf1*/
    v15 = cocos2d::CCString::createWithFormat("%i to %i of %i", v13 + 1, v14, v12); /*0x669cfe*/
    CString = cocos2d::CCString::getCString(v15); /*0x669d07*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 56) + 360LL))( /*0x669d21*/
      *(_QWORD *)(a1 + 56) + 360LL,
      CString);
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 56), 100.0, 0.5, 0.0); /*0x669d3b*/
  }
  return sub_3C310(v2); /*0x669d4a*/
}

// [9/9] Address: 0x669d70
// Method: TopArtistsLayer::loadPage
// Hidden C++ exception states: #wind=10
void __fastcall TopArtistsLayer_loadPage(__int64 a1, int a2)
{
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  cocos2d::CCString *v7; // rax
  const char *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  void **v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void **v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  void **v19; // rdx
  __int64 v20; // rax
  void **v21; // r8
  void **v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // [rsp+30h] [rbp-29h]
  void *v28; // [rsp+30h] [rbp-29h]
  void *v29; // [rsp+30h] [rbp-29h]
  void *v30; // [rsp+30h] [rbp-29h]
  void *v31; // [rsp+30h] [rbp-29h]
  void *v32; // [rsp+30h] [rbp-29h]
  void *v33; // [rsp+30h] [rbp-29h]
  __int128 v34; // [rsp+38h] [rbp-21h] BYREF
  __int64 v35; // [rsp+48h] [rbp-11h]
  __int64 v36; // [rsp+50h] [rbp-9h]
  void *v37[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v38; // [rsp+68h] [rbp+Fh]
  unsigned __int64 v39; // [rsp+70h] [rbp+17h]
  void *Block[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v41; // [rsp+88h] [rbp+2Fh]
  unsigned __int64 v42; // [rsp+90h] [rbp+37h]

  *(_DWORD *)(a1 + 744) = a2; /*0x669d9b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x669da9*/
  {
    v27 = operator new(0x690u); /*0x669db5*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v27); /*0x669dc2*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x669dd3*/
  }
  v3 = cocos2d::CCString::createWithFormat("topArtists_%i", *(_DWORD *)(a1 + 744)); /*0x669de2*/
  CString = cocos2d::CCString::getCString(v3); /*0x669deb*/
  *(_OWORD *)v37 = 0; /*0x669df4*/
  v38 = 0; /*0x669dfb*/
  v39 = 0; /*0x669dff*/
  v5 = -1; /*0x669e03*/
  v6 = -1; /*0x669e0a*/
  do /*0x669e13*/
    ++v6; /*0x669e10*/
  while ( CString[v6] ); /*0x669e13*/
  sub_3C230(v37); /*0x669e20*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x669e2e*/
  {
    v28 = operator new(0x690u); /*0x669e3a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v28); /*0x669e47*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x669e54*/
  }
  v7 = cocos2d::CCString::createWithFormat("topArtists_%i", *(_DWORD *)(a1 + 744) + 1); /*0x669e66*/
  v8 = cocos2d::CCString::getCString(v7); /*0x669e6f*/
  *(_OWORD *)Block = 0; /*0x669e78*/
  v41 = 0; /*0x669e7c*/
  v42 = 0; /*0x669e80*/
  v9 = -1; /*0x669e84*/
  do /*0x669e93*/
    ++v9; /*0x669e90*/
  while ( v8[v9] ); /*0x669e93*/
  sub_3C230(Block); /*0x669ea1*/
  LOBYTE(v10) = 1; /*0x669eb1*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), v10); /*0x669eb3*/
  if ( *(int *)(a1 + 744) <= 0 ) /*0x669eca*/
    v11 = 0; /*0x669ed0*/
  else
    LOBYTE(v11) = 1; /*0x669ecc*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 704) + 336LL))(*(_QWORD *)(a1 + 704), v11); /*0x669ed2*/
  v12 = Block; /*0x669ed8*/
  if ( v42 > 0xF ) /*0x669ee1*/
    v12 = (void **)Block[0]; /*0x669ee1*/
  v13 = *(_QWORD *)&qword_905FB0; /*0x669ee6*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x669ef0*/
  {
    v29 = operator new(0x690u); /*0x669efc*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v29); /*0x669f09*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x669f1a*/
    v13 = *(_QWORD *)&qword_905FB0; /*0x669f1d*/
  }
  if ( sub_21E690(v13, v12) ) /*0x669f27*/
    LOBYTE(v14) = 1; /*0x669f3b*/
  else
    v14 = 0; /*0x669f3f*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), v14); /*0x669f41*/
  v15 = *(_QWORD *)&qword_905FB0; /*0x669f47*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x669f51*/
  {
    v30 = operator new(0x690u); /*0x669f5d*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v30); /*0x669f6a*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x669f7b*/
    v15 = *(_QWORD *)&qword_905FB0; /*0x669f7d*/
  }
  v16 = v37; /*0x669f84*/
  if ( v39 > 0xF ) /*0x669f8d*/
    v16 = (void **)v37[0]; /*0x669f8d*/
  v17 = sub_21E690(v15, v16); /*0x669f97*/
  v18 = *(_QWORD *)&qword_905FB0; /*0x669f9a*/
  if ( v17 ) /*0x669fa4*/
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x669fad*/
    {
      v31 = operator new(0x690u); /*0x669fb9*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v31); /*0x669fc6*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x669fd7*/
      v18 = *(_QWORD *)&qword_905FB0; /*0x669fd9*/
    }
    v19 = v37; /*0x669fe0*/
    if ( v39 > 0xF ) /*0x669fe9*/
      v19 = (void **)v37[0]; /*0x669fe9*/
    v20 = sub_21E790(v18, v19); /*0x669fee*/
    v34 = 0; /*0x669ff6*/
    v35 = 0; /*0x669ffa*/
    v36 = 0; /*0x669ffe*/
    do /*0x66a005*/
      ++v5; /*0x66a002*/
    while ( *(_BYTE *)(v20 + v5) ); /*0x66a005*/
    sub_3C230(&v34); /*0x66a015*/
    v21 = v37; /*0x66a01a*/
    if ( v39 > 0xF ) /*0x66a023*/
      v21 = (void **)v37[0]; /*0x66a023*/
    (*(void (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)(a1 + 664) + 16LL))(a1 + 664, &v34, v21); /*0x66a03a*/
    v22 = v37; /*0x66a03d*/
    if ( v39 > 0xF ) /*0x66a046*/
      v22 = (void **)v37[0]; /*0x66a046*/
    (**(void (__fastcall ***)(__int64, __int64, void **))(a1 + 664))(a1 + 664, v17, v22); /*0x66a05c*/
  }
  else
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x66a066*/
    {
      v32 = operator new(0x690u); /*0x66a072*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v32); /*0x66a07f*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x66a090*/
      v18 = *(_QWORD *)&qword_905FB0; /*0x66a092*/
    }
    GameLevelManager_makeTimeStamp(v18, (__int64)"upd_artists"); /*0x66a0a0*/
    LOBYTE(v23) = 1; /*0x66a0af*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), v23); /*0x66a0b1*/
    sub_669A20(a1, 0); /*0x66a0bc*/
    v24 = *(_QWORD *)&qword_905FB0; /*0x66a0c8*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x66a0d2*/
    {
      v33 = operator new(0x690u); /*0x66a0de*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v33); /*0x66a0eb*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x66a0fc*/
      v24 = *(_QWORD *)&qword_905FB0; /*0x66a0fe*/
    }
    *(_QWORD *)(v24 + 1584) = a1 + 664; /*0x66a105*/
    GameLevelManager_getTopArtists(v24, *(_DWORD *)(a1 + 744), *(_DWORD *)(a1 + 728)); /*0x66a119*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 720) + 360LL))( /*0x66a136*/
      *(_QWORD *)(a1 + 720) + 360LL,
      " ");
  }
  if ( v42 > 0xF ) /*0x66a141*/
  {
    v25 = Block[0]; /*0x66a146*/
    if ( v42 + 1 >= 0x1000 ) /*0x66a154*/
    {
      v25 = (void *)*((_QWORD *)Block[0] - 1); /*0x66a15a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F ) /*0x66a169*/
        invoke_watson(0, 0, 0, 0, 0); /*0x66a17a*/
    }
    j_j_free(v25); /*0x66a181*/
  }
  if ( v39 > 0xF ) /*0x66a18f*/
  {
    v26 = v37[0]; /*0x66a194*/
    if ( v39 + 1 >= 0x1000 ) /*0x66a1a2*/
    {
      v26 = (void *)*((_QWORD *)v37[0] - 1); /*0x66a1a8*/
      if ( (unsigned __int64)((char *)v37[0] - (char *)v26 - 8) > 0x1F ) /*0x66a1b7*/
        invoke_watson(0, 0, 0, 0, 0); /*0x66a1c8*/
    }
    j_j_free(v26); /*0x66a1cf*/
  }
}
