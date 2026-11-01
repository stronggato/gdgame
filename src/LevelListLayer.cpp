#include <Geode/binding/LevelListLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/27] Address: 0x180220
// Method: LevelListLayer::confirmClone
// Hidden C++ exception states: #wind=1
void __fastcall LevelListLayer_confirmClone(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  __int64 v3; // rbx
  __int128 v4; // [rsp+50h] [rbp-48h] BYREF
  __int64 v5; // [rsp+60h] [rbp-38h]
  __int64 v6; // [rsp+68h] [rbp-30h]
  _BYTE v7[40]; // [rsp+70h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 568) ) /*0x180229*/
  {
    v1 = a1 + 552; /*0x180236*/
    if ( !a1 ) /*0x180242*/
      v1 = 0; /*0x180242*/
    v4 = 0; /*0x180249*/
    *(_QWORD *)&v4 = sub_3C460(32); /*0x180262*/
    v5 = 23; /*0x180267*/
    v6 = 31; /*0x180270*/
    strcpy((char *)v4, "<cy>Save</c> the level?"); /*0x180280*/
    v2 = sub_3E4F0(v7, &v4); /*0x1802bc*/
    v3 = FLAlertLayer_create_0( /*0x180310*/
           v1,
           (unsigned int)"Save",
           v2,
           (unsigned int)&unk_734D08,
           (__int64)"YES",
           1133903872,
           0,
           0,
           1065353216);
    sub_3C310(&v4); /*0x180318*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 3); /*0x18032c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 1064LL))(v3); /*0x18033c*/
  }
}

// [2/27] Address: 0x3e26a0
// Method: LevelListLayer::loadLevelsFailed
__int64 __fastcall LevelListLayer_loadLevelsFailed(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = sub_3E05D0(a1 - 544, a2); /*0x3e26b0*/
  if ( (_BYTE)result ) /*0x3e26b7*/
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 336LL))(*(_QWORD *)(a1 + 192), 0); /*0x3e26c5*/
    v5 = *(_QWORD *)(a1 + 104); /*0x3e26cb*/
    if ( v5 ) /*0x3e26d2*/
    {
      LOBYTE(v4) = 1; /*0x3e26d7*/
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 336LL))(v5, v4); /*0x3e26de*/
    }
  }
  return result; /*0x3e26e5*/
}

// [3/27] Address: 0x41f200
// Method: LevelListLayer::onViewProfile
void __fastcall LevelListLayer_onViewProfile(__int64 a1)
{
  __int64 v1; // rax

  if ( !*(_BYTE *)(a1 + 488) ) /*0x41f204*/
  {
    v1 = sub_4447D0(*(_QWORD *)(a1 + 504), 0); /*0x41f216*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 1064LL))(v1); /*0x41f22c*/
  }
}

