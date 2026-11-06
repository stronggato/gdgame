#include <Geode/binding/MultilineBitmapFont.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x78990
// Method: MultilineBitmapFont::setOpacity
void __fastcall MultilineBitmapFont_setOpacity(cocos2d::CCArray **a1, unsigned __int8 a2)
{
  unsigned int i; // ebx
  struct cocos2d::CCObject *v5; // rax

  for ( i = 0; i < cocos2d::CCArray::count(a1[40]); ++i ) /*0x789ae*/
  {
    v5 = cocos2d::CCArray::objectAtIndex(a1[40], i); /*0x789c9*/
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v5 + 40) + 40LL))((__int64)v5 + 320, a2); /*0x789dd*/
  }
  cocos2d::CCSprite::setOpacity((cocos2d::CCSprite *)a1, a2); /*0x78a09*/
}

// [3/3] Address: 0x79c10
// Method: MultilineBitmapFont::moveSpecialDescriptors
unsigned int __fastcall MultilineBitmapFont_moveSpecialDescriptors(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v8; // rax
  int v9; // edx
  int v10; // ecx

  v6 = 0; /*0x79c33*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 632)); /*0x79c35*/
  if ( result ) /*0x79c3d*/
  {
    while ( 1 ) /*0x79c49*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 632), v6); /*0x79c49*/
      v9 = *((_DWORD *)v8 + 15); /*0x79c4f*/
      v10 = *((_DWORD *)v8 + 16); /*0x79c52*/
      if ( v9 <= a2 ) /*0x79c57*/
        break; /*0x79c57*/
      *((_DWORD *)v8 + 15) = v9 - a3; /*0x79c5b*/
      if ( v10 != -1 ) /*0x79c61*/
        goto LABEL_7; /*0x79c61*/
LABEL_8:
      ++v6; /*0x79c73*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 632)); /*0x79c7c*/
      if ( v6 >= result ) /*0x79c84*/
        return result; /*0x79c84*/
    }
    if ( v10 == -1 || v10 <= a2 ) /*0x79c6c*/
      goto LABEL_8; /*0x79c6c*/
LABEL_7:
    *((_DWORD *)v8 + 16) = v10 - a3; /*0x79c6e*/
    goto LABEL_8; /*0x79c70*/
  }
  return result; /*0x79c86*/
}

