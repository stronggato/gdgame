#include <Geode/binding/ProfilePage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/33] Address: 0xa6790
// Method: ProfilePage::updatePageArrows
__int64 __fastcall ProfilePage_updatePageArrows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  LOBYTE(a2) = *(_DWORD *)(a1 + 904) > 0; /*0xa67aa*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 960) + 336LL))(*(_QWORD *)(a1 + 960), a2); /*0xa67ad*/
  LOBYTE(v3) = *(_DWORD *)(a1 + 904) < 1; /*0xa67c1*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 968) + 336LL))(*(_QWORD *)(a1 + 968), v3); /*0xa67c7*/
  return sub_A67E0(a1); /*0xa67d0*/
}

// [3/33] Address: 0xcc7b0
// Method: ProfilePage::onInfo
// Hidden C++ exception states: #wind=5
void __fastcall ProfilePage_onInfo(__int64 *a1)
{
  int v2; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  int v5; // ebx
  void *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  const char *v11; // r8
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r12d
  void **v19; // r14
  char *v20; // rsi
  unsigned __int64 v21; // r15
  __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  cocos2d::CCObject *v24; // rbx
  int v25; // eax
  char *v26; // rax
  __int128 v27; // [rsp+50h] [rbp-69h] BYREF
  __int64 v28; // [rsp+60h] [rbp-59h]
  __int64 v29; // [rsp+68h] [rbp-51h]
  void **v30; // [rsp+70h] [rbp-49h]
  __int128 *v31; // [rsp+78h] [rbp-41h]
  char v32[32]; // [rsp+80h] [rbp-39h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp-19h] BYREF
  unsigned __int64 v34; // [rsp+B0h] [rbp-9h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-1h]
  _QWORD Src[2]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+17h]
  unsigned __int64 v38; // [rsp+D8h] [rbp+1Fh]

  v2 = sub_9BFB0(); /*0xcc7f1*/
  *(_OWORD *)Block = 0; /*0xcc7f6*/
  v34 = 0; /*0xcc7fa*/
  v35 = 15; /*0xcc7fe*/
  LOBYTE(Block[0]) = 0; /*0xcc806*/
  sub_9C250(Src); /*0xcc80e*/
  LODWORD(v30) = 1; /*0xcc813*/
  if ( v37 ) /*0xcc821*/
  {
    v3 = Src; /*0xcc823*/
    if ( v38 > 0xF ) /*0xcc833*/
      v3 = (_QWORD *)Src[0]; /*0xcc833*/
    if ( *((_BYTE *)v3 + v37 - 1) != 47 ) /*0xcc83c*/
    {
      v4 = Src; /*0xcc83e*/
      if ( v38 > 0xF ) /*0xcc846*/
        v4 = (_QWORD *)Src[0]; /*0xcc846*/
      if ( *((_BYTE *)v4 + v37 - 1) != 92 ) /*0xcc84f*/
        sub_43D80(Src, "/", 1u); /*0xcc862*/
    }
  }
  v5 = sub_CB940(Src); /*0xcc879*/
  sub_3C310(Src); /*0xcc87f*/
  if ( v35 > 0xF ) /*0xcc88d*/
  {
    v6 = Block[0]; /*0xcc892*/
    if ( v35 + 1 >= 0x1000 ) /*0xcc8a0*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0xcc8a6*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0xcc8b5*/
        invoke_watson(0, 0, 0, 0, 0); /*0xcc8c6*/
    }
    j_j_free(v6); /*0xcc8d0*/
  }
  if ( v5 ) /*0xcc8d7*/
  {
    v11 = (const char *)&unk_70802C; /*0xcc97b*/
    if ( v5 == 1 ) /*0xcc985*/
      v11 = &byte_6E86E0; /*0xcc985*/
    v12 = cocos2d::CCString::createWithFormat( /*0xcc995*/
            "Delete <cy>%i</c> old backup%s?\n<cy>Keeps the newest %i for each level.</c>",
            v5,
            v11,
            v2);
    CString = cocos2d::CCString::getCString(v12); /*0xcc99e*/
    *(_OWORD *)Block = 0; /*0xcc9a7*/
    v34 = 0; /*0xcc9ab*/
    v35 = 0; /*0xcc9af*/
    v14 = -1; /*0xcc9b3*/
    do /*0xcc9c3*/
      ++v14; /*0xcc9c0*/
    while ( CString[v14] ); /*0xcc9c3*/
    sub_3C230(Block); /*0xcc9d1*/
    v18 = (_DWORD)a1 + 1000; /*0xcc9d7*/
    if ( !a1 ) /*0xcc9e1*/
      v18 = 0; /*0xcc9e1*/
    v27 = 0; /*0xcc9e8*/
    v28 = 0; /*0xcc9ec*/
    v29 = 0; /*0xcc9f0*/
    v19 = Block; /*0xcc9f4*/
    v20 = (char *)Block[0]; /*0xcc9f8*/
    v21 = v35; /*0xcc9fc*/
    if ( v35 > 0xF ) /*0xcca04*/
      v19 = (void **)Block[0]; /*0xcca04*/
    v22 = 0x7FFFFFFFFFFFFFFFLL; /*0xcca08*/
    v23 = v34; /*0xcca12*/
    if ( v34 > 0x7FFFFFFFFFFFFFFFLL ) /*0xcca19*/
      sub_8D90(v16, v15, v17); /*0xccbbf*/
    if ( v34 > 0xF ) /*0xcca23*/
    {
      if ( (v34 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xcca45*/
      {
        v22 = v34 | 0xF; /*0xcca47*/
        if ( (v34 | 0xF) < 0x16 ) /*0xcca52*/
          v22 = 22; /*0xcca52*/
      }
      *(_QWORD *)&v27 = sub_3C460(v22 + 1); /*0xcca5f*/
      v28 = v23; /*0xcca63*/
      v29 = v22; /*0xcca67*/
      memcpy((void *)v27, v19, v23 + 1); /*0xcca75*/
    }
    else
    {
      v28 = v34; /*0xcca25*/
      v29 = 15; /*0xcca29*/
      v27 = *(_OWORD *)v19; /*0xcca35*/
    }
    v31 = &v27; /*0xcca7e*/
    v30 = (void **)operator new(0x298u); /*0xcca8c*/
    v24 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer(v30); /*0xcca98*/
    if ( v24 ) /*0xcca9e*/
    {
      v25 = sub_3E4F0(v32, &v27); /*0xccaac*/
      if ( (unsigned __int8)GJRateLevelLayer_init( /*0xccb03*/
                              (_DWORD)v24,
                              v18,
                              (unsigned int)"Prune Backups",
                              v25,
                              (__int64)"Back",
                              (__int64)"Prune",
                              1136525312,
                              0,
                              0,
                              1065353216) )
      {
        cocos2d::CCObject::autorelease(v24); /*0xccb0f*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v24 + 8LL))(v24, 1); /*0xccb1f*/
        v24 = 0; /*0xccb22*/
      }
    }
    sub_3C310(&v27); /*0xccb29*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v24 + 64LL))(v24, 1); /*0xccb39*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v24 + 1064LL))(v24); /*0xccb42*/
    if ( v21 > 0xF ) /*0xccb4d*/
    {
      v26 = v20; /*0xccb53*/
      if ( v21 + 1 >= 0x1000 ) /*0xccb5d*/
      {
        v20 = (char *)*((_QWORD *)v20 - 1); /*0xccb63*/
        if ( (unsigned __int64)(v26 - v20 - 8) > 0x1F ) /*0xccb72*/
          invoke_watson(0, 0, 0, 0, 0); /*0xccb83*/
      }
      j_j_free(v20); /*0xccb8d*/
    }
  }
  else
  {
    v30 = Block; /*0xcc8e1*/
    *(_OWORD *)Block = 0; /*0xcc8e8*/
    v34 = 0; /*0xcc8ec*/
    v35 = 15; /*0xcc8f0*/
    LOBYTE(Block[0]) = 0; /*0xcc8f8*/
    v27 = 0; /*0xcc8fb*/
    *(_QWORD *)&v27 = sub_3C460(32); /*0xcc911*/
    v28 = 16; /*0xcc915*/
    v29 = 31; /*0xcc91d*/
    strcpy((char *)v27, "Nothing to prune"); /*0xcc92c*/
    v7 = *a1; /*0xcc932*/
    v10 = sub_3A4CA0(&v27, v8, v9, 150, Block); /*0xcc958*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v7 + 456))(a1, v10, 100); /*0xcc969*/
  }
}

// [4/33] Address: 0x27b780
// Method: ProfilePage::showNoAccountError
// Hidden C++ exception states: #wind=1
__int64 ProfilePage_showNoAccountError()
{
  int v0; // eax
  __int64 v1; // rbx
  __int128 v3; // [rsp+50h] [rbp-48h] BYREF
  __int64 v4; // [rsp+60h] [rbp-38h]
  __int64 v5; // [rsp+68h] [rbp-30h]
  _BYTE v6[40]; // [rsp+70h] [rbp-28h] BYREF

  v3 = 0; /*0x27b790*/
  *(_QWORD *)&v3 = sub_3C460(64); /*0x27b7ae*/
  v4 = 54; /*0x27b7b3*/
  v5 = 63; /*0x27b7bc*/
  strcpy((char *)v3, "This feature is disabled by <cy>Parental Controls</c>."); /*0x27b7cc*/
  v0 = sub_3E4F0(v6, &v3); /*0x27b813*/
  v1 = FLAlertLayer_create_0(0, (unsigned int)"Restricted", v0, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x27b85e*/
  sub_3C310(&v3); /*0x27b866*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 1064LL))(v1); /*0x27b87a*/
}

// [6/33] Address: 0x54b7c0
// Method: ProfilePage::~ProfilePage
__int64 __fastcall ProfilePage__dtor_ProfilePage(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  _QWORD *v6; // rbp
  _QWORD *v7; // r12
  __int64 v8; // rax
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  cocos2d::CCObject *v12; // rcx
  _QWORD *v13; // rax
  void *v14; // rax

  *a1 = &ProfilePage::`vftable'; /*0x54b7e6*/
  a1[40] = &ProfilePage::`vftable'; /*0x54b7f0*/
  a1[41] = &ProfilePage::`vftable'; /*0x54b7fe*/
  a1[42] = &ProfilePage::`vftable'; /*0x54b80c*/
  a1[43] = &ProfilePage::`vftable'; /*0x54b81a*/
  a1[44] = &ProfilePage::`vftable'; /*0x54b828*/
  a1[51] = &ProfilePage::`vftable'; /*0x54b836*/
  a1[54] = &ProfilePage::`vftable'; /*0x54b844*/
  a1[68] = &ProfilePage::`vftable'; /*0x54b852*/
  a1[83] = &ProfilePage::`vftable'; /*0x54b860*/
  v2 = a1 + 84; /*0x54b867*/
  a1[84] = &ProfilePage::`vftable'; /*0x54b875*/
  v3 = a1 + 85; /*0x54b878*/
  a1[85] = &ProfilePage::`vftable'; /*0x54b886*/
  v4 = a1 + 86; /*0x54b889*/
  a1[86] = &ProfilePage::`vftable'; /*0x54b897*/
  v5 = a1 + 87; /*0x54b89a*/
  a1[87] = &ProfilePage::`vftable'; /*0x54b8a8*/
  a1[88] = &ProfilePage::`vftable'; /*0x54b8b2*/
  v6 = a1 + 89; /*0x54b8b9*/
  a1[89] = &ProfilePage::`vftable'; /*0x54b8c7*/
  v7 = a1 + 90; /*0x54b8cb*/
  a1[90] = &ProfilePage::`vftable'; /*0x54b8d9*/
  v8 = a1[110]; /*0x54b8dd*/
  if ( v8 ) /*0x54b8ea*/
    *(_QWORD *)(v8 + 664) = 0; /*0x54b8ec*/
  v9 = (cocos2d::CCObject *)a1[105]; /*0x54b8f3*/
  if ( v9 ) /*0x54b8fd*/
    cocos2d::CCObject::release(v9); /*0x54b8ff*/
  v10 = (cocos2d::CCObject *)a1[91]; /*0x54b905*/
  if ( v10 ) /*0x54b90f*/
    cocos2d::CCObject::release(v10); /*0x54b911*/
  v11 = (cocos2d::CCObject *)a1[106]; /*0x54b917*/
  if ( v11 ) /*0x54b921*/
    cocos2d::CCObject::release(v11); /*0x54b923*/
  v12 = (cocos2d::CCObject *)a1[109]; /*0x54b929*/
  if ( v12 ) /*0x54b933*/
    cocos2d::CCObject::release(v12); /*0x54b935*/
  v13 = *(_QWORD **)&qword_905FB0; /*0x54b93b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x54b945*/
  {
    v14 = operator new(0x690u); /*0x54b94c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x54b959*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54b96a*/
    v13 = *(_QWORD **)&qword_905FB0; /*0x54b96c*/
  }
  if ( (_QWORD *)v13[171] == v2 ) /*0x54b97a*/
    v13[171] = 0; /*0x54b97c*/
  if ( (_QWORD *)v13[172] == v3 ) /*0x54b98a*/
    v13[172] = 0; /*0x54b98c*/
  if ( (_QWORD *)v13[186] == v5 ) /*0x54b99a*/
    v13[186] = 0; /*0x54b99c*/
  if ( (_QWORD *)v13[185] == v4 ) /*0x54b9aa*/
    v13[185] = 0; /*0x54b9ac*/
  if ( (_QWORD *)v13[178] == v6 ) /*0x54b9ba*/
    v13[178] = 0; /*0x54b9bc*/
  if ( (_QWORD *)v13[67] == v7 ) /*0x54b9ca*/
    v13[67] = 0; /*0x54b9cc*/
  sub_3C310(a1 + 93); /*0x54b9da*/
  return StarInfoPopup__dtor_StarInfoPopup(a1); /*0x54b9e2*/
}

// [7/33] Address: 0x54ba10
// Method: ProfilePage::create
// Hidden C++ exception states: #wind=1
char *__fastcall ProfilePage_create(unsigned int a1, unsigned __int8 a2)
{
  char *v4; // rsi

  v4 = (char *)operator new(0x388u); /*0x54ba33*/
  FLAlertLayer_FLAlertLayer(v4); /*0x54ba3e*/
  *(_QWORD *)v4 = &ProfilePage::`vftable'; /*0x54ba4a*/
  *((_QWORD *)v4 + 40) = &ProfilePage::`vftable'; /*0x54ba54*/
  *((_QWORD *)v4 + 41) = &ProfilePage::`vftable'; /*0x54ba62*/
  *((_QWORD *)v4 + 42) = &ProfilePage::`vftable'; /*0x54ba70*/
  *((_QWORD *)v4 + 43) = &ProfilePage::`vftable'; /*0x54ba7e*/
  *((_QWORD *)v4 + 44) = &ProfilePage::`vftable'; /*0x54ba8c*/
  *((_QWORD *)v4 + 51) = &ProfilePage::`vftable'; /*0x54ba9a*/
  *((_QWORD *)v4 + 54) = &ProfilePage::`vftable'; /*0x54baa8*/
  *((_QWORD *)v4 + 68) = &ProfilePage::`vftable'; /*0x54bab6*/
  *((_QWORD *)v4 + 83) = &ProfilePage::`vftable'; /*0x54bac4*/
  *((_QWORD *)v4 + 84) = &ProfilePage::`vftable'; /*0x54bad2*/
  *((_QWORD *)v4 + 85) = &ProfilePage::`vftable'; /*0x54bae0*/
  *((_QWORD *)v4 + 86) = &ProfilePage::`vftable'; /*0x54baee*/
  *((_QWORD *)v4 + 87) = &ProfilePage::`vftable'; /*0x54bafc*/
  *((_QWORD *)v4 + 88) = &ProfilePage::`vftable'; /*0x54bb0a*/
  *((_QWORD *)v4 + 89) = &ProfilePage::`vftable'; /*0x54bb18*/
  *((_QWORD *)v4 + 90) = &ProfilePage::`vftable'; /*0x54bb26*/
  *((_QWORD *)v4 + 91) = 0; /*0x54bb2f*/
  *((_DWORD *)v4 + 184) = 0; /*0x54bb36*/
  v4[740] = 0; /*0x54bb3c*/
  *(_OWORD *)(v4 + 744) = 0; /*0x54bb46*/
  *((_QWORD *)v4 + 95) = 0; /*0x54bb4d*/
  *((_QWORD *)v4 + 96) = 15; /*0x54bb54*/
  v4[744] = 0; /*0x54bb5f*/
  *((_QWORD *)v4 + 97) = 0; /*0x54bb66*/
  *((_QWORD *)v4 + 98) = 0; /*0x54bb6d*/
  *((_QWORD *)v4 + 99) = 0; /*0x54bb74*/
  *((_QWORD *)v4 + 100) = 0; /*0x54bb7b*/
  *((_QWORD *)v4 + 101) = 0; /*0x54bb82*/
  *((_QWORD *)v4 + 102) = 0; /*0x54bb89*/
  *((_QWORD *)v4 + 103) = 0; /*0x54bb90*/
  v4[832] = 0; /*0x54bb97*/
  *((_QWORD *)v4 + 105) = 0; /*0x54bb9e*/
  *((_QWORD *)v4 + 106) = 0; /*0x54bba5*/
  *((_QWORD *)v4 + 107) = 0; /*0x54bbac*/
  *((_QWORD *)v4 + 108) = 0; /*0x54bbb3*/
  *((_QWORD *)v4 + 109) = 0; /*0x54bbba*/
  *((_QWORD *)v4 + 110) = 0; /*0x54bbc1*/
  *((_QWORD *)v4 + 111) = 0; /*0x54bbc8*/
  *((_DWORD *)v4 + 224) = 0; /*0x54bbcf*/
  if ( (unsigned __int8)ProfilePage_init(v4, a1, a2) ) /*0x54bbde*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x54bbea*/
    return v4; /*0x54bbf0*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x54bc04*/
    return 0; /*0x54bc07*/
  }
}

// [9/33] Address: 0x54cf70
// Method: ProfilePage::onUpdate
// Hidden C++ exception states: #wind=19
__int64 __fastcall ProfilePage_onUpdate(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // r14
  char v14; // di
  int v15; // ebx
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  __int64 v18; // r8
  void **v19; // rdx
  __int64 v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rax
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rdx
  void *v45; // [rsp+30h] [rbp-40h] BYREF
  void *v46; // [rsp+38h] [rbp-38h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v48; // [rsp+50h] [rbp-20h]
  unsigned __int64 v49; // [rsp+58h] [rbp-18h]

  v2 = *(_BYTE *)(a1 + 740) == 0; /*0x54cf9a*/
  v3 = *(_QWORD *)&qword_905FB0; /*0x54cfa1*/
  if ( v2 ) /*0x54cfa8*/
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d5c2*/
    {
      v46 = operator new(0x690u); /*0x54d5ce*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v46); /*0x54d5db*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d5ec*/
      v3 = *(_QWORD *)&qword_905FB0; /*0x54d5ee*/
    }
    GameLevelManager_resetCommentTimersForAccountID(v3, *(_DWORD *)(a1 + 736)); /*0x54d5fb*/
    LOBYTE(v44) = 1; /*0x54d60a*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 872) + 336LL))(*(_QWORD *)(a1 + 872), v44); /*0x54d60c*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 808) + 336LL))(*(_QWORD *)(a1 + 808), 0); /*0x54d61e*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 800) + 336LL))(*(_QWORD *)(a1 + 800), 0); /*0x54d630*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 888) + 336LL))(*(_QWORD *)(a1 + 888), 0); /*0x54d642*/
    sub_5554F0(a1, 0); /*0x54d64d*/
    v42 = a1 + 688; /*0x54d652*/
    v43 = *(_QWORD *)&qword_905FB0; /*0x54d659*/
    if ( *(_QWORD *)&qword_905FB0 ) /*0x54d663*/
      goto LABEL_58; /*0x54d663*/
    v46 = operator new(0x690u); /*0x54d66f*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v46); /*0x54d67c*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d68d*/
LABEL_57:
    v43 = *(_QWORD *)&qword_905FB0; /*0x54d68f*/
LABEL_58:
    *(_QWORD *)(v43 + 1480) = v42; /*0x54d696*/
    return sub_237350(v43, *(unsigned int *)(a1 + 736)); /*0x54d6a3*/
  }
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x54cfb1*/
  {
    v45 = operator new(0x690u); /*0x54cfbd*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54cfca*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54cfdb*/
    v3 = *(_QWORD *)&qword_905FB0; /*0x54cfdd*/
  }
  result = (unsigned int)sub_21ED50(v3, "upd_profile") - 1; /*0x54cff8*/
  if ( (unsigned int)result > 4 ) /*0x54cffd*/
  {
    v5 = *(_QWORD *)&qword_905FB0; /*0x54d003*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d00d*/
    {
      v45 = operator new(0x690u); /*0x54d019*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d026*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d037*/
      v5 = *(_QWORD *)&qword_905FB0; /*0x54d039*/
    }
    GameLevelManager_makeTimeStamp(v5, (__int64)"upd_profile"); /*0x54d047*/
    v7 = GJAccountManager_sharedState(v6); /*0x54d04c*/
    v8 = *(_DWORD *)(v7 + 360) - *(_DWORD *)(v7 + 364); /*0x54d057*/
    v9 = *(_QWORD *)&qword_905FB0; /*0x54d05d*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d067*/
    {
      v45 = operator new(0x690u); /*0x54d073*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d080*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d091*/
      v9 = *(_QWORD *)&qword_905FB0; /*0x54d093*/
    }
    cocos2d::CCDictionary::removeObjectForKey(*(cocos2d::CCDictionary **)(v9 + 1232), v8); /*0x54d0a4*/
    v11 = GJAccountManager_sharedState(v10); /*0x54d0aa*/
    v12 = *(_DWORD *)(v11 + 360) - *(_DWORD *)(v11 + 364); /*0x54d0b6*/
    v13 = *(_QWORD *)&qword_905FB0; /*0x54d0bd*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d0c7*/
    {
      v45 = operator new(0x690u); /*0x54d0d3*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d0e0*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d0f1*/
      v13 = *(_QWORD *)&qword_905FB0; /*0x54d0f3*/
    }
    v14 = 1; /*0x54d0fa*/
    v15 = 0; /*0x54d100*/
    while ( 1 ) /*0x54d110*/
    {
      v16 = cocos2d::CCString::createWithFormat("a_%i_%i", v12, v15); /*0x54d110*/
      CString = cocos2d::CCString::getCString(v16); /*0x54d119*/
      *(_OWORD *)Block = 0; /*0x54d122*/
      v48 = 0; /*0x54d126*/
      v49 = 0; /*0x54d12a*/
      v18 = -1; /*0x54d12e*/
      do /*0x54d138*/
        ++v18; /*0x54d135*/
      while ( CString[v18] ); /*0x54d138*/
      sub_3C230(Block); /*0x54d146*/
      v19 = Block; /*0x54d14c*/
      if ( v49 > 0xF ) /*0x54d155*/
        v19 = (void **)Block[0]; /*0x54d155*/
      if ( sub_21E690(v13, v19) ) /*0x54d15d*/
        cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(v13 + 1152), Block); /*0x54d172*/
      else
        v14 = 0; /*0x54d17a*/
      if ( ++v15 > 100 ) /*0x54d186*/
        break; /*0x54d186*/
      if ( v49 > 0xF ) /*0x54d18c*/
      {
        v21 = Block[0]; /*0x54d191*/
        if ( v49 + 1 >= 0x1000 ) /*0x54d19f*/
        {
          v21 = (void *)*((_QWORD *)Block[0] - 1); /*0x54d1a5*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0x54d1b4*/
            goto LABEL_29; /*0x54d1b4*/
        }
        j_j_free(v21); /*0x54d1b6*/
      }
      if ( !v14 ) /*0x54d1be*/
        goto LABEL_31; /*0x54d1be*/
    }
    if ( v49 > 0xF ) /*0x54d1ca*/
    {
      v22 = Block[0]; /*0x54d1cf*/
      if ( v49 + 1 >= 0x1000 ) /*0x54d1dd*/
      {
        v22 = (void *)*((_QWORD *)Block[0] - 1); /*0x54d1e3*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F ) /*0x54d1f2*/
LABEL_29:
          invoke_watson(0, 0, 0, 0, 0); /*0x54d1f4*/
      }
      j_j_free(v22); /*0x54d20a*/
    }
LABEL_31:
    v23 = GJAccountManager_sharedState(v20); /*0x54d20f*/
    v24 = *(_DWORD *)(v23 + 360) - *(_DWORD *)(v23 + 364); /*0x54d21a*/
    v25 = *(_QWORD *)&qword_905FB0; /*0x54d220*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d22a*/
    {
      v45 = operator new(0x690u); /*0x54d236*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d243*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d254*/
      v25 = *(_QWORD *)&qword_905FB0; /*0x54d256*/
    }
    GameLevelManager_resetCommentTimersForAccountID(v25, v24); /*0x54d25f*/
    v27 = *(_QWORD *)&qword_905FB0; /*0x54d264*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d26e*/
    {
      v45 = operator new(0x690u); /*0x54d27a*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d287*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d298*/
      v27 = *(_QWORD *)&qword_905FB0; /*0x54d29a*/
    }
    LOBYTE(v26) = 1; /*0x54d2a4*/
    sub_238EC0(v27, v26, 0); /*0x54d2a6*/
    v28 = *(_QWORD *)&qword_905FB0; /*0x54d2ab*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d2b5*/
    {
      v45 = operator new(0x690u); /*0x54d2c1*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d2ce*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d2df*/
      v28 = *(_QWORD *)&qword_905FB0; /*0x54d2e1*/
    }
    sub_238EC0(v28, 0, 0); /*0x54d2ed*/
    v30 = *(_QWORD *)&qword_905FB0; /*0x54d2f2*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d2fc*/
    {
      v45 = operator new(0x690u); /*0x54d308*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d315*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d326*/
      v30 = *(_QWORD *)&qword_905FB0; /*0x54d328*/
    }
    LOBYTE(v29) = 1; /*0x54d332*/
    sub_255090(v30, v29, 0); /*0x54d334*/
    v31 = *(_QWORD *)&qword_905FB0; /*0x54d339*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d343*/
    {
      v45 = operator new(0x690u); /*0x54d34f*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d35c*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d36d*/
      v31 = *(_QWORD *)&qword_905FB0; /*0x54d36f*/
    }
    sub_255090(v31, 0, 0); /*0x54d37b*/
    v32 = *(_QWORD *)&qword_905FB0; /*0x54d380*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d38a*/
    {
      v45 = operator new(0x690u); /*0x54d396*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d3a3*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d3b4*/
      v32 = *(_QWORD *)&qword_905FB0; /*0x54d3b6*/
    }
    sub_254840(v32, 0); /*0x54d3bf*/
    v33 = *(_QWORD *)&qword_905FB0; /*0x54d3c4*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d3ce*/
    {
      v45 = operator new(0x690u); /*0x54d3da*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d3e7*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d3f8*/
      v33 = *(_QWORD *)&qword_905FB0; /*0x54d3fa*/
    }
    sub_254840(v33, 1); /*0x54d406*/
    v34 = *(_QWORD *)&qword_905FB0; /*0x54d40b*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d415*/
    {
      v45 = operator new(0x690u); /*0x54d421*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d42e*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d43f*/
      v34 = *(_QWORD *)&qword_905FB0; /*0x54d441*/
    }
    sub_254840(v34, 3); /*0x54d44d*/
    v35 = *(_QWORD *)&qword_905FB0; /*0x54d452*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x54d45c*/
    {
      v45 = operator new(0x690u); /*0x54d468*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x54d475*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d486*/
      v35 = *(_QWORD *)&qword_905FB0; /*0x54d488*/
    }
    sub_254840(v35, 4); /*0x54d494*/
    if ( *(_QWORD *)(a1 + 728) ) /*0x54d499*/
    {
      v37 = cocos2d::CCDirector::sharedDirector(v36); /*0x54d4a7*/
      cocos2d::CCDirector::getWinSize(v37, &v45); /*0x54d4b4*/
      v38 = *(__int64 **)(*(_QWORD *)(a1 + 872) + 544LL); /*0x54d4c1*/
      v39 = *v38; /*0x54d4c8*/
      cocos2d::CCPoint::CCPoint( /*0x54d511*/
        (cocos2d::CCPoint *)&v46,
        (float)((float)(*(float *)&v45 * 0.5) - 220.0) + 10.0,
        (float)((float)((float)(*((float *)&v45 + 1) * 0.5) - 145.0) + 10.0) + 1.0);
      (*(void (__fastcall **)(__int64 *, __int64))(v39 + 184))(v38, v40); /*0x54d51d*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 872) + 544LL) + 160LL))(*(_QWORD *)(*(_QWORD *)(a1 + 872) + 544LL)); /*0x54d53c*/
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 776) + 336LL))(*(_QWORD *)(a1 + 776), 0); /*0x54d54e*/
    LOBYTE(v41) = 1; /*0x54d55e*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 872) + 336LL))(*(_QWORD *)(a1 + 872), v41); /*0x54d560*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 888) + 336LL))(*(_QWORD *)(a1 + 888), 0); /*0x54d572*/
    v42 = a1 + 688; /*0x54d578*/
    v43 = *(_QWORD *)&qword_905FB0; /*0x54d57f*/
    if ( *(_QWORD *)&qword_905FB0 ) /*0x54d589*/
      goto LABEL_58; /*0x54d589*/
    v46 = operator new(0x690u); /*0x54d599*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v46); /*0x54d5a6*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x54d5b7*/
    goto LABEL_57; /*0x54d5ba*/
  }
  return result; /*0x54d6a8*/
}

