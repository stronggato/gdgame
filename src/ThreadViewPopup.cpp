#include <Geode/binding/ThreadViewPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/28] Address: 0xc1b30
// Method: ThreadViewPopup::show
__int64 __fastcall ThreadViewPopup_show(__int64 a1)
{
  cocos2d::CCScene *v2; // rbx
  int v3; // eax

  v2 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xc1b43*/
  if ( *(_QWORD *)(a1 + 568) ) /*0xc1b4a*/
  {
    v2 = *(cocos2d::CCScene **)(a1 + 568); /*0xc1b56*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v2) + 1 >= 110 ) /*0xc1b69*/
      v3 = cocos2d::CCScene::getHighestChildZ(v2) + 1; /*0xc1b7b*/
    else
      v3 = 110; /*0xc1b6b*/
    *(_DWORD *)(a1 + 592) = v3; /*0xc1b7d*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0xc1b83*/
    *(_DWORD *)(a1 + 592) = 110; /*0xc1b8f*/
  return (*(__int64 (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1);
}

// [2/28] Address: 0xd1190
// Method: ThreadViewPopup::~ThreadViewPopup
// Hidden C++ exception states: #wind=1
char *__fastcall ThreadViewPopup__dtor_ThreadViewPopup(char *Block, char a2)
{
  char *v4; // rbx
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx
  __int64 v11; // rax

  *(_QWORD *)Block = &ThreadViewPopup::`vftable'; /*0xd11ab*/
  *((_QWORD *)Block + 40) = &ThreadViewPopup::`vftable'; /*0xd11b5*/
  *((_QWORD *)Block + 41) = &ThreadViewPopup::`vftable'; /*0xd11c3*/
  *((_QWORD *)Block + 42) = &ThreadViewPopup::`vftable'; /*0xd11d1*/
  *((_QWORD *)Block + 43) = &ThreadViewPopup::`vftable'; /*0xd11df*/
  *((_QWORD *)Block + 44) = &ThreadViewPopup::`vftable'; /*0xd11ed*/
  *((_QWORD *)Block + 51) = &ThreadViewPopup::`vftable'; /*0xd11fb*/
  *((_QWORD *)Block + 54) = &ThreadViewPopup::`vftable'; /*0xd1209*/
  *((_QWORD *)Block + 68) = &ThreadViewPopup::`vftable'; /*0xd1217*/
  *((_QWORD *)Block + 83) = &ThreadViewPopup::`vftable'; /*0xd1225*/
  v4 = Block + 672; /*0xd122c*/
  *((_QWORD *)Block + 84) = &ThreadViewPopup::`vftable'; /*0xd123a*/
  *((_QWORD *)Block + 85) = &ThreadViewPopup::`vftable'; /*0xd1244*/
  *((_QWORD *)Block + 86) = &ThreadViewPopup::`vftable'; /*0xd1252*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd1259*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd1263*/
  {
    v6 = operator new(0x690u); /*0xd126a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd1277*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd1288*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd128a*/
  }
  if ( *(char **)(v5 + 1392) == v4 ) /*0xd1298*/
    *(_QWORD *)(v5 + 1392) = 0; /*0xd129a*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 103); /*0xd12a5*/
  if ( v7 ) /*0xd12af*/
    cocos2d::CCObject::release(v7); /*0xd12b1*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 94); /*0xd12b7*/
  if ( v8 ) /*0xd12c1*/
    cocos2d::CCObject::release(v8); /*0xd12c3*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 143); /*0xd12c9*/
  if ( v9 ) /*0xd12d3*/
    cocos2d::CCObject::release(v9); /*0xd12d5*/
  v10 = (cocos2d::CCObject *)*((_QWORD *)Block + 93); /*0xd12db*/
  if ( v10 ) /*0xd12e5*/
    cocos2d::CCObject::release(v10); /*0xd12e7*/
  v11 = *((_QWORD *)Block + 115); /*0xd12ed*/
  if ( v11 ) /*0xd12f7*/
    *(_QWORD *)(v11 + 608) = 0; /*0xd12f9*/
  sub_3C310(Block + 1112); /*0xd130b*/
  sub_FDD90(Block + 1072); /*0xd1317*/
  sub_3C310(Block + 968); /*0xd1323*/
  sub_FEB40(Block + 720, Block + 720, *(_QWORD *)(*((_QWORD *)Block + 90) + 8LL)); /*0xd1341*/
  j_j_free(*((void **)Block + 90)); /*0xd1352*/
  sub_FDF40(Block + 696); /*0xd135e*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0xd1366*/
  if ( (a2 & 1) != 0 ) /*0xd1370*/
    j_j_free(Block); /*0xd137a*/
  return Block; /*0xd1382*/
}

// [3/28] Address: 0xd9f40
// Method: ThreadViewPopup::threadSearchFinished
// Hidden C++ exception states: #wind=2
__int64 __fastcall ThreadViewPopup_threadSearchFinished(__int64 a1, __int64 a2, cocos2d::CCArray *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r15
  signed int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r12
  const char *v12; // r13
  __int64 v13; // rcx
  cocos2d::CCObject *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  struct cocos2d::CCLabelBMFont *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  cocos2d::CCObject *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  cocos2d::CCArray *v34; // rdi
  signed int j; // ebx
  struct cocos2d::CCObject *v36; // rax
  __int64 v37; // rcx
  signed int k; // ebx
  struct cocos2d::CCObject *v39; // rax
  signed int m; // ebp
  cocos2d::CCArray *v41; // rbx
  struct cocos2d::CCObject *v42; // rax
  __int64 v43; // rdx
  int v44; // ebp
  signed int i; // edi
  cocos2d::CCArray *v46; // rbx
  struct cocos2d::CCObject *v47; // rax
  __int64 v48; // rdi
  const char *v49; // rcx
  void (__fastcall **v50)(__int64, const char *); // rdi
  __int64 v51; // rbx
  const char *v52; // r9
  cocos2d::CCString *v53; // rax
  const char *CString; // rax
  __int64 v55; // rcx
  void *v56; // [rsp+90h] [rbp+8h]
  void *v57; // [rsp+90h] [rbp+8h]
  char v58; // [rsp+A8h] [rbp+20h]

  v58 = a4; /*0xd9f45*/
  result = *(_QWORD *)(a1 + 72); /*0xd9f5f*/
  if ( (_DWORD)a2 != *(_DWORD *)(result + 56) || !*(_QWORD *)(a1 + 456) ) /*0xd9f6c*/
    return result; /*0xd9f74*/
  v7 = *(_QWORD *)(a1 + 152); /*0xd9f7a*/
  if ( v7 ) /*0xd9f84*/
    LoadingCircle_fadeAndRemove(v7, a2, a3, a4); /*0xd9f86*/
  v8 = 0; /*0xd9f8b*/
  if ( a3 ) /*0xd9f91*/
    v9 = cocos2d::CCArray::count(a3); /*0xd9f9c*/
  else
    v9 = 0; /*0xd9fa0*/
  v10 = *(_QWORD *)&qword_905FB0; /*0xd9fa3*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd9fad*/
  {
    v56 = operator new(0x690u); /*0xd9fb9*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v56); /*0xd9fca*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd9fdb*/
    v10 = *(_QWORD *)&qword_905FB0; /*0xd9fdd*/
  }
  v11 = *(_QWORD *)(v10 + 608); /*0xd9fe4*/
  v12 = &byte_6E86E0; /*0xd9feb*/
  if ( !*(_BYTE *)(a1 + 432) ) /*0xd9ff2*/
  {
    *(_BYTE *)(a1 + 432) = 1; /*0xd9fff*/
    *(_QWORD *)(a1 + 472) = *(_QWORD *)(a1 + 80); /*0xda00a*/
    *(_QWORD *)(a1 + 480) = *(_QWORD *)(a1 + 88); /*0xda015*/
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(a1 + 96); /*0xda020*/
    *(_BYTE *)(a1 + 496) = *(_BYTE *)(a1 + 108); /*0xda02b*/
    v13 = *(unsigned int *)(*(_QWORD *)(a1 + 144) + 436LL); /*0xda038*/
    *(_DWORD *)(a1 + 500) = v13; /*0xda03e*/
    v14 = (cocos2d::CCObject *)cocos2d::CCArray::create(v13); /*0xda044*/
    *(_QWORD *)(a1 + 80) = v14; /*0xda04a*/
    cocos2d::CCObject::retain(v14); /*0xda051*/
    PlayerObject_disablePlayerControls(a1 - 672, 0.0); /*0xda061*/
    v15 = *(_QWORD *)(a1 + 352); /*0xda066*/
    if ( v15 ) /*0xda070*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 336LL))(v15, 0); /*0xda077*/
    cocos2d::CCNode::unschedule(a1 - 672, sub_DDF70); /*0xda08b*/
    v17 = *(_QWORD *)(a1 + 240); /*0xda091*/
    if ( v17 ) /*0xda09b*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 1104LL))(v17, 0); /*0xda0a2*/
    v18 = *(_QWORD *)(a1 + 248); /*0xda0a8*/
    if ( v18 ) /*0xda0b2*/
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 1032LL))(v18, 0); /*0xda0b9*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 248) + 336LL))(*(_QWORD *)(a1 + 248), 0); /*0xda0cb*/
    }
    v19 = *(_QWORD *)(a1 + 344); /*0xda0d1*/
    if ( v19 ) /*0xda0db*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 336LL))(v19, 0); /*0xda0e2*/
    v20 = *(_QWORD *)(a1 + 552); /*0xda0e8*/
    if ( v20 ) /*0xda0f2*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 336LL))(v20, 0); /*0xda0f9*/
    v21 = *(_QWORD *)(a1 + 560); /*0xda0ff*/
    if ( v21 ) /*0xda109*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 336LL))(v21, 0); /*0xda110*/
    v22 = *(_QWORD *)(a1 + 232); /*0xda116*/
    if ( v22 ) /*0xda120*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 336LL))(v22, 0); /*0xda127*/
    LOBYTE(v16) = 1; /*0xda12d*/
    sub_DB9C0(a1 - 672, v16); /*0xda136*/
    if ( !*(_QWORD *)(a1 + 536) ) /*0xda13b*/
    {
      v24 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, (const char *)&qword_6FFF68); /*0xda15d*/
      *(_QWORD *)(a1 + 536) = v24; /*0xda160*/
      v25 = *(_QWORD *)v24; /*0xda167*/
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 200LL))(*(_QWORD *)(a1 + 336)); /*0xda174*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v25 + 184))(v24, v26); /*0xda180*/
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 - 88) + 456LL))( /*0xda19a*/
        *(_QWORD *)(a1 - 88),
        *(_QWORD *)(a1 + 536),
        6);
      v57 = operator new(0x2C8u); /*0xda1aa*/
      v27 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v57); /*0xda1ba*/
      if ( v27 ) /*0xda1c0*/
      {
        if ( (unsigned __int8)ButtonSprite_init( /*0xda20e*/
                                (_DWORD)v27,
                                (unsigned int)"Clear",
                                45,
                                0,
                                1057803469,
                                1,
                                (__int64)&qword_6FFF68,
                                (__int64)"GJ_button_04.png",
                                1105199104) )
        {
          cocos2d::CCObject::autorelease(v27); /*0xda21a*/
        }
        else
        {
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v27 + 8LL))(v27, 1); /*0xda22a*/
          v27 = 0; /*0xda22d*/
        }
      }
      v28 = CCMenuItemSpriteExtra_create(v27, 0, a1 - 672, sub_D9A80); /*0xda243*/
      *(_QWORD *)(a1 + 544) = v28; /*0xda248*/
      *(_DWORD *)(v28 + 372) = 1066192077; /*0xda24f*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 - 120) + 464LL))( /*0xda267*/
        *(_QWORD *)(a1 - 120),
        *(_QWORD *)(a1 + 544));
      v29 = *(_QWORD *)(a1 + 232); /*0xda26d*/
      if ( !v29 ) /*0xda277*/
        v29 = *(_QWORD *)(a1 + 336); /*0xda279*/
      v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 200LL))(v29); /*0xda283*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 184LL))(*(_QWORD *)(a1 + 544), v30); /*0xda296*/
    }
    LOBYTE(v23) = 1; /*0xda2a6*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 536) + 336LL))(*(_QWORD *)(a1 + 536), v23); /*0xda2a8*/
    LOBYTE(v31) = 1; /*0xda2b8*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 336LL))(*(_QWORD *)(a1 + 544), v31); /*0xda2ba*/
    LOBYTE(v32) = 1; /*0xda2ca*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 936LL))(*(_QWORD *)(a1 + 544), v32); /*0xda2cc*/
    v33 = *(_QWORD *)(a1 + 120); /*0xda2d2*/
    if ( v33 ) /*0xda2d9*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 336LL))(v33, 0); /*0xda2e0*/
    v7 = *(_QWORD *)(a1 + 128); /*0xda2e6*/
    if ( v7 ) /*0xda2f0*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 336LL))(v7, 0); /*0xda2f7*/
    v12 = &byte_6E86E0; /*0xda2fd*/
    if ( v11 > 0 ) /*0xda307*/
      goto LABEL_38; /*0xda307*/
LABEL_51:
    for ( i = 0; i < v9; ++i ) /*0xda434*/
    {
      v46 = *(cocos2d::CCArray **)(a1 + 80); /*0xda440*/
      v47 = cocos2d::CCArray::objectAtIndex(a3, i); /*0xda449*/
      cocos2d::CCArray::addObject(v46, v47); /*0xda455*/
    }
    goto LABEL_47; /*0xda45f*/
  }
  if ( v11 <= 0 ) /*0xda41f*/
  {
    cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 80)); /*0xda429*/
    goto LABEL_51; /*0xda429*/
  }
LABEL_38:
  v34 = (cocos2d::CCArray *)cocos2d::CCArray::create(v7); /*0xda30d*/
  for ( j = 0; j < v9; ++j ) /*0xda31b*/
  {
    v36 = cocos2d::CCArray::objectAtIndex(a3, j); /*0xda325*/
    v37 = *(_QWORD *)(a1 + 88); /*0xda32b*/
    if ( !v37 || *((_QWORD *)v36 + 7) < v37 ) /*0xda338*/
      cocos2d::CCArray::addObject(v34, v36); /*0xda340*/
  }
  for ( k = 0; k < (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 80)); ++k ) /*0xda35b*/
  {
    v39 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 80), k); /*0xda366*/
    cocos2d::CCArray::addObject(v34, v39); /*0xda372*/
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 80)); /*0xda38c*/
  for ( m = 0; m < (int)cocos2d::CCArray::count(v34); ++m ) /*0xda3a0*/
  {
    v41 = *(cocos2d::CCArray **)(a1 + 80); /*0xda3b0*/
    v42 = cocos2d::CCArray::objectAtIndex(v34, m); /*0xda3b9*/
    cocos2d::CCArray::addObject(v41, v42); /*0xda3c5*/
  }
LABEL_47:
  *(_BYTE *)(a1 + 108) = v58; /*0xda3da*/
  v44 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 80)); /*0xda3ef*/
  if ( v44 <= 0 ) /*0xda3f3*/
  {
    *(_QWORD *)(a1 + 88) = 0; /*0xda466*/
  }
  else
  {
    *(_QWORD *)(a1 + 88) = *((_QWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 80), 0) + 7); /*0xda405*/
    v8 = *((_QWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 80), v44 - 1) + 7); /*0xda416*/
  }
  *(_QWORD *)(a1 + 96) = v8; /*0xda46a*/
  v48 = *(_QWORD *)(a1 + 536); /*0xda46e*/
  if ( v48 ) /*0xda478*/
  {
    v49 = (const char *)(a1 + 440); /*0xda47e*/
    if ( *(_QWORD *)(a1 + 464) > 0xFu ) /*0xda48a*/
      v49 = *(const char **)v49; /*0xda48c*/
    v50 = *(void (__fastcall ***)(__int64, const char *))(v48 + 360); /*0xda48f*/
    v51 = *(_QWORD *)(a1 + 536); /*0xda496*/
    v52 = (const char *)&unk_70802C; /*0xda49d*/
    if ( v44 == 1 ) /*0xda4a7*/
      v52 = &byte_6E86E0; /*0xda4a7*/
    if ( *(_BYTE *)(a1 + 108) ) /*0xda4b2*/
      v12 = "+"; /*0xda4b6*/
    v53 = cocos2d::CCString::createWithFormat("%i%s result%s for \"%s\"", v44, v12, v52, v49); /*0xda4cb*/
    CString = cocos2d::CCString::getCString(v53); /*0xda4d4*/
    (*v50)(v51 + 360, CString); /*0xda4e4*/
    cocos2d::CCLabelBMFont::limitLabelWidth( /*0xda50d*/
      *(cocos2d::CCLabelBMFont **)(a1 + 536),
      *(float *)(a1 + 392) - 8.0,
      0.40000001,
      0.2);
  }
  LOBYTE(v43) = v11 <= 0; /*0xda516*/
  result = sub_E0C30(a1 - 672, v43); /*0xda520*/
  if ( !v44 ) /*0xda527*/
  {
    v55 = *(_QWORD *)(a1 + 176); /*0xda529*/
    if ( v55 ) /*0xda533*/
      return (**(__int64 (__fastcall ***)(__int64, const char *))(v55 + 360))(v55 + 360, "No results"); /*0xda546*/
  }
  return result; /*0xda548*/
}

// [4/28] Address: 0xda560
// Method: ThreadViewPopup::threadSearchFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall ThreadViewPopup_threadSearchFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  _WORD v12[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h]
  __int64 v17; // [rsp+68h] [rbp-10h]

  result = *(_QWORD *)(a1 + 72); /*0xda572*/
  if ( (_DWORD)a2 == *(_DWORD *)(result + 56) ) /*0xda579*/
  {
    v6 = *(_QWORD *)(a1 + 152); /*0xda57f*/
    if ( v6 ) /*0xda589*/
      result = LoadingCircle_fadeAndRemove(v6, a2, a3, a4); /*0xda58b*/
    if ( !*(_BYTE *)(a1 + 432) ) /*0xda592*/
    {
      result = a1 + 440; /*0xda59b*/
      *(_QWORD *)(a1 + 456) = 0; /*0xda5a2*/
      if ( *(_QWORD *)(a1 + 464) > 0xFu ) /*0xda5ab*/
        result = *(_QWORD *)result; /*0xda5ad*/
      *(_BYTE *)result = 0; /*0xda5b0*/
    }
    if ( !byte_9037D9 ) /*0xda5ba*/
    {
      v7 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v6) + 272); /*0xda5c6*/
      v15 = 0; /*0xda5dd*/
      v16 = 0; /*0xda5e2*/
      v17 = 15; /*0xda5e7*/
      LOBYTE(v15) = 0; /*0xda5f0*/
      v12[7] = 0; /*0xda5f5*/
      v13 = 13; /*0xda5fa*/
      v14 = 15; /*0xda603*/
      strcpy((char *)v12, "Search failed"); /*0xda614*/
      v8 = *v7; /*0xda634*/
      v11 = sub_3A4CA0(v12, v9, v10, 150, &v15); /*0xda65c*/
      return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v8 + 456))(v7, v11, 1000); /*0xda66d*/
    }
  }
  return result; /*0xda673*/
}

// [5/28] Address: 0xda930
// Method: ThreadViewPopup::levelPicked
// Hidden C++ exception states: #wind=1
void __fastcall ThreadViewPopup_levelPicked(__int64 a1, __int64 a2)
{
  int v3; // edx
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  void *v7; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  if ( a2 ) /*0xda933*/
  {
    v3 = *(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332); /*0xda959*/
    if ( v3 > 0 ) /*0xda961*/
    {
      v4 = cocos2d::CCString::createWithFormat("l_%i", v3); /*0xda96e*/
      CString = cocos2d::CCString::getCString(v4); /*0xda977*/
      *(_OWORD *)Block = 0; /*0xda980*/
      v9 = 0; /*0xda988*/
      v6 = -1; /*0xda98e*/
      do /*0xda998*/
        ++v6; /*0xda995*/
      while ( CString[v6] ); /*0xda998*/
      sub_3C230(Block); /*0xda9a7*/
      sub_DAC10(a1 - 680, Block); /*0xda9b9*/
      if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0xda9c8*/
      {
        v7 = Block[0]; /*0xda9cd*/
        if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) + 1LL) >= 0x1000 ) /*0xda9dc*/
        {
          v7 = (void *)*((_QWORD *)Block[0] - 1); /*0xda9e2*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0xda9f1*/
            invoke_watson(0, 0, 0, 0, 0); /*0xdaa06*/
        }
        j_j_free(v7); /*0xdaa0d*/
      }
    }
  }
}

// [6/28] Address: 0xdaa30
// Method: ThreadViewPopup::listPicked
// Hidden C++ exception states: #wind=1
void __fastcall ThreadViewPopup_listPicked(__int64 a1, __int64 a2)
{
  int v3; // edx
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  void *v7; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  if ( a2 ) /*0xdaa33*/
  {
    v3 = *(_DWORD *)(a2 + 344); /*0xdaa50*/
    if ( v3 > 0 ) /*0xdaa58*/
    {
      v4 = cocos2d::CCString::createWithFormat("li_%i", v3); /*0xdaa65*/
      CString = cocos2d::CCString::getCString(v4); /*0xdaa6e*/
      *(_OWORD *)Block = 0; /*0xdaa77*/
      v9 = 0; /*0xdaa7f*/
      v6 = -1; /*0xdaa85*/
      do /*0xdaa93*/
        ++v6; /*0xdaa90*/
      while ( CString[v6] ); /*0xdaa93*/
      sub_3C230(Block); /*0xdaaa2*/
      sub_DAC10(a1 - 680, Block); /*0xdaab4*/
      if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0xdaac3*/
      {
        v7 = Block[0]; /*0xdaac8*/
        if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) + 1LL) >= 0x1000 ) /*0xdaad7*/
        {
          v7 = (void *)*((_QWORD *)Block[0] - 1); /*0xdaadd*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0xdaaec*/
            invoke_watson(0, 0, 0, 0, 0); /*0xdab01*/
        }
        j_j_free(v7); /*0xdab08*/
      }
    }
  }
}

// [7/28] Address: 0xdab20
// Method: ThreadViewPopup::shareIDPicked
// Hidden C++ exception states: #wind=1
void __fastcall ThreadViewPopup_shareIDPicked(__int64 a1, int a2, char a3)
{
  const char *v4; // rcx
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]

  if ( a2 > 0 ) /*0xdab22*/
  {
    v4 = "l_%i"; /*0xdab46*/
    if ( a3 ) /*0xdab50*/
      v4 = "li_%i"; /*0xdab50*/
    v5 = cocos2d::CCString::createWithFormat(v4); /*0xdab54*/
    CString = cocos2d::CCString::getCString(v5); /*0xdab5d*/
    *(_OWORD *)Block = 0; /*0xdab66*/
    v10 = 0; /*0xdab6e*/
    v7 = -1; /*0xdab74*/
    do /*0xdab83*/
      ++v7; /*0xdab80*/
    while ( CString[v7] ); /*0xdab83*/
    sub_3C230(Block); /*0xdab92*/
    sub_DAC10(a1 - 680, Block); /*0xdaba4*/
    if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0xdabb3*/
    {
      v8 = Block[0]; /*0xdabb8*/
      if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0xdabc7*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0xdabcd*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0xdabdc*/
          invoke_watson(0, 0, 0, 0, 0); /*0xdabf1*/
      }
      j_j_free(v8); /*0xdabf8*/
    }
  }
}

// [8/28] Address: 0xdb220
// Method: ThreadViewPopup::threadUpdateFinished
// Hidden C++ exception states: #wind=2
void __fastcall ThreadViewPopup_threadUpdateFinished(__int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // ebx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // r8
  unsigned int v12; // ebx
  struct cocos2d::CCObject *v13; // rax
  cocos2d::CCArray *v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // cl
  const char *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  __int128 v27; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h]
  __int64 v29; // [rsp+48h] [rbp-28h]
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h]
  __int64 v32; // [rsp+68h] [rbp-8h]
  void *v33; // [rsp+A0h] [rbp+30h]

  v3 = a1; /*0xdb233*/
  v4 = *(_QWORD *)(a1 + 72); /*0xdb236*/
  if ( a2 == *(_DWORD *)(v4 + 56) ) /*0xdb23d*/
  {
    switch ( a3 ) /*0xdb247*/
    {
      case 103: /*0xdb247*/
        v5 = *(_QWORD *)(v3 + 424); /*0xdb24d*/
        if ( !v5 ) /*0xdb257*/
          return; /*0xdb257*/
        v6 = 0; /*0xdb260*/
        if ( (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(v3 + 80)) > 0 ) /*0xdb26f*/
        {
          while ( 1 ) /*0xdb277*/
          {
            v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v3 + 80), v6); /*0xdb277*/
            if ( *((_QWORD *)v7 + 7) == v5 ) /*0xdb281*/
              break; /*0xdb281*/
            if ( (int)++v6 >= (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(v3 + 80)) ) /*0xdb291*/
              goto LABEL_10; /*0xdb291*/
          }
          if ( v7 ) /*0xdb298*/
            *((_BYTE *)v7 + 112) = 1; /*0xdb29a*/
        }
LABEL_10:
        *(_QWORD *)(v3 + 424) = 0; /*0xdb29e*/
        sub_E0C30(v3 - 672, 0); /*0xdb2ae*/
        v10 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v8) + 272); /*0xdb2b9*/
        v30 = 0; /*0xdb2cb*/
        v31 = 0; /*0xdb2cf*/
        v32 = 15; /*0xdb2d3*/
        LOBYTE(v30) = 0; /*0xdb2db*/
        v28 = 15; /*0xdb2df*/
        v29 = 15; /*0xdb2e7*/
        strcpy((char *)&v27, "Message deleted"); /*0xdb2f7*/
        goto LABEL_33; /*0xdb31e*/
      case 12: /*0xdb247*/
        if ( *(_QWORD *)(v3 + 424) ) /*0xdb32d*/
        {
          v12 = 0; /*0xdb33e*/
          if ( (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(v3 + 80)) > 0 ) /*0xdb34d*/
          {
            while ( 1 ) /*0xdb356*/
            {
              v13 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v3 + 80), v12); /*0xdb356*/
              v14 = *(cocos2d::CCArray **)(v3 + 80); /*0xdb367*/
              if ( *((_QWORD *)v13 + 7) == *(_QWORD *)(v3 + 424) ) /*0xdb36b*/
                break; /*0xdb36b*/
              if ( (int)++v12 >= (int)cocos2d::CCArray::count(v14) ) /*0xdb377*/
                goto LABEL_18; /*0xdb377*/
            }
            cocos2d::CCArray::removeObjectAtIndex(v14, v12, 1); /*0xdb380*/
          }
LABEL_18:
          *(_QWORD *)(v3 + 424) = 0; /*0xdb386*/
          sub_E0C30(v3 - 672, 0); /*0xdb399*/
          v16 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v15) + 272); /*0xdb3a4*/
          v30 = 0; /*0xdb3b6*/
          v31 = 0; /*0xdb3ba*/
          v32 = 15; /*0xdb3be*/
          LOBYTE(v30) = 0; /*0xdb3c6*/
          v28 = 15; /*0xdb3ca*/
          v29 = 15; /*0xdb3d2*/
          strcpy((char *)&v27, "Message deleted"); /*0xdb3e2*/
          v17 = *v16; /*0xdb409*/
          v20 = sub_3A4CA0(&v27, v18, v19, 150, &v30); /*0xdb42f*/
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v17 + 456))(v16, v20, 1000); /*0xdb440*/
          if ( v3 == 672 ) /*0xdb449*/
            v3 = 0; /*0xdb449*/
          v21 = *(_QWORD *)&qword_905FB0; /*0xdb44d*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0xdb457*/
          {
            v33 = operator new(0x690u); /*0xdb463*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v33); /*0xdb470*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xdb481*/
            v21 = *(_QWORD *)&qword_905FB0; /*0xdb483*/
          }
          *(_QWORD *)(v21 + 1392) = v3; /*0xdb48a*/
        }
        break;
      case 4: /*0xdb247*/
        if ( *(_BYTE *)(v3 + 329) ) /*0xdb49c*/
        {
          *(_BYTE *)(v3 + 329) = 0; /*0xdb4aa*/
          sub_EC180(); /*0xdb4b2*/
          EndLevelLayer_playStarEffect(v3 - 672); /*0xdb4be*/
          EnhancedGameObject_updateUserCoin(v3 - 672); /*0xdb4ca*/
        }
        break;
      default:
        if ( a3 == 10 && *(_BYTE *)(v3 + 328) ) /*0xdb4de*/
        {
          *(_BYTE *)(v3 + 328) = 0; /*0xdb4ec*/
          *(_BYTE *)(v4 + 244) = *(_BYTE *)(v4 + 244) == 0; /*0xdb4fe*/
          v10 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v4) + 272); /*0xdb50a*/
          v22 = *(_BYTE *)(*(_QWORD *)(v3 + 72) + 244LL); /*0xdb51d*/
          v30 = 0; /*0xdb527*/
          v31 = 0; /*0xdb52e*/
          v32 = 15; /*0xdb532*/
          LOBYTE(v30) = 0; /*0xdb53a*/
          v23 = "Conversation unmuted"; /*0xdb545*/
          if ( v22 ) /*0xdb54e*/
            v23 = "Conversation muted"; /*0xdb54e*/
          v27 = 0; /*0xdb552*/
          v28 = 0; /*0xdb556*/
          v29 = 0; /*0xdb55a*/
          v24 = -1; /*0xdb55e*/
          do /*0xdb568*/
            ++v24; /*0xdb565*/
          while ( v23[v24] ); /*0xdb568*/
          sub_3C230(&v27); /*0xdb573*/
LABEL_33:
          v25 = *v10; /*0xdb578*/
          v26 = sub_3A4CA0(&v27, v9, v11, 150, &v30); /*0xdb59e*/
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v25 + 456))(v10, v26, 1000); /*0xdb5af*/
        }
        break;
    }
  }
}

// [9/28] Address: 0xdb5d0
// Method: ThreadViewPopup::threadUpdateFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall ThreadViewPopup_threadUpdateFailed(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // xmm0_8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+38h] [rbp-38h]
  char v12; // [rsp+3Ch] [rbp-34h]
  char v13; // [rsp+3Dh] [rbp-33h]
  __int16 v14; // [rsp+3Eh] [rbp-32h]
  __int64 v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+68h] [rbp-8h]

  result = *(_QWORD *)(a1 + 72); /*0xdb5e2*/
  if ( a2 == *(_DWORD *)(result + 56) ) /*0xdb5e9*/
  {
    switch ( a3 ) /*0xdb5fd*/
    {
      case 12: /*0xdb5fd*/
      case 103: /*0xdb5fd*/
        *(_QWORD *)(a1 + 424) = 0; /*0xdb6d0*/
        if ( byte_9037D9 ) /*0xdb6dd*/
          return result; /*0xdb6dd*/
        v5 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xdb6e9*/
        v17 = 0; /*0xdb6fb*/
        v18 = 0; /*0xdb6ff*/
        v19 = 15; /*0xdb703*/
        LOBYTE(v17) = 0; /*0xdb70b*/
        v7 = 0x66206574656C6544LL; /*0xdb70e*/
        v11 = 1701603681; /*0xdb71c*/
        goto LABEL_14; /*0xdb71c*/
      case 4: /*0xdb5fd*/
        if ( *(_BYTE *)(a1 + 329) ) /*0xdb609*/
        {
          *(_BYTE *)(a1 + 329) = 0; /*0xdb616*/
          if ( !byte_9037D9 ) /*0xdb624*/
          {
LABEL_7:
            v5 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xdb62a*/
            v17 = 0; /*0xdb642*/
            v18 = 0; /*0xdb648*/
            v19 = 15; /*0xdb64c*/
            LOBYTE(v17) = 0; /*0xdb654*/
            v7 = 0x66206E6F69746341LL; /*0xdb657*/
            v11 = 1701603681; /*0xdb665*/
LABEL_14:
            v14 = 0; /*0xdb726*/
            v15 = 13; /*0xdb72a*/
            v16 = 15; /*0xdb732*/
            v10 = v7; /*0xdb73a*/
            v12 = 100; /*0xdb73f*/
            v13 = 0; /*0xdb742*/
            v8 = *v5; /*0xdb746*/
            v9 = sub_3A4CA0(&v10, v4, v6, 150, &v17); /*0xdb76c*/
            return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v8 + 456))(v5, v9, 1000); /*0xdb77d*/
          }
        }
        break;
      case 10: /*0xdb5fd*/
        if ( *(_BYTE *)(a1 + 328) ) /*0xdb67e*/
        {
          *(_BYTE *)(a1 + 328) = 0; /*0xdb68b*/
          if ( !byte_9037D9 ) /*0xdb699*/
            goto LABEL_7; /*0xdb699*/
        }
        break;
    }
  }
  return result; /*0xdb783*/
}

// [10/28] Address: 0xdc3f0
// Method: ThreadViewPopup::emotePickerClosed
void __fastcall ThreadViewPopup_emotePickerClosed(__int64 a1)
{
  *(_QWORD *)(a1 + 224) = 0; /*0xdc3f0*/
}

// [11/28] Address: 0xdc400
// Method: ThreadViewPopup::threadSendFinished
// Hidden C++ exception states: #wind=2
void __fastcall ThreadViewPopup_threadSendFinished(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // ecx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+48h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]
  __int64 v24; // [rsp+68h] [rbp-20h]
  void *v25; // [rsp+90h] [rbp+8h]

  if ( (_DWORD)a2 == *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) ) /*0xdc41f*/
  {
    v5 = *(_QWORD *)&qword_905FB0; /*0xdc425*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xdc42f*/
    {
      v25 = operator new(0x690u); /*0xdc43b*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0xdc44c*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xdc45d*/
      v5 = *(_QWORD *)&qword_905FB0; /*0xdc45f*/
    }
    if ( *(_BYTE *)(v5 + 522) && (v6 = *(_QWORD *)(a1 + 72), *(_BYTE *)(v6 + 320)) && *(_DWORD *)(v6 + 324) != 2 ) /*0xdc48e*/
    {
      *(_DWORD *)(v6 + 324) = 2; /*0xdc494*/
      *(_BYTE *)(*(_QWORD *)(a1 + 72) + 321LL) = 1; /*0xdc4a2*/
      sub_D8CE0(a1 - 672); /*0xdc4b0*/
      sub_D8D80(a1 - 672); /*0xdc4bc*/
      v8 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v7) + 272); /*0xdc4c7*/
      v22 = 0; /*0xdc4de*/
      v23 = 0; /*0xdc4e3*/
      v24 = 15; /*0xdc4e8*/
      LOBYTE(v22) = 0; /*0xdc4f1*/
      v19 = 0; /*0xdc4f6*/
      *(_QWORD *)&v19 = sub_3C460(32); /*0xdc50f*/
      v20 = 20; /*0xdc514*/
      v21 = 31; /*0xdc51d*/
      strcpy((char *)v19, "Message request sent"); /*0xdc52d*/
      v9 = *v8; /*0xdc53d*/
      v12 = sub_3A4CA0(&v19, v10, v11, 150, &v22); /*0xdc565*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 456))(v8, v12, 1000); /*0xdc576*/
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 72); /*0xdc57e*/
      if ( *(_BYTE *)(v13 + 320) ) /*0xdc582*/
      {
        v14 = *(_DWORD *)(v13 + 324); /*0xdc58b*/
        if ( v14 == 1 || v14 == 3 || v14 == 6 ) /*0xdc59e*/
        {
          *(_DWORD *)(v13 + 324) = 0; /*0xdc5a0*/
          sub_D8CE0(a1 - 672); /*0xdc5ae*/
          sub_D8D80(a1 - 672); /*0xdc5ba*/
        }
      }
    }
    v15 = *(_QWORD *)(a1 + 72); /*0xdc5bf*/
    if ( *(_BYTE *)(v15 + 320) /*0xdc5e6*/
      && ((v16 = *(_DWORD *)(v15 + 324), v16 == 2) || ((v16 - 4) & 0xFFFFFFFC) == 0 && v16 != 6)
      || *(_BYTE *)(a1 + 110) )
    {
      LOBYTE(a2) = 1; /*0xdc5f0*/
    }
    else
    {
      a2 = 0; /*0xdc5ec*/
    }
    sub_DB9C0(a1 - 672, a2); /*0xdc5f9*/
    *(_QWORD *)(a1 + 288) = 0; /*0xdc5fe*/
    v17 = (_QWORD *)(a1 + 296); /*0xdc605*/
    *(_QWORD *)(a1 + 312) = 0; /*0xdc60c*/
    if ( *(_QWORD *)(a1 + 320) > 0xFu ) /*0xdc615*/
      v17 = (_QWORD *)*v17; /*0xdc617*/
    *(_BYTE *)v17 = 0; /*0xdc61a*/
    v18 = *(_QWORD *)(a1 + 368); /*0xdc61d*/
    if ( v18 ) /*0xdc627*/
    {
      if ( !*(_QWORD *)(v18 + 56) ) /*0xdc629*/
        *(_QWORD *)(v18 + 56) = a3; /*0xdc630*/
      *(_QWORD *)(a1 + 368) = 0; /*0xdc634*/
      sub_E0C30(a1 - 672, 0); /*0xdc644*/
    }
    EnhancedGameObject_updateUserCoin(a1 - 672); /*0xdc650*/
  }
}

// [12/28] Address: 0xdc820
// Method: ThreadViewPopup::threadSendFailed
// Hidden C++ exception states: #wind=1
void __fastcall ThreadViewPopup_threadSendFailed(__int64 a1)
{
  char v2; // si
  struct cocos2d::CCObject *v3; // rdx
  cocos2d::CCArray *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  char v9; // r14
  void *v10; // rcx
  _QWORD *v11; // rdx
  __int64 *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int128 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h]

  v2 = 0; /*0xdc852*/
  if ( !*(_BYTE *)(a1 + 110) ) /*0xdc859*/
    sub_DB9C0(a1 - 672, 0); /*0xdc868*/
  v3 = *(struct cocos2d::CCObject **)(a1 + 368); /*0xdc86d*/
  if ( v3 ) /*0xdc877*/
  {
    cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(a1 + 80), v3, 1); /*0xdc884*/
    v4 = *(cocos2d::CCArray **)(a1 + 472); /*0xdc88a*/
    if ( v4 ) /*0xdc894*/
      cocos2d::CCArray::removeObject(v4, *(struct cocos2d::CCObject **)(a1 + 368), 1); /*0xdc8a0*/
    *(_QWORD *)(a1 + 368) = 0; /*0xdc8a6*/
    sub_E0C30(a1 - 672, 0); /*0xdc8b6*/
    v5 = *(_QWORD *)(a1 + 248); /*0xdc8bb*/
    v6 = -1; /*0xdc8c2*/
    if ( !v5 ) /*0xdc8cc*/
      goto LABEL_11; /*0xdc8cc*/
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v5 + 600) + 600LL) + 8LL))(*(_QWORD *)(v5 + 600) + 600LL); /*0xdc8df*/
    *(_OWORD *)Block = 0; /*0xdc8e5*/
    v21 = 0; /*0xdc8ec*/
    v8 = -1; /*0xdc8f1*/
    do /*0xdc8f7*/
      ++v8; /*0xdc8f4*/
    while ( *(_BYTE *)(v7 + v8) ); /*0xdc8f7*/
    sub_3C230(Block); /*0xdc904*/
    v2 = 3; /*0xdc909*/
    if ( (_QWORD)v21 ) /*0xdc912*/
LABEL_11:
      v9 = 0; /*0xdc919*/
    else
      v9 = 1; /*0xdc914*/
    if ( (v2 & 1) != 0 && *((_QWORD *)&v21 + 1) > 0xFu ) /*0xdc92a*/
    {
      v10 = Block[0]; /*0xdc92f*/
      if ( (unsigned __int64)(*((_QWORD *)&v21 + 1) + 1LL) >= 0x1000 ) /*0xdc93d*/
      {
        v10 = (void *)*((_QWORD *)Block[0] - 1); /*0xdc943*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0xdc952*/
          invoke_watson(0, 0, 0, 0, 0); /*0xdc963*/
      }
      j_j_free(v10); /*0xdc96a*/
    }
    if ( v9 ) /*0xdc972*/
    {
      v11 = (_QWORD *)(a1 + 296); /*0xdc974*/
      if ( *(_QWORD *)(a1 + 320) > 0xFu ) /*0xdc980*/
        v11 = (_QWORD *)*v11; /*0xdc982*/
      *(_OWORD *)Block = 0; /*0xdc988*/
      v21 = 0u; /*0xdc98c*/
      do /*0xdc997*/
        ++v6; /*0xdc994*/
      while ( *((_BYTE *)v11 + v6) ); /*0xdc997*/
      sub_3C230(Block); /*0xdc9a4*/
      CCTextInputNode_setString(*(_QWORD **)(a1 + 248), Block); /*0xdc9b4*/
    }
  }
  if ( !byte_9037D9 ) /*0xdc9c0*/
  {
    v12 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xdc9cc*/
    v17 = 0; /*0xdc9de*/
    v18 = 0; /*0xdc9e2*/
    v19 = 15; /*0xdc9e6*/
    LOBYTE(v17) = 0; /*0xdc9ee*/
    *(_QWORD *)&v21 = 11; /*0xdc9f6*/
    *((_QWORD *)&v21 + 1) = 15; /*0xdc9fe*/
    Block[0] = (void *)0x69616620646E6553LL; /*0xdca0e*/
    Block[1] = &loc_64656A + 2; /*0xdca1a*/
    v13 = *v12; /*0xdca2c*/
    v16 = sub_3A4CA0(Block, v14, v15, 150, &v17); /*0xdca52*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v13 + 456))(v12, v16, 1000); /*0xdca63*/
  }
}

// [14/28] Address: 0xde040
// Method: ThreadViewPopup::threadMessagesFailed
__int64 __fastcall ThreadViewPopup_threadMessagesFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct cocos2d::CCLabelBMFont *v10; // rax
  void (__fastcall ***v11)(_QWORD, __int16 *); // rcx
  __int16 v12; // [rsp+38h] [rbp+10h] BYREF
  char v13; // [rsp+3Ah] [rbp+12h]

  result = *(_QWORD *)(a1 + 72); /*0xde04a*/
  if ( (_DWORD)a2 != *(_DWORD *)(result + 56) ) /*0xde054*/
    return result; /*0xde054*/
  v6 = *(_QWORD *)(a1 + 152); /*0xde05a*/
  if ( v6 ) /*0xde064*/
    result = LoadingCircle_fadeAndRemove(v6, a2, a3, a4); /*0xde066*/
  if ( !*(_QWORD *)(a1 + 512) ) /*0xde073*/
  {
LABEL_7:
    if ( !byte_9037D9 ) /*0xde09c*/
      goto LABEL_9; /*0xde09c*/
    goto LABEL_8; /*0xde09c*/
  }
  v7 = byte_9037D9 == 0; /*0xde075*/
  *(_QWORD *)(a1 + 512) = 0; /*0xde07c*/
  if ( v7 ) /*0xde087*/
  {
    result = sub_D9C90(a1 - 672); /*0xde090*/
    goto LABEL_7; /*0xde090*/
  }
LABEL_8:
  *(_BYTE *)(a1 + 110) = 1; /*0xde09e*/
  PlayerObject_disablePlayerControls(a1 - 672, 0.0); /*0xde0ac*/
  LOBYTE(v8) = 1; /*0xde0b1*/
  result = sub_DB9C0(a1 - 672, v8); /*0xde0ba*/
LABEL_9:
  if ( !*(_BYTE *)(a1 + 109) ) /*0xde0bf*/
  {
    v9 = *(_QWORD *)(a1 + 176); /*0xde0c9*/
    if ( v9 ) /*0xde0d3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 512LL))(v9); /*0xde0d8*/
    v10 = cocos2d::CCLabelBMFont::create("Failed to load messages.", "chatFont.fnt"); /*0xde0ec*/
    *(_QWORD *)(a1 + 176) = v10; /*0xde0fa*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v10 + 160LL))(v10); /*0xde10e*/
    v11 = (void (__fastcall ***)(_QWORD, __int16 *))(*(_QWORD *)(a1 + 176) + 368LL); /*0xde11c*/
    v12 = -26986; /*0xde123*/
    v13 = -106; /*0xde12a*/
    (**v11)(v11, &v12); /*0xde132*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 176) + 184LL))(*(_QWORD *)(a1 + 176), a1 + 168); /*0xde145*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 - 88) + 464LL))( /*0xde159*/
             *(_QWORD *)(a1 - 88),
             *(_QWORD *)(a1 + 176));
  }
  return result; /*0xde15f*/
}

// [15/28] Address: 0xdf620
// Method: ThreadViewPopup::virtualRowCount
__int64 __fastcall ThreadViewPopup_virtualRowCount(__int64 a1)
{
  return (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 6; /*0xdf62c*/
}

// [16/28] Address: 0xdf630
// Method: ThreadViewPopup::virtualRowHeight
float __fastcall ThreadViewPopup_virtualRowHeight(__int64 a1, int a2)
{
  return *(float *)(((__int64)a2 << 6) + *(_QWORD *)(a1 + 32) + 12); /*0xdf642*/
}

// [17/28] Address: 0xdf650
// Method: ThreadViewPopup::unmountVirtualRow
unsigned __int64 __fastcall ThreadViewPopup_unmountVirtualRow(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  int v6; // esi
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 i; // rbx

  v2 = *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408); /*0xdf66b*/
  result = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x4924924924924925LL) >> 64) >> 63; /*0xdf685*/
  v6 = (int)v2 / 28 - 1; /*0xdf68c*/
  if ( v6 >= 0 ) /*0xdf68f*/
  {
    result = v6; /*0xdf6a4*/
    v7 = 28LL * v6; /*0xdf6ac*/
    do /*0xdf70b*/
    {
      v8 = v7 + *(_QWORD *)(a1 + 408); /*0xdf6b7*/
      if ( *(_DWORD *)(v8 + 24) == a2 ) /*0xdf6be*/
      {
        v9 = *(_QWORD *)(a1 + 416); /*0xdf6c0*/
        for ( i = v8 + 28; i != v9; v8 += 28 ) /*0xdf6ce*/
        {
          *(_DWORD *)v8 = *(_DWORD *)i; /*0xdf6d6*/
          *(_BYTE *)(v8 + 4) = *(_BYTE *)(i + 4); /*0xdf6e0*/
          cocos2d::CCRect::operator=(v8 + 8, i + 8); /*0xdf6e3*/
          result = *(unsigned int *)(i + 24); /*0xdf6e9*/
          i += 28; /*0xdf6ec*/
          *(_DWORD *)(v8 + 24) = result; /*0xdf6f0*/
        }
        *(_QWORD *)(a1 + 416) -= 28LL; /*0xdf6fc*/
      }
      v7 -= 28; /*0xdf704*/
      --v6; /*0xdf708*/
    }
    while ( v6 >= 0 ); /*0xdf70b*/
  }
  return result; /*0xdf721*/
}

// [19/28] Address: 0xe0e00
// Method: ThreadViewPopup::keyBackClicked
__int64 __fastcall ThreadViewPopup_keyBackClicked(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = a1 - 336; /*0xe0e00*/
  if ( !*(_BYTE *)(v2 + 1104) ) /*0xe0e07*/
    return sub_E0D70(v2, 0); /*0xe0e19*/
  LOBYTE(a2) = 1; /*0xe0e10*/
  return sub_D9D40(v2, a2);
}

// [20/28] Address: 0xe0e20
// Method: ThreadViewPopup::emotePickerKeyDown
__int64 __fastcall ThreadViewPopup_emotePickerKeyDown(__int64 a1, __int64 a2, unsigned int a3)
{
  return (**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 - 344))(a1 - 344, a3);
}

// [21/28] Address: 0xe0e40
// Method: ThreadViewPopup::keyDown
__int64 __fastcall ThreadViewPopup_keyDown(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a2 == 13 /*0xe0e88*/
    && (v4 = *(_QWORD *)(a1 + 576)) != 0
    && *(_BYTE *)(v4 + 468)
    && (v5 = cocos2d::CCDirector::sharedDirector(a1),
        !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5) + 152)) )
  {
    return sub_DBAA0(a1 - 344, 0); /*0xe0e9a*/
  }
  else
  {
    return FLAlertLayer_keyDown(a1, a2); /*0xe0ea9*/
  }
}

// [22/28] Address: 0xe0ed0
// Method: ThreadViewPopup::textInputOpened
__int64 __fastcall ThreadViewPopup_textInputOpened(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 488); /*0xe0ed0*/
  if ( v2 ) /*0xe0eda*/
  {
    LOBYTE(a2) = 1; /*0xe0edf*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 336LL))(v2, a2); /*0xe0ee1*/
  }
  return result; /*0xe0ee8*/
}

// [23/28] Address: 0xe0ef0
// Method: ThreadViewPopup::textInputClosed
__int64 __fastcall ThreadViewPopup_textInputClosed(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 488); /*0xe0ef0*/
  if ( v1 ) /*0xe0efa*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 336LL))(v1, 0); /*0xe0f01*/
  return result; /*0xe0f08*/
}

// [24/28] Address: 0xe0f10
// Method: ThreadViewPopup::textChanged
void __fastcall ThreadViewPopup_textChanged(__int64 a1, __int64 a2)
{
  int v3; // eax

  if ( a2 == *(_QWORD *)(a1 + 376) ) /*0xe0f24*/
  {
    sub_E1790(a1 - 544); /*0xe0f2d*/
    if ( (int)sub_53BC0(*(_QWORD *)(a1 + 376)) <= 3 ) /*0xe0f41*/
      v3 = sub_53BC0(*(_QWORD *)(a1 + 376)); /*0xe0f51*/
    else
      v3 = 3; /*0xe0f43*/
    if ( v3 != *(_DWORD *)(a1 + 512) ) /*0xe0f5c*/
    {
      *(_DWORD *)(a1 + 512) = v3; /*0xe0f65*/
      sub_E1930(a1 - 544); /*0xe0f6b*/
    }
  }
}

// [25/28] Address: 0xe1e10
// Method: ThreadViewPopup::ccTouchBegan
char __fastcall ThreadViewPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 496) && (unsigned __int8)sub_80430() ) /*0xe1e34*/
  {
    FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0xe1e46*/
    return 1; /*0xe1e5c*/
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0xe1e66*/
  if ( result ) /*0xe1e6d*/
    return 1; /*0xe1e6d*/
  return result; /*0xe1e4d*/
}

// [26/28] Address: 0xe1e80
// Method: ThreadViewPopup::ccTouchMoved
__int64 __fastcall ThreadViewPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 496) ) /*0xe1e95*/
    sub_804A0(); /*0xe1ea4*/
  result = *(unsigned int *)(a2 + 56); /*0xe1ea9*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0xe1eb2*/
  {
    v7 = *(_QWORD *)(a1 + 232); /*0xe1eb4*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0xe1ec3*/
      return result; /*0xe1ec3*/
    v7 = *(_QWORD *)(a1 + 304); /*0xe1ec5*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 16LL))(v7 + 320, a2, a3); /*0xe1edf*/
}

// [27/28] Address: 0xe1ef0
// Method: ThreadViewPopup::ccTouchEnded
__int64 __fastcall ThreadViewPopup_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v7; // si
  char v8; // r14
  char v9; // r12
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax

  v4 = *(_QWORD *)(a1 + 496); /*0xe1f03*/
  if ( v4 && *(_BYTE *)(v4 + 480) ) /*0xe1f1a*/
  {
    v7 = 1; /*0xe1f23*/
  }
  else
  {
    v7 = 0; /*0xe1f28*/
    if ( !v4 ) /*0xe1f2e*/
      goto LABEL_7; /*0xe1f2e*/
  }
  if ( !*(_QWORD *)(v4 + 560) ) /*0xe1f38*/
  {
LABEL_7:
    v8 = 0; /*0xe1f3f*/
    if ( !v4 ) /*0xe1f45*/
      goto LABEL_13; /*0xe1f45*/
    goto LABEL_8; /*0xe1f45*/
  }
  v8 = 1; /*0xe1f3a*/
LABEL_8:
  v9 = *(_BYTE *)(v4 + 480); /*0xe1f47*/
  sub_80AF0(v4); /*0xe1f57*/
  v10 = *(_QWORD *)(v4 + 560); /*0xe1f5c*/
  if ( v10 ) /*0xe1f66*/
  {
    v11 = (__int64 *)(v10 + 320); /*0xe1f68*/
    v12 = *v11; /*0xe1f75*/
    if ( v9 ) /*0xe1f7b*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v12 + 32))(v11, a2, a3); /*0xe1f7d*/
    else
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v12 + 24))(v11, a2, a3); /*0xe1f82*/
    *(_QWORD *)(v4 + 560) = 0; /*0xe1f85*/
  }
LABEL_13:
  if ( !v7 && !v8 ) /*0xe1fa7*/
    sub_E1FD0(a1 - 320, a2); /*0xe1fb3*/
  return FLAlertLayer_ccTouchEnded(a1, a2, a3); /*0xe1fc1*/
}

// [28/28] Address: 0xe3500
// Method: ThreadViewPopup::ccTouchCancelled
__int64 __fastcall ThreadViewPopup_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 496) ) /*0xe3515*/
    sub_805B0(); /*0xe3524*/
  return FLAlertLayer_ccTouchCancelled(a1, a2, a3); /*0xe3532*/
}

// Address: 0xdf730
// Method: ThreadViewPopup::mountVirtualRow
// Hidden C++ exception states: #wind=11
void __fastcall ThreadViewPopup_mountVirtualRow(__int64 a1, int a2, __int64 a3, void *a4)
{
  __int64 v5; // r12
  __int64 v7; // rsi
  __int64 v8; // r14
  float v9; // xmm8_4
  int v10; // eax
  char v11; // di
  cocos2d::CCObject *v12; // rbx
  const char *v13; // rdx
  cocos2d::CCObject *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  cocos2d::CCObject *v17; // rbx
  cocos2d::CCObject *v18; // rdi
  __int64 v19; // rbx
  float v20; // xmm8_4
  __int64 v21; // rax
  cocos2d::CCObject *v22; // rbx
  cocos2d::CCObject *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  cocos2d::CCString *v27; // rax
  const char *CString; // rax
  struct cocos2d::CCSprite *v29; // rdi
  __int64 v30; // rdx
  void (__fastcall *v31)(char *, __int64); // r8
  float v32; // xmm8_4
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39... [26731 chars total]

// Address: 0xdcaa0
// Method: ThreadViewPopup::threadMessagesFinished
// Hidden C++ exception states: #wind=43
double __usercall ThreadViewPopup_threadMessagesFinished@<xmm0>(
        int a1@<edx>,
        __int64 a2@<rcx>,
        cocos2d::CCArray *a3@<r8>,
        char a4@<r9b>,
        double result@<xmm0>)
{
  char v5; // r12
  cocos2d::CCArray *v6; // r13
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // cl
  float v12; // xmm8_4
  void *v13; // rcx
  void *v14; // rdx
  __int64 v15; // r15
  const void **v16; // rsi
  const void **v17; // r14
  const void **v18; // rdx
  unsigned __int64 v19; // r12
  const void *v20; // rcx
  size_t v21; // r13
  size_t v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  char v27; // si
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rax
  char v34; // cl
  float v35; // xmm0_4
  __int64 v36; // rbx
  int v37; // eax
  char v38; // r14
  const void **v39; // rsi
  __i... [29231 chars total]
