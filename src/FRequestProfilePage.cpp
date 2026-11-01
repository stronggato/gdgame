#include <Geode/binding/FRequestProfilePage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x20c180
// Method: FRequestProfilePage::~FRequestProfilePage
// Hidden C++ exception states: #wind=1
char *__fastcall FRequestProfilePage__dtor_FRequestProfilePage(char *Block, __int64 a2)
{
  char v2; // bp
  char *v4; // rdi
  char *v5; // rsi
  __int64 v6; // rax
  void *v7; // rax
  cocos2d::CCNotificationCenter *v8; // rax
  cocos2d::CCObject *v9; // rcx
  __int64 v10; // rax
  cocos2d::CCObject *v11; // rcx

  v2 = a2; /*0x20c194*/
  *(_QWORD *)Block = &FRequestProfilePage::`vftable'; /*0x20c1a0*/
  *((_QWORD *)Block + 40) = &FRequestProfilePage::`vftable'; /*0x20c1aa*/
  *((_QWORD *)Block + 41) = &FRequestProfilePage::`vftable'; /*0x20c1b8*/
  *((_QWORD *)Block + 42) = &FRequestProfilePage::`vftable'; /*0x20c1c6*/
  *((_QWORD *)Block + 43) = &FRequestProfilePage::`vftable'; /*0x20c1d4*/
  *((_QWORD *)Block + 44) = &FRequestProfilePage::`vftable'; /*0x20c1e2*/
  *((_QWORD *)Block + 51) = &FRequestProfilePage::`vftable'; /*0x20c1f0*/
  *((_QWORD *)Block + 54) = &FRequestProfilePage::`vftable'; /*0x20c1fe*/
  *((_QWORD *)Block + 68) = &FRequestProfilePage::`vftable'; /*0x20c20c*/
  *((_QWORD *)Block + 83) = &FRequestProfilePage::`vftable'; /*0x20c21a*/
  *((_QWORD *)Block + 84) = &FRequestProfilePage::`vftable'; /*0x20c228*/
  *((_QWORD *)Block + 85) = &FRequestProfilePage::`vftable'; /*0x20c236*/
  v4 = Block + 688; /*0x20c23d*/
  *((_QWORD *)Block + 86) = &FRequestProfilePage::`vftable'; /*0x20c24b*/
  v5 = Block + 696; /*0x20c24e*/
  *((_QWORD *)Block + 87) = &FRequestProfilePage::`vftable'; /*0x20c25c*/
  v6 = *(_QWORD *)&qword_905FB0; /*0x20c25f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x20c269*/
  {
    v7 = operator new(0x690u); /*0x20c270*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x20c27d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x20c28e*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x20c290*/
  }
  if ( *(char **)(v6 + 1504) == v4 ) /*0x20c29e*/
    *(_QWORD *)(v6 + 1504) = 0; /*0x20c2a0*/
  if ( *(char **)(v6 + 1496) == v5 ) /*0x20c2b2*/
    *(_QWORD *)(v6 + 1496) = 0; /*0x20c2b4*/
  v8 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(Block, a2); /*0x20c2bf*/
  cocos2d::CCNotificationCenter::removeObserver( /*0x20c2d2*/
    v8,
    (struct cocos2d::CCObject *)Block,
    "RequestSelectionChangedNotification");
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 111); /*0x20c2d8*/
  if ( v9 ) /*0x20c2e2*/
    cocos2d::CCObject::release(v9); /*0x20c2e4*/
  v10 = *((_QWORD *)Block + 110); /*0x20c2ea*/
  if ( v10 ) /*0x20c2f4*/
    *(_QWORD *)(v10 + 608) = 0; /*0x20c2f6*/
  v11 = (cocos2d::CCObject *)*((_QWORD *)Block + 101); /*0x20c301*/
  if ( v11 ) /*0x20c30b*/
    cocos2d::CCObject::release(v11); /*0x20c30d*/
  sub_3C310(Block + 744); /*0x20c31a*/
  sub_3C310(Block + 712); /*0x20c326*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x20c32e*/
  if ( (v2 & 1) != 0 ) /*0x20c338*/
    j_j_free(Block); /*0x20c342*/
  return Block; /*0x20c34a*/
}

