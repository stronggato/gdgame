#include <Geode/binding/SimplePlayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x37e120
// Method: SimplePlayer::~SimplePlayer
void __fastcall SimplePlayer__dtor_SimplePlayer(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rax
  __int64 v4; // r14
  void *v5; // rax
  int v6; // ebp
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 **v12; // rax
  __int64 i; // rax
  __int64 *j; // rax

  *(_QWORD *)a1 = &SimplePlayer::`vftable'; /*0x37e142*/
  *(_QWORD *)(a1 + 320) = &SimplePlayer::`vftable'; /*0x37e14c*/
  *(_QWORD *)(a1 + 344) = &SimplePlayer::`vftable'; /*0x37e15a*/
  v2 = qword_905FD0; /*0x37e161*/
  if ( !qword_905FD0 ) /*0x37e16b*/
  {
    v3 = operator new(0x6E8u); /*0x37e172*/
    qword_905FD0 = sub_2723A0(v3); /*0x37e17f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37e190*/
    v2 = qword_905FD0; /*0x37e192*/
  }
  GameManager_unloadIcons(v2, *(_DWORD *)(a1 + 664)); /*0x37e1a0*/
  if ( *(_BYTE *)(a1 + 672) ) /*0x37e1a5*/
  {
    v4 = qword_905FD0; /*0x37e1b3*/
    if ( !qword_905FD0 ) /*0x37e1bd*/
    {
      v5 = operator new(0x6E8u); /*0x37e1c4*/
      qword_905FD0 = sub_2723A0(v5); /*0x37e1d1*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37e1e2*/
      v4 = qword_905FD0; /*0x37e1e4*/
    }
    v6 = *(_DWORD *)(a1 + 664); /*0x37e1eb*/
    v7 = *(_QWORD **)(v4 + 1256); /*0x37e1f2*/
    v8 = (_QWORD *)*v7; /*0x37e1f9*/
    if ( (_QWORD *)*v7 != v7 ) /*0x37e1ff*/
    {
      do /*0x37e2c7*/
      {
        v9 = 0; /*0x37e210*/
        v10 = v8[5]; /*0x37e212*/
        if ( (v8[6] - v10) >> 3 ) /*0x37e21d*/
        {
          v11 = 0; /*0x37e226*/
          do /*0x37e275*/
          {
            if ( *(_DWORD *)(*(_QWORD *)(v11 + v10) + 664LL) == v6 ) /*0x37e23a*/
            {
              memmove((void *)(v10 + 8LL * v9), (const void *)(v10 + 8LL * v9 + 8), v8[6] - (v10 + 8LL * v9 + 8)); /*0x37e24e*/
              v8[6] -= 8LL; /*0x37e253*/
            }
            else
            {
              ++v9; /*0x37e25a*/
              v11 += 8; /*0x37e25c*/
            }
            v10 = v8[5]; /*0x37e260*/
          }
          while ( v9 < (unsigned __int64)((v8[6] - v10) >> 3) ); /*0x37e275*/
        }
        v12 = (__int64 **)v8[2]; /*0x37e277*/
        if ( *((_BYTE *)v12 + 25) ) /*0x37e27b*/
        {
          for ( i = v8[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) ) /*0x37e285*/
          {
            if ( v8 != *(_QWORD **)(i + 16) ) /*0x37e294*/
              break; /*0x37e294*/
            v8 = (_QWORD *)i; /*0x37e296*/
          }
          v8 = (_QWORD *)i; /*0x37e2a3*/
        }
        else
        {
          v8 = (_QWORD *)v8[2]; /*0x37e2a8*/
          for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x37e2ae*/
            v8 = j; /*0x37e2b4*/
        }
      }
      while ( v8 != *(_QWORD **)(v4 + 1256) ); /*0x37e2c7*/
    }
  }
  cocos2d::CCSprite::~CCSprite((cocos2d::CCSprite *)a1); /*0x37e2e8*/
}

// [2/9] Address: 0x37e2f0
// Method: SimplePlayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCSprite *__fastcall SimplePlayer_create(unsigned int a1)
{
  cocos2d::CCSprite *v2; // rdi

  v2 = (cocos2d::CCSprite *)operator new(0x2A8u); /*0x37e30b*/
  cocos2d::CCSprite::CCSprite(v2); /*0x37e316*/
  *(_QWORD *)v2 = &SimplePlayer::`vftable'; /*0x37e323*/
  *((_QWORD *)v2 + 40) = &SimplePlayer::`vftable'; /*0x37e32d*/
  *((_QWORD *)v2 + 43) = &SimplePlayer::`vftable'; /*0x37e33b*/
  *((_QWORD *)v2 + 75) = 0; /*0x37e344*/
  *((_QWORD *)v2 + 76) = 0; /*0x37e34b*/
  *((_QWORD *)v2 + 77) = 0; /*0x37e352*/
  *((_QWORD *)v2 + 78) = 0; /*0x37e359*/
  *((_QWORD *)v2 + 79) = 0; /*0x37e360*/
  *((_QWORD *)v2 + 80) = 0; /*0x37e367*/
  *((_QWORD *)v2 + 81) = 0; /*0x37e36e*/
  *((_DWORD *)v2 + 164) = 0; /*0x37e375*/
  *((_BYTE *)v2 + 660) = 0; /*0x37e37b*/
  *((_DWORD *)v2 + 166) = 0; /*0x37e382*/
  *((_BYTE *)v2 + 668) = 0; /*0x37e388*/
  *((_BYTE *)v2 + 672) = 0; /*0x37e38f*/
  if ( (unsigned __int8)SimplePlayer_init(v2, a1) ) /*0x37e39b*/
  {
    cocos2d::CCObject::autorelease(v2); /*0x37e3a7*/
    return v2; /*0x37e3ad*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0x37e3cf*/
    return 0; /*0x37e3d2*/
  }
}

