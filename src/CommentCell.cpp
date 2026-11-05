#include <Geode/binding/CommentCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0xc8cf0
// Method: CommentCell::onViewProfile
double __fastcall CommentCell_onViewProfile(__int64 a1)
{
  _QWORD *v1; // rcx
  double result; // xmm0_8
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 928); /*0xc8cf4*/
  if ( v1 ) /*0xc8cfe*/
  {
    v4 = 0; /*0xc8d03*/
    v3 = 0; /*0xc8d0c*/
    LOBYTE(v3) = 0; /*0xc8d16*/
    v5 = 15; /*0xc8d1b*/
    return CCTextInputNode_setString(v1, &v3); /*0xc8d24*/
  }
  return result; /*0xc8d29*/
}

// [2/8] Address: 0x14f890
// Method: CommentCell::CommentCell
__int64 __fastcall CommentCell_CommentCell(__int64 a1, __int64 a2)
{
  SmartTemplateCell_loadFromObject(a1, a2); /*0x14f899*/
  *(_QWORD *)a1 = &CommentCell::`vftable'; /*0x14f8a5*/
  *(_QWORD *)(a1 + 320) = &CommentCell::`vftable'; /*0x14f8af*/
  *(_QWORD *)(a1 + 328) = &CommentCell::`vftable'; /*0x14f8bd*/
  *(_QWORD *)(a1 + 336) = &CommentCell::`vftable'; /*0x14f8cb*/
  *(_QWORD *)(a1 + 344) = &CommentCell::`vftable'; /*0x14f8d9*/
  *(_QWORD *)(a1 + 352) = &CommentCell::`vftable'; /*0x14f8e7*/
  *(_QWORD *)(a1 + 560) = &CommentCell::`vftable'; /*0x14f8f5*/
  *(_QWORD *)(a1 + 568) = &CommentCell::`vftable'; /*0x14f903*/
  *(_QWORD *)(a1 + 576) = 0; /*0x14f90c*/
  *(_QWORD *)(a1 + 584) = 0; /*0x14f913*/
  *(_QWORD *)(a1 + 592) = 0; /*0x14f91a*/
  *(_BYTE *)(a1 + 602) = 0; /*0x14f921*/
  *(_QWORD *)(a1 + 608) = 0; /*0x14f927*/
  return a1; /*0x14f931*/
}

// [3/8] Address: 0x14f940
// Method: CommentCell::init
__int64 __fastcall CommentCell_init(__int64 a1)
{
  *(_QWORD *)(a1 + 576) = 0; /*0x14f942*/
  *(_QWORD *)(a1 + 584) = 0; /*0x14f949*/
  *(_QWORD *)(a1 + 592) = 0; /*0x14f950*/
  *(_BYTE *)(a1 + 602) = 0; /*0x14f957*/
  *(_QWORD *)(a1 + 608) = 0; /*0x14f95d*/
  return 1; /*0x14f966*/
}

// [4/8] Address: 0x152560
// Method: CommentCell::likedItem
void __fastcall CommentCell_likedItem(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a1 + 32); /*0x152560*/
  if ( v4 && a3 == *(_DWORD *)(v4 + 384) ) /*0x152570*/
  {
    v5 = *(_DWORD *)(v4 + 392); /*0x152572*/
    v6 = a1 - 560; /*0x152578*/
    if ( a4 ) /*0x152582*/
      *(_DWORD *)(v4 + 392) = v5 + 1; /*0x152586*/
    else
      *(_DWORD *)(v4 + 392) = v5 - 1; /*0x152593*/
    sub_1525A0(v6); /*0x15258c*/
  }
}

// [5/8] Address: 0x1529e0
// Method: CommentCell::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
__int64 __fastcall CommentCell_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  void *v13; // [rsp+38h] [rbp+10h]
  void *v14; // [rsp+38h] [rbp+10h]
  void *v15; // [rsp+38h] [rbp+10h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1529f7*/
  if ( !(_DWORD)result ) /*0x1529fc*/
  {
    if ( a3 ) /*0x152a04*/
    {
      v6 = a1 - 568; /*0x152a0a*/
      result = *(_QWORD *)(a1 - 568 + 592); /*0x152a11*/
      if ( result ) /*0x152a1b*/
      {
        v7 = *(_DWORD *)(result + 460); /*0x152a21*/
        switch ( v7 ) /*0x152a2a*/
        {
          case 3: /*0x152a2a*/
            v8 = 6; /*0x152a2c*/
            break;
          case 4: /*0x152a2a*/
            v8 = 7; /*0x152a38*/
            break;
          case 5: /*0x152a2a*/
            v8 = 8; /*0x152a44*/
            break;
          default:
            v9 = *(_QWORD *)&qword_905FB0; /*0x152a9d*/
            if ( *(_BYTE *)(v6 + 600) ) /*0x152aa4*/
            {
              if ( !*(_QWORD *)&qword_905FB0 ) /*0x152afa*/
              {
                v15 = operator new(0x690u); /*0x152b06*/
                *(_QWORD *)&qword_905FB0 = sub_214250(v15); /*0x152b14*/
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x152b25*/
                v9 = *(_QWORD *)&qword_905FB0; /*0x152b27*/
              }
              v10 = *(unsigned int **)(v6 + 592); /*0x152b2e*/
              v11 = v10[101]; /*0x152b35*/
              v12 = 1; /*0x152b3c*/
            }
            else
            {
              if ( !*(_QWORD *)&qword_905FB0 ) /*0x152ab0*/
              {
                v14 = operator new(0x690u); /*0x152abc*/
                *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x152aca*/
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x152adb*/
                v9 = *(_QWORD *)&qword_905FB0; /*0x152add*/
              }
              v10 = *(unsigned int **)(v6 + 592); /*0x152ae4*/
              v11 = v10[99]; /*0x152aeb*/
              v12 = 0; /*0x152af2*/
            }
            goto LABEL_20; /*0x152af5*/
        }
        v9 = *(_QWORD *)&qword_905FB0; /*0x152a49*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x152a53*/
        {
          v13 = operator new(0x690u); /*0x152a5f*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x152a6d*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x152a7e*/
          v9 = *(_QWORD *)&qword_905FB0; /*0x152a80*/
        }
        v10 = *(unsigned int **)(v6 + 592); /*0x152a87*/
        v11 = v10[99]; /*0x152a8e*/
        v12 = v8; /*0x152a95*/
LABEL_20:
        sub_23CFB0(v9, v10[96], v12, v11); /*0x152b42*/
        *(_BYTE *)(*(_QWORD *)(v6 + 592) + 440LL) = 1; /*0x152b54*/
        return sub_14F970(v6, *(_QWORD *)(v6 + 592)); /*0x152b65*/
      }
    }
  }
  return result; /*0x152b6a*/
}