// [4/27] Address: 0x426f50
// Method: LevelListLayer::scene
// Hidden C++ exception states: #wind=4
__int64 __fastcall LevelListLayer_scene(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  char *v4; // rdi

  v2 = cocos2d::CCScene::create(); /*0x426f6d*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v3) + 232) = v2; /*0x426f76*/
  v4 = (char *)operator new(0x408u); /*0x426f87*/
  sub_3DE050(v4); /*0x426f92*/
  *(_QWORD *)v4 = &LevelListLayer::`vftable'; /*0x426f9f*/
  *((_QWORD *)v4 + 40) = &LevelListLayer::`vftable'; /*0x426fa9*/
  *((_QWORD *)v4 + 41) = &LevelListLayer::`vftable'; /*0x426fb7*/
  *((_QWORD *)v4 + 42) = &LevelListLayer::`vftable'; /*0x426fc5*/
  *((_QWORD *)v4 + 43) = &LevelListLayer::`vftable'; /*0x426fd3*/
  *((_QWORD *)v4 + 44) = &LevelListLayer::`vftable'; /*0x426fe1*/
  *((_QWORD *)v4 + 51) = &LevelListLayer::`vftable'; /*0x426fef*/
  *((_QWORD *)v4 + 54) = &LevelListLayer::`vftable'; /*0x426ffd*/
  *((_QWORD *)v4 + 68) = &LevelListLayer::`vftable'; /*0x42700b*/
  *((_QWORD *)v4 + 69) = &LevelListLayer::`vftable'; /*0x427019*/
  *((_QWORD *)v4 + 70) = &LevelListLayer::`vftable'; /*0x427027*/
  *((_QWORD *)v4 + 71) = &LevelListLayer::`vftable'; /*0x427035*/
  *((_QWORD *)v4 + 72) = &LevelListLayer::`vftable'; /*0x427043*/
  *((_QWORD *)v4 + 73) = &LevelListLayer::`vftable'; /*0x427051*/
  *((_QWORD *)v4 + 105) = &LevelListLayer::`vftable'; /*0x42705f*/
  *((_QWORD *)v4 + 106) = &LevelListLayer::`vftable'; /*0x42706d*/
  *((_QWORD *)v4 + 107) = &LevelListLayer::`vftable'; /*0x42707b*/
  *((_QWORD *)v4 + 108) = &LevelListLayer::`vftable'; /*0x427089*/
  *((_QWORD *)v4 + 109) = &LevelListLayer::`vftable'; /*0x427097*/
  *((_QWORD *)v4 + 110) = 0; /*0x4270a0*/
  *(_OWORD *)(v4 + 888) = 0; /*0x4270aa*/
  *((_QWORD *)v4 + 113) = 0; /*0x4270b1*/
  *((_QWORD *)v4 + 114) = 15; /*0x4270b8*/
  v4[888] = 0; /*0x4270c3*/
  *((_QWORD *)v4 + 115) = 0; /*0x4270ca*/
  *((_OWORD *)v4 + 58) = 0; /*0x4270d1*/
  *((_QWORD *)v4 + 118) = 0; /*0x4270d8*/
  *((_QWORD *)v4 + 119) = 15; /*0x4270df*/
  v4[928] = 0; /*0x4270ea*/
  *((_QWORD *)v4 + 120) = 0; /*0x4270f1*/
  v4[968] = 0; /*0x4270f8*/
  *((_QWORD *)v4 + 122) = 0; /*0x4270ff*/
  *((_DWORD *)v4 + 246) = 0; /*0x427106*/
  *((_QWORD *)v4 + 124) = 0; /*0x42710c*/
  *((_QWORD *)v4 + 125) = 0; /*0x427113*/
  *((_QWORD *)v4 + 126) = 0; /*0x42711a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v4 + 1016)); /*0x427128*/
  v4[1024] = 0; /*0x42712e*/
  if ( (unsigned __int8)CommentCell_loadFromComment(v4, a1) ) /*0x42713b*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x427147*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x427157*/
    v4 = 0; /*0x42715a*/
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 464LL))(v2, v4); /*0x427166*/
  return v2; /*0x42716f*/
}

// [5/27] Address: 0x428dc0
// Method: LevelListLayer::onEnter
void __fastcall LevelListLayer_onEnter(cocos2d::CCLayer *a1)
{
  cocos2d::CCLayer::onEnter(a1); /*0x428dc9*/
  if ( *((_BYTE *)a1 + 1024) ) /*0x428dcf*/
    SetupSpawnPopup_updateRemapButtons(a1); /*0x428de0*/
}

// [6/27] Address: 0x428df0
// Method: LevelListLayer::onExit
void __fastcall LevelListLayer_onExit(cocos2d::CCLayer *a1)
{
  cocos2d::CCLayer::onExit(a1); /*0x428df9*/
  *((_BYTE *)a1 + 1024) = 1; /*0x428dff*/
}

// [7/27] Address: 0x42a3c0
// Method: LevelListLayer::onRefreshLevelList
// Hidden C++ exception states: #wind=4
__int64 __fastcall LevelListLayer_onRefreshLevelList(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  void *v9; // rdx
  _BYTE *Key; // rax
  size_t v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  void *v17; // [rsp+50h] [rbp+8h]
  void *v18; // [rsp+50h] [rbp+8h]
  void *v19; // [rsp+50h] [rbp+8h]

  v3 = a1 + 544; /*0x42a3d2*/
  if ( !a1 ) /*0x42a3de*/
    v3 = 0; /*0x42a3de*/
  v4 = *(_QWORD *)&qword_905FB0; /*0x42a3e2*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x42a3ec*/
  {
    v17 = operator new(0x690u); /*0x42a3f8*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0x42a406*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42a417*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x42a419*/
  }
  *(_QWORD *)(v4 + 1352) = v3; /*0x42a420*/
  v5 = *(_QWORD *)(a1 + 648); /*0x42a427*/
  if ( v5 ) /*0x42a431*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 336LL))(v5, 0); /*0x42a438*/
  LOBYTE(a2) = 1; /*0x42a448*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 736) + 336LL))(*(_QWORD *)(a1 + 736), a2); /*0x42a44a*/
  sub_3E1980(a1, 0); /*0x42a455*/
  v6 = GJSearchObject_create(0); /*0x42a461*/
  v7 = GameToolbox_intToString(v16, *(unsigned int *)(*(_QWORD *)(a1 + 920) + 344LL)); /*0x42a476*/
  v8 = v7; /*0x42a47b*/
  if ( v6 + 328 != v7 ) /*0x42a48d*/
  {
    v9 = (void *)v7; /*0x42a48f*/
    if ( *(_QWORD *)(v7 + 24) > 0xFu ) /*0x42a497*/
      v9 = *(void **)v7; /*0x42a499*/
    sub_3F5A0((void *)(v6 + 328), v9, *(_QWORD *)(v7 + 16)); /*0x42a4a0*/
  }
  sub_3C310(v8); /*0x42a4a9*/
  *(_DWORD *)(v6 + 464) = 1; /*0x42a4ae*/
  Key = (_BYTE *)GJSearchObject_getKey(v6); /*0x42a4bb*/
  v11 = -1; /*0x42a4c0*/
  do /*0x42a4d3*/
    ++v11; /*0x42a4d0*/
  while ( Key[v11] ); /*0x42a4d3*/
  v12 = (_QWORD *)(a1 + 928); /*0x42a4da*/
  sub_3F5A0((void *)(a1 + 928), Key, v11); /*0x42a4e7*/
  if ( *(_QWORD *)(a1 + 952) > 0xFu ) /*0x42a4f1*/
    v12 = (_QWORD *)*v12; /*0x42a4f3*/
  v13 = *(_QWORD *)&qword_905FB0; /*0x42a4f6*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x42a500*/
  {
    v18 = operator new(0x690u); /*0x42a50c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0x42a51a*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42a527*/
    v13 = *(_QWORD *)&qword_905FB0; /*0x42a52b*/
  }
  sub_21EF80(v13, v12); /*0x42a535*/
  v14 = *(_QWORD *)&qword_905FB0; /*0x42a53a*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x42a544*/
  {
    v19 = operator new(0x690u); /*0x42a550*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0x42a55e*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42a56f*/
    v14 = *(_QWORD *)&qword_905FB0; /*0x42a571*/
  }
  return sub_22A840(v14, v6); /*0x42a57b*/
}

// [8/27] Address: 0x42a590
// Method: LevelListLayer::loadLevelsFinished
// Hidden C++ exception states: #wind=2
void __fastcall LevelListLayer_loadLevelsFinished(__int64 a1, cocos2d::CCObject *a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  const char *v9; // rcx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  char **v14; // rdx
  char *v15; // rsi
  unsigned __int64 v16; // r15
  const void *v17; // rcx
  size_t v18; // rbp
  size_t v19; // r8
  size_t v20; // r14
  int v21; // edi
  char *v22; // rax
  __int64 v23; // rdi
  __int64 Key; // rax
  cocos2d::CCObject *v25; // rcx
  __int64 v26; // rcx
  char v27; // dl
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // rax
  unsigned int *v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 *i; // r8
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // r11
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // [rsp+30h] [rbp-58h]
  void *v42; // [rsp+30h] [rbp-58h]
  char *String[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v45; // [rsp+50h] [rbp-38h]

  v8 = *(_QWORD *)(a1 + 120); /*0x42a5c4*/
  if ( v8 && *(_DWORD *)(v8 + 320) == 25 ) /*0x42a5d8*/
  {
    sub_3E4F0(String, v8 + 328); /*0x42a5ea*/
    v9 = (const char *)String; /*0x42a5ef*/
    if ( v45 > 0xF ) /*0x42a5fa*/
      v9 = String[0]; /*0x42a5fa*/
    v10 = atoi(v9); /*0x42a606*/
    sub_3C310(String); /*0x42a60d*/
    v11 = *(_QWORD *)&qword_905FB0; /*0x42a612*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x42a61c*/
    {
      v41 = operator new(0x690u); /*0x42a628*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v41); /*0x42a636*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42a647*/
      v11 = *(_QWORD *)&qword_905FB0; /*0x42a649*/
    }
    GameLevelManager_markLevelAsDownloaded(v11, -v10); /*0x42a654*/
    v12 = *(_QWORD *)(a1 + 376); /*0x42a659*/
    if ( v10 == *(_DWORD *)(v12 + 344) ) /*0x42a666*/
      *(_BYTE *)(v12 + 398) = 1; /*0x42a668*/
  }
  if ( a4 == 1 ) /*0x42a673*/
  {
    *(_OWORD *)String = 0; /*0x42a67c*/
    Size = 0; /*0x42a681*/
    v45 = 0; /*0x42a686*/
    v13 = -1; /*0x42a68b*/
    do /*0x42a695*/
      ++v13; /*0x42a692*/
    while ( *(_BYTE *)(a3 + v13) ); /*0x42a695*/
    sub_3C230(String); /*0x42a6a4*/
    v14 = String; /*0x42a6a9*/
    v15 = String[0]; /*0x42a6ae*/
    v16 = v45; /*0x42a6b3*/
    if ( v45 > 0xF ) /*0x42a6bc*/
      v14 = (char **)String[0]; /*0x42a6bc*/
    v17 = (const void *)(a1 + 384); /*0x42a6c0*/
    if ( *(_QWORD *)(a1 + 408) > 0xFu ) /*0x42a6cf*/
      v17 = *(const void **)(a1 + 384); /*0x42a6d1*/
    v18 = *(_QWORD *)(a1 + 400); /*0x42a6d8*/
    v19 = v18; /*0x42a6df*/
    v20 = Size; /*0x42a6e2*/
    if ( Size < v18 ) /*0x42a6ea*/
      v19 = Size; /*0x42a6ea*/
    v21 = memcmp(v17, v14, v19); /*0x42a6f3*/
    if ( !v21 ) /*0x42a6f7*/
    {
      if ( v18 >= v20 ) /*0x42a6fc*/
        v21 = v18 > v20; /*0x42a708*/
      else
        v21 = -1; /*0x42a6fe*/
    }
    if ( v16 > 0xF ) /*0x42a710*/
    {
      v22 = v15; /*0x42a716*/
      if ( v16 + 1 >= 0x1000 ) /*0x42a720*/
      {
        v15 = (char *)*((_QWORD *)v15 - 1); /*0x42a726*/
        if ( (unsigned __int64)(v22 - v15 - 8) > 0x1F ) /*0x42a735*/
          invoke_watson(0, 0, 0, 0, 0); /*0x42a746*/
      }
      j_j_free(v15); /*0x42a750*/
    }
    if ( !v21 ) /*0x42a757*/
    {
      SetupSpawnPopup_updateRemapButtons(a1 - 544); /*0x42a764*/
      v23 = *(_QWORD *)&qword_905FB0; /*0x42a769*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x42a773*/
      {
        v42 = operator new(0x690u); /*0x42a77f*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v42); /*0x42a78d*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42a79a*/
        v23 = *(_QWORD *)&qword_905FB0; /*0x42a79d*/
      }
      Key = GJSearchObject_getKey(*(_QWORD *)(a1 + 120)); /*0x42a7a8*/
      sub_21EF80(v23, Key); /*0x42a7b3*/
      LevelBrowserLayer_loadPage(a1 - 544, *(_QWORD *)(a1 + 120)); /*0x42a7c3*/
    }
  }
  else if ( (unsigned __int8)sub_3E05D0(a1 - 544, a3) ) /*0x42a7d7*/
  {
    v25 = *(cocos2d::CCObject **)(a1 + 112); /*0x42a7e4*/
    if ( v25 ) /*0x42a7eb*/
      cocos2d::CCObject::release(v25); /*0x42a7ed*/
    *(_QWORD *)(a1 + 112) = a2; /*0x42a7f3*/
    cocos2d::CCObject::retain(a2); /*0x42a7fa*/
    if ( *(_QWORD *)(a1 + 120) && (unsigned __int8)GJSearchObject_isLevelSearchObject() ) /*0x42a809*/
    {
      v27 = 0; /*0x42a812*/
      if ( *(_QWORD *)(a1 + 168) ) /*0x42a814*/
      {
        v28 = *(_DWORD *)(v26 + 320) - 98; /*0x42a824*/
        if ( !v28 || (v29 = v28 - 1) == 0 || (v30 = v29 - 1) == 0 || (unsigned int)(v30 - 2) <= 1 ) /*0x42a836*/
          v27 = 1; /*0x42a83d*/
      }
      v31 = *(_QWORD *)(a1 + 112); /*0x42a83f*/
      if ( v31 ) /*0x42a846*/
      {
        v32 = *(unsigned int **)(v31 + 56); /*0x42a848*/
        v33 = *v32; /*0x42a84c*/
        if ( (_DWORD)v33 ) /*0x42a850*/
        {
          v34 = (__int64 *)*((_QWORD *)v32 + 2); /*0x42a852*/
          for ( i = &v34[v33 - 1]; v34 <= i; ++v34 ) /*0x42a861*/
          {
            v36 = *v34; /*0x42a863*/
            if ( !*v34 ) /*0x42a863*/
              break; /*0x42a869*/
            *(_BYTE *)(v36 + 843) = 0; /*0x42a86b*/
            *(_BYTE *)(v36 + 844) = v27; /*0x42a872*/
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 168) ) /*0x42a881*/
    {
      v37 = sub_3E6780(a1 - 544); /*0x42a894*/
      sub_3A56E0(v38, v37); /*0x42a89e*/
    }
    sub_3E1980(a1 - 544, *(_QWORD *)(a1 + 112)); /*0x42a8ae*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 336LL))(*(_QWORD *)(a1 + 192), 0); /*0x42a8bf*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), 0); /*0x42a8ce*/
    v40 = *(_QWORD *)(a1 + 104); /*0x42a8d4*/
    if ( v40 ) /*0x42a8db*/
    {
      LOBYTE(v39) = 1; /*0x42a8e0*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 336LL))(v40, v39); /*0x42a8e2*/
    }
  }
}

// [9/27] Address: 0x42a910
// Method: LevelListLayer::cellPerformedAction
// Hidden C++ exception states: #wind=3
char __fastcall LevelListLayer_cellPerformedAction(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  float v10; // xmm0_4
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // r15
  int j; // ebp
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  void (__fastcall *v19)(_QWORD *); // rdx
  __int64 v21; // rcx
  _DWORD *i; // rax
  int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rsi
  _DWORD *v27; // rcx
  _BYTE *v28; // r8
  _BYTE *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  void *v32; // rcx
  __int64 v33; // rcx
  void *Block[2]; // [rsp+38h] [rbp-280h] BYREF
  __int64 v35; // [rsp+48h] [rbp-270h]
  unsigned __int64 v36; // [rsp+50h] [rbp-268h]
  _BYTE v37[528]; // [rsp+60h] [rbp-258h] BYREF

  v7 = 0; /*0x42a93b*/
  if ( a3 != 29 || !a4 ) /*0x42a94a*/
    return LevelBrowserLayer_cellPerformedAction((_QWORD *)a1, a2, a3, a4); /*0x42acee*/
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 568) + 328LL) - *(_DWORD *)(*(_QWORD *)(a2 + 568) + 332LL); /*0x42a95d*/
  *(_DWORD *)(a1 + 200) = 0; /*0x42a963*/
  v9 = *(_QWORD *)(a1 + 32); /*0x42a969*/
  v10 = 0.0; /*0x42a96d*/
  if ( v9 ) /*0x42a973*/
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 544) + 424LL) + 480LL); /*0x42a983*/
    v10 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 200LL))(v11) + 4); /*0x42a993*/
    *(float *)(a1 + 200) = v10; /*0x42a998*/
  }
  if ( a4 == 2 ) /*0x42a9a6*/
  {
    v24 = *(_QWORD *)(a1 + 32); /*0x42ab69*/
    if ( v24 ) /*0x42ab70*/
      *(float *)(a1 + 200) = v10 + *(float *)(*(_QWORD *)(v24 + 544) + 452LL); /*0x42ab81*/
    v25 = *(_DWORD *)(*(_QWORD *)(a2 + 568) + 328LL) - *(_DWORD *)(*(_QWORD *)(a2 + 568) + 332LL); /*0x42ab97*/
    v26 = *(_QWORD *)(a1 + 344); /*0x42ab9d*/
    v27 = *(_DWORD **)(v26 + 320); /*0x42aba4*/
    v28 = *(_BYTE **)(v26 + 328); /*0x42abab*/
    if ( v27 != (_DWORD *)v28 ) /*0x42abb5*/
    {
      while ( 1 ) /*0x42abb7*/
      {
        v29 = v27 + 1; /*0x42abb7*/
        if ( *v27 == v25 ) /*0x42abbd*/
          break; /*0x42abbd*/
        ++v27; /*0x42abbf*/
        if ( v29 == v28 ) /*0x42abc5*/
          goto LABEL_34; /*0x42abc5*/
      }
      memmove(v27, v29, v28 - v29); /*0x42abcc*/
      *(_QWORD *)(v26 + 328) -= 4LL; /*0x42abd1*/
      sub_26FDC0(v26); /*0x42abdc*/
    }
LABEL_34:
    fmt::BasicWriter<char>::BasicWriter<char>(v37); /*0x42abe1*/
    fmt::BasicWriter<char>::operator<<(v37, v25); /*0x42abf4*/
    v30 = fmt::BasicWriter<char>::c_str(v37); /*0x42abff*/
    *(_OWORD *)Block = 0; /*0x42ac08*/
    v35 = 0; /*0x42ac0d*/
    v36 = 0; /*0x42ac12*/
    v31 = -1; /*0x42ac17*/
    do /*0x42ac23*/
      ++v31; /*0x42ac20*/
    while ( *(_BYTE *)(v30 + v31) ); /*0x42ac23*/
    sub_3C230(Block); /*0x42ac32*/
    fmt::BasicWriter<char>::~BasicWriter<char>(v37); /*0x42ac3d*/
    cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(v26 + 576), Block); /*0x42ac50*/
    if ( v36 > 0xF ) /*0x42ac60*/
    {
      v32 = Block[0]; /*0x42ac65*/
      if ( v36 + 1 >= 0x1000 ) /*0x42ac74*/
      {
        v32 = (void *)*((_QWORD *)Block[0] - 1); /*0x42ac7a*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v32 - 8) > 0x1F ) /*0x42ac89*/
          invoke_watson(0, 0, 0, 0, 0); /*0x42ac9a*/
      }
      j_j_free(v32); /*0x42aca1*/
    }
    *(_BYTE *)(v26 + 399) = 1; /*0x42aca6*/
    goto LABEL_42; /*0x42aca6*/
  }
  if ( a4 == 3 || a4 == 4 ) /*0x42a9b8*/
  {
    v21 = *(_QWORD *)(a1 + 344); /*0x42ab1c*/
    for ( i = *(_DWORD **)(v21 + 320); i != *(_DWORD **)(v21 + 328); ++i ) /*0x42ab31*/
    {
      if ( *i == v8 ) /*0x42ab35*/
        break; /*0x42ab35*/
      ++v7; /*0x42ab37*/
    }
    v23 = 1; /*0x42ab46*/
    if ( a4 == 3 ) /*0x42ab55*/
      v23 = -1; /*0x42ab55*/
    sub_26F690(v21, v8, (unsigned int)(v7 + v23)); /*0x42ab5f*/
LABEL_42:
    sub_3E1980(a1 - 576, 0); /*0x42acad*/
    v33 = *(_QWORD *)(a1 + 32); /*0x42acbb*/
    if ( v33 ) /*0x42acc2*/
    {
      *(_DWORD *)(*(_QWORD *)(v33 + 544) + 464LL) = *(_DWORD *)(a1 + 408); /*0x42acd2*/
      CustomListView_reloadAll(); /*0x42acd8*/
    }
    return 1; /*0x42acd8*/
  }
  if ( a4 != 5 ) /*0x42a9c1*/
    return 1; /*0x42acdf*/
  v12 = *(_QWORD *)(a1 + 344); /*0x42a9c7*/
  v13 = *(_DWORD **)(v12 + 328); /*0x42a9ce*/
  v14 = *(_DWORD **)(v12 + 320); /*0x42a9d5*/
  v15 = v13 - v14; /*0x42a9e2*/
  for ( j = 0; v14 != v13; ++v14 ) /*0x42a9eb*/
  {
    if ( *v14 == v8 ) /*0x42a9f2*/
      break; /*0x42a9f2*/
    ++j; /*0x42a9f4*/
  }
  v17 = operator new(0x2C8u); /*0x42aa09*/
  SetIDPopup_SetIDPopup(v17); /*0x42aa14*/
  *v17 = &SetLevelOrderPopup::`vftable'; /*0x42aa20*/
  v17[40] = &SetLevelOrderPopup::`vftable'; /*0x42aa2a*/
  v17[41] = &SetLevelOrderPopup::`vftable'; /*0x42aa38*/
  v17[42] = &SetLevelOrderPopup::`vftable'; /*0x42aa46*/
  v17[43] = &SetLevelOrderPopup::`vftable'; /*0x42aa54*/
  v17[44] = &SetLevelOrderPopup::`vftable'; /*0x42aa62*/
  v17[51] = &SetLevelOrderPopup::`vftable'; /*0x42aa70*/
  v17[54] = &SetLevelOrderPopup::`vftable'; /*0x42aa7e*/
  v17[68] = &SetLevelOrderPopup::`vftable'; /*0x42aa8c*/
  *((_DWORD *)v17 + 176) = 0; /*0x42aa93*/
  if ( (unsigned __int8)SetLevelOrderPopup_init(v17, v8, (unsigned int)(j + 1), (unsigned int)v15) ) /*0x42aaa5*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v17); /*0x42aab1*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v17 + 8LL))(v17, 1); /*0x42aac1*/
    v17 = 0; /*0x42aac4*/
  }
  v18 = a1 - 16; /*0x42aace*/
  if ( a1 == 576 ) /*0x42aad5*/
    v18 = 0; /*0x42aad5*/
  v17[87] = v18; /*0x42aad9*/
  (*(void (__fastcall **)(_QWORD *, __int64))(*v17 + 64LL))(v17, 1003); /*0x42aaeb*/
  v19 = *(void (__fastcall **)(_QWORD *))(*v17 + 1064LL); /*0x42aaf1*/
  if ( (char *)v19 == (char *)SetIDPopup_show ) /*0x42ab05*/
    SetIDPopup_show(v17); /*0x42ab07*/
  else
    v19(v17); /*0x42ab13*/
  return 1; /*0x42acf3*/
}

