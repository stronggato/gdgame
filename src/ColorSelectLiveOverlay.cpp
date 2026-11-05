#include <Geode/binding/ColorSelectLiveOverlay.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0x122670
// Method: ColorSelectLiveOverlay::~ColorSelectLiveOverlay
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall ColorSelectLiveOverlay__dtor_ColorSelectLiveOverlay(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx

  *(_QWORD *)Block = &ColorSelectLiveOverlay::`vftable'; /*0x122686*/
  *((_QWORD *)Block + 40) = &ColorSelectLiveOverlay::`vftable'; /*0x122690*/
  *((_QWORD *)Block + 41) = &ColorSelectLiveOverlay::`vftable'; /*0x12269e*/
  *((_QWORD *)Block + 42) = &ColorSelectLiveOverlay::`vftable'; /*0x1226ac*/
  *((_QWORD *)Block + 43) = &ColorSelectLiveOverlay::`vftable'; /*0x1226ba*/
  *((_QWORD *)Block + 44) = &ColorSelectLiveOverlay::`vftable'; /*0x1226c8*/
  *((_QWORD *)Block + 51) = &ColorSelectLiveOverlay::`vftable'; /*0x1226d6*/
  *((_QWORD *)Block + 54) = &ColorSelectLiveOverlay::`vftable'; /*0x1226e4*/
  *((_QWORD *)Block + 68) = &ColorSelectLiveOverlay::`vftable'; /*0x1226f2*/
  cocos2d::CCNode::removeAllChildrenWithCleanup(Block, 1); /*0x1226fb*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 86); /*0x122701*/
  if ( v4 ) /*0x12270b*/
    cocos2d::CCObject::release(v4); /*0x12270d*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x122713*/
  if ( v5 ) /*0x12271d*/
    cocos2d::CCObject::release(v5); /*0x12271f*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 85); /*0x122725*/
  if ( v6 ) /*0x12272f*/
    cocos2d::CCObject::release(v6); /*0x122731*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 84); /*0x122737*/
  if ( v7 ) /*0x122741*/
    cocos2d::CCObject::release(v7); /*0x122743*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 83); /*0x122749*/
  if ( v8 ) /*0x122753*/
    cocos2d::CCObject::release(v8); /*0x122755*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x12275e*/
  if ( (a2 & 1) != 0 ) /*0x122768*/
    j_j_free(Block); /*0x122772*/
  return Block; /*0x12277a*/
}

// [3/4] Address: 0x123c20
// Method: ColorSelectLiveOverlay::onSelectTab
__int64 __fastcall ColorSelectLiveOverlay_onSelectTab(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int i; // ebp
  struct cocos2d::CCObject *v8; // rdi
  int v9; // ebx
  int v10; // eax
  const char *v11; // rdx
  __int64 v12; // rdx
  __int16 v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+42h] [rbp+Ah]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x123c34*/
  if ( *(_BYTE *)(a1 + 856) != ((_DWORD)result != 1) ) /*0x123c43*/
  {
    *(_BYTE *)(a1 + 856) = (_DWORD)result != 1; /*0x123c49*/
    v5 = 696; /*0x123c5c*/
    if ( (_DWORD)result == 1 ) /*0x123c61*/
      v5 = 688; /*0x123c61*/
    v6 = *(_QWORD *)(v5 + a1); /*0x123c64*/
    *(_DWORD *)(a1 + 728) = *(_DWORD *)(v6 + 96); /*0x123c6e*/
    v13 = *(_WORD *)(v6 + 72); /*0x123c78*/
    v14 = *(_BYTE *)(v6 + 74); /*0x123c86*/
    sub_123E10(a1, &v13); /*0x123c8a*/
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); ++i ) /*0x123c98*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), i); /*0x123cd2*/
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x123ce1*/
      v10 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 56LL))(v8); /*0x123cea*/
      v11 = "GJ_button_04.png"; /*0x123cee*/
      if ( v9 == v10 ) /*0x123cf8*/
        v11 = "GJ_button_01.png"; /*0x123cf8*/
      sub_41FC0(v8, v11); /*0x123cfc*/
    }
    v12 = 707; /*0x123d36*/
    if ( !*(_BYTE *)(a1 + 856) ) /*0x123d3b*/
      v12 = 704; /*0x123d42*/
    (**(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 792) + 320LL))( /*0x123d4b*/
      *(_QWORD *)(a1 + 792) + 320LL,
      a1 + v12);
    return sub_1240B0(a1); /*0x123d50*/
  }
  return result; /*0x123d5a*/
}

// [4/4] Address: 0x123d70
// Method: ColorSelectLiveOverlay::keyBackClicked
__int64 __fastcall ColorSelectLiveOverlay_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  void (__fastcall ***v3)(_QWORD, _QWORD *); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x123d76*/
  *(_BYTE *)(a1 - 336 + 857) = 0; /*0x123d82*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v1 + 992LL))(v1, 0); /*0x123d8c*/
  v3 = (void (__fastcall ***)(_QWORD, _QWORD *))v1[92]; /*0x123d92*/
  if ( v3 ) /*0x123d9c*/
    (**v3)(v3, v1); /*0x123da4*/
  LOBYTE(v2) = 1; /*0x123da9*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2);
}

// Address: 0xbbfd0
// Method: ColorSelectLiveOverlay::init
// Hidden C++ exception states: #wind=8
char __fastcall ColorSelectLiveOverlay_init(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  float v12; // xmm9_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  struct cocos2d::CCSprite *v15; // rax
  int v16; // ebx
  cocos2d::CCObject *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  char v28; // cl
  cocos2d::CCNode *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rbx
  int v42; // ebx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rcx
  float v51; // [rsp+60h] [rbp-71h] BYREF
  float v52; // [rsp+64h] [rbp-6Dh]
  _DWORD *v53; // [rsp+68h] [rbp-69h] BYREF
  __int128 *v54; // [rsp+70h] [rbp-61h] BYREF
  __int128 *v55; // [rsp+78h] [rbp-59h]
  _DWORD v56[4]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v57; // [rsp+90h] [rbp-41h]
  __int64 v58; // [rsp+98h] [rbp-39h]
  __int128 v59; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-21h]
  __int64 v61; // [rsp+B8h] [rbp-19h]

  result = sub_6060E0(a1, 0, 0, a4, 1126825984, 2, 0);
  if ( result )
  {
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    cocos2d::CCDirector::getWinSize(v11, &v51);
    v12 = v51 * 0.5;
    v13 = v52 * 0.5;
    v14 = (float)(v52 * 0.5) + 85.0;
    v56[3] = 0;
    v57 = 11;
    v58 = 15;
    strcpy((char *)v56, "Level Audio");
    sub_606E80(a1, v56);
    v15 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    v16 = (int)v15;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 160LL))(v15);
    v17 = CCMenuItemSpriteExtra_create(v16, 0, a1, (__int64)sub_9C4B8);
    *((_DWORD *)v17 + 93) = 1069547520;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v17);
    v18 = *(_QWORD *)v17;
    v19 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v53, (float)(v12 - 170.0) + 8.0, v14 - 12.0);
    cocos2d::CCNode::convertToNodeSpace(v19, &v54, v20);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v18 + 184))(v17, v21);
    v54 = &v59;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    *(_QWORD *)&v59 = sub_3C460(160);
    v60 = 152;
    v61 = 159;
    strcpy(
      (char *)v59,
      "Downloads all songs and SFX used in this level.\n"
      "<cy>Size</c> is total audio vs the <cy>upload limit</c>. <cr>Red</c> means the level cannot be uploaded.");
    v56[3] = 0;
    v57 = 11;
    v58 = 15;
    strcpy((char *)v56, "Level Audio");
    v22 = InfoAlertButton_create((__int64)v56, (__int64)&v59);
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v22);
    v23 = *(_QWORD *)v22;
    v24 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, (float)(v12 + 170.0) - 16.0, v14 - 16.0);
    cocos2d::CCNode::convertToNodeSpace(v24, &v53, v25);
    (*(void (__fastcall **)(char *, __int64))(v23 + 184))(v22, v26);
    if ( a2 )
    {
      v27 = (unsigned int)SongInfoObject_create_0(a2);
      v28 = 0;
    }
    else
    {
      v27 = sub_463C00(a3);
      v28 = 1;
    }
    v29 = CustomSongWidget_create(v27, 0, 0, 0, 1, v28, 0, 0, 0, 0, 1);
    *(_QWORD *)(a1 + 1008) = v29;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v29,
      2);
    v30 = **(_QWORD **)(a1 + 1008);
    v31 = *(_QWORD *)(a1 + 1008);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, v12, v13 - 6.0);
    (*(void (__fastcall **)(__int64, __int64))(v30 + 184))(v31, v32);
    CustomSongWidget_getSongInfoIfUnloaded(*(_QWORD *)(a1 + 1008));
    v54 = &v59;
    sub_3E4F0(&v59, a5);
    v34 = v33;
    sub_3E4F0(v56, a4);
    sub_16AE50(*(_QWORD *)(a1 + 1008), v35, v34, 0);
    if ( *(_QWORD *)(a4 + 16) || *(_QWORD *)(a5 + 16) )
    {
      v54 = &v59;
      v53 = v56;
      sub_3E4F0(&v59, a5);
      v37 = v36;
      sub_3E4F0(v56, a4);
      v39 = v38;
      v40 = qword_906070;
      if ( !qword_906070 )
      {
        v55 = (__int128 *)operator new(0x3D0u);
        qword_906070 = sub_47C350(v55);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
        v40 = qword_906070;
      }
      v41 = v40;
      if ( !v40 )
      {
        v55 = (__int128 *)operator new(0x3D0u);
        qword_906070 = sub_47C350(v55);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
        v40 = qword_906070;
      }
      v42 = *(_DWORD *)(v41 + 404);
      v43 = sub_487880(v40, v39, v37);
      v44 = *(_QWORD *)(a1 + 1008);
      *(_DWORD *)(v44 + 608) = v43;
      *(_DWORD *)(v44 + 612) = v42;
      CustomSongWidget_updateMultiAssetInfo(v44, 0);
      v45 = qword_906070;
      if ( !qword_906070 )
      {
        v55 = (__int128 *)operator new(0x3D0u);
        qword_906070 = sub_47C350(v55);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
        v45 = qword_906070;
      }
      MusicDownloadManager_addMusicDownloadDelegate(v45, a1 + 1000);
      v55 = &v59;
      v54 = (__int128 *)v56;
      sub_3E4F0(&v59, a5);
      v47 = v46;
      sub_3E4F0(v56, a4);
      v49 = v48;
      v50 = qword_906070;
      if ( !qword_906070 )
      {
        v53 = operator new(0x3D0u);
        qword_906070 = sub_47C350(v53);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
        v50 = qword_906070;
      }
      sub_487C20(v50, v49, v47);
    }
    return 1;
  }
  return result;
}
