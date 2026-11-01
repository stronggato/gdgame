#include <Geode/binding/ForceBlockGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x10bc10
// Method: ForceBlockGameObject::calculateForceToTarget
unsigned __int64 __fastcall ForceBlockGameObject_calculateForceToTarget(__int64 a1)
{
  unsigned __int64 v1; // r14
  int v3; // ecx
  int v4; // r15d
  _DWORD *v5; // rax
  __int64 v6; // rdx
  bool v7; // r13
  char v8; // al
  char v9; // al
  __int64 **v10; // rdi
  __int64 *v11; // rdi
  const char *v12; // rsi
  __int64 v13; // rbx
  cocos2d::CCSpriteFrameCache *v14; // rax
  struct cocos2d::CCSpriteFrame *v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // rdi
  const char *v18; // rsi
  __int64 v19; // rbx
  cocos2d::CCSpriteFrameCache *v20; // rax
  struct cocos2d::CCSpriteFrame *v21; // rax
  __int64 *v22; // rsi
  __int64 v23; // rdi
  const char *v24; // rbx
  cocos2d::CCSpriteFrameCache *v25; // rax
  struct cocos2d::CCSpriteFrame *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  void (__fastcall ***v30)(_QWORD, _QWORD); // r12
  unsigned __int8 v31; // si
  __int16 *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int8 v36; // r12
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  void (__fastcall ***v41)(_QWORD, _QWORD); // r15
  __int16 *v42; // rdx
  unsigned __int8 v43; // si
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // bl
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned __int64 result; // rax
  void (__fastcall ***v51)(_QWORD, _QWORD); // rsi
  __int16 *v52; // rdx
  unsigned __int8 v53; // di
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // [rsp+20h] [rbp-58h]
  int v57; // [rsp+24h] [rbp-54h]
  char v58; // [rsp+80h] [rbp+8h]
  __int16 v59; // [rsp+88h] [rbp+10h] BYREF
  char v60; // [rsp+8Ah] [rbp+12h]
  _BYTE v61[3]; // [rsp+90h] [rbp+18h] BYREF
  _BYTE v62[3]; // [rsp+98h] [rbp+20h] BYREF

  v1 = 0; /*0x10bc29*/
  v59 = -1; /*0x10bc33*/
  v3 = *(_DWORD *)(a1 + 728); /*0x10bc39*/
  v4 = 0; /*0x10bc3f*/
  v60 = -1; /*0x10bc42*/
  memset(v61, 110, sizeof(v61)); /*0x10bc46*/
  memset(v62, 100, sizeof(v62)); /*0x10bc50*/
  v5 = &unk_6FDE78; /*0x10bc5a*/
  while ( *v5 != v3 ) /*0x10bc63*/
  {
    ++v4; /*0x10bc65*/
    if ( (__int64)++v5 >= (__int64)dword_6FDE88 ) /*0x10bc6f*/
    {
      v4 = 0; /*0x10bc71*/
      break; /*0x10bc71*/
    }
  }
  v6 = *(_BYTE *)(a1 + 744) != 0; /*0x10bc74*/
  v57 = *(_DWORD *)(a1 + 740); /*0x10bc87*/
  v56 = *(_BYTE *)(a1 + 744) != 0; /*0x10bc8e*/
  v7 = v3 != 3; /*0x10bc92*/
  if ( v3 || *(_DWORD *)(a1 + 740) ) /*0x10bc7e*/
  {
    v58 = 0; /*0x10bca0*/
    if ( v3 != 2 ) /*0x10bcaa*/
      goto LABEL_11; /*0x10bcaa*/
    v8 = *(_BYTE *)(a1 + 986); /*0x10bcac*/
    v56 = v8 == 0; /*0x10bcc1*/
    if ( v8 ) /*0x10bcc5*/
      v7 = 0; /*0x10bcc5*/
  }
  v58 = 1; /*0x10bcc9*/
LABEL_11:
  v9 = *(_BYTE *)(a1 + 920); /*0x10bcd1*/
  if ( v9 ) /*0x10bcda*/
  {
    v4 = *(_BYTE *)(a1 + 977) != 0; /*0x10bce6*/
    v7 = 0; /*0x10bcea*/
    v58 = 0; /*0x10bcef*/
  }
  v10 = *(__int64 ***)(a1 + 824); /*0x10bcf6*/
  if ( v10 != *(__int64 ***)(a1 + 832) ) /*0x10bd09*/
  {
    v11 = *v10; /*0x10bd0b*/
    v12 = "dtrack_pillar2_001.png"; /*0x10bd0e*/
    if ( !v9 ) /*0x10bd17*/
      v12 = "dtrack_graph_001.png"; /*0x10bd17*/
    v13 = *v11; /*0x10bd1f*/
    v14 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x10bd22*/
    v15 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v14, v12); /*0x10bd2e*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v13 + 1008))(v11, v15); /*0x10bd3a*/
  }
  v16 = *(_QWORD *)(a1 + 872); /*0x10bd40*/
  if ( (unsigned __int64)((*(_QWORD *)(a1 + 880) - v16) >> 3) > 1 ) /*0x10bd59*/
  {
    v17 = *(__int64 **)(v16 + 8); /*0x10bd5b*/
    v18 = "dtrack_list_001.png"; /*0x10bd5f*/
    if ( *(_DWORD *)(a1 + 728) != 2 ) /*0x10bd6d*/
      v18 = "dtrack_rate_001.png"; /*0x10bd6d*/
    v19 = *v17; /*0x10bd75*/
    v20 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x10bd78*/
    v21 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v20, v18); /*0x10bd84*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v19 + 1008))(v17, v21); /*0x10bd90*/
  }
  v22 = *(__int64 **)(a1 + 928); /*0x10bd96*/
  if ( v22 ) /*0x10bda0*/
  {
    v23 = *v22; /*0x10bdb0*/
    v24 = "dtrackBtn_global_001.png"; /*0x10bdb3*/
    if ( *(_BYTE *)(a1 + 920) ) /*0x10bda2*/
      v24 = "dtrackBtn_local_001.png"; /*0x10bdba*/
    v25 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x10bdbe*/
    v26 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v25, v24); /*0x10bdca*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v23 + 1008))(v22, v26); /*0x10bdd6*/
  }
  v27 = *(_QWORD *)(a1 + 896); /*0x10bddc*/
  if ( v27 ) /*0x10bde6*/
  {
    LOBYTE(v6) = 0x80; /*0x10bdef*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v27 + 320) + 40LL))(v27 + 320, v6); /*0x10bdf4*/
  }
  v28 = *(_QWORD *)(a1 + 824); /*0x10bdf7*/
  v29 = 0; /*0x10bdfe*/
  if ( (*(_QWORD *)(a1 + 832) - v28) >> 3 ) /*0x10be0b*/
  {
    do /*0x10becd*/
    {
      v30 = *(void (__fastcall ****)(_QWORD, _QWORD))(v28 + 8 * v29); /*0x10be29*/
      if ( *(_BYTE *)(a1 + 920) && (int)v29 >= 2 ) /*0x10be32*/
      {
        v31 = 0; /*0x10be34*/
        v32 = (__int16 *)v62; /*0x10be37*/
      }
      else
      {
        v32 = &v59; /*0x10be44*/
        v31 = 1; /*0x10be54*/
        if ( (_DWORD)v29 != v4 ) /*0x10be57*/
          v32 = (__int16 *)v61; /*0x10be57*/
      }
      (*v30[40])(v30 + 40, v32); /*0x10be6b*/
      v33 = 70; /*0x10be7d*/
      if ( v31 ) /*0x10be85*/
        v33 = 255; /*0x10be85*/
      v30[40][5](v30 + 40, v33); /*0x10be89*/
      v34 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD)))(*v30)[63])(v30); /*0x10be93*/
      if ( v34 ) /*0x10be9c*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 936LL))(v34, v31); /*0x10beaf*/
      v28 = *(_QWORD *)(a1 + 824); /*0x10beb2*/
      ++v29; /*0x10beb9*/
    }
    while ( v29 < (*(_QWORD *)(a1 + 832) - v28) >> 3 ); /*0x10becd*/
    v1 = 0; /*0x10bed3*/
  }
  v35 = *(_QWORD *)(a1 + 904); /*0x10bed6*/
  v36 = 85; /*0x10bee2*/
  if ( v35 ) /*0x10beeb*/
  {
    v37 = v35 + 320; /*0x10beed*/
    v38 = 85; /*0x10bef4*/
    if ( v7 ) /*0x10befa*/
      v38 = 128; /*0x10befa*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 40LL))(v37, v38); /*0x10bf00*/
  }
  v39 = *(_QWORD *)(a1 + 848); /*0x10bf03*/
  v40 = 0; /*0x10bf0a*/
  if ( (*(_QWORD *)(a1 + 856) - v39) >> 3 ) /*0x10bf17*/
  {
    do /*0x10bfcd*/
    {
      v41 = *(void (__fastcall ****)(_QWORD, _QWORD))(v39 + 8 * v40); /*0x10bf30*/
      if ( v7 ) /*0x10bf37*/
      {
        v42 = &v59; /*0x10bf3c*/
        v43 = 1; /*0x10bf4c*/
        if ( (_DWORD)v40 != v57 ) /*0x10bf4f*/
          v42 = (__int16 *)v61; /*0x10bf4f*/
      }
      else
      {
        v43 = 0; /*0x10bf55*/
        v42 = (__int16 *)v62; /*0x10bf58*/
      }
      (*v41[40])(v41 + 40, v42); /*0x10bf6e*/
      v44 = 70; /*0x10bf7e*/
      if ( v43 ) /*0x10bf86*/
        v44 = 255; /*0x10bf86*/
      v41[40][5](v41 + 40, v44); /*0x10bf8a*/
      v45 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD)))(*v41)[63])(v41); /*0x10bf93*/
      if ( v45 ) /*0x10bf9c*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v45 + 936LL))(v45, v43); /*0x10bfaf*/
      v39 = *(_QWORD *)(a1 + 848); /*0x10bfb2*/
      ++v40; /*0x10bfb9*/
    }
    while ( v40 < (*(_QWORD *)(a1 + 856) - v39) >> 3 ); /*0x10bfcd*/
    v1 = 0; /*0x10bfd3*/
    v36 = 85; /*0x10bfdb*/
  }
  v46 = *(_QWORD *)(a1 + 912); /*0x10bfe1*/
  v47 = v58; /*0x10bfed*/
  if ( v46 ) /*0x10bff8*/
  {
    v48 = v46 + 320; /*0x10bffa*/
    if ( v58 ) /*0x10c003*/
      v36 = 0x80; /*0x10c003*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 40LL))(v48, v36); /*0x10c00e*/
  }
  v49 = *(_QWORD *)(a1 + 872); /*0x10c011*/
  result = (*(_QWORD *)(a1 + 880) - v49) >> 3; /*0x10c027*/
  if ( result ) /*0x10c02e*/
  {
    do /*0x10c0e8*/
    {
      v51 = *(void (__fastcall ****)(_QWORD, _QWORD))(v49 + 8 * v1); /*0x10c040*/
      if ( v47 ) /*0x10c046*/
      {
        v52 = &v59; /*0x10c04b*/
        v53 = 1; /*0x10c05b*/
        if ( (_DWORD)v1 != v56 ) /*0x10c05e*/
          v52 = (__int16 *)v61; /*0x10c05e*/
      }
      else
      {
        v53 = 0; /*0x10c064*/
        v52 = (__int16 *)v62; /*0x10c067*/
      }
      (*v51[40])(v51 + 40, v52); /*0x10c07d*/
      v54 = 70; /*0x10c07f*/
      if ( v53 ) /*0x10c093*/
        v54 = 255; /*0x10c093*/
      v51[40][5](v51 + 40, v54); /*0x10c09d*/
      v55 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD)))(*v51)[63])(v51); /*0x10c0a6*/
      if ( v55 ) /*0x10c0af*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 936LL))(v55, v53); /*0x10c0c2*/
      v49 = *(_QWORD *)(a1 + 872); /*0x10c0c5*/
      ++v1; /*0x10c0cc*/
      v47 = v58; /*0x10c0d6*/
      result = (*(_QWORD *)(a1 + 880) - v49) >> 3; /*0x10c0e1*/
    }
    while ( v1 < result ); /*0x10c0e8*/
  }
  return result; /*0x10c0f3*/
}

