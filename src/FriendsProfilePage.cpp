#include <Geode/binding/FriendsProfilePage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/16] Address: 0xd6e10
// Method: FriendsProfilePage::setupUsersBrowser
void __fastcall FriendsProfilePage_setupUsersBrowser(__int64 a1, cocos2d::CCArray *a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // rax
  struct cocos2d::CCObject *v9; // rbx
  cocos2d::CCTouchDispatcher *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // r8d
  _QWORD *v14; // rax
  float v15; // xmm2_4
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct cocos2d::CCNode *v21; // rbx
  cocos2d::CCTouchDispatcher *v22; // rax
  bool v23; // al
  cocos2d::CCMenu *v24; // rcx
  int v25; // [rsp+80h] [rbp+8h] BYREF
  float v26; // [rsp+88h] [rbp+10h] BYREF
  float v27; // [rsp+8Ch] [rbp+14h]
  char v28; // [rsp+98h] [rbp+20h] BYREF

  v4 = cocos2d::CCDirector::sharedDirector(a1); /*0xd6e31*/
  cocos2d::CCDirector::getWinSize(v4, &v26); /*0xd6e42*/
  if ( *(_QWORD *)(a1 + 688) ) /*0xd6e48*/
  {
    v8 = cocos2d::CCDirector::sharedDirector(v6); /*0xd6e52*/
    v9 = *(struct cocos2d::CCObject **)(a1 + 688); /*0xd6e58*/
    v10 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 144LL))(v8); /*0xd6e6c*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v10, v9); /*0xd6e75*/
    LOBYTE(v11) = 1; /*0xd6e82*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 688) + 520LL))(*(_QWORD *)(a1 + 688), v11); /*0xd6e87*/
    *(_QWORD *)(a1 + 688) = 0; /*0xd6e8d*/
    *(_QWORD *)(a1 + 952) = 0; /*0xd6e98*/
  }
  v12 = 0; /*0xd6eab*/
  if ( a2 && cocos2d::CCArray::count(a2) ) /*0xd6eb5*/
    v12 = CustomListView_create((_DWORD)a2, 0, v13, v7); /*0xd6ee3*/
  *(_QWORD *)(a1 + 952) = v12; /*0xd6f02*/
  v14 = (_QWORD *)GJCommentListLayer_create(v12, v5, -12684609, v7, 1128529920, 0); /*0xd6f09*/
  v15 = v27 * 0.5; /*0xd6f1f*/
  v16 = v14; /*0xd6f27*/
  *(_QWORD *)(a1 + 688) = v14; /*0xd6f2a*/
  v17 = *v14; /*0xd6f42*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, (float)(v26 * 0.5) - 170.0, (float)(v15 - 98.0) - 12.0); /*0xd6f5d*/
  (*(void (__fastcall **)(_QWORD *, __int64))(v17 + 184))(v16, v18); /*0xd6f69*/
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0xd6f86*/
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 688),
    2);
  v25 = 0; /*0xd6f8c*/
  v20 = cocos2d::CCDirector::sharedDirector(v19); /*0xd6f97*/
  v21 = *(struct cocos2d::CCNode **)(a1 + 688); /*0xd6f9d*/
  v22 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 144LL))(v20); /*0xd6fb1*/
  v23 = cocos2d::CCTouchDispatcher::ownerLevelOf(v22, v21, &v25); /*0xd6fc2*/
  v24 = *(cocos2d::CCMenu **)(a1 + 552); /*0xd6fc8*/
  if ( v23 ) /*0xd6fd1*/
    cocos2d::CCMenu::giveMenuTouchPriority(v24, v25 - 1); /*0xd6fdc*/
  else
    cocos2d::CCMenu::giveMenuTouchPriority(v24); /*0xd6fe4*/
}

// [2/16] Address: 0xe6470
// Method: FriendsProfilePage::virtualRowHeight
float FriendsProfilePage_virtualRowHeight()
{
  return 40.0; /*0xe6478*/
}

