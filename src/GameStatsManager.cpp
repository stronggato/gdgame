#include <Geode/binding/GameStatsManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/47] Address: 0xec080
// Method: GameStatsManager::getAwardedCurrencyForLevel
// Hidden C++ exception states: #wind=2
_QWORD *__fastcall GameStatsManager_getAwardedCurrencyForLevel(_QWORD *Src, cocos2d::CCArray *a2)
{
  int v4; // ebp
  signed int i; // ebx
  signed int v6; // eax
  struct cocos2d::CCObject *v7; // rax
  void **v8; // rdx
  void *v10[4]; // [rsp+30h] [rbp-48h] BYREF

  *(_OWORD *)Src = 0; /*0xec0b1*/
  Src[2] = 0; /*0xec0b4*/
  Src[3] = 15; /*0xec0bc*/
  *(_BYTE *)Src = 0; /*0xec0c4*/
  v4 = 1; /*0xec0c7*/
  for ( i = 0; ; ++i )
  {
    v6 = a2 ? cocos2d::CCArray::count(a2) : 0;
    if ( i >= v6 ) /*0xec0e6*/
      break; /*0xec0e6*/
    if ( i > 0 ) /*0xec0ea*/
      sub_43D80(Src, ", ", 2u); /*0xec0fc*/
    v7 = cocos2d::CCArray::objectAtIndex(a2, i); /*0xec106*/
    sub_3E4F0(v10, (char *)v7 + 320); /*0xec118*/
    v4 |= 2u; /*0xec11d*/
    v8 = v10; /*0xec124*/
    if ( v10[3] > (char *)&loc_D + 2 ) /*0xec12f*/
      v8 = (void **)v10[0]; /*0xec12f*/
    sub_43D80(Src, v8, (size_t)v10[2]); /*0xec13d*/
    sub_3C310(v10); /*0xec148*/
  }
  return Src; /*0xec154*/
}

// [2/47] Address: 0xf0030
// Method: GameStatsManager::tryFixPathBug
// Hidden C++ exception states: #wind=37
double __fastcall GameStatsManager_tryFixPathBug(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  unsigned int v3; // ecx
  char v4; // al
  const char *v5; // r12
  double result; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // rsi
  void **v9; // rax
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 *v14; // rax
  int v15; // edi
  void *v16; // rcx
  void *v17; // rcx
  void **v18; // rcx
  void **v19; // rax
  size_t v20; // rax
  void **v21; // rcx
  size_t v22; // rbx
  void **v23; // rdx
  size_t v24; // rcx
  void **v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __m128i *v29; // rax
  int v30; // edi
  void **v31; // rcx
  __int64 v32; // rcx
  _WORD *v33; // rdx
  void **v34; // r8
  __int64 v35; // rdx
  void **v36; // rbx
  void **v37; // r15
  unsigned __int8 *v38; // rcx
  unsigned __int8 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  char v42; // bl
  int v43; // eax
  __int64 v44; // r8
  int v45; // ecx
  __int128 *v46; // rdx
  __int64 v47; // rcx
  size_t v48; // r13
  void **v49; // rax
  int v50; // edi
  size_t v51; // r12
  void **v52; // r15
  size_t v53; // rbx
  void *v54; // rcx
  void **v55; // rax
  __int64 v56; // rdx
  cocos2d::CCString *v57; // rax
  char *v58; // rax
  size_t v59; // r8
  signed int i; // ebx
  struct cocos2d::CCObject *v61; // rax
  cocos2d::CCString *v62; // rax
  char *CString; // rax
  size_t v64; // r8
  int v65; // edi
  size_t v66; // r12
  void **v67; // rax
  size_t v68; // rax
  unsigned __int64 v69; // rbx
  __int128 *v70; // r15
  int v71; // edi
  void **v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // edi
  void *v76; // rdx
  __int64 v77; // rax
  cocos2d::CCString *v78; // rax
  const char *v79; // rax
  int v80; // edi
  void **v81; // r15
  size_t v82; // rsi
  unsigned __int64 v83; // rbx
  void **v84; // r12
  size_t v85; // r15
  unsigned __int64 v86; // rbx
  __int128 *v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  int v91; // edi
  void *v92; // rcx
  void *v93; // rcx
  unsigned __int64 v94; // r15
  size_t v95; // rsi
  void **v96; // r12
  const void *v97; // rdx
  void **v98; // rcx
  __time64_t v99; // rbx
  void **v100; // rdx
  void **v101; // rbx
  int v102; // edi
  int v103; // ecx
  __int64 v104; // rdx
  char v105; // bl
  void *v106; // rcx
  __int64 v107; // rax
  unsigned int v108; // [rsp+54h] [rbp-ACh]
  void *v109[2]; // [rsp+58h] [rbp-A8h]
  void **v110; // [rsp+58h] [rbp-A8h]
  void **v111; // [rsp+58h] [rbp-A8h]
  void *v112; // [rsp+58h] [rbp-A8h]
  void *v113; // [rsp+58h] [rbp-A8h]
  signed int v114; // [rsp+68h] [rbp-98h]
  void **v115; // [rsp+68h] [rbp-98h]
  _BYTE v116[256]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v117; // [rsp+170h] [rbp+70h] BYREF
  __int64 v118; // [rsp+180h] [rbp+80h]
  __int64 v119; // [rsp+188h] [rbp+88h]
  __int128 v120; // [rsp+190h] [rbp+90h] BYREF
  __int128 v121; // [rsp+1A0h] [rbp+A0h]
  void *v122[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  size_t v123[2]; // [rsp+1C0h] [rbp+C0h]
  __m128i v124; // [rsp+1D0h] [rbp+D0h] BYREF
  size_t v125; // [rsp+1E0h] [rbp+E0h]
  __int64 v126; // [rsp+1E8h] [rbp+E8h]
  void *v127[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  size_t Size[2]; // [rsp+200h] [rbp+100h]
  void *Block[2]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v130; // [rsp+220h] [rbp+120h]
  __int128 v131; // [rsp+230h] [rbp+130h] BYREF
  __int128 v132; // [rsp+240h] [rbp+140h]
  void *Src[2]; // [rsp+250h] [rbp+150h] BYREF
  size_t v134[2]; // [rsp+260h] [rbp+160h]
  void *v135[2]; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int64 v136; // [rsp+280h] [rbp+180h]
  unsigned __int64 v137; // [rsp+288h] [rbp+188h]
  void *v138[2]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v139; // [rsp+2A0h] [rbp+1A0h]
  unsigned __int64 v140; // [rsp+2A8h] [rbp+1A8h]
  void *Buf1[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  size_t v142; // [rsp+2C0h] [rbp+1C0h]
  unsigned __int64 v143; // [rsp+2C8h] [rbp+1C8h]
  __int128 v144; // [rsp+2D0h] [rbp+1D0h] BYREF
  size_t v145; // [rsp+2E0h] [rbp+1E0h]
  unsigned __int64 v146; // [rsp+2E8h] [rbp+1E8h]
  _OWORD v147[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _OWORD v148[2]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v149[32]; // [rsp+330h] [rbp+230h] BYREF

  if ( !*(_BYTE *)(a1 + 744) ) /*0xf0073*/
  {
    v2 = *(cocos2d::CCArray **)(a1 + 736); /*0xf0080*/
    if ( v2 ) /*0xf008a*/
      v3 = cocos2d::CCArray::count(v2); /*0xf0092*/
    else
      v3 = 0; /*0xf0096*/
    v114 = v3; /*0xf0099*/
    v4 = *(_BYTE *)(a1 + 745); /*0xf009d*/
    v5 = "New Group Chat"; /*0xf00ac*/
    if ( v4 ) /*0xf00b5*/
      v5 = "New Direct Message"; /*0xf00b5*/
    if ( *(int *)(a1 + 696) <= 0 && !v3 ) /*0xf00c8*/
    {
      v117 = 0; /*0xf00d1*/
      v118 = 0; /*0xf00d5*/
      v119 = 0; /*0xf00dc*/
      *(_QWORD *)&v117 = sub_3C460(32); /*0xf00ed*/
      v118 = 26; /*0xf00f1*/
      v119 = 31; /*0xf00fc*/
      strcpy((char *)v117, "Please select a recipient."); /*0xf010e*/
      v7 = FLAlertLayer_create(0, (_DWORD)v5, (unsigned int)&v117, (unsigned int)"OK", 0); /*0xf0142*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0xf0154*/
      return 6.191864222030394e223; /*0xf0156*/
    }
    v8 = -1; /*0xf015b*/
    if ( v4 ) /*0xf0164*/
    {
      *(_OWORD *)v122 = 0; /*0xf0169*/
      v123[0] = 0; /*0xf0170*/
      v123[1] = 15; /*0xf0177*/
      LOBYTE(v122[0]) = 0; /*0xf0182*/
      v9 = v122; /*0xf0189*/
      v10 = 1; /*0xf0190*/
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 896); /*0xf019a*/
      if ( v11 ) /*0xf01a4*/
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v11 + 600) + 600LL) + 8LL))(*(_QWORD *)(v11 + 600) + 600LL); /*0xf01b7*/
        v131 = 0; /*0xf01bd*/
        v132 = 0u; /*0xf01c4*/
        v13 = -1; /*0xf01d2*/
        do /*0xf01d8*/
          ++v13; /*0xf01d5*/
        while ( *(_BYTE *)(v12 + v13) ); /*0xf01d8*/
        sub_3C230(&v131); /*0xf01e8*/
        v14 = &v131; /*0xf01ed*/
        v15 = 67108866; /*0xf01f4*/
      }
      else
      {
        v120 = 0; /*0xf01fe*/
        *(_QWORD *)&v121 = 0; /*0xf0205*/
        *((_QWORD *)&v121 + 1) = 15; /*0xf020c*/
        LOBYTE(v120) = 0; /*0xf0217*/
        v14 = &v120; /*0xf021e*/
        v15 = 4; /*0xf0225*/
      }
      *(_OWORD *)Block = *v14; /*0xf022d*/
      v130 = v14[1]; /*0xf0238*/
      *((_QWORD *)v14 + 2) = 0; /*0xf023f*/
      *((_QWORD *)v14 + 3) = 15; /*0xf0243*/
      *(_BYTE *)v14 = 0; /*0xf024b*/
      v9 = Block; /*0xf024e*/
      v10 = v15 | 8; /*0xf0255*/
    }
    *(_OWORD *)v127 = *(_OWORD *)v9; /*0xf025b*/
    *(_OWORD *)Size = *((_OWORD *)v9 + 1); /*0xf0266*/
    v9[2] = 0; /*0xf026d*/
    v9[3] = &loc_D + 2; /*0xf0271*/
    *(_BYTE *)v9 = 0; /*0xf0279*/
    if ( (v10 & 8) != 0 ) /*0xf0280*/
    {
      v10 &= ~8u; /*0xf0282*/
      if ( *((_QWORD *)&v130 + 1) > 0xFu ) /*0xf0290*/
      {
        v16 = Block[0]; /*0xf0295*/
        if ( (unsigned __int64)(*((_QWORD *)&v130 + 1) + 1LL) >= 0x1000 ) /*0xf02a6*/
        {
          v16 = (void *)*((_QWORD *)Block[0] - 1); /*0xf02ac*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0xf02bb*/
            invoke_watson(0, 0, 0, 0, 0); /*0xf02cc*/
        }
        j_j_free(v16); /*0xf02d3*/
      }
    }
    if ( (v10 & 4) != 0 ) /*0xf02dc*/
    {
      v10 &= ~4u; /*0xf02de*/
      sub_3C310(&v120); /*0xf02e8*/
    }
    if ( (v10 & 2) != 0 ) /*0xf02f2*/
    {
      v10 &= ~2u; /*0xf02f4*/
      sub_3C310(&v131); /*0xf02fe*/
    }
    if ( (v10 & 1) != 0 ) /*0xf0308*/
    {
      v10 &= ~1u; /*0xf030a*/
      if ( v123[1] > 0xF ) /*0xf0318*/
      {
        v17 = v122[0]; /*0xf031d*/
        if ( v123[1] + 1 >= 0x1000 ) /*0xf032e*/
        {
          v17 = (void *)*((_QWORD *)v122[0] - 1); /*0xf0334*/
          if ( (unsigned __int64)((char *)v122[0] - (char *)v17 - 8) > 0x1F ) /*0xf0343*/
            invoke_watson(0, 0, 0, 0, 0); /*0xf0354*/
        }
        j_j_free(v17); /*0xf035b*/
      }
    }
    v18 = v127; /*0xf0360*/
    if ( Size[1] > 0xF ) /*0xf0379*/
      v18 = (void **)v127[0]; /*0xf0379*/
    if ( Size[0] && (v19 = v18, v18 < (void **)((char *)v18 + Size[0])) ) /*0xf0393*/
    {
      while ( *(_BYTE *)v19 == 32 ) /*0xf0398*/
      {
        v19 = (void **)((char *)v19 + 1); /*0xf039e*/
        if ( v19 >= (void **)((char *)v18 + Size[0]) ) /*0xf03a4*/
          goto LABEL_40; /*0xf03a4*/
      }
      v20 = (char *)v19 - (char *)v18; /*0xf0489*/
    }
    else
    {
LABEL_40:
      v20 = -1; /*0xf03a6*/
    }
    if ( Size[0] < v20 ) /*0xf03ac*/
      v20 = Size[0]; /*0xf03ac*/
    v21 = v127; /*0xf03b0*/
    if ( Size[1] > 0xF ) /*0xf03bb*/
      v21 = (void **)v127[0]; /*0xf03bb*/
    v22 = Size[0] - v20; /*0xf03bf*/
    memmove(v21, (char *)v21 + v20, Size[0] - v20 + 1); /*0xf03ca*/
    Size[0] = v22; /*0xf03cf*/
    v23 = v127; /*0xf03d6*/
    if ( Size[1] > 0xF ) /*0xf03ef*/
      v23 = (void **)v127[0]; /*0xf03ef*/
    if ( v22 ) /*0xf03f6*/
    {
      v31 = (void **)((char *)v23 + v22 - 1); /*0xf049f*/
      if ( *(_BYTE *)v31 == 32 ) /*0xf04a5*/
      {
        while ( v31 != v23 ) /*0xf04aa*/
        {
          v31 = (void **)((char *)v31 - 1); /*0xf04ac*/
          if ( *(_BYTE *)v31 != 32 ) /*0xf04b2*/
            goto LABEL_59; /*0xf04b2*/
        }
        v32 = -1; /*0xf04c8*/
      }
      else
      {
LABEL_59:
        v32 = (char *)v31 - (char *)v23; /*0xf04b4*/
      }
      v24 = v32 + 1; /*0xf04b7*/
      if ( v22 < v24 ) /*0xf04bd*/
        sub_3E4D0(); /*0xf13cf*/
    }
    else
    {
      v24 = 0; /*0xf03fc*/
    }
    Size[0] = v24; /*0xf03ff*/
    v25 = v127; /*0xf0406*/
    if ( Size[1] > 0xF ) /*0xf0411*/
      v25 = (void **)v127[0]; /*0xf0411*/
    *((_BYTE *)v25 + v24) = 0; /*0xf0415*/
    v26 = *(_QWORD *)(a1 + 904); /*0xf0419*/
    if ( v26 ) /*0xf0423*/
    {
      v27 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)(*(_QWORD *)(v26 + 600) + 600LL) + 8LL))( /*0xf043a*/
              *(_QWORD *)(v26 + 600) + 600LL,
              v23);
      v131 = 0; /*0xf0440*/
      v132 = 0u; /*0xf0447*/
      v28 = -1; /*0xf0455*/
      do /*0xf0463*/
        ++v28; /*0xf0460*/
      while ( *(_BYTE *)(v27 + v28) ); /*0xf0463*/
      sub_3C230(&v131); /*0xf0474*/
      v29 = (__m128i *)&v131; /*0xf047d*/
      v30 = v10 | 0x200010; /*0xf0484*/
    }
    else
    {
      v120 = 0; /*0xf04d0*/
      *(_QWORD *)&v121 = 0; /*0xf04d7*/
      *((_QWORD *)&v121 + 1) = 15; /*0xf04de*/
      LOBYTE(v120) = 0; /*0xf04e9*/
      v29 = (__m128i *)&v120; /*0xf04f0*/
      v30 = v10 | 0x20; /*0xf04f7*/
    }
    *(__m128i *)v109 = *v29; /*0xf0501*/
    *(__m128i *)Src = *v29; /*0xf0506*/
    v124 = v29[1]; /*0xf0511*/
    *(__m128i *)v134 = v124; /*0xf0518*/
    v29[1].m128i_i64[0] = 0; /*0xf051f*/
    v29[1].m128i_i64[1] = 15; /*0xf0523*/
    v29->m128i_i8[0] = 0; /*0xf052b*/
    if ( (v30 & 0x20) != 0 ) /*0xf0532*/
    {
      v30 &= ~0x20u; /*0xf0534*/
      sub_3C310(&v120); /*0xf0542*/
    }
    if ( (v30 & 0x10) != 0 ) /*0xf054c*/
    {
      v30 &= ~0x10u; /*0xf054e*/
      sub_3C310(&v131); /*0xf055c*/
    }
    if ( *(_BYTE *)(a1 + 745) ) /*0xf0561*/
    {
      v36 = Src; /*0xf05f3*/
      if ( _mm_srli_si128(v124, 8).m128i_u64[0] > 0xF ) /*0xf0613*/
        v36 = (void **)v109[0]; /*0xf0613*/
      if ( !v124.m128i_i64[0] ) /*0xf0621*/
        goto LABEL_80; /*0xf0621*/
      v37 = (void **)((char *)v36 + v124.m128i_i64[0]); /*0xf0623*/
      memset(v116, 0, sizeof(v116)); /*0xf0634*/
      v38 = (unsigned __int8 *)&unk_721CC8; /*0xf0639*/
      do /*0xf065e*/
        v116[*v38++] = 1; /*0xf0653*/
      while ( v38 != (unsigned __int8 *)&unk_721CCA ); /*0xf065e*/
      v39 = (unsigned __int8 *)v36; /*0xf0660*/
      if ( v36 >= v37 ) /*0xf0666*/
        goto LABEL_80; /*0xf0666*/
      while ( v116[*v39] ) /*0xf0678*/
      {
        if ( ++v39 >= (unsigned __int8 *)v37 ) /*0xf0684*/
          goto LABEL_80; /*0xf0684*/
      }
      v41 = v39 - (unsigned __int8 *)v36; /*0xf076d*/
      if ( v41 == -1 ) /*0xf0774*/
      {
LABEL_80:
        *(_OWORD *)v122 = 0; /*0xf0689*/
        v123[0] = 0; /*0xf0693*/
        v123[1] = 0; /*0xf069a*/
        v33 = (_WORD *)sub_3C460(32); /*0xf06ab*/
        v122[0] = v33; /*0xf06ae*/
        v123[0] = 23; /*0xf06b5*/
        v123[1] = 31; /*0xf06c0*/
        qmemcpy(v33, "Please enter a message", 22); /*0xf06d2*/
        v34 = v122; /*0xf06f0*/
        goto LABEL_81; /*0xf06f0*/
      }
      SetupSmartBlockLayer_onCreateAll(v41, &unk_721CCA); /*0xf077a*/
      v35 = (unsigned int)dword_8F8394; /*0xf077f*/
    }
    else
    {
      if ( !Size[0] ) /*0xf0577*/
      {
        v117 = 0; /*0xf057c*/
        v118 = 0; /*0xf0580*/
        v119 = 0; /*0xf0587*/
        v33 = (_WORD *)sub_3C460(32); /*0xf0598*/
        *(_QWORD *)&v117 = v33; /*0xf059b*/
        v118 = 23; /*0xf059f*/
        v119 = 31; /*0xf05aa*/
        qmemcpy(v33, "Please enter a subject", 22); /*0xf05bc*/
        v34 = (void **)&v117; /*0xf05da*/
LABEL_81:
        v33[11] = 46; /*0xf06f7*/
        goto LABEL_82; /*0xf06f7*/
      }
      SetupSmartBlockLayer_onCreateAll(v24, v23); /*0xf05e3*/
      v35 = (unsigned int)dword_8F83A4; /*0xf05e8*/
    }
    v42 = *(_BYTE *)(a1 + 745); /*0xf0788*/
    v43 = sub_7EAA0(Src, v35); /*0xf0797*/
    v44 = *(unsigned __int8 *)(a1 + 745); /*0xf079c*/
    v45 = 300; /*0xf07a4*/
    if ( v42 ) /*0xf07b0*/
      v45 = 500; /*0xf07b0*/
    if ( v43 <= v45 ) /*0xf07b5*/
    {
      v47 = 22; /*0xf0812*/
      v48 = v134[0]; /*0xf0817*/
      if ( (_BYTE)v44 ) /*0xf0821*/
      {
        *(_OWORD *)v138 = 0; /*0xf0826*/
        v139 = 0; /*0xf082d*/
        v140 = 15; /*0xf0834*/
        LOBYTE(v138[0]) = 0; /*0xf083f*/
        v49 = v138; /*0xf0846*/
        v50 = v30 | 0x40; /*0xf084d*/
        v51 = v134[1]; /*0xf0850*/
      }
      else
      {
        v124.m128i_i64[1] = 0; /*0xf085c*/
        v52 = Src; /*0xf0863*/
        v51 = v134[1]; /*0xf086a*/
        if ( v134[1] > 0xF ) /*0xf0875*/
          v52 = (void **)Src[0]; /*0xf0875*/
        if ( v134[0] > 0x7FFFFFFFFFFFFFFFLL ) /*0xf0880*/
          sub_8D90(22, 500, v44); /*0xf13d5*/
        if ( v134[0] > 0xF ) /*0xf088a*/
        {
          v53 = v134[0] | 0xF; /*0xf08ae*/
          if ( (v134[0] | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xf08b5*/
          {
            if ( v53 < 0x16 ) /*0xf08bf*/
              v53 = 22; /*0xf08bf*/
          }
          else
          {
            v53 = 0x7FFFFFFFFFFFFFFFLL; /*0xf08b7*/
          }
          v124.m128i_i64[0] = sub_3C460(v53 + 1); /*0xf08cc*/
          v125 = v48; /*0xf08d3*/
          v126 = v53; /*0xf08da*/
          memcpy((void *)v124.m128i_i64[0], v52, v48 + 1); /*0xf08eb*/
        }
        else
        {
          v125 = v134[0]; /*0xf088c*/
          v126 = 15; /*0xf0893*/
          v124 = *(__m128i *)v52; /*0xf08a2*/
        }
        v49 = (void **)&v124; /*0xf08f0*/
        v50 = v30 | 0x80; /*0xf08f7*/
      }
      *(_OWORD *)v122 = *(_OWORD *)v49; /*0xf0905*/
      *(_OWORD *)v123 = *((_OWORD *)v49 + 1); /*0xf0910*/
      v49[2] = 0; /*0xf0917*/
      v49[3] = &loc_D + 2; /*0xf091b*/
      *(_BYTE *)v49 = 0; /*0xf0923*/
      if ( (v50 & 0x80u) != 0 ) /*0xf0929*/
      {
        v50 &= ~0x80u; /*0xf092b*/
        sub_3C310(&v124); /*0xf093a*/
      }
      if ( (v50 & 0x40) != 0 ) /*0xf0944*/
      {
        v50 &= ~0x40u; /*0xf0946*/
        if ( v140 > 0xF ) /*0xf0958*/
        {
          v54 = v138[0]; /*0xf095d*/
          if ( v140 + 1 >= 0x1000 ) /*0xf096e*/
          {
            v54 = (void *)*((_QWORD *)v138[0] - 1); /*0xf0974*/
            if ( (unsigned __int64)((char *)v138[0] - (char *)v54 - 8) > 0x1F ) /*0xf0983*/
              invoke_watson(0, 0, 0, 0, 0); /*0xf0994*/
          }
          j_j_free(v54); /*0xf099b*/
        }
      }
      if ( !*(_BYTE *)(a1 + 745) ) /*0xf09a0*/
      {
        v55 = Src; /*0xf09aa*/
        if ( v51 > 0xF ) /*0xf09b5*/
          v55 = (void **)Src[0]; /*0xf09b5*/
        v134[0] = 0; /*0xf09bd*/
        *(_BYTE *)v55 = 0; /*0xf09c4*/
        v48 = v134[0]; /*0xf09c7*/
      }
      v108 = 0; /*0xf09ce*/
      *(_OWORD *)v135 = 0; /*0xf09d6*/
      v136 = 0; /*0xf09dd*/
      v137 = 15; /*0xf09e4*/
      LOBYTE(v135[0]) = 0; /*0xf09ef*/
      v56 = *(unsigned int *)(a1 + 696); /*0xf09f6*/
      if ( *(_BYTE *)(a1 + 745) ) /*0xf09fd*/
      {
        v108 = *(_DWORD *)(a1 + 696); /*0xf0a07*/
        if ( (int)v56 <= 0 ) /*0xf0a0d*/
          v108 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 736), 0) + 98); /*0xf0a28*/
      }
      else if ( (int)v56 <= 0 ) /*0xf0a33*/
      {
        for ( i = 0; i < v114; ++i ) /*0xf0a79*/
        {
          if ( v136 ) /*0xf0a88*/
            sub_43D80(v135, &unk_709CE8, 1u); /*0xf0a9e*/
          v61 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 736), i); /*0xf0aac*/
          v62 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v61 + 98)); /*0xf0abf*/
          CString = (char *)cocos2d::CCString::getCString(v62); /*0xf0ac8*/
          v64 = -1; /*0xf0ace*/
          do /*0xf0ad4*/
            ++v64; /*0xf0ad1*/
          while ( CString[v64] ); /*0xf0ad4*/
          sub_43D80(v135, CString, v64); /*0xf0ae5*/
        }
      }
      else
      {
        v57 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0xf0a3c*/
        v58 = (char *)cocos2d::CCString::getCString(v57); /*0xf0a45*/
        v59 = -1; /*0xf0a4b*/
        do /*0xf0a53*/
          ++v59; /*0xf0a50*/
        while ( v58[v59] ); /*0xf0a53*/
        sub_3F5A0(v135, v58, v59); /*0xf0a64*/
      }
      if ( *(_BYTE *)(a1 + 745) ) /*0xf0af4*/
      {
        *(_OWORD *)v138 = 0; /*0xf0b01*/
        v139 = 1; /*0xf0b08*/
        v140 = 15; /*0xf0b13*/
        LOWORD(v138[0]) = 109; /*0xf0b25*/
        v110 = v138; /*0xf0b39*/
        v65 = v50 | 0x100; /*0xf0b3e*/
      }
      else
      {
        v66 = Size[0]; /*0xf0b47*/
        if ( Size[0] == 0x7FFFFFFFFFFFFFFFLL ) /*0xf0b62*/
          sub_8D90(0x7FFFFFFFFFFFFFFFLL, v56, v44); /*0xf13db*/
        v67 = v127; /*0xf0b68*/
        if ( Size[1] > 0xF ) /*0xf0b77*/
          v67 = (void **)v127[0]; /*0xf0b77*/
        v111 = v67; /*0xf0b7f*/
        v117 = 0; /*0xf0b87*/
        v118 = 0; /*0xf0b8b*/
        v119 = 0; /*0xf0b92*/
        v68 = Size[0] + 1; /*0xf0b99*/
        v69 = 15; /*0xf0b9e*/
        v70 = &v117; /*0xf0ba3*/
        if ( Size[0] + 1 > 0xF ) /*0xf0baa*/
        {
          v69 = v68 | 0xF; /*0xf0baf*/
          if ( (v68 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xf0bb6*/
          {
            if ( v69 < 0x16 ) /*0xf0bc6*/
              v69 = 22; /*0xf0bc6*/
          }
          else
          {
            v69 = 0x7FFFFFFFFFFFFFFFLL; /*0xf0bb8*/
          }
          v70 = (__int128 *)sub_3C460(v69 + 1); /*0xf0bd3*/
          *(_QWORD *)&v117 = v70; /*0xf0bd6*/
          v68 = v66 + 1; /*0xf0bda*/
        }
        v118 = v68; /*0xf0bdf*/
        v119 = v69; /*0xf0be6*/
        memcpy(v70, v111, v66); /*0xf0bf8*/
        *(_WORD *)((char *)v70 + v66) = 124; /*0xf0c04*/
        v71 = v50 | 0x1000200; /*0xf0c12*/
        v72 = v122; /*0xf0c1a*/
        if ( v123[1] > 0xF ) /*0xf0c29*/
          v72 = (void **)v122[0]; /*0xf0c29*/
        v73 = sub_43D80(&v117, v72, v123[0]); /*0xf0c3c*/
        v120 = 0; /*0xf0c44*/
        v121 = 0u; /*0xf0c4e*/
        v120 = *(_OWORD *)v73; /*0xf0c5f*/
        v121 = *(_OWORD *)(v73 + 16); /*0xf0c6a*/
        *(_QWORD *)(v73 + 16) = 0; /*0xf0c71*/
        *(_QWORD *)(v73 + 24) = 15; /*0xf0c75*/
        *(_BYTE *)v73 = 0; /*0xf0c7d*/
        v74 = sub_43D80(&v120, &word_70806C, 1u); /*0xf0ca0*/
        v131 = 0; /*0xf0ca8*/
        v132 = 0u; /*0xf0caf*/
        v131 = *(_OWORD *)v74; /*0xf0cc0*/
        v132 = *(_OWORD *)(v74 + 16); /*0xf0ccb*/
        *(_QWORD *)(v74 + 16) = 0; /*0xf0cd2*/
        *(_QWORD *)(v74 + 24) = 15; /*0xf0cd6*/
        *(_BYTE *)v74 = 0; /*0xf0cde*/
        v75 = v71 | 0xC00C00; /*0xf0ce5*/
        v76 = (void *)(a1 + 792); /*0xf0ced*/
        if ( *(_QWORD *)(a1 + 816) > 0xFu ) /*0xf0cfc*/
          v76 = *(void **)(a1 + 792); /*0xf0cfe*/
        v77 = sub_43D80(&v131, v76, *(_QWORD *)(a1 + 808)); /*0xf0d13*/
        v147[0] = *(_OWORD *)v77; /*0xf0d1b*/
        v147[1] = *(_OWORD *)(v77 + 16); /*0xf0d26*/
        *(_QWORD *)(v77 + 16) = 0; /*0xf0d2d*/
        *(_QWORD *)(v77 + 24) = 15; /*0xf0d31*/
        *(_BYTE *)v77 = 0; /*0xf0d39*/
        v110 = (void **)v147; /*0xf0d47*/
        v65 = v75 | 0x2001000; /*0xf0d4c*/
      }
      if ( *(_BYTE *)(a1 + 745) ) /*0xf0d54*/
      {
        v78 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v108); /*0xf0d69*/
        v79 = cocos2d::CCString::getCString(v78); /*0xf0d72*/
        *(_OWORD *)Block = 0; /*0xf0d7b*/
        v130 = 0u; /*0xf0d82*/
        do /*0xf0d93*/
          ++v8; /*0xf0d90*/
        while ( v79[v8] ); /*0xf0d93*/
        sub_3C230(Block); /*0xf0da6*/
        v115 = Block; /*0xf0db2*/
        v80 = v65 | 0x2000; /*0xf0db7*/
      }
      else
      {
        v124 = 0; /*0xf0dc3*/
        v125 = 0; /*0xf0dca*/
        v126 = 0; /*0xf0dd1*/
        v81 = v135; /*0xf0dd8*/
        if ( v137 > 0xF ) /*0xf0de7*/
          v81 = (void **)v135[0]; /*0xf0de7*/
        v82 = v136; /*0xf0def*/
        if ( v136 > 0x7FFFFFFFFFFFFFFFLL ) /*0xf0e03*/
          sub_8D90(v47, v56, v44); /*0xf13e1*/
        if ( v136 > 0xF ) /*0xf0e0d*/
        {
          v83 = v136 | 0xF; /*0xf0e34*/
          if ( (v136 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xf0e3b*/
          {
            if ( v83 < 0x16 ) /*0xf0e4b*/
              v83 = 22; /*0xf0e4b*/
          }
          else
          {
            v83 = 0x7FFFFFFFFFFFFFFFLL; /*0xf0e3d*/
          }
          v124.m128i_i64[0] = sub_3C460(v83 + 1); /*0xf0e58*/
          v125 = v82; /*0xf0e5f*/
          v126 = v83; /*0xf0e66*/
          memcpy((void *)v124.m128i_i64[0], v81, v82 + 1); /*0xf0e77*/
        }
        else
        {
          v125 = v136; /*0xf0e12*/
          v126 = 15; /*0xf0e19*/
          v124 = *(__m128i *)v81; /*0xf0e28*/
        }
        v115 = (void **)&v124; /*0xf0e83*/
        v80 = v65 | 0x4000; /*0xf0e88*/
      }
      if ( v48 == 0x7FFFFFFFFFFFFFFFLL ) /*0xf0ea4*/
        sub_8D90(0x7FFFFFFFFFFFFFFFLL, v56, v44); /*0xf13c9*/
      v84 = Src; /*0xf0eaa*/
      if ( v134[1] > 0xF ) /*0xf0eb9*/
        v84 = (void **)Src[0]; /*0xf0eb9*/
      v144 = 0; /*0xf0ec4*/
      v85 = v48 + 1; /*0xf0ecb*/
      v86 = 15; /*0xf0ecf*/
      v87 = &v144; /*0xf0ed4*/
      if ( v48 + 1 > 0xF ) /*0xf0ede*/
      {
        v86 = v85 | 0xF; /*0xf0ee3*/
        if ( (v85 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xf0eea*/
        {
          if ( v86 < 0x16 ) /*0xf0efa*/
            v86 = 22; /*0xf0efa*/
        }
        else
        {
          v86 = 0x7FFFFFFFFFFFFFFFLL; /*0xf0eec*/
        }
        v87 = (__int128 *)sub_3C460(v86 + 1); /*0xf0f07*/
        *(_QWORD *)&v144 = v87; /*0xf0f0a*/
      }
      v145 = v48 + 1; /*0xf0f11*/
      v146 = v86; /*0xf0f18*/
      memcpy(v87, v84, v48); /*0xf0f28*/
      *((_BYTE *)v87 + v48) = 124; /*0xf0f34*/
      *((_BYTE *)v87 + v85) = 0; /*0xf0f38*/
      sub_74FF0(v149, v88, &v144, v115); /*0xf0f58*/
      v89 = sub_43D80(v149, &word_70806C, 1u); /*0xf0f79*/
      v148[0] = *(_OWORD *)v89; /*0xf0f81*/
      v148[1] = *(_OWORD *)(v89 + 16); /*0xf0f8c*/
      *(_QWORD *)(v89 + 16) = 0; /*0xf0f96*/
      *(_QWORD *)(v89 + 24) = 15; /*0xf0f9a*/
      *(_BYTE *)v89 = 0; /*0xf0fa2*/
      sub_74FF0(Buf1, v90, v148, v110); /*0xf0fc0*/
      v91 = v80 | 0x1E0000; /*0xf0fc5*/
      sub_3C310(v148); /*0xf0fd4*/
      sub_3C310(v149); /*0xf0fe1*/
      sub_3C310(&v144); /*0xf0fee*/
      if ( (v91 & 0x4000) != 0 ) /*0xf0ff8*/
      {
        v91 &= ~0x4000u; /*0xf0ffa*/
        sub_3C310(&v124); /*0xf1009*/
      }
      if ( (v91 & 0x2000) != 0 ) /*0xf1013*/
      {
        v91 &= ~0x2000u; /*0xf1015*/
        if ( *((_QWORD *)&v130 + 1) > 0xFu ) /*0xf1028*/
        {
          v92 = Block[0]; /*0xf102d*/
          if ( (unsigned __int64)(*((_QWORD *)&v130 + 1) + 1LL) >= 0x1000 ) /*0xf103e*/
          {
            v92 = (void *)*((_QWORD *)Block[0] - 1); /*0xf1044*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v92 - 8) > 0x1F ) /*0xf1053*/
              invoke_watson(0, 0, 0, 0, 0); /*0xf1064*/
          }
          j_j_free(v92); /*0xf106b*/
        }
      }
      if ( (v91 & 0x1000) != 0 ) /*0xf1075*/
      {
        v91 &= ~0x1000u; /*0xf1077*/
        sub_3C310(v147); /*0xf1086*/
      }
      if ( (v91 & 0x800) != 0 ) /*0xf1090*/
      {
        v91 &= ~0x800u; /*0xf1092*/
        sub_3C310(&v131); /*0xf10a1*/
      }
      if ( (v91 & 0x400) != 0 ) /*0xf10ab*/
      {
        v91 &= ~0x400u; /*0xf10ad*/
        sub_3C310(&v120); /*0xf10bc*/
      }
      if ( (v91 & 0x200) != 0 ) /*0xf10c6*/
      {
        v91 &= ~0x200u; /*0xf10c8*/
        sub_3C310(&v117); /*0xf10d4*/
      }
      if ( (v91 & 0x100) != 0 ) /*0xf10de*/
      {
        v91 &= ~0x100u; /*0xf10e0*/
        if ( v140 > 0xF ) /*0xf10f3*/
        {
          v93 = v138[0]; /*0xf10f8*/
          if ( v140 + 1 >= 0x1000 ) /*0xf1109*/
          {
            v93 = (void *)*((_QWORD *)v138[0] - 1); /*0xf110f*/
            if ( (unsigned __int64)((char *)v138[0] - (char *)v93 - 8) > 0x1F ) /*0xf111e*/
              invoke_watson(0, 0, 0, 0, 0); /*0xf112f*/
          }
          j_j_free(v93); /*0xf1136*/
        }
      }
      v94 = v143; /*0xf113b*/
      v95 = v142; /*0xf1142*/
      v96 = (void **)Buf1[0]; /*0xf1149*/
      if ( !*(_QWORD *)(a1 + 920) ) /*0xf1150*/
        goto LABEL_203; /*0xf1150*/
      v97 = (const void *)(a1 + 928); /*0xf115a*/
      if ( *(_QWORD *)(a1 + 952) > 0xFu ) /*0xf1169*/
        v97 = *(const void **)(a1 + 928); /*0xf116b*/
      v98 = Buf1; /*0xf1172*/
      if ( v143 > 0xF ) /*0xf117d*/
        v98 = (void **)Buf1[0]; /*0xf117d*/
      if ( v142 != *(_QWORD *)(a1 + 944) || v142 && memcmp(v98, v97, v142) ) /*0xf1192*/
      {
LABEL_203:
        v99 = time64(0); /*0xf11a3*/
        *(_QWORD *)(a1 + 920) = (v99 << 20) | rand() & 0xFFFFF; /*0xf11b8*/
        if ( (void **)(a1 + 928) != Buf1 ) /*0xf11d0*/
        {
          v100 = Buf1; /*0xf11d2*/
          if ( v94 > 0xF ) /*0xf11dd*/
            v100 = v96; /*0xf11dd*/
          sub_3F5A0((void *)(a1 + 928), v100, v95); /*0xf11e4*/
        }
      }
      if ( *(_BYTE *)(a1 + 745) ) /*0xf11e9*/
      {
        *(_OWORD *)Block = 0; /*0xf11f6*/
        *(_QWORD *)&v130 = 0; /*0xf11fd*/
        *((_QWORD *)&v130 + 1) = 15; /*0xf1204*/
        LOBYTE(Block[0]) = 0; /*0xf120f*/
        v101 = Block; /*0xf1216*/
        v102 = v91 | 0x8000; /*0xf121d*/
      }
      else
      {
        v101 = (void **)sub_3E4F0(v147, a1 + 792); /*0xf1236*/
        v102 = v91 | 0x10000; /*0xf1239*/
      }
      v103 = qword_905FB0; /*0xf1241*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf124b*/
      {
        v112 = operator new(0x690u); /*0xf1257*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v112); /*0xf1265*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf1276*/
        v103 = qword_905FB0; /*0xf1278*/
      }
      v105 = sub_246010( /*0xf12d3*/
               v103,
               0,
               v108,
               (unsigned int)v127,
               (__int64)Src,
               *(_QWORD *)(a1 + 920),
               (__int64)v135,
               *(_BYTE *)(a1 + 745),
               (__int64)v122,
               (__int64)v101);
      if ( (v102 & 0x10000) != 0 ) /*0xf12da*/
        sub_3C310(v147); /*0xf12e7*/
      if ( (v102 & 0x8000) != 0 ) /*0xf12f1*/
      {
        v104 = *((_QWORD *)&v130 + 1); /*0xf12f3*/
        if ( *((_QWORD *)&v130 + 1) > 0xFu ) /*0xf12fe*/
        {
          v106 = Block[0]; /*0xf1303*/
          if ( (unsigned __int64)(*((_QWORD *)&v130 + 1) + 1LL) >= 0x1000 ) /*0xf1314*/
          {
            v106 = (void *)*((_QWORD *)Block[0] - 1); /*0xf131a*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v106 - 8) > 0x1F ) /*0xf1329*/
              invoke_watson(0, 0, 0, 0, 0); /*0xf133a*/
          }
          j_j_free(v106); /*0xf1341*/
        }
      }
      if ( v105 ) /*0xf1348*/
      {
        v107 = *(_QWORD *)&qword_905FB0; /*0xf1351*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0xf135b*/
        {
          v113 = operator new(0x690u); /*0xf1367*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v113); /*0xf1375*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf1382*/
          v107 = *(_QWORD *)&qword_905FB0; /*0xf1385*/
        }
        *(_QWORD *)(v107 + 1392) = a1 + 664; /*0xf138c*/
        LOBYTE(v104) = 1; /*0xf1393*/
        UILayer_togglePlatformerMode(a1, v104); /*0xf1398*/
      }
      sub_3C310(Buf1); /*0xf13a5*/
      sub_3C310(v135); /*0xf13b2*/
      sub_3C310(v122); /*0xf13bf*/
      goto LABEL_83; /*0xf13c4*/
    }
    v46 = (__int128 *)"Description is too long."; /*0xf07be*/
    if ( (_BYTE)v44 ) /*0xf07c8*/
      v46 = &xmmword_721CB0; /*0xf07c8*/
    v120 = 0; /*0xf07cf*/
    v121 = 0u; /*0xf07d6*/
    do /*0xf07e7*/
      ++v8; /*0xf07e4*/
    while ( *((_BYTE *)v46 + v8) ); /*0xf07e7*/
    sub_3C230(&v120); /*0xf07f7*/
    v34 = (void **)&v120; /*0xf07fc*/
LABEL_82:
    v40 = FLAlertLayer_create(0, (_DWORD)v5, (_DWORD)v34, (unsigned int)"OK", 0); /*0xf06fe*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 1064LL))(v40); /*0xf0721*/
LABEL_83:
    sub_3C310(Src); /*0xf0724*/
    return sub_3C310(v127); /*0xf0738*/
  }
  return result; /*0xf073d*/
}

// [3/47] Address: 0x1af5a0
// Method: GameStatsManager::verifyUserCoins
int __fastcall GameStatsManager_verifyUserCoins(__int64 a1, __int64 a2)
{
  char v2; // r15
  __int64 v4; // rdx
  cocos2d::CCArray *v5; // rdi
  unsigned int i; // ebx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx
  cocos2d::CCArray *v9; // rdi
  unsigned int j; // ebx
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rcx
  int v13; // r14d
  __int64 v14; // rax
  unsigned int v15; // ebx
  cocos2d::CCArray *v16; // rdi
  __int64 v17; // rax
  struct cocos2d::CCObject *v18; // rax
  struct cocos2d::CCObject *v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int16 v23; // ax
  int v25; // ecx
  __int64 v26; // rbx
  unsigned int v27; // edi
  __int64 v28; // rcx
  cocos2d::CCArray *v29; // rcx
  __int16 v31; // [rsp+60h] [rbp+8h] BYREF
  char v32; // [rsp+62h] [rbp+Ah]
  __int16 v33; // [rsp+70h] [rbp+18h] BYREF
  char v34; // [rsp+72h] [rbp+1Ah]
  __int16 v35; // [rsp+78h] [rbp+20h] BYREF
  char v36; // [rsp+7Ah] [rbp+22h]

  v2 = a2; /*0x1af5af*/
  if ( *(_BYTE *)(a1 + 1661) || *(_DWORD *)(a1 + 1508) != 2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 872) + 336LL))(*(_QWORD *)(a1 + 872), 0); /*0x1af89b*/
    LODWORD(v17) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1248) + 336LL))( /*0x1af8b4*/
                     *(_QWORD *)(a1 + 1248),
                     0);
  }
  else
  {
    LOBYTE(a2) = 1; /*0x1af5d0*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 872) + 336LL))(*(_QWORD *)(a1 + 872), a2); /*0x1af5ee*/
    LOBYTE(v4) = 1; /*0x1af5fb*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1248) + 336LL))(*(_QWORD *)(a1 + 1248), v4); /*0x1af600*/
    v5 = *(cocos2d::CCArray **)(a1 + 1400); /*0x1af606*/
    for ( i = 0; i < cocos2d::CCArray::count(v5); ++i ) /*0x1af612*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(v5, i); /*0x1af625*/
      sub_1AAFF0(v8, v7); /*0x1af62e*/
    }
    v9 = *(cocos2d::CCArray **)(a1 + 1408); /*0x1af642*/
    for ( j = 0; j < cocos2d::CCArray::count(v9); ++j ) /*0x1af64e*/
    {
      v11 = cocos2d::CCArray::objectAtIndex(v9, j); /*0x1af665*/
      sub_1AAFF0(v12, v11); /*0x1af66e*/
    }
    v13 = 0; /*0x1af682*/
    while ( 1 ) /*0x1af693*/
    {
      v14 = 1400; /*0x1af693*/
      if ( v13 ) /*0x1af698*/
        v14 = 1408; /*0x1af698*/
      v15 = 0; /*0x1af69c*/
      v16 = *(cocos2d::CCArray **)(v14 + a1); /*0x1af69e*/
      LODWORD(v17) = cocos2d::CCArray::count(v16); /*0x1af6a5*/
      if ( (_DWORD)v17 ) /*0x1af6ad*/
        break; /*0x1af6ad*/
LABEL_13:
      if ( ++v13 >= 2 ) /*0x1af6e2*/
        return v17; /*0x1af6e2*/
    }
    while ( 1 ) /*0x1af6b5*/
    {
      v18 = cocos2d::CCArray::objectAtIndex(v16, v15); /*0x1af6b5*/
      v19 = v18; /*0x1af6c1*/
      if ( *((_DWORD *)v18 + 138) == *(_DWORD *)(a1 + 1392) ) /*0x1af6ca*/
        break; /*0x1af6ca*/
      ++v15; /*0x1af6cf*/
      LODWORD(v17) = cocos2d::CCArray::count(v16); /*0x1af6d1*/
      if ( v15 >= (unsigned int)v17 ) /*0x1af6d9*/
        goto LABEL_13; /*0x1af6d9*/
    }
    v17 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 952LL))(v18); /*0x1af70b*/
    v20 = v17; /*0x1af711*/
    v21 = *(_QWORD *)(v17 + 648); /*0x1af714*/
    if ( v21 || (v21 = *(_QWORD *)(v17 + 656)) != 0 ) /*0x1af74d*/
    {
      v35 = 32639; /*0x1af756*/
      v36 = 127; /*0x1af75d*/
      LODWORD(v17) = (**(__int64 (__fastcall ***)(__int64, __int16 *))(v21 + 320))(v21 + 320, &v35); /*0x1af76a*/
    }
    if ( *((int *)v19 + 138) >= 0 )
    {
      v22 = *(_QWORD *)(v20 + 640); /*0x1af779*/
      v31 = 32639; /*0x1af780*/
      v32 = 127; /*0x1af787*/
      v33 = 25700; /*0x1af78c*/
      v34 = 127; /*0x1af793*/
      if ( *(_DWORD *)(v22 + 1256) == 1 )
      {
        v23 = *(_WORD *)(v22 + 1048); /*0x1af7a1*/
        if ( !(v23 ? v23 == 1 : *(_BYTE *)(v22 + 1300)) && !*(_QWORD *)(v22 + 896) )
        {
          v25 = *(_DWORD *)(*(_QWORD *)(v22 + 1104) + 4LL); /*0x1af7d2*/
          if ( v25 != 1004 && v25 && *(_BYTE *)(v22 + 1784) ) /*0x1af7e1*/
          {
            v31 = v33; /*0x1af7ef*/
            v32 = 127; /*0x1af7f4*/
          }
        }
      }
      (*(void (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v22 + 1344LL))(v22, &v31); /*0x1af804*/
      LODWORD(v17) = (*(__int64 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v22 + 944LL))(v22, &v33); /*0x1af815*/
    }
    if ( v2 ) /*0x1af81e*/
    {
      EditorUI_selectBuildTab(a1, *((_DWORD *)v19 + 140)); /*0x1af82d*/
      v26 = *(_QWORD *)(a1 + 872); /*0x1af832*/
      v27 = *((_DWORD *)v19 + 139); /*0x1af839*/
      v28 = *(_QWORD *)(v26 + 344); /*0x1af83f*/
      if ( *(_BYTE *)(v28 + 456) ) /*0x1af846*/
        v29 = *(cocos2d::CCArray **)(v28 + 448); /*0x1af84f*/
      else
        v29 = *(cocos2d::CCArray **)(v28 + 480); /*0x1af858*/
      cocos2d::CCArray::count(v29); /*0x1af85f*/
      BoomScrollLayer_instantMoveToPage(*(_QWORD *)(v26 + 344), v27 - 1); /*0x1af86f*/
      BoomScrollLayer_instantMoveToPage(*(_QWORD *)(v26 + 344), v27); /*0x1af87d*/
      LODWORD(v17) = sub_175710(v26); /*0x1af885*/
    }
  }
  return v17; /*0x1af6fd*/
}