// [10/33] Address: 0x551ad0
// Method: ProfilePage::onMyLevels
// Hidden C++ exception states: #wind=1
char __fastcall ProfilePage_onMyLevels(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct cocos2d::CCScene *v9; // rbx
  __int64 v10; // rcx
  cocos2d::CCDirector *v11; // rax
  __int64 v12; // rcx
  cocos2d::CCString *v13; // rax
  unsigned int v14; // eax
  cocos2d::CCString *v15; // rax
  const char *CString; // rax
  __int64 v17; // r8
  struct cocos2d::CCScene *v18; // rax
  struct cocos2d::CCScene *v19; // rbx
  __int64 v20; // rcx
  cocos2d::CCDirector *v21; // rax
  __int128 v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+30h] [rbp-18h]
  __int64 v25; // [rsp+38h] [rbp-10h]
  void *v26; // [rsp+50h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 740) ) /*0x551add*/
  {
    v2 = GJSearchObject_create(98); /*0x551aeb*/
LABEL_13:
    v18 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v2); /*0x551c15*/
    v19 = cocos2d::CCTransitionFade::create(0.5, v18); /*0x551c2e*/
    v21 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v20); /*0x551c31*/
    LOBYTE(v3) = cocos2d::CCDirector::pushScene(v21, v19); /*0x551c3d*/
    return v3; /*0x551c3d*/
  }
  v3 = cocos2d::CCDirector::sharedDirector(a1); /*0x551af5*/
  if ( !*(_BYTE *)(v3 + 176) ) /*0x551afb*/
  {
    v5 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v4) + 272); /*0x551b0e*/
    if ( *(_DWORD *)(v5 + 28) != 15 ) /*0x551b19*/
    {
      if ( *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v5) + 96) ) /*0x551b21*/
      {
        v9 = *(struct cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v6) + 96); /*0x551b47*/
        v11 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v10); /*0x551b4b*/
        cocos2d::CCDirector::popToSceneInStack(v11, v9); /*0x551b57*/
      }
      else
      {
        v7 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v6) + 272); /*0x551b2e*/
        *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v8) + 96) = v7; /*0x551b3b*/
      }
    }
    v12 = *(_QWORD *)&qword_905FB0; /*0x551b5d*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x551b67*/
    {
      v26 = operator new(0x690u); /*0x551b73*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v26); /*0x551b81*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x551b92*/
      v12 = *(_QWORD *)&qword_905FB0; /*0x551b94*/
    }
    v13 = cocos2d::CCDictionary::valueForKey(*(cocos2d::CCDictionary **)(v12 + 1072), *(int *)(a1 + 736)); /*0x551ba9*/
    v14 = cocos2d::CCString::intValue(v13); /*0x551bb2*/
    v15 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v14); /*0x551bc1*/
    CString = cocos2d::CCString::getCString(v15); /*0x551bca*/
    v23 = 0; /*0x551bd3*/
    v24 = 0; /*0x551bda*/
    v25 = 0; /*0x551bdf*/
    v17 = -1; /*0x551be4*/
    do /*0x551bf3*/
      ++v17; /*0x551bf0*/
    while ( CString[v17] ); /*0x551bf3*/
    sub_3C230(&v23); /*0x551c01*/
    v2 = GJSearchObject_create_0(5, &v23); /*0x551c10*/
    goto LABEL_13; /*0x551c10*/
  }
  return v3; /*0x551c43*/
}

