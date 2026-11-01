#include <Geode/binding/MessageThreadsPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/36] Address: 0xd0cb0
// Method: MessageThreadsPage::~MessageThreadsPage
// Hidden C++ exception states: #wind=1
char *__fastcall MessageThreadsPage__dtor_MessageThreadsPage(char *Block, __int64 a2)
{
  char v2; // si
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCNotificationCenter *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  cocos2d::CCNotificationCenter *v10; // rax
  __int64 v11; // rax
  cocos2d::CCObject *v12; // rcx
  cocos2d::CCObject *v13; // rcx

  v2 = a2; /*0xd0cbf*/
  *(_QWORD *)Block = &MessageThreadsPage::`vftable'; /*0xd0ccb*/
  *((_QWORD *)Block + 40) = &MessageThreadsPage::`vftable'; /*0xd0cd5*/
  *((_QWORD *)Block + 41) = &MessageThreadsPage::`vftable'; /*0xd0ce3*/
  *((_QWORD *)Block + 42) = &MessageThreadsPage::`vftable'; /*0xd0cf1*/
  *((_QWORD *)Block + 43) = &MessageThreadsPage::`vftable'; /*0xd0cff*/
  *((_QWORD *)Block + 44) = &MessageThreadsPage::`vftable'; /*0xd0d0d*/
  *((_QWORD *)Block + 51) = &MessageThreadsPage::`vftable'; /*0xd0d1b*/
  *((_QWORD *)Block + 54) = &MessageThreadsPage::`vftable'; /*0xd0d29*/
  *((_QWORD *)Block + 68) = &MessageThreadsPage::`vftable'; /*0xd0d37*/
  v4 = Block + 664; /*0xd0d3e*/
  *((_QWORD *)Block + 83) = &MessageThreadsPage::`vftable'; /*0xd0d4c*/
  *((_QWORD *)Block + 84) = &MessageThreadsPage::`vftable'; /*0xd0d56*/
  *((_QWORD *)Block + 85) = &MessageThreadsPage::`vftable'; /*0xd0d64*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd0d6b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd0d75*/
  {
    v6 = operator new(0x690u); /*0xd0d7c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd0d89*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd0d9a*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd0d9c*/
  }
  if ( *(char **)(v5 + 1392) == v4 ) /*0xd0daa*/
    *(_QWORD *)(v5 + 1392) = 0; /*0xd0dac*/
  v7 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(Block, a2); /*0xd0db7*/
  cocos2d::CCNotificationCenter::removeObserver(v7, (struct cocos2d::CCObject *)Block, "ThreadsChangedNotification"); /*0xd0dca*/
  v10 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(v9, v8); /*0xd0dd0*/
  cocos2d::CCNotificationCenter::removeObserver( /*0xd0de3*/
    v10,
    (struct cocos2d::CCObject *)Block,
    "ThreadSelectionChangedNotification");
  v11 = *((_QWORD *)Block + 98); /*0xd0de9*/
  if ( v11 ) /*0xd0df3*/
    *(_QWORD *)(v11 + 608) = 0; /*0xd0df5*/
  v12 = (cocos2d::CCObject *)*((_QWORD *)Block + 100); /*0xd0e00*/
  if ( v12 ) /*0xd0e0a*/
    cocos2d::CCObject::release(v12); /*0xd0e0c*/
  v13 = (cocos2d::CCObject *)*((_QWORD *)Block + 111); /*0xd0e12*/
  if ( v13 ) /*0xd0e1c*/
    cocos2d::CCObject::release(v13); /*0xd0e1e*/
  sub_3C310(Block + 896); /*0xd0e2b*/
  sub_3C310(Block + 808); /*0xd0e37*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0xd0e3f*/
  if ( (v2 & 1) != 0 ) /*0xd0e49*/
    j_j_free(Block); /*0xd0e53*/
  return Block; /*0xd0e5b*/
}

// [2/36] Address: 0xd2440
// Method: MessageThreadsPage::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *MessageThreadsPage_create()
{
  cocos2d::CCObject *v0; // rbx
  __int64 (__fastcall *v1)(cocos2d::CCObject *); // rdx
  char v2; // al

  v0 = (cocos2d::CCObject *)operator new(0x3C0u); /*0xd2454*/
  FLAlertLayer_FLAlertLayer(v0); /*0xd245f*/
  *(_QWORD *)v0 = &MessageThreadsPage::`vftable'; /*0xd246b*/
  *((_QWORD *)v0 + 40) = &MessageThreadsPage::`vftable'; /*0xd2475*/
  *((_QWORD *)v0 + 41) = &MessageThreadsPage::`vftable'; /*0xd2483*/
  *((_QWORD *)v0 + 42) = &MessageThreadsPage::`vftable'; /*0xd2491*/
  *((_QWORD *)v0 + 43) = &MessageThreadsPage::`vftable'; /*0xd249f*/
  *((_QWORD *)v0 + 44) = &MessageThreadsPage::`vftable'; /*0xd24ad*/
  *((_QWORD *)v0 + 51) = &MessageThreadsPage::`vftable'; /*0xd24bb*/
  *((_QWORD *)v0 + 54) = &MessageThreadsPage::`vftable'; /*0xd24c9*/
  *((_QWORD *)v0 + 68) = &MessageThreadsPage::`vftable'; /*0xd24d7*/
  *((_QWORD *)v0 + 83) = &MessageThreadsPage::`vftable'; /*0xd24e5*/
  *((_QWORD *)v0 + 84) = &MessageThreadsPage::`vftable'; /*0xd24f3*/
  *((_QWORD *)v0 + 85) = &MessageThreadsPage::`vftable'; /*0xd2501*/
  *((_QWORD *)v0 + 86) = 0; /*0xd250a*/
  *((_QWORD *)v0 + 87) = 0; /*0xd2511*/
  *((_QWORD *)v0 + 88) = 0; /*0xd2518*/
  *((_QWORD *)v0 + 89) = 0; /*0xd251f*/
  *((_QWORD *)v0 + 90) = 0; /*0xd2526*/
  *((_QWORD *)v0 + 91) = 0; /*0xd252d*/
  *((_QWORD *)v0 + 92) = 0; /*0xd2534*/
  *((_QWORD *)v0 + 93) = 0; /*0xd253b*/
  *((_QWORD *)v0 + 94) = 0; /*0xd2542*/
  *((_QWORD *)v0 + 95) = 0; /*0xd2549*/
  *((_QWORD *)v0 + 96) = 0; /*0xd2550*/
  *((_QWORD *)v0 + 97) = 0; /*0xd2557*/
  *((_QWORD *)v0 + 98) = 0; /*0xd255e*/
  *((_QWORD *)v0 + 99) = 0; /*0xd2565*/
  *((_QWORD *)v0 + 100) = 0; /*0xd256c*/
  *(_OWORD *)((char *)v0 + 808) = 0; /*0xd2576*/
  *((_QWORD *)v0 + 103) = 0; /*0xd257d*/
  *((_QWORD *)v0 + 104) = 15; /*0xd2584*/
  *((_BYTE *)v0 + 808) = 0; /*0xd258f*/
  *((_QWORD *)v0 + 105) = 0; /*0xd2596*/
  *((_QWORD *)v0 + 106) = 0; /*0xd259d*/
  *((_DWORD *)v0 + 214) = 0; /*0xd25a4*/
  *((_OWORD *)v0 + 54) = 0; /*0xd25ac*/
  *((_QWORD *)v0 + 110) = 0; /*0xd25b3*/
  *((_QWORD *)v0 + 111) = 0; /*0xd25ba*/
  *((_OWORD *)v0 + 56) = 0; /*0xd25c1*/
  *((_QWORD *)v0 + 114) = 0; /*0xd25c8*/
  *((_QWORD *)v0 + 115) = 15; /*0xd25cf*/
  *((_BYTE *)v0 + 896) = 0; /*0xd25da*/
  *((_QWORD *)v0 + 116) = 0; /*0xd25e0*/
  *((_QWORD *)v0 + 117) = 0; /*0xd25e7*/
  *((_WORD *)v0 + 472) = 0; /*0xd25ee*/
  *((_BYTE *)v0 + 946) = 0; /*0xd25f5*/
  *((_QWORD *)v0 + 119) = 0; /*0xd25fb*/
  v1 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v0 + 72LL); /*0xd2605*/
  if ( (char *)v1 == (char *)MessageThreadsPage_init ) /*0xd2616*/
    v2 = MessageThreadsPage_init(v0); /*0xd2618*/
  else
    v2 = v1(v0); /*0xd261f*/
  if ( v2 ) /*0xd2623*/
  {
    cocos2d::CCObject::autorelease(v0); /*0xd2628*/
    return v0; /*0xd262e*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0xd264b*/
    return 0; /*0xd264e*/
  }
}