// [4/47] Address: 0x1bd3b0
// Method: GameStatsManager::linkSpecialChestUnlocks
// Hidden C++ exception states: #wind=2
char __fastcall GameStatsManager_linkSpecialChestUnlocks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  const struct cocos2d::CCPoint *v11; // r8
  __int64 v12; // rcx
  cocos2d::CCEGLViewProtocol *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rax
  cocos2d::CCObject *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // al
  __int64 v24; // rcx
  __int64 v25; // rbx
  struct cocos2d::CCFiniteTimeAction *v26; // rax
  struct cocos2d::CCAction *v27; // rbx
  void *v28; // [rsp+20h] [rbp-38h] BYREF
  struct __timeb64 Time; // [rsp+28h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a1 + 424) != -1 /*0x1bd408*/
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 344LL))(*(_QWORD *)(a1 + 488))
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 488) + 320LL) + 8LL))(
          *(_QWORD *)(a1 + 488) + 320LL,
          a2,
          a3) )
  {
    if ( *(_DWORD *)(a1 + 428) == -1 /*0x1bd451*/
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 512) + 344LL))(*(_QWORD *)(a1 + 512))
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 512) + 320LL) + 8LL))(
           *(_QWORD *)(a1 + 512) + 320LL,
           a2,
           a3) )
    {
      *(_DWORD *)(a1 + 428) = *(_DWORD *)(a2 + 56); /*0x1bd45b*/
      return 1; /*0x1bd461*/
    }
    if ( *(_DWORD *)(a1 + 440) == -1 /*0x1bd49a*/
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 344LL))(*(_QWORD *)(a1 + 520))
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 320LL) + 8LL))(
           *(_QWORD *)(a1 + 520) + 320LL,
           a2,
           a3) )
    {
      *(_DWORD *)(a1 + 440) = *(_DWORD *)(a2 + 56); /*0x1bd4a4*/
      return 1; /*0x1bd4aa*/
    }
    if ( *(_DWORD *)(a1 + 432) != -1 && *(_DWORD *)(a1 + 444) == -1 && !*(_BYTE *)(a1 + 476) ) /*0x1bd4c9*/
    {
      v6 = qword_905FD0; /*0x1bd4d6*/
      if ( !qword_905FD0 ) /*0x1bd4e0*/
      {
        v28 = operator new(0x6E8u); /*0x1bd4ec*/
        qword_905FD0 = sub_2723A0(v28); /*0x1bd4fa*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1bd50b*/
        v6 = qword_905FD0; /*0x1bd50d*/
      }
      if ( !GameManager_getGameVariable(v6, "0245") /*0x1bd548*/
        && (*(_BYTE *)(a1 + 478) || !*(_BYTE *)(a1 + 593) && !*(_BYTE *)(a1 + 589) && !*(_BYTE *)(a1 + 590)) )
      {
        *(_DWORD *)(a1 + 444) = *(_DWORD *)(a2 + 56); /*0x1bd557*/
        cocos2d::CCTouch::getLocationInView(a2, &v28); /*0x1bd565*/
        v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x1bd56b*/
        v9 = cocos2d::CCDirector::convertToGL(v8, &Time, &v28); /*0x1bd57e*/
        cocos2d::CCPoint::operator=(&v28, v9); /*0x1bd58c*/
        v10 = cocos2d::CCNode::convertToWorldSpace(a1 - 320, &Time, &v28); /*0x1bd5a3*/
        cocos2d::CCPoint::operator=(&v28, v10); /*0x1bd5b1*/
        cocos2d::CCPoint::operator=(a1 + 456, &v28); /*0x1bd5c3*/
        *(float *)(a1 + 464) = cocos2d::ccpDistance( /*0x1bd5dd*/
                                 (cocos2d *)(a1 + 448),
                                 (const struct cocos2d::CCPoint *)(a1 + 456),
                                 v11);
        v13 = (cocos2d::CCEGLViewProtocol *)cocos2d::CCEGLView::sharedOpenGLView(v12); /*0x1bd5e5*/
        cocos2d::CCEGLViewProtocol::getScaleY(v13); /*0x1bd5ee*/
        *(_DWORD *)(a1 + 468) = 1103364096; /*0x1bd5f4*/
        *(float *)(a1 + 472) = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 1192) + 4360LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(a1 + 1192) + 4360LL)); /*0x1bd615*/
        *(_WORD *)(a1 + 476) = 1; /*0x1bd61d*/
        cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1bd632*/
        cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 128); /*0x1bd644*/
        *(_WORD *)(a1 + 589) = 0; /*0x1bd64a*/
LABEL_51:
        *(_BYTE *)(a1 + 478) = 0; /*0x1bd93d*/
        return 1; /*0x1bd93d*/
      }
      return 0; /*0x1bd54e*/
    }
    cocos2d::CCTouch::getLocationInView(a2, &v28); /*0x1bd660*/
    v14 = ((__int64 (*)(void))cocos2d::CCDirector::sharedDirector)(); /*0x1bd666*/
    v15 = cocos2d::CCDirector::convertToGL(v14, &Time, &v28); /*0x1bd679*/
    cocos2d::CCPoint::operator=(&v28, v15); /*0x1bd687*/
    v16 = cocos2d::CCNode::convertToWorldSpace(a1 - 320, &Time, &v28); /*0x1bd69e*/
    cocos2d::CCPoint::operator=(&v28, v16); /*0x1bd6ac*/
    cocos2d::CCPoint::operator=(a1 + 1200, &v28); /*0x1bd6be*/
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 720) + 344LL))(*(_QWORD *)(a1 + 720)); /*0x1bd6ce*/
    if ( *(float *)(a1 + 584) <= *(float *)(a1 + 1204) ) /*0x1bd6e3*/
    {
      v18 = *(_QWORD *)(a1 + 1192); /*0x1bd6fe*/
      if ( *(_DWORD *)(v18 + 2204) != 1 ) /*0x1bd70c*/
      {
        if ( *(_DWORD *)(a1 + 432) == -1 ) /*0x1bd734*/
        {
          v20 = *(cocos2d::CCObject **)(a1 + 408); /*0x1bd73d*/
          if ( v20 ) /*0x1bd747*/
          {
            cocos2d::CCObject::release(v20); /*0x1bd749*/
            *(_QWORD *)(a1 + 408) = 0; /*0x1bd74f*/
          }
          if ( (unsigned __int8)SetupSpawnPopup_queueUpdateButtons(a1 - 320) ) /*0x1bd761*/
            sub_1BCF50(a1 - 320); /*0x1bd771*/
          if ( !*(_BYTE *)(a1 + 416) ) /*0x1bd776*/
          {
            if ( *(_BYTE *)(a1 + 588) /*0x1bd79d*/
              || (v21 = ((__int64 (*)(void))cocos2d::CCDirector::sharedDirector)(),
                  *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 176LL))(v21) + 152)) )
            {
              if ( *(_DWORD *)(a1 + 1188) == 3 ) /*0x1bd7ad*/
              {
                *(_BYTE *)(a1 + 589) = 1; /*0x1bd7af*/
                cocos2d::CCPoint::operator=(a1 + 1208, a1 + 1200); /*0x1bd7c4*/
              }
            }
          }
          v23 = 1; /*0x1bd7f5*/
          if ( !*(_BYTE *)(a1 + 588) ) /*0x1bd7ca*/
          {
            v22 = ((__int64 (*)(void))cocos2d::CCDirector::sharedDirector)(); /*0x1bd7d3*/
            if ( !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 176LL))(v22) + 152) ) /*0x1bd7e8*/
              v23 = 0; /*0x1bd7d1*/
          }
          *(_BYTE *)(a1 + 590) = v23; /*0x1bd7f7*/
          *(_BYTE *)(a1 + 591) = 0; /*0x1bd7fd*/
          *(_DWORD *)(a1 + 432) = *(_DWORD *)(a2 + 56); /*0x1bd807*/
          *(_BYTE *)(a1 + 436) = 0; /*0x1bd80d*/
          cocos2d::CCPoint::operator=(a1 + 448, a1 + 1200); /*0x1bd822*/
          cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1bd834*/
          if ( !*(_BYTE *)(a1 + 590) ) /*0x1bd83a*/
          {
            v24 = qword_905FD0; /*0x1bd847*/
            if ( !qword_905FD0 ) /*0x1bd851*/
            {
              Time.time = (__time64_t)operator new(0x6E8u); /*0x1bd85d*/
              qword_905FD0 = sub_2723A0(Time.time); /*0x1bd86b*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1bd87c*/
              v24 = qword_905FD0; /*0x1bd87e*/
            }
            if ( GameManager_getGameVariable(v24, "0057") ) /*0x1bd88c*/
            {
              v25 = cocos2d::CCCallFunc::create(a1 - 320, sub_1BCC70); /*0x1bd8a9*/
              v26 = cocos2d::CCDelayTime::create(0.30000001); /*0x1bd8b4*/
              v27 = cocos2d::CCSequence::create(v26, v25, 0); /*0x1bd8c9*/
              (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v27 + 64LL))(v27, 123); /*0x1bd8db*/
              cocos2d::CCNode::runAction((cocos2d::CCNode *)(a1 - 320), v27); /*0x1bd8e8*/
            }
          }
          ftime64(&Time); /*0x1bd8f3*/
          *(double *)(a1 + 1312) = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x1bd91c*/
          *(_BYTE *)(a1 + 1320) = 0; /*0x1bd924*/
          cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 128); /*0x1bd937*/
          goto LABEL_51; /*0x1bd937*/
        }
        return 0; /*0x1bd738*/
      }
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 1192) + 2204LL) != 1 || v17 ) /*0x1bd6f7*/
        return 0; /*0x1bd6f7*/
      v18 = *(_QWORD *)(a1 + 1192); /*0x1bd6f9*/
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v18 + 13952) + 320LL) + 8LL))( /*0x1bd725*/
      *(_QWORD *)(v18 + 13952) + 320LL,
      a2,
      a3);
    return 1; /*0x1bd728*/
  }
  *(_DWORD *)(a1 + 424) = *(_DWORD *)(a2 + 56); /*0x1bd412*/
  return 1; /*0x1bd946*/
}

