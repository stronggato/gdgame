#include <Geode/binding/AccountLoginLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x8aea0
// Method: AccountLoginLayer::~AccountLoginLayer
// Hidden C++ exception states: #wind=1
char *__fastcall AccountLoginLayer__dtor_AccountLoginLayer(char *Block, char a2)
{
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &AccountLoginLayer::`vftable'; /*0x8aec0*/
  *((_QWORD *)Block + 40) = &AccountLoginLayer::`vftable'; /*0x8aeca*/
  *((_QWORD *)Block + 41) = &AccountLoginLayer::`vftable'; /*0x8aed8*/
  *((_QWORD *)Block + 42) = &AccountLoginLayer::`vftable'; /*0x8aee6*/
  *((_QWORD *)Block + 43) = &AccountLoginLayer::`vftable'; /*0x8aef4*/
  *((_QWORD *)Block + 44) = &AccountLoginLayer::`vftable'; /*0x8af02*/
  *((_QWORD *)Block + 51) = &AccountLoginLayer::`vftable'; /*0x8af10*/
  *((_QWORD *)Block + 54) = &AccountLoginLayer::`vftable'; /*0x8af1e*/
  *((_QWORD *)Block + 68) = &AccountLoginLayer::`vftable'; /*0x8af2c*/
  v4 = Block + 664; /*0x8af33*/
  *((_QWORD *)Block + 83) = &AccountLoginLayer::`vftable'; /*0x8af41*/
  *((_QWORD *)Block + 84) = &AccountLoginLayer::`vftable'; /*0x8af4b*/
  v5 = GJAccountManager_sharedState(Block); /*0x8af52*/
  if ( !Block ) /*0x8af5c*/
    v4 = 0; /*0x8af5c*/
  if ( *(char **)(v5 + 416) == v4 ) /*0x8af67*/
    *(_QWORD *)(GJAccountManager_sharedState(v6) + 416) = 0; /*0x8af6e*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 89); /*0x8af75*/
  if ( v7 ) /*0x8af7f*/
    cocos2d::CCObject::release(v7); /*0x8af81*/
  sub_3C310(Block + 752); /*0x8af8e*/
  sub_3C310(Block + 720); /*0x8af9a*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x8afa2*/
  if ( (a2 & 1) != 0 ) /*0x8afac*/
    j_j_free(Block); /*0x8afb6*/
  return Block; /*0x8afbe*/
}

// [2/13] Address: 0x8f7f0
// Method: AccountLoginLayer::create
// Hidden C++ exception states: #wind=2
_QWORD *__fastcall AccountLoginLayer_create(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _BYTE v5[32]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]

  v6 = a1; /*0x8f811*/
  v2 = operator new(0x310u); /*0x8f820*/
  FLAlertLayer_FLAlertLayer(v2); /*0x8f82b*/
  *v2 = &AccountLoginLayer::`vftable'; /*0x8f837*/
  v2[40] = &AccountLoginLayer::`vftable'; /*0x8f841*/
  v2[41] = &AccountLoginLayer::`vftable'; /*0x8f84f*/
  v2[42] = &AccountLoginLayer::`vftable'; /*0x8f85d*/
  v2[43] = &AccountLoginLayer::`vftable'; /*0x8f86b*/
  v2[44] = &AccountLoginLayer::`vftable'; /*0x8f879*/
  v2[51] = &AccountLoginLayer::`vftable'; /*0x8f887*/
  v2[54] = &AccountLoginLayer::`vftable'; /*0x8f895*/
  v2[68] = &AccountLoginLayer::`vftable'; /*0x8f8a3*/
  v2[83] = &AccountLoginLayer::`vftable'; /*0x8f8b1*/
  v2[84] = &AccountLoginLayer::`vftable'; /*0x8f8bf*/
  v2[85] = 0; /*0x8f8c8*/
  v2[86] = 0; /*0x8f8cf*/
  v2[87] = 0; /*0x8f8d6*/
  v2[88] = 0; /*0x8f8dd*/
  v2[89] = 0; /*0x8f8e4*/
  *((_OWORD *)v2 + 45) = 0; /*0x8f8ee*/
  v2[92] = 0; /*0x8f8f5*/
  v2[93] = 15; /*0x8f8fc*/
  *((_BYTE *)v2 + 720) = 0; /*0x8f907*/
  *((_OWORD *)v2 + 47) = 0; /*0x8f90e*/
  v2[96] = 0; /*0x8f915*/
  v2[97] = 15; /*0x8f91c*/
  *((_BYTE *)v2 + 752) = 0; /*0x8f927*/
  v3 = sub_3E4F0(v5, a1); /*0x8f936*/
  if ( (unsigned __int8)sub_8F990(v2, v3) ) /*0x8f941*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x8f94d*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x8f95d*/
    v2 = 0; /*0x8f960*/
  }
  sub_3C310(a1); /*0x8f966*/
  return v2; /*0x8f96e*/
}

// [3/13] Address: 0x90410
// Method: AccountLoginLayer::createTextLabel
struct cocos2d::CCLabelBMFont *__fastcall AccountLoginLayer_createTextLabel(
        __int64 a1,
        __int64 a2,
        const char *a3,
        float *a4)
{
  struct cocos2d::CCLabelBMFont *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+58h] [rbp+20h] BYREF

  v7 = cocos2d::CCLabelBMFont::create(a3, (const char *)&qword_6FFF68); /*0x90446*/
  v8 = *(_QWORD *)v7; /*0x90449*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, 0.0, 0.0); /*0x9044c*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v8 + 288))(v7, v9); /*0x90458*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, (float)-*a4 * 0.5, (float)(a4[1] * 0.5) + 1.0); /*0x9048b*/
  cocos2d::CCPoint::operator+(a2, &v12, v10); /*0x9049c*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, char *))(*(_QWORD *)v7 + 184LL))(v7, &v12); /*0x904ad*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v7 + 160LL))(v7); /*0x904c1*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x904d4*/
    *(_QWORD *)(a1 + 584),
    v7);
  return v7; /*0x904da*/
}

