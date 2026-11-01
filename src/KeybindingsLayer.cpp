#include <Geode/binding/KeybindingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0x19bb10
// Method: KeybindingsLayer::rebuildContent
__int64 __fastcall KeybindingsLayer_rebuildContent(unsigned int *a1)
{
  return (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 1200LL))(a1, a1[262]);
}

// [2/14] Address: 0x3d2590
// Method: KeybindingsLayer::setupTabs
// Hidden C++ exception states: #wind=1
__int64 __fastcall KeybindingsLayer_setupTabs(__int64 a1)
{
  __m128i si128; // xmm6
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-40h] BYREF
  __m128i v11; // [rsp+40h] [rbp-30h]

  Block[1] = 0; /*0x3d25b6*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F50); /*0x3d25ba*/
  v11 = si128; /*0x3d25c2*/
  Block[0] = (void *)0x79616C70656D6147LL; /*0x3d25d1*/
  sub_6675A0(a1, Block, 0); /*0x3d25e0*/
  if ( v11.m128i_i64[1] > 0xFuLL ) /*0x3d25ee*/
  {
    v3 = Block[0]; /*0x3d25f3*/
    if ( (unsigned __int64)(v11.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d2601*/
    {
      v3 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d2607*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v3 - 8) > 0x1F ) /*0x3d2616*/
        goto LABEL_24; /*0x3d2616*/
    }
    j_j_free(v3); /*0x3d261c*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_830F50); /*0x3d2621*/
  }
  Block[1] = 0; /*0x3d262c*/
  v11 = si128; /*0x3d2630*/
  Block[0] = (void *)0x6563697463617250LL; /*0x3d263f*/
  sub_6675A0(a1, Block, 0); /*0x3d2651*/
  if ( v11.m128i_i64[1] > 0xFuLL ) /*0x3d265f*/
  {
    v4 = Block[0]; /*0x3d2664*/
    if ( (unsigned __int64)(v11.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d2672*/
    {
      v4 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d2678*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v4 - 8) > 0x1F ) /*0x3d2687*/
        goto LABEL_24; /*0x3d2687*/
    }
    j_j_free(v4); /*0x3d268d*/
  }
  *(_OWORD *)Block = 0; /*0x3d2695*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_830F30); /*0x3d26a1*/
  strcpy((char *)Block, "Editor"); /*0x3d26ac*/
  sub_6675A0(a1, Block, 0); /*0x3d26c8*/
  if ( v11.m128i_i64[1] > 0xFuLL ) /*0x3d26d6*/
  {
    v5 = Block[0]; /*0x3d26db*/
    if ( (unsigned __int64)(v11.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d26e9*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d26ef*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x3d26fe*/
        goto LABEL_24; /*0x3d26fe*/
    }
    j_j_free(v5); /*0x3d2704*/
  }
  *(_OWORD *)Block = 0; /*0x3d270c*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_830F20); /*0x3d2718*/
  strcpy((char *)Block, "Tools"); /*0x3d2723*/
  sub_6675A0(a1, Block, 0); /*0x3d273e*/
  if ( v11.m128i_i64[1] > 0xFuLL ) /*0x3d274c*/
  {
    v6 = Block[0]; /*0x3d2751*/
    if ( (unsigned __int64)(v11.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d275f*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d2765*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x3d2774*/
        goto LABEL_24; /*0x3d2774*/
    }
    j_j_free(v6); /*0x3d277a*/
  }
  *(_OWORD *)Block = 0; /*0x3d2782*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_830F10); /*0x3d278e*/
  strcpy((char *)Block, "View"); /*0x3d2793*/
  sub_6675A0(a1, Block, 0); /*0x3d27a8*/
  if ( v11.m128i_i64[1] <= 0xFuLL ) /*0x3d27b6*/
    goto LABEL_21; /*0x3d27b6*/
  v7 = Block[0]; /*0x3d27bb*/
  if ( (unsigned __int64)(v11.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d27c9*/
  {
    v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d27cf*/
    if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x3d27de*/
LABEL_24:
      invoke_watson(0, 0, 0, 0, 0); /*0x3d284a*/
  }
  j_j_free(v7); /*0x3d27e0*/
LABEL_21:
  *(_OWORD *)Block = 0; /*0x3d27e5*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_830EE0); /*0x3d27f4*/
  LOWORD(Block[0]) = 83; /*0x3d27f9*/
  *(_DWORD *)(a1 + 1176) = sub_6675A0(a1, Block, "searchIcon_001.png"); /*0x3d2812*/
  if ( v11.m128i_i64[1] > 0xFuLL ) /*0x3d2820*/
  {
    v8 = Block[0]; /*0x3d2825*/
    if ( (unsigned __int64)(v11.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d2833*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d2839*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x3d2848*/
        goto LABEL_24; /*0x3d2848*/
    }
    j_j_free(v8); /*0x3d2864*/
  }
  return sub_6677B0(a1); /*0x3d2871*/
}

// [3/14] Address: 0x3d3d20
// Method: KeybindingsLayer::showTab
// Hidden C++ exception states: #wind=3
void __fastcall KeybindingsLayer_showTab(__int64 a1, int a2)
{
  int v4; // r12d
  int v5; // edi
  bool v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  char v29; // bl
  void *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  float v33; // [rsp+30h] [rbp-79h] BYREF
  float v34; // [rsp+34h] [rbp-75h]
  _BYTE v35[16]; // [rsp+38h] [rbp-71h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-61h] BYREF
  __m128i si128; // [rsp+58h] [rbp-51h]
  _BYTE v38[32]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v39[32]; // [rsp+88h] [rbp-21h] BYREF

  if ( a2 >= 0 && a2 < (int)((*(_QWORD *)(a1 + 1008) - *(_QWORD *)(a1 + 1000)) / 88LL) ) /*0x3d3d90*/
  {
    v4 = *(_DWORD *)(a1 + 1048); /*0x3d3d96*/
    v5 = *(_DWORD *)(a1 + 1176); /*0x3d3d9d*/
    v6 = a2 == v5; /*0x3d3da6*/
    if ( *(_QWORD *)(a1 + 1120) && v4 >= 0 ) /*0x3d3dba*/
    {
      v7 = sub_D08C0(v39, (unsigned int)v4); /*0x3d3dcc*/
      *(_OWORD *)Block = 0; /*0x3d3dd2*/
      Block[0] = (void *)sub_3C460(32); /*0x3d3de0*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_830FD0); /*0x3d3dec*/
      strcpy((char *)Block[0], "keybindings.tab."); /*0x3d3df8*/
      sub_74FF0(v38, v8, Block, v7); /*0x3d3e0a*/
      v9 = *(_QWORD *)(a1 + 1120); /*0x3d3e10*/
      v10 = sub_7FC90(); /*0x3d3e17*/
      *(_DWORD *)(*(_QWORD *)sub_82350(v10, v35, v38) + 48LL) = *(_DWORD *)(v9 + 436); /*0x3d3e35*/
      sub_3C310(v38); /*0x3d3e3c*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x3d3e4a*/
      {
        v11 = Block[0]; /*0x3d3e4f*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d3e5d*/
        {
          v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d3e63*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x3d3e72*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3d3e83*/
        }
        j_j_free(v11); /*0x3d3e8a*/
      }
      sub_3C310(v39); /*0x3d3e94*/
    }
    v12 = *(_QWORD *)(a1 + 1096); /*0x3d3e99*/
    if ( v12 ) /*0x3d3ea3*/
    {
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v12 + 336LL))(v12, v6); /*0x3d3eac*/
      (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1096) + 920LL))(*(_QWORD *)(a1 + 1096), v6); /*0x3d3ec0*/
      if ( v4 == v5 && a2 != v5 ) /*0x3d3ece*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1096) + 1032LL))(*(_QWORD *)(a1 + 1096), 0); /*0x3d3edc*/
    }
    v13 = *(_QWORD *)(a1 + 1104); /*0x3d3ee2*/
    if ( v13 ) /*0x3d3eec*/
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v13 + 336LL))(v13, v6); /*0x3d3ef5*/
    v14 = *(_QWORD *)(a1 + 1112); /*0x3d3efb*/
    if ( v14 ) /*0x3d3f05*/
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v14 + 336LL))(v14, v6); /*0x3d3f0e*/
    *(_DWORD *)(a1 + 1048) = a2; /*0x3d3f14*/
    v15 = cocos2d::CCDirector::sharedDirector(v14); /*0x3d3f1b*/
    cocos2d::CCDirector::getWinSize(v15, &v33); /*0x3d3f28*/
    v16 = *(float *)(a1 + 732) - 30.0; /*0x3d3f36*/
    v17 = (float)(v34 * 0.5) - 128.0; /*0x3d3f4e*/
    if ( a2 == v5 ) /*0x3d3f59*/
      v18 = 64.0; /*0x3d3f5b*/
    else
      v18 = 96.0; /*0x3d3f65*/
    if ( *(_QWORD *)(a1 + 1120) ) /*0x3d3f71*/
    {
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)v35, v16, (float)((float)(v34 * 0.5) + v18) - v17); /*0x3d3f8a*/
      v20 = v19; /*0x3d3f90*/
      v21 = *(_QWORD *)(a1 + 1120); /*0x3d3f93*/
      cocos2d::CCSize::operator=(v21 + 424, v19); /*0x3d3fa4*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 312LL))(v21, v20); /*0x3d3fba*/
      sub_7FF60(v21); /*0x3d3fc0*/
      sub_801A0(); /*0x3d3fc5*/
      sub_7FFD0(v21); /*0x3d3fcd*/
      v22 = *(__int64 **)(a1 + 1120); /*0x3d3fd2*/
      v23 = *v22; /*0x3d3fd9*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v35, (float)(v33 * 0.5) - (float)(v16 * 0.5), v17); /*0x3d3ffc*/
      (*(void (__fastcall **)(__int64 *, __int64))(v23 + 184))(v22, v24); /*0x3d4008*/
      LOBYTE(v25) = 1; /*0x3d401f*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 1120) + 416LL) + 576LL))( /*0x3d4021*/
        *(_QWORD *)(*(_QWORD *)(a1 + 1120) + 416LL),
        v25);
      v26 = cocos2d::CCMenu::create(); /*0x3d4027*/
      *(_QWORD *)(a1 + 1128) = v26; /*0x3d402d*/
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v26 + 288LL))(v26, &unk_904E50); /*0x3d4048*/
      (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 1128) + 312LL))(*(_QWORD *)(a1 + 1128), &unk_904E68); /*0x3d405c*/
      (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 1128) + 184LL))(*(_QWORD *)(a1 + 1128), &unk_904E50); /*0x3d4073*/
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 1120) + 416LL) + 456LL))( /*0x3d4097*/
        *(_QWORD *)(*(_QWORD *)(a1 + 1120) + 416LL),
        *(_QWORD *)(a1 + 1128),
        2);
    }
    sub_3D2C90(a1, (unsigned int)a2); /*0x3d40a3*/
    if ( *(_QWORD *)(a1 + 1120) ) /*0x3d40a8*/
    {
      v27 = sub_D08C0(v39, (unsigned int)a2); /*0x3d40c2*/
      *(_OWORD *)Block = 0; /*0x3d40c8*/
      Block[0] = (void *)sub_3C460(32); /*0x3d40d6*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_830FD0); /*0x3d40e2*/
      strcpy((char *)Block[0], "keybindings.tab."); /*0x3d40ee*/
      sub_74FF0(v38, v28, Block, v27); /*0x3d4100*/
      v29 = sub_7FE90(*(_QWORD *)(a1 + 1120), v38); /*0x3d4116*/
      sub_3C310(v38); /*0x3d411d*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x3d412b*/
      {
        v30 = Block[0]; /*0x3d4130*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d413e*/
        {
          v30 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d4144*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v30 - 8) > 0x1F ) /*0x3d4153*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3d4164*/
        }
        j_j_free(v30); /*0x3d416e*/
      }
      sub_3C310(v39); /*0x3d4178*/
      if ( !v29 ) /*0x3d417f*/
      {
        v31 = *(_QWORD *)(a1 + 1120); /*0x3d4181*/
        *(_DWORD *)(v31 + 436) = 0; /*0x3d4188*/
        *(_DWORD *)(v31 + 476) = 0; /*0x3d418f*/
        sub_7FF60(v31); /*0x3d4196*/
        sub_7FFD0(v32); /*0x3d419b*/
      }
    }
    sub_667FE0(a1); /*0x3d41a3*/
    sub_6680D0(a1); /*0x3d41ab*/
  }
}