// [3/9] Address: 0x37e3f0
// Method: SimplePlayer::init
// Hidden C++ exception states: #wind=7
__int64 __fastcall SimplePlayer_init(cocos2d::CCSprite *a1, int a2)
{
  __int64 v4; // r8
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void **v13; // r15
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  void **v17; // r15
  unsigned __int64 v18; // rsi
  void **v19; // rsi
  unsigned __int8 v20; // bl
  __int64 v21; // rcx
  void **v22; // rcx
  struct cocos2d::CCSprite *v23; // rax
  void **v24; // rcx
  struct cocos2d::CCSprite *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  void **v29; // rcx
  struct cocos2d::CCSprite *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  void **v34; // rcx
  struct cocos2d::CCSprite *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  void **v39; // rcx
  struct cocos2d::CCSprite *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  __int64 *v48; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h]
  void *v50[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v51; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+58h] [rbp-A8h]
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+70h] [rbp-90h]
  unsigned __int64 v55; // [rsp+78h] [rbp-88h]
  void *v56[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-70h]
  unsigned __int64 v58; // [rsp+98h] [rbp-68h]
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v60; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v61; // [rsp+B8h] [rbp-48h]
  _BYTE v62[528]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = qword_905FD0; /*0x37e427*/
  if ( !qword_905FD0 ) /*0x37e431*/
  {
    v48 = (__int64 *)operator new(0x6E8u); /*0x37e43d*/
    qword_905FD0 = sub_2723A0(v48); /*0x37e44b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37e45c*/
    v4 = qword_905FD0; /*0x37e45e*/
  }
  v5 = *(_DWORD *)(v4 + 1272); /*0x37e465*/
  *(_DWORD *)(v4 + 1272) = v5 + 1; /*0x37e46f*/
  *((_DWORD *)a1 + 166) = v5; /*0x37e476*/
  v6 = 485; /*0x37e47d*/
  if ( a2 < 485 ) /*0x37e484*/
    v6 = a2; /*0x37e484*/
  v7 = 1; /*0x37e487*/
  if ( v6 > 1 ) /*0x37e490*/
    v7 = v6; /*0x37e490*/
  fmt::BasicWriter<char>::BasicWriter<char>(v62); /*0x37e498*/
  v48 = &qword_7580D0; /*0x37e4a6*/
  v49 = 0; /*0x37e4ad*/
  fmt::BasicWriter<char>::operator<<(v62, &v48); /*0x37e4c6*/
  if ( (int)v7 < 10 ) /*0x37e4d0*/
  {
    v48 = (__int64 *)"0"; /*0x37e4d9*/
    v49 = 0; /*0x37e4de*/
    fmt::BasicWriter<char>::operator<<(v62, &v48); /*0x37e4f7*/
  }
  fmt::BasicWriter<char>::operator<<(v62, v7); /*0x37e504*/
  v8 = fmt::BasicWriter<char>::c_str(v62); /*0x37e50e*/
  *(_OWORD *)Src = 0; /*0x37e517*/
  v60 = 0; /*0x37e51b*/
  v61 = 0; /*0x37e51f*/
  v9 = -1; /*0x37e523*/
  do /*0x37e533*/
    ++v9; /*0x37e530*/
  while ( *(_BYTE *)(v8 + v9) ); /*0x37e533*/
  sub_3C230(Src); /*0x37e540*/
  *(_OWORD *)v56 = 0; /*0x37e549*/
  v57 = 0; /*0x37e54d*/
  v58 = 0; /*0x37e551*/
  v13 = Src; /*0x37e555*/
  if ( v61 > 0xF ) /*0x37e55e*/
    v13 = (void **)Src[0]; /*0x37e55e*/
  v14 = 0x7FFFFFFFFFFFFFFFLL; /*0x37e563*/
  v15 = v60; /*0x37e56d*/
  if ( v60 > 0x7FFFFFFFFFFFFFFFLL ) /*0x37e574*/
    sub_8D90(v11, v10, v12); /*0x37eb19*/
  if ( v60 > 0xF ) /*0x37e583*/
  {
    v16 = v60 | 0xF; /*0x37e59e*/
    if ( (v60 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x37e5a5*/
    {
      if ( v16 < 0x16 ) /*0x37e5af*/
        v16 = 22; /*0x37e5af*/
    }
    else
    {
      v16 = 0x7FFFFFFFFFFFFFFFLL; /*0x37e5a7*/
    }
    v56[0] = (void *)sub_3C460(v16 + 1); /*0x37e5bc*/
    v57 = v15; /*0x37e5c0*/
    v58 = v16; /*0x37e5c4*/
    memcpy(v56[0], v13, v15 + 1); /*0x37e5d2*/
  }
  else
  {
    v57 = v60; /*0x37e585*/
    v58 = 15; /*0x37e589*/
    *(_OWORD *)v56 = *(_OWORD *)v13; /*0x37e595*/
  }
  sub_43D80(v56, "_001.png", 8u); /*0x37e5ea*/
  *(_OWORD *)v50 = 0; /*0x37e5f2*/
  v51 = 0; /*0x37e5f7*/
  v52 = 0; /*0x37e5fc*/
  v17 = Src; /*0x37e601*/
  if ( v61 > 0xF ) /*0x37e60a*/
    v17 = (void **)Src[0]; /*0x37e60a*/
  if ( v15 > 0xF ) /*0x37e613*/
  {
    v18 = v15 | 0xF; /*0x37e631*/
    if ( (v15 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x37e638*/
    {
      if ( v18 < 0x16 ) /*0x37e648*/
        v18 = 22; /*0x37e648*/
    }
    else
    {
      v18 = 0x7FFFFFFFFFFFFFFFLL; /*0x37e63a*/
    }
    v50[0] = (void *)sub_3C460(v18 + 1); /*0x37e655*/
    v51 = v15; /*0x37e65a*/
    v52 = v18; /*0x37e65f*/
    memcpy(v50[0], v17, v15 + 1); /*0x37e66e*/
  }
  else
  {
    v51 = v15; /*0x37e615*/
    v52 = 15; /*0x37e61a*/
    *(_OWORD *)v50 = *(_OWORD *)v17; /*0x37e627*/
  }
  sub_43D80(v50, "_2_001.png", 0xAu); /*0x37e687*/
  *(_OWORD *)Block = 0; /*0x37e68f*/
  v54 = 0; /*0x37e694*/
  v55 = 0; /*0x37e699*/
  v19 = Src; /*0x37e69e*/
  if ( v61 > 0xF ) /*0x37e6a7*/
    v19 = (void **)Src[0]; /*0x37e6a7*/
  if ( v15 > 0xF ) /*0x37e6b0*/
  {
    if ( (v15 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x37e6d4*/
    {
      v14 = v15 | 0xF; /*0x37e6d6*/
      if ( (v15 | 0xF) < 0x16 ) /*0x37e6e2*/
        v14 = 22; /*0x37e6e2*/
    }
    Block[0] = (void *)sub_3C460(v14 + 1); /*0x37e6ef*/
    v54 = v15; /*0x37e6f4*/
    v55 = v14; /*0x37e6f9*/
    memcpy(Block[0], v19, v15 + 1); /*0x37e708*/
  }
  else
  {
    v54 = v15; /*0x37e6b2*/
    v55 = 15; /*0x37e6b7*/
    *(_OWORD *)Block = *(_OWORD *)v19; /*0x37e6c3*/
  }
  sub_43D80(Block, "_glow_001.png", 0xDu); /*0x37e720*/
  if ( cocos2d::CCSprite::init(a1) ) /*0x37e728*/
  {
    (*(void (__fastcall **)(cocos2d::CCSprite *, void *))(*(_QWORD *)a1 + 992LL))(a1, &unk_904B58); /*0x37e746*/
    v21 = qword_905FD0; /*0x37e74c*/
    if ( !qword_905FD0 ) /*0x37e756*/
    {
      v48 = (__int64 *)operator new(0x6E8u); /*0x37e762*/
      qword_905FD0 = sub_2723A0(v48); /*0x37e770*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37e781*/
      v21 = qword_905FD0; /*0x37e783*/
    }
    sub_279AB0(v21, v7, 0, *((unsigned int *)a1 + 166)); /*0x37e797*/
    v22 = v56; /*0x37e79c*/
    if ( v58 > 0xF ) /*0x37e7a5*/
      v22 = (void **)v56[0]; /*0x37e7a5*/
    v23 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v22); /*0x37e7aa*/
    *((_QWORD *)a1 + 75) = v23; /*0x37e7b0*/
    (*(void (__fastcall **)(cocos2d::CCSprite *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))( /*0x37e7cd*/
      a1,
      v23,
      1);
    v24 = v50; /*0x37e7d0*/
    if ( v52 > 0xF ) /*0x37e7db*/
      v24 = (void **)v50[0]; /*0x37e7db*/
    v25 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v24); /*0x37e7e1*/
    *((_QWORD *)a1 + 76) = v25; /*0x37e7e7*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**((_QWORD **)a1 + 75) + 456LL))( /*0x37e80b*/
      *((_QWORD *)a1 + 75),
      v25,
      0xFFFFFFFFLL);
    v26 = **((_QWORD **)a1 + 76); /*0x37e815*/
    v27 = *((_QWORD *)a1 + 76); /*0x37e818*/
    cocos2d::CCNode::convertToNodeSpace(*((_QWORD *)a1 + 75), &v48, &unk_904B50); /*0x37e82e*/
    (*(void (__fastcall **)(__int64, __int64))(v26 + 184))(v27, v28); /*0x37e83a*/
    v29 = v50; /*0x37e840*/
    if ( v52 > 0xF ) /*0x37e84b*/
      v29 = (void **)v50[0]; /*0x37e84b*/
    v30 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v29); /*0x37e851*/
    *((_QWORD *)a1 + 77) = v30; /*0x37e857*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**((_QWORD **)a1 + 75) + 456LL))( /*0x37e87b*/
      *((_QWORD *)a1 + 75),
      v30,
      4294967294LL);
    v31 = **((_QWORD **)a1 + 77); /*0x37e885*/
    v32 = *((_QWORD *)a1 + 77); /*0x37e888*/
    cocos2d::CCNode::convertToNodeSpace(*((_QWORD *)a1 + 75), &v48, &unk_904B50); /*0x37e89e*/
    (*(void (__fastcall **)(__int64, __int64))(v31 + 184))(v32, v33); /*0x37e8aa*/
    v34 = Block; /*0x37e8b0*/
    if ( v55 > 0xF ) /*0x37e8bb*/
      v34 = (void **)Block[0]; /*0x37e8bb*/
    v35 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v34); /*0x37e8c1*/
    *((_QWORD *)a1 + 78) = v35; /*0x37e8c7*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**((_QWORD **)a1 + 75) + 456LL))( /*0x37e8eb*/
      *((_QWORD *)a1 + 75),
      v35,
      4294967293LL);
    v36 = **((_QWORD **)a1 + 78); /*0x37e8f5*/
    v37 = *((_QWORD *)a1 + 78); /*0x37e8f8*/
    cocos2d::CCNode::convertToNodeSpace(*((_QWORD *)a1 + 75), &v48, &unk_904B50); /*0x37e90e*/
    (*(void (__fastcall **)(__int64, __int64))(v36 + 184))(v37, v38); /*0x37e91a*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 78) + 336LL))(*((_QWORD *)a1 + 78), 0); /*0x37e92c*/
    v39 = v50; /*0x37e932*/
    if ( v52 > 0xF ) /*0x37e93d*/
      v39 = (void **)v50[0]; /*0x37e93d*/
    v40 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v39); /*0x37e943*/
    *((_QWORD *)a1 + 79) = v40; /*0x37e949*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**((_QWORD **)a1 + 75) + 456LL))( /*0x37e96d*/
      *((_QWORD *)a1 + 75),
      v40,
      1);
    v41 = **((_QWORD **)a1 + 79); /*0x37e977*/
    v42 = *((_QWORD *)a1 + 79); /*0x37e97a*/
    cocos2d::CCNode::convertToNodeSpace(*((_QWORD *)a1 + 75), &v48, &unk_904B50); /*0x37e990*/
    (*(void (__fastcall **)(__int64, __int64))(v41 + 184))(v42, v43); /*0x37e99c*/
    SimplePlayer_updatePlayerFrame(a1, v7, 0); /*0x37e9ab*/
    v20 = 1; /*0x37e9b0*/
  }
  else
  {
    v20 = 0; /*0x37e732*/
  }
  if ( v55 > 0xF ) /*0x37e9bb*/
  {
    v44 = Block[0]; /*0x37e9c0*/
    if ( v55 + 1 >= 0x1000 ) /*0x37e9cf*/
    {
      v44 = (void *)*((_QWORD *)Block[0] - 1); /*0x37e9d5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v44 - 8) > 0x1F ) /*0x37e9e4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x37e9f7*/
    }
    j_j_free(v44); /*0x37e9fe*/
  }
  v54 = 0; /*0x37ea05*/
  v55 = 15; /*0x37ea0a*/
  LOBYTE(Block[0]) = 0; /*0x37ea13*/
  if ( v52 > 0xF ) /*0x37ea21*/
  {
    v45 = v50[0]; /*0x37ea26*/
    if ( v52 + 1 >= 0x1000 ) /*0x37ea35*/
    {
      v45 = (void *)*((_QWORD *)v50[0] - 1); /*0x37ea3b*/
      if ( (unsigned __int64)((char *)v50[0] - (char *)v45 - 8) > 0x1F ) /*0x37ea4a*/
        invoke_watson(0, 0, 0, 0, 0); /*0x37ea5b*/
    }
    j_j_free(v45); /*0x37ea62*/
  }
  v51 = 0; /*0x37ea67*/
  v52 = 15; /*0x37ea6c*/
  LOBYTE(v50[0]) = 0; /*0x37ea75*/
  if ( v58 > 0xF ) /*0x37ea82*/
  {
    v46 = v56[0]; /*0x37ea87*/
    if ( v58 + 1 >= 0x1000 ) /*0x37ea95*/
    {
      v46 = (void *)*((_QWORD *)v56[0] - 1); /*0x37ea9b*/
      if ( (unsigned __int64)((char *)v56[0] - (char *)v46 - 8) > 0x1F ) /*0x37eaaa*/
        invoke_watson(0, 0, 0, 0, 0); /*0x37eabb*/
    }
    j_j_free(v46); /*0x37eac2*/
  }
  v57 = 0; /*0x37eac7*/
  v58 = 15; /*0x37eacb*/
  LOBYTE(v56[0]) = 0; /*0x37ead3*/
  sub_3C310(Src); /*0x37eadb*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v62); /*0x37eae5*/
  return v20; /*0x37eaee*/
}