// [4/13] Address: 0x904f0
// Method: AccountLoginLayer::createTextInput
char *__fastcall AccountLoginLayer_createTextInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx

  v7 = CCTextInputNode_create((__int64)&qword_6FFF68, a2, a4); /*0x90543*/
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v7, 20); /*0x90553*/
  *((_DWORD *)v7 + 143) = 1061997773; /*0x90559*/
  sub_555B0(v7, v8); /*0x90563*/
  v9 = a1 + 544; /*0x9056c*/
  if ( !a1 ) /*0x90578*/
    v9 = 0; /*0x90578*/
  v10 = *(_QWORD *)v7; /*0x9057c*/
  *((_QWORD *)v7 + 76) = v9; /*0x9057f*/
  (*(void (__fastcall **)(char *, _QWORD))(v10 + 64))(v7, a5); /*0x90589*/
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 184LL))(v7, a2); /*0x90595*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 75) + 336LL))(*((_QWORD *)v7 + 75), 0); /*0x905a7*/
  *((_WORD *)v7 + 290) = -21896; /*0x905ad*/
  v7[582] = -16; /*0x905b9*/
  sub_555B0(v7, v11); /*0x905c0*/
  *((_DWORD *)v7 + 144) = 1056964608; /*0x905c8*/
  sub_555B0(v7, v12); /*0x905d2*/
  return v7; /*0x905d7*/
}

// [5/13] Address: 0x905f0
// Method: AccountLoginLayer::loginAccountFinished
// Hidden C++ exception states: #wind=4
__int64 __fastcall AccountLoginLayer_loginAccountFinished(__int64 a1, int a2, int a3)
{
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r8
  void **v14; // rdx
  cocos2d::CCString *v15; // rax
  const char *CString; // rsi
  __int64 v17; // rdx
  void *v18; // rax
  int v19; // r14d
  int v20; // eax
  __int64 v21; // rbx
  __int128 v23; // [rsp+60h] [rbp-19h] BYREF
  __int64 v24; // [rsp+70h] [rbp-9h]
  __int64 v25; // [rsp+78h] [rbp-1h]
  void *Block[2]; // [rsp+80h] [rbp+7h] BYREF
  __m128i si128; // [rsp+90h] [rbp+17h]

  v6 = sub_3E4F0(&v23, a1 + 88); /*0x90644*/
  v7 = sub_3E4F0(Block, a1 + 56); /*0x90654*/
  v9 = GJAccountManager_sharedState(v8); /*0x90657*/
  GJAccountManager_linkToAccount(v9, v7, v6, a2, a3); /*0x9066d*/
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 600LL) + 600LL; /*0x9067d*/
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10); /*0x90687*/
  *(_OWORD *)Block = 0; /*0x9068d*/
  si128 = 0; /*0x90694*/
  v12 = -1; /*0x90699*/
  v13 = -1; /*0x906a0*/
  do /*0x906a6*/
    ++v13; /*0x906a3*/
  while ( *(_BYTE *)(v11 + v13) ); /*0x906a6*/
  sub_3C230(Block); /*0x906b4*/
  v14 = Block; /*0x906ba*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x906c3*/
    v14 = (void **)Block[0]; /*0x906c3*/
  v15 = cocos2d::CCString::createWithFormat( /*0x906cf*/
          "Thank you for logging in.\nYou have now linked your account:\n<cg>%s</c>",
          (const char *)v14);
  CString = cocos2d::CCString::getCString(v15); /*0x906de*/
  v17 = si128.m128i_i64[1]; /*0x906e1*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x906e9*/
  {
    v18 = Block[0]; /*0x906ee*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x906fc*/
    {
      v18 = (void *)*((_QWORD *)Block[0] - 1); /*0x90702*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F ) /*0x90711*/
        invoke_watson(0, 0, 0, 0, 0); /*0x90722*/
    }
    j_j_free(v18); /*0x9072c*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x90739*/
  LOBYTE(Block[0]) = 0; /*0x9073e*/
  LOBYTE(v17) = 1; /*0x90749*/
  AccountLoginLayer_toggleUI(a1 - 664, v17); /*0x9074e*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 - 664 + 712) + 336LL))(*(_QWORD *)(a1 - 664 + 712), 0); /*0x9075f*/
  v19 = a1 + 8; /*0x90765*/
  if ( a1 == 664 ) /*0x9076c*/
    v19 = 0; /*0x9076c*/
  v23 = 0; /*0x90773*/
  v24 = 0; /*0x90777*/
  v25 = 0; /*0x9077b*/
  do /*0x90783*/
    ++v12; /*0x90780*/
  while ( CString[v12] ); /*0x90783*/
  sub_3C230(&v23); /*0x90793*/
  v20 = sub_3E4F0(Block, &v23); /*0x907a8*/
  v21 = FLAlertLayer_create_0( /*0x907f5*/
          v19,
          (unsigned int)"Login Success",
          v20,
          (unsigned int)"OK",
          0,
          1134559232,
          0,
          0,
          1065353216);
  sub_3C310(&v23); /*0x907fc*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 64LL))(v21, 2); /*0x90810*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 1064LL))(v21); /*0x90822*/
}

// [6/13] Address: 0x90850
// Method: AccountLoginLayer::loginAccountFailed
__int64 __fastcall AccountLoginLayer_loginAccountFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = a1 - 664; /*0x90856*/
  sub_90890(a1 - 664); /*0x90860*/
  LOBYTE(v2) = 1; /*0x90865*/
  AccountLoginLayer_toggleUI(v1, v2); /*0x9086a*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 712) + 336LL))(*(_QWORD *)(v1 + 712), 0);
}

// [7/13] Address: 0x909d0
// Method: AccountLoginLayer::resetLabel
__int64 __fastcall AccountLoginLayer_resetLabel(__int64 a1, int a2)
{
  int v3; // edx
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = a2 - 1; /*0x909d9*/
  if ( v3 ) /*0x909dc*/
  {
    if ( v3 != 1 ) /*0x909e1*/
      return result; /*0x909e1*/
    (**(void (__fastcall ***)(__int64, __int64 *))(*(_QWORD *)(a1 + 704) + 360LL))( /*0x909fb*/
      *(_QWORD *)(a1 + 704) + 360LL,
      &qword_711960);
    v4 = *(_QWORD *)(a1 + 704); /*0x909fd*/
  }
  else
  {
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 696) + 360LL))( /*0x90a1e*/
      *(_QWORD *)(a1 + 696) + 360LL,
      "Username:");
    v4 = *(_QWORD *)(a1 + 696); /*0x90a20*/
  }
  return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD04); /*0x90a40*/
}