// [4/14] Address: 0x3d42f0
// Method: KeybindingsLayer::actionsToShow
// Hidden C++ exception states: #wind=2
_QWORD *__fastcall KeybindingsLayer_actionsToShow(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // eax
  _QWORD *v4; // r14
  __int64 v5; // rbx
  int v6; // ecx
  unsigned int *v7; // r12
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r13
  void **v13; // r15
  char v14; // bl
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  void **v17; // rbp
  char *v18; // rbp
  _QWORD *v19; // rax
  int v20; // edi
  int v21; // eax
  void **v22; // rax
  unsigned __int64 i; // rdi
  __int64 v24; // rax
  int v27; // [rsp+38h] [rbp-A0h]
  _QWORD *v28; // [rsp+40h] [rbp-98h]
  void *Block[2]; // [rsp+58h] [rbp-80h] BYREF
  __int128 v31; // [rsp+68h] [rbp-70h]
  _BYTE Src[32]; // [rsp+78h] [rbp-60h] BYREF

  v3 = a3; /*0x3d4319*/
  v4 = a2; /*0x3d4320*/
  v28 = a2; /*0x3d4323*/
  v5 = a1; /*0x3d4328*/
  *a2 = 0; /*0x3d433d*/
  a2[1] = 0; /*0x3d4344*/
  a2[2] = 0; /*0x3d434c*/
  v6 = *(_DWORD *)(a1 + 1176); /*0x3d435c*/
  v27 = v6; /*0x3d4362*/
  if ( a3 != v6 || *(_QWORD *)(v5 + 1160) ) /*0x3d436b*/
  {
    v7 = (unsigned int *)&unk_6FE4D0; /*0x3d4379*/
    while ( 1 ) /*0x3d4387*/
    {
      if ( v3 == v6 ) /*0x3d4389*/
      {
        v8 = sub_386640(*v7, a2, &dword_6FEB70); /*0x3d4393*/
        *(_OWORD *)Block = 0; /*0x3d439b*/
        v31 = 0; /*0x3d43a3*/
        v9 = -1; /*0x3d43a9*/
        do /*0x3d43b3*/
          ++v9; /*0x3d43b0*/
        while ( *(_BYTE *)(v8 + v9) ); /*0x3d43b3*/
        sub_3C230(Block); /*0x3d43c2*/
        v10 = (_QWORD *)(v5 + 1144); /*0x3d43c7*/
        v11 = *(_QWORD *)(v5 + 1160); /*0x3d43ce*/
        v12 = *((_QWORD *)&v31 + 1); /*0x3d43d2*/
        v13 = (void **)Block[0]; /*0x3d43d7*/
        if ( v11 <= (unsigned __int64)v31 ) /*0x3d43e1*/
        {
          v15 = 0; /*0x3d43e7*/
          do /*0x3d452a*/
          {
            v16 = 0; /*0x3d43f0*/
            if ( !v11 ) /*0x3d43f5*/
            {
LABEL_17:
              v14 = 1; /*0x3d4449*/
              goto LABEL_18; /*0x3d4449*/
            }
            while ( 1 ) /*0x3d4400*/
            {
              v17 = Block; /*0x3d4400*/
              if ( v12 > 0xF ) /*0x3d4409*/
                v17 = v13; /*0x3d4409*/
              v18 = (char *)v17 + v16; /*0x3d440d*/
              v19 = v10; /*0x3d4410*/
              if ( v10[3] > 0xFu ) /*0x3d4418*/
                v19 = (_QWORD *)*v10; /*0x3d441a*/
              v20 = tolower(*((unsigned __int8 *)v19 + v16)); /*0x3d4427*/
              v21 = tolower((unsigned __int8)v18[v15]); /*0x3d442f*/
              v11 = v10[2]; /*0x3d4435*/
              if ( v21 != v20 ) /*0x3d443b*/
                break; /*0x3d443b*/
              if ( ++v16 >= v11 ) /*0x3d4447*/
                goto LABEL_17; /*0x3d4447*/
            }
            ++v15; /*0x3d451c*/
          }
          while ( v15 <= (unsigned __int64)v31 - v11 ); /*0x3d452a*/
          v14 = 0; /*0x3d4530*/
LABEL_18:
          v4 = v28; /*0x3d444b*/
        }
        else
        {
          v14 = 0; /*0x3d43e3*/
        }
        if ( v12 > 0xF ) /*0x3d4454*/
        {
          v22 = v13; /*0x3d445a*/
          if ( v12 + 1 >= 0x1000 ) /*0x3d4464*/
          {
            v13 = (void **)*(v13 - 1); /*0x3d446a*/
            if ( (unsigned __int64)((char *)v22 - (char *)v13 - 8) > 0x1F ) /*0x3d4479*/
              invoke_watson(0, 0, 0, 0, 0); /*0x3d459e*/
          }
          j_j_free(v13); /*0x3d4482*/
        }
        if ( !v14 ) /*0x3d4489*/
        {
          (*(void (__fastcall **)(_QWORD, void **, _QWORD))(**(_QWORD **)(a1 + 1080) + 8LL))( /*0x3d44a7*/
            *(_QWORD *)(a1 + 1080),
            Block,
            *v7);
          for ( i = 0; i < ((char *)Block[1] - (char *)Block[0]) >> 2; ++i ) /*0x3d44ba*/
          {
            if ( v14 ) /*0x3d44c5*/
              break; /*0x3d44c5*/
            v24 = sub_386120(Src); /*0x3d44cf*/
            v14 = sub_3D1820(v24, v10); /*0x3d44df*/
            sub_3C310(Src); /*0x3d44e7*/
          }
          sub_685C0(Block); /*0x3d450a*/
          if ( !v14 ) /*0x3d4518*/
            goto LABEL_35; /*0x3d4518*/
        }
      }
      else if ( v7[1] != v3 ) /*0x3d453c*/
      {
        goto LABEL_36; /*0x3d453c*/
      }
      a2 = (_QWORD *)v4[1]; /*0x3d4547*/
      if ( a2 == (_QWORD *)v4[2] ) /*0x3d454f*/
      {
        sub_689C0(v4, a2, v7); /*0x3d4564*/
      }
      else
      {
        *(_DWORD *)a2 = *v7; /*0x3d4555*/
        v4[1] += 4LL; /*0x3d4557*/
      }
LABEL_35:
      v3 = a3; /*0x3d4570*/
LABEL_36:
      v7 += 2; /*0x3d4574*/
      if ( (__int64)v7 >= (__int64)&dword_6FEB70 ) /*0x3d457b*/
        return v4; /*0x3d457b*/
      v5 = a1; /*0x3d457d*/
      v6 = v27; /*0x3d4582*/
    }
  }
  return v4; /*0x3d45a8*/
}