// [4/9] Address: 0x37eb20
// Method: SimplePlayer::createSpiderSprite
void __fastcall SimplePlayer_createSpiderSprite(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1[81] ) /*0x37eb26*/
  {
    v3 = GJSpiderSprite_create(a2); /*0x37eb3a*/
    v4 = *a1; /*0x37eb3f*/
    a1[81] = v3; /*0x37eb45*/
    (*(void (__fastcall **)(__int64 *, __int64))(v4 + 464))(a1, v3); /*0x37eb56*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[81] + 336LL))(a1[81], 0); /*0x37eb65*/
    v5 = (__int64 *)a1[81]; /*0x37eb6b*/
    v6 = *v5; /*0x37eb82*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, 0.0, -1.5); /*0x37eb85*/
    (*(void (__fastcall **)(__int64 *, __int64))(v6 + 184))(v5, v7); /*0x37eb91*/
  }
}

// [5/9] Address: 0x37ebb0
// Method: SimplePlayer::setColor
double __fastcall SimplePlayer_setColor(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 320; /*0x37ebb6*/
  (**(void (__fastcall ***)(__int64))(*(_QWORD *)(a1 + 280) + 320LL))(*(_QWORD *)(a1 + 280) + 320LL); /*0x37ebce*/
  return SimplePlayer_updateColors(v1); /*0x37ebd3*/
}

