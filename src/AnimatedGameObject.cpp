#include <Geode/binding/AnimatedGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0xa7850
// Method: AnimatedGameObject::updateObjectAnimation
// Hidden C++ exception states: #wind=4
void __fastcall AnimatedGameObject_updateObjectAnimation(__int64 a1)
{
  const char *v2; // rdx
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // r8
  __m128i si128; // xmm6
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  void *v10; // r8
  _WORD *v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  _BYTE v14[24]; // [rsp+40h] [rbp-98h] BYREF
  void *Block[2]; // [rsp+58h] [rbp-80h] BYREF
  __m128i v16; // [rsp+68h] [rbp-70h]
  void *v17[2]; // [rsp+78h] [rbp-60h] BYREF
  __m128i v18; // [rsp+88h] [rbp-50h]
  void *v19[2]; // [rsp+98h] [rbp-40h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-30h]

  v2 = (const char *)(a1 + 1040); /*0xa787f*/
  if ( *(_QWORD *)(a1 + 1064) > 0xFu ) /*0xa788b*/
    v2 = *(const char **)v2; /*0xa788d*/
  v3 = cocos2d::CCString::createWithFormat( /*0xa7897*/
         "Ban <cg>%s</c> from <cy>Trending</c>?\nTheir levels leave the tab now and stay out until allowed again.",
         v2);
  CString = cocos2d::CCString::getCString(v3); /*0xa78a0*/
  *(_OWORD *)v19 = 0; /*0xa78a9*/
  v20 = 0; /*0xa78b4*/
  v5 = -1; /*0xa78bd*/
  do /*0xa78c7*/
    ++v5; /*0xa78c4*/
  while ( CString[v5] ); /*0xa78c7*/
  sub_3C230(v19); /*0xa78d9*/
  *(_OWORD *)Block = 0; /*0xa78e2*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0xa78e7*/
  v16 = si128; /*0xa78ef*/
  LOBYTE(Block[0]) = 0; /*0xa78f5*/
  v7 = a1 + 1024; /*0xa78fa*/
  if ( !a1 ) /*0xa7906*/
    v7 = 0; /*0xa7906*/
  v8 = sub_BD170(v14); /*0xa790f*/
  v9 = sub_A4080(v7, 9, (unsigned int)"Confirm Ban", (unsigned int)v19, (__int64)&unk_719EA4, v8, (__int64)Block); /*0xa794c*/
  sub_685C0(v14); /*0xa7954*/
  if ( v16.m128i_i64[1] > 0xFuLL ) /*0xa7963*/
  {
    v10 = Block[0]; /*0xa7968*/
    if ( (unsigned __int64)(v16.m128i_i64[1] + 1) >= 0x1000 ) /*0xa7977*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0xa797d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0xa798c*/
        invoke_watson(0, 0, 0, 0, 0); /*0xa799d*/
    }
    j_j_free(v10); /*0xa79a7*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0xa79ac*/
  }
  v16 = si128; /*0xa79b4*/
  LOBYTE(Block[0]) = 0; /*0xa79ba*/
  *(_OWORD *)v17 = 0; /*0xa79c2*/
  v11 = (_WORD *)sub_3C460(192); /*0xa79cc*/
  v17[0] = v11; /*0xa79d4*/
  v18 = _mm_load_si128((const __m128i *)&xmmword_8310D0); /*0xa79e1*/
  qmemcpy(
    v11,
    "The player is not told. The reason and categories only go to the moderator log.\n"
    "\n"
    "No duration: the ban stays until a moderator allows the account again or RobTop rates one of their levels",
    186);
  v11[93] = (unsigned __int8)aThePlayerIsNot[186]; /*0xa7a67*/
  sub_A4F70(v9, "Trending Ban", v17); /*0xa7a81*/
  if ( v18.m128i_i64[1] > 0xFuLL ) /*0xa7a93*/
  {
    v12 = v17[0]; /*0xa7a98*/
    if ( (unsigned __int64)(v18.m128i_i64[1] + 1) >= 0x1000 ) /*0xa7aa7*/
    {
      v12 = (void *)*((_QWORD *)v17[0] - 1); /*0xa7aad*/
      if ( (unsigned __int64)((char *)v17[0] - (char *)v12 - 8) > 0x1F ) /*0xa7abc*/
        invoke_watson(0, 0, 0, 0, 0); /*0xa7acd*/
    }
    j_j_free(v12); /*0xa7ad4*/
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL))(v9); /*0xa7adf*/
  if ( *((_QWORD *)&v20 + 1) > 0xFu ) /*0xa7af2*/
  {
    v13 = v19[0]; /*0xa7af7*/
    if ( (unsigned __int64)(*((_QWORD *)&v20 + 1) + 1LL) >= 0x1000 ) /*0xa7b09*/
    {
      v13 = (void *)*((_QWORD *)v19[0] - 1); /*0xa7b0f*/
      if ( (unsigned __int64)((char *)v19[0] - (char *)v13 - 8) > 0x1F ) /*0xa7b1e*/
        invoke_watson(0, 0, 0, 0, 0); /*0xa7b2f*/
    }
    j_j_free(v13); /*0xa7b36*/
  }
}

// [2/11] Address: 0x640aa0
// Method: AnimatedGameObject::activateObject
void __fastcall AnimatedGameObject_activateObject(__int64 a1, __int64 a2)
{
  char v2; // di
  int v4; // edx
  __int64 v5; // rax

  v2 = *(_BYTE *)(a1 + 773); /*0x640aaa*/
  *(_BYTE *)(a1 + 1006) = 0; /*0x640ab4*/
  if ( !v2 && !*(_BYTE *)(a1 + 978) ) /*0x640ac4*/
  {
    *(_BYTE *)(a1 + 773) = 1; /*0x640acd*/
    if ( !*(_BYTE *)(a1 + 1007) ) /*0x640ad4*/
    {
      LOBYTE(a2) = 1; /*0x640ae0*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, a2); /*0x640ae2*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1128LL))(a1, 0); /*0x640af0*/
      if ( *(_QWORD *)(a1 + 752) ) /*0x640af6*/
      {
        v4 = *(_DWORD *)(a1 + 1132); /*0x640b00*/
        if ( !v4 ) /*0x640b08*/
          v4 = *(_DWORD *)(a1 + 1124); /*0x640b0a*/
        v5 = GameObject_parentForZLayer(a1, v4, 1u, 5); /*0x640b1c*/
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 456LL))( /*0x640b3b*/
          v5,
          *(_QWORD *)(a1 + 752),
          4294966296LL);
      }
      sub_2959C0(a1, 0); /*0x640b43*/
    }
  }
  if ( *(_BYTE *)(a1 + 773) ) /*0x640b48*/
  {
    if ( !v2 ) /*0x640b54*/
      sub_640820(a1); /*0x640b59*/
  }
}

