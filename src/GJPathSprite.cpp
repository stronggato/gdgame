#include <Geode/binding/GJPathSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x9b4a0
// Method: GJPathSprite::changeToLockedArt
// Hidden C++ exception states: #wind=4
void __fastcall GJPathSprite_changeToLockedArt(__int64 a1)
{
  void **v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // [rsp+38h] [rbp-21h]
  _BYTE v11[32]; // [rsp+40h] [rbp-19h] BYREF
  void *Src[2]; // [rsp+60h] [rbp+7h] BYREF
  size_t Size; // [rsp+70h] [rbp+17h]
  unsigned __int64 v14; // [rsp+78h] [rbp+1Fh]
  void *Block[2]; // [rsp+80h] [rbp+27h] BYREF
  __int64 v16; // [rsp+90h] [rbp+37h]
  unsigned __int64 v17; // [rsp+98h] [rbp+3Fh]

  *(_OWORD *)Src = 0; /*0x9b4d0*/
  Size = 0; /*0x9b4d4*/
  v14 = 15; /*0x9b4dc*/
  LOBYTE(Src[0]) = 0; /*0x9b4e4*/
  if ( (unsigned __int8)sub_742E0("Select Backup Directory", Src) ) /*0x9b4f3*/
  {
    if ( (void **)(a1 + 1016) != Src ) /*0x9b50e*/
    {
      v2 = Src; /*0x9b510*/
      if ( v14 > 0xF ) /*0x9b519*/
        v2 = (void **)Src[0]; /*0x9b519*/
      sub_3F5A0((void *)(a1 + 1016), v2, Size); /*0x9b525*/
    }
    sub_3E4F0(v11, a1 + 1016); /*0x9b531*/
    v4 = v3; /*0x9b536*/
    v5 = qword_905FD0; /*0x9b53d*/
    if ( !qword_905FD0 ) /*0x9b547*/
    {
      v10 = operator new(0x6E8u); /*0x9b553*/
      qword_905FD0 = sub_2723A0(v10); /*0x9b560*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9b571*/
      v5 = qword_905FD0; /*0x9b573*/
    }
    v6 = *(_QWORD *)(v5 + 440); /*0x9b57a*/
    if ( v6 ) /*0x9b584*/
    {
      v16 = 13; /*0x9b591*/
      v17 = 15; /*0x9b599*/
      strcpy((char *)Block, "autoBackupDir"); /*0x9b5a9*/
      HIWORD(Block[1]) = 0; /*0x9b5b4*/
      v7 = cocos2d::CCString::create(v4); /*0x9b5c8*/
      cocos2d::CCDictionary::setObject(v6, v7, Block); /*0x9b5d8*/
      if ( v17 > 0xF ) /*0x9b5e7*/
      {
        v8 = Block[0]; /*0x9b5ec*/
        if ( v17 + 1 >= 0x1000 ) /*0x9b5fa*/
        {
          v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x9b600*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x9b60f*/
            invoke_watson(0, 0, 0, 0, 0); /*0x9b624*/
        }
        j_j_free(v8); /*0x9b62b*/
      }
    }
    sub_3C310(v4); /*0x9b634*/
    sub_9B860(a1); /*0x9b63c*/
  }
  if ( v14 > 0xF ) /*0x9b64a*/
  {
    v9 = Src[0]; /*0x9b64f*/
    if ( v14 + 1 >= 0x1000 ) /*0x9b65d*/
    {
      v9 = (void *)*((_QWORD *)Src[0] - 1); /*0x9b663*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v9 - 8) > 0x1F ) /*0x9b672*/
        invoke_watson(0, 0, 0, 0, 0); /*0x9b687*/
    }
    j_j_free(v9); /*0x9b68e*/
  }
}