// [5/14] Address: 0x3d45e0
// Method: KeybindingsLayer::nameForAction
__int64 __fastcall KeybindingsLayer_nameForAction(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  v4 = sub_386640((unsigned int)a3, 0, a3); /*0x3d45ee*/
  v6 = -1; /*0x3d45f6*/
  *(_OWORD *)a2 = 0; /*0x3d45fd*/
  *(_QWORD *)(a2 + 16) = v5; /*0x3d4600*/
  *(_QWORD *)(a2 + 24) = v5; /*0x3d4604*/
  do /*0x3d4617*/
    ++v6; /*0x3d4610*/
  while ( *(_BYTE *)(v4 + v6) != (_BYTE)v5 ); /*0x3d4617*/
  sub_3C230(a2); /*0x3d461f*/
  return a2; /*0x3d4627*/
}

// [6/14] Address: 0x3d4630
// Method: KeybindingsLayer::openBindingEditor
__int64 __fastcall KeybindingsLayer_openBindingEditor(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax

  v3 = sub_449F50(*(_QWORD *)(a1 + 1080), a2, a3, a1, 0); /*0x3d4646*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 1064LL))(v3); /*0x3d4658*/
}

// [7/14] Address: 0x3d4660
// Method: KeybindingsLayer::showControllerChords
__int64 __fastcall KeybindingsLayer_showControllerChords(__int64 a1)
{
  return *(unsigned __int8 *)(cocos2d::CCApplication::sharedApplication(a1) + 209); /*0x3d4671*/
}

