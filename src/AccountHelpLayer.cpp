#include <Geode/binding/AccountHelpLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// Address: 0x8b660
// Original Symbol: AccountHelpLayer::onUnlink
// Hidden C++ exception states: #wind=5
__int64 __fastcall AccountHelpLayer_onUnlink(_QWORD *a1)
{
  _QWORD *v2; // rax
  char **v3; // rdi
  char *v4; // rdx
  __int64 v5; // r8
  void *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  unsigned __int64 i; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r8
  _BYTE *v13; // rcx
  _BYTE *v14; // rdx
  unsigned __int8 v15; // bl
  unsigned __int64 v17; // r10
  int v18; // r8d
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  int v23; // ecx
  char v24; // cl
  unsigned __int64 v25; // rdx
  _QWORD *v26; // r8
  _QWORD *v27; // rax
  _BYTE v28[16]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD Src[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]
  __int128 v32; // [rsp+60h] [rbp-38h] BYREF
  __int128 v33; // [rsp+70h] [rbp-28h]

  if ( dword_9074B4 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) ) /*0x8b6a8*/
  {
    sub_672D2C(&dword_9074B4); /*0x8b6b5*/
    if ( dword_9074B4 == -1 ) /*0x8b6c1*/
    {
      dword_9074C0 = 0; /*0x8b6c7*/
      qword_9074C8 = 0; /*0x8b6cd*/
      qword_9074D0 = 0; /*0x8b6d4*/
      v2 = operator new(0x30u); /*0x8b6e0*/
      *v2 = v2; /*0x8b6e5*/
      v2[1] = v2; /*0x8b6e8*/
      qword_9074C8 = (__int64)v2; /*0x8b6ec*/
      qword_9074D8 = 0; /*0x8b6f3*/
      xmmword_9074E0 = 0; /*0x8b6fd*/
      qword_9074F0 = 7; /*0x8b705*/
      qword_9074F8 = 8; /*0x8b710*/
      dword_9074C0 = 1065353216; /*0x8b71b*/
      sub_3E200(&qword_9074D8, 16, v2); /*0x8b734*/
      atexit(sub_6C7FB0); /*0x8b741*/
      Init_thread_footer(&dword_9074B4); /*0x8b74e*/
    }
  }
  if ( !qword_9074D0 ) /*0x8b75b*/
  {
    v3 = off_6FD4C0; /*0x8b761*/
    do /*0x8b800*/
    {
      v4 = *v3; /*0x8b770*/
      v32 = 0; /*0x8b776*/
      v33 = 0; /*0x8b77e*/
      v5 = -1; /*0x8b784*/
      do /*0x8b793*/
        ++v5; /*0x8b790*/
      while ( v4[v5] ); /*0x8b793*/
      sub_3C230(&v32); /*0x8b79f*/
      sub_91130(&dword_9074C0, v28, &v32); /*0x8b7b6*/
      if ( *((_QWORD *)&v33 + 1) > 0xFu ) /*0x8b7c5*/
      {
        v6 = (void *)v32; /*0x8b7ca*/
        if ( (unsigned __int64)(*((_QWORD *)&v33 + 1) + 1LL) >= 0x1000 ) /*0x8b7d9*/
        {
          v6 = *(void **)(v32 - 8); /*0x8b7df*/
          if ( (unsigned __int64)(v32 - (_QWORD)v6 - 8) > 0x1F ) /*0x8b7ee*/
            invoke_watson(0, 0, 0, 0, 0); /*0x8b8b2*/
        }
        j_j_free(v6); /*0x8b7f4*/
      }
      ++v3; /*0x8b7f9*/
    }
    while ( (__int64)v3 < (__int64)&word_6FDD00 ); /*0x8b800*/
  }
  sub_8AFE0(Src); /*0x8b80e*/
  if ( v30 ) /*0x8b81c*/
  {
    v7 = Src; /*0x8b81e*/
    if ( v31 > 0xF ) /*0x8b829*/
      v7 = (_QWORD *)Src[0]; /*0x8b829*/
    v8 = 0xCBF29CE484222325uLL; /*0x8b82f*/
    for ( i = 0; i < v30; ++i ) /*0x8b839*/
      v8 = 0x100000001B3LL * (*((unsigned __int8 *)v7 + i) ^ (unsigned __int64)v8); /*0x8b858*/
    if ( *(_QWORD *)(sub_665A0(&dword_9074C0, v28, Src, v8) + 8) ) /*0x8b87a*/
      goto LABEL_27; /*0x8b87f*/
  }
  v10 = a1[2]; /*0x8b881*/
  if ( v10 ) /*0x8b888*/
  {
    v11 = a1; /*0x8b88e*/
    if ( a1[3] <= 0xFu ) /*0x8b896*/
    {
      v13 = a1; /*0x8b8b9*/
      v12 = a1; /*0x8b8bc*/
    }
    else
    {
      v11 = (_QWORD *)*a1; /*0x8b898*/
      v12 = (_QWORD *)*a1; /*0x8b89b*/
      v13 = (_BYTE *)*a1; /*0x8b89e*/
    }
    v14 = (char *)v12 + v10; /*0x8b8bf*/
    if ( v11 == (_QWORD *)v14 ) /*0x8b8c5*/
      goto LABEL_27; /*0x8b8c5*/
    while ( (unsigned __int8)(*v13 - 48) <= 9u ) /*0x8b8ce*/
    {
      if ( ++v13 == v14 ) /*0x8b8d6*/
        goto LABEL_27; /*0x8b8d6*/
    }
  }
  v17 = a1[2]; /*0x8b910*/
  if ( v17 >= 4 ) /*0x8b918*/
  {
    v18 = 0; /*0x8b91e*/
    v19 = 1; /*0x8b921*/
    v20 = 1; /*0x8b927*/
    while ( 1 ) /*0x8b930*/
    {
      v21 = a1; /*0x8b930*/
      if ( a1[3] <= 0xFu ) /*0x8b937*/
      {
        v22 = a1; /*0x8b941*/
      }
      else
      {
        v22 = (_QWORD *)*a1; /*0x8b939*/
        v21 = (_QWORD *)*a1; /*0x8b93c*/
      }
      v23 = *((unsigned __int8 *)v21 + v20) - *((unsigned __int8 *)v22 + v20 - 1); /*0x8b94d*/
      if ( v23 != 1 && v23 != -1 ) /*0x8b957*/
        break; /*0x8b957*/
      if ( v18 ) /*0x8b95c*/
      {
        if ( v23 != v18 ) /*0x8b966*/
          break; /*0x8b966*/
      }
      else
      {
        v18 = v23; /*0x8b95e*/
      }
      if ( ++v20 >= v17 ) /*0x8b96e*/
        goto LABEL_27; /*0x8b96e*/
    }
    if ( v17 >> 1 ) /*0x8b978*/
    {
      do /*0x8b9e0*/
      {
        if ( !(v17 % v19) ) /*0x8b985*/
        {
          v24 = 1; /*0x8b98d*/
          v25 = v19; /*0x8b98f*/
          if ( v19 >= v17 ) /*0x8b995*/
            goto LABEL_27; /*0x8b995*/
          while ( v24 ) /*0x8b9a2*/
          {
            v26 = a1; /*0x8b9a4*/
            if ( a1[3] <= 0xFu ) /*0x8b9ac*/
            {
              v27 = a1; /*0x8b9b6*/
            }
            else
            {
              v27 = (_QWORD *)*a1; /*0x8b9ae*/
              v26 = (_QWORD *)*a1; /*0x8b9b1*/
            }
            if ( *((_BYTE *)v26 + v25) != *((_BYTE *)v27 + v25 - v19) ) /*0x8b9c7*/
              v24 = 0; /*0x8b9c7*/
            if ( ++v25 >= v17 ) /*0x8b9d0*/
            {
              if ( v24 ) /*0x8b9d4*/
                goto LABEL_27; /*0x8b9d4*/
              break; /*0x8b9d4*/
            }
          }
        }
        ++v19; /*0x8b9da*/
      }
      while ( v19 <= v17 >> 1 ); /*0x8b9e0*/
    }
  }
  if ( !(unsigned __int8)sub_8B220(a1) ) /*0x8b9e5*/
  {
    v15 = 0; /*0x8b9f2*/
    goto LABEL_28; /*0x8b9f4*/
  }
