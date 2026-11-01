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