// [2/13] Address: 0x20dbc0
// Method: FRequestProfilePage::getUserListFinished
void __fastcall FRequestProfilePage_getUserListFinished(__int64 a1, cocos2d::CCObject *a2, int a3)
{
  cocos2d::CCObject *v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // eax
  cocos2d::CCString *v9; // rax
  const char *CString; // rax

  if ( a3 == 2 )
  {
    v4 = *(cocos2d::CCObject **)(a1 + 192); /*0x20dbdc*/
    if ( v4 ) /*0x20dbe9*/
      cocos2d::CCObject::release(v4); /*0x20dbeb*/
    *(_QWORD *)(a1 + 192) = a2; /*0x20dbf4*/
    cocos2d::CCObject::retain(a2); /*0x20dbfb*/
    v6 = *(_QWORD *)(a1 + 192); /*0x20dc01*/
    *(_BYTE *)(a1 + 200) = 1; /*0x20dc0f*/
    sub_20F980(a1 - 696, v6); /*0x20dc16*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 336LL))(*(_QWORD *)(a1 + 112), 0); /*0x20dc24*/
    LOBYTE(v7) = 1; /*0x20dc31*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 336LL))(*(_QWORD *)(a1 + 152), v7); /*0x20dc36*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 336LL))(*(_QWORD *)(a1 + 96), 0); /*0x20dc45*/
    if ( a2 ) /*0x20dc4e*/
      v8 = cocos2d::CCArray::count(a2); /*0x20dc53*/
    else
      v8 = 0; /*0x20dc5b*/
    v9 = cocos2d::CCString::createWithFormat("Found: %i users", v8);
    CString = cocos2d::CCString::getCString(v9); /*0x20dc6f*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 80) + 360LL))( /*0x20dc89*/
      *(_QWORD *)(a1 + 80) + 360LL,
      CString);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 336LL))(*(_QWORD *)(a1 + 144), 0); /*0x20dc98*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 336LL))(*(_QWORD *)(a1 + 136), 0); /*0x20dcaa*/
    sub_20D2E0(a1 - 696); /*0x20dcb7*/
  }
}

// [3/13] Address: 0x20dcd0
// Method: FRequestProfilePage::getUserListFailed
__int64 __fastcall FRequestProfilePage_getUserListFailed(__int64 a1, int a2, int a3)
{
  __int64 v5; // rdx
  cocos2d::CCObject *v6; // rcx
  const char *v7; // rdx
  __int64 v8; // rdx
  __int64 result; // rax

  if ( a2 == 2 ) /*0x20dcd3*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 336LL))(*(_QWORD *)(a1 + 112), 0); /*0x20dcf7*/
    LOBYTE(v5) = 1; /*0x20dd04*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 336LL))(*(_QWORD *)(a1 + 152), v5); /*0x20dd09*/
    if ( a3 == -2 ) /*0x20dd12*/
    {
      v6 = *(cocos2d::CCObject **)(a1 + 192); /*0x20dd18*/
      if ( v6 ) /*0x20dd22*/
      {
        cocos2d::CCObject::release(v6); /*0x20dd24*/
        *(_QWORD *)(a1 + 192) = 0; /*0x20dd2a*/
      }
      *(_BYTE *)(a1 + 200) = 1; /*0x20dd37*/
      sub_20F980(a1 - 696, 0); /*0x20dd45*/
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 80) + 360LL))( /*0x20dd5f*/
        *(_QWORD *)(a1 + 80) + 360LL,
        " ");
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 336LL))(*(_QWORD *)(a1 + 144), 0); /*0x20dd6d*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 336LL))(*(_QWORD *)(a1 + 136), 0); /*0x20dd7f*/
      sub_20D2E0(a1 - 696); /*0x20dd8c*/
      v7 = "Nothing found"; /*0x20dd91*/
    }
    else
    {
      v7 = "Something went wrong"; /*0x20dd9a*/
    }
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 96) + 360LL))(*(_QWORD *)(a1 + 96) + 360LL, v7); /*0x20ddaf*/
    LOBYTE(v8) = 1; /*0x20ddb5*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 336LL))(*(_QWORD *)(a1 + 96), v8); /*0x20ddba*/
  }
  return result; /*0x20ddcf*/
}