// [8/13] Address: 0x90a50
// Method: AccountLoginLayer::FLAlert_Clicked
__int64 __fastcall AccountLoginLayer_FLAlert_Clicked(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _QWORD **v5; // rbx
  __int64 v6; // rdx

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x90a5f*/
  if ( (_DWORD)result == 2 ) /*0x90a65*/
  {
    v4 = *(_QWORD *)(a1 + 8); /*0x90a67*/
    v5 = (_QWORD **)(a1 - 672); /*0x90a6b*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 1032LL))(v4, 0); /*0x90a77*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5[86] + 1032LL))(v5[86], 0); /*0x90a89*/
    ((void (__fastcall *)(_QWORD **, _QWORD))(*v5)[124])(v5, 0); /*0x90a97*/
    LOBYTE(v6) = 1; /*0x90aa0*/
    return ((__int64 (__fastcall *)(_QWORD **, __int64))(*v5)[65])(v5, v6); /*0x90aaa*/
  }
  return result; /*0x90ab1*/
}

// [9/13] Address: 0x90ea0
// Method: AccountLoginLayer::onClose
__int64 __fastcall AccountLoginLayer_onClose(_QWORD **a1)
{
  __int64 v2; // rdx

  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[85] + 1032LL))(a1[85], 0); /*0x90eb5*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[86] + 1032LL))(a1[86], 0); /*0x90ec7*/
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[124])(a1, 0); /*0x90ed5*/
  LOBYTE(v2) = 1; /*0x90ede*/
  return ((__int64 (__fastcall *)(_QWORD **, __int64))(*a1)[65])(a1, v2);
}

// [10/13] Address: 0x90ef0
// Method: AccountLoginLayer::keyBackClicked
__int64 __fastcall AccountLoginLayer_keyBackClicked(__int64 a1)
{
  _QWORD **v1; // rbx
  __int64 v2; // rdx

  v1 = (_QWORD **)(a1 - 336); /*0x90ef6*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 - 336 + 680) + 1032LL))(*(_QWORD *)(a1 - 336 + 680), 0); /*0x90f09*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v1[86] + 1032LL))(v1[86], 0); /*0x90f1b*/
  ((void (__fastcall *)(_QWORD **, _QWORD))(*v1)[124])(v1, 0); /*0x90f29*/
  LOBYTE(v2) = 1; /*0x90f32*/
  return ((__int64 (__fastcall *)(_QWORD **, __int64))(*v1)[65])(v1, v2);
}

// [11/13] Address: 0x90f50
// Method: AccountLoginLayer::toggleUI
__int64 __fastcall AccountLoginLayer_toggleUI(_QWORD **a1, unsigned __int8 a2)
{
  (*(void (__fastcall **)(_QWORD *))(*a1[69] + 1040LL))(a1[69]); /*0x90f6a*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[85] + 920LL))(a1[85], a2); /*0x90f7d*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[86] + 920LL))(a1[86], a2); /*0x90f90*/
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[115])(a1, a2); /*0x90f9f*/
  return ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[124])(a1, a2);
}

// [12/13] Address: 0x90fc0
// Method: AccountLoginLayer::textInputClosed
// Hidden C++ exception states: #wind=1
void __fastcall AccountLoginLayer_textInputClosed(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  void *v9; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x90ff0*/
  *(_OWORD *)Block = 0; /*0x90ff6*/
  v11 = 0; /*0x90ffe*/
  v5 = -1; /*0x91004*/
  do /*0x91013*/
    ++v5; /*0x91010*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x91013*/
  sub_3C230(Block); /*0x91022*/
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x9102e*/
  AccountLoginLayer_resetLabel(a1 - 544, v6); /*0x9103a*/
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) - 1; /*0x91048*/
  if ( !v7 ) /*0x9104b*/
  {
    if ( (unsigned __int64)v11 >= 3 ) /*0x91083*/
      goto LABEL_10; /*0x91083*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 152) + 360LL))( /*0x9109d*/
      *(_QWORD *)(a1 + 152) + 360LL,
      "Too short. Minimum 3 characters");
    v8 = *(_QWORD *)(a1 + 152); /*0x9109f*/
    goto LABEL_9; /*0x9109f*/
  }
  if ( v7 == 1 && (unsigned __int64)v11 < 6 ) /*0x91058*/
  {
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 160) + 360LL))( /*0x91072*/
      *(_QWORD *)(a1 + 160) + 360LL,
      "Too short. Minimum 6 characters");
    v8 = *(_QWORD *)(a1 + 160); /*0x91074*/
LABEL_9:
    (**(void (__fastcall ***)(__int64, __int16 *))(v8 + 368))(v8 + 368, &word_6FDD00); /*0x910a6*/
  }
LABEL_10:
  if ( *((_QWORD *)&v11 + 1) > 0xFu ) /*0x910c3*/
  {
    v9 = Block[0]; /*0x910c8*/
    if ( (unsigned __int64)(*((_QWORD *)&v11 + 1) + 1LL) >= 0x1000 ) /*0x910d7*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x910dd*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x910ec*/
        invoke_watson(0, 0, 0, 0, 0); /*0x91101*/
    }
    j_j_free(v9); /*0x91108*/
  }
}