// [3/11] Address: 0x640b70
// Method: AnimatedGameObject::deactivateObject
void __fastcall AnimatedGameObject_deactivateObject(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rbx
  cocos2d::CCNode *v5; // rcx
  cocos2d::CCNode *v6; // rcx
  _BYTE v7[32]; // [rsp+28h] [rbp-30h] BYREF

  v2 = *(_BYTE *)(a1 + 773); /*0x640b89*/
  EnhancedGameObject_deactivateObject((__int64 *)a1, a2); /*0x640b93*/
  if ( v2 && !*(_BYTE *)(a1 + 773) ) /*0x640ba0*/
  {
    sub_3E4F0(v7, *(_QWORD *)(*(_QWORD *)(a1 + 1480) + 664LL) + 408LL); /*0x640bc7*/
    sub_58AD0(a1 + 1512, v7); /*0x640bd8*/
    sub_3C310(v7); /*0x640be2*/
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1480) + 664LL); /*0x640bee*/
    sub_86290(v4); /*0x640bf8*/
    v5 = *(cocos2d::CCNode **)(*(_QWORD *)(v4 + 320) + 688LL); /*0x640c04*/
    if ( v5 ) /*0x640c0e*/
      cocos2d::CCNode::stopAllActions(v5); /*0x640c10*/
    v6 = *(cocos2d::CCNode **)(*(_QWORD *)(v4 + 320) + 680LL); /*0x640c1d*/
    if ( v6 ) /*0x640c27*/
      cocos2d::CCNode::stopAllActions(v6); /*0x640c29*/
  }
}

// [4/11] Address: 0x640c50
// Method: AnimatedGameObject::setOpacity
unsigned int __fastcall AnimatedGameObject_setOpacity(__int64 a1, int a2)
{
  __int64 v3; // rbp
  unsigned int result; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned __int8 v7; // si
  cocos2d::CCArray *v8; // rdi
  struct cocos2d::CCObject *v9; // rax

  GameObject_setOpacity(a1, a2); /*0x640c5d*/
  v3 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1); /*0x640c79*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1160) + 320LL) + 40LL))( /*0x640c87*/
             *(_QWORD *)(a1 + 1160) + 320LL,
             v3);
  v5 = *(_QWORD *)(a1 + 1168); /*0x640c8a*/
  if ( v5 ) /*0x640c94*/
  {
    v6 = 0; /*0x640c9b*/
    v7 = 0; /*0x640ca8*/
    if ( !*(_BYTE *)(a1 + 708) ) /*0x640c9d*/
      v7 = v3; /*0x640caa*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v5 + 320) + 40LL))(v5 + 320, v7); /*0x640cbb*/
    v8 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1168) + 480LL))(*(_QWORD *)(a1 + 1168)); /*0x640cd1*/
    result = cocos2d::CCArray::count(v8); /*0x640cd4*/
    if ( result ) /*0x640cdc*/
    {
      do /*0x640d09*/
      {
        v9 = cocos2d::CCArray::objectAtIndex(v8, v6); /*0x640ce5*/
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v9 + 40) + 40LL))((__int64)v9 + 320, v7); /*0x640cf9*/
        ++v6; /*0x640cff*/
        result = cocos2d::CCArray::count(v8); /*0x640d01*/
      }
      while ( v6 < result ); /*0x640d09*/
    }
  }
  return result; /*0x640d15*/
}

// [5/11] Address: 0x640d20
// Method: AnimatedGameObject::setObjectColor
__int64 __fastcall AnimatedGameObject_setObjectColor(__int64 a1, const struct cocos2d::_ccColor3B *a2)
{
  cocos2d::CCSprite::setColor((cocos2d::CCSprite *)(a1 + 320), a2); /*0x640d37*/
  return (**(__int64 (__fastcall ***)(__int64, const struct cocos2d::_ccColor3B *))(*(_QWORD *)(a1 + 1480) + 320LL))(
           *(_QWORD *)(a1 + 1480) + 320LL,
           a2);
}