// [6/9] Address: 0x37ebe0
// Method: SimplePlayer::tryEnableCustomGlowColor
// Hidden C++ exception states: #wind=1
void __fastcall SimplePlayer_tryEnableCustomGlowColor(__int64 a1, int a2)
{
  __int64 v4; // rcx
  char *v5; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF
  void *v7; // [rsp+40h] [rbp+18h]

  if ( a2 < 0 ) /*0x37ebf1*/
  {
    *(_BYTE *)(a1 + 668) = 0; /*0x37ec64*/
  }
  else
  {
    v4 = qword_905FD0; /*0x37ebf3*/
    if ( !qword_905FD0 ) /*0x37ebfd*/
    {
      v7 = operator new(0x6E8u); /*0x37ec09*/
      qword_905FD0 = sub_2723A0(v7); /*0x37ec17*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37ec28*/
      v4 = qword_905FD0; /*0x37ec2a*/
    }
    v5 = GameManager_colorForIdx(v4, &v6, a2); /*0x37ec39*/
    *(_BYTE *)(a1 + 668) = 1; /*0x37ec3e*/
    *(_WORD *)(a1 + 669) = *(_WORD *)v5; /*0x37ec48*/
    *(_BYTE *)(a1 + 671) = v5[2]; /*0x37ec53*/
  }
}