// [11/33] Address: 0x551c50
// Method: ProfilePage::onMyLists
char __fastcall ProfilePage_onMyLists(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct cocos2d::CCScene *v9; // rbx
  __int64 v10; // rcx
  cocos2d::CCDirector *v11; // rax
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // r8
  struct cocos2d::CCScene *v15; // rax
  struct cocos2d::CCScene *v16; // rbx
  __int64 v17; // rcx
  cocos2d::CCDirector *v18; // rax
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h]
  __int64 v22; // [rsp+38h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 740) ) /*0x551c5a*/
  {
    v2 = GJSearchObject_create(102); /*0x551c6b*/
LABEL_11:
    *(_DWORD *)(v2 + 464) = 1; /*0x551d39*/
    v15 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v2); /*0x551d46*/
    v16 = cocos2d::CCTransitionFade::create(0.5, v15); /*0x551d5c*/
    v18 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v17); /*0x551d5f*/
    LOBYTE(v3) = cocos2d::CCDirector::pushScene(v18, v16); /*0x551d6b*/
    return v3; /*0x551d6b*/
  }
  v3 = cocos2d::CCDirector::sharedDirector(a1); /*0x551c75*/
  if ( !*(_BYTE *)(v3 + 176) ) /*0x551c7b*/
  {
    v5 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v4) + 272); /*0x551c8e*/
    if ( *(_DWORD *)(v5 + 28) != 15 ) /*0x551c99*/
    {
      if ( *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v5) + 96) ) /*0x551ca1*/
      {
        v9 = *(struct cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v6) + 96); /*0x551cc7*/
        v11 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v10); /*0x551ccb*/
        cocos2d::CCDirector::popToSceneInStack(v11, v9); /*0x551cd7*/
      }
      else
      {
        v7 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v6) + 272); /*0x551cae*/
        *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v8) + 96) = v7; /*0x551cbb*/
      }
    }
    v12 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(a1 + 736)); /*0x551cea*/
    CString = cocos2d::CCString::getCString(v12); /*0x551cf3*/
    v20 = 0; /*0x551cfe*/
    v21 = 0; /*0x551d03*/
    v14 = -1; /*0x551d08*/
    v22 = 0; /*0x551d0f*/
    do /*0x551d17*/
      ++v14; /*0x551d14*/
    while ( CString[v14] ); /*0x551d17*/
    sub_3C230(&v20); /*0x551d25*/
    v2 = GJSearchObject_create_0(5, &v20); /*0x551d34*/
    goto LABEL_11; /*0x551d34*/
  }
  return v3; /*0x551d71*/
}

