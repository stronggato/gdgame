#include <Geode/binding/StatsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x6644b0
// Method: StatsLayer::~StatsLayer
struct cocos2d::CCObject *__fastcall StatsLayer__dtor_StatsLayer(struct cocos2d::CCObject *Block, char a2)
{
  *(_QWORD *)Block = &StatsLayer::`vftable'; /*0x6644c3*/
  *((_QWORD *)Block + 40) = &StatsLayer::`vftable'; /*0x6644d0*/
  *((_QWORD *)Block + 41) = &StatsLayer::`vftable'; /*0x6644de*/
  *((_QWORD *)Block + 42) = &StatsLayer::`vftable'; /*0x6644ec*/
  *((_QWORD *)Block + 43) = &StatsLayer::`vftable'; /*0x6644fa*/
  *((_QWORD *)Block + 44) = &StatsLayer::`vftable'; /*0x664508*/
  *((_QWORD *)Block + 51) = &StatsLayer::`vftable'; /*0x664516*/
  *((_QWORD *)Block + 54) = &StatsLayer::`vftable'; /*0x664524*/
  GJDropDownLayer__dtor_GJDropDownLayer(Block); /*0x66452b*/
  if ( (a2 & 1) != 0 ) /*0x664533*/
    j_j_free(Block); /*0x66453d*/
  return Block; /*0x664542*/
}