// [7/9] Address: 0x37ec80
// Method: SimplePlayer::updateColors
unsigned int __fastcall SimplePlayer_updateColors(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  __int16 v4; // bx
  char v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int16 v8; // r13
  char v9; // si
  bool v10; // r12
  bool v11; // al
  __int16 v12; // dx
  int v13; // r8d
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // cl
  float v16; // xmm1_4
  bool v17; // zf
  __int64 v18; // rdx
  unsigned int result; // eax
  __int64 v20; // rdx
  __int64 *v21; // r14
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rcx
  cocos2d::CCArray *v25; // r15
  unsigned int v26; // esi
  struct cocos2d::CCObject *v27; // rax
  __int64 *v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rcx
  cocos2d::CCArray *v31; // rsi
  struct cocos2d::CCObject *v32; // rax
  __int64 v33; // rcx
  __int16 v34; // [rsp+20h] [rbp-28h] BYREF
  char v35; // [rsp+22h] [rbp-26h]
  __int16 v36; // [rsp+30h] [rbp-18h]
  __int16 v37; // [rsp+90h] [rbp+48h] BYREF
  char v38; // [rsp+92h] [rbp+4Ah]
  char v39; // [rsp+98h] [rbp+50h]
  __int16 v40; // [rsp+A0h] [rbp+58h]
  __int16 v41; // [rsp+A8h] [rbp+60h] BYREF
  char v42; // [rsp+AAh] [rbp+62h]

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 320LL) + 8LL))(*(_QWORD *)(a1 + 600) + 320LL); /*0x37eca8*/
  v3 = (__int64 *)(*(_QWORD *)(a1 + 608) + 320LL); /*0x37ecb2*/
  v4 = *(_WORD *)v2; /*0x37ecb9*/
  v5 = *(_BYTE *)(v2 + 2); /*0x37ecbc*/
  v6 = *v3; /*0x37ecc1*/
  v40 = v4; /*0x37ecc4*/
  v34 = v4; /*0x37ecc8*/
  v39 = v5; /*0x37eccc*/
  v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 8))(v3); /*0x37ecd0*/
  v8 = *(_WORD *)v7; /*0x37ecd3*/
  v9 = *(_BYTE *)(v7 + 2); /*0x37ecd7*/
  v36 = *(_WORD *)v7; /*0x37ecdb*/
  LOBYTE(v37) = v9; /*0x37ece0*/
  v10 = !v4 && !v5; /*0x37ecf7*/
  v11 = !(_BYTE)v8 && !HIBYTE(v36) && !v9; /*0x37ed0e*/
  if ( v10 ) /*0x37ed13*/
  {
    if ( v11 ) /*0x37ed32*/
    {
      v12 = -1; /*0x37ed3e*/
      LOBYTE(v13) = -1; /*0x37ed45*/
    }
    else
    {
      v12 = v8; /*0x37ed34*/
      LOBYTE(v13) = v9; /*0x37ed38*/
    }
    goto LABEL_17; /*0x37ed3c*/
  }
  if ( !v11 ) /*0x37ed17*/
  {
    v12 = v8; /*0x37ed19*/
    LOBYTE(v13) = v9; /*0x37ed1d*/
LABEL_17:
    v41 = v12; /*0x37ed4d*/
    goto LABEL_18; /*0x37ed4d*/
  }
  v12 = v4; /*0x37ed23*/
  v41 = v4; /*0x37ed26*/
  LOBYTE(v13) = v5; /*0x37ed2a*/
