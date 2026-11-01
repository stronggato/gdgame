#include <Geode/binding/GauntletLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/6] Address: 0x2f7d60
// Method: GauntletLayer::loadLevelsFinished
// Hidden C++ exception states: #wind=2
void __fastcall GauntletLayer_loadLevelsFinished(__int64 a1, __int64 a2, __int64 a3)
{
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  void **v9; // rdx
  char *v10; // rsi
  unsigned __int64 v11; // r12
  void **v12; // rcx
  char *v13; // rbx
  unsigned __int64 v14; // r13
  size_t v15; // rbp
  size_t v16; // r8
  size_t v17; // r14
  int v18; // edi
  char *v19; // rax
  char *v20; // rax
  void *v21; // [rsp+30h] [rbp-98h]
  void *Buf1[2]; // [rsp+40h] [rbp-88h] BYREF
  size_t v24; // [rsp+50h] [rbp-78h]
  unsigned __int64 v25; // [rsp+58h] [rbp-70h]
  void *Buf2[2]; // [rsp+60h] [rbp-68h] BYREF
  size_t Size; // [rsp+70h] [rbp-58h]
  unsigned __int64 v28; // [rsp+78h] [rbp-50h]

  if ( !*(_QWORD *)&qword_905FB0 ) /*0x2f7d9d*/
  {
    v21 = operator new(0x690u); /*0x2f7da9*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0x2f7db7*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2f7dc8*/
  }
  v5 = cocos2d::CCString::createWithFormat("gauntlet_%i", *(_DWORD *)(a1 + 24)); /*0x2f7dd5*/
  CString = cocos2d::CCString::getCString(v5); /*0x2f7dde*/
  *(_OWORD *)Buf1 = 0; /*0x2f7de7*/
  v24 = 0; /*0x2f7dec*/
  v25 = 0; /*0x2f7df1*/
  v7 = -1; /*0x2f7df6*/
  do /*0x2f7e03*/
    ++v7; /*0x2f7e00*/
  while ( CString[v7] ); /*0x2f7e03*/
  sub_3C230(Buf1); /*0x2f7e12*/
  *(_OWORD *)Buf2 = 0; /*0x2f7e1b*/
  Size = 0; /*0x2f7e20*/
  v28 = 0; /*0x2f7e25*/
  v8 = -1; /*0x2f7e2a*/
  do /*0x2f7e34*/
    ++v8; /*0x2f7e31*/
  while ( *(_BYTE *)(a3 + v8) ); /*0x2f7e34*/
  sub_3C230(Buf2); /*0x2f7e43*/
  v9 = Buf2; /*0x2f7e48*/
  v10 = (char *)Buf2[0]; /*0x2f7e4d*/
  v11 = v28; /*0x2f7e52*/
  if ( v28 > 0xF ) /*0x2f7e5b*/
    v9 = (void **)Buf2[0]; /*0x2f7e5b*/
  v12 = Buf1; /*0x2f7e5f*/
  v13 = (char *)Buf1[0]; /*0x2f7e64*/
  v14 = v25; /*0x2f7e69*/
  if ( v25 > 0xF ) /*0x2f7e72*/
    v12 = (void **)Buf1[0]; /*0x2f7e72*/
  v15 = v24; /*0x2f7e76*/
  v16 = v24; /*0x2f7e7b*/
  v17 = Size; /*0x2f7e7e*/
  if ( Size < v24 ) /*0x2f7e86*/
    v16 = Size; /*0x2f7e86*/
  v18 = memcmp(v12, v9, v16); /*0x2f7e8f*/
  if ( !v18 ) /*0x2f7e93*/
  {
    if ( v15 >= v17 ) /*0x2f7e98*/
      v18 = v15 > v17; /*0x2f7ea6*/
    else
      v18 = -1; /*0x2f7e9a*/
  }
  if ( v11 > 0xF ) /*0x2f7eae*/
  {
    v19 = v10; /*0x2f7eb5*/
    if ( v11 + 1 >= 0x1000 ) /*0x2f7ebf*/
    {
      v10 = (char *)*((_QWORD *)v10 - 1); /*0x2f7ec5*/
      if ( (unsigned __int64)(v19 - v10 - 8) > 0x1F ) /*0x2f7ed4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2f7ee9*/
    }
    j_j_free(v10); /*0x2f7ef3*/
  }
  if ( !v18 ) /*0x2f7efa*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 336LL))(*(_QWORD *)(a1 + 16), 0); /*0x2f7f05*/
    GauntletLayer_setupGauntlet(a1 - 408, a2); /*0x2f7f17*/
  }
  if ( v14 > 0xF ) /*0x2f7f21*/
  {
    v20 = v13; /*0x2f7f27*/
    if ( v14 + 1 >= 0x1000 ) /*0x2f7f31*/
    {
      v13 = (char *)*((_QWORD *)v13 - 1); /*0x2f7f37*/
      if ( (unsigned __int64)(v20 - v13 - 8) > 0x1F ) /*0x2f7f46*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2f7f5b*/
    }
    j_j_free(v13); /*0x2f7f65*/
  }
}