// [12/33] Address: 0x551f10
// Method: ProfilePage::onComment
// Hidden C++ exception states: #wind=2
__int64 ProfilePage_onComment()
{
  __int64 v0; // rcx
  int v1; // eax
  cocos2d::CCString *v2; // rax
  const char *CString; // rax
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rbx
  __int64 v8; // rax
  __int128 v9; // [rsp+50h] [rbp+17h] BYREF
  __int64 v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+68h] [rbp+2Fh]
  __int128 v12; // [rsp+70h] [rbp+37h] BYREF
  __int64 v13; // [rsp+80h] [rbp+47h]
  __int64 v14; // [rsp+88h] [rbp+4Fh]
  void *v15; // [rsp+B0h] [rbp+77h]

  v0 = *(_QWORD *)&qword_905FB0; /*0x551f22*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x551f2c*/
  {
    v15 = operator new(0x690u); /*0x551f38*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v15); /*0x551f45*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x551f56*/
    v0 = *(_QWORD *)&qword_905FB0; /*0x551f58*/
  }
  v1 = sub_21ED50(v0, "acc_comment"); /*0x551f6e*/
  if ( (unsigned int)(v1 - 1) > 0xE ) /*0x551f79*/
  {
    v12 = 0; /*0x552058*/
    v13 = 0; /*0x55205e*/
    v14 = 15; /*0x552062*/
    LOBYTE(v12) = 0; /*0x55206a*/
    v10 = 11; /*0x552070*/
    v11 = 15; /*0x552078*/
    *(_QWORD *)&v9 = 0x6470552074736F50LL; /*0x552088*/
    *((_QWORD *)&v9 + 1) = 6648929; /*0x552094*/
    v8 = ShareCommentLayer_create((unsigned int)&v9, 140, 1, 0, (__int64)&v12); /*0x5520c0*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 1064LL))(v8); /*0x5520d2*/
  }
  else
  {
    v2 = cocos2d::CCString::createWithFormat("Please wait %i seconds before posting a new update!", v1); /*0x551f88*/
    CString = cocos2d::CCString::getCString(v2); /*0x551f91*/
    v9 = 0; /*0x551f9a*/
    v10 = 0; /*0x551fa0*/
    v11 = 0; /*0x551fa4*/
    v4 = -1; /*0x551fa8*/
    do /*0x551fb3*/
      ++v4; /*0x551fb0*/
    while ( CString[v4] ); /*0x551fb3*/
    sub_3C230(&v9); /*0x551fc0*/
    v5 = sub_3E4F0(&v12, &v9); /*0x551fd5*/
    v6 = FLAlertLayer_create_0(0, (unsigned int)"Too fast", v5, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x552021*/
    sub_3C310(&v9); /*0x552028*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 1064LL))(v6); /*0x55203a*/
  }
}

// [13/33] Address: 0x552690
// Method: ProfilePage::onBlockUser
// Hidden C++ exception states: #wind=4
double __fastcall ProfilePage_onBlockUser(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  const char *v5; // r8
  const char *v6; // rdx
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  void **v11; // rdx
  cocos2d::CCObject *v12; // rbx
  int v13; // eax
  void *v14; // rcx
  double result; // xmm0_8
  void *v16; // [rsp+58h] [rbp-41h]
  __int128 v17; // [rsp+60h] [rbp-39h] BYREF
  __int64 v18; // [rsp+70h] [rbp-29h]
  __int64 v19; // [rsp+78h] [rbp-21h]
  _BYTE v20[32]; // [rsp+80h] [rbp-19h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+17h]
  unsigned __int64 v23; // [rsp+B8h] [rbp+1Fh]
  _QWORD v24[3]; // [rsp+C0h] [rbp+27h] BYREF
  unsigned __int64 v25; // [rsp+D8h] [rbp+3Fh]

  v2 = GJAccountManager_sharedState(a1); /*0x5526bf*/
  if ( *(_DWORD *)(v2 + 360) - *(_DWORD *)(v2 + 364) > 0 ) /*0x5526d2*/
  {
    sub_3E4F0(v24, *(_QWORD *)(a1 + 728) + 320LL); /*0x5526fc*/
    v5 = (const char *)v24; /*0x552702*/
    if ( v25 > 0xF ) /*0x55270b*/
      v5 = (const char *)v24[0]; /*0x55270b*/
    v6 = (const char *)v24; /*0x552710*/
    if ( v25 > 0xF ) /*0x552714*/
      v6 = (const char *)v24[0]; /*0x552714*/
    v7 = cocos2d::CCString::createWithFormat( /*0x552720*/
           "Are you sure you want to block <cg>%s</c>?\n"
           "<cg>%s</c> will no longer be able to:\n"
           "- <cy>View your profile</c>\n"
           "- <cl>Send messages</c>\n"
           "- <cp>Send friend requests</c>\n"
           "- <cr>Messages from this user will be removed</c>\n"
           "You will leave <cy>group chats</c> they own or group chats with only the two of you. Other shared group chats"
           " are not affected.",
           v6,
           v5);
    CString = cocos2d::CCString::getCString(v7); /*0x552729*/
    *(_OWORD *)Block = 0; /*0x552732*/
    v22 = 0; /*0x552736*/
    v23 = 0; /*0x55273a*/
    v9 = -1; /*0x55273e*/
    v10 = -1; /*0x552745*/
    do /*0x552753*/
      ++v10; /*0x552750*/
    while ( CString[v10] ); /*0x552753*/
    sub_3C230(Block); /*0x552761*/
    v11 = Block; /*0x552767*/
    if ( v23 > 0xF ) /*0x552770*/
      v11 = (void **)Block[0]; /*0x552770*/
    v17 = 0; /*0x552778*/
    v18 = 0; /*0x55277c*/
    v19 = 0; /*0x552780*/
    do /*0x552787*/
      ++v9; /*0x552784*/
    while ( *((_BYTE *)v11 + v9) ); /*0x552787*/
    sub_3C230(&v17); /*0x552794*/
    v16 = operator new(0x298u); /*0x5527ab*/
    v12 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer(v16); /*0x5527b7*/
    if ( v12 ) /*0x5527bd*/
    {
      v13 = sub_3E4F0(v20, &v17); /*0x5527cb*/
      if ( (unsigned __int8)GJRateLevelLayer_init( /*0x552826*/
                              (_DWORD)v12,
                              (int)a1 + 664,
                              (unsigned int)"Confirm Block",
                              v13,
                              (__int64)"Back",
                              (__int64)"Block",
                              1136525312,
                              0,
                              0,
                              1065353216) )
      {
        cocos2d::CCObject::autorelease(v12); /*0x552832*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1); /*0x552842*/
        v12 = 0; /*0x552845*/
      }
    }
    sub_3C310(&v17); /*0x55284c*/
    sub_41FC0(*((_QWORD *)v12 + 77), "GJ_button_06.png"); /*0x55285f*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v12 + 64LL))(v12, 3); /*0x55286f*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v12 + 1064LL))(v12); /*0x552878*/
    if ( v23 > 0xF ) /*0x552887*/
    {
      v14 = Block[0]; /*0x55288c*/
      if ( v23 + 1 >= 0x1000 ) /*0x55289a*/
      {
        v14 = (void *)*((_QWORD *)Block[0] - 1); /*0x5528a0*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F ) /*0x5528af*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5528c0*/
      }
      j_j_free(v14); /*0x5528c7*/
    }
    return sub_3C310(v24); /*0x5528d1*/
  }
  else
  {
    GJAccountManager_sharedState(v3); /*0x5526d4*/
    sub_305EE0(v4, "block <cg>users</c>"); /*0x5526e0*/
  }
  return result; /*0x5528d6*/
}

