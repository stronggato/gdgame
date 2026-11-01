#include <Geode/binding/MessagesProfilePage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/12] Address: 0x471400
// Method: MessagesProfilePage::~MessagesProfilePage
// Hidden C++ exception states: #wind=1
char *__fastcall MessagesProfilePage__dtor_MessagesProfilePage(char *Block, __int64 a2)
{
  char v2; // bp
  char *v4; // rsi
  char *v5; // rdi
  __int64 v6; // rax
  void *v7; // rax
  cocos2d::CCNotificationCenter *v8; // rax
  cocos2d::CCObject *v9; // rcx

  v2 = a2; /*0x471414*/
  *(_QWORD *)Block = &MessagesProfilePage::`vftable'; /*0x471420*/
  *((_QWORD *)Block + 40) = &MessagesProfilePage::`vftable'; /*0x47142a*/
  *((_QWORD *)Block + 41) = &MessagesProfilePage::`vftable'; /*0x471438*/
  *((_QWORD *)Block + 42) = &MessagesProfilePage::`vftable'; /*0x471446*/
  *((_QWORD *)Block + 43) = &MessagesProfilePage::`vftable'; /*0x471454*/
  *((_QWORD *)Block + 44) = &MessagesProfilePage::`vftable'; /*0x471462*/
  *((_QWORD *)Block + 51) = &MessagesProfilePage::`vftable'; /*0x471470*/
  *((_QWORD *)Block + 54) = &MessagesProfilePage::`vftable'; /*0x47147e*/
  *((_QWORD *)Block + 68) = &MessagesProfilePage::`vftable'; /*0x47148c*/
  *((_QWORD *)Block + 83) = &MessagesProfilePage::`vftable'; /*0x47149a*/
  v4 = Block + 672; /*0x4714a1*/
  *((_QWORD *)Block + 84) = &MessagesProfilePage::`vftable'; /*0x4714af*/
  *((_QWORD *)Block + 85) = &MessagesProfilePage::`vftable'; /*0x4714b9*/
  v5 = Block + 688; /*0x4714c0*/
  *((_QWORD *)Block + 86) = &MessagesProfilePage::`vftable'; /*0x4714ce*/
  v6 = *(_QWORD *)&qword_905FB0; /*0x4714d1*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x4714db*/
  {
    v7 = operator new(0x690u); /*0x4714e2*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x4714ef*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x471500*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x471502*/
  }
  if ( *(char **)(v6 + 1512) == v5 ) /*0x471512*/
    *(_QWORD *)(v6 + 1512) = 0; /*0x471514*/
  if ( *(char **)(v6 + 1488) == v4 ) /*0x471522*/
    *(_QWORD *)(v6 + 1488) = 0; /*0x471524*/
  v8 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(0, a2); /*0x47152b*/
  cocos2d::CCNotificationCenter::removeObserver( /*0x47153e*/
    v8,
    (struct cocos2d::CCObject *)Block,
    "MessageSelectionChangedNotification");
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 95); /*0x471544*/
  if ( v9 ) /*0x47154e*/
    cocos2d::CCObject::release(v9); /*0x471550*/
  sub_3C310(Block + 704); /*0x47155d*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x471565*/
  if ( (v2 & 1) != 0 ) /*0x47156f*/
    j_j_free(Block); /*0x471579*/
  return Block; /*0x471581*/
}

// [3/12] Address: 0x472820
// Method: MessagesProfilePage::deleteSelected
// Hidden C++ exception states: #wind=5
int __fastcall MessagesProfilePage_deleteSelected(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  cocos2d::CCArray *v7; // r15
  int v8; // esi
  unsigned int *v9; // rdi
  __int64 v10; // rax
  struct cocos2d::CCObject **v11; // rdi
  struct cocos2d::CCObject **i; // r14
  struct cocos2d::CCObject *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rcx
  struct cocos2d::CCObject *v22; // rax
  int v23; // ecx
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]
  __int64 v27; // [rsp+38h] [rbp-30h]
  void *v28; // [rsp+70h] [rbp+8h]
  void *v29; // [rsp+70h] [rbp+8h]
  void *v30; // [rsp+70h] [rbp+8h]

  v2 = (_QWORD *)(a1 + 704); /*0x472839*/
  if ( *(_QWORD *)(a1 + 728) > 0xFu ) /*0x472845*/
    v2 = (_QWORD *)*v2; /*0x472847*/
  v3 = *(_QWORD *)&qword_905FB0; /*0x47284a*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x472854*/
  {
    v28 = operator new(0x690u); /*0x472860*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v28); /*0x47286e*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x47287f*/
    v3 = *(_QWORD *)&qword_905FB0; /*0x472882*/
  }
  v4 = sub_21E690(v3, v2); /*0x47288c*/
  v6 = v4; /*0x472891*/
  if ( v4 ) /*0x472897*/
  {
    v7 = (cocos2d::CCArray *)cocos2d::CCArray::create(v5); /*0x4728a3*/
    v8 = 0; /*0x4728a9*/
    v9 = *(unsigned int **)(v6 + 56); /*0x4728ac*/
    v10 = *v9; /*0x4728b0*/
    if ( (_DWORD)v10 ) /*0x4728b4*/
    {
      v11 = (struct cocos2d::CCObject **)*((_QWORD *)v9 + 2); /*0x4728b6*/
      for ( i = &v11[v10 - 1]; v11 <= i; ++v11 ) /*0x4728c5*/
      {
        v13 = *v11; /*0x4728c7*/
        if ( !*v11 ) /*0x4728c7*/
          break; /*0x4728cd*/
        if ( *((_BYTE *)v13 + 466) ) /*0x4728cf*/
        {
          cocos2d::CCArray::addObject(v7, *v11); /*0x4728de*/
          if ( !*((_BYTE *)v13 + 464) ) /*0x4728e4*/
          {
            *((_BYTE *)v13 + 464) = 1; /*0x4728ed*/
            ++v8; /*0x4728f4*/
          }
        }
      }
    }
    LODWORD(v4) = cocos2d::CCArray::count(v7); /*0x472902*/
    if ( (_DWORD)v4 ) /*0x47290a*/
    {
      v14 = a1 + 688; /*0x472910*/
      if ( !a1 ) /*0x47291a*/
        v14 = 0; /*0x47291a*/
      v15 = *(_QWORD *)&qword_905FB0; /*0x47291e*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x472928*/
      {
        v29 = operator new(0x690u); /*0x472934*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v29); /*0x472942*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x472953*/
        v15 = *(_QWORD *)&qword_905FB0; /*0x472955*/
      }
      *(_QWORD *)(v15 + 1512) = v14; /*0x47295c*/
      v16 = a1 + 672; /*0x472963*/
      if ( !a1 ) /*0x47296d*/
        v16 = 0; /*0x47296d*/
      *(_QWORD *)(v15 + 1488) = v16; /*0x472971*/
      if ( (unsigned __int8)sub_2386C0(v15, 0, v7, *(unsigned __int8 *)(a1 + 696)) ) /*0x472985*/
      {
        v25 = 0; /*0x472991*/
        *(_QWORD *)&v25 = sub_3C460(32); /*0x4729aa*/
        v26 = 20; /*0x4729af*/
        v27 = 31; /*0x4729b8*/
        strcpy((char *)v25, "Deleting Messages..."); /*0x4729c8*/
        v18 = sub_39D2A0(a1 + 680, &v25); /*0x4729e4*/
        *(_QWORD *)(a1 + 768) = v18; /*0x4729e9*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 1064LL))(v18); /*0x4729fd*/
      }
      if ( v8 > 0 ) /*0x472a01*/
      {
        v19 = GJAccountManager_sharedState(v17); /*0x472a03*/
        v20 = *(_DWORD *)(v19 + 360) - *(_DWORD *)(v19 + 364); /*0x472a0e*/
        v21 = *(_QWORD *)&qword_905FB0; /*0x472a14*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x472a1e*/
        {
          v30 = operator new(0x690u); /*0x472a2a*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v30); /*0x472a38*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x472a49*/
          v21 = *(_QWORD *)&qword_905FB0; /*0x472a4b*/
        }
        v22 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v21 + 1232), v20); /*0x472a5c*/
        if ( v22 ) /*0x472a65*/
        {
          v23 = *((_DWORD *)v22 + 191) - v8; /*0x472a6d*/
          if ( v23 < 0 ) /*0x472a6f*/
            v23 = 0; /*0x472a6f*/
          *((_DWORD *)v22 + 191) = v23; /*0x472a73*/
        }
      }
      LODWORD(v4) = sub_4722C0(a1); /*0x472a7c*/
    }
  }
  return v4; /*0x472a81*/
}

// [4/12] Address: 0x472aa0
// Method: MessagesProfilePage::FLAlert_Clicked
void __fastcall MessagesProfilePage_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  if ( a3 ) /*0x472aa3*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x472ab9*/
      MessagesProfilePage_deleteSelected(a1 - 664); /*0x472ac2*/
  }
}

// [5/12] Address: 0x472ad0
// Method: MessagesProfilePage::onClosePopup
__int64 __fastcall MessagesProfilePage_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x472ae8*/
  LOBYTE(v4) = 1; /*0x472af1*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x472af6*/
  if ( a2 == *(_QWORD *)(a1 + 88) ) /*0x472b00*/
    *(_QWORD *)(a1 + 88) = 0; /*0x472b02*/
  return result; /*0x472b0a*/
}

// [6/12] Address: 0x472b20
// Method: MessagesProfilePage::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall MessagesProfilePage_uploadActionFinished(__int64 a1, __int64 a2, int a3)
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

  if ( *(_QWORD *)(a1 + 96) ) /*0x472b47*/
  {
    *(_OWORD *)Block = 0; /*0x472b55*/
    v5 = (_BYTE *)sub_3C460(32); /*0x472b64*/
    Block[0] = v5; /*0x472b67*/
    v14 = 23; /*0x472b6c*/
    v6 = 31; /*0x472b75*/
    v15 = 31; /*0x472b7b*/
    strcpy(v5, "Unknown action finished"); /*0x472b87*/
    if ( a3 == 45 ) /*0x472baf*/
    {
      v14 = 16; /*0x472bb1*/
      memmove(v5, "Messages removed", 0x10u); /*0x472bca*/
      v5[16] = 0; /*0x472bcf*/
      v6 = v15; /*0x472bd3*/
      v5 = Block[0]; /*0x472bd8*/
    }
    v7 = Block; /*0x472bdd*/
    if ( v6 > 0xF ) /*0x472be6*/
      v7 = (void **)v5; /*0x472be6*/
    v10 = 0; /*0x472bed*/
    v11 = 0; /*0x472bf4*/
    v12 = 0; /*0x472bf9*/
    v8 = -1; /*0x472bfe*/
    do /*0x472c08*/
      ++v8; /*0x472c05*/
    while ( *((_BYTE *)v7 + v8) ); /*0x472c08*/
    sub_3C230(&v10); /*0x472c13*/
    UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 96), &v10); /*0x472c21*/
    if ( v15 > 0xF ) /*0x472c30*/
    {
      v9 = Block[0]; /*0x472c35*/
      if ( v15 + 1 >= 0x1000 ) /*0x472c44*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x472c4a*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x472c59*/
          invoke_watson(0, 0, 0, 0, 0); /*0x472c6a*/
      }
      j_j_free(v9); /*0x472c71*/
    }
  }
}

// [7/12] Address: 0x472ca0
// Method: MessagesProfilePage::uploadActionFailed
void __fastcall MessagesProfilePage_uploadActionFailed(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 96) ) /*0x472ca6*/
  {
    v2 = 0; /*0x472cbf*/
    *(_QWORD *)&v2 = sub_3C460(32); /*0x472cd5*/
    v3 = 31; /*0x472cdd*/
    v4 = 31; /*0x472ce6*/
    strcpy((char *)v2, "Failed. Please try again later."); /*0x472cef*/
    UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 96), &v2); /*0x472d2a*/
  }
}

// [8/12] Address: 0x472e00
// Method: MessagesProfilePage::keyBackClicked
__int64 __fastcall MessagesProfilePage_keyBackClicked(__int64 a1)
{
  return sub_472D40(a1 - 336, 0);
}

// [9/12] Address: 0x4735b0
// Method: MessagesProfilePage::loadMessagesFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall MessagesProfilePage_loadMessagesFinished(__int64 a1, cocos2d::CCArray *a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // ebx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *i; // r8
  int v12; // edx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rcx
  struct cocos2d::CCObject *v16; // rax
  void *v17; // [rsp+30h] [rbp+8h]

  v5 = a1 - 688; /*0x4735c5*/
  result = sub_472E10(a1 - 688, a3); /*0x4735d2*/
  if ( (_BYTE)result ) /*0x4735d9*/
  {
    sub_473420(v5, a2); /*0x4735e5*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 336LL))(*(_QWORD *)(a1 + 72), 0); /*0x4735f3*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), 0); /*0x473602*/
    LOBYTE(v7) = 1; /*0x47360f*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 112) + 336LL))(*(_QWORD *)(a1 + 112), v7); /*0x473611*/
    if ( !*(_BYTE *)(a1 + 8) && a2 && cocos2d::CCArray::count(a2) ) /*0x47362d*/
    {
      v8 = 0; /*0x47363b*/
      v9 = (_QWORD *)*((_QWORD *)a2 + 7); /*0x47363d*/
      v10 = *(unsigned int *)v9; /*0x473641*/
      if ( (_DWORD)v10 ) /*0x473645*/
      {
        v9 = (_QWORD *)v9[2]; /*0x473647*/
        for ( i = &v9[v10 - 1]; v9 <= i; ++v9 ) /*0x473656*/
        {
          v12 = v8; /*0x473660*/
          if ( !*v9 ) /*0x473662*/
            break; /*0x473668*/
          ++v8; /*0x47366a*/
          if ( *(_BYTE *)(*v9 + 464LL) ) /*0x47366c*/
            v8 = v12; /*0x473673*/
        }
      }
      v13 = GJAccountManager_sharedState(v9); /*0x47367f*/
      v14 = *(_DWORD *)(v13 + 360) - *(_DWORD *)(v13 + 364); /*0x47368a*/
      v15 = *(_QWORD *)&qword_905FB0; /*0x473690*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x47369a*/
      {
        v17 = operator new(0x690u); /*0x4736a6*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0x4736b4*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4736c5*/
        v15 = *(_QWORD *)&qword_905FB0; /*0x4736c7*/
      }
      v16 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v15 + 1232), v14); /*0x4736d8*/
      if ( v16 ) /*0x4736e1*/
      {
        if ( *((_DWORD *)v16 + 191) < v8 ) /*0x4736e9*/
          *((_DWORD *)v16 + 191) = v8; /*0x4736eb*/
      }
    }
    return sub_4722C0(v5); /*0x4736f4*/
  }
  return result; /*0x4736f9*/
}

// [10/12] Address: 0x473710
// Method: MessagesProfilePage::loadMessagesFailed
__int64 __fastcall MessagesProfilePage_loadMessagesFailed(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  const char *v7; // rdx
  __int64 v8; // rdx

  result = sub_472E10(a1 - 688, a2); /*0x47372c*/
  if ( (_BYTE)result ) /*0x473733*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 336LL))(*(_QWORD *)(a1 + 72), 0); /*0x47373e*/
    LOBYTE(v6) = 1; /*0x473748*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 112) + 336LL))(*(_QWORD *)(a1 + 112), v6); /*0x47374d*/
    v7 = "Nothing found"; /*0x473757*/
    if ( a3 != -2 ) /*0x47376b*/
      v7 = "Something went wrong"; /*0x47376d*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 56) + 360LL))(*(_QWORD *)(a1 + 56) + 360LL, v7); /*0x473774*/
    LOBYTE(v8) = 1; /*0x47377a*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), v8); /*0x47377f*/
    return sub_4722C0(a1 - 688); /*0x47378c*/
  }
  return result; /*0x473791*/
}

// [11/12] Address: 0x4737b0
// Method: MessagesProfilePage::forceReloadMessages
__int64 __fastcall MessagesProfilePage_forceReloadMessages(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 - 688; /*0x4737b0*/
  if ( *(_BYTE *)(v2 + 696) == a2 ) /*0x4737bd*/
    return sub_472FF0(v2, 0); /*0x4737c1*/
  return result; /*0x4737c6*/
}

// [12/12] Address: 0x4737d0
// Method: MessagesProfilePage::setupPageInfo
// Hidden C++ exception states: #wind=2
double __fastcall MessagesProfilePage_setupPageInfo(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // r8
  cocos2d::CCArray *v7; // rsi
  void *v8; // r8
  cocos2d::CCString *v9; // rax
  cocos2d::CCString *v10; // rax
  cocos2d::CCString *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __m128i si128; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int8)sub_472E10(a1 - 688, a3) ) /*0x4737fc*/
  {
    v5 = a2; /*0x473809*/
    if ( a2[3] > 0xFu ) /*0x473811*/
      v5 = (_QWORD *)*a2; /*0x473813*/
    *(_OWORD *)Block = 0; /*0x473819*/
    si128 = 0; /*0x473821*/
    v6 = -1; /*0x473827*/
    do /*0x473833*/
      ++v6; /*0x473830*/
    while ( *((_BYTE *)v5 + v6) ); /*0x473833*/
    sub_3C230(Block); /*0x47383f*/
    v7 = (cocos2d::CCArray *)sub_20BF00(Block); /*0x47384f*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x47385b*/
    {
      v8 = Block[0]; /*0x473860*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x47386f*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x473875*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x473884*/
          invoke_watson(0, 0, 0, 0, 0); /*0x473899*/
      }
      j_j_free(v8); /*0x4738a3*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x4738b0*/
    LOBYTE(Block[0]) = 0; /*0x4738b6*/
    if ( cocos2d::CCArray::count(v7) >= 3 ) /*0x4738c7*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(v7, 0); /*0x4738d2*/
      *(_DWORD *)(a1 + 136) = cocos2d::CCString::intValue(v9); /*0x4738e1*/
      v10 = cocos2d::CCArray::objectAtIndex(v7, 1u); /*0x4738ef*/
      *(_DWORD *)(a1 + 140) = cocos2d::CCString::intValue(v10); /*0x4738fe*/
      v11 = cocos2d::CCArray::objectAtIndex(v7, 2u); /*0x47390c*/
      *(_DWORD *)(a1 + 144) = cocos2d::CCString::intValue(v11); /*0x47391b*/
      if ( *(_DWORD *)(a1 + 140) ) /*0x473928*/
        LOBYTE(v12) = 1; /*0x473935*/
      else
        v12 = 0; /*0x473931*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), v12); /*0x473937*/
      if ( *(_DWORD *)(a1 + 144) + *(_DWORD *)(a1 + 140) < *(_DWORD *)(a1 + 136) ) /*0x473956*/
        LOBYTE(v13) = 1; /*0x47395c*/
      else
        v13 = 0; /*0x473958*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 336LL))(*(_QWORD *)(a1 + 96), v13); /*0x47395e*/
    }
  }
  return sub_3C310(a2); /*0x47396e*/
}