// [5/47] Address: 0x2c6250
// Method: GameStatsManager::setupIconCredits
__int64 __fastcall GameStatsManager_setupIconCredits(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // ... [189385 chars total]

// [6/47] Address: 0x2d2fa0
// Method: GameStatsManager::~GameStatsManager
void __fastcall GameStatsManager__dtor_GameStatsManager(__int64 a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  cocos2d::CCObject *v12; // rcx
  cocos2d::CCObject *v13; // rcx
  cocos2d::CCObject *v14; // rcx
  cocos2d::CCObject *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx

  *(_QWORD *)a1 = &GameStatsManager::`vftable'; /*0x2d2fb4*/
  v2 = *(cocos2d::CCObject **)(a1 + 928); /*0x2d2fb7*/
  if ( v2 ) /*0x2d2fc1*/
    cocos2d::CCObject::release(v2); /*0x2d2fc3*/
  v3 = *(cocos2d::CCObject **)(a1 + 328); /*0x2d2fc9*/
  if ( v3 ) /*0x2d2fd3*/
    cocos2d::CCObject::release(v3); /*0x2d2fd5*/
  v4 = *(cocos2d::CCObject **)(a1 + 336); /*0x2d2fdb*/
  if ( v4 ) /*0x2d2fe5*/
    cocos2d::CCObject::release(v4); /*0x2d2fe7*/
  v5 = *(cocos2d::CCObject **)(a1 + 520); /*0x2d2fed*/
  if ( v5 ) /*0x2d2ff7*/
    cocos2d::CCObject::release(v5); /*0x2d2ff9*/
  v6 = *(cocos2d::CCObject **)(a1 + 344); /*0x2d2fff*/
  if ( v6 ) /*0x2d3009*/
    cocos2d::CCObject::release(v6); /*0x2d300b*/
  v7 = *(cocos2d::CCObject **)(a1 + 576); /*0x2d3011*/
  if ( v7 ) /*0x2d301b*/
    cocos2d::CCObject::release(v7); /*0x2d301d*/
  v8 = *(cocos2d::CCObject **)(a1 + 528); /*0x2d3023*/
  if ( v8 ) /*0x2d302d*/
    cocos2d::CCObject::release(v8); /*0x2d302f*/
  v9 = *(cocos2d::CCObject **)(a1 + 536); /*0x2d3035*/
  if ( v9 ) /*0x2d303f*/
    cocos2d::CCObject::release(v9); /*0x2d3041*/
  v10 = *(cocos2d::CCObject **)(a1 + 360); /*0x2d3047*/
  if ( v10 ) /*0x2d3051*/
    cocos2d::CCObject::release(v10); /*0x2d3053*/
  v11 = *(cocos2d::CCObject **)(a1 + 352); /*0x2d3059*/
  if ( v11 ) /*0x2d3063*/
    cocos2d::CCObject::release(v11); /*0x2d3065*/
  v12 = *(cocos2d::CCObject **)(a1 + 936); /*0x2d306b*/
  if ( v12 ) /*0x2d3075*/
    cocos2d::CCObject::release(v12); /*0x2d3077*/
  v13 = *(cocos2d::CCObject **)(a1 + 368); /*0x2d307d*/
  if ( v13 ) /*0x2d3087*/
    cocos2d::CCObject::release(v13); /*0x2d3089*/
  v14 = *(cocos2d::CCObject **)(a1 + 376); /*0x2d308f*/
  if ( v14 ) /*0x2d3099*/
    cocos2d::CCObject::release(v14); /*0x2d309b*/
  v15 = *(cocos2d::CCObject **)(a1 + 512); /*0x2d30a1*/
  if ( v15 ) /*0x2d30ab*/
    cocos2d::CCObject::release(v15); /*0x2d30ad*/
  qword_905FE0 = 0; /*0x2d30b3*/
  sub_7F2E0(a1 + 976); /*0x2d30c5*/
  sub_18A270(a1 + 960, a1 + 960, *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL)); /*0x2d30e3*/
  j_j_free(*(void **)(a1 + 960)); /*0x2d30f4*/
  sub_7F2E0(a1 + 944); /*0x2d3100*/
  sub_3DA90((void *)(a1 + 672)); /*0x2d310c*/
  sub_3DB00(a1 + 656); /*0x2d3118*/
  sub_3DA90((void *)(a1 + 608)); /*0x2d3124*/
  sub_3DB00(a1 + 592); /*0x2d3130*/
  sub_3DA90((void *)(a1 + 472)); /*0x2d313c*/
  sub_2F6C80(v16, *(_QWORD *)(a1 + 456)); /*0x2d3148*/
  j_j_free(*(void **)(a1 + 456)); /*0x2d3159*/
  sub_3DA90((void *)(a1 + 408)); /*0x2d3165*/
  sub_2F6C80(v17, *(_QWORD *)(a1 + 392)); /*0x2d3171*/
  j_j_free(*(void **)(a1 + 392)); /*0x2d3182*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)a1); /*0x2d3194*/
}

// [7/47] Address: 0x2d31a0
// Method: GameStatsManager::init
// Hidden C++ exception states: #wind=1
char __fastcall GameStatsManager_init(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rax
  cocos2d::CCObject *v4; // rax
  cocos2d::CCObject *v5; // rbx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rax
  cocos2d::CCObject *v8; // rax
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 i; // r15
  __int64 v12; // r14
  cocos2d::CCArray *v13; // rsi
  unsigned int v14; // ebx
  struct cocos2d::CCObject *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct cocos2d::CCString *v18; // rax
  _BYTE v20[32]; // [rsp+20h] [rbp-48h] BYREF

  v2 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 1); /*0x2d31d6*/
  a1[41] = v2; /*0x2d31dc*/
  cocos2d::CCObject::retain(v2); /*0x2d31e6*/
  v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2d31ec*/
  a1[116] = v3; /*0x2d31f2*/
  cocos2d::CCObject::retain(v3); /*0x2d31fc*/
  v4 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2d3202*/
  v5 = v4; /*0x2d3208*/
  if ( (cocos2d::CCObject *)a1[66] != v4 ) /*0x2d3212*/
  {
    if ( v4 ) /*0x2d3217*/
      cocos2d::CCObject::retain(v4); /*0x2d321c*/
    v6 = (cocos2d::CCObject *)a1[66]; /*0x2d3222*/
    if ( v6 ) /*0x2d322c*/
      cocos2d::CCObject::release(v6); /*0x2d322e*/
    a1[66] = v5; /*0x2d3234*/
  }
  GameStatsManager_setupIconCredits((__int64)a1); /*0x2d323e*/
  GameStatsManager_createStoreItems(a1); /*0x2d3246*/
  if ( !a1[45] ) /*0x2d324b*/
  {
    v7 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2d3259*/
    a1[45] = v7; /*0x2d325f*/
    cocos2d::CCObject::retain(v7); /*0x2d3269*/
    v8 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2d326f*/
    a1[44] = v8; /*0x2d3275*/
    cocos2d::CCObject::retain(v8); /*0x2d327f*/
    GameStatsManager_createSecretChestRewards(a1); /*0x2d3288*/
    v9 = a1[44]; /*0x2d328d*/
    if ( v9 ) /*0x2d3297*/
    {
      v10 = *(_QWORD *)(v9 + 56); /*0x2d329d*/
      if ( v10 ) /*0x2d32a4*/
      {
        for ( i = *(_QWORD *)(v10 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x2d32aa*/
        {
          v12 = *(_QWORD *)(v10 + 264); /*0x2d32c0*/
          if ( v12 ) /*0x2d32ca*/
          {
            v13 = *(cocos2d::CCArray **)(v12 + 72); /*0x2d32d0*/
            if ( v13 ) /*0x2d32d7*/
            {
              v14 = 0; /*0x2d32dd*/
              if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v12 + 72)) ) /*0x2d32e2*/
              {
                do /*0x2d3367*/
                {
                  v15 = cocos2d::CCArray::objectAtIndex(v13, v14); /*0x2d32f5*/
                  if ( *((_DWORD *)v15 + 14) == 9 ) /*0x2d32ff*/
                  {
                    GameStatsManager_getRewardKey(v16, v20, *((unsigned int *)v15 + 16), *((unsigned int *)v15 + 15)); /*0x2d330e*/
                    cocos2d::CCDictionary::objectForKey(a1[45], v20); /*0x2d3320*/
                    v17 = a1[45]; /*0x2d3326*/
                    v18 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(v12 + 56)); /*0x2d3338*/
                    cocos2d::CCDictionary::setObject(v17, v18, v20); /*0x2d3349*/
                    sub_3C310(v20); /*0x2d3355*/
                  }
                  ++v14; /*0x2d335a*/
                }
                while ( v14 < cocos2d::CCArray::count(v13) ); /*0x2d3367*/
              }
            }
          }
          v10 = i; /*0x2d3369*/
          if ( !i ) /*0x2d336f*/
            break; /*0x2d336f*/
        }
      }
    }
  }
  sub_2E5F70(a1); /*0x2d3380*/
  sub_2D33C0(a1); /*0x2d3388*/
  return 1; /*0x2d338f*/
}

// [8/47] Address: 0x2d38e0
// Method: GameStatsManager::createStoreItems
void __fastcall GameStatsManager_createStoreItems(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rax
  __int64 v4; // rcx
  cocos2d::CCObject *v5; // rax

  if ( !a1[42] ) /*0x2d38e6*/
  {
    v2 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2d38fc*/
    a1[42] = v2; /*0x2d3905*/
    cocos2d::CCObject::retain(v2); /*0x2d390c*/
    v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2d3912*/
    a1[43] = v3; /*0x2d391b*/
    cocos2d::CCObject::retain(v3); /*0x2d3922*/
    v5 = (cocos2d::CCObject *)cocos2d::CCArray::create(v4); /*0x2d3928*/
    a1[65] = v5; /*0x2d3931*/
    cocos2d::CCObject::retain(v5); /*0x2d3938*/
    GameStatsManager_addStoreItem((_DWORD)a1, 34, 79, 1, 500, 0); /*0x2d3960*/
    GameStatsManager_addStoreItem((_DWORD)a1, 1, 77, 1, 1000, 0); /*0x2d3982*/
    GameStatsManager_addStoreItem((_DWORD)a1, 2, 86, 1, 1000, 0); /*0x2d39a7*/
    GameStatsManager_addStoreItem((_DWORD)a1, 3, 73, 1, 1000, 0); /*0x2d39cc*/
    GameStatsManager_addStoreItem((_DWORD)a1, 4, 102, 1, 1000, 0); /*0x2d39f1*/
    GameStatsManager_addStoreItem((_DWORD)a1, 5, 107, 1, 1000, 0); /*0x2d3a16*/
    GameStatsManager_addStoreItem((_DWORD)a1, 6, 27, 4, 2000, 0); /*0x2d3a3b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 7, 25, 6, 2000, 0); /*0x2d3a60*/
    GameStatsManager_addStoreItem((_DWORD)a1, 8, 23, 6, 2500, 0); /*0x2d3a85*/
    GameStatsManager_addStoreItem((_DWORD)a1, 9, 20, 5, 1000, 0); /*0x2d3aaa*/
    GameStatsManager_addStoreItem((_DWORD)a1, 10, 19, 5, 1500, 0); /*0x2d3acf*/
    GameStatsManager_addStoreItem((_DWORD)a1, 11, 21, 7, 500, 0); /*0x2d3af4*/
    GameStatsManager_addStoreItem((_DWORD)a1, 12, 2, 9, 2000, 0); /*0x2d3b19*/
    GameStatsManager_addStoreItem((_DWORD)a1, 13, 12, 8, 3000, 0); /*0x2d3b3e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 14, 8, 11, 7000, 0); /*0x2d3b63*/
    GameStatsManager_addStoreItem((_DWORD)a1, 15, 11, 11, 7000, 0); /*0x2d3b85*/
    GameStatsManager_addStoreItem((_DWORD)a1, 16, 18, 7, 2000, 1); /*0x2d3bae*/
    GameStatsManager_addStoreItem((_DWORD)a1, 17, 94, 1, 3000, 1); /*0x2d3bd7*/
    GameStatsManager_addStoreItem((_DWORD)a1, 18, 85, 1, 2500, 1); /*0x2d3c00*/
    GameStatsManager_addStoreItem((_DWORD)a1, 19, 96, 1, 2000, 1); /*0x2d3c29*/
    GameStatsManager_addStoreItem((_DWORD)a1, 20, 4, 12, 1000, 1); /*0x2d3c52*/
    GameStatsManager_addStoreItem((_DWORD)a1, 21, 14, 8, 3000, 1); /*0x2d3c7b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 22, 21, 6, 4000, 1); /*0x2d3ca4*/
    GameStatsManager_addStoreItem((_DWORD)a1, 23, 3, 9, 3000, 1); /*0x2d3ccd*/
    GameStatsManager_addStoreItem((_DWORD)a1, 24, 25, 5, 2000, 1); /*0x2d3cf6*/
    GameStatsManager_addStoreItem((_DWORD)a1, 25, 13, 11, 10000, 1); /*0x2d3d1f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 26, 35, 2, 1000, 0); /*0x2d3d44*/
    GameStatsManager_addStoreItem((_DWORD)a1, 27, 36, 2, 1000, 0); /*0x2d3d69*/
    GameStatsManager_addStoreItem((_DWORD)a1, 28, 39, 2, 1000, 1); /*0x2d3d92*/
    GameStatsManager_addStoreItem((_DWORD)a1, 29, 40, 2, 1000, 1); /*0x2d3dbb*/
    GameStatsManager_addStoreItem((_DWORD)a1, 30, 39, 3, 1000, 0); /*0x2d3de0*/
    GameStatsManager_addStoreItem((_DWORD)a1, 32, 32, 3, 1000, 1); /*0x2d3e06*/
    GameStatsManager_addStoreItem((_DWORD)a1, 33, 41, 3, 1000, 1); /*0x2d3e2f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 35, 5, 10, 4000, 0); /*0x2d3e54*/
    GameStatsManager_addStoreItem((_DWORD)a1, 36, 6, 10, 4000, 0); /*0x2d3e79*/
    GameStatsManager_addStoreItem((_DWORD)a1, 37, 7, 10, 4000, 1); /*0x2d3ea2*/
    GameStatsManager_addStoreItem((_DWORD)a1, 38, 117, 1, 4000, 2); /*0x2d3ecb*/
    GameStatsManager_addStoreItem((_DWORD)a1, 39, 118, 1, 2000, 2); /*0x2d3ef4*/
    GameStatsManager_addStoreItem((_DWORD)a1, 40, 119, 1, 2000, 2); /*0x2d3f1d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 41, 120, 1, 4000, 2); /*0x2d3f46*/
    GameStatsManager_addStoreItem((_DWORD)a1, 42, 121, 1, 2000, 2); /*0x2d3f6f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 43, 122, 1, 2000, 2); /*0x2d3f98*/
    GameStatsManager_addStoreItem((_DWORD)a1, 44, 123, 1, 6000, 2); /*0x2d3fc1*/
    GameStatsManager_addStoreItem((_DWORD)a1, 45, 124, 1, 8000, 2); /*0x2d3fea*/
    GameStatsManager_addStoreItem((_DWORD)a1, 46, 125, 1, 4000, 2); /*0x2d4013*/
    GameStatsManager_addStoreItem((_DWORD)a1, 47, 126, 1, 2000, 2); /*0x2d403c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 48, 127, 1, 6000, 2); /*0x2d4065*/
    GameStatsManager_addStoreItem((_DWORD)a1, 49, 128, 1, 8000, 2); /*0x2d408e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 50, 129, 1, 6000, 2); /*0x2d40b7*/
    GameStatsManager_addStoreItem((_DWORD)a1, 51, 130, 1, 4000, 2); /*0x2d40e0*/
    GameStatsManager_addStoreItem((_DWORD)a1, 52, 131, 1, 4000, 2); /*0x2d4109*/
    GameStatsManager_addStoreItem((_DWORD)a1, 53, 132, 1, 4000, 2); /*0x2d4132*/
    GameStatsManager_addStoreItem((_DWORD)a1, 54, 133, 1, 8000, 2); /*0x2d415b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 55, 134, 1, 6000, 2); /*0x2d4184*/
    GameStatsManager_addStoreItem((_DWORD)a1, 56, 135, 1, 6000, 2); /*0x2d41ad*/
    GameStatsManager_addStoreItem((_DWORD)a1, 57, 30, 5, 4000, 2); /*0x2d41d6*/
    GameStatsManager_addStoreItem((_DWORD)a1, 58, 31, 5, 6000, 2); /*0x2d41ff*/
    GameStatsManager_addStoreItem((_DWORD)a1, 59, 32, 5, 6000, 2); /*0x2d4228*/
    GameStatsManager_addStoreItem((_DWORD)a1, 60, 33, 5, 2000, 2); /*0x2d4251*/
    GameStatsManager_addStoreItem((_DWORD)a1, 61, 34, 5, 4000, 2); /*0x2d427a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 62, 35, 5, 8000, 2); /*0x2d42a3*/
    GameStatsManager_addStoreItem((_DWORD)a1, 63, 36, 5, 6000, 2); /*0x2d42cc*/
    GameStatsManager_addStoreItem((_DWORD)a1, 64, 37, 5, 2000, 2); /*0x2d42f5*/
    GameStatsManager_addStoreItem((_DWORD)a1, 65, 38, 5, 2000, 2); /*0x2d431e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 66, 36, 4, 2000, 2); /*0x2d4347*/
    GameStatsManager_addStoreItem((_DWORD)a1, 67, 37, 4, 2000, 2); /*0x2d4370*/
    GameStatsManager_addStoreItem((_DWORD)a1, 68, 38, 4, 6000, 2); /*0x2d4399*/
    GameStatsManager_addStoreItem((_DWORD)a1, 69, 39, 4, 2000, 2); /*0x2d43c2*/
    GameStatsManager_addStoreItem((_DWORD)a1, 70, 40, 4, 4000, 2); /*0x2d43eb*/
    GameStatsManager_addStoreItem((_DWORD)a1, 71, 41, 4, 4000, 2); /*0x2d4414*/
    GameStatsManager_addStoreItem((_DWORD)a1, 72, 42, 4, 6000, 2); /*0x2d443d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 73, 43, 4, 2000, 2); /*0x2d4466*/
    GameStatsManager_addStoreItem((_DWORD)a1, 74, 44, 4, 6000, 2); /*0x2d448f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 75, 45, 4, 8000, 2); /*0x2d44b8*/
    GameStatsManager_addStoreItem((_DWORD)a1, 76, 46, 4, 4000, 2); /*0x2d44e1*/
    GameStatsManager_addStoreItem((_DWORD)a1, 77, 47, 4, 6000, 2); /*0x2d450a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 78, 48, 4, 4000, 2); /*0x2d4533*/
    GameStatsManager_addStoreItem((_DWORD)a1, 79, 29, 6, 6000, 2); /*0x2d455c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 80, 30, 6, 6000, 2); /*0x2d4585*/
    GameStatsManager_addStoreItem((_DWORD)a1, 81, 31, 6, 4000, 2); /*0x2d45ae*/
    GameStatsManager_addStoreItem((_DWORD)a1, 82, 32, 6, 6000, 2); /*0x2d45d7*/
    GameStatsManager_addStoreItem((_DWORD)a1, 83, 33, 6, 4000, 2); /*0x2d4600*/
    GameStatsManager_addStoreItem((_DWORD)a1, 84, 34, 6, 2000, 2); /*0x2d4629*/
    GameStatsManager_addStoreItem((_DWORD)a1, 85, 35, 6, 2000, 2); /*0x2d4652*/
    GameStatsManager_addStoreItem((_DWORD)a1, 86, 24, 7, 2000, 2); /*0x2d467b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 87, 25, 7, 4000, 2); /*0x2d46a4*/
    GameStatsManager_addStoreItem((_DWORD)a1, 88, 26, 7, 2000, 2); /*0x2d46cd*/
    GameStatsManager_addStoreItem((_DWORD)a1, 89, 27, 7, 2000, 2); /*0x2d46f6*/
    GameStatsManager_addStoreItem((_DWORD)a1, 90, 28, 7, 6000, 2); /*0x2d471f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 91, 29, 7, 6000, 2); /*0x2d4748*/
    GameStatsManager_addStoreItem((_DWORD)a1, 92, 30, 7, 4000, 2); /*0x2d4771*/
    GameStatsManager_addStoreItem((_DWORD)a1, 93, 31, 7, 6000, 2); /*0x2d479a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 94, 32, 7, 2000, 2); /*0x2d47c3*/
    GameStatsManager_addStoreItem((_DWORD)a1, 95, 33, 7, 6000, 2); /*0x2d47ec*/
    GameStatsManager_addStoreItem((_DWORD)a1, 96, 18, 8, 2000, 2); /*0x2d4815*/
    GameStatsManager_addStoreItem((_DWORD)a1, 97, 19, 8, 6000, 2); /*0x2d483e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 98, 20, 8, 2000, 2); /*0x2d4867*/
    GameStatsManager_addStoreItem((_DWORD)a1, 99, 21, 8, 4000, 2); /*0x2d4890*/
    GameStatsManager_addStoreItem((_DWORD)a1, 100, 22, 8, 6000, 2); /*0x2d48b9*/
    GameStatsManager_addStoreItem((_DWORD)a1, 101, 23, 8, 2000, 2); /*0x2d48e2*/
    GameStatsManager_addStoreItem((_DWORD)a1, 102, 24, 8, 6000, 2); /*0x2d490b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 103, 25, 8, 4000, 2); /*0x2d4934*/
    GameStatsManager_addStoreItem((_DWORD)a1, 104, 11, 9, 4000, 2); /*0x2d495d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 105, 12, 9, 6000, 2); /*0x2d4986*/
    GameStatsManager_addStoreItem((_DWORD)a1, 106, 13, 9, 4000, 2); /*0x2d49af*/
    GameStatsManager_addStoreItem((_DWORD)a1, 107, 14, 9, 8000, 2); /*0x2d49d8*/
    GameStatsManager_addStoreItem((_DWORD)a1, 108, 15, 9, 2000, 2); /*0x2d4a01*/
    GameStatsManager_addStoreItem((_DWORD)a1, 109, 16, 9, 6000, 2); /*0x2d4a2a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 111, 140, 1, 3000, 0); /*0x2d4a4f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 112, 109, 1, 4000, 0); /*0x2d4a74*/
    GameStatsManager_addStoreItem((_DWORD)a1, 113, 113, 1, 4000, 0); /*0x2d4a96*/
    GameStatsManager_addStoreItem((_DWORD)a1, 114, 40, 5, 4000, 0); /*0x2d4abb*/
    GameStatsManager_addStoreItem((_DWORD)a1, 115, 35, 7, 4000, 0); /*0x2d4ae0*/
    GameStatsManager_addStoreItem((_DWORD)a1, 116, 33, 2, 1000, 0); /*0x2d4b05*/
    GameStatsManager_addStoreItem((_DWORD)a1, 117, 28, 3, 1000, 0); /*0x2d4b2a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 118, 136, 1, 5000, 1); /*0x2d4b53*/
    GameStatsManager_addStoreItem((_DWORD)a1, 119, 110, 1, 5000, 1); /*0x2d4b7c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 120, 16, 11, 15000, 1); /*0x2d4ba5*/
    GameStatsManager_addStoreItem((_DWORD)a1, 121, 6, 12, 25000, 5); /*0x2d4bce*/
    GameStatsManager_addStoreItem((_DWORD)a1, 122, 7, 12, 25000, 5); /*0x2d4bf7*/
    GameStatsManager_addStoreItem((_DWORD)a1, 123, 8, 12, 25000, 5); /*0x2d4c20*/
    GameStatsManager_addStoreItem((_DWORD)a1, 124, 9, 12, 25000, 5); /*0x2d4c49*/
    GameStatsManager_addStoreItem((_DWORD)a1, 125, 10, 12, 25000, 5); /*0x2d4c72*/
    GameStatsManager_addStoreItem((_DWORD)a1, 126, 11, 12, 25000, 5); /*0x2d4c9b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 127, 12, 12, 25000, 5); /*0x2d4cc1*/
    GameStatsManager_addStoreItem((_DWORD)a1, 128, 13, 12, 25000, 5); /*0x2d4cea*/
    GameStatsManager_addStoreItem((_DWORD)a1, 129, 14, 12, 25000, 5); /*0x2d4d13*/
    GameStatsManager_addStoreItem((_DWORD)a1, 130, 15, 12, 25000, 5); /*0x2d4d3c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 131, 162, 1, 3000, 0); /*0x2d4d61*/
    GameStatsManager_addStoreItem((_DWORD)a1, 132, 40, 6, 3500, 0); /*0x2d4d86*/
    GameStatsManager_addStoreItem((_DWORD)a1, 133, 84, 2, 1500, 0); /*0x2d4dab*/
    GameStatsManager_addStoreItem((_DWORD)a1, 134, 104, 3, 2000, 0); /*0x2d4dd0*/
    GameStatsManager_addStoreItem((_DWORD)a1, 135, 7, 13, 5000, 0); /*0x2d4df5*/
    GameStatsManager_addStoreItem((_DWORD)a1, 136, 97, 2, 2500, 0); /*0x2d4e1a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 137, 33, 8, 3500, 0); /*0x2d4e3f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 138, 18, 9, 4000, 0); /*0x2d4e64*/
    GameStatsManager_addStoreItem((_DWORD)a1, 139, 57, 5, 3000, 0); /*0x2d4e89*/
    GameStatsManager_addStoreItem((_DWORD)a1, 140, 49, 3, 2500, 0); /*0x2d4eae*/
    GameStatsManager_addStoreItem((_DWORD)a1, 141, 38, 7, 5000, 0); /*0x2d4ed3*/
    GameStatsManager_addStoreItem((_DWORD)a1, 142, 191, 1, 3000, 0); /*0x2d4ef8*/
    GameStatsManager_addStoreItem((_DWORD)a1, 143, 99, 2, 1500, 0); /*0x2d4f1d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 144, 88, 3, 2000, 0); /*0x2d4f42*/
    GameStatsManager_addStoreItem((_DWORD)a1, 145, 229, 1, 5000, 1); /*0x2d4f6b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 146, 86, 3, 1500, 1); /*0x2d4f94*/
    GameStatsManager_addStoreItem((_DWORD)a1, 147, 58, 4, 4000, 1); /*0x2d4fbd*/
    GameStatsManager_addStoreItem((_DWORD)a1, 148, 83, 6, 3000, 1); /*0x2d4fe6*/
    GameStatsManager_addStoreItem((_DWORD)a1, 149, 45, 8, 3500, 1); /*0x2d500f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 150, 12, 13, 6000, 1); /*0x2d5038*/
    GameStatsManager_addStoreItem((_DWORD)a1, 151, 206, 1, 2000, 1); /*0x2d5061*/
    GameStatsManager_addStoreItem((_DWORD)a1, 152, 94, 2, 1000, 1); /*0x2d508a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 153, 60, 5, 2500, 1); /*0x2d50b3*/
    GameStatsManager_addStoreItem((_DWORD)a1, 154, 107, 5, 3000, 1); /*0x2d50dc*/
    GameStatsManager_addStoreItem((_DWORD)a1, 155, 69, 9, 5000, 1); /*0x2d5105*/
    GameStatsManager_addStoreItem((_DWORD)a1, 156, 77, 4, 4000, 1); /*0x2d512e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 157, 49, 2, 1000, 1); /*0x2d5157*/
    GameStatsManager_addStoreItem((_DWORD)a1, 158, 70, 3, 1000, 1); /*0x2d5180*/
    GameStatsManager_addStoreItem((_DWORD)a1, 159, 137, 4, 4000, 1); /*0x2d51a9*/
    GameStatsManager_addStoreItem((_DWORD)a1, 160, 27, 13, 6000, 1); /*0x2d51d2*/
    GameStatsManager_addStoreItem((_DWORD)a1, 161, 225, 1, 3000, 1); /*0x2d51fb*/
    GameStatsManager_addStoreItem((_DWORD)a1, 162, 85, 3, 1500, 1); /*0x2d5224*/
    GameStatsManager_addStoreItem((_DWORD)a1, 163, 78, 7, 2500, 1); /*0x2d524d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 164, 58, 9, 3500, 1); /*0x2d5276*/
    GameStatsManager_addStoreItem((_DWORD)a1, 165, 104, 6, 2500, 1); /*0x2d529f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 166, 168, 1, 5000, 3); /*0x2d52c8*/
    GameStatsManager_addStoreItem((_DWORD)a1, 167, 230, 1, 6000, 3); /*0x2d52f1*/
    GameStatsManager_addStoreItem((_DWORD)a1, 168, 253, 1, 7000, 3); /*0x2d531a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 169, 358, 1, 6000, 3); /*0x2d5343*/
    GameStatsManager_addStoreItem((_DWORD)a1, 170, 126, 4, 7000, 3); /*0x2d536c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 171, 111, 4, 6000, 3); /*0x2d5395*/
    GameStatsManager_addStoreItem((_DWORD)a1, 172, 144, 4, 5000, 3); /*0x2d53be*/
    GameStatsManager_addStoreItem((_DWORD)a1, 173, 164, 4, 7000, 3); /*0x2d53e7*/
    GameStatsManager_addStoreItem((_DWORD)a1, 174, 64, 5, 5000, 3); /*0x2d5410*/
    GameStatsManager_addStoreItem((_DWORD)a1, 175, 49, 5, 6000, 3); /*0x2d5439*/
    GameStatsManager_addStoreItem((_DWORD)a1, 176, 107, 6, 6000, 3); /*0x2d5462*/
    GameStatsManager_addStoreItem((_DWORD)a1, 177, 136, 6, 5000, 3); /*0x2d548b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 178, 86, 6, 7000, 3); /*0x2d54b4*/
    GameStatsManager_addStoreItem((_DWORD)a1, 179, 77, 7, 7000, 3); /*0x2d54dd*/
    GameStatsManager_addStoreItem((_DWORD)a1, 180, 85, 7, 6000, 3); /*0x2d5506*/
    GameStatsManager_addStoreItem((_DWORD)a1, 181, 68, 7, 5000, 3); /*0x2d552f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 182, 52, 8, 6000, 3); /*0x2d5558*/
    GameStatsManager_addStoreItem((_DWORD)a1, 183, 68, 8, 7000, 3); /*0x2d5581*/
    GameStatsManager_addStoreItem((_DWORD)a1, 184, 50, 9, 6000, 3); /*0x2d55aa*/
    GameStatsManager_addStoreItem((_DWORD)a1, 185, 56, 9, 6000, 3); /*0x2d55d3*/
    GameStatsManager_addStoreItem((_DWORD)a1, 186, 6, 13, 6000, 3); /*0x2d55fc*/
    GameStatsManager_addStoreItem((_DWORD)a1, 187, 16, 12, 40000, 3); /*0x2d5625*/
    GameStatsManager_addStoreItem((_DWORD)a1, 188, 17, 12, 2000, 4); /*0x2d564e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 189, 181, 1, 300, 4); /*0x2d5677*/
    GameStatsManager_addStoreItem((_DWORD)a1, 190, 186, 1, 500, 4); /*0x2d56a0*/
    GameStatsManager_addStoreItem((_DWORD)a1, 191, 196, 1, 400, 4); /*0x2d56c9*/
    GameStatsManager_addStoreItem((_DWORD)a1, 192, 203, 1, 600, 4); /*0x2d56f2*/
    GameStatsManager_addStoreItem((_DWORD)a1, 193, 250, 1, 300, 4); /*0x2d571b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 194, 263, 1, 600, 4); /*0x2d5744*/
    GameStatsManager_addStoreItem((_DWORD)a1, 195, 314, 1, 400, 4); /*0x2d576d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 196, 421, 1, 500, 4); /*0x2d5796*/
    GameStatsManager_addStoreItem((_DWORD)a1, 197, 443, 1, 600, 4); /*0x2d57bf*/
    GameStatsManager_addStoreItem((_DWORD)a1, 198, 450, 1, 500, 4); /*0x2d57e8*/
    GameStatsManager_addStoreItem((_DWORD)a1, 199, 471, 1, 400, 4); /*0x2d5811*/
    GameStatsManager_addStoreItem((_DWORD)a1, 200, 66, 4, 500, 4); /*0x2d583a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 201, 81, 4, 600, 4); /*0x2d5863*/
    GameStatsManager_addStoreItem((_DWORD)a1, 202, 125, 4, 500, 4); /*0x2d588c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 203, 129, 4, 400, 4); /*0x2d58b5*/
    GameStatsManager_addStoreItem((_DWORD)a1, 204, 131, 4, 500, 4); /*0x2d58de*/
    GameStatsManager_addStoreItem((_DWORD)a1, 205, 168, 4, 600, 4); /*0x2d5907*/
    GameStatsManager_addStoreItem((_DWORD)a1, 206, 53, 5, 600, 4); /*0x2d5930*/
    GameStatsManager_addStoreItem((_DWORD)a1, 207, 98, 5, 300, 4); /*0x2d5959*/
    GameStatsManager_addStoreItem((_DWORD)a1, 208, 112, 5, 500, 4); /*0x2d5982*/
    GameStatsManager_addStoreItem((_DWORD)a1, 209, 113, 5, 400, 4); /*0x2d59ab*/
    GameStatsManager_addStoreItem((_DWORD)a1, 210, 116, 5, 500, 4); /*0x2d59d4*/
    GameStatsManager_addStoreItem((_DWORD)a1, 211, 45, 6, 500, 4); /*0x2d59fd*/
    GameStatsManager_addStoreItem((_DWORD)a1, 212, 52, 6, 500, 4); /*0x2d5a26*/
    GameStatsManager_addStoreItem((_DWORD)a1, 213, 100, 6, 600, 4); /*0x2d5a4f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 214, 140, 6, 600, 4); /*0x2d5a78*/
    GameStatsManager_addStoreItem((_DWORD)a1, 215, 149, 6, 600, 4); /*0x2d5aa1*/
    GameStatsManager_addStoreItem((_DWORD)a1, 216, 56, 7, 400, 4); /*0x2d5aca*/
    GameStatsManager_addStoreItem((_DWORD)a1, 217, 65, 7, 300, 4); /*0x2d5af3*/
    GameStatsManager_addStoreItem((_DWORD)a1, 218, 75, 7, 500, 4); /*0x2d5b1c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 219, 87, 7, 400, 4); /*0x2d5b45*/
    GameStatsManager_addStoreItem((_DWORD)a1, 220, 34, 8, 500, 4); /*0x2d5b6e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 221, 51, 8, 500, 4); /*0x2d5b97*/
    GameStatsManager_addStoreItem((_DWORD)a1, 222, 63, 8, 600, 4); /*0x2d5bc0*/
    GameStatsManager_addStoreItem((_DWORD)a1, 223, 55, 5, 300, 4); /*0x2d5be9*/
    GameStatsManager_addStoreItem((_DWORD)a1, 224, 29, 9, 500, 4); /*0x2d5c12*/
    GameStatsManager_addStoreItem((_DWORD)a1, 225, 54, 9, 300, 4); /*0x2d5c3b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 226, 60, 9, 400, 4); /*0x2d5c64*/
    GameStatsManager_addStoreItem((_DWORD)a1, 227, 65, 9, 300, 4); /*0x2d5c8d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 228, 10, 13, 500, 4); /*0x2d5cb6*/
    GameStatsManager_addStoreItem((_DWORD)a1, 229, 30, 13, 500, 4); /*0x2d5cdf*/
    GameStatsManager_addStoreItem((_DWORD)a1, 230, 40, 13, 600, 4); /*0x2d5d08*/
    GameStatsManager_addStoreItem((_DWORD)a1, 231, 5, 14, 600, 4); /*0x2d5d31*/
    GameStatsManager_addStoreItem((_DWORD)a1, 232, 77, 2, 100, 4); /*0x2d5d5a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 233, 71, 2, 100, 4); /*0x2d5d83*/
    GameStatsManager_addStoreItem((_DWORD)a1, 234, 64, 2, 100, 4); /*0x2d5dac*/
    GameStatsManager_addStoreItem((_DWORD)a1, 235, 100, 2, 100, 4); /*0x2d5dd5*/
    GameStatsManager_addStoreItem((_DWORD)a1, 236, 89, 3, 100, 4); /*0x2d5dfe*/
    GameStatsManager_addStoreItem((_DWORD)a1, 237, 106, 3, 100, 4); /*0x2d5e27*/
    GameStatsManager_addStoreItem((_DWORD)a1, 238, 43, 3, 100, 4); /*0x2d5e50*/
    GameStatsManager_addStoreItem((_DWORD)a1, 239, 72, 3, 100, 4); /*0x2d5e79*/
    GameStatsManager_addStoreItem((_DWORD)a1, 240, 98, 2, 100, 4); /*0x2d5ea2*/
    GameStatsManager_addStoreItem((_DWORD)a1, 241, 77, 3, 100, 4); /*0x2d5ecb*/
    GameStatsManager_addStoreItem((_DWORD)a1, 242, 74, 2, 100, 4); /*0x2d5ef4*/
    GameStatsManager_addStoreItem((_DWORD)a1, 243, 59, 3, 100, 4); /*0x2d5f1d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 244, 18, 12, 15000, 3); /*0x2d5f46*/
    GameStatsManager_addStoreItem((_DWORD)a1, 245, 19, 12, 15000, 3); /*0x2d5f6f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 246, 20, 12, 15000, 3); /*0x2d5f98*/
    GameStatsManager_addStoreItem((_DWORD)a1, 247, 2, 15, 20000, 3); /*0x2d5fc1*/
    GameStatsManager_addStoreItem((_DWORD)a1, 248, 3, 15, 20000, 3); /*0x2d5fea*/
    GameStatsManager_addStoreItem((_DWORD)a1, 249, 4, 15, 20000, 3); /*0x2d6013*/
    GameStatsManager_addStoreItem((_DWORD)a1, 250, 5, 15, 20000, 3); /*0x2d603c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 251, 6, 15, 20000, 3); /*0x2d6065*/
    GameStatsManager_addStoreItem((_DWORD)a1, 252, 18, 11, 1500, 4); /*0x2d608e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 253, 19, 11, 15000, 3); /*0x2d60b7*/
    GameStatsManager_addStoreItem((_DWORD)a1, 254, 465, 1, 400, 4); /*0x2d60e0*/
    GameStatsManager_addStoreItem((_DWORD)a1, 255, 62, 4, 500, 4); /*0x2d6109*/
    GameStatsManager_addStoreItem((_DWORD)a1, 256, 63, 4, 300, 4); /*0x2d6132*/
    GameStatsManager_addStoreItem((_DWORD)a1, 257, 81, 5, 500, 4); /*0x2d615b*/
    GameStatsManager_addStoreItem((_DWORD)a1, 258, 78, 6, 300, 4); /*0x2d6184*/
    GameStatsManager_addStoreItem((_DWORD)a1, 259, 80, 6, 400, 4); /*0x2d61ad*/
    GameStatsManager_addStoreItem((_DWORD)a1, 260, 80, 7, 300, 4); /*0x2d61d6*/
    GameStatsManager_addStoreItem((_DWORD)a1, 261, 82, 7, 500, 4); /*0x2d61ff*/
    GameStatsManager_addStoreItem((_DWORD)a1, 262, 49, 8, 500, 4); /*0x2d6228*/
    GameStatsManager_addStoreItem((_DWORD)a1, 263, 62, 8, 300, 4); /*0x2d6251*/
    GameStatsManager_addStoreItem((_DWORD)a1, 264, 64, 9, 500, 4); /*0x2d627a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 265, 66, 9, 500, 4); /*0x2d62a3*/
    GameStatsManager_addStoreItem((_DWORD)a1, 266, 41, 13, 400, 4); /*0x2d62cc*/
    GameStatsManager_addStoreItem((_DWORD)a1, 267, 42, 13, 500, 4); /*0x2d62f5*/
    GameStatsManager_addStoreItem((_DWORD)a1, 268, 463, 1, 400, 4); /*0x2d631e*/
    GameStatsManager_addStoreItem((_DWORD)a1, 269, 464, 1, 500, 4); /*0x2d6347*/
    GameStatsManager_addStoreItem((_DWORD)a1, 270, 185, 1, 6000, 3); /*0x2d6370*/
    GameStatsManager_addStoreItem((_DWORD)a1, 271, 190, 1, 5000, 3); /*0x2d6399*/
    GameStatsManager_addStoreItem((_DWORD)a1, 272, 65, 5, 5000, 3); /*0x2d63c2*/
    GameStatsManager_addStoreItem((_DWORD)a1, 273, 54, 5, 5000, 3); /*0x2d63eb*/
    GameStatsManager_addStoreItem((_DWORD)a1, 274, 95, 6, 7000, 3); /*0x2d6414*/
    GameStatsManager_addStoreItem((_DWORD)a1, 275, 141, 6, 500, 4); /*0x2d643d*/
    GameStatsManager_addStoreItem((_DWORD)a1, 276, 22, 9, 400, 4); /*0x2d6466*/
    GameStatsManager_addStoreItem((_DWORD)a1, 277, 290, 1, 400, 4); /*0x2d648f*/
    GameStatsManager_addStoreItem((_DWORD)a1, 278, 360, 1, 6000, 3); /*0x2d64b8*/
    GameStatsManager_addStoreItem((_DWORD)a1, 279, 80, 4, 6000, 3); /*0x2d64e1*/
    GameStatsManager_addStoreItem((_DWORD)a1, 280, 87, 4, 400, 4); /*0x2d650a*/
    GameStatsManager_addStoreItem((_DWORD)a1, 281, 456, 1, 400, 4); /*0x2d6533*/
    GameStatsManager_addStoreItem((_DWORD)a1, 282, 480, 1, 5000, 3); /*0x2d655c*/
    GameStatsManager_addStoreItem((_DWORD)a1, 283, 132, 6, 6000, 3); /*0x2d6585*/
    GameStatsManager_addStoreItem((_DWORD)a1, 284, 478, 1, 400, 4); /*0x2d65ae*/
    GameStatsManager_addStoreItem((_DWORD)a1, 285, 474, 1, 300, 4); /*0x2d65d7*/
  }
}

// [9/47] Address: 0x2d65f0
// Method: GameStatsManager::addStoreItem
// Hidden C++ exception states: #wind=2
double __fastcall GameStatsManager_addStoreItem(__int64 a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  __int64 v8; // rbp
  cocos2d::CCNode *v10; // rdi
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  __int64 v15; // rcx
  _BYTE v17[32]; // [rsp+28h] [rbp-80h] BYREF

  v8 = a2; /*0x2d661c*/
  v10 = (cocos2d::CCNode *)operator new(0x178u); /*0x2d662c*/
  cocos2d::CCNode::CCNode(v10); /*0x2d6637*/
  *(_QWORD *)v10 = &GJStoreItem::`vftable'; /*0x2d6644*/
  *((_QWORD *)v10 + 40) = 0; /*0x2d6649*/
  *((_QWORD *)v10 + 41) = 0; /*0x2d6650*/
  *((_QWORD *)v10 + 42) = 0; /*0x2d6657*/
  *((_QWORD *)v10 + 43) = 0; /*0x2d665e*/
  *((_QWORD *)v10 + 44) = 0; /*0x2d6665*/
  *((_QWORD *)v10 + 45) = 0; /*0x2d666c*/
  *((_DWORD *)v10 + 92) = 0; /*0x2d6673*/
  if ( cocos2d::CCNode::init(v10) ) /*0x2d667c*/
  {
    *((_DWORD *)v10 + 82) = v8; /*0x2d668a*/
    v11 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2d66b1*/
    *((_DWORD *)v10 + 81) = (int)v11; /*0x2d66b9*/
    *((_DWORD *)v10 + 80) = v8 + (int)v11; /*0x2d66c1*/
    *((_DWORD *)v10 + 85) = a3; /*0x2d66c7*/
    v12 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2d66df*/
    *((_DWORD *)v10 + 84) = (int)v12; /*0x2d66e7*/
    *((_DWORD *)v10 + 83) = a3 + (int)v12; /*0x2d66f0*/
    *((_DWORD *)v10 + 88) = a4; /*0x2d66f6*/
    v13 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2d670e*/
    *((_DWORD *)v10 + 87) = (int)v13; /*0x2d6716*/
    *((_DWORD *)v10 + 86) = a4 + (int)v13; /*0x2d671f*/
    *((_DWORD *)v10 + 91) = a5; /*0x2d672c*/
    v14 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2d6743*/
    *((_DWORD *)v10 + 90) = (int)v14; /*0x2d674b*/
    *((_DWORD *)v10 + 89) = a5 + (int)v14; /*0x2d6753*/
    *((_DWORD *)v10 + 92) = a6; /*0x2d6760*/
    cocos2d::CCObject::autorelease(v10); /*0x2d6769*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x2d677c*/
    v10 = 0; /*0x2d677f*/
  }
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 520), v10); /*0x2d678c*/
  GameStatsManager_getRewardKey(v15, v17, a3, a4); /*0x2d679d*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 336), v10, v17); /*0x2d67b2*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 344), v10, v8); /*0x2d67c5*/
  return sub_3C310(v17); /*0x2d67d6*/
}