// [14/33] Address: 0x552f80
// Method: ProfilePage::followUserFinished
// Hidden C++ exception states: #wind=8
void __fastcall ProfilePage_followUserFinished(__int64 a1, int a2, unsigned __int8 a3)
{
  int v3; // r15d
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rbx
  cocos2d::CCString *v11; // rax
  int v12; // ebx
  void *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  float v17; // xmm6_4
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rbx
  cocos2d::CCString *v21; // rax
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rbx
  cocos2d::CCString *v30; // rax
  __int64 v31; // rcx
  int v32; // ebx
  void *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // esi
  __int64 v37; // rcx
  __int64 v38; // rbx
  cocos2d::CCString *v39; // rax
  __int64 v40; // rcx
  int v41; // ebx
  void *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r8
  int v46; // edx
  bool v47; // sf
  int v48; // edx
  int v49; // eax
  const char *v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  void *v56; // [rsp+30h] [rbp-69h]
  void *v57; // [rsp+30h] [rbp-69h]
  void *v58; // [rsp+30h] [rbp-69h]
  void *v59; // [rsp+30h] [rbp-69h]
  void *v60; // [rsp+30h] [rbp-69h]
  __int128 v61; // [rsp+38h] [rbp-61h] BYREF
  __int64 v62; // [rsp+48h] [rbp-51h]
  __int64 v63; // [rsp+50h] [rbp-49h]
  void *v64[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v65; // [rsp+70h] [rbp-29h]
  unsigned __int64 v66; // [rsp+78h] [rbp-21h]
  void *Block[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v68; // [rsp+90h] [rbp-9h]
  unsigned __int64 v69; // [rsp+98h] [rbp-1h]

  v3 = a3; /*0x552fb2*/
  if ( a3 ) /*0x552fc2*/
  {
    v6 = *(_QWORD *)&qword_905FB0; /*0x552fc8*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x552fd2*/
    {
      v56 = operator new(0x690u); /*0x552fde*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v56); /*0x552feb*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x552ffc*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x552ffe*/
    }
    v8 = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(v6 + 872)); /*0x553012*/
    v9 = qword_905FD0; /*0x553014*/
    if ( !qword_905FD0 ) /*0x55301e*/
    {
      v57 = operator new(0x6E8u); /*0x55302a*/
      qword_905FD0 = sub_2723A0(v57); /*0x553037*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x553048*/
      v9 = qword_905FD0; /*0x55304a*/
    }
    v10 = AchievementManager_sharedState(v7); /*0x553056*/
    *(_OWORD *)Block = 0; /*0x55305c*/
    v69 = 0; /*0x553064*/
    Block[0] = (void *)sub_3C460(32); /*0x553072*/
    v68 = 26; /*0x553076*/
    v69 = 31; /*0x55307e*/
    strcpy((char *)Block[0], "geometry.ach.followCreator"); /*0x55308d*/
    v11 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v10 + 352), Block); /*0x5530b7*/
    v12 = cocos2d::CCString::intValue(v11); /*0x5530c6*/
    if ( v69 > 0xF ) /*0x5530d0*/
    {
      v13 = Block[0]; /*0x5530d5*/
      if ( v69 + 1 >= 0x1000 ) /*0x5530e3*/
      {
        v13 = (void *)*((_QWORD *)Block[0] - 1); /*0x5530e9*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0x5530f8*/
          invoke_watson(0, 0, 0, 0, 0); /*0x553109*/
      }
      j_j_free(v13); /*0x553113*/
    }
    v68 = 0; /*0x553118*/
    v69 = 15; /*0x55311c*/
    LOBYTE(Block[0]) = 0; /*0x553124*/
    if ( v12 < 100 ) /*0x55312b*/
    {
      *(_OWORD *)v64 = 0; /*0x553130*/
      v64[0] = (void *)sub_3C460(32); /*0x553146*/
      v65 = 26; /*0x55314a*/
      v66 = 31; /*0x553152*/
      strcpy((char *)v64[0], "geometry.ach.followCreator"); /*0x553161*/
      sub_274AD0(v9, v64); /*0x553187*/
      v15 = AchievementManager_sharedState(v14); /*0x55318c*/
      GameManager_isColorUnlocked(v15, (__int64)"geometry.ach.followCreator", 100); /*0x5531a1*/
    }
    v16 = qword_905FD0; /*0x5531a6*/
    if ( !qword_905FD0 ) /*0x5531b0*/
    {
      v58 = operator new(0x6E8u); /*0x5531bc*/
      qword_905FD0 = sub_2723A0(v58); /*0x5531c9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5531da*/
      v16 = qword_905FD0; /*0x5531dc*/
    }
    v17 = (float)v8; /*0x5531e7*/
    v18 = (int)floorf((float)((float)v8 / 10.0) * 100.0); /*0x553202*/
    v20 = AchievementManager_sharedState(v19); /*0x55320b*/
    *(_OWORD *)v64 = 0; /*0x553211*/
    v65 = 0; /*0x553215*/
    v66 = 0; /*0x553219*/
    v64[0] = (void *)sub_3C460(32); /*0x553227*/
    v65 = 28; /*0x55322b*/
    v66 = 31; /*0x553233*/
    strcpy((char *)v64[0], "geometry.ach.followCreator02"); /*0x553242*/
    v21 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v20 + 352), v64); /*0x55326a*/
    v23 = cocos2d::CCString::intValue(v21); /*0x553279*/
    if ( v66 > 0xF ) /*0x553283*/
    {
      v24 = v64[0]; /*0x553288*/
      if ( v66 + 1 >= 0x1000 ) /*0x553296*/
      {
        v24 = (void *)*((_QWORD *)v64[0] - 1); /*0x55329c*/
        if ( (unsigned __int64)((char *)v64[0] - (char *)v24 - 8) > 0x1F ) /*0x5532ab*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5532bc*/
      }
      j_j_free(v24); /*0x5532c6*/
    }
    v65 = 0; /*0x5532cb*/
    v66 = 15; /*0x5532cf*/
    LOBYTE(v64[0]) = 0; /*0x5532d7*/
    if ( v23 < 100 ) /*0x5532de*/
    {
      if ( v18 >= 100 ) /*0x5532e3*/
      {
        v61 = 0; /*0x5532e8*/
        *(_QWORD *)&v61 = sub_3C460(32); /*0x5532fe*/
        v62 = 28; /*0x553302*/
        v63 = 31; /*0x55330a*/
        strcpy((char *)v61, "geometry.ach.followCreator02"); /*0x553319*/
        sub_274AD0(v16, &v61); /*0x55333d*/
      }
      v25 = AchievementManager_sharedState(v22); /*0x553342*/
      GameManager_isColorUnlocked(v25, (__int64)"geometry.ach.followCreator02", v18); /*0x553354*/
    }
    v26 = qword_905FD0; /*0x553359*/
    if ( !qword_905FD0 ) /*0x553363*/
    {
      v59 = operator new(0x6E8u); /*0x55336f*/
      qword_905FD0 = sub_2723A0(v59); /*0x55337c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x55338d*/
      v26 = qword_905FD0; /*0x55338f*/
    }
    v27 = (int)floorf((float)(v17 / 25.0) * 100.0); /*0x5533ae*/
    v29 = AchievementManager_sharedState(v28); /*0x5533b7*/
    *(_OWORD *)Block = 0; /*0x5533bd*/
    v68 = 0; /*0x5533c1*/
    v69 = 0; /*0x5533c5*/
    Block[0] = (void *)sub_3C460(32); /*0x5533d3*/
    v68 = 28; /*0x5533d7*/
    v69 = 31; /*0x5533df*/
    strcpy((char *)Block[0], "geometry.ach.followCreator03"); /*0x5533ee*/
    v30 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v29 + 352), Block); /*0x553416*/
    v32 = cocos2d::CCString::intValue(v30); /*0x553425*/
    if ( v69 > 0xF ) /*0x55342f*/
    {
      v33 = Block[0]; /*0x553434*/
      if ( v69 + 1 >= 0x1000 ) /*0x553442*/
      {
        v33 = (void *)*((_QWORD *)Block[0] - 1); /*0x553448*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v33 - 8) > 0x1F ) /*0x553457*/
          invoke_watson(0, 0, 0, 0, 0); /*0x553468*/
      }
      j_j_free(v33); /*0x553472*/
    }
    v68 = 0; /*0x553477*/
    v69 = 15; /*0x55347b*/
    LOBYTE(Block[0]) = 0; /*0x553483*/
    if ( v32 < 100 ) /*0x55348a*/
    {
      if ( v27 >= 100 ) /*0x55348f*/
      {
        v61 = 0; /*0x553494*/
        v62 = 0; /*0x553498*/
        v63 = 0; /*0x55349c*/
        *(_QWORD *)&v61 = sub_3C460(32); /*0x5534aa*/
        v62 = 28; /*0x5534ae*/
        v63 = 31; /*0x5534b6*/
        strcpy((char *)v61, "geometry.ach.followCreator03"); /*0x5534c5*/
        sub_274AD0(v26, &v61); /*0x5534e9*/
      }
      v34 = AchievementManager_sharedState(v31); /*0x5534ee*/
      GameManager_isColorUnlocked(v34, (__int64)"geometry.ach.followCreator03", v27); /*0x553500*/
    }
    v35 = qword_905FD0; /*0x553505*/
    if ( !qword_905FD0 ) /*0x55350f*/
    {
      v60 = operator new(0x6E8u); /*0x55351b*/
      qword_905FD0 = sub_2723A0(v60); /*0x553528*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x553539*/
      v35 = qword_905FD0; /*0x55353b*/
    }
    v36 = (int)floorf((float)(v17 / 50.0) * 100.0); /*0x55355a*/
    v38 = AchievementManager_sharedState(v37); /*0x553563*/
    *(_OWORD *)v64 = 0; /*0x553569*/
    v65 = 0; /*0x55356d*/
    v66 = 0; /*0x553571*/
    v64[0] = (void *)sub_3C460(32); /*0x55357f*/
    v65 = 28; /*0x553583*/
    v66 = 31; /*0x55358b*/
    strcpy((char *)v64[0], "geometry.ach.followCreator04"); /*0x55359a*/
    v39 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v38 + 352), v64); /*0x5535c2*/
    v41 = cocos2d::CCString::intValue(v39); /*0x5535d1*/
    if ( v66 > 0xF ) /*0x5535db*/
    {
      v42 = v64[0]; /*0x5535e0*/
      if ( v66 + 1 >= 0x1000 ) /*0x5535ee*/
      {
        v42 = (void *)*((_QWORD *)v64[0] - 1); /*0x5535f4*/
        if ( (unsigned __int64)((char *)v64[0] - (char *)v42 - 8) > 0x1F ) /*0x553603*/
          invoke_watson(0, 0, 0, 0, 0); /*0x553614*/
      }
      j_j_free(v42); /*0x55361e*/
    }
    if ( v41 < 100 ) /*0x553626*/
    {
      if ( v36 >= 100 ) /*0x55362b*/
      {
        v61 = 0; /*0x553630*/
        v62 = 0; /*0x553634*/
        v63 = 0; /*0x553638*/
        *(_QWORD *)&v61 = sub_3C460(32); /*0x553646*/
        v62 = 28; /*0x55364a*/
        v63 = 31; /*0x553652*/
        strcpy((char *)v61, "geometry.ach.followCreator04"); /*0x553661*/
        sub_274AD0(v35, &v61); /*0x553685*/
      }
      v43 = AchievementManager_sharedState(v40); /*0x55368a*/
      GameManager_isColorUnlocked(v43, (__int64)"geometry.ach.followCreator04", v36); /*0x55369c*/
    }
  }
  if ( a2 == *(_DWORD *)(a1 + 16) ) /*0x5536a5*/
  {
    v44 = *(_QWORD *)(a1 + 8); /*0x5536ab*/
    if ( v44 ) /*0x5536b2*/
    {
      *(_BYTE *)(v44 + 792) = v3; /*0x5536b8*/
      v45 = *(_QWORD *)(a1 + 8); /*0x5536bf*/
      v46 = 2 * v3 - 1; /*0x5536c3*/
      v47 = *(_DWORD *)(v45 + 784) + v46 < 0; /*0x5536cb*/
      v48 = *(_DWORD *)(v45 + 784) + v46; /*0x5536cb*/
      v49 = 0; /*0x5536d2*/
      if ( !v47 ) /*0x5536d5*/
        v49 = v48; /*0x5536d5*/
      *(_DWORD *)(v45 + 784) = v49; /*0x5536d8*/
      sub_54DE10(a1 - 720, *(_QWORD *)(a1 + 8)); /*0x5536ea*/
      v61 = 0; /*0x5536fa*/
      v62 = 0; /*0x5536fe*/
      v63 = 15; /*0x553702*/
      LOBYTE(v61) = 0; /*0x55370a*/
      v50 = "Unfollowed"; /*0x553715*/
      if ( (_BYTE)v3 ) /*0x55371f*/
        v50 = "Following"; /*0x55371f*/
      *(_OWORD *)v64 = 0; /*0x553723*/
      v65 = 0; /*0x553727*/
      v66 = 0; /*0x55372b*/
      v51 = -1; /*0x55372f*/
      do /*0x553739*/
        ++v51; /*0x553736*/
      while ( v50[v51] ); /*0x553739*/
      sub_3C230(v64); /*0x553744*/
      v52 = *(_QWORD *)(a1 - 720); /*0x553749*/
      v55 = sub_3A4CA0(v64, v53, v54, 150, &v61); /*0x553773*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(v52 + 456))(a1 - 720, v55, 100); /*0x553788*/
    }
  }
}