// Address: 0x77cb0
// Method: MultilineBitmapFont::initWithFont
// Hidden C++ exception states: #wind=2
char __fastcall MultilineBitmapFont_initWithFont(
        __int64 a1,
        const char *a2,
        _QWORD *a3,
        float a4,
        float a5,
        float *a6,
        int a7,
        char a8,
        char a9,
        int a10,
        int a11)
{
  _QWORD *v11; // rdi
  const char *v12; // rbx
  __int64 v13; // r15
  float *v14; // rsi
  int v15; // r12d
  __int64 v16; // rcx
  int v18; // r13d
  cocos2d::CCDirector *v19; // rax
  float v20; // xmm11_4
  __int64 v21; // rcx
  cocos2d::CCObject *v22; // rax
  __int64 v23; // rcx
  cocos2d::CCObject *v24; // rax
  __int64 v25; // rcx
  cocos2d::CCObject *v26; // rax
  __int64 v27; // rax
  cocos2d::CCObject *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  float v34; // xmm8_4
  _QWORD *v35; // rcx
  int v36; // esi
  __int64 *v37; // rax
  const char *v38; // rcx
  struct cocos2d::CCObject *v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rax
  float v42; // xmm6_4
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  float *v46; // rdi
  float *v47; // rbx
  __int64 v48; // rsi
  float v49; // xmm6_4
  float v50; // xmm0_4
  __int64 v51; // rax
  float *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  float *v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rbx
  __int64 v58; // rax
  float v59; // xmm6_4
  float v60; // xmm0_4
  __int64 v61; // rax
  int v62; // r13d
  int v63; // edi
  int v64; // esi
  struct cocos2d::CCObject *v65; // rax
  struct cocos2d::CCObject *v66; // rbx
  int v67; // edi
  int v68; // ecx
  int v69; // r12d
  int v70; // edi
  int v71; // r12d
  __int64 v72; // rcx
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // r8
  _QWORD *v76; // rax
  __int64 v77; // r13
  __int64 v78; // rdx
  __int64 v79; // rcx
  struct cocos2d::CCObject *v80; // r12
  float *v81; // rsi
  float *v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  float v88; // xmm6_4
  float v89; // xmm7_4
  float v90; // xmm6_4
  double v91; // xmm0_8
  unsigned int v92; // edx
  int v93; // r13d
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // r10
  _QWORD *v97; // rax
  unsigned int v98; // r15d
  int v99; // esi
  __int64 i; // rcx
  _QWORD *v101; // rax
  unsigned int v102; // edi
  __int64 v103; // rax
  __int64 v104; // rdx
  int v105; // eax
  unsigned int j; // edi
  cocos2d::CCArray *v107; // rbx
  cocos2d::CCArray *v108; // rax
  struct cocos2d::CCObject *v109; // rax
  unsigned __int64 v110; // rbx
  __int64 v111; // rax
  char *v112; // rcx
  __int64 v113; // rbx
  struct cocos2d::CCObject *v114; // r14
  __int64 v115; // rbx
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rax
  float *v120; // rdi
  float *v121; // rbx
  __int64 v122; // rsi
  float v123; // xmm6_4
  float v124; // xmm0_4
  __int64 v125; // rax
  float *v126; // rax
  __int64 v127; // rbx
  __int64 v128; // rax
  float *v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // rbx
  __int64 v132; // rax
  float v133; // xmm6_4
  float v134; // xmm0_4
  __int64 v135; // rax
  __int64 v136; // rdx
  int v137; // ecx
  int v138; // eax
  __int64 v139; // rax
  char v140; // [rsp+30h] [rbp-D0h]
  int v141; // [rsp+34h] [rbp-CCh]
  int v142; // [rsp+38h] [rbp-C8h]
  int v143; // [rsp+40h] [rbp-C0h]
  __int16 v144; // [rsp+48h] [rbp-B8h] BYREF
  char v145; // [rsp+4Ah] [rbp-B6h]
  int v146; // [rsp+4Ch] [rbp-B4h]
  char v147[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v148; // [rsp+58h] [rbp-A8h]
  __int64 v149; // [rsp+60h] [rbp-A0h]
  __int64 v150; // [rsp+68h] [rbp-98h]
  int v151; // [rsp+70h] [rbp-90h]
  char v152[8]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v153; // [rsp+80h] [rbp-80h]
  char v154[8]; // [rsp+88h] [rbp-78h] BYREF
  char v155[8]; // [rsp+90h] [rbp-70h] BYREF
  char v156[8]; // [rsp+98h] [rbp-68h] BYREF
  const char *v157; // [rsp+A0h] [rbp-60h]
  char v158[8]; // [rsp+A8h] [rbp-58h] BYREF
  char v159[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v160[8]; // [rsp+B8h] [rbp-48h] BYREF
  char v161[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v162; // [rsp+C8h] [rbp-38h]
  _QWORD v163[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v164; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v165; // [rsp+E8h] [rbp-18h]
  _BYTE v166[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v167[32]; // [rsp+110h] [rbp+10h] BYREF

  v11 = a3;
  v153 = a3;
  v12 = a2;
  v157 = a2;
  v13 = a1;
  v149 = a1;
  v14 = a6;
  v150 = (__int64)a6;
  v162 = a3;
  v15 = a7;
  v151 = a7;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1) )
  {
    sub_3C310(v11);
    return 0;
  }
  *(_BYTE *)(v13 + 608) = a9;
  *(_DWORD *)(v13 + 612) = a10;
  *(_DWORD *)(v13 + 616) = a11;
  *(_BYTE *)(v13 + 692) = a8;
  v18 = 0;
  v148 = 0;
  v19 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v16);
  v20 = a5 * cocos2d::CCDirector::getContentScaleFactor(v19);
  v22 = (cocos2d::CCObject *)cocos2d::CCArray::create(v21);
  *(_QWORD *)(v13 + 632) = v22;
  cocos2d::CCObject::retain(v22);
  v24 = (cocos2d::CCObject *)cocos2d::CCArray::create(v23);
  *(_QWORD *)(v13 + 640) = v24;
  cocos2d::CCObject::retain(v24);
  v26 = (cocos2d::CCObject *)cocos2d::CCArray::create(v25);
  *(_QWORD *)(v13 + 648) = v26;
  cocos2d::CCObject::retain(v26);
  v27 = sub_3CE20();
  v28 = (cocos2d::CCObject *)BitmapFontCache_fontWithConfigFile(v27, v12, a4);
  *(_QWORD *)(v13 + 600) = v28;
  if ( v28 )
    cocos2d::CCObject::retain(v28);
  if ( *(int *)(v13 + 612) > 0 )
  {
    sub_3E4F0(v167, v11);
    v30 = sub_78A10(v13, v166, v29);
    sub_58AD0(v11, v30);
    sub_3C310(v166);
  }
  if ( !*(_BYTE *)(v13 + 692) )
  {
    sub_3E4F0(v166, v11);
    v32 = sub_78C60(v13, v167, v31);
    sub_58AD0(v11, v32);
    sub_3C310(v167);
  }
  v33 = v11[2];
  v34 = 0.0;
  if ( v33 )
  {
    v35 = v11;
    if ( v11[3] > 0xFu )
      v35 = (_QWORD *)*v11;
    if ( *((_BYTE *)v35 + v33 - 1) == 10 )
    {
      v140 = 1;
      v142 = 0;
      goto LABEL_15;
    }
  }
  v142 = 0;
  v140 = 0;
  if ( v33 )
  {
LABEL_15:
    v36 = 0;
    v146 = 0;
    do
    {
      sub_3E4F0(v166, v11);
      GJBaseGameLayer_updateLayerCapacity(v13, v163, v37, v20, a4);
      v38 = (const char *)v163;
      if ( v165 > 0xF )
        v38 = (const char *)v163[0];
      v39 = cocos2d::CCLabelBMFont::create(v38, v12);
      v40 = *(_QWORD *)v39;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v158, 0.0, (float)v36);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v40 + 184))(v39, v41);
      (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 160LL))(v39);
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v13 + 648), v39);
      v42 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 320LL))(v39);
      *(float *)(v13 + 688) = fmaxf(
                                *(float *)(v13 + 688),
                                (*(float (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 168LL))(v39)
                              * v42);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v39 + 288LL))(v39, v150);
      if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 296LL))(v39) == 0.5 )
      {
        v43 = *(_QWORD *)v39;
        v44 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 296LL))(v39);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v159, 0.0, *(float *)(v44 + 4));
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v43 + 288))(v39, v45);
        v46 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 320LL))(v39);
        v47 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 200LL))(v39);
        v48 = *(_QWORD *)v39;
        v49 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 200LL))(v39) + 4);
        v50 = roundf(*v47 - (float)(*v46 * 0.5));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v160, v50, v49);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v48 + 184))(v39, v51);
      }
      if ( *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 296LL))(v39) + 4) == 0.5 )
      {
        v52 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 296LL))(v39);
        v53 = *(_QWORD *)v39;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v161, *v52, 0.0);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v53 + 288))(v39, v54);
        v55 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 200LL))(v39);
        v56 = *(_QWORD *)v39;
        v57 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 200LL))(v39);
        v58 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 320LL))(v39);
        v59 = *v55;
        v60 = roundf(*(float *)(v57 + 4) - (float)(*(float *)(v58 + 4) * 0.5));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, v59, v60);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v56 + 184))(v39, v61);
      }
      v62 = v164;
      v143 = v164;
      qsort(
        *(void **)(*(_QWORD *)(*(_QWORD *)(v13 + 632) + 56LL) + 16LL),
        **(unsigned int **)(*(_QWORD *)(v13 + 632) + 56LL),
        8u,
        sub_77CA0);
      v63 = 0;
      v64 = v142;
      while ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v13 + 632)) )
      {
        v65 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v13 + 632), 0);
        v66 = v65;
        v141 = v63 + 1;
        v67 = *((_DWORD *)v65 + 15);
        if ( v67 < v64 )
          break;
        v68 = v64 + v62;
        if ( v67 > v64 + v62 )
          break;
        v69 = *((_DWORD *)v65 + 16);
        if ( v69 == -1 || v69 <= v68 )
        {
          cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v13 + 632), 0, 1);
        }
        else
        {
          *((_DWORD *)v65 + 15) = v68 + 1;
          v69 = v64 + v62;
        }
        v70 = v67 - v64;
        v71 = v69 - v64;
        if ( *((_DWORD *)v66 + 14) == 5 )
        {
          if ( v70 >= v62 )
          {
            cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v13 + 632), v66);
            break;
          }
          v72 = 0;
          v73 = 0;
          v74 = v70;
          if ( v70 >= (int)v164 )
            v74 = v164 - 1;
          v75 = v74;
          if ( v74 >= 0 )
          {
            do
            {
              v76 = v163;
              if ( v165 > 0xF )
                v76 = (_QWORD *)v163[0];
              if ( (*((_BYTE *)v76 + v72) & 0xC0) != 0x80 )
                v73 = (unsigned int)(v73 + 1);
              ++v72;
            }
            while ( v72 <= v75 );
          }
          if ( v70 < (int)v164 )
            v73 = (unsigned int)(v73 - 1);
          v77 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, __int64, __int64))(*(_QWORD *)v39 + 472LL))(
                  v39,
                  v73,
                  v75);
          v63 = v141;
          if ( v77 )
          {
            v80 = (struct cocos2d::CCObject *)sub_7DF70(*((_QWORD *)v66 + 11));
            if ( v80 )
            {
              if ( !*(_QWORD *)(v13 + 624) )
                *(_QWORD *)(v13 + 624) = cocos2d::CCNode::create(v79, v78);
              v81 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 296LL))(v39);
              v82 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 320LL))(v39);
              v83 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 320LL))(v39);
              v84 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 296LL))(v39);
              cocos2d::CCPoint::CCPoint(
                (cocos2d::CCPoint *)v154,
                *v82 * *v81,
                *(float *)(v84 + 4) * *(float *)(v83 + 4));
              v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 200LL))(v77);
              cocos2d::CCPoint::operator-(v85, v155, v154);
              (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 168LL))(v39);
              cocos2d::CCPoint::operator*(v155, v156);
              v86 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 200LL))(v39);
              cocos2d::CCPoint::operator+(v86, v152, v156);
              (*(void (__fastcall **)(struct cocos2d::CCObject *, char *))(*(_QWORD *)v80 + 184LL))(v80, v152);
              SetupSmartBlockLayer_onCreateAll(v87);
              v88 = *(float *)&dword_8F8390;
              v89 = *(float *)(v13 + 616);
              v90 = v88
                  * *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 320LL))(v39) + 4);
              v91 = (*(double (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 168LL))(v39);
              GJGroundLayer_scaleGround(v80, *(float *)&v91 * v90, v89);
              (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(v13 + 624) + 464LL))(
                *(_QWORD *)(v13 + 624),
                v80);
              cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v13 + 640), v80);
              v63 = v141;
              v64 = v142;
            }
          }
          v62 = v143;
        }
        else
        {
          v92 = 0;
          v93 = v164 - 1;
          v94 = 0;
          v95 = v70;
          if ( v70 >= (int)v164 )
            v95 = v164 - 1;
          v96 = v95;
          if ( v95 >= 0 )
          {
            do
            {
              v97 = v163;
              if ( v165 > 0xF )
                v97 = (_QWORD *)v163[0];
              if ( (*((_BYTE *)v97 + v94) & 0xC0) != 0x80 )
                ++v92;
              ++v94;
            }
            while ( v94 <= v96 );
          }
          v98 = v92 - 1;
          if ( v70 >= (int)v164 )
            v98 = v92;
          v99 = 0;
          if ( v71 < (int)v164 )
            v93 = v71;
          for ( i = 0; i <= v93; ++i )
          {
            v101 = v163;
            if ( v165 > 0xF )
              v101 = (_QWORD *)v163[0];
            if ( (*((_BYTE *)v101 + i) & 0xC0) != 0x80 )
              ++v99;
          }
          if ( v71 < (int)v164 )
            --v99;
          if ( v98 == 1 )
            v98 = 0;
          v102 = v98 - 1;
          if ( (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v39 + 472LL))(
                 v39,
                 v98,
                 v165,
                 v163[0]) )
          {
            v102 = v98;
          }
          if ( *((_DWORD *)v66 + 16) == -1 )
          {
            v103 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v39 + 472LL))(v39, v102);
            v13 = v149;
            v63 = v141;
            v64 = v142;
            v62 = v143;
            if ( v103 && *((_DWORD *)v66 + 14) == 4 )
              *(_DWORD *)(v103 + 616) = *((_DWORD *)v66 + 19);
          }
          else
          {
            v13 = v149;
            v62 = v143;
            if ( (int)v102 <= v99 )
            {
              do
              {
                v104 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v39 + 472LL))(
                         v39,
                         v102);
                if ( v104 )
                {
                  switch ( *((_DWORD *)v66 + 14) )
                  {
                    case 1:
                      v144 = *((_WORD *)v66 + 34);
                      v145 = *((_BYTE *)v66 + 70);
                      (**(void (__fastcall ***)(__int64, __int16 *))(v104 + 320))(v104 + 320, &v144);
                      break;
                    case 2:
                      *(_BYTE *)(v104 + 608) = 1;
                      *(_DWORD *)(v104 + 612) = *((_DWORD *)v66 + 18);
                      break;
                    case 3:
                      *(float *)(v104 + 624) = (float)*((int *)v66 + 20);
                      v105 = *((_DWORD *)v66 + 21);
                      if ( v105 > 0 )
                        *(float *)(v104 + 620) = 1.0 / (float)v105;
                      else
                        *(_DWORD *)(v104 + 620) = 0;
                      *(_DWORD *)(v104 + 632) = v141;
                      break;
                  }
                }
                ++v102;
              }
              while ( (int)v102 <= v99 );
              v13 = v149;
            }
            v63 = v141;
            v64 = v142;
          }
        }
      }
      v142 = v62 + v64;
      (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)v13 + 464LL))(v13, v39);
      for ( j = 0; j < (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 488LL))(v39); ++j )
      {
        v107 = *(cocos2d::CCArray **)(v13 + 640);
        v108 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 480LL))(v39);
        v109 = cocos2d::CCArray::objectAtIndex(v108, j);
        cocos2d::CCArray::addObject(v107, v109);
      }
      v11 = v153;
      v110 = v153[2];
      v111 = v62;
      if ( v110 < v62 )
        v111 = v153[2];
      v112 = (char *)v153;
      if ( v153[3] > 0xFu )
        v112 = (char *)*v153;
      v113 = v110 - v111;
      memmove(v112, &v112[v111], v113 + 1);
      v11[2] = v113;
      v18 = ++v148;
      v15 = v151;
      v36 = v146 - v151;
      v146 -= v151;
      sub_3C310(v163);
      v12 = v157;
    }
    while ( v11[2] );
    if ( v140 )
    {
      v114 = cocos2d::CCLabelBMFont::create(" ", v157);
      v115 = *(_QWORD *)v114;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, 0.0, (float)-(v18 * v15));
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v115 + 184))(v114, v116);
      (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 160LL))(v114);
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v13 + 648), v114);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v114 + 288LL))(v114, v150);
      if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 296LL))(v114) == 0.5 )
      {
        v117 = *(_QWORD *)v114;
        v118 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 296LL))(v114);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, 0.0, *(float *)(v118 + 4));
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v117 + 288))(v114, v119);
        v120 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 320LL))(v114);
        v121 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 200LL))(v114);
        v122 = *(_QWORD *)v114;
        v123 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 200LL))(v114) + 4);
        v124 = roundf(*v121 - (float)(*v120 * 0.5));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, v124, v123);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v122 + 184))(v114, v125);
      }
      if ( *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 296LL))(v114) + 4) == 0.5 )
      {
        v126 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 296LL))(v114);
        v127 = *(_QWORD *)v114;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, *v126, 0.0);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v127 + 288))(v114, v128);
        v129 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 200LL))(v114);
        v130 = *(_QWORD *)v114;
        v131 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 200LL))(v114);
        v132 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v114 + 320LL))(v114);
        v133 = *v129;
        v134 = roundf(*(float *)(v131 + 4) - (float)(*(float *)(v132 + 4) * 0.5));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, v133, v134);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v130 + 184))(v114, v135);
      }
      (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)v13 + 464LL))(v13, v114);
      ++v18;
      v11 = v153;
    }
    v14 = (float *)v150;
  }
  v136 = *(_QWORD *)(v13 + 624);
  if ( v136 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 456LL))(v13, v136, 10);
  cocos2d::CCObject::release(*(cocos2d::CCObject **)(v13 + 632));
  *(_QWORD *)(v13 + 632) = 0;
  v137 = v15 * (v18 - 1);
  *(_DWORD *)(v13 + 672) = v137;
  v138 = (int)(float)(v20 + 0.0);
  *(_DWORD *)(v13 + 676) = v138;
  if ( *v14 != 0.0 )
  {
    if ( *v14 != 1.0 )
      v138 /= 2;
    v34 = (float)-v138;
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, -v34, (float)v137);
  cocos2d::CCPoint::operator=(v13 + 680, v139);
  sub_3C310(v11);
  return 1;
}