LABEL_18:
  if ( (_BYTE)v12 != 0xFF && HIBYTE(v41) != 0xFF && (_BYTE)v13 != 0xFF ) /*0x37ed6d*/
  {
    v14 = v13; /*0x37ed72*/
    if ( HIBYTE(v41) > (unsigned __int8)v13 ) /*0x37ed76*/
      v14 = HIBYTE(v41); /*0x37ed76*/
    if ( (unsigned __int8)v12 <= v14 ) /*0x37ed7c*/
    {
      v15 = v13; /*0x37ed86*/
      if ( HIBYTE(v41) > (unsigned __int8)v13 ) /*0x37ed8a*/
        v15 = HIBYTE(v41); /*0x37ed8a*/
    }
    else
    {
      v15 = v12; /*0x37ed7e*/
    }
    v16 = fminf(255.0 / (float)v15, 1.5); /*0x37edab*/
    LOBYTE(v34) = (int)(float)((float)(unsigned __int8)v12 * v16); /*0x37edc6*/
    HIBYTE(v34) = (int)(float)((float)HIBYTE(v41) * v16); /*0x37edd1*/
    v12 = v34; /*0x37edd4*/
    v13 = (int)(float)((float)(unsigned __int8)v13 * v16); /*0x37ede7*/
  }
  v17 = *(_BYTE *)(a1 + 668) == 0; /*0x37edec*/
  v41 = v12; /*0x37edf3*/
  v42 = v13; /*0x37edf7*/
  if ( !v17 ) /*0x37edfb*/
  {
    v41 = *(_WORD *)(a1 + 669); /*0x37ee04*/
    v42 = *(_BYTE *)(a1 + 671); /*0x37ee0f*/
  }
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 624) + 320LL))(*(_QWORD *)(a1 + 624) + 320LL, &v41); /*0x37ee27*/
  if ( v10 || *(_BYTE *)(a1 + 660) ) /*0x37ee2e*/
    LOBYTE(v18) = 1; /*0x37ee3b*/
  else
    v18 = 0; /*0x37ee37*/
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 624) + 336LL))(*(_QWORD *)(a1 + 624), v18); /*0x37ee47*/
  v21 = (__int64 *)(a1 + 640); /*0x37ee4d*/
  v22 = 0; /*0x37ee54*/
  v23 = *(_QWORD *)(a1 + 640); /*0x37ee56*/
  if ( v23 ) /*0x37ee5c*/
  {
    *(_WORD *)(v23 + 753) = v40; /*0x37ee66*/
    *(_BYTE *)(v23 + 755) = v5; /*0x37ee6d*/
    sub_3A9500(); /*0x37ee74*/
    v24 = *v21; /*0x37ee79*/
    *(_WORD *)(v24 + 756) = v8; /*0x37ee7c*/
    *(_BYTE *)(v24 + 758) = v9; /*0x37ee84*/
    sub_3A9500(); /*0x37ee8b*/
    v34 = v41; /*0x37ee94*/
    v35 = v42; /*0x37ee9c*/
    v25 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v21 + 768) + 480LL))(*(_QWORD *)(*v21 + 768)); /*0x37eeb5*/
    v26 = 0; /*0x37eeb8*/
    result = cocos2d::CCArray::count(v25); /*0x37eeba*/
    if ( result ) /*0x37eec2*/
    {
      do /*0x37eeec*/
      {
        v27 = cocos2d::CCArray::objectAtIndex(v25, v26); /*0x37eec9*/
        (**((void (__fastcall ***)(__int64, __int16 *))v27 + 40))((__int64)v27 + 320, &v34); /*0x37eedd*/
        ++v26; /*0x37eee2*/
        result = cocos2d::CCArray::count(v25); /*0x37eee4*/
      }
      while ( v26 < result ); /*0x37eeec*/
      v21 = (__int64 *)(a1 + 640); /*0x37eeee*/
    }
    v9 = v37; /*0x37eef5*/
  }
  v28 = (__int64 *)(a1 + 648); /*0x37eef9*/
  v29 = *(_QWORD *)(a1 + 648); /*0x37ef00*/
  if ( v29 ) /*0x37ef06*/
  {
    *(_WORD *)(v29 + 753) = v40; /*0x37ef10*/
    *(_BYTE *)(v29 + 755) = v39; /*0x37ef1b*/
    sub_3A9500(); /*0x37ef21*/
    v30 = *v28; /*0x37ef26*/
    *(_WORD *)(v30 + 756) = v8; /*0x37ef29*/
    *(_BYTE *)(v30 + 758) = v9; /*0x37ef31*/
    sub_3A9500(); /*0x37ef38*/
    v37 = v41; /*0x37ef41*/
    v38 = v42; /*0x37ef49*/
    v31 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v28 + 768) + 480LL))(*(_QWORD *)(*v28 + 768)); /*0x37ef62*/
    result = cocos2d::CCArray::count(v31); /*0x37ef65*/
    if ( result ) /*0x37ef6d*/
    {
      do /*0x37ef98*/
      {
        v32 = cocos2d::CCArray::objectAtIndex(v31, v22); /*0x37ef75*/
        (**((void (__fastcall ***)(__int64, __int16 *))v32 + 40))((__int64)v32 + 320, &v37); /*0x37ef89*/
        ++v22; /*0x37ef8e*/
        result = cocos2d::CCArray::count(v31); /*0x37ef90*/
      }
      while ( v22 < result ); /*0x37ef98*/
      v21 = (__int64 *)(a1 + 640); /*0x37ef9a*/
      v28 = (__int64 *)(a1 + 648); /*0x37efa1*/
    }
  }
  if ( v10 || *(_BYTE *)(a1 + 660) ) /*0x37efad*/
  {
    if ( *v21 ) /*0x37efdc*/
    {
      LOBYTE(v20) = 1; /*0x37efeb*/
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*v21 + 768) + 336LL))( /*0x37eff0*/
                 *(_QWORD *)(*v21 + 768),
                 v20);
    }
    v33 = *v28; /*0x37eff6*/
    if ( *v28 ) /*0x37eff6*/
    {
      LOBYTE(v20) = 1; /*0x37effe*/
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v33 + 768) + 336LL))( /*0x37effe*/
               *(_QWORD *)(v33 + 768),
               v20);
    }
  }
  else
  {
    if ( *v21 ) /*0x37efb6*/
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*v21 + 768) + 336LL))( /*0x37efca*/
                 *(_QWORD *)(*v21 + 768),
                 0);
    v33 = *v28; /*0x37efd0*/
    if ( *v28 ) /*0x37efd0*/
    {
      v20 = 0; /*0x37efd8*/
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v33 + 768) + 336LL))( /*0x37f000*/
               *(_QWORD *)(v33 + 768),
               v20);
    }
  }
  return result; /*0x37f010*/
}