// [8/14] Address: 0x3d4680
// Method: KeybindingsLayer::settingsEntries
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall KeybindingsLayer_settingsEntries(__int64 a1, _QWORD *a2)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-98h] BYREF
  char v5; // [rsp+50h] [rbp-78h]
  const char *v6; // [rsp+58h] [rbp-70h]
  const char *v7; // [rsp+60h] [rbp-68h]
  __int64 v8; // [rsp+68h] [rbp-60h]
  __int64 (__fastcall *v9)(); // [rsp+70h] [rbp-58h]
  char v10; // [rsp+78h] [rbp-50h]
  const char *v11; // [rsp+80h] [rbp-48h]
  const char *v12; // [rsp+88h] [rbp-40h]
  __int64 v13; // [rsp+90h] [rbp-38h]
  __int64 (__fastcall *v14)(); // [rsp+98h] [rbp-30h]
  char v15; // [rsp+A0h] [rbp-28h]

  *a2 = 0; /*0x3d46ab*/
  a2[1] = 0; /*0x3d46ae*/
  a2[2] = 0; /*0x3d46b2*/
  v4[0] = "Export"; /*0x3d46c5*/
  v4[1] = "GJ_button_02.png"; /*0x3d46d1*/
  v4[2] = 0; /*0x3d46d6*/
  v4[3] = sub_3D59C0; /*0x3d46e2*/
  v5 = 0; /*0x3d46e6*/
  v6 = "Import"; /*0x3d46f1*/
  v7 = "GJ_button_01.png"; /*0x3d46fc*/
  v8 = 0; /*0x3d4700*/
  v9 = sub_3D5B80; /*0x3d470b*/
  v10 = 0; /*0x3d470f*/
  v11 = "Reset"; /*0x3d471a*/
  v12 = "GJ_button_06.png"; /*0x3d4725*/
  v13 = 0; /*0x3d4729*/
  v14 = sub_3D61A0; /*0x3d4734*/
  v15 = 0; /*0x3d4738*/
  sub_3D5040(a2, v4, 3); /*0x3d474a*/
  return a2; /*0x3d4752*/
}

