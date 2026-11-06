#include <Geode/binding/SongInfoObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0xa7dd0
// Method: SongInfoObject::init
// Hidden C++ exception states: #wind=27
void __fastcall SongInfoObject_init(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  bool v10; // r12
  int v11; // r14d
  int v12; // eax
  __int64 v13; // r13
  __int64 v14; // r15
  int v15; // r13d
  cocos2d::CCString *v16; // rax
  const char *v17; // rdx
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  char Particle; // bl
  void *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  bool v25; // r12
  int v26; // r14d
  int v27; // eax
  __int64 v28; // r13
  __int64 v29; // r15
  int v30; // r13d
  cocos2d::CCString *v31; // rax
  const char *v32; // rdx
  cocos2d::CCString *v33; // rax
  const char *v34; // rax
  char v35; // bl
  void *v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r14
  int v39; // ebx
  cocos2d::CCString *v40; // rax
  const char *v41; // rax
  char v42; // bl
  void *v43; // rcx
  void *v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r14
  int v47; // ebx
  cocos2d::CCString *v48; // rax
  const char *v49; // rax
  char v50; // bl
  void *v51; // rcx
  void *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rbx
  int v55; // eax
  bool v56; // r12
  int v57; // r14d
  int v58; // eax
  __int64 v59; // r13
  __int64 v60; // r15
  int v61; // r13d
  cocos2d::CCString *v62; // rax
  const char *v63; // rdx
  cocos2d::CCString *v64; // rax
  const char *v65; // rax
  char v66; // bl
  void *v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // r14
  int v70; // ebx
  cocos2d::CCString *v71; // rax
  const char *v72; // rax
  char v73; // bl
  void *v74; // rcx
  void *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rbx
  int v78; // eax
  bool v79; // r12
  int v80; // r14d
  int v81; // eax
  __int64 v82; // r13
  __int64 v83; // r15
  int v84; // r13d
  cocos2d::CCString *v85; // rax
  const char *v86; // rdx
  cocos2d::CCString *v87; // rax
  const char *v88; // rax
  char v89; // bl
  void *v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // r14
  int v93; // ebx
  cocos2d::CCString *v94; // rax
  const char *v95; // rax
  char v96; // bl
  void *v97; // rcx
  void *v98; // rcx
  __int64 v99; // rbx
  __int64 v100; // r14
  int v101; // ebx
  cocos2d::CCString *v102; // rax
  const char *v103; // rax
  char v104; // bl
  void *v105; // rcx
  __int64 v106; // rbx
  __int64 v107; // r14
  int v108; // ebx
  cocos2d::CCString *v109; // rax
  const char *v110; // rax
  char v111; // bl
  void *v112; // rcx
  void *v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // r14
  int v116; // ebx
  cocos2d::CCString *v117; // rax
  const char *v118; // rax
  char v119; // bl
  void *v120; // rcx
  __int64 v121; // rbx
  __int64 v122; // r14
  int v123; // ebx
  cocos2d::CCString *v124; // rax
  const char *v125; // rax
  char v126; // bl
  void *v127; // rcx
  void *v128; // rcx
  __int64 v129; // rax
  void *v130; // [rsp+40h] [rbp-39h]
  const char *CString; // [rsp+40h] [rbp-39h]
  void *v132; // [rsp+40h] [rbp-39h]
  const char *v133; // [rsp+40h] [rbp-39h]
  void *v134; // [rsp+40h] [rbp-39h]
  void *v135; // [rsp+40h] [rbp-39h]
  void *v136; // [rsp+40h] [rbp-39h]
  const char *v137; // [rsp+40h] [rbp-39h]
  void *v138; // [rsp+40h] [rbp-39h]
  void *v139; // [rsp+40h] [rbp-39h]
  const char *v140; // [rsp+40h] [rbp-39h]
  void *v141; // [rsp+40h] [rbp-39h]
  void *v142; // [rsp+40h] [rbp-39h]
  void *v143; // [rsp+40h] [rbp-39h]
  void *v144; // [rsp+40h] [rbp-39h]
  void *v145; // [rsp+40h] [rbp-39h]
  void *Block[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v149; // [rsp+68h] [rbp-11h]
  unsigned __int64 v150; // [rsp+70h] [rbp-9h]
  void *v151[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v152; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v153; // [rsp+90h] [rbp+17h]

  switch ( a2 ) /*0xa7e2b*/
  {
    case 1: /*0xa7e2b*/
      v7 = *(_QWORD *)(a1 + 1096); /*0xa7e2d*/
      v8 = -1; /*0xa7e34*/
      if ( v7 ) /*0xa7e40*/
      {
        v9 = *(_DWORD *)(v7 + 384); /*0xa7e42*/
        v10 = v9 == 12; /*0xa7e4b*/
        if ( v9 == 12 ) /*0xa7e4f*/
        {
          v11 = 0; /*0xa7e51*/
          v12 = -1; /*0xa7e54*/
          goto LABEL_7; /*0xa7e56*/
        }
      }
      else
      {
        v9 = 0; /*0xa7e58*/
        v10 = 0; /*0xa7e5a*/
      }
      v11 = *(_DWORD *)(4LL * v9 - 4096 + 7335320); /*0xa7e5f*/
      v12 = 60 * v11; /*0xa7e67*/
LABEL_7:
      *(_DWORD *)(a1 + 1092) = v12; /*0xa7e6b*/
      v13 = a1 + 1000; /*0xa7e71*/
      v14 = *(_QWORD *)&qword_905FB0; /*0xa7e78*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa7e82*/
      {
        v130 = operator new(0x690u); /*0xa7e8e*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v130); /*0xa7e9b*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa7eac*/
        v14 = *(_QWORD *)&qword_905FB0; /*0xa7eae*/
      }
      *(_QWORD *)(v14 + 1384) = v13; /*0xa7eb5*/
      v15 = *(_DWORD *)(a1 + 1032); /*0xa7ebc*/
      if ( !v10 && v11 <= 0 ) /*0xa7ecb*/
        return; /*0xa7ecb*/
      v16 = cocos2d::CCString::createWithFormat("adminBan_%i", v15); /*0xa7edb*/
      CString = cocos2d::CCString::getCString(v16); /*0xa7eea*/
      v17 = "temp"; /*0xa7ef5*/
      if ( v10 ) /*0xa7eff*/
        v17 = "perm"; /*0xa7eff*/
      v18 = cocos2d::CCString::createWithFormat("&mode=%s&durationMinutes=%i", v17, v11); /*0xa7f0d*/
      v19 = cocos2d::CCString::getCString(v18); /*0xa7f16*/
      *(_OWORD *)Block = 0; /*0xa7f1f*/
      v149 = 0; /*0xa7f23*/
      v150 = 0; /*0xa7f27*/
      do /*0xa7f33*/
        ++v8; /*0xa7f30*/
      while ( v19[v8] ); /*0xa7f33*/
      sub_3C230(Block); /*0xa7f43*/
      Particle = GJBaseGameLayer_createParticle( /*0xa7f82*/
                   v14,
                   (__int64)CString,
                   (__int64)"https://www.boomlings.com/database/adminCommentBan.php",
                   80,
                   v15,
                   (size_t *)Block,
                   a4,
                   a3);
      if ( v150 <= 0xF ) /*0xa7f8d*/
        goto LABEL_19; /*0xa7f8d*/
      v21 = Block[0]; /*0xa7f92*/
      if ( v150 + 1 >= 0x1000 ) /*0xa7fa0*/
      {
        v21 = (void *)*((_QWORD *)Block[0] - 1); /*0xa7fa6*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0xa7fb5*/
          goto LABEL_185; /*0xa7fb5*/
      }
      j_j_free(v21); /*0xa7fbb*/
LABEL_19:
      if ( !Particle ) /*0xa7fc2*/
        return; /*0xa7fc2*/
      *(_OWORD *)Block = 0; /*0xa7fcb*/
      v149 = 0; /*0xa7fcf*/
      v150 = 0; /*0xa7fd3*/
      Block[0] = (void *)sub_3C460(32); /*0xa7fe4*/
      v149 = 23; /*0xa7fe8*/
      v150 = 31; /*0xa7ff0*/
      strcpy((char *)Block[0], "Applying comment ban..."); /*0xa7fff*/
      goto LABEL_189; /*0xa8024*/
    case 2: /*0xa7e2b*/
      v22 = *(_QWORD *)(a1 + 1104); /*0xa8029*/
      v23 = -1; /*0xa8030*/
      if ( v22 ) /*0xa803c*/
      {
        v24 = *(_DWORD *)(v22 + 384); /*0xa803e*/
        v25 = v24 == 12; /*0xa8047*/
        if ( v24 == 12 ) /*0xa804b*/
        {
          v26 = 0; /*0xa804d*/
          v27 = -1; /*0xa8050*/
          goto LABEL_26; /*0xa8052*/
        }
      }
      else
      {
        v24 = 0; /*0xa8054*/
        v25 = 0; /*0xa8056*/
      }
      v26 = *(_DWORD *)(4LL * v24 - 4096 + 7335320); /*0xa805b*/
      v27 = 60 * v26; /*0xa8063*/
LABEL_26:
      *(_DWORD *)(a1 + 1092) = v27; /*0xa8067*/
      v28 = a1 + 1000; /*0xa806d*/
      v29 = *(_QWORD *)&qword_905FB0; /*0xa8074*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa807e*/
      {
        v132 = operator new(0x690u); /*0xa808a*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v132); /*0xa8097*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa80a8*/
        v29 = *(_QWORD *)&qword_905FB0; /*0xa80aa*/
      }
      *(_QWORD *)(v29 + 1384) = v28; /*0xa80b1*/
      v30 = *(_DWORD *)(a1 + 1032); /*0xa80b8*/
      if ( !v25 && v26 <= 0 ) /*0xa80c7*/
        return; /*0xa80c7*/
      v31 = cocos2d::CCString::createWithFormat("adminUploadBan_%i", v30); /*0xa80d7*/
      v133 = cocos2d::CCString::getCString(v31); /*0xa80e6*/
      v32 = "temp"; /*0xa80f1*/
      if ( v25 ) /*0xa80fb*/
        v32 = "perm"; /*0xa80fb*/
      v33 = cocos2d::CCString::createWithFormat("&mode=%s&durationMinutes=%i", v32, v26); /*0xa8109*/
      v34 = cocos2d::CCString::getCString(v33); /*0xa8112*/
      *(_OWORD *)Block = 0; /*0xa811b*/
      v149 = 0; /*0xa811f*/
      v150 = 0; /*0xa8123*/
      do /*0xa812a*/
        ++v23; /*0xa8127*/
      while ( v34[v23] ); /*0xa812a*/
      sub_3C230(Block); /*0xa813a*/
      v35 = GJBaseGameLayer_createParticle( /*0xa8179*/
              v29,
              (__int64)v133,
              (__int64)"https://www.boomlings.com/database/adminUploadBan.php",
              82,
              v30,
              (size_t *)Block,
              a4,
              a3);
      if ( v150 <= 0xF ) /*0xa8184*/
        goto LABEL_38; /*0xa8184*/
      v36 = Block[0]; /*0xa8189*/
      if ( v150 + 1 >= 0x1000 ) /*0xa8197*/
      {
        v36 = (void *)*((_QWORD *)Block[0] - 1); /*0xa819d*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v36 - 8) > 0x1F ) /*0xa81ac*/
          goto LABEL_185; /*0xa81ac*/
      }
      j_j_free(v36); /*0xa81b2*/
LABEL_38:
      if ( !v35 ) /*0xa81b9*/
        return; /*0xa81b9*/
      *(_OWORD *)Block = 0; /*0xa81c2*/
      v149 = 0; /*0xa81c6*/
      v150 = 0; /*0xa81ca*/
      Block[0] = (void *)sub_3C460(32); /*0xa81d8*/
      v149 = 22; /*0xa81dc*/
      v150 = 31; /*0xa81e4*/
      strcpy((char *)Block[0], "Applying upload ban..."); /*0xa81f3*/
      goto LABEL_189; /*0xa820e*/
    case 3: /*0xa7e2b*/
      v37 = a1 + 1000; /*0xa8218*/
      if ( !a1 ) /*0xa821f*/
        v37 = 0; /*0xa8221*/
      v38 = *(_QWORD *)&qword_905FB0; /*0xa8223*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa822d*/
      {
        v134 = operator new(0x690u); /*0xa8239*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v134); /*0xa8246*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa8257*/
        v38 = *(_QWORD *)&qword_905FB0; /*0xa8259*/
      }
      *(_QWORD *)(v38 + 1384) = v37; /*0xa8260*/
      v39 = *(_DWORD *)(a1 + 1032); /*0xa8267*/
      v40 = cocos2d::CCString::createWithFormat("adminUnban_%i", v39); /*0xa8276*/
      v41 = cocos2d::CCString::getCString(v40); /*0xa827f*/
      *(_OWORD *)v151 = 0; /*0xa8288*/
      v152 = 0; /*0xa828c*/
      v153 = 15; /*0xa8290*/
      LOBYTE(v151[0]) = 0; /*0xa8298*/
      *(_OWORD *)Block = 0; /*0xa829c*/
      v149 = 0; /*0xa82a1*/
      v42 = GJBaseGameLayer_createParticle( /*0xa82d8*/
              v38,
              (__int64)v41,
              (__int64)"https://www.boomlings.com/database/adminCommentUnban.php",
              81,
              v39,
              (size_t *)v151,
              a4,
              (__int64)Block);
      v43 = Block[0]; /*0xa82db*/
      if ( Block[0] ) /*0xa82e2*/
      {
        if ( ((v149 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0xa82f9*/
        {
          v43 = (void *)*((_QWORD *)Block[0] - 1); /*0xa82ff*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v43 - 8) > 0x1F ) /*0xa830e*/
            invoke_watson(0, 0, 0, 0, 0); /*0xa831f*/
        }
        j_j_free(v43); /*0xa8326*/
      }
      if ( v153 <= 0xF ) /*0xa8334*/
        goto LABEL_53; /*0xa8334*/
      v44 = v151[0]; /*0xa8339*/
      if ( v153 + 1 >= 0x1000 ) /*0xa8347*/
      {
        v44 = (void *)*((_QWORD *)v151[0] - 1); /*0xa834d*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v44 - 8) > 0x1F ) /*0xa835c*/
          goto LABEL_185; /*0xa835c*/
      }
      j_j_free(v44); /*0xa8362*/
LABEL_53:
      if ( !v42 ) /*0xa8369*/
        return; /*0xa8369*/
      *(_OWORD *)Block = 0; /*0xa8372*/
      v149 = 0; /*0xa8376*/
      v150 = 0; /*0xa837a*/
      Block[0] = (void *)sub_3C460(32); /*0xa838b*/
      v149 = 23; /*0xa838f*/
      v150 = 31; /*0xa8397*/
      strcpy((char *)Block[0], "Removing comment ban..."); /*0xa83a6*/
      goto LABEL_189; /*0xa83cb*/
    case 4: /*0xa7e2b*/
      v45 = a1 + 1000; /*0xa83d5*/
      if ( !a1 ) /*0xa83dc*/
        v45 = 0; /*0xa83de*/
      v46 = *(_QWORD *)&qword_905FB0; /*0xa83e0*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa83ea*/
      {
        v135 = operator new(0x690u); /*0xa83f6*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v135); /*0xa8403*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa8414*/
        v46 = *(_QWORD *)&qword_905FB0; /*0xa8416*/
      }
      *(_QWORD *)(v46 + 1384) = v45; /*0xa841d*/
      v47 = *(_DWORD *)(a1 + 1032); /*0xa8424*/
      v48 = cocos2d::CCString::createWithFormat("adminUploadUnban_%i", v47); /*0xa8433*/
      v49 = cocos2d::CCString::getCString(v48); /*0xa843c*/
      *(_OWORD *)v151 = 0; /*0xa8445*/
      v152 = 0; /*0xa8449*/
      v153 = 15; /*0xa844d*/
      LOBYTE(v151[0]) = 0; /*0xa8455*/
      *(_OWORD *)Block = 0; /*0xa8459*/
      v149 = 0; /*0xa845e*/
      v50 = GJBaseGameLayer_createParticle( /*0xa8495*/
              v46,
              (__int64)v49,
              (__int64)"https://www.boomlings.com/database/adminUploadUnban.php",
              83,
              v47,
              (size_t *)v151,
              a4,
              (__int64)Block);
      v51 = Block[0]; /*0xa8498*/
      if ( Block[0] ) /*0xa849f*/
      {
        if ( ((v149 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0xa84b6*/
        {
          v51 = (void *)*((_QWORD *)Block[0] - 1); /*0xa84bc*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v51 - 8) > 0x1F ) /*0xa84cb*/
            invoke_watson(0, 0, 0, 0, 0); /*0xa84dc*/
        }
        j_j_free(v51); /*0xa84e3*/
      }
      if ( v153 <= 0xF ) /*0xa84f1*/
        goto LABEL_68; /*0xa84f1*/
      v52 = v151[0]; /*0xa84f6*/
      if ( v153 + 1 >= 0x1000 ) /*0xa8504*/
      {
        v52 = (void *)*((_QWORD *)v151[0] - 1); /*0xa850a*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v52 - 8) > 0x1F ) /*0xa8519*/
          goto LABEL_185; /*0xa8519*/
      }
      j_j_free(v52); /*0xa851f*/
LABEL_68:
      if ( !v50 ) /*0xa8526*/
        return; /*0xa8526*/
      *(_OWORD *)Block = 0; /*0xa852f*/
      v149 = 0; /*0xa8533*/
      v150 = 0; /*0xa8537*/
      Block[0] = (void *)sub_3C460(32); /*0xa8545*/
      v149 = 22; /*0xa8549*/
      v150 = 31; /*0xa8551*/
      strcpy((char *)Block[0], "Removing upload ban..."); /*0xa8560*/
      goto LABEL_189; /*0xa857b*/
    case 5: /*0xa7e2b*/
      v53 = *(_QWORD *)(a1 + 1112); /*0xa8580*/
      v54 = -1; /*0xa8587*/
      if ( v53 ) /*0xa8593*/
      {
        v55 = *(_DWORD *)(v53 + 384); /*0xa8595*/
        v56 = v55 == 12; /*0xa859e*/
        if ( v55 == 12 ) /*0xa85a2*/
        {
          v57 = 0; /*0xa85a4*/
          v58 = -1; /*0xa85a7*/
          goto LABEL_75; /*0xa85a9*/
        }
      }
      else
      {
        v55 = 0; /*0xa85ab*/
        v56 = 0; /*0xa85ad*/
      }
      v57 = *(_DWORD *)(4LL * v55 - 4096 + 7335320); /*0xa85b2*/
      v58 = 60 * v57; /*0xa85ba*/
LABEL_75:
      *(_DWORD *)(a1 + 1092) = v58; /*0xa85be*/
      v59 = a1 + 1000; /*0xa85c4*/
      v60 = *(_QWORD *)&qword_905FB0; /*0xa85cb*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa85d5*/
      {
        v136 = operator new(0x690u); /*0xa85e1*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v136); /*0xa85ee*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa85ff*/
        v60 = *(_QWORD *)&qword_905FB0; /*0xa8601*/
      }
      *(_QWORD *)(v60 + 1384) = v59; /*0xa8608*/
      v61 = *(_DWORD *)(a1 + 1032); /*0xa860f*/
      if ( !v56 && v57 <= 0 ) /*0xa861e*/
        return; /*0xa861e*/
      v62 = cocos2d::CCString::createWithFormat("adminMsgBan_%i", v61); /*0xa862e*/
      v137 = cocos2d::CCString::getCString(v62); /*0xa863d*/
      v63 = "temp"; /*0xa8648*/
      if ( v56 ) /*0xa8652*/
        v63 = "perm"; /*0xa8652*/
      v64 = cocos2d::CCString::createWithFormat("&mode=%s&durationMinutes=%i", v63, v57); /*0xa8660*/
      v65 = cocos2d::CCString::getCString(v64); /*0xa8669*/
      *(_OWORD *)v151 = 0; /*0xa8672*/
      v152 = 0; /*0xa8676*/
      v153 = 0; /*0xa867a*/
      do /*0xa8683*/
        ++v54; /*0xa8680*/
      while ( v65[v54] ); /*0xa8683*/
      sub_3C230(v151); /*0xa8693*/
      v66 = GJBaseGameLayer_createParticle( /*0xa86d2*/
              v60,
              (__int64)v137,
              (__int64)"https://www.boomlings.com/database/adminMessageBan.php",
              99,
              v61,
              (size_t *)v151,
              a4,
              a3);
      if ( v153 <= 0xF ) /*0xa86dd*/
        goto LABEL_87; /*0xa86dd*/
      v67 = v151[0]; /*0xa86e2*/
      if ( v153 + 1 >= 0x1000 ) /*0xa86f0*/
      {
        v67 = (void *)*((_QWORD *)v151[0] - 1); /*0xa86f6*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v67 - 8) > 0x1F ) /*0xa8705*/
          goto LABEL_185; /*0xa8705*/
      }
      j_j_free(v67); /*0xa870b*/
LABEL_87:
      if ( !v66 ) /*0xa8712*/
        return; /*0xa8712*/
      *(_OWORD *)Block = 0; /*0xa871b*/
      Block[0] = (void *)sub_3C460(32); /*0xa8734*/
      v149 = 23; /*0xa8738*/
      v150 = 31; /*0xa8740*/
      strcpy((char *)Block[0], "Applying message ban..."); /*0xa874f*/
      goto LABEL_189; /*0xa8774*/
    case 6: /*0xa7e2b*/
      v68 = a1 + 1000; /*0xa877e*/
      if ( !a1 ) /*0xa8785*/
        v68 = 0; /*0xa8787*/
      v69 = *(_QWORD *)&qword_905FB0; /*0xa8789*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa8793*/
      {
        v138 = operator new(0x690u); /*0xa879f*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v138); /*0xa87ac*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa87bd*/
        v69 = *(_QWORD *)&qword_905FB0; /*0xa87bf*/
      }
      *(_QWORD *)(v69 + 1384) = v68; /*0xa87c6*/
      v70 = *(_DWORD *)(a1 + 1032); /*0xa87cd*/
      v71 = cocos2d::CCString::createWithFormat("adminMsgUnban_%i", v70); /*0xa87dc*/
      v72 = cocos2d::CCString::getCString(v71); /*0xa87e5*/
      *(_OWORD *)v151 = 0; /*0xa87ee*/
      v152 = 0; /*0xa87f2*/
      v153 = 15; /*0xa87f6*/
      LOBYTE(v151[0]) = 0; /*0xa87fe*/
      *(_OWORD *)Block = 0; /*0xa8802*/
      v149 = 0; /*0xa8807*/
      v73 = GJBaseGameLayer_createParticle( /*0xa883e*/
              v69,
              (__int64)v72,
              (__int64)"https://www.boomlings.com/database/adminMessageUnban.php",
              101,
              v70,
              (size_t *)v151,
              a4,
              (__int64)Block);
      v74 = Block[0]; /*0xa8841*/
      if ( Block[0] ) /*0xa8848*/
      {
        if ( ((v149 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0xa885f*/
        {
          v74 = (void *)*((_QWORD *)Block[0] - 1); /*0xa8865*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v74 - 8) > 0x1F ) /*0xa8874*/
            invoke_watson(0, 0, 0, 0, 0); /*0xa8885*/
        }
        j_j_free(v74); /*0xa888c*/
      }
      if ( v153 <= 0xF ) /*0xa889a*/
        goto LABEL_102; /*0xa889a*/
      v75 = v151[0]; /*0xa889f*/
      if ( v153 + 1 >= 0x1000 ) /*0xa88ad*/
      {
        v75 = (void *)*((_QWORD *)v151[0] - 1); /*0xa88b3*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v75 - 8) > 0x1F ) /*0xa88c2*/
          goto LABEL_185; /*0xa88c2*/
      }
      j_j_free(v75); /*0xa88c8*/
LABEL_102:
      if ( !v73 ) /*0xa88cf*/
        return; /*0xa88cf*/
      *(_OWORD *)Block = 0; /*0xa88d8*/
      v149 = 0; /*0xa88dc*/
      v150 = 0; /*0xa88e0*/
      Block[0] = (void *)sub_3C460(32); /*0xa88f1*/
      v149 = 23; /*0xa88f5*/
      v150 = 31; /*0xa88fd*/
      strcpy((char *)Block[0], "Removing message ban..."); /*0xa890c*/
      goto LABEL_189; /*0xa8931*/
    case 7: /*0xa7e2b*/
      v76 = *(_QWORD *)(a1 + 1120); /*0xa8936*/
      v77 = -1; /*0xa893d*/
      if ( v76 ) /*0xa8949*/
      {
        v78 = *(_DWORD *)(v76 + 384); /*0xa894b*/
        v79 = v78 == 12; /*0xa8954*/
        if ( v78 == 12 ) /*0xa8958*/
        {
          v80 = 0; /*0xa895a*/
          v81 = -1; /*0xa895d*/
          goto LABEL_109; /*0xa895f*/
        }
      }
      else
      {
        v78 = 0; /*0xa8961*/
        v79 = 0; /*0xa8963*/
      }
      v80 = *(_DWORD *)(4LL * v78 - 4096 + 7335320); /*0xa8968*/
      v81 = 60 * v80; /*0xa8970*/
LABEL_109:
      *(_DWORD *)(a1 + 1092) = v81; /*0xa8974*/
      v82 = a1 + 1000; /*0xa897a*/
      v83 = *(_QWORD *)&qword_905FB0; /*0xa8981*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa898b*/
      {
        v139 = operator new(0x690u); /*0xa8997*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v139); /*0xa89a4*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa89b5*/
        v83 = *(_QWORD *)&qword_905FB0; /*0xa89b7*/
      }
      *(_QWORD *)(v83 + 1384) = v82; /*0xa89be*/
      v84 = *(_DWORD *)(a1 + 1032); /*0xa89c5*/
      if ( v79 || v80 > 0 ) /*0xa89d4*/
      {
        v85 = cocos2d::CCString::createWithFormat("adminFreeze_%i", v84); /*0xa89e4*/
        v140 = cocos2d::CCString::getCString(v85); /*0xa89f3*/
        v86 = "temp"; /*0xa89fe*/
        if ( v79 ) /*0xa8a08*/
          v86 = "perm"; /*0xa8a08*/
        v87 = cocos2d::CCString::createWithFormat("&mode=%s&durationMinutes=%i", v86, v80); /*0xa8a16*/
        v88 = cocos2d::CCString::getCString(v87); /*0xa8a1f*/
        *(_OWORD *)v151 = 0; /*0xa8a28*/
        v152 = 0; /*0xa8a2c*/
        v153 = 0; /*0xa8a30*/
        do /*0xa8a37*/
          ++v77; /*0xa8a34*/
        while ( v88[v77] ); /*0xa8a37*/
        sub_3C230(v151); /*0xa8a47*/
        v89 = GJBaseGameLayer_createParticle( /*0xa8a86*/
                v83,
                (__int64)v140,
                (__int64)"https://www.boomlings.com/database/adminFreezeAccount.php",
                102,
                v84,
                (size_t *)v151,
                a4,
                a3);
        if ( v153 > 0xF ) /*0xa8a91*/
        {
          v90 = v151[0]; /*0xa8a96*/
          if ( v153 + 1 >= 0x1000 ) /*0xa8aa4*/
          {
            v90 = (void *)*((_QWORD *)v151[0] - 1); /*0xa8aaa*/
            if ( (unsigned __int64)((char *)v151[0] - (char *)v90 - 8) > 0x1F ) /*0xa8ab9*/
LABEL_185:
              invoke_watson(0, 0, 0, 0, 0); /*0xa9248*/
          }
          j_j_free(v90); /*0xa8abf*/
        }
        if ( v89 ) /*0xa8ac6*/
        {
          *(_OWORD *)Block = 0; /*0xa8acf*/
          Block[0] = (void *)sub_3C460(32); /*0xa8ae5*/
          v149 = 20; /*0xa8ae9*/
          v150 = 31; /*0xa8af1*/
          strcpy((char *)Block[0], "Applying all bans..."); /*0xa8b00*/
LABEL_189:
          v129 = sub_39D2A0(a1 + 1008, Block); /*0xa92b5*/
          *(_QWORD *)(a1 + 1272) = v129; /*0xa92c5*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v129 + 1064LL))(v129); /*0xa92d9*/
        }
      }
      return;
    case 8: /*0xa7e2b*/
      v91 = a1 + 1000; /*0xa8b1a*/
      if ( !a1 ) /*0xa8b21*/
        v91 = 0; /*0xa8b23*/
      v92 = *(_QWORD *)&qword_905FB0; /*0xa8b25*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa8b2f*/
      {
        v141 = operator new(0x690u); /*0xa8b3b*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v141); /*0xa8b48*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa8b59*/
        v92 = *(_QWORD *)&qword_905FB0; /*0xa8b5b*/
      }
      *(_QWORD *)(v92 + 1384) = v91; /*0xa8b62*/
      v93 = *(_DWORD *)(a1 + 1032); /*0xa8b69*/
      v94 = cocos2d::CCString::createWithFormat("adminUnfreeze_%i", v93); /*0xa8b78*/
      v95 = cocos2d::CCString::getCString(v94); /*0xa8b81*/
      *(_OWORD *)v151 = 0; /*0xa8b8a*/
      v152 = 0; /*0xa8b8e*/
      v153 = 15; /*0xa8b92*/
      LOBYTE(v151[0]) = 0; /*0xa8b9a*/
      *(_OWORD *)Block = 0; /*0xa8b9e*/
      v149 = 0; /*0xa8ba3*/
      v96 = GJBaseGameLayer_createParticle( /*0xa8bda*/
              v92,
              (__int64)v95,
              (__int64)"https://www.boomlings.com/database/adminUnfreezeAccount.php",
              103,
              v93,
              (size_t *)v151,
              a4,
              (__int64)Block);
      v97 = Block[0]; /*0xa8bdd*/
      if ( Block[0] ) /*0xa8be4*/
      {
        if ( ((v149 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0xa8bfb*/
        {
          v97 = (void *)*((_QWORD *)Block[0] - 1); /*0xa8c01*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v97 - 8) > 0x1F ) /*0xa8c10*/
            invoke_watson(0, 0, 0, 0, 0); /*0xa8c21*/
        }
        j_j_free(v97); /*0xa8c28*/
      }
      if ( v153 <= 0xF ) /*0xa8c36*/
        goto LABEL_136; /*0xa8c36*/
      v98 = v151[0]; /*0xa8c3b*/
      if ( v153 + 1 >= 0x1000 ) /*0xa8c49*/
      {
        v98 = (void *)*((_QWORD *)v151[0] - 1); /*0xa8c4f*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v98 - 8) > 0x1F ) /*0xa8c5e*/
          goto LABEL_185; /*0xa8c5e*/
      }
      j_j_free(v98); /*0xa8c64*/
LABEL_136:
      if ( !v96 ) /*0xa8c6b*/
        return; /*0xa8c6b*/
      *(_OWORD *)Block = 0; /*0xa8c74*/
      v149 = 0; /*0xa8c78*/
      v150 = 0; /*0xa8c7c*/
      Block[0] = (void *)sub_3C460(32); /*0xa8c8a*/
      v149 = 20; /*0xa8c8e*/
      v150 = 31; /*0xa8c96*/
      strcpy((char *)Block[0], "Removing all bans..."); /*0xa8ca5*/
      goto LABEL_189; /*0xa8cb5*/
    case 9: /*0xa7e2b*/
      v99 = a1 + 1000; /*0xa8cbf*/
      if ( !a1 ) /*0xa8cc6*/
        v99 = 0; /*0xa8cc8*/
      v100 = *(_QWORD *)&qword_905FB0; /*0xa8cca*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa8cd4*/
      {
        v142 = operator new(0x690u); /*0xa8ce0*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v142); /*0xa8ced*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa8cfe*/
        v100 = *(_QWORD *)&qword_905FB0; /*0xa8d00*/
      }
      *(_QWORD *)(v100 + 1384) = v99; /*0xa8d07*/
      v101 = *(_DWORD *)(a1 + 1032); /*0xa8d0e*/
      v102 = cocos2d::CCString::createWithFormat("adminTrendingBan_%i", v101); /*0xa8d1d*/
      v103 = cocos2d::CCString::getCString(v102); /*0xa8d26*/
      *(_OWORD *)v151 = 0; /*0xa8d2f*/
      v152 = 0; /*0xa8d33*/
      v153 = 15; /*0xa8d37*/
      LOBYTE(v151[0]) = 0; /*0xa8d3f*/
      v104 = GJBaseGameLayer_createParticle( /*0xa8d72*/
               v100,
               (__int64)v103,
               (__int64)"https://www.boomlings.com/database/adminTrendingBan.php",
               118,
               v101,
               (size_t *)v151,
               a4,
               a3);
      if ( v153 <= 0xF ) /*0xa8d7d*/
        goto LABEL_146; /*0xa8d7d*/
      v105 = v151[0]; /*0xa8d82*/
      if ( v153 + 1 >= 0x1000 ) /*0xa8d90*/
      {
        v105 = (void *)*((_QWORD *)v151[0] - 1); /*0xa8d96*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v105 - 8) > 0x1F ) /*0xa8da5*/
          goto LABEL_185; /*0xa8da5*/
      }
      j_j_free(v105); /*0xa8dab*/
LABEL_146:
      if ( !v104 ) /*0xa8db2*/
        return; /*0xa8db2*/
      *(_OWORD *)Block = 0; /*0xa8dbb*/
      Block[0] = (void *)sub_3C460(32); /*0xa8dd1*/
      v149 = 24; /*0xa8dd5*/
      v150 = 31; /*0xa8ddd*/
      strcpy((char *)Block[0], "Applying trending ban..."); /*0xa8dec*/
      goto LABEL_189; /*0xa8e00*/
    case 10: /*0xa7e2b*/
      v106 = a1 + 1000; /*0xa8e0a*/
      if ( !a1 ) /*0xa8e11*/
        v106 = 0; /*0xa8e13*/
      v107 = *(_QWORD *)&qword_905FB0; /*0xa8e15*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa8e1f*/
      {
        v143 = operator new(0x690u); /*0xa8e2b*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v143); /*0xa8e38*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa8e49*/
        v107 = *(_QWORD *)&qword_905FB0; /*0xa8e4b*/
      }
      *(_QWORD *)(v107 + 1384) = v106; /*0xa8e52*/
      v108 = *(_DWORD *)(a1 + 1032); /*0xa8e59*/
      v109 = cocos2d::CCString::createWithFormat("adminTrendingUnban_%i", v108); /*0xa8e68*/
      v110 = cocos2d::CCString::getCString(v109); /*0xa8e71*/
      *(_OWORD *)v151 = 0; /*0xa8e7a*/
      v152 = 0; /*0xa8e7e*/
      v153 = 15; /*0xa8e82*/
      LOBYTE(v151[0]) = 0; /*0xa8e8a*/
      *(_OWORD *)Block = 0; /*0xa8e8e*/
      v149 = 0; /*0xa8e93*/
      v111 = GJBaseGameLayer_createParticle( /*0xa8eca*/
               v107,
               (__int64)v110,
               (__int64)"https://www.boomlings.com/database/adminTrendingUnban.php",
               119,
               v108,
               (size_t *)v151,
               a4,
               (__int64)Block);
      v112 = Block[0]; /*0xa8ecd*/
      if ( Block[0] ) /*0xa8ed4*/
      {
        if ( ((v149 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0xa8eeb*/
        {
          v112 = (void *)*((_QWORD *)Block[0] - 1); /*0xa8ef1*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v112 - 8) > 0x1F ) /*0xa8f00*/
            invoke_watson(0, 0, 0, 0, 0); /*0xa8f11*/
        }
        j_j_free(v112); /*0xa8f18*/
      }
      if ( v153 <= 0xF ) /*0xa8f26*/
        goto LABEL_161; /*0xa8f26*/
      v113 = v151[0]; /*0xa8f2b*/
      if ( v153 + 1 >= 0x1000 ) /*0xa8f39*/
      {
        v113 = (void *)*((_QWORD *)v151[0] - 1); /*0xa8f3f*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v113 - 8) > 0x1F ) /*0xa8f4e*/
          goto LABEL_185; /*0xa8f4e*/
      }
      j_j_free(v113); /*0xa8f54*/
LABEL_161:
      if ( !v111 ) /*0xa8f5b*/
        return; /*0xa8f5b*/
      *(_OWORD *)Block = 0; /*0xa8f64*/
      v149 = 0; /*0xa8f68*/
      v150 = 0; /*0xa8f6c*/
      Block[0] = (void *)sub_3C460(32); /*0xa8f7a*/
      v149 = 20; /*0xa8f7e*/
      v150 = 31; /*0xa8f86*/
      strcpy((char *)Block[0], "Allowing trending..."); /*0xa8f95*/
      goto LABEL_189; /*0xa8fa5*/
    case 11: /*0xa7e2b*/
      v114 = a1 + 1000; /*0xa8faf*/
      if ( !a1 ) /*0xa8fb6*/
        v114 = 0; /*0xa8fb8*/
      v115 = *(_QWORD *)&qword_905FB0; /*0xa8fba*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa8fc4*/
      {
        v144 = operator new(0x690u); /*0xa8fd0*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v144); /*0xa8fdd*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa8fee*/
        v115 = *(_QWORD *)&qword_905FB0; /*0xa8ff0*/
      }
      *(_QWORD *)(v115 + 1384) = v114; /*0xa8ff7*/
      v116 = *(_DWORD *)(a1 + 1032); /*0xa8ffe*/
      v117 = cocos2d::CCString::createWithFormat("adminNameLock_%i", v116); /*0xa900d*/
      v118 = cocos2d::CCString::getCString(v117); /*0xa9016*/
      *(_OWORD *)v151 = 0; /*0xa901f*/
      v152 = 0; /*0xa9023*/
      v153 = 15; /*0xa9027*/
      LOBYTE(v151[0]) = 0; /*0xa902f*/
      v119 = GJBaseGameLayer_createParticle( /*0xa9062*/
               v115,
               (__int64)v118,
               (__int64)"https://www.boomlings.com/database/adminNameLock.php",
               120,
               v116,
               (size_t *)v151,
               a4,
               a3);
      if ( v153 <= 0xF ) /*0xa906d*/
        goto LABEL_171; /*0xa906d*/
      v120 = v151[0]; /*0xa9072*/
      if ( v153 + 1 >= 0x1000 ) /*0xa9080*/
      {
        v120 = (void *)*((_QWORD *)v151[0] - 1); /*0xa9086*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v120 - 8) > 0x1F ) /*0xa9095*/
          goto LABEL_185; /*0xa9095*/
      }
      j_j_free(v120); /*0xa909b*/
LABEL_171:
      if ( !v119 ) /*0xa90a2*/
        return; /*0xa90a2*/
      *(_OWORD *)Block = 0; /*0xa90ab*/
      Block[0] = (void *)sub_3C460(32); /*0xa90c1*/
      v149 = 19; /*0xa90c5*/
      v150 = 31; /*0xa90cd*/
      strcpy((char *)Block[0], "Locking username..."); /*0xa90dc*/
      goto LABEL_189; /*0xa90f8*/
    case 12: /*0xa7e2b*/
      v121 = a1 + 1000; /*0xa9102*/
      if ( !a1 ) /*0xa9109*/
        v121 = 0; /*0xa910b*/
      v122 = *(_QWORD *)&qword_905FB0; /*0xa910d*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xa9117*/
      {
        v145 = operator new(0x690u); /*0xa9123*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v145); /*0xa9130*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa9141*/
        v122 = *(_QWORD *)&qword_905FB0; /*0xa9143*/
      }
      *(_QWORD *)(v122 + 1384) = v121; /*0xa914a*/
      v123 = *(_DWORD *)(a1 + 1032); /*0xa9151*/
      v124 = cocos2d::CCString::createWithFormat("adminNameUnlock_%i", v123); /*0xa9160*/
      v125 = cocos2d::CCString::getCString(v124); /*0xa9169*/
      *(_OWORD *)v151 = 0; /*0xa9172*/
      v152 = 0; /*0xa9176*/
      v153 = 15; /*0xa917a*/
      LOBYTE(v151[0]) = 0; /*0xa9182*/
      *(_OWORD *)Block = 0; /*0xa9186*/
      v149 = 0; /*0xa918b*/
      v126 = GJBaseGameLayer_createParticle( /*0xa91c2*/
               v122,
               (__int64)v125,
               (__int64)"https://www.boomlings.com/database/adminNameUnlock.php",
               121,
               v123,
               (size_t *)v151,
               a4,
               (__int64)Block);
      v127 = Block[0]; /*0xa91c5*/
      if ( Block[0] ) /*0xa91cc*/
      {
        if ( ((v149 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0xa91e3*/
        {
          v127 = (void *)*((_QWORD *)Block[0] - 1); /*0xa91e9*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v127 - 8) > 0x1F ) /*0xa91f8*/
            invoke_watson(0, 0, 0, 0, 0); /*0xa9209*/
        }
        j_j_free(v127); /*0xa9210*/
      }
      if ( v153 <= 0xF ) /*0xa921e*/
        goto LABEL_187; /*0xa921e*/
      v128 = v151[0]; /*0xa9223*/
      if ( v153 + 1 >= 0x1000 ) /*0xa9231*/
      {
        v128 = (void *)*((_QWORD *)v151[0] - 1); /*0xa9237*/
        if ( (unsigned __int64)((char *)v151[0] - (char *)v128 - 8) > 0x1F ) /*0xa9246*/
          goto LABEL_185; /*0xa9246*/
      }
      j_j_free(v128); /*0xa925e*/
LABEL_187:
      if ( !v126 ) /*0xa9265*/
        return; /*0xa9265*/
      *(_OWORD *)Block = 0; /*0xa926a*/
      v149 = 0; /*0xa926e*/
      v150 = 0; /*0xa9272*/
      Block[0] = (void *)sub_3C460(32); /*0xa9280*/
      v149 = 21; /*0xa9284*/
      v150 = 31; /*0xa928c*/
      strcpy((char *)Block[0], "Unlocking username..."); /*0xa929b*/
      goto LABEL_189; /*0xa929b*/
    default:
      return;
  }
}

// [3/7] Address: 0x47c830
// Method: SongInfoObject::~SongInfoObject
char *__fastcall SongInfoObject__dtor_SongInfoObject(char *Block, char a2)
{
  *(_QWORD *)Block = &SongInfoObject::`vftable'; /*0x47c844*/
  sub_3C310(Block + 824); /*0x47c850*/
  sub_3C310(Block + 792); /*0x47c85c*/
  sub_3C310(Block + 760); /*0x47c868*/
  sub_3C310(Block + 728); /*0x47c874*/
  sub_BB6F0(Block + 712, Block + 712); /*0x47c883*/
  sub_120170(Block + 688); /*0x47c88f*/
  sub_120170(Block + 664); /*0x47c89b*/
  sub_3C310(Block + 632); /*0x47c8a7*/
  sub_3C310(Block + 600); /*0x47c8b3*/
  sub_3DA90(Block + 560); /*0x47c8bf*/
  sub_3DB00(Block + 544); /*0x47c8cb*/
  sub_3C310(Block + 504); /*0x47c8d7*/
  sub_3C310(Block + 440); /*0x47c8e3*/
  sub_3C310(Block + 392); /*0x47c8ef*/
  sub_3C310(Block + 360); /*0x47c8fb*/
  sub_3C310(Block + 328); /*0x47c907*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)Block); /*0x47c90f*/
  if ( (a2 & 1) != 0 ) /*0x47c918*/
    j_j_free(Block); /*0x47c922*/
  return Block; /*0x47c927*/
}

// [4/7] Address: 0x48fff0
// Method: SongInfoObject::create_0
// Hidden C++ exception states: #wind=4
struct cocos2d::CCObject *__fastcall SongInfoObject_create_0(unsigned int a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCObject *result; // rax
  char v4[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v5; // [rsp+68h] [rbp-21h]
  __int64 v6; // [rsp+70h] [rbp-19h]
  __int64 v7; // [rsp+78h] [rbp-11h]
  __int128 v8; // [rsp+80h] [rbp-9h] BYREF
  __int64 v9; // [rsp+90h] [rbp+7h]
  __int64 v10; // [rsp+98h] [rbp+Fh]
  __int128 v11; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+2Fh]
  __int128 v14; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v15; // [rsp+D0h] [rbp+47h]
  __int64 v16; // [rsp+D8h] [rbp+4Fh]
  void *v17; // [rsp+F8h] [rbp+6Fh]

  v2 = qword_906070; /*0x490004*/
  if ( !qword_906070 ) /*0x49000e*/
  {
    v17 = operator new(0x3D0u); /*0x49001a*/
    qword_906070 = sub_47C350(v17); /*0x490027*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x490038*/
    v2 = qword_906070; /*0x49003a*/
  }
  result = MusicDownloadManager_getSongInfoObject(v2, a1); /*0x490043*/
  if ( !result ) /*0x49004b*/
  {
    v8 = 0; /*0x49006c*/
    v9 = 0; /*0x490072*/
    v10 = 15; /*0x490076*/
    LOBYTE(v8) = 0; /*0x49007e*/
    v11 = 0; /*0x490081*/
    v12 = 0; /*0x490085*/
    v13 = 15; /*0x490089*/
    LOBYTE(v11) = 0; /*0x490091*/
    v14 = 0; /*0x490094*/
    v15 = 0; /*0x490098*/
    v16 = 15; /*0x49009c*/
    LOBYTE(v14) = 0; /*0x4900a4*/
    v5 = 0; /*0x4900a7*/
    v6 = 7; /*0x4900ab*/
    v7 = 15; /*0x4900b3*/
    strcpy(v4, "Unknown"); /*0x4900c2*/
    result = (struct cocos2d::CCObject *)sub_4910B0( /*0x490116*/
                                           a1,
                                           (unsigned int)v4,
                                           (unsigned int)&v14,
                                           0,
                                           0,
                                           (__int64)&v11,
                                           0,
                                           (__int64)&v8,
                                           0,
                                           0,
                                           -1);
    *((_BYTE *)result + 472) = 1; /*0x49011b*/
  }
  return result; /*0x490122*/
}

// [5/7] Address: 0x491d50
// Method: SongInfoObject::encodeWithCoder
// Hidden C++ exception states: #wind=1
void __fastcall SongInfoObject_encodeWithCoder(__int64 a1, DS_Dictionary *a2)
{
  __int64 v4; // rbx
  char v5; // bl
  void *v6; // [rsp+30h] [rbp+8h]

  v4 = qword_905FD0; /*0x491d65*/
  if ( !qword_905FD0 ) /*0x491d6f*/
  {
    v6 = operator new(0x6E8u); /*0x491d7b*/
    qword_905FD0 = sub_2723A0(v6); /*0x491d89*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x491d9a*/
    v4 = qword_905FD0; /*0x491d9c*/
  }
  v5 = *(_BYTE *)(v4 + 354); /*0x491da3*/
  DS_Dictionary::setIntegerForKey(a2, "kCEK", 6); /*0x491dba*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708050, *(_DWORD *)(a1 + 320)); /*0x491dd1*/
  DS_Dictionary::setStringForKey(a2, &word_708048, a1 + 328); /*0x491de8*/
  DS_Dictionary::setStringForKey(a2, &word_70803C, a1 + 360); /*0x491dff*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708044, *(_DWORD *)(a1 + 424)); /*0x491e16*/
  DS_Dictionary::setFloatForKey(a2, (const char *)&word_708038, *(float *)(a1 + 428)); /*0x491e2e*/
  DS_Dictionary::setIntegerForKey(a2, "11", *(_DWORD *)(a1 + 432)); /*0x491e45*/
  DS_Dictionary::setBoolForKey(a2, "13", *(_BYTE *)(a1 + 488)); /*0x491e5d*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_732AF4, *(_DWORD *)(a1 + 492)); /*0x491e74*/
  if ( !v5 ) /*0x491e7c*/
  {
    if ( *(_QWORD *)(a1 + 616) ) /*0x491e82*/
      DS_Dictionary::setStringForKey(a2, &word_732CC4, a1 + 600); /*0x491e9d*/
    if ( *(_QWORD *)(a1 + 648) ) /*0x491ea3*/
      DS_Dictionary::setStringForKey(a2, &word_732D90, a1 + 632); /*0x491ebe*/
    DS_Dictionary::setStringForKey(a2, "10", a1 + 392); /*0x491ed5*/
    DS_Dictionary::setStringForKey(a2, &word_7231BC, a1 + 440); /*0x491eec*/
    DS_Dictionary::setStringForKey(a2, "15", a1 + 504); /*0x491f03*/
  }
  DS_Dictionary::setIntegerForKey(a2, "9", *(_DWORD *)(a1 + 476)); /*0x491f29*/
}

// [6/7] Address: 0x492560
// Method: SongInfoObject::getExtraArtistCount
__int64 __fastcall SongInfoObject_getExtraArtistCount(__int64 a1)
{
  __int64 v1; // r9
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ecx

  v1 = *(_QWORD *)(a1 + 544); /*0x492560*/
  v3 = (__int64 *)(*(_QWORD *)(a1 + 560) + 16 * (*(_QWORD *)(a1 + 584) & 0xED1A23545D43D219uLL)); /*0x492582*/
  v4 = v3[1]; /*0x492589*/
  if ( v4 != v1 ) /*0x492590*/
  {
    v5 = *v3; /*0x492599*/
    if ( *(_DWORD *)(v4 + 16) == 10004636 ) /*0x49259c*/
      goto LABEL_7; /*0x49259c*/
    while ( v4 != v5 ) /*0x4925a3*/
    {
      v4 = *(_QWORD *)(v4 + 8); /*0x4925a5*/
      if ( *(_DWORD *)(v4 + 16) == 10004636 ) /*0x4925b0*/
        goto LABEL_7; /*0x4925b0*/
    }
  }
  v4 = 0; /*0x4925b4*/
LABEL_7:
  if ( !v4 ) /*0x4925c0*/
    v4 = v1; /*0x4925c0*/
  v6 = *(_DWORD *)(a1 + 552) - 1; /*0x4925c7*/
  if ( v4 == v1 ) /*0x4925ca*/
    return *(unsigned int *)(a1 + 552); /*0x4925ca*/
  return v6; /*0x4925cf*/
}

// [7/7] Address: 0x493190
// Method: SongInfoObject::getTagsString
// Hidden C++ exception states: #wind=3
__int64 __fastcall SongInfoObject_getTagsString(_QWORD *a1, __int64 a2, char a3)
{
  char v6; // r12
  int v7; // r15d
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  size_t v15; // rdi
  void **v16; // rdx
  void *v17; // rcx
  void **v18; // rbx
  void **v19; // rdx
  cocos2d::CCString *v21; // rax
  char *CString; // rax
  size_t v23; // r8
  void *v24; // rcx
  int v25; // [rsp+30h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-41h] BYREF
  void *v27; // [rsp+48h] [rbp-31h]
  void *Src[2]; // [rsp+50h] [rbp-29h] BYREF
  size_t Size; // [rsp+60h] [rbp-19h]
  unsigned __int64 v30; // [rsp+68h] [rbp-11h]
  void *v31[2]; // [rsp+70h] [rbp-9h] BYREF
  size_t v32; // [rsp+80h] [rbp+7h]
  unsigned __int64 v33; // [rsp+88h] [rbp+Fh]

  v26 = a2; /*0x4931c4*/
  if ( a3 ) /*0x4931cb*/
  {
    if ( a1[97] ) /*0x4931cd*/
    {
      sub_3E4F0(a2, a1 + 95); /*0x4931e1*/
      return a2; /*0x4931e6*/
    }
  }
  else if ( a1[93] ) /*0x4931eb*/
  {
    sub_3E4F0(a2, a1 + 91); /*0x4931ff*/
    return a2; /*0x493204*/
  }
  if ( !a1[90] ) /*0x49320c*/
  {
    *(_OWORD *)a2 = 0; /*0x493216*/
    *(_QWORD *)(a2 + 16) = 0; /*0x493219*/
    *(_QWORD *)(a2 + 24) = 15; /*0x493221*/
    *(_BYTE *)a2 = 0; /*0x493229*/
    return a2; /*0x49322c*/
  }
  *(_OWORD *)Src = 0; /*0x493231*/
  Size = 0; /*0x493235*/
  v30 = 15; /*0x49323d*/
  LOBYTE(Src[0]) = 0; /*0x493245*/
  v6 = 1; /*0x493249*/
  v7 = 0; /*0x49324c*/
  v8 = (__int64 *)a1[89]; /*0x49324f*/
  v9 = *v8; /*0x493256*/
  v26 = v9; /*0x493259*/
  if ( (__int64 *)v9 == v8 ) /*0x493260*/
  {
LABEL_33:
    v18 = (void **)(a1 + 91); /*0x4933c8*/
    if ( a3 ) /*0x4933d2*/
      goto LABEL_34; /*0x4933d2*/
    goto LABEL_35; /*0x4933d2*/
  }
  while ( 1 ) /*0x493270*/
  {
    v10 = *(_DWORD *)(v9 + 28); /*0x493270*/
    if ( !qword_906070 ) /*0x49327b*/
    {
      v27 = operator new(0x3D0u); /*0x493287*/
      qword_906070 = sub_47C350(v27); /*0x493294*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x4932a5*/
    }
    v25 = v10; /*0x4932a7*/
    v11 = *(__int64 **)(qword_906070 + 472); /*0x4932b1*/
    v12 = (__int64 *)v11[1]; /*0x4932b8*/
    while ( !*((_BYTE *)v12 + 25) ) /*0x4932bc*/
    {
      if ( *((_DWORD *)v12 + 8) >= v10 ) /*0x4932c5*/
      {
        v11 = v12; /*0x4932cd*/
        v12 = (__int64 *)*v12; /*0x4932d0*/
      }
      else
      {
        v12 = (__int64 *)v12[2]; /*0x4932c7*/
      }
    }
    if ( *((_BYTE *)v11 + 25) || v10 < *((_DWORD *)v11 + 8) ) /*0x4932e2*/
    {
      *(_OWORD *)v31 = 0; /*0x49330d*/
      v15 = 0; /*0x493311*/
      v32 = 0; /*0x493313*/
      v14 = 15; /*0x493317*/
      v33 = 15; /*0x49331c*/
      LOBYTE(v31[0]) = 0; /*0x493320*/
    }
    else
    {
      v13 = sub_2D27F0(qword_906070 + 472, &v25); /*0x4932ef*/
      sub_3E4F0(v31, v13); /*0x4932fb*/
      v14 = v33; /*0x493300*/
      v15 = v32; /*0x493304*/
    }
    if ( v15 ) /*0x493327*/
      break; /*0x493327*/
LABEL_28:
    if ( v14 > 0xF ) /*0x49337a*/
    {
      v17 = v31[0]; /*0x493380*/
      if ( v14 + 1 >= 0x1000 ) /*0x49338e*/
      {
        v17 = (void *)*((_QWORD *)v31[0] - 1); /*0x493394*/
        if ( (unsigned __int64)((char *)v31[0] - (char *)v17 - 8) > 0x1F ) /*0x4933a3*/
          goto LABEL_49; /*0x4933a3*/
      }
      j_j_free(v17); /*0x4933a9*/
    }
    sub_BB770(&v26, a2); /*0x4933b2*/
    v9 = v26; /*0x4933b7*/
    if ( v26 == a1[89] ) /*0x4933c2*/
      goto LABEL_33; /*0x4933c2*/
  }
  if ( !v6 ) /*0x49332c*/
    sub_43D80(Src, ", ", 2u); /*0x49333f*/
  v16 = v31; /*0x493344*/
  if ( v14 > 0xF ) /*0x49334c*/
    v16 = (void **)v31[0]; /*0x49334c*/
  sub_43D80(Src, v16, v15); /*0x493358*/
  v6 = 0; /*0x49335d*/
  ++v7; /*0x493360*/
  if ( !a3 || v7 < 4 ) /*0x49336c*/
  {
    v14 = v33; /*0x493372*/
    goto LABEL_28; /*0x493372*/
  }
  if ( *((_DWORD *)a1 + 180) - v7 > 0 ) /*0x493449*/
  {
    v21 = cocos2d::CCString::createWithFormat(" +%i", *((_DWORD *)a1 + 180) - v7); /*0x493452*/
    CString = (char *)cocos2d::CCString::getCString(v21); /*0x49345b*/
    v23 = -1; /*0x493461*/
    do /*0x493473*/
      ++v23; /*0x493470*/
    while ( CString[v23] ); /*0x493473*/
    sub_43D80(Src, CString, v23); /*0x493480*/
  }
  if ( v33 > 0xF ) /*0x49348e*/
  {
    v24 = v31[0]; /*0x493497*/
    if ( v33 + 1 >= 0x1000 ) /*0x4934a5*/
    {
      v24 = (void *)*((_QWORD *)v31[0] - 1); /*0x4934ab*/
      if ( (unsigned __int64)((char *)v31[0] - (char *)v24 - 8) > 0x1F ) /*0x4934ba*/
LABEL_49:
        invoke_watson(0, 0, 0, 0, 0); /*0x4934c6*/
    }
    j_j_free(v24); /*0x4934bc*/
  }
LABEL_34:
  v18 = (void **)(a1 + 95); /*0x4933d4*/
LABEL_35:
  if ( v18 != Src ) /*0x4933e2*/
  {
    v19 = Src; /*0x4933e4*/
    if ( v30 > 0xF ) /*0x4933f1*/
      v19 = (void **)Src[0]; /*0x4933f1*/
    sub_3F5A0(v18, v19, Size); /*0x4933f9*/
  }
  sub_3E4F0(a2, v18); /*0x493404*/
  sub_3C310(Src); /*0x49340e*/
  return a2; /*0x493416*/
}

// Address: 0x48fff0
// Method: SongInfoObject::create
// Hidden C++ exception states: #wind=4
struct cocos2d::CCObject *__fastcall SongInfoObject_create_0(unsigned int a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCObject *result; // rax
  char v4[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v5; // [rsp+68h] [rbp-21h]
  __int64 v6; // [rsp+70h] [rbp-19h]
  __int64 v7; // [rsp+78h] [rbp-11h]
  __int128 v8; // [rsp+80h] [rbp-9h] BYREF
  __int64 v9; // [rsp+90h] [rbp+7h]
  __int64 v10; // [rsp+98h] [rbp+Fh]
  __int128 v11; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+2Fh]
  __int128 v14; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v15; // [rsp+D0h] [rbp+47h]
  __int64 v16; // [rsp+D8h] [rbp+4Fh]
  void *v17; // [rsp+F8h] [rbp+6Fh]

  v2 = qword_906070;
  if ( !qword_906070 )
  {
    v17 = operator new(0x3D0u);
    qword_906070 = sub_47C350(v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v2 = qword_906070;
  }
  result = MusicDownloadManager_getSongInfoObject(v2, a1);
  if ( !result )
  {
    v8 = 0;
    v9 = 0;
    v10 = 15;
    LOBYTE(v8) = 0;
    v11 = 0;
    v12 = 0;
    v13 = 15;
    LOBYTE(v11) = 0;
    v14 = 0;
    v15 = 0;
    v16 = 15;
    LOBYTE(v14) = 0;
    v5 = 0;
    v6 = 7;
    v7 = 15;
    strcpy(v4, "Unknown");
    result = (struct cocos2d::CCObject *)sub_4910B0(
                                           a1,
                                           (unsigned int)v4,
                                           (unsigned int)&v14,
                                           0,
                                           0,
                                           (__int64)&v11,
                                           0,
                                           (__int64)&v8,
                                           0,
                                           0,
                                           -1);
    *((_BYTE *)result + 472) = 1;
  }
  return result;
}

// Address: 0x48fff0
// Method: SongInfoObject::create
// Hidden C++ exception states: #wind=4
struct cocos2d::CCObject *__fastcall SongInfoObject_create_0(unsigned int a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCObject *result; // rax
  char v4[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v5; // [rsp+68h] [rbp-21h]
  __int64 v6; // [rsp+70h] [rbp-19h]
  __int64 v7; // [rsp+78h] [rbp-11h]
  __int128 v8; // [rsp+80h] [rbp-9h] BYREF
  __int64 v9; // [rsp+90h] [rbp+7h]
  __int64 v10; // [rsp+98h] [rbp+Fh]
  __int128 v11; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+2Fh]
  __int128 v14; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v15; // [rsp+D0h] [rbp+47h]
  __int64 v16; // [rsp+D8h] [rbp+4Fh]
  void *v17; // [rsp+F8h] [rbp+6Fh]

  v2 = qword_906070;
  if ( !qword_906070 )
  {
    v17 = operator new(0x3D0u);
    qword_906070 = sub_47C350(v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v2 = qword_906070;
  }
  result = MusicDownloadManager_getSongInfoObject(v2, a1);
  if ( !result )
  {
    v8 = 0;
    v9 = 0;
    v10 = 15;
    LOBYTE(v8) = 0;
    v11 = 0;
    v12 = 0;
    v13 = 15;
    LOBYTE(v11) = 0;
    v14 = 0;
    v15 = 0;
    v16 = 15;
    LOBYTE(v14) = 0;
    v5 = 0;
    v6 = 7;
    v7 = 15;
    strcpy(v4, "Unknown");
    result = (struct cocos2d::CCObject *)sub_4910B0(
                                           a1,
                                           (unsigned int)v4,
                                           (unsigned int)&v14,
                                           0,
                                           0,
                                           (__int64)&v11,
                                           0,
                                           (__int64)&v8,
                                           0,
                                           0,
                                           -1);
    *((_BYTE *)result + 472) = 1;
  }
  return result;
}