// [2/4] Address: 0x3933b0
// Method: GJPathSprite::create
// Hidden C++ exception states: #wind=2
void *__fastcall GJPathSprite_create(int a1)
{
  void *v2; // rbx
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // r8
  void **v6; // rdx
  void *v7; // rcx
  void *v8; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  unsigned __int64 v12; // [rsp+50h] [rbp-18h]

  v2 = operator new(0x260u); /*0x3933d5*/
  memset(v2, 0, 0x260u); /*0x3933e8*/
  cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)v2); /*0x3933f0*/
  *(_QWORD *)v2 = &GJPathSprite::`vftable'; /*0x3933fd*/
  *((_QWORD *)v2 + 40) = &GJPathSprite::`vftable'; /*0x393407*/
  *((_QWORD *)v2 + 43) = &GJPathSprite::`vftable'; /*0x393415*/
  v3 = cocos2d::CCString::createWithFormat("pathIcon_%02d_001.png", a1); /*0x393425*/
  CString = cocos2d::CCString::getCString(v3); /*0x39342e*/
  *(_OWORD *)Block = 0; /*0x393437*/
  v11 = 0; /*0x39343c*/
  v12 = 0; /*0x393445*/
  v5 = -1; /*0x39344e*/
  do /*0x393458*/
    ++v5; /*0x393455*/
  while ( CString[v5] ); /*0x393458*/
  sub_3C230(Block); /*0x393467*/
  v6 = Block; /*0x39346d*/
  if ( v12 > 0xF ) /*0x393478*/
    v6 = (void **)Block[0]; /*0x393478*/
  if ( cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)v2, (const char *)v6) ) /*0x393481*/
  {
    *((_DWORD *)v2 + 150) = a1; /*0x3934d6*/
    if ( v12 > 0xF ) /*0x3934e5*/
    {
      v8 = Block[0]; /*0x3934ea*/
      if ( v12 + 1 >= 0x1000 ) /*0x3934f9*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x3934ff*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x39350e*/
          goto LABEL_14; /*0x39350e*/
      }
      j_j_free(v8); /*0x39352a*/
    }
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x393532*/
    return v2; /*0x393532*/
  }
  if ( v12 > 0xF ) /*0x393494*/
  {
    v7 = Block[0]; /*0x393499*/
    if ( v12 + 1 < 0x1000 /*0x3934bd*/
      || (v7 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) <= 0x1F) )
    {
      j_j_free(v7); /*0x3934bf*/
      goto LABEL_10; /*0x3934bf*/
    }
LABEL_14:
    invoke_watson(0, 0, 0, 0, 0); /*0x393510*/
  }
LABEL_10:
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0x3934c4*/
  return 0; /*0x39353b*/
}

// [3/4] Address: 0x393560
// Method: GJPathSprite::updateState
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJPathSprite_updateState(_DWORD *a1)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  int Stat; // ebx
  signed int v7; // edx
  __int64 v8; // rax
  struct cocos2d::CCLabelBMFont *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v16[32]; // [rsp+38h] [rbp-30h] BYREF

  if ( !qword_905FE0 ) /*0x393589*/
  {
    v13 = operator new(0x3E8u); /*0x393595*/
    qword_905FE0 = sub_2D2B40(v13); /*0x3935a3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3935b4*/
  }
  if ( !(unsigned __int8)sub_2E5B30(a1, 12, (unsigned int)(a1[150] + 5)) ) /*0x3935c6*/
    return sub_393750(a1); /*0x3935d2*/
  v3 = a1[150]; /*0x3935dc*/
  v4 = qword_905FE0; /*0x3935e2*/
  if ( !qword_905FE0 ) /*0x3935ec*/
  {
    v13 = operator new(0x3E8u); /*0x3935f8*/
    qword_905FE0 = sub_2D2B40(v13); /*0x393606*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x393617*/
    v4 = qword_905FE0; /*0x39361a*/
  }
  v5 = GameToolbox_intToString((__int64)v16, v3 + 29); /*0x393629*/
  if ( *(_QWORD *)(v5 + 24) > 0xFu ) /*0x393634*/
    v5 = *(_QWORD *)v5; /*0x393636*/
  Stat = GameStatsManager_getStat(v4, (const char *)v5); /*0x393644*/
  sub_3C310(v16); /*0x39364b*/
  v7 = (int)floorf((float)Stat / 100.0); /*0x393664*/
  if ( v7 >= 10 ) /*0x39366b*/
    return GJPathSprite_addShardSprite(a1); /*0x393670*/
  v8 = GameToolbox_intToString((__int64)v16, v7); /*0x39367f*/
  if ( *(_QWORD *)(v8 + 24) > 0xFu ) /*0x39368a*/
    v8 = *(_QWORD *)v8; /*0x39368c*/
  v9 = cocos2d::CCLabelBMFont::create((const char *)v8, (const char *)&qword_6FFF68); /*0x39369f*/
  sub_3C310(v16); /*0x3936a7*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v9 + 160LL))(v9); /*0x3936c1*/
  (*(void (__fastcall **)(_DWORD *, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v9, 1); /*0x3936d9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v14, 0.0, 1.0); /*0x3936ec*/
  v11 = v10; /*0x3936f2*/
  cocos2d::CCNode::convertToNodeSpace(a1, v15, &unk_904C50); /*0x393704*/
  cocos2d::CCPoint::operator+(v12, &v13, v11); /*0x393715*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v9 + 184LL))(v9, &v13); /*0x39372c*/
}

// [4/4] Address: 0x393a40
// Method: GJPathSprite::addShardSprite
// Hidden C++ exception states: #wind=1
void __fastcall GJPathSprite_addShardSprite(_DWORD *a1)
{
  unsigned __int64 v2; // rdi
  _BYTE *v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  char *v6; // rax
  char *v7; // rsi
  void *v8; // rcx
  void **v9; // rcx
  struct cocos2d::CCSprite *v10; // rbx
  __int64 v11; // rax
  void *v12; // rcx
  _BYTE *v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  _BYTE *v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  _BYTE *v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  _BYTE *v22; // rbx
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  _BYTE *v25; // rbx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  _BYTE *v28; // rbx
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  _BYTE *v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rbx
  _BYTE *v34; // rbx
  unsigned __int64 v35; // rcx
  __int64 v36; // rbx
  unsigned __int64 v37; // rdi
  _BYTE *v38; // rbx
  unsigned __int64 v39; // rcx
  __int64 v40; // rbx
  _BYTE v41[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v42[8]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v43[8]; // [rsp+40h] [rbp-30h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v45; // [rsp+58h] [rbp-18h]
  unsigned __int64 v46; // [rsp+60h] [rbp-10h]

  *(_OWORD *)Block = 0; /*0x393a69*/
  v45 = 0; /*0x393a6d*/
  v46 = 15; /*0x393a75*/
  LOBYTE(Block[0]) = 0; /*0x393a7d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v41, 0.0, 1.0); /*0x393a90*/
  switch ( a1[150] ) /*0x393abb*/
  {
    case 1: /*0x393abb*/
      v2 = v46; /*0x393abd*/
      if ( v46 >= 0x14 ) /*0x393ac5*/
      {
        v3 = Block[0]; /*0x393acf*/
        v45 = 20; /*0x393ad4*/
        memmove(Block[0], &xmmword_732B28, 0x14u); /*0x393aec*/
        v3[20] = 0; /*0x393af1*/
        goto LABEL_14; /*0x393af5*/
      }
      v4 = v46 >> 1; /*0x393afd*/
      v5 = 0x7FFFFFFFFFFFFFFFLL; /*0x393b00*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x393b13*/
      {
        v5 = 31; /*0x393b19*/
        if ( v46 + v4 > 0x1F ) /*0x393b21*/
          v5 = v46 + v4; /*0x393b21*/
      }
      v6 = (char *)sub_3C460(v5 + 1); /*0x393b29*/
      v45 = 20; /*0x393b2e*/
      v46 = v5; /*0x393b36*/
      *(_OWORD *)v6 = xmmword_732B28; /*0x393b41*/
      goto LABEL_8; /*0x393b41*/
    case 2: /*0x393abb*/
      v2 = v46; /*0x393c62*/
      if ( v46 >= 0x13 ) /*0x393c6a*/
      {
        v13 = Block[0]; /*0x393c74*/
        v45 = 19; /*0x393c79*/
        memmove(Block[0], &xmmword_732B58, 0x13u); /*0x393c91*/
        v13[19] = 0; /*0x393c96*/
        goto LABEL_14; /*0x393c9a*/
      }
      v14 = v46 >> 1; /*0x393ca2*/
      v15 = 0x7FFFFFFFFFFFFFFFLL; /*0x393ca5*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x393cb8*/
      {
        v15 = 31; /*0x393cbe*/
        if ( v14 + v46 > 0x1F ) /*0x393cc6*/
          v15 = v14 + v46; /*0x393cc6*/
      }
      v6 = (char *)sub_3C460(v15 + 1); /*0x393cce*/
      v45 = 19; /*0x393cd3*/
      v46 = v15; /*0x393cdb*/
      strcpy(v6, "iceShardBig_001.png"); /*0x393ce6*/
      goto LABEL_9; /*0x393d02*/
    case 3: /*0x393abb*/
      v2 = v46; /*0x393d07*/
      if ( v46 >= 0x16 ) /*0x393d0f*/
      {
        v16 = Block[0]; /*0x393d19*/
        v45 = 22; /*0x393d1e*/
        memmove(Block[0], &xmmword_732B40, 0x16u); /*0x393d36*/
        v16[22] = 0; /*0x393d3b*/
        goto LABEL_14; /*0x393d3f*/
      }
      v17 = v46 >> 1; /*0x393d47*/
      v18 = 0x7FFFFFFFFFFFFFFFLL; /*0x393d4a*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x393d5d*/
      {
        v18 = 31; /*0x393d63*/
        if ( v17 + v46 > 0x1F ) /*0x393d6b*/
          v18 = v17 + v46; /*0x393d6b*/
      }
      v6 = (char *)sub_3C460(v18 + 1); /*0x393d73*/
      v45 = 22; /*0x393d78*/
      v46 = v18; /*0x393d80*/
      strcpy(v6, "poisonShardBig_001.png"); /*0x393d8b*/
      goto LABEL_9; /*0x393da6*/
    case 4: /*0x393abb*/
      v2 = v46; /*0x393dab*/
      if ( v46 >= 0x16 ) /*0x393db3*/
      {
        v19 = Block[0]; /*0x393dbd*/
        v45 = 22; /*0x393dc2*/
        memmove(Block[0], "shadowShardBig_001.png", 0x16u); /*0x393dda*/
        v19[22] = 0; /*0x393ddf*/
        goto LABEL_14; /*0x393de3*/
      }
      v20 = v46 >> 1; /*0x393deb*/
      v21 = 0x7FFFFFFFFFFFFFFFLL; /*0x393dee*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x393e01*/
      {
        v21 = 31; /*0x393e07*/
        if ( v46 + v20 > 0x1F ) /*0x393e0f*/
          v21 = v46 + v20; /*0x393e0f*/
      }
      v6 = (char *)sub_3C460(v21 + 1); /*0x393e17*/
      v45 = 22; /*0x393e1c*/
      v46 = v21; /*0x393e24*/
      strcpy(v6, "shadowShardBig_001.png"); /*0x393e2f*/
      goto LABEL_9; /*0x393e4a*/
    case 5: /*0x393abb*/
      v2 = v46; /*0x393e4f*/
      if ( v46 >= 0x14 ) /*0x393e57*/
      {
        v22 = Block[0]; /*0x393e61*/
        v45 = 20; /*0x393e66*/
        memmove(Block[0], &xmmword_732B70, 0x14u); /*0x393e7e*/
        v22[20] = 0; /*0x393e83*/
        goto LABEL_14; /*0x393e87*/
      }
      v23 = v46 >> 1; /*0x393e8f*/
      v24 = 0x7FFFFFFFFFFFFFFFLL; /*0x393e92*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x393ea5*/
      {
        v24 = 31; /*0x393eab*/
        if ( v46 + v23 > 0x1F ) /*0x393eb3*/
          v24 = v46 + v23; /*0x393eb3*/
      }
      v6 = (char *)sub_3C460(v24 + 1); /*0x393ebb*/
      v45 = 20; /*0x393ec0*/
      v46 = v24; /*0x393ec8*/
      *(_OWORD *)v6 = xmmword_732B70; /*0x393ed3*/
LABEL_8:
      strcpy(v6 + 16, ".png"); /*0x393b4a*/
      goto LABEL_9; /*0x393b4a*/
    case 6: /*0x393abb*/
      v2 = v46; /*0x393ee1*/
      if ( v46 >= 0x19 ) /*0x393ee9*/
      {
        v25 = Block[0]; /*0x393ef3*/
        v45 = 25; /*0x393ef8*/
        memmove(Block[0], &xmmword_732BB8, 0x19u); /*0x393f10*/
        v25[25] = 0; /*0x393f15*/
        goto LABEL_14; /*0x393f19*/
      }
      v26 = v46 >> 1; /*0x393f21*/
      v27 = 0x7FFFFFFFFFFFFFFFLL; /*0x393f24*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x393f37*/
      {
        v27 = 31; /*0x393f3d*/
        if ( v46 + v26 > 0x1F ) /*0x393f45*/
          v27 = v46 + v26; /*0x393f45*/
      }
      v6 = (char *)sub_3C460(v27 + 1); /*0x393f4d*/
      v45 = 25; /*0x393f52*/
      v46 = v27; /*0x393f5a*/
      strcpy(v6, "shard0201ShardBig_001.png"); /*0x393f65*/
      goto LABEL_9; /*0x393f83*/
    case 7: /*0x393abb*/
      v2 = v46; /*0x393f88*/
      if ( v46 >= 0x19 ) /*0x393f90*/
      {
        v28 = Block[0]; /*0x393f9a*/
        v45 = 25; /*0x393f9f*/
        memmove(Block[0], &xmmword_732D00, 0x19u); /*0x393fb7*/
        v28[25] = 0; /*0x393fbc*/
        goto LABEL_14; /*0x393fc0*/
      }
      v29 = v46 >> 1; /*0x393fc8*/
      v30 = 0x7FFFFFFFFFFFFFFFLL; /*0x393fcb*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x393fde*/
      {
        v30 = 31; /*0x393fe4*/
        if ( v29 + v46 > 0x1F ) /*0x393fec*/
          v30 = v29 + v46; /*0x393fec*/
      }
      v6 = (char *)sub_3C460(v30 + 1); /*0x393ff4*/
      v45 = 25; /*0x393ff9*/
      v46 = v30; /*0x394001*/
      strcpy(v6, "shard0202ShardBig_001.png"); /*0x39400c*/
      goto LABEL_9; /*0x39402a*/
    case 8: /*0x393abb*/
      v2 = v46; /*0x39402f*/
      if ( v46 >= 0x19 ) /*0x394037*/
      {
        v31 = Block[0]; /*0x394041*/
        v45 = 25; /*0x394046*/
        memmove(Block[0], &xmmword_732CE0, 0x19u); /*0x39405e*/
        v31[25] = 0; /*0x394063*/
        goto LABEL_14; /*0x394067*/
      }
      v32 = v46 >> 1; /*0x39406f*/
      v33 = 0x7FFFFFFFFFFFFFFFLL; /*0x394072*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x394085*/
      {
        v33 = 31; /*0x39408b*/
        if ( v46 + v32 > 0x1F ) /*0x394093*/
          v33 = v46 + v32; /*0x394093*/
      }
      v6 = (char *)sub_3C460(v33 + 1); /*0x39409b*/
      v45 = 25; /*0x3940a0*/
      v46 = v33; /*0x3940a8*/
      strcpy(v6, "shard0203ShardBig_001.png"); /*0x3940b3*/
      goto LABEL_9; /*0x3940d1*/
    case 9: /*0x393abb*/
      v2 = v46; /*0x3940d6*/
      if ( v46 < 0x19 ) /*0x3940de*/
      {
        v35 = v46 >> 1; /*0x394116*/
        v36 = 0x7FFFFFFFFFFFFFFFLL; /*0x394119*/
        if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x39412c*/
        {
          v36 = 31; /*0x394132*/
          if ( v46 + v35 > 0x1F ) /*0x39413a*/
            v36 = v46 + v35; /*0x39413a*/
        }
        v6 = (char *)sub_3C460(v36 + 1); /*0x394142*/
        v45 = 25; /*0x394147*/
        v46 = v36; /*0x39414f*/
        strcpy(v6, "shard0204ShardBig_001.png"); /*0x39415a*/
LABEL_9:
        v7 = v6; /*0x393b51*/
        if ( v2 > 0xF ) /*0x393b58*/
        {
          v8 = Block[0]; /*0x393b5e*/
          if ( v2 + 1 >= 0x1000 ) /*0x393b6c*/
          {
            v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x393b72*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x393b81*/
LABEL_77:
              invoke_watson(0, 0, 0, 0, 0); /*0x39425d*/
          }
LABEL_12:
          j_j_free(v8); /*0x393b87*/
        }
LABEL_13:
        Block[0] = v7; /*0x393b8c*/
      }
      else
      {
        v34 = Block[0]; /*0x3940e8*/
        v45 = 25; /*0x3940ed*/
        memmove(Block[0], &xmmword_732D40, 0x19u); /*0x394105*/
        v34[25] = 0; /*0x39410a*/
      }
LABEL_14:
      v9 = Block; /*0x393b90*/
      if ( v46 > 0xF ) /*0x393b99*/
        v9 = (void **)Block[0]; /*0x393b99*/
      v10 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v9); /*0x393ba4*/
      (*(void (__fastcall **)(_DWORD *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v10, 1); /*0x393bbd*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 160LL))(v10); /*0x393bce*/
      cocos2d::CCNode::convertToNodeSpace(a1, v43, &unk_904C50); /*0x393be2*/
      cocos2d::CCPoint::operator+(v11, v42, v41); /*0x393bf3*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v10 + 184LL))(v10, v42); /*0x393c03*/
LABEL_17:
      if ( v46 > 0xF ) /*0x393c12*/
      {
        v12 = Block[0]; /*0x393c1b*/
        if ( v46 + 1 >= 0x1000 ) /*0x393c29*/
        {
          v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x393c33*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x393c42*/
            invoke_watson(0, 0, 0, 0, 0); /*0x393c5b*/
        }
        j_j_free(v12); /*0x394277*/
      }
      return;
    case 0xA: /*0x393abb*/
      v37 = v46; /*0x39417d*/
      if ( v46 >= 0x19 ) /*0x394185*/
      {
        v38 = Block[0]; /*0x39418f*/
        v45 = 25; /*0x394194*/
        memmove(Block[0], &xmmword_732D20, 0x19u); /*0x3941ac*/
        v38[25] = 0; /*0x3941b1*/
        goto LABEL_14; /*0x3941b5*/
      }
      v39 = v46 >> 1; /*0x3941bd*/
      v40 = 0x7FFFFFFFFFFFFFFFLL; /*0x3941c0*/
      if ( v46 <= 0x7FFFFFFFFFFFFFFFLL - (v46 >> 1) ) /*0x3941d3*/
      {
        v40 = 31; /*0x3941d9*/
        if ( v46 + v39 > 0x1F ) /*0x3941e1*/
          v40 = v46 + v39; /*0x3941e1*/
      }
      v7 = (char *)sub_3C460(v40 + 1); /*0x3941ee*/
      v45 = 25; /*0x3941f1*/
      v46 = v40; /*0x3941f9*/
      strcpy(v7, "shard0205ShardBig_001.png"); /*0x394204*/
      if ( v37 <= 0xF ) /*0x394226*/
        goto LABEL_13; /*0x394226*/
      v8 = Block[0]; /*0x394230*/
      if ( v37 + 1 >= 0x1000 ) /*0x39423e*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x394248*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x394257*/
          goto LABEL_77; /*0x394257*/
      }
      goto LABEL_12; /*0x394257*/
    default:
      goto LABEL_17;
  }
}