// [9/14] Address: 0x3d49c0
// Method: KeybindingsLayer::textChanged
void __fastcall KeybindingsLayer_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rdi
  void *v7; // rdx
  void **v8; // rcx
  void **v9; // rbx
  unsigned __int64 v10; // rsi
  size_t v11; // rbp
  void **v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void **v15; // rax
  void *Buf1[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v18; // [rsp+50h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 552); /*0x3d49eb*/
  if ( a2 == v3 ) /*0x3d49f5*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 600) + 600LL) + 8LL))(*(_QWORD *)(v3 + 600) + 600LL); /*0x3d4a0c*/
    *(_OWORD *)Buf1 = 0; /*0x3d4a12*/
    Size = 0; /*0x3d4a17*/
    v18 = 0; /*0x3d4a1c*/
    v5 = -1; /*0x3d4a21*/
    do /*0x3d4a33*/
      ++v5; /*0x3d4a30*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x3d4a33*/
    sub_3C230(Buf1); /*0x3d4a41*/
    v6 = (void **)(a1 + 600); /*0x3d4a47*/
    v7 = (void *)(a1 + 600); /*0x3d4a4e*/
    if ( *(_QWORD *)(a1 + 624) > 0xFu ) /*0x3d4a56*/
      v7 = *v6; /*0x3d4a58*/
    v8 = Buf1; /*0x3d4a5b*/
    v9 = (void **)Buf1[0]; /*0x3d4a60*/
    v10 = v18; /*0x3d4a65*/
    if ( v18 > 0xF ) /*0x3d4a6e*/
      v8 = (void **)Buf1[0]; /*0x3d4a6e*/
    v11 = Size; /*0x3d4a72*/
    if ( Size != *(_QWORD *)(a1 + 616) || Size && memcmp(v8, v7, Size) ) /*0x3d4a85*/
    {
      if ( v6 != Buf1 ) /*0x3d4a96*/
      {
        v12 = Buf1; /*0x3d4a98*/
        if ( v10 > 0xF ) /*0x3d4aa1*/
          v12 = v9; /*0x3d4aa1*/
        sub_3F5A0((void *)(a1 + 600), v12, v11); /*0x3d4aab*/
        v10 = v18; /*0x3d4ab0*/
        v9 = (void **)Buf1[0]; /*0x3d4ab5*/
      }
      v13 = *(_QWORD *)(a1 + 576); /*0x3d4aba*/
      if ( v13 ) /*0x3d4ac4*/
      {
        *(_DWORD *)(v13 + 436) = 0; /*0x3d4ac6*/
        *(_DWORD *)(v13 + 476) = 0; /*0x3d4acd*/
        sub_7FF60(v13); /*0x3d4ad4*/
        sub_7FFD0(v14); /*0x3d4ad9*/
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 544) + 1200LL))(a1 - 544, *(unsigned int *)(a1 + 632)); /*0x3d4af3*/
    }
    if ( v10 > 0xF ) /*0x3d4afe*/
    {
      v15 = v9; /*0x3d4b04*/
      if ( v10 + 1 >= 0x1000 ) /*0x3d4b0e*/
      {
        v9 = (void **)*(v9 - 1); /*0x3d4b14*/
        if ( (unsigned __int64)((char *)v15 - (char *)v9 - 8) > 0x1F ) /*0x3d4b23*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3d4b34*/
      }
      j_j_free(v9); /*0x3d4b3e*/
    }
  }
}