// [3/6] Address: 0x2f7fa0
// Method: GauntletLayer::loadLevelsFailed
// Hidden C++ exception states: #wind=2
void __fastcall GauntletLayer_loadLevelsFailed(__int64 a1, __int64 a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  void **v8; // rdx
  char *v9; // rsi
  unsigned __int64 v10; // r13
  void **v11; // rcx
  char *v12; // rbx
  unsigned __int64 v13; // r12
  size_t v14; // rbp
  size_t v15; // r8
  size_t v16; // r14
  int v17; // edi
  char *v18; // rax
  __int64 v19; // rdx
  char *v20; // rax
  void *v21; // [rsp+30h] [rbp-88h]
  void *Buf1[2]; // [rsp+38h] [rbp-80h] BYREF
  size_t v23; // [rsp+48h] [rbp-70h]
  unsigned __int64 v24; // [rsp+50h] [rbp-68h]
  void *Buf2[2]; // [rsp+58h] [rbp-60h] BYREF
  size_t Size; // [rsp+68h] [rbp-50h]
  unsigned __int64 v27; // [rsp+70h] [rbp-48h]

  if ( !*(_QWORD *)&qword_905FB0 ) /*0x2f7fd5*/
  {
    v21 = operator new(0x690u); /*0x2f7fe1*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0x2f7fef*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2f8000*/
  }
  v4 = cocos2d::CCString::createWithFormat("gauntlet_%i", *(_DWORD *)(a1 + 24)); /*0x2f800d*/
  CString = cocos2d::CCString::getCString(v4); /*0x2f8016*/
  *(_OWORD *)Buf1 = 0; /*0x2f801f*/
  v23 = 0; /*0x2f8024*/
  v24 = 0; /*0x2f8029*/
  v6 = -1; /*0x2f802e*/
  do /*0x2f8038*/
    ++v6; /*0x2f8035*/
  while ( CString[v6] ); /*0x2f8038*/
  sub_3C230(Buf1); /*0x2f8047*/
  *(_OWORD *)Buf2 = 0; /*0x2f8050*/
  Size = 0; /*0x2f8055*/
  v27 = 0; /*0x2f805a*/
  v7 = -1; /*0x2f805f*/
  do /*0x2f8069*/
    ++v7; /*0x2f8066*/
  while ( *(_BYTE *)(a2 + v7) ); /*0x2f8069*/
  sub_3C230(Buf2); /*0x2f8078*/
  v8 = Buf2; /*0x2f807d*/
  v9 = (char *)Buf2[0]; /*0x2f8082*/
  v10 = v27; /*0x2f8087*/
  if ( v27 > 0xF ) /*0x2f8090*/
    v8 = (void **)Buf2[0]; /*0x2f8090*/
  v11 = Buf1; /*0x2f8094*/
  v12 = (char *)Buf1[0]; /*0x2f8099*/
  v13 = v24; /*0x2f809e*/
  if ( v24 > 0xF ) /*0x2f80a7*/
    v11 = (void **)Buf1[0]; /*0x2f80a7*/
  v14 = v23; /*0x2f80ab*/
  v15 = v23; /*0x2f80b0*/
  v16 = Size; /*0x2f80b3*/
  if ( Size < v23 ) /*0x2f80bb*/
    v15 = Size; /*0x2f80bb*/
  v17 = memcmp(v11, v8, v15); /*0x2f80c4*/
  if ( !v17 ) /*0x2f80c8*/
  {
    if ( v14 >= v16 ) /*0x2f80cd*/
      v17 = v14 > v16; /*0x2f80db*/
    else
      v17 = -1; /*0x2f80cf*/
  }
  if ( v10 > 0xF ) /*0x2f80e3*/
  {
    v18 = v9; /*0x2f80e9*/
    if ( v10 + 1 >= 0x1000 ) /*0x2f80f3*/
    {
      v9 = (char *)*((_QWORD *)v9 - 1); /*0x2f80f9*/
      if ( (unsigned __int64)(v18 - v9 - 8) > 0x1F ) /*0x2f8108*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2f811d*/
    }
    j_j_free(v9); /*0x2f8127*/
  }
  if ( !v17 ) /*0x2f812e*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 336LL))(*(_QWORD *)(a1 + 16), 0); /*0x2f8139*/
    LOBYTE(v19) = 1; /*0x2f8146*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 336LL))(*(_QWORD *)(a1 + 64), v19); /*0x2f8148*/
  }
  if ( v13 > 0xF ) /*0x2f8153*/
  {
    v20 = v12; /*0x2f815a*/
    if ( v13 + 1 >= 0x1000 ) /*0x2f8164*/
    {
      v12 = (char *)*((_QWORD *)v12 - 1); /*0x2f816a*/
      if ( (unsigned __int64)(v20 - v12 - 8) > 0x1F ) /*0x2f8179*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2f818e*/
    }
    j_j_free(v12); /*0x2f8198*/
  }
}