// [6/8] Address: 0x152b80
// Method: CommentCell::onUnhide
__int64 __fastcall CommentCell_onUnhide(__int64 a1)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 592) + 400LL) = 0; /*0x152b87*/
  return sub_14F970(a1, *(_QWORD *)(a1 + 592));
}

// [7/8] Address: 0x1ae2c0
// Method: CommentCell::updateLabelValues
void __fastcall CommentCell_updateLabelValues(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // r8
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  v1 = *(_QWORD *)(a1 + 1568); /*0x1ae2ca*/
  if ( v1 ) /*0x1ae2d7*/
  {
    v3 = *(_DWORD *)(v1 + 1036); /*0x1ae2dd*/
    EditorUI_deselectAll(a1); /*0x1ae2e8*/
    v4 = *(_QWORD *)(a1 + 1512); /*0x1ae2ed*/
    v5 = *(_DWORD *)(v4 + 14992) - *(_DWORD *)(v4 + 14996); /*0x1ae2fc*/
    LevelEditorLayer_removeAllObjectsOfType(v4, v3); /*0x1ae302*/
    *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15480LL) += v5 /*0x1ae321*/
                                                   + *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 14996LL)
                                                   - *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 14992LL);
    v6 = *(_QWORD *)(a1 + 1512) + 15472LL; /*0x1ae32e*/
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15568LL); /*0x1ae335*/
    if ( v7 >= 0 ) /*0x1ae33b*/
    {
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15504LL) - v7; /*0x1ae341*/
      v9 = 0; /*0x1ae343*/
      if ( v8 > 1 ) /*0x1ae348*/
      {
        do /*0x1ae35c*/
        {
          if ( v9 >= 7 ) /*0x1ae353*/
            break; /*0x1ae353*/
          v8 = (unsigned int)v8 >> 1; /*0x1ae355*/
          ++v9; /*0x1ae357*/
        }
        while ( (unsigned int)v8 > 1 ); /*0x1ae35c*/
      }
      ++*(_DWORD *)(v6 + 4LL * v9 + 64); /*0x1ae361*/
    }
    *(_DWORD *)(v6 + 96) = *(_DWORD *)(v6 + 32); /*0x1ae36d*/
    EditorUI_updateButtons(a1); /*0x1ae371*/
  }
}