// [2/2] Address: 0x664550
// Method: StatsLayer::customSetup
// Hidden C++ exception states: #wind=19
__int64 __fastcall StatsLayer_customSetup(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  cocos2d::CCArray *v4; // rbx
  __int64 v5; // rcx
  int Stat; // eax
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  struct cocos2d::CCObject *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  struct cocos2d::CCObject *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  struct cocos2d::CCObject *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  struct cocos2d::CCObject *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  struct cocos2d::CCObject *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  struct cocos2d::CCObject *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  struct cocos2d::CCObject *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  struct cocos2d::CCObject *v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  struct cocos2d::CCObject *v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  struct cocos2d::CCObject *v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  struct cocos2d::CCObject *v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  struct cocos2d::CCObject *v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  struct cocos2d::CCObject *v46; // rax
  __int64 v47; // rcx
  int v48; // eax
  struct cocos2d::CCObject *v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  struct cocos2d::CCObject *v52; // rax
  __int64 v53; // rcx
  int v54; // eax
  struct cocos2d::CCObject *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // eax
  struct cocos2d::CCObject *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v63; // [rsp+20h] [rbp-20h]
  void *v64; // [rsp+50h] [rbp+10h] BYREF
  char v65; // [rsp+58h] [rbp+18h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x664565*/
  cocos2d::CCDirector::getWinSize(v2, &v65); /*0x664572*/
  v4 = (cocos2d::CCArray *)cocos2d::CCArray::create(v3); /*0x66457e*/
  v5 = qword_905FE0; /*0x664581*/
  if ( !qword_905FE0 ) /*0x66458b*/
  {
    v64 = operator new(0x3E8u); /*0x664597*/
    qword_905FE0 = sub_2D2B40(v64); /*0x6645a4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x6645b5*/
    v5 = qword_905FE0; /*0x6645b7*/
  }
  Stat = GameStatsManager_getStat(v5, (const char *)&word_708050); /*0x6645c5*/
  v7 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_708050, Stat); /*0x6645d3*/
  cocos2d::CCArray::addObject(v4, v7); /*0x6645de*/
  v8 = qword_905FE0; /*0x6645e4*/
  if ( !qword_905FE0 ) /*0x6645ee*/
  {
    v64 = operator new(0x3E8u); /*0x6645fa*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664607*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664618*/
    v8 = qword_905FE0; /*0x66461a*/
  }
  v9 = GameStatsManager_getStat(v8, (const char *)&word_708048); /*0x664628*/
  v10 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_708048, v9); /*0x664636*/
  cocos2d::CCArray::addObject(v4, v10); /*0x664641*/
  v11 = qword_905FE0; /*0x664647*/
  if ( !qword_905FE0 ) /*0x664651*/
  {
    v64 = operator new(0x3E8u); /*0x66465d*/
    qword_905FE0 = sub_2D2B40(v64); /*0x66466a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x66467b*/
    v11 = qword_905FE0; /*0x66467d*/
  }
  v12 = GameStatsManager_getStat(v11, "6"); /*0x66468b*/
  v13 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"6", v12); /*0x664699*/
  cocos2d::CCArray::addObject(v4, v13); /*0x6646a4*/
  v14 = qword_905FE0; /*0x6646aa*/
  if ( !qword_905FE0 ) /*0x6646b4*/
  {
    v64 = operator new(0x3E8u); /*0x6646c0*/
    qword_905FE0 = sub_2D2B40(v64); /*0x6646cd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x6646de*/
    v14 = qword_905FE0; /*0x6646e0*/
  }
  v15 = GameStatsManager_getStat(v14, "13"); /*0x6646ee*/
  v16 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"13", v15); /*0x6646fc*/
  cocos2d::CCArray::addObject(v4, v16); /*0x664707*/
  v17 = qword_905FE0; /*0x66470d*/
  if ( !qword_905FE0 ) /*0x664717*/
  {
    v64 = operator new(0x3E8u); /*0x664723*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664730*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664741*/
    v17 = qword_905FE0; /*0x664743*/
  }
  v18 = GameStatsManager_getStat(v17, "22"); /*0x664751*/
  v19 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_732AF4, v18); /*0x66475f*/
  cocos2d::CCArray::addObject(v4, v19); /*0x66476a*/
  v20 = qword_905FE0; /*0x664770*/
  if ( !qword_905FE0 ) /*0x66477a*/
  {
    v64 = operator new(0x3E8u); /*0x664786*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664793*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x6647a4*/
    v20 = qword_905FE0; /*0x6647a6*/
  }
  v21 = GameStatsManager_getStat(v20, (const char *)&word_708044); /*0x6647b4*/
  v22 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_708044, v21); /*0x6647c2*/
  cocos2d::CCArray::addObject(v4, v22); /*0x6647cd*/
  v23 = qword_905FE0; /*0x6647d3*/
  if ( !qword_905FE0 ) /*0x6647dd*/
  {
    v64 = operator new(0x3E8u); /*0x6647e9*/
    qword_905FE0 = sub_2D2B40(v64); /*0x6647f6*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664807*/
    v23 = qword_905FE0; /*0x664809*/
  }
  v24 = GameStatsManager_getStat(v23, (const char *)&word_70803C); /*0x664817*/
  v25 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_70803C, v24); /*0x664825*/
  cocos2d::CCArray::addObject(v4, v25); /*0x664830*/
  v26 = qword_905FE0; /*0x664836*/
  if ( !qword_905FE0 ) /*0x664840*/
  {
    v64 = operator new(0x3E8u); /*0x66484c*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664859*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x66486a*/
    v26 = qword_905FE0; /*0x66486c*/
  }
  v27 = GameStatsManager_getStat(v26, "42"); /*0x66487a*/
  v28 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"42", v27); /*0x664888*/
  cocos2d::CCArray::addObject(v4, v28); /*0x664893*/
  v29 = qword_905FE0; /*0x664899*/
  if ( !qword_905FE0 ) /*0x6648a3*/
  {
    v64 = operator new(0x3E8u); /*0x6648af*/
    qword_905FE0 = sub_2D2B40(v64); /*0x6648bc*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x6648cd*/
    v29 = qword_905FE0; /*0x6648cf*/
  }
  v30 = GameStatsManager_getStat(v29, (const char *)&word_708038); /*0x6648dd*/
  v31 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_708038, v30); /*0x6648eb*/
  cocos2d::CCArray::addObject(v4, v31); /*0x6648f6*/
  v32 = qword_905FE0; /*0x6648fc*/
  if ( !qword_905FE0 ) /*0x664906*/
  {
    v64 = operator new(0x3E8u); /*0x664912*/
    qword_905FE0 = sub_2D2B40(v64); /*0x66491f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664930*/
    v32 = qword_905FE0; /*0x664932*/
  }
  v33 = GameStatsManager_getStat(v32, "15"); /*0x664940*/
  v34 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"15", v33); /*0x66494e*/
  cocos2d::CCArray::addObject(v4, v34); /*0x664959*/
  v35 = qword_905FE0; /*0x66495f*/
  if ( !qword_905FE0 ) /*0x664969*/
  {
    v64 = operator new(0x3E8u); /*0x664975*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664982*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664993*/
    v35 = qword_905FE0; /*0x664995*/
  }
  v36 = GameStatsManager_getStat(v35, (const char *)&word_708028); /*0x6649a3*/
  v37 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_708028, v36); /*0x6649b1*/
  cocos2d::CCArray::addObject(v4, v37); /*0x6649bc*/
  v38 = qword_905FE0; /*0x6649c2*/
  if ( !qword_905FE0 ) /*0x6649cc*/
  {
    v64 = operator new(0x3E8u); /*0x6649d8*/
    qword_905FE0 = sub_2D2B40(v64); /*0x6649e5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x6649f6*/
    v38 = qword_905FE0; /*0x6649f8*/
  }
  v39 = GameStatsManager_getStat(v38, (const char *)&word_7231BC); /*0x664a06*/
  v40 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_7231BC, v39); /*0x664a14*/
  cocos2d::CCArray::addObject(v4, v40); /*0x664a1f*/
  v41 = qword_905FE0; /*0x664a25*/
  if ( !qword_905FE0 ) /*0x664a2f*/
  {
    v64 = operator new(0x3E8u); /*0x664a3b*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664a48*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664a59*/
    v41 = qword_905FE0; /*0x664a5b*/
  }
  v42 = GameStatsManager_getStat(v41, (const char *)&word_708030); /*0x664a69*/
  v43 = (struct cocos2d::CCObject *)StatsObject_create((__int64)&word_708030, v42); /*0x664a77*/
  cocos2d::CCArray::addObject(v4, v43); /*0x664a82*/
  v44 = qword_905FE0; /*0x664a88*/
  if ( !qword_905FE0 ) /*0x664a92*/
  {
    v64 = operator new(0x3E8u); /*0x664a9e*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664aab*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664abc*/
    v44 = qword_905FE0; /*0x664abe*/
  }
  v45 = GameStatsManager_getStat(v44, "40"); /*0x664acc*/
  v46 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"40", v45); /*0x664ada*/
  cocos2d::CCArray::addObject(v4, v46); /*0x664ae5*/
  v47 = qword_905FE0; /*0x664aeb*/
  if ( !qword_905FE0 ) /*0x664af5*/
  {
    v64 = operator new(0x3E8u); /*0x664b01*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664b0e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664b1f*/
    v47 = qword_905FE0; /*0x664b21*/
  }
  v48 = GameStatsManager_getStat(v47, "10"); /*0x664b2f*/
  v49 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"10", v48); /*0x664b3d*/
  cocos2d::CCArray::addObject(v4, v49); /*0x664b48*/
  v50 = qword_905FE0; /*0x664b4e*/
  if ( !qword_905FE0 ) /*0x664b58*/
  {
    v64 = operator new(0x3E8u); /*0x664b64*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664b71*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664b82*/
    v50 = qword_905FE0; /*0x664b84*/
  }
  v51 = GameStatsManager_getStat(v50, "11"); /*0x664b92*/
  v52 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"11", v51); /*0x664ba0*/
  cocos2d::CCArray::addObject(v4, v52); /*0x664bab*/
  v53 = qword_905FE0; /*0x664bb1*/
  if ( !qword_905FE0 ) /*0x664bbb*/
  {
    v64 = operator new(0x3E8u); /*0x664bc7*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664bd4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664be5*/
    v53 = qword_905FE0; /*0x664be7*/
  }
  v54 = GameStatsManager_getStat(v53, "41"); /*0x664bf5*/
  v55 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"41", v54); /*0x664c03*/
  cocos2d::CCArray::addObject(v4, v55); /*0x664c0e*/
  v56 = qword_905FE0; /*0x664c14*/
  if ( !qword_905FE0 ) /*0x664c1e*/
  {
    v64 = operator new(0x3E8u); /*0x664c2a*/
    qword_905FE0 = sub_2D2B40(v64); /*0x664c37*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664c48*/
    v56 = qword_905FE0; /*0x664c4a*/
  }
  if ( (int)GameStatsManager_getStat(v56, "9") > 0 ) /*0x664c5f*/
  {
    v57 = qword_905FE0; /*0x664c61*/
    if ( !qword_905FE0 ) /*0x664c6b*/
    {
      v64 = operator new(0x3E8u); /*0x664c77*/
      qword_905FE0 = sub_2D2B40(v64); /*0x664c84*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x664c91*/
      v57 = qword_905FE0; /*0x664c94*/
    }
    v58 = GameStatsManager_getStat(v57, "9"); /*0x664ca2*/
    v59 = (struct cocos2d::CCObject *)StatsObject_create((__int64)"9", v58); /*0x664cb0*/
    cocos2d::CCArray::addObject(v4, v59); /*0x664cbb*/
  }
  v60 = CustomListView_create(v4, 0, 220.0, 356.0, v63, 2); /*0x664ce7*/
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 568) + 456LL))(*(_QWORD *)(a1 + 568), v60, 6); /*0x664d06*/
  LOWORD(v64) = 29375; /*0x664d13*/
  BYTE2(v64) = 62; /*0x664d17*/
  (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 568) + 408LL))(*(_QWORD *)(a1 + 568) + 408LL, &v64); /*0x664d30*/
  LOBYTE(v61) = -1; /*0x664d43*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 568) + 408LL) + 40LL))( /*0x664d48*/
           *(_QWORD *)(a1 + 568) + 408LL,
           v61);
}