// [13/13] Address: 0x1572a0
// Method: AccountLoginLayer::init
// Hidden C++ exception states: #wind=9
__int64 __fastcall AccountLoginLayer_init(__int64 a1, cocos2d::CCObject *a2)
{
  cocos2d::CCObject *v2; // rbx
  int v4; // esi
  __int64 v5; // rdx
  cocos2d::CCObject *v6; // rcx
  __int64 v7; // r12
  float v8; // xmm10_4
  __int64 v9; // rax
  int v10; // r13d
  struct cocos2d::CCSprite *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  void **v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rdi
  void *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  void (__fastcall **v26)(__int64, char *); // rbx
  char *v27; // rax
  __int64 v28; // rcx
  char *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  char v35; // al
  const char *v36; // rcx
  const char *v37; // rdx
  cocos2d::CCLabelBMFont *v38; // rdi
  int v39; // edx
  float v40; // xmm6_4
  double v41; // xmm0_8
  float v42; // xmm9_4
  __int64 v43; // rax
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  float v51; // xmm7_4
  _QWORD *v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  float v56; // xmm6_4
  __int64 v57; // rdx
  void **v58; // rax
  int v59; // esi
  __int64 v60; // rax
  __int64 v61; // r15
  void *v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  bool v69; // si
  const char *v70; // rcx
  struct cocos2d::CCLabelBMFont *v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rax
  __int16 *v74; // rdx
  __int64 v75; // rbx
  __int64 v76; // rax
  float v77; // xmm6_4
  const char *v78; // rdx
  cocos2d::CCString *v79; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rbx
  __int64 v86; // rax
  struct cocos2d::CCSprite *v87; // rdi
  __int64 v88; // rbx
  __int64 v89; // rax
  unsigned int v90; // r13d
  int v91; // r15d
  cocos2d::CCString *v92; // rax
  const char *v93; // rax
  struct cocos2d::CCLabelBMFont *v94; // rsi
  __int64 v95; // rbx
  float v96; // xmm6_4
  float *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  int v101; // edx
  const char *v102; // r8
  cocos2d::CCString *v103; // rax
  const char *v104; // rax
  cocos2d::CCLabelBMFont *v105; // rbx
  float v106; // xmm6_4
  double v107; // xmm0_8
  __int64 *v108; // rsi
  __int64 v109; // rdi
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  struct cocos2d::CCSprite *v114; // rdi
  __int64 v115; // rdx
  void (__fastcall *v116)(char *, __int64); // r8
  __int64 v117; // rbx
  __int64 v118; // rax
  struct cocos2d::CCSprite *v119; // rdi
  struct cocos2d::CCSprite *v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rsi
  __int64 v124; // rbx
  __int64 v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  struct cocos2d::CCLabelBMFont *v129; // rbx
  __int64 v130; // rdx
  void (__fastcall *v131)(char *, __int64); // r8
  cocos2d::CCObject *v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rdi
  __int64 v135; // rbx
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  struct cocos2d::CCLayerColor *v139; // rdi
  float v140; // xmm7_4
  struct cocos2d::CCSprite *v141; // rbx
  __int64 v142; // rsi
  __int64 v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rdi
  __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  bool v151; // [rsp+30h] [rbp-D0h]
  int v152; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v153; // [rsp+38h] [rbp-C8h] BYREF
  char v154; // [rsp+3Ah] [rbp-C6h]
  __int128 *v155; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v156; // [rsp+48h] [rbp-B8h] BYREF
  char v157; // [rsp+4Ah] [rbp-B6h]
  float v158; // [rsp+50h] [rbp-B0h] BYREF
  float v159; // [rsp+54h] [rbp-ACh]
  void *v160; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v161[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v162[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v163; // [rsp+70h] [rbp-90h]
  _BYTE v164[32]; // [rsp+78h] [rbp-88h] BYREF
  void *Block[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v166; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v167; // [rsp+B0h] [rbp-50h]
  __int128 v168; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v169; // [rsp+C8h] [rbp-38h]
  _BYTE v170[32]; // [rsp+D8h] [rbp-28h] BYREF

  v2 = a2; /*0x1572ee*/
  v4 = 0; /*0x1572f7*/
  v152 = 0; /*0x1572fa*/
  LOBYTE(a2) = -1; /*0x157310*/
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 408LL) + 40LL))( /*0x157312*/
    *(_QWORD *)(a1 + 536) + 408LL,
    a2);
  cocos2d::CCObject::retain(v2); /*0x157318*/
  v6 = *(cocos2d::CCObject **)(a1 + 560); /*0x15731e*/
  if ( v6 ) /*0x157328*/
    cocos2d::CCObject::release(v6); /*0x15732a*/
  *(_QWORD *)(a1 + 560) = v2; /*0x157330*/
  LOBYTE(v5) = 1; /*0x157341*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), v5); /*0x157343*/
  v7 = cocos2d::CCMenu::create(); /*0x15734f*/
  v163 = v7; /*0x157352*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(*(_QWORD *)(a1 + 544), v7, 2); /*0x157371*/
  v8 = *(float *)(a1 + 532) * 0.5; /*0x157386*/
  v9 = *(_QWORD *)(a1 + 560); /*0x15738b*/
  v10 = *(_DWORD *)(v9 + 128); /*0x157392*/
  if ( *(_BYTE *)(v9 + 330) ) /*0x1573a2*/
  {
    v11 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_starsIcon_001.png"); /*0x1573b8*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v11 + 160LL))(v11); /*0x1573d0*/
    v12 = *(_QWORD *)v11; /*0x1573d2*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v160, 7.0, *(float *)(a1 + 532) - 7.0); /*0x1573ec*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v12 + 184))(v11, v13); /*0x1573f8*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x157411*/
      *(_QWORD *)(a1 + 544),
      v11,
      2);
  }
  v14 = *(_QWORD *)(a1 + 560); /*0x157417*/
  if ( *(_BYTE *)(v14 + 320) )
  {
    if ( *(_BYTE *)(v14 + 361) && *(int *)(v14 + 60) > 0 ) /*0x1575ed*/
    {
      v24 = SimplePlayer_create(1); /*0x1575fa*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 160LL))(v24); /*0x15760e*/
      v25 = qword_905FD0; /*0x157610*/
      if ( !qword_905FD0 ) /*0x15761a*/
      {
        v160 = operator new(0x6E8u); /*0x157626*/
        qword_905FD0 = sub_2723A0(v160); /*0x157634*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x157645*/
        v25 = qword_905FD0; /*0x157647*/
      }
      v26 = *(void (__fastcall ***)(__int64, char *))(v24 + 320); /*0x15764e*/
      v27 = GameManager_colorForIdx(v25, (char *)&v156, *(_DWORD *)(*(_QWORD *)(a1 + 560) + 368LL)); /*0x157668*/
      (*v26)(v24 + 320, v27); /*0x157677*/
      v28 = qword_905FD0; /*0x157679*/
      if ( !qword_905FD0 ) /*0x157683*/
      {
        v160 = operator new(0x6E8u); /*0x15768f*/
        qword_905FD0 = sub_2723A0(v160); /*0x15769d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1576ae*/
        v28 = qword_905FD0; /*0x1576b0*/
      }
      v29 = GameManager_colorForIdx(v28, (char *)&v153, *(_DWORD *)(*(_QWORD *)(a1 + 560) + 372LL)); /*0x1576ca*/
      (**(void (__fastcall ***)(__int64, char *))(*(_QWORD *)(v24 + 608) + 320LL))(*(_QWORD *)(v24 + 608) + 320LL, v29); /*0x1576e6*/
      SimplePlayer_updateColors(v24); /*0x1576ec*/
      SimplePlayer_tryEnableCustomGlowColor(v24, *(unsigned int *)(*(_QWORD *)(a1 + 560) + 376LL)); /*0x157701*/
      *(_BYTE *)(v24 + 660) = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 384LL) == 2; /*0x157717*/
      v30 = *(_QWORD *)(a1 + 560); /*0x15771e*/
      v31 = *(unsigned int *)(v30 + 364); /*0x157725*/
      if ( (int)v31 < 1 ) /*0x157734*/
        v31 = 1; /*0x157734*/
      SimplePlayer_updatePlayerFrame(v24, v31, *(unsigned int *)(v30 + 380)); /*0x157741*/
      SimplePlayer_updateColors(v24); /*0x157749*/
      v32 = *(_QWORD *)v24; /*0x15774e*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v160, 22.0, v8); /*0x15775d*/
      (*(void (__fastcall **)(__int64, __int64))(v32 + 184))(v24, v33); /*0x157769*/
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x15777f*/
        *(_QWORD *)(a1 + 544),
        v24,
        1);
    }
  }
  else
  {
    if ( *(_QWORD *)(v14 + 304) ) /*0x157438*/
    {
      v15 = (void **)sub_3E4F0(&v168, v14 + 288); /*0x15747e*/
      v4 = 2; /*0x157484*/
      v152 = 2; /*0x157489*/
    }
    else
    {
      *(_OWORD *)Block = 0; /*0x157444*/
      v166 = 2; /*0x157448*/
      v167 = 15; /*0x157450*/
      strcpy((char *)Block, "na"); /*0x15745f*/
      v15 = Block; /*0x157467*/
      v4 = 1; /*0x15746b*/
      v152 = 1; /*0x15746d*/
    }
    v16 = sub_7DE30(v15); /*0x157490*/
    if ( v16 ) /*0x157498*/
      v19 = (__int64 *)sub_7DF70(v16); /*0x1574a7*/
    else
      v19 = 0; /*0x15749a*/
    if ( (v4 & 2) != 0 ) /*0x1574ae*/
    {
      v4 &= ~2u; /*0x1574b0*/
      v152 = v4; /*0x1574b3*/
      sub_3C310(&v168); /*0x1574bb*/
    }
    if ( (v4 & 1) != 0 ) /*0x1574c5*/
    {
      v4 &= ~1u; /*0x1574c7*/
      v152 = v4; /*0x1574ca*/
      v17 = v167; /*0x1574ce*/
      if ( v167 > 0xF ) /*0x1574d6*/
      {
        v20 = Block[0]; /*0x1574db*/
        if ( v167 + 1 >= 0x1000 ) /*0x1574e9*/
        {
          v20 = (void *)*((_QWORD *)Block[0] - 1); /*0x1574ef*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v20 - 8) > 0x1F ) /*0x1574fe*/
            invoke_watson(0, 0, 0, 0, 0); /*0x15750f*/
        }
        j_j_free(v20); /*0x157516*/
      }
    }
    if ( v19
      || ((*(_OWORD *)Block = 0, v166 = 2, v167 = 15, strcpy((char *)Block, "na"), (v21 = sub_7DE30(Block)) != 0)
        ? (v19 = (__int64 *)sub_7DF70(v21))
        : (v19 = 0),
          sub_3C310(Block),
          v19) )
    {
      SetupSmartBlockLayer_onCreateAll(v18, v17); /*0x157576*/
      GJGroundLayer_scaleGround(v19); /*0x157599*/
      v22 = *v19; /*0x15759e*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v160, 22.0, v8); /*0x1575ad*/
      (*(void (__fastcall **)(__int64 *, __int64))(v22 + 184))(v19, v23); /*0x1575b9*/
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x1575d2*/
        *(_QWORD *)(a1 + 544),
        v19,
        1);
    }
  }
  v34 = *(_QWORD *)(a1 + 560); /*0x157788*/
  v35 = *(_BYTE *)(v34 + 320); /*0x15778f*/
  if ( v35 ) /*0x157798*/
    v36 = (const char *)(v34 + 64); /*0x15779a*/
  else
    v36 = (const char *)(v34 + 96); /*0x1577a0*/
  if ( *((_QWORD *)v36 + 3) > 0xFu ) /*0x1577a9*/
    v36 = *(const char **)v36; /*0x1577ab*/
  v37 = (const char *)&qword_6FFF68; /*0x1577b5*/
  if ( v35 ) /*0x1577be*/
    v37 = "goldFont.fnt"; /*0x1577be*/
  v38 = cocos2d::CCLabelBMFont::create(v36, v37); /*0x1577c8*/
  v39 = 120; /*0x1577d2*/
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 560) + 320LL) ) /*0x1577dc*/
    v39 = 150; /*0x1577e3*/
  cocos2d::CCLabelBMFont::limitLabelWidth(v38, (float)v39 - 26.0, 0.5, 0.2); /*0x157804*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v158, 38.0, v8); /*0x15781b*/
  v40 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v38 + 320LL))(v38); /*0x15782d*/
  v41 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v38 + 168LL))(v38); /*0x157837*/
  v42 = *(float *)&v41 * v40; /*0x157841*/
  v43 = *(_QWORD *)(a1 + 560); /*0x157846*/
  if ( *(_BYTE *)(v43 + 320) && *(int *)(v43 + 60) > 0 ) /*0x15785e*/
  {
    v44 = (__int64 *)CCMenuItemSpriteExtra_create(v38, 0, a1, sub_158610); /*0x157878*/
    sub_1571D0(v44); /*0x157886*/
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 464LL))(v7, v44); /*0x15789c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, v42 * 0.5, 0.0); /*0x1578b0*/
    cocos2d::CCPoint::operator+(&v158, &v160, v45); /*0x1578c3*/
    v46 = *v44; /*0x1578c9*/
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 544), v161, &v160); /*0x1578dd*/
    v48 = cocos2d::CCNode::convertToNodeSpace(v7, &v155, v47); /*0x1578ee*/
    (*(void (__fastcall **)(__int64 *, __int64))(v46 + 184))(v44, v48); /*0x1578fa*/
  }
  else
  {
    v49 = *(_QWORD *)v38; /*0x157902*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 0.0, 0.5); /*0x157911*/
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v49 + 288))(v38, v50); /*0x15791d*/
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, float *))(*(_QWORD *)v38 + 184LL))(v38, &v158); /*0x15792e*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x157947*/
      *(_QWORD *)(a1 + 544),
      v38,
      1);
  }
  v51 = (float)(v158 + v42) + 6.0; /*0x157961*/
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 560) + 320LL) ) /*0x15796d*/
  {
    v52 = (_QWORD *)sub_24BC40(); /*0x15797e*/
    v53 = v52; /*0x157983*/
    if ( v52 ) /*0x157989*/
    {
      v54 = *v52; /*0x15798b*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, v51, v159); /*0x15799c*/
      (*(void (__fastcall **)(_QWORD *, __int64))(v54 + 184))(v53, v55); /*0x1579a8*/
      (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x1579c1*/
        *(_QWORD *)(a1 + 544),
        v53,
        10);
      v56 = *(float *)(*(__int64 (__fastcall **)(_QWORD *))(*v53 + 320LL))(v53); /*0x1579d3*/
      v51 = v51 + (float)((float)((*(float (__fastcall **)(_QWORD *))(*v53 + 168LL))(v53) * v56) + 6.0); /*0x1579ec*/
    }
  }
  v57 = *(_QWORD *)(a1 + 560); /*0x1579f0*/
  if ( !*(_BYTE *)(v57 + 320) ) /*0x1579f7*/
  {
    v155 = &v168; /*0x157a08*/
    if ( *(_QWORD *)(v57 + 272) ) /*0x157a0d*/
    {
      v58 = (void **)sub_3E4F0(v170, v57 + 256); /*0x157a65*/
      v59 = v4 | 8; /*0x157a6b*/
    }
    else
    {
      v166 = 14; /*0x157a1c*/
      v167 = 15; /*0x157a24*/
      strcpy((char *)Block, "No description"); /*0x157a34*/
      HIBYTE(Block[1]) = 0; /*0x157a3f*/
      v58 = Block; /*0x157a51*/
      v59 = v4 | 4; /*0x157a55*/
    }
    v152 = v59; /*0x157a6e*/
    v168 = 0; /*0x157a75*/
    v169 = 0u; /*0x157a79*/
    v168 = *(_OWORD *)v58; /*0x157a84*/
    v169 = *((_OWORD *)v58 + 1); /*0x157a8c*/
    v58[2] = 0; /*0x157a90*/
    v58[3] = &loc_D + 2; /*0x157a94*/
    *(_BYTE *)v58 = 0; /*0x157a9c*/
    v60 = sub_3E4F0(v164, *(_QWORD *)(a1 + 560) + 96LL); /*0x157aaf*/
    v61 = InfoAlertButton_create(v60, &v168); /*0x157ac9*/
    if ( (v59 & 8) != 0 ) /*0x157ad0*/
    {
      LOBYTE(v59) = v59 & 0xF7; /*0x157ad2*/
      sub_3C310(v170); /*0x157ad9*/
    }
    if ( (v59 & 4) != 0 && v167 > 0xF ) /*0x157aed*/
    {
      v62 = Block[0]; /*0x157af2*/
      if ( v167 + 1 >= 0x1000 ) /*0x157b00*/
      {
        v62 = (void *)*((_QWORD *)Block[0] - 1); /*0x157b06*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v62 - 8) > 0x1F ) /*0x157b15*/
          invoke_watson(0, 0, 0, 0, 0); /*0x157b2a*/
      }
      j_j_free(v62); /*0x157b31*/
    }
    *(_DWORD *)(v61 + 372) = 1069547520; /*0x157b36*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 464LL))(v7, v61); /*0x157b4b*/
    v63 = *(_QWORD *)v61; /*0x157b51*/
    v64 = *(_QWORD *)(a1 + 544); /*0x157b54*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, v51 + 7.0, v8); /*0x157b6c*/
    cocos2d::CCNode::convertToWorldSpace(v64, v161, v65); /*0x157b7d*/
    v67 = cocos2d::CCNode::convertToNodeSpace(v7, v162, v66); /*0x157b8e*/
    (*(void (__fastcall **)(__int64, __int64))(v63 + 184))(v61, v67); /*0x157b9a*/
    v51 = v51 + 20.0; /*0x157ba0*/
  }
  v68 = *(_QWORD *)(a1 + 560); /*0x157ba8*/
  v69 = !*(_BYTE *)(v68 + 320) && *(_DWORD *)(v68 + 324) == 8; /*0x157bc6*/
  v151 = v69; /*0x157bc9*/
  if ( *(_BYTE *)(v68 + 321) || v69 ) /*0x157bda*/
  {
    v70 = "pending"; /*0x157be7*/
    if ( v69 ) /*0x157bf1*/
      v70 = "removed"; /*0x157bf1*/
    v71 = cocos2d::CCLabelBMFont::create(v70, "chatFont.fnt"); /*0x157c02*/
    v72 = *(_QWORD *)v71; /*0x157c05*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 0.0, 0.5); /*0x157c14*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v72 + 288))(v71, v73); /*0x157c20*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v71 + 160LL))(v71); /*0x157c3b*/
    if ( v69 ) /*0x157c40*/
    {
      v153 = 23295; /*0x157c4e*/
      v154 = 90; /*0x157c53*/
      v74 = &v153; /*0x157c58*/
    }
    else
    {
      v153 = -14081; /*0x157c5f*/
      v156 = -14081; /*0x157c6b*/
      v157 = 80; /*0x157c70*/
      v74 = &v156; /*0x157c75*/
    }
    (**((void (__fastcall ***)(__int64, __int16 *))v71 + 46))((__int64)v71 + 368, v74); /*0x157c84*/
    v75 = *(_QWORD *)v71; /*0x157c86*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, v51, v159); /*0x157c97*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v75 + 184))(v71, v76); /*0x157ca3*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x157cbc*/
      *(_QWORD *)(a1 + 544),
      v71,
      10);
    v77 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v71 + 320LL))(v71); /*0x157cce*/
    v51 = v51 /*0x157ce7*/
        + (float)((float)((*(float (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v71 + 168LL))(v71) * v77)
                + 6.0);
  }
  v78 = (const char *)(*(_QWORD *)(a1 + 560) + 168LL); /*0x157cf2*/
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 560) + 192LL) > 0xFu ) /*0x157cfe*/
    v78 = *(const char **)v78; /*0x157d00*/
  v79 = cocos2d::CCString::createWithFormat("%s ago", v78); /*0x157d0a*/
  CString = cocos2d::CCString::getCString(v79); /*0x157d13*/
  v81 = cocos2d::CCLabelBMFont::create(CString, "chatFont.fnt"); /*0x157d29*/
  v82 = *(_QWORD *)v81; /*0x157d2c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 0.0, 0.5); /*0x157d3b*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v82 + 288))(v81, v83); /*0x157d47*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v81 + 160LL))(v81); /*0x157d5e*/
  (**((void (__fastcall ***)(__int64, __int16 *))v81 + 46))((__int64)v81 + 368, &word_6FDF60); /*0x157d75*/
  LOBYTE(v84) = -106; /*0x157d7e*/
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v81 + 46) + 40LL))((__int64)v81 + 368, v84); /*0x157d87*/
  v85 = *(_QWORD *)v81; /*0x157d8a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, v51, v159); /*0x157d9b*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v85 + 184))(v81, v86); /*0x157da7*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x157dc3*/
    *(_QWORD *)(a1 + 544),
    v81,
    1);
  if ( v10 > 0 ) /*0x157dd5*/
  {
    v87 = cocos2d::CCSprite::createWithSpriteFrameName("d_ball_01_001.png"); /*0x157de8*/
    (**((void (__fastcall ***)(__int64, void *))v87 + 40))((__int64)v87 + 320, &unk_6FDF64); /*0x157dff*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v87 + 160LL))(v87); /*0x157e17*/
    v88 = *(_QWORD *)v87; /*0x157e19*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 33.0, v8 + 12.0); /*0x157e35*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v88 + 184))(v87, v89); /*0x157e41*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x157e5a*/
      *(_QWORD *)(a1 + 544),
      v87,
      10);
    v90 = 99; /*0x157e6d*/
    if ( *(int *)(*(_QWORD *)(a1 + 560) + 128LL) < 99 ) /*0x157e76*/
      v90 = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 128LL); /*0x157e76*/
    v91 = 0; /*0x157e7a*/
    while ( 1 ) /*0x157e9a*/
    {
      v92 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v90); /*0x157e9a*/
      v93 = cocos2d::CCString::getCString(v92); /*0x157ea3*/
      v94 = cocos2d::CCLabelBMFont::create(v93, "chatFont.fnt"); /*0x157eb9*/
      (**((void (__fastcall ***)(__int64, __int16 *))v94 + 46))((__int64)v94 + 368, &word_6FDF60); /*0x157ed4*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v94 + 160LL))(v94); /*0x157eed*/
      v95 = *(_QWORD *)v94; /*0x157ef3*/
      v96 = (float)((float)(*(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v87 + 320LL))(v87) /*0x157f19*/
                                     + 4)
                          * 0.5)
                  + 2.0)
          - (float)v91;
      v97 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v87 + 320LL))(v87); /*0x157f23*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, (float)(*v97 * 0.5) + (float)v91, v96); /*0x157f3e*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v95 + 184))(v94, v98); /*0x157f4a*/
      if ( v91 == 1 ) /*0x157f54*/
        break; /*0x157f54*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v87 + 464LL))( /*0x157f5f*/
        v87,
        v94);
      if ( ++v91 >= 2 ) /*0x157f6c*/
        goto LABEL_86; /*0x157f6c*/
    }
    LOBYTE(v99) = 125; /*0x157f7b*/
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v94 + 46) + 40LL))((__int64)v94 + 368, v99); /*0x157f84*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v87 + 464LL))( /*0x157f90*/
      v87,
      v94);