// [10/27] Address: 0x42ad20
// Method: LevelListLayer::setIDPopupClosed
void __fastcall LevelListLayer_setIDPopupClosed(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v6; // rcx

  if ( (*(unsigned int (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 56LL))(a2) == 1003 ) /*0x42ad46*/
  {
    sub_26F690(*(_QWORD *)(a1 + 360), a2[176], (unsigned int)(a3 - 1)); /*0x42ad5e*/
    sub_3E1980(a1 - 560, 0); /*0x42ad6c*/
    v6 = *(_QWORD *)(a1 + 48); /*0x42ad71*/
    if ( v6 ) /*0x42ad7d*/
    {
      *(_DWORD *)(*(_QWORD *)(v6 + 544) + 464LL) = *(_DWORD *)(a1 + 424); /*0x42ad8c*/
      CustomListView_reloadAll(); /*0x42ada1*/
    }
  }
  else
  {
    LevelBrowserLayer_setIDPopupClosed(a1, (__int64)a2, a3); /*0x42adaf*/
  }
}

// [11/27] Address: 0x42add0
// Method: LevelListLayer::updateResultArray
__int64 __fastcall LevelListLayer_updateResultArray(__int64 a1)
{
  return GJLevelList_getListLevelsArray(*(_QWORD *)(a1 + 920));
}

// [12/27] Address: 0x42ade0
// Method: LevelListLayer::onBack
// Hidden C++ exception states: #wind=9
void __fastcall LevelListLayer_onBack(struct cocos2d::CCObject *a1)
{
  struct cocos2d::CCScene *v2; // rsi
  __int64 v3; // rcx
  bool v4; // bl
  bool v5; // bl
  void **v6; // rcx
  void **v7; // rdx
  void **v8; // rcx
  char *v9; // rcx
  size_t *v10; // rbx
  __int64 v11; // rax
  void *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  struct cocos2d::CCScene *v25; // rbx
  __int64 v26; // rcx
  cocos2d::CCDirector *v27; // rax
  __int64 v28; // rax
  cocos2d::CCTouchDispatcher *v29; // rax
  __int64 v30; // rdx
  void *v31; // [rsp+28h] [rbp-41h]
  void *v32; // [rsp+28h] [rbp-41h]
  char v33[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v34; // [rsp+38h] [rbp-31h]
  __int64 v35; // [rsp+40h] [rbp-29h]
  __int64 v36; // [rsp+48h] [rbp-21h]
  void *Src[5]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v38[32]; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v39[2]; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v40; // [rsp+A8h] [rbp+3Fh]
  unsigned __int64 v41; // [rsp+B0h] [rbp+47h]

  v2 = 0; /*0x42ae0d*/
  if ( !*((_BYTE *)a1 + 968) ) /*0x42ae0f*/
  {
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x42ae21*/
    v3 = *((_QWORD *)a1 + 122); /*0x42ae27*/
    if ( v3 ) /*0x42ae31*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 1032LL))(v3, 0); /*0x42ae38*/
    sub_3E4F0(v39, *((_QWORD *)a1 + 115) + 440LL); /*0x42ae50*/
    v4 = v40 == 0; /*0x42ae59*/
    sub_3C310(v39); /*0x42ae60*/
    if ( v4 ) /*0x42ae67*/
    {
      sub_3E4F0(v39, *((_QWORD *)a1 + 115) + 472LL); /*0x42ae7f*/
      v5 = v40 != 0; /*0x42ae88*/
      sub_3C310(v39); /*0x42ae8f*/
      if ( v5 ) /*0x42ae96*/
      {
        sub_3E4F0(Src, *((_QWORD *)a1 + 115) + 472LL); /*0x42aeaa*/
        v6 = (void **)(*((_QWORD *)a1 + 115) + 440LL); /*0x42aebe*/
        if ( v6 != Src ) /*0x42aecc*/
        {
          v7 = Src; /*0x42aece*/
          if ( Src[3] > (char *)&loc_D + 2 ) /*0x42aed7*/
            v7 = (void **)Src[0]; /*0x42aed7*/
          sub_3F5A0(v6, v7, (size_t)Src[2]); /*0x42aee0*/
        }
        v8 = Src; /*0x42aee6*/
      }
      else
      {
        v34 = 0; /*0x42aeec*/
        v35 = 7; /*0x42aef0*/
        v36 = 15; /*0x42aefe*/
        strcpy(v33, "Unknown"); /*0x42af09*/
        v9 = (char *)(*((_QWORD *)a1 + 115) + 440LL); /*0x42af34*/
        if ( v9 != v33 ) /*0x42af42*/
          sub_3F5A0(v9, v33, 7u); /*0x42af4e*/
        v8 = (void **)v33; /*0x42af54*/
      }
      sub_3C310(v8); /*0x42af58*/
    }
    v10 = (size_t *)sub_3E4F0(v38, (char *)a1 + 888); /*0x42af75*/
    Src[4] = v10; /*0x42af78*/
    v11 = *(_QWORD *)&qword_905FB0; /*0x42af7c*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x42af86*/
    {
      v31 = operator new(0x690u); /*0x42af92*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v31); /*0x42af9f*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42afb0*/
      v11 = *(_QWORD *)&qword_905FB0; /*0x42afb2*/
    }
    if ( (size_t *)(v11 + 1272) != v10 ) /*0x42afc3*/
    {
      v12 = v10; /*0x42afc5*/
      if ( v10[3] > 0xF ) /*0x42afcd*/
        v12 = (void *)*v10; /*0x42afcf*/
      sub_3F5A0((void *)(v11 + 1272), v12, v10[2]); /*0x42afd6*/
    }
    sub_3C310(v10); /*0x42afdf*/
    if ( *(_DWORD *)(*((_QWORD *)a1 + 115) + 584LL) == 2 ) /*0x42aff2*/
    {
      v14 = *(_QWORD *)&qword_905FB0; /*0x42aff8*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x42b002*/
      {
        v31 = operator new(0x690u); /*0x42b00e*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v31); /*0x42b01b*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42b02c*/
        v14 = *(_QWORD *)&qword_905FB0; /*0x42b02e*/
      }
      sub_3E4F0(v39, v14 + 1272); /*0x42b040*/
      v15 = v39; /*0x42b046*/
      if ( v41 > 0xF ) /*0x42b04f*/
        v15 = (_QWORD *)v39[0]; /*0x42b04f*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x42b05c*/
      {
        v31 = operator new(0x690u); /*0x42b068*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v31); /*0x42b075*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42b086*/
      }
      v16 = GJSearchObject_createFromKey(v15); /*0x42b08b*/
      if ( v16 ) /*0x42b093*/
        v2 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v16); /*0x42b09d*/
      sub_3C310(v39); /*0x42b0a4*/
      v17 = *(_QWORD *)&qword_905FB0; /*0x42b0a9*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x42b0b3*/
      {
        v31 = operator new(0x690u); /*0x42b0bf*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v31); /*0x42b0cc*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42b0dd*/
        v17 = *(_QWORD *)&qword_905FB0; /*0x42b0df*/
      }
      if ( *(_BYTE *)(v17 + 1344) || !v2 ) /*0x42b0f2*/
      {
        *(_BYTE *)(v17 + 1344) = 0; /*0x42b0f4*/
        v18 = GJSearchObject_create(102); /*0x42b105*/
        v2 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(v20, v19, v21, v22, v38, v31); /*0x42b10e*/
        *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v23) + 232) = v2; /*0x42b117*/
        v24 = sub_3DE4D0(v18); /*0x42b121*/
        (*(void (__fastcall **)(struct cocos2d::CCScene *, __int64))(*(_QWORD *)v2 + 464LL))(v2, v24); /*0x42b136*/
      }
      v25 = cocos2d::CCTransitionFade::create(0.5, v2); /*0x42b14a*/
      v27 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v26); /*0x42b14d*/
      cocos2d::CCDirector::replaceScene(v27, v25); /*0x42b159*/
    }
    else if ( *((_BYTE *)a1 + 748) ) /*0x42b161*/
    {
      v28 = cocos2d::CCDirector::sharedDirector(v13); /*0x42b16a*/
      v29 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 144LL))(v28); /*0x42b176*/
      cocos2d::CCTouchDispatcher::unregisterForcePrio(v29, a1); /*0x42b182*/
      LOBYTE(v30) = 1; /*0x42b18b*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v30); /*0x42b190*/
    }
    else
    {
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x42b1a0*/
      if ( !qword_905FD0 ) /*0x42b1ae*/
      {
        v32 = operator new(0x6E8u); /*0x42b1ba*/
        qword_905FD0 = sub_2723A0(v32); /*0x42b1c7*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x42b1d8*/
      }
      GameManager_safePopScene(); /*0x42b1da*/
    }
  }
}