// [10/47] Address: 0x2d6b20
// Method: GameStatsManager::incrementStat
// Hidden C++ exception states: #wind=2
void __fastcall GameStatsManager_incrementStat(__int64 a1, const char *a2, unsigned int a3)
{
  int v6; // ebp
  int Stat; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  void *v14; // [rsp+20h] [rbp-48h]
  _BYTE v15[32]; // [rsp+28h] [rbp-40h] BYREF

  v6 = 268435808; /*0x2d6b44*/
  while ( 1 ) /*0x2d6b50*/
  {
    if ( a3 ) /*0x2d6b58*/
    {
      Stat = GameStatsManager_getStat(a1, a2); /*0x2d6b5a*/
      sub_2D7950(a1, a2, a3 + Stat); /*0x2d6b69*/
    }
    else
    {
      sub_2D7AD0(a1, a2); /*0x2d6b70*/
    }
    v8 = atoi(a2); /*0x2d6b78*/
    v9 = v8; /*0x2d6b7e*/
    if ( v8 <= 0x1C && _bittest(&v6, v8) ) /*0x2d6b85*/
    {
      v10 = qword_905FD0; /*0x2d6b8a*/
      if ( !qword_905FD0 ) /*0x2d6b94*/
      {
        v14 = operator new(0x6E8u); /*0x2d6ba0*/
        qword_905FD0 = sub_2723A0(v14); /*0x2d6bae*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2d6bbf*/
        v10 = qword_905FD0; /*0x2d6bc1*/
      }
      *(_BYTE *)(v10 + 688) = 0; /*0x2d6bc8*/
    }
    if ( !*(_BYTE *)(a1 + 912) ) /*0x2d6bcf*/
      break; /*0x2d6bcf*/
LABEL_24:
    if ( v9 != 13 ) /*0x2d6c60*/
      return; /*0x2d6c60*/
    a2 = (const char *)&word_755560; /*0x2d6c62*/
  }
  switch ( v9 ) /*0x2d6bdf*/
  {
    case 6u: /*0x2d6bdf*/
      goto LABEL_15; /*0x2d6bdf*/
    case 0xCu: /*0x2d6bdf*/
      v11 = 2; /*0x2d6c75*/
      break;
    case 0xEu: /*0x2d6bdf*/
      v11 = 1; /*0x2d6c6e*/
      break;
    case 0x1Cu: /*0x2d6bdf*/
LABEL_15:
      v11 = 3; /*0x2d6bf4*/
      break; /*0x2d6bf4*/
    default:
      goto LABEL_24; /*0x2d6bf2*/
  }
  sub_2E21A0(a1, v11, a3); /*0x2d6bf9*/
  if ( v9 != 14 ) /*0x2d6c07*/
  {
    if ( v9 == 6 || v9 == 28 ) /*0x2d6c11*/
    {
      sub_2D6CB0(a1); /*0x2d6c16*/
      v12 = *(unsigned int *)(a1 + 996); /*0x2d6c1b*/
      if ( (int)v12 >= 30 && (int)v12 <= 39 ) /*0x2d6c2d*/
      {
        v13 = (_QWORD *)GameToolbox_intToString(v15, v12); /*0x2d6c34*/
        if ( v13[3] > 0xFu ) /*0x2d6c3f*/
          v13 = (_QWORD *)*v13; /*0x2d6c41*/
        GameStatsManager_incrementStat(a1, v13, a3); /*0x2d6c4d*/
        sub_3C310(v15); /*0x2d6c58*/
      }
    }
    goto LABEL_24; /*0x2d6c58*/
  }
  GameStatsManager_incrementStat(a1, "22", a3); /*0x2d6c8c*/
}

// [11/47] Address: 0x2d7820
// Method: GameStatsManager::getStat
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameStatsManager_getStat(__int64 a1, const char *a2)
{
  __int64 v3; // r8
  cocos2d::CCString *v4; // rax
  unsigned int v5; // ebx
  void *v6; // r8
  int v8; // ebx
  int v9; // [rsp+30h] [rbp-38h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 320) ) /*0x2d783c*/
  {
    *(_OWORD *)Block = 0; /*0x2d784c*/
    v11 = 0; /*0x2d7854*/
    v3 = -1; /*0x2d785a*/
    do /*0x2d7864*/
      ++v3; /*0x2d7861*/
    while ( a2[v3] ); /*0x2d7864*/
    sub_3C230(Block); /*0x2d7870*/
    v4 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(a1 + 576), Block); /*0x2d7882*/
    v5 = cocos2d::CCString::intValue(v4); /*0x2d7891*/
    if ( *((_QWORD *)&v11 + 1) > 0xFu ) /*0x2d789c*/
    {
      v6 = Block[0]; /*0x2d78a1*/
      if ( (unsigned __int64)(*((_QWORD *)&v11 + 1) + 1LL) >= 0x1000 ) /*0x2d78b0*/
      {
        v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x2d78b6*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x2d78c5*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2d78da*/
      }
      j_j_free(v6); /*0x2d78e4*/
    }
    return v5; /*0x2d78e9*/
  }
  else
  {
    v9 = atoi(a2); /*0x2d78f6*/
    v8 = *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 648, Block, &v9) + 20LL); /*0x2d7913*/
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 584, Block, &v9) + 20LL) - v8); /*0x2d7932*/
  }
}

// [12/47] Address: 0x2dde60
// Method: GameStatsManager::hasCompletedStarLevel
// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall GameStatsManager_hasCompletedStarLevel(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  bool v4; // r9
  bool v5; // bl
  _BYTE v7[32]; // [rsp+48h] [rbp-30h] BYREF

  v2 = a1; /*0x2dde75*/
  v3 = *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996); /*0x2dde7e*/
  v4 = *(_DWORD *)(a2 + 1220) != 1 && v3 <= 0; /*0x2dde9b*/
  LOBYTE(a1) = *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996) > 0; /*0x2dde86*/
  sub_2DDBF0( /*0x2ddecc*/
    a1,
    (unsigned int)v7,
    *(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332),
    v4,
    a1,
    *(_BYTE *)(a2 + 721),
    v3 > 200000);
  v5 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v2 + 712), v7) != 0; /*0x2ddee7*/
  sub_3C310(v7); /*0x2ddeef*/
  return v5; /*0x2ddef7*/
}

// [13/47] Address: 0x2de2c0
// Method: GameStatsManager::completedLevel
// Hidden C++ exception states: #wind=1
double __fastcall GameStatsManager_completedLevel(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  bool v5; // r9
  const char *v6; // rdx
  _BYTE v8[32]; // [rsp+48h] [rbp-30h] BYREF

  v3 = a1; /*0x2de2dc*/
  v4 = *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996); /*0x2de2e5*/
  v5 = *(_DWORD *)(a2 + 1220) != 1 && v4 <= 0; /*0x2de302*/
  LOBYTE(a1) = *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996) > 0; /*0x2de2ed*/
  sub_2DDBF0( /*0x2de333*/
    a1,
    (unsigned int)v8,
    *(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332),
    v5,
    a1,
    *(_BYTE *)(a2 + 721),
    v4 > 200000);
  if ( !GameStatsManager_hasCompletedStarLevel(v3, a2) ) /*0x2de33f*/
  {
    cocos2d::CCDictionary::setObject(*(_QWORD *)(v3 + 712), *(_QWORD *)(v3 + 328), v8); /*0x2de35b*/
    if ( (unsigned int)(*(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996) - 1) > 0x1869F ) /*0x2de374*/
    {
      v6 = (const char *)&word_70803C; /*0x2de386*/
      if ( *(_DWORD *)(a2 + 1220) == 1 ) /*0x2de38d*/
        v6 = (const char *)&word_708044; /*0x2de38f*/
    }
    else
    {
      v6 = "15"; /*0x2de376*/
    }
    GameStatsManager_incrementStat(v3, v6, 1u); /*0x2de39f*/
  }
  if ( *(_DWORD *)(a2 + 1004) - *(_DWORD *)(a2 + 1008) == 1 ) /*0x2de3b3*/
    sub_2DE410(v3, a2); /*0x2de3bb*/
  if ( *(_DWORD *)(a2 + 1020) - *(_DWORD *)(a2 + 1024) > 0 ) /*0x2de3ce*/
    GameStatsManager_completedStarLevel(v3, a2); /*0x2de3d6*/
  return sub_3C310(v8); /*0x2de3e6*/
}

// [14/47] Address: 0x2de6a0
// Method: GameStatsManager::completedStarLevel
// Hidden C++ exception states: #wind=1
void __fastcall GameStatsManager_completedStarLevel(__int64 a1, __int64 a2)
{
  cocos2d::CCString *v4; // rax
  const char *v5; // rcx
  const char *CString; // rax
  __int64 v7; // r8
  void *v8; // rcx
  signed int v9; // r8d
  const char *v10; // rdx
  int v11; // eax
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]

  if ( !(unsigned __int8)sub_2DE190() && *(_DWORD *)(a2 + 1020) - *(_DWORD *)(a2 + 1024) > 0 ) /*0x2de6da*/
  {
    if ( *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996) <= 0 ) /*0x2de6f1*/
    {
      v5 = "gstar_%i"; /*0x2de71c*/
      if ( !*(_BYTE *)(a2 + 721) ) /*0x2de715*/
        v5 = "star_%i"; /*0x2de725*/
      v4 = cocos2d::CCString::createWithFormat(v5, (unsigned int)(*(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332))); /*0x2de72c*/
    }
    else
    {
      v4 = cocos2d::CCString::createWithFormat("%s%i", "dstar_", *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996)); /*0x2de701*/
    }
    CString = cocos2d::CCString::getCString(v4); /*0x2de735*/
    *(_OWORD *)Block = 0; /*0x2de73e*/
    v13 = 0; /*0x2de746*/
    v7 = -1; /*0x2de74c*/
    do /*0x2de756*/
      ++v7; /*0x2de753*/
    while ( CString[v7] ); /*0x2de756*/
    sub_3C230(Block); /*0x2de765*/
    cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 712), *(_QWORD *)(a1 + 328), Block); /*0x2de77e*/
    if ( *((_QWORD *)&v13 + 1) > 0xFu ) /*0x2de78e*/
    {
      v8 = Block[0]; /*0x2de793*/
      if ( (unsigned __int64)(*((_QWORD *)&v13 + 1) + 1LL) >= 0x1000 ) /*0x2de7a2*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x2de7a8*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x2de7b7*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2de7ca*/
      }
      j_j_free(v8); /*0x2de7d1*/
    }
    v9 = *(_DWORD *)(a2 + 1020) - *(_DWORD *)(a2 + 1024); /*0x2de7dd*/
    if ( v9 > 10 && *(_DWORD *)(a2 + 1220) != 1 ) /*0x2de7f3*/
      v9 = 0; /*0x2de7f3*/
    v10 = "6"; /*0x2de7fe*/
    if ( *(_DWORD *)(a2 + 972) == 5 ) /*0x2de80c*/
      v10 = "28"; /*0x2de80c*/
    GameStatsManager_incrementStat(a1, v10, v9); /*0x2de813*/
    v11 = *(_DWORD *)(a2 + 1020) - *(_DWORD *)(a2 + 1024); /*0x2de81e*/
    if ( v11 == 8 || v11 == 9 ) /*0x2de82c*/
      GameStatsManager_incrementStat(a1, "42", 1u); /*0x2de83e*/
  }
}

// [15/47] Address: 0x2df030
// Method: GameStatsManager::setStarsForMapPack
// Hidden C++ exception states: #wind=1
void __fastcall GameStatsManager_setStarsForMapPack(__int64 a1, int a2, unsigned int a3)
{
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  struct cocos2d::CCString *v9; // rax
  void *v10; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]

  v5 = cocos2d::CCString::createWithFormat("pack_%i", a2); /*0x2df056*/
  CString = cocos2d::CCString::getCString(v5); /*0x2df05f*/
  *(_OWORD *)Block = 0; /*0x2df068*/
  v12 = 0; /*0x2df070*/
  v7 = -1; /*0x2df076*/
  do /*0x2df083*/
    ++v7; /*0x2df080*/
  while ( CString[v7] ); /*0x2df083*/
  sub_3C230(Block); /*0x2df092*/
  v8 = *(_QWORD *)(a1 + 824); /*0x2df098*/
  v9 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a3); /*0x2df0a8*/
  cocos2d::CCDictionary::setObject(v8, v9, Block); /*0x2df0b9*/
  if ( *((_QWORD *)&v12 + 1) > 0xFu ) /*0x2df0c9*/
  {
    v10 = Block[0]; /*0x2df0ce*/
    if ( (unsigned __int64)(*((_QWORD *)&v12 + 1) + 1LL) >= 0x1000 ) /*0x2df0dd*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x2df0e3*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x2df0f2*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2df107*/
    }
    j_j_free(v10); /*0x2df10e*/
  }
}

// [16/47] Address: 0x2df130
// Method: GameStatsManager::getCompletedMapPacks
// Hidden C++ exception states: #wind=2
cocos2d::CCArray *__fastcall GameStatsManager_getCompletedMapPacks(__int64 a1)
{
  cocos2d::CCArray *v1; // r15
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // r12
  unsigned int i; // ebp
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  cocos2d::CCArray *v8; // rsi
  cocos2d::CCString *v9; // rax
  const char *v10; // rax
  __int64 v11; // r8
  void **v12; // rcx
  char *v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  size_t v16; // r8
  struct cocos2d::CCObject *v17; // rax
  char *v18; // rax
  void *v19; // rcx
  __int128 Buf2; // [rsp+30h] [rbp-98h] BYREF
  __int64 v22; // [rsp+40h] [rbp-88h]
  __int64 v23; // [rsp+48h] [rbp-80h]
  void *Buf1[2]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-68h]
  unsigned __int64 v26; // [rsp+68h] [rbp-60h]
  __int128 v27; // [rsp+70h] [rbp-58h] BYREF
  __int128 v28; // [rsp+80h] [rbp-48h]

  v1 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 712)); /*0x2df16e*/
  v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x2df177*/
  for ( i = 0; i < cocos2d::CCArray::count(v1); ++i ) /*0x2df183*/
  {
    v5 = cocos2d::CCArray::stringAtIndex(v1, i); /*0x2df1a5*/
    CString = cocos2d::CCString::getCString(v5); /*0x2df1ae*/
    v27 = 0; /*0x2df1b7*/
    v28 = 0; /*0x2df1bf*/
    v7 = -1; /*0x2df1c8*/
    do /*0x2df1d3*/
      ++v7; /*0x2df1d0*/
    while ( CString[v7] ); /*0x2df1d3*/
    sub_3C230(&v27); /*0x2df1e2*/
    v8 = (cocos2d::CCArray *)sub_D09B0(&v27, &unk_70F154); /*0x2df1f9*/
    if ( cocos2d::CCArray::count(v8) == 2 ) /*0x2df208*/
    {
      v9 = cocos2d::CCArray::stringAtIndex(v8, 0); /*0x2df213*/
      v10 = cocos2d::CCString::getCString(v9); /*0x2df21c*/
      *(_OWORD *)Buf1 = 0; /*0x2df225*/
      v25 = 0; /*0x2df22a*/
      v26 = 0; /*0x2df22f*/
      v11 = -1; /*0x2df234*/
      do /*0x2df243*/
        ++v11; /*0x2df240*/
      while ( v10[v11] ); /*0x2df243*/
      sub_3C230(Buf1); /*0x2df252*/
      Buf2 = 0; /*0x2df25b*/
      v22 = 4; /*0x2df260*/
      v23 = 15; /*0x2df265*/
      strcpy((char *)&Buf2, "pack"); /*0x2df26e*/
      v12 = Buf1; /*0x2df27b*/
      v13 = (char *)Buf1[0]; /*0x2df280*/
      v14 = v26; /*0x2df285*/
      if ( v26 > 0xF ) /*0x2df28e*/
        v12 = (void **)Buf1[0]; /*0x2df28e*/
      v15 = v25; /*0x2df292*/
      v16 = v25; /*0x2df297*/
      if ( v25 > 4 ) /*0x2df2a3*/
        v16 = 4; /*0x2df2a3*/
      if ( !memcmp(v12, &Buf2, v16) && v15 == 4 ) /*0x2df2b9*/
      {
        v17 = cocos2d::CCArray::objectAtIndex(v8, 1u); /*0x2df2c3*/
        cocos2d::CCArray::addObject(v3, v17); /*0x2df2cf*/
      }
      if ( v14 > 0xF ) /*0x2df2da*/
      {
        v18 = v13; /*0x2df2e0*/
        if ( v14 + 1 >= 0x1000 ) /*0x2df2ea*/
        {
          v13 = (char *)*((_QWORD *)v13 - 1); /*0x2df2f0*/
          if ( (unsigned __int64)(v18 - v13 - 8) > 0x1F ) /*0x2df2ff*/
            invoke_watson(0, 0, 0, 0, 0); /*0x2df3a4*/
        }
        j_j_free(v13); /*0x2df308*/
      }
    }
    if ( *((_QWORD *)&v28 + 1) > 0xFu ) /*0x2df31e*/
    {
      v19 = (void *)v27; /*0x2df323*/
      if ( (unsigned __int64)(*((_QWORD *)&v28 + 1) + 1LL) >= 0x1000 ) /*0x2df332*/
      {
        v19 = *(void **)(v27 - 8); /*0x2df338*/
        if ( (unsigned __int64)(v27 - (_QWORD)v19 - 8) > 0x1F ) /*0x2df347*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2df3ba*/
      }
      j_j_free(v19); /*0x2df349*/
    }
  }
  return v3; /*0x2df364*/
}

// [17/47] Address: 0x2df3d0
// Method: GameStatsManager::recountUserCoins
// Hidden C++ exception states: #wind=14
int __fastcall GameStatsManager_recountUserCoins(__int64 a1, char a2)
{
  int Stat; // ebx
  __int64 v5; // rax
  int v6; // esi
  int i; // ebx
  cocos2d::CCString *v8; // rax
  const char *CString; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // bl
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int128 v29; // [rsp+20h] [rbp-60h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h]
  __int64 v31; // [rsp+38h] [rbp-48h]
  __int128 v32; // [rsp+40h] [rbp-40h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h]
  __int64 v34; // [rsp+58h] [rbp-28h]
  __int128 v35; // [rsp+60h] [rbp-20h] BYREF
  __int64 v36; // [rsp+70h] [rbp-10h]
  __int64 v37; // [rsp+78h] [rbp-8h]
  void *v38; // [rsp+A0h] [rbp+20h]
  void *v39; // [rsp+B0h] [rbp+30h]
  void *v40; // [rsp+B0h] [rbp+30h]
  void *v41; // [rsp+B0h] [rbp+30h]
  void *v42; // [rsp+B0h] [rbp+30h]
  void *v43; // [rsp+B0h] [rbp+30h]
  void *v44; // [rsp+B0h] [rbp+30h]
  void *v45; // [rsp+B0h] [rbp+30h]
  void *v46; // [rsp+B0h] [rbp+30h]
  void *v47; // [rsp+B0h] [rbp+30h]
  void *v48; // [rsp+B0h] [rbp+30h]
  void *v49; // [rsp+B0h] [rbp+30h]
  void *v50; // [rsp+B0h] [rbp+30h]

  Stat = GameStatsManager_getStat(a1, (const char *)&word_7231BC); /*0x2df3fa*/
  LODWORD(v5) = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(a1 + 720)); /*0x2df403*/
  v6 = v5; /*0x2df409*/
  if ( Stat > (int)v5 || a2 ) /*0x2df412*/
  {
    for ( i = 1; i <= 21; ++i ) /*0x2df418*/
    {
      v8 = cocos2d::CCString::createWithFormat("geometry.ach.usercoins%02d", i); /*0x2df429*/
      CString = cocos2d::CCString::getCString(v8); /*0x2df432*/
      v35 = 0; /*0x2df443*/
      v36 = 0; /*0x2df447*/
      v37 = 0; /*0x2df44b*/
      v10 = -1; /*0x2df44f*/
      do /*0x2df459*/
        ++v10; /*0x2df456*/
      while ( CString[v10] ); /*0x2df459*/
      sub_3C230(&v35); /*0x2df467*/
      v11 = qword_905FD0; /*0x2df46d*/
      if ( !qword_905FD0 ) /*0x2df477*/
      {
        v39 = operator new(0x6E8u); /*0x2df483*/
        qword_905FD0 = sub_2723A0(v39); /*0x2df490*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df4a1*/
        v11 = qword_905FD0; /*0x2df4a3*/
      }
      sub_274C90(v11, &v35); /*0x2df4ae*/
    }
    if ( v6 < 10 ) /*0x2df4c1*/
    {
      v29 = 0; /*0x2df4d2*/
      *(_QWORD *)&v29 = sub_3C460(32); /*0x2df4e8*/
      v30 = 21; /*0x2df4ec*/
      v31 = 31; /*0x2df4f4*/
      strcpy((char *)v29, "geometry.ach.secret05"); /*0x2df503*/
      v12 = qword_905FD0; /*0x2df51d*/
      if ( !qword_905FD0 ) /*0x2df527*/
      {
        v40 = operator new(0x6E8u); /*0x2df533*/
        qword_905FD0 = sub_2723A0(v40); /*0x2df540*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df551*/
        v12 = qword_905FD0; /*0x2df553*/
      }
      sub_274C90(v12, &v29); /*0x2df55e*/
      v32 = 0; /*0x2df56e*/
      v33 = 0; /*0x2df572*/
      v34 = 0; /*0x2df576*/
      *(_QWORD *)&v32 = sub_3C460(32); /*0x2df584*/
      v33 = 21; /*0x2df588*/
      v34 = 31; /*0x2df590*/
      strcpy((char *)v32, "geometry.ach.secret06"); /*0x2df59f*/
      v13 = qword_905FD0; /*0x2df5b9*/
      if ( !qword_905FD0 ) /*0x2df5c3*/
      {
        v41 = operator new(0x6E8u); /*0x2df5cf*/
        qword_905FD0 = sub_2723A0(v41); /*0x2df5dc*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df5ed*/
        v13 = qword_905FD0; /*0x2df5ef*/
      }
      sub_274C90(v13, &v32); /*0x2df5fa*/
      v29 = 0; /*0x2df60a*/
      v30 = 0; /*0x2df60e*/
      v31 = 0; /*0x2df612*/
      *(_QWORD *)&v29 = sub_3C460(32); /*0x2df620*/
      v30 = 21; /*0x2df624*/
      v31 = 31; /*0x2df62c*/
      strcpy((char *)v29, "geometry.ach.secret07"); /*0x2df63b*/
      v14 = qword_905FD0; /*0x2df655*/
      if ( !qword_905FD0 ) /*0x2df65f*/
      {
        v42 = operator new(0x6E8u); /*0x2df66b*/
        qword_905FD0 = sub_2723A0(v42); /*0x2df678*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df689*/
        v14 = qword_905FD0; /*0x2df68b*/
      }
      sub_274C90(v14, &v29); /*0x2df696*/
      v32 = 0; /*0x2df6a6*/
      v33 = 0; /*0x2df6aa*/
      v34 = 0; /*0x2df6ae*/
      *(_QWORD *)&v32 = sub_3C460(32); /*0x2df6bc*/
      v33 = 21; /*0x2df6c0*/
      v34 = 31; /*0x2df6c8*/
      strcpy((char *)v32, "geometry.ach.secret08"); /*0x2df6d7*/
      v15 = qword_905FD0; /*0x2df6f1*/
      if ( !qword_905FD0 ) /*0x2df6fb*/
      {
        v43 = operator new(0x6E8u); /*0x2df707*/
        qword_905FD0 = sub_2723A0(v43); /*0x2df714*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df725*/
        v15 = qword_905FD0; /*0x2df727*/
      }
      sub_274C90(v15, &v32); /*0x2df732*/
      v29 = 0; /*0x2df742*/
      v30 = 0; /*0x2df746*/
      v31 = 0; /*0x2df74a*/
      *(_QWORD *)&v29 = sub_3C460(32); /*0x2df758*/
      v30 = 21; /*0x2df75c*/
      v31 = 31; /*0x2df764*/
      strcpy((char *)v29, "geometry.ach.secret09"); /*0x2df773*/
      v16 = qword_905FD0; /*0x2df78d*/
      if ( !qword_905FD0 ) /*0x2df797*/
      {
        v44 = operator new(0x6E8u); /*0x2df7a3*/
        qword_905FD0 = sub_2723A0(v44); /*0x2df7b0*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df7c1*/
        v16 = qword_905FD0; /*0x2df7c3*/
      }
      sub_274C90(v16, &v29); /*0x2df7ce*/
      v32 = 0; /*0x2df7de*/
      v33 = 0; /*0x2df7e2*/
      v34 = 0; /*0x2df7e6*/
      *(_QWORD *)&v32 = sub_3C460(32); /*0x2df7f4*/
      v33 = 21; /*0x2df7f8*/
      v34 = 31; /*0x2df800*/
      strcpy((char *)v32, "geometry.ach.secret10"); /*0x2df80f*/
      v17 = qword_905FD0; /*0x2df829*/
      if ( !qword_905FD0 ) /*0x2df833*/
      {
        v45 = operator new(0x6E8u); /*0x2df83f*/
        qword_905FD0 = sub_2723A0(v45); /*0x2df84c*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df85d*/
        v17 = qword_905FD0; /*0x2df85f*/
      }
      sub_274C90(v17, &v32); /*0x2df86a*/
      v29 = 0; /*0x2df87a*/
      v30 = 0; /*0x2df87e*/
      v31 = 0; /*0x2df882*/
      *(_QWORD *)&v29 = sub_3C460(32); /*0x2df890*/
      v30 = 21; /*0x2df894*/
      v31 = 31; /*0x2df89c*/
      strcpy((char *)v29, "geometry.ach.secret13"); /*0x2df8ab*/
      v18 = qword_905FD0; /*0x2df8c5*/
      if ( !qword_905FD0 ) /*0x2df8cf*/
      {
        v46 = operator new(0x6E8u); /*0x2df8db*/
        qword_905FD0 = sub_2723A0(v46); /*0x2df8e8*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df8f9*/
        v18 = qword_905FD0; /*0x2df8fb*/
      }
      sub_274C90(v18, &v29); /*0x2df906*/
      v32 = 0; /*0x2df916*/
      v33 = 0; /*0x2df91a*/
      v34 = 0; /*0x2df91e*/
      *(_QWORD *)&v32 = sub_3C460(32); /*0x2df92c*/
      v33 = 21; /*0x2df930*/
      v34 = 31; /*0x2df938*/
      strcpy((char *)v32, "geometry.ach.secret14"); /*0x2df947*/
      v19 = qword_905FD0; /*0x2df961*/
      if ( !qword_905FD0 ) /*0x2df96b*/
      {
        v47 = operator new(0x6E8u); /*0x2df977*/
        qword_905FD0 = sub_2723A0(v47); /*0x2df984*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2df995*/
        v19 = qword_905FD0; /*0x2df997*/
      }
      sub_274C90(v19, &v32); /*0x2df9a2*/
      v29 = 0; /*0x2df9b2*/
      v30 = 0; /*0x2df9b6*/
      v31 = 0; /*0x2df9ba*/
      *(_QWORD *)&v29 = sub_3C460(32); /*0x2df9c8*/
      v30 = 21; /*0x2df9cc*/
      v31 = 31; /*0x2df9d4*/
      strcpy((char *)v29, "geometry.ach.secret15"); /*0x2df9e3*/
      v20 = qword_905FD0; /*0x2df9fd*/
      if ( !qword_905FD0 ) /*0x2dfa07*/
      {
        v48 = operator new(0x6E8u); /*0x2dfa13*/
        qword_905FD0 = sub_2723A0(v48); /*0x2dfa20*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2dfa31*/
        v20 = qword_905FD0; /*0x2dfa33*/
      }
      sub_274C90(v20, &v29); /*0x2dfa3e*/
      v32 = 0; /*0x2dfa4e*/
      v33 = 0; /*0x2dfa52*/
      v34 = 0; /*0x2dfa56*/
      *(_QWORD *)&v32 = sub_3C460(32); /*0x2dfa64*/
      v33 = 21; /*0x2dfa68*/
      v34 = 31; /*0x2dfa70*/
      strcpy((char *)v32, "geometry.ach.secret16"); /*0x2dfa7f*/
      v21 = qword_905FD0; /*0x2dfa99*/
      if ( !qword_905FD0 ) /*0x2dfaa3*/
      {
        v49 = operator new(0x6E8u); /*0x2dfaaf*/
        qword_905FD0 = sub_2723A0(v49); /*0x2dfabc*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2dfacd*/
        v21 = qword_905FD0; /*0x2dfacf*/
      }
      sub_274C90(v21, &v32); /*0x2dfada*/
      v29 = 0; /*0x2dfaea*/
      v30 = 0; /*0x2dfaee*/
      v31 = 0; /*0x2dfaf2*/
      *(_QWORD *)&v29 = sub_3C460(32); /*0x2dfb00*/
      v30 = 21; /*0x2dfb04*/
      v31 = 31; /*0x2dfb0c*/
      strcpy((char *)v29, "geometry.ach.secret17"); /*0x2dfb1b*/
      v22 = qword_905FD0; /*0x2dfb35*/
      if ( !qword_905FD0 ) /*0x2dfb3f*/
      {
        v50 = operator new(0x6E8u); /*0x2dfb4b*/
        qword_905FD0 = sub_2723A0(v50); /*0x2dfb58*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2dfb69*/
        v22 = qword_905FD0; /*0x2dfb6b*/
      }
      sub_274C90(v22, &v29); /*0x2dfb76*/
    }
    v23 = qword_905FD0; /*0x2dfb7b*/
    if ( !qword_905FD0 ) /*0x2dfb85*/
    {
      v38 = operator new(0x6E8u); /*0x2dfb91*/
      qword_905FD0 = sub_2723A0(v38); /*0x2dfb9e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2dfbaf*/
      v23 = qword_905FD0; /*0x2dfbb2*/
    }
    GameManager_checkUsedIcons(v23); /*0x2dfbb9*/
    v25 = *(_BYTE *)(AchievementManager_sharedState(v24) + 360); /*0x2dfbc3*/
    *(_BYTE *)(AchievementManager_sharedState(v26) + 360) = 1; /*0x2dfbcf*/
    sub_2D7950(a1, &word_7231BC, (unsigned int)v6); /*0x2dfbe3*/
    v5 = AchievementManager_sharedState(v27); /*0x2dfbe8*/
    *(_BYTE *)(v5 + 360) = v25; /*0x2dfbed*/
  }
  return v5; /*0x2dfbf3*/
}

