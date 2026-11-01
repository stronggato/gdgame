#include <Geode/binding/SongUsagePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0xff860
// Method: SongUsagePopup::~SongUsagePopup
// Hidden C++ exception states: #wind=1
char *__fastcall SongUsagePopup__dtor_SongUsagePopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &SongUsagePopup::`vftable'; /*0xff87b*/
  *((_QWORD *)Block + 40) = &SongUsagePopup::`vftable'; /*0xff885*/
  *((_QWORD *)Block + 41) = &SongUsagePopup::`vftable'; /*0xff893*/
  *((_QWORD *)Block + 42) = &SongUsagePopup::`vftable'; /*0xff8a1*/
  *((_QWORD *)Block + 43) = &SongUsagePopup::`vftable'; /*0xff8af*/
  *((_QWORD *)Block + 44) = &SongUsagePopup::`vftable'; /*0xff8bd*/
  *((_QWORD *)Block + 51) = &SongUsagePopup::`vftable'; /*0xff8cb*/
  *((_QWORD *)Block + 54) = &SongUsagePopup::`vftable'; /*0xff8d9*/
  *((_QWORD *)Block + 68) = &SongUsagePopup::`vftable'; /*0xff8e7*/
  v4 = Block + 664; /*0xff8ee*/
  *((_QWORD *)Block + 83) = &SongUsagePopup::`vftable'; /*0xff8fc*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xff8ff*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xff909*/
  {
    v6 = operator new(0x690u); /*0xff910*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xff91d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xff92e*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xff930*/
  }
  if ( *(char **)(v5 + 1600) == v4 ) /*0xff93e*/
    *(_QWORD *)(v5 + 1600) = 0; /*0xff940*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 85); /*0xff94b*/
  if ( v7 ) /*0xff955*/
    cocos2d::CCObject::release(v7); /*0xff957*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0xff960*/
  if ( (a2 & 1) != 0 ) /*0xff96a*/
    j_j_free(Block); /*0xff974*/
  return Block; /*0xff97c*/
}