// [6/11] Address: 0x640d60
// Method: AnimatedGameObject::animationFinished
// Hidden C++ exception states: #wind=10
void __fastcall AnimatedGameObject_animationFinished(__int64 a1, __int64 a2)
{
  char v4; // si
  __int64 v5; // rdx
  bool v6; // di
  int v7; // eax
  __int64 v8; // r8
  void **v9; // rcx
  char *v10; // rsi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r12
  size_t v13; // r8
  int v14; // ebx
  char *v15; // rax
  bool v16; // zf
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  void **v21; // rcx
  char *v22; // r15
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r12
  size_t v25; // r8
  int v26; // ebx
  char *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  float v30; // xmm0_4
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // ebx
  void *v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rax
  float v38; // xmm0_4
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r8
  void **v42; // rcx
  char *v43; // r12
  unsigned __int64 v44; // r13
  size_t v45; // r8
  int v46; // esi
  char *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r8
  void **v51; // rcx
  char *v52; // r15
  unsigned __int64 v53; // r13
  unsigned __int64 v54; // r12
  size_t v55; // r8
  int v56; // esi
  char *v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // r8
  void **v61; // rcx
  unsigned __int64 v62; // r15
  size_t v63; // r8
  int v64; // ebx
  float v65; // xmm0_4
  __int128 v66; // xmm0
  __int64 v67; // r8
  void **v68; // rcx
  char *v69; // r12
  unsigned __int64 v70; // r13
  size_t v71; // r8
  int v72; // r15d
  char *v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  char v76; // si
  __int64 v77; // r8
  char v78; // si
  void **v79; // rcx
  char *v80; // r13
  unsigned __int64 v81; // r12
  size_t v82; // r8
  char v83; // si
  __int64 v84; // r8
  void **v85; // rcx
  unsigned __int64 v86; // r12
  size_t v87; // r8
  __int128 v88; // xmm0
  char v89; // si
  __int64 v90; // r8
  void **v91; // rcx
  unsigned __int64 v92; // r12
  size_t v93; // r8
  char v94; // r12
  char *v95; // rax
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // r8
  void **v99; // rcx
  char *v100; // r15
  unsigned __int64 v101; // r13
  unsigned __int64 v102; // r12
  size_t v103; // r8
  int v104; // ebx
  char *v105; // rax
  float v106; // xmm0_4
  int v107; // [rsp+40h] [rbp-C0h]
  void *v108[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v109; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v110; // [rsp+60h] [rbp-A0h]
  __int128 Buf2; // [rsp+68h] [rbp-98h] BYREF
  __m128i si128; // [rsp+78h] [rbp-88h]
  void *Buf1[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v114; // [rsp+98h] [rbp-68h]
  unsigned __int64 v115; // [rsp+A0h] [rbp-60h]
  void *v116[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v117; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v118; // [rsp+C0h] [rbp-40h]
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v120; // [rsp+D8h] [rbp-28h]
  void *v121[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v122; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v123; // [rsp+100h] [rbp+0h]

  v4 = 0; /*0x640d93*/
  v6 = 1; /*0x640dcc*/
  if ( !*(_BYTE *)(a1 + 40) ) /*0x640d9b*/
  {
    v5 = *(_QWORD *)(a1 + 16); /*0x640da1*/
    if ( !v5 || (sub_3E4F0(&Buf2, v5 + 632), v4 = -127, !si128.m128i_i64[0]) ) /*0x640dc5*/
      v6 = 0; /*0x640d9f*/
  }
  if ( (v4 & 1) != 0 ) /*0x640dd3*/
  {
    v4 &= ~1u; /*0x640dd5*/
    sub_3C310(&Buf2); /*0x640ddd*/
  }
  if ( !v6 ) /*0x640de5*/
  {
    v107 = *(_DWORD *)(a1 + 84); /*0x640def*/
    v7 = *(_DWORD *)(a1 - 428); /*0x640df3*/
    switch ( v7 ) /*0x640dff*/
    {
      case 918: /*0x640dff*/
        si128.m128i_i64[0] = 8; /*0x640e13*/
        si128.m128i_i64[1] = 15; /*0x640e18*/
        Buf2 = 0x31306B6361747461uLL; /*0x640e2a*/
        *(_OWORD *)Buf1 = 0; /*0x640e34*/
        v114 = 0; /*0x640e38*/
        v115 = 0; /*0x640e3c*/
        v8 = -1; /*0x640e47*/
        do /*0x640e53*/
          ++v8; /*0x640e50*/
        while ( *(_BYTE *)(a2 + v8) ); /*0x640e53*/
        sub_3C230(Buf1); /*0x640e61*/
        v9 = Buf1; /*0x640e66*/
        v10 = (char *)Buf1[0]; /*0x640e6a*/
        v11 = v115; /*0x640e6e*/
        if ( v115 > 0xF ) /*0x640e76*/
          v9 = (void **)Buf1[0]; /*0x640e76*/
        v12 = v114; /*0x640e7a*/
        v13 = v114; /*0x640e7e*/
        if ( v114 > 8 ) /*0x640e85*/
          v13 = 8; /*0x640e85*/
        v14 = memcmp(v9, &Buf2, v13); /*0x640e93*/
        if ( !v14 ) /*0x640e99*/
        {
          if ( v12 >= 8 ) /*0x640e9f*/
            v14 = v12 > 8; /*0x640eab*/
          else
            v14 = -1; /*0x640ea1*/
        }
        if ( v11 > 0xF ) /*0x640eb2*/
        {
          v15 = v10; /*0x640eb8*/
          if ( v11 + 1 >= 0x1000 ) /*0x640ec2*/
          {
            v10 = (char *)*((_QWORD *)v10 - 1); /*0x640ec8*/
            if ( (unsigned __int64)(v15 - v10 - 8) > 0x1F ) /*0x640ed7*/
              invoke_watson(0, 0, 0, 0, 0); /*0x640ee8*/
          }
          j_j_free(v10); /*0x640ef2*/
        }
        v110 = 15; /*0x640ef8*/
        v16 = v14 == 0; /*0x640f01*/
        v17 = *(_QWORD *)(a1 + 16); /*0x640f03*/
        if ( v16 ) /*0x640f07*/
        {
          v109 = 13; /*0x640f16*/
          strcpy((char *)v108, "attack01_loop"); /*0x640f27*/
          HIWORD(v108[1]) = 0; /*0x640f33*/
          sub_86290(*(_QWORD *)(v17 + 664)); /*0x640f58*/
          v18 = sub_3E4F0(&Buf2, v108); /*0x640f67*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v17 + 664), v18); /*0x640f76*/
          sub_3C310(v108); /*0x640f81*/
          *(_DWORD *)(a1 + 84) = 1; /*0x640f86*/
          goto LABEL_191; /*0x640f8e*/
        }
        *(_OWORD *)v108 = 0; /*0x640f96*/
        v109 = 4; /*0x640f9b*/
        strcpy((char *)v108, "bite"); /*0x640fa4*/
        sub_86290(*(_QWORD *)(v17 + 664)); /*0x640fc2*/
        v19 = sub_3E4F0(&Buf2, v108); /*0x640fd1*/
        SpriteAnimationManager_runAnimation(*(_QWORD *)(v17 + 664), v19); /*0x640fe0*/
        goto LABEL_190; /*0x640fe6*/
      case 1327: /*0x640dff*/
        *(_OWORD *)v116 = 0; /*0x640ff9*/
        v117 = 6; /*0x641002*/
        v118 = 15; /*0x641006*/
        strcpy((char *)v116, "idle01"); /*0x641014*/
        *(_OWORD *)Buf1 = 0; /*0x641026*/
        v114 = 0; /*0x64102a*/
        v115 = 0; /*0x64102e*/
        v20 = -1; /*0x641039*/
        do /*0x641043*/
          ++v20; /*0x641040*/
        while ( *(_BYTE *)(a2 + v20) ); /*0x641043*/
        sub_3C230(Buf1); /*0x641051*/
        v21 = Buf1; /*0x641056*/
        v22 = (char *)Buf1[0]; /*0x64105a*/
        v23 = v115; /*0x64105e*/
        if ( v115 > 0xF ) /*0x641066*/
          v21 = (void **)Buf1[0]; /*0x641066*/
        v24 = v114; /*0x64106a*/
        v25 = v114; /*0x64106e*/
        if ( v114 > 6 ) /*0x641075*/
          v25 = 6; /*0x641075*/
        v26 = memcmp(v21, v116, v25); /*0x641082*/
        if ( !v26 ) /*0x641088*/
        {
          if ( v24 >= 6 ) /*0x64108e*/
            v26 = v24 > 6; /*0x64109a*/
          else
            v26 = -1; /*0x641090*/
        }
        if ( v23 > 0xF ) /*0x6410a1*/
        {
          v27 = v22; /*0x6410a7*/
          if ( v23 + 1 >= 0x1000 ) /*0x6410b1*/
          {
            v22 = (char *)*((_QWORD *)v22 - 1); /*0x6410b7*/
            if ( (unsigned __int64)(v27 - v22 - 8) > 0x1F ) /*0x6410c6*/
              invoke_watson(0, 0, 0, 0, 0); /*0x6410d7*/
          }
          j_j_free(v22); /*0x6410e1*/
        }
        if ( v26 ) /*0x6410e9*/
        {
LABEL_45:
          *(_OWORD *)v108 = 0; /*0x6410eb*/
          v109 = 6; /*0x6410f3*/
          v110 = 15; /*0x6410f8*/
          strcpy((char *)v108, "idle01"); /*0x641107*/
          v28 = *(_QWORD *)(a1 + 16); /*0x641126*/
          sub_86290(*(_QWORD *)(v28 + 664)); /*0x641131*/
          v29 = sub_3E4F0(&Buf2, v108); /*0x641140*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v28 + 664), v29); /*0x64114f*/
LABEL_190:
          sub_3C310(v108); /*0x642075*/
LABEL_191:
          if ( *(_DWORD *)(a1 + 84) == v107 ) /*0x64208a*/
            *(_DWORD *)(a1 + 84) = 0; /*0x64208c*/
          return; /*0x64208c*/
        }
        v30 = (float)rand() / 32767.0; /*0x641167*/
        v109 = 6; /*0x64116f*/
        v110 = 15; /*0x641174*/
        v31 = *(_QWORD *)(a1 + 16); /*0x64117d*/
        *(_OWORD *)v108 = 0; /*0x64118b*/
        BYTE6(v108[0]) = 0; /*0x641190*/
        if ( v30 > 0.75 ) /*0x641195*/
          goto LABEL_47; /*0x641195*/
        goto LABEL_49; /*0x641195*/
      case 1328: /*0x640dff*/
        Buf2 = 0; /*0x641245*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_830F30); /*0x641252*/
        strcpy((char *)&Buf2, "idle01"); /*0x64125e*/
        *(_OWORD *)Block = 0; /*0x641273*/
        v120 = 0; /*0x64127a*/
        v33 = -1; /*0x64127f*/
        do /*0x641289*/
          ++v33; /*0x641286*/
        while ( *(_BYTE *)(a2 + v33) ); /*0x641289*/
        sub_3C230(Block); /*0x641299*/
        v34 = sub_3C160(Block, &Buf2); /*0x6412ac*/
        if ( *((_QWORD *)&v120 + 1) > 0xFu ) /*0x6412b6*/
        {
          v35 = Block[0]; /*0x6412bb*/
          if ( (unsigned __int64)(*((_QWORD *)&v120 + 1) + 1LL) >= 0x1000 ) /*0x6412c9*/
          {
            v35 = (void *)*((_QWORD *)Block[0] - 1); /*0x6412cf*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v35 - 8) > 0x1F ) /*0x6412de*/
              invoke_watson(0, 0, 0, 0, 0); /*0x6412ef*/
          }
          j_j_free(v35); /*0x6412f9*/
        }
        if ( v34 ) /*0x641301*/
          goto LABEL_59; /*0x641301*/
        v38 = (float)rand() / 32767.0; /*0x64138e*/
        v110 = 15; /*0x64139b*/
        v39 = *(_QWORD *)(a1 + 16); /*0x6413a4*/
        v109 = 6; /*0x6413a8*/
        *(_OWORD *)v108 = 0; /*0x6413b7*/
        BYTE6(v108[0]) = 0; /*0x6413bc*/
        if ( v38 > 0.89999998 ) /*0x6413c1*/
        {
LABEL_61:
          qmemcpy(v108, "idle02", 6); /*0x6413c3*/
LABEL_62:
          sub_86290(*(_QWORD *)(v39 + 664)); /*0x6413de*/
          v40 = sub_3E4F0(&Buf2, v108); /*0x6413f9*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v39 + 664), v40); /*0x641408*/
          sub_3C310(v108); /*0x641413*/
          goto LABEL_191; /*0x641418*/
        }
        break;
      case 1584: /*0x640dff*/
        si128.m128i_i64[0] = 8; /*0x641490*/
        si128.m128i_i64[1] = 15; /*0x641495*/
        Buf2 = 0x32306B6361747461uLL; /*0x6414a7*/
        *(_OWORD *)v108 = 0; /*0x6414b1*/
        v109 = 0; /*0x6414b6*/
        v110 = 0; /*0x6414bb*/
        v41 = -1; /*0x6414c7*/
        do /*0x6414d3*/
          ++v41; /*0x6414d0*/
        while ( *(_BYTE *)(a2 + v41) ); /*0x6414d3*/
        sub_3C230(v108); /*0x6414e2*/
        v42 = v108; /*0x6414e7*/
        v43 = (char *)v108[0]; /*0x6414ec*/
        if ( v110 > 0xF ) /*0x6414f7*/
          v42 = (void **)v108[0]; /*0x6414f7*/
        v44 = v109; /*0x6414fb*/
        v45 = v109; /*0x641500*/
        if ( v109 > 8 ) /*0x641507*/
          v45 = 8; /*0x641507*/
        v46 = memcmp(v42, &Buf2, v45); /*0x641515*/
        if ( !v46 ) /*0x64151c*/
        {
          if ( v44 >= 8 ) /*0x641522*/
            v46 = v44 > 8; /*0x64152f*/
          else
            v46 = -1; /*0x641524*/
        }
        if ( v110 > 0xF ) /*0x64153c*/
        {
          v47 = v43; /*0x641542*/
          if ( v110 + 1 >= 0x1000 ) /*0x64154c*/
          {
            v43 = (char *)*((_QWORD *)v43 - 1); /*0x641552*/
            if ( (unsigned __int64)(v47 - v43 - 8) > 0x1F ) /*0x641562*/
              invoke_watson(0, 0, 0, 0, 0); /*0x641573*/
          }
          j_j_free(v43); /*0x64157d*/
        }
        if ( !v46 ) /*0x641585*/
        {
          v109 = 13; /*0x641594*/
          v110 = 15; /*0x64159d*/
          strcpy((char *)v108, "attack02_loop"); /*0x6415ae*/
          HIWORD(v108[1]) = 0; /*0x6415ba*/
          v48 = *(_QWORD *)(a1 + 16); /*0x6415d8*/
          sub_86290(*(_QWORD *)(v48 + 664)); /*0x6415e3*/
          v49 = sub_3E4F0(&Buf2, v108); /*0x6415f2*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v48 + 664), v49); /*0x641601*/
          sub_3C310(v108); /*0x64160c*/
          *(_DWORD *)(a1 + 84) = 9; /*0x641611*/
          goto LABEL_191; /*0x641619*/
        }
        *(_OWORD *)v116 = 0; /*0x641621*/
        v117 = 5; /*0x64162a*/
        v118 = 15; /*0x64162e*/
        strcpy((char *)v116, "sleep"); /*0x64163c*/
        *(_OWORD *)Buf1 = 0; /*0x64164d*/
        v114 = 0; /*0x641651*/
        v115 = 0; /*0x641655*/
        v50 = -1; /*0x641659*/
        do /*0x641663*/
          ++v50; /*0x641660*/
        while ( *(_BYTE *)(a2 + v50) ); /*0x641663*/
        sub_3C230(Buf1); /*0x641671*/
        v51 = Buf1; /*0x641676*/
        v52 = (char *)Buf1[0]; /*0x64167a*/
        v53 = v115; /*0x64167e*/
        if ( v115 > 0xF ) /*0x641686*/
          v51 = (void **)Buf1[0]; /*0x641686*/
        v54 = v114; /*0x64168a*/
        v55 = v114; /*0x64168e*/
        if ( v114 > 5 ) /*0x641695*/
          v55 = 5; /*0x641695*/
        v56 = memcmp(v51, v116, v55); /*0x6416a2*/
        if ( !v56 ) /*0x6416a8*/
        {
          if ( v54 >= 5 ) /*0x6416ae*/
            v56 = v54 > 5; /*0x6416ba*/
          else
            v56 = -1; /*0x6416b0*/
        }
        if ( v53 > 0xF ) /*0x6416c2*/
        {
          v57 = v52; /*0x6416c8*/
          if ( v53 + 1 >= 0x1000 ) /*0x6416d2*/
          {
            v52 = (char *)*((_QWORD *)v52 - 1); /*0x6416d8*/
            if ( (unsigned __int64)(v57 - v52 - 8) > 0x1F ) /*0x6416e7*/
              invoke_watson(0, 0, 0, 0, 0); /*0x6416f8*/
          }
          j_j_free(v52); /*0x641702*/
        }
        if ( !v56 ) /*0x64170d*/
        {
          v108[1] = 0; /*0x641713*/
          v109 = 10; /*0x641718*/
          v110 = 15; /*0x641721*/
          strcpy((char *)v108, "sleep_loop"); /*0x641732*/
          v58 = *(_QWORD *)(a1 + 16); /*0x641753*/
          sub_86290(*(_QWORD *)(v58 + 664)); /*0x64175e*/
          v59 = sub_3E4F0(&Buf2, v108); /*0x64176d*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v58 + 664), v59); /*0x64177c*/
          sub_3C310(v108); /*0x641787*/
          *(_DWORD *)(a1 + 84) = 7; /*0x64178c*/
          goto LABEL_191; /*0x641794*/
        }
        *(_OWORD *)Buf1 = 0; /*0x641799*/
        v114 = 6; /*0x6417a2*/
        v115 = 15; /*0x6417a6*/
        strcpy((char *)Buf1, "idle01"); /*0x6417b4*/
        *(_OWORD *)v108 = 0; /*0x6417c6*/
        v109 = 0; /*0x6417ce*/
        v110 = 0; /*0x6417d3*/
        v60 = -1; /*0x6417d8*/
        do /*0x6417e3*/
          ++v60; /*0x6417e0*/
        while ( *(_BYTE *)(a2 + v60) ); /*0x6417e3*/
        sub_3C230(v108); /*0x6417f1*/
        v61 = v108; /*0x6417f6*/
        if ( v110 > 0xF ) /*0x641801*/
          v61 = (void **)v108[0]; /*0x641801*/
        v62 = v109; /*0x641807*/
        v63 = v109; /*0x64180c*/
        if ( v109 > 6 ) /*0x641813*/
          v63 = 6; /*0x641813*/
        v64 = memcmp(v61, Buf1, v63); /*0x641820*/
        if ( !v64 ) /*0x641824*/
        {
          if ( v62 >= 6 ) /*0x64182a*/
            v64 = v62 > 6; /*0x641833*/
          else
            v64 = -1; /*0x64182c*/
        }
        sub_3C310(v108); /*0x64183b*/
        sub_3C310(Buf1); /*0x641845*/
        if ( v64 ) /*0x64184c*/
        {
LABEL_59:
          *(_OWORD *)v108 = 0; /*0x641303*/
          v109 = 6; /*0x641310*/
          v110 = 15; /*0x641315*/
          strcpy((char *)v108, "idle01"); /*0x641324*/
          v36 = *(_QWORD *)(a1 + 16); /*0x641343*/
          sub_86290(*(_QWORD *)(v36 + 664)); /*0x64134e*/
          v37 = sub_3E4F0(&Buf2, v108); /*0x64135d*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v36 + 664), v37); /*0x64136c*/
          sub_3C310(v108); /*0x641377*/
          goto LABEL_191; /*0x64137c*/
        }
        v65 = (float)rand() / 32767.0; /*0x6418d4*/
        v109 = 6; /*0x6418dc*/
        v110 = 15; /*0x6418e1*/
        v39 = *(_QWORD *)(a1 + 16); /*0x6418ea*/
        *(_OWORD *)v108 = 0; /*0x6418f8*/
        BYTE6(v108[0]) = 0; /*0x6418fd*/
        if ( v65 > 0.80000001 ) /*0x641902*/
          goto LABEL_61; /*0x641902*/
        break;
      case 2012: /*0x640dff*/
        v66 = 0; /*0x6419c3*/
        v117 = 10; /*0x6419d0*/
        v118 = 15; /*0x6419d4*/
        *(_QWORD *)&v66 = 0x6B63617474416F74LL; /*0x6419dc*/
        *(_OWORD *)v116 = v66; /*0x6419e4*/
        strcpy((char *)&v116[1], "03"); /*0x6419f0*/
        *(_OWORD *)v108 = 0; /*0x6419fb*/
        v109 = 0; /*0x641a00*/
        v110 = 0; /*0x641a05*/
        v67 = -1; /*0x641a11*/
        do /*0x641a17*/
          ++v67; /*0x641a14*/
        while ( *(_BYTE *)(a2 + v67) ); /*0x641a17*/
        sub_3C230(v108); /*0x641a26*/
        v68 = v108; /*0x641a2b*/
        v69 = (char *)v108[0]; /*0x641a30*/
        if ( v110 > 0xF ) /*0x641a3b*/
          v68 = (void **)v108[0]; /*0x641a3b*/
        v70 = v109; /*0x641a3f*/
        v71 = v109; /*0x641a44*/
        if ( v109 > 0xA ) /*0x641a4b*/
          v71 = 10; /*0x641a4b*/
        v72 = memcmp(v68, v116, v71); /*0x641a58*/
        if ( !v72 ) /*0x641a5f*/
        {
          if ( v70 >= 0xA ) /*0x641a65*/
            v72 = v70 > 0xA; /*0x641a73*/
          else
            v72 = -1; /*0x641a67*/
        }
        if ( v110 > 0xF ) /*0x641a80*/
        {
          v73 = v69; /*0x641a86*/
          if ( v110 + 1 >= 0x1000 ) /*0x641a90*/
          {
            v69 = (char *)*((_QWORD *)v69 - 1); /*0x641a96*/
            if ( (unsigned __int64)(v73 - v69 - 8) > 0x1F ) /*0x641aa6*/
              invoke_watson(0, 0, 0, 0, 0); /*0x641ab7*/
          }
          j_j_free(v69); /*0x641ac1*/
        }
        if ( !v72 ) /*0x641acd*/
        {
          v108[1] = 0; /*0x641acf*/
          v109 = 8; /*0x641ada*/
          v110 = 15; /*0x641adf*/
          strcpy((char *)v108, "attack03"); /*0x641af2*/
          v74 = *(_QWORD *)(a1 + 16); /*0x641b06*/
          sub_86290(*(_QWORD *)(v74 + 664)); /*0x641b11*/
          v75 = sub_3E4F0(&Buf2, v108); /*0x641b20*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v74 + 664), v75); /*0x641b2f*/
          sub_3C310(v108); /*0x641b3a*/
          *(_DWORD *)(a1 + 84) = 6; /*0x641b3f*/
          goto LABEL_191; /*0x641b47*/
        }
        HIDWORD(Block[1]) = 0; /*0x641b4c*/
        *(_QWORD *)&v120 = 12; /*0x641b56*/
        *((_QWORD *)&v120 + 1) = 15; /*0x641b5a*/
        strcpy((char *)Block, "fromAttack03"); /*0x641b6a*/
        v76 = v4 | 2; /*0x641b7c*/
        *(_OWORD *)Buf1 = 0; /*0x641b86*/
        v114 = 0; /*0x641b8c*/
        v115 = 0; /*0x641b90*/
        v77 = -1; /*0x641b94*/
        do /*0x641b9a*/
          ++v77; /*0x641b97*/
        while ( *(_BYTE *)(a2 + v77) ); /*0x641b9a*/
        sub_3C230(Buf1); /*0x641ba7*/
        v78 = v76 | 4; /*0x641bad*/
        v79 = Buf1; /*0x641bb0*/
        v80 = (char *)Buf1[0]; /*0x641bb4*/
        if ( v115 > 0xF ) /*0x641bbd*/
          v79 = (void **)Buf1[0]; /*0x641bbd*/
        v81 = v114; /*0x641bc1*/
        v82 = v114; /*0x641bc5*/
        if ( v114 > 0xC ) /*0x641bcc*/
          v82 = 12; /*0x641bcc*/
        if ( !memcmp(v79, Block, v82) && v81 == 12 ) /*0x641be7*/
          goto LABEL_154; /*0x641be7*/
        si128.m128i_i64[0] = 8; /*0x641bf5*/
        si128.m128i_i64[1] = 15; /*0x641bfa*/
        Buf2 = 0x32306B6361747461uLL; /*0x641c0c*/
        v83 = v78 | 8; /*0x641c16*/
        *(_OWORD *)v121 = 0; /*0x641c1d*/
        v122 = 0; /*0x641c23*/
        v123 = 0; /*0x641c27*/
        v84 = -1; /*0x641c2b*/
        do /*0x641c33*/
          ++v84; /*0x641c30*/
        while ( *(_BYTE *)(a2 + v84) ); /*0x641c33*/
        sub_3C230(v121); /*0x641c40*/
        v78 = v83 | 0x10; /*0x641c46*/
        v85 = v121; /*0x641c49*/
        if ( v123 > 0xF ) /*0x641c52*/
          v85 = (void **)v121[0]; /*0x641c52*/
        v86 = v122; /*0x641c57*/
        v87 = v122; /*0x641c5b*/
        if ( v122 > 8 ) /*0x641c62*/
          v87 = 8; /*0x641c62*/
        if ( !memcmp(v85, &Buf2, v87) && v86 == 8 ) /*0x641c78*/
          goto LABEL_154; /*0x641c78*/
        v88 = 0; /*0x641c7e*/
        v117 = 10; /*0x641c85*/
        v118 = 15; /*0x641c8d*/
        *(_QWORD *)&v88 = 0x6B63617474416F74LL; /*0x641c95*/
        *(_OWORD *)v116 = v88; /*0x641c9d*/
        strcpy((char *)&v116[1], "01"); /*0x641ca9*/
        v89 = v78 | 0x20; /*0x641cb1*/
        *(_OWORD *)v108 = 0; /*0x641cbb*/
        v109 = 0; /*0x641cc2*/
        v110 = 0; /*0x641cc7*/
        v90 = -1; /*0x641ccc*/
        do /*0x641cd3*/
          ++v90; /*0x641cd0*/
        while ( *(_BYTE *)(a2 + v90) ); /*0x641cd3*/
        sub_3C230(v108); /*0x641ce1*/
        v78 = v89 | 0x40; /*0x641ce6*/
        v91 = v108; /*0x641ce9*/
        if ( v110 > 0xF ) /*0x641cf4*/
          v91 = (void **)v108[0]; /*0x641cf4*/
        v92 = v109; /*0x641cfa*/
        v93 = v109; /*0x641cff*/
        if ( v109 > 0xA ) /*0x641d0b*/
          v93 = 10; /*0x641d0b*/
        if ( !memcmp(v91, v116, v93) && v92 == 10 ) /*0x641d20*/
LABEL_154:
          v94 = 1; /*0x641d22*/
        else
          v94 = 0; /*0x641d27*/
        if ( (v78 & 0x40) != 0 ) /*0x641d2e*/
        {
          v78 &= ~0x40u; /*0x641d30*/
          sub_3C310(v108); /*0x641d38*/
        }
        if ( (v78 & 0x20) != 0 ) /*0x641d42*/
        {
          v78 &= ~0x20u; /*0x641d44*/
          sub_3C310(v116); /*0x641d4b*/
        }
        if ( (v78 & 0x10) != 0 ) /*0x641d55*/
        {
          v78 &= ~0x10u; /*0x641d57*/
          sub_3C310(v121); /*0x641d5e*/
        }
        if ( (v78 & 8) != 0 ) /*0x641d68*/
        {
          v78 &= ~8u; /*0x641d6a*/
          sub_3C310(&Buf2); /*0x641d72*/
        }
        if ( (v78 & 4) != 0 && v115 > 0xF ) /*0x641d86*/
        {
          v95 = v80; /*0x641d8c*/
          if ( v115 + 1 >= 0x1000 ) /*0x641d96*/
          {
            v80 = (char *)*((_QWORD *)v80 - 1); /*0x641d9c*/
            if ( (unsigned __int64)(v95 - v80 - 8) > 0x1F ) /*0x641dab*/
              invoke_watson(0, 0, 0, 0, 0); /*0x641dbc*/
          }
          j_j_free(v80); /*0x641dc6*/
        }
        if ( v94 ) /*0x641dd2*/
        {
          Buf1[1] = 0; /*0x641dd4*/
          v114 = 8; /*0x641dd8*/
          v115 = 15; /*0x641ddc*/
          strcpy((char *)Buf1, "attack01"); /*0x641dee*/
          v96 = *(_QWORD *)(a1 + 16); /*0x641dff*/
          sub_86290(*(_QWORD *)(v96 + 664)); /*0x641e0a*/
          v97 = sub_3E4F0(&Buf2, Buf1); /*0x641e18*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v96 + 664), v97); /*0x641e27*/
          sub_3C310(Buf1); /*0x641e31*/
          *(_DWORD *)(a1 + 84) = 3; /*0x641e36*/
          goto LABEL_191; /*0x641e3e*/
        }
        Buf2 = 0; /*0x641e43*/
        si128.m128i_i64[0] = 6; /*0x641e4d*/
        si128.m128i_i64[1] = 15; /*0x641e52*/
        strcpy((char *)&Buf2, "idle01"); /*0x641e60*/
        *(_OWORD *)v116 = 0; /*0x641e75*/
        v117 = 0; /*0x641e7b*/
        v118 = 0; /*0x641e7f*/
        v98 = -1; /*0x641e83*/
        do /*0x641e89*/
          ++v98; /*0x641e86*/
        while ( *(_BYTE *)(a2 + v98) ); /*0x641e89*/
        sub_3C230(v116); /*0x641e96*/
        v99 = v116; /*0x641e9b*/
        v100 = (char *)v116[0]; /*0x641e9f*/
        v101 = v118; /*0x641ea3*/
        if ( v118 > 0xF ) /*0x641eab*/
          v99 = (void **)v116[0]; /*0x641eab*/
        v102 = v117; /*0x641eaf*/
        v103 = v117; /*0x641eb3*/
        if ( v117 > 6 ) /*0x641eba*/
          v103 = 6; /*0x641eba*/
        v104 = memcmp(v99, &Buf2, v103); /*0x641ec8*/
        if ( !v104 ) /*0x641ece*/
        {
          if ( v102 >= 6 ) /*0x641ed4*/
            v104 = v102 > 6; /*0x641ee0*/
          else
            v104 = -1; /*0x641ed6*/
        }
        if ( v101 > 0xF ) /*0x641ee7*/
        {
          v105 = v100; /*0x641eed*/
          if ( v101 + 1 >= 0x1000 ) /*0x641ef7*/
          {
            v100 = (char *)*((_QWORD *)v100 - 1); /*0x641efd*/
            if ( (unsigned __int64)(v105 - v100 - 8) > 0x1F ) /*0x641f0c*/
              invoke_watson(0, 0, 0, 0, 0); /*0x641f1d*/
          }
          j_j_free(v100); /*0x641f27*/
        }
        if ( v104 ) /*0x641f2f*/
          goto LABEL_45; /*0x641f2f*/
        v106 = (float)rand() / 32767.0; /*0x641fad*/
        v109 = 6; /*0x641fb5*/
        v110 = 15; /*0x641fba*/
        v31 = *(_QWORD *)(a1 + 16); /*0x641fc3*/
        *(_OWORD *)v108 = 0; /*0x641fd1*/
        BYTE6(v108[0]) = 0; /*0x641fd6*/
        if ( v106 > 0.75 ) /*0x641fdb*/
        {
LABEL_47:
          qmemcpy(v108, "idle02", 6); /*0x641197*/
LABEL_48:
          sub_86290(*(_QWORD *)(v31 + 664)); /*0x6411b2*/
          v32 = sub_3E4F0(&Buf2, v108); /*0x6411cd*/
          SpriteAnimationManager_runAnimation(*(_QWORD *)(v31 + 664), v32); /*0x6411dc*/
          goto LABEL_190; /*0x6411e2*/
        }
LABEL_49:
        qmemcpy(v108, "idle01", 6); /*0x6411e7*/
        goto LABEL_48; /*0x641232*/
      default:
        goto LABEL_191; /*0x6419bd*/
    }
    qmemcpy(v108, "idle01", 6); /*0x641423*/
    goto LABEL_62; /*0x641472*/
  }
}

// [7/11] Address: 0x6420c0
// Method: AnimatedGameObject::displayFrameChanged
// Hidden C++ exception states: #wind=4
double __fastcall AnimatedGameObject_displayFrameChanged(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct cocos2d::CCObject *v4; // r14
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8
  void **v8; // rdi
  __int64 v9; // rbx
  cocos2d::CCSpriteFrameCache *v10; // rax
  struct cocos2d::CCSpriteFrame *v11; // rax
  void *v12; // rcx
  void *Block[2]; // [rsp+38h] [rbp-60h] BYREF
  __m128i si128; // [rsp+48h] [rbp-50h]
  _BYTE v16[32]; // [rsp+58h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a2 + 616) ) /*0x6420ea*/
    v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a2 + 600), 0); /*0x642102*/
  else
    v4 = 0; /*0x642107*/
  v5 = a3; /*0x64210a*/
  if ( a3[3] > 0xFu ) /*0x642112*/
    v5 = (_QWORD *)*a3; /*0x642114*/
  v6 = (_QWORD *)sub_632380(v16, v5); /*0x64211c*/
  if ( v6[3] > 0xFu ) /*0x642127*/
    v6 = (_QWORD *)*v6; /*0x642129*/
  *(_OWORD *)Block = 0; /*0x64212f*/
  si128 = 0; /*0x642137*/
  v7 = -1; /*0x64213d*/
  do /*0x642147*/
    ++v7; /*0x642144*/
  while ( *((_BYTE *)v6 + v7) ); /*0x642147*/
  sub_3C230(Block); /*0x642156*/
  sub_3C310(v16); /*0x642161*/
  v8 = Block; /*0x642166*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x642171*/
    v8 = (void **)Block[0]; /*0x642171*/
  v9 = *(_QWORD *)v4; /*0x642177*/
  v10 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x64217a*/
  v11 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v10, (const char *)v8); /*0x642186*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSpriteFrame *))(v9 + 1008))(v4, v11); /*0x642192*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x6421a2*/
  {
    v12 = Block[0]; /*0x6421a7*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x6421b6*/
    {
      v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x6421bc*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x6421cb*/
        invoke_watson(0, 0, 0, 0, 0); /*0x6421e0*/
    }
    j_j_free(v12); /*0x6421e7*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x6421f4*/
  LOBYTE(Block[0]) = 0; /*0x6421fa*/
  return sub_3C310(a3); /*0x642207*/
}

// [8/11] Address: 0x642230
// Method: AnimatedGameObject::playAnimation
// Hidden C++ exception states: #wind=2
double __fastcall AnimatedGameObject_playAnimation(__int64 a1, __int64 a2)
{
  int v3; // r10d
  size_t v4; // r8
  void **v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-88h]
  _BYTE v11[32]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v12[32]; // [rsp+50h] [rbp-58h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-38h] BYREF
  size_t Size; // [rsp+80h] [rbp-28h]
  unsigned __int64 v15; // [rsp+88h] [rbp-20h]

  AnimatedGameObject_animationForID(Src, a2, *(unsigned int *)(a1 + 1036)); /*0x642261*/
  v4 = Size; /*0x642267*/
  if ( Size ) /*0x642272*/
  {
    *(_DWORD *)(a1 + 1548) = v3; /*0x642278*/
    if ( (void **)(a1 + 1512) != Src ) /*0x64228e*/
    {
      v5 = Src; /*0x642290*/
      if ( v15 > 0xF ) /*0x64229e*/
        v5 = (void **)Src[0]; /*0x64229e*/
      sub_3F5A0((void *)(a1 + 1512), v5, v4); /*0x6422a4*/
    }
    *(_BYTE *)(a1 + 1505) = 1; /*0x6422a9*/
    if ( *(_BYTE *)(a1 + 773) ) /*0x6422ba*/
    {
      v6 = sub_3E4F0(v11, Src); /*0x6422c3*/
      sub_43850(*(_QWORD *)(a1 + 1480), v6); /*0x6422da*/
    }
    else
    {
      v10 = sub_3E4F0(v11, Src); /*0x6422e9*/
      v7 = *(_QWORD *)(a1 + 1480); /*0x6422ee*/
      sub_86290(*(_QWORD *)(v7 + 664)); /*0x6422fc*/
      v8 = sub_3E4F0(v12, v10); /*0x642309*/
      SpriteAnimationManager_runAnimation(*(_QWORD *)(v7 + 664), v8); /*0x642318*/
      sub_3C310(v10); /*0x642321*/
    }
  }
  return sub_3C310(Src); /*0x642331*/
}

// [9/11] Address: 0x642360
// Method: AnimatedGameObject::resetObject
char __fastcall AnimatedGameObject_resetObject(__int64 a1)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(a1 + 1512); /*0x64236b*/
  *(_DWORD *)(a1 + 1548) = 0; /*0x642372*/
  *(_QWORD *)(a1 + 1528) = 0; /*0x642378*/
  *(_WORD *)(a1 + 1504) = 0; /*0x64237c*/
  if ( *(_QWORD *)(a1 + 1536) > 0xFu ) /*0x642388*/
    v2 = (_QWORD *)*v2; /*0x64238a*/
  *(_BYTE *)v2 = 0; /*0x64238d*/
  if ( *(_BYTE *)(a1 + 773) ) /*0x64238f*/
    sub_640820(a1); /*0x64239a*/
  return EnhancedGameObject_resetObject(a1); /*0x6423a2*/
}