// [10/14] Address: 0x3d4b70
// Method: KeybindingsLayer::ccTouchBegan
char __fastcall KeybindingsLayer_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  char result; // al
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-20h] BYREF
  float v11; // [rsp+60h] [rbp+8h] BYREF
  float v12; // [rsp+64h] [rbp+Ch]
  float v13; // [rsp+78h] [rbp+20h] BYREF
  float v14; // [rsp+7Ch] [rbp+24h]

  if ( *(_QWORD *)(a1 + 800) ) /*0x3d4b7f*/
  {
    cocos2d::CCTouch::getLocation(a2, v9); /*0x3d4b9e*/
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 800), &v13, &unk_904E50); /*0x3d4bb7*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v11, (const struct cocos2d::CCSize *)(*(_QWORD *)(a1 + 800) + 424LL)); /*0x3d4bd0*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v10, v13, v14, v11, v12); /*0x3d4bf9*/
    if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v10, (const struct cocos2d::CCPoint *)v9) ) /*0x3d4c09*/
    {
      v6 = *(_QWORD *)(a1 + 800); /*0x3d4c13*/
      if ( v6 ) /*0x3d4c1d*/
        sub_80640(v6, a2); /*0x3d4c22*/
      v7 = *(_QWORD *)(a1 + 808); /*0x3d4c27*/
      if ( v7 ) /*0x3d4c31*/
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 8LL))( /*0x3d4c43*/
               v7 + 320,
               a2,
               a3) )
        {
          FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x3d4c53*/
          *(_BYTE *)(a1 + 816) = 1; /*0x3d4c58*/
          return 1; /*0x3d4c70*/
        }
      }
    }
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x3d4c7a*/
  *(_BYTE *)(a1 + 816) = 0; /*0x3d4c7f*/
  if ( result ) /*0x3d4c88*/
    return 1; /*0x3d4c88*/
  return result; /*0x3d4c61*/
}