// [15/33] Address: 0x5537c0
// Method: ProfilePage::followUserFailed
// Hidden C++ exception states: #wind=1
void __fastcall ProfilePage_followUserFailed(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rbx
  __int128 v6; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  _BYTE v9[40]; // [rsp+70h] [rbp-28h] BYREF

  v3 = a1 - 720; /*0x5537c9*/
  if ( a2 == *(_DWORD *)(v3 + 736) ) /*0x5537d6*/
  {
    sub_552F00(v3, a3 ^ 1u); /*0x5537e4*/
    if ( !byte_9037D9 ) /*0x5537f0*/
    {
      v6 = 0; /*0x5537f9*/
      *(_QWORD *)&v6 = sub_3C460(48); /*0x553817*/
      v7 = 45; /*0x55381c*/
      v8 = 47; /*0x553825*/
      strcpy((char *)v6, "Something went wrong, please try again later."); /*0x553835*/
      v4 = sub_3E4F0(v9, &v6); /*0x55387d*/
      v5 = FLAlertLayer_create_0(0, (unsigned int)"Error", v4, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x5538c8*/
      sub_3C310(&v6); /*0x5538d0*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x5538e2*/
    }
  }
}

// [16/33] Address: 0x553af0
// Method: ProfilePage::FLAlert_Clicked
// Hidden C++ exception states: #wind=9
void __fastcall ProfilePage_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+38h] [rbp-8h]
  void *v21; // [rsp+78h] [rbp+38h]
  void *v22; // [rsp+78h] [rbp+38h]
  void *v23; // [rsp+78h] [rbp+38h]
  void *v24; // [rsp+78h] [rbp+38h]
  void *v25; // [rsp+78h] [rbp+38h]

  if ( !a3 ) /*0x553af3*/
    return; /*0x553af3*/
  v5 = a1 - 664; /*0x553b1a*/
  v6 = a1 + 24; /*0x553b21*/
  if ( a1 == 664 ) /*0x553b2b*/
    v6 = 0; /*0x553b2b*/
  v7 = *(_QWORD *)&qword_905FB0; /*0x553b2f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x553b39*/
  {
    v21 = operator new(0x690u); /*0x553b45*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0x553b52*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x553b63*/
    v7 = *(_QWORD *)&qword_905FB0; /*0x553b65*/
  }
  *(_QWORD *)(v7 + 1480) = v6; /*0x553b6c*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x553b7f*/
  {
    v8 = a1 + 32; /*0x553b85*/
    if ( !v5 ) /*0x553b8c*/
      v8 = 0; /*0x553b8c*/
    v9 = *(_QWORD *)&qword_905FB0; /*0x553b90*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x553b9a*/
    {
      v22 = operator new(0x690u); /*0x553ba6*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v22); /*0x553bb3*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x553bc4*/
      v9 = *(_QWORD *)&qword_905FB0; /*0x553bc6*/
    }
    *(_QWORD *)(v9 + 1488) = v8; /*0x553bcd*/
    if ( GameLevelManager_deleteFriendRequests(v9, *(_DWORD *)(a1 + 72), 0, 1u) ) /*0x553bdd*/
    {
      v18 = 0; /*0x553bed*/
      *(_QWORD *)&v18 = sub_3C460(32); /*0x553c03*/
      v19 = 26; /*0x553c07*/
      v20 = 31; /*0x553c0f*/
      strcpy((char *)v18, "Removing Friend Request..."); /*0x553c1e*/
      v10 = a1 + 40; /*0x553c3d*/
      if ( !v5 ) /*0x553c44*/
        v10 = 0; /*0x553c44*/
LABEL_14:
      v11 = sub_39D2A0(v10, &v18); /*0x553c48*/
      *(_QWORD *)(a1 + 216) = v11; /*0x553c51*/
LABEL_39:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 1064LL))(v11); /*0x553ec3*/
    }
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 2 ) /*0x553c69*/
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0x553d40*/
      {
        v14 = a1 + 32; /*0x553d46*/
        if ( !v5 ) /*0x553d4d*/
          v14 = 0; /*0x553d4d*/
        v15 = *(_QWORD *)&qword_905FB0; /*0x553d51*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x553d5b*/
        {
          v24 = operator new(0x690u); /*0x553d67*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v24); /*0x553d74*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x553d85*/
          v15 = *(_QWORD *)&qword_905FB0; /*0x553d87*/
        }
        *(_QWORD *)(v15 + 1488) = v14; /*0x553d8e*/
        if ( !(unsigned __int8)sub_253000(v15, *(unsigned int *)(*(_QWORD *)(v5 + 728) + 392LL)) ) /*0x553da9*/
          return; /*0x553da9*/
        v18 = 0; /*0x553db2*/
        *(_QWORD *)&v18 = sub_3C460(32); /*0x553dc8*/
        v19 = 16; /*0x553dcc*/
        v20 = 31; /*0x553dd4*/
        strcpy((char *)v18, "Blocking user..."); /*0x553de3*/
      }
      else
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 4 ) /*0x553dfb*/
          return; /*0x553dfb*/
        v16 = a1 + 32; /*0x553e01*/
        if ( !v5 ) /*0x553e08*/
          v16 = 0; /*0x553e08*/
        v17 = *(_QWORD *)&qword_905FB0; /*0x553e0c*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x553e16*/
        {
          v25 = operator new(0x690u); /*0x553e22*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0x553e2f*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x553e40*/
          v17 = *(_QWORD *)&qword_905FB0; /*0x553e42*/
        }
        *(_QWORD *)(v17 + 1488) = v16; /*0x553e49*/
        if ( !(unsigned __int8)sub_253670(v17, *(unsigned int *)(*(_QWORD *)(v5 + 728) + 392LL)) ) /*0x553e5d*/
          return; /*0x553e64*/
        v18 = 0; /*0x553e69*/
        *(_QWORD *)&v18 = sub_3C460(32); /*0x553e7f*/
        v19 = 18; /*0x553e83*/
        v20 = 31; /*0x553e8b*/
        strcpy((char *)v18, "Unblocking user..."); /*0x553e9a*/
      }
      v11 = sub_39D2A0(v5 + 704, &v18); /*0x553eb7*/
      *(_QWORD *)(v5 + 880) = v11; /*0x553ebc*/
      goto LABEL_39; /*0x553ebc*/
    }
    v12 = a1 + 32; /*0x553c6f*/
    if ( !v5 ) /*0x553c76*/
      v12 = 0; /*0x553c76*/
    v13 = *(_QWORD *)&qword_905FB0; /*0x553c7a*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x553c84*/
    {
      v23 = operator new(0x690u); /*0x553c90*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v23); /*0x553c9d*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x553cae*/
      v13 = *(_QWORD *)&qword_905FB0; /*0x553cb0*/
    }
    *(_QWORD *)(v13 + 1488) = v12; /*0x553cb7*/
    if ( (unsigned __int8)sub_2529B0(v13, *(unsigned int *)(a1 + 72)) ) /*0x553cc1*/
    {
      v18 = 0; /*0x553cd1*/
      *(_QWORD *)&v18 = sub_3C460(32); /*0x553ce7*/
      v19 = 18; /*0x553ceb*/
      v20 = 31; /*0x553cf3*/
      strcpy((char *)v18, "Removing Friend..."); /*0x553d02*/
      v10 = a1 + 40; /*0x553d14*/
      if ( !v5 ) /*0x553d1b*/
        v10 = 0; /*0x553d1b*/
      goto LABEL_14; /*0x553d1b*/
    }
  }
}

// [17/33] Address: 0x553ef0
// Method: ProfilePage::onClosePopup
__int64 __fastcall ProfilePage_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x553f08*/
  LOBYTE(v4) = 1; /*0x553f11*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x553f16*/
  if ( a2 == *(_QWORD *)(a1 + 176) ) /*0x553f23*/
    *(_QWORD *)(a1 + 176) = 0; /*0x553f25*/
  return result; /*0x553f30*/
}

// [18/33] Address: 0x553f40
// Method: ProfilePage::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall ProfilePage_uploadActionFinished(__int64 a1, int a2, int a3)
{
  _BYTE *v5; // rbx
  const char *v6; // rdx
  void **v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  void *Block[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]
  unsigned __int64 v15; // [rsp+70h] [rbp-18h]

  if ( a2 == *(_DWORD *)(a1 + 40) ) /*0x553f6f*/
  {
    if ( !*(_QWORD *)(a1 + 184) ) /*0x553f7d*/
    {
LABEL_21:
      if ( a3 == 41 ) /*0x554107*/
        ProfilePage_onUpdate(a1 - 696); /*0x554112*/
      return; /*0x554112*/
    }
    *(_OWORD *)Block = 0; /*0x553f86*/
    v5 = (_BYTE *)sub_3C460(32); /*0x553f95*/
    Block[0] = v5; /*0x553f98*/
    v14 = 23; /*0x553f9d*/
    v15 = 31; /*0x553fa6*/
    strcpy(v5, "Unknown action finished"); /*0x553fb6*/
    switch ( a3 ) /*0x553fde*/
    {
      case '$': /*0x553fde*/
        v14 = 15; /*0x553fe0*/
        memmove(v5, &qword_771118, 0xFu); /*0x553ff9*/
        v5[15] = 0; /*0x553ffe*/
LABEL_12:
        v7 = Block; /*0x554062*/
        if ( v15 > 0xF ) /*0x55406d*/
          v7 = (void **)Block[0]; /*0x55406d*/
        v10 = 0; /*0x554076*/
        v11 = 0; /*0x55407d*/
        v12 = 0; /*0x554082*/
        v8 = -1; /*0x554087*/
        do /*0x554093*/
          ++v8; /*0x554090*/
        while ( *((_BYTE *)v7 + v8) ); /*0x554093*/
        sub_3C230(&v10); /*0x55409e*/
        UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 184), &v10); /*0x5540af*/
        if ( v15 > 0xF ) /*0x5540be*/
        {
          v9 = Block[0]; /*0x5540c3*/
          if ( v15 + 1 >= 0x1000 ) /*0x5540d2*/
          {
            v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x5540d8*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x5540e7*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5540f8*/
          }
          j_j_free(v9); /*0x5540ff*/
        }
        goto LABEL_21; /*0x5540ff*/
      case '\'': /*0x553fde*/
        v6 = "Friend removed"; /*0x554009*/
        break;
      case '(': /*0x553fde*/
        v14 = 12; /*0x554017*/
        memmove(v5, "User blocked", 0xCu); /*0x554030*/
        v5[12] = 0; /*0x554035*/
        goto LABEL_12; /*0x554039*/
      case ')': /*0x553fde*/
        v6 = "User unblocked"; /*0x554040*/
        break;
      default:
        goto LABEL_12; /*0x55403e*/
    }
    v14 = 14; /*0x554047*/
    memmove(v5, v6, 0xEu); /*0x554059*/
    v5[14] = 0; /*0x55405e*/
    goto LABEL_12; /*0x55405e*/
  }
}