// [2/3] Address: 0x65d790
// Method: ForceBlockGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall ForceBlockGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x65d7c8*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65d7d5*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x65d7e7*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x65d7fe*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d80d*/
  sub_3C310(v12); /*0x65d819*/
  if ( *(float *)(a1 + 1856) != 0.0 ) /*0x65d835*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d837*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d83c*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d84b*/
    fmt::BasicWriter<char>::operator<<(v13, 149); /*0x65d85b*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d861*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d866*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d875*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x65d88b*/
  }
  if ( *(float *)(a1 + 1860) != 0.0 ) /*0x65d89e*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d8a0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d8a5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d8b4*/
    fmt::BasicWriter<char>::operator<<(v13, 526); /*0x65d8c4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d8ca*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d8cf*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d8de*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x65d8f4*/
  }
  if ( *(float *)(a1 + 1864) != 0.0 ) /*0x65d907*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d909*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d90e*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d91d*/
    fmt::BasicWriter<char>::operator<<(v13, 527); /*0x65d92d*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d933*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d938*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d947*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x65d95d*/
  }
  if ( *(_BYTE *)(a1 + 1868) ) /*0x65d963*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d96c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d971*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d980*/
    fmt::BasicWriter<char>::operator<<(v13, 528); /*0x65d990*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d996*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d99b*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d9aa*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1868)); /*0x65d9bc*/
  }
  if ( *(_BYTE *)(a1 + 1869) ) /*0x65d9c2*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d9cb*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d9d0*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d9df*/
    fmt::BasicWriter<char>::operator<<(v13, 529); /*0x65d9ef*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d9f5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d9fa*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65da09*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1869)); /*0x65da1b*/
  }
  if ( *(_DWORD *)(a1 + 1872) ) /*0x65da21*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65da2a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65da2f*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65da3e*/
    fmt::BasicWriter<char>::operator<<(v13, 530); /*0x65da4e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65da54*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65da59*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65da68*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1872)); /*0x65da79*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x65da84*/
  *(_OWORD *)a2 = 0; /*0x65da8d*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65da90*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65da94*/
  v8 = -1; /*0x65da98*/
  do /*0x65daa3*/
    ++v8; /*0x65daa0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x65daa3*/
  sub_3C230(a2); /*0x65dab0*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65dabb*/
  return a2; /*0x65dac4*/
}