// [18/47] Address: 0x2dfdc0
// Method: GameStatsManager::storeUserCoin
// Hidden C++ exception states: #wind=1
void __fastcall GameStatsManager_storeUserCoin(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  void *v4; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0x2dfddb*/
  v6 = 0; /*0x2dfde3*/
  v3 = -1; /*0x2dfde9*/
  do /*0x2dfdf3*/
    ++v3; /*0x2dfdf0*/
  while ( *(_BYTE *)(a2 + v3) ); /*0x2dfdf3*/
  sub_3C230(Block); /*0x2dfdff*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 720), *(_QWORD *)(a1 + 328), Block); /*0x2dfe18*/
  if ( *((_QWORD *)&v6 + 1) > 0xFu ) /*0x2dfe28*/
  {
    v4 = Block[0]; /*0x2dfe2d*/
    if ( (unsigned __int64)(*((_QWORD *)&v6 + 1) + 1LL) >= 0x1000 ) /*0x2dfe3c*/
    {
      v4 = (void *)*((_QWORD *)Block[0] - 1); /*0x2dfe42*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v4 - 8) > 0x1F ) /*0x2dfe51*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2dfe66*/
    }
    j_j_free(v4); /*0x2dfe6d*/
  }
}

// [19/47] Address: 0x2e0040
// Method: GameStatsManager::storeSecretCoin
// Hidden C++ exception states: #wind=1
void __fastcall GameStatsManager_storeSecretCoin(__int64 a1, const char *a2)
{
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // r8
  void *v6; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]

  v3 = cocos2d::CCString::createWithFormat("unique_%s", a2); /*0x2e005f*/
  CString = cocos2d::CCString::getCString(v3); /*0x2e0068*/
  *(_OWORD *)Block = 0; /*0x2e0071*/
  v8 = 0; /*0x2e0079*/
  v5 = -1; /*0x2e007f*/
  do /*0x2e0089*/
    ++v5; /*0x2e0086*/
  while ( CString[v5] ); /*0x2e0089*/
  sub_3C230(Block); /*0x2e0098*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 576), *(_QWORD *)(a1 + 328), Block); /*0x2e00b1*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x2e00c1*/
  {
    v6 = Block[0]; /*0x2e00c6*/
    if ( (unsigned __int64)(*((_QWORD *)&v8 + 1) + 1LL) >= 0x1000 ) /*0x2e00d5*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e00db*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x2e00ea*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2e00ff*/
    }
    j_j_free(v6); /*0x2e0106*/
  }
}

// [20/47] Address: 0x2e1950
// Method: GameStatsManager::storeRewardState
// Hidden C++ exception states: #wind=1
double __fastcall GameStatsManager_storeRewardState(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v7; // rbp
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v13[32]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  struct __timeb64 Time; // [rsp+48h] [rbp-50h] BYREF

  v7 = a2; /*0x2e1972*/
  v14 = a5; /*0x2e1980*/
  v9 = 0; /*0x2e1985*/
  if ( a4 > 0 ) /*0x2e198a*/
  {
    ftime64(&Time); /*0x2e1991*/
    v9 = a4 + (int)((double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time)); /*0x2e19be*/
  }
  v10 = sub_3E4F0(v13, a5); /*0x2e19c8*/
  v11 = GJRewardItem_create_0(a3, v9, v10); /*0x2e19d5*/
  *(_BYTE *)(v11 + 80) = 1; /*0x2e19da*/
  *(_DWORD *)(v11 + 64) = v7; /*0x2e19de*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 528), (struct cocos2d::CCObject *)v11, v7); /*0x2e19ee*/
  return sub_3C310(a5); /*0x2e19fd*/
}

// [21/47] Address: 0x2e1a20
// Method: GameStatsManager::getRewardKey
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameStatsManager_getRewardKey(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD v10[2]; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v11[528]; // [rsp+40h] [rbp-238h] BYREF

  fmt::BasicWriter<char>::BasicWriter<char>(v11); /*0x2e1a56*/
  fmt::BasicWriter<char>::operator<<(v11, a3); /*0x2e1a64*/
  v10[0] = &unk_70F154; /*0x2e1a71*/
  v10[1] = 0; /*0x2e1a76*/
  fmt::BasicWriter<char>::operator<<(v11, v10); /*0x2e1a85*/
  fmt::BasicWriter<char>::operator<<(v11, a4); /*0x2e1a92*/
  v7 = fmt::BasicWriter<char>::c_str(v11); /*0x2e1a9d*/
  *(_OWORD *)a2 = 0; /*0x2e1aa6*/
  *(_QWORD *)(a2 + 16) = 0; /*0x2e1aa9*/
  *(_QWORD *)(a2 + 24) = 0; /*0x2e1aad*/
  v8 = -1; /*0x2e1ab1*/
  do /*0x2e1ac3*/
    ++v8; /*0x2e1ac0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x2e1ac3*/
  sub_3C230(a2); /*0x2e1ad0*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v11); /*0x2e1adb*/
  return a2; /*0x2e1ae4*/
}

// [22/47] Address: 0x2e1b10
// Method: GameStatsManager::hasRewardBeenCollected
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameStatsManager_hasRewardBeenCollected(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 RewardKey; // rax
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1; /*0x2e1b25*/
  RewardKey = GameStatsManager_getRewardKey(a1, (__int64)v6, a2, a3); /*0x2e1b33*/
  LOBYTE(v3) = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v3 + 536), RewardKey) != 0; /*0x2e1b4c*/
  sub_3C310(v6); /*0x2e1b54*/
  return (unsigned __int8)v3; /*0x2e1b5c*/
}