// [11/14] Address: 0x3d4ca0
// Method: KeybindingsLayer::ccTouchMoved
__int64 __fastcall KeybindingsLayer_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx

  if ( *(_QWORD *)(a1 + 800) ) /*0x3d4cb5*/
  {
    sub_80830(); /*0x3d4cc4*/
    v6 = *(_QWORD *)(a1 + 800); /*0x3d4cc9*/
    if ( *(_BYTE *)(v6 + 481) ) /*0x3d4cd0*/
    {
      *(_BYTE *)(v6 + 481) = 0; /*0x3d4cd9*/
      if ( !*(_BYTE *)(a1 + 816) ) /*0x3d4ce7*/
        goto LABEL_7; /*0x3d4ce7*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 808) + 320LL) + 32LL))( /*0x3d4d00*/
        *(_QWORD *)(a1 + 808) + 320LL,
        a2,
        a3);
      *(_BYTE *)(a1 + 816) = 0; /*0x3d4d03*/
    }
  }
  if ( *(_BYTE *)(a1 + 816) ) /*0x3d4d0a*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 808) + 320LL) + 16LL))( /*0x3d4d2a*/
      *(_QWORD *)(a1 + 808) + 320LL,
      a2,
      a3);
LABEL_7:
  result = *(unsigned int *)(a2 + 56); /*0x3d4d2d*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x3d4d36*/
  {
    v8 = *(_QWORD *)(a1 + 232); /*0x3d4d38*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x3d4d47*/
      return result; /*0x3d4d47*/
    v8 = *(_QWORD *)(a1 + 304); /*0x3d4d49*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 16LL))(v8 + 320, a2, a3); /*0x3d4d63*/
}