// [3/16] Address: 0x12e2b0
// Method: FriendsProfilePage::init
// Hidden C++ exception states: #wind=1
void __fastcall FriendsProfilePage_init(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r8
  const char *v8; // rcx
  double v9; // xmm0_8
  cocos2d::CCString *v10; // rax
  float v11; // xmm0_4
  char *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  const char *v15; // rcx
  double v16; // xmm0_8
  cocos2d::CCString *v17; // rax
  float v18; // xmm0_4
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  const char *v22; // rcx
  int v23; // ebx
  char *v24; // r8
  int v25; // eax
  char *String[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h]

  if ( !*(_BYTE *)(a1 + 89) ) /*0x12e2e1*/
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) - 1; /*0x12e2f4*/
    if ( v4 ) /*0x12e2f7*/
    {
      v5 = v4 - 1; /*0x12e2fd*/
      if ( v5 ) /*0x12e300*/
      {
        if ( v5 == 1 ) /*0x12e309*/
        {
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x12e320*/
          *(_OWORD *)String = 0; /*0x12e326*/
          v27 = 0; /*0x12e32d*/
          v7 = -1; /*0x12e332*/
          do /*0x12e343*/
            ++v7; /*0x12e340*/
          while ( *(_BYTE *)(v6 + v7) ); /*0x12e343*/
          sub_3C230(String); /*0x12e350*/
          v8 = (const char *)String; /*0x12e356*/
          if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x12e35f*/
            v8 = String[0]; /*0x12e35f*/
          v9 = atof(v8); /*0x12e364*/
          v10 = cocos2d::CCString::createWithFormat("%.2f", v9); /*0x12e379*/
          v11 = cocos2d::CCString::floatValue(v10); /*0x12e382*/
          if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x12e393*/
          {
            v12 = String[0]; /*0x12e398*/
            if ( (unsigned __int64)(*((_QWORD *)&v27 + 1) + 1LL) >= 0x1000 ) /*0x12e3a6*/
            {
              v12 = (char *)*((_QWORD *)String[0] - 1); /*0x12e3ac*/
              if ( (unsigned __int64)(String[0] - v12 - 8) > 0x1F ) /*0x12e3bb*/
                invoke_watson(0, 0, 0, 0, 0); /*0x12e3cc*/
            }
            j_j_free(v12); /*0x12e3d3*/
          }
          *(float *)(a1 + 64) = v11; /*0x12e3d8*/
        }
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x12e3f3*/
        *(_OWORD *)String = 0; /*0x12e3f9*/
        v27 = 0; /*0x12e400*/
        v14 = -1; /*0x12e405*/
        do /*0x12e413*/
          ++v14; /*0x12e410*/
        while ( *(_BYTE *)(v13 + v14) ); /*0x12e413*/
        sub_3C230(String); /*0x12e420*/
        v15 = (const char *)String; /*0x12e426*/
        if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x12e42f*/
          v15 = String[0]; /*0x12e42f*/
        v16 = atof(v15); /*0x12e434*/
        v17 = cocos2d::CCString::createWithFormat("%.2f", v16); /*0x12e449*/
        v18 = cocos2d::CCString::floatValue(v17); /*0x12e452*/
        if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x12e463*/
        {
          v19 = String[0]; /*0x12e468*/
          if ( (unsigned __int64)(*((_QWORD *)&v27 + 1) + 1LL) >= 0x1000 ) /*0x12e476*/
          {
            v19 = (char *)*((_QWORD *)String[0] - 1); /*0x12e47c*/
            if ( (unsigned __int64)(String[0] - v19 - 8) > 0x1F ) /*0x12e48b*/
              invoke_watson(0, 0, 0, 0, 0); /*0x12e49c*/
          }
          j_j_free(v19); /*0x12e4a3*/
        }
        *(float *)(a1 + 60) = v18; /*0x12e4a8*/
      }
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x12e4c3*/
      *(_OWORD *)String = 0; /*0x12e4c9*/
      v27 = 0; /*0x12e4d0*/
      v21 = -1; /*0x12e4d5*/
      do /*0x12e4e3*/
        ++v21; /*0x12e4e0*/
      while ( *(_BYTE *)(v20 + v21) ); /*0x12e4e3*/
      sub_3C230(String); /*0x12e4f0*/
      v22 = (const char *)String; /*0x12e4f5*/
      if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x12e4fe*/
        v22 = String[0]; /*0x12e4fe*/
      v23 = atoi(v22); /*0x12e509*/
      if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x12e513*/
      {
        v24 = String[0]; /*0x12e518*/
        if ( (unsigned __int64)(*((_QWORD *)&v27 + 1) + 1LL) >= 0x1000 ) /*0x12e526*/
        {
          v24 = (char *)*((_QWORD *)String[0] - 1); /*0x12e52c*/
          if ( (unsigned __int64)(String[0] - v24 - 8) > 0x1F ) /*0x12e53b*/
            invoke_watson(0, 0, 0, 0, 0); /*0x12e54c*/
        }
        j_j_free(v24); /*0x12e556*/
      }
      v25 = 360; /*0x12e55b*/
      if ( v23 <= 360 ) /*0x12e562*/
      {
        v25 = v23; /*0x12e564*/
        if ( v23 < -360 ) /*0x12e56d*/
          v25 = -360; /*0x12e56d*/
      }
      *(float *)(a1 + 56) = (float)v25; /*0x12e577*/
    }
    sub_12E5B0(a1 - 320); /*0x12e583*/
  }
}

// [4/16] Address: 0x16cdb0
// Method: FriendsProfilePage::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall FriendsProfilePage_create(int a1)
{
  _QWORD *v2; // rdi

  v2 = operator new(0x2E8u); /*0x16cdcb*/
  FLAlertLayer_FLAlertLayer(v2); /*0x16cdd6*/
  *v2 = &DailyLevelPage::`vftable'; /*0x16cde2*/
  v2[40] = &DailyLevelPage::`vftable'; /*0x16cdec*/
  v2[41] = &DailyLevelPage::`vftable'; /*0x16cdfa*/
  v2[42] = &DailyLevelPage::`vftable'; /*0x16ce08*/
  v2[43] = &DailyLevelPage::`vftable'; /*0x16ce16*/
  v2[44] = &DailyLevelPage::`vftable'; /*0x16ce24*/
  v2[51] = &DailyLevelPage::`vftable'; /*0x16ce32*/
  v2[54] = &DailyLevelPage::`vftable'; /*0x16ce40*/
  v2[68] = &DailyLevelPage::`vftable'; /*0x16ce4e*/
  v2[83] = &DailyLevelPage::`vftable'; /*0x16ce5c*/
  v2[84] = &DailyLevelPage::`vftable'; /*0x16ce6a*/
  v2[85] = &DailyLevelPage::`vftable'; /*0x16ce78*/
  v2[87] = 0; /*0x16ce81*/
  v2[88] = 0; /*0x16ce88*/
  *((_WORD *)v2 + 356) = 0; /*0x16ce8f*/
  v2[90] = 0; /*0x16ce96*/
  *((_BYTE *)v2 + 728) = 0; /*0x16ce9d*/
  *(_QWORD *)((char *)v2 + 732) = 0; /*0x16cea4*/
  if ( DailyLevelPage_init((__int64)v2, a1) ) /*0x16ceb0*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x16cebc*/
    return v2; /*0x16cec2*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x16cee4*/
    return 0; /*0x16cee7*/
  }
}