// [23/47] Address: 0x2e1b70
// Method: GameStatsManager::preProcessReward
// Hidden C++ exception states: #wind=3
void __fastcall GameStatsManager_preProcessReward(__int64 a1, __int64 a2)
{
  int v3; // r14d
  cocos2d::CCArray *v4; // rdi
  int v5; // r12d
  unsigned int v6; // ebx
  struct cocos2d::CCObject *v7; // rbp
  __int64 v8; // rax
  int Stat; // r15d
  __int64 v10; // rax
  int v11; // ecx
  cocos2d::CCArray *v12; // rcx
  cocos2d::CCObject *v13; // rax
  cocos2d::CCObject *v14; // rbx
  cocos2d::CCObject *v15; // rcx
  unsigned int v16; // ebx
  struct cocos2d::CCObject *v17; // rdi
  _BYTE v19[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v20[32]; // [rsp+50h] [rbp-68h] BYREF

  v3 = 0; /*0x2e1b9e*/
  v4 = *(cocos2d::CCArray **)(a2 + 72); /*0x2e1ba6*/
  if ( v4 ) /*0x2e1bad*/
  {
    v5 = 0; /*0x2e1bb3*/
    v6 = 0; /*0x2e1bb6*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a2 + 72)) ) /*0x2e1bbb*/
    {
      do /*0x2e1cb1*/
      {
        v7 = cocos2d::CCArray::objectAtIndex(v4, v6); /*0x2e1bdb*/
        switch ( *((_DWORD *)v7 + 14) ) /*0x2e1bfb*/
        {
          case 1: /*0x2e1bfb*/
          case 2: /*0x2e1bfb*/
          case 3: /*0x2e1bfb*/
          case 4: /*0x2e1bfb*/
          case 5: /*0x2e1bfb*/
          case 0xA: /*0x2e1bfb*/
          case 0xB: /*0x2e1bfb*/
          case 0xC: /*0x2e1bfb*/
          case 0xD: /*0x2e1bfb*/
          case 0xE: /*0x2e1bfb*/
            v8 = sub_2F5850(v20); /*0x2e1c03*/
            if ( *(_QWORD *)(v8 + 24) > 0xFu ) /*0x2e1c0e*/
              v8 = *(_QWORD *)v8; /*0x2e1c10*/
            if ( (int)GameStatsManager_getStat(a1, (const char *)v8) <= 100 ) /*0x2e1c21*/
            {
              v10 = sub_2F5850(v19); /*0x2e1c33*/
              v3 |= 1u; /*0x2e1c39*/
              if ( *(_QWORD *)(v10 + 24) > 0xFu ) /*0x2e1c47*/
                v10 = *(_QWORD *)v10; /*0x2e1c49*/
              Stat = GameStatsManager_getStat(a1, (const char *)v10); /*0x2e1c57*/
            }
            else
            {
              Stat = 100; /*0x2e1c23*/
            }
            if ( (v3 & 1) != 0 ) /*0x2e1c5e*/
            {
              v3 &= ~1u; /*0x2e1c60*/
              sub_3C310(v19); /*0x2e1c69*/
            }
            sub_3C310(v20); /*0x2e1c74*/
            v11 = *((_DWORD *)v7 + 17); /*0x2e1c79*/
            if ( v11 + Stat < 100 ) /*0x2e1c83*/
              goto LABEL_16; /*0x2e1c83*/
            v5 += v11 + Stat - 100; /*0x2e1c88*/
            *((_DWORD *)v7 + 17) = 100 - Stat; /*0x2e1c8d*/
            if ( 100 - Stat > 0 ) /*0x2e1c92*/
              goto LABEL_16; /*0x2e1c92*/
            cocos2d::CCArray::removeObjectAtIndex(v4, v6, 1); /*0x2e1c9c*/
            break; /*0x2e1ca2*/
          default:
LABEL_16:
            ++v6; /*0x2e1ca4*/
            break; /*0x2e1ca4*/
        }
      }
      while ( v6 < cocos2d::CCArray::count(v4) ); /*0x2e1cb1*/
      if ( v5 > 0 ) /*0x2e1cbf*/
      {
        v12 = *(cocos2d::CCArray **)(a2 + 72); /*0x2e1cc5*/
        if ( !v12 ) /*0x2e1ccc*/
        {
          v13 = (cocos2d::CCObject *)cocos2d::CCArray::create(0); /*0x2e1cce*/
          v14 = v13; /*0x2e1cd4*/
          v12 = *(cocos2d::CCArray **)(a2 + 72); /*0x2e1cd7*/
          if ( v12 != v13 ) /*0x2e1cde*/
          {
            if ( v13 ) /*0x2e1ce3*/
              cocos2d::CCObject::retain(v13); /*0x2e1ce8*/
            v15 = *(cocos2d::CCObject **)(a2 + 72); /*0x2e1cee*/
            if ( v15 ) /*0x2e1cf5*/
              cocos2d::CCObject::release(v15); /*0x2e1cf7*/
            *(_QWORD *)(a2 + 72) = v14; /*0x2e1cfd*/
            v12 = v14; /*0x2e1d01*/
          }
        }
        v16 = 0; /*0x2e1d06*/
        if ( cocos2d::CCArray::count(v12) ) /*0x2e1d08*/
        {
          while ( 1 ) /*0x2e1d1e*/
          {
            v17 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a2 + 72), v16); /*0x2e1d1e*/
            if ( *((_DWORD *)v17 + 14) == 7 ) /*0x2e1d25*/
              break; /*0x2e1d25*/
            if ( ++v16 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a2 + 72)) ) /*0x2e1d35*/
              goto LABEL_29; /*0x2e1d35*/
          }
        }
        else
        {
LABEL_29:
          v17 = (struct cocos2d::CCObject *)operator new(0x48u); /*0x2e1d37*/
          cocos2d::CCObject::CCObject(v17); /*0x2e1d4c*/
          *(_QWORD *)v17 = &GJRewardObject::`vftable'; /*0x2e1d59*/
          *((_DWORD *)v17 + 14) = 7; /*0x2e1d5c*/
          *((_QWORD *)v17 + 8) = 0; /*0x2e1d63*/
          cocos2d::CCObject::autorelease(v17); /*0x2e1d6a*/
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a2 + 72), v17); /*0x2e1d77*/
        }
        *((_DWORD *)v17 + 17) = (int)(float)((float)((float)v5 * 100.0) + (float)*((int *)v17 + 17)); /*0x2e1d9d*/
      }
    }
  }
}

// [24/47] Address: 0x2e1e00
// Method: GameStatsManager::storeQueuedChallenge
// Hidden C++ exception states: #wind=1
void __fastcall GameStatsManager_storeQueuedChallenge(__int64 a1, int a2, __int64 a3)
{
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]

  *(_DWORD *)(a3 + 104) = a2; /*0x2e1e1f*/
  v5 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0x2e1e2a*/
  CString = cocos2d::CCString::getCString(v5); /*0x2e1e33*/
  *(_OWORD *)Block = 0; /*0x2e1e3c*/
  v10 = 0; /*0x2e1e44*/
  v7 = -1; /*0x2e1e4a*/
  do /*0x2e1e54*/
    ++v7; /*0x2e1e51*/
  while ( CString[v7] ); /*0x2e1e54*/
  sub_3C230(Block); /*0x2e1e63*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 560), a3, Block); /*0x2e1e78*/
  if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x2e1e88*/
  {
    v8 = Block[0]; /*0x2e1e8d*/
    if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0x2e1e9c*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e1ea2*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x2e1eb1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2e1ec6*/
    }
    j_j_free(v8); /*0x2e1ecd*/
  }
}

// [25/47] Address: 0x2e20b0
// Method: GameStatsManager::getSecondaryQueuedChallenge
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameStatsManager_getSecondaryQueuedChallenge(__int64 a1, int a2)
{
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  void *v7; // r8
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]

  v3 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(a2 + 100)); /*0x2e20d2*/
  CString = cocos2d::CCString::getCString(v3); /*0x2e20db*/
  *(_OWORD *)Block = 0; /*0x2e20e4*/
  v10 = 0; /*0x2e20ec*/
  v5 = -1; /*0x2e20f2*/
  do /*0x2e2103*/
    ++v5; /*0x2e2100*/
  while ( CString[v5] ); /*0x2e2103*/
  sub_3C230(Block); /*0x2e2112*/
  v6 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 560), Block); /*0x2e212a*/
  if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x2e2136*/
  {
    v7 = Block[0]; /*0x2e213b*/
    if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0x2e214a*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e2150*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x2e215f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2e2174*/
    }
    j_j_free(v7); /*0x2e217e*/
  }
  return v6; /*0x2e2186*/
}

// [26/47] Address: 0x2e2960
// Method: GameStatsManager::hasCompletedChallenge
// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall GameStatsManager_hasCompletedChallenge(__int64 a1, __int64 a2)
{
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // r8
  bool v6; // bl
  void *v7; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]

  v3 = cocos2d::CCString::createWithFormat("c%i%i", *(_DWORD *)(a2 + 104), *(_DWORD *)(a2 + 96)); /*0x2e2986*/
  CString = cocos2d::CCString::getCString(v3); /*0x2e298f*/
  *(_OWORD *)Block = 0; /*0x2e2998*/
  v10 = 0; /*0x2e29a0*/
  v5 = -1; /*0x2e29a6*/
  do /*0x2e29b3*/
    ++v5; /*0x2e29b0*/
  while ( CString[v5] ); /*0x2e29b3*/
  sub_3C230(Block); /*0x2e29c2*/
  v6 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 816), Block) != 0; /*0x2e29dd*/
  if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x2e29e9*/
  {
    v7 = Block[0]; /*0x2e29ee*/
    if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0x2e29fd*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e2a03*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x2e2a12*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2e2a27*/
    }
    j_j_free(v7); /*0x2e2a2e*/
  }
  return v6; /*0x2e2a36*/
}

// [27/47] Address: 0x2e2a50
// Method: GameStatsManager::processChallengeQueue
// Hidden C++ exception states: #wind=1
void __fastcall GameStatsManager_processChallengeQueue(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 SecondaryQueuedChallenge; // r15
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  void *v10; // rcx
  cocos2d::CCString *v11; // rax
  const char *v12; // rax
  __int64 v13; // r8
  void *v14; // rcx
  cocos2d::CCString *v15; // rax
  const char *v16; // rax
  __int64 v17; // r8
  void *v18; // rcx
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  void *v21; // rcx
  void *Block[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+40h] [rbp-20h]

  v4 = sub_2E1FD0(); /*0x2e2a7c*/
  SecondaryQueuedChallenge = GameStatsManager_getSecondaryQueuedChallenge(a1, a2); /*0x2e2a8a*/
  v6 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x2e2a97*/
  CString = cocos2d::CCString::getCString(v6); /*0x2e2aa0*/
  *(_OWORD *)Block = 0; /*0x2e2aa9*/
  v23 = 0; /*0x2e2ab0*/
  v8 = -1; /*0x2e2ab5*/
  v9 = -1; /*0x2e2abc*/
  do /*0x2e2ac3*/
    ++v9; /*0x2e2ac0*/
  while ( CString[v9] ); /*0x2e2ac3*/
  sub_3C230(Block); /*0x2e2ad1*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 552), Block); /*0x2e2ae2*/
  if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x2e2af1*/
  {
    v10 = Block[0]; /*0x2e2af6*/
    if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x2e2b04*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e2b0a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x2e2b19*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2e2b2e*/
    }
    j_j_free(v10); /*0x2e2b35*/
  }
  if ( v4 ) /*0x2e2b3d*/
  {
    *(_DWORD *)(v4 + 104) = a2; /*0x2e2b43*/
    v11 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x2e2b51*/
    v12 = cocos2d::CCString::getCString(v11); /*0x2e2b5a*/
    *(_OWORD *)Block = 0; /*0x2e2b63*/
    v23 = 0; /*0x2e2b6a*/
    v13 = -1; /*0x2e2b6f*/
    do /*0x2e2b75*/
      ++v13; /*0x2e2b72*/
    while ( v12[v13] ); /*0x2e2b75*/
    sub_3C230(Block); /*0x2e2b83*/
    cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 552), v4, Block); /*0x2e2b97*/
    if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x2e2ba6*/
    {
      v14 = Block[0]; /*0x2e2bab*/
      if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x2e2bb9*/
      {
        v14 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e2bbf*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F ) /*0x2e2bce*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2e2be3*/
      }
      j_j_free(v14); /*0x2e2bea*/
    }
    v15 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x2e2bf9*/
    v16 = cocos2d::CCString::getCString(v15); /*0x2e2c02*/
    *(_OWORD *)Block = 0; /*0x2e2c0b*/
    v23 = 0; /*0x2e2c12*/
    v17 = -1; /*0x2e2c17*/
    do /*0x2e2c23*/
      ++v17; /*0x2e2c20*/
    while ( v16[v17] ); /*0x2e2c23*/
    sub_3C230(Block); /*0x2e2c31*/
    cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 560), Block); /*0x2e2c42*/
    if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x2e2c51*/
    {
      v18 = Block[0]; /*0x2e2c56*/
      if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x2e2c64*/
      {
        v18 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e2c6a*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F ) /*0x2e2c79*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2e2c8e*/
      }
      j_j_free(v18); /*0x2e2c95*/
    }
  }
  if ( SecondaryQueuedChallenge ) /*0x2e2c9d*/
  {
    GameStatsManager_storeQueuedChallenge(a1, a2, SecondaryQueuedChallenge); /*0x2e2cac*/
    v19 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2 + 100); /*0x2e2cbc*/
    v20 = cocos2d::CCString::getCString(v19); /*0x2e2cc5*/
    *(_OWORD *)Block = 0; /*0x2e2cce*/
    v23 = 0; /*0x2e2cd5*/
    do /*0x2e2ce3*/
      ++v8; /*0x2e2ce0*/
    while ( v20[v8] ); /*0x2e2ce3*/
    sub_3C230(Block); /*0x2e2cf3*/
    cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 560), Block); /*0x2e2d04*/
    if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x2e2d13*/
    {
      v21 = Block[0]; /*0x2e2d18*/
      if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x2e2d26*/
      {
        v21 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e2d2c*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0x2e2d3b*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2e2d50*/
      }
      j_j_free(v21); /*0x2e2d57*/
    }
  }
}

// [28/47] Address: 0x2e2d80
// Method: GameStatsManager::hasClaimedListReward
// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall GameStatsManager_hasClaimedListReward(__int64 a1, __int64 a2)
{
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // r8
  bool v6; // bl
  void *v7; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]

  v3 = cocos2d::CCString::createWithFormat("lr_%i", *(_DWORD *)(a2 + 344)); /*0x2e2da5*/
  CString = cocos2d::CCString::getCString(v3); /*0x2e2dae*/
  *(_OWORD *)Block = 0; /*0x2e2db7*/
  v10 = 0; /*0x2e2dbf*/
  v5 = -1; /*0x2e2dc5*/
  do /*0x2e2dd3*/
    ++v5; /*0x2e2dd0*/
  while ( CString[v5] ); /*0x2e2dd3*/
  sub_3C230(Block); /*0x2e2de2*/
  v6 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 832), Block) != 0; /*0x2e2dfd*/
  if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x2e2e09*/
  {
    v7 = Block[0]; /*0x2e2e0e*/
    if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0x2e2e1d*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e2e23*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x2e2e32*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2e2e47*/
    }
    j_j_free(v7); /*0x2e2e4e*/
  }
  return v6; /*0x2e2e56*/
}

// [29/47] Address: 0x2e2f70
// Method: GameStatsManager::hasCompletedDailyLevel
// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall GameStatsManager_hasCompletedDailyLevel(_QWORD *a1, int a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  bool v8; // bl
  void *v9; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v12; // [rsp+48h] [rbp-20h]

  v4 = cocos2d::CCString::createWithFormat("d%i", a2); /*0x2e2f95*/
  CString = cocos2d::CCString::getCString(v4); /*0x2e2f9e*/
  *(_OWORD *)Block = 0; /*0x2e2fa7*/
  v12 = 0; /*0x2e2faf*/
  v6 = -1; /*0x2e2fb5*/
  do /*0x2e2fc3*/
    ++v6; /*0x2e2fc0*/
  while ( CString[v6] ); /*0x2e2fc3*/
  sub_3C230(Block); /*0x2e2fd2*/
  if ( a2 >= 100000 ) /*0x2e2fde*/
  {
    if ( a2 >= 200000 ) /*0x2e2fef*/
      v7 = a1[113]; /*0x2e2ffa*/
    else
      v7 = a1[105]; /*0x2e2ff1*/
  }
  else
  {
    v7 = a1[102]; /*0x2e2fe0*/
  }
  v8 = cocos2d::CCDictionary::objectForKey(v7, Block) != 0; /*0x2e300f*/
  if ( *((_QWORD *)&v12 + 1) > 0xFu ) /*0x2e301b*/
  {
    v9 = Block[0]; /*0x2e3020*/
    if ( (unsigned __int64)(*((_QWORD *)&v12 + 1) + 1LL) >= 0x1000 ) /*0x2e302f*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e3035*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x2e3044*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2e3059*/
    }
    j_j_free(v9); /*0x2e3060*/
  }
  return v8; /*0x2e3068*/
}

// [30/47] Address: 0x2e45b0
// Method: GameStatsManager::recountSpecialStats
// Hidden C++ exception states: #wind=10
__int64 __fastcall GameStatsManager_recountSpecialStats(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  int v3; // esi
  int v4; // r13d
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // r12d
  float v8; // xmm0_4
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 i; // r15
  __int64 v14; // rbx
  cocos2d::CCArray *v15; // rcx
  int v16; // r14d
  unsigned int v17; // esi
  struct cocos2d::CCObject *v18; // rax
  cocos2d::CCArray *v19; // rcx
  int v20; // r14d
  unsigned int v21; // esi
  struct cocos2d::CCObject *v22; // rax
  cocos2d::CCArray *v23; // rcx
  int v24; // r14d
  unsigned int v25; // esi
  struct cocos2d::CCObject *v26; // rax
  cocos2d::CCArray *v27; // rcx
  int v28; // r14d
  unsigned int v29; // esi
  struct cocos2d::CCObject *v30; // rax
  cocos2d::CCArray *v31; // rcx
  int v32; // r14d
  unsigned int v33; // esi
  struct cocos2d::CCObject *v34; // rax
  cocos2d::CCArray *v35; // rcx
  int v36; // r14d
  unsigned int v37; // esi
  struct cocos2d::CCObject *v38; // rax
  cocos2d::CCArray *v39; // rcx
  int v40; // r14d
  unsigned int v41; // esi
  struct cocos2d::CCObject *v42; // rax
  cocos2d::CCArray *v43; // rcx
  int v44; // r14d
  unsigned int v45; // esi
  struct cocos2d::CCObject *v46; // rax
  cocos2d::CCArray *v47; // rcx
  int v48; // r14d
  unsigned int v49; // esi
  struct cocos2d::CCObject *v50; // rax
  cocos2d::CCArray *v51; // rcx
  int v52; // r14d
  unsigned int v53; // esi
  struct cocos2d::CCObject *v54; // rax
  cocos2d::CCArray *v55; // rcx
  int v56; // r14d
  unsigned int v57; // esi
  struct cocos2d::CCObject *v58; // rax
  cocos2d::CCArray *v59; // rcx
  int v60; // r14d
  unsigned int v61; // esi
  struct cocos2d::CCObject *v62; // rax
  cocos2d::CCArray *v63; // rcx
  int v64; // r14d
  unsigned int v65; // esi
  struct cocos2d::CCObject *v66; // rax
  cocos2d::CCArray *v67; // rcx
  int v68; // r14d
  unsigned int v69; // esi
  struct cocos2d::CCObject *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 j; // rbx
  int v74; // eax
  int v75; // ecx
  struct cocos2d::CCArray *v76; // rax
  int v77; // r15d
  unsigned int *v78; // rcx
  __int64 v79; // rax
  cocos2d::CCString **v80; // r14
  cocos2d::CCString **v81; // r12
  const char *CString; // rax
  __int64 v83; // r8
  const char *v84; // rcx
  int v85; // ecx
  int v86; // eax
  __int64 v87; // rax
  cocos2d::CCArray *v88; // rsi
  unsigned int v89; // ebx
  unsigned int v90; // r12d
  unsigned int v91; // r15d
  unsigned int v92; // edi
  unsigned int v93; // r14d
  struct cocos2d::CCObject *v94; // rax
  int v95; // r12d
  struct cocos2d::CCArray *v96; // rax
  unsigned int *v97; // r14
  __int64 v98; // rax
  cocos2d::CCString **v99; // r14
  cocos2d::CCString **v100; // r13
  const char *v101; // rax
  __int64 v102; // r8
  const char *v103; // rcx
  __int64 v104; // r15
  struct cocos2d::CCObject *v105; // rsi
  cocos2d::CCString *v106; // rax
  int v107; // ebx
  struct cocos2d::CCObject *v108; // rax
  char *v109; // rcx
  struct cocos2d::CCArray *v110; // rax
  cocos2d::CCString *v111; // rcx
  unsigned int *v112; // rbx
  __int64 v113; // rax
  cocos2d::CCString **v114; // rbx
  cocos2d::CCString **m; // rsi
  const char *v116; // rax
  __int64 v117; // r8
  cocos2d::CCString *v118; // rax
  int v119; // eax
  char *v120; // rcx
  char v121; // r13
  __int64 v122; // rcx
  __int64 v123; // rcx
  int n; // esi
  cocos2d::CCString *v125; // rax
  const char *v126; // rax
  __int64 v127; // r8
  __int64 v128; // rcx
  char **v129; // rbx
  __int64 v130; // r14
  __int64 v131; // rax
  __int64 v132; // r8
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rbx
  __int64 v136; // rax
  char isSpecialChestUnlocked; // bl
  __int64 v138; // rcx
  unsigned int v139; // ebx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // rcx
  unsigned __int8 v145; // [rsp+38h] [rbp-81h]
  int v146; // [rsp+3Ch] [rbp-7Dh]
  unsigned int v147; // [rsp+40h] [rbp-79h]
  int v148; // [rsp+44h] [rbp-75h]
  unsigned int v149; // [rsp+48h] [rbp-71h]
  unsigned int v150; // [rsp+4Ch] [rbp-6Dh]
  unsigned int v151; // [rsp+50h] [rbp-69h]
  unsigned int v152; // [rsp+54h] [rbp-65h]
  unsigned int v153; // [rsp+58h] [rbp-61h]
  unsigned int v154; // [rsp+5Ch] [rbp-5Dh]
  unsigned int v155; // [rsp+60h] [rbp-59h]
  unsigned int v156; // [rsp+64h] [rbp-55h]
  unsigned int v157; // [rsp+68h] [rbp-51h]
  unsigned int v158; // [rsp+6Ch] [rbp-4Dh]
  void *v159; // [rsp+70h] [rbp-49h]
  void *v160; // [rsp+70h] [rbp-49h]
  cocos2d::CCString **k; // [rsp+70h] [rbp-49h]
  void *v162; // [rsp+70h] [rbp-49h]
  void *v163; // [rsp+70h] [rbp-49h]
  void *v164; // [rsp+70h] [rbp-49h]
  void *v165; // [rsp+70h] [rbp-49h]
  void *v166; // [rsp+70h] [rbp-49h]
  int v167; // [rsp+78h] [rbp-41h]
  cocos2d::CCString **v168; // [rsp+78h] [rbp-41h]
  void *v169; // [rsp+78h] [rbp-41h]
  unsigned int v170; // [rsp+80h] [rbp-39h]
  char v171[32]; // [rsp+88h] [rbp-31h] BYREF
  char *String[2]; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v173; // [rsp+B8h] [rbp-1h]
  unsigned __int64 v174; // [rsp+C0h] [rbp+7h]
  __int128 v175; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v176; // [rsp+D8h] [rbp+1Fh]
  __int64 v177; // [rsp+E0h] [rbp+27h]

  v1 = a1; /*0x2e45e2*/
  v2 = 0; /*0x2e45ea*/
  v150 = 0; /*0x2e45ec*/
  v151 = 0; /*0x2e45ef*/
  v152 = 0; /*0x2e45f2*/
  v153 = 0; /*0x2e45f5*/
  v154 = 0; /*0x2e45f8*/
  v155 = 0; /*0x2e45fb*/
  v156 = 0; /*0x2e45fe*/
  v157 = 0; /*0x2e4601*/
  v158 = 0; /*0x2e4604*/
  v170 = 0; /*0x2e4607*/
  v3 = 0; /*0x2e460a*/
  v149 = 0; /*0x2e460c*/
  v4 = sub_2E3940(); /*0x2e4614*/
  v146 = v4; /*0x2e4617*/
  v5 = qword_905FE0; /*0x2e461a*/
  if ( !qword_905FE0 ) /*0x2e4624*/
  {
    v159 = operator new(0x3E8u); /*0x2e4630*/
    qword_905FE0 = sub_2D2B40(v159); /*0x2e463d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2e464e*/
    v5 = qword_905FE0; /*0x2e4650*/
  }
  if ( (unsigned int)GameStatsManager_getStat(v5, "22") != v4 ) /*0x2e4666*/
  {
    v6 = qword_905FE0; /*0x2e4668*/
    if ( !qword_905FE0 ) /*0x2e4672*/
    {
      v160 = operator new(0x3E8u); /*0x2e467e*/
      qword_905FE0 = sub_2D2B40(v160); /*0x2e468b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2e469c*/
      v6 = qword_905FE0; /*0x2e469f*/
    }
    sub_2D7950(v6, "22", (unsigned int)v4); /*0x2e46b0*/
  }
  v147 = sub_2E42A0(v1); /*0x2e46bd*/
  v7 = (int)floorf((float)v4 / 500.0); /*0x2e46d5*/
  v148 = v7; /*0x2e46da*/
  *(_DWORD *)(v1 + 880) = v7; /*0x2e46de*/
  v8 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2e46fa*/
  *(_DWORD *)(v1 + 876) = (int)v8; /*0x2e4706*/
  *(_DWORD *)(v1 + 872) = v7 + (int)v8; /*0x2e470f*/
  sub_2F4B10(v1); /*0x2e4718*/
  v9 = 0; /*0x2e471d*/
  v167 = 0; /*0x2e471f*/
  do /*0x2e4b6c*/
  {
    if ( v9 ) /*0x2e4724*/
    {
      v10 = v9 - 1; /*0x2e4726*/
      if ( v10 ) /*0x2e4729*/
      {
        if ( v10 != 1 ) /*0x2e472e*/
          goto LABEL_91; /*0x2e472e*/
        v11 = *(_QWORD *)(v1 + 840); /*0x2e4734*/
      }
      else
      {
        v11 = *(_QWORD *)(v1 + 888); /*0x2e473d*/
      }
    }
    else
    {
      v11 = *(_QWORD *)(v1 + 536); /*0x2e4746*/
    }
    if ( v11 ) /*0x2e4750*/
    {
      v12 = *(_QWORD *)(v11 + 56); /*0x2e4756*/
      if ( v12 ) /*0x2e475d*/
      {
        for ( i = *(_QWORD *)(v12 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x2e4763*/
        {
          v14 = *(_QWORD *)(v12 + 264); /*0x2e4770*/
          v15 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e4777*/
          v16 = 0; /*0x2e477b*/
          if ( v15 ) /*0x2e4781*/
          {
            v17 = 0; /*0x2e4783*/
            if ( cocos2d::CCArray::count(v15) ) /*0x2e4785*/
            {
              do /*0x2e47b4*/
              {
                v18 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v17); /*0x2e4796*/
                if ( *((_DWORD *)v18 + 14) == 7 ) /*0x2e47a0*/
                  v16 += *((_DWORD *)v18 + 17); /*0x2e47a2*/
                ++v17; /*0x2e47a6*/
              }
              while ( v17 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e47b4*/
            }
          }
          v4 += v16; /*0x2e47b6*/
          v19 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e47b9*/
          v20 = 0; /*0x2e47bd*/
          if ( v19 ) /*0x2e47c3*/
          {
            v21 = 0; /*0x2e47c5*/
            if ( cocos2d::CCArray::count(v19) ) /*0x2e47c7*/
            {
              do /*0x2e47f5*/
              {
                v22 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v21); /*0x2e47d7*/
                if ( *((_DWORD *)v22 + 14) == 8 ) /*0x2e47e1*/
                  v20 += *((_DWORD *)v22 + 17); /*0x2e47e3*/
                ++v21; /*0x2e47e7*/
              }
              while ( v21 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e47f5*/
            }
          }
          v147 += v20; /*0x2e47f7*/
          v23 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e47fb*/
          v24 = 0; /*0x2e47ff*/
          if ( v23 ) /*0x2e4805*/
          {
            v25 = 0; /*0x2e4807*/
            if ( cocos2d::CCArray::count(v23) ) /*0x2e4809*/
            {
              do /*0x2e4837*/
              {
                v26 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v25); /*0x2e4819*/
                if ( *((_DWORD *)v26 + 14) == 1 ) /*0x2e4823*/
                  v24 += *((_DWORD *)v26 + 17); /*0x2e4825*/
                ++v25; /*0x2e4829*/
              }
              while ( v25 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4837*/
            }
          }
          v150 += v24; /*0x2e4839*/
          v27 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e483d*/
          v28 = 0; /*0x2e4841*/
          if ( v27 ) /*0x2e4847*/
          {
            v29 = 0; /*0x2e4849*/
            if ( cocos2d::CCArray::count(v27) ) /*0x2e484b*/
            {
              do /*0x2e4884*/
              {
                v30 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v29); /*0x2e4866*/
                if ( *((_DWORD *)v30 + 14) == 2 ) /*0x2e4870*/
                  v28 += *((_DWORD *)v30 + 17); /*0x2e4872*/
                ++v29; /*0x2e4876*/
              }
              while ( v29 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4884*/
            }
          }
          v151 += v28; /*0x2e4886*/
          v31 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e488a*/
          v32 = 0; /*0x2e488e*/
          if ( v31 ) /*0x2e4894*/
          {
            v33 = 0; /*0x2e4896*/
            if ( cocos2d::CCArray::count(v31) ) /*0x2e4898*/
            {
              do /*0x2e48c6*/
              {
                v34 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v33); /*0x2e48a8*/
                if ( *((_DWORD *)v34 + 14) == 3 ) /*0x2e48b2*/
                  v32 += *((_DWORD *)v34 + 17); /*0x2e48b4*/
                ++v33; /*0x2e48b8*/
              }
              while ( v33 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e48c6*/
            }
          }
          v152 += v32; /*0x2e48c8*/
          v35 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e48cc*/
          v36 = 0; /*0x2e48d0*/
          if ( v35 ) /*0x2e48d6*/
          {
            v37 = 0; /*0x2e48d8*/
            if ( cocos2d::CCArray::count(v35) ) /*0x2e48da*/
            {
              do /*0x2e4908*/
              {
                v38 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v37); /*0x2e48ea*/
                if ( *((_DWORD *)v38 + 14) == 4 ) /*0x2e48f4*/
                  v36 += *((_DWORD *)v38 + 17); /*0x2e48f6*/
                ++v37; /*0x2e48fa*/
              }
              while ( v37 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4908*/
            }
          }
          v153 += v36; /*0x2e490a*/
          v39 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e490e*/
          v40 = 0; /*0x2e4912*/
          if ( v39 ) /*0x2e4918*/
          {
            v41 = 0; /*0x2e491a*/
            if ( cocos2d::CCArray::count(v39) ) /*0x2e491c*/
            {
              do /*0x2e4954*/
              {
                v42 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v41); /*0x2e4936*/
                if ( *((_DWORD *)v42 + 14) == 5 ) /*0x2e4940*/
                  v40 += *((_DWORD *)v42 + 17); /*0x2e4942*/
                ++v41; /*0x2e4946*/
              }
              while ( v41 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4954*/
            }
          }
          v154 += v40; /*0x2e4956*/
          v43 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e495a*/
          v44 = 0; /*0x2e495e*/
          if ( v43 ) /*0x2e4964*/
          {
            v45 = 0; /*0x2e4966*/
            if ( cocos2d::CCArray::count(v43) ) /*0x2e4968*/
            {
              do /*0x2e4996*/
              {
                v46 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v45); /*0x2e4978*/
                if ( *((_DWORD *)v46 + 14) == 10 ) /*0x2e4982*/
                  v44 += *((_DWORD *)v46 + 17); /*0x2e4984*/
                ++v45; /*0x2e4988*/
              }
              while ( v45 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4996*/
            }
          }
          v155 += v44; /*0x2e4998*/
          v47 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e499c*/
          v48 = 0; /*0x2e49a0*/
          if ( v47 ) /*0x2e49a6*/
          {
            v49 = 0; /*0x2e49a8*/
            if ( cocos2d::CCArray::count(v47) ) /*0x2e49aa*/
            {
              do /*0x2e49d8*/
              {
                v50 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v49); /*0x2e49ba*/
                if ( *((_DWORD *)v50 + 14) == 11 ) /*0x2e49c4*/
                  v48 += *((_DWORD *)v50 + 17); /*0x2e49c6*/
                ++v49; /*0x2e49ca*/
              }
              while ( v49 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e49d8*/
            }
          }
          v156 += v48; /*0x2e49da*/
          v51 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e49de*/
          v52 = 0; /*0x2e49e2*/
          if ( v51 ) /*0x2e49e8*/
          {
            v53 = 0; /*0x2e49ea*/
            if ( cocos2d::CCArray::count(v51) ) /*0x2e49ec*/
            {
              do /*0x2e4a24*/
              {
                v54 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v53); /*0x2e4a06*/
                if ( *((_DWORD *)v54 + 14) == 12 ) /*0x2e4a10*/
                  v52 += *((_DWORD *)v54 + 17); /*0x2e4a12*/
                ++v53; /*0x2e4a16*/
              }
              while ( v53 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4a24*/
            }
          }
          v157 += v52; /*0x2e4a26*/
          v55 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e4a2a*/
          v56 = 0; /*0x2e4a2e*/
          if ( v55 ) /*0x2e4a34*/
          {
            v57 = 0; /*0x2e4a36*/
            if ( cocos2d::CCArray::count(v55) ) /*0x2e4a38*/
            {
              do /*0x2e4a66*/
              {
                v58 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v57); /*0x2e4a48*/
                if ( *((_DWORD *)v58 + 14) == 13 ) /*0x2e4a52*/
                  v56 += *((_DWORD *)v58 + 17); /*0x2e4a54*/
                ++v57; /*0x2e4a58*/
              }
              while ( v57 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4a66*/
            }
          }
          v158 += v56; /*0x2e4a68*/
          v59 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e4a6c*/
          v60 = 0; /*0x2e4a70*/
          if ( v59 ) /*0x2e4a76*/
          {
            v61 = 0; /*0x2e4a78*/
            if ( cocos2d::CCArray::count(v59) ) /*0x2e4a7a*/
            {
              do /*0x2e4aa8*/
              {
                v62 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v61); /*0x2e4a8a*/
                if ( *((_DWORD *)v62 + 14) == 14 ) /*0x2e4a94*/
                  v60 += *((_DWORD *)v62 + 17); /*0x2e4a96*/
                ++v61; /*0x2e4a9a*/
              }
              while ( v61 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4aa8*/
            }
          }
          v170 += v60; /*0x2e4aaa*/
          v63 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e4aae*/
          v64 = 0; /*0x2e4ab2*/
          if ( v63 ) /*0x2e4ab8*/
          {
            v65 = 0; /*0x2e4aba*/
            if ( cocos2d::CCArray::count(v63) ) /*0x2e4abc*/
            {
              do /*0x2e4af4*/
              {
                v66 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v65); /*0x2e4ad6*/
                if ( *((_DWORD *)v66 + 14) == 6 ) /*0x2e4ae0*/
                  v64 += *((_DWORD *)v66 + 17); /*0x2e4ae2*/
                ++v65; /*0x2e4ae6*/
              }
              while ( v65 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4af4*/
            }
          }
          v7 += v64; /*0x2e4af6*/
          v67 = *(cocos2d::CCArray **)(v14 + 72); /*0x2e4af9*/
          v68 = 0; /*0x2e4afd*/
          if ( v67 ) /*0x2e4b03*/
          {
            v69 = 0; /*0x2e4b05*/
            if ( cocos2d::CCArray::count(v67) ) /*0x2e4b07*/
            {
              do /*0x2e4b35*/
              {
                v70 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v14 + 72), v69); /*0x2e4b17*/
                if ( *((_DWORD *)v70 + 14) == 15 ) /*0x2e4b21*/
                  v68 += *((_DWORD *)v70 + 17); /*0x2e4b23*/
                ++v69; /*0x2e4b27*/
              }
              while ( v69 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v14 + 72)) ); /*0x2e4b35*/
            }
          }
          v3 = v68 + v149; /*0x2e4b3a*/
          v149 += v68; /*0x2e4b3d*/
          v12 = i; /*0x2e4b40*/
          if ( !i ) /*0x2e4b46*/
            break; /*0x2e4b46*/
        }
        v148 = v7; /*0x2e4b54*/
        v146 = v4; /*0x2e4b58*/
      }
    }
    v1 = a1; /*0x2e4b5c*/
LABEL_91:
    v9 = v167 + 1; /*0x2e4b61*/
    v167 = v9; /*0x2e4b66*/
  }
  while ( v9 < 3 ); /*0x2e4b6c*/
  v71 = *(_QWORD *)(v1 + 544); /*0x2e4b72*/
  if ( v71 ) /*0x2e4b7c*/
  {
    v72 = *(_QWORD *)(v71 + 56); /*0x2e4b7e*/
    if ( v72 ) /*0x2e4b85*/
    {
      for ( j = *(_QWORD *)(v72 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x2e4b87*/
      {
        v74 = cocos2d::CCString::intValue(*(cocos2d::CCString **)(v72 + 264)); /*0x2e4b97*/
        v75 = 200; /*0x2e4b9d*/
        if ( v74 < 200 ) /*0x2e4ba4*/
          v75 = v74; /*0x2e4ba4*/
        v4 += v75; /*0x2e4ba7*/
        v72 = j; /*0x2e4baa*/
        if ( !j ) /*0x2e4bb0*/
          break; /*0x2e4bb0*/
      }
      v146 = v4; /*0x2e4bbb*/
      v1 = a1; /*0x2e4bbf*/
    }
  }
  v76 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(v1 + 864)); /*0x2e4bcb*/
  v77 = 1; /*0x2e4bd1*/
  if ( v76 ) /*0x2e4bda*/
  {
    v78 = (unsigned int *)*((_QWORD *)v76 + 7); /*0x2e4be0*/
    v79 = *v78; /*0x2e4be4*/
    if ( (_DWORD)v79 ) /*0x2e4be8*/
    {
      v80 = (cocos2d::CCString **)*((_QWORD *)v78 + 2); /*0x2e4bee*/
      v168 = v80; /*0x2e4bf2*/
      v81 = &v80[v79 - 1]; /*0x2e4bfa*/
      for ( k = v81; v80 <= v81; v3 = v149 ) /*0x2e4c05*/
      {
        if ( !*v80 ) /*0x2e4c16*/
          break; /*0x2e4c16*/
        CString = cocos2d::CCString::getCString(*v80); /*0x2e4c1c*/
        *(_OWORD *)String = 0; /*0x2e4c25*/
        v173 = 0; /*0x2e4c29*/
        v174 = 0; /*0x2e4c2d*/
        v83 = -1; /*0x2e4c31*/
        do /*0x2e4c43*/
          ++v83; /*0x2e4c40*/
        while ( CString[v83] ); /*0x2e4c43*/
        sub_3C230(String); /*0x2e4c51*/
        v84 = (const char *)String; /*0x2e4c57*/
        if ( v174 > 0xF ) /*0x2e4c60*/
          v84 = String[0]; /*0x2e4c60*/
        v85 = atoi(v84); /*0x2e4c6b*/
        if ( v85 <= 6000 ) /*0x2e4c72*/
        {
          if ( v85 <= 5000 ) /*0x2e4c8b*/
          {
            if ( v85 <= 4000 ) /*0x2e4c9a*/
            {
              if ( v85 <= 3000 ) /*0x2e4ca9*/
              {
                if ( v85 <= 2000 ) /*0x2e4cb8*/
                {
                  v86 = 1; /*0x2e4cc1*/
                  if ( v85 > 1000 ) /*0x2e4ccf*/
                    v86 = 5; /*0x2e4ccf*/
                }
                else
                {
                  v86 = 10; /*0x2e4cba*/
                }
              }
              else
              {
                v86 = 25; /*0x2e4cab*/
              }
            }
            else
            {
              v86 = 50; /*0x2e4c9c*/
            }
          }
          else
          {
            v86 = 100; /*0x2e4c8d*/
          }
          if ( v148 >= v86 ) /*0x2e4cd7*/
          {
            v148 -= v86; /*0x2e4cdf*/
LABEL_123:
            v87 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v1 + 864), String); /*0x2e4ce2*/
            v88 = *(cocos2d::CCArray **)(v87 + 72); /*0x2e4cf3*/
            if ( v88 ) /*0x2e4cfa*/
            {
              v89 = 0; /*0x2e4d00*/
              if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v87 + 72)) ) /*0x2e4d05*/
              {
                v90 = v147; /*0x2e4d13*/
                v91 = v150; /*0x2e4d17*/
                v92 = v151; /*0x2e4d1b*/
                v93 = v152; /*0x2e4d1e*/
                do /*0x2e4dc3*/
                {
                  v94 = cocos2d::CCArray::objectAtIndex(v88, v89); /*0x2e4d27*/
                  switch ( *((_DWORD *)v94 + 14) ) /*0x2e4d4c*/
                  {
                    case 1: /*0x2e4d4c*/
                      v91 += *((_DWORD *)v94 + 17); /*0x2e4d5a*/
                      break; /*0x2e4d5e*/
                    case 2: /*0x2e4d4c*/
                      v92 += *((_DWORD *)v94 + 17); /*0x2e4d60*/
                      break; /*0x2e4d63*/
                    case 3: /*0x2e4d4c*/
                      v93 += *((_DWORD *)v94 + 17); /*0x2e4d65*/
                      break; /*0x2e4d69*/
                    case 4: /*0x2e4d4c*/
                      v153 += *((_DWORD *)v94 + 17); /*0x2e4d71*/
                      break; /*0x2e4d74*/
                    case 5: /*0x2e4d4c*/
                      v154 += *((_DWORD *)v94 + 17); /*0x2e4d7c*/
                      break; /*0x2e4d7f*/
                    case 7: /*0x2e4d4c*/
                      v4 += *((_DWORD *)v94 + 17); /*0x2e4d4e*/
                      break; /*0x2e4d52*/
                    case 8: /*0x2e4d4c*/
                      v90 += *((_DWORD *)v94 + 17); /*0x2e4d54*/
                      break; /*0x2e4d58*/
                    case 0xA: /*0x2e4d4c*/
                      v155 += *((_DWORD *)v94 + 17); /*0x2e4d87*/
                      break; /*0x2e4d8a*/
                    case 0xB: /*0x2e4d4c*/
                      v156 += *((_DWORD *)v94 + 17); /*0x2e4d92*/
                      break; /*0x2e4d95*/
                    case 0xC: /*0x2e4d4c*/
                      v157 += *((_DWORD *)v94 + 17); /*0x2e4d9d*/
                      break; /*0x2e4da0*/
                    case 0xD: /*0x2e4d4c*/
                      v158 += *((_DWORD *)v94 + 17); /*0x2e4da8*/
                      break; /*0x2e4dab*/
                    case 0xE: /*0x2e4d4c*/
                      v170 += *((_DWORD *)v94 + 17); /*0x2e4db3*/
                      break; /*0x2e4db3*/
                    default:
                      break;
                  }
                  ++v89; /*0x2e4db6*/
                }
                while ( v89 < cocos2d::CCArray::count(v88) ); /*0x2e4dc3*/
                v152 = v93; /*0x2e4dc9*/
                v151 = v92; /*0x2e4dcd*/
                v150 = v91; /*0x2e4dd0*/
                v147 = v90; /*0x2e4dd4*/
                v146 = v4; /*0x2e4dd8*/
                v2 = 0; /*0x2e4ddc*/
                v80 = v168; /*0x2e4dde*/
                v77 = 1; /*0x2e4de2*/
                v81 = k; /*0x2e4de8*/
              }
              v1 = a1; /*0x2e4dec*/
            }
            goto LABEL_142; /*0x2e4dec*/
          }
        }
        else if ( v3 >= 1 ) /*0x2e4c77*/
        {
          v149 = v3 - 1; /*0x2e4c80*/
          goto LABEL_123; /*0x2e4c83*/
        }
        cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(v1 + 864), String); /*0x2e4f2d*/
LABEL_142:
        sub_3C310(String); /*0x2e4df1*/
        v168 = ++v80; /*0x2e4dfe*/
      }
    }
  }
  v95 = v147; /*0x2e4e0e*/
  v96 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(v1 + 736)); /*0x2e4e19*/
  if ( v96 ) /*0x2e4e22*/
  {
    v97 = (unsigned int *)*((_QWORD *)v96 + 7); /*0x2e4e28*/
    v98 = *v97; /*0x2e4e2c*/
    if ( (_DWORD)v98 ) /*0x2e4e31*/
    {
      v99 = (cocos2d::CCString **)*((_QWORD *)v97 + 2); /*0x2e4e37*/
      v100 = &v99[v98 - 1]; /*0x2e4e3f*/
      if ( v99 <= v100 ) /*0x2e4e46*/
      {
        while ( 2 ) /*0x2e4e56*/
        {
          if ( !*v99 ) /*0x2e4e56*/
          {
LABEL_167:
            v77 = 1; /*0x2e4fa8*/
            break; /*0x2e4fa8*/
          }
          v101 = cocos2d::CCString::getCString(*v99); /*0x2e4e5c*/
          *(_OWORD *)String = 0; /*0x2e4e65*/
          v173 = 0; /*0x2e4e69*/
          v174 = 0; /*0x2e4e6d*/
          v102 = -1; /*0x2e4e71*/
          do /*0x2e4e83*/
            ++v102; /*0x2e4e80*/
          while ( v101[v102] ); /*0x2e4e83*/
          sub_3C230(String); /*0x2e4e91*/
          v103 = (const char *)String; /*0x2e4e97*/
          if ( v174 > 0xF ) /*0x2e4ea0*/
            v103 = String[0]; /*0x2e4ea0*/
          v104 = atoi(v103); /*0x2e4eab*/
          v105 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v1 + 344), v104); /*0x2e4ebe*/
          v106 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v1 + 736), String); /*0x2e4ecc*/
          v107 = cocos2d::CCString::intValue(v106); /*0x2e4edb*/
          if ( v107 <= 0 ) /*0x2e4edf*/
            goto LABEL_161; /*0x2e4edf*/
          if ( v105 ) /*0x2e4ee4*/
            v107 = *((_DWORD *)v105 + 89) - *((_DWORD *)v105 + 90); /*0x2e4eec*/
          v108 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 344), v104); /*0x2e4f01*/
          if ( v108 && *((_DWORD *)v108 + 92) == 4 ) /*0x2e4f13*/
          {
            if ( v95 >= v107 ) /*0x2e4f18*/
            {
              v95 -= v107; /*0x2e4f1a*/
              v1 = a1; /*0x2e4f1d*/
              goto LABEL_162; /*0x2e4f20*/
            }
LABEL_161:
            v1 = a1; /*0x2e4f49*/
            cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 736), String); /*0x2e4f59*/
          }
          else
          {
            if ( v146 < v107 ) /*0x2e4f3d*/
              goto LABEL_161; /*0x2e4f3d*/
            v146 -= v107; /*0x2e4f41*/
            v1 = a1; /*0x2e4f44*/
          }
LABEL_162:
          if ( v174 > 0xF ) /*0x2e4f68*/
          {
            v109 = String[0]; /*0x2e4f6d*/
            if ( v174 + 1 >= 0x1000 ) /*0x2e4f7b*/
            {
              v109 = (char *)*((_QWORD *)String[0] - 1); /*0x2e4f81*/
              if ( (unsigned __int64)(String[0] - v109 - 8) > 0x1F ) /*0x2e4f90*/
                invoke_watson(0, 0, 0, 0, 0); /*0x2e5072*/
            }
            j_j_free(v109); /*0x2e4f96*/
          }
          if ( ++v99 > v100 ) /*0x2e4fa2*/
            goto LABEL_167; /*0x2e4fa2*/
          continue; /*0x2e4fa2*/
        }
      }
    }
  }
  v110 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(v1 + 856)); /*0x2e4fae*/
  if ( v110 ) /*0x2e4fbe*/
  {
    v112 = (unsigned int *)*((_QWORD *)v110 + 7); /*0x2e4fc4*/
    v113 = *v112; /*0x2e4fc8*/
    if ( (_DWORD)v113 ) /*0x2e4fcc*/
    {
      v114 = (cocos2d::CCString **)*((_QWORD *)v112 + 2); /*0x2e4fd2*/
      for ( m = &v114[v113 - 1]; v114 <= m; ++v114 ) /*0x2e4fe1*/
      {
        v111 = *v114; /*0x2e4ff0*/
        if ( !*v114 ) /*0x2e4ff0*/
          break; /*0x2e4ff6*/
        v116 = cocos2d::CCString::getCString(v111); /*0x2e4ffc*/
        *(_OWORD *)String = 0; /*0x2e5005*/
        v173 = 0; /*0x2e5009*/
        v174 = 0; /*0x2e500d*/
        v117 = -1; /*0x2e5011*/
        do /*0x2e5023*/
          ++v117; /*0x2e5020*/
        while ( v116[v117] ); /*0x2e5023*/
        sub_3C230(String); /*0x2e5031*/
        v118 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(a1 + 856), String); /*0x2e5042*/
        v119 = cocos2d::CCString::intValue(v118); /*0x2e504b*/
        if ( v119 <= 0 || v148 < v119 ) /*0x2e505a*/
        {
          cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 856), String); /*0x2e5084*/
        }
        else
        {
          v111 = (cocos2d::CCString *)(unsigned int)(v148 - v119); /*0x2e505c*/
          v148 -= v119; /*0x2e505e*/
        }
        if ( v174 > 0xF ) /*0x2e5093*/
        {
          v120 = String[0]; /*0x2e5098*/
          if ( v174 + 1 >= 0x1000 ) /*0x2e50a6*/
          {
            v120 = (char *)*((_QWORD *)String[0] - 1); /*0x2e50ac*/
            if ( (unsigned __int64)(String[0] - v120 - 8) > 0x1F ) /*0x2e50bb*/
              invoke_watson(0, 0, 0, 0, 0); /*0x2e554b*/
          }
          j_j_free(v120); /*0x2e50c1*/
        }
      }
    }
    v1 = a1; /*0x2e50d3*/
  }
  v121 = *(_BYTE *)(AchievementManager_sharedState(v111) + 360); /*0x2e50dd*/
  v145 = *(_BYTE *)(v1 + 912); /*0x2e50ec*/
  *(_BYTE *)(AchievementManager_sharedState(v122) + 360) = 1; /*0x2e50f5*/
  *(_BYTE *)(v1 + 912) = 1; /*0x2e50fc*/
  GameStatsManager_resetSpecialStatAchievements(); /*0x2e5103*/
  sub_2D7950(v1, &word_732AF4, (unsigned int)v146); /*0x2e5116*/
  sub_2D7950(v1, "13", v147); /*0x2e5129*/
  sub_2D7950(v1, &word_755560, (unsigned int)v95); /*0x2e513b*/
  sub_2D7950(v1, &word_732410, (unsigned int)v148); /*0x2e514e*/
  sub_2D7950(v1, &word_732D94, v149); /*0x2e5161*/
  sub_2D7950(v1, &word_732D90, v150); /*0x2e5174*/
  sub_2D7950(v1, &word_732D8C, v151); /*0x2e5187*/
  sub_2D7950(v1, &word_732CC4, v152); /*0x2e519a*/
  sub_2D7950(v1, &word_732CC0, v153); /*0x2e51ad*/
  sub_2D7950(v1, &word_732CCC, v154); /*0x2e51c0*/
  sub_2D7950(v1, &unk_732CC8, v155); /*0x2e51d3*/
  sub_2D7950(v1, &unk_732CD4, v156); /*0x2e51e6*/
  sub_2D7950(v1, &word_732CD0, v157); /*0x2e51f9*/
  sub_2D7950(v1, &unk_732CDC, v158); /*0x2e520c*/
  sub_2D7950(v1, &unk_732CD8, v170); /*0x2e521f*/
  for ( n = 6; n <= 15; ++n ) /*0x2e5224*/
  {
    if ( !qword_905FE0 ) /*0x2e5238*/
    {
      v162 = operator new(0x3E8u); /*0x2e5244*/
      qword_905FE0 = sub_2D2B40(v162); /*0x2e5251*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2e5262*/
    }
    if ( (unsigned __int8)sub_2E5B30(v123, 12, (unsigned int)n) ) /*0x2e526c*/
    {
      v125 = cocos2d::CCString::createWithFormat("geometry.ach.path%02d.00", n - 5); /*0x2e5283*/
      v126 = cocos2d::CCString::getCString(v125); /*0x2e528c*/
      *(_OWORD *)String = 0; /*0x2e5295*/
      v173 = 0; /*0x2e5299*/
      v174 = 0; /*0x2e529d*/
      v127 = -1; /*0x2e52a1*/
      do /*0x2e52b3*/
        ++v127; /*0x2e52b0*/
      while ( v126[v127] ); /*0x2e52b3*/
      sub_3C230(String); /*0x2e52c1*/
      v129 = String; /*0x2e52c7*/
      if ( v174 > 0xF ) /*0x2e52d0*/
        v129 = (char **)String[0]; /*0x2e52d0*/
      v130 = qword_905FD0; /*0x2e52d5*/
      if ( !qword_905FD0 ) /*0x2e52df*/
      {
        v169 = operator new(0x6E8u); /*0x2e52eb*/
        qword_905FD0 = sub_2723A0(v169); /*0x2e52f8*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2e5309*/
        v130 = qword_905FD0; /*0x2e530b*/
      }
      v131 = AchievementManager_sharedState(v128); /*0x2e5312*/
      if ( (int)AchievementManager_percentForAchievement(v131, v129) < 100 ) /*0x2e5325*/
      {
        v175 = 0; /*0x2e532a*/
        v176 = 0; /*0x2e532e*/
        v177 = 0; /*0x2e5332*/
        v132 = -1; /*0x2e5336*/
        do /*0x2e5343*/
          ++v132; /*0x2e5340*/
        while ( *((_BYTE *)v129 + v132) ); /*0x2e5343*/
        sub_3C230(&v175); /*0x2e5351*/
        sub_274AD0(v130, &v175); /*0x2e535d*/
        v134 = AchievementManager_sharedState(v133); /*0x2e5362*/
        GameManager_isColorUnlocked(v134, (__int64)v129, 100); /*0x2e5373*/
      }
      sub_3C310(String); /*0x2e537d*/
    }
  }
  do /*0x2e540b*/
  {
    v135 = qword_905FE0; /*0x2e5390*/
    if ( !qword_905FE0 ) /*0x2e539a*/
    {
      v163 = operator new(0x3E8u); /*0x2e53a6*/
      qword_905FE0 = sub_2D2B40(v163); /*0x2e53b3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2e53c4*/
      v135 = qword_905FE0; /*0x2e53c6*/
    }
    sub_2EAB20(v123, &v175, (unsigned int)v77); /*0x2e53d4*/
    v136 = sub_3E4F0(v171, &v175); /*0x2e53e2*/
    isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v135, v136); /*0x2e53f2*/
    sub_3C310(&v175); /*0x2e53f9*/
    if ( isSpecialChestUnlocked ) /*0x2e5400*/
      ++v2; /*0x2e5402*/
    ++v77; /*0x2e5404*/
  }
  while ( v77 <= 62 ); /*0x2e540b*/
  v138 = qword_905FE0; /*0x2e540d*/
  if ( !qword_905FE0 ) /*0x2e5417*/
  {
    v164 = operator new(0x3E8u); /*0x2e5423*/
    qword_905FE0 = sub_2D2B40(v164); /*0x2e5430*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2e5441*/
    v138 = qword_905FE0; /*0x2e5443*/
  }
  sub_2D7950(v138, "40", v2); /*0x2e5454*/
  v139 = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(a1 + 832)); /*0x2e546b*/
  v140 = qword_905FE0; /*0x2e546d*/
  if ( !qword_905FE0 ) /*0x2e5477*/
  {
    v165 = operator new(0x3E8u); /*0x2e5483*/
    qword_905FE0 = sub_2D2B40(v165); /*0x2e5490*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2e549d*/
    v140 = qword_905FE0; /*0x2e54a0*/
  }
  sub_2D7950(v140, "41", v139); /*0x2e54b1*/
  v141 = qword_905FD0; /*0x2e54b6*/
  if ( !qword_905FD0 ) /*0x2e54c0*/
  {
    v166 = operator new(0x6E8u); /*0x2e54cc*/
    qword_905FD0 = sub_2723A0(v166); /*0x2e54d9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2e54ea*/
    v141 = qword_905FD0; /*0x2e54ec*/
  }
  GameManager_checkUsedIcons(v141); /*0x2e54f3*/
  *(_BYTE *)(AchievementManager_sharedState(v142) + 360) = v121; /*0x2e54fd*/
  *(_BYTE *)(a1 + 912) = v145; /*0x2e5509*/
  return v145; /*0x2e550f*/
}

// [31/47] Address: 0x2e5590
// Method: GameStatsManager::resetSpecialStatAchievements
// Hidden C++ exception states: #wind=3
void GameStatsManager_resetSpecialStatAchievements()
{
  int v0; // esi
  int v1; // edi
  __int64 v2; // rax
  char *v3; // r8
  __int64 v4; // xmm0_8
  int v5; // ebx
  const char *v6; // rdx
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h]
  __int128 *v14; // [rsp+40h] [rbp-40h]
  void *v15; // [rsp+48h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  unsigned __int64 v18; // [rsp+68h] [rbp-18h]

  v0 = 0; /*0x2e55bf*/
  while ( 2 ) /*0x2e55d3*/
  {
    v16 = 0; /*0x2e55d3*/
    v17 = 0; /*0x2e55d7*/
    v18 = 15; /*0x2e55db*/
    LOBYTE(v16) = 0; /*0x2e55e3*/
    switch ( v0 ) /*0x2e55f5*/
    {
      case 0: /*0x2e55f5*/
        v1 = 18; /*0x2e55f7*/
        v2 = sub_3C460(32); /*0x2e5601*/
        v17 = 21; /*0x2e5606*/
        v18 = 31; /*0x2e560e*/
        strcpy((char *)v2, "geometry.ach.diamonds"); /*0x2e561d*/
        goto LABEL_17; /*0x2e5637*/
      case 1: /*0x2e55f5*/
        v1 = 5; /*0x2e563c*/
        v3 = (char *)sub_3C460(32); /*0x2e564b*/
        v17 = 22; /*0x2e564e*/
        v18 = 31; /*0x2e5656*/
        strcpy(v3, "geometry.ach.shardFire"); /*0x2e5665*/
        *(_QWORD *)&v16 = v3; /*0x2e5683*/
        goto LABEL_18; /*0x2e5687*/
      case 2: /*0x2e55f5*/
        v1 = 5; /*0x2e568c*/
        v3 = (char *)sub_3C460(32); /*0x2e569b*/
        v17 = 21; /*0x2e569e*/
        v18 = 31; /*0x2e56a6*/
        strcpy(v3, "geometry.ach.shardIce"); /*0x2e56b5*/
        *(_QWORD *)&v16 = v3; /*0x2e56d2*/
        goto LABEL_18; /*0x2e56d6*/
      case 3: /*0x2e55f5*/
        v1 = 5; /*0x2e56db*/
        v2 = sub_3C460(32); /*0x2e56e5*/
        v17 = 24; /*0x2e56ea*/
        v18 = 31; /*0x2e56f2*/
        *(_OWORD *)v2 = xmmword_761DF0; /*0x2e5701*/
        v4 = 0x6E6F73696F506472LL; /*0x2e5704*/
        goto LABEL_16; /*0x2e570c*/
      case 4: /*0x2e55f5*/
        v1 = 5; /*0x2e5711*/
        v2 = sub_3C460(32); /*0x2e571b*/
        v17 = 24; /*0x2e5720*/
        v18 = 31; /*0x2e5728*/
        *(_OWORD *)v2 = xmmword_761DD0; /*0x2e5737*/
        v4 = 0x776F646168536472LL; /*0x2e573a*/
        goto LABEL_16; /*0x2e5742*/
      case 5: /*0x2e55f5*/
        v1 = 5; /*0x2e5747*/
        v3 = (char *)sub_3C460(32); /*0x2e5756*/
        v17 = 22; /*0x2e5759*/
        v18 = 31; /*0x2e5761*/
        strcpy(v3, "geometry.ach.shardLava"); /*0x2e5770*/
        *(_QWORD *)&v16 = v3; /*0x2e578e*/
        goto LABEL_18; /*0x2e5792*/
      case 6: /*0x2e55f5*/
        v1 = 5; /*0x2e5797*/
        v3 = (char *)sub_3C460(32); /*0x2e57a6*/
        v17 = 23; /*0x2e57a9*/
        v18 = 31; /*0x2e57b1*/
        strcpy(v3, "geometry.ach.shardBonus"); /*0x2e57c0*/
        *(_QWORD *)&v16 = v3; /*0x2e57e9*/
        goto LABEL_18; /*0x2e57ed*/
      case 7: /*0x2e55f5*/
        v1 = 5; /*0x2e57f2*/
        v3 = (char *)sub_3C460(32); /*0x2e5801*/
        v17 = 23; /*0x2e5804*/
        v18 = 31; /*0x2e580c*/
        strcpy(v3, "geometry.ach.shardEarth"); /*0x2e581b*/
        *(_QWORD *)&v16 = v3; /*0x2e5844*/
        goto LABEL_18; /*0x2e5848*/
      case 8: /*0x2e55f5*/
        v1 = 5; /*0x2e584d*/
        v3 = (char *)sub_3C460(32); /*0x2e585c*/
        v17 = 23; /*0x2e585f*/
        v18 = 31; /*0x2e5867*/
        strcpy(v3, "geometry.ach.shardBlood"); /*0x2e5876*/
        *(_QWORD *)&v16 = v3; /*0x2e589f*/
        goto LABEL_18; /*0x2e58a3*/
      case 9: /*0x2e55f5*/
        v1 = 5; /*0x2e58a8*/
        v3 = (char *)sub_3C460(32); /*0x2e58b7*/
        v17 = 23; /*0x2e58ba*/
        v18 = 31; /*0x2e58c2*/
        strcpy(v3, "geometry.ach.shardMetal"); /*0x2e58d1*/
        *(_QWORD *)&v16 = v3; /*0x2e58fa*/
        goto LABEL_18; /*0x2e58fe*/
      case 10: /*0x2e55f5*/
        v1 = 5; /*0x2e5903*/
        v3 = (char *)sub_3C460(32); /*0x2e5912*/
        v17 = 23; /*0x2e5915*/
        v18 = 31; /*0x2e591d*/
        strcpy(v3, "geometry.ach.shardLight"); /*0x2e592c*/
        *(_QWORD *)&v16 = v3; /*0x2e5955*/
        goto LABEL_18; /*0x2e5959*/
      case 11: /*0x2e55f5*/
        v1 = 5; /*0x2e595e*/
        v3 = (char *)sub_3C460(32); /*0x2e596d*/
        v17 = 22; /*0x2e5970*/
        v18 = 31; /*0x2e5978*/
        strcpy(v3, "geometry.ach.shardSoul"); /*0x2e5987*/
        *(_QWORD *)&v16 = v3; /*0x2e59a5*/
        goto LABEL_18; /*0x2e59a9*/
      case 12: /*0x2e55f5*/
        v1 = 5; /*0x2e59ab*/
        v2 = sub_3C460(32); /*0x2e59b5*/
        v17 = 24; /*0x2e59ba*/
        v18 = 31; /*0x2e59c2*/
        *(_OWORD *)v2 = xmmword_761EA0; /*0x2e59d1*/
        v4 = 0x4273756E6F426472LL; /*0x2e59d4*/
LABEL_16:
        *(_QWORD *)(v2 + 16) = v4; /*0x2e59dc*/
        *(_BYTE *)(v2 + 24) = 0; /*0x2e59e1*/
LABEL_17:
        *(_QWORD *)&v16 = v2; /*0x2e59e5*/
        v3 = (char *)v2; /*0x2e59e9*/
LABEL_18:
        v5 = 1; /*0x2e59ec*/
        while ( 1 ) /*0x2e5a00*/
        {
          v6 = (const char *)&v16; /*0x2e5a00*/
          if ( v18 > 0xF ) /*0x2e5a09*/
            v6 = v3; /*0x2e5a09*/
          v7 = cocos2d::CCString::createWithFormat("%s%02d", v6, v5); /*0x2e5a17*/
          CString = cocos2d::CCString::getCString(v7); /*0x2e5a20*/
          v14 = &v11; /*0x2e5a2a*/
          v11 = 0; /*0x2e5a31*/
          v12 = 0; /*0x2e5a35*/
          v13 = 0; /*0x2e5a39*/
          v9 = -1; /*0x2e5a3d*/
          do /*0x2e5a47*/
            ++v9; /*0x2e5a44*/
          while ( CString[v9] ); /*0x2e5a47*/
          sub_3C230(&v11); /*0x2e5a55*/
          v10 = qword_905FD0; /*0x2e5a5b*/
          if ( !qword_905FD0 ) /*0x2e5a65*/
          {
            v15 = operator new(0x6E8u); /*0x2e5a71*/
            qword_905FD0 = sub_2723A0(v15); /*0x2e5a7e*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2e5a8f*/
            v10 = qword_905FD0; /*0x2e5a91*/
          }
          sub_274C90(v10, &v11); /*0x2e5a9c*/
          if ( ++v5 > v1 ) /*0x2e5aa5*/
            break; /*0x2e5aa5*/
          v3 = (char *)v16; /*0x2e5aa7*/
        }
        sub_3C310(&v16); /*0x2e5ab4*/
        if ( ++v0 <= 12 ) /*0x2e5abe*/
          continue; /*0x2e5abe*/
        return;
    }
  }
}

// [32/47] Address: 0x2e5df0
// Method: GameStatsManager::getItemUnlockState
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameStatsManager_getItemUnlockState(__int64 a1, signed int a2, signed int a3)
{
  __int64 RewardKey; // rax
  __int64 v7; // rsi
  __int64 *v9; // r8
  __int64 *v10; // rax
  char v11; // dl
  __int64 *v12; // rcx
  _BYTE v13[32]; // [rsp+20h] [rbp-48h] BYREF

  RewardKey = GameStatsManager_getRewardKey(a1, (__int64)v13, a2, a3); /*0x2e5e1e*/
  v7 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 936), RewardKey); /*0x2e5e34*/
  sub_3C310(v13); /*0x2e5e3c*/
  if ( v7 ) /*0x2e5e44*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7); /*0x2e5e50*/
  v9 = *(__int64 **)(a1 + 976); /*0x2e5e54*/
  v10 = (__int64 *)v9[1]; /*0x2e5e5b*/
  if ( !*((_BYTE *)v10 + 25) ) /*0x2e5e5f*/
  {
    do /*0x2e5e8b*/
    {
      if ( *((_DWORD *)v10 + 7) < a3 || *((_DWORD *)v10 + 7) <= a3 && *((_DWORD *)v10 + 8) < a2 ) /*0x2e5e6f*/
      {
        v11 = 1; /*0x2e5e78*/
      }
      else
      {
        v11 = 0; /*0x2e5e71*/
        v9 = v10; /*0x2e5e73*/
      }
      v12 = v10 + 2; /*0x2e5e7a*/
      if ( !v11 ) /*0x2e5e80*/
        v12 = v10; /*0x2e5e80*/
      v10 = (__int64 *)*v12; /*0x2e5e84*/
    }
    while ( !*(_BYTE *)(*v12 + 25) ); /*0x2e5e8b*/
  }
  if ( *((_BYTE *)v9 + 25) || a3 < *((_DWORD *)v9 + 7) || a3 <= *((_DWORD *)v9 + 7) && a2 < *((_DWORD *)v9 + 8) ) /*0x2e5ea0*/
    return 0; /*0x2e5ea9*/
  else
    return 3; /*0x2e5ea2*/
}

// [33/47] Address: 0x2e5ed0
// Method: GameStatsManager::toggleEnableItem
// Hidden C++ exception states: #wind=1
double __fastcall GameStatsManager_toggleEnableItem(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v6; // rbx
  struct cocos2d::CCString *v7; // rax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF

  GameStatsManager_getRewardKey(a1, (__int64)v9, a3, a2); /*0x2e5ef8*/
  if ( a4 ) /*0x2e5f00*/
  {
    v6 = *(_QWORD *)(a1 + 896); /*0x2e5f02*/
    v7 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 1); /*0x2e5f15*/
    cocos2d::CCDictionary::setObject(v6, v7, v9); /*0x2e5f26*/
  }
  else
  {
    cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 896), v9); /*0x2e5f3a*/
  }
  return sub_3C310(v9); /*0x2e5f4b*/
}

// [34/47] Address: 0x2ea9f0
// Method: GameStatsManager::addSimpleSpecialChestReward
// Hidden C++ exception states: #wind=2
double __fastcall GameStatsManager_addSimpleSpecialChestReward(__int64 a1, __int64 a2, int a3, int a4)
{
  cocos2d::CCArray *v8; // rbp
  __int64 v9; // rbx
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v12; // [rsp+20h] [rbp-68h]
  __int128 v13; // [rsp+28h] [rbp-60h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = a2; /*0x2eaa1b*/
  v8 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x2eaa26*/
  v12 = (cocos2d::CCObject *)operator new(0x48u); /*0x2eaa36*/
  cocos2d::CCObject::CCObject(v12); /*0x2eaa3e*/
  *(_QWORD *)v12 = &GJRewardObject::`vftable'; /*0x2eaa4b*/
  *((_DWORD *)v12 + 14) = 9; /*0x2eaa4e*/
  *((_DWORD *)v12 + 16) = a4; /*0x2eaa55*/
  *((_DWORD *)v12 + 17) = 1; /*0x2eaa58*/
  cocos2d::CCObject::autorelease(v12); /*0x2eaa62*/
  *((_DWORD *)v12 + 15) = a3; /*0x2eaa68*/
  cocos2d::CCArray::addObject(v8, v12); /*0x2eaa71*/
  v13 = 0; /*0x2eaa7a*/
  v14 = 0; /*0x2eaa7f*/
  v15 = 15; /*0x2eaa88*/
  LOBYTE(v13) = 0; /*0x2eaa91*/
  v9 = GJRewardItem_create_0(0, 0, &v13); /*0x2eaaa4*/
  *(_DWORD *)(v9 + 64) = 2; /*0x2eaaa7*/
  if ( *(cocos2d::CCArray **)(v9 + 72) != v8 ) /*0x2eaab2*/
  {
    if ( v8 ) /*0x2eaab7*/
      cocos2d::CCObject::retain(v8); /*0x2eaabc*/
    v10 = *(cocos2d::CCObject **)(v9 + 72); /*0x2eaac2*/
    if ( v10 ) /*0x2eaac9*/
      cocos2d::CCObject::release(v10); /*0x2eaacb*/
    *(_QWORD *)(v9 + 72) = v8; /*0x2eaad1*/
  }
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 368), v9, a2); /*0x2eaae2*/
  return sub_3C310(a2); /*0x2eaaf1*/
}