// [4/6] Address: 0x2f81d0
// Method: GauntletLayer::setupGauntlet
// Hidden C++ exception states: #wind=7
double __fastcall GauntletLayer_setupGauntlet(_QWORD *a1, cocos2d::CCObject *a2)
{
  double result; // xmm0_8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  float v12; // xmm7_4
  _QWORD *v13; // rdx
  signed int v14; // esi
  unsigned int v15; // ebx
  struct cocos2d::CCObject *v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rcx
  signed int v19; // r13d
  struct cocos2d::CCObject *v20; // rax
  bool v21; // di
  int v22; // ebx
  float v23; // xmm2_4
  __int64 v24; // rax
  bool v25; // si
  int v26; // r14d
  _DWORD *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  cocos2d::CCObject *v30; // r14
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // rbx
  float v39; // xmm6_4
  float *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rbx
  float v46; // xmm6_4
  float *v47; // rax
  __int64 v48; // rax
  const char *v49; // rcx
  struct cocos2d::CCSprite *v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdi
  const char *v55; // rcx
  struct cocos2d::CCObject *v56; // rbx
  int v57; // ecx
  int v58; // esi
  __int64 v59; // rbx
  __int64 v60; // rax
  cocos2d::CCString *v61; // rax
  const char *CString; // rax
  struct cocos2d::CCObject *v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  struct cocos2d::CCObject *v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  struct cocos2d::CCSprite *v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  struct cocos2d::CCObject *v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rax
  cocos2d::CCObject *v83; // rax
  unsigned int i; // ebx
  struct cocos2d::CCObject *v85; // rax
  __int64 v86; // rbx
  struct cocos2d::CCFiniteTimeAction *v87; // rax
  struct cocos2d::CCAction *v88; // rax
  const struct cocos2d::CCPoint *v89; // rdx
  float v90; // xmm0_4
  int v91; // r12d
  int v92; // r13d
  char *v93; // rdx
  struct cocos2d::CCSprite *v94; // rdi
  float v95; // xmm0_4
  char *v96; // rbx
  double v97; // xmm0_8
  struct cocos2d::CCActionInterval *v98; // rax
  struct cocos2d::CCFiniteTimeAction *v99; // r14
  struct cocos2d::CCFadeIn *v100; // rsi
  unsigned __int8 v101; // di
  unsigned __int8 v102; // bl
  unsigned __int8 *v103; // rax
  struct cocos2d::CCTintTo *v104; // rbx
  cocos2d::CCNode *v105; // rdi
  struct cocos2d::CCSpawn *v106; // rbx
  int v107; // ecx
  struct cocos2d::CCFiniteTimeAction *v108; // rax
  struct cocos2d::CCAction *v109; // rax
  bool v110; // [rsp+30h] [rbp-D0h]
  float v111; // [rsp+38h] [rbp-C8h] BYREF
  signed int v112; // [rsp+40h] [rbp-C0h]
  __int16 v113; // [rsp+44h] [rbp-BCh]
  __int16 v114; // [rsp+48h] [rbp-B8h] BYREF
  char v115; // [rsp+4Ah] [rbp-B6h]
  signed int v116; // [rsp+4Ch] [rbp-B4h]
  float v117; // [rsp+50h] [rbp-B0h] BYREF
  float v118; // [rsp+54h] [rbp-ACh]
  struct cocos2d::CCObject *v119; // [rsp+58h] [rbp-A8h]
  struct cocos2d::CCObject *v120; // [rsp+60h] [rbp-A0h]
  char v121[8]; // [rsp+68h] [rbp-98h] BYREF
  float v122[2]; // [rsp+70h] [rbp-90h] BYREF
  struct cocos2d::CCObject *v123; // [rsp+78h] [rbp-88h]
  char v124[8]; // [rsp+80h] [rbp-80h] BYREF
  void *v125; // [rsp+88h] [rbp-78h] BYREF
  char v126[8]; // [rsp+90h] [rbp-70h] BYREF
  char v127[8]; // [rsp+98h] [rbp-68h] BYREF
  struct cocos2d::CCObject *v128; // [rsp+A0h] [rbp-60h]
  char v129[8]; // [rsp+A8h] [rbp-58h] BYREF
  char v130[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v131[8]; // [rsp+B8h] [rbp-48h] BYREF
  char v132[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v133[8]; // [rsp+C8h] [rbp-38h] BYREF
  char v134[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v135[8]; // [rsp+D8h] [rbp-28h] BYREF
  char v136[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v137[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v138; // [rsp+F0h] [rbp-10h]
  char v139[8]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v140; // [rsp+100h] [rbp+0h]
  char v141[8]; // [rsp+108h] [rbp+8h] BYREF
  void *v142; // [rsp+110h] [rbp+10h]
  char v143[8]; // [rsp+118h] [rbp+18h] BYREF
  char v144[8]; // [rsp+120h] [rbp+20h] BYREF
  char v145[8]; // [rsp+128h] [rbp+28h] BYREF
  char v146[8]; // [rsp+130h] [rbp+30h] BYREF
  char v147[8]; // [rsp+138h] [rbp+38h] BYREF
  char v148[8]; // [rsp+140h] [rbp+40h] BYREF
  char v149[8]; // [rsp+148h] [rbp+48h] BYREF
  char v150[8]; // [rsp+150h] [rbp+50h] BYREF
  char v151[8]; // [rsp+158h] [rbp+58h] BYREF
  char v152[8]; // [rsp+160h] [rbp+60h] BYREF
  char v153[8]; // [rsp+168h] [rbp+68h] BYREF
  char v154[8]; // [rsp+170h] [rbp+70h] BYREF
  char v155[8]; // [rsp+178h] [rbp+78h] BYREF
  char v156[8]; // [rsp+180h] [rbp+80h] BYREF
  void *v157; // [rsp+188h] [rbp+88h]
  char v158[8]; // [rsp+190h] [rbp+90h] BYREF
  char v159[8]; // [rsp+198h] [rbp+98h] BYREF
  char v160[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v161[3]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned __int64 v162; // [rsp+1C0h] [rbp+C0h]
  _QWORD v163[4]; // [rsp+1C8h] [rbp+C8h] BYREF
  _BYTE v164[32]; // [rsp+1E8h] [rbp+E8h] BYREF

  if ( a2 && cocos2d::CCArray::count(a2) == 5 && !a1[52] ) /*0x2f8264*/
  {
    a1[52] = a2; /*0x2f8272*/
    cocos2d::CCObject::retain(a2); /*0x2f827c*/
    v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x2f8282*/
    cocos2d::CCDirector::getWinSize(v6, v122); /*0x2f8290*/
    v11 = cocos2d::CCMenu::create(v8, v7, v9, v10); /*0x2f829c*/
    v138 = v11; /*0x2f829f*/
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 456LL))(a1, v11, 2); /*0x2f82b9*/
    v12 = 12.0; /*0x2f82d0*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v126, v122[0] * 0.5, (float)(v122[1] * 0.5) - 12.0); /*0x2f82eb*/
    GauntletNode_frameForType(v161, *((unsigned int *)a1 + 108)); /*0x2f82ff*/
    v13 = v161; /*0x2f8305*/
    if ( v162 > 0xF ) /*0x2f8314*/
      v13 = (_QWORD *)v161[0]; /*0x2f8314*/
    sub_2F6EE0(v164, v13); /*0x2f8323*/
    v14 = 0; /*0x2f8329*/
    v112 = 0; /*0x2f832b*/
    v15 = 0; /*0x2f832f*/
    if ( cocos2d::CCArray::count((cocos2d::CCArray *)a1[52]) ) /*0x2f8338*/
    {
      do /*0x2f83c7*/
      {
        v16 = cocos2d::CCArray::objectAtIndex((cocos2d::CCArray *)a1[52], v15); /*0x2f8359*/
        v17 = *((_DWORD *)v16 + 82) - *((_DWORD *)v16 + 83); /*0x2f8365*/
        v18 = qword_905FE0; /*0x2f836b*/
        if ( !qword_905FE0 ) /*0x2f8375*/
        {
          v125 = operator new(0x3E8u); /*0x2f8381*/
          qword_905FE0 = sub_2D2B40(v125); /*0x2f838e*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f839f*/
          v18 = qword_905FE0; /*0x2f83a2*/
        }
        if ( !(unsigned __int8)sub_2DE050(v18, v17) ) /*0x2f83ab*/
          break; /*0x2f83b2*/
        ++v14; /*0x2f83b4*/
        ++v15; /*0x2f83b6*/
      }
      while ( v15 < cocos2d::CCArray::count((cocos2d::CCArray *)a1[52]) ); /*0x2f83c7*/
      v112 = v14; /*0x2f83c9*/
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v124, (const struct cocos2d::CCPoint *)&unk_9049F0); /*0x2f83d8*/
    switch ( *((_DWORD *)a1 + 108) ) /*0x2f841e*/
    {
      case 0x10: /*0x2f841e*/
      case 0x1E: /*0x2f841e*/
        v12 = 3.0; /*0x2f8420*/
        break; /*0x2f8428*/
      case 0x11: /*0x2f841e*/
      case 0x1C: /*0x2f841e*/
      case 0x23: /*0x2f841e*/
      case 0x29: /*0x2f841e*/
      case 0x31: /*0x2f841e*/
        v12 = 4.0; /*0x2f842a*/
        break; /*0x2f8432*/
      case 0x12: /*0x2f841e*/
        v12 = 1.0; /*0x2f8434*/
        break; /*0x2f843c*/
      case 0x13: /*0x2f841e*/
      case 0x32: /*0x2f841e*/
        v12 = 5.0; /*0x2f8486*/
        break; /*0x2f848a*/
      case 0x16: /*0x2f841e*/
        v12 = 20.0; /*0x2f843e*/
        break; /*0x2f8446*/
      case 0x19: /*0x2f841e*/
      case 0x20: /*0x2f841e*/
      case 0x27: /*0x2f841e*/
      case 0x28: /*0x2f841e*/
      case 0x2A: /*0x2f841e*/
        v12 = 6.0; /*0x2f8448*/
        break; /*0x2f8450*/
      case 0x1A: /*0x2f841e*/
        v12 = 7.0; /*0x2f8452*/
        break; /*0x2f845a*/
      case 0x1B: /*0x2f841e*/
      case 0x25: /*0x2f841e*/
      case 0x2C: /*0x2f841e*/
      case 0x2D: /*0x2f841e*/
        v12 = 2.0; /*0x2f845c*/
        break; /*0x2f8460*/
      case 0x1F: /*0x2f841e*/
      case 0x3C: /*0x2f841e*/
      case 0x3D: /*0x2f841e*/
      case 0x3E: /*0x2f841e*/
        v12 = 11.0; /*0x2f8462*/
        break; /*0x2f846a*/
      case 0x24: /*0x2f841e*/
        v12 = 18.0; /*0x2f846c*/
        break; /*0x2f8474*/
      case 0x26: /*0x2f841e*/
      case 0x2E: /*0x2f841e*/
      case 0x2F: /*0x2f841e*/
      case 0x30: /*0x2f841e*/
        v12 = 8.0; /*0x2f8476*/
        break; /*0x2f847a*/
      case 0x2B: /*0x2f841e*/
      case 0x33: /*0x2f841e*/
      case 0x34: /*0x2f841e*/
      case 0x35: /*0x2f841e*/
      case 0x36: /*0x2f841e*/
      case 0x3B: /*0x2f841e*/
        v12 = 16.0; /*0x2f847c*/
        break; /*0x2f8484*/
      case 0x37: /*0x2f841e*/
      case 0x38: /*0x2f841e*/
        v12 = 13.0; /*0x2f848c*/
        break; /*0x2f8494*/
      case 0x39: /*0x2f841e*/
        break;
      case 0x3A: /*0x2f841e*/
        v12 = 17.0; /*0x2f8496*/
        break; /*0x2f849e*/
      default:
        v12 = 0.0; /*0x2f84a0*/
        break; /*0x2f84a0*/
    }
    v19 = 0; /*0x2f84a3*/
    v116 = 0; /*0x2f84a6*/
    while ( 1 ) /*0x2f84da*/
    {
      v20 = cocos2d::CCArray::objectAtIndex((cocos2d::CCArray *)a1[52], v19); /*0x2f84da*/
      v123 = v20; /*0x2f84e0*/
      v21 = v19 == v14 && v19 && !*((_BYTE *)v20 + 722); /*0x2f84f8*/
      v110 = v21; /*0x2f8500*/
      v22 = v19 & 1; /*0x2f8508*/
      LODWORD(v119) = v22; /*0x2f850b*/
      if ( (v19 & 1) != 0 ) /*0x2f850f*/
        v23 = 50.0; /*0x2f851b*/
      else
        v23 = -50.0; /*0x2f8511*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v139, (float)(v19 - 2) * 90.0, v23); /*0x2f853a*/
      cocos2d::CCPoint::operator+(v126, v121, v24); /*0x2f854c*/
      v25 = v19 > v14 || v21; /*0x2f8561*/
      v26 = *((_DWORD *)a1 + 108); /*0x2f8564*/
      v27 = operator new(0x148u); /*0x2f8575*/
      v140 = v27; /*0x2f8578*/
      memset(v27, 0, 0x148u); /*0x2f8587*/
      cocos2d::CCNode::CCNode((cocos2d::CCNode *)v27); /*0x2f858f*/
      *(_QWORD *)v27 = &GauntletSprite::`vftable'; /*0x2f859c*/
      if ( cocos2d::CCNode::init((cocos2d::CCNode *)v27) ) /*0x2f85a2*/
      {
        v27[80] = v26; /*0x2f85be*/
        v28 = *(_QWORD *)v27; /*0x2f85c5*/
        cocos2d::CCSize::CCSize((cocos2d::CCSize *)v141, 60.0, 60.0); /*0x2f85d4*/
        (*(void (__fastcall **)(_DWORD *, __int64))(v28 + 312))(v27, v29); /*0x2f85e0*/
        sub_2F9CE0(v27, v25); /*0x2f85ed*/
        cocos2d::CCObject::autorelease((cocos2d::CCObject *)v27); /*0x2f85f5*/
        v22 = (int)v119; /*0x2f85fb*/
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v27 + 8LL))(v27, 1); /*0x2f85b7*/
        v27 = 0; /*0x2f85ba*/
      }
      v142 = operator new(0x208u); /*0x2f8609*/
      v30 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v142); /*0x2f8615*/
      if ( !v30 ) /*0x2f861b*/
        goto LABEL_48; /*0x2f861b*/
      if ( !(unsigned __int8)sub_47940((_DWORD)v30, (_DWORD)v27, 0, (_DWORD)a1, (__int64)sub_2F9250) ) /*0x2f8635*/
        break; /*0x2f8635*/
      cocos2d::CCObject::autorelease(v30); /*0x2f8641*/
LABEL_49:
      *((_DWORD *)v30 + 100) = 1067030938; /*0x2f8657*/
      *((_DWORD *)v30 + 93) = 1067030938; /*0x2f8662*/
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v30 + 64LL))(v30, (unsigned int)v19); /*0x2f8676*/
      (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v11 + 464LL))(v11, v30); /*0x2f8683*/
      v31 = 0; /*0x2f8689*/
      if ( !v22 ) /*0x2f8692*/
        v31 = -6; /*0x2f8692*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v143, 0.0, (float)v31); /*0x2f86a3*/
      cocos2d::CCPoint::operator+(v121, v127, v32); /*0x2f86b5*/
      v33 = *(_QWORD *)v30; /*0x2f86bb*/
      cocos2d::CCNode::convertToNodeSpace(v11, v144, v127); /*0x2f86c9*/
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v33 + 184))(v30, v34); /*0x2f86d5*/
      v37 = cocos2d::CCNode::create(v36, v35); /*0x2f86e1*/
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v37 + 312LL))(v37, &unk_904A08); /*0x2f86f8*/
      (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v27 + 456LL))(v27, v37, 1); /*0x2f8711*/
      v38 = *(_QWORD *)v37; /*0x2f8714*/
      v39 = *(float *)((*(__int64 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v27 + 328LL))(v27, v145) + 4) * 0.5; /*0x2f8730*/
      v40 = (float *)(*(__int64 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v27 + 328LL))(v27, v146); /*0x2f873f*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, *v40 * 0.5, v39); /*0x2f8755*/
      (*(void (__fastcall **)(__int64, __int64))(v38 + 184))(v37, v41); /*0x2f8761*/
      v44 = cocos2d::CCNode::create(v43, v42); /*0x2f876d*/
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v44 + 312LL))(v44, &unk_904A08); /*0x2f8784*/
      (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v27 + 456LL))(v27, v44, 0xFFFFFFFFLL); /*0x2f879d*/
      v45 = *(_QWORD *)v44; /*0x2f87a0*/
      v46 = *(float *)((*(__int64 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v27 + 328LL))(v27, v148) + 4) * 0.5; /*0x2f87bb*/
      v47 = (float *)(*(__int64 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v27 + 328LL))(v27, v149); /*0x2f87ca*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v150, *v47 * 0.5, v46); /*0x2f87e0*/
      (*(void (__fastcall **)(__int64, __int64))(v45 + 184))(v44, v48); /*0x2f87ec*/
      v49 = (const char *)v161; /*0x2f87f2*/
      if ( v162 > 0xF ) /*0x2f8801*/
        v49 = (const char *)v161[0]; /*0x2f8801*/
      v50 = cocos2d::CCSprite::createWithSpriteFrameName(v49); /*0x2f880f*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v44 + 456LL))( /*0x2f8828*/
        v44,
        v50,
        0xFFFFFFFFLL);
      v51 = *(_QWORD *)v50; /*0x2f882b*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v151, 0.0, -10.0); /*0x2f883d*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v51 + 184))(v50, v52); /*0x2f8849*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v50 + 136LL))(v50); /*0x2f8860*/
      (**((void (__fastcall ***)(__int64, void *))v50 + 40))((__int64)v50 + 320, &unk_6FE438); /*0x2f887b*/
      LOBYTE(v53) = 75; /*0x2f8884*/
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v50 + 40) + 40LL))((__int64)v50 + 320, v53); /*0x2f888d*/
      v14 = v112; /*0x2f8890*/
      if ( v19 > v112 ) /*0x2f8897*/
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v30 + 936LL))(v30, 0); /*0x2f9124*/
      }
      else
      {
        v54 = (__int64)v123; /*0x2f889d*/
        sub_3E4F0(v163, (char *)v123 + 344); /*0x2f88b0*/
        v55 = (const char *)v163; /*0x2f88b6*/
        if ( v163[3] > 0xFu ) /*0x2f88c5*/
          v55 = (const char *)v163[0]; /*0x2f88c5*/
        v56 = cocos2d::CCLabelBMFont::create(v55, (const char *)&qword_6FFF68); /*0x2f88da*/
        v120 = v56; /*0x2f88dd*/
        sub_3C310(v163); /*0x2f88e9*/
        v57 = 120; /*0x2f88ee*/
        v58 = (int)v119; /*0x2f88f3*/
        if ( !(_DWORD)v119 ) /*0x2f88fe*/
          v57 = 80; /*0x2f88fe*/
        cocos2d::CCLabelBMFont::limitLabelWidth(v56, (float)v57, 0.5, 0.0); /*0x2f8912*/
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v37 + 456LL))(v37, v56, 3); /*0x2f892f*/
        v59 = *(_QWORD *)v56; /*0x2f8932*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v152, 0.0, v12 + 40.0); /*0x2f8947*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v59 + 184))(v120, v60); /*0x2f8955*/
        v61 = cocos2d::CCString::createWithFormat( /*0x2f896e*/
                (const char *)&word_6E86F8,
                (unsigned int)(*(_DWORD *)(v54 + 1020) - *(_DWORD *)(v54 + 1024)));
        CString = cocos2d::CCString::getCString(v61); /*0x2f8977*/
        v63 = cocos2d::CCLabelBMFont::create(CString, (const char *)&qword_6FFF68); /*0x2f898d*/
        v119 = v63; /*0x2f8990*/
        v64 = *(_QWORD *)v63; /*0x2f8995*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v153, 1.0, 0.5); /*0x2f89a8*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v64 + 288))(v63, v65); /*0x2f89b4*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v63 + 160LL))(v63); /*0x2f89cf*/
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v37 + 456LL))(v37, v63, 2); /*0x2f89e1*/
        v66 = *(_QWORD *)v63; /*0x2f89e7*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v154, -4.0, -38.0); /*0x2f89fe*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v66 + 184))(v63, v67); /*0x2f8a0a*/
        v68 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_bigStar_001.png"); /*0x2f8a1d*/
        v128 = v68; /*0x2f8a20*/
        v69 = *(_QWORD *)v68; /*0x2f8a24*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v155, 0.0, 0.5); /*0x2f8a32*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v69 + 288))(v68, v70); /*0x2f8a3e*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v68 + 160LL))(v68); /*0x2f8a59*/
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v37 + 456LL))(v37, v68, 2); /*0x2f8a6b*/
        v71 = *(_QWORD *)v68; /*0x2f8a71*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v156, -4.0, -38.0); /*0x2f8a8b*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v71 + 184))(v68, v72); /*0x2f8a97*/
        v73 = qword_905FE0; /*0x2f8a9d*/
        if ( !qword_905FE0 ) /*0x2f8aa7*/
        {
          v157 = operator new(0x3E8u); /*0x2f8ab3*/
          qword_905FE0 = sub_2D2B40(v157); /*0x2f8ac3*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2f8ad4*/
          v73 = qword_905FE0; /*0x2f8ad6*/
        }
        if ( GameStatsManager_hasCompletedStarLevel(v73, (__int64)v123) ) /*0x2f8ae2*/
        {
          v75 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"); /*0x2f8afc*/
          v76 = *(_QWORD *)v75; /*0x2f8aff*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v158, 0.0, 0.5); /*0x2f8b10*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v76 + 288))(v75, v77); /*0x2f8b1c*/
          (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v37 + 456LL))(v37, v75, 5); /*0x2f8b39*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v75 + 160LL))(v75); /*0x2f8b4a*/
          v78 = *(_QWORD *)v75; /*0x2f8b50*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v159, 8.0, -5.0); /*0x2f8b66*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v78 + 184))(v75, v79); /*0x2f8b72*/
        }
        v80 = 0; /*0x2f8b78*/
        if ( v19 == 4 ) /*0x2f8b7e*/
        {
          v80 = cocos2d::CCSprite::createWithSpriteFrameName("miniSkull_001.png"); /*0x2f8b8d*/
          (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v37 + 456LL))(v37, v80, 4); /*0x2f8ba4*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v80 + 160LL))(v80); /*0x2f8bb7*/
          v81 = *(_QWORD *)v80; /*0x2f8bb9*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v160, 0.0, 5.0); /*0x2f8bca*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v81 + 184))(v80, v82); /*0x2f8bd6*/
        }
        if ( v110 ) /*0x2f8be1*/
        {
          v83 = (cocos2d::CCObject *)cocos2d::CCArray::create(v74); /*0x2f8be7*/
          a1[58] = v83; /*0x2f8bed*/
          cocos2d::CCObject::retain(v83); /*0x2f8bf7*/
          cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[58], v120); /*0x2f8c09*/
          cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[58], v119); /*0x2f8c1b*/
          cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[58], v128); /*0x2f8c2c*/
          if ( v80 ) /*0x2f8c35*/
            cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[58], v80); /*0x2f8c41*/
          for ( i = 0; i < cocos2d::CCArray::count((cocos2d::CCArray *)a1[58]); ++i ) /*0x2f8c50*/
          {
            v85 = cocos2d::CCArray::objectAtIndex((cocos2d::CCArray *)a1[58], i); /*0x2f8c69*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v85 + 336LL))(v85, 0); /*0x2f8c7e*/
          }
          a1[57] = v30; /*0x2f8c94*/
          (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v30 + 936LL))(v30, 0); /*0x2f8ca3*/
          v86 = cocos2d::CCCallFunc::create(a1, sub_2F92C0); /*0x2f8cb9*/
          v87 = cocos2d::CCDelayTime::create(2.0); /*0x2f8cc0*/
          v88 = cocos2d::CCSequence::create(v87, v86, 0); /*0x2f8ccf*/
          cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v88); /*0x2f8cdb*/
        }
        if ( v19 ) /*0x2f8ce4*/
        {
          v89 = (const struct cocos2d::CCPoint *)v124; /*0x2f8cea*/
          if ( !v58 ) /*0x2f8cf5*/
            v89 = (const struct cocos2d::CCPoint *)v121; /*0x2f8cf5*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v117, v89); /*0x2f8cfe*/
          v118 = v118 + -2.0; /*0x2f8d0f*/
          if ( v58 ) /*0x2f8d1d*/
            v90 = v117 + 27.0; /*0x2f8d1f*/
          else
            v90 = v117 + -27.0; /*0x2f8d29*/
          v117 = v90; /*0x2f8d31*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, -2.0, -1.0); /*0x2f8d43*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v129, 10.0, 2.5); /*0x2f8d5d*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v130, 21.0, 11.5); /*0x2f8d77*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v131, 25.0, 26.0); /*0x2f8d8d*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v132, 20.5, 41.0); /*0x2f8da7*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v133, 15.0, 56.0); /*0x2f8dc1*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v134, 10.5, 71.0); /*0x2f8ddb*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v135, 14.5, 85.5); /*0x2f8df5*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v136, 25.0, 96.0); /*0x2f8e0b*/
          v91 = 1; /*0x2f8e11*/
          LODWORD(v119) = v19; /*0x2f8e17*/
          v92 = v19 & 1; /*0x2f8e1c*/
          do /*0x2f906d*/
          {
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v111); /*0x2f8e25*/
            switch ( v91 ) /*0x2f8e3f*/
            {
              case 0: /*0x2f8e3f*/
                v93 = v137; /*0x2f8e71*/
                break; /*0x2f8e71*/
              case 1: /*0x2f8e3f*/
                v93 = v129; /*0x2f8e41*/
                break; /*0x2f8e45*/
              case 2: /*0x2f8e3f*/
                v93 = v130; /*0x2f8e47*/
                break; /*0x2f8e4b*/
              case 3: /*0x2f8e3f*/
                v93 = v131; /*0x2f8e4d*/
                break; /*0x2f8e51*/
              case 4: /*0x2f8e3f*/
                v93 = v132; /*0x2f8e53*/
                break; /*0x2f8e57*/
              case 5: /*0x2f8e3f*/
                v93 = v133; /*0x2f8e59*/
                break; /*0x2f8e5d*/
              case 6: /*0x2f8e3f*/
                v93 = v134; /*0x2f8e5f*/
                break; /*0x2f8e63*/
              case 7: /*0x2f8e3f*/
                v93 = v135; /*0x2f8e65*/
                break; /*0x2f8e69*/
              case 8: /*0x2f8e3f*/
                v93 = v136; /*0x2f8e6b*/
                break; /*0x2f8e6f*/
            }
            cocos2d::CCPoint::operator=(&v111, v93); /*0x2f8e7a*/
            if ( !v92 ) /*0x2f8e83*/
              v111 = v111 * -1.0; /*0x2f8e90*/
            cocos2d::CCPoint::operator+(&v117, &v125, &v111); /*0x2f8ea4*/
            v94 = cocos2d::CCSprite::createWithSpriteFrameName("uiDot_001.png"); /*0x2f8eb7*/
            v120 = v94; /*0x2f8eba*/
            (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSprite *, __int64))(*a1 + 456LL))(a1, v94, 1); /*0x2f8ed5*/
            if ( (v91 & 1) != 0 ) /*0x2f8edc*/
              v95 = 0.60000002; /*0x2f8ee8*/
            else
              v95 = 0.69999999; /*0x2f8ede*/
            LOBYTE(v113) = (int)(float)(v95 * 255.0); /*0x2f8efc*/
            HIBYTE(v113) = v113; /*0x2f8f00*/
            v114 = v113; /*0x2f8f09*/
            v115 = v113; /*0x2f8f0e*/
            v96 = (char *)v94 + 320; /*0x2f8f12*/
            (**((void (__fastcall ***)(__int64, __int16 *))v94 + 40))((__int64)v94 + 320, &v114); /*0x2f8f24*/
            (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v94 + 184LL))(v94, &v125); /*0x2f8f30*/
            if ( v110 ) /*0x2f8f3b*/
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v96 + 40LL))((__int64)v94 + 320, 0); /*0x2f8f49*/
              v97 = (*(double (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v94 + 168LL))(v94); /*0x2f8f52*/
              (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v94 + 160LL))(v94); /*0x2f8f6c*/
              v98 = cocos2d::CCScaleTo::create(0.30000001, *(float *)&v97); /*0x2f8f7d*/
              v99 = cocos2d::CCEaseBounceOut::create(v98); /*0x2f8f8c*/
              v100 = cocos2d::CCFadeIn::create(0.1); /*0x2f8f9d*/
              v101 = *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 8LL))((__int64)v94 + 320) + 2); /*0x2f8fac*/
              v102 = *(_BYTE *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v96 + 8LL))(v96) + 1); /*0x2f8fbc*/
              v103 = (unsigned __int8 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)v120 + 40) + 8LL))((char *)v120 + 320); /*0x2f8fcf*/
              v104 = cocos2d::CCTintTo::create(0.5, *v103, v102, v101); /*0x2f8fe7*/
              v105 = v120; /*0x2f8fea*/
              (**((void (__fastcall ***)(char *, void *))v120 + 40))((char *)v120 + 320, &unk_6FE43C); /*0x2f9007*/
              v106 = cocos2d::CCSpawn::create(v99, v100, v104, 0); /*0x2f901c*/
              v107 = 9 - v91; /*0x2f9024*/
              if ( v92 ) /*0x2f902a*/
                v107 = v91; /*0x2f902a*/
              v108 = cocos2d::CCDelayTime::create((float)((float)v107 * 0.15000001) + 0.64999998); /*0x2f9045*/
              v109 = cocos2d::CCSequence::create(v108, v106, 0); /*0x2f9054*/
              cocos2d::CCNode::runAction(v105, v109); /*0x2f9060*/
            }
            ++v91; /*0x2f9066*/
          }
          while ( v91 < 9 ); /*0x2f906d*/
          v19 = v116; /*0x2f9073*/
        }
        v14 = v112; /*0x2f9078*/
      }
      cocos2d::CCPoint::operator=(v124, v121); /*0x2f9085*/
      v116 = ++v19; /*0x2f908e*/
      v11 = v138; /*0x2f9097*/
      if ( v19 >= 5 ) /*0x2f909b*/
      {
        sub_3C310(v164); /*0x2f90a8*/
        return sub_3C310(v161); /*0x2f90b5*/
      }
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v30 + 8LL))(v30, 1); /*0x2f8651*/
LABEL_48:
    v30 = 0; /*0x2f8654*/
    goto LABEL_49; /*0x2f8654*/
  }
  return result; /*0x2f911b*/
}

// [5/6] Address: 0x2f98f0
// Method: GauntletLayer::onBack
bool __fastcall GauntletLayer_onBack(__int64 a1)
{
  struct cocos2d::CCScene *v1; // rax
  struct cocos2d::CCScene *v2; // rbx
  __int64 v3; // rcx
  cocos2d::CCDirector *v4; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x2f98fb*/
  v1 = (struct cocos2d::CCScene *)sub_2F9F80(); /*0x2f9901*/
  v2 = cocos2d::CCTransitionFade::create(0.5, v1); /*0x2f9917*/
  v4 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v3); /*0x2f991a*/
  return cocos2d::CCDirector::replaceScene(v4, v2); /*0x2f9926*/
}

// [6/6] Address: 0x2f9940
// Method: GauntletLayer::keyBackClicked
bool __fastcall GauntletLayer_keyBackClicked(__int64 a1)
{
  struct cocos2d::CCScene *v1; // rax
  struct cocos2d::CCScene *v2; // rbx
  __int64 v3; // rcx
  cocos2d::CCDirector *v4; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x2f9952*/
  v1 = (struct cocos2d::CCScene *)sub_2F9F80(); /*0x2f9958*/
  v2 = cocos2d::CCTransitionFade::create(0.5, v1); /*0x2f996e*/
  v4 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v3); /*0x2f9971*/
  return cocos2d::CCDirector::replaceScene(v4, v2); /*0x2f997d*/
}
