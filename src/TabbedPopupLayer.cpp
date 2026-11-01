#include <Geode/binding/TabbedPopupLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x19a720
// Method: TabbedPopupLayer::~TabbedPopupLayer
cocos2d::CCNode *__fastcall TabbedPopupLayer__dtor_TabbedPopupLayer(cocos2d::CCNode *Block, char a2)
{
  sub_19C960((char *)Block + 1024); /*0x19a736*/
  sub_19CA30((char *)Block + 1000); /*0x19a742*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x19a74a*/
  if ( (a2 & 1) != 0 ) /*0x19a752*/
    j_j_free(Block); /*0x19a75c*/
  return Block; /*0x19a761*/
}

// [2/3] Address: 0x667e10
// Method: TabbedPopupLayer::showTab
void __fastcall TabbedPopupLayer_showTab(__int64 a1, int a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  signed int v5; // edi
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rdx

  if ( a2 >= 0 ) /*0x667e12*/
  {
    v2 = *(_QWORD *)(a1 + 1000); /*0x667e1d*/
    v4 = *(_QWORD *)(a1 + 1008) - v2; /*0x667e31*/
    if ( a2 < (int)(v4 / 88) ) /*0x667e5a*/
    {
      v5 = 0; /*0x667e73*/
      v6 = v2 + 88LL * a2; /*0x667e75*/
      v7 = *(_DWORD *)(v6 + 72); /*0x667e78*/
      if ( v7 <= 0 ) /*0x667e7d*/
      {
        *(_DWORD *)(v6 + 68) = 0; /*0x667e8b*/
      }
      else if ( *(_DWORD *)(v6 + 68) >= v7 ) /*0x667e82*/
      {
        *(_DWORD *)(v6 + 68) = v7 - 1; /*0x667e86*/
      }
      *(_DWORD *)(a1 + 1048) = a2; /*0x667e8e*/
      v8 = *(_QWORD *)(a1 + 1000); /*0x667e98*/
      v9 = 0; /*0x667e9f*/
      if ( (*(_QWORD *)(a1 + 1008) - v8) / 88 ) /*0x667eba*/
      {
        v10 = 0; /*0x667ec4*/
        do /*0x667f1e*/
        {
          LOBYTE(v4) = v9 == *(int *)(a1 + 1048); /*0x667ee5*/
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 1088LL))( /*0x667ee9*/
            a1,
            *(unsigned int *)(v10 + v8 + 64),
            v4);
          v8 = *(_QWORD *)(a1 + 1000); /*0x667eef*/
          v10 += 88; /*0x667ef6*/
          ++v9; /*0x667f07*/
        }
        while ( v9 < (*(_QWORD *)(a1 + 1008) - v8) / 88 ); /*0x667f1e*/
      }
      if ( *(int *)(v6 + 72) <= 0 ) /*0x667f2d*/
      {
        SetupTriggerPopup_goToPage(a1, 0, 1); /*0x667fa9*/
        sub_606D30(a1); /*0x667fb1*/
      }
      else
      {
        v11 = *(int *)(a1 + 1048); /*0x667f2f*/
        v12 = *(int *)(v6 + 68); /*0x667f36*/
        if ( (int)v11 >= 0 ) /*0x667f3d*/
        {
          v13 = *(_QWORD *)(a1 + 1024); /*0x667f3f*/
          if ( (int)v11 < (int)((*(_QWORD *)(a1 + 1032) - v13) / 24) && (int)v12 >= 0 ) /*0x667f73*/
          {
            v14 = *(_QWORD *)(v13 + 24 * v11); /*0x667f79*/
            if ( (int)v12 < (int)((*(_QWORD *)(v13 + 24 * v11 + 8) - v14) >> 2) ) /*0x667f8c*/
              v5 = *(_DWORD *)(v14 + 4 * v12); /*0x667f8e*/
          }
        }
        SetupTriggerPopup_goToPage(a1, v5, 0); /*0x667f9a*/
      }
      sub_667FE0(a1); /*0x667fb9*/
      sub_6680D0(a1); /*0x667fc1*/
    }
  }
}

// [3/3] Address: 0x668290
// Method: TabbedPopupLayer::pageChanged
void __fastcall TabbedPopupLayer_pageChanged(struct __ExceptionPtr *const a1)
{
  sub_6680D0(a1); /*0x668299*/
  sub_667FE0(a1); /*0x6682a6*/
}