// [2/3] Address: 0x1001d0
// Method: SongUsagePopup::songUsageFinished
// Hidden C++ exception states: #wind=7
double __fastcall SongUsagePopup_songUsageFinished(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r15
  unsigned int v5; // r12d
  __int64 v6; // rcx
  _OWORD *v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // rcx
  __int64 v19; // rcx
  void *v20; // rcx
  char *v21; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  void **v27; // rsi
  char *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdi
  int v33; // r12d
  char *v34; // rcx
  bool v35; // bl
  void *v36; // rcx
  _DWORD *v37; // rdx
  float v38; // xmm6_4
  void *v39; // rcx
  __int64 v40; // rcx
  void *v41; // r8
  void *v42; // r8
  void *v43; // rcx
  void *v44[2]; // [rsp+38h] [rbp-C8h] BYREF
  void *v45; // [rsp+48h] [rbp-B8h]
  __int64 v46; // [rsp+50h] [rbp-B0h]
  char v47[4]; // [rsp+58h] [rbp-A8h] BYREF
  float v48; // [rsp+5Ch] [rbp-A4h]
  __int64 *v49; // [rsp+60h] [rbp-A0h]
  void *v50[2]; // [rsp+68h] [rbp-98h] BYREF
  __m128i v51; // [rsp+78h] [rbp-88h]
  void *Block[2]; // [rsp+88h] [rbp-78h] BYREF
  __m128i v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  int v55; // [rsp+B0h] [rbp-50h]
  char *Buffer[2]; // [rsp+B8h] [rbp-48h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-38h]
  _BYTE v58[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v59[32]; // [rsp+160h] [rbp+60h] BYREF

  v3 = a3; /*0x100208*/
  v49 = a3; /*0x10020e*/
  v5 = 0; /*0x100213*/
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 8) ) /*0x10021e*/
  {
    v6 = *(_QWORD *)(a1 + 16); /*0x100224*/
    if ( v6 ) /*0x10022b*/
      LoadingCircle_fadeAndRemove(v6); /*0x10022d*/
    *(_OWORD *)Buffer = 0; /*0x100235*/
    si128 = 0; /*0x10023c*/
    v7 = v3; /*0x100241*/
    if ( (unsigned __int64)v3[3] > 0xF ) /*0x100249*/
      v7 = (_OWORD *)*v3; /*0x10024b*/
    v8 = v3[2]; /*0x10024e*/
    v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x100252*/
    if ( v8 > 0x7FFFFFFFFFFFFFFFLL ) /*0x10025f*/
      sub_8D90(v6, a2, a3); /*0x100c39*/
    if ( v8 > 0xF ) /*0x100269*/
    {
      if ( (v8 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x10028a*/
      {
        v9 = v8 | 0xF; /*0x10028c*/
        if ( (v8 | 0xF) < 0x16 ) /*0x100297*/
          v9 = 22; /*0x100297*/
      }
      Buffer[0] = (char *)sub_3C460(v9 + 1); /*0x1002a4*/
      si128.m128i_i64[0] = v8; /*0x1002a8*/
      si128.m128i_i64[1] = v9; /*0x1002ac*/
      memcpy(Buffer[0], v7, v8 + 1); /*0x1002ba*/
    }
    else
    {
      si128.m128i_i64[0] = v3[2]; /*0x10026b*/
      si128.m128i_i64[1] = 15; /*0x10026f*/
      *(_OWORD *)Buffer = *v7; /*0x10027a*/
    }
    *(_OWORD *)v50 = 0; /*0x1002c3*/
    v51.m128i_i64[0] = 0; /*0x1002c8*/
    v51.m128i_i64[1] = 15; /*0x1002d1*/
    LOBYTE(v50[0]) = 0; /*0x1002d9*/
    v10 = v3; /*0x1002de*/
    if ( (unsigned __int64)v3[3] > 0xF ) /*0x1002e6*/
      v10 = (__int64 *)*v3; /*0x1002e8*/
    v11 = v3[2]; /*0x1002eb*/
    if ( v11 ) /*0x1002f2*/
    {
      v12 = (__int64)v10 + v11; /*0x1002f8*/
      LOBYTE(a3) = 35; /*0x1002fc*/
      v13 = sub_6722F0(v10, (char *)v10 + v11, a3); /*0x100305*/
      if ( v13 != v12 ) /*0x100310*/
      {
        v14 = v13 - (_QWORD)v10; /*0x100316*/
        if ( v13 - (_QWORD)v10 != -1 ) /*0x10031d*/
        {
          *(_OWORD *)Block = 0; /*0x100326*/
          v53 = 0; /*0x10032d*/
          sub_3C230(Block); /*0x10034f*/
          v16 = si128.m128i_i64[1]; /*0x100354*/
          if ( si128.m128i_i64[1] > 0xFuLL ) /*0x10035c*/
          {
            v17 = Buffer[0]; /*0x100361*/
            if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x10036f*/
            {
              v17 = (char *)*((_QWORD *)Buffer[0] - 1); /*0x100375*/
              if ( (unsigned __int64)(Buffer[0] - v17 - 8) > 0x1F ) /*0x100384*/
                goto LABEL_78; /*0x100384*/
            }
            j_j_free(v17); /*0x10038a*/
          }
          *(_OWORD *)Buffer = *(_OWORD *)Block; /*0x100393*/
          si128 = v53; /*0x10039b*/
          *(_OWORD *)Block = 0; /*0x1003a5*/
          v53 = 0; /*0x1003ac*/
          if ( v3[2] < (unsigned __int64)(v14 + 1) ) /*0x1003b8*/
            sub_3E4D0(v15, v16); /*0x100c3f*/
          sub_3C230(Block); /*0x1003e4*/
          v5 = 12; /*0x1003e9*/
          *(_OWORD *)v50 = *(_OWORD *)Block; /*0x10042f*/
          v51 = v53; /*0x100438*/
        }
      }
    }
    v46 = 0; /*0x100447*/
    v18 = (char *)Buffer; /*0x10044c*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x100455*/
      v18 = Buffer[0]; /*0x100455*/
    if ( (unsigned int)sub_7D5B0(v18, "%i,%i,%lld") != 3 ) /*0x10047d*/
    {
      sub_1013A0(a1 - 664, "Failed to load info"); /*0x100491*/
LABEL_28:
      if ( v51.m128i_i64[1] <= 0xFuLL ) /*0x10049f*/
        goto LABEL_32; /*0x10049f*/
      v20 = v50[0]; /*0x1004a4*/
      if ( (unsigned __int64)(v51.m128i_i64[1] + 1) < 0x1000 /*0x1004c8*/
        || (v20 = (void *)*((_QWORD *)v50[0] - 1), (unsigned __int64)((char *)v50[0] - (char *)v20 - 8) <= 0x1F) )
      {
        j_j_free(v20); /*0x1004ce*/
LABEL_32:
        v51.m128i_i64[0] = 0; /*0x1004d3*/
        v51.m128i_i64[1] = 15; /*0x1004d8*/
        LOBYTE(v50[0]) = 0; /*0x1004e0*/
        if ( si128.m128i_i64[1] <= 0xFuLL ) /*0x1004ed*/
        {
LABEL_36:
          si128 = _mm_load_si128((const __m128i *)&Size); /*0x100520*/
          LOBYTE(Buffer[0]) = 0; /*0x10052d*/
          return sub_3C310(v3); /*0x10052d*/
        }
        v21 = Buffer[0]; /*0x1004f2*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) < 0x1000 /*0x100515*/
          || (v21 = (char *)*((_QWORD *)Buffer[0] - 1), (unsigned __int64)(Buffer[0] - v21 - 8) <= 0x1F) )
        {
LABEL_35:
          j_j_free(v21); /*0x10051b*/
          goto LABEL_36; /*0x10051b*/
        }
LABEL_88:
        invoke_watson(0, 0, 0, 0, 0); /*0x100c1d*/
      }
LABEL_83:
      invoke_watson(0, 0, 0, 0, 0); /*0x100bb2*/
    }
    v23 = cocos2d::CCDirector::sharedDirector(v19); /*0x10056b*/
    cocos2d::CCDirector::getWinSize(v23, v47); /*0x10057a*/
    *(_OWORD *)v44 = 0; /*0x100583*/
    v45 = 0; /*0x100589*/
    v25 = 0; /*0x10058e*/
    v26 = v51.m128i_i64[0]; /*0x100591*/
    if ( v51.m128i_i64[0] ) /*0x100599*/
    {
      do /*0x1006e8*/
      {
        v27 = v50; /*0x1005a0*/
        if ( v51.m128i_i64[1] > 0xFuLL ) /*0x1005aa*/
          v27 = (void **)v50[0]; /*0x1005aa*/
        v28 = (char *)v27 + v26; /*0x1005b0*/
        LOBYTE(v24) = 124; /*0x1005b8*/
        v31 = sub_6722F0((char *)v27 + v25, (char *)v27 + v26, v24); /*0x1005c3*/
        if ( (char *)v31 == v28 || (v32 = v31 - (_QWORD)v27, v32 == -1) ) /*0x1005d7*/
          v32 = v51.m128i_i64[0]; /*0x1005d9*/
        v54 = 0; /*0x1005de*/
        v55 = 0; /*0x1005e2*/
        *(_OWORD *)Block = 0; /*0x1005e8*/
        v53 = 0; /*0x1005ef*/
        if ( v51.m128i_i64[0] < v25 ) /*0x1005f7*/
          sub_3E4D0(v30, v29); /*0x100c33*/
        sub_3C230(Block); /*0x100624*/
        v33 = v5 | 3; /*0x100629*/
        v34 = (char *)Block; /*0x10062d*/
        if ( v53.m128i_i64[1] > 0xFuLL ) /*0x100636*/
          v34 = (char *)Block[0]; /*0x100636*/
        v35 = (unsigned int)sub_7D5B0(v34, "%i:%i:%i") == 3 && v55 > 0; /*0x100662*/
        v5 = v33 & 0xFFFFFFFE; /*0x100668*/
        if ( v53.m128i_i64[1] > 0xFuLL ) /*0x100674*/
        {
          v36 = Block[0]; /*0x100679*/
          if ( (unsigned __int64)(v53.m128i_i64[1] + 1) >= 0x1000 ) /*0x100687*/
          {
            v36 = (void *)*((_QWORD *)Block[0] - 1); /*0x10068d*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v36 - 8) > 0x1F ) /*0x10069c*/
              invoke_watson(0, 0, 0, 0, 0); /*0x100751*/
          }
          j_j_free(v36); /*0x1006a2*/
        }
        if ( v35 ) /*0x1006a9*/
        {
          v37 = v44[1]; /*0x1006ab*/
          if ( v44[1] == v45 ) /*0x1006b5*/
          {
            sub_1014E0(v44, v44[1], &v54); /*0x1006d7*/
          }
          else
          {
            *(_QWORD *)v44[1] = v54; /*0x1006bc*/
            v37[2] = v55; /*0x1006c3*/
            v44[1] = (char *)v44[1] + 12; /*0x1006c6*/
          }
        }
        v25 = v32 + 1; /*0x1006dc*/
        v26 = v51.m128i_i64[0]; /*0x1006e0*/
      }
      while ( (unsigned __int64)(v32 + 1) < v51.m128i_i64[0] ); /*0x1006e8*/
    }
    if ( v44[0] == v44[1] ) /*0x100736*/
      v38 = 160.0; /*0x100738*/
    else
      v38 = fminf( /*0x100779*/
              275.0,
              (float)((float)(int)(((int)((unsigned __int64)(2454267027LL
                                                           * ((LODWORD(v44[1]) - LODWORD(v44[0])) / 12 + 6)) >> 32) >> 2)
                                 - 1
                                 + ((unsigned int)((unsigned __int64)(2454267027LL
                                                                    * ((LODWORD(v44[1]) - LODWORD(v44[0])) / 12 + 6)) >> 32) >> 31))
                    * 72.0)
            + 178.0);
    BrowseSmartTemplateLayer_baseSetup(a1 - 664, v38); /*0x100787*/
    `eh vector constructor iterator'(v59, 0x20u, 3u, sub_3CBB0, sub_3C1E0); /*0x1007ae*/
    `eh vector constructor iterator'(v58, 0x20u, 3u, sub_3CBB0, sub_3C1E0); /*0x1007cf*/
    sub_3F5A0(v59, "exportIcon_001.png", 0x12u); /*0x1007e6*/
    sub_72E80(Block, 0, 0); /*0x100850*/
    sub_58AD0(v58, Block); /*0x10085d*/
    if ( v53.m128i_i64[1] > 0xFuLL ) /*0x10086a*/
    {
      v39 = Block[0]; /*0x10086f*/
      if ( (unsigned __int64)(v53.m128i_i64[1] + 1) >= 0x1000 ) /*0x10087d*/
      {
        v39 = (void *)*((_QWORD *)Block[0] - 1); /*0x100883*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v39 - 8) > 0x1F ) /*0x100892*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1009b6*/
      }
      j_j_free(v39); /*0x100898*/
    }
    sub_101030( /*0x1009fc*/
      a1 - 664,
      (unsigned int)v59,
      (unsigned int)v58,
      1,
      (float)((float)(v48 * 0.5) + (float)(v38 * 0.5)) - 72.0);
    v40 = a1 - 664; /*0x100a01*/
    if ( v44[0] != v44[1] ) /*0x100a12*/
    {
      EditorUI_spriteFromObjectString(v40, (__int64 *)v44); /*0x100acb*/
      `eh vector destructor iterator'(v58, 0x20u, 3u, sub_3C1E0); /*0x100ae3*/
      `eh vector destructor iterator'(v59, 0x20u, 3u, sub_3C1E0); /*0x100afb*/
      v42 = v44[0]; /*0x100b01*/
      if ( v44[0] ) /*0x100b09*/
      {
        if ( (unsigned __int64)(12 * ((signed __int64)((__int64)v45 - (unsigned __int64)v44[0]) / 12)) >= 0x1000 ) /*0x100b38*/
        {
          v42 = (void *)*((_QWORD *)v44[0] - 1); /*0x100b3e*/
          if ( (unsigned __int64)((char *)v44[0] - (char *)v42 - 8) > 0x1F ) /*0x100b4d*/
            goto LABEL_78; /*0x100b4d*/
        }
        j_j_free(v42); /*0x100b6c*/
        *(_OWORD *)v44 = 0; /*0x100b74*/
        v45 = 0; /*0x100b7a*/
      }
      if ( v51.m128i_i64[1] > 0xFuLL ) /*0x100b87*/
      {
        v43 = v50[0]; /*0x100b8c*/
        if ( (unsigned __int64)(v51.m128i_i64[1] + 1) >= 0x1000 ) /*0x100b9b*/
        {
          v43 = (void *)*((_QWORD *)v50[0] - 1); /*0x100ba1*/
          if ( (unsigned __int64)((char *)v50[0] - (char *)v43 - 8) > 0x1F ) /*0x100bb0*/
            goto LABEL_83; /*0x100bb0*/
        }
        j_j_free(v43); /*0x100bc8*/
      }
      v51.m128i_i64[0] = 0; /*0x100bcd*/
      v51.m128i_i64[1] = 15; /*0x100bd2*/
      LOBYTE(v50[0]) = 0; /*0x100bda*/
      if ( si128.m128i_i64[1] <= 0xFuLL ) /*0x100be7*/
        goto LABEL_36; /*0x100be7*/
      v21 = Buffer[0]; /*0x100bf0*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) < 0x1000 ) /*0x100bfe*/
        goto LABEL_35; /*0x100bfe*/
      v21 = (char *)*((_QWORD *)Buffer[0] - 1); /*0x100c08*/
      if ( (unsigned __int64)(Buffer[0] - v21 - 8) <= 0x1F ) /*0x100c17*/
        goto LABEL_35; /*0x100c17*/
      goto LABEL_88; /*0x100c17*/
    }
    sub_1013A0(v40, "No rated levels"); /*0x100a1f*/
    `eh vector destructor iterator'(v58, 0x20u, 3u, sub_3C1E0); /*0x100a37*/
    `eh vector destructor iterator'(v59, 0x20u, 3u, sub_3C1E0); /*0x100a4f*/
    v41 = v44[0]; /*0x100a55*/
    if ( !v44[0] ) /*0x100a5d*/
      goto LABEL_28; /*0x100a5d*/
    if ( (unsigned __int64)(12 * ((signed __int64)((__int64)v45 - (unsigned __int64)v44[0]) / 12)) < 0x1000 /*0x100aa5*/
      || (v41 = (void *)*((_QWORD *)v44[0] - 1), (unsigned __int64)((char *)v44[0] - (char *)v41 - 8) <= 0x1F) )
    {
      j_j_free(v41); /*0x100aae*/
      *(_OWORD *)v44 = 0; /*0x100ab6*/
      v45 = 0; /*0x100abc*/
      goto LABEL_28; /*0x100ac1*/
    }
LABEL_78:
    invoke_watson(0, 0, 0, 0, 0); /*0x100b4f*/
  }
  return sub_3C310(v3); /*0x100539*/
}

// [3/3] Address: 0x100c50
// Method: SongUsagePopup::songUsageFailed
__int64 __fastcall SongUsagePopup_songUsageFailed(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1 - 664; /*0x100c59*/
  if ( a2 == *(_DWORD *)(a1 + 8) ) /*0x100c60*/
  {
    v3 = *(_QWORD *)(a1 + 16); /*0x100c62*/
    if ( v3 ) /*0x100c69*/
      LoadingCircle_fadeAndRemove(v3); /*0x100c6b*/
    return sub_1013A0(v2, "Failed to load info"); /*0x100c7f*/
  }
  return result; /*0x100c7a*/
}