// [4/13] Address: 0x20e930
// Method: FRequestProfilePage::FLAlert_Clicked
void __fastcall FRequestProfilePage_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  if ( a3 ) /*0x20e933*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0x20e949*/
      sub_20E340(a1 - 664); /*0x20e952*/
  }
}

// [5/13] Address: 0x20ee50
// Method: FRequestProfilePage::keyBackClicked
__int64 __fastcall FRequestProfilePage_keyBackClicked(__int64 a1)
{
  return sub_20ECF0(a1 - 336, 0);
}

// [6/13] Address: 0x20ee60
// Method: FRequestProfilePage::onClosePopup
__int64 __fastcall FRequestProfilePage_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x20ee78*/
  LOBYTE(v4) = 1; /*0x20ee81*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x20ee86*/
  if ( a2 == *(_QWORD *)(a1 + 136) ) /*0x20ee93*/
    *(_QWORD *)(a1 + 136) = 0; /*0x20ee95*/
  return result; /*0x20eea0*/
}

// [7/13] Address: 0x20eeb0
// Method: FRequestProfilePage::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall FRequestProfilePage_uploadActionFinished(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  char *v6; // rdx
  size_t v7; // r8
  void **v8; // rdx
  void *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  void *Block[2]; // [rsp+58h] [rbp-30h] BYREF
  __m128i si128; // [rsp+68h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 144) ) /*0x20eed7*/
  {
    *(_OWORD *)Block = 0; /*0x20eee8*/
    Block[0] = (void *)sub_3C460(32); /*0x20ef03*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_831030); /*0x20ef10*/
    strcpy((char *)Block[0], "Unknown action finished"); /*0x20ef1d*/
    v5 = -1; /*0x20ef42*/
    if ( a3 == 36 ) /*0x20ef4c*/
    {
      v6 = "Requests ignored"; /*0x20ef55*/
      if ( *(_BYTE *)(a1 + 32) ) /*0x20ef5c*/
        v6 = "Requests removed"; /*0x20ef60*/
      v7 = -1; /*0x20ef64*/
      do /*0x20ef73*/
        ++v7; /*0x20ef70*/
      while ( v6[v7] ); /*0x20ef73*/
      sub_3F5A0(Block, v6, v7); /*0x20ef7f*/
    }
    v8 = Block; /*0x20ef84*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x20ef8f*/
      v8 = (void **)Block[0]; /*0x20ef8f*/
    v10 = 0; /*0x20ef98*/
    v11 = 0; /*0x20ef9f*/
    v12 = 0; /*0x20efa4*/
    do /*0x20efb3*/
      ++v5; /*0x20efb0*/
    while ( *((_BYTE *)v8 + v5) ); /*0x20efb3*/
    sub_3C230(&v10); /*0x20efc1*/
    UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 144), &v10); /*0x20efd2*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x20efe1*/
    {
      v9 = Block[0]; /*0x20efe6*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x20eff5*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x20effb*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x20f00a*/
          invoke_watson(0, 0, 0, 0, 0); /*0x20f01b*/
      }
      j_j_free(v9); /*0x20f022*/
    }
  }
}

// [8/13] Address: 0x20f050
// Method: FRequestProfilePage::uploadActionFailed
void __fastcall FRequestProfilePage_uploadActionFailed(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 144) ) /*0x20f056*/
  {
    v2 = 0; /*0x20f076*/
    *(_QWORD *)&v2 = sub_3C460(32); /*0x20f08c*/
    v3 = 31; /*0x20f094*/
    v4 = 31; /*0x20f09d*/
    strcpy((char *)v2, "Failed. Please try again later."); /*0x20f0a6*/
    UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 144), &v2); /*0x20f0e4*/
  }
}