// [35/47] Address: 0x2eac00
// Method: GameStatsManager::addSpecialRewardDescription
// Hidden C++ exception states: #wind=2
double __fastcall GameStatsManager_addSpecialRewardDescription(__int64 a1, __int64 a2, size_t *a3)
{
  size_t *v5; // rcx
  void *v6; // rdx
  char v8[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  size_t *v10; // [rsp+38h] [rbp-20h]

  v9 = a2; /*0x2eac1f*/
  v10 = a3; /*0x2eac24*/
  v5 = (size_t *)(*(_QWORD *)sub_2F6690(a1 + 384, v8, a2) + 48LL); /*0x2eac40*/
  if ( v5 != a3 ) /*0x2eac47*/
  {
    v6 = a3; /*0x2eac49*/
    if ( a3[3] > 0xF ) /*0x2eac51*/
      v6 = (void *)*a3; /*0x2eac53*/
    sub_3F5A0(v5, v6, a3[2]); /*0x2eac5a*/
  }
  sub_3C310(a2); /*0x2eac63*/
  return sub_3C310(a3); /*0x2eac71*/
}

// [36/47] Address: 0x2eae40
// Method: GameStatsManager::isSpecialChestUnlocked
// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall GameStatsManager_isSpecialChestUnlocked(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // r8
  bool v5; // di
  void *v6; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __m128i si128; // [rsp+48h] [rbp-20h]

  v2 = a2; /*0x2eae59*/
  if ( a2[3] > 0xFu ) /*0x2eae69*/
    a2 = (_QWORD *)*a2; /*0x2eae6b*/
  *(_OWORD *)Block = 0; /*0x2eae71*/
  si128 = 0; /*0x2eae79*/
  v4 = -1; /*0x2eae7f*/
  do /*0x2eae89*/
    ++v4; /*0x2eae86*/
  while ( *((_BYTE *)a2 + v4) ); /*0x2eae89*/
  sub_3C230(Block); /*0x2eae95*/
  v5 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 888), Block) != 0; /*0x2eaeb0*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x2eaebd*/
  {
    v6 = Block[0]; /*0x2eaec2*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x2eaed1*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x2eaed7*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x2eaee6*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2eaefb*/
    }
    j_j_free(v6); /*0x2eaf02*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x2eaf0f*/
  LOBYTE(Block[0]) = 0; /*0x2eaf15*/
  sub_3C310(v2); /*0x2eaf1d*/
  return v5; /*0x2eaf26*/
}

// [37/47] Address: 0x2eaf50
// Method: GameStatsManager::unlockSpecialChest
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameStatsManager_unlockSpecialChest(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-58h]
  _BYTE v8[32]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]

  v9 = a2; /*0x2eaf71*/
  v4 = (_QWORD *)sub_3E4F0(v8, a2); /*0x2eaf7b*/
  if ( GameStatsManager_isSpecialChestUnlocked(a1, v4) /*0x2eafc2*/
    || (v7 = sub_3E4F0(v8, a2), v5 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 368), v7), sub_3C310(v7), !v5) )
  {
    sub_3C310(a2); /*0x2eaffe*/
    return 0; /*0x2eb003*/
  }
  else
  {
    GameStatsManager_preProcessReward(a1, v5); /*0x2eafca*/
    GameStatsManager_registerRewardsFromItem(a1, v5); /*0x2eafd5*/
    cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 888), v5, a2); /*0x2eafe7*/
    sub_3C310(a2); /*0x2eaff1*/
    return v5; /*0x2eaff6*/
  }
}

// [38/47] Address: 0x2eb400
// Method: GameStatsManager::unlockSecretChest
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall GameStatsManager_unlockSecretChest(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  struct cocos2d::CCObject *v4; // rbx
  int Stat; // eax
  int v6; // edx
  int v7; // ecx
  cocos2d::CCString *v8; // rax
  const char *CString; // rax
  __int64 v10; // r8
  void *v11; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h]

  v2 = (int)a2; /*0x2eb41e*/
  if ( (unsigned __int8)sub_2EB320(a1, a2) ) /*0x2eb426*/
    return 0; /*0x2eb426*/
  v4 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 352), v2); /*0x2eb443*/
  if ( !v4 ) /*0x2eb449*/
    return 0; /*0x2eb449*/
  Stat = GameStatsManager_getStat(a1, (const char *)&word_732410); /*0x2eb459*/
  v6 = *((_DWORD *)v4 + 14); /*0x2eb45e*/
  if ( v6 <= 6000 ) /*0x2eb467*/
  {
    if ( v6 <= 5000 ) /*0x2eb476*/
    {
      if ( v6 <= 4000 ) /*0x2eb485*/
      {
        if ( v6 <= 3000 ) /*0x2eb494*/
        {
          if ( v6 <= 2000 ) /*0x2eb4a3*/
          {
            v7 = 1; /*0x2eb4ac*/
            if ( v6 > 1000 ) /*0x2eb4bd*/
              v7 = 5; /*0x2eb4bd*/
          }
          else
          {
            v7 = 10; /*0x2eb4a5*/
          }
        }
        else
        {
          v7 = 25; /*0x2eb496*/
        }
      }
      else
      {
        v7 = 50; /*0x2eb487*/
      }
    }
    else
    {
      v7 = 100; /*0x2eb478*/
    }
  }
  else
  {
    v7 = 1; /*0x2eb469*/
  }
  if ( Stat < v7 ) /*0x2eb4c3*/
    return 0; /*0x2eb5a9*/
  sub_2D7950(a1, &word_732410, (unsigned int)(Stat - v7)); /*0x2eb4d8*/
  GameStatsManager_preProcessReward(a1, (__int64)v4); /*0x2eb4e3*/
  GameStatsManager_registerRewardsFromItem(a1, v4); /*0x2eb4ee*/
  v8 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v2); /*0x2eb4fc*/
  CString = cocos2d::CCString::getCString(v8); /*0x2eb505*/
  *(_OWORD *)Block = 0; /*0x2eb50e*/
  v14 = 0; /*0x2eb516*/
  v10 = -1; /*0x2eb51c*/
  do /*0x2eb526*/
    ++v10; /*0x2eb523*/
  while ( CString[v10] ); /*0x2eb526*/
  sub_3C230(Block); /*0x2eb535*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 864), v4, Block); /*0x2eb54a*/
  if ( *((_QWORD *)&v14 + 1) > 0xFu ) /*0x2eb55a*/
  {
    v11 = Block[0]; /*0x2eb55f*/
    if ( (unsigned __int64)(*((_QWORD *)&v14 + 1) + 1LL) >= 0x1000 ) /*0x2eb56e*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x2eb574*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x2eb583*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2eb598*/
    }
    j_j_free(v11); /*0x2eb59f*/
  }
  return v4; /*0x2eb5ab*/
}