// [4/36] Address: 0xd3e00
// Method: MessageThreadsPage::loadPage
// Hidden C++ exception states: #wind=3
void __fastcall MessageThreadsPage_loadPage(__int64 a1, int a2, char a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  void *Src; // rsi
  int v9; // ecx
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct cocos2d::CCObject *v15; // rbx
  cocos2d::CCTouchDispatcher *v16; // rax
  __int64 v17; // rdx
  void *v18; // [rsp+30h] [rbp-48h]
  void *v19; // [rsp+30h] [rbp-48h]
  _BYTE v20[32]; // [rsp+38h] [rbp-40h] BYREF

  if ( a2 >= 0 ) /*0xd3e02*/
  {
    v6 = a1 + 664; /*0xd3e32*/
    if ( !a1 ) /*0xd3e3f*/
      v6 = 0; /*0xd3e3f*/
    v7 = *(_QWORD *)&qword_905FB0; /*0xd3e43*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xd3e4d*/
    {
      v18 = operator new(0x690u); /*0xd3e59*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0xd3e67*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd3e78*/
      v7 = *(_QWORD *)&qword_905FB0; /*0xd3e7a*/
    }
    *(_QWORD *)(v7 + 1392) = v6; /*0xd3e81*/
    Src = (void *)MessageThreadsPage_userFilterCSV(a1, v20); /*0xd3e95*/
    v9 = qword_905FB0; /*0xd3e98*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xd3ea2*/
    {
      v19 = operator new(0x690u); /*0xd3eae*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0xd3ebc*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd3ecd*/
      v9 = qword_905FB0; /*0xd3ecf*/
    }
    v10 = sub_246C30(v9, a2, (int)a1 + 808, *(_DWORD *)(a1 + 856), Src); /*0xd3ef0*/
    sub_3C310(v20); /*0xd3ef8*/
    if ( v10 ) /*0xd3f00*/
    {
      *(_DWORD *)(a1 + 840) = a2; /*0xd3f02*/
      v13 = MessageThreadsPage_userFilterCSV(a1, v20); /*0xd3f10*/
      sub_58AD0(a1 + 896, v13); /*0xd3f1f*/
      sub_3C310(v20); /*0xd3f29*/
    }
    if ( a3 ) /*0xd3f31*/
    {
      if ( v10 ) /*0xd3f36*/
        *(_BYTE *)(a1 + 945) = 1; /*0xd3f38*/
      else
        *(_BYTE *)(a1 + 946) = 1; /*0xd3f44*/
    }
    else
    {
      *(_BYTE *)(a1 + 945) = 0; /*0xd3f50*/
      if ( !v10 ) /*0xd3f5a*/
      {
        *(_BYTE *)(a1 + 944) = 1; /*0xd3f5c*/
        *(_DWORD *)(a1 + 848) = a2; /*0xd3f63*/
      }
      if ( *(_QWORD *)(a1 + 688) ) /*0xd3f69*/
      {
        v14 = cocos2d::CCDirector::sharedDirector(v12); /*0xd3f73*/
        v15 = *(struct cocos2d::CCObject **)(a1 + 688); /*0xd3f79*/
        v16 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 144LL))(v14); /*0xd3f8d*/
        cocos2d::CCTouchDispatcher::unregisterForcePrio(v16, v15); /*0xd3f96*/
        LOBYTE(v17) = 1; /*0xd3fa6*/
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 688) + 520LL))(*(_QWORD *)(a1 + 688), v17); /*0xd3fa8*/
        *(_QWORD *)(a1 + 688) = 0; /*0xd3fae*/
        *(_QWORD *)(a1 + 952) = 0; /*0xd3fb5*/
      }
      LOBYTE(v11) = 1; /*0xd3fc6*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), v11); /*0xd3fc8*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 704) + 336LL))(*(_QWORD *)(a1 + 704), 0); /*0xd3fda*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 712) + 336LL))(*(_QWORD *)(a1 + 712), 0); /*0xd3fec*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 720) + 336LL))(*(_QWORD *)(a1 + 720), 0); /*0xd3ffe*/
    }
  }
}

// [5/36] Address: 0xd4030
// Method: MessageThreadsPage::onThreadsChanged
void __fastcall MessageThreadsPage_onThreadsChanged(__int64 a1)
{
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 672LL))(a1) ) /*0xd403c*/
    MessageThreadsPage_loadPage(a1, *(_DWORD *)(a1 + 840), *(_QWORD *)(a1 + 688) != 0); /*0xd4060*/
}

// [6/36] Address: 0xd43c0
// Method: MessageThreadsPage::onSelectAll
void __fastcall MessageThreadsPage_onSelectAll(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  int v3; // esi
  signed int v4; // ebx
  unsigned int v5; // ebp
  bool v6; // si
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = *(cocos2d::CCArray **)(a1 + 800); /*0xd43c9*/
  if ( v2 && cocos2d::CCArray::count(v2) ) /*0xd43d9*/
  {
    v3 = sub_D4330(a1); /*0xd4405*/
    v4 = 0; /*0xd4414*/
    v5 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 800)); /*0xd4416*/
    if ( (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 800)) > 0 ) /*0xd4420*/
    {
      v6 = v3 != v5; /*0xd4424*/
      do /*0xd4457*/
      {
        v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 800), v4++); /*0xd4439*/
        *((_BYTE *)v7 + 360) = v6; /*0xd4441*/
      }
      while ( v4 < (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 800)) ); /*0xd4457*/
    }
    if ( *(_QWORD *)(a1 + 752) ) /*0xd4459*/
    {
      v8 = *(_QWORD *)(a1 + 752); /*0xd446d*/
      v9 = sub_D4330(a1); /*0xd4477*/
      sub_3A56E0(v8, v9); /*0xd4481*/
    }
    v10 = *(_QWORD *)(a1 + 688); /*0xd4486*/
    if ( v10 ) /*0xd4495*/
    {
      v11 = *(_QWORD *)(v10 + 544); /*0xd4497*/
      if ( v11 ) /*0xd44a1*/
        CustomListView_reloadAll(v11); /*0xd44a8*/
    }
  }
}

// [7/36] Address: 0xd44c0
// Method: MessageThreadsPage::onSelectionChanged
void __fastcall MessageThreadsPage_onSelectionChanged(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax

  if ( *(_QWORD *)(a1 + 752) ) /*0xd44c4*/
  {
    v1 = *(_QWORD *)(a1 + 752); /*0xd44d3*/
    v2 = sub_D4330(a1); /*0xd44da*/
    sub_3A56E0(v1, v2); /*0xd44ed*/
  }
}