// [9/13] Address: 0x20f6c0
// Method: FRequestProfilePage::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall FRequestProfilePage_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rdx
  void **v6; // rsi
  unsigned __int64 v7; // rbp
  size_t v8; // rdi
  void **v9; // rax
  void **v10; // rax
  cocos2d::CCObject *v11; // rcx
  const void *v12; // rdx
  void **v13; // rcx
  size_t v14; // r14
  size_t v15; // r8
  const void *v16; // rdx
  void **v17; // rcx
  size_t v18; // r14
  size_t v19; // r8
  void **v20; // rdx
  __int64 v21; // rcx
  void **v22; // rax
  void *Buf1[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v25; // [rsp+50h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x20f6fc*/
  *(_OWORD *)Buf1 = 0; /*0x20f702*/
  Size = 0; /*0x20f707*/
  v25 = 0; /*0x20f70c*/
  v4 = -1; /*0x20f711*/
  do /*0x20f723*/
    ++v4; /*0x20f720*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x20f723*/
  sub_3C230(Buf1); /*0x20f731*/
  v5 = Buf1; /*0x20f737*/
  v6 = (void **)Buf1[0]; /*0x20f73c*/
  v7 = v25; /*0x20f741*/
  if ( v25 > 0xF ) /*0x20f74a*/
    v5 = (void **)Buf1[0]; /*0x20f74a*/
  v8 = Size; /*0x20f74e*/
  if ( !Size ) /*0x20f756*/
    goto LABEL_11; /*0x20f756*/
  v9 = v5; /*0x20f75c*/
  if ( v5 >= (void **)((char *)v5 + Size) ) /*0x20f762*/
    goto LABEL_11; /*0x20f762*/
  while ( *(_BYTE *)v9 == 32 ) /*0x20f767*/
  {
    v9 = (void **)((char *)v9 + 1); /*0x20f769*/
    if ( v9 >= (void **)((char *)v5 + Size) ) /*0x20f76f*/
      goto LABEL_11; /*0x20f76f*/
  }
  if ( (char *)v9 - (char *)v5 == -1 ) /*0x20f77a*/
  {
LABEL_11:
    v10 = Buf1; /*0x20f77c*/
    if ( v25 > 0xF ) /*0x20f785*/
      v10 = (void **)Buf1[0]; /*0x20f785*/
    Size = 0; /*0x20f789*/
    *(_BYTE *)v10 = 0; /*0x20f78e*/
    v7 = v25; /*0x20f791*/
    v8 = Size; /*0x20f796*/
    v6 = (void **)Buf1[0]; /*0x20f79b*/
  }
  if ( !*(_BYTE *)(a1 + 352) ) /*0x20f7a0*/
    goto LABEL_27; /*0x20f7a0*/
  *(_BYTE *)(a1 + 352) = 0; /*0x20f7ad*/
  v11 = *(cocos2d::CCObject **)(a1 + 344); /*0x20f7b4*/
  if ( v11 ) /*0x20f7be*/
  {
    cocos2d::CCObject::release(v11); /*0x20f7c0*/
    *(_QWORD *)(a1 + 344) = 0; /*0x20f7c6*/
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 248) + 336LL))(*(_QWORD *)(a1 + 248), 0); /*0x20f7d9*/
  v12 = (const void *)(a1 + 200); /*0x20f7df*/
  if ( *(_QWORD *)(a1 + 224) > 0xFu ) /*0x20f7ee*/
    v12 = *(const void **)(a1 + 200); /*0x20f7f0*/
  v13 = Buf1; /*0x20f7f7*/
  if ( v7 > 0xF ) /*0x20f800*/
    v13 = v6; /*0x20f800*/
  v14 = *(_QWORD *)(a1 + 216); /*0x20f804*/
  v15 = v8; /*0x20f80b*/
  if ( v14 < v8 ) /*0x20f811*/
    v15 = *(_QWORD *)(a1 + 216); /*0x20f811*/
  if ( !memcmp(v13, v12, v15) && v8 >= v14 && v8 <= v14 ) /*0x20f823*/
  {
    sub_20F230(a1 - 544, 0); /*0x20f82e*/
  }
  else
  {
LABEL_27:
    v16 = (const void *)(a1 + 200); /*0x20f838*/
    if ( *(_QWORD *)(a1 + 224) > 0xFu ) /*0x20f847*/
      v16 = *(const void **)(a1 + 200); /*0x20f849*/
    v17 = Buf1; /*0x20f850*/
    if ( v7 > 0xF ) /*0x20f859*/
      v17 = v6; /*0x20f859*/
    v18 = *(_QWORD *)(a1 + 216); /*0x20f85d*/
    v19 = v8; /*0x20f864*/
    if ( v18 < v8 ) /*0x20f86a*/
      v19 = *(_QWORD *)(a1 + 216); /*0x20f86a*/
    if ( memcmp(v17, v16, v19) || v8 < v18 || v8 > v18 ) /*0x20f87c*/
    {
      if ( (void **)(a1 + 200) != Buf1 ) /*0x20f88d*/
      {
        v20 = Buf1; /*0x20f88f*/
        if ( v7 > 0xF ) /*0x20f898*/
          v20 = v6; /*0x20f898*/
        sub_3F5A0((void *)(a1 + 200), v20, v8); /*0x20f89f*/
        v7 = v25; /*0x20f8a4*/
        v6 = (void **)Buf1[0]; /*0x20f8a9*/
      }
      cocos2d::CCNode::unschedule(a1 - 544, sub_20F970); /*0x20f8bc*/
      v21 = a1 - 544; /*0x20f8c2*/
      if ( *(_QWORD *)(a1 + 216) ) /*0x20f8c9*/
        cocos2d::CCNode::scheduleOnce(v21, sub_20F970); /*0x20f8eb*/
      else
        sub_20F230(v21, 0); /*0x20f8d5*/
    }
  }
  if ( v7 > 0xF ) /*0x20f8f6*/
  {
    v22 = v6; /*0x20f8fc*/
    if ( v7 + 1 >= 0x1000 ) /*0x20f906*/
    {
      v6 = (void **)*(v6 - 1); /*0x20f90c*/
      if ( (unsigned __int64)((char *)v22 - (char *)v6 - 8) > 0x1F ) /*0x20f91b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x20f92c*/
    }
    j_j_free(v6); /*0x20f936*/
  }
}