// [5/16] Address: 0x210180
// Method: FriendsProfilePage::~FriendsProfilePage
// Hidden C++ exception states: #wind=1
char *__fastcall FriendsProfilePage__dtor_FriendsProfilePage(char *Block, char a2)
{
  char *v4; // rsi
  char *v5; // rdi
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  cocos2d::CCObject *v12; // rcx
  cocos2d::CCObject *v13; // rcx

  *(_QWORD *)Block = &FriendsProfilePage::`vftable'; /*0x2101a0*/
  *((_QWORD *)Block + 40) = &FriendsProfilePage::`vftable'; /*0x2101aa*/
  *((_QWORD *)Block + 41) = &FriendsProfilePage::`vftable'; /*0x2101b8*/
  *((_QWORD *)Block + 42) = &FriendsProfilePage::`vftable'; /*0x2101c6*/
  *((_QWORD *)Block + 43) = &FriendsProfilePage::`vftable'; /*0x2101d4*/
  *((_QWORD *)Block + 44) = &FriendsProfilePage::`vftable'; /*0x2101e2*/
  *((_QWORD *)Block + 51) = &FriendsProfilePage::`vftable'; /*0x2101f0*/
  *((_QWORD *)Block + 54) = &FriendsProfilePage::`vftable'; /*0x2101fe*/
  *((_QWORD *)Block + 68) = &FriendsProfilePage::`vftable'; /*0x21020c*/
  *((_QWORD *)Block + 97) = &FriendsProfilePage::`vftable'; /*0x21021a*/
  *((_QWORD *)Block + 98) = &FriendsProfilePage::`vftable'; /*0x210228*/
  v4 = Block + 792; /*0x21022f*/
  *((_QWORD *)Block + 99) = &FriendsProfilePage::`vftable'; /*0x21023d*/
  *((_QWORD *)Block + 100) = &FriendsProfilePage::`vftable'; /*0x210247*/
  v5 = Block + 808; /*0x21024e*/
  *((_QWORD *)Block + 101) = &FriendsProfilePage::`vftable'; /*0x21025c*/
  v6 = *(_QWORD *)&qword_905FB0; /*0x21025f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x210269*/
  {
    v7 = operator new(0x690u); /*0x210270*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x21027d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x21028e*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x210290*/
  }
  if ( *(char **)(v6 + 1496) == v5 ) /*0x2102a0*/
    *(_QWORD *)(v6 + 1496) = 0; /*0x2102a2*/
  if ( *(char **)(v6 + 1488) == v4 ) /*0x2102b0*/
    *(_QWORD *)(v6 + 1488) = 0; /*0x2102b2*/
  v8 = *((_QWORD *)Block + 115); /*0x2102b9*/
  if ( v8 ) /*0x2102c3*/
    *(_QWORD *)(v8 + 608) = 0; /*0x2102c5*/
  v9 = *((_QWORD *)Block + 106); /*0x2102cc*/
  if ( v9 ) /*0x2102d6*/
    *(_QWORD *)(v9 + 664) = 0; /*0x2102d8*/
  v10 = (cocos2d::CCObject *)*((_QWORD *)Block + 105); /*0x2102df*/
  if ( v10 ) /*0x2102e9*/
    cocos2d::CCObject::release(v10); /*0x2102eb*/
  v11 = (cocos2d::CCObject *)*((_QWORD *)Block + 107); /*0x2102f1*/
  if ( v11 ) /*0x2102fb*/
    cocos2d::CCObject::release(v11); /*0x2102fd*/
  v12 = (cocos2d::CCObject *)*((_QWORD *)Block + 108); /*0x210303*/
  if ( v12 ) /*0x21030d*/
    cocos2d::CCObject::release(v12); /*0x21030f*/
  v13 = (cocos2d::CCObject *)*((_QWORD *)Block + 109); /*0x210315*/
  if ( v13 ) /*0x21031f*/
    cocos2d::CCObject::release(v13); /*0x210321*/
  sub_3C310(Block + 880); /*0x21032e*/
  PagedListPopup__dtor_PagedListPopup(Block); /*0x210336*/
  if ( (a2 & 1) != 0 ) /*0x210340*/
    j_j_free(Block); /*0x21034a*/
  return Block; /*0x210352*/
}

// [6/16] Address: 0x211680
// Method: FriendsProfilePage::virtualRowCount
unsigned int __fastcall FriendsProfilePage_virtualRowCount(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx

  if ( *(_BYTE *)(a1 + 152) ) /*0x211680*/
  {
    v2 = *(cocos2d::CCArray **)(a1 + 96); /*0x21168c*/
  }
  else
  {
    v2 = *(cocos2d::CCArray **)(a1 + 88); /*0x211692*/
    if ( v2 ) /*0x211699*/
      return cocos2d::CCArray::count(v2); /*0x2116a4*/
    v2 = *(cocos2d::CCArray **)(a1 + 80); /*0x21169b*/
  }
  if ( v2 ) /*0x2116a2*/
    return cocos2d::CCArray::count(v2); /*0x2116a2*/
  return 0; /*0x2116ad*/
}