// [19/33] Address: 0x554140
// Method: ProfilePage::uploadActionFailed
void __fastcall ProfilePage_uploadActionFailed(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 40) ) /*0x55414c*/
  {
    if ( *(_QWORD *)(a1 + 184) ) /*0x554152*/
    {
      v3 = 0; /*0x55416f*/
      *(_QWORD *)&v3 = sub_3C460(32); /*0x554185*/
      v4 = 31; /*0x55418d*/
      v5 = 31; /*0x554196*/
      strcpy((char *)v3, "Failed. Please try again later."); /*0x55419f*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 184), &v3); /*0x5541dd*/
    }
  }
}

// [20/33] Address: 0x554280
// Method: ProfilePage::keyBackClicked
__int64 __fastcall ProfilePage_keyBackClicked(__int64 a1)
{
  return sub_5541F0(a1 - 336, 0);
}

// [21/33] Address: 0x5544b0
// Method: ProfilePage::updateUserScoreFinished
// Hidden C++ exception states: #wind=3
__int64 __fastcall ProfilePage_updateUserScoreFinished(__int64 a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCObject *v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h]
  void *v9; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)&qword_905FB0; /*0x5544c2*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x5544cc*/
  {
    v8 = operator new(0x690u); /*0x5544d8*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v8); /*0x5544e6*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x5544f7*/
    v2 = *(_QWORD *)&qword_905FB0; /*0x5544f9*/
  }
  v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v2 + 1232), *(int *)(a1 + 64)); /*0x55450b*/
  if ( v3 ) /*0x554514*/
    return (**(__int64 (__fastcall ***)(__int64, struct cocos2d::CCObject *))(a1 + 16))(a1 + 16, v3); /*0x554532*/
  LOBYTE(v4) = 1; /*0x55453f*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 200) + 336LL))(*(_QWORD *)(a1 + 200), v4); /*0x554541*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 216) + 336LL))(*(_QWORD *)(a1 + 216), 0); /*0x554553*/
  sub_5554F0(a1 - 672, 0); /*0x554565*/
  v6 = a1 + 16; /*0x55456a*/
  if ( a1 == 672 ) /*0x554573*/
    v6 = 0; /*0x554573*/
  v7 = *(_QWORD *)&qword_905FB0; /*0x554577*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x554581*/
  {
    v9 = operator new(0x690u); /*0x55458d*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0x55459b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x5545ac*/
    v7 = *(_QWORD *)&qword_905FB0; /*0x5545ae*/
  }
  *(_QWORD *)(v7 + 1480) = v6; /*0x5545b5*/
  return sub_237350(v7, *(unsigned int *)(a1 + 64)); /*0x554523*/
}