LABEL_86:
    v69 = v151; /*0x157f96*/
    v7 = v163; /*0x157fa1*/
  }
  v100 = *(_QWORD *)(a1 + 560); /*0x157fa6*/
  if ( !*(_BYTE *)(v100 + 320) && !v69 ) /*0x157fbd*/
  {
    v101 = *(_DWORD *)(v100 + 200); /*0x157fc3*/
    v102 = (const char *)&unk_70802C; /*0x157fd0*/
    if ( v101 == 1 ) /*0x157fda*/
      v102 = &byte_6E86E0; /*0x157fda*/
    v103 = cocos2d::CCString::createWithFormat("%i member%s", v101, v102); /*0x157fe5*/
    v104 = cocos2d::CCString::getCString(v103); /*0x157fee*/
    v105 = cocos2d::CCLabelBMFont::create(v104, "goldFont.fnt"); /*0x158004*/
    cocos2d::CCLabelBMFont::limitLabelWidth(v105, 70.0, 0.40000001, 0.2); /*0x158022*/
    v106 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v105 + 320LL))(v105); /*0x158037*/
    v107 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v105 + 168LL))(v105); /*0x158048*/
    v108 = (__int64 *)CCMenuItemSpriteExtra_create(v105, 0, a1, sub_158650); /*0x158065*/
    sub_1571D0(v108); /*0x158073*/
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 464LL))(v7, v108); /*0x158089*/
    v109 = *v108; /*0x15808c*/
    v110 = *(_QWORD *)(a1 + 544); /*0x15808f*/
    cocos2d::CCPoint::CCPoint( /*0x1580b9*/
      (cocos2d::CCPoint *)&v155,
      (float)(*(float *)(a1 + 528) - 62.0) - (float)((float)(*(float *)&v107 * v106) * 0.5),
      v8);
    cocos2d::CCNode::convertToWorldSpace(v110, v161, v111); /*0x1580ca*/
    v113 = cocos2d::CCNode::convertToNodeSpace(v7, v162, v112); /*0x1580db*/
    (*(void (__fastcall **)(__int64 *, __int64))(v109 + 184))(v108, v113); /*0x1580e7*/
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 560) + 244LL) ) /*0x1580fc*/
  {
    v114 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_musicOffBtn_001.png"); /*0x158116*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v114 + 160LL))(v114); /*0x15812e*/
    v115 = *((_QWORD *)v114 + 40); /*0x158137*/
    v116 = *(void (__fastcall **)(char *, __int64))(v115 + 40); /*0x15813a*/
    LOBYTE(v115) = -116; /*0x15813e*/
    v116((char *)v114 + 320, v115); /*0x158140*/
    v117 = *(_QWORD *)v114; /*0x158143*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, *(float *)(a1 + 528) - 46.0, v8 + 10.0); /*0x158164*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v117 + 184))(v114, v118); /*0x158170*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x158186*/
      *(_QWORD *)(a1 + 544),
      v114,
      1);
  }
  v119 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"); /*0x158199*/
  v120 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"); /*0x1581a9*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v119 + 160LL))(v119); /*0x1581c4*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v120 + 160LL))(v120); /*0x1581d6*/
  v121 = CCMenuItemToggler_create(v120, v119, a1, sub_158690); /*0x1581e8*/
  *(_QWORD *)(a1 + 568) = v121; /*0x1581ed*/
  CCMenuItemToggler_toggle(v121, *(unsigned __int8 *)(*(_QWORD *)(a1 + 560) + 360LL)); /*0x158205*/
  *(_BYTE *)(*(_QWORD *)(a1 + 568) + 393LL) = 1; /*0x158211*/
  v122 = *(_QWORD *)(a1 + 568); /*0x158218*/
  *(_DWORD *)(*(_QWORD *)(v122 + 376) + 372LL) = 1067869798; /*0x158226*/
  *(_DWORD *)(*(_QWORD *)(v122 + 384) + 372LL) = 1067869798; /*0x158237*/
  CCMenuItemToggler_toggle(v122, *(unsigned __int8 *)(v122 + 392)); /*0x158248*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 464LL))(v7, *(_QWORD *)(a1 + 568)); /*0x15825b*/
  v123 = **(_QWORD **)(a1 + 568); /*0x158268*/
  v124 = *(_QWORD *)(a1 + 544); /*0x15826b*/
  v125 = *(_QWORD *)(a1 + 568); /*0x158272*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, *(float *)(a1 + 528) - 22.0, *(float *)(a1 + 532) * 0.5); /*0x158299*/
  cocos2d::CCNode::convertToWorldSpace(v124, v161, v126); /*0x1582aa*/
  v128 = cocos2d::CCNode::convertToNodeSpace(v7, v162, v127); /*0x1582bb*/
  (*(void (__fastcall **)(__int64, __int64))(v123 + 184))(v125, v128); /*0x1582c7*/
  v129 = cocos2d::CCLabelBMFont::create("...", (const char *)&qword_6FFF68); /*0x1582e1*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v129 + 160LL))(v129); /*0x1582f9*/
  v130 = *((_QWORD *)v129 + 46); /*0x158302*/
  v131 = *(void (__fastcall **)(char *, __int64))(v130 + 40); /*0x158305*/
  LOBYTE(v130) = 120; /*0x158309*/
  v131((char *)v129 + 368, v130); /*0x15830b*/
  v155 = (__int128 *)operator new(0x208u); /*0x158318*/
  v132 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v155); /*0x158325*/
  if ( !v132 ) /*0x15832b*/
    goto LABEL_98; /*0x15832b*/
  if ( !(unsigned __int8)sub_47940((_DWORD)v132, (_DWORD)v129, 0, a1, (__int64)sub_158700) ) /*0x15834f*/
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v132 + 8LL))(v132, 1); /*0x15835f*/
LABEL_98:
    v132 = 0; /*0x158362*/
    goto LABEL_99; /*0x158362*/
  }
  cocos2d::CCObject::autorelease(v132); /*0x158351*/