// [8/36] Address: 0xd4690
// Method: MessageThreadsPage::onShowInvites
// Hidden C++ exception states: #wind=1
__int64 MessageThreadsPage_onShowInvites()
{
  cocos2d::CCObject *v0; // rbx
  __int64 (__fastcall *v1)(cocos2d::CCObject *); // rdx
  char v2; // al
  __int64 (__fastcall *v3)(cocos2d::CCObject *); // rdx

  v0 = (cocos2d::CCObject *)operator new(0x368u); /*0xd46a4*/
  PlayLayer_PlayLayer((__int64)v0); /*0xd46af*/
  *(_QWORD *)v0 = &InvitesPopup::`vftable'; /*0xd46bb*/
  *((_QWORD *)v0 + 40) = &InvitesPopup::`vftable'; /*0xd46c5*/
  *((_QWORD *)v0 + 41) = &InvitesPopup::`vftable'; /*0xd46d3*/
  *((_QWORD *)v0 + 42) = &InvitesPopup::`vftable'; /*0xd46e1*/
  *((_QWORD *)v0 + 43) = &InvitesPopup::`vftable'; /*0xd46ef*/
  *((_QWORD *)v0 + 44) = &InvitesPopup::`vftable'; /*0xd46fd*/
  *((_QWORD *)v0 + 51) = &InvitesPopup::`vftable'; /*0xd470b*/
  *((_QWORD *)v0 + 54) = &InvitesPopup::`vftable'; /*0xd4719*/
  *((_QWORD *)v0 + 68) = &InvitesPopup::`vftable'; /*0xd4727*/
  *((_QWORD *)v0 + 97) = &InvitesPopup::`vftable'; /*0xd4735*/
  *((_QWORD *)v0 + 98) = &InvitesPopup::`vftable'; /*0xd4743*/
  *((_QWORD *)v0 + 99) = 0; /*0xd474c*/
  *((_QWORD *)v0 + 100) = 0; /*0xd4753*/
  *((_DWORD *)v0 + 202) = 0; /*0xd475a*/
  *((_WORD *)v0 + 406) = 0; /*0xd4760*/
  *((_QWORD *)v0 + 102) = 0; /*0xd4767*/
  *((_QWORD *)v0 + 103) = 0; /*0xd476e*/
  *((_QWORD *)v0 + 104) = 0; /*0xd4775*/
  *(_OWORD *)((char *)v0 + 840) = 0; /*0xd477f*/
  *((_QWORD *)v0 + 107) = 0; /*0xd4786*/
  *((_QWORD *)v0 + 108) = 15; /*0xd478d*/
  *((_BYTE *)v0 + 840) = 0; /*0xd4798*/
  v1 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v0 + 72LL); /*0xd47a2*/
  if ( (char *)v1 == (char *)MusicBrowser_init ) /*0xd47b3*/
    v2 = MusicBrowser_init(v0); /*0xd47b5*/
  else
    v2 = v1(v0); /*0xd47bc*/
  if ( v2 ) /*0xd47c3*/
  {
    cocos2d::CCObject::autorelease(v0); /*0xd47c5*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0xd47d5*/
    v0 = 0; /*0xd47d8*/
  }
  v3 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v0 + 1064LL); /*0xd47de*/
  if ( (char *)v3 == (char *)ThreadViewPopup_show ) /*0xd47f2*/
    return ThreadViewPopup_show(v0); /*0xd47fe*/
  else
    return v3(v0); /*0xd480d*/
}

// [9/36] Address: 0xd4810
// Method: MessageThreadsPage::onDeleteSelected
// Hidden C++ exception states: #wind=4
double __fastcall MessageThreadsPage_onDeleteSelected(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  int v3; // edi
  int v4; // esi
  int v5; // r15d
  int v6; // r12d
  signed int v7; // ebx
  struct cocos2d::CCObject *v8; // rax
  size_t v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  const char *v12; // r8
  cocos2d::CCString *v13; // rax
  char *CString; // rax
  size_t v15; // r8
  const char *v16; // rdi
  const char *v17; // r8
  cocos2d::CCString *v18; // rax
  char *v19; // rax
  size_t v20; // r8
  const char *v21; // r8
  cocos2d::CCString *v22; // rax
  char *v23; // rax
  size_t v24; // r8
  cocos2d::CCString *v25; // rax
  char *v26; // rax
  size_t v27; // r8
  const char *v28; // rax
  cocos2d::CCString *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  size_t v33; // r15
  void **v34; // r12
  size_t v35; // rsi
  void **v36; // rdi
  void **v37; // rdx
  void *v38; // rcx
  int v39; // edi
  void **v40; // rdx
  int v41; // eax
  _QWORD *v42; // rbx
  void *v43; // rcx
  double result; // xmm0_8
  int v45; // [rsp+50h] [rbp-69h]
  _BYTE v46[32]; // [rsp+60h] [rbp-59h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-39h] BYREF
  size_t Size; // [rsp+90h] [rbp-29h]
  unsigned __int64 v49; // [rsp+98h] [rbp-21h]
  void *Block[2]; // [rsp+A0h] [rbp-19h] BYREF
  size_t v51; // [rsp+B0h] [rbp-9h]
  unsigned __int64 v52; // [rsp+B8h] [rbp-1h]
  void *v53[2]; // [rsp+C0h] [rbp+7h] BYREF
  __m128i si128; // [rsp+D0h] [rbp+17h]

  v45 = sub_D4330(a1); /*0xd484d*/
  if ( v45 ) /*0xd4852*/
  {
    v2 = *(cocos2d::CCArray **)(a1 + 800); /*0xd4858*/
    if ( v2 ) /*0xd4862*/
    {
      v3 = 0; /*0xd4868*/
      v4 = 0; /*0xd486b*/
      v5 = 0; /*0xd486e*/
      v6 = 0; /*0xd4871*/
      v7 = 0; /*0xd4874*/
      if ( (int)cocos2d::CCArray::count(v2) > 0 ) /*0xd487f*/
      {
        do /*0xd48d5*/
        {
          v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 800), v7); /*0xd488a*/
          if ( *((_BYTE *)v8 + 360) ) /*0xd4890*/
          {
            if ( *((_BYTE *)v8 + 320) ) /*0xd4899*/
            {
              if ( *((_BYTE *)v8 + 321) ) /*0xd48a2*/
                ++v4; /*0xd48ab*/
              else
                ++v3; /*0xd48af*/
            }
            else if ( *((_DWORD *)v8 + 81) == 8 ) /*0xd48ba*/
            {
              ++v6; /*0xd48bc*/
            }
            else
            {
              ++v5; /*0xd48c1*/
            }
          }
          ++v7; /*0xd48c4*/
        }
        while ( v7 < (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 800)) ); /*0xd48d5*/
      }
      *(_OWORD *)Src = 0; /*0xd48da*/
      v9 = 0; /*0xd48de*/
      Size = 0; /*0xd48e1*/
      v10 = 15; /*0xd48e5*/
      v49 = 15; /*0xd48eb*/
      LOBYTE(Src[0]) = 0; /*0xd48ef*/
      v11 = -1; /*0xd48f9*/
      if ( v3 > 0 ) /*0xd4902*/
      {
        v12 = (const char *)&unk_70802C; /*0xd4904*/
        if ( v3 == 1 ) /*0xd490e*/
          v12 = &byte_6E86E0; /*0xd490e*/
        v13 = cocos2d::CCString::createWithFormat( /*0xd491b*/
                "<cl>%i DM%s will be cleared. Your message history will be permanently deleted.</c>",
                v3,
                v12);
        CString = (char *)cocos2d::CCString::getCString(v13); /*0xd4924*/
        v15 = -1; /*0xd492a*/
        do /*0xd4933*/
          ++v15; /*0xd4930*/
        while ( CString[v15] ); /*0xd4933*/
        sub_43D80(Src, CString, v15); /*0xd4941*/
        v9 = Size; /*0xd4946*/
      }
      if ( v4 <= 0 ) /*0xd494c*/
      {
        v16 = (const char *)&unk_70802C; /*0xd49bc*/
      }
      else
      {
        if ( v9 ) /*0xd4951*/
          sub_43D80(Src, (void *)Delimiter, 1u); /*0xd4964*/
        v16 = (const char *)&unk_70802C; /*0xd4969*/
        v17 = (const char *)&unk_70802C; /*0xd4970*/
        if ( v4 == 1 ) /*0xd497d*/
          v17 = &byte_6E86E0; /*0xd497d*/
        v18 = cocos2d::CCString::createWithFormat("<cl>%i pending request%s will be cancelled.</c>", v4, v17); /*0xd498a*/
        v19 = (char *)cocos2d::CCString::getCString(v18); /*0xd4993*/
        v20 = -1; /*0xd4999*/
        do /*0xd49a3*/
          ++v20; /*0xd49a0*/
        while ( v19[v20] ); /*0xd49a3*/
        sub_43D80(Src, v19, v20); /*0xd49b1*/
        v9 = Size; /*0xd49b6*/
      }
      if ( v5 > 0 ) /*0xd49c6*/
      {
        if ( v9 ) /*0xd49cb*/
          sub_43D80(Src, (void *)Delimiter, 1u); /*0xd49de*/
        v21 = (const char *)&unk_70802C; /*0xd49e3*/
        if ( v5 == 1 ) /*0xd49f1*/
          v21 = &byte_6E86E0; /*0xd49f1*/
        v22 = cocos2d::CCString::createWithFormat( /*0xd49ff*/
                "<cy>You will leave %i group chat%s. You can only rejoin if you are invited back.</c>",
                v5,
                v21);
        v23 = (char *)cocos2d::CCString::getCString(v22); /*0xd4a08*/
        v24 = -1; /*0xd4a0e*/
        do /*0xd4a14*/
          ++v24; /*0xd4a11*/
        while ( v23[v24] ); /*0xd4a14*/
        sub_43D80(Src, v23, v24); /*0xd4a22*/
        v9 = Size; /*0xd4a27*/
      }
      if ( v6 > 0 ) /*0xd4a37*/
      {
        if ( v9 ) /*0xd4a3c*/
          sub_43D80(Src, (void *)Delimiter, 1u); /*0xd4a4f*/
        if ( v6 == 1 ) /*0xd4a58*/
          v16 = &byte_6E86E0; /*0xd4a58*/
        v25 = cocos2d::CCString::createWithFormat( /*0xd4a69*/
                "<cy>%i group chat%s you were removed from will disappear from your inbox. You will no longer be able to "
                "read or report them.</c>",
                v6,
                v16);
        v26 = (char *)cocos2d::CCString::getCString(v25); /*0xd4a72*/
        v27 = -1; /*0xd4a78*/
        do /*0xd4a83*/
          ++v27; /*0xd4a80*/
        while ( v26[v27] ); /*0xd4a83*/
        sub_43D80(Src, v26, v27); /*0xd4a91*/
      }
      if ( v45 == 1 ) /*0xd4a9c*/
      {
        v28 = "Delete this conversation?"; /*0xd4a9e*/
      }
      else
      {
        v29 = cocos2d::CCString::createWithFormat("Delete <cy>%i</c> conversations?", v45); /*0xd4aae*/
        v28 = cocos2d::CCString::getCString(v29); /*0xd4ab7*/
      }
      *(_OWORD *)v53 = 0; /*0xd4ac0*/
      si128 = 0; /*0xd4ac7*/
      v30 = -1; /*0xd4acc*/
      do /*0xd4ad3*/
        ++v30; /*0xd4ad0*/
      while ( v28[v30] ); /*0xd4ad3*/
      sub_3C230(v53); /*0xd4ae1*/
      v33 = Size; /*0xd4ae7*/
      if ( Size == 0x7FFFFFFFFFFFFFFFLL ) /*0xd4aff*/
        sub_8D90(0x7FFFFFFFFFFFFFFFLL, v31, v32); /*0xd4d57*/
      v34 = Src; /*0xd4b05*/
      if ( v49 > 0xF ) /*0xd4b0e*/
        v34 = (void **)Src[0]; /*0xd4b0e*/
      *(_OWORD *)Block = 0; /*0xd4b16*/
      v35 = Size + 1; /*0xd4b1a*/
      v36 = Block; /*0xd4b1e*/
      if ( Size + 1 > 0xF ) /*0xd4b26*/
      {
        v10 = v35 | 0xF; /*0xd4b2b*/
        if ( (v35 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xd4b32*/
        {
          if ( v10 < 0x16 ) /*0xd4b41*/
            v10 = 22; /*0xd4b41*/
        }
        else
        {
          v10 = 0x7FFFFFFFFFFFFFFFLL; /*0xd4b34*/
        }
        v36 = (void **)sub_3C460(v10 + 1); /*0xd4b4e*/
        Block[0] = v36; /*0xd4b51*/
      }
      v51 = v33 + 1; /*0xd4b55*/
      v52 = v10; /*0xd4b59*/
      *(_BYTE *)v36 = 10; /*0xd4b5d*/
      memcpy((char *)v36 + 1, v34, v33); /*0xd4b6a*/
      *((_BYTE *)v36 + v35) = 0; /*0xd4b6f*/
      v37 = Block; /*0xd4b73*/
      if ( v52 > 0xF ) /*0xd4b7c*/
        v37 = (void **)Block[0]; /*0xd4b7c*/
      sub_43D80(v53, v37, v51); /*0xd4b89*/
      if ( v52 > 0xF ) /*0xd4b97*/
      {
        v38 = Block[0]; /*0xd4b9c*/
        if ( v52 + 1 >= 0x1000 ) /*0xd4baa*/
        {
          v38 = (void *)*((_QWORD *)Block[0] - 1); /*0xd4bb0*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v38 - 8) > 0x1F ) /*0xd4bbf*/
            invoke_watson(0, 0, 0, 0, 0); /*0xd4bd2*/
        }
        j_j_free(v38); /*0xd4bd9*/
      }
      v39 = a1 + 672; /*0xd4bde*/
      if ( !a1 ) /*0xd4bed*/
        v39 = 0; /*0xd4bed*/
      v40 = v53; /*0xd4bf1*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0xd4bfa*/
        v40 = (void **)v53[0]; /*0xd4bfa*/
      *(_OWORD *)Block = 0; /*0xd4c02*/
      v51 = 0; /*0xd4c06*/
      v52 = 0; /*0xd4c0a*/
      do /*0xd4c13*/
        ++v11; /*0xd4c10*/
      while ( *((_BYTE *)v40 + v11) ); /*0xd4c13*/
      sub_3C230(Block); /*0xd4c20*/
      v41 = sub_3E4F0(v46, Block); /*0xd4c35*/
      v42 = (_QWORD *)FLAlertLayer_create_0( /*0xd4c82*/
                        v39,
                        (unsigned int)"Delete",
                        v41,
                        (unsigned int)"Back",
                        (__int64)"Delete",
                        1133903872,
                        0,
                        0,
                        1065353216);
      sub_3C310(Block); /*0xd4c89*/
      sub_41FC0(v42[77], "GJ_button_06.png"); /*0xd4c9c*/
      (*(void (__fastcall **)(_QWORD *, __int64))(*v42 + 64LL))(v42, 2); /*0xd4cb0*/
      (*(void (__fastcall **)(_QWORD *))(*v42 + 1064LL))(v42); /*0xd4cc0*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0xd4ccb*/
      {
        v43 = v53[0]; /*0xd4cd0*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0xd4cde*/
        {
          v43 = (void *)*((_QWORD *)v53[0] - 1); /*0xd4ce4*/
          if ( (unsigned __int64)((char *)v53[0] - (char *)v43 - 8) > 0x1F ) /*0xd4cf3*/
            invoke_watson(0, 0, 0, 0, 0); /*0xd4d04*/
        }
        j_j_free(v43); /*0xd4d0b*/
      }
      si128 = _mm_load_si128((const __m128i *)&::Size); /*0xd4d18*/
      LOBYTE(v53[0]) = 0; /*0xd4d1d*/
      return sub_3C310(Src); /*0xd4d25*/
    }
  }
  return result; /*0xd4d2a*/
}

// [10/36] Address: 0xd4d60
// Method: MessageThreadsPage::FLAlert_Clicked
// Hidden C++ exception states: #wind=8
double __fastcall MessageThreadsPage_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  cocos2d::CCArray *v4; // rcx
  signed int v5; // r14d
  __int64 v6; // r8
  struct cocos2d::CCObject *v7; // rax
  struct cocos2d::CCObject *v8; // rbx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // bl
  void *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  char v20; // di
  void *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  cocos2d::CCString *v24; // rax
  char *v25; // rax
  size_t v26; // r8
  __int128 *p_Src; // rcx
  char *v28; // rdx
  __int128 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  double result; // xmm0_8
  void *v34; // [rsp+30h] [rbp-39h]
  void *v35; // [rsp+30h] [rbp-39h]
  void *v36; // [rsp+30h] [rbp-39h]
  void *v37; // [rsp+38h] [rbp-31h]
  void *v38; // [rsp+40h] [rbp-29h]
  void *v39; // [rsp+48h] [rbp-21h]
  __int128 Src; // [rsp+50h] [rbp-19h] BYREF
  __int64 v41; // [rsp+60h] [rbp-9h]
  unsigned __int64 v42; // [rsp+68h] [rbp-1h]
  __int128 v43; // [rsp+70h] [rbp+7h] BYREF
  __int64 v44; // [rsp+80h] [rbp+17h]
  unsigned __int64 v45; // [rsp+88h] [rbp+1Fh]

  if ( a3 ) /*0xd4d63*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0xd4da4*/
    {
      v4 = *(cocos2d::CCArray **)(a1 + 128); /*0xd4daa*/
      if ( v4 ) /*0xd4db4*/
      {
        Src = 0; /*0xd4dbd*/
        v41 = 0; /*0xd4dc4*/
        v42 = 15; /*0xd4dc8*/
        LOBYTE(Src) = 0; /*0xd4dd0*/
        v5 = 0; /*0xd4dd4*/
        if ( (int)cocos2d::CCArray::count(v4) > 0 ) /*0xd4ddf*/
        {
          do /*0xd4dfa*/
          {
            v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 128), v5); /*0xd4dfa*/
            v8 = v7; /*0xd4e00*/
            if ( *((_BYTE *)v7 + 360) ) /*0xd4e03*/
            {
              if ( *((_BYTE *)v7 + 320) ) /*0xd4e10*/
              {
                if ( *((_BYTE *)v7 + 321) ) /*0xd4f31*/
                {
                  v16 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v7 + 15)); /*0xd4f48*/
                  CString = cocos2d::CCString::getCString(v16); /*0xd4f51*/
                  v43 = 0; /*0xd4f5a*/
                  v44 = 0; /*0xd4f5e*/
                  v45 = 0; /*0xd4f62*/
                  v18 = -1; /*0xd4f66*/
                  do /*0xd4f73*/
                    ++v18; /*0xd4f70*/
                  while ( CString[v18] ); /*0xd4f73*/
                  sub_3C230(&v43); /*0xd4f81*/
                  v19 = *(_QWORD *)&qword_905FB0; /*0xd4f87*/
                  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd4f91*/
                  {
                    v39 = operator new(0x690u); /*0xd4f9d*/
                    *(_QWORD *)&qword_905FB0 = sub_214250(v39); /*0xd4faa*/
                    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd4fbb*/
                    v19 = *(_QWORD *)&qword_905FB0; /*0xd4fbd*/
                  }
                  v20 = sub_24F190(v19, *((unsigned int *)v8 + 14), 11, &v43); /*0xd4fd6*/
                  if ( v45 > 0xF ) /*0xd4fe1*/
                  {
                    v21 = (void *)v43; /*0xd4fe6*/
                    if ( v45 + 1 >= 0x1000 ) /*0xd4ff4*/
                    {
                      v21 = *(void **)(v43 - 8); /*0xd4ffa*/
                      if ( (unsigned __int64)(v43 - (_QWORD)v21 - 8) > 0x1F ) /*0xd5009*/
LABEL_57:
                        invoke_watson(0, 0, 0, 0, 0); /*0xd51f4*/
                    }
                    j_j_free(v21); /*0xd500f*/
                  }
                  if ( v20 ) /*0xd5017*/
                  {
                    v22 = a1 - 8; /*0xd5020*/
                    if ( a1 == 672 ) /*0xd5027*/
                      v22 = 0; /*0xd5027*/
                    v23 = *(_QWORD *)&qword_905FB0; /*0xd502b*/
                    if ( !*(_QWORD *)&qword_905FB0 ) /*0xd5035*/
                    {
                      v34 = operator new(0x690u); /*0xd5041*/
                      *(_QWORD *)&qword_905FB0 = sub_214250(v34); /*0xd504e*/
                      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd505f*/
                      v23 = *(_QWORD *)&qword_905FB0; /*0xd5061*/
                    }
                    *(_QWORD *)(v23 + 1392) = v22; /*0xd5068*/
                  }
                }
                if ( v41 ) /*0xd5074*/
                  sub_43D80(&Src, &unk_709CE8, 1u); /*0xd5087*/
                v24 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v8 + 14)); /*0xd5096*/
                v25 = (char *)cocos2d::CCString::getCString(v24); /*0xd509f*/
                v26 = -1; /*0xd50a5*/
                do /*0xd50b3*/
                  ++v26; /*0xd50b0*/
                while ( v25[v26] ); /*0xd50b3*/
                sub_43D80(&Src, v25, v26); /*0xd50c1*/
              }
              else
              {
                v43 = 0; /*0xd4e20*/
                v44 = 0; /*0xd4e24*/
                v45 = 15; /*0xd4e28*/
                LOBYTE(v43) = 0; /*0xd4e30*/
                v9 = *((_DWORD *)v7 + 81); /*0xd4e34*/
                v10 = *(_QWORD *)&qword_905FB0; /*0xd4e3a*/
                if ( !*(_QWORD *)&qword_905FB0 ) /*0xd4e44*/
                {
                  v37 = operator new(0x690u); /*0xd4e50*/
                  *(_QWORD *)&qword_905FB0 = sub_214250(v37); /*0xd4e5d*/
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd4e6e*/
                  v10 = *(_QWORD *)&qword_905FB0; /*0xd4e70*/
                }
                v11 = 5; /*0xd4e77*/
                if ( v9 == 8 ) /*0xd4e80*/
                  v11 = 18; /*0xd4e80*/
                v12 = sub_24F190(v10, *((unsigned int *)v8 + 14), v11, &v43); /*0xd4e90*/
                if ( v45 > 0xF ) /*0xd4e9b*/
                {
                  v13 = (void *)v43; /*0xd4ea0*/
                  if ( v45 + 1 >= 0x1000 ) /*0xd4eae*/
                  {
                    v13 = *(void **)(v43 - 8); /*0xd4eb4*/
                    if ( (unsigned __int64)(v43 - (_QWORD)v13 - 8) > 0x1F ) /*0xd4ec3*/
                      goto LABEL_57; /*0xd4ec3*/
                  }
                  j_j_free(v13); /*0xd4ec9*/
                }
                if ( v12 ) /*0xd4ed0*/
                {
                  v14 = a1 - 8; /*0xd4edd*/
                  if ( a1 == 672 ) /*0xd4ee4*/
                    v14 = 0; /*0xd4ee4*/
                  v15 = *(_QWORD *)&qword_905FB0; /*0xd4ee8*/
                  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd4ef2*/
                  {
                    v38 = operator new(0x690u); /*0xd4efe*/
                    *(_QWORD *)&qword_905FB0 = sub_214250(v38); /*0xd4f0b*/
                    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd4f1c*/
                    v15 = *(_QWORD *)&qword_905FB0; /*0xd4f1e*/
                  }
                  *(_QWORD *)(v15 + 1392) = v14; /*0xd4f25*/
                }
              }
            }
            ++v5; /*0xd50c6*/
          }
          while ( v5 < (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 128)) ); /*0xd4dfa*/
        }
        if ( v41 ) /*0xd50e6*/
        {
          p_Src = &Src; /*0xd50ec*/
          if ( v42 > 0xF ) /*0xd50f5*/
            p_Src = (__int128 *)Src; /*0xd50f5*/
          v28 = (char *)p_Src + v41; /*0xd50fa*/
          v29 = &Src; /*0xd50fd*/
          if ( v42 > 0xF ) /*0xd5106*/
            v29 = (__int128 *)Src; /*0xd5106*/
          LOBYTE(v6) = 44; /*0xd510b*/
          *(_DWORD *)(a1 + 172) = sub_672210(v29, v28, v6) + 1; /*0xd5115*/
          v30 = *(_QWORD *)&qword_905FB0; /*0xd511b*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0xd5125*/
          {
            v35 = operator new(0x690u); /*0xd5131*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v35); /*0xd513e*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd514f*/
            v30 = *(_QWORD *)&qword_905FB0; /*0xd5151*/
          }
          if ( (unsigned __int8)sub_24F190(v30, 0, 1, &Src) ) /*0xd5164*/
          {
            v31 = a1 - 8; /*0xd5174*/
            if ( a1 == 672 ) /*0xd517b*/
              v31 = 0; /*0xd517b*/
            v32 = *(_QWORD *)&qword_905FB0; /*0xd517f*/
            if ( !*(_QWORD *)&qword_905FB0 ) /*0xd5189*/
            {
              v36 = operator new(0x690u); /*0xd5195*/
              *(_QWORD *)&qword_905FB0 = sub_214250(v36); /*0xd51a2*/
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd51b3*/
              v32 = *(_QWORD *)&qword_905FB0; /*0xd51b5*/
            }
            *(_QWORD *)(v32 + 1392) = v31; /*0xd51bc*/
          }
        }
        return sub_3C310(&Src); /*0xd51c7*/
      }
    }
  }
  return result; /*0xd51f3*/
}

// [11/36] Address: 0xd5210
// Method: MessageThreadsPage::onMarkRead
// Hidden C++ exception states: #wind=3
double __fastcall MessageThreadsPage_onMarkRead(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  signed int v3; // ebx
  struct cocos2d::CCObject *v4; // rdi
  cocos2d::CCString *v5; // rax
  char *CString; // rax
  size_t v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  double result; // xmm0_8
  void *v12; // [rsp+20h] [rbp-38h]
  void *v13; // [rsp+20h] [rbp-38h]
  __int128 Src; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  if ( (unsigned int)sub_D4330(a1) ) /*0xd5231*/
  {
    v2 = *(cocos2d::CCArray **)(a1 + 800); /*0xd523e*/
    if ( v2 ) /*0xd5248*/
    {
      Src = 0; /*0xd5251*/
      v3 = 0; /*0xd5256*/
      v15 = 0; /*0xd5258*/
      v16 = 15; /*0xd525d*/
      LOBYTE(Src) = 0; /*0xd5266*/
      if ( (int)cocos2d::CCArray::count(v2) > 0 ) /*0xd5272*/
      {
        do /*0xd5308*/
        {
          v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 800), v3); /*0xd528f*/
          if ( *((_BYTE *)v4 + 360) ) /*0xd5292*/
          {
            if ( v15 ) /*0xd52a1*/
              sub_43D80(&Src, &unk_709CE8, 1u); /*0xd52b5*/
            v5 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v4 + 14)); /*0xd52c4*/
            CString = (char *)cocos2d::CCString::getCString(v5); /*0xd52cd*/
            v7 = -1; /*0xd52d3*/
            do /*0xd52e3*/
              ++v7; /*0xd52e0*/
            while ( CString[v7] ); /*0xd52e3*/
            sub_43D80(&Src, CString, v7); /*0xd52f2*/
          }
          ++v3; /*0xd52f7*/
        }
        while ( v3 < (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 800)) ); /*0xd5308*/
      }
      v8 = *(_QWORD *)&qword_905FB0; /*0xd530e*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xd5318*/
      {
        v12 = operator new(0x690u); /*0xd5324*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v12); /*0xd5332*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd5343*/
        v8 = *(_QWORD *)&qword_905FB0; /*0xd5345*/
      }
      if ( (unsigned __int8)sub_24F190(v8, 0, 3, &Src) ) /*0xd5359*/
      {
        v9 = a1 + 664; /*0xd5362*/
        v10 = *(_QWORD *)&qword_905FB0; /*0xd5369*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0xd5373*/
        {
          v13 = operator new(0x690u); /*0xd537f*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0xd538d*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd539e*/
          v10 = *(_QWORD *)&qword_905FB0; /*0xd53a0*/
        }
        *(_QWORD *)(v10 + 1392) = v9; /*0xd53a7*/
      }
      return sub_3C310(&Src); /*0xd53b3*/
    }
  }
  return result; /*0xd53b8*/
}

// [12/36] Address: 0xd53e0
// Method: MessageThreadsPage::threadUpdateFinished
// Hidden C++ exception states: #wind=1
void __fastcall MessageThreadsPage_threadUpdateFinished(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // eax
  const char *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  char v14; // r8
  __int128 v15; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int128 v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+68h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp-18h]

  if ( a3 == 1 ) /*0xd5402*/
  {
    v6 = "Conversations deleted"; /*0xd5438*/
    if ( *(_DWORD *)(a1 + 180) == 1 ) /*0xd5446*/
      v6 = "Conversation deleted"; /*0xd5446*/
LABEL_9:
    v7 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xd544a*/
    v15 = 0; /*0xd5467*/
    v16 = 0; /*0xd546e*/
    v17 = 15; /*0xd5473*/
    LOBYTE(v15) = 0; /*0xd547c*/
    v18 = 0; /*0xd5480*/
    v19 = 0; /*0xd5485*/
    v20 = 0; /*0xd548a*/
    v8 = -1; /*0xd548f*/
    do /*0xd5499*/
      ++v8; /*0xd5496*/
    while ( v6[v8] ); /*0xd5499*/
    sub_3C230(&v18); /*0xd54a8*/
    v9 = *v7; /*0xd54ad*/
    v12 = sub_3A4CA0(&v18, v10, v11, 150, &v15); /*0xd54d5*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 456))(v7, v12, 1000); /*0xd54e6*/
    if ( a3 > 0x12 ) /*0xd54ef*/
      goto LABEL_15; /*0xd54ef*/
    v13 = 264224; /*0xd54f1*/
    if ( !_bittest(&v13, a3) ) /*0xd54f6*/
      goto LABEL_15; /*0xd54f9*/
    goto LABEL_13; /*0xd54f9*/
  }
  if ( a3 == 3 ) /*0xd5408*/
  {
    v6 = "Marked as read"; /*0xd5428*/
    goto LABEL_9; /*0xd542f*/
  }
  if ( a3 <= 0x12 ) /*0xd540e*/
  {
    v5 = 264224; /*0xd5414*/
    if ( _bittest(&v5, a3) ) /*0xd5419*/
    {
LABEL_13:
      if ( *(_QWORD *)(a1 + 24) ) /*0xd54fb*/
      {
        v14 = 1; /*0xd5502*/
LABEL_16:
        MessageThreadsPage_loadPage(a1 - 664, *(_DWORD *)(a1 - 664 + 840), v14); /*0xd550a*/
        return; /*0xd5517*/
      }
LABEL_15:
      v14 = 0; /*0xd5507*/
      goto LABEL_16; /*0xd5507*/
    }
  }
}

// [13/36] Address: 0xd5540
// Method: MessageThreadsPage::threadUpdateFailed
// Hidden C++ exception states: #wind=1
void __fastcall MessageThreadsPage_threadUpdateFailed(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  __int64 *v5; // rdi
  const char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int128 v12; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int128 v15; // [rsp+58h] [rbp-30h] BYREF
  __int64 v16; // [rsp+68h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp-18h]

  if ( a3 <= 0x12 ) /*0xd5544*/
  {
    v4 = 264234; /*0xd555a*/
    if ( _bittest(&v4, a3) ) /*0xd555f*/
    {
      v5 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xd556e*/
      if ( a3 == 1 ) /*0xd5585*/
      {
        v6 = (const char *)&qword_71C148; /*0xd5587*/
      }
      else if ( a3 == 5 ) /*0xd5593*/
      {
        v6 = "Leave failed"; /*0xd5595*/
      }
      else
      {
        v6 = "Update failed"; /*0xd55a5*/
        if ( a3 == 18 ) /*0xd55af*/
          v6 = "Remove failed"; /*0xd55af*/
      }
      v12 = 0; /*0xd55b6*/
      v13 = 0; /*0xd55bd*/
      v14 = 15; /*0xd55c2*/
      LOBYTE(v12) = 0; /*0xd55cb*/
      v15 = 0; /*0xd55cf*/
      v16 = 0; /*0xd55d4*/
      v17 = 0; /*0xd55d9*/
      v7 = -1; /*0xd55de*/
      do /*0xd55e8*/
        ++v7; /*0xd55e5*/
      while ( v6[v7] ); /*0xd55e8*/
      sub_3C230(&v15); /*0xd55f4*/
      v8 = *v5; /*0xd55f9*/
      v11 = sub_3A4CA0(&v15, v9, v10, 150, &v12); /*0xd5621*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v8 + 456))(v5, v11, 1000); /*0xd5632*/
    }
  }
}

// [14/36] Address: 0xd5650
// Method: MessageThreadsPage::syncSearchFromBox
// Hidden C++ exception states: #wind=3
__int64 __fastcall MessageThreadsPage_syncSearchFromBox(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rax
  char v6; // bl
  __int128 v7; // xmm7
  __m128i v8; // xmm6
  void *v9; // rcx
  void *v10; // rcx
  const void **v11; // rbx
  const void *v12; // rdx
  __int128 *v13; // rcx
  char *v14; // rdi
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rsi
  unsigned __int8 v17; // bl
  __int128 *v18; // rdx
  char *v19; // rax
  void *Block[2]; // [rsp+38h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+48h] [rbp-90h]
  __int128 v23; // [rsp+58h] [rbp-80h] BYREF
  __m128i v24; // [rsp+68h] [rbp-70h]
  void *v25[2]; // [rsp+78h] [rbp-60h] BYREF
  __int128 v26; // [rsp+88h] [rbp-50h]

  v2 = a1[98]; /*0xd568b*/
  if ( v2 ) /*0xd5695*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v2 + 600) + 600LL) + 8LL))(*(_QWORD *)(v2 + 600) + 600LL); /*0xd56a8*/
    *(_OWORD *)v25 = 0; /*0xd56ae*/
    v26 = 0; /*0xd56b6*/
    v4 = -1; /*0xd56bf*/
    do /*0xd56c9*/
      ++v4; /*0xd56c6*/
    while ( *(_BYTE *)(v3 + v4) ); /*0xd56c9*/
    sub_3C230(v25); /*0xd56d7*/
    v5 = v25; /*0xd56dc*/
    v6 = 5; /*0xd56e1*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0xd56eb*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0xd56f8*/
    LOBYTE(Block[0]) = 0; /*0xd56fe*/
    v5 = Block; /*0xd5703*/
    v6 = 2; /*0xd5708*/
  }
  v7 = *(_OWORD *)v5; /*0xd570d*/
  v23 = *(_OWORD *)v5; /*0xd5710*/
  v8 = *((__m128i *)v5 + 1); /*0xd5715*/
  v24 = v8; /*0xd5719*/
  v5[2] = 0; /*0xd571e*/
  v5[3] = &loc_D + 2; /*0xd5722*/
  *(_BYTE *)v5 = 0; /*0xd572a*/
  if ( (v6 & 2) != 0 ) /*0xd5730*/
  {
    v6 &= ~2u; /*0xd5732*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0xd573e*/
    {
      v9 = Block[0]; /*0xd5743*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0xd5752*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0xd5758*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0xd5767*/
          invoke_watson(0, 0, 0, 0, 0); /*0xd5778*/
      }
      j_j_free(v9); /*0xd577f*/
    }
  }
  if ( (v6 & 1) != 0 && *((_QWORD *)&v26 + 1) > 0xFu ) /*0xd5796*/
  {
    v10 = v25[0]; /*0xd579b*/
    if ( (unsigned __int64)(*((_QWORD *)&v26 + 1) + 1LL) >= 0x1000 ) /*0xd57aa*/
    {
      v10 = (void *)*((_QWORD *)v25[0] - 1); /*0xd57b0*/
      if ( (unsigned __int64)((char *)v25[0] - (char *)v10 - 8) > 0x1F ) /*0xd57bf*/
        invoke_watson(0, 0, 0, 0, 0); /*0xd57d0*/
    }
    j_j_free(v10); /*0xd57d7*/
  }
  v11 = (const void **)(a1 + 101); /*0xd57dc*/
  v12 = a1 + 101; /*0xd57e3*/
  if ( a1[104] > 0xFu ) /*0xd57eb*/
    v12 = *v11; /*0xd57ed*/
  v13 = &v23; /*0xd57f0*/
  v14 = (char *)v7; /*0xd57f5*/
  v15 = _mm_srli_si128(v8, 8).m128i_u64[0]; /*0xd57fe*/
  v16 = v15; /*0xd5803*/
  if ( v15 > 0xF ) /*0xd580c*/
    v13 = (__int128 *)v7; /*0xd580c*/
  if ( (const void *)v8.m128i_i64[0] == v11[2] && (!v8.m128i_i64[0] || !memcmp(v13, v12, v8.m128i_u64[0])) ) /*0xd5823*/
  {
    v17 = 0; /*0xd582c*/
  }
  else
  {
    if ( v11 != (const void **)&v23 ) /*0xd5838*/
    {
      v18 = &v23; /*0xd583a*/
      if ( v15 > 0xF ) /*0xd5843*/
        v18 = (__int128 *)v7; /*0xd5843*/
      sub_3F5A0(v11, v18, v8.m128i_u64[0]); /*0xd584d*/
      v16 = v24.m128i_u64[1]; /*0xd5852*/
      v14 = (char *)v23; /*0xd5857*/
    }
    v17 = 1; /*0xd585c*/
  }
  if ( v16 > 0xF ) /*0xd5862*/
  {
    v19 = v14; /*0xd5868*/
    if ( v16 + 1 >= 0x1000 ) /*0xd5872*/
    {
      v14 = (char *)*((_QWORD *)v14 - 1); /*0xd5878*/
      if ( (unsigned __int64)(v19 - v14 - 8) > 0x1F ) /*0xd5887*/
        invoke_watson(0, 0, 0, 0, 0); /*0xd5898*/
    }
    j_j_free(v14); /*0xd58a2*/
  }
  return v17; /*0xd58aa*/
}

// [15/36] Address: 0xd58e0
// Method: MessageThreadsPage::onSearch
void __fastcall MessageThreadsPage_onSearch(_QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[98]; /*0xd58e9*/
  if ( v2 ) /*0xd58f3*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1032LL))(v2, 0); /*0xd58fa*/
  MessageThreadsPage_syncSearchFromBox(a1); /*0xd5903*/
  MessageThreadsPage_loadPage((__int64)a1, 0, 0); /*0xd5915*/
}

// [16/36] Address: 0xd5920
// Method: MessageThreadsPage::onUserFilter
__int64 __fastcall MessageThreadsPage_onUserFilter(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax

  v1 = a1 + 680; /*0xd5926*/
  if ( !a1 ) /*0xd5937*/
    v1 = 0; /*0xd5937*/
  v2 = sub_E4AC0(v1, 0, 1, 1, 0); /*0xd5942*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 1064LL))(v2); /*0xd5954*/
}

// [17/36] Address: 0xd5b10
// Method: MessageThreadsPage::isRecipientSelected
char __fastcall MessageThreadsPage_isRecipientSelected(__int64 a1, int a2)
{
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx

  v4 = *(cocos2d::CCArray **)(a1 + 208); /*0xd5b24*/
  if ( !v4 ) /*0xd5b2e*/
    return 0; /*0xd5b2e*/
  v5 = 0; /*0xd5b30*/
  if ( (int)cocos2d::CCArray::count(v4) <= 0 ) /*0xd5b3a*/
    return 0; /*0xd5b6a*/
  while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 208), v5) + 98) != a2 ) /*0xd5b55*/
  {
    if ( (int)++v5 >= (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 208)) ) /*0xd5b68*/
      return 0; /*0xd5b68*/
  }
  return 1; /*0xd5b6c*/
}

// [18/36] Address: 0xd5b90
// Method: MessageThreadsPage::selectedRecipientCount
unsigned int __fastcall MessageThreadsPage_selectedRecipientCount(__int64 a1)
{
  cocos2d::CCArray *v1; // rcx

  v1 = *(cocos2d::CCArray **)(a1 + 208); /*0xd5b90*/
  if ( v1 ) /*0xd5b9a*/
    return cocos2d::CCArray::count(v1); /*0xd5b9c*/
  else
    return 0; /*0xd5ba3*/
}

// [19/36] Address: 0xd5bb0
// Method: MessageThreadsPage::selectedRecipients
__int64 __fastcall MessageThreadsPage_selectedRecipients(__int64 a1)
{
  return *(_QWORD *)(a1 + 208); /*0xd5bb7*/
}

// [20/36] Address: 0xd5bc0
// Method: MessageThreadsPage::clearRecipients
__int64 __fastcall MessageThreadsPage_clearRecipients(__int64 a1)
{
  __int64 v1; // rbx
  cocos2d::CCArray *v2; // rcx

  v1 = a1 - 680; /*0xd5bc6*/
  v2 = *(cocos2d::CCArray **)(a1 + 208); /*0xd5bcd*/
  if ( v2 ) /*0xd5bd7*/
    cocos2d::CCArray::removeAllObjects(v2); /*0xd5bd9*/
  return sub_D5CD0(v1); /*0xd5be2*/
}

// [21/36] Address: 0xd5bf0
// Method: MessageThreadsPage::friendPickerClosed
void __fastcall MessageThreadsPage_friendPickerClosed(_QWORD *a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  __int64 v4; // rax
  const void *v5; // rdx
  const void *v6; // rcx
  size_t v7; // r8
  char v8; // bl
  _BYTE v9[32]; // [rsp+28h] [rbp-30h] BYREF

  v1 = a1 - 85; /*0xd5c0e*/
  v3 = 0; /*0xd5c18*/
  sub_D5CD0(a1 - 85); /*0xd5c21*/
  if ( (unsigned __int8)MessageThreadsPage_syncSearchFromBox(v1) ) /*0xd5c29*/
    goto LABEL_10; /*0xd5c29*/
  v4 = MessageThreadsPage_userFilterCSV(v1, v9); /*0xd5c3a*/
  v5 = a1 + 27; /*0xd5c47*/
  v3 = 1; /*0xd5c4e*/
  if ( a1[30] > 0xFu ) /*0xd5c53*/
    v5 = (const void *)a1[27]; /*0xd5c55*/
  v6 = (const void *)v4; /*0xd5c61*/
  if ( *(_QWORD *)(v4 + 24) > 0xFu ) /*0xd5c64*/
    v6 = *(const void **)v4; /*0xd5c66*/
  v7 = *(_QWORD *)(v4 + 16); /*0xd5c69*/
  if ( v7 != a1[29] || v7 && memcmp(v6, v5, v7) ) /*0xd5c7b*/
LABEL_10:
    v8 = 1; /*0xd5c88*/
  else
    v8 = 0; /*0xd5c84*/
  if ( (v3 & 1) != 0 ) /*0xd5c8e*/
    sub_3C310(v9); /*0xd5c95*/
  if ( v8 ) /*0xd5c9c*/
    MessageThreadsPage_loadPage((__int64)v1, 0, 0); /*0xd5ca6*/
}

// [22/36] Address: 0xd5d40
// Method: MessageThreadsPage::userFilterCSV
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MessageThreadsPage_userFilterCSV(__int64 a1, _QWORD *a2)
{
  signed int i; // edi
  cocos2d::CCArray *v5; // rcx
  signed int v6; // eax
  struct cocos2d::CCObject *v7; // rax
  cocos2d::CCString *v8; // rax
  char *CString; // rax
  size_t v10; // r8

  *(_OWORD *)a2 = 0; /*0xd5d65*/
  a2[2] = 0; /*0xd5d68*/
  a2[3] = 15; /*0xd5d70*/
  *(_BYTE *)a2 = 0; /*0xd5d78*/
  for ( i = 0; ; ++i )
  {
    v5 = *(cocos2d::CCArray **)(a1 + 888); /*0xd5d90*/
    v6 = v5 ? cocos2d::CCArray::count(v5) : 0;
    if ( i >= v6 ) /*0xd5da8*/
      break; /*0xd5da8*/
    if ( a2[2] ) /*0xd5daa*/
      sub_43D80(a2, &unk_709CE8, 1u); /*0xd5dc1*/
    v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 888), i); /*0xd5dcf*/
    v8 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v7 + 98)); /*0xd5de2*/
    CString = (char *)cocos2d::CCString::getCString(v8); /*0xd5deb*/
    v10 = -1; /*0xd5df1*/
    do /*0xd5e03*/
      ++v10; /*0xd5e00*/
    while ( CString[v10] ); /*0xd5e03*/
    sub_43D80(a2, CString, v10); /*0xd5e10*/
  }
  return a2; /*0xd5e1f*/
}

// [23/36] Address: 0xd5e30
// Method: MessageThreadsPage::updateFilterButtons
void __fastcall MessageThreadsPage_updateFilterButtons(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx

  v1 = *(_DWORD *)(a1 + 856); /*0xd5e44*/
  v3 = *(_QWORD *)(a1 + 864); /*0xd5e4d*/
  if ( v3 ) /*0xd5e62*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 472LL))(v3, 1); /*0xd5e80*/
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 472LL))(v3, 2); /*0xd5e8a*/
    if ( v4 ) /*0xd5e90*/
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v4 + 336LL))(v4, v1 == 0); /*0xd5ea3*/
    if ( v6 ) /*0xd5ea9*/
    {
      LOBYTE(v5) = v1 != 0; /*0xd5eb3*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 336LL))(v6, v5); /*0xd5eb6*/
    }
  }
  v7 = *(_DWORD *)(a1 + 856); /*0xd5ebc*/
  v8 = *(_QWORD *)(a1 + 872); /*0xd5ec5*/
  if ( v8 ) /*0xd5ed3*/
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 472LL))(*(_QWORD *)(a1 + 872), 1); /*0xd5ef1*/
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 472LL))(v8, 2); /*0xd5efb*/
    if ( v9 ) /*0xd5f01*/
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v9 + 336LL))(v9, v7 == 1); /*0xd5f14*/
    if ( v11 ) /*0xd5f1a*/
    {
      LOBYTE(v10) = v7 != 1; /*0xd5f25*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 336LL))(v11, v10); /*0xd5f28*/
    }
  }
  v12 = *(_DWORD *)(a1 + 856); /*0xd5f2e*/
  v13 = *(_QWORD *)(a1 + 880); /*0xd5f37*/
  if ( v13 ) /*0xd5f4a*/
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 472LL))(v13, 1); /*0xd5f68*/
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 472LL))(v13, 2); /*0xd5f72*/
    if ( v14 ) /*0xd5f78*/
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v14 + 336LL))(v14, v12 == 2); /*0xd5f8b*/
    if ( v16 ) /*0xd5f91*/
    {
      LOBYTE(v15) = v12 != 2; /*0xd5f9c*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 336LL))(v16, v15); /*0xd5f9f*/
    }
  }
}

// [24/36] Address: 0xd5fc0
// Method: MessageThreadsPage::onSelectFilter
void __fastcall MessageThreadsPage_onSelectFilter(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0xd5fcf*/
  if ( v3 != *(_DWORD *)(a1 + 856) ) /*0xd5fd8*/
  {
    *(_DWORD *)(a1 + 856) = v3; /*0xd5fdd*/
    MessageThreadsPage_updateFilterButtons(a1); /*0xd5fe3*/
    MessageThreadsPage_syncSearchFromBox((_QWORD *)a1); /*0xd5feb*/
    MessageThreadsPage_loadPage(a1, 0, 0); /*0xd5ffd*/
  }
}

// [25/36] Address: 0xd6010
// Method: MessageThreadsPage::onClearSearch
void __fastcall MessageThreadsPage_onClearSearch(_QWORD *a1)
{
  _QWORD *v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v2 = (_QWORD *)a1[98]; /*0xd6019*/
  if ( v2 ) /*0xd6023*/
  {
    v4 = 0; /*0xd6028*/
    v3 = 0; /*0xd6031*/
    LOBYTE(v3) = 0; /*0xd603b*/
    v5 = 15; /*0xd6040*/
    CCTextInputNode_setString(v2, &v3); /*0xd6049*/
  }
  if ( a1[103] ) /*0xd6055*/
  {
    sub_3F5A0(a1 + 101, &byte_6E86E0, 0); /*0xd6066*/
    MessageThreadsPage_loadPage((__int64)a1, 0, 0); /*0xd6078*/
  }
}

// [26/36] Address: 0xd6090
// Method: MessageThreadsPage::onPrevPage
void __fastcall MessageThreadsPage_onPrevPage(__int64 a1)
{
  MessageThreadsPage_loadPage(a1, *(_DWORD *)(a1 + 840) - 1, 0); /*0xd609b*/
}

// [27/36] Address: 0xd60a0
// Method: MessageThreadsPage::onNextPage
void __fastcall MessageThreadsPage_onNextPage(__int64 a1)
{
  MessageThreadsPage_loadPage(a1, *(_DWORD *)(a1 + 840) + 1, 0); /*0xd60ab*/
}

// [28/36] Address: 0xd6240
// Method: MessageThreadsPage::onRefresh
// Hidden C++ exception states: #wind=3
void __fastcall MessageThreadsPage_onRefresh(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]
  void *v17; // [rsp+90h] [rbp+18h]
  void *v18; // [rsp+90h] [rbp+18h]

  v2 = *(_QWORD *)&qword_905FB0; /*0xd624d*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd6257*/
  {
    v17 = operator new(0x690u); /*0xd6263*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0xd6274*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd6285*/
    v2 = *(_QWORD *)&qword_905FB0; /*0xd6287*/
  }
  if ( (unsigned int)sub_21ED50(v2, "threadInboxUpdate") - 1 > 4 ) /*0xd62a7*/
  {
    v9 = *(_QWORD *)&qword_905FB0; /*0xd6379*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xd6383*/
    {
      v18 = operator new(0x690u); /*0xd638f*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0xd63a0*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd63b1*/
      v9 = *(_QWORD *)&qword_905FB0; /*0xd63b4*/
    }
    GameLevelManager_makeTimeStamp(v9, (__int64)"threadInboxUpdate"); /*0xd63c2*/
    if ( (unsigned __int8)MessageThreadsPage_syncSearchFromBox((_QWORD *)a1) ) /*0xd63ca*/
      v10 = 0; /*0xd63d3*/
    else
      v10 = *(_DWORD *)(a1 + 840); /*0xd63d7*/
    MessageThreadsPage_loadPage(a1, v10, 0); /*0xd63f0*/
  }
  else
  {
    v4 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v3) + 272); /*0xd62b3*/
    v14 = 0; /*0xd62ca*/
    v15 = 0; /*0xd62d1*/
    v16 = 15; /*0xd62d6*/
    LOBYTE(v14) = 0; /*0xd62df*/
    v11 = 0; /*0xd62e3*/
    *(_QWORD *)&v11 = sub_3C460(32); /*0xd62fc*/
    v12 = 18; /*0xd6301*/
    v13 = 31; /*0xd630a*/
    strcpy((char *)v11, "Already up to date"); /*0xd631a*/
    v5 = *v4; /*0xd632c*/
    v8 = sub_3A4CA0(&v11, v6, v7, 150, &v14); /*0xd6354*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v5 + 456))(v4, v8, 1000); /*0xd6365*/
  }
}

// [29/36] Address: 0xd6400
// Method: MessageThreadsPage::onLegacyMessages
__int64 __fastcall MessageThreadsPage_onLegacyMessages(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  struct cocos2d::CCObject *v3; // rbx
  cocos2d::CCTouchDispatcher *v4; // rax
  __int64 v5; // rax
  cocos2d::CCTouchDispatcher *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  if ( *((_QWORD *)a1 + 86) ) /*0xd6406*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0xd6418*/
    v3 = (struct cocos2d::CCObject *)*((_QWORD *)a1 + 86); /*0xd641e*/
    v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0xd642b*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v4, v3); /*0xd6438*/
  }
  v5 = cocos2d::CCDirector::sharedDirector(a1); /*0xd6443*/
  v6 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 144LL))(v5); /*0xd6456*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v6, a1); /*0xd645e*/
  v7 = sub_4715A0(0); /*0xd6466*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0xd6478*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0xd6482*/
  LOBYTE(v8) = 1; /*0xd648b*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v8);
}

// [30/36] Address: 0xd64a0
// Method: MessageThreadsPage::onNewThread
// Hidden C++ exception states: #wind=2
void MessageThreadsPage_onNewThread()
{
  __m128i si128; // xmm6
  __int64 v1; // rax
  void *v2; // rcx
  void *v3; // rcx
  void *Block[2]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v5; // [rsp+40h] [rbp-58h]
  void *v6[2]; // [rsp+50h] [rbp-48h] BYREF
  __m128i v7; // [rsp+60h] [rbp-38h]

  *(_OWORD *)v6 = 0; /*0xd64c1*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0xd64c6*/
  v7 = si128; /*0xd64ce*/
  LOBYTE(v6[0]) = 0; /*0xd64d4*/
  *(_OWORD *)Block = 0; /*0xd64d9*/
  v5 = si128; /*0xd64de*/
  LOBYTE(Block[0]) = 0; /*0xd64e4*/
  v1 = sub_ECDB0(0, Block, v6); /*0xd64f5*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 1064LL))(v1); /*0xd6507*/
  if ( v5.m128i_i64[1] > 0xFuLL ) /*0xd6513*/
  {
    v2 = Block[0]; /*0xd6518*/
    if ( (unsigned __int64)(v5.m128i_i64[1] + 1) >= 0x1000 ) /*0xd6527*/
    {
      v2 = (void *)*((_QWORD *)Block[0] - 1); /*0xd652d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v2 - 8) > 0x1F ) /*0xd653c*/
        invoke_watson(0, 0, 0, 0, 0); /*0xd6551*/
    }
    j_j_free(v2); /*0xd6558*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0xd655d*/
  }
  v5 = si128; /*0xd6565*/
  LOBYTE(Block[0]) = 0; /*0xd656b*/
  if ( v7.m128i_i64[1] > 0xFuLL ) /*0xd6579*/
  {
    v3 = v6[0]; /*0xd657e*/
    if ( (unsigned __int64)(v7.m128i_i64[1] + 1) >= 0x1000 ) /*0xd658d*/
    {
      v3 = (void *)*((_QWORD *)v6[0] - 1); /*0xd6593*/
      if ( (unsigned __int64)((char *)v6[0] - (char *)v3 - 8) > 0x1F ) /*0xd65a2*/
        invoke_watson(0, 0, 0, 0, 0); /*0xd65b7*/
    }
    j_j_free(v3); /*0xd65be*/
  }
}

// [31/36] Address: 0xd65e0
// Method: MessageThreadsPage::threadListFinished
// Hidden C++ exception states: #wind=1
void __fastcall MessageThreadsPage_threadListFinished(__int64 a1, cocos2d::CCArray *a2, int a3, int a4, int a5)
{
  char v9; // bl
  __int64 v10; // rax
  float v11; // xmm6_4
  __int64 v12; // rbp
  signed int v13; // edi
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rdx
  size_t *v17; // rbx
  size_t *v18; // rcx
  void *v19; // rdx
  __int64 v20; // rcx
  void (__fastcall **v21)(__int64, const char *); // rdi
  __int64 v22; // rbx
  cocos2d::CCString *v23; // rax
  const char *CString; // rax
  void *v25; // [rsp+70h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 280) ) /*0xd660d*/
  {
    *(_BYTE *)(a1 + 280) = 0; /*0xd6616*/
    MessageThreadsPage_loadPage(a1 - 664, *(_DWORD *)(a1 + 184), 0); /*0xd662d*/
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 281); /*0xd6637*/
    *(_BYTE *)(a1 + 281) = 0; /*0xd663e*/
    v10 = *(_QWORD *)&qword_905FB0; /*0xd6645*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xd664f*/
    {
      v25 = operator new(0x690u); /*0xd665b*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0xd6669*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd667a*/
      v10 = *(_QWORD *)&qword_905FB0; /*0xd667c*/
    }
    v11 = (float)*(int *)(v10 + 552); /*0xd668b*/
    v12 = a1 - 664; /*0xd668e*/
    cocos2d::CCNode::unschedule(a1 - 664, sub_D60B0); /*0xd669f*/
    if ( v11 > 0.0 ) /*0xd66ab*/
      cocos2d::CCNode::schedule(a1 - 664, sub_D60B0); /*0xd66ba*/
    v13 = 0; /*0xd66c0*/
    if ( a2 ) /*0xd66c5*/
      v14 = cocos2d::CCArray::count(a2); /*0xd66d0*/
    else
      v14 = 0; /*0xd66d5*/
    if ( v9 && *(_QWORD *)(a1 + 24) && v14 > 0 && (unsigned __int8)sub_D4070(*(_QWORD *)(a1 + 136), a2) ) /*0xd66fd*/
    {
      *(_DWORD *)(a1 + 188) = a3; /*0xd670a*/
      if ( a5 > 0 ) /*0xd671a*/
      {
        v15 = (unsigned int)(a4 >> 31); /*0xd671f*/
        LODWORD(v15) = a4 % a5; /*0xd6720*/
        *(_DWORD *)(a1 + 176) = a4 / a5; /*0xd6722*/
      }
      LOBYTE(v15) = a4 > 0; /*0xd6732*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 712) + 336LL))(*(_QWORD *)(v12 + 712), v15); /*0xd6738*/
      LOBYTE(v16) = v14 + a4 < a3; /*0xd6750*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 720) + 336LL))(*(_QWORD *)(v12 + 720), v16); /*0xd6756*/
      do /*0xd67a8*/
      {
        v17 = (size_t *)((char *)cocos2d::CCArray::objectAtIndex(a2, v13) + 168); /*0xd676b*/
        v18 = (size_t *)((char *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 136), v13) + 168); /*0xd6781*/
        if ( v18 != v17 ) /*0xd678b*/
        {
          v19 = v17; /*0xd678d*/
          if ( v17[3] > 0xF ) /*0xd6795*/
            v19 = (void *)*v17; /*0xd6797*/
          sub_3F5A0(v18, v19, v17[2]); /*0xd679e*/
        }
        ++v13; /*0xd67a3*/
      }
      while ( v13 < v14 ); /*0xd67a8*/
      v20 = *(_QWORD *)(a1 + 288); /*0xd67aa*/
      if ( v20 ) /*0xd67b4*/
        CustomListView_reloadAll(v20); /*0xd67b6*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 336LL))(*(_QWORD *)(a1 + 40), 0); /*0xd67c4*/
      v21 = *(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 128) + 360LL); /*0xd67d1*/
      v22 = *(_QWORD *)(a1 + 128); /*0xd67d8*/
      v23 = cocos2d::CCString::createWithFormat("%i to %i of %i", a4 + 1, v14 + a4, a3); /*0xd67ee*/
      CString = cocos2d::CCString::getCString(v23); /*0xd67f7*/
      (*v21)(v22 + 360, CString); /*0xd6807*/
      sub_D4500(a1 - 664); /*0xd680c*/
      if ( *(_BYTE *)(v12 + 946) ) /*0xd6811*/
      {
        *(_BYTE *)(v12 + 946) = 0; /*0xd681a*/
        MessageThreadsPage_loadPage(a1 - 664, *(_DWORD *)(v12 + 840), *(_QWORD *)(v12 + 688) != 0); /*0xd6836*/
      }
    }
    else
    {
      sub_D6880(a1 - 664, (_DWORD)a2, a3, a4, a5, v9); /*0xd6858*/
    }
  }
}

// [32/36] Address: 0xd6d30
// Method: MessageThreadsPage::threadListFailed
void __fastcall MessageThreadsPage_threadListFailed(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // edx
  char v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = a1 - 664; /*0xd6d39*/
  if ( *(_BYTE *)(a1 + 280) ) /*0xd6d40*/
  {
    v3 = *(_DWORD *)(a1 + 184); /*0xd6d49*/
    *(_BYTE *)(a1 + 280) = 0; /*0xd6d52*/
    MessageThreadsPage_loadPage(v2, v3, 0); /*0xd6d5e*/
  }
  else if ( *(_BYTE *)(a1 + 281) ) /*0xd6d63*/
  {
    *(_BYTE *)(a1 + 281) = 0; /*0xd6d6c*/
    if ( *(_BYTE *)(v2 + 946) ) /*0xd6d73*/
    {
      v4 = *(_DWORD *)(v2 + 840); /*0xd6d88*/
      v5 = *(_QWORD *)(v2 + 688) != 0; /*0xd6d8e*/
      *(_BYTE *)(v2 + 946) = 0; /*0xd6d92*/
      MessageThreadsPage_loadPage(v2, v4, v5); /*0xd6d9e*/
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0xd6dac*/
    LOBYTE(v6) = 1; /*0xd6db6*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 336LL))(*(_QWORD *)(a1 + 64), v6); /*0xd6dbb*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 40) + 360LL))( /*0xd6dd6*/
      *(_QWORD *)(a1 + 40) + 360LL,
      "Something went wrong...");
    LOBYTE(v7) = 1; /*0xd6ddc*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 336LL))(*(_QWORD *)(a1 + 40), v7); /*0xd6de1*/
    (**(void (__fastcall ***)(__int64, char *))(*(_QWORD *)(a1 + 128) + 360LL))( /*0xd6e04*/
      *(_QWORD *)(a1 + 128) + 360LL,
      &byte_6E86E0);
  }
}

// [33/36] Address: 0xd7120
// Method: MessageThreadsPage::onScrollToTop
double __fastcall MessageThreadsPage_onScrollToTop(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 952); /*0xd7129*/
  if ( v2 ) /*0xd7133*/
    sub_49E30(*(_QWORD *)(v2 + 424)); /*0xd713c*/
  v3 = *(_QWORD *)(a1 + 736); /*0xd7141*/
  if ( v3 ) /*0xd714b*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 336LL))(v3, 0); /*0xd7152*/
  return cocos2d::CCNode::unschedule(a1, sub_D7070); /*0xd7162*/
}

// [34/36] Address: 0xd7170
// Method: MessageThreadsPage::show
__int64 __fastcall MessageThreadsPage_show(__int64 a1)
{
  cocos2d::CCScene *v2; // rbx
  int v3; // eax

  v2 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xd7183*/
  if ( *(_QWORD *)(a1 + 568) ) /*0xd718a*/
  {
    v2 = *(cocos2d::CCScene **)(a1 + 568); /*0xd7196*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v2) + 1 >= 105 ) /*0xd71a9*/
      v3 = cocos2d::CCScene::getHighestChildZ(v2) + 1; /*0xd71bb*/
    else
      v3 = 105; /*0xd71ab*/
    *(_DWORD *)(a1 + 592) = v3; /*0xd71bd*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0xd71c3*/
    *(_DWORD *)(a1 + 592) = 105; /*0xd71cf*/
  (*(void (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1); /*0xd71e8*/
  return sub_F1FE0(); /*0xd71ee*/
}

// [35/36] Address: 0xd7200
// Method: MessageThreadsPage::onClose
__int64 __fastcall MessageThreadsPage_onClose(struct cocos2d::CCObject *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  struct cocos2d::CCObject *v4; // rbx
  cocos2d::CCTouchDispatcher *v5; // rax
  __int64 v6; // rax
  cocos2d::CCTouchDispatcher *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx

  v1 = *((_QWORD *)a1 + 98); /*0xd7206*/
  if ( v1 ) /*0xd7213*/
  {
    *(_QWORD *)(v1 + 608) = 0; /*0xd7215*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 98) + 1032LL))(*((_QWORD *)a1 + 98), 0); /*0xd722c*/
  }
  if ( *((_QWORD *)a1 + 86) ) /*0xd7232*/
  {
    v3 = cocos2d::CCDirector::sharedDirector(a1); /*0xd7241*/
    v4 = (struct cocos2d::CCObject *)*((_QWORD *)a1 + 86); /*0xd7247*/
    v5 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3); /*0xd725b*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v5, v4); /*0xd7264*/
  }
  v6 = cocos2d::CCDirector::sharedDirector(a1); /*0xd726f*/
  v7 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 144LL))(v6); /*0xd7282*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v7, a1); /*0xd728a*/
  v9 = GJAccountManager_sharedState(v8); /*0xd7290*/
  v10 = ProfilePage_create(*(_DWORD *)(v9 + 360) - *(_DWORD *)(v9 + 364), 1u); /*0xd72a3*/
  v11 = *(_QWORD *)v10; /*0xd72a8*/
  v10[596] = 1; /*0xd72ab*/
  (*(void (__fastcall **)(char *))(v11 + 1064))(v10); /*0xd72bc*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0xd72c6*/
  LOBYTE(v12) = 1; /*0xd72cf*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v12);
}

// [36/36] Address: 0xd72e0
// Method: MessageThreadsPage::keyBackClicked
__int64 __fastcall MessageThreadsPage_keyBackClicked(__int64 a1)
{
  return MessageThreadsPage_onClose((struct cocos2d::CCObject *)(a1 - 336));
}