// [22/33] Address: 0x5545e0
// Method: ProfilePage::updateUserScoreFailed
__int64 __fastcall ProfilePage_updateUserScoreFailed(_QWORD **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[20] + 336LL))(a1[20], 0); /*0x5545f5*/
  LOBYTE(v2) = 1; /*0x554602*/
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1[22] + 336LL))(a1[22], v2); /*0x554607*/
  LOBYTE(v3) = 1; /*0x554611*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1[8] + 336LL))(a1[8], v3);
}

// [23/33] Address: 0x554940
// Method: ProfilePage::onSettings
// Hidden C++ exception states: #wind=2
__int64 __fastcall ProfilePage_onSettings(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v2; // rsi
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(_QWORD *); // rdx

  v1 = *(_DWORD *)(a1 + 736); /*0x55494c*/
  v2 = operator new(0x2E8u); /*0x55495c*/
  FLAlertLayer_FLAlertLayer(v2); /*0x554967*/
  *v2 = &GJAccountSettingsLayer::`vftable'; /*0x554974*/
  v2[40] = &GJAccountSettingsLayer::`vftable'; /*0x55497e*/
  v2[41] = &GJAccountSettingsLayer::`vftable'; /*0x55498c*/
  v2[42] = &GJAccountSettingsLayer::`vftable'; /*0x55499a*/
  v2[43] = &GJAccountSettingsLayer::`vftable'; /*0x5549a8*/
  v2[44] = &GJAccountSettingsLayer::`vftable'; /*0x5549b6*/
  v2[51] = &GJAccountSettingsLayer::`vftable'; /*0x5549c4*/
  v2[54] = &GJAccountSettingsLayer::`vftable'; /*0x5549d2*/
  v2[68] = &GJAccountSettingsLayer::`vftable'; /*0x5549e0*/
  v2[83] = 0; /*0x5549e9*/
  v2[84] = 0; /*0x5549f0*/
  *((_DWORD *)v2 + 170) = 1; /*0x5549f7*/
  *((_DWORD *)v2 + 171) = 2; /*0x554a01*/
  v2[86] = 0; /*0x554a0b*/
  v2[87] = 0; /*0x554a12*/
  v2[88] = 0; /*0x554a19*/
  v3 = operator new(0x48u); /*0x554a25*/
  *v3 = v3; /*0x554a2a*/
  v3[1] = v3; /*0x554a2d*/
  v3[2] = v3; /*0x554a31*/
  *((_WORD *)v3 + 12) = 257; /*0x554a35*/
  v2[87] = v3; /*0x554a3b*/
  v2[89] = 0; /*0x554a42*/
  v2[90] = 0; /*0x554a49*/
  v2[91] = 0; /*0x554a50*/
  v2[92] = 0; /*0x554a57*/
  if ( (unsigned __int8)sub_398F10(v2, v1) ) /*0x554a63*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x554a6f*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x554a7f*/
    v2 = 0; /*0x554a82*/
  }
  v4 = *(__int64 (__fastcall **)(_QWORD *))(*v2 + 1064LL); /*0x554a88*/
  if ( (char *)v4 == (char *)FLAlertLayer_show ) /*0x554a9c*/
    return FLAlertLayer_show(v2); /*0x554aaa*/
  else
    return v4(v2); /*0x554abb*/
}

// [24/33] Address: 0x554ec0
// Method: ProfilePage::getUserInfoFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall ProfilePage_getUserInfoFinished(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  bool v6; // bl
  __int64 v7; // rdx
  void *v8; // [rsp+30h] [rbp+8h]

  result = *(unsigned int *)(a1 + 48); /*0x554eda*/
  if ( *(_DWORD *)(a2 + 392) == (_DWORD)result ) /*0x554ee3*/
  {
    v5 = qword_905FD0; /*0x554ee9*/
    if ( !qword_905FD0 ) /*0x554ef3*/
    {
      v8 = operator new(0x6E8u); /*0x554eff*/
      qword_905FD0 = sub_2723A0(v8); /*0x554f0d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x554f1e*/
      v5 = qword_905FD0; /*0x554f20*/
    }
    v6 = GameManager_getGameVariable(v5, "0218") /*0x554f64*/
      || GameManager_getGameVariable(v5, "0219")
      || GameManager_getGameVariable(v5, "0076");
    sub_54DE10(a1 - 688, a2); /*0x554f70*/
    if ( *(_DWORD *)(a2 + 760) == 2 || v6 ) /*0x554f80*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 336LL))(*(_QWORD *)(a1 + 184), 0); /*0x554f9e*/
    else
      ProfilePage_loadPage(a1 - 688, 0); /*0x554f8b*/
    LOBYTE(v7) = 1; /*0x554fae*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 200) + 336LL))(*(_QWORD *)(a1 + 200), v7); /*0x554fb0*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 336LL))(*(_QWORD *)(a1 + 88), 0); /*0x554fbf*/
  }
  return result; /*0x554fc5*/
}

// [25/33] Address: 0x554fe0
// Method: ProfilePage::getUserInfoFailed
__int64 __fastcall ProfilePage_getUserInfoFailed(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( a2 == *(_DWORD *)(a1 + 48) ) /*0x554fec*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 336LL))(*(_QWORD *)(a1 + 184), 0); /*0x554ffa*/
    LOBYTE(v3) = 1; /*0x555007*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 200) + 336LL))(*(_QWORD *)(a1 + 200), v3); /*0x55500c*/
    LOBYTE(v4) = 1; /*0x555016*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 336LL))(*(_QWORD *)(a1 + 88), v4); /*0x555020*/
  }
  return result; /*0x555027*/
}

// [26/33] Address: 0x555030
// Method: ProfilePage::userInfoChanged
__int64 __fastcall ProfilePage_userInfoChanged(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 48); /*0x55503f*/
  if ( *(_DWORD *)(a2 + 392) == (_DWORD)result ) /*0x55504e*/
  {
    result = sub_54DE10(a1 - 688, a2); /*0x555057*/
    if ( *(_DWORD *)(a2 + 760) == 2 ) /*0x555063*/
    {
      sub_5554F0(a1 - 688, 0); /*0x55506e*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 336LL))(*(_QWORD *)(a1 + 112), 0); /*0x55507c*/
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 120) + 336LL))(*(_QWORD *)(a1 + 120), 0); /*0x55508b*/
    }
  }
  return result; /*0x555091*/
}

// [27/33] Address: 0x5551f0
// Method: ProfilePage::loadPage
// Hidden C++ exception states: #wind=6
void __fastcall ProfilePage_loadPage(__int64 a1, int a2)
{
  cocos2d::CCString *v4; // rax
  char *CString; // rax
  __int64 v6; // rbx
  size_t v7; // r8
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  __int64 v22; // [rsp+38h] [rbp-20h]
  void *v23; // [rsp+60h] [rbp+8h]
  void *v24; // [rsp+60h] [rbp+8h]
  void *v25; // [rsp+60h] [rbp+8h]
  void *v26; // [rsp+60h] [rbp+8h]
  void *v27; // [rsp+60h] [rbp+8h]

  if ( !*(_QWORD *)&qword_905FB0 ) /*0x55520f*/
  {
    v23 = operator new(0x690u); /*0x55521b*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v23); /*0x555229*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x55523a*/
  }
  v4 = cocos2d::CCString::createWithFormat("a_%i_%i", *(_DWORD *)(a1 + 736), a2); /*0x55524c*/
  CString = (char *)cocos2d::CCString::getCString(v4); /*0x555255*/
  v6 = -1; /*0x55525b*/
  v7 = -1; /*0x555262*/
  do /*0x555268*/
    ++v7; /*0x555265*/
  while ( CString[v7] ); /*0x555268*/
  v8 = (_QWORD *)(a1 + 744); /*0x55526f*/
  sub_3F5A0((void *)(a1 + 744), CString, v7); /*0x55527c*/
  LOBYTE(v9) = 1; /*0x55528b*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 872) + 336LL))(*(_QWORD *)(a1 + 872), v9); /*0x55528d*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 888) + 336LL))(*(_QWORD *)(a1 + 888), 0); /*0x55529f*/
  if ( a2 <= 0 ) /*0x5552b1*/
    v10 = 0; /*0x5552b7*/
  else
    LOBYTE(v10) = 1; /*0x5552b3*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 808) + 336LL))(*(_QWORD *)(a1 + 808), v10); /*0x5552b9*/
  v11 = (_QWORD *)(a1 + 744); /*0x5552bf*/
  if ( *(_QWORD *)(a1 + 768) > 0xFu ) /*0x5552c7*/
    v11 = (_QWORD *)*v8; /*0x5552c9*/
  v12 = *(_QWORD *)&qword_905FB0; /*0x5552cc*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x5552d6*/
  {
    v24 = operator new(0x690u); /*0x5552e2*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v24); /*0x5552f0*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x555301*/
    v12 = *(_QWORD *)&qword_905FB0; /*0x555304*/
  }
  if ( sub_21E690(v12, v11) ) /*0x55530e*/
    LOBYTE(v13) = 1; /*0x555322*/
  else
    v13 = 0; /*0x555326*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 800) + 336LL))(*(_QWORD *)(a1 + 800), v13); /*0x555328*/
  if ( *(_QWORD *)(a1 + 768) > 0xFu ) /*0x555334*/
    v8 = (_QWORD *)*v8; /*0x555336*/
  v14 = *(_QWORD *)&qword_905FB0; /*0x555339*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x555343*/
  {
    v25 = operator new(0x690u); /*0x55534f*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0x55535d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x55536e*/
    v14 = *(_QWORD *)&qword_905FB0; /*0x555371*/
  }
  v15 = sub_21E690(v14, v8); /*0x555380*/
  if ( v15 ) /*0x555386*/
  {
    v16 = (_QWORD *)(a1 + 744); /*0x55538c*/
    if ( *(_QWORD *)(a1 + 768) > 0xFu ) /*0x555398*/
      v16 = (_QWORD *)*v16; /*0x55539a*/
    v17 = *(_QWORD *)&qword_905FB0; /*0x55539d*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x5553a7*/
    {
      v26 = operator new(0x690u); /*0x5553b3*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v26); /*0x5553c1*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x5553d2*/
      v17 = *(_QWORD *)&qword_905FB0; /*0x5553d5*/
    }
    v18 = sub_21E790(v17, v16); /*0x5553df*/
    v20 = 0; /*0x5553e7*/
    v21 = 0; /*0x5553ee*/
    v22 = 0; /*0x5553f3*/
    do /*0x5553fb*/
      ++v6; /*0x5553f8*/
    while ( *(_BYTE *)(v18 + v6) ); /*0x5553fb*/
    sub_3C230(&v20); /*0x55540b*/
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(a1 + 672) + 24LL))(a1 + 672, &v20); /*0x555434*/
    (**(void (__fastcall ***)(__int64, __int64))(a1 + 672))(a1 + 672, v15); /*0x555459*/
  }
  else
  {
    sub_5554F0(a1, 0); /*0x555462*/
    v19 = *(_QWORD *)&qword_905FB0; /*0x55546e*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x555478*/
    {
      v27 = operator new(0x690u); /*0x555484*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v27); /*0x555492*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x5554a3*/
      v19 = *(_QWORD *)&qword_905FB0; /*0x5554a5*/
    }
    *(_QWORD *)(v19 + 1368) = a1 + 672; /*0x5554ac*/
    GameLevelManager_getAccountComments(v19, *(_DWORD *)(a1 + 736), a2, *(_DWORD *)(a1 + 856)); /*0x5554c3*/
  }
  *(_DWORD *)(a1 + 868) = a2; /*0x5554c8*/
}

// [28/33] Address: 0x5556a0
// Method: ProfilePage::loadCommentsFinished
__int64 __fastcall ProfilePage_loadCommentsFinished(_QWORD **a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx

  result = sub_5550B0(a1 - 84, a3); /*0x5556bf*/
  if ( (_BYTE)result ) /*0x5556c6*/
  {
    sub_5554F0(a1 - 84, a2); /*0x5556d2*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[25] + 336LL))(a1[25], 0); /*0x5556e3*/
    LOBYTE(v6) = 1; /*0x5556f0*/
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1[27] + 336LL))(a1[27], v6); /*0x5556f5*/
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1[13] + 336LL))(a1[13], 0); /*0x555704*/
  }
  return result; /*0x55570a*/
}

// [29/33] Address: 0x555720
// Method: ProfilePage::loadCommentsFailed
__int64 __fastcall ProfilePage_loadCommentsFailed(_QWORD **a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = sub_5550B0(a1 - 84, a2); /*0x555730*/
  if ( (_BYTE)result ) /*0x555737*/
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[25] + 336LL))(a1[25], 0); /*0x555745*/
    LOBYTE(v4) = 1; /*0x555752*/
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1[27] + 336LL))(a1[27], v4); /*0x555757*/
    LOBYTE(v5) = 1; /*0x555761*/
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1[13] + 336LL))(a1[13], v5); /*0x55576b*/
  }
  return result; /*0x555772*/
}

// [30/33] Address: 0x555780
// Method: ProfilePage::setupPageInfo
// Hidden C++ exception states: #wind=2
double __fastcall ProfilePage_setupPageInfo(_DWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // r8
  cocos2d::CCArray *v7; // rdi
  void *v8; // r8
  cocos2d::CCString *v9; // rax
  cocos2d::CCString *v10; // rax
  cocos2d::CCString *v11; // rax
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __m128i si128; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int8)sub_5550B0(a1 - 168, a3) ) /*0x5557b0*/
  {
    v5 = a2; /*0x5557bd*/
    if ( a2[3] > 0xFu ) /*0x5557c5*/
      v5 = (_QWORD *)*a2; /*0x5557c7*/
    *(_OWORD *)Block = 0; /*0x5557cd*/
    si128 = 0; /*0x5557d5*/
    v6 = -1; /*0x5557db*/
    do /*0x5557e5*/
      ++v6; /*0x5557e2*/
    while ( *((_BYTE *)v5 + v6) ); /*0x5557e5*/
    sub_3C230(Block); /*0x5557f1*/
    v7 = (cocos2d::CCArray *)sub_20BF00(Block); /*0x555801*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x55580d*/
    {
      v8 = Block[0]; /*0x555812*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x555821*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x555827*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x555836*/
          invoke_watson(0, 0, 0, 0, 0); /*0x55584b*/
      }
      j_j_free(v8); /*0x555855*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x555862*/
    LOBYTE(Block[0]) = 0; /*0x555868*/
    if ( cocos2d::CCArray::count(v7) >= 3 ) /*0x555879*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(v7, 0); /*0x555880*/
      a1[46] = cocos2d::CCString::intValue(v9); /*0x55588f*/
      v10 = cocos2d::CCArray::objectAtIndex(v7, 1u); /*0x55589d*/
      a1[47] = cocos2d::CCString::intValue(v10); /*0x5558ac*/
      v11 = cocos2d::CCArray::objectAtIndex(v7, 2u); /*0x5558ba*/
      a1[48] = cocos2d::CCString::intValue(v11); /*0x5558c9*/
      sub_555910(a1 - 168); /*0x5558d6*/
    }
  }
  return sub_3C310(a2); /*0x5558e4*/
}

// [31/33] Address: 0x5559a0
// Method: ProfilePage::commentUploadFinished
void __fastcall ProfilePage_commentUploadFinished(__int64 a1, int a2)
{
  __int64 v4; // rax

  v4 = GJAccountManager_sharedState(a1); /*0x5559af*/
  if ( a2 == *(_DWORD *)(v4 + 360) - *(_DWORD *)(v4 + 364) ) /*0x5559c5*/
  {
    *(_DWORD *)(a1 - 680 + 856) = 0; /*0x5559d0*/
    ProfilePage_loadPage(a1 - 680, 0); /*0x5559da*/
  }
}

// [32/33] Address: 0x5559f0
// Method: ProfilePage::commentUploadFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall ProfilePage_commentUploadFailed(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rbx
  __int128 v8; // [rsp+58h] [rbp-50h] BYREF
  __int64 v9; // [rsp+68h] [rbp-40h]
  __int64 v10; // [rsp+70h] [rbp-38h]
  _BYTE v11[48]; // [rsp+78h] [rbp-30h] BYREF

  result = GJAccountManager_sharedState(a1); /*0x555a02*/
  if ( a2 == *(_DWORD *)(result + 360) - *(_DWORD *)(result + 364) && a3 == -1 ) /*0x555a1e*/
  {
    v8 = 0; /*0x555a27*/
    *(_QWORD *)&v8 = sub_3C460(48); /*0x555a45*/
    v9 = 46; /*0x555a4a*/
    v10 = 47; /*0x555a53*/
    strcpy((char *)v8, "Comment upload failed. Please try again later."); /*0x555a63*/
    v6 = sub_3E4F0(v11, &v8); /*0x555aac*/
    v7 = FLAlertLayer_create_0(0, (unsigned int)"Failed", v6, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x555af7*/
    sub_3C310(&v8); /*0x555aff*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0x555b11*/
  }
  return result; /*0x555b13*/
}

// [33/33] Address: 0x555b30
// Method: ProfilePage::commentDeleteFailed
// Hidden C++ exception states: #wind=2
void __fastcall ProfilePage_commentDeleteFailed(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  cocos2d::CCArray *v12; // rax
  cocos2d::CCArray *v13; // rbx
  struct cocos2d::CCObject *v14; // rax
  __int128 v15; // [rsp+58h] [rbp-50h] BYREF
  __int64 v16; // [rsp+68h] [rbp-40h]
  __int64 v17; // [rsp+70h] [rbp-38h]
  _BYTE v18[40]; // [rsp+78h] [rbp-30h] BYREF
  void *v19; // [rsp+C8h] [rbp+20h]

  v6 = GJAccountManager_sharedState(a1); /*0x555b4f*/
  if ( a2 == *(_DWORD *)(v6 + 360) - *(_DWORD *)(v6 + 364) ) /*0x555b66*/
  {
    v15 = 0; /*0x555b6f*/
    v7 = 0; /*0x555b74*/
    *(_QWORD *)&v15 = sub_3C460(48); /*0x555b8d*/
    v16 = 46; /*0x555b92*/
    v17 = 47; /*0x555b9b*/
    strcpy((char *)v15, "Comment delete failed. Please try again later."); /*0x555bab*/
    v8 = sub_3E4F0(v18, &v15); /*0x555bf5*/
    v9 = FLAlertLayer_create_0(0, (unsigned int)"Failed", v8, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x555c41*/
    sub_3C310(&v15); /*0x555c49*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL))(v9); /*0x555c5b*/
    v10 = (_QWORD *)(a1 + 64); /*0x555c5d*/
    if ( *(_QWORD *)(a1 + 88) > 0xFu ) /*0x555c66*/
      v10 = (_QWORD *)*v10; /*0x555c68*/
    v11 = *(_QWORD *)&qword_905FB0; /*0x555c6b*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x555c75*/
    {
      v19 = operator new(0x690u); /*0x555c81*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0x555c92*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x555ca3*/
      v11 = *(_QWORD *)&qword_905FB0; /*0x555ca6*/
    }
    v12 = (cocos2d::CCArray *)sub_21E690(v11, v10); /*0x555cb0*/
    v13 = v12; /*0x555cb5*/
    if ( v12 ) /*0x555cbb*/
    {
      if ( cocos2d::CCArray::count(v12) ) /*0x555cc0*/
      {
        while ( 1 ) /*0x555cd5*/
        {
          v14 = cocos2d::CCArray::objectAtIndex(v13, v7); /*0x555cd5*/
          if ( *((_DWORD *)v14 + 96) == a3 ) /*0x555ce1*/
            break; /*0x555ce1*/
          if ( ++v7 >= cocos2d::CCArray::count(v13) ) /*0x555cf0*/
            return; /*0x555cf0*/
        }
        *((_BYTE *)v14 + 440) = 0; /*0x555cf4*/
        ProfilePage_loadPage(a1 - 680, *(_DWORD *)(a1 + 188)); /*0x555d08*/
      }
    }
  }
}