// [10/13] Address: 0x20fb10
// Method: FRequestProfilePage::loadFRequestsFinished
void __fastcall FRequestProfilePage_loadFRequestsFinished(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx

  if ( !*(_BYTE *)(a1 + 208) ) /*0x20fb1f*/
  {
    if ( (unsigned __int8)sub_20F0F0(a1 - 688, a3) ) /*0x20fb38*/
    {
      sub_20F980(a1 - 688, a2); /*0x20fb4b*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 120) + 336LL))(*(_QWORD *)(a1 + 120), 0); /*0x20fb59*/
      LOBYTE(v5) = 1; /*0x20fb66*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 160) + 336LL))(*(_QWORD *)(a1 + 160), v5); /*0x20fb6b*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), 0); /*0x20fb7a*/
      sub_20D2E0(a1 - 688); /*0x20fb87*/
    }
  }
}

// [11/13] Address: 0x20fba0
// Method: FRequestProfilePage::loadFRequestsFailed
void __fastcall FRequestProfilePage_loadFRequestsFailed(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  const char *v6; // rdx
  __int64 v7; // rdx

  if ( !*(_BYTE *)(a1 + 208) && (unsigned __int8)sub_20F0F0(a1 - 688, a2) ) /*0x20fbc9*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 120) + 336LL))(*(_QWORD *)(a1 + 120), 0); /*0x20fbdb*/
    LOBYTE(v5) = 1; /*0x20fbe8*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 160) + 336LL))(*(_QWORD *)(a1 + 160), v5); /*0x20fbed*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 88) + 360LL))(*(_QWORD *)(a1 + 88) + 360LL, " "); /*0x20fc08*/
    v6 = "Nothing found"; /*0x20fc0e*/
    if ( a3 != -2 ) /*0x20fc22*/
      v6 = "Something went wrong"; /*0x20fc24*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 104) + 360LL))(*(_QWORD *)(a1 + 104) + 360LL, v6); /*0x20fc2b*/
    LOBYTE(v7) = 1; /*0x20fc31*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), v7); /*0x20fc36*/
    sub_20D2E0(a1 - 688); /*0x20fc43*/
  }
}

// [12/13] Address: 0x20fc60
// Method: FRequestProfilePage::forceReloadRequests
__int64 __fastcall FRequestProfilePage_forceReloadRequests(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 - 688; /*0x20fc60*/
  if ( *(_BYTE *)(v2 + 704) == a2 ) /*0x20fc6d*/
    return sub_20F230(v2, 0); /*0x20fc71*/
  return result; /*0x20fc76*/
}

