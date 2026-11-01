#include <Geode/binding/GJMessageCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x15a550
// Method: GJMessageCell::init
__int64 __fastcall GJMessageCell_init(_QWORD *a1)
{
  a1[73] = 0; /*0x15a552*/
  a1[74] = 0; /*0x15a559*/
  a1[75] = 0; /*0x15a560*/
  return 1; /*0x15a569*/
}

// [3/7] Address: 0x15af40
// Method: GJMessageCell::markAsRead
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall GJMessageCell_markAsRead(__int64 a1)
{
  struct cocos2d::CCObject *result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // ecx
  void *v7; // [rsp+30h] [rbp+8h]

  result = *(struct cocos2d::CCObject **)(a1 + 584); /*0x15af46*/
  if ( !*((_BYTE *)result + 464) ) /*0x15af4d*/
  {
    *((_BYTE *)result + 464) = 1; /*0x15af5a*/
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 472LL))(*(_QWORD *)(a1 + 544), 100); /*0x15af70*/
    if ( v2 ) /*0x15af79*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 336LL))(v2, 0); /*0x15af8a*/
    v3 = GJAccountManager_sharedState(); /*0x15af8d*/
    v4 = *(_DWORD *)(v3 + 360) - *(_DWORD *)(v3 + 364); /*0x15af98*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x15af9e*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x15afa8*/
    {
      v7 = operator new(0x690u); /*0x15afb4*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x15afc2*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x15afd3*/
      v5 = *(_QWORD *)&qword_905FB0; /*0x15afd5*/
    }
    result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v5 + 1232), v4); /*0x15afe6*/
    if ( result ) /*0x15afef*/
    {
      v6 = *((_DWORD *)result + 191) - 1; /*0x15aff9*/
      if ( v6 < 0 ) /*0x15affc*/
        v6 = 0; /*0x15affc*/
      *((_DWORD *)result + 191) = v6; /*0x15afff*/
    }
  }
  return result; /*0x15b005*/
}

// [4/7] Address: 0x15b230
// Method: GJMessageCell::FLAlert_Clicked
// Hidden C++ exception states: #wind=2
void __fastcall GJMessageCell_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]
  void *v13; // [rsp+68h] [rbp+20h]
  void *v14; // [rsp+68h] [rbp+20h]

  if ( a3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 && *(_QWORD *)(a1 + 24) ) /*0x15b262*/
  {
    GJMessageCell_markAsRead(a1 - 560); /*0x15b277*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x15b27c*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x15b286*/
    {
      v13 = operator new(0x690u); /*0x15b292*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x15b2a0*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x15b2b1*/
      v4 = *(_QWORD *)&qword_905FB0; /*0x15b2b3*/
    }
    if ( (unsigned __int8)sub_2386C0(v4, *(_QWORD *)(a1 + 24), 0, *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 465LL)) ) /*0x15b2c9*/
    {
      v5 = a1 + 16; /*0x15b2d6*/
      if ( a1 == 560 ) /*0x15b2df*/
        v5 = 0; /*0x15b2df*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x15b2e3*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x15b2ed*/
      {
        v14 = operator new(0x690u); /*0x15b2f9*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x15b307*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x15b318*/
        v6 = *(_QWORD *)&qword_905FB0; /*0x15b31a*/
      }
      *(_QWORD *)(v6 + 1488) = v5; /*0x15b321*/
      v7 = *(_QWORD *)(a1 + 32); /*0x15b328*/
      if ( v7 ) /*0x15b32f*/
        *(_QWORD *)(v7 + 664) = 0; /*0x15b331*/
      v10 = 0; /*0x15b33b*/
      *(_QWORD *)&v10 = sub_3C460(32); /*0x15b354*/
      v11 = 19; /*0x15b359*/
      v12 = 31; /*0x15b362*/
      strcpy((char *)v10, "Deleting message..."); /*0x15b372*/
      v8 = a1 + 8; /*0x15b38e*/
      if ( a1 == 560 ) /*0x15b395*/
        v8 = 0; /*0x15b395*/
      v9 = sub_39D2A0(v8, &v10); /*0x15b39e*/
      *(_QWORD *)(a1 + 32) = v9; /*0x15b3a3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL))(v9); /*0x15b3b4*/
    }
  }
}