LABEL_99:
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v155, 36.0, 34.0); /*0x158364*/
  sub_157110(v132, v133); /*0x158385*/
  *((_DWORD *)v132 + 93) = 1065353216; /*0x15838a*/
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v7 + 464LL))(v7, v132); /*0x15839e*/
  v134 = *(_QWORD *)v132; /*0x1583a4*/
  v135 = *(_QWORD *)(a1 + 544); /*0x1583a7*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, *(float *)(a1 + 528) - 46.0, v8 + 2.0); /*0x1583c9*/
  cocos2d::CCNode::convertToWorldSpace(v135, v161, v136); /*0x1583da*/
  v138 = cocos2d::CCNode::convertToNodeSpace(v7, v162, v137); /*0x1583eb*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v134 + 184))(v132, v138); /*0x1583f7*/
  v152 = 1015209215; /*0x158409*/
  v139 = cocos2d::CCLayerColor::create( /*0x15842a*/
           (const struct cocos2d::_ccColor4B *)&v152,
           *(float *)(a1 + 528),
           *(float *)(a1 + 532));
  (*(void (__fastcall **)(struct cocos2d::CCLayerColor *, void *))(*(_QWORD *)v139 + 184LL))(v139, &unk_9043E8); /*0x158441*/
  (*(void (__fastcall **)(struct cocos2d::CCLayerColor *, _QWORD))(*(_QWORD *)v139 + 336LL))(v139, 0); /*0x158453*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLayerColor *, _QWORD))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x15846d*/
    *(_QWORD *)(a1 + 544),
    v139,
    0);
  v140 = *(float *)(a1 + 528) - 44.0; /*0x158479*/
  v141 = cocos2d::CCSprite::createWithSpriteFrameName("whiteSquare60_001.png"); /*0x15848e*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v141 + 120LL))(v141); /*0x1584a6*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v141 + 136LL))(v141); /*0x1584c6*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v141 + 336LL))(v141, 0); /*0x1584d0*/
  v142 = SetupKeyframePopup_create(v141, a1, sub_1585E0); /*0x1584e8*/
  *(_QWORD *)(v142 + 520) = v139; /*0x1584eb*/
  *(_BYTE *)(v142 + 408) = 0; /*0x1584f2*/
  *(_DWORD *)(v142 + 372) = 1065353216; /*0x1584f9*/
  v143 = *(_QWORD *)v142; /*0x158503*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v155, v140, *(float *)(a1 + 532)); /*0x158517*/
  (*(void (__fastcall **)(__int64, __int64))(v143 + 312))(v142, v144); /*0x158523*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 464LL))(v7, v142); /*0x15853a*/
  v145 = *(_QWORD *)v142; /*0x15853c*/
  v146 = *(_QWORD *)(a1 + 544); /*0x15853f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, v140 * 0.5, *(float *)(a1 + 532) * 0.5); /*0x158561*/
  cocos2d::CCNode::convertToWorldSpace(v146, v161, v147); /*0x158572*/
  v149 = cocos2d::CCNode::convertToNodeSpace(v7, v162, v148); /*0x158583*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(v145 + 184))(v142, v149); /*0x158595*/
}