// [13/13] Address: 0x20fc80
// Method: FRequestProfilePage::setupPageInfo
// Hidden C++ exception states: #wind=2
double __fastcall FRequestProfilePage_setupPageInfo(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // r8
  cocos2d::CCArray *v8; // rbp
  void *v9; // r8
  cocos2d::CCString *v10; // rax
  cocos2d::CCString *v11; // rax
  cocos2d::CCString *v12; // rax
  int v13; // eax
  int v14; // r9d
  int v15; // edx
  int v16; // r8d
  cocos2d::CCString *v17; // rax
  const char *CString; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __m128i si128; // [rsp+48h] [rbp-30h]

  v5 = a1 - 688; /*0x20fca6*/
  if ( !*(_BYTE *)(a1 - 688 + 896) && (unsigned __int8)sub_20F0F0(a1 - 688, a3) ) /*0x20fcc0*/
  {
    v6 = a2; /*0x20fccd*/
    if ( a2[3] > 0xFu ) /*0x20fcd5*/
      v6 = (_QWORD *)*a2; /*0x20fcd7*/
    *(_OWORD *)Block = 0; /*0x20fcdd*/
    si128 = 0; /*0x20fce5*/
    v7 = -1; /*0x20fceb*/
    do /*0x20fcf5*/
      ++v7; /*0x20fcf2*/
    while ( *((_BYTE *)v6 + v7) ); /*0x20fcf5*/
    sub_3C230(Block); /*0x20fd01*/
    v8 = (cocos2d::CCArray *)sub_20BF00(Block); /*0x20fd11*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x20fd1d*/
    {
      v9 = Block[0]; /*0x20fd22*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x20fd31*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x20fd37*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x20fd46*/
          invoke_watson(0, 0, 0, 0, 0); /*0x20fd5b*/
      }
      j_j_free(v9); /*0x20fd65*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x20fd72*/
    LOBYTE(Block[0]) = 0; /*0x20fd78*/
    if ( cocos2d::CCArray::count(v8) >= 3 ) /*0x20fd89*/
    {
      v10 = cocos2d::CCArray::objectAtIndex(v8, 0); /*0x20fd94*/
      *(_DWORD *)(a1 + 232) = cocos2d::CCString::intValue(v10); /*0x20fda3*/
      v11 = cocos2d::CCArray::objectAtIndex(v8, 1u); /*0x20fdb1*/
      *(_DWORD *)(a1 + 236) = cocos2d::CCString::intValue(v11); /*0x20fdc0*/
      v12 = cocos2d::CCArray::objectAtIndex(v8, 2u); /*0x20fdce*/
      v13 = cocos2d::CCString::intValue(v12); /*0x20fdd7*/
      *(_DWORD *)(a1 + 240) = v13; /*0x20fddd*/
      v14 = *(_DWORD *)(v5 + 920); /*0x20fde3*/
      v15 = *(_DWORD *)(v5 + 924); /*0x20fdea*/
      v16 = v15 + v13; /*0x20fdf0*/
      if ( v15 + v13 >= v14 ) /*0x20fdf7*/
        v16 = *(_DWORD *)(v5 + 920); /*0x20fdf7*/
      v17 = cocos2d::CCString::createWithFormat("%i to %i of %i", v15 + 1, v16, v14); /*0x20fe04*/
      CString = cocos2d::CCString::getCString(v17); /*0x20fe0d*/
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(v5 + 776) + 360LL))( /*0x20fe2a*/
        *(_QWORD *)(v5 + 776) + 360LL,
        CString);
      sub_20D2E0(v5); /*0x20fe30*/
      if ( *(_DWORD *)(a1 + 236) ) /*0x20fe3f*/
        LOBYTE(v19) = 1; /*0x20fe4c*/
      else
        v19 = 0; /*0x20fe48*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 336LL))(*(_QWORD *)(a1 + 152), v19); /*0x20fe4e*/
      if ( *(_DWORD *)(a1 + 236) + *(_DWORD *)(a1 + 240) < *(_DWORD *)(a1 + 232) ) /*0x20fe70*/
        LOBYTE(v20) = 1; /*0x20fe76*/
      else
        v20 = 0; /*0x20fe72*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 336LL))(*(_QWORD *)(a1 + 144), v20); /*0x20fe78*/
    }
  }
  return sub_3C310(a2); /*0x20fe88*/
}