// [13/27] Address: 0x42b210
// Method: LevelListLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
void __fastcall LevelListLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  int v7; // eax
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  void *Block[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  void *v13; // [rsp+48h] [rbp-40h]
  void *v14[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h]
  unsigned __int64 v16; // [rsp+68h] [rbp-20h]

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1001; /*0x42b244*/
  if ( v6 ) /*0x42b249*/
  {
    v7 = v6 - 3; /*0x42b24f*/
    if ( v7 ) /*0x42b252*/
    {
      if ( v7 == 1 ) /*0x42b257*/
      {
        if ( a3 ) /*0x42b26f*/
          LevelListLayer_cloneList(a1 - 552); /*0x42b27c*/
      }
      else
      {
        LevelBrowserLayer_FLAlert_Clicked((_QWORD *)a1, a2, a3); /*0x42b263*/
      }
    }
    else if ( a3 ) /*0x42b288*/
    {
      *(_OWORD *)v14 = 0; /*0x42b291*/
      v15 = 0; /*0x42b298*/
      v16 = 15; /*0x42b29d*/
      LOBYTE(v14[0]) = 0; /*0x42b2a6*/
      *(_OWORD *)Block = 0; /*0x42b2aa*/
      v12 = 0; /*0x42b2b0*/
      sub_42C620(a1 - 552, v14, Block); /*0x42b2c6*/
      v8 = Block[0]; /*0x42b2cc*/
      if ( Block[0] ) /*0x42b2d4*/
      {
        if ( ((v12 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x42b2ec*/
        {
          v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x42b2f2*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x42b301*/
            invoke_watson(0, 0, 0, 0, 0); /*0x42b312*/
        }
        j_j_free(v8); /*0x42b319*/
      }
      if ( v16 > 0xF ) /*0x42b328*/
      {
        v9 = v14[0]; /*0x42b331*/
        if ( v16 + 1 >= 0x1000 ) /*0x42b340*/
        {
          v9 = (void *)*((_QWORD *)v14[0] - 1); /*0x42b346*/
          if ( (unsigned __int64)((char *)v14[0] - (char *)v9 - 8) > 0x1F ) /*0x42b355*/
            invoke_watson(0, 0, 0, 0, 0); /*0x42b366*/
        }
        j_j_free(v9); /*0x42b36d*/
      }
    }
  }
  else if ( a3 ) /*0x42b376*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 1040LL))(*(_QWORD *)(a1 + 328), 0); /*0x42b384*/
    v10 = *(_QWORD *)&qword_905FB0; /*0x42b38a*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x42b394*/
    {
      v13 = operator new(0x690u); /*0x42b3a0*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x42b3ae*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42b3bf*/
      v10 = *(_QWORD *)&qword_905FB0; /*0x42b3c1*/
    }
    GameLevelManager_deleteLevelList(v10, *(unsigned int **)(a1 + 368)); /*0x42b3cf*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 552) + 1056LL))(a1 - 552, 0); /*0x42b3e4*/
    *(_BYTE *)(a1 + 416) = 1; /*0x42b3ea*/
  }
}

// [14/27] Address: 0x42b460
// Method: LevelListLayer::onFavorite
// Hidden C++ exception states: #wind=2
void __fastcall LevelListLayer_onFavorite(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  char v4; // bp
  __int64 *v5; // rsi
  __int64 v6; // rdi
  const char *v7; // rbx
  cocos2d::CCSpriteFrameCache *v8; // rax
  struct cocos2d::CCSpriteFrame *v9; // rax
  __int64 v10; // rcx
  void *v11; // [rsp+40h] [rbp+8h]
  void *v12; // [rsp+40h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 968) ) /*0x42b475*/
  {
    v3 = *(_QWORD *)(a1 + 920); /*0x42b482*/
    v4 = *(_BYTE *)(v3 + 396); /*0x42b489*/
    *(_BYTE *)(v3 + 396) = v4 == 0; /*0x42b497*/
    v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2); /*0x42b4aa*/
    v6 = *v5; /*0x42b4ad*/
    v7 = "gj_heartOff_001.png"; /*0x42b4b7*/
    if ( !v4 ) /*0x42b4c1*/
      v7 = "gj_heartOn_001.png"; /*0x42b4c1*/
    v8 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x42b4c5*/
    v9 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v8, v7); /*0x42b4d1*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v6 + 1008))(v5, v9); /*0x42b4dd*/
    v10 = *(_QWORD *)&qword_905FB0; /*0x42b4e3*/
    if ( v4 ) /*0x42b4ed*/
    {
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x42b537*/
      {
        v12 = operator new(0x690u); /*0x42b543*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v12); /*0x42b551*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42b562*/
        v10 = *(_QWORD *)&qword_905FB0; /*0x42b564*/
      }
      GameLevelManager_deleteLevelList(v10, *(unsigned int **)(a1 + 920)); /*0x42b572*/
    }
    else
    {
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x42b4f2*/
      {
        v11 = operator new(0x690u); /*0x42b4fe*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0x42b50c*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42b51d*/
        v10 = *(_QWORD *)&qword_905FB0; /*0x42b51f*/
      }
      sub_22AFD0(v10, *(_QWORD *)(a1 + 920)); /*0x42b52d*/
    }
  }
}