// Address: 0x427190
// Method: CommentCell::loadFromComment
// Hidden C++ exception states: #wind=8
bool __fastcall CommentCell_loadFromComment(__int64 a1, unsigned int *a2)
{
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rax
  cocos2d::CCObject *v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // r13
  int v13; // r12d
  void **v14; // rdx
  bool v15; // bl
  __int64 v16; // rdx
  void **v17; // rcx
  void **v18; // rdx
  void **v19; // rcx
  __int64 v20; // rax
  void **v21; // rbx
  void *v22; // rdx
  cocos2d::CCObject *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct cocos2d::CCSprite *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  struct cocos2d::CCSprite *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  cocos2d::CCDirector *v38; // rax
  float v39; // xmm6_4
  __int64 v40; // rcx
  cocos2d::CCDirector *v41; // rax
  float v42; // xmm0_4
  __int64 v43; // rax
  struct cocos2d::CCSprite *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rcx
  cocos2d::CCDirector *v49; // rax
  float v50; // xmm6_4
  __int64 v51; // rcx
  cocos2d::CCDirector *v52; // rax
  float v53; // xmm0_4
  __int64 v54; // rax
  int v55; // eax
  cocos2d::CCObject *v56; // rax
  struct cocos2d::CCMenu *v57; // rax
  __int64 *v58; // rcx
  __int64 v59; // rdi
  cocos2d::CCDirector *v60; // rax
  float v61; // xmm6_4
  __int64 v62; // rcx
  cocos2d::CCDirector *v63; // rax
  float v64; // xmm0_4
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned int v67; // edx
  cocos2d::CCString *v68; // rax
  const char *CString; // rax
  __int64 v70; // r8
  void **v71; // rcx
  void *v72; // rcx
  __int64 v73; // rcx
  cocos2d::CCDirector *v74; // rax
  float v75; // xmm0_4
  __int64 v76; // rax
  _QWORD *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  char *v81; // rax
  bool v82; // bl
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  void **v88; // rcx
  struct cocos2d::CCLabelBMFont *v89; // rbx
  void **v90; // rcx
  struct cocos2d::CCLabelBMFont *v91; // r14
  __int64 v92; // rbx
  __int64 v93; // rcx
  cocos2d::CCDirector *v94; // rax
  float v95; // xmm0_4
  __int64 v96; // rax
  const char *v97; // rcx
  cocos2d::CCLabelBMFont *v98; // rdi
  float v99; // xmm6_4
  double v100; // xmm0_8
  float v101; // xmm7_4
  float v102; // xmm6_4
  double v103; // xmm0_8
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rax
  cocos2d::CCObject *v107; // rsi
  __int64 v108; // rbx
  __int64 v109; // rax
  float v110; // xmm6_4
  double v111; // xmm0_8
  float v112; // xmm9_4
  float v113; // xmm6_4
  double v114; // xmm0_8
  float v115; // xmm7_4
  float v116; // xmm6_4
  double v117; // xmm0_8
  float v118; // xmm8_4
  float v119; // xmm6_4
  float v120; // xmm8_4
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rax
  float v127; // xmm6_4
  double v128; // xmm0_8
  __int64 v129; // rax
  __int64 v130; // rbx
  __int64 v131; // rax
  double v132; // xmm0_8
  __int64 v133; // rax
  __int64 v134; // rbx
  __int64 v135; // rax
  cocos2d::CCDirector *v136; // rax
  float v137; // xmm7_4
  __int64 v138; // rcx
  cocos2d::CCDirector *v139; // rax
  float ScreenRight; // xmm0_4
  struct cocos2d::CCSprite *v141; // rax
  int v142; // ebx
  cocos2d::CCObject *v143; // rax
  __int64 v144; // rdi
  __int64 v145; // rbx
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rbx
  __int64 v149; // rax
  struct cocos2d::CCSprite *v150; // rax
  cocos2d::CCObject *v151; // rbx
  const struct cocos2d::CCPoint *v152; // rax
  struct cocos2d::CCSprite *v153; // rax
  cocos2d::CCObject *v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  struct cocos2d::CCSprite *v157; // rax
  cocos2d::CCObject *v158; // rbx
  __int64 v159; // rax
  __int64 v160; // rax
  const char *v161; // rcx
  int v162; // eax
  cocos2d::CCObject *v163; // rbx
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rcx
  struct cocos2d::CCSprite *v168; // rax
  int v169; // ebx
  cocos2d::CCObject *v170; // rbx
  struct cocos2d::CCSprite *v171; // rax
  int v172; // ebx
  cocos2d::CCObject *v173; // rdi
  __int64 v174; // rbx
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rbx
  __int64 v178; // rax
  struct cocos2d::CCSprite *v179; // r14
  cocos2d::CCObject *v180; // rax
  const struct cocos2d::CCPoint *v181; // rax
  struct cocos2d::CCSprite *v182; // rax
  cocos2d::CCObject *v183; // rbx
  __int64 v184; // rax
  __int64 v185; // rax
  struct cocos2d::CCSprite *v186; // rax
  cocos2d::CCObject *v187; // rbx
  __int64 v188; // rax
  __int64 v189; // rax
  struct cocos2d::CCSprite *v190; // rsi
  __int64 v191; // rdi
  float v192; // xmm6_4
  float *v193; // rax
  __int64 v194; // rbx
  __int64 v195; // rax
  __int64 v196; // rdi
  __int64 v197; // rbx
  __int64 v198; // rax
  cocos2d::CCObject *v199; // rbx
  __int64 v200; // rax
  __int64 v201; // rax
  struct cocos2d::CCSprite *v202; // rax
  cocos2d::CCObject *v203; // rbx
  __int64 v204; // rax
  __int64 v205; // rax
  struct cocos2d::CCSprite *v206; // rdi
  __int64 v207; // rbx
  __int64 v208; // rax
  __int64 v209; // rax
  int v210; // eax
  cocos2d::CCObject *v211; // rsi
  __int64 v212; // rdi
  __int64 v213; // rbx
  __int64 v214; // rax
  __int64 v215; // rax
  cocos2d::CCLayerColor *v216; // rax
  const struct cocos2d::CCPoint *v217; // rax
  char *v218; // rdi
  __int64 v219; // rbx
  __int64 v220; // rax
  __int64 v221; // rcx
  int v222; // [rsp+40h] [rbp-C0h] BYREF
  void **v223; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v224[8]; // [rsp+50h] [rbp-B0h] BYREF
  void **v225; // [rsp+58h] [rbp-A8h] BYREF
  float v226[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v227[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v228[8]; // [rsp+70h] [rbp-90h] BYREF
  void *Src[4]; // [rsp+78h] [rbp-88h] BYREF
  void *v230[4]; // [rsp+98h] [rbp-68h] BYREF
  void *Block[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v232; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v233; // [rsp+D0h] [rbp-30h]
  _QWORD v234[4]; // [rsp+D8h] [rbp-28h] BYREF

  v222 = 0;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v222);
  if ( !result )
    return result;
  *(_DWORD *)(a1 + 984) = 0;
  v5 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v225 = (void **)operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v225);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v5 = *(_QWORD *)&qword_905FB0;
  }
  sub_3E4F0(Block, v5 + 1272);
  sub_58AD0(a1 + 888, Block);
  sub_3C310(Block);
  *(_QWORD *)(a1 + 920) = a2;
  cocos2d::CCObject::retain((cocos2d::CCObject *)a2);
  v7 = *(_QWORD *)(a1 + 920);
  v8 = *(_DWORD *)(v7 + 344);
  if ( v8 <= 0 )
    v8 = *(_DWORD *)(v7 + 588);
  v9 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v225 = (void **)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v225);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v9 = qword_905FD0;
  }
  *(_DWORD *)(v9 + 1000) = v8;
  v10 = (cocos2d::CCObject *)cocos2d::CCArray::create(v6);
  *(_QWORD *)(a1 + 992) = v10;
  cocos2d::CCObject::retain(v10);
  v11 = GJSearchObject_create(25);
  v12 = (_DWORD *)v11;
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 584LL);
  if ( v13 != 2 )
  {
    v20 = GameToolbox_intToString((__int64)Block, a2[86]);
    v21 = (void **)v20;
    v225 = (void **)v20;
    if ( v12 + 82 != (_DWORD *)v20 )
    {
      v22 = (void *)v20;
      if ( *(_QWORD *)(v20 + 24) > 0xFu )
        v22 = *(void **)v20;
      sub_3F5A0(v12 + 82, v22, *(_QWORD *)(v20 + 16));
    }
    v19 = v21;
    goto LABEL_24;
  }
  *(_DWORD *)(a1 + 768) = 200;
  *(_DWORD *)(a1 + 772) = -1055916032;
  *(_DWORD *)(v11 + 320) = 26;
  *(_DWORD *)(v11 + 452) = 29;
  sub_3E4F0(Src, a2 + 126);
  v225 = Src;
  if ( v12 + 82 != (_DWORD *)Src )
  {
    v14 = Src;
    if ( Src[3] > (char *)&loc_D + 2 )
      v14 = (void **)Src[0];
    sub_3F5A0(v12 + 82, v14, (size_t)Src[2]);
  }
  sub_3C310(Src);
  sub_3E4F0(Block, *(_QWORD *)(a1 + 920) + 440LL);
  v15 = v232 != 0;
  sub_3C310(Block);
  if ( v15 )
  {
    sub_3E4F0(v230, *(_QWORD *)(a1 + 920) + 440LL);
    v225 = v230;
    v17 = (void **)(*(_QWORD *)(a1 + 920) + 472LL);
    if ( v17 != v230 )
    {
      v18 = v230;
      if ( v230[3] > (char *)&loc_D + 2 )
        v18 = (void **)v230[0];
      sub_3F5A0(v17, v18, (size_t)v230[2]);
    }
    v19 = v230;
LABEL_24:
    sub_3C310(v19);
  }
  if ( *(_DWORD **)(a1 + 664) != v12 )
  {
    if ( v12 )
      cocos2d::CCObject::retain((cocos2d::CCObject *)v12);
    v23 = *(cocos2d::CCObject **)(a1 + 664);
    if ( v23 )
      cocos2d::CCObject::release(v23);
    *(_QWORD *)(a1 + 664) = v12;
  }
  v24 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v225 = (void **)operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v225);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v24 = *(_QWORD *)&qword_905FB0;
  }
  *(_DWORD *)(v24 + 1608) = v12[80];
  LOBYTE(v16) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v16);
  LOBYTE(v25) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v25);
  v27 = cocos2d::CCDirector::sharedDirector(v26);
  cocos2d::CCDirector::getWinSize(v27, v226);
  v28 = cocos2d::CCSprite::create("GJ_gradientBG.png");
  v29 = *(_QWORD *)v28;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v225, 0.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v29 + 288))(v28, v30);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v28, 4294967294LL);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v28 + 120LL))(v28);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v28 + 136LL))(v28);
  v31 = *(_QWORD *)v28;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v225, -5.0, -5.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v31 + 184))(v28, v32);
  LOWORD(v222) = 26112;
  BYTE2(v222) = -1;
  (**((void (__fastcall ***)(__int64, int *))v28 + 40))((__int64)v28 + 320, &v222);
  v33 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
  v34 = *(_QWORD *)v33;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v225, 0.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v34 + 288))(v33, v35);
  v36 = *(_QWORD *)v33;
  v38 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v37);
  v39 = cocos2d::CCDirector::getScreenBottom(v38) - 1.0;
  v41 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v40);
  v42 = cocos2d::CCDirector::getScreenLeft(v41) - 1.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v225, v42, v39);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v36 + 184))(v33, v43);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v33, 1);
  v44 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
  v45 = *(_QWORD *)v44;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v225, 1.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v45 + 288))(v44, v46);
  v47 = *(_QWORD *)v44;
  v49 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v48);
  v50 = cocos2d::CCDirector::getScreenBottom(v49) - 1.0;
  v52 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v51);
  v53 = cocos2d::CCDirector::getScreenRight(v52) + 1.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v225, v53, v50);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v47 + 184))(v44, v54);
  cocos2d::CCSprite::setFlipX(v44, 1);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v44, 1);
  v55 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
  v56 = CCMenuItemSpriteExtra_create(v55, 0, a1, (__int64)sub_3E7C0C);
  v225 = (void **)v56;
  *((_DWORD *)v56 + 93) = 1070386381;
  v57 = cocos2d::CCMenu::create(v56, 0);
  *(_QWORD *)(a1 + 880) = v57;
  (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v57, 1);
  v58 = *(__int64 **)(a1 + 880);
  v59 = *v58;
  v60 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v58);
  v61 = cocos2d::CCDirector::getScreenTop(v60) - 23.0;
  v63 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v62);
  v64 = cocos2d::CCDirector::getScreenLeft(v63) + 24.0;
  v65 = *(_QWORD *)(a1 + 880);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v223, v64, v61);
  (*(void (__fastcall **)(__int64, __int64))(v59 + 184))(v65, v66);
  v67 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 360LL);
  if ( v67 )
  {
    if ( v67 <= 0xA )
    {
      if ( v67 == 6 || v67 == 7 )
      {
        ++v67;
      }
      else if ( v67 == 8 )
      {
        v67 = 6;
      }
    }
    else
    {
      v67 = 0;
    }
    v68 = cocos2d::CCString::createWithFormat("diffIcon_%02d_btn_001.png", v67);
    CString = cocos2d::CCString::getCString(v68);
    *(_OWORD *)Block = 0;
    v232 = 0;
    v233 = 0;
    v70 = -1;
    do
      ++v70;
    while ( CString[v70] );
    sub_3C230(Block);
  }
  else
  {
    *(_OWORD *)Block = 0;
    v232 = 0;
    v233 = 0;
    Block[0] = (void *)sub_3C460(32);
    v232 = 25;
    v233 = 31;
    strcpy((char *)Block[0], "diffIcon_auto_btn_001.png");
  }
  v71 = Block;
  if ( v233 > 0xF )
    v71 = (void **)Block[0];
  *(_QWORD *)(a1 + 1000) = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v71);
  if ( v233 > 0xF )
  {
    v72 = Block[0];
    if ( v233 + 1 >= 0x1000 )
    {
      v72 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v72 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v72);
  }
  *(_QWORD *)(a1 + 1008) = cocos2d::CCSprite::createWithSpriteFrameName("GJ_featuredCoin_001.png");
  if ( v13 == 2 )
  {
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v234, 0.0, 0.0, 80.0, 80.0);
    v74 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v73);
    v75 = cocos2d::CCDirector::getScreenTop(v74) - 30.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, v226[0] * 0.5, v75);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)Block, (const struct cocos2d::CCRect *)v234);
    v77 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02b_001.png", v76);
    LOBYTE(v78) = -1;
    (*(void (__fastcall **)(_QWORD *, __int64))(v77[40] + 40LL))(v77 + 40, v78);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v223, 365.0, 40.0);
    (*(void (__fastcall **)(_QWORD *, void ***))(*v77 + 312LL))(v77, &v223);
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v77, 0xFFFFFFFFLL);
    (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v77 + 184LL))(v77, v224);
    LOWORD(v222) = 14336;
    BYTE2(v222) = -115;
    (*(void (__fastcall **)(_QWORD *, int *))v77[40])(v77 + 40, &v222);
    v80 = *(_QWORD *)(a1 + 920);
    if ( *(int *)(v80 + 348) > 1 || *(_BYTE *)(v80 + 395) )
    {
      sub_3E4F0(Block, v80 + 440);
      v88 = Block;
      if ( v233 > 0xF )
        v88 = (void **)Block[0];
      v89 = cocos2d::CCLabelBMFont::create((const char *)v88, "goldFont.fnt");
      sub_3C310(Block);
      (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v89, 20);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v89 + 184LL))(v89, v224);
    }
    else
    {
      v81 = CCTextInputNode_create(v79, v80, (__int64)"List Name");
      *(_QWORD *)(a1 + 976) = v81;
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v81, 18);
      *(_QWORD *)(*(_QWORD *)(a1 + 976) + 608LL) = a1 + 840;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 976) + 64LL))(*(_QWORD *)(a1 + 976), 1002);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 976) + 184LL))(*(_QWORD *)(a1 + 976), v224);
      *(_DWORD *)(*(_QWORD *)(a1 + 976) + 616LL) = 25;
      *(_BYTE *)(*(_QWORD *)(a1 + 976) + 632LL) = 1;
      sub_3E4F0(Block, *(_QWORD *)(a1 + 920) + 440LL);
      v82 = v232 != 0;
      sub_3C310(Block);
      if ( v82 )
      {
        sub_3E4F0(Block, *(_QWORD *)(a1 + 920) + 440LL);
        CCTextInputNode_setString(*(_QWORD **)(a1 + 976), Block);
      }
      LOWORD(v222) = -21896;
      v84 = *(_QWORD *)(a1 + 976);
      *(_WORD *)(v84 + 580) = -21896;
      *(_BYTE *)(v84 + 582) = -16;
      sub_555B0(v84, v83);
      v85 = *(_QWORD *)(a1 + 976);
      *(_DWORD *)(v85 + 576) = 1060320051;
      sub_555B0(v85, v86);
    }
  }
  else
  {
    sub_3E4F0(Block, a2 + 110);
    v90 = Block;
    if ( v233 > 0xF )
      v90 = (void **)Block[0];
    v91 = cocos2d::CCLabelBMFont::create((const char *)v90, (const char *)&qword_6FFF68);
    sub_3C310(Block);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v91, 20);
    v92 = *(_QWORD *)v91;
    v94 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v93);
    v95 = cocos2d::CCDirector::getScreenTop(v94) - 20.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, v226[0] * 0.5, v95);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v92 + 184))(v91, v96);
    cocos2d::CCLabelBMFont::limitLabelWidth(v91, 240.0, 0.80000001, 0.0);
    sub_3E4F0(v234, a2 + 102);
    v97 = (const char *)v234;
    if ( v234[3] > 0xFu )
      v97 = (const char *)v234[0];
    v98 = cocos2d::CCLabelBMFont::create(v97, "goldFont.fnt");
    sub_3C310(v234);
    cocos2d::CCLabelBMFont::limitLabelWidth(v98, 90.0, 0.80000001, 0.0);
    v99 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v98 + 320LL))(v98) * 0.5;
    v100 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v98 + 168LL))(v98);
    v101 = *(float *)&v100 * v99;
    v102 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 320LL))(v91) * 0.5;
    v103 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 168LL))(v91);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, (float)((float)(*(float *)&v103 * v102) + v101) + 10.0, 0.0);
    v105 = v104;
    v106 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 200LL))(v91);
    cocos2d::CCPoint::operator+(v106, &v223, v105);
    v107 = CCMenuItemSpriteExtra_create((int)v98, 0, a1, (__int64)sub_42B420);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v107);
    v108 = *(_QWORD *)v107;
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 880), v224, &v223);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v108 + 184))(v107, v109);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1000) + 160LL))(*(_QWORD *)(a1 + 1000));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1008) + 160LL))(*(_QWORD *)(a1 + 1008));
    v110 = *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1000) + 320LL))(*(_QWORD *)(a1 + 1000));
    v111 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1000) + 168LL))(*(_QWORD *)(a1 + 1000));
    v112 = *(float *)&v111 * v110;
    v113 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v98 + 320LL))(v98);
    v114 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v98 + 168LL))(v98);
    v115 = *(float *)&v114 * v113;
    v116 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 320LL))(v91);
    v117 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 168LL))(v91);
    v118 = (float)((float)((float)((float)(*(float *)&v117 * v116) + v115) + 10.0) - v112) - 10.0;
    v119 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 320LL))(v91);
    v120 = (float)-(float)(v118
                         - (float)((*(float (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 168LL))(v91)
                                 * v119))
         * 0.5;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v222, v120, 0.0);
    v122 = v121;
    v123 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 200LL))(v91);
    cocos2d::CCPoint::operator+(v123, v224, v122);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v91 + 184LL))(v91, v224);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v222, v120, 0.0);
    v125 = v124;
    v126 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v107 + 200LL))(v107);
    cocos2d::CCPoint::operator+(v126, v224, v125);
    (*(void (__fastcall **)(cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v107 + 184LL))(v107, v224);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 1000), 2);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 1008), 1);
    v127 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 320LL))(v91);
    v128 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 168LL))(v91);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v222,
      (float)((float)((float)-(float)(*(float *)&v128 * v127) * 0.5) - (float)(v112 * 0.5)) - 10.0,
      -1.0);
    v130 = v129;
    v131 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 200LL))(v91);
    cocos2d::CCPoint::operator+(v131, v224, v130);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 1000) + 184LL))(*(_QWORD *)(a1 + 1000), v224);
    v132 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1000) + 168LL))(*(_QWORD *)(a1 + 1000));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v222, 0.0, *(float *)&v132 * -6.0);
    v134 = v133;
    v135 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1000) + 200LL))(*(_QWORD *)(a1 + 1000));
    cocos2d::CCPoint::operator+(v135, v224, v134);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 1008) + 184LL))(*(_QWORD *)(a1 + 1008), v224);
  }
  *(_BYTE *)(a1 + 764) = 1;
  v136 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v87);
  v137 = cocos2d::CCDirector::getScreenTop(v136) - 25.0;
  v139 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v138);
  ScreenRight = cocos2d::CCDirector::getScreenRight(v139);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v228, (float)(ScreenRight - 25.0) - 0.0, v137);
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 880), v227, v228);
  if ( v13 == 2 )
  {
    v171 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteBtn_001.png");
    v172 = (int)v171;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v171 + 160LL))(v171);
    v173 = CCMenuItemSpriteExtra_create(v172, 0, a1, (__int64)sub_42C220);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v173);
    v174 = *(_QWORD *)v173;
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 880), &v223, v228);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v174 + 184))(v173, v175);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    v177 = v176;
    v178 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v173 + 200LL))(v173);
    cocos2d::CCPoint::operator+(v178, &v223, v177);
    cocos2d::CCPoint::operator=(v227, &v223);
    v179 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v179 + 160LL))(v179);
    v180 = CCMenuItemSpriteExtra_create((int)v179, 0, a1, (__int64)LevelBrowserLayer_onRefresh);
    *(_QWORD *)(a1 + 648) = v180;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v180);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 648) + 184LL))(*(_QWORD *)(a1 + 648), v227);
    v181 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 648) + 200LL))(*(_QWORD *)(a1 + 648));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v222, v181);
    v182 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_chatBtn_001.png");
    LODWORD(v177) = (_DWORD)v182;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v182 + 160LL))(v182);
    v183 = CCMenuItemSpriteExtra_create(v177, 0, a1, (__int64)sub_42B590);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v183);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    cocos2d::CCPoint::operator+(&v222, &v223, v184);
    (*(void (__fastcall **)(cocos2d::CCObject *, void ***))(*(_QWORD *)v183 + 184LL))(v183, &v223);
    v185 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v183 + 200LL))(v183);
    cocos2d::CCPoint::operator=(&v222, v185);
    v186 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_editModeBtn_001.png");
    LODWORD(v183) = (_DWORD)v186;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v186 + 160LL))(v186);
    v187 = CCMenuItemSpriteExtra_create((int)v183, 0, a1, (__int64)sub_42BE50);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v187);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    cocos2d::CCPoint::operator+(&v222, &v223, v188);
    (*(void (__fastcall **)(cocos2d::CCObject *, void ***))(*(_QWORD *)v187 + 184LL))(v187, &v223);
    v189 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v187 + 200LL))(v187);
    cocos2d::CCPoint::operator=(&v222, v189);
    v190 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_plainBtn_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD, __int64))(*(_QWORD *)v190 + 456LL))(
      v190,
      *(_QWORD *)(a1 + 1000),
      3);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD, __int64))(*(_QWORD *)v190 + 456LL))(
      v190,
      *(_QWORD *)(a1 + 1008),
      2);
    v191 = **(_QWORD **)(a1 + 1000);
    v192 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v190 + 320LL))(v190) + 4) * 0.5;
    v193 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v190 + 320LL))(v190);
    v194 = *(_QWORD *)(a1 + 1000);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v223, *v193 * 0.5, v192);
    (*(void (__fastcall **)(__int64, __int64))(v191 + 184))(v194, v195);
    v196 = **(_QWORD **)(a1 + 1008);
    v197 = *(_QWORD *)(a1 + 1008);
    v198 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1000) + 200LL))(*(_QWORD *)(a1 + 1000));
    (*(void (__fastcall **)(__int64, __int64))(v196 + 184))(v197, v198);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v190 + 160LL))(v190);
    v199 = CCMenuItemSpriteExtra_create((int)v190, 0, a1, (__int64)LevelListLayer_onSelectIcon);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v199);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    cocos2d::CCPoint::operator+(&v222, &v223, v200);
    (*(void (__fastcall **)(cocos2d::CCObject *, void ***))(*(_QWORD *)v199 + 184LL))(v199, &v223);
    v201 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v199 + 200LL))(v199);
    cocos2d::CCPoint::operator=(&v222, v201);
    v202 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_duplicateBtn_001.png");
    LODWORD(v199) = (_DWORD)v202;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v202 + 160LL))(v202);
    v203 = CCMenuItemSpriteExtra_create((int)v199, 0, a1, (__int64)sub_42BE90);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v203);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    cocos2d::CCPoint::operator+(&v222, &v223, v204);
    (*(void (__fastcall **)(cocos2d::CCObject *, void ***))(*(_QWORD *)v203 + 184LL))(v203, &v223);
    v205 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v203 + 200LL))(v203);
    cocos2d::CCPoint::operator=(&v222, v205);
    v206 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_shareBtn_001.png");
    v207 = *(_QWORD *)v206;
    (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v179 + 320LL))(v179);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v179 + 168LL))(v179);
    (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v206 + 320LL))(v206);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v207 + 160))(v206);
    v170 = CCMenuItemSpriteExtra_create((int)v206, 0, a1, (__int64)sub_42BBD0);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v170);
  }
  else
  {
    v141 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png");
    v142 = (int)v141;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v141 + 160LL))(v141);
    v143 = CCMenuItemSpriteExtra_create(v142, 0, a1, (__int64)LevelListLayer_onRefreshLevelList);
    *(_QWORD *)(a1 + 648) = v143;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v143);
    v144 = **(_QWORD **)(a1 + 648);
    v145 = *(_QWORD *)(a1 + 648);
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 880), &v223, v228);
    (*(void (__fastcall **)(__int64, __int64))(v144 + 184))(v145, v146);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    v148 = v147;
    v149 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 648) + 200LL))(*(_QWORD *)(a1 + 648));
    cocos2d::CCPoint::operator+(v149, &v223, v148);
    cocos2d::CCPoint::operator=(v227, &v223);
    v150 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoBtn_001.png");
    LODWORD(v148) = (_DWORD)v150;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v150 + 160LL))(v150);
    v151 = CCMenuItemSpriteExtra_create(v148, 0, a1, (__int64)LevelListLayer_onInfo);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v151);
    (*(void (__fastcall **)(cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v151 + 184LL))(v151, v227);
    v152 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v151 + 200LL))(v151);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v222, v152);
    v153 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_like2Btn_001.png");
    LODWORD(v151) = (_DWORD)v153;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v153 + 160LL))(v153);
    v154 = CCMenuItemSpriteExtra_create((int)v151, 0, a1, (__int64)sub_42B7F0);
    *(_QWORD *)(a1 + 960) = v154;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v154);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    cocos2d::CCPoint::operator+(&v222, &v223, v155);
    (*(void (__fastcall **)(_QWORD, void ***))(**(_QWORD **)(a1 + 960) + 184LL))(*(_QWORD *)(a1 + 960), &v223);
    v156 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 960) + 200LL))(*(_QWORD *)(a1 + 960));
    cocos2d::CCPoint::operator=(&v222, v156);
    v157 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_duplicateBtn_001.png");
    LODWORD(v151) = (_DWORD)v157;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v157 + 160LL))(v157);
    v158 = CCMenuItemSpriteExtra_create((int)v151, 0, a1, (__int64)sub_42BE90);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v158);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    cocos2d::CCPoint::operator+(&v222, &v223, v159);
    (*(void (__fastcall **)(cocos2d::CCObject *, void ***))(*(_QWORD *)v158 + 184LL))(v158, &v223);
    v160 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v158 + 200LL))(v158);
    cocos2d::CCPoint::operator=(&v222, v160);
    v161 = "gj_heartOff_001.png";
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 920) + 396LL) )
      v161 = "gj_heartOn_001.png";
    v162 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName(v161);
    v163 = CCMenuItemSpriteExtra_create(v162, 0, a1, (__int64)LevelListLayer_onFavorite);
    *((_DWORD *)v163 + 93) = 1066192077;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 880) + 456LL))(
      *(_QWORD *)(a1 + 880),
      v163,
      100);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
    cocos2d::CCPoint::operator+(&v222, &v223, v164);
    (*(void (__fastcall **)(cocos2d::CCObject *, void ***))(*(_QWORD *)v163 + 184LL))(v163, &v223);
    v165 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v163 + 200LL))(v163);
    cocos2d::CCPoint::operator=(&v222, v165);
    v166 = GJAccountManager_sharedState();
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 920) + 364LL) != *(_DWORD *)(v166 + 360) - *(_DWORD *)(v166 + 364) )
    {
      v167 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v223 = (void **)operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v223);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v167 = qword_905FD0;
      }
      if ( *(_DWORD *)(v167 + 1064) - *(_DWORD *)(v167 + 1068) <= 1 )
        goto LABEL_76;
    }
    v168 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteServerBtn_001.png");
    v169 = (int)v168;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v168 + 160LL))(v168);
    v170 = CCMenuItemSpriteExtra_create(v169, 0, a1, (__int64)sub_42C350);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v170);
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.0, -41.0);
  cocos2d::CCPoint::operator+(&v222, &v223, v208);
  (*(void (__fastcall **)(cocos2d::CCObject *, void ***))(*(_QWORD *)v170 + 184LL))(v170, &v223);
  v209 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v170 + 200LL))(v170);
  cocos2d::CCPoint::operator=(&v222, v209);
