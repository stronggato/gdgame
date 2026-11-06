#include <Geode/binding/ReportQueuePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0xc5650
// Method: ReportQueuePopup::~ReportQueuePopup
// Hidden C++ exception states: #wind=1
char *__fastcall ReportQueuePopup__dtor_ReportQueuePopup(char *Block, __int64 a2)
{
  char v2; // si
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCNotificationCenter *v7; // rax
  cocos2d::CCObject *v8; // rcx

  v2 = a2; /*0xc565f*/
  *(_QWORD *)Block = &ReportQueuePopup::`vftable'; /*0xc566b*/
  *((_QWORD *)Block + 40) = &ReportQueuePopup::`vftable'; /*0xc5675*/
  *((_QWORD *)Block + 41) = &ReportQueuePopup::`vftable'; /*0xc5683*/
  *((_QWORD *)Block + 42) = &ReportQueuePopup::`vftable'; /*0xc5691*/
  *((_QWORD *)Block + 43) = &ReportQueuePopup::`vftable'; /*0xc569f*/
  *((_QWORD *)Block + 44) = &ReportQueuePopup::`vftable'; /*0xc56ad*/
  *((_QWORD *)Block + 51) = &ReportQueuePopup::`vftable'; /*0xc56bb*/
  *((_QWORD *)Block + 54) = &ReportQueuePopup::`vftable'; /*0xc56c9*/
  *((_QWORD *)Block + 68) = &ReportQueuePopup::`vftable'; /*0xc56d7*/
  v4 = Block + 776; /*0xc56de*/
  *((_QWORD *)Block + 97) = &ReportQueuePopup::`vftable'; /*0xc56ec*/
  *((_QWORD *)Block + 98) = &ReportQueuePopup::`vftable'; /*0xc56f6*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xc56fd*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xc5707*/
  {
    v6 = operator new(0x690u); /*0xc570e*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xc571b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xc572c*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xc572e*/
  }
  if ( *(char **)(v5 + 1384) == v4 ) /*0xc573c*/
    *(_QWORD *)(v5 + 1384) = 0; /*0xc573e*/
  v7 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(Block, a2); /*0xc5749*/
  cocos2d::CCNotificationCenter::removeObserver( /*0xc575c*/
    v7,
    (struct cocos2d::CCObject *)Block,
    "ReportedContentChangedNotification");
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 100); /*0xc5762*/
  if ( v8 ) /*0xc576c*/
    cocos2d::CCObject::release(v8); /*0xc576e*/
  PagedListPopup__dtor_PagedListPopup(Block); /*0xc5777*/
  if ( (v2 & 1) != 0 ) /*0xc5781*/
    j_j_free(Block); /*0xc578b*/
  return Block; /*0xc5793*/
}

// [3/7] Address: 0xc6050
// Method: ReportQueuePopup::requestPage
// Hidden C++ exception states: #wind=2
__int64 __fastcall ReportQueuePopup_requestPage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h]

  v4 = a1 + 776; /*0xc6064*/
  if ( !a1 ) /*0xc6070*/
    v4 = 0; /*0xc6070*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xc6074*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xc607e*/
  {
    v7 = operator new(0x690u); /*0xc608a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0xc6098*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xc60a9*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xc60ab*/
  }
  *(_QWORD *)(v5 + 1384) = v4; /*0xc60b2*/
  return sub_2415A0(v5, a2, *(unsigned int *)(a1 + 792), *(unsigned int *)(a1 + 796)); /*0xc60c9*/
}

// [4/7] Address: 0xc60e0
// Method: ReportQueuePopup::adminReportQueueFinished
__int64 __fastcall ReportQueuePopup_adminReportQueueFinished(
        __int64 a1,
        cocos2d::CCObject *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  __int64 v11; // rdx
  cocos2d::CCObject *v13; // rcx
  unsigned int v14; // ebx
  int v15; // ecx
  const char *v16; // rax
  const char *v17; // rdx

  v5 = a1 - 776; /*0xc60f3*/
  v7 = *(_QWORD *)(a1 - 776 + 696); /*0xc60fd*/
  v8 = a4; /*0xc6104*/
  v9 = a3; /*0xc6107*/
  if ( v7 ) /*0xc6110*/
    LoadingCircle_fadeAndRemove(v7, a2, a3, a4); /*0xc6112*/
  v11 = *(unsigned int *)(v5 + 684); /*0xc6117*/
  if ( (int)v11 >= 0 ) /*0xc611f*/
  {
    *(_DWORD *)(v5 + 684) = -1; /*0xc6124*/
    return sub_C1780(v5, v11); /*0xc6133*/
  }
  if ( a2 ) /*0xc613b*/
    cocos2d::CCObject::retain(a2); /*0xc6140*/
  v13 = *(cocos2d::CCObject **)(a1 + 24); /*0xc6146*/
  if ( v13 ) /*0xc614d*/
    cocos2d::CCObject::release(v13); /*0xc614f*/
  *(_QWORD *)(a1 + 24) = a2; /*0xc6159*/
  if ( a5 > 0 ) /*0xc615f*/
    *(_DWORD *)(a1 - 96) = (int)v8 / a5; /*0xc6167*/
  if ( a2 ) /*0xc616d*/
  {
    v14 = cocos2d::CCArray::count(a2); /*0xc6189*/
    sub_C1A50(v5, v9, v8, v14); /*0xc618b*/
    if ( v14 ) /*0xc6197*/
      return sub_C6260(v5, a2); /*0xc61a4*/
  }
  else
  {
    sub_C1A50(v5, v9, v8, 0); /*0xc61b2*/
  }
  v15 = *(_DWORD *)(v5 + 796); /*0xc61b7*/
  if ( v15 == 1 ) /*0xc61c0*/
  {
    v16 = "No open reports."; /*0xc61c2*/
  }
  else
  {
    v16 = "No open reports or flagged accounts."; /*0xc61d5*/
    if ( v15 == 2 ) /*0xc61dc*/
      v16 = "Nothing flagged."; /*0xc61dc*/
  }
  v17 = "Nothing on this page."; /*0xc61e4*/
  if ( !*(_DWORD *)(a1 - 96) ) /*0xc61e0*/
    v17 = v16; /*0xc61f2*/
  return sub_C1980(a1 - 776, v17); /*0xc61fb*/
}

// [5/7] Address: 0xc6210
// Method: ReportQueuePopup::adminReportQueueFailed
__int64 __fastcall ReportQueuePopup_adminReportQueueFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx

  v4 = a1 - 776; /*0xc6216*/
  v5 = *(_QWORD *)(a1 - 80); /*0xc621d*/
  if ( v5 ) /*0xc6224*/
    LoadingCircle_fadeAndRemove(v5, a2, a3, a4); /*0xc6226*/
  v6 = *(unsigned int *)(v4 + 684); /*0xc622b*/
  if ( (int)v6 < 0 ) /*0xc6236*/
    return sub_C1980(v4, "Failed to load the queue."); /*0xc6258*/
  *(_DWORD *)(v4 + 684) = -1; /*0xc6238*/
  return sub_C1780(v4, v6); /*0xc6242*/
}

// [6/7] Address: 0xc7720
// Method: ReportQueuePopup::rebuildContent
__int64 __fastcall ReportQueuePopup_rebuildContent(__int64 a1)
{
  return sub_C1780(a1, *(unsigned int *)(a1 + 680));
}

// [7/7] Address: 0xc7780
// Method: ReportQueuePopup::dropdownSelectionChanged
__int64 __fastcall ReportQueuePopup_dropdownSelectionChanged(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a3 <= 2 ) /*0xc7784*/
  {
    v3 = a1 - 784; /*0xc7786*/
    *(_DWORD *)(v3 + 796) = a3; /*0xc778f*/
    return sub_C1780(v3, 0); /*0xc7796*/
  }
  return result; /*0xc779b*/
}

// Address: 0xc57b0
// Method: ReportQueuePopup::init
// Hidden C++ exception states: #wind=7
char __fastcall ReportQueuePopup_init(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // bl
  void *v6; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  float v13; // xmm6_4
  cocos2d::CCObject *v14; // rbx
  cocos2d::CCObject *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  _BYTE *v18; // r14
  _BYTE *v19; // rcx
  const char *v20; // rdx
  __int64 v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  __int64 v24; // rdx
  char *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  struct cocos2d::CCSprite *v28; // rax
  cocos2d::CCObject *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  char *v32; // rbx
  char *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  char *v48; // rbx
  char *v49; // rdi
  char *v50; // rax
  void **v51; // [rsp+50h] [rbp-B0h] BYREF
  void *v52[2]; // [rsp+58h] [rbp-A8h] BYREF
  char *v53; // [rsp+68h] [rbp-98h]
  __int128 *v54; // [rsp+70h] [rbp-90h] BYREF
  __int128 v55; // [rsp+78h] [rbp-88h] BYREF
  void **v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  void *Block[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v60; // [rsp+B0h] [rbp-50h]
  __int128 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  __int64 v63; // [rsp+D0h] [rbp-30h]

  *(_OWORD *)Block = 0;
  v59 = 0;
  v60 = 15;
  LOBYTE(Block[0]) = 0;
  v5 = sub_C0F40(a1, (unsigned int)"Moderation Queue", (unsigned int)Block, a4, 1133903872);
  if ( v60 > 0xF )
  {
    v6 = Block[0];
    if ( v60 + 1 >= 0x1000 )
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v6);
  }
  if ( !v5 )
    return 0;
  cocos2d::CCLabelBMFont::setFntFile(*(cocos2d::CCLabelBMFont **)(a1 + 744), (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 744) + 160LL))(*(_QWORD *)(a1 + 744));
  v8 = **(_QWORD **)(a1 + 744);
  v9 = *(_QWORD *)(a1 + 744);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v54,
    *(float *)(a1 + 664),
    (float)((float)(*(float *)(a1 + 676) * 0.5) + *(float *)(a1 + 668)) - 14.0);
  (*(void (__fastcall **)(__int64, __int64))(v8 + 184))(v9, v10);
  sub_C13F0(a1);
  v11 = *(_QWORD *)(a1 + 688);
  if ( *(float *)(v11 + 520) <= 0.0 )
  {
    v12 = *(_QWORD *)(v11 + 416);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 488LL))(v12);
    sub_81190(v11);
  }
  *(_DWORD *)(v11 + 520) = 1110179840;
  v13 = (float)(*(float *)(a1 + 668) - (float)(*(float *)(a1 + 676) * 0.5)) + 22.0;
  v54 = (__int128 *)operator new(0x2C8u);
  v14 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v54);
  if ( v14 )
  {
    if ( ButtonSprite_init(
           (__int64)v14,
           (__int64)"Top",
           44,
           0,
           1056964608,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_04.png",
           1103101952) )
    {
      cocos2d::CCObject::autorelease(v14);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1);
      v14 = 0;
    }
  }
  *(_QWORD *)(a1 + 808) = v14;
  v15 = CCMenuItemSpriteExtra_create((int)v14, 0, a1, (__int64)sub_C7730);
  *((_DWORD *)v15 + 93) = 1066192077;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v15);
  v16 = *(_QWORD *)v15;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v54,
    (float)(*(float *)(a1 + 664) - (float)(*(float *)(a1 + 672) * 0.5)) + 40.0,
    v13);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v16 + 184))(v15, v17);
  v61 = 0;
  v18 = (_BYTE *)sub_3C460(368);
  *(_QWORD *)&v61 = v18;
  v62 = 355;
  v63 = 367;
  v19 = v18;
  v20 = "Accounts that need a look, highest <cy>pts</c> first. Points come from blocked text and player reports.\n"
        "\n"
        "<cg>Review</c> opens the account with everything reported and the actions. Bans and deletes do not close a case."
        " Press <cg>Clear</c> in the review when you are finished.\n"
        "\n"
        "Viewed by shows who opened the case in the last hour. It is a hint, not a lock.";
  v21 = 2;
  do
  {
    *(_OWORD *)v19 = *(_OWORD *)v20;
    *((_OWORD *)v19 + 1) = *((_OWORD *)v20 + 1);
    *((_OWORD *)v19 + 2) = *((_OWORD *)v20 + 2);
    *((_OWORD *)v19 + 3) = *((_OWORD *)v20 + 3);
    *((_OWORD *)v19 + 4) = *((_OWORD *)v20 + 4);
    *((_OWORD *)v19 + 5) = *((_OWORD *)v20 + 5);
    *((_OWORD *)v19 + 6) = *((_OWORD *)v20 + 6);
    v19 += 128;
    *((_OWORD *)v19 - 1) = *((_OWORD *)v20 + 7);
    v20 += 128;
    --v21;
  }
  while ( v21 );
  *(_OWORD *)v19 = *(_OWORD *)v20;
  *((_OWORD *)v19 + 1) = *((_OWORD *)v20 + 1);
  *((_OWORD *)v19 + 2) = *((_OWORD *)v20 + 2);
  *((_OWORD *)v19 + 3) = *((_OWORD *)v20 + 3);
  *((_OWORD *)v19 + 4) = *((_OWORD *)v20 + 4);
  *((_OWORD *)v19 + 5) = *((_OWORD *)v20 + 5);
  *((_WORD *)v19 + 48) = *((_WORD *)v20 + 48);
  v19[98] = v20[98];
  v18[355] = 0;
  v54 = &v55;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v22 = (_OWORD *)sub_3C460(368);
  *(_QWORD *)&v55 = v22;
  v56 = (void **)(&loc_15D + 6);
  v57 = 367;
  v23 = v18;
  v24 = 2;
  do
  {
    *v22 = *v23;
    v22[1] = v23[1];
    v22[2] = v23[2];
    v22[3] = v23[3];
    v22[4] = v23[4];
    v22[5] = v23[5];
    v22[6] = v23[6];
    v22 += 8;
    *(v22 - 1) = v23[7];
    v23 += 8;
    --v24;
  }
  while ( v24 );
  *v22 = *v23;
  v22[1] = v23[1];
  v22[2] = v23[2];
  v22[3] = v23[3];
  v22[4] = v23[4];
  v22[5] = v23[5];
  *((_DWORD *)v22 + 24) = *((_DWORD *)v23 + 24);
  *(_OWORD *)Block = 0;
  v59 = 0;
  v60 = 0;
  Block[0] = (void *)sub_3C460(32);
  v59 = 16;
  v60 = 31;
  strcpy((char *)Block[0], "Moderation Queue");
  v25 = InfoAlertButton_create((__int64)Block, (__int64)&v55);
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v25);
  v26 = *(_QWORD *)v25;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v51,
    (float)(*(float *)(a1 + 664) - (float)(*(float *)(a1 + 672) * 0.5)) + 90.0,
    v13);
  (*(void (__fastcall **)(char *, __int64))(v26 + 184))(v25, v27);
  v28 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png");
  LODWORD(v26) = (_DWORD)v28;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v28 + 160LL))(v28);
  v29 = CCMenuItemSpriteExtra_create(v26, 0, a1, (__int64)ReportQueuePopup_rebuildContent);
  *((_DWORD *)v29 + 93) = 1067030938;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v29);
  v30 = *(_QWORD *)v29;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v51,
    (float)((float)(*(float *)(a1 + 672) * 0.5) + *(float *)(a1 + 664)) - 24.0,
    v13);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v30 + 184))(v29, v31);
  *(_OWORD *)v52 = 0;
  v53 = 0;
  v32 = (char *)sub_3C460(96);
  v52[0] = v32;
  v52[1] = v32;
  v53 = v32 + 96;
  v51 = v52;
  v33 = (char *)off_8F83C8;
  *(_QWORD *)&v55 = v32;
  *((_QWORD *)&v55 + 1) = v32;
  v56 = v52;
  do
  {
    v34 = *(_QWORD *)v33;
    *(_OWORD *)v32 = 0;
    *((_QWORD *)v32 + 2) = 0;
    *((_QWORD *)v32 + 3) = 0;
    v35 = -1;
    do
      ++v35;
    while ( *(_BYTE *)(v34 + v35) );
    sub_3C230(v32);
    v32 += 32;
    *((_QWORD *)&v55 + 1) = v32;
    v33 += 8;
  }
  while ( v33 != &byte_8F83E0 );
  v52[1] = v32;
  v36 = (__int64 *)sub_11E1D0(a1, *(_QWORD *)(a1 + 552), (unsigned int)v52, 0, 1117782016, a1 + 784);
  *(_QWORD *)(a1 + 816) = v36;
  v37 = *v36;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v51,
    (float)((float)(*(float *)(a1 + 672) * 0.5) + *(float *)(a1 + 664)) - 86.0,
    v13);
  (*(void (__fastcall **)(__int64 *, __int64))(v37 + 184))(v36, v38);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 816),
    2);
  v39 = **(_QWORD **)(a1 + 736);
  v40 = *(_QWORD *)(a1 + 736);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v51, 1.0, 0.5);
  (*(void (__fastcall **)(__int64, __int64))(v39 + 288))(v40, v41);
  (**(void (__fastcall ***)(__int64, void *))(*(_QWORD *)(a1 + 736) + 368LL))(
    *(_QWORD *)(a1 + 736) + 368LL,
    &unk_6FDE64);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 736) + 160LL))(*(_QWORD *)(a1 + 736));
  v42 = **(_QWORD **)(a1 + 736);
  v43 = *(_QWORD *)(a1 + 736);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v51,
    (float)((float)(*(float *)(a1 + 672) * 0.5) + *(float *)(a1 + 664)) - 12.0,
    (float)((float)(*(float *)(a1 + 676) * 0.5) + *(float *)(a1 + 668)) - 14.0);
  (*(void (__fastcall **)(__int64, __int64))(v42 + 184))(v43, v44);
  v47 = cocos2d::CCNotificationCenter::sharedNotificationCenter(v46, v45);
  cocos2d::CCNotificationCenter::addObserver(v47, a1, sub_B1530, "ReportedContentChangedNotification", 0);
  sub_C1780(a1, 0);
  v48 = (char *)v52[0];
  if ( v52[0] )
  {
    v49 = (char *)v52[1];
    if ( v52[0] != v52[1] )
    {
      do
      {
        sub_3C310(v48);
        v48 += 32;
      }
      while ( v48 != v49 );
      v48 = (char *)v52[0];
    }
    v50 = v48;
    if ( ((v53 - v48) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 )
    {
      v48 = (char *)*((_QWORD *)v48 - 1);
      if ( (unsigned __int64)(v50 - v48 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v48);
    *(_OWORD *)v52 = 0;
    v53 = 0;
  }
  j_j_free(v18);
  return 1;
}