// [15/27] Address: 0x42b6b0
// Method: LevelListLayer::shareCommentClosed
// Hidden C++ exception states: #wind=2
double __fastcall LevelListLayer_shareCommentClosed(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void **v6; // rcx
  void **v7; // rdx
  void *Src[2]; // [rsp+28h] [rbp-70h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-60h]
  _BYTE v11[32]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v12; // [rsp+68h] [rbp-30h]

  v12 = a2; /*0x42b6d4*/
  v4 = sub_3E4F0(v11, a2); /*0x42b6e0*/
  v5 = v4; /*0x42b6e5*/
  if ( *(_QWORD *)(v4 + 16) ) /*0x42b6ed*/
  {
    cocos2d::ZipUtils::base64URLEncode(Src, v4); /*0x42b72f*/
  }
  else
  {
    *(_OWORD *)Src = 0; /*0x42b6f6*/
    Size[0] = 0; /*0x42b6fb*/
    Size[1] = 0; /*0x42b700*/
    *(_OWORD *)Src = *(_OWORD *)v4; /*0x42b708*/
    *(_OWORD *)Size = *(_OWORD *)(v4 + 16); /*0x42b711*/
    *(_QWORD *)(v4 + 16) = 0; /*0x42b716*/
    *(_QWORD *)(v4 + 24) = 15; /*0x42b71a*/
    *(_BYTE *)v4 = 0; /*0x42b722*/
  }
  sub_3C310(v5); /*0x42b739*/
  v6 = (void **)(*(_QWORD *)(a1 + 336) + 536LL); /*0x42b74f*/
  if ( v6 != Src ) /*0x42b75e*/
  {
    v7 = Src; /*0x42b760*/
    if ( Size[1] > 0xF ) /*0x42b76b*/
      v7 = (void **)Src[0]; /*0x42b76b*/
    sub_3F5A0(v6, v7, Size[0]); /*0x42b776*/
  }
  sub_3C310(Src); /*0x42b781*/
  return sub_3C310(a2); /*0x42b78f*/
}