LABEL_27:
  v15 = 1; /*0x8b8d8*/
LABEL_28:
  sub_3C310(Src); /*0x8b8da*/
  return v15; /*0x8b8e7*/
}

// Address: 0x93fa0
// Original Symbol: AccountHelpLayer::onReLogin
__int64 AccountHelpLayer_onReLogin()
{
  __int64 v0; // rax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  v3 = 0; /*0x93fa7*/
  v2 = 0; /*0x93fb0*/
  LOBYTE(v2) = 0; /*0x93fba*/
  v4 = 15; /*0x93fbf*/
  v0 = AccountLoginLayer_create(&v2); /*0x93fc8*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 1064LL))(v0); /*0x93fdc*/
}

// Address: 0x942b0
// Original Symbol: AccountHelpLayer::accountStatusChanged
__int64 __fastcall sub_942B0(__int64 a1)
{
  return sub_942C0(a1 - 608);
}

// Address: 0x942c0
// Original Symbol: AccountHelpLayer::updatePage
// Hidden C++ exception states: #wind=1
__int64 __fastcall AccountHelpLayer_updatePage(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  bool v6; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 v10; // rdi
  void (__fastcall **v11)(__int64, const char *); // rbx
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // rax
  const char *v15; // rdx
  __int64 v16; // rdi
  void (__fastcall **v17)(__int64, const char *); // rbx
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v24; // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h]
  unsigned __int64 v27; // [rsp+48h] [rbp-18h]

  v2 = 0; /*0x942e8*/
  v24 = 0; /*0x942ea*/
  v3 = GJAccountManager_sharedState(a1); /*0x942ed*/
  v6 = 0; /*0x94326*/
  if ( *(_DWORD *)(v3 + 360) != *(_DWORD *)(v3 + 364) ) /*0x942fe*/
  {
    v5 = GJAccountManager_sharedState(v4); /*0x94300*/
    sub_3E4F0(&v25, v5 + 376); /*0x94310*/
    v2 = 3; /*0x94315*/
    if ( v26 ) /*0x9431f*/
      v6 = 1; /*0x942fe*/
  }
  if ( (v2 & 1) != 0 ) /*0x9432c*/
    sub_3C310(&v25); /*0x94332*/
  LOWORD(v24) = -1; /*0x9433e*/
  BYTE2(v24) = -1; /*0x94349*/
  TextArea_colorAllCharactersTo(*(_QWORD *)(a1 + 632), &v24); /*0x94357*/
  v8 = GJAccountManager_sharedState(v7); /*0x9435c*/
  if ( v6 )
  {
    sub_3E4F0(&v25, v8 + 328); /*0x94371*/
    v9 = (const char *)&v25; /*0x94377*/
    if ( v27 > 0xF ) /*0x94380*/
      v9 = (const char *)v25; /*0x94380*/
    v10 = *(_QWORD *)(a1 + 624); /*0x94385*/
    v11 = *(void (__fastcall ***)(__int64, const char *))(v10 + 360); /*0x9438c*/
    v12 = cocos2d::CCString::createWithFormat("Linked to account: %s", v9);
    CString = cocos2d::CCString::getCString(v12); /*0x943a3*/
    (*v11)(v10 + 360, CString); /*0x943b3*/
    sub_3C310(&v25); /*0x943ba*/
    v25 = 0; /*0x943c2*/
    v26 = 0; /*0x943c6*/
    v27 = 15; /*0x943ce*/
    LOBYTE(v25) = 0; /*0x943d6*/
  }
  else if ( *(_DWORD *)(v8 + 360) == *(_DWORD *)(v8 + 364) )
  {
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 624) + 360LL))( /*0x944a6*/
      *(_QWORD *)(a1 + 624) + 360LL,
      "Not logged in");
    v25 = 0; /*0x944ab*/
    v26 = 0; /*0x944af*/
    v27 = 0; /*0x944b7*/
    *(_QWORD *)&v25 = sub_3C460(48); /*0x944cc*/
    v26 = 46; /*0x944d0*/
    v27 = 47; /*0x944d8*/
    strcpy((char *)v25, "Create an account to backup\nand sync your data"); /*0x944e7*/
  }
  else
  {
    v14 = GJAccountManager_sharedState(v8); /*0x943f4*/
    sub_3E4F0(&v25, v14 + 328); /*0x94404*/
    v15 = (const char *)&v25; /*0x9440a*/
    if ( v27 > 0xF ) /*0x94413*/
      v15 = (const char *)v25; /*0x94413*/
    v16 = *(_QWORD *)(a1 + 624); /*0x94418*/
    v17 = *(void (__fastcall ***)(__int64, const char *))(v16 + 360); /*0x9441f*/
    v18 = cocos2d::CCString::createWithFormat("Linked to account: %s", v15);
    v19 = cocos2d::CCString::getCString(v18); /*0x94436*/
    (*v17)(v16 + 360, v19); /*0x94446*/
    sub_3C310(&v25); /*0x9444d*/
    v26 = 14; /*0x94458*/
    v27 = 15; /*0x94460*/
    strcpy((char *)&v25, "Login required"); /*0x94470*/
    HIBYTE(v25) = 0; /*0x9447b*/
  }
  TextArea_setString(*(_QWORD *)(a1 + 632), &v25); /*0x94525*/
  v21 = GJAccountManager_sharedState(v20); /*0x9452a*/
  v22 = *(unsigned int *)(v21 + 364); /*0x94536*/
  LOBYTE(v22) = *(_DWORD *)(v21 + 360) != (_DWORD)v22; /*0x94542*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 648) + 336LL))(*(_QWORD *)(a1 + 648), v22); /*0x9454e*/
}