// [5/7] Address: 0x15b3d0
// Method: GJMessageCell::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall GJMessageCell_uploadActionFinished(__int64 a1, int a2, int a3)
{
  _BYTE *v5; // rbx
  unsigned __int64 v6; // r8
  void **v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  void *Block[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]
  unsigned __int64 v15; // [rsp+70h] [rbp-18h]

  if ( a2 == *(_DWORD *)(*(_QWORD *)(a1 + 8) + 320LL) && *(_QWORD *)(a1 + 16) ) /*0x15b407*/
  {
    *(_OWORD *)Block = 0; /*0x15b415*/
    v5 = (_BYTE *)sub_3C460(32); /*0x15b424*/
    Block[0] = v5; /*0x15b427*/
    v14 = 23; /*0x15b42c*/
    v6 = 31; /*0x15b435*/
    v15 = 31; /*0x15b43b*/
    strcpy(v5, "Unknown action finished"); /*0x15b447*/
    if ( a3 == 45 ) /*0x15b46f*/
    {
      v14 = 16; /*0x15b471*/
      memmove(v5, "Message removed!", 0x10u); /*0x15b48a*/
      v5[16] = 0; /*0x15b48f*/
      v6 = v15; /*0x15b493*/
      v5 = Block[0]; /*0x15b498*/
    }
    v7 = Block; /*0x15b49d*/
    if ( v6 > 0xF ) /*0x15b4a6*/
      v7 = (void **)v5; /*0x15b4a6*/
    v10 = 0; /*0x15b4ad*/
    v11 = 0; /*0x15b4b4*/
    v12 = 0; /*0x15b4b9*/
    v8 = -1; /*0x15b4be*/
    do /*0x15b4c8*/
      ++v8; /*0x15b4c5*/
    while ( *((_BYTE *)v7 + v8) ); /*0x15b4c8*/
    sub_3C230(&v10); /*0x15b4d3*/
    UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 16), &v10); /*0x15b4e1*/
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 664LL) = 0; /*0x15b4ea*/
    *(_QWORD *)(a1 + 16) = 0; /*0x15b4f1*/
    if ( v15 > 0xF ) /*0x15b4fe*/
    {
      v9 = Block[0]; /*0x15b503*/
      if ( v15 + 1 >= 0x1000 ) /*0x15b512*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x15b518*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x15b527*/
          invoke_watson(0, 0, 0, 0, 0); /*0x15b538*/
      }
      j_j_free(v9); /*0x15b53f*/
    }
  }
}

// [6/7] Address: 0x15b570
// Method: GJMessageCell::uploadActionFailed
__int64 __fastcall GJMessageCell_uploadActionFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  result = *(_QWORD *)(a1 + 8); /*0x15b576*/
  if ( a2 == *(_DWORD *)(result + 320) ) /*0x15b583*/
  {
    if ( *(_QWORD *)(a1 + 16) ) /*0x15b589*/
    {
      v4 = 0; /*0x15b5ad*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x15b5be*/
      v5 = 31; /*0x15b5c6*/
      v6 = 31; /*0x15b5cf*/
      strcpy((char *)v4, "Failed. Please try again later."); /*0x15b5d8*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 16), &v4); /*0x15b613*/
      result = *(_QWORD *)(a1 + 16); /*0x15b618*/
      *(_QWORD *)(result + 664) = 0; /*0x15b61c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x15b623*/
    }
  }
  return result; /*0x15b62c*/
}

// [7/7] Address: 0x15b640
// Method: GJMessageCell::onClosePopup
__int64 __fastcall GJMessageCell_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x15b658*/
  LOBYTE(v4) = 1; /*0x15b661*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x15b666*/
  *(_QWORD *)(a1 + 24) = 0; /*0x15b671*/
  return result; /*0x15b66c*/
}