// [12/14] Address: 0x3d4d80
// Method: KeybindingsLayer::ccTouchEnded
__int64 __fastcall KeybindingsLayer_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char v7; // si
  __int64 *v8; // rcx
  __int64 v9; // rax

  v5 = *(_QWORD *)(a1 + 800); /*0x3d4d9a*/
  if ( v5 && *(_BYTE *)(v5 + 480) ) /*0x3d4da9*/
  {
    v7 = 1; /*0x3d4db2*/
  }
  else
  {
    v7 = 0; /*0x3d4db7*/
    if ( !v5 ) /*0x3d4dbd*/
      goto LABEL_6; /*0x3d4dbd*/
  }
  sub_80AF0(v5); /*0x3d4dbf*/
LABEL_6:
  if ( *(_BYTE *)(a1 + 816) ) /*0x3d4dc4*/
  {
    v8 = (__int64 *)(*(_QWORD *)(a1 + 808) + 320LL); /*0x3d4dd7*/
    v9 = *v8; /*0x3d4de1*/
    if ( v7 ) /*0x3d4de7*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 32))(v8, a2, a3); /*0x3d4de9*/
    else
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 24))(v8, a2, a3); /*0x3d4dee*/
    *(_BYTE *)(a1 + 816) = 0; /*0x3d4df1*/
  }
  return FLAlertLayer_ccTouchEnded(a1, a2, a3); /*0x3d4e01*/
}

// [13/14] Address: 0x3d4e20
// Method: KeybindingsLayer::ccTouchCancelled
__int64 __fastcall KeybindingsLayer_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 800); /*0x3d4e35*/
  if ( v5 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v5 + 440) ) /*0x3d4e4d*/
  {
    *(_DWORD *)(v5 + 440) = -1; /*0x3d4e51*/
    *(_QWORD *)(v5 + 472) = 0; /*0x3d4e5b*/
    *(_WORD *)(v5 + 480) = 0; /*0x3d4e62*/
    *(_BYTE *)(v5 + 508) = 0; /*0x3d4e69*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v5); /*0x3d4e6f*/
  }
  if ( *(_BYTE *)(a1 + 816) ) /*0x3d4e75*/
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 808) + 320LL) + 32LL))( /*0x3d4e95*/
      *(_QWORD *)(a1 + 808) + 320LL,
      a2,
      a3);
    *(_BYTE *)(a1 + 816) = 0; /*0x3d4e98*/
  }
  return FLAlertLayer_ccTouchCancelled(a1, a2, a3); /*0x3d4ea8*/
}

// [14/14] Address: 0x3d4ec0
// Method: KeybindingsLayer::onClose
__int64 __fastcall KeybindingsLayer_onClose(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 1096); /*0x3d4ed0*/
  if ( v2 ) /*0x3d4eda*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1032LL))(v2, 0); /*0x3d4ee1*/
  result = SetupTriggerPopup_onClose(a1); /*0x3d4eed*/
  v5 = *(_QWORD *)(a1 + 1072); /*0x3d4ef2*/
  if ( v5 ) /*0x3d4efc*/
  {
    LOBYTE(v4) = 1; /*0x3d4f01*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 336LL))(v5, v4); /*0x3d4f06*/
    LOBYTE(v6) = 1; /*0x3d4f0f*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 920LL))(v5, v6); /*0x3d4f14*/
    LOBYTE(v7) = 1; /*0x3d4f1d*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 992LL))(v5, v7); /*0x3d4f22*/
  }
  return result; /*0x3d4f28*/
}