// [7/16] Address: 0x2116b0
// Method: FriendsProfilePage::mountVirtualRow
// Hidden C++ exception states: #wind=2
void __fastcall FriendsProfilePage_mountVirtualRow(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  cocos2d::CCArray *v9; // rcx
  struct cocos2d::CCObject *v10; // rdi
  const struct cocos2d::_ccColor4B *v11; // rcx
  struct cocos2d::CCLayerColor *v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCSprite *v16; // rbx
  __int64 (__fastcall *v17)(); // r9
  __int64 v18; // rbx
  _DWORD *v19; // rax
  _DWORD *v20; // rbx
  void *v21; // [rsp+90h] [rbp+8h] BYREF
  int v22; // [rsp+98h] [rbp+10h] BYREF
  char v23; // [rsp+A0h] [rbp+18h] BYREF

  v8 = a1 - 776; /*0x2116cf*/
  if ( *(_BYTE *)(a1 - 776 + 928) ) /*0x2116d6*/
  {
    v9 = *(cocos2d::CCArray **)(a1 + 96); /*0x2116e0*/
  }
  else
  {
    v9 = *(cocos2d::CCArray **)(a1 + 88); /*0x2116e6*/
    if ( !v9 ) /*0x2116ed*/
      v9 = *(cocos2d::CCArray **)(a1 + 80); /*0x2116ef*/
  }
  v10 = cocos2d::CCArray::objectAtIndex(v9, a2); /*0x2116f9*/
  if ( (a2 & 1) != 0 ) /*0x2116ff*/
  {
    v22 = -12684606; /*0x211713*/
    v11 = (const struct cocos2d::_ccColor4B *)&v22; /*0x21171a*/
  }
  else
  {
    v22 = -13870943; /*0x211724*/
    LODWORD(v21) = -13870943; /*0x211736*/
    v11 = (const struct cocos2d::_ccColor4B *)&v21; /*0x21173d*/
  }
  v12 = cocos2d::CCLayerColor::create(v11, *(float *)(a1 - 72), 40.0); /*0x211752*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a3 + 456LL))( /*0x21176f*/
    a3,
    v12,
    4294967294LL);
  v13 = operator new(0x148u); /*0x21177c*/
  v21 = v13; /*0x21177f*/
  memset(v13, 0, 0x148u); /*0x211792*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v13); /*0x21179a*/
  *(_QWORD *)v13 = &FriendRowEdges::`vftable'; /*0x2117a7*/
  v13[80] = 0; /*0x2117aa*/
  if ( cocos2d::CCNode::init((cocos2d::CCNode *)v13) ) /*0x2117be*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v13); /*0x2117c7*/
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1); /*0x2117d7*/
    v13 = 0; /*0x2117da*/
  }
  v13[80] = *(_DWORD *)(a1 - 72); /*0x2117df*/
  v14 = *(_QWORD *)v13; /*0x2117e5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 0.0, 20.0); /*0x2117fe*/
  (*(void (__fastcall **)(_DWORD *, __int64))(v14 + 184))(v13, v15); /*0x21180a*/
  (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)a3 + 456LL))(a3, v13, 0xFFFFFFFFLL); /*0x211820*/
  sub_155960((_DWORD)v10, a3, a4, v8, (__int64)sub_E6820, 1101004800, 0, 0); /*0x21184e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, *(float *)(a1 - 72) - 22.0, 20.0); /*0x21186b*/
  if ( *(_DWORD *)(a1 + 40) == 1 ) /*0x211875*/
  {
    v16 = cocos2d::CCSprite::createWithSpriteFrameName("accountBtn_unblock_001.png"); /*0x211884*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 160LL))(v16); /*0x21189c*/
    v17 = sub_212C00; /*0x21189e*/
LABEL_25:
    v19 = (_DWORD *)CCMenuItemSpriteExtra_create(v16, 0, v8, v17); /*0x2119f1*/
    v19[93] = 1070386381; /*0x2119fe*/
    v20 = v19; /*0x211a08*/
    (*(void (__fastcall **)(_DWORD *, struct cocos2d::CCObject *))(*(_QWORD *)v19 + 640LL))(v19, v10); /*0x211a14*/
    (*(void (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v20 + 184LL))(v20, &v23); /*0x211a28*/
    (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)a4 + 456LL))(a4, v20, 3); /*0x211a3d*/
    return; /*0x211a3d*/
  }
  if ( *((_BYTE *)v10 + 794) ) /*0x2118aa*/
  {
    v16 = cocos2d::CCSprite::createWithSpriteFrameName("accountBtn_notifications_001.png"); /*0x2118c0*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 160LL))(v16); /*0x2118d8*/
    v17 = sub_2129C0; /*0x2118da*/
    goto LABEL_25; /*0x2118e1*/
  }
  if ( *((_DWORD *)v10 + 190) != 1 ) /*0x2118ed*/
  {
    if ( !*((_BYTE *)v10 + 792) ) /*0x2119bd*/
      return; /*0x2119bd*/
    v16 = cocos2d::CCSprite::createWithSpriteFrameName("followBtnOn_001.png"); /*0x2119d0*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 160LL))(v16); /*0x2119e8*/
    v17 = sub_212780; /*0x2119ea*/
    goto LABEL_25; /*0x2119ea*/
  }
  if ( *((_DWORD *)v10 + 113) != 2 ) /*0x2118fa*/
  {
    v18 = qword_905FD0; /*0x211900*/
    if ( !qword_905FD0 ) /*0x21190a*/
    {
      v21 = operator new(0x6E8u); /*0x211916*/
      qword_905FD0 = sub_2723A0(v21); /*0x211927*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x211938*/
      v18 = qword_905FD0; /*0x21193a*/
    }
    if ( !GameManager_getGameVariable(v18, "0218") /*0x211979*/
      && !GameManager_getGameVariable(v18, "0219")
      && !GameManager_getGameVariable(v18, "0243") )
    {
      v16 = cocos2d::CCSprite::createWithSpriteFrameName("accountBtn_messages_001.png"); /*0x211993*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 160LL))(v16); /*0x2119ab*/
      v17 = NumberInputLayer_onNumber; /*0x2119ad*/
      goto LABEL_25; /*0x2119b4*/
    }
  }
}

// [8/16] Address: 0x211c80
// Method: FriendsProfilePage::getUserListFinished
// Hidden C++ exception states: #wind=8
void __fastcall FriendsProfilePage_getUserListFinished(__int64 a1, cocos2d::CCObject *a2, int a3)
{
  cocos2d::CCObject *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  cocos2d::CCObject *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  unsigned __int8 v14; // si
  __int64 v15; // rax
  unsigned int *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rbx
  cocos2d::CCString *v29; // rax
  int v30; // ebx
  void *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  int v35; // r15d
  __int64 v36; // r14
  __int64 v37; // rbx
  cocos2d::CCString *v38; // rax
  int v39; // ebx
  void *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rbx
  cocos2d::CCString *v45; // rax
  int v46; // ebx
  void *v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rbx
  cocos2d::CCString *v52; // rax
  int v53; // ebx
  void *v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *i; // rdx
  __int64 v60; // rax
  int v61; // ebx
  __int64 v62; // rcx
  struct cocos2d::CCObject *v63; // rax
  void *v64; // [rsp+30h] [rbp-29h]
  void *v65; // [rsp+30h] [rbp-29h]
  void *v66; // [rsp+30h] [rbp-29h]
  void *v67; // [rsp+30h] [rbp-29h]
  void *v68; // [rsp+30h] [rbp-29h]
  void *v69[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v70; // [rsp+48h] [rbp-11h]
  unsigned __int64 v71; // [rsp+50h] [rbp-9h]
  void *Block[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v73; // [rsp+68h] [rbp+Fh]
  unsigned __int64 v74; // [rsp+70h] [rbp+17h]
  void *v75[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v76; // [rsp+88h] [rbp+2Fh]
  unsigned __int64 v77; // [rsp+90h] [rbp+37h]

  if ( a3 == 2 ) /*0x211cb8*/
  {
    if ( *(_DWORD *)(a1 + 8) != 1 ) /*0x211cbe*/
    {
      v5 = *(cocos2d::CCObject **)(a1 + 64); /*0x211cc4*/
      if ( v5 ) /*0x211ccb*/
        cocos2d::CCObject::release(v5); /*0x211ccd*/
      *(_QWORD *)(a1 + 64) = a2; /*0x211cd3*/
      cocos2d::CCObject::retain(a2); /*0x211cda*/
      *(_BYTE *)(a1 + 120) = 1; /*0x211ce0*/
      sub_2114E0(a1 - 808); /*0x211ceb*/
      v9 = *(_QWORD *)(a1 - 112); /*0x211cf0*/
      if ( v9 ) /*0x211cf7*/
        LoadingCircle_fadeAndRemove(v9, v6, v7, v8); /*0x211cf9*/
      v10 = *(_QWORD *)(a1 - 48); /*0x211cfe*/
      if ( v10 ) /*0x211d05*/
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 512LL))(v10); /*0x211d0a*/
        *(_QWORD *)(a1 - 48) = 0; /*0x211d12*/
      }
      LOBYTE(v6) = 1; /*0x211d1d*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), v6); /*0x211d1f*/
    }
  }
  else if ( *(_DWORD *)(a1 + 8) == a3 ) /*0x211d2e*/
  {
    v11 = *(cocos2d::CCObject **)(a1 + 48); /*0x211d34*/
    if ( v11 ) /*0x211d3b*/
      cocos2d::CCObject::release(v11); /*0x211d3d*/
    *(_QWORD *)(a1 + 48) = a2; /*0x211d43*/
    cocos2d::CCObject::retain(a2); /*0x211d4a*/
    v12 = a1 - 808; /*0x211d50*/
    sub_211A60(a1 - 808); /*0x211d5a*/
    v13 = *(_QWORD *)(a1 + 128); /*0x211d5f*/
    if ( v13 ) /*0x211d69*/
    {
      v14 = 0; /*0x211d6b*/
      v15 = *(_QWORD *)(a1 + 48); /*0x211d6e*/
      if ( v15 ) /*0x211d75*/
      {
        v16 = *(unsigned int **)(v15 + 56); /*0x211d77*/
        v17 = *v16; /*0x211d7b*/
        if ( (_DWORD)v17 ) /*0x211d7f*/
        {
          v18 = *((_QWORD *)v16 + 2); /*0x211d81*/
          v19 = v18 + 8 * (v17 - 1); /*0x211d89*/
          if ( v18 <= v19 ) /*0x211d90*/
          {
            while ( *(_QWORD *)v18 ) /*0x211d98*/
            {
              if ( *(int *)(*(_QWORD *)v18 + 472LL) > 0 ) /*0x211da1*/
              {
                v14 = 1; /*0x211dae*/
                break; /*0x211dae*/
              }
              v18 += 8LL; /*0x211da3*/
              if ( v18 > v19 ) /*0x211daa*/
                break; /*0x211daa*/
            }
          }
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13 + 336LL))(*(_QWORD *)(a1 + 128), v14); /*0x211db1*/
      v20 = *(_QWORD *)(a1 + 152); /*0x211dc1*/
      if ( v20 ) /*0x211dcb*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 336LL))(v20, v14); /*0x211dd4*/
    }
    if ( *(_QWORD *)(a1 + 88) ) /*0x211dda*/
      LevelBrowserLayer_getSearchTitle(a1 - 808, a1 + 72); /*0x211de8*/
    sub_2114E0(a1 - 808); /*0x211df0*/
    v24 = *(_QWORD *)(v12 + 696); /*0x211df5*/
    if ( v24 ) /*0x211dff*/
      LoadingCircle_fadeAndRemove(v24, v21, v22, v23); /*0x211e01*/
    v25 = *(_QWORD *)(v12 + 760); /*0x211e06*/
    if ( v25 ) /*0x211e12*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 512LL))(v25); /*0x211e17*/
      *(_QWORD *)(v12 + 760) = 0; /*0x211e1d*/
    }
    LOBYTE(v21) = 1; /*0x211e2b*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), v21); /*0x211e2d*/
    if ( !*(_DWORD *)(a1 + 8) ) /*0x211e33*/
    {
      v27 = qword_905FD0; /*0x211e3c*/
      if ( !qword_905FD0 ) /*0x211e46*/
      {
        v64 = operator new(0x6E8u); /*0x211e52*/
        qword_905FD0 = sub_2723A0(v64); /*0x211e5f*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x211e70*/
        v27 = qword_905FD0; /*0x211e72*/
      }
      v28 = AchievementManager_sharedState(v26); /*0x211e7e*/
      *(_OWORD *)Block = 0; /*0x211e84*/
      v73 = 0; /*0x211e88*/
      v74 = 0; /*0x211e8c*/
      Block[0] = (void *)sub_3C460(32); /*0x211e9a*/
      v73 = 22; /*0x211e9e*/
      v74 = 31; /*0x211ea6*/
      strcpy((char *)Block[0], "geometry.ach.friends01"); /*0x211eb5*/
      v29 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v28 + 352), Block); /*0x211edb*/
      v30 = cocos2d::CCString::intValue(v29); /*0x211eea*/
      if ( v74 > 0xF ) /*0x211ef4*/
      {
        v31 = Block[0]; /*0x211ef9*/
        if ( v74 + 1 >= 0x1000 ) /*0x211f07*/
        {
          v31 = (void *)*((_QWORD *)Block[0] - 1); /*0x211f0d*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v31 - 8) > 0x1F ) /*0x211f1c*/
            invoke_watson(0, 0, 0, 0, 0); /*0x211f2d*/
        }
        j_j_free(v31); /*0x211f37*/
      }
      if ( v30 < 100 ) /*0x211f3f*/
      {
        *(_OWORD *)v69 = 0; /*0x211f44*/
        v69[0] = (void *)sub_3C460(32); /*0x211f5a*/
        v70 = 22; /*0x211f5e*/
        v71 = 31; /*0x211f66*/
        strcpy((char *)v69[0], "geometry.ach.friends01"); /*0x211f75*/
        sub_274AD0(v27, v69); /*0x211f97*/
        v33 = AchievementManager_sharedState(v32); /*0x211f9c*/
        GameManager_isColorUnlocked(v33, (__int64)"geometry.ach.friends01", 100); /*0x211fb1*/
      }
      v35 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 48)); /*0x211fc0*/
      if ( v35 >= 10 ) /*0x211fc6*/
      {
        v36 = qword_905FD0; /*0x211fcc*/
        if ( !qword_905FD0 ) /*0x211fd6*/
        {
          v65 = operator new(0x6E8u); /*0x211fe2*/
          qword_905FD0 = sub_2723A0(v65); /*0x211fef*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x212000*/
          v36 = qword_905FD0; /*0x212002*/
        }
        v37 = AchievementManager_sharedState(v34); /*0x21200e*/
        *(_OWORD *)v75 = 0; /*0x212014*/
        v76 = 0; /*0x212018*/
        v77 = 0; /*0x21201c*/
        v75[0] = (void *)sub_3C460(32); /*0x21202a*/
        v76 = 22; /*0x21202e*/
        v77 = 31; /*0x212036*/
        strcpy((char *)v75[0], "geometry.ach.friends02"); /*0x212045*/
        v38 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v37 + 352), v75); /*0x21206b*/
        v39 = cocos2d::CCString::intValue(v38); /*0x21207a*/
        if ( v77 > 0xF ) /*0x212084*/
        {
          v40 = v75[0]; /*0x212089*/
          if ( v77 + 1 >= 0x1000 ) /*0x212097*/
          {
            v40 = (void *)*((_QWORD *)v75[0] - 1); /*0x21209d*/
            if ( (unsigned __int64)((char *)v75[0] - (char *)v40 - 8) > 0x1F ) /*0x2120ac*/
              invoke_watson(0, 0, 0, 0, 0); /*0x2120bd*/
          }
          j_j_free(v40); /*0x2120c7*/
        }
        v76 = 0; /*0x2120cc*/
        v77 = 15; /*0x2120d0*/
        LOBYTE(v75[0]) = 0; /*0x2120d8*/
        if ( v39 < 100 ) /*0x2120df*/
        {
          *(_OWORD *)v69 = 0; /*0x2120e4*/
          v70 = 0; /*0x2120e8*/
          v71 = 0; /*0x2120ec*/
          v69[0] = (void *)sub_3C460(32); /*0x2120fa*/
          v70 = 22; /*0x2120fe*/
          v71 = 31; /*0x212106*/
          strcpy((char *)v69[0], "geometry.ach.friends02"); /*0x212115*/
          sub_274AD0(v36, v69); /*0x212137*/
          v42 = AchievementManager_sharedState(v41); /*0x21213c*/
          GameManager_isColorUnlocked(v42, (__int64)"geometry.ach.friends02", 100); /*0x212151*/
        }
      }
      if ( v35 >= 25 ) /*0x21215a*/
      {
        v43 = qword_905FD0; /*0x212160*/
        if ( !qword_905FD0 ) /*0x21216a*/
        {
          v66 = operator new(0x6E8u); /*0x212176*/
          qword_905FD0 = sub_2723A0(v66); /*0x212183*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x212194*/
          v43 = qword_905FD0; /*0x212196*/
        }
        v44 = AchievementManager_sharedState(v34); /*0x2121a2*/
        *(_OWORD *)Block = 0; /*0x2121a8*/
        v73 = 0; /*0x2121ac*/
        v74 = 0; /*0x2121b0*/
        Block[0] = (void *)sub_3C460(32); /*0x2121be*/
        v73 = 22; /*0x2121c2*/
        v74 = 31; /*0x2121ca*/
        strcpy((char *)Block[0], "geometry.ach.friends03"); /*0x2121d9*/
        v45 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v44 + 352), Block); /*0x2121ff*/
        v46 = cocos2d::CCString::intValue(v45); /*0x21220e*/
        if ( v74 > 0xF ) /*0x212218*/
        {
          v47 = Block[0]; /*0x21221d*/
          if ( v74 + 1 >= 0x1000 ) /*0x21222b*/
          {
            v47 = (void *)*((_QWORD *)Block[0] - 1); /*0x212231*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v47 - 8) > 0x1F ) /*0x212240*/
              invoke_watson(0, 0, 0, 0, 0); /*0x212251*/
          }
          j_j_free(v47); /*0x21225b*/
        }
        v73 = 0; /*0x212260*/
        v74 = 15; /*0x212264*/
        LOBYTE(Block[0]) = 0; /*0x21226c*/
        if ( v46 < 100 ) /*0x212273*/
        {
          *(_OWORD *)v69 = 0; /*0x212278*/
          v70 = 0; /*0x21227c*/
          v71 = 0; /*0x212280*/
          v69[0] = (void *)sub_3C460(32); /*0x21228e*/
          v70 = 22; /*0x212292*/
          v71 = 31; /*0x21229a*/
          strcpy((char *)v69[0], "geometry.ach.friends03"); /*0x2122a9*/
          sub_274AD0(v43, v69); /*0x2122cb*/
          v49 = AchievementManager_sharedState(v48); /*0x2122d0*/
          GameManager_isColorUnlocked(v49, (__int64)"geometry.ach.friends03", 100); /*0x2122e5*/
        }
      }
      if ( v35 >= 50 ) /*0x2122ee*/
      {
        v50 = qword_905FD0; /*0x2122f4*/
        if ( !qword_905FD0 ) /*0x2122fe*/
        {
          v67 = operator new(0x6E8u); /*0x21230a*/
          qword_905FD0 = sub_2723A0(v67); /*0x212317*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x212328*/
          v50 = qword_905FD0; /*0x21232a*/
        }
        v51 = AchievementManager_sharedState(v34); /*0x212336*/
        *(_OWORD *)v69 = 0; /*0x21233c*/
        v70 = 0; /*0x212340*/
        v71 = 0; /*0x212344*/
        v69[0] = (void *)sub_3C460(32); /*0x212352*/
        v70 = 22; /*0x212356*/
        v71 = 31; /*0x21235e*/
        strcpy((char *)v69[0], "geometry.ach.friends04"); /*0x21236d*/
        v52 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v51 + 352), v69); /*0x212393*/
        v53 = cocos2d::CCString::intValue(v52); /*0x2123a2*/
        if ( v71 > 0xF ) /*0x2123ac*/
        {
          v54 = v69[0]; /*0x2123b1*/
          if ( v71 + 1 >= 0x1000 ) /*0x2123bf*/
          {
            v54 = (void *)*((_QWORD *)v69[0] - 1); /*0x2123c5*/
            if ( (unsigned __int64)((char *)v69[0] - (char *)v54 - 8) > 0x1F ) /*0x2123d4*/
              invoke_watson(0, 0, 0, 0, 0); /*0x2123e5*/
          }
          j_j_free(v54); /*0x2123ef*/
        }
        if ( v53 < 100 ) /*0x2123f7*/
        {
          *(_OWORD *)v69 = 0; /*0x2123fc*/
          v70 = 0; /*0x212400*/
          v71 = 0; /*0x212404*/
          v69[0] = (void *)sub_3C460(32); /*0x212412*/
          v70 = 22; /*0x212416*/
          v71 = 31; /*0x21241e*/
          strcpy((char *)v69[0], "geometry.ach.friends04"); /*0x21242d*/
          sub_274AD0(v50, v69); /*0x21244f*/
          v56 = AchievementManager_sharedState(v55); /*0x212454*/
          GameManager_isColorUnlocked(v56, (__int64)"geometry.ach.friends04", 100); /*0x212469*/
        }
      }
      v57 = *(_QWORD *)(a1 + 48); /*0x21246e*/
      if ( v57 ) /*0x212475*/
      {
        v34 = *(_QWORD **)(v57 + 56); /*0x212477*/
        v58 = *(unsigned int *)v34; /*0x21247b*/
        if ( (_DWORD)v58 ) /*0x21247f*/
        {
          v34 = (_QWORD *)v34[2]; /*0x212481*/
          for ( i = &v34[v58 - 1]; v34 <= i; ++v34 ) /*0x212490*/
          {
            if ( !*v34 ) /*0x212492*/
              break; /*0x212498*/
            *(_BYTE *)(*v34 + 795LL) = 0; /*0x21249a*/
          }
        }
      }
      v60 = GJAccountManager_sharedState(v34); /*0x2124aa*/
      v61 = *(_DWORD *)(v60 + 360) - *(_DWORD *)(v60 + 364); /*0x2124b5*/
      v62 = *(_QWORD *)&qword_905FB0; /*0x2124bb*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x2124c5*/
      {
        v68 = operator new(0x690u); /*0x2124d1*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v68); /*0x2124de*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2124ef*/
        v62 = *(_QWORD *)&qword_905FB0; /*0x2124f1*/
      }
      v63 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v62 + 1232), v61); /*0x212502*/
      if ( v63 ) /*0x21250b*/
        *((_DWORD *)v63 + 193) = 0; /*0x21250d*/
    }
  }
}

// [9/16] Address: 0x212540
// Method: FriendsProfilePage::getUserListFailed
__int64 __fastcall FriendsProfilePage_getUserListFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // esi
  __int64 v8; // rcx
  cocos2d::CCObject *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // rcx

  result = *(unsigned int *)(a1 + 8); /*0x21254f*/
  v5 = a1 - 808; /*0x212552*/
  v6 = a3; /*0x212559*/
  if ( (_DWORD)a2 == 2 ) /*0x212562*/
  {
    if ( (_DWORD)result == 1 ) /*0x212567*/
      return result; /*0x212567*/
    v8 = *(_QWORD *)(a1 - 112); /*0x21256d*/
    if ( v8 ) /*0x212574*/
      LoadingCircle_fadeAndRemove(v8, a2, a3, a4); /*0x212576*/
    LOBYTE(a2) = 1; /*0x21257f*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), a2); /*0x212584*/
    if ( v6 == -2 ) /*0x21258d*/
    {
      v9 = *(cocos2d::CCObject **)(v5 + 872); /*0x21258f*/
      if ( v9 ) /*0x212599*/
      {
        cocos2d::CCObject::release(v9); /*0x21259b*/
        *(_QWORD *)(a1 + 64) = 0; /*0x2125a1*/
      }
      *(_BYTE *)(a1 + 120) = 1; /*0x2125ac*/
      sub_2114E0(v5); /*0x2125b0*/
      v10 = "Nothing found"; /*0x2125b5*/
      return sub_C1980(v5, v10); /*0x2125bc*/
    }
    goto LABEL_13; /*0x21258d*/
  }
  if ( (_DWORD)result != (_DWORD)a2 ) /*0x2125c0*/
    return result; /*0x2125c0*/
  v11 = *(_QWORD *)(a1 - 112); /*0x2125c2*/
  if ( v11 ) /*0x2125c9*/
    LoadingCircle_fadeAndRemove(v11, a2, a3, a4); /*0x2125cb*/
  LOBYTE(a2) = 1; /*0x2125d4*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), a2); /*0x2125d9*/
  v10 = "Nothing found"; /*0x2125df*/
  if ( v6 != -2 ) /*0x2125e9*/
LABEL_13:
    v10 = "Something went wrong"; /*0x2125eb*/
  return sub_C1980(v5, v10); /*0x2125fa*/
}

// [10/16] Address: 0x212610
// Method: FriendsProfilePage::forceReloadList
// Hidden C++ exception states: #wind=1
void __fastcall FriendsProfilePage_forceReloadList(__int64 a1, int a2)
{
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 8) == a2 ) /*0x212625*/
  {
    *(_BYTE *)(a1 + 120) = 0; /*0x21262b*/
    v3 = *(cocos2d::CCObject **)(a1 + 64); /*0x21262f*/
    if ( v3 ) /*0x212638*/
    {
      cocos2d::CCObject::release(v3); /*0x21263a*/
      *(_QWORD *)(a1 + 64) = 0; /*0x212640*/
    }
    v4 = *(cocos2d::CCObject **)(a1 + 56); /*0x212644*/
    if ( v4 ) /*0x21264b*/
    {
      cocos2d::CCObject::release(v4); /*0x21264d*/
      *(_QWORD *)(a1 + 56) = 0; /*0x212653*/
    }
    v5 = *(cocos2d::CCObject **)(a1 + 48); /*0x212657*/
    if ( v5 ) /*0x21265e*/
    {
      cocos2d::CCObject::release(v5); /*0x212660*/
      *(_QWORD *)(a1 + 48) = 0; /*0x212666*/
    }
    sub_C18E0(a1 - 808); /*0x212671*/
    v6 = *(_QWORD *)(a1 - 48); /*0x212676*/
    if ( v6 ) /*0x21267d*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 512LL))(v6); /*0x212682*/
      *(_QWORD *)(a1 - 48) = 0; /*0x212688*/
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), 0); /*0x212695*/
    sub_2114E0(a1 - 808); /*0x2126a2*/
    v7 = *(_QWORD *)&qword_905FB0; /*0x2126a7*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x2126b1*/
    {
      v8 = operator new(0x690u); /*0x2126bd*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v8); /*0x2126cb*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2126dc*/
      v7 = *(_QWORD *)&qword_905FB0; /*0x2126de*/
    }
    sub_253C20(v7, *(unsigned int *)(a1 + 8)); /*0x2126e8*/
  }
}

// [11/16] Address: 0x212e40
// Method: FriendsProfilePage::FLAlert_Clicked
// Hidden C++ exception states: #wind=4
void __fastcall FriendsProfilePage_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]
  void *v16; // [rsp+68h] [rbp+20h]
  void *v17; // [rsp+68h] [rbp+20h]
  void *v18; // [rsp+68h] [rbp+20h]
  void *v19; // [rsp+68h] [rbp+20h]

  if ( a3 && *(_QWORD *)(a1 + 56) ) /*0x212e63*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x212e7a*/
    {
      v5 = *(_QWORD *)&qword_905FB0; /*0x212e7c*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x212e86*/
      {
        v16 = operator new(0x690u); /*0x212e92*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v16); /*0x212ea0*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x212eb1*/
        v5 = *(_QWORD *)&qword_905FB0; /*0x212eb3*/
      }
      sub_24D790(v5, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 392LL), 0); /*0x212ec7*/
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x212edd*/
    {
      v6 = *(_QWORD *)&qword_905FB0; /*0x212ee3*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x212eed*/
      {
        v17 = operator new(0x690u); /*0x212ef9*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0x212f07*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x212f18*/
        v6 = *(_QWORD *)&qword_905FB0; /*0x212f1a*/
      }
      if ( (unsigned __int8)sub_253670(v6, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 392LL)) ) /*0x212f2b*/
      {
        v7 = a1 + 8; /*0x212f3f*/
        if ( a1 == 784 ) /*0x212f48*/
          v7 = 0; /*0x212f48*/
        v8 = *(_QWORD *)&qword_905FB0; /*0x212f4c*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x212f56*/
        {
          v18 = operator new(0x690u); /*0x212f62*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0x212f70*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x212f81*/
          v8 = *(_QWORD *)&qword_905FB0; /*0x212f83*/
        }
        *(_QWORD *)(v8 + 1488) = v7; /*0x212f8a*/
        v9 = *(_QWORD *)(a1 + 64); /*0x212f91*/
        if ( v9 ) /*0x212f98*/
          *(_QWORD *)(v9 + 664) = 0; /*0x212f9a*/
        v13 = 0; /*0x212fa4*/
        *(_QWORD *)&v13 = sub_3C460(32); /*0x212fbd*/
        v14 = 18; /*0x212fc2*/
        v15 = 31; /*0x212fcb*/
        strcpy((char *)v13, "Unblocking user..."); /*0x212fdb*/
        v10 = a1 + 16; /*0x212fed*/
        if ( a1 == 784 ) /*0x212ff4*/
          v10 = 0; /*0x212ff4*/
        v11 = sub_39D2A0(v10, &v13); /*0x212ffd*/
        *(_QWORD *)(a1 + 64) = v11; /*0x213002*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 1064LL))(v11); /*0x213013*/
      }
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0x213023*/
    {
      v12 = *(_QWORD *)&qword_905FB0; /*0x213025*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x21302f*/
      {
        v19 = operator new(0x690u); /*0x21303b*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0x213049*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x21305a*/
        v12 = *(_QWORD *)&qword_905FB0; /*0x21305c*/
      }
      sub_24C0E0(v12, *(unsigned int *)(*(_QWORD *)(a1 + 56) + 392LL), 0); /*0x213070*/
    }
  }
}

// [12/16] Address: 0x213090
// Method: FriendsProfilePage::uploadActionFinished
void __fastcall FriendsProfilePage_uploadActionFinished(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 56); /*0x213099*/
  if ( v3 ) /*0x2130a0*/
  {
    v4 = *(_QWORD *)(a1 + 48); /*0x2130a2*/
    if ( v4 ) /*0x2130a9*/
    {
      if ( a2 == *(_DWORD *)(v4 + 392) ) /*0x2130b1*/
      {
        v6 = 15; /*0x2130e1*/
        v7 = 15; /*0x2130ea*/
        strcpy(v5, "User unblocked!"); /*0x2130f3*/
        UploadActionPopup_showSuccessMessage(v3, v5); /*0x2130fe*/
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 664LL) = 0; /*0x213109*/
        *(_QWORD *)(a1 + 56) = 0; /*0x213110*/
      }
    }
  }
}

// [13/16] Address: 0x213120
// Method: FriendsProfilePage::uploadActionFailed
void __fastcall FriendsProfilePage_uploadActionFailed(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 56) ) /*0x213126*/
  {
    v3 = *(_QWORD *)(a1 + 48); /*0x213134*/
    if ( v3 ) /*0x21313b*/
    {
      if ( a2 == *(_DWORD *)(v3 + 392) ) /*0x213147*/
      {
        v4 = 0; /*0x213166*/
        *(_QWORD *)&v4 = sub_3C460(32); /*0x213177*/
        v5 = 31; /*0x21317f*/
        v6 = 31; /*0x213188*/
        strcpy((char *)v4, "Failed. Please try again later."); /*0x213191*/
        UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 56), &v4); /*0x2131cc*/
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 664LL) = 0; /*0x2131d5*/
        *(_QWORD *)(a1 + 56) = 0; /*0x2131dc*/
      }
    }
  }
}

// [14/16] Address: 0x2131f0
// Method: FriendsProfilePage::onClosePopup
__int64 __fastcall FriendsProfilePage_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x213208*/
  LOBYTE(v4) = 1; /*0x213211*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x213216*/
  if ( a2 == *(_QWORD *)(a1 + 48) ) /*0x213220*/
    *(_QWORD *)(a1 + 48) = 0; /*0x213222*/
  return result; /*0x21322a*/
}

// [15/16] Address: 0x213240
// Method: FriendsProfilePage::textChanged
__int64 __fastcall FriendsProfilePage_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  void *v7; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]

  *(_BYTE *)(a1 + 384) = 0; /*0x213261*/
  v3 = *(_QWORD *)(a1 + 216); /*0x213268*/
  if ( v3 ) /*0x213275*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 512LL))(v3); /*0x21327a*/
    *(_QWORD *)(a1 + 216) = 0; /*0x213280*/
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x21329c*/
  *(_OWORD *)Block = 0; /*0x2132a5*/
  v6 = -1; /*0x2132aa*/
  v10 = 0; /*0x2132b1*/
  do /*0x2132c3*/
    ++v6; /*0x2132c0*/
  while ( *(_BYTE *)(v5 + v6) ); /*0x2132c3*/
  sub_3C230(Block); /*0x2132d2*/
  sub_58AD0(a1 + 336, Block); /*0x2132e3*/
  if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x2132f1*/
  {
    v7 = Block[0]; /*0x2132f3*/
    if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0x213305*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x213307*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x21331a*/
        invoke_watson(0, 0, 0, 0, 0); /*0x21332f*/
    }
    j_j_free(v7); /*0x213336*/
  }
  LevelBrowserLayer_getSearchTitle(a1 - 544, a1 + 336); /*0x213349*/
  return sub_2114E0(a1 - 544); /*0x21335a*/
}

// [16/16] Address: 0x213fa0
// Method: FriendsProfilePage::onClose
__int64 __fastcall FriendsProfilePage_onClose(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  struct cocos2d::CCObject *v3; // rbx
  cocos2d::CCTouchDispatcher *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  cocos2d::CCTouchDispatcher *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x213fad*/
  v3 = (struct cocos2d::CCObject *)*((_QWORD *)a1 + 104); /*0x213fb3*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x213fc0*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v4, v3); /*0x213fcd*/
  v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x213fd3*/
  v7 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 144LL))(v6); /*0x213fdf*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v7, a1); /*0x213feb*/
  v9 = GJAccountManager_sharedState(v8); /*0x213ff1*/
  v10 = ProfilePage_create(*(_DWORD *)(v9 + 360) - *(_DWORD *)(v9 + 364), 1u); /*0x214004*/
  v11 = *(_QWORD *)v10; /*0x214009*/
  v10[596] = 1; /*0x21400c*/
  (*(void (__fastcall **)(char *))(v11 + 1064))(v10); /*0x21401d*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x214027*/
  LOBYTE(v12) = 1; /*0x214030*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v12);
}