// [8/9] Address: 0x37f030
// Method: SimplePlayer::updatePlayerFrame
// Hidden C++ exception states: #wind=2
void __fastcall SimplePlayer_updatePlayerFrame(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // r15d
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool v11; // bl
  unsigned int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  cocos2d::CCString *v18; // rax
  unsigned int CString; // r12d
  void **v20; // rdx
  cocos2d::CCString *v21; // rax
  unsigned int v22; // r13d
  unsigned int v23; // edi
  void **v24; // rdx
  cocos2d::CCString *v25; // rax
  void **v26; // rdx
  cocos2d::CCString *v27; // rax
  const char *v28; // rbx
  void **v29; // rdx
  cocos2d::CCString *v30; // rax
  const char *v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rbx
  float v35; // xmm2_4
  __int64 v36; // rax
  void *v37; // rcx
  void *v38; // [rsp+30h] [rbp-30h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v40; // [rsp+48h] [rbp-18h]
  unsigned __int64 v41; // [rsp+50h] [rbp-10h]

  v4 = a2; /*0x37f058*/
  *(_OWORD *)Block = 0; /*0x37f061*/
  v41 = 15; /*0x37f065*/
  LOBYTE(Block[0]) = 0; /*0x37f06d*/
  v7 = -4096; /*0x37f080*/
  switch ( a3 ) /*0x37f091*/
  {
    case 1u: /*0x37f091*/
      v40 = 4; /*0x37f093*/
      strcpy((char *)Block, "ship"); /*0x37f0a1*/
      v8 = 169; /*0x37f0a8*/
      break; /*0x37f0ad*/
    case 2u: /*0x37f091*/
      v40 = 11; /*0x37f0b2*/
      strcpy((char *)Block, "player_ball"); /*0x37f0c2*/
      v8 = 118; /*0x37f0e0*/
      break; /*0x37f0e5*/
    case 3u: /*0x37f091*/
      v40 = 4; /*0x37f0ea*/
      strcpy((char *)Block, "bird"); /*0x37f0f8*/
      v8 = 149; /*0x37f0ff*/
      break; /*0x37f104*/
    case 4u: /*0x37f091*/
      v40 = 4; /*0x37f109*/
      strcpy((char *)Block, "dart"); /*0x37f117*/
      v8 = 96; /*0x37f11e*/
      break; /*0x37f123*/
    case 5u: /*0x37f091*/
      v40 = 5; /*0x37f128*/
      strcpy((char *)Block, "robot"); /*0x37f136*/
      v8 = 68; /*0x37f147*/
      break; /*0x37f14c*/
    case 6u: /*0x37f091*/
      LODWORD(Block[0]) = 1684631667; /*0x37f157*/
      v8 = 69; /*0x37f161*/
      goto LABEL_10; /*0x37f166*/
    case 7u: /*0x37f091*/
      v40 = 5; /*0x37f168*/
      strcpy((char *)Block, "swing"); /*0x37f176*/
      v8 = 43; /*0x37f187*/
      break; /*0x37f18c*/
    case 8u: /*0x37f091*/
      v40 = 7; /*0x37f18e*/
      Block[0] = (void *)0x6B63617074656ALL; /*0x37f19d*/
      v8 = 8; /*0x37f1b9*/
      break; /*0x37f1be*/
    default:
      v7 = a2; /*0xf1c0000000000004*/
      LODWORD(Block[0]) = 2036427888; /*0x37f1c6*/
      v8 = 485; /*0x37f1d0*/
LABEL_10:
      BYTE6(Block[0]) = 0; /*0x37f1d5*/
      WORD2(Block[0]) = 29285; /*0x37f1d9*/
      v40 = 6; /*0x37f1dd*/
      break; /*0x37f1dd*/
  }
  v9 = *(_QWORD *)(a1 + 640); /*0x37f1e5*/
  if ( v9 ) /*0x37f1ef*/
  {
    LOBYTE(v7) = a3 == 5; /*0x37f1f5*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 336LL))(v9, v7); /*0x37f1fb*/
  }
  v10 = *(_QWORD *)(a1 + 648); /*0x37f201*/
  if ( v10 ) /*0x37f20b*/
  {
    LOBYTE(v7) = a3 == 6; /*0x37f211*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 336LL))(v10, v7); /*0x37f217*/
  }
  v11 = a3 - 5 > 1; /*0x37f224*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 600) + 336LL))(*(_QWORD *)(a1 + 600), v11); /*0x37f234*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 608) + 336LL))(*(_QWORD *)(a1 + 608), v11); /*0x37f247*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 616) + 336LL))(*(_QWORD *)(a1 + 616), v11); /*0x37f25a*/
  if ( v4 < v8 ) /*0x37f263*/
    v8 = v4; /*0x37f263*/
  v12 = 1; /*0x37f267*/
  if ( v8 > 1 ) /*0x37f270*/
    v12 = v8; /*0x37f270*/
  v13 = qword_905FD0; /*0x37f274*/
  if ( !qword_905FD0 ) /*0x37f27e*/
  {
    v38 = operator new(0x6E8u); /*0x37f28a*/
    qword_905FD0 = sub_2723A0(v38); /*0x37f297*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37f2a8*/
    v13 = qword_905FD0; /*0x37f2aa*/
  }
  sub_279AB0(v13, v12, a3, *(unsigned int *)(a1 + 664)); /*0x37f2be*/
  if ( a3 != 5 ) /*0x37f2c7*/
  {
    if ( a3 == 6 ) /*0x37f331*/
    {
      v14 = *(_QWORD *)(a1 + 648); /*0x37f333*/
      if ( v14 ) /*0x37f340*/
        goto LABEL_23; /*0x37f340*/
      SimplePlayer_createSpiderSprite((__int64 *)a1, v12); /*0x37f34f*/
      LOBYTE(v17) = 1; /*0x37f35e*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 648) + 336LL))(*(_QWORD *)(a1 + 648), v17); /*0x37f360*/
      goto LABEL_42; /*0x37f366*/
    }
    v18 = cocos2d::CCString::createWithFormat("%s_%02d_001.png", (const char *)Block, v12); /*0x37f383*/
    CString = (unsigned int)cocos2d::CCString::getCString(v18); /*0x37f392*/
    v20 = Block; /*0x37f395*/
    if ( v41 > 0xF ) /*0x37f39e*/
      v20 = (void **)Block[0]; /*0x37f39e*/
    v21 = cocos2d::CCString::createWithFormat("%s_%02d_2_001.png", (const char *)v20, v12); /*0x37f3ad*/
    v22 = (unsigned int)cocos2d::CCString::getCString(v21); /*0x37f3bc*/
    v23 = 0; /*0x37f3bf*/
    if ( a3 == 3 ) /*0x37f3c5*/
    {
      v24 = Block; /*0x37f3c7*/
      if ( v41 > 0xF ) /*0x37f3d0*/
        v24 = (void **)Block[0]; /*0x37f3d0*/
      v25 = cocos2d::CCString::createWithFormat("%s_%02d_3_001.png", (const char *)v24, v12); /*0x37f3df*/
      v23 = (unsigned int)cocos2d::CCString::getCString(v25); /*0x37f3ee*/
    }
    v26 = Block; /*0x37f3f1*/
    if ( v41 > 0xF ) /*0x37f3fa*/
      v26 = (void **)Block[0]; /*0x37f3fa*/
    v27 = cocos2d::CCString::createWithFormat("%s_%02d_glow_001.png", (const char *)v26, v12); /*0x37f409*/
    v28 = cocos2d::CCString::getCString(v27); /*0x37f418*/
    v29 = Block; /*0x37f41b*/
    if ( v41 > 0xF ) /*0x37f424*/
      v29 = (void **)Block[0]; /*0x37f424*/
    v30 = cocos2d::CCString::createWithFormat("%s_%02d_extra_001.png", (const char *)v29, v12); /*0x37f433*/
    v31 = cocos2d::CCString::getCString(v30); /*0x37f43c*/
    sub_37F580(a1, CString, v22, v23, (__int64)v28, (__int64)v31); /*0x37f458*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 600) + 160LL))(*(_QWORD *)(a1 + 600)); /*0x37f46f*/
    v32 = *(__int64 **)(a1 + 600); /*0x37f475*/
    if ( a3 == 2 ) /*0x37f480*/
    {
      (*(void (__fastcall **)(_QWORD))(*v32 + 160))(*(_QWORD *)(a1 + 600)); /*0x37f494*/
      v33 = **(_QWORD **)(a1 + 600); /*0x37f4a1*/
      v34 = *(_QWORD *)(a1 + 600); /*0x37f4a4*/
    }
    else
    {
      v33 = *v32; /*0x37f510*/
      v34 = *(_QWORD *)(a1 + 600); /*0x37f513*/
      if ( a3 == 3 ) /*0x37f51e*/
      {
        v35 = -7.0; /*0x37f520*/
        goto LABEL_41; /*0x37f528*/
      }
    }
    v35 = 0.0; /*0x37f4a7*/
LABEL_41:
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v38, 0.0, v35); /*0x37f4aa*/
    (*(void (__fastcall **)(__int64, __int64))(v33 + 184))(v34, v36); /*0x37f4bd*/
    goto LABEL_42; /*0x37f4bd*/
  }
  v14 = *(_QWORD *)(a1 + 640); /*0x37f2c9*/
  if ( v14 ) /*0x37f2d3*/
  {
LABEL_23:
    PlayerObject_toggleSpiderMode(v14, v12); /*0x37f2d5*/
    goto LABEL_42; /*0x37f2dd*/
  }
  v15 = sub_3A8C80(v12); /*0x37f2e5*/
  *(_QWORD *)(a1 + 640) = v15; /*0x37f2ea*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v15); /*0x37f301*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 640) + 336LL))(*(_QWORD *)(a1 + 640), 0); /*0x37f310*/
  LOBYTE(v16) = 1; /*0x37f320*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 640) + 336LL))(*(_QWORD *)(a1 + 640), v16); /*0x37f322*/