LABEL_76:
  v210 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
  v211 = CCMenuItemSpriteExtra_create(v210, 0, a1, (__int64)sub_428DB0);
  *((_DWORD *)v211 + 93) = 1067030938;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(*(_QWORD *)(a1 + 880), v211);
  v212 = *(_QWORD *)v211;
  v213 = *(_QWORD *)(a1 + 880);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v223, 30.0, 30.0);
  cocos2d::CCNode::convertToNodeSpace(v213, v224, v214);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v212 + 184))(v211, v215);
  v216 = LoadingCircle_create();
  *(_QWORD *)(a1 + 736) = v216;
  *((_QWORD *)v216 + 69) = a1;
  *(_BYTE *)(*(_QWORD *)(a1 + 736) + 560LL) = 0;
  cocos2d::CCObject::retain(*(cocos2d::CCObject **)(a1 + 736));
  LoadingCircle_show(*(_QWORD *)(a1 + 736));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 736) + 336LL))(*(_QWORD *)(a1 + 736), 0);
  v223 = Block;
  *(_OWORD *)Block = 0;
  v232 = 0;
  v233 = 0;
  Block[0] = (void *)sub_3C460(32);
  v232 = 31;
  v233 = 31;
  strcpy((char *)Block[0], "No <cg>Internet</c> connection!");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v224, 0.5, 1.0);
  v218 = TextArea_create((__int64)Block, &qword_6FFF68, 1.0, 600.0, v217, 1101004800, 0, 0);
  *(_QWORD *)(a1 + 600) = v218;
  v219 = *(_QWORD *)v218;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v223, v226[0] * 0.5, (float)(v226[1] * 0.5) + 10.0);
  (*(void (__fastcall **)(char *, __int64))(v219 + 184))(v218, v220);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 600) + 160LL))(*(_QWORD *)(a1 + 600));
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 600), 2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 600) + 336LL))(*(_QWORD *)(a1 + 600), 0);
  if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v221) + 209) )
    sub_6DEB0(a1, v225);
  LevelListLayer_updateSideButtons(a1);
  SetupSpawnPopup_updateRemapButtons(a1);
  if ( v13 == 2 || *(_BYTE *)(*(_QWORD *)(a1 + 920) + 398LL) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    sub_3E1980(a1, 0);
  }
  else
  {
    v12[113] = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 920) + 398LL) = 1;
    LevelBrowserLayer_loadPage(a1, v12);
  }
  return 1;
}