// [10/11] Address: 0x6423b0
// Method: AnimatedGameObject::animationForID
__int64 __fastcall AnimatedGameObject_animationForID(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx

  if ( a3 == 918 ) /*0x6423be*/
  {
    if ( !a2 ) /*0x64277a*/
    {
      *(_OWORD *)a1 = 0; /*0x6427ed*/
      *(_QWORD *)(a1 + 16) = 4; /*0x6427f0*/
      *(_QWORD *)(a1 + 24) = 15; /*0x6427f8*/
      strcpy((char *)a1, "bite"); /*0x642800*/
      return a1; /*0x6427ea*/
    }
    v4 = a2 - 1; /*0x64277c*/
    if ( !v4 ) /*0x64277f*/
    {
LABEL_7:
      *(_OWORD *)a1 = 0; /*0x6424a0*/
      *(_QWORD *)(a1 + 16) = 8; /*0x6424b0*/
      *(_QWORD *)(a1 + 24) = 15; /*0x6424b8*/
      strcpy((char *)a1, "attack01"); /*0x6424c0*/
      return a1; /*0x6424ce*/
    }
    v5 = v4 - 1; /*0x642785*/
    if ( !v5 ) /*0x642788*/
    {
      *(_OWORD *)a1 = 0; /*0x6427b3*/
      *(_QWORD *)(a1 + 16) = 12; /*0x6427b6*/
      *(_QWORD *)(a1 + 24) = 15; /*0x6427be*/
      strcpy((char *)a1, "attack01_end"); /*0x6427ce*/
      return a1; /*0x6427e6*/
    }
    if ( v5 == 1 ) /*0x64278d*/
    {
LABEL_5:
      *(_OWORD *)a1 = 0; /*0x6423fd*/
      *(_QWORD *)(a1 + 16) = 6; /*0x642403*/
      *(_QWORD *)(a1 + 24) = 15; /*0x64240b*/
      strcpy((char *)a1, "idle01"); /*0x642419*/
      return a1; /*0x642431*/
    }
    goto LABEL_24; /*0x64278d*/
  }
  if ( a3 != 1584 ) /*0x6423cb*/
  {
    if ( a3 == 2012 ) /*0x6423d8*/
    {
      switch ( a2 ) /*0x6423fb*/
      {
        case 0: /*0x6423fb*/
          goto LABEL_5;
        case 1: /*0x6423fb*/
          goto LABEL_14;
        case 2: /*0x6423fb*/
          *(_OWORD *)a1 = 0; /*0x64246a*/
          *(_QWORD *)(a1 + 16) = 10; /*0x64246d*/
          *(_QWORD *)(a1 + 24) = 15; /*0x642475*/
          strcpy((char *)a1, "toAttack01"); /*0x642485*/
          result = a1; /*0x642494*/
          break; /*0x64249f*/
        case 3: /*0x6423fb*/
          goto LABEL_7;
        case 4: /*0x6423fb*/
          goto LABEL_8;
        case 5: /*0x6423fb*/
          *(_OWORD *)a1 = 0; /*0x642501*/
          *(_QWORD *)(a1 + 16) = 10; /*0x642504*/
          *(_QWORD *)(a1 + 24) = 15; /*0x64250c*/
          strcpy((char *)a1, "toAttack03"); /*0x64251c*/
          result = a1; /*0x64252b*/
          break; /*0x642536*/
        case 6: /*0x6423fb*/
          *(_OWORD *)a1 = 0; /*0x642544*/
          *(_QWORD *)(a1 + 16) = 8; /*0x642547*/
          *(_QWORD *)(a1 + 24) = 15; /*0x64254f*/
          strcpy((char *)a1, "attack03"); /*0x642557*/
          result = a1; /*0x64255a*/
          break; /*0x642565*/
        case 7: /*0x6423fb*/
          goto LABEL_11;
        case 8: /*0x6423fb*/
          *(_OWORD *)a1 = 0; /*0x64259e*/
          *(_QWORD *)(a1 + 16) = 12; /*0x6425a1*/
          *(_QWORD *)(a1 + 24) = 15; /*0x6425a9*/
          strcpy((char *)a1, "fromAttack03"); /*0x6425b9*/
          result = a1; /*0x6425c6*/
          break; /*0x6425d1*/
        default:
          goto LABEL_24;
      }
      return result; /*0x6425d1*/
    }
LABEL_24:
    *(_OWORD *)a1 = 0; /*0x642793*/
    *(_QWORD *)(a1 + 16) = 0; /*0x64279c*/
    *(_QWORD *)(a1 + 24) = 15; /*0x6427a0*/
    *(_BYTE *)a1 = 0; /*0x6427a8*/
    return a1; /*0x6427af*/
  }
  switch ( a2 ) /*0x6425ef*/
  {
    case 0: /*0x6425ef*/
      goto LABEL_5;
    case 1: /*0x6425ef*/
LABEL_14:
      *(_OWORD *)a1 = 0; /*0x6425f1*/
      *(_QWORD *)(a1 + 16) = 6; /*0x6425f7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x6425ff*/
      strcpy((char *)a1, "idle02"); /*0x64260d*/
      result = a1; /*0x64261a*/
      break; /*0x642625*/
    case 2: /*0x6425ef*/
LABEL_11:
      *(_OWORD *)a1 = 0; /*0x642566*/
      *(_QWORD *)(a1 + 16) = 6; /*0x64256c*/
      *(_QWORD *)(a1 + 24) = 15; /*0x642574*/
      strcpy((char *)a1, "idle03"); /*0x642582*/
      result = a1; /*0x64258f*/
      break; /*0x64259a*/
    case 3: /*0x6425ef*/
      goto LABEL_7;
    case 4: /*0x6425ef*/
LABEL_8:
      *(_OWORD *)a1 = 0; /*0x6424cf*/
      *(_QWORD *)(a1 + 16) = 8; /*0x6424df*/
      *(_QWORD *)(a1 + 24) = 15; /*0x6424e7*/
      strcpy((char *)a1, "attack02"); /*0x6424ef*/
      result = a1; /*0x6424f2*/
      break; /*0x6424fd*/
    case 5: /*0x6425ef*/
      *(_OWORD *)a1 = 0; /*0x64265e*/
      *(_QWORD *)(a1 + 16) = 12; /*0x642661*/
      *(_QWORD *)(a1 + 24) = 15; /*0x642669*/
      strcpy((char *)a1, "attack02_end"); /*0x642679*/
      result = a1; /*0x642686*/
      break; /*0x642691*/
    case 6: /*0x6425ef*/
      *(_OWORD *)a1 = 0; /*0x642695*/
      *(_QWORD *)(a1 + 16) = 5; /*0x642698*/
      *(_QWORD *)(a1 + 24) = 15; /*0x6426a0*/
      *(_DWORD *)a1 = 1701145715; /*0x6426ae*/
      *(_BYTE *)(a1 + 4) = 112; /*0x6426b7*/
      *(_BYTE *)(a1 + 5) = 0; /*0x6426bd*/
      result = a1; /*0x6426ba*/
      break; /*0x6426c5*/
    case 7: /*0x6425ef*/
      *(_OWORD *)a1 = 0; /*0x6426c9*/
      *(_QWORD *)(a1 + 16) = 10; /*0x6426cc*/
      *(_QWORD *)(a1 + 24) = 15; /*0x6426d4*/
      strcpy((char *)a1, "sleep_loop"); /*0x6426e4*/
      result = a1; /*0x6426f3*/
      break; /*0x6426fe*/
    case 8: /*0x6425ef*/
      *(_OWORD *)a1 = 0; /*0x642702*/
      *(_QWORD *)(a1 + 16) = 9; /*0x642705*/
      *(_QWORD *)(a1 + 24) = 15; /*0x64270d*/
      strcpy((char *)a1, "sleep_end"); /*0x64271d*/
      result = a1; /*0x64272b*/
      break; /*0x642736*/
    case 9: /*0x6425ef*/
      *(_OWORD *)a1 = 0; /*0x64273a*/
      *(_QWORD *)(a1 + 16) = 13; /*0x64273d*/
      *(_QWORD *)(a1 + 24) = 15; /*0x642745*/
      strcpy((char *)a1, "attack02_loop"); /*0x642755*/
      result = a1; /*0x64276c*/
      break; /*0x642777*/
    default:
      goto LABEL_24;
  }
  return result; /*0x64242d*/
}

// [11/11] Address: 0x642860
// Method: AnimatedGameObject::setChildColor
void __fastcall AnimatedGameObject_setChildColor(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rcx

  GameObject_setChildColor(a1, a2); /*0x642870*/
  v4 = *(_QWORD *)(a1 + 1496); /*0x642875*/
  if ( v4 ) /*0x64287f*/
  {
    (**(void (__fastcall ***)(__int64, _BYTE *))(v4 + 320))(v4 + 320, a2); /*0x64288e*/
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 1496) + 944LL))(*(_QWORD *)(a1 + 1496), a2); /*0x64289d*/
  }
}
