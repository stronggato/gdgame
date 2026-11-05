#include <Geode/binding/GameManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/51] Address: 0x3bff0
// Method: GameManager::isColorUnlocked
// Hidden C++ exception states: #wind=4
void __fastcall GameManager_isColorUnlocked(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rbx
  struct cocos2d::CCString *v10; // rax
  void *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h]

  if ( (int)((__int64 (*)(void))AchievementManager_percentForAchievement)() < 100 ) /*0x3c018*/
  {
    if ( a3 <= (int)AchievementManager_percentForAchievement(a1, a2) ) /*0x3c02b*/
    {
      if ( a3 < 100 ) /*0x3c12f*/
        return; /*0x3c12f*/
      goto LABEL_16; /*0x3c12f*/
    }
    v6 = 100; /*0x3c031*/
    if ( a3 <= 100 ) /*0x3c038*/
      v6 = a3; /*0x3c038*/
    v7 = v6; /*0x3c03b*/
    *(_OWORD *)Block = 0; /*0x3c040*/
    v16 = 0; /*0x3c048*/
    v8 = -1; /*0x3c04e*/
    do /*0x3c058*/
      ++v8; /*0x3c055*/
    while ( *(_BYTE *)(a2 + v8) ); /*0x3c058*/
    sub_3C230(Block); /*0x3c067*/
    v9 = *(_QWORD *)(a1 + 352); /*0x3c06d*/
    v10 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v7); /*0x3c07d*/
    cocos2d::CCDictionary::setObject(v9, v10, Block); /*0x3c08e*/
    if ( *((_QWORD *)&v16 + 1) > 0xFu ) /*0x3c09e*/
    {
      v11 = Block[0]; /*0x3c0a3*/
      if ( (unsigned __int64)(*((_QWORD *)&v16 + 1) + 1LL) >= 0x1000 ) /*0x3c0b2*/
      {
        v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x3c0b8*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x3c0c7*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3c0dc*/
      }
      j_j_free(v11); /*0x3c0e3*/
    }
    if ( v7 >= 100 ) /*0x3c0eb*/
    {
      if ( *(_BYTE *)(sub_8A020() + 384) ) /*0x3c0f2*/
      {
        v12 = (_QWORD *)SteamInternal_ContextInit(off_8F8060); /*0x3c102*/
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 48LL))(*v12, a2); /*0x3c111*/
        v13 = (_QWORD *)SteamInternal_ContextInit(off_8F8060); /*0x3c11b*/
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 72LL))(*v13); /*0x3c127*/
      }
LABEL_16:
      v14 = AchievementManager_sharedState(); /*0x3c131*/
      sub_3BCB0(v14, a2); /*0x3c13c*/
    }
  }
}

// [2/51] Address: 0x53d30
// Method: GameManager::getMenuMusicFile
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameManager_getMenuMusicFile(_DWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rcx
  char v5; // r9
  char v6; // r8
  char v7; // r11
  char v8; // bp
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  _QWORD *v11; // rcx
  char v12; // cl

  v2 = a2; /*0x53d4b*/
  v4 = a1 + 122; /*0x53d56*/
  if ( v4 != a2 ) /*0x53d60*/
  {
    if ( a2[3] > 0xFu ) /*0x53d67*/
      a2 = (_QWORD *)*a2; /*0x53d69*/
    sub_3F5A0(v4, a2, v2[2]); /*0x53d70*/
  }
  if ( a1[181] ) /*0x53d75*/
    return sub_3C310(v2); /*0x53d75*/
  v5 = 0; /*0x53d82*/
  v6 = 0; /*0x53d85*/
  v7 = 0; /*0x53d88*/
  v8 = 0; /*0x53d8b*/
  v9 = 0; /*0x53d8e*/
  v10 = v2[2]; /*0x53d90*/
  if ( !v10 ) /*0x53d97*/
    return sub_3C310(v2); /*0x53d97*/
  while ( 1 ) /*0x53da1*/
  {
    v11 = v2; /*0x53da1*/
    if ( v2[3] > 0xFu ) /*0x53da8*/
      v11 = (_QWORD *)*v2; /*0x53daa*/
    v12 = *((_BYTE *)v11 + v9); /*0x53dad*/
    if ( (unsigned __int8)(v12 - 48) > 9u ) /*0x53db6*/
      break; /*0x53db6*/
    v5 = 1; /*0x53db8*/
LABEL_15:
    if ( ++v9 >= v10 ) /*0x53dd5*/
      goto LABEL_18; /*0x53dd5*/
  }
  if ( v12 == 45 ) /*0x53dc0*/
  {
    v6 = 1; /*0x53dc2*/
    goto LABEL_15; /*0x53dc5*/
  }
  if ( v12 == 46 ) /*0x53dca*/
  {
    v7 = 1; /*0x53dcc*/
    goto LABEL_15; /*0x53dcc*/
  }
  v8 = 1; /*0x53dd9*/
LABEL_18:
  if ( v5 && !v8 ) /*0x53de4*/
  {
    if ( v7 ) /*0x53de9*/
    {
      a1[181] = 1; /*0x53deb*/
      if ( (int)a1[182] <= 0 ) /*0x53dfc*/
        a1[182] = 2; /*0x53dfe*/
    }
    else
    {
      a1[181] = 3 - (v6 != 0); /*0x53e12*/
    }
  }
  return sub_3C310(v2); /*0x53e20*/
}

// [3/51] Address: 0x179b40
// Method: GameManager::GameManager
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameManager_GameManager(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  __int64 v3; // rbx
  __int128 v5; // [rsp+50h] [rbp-48h] BYREF
  __int64 v6; // [rsp+60h] [rbp-38h]
  __int64 v7; // [rsp+68h] [rbp-30h]
  _BYTE v8[40]; // [rsp+70h] [rbp-28h] BYREF

  v1 = a1 + 416; /*0x179b49*/
  if ( !a1 ) /*0x179b55*/
    v1 = 0; /*0x179b55*/
  v5 = 0; /*0x179b5c*/
  *(_QWORD *)&v5 = sub_3C460(96); /*0x179b78*/
  v6 = 89; /*0x179b7d*/
  v7 = 95; /*0x179b86*/
  strcpy((char *)v5, "Are you sure you want to <cr>delete</c> this level?\n<cy>This action cannot be undone.</c>"); /*0x179b96*/
  v2 = sub_3E4F0(v8, &v5); /*0x179bf7*/
  v3 = FLAlertLayer_create_0( /*0x179c4b*/
         v1,
         (unsigned int)&qword_71B110,
         v2,
         (unsigned int)&unk_734D08,
         (__int64)"YES",
         1135214592,
         0,
         0,
         1065353216);
  sub_3C310(&v5); /*0x179c53*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 4); /*0x179c67*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 1064LL))(v3); /*0x179c79*/
}

// [4/51] Address: 0x188df0
// Method: GameManager::getUnlockForAchievement
// Hidden C++ exception states: #wind=4
char __fastcall GameManager_getUnlockForAchievement(__int64 a1, __int64 a2, _DWORD *a3, void *a4)
{
  __int64 v8; // r8
  char v9; // bl
  void **v10; // rsi
  char *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  void **v15; // r14
  __int64 v16; // rsi
  void **v17; // rax
  char v18; // bl
  void *v19; // rcx
  void *v20; // rcx
  const char *v21; // rcx
  __int64 v22; // r8
  size_t v23; // r8
  char *v24; // rdx
  char *v25; // rcx
  void *v26[2]; // [rsp+30h] [rbp-69h] BYREF
  __int128 v27; // [rsp+40h] [rbp-59h]
  int v28; // [rsp+50h] [rbp-49h]
  void *Src[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-31h]
  unsigned __int64 v31; // [rsp+70h] [rbp-29h]
  char *String[2]; // [rsp+78h] [rbp-21h] BYREF
  __m128i si128; // [rsp+88h] [rbp-11h]
  void *Block[2]; // [rsp+98h] [rbp-1h] BYREF
  __int128 v35; // [rsp+A8h] [rbp+Fh]

  v28 = 0; /*0x188e26*/
  if ( *(_QWORD *)(a2 + 16) ) /*0x188e2a*/
  {
    cocos2d::ZipUtils::decompressString(Src, a2, 0, 0); /*0x188e5b*/
    if ( !v30 ) /*0x188e69*/
    {
      if ( a4 ) /*0x188e6e*/
        sub_3F5A0(a4, "Invalid or corrupt share string.", 0x20u); /*0x188e80*/
      v9 = 0; /*0x188e85*/
LABEL_54:
      sub_3C310(Src); /*0x189136*/
      return v9; /*0x189168*/
    }
    v10 = Src; /*0x188e8c*/
    if ( v31 > 0xF ) /*0x188e9c*/
      v10 = (void **)Src[0]; /*0x188e9c*/
    v11 = (char *)v10 + v30; /*0x188eae*/
    LOBYTE(v8) = 59; /*0x188eb1*/
    v12 = sub_6722F0(v10, (char *)v10 + v30, v8); /*0x188eba*/
    v13 = -1; /*0x188ec5*/
    if ( (char *)v12 != v11 ) /*0x188ecf*/
      v13 = v12 - (_QWORD)v10; /*0x188ecf*/
    v14 = v30; /*0x188ed7*/
    if ( v13 == -1 ) /*0x188ee9*/
    {
      *(_OWORD *)v26 = 0; /*0x188eef*/
      v27 = 0; /*0x188ef3*/
      v15 = Src; /*0x188ef8*/
      if ( v31 > 0xF ) /*0x188f00*/
        v15 = (void **)Src[0]; /*0x188f00*/
      v16 = 0x7FFFFFFFFFFFFFFFLL; /*0x188f04*/
      if ( v30 > 0x7FFFFFFFFFFFFFFFLL ) /*0x188f11*/
        sub_8D90(); /*0x189169*/
      if ( v30 > 0xF ) /*0x188f1b*/
      {
        if ( (v30 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x188f3d*/
        {
          v16 = v30 | 0xF; /*0x188f3f*/
          if ( (v30 | 0xF) < 0x16 ) /*0x188f4a*/
            v16 = 22; /*0x188f4a*/
        }
        v26[0] = (void *)sub_3C460(v16 + 1); /*0x188f57*/
        *(_QWORD *)&v27 = v14; /*0x188f5b*/
        *((_QWORD *)&v27 + 1) = v16; /*0x188f5f*/
        memcpy(v26[0], v15, v14 + 1); /*0x188f6d*/
      }
      else
      {
        *(_QWORD *)&v27 = v30; /*0x188f1d*/
        *((_QWORD *)&v27 + 1) = 15; /*0x188f21*/
        *(_OWORD *)v26 = *(_OWORD *)v15; /*0x188f2d*/
      }
      v17 = v26; /*0x188f72*/
      v18 = 1; /*0x188f76*/
    }
    else
    {
      *(_OWORD *)Block = 0; /*0x188f7d*/
      v35 = 0; /*0x188f81*/
      sub_3C230(Block); /*0x188f9d*/
      v17 = Block; /*0x188fa2*/
      v18 = 6; /*0x188fa6*/
    }
    *(_OWORD *)String = *(_OWORD *)v17; /*0x188fae*/
    si128 = *((__m128i *)v17 + 1); /*0x188fb6*/
    v17[2] = 0; /*0x188fba*/
    v17[3] = &loc_D + 2; /*0x188fbe*/
    *(_BYTE *)v17 = 0; /*0x188fc6*/
    if ( (v18 & 2) != 0 ) /*0x188fcc*/
    {
      v18 &= ~2u; /*0x188fce*/
      if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x188fd9*/
      {
        v19 = Block[0]; /*0x188fde*/
        if ( (unsigned __int64)(*((_QWORD *)&v35 + 1) + 1LL) >= 0x1000 ) /*0x188fec*/
        {
          v19 = (void *)*((_QWORD *)Block[0] - 1); /*0x188ff2*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F ) /*0x189001*/
            invoke_watson(0, 0, 0, 0, 0); /*0x189012*/
        }
        j_j_free(v19); /*0x189019*/
      }
    }
    if ( (v18 & 1) != 0 && *((_QWORD *)&v27 + 1) > 0xFu ) /*0x18902c*/
    {
      v20 = v26[0]; /*0x189031*/
      if ( (unsigned __int64)(*((_QWORD *)&v27 + 1) + 1LL) >= 0x1000 ) /*0x18903f*/
      {
        v20 = (void *)*((_QWORD *)v26[0] - 1); /*0x189045*/
        if ( (unsigned __int64)((char *)v26[0] - (char *)v20 - 8) > 0x1F ) /*0x189054*/
          invoke_watson(0, 0, 0, 0, 0); /*0x189065*/
      }
      j_j_free(v20); /*0x18906c*/
    }
    v21 = (const char *)String; /*0x189071*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x18907a*/
      v21 = String[0]; /*0x18907a*/
    if ( (unsigned int)(atoi(v21) - 1) > 1 ) /*0x18908a*/
    {
      if ( a4 ) /*0x1890bf*/
      {
        v23 = 32; /*0x1890c1*/
        v24 = "Invalid or corrupt share string."; /*0x1890c7*/
        goto LABEL_46; /*0x1890c7*/
      }
    }
    else
    {
      LOBYTE(v22) = *a3 == 0; /*0x189090*/
      if ( (unsigned __int8)sub_1867B0(a1, Src, v22) ) /*0x18909b*/
      {
        v9 = 1; /*0x1890b8*/
LABEL_48:
        if ( si128.m128i_i64[1] > 0xFuLL ) /*0x1890e0*/
        {
          v25 = String[0]; /*0x1890e5*/
          if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x1890f3*/
          {
            v25 = (char *)*((_QWORD *)String[0] - 1); /*0x1890f9*/
            if ( (unsigned __int64)(String[0] - v25 - 8) > 0x1F ) /*0x189108*/
              invoke_watson(0, 0, 0, 0, 0); /*0x189119*/
          }
          j_j_free(v25); /*0x189120*/
        }
        si128 = _mm_load_si128((const __m128i *)&Size); /*0x18912d*/
        LOBYTE(String[0]) = 0; /*0x189132*/
        goto LABEL_54; /*0x189132*/
      }
      if ( a4 ) /*0x1890a7*/
      {
        v23 = 12; /*0x1890a9*/
        v24 = "Parse error."; /*0x1890af*/
LABEL_46:
        sub_3F5A0(a4, v24, v23); /*0x1890ce*/
      }
    }
    v9 = 0; /*0x1890d6*/
    goto LABEL_48; /*0x1890d6*/
  }
  if ( a4 ) /*0x188e33*/
    sub_3F5A0(a4, "Empty string.", 0xDu); /*0x188e45*/
  return 0; /*0x189142*/
}

// [5/51] Address: 0x272c50
// Method: GameManager::sharedState
// Hidden C++ exception states: #wind=1
__int64 GameManager_sharedState()
{
  __int64 result; // rax
  void *v1; // [rsp+30h] [rbp+8h]

  result = qword_905FD0; /*0x272c54*/
  if ( !qword_905FD0 ) /*0x272c5e*/
  {
    v1 = operator new(0x6E8u); /*0x272c6a*/
    qword_905FD0 = sub_2723A0(v1); /*0x272c7a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x272c84*/
    return qword_905FD0; /*0x272c87*/
  }
  return result; /*0x272c8e*/
}

// [6/51] Address: 0x272ca0
// Method: GameManager::init
char __fastcall GameManager_init(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCObject *v3; // rax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // r9
  int v7; // ebx
  int v8; // ebx
  float v9; // xmm6_4
  int v10; // ebx
  float v11; // xmm0_4
  int i; // [rsp+40h] [rbp+8h] BYREF

  sub_3F5A0((void *)(a1 + 320), "CCGameManager.dat", 0x11u); /*0x272cd0*/
  *(_WORD *)(a1 + 430) = 0; /*0x272cd7*/
  *(_QWORD *)(a1 + 472) = 0; /*0x272ce0*/
  *(_QWORD *)(a1 + 496) = 0; /*0x272ce7*/
  *(_BYTE *)(a1 + 513) = 0; /*0x272cee*/
  v3 = (cocos2d::CCObject *)cocos2d::CCArray::create(v2); /*0x272cf5*/
  *(_QWORD *)(a1 + 1280) = v3; /*0x272cfe*/
  cocos2d::CCObject::retain(v3); /*0x272d05*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 888LL))(a1); /*0x272d11*/
  sub_82220(a1 + 1232, 9); /*0x272d23*/
  v4 = 0; /*0x272d28*/
  v5 = 0; /*0x272d31*/
  v6 = 0; /*0x272d34*/
  while ( 1 ) /*0x272d59*/
  {
    *(_DWORD *)(v6 + *(_QWORD *)(a1 + 1232)) = v4; /*0x272d47*/
    switch ( v5 ) /*0x272d59*/
    {
      case 0: /*0x272d59*/
        v4 += 485; /*0x272d5b*/
        ++v5; /*0x272d61*/
        v6 += 4; /*0x272d64*/
        break; /*0x272d68*/
      case 1: /*0x272d59*/
        v4 += 169; /*0x272d6a*/
        ++v5; /*0x272d70*/
        v6 += 4; /*0x272d73*/
        break; /*0x272d77*/
      case 2: /*0x272d59*/
        v4 += 118; /*0x272d79*/
        ++v5; /*0x272d7c*/
        v6 += 4; /*0x272d7f*/
        break; /*0x272d83*/
      case 3: /*0x272d59*/
        v4 += 149; /*0x272d85*/
        ++v5; /*0x272d8b*/
        v6 += 4; /*0x272d8e*/
        break; /*0x272d92*/
      case 4: /*0x272d59*/
        v4 += 96; /*0x272d94*/
        ++v5; /*0x272d97*/
        v6 += 4; /*0x272d9a*/
        break; /*0x272d9e*/
      case 5: /*0x272d59*/
        v4 += 68; /*0x272da0*/
        ++v5; /*0x272da3*/
        v6 += 4; /*0x272da6*/
        break; /*0x272daa*/
      case 6: /*0x272d59*/
        v4 += 69; /*0x272dac*/
        ++v5; /*0x272daf*/
        v6 += 4; /*0x272db2*/
        break; /*0x272db6*/
      case 7: /*0x272d59*/
        v4 += 43; /*0x272db8*/
        ++v5; /*0x272dbb*/
        v6 += 4; /*0x272dbe*/
        break; /*0x272dc2*/
      case 8: /*0x272d59*/
        v7 = v4 + 8; /*0x272ddf*/
        for ( i = 0; i < v7; ++i ) /*0x272de7*/
          *(_DWORD *)sub_10C920(a1 + 1184, &i) = 0; /*0x272e01*/
        sub_2A5630(a1); /*0x272e14*/
        v8 = *(_DWORD *)(a1 + 692) - *(_DWORD *)(a1 + 696); /*0x272e1f*/
        v9 = (float)((float)rand() / 32767.0) * 1000000.0; /*0x272e49*/
        v10 = (int)(float)(v9 + floorf((float)v8 / 10000.0)); /*0x272e5a*/
        v11 = (float)((float)rand() / 32767.0) * 1000.0; /*0x272e82*/
        *(_DWORD *)(a1 + 932) = (int)v11; /*0x272e8e*/
        *(_DWORD *)(a1 + 928) = v10 + (int)v11; /*0x272e9b*/
        return 1;
    }
  }
}

// [7/51] Address: 0x273050
// Method: GameManager::playMenuMusic
// Hidden C++ exception states: #wind=8
__int64 __fastcall GameManager_playMenuMusic(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  void **v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  void *v12; // [rsp+30h] [rbp-29h]
  void *v13; // [rsp+30h] [rbp-29h]
  void *v14; // [rsp+30h] [rbp-29h]
  __int128 v15; // [rsp+38h] [rbp-21h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-11h]
  __int64 v17; // [rsp+50h] [rbp-9h]
  __int128 *v18; // [rsp+58h] [rbp-1h]
  _BYTE v19[32]; // [rsp+60h] [rbp+7h] BYREF
  void *Src[2]; // [rsp+80h] [rbp+27h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp+37h]
  unsigned __int64 v22; // [rsp+98h] [rbp+3Fh]

  v2 = qword_905FD0; /*0x27307d*/
  if ( !qword_905FD0 ) /*0x273087*/
  {
    v12 = operator new(0x6E8u); /*0x273093*/
    qword_905FD0 = sub_2723A0(v12); /*0x2730a0*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2730b1*/
    v2 = qword_905FD0; /*0x2730b3*/
  }
  if ( (unsigned __int8)GameManager_getGameVariable(v2, "0122") ) /*0x2730c1*/
  {
    v3 = qword_905F60; /*0x2730ca*/
    if ( !qword_905F60 ) /*0x2730d4*/
    {
      v13 = operator new(0x8A8u); /*0x2730e0*/
      qword_905F60 = sub_5AE20(v13); /*0x2730ed*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x2730fe*/
      v3 = qword_905F60; /*0x273100*/
    }
    if ( *(_QWORD *)(v3 + 552) ) /*0x273107*/
      FMOD::ChannelControl::stop(); /*0x273113*/
    sub_3DB60(v3 + 1096); /*0x273120*/
    sub_3DB60(v3 + 1160); /*0x27312c*/
    return sub_3DB60(v3 + 1224); /*0x273138*/
  }
  else
  {
    sub_272ED0(a1, Src); /*0x273149*/
    v5 = sub_3E4F0(v19, Src); /*0x273164*/
    v6 = qword_905F60; /*0x273167*/
    if ( !qword_905F60 ) /*0x273171*/
    {
      v18 = (__int128 *)operator new(0x8A8u); /*0x27317d*/
      qword_905F60 = sub_5AE20(v18); /*0x27318a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x27319b*/
      v6 = qword_905F60; /*0x27319d*/
    }
    if ( !(unsigned __int8)sub_619A0(v6, v5) ) /*0x2731a7*/
    {
      v18 = &v15; /*0x2731b8*/
      v15 = 0; /*0x2731bf*/
      v16 = 0; /*0x2731c5*/
      v17 = 0; /*0x2731c9*/
      v8 = Src; /*0x2731cd*/
      if ( v22 > 0xF ) /*0x2731d6*/
        v8 = (void **)Src[0]; /*0x2731d6*/
      v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x2731db*/
      v10 = v21; /*0x2731e5*/
      if ( v21 > 0x7FFFFFFFFFFFFFFFLL ) /*0x2731ec*/
        sub_8D90(); /*0x2732c8*/
      if ( v21 > 0xF ) /*0x2731f6*/
      {
        if ( (v21 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x273217*/
        {
          v9 = v21 | 0xF; /*0x273219*/
          if ( (v21 | 0xF) < 0x16 ) /*0x273224*/
            v9 = 22; /*0x273224*/
        }
        *(_QWORD *)&v15 = sub_3C460(v9 + 1); /*0x273231*/
        v16 = v10; /*0x273235*/
        v17 = v9; /*0x273239*/
        memcpy((void *)v15, v8, v10 + 1); /*0x273247*/
      }
      else
      {
        v16 = v21; /*0x2731f8*/
        v17 = 15; /*0x2731fc*/
        v15 = *(_OWORD *)v8; /*0x273207*/
      }
      v11 = qword_905F60; /*0x27324d*/
      if ( !qword_905F60 ) /*0x273257*/
      {
        v14 = operator new(0x8A8u); /*0x273263*/
        qword_905F60 = sub_5AE20(v14); /*0x273270*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x273281*/
        v11 = qword_905F60; /*0x273283*/
      }
      LOBYTE(v7) = 1; /*0x27328d*/
      FMODAudioEngine_playMusic(v11, &v15, v7); /*0x273294*/
    }
    return sub_3C310(Src); /*0x27329e*/
  }
}

// [8/51] Address: 0x2733c0
// Method: GameManager::fadeInMusic
// Hidden C++ exception states: #wind=5
__int64 __fastcall GameManager_fadeInMusic(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  void *v9; // [rsp+30h] [rbp-48h]
  void *v10; // [rsp+38h] [rbp-40h]
  _BYTE v11[32]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  v12 = a2; /*0x2733dc*/
  if ( *(_QWORD *)(a2 + 16) ) /*0x2733e1*/
  {
    v3 = sub_3E4F0(v11, a2); /*0x273400*/
    v4 = qword_905F60; /*0x273403*/
    if ( !qword_905F60 ) /*0x27340d*/
    {
      v10 = operator new(0x8A8u); /*0x273419*/
      qword_905F60 = sub_5AE20(v10); /*0x273427*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x273438*/
      v4 = qword_905F60; /*0x27343a*/
    }
    if ( !(unsigned __int8)sub_619A0(v4, v3) ) /*0x273444*/
    {
      v5 = sub_3E4F0(v11, a2); /*0x273464*/
      v7 = qword_905F60; /*0x273467*/
      if ( !qword_905F60 ) /*0x273471*/
      {
        v9 = operator new(0x8A8u); /*0x27347d*/
        qword_905F60 = sub_5AE20(v9); /*0x27348b*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x273498*/
        v7 = qword_905F60; /*0x27349b*/
      }
      LOBYTE(v6) = 1; /*0x2734aa*/
      FMODAudioEngine_playMusic(v7, v5, v6); /*0x2734b0*/
    }
  }
  return sub_3C310(a2); /*0x2734be*/
}

// [9/51] Address: 0x273b40
// Method: GameManager::iconKey
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameManager_iconKey(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v4; // ebx
  const char *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD v11[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[528]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a4 - 1; /*0x273b6e*/
  v11[0] = a2; /*0x273b78*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x273b85*/
  switch ( v4 ) /*0x273bb1*/
  {
    case 0: /*0x273bb1*/
      v7 = "ship_"; /*0x273bb3*/
      break; /*0x273bba*/
    case 1: /*0x273bb1*/
      v7 = "ball_"; /*0x273bbc*/
      break; /*0x273bc3*/
    case 2: /*0x273bb1*/
      v7 = "bird_"; /*0x273bc5*/
      break; /*0x273bcc*/
    case 3: /*0x273bb1*/
      v7 = "dart_"; /*0x273bce*/
      break; /*0x273bd5*/
    case 4: /*0x273bb1*/
      v7 = "robot_"; /*0x273bd7*/
      break; /*0x273bde*/
    case 5: /*0x273bb1*/
      v7 = "spider_"; /*0x273be0*/
      break; /*0x273be7*/
    case 6: /*0x273bb1*/
      v7 = "swing_"; /*0x273c0d*/
      break; /*0x273c14*/
    case 7: /*0x273bb1*/
      v7 = "jetpack_"; /*0x273c16*/
      break; /*0x273c1d*/
    case 97: /*0x273bb1*/
      v7 = "death_"; /*0x273be9*/
      break; /*0x273bf0*/
    case 98: /*0x273bb1*/
      v7 = "special_"; /*0x273bf2*/
      break; /*0x273bf9*/
    case 99: /*0x273bb1*/
      v7 = "item_"; /*0x273bfb*/
      break; /*0x273c02*/
    case 100: /*0x273bb1*/
      v7 = "shipstreak_"; /*0x273c04*/
      break; /*0x273c0b*/
    default:
      v7 = "i_"; /*0x273c1f*/
      break; /*0x273c1f*/
  }
  v11[0] = v7; /*0x273c26*/
  v11[1] = 0; /*0x273c2b*/
  fmt::BasicWriter<char>::operator<<(v12, v11); /*0x273c3a*/
  fmt::BasicWriter<char>::operator<<(v12, a3); /*0x273c47*/
  v8 = fmt::BasicWriter<char>::c_str(v12); /*0x273c52*/
  *(_OWORD *)a2 = 0; /*0x273c5b*/
  *(_QWORD *)(a2 + 16) = 0; /*0x273c5e*/
  *(_QWORD *)(a2 + 24) = 0; /*0x273c62*/
  v9 = -1; /*0x273c66*/
  do /*0x273c73*/
    ++v9; /*0x273c70*/
  while ( *(_BYTE *)(v8 + v9) ); /*0x273c73*/
  sub_3C230(a2); /*0x273c80*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x273c8b*/
  return a2; /*0x273c94*/
}

// [10/51] Address: 0x273d60
// Method: GameManager::isIconUnlocked
// Hidden C++ exception states: #wind=2
char __fastcall GameManager_isIconUnlocked(__int64 a1, signed int a2, unsigned int a3)
{
  __int64 v6; // rax
  cocos2d::CCString *v7; // rax
  bool v8; // si
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edi
  void *v13; // [rsp+20h] [rbp-48h]
  _BYTE v14[32]; // [rsp+28h] [rbp-40h] BYREF

  if ( !a3 ) /*0x273d82*/
  {
    if ( a2 >= 5 ) /*0x273d8b*/
      goto LABEL_3; /*0x273d8b*/
    return 1; /*0x273e22*/
  }
  if ( a2 < 2 ) /*0x273e1a*/
    return 1; /*0x273e1a*/
LABEL_3:
  v6 = GameManager_iconKey(a1, (__int64)v14, a2, a3); /*0x273d91*/
  v7 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(a1 + 432), v6); /*0x273dac*/
  v8 = cocos2d::CCString::boolValue(v7); /*0x273dbb*/
  sub_3C310(v14); /*0x273dc3*/
  if ( v8 ) /*0x273dcb*/
    return v8; /*0x273e24*/
  v11 = GameManager_iconTypeToUnlockType(v9, a3); /*0x273dd4*/
  if ( !qword_905FE0 ) /*0x273dde*/
  {
    v13 = operator new(0x3E8u); /*0x273dea*/
    qword_905FE0 = sub_2D2B40(v13); /*0x273df8*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x273e09*/
  }
  return sub_2E5B30(v10, v11, (unsigned int)a2); /*0x273e28*/
}

// [11/51] Address: 0x273e40
// Method: GameManager::iconTypeToUnlockType
__int64 __fastcall GameManager_iconTypeToUnlockType(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 ) /*0x273e61*/
  {
    case 0: /*0x273e61*/
      result = 1; /*0x273e63*/
      break; /*0x273e68*/
    case 1: /*0x273e61*/
      result = 4; /*0x273e69*/
      break; /*0x273e6e*/
    case 2: /*0x273e61*/
      result = 5; /*0x273e6f*/
      break; /*0x273e74*/
    case 3: /*0x273e61*/
      result = 6; /*0x273e75*/
      break; /*0x273e7a*/
    case 4: /*0x273e61*/
      result = 7; /*0x273e7b*/
      break; /*0x273e80*/
    case 5: /*0x273e61*/
      result = 8; /*0x273e81*/
      break; /*0x273e86*/
    case 6: /*0x273e61*/
      result = 9; /*0x273e87*/
      break; /*0x273e8c*/
    case 7: /*0x273e61*/
      result = 13; /*0x273e8d*/
      break; /*0x273e92*/
    case 8: /*0x273e61*/
      result = 14; /*0x273ea5*/
      break; /*0x273eaa*/
    case 98: /*0x273e61*/
      result = 11; /*0x273e99*/
      break; /*0x273e9e*/
    case 99: /*0x273e61*/
      result = 10; /*0x273e93*/
      break; /*0x273e98*/
    case 100: /*0x273e61*/
      result = 12; /*0x273e9f*/
      break; /*0x273ea4*/
    case 101: /*0x273e61*/
      result = 15; /*0x273eab*/
      break; /*0x273eb0*/
    default:
      result = 0; /*0x273eb1*/
      break; /*0x273eb1*/
  }
  return result; /*0x273e68*/
}

// [12/51] Address: 0x274010
// Method: GameManager::colorKey
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameManager_colorKey(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  const char *v10; // [rsp+20h] [rbp-258h] BYREF
  __int64 v11; // [rsp+28h] [rbp-250h]
  _BYTE v12[528]; // [rsp+40h] [rbp-238h] BYREF

  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x27404d*/
  v10 = "c"; /*0x274068*/
  v11 = 0; /*0x27406d*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x27407c*/
  fmt::BasicWriter<char>::operator<<(v12, a4 == 2); /*0x274089*/
  v10 = (const char *)&unk_70F154; /*0x274096*/
  v11 = 0; /*0x27409b*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x2740aa*/
  fmt::BasicWriter<char>::operator<<(v12, a3); /*0x2740b7*/
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x2740c2*/
  *(_OWORD *)a2 = 0; /*0x2740cb*/
  *(_QWORD *)(a2 + 16) = 0; /*0x2740ce*/
  *(_QWORD *)(a2 + 24) = 0; /*0x2740d2*/
  v8 = -1; /*0x2740d6*/
  do /*0x2740e3*/
    ++v8; /*0x2740e0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x2740e3*/
  sub_3C230(a2); /*0x2740f0*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x2740fb*/
  return a2; /*0x274104*/
}

// [13/51] Address: 0x276180
// Method: GameManager::verifyCoinUnlocks
// Hidden C++ exception states: #wind=115
unsigned int __fastcall GameManager_verifyCoinUnlocks(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  int i; // r14d
  __int64 v4; // rax
  __int64 MainLevel; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // al
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int j; // r14d
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  char v22; // al
  int v23; // edi
  __int64 v24; // rbx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rcx
  char v33; // al
  int v34; // ecx
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // r15
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rbx
  struct cocos2d::CCObject *v42; // rax
  cocos2d::CCArray *v43; // r14
  void *v44; // rcx
  int v45; // edi
  unsigned int v46; // ebx
  unsigned int result; // eax
  cocos2d::CCString *v48; // rax
  unsigned int v49; // esi
  cocos2d::CCString *v50; // rax
  int v51; // r15d
  __int64 v52; // rcx
  char v53; // al
  int v54; // esi
  __int64 v55; // rcx
  void *v56; // [rsp+370h] [rbp-80h]
  void *v57; // [rsp+370h] [rbp-80h]
  void *v58; // [rsp+370h] [rbp-80h]
  void *v59; // [rsp+370h] [rbp-80h]
  __int64 v60; // [rsp+370h] [rbp-80h]
  void *v61; // [rsp+370h] [rbp-80h]
  int v62; // [rsp+378h] [rbp-78h]
  int Stat; // [rsp+37Ch] [rbp-74h]
  void *v64; // [rsp+380h] [rbp-70h]
  __int64 v65; // [rsp+380h] [rbp-70h]
  void *v67; // [rsp+388h] [rbp-68h]
  __int64 v68; // [rsp+4E0h] [rbp+F0h]
  __int64 v69; // [rsp+4E8h] [rbp+F8h]
  __int64 v70; // [rsp+4F0h] [rbp+100h]
  __int64 v71; // [rsp+4F8h] [rbp+108h]
  __int64 v72; // [rsp+500h] [rbp+110h]
  __int64 v73; // [rsp+508h] [rbp+118h]
  __int64 v74; // [rsp+510h] [rbp+120h]
  __int64 v75; // [rsp+518h] [rbp+128h]
  __int64 v76; // [rsp+520h] [rbp+130h]
  __int64 v77; // [rsp+528h] [rbp+138h]
  __int64 v78; // [rsp+530h] [rbp+140h]
  __int64 v79; // [rsp+538h] [rbp+148h]
  __int64 v80; // [rsp+540h] [rbp+150h]
  __int64 v81; // [rsp+548h] [rbp+158h]
  __int64 v82; // [rsp+550h] [rbp+160h]
  __int64 v83; // [rsp+558h] [rbp+168h]
  __int64 v84; // [rsp+560h] [rbp+170h]
  __int64 v85; // [rsp+568h] [rbp+178h]
  __int64 v86; // [rsp+570h] [rbp+180h]
  __int64 v87; // [rsp+578h] [rbp+188h]
  __int64 v88; // [rsp+580h] [rbp+190h]
  __int64 v89; // [rsp+588h] [rbp+198h]
  __int64 v90; // [rsp+590h] [rbp+1A0h]
  __int64 v91; // [rsp+598h] [rbp+1A8h]
  __int64 v92; // [rsp+5A0h] [rbp+1B0h]
  __int64 v93; // [rsp+5A8h] [rbp+1B8h]
  __int64 v94; // [rsp+5B0h] [rbp+1C0h]
  __int64 v95; // [rsp+5B8h] [rbp+1C8h]
  __int64 v96; // [rsp+5C0h] [rbp+1D0h]
  __int64 v97; // [rsp+5C8h] [rbp+1D8h]
  __int64 v98; // [rsp+5D0h] [rbp+1E0h]
  __int64 v99; // [rsp+5D8h] [rbp+1E8h]
  __int64 v100; // [rsp+5E0h] [rbp+1F0h]
  __int64 v101; // [rsp+5E8h] [rbp+1F8h]
  __int64 v102; // [rsp+5F0h] [rbp+200h]
  __int64 v103; // [rsp+5F8h] [rbp+208h]
  __int64 v104; // [rsp+600h] [rbp+210h]
  __int64 v105; // [rsp+608h] [rbp+218h]
  __int64 v106; // [rsp+610h] [rbp+220h]
  __int64 v107; // [rsp+618h] [rbp+228h]
  __int64 v108; // [rsp+620h] [rbp+230h]
  __int64 v109; // [rsp+628h] [rbp+238h]
  __int64 v110; // [rsp+630h] [rbp+240h]
  __int64 v111; // [rsp+638h] [rbp+248h]
  __int64 v112; // [rsp+640h] [rbp+250h]
  __int64 v113; // [rsp+648h] [rbp+258h]
  __int64 v114; // [rsp+650h] [rbp+260h]
  __int64 v115; // [rsp+658h] [rbp+268h]
  __int64 v116; // [rsp+660h] [rbp+270h]
  __int64 v117; // [rsp+668h] [rbp+278h]
  __int64 v118; // [rsp+670h] [rbp+280h]
  __int64 v119; // [rsp+678h] [rbp+288h]
  __int64 v120; // [rsp+680h] [rbp+290h]
  void *Block[2]; // [rsp+6A0h] [rbp+2B0h] BYREF
  __int64 v122; // [rsp+6B0h] [rbp+2C0h]
  unsigned __int64 v123; // [rsp+6B8h] [rbp+2C8h]
  __int128 v124; // [rsp+6C0h] [rbp+2D0h] BYREF
  __int64 v125; // [rsp+6D0h] [rbp+2E0h]
  __int64 v126; // [rsp+6D8h] [rbp+2E8h]
  __int128 v127; // [rsp+6E0h] [rbp+2F0h] BYREF
  __int64 v128; // [rsp+6F0h] [rbp+300h]
  __int64 v129; // [rsp+6F8h] [rbp+308h]
  __int128 v130; // [rsp+700h] [rbp+310h] BYREF
  __int64 v131; // [rsp+710h] [rbp+320h]
  __int64 v132; // [rsp+718h] [rbp+328h]
  __int128 v133; // [rsp+720h] [rbp+330h] BYREF
  __int64 v134; // [rsp+730h] [rbp+340h]
  __int64 v135; // [rsp+738h] [rbp+348h]
  __int128 v136; // [rsp+740h] [rbp+350h] BYREF
  __int64 v137; // [rsp+750h] [rbp+360h]
  __int64 v138; // [rsp+758h] [rbp+368h]
  __int128 v139; // [rsp+760h] [rbp+370h] BYREF
  __int64 v140; // [rsp+770h] [rbp+380h]
  __int64 v141; // [rsp+778h] [rbp+388h]
  __int128 v142; // [rsp+780h] [rbp+390h] BYREF
  __int64 v143; // [rsp+790h] [rbp+3A0h]
  __int64 v144; // [rsp+798h] [rbp+3A8h]
  __int128 v145; // [rsp+7A0h] [rbp+3B0h] BYREF
  __int64 v146; // [rsp+7B0h] [rbp+3C0h]
  __int64 v147; // [rsp+7B8h] [rbp+3C8h]
  __int128 v148; // [rsp+7C0h] [rbp+3D0h] BYREF
  __int64 v149; // [rsp+7D0h] [rbp+3E0h]
  __int64 v150; // [rsp+7D8h] [rbp+3E8h]
  __int128 v151; // [rsp+7E0h] [rbp+3F0h] BYREF
  __int64 v152; // [rsp+7F0h] [rbp+400h]
  __int64 v153; // [rsp+7F8h] [rbp+408h]
  __int128 v154; // [rsp+800h] [rbp+410h] BYREF
  __int64 v155; // [rsp+810h] [rbp+420h]
  __int64 v156; // [rsp+818h] [rbp+428h]
  __int128 v157; // [rsp+820h] [rbp+430h] BYREF
  __int64 v158; // [rsp+830h] [rbp+440h]
  __int64 v159; // [rsp+838h] [rbp+448h]
  __int128 v160; // [rsp+840h] [rbp+450h] BYREF
  __int64 v161; // [rsp+850h] [rbp+460h]
  __int64 v162; // [rsp+858h] [rbp+468h]
  __int128 v163; // [rsp+860h] [rbp+470h] BYREF
  __int64 v164; // [rsp+870h] [rbp+480h]
  __int64 v165; // [rsp+878h] [rbp+488h]
  __int128 v166; // [rsp+880h] [rbp+490h] BYREF
  __int64 v167; // [rsp+890h] [rbp+4A0h]
  __int64 v168; // [rsp+898h] [rbp+4A8h]
  __int128 v169; // [rsp+8A0h] [rbp+4B0h] BYREF
  __int64 v170; // [rsp+8B0h] [rbp+4C0h]
  __int64 v171; // [rsp+8B8h] [rbp+4C8h]
  __int128 v172; // [rsp+8C0h] [rbp+4D0h] BYREF
  __int64 v173; // [rsp+8D0h] [rbp+4E0h]
  __int64 v174; // [rsp+8D8h] [rbp+4E8h]
  __int128 v175; // [rsp+8E0h] [rbp+4F0h] BYREF
  __int64 v176; // [rsp+8F0h] [rbp+500h]
  __int64 v177; // [rsp+8F8h] [rbp+508h]
  __int128 v178; // [rsp+900h] [rbp+510h] BYREF
  __int64 v179; // [rsp+910h] [rbp+520h]
  __int64 v180; // [rsp+918h] [rbp+528h]
  __int128 v181; // [rsp+920h] [rbp+530h] BYREF
  __int64 v182; // [rsp+930h] [rbp+540h]
  __int64 v183; // [rsp+938h] [rbp+548h]
  __int128 v184; // [rsp+940h] [rbp+550h] BYREF
  __int64 v185; // [rsp+950h] [rbp+560h]
  __int64 v186; // [rsp+958h] [rbp+568h]
  __int128 v187; // [rsp+960h] [rbp+570h] BYREF
  __int64 v188; // [rsp+970h] [rbp+580h]
  __int64 v189; // [rsp+978h] [rbp+588h]
  __int128 v190; // [rsp+980h] [rbp+590h] BYREF
  __int64 v191; // [rsp+990h] [rbp+5A0h]
  __int64 v192; // [rsp+998h] [rbp+5A8h]
  __int128 v193; // [rsp+9A0h] [rbp+5B0h] BYREF
  __int64 v194; // [rsp+9B0h] [rbp+5C0h]
  __int64 v195; // [rsp+9B8h] [rbp+5C8h]
  __int128 v196; // [rsp+9C0h] [rbp+5D0h] BYREF
  __int64 v197; // [rsp+9D0h] [rbp+5E0h]
  __int64 v198; // [rsp+9D8h] [rbp+5E8h]
  __int128 v199; // [rsp+9E0h] [rbp+5F0h] BYREF
  __int64 v200; // [rsp+9F0h] [rbp+600h]
  __int64 v201; // [rsp+9F8h] [rbp+608h]
  __int128 v202; // [rsp+A00h] [rbp+610h] BYREF
  __int64 v203; // [rsp+A10h] [rbp+620h]
  __int64 v204; // [rsp+A18h] [rbp+628h]
  __int128 v205; // [rsp+A20h] [rbp+630h] BYREF
  __int64 v206; // [rsp+A30h] [rbp+640h]
  __int64 v207; // [rsp+A38h] [rbp+648h]
  __int128 v208; // [rsp+A40h] [rbp+650h] BYREF
  __int64 v209; // [rsp+A50h] [rbp+660h]
  __int64 v210; // [rsp+A58h] [rbp+668h]
  __int128 v211; // [rsp+A60h] [rbp+670h] BYREF
  __int64 v212; // [rsp+A70h] [rbp+680h]
  __int64 v213; // [rsp+A78h] [rbp+688h]
  __int128 v214; // [rsp+A80h] [rbp+690h] BYREF
  __int64 v215; // [rsp+A90h] [rbp+6A0h]
  __int64 v216; // [rsp+A98h] [rbp+6A8h]
  __int128 v217; // [rsp+AA0h] [rbp+6B0h] BYREF
  __int64 v218; // [rsp+AB0h] [rbp+6C0h]
  __int64 v219; // [rsp+AB8h] [rbp+6C8h]
  __int128 v220; // [rsp+AC0h] [rbp+6D0h] BYREF
  __int64 v221; // [rsp+AD0h] [rbp+6E0h]
  __int64 v222; // [rsp+AD8h] [rbp+6E8h]
  __int128 v223; // [rsp+AE0h] [rbp+6F0h] BYREF
  __int64 v224; // [rsp+AF0h] [rbp+700h]
  __int64 v225; // [rsp+AF8h] [rbp+708h]
  __int128 v226; // [rsp+B00h] [rbp+710h] BYREF
  __int64 v227; // [rsp+B10h] [rbp+720h]
  __int64 v228; // [rsp+B18h] [rbp+728h]
  __int128 v229; // [rsp+B20h] [rbp+730h] BYREF
  __int64 v230; // [rsp+B30h] [rbp+740h]
  __int64 v231; // [rsp+B38h] [rbp+748h]
  __int128 v232; // [rsp+B40h] [rbp+750h] BYREF
  __int64 v233; // [rsp+B50h] [rbp+760h]
  __int64 v234; // [rsp+B58h] [rbp+768h]
  __int128 v235; // [rsp+B60h] [rbp+770h] BYREF
  __int64 v236; // [rsp+B70h] [rbp+780h]
  __int64 v237; // [rsp+B78h] [rbp+788h]
  __int128 v238; // [rsp+B80h] [rbp+790h] BYREF
  __int64 v239; // [rsp+B90h] [rbp+7A0h]
  __int64 v240; // [rsp+B98h] [rbp+7A8h]
  __int128 v241; // [rsp+BA0h] [rbp+7B0h] BYREF
  __int64 v242; // [rsp+BB0h] [rbp+7C0h]
  __int64 v243; // [rsp+BB8h] [rbp+7C8h]
  __int128 v244; // [rsp+BC0h] [rbp+7D0h] BYREF
  __int64 v245; // [rsp+BD0h] [rbp+7E0h]
  __int64 v246; // [rsp+BD8h] [rbp+7E8h]
  __int128 v247; // [rsp+BE0h] [rbp+7F0h] BYREF
  __int64 v248; // [rsp+BF0h] [rbp+800h]
  __int64 v249; // [rsp+BF8h] [rbp+808h]
  __int128 v250; // [rsp+C00h] [rbp+810h] BYREF
  __int64 v251; // [rsp+C10h] [rbp+820h]
  __int64 v252; // [rsp+C18h] [rbp+828h]
  __int128 v253; // [rsp+C20h] [rbp+830h] BYREF
  __int64 v254; // [rsp+C30h] [rbp+840h]
  __int64 v255; // [rsp+C38h] [rbp+848h]
  __int128 v256; // [rsp+C40h] [rbp+850h] BYREF
  __int64 v257; // [rsp+C50h] [rbp+860h]
  __int64 v258; // [rsp+C58h] [rbp+868h]
  __int128 v259; // [rsp+C60h] [rbp+870h] BYREF
  __int64 v260; // [rsp+C70h] [rbp+880h]
  __int64 v261; // [rsp+C78h] [rbp+888h]
  __int128 v262; // [rsp+C80h] [rbp+890h] BYREF
  __int64 v263; // [rsp+C90h] [rbp+8A0h]
  __int64 v264; // [rsp+C98h] [rbp+8A8h]
  __int128 v265; // [rsp+CA0h] [rbp+8B0h] BYREF
  __int64 v266; // [rsp+CB0h] [rbp+8C0h]
  __int64 v267; // [rsp+CB8h] [rbp+8C8h]
  __int128 v268; // [rsp+CC0h] [rbp+8D0h] BYREF
  __int64 v269; // [rsp+CD0h] [rbp+8E0h]
  __int64 v270; // [rsp+CD8h] [rbp+8E8h]
  __int128 v271; // [rsp+CE0h] [rbp+8F0h] BYREF
  __int64 v272; // [rsp+CF0h] [rbp+900h]
  __int64 v273; // [rsp+CF8h] [rbp+908h]
  __int128 v274; // [rsp+D00h] [rbp+910h] BYREF
  __int64 v275; // [rsp+D10h] [rbp+920h]
  __int64 v276; // [rsp+D18h] [rbp+928h]
  __int128 v277; // [rsp+D20h] [rbp+930h] BYREF
  __int64 v278; // [rsp+D30h] [rbp+940h]
  __int64 v279; // [rsp+D38h] [rbp+948h]
  __int128 v280; // [rsp+D40h] [rbp+950h] BYREF
  __int64 v281; // [rsp+D50h] [rbp+960h]
  __int64 v282; // [rsp+D58h] [rbp+968h]
  __int128 v283; // [rsp+D60h] [rbp+970h] BYREF
  __int64 v284; // [rsp+D70h] [rbp+980h]
  __int64 v285; // [rsp+D78h] [rbp+988h]
  __int128 v286; // [rsp+D80h] [rbp+990h] BYREF
  __int64 v287; // [rsp+D90h] [rbp+9A0h]
  __int64 v288; // [rsp+D98h] [rbp+9A8h]
  _BYTE v289[32]; // [rsp+DA0h] [rbp+9B0h] BYREF
  _BYTE v290[32]; // [rsp+DC0h] [rbp+9D0h] BYREF
  _BYTE v291[32]; // [rsp+DE0h] [rbp+9F0h] BYREF
  _BYTE v292[32]; // [rsp+E00h] [rbp+A10h] BYREF
  _BYTE v293[32]; // [rsp+E20h] [rbp+A30h] BYREF
  _BYTE v294[32]; // [rsp+E40h] [rbp+A50h] BYREF
  _BYTE v295[32]; // [rsp+E60h] [rbp+A70h] BYREF
  _BYTE v296[32]; // [rsp+E80h] [rbp+A90h] BYREF
  _BYTE v297[32]; // [rsp+EA0h] [rbp+AB0h] BYREF
  _BYTE v298[32]; // [rsp+EC0h] [rbp+AD0h] BYREF
  _BYTE v299[32]; // [rsp+EE0h] [rbp+AF0h] BYREF
  _BYTE v300[32]; // [rsp+F00h] [rbp+B10h] BYREF
  _BYTE v301[32]; // [rsp+F20h] [rbp+B30h] BYREF
  _BYTE v302[32]; // [rsp+F40h] [rbp+B50h] BYREF
  _BYTE v303[32]; // [rsp+F60h] [rbp+B70h] BYREF
  _BYTE v304[32]; // [rsp+F80h] [rbp+B90h] BYREF
  _BYTE v305[32]; // [rsp+FA0h] [rbp+BB0h] BYREF
  _BYTE v306[32]; // [rsp+FC0h] [rbp+BD0h] BYREF
  _BYTE v307[32]; // [rsp+FE0h] [rbp+BF0h] BYREF
  _BYTE v308[32]; // [rsp+1000h] [rbp+C10h] BYREF
  _BYTE v309[32]; // [rsp+1020h] [rbp+C30h] BYREF
  _BYTE v310[32]; // [rsp+1040h] [rbp+C50h] BYREF
  _BYTE v311[32]; // [rsp+1060h] [rbp+C70h] BYREF
  _BYTE v312[32]; // [rsp+1080h] [rbp+C90h] BYREF
  _BYTE v313[32]; // [rsp+10A0h] [rbp+CB0h] BYREF
  _BYTE v314[32]; // [rsp+10C0h] [rbp+CD0h] BYREF
  _BYTE v315[32]; // [rsp+10E0h] [rbp+CF0h] BYREF
  _BYTE v316[32]; // [rsp+1100h] [rbp+D10h] BYREF
  _BYTE v317[32]; // [rsp+1120h] [rbp+D30h] BYREF
  _BYTE v318[32]; // [rsp+1140h] [rbp+D50h] BYREF
  _BYTE v319[32]; // [rsp+1160h] [rbp+D70h] BYREF
  _BYTE v320[32]; // [rsp+1180h] [rbp+D90h] BYREF
  _BYTE v321[32]; // [rsp+11A0h] [rbp+DB0h] BYREF
  _BYTE v322[32]; // [rsp+11C0h] [rbp+DD0h] BYREF
  _BYTE v323[32]; // [rsp+11E0h] [rbp+DF0h] BYREF
  _BYTE v324[32]; // [rsp+1200h] [rbp+E10h] BYREF
  _BYTE v325[32]; // [rsp+1220h] [rbp+E30h] BYREF
  _BYTE v326[32]; // [rsp+1240h] [rbp+E50h] BYREF
  _BYTE v327[32]; // [rsp+1260h] [rbp+E70h] BYREF
  _BYTE v328[32]; // [rsp+1280h] [rbp+E90h] BYREF
  _BYTE v329[32]; // [rsp+12A0h] [rbp+EB0h] BYREF
  _BYTE v330[32]; // [rsp+12C0h] [rbp+ED0h] BYREF
  _BYTE v331[32]; // [rsp+12E0h] [rbp+EF0h] BYREF
  _BYTE v332[32]; // [rsp+1300h] [rbp+F10h] BYREF
  _BYTE v333[32]; // [rsp+1320h] [rbp+F30h] BYREF
  _BYTE v334[32]; // [rsp+1340h] [rbp+F50h] BYREF
  _BYTE v335[32]; // [rsp+1360h] [rbp+F70h] BYREF
  _BYTE v336[32]; // [rsp+1380h] [rbp+F90h] BYREF
  _BYTE v337[32]; // [rsp+13A0h] [rbp+FB0h] BYREF
  _BYTE v338[32]; // [rsp+13C0h] [rbp+FD0h] BYREF
  _BYTE v339[32]; // [rsp+13E0h] [rbp+FF0h] BYREF
  _BYTE v340[32]; // [rsp+1400h] [rbp+1010h] BYREF

  v1 = sub_2D2F50(); /*0x2761c2*/
  Stat = GameStatsManager_getStat(v1, &word_708028); /*0x2761d6*/
  v2 = 0; /*0x2761d9*/
  for ( i = 1; i <= 22; ++i ) /*0x2761db*/
  {
    v4 = sub_2161C0(); /*0x2761e1*/
    MainLevel = GameLevelManager_getMainLevel(v4, (unsigned int)i, 0); /*0x2761f4*/
    v6 = sub_2D2F50(); /*0x2761f7*/
    if ( (unsigned __int8)GameStatsManager_hasCompletedStarLevel(v6, MainLevel) ) /*0x276202*/
    {
      v7 = sub_260FE0(MainLevel, 1); /*0x276218*/
      v8 = sub_2D2F50(); /*0x27621b*/
      v9 = sub_2DFF60(v8, v7); /*0x276226*/
      v10 = v2 + 1; /*0x27622b*/
      if ( !v9 ) /*0x276230*/
        v10 = v2; /*0x276230*/
      v11 = sub_260FE0(MainLevel, 2); /*0x276240*/
      v12 = sub_2D2F50(); /*0x276243*/
      v13 = sub_2DFF60(v12, v11); /*0x27624e*/
      v2 = v10 + 1; /*0x276253*/
      if ( !v13 ) /*0x276258*/
        v2 = v10; /*0x276258*/
      v14 = sub_260FE0(MainLevel, 3); /*0x276268*/
      v15 = sub_2D2F50(); /*0x27626b*/
      if ( (unsigned __int8)sub_2DFF60(v15, v14) ) /*0x276276*/
        ++v2; /*0x27627f*/
    }
  }
  for ( j = 5001; j != 5005; ++j ) /*0x27628e*/
  {
    v17 = *(_QWORD *)&qword_905FB0; /*0x276294*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x27629e*/
    {
      v56 = operator new(0x690u); /*0x2762aa*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v56); /*0x2762b7*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2762c8*/
      v17 = *(_QWORD *)&qword_905FB0; /*0x2762ca*/
    }
    v18 = GameLevelManager_getMainLevel(v17, j, 0); /*0x2762dc*/
    v19 = qword_905FE0; /*0x2762df*/
    if ( !qword_905FE0 ) /*0x2762e9*/
    {
      v64 = operator new(0x3E8u); /*0x2762f5*/
      qword_905FE0 = sub_2D2B40(v64); /*0x276302*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x276313*/
      v19 = qword_905FE0; /*0x276315*/
    }
    if ( (unsigned __int8)GameStatsManager_hasCompletedStarLevel(v19, v18) ) /*0x27631f*/
    {
      v20 = sub_260FE0(v18, 1); /*0x276335*/
      v21 = sub_2D2F50(); /*0x276338*/
      v22 = sub_2DFF60(v21, v20); /*0x276343*/
      v23 = v2 + 1; /*0x276348*/
      if ( !v22 ) /*0x27634d*/
        v23 = v2; /*0x27634d*/
      v24 = sub_260FE0(v18, 2); /*0x27635d*/
      v25 = sub_2D2F50(); /*0x276360*/
      v26 = sub_2DFF60(v25, v24); /*0x27636b*/
      v2 = v23 + 1; /*0x276370*/
      if ( !v26 ) /*0x276375*/
        v2 = v23; /*0x276375*/
      v27 = sub_260FE0(v18, 3); /*0x276385*/
      v28 = sub_2D2F50(); /*0x276388*/
      if ( (unsigned __int8)sub_2DFF60(v28, v27) ) /*0x276393*/
        ++v2; /*0x27639c*/
    }
  }
  v29 = qword_905FE0; /*0x2763ae*/
  if ( !qword_905FE0 ) /*0x2763b8*/
  {
    v57 = operator new(0x3E8u); /*0x2763c4*/
    qword_905FE0 = sub_2D2B40(v57); /*0x2763d1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2763e2*/
    v29 = qword_905FE0; /*0x2763e4*/
  }
  if ( (unsigned __int8)sub_2DFF60(v29, "secret04") ) /*0x2763f2*/
    ++v2; /*0x2763fb*/
  v30 = qword_905FE0; /*0x2763fd*/
  if ( !qword_905FE0 ) /*0x276407*/
  {
    v58 = operator new(0x3E8u); /*0x276413*/
    qword_905FE0 = sub_2D2B40(v58); /*0x276420*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x276431*/
    v30 = qword_905FE0; /*0x276433*/
  }
  v31 = v2 + 1; /*0x276446*/
  if ( !(unsigned __int8)sub_2DFF60(v30, "secret06") ) /*0x276441*/
    v31 = v2; /*0x27644b*/
  v32 = qword_905FE0; /*0x27644e*/
  if ( !qword_905FE0 ) /*0x276458*/
  {
    v59 = operator new(0x3E8u); /*0x276464*/
    qword_905FE0 = sub_2D2B40(v59); /*0x276471*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x276482*/
    v32 = qword_905FE0; /*0x276484*/
  }
  v33 = sub_2DFF60(v32, "secretB03"); /*0x276492*/
  v34 = v31 + 1; /*0x276497*/
  if ( !v33 ) /*0x27649c*/
    v34 = v31; /*0x27649c*/
  v62 = v34; /*0x27649f*/
  v286 = 0; /*0x2764a5*/
  v287 = 1; /*0x2764ac*/
  v288 = 15; /*0x2764b7*/
  LOWORD(v286) = 50; /*0x2764c9*/
  v283 = 0; /*0x2764d6*/
  v284 = 2; /*0x2764dd*/
  v285 = 15; /*0x2764e8*/
  strcpy((char *)&v283, "66"); /*0x2764fa*/
  v280 = 0; /*0x276508*/
  v281 = 1; /*0x27650f*/
  v282 = 15; /*0x27651a*/
  LOWORD(v280) = 50; /*0x276525*/
  v277 = 0; /*0x276532*/
  v278 = 2; /*0x276539*/
  v279 = 15; /*0x276544*/
  strcpy((char *)&v277, "65"); /*0x276556*/
  v274 = 0; /*0x276564*/
  v275 = 1; /*0x27656b*/
  v276 = 15; /*0x276576*/
  LOWORD(v274) = 50; /*0x276581*/
  v271 = 0; /*0x27658e*/
  v272 = 2; /*0x276595*/
  v273 = 15; /*0x2765a0*/
  strcpy((char *)&v271, "64"); /*0x2765b2*/
  v268 = 0; /*0x2765c0*/
  v269 = 1; /*0x2765c7*/
  v270 = 15; /*0x2765d2*/
  LOWORD(v268) = 49; /*0x2765e4*/
  v265 = 0; /*0x2765f1*/
  v266 = 2; /*0x2765f8*/
  v267 = 15; /*0x276603*/
  strcpy((char *)&v265, "63"); /*0x276615*/
  v262 = 0; /*0x276623*/
  v263 = 1; /*0x27662a*/
  v264 = 15; /*0x276635*/
  LOWORD(v262) = 49; /*0x276640*/
  v259 = 0; /*0x27664d*/
  v260 = 2; /*0x276654*/
  v261 = 15; /*0x27665f*/
  strcpy((char *)&v259, "62"); /*0x276671*/
  v256 = 0; /*0x27667f*/
  v257 = 1; /*0x276686*/
  v258 = 15; /*0x276691*/
  LOWORD(v256) = 49; /*0x27669c*/
  v253 = 0; /*0x2766a9*/
  v254 = 2; /*0x2766b0*/
  v255 = 15; /*0x2766bb*/
  strcpy((char *)&v253, "61"); /*0x2766cd*/
  *(_OWORD *)Block = 0; /*0x2766db*/
  v122 = 1; /*0x2766e2*/
  v123 = 15; /*0x2766ed*/
  LOWORD(Block[0]) = 49; /*0x2766f8*/
  v250 = 0; /*0x276705*/
  v251 = 2; /*0x27670c*/
  v252 = 15; /*0x276717*/
  strcpy((char *)&v250, "60"); /*0x276729*/
  v247 = 0; /*0x276737*/
  v248 = 1; /*0x27673e*/
  v249 = 15; /*0x276749*/
  LOWORD(v247) = 49; /*0x276754*/
  v244 = 0; /*0x276761*/
  v245 = 2; /*0x276768*/
  v246 = 15; /*0x276773*/
  strcpy((char *)&v244, "59"); /*0x276785*/
  v241 = 0; /*0x276793*/
  v242 = 1; /*0x27679a*/
  v243 = 15; /*0x2767a5*/
  LOWORD(v241) = 49; /*0x2767b0*/
  v238 = 0; /*0x2767bd*/
  v239 = 2; /*0x2767c4*/
  v240 = 15; /*0x2767cf*/
  strcpy((char *)&v238, "58"); /*0x2767e1*/
  v235 = 0; /*0x2767ef*/
  v236 = 1; /*0x2767f6*/
  v237 = 15; /*0x276801*/
  LOWORD(v235) = 49; /*0x27680c*/
  v232 = 0; /*0x276819*/
  v233 = 2; /*0x276820*/
  v234 = 15; /*0x27682b*/
  strcpy((char *)&v232, "57"); /*0x27683d*/
  v229 = 0; /*0x27684b*/
  v230 = 1; /*0x276852*/
  v231 = 15; /*0x27685d*/
  LOWORD(v229) = 49; /*0x276868*/
  v226 = 0; /*0x276875*/
  v227 = 2; /*0x27687c*/
  v228 = 15; /*0x276887*/
  strcpy((char *)&v226, "56"); /*0x276899*/
  v223 = 0; /*0x2768a7*/
  v224 = 1; /*0x2768ae*/
  v225 = 15; /*0x2768b9*/
  LOWORD(v223) = 49; /*0x2768c4*/
  v220 = 0; /*0x2768d1*/
  v221 = 2; /*0x2768d8*/
  v222 = 15; /*0x2768e3*/
  strcpy((char *)&v220, "55"); /*0x2768f5*/
  v217 = 0; /*0x276903*/
  v218 = 1; /*0x27690a*/
  v219 = 15; /*0x276915*/
  LOWORD(v217) = 49; /*0x276920*/
  v214 = 0; /*0x27692d*/
  v215 = 2; /*0x276934*/
  v216 = 15; /*0x27693f*/
  strcpy((char *)&v214, "54"); /*0x276951*/
  v211 = 0; /*0x27695f*/
  v212 = 1; /*0x276966*/
  v213 = 15; /*0x276971*/
  LOWORD(v211) = 49; /*0x27697c*/
  v208 = 0; /*0x276989*/
  v209 = 2; /*0x276990*/
  v210 = 15; /*0x27699b*/
  strcpy((char *)&v208, "53"); /*0x2769ad*/
  v205 = 0; /*0x2769bb*/
  v206 = 1; /*0x2769c2*/
  v207 = 15; /*0x2769cd*/
  LOWORD(v205) = 49; /*0x2769d8*/
  v202 = 0; /*0x2769e5*/
  v203 = 2; /*0x2769ec*/
  v204 = 15; /*0x2769f7*/
  strcpy((char *)&v202, "52"); /*0x276a09*/
  v199 = 0; /*0x276a17*/
  v200 = 1; /*0x276a1e*/
  v201 = 15; /*0x276a29*/
  LOWORD(v199) = 50; /*0x276a34*/
  v196 = 0; /*0x276a41*/
  v197 = 2; /*0x276a48*/
  v198 = 15; /*0x276a53*/
  strcpy((char *)&v196, "50"); /*0x276a65*/
  v193 = 0; /*0x276a73*/
  v194 = 1; /*0x276a7a*/
  v195 = 15; /*0x276a85*/
  LOWORD(v193) = 50; /*0x276a90*/
  v190 = 0; /*0x276a9d*/
  v191 = 2; /*0x276aa4*/
  v192 = 15; /*0x276aaf*/
  strcpy((char *)&v190, "49"); /*0x276ac1*/
  v187 = 0; /*0x276acf*/
  v188 = 1; /*0x276ad6*/
  v189 = 15; /*0x276ae1*/
  LOWORD(v187) = 50; /*0x276aec*/
  v184 = 0; /*0x276af9*/
  v185 = 2; /*0x276b00*/
  v186 = 15; /*0x276b0b*/
  strcpy((char *)&v184, "48"); /*0x276b1d*/
  v181 = 0; /*0x276b2b*/
  v182 = 1; /*0x276b32*/
  v183 = 15; /*0x276b3d*/
  LOWORD(v181) = 50; /*0x276b48*/
  v178 = 0; /*0x276b55*/
  v179 = 2; /*0x276b5c*/
  v180 = 15; /*0x276b67*/
  strcpy((char *)&v178, "47"); /*0x276b79*/
  v175 = 0; /*0x276b87*/
  v176 = 1; /*0x276b8e*/
  v177 = 15; /*0x276b99*/
  LOWORD(v175) = 50; /*0x276ba4*/
  v172 = 0; /*0x276bb1*/
  v173 = 2; /*0x276bb8*/
  v174 = 15; /*0x276bc3*/
  strcpy((char *)&v172, "46"); /*0x276bd5*/
  v169 = 0; /*0x276be3*/
  v170 = 1; /*0x276bea*/
  v171 = 15; /*0x276bf5*/
  LOWORD(v169) = 49; /*0x276c00*/
  v166 = 0; /*0x276c0d*/
  v167 = 2; /*0x276c14*/
  v168 = 15; /*0x276c1f*/
  strcpy((char *)&v166, "45"); /*0x276c31*/
  v163 = 0; /*0x276c3f*/
  v164 = 1; /*0x276c46*/
  v165 = 15; /*0x276c51*/
  LOWORD(v163) = 49; /*0x276c5c*/
  v160 = 0; /*0x276c69*/
  v161 = 2; /*0x276c70*/
  v162 = 15; /*0x276c7b*/
  strcpy((char *)&v160, "44"); /*0x276c8d*/
  v157 = 0; /*0x276c9b*/
  v158 = 1; /*0x276ca2*/
  v159 = 15; /*0x276cad*/
  LOWORD(v157) = 49; /*0x276cb8*/
  v154 = 0; /*0x276cc5*/
  v155 = 2; /*0x276ccc*/
  v156 = 15; /*0x276cd7*/
  strcpy((char *)&v154, "43"); /*0x276ce9*/
  v151 = 0; /*0x276cf7*/
  v152 = 1; /*0x276cfe*/
  v153 = 15; /*0x276d09*/
  LOWORD(v151) = 49; /*0x276d14*/
  v148 = 0; /*0x276d21*/
  v149 = 2; /*0x276d28*/
  v150 = 15; /*0x276d33*/
  strcpy((char *)&v148, "42"); /*0x276d45*/
  v145 = 0; /*0x276d53*/
  v146 = 1; /*0x276d5a*/
  v147 = 15; /*0x276d65*/
  LOWORD(v145) = 49; /*0x276d70*/
  v142 = 0; /*0x276d7d*/
  v143 = 2; /*0x276d84*/
  v144 = 15; /*0x276d8f*/
  strcpy((char *)&v142, "41"); /*0x276da1*/
  v139 = 0; /*0x276daf*/
  v140 = 1; /*0x276db6*/
  v141 = 15; /*0x276dc1*/
  LOWORD(v139) = 49; /*0x276dcc*/
  v136 = 0; /*0x276dd9*/
  v137 = 2; /*0x276de0*/
  v138 = 15; /*0x276deb*/
  strcpy((char *)&v136, "40"); /*0x276dfd*/
  v133 = 0; /*0x276e0b*/
  v134 = 1; /*0x276e12*/
  v135 = 15; /*0x276e1d*/
  LOWORD(v133) = 49; /*0x276e28*/
  v130 = 0; /*0x276e35*/
  v131 = 2; /*0x276e3c*/
  v132 = 15; /*0x276e47*/
  strcpy((char *)&v130, "39"); /*0x276e59*/
  v127 = 0; /*0x276e67*/
  v128 = 1; /*0x276e6e*/
  v129 = 15; /*0x276e79*/
  LOWORD(v127) = 49; /*0x276e84*/
  sub_3C1F0(v340, &word_755558); /*0x276e9f*/
  sub_3C1F0(v339, &word_708050); /*0x276eb3*/
  sub_3C1F0(v338, &word_75555C); /*0x276ec7*/
  v124 = 0; /*0x276ed0*/
  v125 = 1; /*0x276ed7*/
  v126 = 15; /*0x276ee2*/
  LOWORD(v124) = 49; /*0x276ef4*/
  sub_3C1F0(v337, &word_75553C); /*0x276f0f*/
  sub_3C1F0(v336, &word_708050); /*0x276f23*/
  sub_3C1F0(v335, &word_755540); /*0x276f37*/
  sub_3C1F0(v334, &word_708050); /*0x276f4b*/
  sub_3C1F0(v333, &word_755588); /*0x276f5f*/
  sub_3C1F0(v332, &word_708050); /*0x276f73*/
  sub_3C1F0(v331, &word_75558C); /*0x276f87*/
  sub_3C1F0(v330, &word_708050); /*0x276f9b*/
  sub_3C1F0(v329, "32"); /*0x276faf*/
  sub_3C1F0(v328, &word_708048); /*0x276fc3*/
  sub_3C1F0(v327, &word_755544); /*0x276fd7*/
  sub_3C1F0(v326, &word_708048); /*0x276feb*/
  sub_3C1F0(v325, &word_755548); /*0x276fff*/
  sub_3C1F0(v324, &word_708048); /*0x277013*/
  sub_3C1F0(v323, &word_755560); /*0x277027*/
  sub_3C1F0(v322, &word_708048); /*0x27703b*/
  sub_3C1F0(v321, "28"); /*0x27704f*/
  sub_3C1F0(v320, &word_708048); /*0x277063*/
  sub_3C1F0(v319, &unk_732CD8); /*0x277077*/
  sub_3C1F0(v318, &word_708048); /*0x27708b*/
  sub_3C1F0(v317, &unk_732CDC); /*0x27709f*/
  sub_3C1F0(v316, &word_708048); /*0x2770b3*/
  sub_3C1F0(v315, "22"); /*0x2770c7*/
  sub_3C1F0(v314, &word_708048); /*0x2770db*/
  sub_3C1F0(v313, &word_732410); /*0x2770ef*/
  sub_3C1F0(v312, &word_708048); /*0x277103*/
  sub_3C1F0(v311, &word_732CCC); /*0x277117*/
  sub_3C1F0(v310, &word_708048); /*0x27712b*/
  sub_3C1F0(v309, &word_732D8C); /*0x27713f*/
  sub_3C1F0(v308, &word_708050); /*0x277153*/
  sub_3C1F0(v307, "11"); /*0x277167*/
  sub_3C1F0(v306, &word_708050); /*0x27717b*/
  sub_3C1F0(v305, "10"); /*0x27718f*/
  sub_3C1F0(v304, &word_708050); /*0x2771a3*/
  sub_3C1F0(v303, "9"); /*0x2771b7*/
  sub_3C1F0(v302, &word_708050); /*0x2771cb*/
  sub_3C1F0(v301, &word_708028); /*0x2771df*/
  sub_3C1F0(v300, &word_708050); /*0x2771f3*/
  sub_3C1F0(v299, &word_708030); /*0x277207*/
  sub_3C1F0(v298, &word_708050); /*0x27721b*/
  sub_3C1F0(v297, "6"); /*0x27722f*/
  sub_3C1F0(v296, &word_708050); /*0x277243*/
  sub_3C1F0(v295, &word_708038); /*0x277257*/
  sub_3C1F0(v294, &word_708050); /*0x27726b*/
  sub_3C1F0(v293, &word_708044); /*0x27727f*/
  sub_3C1F0(v292, &word_708050); /*0x277293*/
  sub_3C1F0(v291, &word_708048); /*0x2772a7*/
  sub_3C1F0(v290, &word_708050); /*0x2772bb*/
  sub_3C1F0(v289, &word_708050); /*0x2772cf*/
  cocos2d::CCString::create(&v286); /*0x2772dc*/
  cocos2d::CCString::create(&v283); /*0x2772f0*/
  cocos2d::CCString::create(&v280); /*0x277304*/
  cocos2d::CCString::create(&v277); /*0x277318*/
  cocos2d::CCString::create(&v274); /*0x277329*/
  cocos2d::CCString::create(&v271); /*0x27733a*/
  cocos2d::CCString::create(&v268); /*0x27734b*/
  cocos2d::CCString::create(&v265); /*0x27735c*/
  cocos2d::CCString::create(&v262); /*0x27736d*/
  cocos2d::CCString::create(&v259); /*0x27737e*/
  cocos2d::CCString::create(&v256); /*0x27738f*/
  cocos2d::CCString::create(&v253); /*0x2773a0*/
  cocos2d::CCString::create(Block); /*0x2773b1*/
  cocos2d::CCString::create(&v250); /*0x2773c2*/
  cocos2d::CCString::create(&v247); /*0x2773d3*/
  cocos2d::CCString::create(&v244); /*0x2773e4*/
  cocos2d::CCString::create(&v241); /*0x2773f5*/
  cocos2d::CCString::create(&v238); /*0x277406*/
  cocos2d::CCString::create(&v235); /*0x277417*/
  cocos2d::CCString::create(&v232); /*0x277428*/
  cocos2d::CCString::create(&v229); /*0x277439*/
  cocos2d::CCString::create(&v226); /*0x27744a*/
  cocos2d::CCString::create(&v223); /*0x27745b*/
  cocos2d::CCString::create(&v220); /*0x27746c*/
  cocos2d::CCString::create(&v217); /*0x27747d*/
  cocos2d::CCString::create(&v214); /*0x27748e*/
  cocos2d::CCString::create(&v211); /*0x27749f*/
  cocos2d::CCString::create(&v208); /*0x2774b0*/
  cocos2d::CCString::create(&v205); /*0x2774c1*/
  cocos2d::CCString::create(&v202); /*0x2774d2*/
  cocos2d::CCString::create(&v199); /*0x2774e3*/
  cocos2d::CCString::create(&v196); /*0x2774f4*/
  cocos2d::CCString::create(&v193); /*0x277508*/
  cocos2d::CCString::create(&v190); /*0x27751c*/
  cocos2d::CCString::create(&v187); /*0x277530*/
  cocos2d::CCString::create(&v184); /*0x277544*/
  cocos2d::CCString::create(&v181); /*0x277558*/
  cocos2d::CCString::create(&v178); /*0x27756c*/
  cocos2d::CCString::create(&v175); /*0x277580*/
  cocos2d::CCString::create(&v172); /*0x277594*/
  cocos2d::CCString::create(&v169); /*0x2775a8*/
  cocos2d::CCString::create(&v166); /*0x2775bc*/
  cocos2d::CCString::create(&v163); /*0x2775d0*/
  cocos2d::CCString::create(&v160); /*0x2775e4*/
  cocos2d::CCString::create(&v157); /*0x2775f8*/
  v68 = cocos2d::CCString::create(&v154); /*0x277612*/
  v69 = cocos2d::CCString::create(&v151); /*0x277626*/
  v70 = cocos2d::CCString::create(&v148); /*0x27763a*/
  v71 = cocos2d::CCString::create(&v145); /*0x27764e*/
  v72 = cocos2d::CCString::create(&v142); /*0x277662*/
  v73 = cocos2d::CCString::create(&v139); /*0x277676*/
  v74 = cocos2d::CCString::create(&v136); /*0x27768a*/
  v75 = cocos2d::CCString::create(&v133); /*0x27769e*/
  v76 = cocos2d::CCString::create(&v130); /*0x2776b2*/
  v77 = cocos2d::CCString::create(&v127); /*0x2776c6*/
  v78 = cocos2d::CCString::create(v340); /*0x2776da*/
  v79 = cocos2d::CCString::create(v339); /*0x2776ee*/
  v80 = cocos2d::CCString::create(v338); /*0x277702*/
  v81 = cocos2d::CCString::create(&v124); /*0x277716*/
  v82 = cocos2d::CCString::create(v337); /*0x27772a*/
  v83 = cocos2d::CCString::create(v336); /*0x27773e*/
  v84 = cocos2d::CCString::create(v335); /*0x277752*/
  v85 = cocos2d::CCString::create(v334); /*0x277766*/
  v86 = cocos2d::CCString::create(v333); /*0x27777a*/
  v87 = cocos2d::CCString::create(v332); /*0x27778e*/
  v88 = cocos2d::CCString::create(v331); /*0x2777a2*/
  v89 = cocos2d::CCString::create(v330); /*0x2777b6*/
  v90 = cocos2d::CCString::create(v329); /*0x2777ca*/
  v91 = cocos2d::CCString::create(v328); /*0x2777de*/
  v92 = cocos2d::CCString::create(v327); /*0x2777f2*/
  v93 = cocos2d::CCString::create(v326); /*0x277806*/
  v94 = cocos2d::CCString::create(v325); /*0x27781a*/
  v95 = cocos2d::CCString::create(v324); /*0x27782e*/
  v96 = cocos2d::CCString::create(v323); /*0x277842*/
  v97 = cocos2d::CCString::create(v322); /*0x277856*/
  v98 = cocos2d::CCString::create(v321); /*0x27786a*/
  v99 = cocos2d::CCString::create(v320); /*0x27787e*/
  v100 = cocos2d::CCString::create(v319); /*0x277892*/
  v101 = cocos2d::CCString::create(v318); /*0x2778a6*/
  v102 = cocos2d::CCString::create(v317); /*0x2778ba*/
  v103 = cocos2d::CCString::create(v316); /*0x2778ce*/
  v104 = cocos2d::CCString::create(v315); /*0x2778e2*/
  v105 = cocos2d::CCString::create(v314); /*0x2778f6*/
  v106 = cocos2d::CCString::create(v313); /*0x27790a*/
  v107 = cocos2d::CCString::create(v312); /*0x27791e*/
  v108 = cocos2d::CCString::create(v311); /*0x277932*/
  v109 = cocos2d::CCString::create(v310); /*0x277946*/
  v110 = cocos2d::CCString::create(v309); /*0x27795a*/
  v111 = cocos2d::CCString::create(v308); /*0x27796e*/
  v112 = cocos2d::CCString::create(v307); /*0x277982*/
  v113 = cocos2d::CCString::create(v306); /*0x277996*/
  v114 = cocos2d::CCString::create(v305); /*0x2779aa*/
  v115 = cocos2d::CCString::create(v304); /*0x2779be*/
  v116 = cocos2d::CCString::create(v303); /*0x2779d2*/
  v117 = cocos2d::CCString::create(v302); /*0x2779e6*/
  v118 = cocos2d::CCString::create(v301); /*0x2779fa*/
  v119 = cocos2d::CCString::create(v300); /*0x277a0e*/
  v120 = cocos2d::CCString::create(v299); /*0x277a22*/
  v65 = cocos2d::CCString::create(v298); /*0x277a36*/
  v60 = cocos2d::CCString::create(v297); /*0x277a47*/
  v35 = cocos2d::CCString::create(v296); /*0x277a58*/
  v36 = cocos2d::CCString::create(v295); /*0x277a68*/
  v37 = cocos2d::CCString::create(v294); /*0x277a78*/
  v38 = cocos2d::CCString::create(v293); /*0x277a88*/
  v39 = cocos2d::CCString::create(v292); /*0x277a98*/
  v40 = cocos2d::CCString::create(v291); /*0x277aa8*/
  v41 = cocos2d::CCString::create(v290); /*0x277ab8*/
  v42 = (struct cocos2d::CCObject *)cocos2d::CCString::create(v289); /*0x277ac2*/
  v43 = cocos2d::CCArray::create( /*0x278064*/
          v42,
          v41,
          v40,
          v39,
          v38,
          v37,
          v36,
          v35,
          v60,
          v65,
          v120,
          v119,
          v118,
          v117,
          v116,
          v115,
          v114,
          v113,
          v112,
          v111,
          v110,
          v109,
          v108,
          v107,
          v106,
          v105,
          v104,
          v103,
          v102,
          v101,
          v100,
          v99,
          v98,
          v97,
          v96,
          v95,
          v94,
          v93,
          v92,
          v91,
          v90,
          v89,
          v88,
          v87,
          v86,
          v85,
          v84,
          v83,
          v82,
          v81,
          v80,
          v79,
          v78,
          v77,
          v76,
          v75,
          v74,
          v73,
          v72,
          v71,
          v70,
          v69,
          v68);
  sub_3C310(v289); /*0x27806e*/
  sub_3C310(v290); /*0x27807b*/
  sub_3C310(v291); /*0x278088*/
  sub_3C310(v292); /*0x278095*/
  sub_3C310(v293); /*0x2780a2*/
  sub_3C310(v294); /*0x2780af*/
  sub_3C310(v295); /*0x2780bc*/
  sub_3C310(v296); /*0x2780c9*/
  sub_3C310(v297); /*0x2780d6*/
  sub_3C310(v298); /*0x2780e3*/
  sub_3C310(v299); /*0x2780f0*/
  sub_3C310(v300); /*0x2780fd*/
  sub_3C310(v301); /*0x27810a*/
  sub_3C310(v302); /*0x278117*/
  sub_3C310(v303); /*0x278124*/
  sub_3C310(v304); /*0x278131*/
  sub_3C310(v305); /*0x27813e*/
  sub_3C310(v306); /*0x27814b*/
  sub_3C310(v307); /*0x278158*/
  sub_3C310(v308); /*0x278165*/
  sub_3C310(v309); /*0x278172*/
  sub_3C310(v310); /*0x27817f*/
  sub_3C310(v311); /*0x27818c*/
  sub_3C310(v312); /*0x278199*/
  sub_3C310(v313); /*0x2781a6*/
  sub_3C310(v314); /*0x2781b3*/
  sub_3C310(v315); /*0x2781c0*/
  sub_3C310(v316); /*0x2781cd*/
  sub_3C310(v317); /*0x2781da*/
  sub_3C310(v318); /*0x2781e7*/
  sub_3C310(v319); /*0x2781f4*/
  sub_3C310(v320); /*0x278201*/
  sub_3C310(v321); /*0x27820e*/
  sub_3C310(v322); /*0x27821b*/
  sub_3C310(v323); /*0x278228*/
  sub_3C310(v324); /*0x278235*/
  sub_3C310(v325); /*0x278242*/
  sub_3C310(v326); /*0x27824f*/
  sub_3C310(v327); /*0x27825c*/
  sub_3C310(v328); /*0x278269*/
  sub_3C310(v329); /*0x278276*/
  sub_3C310(v330); /*0x278283*/
  sub_3C310(v331); /*0x278290*/
  sub_3C310(v332); /*0x27829d*/
  sub_3C310(v333); /*0x2782aa*/
  sub_3C310(v334); /*0x2782b7*/
  sub_3C310(v335); /*0x2782c4*/
  sub_3C310(v336); /*0x2782d1*/
  sub_3C310(v337); /*0x2782de*/
  sub_3C310(&v124); /*0x2782eb*/
  sub_3C310(v338); /*0x2782f8*/
  sub_3C310(v339); /*0x278305*/
  sub_3C310(v340); /*0x278312*/
  sub_3C310(&v127); /*0x27831f*/
  sub_3C310(&v130); /*0x27832c*/
  sub_3C310(&v133); /*0x278339*/
  sub_3C310(&v136); /*0x278346*/
  sub_3C310(&v139); /*0x278353*/
  sub_3C310(&v142); /*0x278360*/
  sub_3C310(&v145); /*0x27836d*/
  sub_3C310(&v148); /*0x27837a*/
  sub_3C310(&v151); /*0x278387*/
  sub_3C310(&v154); /*0x278394*/
  sub_3C310(&v157); /*0x2783a1*/
  sub_3C310(&v160); /*0x2783ae*/
  sub_3C310(&v163); /*0x2783bb*/
  sub_3C310(&v166); /*0x2783c8*/
  sub_3C310(&v169); /*0x2783d5*/
  sub_3C310(&v172); /*0x2783e2*/
  sub_3C310(&v175); /*0x2783ef*/
  sub_3C310(&v178); /*0x2783fc*/
  sub_3C310(&v181); /*0x278409*/
  sub_3C310(&v184); /*0x278416*/
  sub_3C310(&v187); /*0x278423*/
  sub_3C310(&v190); /*0x278430*/
  sub_3C310(&v193); /*0x27843d*/
  sub_3C310(&v196); /*0x27844a*/
  sub_3C310(&v199); /*0x278457*/
  sub_3C310(&v202); /*0x278464*/
  sub_3C310(&v205); /*0x278471*/
  sub_3C310(&v208); /*0x27847e*/
  sub_3C310(&v211); /*0x27848b*/
  sub_3C310(&v214); /*0x278498*/
  sub_3C310(&v217); /*0x2784a5*/
  sub_3C310(&v220); /*0x2784b2*/
  sub_3C310(&v223); /*0x2784bf*/
  sub_3C310(&v226); /*0x2784cc*/
  sub_3C310(&v229); /*0x2784d9*/
  sub_3C310(&v232); /*0x2784e6*/
  sub_3C310(&v235); /*0x2784f3*/
  sub_3C310(&v238); /*0x278500*/
  sub_3C310(&v241); /*0x27850d*/
  sub_3C310(&v244); /*0x27851a*/
  sub_3C310(&v247); /*0x278527*/
  sub_3C310(&v250); /*0x278534*/
  if ( v123 > 0xF ) /*0x278545*/
  {
    v44 = Block[0]; /*0x27854a*/
    if ( v123 + 1 >= 0x1000 ) /*0x27855b*/
    {
      v44 = (void *)*((_QWORD *)Block[0] - 1); /*0x278561*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v44 - 8) > 0x1F ) /*0x278570*/
        invoke_watson(0, 0, 0, 0, 0); /*0x278585*/
    }
    j_j_free(v44); /*0x27858c*/
  }
  v45 = 0; /*0x278591*/
  v122 = 0; /*0x278593*/
  v123 = 15; /*0x27859a*/
  LOBYTE(Block[0]) = 0; /*0x2785a5*/
  sub_3C310(&v253); /*0x2785b3*/
  sub_3C310(&v256); /*0x2785c0*/
  sub_3C310(&v259); /*0x2785cd*/
  sub_3C310(&v262); /*0x2785da*/
  sub_3C310(&v265); /*0x2785e7*/
  sub_3C310(&v268); /*0x2785f4*/
  sub_3C310(&v271); /*0x278601*/
  sub_3C310(&v274); /*0x27860e*/
  sub_3C310(&v277); /*0x27861b*/
  sub_3C310(&v280); /*0x278628*/
  sub_3C310(&v283); /*0x278635*/
  sub_3C310(&v286); /*0x278642*/
  v46 = 0; /*0x278647*/
  result = cocos2d::CCArray::count(v43); /*0x27864c*/
  if ( result != 1 ) /*0x278655*/
  {
    do /*0x2786ed*/
    {
      v48 = cocos2d::CCArray::objectAtIndex(v43, v46); /*0x278665*/
      v49 = cocos2d::CCString::intValue(v48); /*0x278674*/
      v50 = cocos2d::CCArray::objectAtIndex(v43, v46 + 1); /*0x27867c*/
      v51 = cocos2d::CCString::intValue(v50); /*0x27868b*/
      v52 = qword_905FE0; /*0x27868e*/
      if ( !qword_905FE0 ) /*0x278698*/
      {
        v61 = operator new(0x3E8u); /*0x2786a4*/
        qword_905FE0 = sub_2D2B40(v61); /*0x2786b1*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2786c2*/
        v52 = qword_905FE0; /*0x2786c4*/
      }
      v53 = sub_2DEF50(v52, v49); /*0x2786cd*/
      v54 = v45 + v51; /*0x2786d2*/
      if ( !v53 ) /*0x2786d8*/
        v54 = v45; /*0x2786d8*/
      v46 += 2; /*0x2786db*/
      v45 = v54; /*0x2786de*/
      result = cocos2d::CCArray::count(v43) - 1; /*0x2786e9*/
    }
    while ( v46 < result ); /*0x2786ed*/
  }
  if ( v45 + v62 < Stat ) /*0x2786fb*/
  {
    SecretLayer2_onSecretLevel(a1); /*0x278701*/
    v55 = qword_905FE0; /*0x278706*/
    if ( !qword_905FE0 ) /*0x278710*/
    {
      v67 = operator new(0x3E8u); /*0x27871c*/
      qword_905FE0 = sub_2D2B40(v67); /*0x278729*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x27873a*/
      v55 = qword_905FE0; /*0x27873d*/
    }
    return sub_2D7950(v55, &word_708028, (unsigned int)(v45 + v62)); /*0x27874e*/
  }
  return result; /*0x278753*/
}

// [14/51] Address: 0x278f40
// Method: GameManager::colorForIdx
char *__fastcall GameManager_colorForIdx(__int64 a1, char *a2, int a3)
{
  char *result; // rax

  switch ( a3 ) /*0x278f5f*/
  {
    case 0: /*0x278f5f*/
      *(_WORD *)a2 = -131; /*0x278f61*/
      a2[2] = 0; /*0x278f69*/
      result = a2; /*0x278f66*/
      break; /*0x278f6d*/
    case 1: /*0x278f5f*/
      *(_WORD *)a2 = -256; /*0x278f6e*/
      a2[2] = 0; /*0x278f76*/
      result = a2; /*0x278f73*/
      break; /*0x278f7a*/
    case 2: /*0x278f5f*/
      *(_WORD *)a2 = -256; /*0x278f7b*/
      a2[2] = 125; /*0x278f83*/
      result = a2; /*0x278f80*/
      break; /*0x278f87*/
    case 3: /*0x278f5f*/
      *(_WORD *)a2 = -256; /*0x278f88*/
      a2[2] = -1; /*0x278f90*/
      result = a2; /*0x278f8d*/
      break; /*0x278f94*/
    case 4: /*0x278f5f*/
      *(_WORD *)a2 = 32000; /*0x278f95*/
      a2[2] = -1; /*0x278f9d*/
      result = a2; /*0x278f9a*/
      break; /*0x278fa1*/
    case 5: /*0x278f5f*/
      *(_WORD *)a2 = 0; /*0x278fa2*/
      a2[2] = -1; /*0x278faa*/
      result = a2; /*0x278fa7*/
      break; /*0x278fae*/
    case 6: /*0x278f5f*/
      *(_WORD *)a2 = 125; /*0x278faf*/
      a2[2] = -1; /*0x278fb7*/
      result = a2; /*0x278fb4*/
      break; /*0x278fbb*/
    case 7: /*0x278f5f*/
      *(_WORD *)a2 = 255; /*0x278fbc*/
      a2[2] = -1; /*0x278fc4*/
      result = a2; /*0x278fc1*/
      break; /*0x278fc8*/
    case 8: /*0x278f5f*/
      *(_WORD *)a2 = 255; /*0x278fc9*/
      a2[2] = 125; /*0x278fd1*/
      result = a2; /*0x278fce*/
      break; /*0x278fd5*/
    case 9: /*0x278f5f*/
      *(_WORD *)a2 = 255; /*0x278fd6*/
      a2[2] = 0; /*0x278fde*/
      result = a2; /*0x278fdb*/
      break; /*0x278fe2*/
    case 10: /*0x278f5f*/
      *(_WORD *)a2 = 32255; /*0x278fe3*/
      a2[2] = 0; /*0x278feb*/
      result = a2; /*0x278fe8*/
      break; /*0x278fef*/
    case 11: /*0x278f5f*/
      *(_WORD *)a2 = -1; /*0x278ff0*/
      a2[2] = 0; /*0x278ff8*/
      result = a2; /*0x278ff5*/
      break; /*0x278ffc*/
    case 13: /*0x278f5f*/
      *(_WORD *)a2 = 185; /*0x278ffd*/
      a2[2] = -1; /*0x279005*/
      result = a2; /*0x279002*/
      break; /*0x279009*/
    case 14: /*0x278f5f*/
      *(_WORD *)a2 = -17921; /*0x27900a*/
      a2[2] = 0; /*0x279012*/
      result = a2; /*0x27900f*/
      break; /*0x279016*/
    case 15: /*0x278f5f*/
      *(_WORD *)a2 = 0; /*0x279017*/
      a2[2] = 0; /*0x27901f*/
      result = a2; /*0x27901c*/
      break; /*0x279023*/
    case 16: /*0x278f5f*/
      *(_WORD *)a2 = -14336; /*0x279024*/
      a2[2] = -1; /*0x27902c*/
      result = a2; /*0x279029*/
      break; /*0x279030*/
    case 17: /*0x278f5f*/
      *(_WORD *)a2 = -20561; /*0x279031*/
      a2[2] = -81; /*0x279039*/
      result = a2; /*0x279036*/
      break; /*0x27903d*/
    case 18: /*0x278f5f*/
      *(_WORD *)a2 = 23130; /*0x27903e*/
      a2[2] = 90; /*0x279046*/
      result = a2; /*0x279043*/
      break; /*0x27904a*/
    case 19: /*0x278f5f*/
      *(_WORD *)a2 = 32255; /*0x27904b*/
      a2[2] = 125; /*0x279053*/
      result = a2; /*0x279050*/
      break; /*0x279057*/
    case 20: /*0x278f5f*/
      *(_WORD *)a2 = -20736; /*0x279058*/
      a2[2] = 75; /*0x279060*/
      result = a2; /*0x27905d*/
      break; /*0x279064*/
    case 21: /*0x278f5f*/
      *(_WORD *)a2 = 32000; /*0x279065*/
      a2[2] = 125; /*0x27906d*/
      result = a2; /*0x27906a*/
      break; /*0x279071*/
    case 22: /*0x278f5f*/
      *(_WORD *)a2 = 19200; /*0x279072*/
      a2[2] = -81; /*0x27907a*/
      result = a2; /*0x279077*/
      break; /*0x27907e*/
    case 23: /*0x278f5f*/
      *(_WORD *)a2 = 75; /*0x27907f*/
      a2[2] = -81; /*0x279087*/
      result = a2; /*0x279084*/
      break; /*0x27908b*/
    case 24: /*0x278f5f*/
      *(_WORD *)a2 = 125; /*0x27908c*/
      a2[2] = 125; /*0x279094*/
      result = a2; /*0x279091*/
      break; /*0x279098*/
    case 25: /*0x278f5f*/
      *(_WORD *)a2 = 175; /*0x279099*/
      a2[2] = 75; /*0x2790a1*/
      result = a2; /*0x27909e*/
      break; /*0x2790a5*/
    case 26: /*0x278f5f*/
      *(_WORD *)a2 = 19375; /*0x2790a6*/
      a2[2] = 0; /*0x2790ae*/
      result = a2; /*0x2790ab*/
      break; /*0x2790b2*/
    case 27: /*0x278f5f*/
      strcpy(a2, "}}"); /*0x2790b3*/
      result = a2; /*0x2790b8*/
      break; /*0x2790bf*/
    case 28: /*0x278f5f*/
      *(_WORD *)a2 = -20661; /*0x2790c0*/
      a2[2] = 0; /*0x2790c8*/
      result = a2; /*0x2790c5*/
      break; /*0x2790cc*/
    case 29: /*0x278f5f*/
      *(_WORD *)a2 = 19455; /*0x2790cd*/
      a2[2] = 0; /*0x2790d5*/
      result = a2; /*0x2790d2*/
      break; /*0x2790d9*/
    case 30: /*0x278f5f*/
      *(_WORD *)a2 = 12950; /*0x2790da*/
      a2[2] = 0; /*0x2790e2*/
      result = a2; /*0x2790df*/
      break; /*0x2790e6*/
    case 31: /*0x278f5f*/
      *(_WORD *)a2 = 25750; /*0x2790e7*/
      a2[2] = 0; /*0x2790ef*/
      result = a2; /*0x2790ec*/
      break; /*0x2790f3*/
    case 32: /*0x278f5f*/
      *(_WORD *)a2 = -27036; /*0x2790f4*/
      a2[2] = 0; /*0x2790fc*/
      result = a2; /*0x2790f9*/
      break; /*0x279100*/
    case 33: /*0x278f5f*/
      *(_WORD *)a2 = -27136; /*0x279101*/
      a2[2] = 100; /*0x279109*/
      result = a2; /*0x279106*/
      break; /*0x27910d*/
    case 34: /*0x278f5f*/
      *(_WORD *)a2 = 25600; /*0x27910e*/
      a2[2] = -106; /*0x279116*/
      result = a2; /*0x279113*/
      break; /*0x27911a*/
    case 35: /*0x278f5f*/
      *(_WORD *)a2 = 100; /*0x27911b*/
      a2[2] = -106; /*0x279123*/
      result = a2; /*0x279120*/
      break; /*0x279127*/
    case 36: /*0x278f5f*/
      *(_WORD *)a2 = 150; /*0x279128*/
      a2[2] = 100; /*0x279130*/
      result = a2; /*0x27912d*/
      break; /*0x279134*/
    case 37: /*0x278f5f*/
      *(_WORD *)a2 = 150; /*0x279135*/
      a2[2] = 0; /*0x27913d*/
      result = a2; /*0x27913a*/
      break; /*0x279141*/
    case 38: /*0x278f5f*/
      *(_WORD *)a2 = -27136; /*0x279142*/
      a2[2] = 0; /*0x27914a*/
      result = a2; /*0x279147*/
      break; /*0x27914e*/
    case 39: /*0x278f5f*/
      *(_WORD *)a2 = 0; /*0x27914f*/
      a2[2] = -106; /*0x279157*/
      result = a2; /*0x279154*/
      break; /*0x27915b*/
    case 40: /*0x278f5f*/
      *(_WORD *)a2 = -131; /*0x27915c*/
      a2[2] = -81; /*0x279164*/
      result = a2; /*0x279161*/
      break; /*0x279168*/
    case 41: /*0x278f5f*/
      *(_WORD *)a2 = 32125; /*0x279169*/
      a2[2] = -1; /*0x279171*/
      result = a2; /*0x27916e*/
      break; /*0x279175*/
    case 42: /*0x278f5f*/
      *(_WORD *)a2 = -1281; /*0x279176*/
      a2[2] = 127; /*0x27917e*/
      result = a2; /*0x27917b*/
      break; /*0x279182*/
    case 43: /*0x278f5f*/
      *(_WORD *)a2 = 32762; /*0x279183*/
      a2[2] = -1; /*0x27918b*/
      result = a2; /*0x279188*/
      break; /*0x27918f*/
    case 44: /*0x278f5f*/
      *(_WORD *)a2 = -256; /*0x279190*/
      a2[2] = -64; /*0x279198*/
      result = a2; /*0x279195*/
      break; /*0x27919c*/
    case 45: /*0x278f5f*/
      *(_WORD *)a2 = 12880; /*0x27919d*/
      a2[2] = 14; /*0x2791a5*/
      result = a2; /*0x2791a2*/
      break; /*0x2791a9*/
    case 46: /*0x278f5f*/
      *(_WORD *)a2 = -23091; /*0x2791aa*/
      a2[2] = 118; /*0x2791b2*/
      result = a2; /*0x2791af*/
      break; /*0x2791b6*/
    case 47: /*0x278f5f*/
      *(_WORD *)a2 = -32586; /*0x2791b7*/
      a2[2] = -1; /*0x2791bf*/
      result = a2; /*0x2791bc*/
      break; /*0x2791c3*/
    case 48: /*0x278f5f*/
      *(_WORD *)a2 = 15103; /*0x2791c4*/
      a2[2] = 58; /*0x2791cc*/
      result = a2; /*0x2791c9*/
      break; /*0x2791d0*/
    case 49: /*0x278f5f*/
      *(_WORD *)a2 = 19789; /*0x2791d1*/
      a2[2] = -113; /*0x2791d9*/
      result = a2; /*0x2791d6*/
      break; /*0x2791dd*/
    case 50: /*0x278f5f*/
      *(_WORD *)a2 = 2560; /*0x2791de*/
      a2[2] = 76; /*0x2791e6*/
      result = a2; /*0x2791e3*/
      break; /*0x2791ea*/
    case 51: /*0x278f5f*/
      *(_WORD *)a2 = -11011; /*0x2791eb*/
      a2[2] = -50; /*0x2791f3*/
      result = a2; /*0x2791f0*/
      break; /*0x2791f7*/
    case 52: /*0x278f5f*/
      *(_WORD *)a2 = -19010; /*0x2791f8*/
      a2[2] = -1; /*0x279200*/
      result = a2; /*0x2791fd*/
      break; /*0x279204*/
    case 53: /*0x278f5f*/
      *(_WORD *)a2 = 112; /*0x279205*/
      a2[2] = 0; /*0x27920d*/
      result = a2; /*0x27920a*/
      break; /*0x279211*/
    case 54: /*0x278f5f*/
      *(_WORD *)a2 = 594; /*0x279212*/
      a2[2] = 0; /*0x27921a*/
      result = a2; /*0x279217*/
      break; /*0x27921e*/
    case 55: /*0x278f5f*/
      *(_WORD *)a2 = 312; /*0x27921f*/
      a2[2] = 6; /*0x279227*/
      result = a2; /*0x279224*/
      break; /*0x27922b*/
    case 56: /*0x278f5f*/
      *(_WORD *)a2 = 20352; /*0x27922c*/
      a2[2] = 79; /*0x279234*/
      result = a2; /*0x279231*/
      break; /*0x279238*/
    case 57: /*0x278f5f*/
      *(_WORD *)a2 = 13690; /*0x279239*/
      a2[2] = 53; /*0x279241*/
      result = a2; /*0x27923e*/
      break; /*0x279245*/
    case 58: /*0x278f5f*/
      *(_WORD *)a2 = 9297; /*0x279246*/
      a2[2] = 36; /*0x27924e*/
      result = a2; /*0x27924b*/
      break; /*0x279252*/
    case 59: /*0x278f5f*/
      *(_WORD *)a2 = 25251; /*0x279253*/
      a2[2] = 70; /*0x27925b*/
      result = a2; /*0x279258*/
      break; /*0x27925f*/
    case 60: /*0x278f5f*/
      *(_WORD *)a2 = 18805; /*0x279260*/
      a2[2] = 54; /*0x279268*/
      result = a2; /*0x279265*/
      break; /*0x27926c*/
    case 61: /*0x278f5f*/
      *(_WORD *)a2 = 13654; /*0x27926d*/
      a2[2] = 40; /*0x279275*/
      result = a2; /*0x279272*/
      break; /*0x279279*/
    case 62: /*0x278f5f*/
      *(_WORD *)a2 = -17921; /*0x27927a*/
      a2[2] = 114; /*0x279282*/
      result = a2; /*0x27927f*/
      break; /*0x279286*/
    case 63: /*0x278f5f*/
      *(_WORD *)a2 = -24321; /*0x279287*/
      a2[2] = 64; /*0x27928f*/
      result = a2; /*0x27928c*/
      break; /*0x279293*/
    case 64: /*0x278f5f*/
      *(_WORD *)a2 = 12646; /*0x279294*/
      a2[2] = 30; /*0x27929c*/
      result = a2; /*0x279299*/
      break; /*0x2792a0*/
    case 65: /*0x278f5f*/
      strcpy(a2, "['"); /*0x2792a1*/
      result = a2; /*0x2792a6*/
      break; /*0x2792ad*/
    case 66: /*0x278f5f*/
      strcpy(a2, "G "); /*0x2792ae*/
      result = a2; /*0x2792b3*/
      break; /*0x2792ba*/
    case 67: /*0x278f5f*/
      *(_WORD *)a2 = 31655; /*0x2792bb*/
      a2[2] = 77; /*0x2792c3*/
      result = a2; /*0x2792c0*/
      break; /*0x2792c7*/
    case 68: /*0x278f5f*/
      *(_WORD *)a2 = 21357; /*0x2792c8*/
      a2[2] = 57; /*0x2792d0*/
      result = a2; /*0x2792cd*/
      break; /*0x2792d4*/
    case 69: /*0x278f5f*/
      *(_WORD *)a2 = 15953; /*0x2792d5*/
      a2[2] = 42; /*0x2792dd*/
      result = a2; /*0x2792da*/
      break; /*0x2792e1*/
    case 70: /*0x278f5f*/
      *(_WORD *)a2 = -1; /*0x2792e2*/
      a2[2] = -64; /*0x2792ea*/
      result = a2; /*0x2792e7*/
      break; /*0x2792ee*/
    case 71: /*0x278f5f*/
      *(_WORD *)a2 = -7939; /*0x2792ef*/
      a2[2] = -96; /*0x2792f7*/
      result = a2; /*0x2792f4*/
      break; /*0x2792fb*/
    case 72: /*0x278f5f*/
      *(_WORD *)a2 = -64; /*0x2792fc*/
      a2[2] = -96; /*0x279304*/
      result = a2; /*0x279301*/
      break; /*0x279308*/
    case 73: /*0x278f5f*/
      *(_WORD *)a2 = -79; /*0x279309*/
      a2[2] = 109; /*0x279311*/
      result = a2; /*0x27930e*/
      break; /*0x279315*/
    case 74: /*0x278f5f*/
      *(_WORD *)a2 = -64; /*0x279316*/
      a2[2] = -32; /*0x27931e*/
      result = a2; /*0x27931b*/
      break; /*0x279322*/
    case 75: /*0x278f5f*/
      *(_WORD *)a2 = -108; /*0x279323*/
      a2[2] = -28; /*0x27932b*/
      result = a2; /*0x279328*/
      break; /*0x27932f*/
    case 76: /*0x278f5f*/
      *(_WORD *)a2 = -24253; /*0x279330*/
      a2[2] = -118; /*0x279338*/
      result = a2; /*0x279335*/
      break; /*0x27933c*/
    case 77: /*0x278f5f*/
      *(_WORD *)a2 = 27953; /*0x27933d*/
      a2[2] = 95; /*0x279345*/
      result = a2; /*0x279342*/
      break; /*0x279349*/
    case 78: /*0x278f5f*/
      *(_WORD *)a2 = 21542; /*0x27934a*/
      a2[2] = 73; /*0x279352*/
      result = a2; /*0x27934f*/
      break; /*0x279356*/
    case 79: /*0x278f5f*/
      *(_WORD *)a2 = 24576; /*0x279357*/
      a2[2] = 0; /*0x27935f*/
      result = a2; /*0x27935c*/
      break; /*0x279363*/
    case 80: /*0x278f5f*/
      *(_WORD *)a2 = 0x4000; /*0x279364*/
      a2[2] = 0; /*0x27936c*/
      result = a2; /*0x279369*/
      break; /*0x279370*/
    case 81: /*0x278f5f*/
      *(_WORD *)a2 = 24576; /*0x279371*/
      a2[2] = 96; /*0x279379*/
      result = a2; /*0x279376*/
      break; /*0x27937d*/
    case 82: /*0x278f5f*/
      *(_WORD *)a2 = 0x4000; /*0x27937e*/
      a2[2] = 64; /*0x279386*/
      result = a2; /*0x279383*/
      break; /*0x27938a*/
    case 83: /*0x278f5f*/
      *(_WORD *)a2 = -96; /*0x27938b*/
      a2[2] = -1; /*0x279393*/
      result = a2; /*0x279390*/
      break; /*0x279397*/
    case 84: /*0x278f5f*/
      *(_WORD *)a2 = 1793; /*0x279398*/
      a2[2] = 112; /*0x2793a0*/
      result = a2; /*0x27939d*/
      break; /*0x2793a4*/
    case 85: /*0x278f5f*/
      *(_WORD *)a2 = 18688; /*0x2793a5*/
      a2[2] = 109; /*0x2793ad*/
      result = a2; /*0x2793aa*/
      break; /*0x2793b1*/
    case 86: /*0x278f5f*/
      *(_WORD *)a2 = 12800; /*0x2793b2*/
      a2[2] = 76; /*0x2793ba*/
      result = a2; /*0x2793b7*/
      break; /*0x2793be*/
    case 87: /*0x278f5f*/
      *(_WORD *)a2 = 9728; /*0x2793bf*/
      a2[2] = 56; /*0x2793c7*/
      result = a2; /*0x2793c4*/
      break; /*0x2793cb*/
    case 88: /*0x278f5f*/
      *(_WORD *)a2 = -32688; /*0x2793cc*/
      a2[2] = -83; /*0x2793d4*/
      result = a2; /*0x2793d1*/
      break; /*0x2793d8*/
    case 89: /*0x278f5f*/
      *(_WORD *)a2 = 21299; /*0x2793d9*/
      a2[2] = 117; /*0x2793e1*/
      result = a2; /*0x2793de*/
      break; /*0x2793e5*/
    case 90: /*0x278f5f*/
      *(_WORD *)a2 = 15395; /*0x2793e6*/
      a2[2] = 86; /*0x2793ee*/
      result = a2; /*0x2793eb*/
      break; /*0x2793f2*/
    case 91: /*0x278f5f*/
      *(_WORD *)a2 = -7968; /*0x2793f3*/
      a2[2] = -32; /*0x2793fb*/
      result = a2; /*0x2793f8*/
      break; /*0x2793ff*/
    case 92: /*0x278f5f*/
      *(_WORD *)a2 = 1597; /*0x279400*/
      a2[2] = -116; /*0x279408*/
      result = a2; /*0x279405*/
      break; /*0x27940c*/
    case 93: /*0x278f5f*/
      *(_WORD *)a2 = 2103; /*0x27940d*/
      a2[2] = 96; /*0x279415*/
      result = a2; /*0x279412*/
      break; /*0x279419*/
    case 94: /*0x278f5f*/
      *(_WORD *)a2 = 16448; /*0x27941a*/
      a2[2] = 64; /*0x279422*/
      result = a2; /*0x27941f*/
      break; /*0x279426*/
    case 95: /*0x278f5f*/
      *(_WORD *)a2 = 18799; /*0x279427*/
      a2[2] = -92; /*0x27942f*/
      result = a2; /*0x27942c*/
      break; /*0x279433*/
    case 96: /*0x278f5f*/
      *(_WORD *)a2 = 13908; /*0x279434*/
      a2[2] = 127; /*0x27943c*/
      result = a2; /*0x279439*/
      break; /*0x279440*/
    case 97: /*0x278f5f*/
      *(_WORD *)a2 = 10818; /*0x279441*/
      a2[2] = 99; /*0x279449*/
      result = a2; /*0x279446*/
      break; /*0x27944d*/
    case 98: /*0x278f5f*/
      *(_WORD *)a2 = -18948; /*0x27944e*/
      a2[2] = -1; /*0x279456*/
      result = a2; /*0x279453*/
      break; /*0x27945a*/
    case 99: /*0x278f5f*/
      *(_WORD *)a2 = 22447; /*0x27945b*/
      a2[2] = -81; /*0x279463*/
      result = a2; /*0x279460*/
      break; /*0x279467*/
    case 100: /*0x278f5f*/
      *(_WORD *)a2 = 17282; /*0x279468*/
      a2[2] = -126; /*0x279470*/
      result = a2; /*0x27946d*/
      break; /*0x279474*/
    case 101: /*0x278f5f*/
      *(_WORD *)a2 = 12638; /*0x279475*/
      a2[2] = 94; /*0x27947d*/
      result = a2; /*0x27947a*/
      break; /*0x279481*/
    case 102: /*0x278f5f*/
      *(_WORD *)a2 = -32640; /*0x279482*/
      a2[2] = 0x80; /*0x27948a*/
      result = a2; /*0x279487*/
      break; /*0x27948e*/
    case 103: /*0x278f5f*/
      *(_WORD *)a2 = 870; /*0x27948f*/
      a2[2] = 62; /*0x279497*/
      result = a2; /*0x279494*/
      break; /*0x27949b*/
    case 104: /*0x278f5f*/
      *(_WORD *)a2 = 327; /*0x27949c*/
      a2[2] = 52; /*0x2794a4*/
      result = a2; /*0x2794a1*/
      break; /*0x2794a8*/
    case 105: /*0x278f5f*/
      *(_WORD *)a2 = -46; /*0x2794a9*/
      a2[2] = 50; /*0x2794b1*/
      result = a2; /*0x2794ae*/
      break; /*0x2794b5*/
    case 106: /*0x278f5f*/
      *(_WORD *)a2 = -17034; /*0x2794b6*/
      a2[2] = -1; /*0x2794be*/
      result = a2; /*0x2794bb*/
      break; /*0x2794c2*/
    default:
      *(_WORD *)a2 = -1; /*0x2794c3*/
      a2[2] = -1; /*0x2794cb*/
      result = a2; /*0x2794c8*/
      break; /*0x2794c8*/
  }
  return result; /*0x278f6d*/
}

// [15/51] Address: 0x279830
// Method: GameManager::activeIconForType
__int64 __fastcall GameManager_activeIconForType(_DWORD *a1, int a2)
{
  __int64 result; // rax

  switch ( a2 ) /*0x279857*/
  {
    case 0: /*0x279857*/
      result = (unsigned int)(a1[187] - a1[188]); /*0x27985f*/
      break; /*0x279865*/
    case 1: /*0x279857*/
      result = (unsigned int)(a1[190] - a1[191]); /*0x27986c*/
      break; /*0x279872*/
    case 2: /*0x279857*/
      result = (unsigned int)(a1[193] - a1[194]); /*0x279879*/
      break; /*0x27987f*/
    case 3: /*0x279857*/
      result = (unsigned int)(a1[196] - a1[197]); /*0x279886*/
      break; /*0x27988c*/
    case 4: /*0x279857*/
      result = (unsigned int)(a1[199] - a1[200]); /*0x279893*/
      break; /*0x279899*/
    case 5: /*0x279857*/
      result = (unsigned int)(a1[202] - a1[203]); /*0x2798a0*/
      break; /*0x2798a6*/
    case 6: /*0x279857*/
      result = (unsigned int)(a1[205] - a1[206]); /*0x2798ad*/
      break; /*0x2798b3*/
    case 7: /*0x279857*/
      result = (unsigned int)(a1[208] - a1[209]); /*0x2798ba*/
      break; /*0x2798c0*/
    case 8: /*0x279857*/
      result = (unsigned int)(a1[229] - a1[230]); /*0x2798ee*/
      break; /*0x2798f4*/
    case 98: /*0x279857*/
      result = (unsigned int)(a1[226] - a1[227]); /*0x2798e1*/
      break; /*0x2798e7*/
    case 99: /*0x279857*/
      result = (unsigned int)(a1[220] - a1[221]); /*0x2798c7*/
      break; /*0x2798cd*/
    case 101: /*0x279857*/
      result = (unsigned int)(a1[223] - a1[224]); /*0x2798d4*/
      break; /*0x2798da*/
    default:
      result = 0; /*0x2798f5*/
      break; /*0x2798f5*/
  }
  return result; /*0x279865*/
}

// [16/51] Address: 0x2799a0
// Method: GameManager::countForType
__int64 __fastcall GameManager_countForType(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 ) /*0x2799c1*/
  {
    case 0: /*0x2799c1*/
      result = 485; /*0x2799c3*/
      break; /*0x2799c8*/
    case 1: /*0x2799c1*/
      result = 169; /*0x2799c9*/
      break; /*0x2799ce*/
    case 2: /*0x2799c1*/
      result = 118; /*0x2799cf*/
      break; /*0x2799d4*/
    case 3: /*0x2799c1*/
      result = 149; /*0x2799d5*/
      break; /*0x2799da*/
    case 4: /*0x2799c1*/
      result = 96; /*0x2799db*/
      break; /*0x2799e0*/
    case 5: /*0x2799c1*/
      result = 68; /*0x2799e1*/
      break; /*0x2799e6*/
    case 6: /*0x2799c1*/
      result = 69; /*0x2799e7*/
      break; /*0x2799ec*/
    case 7: /*0x2799c1*/
      result = 43; /*0x2799ed*/
      break; /*0x2799f2*/
    case 8: /*0x2799c1*/
      result = 8; /*0x2799ff*/
      break; /*0x279a04*/
    case 98: /*0x2799c1*/
      result = 20; /*0x2799f9*/
      break; /*0x2799fe*/
    case 99: /*0x2799c1*/
      result = 7; /*0x2799f3*/
      break; /*0x2799f8*/
    case 101: /*0x2799c1*/
      result = 6; /*0x279a05*/
      break; /*0x279a0a*/
    default:
      result = 0; /*0x279a0b*/
      break; /*0x279a0b*/
  }
  return result; /*0x2799c8*/
}

// [17/51] Address: 0x279e20
// Method: GameManager::unloadIcon
// Hidden C++ exception states: #wind=2
void __fastcall GameManager_unloadIcon(__int64 a1, int a2, signed int a3, int a4)
{
  _DWORD *v7; // rax
  __int64 v8; // rcx
  void **v9; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  void **v12; // rbx
  cocos2d::CCTextureCache *v13; // rax
  void *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r10
  void *v17; // r9
  _QWORD *v18; // rax
  _BYTE *v19; // rcx
  _BYTE *v20; // rdx
  int v21; // r8d
  __int64 v22; // r8
  void *v23; // r10
  _QWORD *v24; // rax
  _BYTE *v25; // rcx
  _BYTE *v26; // rdx
  int v27; // [rsp+30h] [rbp-39h] BYREF
  int v28; // [rsp+38h] [rbp-31h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-29h] BYREF
  __m128i si128; // [rsp+50h] [rbp-19h]
  void *Src[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp+7h]
  unsigned __int64 v33; // [rsp+78h] [rbp+Fh]

  if ( a2 > 0 ) /*0x279e22*/
  {
    v28 = a4; /*0x279e52*/
    v27 = a2 + *(_DWORD *)(*(_QWORD *)(a1 + 1232) + 4LL * a3) - 1; /*0x279e64*/
    v7 = (_DWORD *)sub_10C920(a1 + 1184, &v27); /*0x279e72*/
    --*v7; /*0x279e77*/
    if ( a2 <= 1 && *(int *)sub_10C920(a1 + 1184, &v27) <= 0 ) /*0x279e91*/
      *(_DWORD *)sub_10C920(a1 + 1184, &v27) = 1; /*0x279ea3*/
    if ( *(int *)sub_10C920(a1 + 1184, &v27) <= 0 ) /*0x279ebc*/
    {
      GameManager_sheetNameForIcon(v8, Src, (unsigned int)a2, (unsigned int)a3); /*0x279ecc*/
      *(_OWORD *)Block = 0; /*0x279ed5*/
      si128 = 0; /*0x279edc*/
      v9 = Src; /*0x279ee1*/
      if ( v33 > 0xF ) /*0x279eea*/
        v9 = (void **)Src[0]; /*0x279eea*/
      v10 = 0x7FFFFFFFFFFFFFFFLL; /*0x279eef*/
      v11 = v32; /*0x279ef9*/
      if ( v32 > 0x7FFFFFFFFFFFFFFFLL ) /*0x279f00*/
        sub_8D90(); /*0x27a13f*/
      if ( v32 > 0xF ) /*0x279f0a*/
      {
        if ( (v32 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x279f2c*/
        {
          v10 = v32 | 0xF; /*0x279f2e*/
          if ( (v32 | 0xF) < 0x16 ) /*0x279f39*/
            v10 = 22; /*0x279f39*/
        }
        Block[0] = (void *)sub_3C460(v10 + 1); /*0x279f46*/
        si128.m128i_i64[0] = v11; /*0x279f4a*/
        si128.m128i_i64[1] = v10; /*0x279f4e*/
        memcpy(Block[0], v9, v11 + 1); /*0x279f5c*/
      }
      else
      {
        si128.m128i_i64[0] = v32; /*0x279f0c*/
        si128.m128i_i64[1] = 15; /*0x279f10*/
        *(_OWORD *)Block = *(_OWORD *)v9; /*0x279f1c*/
      }
      sub_43D80(Block, ".png", 4u); /*0x279f73*/
      v12 = Block; /*0x279f78*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x279f81*/
        v12 = (void **)Block[0]; /*0x279f81*/
      v13 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x279f86*/
      cocos2d::CCTextureCache::removeTextureForKey(v13, (const char *)v12); /*0x279f92*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x279fa1*/
      {
        v14 = Block[0]; /*0x279fa6*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x279fb4*/
        {
          v14 = (void *)*((_QWORD *)Block[0] - 1); /*0x279fba*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F ) /*0x279fc9*/
            invoke_watson(0, 0, 0, 0, 0); /*0x279fde*/
        }
        j_j_free(v14); /*0x279fe5*/
      }
      si128 = _mm_load_si128((const __m128i *)&Size); /*0x279ff2*/
      LOBYTE(Block[0]) = 0; /*0x279ff7*/
      sub_3C310(Src); /*0x279fff*/
    }
    v15 = a1 + 1200; /*0x27a004*/
    v16 = sub_10CA20(v15, &v28); /*0x27a017*/
    v17 = *(void **)v16; /*0x27a01a*/
    v18 = *(_QWORD **)(*(_QWORD *)v16 + 8LL); /*0x27a01d*/
    v19 = v18; /*0x27a021*/
    v20 = *(_BYTE **)v16; /*0x27a024*/
    if ( !*((_BYTE *)v18 + 25) ) /*0x27a027*/
    {
      do /*0x27a056*/
      {
        v21 = *((_DWORD *)v19 + 7); /*0x27a030*/
        if ( v21 >= a3 ) /*0x27a037*/
        {
          if ( v20[25] && a3 < v21 ) /*0x27a048*/
            v20 = v19; /*0x27a048*/
          v17 = v19; /*0x27a04c*/
        }
        else
        {
          v19 += 16; /*0x27a039*/
        }
        v19 = *(_BYTE **)v19; /*0x27a04f*/
      }
      while ( !v19[25] ); /*0x27a056*/
    }
    if ( !v20[25] ) /*0x27a058*/
      v18 = *(_QWORD **)v20; /*0x27a05e*/
    while ( !*((_BYTE *)v18 + 25) ) /*0x27a061*/
    {
      if ( a3 >= *((_DWORD *)v18 + 7) ) /*0x27a06a*/
      {
        v18 = (_QWORD *)v18[2]; /*0x27a074*/
      }
      else
      {
        v20 = v18; /*0x27a06c*/
        v18 = (_QWORD *)*v18; /*0x27a06f*/
      }
    }
    Block[0] = v17; /*0x27a07e*/
    Block[1] = v20; /*0x27a082*/
    sub_284DE0(v16, Block); /*0x27a08d*/
    if ( !*(_QWORD *)(sub_10CA20(v15, &v28) + 8) ) /*0x27a09e*/
    {
      v23 = *(void **)v15; /*0x27a0a5*/
      v24 = *(_QWORD **)(*(_QWORD *)v15 + 8LL); /*0x27a0a8*/
      v25 = v24; /*0x27a0ac*/
      v26 = *(_BYTE **)v15; /*0x27a0af*/
      if ( !*((_BYTE *)v24 + 25) ) /*0x27a0b6*/
      {
        do /*0x27a0e6*/
        {
          v22 = *((unsigned int *)v25 + 8); /*0x27a0c0*/
          if ( (int)v22 >= v28 ) /*0x27a0c7*/
          {
            if ( v26[25] && v28 < (int)v22 ) /*0x27a0d8*/
              v26 = v25; /*0x27a0d8*/
            v23 = v25; /*0x27a0dc*/
          }
          else
          {
            v25 += 16; /*0x27a0c9*/
          }
          v25 = *(_BYTE **)v25; /*0x27a0df*/
        }
        while ( !v25[25] ); /*0x27a0e6*/
      }
      if ( !v26[25] ) /*0x27a0e8*/
        v24 = *(_QWORD **)v26; /*0x27a0ee*/
      while ( !*((_BYTE *)v24 + 25) ) /*0x27a0f1*/
      {
        if ( v28 >= *((_DWORD *)v24 + 8) ) /*0x27a0fb*/
        {
          v24 = (_QWORD *)v24[2]; /*0x27a105*/
        }
        else
        {
          v26 = v24; /*0x27a0fd*/
          v24 = (_QWORD *)*v24; /*0x27a100*/
        }
      }
      Block[0] = v23; /*0x27a10f*/
      Block[1] = v26; /*0x27a113*/
      sub_284C30(v15, Block, v22, (unsigned int)v28); /*0x27a11e*/
    }
  }
}

// [18/51] Address: 0x27a150
// Method: GameManager::unloadIcons
__int64 __fastcall GameManager_unloadIcons(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 i; // r8
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // r8
  __int64 *v9; // r10
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *j; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  signed int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2; /*0x27a155*/
  result = *(_QWORD *)(a1 + 1200); /*0x27a15e*/
  v4 = result; /*0x27a168*/
  for ( i = *(_QWORD *)(result + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)i ) /*0x27a16f*/
  {
    if ( *(_DWORD *)(i + 32) >= a2 ) /*0x27a17a*/
      v4 = i; /*0x27a182*/
    else
      i += 16; /*0x27a17c*/
  }
  if ( !*(_BYTE *)(v4 + 25) && a2 >= *(_DWORD *)(v4 + 32) && v4 != result ) /*0x27a1a7*/
  {
    v14 = 0; /*0x27a1ad*/
    do /*0x27a203*/
    {
      v6 = sub_10CA20(a1 + 1200, &v15); /*0x27a1cc*/
      v7 = *(_DWORD *)sub_10C920(v6, &v14); /*0x27a1de*/
      if ( v7 > 0 ) /*0x27a1e2*/
        GameManager_unloadIcon(a1, v7, v14, v15); /*0x27a1f1*/
      ++v14; /*0x27a1fc*/
    }
    while ( v14 <= 8 ); /*0x27a203*/
    v9 = *(__int64 **)(a1 + 1200); /*0x27a205*/
    v10 = v9; /*0x27a211*/
    v11 = (__int64 *)v9[1]; /*0x27a214*/
    for ( j = v11; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x27a21b*/
    {
      v8 = *((unsigned int *)j + 8); /*0x27a221*/
      if ( (int)v8 >= v15 ) /*0x27a228*/
      {
        if ( *((_BYTE *)v10 + 25) && v15 < (int)v8 ) /*0x27a239*/
          v10 = j; /*0x27a239*/
        v9 = j; /*0x27a23d*/
      }
      else
      {
        j += 2; /*0x27a22a*/
      }
    }
    if ( !*((_BYTE *)v10 + 25) ) /*0x27a249*/
      v11 = (__int64 *)*v10; /*0x27a24f*/
    while ( !*((_BYTE *)v11 + 25) ) /*0x27a252*/
    {
      if ( v15 >= *((_DWORD *)v11 + 8) ) /*0x27a25c*/
      {
        v11 = (__int64 *)v11[2]; /*0x27a266*/
      }
      else
      {
        v10 = v11; /*0x27a25e*/
        v11 = (__int64 *)*v11; /*0x27a261*/
      }
    }
    v13[1] = v10; /*0x27a270*/
    v13[0] = v9; /*0x27a281*/
    return sub_284C30(a1 + 1200, v13, v8, (unsigned int)v15); /*0x27a286*/
  }
  return result; /*0x27a28b*/
}

// [19/51] Address: 0x27a2a0
// Method: GameManager::sheetNameForIcon
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameManager_sheetNameForIcon(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rcx
  __int16 v8; // ax
  __int64 v10; // rax
  __int64 v11; // r8
  void *v12; // rcx
  __int128 v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-B8h] BYREF
  void *Block[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  unsigned __int64 v17; // [rsp+70h] [rbp-90h]
  _BYTE v18[528]; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&v13 = a2; /*0x27a2d5*/
  fmt::BasicWriter<char>::BasicWriter<char>(v18); /*0x27a2e1*/
  *(_OWORD *)Block = 0; /*0x27a2eb*/
  v17 = 15; /*0x27a2f6*/
  LOBYTE(Block[0]) = 0; /*0x27a2fb*/
  switch ( a4 ) /*0x27a31a*/
  {
    case 0: /*0x27a31a*/
      v7 = 7; /*0x27a31c*/
      Block[0] = (void *)0x5F726579616C70LL; /*0x27a328*/
      goto LABEL_11; /*0x27a348*/
    case 1: /*0x27a31a*/
      v7 = 5; /*0x27a34d*/
      LODWORD(Block[0]) = *(_DWORD *)"ship_"; /*0x27a358*/
      WORD2(Block[0]) = (unsigned __int8)aShip[4]; /*0x27a363*/
      goto LABEL_11; /*0x27a36c*/
    case 2: /*0x27a31a*/
      v7 = 12; /*0x27a371*/
      strcpy((char *)Block, "player_ball_"); /*0x27a37e*/
      goto LABEL_11; /*0x27a393*/
    case 3: /*0x27a31a*/
      v7 = 5; /*0x27a398*/
      LODWORD(Block[0]) = *(_DWORD *)"bird_"; /*0x27a3a3*/
      WORD2(Block[0]) = (unsigned __int8)aBird[4]; /*0x27a3ae*/
      goto LABEL_11; /*0x27a3b7*/
    case 4: /*0x27a31a*/
      v7 = 5; /*0x27a3bc*/
      LODWORD(Block[0]) = *(_DWORD *)"dart_"; /*0x27a3c7*/
      WORD2(Block[0]) = (unsigned __int8)aDart[4]; /*0x27a3d2*/
      goto LABEL_11; /*0x27a3db*/
    case 5: /*0x27a31a*/
      LODWORD(Block[0]) = *(_DWORD *)"robot_"; /*0x27a3e3*/
      v8 = *(_WORD *)"t_"; /*0x27a3e7*/
      goto LABEL_10; /*0x27a3ee*/
    case 6: /*0x27a31a*/
      v7 = 7; /*0x27a3f0*/
      qmemcpy(Block, "spider", 6); /*0x27a3fc*/
      HIWORD(Block[0]) = (unsigned __int8)aSpider[6]; /*0x27a413*/
      goto LABEL_11; /*0x27a41c*/
    case 7: /*0x27a31a*/
      LODWORD(Block[0]) = *(_DWORD *)"swing_"; /*0x27a424*/
      v8 = *(_WORD *)"g_"; /*0x27a428*/
LABEL_10:
      BYTE6(Block[0]) = 0; /*0x27a42f*/
      WORD2(Block[0]) = v8; /*0x27a434*/
      v7 = 6; /*0x27a439*/
LABEL_11:
      v16 = v7; /*0x27a43e*/
      goto LABEL_15; /*0x27a446*/
    case 8: /*0x27a31a*/
      v16 = 8; /*0x27a49b*/
      strcpy((char *)Block, "jetpack_"); /*0x27a4ae*/
LABEL_15:
      *(_QWORD *)&v13 = "icons/"; /*0x27a4b8*/
      *((_QWORD *)&v13 + 1) = 0; /*0x27a4c4*/
      fmt::BasicWriter<char>::operator<<(v18, &v13); /*0x27a4d2*/
      v13 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v14, Block); /*0x27a4eb*/
      fmt::BasicWriter<char>::operator<<(v18, &v13); /*0x27a4f9*/
      if ( a3 < 10 ) /*0x27a502*/
      {
        *(_QWORD *)&v13 = "0"; /*0x27a50b*/
        *((_QWORD *)&v13 + 1) = 0; /*0x27a510*/
        fmt::BasicWriter<char>::operator<<(v18, &v13); /*0x27a51e*/
      }
      fmt::BasicWriter<char>::operator<<(v18, (unsigned int)a3); /*0x27a52a*/
      v10 = fmt::BasicWriter<char>::c_str(v18); /*0x27a534*/
      *(_OWORD *)a2 = 0; /*0x27a53d*/
      *(_QWORD *)(a2 + 16) = 0; /*0x27a540*/
      *(_QWORD *)(a2 + 24) = 0; /*0x27a544*/
      v11 = -1; /*0x27a548*/
      do /*0x27a553*/
        ++v11; /*0x27a550*/
      while ( *(_BYTE *)(v10 + v11) ); /*0x27a553*/
      sub_3C230(a2); /*0x27a560*/
      if ( v17 > 0xF ) /*0x27a56f*/
      {
        v12 = Block[0]; /*0x27a578*/
        if ( v17 + 1 >= 0x1000 ) /*0x27a587*/
        {
          v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x27a58d*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x27a59c*/
            invoke_watson(0, 0, 0, 0, 0); /*0x27a5ad*/
        }
        j_j_free(v12); /*0x27a5b4*/
      }
      break; /*0x27a5b9*/
    default:
      *(_OWORD *)a2 = 0; /*0x27a44b*/
      *(_QWORD *)(a2 + 16) = 0; /*0x27a44e*/
      *(_QWORD *)(a2 + 24) = 15; /*0x27a452*/
      *(_BYTE *)a2 = 0; /*0x27a456*/
      break; /*0x27a456*/
  }
  v16 = 0; /*0x27a459*/
  v17 = 15; /*0x27a45e*/
  LOBYTE(Block[0]) = 0; /*0x27a463*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v18); /*0x27a46c*/
  return a2; /*0x27a475*/
}

// [20/51] Address: 0x27a5f0
// Method: GameManager::loadFont
void __fastcall GameManager_loadFont(__int64 a1, int a2)
{
  int v2; // eax
  int v4; // edx
  int v5; // edi
  cocos2d::CCString *v6; // rax
  const char *CString; // rbx
  cocos2d::CCTextureCache *v8; // rax
  cocos2d::CCString *v9; // rax
  const char *v10; // rbx
  cocos2d::CCTextureCache *v11; // rax

  v2 = 59; /*0x27a5fa*/
  if ( a2 < 59 ) /*0x27a604*/
    v2 = a2; /*0x27a604*/
  v4 = *(_DWORD *)(a1 + 1024); /*0x27a607*/
  v5 = 0; /*0x27a60d*/
  if ( v2 > 0 ) /*0x27a611*/
    v5 = v2; /*0x27a611*/
  if ( v5 != v4 ) /*0x27a616*/
  {
    if ( v4 ) /*0x27a61f*/
    {
      v6 = cocos2d::CCString::createWithFormat("gjFont%02d.png", v4); /*0x27a628*/
      CString = cocos2d::CCString::getCString(v6); /*0x27a637*/
      v8 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a63a*/
      cocos2d::CCTextureCache::removeTextureForKey(v8, CString); /*0x27a646*/
    }
    if ( v5 ) /*0x27a64e*/
    {
      v9 = cocos2d::CCString::createWithFormat("gjFont%02d.png", v5); /*0x27a659*/
      v10 = cocos2d::CCString::getCString(v9); /*0x27a668*/
      v11 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a66b*/
      cocos2d::CCTextureCache::addImage(v11, v10, 0); /*0x27a67a*/
    }
    *(_DWORD *)(a1 + 1024) = v5; /*0x27a685*/
  }
}

// [21/51] Address: 0x27a6a0
// Method: GameManager::loadBackground
unsigned __int64 __fastcall GameManager_loadBackground(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  int v3; // edi
  int v5; // edx
  cocos2d::CCString *v6; // rax
  const char *CString; // rbx
  cocos2d::CCTextureCache *v8; // rax
  cocos2d::CCString *v9; // rax
  const char *v10; // rbx
  cocos2d::CCTextureCache *v11; // rax

  result = 59; /*0x27a6aa*/
  v3 = 1; /*0x27a6af*/
  if ( a2 < 59 ) /*0x27a6b9*/
    result = (unsigned int)a2; /*0x27a6b9*/
  v5 = *(_DWORD *)(a1 + 1012); /*0x27a6bc*/
  if ( (int)result > 1 ) /*0x27a6c4*/
    v3 = result; /*0x27a6c4*/
  if ( v3 != v5 ) /*0x27a6c9*/
  {
    if ( v5 ) /*0x27a6d2*/
    {
      v6 = cocos2d::CCString::createWithFormat("game_bg_%02d_001.png", v5); /*0x27a6db*/
      CString = cocos2d::CCString::getCString(v6); /*0x27a6ea*/
      v8 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a6ed*/
      cocos2d::CCTextureCache::removeTextureForKey(v8, CString); /*0x27a6f9*/
    }
    v9 = cocos2d::CCString::createWithFormat("game_bg_%02d_001.png", v3); /*0x27a708*/
    v10 = cocos2d::CCString::getCString(v9); /*0x27a717*/
    cocos2d::CCApplication::sharedApplication(); /*0x27a71a*/
    v11 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a720*/
    result = (unsigned __int64)cocos2d::CCTextureCache::addImage(v11, v10, 0); /*0x27a72f*/
    *(_DWORD *)(a1 + 1012) = v3; /*0x27a73a*/
  }
  return result; /*0x27a740*/
}

// [22/51] Address: 0x27a750
// Method: GameManager::finishedLoadingBGAsync
void __fastcall GameManager_finishedLoadingBGAsync(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  int v6; // edx
  cocos2d::CCString *v7; // rax
  const char *CString; // rbx
  cocos2d::CCTextureCache *v9; // rax

  *(_BYTE *)(a1 + 1032) = 0; /*0x27a75a*/
  if ( a2 ) /*0x27a76a*/
  {
    if ( *(_QWORD *)(a1 + 576) ) /*0x27a76c*/
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x27a781*/
      v5 = *(_QWORD *)(a1 + 576); /*0x27a784*/
      GJBaseGameLayer_createBackground(v5, v4); /*0x27a790*/
      GJBaseGameLayer_updateLevelColors(v5); /*0x27a798*/
    }
    v6 = *(_DWORD *)(a1 + 1012); /*0x27a79d*/
    if ( v6 ) /*0x27a7a5*/
    {
      v7 = cocos2d::CCString::createWithFormat("game_bg_%02d_001.png", v6); /*0x27a7ae*/
      CString = cocos2d::CCString::getCString(v7); /*0x27a7bd*/
      v9 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a7c0*/
      cocos2d::CCTextureCache::removeTextureForKey(v9, CString); /*0x27a7cc*/
    }
    *(_DWORD *)(a1 + 1012) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x27a7e0*/
  }
}

// [23/51] Address: 0x27a800
// Method: GameManager::loadMiddleground
void __fastcall GameManager_loadMiddleground(__int64 a1, int a2)
{
  int v2; // eax
  int v4; // edx
  int v5; // edi
  cocos2d::CCString *v6; // rax
  const char *CString; // rbx
  cocos2d::CCTextureCache *v8; // rax
  cocos2d::CCString *v9; // rax
  const char *v10; // rbx
  cocos2d::CCTextureCache *v11; // rax
  cocos2d::CCString *v12; // rax
  const char *v13; // rbx
  cocos2d::CCTextureCache *v14; // rax
  cocos2d::CCString *v15; // rax
  const char *v16; // rbx
  cocos2d::CCTextureCache *v17; // rax

  v2 = 3; /*0x27a80a*/
  if ( a2 < 3 ) /*0x27a814*/
    v2 = a2; /*0x27a814*/
  v4 = *(_DWORD *)(a1 + 1020); /*0x27a817*/
  v5 = 0; /*0x27a81d*/
  if ( v2 > 0 ) /*0x27a821*/
    v5 = v2; /*0x27a821*/
  if ( v5 != v4 ) /*0x27a826*/
  {
    v6 = cocos2d::CCString::createWithFormat("fg_%02d_001.png", v4); /*0x27a838*/
    CString = cocos2d::CCString::getCString(v6); /*0x27a847*/
    v8 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a84a*/
    cocos2d::CCTextureCache::removeTextureForKey(v8, CString); /*0x27a856*/
    v9 = cocos2d::CCString::createWithFormat("fg_%02d_2_001.png", *(_DWORD *)(a1 + 1020)); /*0x27a869*/
    v10 = cocos2d::CCString::getCString(v9); /*0x27a878*/
    v11 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a87b*/
    cocos2d::CCTextureCache::removeTextureForKey(v11, v10); /*0x27a887*/
    if ( v5 > 0 ) /*0x27a88f*/
    {
      v12 = cocos2d::CCString::createWithFormat("fg_%02d_001.png", v5); /*0x27a89a*/
      v13 = cocos2d::CCString::getCString(v12); /*0x27a8a9*/
      v14 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a8ac*/
      cocos2d::CCTextureCache::addImage(v14, v13, 0); /*0x27a8bb*/
      v15 = cocos2d::CCString::createWithFormat("fg_%02d_2_001.png", v5); /*0x27a8ca*/
      v16 = cocos2d::CCString::getCString(v15); /*0x27a8d9*/
      v17 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27a8dc*/
      cocos2d::CCTextureCache::addImage(v17, v16, 0); /*0x27a8eb*/
    }
    *(_DWORD *)(a1 + 1020) = v5; /*0x27a8f6*/
  }
}

// [24/51] Address: 0x27a990
// Method: GameManager::finishedLoadingMGAsync
void __fastcall GameManager_finishedLoadingMGAsync(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v5; // edx
  cocos2d::CCString *v6; // rax
  const char *CString; // rdi
  cocos2d::CCString *v8; // rax
  const char *v9; // rbx
  cocos2d::CCTextureCache *v10; // rax
  cocos2d::CCTextureCache *v11; // rax

  v2 = *(_QWORD *)(a1 + 576); /*0x27a99f*/
  *(_BYTE *)(a1 + 1034) = 0; /*0x27a9a8*/
  if ( v2 ) /*0x27a9b5*/
  {
    GJBaseGameLayer_createMiddleground(v2); /*0x27a9ba*/
    GJBaseGameLayer_updateLevelColors(v2); /*0x27a9c2*/
  }
  v5 = *(_DWORD *)(a1 + 1020); /*0x27a9c7*/
  if ( v5 ) /*0x27a9cf*/
  {
    v6 = cocos2d::CCString::createWithFormat("fg_%02d_001.png", v5); /*0x27a9dd*/
    CString = cocos2d::CCString::getCString(v6); /*0x27a9f9*/
    v8 = cocos2d::CCString::createWithFormat("fg_%02d_2_001.png", *(_DWORD *)(a1 + 1020)); /*0x27a9fc*/
    v9 = cocos2d::CCString::getCString(v8); /*0x27aa0b*/
    v10 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27aa0e*/
    cocos2d::CCTextureCache::removeTextureForKey(v10, CString); /*0x27aa1a*/
    v11 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27aa20*/
    cocos2d::CCTextureCache::removeTextureForKey(v11, v9); /*0x27aa2c*/
  }
  *(_DWORD *)(a1 + 1020) = a2; /*0x27aa3c*/
}

// [25/51] Address: 0x27aa50
// Method: GameManager::loadGround
unsigned __int64 __fastcall GameManager_loadGround(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  int v3; // edi
  int v5; // edx
  cocos2d::CCString *v6; // rax
  const char *CString; // rbx
  cocos2d::CCTextureCache *v8; // rax
  int v9; // edx
  cocos2d::CCString *v10; // rax
  const char *v11; // rbx
  cocos2d::CCTextureCache *v12; // rax
  cocos2d::CCString *v13; // rax
  const char *v14; // rbx
  cocos2d::CCTextureCache *v15; // rax
  cocos2d::CCString *v16; // rax
  const char *v17; // rbx
  cocos2d::CCTextureCache *v18; // rax

  result = 22; /*0x27aa5a*/
  v3 = 1; /*0x27aa5f*/
  if ( a2 < 22 ) /*0x27aa69*/
    result = (unsigned int)a2; /*0x27aa69*/
  v5 = *(_DWORD *)(a1 + 1016); /*0x27aa6c*/
  if ( (int)result > 1 ) /*0x27aa74*/
    v3 = result; /*0x27aa74*/
  if ( v3 != v5 ) /*0x27aa79*/
  {
    if ( v5 ) /*0x27aa86*/
    {
      v6 = cocos2d::CCString::createWithFormat("groundSquare_%02d_001.png", v5); /*0x27aa8f*/
      CString = cocos2d::CCString::getCString(v6); /*0x27aa9e*/
      v8 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27aaa1*/
      cocos2d::CCTextureCache::removeTextureForKey(v8, CString); /*0x27aaad*/
      v9 = *(_DWORD *)(a1 + 1016); /*0x27aab3*/
      if ( v9 == 8 || (unsigned int)(v9 - 9) <= 2 ) /*0x27aac4*/
      {
        v10 = cocos2d::CCString::createWithFormat("groundSquare_%02d_2_001.png", v9); /*0x27aacd*/
        v11 = cocos2d::CCString::getCString(v10); /*0x27aadc*/
        v12 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27aadf*/
        cocos2d::CCTextureCache::removeTextureForKey(v12, v11); /*0x27aaeb*/
      }
    }
    v13 = cocos2d::CCString::createWithFormat("groundSquare_%02d_001.png", v3); /*0x27aafa*/
    v14 = cocos2d::CCString::getCString(v13); /*0x27ab09*/
    v15 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27ab0c*/
    cocos2d::CCTextureCache::addImage(v15, v14, 0); /*0x27ab1b*/
    result = (unsigned int)(v3 - 8); /*0x27ab21*/
    if ( (unsigned int)result <= 3 ) /*0x27ab27*/
    {
      v16 = cocos2d::CCString::createWithFormat("groundSquare_%02d_2_001.png", v3); /*0x27ab32*/
      v17 = cocos2d::CCString::getCString(v16); /*0x27ab41*/
      v18 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27ab44*/
      result = (unsigned __int64)cocos2d::CCTextureCache::addImage(v18, v17, 0); /*0x27ab53*/
    }
    *(_DWORD *)(a1 + 1016) = v3; /*0x27ab5e*/
  }
  return result; /*0x27ab64*/
}

// [26/51] Address: 0x27abf0
// Method: GameManager::finishedLoadingGAsync
void __fastcall GameManager_finishedLoadingGAsync(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v5; // edx
  cocos2d::CCString *v6; // rax
  const char *CString; // rdi
  cocos2d::CCString *v8; // rax
  const char *v9; // rbx
  cocos2d::CCTextureCache *v10; // rax
  cocos2d::CCTextureCache *v11; // rax

  v2 = *(_QWORD *)(a1 + 576); /*0x27abff*/
  v3 = a2; /*0x27ac06*/
  *(_BYTE *)(a1 + 1033) = 0; /*0x27ac08*/
  if ( v2 ) /*0x27ac15*/
  {
    GJBaseGameLayer_createGroundLayer(v2, a2, 0); /*0x27ac1d*/
    GJBaseGameLayer_updateLevelColors(v2); /*0x27ac25*/
  }
  v5 = *(_DWORD *)(a1 + 1016); /*0x27ac2a*/
  if ( v5 ) /*0x27ac32*/
  {
    v6 = cocos2d::CCString::createWithFormat("groundSquare_%02d_001.png", v5); /*0x27ac40*/
    CString = cocos2d::CCString::getCString(v6); /*0x27ac5c*/
    v8 = cocos2d::CCString::createWithFormat("groundSquare_%02d_2_001.png", *(_DWORD *)(a1 + 1016)); /*0x27ac5f*/
    v9 = cocos2d::CCString::getCString(v8); /*0x27ac6e*/
    v10 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27ac71*/
    cocos2d::CCTextureCache::removeTextureForKey(v10, CString); /*0x27ac7d*/
    v11 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x27ac83*/
    cocos2d::CCTextureCache::removeTextureForKey(v11, v9); /*0x27ac8f*/
  }
  *(_DWORD *)(a1 + 1016) = v3; /*0x27ac9f*/
}

// [27/51] Address: 0x27af50
// Method: GameManager::getGameVariable
// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall GameManager_getGameVariable(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rbx
  size_t v4; // r8
  void **v5; // rdx
  cocos2d::CCString *v6; // rax
  bool v7; // bl
  void *v8; // r8
  void *v9; // rcx
  void *Src[2]; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+40h] [rbp-48h]
  void *Block[2]; // [rsp+50h] [rbp-38h] BYREF
  __m128i v14; // [rsp+60h] [rbp-28h]

  *(_OWORD *)Src = 0; /*0x27af72*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F00); /*0x27af7f*/
  LODWORD(Src[0]) = 6256231; /*0x27af8b*/
  v3 = -1; /*0x27afa0*/
  v4 = -1; /*0x27afa7*/
  do /*0x27afb3*/
    ++v4; /*0x27afb0*/
  while ( a2[v4] ); /*0x27afb3*/
  sub_43D80(Src, a2, v4); /*0x27afbf*/
  v5 = Src; /*0x27afc4*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x27afcf*/
    v5 = (void **)Src[0]; /*0x27afcf*/
  *(_OWORD *)Block = 0; /*0x27afd8*/
  v14 = 0; /*0x27afe0*/
  do /*0x27afe9*/
    ++v3; /*0x27afe6*/
  while ( *((_BYTE *)v5 + v3) ); /*0x27afe9*/
  sub_3C230(Block); /*0x27aff7*/
  v6 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(a1 + 432), Block); /*0x27b009*/
  v7 = cocos2d::CCString::boolValue(v6); /*0x27b018*/
  if ( v14.m128i_i64[1] > 0xFuLL ) /*0x27b024*/
  {
    v8 = Block[0]; /*0x27b029*/
    if ( (unsigned __int64)(v14.m128i_i64[1] + 1) >= 0x1000 ) /*0x27b038*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x27b03e*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x27b04d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x27b062*/
    }
    j_j_free(v8); /*0x27b06c*/
  }
  v14 = _mm_load_si128((const __m128i *)&Size); /*0x27b079*/
  LOBYTE(Block[0]) = 0; /*0x27b07f*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x27b08d*/
  {
    v9 = Src[0]; /*0x27b092*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x27b0a1*/
    {
      v9 = (void *)*((_QWORD *)Src[0] - 1); /*0x27b0a7*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v9 - 8) > 0x1F ) /*0x27b0b6*/
        invoke_watson(0, 0, 0, 0, 0); /*0x27b0cb*/
    }
    j_j_free(v9); /*0x27b0d2*/
  }
  return v7; /*0x27b0da*/
}

// [28/51] Address: 0x27b100
// Method: GameManager::toggleGameVariable
// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall GameManager_toggleGameVariable(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rcx
  bool v4; // bl
  __int64 v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h]
  void *v8; // [rsp+30h] [rbp+8h]

  v3 = qword_905FD0; /*0x27b112*/
  if ( !qword_905FD0 ) /*0x27b11c*/
  {
    v7 = operator new(0x6E8u); /*0x27b128*/
    qword_905FD0 = sub_2723A0(v7); /*0x27b136*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27b147*/
    v3 = qword_905FD0; /*0x27b149*/
  }
  v4 = !GameManager_getGameVariable(v3, a2); /*0x27b15b*/
  v5 = qword_905FD0; /*0x27b15e*/
  if ( !qword_905FD0 ) /*0x27b168*/
  {
    v8 = operator new(0x6E8u); /*0x27b174*/
    qword_905FD0 = sub_2723A0(v8); /*0x27b182*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27b193*/
    v5 = qword_905FD0; /*0x27b195*/
  }
  sub_27ACB0(v5, a2, v4); /*0x27b1a3*/
  return v4; /*0x27b1ab*/
}

// [29/51] Address: 0x27b890
// Method: GameManager::addNewCustomObject
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameManager_addNewCustomObject(__int64 a1, __int64 a2)
{
  struct cocos2d::CCArray *v4; // rsi
  int v5; // edi
  unsigned int *v6; // rbx
  __int64 v7; // rax
  cocos2d::CCString **v8; // rbx
  cocos2d::CCString **i; // rsi
  int v10; // eax
  cocos2d::CCString *v11; // rax
  const char *CString; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  void *v16; // rcx
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v19; // [rsp+48h] [rbp-30h]

  v4 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 464)); /*0x27b8c9*/
  if ( cocos2d::CCArray::count(v4) ) /*0x27b8cf*/
    qsort(*(void **)(*((_QWORD *)v4 + 7) + 16LL), **((unsigned int **)v4 + 7), 8u, sub_272A40); /*0x27b8f0*/
  v5 = 0; /*0x27b8f6*/
  if ( v4 ) /*0x27b8fb*/
  {
    v6 = (unsigned int *)*((_QWORD *)v4 + 7); /*0x27b8fd*/
    v7 = *v6; /*0x27b901*/
    if ( (_DWORD)v7 ) /*0x27b905*/
    {
      v8 = (cocos2d::CCString **)*((_QWORD *)v6 + 2); /*0x27b907*/
      for ( i = &v8[v7 - 1]; v8 <= i; ++v8 ) /*0x27b916*/
      {
        if ( !*v8 ) /*0x27b918*/
          break; /*0x27b91e*/
        v10 = cocos2d::CCString::intValue(*v8); /*0x27b920*/
        if ( v10 < v5 ) /*0x27b928*/
          v5 = v10; /*0x27b928*/
      }
    }
  }
  v11 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(v5 - 1)); /*0x27b93e*/
  CString = cocos2d::CCString::getCString(v11); /*0x27b947*/
  *(_OWORD *)Block = 0; /*0x27b950*/
  v19 = 0; /*0x27b958*/
  v13 = -1; /*0x27b95e*/
  do /*0x27b968*/
    ++v13; /*0x27b965*/
  while ( CString[v13] ); /*0x27b968*/
  sub_3C230(Block); /*0x27b977*/
  v14 = *(_QWORD *)(a1 + 464); /*0x27b97d*/
  v15 = cocos2d::CCString::create(a2); /*0x27b987*/
  cocos2d::CCDictionary::setObject(v14, v15, Block); /*0x27b998*/
  if ( *((_QWORD *)&v19 + 1) > 0xFu ) /*0x27b9a8*/
  {
    v16 = Block[0]; /*0x27b9ad*/
    if ( (unsigned __int64)(*((_QWORD *)&v19 + 1) + 1LL) >= 0x1000 ) /*0x27b9bc*/
    {
      v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x27b9c2*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x27b9d1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x27b9e6*/
    }
    j_j_free(v16); /*0x27b9ed*/
  }
  sub_3C310(a2); /*0x27b9f6*/
  return (unsigned int)(v5 - 1); /*0x27b9fe*/
}

// [30/51] Address: 0x27ba20
// Method: GameManager::stringForCustomObject
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameManager_stringForCustomObject(__int64 a1, __int64 a2, unsigned int a3)
{
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  cocos2d::CCString *v9; // rsi
  void *v10; // rcx
  const char *v11; // rax
  void *Block[2]; // [rsp+40h] [rbp-48h] BYREF
  __m128i si128; // [rsp+50h] [rbp-38h]

  v5 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a3); /*0x27ba52*/
  CString = cocos2d::CCString::getCString(v5); /*0x27ba5b*/
  *(_OWORD *)Block = 0; /*0x27ba64*/
  si128 = 0; /*0x27ba6c*/
  v7 = -1; /*0x27ba72*/
  v8 = -1; /*0x27ba79*/
  do /*0x27ba83*/
    ++v8; /*0x27ba80*/
  while ( CString[v8] ); /*0x27ba83*/
  sub_3C230(Block); /*0x27ba91*/
  v9 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 464), Block); /*0x27baa9*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x27bab5*/
  {
    v10 = Block[0]; /*0x27baba*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x27bac9*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x27bacf*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x27bade*/
        invoke_watson(0, 0, 0, 0, 0); /*0x27baef*/
    }
    j_j_free(v10); /*0x27baf6*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x27bb03*/
  LOBYTE(Block[0]) = 0; /*0x27bb09*/
  if ( v9 ) /*0x27bb11*/
  {
    v11 = cocos2d::CCString::getCString(v9); /*0x27bb16*/
    *(_OWORD *)a2 = 0; /*0x27bb1f*/
    *(_QWORD *)(a2 + 16) = 0; /*0x27bb22*/
    *(_QWORD *)(a2 + 24) = 0; /*0x27bb26*/
    do /*0x27bb33*/
      ++v7; /*0x27bb30*/
    while ( v11[v7] ); /*0x27bb33*/
    sub_3C230(a2); /*0x27bb42*/
  }
  else
  {
    *(_OWORD *)a2 = 0; /*0x27bb4c*/
    *(_QWORD *)(a2 + 16) = 0; /*0x27bb4f*/
    *(_QWORD *)(a2 + 24) = 15; /*0x27bb53*/
    *(_BYTE *)a2 = 0; /*0x27bb5b*/
  }
  return a2; /*0x27bb61*/
}

// [31/51] Address: 0x27bb80
// Method: GameManager::reorderKey
__int64 __fastcall GameManager_reorderKey(__int64 a1, unsigned int a2, char a3)
{
  struct cocos2d::CCArray *v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // ebx
  cocos2d::CCString *v9; // rax
  unsigned int v10; // eax
  unsigned int v12; // ebx
  cocos2d::CCString *v13; // rax

  v6 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 464)); /*0x27bbb1*/
  if ( cocos2d::CCArray::count(v6) ) /*0x27bbb4*/
    qsort(*(void **)(*((_QWORD *)v6 + 7) + 16LL), **((unsigned int **)v6 + 7), 8u, sub_272A40); /*0x27bbd5*/
  v7 = 0; /*0x27bbdb*/
  v8 = 0; /*0x27bbe0*/
  if ( !cocos2d::CCArray::count(v6) ) /*0x27bbea*/
    return a2; /*0x27bbea*/
  while ( 1 ) /*0x27bbf5*/
  {
    v9 = cocos2d::CCArray::stringAtIndex(v6, v8); /*0x27bbf5*/
    v10 = cocos2d::CCString::intValue(v9); /*0x27bbfe*/
    if ( v10 == a2 ) /*0x27bc06*/
      break; /*0x27bc06*/
    v7 = v10; /*0x27bc0b*/
    if ( ++v8 >= cocos2d::CCArray::count(v6) ) /*0x27bc17*/
      return a2; /*0x27bc17*/
  }
  if ( !a3 ) /*0x27bc37*/
  {
    v12 = v8 + 1; /*0x27bc3c*/
    if ( v12 >= cocos2d::CCArray::count(v6) ) /*0x27bc46*/
      return a2; /*0x27bc33*/
    v13 = cocos2d::CCArray::stringAtIndex(v6, v12); /*0x27bc4d*/
    v7 = cocos2d::CCString::intValue(v13); /*0x27bc5c*/
  }
  if ( !v7 ) /*0x27bc60*/
    return a2; /*0x27bc60*/
  GameManager_switchCustomObjects(a1, a2, v7); /*0x27bc6a*/
  return v7; /*0x27bc1b*/
}

// [32/51] Address: 0x27bc80
// Method: GameManager::switchCustomObjects
// Hidden C++ exception states: #wind=3
void __fastcall GameManager_switchCustomObjects(__int64 a1, unsigned int a2, unsigned int a3)
{
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  cocos2d::CCObject *v10; // rsi
  void *v11; // r8
  cocos2d::CCString *v12; // rax
  const char *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  void *v16; // r8
  cocos2d::CCString *v17; // rax
  const char *v18; // rax
  __int64 v19; // r8
  void *v20; // rcx
  cocos2d::CCString *v21; // rax
  const char *v22; // rax
  void *v23; // rcx
  void *v24[2]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v25; // [rsp+40h] [rbp-39h]
  void *Block[2]; // [rsp+50h] [rbp-29h] BYREF
  __m128i si128; // [rsp+60h] [rbp-19h]
  void *v28[2]; // [rsp+70h] [rbp-9h] BYREF
  __m128i v29; // [rsp+80h] [rbp+7h]

  v6 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0x27bcb5*/
  CString = cocos2d::CCString::getCString(v6); /*0x27bcbe*/
  *(_OWORD *)Block = 0; /*0x27bcc7*/
  si128 = 0; /*0x27bcce*/
  v8 = -1; /*0x27bcd3*/
  v9 = -1; /*0x27bcda*/
  do /*0x27bce3*/
    ++v9; /*0x27bce0*/
  while ( CString[v9] ); /*0x27bce3*/
  sub_3C230(Block); /*0x27bcf1*/
  v10 = (cocos2d::CCObject *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 464), Block); /*0x27bd08*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x27bd13*/
  {
    v11 = Block[0]; /*0x27bd18*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x27bd26*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x27bd2c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x27bd3b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x27bd50*/
    }
    j_j_free(v11); /*0x27bd5a*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x27bd67*/
  LOBYTE(Block[0]) = 0; /*0x27bd6c*/
  v12 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a3); /*0x27bd7a*/
  v13 = cocos2d::CCString::getCString(v12); /*0x27bd83*/
  *(_OWORD *)v28 = 0; /*0x27bd8c*/
  v29 = 0; /*0x27bd93*/
  v14 = -1; /*0x27bd98*/
  do /*0x27bda3*/
    ++v14; /*0x27bda0*/
  while ( v13[v14] ); /*0x27bda3*/
  sub_3C230(v28); /*0x27bdb1*/
  v15 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 464), v28); /*0x27bdc8*/
  if ( v29.m128i_i64[1] > 0xFuLL ) /*0x27bdd3*/
  {
    v16 = v28[0]; /*0x27bdd8*/
    if ( (unsigned __int64)(v29.m128i_i64[1] + 1) >= 0x1000 ) /*0x27bde6*/
    {
      v16 = (void *)*((_QWORD *)v28[0] - 1); /*0x27bdec*/
      if ( (unsigned __int64)((char *)v28[0] - (char *)v16 - 8) > 0x1F ) /*0x27bdfb*/
        invoke_watson(0, 0, 0, 0, 0); /*0x27be10*/
    }
    j_j_free(v16); /*0x27be1a*/
  }
  v29 = _mm_load_si128((const __m128i *)&Size); /*0x27be27*/
  LOBYTE(v28[0]) = 0; /*0x27be2c*/
  cocos2d::CCObject::retain(v10); /*0x27be33*/
  v17 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x27be43*/
  v18 = cocos2d::CCString::getCString(v17); /*0x27be4c*/
  *(_OWORD *)v24 = 0; /*0x27be55*/
  v25 = 0; /*0x27be5c*/
  v19 = -1; /*0x27be61*/
  do /*0x27be67*/
    ++v19; /*0x27be64*/
  while ( v18[v19] ); /*0x27be67*/
  sub_3C230(v24); /*0x27be75*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 464), v15, v24); /*0x27be89*/
  if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x27be98*/
  {
    v20 = v24[0]; /*0x27be9d*/
    if ( (unsigned __int64)(*((_QWORD *)&v25 + 1) + 1LL) >= 0x1000 ) /*0x27beab*/
    {
      v20 = (void *)*((_QWORD *)v24[0] - 1); /*0x27beb1*/
      if ( (unsigned __int64)((char *)v24[0] - (char *)v20 - 8) > 0x1F ) /*0x27bec0*/
        invoke_watson(0, 0, 0, 0, 0); /*0x27bed5*/
    }
    j_j_free(v20); /*0x27bedc*/
  }
  v21 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a3); /*0x27beeb*/
  v22 = cocos2d::CCString::getCString(v21); /*0x27bef4*/
  *(_OWORD *)v24 = 0; /*0x27befd*/
  v25 = 0; /*0x27bf04*/
  do /*0x27bf13*/
    ++v8; /*0x27bf10*/
  while ( v22[v8] ); /*0x27bf13*/
  sub_3C230(v24); /*0x27bf23*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 464), v10, v24); /*0x27bf37*/
  if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x27bf46*/
  {
    v23 = v24[0]; /*0x27bf4b*/
    if ( (unsigned __int64)(*((_QWORD *)&v25 + 1) + 1LL) >= 0x1000 ) /*0x27bf59*/
    {
      v23 = (void *)*((_QWORD *)v24[0] - 1); /*0x27bf5f*/
      if ( (unsigned __int64)((char *)v24[0] - (char *)v23 - 8) > 0x1F ) /*0x27bf6e*/
        invoke_watson(0, 0, 0, 0, 0); /*0x27bf83*/
    }
    j_j_free(v23); /*0x27bf8a*/
  }
  cocos2d::CCObject::release(v10); /*0x27bf92*/
}

// [33/51] Address: 0x27bfc0
// Method: GameManager::resetAllIcons
__int64 __fastcall GameManager_resetAllIcons(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  float v5; // xmm0_4
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17; // eax
  float v18; // xmm0_4
  int v19; // eax
  float v20; // xmm0_4
  int v21; // eax
  float v22; // xmm0_4
  int v23; // eax
  float v24; // xmm0_4
  int v25; // eax
  float v26; // xmm0_4
  int v27; // eax
  float v28; // xmm0_4
  int v29; // eax
  float v30; // xmm0_4
  __int64 result; // rax

  *(_DWORD *)(a1 + 852) = 0; /*0x27bfd3*/
  v2 = rand(); /*0x27bfdd*/
  *(_DWORD *)(a1 + 864) = 3; /*0x27bff3*/
  v3 = (int)(float)((float)((float)v2 / 32767.0) * 1000.0); /*0x27c00c*/
  *(_DWORD *)(a1 + 848) = v3; /*0x27c010*/
  *(_DWORD *)(a1 + 844) = v3; /*0x27c016*/
  v4 = rand(); /*0x27c01c*/
  *(_DWORD *)(a1 + 876) = -1; /*0x27c022*/
  v5 = (float)((float)v4 / 32767.0) * 1000.0; /*0x27c037*/
  *(_DWORD *)(a1 + 860) = (int)v5; /*0x27c03f*/
  *(_DWORD *)(a1 + 856) = (int)v5 + 3; /*0x27c048*/
  v6 = rand(); /*0x27c04e*/
  *(_DWORD *)(a1 + 756) = 1; /*0x27c054*/
  v7 = (float)((float)v6 / 32767.0) * 1000.0; /*0x27c069*/
  *(_DWORD *)(a1 + 872) = (int)v7; /*0x27c071*/
  *(_DWORD *)(a1 + 868) = (int)v7 - 1; /*0x27c079*/
  v8 = rand(); /*0x27c07f*/
  *(_DWORD *)(a1 + 768) = 1; /*0x27c085*/
  v9 = (float)((float)v8 / 32767.0) * 1000.0; /*0x27c09a*/
  *(_DWORD *)(a1 + 752) = (int)v9; /*0x27c0a2*/
  *(_DWORD *)(a1 + 748) = (int)v9 + 1; /*0x27c0aa*/
  v10 = rand(); /*0x27c0b0*/
  *(_DWORD *)(a1 + 780) = 1; /*0x27c0b6*/
  v11 = (float)((float)v10 / 32767.0) * 1000.0; /*0x27c0cb*/
  *(_DWORD *)(a1 + 764) = (int)v11; /*0x27c0d3*/
  *(_DWORD *)(a1 + 760) = (int)v11 + 1; /*0x27c0db*/
  v12 = rand(); /*0x27c0e1*/
  *(_DWORD *)(a1 + 792) = 1; /*0x27c0e7*/
  v13 = (float)((float)v12 / 32767.0) * 1000.0; /*0x27c0fc*/
  *(_DWORD *)(a1 + 776) = (int)v13; /*0x27c104*/
  *(_DWORD *)(a1 + 772) = (int)v13 + 1; /*0x27c10c*/
  v14 = rand(); /*0x27c112*/
  *(_DWORD *)(a1 + 804) = 1; /*0x27c118*/
  v15 = (float)((float)v14 / 32767.0) * 1000.0; /*0x27c12d*/
  *(_DWORD *)(a1 + 788) = (int)v15; /*0x27c135*/
  *(_DWORD *)(a1 + 784) = (int)v15 + 1; /*0x27c13d*/
  v16 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c154*/
  *(_DWORD *)(a1 + 800) = (int)v16; /*0x27c15c*/
  *(_DWORD *)(a1 + 796) = (int)v16 + 1; /*0x27c164*/
  *(_DWORD *)(a1 + 816) = 1; /*0x27c16a*/
  v17 = rand(); /*0x27c174*/
  *(_DWORD *)(a1 + 828) = 1; /*0x27c17a*/
  v18 = (float)((float)v17 / 32767.0) * 1000.0; /*0x27c18f*/
  *(_DWORD *)(a1 + 812) = (int)v18; /*0x27c197*/
  *(_DWORD *)(a1 + 808) = (int)v18 + 1; /*0x27c19f*/
  v19 = rand(); /*0x27c1a5*/
  *(_DWORD *)(a1 + 840) = 1; /*0x27c1ab*/
  v20 = (float)((float)v19 / 32767.0) * 1000.0; /*0x27c1c0*/
  *(_DWORD *)(a1 + 824) = (int)v20; /*0x27c1c8*/
  *(_DWORD *)(a1 + 820) = (int)v20 + 1; /*0x27c1d0*/
  v21 = rand(); /*0x27c1d6*/
  *(_DWORD *)(a1 + 888) = 1; /*0x27c1dc*/
  v22 = (float)((float)v21 / 32767.0) * 1000.0; /*0x27c1f1*/
  *(_DWORD *)(a1 + 836) = (int)v22; /*0x27c1f9*/
  *(_DWORD *)(a1 + 832) = (int)v22 + 1; /*0x27c201*/
  v23 = rand(); /*0x27c207*/
  *(_DWORD *)(a1 + 900) = 1; /*0x27c20d*/
  v24 = (float)((float)v23 / 32767.0) * 1000.0; /*0x27c222*/
  *(_DWORD *)(a1 + 884) = (int)v24; /*0x27c22a*/
  *(_DWORD *)(a1 + 880) = (int)v24 + 1; /*0x27c232*/
  v25 = rand(); /*0x27c238*/
  *(_DWORD *)(a1 + 912) = 1; /*0x27c23e*/
  v26 = (float)((float)v25 / 32767.0) * 1000.0; /*0x27c253*/
  *(_DWORD *)(a1 + 896) = (int)v26; /*0x27c25b*/
  *(_DWORD *)(a1 + 892) = (int)v26 + 1; /*0x27c263*/
  v27 = rand(); /*0x27c269*/
  *(_DWORD *)(a1 + 924) = 1; /*0x27c26f*/
  v28 = (float)((float)v27 / 32767.0) * 1000.0; /*0x27c284*/
  *(_DWORD *)(a1 + 908) = (int)v28; /*0x27c28c*/
  *(_DWORD *)(a1 + 904) = (int)v28 + 1; /*0x27c294*/
  v29 = rand(); /*0x27c29a*/
  *(_BYTE *)(a1 + 944) = 0; /*0x27c2a0*/
  *(_DWORD *)(a1 + 948) = 0; /*0x27c2a7*/
  v30 = (float)((float)v29 / 32767.0) * 1000.0; /*0x27c2c1*/
  *(_DWORD *)(a1 + 920) = (int)v30; /*0x27c2ce*/
  result = (unsigned int)((int)v30 + 1); /*0x27c2d4*/
  *(_DWORD *)(a1 + 916) = result; /*0x27c2d6*/
  return result; /*0x27c2dc*/
}

// [34/51] Address: 0x27c2f0
// Method: GameManager::checkUsedIcons
// Hidden C++ exception states: #wind=16
char __fastcall GameManager_checkUsedIcons(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  float v7; // xmm0_4
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // ebx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm0_4
  signed int v14; // ebx
  __int64 v15; // rcx
  float v16; // xmm0_4
  signed int v17; // ebx
  __int64 v18; // rcx
  float v19; // xmm0_4
  signed int v20; // ebx
  __int64 v21; // rcx
  float v22; // xmm0_4
  signed int v23; // ebx
  __int64 v24; // rcx
  float v25; // xmm0_4
  signed int v26; // ebx
  __int64 v27; // rcx
  float v28; // xmm0_4
  __int64 v29; // rcx
  float v30; // xmm0_4
  signed int v31; // ebx
  __int64 v32; // rcx
  float v33; // xmm0_4
  signed int v34; // ebx
  __int64 v35; // rcx
  float v36; // xmm0_4
  signed int v37; // ebx
  __int64 v38; // rcx
  float v39; // xmm0_4
  signed int v40; // ebx
  __int64 v41; // rcx
  float v42; // xmm0_4
  signed int v43; // ebx
  __int64 v44; // rcx
  float v45; // xmm0_4
  __int64 v46; // rcx
  char result; // al
  void *v48; // [rsp+50h] [rbp+8h]
  void *v49; // [rsp+50h] [rbp+8h]
  void *v50; // [rsp+50h] [rbp+8h]
  void *v51; // [rsp+50h] [rbp+8h]
  void *v52; // [rsp+50h] [rbp+8h]
  void *v53; // [rsp+50h] [rbp+8h]
  void *v54; // [rsp+50h] [rbp+8h]
  void *v55; // [rsp+50h] [rbp+8h]
  void *v56; // [rsp+50h] [rbp+8h]
  void *v57; // [rsp+50h] [rbp+8h]
  void *v58; // [rsp+50h] [rbp+8h]
  void *v59; // [rsp+50h] [rbp+8h]
  void *v60; // [rsp+50h] [rbp+8h]
  void *v61; // [rsp+50h] [rbp+8h]
  void *v62; // [rsp+50h] [rbp+8h]
  void *v63; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 844) - *(_DWORD *)(a1 + 848); /*0x27c30d*/
  v3 = qword_905FD0; /*0x27c313*/
  if ( !qword_905FD0 ) /*0x27c31d*/
  {
    v48 = operator new(0x6E8u); /*0x27c329*/
    qword_905FD0 = sub_2723A0(v48); /*0x27c337*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c348*/
    v3 = qword_905FD0; /*0x27c34b*/
  }
  if ( !(unsigned __int8)sub_274130(v3, v2, 2) ) /*0x27c35a*/
  {
    *(_DWORD *)(a1 + 852) = 0; /*0x27c373*/
    v4 = (int)(float)((float)((float)rand() / 32767.0) * 1000.0); /*0x27c392*/
    *(_DWORD *)(a1 + 848) = v4; /*0x27c396*/
    *(_DWORD *)(a1 + 844) = v4; /*0x27c39c*/
  }
  v5 = *(_DWORD *)(a1 + 856) - *(_DWORD *)(a1 + 860); /*0x27c3a8*/
  v6 = qword_905FD0; /*0x27c3ae*/
  if ( !qword_905FD0 ) /*0x27c3b8*/
  {
    v49 = operator new(0x6E8u); /*0x27c3c4*/
    qword_905FD0 = sub_2723A0(v49); /*0x27c3d2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c3e3*/
    v6 = qword_905FD0; /*0x27c3e6*/
  }
  if ( !(unsigned __int8)sub_274130(v6, v5, 3) ) /*0x27c3f5*/
  {
    *(_DWORD *)(a1 + 864) = 3; /*0x27c3fe*/
    v7 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c419*/
    *(_DWORD *)(a1 + 860) = (int)v7; /*0x27c421*/
    *(_DWORD *)(a1 + 856) = (int)v7 + 3; /*0x27c42a*/
  }
  v8 = *(_DWORD *)(a1 + 868) - *(_DWORD *)(a1 + 872); /*0x27c436*/
  v9 = qword_905FD0; /*0x27c43c*/
  if ( !qword_905FD0 ) /*0x27c446*/
  {
    v50 = operator new(0x6E8u); /*0x27c452*/
    qword_905FD0 = sub_2723A0(v50); /*0x27c460*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c471*/
    v9 = qword_905FD0; /*0x27c474*/
  }
  if ( !(unsigned __int8)sub_274130(v9, v8, 3) ) /*0x27c483*/
  {
    v10 = *(_DWORD *)(a1 + 856) - *(_DWORD *)(a1 + 860); /*0x27c492*/
    *(_DWORD *)(a1 + 876) = v10; /*0x27c498*/
    v11 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c4af*/
    *(_DWORD *)(a1 + 872) = (int)v11; /*0x27c4b7*/
    *(_DWORD *)(a1 + 868) = v10 + (int)v11; /*0x27c4bf*/
  }
  v12 = qword_905FD0; /*0x27c4c5*/
  if ( !qword_905FD0 ) /*0x27c4cf*/
  {
    v51 = operator new(0x6E8u); /*0x27c4db*/
    qword_905FD0 = sub_2723A0(v51); /*0x27c4e9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c4fa*/
    v12 = qword_905FD0; /*0x27c4fc*/
  }
  if ( !GameManager_isIconUnlocked(v12, *(_DWORD *)(a1 + 748) - *(_DWORD *)(a1 + 752), 0) ) /*0x27c512*/
  {
    *(_DWORD *)(a1 + 756) = 1; /*0x27c51b*/
    v13 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c536*/
    *(_DWORD *)(a1 + 752) = (int)v13; /*0x27c53e*/
    *(_DWORD *)(a1 + 748) = (int)v13 + 1; /*0x27c546*/
  }
  v14 = *(_DWORD *)(a1 + 760) - *(_DWORD *)(a1 + 764); /*0x27c552*/
  v15 = qword_905FD0; /*0x27c558*/
  if ( !qword_905FD0 ) /*0x27c562*/
  {
    v52 = operator new(0x6E8u); /*0x27c56e*/
    qword_905FD0 = sub_2723A0(v52); /*0x27c57c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c58d*/
    v15 = qword_905FD0; /*0x27c590*/
  }
  if ( !GameManager_isIconUnlocked(v15, v14, 1u) ) /*0x27c59f*/
  {
    *(_DWORD *)(a1 + 768) = 1; /*0x27c5a8*/
    v16 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c5c3*/
    *(_DWORD *)(a1 + 764) = (int)v16; /*0x27c5cb*/
    *(_DWORD *)(a1 + 760) = (int)v16 + 1; /*0x27c5d3*/
  }
  v17 = *(_DWORD *)(a1 + 916) - *(_DWORD *)(a1 + 920); /*0x27c5df*/
  v18 = qword_905FD0; /*0x27c5e5*/
  if ( !qword_905FD0 ) /*0x27c5ef*/
  {
    v53 = operator new(0x6E8u); /*0x27c5fb*/
    qword_905FD0 = sub_2723A0(v53); /*0x27c609*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c61a*/
    v18 = qword_905FD0; /*0x27c61d*/
  }
  if ( !GameManager_isIconUnlocked(v18, v17, 8u) ) /*0x27c62c*/
  {
    *(_DWORD *)(a1 + 924) = 1; /*0x27c635*/
    v19 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c650*/
    *(_DWORD *)(a1 + 920) = (int)v19; /*0x27c658*/
    *(_DWORD *)(a1 + 916) = (int)v19 + 1; /*0x27c660*/
  }
  v20 = *(_DWORD *)(a1 + 772) - *(_DWORD *)(a1 + 776); /*0x27c66c*/
  v21 = qword_905FD0; /*0x27c672*/
  if ( !qword_905FD0 ) /*0x27c67c*/
  {
    v54 = operator new(0x6E8u); /*0x27c688*/
    qword_905FD0 = sub_2723A0(v54); /*0x27c696*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c6a7*/
    v21 = qword_905FD0; /*0x27c6aa*/
  }
  if ( !GameManager_isIconUnlocked(v21, v20, 2u) ) /*0x27c6b9*/
  {
    *(_DWORD *)(a1 + 780) = 1; /*0x27c6c2*/
    v22 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c6dd*/
    *(_DWORD *)(a1 + 776) = (int)v22; /*0x27c6e5*/
    *(_DWORD *)(a1 + 772) = (int)v22 + 1; /*0x27c6ed*/
  }
  v23 = *(_DWORD *)(a1 + 784) - *(_DWORD *)(a1 + 788); /*0x27c6f9*/
  v24 = qword_905FD0; /*0x27c6ff*/
  if ( !qword_905FD0 ) /*0x27c709*/
  {
    v55 = operator new(0x6E8u); /*0x27c715*/
    qword_905FD0 = sub_2723A0(v55); /*0x27c723*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c734*/
    v24 = qword_905FD0; /*0x27c737*/
  }
  if ( !GameManager_isIconUnlocked(v24, v23, 3u) ) /*0x27c746*/
  {
    *(_DWORD *)(a1 + 792) = 1; /*0x27c74f*/
    v25 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c76a*/
    *(_DWORD *)(a1 + 788) = (int)v25; /*0x27c772*/
    *(_DWORD *)(a1 + 784) = (int)v25 + 1; /*0x27c77a*/
  }
  v26 = *(_DWORD *)(a1 + 796) - *(_DWORD *)(a1 + 800); /*0x27c786*/
  v27 = qword_905FD0; /*0x27c78c*/
  if ( !qword_905FD0 ) /*0x27c796*/
  {
    v56 = operator new(0x6E8u); /*0x27c7a2*/
    qword_905FD0 = sub_2723A0(v56); /*0x27c7b0*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c7c1*/
    v27 = qword_905FD0; /*0x27c7c4*/
  }
  if ( !GameManager_isIconUnlocked(v27, v26, 4u) ) /*0x27c7d3*/
  {
    *(_DWORD *)(a1 + 804) = 1; /*0x27c7dc*/
    v28 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c7f7*/
    *(_DWORD *)(a1 + 800) = (int)v28; /*0x27c7ff*/
    *(_DWORD *)(a1 + 796) = (int)v28 + 1; /*0x27c807*/
  }
  v29 = qword_905FD0; /*0x27c80d*/
  if ( !qword_905FD0 ) /*0x27c817*/
  {
    v57 = operator new(0x6E8u); /*0x27c823*/
    qword_905FD0 = sub_2723A0(v57); /*0x27c831*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c842*/
    v29 = qword_905FD0; /*0x27c844*/
  }
  if ( !GameManager_isIconUnlocked(v29, *(_DWORD *)(a1 + 808) - *(_DWORD *)(a1 + 812), 5u) ) /*0x27c85d*/
  {
    *(_DWORD *)(a1 + 816) = 1; /*0x27c866*/
    v30 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c881*/
    *(_DWORD *)(a1 + 812) = (int)v30; /*0x27c889*/
    *(_DWORD *)(a1 + 808) = (int)v30 + 1; /*0x27c891*/
  }
  v31 = *(_DWORD *)(a1 + 820) - *(_DWORD *)(a1 + 824); /*0x27c89d*/
  v32 = qword_905FD0; /*0x27c8a3*/
  if ( !qword_905FD0 ) /*0x27c8ad*/
  {
    v58 = operator new(0x6E8u); /*0x27c8b9*/
    qword_905FD0 = sub_2723A0(v58); /*0x27c8c7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c8d8*/
    v32 = qword_905FD0; /*0x27c8db*/
  }
  if ( !GameManager_isIconUnlocked(v32, v31, 6u) ) /*0x27c8ea*/
  {
    *(_DWORD *)(a1 + 828) = 1; /*0x27c8f3*/
    v33 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c90e*/
    *(_DWORD *)(a1 + 824) = (int)v33; /*0x27c916*/
    *(_DWORD *)(a1 + 820) = (int)v33 + 1; /*0x27c91e*/
  }
  v34 = *(_DWORD *)(a1 + 832) - *(_DWORD *)(a1 + 836); /*0x27c92a*/
  v35 = qword_905FD0; /*0x27c930*/
  if ( !qword_905FD0 ) /*0x27c93a*/
  {
    v59 = operator new(0x6E8u); /*0x27c946*/
    qword_905FD0 = sub_2723A0(v59); /*0x27c954*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c965*/
    v35 = qword_905FD0; /*0x27c968*/
  }
  if ( !GameManager_isIconUnlocked(v35, v34, 7u) ) /*0x27c977*/
  {
    *(_DWORD *)(a1 + 840) = 1; /*0x27c980*/
    v36 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27c99b*/
    *(_DWORD *)(a1 + 836) = (int)v36; /*0x27c9a3*/
    *(_DWORD *)(a1 + 832) = (int)v36 + 1; /*0x27c9ab*/
  }
  v37 = *(_DWORD *)(a1 + 880) - *(_DWORD *)(a1 + 884); /*0x27c9b7*/
  v38 = qword_905FD0; /*0x27c9bd*/
  if ( !qword_905FD0 ) /*0x27c9c7*/
  {
    v60 = operator new(0x6E8u); /*0x27c9d3*/
    qword_905FD0 = sub_2723A0(v60); /*0x27c9e1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27c9f2*/
    v38 = qword_905FD0; /*0x27c9f5*/
  }
  if ( !GameManager_isIconUnlocked(v38, v37, 0x63u) ) /*0x27ca04*/
  {
    *(_DWORD *)(a1 + 888) = 1; /*0x27ca0d*/
    v39 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27ca28*/
    *(_DWORD *)(a1 + 884) = (int)v39; /*0x27ca30*/
    *(_DWORD *)(a1 + 880) = (int)v39 + 1; /*0x27ca38*/
  }
  v40 = *(_DWORD *)(a1 + 892) - *(_DWORD *)(a1 + 896); /*0x27ca44*/
  v41 = qword_905FD0; /*0x27ca4a*/
  if ( !qword_905FD0 ) /*0x27ca54*/
  {
    v61 = operator new(0x6E8u); /*0x27ca60*/
    qword_905FD0 = sub_2723A0(v61); /*0x27ca6e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27ca7f*/
    v41 = qword_905FD0; /*0x27ca82*/
  }
  if ( !GameManager_isIconUnlocked(v41, v40, 0x65u) ) /*0x27ca91*/
  {
    *(_DWORD *)(a1 + 900) = 1; /*0x27ca9a*/
    v42 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27cab5*/
    *(_DWORD *)(a1 + 896) = (int)v42; /*0x27cabd*/
    *(_DWORD *)(a1 + 892) = (int)v42 + 1; /*0x27cac5*/
  }
  v43 = *(_DWORD *)(a1 + 904) - *(_DWORD *)(a1 + 908); /*0x27cad1*/
  v44 = qword_905FD0; /*0x27cad7*/
  if ( !qword_905FD0 ) /*0x27cae1*/
  {
    v62 = operator new(0x6E8u); /*0x27caed*/
    qword_905FD0 = sub_2723A0(v62); /*0x27cafb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27cb0c*/
    v44 = qword_905FD0; /*0x27cb0f*/
  }
  if ( !GameManager_isIconUnlocked(v44, v43, 0x62u) ) /*0x27cb1e*/
  {
    *(_DWORD *)(a1 + 912) = 1; /*0x27cb27*/
    v45 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27cb42*/
    *(_DWORD *)(a1 + 908) = (int)v45; /*0x27cb4a*/
    *(_DWORD *)(a1 + 904) = (int)v45 + 1; /*0x27cb52*/
  }
  v46 = qword_905FD0; /*0x27cb58*/
  if ( !qword_905FD0 ) /*0x27cb62*/
  {
    v63 = operator new(0x6E8u); /*0x27cb6e*/
    qword_905FD0 = sub_2723A0(v63); /*0x27cb7c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27cb8d*/
    v46 = qword_905FD0; /*0x27cb90*/
  }
  result = GameManager_isIconUnlocked(v46, 2, 0x63u); /*0x27cba2*/
  if ( !result ) /*0x27cba9*/
    *(_BYTE *)(a1 + 944) = 0; /*0x27cbab*/
  return result; /*0x27cbb1*/
}

// [36/51] Address: 0x27e010
// Method: GameManager::generateSecretNumber
// Hidden C++ exception states: #wind=1
__int64 GameManager_generateSecretNumber()
{
  int v0; // edi
  int i; // ebx
  float v2; // xmm0_4
  float v3; // xmm6_4
  __int64 v4; // rbx
  float v5; // xmm0_4
  __int64 result; // rax
  void *v7; // [rsp+80h] [rbp+8h]

  v0 = 0; /*0x27e037*/
  for ( i = 0; i < 7; ++i ) /*0x27e039*/
  {
    v2 = (float)rand(); /*0x27e06a*/
    v3 = roundf((float)((float)(v2 / 32767.0) * 8.0) + 1.0); /*0x27e081*/
    v0 += (int)(float)(v3 * powf(10.0, (float)i)); /*0x27e09c*/
  }
  v4 = qword_905FD0; /*0x27e0a5*/
  if ( !qword_905FD0 ) /*0x27e0af*/
  {
    v7 = operator new(0x6E8u); /*0x27e0bb*/
    qword_905FD0 = sub_2723A0(v7); /*0x27e0cc*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x27e0dd*/
    v4 = qword_905FD0; /*0x27e0df*/
  }
  v5 = (float)((float)rand() / 32767.0) * 1000.0; /*0x27e0f7*/
  *(_DWORD *)(v4 + 940) = (int)v5; /*0x27e103*/
  result = (unsigned int)(v0 + (int)v5); /*0x27e109*/
  *(_DWORD *)(v4 + 936) = result; /*0x27e10b*/
  return result; /*0x27e111*/
}

// [37/51] Address: 0x27e140
// Method: GameManager::saveDPadLayout
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameManager_saveDPadLayout(__int64 a1, int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  bool GameVariable; // al
  int v9; // edi
  int v10; // edi
  _BYTE *v11; // rax
  size_t v12; // r8
  void *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // edi
  int v22; // edi
  __int128 v24; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v25[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v26[32]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[528]; // [rsp+60h] [rbp-A0h] BYREF

  fmt::BasicWriter<char>::BasicWriter<char>(v27); /*0x27e17e*/
  if ( a3 ) /*0x27e18c*/
  {
    v14 = GameManager_dpadConfigToString(v6, v26, a1 + 1348); /*0x27e2bd*/
    v24 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v25, v14); /*0x27e2d4*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e2e3*/
    sub_3C310(v26); /*0x27e2ef*/
    *(_QWORD *)&v24 = &unk_74CF98; /*0x27e2fb*/
    *((_QWORD *)&v24 + 1) = 0; /*0x27e300*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e313*/
    v16 = GameManager_dpadConfigToString(v15, v26, a1 + 1388); /*0x27e325*/
    v24 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v25, v16); /*0x27e33c*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e34b*/
    sub_3C310(v26); /*0x27e357*/
    v24 = (unsigned __int64)&unk_74CF98; /*0x27e35c*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e374*/
    v18 = GameManager_dpadConfigToString(v17, v26, a1 + 1428); /*0x27e386*/
    v24 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v25, v18); /*0x27e39d*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e3ac*/
    sub_3C310(v26); /*0x27e3b8*/
    v24 = (unsigned __int64)&unk_74CF98; /*0x27e3bd*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e3d5*/
    v20 = GameManager_dpadConfigToString(v19, v26, a1 + 1468); /*0x27e3e7*/
    v24 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v25, v20); /*0x27e3fe*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e40d*/
    sub_3C310(v26); /*0x27e419*/
    v21 = a2 - 1; /*0x27e41e*/
    if ( !v21 ) /*0x27e421*/
    {
      v11 = (_BYTE *)fmt::BasicWriter<char>::c_str(v27); /*0x27e47d*/
      v12 = -1; /*0x27e483*/
      do /*0x27e493*/
        ++v12; /*0x27e490*/
      while ( v11[v12] ); /*0x27e493*/
      v13 = (void *)(a1 + 1608); /*0x27e49a*/
      goto LABEL_26; /*0x27e49a*/
    }
    v22 = v21 - 1; /*0x27e423*/
    if ( !v22 ) /*0x27e426*/
    {
      v11 = (_BYTE *)fmt::BasicWriter<char>::c_str(v27); /*0x27e458*/
      v12 = -1; /*0x27e45e*/
      do /*0x27e468*/
        ++v12; /*0x27e465*/
      while ( v11[v12] ); /*0x27e468*/
      v13 = (void *)(a1 + 1640); /*0x27e46f*/
      goto LABEL_26; /*0x27e476*/
    }
    if ( v22 == 1 ) /*0x27e42b*/
    {
      v11 = (_BYTE *)fmt::BasicWriter<char>::c_str(v27); /*0x27e432*/
      v12 = -1; /*0x27e438*/
      do /*0x27e443*/
        ++v12; /*0x27e440*/
      while ( v11[v12] ); /*0x27e443*/
      v13 = (void *)(a1 + 1672); /*0x27e44a*/
      goto LABEL_26; /*0x27e451*/
    }
  }
  else
  {
    v7 = GameManager_dpadConfigToString(v6, v26, a1 + 1308); /*0x27e199*/
    v24 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v25, v7); /*0x27e1b0*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e1bf*/
    sub_3C310(v26); /*0x27e1cb*/
    *(_QWORD *)&v24 = &unk_74CF98; /*0x27e1d7*/
    *((_QWORD *)&v24 + 1) = 0; /*0x27e1dc*/
    fmt::BasicWriter<char>::operator<<(v27, &v24); /*0x27e1ef*/
    GameVariable = GameManager_getGameVariable(a1, "0113"); /*0x27e1ff*/
    fmt::BasicWriter<char>::operator<<(v27, GameVariable); /*0x27e20c*/
    v9 = a2 - 1; /*0x27e212*/
    if ( !v9 ) /*0x27e215*/
    {
      v11 = (_BYTE *)fmt::BasicWriter<char>::c_str(v27); /*0x27e28b*/
      v12 = -1; /*0x27e291*/
      do /*0x27e2a3*/
        ++v12; /*0x27e2a0*/
      while ( v11[v12] ); /*0x27e2a3*/
      v13 = (void *)(a1 + 1512); /*0x27e2aa*/
      goto LABEL_26; /*0x27e2b1*/
    }
    v10 = v9 - 1; /*0x27e217*/
    if ( !v10 ) /*0x27e21a*/
    {
      v11 = (_BYTE *)fmt::BasicWriter<char>::c_str(v27); /*0x27e25b*/
      v12 = -1; /*0x27e261*/
      do /*0x27e273*/
        ++v12; /*0x27e270*/
      while ( v11[v12] ); /*0x27e273*/
      v13 = (void *)(a1 + 1544); /*0x27e27a*/
      goto LABEL_26; /*0x27e281*/
    }
    if ( v10 == 1 ) /*0x27e21f*/
    {
      v11 = (_BYTE *)fmt::BasicWriter<char>::c_str(v27); /*0x27e22a*/
      v12 = -1; /*0x27e230*/
      do /*0x27e243*/
        ++v12; /*0x27e240*/
      while ( v11[v12] ); /*0x27e243*/
      v13 = (void *)(a1 + 1576); /*0x27e24a*/
LABEL_26:
      sub_3F5A0(v13, v11, v12); /*0x27e4a1*/
    }
  }
  return fmt::BasicWriter<char>::~BasicWriter<char>(v27); /*0x27e4b5*/
}

// [38/51] Address: 0x27ea40
// Method: GameManager::dpadConfigToString
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GameManager_dpadConfigToString(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  void *v8; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+28h] [rbp-D8h]
  _BYTE v10[528]; // [rsp+40h] [rbp-C0h] BYREF

  v8 = a2; /*0x27ea74*/
  fmt::BasicWriter<char>::BasicWriter<char>(v10); /*0x27ea80*/
  fmt::BasicWriter<char>::operator<<(v10, *a3); /*0x27ea8e*/
  v8 = &unk_709CE8; /*0x27ea9b*/
  v9 = 0; /*0x27eaa0*/
  fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27eaaf*/
  fmt::BasicWriter<char>::operator<<(v10, a3[1]); /*0x27eabd*/
  v8 = &unk_709CE8; /*0x27eac3*/
  v9 = 0; /*0x27eac8*/
  fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27ead7*/
  fmt::BasicWriter<char>::operator<<(v10); /*0x27eaea*/
  v8 = &unk_709CE8; /*0x27eaf0*/
  v9 = 0; /*0x27eaf5*/
  fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27eb04*/
  fmt::BasicWriter<char>::operator<<(v10, a3[4]); /*0x27eb12*/
  v8 = &unk_709CE8; /*0x27eb18*/
  v9 = 0; /*0x27eb1d*/
  fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27eb2c*/
  fmt::BasicWriter<char>::operator<<(v10); /*0x27eb3f*/
  v8 = &unk_709CE8; /*0x27eb45*/
  v9 = 0; /*0x27eb4a*/
  fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27eb59*/
  fmt::BasicWriter<char>::operator<<(v10); /*0x27eb6c*/
  if ( !*((_BYTE *)a3 + 36) ) /*0x27eb72*/
  {
    v8 = &unk_709CE8; /*0x27eb7c*/
    v9 = 0; /*0x27eb81*/
    fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27eb90*/
    fmt::BasicWriter<char>::operator<<(v10, *((unsigned __int8 *)a3 + 24)); /*0x27eb9f*/
    v8 = &unk_709CE8; /*0x27eba5*/
    v9 = 0; /*0x27ebaa*/
    fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27ebb9*/
    fmt::BasicWriter<char>::operator<<(v10); /*0x27ebcc*/
    v8 = &unk_709CE8; /*0x27ebd2*/
    v9 = 0; /*0x27ebd7*/
    fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27ebe6*/
    fmt::BasicWriter<char>::operator<<(v10); /*0x27ebf9*/
    v8 = &unk_709CE8; /*0x27ebff*/
    v9 = 0; /*0x27ec04*/
    fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27ec13*/
    fmt::BasicWriter<char>::operator<<(v10, *((unsigned __int8 *)a3 + 25)); /*0x27ec22*/
    v8 = &unk_709CE8; /*0x27ec28*/
    v9 = 0; /*0x27ec2d*/
    fmt::BasicWriter<char>::operator<<(v10, &v8); /*0x27ec3c*/
    fmt::BasicWriter<char>::operator<<(v10, *((unsigned __int8 *)a3 + 38)); /*0x27ec4b*/
  }
  v5 = fmt::BasicWriter<char>::c_str(v10); /*0x27ec56*/
  *(_OWORD *)a2 = 0; /*0x27ec5f*/
  a2[2] = 0; /*0x27ec62*/
  a2[3] = 0; /*0x27ec66*/
  v6 = -1; /*0x27ec6a*/
  do /*0x27ec74*/
    ++v6; /*0x27ec71*/
  while ( *(_BYTE *)(v5 + v6) ); /*0x27ec74*/
  sub_3C230(a2); /*0x27ec81*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v10); /*0x27ec8c*/
  return a2; /*0x27ec95*/
}

// [41/51] Address: 0x282290
// Method: GameManager::encodeDataTo
// Hidden C++ exception states: #wind=9
void __fastcall GameManager_encodeDataTo(__int64 a1, DS_Dictionary *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r14d
  __int64 *v18; // rbx
  __int64 **v19; // rax
  __int64 *i; // rax
  __int64 *j; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r8
  void *v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // r8
  void *v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40; // r8
  void *v41; // rcx
  _QWORD *v42; // rdx
  __int64 v43; // r8
  void *v44; // rcx
  _QWORD *v45; // rdx
  __int64 v46; // r8
  void *v47; // rcx
  _QWORD *v48; // rdx
  __int64 v49; // r8
  _QWORD *v50; // rdx
  void *v51; // rcx
  void *v52; // [rsp+30h] [rbp-30h]
  void *v53; // [rsp+30h] [rbp-30h]
  void *v54; // [rsp+30h] [rbp-30h]
  void *v55; // [rsp+30h] [rbp-30h]
  void *v56; // [rsp+30h] [rbp-30h]
  void *v57; // [rsp+30h] [rbp-30h]
  void *v58; // [rsp+30h] [rbp-30h]
  void *Block[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v60; // [rsp+48h] [rbp-18h]
  unsigned __int64 v61; // [rsp+50h] [rbp-10h]

  v4 = qword_905FD0; /*0x2822b7*/
  if ( !qword_905FD0 ) /*0x2822c1*/
  {
    v52 = operator new(0x6E8u); /*0x2822cd*/
    qword_905FD0 = sub_2723A0(v52); /*0x2822da*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2822eb*/
    v4 = qword_905FD0; /*0x2822ed*/
  }
  if ( *(_QWORD *)(v4 + 560) ) /*0x2822f4*/
    sub_513570(); /*0x282300*/
  DS_Dictionary::setDictForKey(a2, "valueKeeper", *(struct cocos2d::CCDictionary **)(a1 + 432)); /*0x282316*/
  if ( !*(_BYTE *)(a1 + 448) ) /*0x28231c*/
    DS_Dictionary::setDictForKey(a2, "localKeeper", *(struct cocos2d::CCDictionary **)(a1 + 440)); /*0x282336*/
  DS_Dictionary::setDictForKey(a2, "unlockValueKeeper", *(struct cocos2d::CCDictionary **)(a1 + 456)); /*0x28234d*/
  DS_Dictionary::setDictForKey(a2, "customObjectDict", *(struct cocos2d::CCDictionary **)(a1 + 464)); /*0x282364*/
  v5 = qword_905F60; /*0x28236a*/
  if ( !qword_905F60 ) /*0x282374*/
  {
    v53 = operator new(0x8A8u); /*0x282380*/
    qword_905F60 = sub_5AE20(v53); /*0x28238d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x28239e*/
    v5 = qword_905F60; /*0x2823a0*/
  }
  DS_Dictionary::setFloatForKey(a2, "bgVolume", *(float *)(v5 + 512)); /*0x2823b9*/
  v6 = qword_905F60; /*0x2823bf*/
  if ( !qword_905F60 ) /*0x2823c9*/
  {
    v54 = operator new(0x8A8u); /*0x2823d5*/
    qword_905F60 = sub_5AE20(v54); /*0x2823e2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x2823f3*/
    v6 = qword_905F60; /*0x2823f5*/
  }
  DS_Dictionary::setFloatForKey(a2, "sfxVolume", *(float *)(v6 + 516)); /*0x28240e*/
  v7 = qword_905F60; /*0x282414*/
  if ( !qword_905F60 ) /*0x28241e*/
  {
    v55 = operator new(0x8A8u); /*0x28242a*/
    qword_905F60 = sub_5AE20(v55); /*0x282437*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x282448*/
    v7 = qword_905F60; /*0x28244a*/
  }
  DS_Dictionary::setIntegerForKey(a2, "timeOffset", *(_DWORD *)(v7 + 620)); /*0x282462*/
  DS_Dictionary::setStringForKey(a2, "playerUDID", a1 + 624); /*0x282479*/
  DS_Dictionary::setStringForKey(a2, "playerName", a1 + 656); /*0x282490*/
  DS_Dictionary::setIntegerForKey(a2, "playerUserID", *(_DWORD *)(a1 + 692) - *(_DWORD *)(a1 + 696)); /*0x2824ae*/
  DS_Dictionary::setIntegerForKey(a2, "playerFrame", *(_DWORD *)(a1 + 748) - *(_DWORD *)(a1 + 752)); /*0x2824cc*/
  DS_Dictionary::setIntegerForKey(a2, "playerShip", *(_DWORD *)(a1 + 760) - *(_DWORD *)(a1 + 764)); /*0x2824ea*/
  DS_Dictionary::setIntegerForKey(a2, "playerBall", *(_DWORD *)(a1 + 772) - *(_DWORD *)(a1 + 776)); /*0x282508*/
  DS_Dictionary::setIntegerForKey(a2, "playerBird", *(_DWORD *)(a1 + 784) - *(_DWORD *)(a1 + 788)); /*0x282526*/
  DS_Dictionary::setIntegerForKey(a2, "playerDart", *(_DWORD *)(a1 + 796) - *(_DWORD *)(a1 + 800)); /*0x282544*/
  DS_Dictionary::setIntegerForKey(a2, "playerRobot", *(_DWORD *)(a1 + 808) - *(_DWORD *)(a1 + 812)); /*0x282562*/
  DS_Dictionary::setIntegerForKey(a2, "playerSpider", *(_DWORD *)(a1 + 820) - *(_DWORD *)(a1 + 824)); /*0x282580*/
  DS_Dictionary::setIntegerForKey(a2, "playerSwing", *(_DWORD *)(a1 + 832) - *(_DWORD *)(a1 + 836)); /*0x28259e*/
  DS_Dictionary::setIntegerForKey(a2, "playerColor", *(_DWORD *)(a1 + 844) - *(_DWORD *)(a1 + 848)); /*0x2825bc*/
  DS_Dictionary::setIntegerForKey(a2, "playerColor2", *(_DWORD *)(a1 + 856) - *(_DWORD *)(a1 + 860)); /*0x2825da*/
  DS_Dictionary::setIntegerForKey(a2, "playerColor3", *(_DWORD *)(a1 + 868) - *(_DWORD *)(a1 + 872)); /*0x2825f8*/
  DS_Dictionary::setIntegerForKey(a2, "playerStreak", *(_DWORD *)(a1 + 880) - *(_DWORD *)(a1 + 884)); /*0x282616*/
  DS_Dictionary::setIntegerForKey(a2, "playerShipStreak", *(_DWORD *)(a1 + 892) - *(_DWORD *)(a1 + 896)); /*0x282634*/
  DS_Dictionary::setIntegerForKey(a2, "playerDeathEffect", *(_DWORD *)(a1 + 904) - *(_DWORD *)(a1 + 908)); /*0x282652*/
  DS_Dictionary::setIntegerForKey(a2, "playerJetpack", *(_DWORD *)(a1 + 916) - *(_DWORD *)(a1 + 920)); /*0x282670*/
  DS_Dictionary::setIntegerForKey(a2, "playerIconType", *(_DWORD *)(a1 + 948)); /*0x282687*/
  DS_Dictionary::setBoolForKey(a2, "playerGlow", *(_BYTE *)(a1 + 944)); /*0x28269f*/
  DS_Dictionary::setIntegerForKey(a2, "secretNumber", *(_DWORD *)(a1 + 936) - *(_DWORD *)(a1 + 940)); /*0x2826bd*/
  DS_Dictionary::setIntegerForKey(a2, "hasRP", *(_DWORD *)(a1 + 1064) - *(_DWORD *)(a1 + 1068)); /*0x2826db*/
  DS_Dictionary::setBoolForKey(a2, "hasDRP", *(_BYTE *)(a1 + 1076)); /*0x2826f3*/
  DS_Dictionary::setIntegerForKey(a2, "specialPermKey", *(_DWORD *)(a1 + 1080)); /*0x28270a*/
  v8 = AchievementManager_sharedState(); /*0x282710*/
  DS_Dictionary::setDictForKey(a2, "reportedAchievements", *(struct cocos2d::CCDictionary **)(v8 + 352)); /*0x282726*/
  v9 = *(_QWORD *)&qword_905FB0; /*0x28272c*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x282736*/
  {
    v56 = operator new(0x690u); /*0x282742*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v56); /*0x28274f*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x282760*/
    v9 = *(_QWORD *)&qword_905FB0; /*0x282762*/
  }
  GameLevelManager_encodeDataTo(v9, a2); /*0x28276c*/
  v10 = qword_905FE0; /*0x282771*/
  if ( !qword_905FE0 ) /*0x28277b*/
  {
    v57 = operator new(0x3E8u); /*0x282787*/
    qword_905FE0 = sub_2D2B40(v57); /*0x282794*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2827a5*/
    v10 = qword_905FE0; /*0x2827a7*/
  }
  GameStatsManager_encodeDataTo(v10, a2); /*0x2827b1*/
  v11 = qword_906070; /*0x2827b6*/
  if ( !qword_906070 ) /*0x2827c0*/
  {
    v58 = operator new(0x3D0u); /*0x2827cc*/
    qword_906070 = sub_47C350(v58); /*0x2827d9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x2827ea*/
    v11 = qword_906070; /*0x2827ec*/
  }
  sub_486780(v11, a2); /*0x2827f6*/
  v13 = GJAccountManager_sharedState(v12); /*0x282800*/
  DS_Dictionary::setStringForKey(a2, "GJA_001", v13 + 328); /*0x282814*/
  DS_Dictionary::setIntegerForKey(a2, "GJA_003", *(_DWORD *)(v13 + 360)); /*0x28282b*/
  DS_Dictionary::setStringForKey(a2, "GJA_005", v13 + 376); /*0x282842*/
  GJMultiplayerManager_sharedState(); /*0x282848*/
  v14 = sub_384880(); /*0x282852*/
  if ( a2 ) /*0x282858*/
  {
    DS_Dictionary::setIntegerForKey(a2, "GJKB_Version", 2); /*0x28286a*/
    v15 = sub_3878C0(v14, Block); /*0x282877*/
    DS_Dictionary::setStringForKey(a2, "GJKB_Binds", v15); /*0x28288a*/
    sub_3C310(Block); /*0x282895*/
  }
  v16 = sub_182B60(); /*0x28289a*/
  GJAccountSettingsLayer_closeAccInputNodes(v16, a2); /*0x2828a5*/
  DS_Dictionary::setBoolForKey(a2, "showSongMarkers", *(_BYTE *)(a1 + 953)); /*0x2828bc*/
  DS_Dictionary::setBoolForKey(a2, "showBPMMarkers", *(_BYTE *)(a1 + 954)); /*0x2828d4*/
  DS_Dictionary::setBoolForKey(a2, "recordGameplay", *(_BYTE *)(a1 + 955)); /*0x2828ec*/
  DS_Dictionary::setBoolForKey(a2, "showProgressBar", *(_BYTE *)(a1 + 956)); /*0x282904*/
  DS_Dictionary::setBoolForKey(a2, "performanceMode", *(_BYTE *)(a1 + 957)); /*0x28291c*/
  DS_Dictionary::setBoolForKey(a2, "clickedGarage", *(_BYTE *)(a1 + 959)); /*0x282934*/
  DS_Dictionary::setBoolForKey(a2, "clickedEditor", *(_BYTE *)(a1 + 960)); /*0x28294c*/
  DS_Dictionary::setBoolForKey(a2, "clickedName", *(_BYTE *)(a1 + 961)); /*0x282964*/
  DS_Dictionary::setBoolForKey(a2, "clickedPractice", *(_BYTE *)(a1 + 962)); /*0x28297c*/
  DS_Dictionary::setBoolForKey(a2, "showedEditorGuide", *(_BYTE *)(a1 + 963)); /*0x282994*/
  DS_Dictionary::setBoolForKey(a2, "showedRateDiffDialog", *(_BYTE *)(a1 + 964)); /*0x2829ac*/
  DS_Dictionary::setBoolForKey(a2, "showedRateStarDialog", *(_BYTE *)(a1 + 965)); /*0x2829c4*/
  DS_Dictionary::setBoolForKey(a2, "showedLowDetailDialog", *(_BYTE *)(a1 + 966)); /*0x2829dc*/
  DS_Dictionary::setIntegerForKey(a2, "bootups", *(_DWORD *)(a1 + 1052)); /*0x2829f3*/
  DS_Dictionary::setBoolForKey(a2, "hasRatedGame", *(_BYTE *)(a1 + 1056)); /*0x282a0b*/
  DS_Dictionary::setIntegerForKey(a2, "binaryVersion", 51); /*0x282a21*/
  DS_Dictionary::setIntegerForKey(a2, "resolution", *(_DWORD *)(a1 + 1088)); /*0x282a38*/
  DS_Dictionary::setIntegerForKey(a2, "texQuality", *(_DWORD *)(a1 + 1092)); /*0x282a4f*/
  DS_Dictionary::setFloatForKey(a2, "customFPSTarget", *(float *)(a1 + 1136)); /*0x282a67*/
  DS_Dictionary::setFloatForKey(a2, "scrollSensitivity", *(float *)(a1 + 1140)); /*0x282a7f*/
  v17 = 0; /*0x282a88*/
  v18 = **(__int64 ***)(a1 + 1144); /*0x282a92*/
  while ( !*((_BYTE *)v18 + 25) ) /*0x282a95*/
  {
    if ( !*((_BYTE *)v18 + 60) ) /*0x282aa0*/
    {
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_k", v17); /*0x282abd*/
      DS_Dictionary::setIntegerForKey(a2, (const char *)Block, *((_DWORD *)v18 + 7)); /*0x282acd*/
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_cx", v17); /*0x282ae6*/
      DS_Dictionary::setFloatForKey(a2, (const char *)Block, *((float *)v18 + 8)); /*0x282af7*/
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_cy", v17); /*0x282b10*/
      DS_Dictionary::setFloatForKey(a2, (const char *)Block, *((float *)v18 + 9)); /*0x282b21*/
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_w", v17); /*0x282b3a*/
      DS_Dictionary::setFloatForKey(a2, (const char *)Block, *((float *)v18 + 10)); /*0x282b4b*/
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_h", v17); /*0x282b64*/
      DS_Dictionary::setFloatForKey(a2, (const char *)Block, *((float *)v18 + 11)); /*0x282b75*/
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_s", v17); /*0x282b8e*/
      DS_Dictionary::setFloatForKey(a2, (const char *)Block, *((float *)v18 + 12)); /*0x282b9f*/
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_so", v17); /*0x282bb8*/
      DS_Dictionary::setFloatForKey(a2, (const char *)Block, *((float *)v18 + 13)); /*0x282bc9*/
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_v", v17); /*0x282be2*/
      DS_Dictionary::setIntegerForKey(a2, (const char *)Block, *((_DWORD *)v18 + 14)); /*0x282bf2*/
      ++v17; /*0x282bf8*/
    }
    v19 = (__int64 **)v18[2]; /*0x282bfb*/
    if ( *((_BYTE *)v19 + 25) ) /*0x282bff*/
    {
      for ( i = (__int64 *)v18[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] ) /*0x282c09*/
      {
        if ( v18 != (__int64 *)i[2] ) /*0x282c14*/
          break; /*0x282c14*/
        v18 = i; /*0x282c16*/
      }
      v18 = i; /*0x282c23*/
    }
    else
    {
      v18 = (__int64 *)v18[2]; /*0x282c28*/
      for ( j = *v19; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x282c2e*/
        v18 = j; /*0x282c34*/
    }
  }
  DS_Dictionary::setIntegerForKey(a2, "winStateCount", v17); /*0x282c57*/
  DS_Dictionary::setIntegerForKey(a2, "customMenuSongID", *(_DWORD *)(a1 + 1164)); /*0x282c6e*/
  DS_Dictionary::setIntegerForKey(a2, "customPracticeSongID", *(_DWORD *)(a1 + 1168)); /*0x282c85*/
  DS_Dictionary::setIntegerForKey(a2, "idNameSortMode", *(_DWORD *)(a1 + 1172)); /*0x282c9c*/
  DS_Dictionary::setIntegerForKey(a2, "newsLastReadID", *(_DWORD *)(a1 + 1176)); /*0x282cb3*/
  v23 = GameManager_dpadConfigToString(v22, Block, (unsigned int *)(a1 + 1308)); /*0x282cc4*/
  DS_Dictionary::setStringForKey(a2, "dpad01", v23); /*0x282cd7*/
  sub_3C310(Block); /*0x282ce2*/
  v25 = GameManager_dpadConfigToString(v24, Block, (unsigned int *)(a1 + 1348)); /*0x282cf2*/
  DS_Dictionary::setStringForKey(a2, "dpad02", v25); /*0x282d05*/
  sub_3C310(Block); /*0x282d10*/
  v27 = GameManager_dpadConfigToString(v26, Block, (unsigned int *)(a1 + 1388)); /*0x282d20*/
  DS_Dictionary::setStringForKey(a2, "dpad03", v27); /*0x282d33*/
  sub_3C310(Block); /*0x282d3e*/
  v29 = GameManager_dpadConfigToString(v28, Block, (unsigned int *)(a1 + 1428)); /*0x282d4e*/
  DS_Dictionary::setStringForKey(a2, "dpad04", v29); /*0x282d61*/
  sub_3C310(Block); /*0x282d6c*/
  v31 = GameManager_dpadConfigToString(v30, Block, (unsigned int *)(a1 + 1468)); /*0x282d7c*/
  DS_Dictionary::setStringForKey(a2, "dpad05", v31); /*0x282d8f*/
  sub_3C310(Block); /*0x282d9a*/
  v32 = (_QWORD *)(a1 + 1512); /*0x282d9f*/
  if ( *(_QWORD *)(a1 + 1536) > 0xFu ) /*0x282dab*/
    v32 = (_QWORD *)*v32; /*0x282dad*/
  *(_OWORD *)Block = 0; /*0x282db3*/
  v60 = 0; /*0x282db7*/
  v61 = 0; /*0x282dbb*/
  v33 = -1; /*0x282dbf*/
  v34 = -1; /*0x282dc6*/
  do /*0x282dd3*/
    ++v34; /*0x282dd0*/
  while ( *((_BYTE *)v32 + v34) ); /*0x282dd3*/
  sub_3C230(Block); /*0x282dde*/
  DS_Dictionary::setStringForKey(a2, "dpadLayout01", Block); /*0x282df2*/
  if ( v61 > 0xF ) /*0x282e01*/
  {
    v35 = Block[0]; /*0x282e06*/
    if ( v61 + 1 >= 0x1000 ) /*0x282e14*/
    {
      v35 = (void *)*((_QWORD *)Block[0] - 1); /*0x282e1a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v35 - 8) > 0x1F ) /*0x282e29*/
        invoke_watson(0, 0, 0, 0, 0); /*0x282e3a*/
    }
    j_j_free(v35); /*0x282e41*/
  }
  v36 = (_QWORD *)(a1 + 1544); /*0x282e46*/
  if ( *(_QWORD *)(a1 + 1568) > 0xFu ) /*0x282e52*/
    v36 = (_QWORD *)*v36; /*0x282e54*/
  *(_OWORD *)Block = 0; /*0x282e5a*/
  v60 = 0; /*0x282e5e*/
  v61 = 0; /*0x282e62*/
  v37 = -1; /*0x282e66*/
  do /*0x282e73*/
    ++v37; /*0x282e70*/
  while ( *((_BYTE *)v36 + v37) ); /*0x282e73*/
  sub_3C230(Block); /*0x282e7e*/
  DS_Dictionary::setStringForKey(a2, "dpadLayout02", Block); /*0x282e92*/
  if ( v61 > 0xF ) /*0x282ea1*/
  {
    v38 = Block[0]; /*0x282ea6*/
    if ( v61 + 1 >= 0x1000 ) /*0x282eb4*/
    {
      v38 = (void *)*((_QWORD *)Block[0] - 1); /*0x282eba*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v38 - 8) > 0x1F ) /*0x282ec9*/
        invoke_watson(0, 0, 0, 0, 0); /*0x282eda*/
    }
    j_j_free(v38); /*0x282ee1*/
  }
  v39 = (_QWORD *)(a1 + 1576); /*0x282ee6*/
  if ( *(_QWORD *)(a1 + 1600) > 0xFu ) /*0x282ef2*/
    v39 = (_QWORD *)*v39; /*0x282ef4*/
  *(_OWORD *)Block = 0; /*0x282efa*/
  v60 = 0; /*0x282efe*/
  v61 = 0; /*0x282f02*/
  v40 = -1; /*0x282f06*/
  do /*0x282f13*/
    ++v40; /*0x282f10*/
  while ( *((_BYTE *)v39 + v40) ); /*0x282f13*/
  sub_3C230(Block); /*0x282f1e*/
  DS_Dictionary::setStringForKey(a2, "dpadLayout03", Block); /*0x282f32*/
  if ( v61 > 0xF ) /*0x282f41*/
  {
    v41 = Block[0]; /*0x282f46*/
    if ( v61 + 1 >= 0x1000 ) /*0x282f54*/
    {
      v41 = (void *)*((_QWORD *)Block[0] - 1); /*0x282f5a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v41 - 8) > 0x1F ) /*0x282f69*/
        invoke_watson(0, 0, 0, 0, 0); /*0x282f7a*/
    }
    j_j_free(v41); /*0x282f81*/
  }
  v42 = (_QWORD *)(a1 + 1608); /*0x282f86*/
  if ( *(_QWORD *)(a1 + 1632) > 0xFu ) /*0x282f92*/
    v42 = (_QWORD *)*v42; /*0x282f94*/
  *(_OWORD *)Block = 0; /*0x282f9a*/
  v60 = 0; /*0x282f9e*/
  v61 = 0; /*0x282fa2*/
  v43 = -1; /*0x282fa6*/
  do /*0x282fb3*/
    ++v43; /*0x282fb0*/
  while ( *((_BYTE *)v42 + v43) ); /*0x282fb3*/
  sub_3C230(Block); /*0x282fbe*/
  DS_Dictionary::setStringForKey(a2, "dpadLayoutDual01", Block); /*0x282fd2*/
  if ( v61 > 0xF ) /*0x282fe1*/
  {
    v44 = Block[0]; /*0x282fe6*/
    if ( v61 + 1 >= 0x1000 ) /*0x282ff4*/
    {
      v44 = (void *)*((_QWORD *)Block[0] - 1); /*0x282ffa*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v44 - 8) > 0x1F ) /*0x283009*/
        invoke_watson(0, 0, 0, 0, 0); /*0x28301a*/
    }
    j_j_free(v44); /*0x283021*/
  }
  v45 = (_QWORD *)(a1 + 1640); /*0x283026*/
  if ( *(_QWORD *)(a1 + 1664) > 0xFu ) /*0x283032*/
    v45 = (_QWORD *)*v45; /*0x283034*/
  *(_OWORD *)Block = 0; /*0x28303a*/
  v60 = 0; /*0x28303e*/
  v61 = 0; /*0x283042*/
  v46 = -1; /*0x283046*/
  do /*0x283053*/
    ++v46; /*0x283050*/
  while ( *((_BYTE *)v45 + v46) ); /*0x283053*/
  sub_3C230(Block); /*0x28305e*/
  DS_Dictionary::setStringForKey(a2, "dpadLayoutDual02", Block); /*0x283072*/
  if ( v61 > 0xF ) /*0x283081*/
  {
    v47 = Block[0]; /*0x283086*/
    if ( v61 + 1 >= 0x1000 ) /*0x283094*/
    {
      v47 = (void *)*((_QWORD *)Block[0] - 1); /*0x28309a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v47 - 8) > 0x1F ) /*0x2830a9*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2830ba*/
    }
    j_j_free(v47); /*0x2830c1*/
  }
  v48 = (_QWORD *)(a1 + 1672); /*0x2830c6*/
  if ( *(_QWORD *)(a1 + 1696) > 0xFu ) /*0x2830d2*/
    v48 = (_QWORD *)*v48; /*0x2830d4*/
  *(_OWORD *)Block = 0; /*0x2830da*/
  v60 = 0; /*0x2830de*/
  v61 = 0; /*0x2830e2*/
  v49 = -1; /*0x2830e6*/
  do /*0x2830f3*/
    ++v49; /*0x2830f0*/
  while ( *((_BYTE *)v48 + v49) ); /*0x2830f3*/
  sub_3C230(Block); /*0x2830fe*/
  DS_Dictionary::setStringForKey(a2, "dpadLayoutDual03", Block); /*0x283112*/
  sub_3C310(Block); /*0x28311d*/
  v50 = (_QWORD *)(a1 + 1704); /*0x283122*/
  if ( *(_QWORD *)(a1 + 1728) > 0xFu ) /*0x28312e*/
    v50 = (_QWORD *)*v50; /*0x283130*/
  *(_OWORD *)Block = 0; /*0x283136*/
  v60 = 0; /*0x28313a*/
  v61 = 0; /*0x28313e*/
  do /*0x283145*/
    ++v33; /*0x283142*/
  while ( *((_BYTE *)v50 + v33) ); /*0x283145*/
  sub_3C230(Block); /*0x283152*/
  DS_Dictionary::setStringForKey(a2, "recentEmotes", Block); /*0x283166*/
  if ( v61 > 0xF ) /*0x283175*/
  {
    v51 = Block[0]; /*0x28317a*/
    if ( v61 + 1 >= 0x1000 ) /*0x283188*/
    {
      v51 = (void *)*((_QWORD *)Block[0] - 1); /*0x28318e*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v51 - 8) > 0x1F ) /*0x28319d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2831ae*/
    }
    j_j_free(v51); /*0x2831b5*/
  }
  DS_Dictionary::setFloatForKey(a2, "practiceOpacity", *(float *)(a1 + 1760)); /*0x2831cc*/
  DS_Dictionary::setFloatForKey(a2, "practicePosX", *(float *)(a1 + 1752)); /*0x2831e4*/
  DS_Dictionary::setFloatForKey(a2, "practicePosY", *(float *)(a1 + 1756)); /*0x2831fc*/
}

// [42/51] Address: 0x2832d0
// Method: GameManager::saveFinished
void __fastcall GameManager_saveFinished(__int64 a1, char a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  void *v6; // [rsp+30h] [rbp+8h]

  if ( a2 ) /*0x2832e4*/
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x2832ee*/
    {
      v6 = operator new(0x690u); /*0x2832fa*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x283308*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x283319*/
    }
    v3 = (__int64 *)(a1 + 360); /*0x28331b*/
    sub_220BF0(a1, v3); /*0x283325*/
  }
  else
  {
    v3 = (__int64 *)(a1 + 360); /*0x28332c*/
  }
  v4 = *v3; /*0x283333*/
  v5 = v3[1]; /*0x283336*/
  if ( *v3 != v5 ) /*0x28333d*/
  {
    do /*0x28334f*/
    {
      sub_3C310(v4); /*0x283343*/
      v4 += 40; /*0x283348*/
    }
    while ( v4 != v5 ); /*0x28334f*/
    v3[1] = *v3; /*0x283354*/
  }
}

// [43/51] Address: 0x283370
// Method: GameManager::update
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameManager_update(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCApplication *v3; // rax
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  char v8; // bl
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  void *v11; // [rsp+50h] [rbp+8h]

  v2 = qword_905F60; /*0x283385*/
  if ( !qword_905F60 ) /*0x28338f*/
  {
    v11 = operator new(0x8A8u); /*0x28339b*/
    qword_905F60 = sub_5AE20(v11); /*0x2833a9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x2833ba*/
    v2 = qword_905F60; /*0x2833bc*/
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2); /*0x2833c9*/
  if ( !*(_BYTE *)(a1 + 1132) ) /*0x2833cc*/
  {
    v3 = (cocos2d::CCApplication *)cocos2d::CCApplication::sharedApplication(); /*0x2833d5*/
    cocos2d::CCApplication::updateMouseControl(v3); /*0x2833de*/
  }
  result = sub_8A020(); /*0x2833e4*/
  v5 = result; /*0x2833e9*/
  if ( *(_BYTE *)(result + 384) ) /*0x2833ec*/
  {
    sub_8A130(result); /*0x2833fc*/
    if ( *(_BYTE *)(v5 + 388) ) /*0x283401*/
    {
      *(_BYTE *)(v5 + 388) = 0; /*0x28340e*/
      if ( *(_BYTE *)(v5 + 384) ) /*0x283415*/
      {
        v6 = (_QWORD *)SteamInternal_ContextInit(off_8F8078); /*0x283429*/
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 200LL))(*v6) ) /*0x283435*/
        {
          v7 = (_QWORD *)SteamInternal_ContextInit(off_8F8078); /*0x28344a*/
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 312LL))(*v7) ) /*0x283456*/
          {
            if ( *(_BYTE *)(v5 + 387) ) /*0x283467*/
            {
              v8 = *(_BYTE *)(v5 + 389); /*0x283470*/
              v9 = (_QWORD *)SteamInternal_ContextInit(off_8F8078); /*0x283477*/
              (*(void (__fastcall **)(_QWORD, bool, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*v9 + 264LL))( /*0x2834b3*/
                *v9,
                v8 != 0,
                *(unsigned int *)(v5 + 392),
                *(unsigned int *)(v5 + 396),
                *(_DWORD *)(v5 + 400),
                *(_DWORD *)(v5 + 404));
            }
            else
            {
              v10 = (_QWORD *)SteamInternal_ContextInit(off_8F8078); /*0x2834b8*/
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 280LL))(*v10); /*0x2834c4*/
            }
          }
        }
      }
    }
    return SteamAPI_RunCallbacks(); /*0x2834ca*/
  }
  return result; /*0x2834d0*/
}

// [44/51] Address: 0x284010
// Method: GameManager::safePopScene
char GameManager_safePopScene()
{
  cocos2d::CCDirector *v0; // rax
  struct cocos2d::CCScene *v1; // rax
  struct cocos2d::CCScene *v2; // rbx
  cocos2d::CCDirector *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdx

  v0 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x284014*/
  if ( (int)cocos2d::CCDirector::sceneCount(v0) > 1 ) /*0x284026*/
  {
    v5 = cocos2d::CCDirector::sharedDirector(); /*0x284064*/
    return cocos2d::CCDirector::popSceneWithTransition(v5, v6, 0); /*0x28407c*/
  }
  else
  {
    v1 = (struct cocos2d::CCScene *)MenuLayer_scene(0); /*0x28402f*/
    v2 = cocos2d::CCTransitionFade::create(0.5, v1); /*0x284045*/
    v3 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x284048*/
    return cocos2d::CCDirector::replaceScene(v3, v2); /*0x28405d*/
  }
}

// [45/51] Address: 0x284360
// Method: GameManager::reloadAllStep3
// Hidden C++ exception states: #wind=1
void __fastcall GameManager_reloadAllStep3(__int64 a1)
{
  char v2; // bl
  char v3; // di
  char v4; // si
  cocos2d::CCEGLView *v5; // rax
  __int64 v6; // rcx
  bool GameVariable; // bl
  cocos2d::CCApplication *v8; // rax
  cocos2d::CCActionManager *v9; // rdi
  __int64 v10; // rbx
  struct cocos2d::CCFiniteTimeAction *v11; // rax
  struct cocos2d::CCAction *v12; // rax
  void *v13; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 424) ) /*0x284377*/
  {
    v2 = *(_BYTE *)(a1 + 427); /*0x284384*/
    v3 = *(_BYTE *)(a1 + 426); /*0x28438b*/
    v4 = *(_BYTE *)(a1 + 425); /*0x284392*/
    v5 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(); /*0x284399*/
    cocos2d::CCEGLView::toggleFullScreen(v5, v4, v3, v2); /*0x2843ae*/
    v6 = qword_905FD0; /*0x2843b4*/
    if ( !qword_905FD0 ) /*0x2843be*/
    {
      v13 = operator new(0x6E8u); /*0x2843ca*/
      qword_905FD0 = sub_2723A0(v13); /*0x2843d8*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2843e9*/
      v6 = qword_905FD0; /*0x2843eb*/
    }
    GameVariable = GameManager_getGameVariable(v6, "0030"); /*0x2843fe*/
    v8 = (cocos2d::CCApplication *)cocos2d::CCApplication::sharedApplication(); /*0x284401*/
    cocos2d::CCApplication::toggleVerticalSync(v8, GameVariable); /*0x28440d*/
  }
  v9 = *(cocos2d::CCActionManager **)(a1 + 264); /*0x284413*/
  v10 = cocos2d::CCCallFunc::create(a1, sub_284470); /*0x28442a*/
  v11 = cocos2d::CCDelayTime::create(0.0); /*0x284430*/
  v12 = cocos2d::CCSequence::create(v11, v10, 0); /*0x28443f*/
  cocos2d::CCActionManager::addAction(v9, v12, (struct cocos2d::CCNode *)a1, 0); /*0x284465*/
}

// [46/51] Address: 0x284520
// Method: GameManager::reloadAllStep5
bool __fastcall GameManager_reloadAllStep5(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rax
  struct cocos2d::CCScene *v3; // rbx
  cocos2d::CCDirector *v4; // rax

  v1 = *(_BYTE *)(a1 + 428) == 0; /*0x284526*/
  LOBYTE(a1) = 1; /*0x28452d*/
  if ( v1 ) /*0x28452f*/
    v2 = MenuLayer_scene(a1); /*0x284538*/
  else
    v2 = LoadingLayer_scene(a1); /*0x284531*/
  v3 = (struct cocos2d::CCScene *)v2; /*0x28453d*/
  v4 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x284540*/
  return cocos2d::CCDirector::replaceScene(v4, v3); /*0x28454c*/
}

// [47/51] Address: 0x284560
// Method: GameManager::resolutionForKey
cocos2d::CCSize *__fastcall GameManager_resolutionForKey(__int64 a1, cocos2d::CCSize *a2, int a3)
{
  cocos2d::CCSize *result; // rax
  float v5; // xmm2_4

  switch ( a3 ) /*0x28458a*/
  {
    case 1: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 640.0, 480.0); /*0x28459f*/
      result = a2; /*0x2845a5*/
      break; /*0x2845ad*/
    case 2: /*0x28458a*/
      v5 = 480.0; /*0x2845ae*/
      goto LABEL_4; /*0x2845ae*/
    case 3: /*0x28458a*/
      v5 = 576.0; /*0x2845d0*/
LABEL_4:
      cocos2d::CCSize::CCSize(a2, 720.0, v5); /*0x2845b6*/
      result = a2; /*0x2845c7*/
      break; /*0x2845cf*/
    case 4: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 800.0, 600.0); /*0x2845ed*/
      result = a2; /*0x2845f3*/
      break; /*0x2845fb*/
    case 5: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1024.0, 768.0); /*0x28460f*/
      result = a2; /*0x284615*/
      break; /*0x28461d*/
    case 6: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1152.0, 864.0); /*0x284631*/
      result = a2; /*0x284637*/
      break; /*0x28463f*/
    case 7: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1176.0, 664.0); /*0x284653*/
      result = a2; /*0x284659*/
      break; /*0x284661*/
    case 8: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1280.0, 720.0); /*0x284675*/
      result = a2; /*0x28467b*/
      break; /*0x284683*/
    case 9: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1280.0, 768.0); /*0x284697*/
      result = a2; /*0x28469d*/
      break; /*0x2846a5*/
    case 10: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1280.0, 800.0); /*0x2846b9*/
      result = a2; /*0x2846bf*/
      break; /*0x2846c7*/
    case 11: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1280.0, 960.0); /*0x2846db*/
      result = a2; /*0x2846e1*/
      break; /*0x2846e9*/
    case 12: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1280.0, 1024.0); /*0x2846fd*/
      result = a2; /*0x284703*/
      break; /*0x28470b*/
    case 13: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1360.0, 768.0); /*0x28471f*/
      result = a2; /*0x284725*/
      break; /*0x28472d*/
    case 14: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1366.0, 768.0); /*0x284741*/
      result = a2; /*0x284747*/
      break; /*0x28474f*/
    case 15: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1440.0, 900.0); /*0x284763*/
      result = a2; /*0x284769*/
      break; /*0x284771*/
    case 16: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1600.0, 900.0); /*0x284785*/
      result = a2; /*0x28478b*/
      break; /*0x284793*/
    case 17: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1600.0, 1024.0); /*0x2847a7*/
      result = a2; /*0x2847ad*/
      break; /*0x2847b5*/
    case 18: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1600.0, 1200.0); /*0x2847c9*/
      result = a2; /*0x2847cf*/
      break; /*0x2847d7*/
    case 19: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1680.0, 1050.0); /*0x2847eb*/
      result = a2; /*0x2847f1*/
      break; /*0x2847f9*/
    case 20: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1768.0, 992.0); /*0x28480d*/
      result = a2; /*0x284813*/
      break; /*0x28481b*/
    case 21: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1920.0, 1080.0); /*0x28482f*/
      result = a2; /*0x284835*/
      break; /*0x28483d*/
    case 22: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1920.0, 1200.0); /*0x284851*/
      result = a2; /*0x284857*/
      break; /*0x28485f*/
    case 23: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 1920.0, 1440.0); /*0x284873*/
      result = a2; /*0x284879*/
      break; /*0x284881*/
    case 24: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 2048.0, 1536.0); /*0x284895*/
      result = a2; /*0x28489b*/
      break; /*0x2848a3*/
    case 25: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 2560.0, 1440.0); /*0x2848b7*/
      result = a2; /*0x2848bd*/
      break; /*0x2848c5*/
    case 26: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 2560.0, 1600.0); /*0x2848d9*/
      result = a2; /*0x2848df*/
      break; /*0x2848e7*/
    case 27: /*0x28458a*/
      cocos2d::CCSize::CCSize(a2, 3840.0, 2160.0); /*0x2848fb*/
      result = a2; /*0x284901*/
      break; /*0x284909*/
    default:
      PlatformToolbox_getDisplaySize(a2, a2); /*0x28490d*/
      result = a2; /*0x284912*/
      break; /*0x284912*/
  }
  return result; /*0x2845a8*/
}

// [48/51] Address: 0x284990
// Method: GameManager::updateCustomFPS
// Hidden C++ exception states: #wind=1
__int64 GameManager_updateCustomFPS()
{
  __int64 v0; // rcx
  __int64 result; // rax
  __int64 v2; // rax
  void *v3; // [rsp+38h] [rbp+10h]

  v0 = qword_905FD0; /*0x284999*/
  if ( !qword_905FD0 ) /*0x2849a3*/
  {
    v3 = operator new(0x6E8u); /*0x2849af*/
    qword_905FD0 = sub_2723A0(v3); /*0x2849bd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2849ce*/
    v0 = qword_905FD0; /*0x2849d0*/
  }
  result = GameManager_getGameVariable(v0, "0116"); /*0x2849de*/
  if ( (_BYTE)result ) /*0x2849e5*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(); /*0x2849f8*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2); /*0x284a20*/
  }
  return result; /*0x284a1b*/
}

// [49/51] Address: 0x284a50
// Method: GameManager::~GameManager
void __fastcall GameManager__dtor_GameManager(__int64 a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx

  *(_QWORD *)a1 = &GameManager::`vftable'; /*0x284a64*/
  v2 = *(cocos2d::CCObject **)(a1 + 464); /*0x284a67*/
  if ( v2 ) /*0x284a71*/
    cocos2d::CCObject::release(v2); /*0x284a73*/
  v3 = *(cocos2d::CCObject **)(a1 + 1280); /*0x284a79*/
  if ( v3 ) /*0x284a83*/
    cocos2d::CCObject::release(v3); /*0x284a85*/
  v4 = *(cocos2d::CCObject **)(a1 + 384); /*0x284a8b*/
  if ( v4 ) /*0x284a95*/
    cocos2d::CCObject::release(v4); /*0x284a97*/
  v5 = *(cocos2d::CCObject **)(a1 + 392); /*0x284a9d*/
  if ( v5 ) /*0x284aa7*/
    cocos2d::CCObject::release(v5); /*0x284aa9*/
  v6 = *(cocos2d::CCObject **)(a1 + 400); /*0x284aaf*/
  if ( v6 ) /*0x284ab9*/
    cocos2d::CCObject::release(v6); /*0x284abb*/
  v7 = *(cocos2d::CCObject **)(a1 + 408); /*0x284ac1*/
  if ( v7 ) /*0x284acb*/
    cocos2d::CCObject::release(v7); /*0x284acd*/
  v8 = *(cocos2d::CCObject **)(a1 + 416); /*0x284ad3*/
  if ( v8 ) /*0x284add*/
    cocos2d::CCObject::release(v8); /*0x284adf*/
  qword_905FD0 = 0; /*0x284ae5*/
  sub_3C310(a1 + 1704); /*0x284af7*/
  sub_3C310(a1 + 1672); /*0x284b03*/
  sub_3C310(a1 + 1640); /*0x284b0f*/
  sub_3C310(a1 + 1608); /*0x284b1b*/
  sub_3C310(a1 + 1576); /*0x284b27*/
  sub_3C310(a1 + 1544); /*0x284b33*/
  sub_3C310(a1 + 1512); /*0x284b3f*/
  sub_284F60(a1 + 1256, a1 + 1256, *(_QWORD *)(*(_QWORD *)(a1 + 1256) + 8LL)); /*0x284b5d*/
  j_j_free(*(void **)(a1 + 1256)); /*0x284b6e*/
  sub_685C0(a1 + 1232); /*0x284b7a*/
  sub_7F2E0(a1 + 1216); /*0x284b86*/
  sub_10D980(a1 + 1200, a1 + 1200, *(_QWORD *)(*(_QWORD *)(a1 + 1200) + 8LL)); /*0x284ba4*/
  j_j_free(*(void **)(a1 + 1200)); /*0x284bb5*/
  sub_7F2E0(a1 + 1184); /*0x284bc1*/
  sub_66410(a1 + 1144); /*0x284bcd*/
  sub_3C310(a1 + 656); /*0x284bd9*/
  sub_3C310(a1 + 624); /*0x284be5*/
  sub_3C310(a1 + 520); /*0x284bf1*/
  sub_271550(a1 + 360); /*0x284bfd*/
  sub_3C310(a1 + 320); /*0x284c09*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)a1); /*0x284c1b*/
}

// [50/51] Address: 0x2a9220
// Method: GameManager::addGameAnimation
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameManager_addGameAnimation(
        cocos2d::CCDictionary **a1,
        int a2,
        int a3,
        float a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r12
  cocos2d::CCDictionary *v9; // rbx
  struct cocos2d::CCObject *v10; // rax
  cocos2d::CCDictionary *v11; // rbx
  struct cocos2d::CCObject *v12; // rax
  __int64 v13; // rcx
  cocos2d::CCArray *v14; // r15
  int v15; // ebp
  int i; // ebx
  const char *v17; // rdx
  struct cocos2d::CCObject *v18; // rax
  __int64 v19; // rcx
  cocos2d::CCArray *v20; // rbx
  const char *v21; // rdx
  struct cocos2d::CCObject *v22; // rax

  v8 = a2; /*0x2a9260*/
  v9 = a1[50]; /*0x2a9263*/
  v10 = cocos2d::CCFloat::create(a4); /*0x2a926d*/
  cocos2d::CCDictionary::setObject(v9, v10, v8); /*0x2a927c*/
  v11 = a1[51]; /*0x2a9282*/
  v12 = cocos2d::CCInteger::create(a3); /*0x2a928c*/
  cocos2d::CCDictionary::setObject(v11, v12, v8); /*0x2a929b*/
  v14 = (cocos2d::CCArray *)cocos2d::CCArray::create(v13); /*0x2a92a7*/
  v15 = 1; /*0x2a92aa*/
  for ( i = 1; i <= a3; ++i ) /*0x2a92b4*/
  {
    v17 = (const char *)a5; /*0x2a92b6*/
    if ( *(_QWORD *)(a5 + 24) > 0xFu ) /*0x2a92be*/
      v17 = *(const char **)a5; /*0x2a92c0*/
    v18 = cocos2d::CCString::createWithFormat("%s_%03d.png", v17, i); /*0x2a92cd*/
    cocos2d::CCArray::addObject(v14, v18); /*0x2a92d9*/
  }
  cocos2d::CCDictionary::setObject(a1[48], v14, v8); /*0x2a92f3*/
  if ( *(_QWORD *)(a6 + 16) ) /*0x2a92f9*/
  {
    v20 = (cocos2d::CCArray *)cocos2d::CCArray::create(v19); /*0x2a9306*/
    if ( a3 >= 1 ) /*0x2a930c*/
    {
      do /*0x2a933e*/
      {
        v21 = (const char *)a6; /*0x2a9310*/
        if ( *(_QWORD *)(a6 + 24) > 0xFu ) /*0x2a9318*/
          v21 = *(const char **)a6; /*0x2a931a*/
        v22 = cocos2d::CCString::createWithFormat("%s_%03d.png", v21, v15); /*0x2a9327*/
        cocos2d::CCArray::addObject(v20, v22); /*0x2a9333*/
        ++v15; /*0x2a9339*/
      }
      while ( v15 <= a3 ); /*0x2a933e*/
    }
    cocos2d::CCDictionary::setObject(a1[49], v20, v8); /*0x2a934d*/
  }
  sub_3C310(a5); /*0x2a9357*/
  return sub_3C310(a6); /*0x2a9365*/
}

// [51/51] Address: 0x2a9390
// Method: GameManager::addCustomAnimationFrame
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameManager_addCustomAnimationFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  cocos2d::CCArray *v7; // rsi
  struct cocos2d::CCObject *v8; // rax
  struct cocos2d::CCObject *v9; // rax
  cocos2d::CCArray *v10; // rsi
  struct cocos2d::CCObject *v11; // rax
  struct cocos2d::CCObject *v12; // rax

  if ( *(_QWORD *)(a4 + 16) ) /*0x2a93c3*/
  {
    v7 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 384), 1583); /*0x2a93dc*/
    if ( cocos2d::CCArray::count(v7) < 4 ) /*0x2a93ee*/
    {
      v9 = (struct cocos2d::CCObject *)cocos2d::CCString::create(a4); /*0x2a940a*/
      cocos2d::CCArray::addObject(v7, v9); /*0x2a9416*/
    }
    else
    {
      v8 = (struct cocos2d::CCObject *)cocos2d::CCString::create(a4); /*0x2a93f0*/
      cocos2d::CCArray::insertObject(v7, v8, 3u); /*0x2a9402*/
    }
  }
  if ( *(_QWORD *)(a5 + 16) ) /*0x2a941c*/
  {
    v10 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 392), 1583); /*0x2a9435*/
    if ( cocos2d::CCArray::count(v10) < 4 ) /*0x2a9447*/
    {
      v12 = (struct cocos2d::CCObject *)cocos2d::CCString::create(a5); /*0x2a9463*/
      cocos2d::CCArray::addObject(v10, v12); /*0x2a946f*/
    }
    else
    {
      v11 = (struct cocos2d::CCObject *)cocos2d::CCString::create(a5); /*0x2a9449*/
      cocos2d::CCArray::insertObject(v10, v11, 3u); /*0x2a945b*/
    }
  }
  sub_3C310(a4); /*0x2a9479*/
  return sub_3C310(a5); /*0x2a9487*/
}

// Address: 0x27f040
// Method: GameManager::dataLoaded
// Hidden C++ exception states: #wind=47
void __fastcall GameManager_dataLoaded(__int64 a1, DS_Dictionary *a2)
{
  __int64 v4; // rax
  struct ObjectDecoderDelegate *v5; // rbx
  ObjectDecoder *v6; // rax
  cocos2d::CCObject *DictForKey; // rax
  cocos2d::CCObject *v8; // rbx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rax
  cocos2d::CCObject *v11; // rbx
  cocos2d::CCObject *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r14
  void *v15; // r8
  __int64 v16; // rbx
  void *v17; // rcx
  void *v18; // rcx
  cocos2d::CCObject *v19; // rax
  cocos2d::CCObject *v20; // rbx
  __int64 v21; // rcx
  cocos2d::CCObject *v22; // rcx
  cocos2d::CCObject *v23; // rax
  cocos2d::CCObject *v24; // rbx
  cocos2d::CCObject *v25; // rcx
  __int64 StringForKey; // rax
  __int64 v27; // rax
  int IntegerForKey; // ebx
  float v29; // xmm0_4
  int v30; // ebx
  float v31; // xmm0_4
  int v32; // ebx
  float v33; // xmm0_4
  int v34; // ebx
  float v35; // xmm0_4
  int v36; // ebx
  float v37; // xmm0_4
  signed int v38; // r14d
  int v39; // ebx
  float v40; // xmm0_4
  int v41; // ebx
  float v42; // xmm0_4
  int v43; // ebx
  float v44; // xmm0_4
  int v45; // ebx
  float v46; // xmm0_4
  int v47; // ebx
  float v48; // xmm0_4
  int v49; // ebx
  float v50; // xmm0_4
  int v51; // ebx
  float v52; // xmm0_4
  int v53; // ebx
  float v54; // xmm0_4
  int v55; // ebx
  float v56; // xmm0_4
  int v57; // ebx
  float v58; // xmm0_4
  int v59; // ebx
  float v60; // xmm0_4
  int v61; // ebx
  float v62; // xmm0_4
  __int64 v63; // r15
  cocos2d::CCObject *v64; // rax
  cocos2d::CCObject *v65; // rbx
  __int64 v66; // rcx
  cocos2d::CCObject *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rbx
  int v73; // r15d
  int v74; // r8d
  __int64 v75; // rax
  int v76; // r12d
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __m128 v80; // xmm0
  _QWORD *v81; // r13
  _QWORD *v82; // rbx
  void *v83; // rcx
  int v84; // r13d
  int i; // ebx
  __m128 v86; // xmm11
  float FloatForKey; // xmm10_4
  float v88; // xmm9_4
  float v89; // xmm8_4
  float v90; // xmm7_4
  float v91; // xmm6_4
  _OWORD *v92; // rax
  __m128 v93; // xmm11
  __m128 v94; // xmm11
  __m128 v95; // xmm11
  __m128 v96; // xmm0
  __m128 v97; // xmm0
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  float v115; // xmm6_4
  float v116; // xmm0_4
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 ShaPassword; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  int v127; // ebx
  float v128; // xmm0_4
  cocos2d::CCArray *v129; // r13
  unsigned int j; // r15d
  int v131; // edx
  int v132; // ecx
  __crt_locale_pointers *v133; // r8
  struct cocos2d::CCObject *v134; // rax
  cocos2d::CCString *v135; // rax
  const char *CString; // rbx
  void *v137; // rcx
  __int64 v138; // rax
  __int64 v139; // r8
  __int64 v140; // rcx
  __int64 MainLevel; // rbx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int64 v145; // rbx
  __int64 v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // rcx
  __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rcx
  __int64 v153; // rcx
  __int64 v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // rcx
  __int64 v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // r8
  bool BoolForKey; // al
  __int64 v165; // r8
  __int64 v166; // r8
  __int64 v167; // r8
  __int64 v168; // r8
  __int64 v169; // rbx
  __int64 v170; // rsi
  __int64 v171; // rax
  __int64 v172; // rsi
  __int64 v173; // rbx
  __int64 v174; // rax
  __int64 v175; // rsi
  __int64 v176; // rbx
  __int64 v177; // rax
  __int64 v178; // r8
  __int64 v179; // r8
  __int64 v180; // r8
  __int64 v181; // r8
  __int64 v182; // r8
  __int64 v183; // r8
  cocos2d::CCString *v184; // rax
  int v185; // ebx
  void *v186; // r8
  __int64 v187; // rbx
  struct cocos2d::CCString *v188; // rax
  void *v189; // rcx
  cocos2d::CCString *v190; // rax
  int v191; // ebx
  void *v192; // r8
  __int64 v193; // rbx
  struct cocos2d::CCString *v194; // rax
  void *v195; // rcx
  void *v196; // [rsp+30h] [rbp-D0h]
  void *v197; // [rsp+30h] [rbp-D0h]
  void *v198; // [rsp+30h] [rbp-D0h]
  void *v199; // [rsp+30h] [rbp-D0h]
  void *v200; // [rsp+30h] [rbp-D0h]
  void *v201; // [rsp+30h] [rbp-D0h]
  void *v202; // [rsp+30h] [rbp-D0h]
  void *v203; // [rsp+30h] [rbp-D0h]
  void *v204; // [rsp+30h] [rbp-D0h]
  void *v205; // [rsp+30h] [rbp-D0h]
  void *v206; // [rsp+30h] [rbp-D0h]
  void *v207; // [rsp+30h] [rbp-D0h]
  void *v208; // [rsp+30h] [rbp-D0h]
  void *v209; // [rsp+30h] [rbp-D0h]
  void *v210; // [rsp+30h] [rbp-D0h]
  void *v211; // [rsp+30h] [rbp-D0h]
  void *v212; // [rsp+30h] [rbp-D0h]
  void *v213; // [rsp+30h] [rbp-D0h]
  void *v214; // [rsp+30h] [rbp-D0h]
  void *v215; // [rsp+30h] [rbp-D0h]
  void *v216; // [rsp+30h] [rbp-D0h]
  void *v217; // [rsp+30h] [rbp-D0h]
  void *v218; // [rsp+30h] [rbp-D0h]
  void *v219; // [rsp+30h] [rbp-D0h]
  void *v220; // [rsp+30h] [rbp-D0h]
  void *v221; // [rsp+38h] [rbp-C8h] BYREF
  void *v222; // [rsp+40h] [rbp-C0h]
  void *Src[2]; // [rsp+48h] [rbp-B8h] BYREF
  __m128 v224; // [rsp+58h] [rbp-A8h]
  void *Block[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v226; // [rsp+78h] [rbp-88h]
  unsigned __int64 v227; // [rsp+80h] [rbp-80h]

  v4 = GJObjectDecoder_sharedDecoder();
  v5 = (struct ObjectDecoderDelegate *)(v4 + 320);
  if ( !v4 )
    v5 = 0;
  v6 = (ObjectDecoder *)ObjectDecoder::sharedDecoder();
  ObjectDecoder::setDelegate(v6, v5);
  if ( !*(_QWORD *)(a1 + 432) )
  {
    DictForKey = DS_Dictionary::getDictForKey(a2, "valueKeeper", 0);
    v8 = DictForKey;
    if ( *(cocos2d::CCObject **)(a1 + 432) != DictForKey )
    {
      if ( DictForKey )
        cocos2d::CCObject::retain(DictForKey);
      v9 = *(cocos2d::CCObject **)(a1 + 432);
      if ( v9 )
        cocos2d::CCObject::release(v9);
      *(_QWORD *)(a1 + 432) = v8;
    }
  }
  v10 = *(cocos2d::CCObject **)(a1 + 440);
  if ( !v10 )
  {
    v11 = DS_Dictionary::getDictForKey(a2, "localKeeper", 0);
    if ( !v11 )
      v11 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
    v10 = *(cocos2d::CCObject **)(a1 + 440);
    if ( v10 != v11 )
    {
      if ( v11 )
        cocos2d::CCObject::retain(v11);
      v12 = *(cocos2d::CCObject **)(a1 + 440);
      if ( v12 )
        cocos2d::CCObject::release(v12);
      *(_QWORD *)(a1 + 440) = v11;
      v10 = v11;
    }
  }
  v13 = *(_QWORD *)(a1 + 432);
  if ( v13 && v10 )
  {
    v226 = 13;
    v227 = 15;
    strcpy((char *)Block, "autoBackupDir");
    HIWORD(Block[1]) = 0;
    v14 = cocos2d::CCDictionary::objectForKey(v13, Block);
    if ( v227 > 0xF )
    {
      v15 = Block[0];
      if ( v227 + 1 >= 0x1000 )
      {
        v15 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v15);
    }
    v226 = 0;
    v227 = 15;
    LOBYTE(Block[0]) = 0;
    if ( v14 )
    {
      v224.m128_u64[0] = 13;
      v224.m128_u64[1] = 15;
      strcpy((char *)Src, "autoBackupDir");
      HIWORD(Src[1]) = 0;
      v16 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 440), Src);
      sub_3C310(Src);
      if ( !v16 )
      {
        v224.m128_u64[0] = 13;
        v224.m128_u64[1] = 15;
        strcpy((char *)Src, "autoBackupDir");
        HIWORD(Src[1]) = 0;
        cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 440), v14, Src);
        if ( v224.m128_u64[1] > 0xF )
        {
          v17 = Src[0];
          if ( v224.m128_u64[1] + 1 >= 0x1000 )
          {
            v17 = (void *)*((_QWORD *)Src[0] - 1);
            if ( (unsigned __int64)((char *)Src[0] - (char *)v17 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v17);
        }
      }
      v224.m128_u64[0] = 13;
      v224.m128_u64[1] = 15;
      strcpy((char *)Src, "autoBackupDir");
      HIWORD(Src[1]) = 0;
      cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 432), Src);
      if ( v224.m128_u64[1] > 0xF )
      {
        v18 = Src[0];
        if ( v224.m128_u64[1] + 1 >= 0x1000 )
        {
          v18 = (void *)*((_QWORD *)Src[0] - 1);
          if ( (unsigned __int64)((char *)Src[0] - (char *)v18 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v18);
      }
    }
  }
  v19 = DS_Dictionary::getDictForKey(a2, "unlockValueKeeper", 0);
  v20 = v19;
  v21 = *(_QWORD *)(a1 + 456);
  if ( v21 )
  {
    sub_6D950(v21, v19);
  }
  else if ( v19 )
  {
    cocos2d::CCObject::retain(v19);
    v22 = *(cocos2d::CCObject **)(a1 + 456);
    if ( v22 )
      cocos2d::CCObject::release(v22);
    *(_QWORD *)(a1 + 456) = v20;
  }
  if ( !*(_QWORD *)(a1 + 464) )
  {
    v23 = DS_Dictionary::getDictForKey(a2, "customObjectDict", 0);
    v24 = v23;
    if ( *(cocos2d::CCObject **)(a1 + 464) != v23 )
    {
      if ( v23 )
        cocos2d::CCObject::retain(v23);
      v25 = *(cocos2d::CCObject **)(a1 + 464);
      if ( v25 )
        cocos2d::CCObject::release(v25);
      *(_QWORD *)(a1 + 464) = v24;
    }
  }
  StringForKey = DS_Dictionary::getStringForKey(a2, Src, "playerUDID");
  sub_58AD0(a1 + 624, StringForKey);
  sub_3C310(Src);
  v27 = DS_Dictionary::getStringForKey(a2, Src, "playerName");
  sub_58AD0(a1 + 656, v27);
  sub_3C310(Src);
  IntegerForKey = DS_Dictionary::getIntegerForKey(a2, "playerUserID");
  *(_DWORD *)(a1 + 700) = IntegerForKey;
  v29 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 696) = (int)v29;
  *(_DWORD *)(a1 + 692) = IntegerForKey + (int)v29;
  v30 = DS_Dictionary::getIntegerForKey(a2, "playerFrame");
  *(_DWORD *)(a1 + 756) = v30;
  v31 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 752) = (int)v31;
  *(_DWORD *)(a1 + 748) = v30 + (int)v31;
  v32 = DS_Dictionary::getIntegerForKey(a2, "playerColor");
  *(_DWORD *)(a1 + 852) = v32;
  v33 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 848) = (int)v33;
  *(_DWORD *)(a1 + 844) = v32 + (int)v33;
  v34 = DS_Dictionary::getIntegerForKey(a2, "playerColor2");
  *(_DWORD *)(a1 + 864) = v34;
  v35 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 860) = (int)v35;
  *(_DWORD *)(a1 + 856) = v34 + (int)v35;
  v36 = DS_Dictionary::getIntegerForKey(a2, "playerColor3");
  *(_DWORD *)(a1 + 876) = v36;
  v37 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 872) = (int)v37;
  *(_DWORD *)(a1 + 868) = v36 + (int)v37;
  v38 = 1;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerShip") >= 1 )
    v39 = DS_Dictionary::getIntegerForKey(a2, "playerShip");
  else
    v39 = 1;
  *(_DWORD *)(a1 + 768) = v39;
  v40 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 764) = (int)v40;
  *(_DWORD *)(a1 + 760) = (int)v40 + v39;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerBall") >= 1 )
    v41 = DS_Dictionary::getIntegerForKey(a2, "playerBall");
  else
    v41 = 1;
  *(_DWORD *)(a1 + 780) = v41;
  v42 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 776) = (int)v42;
  *(_DWORD *)(a1 + 772) = (int)v42 + v41;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerBird") >= 1 )
    v43 = DS_Dictionary::getIntegerForKey(a2, "playerBird");
  else
    v43 = 1;
  *(_DWORD *)(a1 + 792) = v43;
  v44 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 788) = (int)v44;
  *(_DWORD *)(a1 + 784) = (int)v44 + v43;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerDart") >= 1 )
    v45 = DS_Dictionary::getIntegerForKey(a2, "playerDart");
  else
    v45 = 1;
  *(_DWORD *)(a1 + 804) = v45;
  v46 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 800) = (int)v46;
  *(_DWORD *)(a1 + 796) = (int)v46 + v45;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerRobot") >= 1 )
    v47 = DS_Dictionary::getIntegerForKey(a2, "playerRobot");
  else
    v47 = 1;
  *(_DWORD *)(a1 + 816) = v47;
  v48 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 812) = (int)v48;
  *(_DWORD *)(a1 + 808) = (int)v48 + v47;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerSpider") >= 1 )
    v49 = DS_Dictionary::getIntegerForKey(a2, "playerSpider");
  else
    v49 = 1;
  *(_DWORD *)(a1 + 828) = v49;
  v50 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 824) = (int)v50;
  *(_DWORD *)(a1 + 820) = (int)v50 + v49;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerJetpack") >= 1 )
    v51 = DS_Dictionary::getIntegerForKey(a2, "playerJetpack");
  else
    v51 = 1;
  *(_DWORD *)(a1 + 924) = v51;
  v52 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 920) = (int)v52;
  *(_DWORD *)(a1 + 916) = (int)v52 + v51;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerSwing") >= 1 )
    v53 = DS_Dictionary::getIntegerForKey(a2, "playerSwing");
  else
    v53 = 1;
  *(_DWORD *)(a1 + 840) = v53;
  v54 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 836) = (int)v54;
  *(_DWORD *)(a1 + 832) = (int)v54 + v53;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerStreak") >= 1 )
    v55 = DS_Dictionary::getIntegerForKey(a2, "playerStreak");
  else
    v55 = 1;
  *(_DWORD *)(a1 + 888) = v55;
  v56 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 884) = (int)v56;
  *(_DWORD *)(a1 + 880) = (int)v56 + v55;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerShipStreak") >= 1 )
    v57 = DS_Dictionary::getIntegerForKey(a2, "playerShipStreak");
  else
    v57 = 1;
  *(_DWORD *)(a1 + 900) = v57;
  v58 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 896) = (int)v58;
  *(_DWORD *)(a1 + 892) = (int)v58 + v57;
  if ( (int)DS_Dictionary::getIntegerForKey(a2, "playerDeathEffect") >= 1 )
    v59 = DS_Dictionary::getIntegerForKey(a2, "playerDeathEffect");
  else
    v59 = 1;
  *(_DWORD *)(a1 + 912) = v59;
  v60 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 908) = (int)v60;
  *(_DWORD *)(a1 + 904) = (int)v60 + v59;
  *(_BYTE *)(a1 + 944) = DS_Dictionary::getBoolForKey(a2, "playerGlow");
  *(_DWORD *)(a1 + 948) = DS_Dictionary::getIntegerForKey(a2, "playerIconType");
  v61 = DS_Dictionary::getIntegerForKey(a2, "secretNumber");
  v62 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 940) = (int)v62;
  *(_DWORD *)(a1 + 936) = v61 + (int)v62;
  *(_BYTE *)(a1 + 1132) = GameManager_getGameVariable(a1, "0028");
  if ( GameManager_getGameVariable(a1, "0220") || GameManager_getGameVariable(a1, "0221") )
  {
    sub_27ACB0(a1, "0243", 1);
    sub_27ACB0(a1, "0220", 0);
    sub_27ACB0(a1, "0221", 0);
  }
  v63 = AchievementManager_sharedState();
  v64 = DS_Dictionary::getDictForKey(a2, "reportedAchievements", 0);
  v65 = v64;
  v66 = *(_QWORD *)(v63 + 352);
  if ( v66 )
  {
    sub_6D950(v66, v64);
  }
  else if ( v64 )
  {
    cocos2d::CCObject::retain(v64);
    v67 = *(cocos2d::CCObject **)(v63 + 352);
    if ( v67 )
      cocos2d::CCObject::release(v67);
    *(_QWORD *)(v63 + 352) = v65;
  }
  v68 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v221 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v221);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v68 = qword_905FE0;
  }
  GameStatsManager_dataLoaded(v68, a2);
  v69 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v221 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v221);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v69 = *(_QWORD *)&qword_905FB0;
  }
  sub_221E90(v69, a2);
  v70 = qword_906070;
  if ( !qword_906070 )
  {
    v221 = operator new(0x3D0u);
    qword_906070 = sub_47C350(v221);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v70 = qword_906070;
  }
  sub_486D20(v70, a2);
  v72 = sub_384880();
  if ( a2 )
  {
    v73 = DS_Dictionary::getIntegerForKey(a2, "GJKB_Version");
    if ( v73 > 0 )
    {
      DS_Dictionary::getStringForKey(a2, Src, "GJKB_Binds");
      if ( v224.m128_u64[0]
        && (LODWORD(v221) = 0,
            LOBYTE(v74) = 1,
            sub_387D80(v72, (unsigned int)Src, v74, (unsigned int)&v221, 0),
            (_DWORD)v221) )
      {
        sub_3881C0(v72, (unsigned int)v73);
      }
      else
      {
        sub_3870B0(v72);
      }
      sub_3C310(Src);
    }
  }
  v75 = sub_182B60(v71);
  sub_188940(v75, a2);
  v76 = DS_Dictionary::getIntegerForKey(a2, "binaryVersion");
  *(_BYTE *)(AchievementManager_sharedState() + 360) = 1;
  v77 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v221 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v221);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v77 = qword_905FE0;
  }
  GameStatsManager_recountSpecialStats(v77);
  if ( !*(_BYTE *)(a1 + 512) )
  {
    if ( !qword_905FE0 )
    {
      v221 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v221);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    }
    sub_2D6E40();
    if ( !qword_905FE0 )
    {
      v221 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v221);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    }
    sub_2D7590();
  }
  if ( !qword_905FE0 )
  {
    v221 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v221);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
  }
  if ( !(unsigned __int8)sub_2E5B30(v78, 12, 16) )
    *(_QWORD *)(a1 + 1164) = 0;
  *(_BYTE *)(a1 + 953) = DS_Dictionary::getBoolForKey(a2, "showSongMarkers");
  *(_BYTE *)(a1 + 954) = DS_Dictionary::getBoolForKey(a2, "showBPMMarkers");
  *(_BYTE *)(a1 + 956) = DS_Dictionary::getBoolForKey(a2, "showProgressBar");
  *(_BYTE *)(a1 + 960) = DS_Dictionary::getBoolForKey(a2, "clickedEditor");
  *(_BYTE *)(a1 + 959) = DS_Dictionary::getBoolForKey(a2, "clickedGarage");
  *(_BYTE *)(a1 + 961) = DS_Dictionary::getBoolForKey(a2, "clickedName");
  *(_BYTE *)(a1 + 962) = DS_Dictionary::getBoolForKey(a2, "clickedPractice");
  *(_BYTE *)(a1 + 963) = DS_Dictionary::getBoolForKey(a2, "showedEditorGuide");
  *(_BYTE *)(a1 + 964) = DS_Dictionary::getBoolForKey(a2, "showedRateDiffDialog");
  *(_BYTE *)(a1 + 965) = DS_Dictionary::getBoolForKey(a2, "showedRateStarDialog");
  *(_BYTE *)(a1 + 966) = DS_Dictionary::getBoolForKey(a2, "showedLowDetailDialog");
  *(_BYTE *)(a1 + 1056) = DS_Dictionary::getBoolForKey(a2, "hasRatedGame");
  if ( !*(_BYTE *)(a1 + 512) )
  {
    *(_BYTE *)(a1 + 957) = DS_Dictionary::getBoolForKey(a2, "performanceMode");
    *(_BYTE *)(a1 + 955) = DS_Dictionary::getBoolForKey(a2, "recordGameplay");
    *(_DWORD *)(a1 + 1052) = DS_Dictionary::getIntegerForKey(a2, "bootups") + 1;
    *(float *)(a1 + 704) = DS_Dictionary::getFloatForKey(a2, "bgVolume");
    *(float *)(a1 + 708) = DS_Dictionary::getFloatForKey(a2, "sfxVolume");
    v80 = (__m128)COERCE_UNSIGNED_INT((float)(int)DS_Dictionary::getIntegerForKey(a2, "timeOffset"));
    *(_DWORD *)(a1 + 712) = v80.m128_i32[0];
    *(_DWORD *)(a1 + 1088) = DS_Dictionary::getIntegerForKey(a2, "resolution");
    *(_DWORD *)(a1 + 1092) = DS_Dictionary::getIntegerForKey(a2, "texQuality");
    *(float *)(a1 + 1136) = DS_Dictionary::getFloatForKey(a2, "customFPSTarget");
    v80.m128_f32[0] = DS_Dictionary::getFloatForKey(a2, "scrollSensitivity");
    *(_DWORD *)(a1 + 1140) = v80.m128_i32[0];
    if ( v80.m128_f32[0] <= 0.0 )
      *(_DWORD *)(a1 + 1140) = 1065353216;
    v81 = *(_QWORD **)(a1 + 1144);
    v82 = (_QWORD *)v81[1];
    while ( !*((_BYTE *)v82 + 25) )
    {
      sub_67C50(a1 + 1144, a1 + 1144, v82[2]);
      v83 = v82;
      v82 = (_QWORD *)*v82;
      j_j_free(v83);
    }
    v81[1] = v81;
    *v81 = v81;
    v81[2] = v81;
    *(_QWORD *)(a1 + 1152) = 0;
    v84 = DS_Dictionary::getIntegerForKey(a2, "winStateCount");
    for ( i = 0; i < v84; ++i )
    {
      swprintf((wchar_t *const)Block, 0x20u, "ws_%d_k", i);
      LODWORD(v221) = DS_Dictionary::getIntegerForKey(a2, (const char *)Block);
      if ( (_DWORD)v221 )
      {
        v224.m128_i8[12] = 0;
        swprintf((wchar_t *const)Block, 0x20u, "ws_%d_cx", i);
        v80.m128_f32[0] = DS_Dictionary::getFloatForKey(a2, (const char *)Block);
        v86 = v80;
        swprintf((wchar_t *const)Block, 0x20u, "ws_%d_cy", i);
        FloatForKey = DS_Dictionary::getFloatForKey(a2, (const char *)Block);
        swprintf((wchar_t *const)Block, 0x20u, "ws_%d_w", i);
        v88 = DS_Dictionary::getFloatForKey(a2, (const char *)Block);
        swprintf((wchar_t *const)Block, 0x20u, "ws_%d_h", i);
        v89 = DS_Dictionary::getFloatForKey(a2, (const char *)Block);
        swprintf((wchar_t *const)Block, 0x20u, "ws_%d_s", i);
        v90 = DS_Dictionary::getFloatForKey(a2, (const char *)Block);
        swprintf((wchar_t *const)Block, 0x20u, "ws_%d_so", i);
        v91 = DS_Dictionary::getFloatForKey(a2, (const char *)Block);
        swprintf((wchar_t *const)Block, 0x20u, "ws_%d_v", i);
        v224.m128_i32[2] = DS_Dictionary::getIntegerForKey(a2, (const char *)Block);
        v92 = (_OWORD *)sub_17D9B0(a1 + 1144, &v221);
        v93 = _mm_shuffle_ps(v86, v86, 225);
        v93.m128_f32[0] = FloatForKey;
        v94 = _mm_shuffle_ps(v93, v93, 198);
        v94.m128_f32[0] = v88;
        v95 = _mm_shuffle_ps(v94, v94, 39);
        v95.m128_f32[0] = v89;
        *(__m128 *)Src = _mm_shuffle_ps(v95, v95, 57);
        *v92 = *(_OWORD *)Src;
        v96 = v224;
        v96.m128_f32[0] = v90;
        v97 = _mm_shuffle_ps(v96, v96, 225);
        v97.m128_f32[0] = v91;
        v80 = _mm_shuffle_ps(v97, v97, 225);
        v224 = v80;
        v92[1] = v80;
      }
    }
    *(_DWORD *)(a1 + 1164) = DS_Dictionary::getIntegerForKey(a2, "customMenuSongID");
    *(_DWORD *)(a1 + 1168) = DS_Dictionary::getIntegerForKey(a2, "customPracticeSongID");
    *(_DWORD *)(a1 + 1172) = DS_Dictionary::getIntegerForKey(a2, "idNameSortMode");
    *(_DWORD *)(a1 + 1176) = DS_Dictionary::getIntegerForKey(a2, "newsLastReadID");
    v98 = DS_Dictionary::getStringForKey(a2, Src, "dpad01");
    sub_27ECC0(v99, a1 + 1308, v98);
    v100 = DS_Dictionary::getStringForKey(a2, Src, "dpad02");
    sub_27ECC0(v101, a1 + 1348, v100);
    v102 = DS_Dictionary::getStringForKey(a2, Src, "dpad03");
    sub_27ECC0(v103, a1 + 1388, v102);
    v104 = DS_Dictionary::getStringForKey(a2, Src, "dpad04");
    sub_27ECC0(v105, a1 + 1428, v104);
    v106 = DS_Dictionary::getStringForKey(a2, Src, "dpad05");
    sub_27ECC0(v107, a1 + 1468, v106);
    v108 = DS_Dictionary::getStringForKey(a2, Src, "dpadLayout01");
    sub_58AD0(a1 + 1512, v108);
    sub_3C310(Src);
    v109 = DS_Dictionary::getStringForKey(a2, Src, "dpadLayout02");
    sub_58AD0(a1 + 1544, v109);
    sub_3C310(Src);
    v110 = DS_Dictionary::getStringForKey(a2, Src, "dpadLayout03");
    sub_58AD0(a1 + 1576, v110);
    sub_3C310(Src);
    v111 = DS_Dictionary::getStringForKey(a2, Src, "dpadLayoutDual01");
    sub_58AD0(a1 + 1608, v111);
    sub_3C310(Src);
    v112 = DS_Dictionary::getStringForKey(a2, Src, "dpadLayoutDual02");
    sub_58AD0(a1 + 1640, v112);
    sub_3C310(Src);
    v113 = DS_Dictionary::getStringForKey(a2, Src, "dpadLayoutDual03");
    sub_58AD0(a1 + 1672, v113);
    sub_3C310(Src);
    v114 = DS_Dictionary::getStringForKey(a2, Src, "recentEmotes");
    sub_58AD0(a1 + 1704, v114);
    sub_3C310(Src);
    *(float *)(a1 + 1760) = DS_Dictionary::getFloatForKey(a2, "practiceOpacity");
    v115 = DS_Dictionary::getFloatForKey(a2, "practicePosY");
    v116 = DS_Dictionary::getFloatForKey(a2, "practicePosX");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v221, v116, v115);
    cocos2d::CCPoint::operator=(a1 + 1752, v117);
    v118 = GJAccountManager_sharedState();
    v119 = DS_Dictionary::getStringForKey(a2, Src, "GJA_001");
    sub_58AD0(v118 + 328, v119);
    sub_3C310(Src);
    *(_DWORD *)(v118 + 360) = DS_Dictionary::getIntegerForKey(a2, "GJA_003");
    v120 = DS_Dictionary::getStringForKey(a2, Src, "GJA_002");
    sub_58AD0(v118 + 464, v120);
    sub_3C310(Src);
    v121 = DS_Dictionary::getStringForKey(a2, Src, "GJA_005");
    sub_58AD0(v118 + 376, v121);
    sub_3C310(Src);
    if ( *(_QWORD *)(v118 + 480) && !*(_QWORD *)(v118 + 392) )
    {
      sub_3E4F0(Src, v118 + 464);
      ShaPassword = GJAccountManager_getShaPassword((__int64)Block, v122);
      sub_58AD0(v118 + 376, ShaPassword);
      sub_3C310(Block);
    }
    GJMultiplayerManager_sharedState();
  }
  if ( v76 < 40 )
    *(_DWORD *)(a1 + 712) = 0;
  sub_27EFB0(a1, v79);
  v124 = GJAccountManager_sharedState();
  if ( *(_DWORD *)(v124 + 360) - *(_DWORD *)(v124 + 364) > 0 )
  {
    v125 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v221 = operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v221);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v125 = *(_QWORD *)&qword_905FB0;
    }
    *(_DWORD *)(v125 + 1336) = 4;
    v126 = GJAccountManager_sharedState();
    sub_3E4F0(Src, v126 + 328);
    sub_58AD0(a1 + 656, Src);
    sub_3C310(Src);
  }
  v127 = DS_Dictionary::getIntegerForKey(a2, "hasRP");
  *(_DWORD *)(a1 + 1072) = v127;
  v128 = (float)((float)rand() / 32767.0) * 1000.0;
  *(_DWORD *)(a1 + 1068) = (int)v128;
  *(_DWORD *)(a1 + 1064) = (int)v128 + v127;
  *(_BYTE *)(a1 + 1076) = DS_Dictionary::getBoolForKey(a2, "hasDRP");
  *(_DWORD *)(a1 + 1080) = DS_Dictionary::getIntegerForKey(a2, "specialPermKey");
  if ( !*(_BYTE *)(a1 + 512) && v76 < 21 )
    GameManager_verifyCoinUnlocks(a1);
  v129 = *(cocos2d::CCArray **)(AchievementManager_sharedState() + 320);
  for ( j = 0; j < cocos2d::CCArray::count(v129); ++j )
  {
    v134 = cocos2d::CCArray::objectAtIndex(v129, j);
    Block[1] = algn_7264 + 1;
    v226 = 10;
    v227 = 15;
    Block[0] = (void *)0x696669746E656469LL;
    v135 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(v134, Block);
    CString = cocos2d::CCString::getCString(v135);
    if ( v227 > 0xF )
    {
      v137 = Block[0];
      if ( v227 + 1 >= 0x1000 )
      {
        v137 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v137 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v137);
    }
    v226 = 0;
    v227 = 15;
    LOBYTE(Block[0]) = 0;
    v138 = AchievementManager_sharedState();
    if ( (int)AchievementManager_percentForAchievement(v138, (__int64)CString) >= 100 )
    {
      *(_OWORD *)Src = 0;
      v224 = 0u;
      v139 = -1;
      do
        ++v139;
      while ( CString[v139] );
      sub_3C230(Src);
      sub_274AD0(a1, Src);
    }
  }
  if ( v76 < 4 )
  {
    do
    {
      v140 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v221 = operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v221);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v140 = *(_QWORD *)&qword_905FB0;
      }
      MainLevel = GameLevelManager_getMainLevel(v140, v38, 0);
      v142 = qword_905FE0;
      if ( !qword_905FE0 )
      {
        v222 = operator new(0x3E8u);
        qword_905FE0 = sub_2D2B40(v222);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
        v142 = qword_905FE0;
      }
      if ( GameStatsManager_hasCompletedStarLevel(v142, MainLevel) )
      {
        v143 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v196 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v196);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v143 = qword_905FE0;
        }
        GameStatsManager_completedStarLevel(v143, MainLevel);
      }
      ++v38;
    }
    while ( v38 <= 22 );
    goto LABEL_163;
  }
  if ( v76 < 11 )
  {
LABEL_163:
    v144 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v197 = operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v197);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v144 = *(_QWORD *)&qword_905FB0;
    }
    v145 = GameLevelManager_getMainLevel(v144, 0xEu, 0);
    v146 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v198 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v198);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v146 = qword_905FE0;
    }
    if ( GameStatsManager_hasCompletedStarLevel(v146, v145) )
    {
      v147 = qword_905FE0;
      if ( !qword_905FE0 )
      {
        v199 = operator new(0x3E8u);
        qword_905FE0 = sub_2D2B40(v199);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
        v147 = qword_905FE0;
      }
      sub_2DE410(v147, v145);
    }
    goto LABEL_172;
  }
  if ( v76 >= 12 )
  {
    if ( v76 >= 51 )
      goto LABEL_203;
    goto LABEL_174;
  }
LABEL_172:
  LOBYTE(v133) = 1;
  sub_27ACB0(a1, "0002", v133);
  LOBYTE(v148) = 1;
  sub_27ACB0(a1, "0001", v148);
LABEL_174:
  v149 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v200 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v200);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v149 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v149, (const char *)&word_708044, 0);
  v150 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v201 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v201);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v150 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v150, "6", 0);
  v151 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v202 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v202);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v151 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v151, (const char *)&word_708038, 0);
  v152 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v203 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v203);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v152 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v152, (const char *)&word_70803C, 0);
  v153 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v204 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v204);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v153 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v153, "15", 0);
  v154 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v205 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v205);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v154 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v154, "40", 0);
  v155 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v206 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v206);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v155 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v155, "42", 0);
  v156 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v207 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v207);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v156 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v156, (const char *)&word_708028, 0);
  v157 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v208 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v208);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v157 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v157, (const char *)&word_708048, 0);
  v158 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v209 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v209);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v158 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v158, (const char *)&word_708050, 0);
  v159 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v210 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v210);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v159 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v159, (const char *)&word_708030, 0);
  v160 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v211 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v211);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v160 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v160, (const char *)&word_7231BC, 0);
  v161 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v212 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v212);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v161 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v161, "13", 0);
  v162 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v213 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v213);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v162 = qword_905FE0;
  }
  GameStatsManager_incrementStat(v162, "41", 0);
LABEL_203:
  if ( v76 >= 23 )
  {
    if ( v76 >= 25 )
    {
      if ( v76 >= 28 )
        goto LABEL_223;
      goto LABEL_208;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 704) = 1065353216;
    *(_DWORD *)(a1 + 708) = 1065353216;
    LOBYTE(v133) = 1;
    sub_27ACB0(a1, "0026", v133);
    LOBYTE(v163) = 1;
    sub_27ACB0(a1, "0027", v163);
  }
  BoolForKey = DS_Dictionary::getBoolForKey(a2, "gameCenterEnabled");
  sub_27ACB0(a1, "0034", BoolForKey);
LABEL_208:
  LOBYTE(v133) = 1;
  sub_27ACB0(a1, "0038", v133);
  LOBYTE(v165) = 1;
  sub_27ACB0(a1, "0043", v165);
  LOBYTE(v166) = 1;
  sub_27ACB0(a1, "0046", v166);
  LOBYTE(v167) = 1;
  sub_27ACB0(a1, "0044", v167);
  LOBYTE(v168) = 1;
  sub_27ACB0(a1, "0036", v168);
  if ( *(_DWORD *)(a1 + 880) == 2 )
    *(_BYTE *)(a1 + 944) = 1;
  v169 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v214 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v214);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v169 = *(_QWORD *)&qword_905FB0;
  }
  v170 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v215 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v215);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v170 = qword_905FE0;
  }
  v171 = GameLevelManager_getMainLevel(v169, 0xEu, 0);
  sub_2DCF40(v170, v171);
  v172 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v216 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v216);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v172 = *(_QWORD *)&qword_905FB0;
  }
  v173 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v217 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v217);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v173 = qword_905FE0;
  }
  v174 = GameLevelManager_getMainLevel(v172, 0x12u, 0);
  sub_2DCF40(v173, v174);
  v175 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v218 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v218);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v175 = *(_QWORD *)&qword_905FB0;
  }
  v176 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v219 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v219);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v176 = qword_905FE0;
  }
  v177 = GameLevelManager_getMainLevel(v175, 0x14u, 0);
  sub_2DCF40(v176, v177);
  *(_BYTE *)(a1 + 955) = 0;
LABEL_223:
  if ( v76 < 51 )
    *(_BYTE *)(a1 + 955) = 0;
  if ( v76 < 29 )
  {
    if ( !*(_BYTE *)(a1 + 512) )
    {
      if ( !qword_905FE0 )
      {
        v220 = operator new(0x3E8u);
        qword_905FE0 = sub_2D2B40(v220);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      }
      sub_2DFC10();
    }
    goto LABEL_231;
  }
  if ( v76 < 38 )
  {
LABEL_231:
    sub_27ACB0(a1, "0012", 0);
    sub_27ACB0(a1, "0016", 0);
    sub_27B1C0(a1, "28", 0);
    sub_27B1C0(a1, &word_755560, 0);
    sub_27ACB0(a1, "0023", 0);
    LOBYTE(v178) = 1;
    sub_27ACB0(a1, "0118", v178);
    LOBYTE(v179) = 1;
    sub_27ACB0(a1, "0117", v179);
    LOBYTE(v180) = 1;
    sub_27ACB0(a1, "0158", v180);
    LOBYTE(v181) = 1;
    sub_27ACB0(a1, "0121", v181);
    LOBYTE(v182) = 1;
    sub_27ACB0(a1, "0037", v182);
    goto LABEL_233;
  }
  if ( v76 < 41 )
  {
LABEL_233:
    if ( !*(_BYTE *)(a1 + 512) )
    {
      *(_DWORD *)(a1 + 1760) = 1065353216;
      goto LABEL_236;
    }
    goto LABEL_239;
  }
  if ( v76 < 45 )
  {
LABEL_236:
    if ( !*(_BYTE *)(a1 + 512) )
    {
      *(_OWORD *)Src = 0;
      v224.m128_u64[0] = 0;
      v224.m128_u64[1] = 15;
      LOBYTE(Src[0]) = 0;
      GameManager_recountUserStats(a1, Src);
    }
    goto LABEL_239;
  }
  if ( v76 >= 49 )
  {
    if ( v76 >= 50 )
      goto LABEL_242;
    goto LABEL_241;
  }
LABEL_239:
  LOBYTE(v133) = 1;
  sub_27ACB0(a1, "0184", v133);
LABEL_241:
  LOBYTE(v133) = 1;
  sub_27ACB0(a1, "0200", v133);
  LOBYTE(v183) = 1;
  sub_27ACB0(a1, "0202", v183);
LABEL_242:
  isctype_l(v132, v131, v133);
  *(_BYTE *)(AchievementManager_sharedState() + 360) = 0;
  *(_OWORD *)Src = 0;
  v224.m128_u64[0] = 3;
  v224.m128_u64[1] = 15;
  LODWORD(Src[0]) = 6256231;
  sub_43D80(Src, "0049", 4u);
  v184 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(a1 + 432), Src);
  v185 = cocos2d::CCString::intValue(v184);
  if ( v224.m128_u64[1] > 0xF )
  {
    v186 = Src[0];
    if ( v224.m128_u64[1] + 1 >= 0x1000 )
    {
      v186 = (void *)*((_QWORD *)Src[0] - 1);
      if ( (unsigned __int64)((char *)Src[0] - (char *)v186 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v186);
  }
  if ( v185 < 6 )
  {
    *(_OWORD *)Src = 0;
    v224.m128_u64[0] = 3;
    v224.m128_u64[1] = 15;
    LODWORD(Src[0]) = 6256231;
    sub_43D80(Src, "0049", 4u);
    v187 = *(_QWORD *)(a1 + 432);
    v188 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 6);
    cocos2d::CCDictionary::setObject(v187, v188, Src);
    if ( v224.m128_u64[1] > 0xF )
    {
      v189 = Src[0];
      if ( v224.m128_u64[1] + 1 >= 0x1000 )
      {
        v189 = (void *)*((_QWORD *)Src[0] - 1);
        if ( (unsigned __int64)((char *)Src[0] - (char *)v189 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v189);
    }
  }
  *(_OWORD *)Src = 0;
  v224.m128_u64[0] = 3;
  v224.m128_u64[1] = 15;
  LODWORD(Src[0]) = 6256231;
  sub_43D80(Src, "0050", 4u);
  v190 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(a1 + 432), Src);
  v191 = cocos2d::CCString::intValue(v190);
  if ( v224.m128_u64[1] > 0xF )
  {
    v192 = Src[0];
    if ( v224.m128_u64[1] + 1 >= 0x1000 )
    {
      v192 = (void *)*((_QWORD *)Src[0] - 1);
      if ( (unsigned __int64)((char *)Src[0] - (char *)v192 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v192);
  }
  if ( v191 < 2 )
  {
    *(_OWORD *)Src = 0;
    v224.m128_u64[0] = 3;
    v224.m128_u64[1] = 15;
    LODWORD(Src[0]) = 6256231;
    sub_43D80(Src, "0050", 4u);
    v193 = *(_QWORD *)(a1 + 432);
    v194 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 2);
    cocos2d::CCDictionary::setObject(v193, v194, Src);
    if ( v224.m128_u64[1] > 0xF )
    {
      v195 = Src[0];
      if ( v224.m128_u64[1] + 1 >= 0x1000 )
      {
        v195 = (void *)*((_QWORD *)Src[0] - 1);
        if ( (unsigned __int64)((char *)Src[0] - (char *)v195 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v195);
    }
  }
  *(_BYTE *)(a1 + 512) = 1;
}

// Address: 0x281710
// Method: GameManager::firstLoad
// Hidden C++ exception states: #wind=9
void __fastcall GameManager_firstLoad(__int64 a1)
{
  __int64 v2; // r8
  cocos2d::CCDictionary *v3; // r12
  int i; // esi
  cocos2d::CCString *v5; // rax
  const char *CString; // rbx
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // r8
  cocos2d::CCString *v10; // rax
  const char *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  char v16; // r13
  cocos2d::CCObject *v17; // rax
  cocos2d::CCObject *v18; // rbx
  cocos2d::CCObject *v19; // rcx
  cocos2d::CCObject *v20; // rax
  cocos2d::CCObject *v21; // rbx
  cocos2d::CCObject *v22; // rcx
  cocos2d::CCObject *v23; // rax
  cocos2d::CCObject *v24; // rbx
  cocos2d::CCObject *v25; // rcx
  cocos2d::CCObject *v26; // rax
  cocos2d::CCObject *v27; // rbx
  cocos2d::CCObject *v28; // rcx
  __int64 UniqueUserID; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rsi
  cocos2d::CCObject *v37; // rax
  cocos2d::CCObject *v38; // rbx
  cocos2d::CCObject *v39; // rcx
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rbx
  cocos2d::CCObject *v43; // rax
  cocos2d::CCObject *v44; // rsi
  cocos2d::CCObject *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rbx
  _QWORD *v48; // rax
  cocos2d::CCArray *v49; // rcx
  cocos2d::CCArray *v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // rbx
  struct cocos2d::CCString *v61; // rax
  void *v62; // rcx
  __int64 v63; // rbx
  struct cocos2d::CCString *v64; // rax
  __int64 v65; // r8
  void *v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  cocos2d::CCArray *v78; // r15
  unsigned int j; // r14d
  cocos2d::CCString *v80; // rax
  const char *v81; // rax
  const char *v82; // rsi
  __int64 v83; // r8
  cocos2d::CCString *v84; // rax
  unsigned int v85; // ebx
  void *v86; // [rsp+30h] [rbp-29h]
  void *v87; // [rsp+30h] [rbp-29h]
  void *v88; // [rsp+30h] [rbp-29h]
  void *v89; // [rsp+30h] [rbp-29h]
  void *v90; // [rsp+30h] [rbp-29h]
  void *v91; // [rsp+30h] [rbp-29h]
  __int128 Src; // [rsp+38h] [rbp-21h] BYREF
  __int64 v93; // [rsp+48h] [rbp-11h]
  unsigned __int64 v94; // [rsp+50h] [rbp-9h]
  __int128 v95; // [rsp+58h] [rbp-1h] BYREF
  __int64 v96; // [rsp+68h] [rbp+Fh]
  unsigned __int64 v97; // [rsp+70h] [rbp+17h]

  *(_QWORD *)(a1 + 728) = 0;
  *(_DWORD *)(a1 + 718) = 0;
  *(_BYTE *)(a1 + 717) = 0;
  *(_WORD *)(a1 + 722) = 0;
  UIButtonConfig_reset(a1 + 1308);
  UIButtonConfig_reset(a1 + 1348);
  UIButtonConfig_reset(a1 + 1388);
  sub_272300(a1 + 1428);
  sub_272300(a1 + 1468);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 1058) && *(_QWORD *)(a1 + 432) )
  {
    v3 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create();
    for ( i = 1; i <= 246; ++i )
    {
      v5 = cocos2d::CCString::createWithFormat("%04i", i);
      CString = cocos2d::CCString::getCString(v5);
      v7 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v86 = operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v86);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v7 = qword_905FD0;
      }
      v8 = sub_27B600(v7, CString);
      if ( v8 > 0 )
      {
        v95 = 0;
        v96 = 0;
        v97 = 0;
        v9 = -1;
        do
          ++v9;
        while ( CString[v9] );
        sub_3C230(&v95);
        v10 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v8);
        v11 = cocos2d::CCString::getCString(v10);
        Src = 0;
        v93 = 0;
        v94 = 0;
        v12 = -1;
        do
          ++v12;
        while ( v11[v12] );
        sub_3C230(&Src);
        v13 = cocos2d::CCString::create(&Src);
        cocos2d::CCDictionary::setObject(v3, v13, &v95);
        if ( v94 > 0xF )
        {
          v14 = (void *)Src;
          if ( v94 + 1 >= 0x1000 )
          {
            v14 = *(void **)(Src - 8);
            if ( (unsigned __int64)(Src - (_QWORD)v14 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v14);
        }
        v93 = 0;
        v94 = 15;
        LOBYTE(Src) = 0;
        if ( v97 > 0xF )
        {
          v15 = (void *)v95;
          if ( v97 + 1 >= 0x1000 )
          {
            v15 = *(void **)(v95 - 8);
            if ( (unsigned __int64)(v95 - (_QWORD)v15 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v15);
        }
      }
    }
  }
  v16 = 0;
  if ( *(_BYTE *)(a1 + 1058) && *(_QWORD *)(a1 + 456) )
    v16 = sub_27B350(a1, &word_755548, v2);
  v17 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
  v18 = v17;
  if ( *(cocos2d::CCObject **)(a1 + 432) != v17 )
  {
    if ( v17 )
      cocos2d::CCObject::retain(v17);
    v19 = *(cocos2d::CCObject **)(a1 + 432);
    if ( v19 )
      cocos2d::CCObject::release(v19);
    *(_QWORD *)(a1 + 432) = v18;
  }
  v20 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
  v21 = v20;
  if ( *(cocos2d::CCObject **)(a1 + 440) != v20 )
  {
    if ( v20 )
      cocos2d::CCObject::retain(v20);
    v22 = *(cocos2d::CCObject **)(a1 + 440);
    if ( v22 )
      cocos2d::CCObject::release(v22);
    *(_QWORD *)(a1 + 440) = v21;
  }
  v23 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
  v24 = v23;
  if ( *(cocos2d::CCObject **)(a1 + 456) != v23 )
  {
    if ( v23 )
      cocos2d::CCObject::retain(v23);
    v25 = *(cocos2d::CCObject **)(a1 + 456);
    if ( v25 )
      cocos2d::CCObject::release(v25);
    *(_QWORD *)(a1 + 456) = v24;
  }
  if ( !*(_QWORD *)(a1 + 464) )
  {
    v26 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
    v27 = v26;
    if ( *(cocos2d::CCObject **)(a1 + 464) != v26 )
    {
      if ( v26 )
        cocos2d::CCObject::retain(v26);
      v28 = *(cocos2d::CCObject **)(a1 + 464);
      if ( v28 )
        cocos2d::CCObject::release(v28);
      *(_QWORD *)(a1 + 464) = v27;
    }
  }
  if ( !*(_BYTE *)(a1 + 1058) )
  {
    UniqueUserID = PlatformToolbox_getUniqueUserID((__int64)&v95);
    sub_58AD0(a1 + 624, UniqueUserID);
    sub_3C310(&v95);
  }
  sub_3F5A0((void *)(a1 + 656), "Player", 6u);
  *(_DWORD *)(a1 + 700) = 0;
  v30 = (int)(float)((float)((float)rand() / 32767.0) * 1000.0);
  *(_DWORD *)(a1 + 696) = v30;
  *(_DWORD *)(a1 + 692) = v30;
  *(_DWORD *)(a1 + 1072) = 0;
  v31 = (int)(float)((float)((float)rand() / 32767.0) * 1000.0);
  *(_DWORD *)(a1 + 1068) = v31;
  *(_DWORD *)(a1 + 1064) = v31;
  *(_BYTE *)(a1 + 1076) = 0;
  *(_DWORD *)(a1 + 1080) = 0;
  if ( !*(_BYTE *)(a1 + 1058) )
  {
    *(_WORD *)(a1 + 616) = 257;
    *(_BYTE *)(a1 + 618) = 1;
  }
  GameManager_resetAllIcons(a1);
  if ( !*(_BYTE *)(a1 + 1058) )
  {
    v32 = qword_905F60;
    if ( !qword_905F60 )
    {
      v87 = operator new(0x8A8u);
      qword_905F60 = sub_5AE20(v87);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
      v32 = qword_905F60;
    }
    *(_DWORD *)(v32 + 524) = 0;
    *(_DWORD *)(v32 + 512) = 1065353216;
    v33 = *(_QWORD *)(v32 + 552);
    if ( v33 )
    {
      FMOD::ChannelControl::setVolume(v33);
      v32 = qword_905F60;
    }
    if ( !v32 )
    {
      v88 = operator new(0x8A8u);
      qword_905F60 = sub_5AE20(v88);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
      v32 = qword_905F60;
    }
    *(_DWORD *)(v32 + 516) = 1065353216;
    v34 = *(_QWORD *)(v32 + 584);
    if ( v34 )
      FMOD::ChannelControl::setVolume(v34);
    v35 = *(_QWORD *)(v32 + 600);
    if ( v35 )
      FMOD::ChannelControl::setVolume(v35);
  }
  v36 = AchievementManager_sharedState();
  v37 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
  v38 = v37;
  if ( *(cocos2d::CCObject **)(v36 + 352) != v37 )
  {
    if ( v37 )
      cocos2d::CCObject::retain(v37);
    v39 = *(cocos2d::CCObject **)(v36 + 352);
    if ( v39 )
      cocos2d::CCObject::release(v39);
    *(_QWORD *)(v36 + 352) = v38;
  }
  v40 = *(_QWORD **)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v89 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v89);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v40 = *(_QWORD **)&qword_905FB0;
  }
  GameLevelManager_firstSetup(v40);
  v41 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v90 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v90);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v41 = qword_905FE0;
  }
  GameStatsManager_firstSetup(v41);
  v42 = qword_906070;
  if ( !qword_906070 )
  {
    v91 = operator new(0x3D0u);
    qword_906070 = sub_47C350(v91);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v42 = qword_906070;
  }
  if ( !*(_QWORD *)(v42 + 344) )
  {
    v43 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
    v44 = v43;
    if ( *(cocos2d::CCObject **)(v42 + 344) != v43 )
    {
      if ( v43 )
        cocos2d::CCObject::retain(v43);
      v45 = *(cocos2d::CCObject **)(v42 + 344);
      if ( v45 )
        cocos2d::CCObject::release(v45);
      *(_QWORD *)(v42 + 344) = v44;
    }
  }
  *(_DWORD *)(v42 + 360) = 0;
  GJAccountManager_sharedState();
  GJMultiplayerManager_sharedState();
  v47 = sub_182B60(v46);
  sub_1837B0(v47);
  v48 = (_QWORD *)(v47 + 232);
  *(_QWORD *)(v47 + 248) = 0;
  if ( *(_QWORD *)(v47 + 256) > 0xFu )
    v48 = (_QWORD *)*v48;
  *(_BYTE *)v48 = 0;
  v49 = *(cocos2d::CCArray **)(v47 + 208);
  if ( v49 )
    cocos2d::CCArray::removeAllObjects(v49);
  v50 = *(cocos2d::CCArray **)(v47 + 216);
  if ( v50 )
    cocos2d::CCArray::removeAllObjects(v50);
  *(_DWORD *)(v47 + 224) = 1;
  sub_654A0(v47 + 64);
  sub_3DB60(v47 + 128);
  *(_DWORD *)(v47 + 264) = 1065353216;
  if ( *(_BYTE *)(a1 + 1058) )
  {
    if ( v3 )
    {
      v78 = cocos2d::CCDictionary::allKeys(v3);
      for ( j = 0; j < cocos2d::CCArray::count(v78); ++j )
      {
        v80 = cocos2d::CCArray::stringAtIndex(v78, j);
        v81 = cocos2d::CCString::getCString(v80);
        v82 = v81;
        v95 = 0;
        v96 = 0;
        v97 = 0;
        v83 = -1;
        do
          ++v83;
        while ( v81[v83] );
        sub_3C230(&v95);
        v84 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v3, &v95);
        v85 = cocos2d::CCString::intValue(v84);
        sub_3C310(&v95);
        sub_27B4F0(a1, v82, v85);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1088) = -1;
    *(_WORD *)(a1 + 953) = 1;
    *(_WORD *)(a1 + 956) = 0;
    *(_BYTE *)(a1 + 431) = 1;
    *(_WORD *)(a1 + 964) = 0;
    *(_BYTE *)(a1 + 966) = 0;
    *(_BYTE *)(a1 + 955) = 0;
    LOBYTE(v51) = 1;
    sub_27ACB0(a1, "0002", v51);
    LOBYTE(v52) = 1;
    sub_27ACB0(a1, "0001", v52);
    LOBYTE(v53) = 1;
    sub_27ACB0(a1, "0026", v53);
    LOBYTE(v54) = 1;
    sub_27ACB0(a1, "0027", v54);
    LOBYTE(v55) = 1;
    sub_27ACB0(a1, "0200", v55);
    LOBYTE(v56) = 1;
    sub_27ACB0(a1, "0202", v56);
    LOBYTE(v57) = 1;
    sub_27ACB0(a1, "0038", v57);
    LOBYTE(v58) = 1;
    sub_27ACB0(a1, "0043", v58);
    LOBYTE(v59) = 1;
    sub_27ACB0(a1, "0044", v59);
    Src = 0;
    v93 = 3;
    v94 = 15;
    LODWORD(Src) = 6256231;
    sub_43D80(&Src, "0050", 4u);
    v60 = *(_QWORD *)(a1 + 432);
    v61 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 2);
    cocos2d::CCDictionary::setObject(v60, v61, &Src);
    if ( v94 > 0xF )
    {
      v62 = (void *)Src;
      if ( v94 + 1 >= 0x1000 )
      {
        v62 = *(void **)(Src - 8);
        if ( (unsigned __int64)(Src - (_QWORD)v62 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v62);
    }
    Src = 0;
    v93 = 3;
    v94 = 15;
    LODWORD(Src) = 6256231;
    sub_43D80(&Src, "0049", 4u);
    v63 = *(_QWORD *)(a1 + 432);
    v64 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 6);
    cocos2d::CCDictionary::setObject(v63, v64, &Src);
    if ( v94 > 0xF )
    {
      v66 = (void *)Src;
      if ( v94 + 1 >= 0x1000 )
      {
        v66 = *(void **)(Src - 8);
        if ( (unsigned __int64)(Src - (_QWORD)v66 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v66);
    }
    LOBYTE(v65) = 1;
    sub_27ACB0(a1, "0046", v65);
    LOBYTE(v67) = 1;
    sub_27ACB0(a1, "0044", v67);
    LOBYTE(v68) = 1;
    sub_27ACB0(a1, "0036", v68);
    LOBYTE(v69) = 1;
    sub_27ACB0(a1, "0118", v69);
    LOBYTE(v70) = 1;
    sub_27ACB0(a1, "0117", v70);
    LOBYTE(v71) = 1;
    sub_27ACB0(a1, "0158", v71);
    LOBYTE(v72) = 1;
    sub_27ACB0(a1, "0121", v72);
    LOBYTE(v73) = 1;
    sub_27ACB0(a1, "0037", v73);
    LOBYTE(v74) = 1;
    sub_27ACB0(a1, "0184", v74);
    LOBYTE(v75) = 1;
    sub_27ACB0(a1, "0030", v75);
    LOBYTE(v76) = 1;
    sub_27ACB0(a1, "0013", v76);
    LOBYTE(v77) = 1;
    sub_27ACB0(a1, "0018", v77);
  }
  if ( *(_BYTE *)(a1 + 1058) && v16 )
  {
    LOBYTE(v51) = 1;
    sub_27B1C0(a1, &word_755548, v51);
  }
  *(_BYTE *)(a1 + 512) = 1;
}

// Address: 0x27cd30
// Method: GameManager::recountUserStats
// Hidden C++ exception states: #wind=36
double __fastcall GameManager_recountUserStats(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  const char *v6; // rcx
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // r8
  __int128 *v10; // r9
  __int128 *v11; // r8
  __int64 v12; // rdx
  char *v13; // rdi
  __int64 v14; // r8
  void **v15; // rcx
  unsigned __int64 v16; // rsi
  size_t v17; // r8
  int v18; // ebx
  int v19; // r12d
  int v20; // r15d
  int v21; // r13d
  _QWORD *v22; // rdi
  _QWORD *v23; // rbx
  unsigned int v24; // esi
  __int64 v25; // rcx
  _DWORD *MainLevel; // r14
  int v27; // esi
  __int64 v28; // rcx
  unsigned int v29; // edi
  int v30; // r15d
  _QWORD *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 i; // rsi
  _DWORD *v35; // rbx
  __int64 v36; // rcx
  bool hasCompletedStarLevel; // r14
  int v38; // edx
  __int64 v39; // rcx
  int v40; // edi
  float v41; // xmm0_4
  float v42; // xmm0_4
  __int64 v43; // rcx
  int v44; // ecx
  int v45; // eax
  cocos2d::CCDictionary *v46; // r15
  _BYTE *v47; // r9
  _BYTE *v48; // rcx
  const char *v49; // rdx
  __int64 v50; // r8
  cocos2d::CCArray *v51; // rsi
  void *v52; // rcx
  unsigned int v53; // edi
  cocos2d::CCString *v54; // rax
  __int64 v55; // rbx
  struct cocos2d::CCObject *v56; // rax
  cocos2d::CCArray *v57; // r14
  __int64 v58; // rsi
  cocos2d::CCString *v59; // rax
  int v60; // eax
  signed int v61; // ebx
  __int64 v62; // rcx
  __int64 v63; // rcx
  cocos2d::CCArray *CompletedMapPacks; // r14
  unsigned int j; // ebx
  cocos2d::CCString *v66; // rax
  int v67; // esi
  __int64 v68; // rdi
  cocos2d::CCString *v69; // rax
  const char *v70; // rax
  __int64 v71; // r8
  cocos2d::CCString *v72; // rax
  int v73; // edi
  void *v74; // rcx
  __int64 v75; // rcx
  int v76; // edi
  int k; // ebx
  cocos2d::CCString *v78; // rax
  const char *v79; // rax
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rcx
  int m; // ebx
  cocos2d::CCString *v84; // rax
  const char *v85; // rax
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rcx
  int n; // ebx
  cocos2d::CCString *v90; // rax
  const char *v91; // rax
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 v94; // rcx
  cocos2d::CCString *v95; // rax
  const char *v96; // rax
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rax
  char v106; // [rsp+30h] [rbp-D0h]
  char v107; // [rsp+31h] [rbp-CFh]
  unsigned int v108; // [rsp+34h] [rbp-CCh]
  int v109; // [rsp+38h] [rbp-C8h]
  int v110; // [rsp+3Ch] [rbp-C4h]
  int v111; // [rsp+40h] [rbp-C0h]
  void *v112; // [rsp+40h] [rbp-C0h]
  void *v113; // [rsp+48h] [rbp-B8h] BYREF
  void *v114; // [rsp+50h] [rbp-B0h]
  int v115; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v116[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v117; // [rsp+78h] [rbp-88h] BYREF
  __int128 v118; // [rsp+80h] [rbp-80h]
  __int64 v119; // [rsp+90h] [rbp-70h]
  __int64 v120; // [rsp+98h] [rbp-68h]
  __int64 v121; // [rsp+A0h] [rbp-60h]
  __int64 v122; // [rsp+A8h] [rbp-58h]
  void *v123; // [rsp+B0h] [rbp-50h]
  void *v124; // [rsp+B8h] [rbp-48h]
  void *v125; // [rsp+C0h] [rbp-40h]
  _BYTE v126[8]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v127; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v128[40]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v129; // [rsp+110h] [rbp+10h]
  void *Buf1[2]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v131; // [rsp+128h] [rbp+28h]
  unsigned __int64 v132; // [rsp+130h] [rbp+30h]
  __int128 v133; // [rsp+140h] [rbp+40h] BYREF
  __int64 v134; // [rsp+150h] [rbp+50h]
  __int64 v135; // [rsp+158h] [rbp+58h]
  __int128 v136; // [rsp+160h] [rbp+60h] BYREF
  __int64 v137; // [rsp+170h] [rbp+70h]
  unsigned __int64 v138; // [rsp+178h] [rbp+78h]
  _QWORD v139[4]; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v140[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v141; // [rsp+240h] [rbp+140h]
  int v142; // [rsp+244h] [rbp+144h]
  int v143; // [rsp+248h] [rbp+148h]
  char v144; // [rsp+24Ch] [rbp+14Ch] BYREF
  _BYTE v145[48]; // [rsp+250h] [rbp+150h] BYREF

  v122 = a2;
  v121 = a1;
  v129 = a2;
  v107 = *(_BYTE *)(AchievementManager_sharedState() + 360);
  *(_BYTE *)(AchievementManager_sharedState() + 360) = 1;
  v3 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v113 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v113);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v3 = qword_905FE0;
  }
  v106 = *(_BYTE *)(v3 + 912);
  *(_BYTE *)(v3 + 912) = 1;
  v116[1] = 0;
  v4 = operator new(0x18u);
  *v4 = v4;
  v4[1] = v4;
  v116[0] = v4;
  v117 = 0;
  v118 = 0;
  v119 = 7;
  v120 = 8;
  v115 = 1065353216;
  sub_3E200(&v117, 16, v4);
  v5 = cocos2d::CCFileUtils::sharedFileUtils();
  (*(void (__fastcall **)(__int64, _QWORD *, const char *, _QWORD))(*(_QWORD *)v5 + 40LL))(
    v5,
    v139,
    "LevelStats.dat",
    0);
  v6 = (const char *)v139;
  if ( v139[3] > 0xFu )
    v6 = (const char *)v139[0];
  v7 = cocos2d::CCString::createWithContentsOfFile(v6);
  CString = cocos2d::CCString::getCString(v7);
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v9 = -1;
  do
    ++v9;
  while ( CString[v9] );
  sub_3C230(&v136);
  if ( v137 )
  {
    v10 = &v136;
    if ( v138 > 0xF )
      v10 = (__int128 *)v136;
    v11 = &v136;
    if ( v138 > 0xF )
      v11 = (__int128 *)v136;
    v12 = -1;
    do
      ++v12;
    while ( *((_BYTE *)v11 + v12) );
    sub_7D030(v10, v12, Buf1);
    sub_7D300(Buf1, v145);
    v133 = 0;
    v13 = (char *)sub_3C460(48);
    *(_QWORD *)&v133 = v13;
    v134 = 40;
    v135 = 47;
    strcpy(v13, "2dc0e75c5070651ccb072bd2fe938607ea7e4ab9");
    *(_OWORD *)Buf1 = 0;
    v131 = 0;
    v132 = 0;
    v14 = -1;
    do
      ++v14;
    while ( v145[v14] );
    sub_3C230(Buf1);
    v15 = Buf1;
    if ( v132 > 0xF )
      v15 = (void **)Buf1[0];
    v16 = v131;
    v17 = v131;
    if ( v131 > 0x28 )
      v17 = 40;
    v18 = memcmp(v15, v13, v17);
    if ( !v18 )
    {
      if ( v16 >= 0x28 )
        v18 = v16 > 0x28;
      else
        v18 = -1;
    }
    sub_3C310(Buf1);
    j_j_free(v13);
    if ( !v18 )
      sub_27CBD0(&v115, &v136);
  }
  if ( *(_QWORD *)(a2 + 16) )
    sub_27CBD0(&v115, a2);
  v19 = 0;
  v108 = 0;
  v20 = 0;
  v109 = 0;
  v21 = 0;
  v111 = 0;
  v110 = 0;
  v140[0] = _mm_load_si128((const __m128i *)&xmmword_831160);
  v140[1] = _mm_load_si128((const __m128i *)&xmmword_8311A0);
  v140[2] = _mm_load_si128((const __m128i *)&xmmword_8311D0);
  v140[3] = _mm_load_si128((const __m128i *)&xmmword_8311E0);
  v140[4] = _mm_load_si128((const __m128i *)&xmmword_8311F0);
  v140[5] = _mm_load_si128((const __m128i *)&xmmword_831200);
  v140[6] = _mm_load_si128((const __m128i *)&xmmword_831210);
  v140[7] = _mm_load_si128((const __m128i *)&xmmword_831220);
  v140[8] = _mm_load_si128((const __m128i *)&xmmword_831230);
  v140[9] = _mm_load_si128((const __m128i *)&xmmword_831240);
  v141 = 5002;
  v142 = 5003;
  v143 = 5004;
  *(_QWORD *)&v133 = v140;
  *((_QWORD *)&v133 + 1) = &v144;
  sub_3891D0(v126, &v133);
  v22 = v127;
  v23 = (_QWORD *)*v127;
  if ( (_QWORD *)*v127 != v127 )
  {
    do
    {
      v24 = *((_DWORD *)v23 + 4);
      v25 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v113 = operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v113);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v25 = *(_QWORD *)&qword_905FB0;
      }
      MainLevel = (_DWORD *)GameLevelManager_getMainLevel(v25, v24, 1u);
      v27 = MainLevel[255] - MainLevel[256];
      if ( v27 >= 20 )
      {
        v27 = 20;
      }
      else if ( v27 < 0 )
      {
        v27 = 0;
      }
      v28 = qword_905FE0;
      if ( !qword_905FE0 )
      {
        v112 = operator new(0x3E8u);
        qword_905FE0 = sub_2D2B40(v112);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
        v28 = qword_905FE0;
      }
      if ( GameStatsManager_hasCompletedStarLevel(v28, (__int64)MainLevel) )
      {
        if ( MainLevel[243] == 5 )
          v108 += v27;
        else
          v19 += v27;
        if ( MainLevel[251] - MainLevel[252] == 1 )
          ++v20;
        if ( MainLevel[168] == 5 )
          ++v21;
      }
      v23 = (_QWORD *)*v23;
    }
    while ( v23 != v22 );
    v109 = v20;
    v111 = v21;
  }
  v29 = 0;
  v30 = 0;
  v31 = *(_QWORD **)&qword_905FB0;
  do
  {
    if ( v30 )
    {
      if ( v30 == 1 )
      {
        if ( !v31 )
        {
          v124 = operator new(0x690u);
          *(_QWORD *)&qword_905FB0 = sub_214250(v124);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
          v31 = *(_QWORD **)&qword_905FB0;
        }
        v32 = v31[118];
      }
      else
      {
        if ( v30 != 2 )
          goto LABEL_101;
        if ( !v31 )
        {
          v123 = operator new(0x690u);
          *(_QWORD *)&qword_905FB0 = sub_214250(v123);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
          v31 = *(_QWORD **)&qword_905FB0;
        }
        v32 = v31[129];
      }
    }
    else
    {
      if ( !v31 )
      {
        v125 = operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v125);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v31 = *(_QWORD **)&qword_905FB0;
      }
      v32 = v31[107];
    }
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 56);
      if ( v33 )
      {
        for ( i = *(_QWORD *)(v33 + 288); ; i = *(_QWORD *)(i + 288) )
        {
          v35 = *(_DWORD **)(v33 + 264);
          v36 = qword_905FE0;
          if ( !qword_905FE0 )
          {
            v114 = operator new(0x3E8u);
            qword_905FE0 = sub_2D2B40(v114);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
            v36 = qword_905FE0;
          }
          hasCompletedStarLevel = GameStatsManager_hasCompletedStarLevel(v36, (__int64)v35);
          if ( v35[255] - v35[256] <= 0 )
            break;
LABEL_78:
          if ( hasCompletedStarLevel && v35[255] - v35[256] > 0 )
          {
            v43 = qword_905FE0;
            if ( !qword_905FE0 )
            {
              *(_QWORD *)&v133 = operator new(0x3E8u);
              qword_905FE0 = sub_2D2B40(v133);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
              v43 = qword_905FE0;
            }
            sub_2DE860(v43, v35);
            v44 = v35[255] - v35[256];
            if ( v44 >= 10 )
            {
              v45 = 10;
            }
            else
            {
              v45 = v35[255] - v35[256];
              if ( v44 < 0 )
                v45 = 0;
            }
            if ( v35[243] == 5 )
              v108 += v45;
            else
              v19 += v45;
            if ( v35[251] - v35[252] == 1 )
              ++v109;
            if ( (unsigned int)(v44 - 8) <= 1 )
              ++v21;
            if ( v30 == 1 && v35[248] - v35[249] > 0 && v35[248] - v35[249] <= 100000 )
              ++v110;
          }
          v33 = i;
          if ( !i )
          {
            v111 = v21;
            v31 = *(_QWORD **)&qword_905FB0;
            goto LABEL_101;
          }
        }
        v38 = v35[82] - v35[83];
        v39 = *(_QWORD *)(v117
                        + 16
                        * (v119
                         & (0x100000001B3LL
                          * (HIBYTE(v38)
                           ^ (0x100000001B3LL
                            * (BYTE2(v38)
                             ^ (0x100000001B3LL
                              * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v35 + 164) - *((_WORD *)v35 + 166)) >> 8)
                               ^ (0x100000001B3LL
                                * ((unsigned __int8)(*((_BYTE *)v35 + 328) - *((_BYTE *)v35 + 332))
                                 ^ 0xCBF29CE484222325uLL)))))))))
                        + 8);
        if ( v39 != v116[0] )
        {
          if ( v38 == *(_DWORD *)(v39 + 16) )
            goto LABEL_73;
          while ( v39 != *(_QWORD *)(v117
                                   + 16
                                   * (v119
                                    & (0x100000001B3LL
                                     * (((unsigned int)(v35[82] - v35[83]) >> 24)
                                      ^ (0x100000001B3LL
                                       * ((unsigned __int8)((unsigned int)(v35[82] - v35[83]) >> 16)
                                        ^ (0x100000001B3LL
                                         * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v35 + 164)
                                                                               - *((_WORD *)v35 + 166)) >> 8)
                                          ^ (0x100000001B3LL
                                           * ((unsigned __int8)(*((_BYTE *)v35 + 328) - *((_BYTE *)v35 + 332))
                                            ^ 0xCBF29CE484222325uLL)))))))))) )
          {
            v39 = *(_QWORD *)(v39 + 8);
            if ( v38 == *(_DWORD *)(v39 + 16) )
              goto LABEL_73;
          }
        }
        v39 = 0;
LABEL_73:
        if ( v39 )
        {
          LODWORD(v113) = v35[82] - v35[83];
          v40 = *(_DWORD *)(*(_QWORD *)sub_271330(&v115, Buf1, &v113) + 20LL);
          if ( (unsigned int)(v40 - 1) <= 9 )
          {
            v35[257] = v40;
            v41 = (float)((float)rand() / 32767.0) * 1000.0;
            v35[256] = (int)v41;
            v35[255] = v40 + (int)v41;
            if ( v40 == 10 )
            {
              v35[253] = 1;
              v42 = (float)((float)rand() / 32767.0) * 1000.0;
              v35[252] = (int)v42;
              v35[251] = (int)v42 + 1;
            }
          }
          v29 = 0;
        }
        goto LABEL_78;
      }
    }
LABEL_101:
    ++v30;
  }
  while ( v30 < 3 );
  v46 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(v31);
  *(_OWORD *)Buf1 = 0;
  v131 = 0;
  v132 = 0;
  v47 = (_BYTE *)sub_3C460(288);
  Buf1[0] = v47;
  v131 = 279;
  v132 = 287;
  v48 = v47;
  v49 = "1,3,2,4,3,4,5,5,6,6,7,6,8,7,9,8,10,8,11,9,19,10,20,10,21,10,22,10,26,10,27,10,28,10,29,10,30,10,31,10,32,4,33,5,"
        "34,6,35,8,36,8,37,5,38,5,39,6,40,7,41,8,42,8,43,8,44,9,45,6,46,10,47,10,48,10,49,10,50,10,52,4,53,3,54,4,55,4,56"
        ",5,57,6,58,7,59,8,60,8,61,8,62,9,63,9,64,10,65,10,66,10";
  v50 = 2;
  do
  {
    *(_OWORD *)v48 = *(_OWORD *)v49;
    *((_OWORD *)v48 + 1) = *((_OWORD *)v49 + 1);
    *((_OWORD *)v48 + 2) = *((_OWORD *)v49 + 2);
    *((_OWORD *)v48 + 3) = *((_OWORD *)v49 + 3);
    *((_OWORD *)v48 + 4) = *((_OWORD *)v49 + 4);
    *((_OWORD *)v48 + 5) = *((_OWORD *)v49 + 5);
    *((_OWORD *)v48 + 6) = *((_OWORD *)v49 + 6);
    v48 += 128;
    *((_OWORD *)v48 - 1) = *((_OWORD *)v49 + 7);
    v49 += 128;
    --v50;
  }
  while ( v50 );
  *(_OWORD *)v48 = *(_OWORD *)v49;
  *((_DWORD *)v48 + 4) = *((_DWORD *)v49 + 4);
  *((_WORD *)v48 + 10) = *((_WORD *)v49 + 10);
  v48[22] = v49[22];
  v47[279] = 0;
  v51 = (cocos2d::CCArray *)sub_6B0D0(Buf1);
  if ( v132 > 0xF )
  {
    v52 = Buf1[0];
    if ( v132 + 1 >= 0x1000 )
    {
      v52 = (void *)*((_QWORD *)Buf1[0] - 1);
      if ( (unsigned __int64)((char *)Buf1[0] - (char *)v52 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v52);
  }
  v131 = 0;
  v132 = 15;
  LOBYTE(Buf1[0]) = 0;
  if ( cocos2d::CCArray::count(v51) > 1 )
  {
    v53 = 1;
    do
    {
      v54 = cocos2d::CCArray::stringAtIndex(v51, v53 - 1);
      v55 = (int)cocos2d::CCString::intValue(v54);
      v56 = cocos2d::CCArray::stringAtIndex(v51, v53);
      cocos2d::CCDictionary::setObject(v46, v56, v55);
      v53 += 2;
    }
    while ( v53 < cocos2d::CCArray::count(v51) );
    v29 = 0;
  }
  v57 = cocos2d::CCDictionary::allKeys(v46);
  if ( cocos2d::CCArray::count(v57) )
  {
    do
    {
      v58 = *((int *)cocos2d::CCArray::objectAtIndex(v57, v29) + 14);
      v59 = cocos2d::CCDictionary::valueForKey(v46, v58);
      v60 = cocos2d::CCString::intValue(v59);
      v61 = 10;
      if ( v60 < 10 )
        v61 = v60;
      if ( v61 < 0 )
        v61 = 0;
      v62 = qword_905FE0;
      if ( !qword_905FE0 )
      {
        *(_QWORD *)&v133 = operator new(0x3E8u);
        qword_905FE0 = sub_2D2B40(v133);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
        v62 = qword_905FE0;
      }
      GameStatsManager_setStarsForMapPack(v62, v58, v61);
      ++v29;
    }
    while ( v29 < cocos2d::CCArray::count(v57) );
    v21 = v111;
  }
  v63 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v63 = qword_905FE0;
  }
  CompletedMapPacks = GameStatsManager_getCompletedMapPacks(v63);
  for ( j = 0; j < cocos2d::CCArray::count(CompletedMapPacks); ++j )
  {
    v66 = cocos2d::CCArray::stringAtIndex(CompletedMapPacks, j);
    v67 = cocos2d::CCString::intValue(v66);
    v68 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      *(_QWORD *)&v133 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v133);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v68 = qword_905FE0;
    }
    v69 = cocos2d::CCString::createWithFormat("pack_%i", v67);
    v70 = cocos2d::CCString::getCString(v69);
    *(_OWORD *)Buf1 = 0;
    v131 = 0;
    v132 = 0;
    v71 = -1;
    do
      ++v71;
    while ( v70[v71] );
    sub_3C230(Buf1);
    v72 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v68 + 824), Buf1);
    v73 = cocos2d::CCString::intValue(v72);
    if ( v132 > 0xF )
    {
      v74 = Buf1[0];
      if ( v132 + 1 >= 0x1000 )
      {
        v74 = (void *)*((_QWORD *)Buf1[0] - 1);
        if ( (unsigned __int64)((char *)Buf1[0] - (char *)v74 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v74);
    }
    v19 += v73;
  }
  v75 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v75 = qword_905FE0;
  }
  v76 = 1;
  if ( v19 < (int)GameStatsManager_getStat(v75, "6") )
  {
    for ( k = 1; k <= 33; ++k )
    {
      v78 = cocos2d::CCString::createWithFormat("geometry.ach.stars%02d", k);
      v79 = cocos2d::CCString::getCString(v78);
      *(_QWORD *)&v133 = Buf1;
      *(_OWORD *)Buf1 = 0;
      v131 = 0;
      v132 = 0;
      v80 = -1;
      do
        ++v80;
      while ( v79[v80] );
      sub_3C230(Buf1);
      v81 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v114 = operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v114);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v81 = qword_905FD0;
      }
      sub_274C90(v81, Buf1);
    }
  }
  v82 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v82 = qword_905FE0;
  }
  if ( v109 < (int)GameStatsManager_getStat(v82, (const char *)&word_708038) )
  {
    for ( m = 1; m <= 27; ++m )
    {
      v84 = cocos2d::CCString::createWithFormat("geometry.ach.demon%02d", m);
      v85 = cocos2d::CCString::getCString(v84);
      *(_QWORD *)&v133 = Buf1;
      *(_OWORD *)Buf1 = 0;
      v131 = 0;
      v132 = 0;
      v86 = -1;
      do
        ++v86;
      while ( v85[v86] );
      sub_3C230(Buf1);
      v87 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v114 = operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v114);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v87 = qword_905FD0;
      }
      sub_274C90(v87, Buf1);
    }
  }
  v88 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v88 = qword_905FE0;
  }
  if ( v21 < (int)GameStatsManager_getStat(v88, "42") )
  {
    for ( n = 1; n <= 10; ++n )
    {
      v90 = cocos2d::CCString::createWithFormat("geometry.ach.insane%02d", n);
      v91 = cocos2d::CCString::getCString(v90);
      *(_QWORD *)&v133 = Buf1;
      *(_OWORD *)Buf1 = 0;
      v131 = 0;
      v132 = 0;
      v92 = -1;
      do
        ++v92;
      while ( v91[v92] );
      sub_3C230(Buf1);
      v93 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v114 = operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v114);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v93 = qword_905FD0;
      }
      sub_274C90(v93, Buf1);
    }
  }
  v94 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v94 = qword_905FE0;
  }
  if ( v110 < (int)GameStatsManager_getStat(v94, "15") )
  {
    do
    {
      v95 = cocos2d::CCString::createWithFormat("geometry.ach.daily%02d", v76);
      v96 = cocos2d::CCString::getCString(v95);
      *(_QWORD *)&v133 = Buf1;
      *(_OWORD *)Buf1 = 0;
      v131 = 0;
      v132 = 0;
      v97 = -1;
      do
        ++v97;
      while ( v96[v97] );
      sub_3C230(Buf1);
      v98 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v114 = operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v114);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v98 = qword_905FD0;
      }
      sub_274C90(v98, Buf1);
      ++v76;
    }
    while ( v76 <= 7 );
  }
  v99 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v99 = qword_905FE0;
  }
  sub_2D7950(v99, "6", (unsigned int)v19);
  v100 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v100 = qword_905FE0;
  }
  sub_2D7950(v100, "28", v108);
  v101 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v101 = qword_905FE0;
  }
  sub_2D7950(v101, &word_708038, (unsigned int)v109);
  v102 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v102 = qword_905FE0;
  }
  sub_2D7950(v102, "42", (unsigned int)v21);
  v103 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v103 = qword_905FE0;
  }
  sub_2D7950(v103, "15", (unsigned int)v110);
  GameManager_checkUsedIcons(v121);
  v104 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v133 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v133);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v104 = qword_905FE0;
  }
  *(_BYTE *)(v104 + 912) = v106;
  *(_BYTE *)(AchievementManager_sharedState() + 360) = v107;
  sub_3DA90(v128);
  sub_3DB00(&v127);
  sub_3C310(&v136);
  sub_3C310(v139);
  sub_3DA90(&v117);
  sub_3DB00(v116);
  return sub_3C310(v122);
}