// [39/47] Address: 0x2eb5d0
// Method: GameStatsManager::createSecretChestRewards
void __fastcall GameStatsManager_createSecretChestRewards(__int64 a1)
{
  cocos2d::CCArray *v2; // rbp
  __int64 v3; // rcx
  signed int v4; // ebx
  __int64 v5; // rdi
  struct cocos2d::CCObject *Special; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rsi
  struct cocos2d::CCObject *v11; // rax
  struct cocos2d::CCObject *v12; // rax
  __int64 v13; // rsi
  struct cocos2d::CCObject *v14; // rax
  __int64 v15; // rsi
  struct cocos2d::CCObject *v16; // rax
  __int64 v17; // rsi
  struct cocos2d::CCObject *v18; // rax
  __int64 v19; // rsi
  struct cocos2d::CCObject *v20; // rax
  __int64 v21; // rsi
  struct cocos2d::CCObject *v22; // rax
  struct cocos2d::CCObject *v23; // rax
  __int64 v24; // rsi
  struct cocos2d::CCObject *v25; // rax
  __int64 v26; // rsi
  struct cocos2d::CCObject *v27; // rax
  __int64 v28; // rsi
  struct cocos2d::CCObject *v29; // rax
  __int64 v30; // rsi
  struct cocos2d::CCObject *v31; // rax
  stru... [178940 chars total]

// [40/47] Address: 0x2f2790
// Method: GameStatsManager::registerRewardsFromItem
// Hidden C++ exception states: #wind=14
void __fastcall GameStatsManager_registerRewardsFromItem(__int64 a1, __int64 a2)
{
  char v3; // r14
  cocos2d::CCArray *v4; // rsi
  unsigned int v5; // edi
  struct cocos2d::CCObject *v6; // rbx
  __int64 v7; // rcx
  __int16 *v8; // rdx
  void *v9; // [rsp+20h] [rbp-88h]
  void *v10; // [rsp+28h] [rbp-80h]
  void *v11; // [rsp+30h] [rbp-78h]
  void *v12; // [rsp+38h] [rbp-70h]
  void *v13; // [rsp+40h] [rbp-68h]
  void *v14; // [rsp+48h] [rbp-60h]
  void *v15; // [rsp+50h] [rbp-58h]
  void *v16; // [rsp+58h] [rbp-50h]
  void *v17; // [rsp+60h] [rbp-48h]
  void *v18; // [rsp+68h] [rbp-40h]
  void *v19; // [rsp+B0h] [rbp+8h]
  void *v20; // [rsp+B8h] [rbp+10h]
  void *v21; // [rsp+C0h] [rbp+18h]
  void *v22; // [rsp+C8h] [rbp+20h]

  v3 = *(_BYTE *)(a1 + 912); /*0x2f27a0*/
  *(_BYTE *)(a1 + 912) = 1; /*0x2f27a8*/
  v4 = *(cocos2d::CCArray **)(a2 + 72); /*0x2f27af*/
  if ( v4 ) /*0x2f27b6*/
  {
    v5 = 0; /*0x2f27bc*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a2 + 72)) ) /*0x2f27c1*/
    {
      do /*0x2f2c32*/
      {
        v6 = cocos2d::CCArray::objectAtIndex(v4, v5); /*0x2f27eb*/
        switch ( *((_DWORD *)v6 + 14) ) /*0x2f280a*/
        {
          case 1: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f28a6*/
            if ( !qword_905FE0 ) /*0x2f28b0*/
            {
              v21 = operator new(0x3E8u); /*0x2f28bc*/
              qword_905FE0 = sub_2D2B40(v21); /*0x2f28cd*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f28de*/
              v7 = qword_905FE0; /*0x2f28e0*/
            }
            v8 = &word_732D90; /*0x2f28e7*/
            goto LABEL_46; /*0x2f28ee*/
          case 2: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f28f3*/
            if ( !qword_905FE0 ) /*0x2f28fd*/
            {
              v22 = operator new(0x3E8u); /*0x2f2909*/
              qword_905FE0 = sub_2D2B40(v22); /*0x2f291a*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f292b*/
              v7 = qword_905FE0; /*0x2f292d*/
            }
            v8 = &word_732D8C; /*0x2f2934*/
            goto LABEL_46; /*0x2f293b*/
          case 3: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2940*/
            if ( !qword_905FE0 ) /*0x2f294a*/
            {
              v9 = operator new(0x3E8u); /*0x2f2956*/
              qword_905FE0 = sub_2D2B40(v9); /*0x2f2964*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2975*/
              v7 = qword_905FE0; /*0x2f2977*/
            }
            v8 = &word_732CC4; /*0x2f297e*/
            goto LABEL_46; /*0x2f2985*/
          case 4: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f298a*/
            if ( !qword_905FE0 ) /*0x2f2994*/
            {
              v10 = operator new(0x3E8u); /*0x2f29a0*/
              qword_905FE0 = sub_2D2B40(v10); /*0x2f29ae*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f29bf*/
              v7 = qword_905FE0; /*0x2f29c1*/
            }
            v8 = &word_732CC0; /*0x2f29c8*/
            goto LABEL_46; /*0x2f29cf*/
          case 5: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f29d4*/
            if ( !qword_905FE0 ) /*0x2f29de*/
            {
              v11 = operator new(0x3E8u); /*0x2f29ea*/
              qword_905FE0 = sub_2D2B40(v11); /*0x2f29f8*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2a09*/
              v7 = qword_905FE0; /*0x2f2a0b*/
            }
            v8 = &word_732CCC; /*0x2f2a12*/
            goto LABEL_46; /*0x2f2a19*/
          case 6: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2a1e*/
            if ( !qword_905FE0 ) /*0x2f2a28*/
            {
              v12 = operator new(0x3E8u); /*0x2f2a34*/
              qword_905FE0 = sub_2D2B40(v12); /*0x2f2a42*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2a53*/
              v7 = qword_905FE0; /*0x2f2a55*/
            }
            v8 = &word_732410; /*0x2f2a5c*/
            goto LABEL_46; /*0x2f2a63*/
          case 7: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f280c*/
            if ( !qword_905FE0 ) /*0x2f2816*/
            {
              v19 = operator new(0x3E8u); /*0x2f2822*/
              qword_905FE0 = sub_2D2B40(v19); /*0x2f2833*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2844*/
              v7 = qword_905FE0; /*0x2f2846*/
            }
            v8 = &word_732AF4; /*0x2f284d*/
            goto LABEL_46; /*0x2f2854*/
          case 8: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2859*/
            if ( !qword_905FE0 ) /*0x2f2863*/
            {
              v20 = operator new(0x3E8u); /*0x2f286f*/
              qword_905FE0 = sub_2D2B40(v20); /*0x2f2880*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2891*/
              v7 = qword_905FE0; /*0x2f2893*/
            }
            v8 = (__int16 *)"13"; /*0x2f289a*/
            goto LABEL_46; /*0x2f28a1*/
          case 0xA: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2ab2*/
            if ( !qword_905FE0 ) /*0x2f2abc*/
            {
              v14 = operator new(0x3E8u); /*0x2f2ac8*/
              qword_905FE0 = sub_2D2B40(v14); /*0x2f2ad6*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2ae7*/
              v7 = qword_905FE0; /*0x2f2ae9*/
            }
            v8 = (__int16 *)&unk_732CC8; /*0x2f2af0*/
            goto LABEL_46; /*0x2f2af7*/
          case 0xB: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2b46*/
            if ( !qword_905FE0 ) /*0x2f2b50*/
            {
              v16 = operator new(0x3E8u); /*0x2f2b5c*/
              qword_905FE0 = sub_2D2B40(v16); /*0x2f2b6a*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2b7b*/
              v7 = qword_905FE0; /*0x2f2b7d*/
            }
            v8 = (__int16 *)&unk_732CD4; /*0x2f2b84*/
            goto LABEL_46; /*0x2f2b8b*/
          case 0xC: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2afc*/
            if ( !qword_905FE0 ) /*0x2f2b06*/
            {
              v15 = operator new(0x3E8u); /*0x2f2b12*/
              qword_905FE0 = sub_2D2B40(v15); /*0x2f2b20*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2b31*/
              v7 = qword_905FE0; /*0x2f2b33*/
            }
            v8 = &word_732CD0; /*0x2f2b3a*/
            goto LABEL_46; /*0x2f2b41*/
          case 0xD: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2b90*/
            if ( !qword_905FE0 ) /*0x2f2b9a*/
            {
              v17 = operator new(0x3E8u); /*0x2f2ba6*/
              qword_905FE0 = sub_2D2B40(v17); /*0x2f2bb4*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2bc5*/
              v7 = qword_905FE0; /*0x2f2bc7*/
            }
            v8 = (__int16 *)&unk_732CDC; /*0x2f2bce*/
            goto LABEL_46; /*0x2f2bd5*/
          case 0xE: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2bd7*/
            if ( !qword_905FE0 ) /*0x2f2be1*/
            {
              v18 = operator new(0x3E8u); /*0x2f2bed*/
              qword_905FE0 = sub_2D2B40(v18); /*0x2f2bfb*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2c0c*/
              v7 = qword_905FE0; /*0x2f2c0e*/
            }
            v8 = (__int16 *)&unk_732CD8; /*0x2f2c15*/
            goto LABEL_46; /*0x2f2c15*/
          case 0xF: /*0x2f280a*/
            v7 = qword_905FE0; /*0x2f2a68*/
            if ( !qword_905FE0 ) /*0x2f2a72*/
            {
              v13 = operator new(0x3E8u); /*0x2f2a7e*/
              qword_905FE0 = sub_2D2B40(v13); /*0x2f2a8c*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f2a9d*/
              v7 = qword_905FE0; /*0x2f2a9f*/
            }
            v8 = &word_732D94; /*0x2f2aa6*/
LABEL_46:
            GameStatsManager_incrementStat(v7, (const char *)v8, *((_DWORD *)v6 + 17)); /*0x2f2c1c*/
            break; /*0x2f2c20*/
          default:
            break;
        }
        ++v5; /*0x2f2c25*/
      }
      while ( v5 < cocos2d::CCArray::count(v4) ); /*0x2f2c32*/
    }
    *(_BYTE *)(a1 + 912) = v3; /*0x2f2c38*/
  }
  else
  {
    *(_BYTE *)(a1 + 912) = v3; /*0x2f2c4c*/
  }
}

// [41/47] Address: 0x2f2ca0
// Method: GameStatsManager::awardSecretKey
char __fastcall GameStatsManager_awardSecretKey(_DWORD *a1)
{
  int Stat; // eax
  int v3; // ebx
  int v5; // ebx
  float v6; // xmm0_4

  Stat = GameStatsManager_getStat((__int64)a1, "22"); /*0x2f2cb9*/
  v3 = a1[218] - a1[219]; /*0x2f2cc4*/
  if ( floorf((float)Stat / 500.0) <= (float)v3 ) /*0x2f2ce8*/
    return 0; /*0x2f2cea*/
  v5 = v3 + 1; /*0x2f2cfc*/
  a1[220] = v5; /*0x2f2cfe*/
  v6 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2f2d29*/
  a1[219] = (int)v6; /*0x2f2d35*/
  a1[218] = v5 + (int)v6; /*0x2f2d3d*/
  GameStatsManager_incrementStat((__int64)a1, (const char *)&word_732410, 1u); /*0x2f2d43*/
  return 1; /*0x2f2cec*/
}

// [42/47] Address: 0x2f2d60
// Method: GameStatsManager::firstSetup
__int64 __fastcall GameStatsManager_firstSetup(__int64 a1)
{
  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rdi
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rax
  cocos2d::CCObject *v6; // rdi
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rax
  cocos2d::CCObject *v9; // rdi
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rax
  cocos2d::CCObject *v12; // rdi
  cocos2d::CCObject *v13; // rcx
  cocos2d::CCObject *v14; // rax
  cocos2d::CCObject *v15; // rdi
  cocos2d::CCObject *v16; // rcx
  cocos2d::CCObject *v17; // rax
  cocos2d::CCObject *v18; // rdi
  cocos2d::CCObject *v19; // rcx
  cocos2d::CCObject *v20; // rax
  cocos2d::CCObject *v21; // rdi
  cocos2d::CCObject *v22; // rcx
  cocos2d::CCObject *v23; // rax
  cocos2d::CCObject *v24; // rdi
  cocos2d::CCObject *v25; // rcx
  cocos2d::CCObject *v26; // rax
  cocos2d::CCObject *v27; // rdi
  cocos2d::CCObject *v28; // rcx
  cocos2d::CCObject *v29; // rax
  cocos2d::CCObject *v30; // rdi
  cocos2d::CCObject *v31; // rcx
  cocos2d::CCObject *v32; // rax
  cocos2d::CCObject *v33; // rdi
  cocos2d::CCObject *v34; // rcx
  cocos2d::CCObject *v35; // rax
  cocos2d::CCObject *v36; // rdi
  cocos2d::CCObject *v37; // rcx
  cocos2d::CCObject *v38; // rax
  cocos2d::CCObject *v39; // rdi
  cocos2d::CCObject *v40; // rcx
  cocos2d::CCObject *v41; // rax
  cocos2d::CCObject *v42; // rdi
  cocos2d::CCObject *v43; // rcx
  cocos2d::CCObject *v44; // rax
  cocos2d::CCObject *v45; // rdi
  cocos2d::CCObject *v46; // rcx
  cocos2d::CCObject *v47; // rax
  cocos2d::CCObject *v48; // rdi
  cocos2d::CCObject *v49; // rcx
  cocos2d::CCObject *v50; // rax
  cocos2d::CCObject *v51; // rdi
  cocos2d::CCObject *v52; // rcx
  cocos2d::CCObject *v53; // rax
  cocos2d::CCObject *v54; // rdi
  cocos2d::CCObject *v55; // rcx
  cocos2d::CCObject *v56; // rax
  cocos2d::CCObject *v57; // rdi
  cocos2d::CCObject *v58; // rcx
  cocos2d::CCObject *v59; // rax
  cocos2d::CCObject *v60; // rdi
  cocos2d::CCObject *v61; // rcx
  cocos2d::CCObject *v62; // rax
  cocos2d::CCObject *v63; // rdi
  cocos2d::CCObject *v64; // rcx
  cocos2d::CCObject *v65; // rax
  cocos2d::CCObject *v66; // rdi
  cocos2d::CCObject *v67; // rcx
  cocos2d::CCObject *v68; // rax
  cocos2d::CCObject *v69; // rdi
  cocos2d::CCObject *v70; // rcx
  cocos2d::CCObject *v71; // rax
  cocos2d::CCObject *v72; // rdi
  cocos2d::CCObject *v73; // rcx
  cocos2d::CCObject *v74; // rax
  cocos2d::CCObject *v75; // rdi
  cocos2d::CCObject *v76; // rcx
  cocos2d::CCObject *v77; // rax
  cocos2d::CCObject *v78; // rdi
  cocos2d::CCObject *v79; // rcx
  cocos2d::CCObject *v80; // rax
  cocos2d::CCObject *v81; // rdi
  cocos2d::CCObject *v82; // rcx
  cocos2d::CCObject *v83; // rax
  cocos2d::CCObject *v84; // rdi
  cocos2d::CCObject *v85; // rcx
  cocos2d::CCObject *v86; // rax
  cocos2d::CCObject *v87; // rdi
  cocos2d::CCObject *v88; // rcx
  cocos2d::CCObject *v89; // rax
  cocos2d::CCObject *v90; // rdi
  cocos2d::CCObject *v91; // rcx
  float v92; // xmm0_4
  __int64 result; // rax

  v2 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2d6d*/
  v3 = v2; /*0x2f2d73*/
  if ( *(cocos2d::CCObject **)(a1 + 576) != v2 ) /*0x2f2d7d*/
  {
    if ( v2 ) /*0x2f2d82*/
      cocos2d::CCObject::retain(v2); /*0x2f2d87*/
    v4 = *(cocos2d::CCObject **)(a1 + 576); /*0x2f2d8d*/
    if ( v4 ) /*0x2f2d97*/
      cocos2d::CCObject::release(v4); /*0x2f2d99*/
    *(_QWORD *)(a1 + 576) = v3; /*0x2f2d9f*/
  }
  v5 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2da6*/
  v6 = v5; /*0x2f2dac*/
  if ( *(cocos2d::CCObject **)(a1 + 712) != v5 ) /*0x2f2db6*/
  {
    if ( v5 ) /*0x2f2dbb*/
      cocos2d::CCObject::retain(v5); /*0x2f2dc0*/
    v7 = *(cocos2d::CCObject **)(a1 + 712); /*0x2f2dc6*/
    if ( v7 ) /*0x2f2dd0*/
      cocos2d::CCObject::release(v7); /*0x2f2dd2*/
    *(_QWORD *)(a1 + 712) = v6; /*0x2f2dd8*/
  }
  v8 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2ddf*/
  v9 = v8; /*0x2f2de5*/
  if ( *(cocos2d::CCObject **)(a1 + 720) != v8 ) /*0x2f2def*/
  {
    if ( v8 ) /*0x2f2df4*/
      cocos2d::CCObject::retain(v8); /*0x2f2df9*/
    v10 = *(cocos2d::CCObject **)(a1 + 720); /*0x2f2dff*/
    if ( v10 ) /*0x2f2e09*/
      cocos2d::CCObject::release(v10); /*0x2f2e0b*/
    *(_QWORD *)(a1 + 720) = v9; /*0x2f2e11*/
  }
  v11 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2e18*/
  v12 = v11; /*0x2f2e1e*/
  if ( *(cocos2d::CCObject **)(a1 + 728) != v11 ) /*0x2f2e28*/
  {
    if ( v11 ) /*0x2f2e2d*/
      cocos2d::CCObject::retain(v11); /*0x2f2e32*/
    v13 = *(cocos2d::CCObject **)(a1 + 728); /*0x2f2e38*/
    if ( v13 ) /*0x2f2e42*/
      cocos2d::CCObject::release(v13); /*0x2f2e44*/
    *(_QWORD *)(a1 + 728) = v12; /*0x2f2e4a*/
  }
  v14 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2e51*/
  v15 = v14; /*0x2f2e57*/
  if ( *(cocos2d::CCObject **)(a1 + 824) != v14 ) /*0x2f2e61*/
  {
    if ( v14 ) /*0x2f2e66*/
      cocos2d::CCObject::retain(v14); /*0x2f2e6b*/
    v16 = *(cocos2d::CCObject **)(a1 + 824); /*0x2f2e71*/
    if ( v16 ) /*0x2f2e7b*/
      cocos2d::CCObject::release(v16); /*0x2f2e7d*/
    *(_QWORD *)(a1 + 824) = v15; /*0x2f2e83*/
  }
  v17 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2e8a*/
  v18 = v17; /*0x2f2e90*/
  if ( *(cocos2d::CCObject **)(a1 + 736) != v17 ) /*0x2f2e9a*/
  {
    if ( v17 ) /*0x2f2e9f*/
      cocos2d::CCObject::retain(v17); /*0x2f2ea4*/
    v19 = *(cocos2d::CCObject **)(a1 + 736); /*0x2f2eaa*/
    if ( v19 ) /*0x2f2eb4*/
      cocos2d::CCObject::release(v19); /*0x2f2eb6*/
    *(_QWORD *)(a1 + 736) = v18; /*0x2f2ebc*/
  }
  v20 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2ec3*/
  v21 = v20; /*0x2f2ec9*/
  if ( *(cocos2d::CCObject **)(a1 + 744) != v20 ) /*0x2f2ed3*/
  {
    if ( v20 ) /*0x2f2ed8*/
      cocos2d::CCObject::retain(v20); /*0x2f2edd*/
    v22 = *(cocos2d::CCObject **)(a1 + 744); /*0x2f2ee3*/
    if ( v22 ) /*0x2f2eed*/
      cocos2d::CCObject::release(v22); /*0x2f2eef*/
    *(_QWORD *)(a1 + 744) = v21; /*0x2f2ef5*/
  }
  v23 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2efc*/
  v24 = v23; /*0x2f2f02*/
  if ( *(cocos2d::CCObject **)(a1 + 760) != v23 ) /*0x2f2f0c*/
  {
    if ( v23 ) /*0x2f2f11*/
      cocos2d::CCObject::retain(v23); /*0x2f2f16*/
    v25 = *(cocos2d::CCObject **)(a1 + 760); /*0x2f2f1c*/
    if ( v25 ) /*0x2f2f26*/
      cocos2d::CCObject::release(v25); /*0x2f2f28*/
    *(_QWORD *)(a1 + 760) = v24; /*0x2f2f2e*/
  }
  v26 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2f35*/
  v27 = v26; /*0x2f2f3b*/
  if ( *(cocos2d::CCObject **)(a1 + 808) != v26 ) /*0x2f2f45*/
  {
    if ( v26 ) /*0x2f2f4a*/
      cocos2d::CCObject::retain(v26); /*0x2f2f4f*/
    v28 = *(cocos2d::CCObject **)(a1 + 808); /*0x2f2f55*/
    if ( v28 ) /*0x2f2f5f*/
      cocos2d::CCObject::release(v28); /*0x2f2f61*/
    *(_QWORD *)(a1 + 808) = v27; /*0x2f2f67*/
  }
  v29 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2f6e*/
  v30 = v29; /*0x2f2f74*/
  if ( *(cocos2d::CCObject **)(a1 + 776) != v29 ) /*0x2f2f7e*/
  {
    if ( v29 ) /*0x2f2f83*/
      cocos2d::CCObject::retain(v29); /*0x2f2f88*/
    v31 = *(cocos2d::CCObject **)(a1 + 776); /*0x2f2f8e*/
    if ( v31 ) /*0x2f2f98*/
      cocos2d::CCObject::release(v31); /*0x2f2f9a*/
    *(_QWORD *)(a1 + 776) = v30; /*0x2f2fa0*/
  }
  v32 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2fa7*/
  v33 = v32; /*0x2f2fad*/
  if ( *(cocos2d::CCObject **)(a1 + 752) != v32 ) /*0x2f2fb7*/
  {
    if ( v32 ) /*0x2f2fbc*/
      cocos2d::CCObject::retain(v32); /*0x2f2fc1*/
    v34 = *(cocos2d::CCObject **)(a1 + 752); /*0x2f2fc7*/
    if ( v34 ) /*0x2f2fd1*/
      cocos2d::CCObject::release(v34); /*0x2f2fd3*/
    *(_QWORD *)(a1 + 752) = v33; /*0x2f2fd9*/
  }
  v35 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f2fe0*/
  v36 = v35; /*0x2f2fe6*/
  if ( *(cocos2d::CCObject **)(a1 + 768) != v35 ) /*0x2f2ff0*/
  {
    if ( v35 ) /*0x2f2ff5*/
      cocos2d::CCObject::retain(v35); /*0x2f2ffa*/
    v37 = *(cocos2d::CCObject **)(a1 + 768); /*0x2f3000*/
    if ( v37 ) /*0x2f300a*/
      cocos2d::CCObject::release(v37); /*0x2f300c*/
    *(_QWORD *)(a1 + 768) = v36; /*0x2f3012*/
  }
  v38 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f3019*/
  v39 = v38; /*0x2f301f*/
  if ( *(cocos2d::CCObject **)(a1 + 784) != v38 ) /*0x2f3029*/
  {
    if ( v38 ) /*0x2f302e*/
      cocos2d::CCObject::retain(v38); /*0x2f3033*/
    v40 = *(cocos2d::CCObject **)(a1 + 784); /*0x2f3039*/
    if ( v40 ) /*0x2f3043*/
      cocos2d::CCObject::release(v40); /*0x2f3045*/
    *(_QWORD *)(a1 + 784) = v39; /*0x2f304b*/
  }
  v41 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f3052*/
  v42 = v41; /*0x2f3058*/
  if ( *(cocos2d::CCObject **)(a1 + 792) != v41 ) /*0x2f3062*/
  {
    if ( v41 ) /*0x2f3067*/
      cocos2d::CCObject::retain(v41); /*0x2f306c*/
    v43 = *(cocos2d::CCObject **)(a1 + 792); /*0x2f3072*/
    if ( v43 ) /*0x2f307c*/
      cocos2d::CCObject::release(v43); /*0x2f307e*/
    *(_QWORD *)(a1 + 792) = v42; /*0x2f3084*/
  }
  v44 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f308b*/
  v45 = v44; /*0x2f3091*/
  if ( *(cocos2d::CCObject **)(a1 + 800) != v44 ) /*0x2f309b*/
  {
    if ( v44 ) /*0x2f30a0*/
      cocos2d::CCObject::retain(v44); /*0x2f30a5*/
    v46 = *(cocos2d::CCObject **)(a1 + 800); /*0x2f30ab*/
    if ( v46 ) /*0x2f30b5*/
      cocos2d::CCObject::release(v46); /*0x2f30b7*/
    *(_QWORD *)(a1 + 800) = v45; /*0x2f30bd*/
  }
  v47 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f30c4*/
  v48 = v47; /*0x2f30ca*/
  if ( *(cocos2d::CCObject **)(a1 + 536) != v47 ) /*0x2f30d4*/
  {
    if ( v47 ) /*0x2f30d9*/
      cocos2d::CCObject::retain(v47); /*0x2f30de*/
    v49 = *(cocos2d::CCObject **)(a1 + 536); /*0x2f30e4*/
    if ( v49 ) /*0x2f30ee*/
      cocos2d::CCObject::release(v49); /*0x2f30f0*/
    *(_QWORD *)(a1 + 536) = v48; /*0x2f30f6*/
  }
  v50 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f30fd*/
  v51 = v50; /*0x2f3103*/
  if ( *(cocos2d::CCObject **)(a1 + 528) != v50 ) /*0x2f310d*/
  {
    if ( v50 ) /*0x2f3112*/
      cocos2d::CCObject::retain(v50); /*0x2f3117*/
    v52 = *(cocos2d::CCObject **)(a1 + 528); /*0x2f311d*/
    if ( v52 ) /*0x2f3127*/
      cocos2d::CCObject::release(v52); /*0x2f3129*/
    *(_QWORD *)(a1 + 528) = v51; /*0x2f312f*/
  }
  v53 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f3136*/
  v54 = v53; /*0x2f313c*/
  if ( *(cocos2d::CCObject **)(a1 + 544) != v53 ) /*0x2f3146*/
  {
    if ( v53 ) /*0x2f314b*/
      cocos2d::CCObject::retain(v53); /*0x2f3150*/
    v55 = *(cocos2d::CCObject **)(a1 + 544); /*0x2f3156*/
    if ( v55 ) /*0x2f3160*/
      cocos2d::CCObject::release(v55); /*0x2f3162*/
    *(_QWORD *)(a1 + 544) = v54; /*0x2f3168*/
  }
  v56 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f316f*/
  v57 = v56; /*0x2f3175*/
  if ( *(cocos2d::CCObject **)(a1 + 552) != v56 ) /*0x2f317f*/
  {
    if ( v56 ) /*0x2f3184*/
      cocos2d::CCObject::retain(v56); /*0x2f3189*/
    v58 = *(cocos2d::CCObject **)(a1 + 552); /*0x2f318f*/
    if ( v58 ) /*0x2f3199*/
      cocos2d::CCObject::release(v58); /*0x2f319b*/
    *(_QWORD *)(a1 + 552) = v57; /*0x2f31a1*/
  }
  v59 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f31a8*/
  v60 = v59; /*0x2f31ae*/
  if ( *(cocos2d::CCObject **)(a1 + 560) != v59 ) /*0x2f31b8*/
  {
    if ( v59 ) /*0x2f31bd*/
      cocos2d::CCObject::retain(v59); /*0x2f31c2*/
    v61 = *(cocos2d::CCObject **)(a1 + 560); /*0x2f31c8*/
    if ( v61 ) /*0x2f31d2*/
      cocos2d::CCObject::release(v61); /*0x2f31d4*/
    *(_QWORD *)(a1 + 560) = v60; /*0x2f31da*/
  }
  v62 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f31e1*/
  v63 = v62; /*0x2f31e7*/
  if ( *(cocos2d::CCObject **)(a1 + 816) != v62 ) /*0x2f31f1*/
  {
    if ( v62 ) /*0x2f31f6*/
      cocos2d::CCObject::retain(v62); /*0x2f31fb*/
    v64 = *(cocos2d::CCObject **)(a1 + 816); /*0x2f3201*/
    if ( v64 ) /*0x2f320b*/
      cocos2d::CCObject::release(v64); /*0x2f320d*/
    *(_QWORD *)(a1 + 816) = v63; /*0x2f3213*/
  }
  v65 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f321a*/
  v66 = v65; /*0x2f3220*/
  if ( *(cocos2d::CCObject **)(a1 + 832) != v65 ) /*0x2f322a*/
  {
    if ( v65 ) /*0x2f322f*/
      cocos2d::CCObject::retain(v65); /*0x2f3234*/
    v67 = *(cocos2d::CCObject **)(a1 + 832); /*0x2f323a*/
    if ( v67 ) /*0x2f3244*/
      cocos2d::CCObject::release(v67); /*0x2f3246*/
    *(_QWORD *)(a1 + 832) = v66; /*0x2f324c*/
  }
  v68 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f3253*/
  v69 = v68; /*0x2f3259*/
  if ( *(cocos2d::CCObject **)(a1 + 864) != v68 ) /*0x2f3263*/
  {
    if ( v68 ) /*0x2f3268*/
      cocos2d::CCObject::retain(v68); /*0x2f326d*/
    v70 = *(cocos2d::CCObject **)(a1 + 864); /*0x2f3273*/
    if ( v70 ) /*0x2f327d*/
      cocos2d::CCObject::release(v70); /*0x2f327f*/
    *(_QWORD *)(a1 + 864) = v69; /*0x2f3285*/
  }
  v71 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f328c*/
  v72 = v71; /*0x2f3292*/
  if ( *(cocos2d::CCObject **)(a1 + 888) != v71 ) /*0x2f329c*/
  {
    if ( v71 ) /*0x2f32a1*/
      cocos2d::CCObject::retain(v71); /*0x2f32a6*/
    v73 = *(cocos2d::CCObject **)(a1 + 888); /*0x2f32ac*/
    if ( v73 ) /*0x2f32b6*/
      cocos2d::CCObject::release(v73); /*0x2f32b8*/
    *(_QWORD *)(a1 + 888) = v72; /*0x2f32be*/
  }
  v74 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f32c5*/
  v75 = v74; /*0x2f32cb*/
  if ( *(cocos2d::CCObject **)(a1 + 896) != v74 ) /*0x2f32d5*/
  {
    if ( v74 ) /*0x2f32da*/
      cocos2d::CCObject::retain(v74); /*0x2f32df*/
    v76 = *(cocos2d::CCObject **)(a1 + 896); /*0x2f32e5*/
    if ( v76 ) /*0x2f32ef*/
      cocos2d::CCObject::release(v76); /*0x2f32f1*/
    *(_QWORD *)(a1 + 896) = v75; /*0x2f32f7*/
  }
  v77 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f32fe*/
  v78 = v77; /*0x2f3304*/
  if ( *(cocos2d::CCObject **)(a1 + 904) != v77 ) /*0x2f330e*/
  {
    if ( v77 ) /*0x2f3313*/
      cocos2d::CCObject::retain(v77); /*0x2f3318*/
    v79 = *(cocos2d::CCObject **)(a1 + 904); /*0x2f331e*/
    if ( v79 ) /*0x2f3328*/
      cocos2d::CCObject::release(v79); /*0x2f332a*/
    *(_QWORD *)(a1 + 904) = v78; /*0x2f3330*/
  }
  v80 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f3337*/
  v81 = v80; /*0x2f333d*/
  if ( *(cocos2d::CCObject **)(a1 + 840) != v80 ) /*0x2f3347*/
  {
    if ( v80 ) /*0x2f334c*/
      cocos2d::CCObject::retain(v80); /*0x2f3351*/
    v82 = *(cocos2d::CCObject **)(a1 + 840); /*0x2f3357*/
    if ( v82 ) /*0x2f3361*/
      cocos2d::CCObject::release(v82); /*0x2f3363*/
    *(_QWORD *)(a1 + 840) = v81; /*0x2f3369*/
  }
  v83 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f3370*/
  v84 = v83; /*0x2f3376*/
  if ( *(cocos2d::CCObject **)(a1 + 848) != v83 ) /*0x2f3380*/
  {
    if ( v83 ) /*0x2f3385*/
      cocos2d::CCObject::retain(v83); /*0x2f338a*/
    v85 = *(cocos2d::CCObject **)(a1 + 848); /*0x2f3390*/
    if ( v85 ) /*0x2f339a*/
      cocos2d::CCObject::release(v85); /*0x2f339c*/
    *(_QWORD *)(a1 + 848) = v84; /*0x2f33a2*/
  }
  v86 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f33a9*/
  v87 = v86; /*0x2f33af*/
  if ( *(cocos2d::CCObject **)(a1 + 856) != v86 ) /*0x2f33b9*/
  {
    if ( v86 ) /*0x2f33be*/
      cocos2d::CCObject::retain(v86); /*0x2f33c3*/
    v88 = *(cocos2d::CCObject **)(a1 + 856); /*0x2f33c9*/
    if ( v88 ) /*0x2f33d3*/
      cocos2d::CCObject::release(v88); /*0x2f33d5*/
    *(_QWORD *)(a1 + 856) = v87; /*0x2f33db*/
  }
  v89 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2f33e2*/
  v90 = v89; /*0x2f33e8*/
  if ( *(cocos2d::CCObject **)(a1 + 920) != v89 ) /*0x2f33f2*/
  {
    if ( v89 ) /*0x2f33f7*/
      cocos2d::CCObject::retain(v89); /*0x2f33fc*/
    v91 = *(cocos2d::CCObject **)(a1 + 920); /*0x2f3402*/
    if ( v91 ) /*0x2f340c*/
      cocos2d::CCObject::release(v91); /*0x2f340e*/
    *(_QWORD *)(a1 + 920) = v90; /*0x2f3414*/
  }
  *(_DWORD *)(a1 + 880) = 0; /*0x2f341d*/
  v92 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2f343f*/
  *(_DWORD *)(a1 + 876) = (int)v92; /*0x2f344b*/
  *(_DWORD *)(a1 + 872) = (int)v92; /*0x2f3451*/
  sub_3DB60(a1 + 584); /*0x2f3457*/
  result = sub_3DB60(a1 + 648); /*0x2f3463*/
  *(_BYTE *)(a1 + 992) = 0; /*0x2f3468*/
  *(_DWORD *)(a1 + 996) = 0; /*0x2f346f*/
  return result; /*0x2f3475*/
}

// [43/47] Address: 0x2f3480
// Method: GameStatsManager::encodeDataTo
void __fastcall GameStatsManager_encodeDataTo(__int64 a1, DS_Dictionary *a2)
{
  sub_2F4E70(); /*0x2f3490*/
  DS_Dictionary::setDictForKey(a2, "GS_value", *(struct cocos2d::CCDictionary **)(a1 + 576)); /*0x2f34a6*/
  DS_Dictionary::setDictForKey(a2, "GS_completed", *(struct cocos2d::CCDictionary **)(a1 + 712)); /*0x2f34bd*/
  DS_Dictionary::setDictForKey(a2, "GS_3", *(struct cocos2d::CCDictionary **)(a1 + 720)); /*0x2f34d4*/
  DS_Dictionary::setDictForKey(a2, "GS_4", *(struct cocos2d::CCDictionary **)(a1 + 728)); /*0x2f34eb*/
  DS_Dictionary::setDictForKey(a2, "GS_5", *(struct cocos2d::CCDictionary **)(a1 + 824)); /*0x2f3502*/
  DS_Dictionary::setDictForKey(a2, "GS_6", *(struct cocos2d::CCDictionary **)(a1 + 736)); /*0x2f3519*/
  DS_Dictionary::setDictForKey(a2, "GS_7", *(struct cocos2d::CCDictionary **)(a1 + 744)); /*0x2f3530*/
  DS_Dictionary::setDictForKey(a2, "GS_23", *(struct cocos2d::CCDictionary **)(a1 + 760)); /*0x2f3547*/
  DS_Dictionary::setDictForKey(a2, "GS_8", *(struct cocos2d::CCDictionary **)(a1 + 808)); /*0x2f355e*/
  DS_Dictionary::setDictForKey(a2, "GS_9", *(struct cocos2d::CCDictionary **)(a1 + 776)); /*0x2f3575*/
  DS_Dictionary::setDictForKey(a2, "GS_10", *(struct cocos2d::CCDictionary **)(a1 + 752)); /*0x2f358c*/
  DS_Dictionary::setDictForKey(a2, "GS_16", *(struct cocos2d::CCDictionary **)(a1 + 768)); /*0x2f35a3*/
  DS_Dictionary::setDictForKey(a2, "GS_17", *(struct cocos2d::CCDictionary **)(a1 + 784)); /*0x2f35ba*/
  DS_Dictionary::setDictForKey(a2, "GS_18", *(struct cocos2d::CCDictionary **)(a1 + 792)); /*0x2f35d1*/
  DS_Dictionary::setDictForKey(a2, "GS_24", *(struct cocos2d::CCDictionary **)(a1 + 800)); /*0x2f35e8*/
  DS_Dictionary::setDictForKey(a2, "GS_11", *(struct cocos2d::CCDictionary **)(a1 + 536)); /*0x2f35ff*/
  DS_Dictionary::setDictForKey(a2, "GS_22", *(struct cocos2d::CCDictionary **)(a1 + 544)); /*0x2f3616*/
  DS_Dictionary::setDictForKey(a2, "GS_25", *(struct cocos2d::CCDictionary **)(a1 + 840)); /*0x2f362d*/
  DS_Dictionary::setDictForKey(a2, "GS_31", *(struct cocos2d::CCDictionary **)(a1 + 848)); /*0x2f3644*/
  DS_Dictionary::setDictForKey(a2, "GS_33", *(struct cocos2d::CCDictionary **)(a1 + 856)); /*0x2f365b*/
  DS_Dictionary::setDictForKey(a2, "GS_12", *(struct cocos2d::CCDictionary **)(a1 + 552)); /*0x2f3672*/
  DS_Dictionary::setDictForKey(a2, "GS_15", *(struct cocos2d::CCDictionary **)(a1 + 560)); /*0x2f3689*/
  DS_Dictionary::setDictForKey(a2, "GS_14", *(struct cocos2d::CCDictionary **)(a1 + 816)); /*0x2f36a0*/
  DS_Dictionary::setDictForKey(a2, "GS_27", *(struct cocos2d::CCDictionary **)(a1 + 832)); /*0x2f36b7*/
  DS_Dictionary::setDictForKey(a2, "GS_19", *(struct cocos2d::CCDictionary **)(a1 + 864)); /*0x2f36ce*/
  DS_Dictionary::setDictForKey(a2, "GS_30", *(struct cocos2d::CCDictionary **)(a1 + 904)); /*0x2f36e5*/
  DS_Dictionary::setIntegerForKey(a2, "GS_20", *(_DWORD *)(a1 + 872) - *(_DWORD *)(a1 + 876)); /*0x2f3703*/
  DS_Dictionary::setDictForKey(a2, "GS_21", *(struct cocos2d::CCDictionary **)(a1 + 888)); /*0x2f371a*/
  DS_Dictionary::setDictForKey(a2, "GS_28", *(struct cocos2d::CCDictionary **)(a1 + 896)); /*0x2f3731*/
  DS_Dictionary::setDictForKey(a2, "GS_32", *(struct cocos2d::CCDictionary **)(a1 + 920)); /*0x2f3748*/
  DS_Dictionary::setIntegerForKey(a2, "GS_26", *(_DWORD *)(a1 + 996)); /*0x2f375f*/
  DS_Dictionary::setBoolForKey(a2, "GS_29", *(_BYTE *)(a1 + 992)); /*0x2f3781*/
}

// [45/47] Address: 0x45b5d0
// Method: GameStatsManager::getTotalCollectedDiamonds
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameStatsManager_getTotalCollectedDiamonds(__int64 a1)
{
  __int64 v2; // rax
  char v3; // r14
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx
  cocos2d::CCArray *v9; // r15
  int i; // edi
  const char *v11; // rcx
  struct cocos2d::CCSprite *v12; // rsi
  __int64 v13; // rax
  cocos2d::CCObject *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  float v19[2]; // [rsp+30h] [rbp-78h] BYREF
  void *v20; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v22[4]; // [rsp+48h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL); /*0x45b60d*/
  v3 = *(_BYTE *)(v2 + 341); /*0x45b614*/
  *(_DWORD *)(a1 + 1008) = *(_DWORD *)(v2 + 328); /*0x45b62c*/
  v4 = cocos2d::CCDirector::sharedDirector(a1); /*0x45b632*/
  cocos2d::CCDirector::getWinSize(v4, v19); /*0x45b640*/
  cocos2d::CCPoint::CCPoint( /*0x45b67f*/
    (cocos2d::CCPoint *)&v20,
    v19[0] * 0.5,
    (float)((float)(*(float *)(a1 + 736) * 0.5) + (float)(v19[1] * 0.5)) - 30.0);
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v21, v5); /*0x45b694*/
  v7 = (cocos2d::CCObject *)cocos2d::CCArray::create(v6); /*0x45b69a*/
  *(_QWORD *)(a1 + 1016) = v7; /*0x45b6a0*/
  cocos2d::CCObject::retain(v7); /*0x45b6aa*/
  v9 = (cocos2d::CCArray *)cocos2d::CCArray::create(v8); /*0x45b6b6*/
  for ( i = 0; i < 8; ++i ) /*0x45b6b9*/
  {
    SelectSettingLayer_frameForItem(v22, v3 != 0, (unsigned int)i); /*0x45b6db*/
    v11 = (const char *)v22; /*0x45b6e1*/
    if ( v22[3] > 0xFu ) /*0x45b6ec*/
      v11 = (const char *)v22[0]; /*0x45b6ec*/
    v12 = cocos2d::CCSprite::createWithSpriteFrameName(v11); /*0x45b6f8*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 1016), v12); /*0x45b705*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 160LL))(v12); /*0x45b71b*/
    v20 = operator new(0x208u); /*0x45b727*/
    v13 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v20); /*0x45b72f*/
    v14 = (cocos2d::CCObject *)v13; /*0x45b734*/
    if ( !v13 ) /*0x45b73a*/
      goto LABEL_8; /*0x45b73a*/
    if ( !(unsigned __int8)sub_47940(v13, (_DWORD)v12, 0, a1, (__int64)RateLevelLayer_selectRating) ) /*0x45b757*/
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1); /*0x45b769*/
LABEL_8:
      v14 = 0; /*0x45b76c*/
      goto LABEL_9; /*0x45b76c*/
    }
    cocos2d::CCObject::autorelease(v14); /*0x45b759*/
LABEL_9:
    if ( v3 && (i == 4 || i == 7) ) /*0x45b77b*/
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v14 + 936LL))(v14, 0); /*0x45b785*/
      LOBYTE(v15) = 125; /*0x45b795*/
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v12 + 40) + 40LL))((__int64)v12 + 320, v15); /*0x45b797*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v14 + 64LL))(v14, (unsigned int)i); /*0x45b7a2*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v14); /*0x45b7b2*/
    cocos2d::CCArray::addObject(v9, v14); /*0x45b7be*/
    sub_3C310(v22); /*0x45b7ca*/
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, (const struct cocos2d::CCPoint *)v21); /*0x45b7e4*/
  GameToolbox_alignItemsHorisontally(v9, v17, v16, 0); /*0x45b7fb*/
  return sub_45B550(*(_QWORD *)(a1 + 1016), *(unsigned int *)(a1 + 1008)); /*0x45b812*/
}

// [47/47] Address: 0x556f20
// Method: GameStatsManager::generateItemUnlockableData
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameStatsManager_generateItemUnlockableData(__int64 a1, __int64 a2)
{
  const char *v3; // r12
  char *v4; // rcx
  char *v5; // rbx
  char *v6; // rdi
  char *v7; // rsi
  int v8; // r14d
  int v9; // r15d
  int v10; // ebp
  int v11; // esi
  int v12; // edi
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rsi
  char *v16; // rbx
  char *v17; // rdi
  char *v18; // rax
  char *v20; // rdi
  char *v21; // rax
  char *v22[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+60h] [rbp-58h]
  char *String; // [rsp+68h] [rbp-50h]
  char *v25; // [rsp+70h] [rbp-48h]
  __int64 v26; // [rsp+78h] [rbp-40h]

  v26 = a1; /*0x556f54*/
  *(_OWORD *)v22 = 0; /*0x556f5c*/
  v23 = 0; /*0x556f65*/
  sub_120D40(a1, a2, v22); /*0x556f6f*/
  v3 = v22[0]; /*0x556f79*/
  if ( (unsigned __int64)((v22[1] - v22[0]) >> 5) < 7 ) /*0x556f89*/
  {
    v15 = StarInfoPopup_create(0, 0, 0, 0, 0, 0, 0, 0, 0, 1); /*0x55716c*/
    v16 = v22[0]; /*0x55716f*/
    if ( !v22[0] ) /*0x557177*/
      goto LABEL_23; /*0x557177*/
    v20 = v22[1]; /*0x557179*/
    if ( v22[0] != v22[1] ) /*0x557181*/
    {
      do /*0x557192*/
      {
        sub_3C310(v16); /*0x557186*/
        v16 += 32; /*0x55718b*/
      }
      while ( v16 != v20 ); /*0x557192*/
      v16 = v22[0]; /*0x557194*/
    }
    v21 = v16; /*0x5571a5*/
    if ( ((v23 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 ) /*0x5571af*/
      goto LABEL_22; /*0x5571af*/
    v16 = (char *)*((_QWORD *)v16 - 1); /*0x5571b9*/
    if ( (unsigned __int64)(v21 - v16 - 8) <= 0x1F ) /*0x5571c8*/
      goto LABEL_22; /*0x5571c8*/
    goto LABEL_30; /*0x5571c8*/
  }
  v4 = v22[0] + 192; /*0x556f8f*/
  if ( *((_QWORD *)v22[0] + 27) > 0xFu ) /*0x556f9c*/
    v4 = *(char **)v4; /*0x556f9e*/
  v5 = v22[0] + 160; /*0x556fa1*/
  if ( *((_QWORD *)v22[0] + 23) > 0xFu ) /*0x556fae*/
    v5 = *(char **)v5; /*0x556fb0*/
  v6 = v22[0] + 128; /*0x556fb3*/
  if ( *((_QWORD *)v22[0] + 19) > 0xFu ) /*0x556fc0*/
    v6 = *(char **)v6; /*0x556fc2*/
  v7 = v22[0] + 96; /*0x556fc5*/
  if ( *((_QWORD *)v22[0] + 15) > 0xFu ) /*0x556fcf*/
    v7 = *(char **)v7; /*0x556fd1*/
  String = v22[0] + 64; /*0x556fd9*/
  if ( *((_QWORD *)v22[0] + 11) > 0xFu ) /*0x556fe3*/
    String = (char *)*((_QWORD *)v22[0] + 8); /*0x556fe8*/
  v25 = v22[0] + 32; /*0x556ff2*/
  if ( *((_QWORD *)v22[0] + 7) > 0xFu ) /*0x556ffc*/
    v25 = (char *)*((_QWORD *)v22[0] + 4); /*0x557001*/
  if ( *((_QWORD *)v22[0] + 3) > 0xFu ) /*0x55700c*/
    v3 = *(const char **)v22[0]; /*0x55700e*/
  v8 = atoi(v4); /*0x557018*/
  v9 = atoi(v5); /*0x557024*/
  v10 = atoi(v6); /*0x557030*/
  v11 = atoi(v7); /*0x55703b*/
  v12 = atoi(String); /*0x557048*/
  v13 = atoi(v25); /*0x557055*/
  v14 = atoi(v3); /*0x55705a*/
  v15 = StarInfoPopup_create(v14, v13, v12, v11, v10, v9, 0, 0, v8, 1); /*0x55708f*/
  v16 = v22[0]; /*0x557092*/
  if ( v22[0] ) /*0x55709a*/
  {
    v17 = v22[1]; /*0x55709c*/
    if ( v22[0] != v22[1] ) /*0x5570a4*/
    {
      do /*0x5570b5*/
      {
        sub_3C310(v16); /*0x5570a9*/
        v16 += 32; /*0x5570ae*/
      }
      while ( v16 != v17 ); /*0x5570b5*/
      v16 = v22[0]; /*0x5570b7*/
    }
    v18 = v16; /*0x5570c8*/
    if ( ((v23 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 /*0x5570e7*/
      || (v16 = (char *)*((_QWORD *)v16 - 1), (unsigned __int64)(v18 - v16 - 8) <= 0x1F) )
    {
LABEL_22:
      j_j_free(v16); /*0x5570ed*/
      *(_OWORD *)v22 = 0; /*0x5570f8*/
      v23 = 0; /*0x5570fe*/
      goto LABEL_23; /*0x5570fe*/
    }
LABEL_30:
    invoke_watson(0, 0, 0, 0, 0); /*0x5571ce*/
  }
LABEL_23:
  sub_3C310(a1); /*0x557103*/
  return v15; /*0x55710e*/
}