// [16/27] Address: 0x42b7b0
// Method: LevelListLayer::onInfo
void __fastcall LevelListLayer_onInfo(__int64 a1)
{
  __int64 v1; // rax

  if ( !*(_BYTE *)(a1 + 968) ) /*0x42b7b4*/
  {
    v1 = sub_3CA040(0, 0, *(_QWORD *)(a1 + 920), 0); /*0x42b7cb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 1064LL))(v1); /*0x42b7e1*/
  }
}

// [17/27] Address: 0x42b8e0
// Method: LevelListLayer::likedItem
__int64 __fastcall LevelListLayer_likedItem(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  __int64 result; // rax
  int v6; // esi

  result = *(_QWORD *)(a1 + 64); /*0x42b8ef*/
  v6 = a4; /*0x42b8f6*/
  if ( a3 == *(_DWORD *)(result + 344) ) /*0x42b901*/
  {
    LevelListLayer_updateSideButtons(a1 - 856); /*0x42b90a*/
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 356LL) += 2 * v6 - 1; /*0x42b921*/
    return SetupSpawnPopup_updateRemapButtons(a1 - 856); /*0x42b927*/
  }
  return result; /*0x42b92c*/
}

// [18/27] Address: 0x42b940
// Method: LevelListLayer::updateSideButtons
// Hidden C++ exception states: #wind=1
void __fastcall LevelListLayer_updateSideButtons(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 *v4; // rdi
  __int64 v5; // rbx
  cocos2d::CCSpriteFrameCache *v6; // rax
  struct cocos2d::CCSpriteFrame *v7; // rax
  void *v8; // [rsp+40h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 960) ) /*0x42b952*/
  {
    v2 = *(_QWORD *)&qword_905FB0; /*0x42b960*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x42b96a*/
    {
      v8 = operator new(0x690u); /*0x42b976*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v8); /*0x42b984*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42b995*/
      v2 = *(_QWORD *)&qword_905FB0; /*0x42b997*/
    }
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 344LL); /*0x42b9a5*/
    if ( GameLevelManager_hasLikedItem(v2, 4, v3, 1u, 0) || GameLevelManager_hasLikedItem(v2, 4, v3, 0, 0) ) /*0x42b9e0*/
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 960) + 936LL))(*(_QWORD *)(a1 + 960), 0); /*0x42b9f5*/
      v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 960) + 952LL))(*(_QWORD *)(a1 + 960)); /*0x42ba0b*/
      v5 = *v4; /*0x42ba0e*/
      v6 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x42ba11*/
      v7 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v6, "GJ_like2Btn2_001.png"); /*0x42ba21*/
      (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v5 + 1008))(v4, v7); /*0x42ba2d*/
    }
  }
}