LABEL_42:
  if ( v41 > 0xF ) /*0x37f4cc*/
  {
    v37 = Block[0]; /*0x37f4d1*/
    if ( v41 + 1 >= 0x1000 ) /*0x37f4df*/
    {
      v37 = (void *)*((_QWORD *)Block[0] - 1); /*0x37f4e5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v37 - 8) > 0x1F ) /*0x37f4f4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x37f509*/
    }
    j_j_free(v37); /*0x37f52a*/
  }
}

// [9/9] Address: 0x37f7b0
// Method: SimplePlayer::setOpacity
__int64 __fastcall SimplePlayer_setOpacity(_QWORD *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1[35] + 320LL) + 40LL))(a1[35] + 320LL); /*0x37f7d1*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[36] + 320LL) + 40LL))(a1[36] + 320LL, a2); /*0x37f7e8*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[37] + 320LL) + 40LL))(a1[37] + 320LL, a2); /*0x37f7ff*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[38] + 320LL) + 40LL))(a1[38] + 320LL, a2); /*0x37f816*/
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[39] + 320LL) + 40LL))(a1[39] + 320LL, a2); /*0x37f82d*/
  v5 = a1[40]; /*0x37f830*/
  if ( v5 ) /*0x37f83a*/
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v5 + 320) + 40LL))(v5 + 320, a2); /*0x37f849*/
  v6 = a1[41]; /*0x37f84c*/
  if ( v6 ) /*0x37f856*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v6 + 320) + 40LL))(v6 + 320, a2); /*0x37f865*/
  return result; /*0x37f868*/
}