// Address: 0x94570
// Original Symbol: AccountHelpLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
__int64 __fastcall AccountHelpLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rbx
  __int128 v10; // [rsp+50h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  _BYTE v13[40]; // [rsp+70h] [rbp-28h] BYREF

  result = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 3; /*0x9458d*/
  if ( (_DWORD)result ) /*0x94590*/
  {
    result = (unsigned int)(result - 1); /*0x94596*/
    if ( (_DWORD)result ) /*0x94599*/
    {
      if ( (_DWORD)result == 1 ) /*0x9459e*/
      {
        if ( a3 ) /*0x945a6*/
        {
          v6 = cocos2d::CCApplication::sharedApplication(); /*0x945ac*/
          return (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v6 + 96LL))( /*0x945d3*/
                   v6,
                   "https://www.boomlings.com/database/accounts/accountManagement.php");
        }
      }
    }
    else if ( a3 ) /*0x945d8*/
    {
      v7 = sub_301830(); /*0x945e5*/
      sub_305FC0(v7); /*0x945ed*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 616) + 992LL))(a1 - 616, 0); /*0x945fa*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 616) + 1120LL))(a1 - 616); /*0x94606*/
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 616) + 1088LL))( /*0x94629*/
               a1 - 616,
               *(unsigned __int8 *)(a1 - 616 + 600));
    }
  }
  else if ( a3 ) /*0x94632*/
  {
    if ( a1 == 616 ) /*0x94644*/
      LODWORD(a1) = 0; /*0x94644*/
    v10 = 0; /*0x9464b*/
    *(_QWORD *)&v10 = sub_3C460(112); /*0x94667*/
    v11 = 110; /*0x9466c*/
    v12 = 111; /*0x94675*/
    strcpy( /*0x94685*/
      (char *)v10,
      "This will <cr>delete</c> ALL <cl>save data</c>.\nDo you want to continue?\n<cy>(You cannot undo this action)</c>");
    v8 = sub_3E4F0(v13, &v10); /*0x946fb*/
    v9 = (_QWORD *)sub_594A0( /*0x9474f*/
                     a1,
                     (unsigned int)"Warning",
                     v8,
                     (unsigned int)"Cancel",
                     (__int64)"DELETE",
                     1133903872,
                     0,
                     0,
                     1065353216);
    sub_3C310(&v10); /*0x94757*/
    (*(void (__fastcall **)(_QWORD *, __int64))(*v9 + 64LL))(v9, 4); /*0x9476b*/
    sub_41FC0(v9[77], "GJ_button_06.png"); /*0x9477c*/
    return (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 1064LL))(v9); /*0x9478e*/
  }
  return result; /*0x945c3*/
}

// Address: 0x947b0
// Original Symbol: AccountHelpLayer::layerHidden
__int64 __fastcall AccountHelpLayer_layerHidden(_BYTE *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx

  if ( a1[656] ) /*0x947b6*/
  {
    v2 = AccountLayer_create(); /*0x947d2*/
    v3 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 504LL))(a1); /*0x947d5*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 456LL))(v3, v2, 100); /*0x947f1*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1080LL))(v2, 0); /*0x94803*/
  }
  result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 336LL))(a1, 0); /*0x94813*/
  if ( a1[584] ) /*0x94819*/
  {
    LOBYTE(v5) = 1; /*0x94825*/
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v5); /*0x9482f*/
  }
  return result; /*0x94836*/
}