// [3/3] Address: 0x65daf0
// Method: ForceBlockGameObject::customObjectSetup
int __fastcall ForceBlockGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  cocos2d *v7; // rcx
  const char *v8; // rcx
  float v9; // xmm8_4
  cocos2d *v10; // rcx
  const char *v11; // rcx
  float v12; // xmm8_4
  cocos2d *v13; // rcx
  const char *v14; // rcx
  float v15; // xmm8_4
  int v16; // eax
  const char *v17; // rcx
  int v18; // eax
  const char *v19; // rcx
  __int64 v20; // rax
  const char *v21; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65db18*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1192LL) ) /*0x65db28*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 4768LL); /*0x65db3d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4792LL) > 0xFu ) /*0x65db49*/
      v8 = *(const char **)v8; /*0x65db4b*/
    v9 = atof(v8); /*0x65db58*/
    isnan(v9); /*0x65db61*/
  }
  *(float *)(a1 + 1856) = cocos2d::clampf(v7, -10000.0, 10000.0, a4); /*0x65db9d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4208LL) ) /*0x65dba8*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 16832LL); /*0x65dbba*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16856LL) > 0xFu ) /*0x65dbc6*/
      v11 = *(const char **)v11; /*0x65dbc8*/
    v12 = atof(v11); /*0x65dbd5*/
    isnan(v12); /*0x65dbde*/
  }
  *(float *)(a1 + 1860) = cocos2d::clampf(v10, -10000.0, 10000.0, a4); /*0x65dc17*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4216LL) ) /*0x65dc22*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 16864LL); /*0x65dc2f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16888LL) > 0xFu ) /*0x65dc3b*/
      v14 = *(const char **)v14; /*0x65dc3d*/
    v15 = atof(v14); /*0x65dc4a*/
    isnan(v15); /*0x65dc53*/
  }
  *(float *)(a1 + 1864) = cocos2d::clampf(v13, -10000.0, 10000.0, a4); /*0x65dc97*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4224LL) ) /*0x65dca2*/
  {
    v17 = (const char *)(*(_QWORD *)a2 + 16896LL); /*0x65dcb3*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16920LL) > 0xFu ) /*0x65dcbf*/
      v17 = *(const char **)v17; /*0x65dcc1*/
    v16 = atoi(v17); /*0x65dcc4*/
  }
  else
  {
    v16 = 0; /*0x65dcac*/
  }
  *(_BYTE *)(a1 + 1868) = v16 != 0; /*0x65dccf*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4232LL) ) /*0x65dcd8*/
  {
    v19 = (const char *)(*(_QWORD *)a2 + 16928LL); /*0x65dce9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16952LL) > 0xFu ) /*0x65dcf5*/
      v19 = *(const char **)v19; /*0x65dcf7*/
    v18 = atoi(v19); /*0x65dcfa*/
  }
  else
  {
    v18 = 0; /*0x65dce2*/
  }
  *(_BYTE *)(a1 + 1869) = v18 != 0; /*0x65dd05*/
  v20 = *(_QWORD *)a3; /*0x65dd0b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4240LL) ) /*0x65dd13*/
  {
    v21 = (const char *)(*(_QWORD *)a2 + 16960LL); /*0x65dd35*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16984LL) > 0xFu ) /*0x65dd41*/
      v21 = *(const char **)v21; /*0x65dd43*/
    LODWORD(v20) = atoi(v21); /*0x65dd46*/
    *(_DWORD *)(a1 + 1872) = v20; /*0x65dd4c*/
  }
  else
  {
    *(_DWORD *)(a1 + 1872) = 0; /*0x65dd1d*/
  }
  return v20; /*0x65dd27*/
}