// [19/27] Address: 0x42ba50
// Method: LevelListLayer::onSelectIcon
// Hidden C++ exception states: #wind=1
void __fastcall LevelListLayer_onSelectIcon(__int64 a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rdi
  void (__fastcall *v4)(_QWORD *); // rdx

  if ( !*(_BYTE *)(a1 + 968) ) /*0x42ba62*/
  {
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 360LL); /*0x42ba76*/
    v3 = operator new(0x2B0u); /*0x42ba86*/
    FLAlertLayer_FLAlertLayer(v3); /*0x42ba91*/
    *v3 = &SelectListIconLayer::`vftable'; /*0x42ba9d*/
    v3[40] = &SelectListIconLayer::`vftable'; /*0x42baa7*/
    v3[41] = &SelectListIconLayer::`vftable'; /*0x42bab5*/
    v3[42] = &SelectListIconLayer::`vftable'; /*0x42bac3*/
    v3[43] = &SelectListIconLayer::`vftable'; /*0x42bad1*/
    v3[44] = &SelectListIconLayer::`vftable'; /*0x42badf*/
    v3[51] = &SelectListIconLayer::`vftable'; /*0x42baed*/
    v3[54] = &SelectListIconLayer::`vftable'; /*0x42bafb*/
    v3[68] = &SelectListIconLayer::`vftable'; /*0x42bb09*/
    v3[83] = 0; /*0x42bb10*/
    *((_DWORD *)v3 + 168) = 0; /*0x42bb1b*/
    v3[85] = 0; /*0x42bb25*/
    if ( (unsigned __int8)SelectListIconLayer_init(v3, v2) ) /*0x42bb35*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v3); /*0x42bb41*/
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 8LL))(v3, 1); /*0x42bb51*/
      v3 = 0; /*0x42bb54*/
    }
    v3[85] = a1 + 848; /*0x42bb5d*/
    v4 = *(void (__fastcall **)(_QWORD *))(*v3 + 1064LL); /*0x42bb67*/
    if ( (char *)v4 == (char *)FLAlertLayer_show ) /*0x42bb7b*/
      FLAlertLayer_show(v3); /*0x42bb8c*/
    else
      v4(v3); /*0x42bb91*/
  }
}

// [20/27] Address: 0x42bbb0
// Method: LevelListLayer::iconSelectClosed
__int64 __fastcall LevelListLayer_iconSelectClosed(__int64 a1, __int64 a2)
{
  *(_DWORD *)(*(_QWORD *)(a1 + 72) + 360LL) = *(_DWORD *)(a2 + 672); /*0x42bbc1*/
  return SetupSpawnPopup_updateRemapButtons(a1 - 848);
}

// [21/27] Address: 0x42bf90
// Method: LevelListLayer::cloneList
// Hidden C++ exception states: #wind=5
double __fastcall LevelListLayer_cloneList(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rbp
  __int64 v7; // rax
  void **v8; // r8
  void *v9; // rdx
  cocos2d::CCArray *ListLevelsArray; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  void *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  struct cocos2d::CCScene *v16; // rax
  struct cocos2d::CCScene *v17; // rbx
  __int64 v18; // rcx
  cocos2d::CCDirector *v19; // rax
  double result; // xmm0_8
  void *v21; // [rsp+20h] [rbp-58h]
  void *v22; // [rsp+20h] [rbp-58h]
  void *v23; // [rsp+20h] [rbp-58h]
  _BYTE v24[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE Src[16]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-20h]

  v2 = 0; /*0x42bfb6*/
  if ( !*(_BYTE *)(a1 + 968) ) /*0x42bfb8*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x42bfc9*/
    *(_BYTE *)(a1 + 968) = 1; /*0x42bfcf*/
    v5 = qword_905FD0; /*0x42bfd6*/
    if ( !qword_905FD0 ) /*0x42bfe0*/
    {
      v21 = operator new(0x6E8u); /*0x42bfec*/
      qword_905FD0 = sub_2723A0(v21); /*0x42bffa*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x42c00b*/
      v5 = qword_905FD0; /*0x42c00d*/
    }
    *(_DWORD *)(v5 + 740) = 14; /*0x42c014*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x42c026*/
    {
      v22 = operator new(0x690u); /*0x42c032*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v22); /*0x42c040*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42c04d*/
    }
    v6 = (_DWORD *)sub_2199F0(v4, v3); /*0x42c055*/
    v7 = *(_QWORD *)&qword_905FB0; /*0x42c058*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x42c062*/
    {
      v23 = operator new(0x690u); /*0x42c06e*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v23); /*0x42c07c*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42c08d*/
      v7 = *(_QWORD *)&qword_905FB0; /*0x42c08f*/
    }
    *(_BYTE *)(v7 + 1344) = 1; /*0x42c096*/
    v6[90] = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 360LL); /*0x42c0aa*/
    v8 = (void **)(*(_QWORD *)(a1 + 920) + 536LL); /*0x42c0b7*/
    if ( v6 + 134 != (_DWORD *)v8 ) /*0x42c0c8*/
    {
      v9 = (void *)(*(_QWORD *)(a1 + 920) + 536LL); /*0x42c0ca*/
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 920) + 560LL) > 0xFu ) /*0x42c0d2*/
        v9 = *v8; /*0x42c0d4*/
      sub_3F5A0(v6 + 134, v9, *(_QWORD *)(*(_QWORD *)(a1 + 920) + 552LL)); /*0x42c0db*/
    }
    ListLevelsArray = (cocos2d::CCArray *)GJLevelList_getListLevelsArray(*(_QWORD *)(a1 + 920)); /*0x42c0ee*/
    if ( cocos2d::CCArray::count(ListLevelsArray) ) /*0x42c0f4*/
    {
      do /*0x42c123*/
      {
        cocos2d::CCArray::objectAtIndex(ListLevelsArray, v2); /*0x42c105*/
        GJLevelList_addLevelToList(v6); /*0x42c111*/
        ++v2; /*0x42c116*/
      }
      while ( v2 < cocos2d::CCArray::count(ListLevelsArray) ); /*0x42c123*/
    }
    sub_3E4F0(Src, *(_QWORD *)(a1 + 920) + 440LL); /*0x42c138*/
    if ( v26 <= 0x17 ) /*0x42c144*/
      sub_43D80(Src, " 2", 2u); /*0x42c158*/
    v11 = sub_3E4F0(v24, Src); /*0x42c167*/
    v12 = v11; /*0x42c16c*/
    if ( v6 + 110 != (_DWORD *)v11 ) /*0x42c17e*/
    {
      v13 = (void *)v11; /*0x42c180*/
      if ( *(_QWORD *)(v11 + 24) > 0xFu ) /*0x42c188*/
        v13 = *(void **)v11; /*0x42c18a*/
      sub_3F5A0(v6 + 110, v13, *(_QWORD *)(v11 + 16)); /*0x42c191*/
    }
    sub_3C310(v12); /*0x42c19a*/
    v14 = *(_QWORD *)(a1 + 920); /*0x42c19f*/
    v15 = *(_DWORD *)(v14 + 380); /*0x42c1a6*/
    if ( !v15 ) /*0x42c1ae*/
      v15 = *(_DWORD *)(v14 + 344); /*0x42c1b0*/
    v6[95] = v15; /*0x42c1b6*/
    v16 = (struct cocos2d::CCScene *)LevelListLayer_scene((__int64)v6); /*0x42c1bf*/
    v17 = cocos2d::CCTransitionFade::create(0.5, v16); /*0x42c1d5*/
    v19 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v18); /*0x42c1d8*/
    cocos2d::CCDirector::replaceScene(v19, v17); /*0x42c1e4*/
    return sub_3C310(Src); /*0x42c1f0*/
  }
  return result; /*0x42c1f5*/
}

// [22/27] Address: 0x42c6e0
// Method: LevelListLayer::adminActionConfirmed
__int64 __fastcall LevelListLayer_adminActionConfirmed(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 == 1004 ) /*0x42c6e6*/
    return sub_42C620(a1 - 872, a4, a3); /*0x42c6f2*/
  return result; /*0x42c6f7*/
}

// [23/27] Address: 0x42c700
// Method: LevelListLayer::levelListDeleteFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelListLayer_levelListDeleteFinished(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int128 v6; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  _BYTE v9[40]; // [rsp+70h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 56); /*0x42c710*/
  if ( *(_DWORD *)(result + 344) == a2 ) /*0x42c71a*/
  {
    v6 = 0; /*0x42c723*/
    *(_QWORD *)&v6 = sub_3C460(48); /*0x42c73e*/
    v7 = 42; /*0x42c743*/
    v8 = 47; /*0x42c74c*/
    strcpy((char *)v6, "The list has been removed from the server."); /*0x42c75c*/
    v4 = sub_3E4F0(v9, &v6); /*0x42c79c*/
    v5 = FLAlertLayer_create_0(0, (unsigned int)"List Deleted", v4, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x42c7e7*/
    sub_3C310(&v6); /*0x42c7ef*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x42c801*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 - 128) + 336LL))(*(_QWORD *)(a1 - 128), 0); /*0x42c80c*/
  }
  return result; /*0x42c812*/
}

// [24/27] Address: 0x42c830
// Method: LevelListLayer::levelListDeleteFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelListLayer_levelListDeleteFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int128 v6; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  _BYTE v9[40]; // [rsp+70h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 56); /*0x42c840*/
  if ( *(_DWORD *)(result + 344) == a2 ) /*0x42c84a*/
  {
    v6 = 0; /*0x42c853*/
    *(_QWORD *)&v6 = sub_3C460(48); /*0x42c871*/
    v7 = 43; /*0x42c876*/
    v8 = 47; /*0x42c87f*/
    strcpy((char *)v6, "List delete failed, please try again later."); /*0x42c88f*/
    v4 = sub_3E4F0(v9, &v6); /*0x42c8d9*/
    v5 = FLAlertLayer_create_0(0, (unsigned int)"Error", v4, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x42c924*/
    sub_3C310(&v6); /*0x42c92c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x42c93e*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 - 128) + 336LL))(*(_QWORD *)(a1 - 128), 0); /*0x42c949*/
  }
  return result; /*0x42c94f*/
}

// [25/27] Address: 0x42c960
// Method: LevelListLayer::textInputClosed
// Hidden C++ exception states: #wind=3
void __fastcall LevelListLayer_textInputClosed(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void **v9; // r12
  char *v10; // r14
  unsigned __int64 v11; // r13
  size_t v12; // rsi
  size_t v13; // rdi
  unsigned __int64 v14; // rcx
  void **v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  void **v18; // rdx
  void *v19; // rcx
  char *v20; // rax
  void *v21[2]; // [rsp+30h] [rbp-79h] BYREF
  size_t v22; // [rsp+40h] [rbp-69h]
  __int64 v23; // [rsp+48h] [rbp-61h]
  void **v24; // [rsp+50h] [rbp-59h]
  __int64 v25; // [rsp+58h] [rbp-51h]
  __int128 v26; // [rsp+60h] [rbp-49h] BYREF
  __int64 v27; // [rsp+70h] [rbp-39h]
  __int64 v28; // [rsp+78h] [rbp-31h]
  void *Src[2]; // [rsp+80h] [rbp-29h] BYREF
  size_t Size; // [rsp+90h] [rbp-19h]
  unsigned __int64 v31; // [rsp+98h] [rbp-11h]
  void *Block[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v33; // [rsp+B0h] [rbp+7h]

  v25 = a1; /*0x42c98d*/
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 1002 ) /*0x42c9a1*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x42c9b8*/
    *(_OWORD *)Src = 0; /*0x42c9be*/
    Size = 0; /*0x42c9c2*/
    v31 = 0; /*0x42c9c6*/
    v4 = -1; /*0x42c9ca*/
    v5 = -1; /*0x42c9d1*/
    do /*0x42c9d7*/
      ++v5; /*0x42c9d4*/
    while ( *(_BYTE *)(v3 + v5) ); /*0x42c9d7*/
    sub_3C230(Src); /*0x42c9e4*/
    *(_OWORD *)v21 = 0; /*0x42c9ed*/
    v22 = 0; /*0x42c9f1*/
    v23 = 0; /*0x42c9f5*/
    v9 = Src; /*0x42c9f9*/
    v10 = (char *)Src[0]; /*0x42c9fd*/
    v11 = v31; /*0x42ca01*/
    if ( v31 > 0xF ) /*0x42ca09*/
      v9 = (void **)Src[0]; /*0x42ca09*/
    v12 = 0x7FFFFFFFFFFFFFFFLL; /*0x42ca0d*/
    v13 = Size; /*0x42ca17*/
    if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x42ca1e*/
      sub_8D90(v7, v6, v8); /*0x42cc06*/
    if ( Size > 0xF ) /*0x42ca28*/
    {
      if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x42ca4c*/
      {
        v12 = Size | 0xF; /*0x42ca4e*/
        if ( (Size | 0xF) < 0x16 ) /*0x42ca59*/
          v12 = 22; /*0x42ca59*/
      }
      v21[0] = (void *)sub_3C460(v12 + 1); /*0x42ca66*/
      v22 = v13; /*0x42ca6a*/
      v23 = v12; /*0x42ca6e*/
      memcpy(v21[0], v9, v13 + 1); /*0x42ca7c*/
      v14 = v12; /*0x42ca81*/
    }
    else
    {
      v22 = Size; /*0x42ca2a*/
      v14 = 15; /*0x42ca2e*/
      v23 = 15; /*0x42ca33*/
      *(_OWORD *)v21 = *(_OWORD *)v9; /*0x42ca3c*/
    }
    v24 = v21; /*0x42ca8d*/
    if ( (void **)(*(_QWORD *)(v25 + 80) + 440LL) != v21 ) /*0x42caa6*/
    {
      v15 = v21; /*0x42caa8*/
      if ( v14 > 0xF ) /*0x42cab0*/
        v15 = (void **)v21[0]; /*0x42cab0*/
      sub_3F5A0((void *)(*(_QWORD *)(v25 + 80) + 440LL), v15, v13); /*0x42cabb*/
    }
    sub_3C310(v21); /*0x42cac5*/
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x42cadb*/
    *(_OWORD *)Block = 0; /*0x42cae1*/
    v33 = 0; /*0x42cae8*/
    v17 = -1; /*0x42caed*/
    do /*0x42caf3*/
      ++v17; /*0x42caf0*/
    while ( *(_BYTE *)(v16 + v17) ); /*0x42caf3*/
    sub_3C230(Block); /*0x42cb01*/
    v18 = Block; /*0x42cb07*/
    if ( *((_QWORD *)&v33 + 1) > 0xFu ) /*0x42cb10*/
      v18 = (void **)Block[0]; /*0x42cb10*/
    v26 = 0; /*0x42cb18*/
    v27 = 0; /*0x42cb1e*/
    v28 = 0; /*0x42cb22*/
    do /*0x42cb29*/
      ++v4; /*0x42cb26*/
    while ( *((_BYTE *)v18 + v4) ); /*0x42cb29*/
    sub_3C230(&v26); /*0x42cb36*/
    SpriteAnimationManager_executeAnimation(a2, &v26); /*0x42cb42*/
    if ( *((_QWORD *)&v33 + 1) > 0xFu ) /*0x42cb50*/
    {
      v19 = Block[0]; /*0x42cb55*/
      if ( (unsigned __int64)(*((_QWORD *)&v33 + 1) + 1LL) >= 0x1000 ) /*0x42cb63*/
      {
        v19 = (void *)*((_QWORD *)Block[0] - 1); /*0x42cb69*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F ) /*0x42cb78*/
          invoke_watson(0, 0, 0, 0, 0); /*0x42cb89*/
      }
      j_j_free(v19); /*0x42cb90*/
    }
    if ( v11 > 0xF ) /*0x42cb9a*/
    {
      v20 = v10; /*0x42cba0*/
      if ( v11 + 1 >= 0x1000 ) /*0x42cbaa*/
      {
        v10 = (char *)*((_QWORD *)v10 - 1); /*0x42cbb0*/
        if ( (unsigned __int64)(v20 - v10 - 8) > 0x1F ) /*0x42cbbf*/
          invoke_watson(0, 0, 0, 0, 0); /*0x42cbd0*/
      }
      j_j_free(v10); /*0x42cbda*/
    }
  }
}

// [26/27] Address: 0x42cc10
// Method: LevelListLayer::textInputOpened
// Hidden C++ exception states: #wind=1
void __fastcall LevelListLayer_textInputOpened(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // eax
  unsigned __int64 v6; // rdi
  char *v7; // rbx
  void **v8; // rcx
  size_t v9; // r8
  char *v10; // rax
  __int128 Buf2; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  void *Buf1[2]; // [rsp+58h] [rbp-30h] BYREF
  size_t v15; // [rsp+68h] [rbp-20h]
  unsigned __int64 v16; // [rsp+70h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x42cc4e*/
  *(_OWORD *)Buf1 = 0; /*0x42cc54*/
  v15 = 0; /*0x42cc59*/
  v16 = 0; /*0x42cc5e*/
  v4 = -1; /*0x42cc63*/
  do /*0x42cc73*/
    ++v4; /*0x42cc70*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x42cc73*/
  sub_3C230(Buf1); /*0x42cc81*/
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x42cc8d*/
  v6 = v16; /*0x42cc90*/
  v7 = (char *)Buf1[0]; /*0x42cc95*/
  if ( v5 == 1002 ) /*0x42cc9f*/
  {
    Buf2 = 0; /*0x42cca4*/
    v12 = 0; /*0x42cca9*/
    v13 = 15; /*0x42ccae*/
    LOBYTE(Buf2) = 0; /*0x42ccb7*/
    v8 = Buf1; /*0x42ccbc*/
    if ( v16 > 0xF ) /*0x42ccc5*/
      v8 = (void **)Buf1[0]; /*0x42ccc5*/
    v9 = v15; /*0x42ccc9*/
    if ( v15 ) /*0x42ccd1*/
      v9 = 0; /*0x42ccd1*/
    if ( !memcmp(v8, &Buf2, v9) && !v15 ) /*0x42cce9*/
    {
      Buf2 = 0; /*0x42ccee*/
      v12 = 1; /*0x42ccf3*/
      v13 = 15; /*0x42ccfc*/
      LOWORD(Buf2) = 32; /*0x42cd05*/
      SpriteAnimationManager_executeAnimation(a2, &Buf2); /*0x42cd14*/
    }
  }
  if ( v6 > 0xF ) /*0x42cd1e*/
  {
    v10 = v7; /*0x42cd24*/
    if ( v6 + 1 >= 0x1000 ) /*0x42cd2e*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x42cd34*/
      if ( (unsigned __int64)(v10 - v7 - 8) > 0x1F ) /*0x42cd43*/
        invoke_watson(0, 0, 0, 0, 0); /*0x42cd54*/
    }
    j_j_free(v7); /*0x42cd5e*/
  }
}

// [27/27] Address: 0x42cd90
// Method: LevelListLayer::textChanged
// Hidden C++ exception states: #wind=2
void __fastcall LevelListLayer_textChanged(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  void **v7; // rdx
  void **v8; // rcx
  void **v9; // rdx
  void *v10; // rcx
  void *Src[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v13; // [rsp+50h] [rbp-38h]
  void *Block[2]; // [rsp+58h] [rbp-30h] BYREF
  __int128 v15; // [rsp+68h] [rbp-20h]

  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 1002 ) /*0x42cdc7*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x42cdde*/
    *(_OWORD *)Block = 0; /*0x42cde4*/
    v15 = 0; /*0x42cdec*/
    v5 = -1; /*0x42cdf2*/
    v6 = -1; /*0x42cdf9*/
    do /*0x42ce03*/
      ++v6; /*0x42ce00*/
    while ( *(_BYTE *)(v4 + v6) ); /*0x42ce03*/
    sub_3C230(Block); /*0x42ce11*/
    v7 = Block; /*0x42ce17*/
    if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x42ce22*/
      v7 = (void **)Block[0]; /*0x42ce22*/
    *(_OWORD *)Src = 0; /*0x42ce2b*/
    Size = 0; /*0x42ce30*/
    v13 = 0; /*0x42ce35*/
    do /*0x42ce43*/
      ++v5; /*0x42ce40*/
    while ( *((_BYTE *)v7 + v5) ); /*0x42ce43*/
    sub_3C230(Src); /*0x42ce51*/
    v8 = (void **)(*(_QWORD *)(a1 + 80) + 440LL); /*0x42ce64*/
    if ( v8 != Src ) /*0x42ce73*/
    {
      v9 = Src; /*0x42ce75*/
      if ( v13 > 0xF ) /*0x42ce80*/
        v9 = (void **)Src[0]; /*0x42ce80*/
      sub_3F5A0(v8, v9, Size); /*0x42ce8b*/
    }
    sub_3C310(Src); /*0x42ce96*/
    if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x42cea5*/
    {
      v10 = Block[0]; /*0x42ceaa*/
      if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 1LL) >= 0x1000 ) /*0x42ceb9*/
      {
        v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x42cebf*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x42cece*/
          invoke_watson(0, 0, 0, 0, 0); /*0x42cedf*/
      }
      j_j_free(v10); /*0x42cee6*/
    }
  }
}
