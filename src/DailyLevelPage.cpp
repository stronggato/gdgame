#include <Geode/binding/DailyLevelPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/16] Address: 0x9def0
// Method: DailyLevelPage::onClose
__int64 __fastcall DailyLevelPage_onClose(cocos2d::CCNode *a1)
{
  __int64 v2; // rdx

  cocos2d::CCNode::stopAllActions(a1); /*0x9def9*/
  cocos2d::CCNode::unscheduleAllSelectors(a1); /*0x9df02*/
  (*(void (__fastcall **)(cocos2d::CCNode *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x9df10*/
  LOBYTE(v2) = 1; /*0x9df19*/
  return (*(__int64 (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2);
}

// [2/16] Address: 0x9df30
// Method: DailyLevelPage::keyBackClicked
__int64 __fastcall DailyLevelPage_keyBackClicked(__int64 a1)
{
  cocos2d::CCNode *v1; // rbx
  __int64 v2; // rdx

  v1 = (cocos2d::CCNode *)(a1 - 336); /*0x9df36*/
  cocos2d::CCNode::stopAllActions((cocos2d::CCNode *)(a1 - 336)); /*0x9df40*/
  cocos2d::CCNode::unscheduleAllSelectors(v1); /*0x9df49*/
  (*(void (__fastcall **)(cocos2d::CCNode *, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x9df57*/
  LOBYTE(v2) = 1; /*0x9df60*/
  return (*(__int64 (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v1 + 520LL))(v1, v2);
}

// [3/16] Address: 0xeead0
// Method: DailyLevelPage::updateTimers
// Hidden C++ exception states: #wind=1
__int64 __fastcall DailyLevelPage_updateTimers(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, const char *); // rcx
  const char *v5; // rdx
  unsigned __int8 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rsi
  char v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // si
  bool v17; // bl
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char *v24; // rdx
  __int64 v25; // rsi
  size_t v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  char v34; // cl
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int128 *v41; // rax
  __int128 *v42; // rax
  __int64 v43; // rdx
  char v44; // bl
  int v45; // eax
  int v46; // ecx
  __int128 *v47; // rax
  __int128 *v48; // rax
  __int128 *v49; // rdx
  __int128 v51; // [rsp+28h] [rbp-58h] BYREF
  __int64 v52; // [rsp+38h] [rbp-48h]
  __int64 v53; // [rsp+40h] [rbp-40h]
  __int128 v54; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-28h]
  unsigned __int64 v56; // [rsp+60h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 768); /*0xeeb05*/
  if ( v3 ) /*0xeeb0f*/
  {
    v4 = (void (__fastcall ***)(_QWORD, const char *))(v3 + 360); /*0xeeb11*/
    v5 = "New Group Chat"; /*0xeeb1f*/
    if ( *(_BYTE *)(a1 + 745) ) /*0xeeb26*/
      v5 = "New Direct Message"; /*0xeeb2d*/
    (**v4)(v4, v5); /*0xeeb34*/
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 768), 230.0, 0.69999999, 0.40000001); /*0xeeb55*/
  }
  v6 = *(_BYTE *)(a1 + 745); /*0xeeb5b*/
  v7 = *(_QWORD *)(a1 + 776); /*0xeeb63*/
  if ( v7 ) /*0xeeb6d*/
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v7 + 472LL))(*(_QWORD *)(a1 + 776), 1); /*0xeeb80*/
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 472LL))(v7, 2); /*0xeeb98*/
    if ( v8 ) /*0xeeb9e*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 336LL))(v8, v6); /*0xeebb1*/
    if ( v9 ) /*0xeebb7*/
    {
      LOBYTE(a2) = v6 == 0; /*0xeebbc*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 336LL))(v9, a2); /*0xeebc5*/
    }
  }
  v10 = *(_BYTE *)(a1 + 745); /*0xeebcb*/
  v11 = *(_QWORD *)(a1 + 784); /*0xeebda*/
  if ( v11 ) /*0xeebe4*/
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v11 + 472LL))(*(_QWORD *)(a1 + 784), 1); /*0xeebf7*/
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 472LL))(v11, 2); /*0xeec0f*/
    if ( v12 ) /*0xeec15*/
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v12 + 336LL))(v12, v10 == 0); /*0xeec28*/
    if ( v13 ) /*0xeec2e*/
    {
      LOBYTE(a2) = v10 != 0; /*0xeec33*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 336LL))(v13, a2); /*0xeec3c*/
    }
  }
  v14 = *(_QWORD *)(a1 + 832); /*0xeec42*/
  if ( v14 ) /*0xeec4c*/
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 745) == 0; /*0xeec55*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 336LL))(v14, a2); /*0xeec5b*/
  }
  v15 = *(_QWORD *)(a1 + 840); /*0xeec61*/
  if ( v15 ) /*0xeec6b*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 336LL))(v15, *(unsigned __int8 *)(a1 + 745)); /*0xeec77*/
  v16 = *(_BYTE *)(a1 + 745); /*0xeec7d*/
  v17 = v16 == 0; /*0xeec87*/
  v18 = *(_QWORD *)(a1 + 848); /*0xeec8a*/
  if ( v18 ) /*0xeec94*/
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v18 + 336LL))(v18, v17); /*0xeec9c*/
  v19 = *(_QWORD *)(a1 + 880); /*0xeeca2*/
  if ( v19 ) /*0xeecac*/
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v19 + 336LL))(v19, v17); /*0xeecb4*/
  v20 = *(_QWORD *)(a1 + 896); /*0xeecba*/
  if ( v20 ) /*0xeecc4*/
  {
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v20 + 336LL))(v20, v17); /*0xeeccc*/
    (*(void (**)(void))(**(_QWORD **)(a1 + 896) + 224LL))(); /*0xeece9*/
    if ( v16 ) /*0xeece7*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 896) + 1032LL))(*(_QWORD *)(a1 + 896), 0); /*0xeed0b*/
  }
  v21 = *(_QWORD *)(a1 + 856); /*0xeed2a*/
  if ( v21 ) /*0xeed34*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 224LL))(v21); /*0xeed3c*/
  v22 = *(_QWORD *)(a1 + 904); /*0xeed42*/
  if ( v22 ) /*0xeed4c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 224LL))(v22); /*0xeed54*/
  v23 = *(_QWORD *)(a1 + 904); /*0xeed5a*/
  if ( v23 ) /*0xeed64*/
  {
    v24 = "Description"; /*0xeed71*/
    if ( *(_BYTE *)(a1 + 745) ) /*0xeed78*/
      v24 = "Message"; /*0xeed7f*/
    v25 = -1; /*0xeed83*/
    v26 = -1; /*0xeed8a*/
    do /*0xeed93*/
      ++v26; /*0xeed90*/
    while ( v24[v26] ); /*0xeed93*/
    sub_3F5A0((void *)(v23 + 432), v24, v26); /*0xeeda0*/
    v29 = 300; /*0xeedac*/
    if ( *(_BYTE *)(a1 + 745) ) /*0xeeda5*/
    {
      v29 = 500; /*0xeedb9*/
      SetupSmartBlockLayer_onCreateAll(v28, v27); /*0xeedbf*/
      v31 = dword_8F8394; /*0xeedc4*/
    }
    else
    {
      SetupSmartBlockLayer_onCreateAll(v28, v27); /*0xeedcc*/
      v31 = dword_8F83A4; /*0xeedd1*/
    }
    v32 = (unsigned int)(v29 + 17 * v31); /*0xeedda*/
    *(_DWORD *)(*(_QWORD *)(a1 + 904) + 616LL) = v32; /*0xeede3*/
    if ( *(_BYTE *)(a1 + 745) ) /*0xeede9*/
    {
      SetupSmartBlockLayer_onCreateAll(v32, v30); /*0xeedf2*/
      v33 = (unsigned int)dword_8F8394; /*0xeedf7*/
    }
    else
    {
      SetupSmartBlockLayer_onCreateAll(v32, v30); /*0xeedff*/
      v33 = (unsigned int)dword_8F83A4; /*0xeee04*/
    }
    sub_543F0(*(_QWORD *)(a1 + 904), v33); /*0xeee11*/
    v34 = *(_BYTE *)(a1 + 745); /*0xeee16*/
    v35 = *(_QWORD *)(a1 + 904); /*0xeee1d*/
    *(_BYTE *)(v35 + 648) = v34; /*0xeee24*/
    *(_BYTE *)(*(_QWORD *)(v35 + 600) + 764LL) = v34; /*0xeee31*/
    v36 = *(_QWORD *)(*(_QWORD *)(a1 + 904) + 600LL) + 600LL; /*0xeee45*/
    v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36); /*0xeee4f*/
    v54 = 0; /*0xeee55*/
    v55 = 0; /*0xeee59*/
    v56 = 0; /*0xeee5d*/
    v38 = -1; /*0xeee61*/
    do /*0xeee67*/
      ++v38; /*0xeee64*/
    while ( *(_BYTE *)(v37 + v38) ); /*0xeee67*/
    sub_3C230(&v54); /*0xeee74*/
    v40 = v55; /*0xeee7a*/
    if ( !*(_BYTE *)(a1 + 745) ) /*0xeee7e*/
    {
      v39 = 0; /*0xeee87*/
      if ( !v55 ) /*0xeee8d*/
      {
LABEL_68:
        v49 = &v54; /*0xeef84*/
        if ( v56 > 0xF ) /*0xeef8d*/
          v49 = (__int128 *)v54; /*0xeef8d*/
        v51 = 0; /*0xeef95*/
        v52 = 0; /*0xeef99*/
        v53 = 0; /*0xeef9d*/
        do /*0xeefa4*/
          ++v25; /*0xeefa1*/
        while ( *((_BYTE *)v49 + v25) ); /*0xeefa4*/
        sub_3C230(&v51); /*0xeefb1*/
        CCTextInputNode_setString(*(_QWORD **)(a1 + 904), &v51); /*0xeefc1*/
        sub_3C310(&v54); /*0xeefcb*/
        return CustomSFXWidget_onPlayback(a1); /*0xeefcb*/
      }
      do /*0xeeed4*/
      {
        v41 = &v54; /*0xeeea0*/
        if ( v56 > 0xF ) /*0xeeeb0*/
          v41 = (__int128 *)v54; /*0xeeeb0*/
        if ( *((_BYTE *)v41 + v39) == 10 ) /*0xeeeb8*/
        {
          v42 = &v54; /*0xeeeba*/
          if ( v56 > 0xF ) /*0xeeec2*/
            v42 = (__int128 *)v54; /*0xeeec2*/
          *((_BYTE *)v42 + v39) = 32; /*0xeeec6*/
          v40 = v55; /*0xeeeca*/
        }
        ++v39; /*0xeeece*/
      }
      while ( v39 < v40 ); /*0xeeed4*/
    }
    if ( v40 ) /*0xeeed9*/
    {
      do /*0xeef7e*/
      {
        if ( *(_BYTE *)(a1 + 745) ) /*0xeeee0*/
        {
          SetupSmartBlockLayer_onCreateAll(v39, v40); /*0xeeee9*/
          v43 = (unsigned int)dword_8F8394; /*0xeeeee*/
        }
        else
        {
          SetupSmartBlockLayer_onCreateAll(v39, v40); /*0xeeef6*/
          v43 = (unsigned int)dword_8F83A4; /*0xeeefb*/
        }
        v44 = *(_BYTE *)(a1 + 745); /*0xeef01*/
        v45 = sub_7EAA0(&v54, v43); /*0xeef0c*/
        v46 = 300; /*0xeef11*/
        if ( v44 ) /*0xeef18*/
          v46 = 500; /*0xeef18*/
        if ( v45 <= v46 ) /*0xeef1e*/
          break; /*0xeef1e*/
        v39 = v55 - 1; /*0xeef24*/
        v40 = v56; /*0xeef28*/
        if ( v55 != 1 ) /*0xeef33*/
        {
          do /*0xeef5a*/
          {
            v47 = &v54; /*0xeef40*/
            if ( v56 > 0xF ) /*0xeef48*/
              v47 = (__int128 *)v54; /*0xeef48*/
            if ( (*((_BYTE *)v47 + v39) & 0xC0) != 0x80 ) /*0xeef52*/
              break; /*0xeef54*/
            --v39; /*0xeef56*/
          }
          while ( v39 ); /*0xeef5a*/
        }
        if ( v55 < v39 ) /*0xeef5f*/
          sub_3E4D0(v39, v56); /*0xef005*/
        v55 = v39; /*0xeef65*/
        v48 = &v54; /*0xeef69*/
        if ( v56 > 0xF ) /*0xeef71*/
          v48 = (__int128 *)v54; /*0xeef71*/
        *((_BYTE *)v48 + v39) = 0; /*0xeef75*/
      }
      while ( v55 ); /*0xeef7e*/
    }
    goto LABEL_68; /*0xeef7e*/
  }
  return CustomSFXWidget_onPlayback(a1); /*0xeefd8*/
}

// [4/16] Address: 0x1695e0
// Method: DailyLevelPage::createNodeIfLoaded
// Hidden C++ exception states: #wind=1
__int64 __fastcall DailyLevelPage_createNodeIfLoaded(__int64 a1)
{
  __int64 v2; // rcx
  void *v4; // [rsp+30h] [rbp+8h]

  *(_BYTE *)(a1 + 499) = 0; /*0x1695e9*/
  v2 = qword_906070; /*0x1695f0*/
  if ( !qword_906070 ) /*0x1695fa*/
  {
    v4 = operator new(0x3D0u); /*0x169606*/
    qword_906070 = sub_47C350(v4); /*0x169614*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x169625*/
    v2 = qword_906070; /*0x169627*/
  }
  sub_47FAF0(v2, *(unsigned int *)(a1 + 504)); /*0x169634*/
  return sub_169650(a1); /*0x16963c*/
}

// [5/16] Address: 0x16cb70
// Method: DailyLevelPage::~DailyLevelPage
// Hidden C++ exception states: #wind=1
char *__fastcall DailyLevelPage__dtor_DailyLevelPage(char *Block, char a2)
{
  char *v4; // rdi
  char *v5; // rsi
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  void *v9; // rax

  *(_QWORD *)Block = &DailyLevelPage::`vftable'; /*0x16cb90*/
  *((_QWORD *)Block + 40) = &DailyLevelPage::`vftable'; /*0x16cb9a*/
  *((_QWORD *)Block + 41) = &DailyLevelPage::`vftable'; /*0x16cba8*/
  *((_QWORD *)Block + 42) = &DailyLevelPage::`vftable'; /*0x16cbb6*/
  *((_QWORD *)Block + 43) = &DailyLevelPage::`vftable'; /*0x16cbc4*/
  *((_QWORD *)Block + 44) = &DailyLevelPage::`vftable'; /*0x16cbd2*/
  *((_QWORD *)Block + 51) = &DailyLevelPage::`vftable'; /*0x16cbe0*/
  *((_QWORD *)Block + 54) = &DailyLevelPage::`vftable'; /*0x16cbee*/
  *((_QWORD *)Block + 68) = &DailyLevelPage::`vftable'; /*0x16cbfc*/
  *((_QWORD *)Block + 83) = &DailyLevelPage::`vftable'; /*0x16cc0a*/
  v4 = Block + 672; /*0x16cc11*/
  *((_QWORD *)Block + 84) = &DailyLevelPage::`vftable'; /*0x16cc1f*/
  v5 = Block + 680; /*0x16cc22*/
  *((_QWORD *)Block + 85) = &DailyLevelPage::`vftable'; /*0x16cc30*/
  v6 = qword_905FD0; /*0x16cc33*/
  if ( !qword_905FD0 ) /*0x16cc3d*/
  {
    v7 = operator new(0x6E8u); /*0x16cc44*/
    qword_905FD0 = sub_2723A0(v7); /*0x16cc51*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x16cc62*/
    v6 = qword_905FD0; /*0x16cc64*/
  }
  if ( *(char **)(v6 + 1104) == Block ) /*0x16cc72*/
    *(_QWORD *)(v6 + 1104) = 0; /*0x16cc74*/
  v8 = *(_QWORD *)&qword_905FB0; /*0x16cc7f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x16cc89*/
  {
    v9 = operator new(0x690u); /*0x16cc90*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0x16cc9d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16ccae*/
    v8 = *(_QWORD *)&qword_905FB0; /*0x16ccb0*/
  }
  if ( *(char **)(v8 + 1560) == v4 ) /*0x16ccbe*/
    *(_QWORD *)(v8 + 1560) = 0; /*0x16ccc0*/
  if ( *(char **)(v8 + 1360) == v5 ) /*0x16ccd2*/
    *(_QWORD *)(v8 + 1360) = 0; /*0x16ccd4*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x16cce2*/
  if ( (a2 & 1) != 0 ) /*0x16ccec*/
    j_j_free(Block); /*0x16ccf6*/
  return Block; /*0x16ccfe*/
}

// [6/16] Address: 0x16cf00
// Method: DailyLevelPage::init
// Hidden C++ exception states: #wind=16
bool __fastcall DailyLevelPage_init(__int64 a1, int a2)
{
  bool result; // al
  int v5; // r12d
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  _BYTE *v10; // rbx
  unsigned __int64 v11; // rcx
  char *v12; // r15
  void *v13; // rcx
  unsigned __int64 v14; // rsi
  void **v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  _WORD *v18; // rbx
  void *v19; // rcx
  char *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  _BYTE *v24; // rbx
  unsigned __int64 v25; // rcx
  char *v26; // r15
  void *v27; // rcx
  unsigned __int64 v28; // rsi
  void **v29; // rbx
  unsigned __int64 v30; // rcx
  _WORD *v31; // rbx
  void *v32; // rcx
  char *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  _BYTE *v37; // rbx
  unsigned __int64 v38; // rcx
  char *v39; // r15
  void *v40; // rcx
  unsigned __int64 v41; // rsi
  void **v42; // rbx
  unsigned __int64 v43; // rcx
  _WORD *v44; // rbx
  void *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  void **v51; // rbx
  __int64 v52; // rax
  __int64 *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  const char *v59; // rcx
  struct cocos2d::CCSprite *v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rax
  int i; // r15d
  void **v64; // rcx
  struct cocos2d::CCSprite *v65; // rsi
  struct cocos2d::CCSprite *v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rax
  float v69; // xmm6_4
  float v70; // xmm7_4
  __int64 v71; // rbx
  __int64 v72; // rbx
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // rbx
  __int64 v76; // rax
  unsigned int v77; // edi
  cocos2d::CCObject *v78; // rbx
  struct cocos2d::CCMenu *v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // rax
  unsigned int v82; // ebx
  cocos2d::CCObject *v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 *v92; // rcx
  __int64 v93; // rdi
  float v94; // xmm8_4
  float v95; // xmm7_4
  float v96; // xmm6_4
  float v97; // xmm7_4
  __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 *v101; // rdi
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 *v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rax
  double v108; // xmm6_8
  _DWORD *v109; // rcx
  int v110; // ebx
  int v111; // eax
  int v112; // ebx
  int v113; // edx
  int v114; // edx
  int v115; // ebx
  _QWORD *v116; // rcx
  int v117; // r8d
  int v118; // r9d
  __int64 v119; // rcx
  unsigned int v120; // r8d
  bool v121; // zf
  bool v122; // sf
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rdx
  float v126; // [rsp+30h] [rbp-D0h] BYREF
  float v127; // [rsp+34h] [rbp-CCh]
  struct __timeb64 Time; // [rsp+38h] [rbp-C8h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v130; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v131; // [rsp+60h] [rbp-A0h]
  void *v132[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v133; // [rsp+78h] [rbp-88h]
  unsigned __int64 v134; // [rsp+80h] [rbp-80h]
  _QWORD v135[4]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v136; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v137; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v138; // [rsp+C0h] [rbp-40h]

  sub_5ABA0(); /*0x16cf77*/
  LODWORD(Time.time) = -1778384896; /*0x16cf88*/
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&Time); /*0x16cf94*/
  if ( !result ) /*0x16cf9c*/
    return result; /*0x16cf9c*/
  *(_DWORD *)(a1 + 732) = a2; /*0x16cfa2*/
  v136 = 0; /*0x16cfac*/
  v5 = 0; /*0x16cfb0*/
  v137 = 0; /*0x16cfb3*/
  v138 = 15; /*0x16cfb7*/
  LOBYTE(v136) = 0; /*0x16cfbf*/
  *(_OWORD *)v132 = 0; /*0x16cfc3*/
  v133 = 0; /*0x16cfc8*/
  v134 = 15; /*0x16cfcd*/
  LOBYTE(v132[0]) = 0; /*0x16cfd5*/
  *(_OWORD *)Block = 0; /*0x16cfda*/
  v130 = 0; /*0x16cfdf*/
  v131 = 15; /*0x16cfe4*/
  LOBYTE(Block[0]) = 0; /*0x16cfed*/
  if ( !a2 ) /*0x16cff8*/
    goto LABEL_51; /*0x16cff8*/
  if ( a2 != 1 ) /*0x16d001*/
  {
    if ( a2 == 2 ) /*0x16d00a*/
    {
      v6 = (char *)sub_3C460(32); /*0x16d015*/
      v137 = 23; /*0x16d01d*/
      v7 = 31; /*0x16d025*/
      v138 = 31; /*0x16d02a*/
      strcpy(v6, "eventLevelLabel_001.png"); /*0x16d035*/
      *(_QWORD *)&v136 = v6; /*0x16d05a*/
      v8 = 0x7FFFFFFFFFFFFFFFLL; /*0x16d05e*/
      v9 = v134; /*0x16d068*/
      if ( v134 < 0x18 ) /*0x16d070*/
      {
        v11 = v134 >> 1; /*0x16d0ab*/
        if ( v134 <= 0x7FFFFFFFFFFFFFFFLL - (v134 >> 1) ) /*0x16d0b7*/
        {
          if ( v11 + v134 > 0x1F ) /*0x16d0c5*/
            v7 = v11 + v134; /*0x16d0c5*/
        }
        else
        {
          v7 = 0x7FFFFFFFFFFFFFFFLL; /*0x16d0b9*/
        }
        v12 = (char *)sub_3C460(v7 + 1); /*0x16d0d2*/
        v133 = 24; /*0x16d0d5*/
        v134 = v7; /*0x16d0de*/
        strcpy(v12, "dailyLevelCorner_001.png"); /*0x16d0e9*/
        if ( v9 > 0xF ) /*0x16d101*/
        {
          v13 = v132[0]; /*0x16d107*/
          if ( v9 + 1 >= 0x1000 ) /*0x16d116*/
          {
            v13 = (void *)*((_QWORD *)v132[0] - 1); /*0x16d11c*/
            if ( (unsigned __int64)((char *)v132[0] - (char *)v13 - 8) > 0x1F ) /*0x16d12b*/
              goto LABEL_72; /*0x16d12b*/
          }
          j_j_free(v13); /*0x16d131*/
        }
        v132[0] = v12; /*0x16d136*/
      }
      else
      {
        v10 = v132[0]; /*0x16d07b*/
        v133 = 24; /*0x16d081*/
        memmove(v132[0], "dailyLevelCorner_001.png", 0x18u); /*0x16d09a*/
        v10[24] = 0; /*0x16d09f*/
      }
      v14 = v131; /*0x16d13b*/
      if ( v131 >= 0xF ) /*0x16d144*/
      {
        v15 = Block; /*0x16d146*/
        if ( v131 > 0xF ) /*0x16d14b*/
          v15 = (void **)Block[0]; /*0x16d14b*/
        v130 = 15; /*0x16d151*/
        memmove(v15, "GJ_square05.png", 0xFu); /*0x16d16a*/
        *((_BYTE *)v15 + 15) = 0; /*0x16d16f*/
        *(_DWORD *)(a1 + 736) = -3; /*0x16d173*/
        goto LABEL_76; /*0x16d17e*/
      }
      v17 = v131 >> 1; /*0x16d186*/
      if ( v131 <= 0x7FFFFFFFFFFFFFFFLL - (v131 >> 1) ) /*0x16d192*/
      {
        v8 = 15; /*0x16d198*/
        if ( v131 + v17 > 0xF ) /*0x16d1a0*/
          v8 = v131 + v17; /*0x16d1a0*/
      }
      v18 = (_WORD *)sub_3C460(v8 + 1); /*0x16d1ad*/
      v130 = 15; /*0x16d1b0*/
      v131 = v8; /*0x16d1b9*/
      qmemcpy(v18, "GJ_square05.pn", 14); /*0x16d1c6*/
      v18[7] = (unsigned __int8)aGjSquare05Png[14]; /*0x16d1e5*/
      if ( v14 <= 0xF ) /*0x16d1f0*/
      {
LABEL_27:
        Block[0] = v18; /*0x16d225*/
        *(_DWORD *)(a1 + 736) = -3; /*0x16d22a*/
        goto LABEL_76; /*0x16d235*/
      }
      v19 = Block[0]; /*0x16d1f6*/
      if ( v14 + 1 < 0x1000 /*0x16d21a*/
        || (v19 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) <= 0x1F) )
      {
        j_j_free(v19); /*0x16d220*/
        goto LABEL_27; /*0x16d220*/
      }
LABEL_72:
      invoke_watson(0, 0, 0, 0, 0); /*0x16d658*/
    }
LABEL_51:
    v33 = (char *)sub_3C460(32); /*0x16d457*/
    v137 = 23; /*0x16d464*/
    v34 = 31; /*0x16d46c*/
    v138 = 31; /*0x16d471*/
    strcpy(v33, "dailyLevelLabel_001.png"); /*0x16d47c*/
    *(_QWORD *)&v136 = v33; /*0x16d4a1*/
    v35 = 0x7FFFFFFFFFFFFFFFLL; /*0x16d4a5*/
    v36 = v134; /*0x16d4af*/
    if ( v134 < 0x18 ) /*0x16d4b7*/
    {
      v38 = v134 >> 1; /*0x16d4f2*/
      if ( v134 <= 0x7FFFFFFFFFFFFFFFLL - (v134 >> 1) ) /*0x16d4fe*/
      {
        if ( v38 + v134 > 0x1F ) /*0x16d50c*/
          v34 = v38 + v134; /*0x16d50c*/
      }
      else
      {
        v34 = 0x7FFFFFFFFFFFFFFFLL; /*0x16d500*/
      }
      v39 = (char *)sub_3C460(v34 + 1); /*0x16d519*/
      v133 = 24; /*0x16d51c*/
      v134 = v34; /*0x16d525*/
      strcpy(v39, "dailyLevelCorner_001.png"); /*0x16d530*/
      if ( v36 > 0xF ) /*0x16d548*/
      {
        v40 = v132[0]; /*0x16d54e*/
        if ( v36 + 1 >= 0x1000 ) /*0x16d55d*/
        {
          v40 = (void *)*((_QWORD *)v132[0] - 1); /*0x16d563*/
          if ( (unsigned __int64)((char *)v132[0] - (char *)v40 - 8) > 0x1F ) /*0x16d572*/
            goto LABEL_72; /*0x16d572*/
        }
        j_j_free(v40); /*0x16d578*/
      }
      v132[0] = v39; /*0x16d57d*/
    }
    else
    {
      v37 = v132[0]; /*0x16d4c2*/
      v133 = 24; /*0x16d4c8*/
      memmove(v132[0], "dailyLevelCorner_001.png", 0x18u); /*0x16d4e1*/
      v37[24] = 0; /*0x16d4e6*/
    }
    v41 = v131; /*0x16d582*/
    if ( v131 < 0xF ) /*0x16d58b*/
    {
      v43 = v131 >> 1; /*0x16d5c2*/
      if ( v131 <= 0x7FFFFFFFFFFFFFFFLL - (v131 >> 1) ) /*0x16d5ce*/
      {
        v35 = 15; /*0x16d5d4*/
        if ( v131 + v43 > 0xF ) /*0x16d5dc*/
          v35 = v131 + v43; /*0x16d5dc*/
      }
      v44 = (_WORD *)sub_3C460(v35 + 1); /*0x16d5e9*/
      v130 = 15; /*0x16d5ec*/
      v131 = v35; /*0x16d5f5*/
      qmemcpy(v44, "GJ_square01.pn", 14); /*0x16d602*/
      v44[7] = (unsigned __int8)aGjSquare01Png[14]; /*0x16d621*/
      if ( v41 > 0xF ) /*0x16d62c*/
      {
        v45 = Block[0]; /*0x16d632*/
        if ( v41 + 1 >= 0x1000 ) /*0x16d641*/
        {
          v45 = (void *)*((_QWORD *)Block[0] - 1); /*0x16d647*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v45 - 8) > 0x1F ) /*0x16d656*/
            goto LABEL_72; /*0x16d656*/
        }
        j_j_free(v45); /*0x16d66e*/
      }
      Block[0] = v44; /*0x16d673*/
    }
    else
    {
      v42 = Block; /*0x16d58d*/
      if ( v131 > 0xF ) /*0x16d592*/
        v42 = (void **)Block[0]; /*0x16d592*/
      v130 = 15; /*0x16d598*/
      memmove(v42, "GJ_square01.png", 0xFu); /*0x16d5b1*/
      *((_BYTE *)v42 + 15) = 0; /*0x16d5b6*/
    }
    *(_DWORD *)(a1 + 736) = -1; /*0x16d678*/
    goto LABEL_76; /*0x16d678*/
  }
  v20 = (char *)sub_3C460(32); /*0x16d23f*/
  v137 = 24; /*0x16d244*/
  v21 = 31; /*0x16d24c*/
  v138 = 31; /*0x16d251*/
  strcpy(v20, "weeklyLevelLabel_001.png"); /*0x16d25c*/
  *(_QWORD *)&v136 = v20; /*0x16d270*/
  v22 = 0x7FFFFFFFFFFFFFFFLL; /*0x16d274*/
  v23 = v134; /*0x16d27e*/
  if ( v134 < 0x16 ) /*0x16d286*/
  {
    v25 = v134 >> 1; /*0x16d2c1*/
    if ( v134 <= 0x7FFFFFFFFFFFFFFFLL - (v134 >> 1) ) /*0x16d2cd*/
    {
      if ( v134 + v25 > 0x1F ) /*0x16d2db*/
        v21 = v134 + v25; /*0x16d2db*/
    }
    else
    {
      v21 = 0x7FFFFFFFFFFFFFFFLL; /*0x16d2cf*/
    }
    v26 = (char *)sub_3C460(v21 + 1); /*0x16d2e8*/
    v133 = 22; /*0x16d2eb*/
    v134 = v21; /*0x16d2f4*/
    strcpy(v26, "gauntletCorner_001.png"); /*0x16d2ff*/
    if ( v23 > 0xF ) /*0x16d31e*/
    {
      v27 = v132[0]; /*0x16d324*/
      if ( v23 + 1 >= 0x1000 ) /*0x16d333*/
      {
        v27 = (void *)*((_QWORD *)v132[0] - 1); /*0x16d339*/
        if ( (unsigned __int64)((char *)v132[0] - (char *)v27 - 8) > 0x1F ) /*0x16d348*/
          goto LABEL_72; /*0x16d348*/
      }
      j_j_free(v27); /*0x16d34e*/
    }
    v132[0] = v26; /*0x16d353*/
  }
  else
  {
    v24 = v132[0]; /*0x16d291*/
    v133 = 22; /*0x16d297*/
    memmove(v132[0], "gauntletCorner_001.png", 0x16u); /*0x16d2b0*/
    v24[22] = 0; /*0x16d2b5*/
  }
  v28 = v131; /*0x16d358*/
  if ( v131 < 0xF ) /*0x16d361*/
  {
    v30 = v131 >> 1; /*0x16d3a3*/
    if ( v131 <= 0x7FFFFFFFFFFFFFFFLL - (v131 >> 1) ) /*0x16d3af*/
    {
      v22 = 15; /*0x16d3b5*/
      if ( v131 + v30 > 0xF ) /*0x16d3bd*/
        v22 = v131 + v30; /*0x16d3bd*/
    }
    v31 = (_WORD *)sub_3C460(v22 + 1); /*0x16d3ca*/
    v130 = 15; /*0x16d3cd*/
    v131 = v22; /*0x16d3d6*/
    qmemcpy(v31, "GJ_square05.pn", 14); /*0x16d3e3*/
    v31[7] = (unsigned __int8)aGjSquare05Png[14]; /*0x16d402*/
    if ( v28 > 0xF ) /*0x16d40d*/
    {
      v32 = Block[0]; /*0x16d413*/
      if ( v28 + 1 >= 0x1000 ) /*0x16d422*/
      {
        v32 = (void *)*((_QWORD *)Block[0] - 1); /*0x16d428*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v32 - 8) > 0x1F ) /*0x16d437*/
          goto LABEL_72; /*0x16d437*/
      }
      j_j_free(v32); /*0x16d43d*/
    }
    Block[0] = v31; /*0x16d442*/
    *(_DWORD *)(a1 + 736) = -2; /*0x16d447*/
    goto LABEL_76; /*0x16d452*/
  }
  v29 = Block; /*0x16d363*/
  if ( v131 > 0xF ) /*0x16d368*/
    v29 = (void **)Block[0]; /*0x16d368*/
  v130 = 15; /*0x16d36e*/
  memmove(v29, "GJ_square05.png", 0xFu); /*0x16d387*/
  *((_BYTE *)v29 + 15) = 0; /*0x16d38c*/
  *(_DWORD *)(a1 + 736) = -2; /*0x16d390*/
LABEL_76:
  v46 = qword_905FD0; /*0x16d683*/
  if ( !qword_905FD0 ) /*0x16d68d*/
  {
    Time.time = (__time64_t)operator new(0x6E8u); /*0x16d699*/
    qword_905FD0 = sub_2723A0(Time.time); /*0x16d6a7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x16d6b8*/
    v46 = qword_905FD0; /*0x16d6ba*/
  }
  *(_QWORD *)(v46 + 1104) = a1; /*0x16d6c1*/
  LOBYTE(v16) = 1; /*0x16d6cb*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v16); /*0x16d6d0*/
  LOBYTE(v47) = 1; /*0x16d6d9*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v47); /*0x16d6de*/
  v49 = cocos2d::CCDirector::sharedDirector(v48); /*0x16d6e4*/
  cocos2d::CCDirector::getWinSize(v49, &v126); /*0x16d6f2*/
  v50 = cocos2d::CCLayer::create(); /*0x16d6f8*/
  *(_QWORD *)(a1 + 584) = v50; /*0x16d6fe*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v50); /*0x16d715*/
  v51 = Block; /*0x16d718*/
  if ( v131 > 0xF ) /*0x16d723*/
    v51 = (void **)Block[0]; /*0x16d723*/
  v52 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v135, 0.0, 0.0, 80.0, 80.0); /*0x16d741*/
  v53 = (__int64 *)cocos2d::extension::CCScale9Sprite::create(v51, v52); /*0x16d753*/
  LOBYTE(v54) = -1; /*0x16d761*/
  (*(void (__fastcall **)(__int64 *, __int64))(v53[40] + 40))(v53 + 40, v54); /*0x16d76a*/
  v55 = *v53; /*0x16d76d*/
  v56 = cocos2d::CCSize::CCSize((cocos2d::CCSize *)&Time, 420.0, 280.0); /*0x16d785*/
  (*(void (__fastcall **)(__int64 *, __int64))(v55 + 312))(v53, v56); /*0x16d791*/
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x16d7aa*/
    *(_QWORD *)(a1 + 584),
    v53,
    0xFFFFFFFFLL);
  v57 = *v53; /*0x16d7b0*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Time, v126 * 0.5, v127 * 0.5); /*0x16d7d7*/
  (*(void (__fastcall **)(__int64 *, __int64))(v57 + 184))(v53, v58); /*0x16d7e3*/
  if ( *(_DWORD *)(a1 + 732) == 2 ) /*0x16d7f1*/
  {
    LOWORD(Time.time) = 12222; /*0x16d7ff*/
    BYTE2(Time.time) = -14; /*0x16d804*/
    (*(void (__fastcall **)(__int64 *, struct __timeb64 *))v53[40])(v53 + 40, &Time); /*0x16d81c*/
  }
  *(_DWORD *)(a1 + 640) = -1; /*0x16d81e*/
  v59 = (const char *)&v136; /*0x16d829*/
  if ( v138 > 0xF ) /*0x16d832*/
    v59 = (const char *)v136; /*0x16d832*/
  v60 = cocos2d::CCSprite::createWithSpriteFrameName(v59); /*0x16d83d*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x16d85a*/
    *(_QWORD *)(a1 + 584),
    v60,
    20);
  v61 = *(_QWORD *)v60; /*0x16d85d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Time, v126 * 0.5, (float)((float)(v127 * 0.5) + 140.0) - 29.0); /*0x16d88b*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v61 + 184))(v60, v62); /*0x16d897*/
  for ( i = 0; i < 4; ++i ) /*0x16d89d*/
  {
    v64 = v132; /*0x16d8e0*/
    if ( v134 > 0xF ) /*0x16d8ea*/
      v64 = (void **)v132[0]; /*0x16d8ea*/
    v65 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v64); /*0x16d8f6*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x16d913*/
      *(_QWORD *)(a1 + 584),
      v65,
      8);
    if ( *(_DWORD *)(a1 + 732) == 1 ) /*0x16d91e*/
    {
      v66 = cocos2d::CCSprite::createWithSpriteFrameName("whiteSquare20_001.png"); /*0x16d931*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v66 + 120LL))(v66); /*0x16d942*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v66 + 136LL))(v66); /*0x16d959*/
      (**((void (__fastcall ***)(__int64, void *))v66 + 40))((__int64)v66 + 320, &unk_6FDF84); /*0x16d96f*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v66 + 352LL))(v66); /*0x16d980*/
      v67 = *(_QWORD *)v66; /*0x16d986*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Time, 2.0, 2.0); /*0x16d996*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v67 + 184))(v66, v68); /*0x16d9a2*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v65 + 456LL))( /*0x16d9b7*/
        v65,
        v66,
        1);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 160LL))(v65); /*0x16d9cb*/
    }
    v69 = 185.0; /*0x16d9d1*/
    v70 = 115.0; /*0x16d9d5*/
    if ( i ) /*0x16d9df*/
    {
      switch ( i ) /*0x16d9e8*/
      {
        case 1: /*0x16d9e8*/
          v69 = -185.0; /*0x16da5f*/
          v74 = *(_QWORD *)v65; /*0x16da63*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 144LL))(v65); /*0x16da69*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v74 + 136))(v65); /*0x16da7a*/
          break;
        case 2: /*0x16d9e8*/
          v72 = *(_QWORD *)v65; /*0x16da18*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 128LL))(v65); /*0x16da1e*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v72 + 120))(v65); /*0x16da2f*/
          v73 = *(_QWORD *)v65; /*0x16da32*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 144LL))(v65); /*0x16da38*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v73 + 136))(v65); /*0x16da49*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v65 + 336LL))(v65, 0); /*0x16da57*/
          break;
        case 3: /*0x16d9e8*/
          v70 = -115.0; /*0x16d9f8*/
          v71 = *(_QWORD *)v65; /*0x16d9fc*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 128LL))(v65); /*0x16da02*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v71 + 120))(v65); /*0x16da13*/
          break;
      }
    }
    else
    {
      v69 = -185.0; /*0x16da82*/
      v70 = -115.0; /*0x16da86*/
    }
    v75 = *(_QWORD *)v65; /*0x16da8a*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v135, (float)(v126 * 0.5) + v69, (float)(v127 * 0.5) + v70); /*0x16daaf*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v75 + 184))(v65, v76); /*0x16dabb*/
  }
  v77 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x16dadb*/
  v135[0] = operator new(0x208u); /*0x16dae8*/
  v78 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v135[0]); /*0x16daf4*/
  if ( v78 ) /*0x16dafa*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v78, v77, 0, a1, (__int64)DailyLevelPage_onClose) ) /*0x16db14*/
    {
      cocos2d::CCObject::autorelease(v78); /*0x16db20*/
      goto LABEL_103; /*0x16db26*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v78 + 8LL))(v78, 1); /*0x16db30*/
  }
  v78 = 0; /*0x16db33*/
LABEL_103:
  *((_DWORD *)v78 + 93) = 1070386381; /*0x16db36*/
  v79 = cocos2d::CCMenu::create(v78, 0); /*0x16db4b*/
  *(_QWORD *)(a1 + 552) = v79; /*0x16db4e*/
  v80 = *(_QWORD *)v79; /*0x16db55*/
  cocos2d::CCPoint::CCPoint( /*0x16db9c*/
    (cocos2d::CCPoint *)v135,
    (float)((float)(v126 * 0.5) - 210.0) + 10.0,
    (float)((float)(v127 * 0.5) + 140.0) - 10.0);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v80 + 184))(v79, v81); /*0x16dba8*/
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x16dbc5*/
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 552),
    10);
  v82 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_safeBtn_001.png"); /*0x16dbd8*/
  v135[0] = operator new(0x208u); /*0x16dbe5*/
  v83 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v135[0]); /*0x16dbf1*/
  if ( v83 ) /*0x16dbf7*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v83, v82, 0, a1, (__int64)sub_170580) ) /*0x16dc11*/
    {
      cocos2d::CCObject::autorelease(v83); /*0x16dc1d*/
      goto LABEL_108; /*0x16dc23*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v83 + 8LL))(v83, 1); /*0x16dc2d*/
  }
  v83 = 0; /*0x16dc30*/
LABEL_108:
  *((_DWORD *)v83 + 93) = 1070386381; /*0x16dc33*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v83); /*0x16dc4a*/
  v84 = *(_QWORD *)v83; /*0x16dc50*/
  v85 = *(_QWORD *)(a1 + 552); /*0x16dc53*/
  cocos2d::CCPoint::CCPoint( /*0x16dc8d*/
    (cocos2d::CCPoint *)v135,
    (float)((float)(v126 * 0.5) + 210.0) - 30.0,
    (float)((float)(v127 * 0.5) + 140.0) - 30.0);
  v87 = cocos2d::CCNode::convertToNodeSpace(v85, &Time, v86); /*0x16dc9e*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v84 + 184))(v83, v87); /*0x16dcaa*/
  v88 = sub_16F050(a1, v135, 0); /*0x16dcba*/
  if ( *(_QWORD *)(v88 + 24) > 0xFu ) /*0x16dcc5*/
    v88 = *(_QWORD *)v88; /*0x16dcc7*/
  *(_QWORD *)(a1 + 688) = cocos2d::CCLabelBMFont::create((const char *)v88, "goldFont.fnt"); /*0x16dcda*/
  sub_3C310(v135); /*0x16dce5*/
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x16dd01*/
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 688),
    20);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 160LL))(*(_QWORD *)(a1 + 688)); /*0x16dd25*/
  v89 = **(_QWORD **)(a1 + 688); /*0x16dd32*/
  v90 = *(_QWORD *)(a1 + 688); /*0x16dd35*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v135, 0.0, 0.5); /*0x16dd43*/
  (*(void (__fastcall **)(__int64, __int64))(v89 + 288))(v90, v91); /*0x16dd4f*/
  v92 = *(__int64 **)(a1 + 688); /*0x16dd55*/
  v93 = *v92; /*0x16dd5c*/
  v94 = (float)((float)(v127 * 0.5) - 140.0) + 15.0; /*0x16dd70*/
  v95 = v126 * 0.5; /*0x16dd7f*/
  v96 = *(float *)(*(__int64 (__fastcall **)(__int64 *))(*v92 + 320))(v92); /*0x16dd91*/
  v97 = v95 /*0x16dda7*/
      - (float)((float)((*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 168LL))(*(_QWORD *)(a1 + 688)) * v96)
              * 0.5);
  v98 = *(_QWORD *)(a1 + 688); /*0x16ddab*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v135, v97, v94); /*0x16ddbd*/
  (*(void (__fastcall **)(__int64, __int64))(v93 + 184))(v98, v99); /*0x16ddc9*/
  cocos2d::CCNode::schedule(a1, sub_16FCE0); /*0x16dde1*/
  v100 = LoadingCircle_create(); /*0x16dde7*/
  *(_QWORD *)(a1 + 696) = v100; /*0x16ddec*/
  *(_QWORD *)(v100 + 552) = *(_QWORD *)(a1 + 584); /*0x16ddfa*/
  *(_BYTE *)(*(_QWORD *)(a1 + 696) + 560LL) = 0; /*0x16de08*/
  LoadingCircle_show(*(_QWORD *)(a1 + 696)); /*0x16de16*/
  v101 = *(__int64 **)(*(_QWORD *)(a1 + 696) + 544LL); /*0x16de22*/
  v102 = *v101; /*0x16de29*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v135, v126 * 0.5, (float)((float)(v127 * 0.5) - 140.0) + 17.0); /*0x16de53*/
  (*(void (__fastcall **)(__int64 *, __int64))(v102 + 184))(v101, v103); /*0x16de5f*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 696) + 544LL) + 160LL))(*(_QWORD *)(*(_QWORD *)(a1 + 696) + 544LL)); /*0x16de7e*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), 0); /*0x16de90*/
  v104 = LoadingCircle_create(); /*0x16de96*/
  *(_QWORD *)(a1 + 704) = v104; /*0x16de9b*/
  *(_QWORD *)(v104 + 552) = *(_QWORD *)(a1 + 584); /*0x16dea9*/
  *(_BYTE *)(*(_QWORD *)(a1 + 704) + 560LL) = 0; /*0x16deb7*/
  LoadingCircle_show(*(_QWORD *)(a1 + 704)); /*0x16dec5*/
  v105 = *(__int64 **)(*(_QWORD *)(a1 + 704) + 544LL); /*0x16ded1*/
  v106 = *v105; /*0x16ded8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v135, v126 * 0.5, v127 * 0.5); /*0x16def5*/
  (*(void (__fastcall **)(__int64 *, __int64))(v106 + 184))(v105, v107); /*0x16df01*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 704) + 544LL) + 160LL))(*(_QWORD *)(*(_QWORD *)(a1 + 704) + 544LL)); /*0x16df1c*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 704) + 336LL))(*(_QWORD *)(a1 + 704), 0); /*0x16df2e*/
  ftime64(&Time); /*0x16df39*/
  v108 = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x16df5e*/
  v109 = *(_DWORD **)&qword_905FB0; /*0x16df62*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x16df6c*/
  {
    v135[0] = operator new(0x690u); /*0x16df78*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v135[0]); /*0x16df85*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16df96*/
    v109 = *(_DWORD **)&qword_905FB0; /*0x16df98*/
  }
  v110 = *(_DWORD *)(a1 + 732); /*0x16df9f*/
  if ( v110 ) /*0x16dfaa*/
  {
    if ( v110 == 1 ) /*0x16dfaf*/
    {
      v111 = v109[241]; /*0x16dfc3*/
    }
    else if ( v110 == 2 ) /*0x16dfb4*/
    {
      v111 = v109[244]; /*0x16dfbb*/
    }
    else
    {
      v111 = 0; /*0x16dfb6*/
    }
  }
  else
  {
    v111 = v109[238]; /*0x16dfcb*/
  }
  if ( v108 > (double)v111 ) /*0x16dfdd*/
  {
    if ( !v109 ) /*0x16dfe2*/
    {
      v135[0] = operator new(0x690u); /*0x16dfee*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v135[0]); /*0x16dffb*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e00c*/
      v109 = *(_DWORD **)&qword_905FB0; /*0x16e00e*/
    }
    if ( v110 ) /*0x16e017*/
    {
      v112 = v110 - 1; /*0x16e019*/
      if ( v112 ) /*0x16e01c*/
      {
        if ( v112 == 1 ) /*0x16e021*/
          *((_QWORD *)v109 + 122) = 0; /*0x16e023*/
      }
      else
      {
        *(_QWORD *)(v109 + 241) = 0; /*0x16e02c*/
      }
    }
    else
    {
      *((_QWORD *)v109 + 119) = 0; /*0x16e035*/
    }
  }
  if ( !v109 ) /*0x16e03f*/
  {
    v135[0] = operator new(0x690u); /*0x16e04b*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v135[0]); /*0x16e058*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e069*/
    v109 = *(_DWORD **)&qword_905FB0; /*0x16e06b*/
  }
  v113 = *(_DWORD *)(a1 + 732); /*0x16e072*/
  if ( v113 ) /*0x16e07b*/
  {
    v114 = v113 - 1; /*0x16e07d*/
    if ( v114 ) /*0x16e080*/
    {
      if ( v114 != 1 ) /*0x16e085*/
        goto LABEL_144; /*0x16e085*/
      v115 = v109[246]; /*0x16e08b*/
    }
    else
    {
      v115 = v109[243]; /*0x16e093*/
    }
  }
  else
  {
    v115 = v109[240]; /*0x16e09b*/
  }
  if ( v115 > 0 ) /*0x16e0a3*/
  {
    v116 = (_QWORD *)qword_905FE0; /*0x16e0a9*/
    if ( !qword_905FE0 ) /*0x16e0b3*/
    {
      v135[0] = operator new(0x3E8u); /*0x16e0bf*/
      qword_905FE0 = sub_2D2B40(v135[0]); /*0x16e0cc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x16e0dd*/
      v116 = (_QWORD *)qword_905FE0; /*0x16e0df*/
    }
    if ( !GameStatsManager_hasCompletedDailyLevel(v116, v115) ) /*0x16e0e8*/
    {
      v119 = *(_QWORD *)&qword_905FB0; /*0x16e0f1*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x16e0fb*/
      {
        v135[0] = operator new(0x690u); /*0x16e107*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v135[0]); /*0x16e114*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e125*/
        v119 = *(_QWORD *)&qword_905FB0; /*0x16e128*/
      }
      v5 = sub_21D6A0(v119); /*0x16e136*/
    }
    LOBYTE(v117) = 1; /*0x16e141*/
    DailyLevelPage_createDailyNode(a1, v5, v117, v118, 0); /*0x16e14a*/
    v109 = *(_DWORD **)&qword_905FB0; /*0x16e14f*/
  }
LABEL_144:
  if ( !v109 ) /*0x16e159*/
  {
    v135[0] = operator new(0x690u); /*0x16e165*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v135[0]); /*0x16e172*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e183*/
    v109 = *(_DWORD **)&qword_905FB0; /*0x16e185*/
  }
  v120 = *(_DWORD *)(a1 + 732); /*0x16e18c*/
  if ( v120 ) /*0x16e199*/
  {
    if ( v120 == 1 ) /*0x16e19e*/
    {
      v121 = v109[241] == 0; /*0x16e1ae*/
      v122 = (int)v109[241] < 0; /*0x16e1ae*/
    }
    else
    {
      if ( v120 != 2 ) /*0x16e1a3*/
      {
LABEL_154:
        if ( v120 != 2 ) /*0x16e1dd*/
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), 0); /*0x16e1eb*/
          LOBYTE(v123) = 1; /*0x16e1fb*/
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), v123); /*0x16e1fd*/
          v109 = *(_DWORD **)&qword_905FB0; /*0x16e203*/
        }
        if ( !v109 ) /*0x16e20d*/
        {
          v135[0] = operator new(0x690u); /*0x16e219*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v135[0]); /*0x16e226*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e237*/
          v109 = *(_DWORD **)&qword_905FB0; /*0x16e239*/
        }
        sub_25C060(v109, *(unsigned int *)(a1 + 732)); /*0x16e247*/
        if ( !*(_QWORD *)(a1 + 720) ) /*0x16e24c*/
        {
          LOBYTE(v124) = 1; /*0x16e260*/
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 704) + 336LL))(*(_QWORD *)(a1 + 704), v124); /*0x16e262*/
        }
        goto LABEL_160; /*0x16e262*/
      }
      v121 = v109[244] == 0; /*0x16e1a5*/
      v122 = (int)v109[244] < 0; /*0x16e1a5*/
    }
  }
  else
  {
    v121 = v109[238] == 0; /*0x16e1b7*/
    v122 = (int)v109[238] < 0; /*0x16e1b7*/
  }
  if ( v122 || v121 ) /*0x16e1be*/
    goto LABEL_154; /*0x16e1c3*/
  (**(void (__fastcall ***)(__int64, _QWORD))(a1 + 672))(a1 + 672, v120); /*0x16e1d2*/
LABEL_160:
  v125 = *(_QWORD *)&qword_905FB0; /*0x16e268*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x16e279*/
  {
    v135[0] = operator new(0x690u); /*0x16e285*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v135[0]); /*0x16e292*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e2a3*/
    v125 = *(_QWORD *)&qword_905FB0; /*0x16e2a5*/
  }
  *(_QWORD *)(v125 + 1560) = a1 + 672; /*0x16e2ac*/
  *(_QWORD *)(v125 + 1360) = a1 + 680; /*0x16e2ba*/
  sub_3C310(Block); /*0x16e2c6*/
  sub_3C310(v132); /*0x16e2d1*/
  sub_3C310(&v136); /*0x16e2db*/
  return 1; /*0x16e2e2*/
}

// [7/16] Address: 0x16e350
// Method: DailyLevelPage::dailyStatusFinished
// Hidden C++ exception states: #wind=6
__int64 __fastcall DailyLevelPage_dailyStatusFinished(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  _DWORD *v4; // rsi
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  int v8; // esi
  _QWORD *v9; // rcx
  __int64 result; // rax
  _DWORD *v11; // rcx
  int v12; // edx
  int v13; // edx
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]
  __int64 v21; // [rsp+38h] [rbp-10h]
  void *v22; // [rsp+50h] [rbp+8h]
  void *v23; // [rsp+50h] [rbp+8h]
  void *v24; // [rsp+50h] [rbp+8h]
  void *v25; // [rsp+50h] [rbp+8h]
  void *v26; // [rsp+50h] [rbp+8h]

  v2 = a1 - 672; /*0x16e367*/
  sub_16FCE0(a1 - 672); /*0x16e374*/
  LOBYTE(v3) = 1; /*0x16e380*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 336LL))(*(_QWORD *)(a1 + 16), v3); /*0x16e382*/
  sub_16FCE0(v2); /*0x16e38e*/
  cocos2d::CCNode::unschedule(v2, sub_16FCE0); /*0x16e39d*/
  cocos2d::CCNode::schedule(v2, sub_16FCE0); /*0x16e3b5*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 0); /*0x16e3c4*/
  v4 = *(_DWORD **)&qword_905FB0; /*0x16e3ca*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x16e3d4*/
  {
    v22 = operator new(0x690u); /*0x16e3e0*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v22); /*0x16e3ee*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e3ff*/
    v4 = *(_DWORD **)&qword_905FB0; /*0x16e401*/
  }
  v5 = *(_DWORD *)(a1 + 60); /*0x16e408*/
  v6 = 0; /*0x16e40b*/
  if ( v5 ) /*0x16e40f*/
  {
    v7 = v5 - 1; /*0x16e411*/
    if ( v7 ) /*0x16e414*/
    {
      if ( v7 == 1 ) /*0x16e419*/
        v8 = v4[245]; /*0x16e41f*/
      else
        v8 = 0; /*0x16e41b*/
    }
    else
    {
      v8 = v4[242]; /*0x16e427*/
    }
  }
  else
  {
    v8 = v4[239]; /*0x16e42f*/
  }
  v9 = (_QWORD *)qword_905FE0; /*0x16e435*/
  if ( !qword_905FE0 ) /*0x16e43f*/
  {
    v23 = operator new(0x3E8u); /*0x16e44b*/
    qword_905FE0 = sub_2D2B40(v23); /*0x16e459*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x16e46a*/
    v9 = (_QWORD *)qword_905FE0; /*0x16e46d*/
  }
  result = GameStatsManager_hasCompletedDailyLevel(v9, v8); /*0x16e476*/
  if ( !(_BYTE)result ) /*0x16e47d*/
  {
    v11 = *(_DWORD **)&qword_905FB0; /*0x16e483*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x16e48d*/
    {
      v24 = operator new(0x690u); /*0x16e499*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v24); /*0x16e4a7*/
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e4b8*/
      v11 = *(_DWORD **)&qword_905FB0; /*0x16e4ba*/
    }
    v12 = *(_DWORD *)(a1 + 60); /*0x16e4c1*/
    if ( v12 ) /*0x16e4c6*/
    {
      v13 = v12 - 1; /*0x16e4c8*/
      if ( v13 ) /*0x16e4cb*/
      {
        if ( v13 == 1 ) /*0x16e4d0*/
          v14 = v11[245]; /*0x16e4d6*/
        else
          v14 = 0; /*0x16e4d2*/
      }
      else
      {
        v14 = v11[242]; /*0x16e4de*/
      }
    }
    else
    {
      v14 = v11[239]; /*0x16e4e6*/
    }
    if ( !v11 ) /*0x16e4ef*/
    {
      v25 = operator new(0x690u); /*0x16e4fb*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0x16e509*/
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e51a*/
      v11 = *(_DWORD **)&qword_905FB0; /*0x16e51c*/
    }
    v15 = *(unsigned int *)(a1 + 60); /*0x16e523*/
    if ( (_DWORD)v15 ) /*0x16e528*/
    {
      v15 = (unsigned int)(v15 - 1); /*0x16e52a*/
      if ( (_DWORD)v15 ) /*0x16e52d*/
      {
        if ( (_DWORD)v15 == 1 ) /*0x16e532*/
          v6 = v11[246]; /*0x16e534*/
      }
      else
      {
        v6 = v11[243]; /*0x16e53c*/
      }
    }
    else
    {
      v6 = v11[240]; /*0x16e544*/
    }
    if ( v14 > v6 ) /*0x16e54c*/
    {
      v16 = *(_QWORD *)(a1 + 48); /*0x16e552*/
      if ( v16 ) /*0x16e559*/
      {
        if ( *(_BYTE *)(v16 + 369) ) /*0x16e5bb*/
        {
          v20 = 8; /*0x16e5cc*/
          v21 = 15; /*0x16e5db*/
          v19 = *(unsigned __int64 *)"00:00:00"; /*0x16e5e7*/
          v18 = *(_QWORD *)(v16 + 344); /*0x16e5fb*/
          if ( v18 ) /*0x16e605*/
            (**(void (__fastcall ***)(__int64, __int128 *))(v18 + 360))(v18 + 360, &v19); /*0x16e616*/
          sub_3C310(&v19); /*0x16e61e*/
          DailyLevelPage_exitDailyNode(v2, *(_QWORD *)(a1 + 48)); /*0x16e62d*/
          return DailyLevelPage_downloadAndCreateNode(v2); /*0x16e635*/
        }
        else
        {
          return DailyLevelNode_showSkipButton(); /*0x16e63c*/
        }
      }
      else
      {
        LOBYTE(v15) = 1; /*0x16e562*/
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), v15); /*0x16e564*/
        v17 = *(_QWORD *)&qword_905FB0; /*0x16e56a*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x16e574*/
        {
          v26 = operator new(0x690u); /*0x16e580*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v26); /*0x16e58e*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e59f*/
          v17 = *(_QWORD *)&qword_905FB0; /*0x16e5a1*/
        }
        return sub_22E940(v17, *(unsigned int *)(a1 + 64), 0, 0); /*0x16e5b1*/
      }
    }
  }
  return result; /*0x16e641*/
}

// [8/16] Address: 0x16e660
// Method: DailyLevelPage::dailyStatusFailed
// Hidden C++ exception states: #wind=2
struct cocos2d::CCAction *__fastcall DailyLevelPage_dailyStatusFailed(__int64 a1, __int64 a2, int a3)
{
  int v4; // r9d
  __int64 v5; // rax
  __int64 DialogLayer; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  struct cocos2d::CCAction *result; // rax
  __int64 v13; // rbx
  struct cocos2d::CCFiniteTimeAction *v14; // rax
  struct cocos2d::CCAction *v15; // rax
  _BYTE v16[8]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h]
  char v20[14]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v21; // [rsp+66h] [rbp-1Ah]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int16 v24; // [rsp+B0h] [rbp+30h] BYREF
  char v25; // [rsp+B2h] [rbp+32h]
  __int128 *v26; // [rsp+B8h] [rbp+38h] BYREF

  if ( a3 == 3 ) /*0x16e67f*/
  {
    *(_BYTE *)(a1 + 40) = 1; /*0x16e685*/
    v26 = &v17; /*0x16e68d*/
    v24 = -1; /*0x16e698*/
    v25 = -1; /*0x16e6a3*/
    v17 = 0; /*0x16e6a9*/
    v18 = 0; /*0x16e6af*/
    v19 = 0; /*0x16e6b3*/
    *(_QWORD *)&v17 = sub_3C460(80); /*0x16e6c4*/
    v18 = 78; /*0x16e6c8*/
    v19 = 79; /*0x16e6d0*/
    strcpy((char *)v17, "Please <cg>update</c> your <cl>application</c> to download this <cy>level</c>."); /*0x16e6df*/
    v22 = 12; /*0x16e72f*/
    v23 = 15; /*0x16e737*/
    strcpy(v20, "The Mechanic"); /*0x16e747*/
    v20[13] = 0; /*0x16e752*/
    v21 = 0; /*0x16e752*/
    v5 = sub_1723F0((unsigned int)v20, (unsigned int)&v17, 37, v4, 0, (__int64)&v24); /*0x16e77d*/
    DialogLayer = DialogLayer_createDialogLayer(v5, 0, 4); /*0x16e792*/
    DialogLayer_addToMainScene(DialogLayer); /*0x16e798*/
    v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x16e79d*/
    cocos2d::CCDirector::getWinSize(v8, &v26); /*0x16e7aa*/
    v9 = **(_QWORD **)(DialogLayer + 560); /*0x16e7b7*/
    v10 = *(_QWORD *)(DialogLayer + 560); /*0x16e7ba*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v16, *(float *)&v26 * 0.5, *((float *)&v26 + 1) * 0.5); /*0x16e7db*/
    (*(void (__fastcall **)(__int64, __int64))(v9 + 184))(v10, v11); /*0x16e7e7*/
    result = (struct cocos2d::CCAction *)sub_1734F0(DialogLayer, 1); /*0x16e7f5*/
  }
  else
  {
    result = (struct cocos2d::CCAction *)qword_905FE0; /*0x16e7ff*/
    if ( !qword_905FE0 ) /*0x16e809*/
    {
      v26 = (__int128 *)operator new(0x3E8u); /*0x16e815*/
      qword_905FE0 = sub_2D2B40(v26); /*0x16e822*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x16e833*/
      result = (struct cocos2d::CCAction *)qword_905FE0; /*0x16e835*/
    }
    if ( *((double *)result + 71) <= 0.0 ) /*0x16e84b*/
    {
      v13 = cocos2d::CCCallFunc::create(a1 - 672, DailyLevelPage_tryGetDailyStatus); /*0x16e861*/
      v14 = cocos2d::CCDelayTime::create(5.0); /*0x16e86c*/
      v15 = cocos2d::CCSequence::create(v14, v13, 0); /*0x16e87b*/
      result = cocos2d::CCNode::runAction((cocos2d::CCNode *)(a1 - 672), v15); /*0x16e88b*/
    }
  }
  if ( *(_BYTE *)(a1 + 40) ) /*0x16e891*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 0); /*0x16e8a1*/
    return (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))( /*0x16e8b0*/
                                         *(_QWORD *)(a1 + 32),
                                         0);
  }
  return result; /*0x16e8b6*/
}

// [9/16] Address: 0x16e8d0
// Method: DailyLevelPage::levelDownloadFinished
// Hidden C++ exception states: #wind=2
void __fastcall DailyLevelPage_levelDownloadFinished(__int64 a1, __int64 a2)
{
  int v4; // esi
  _DWORD *v5; // rcx
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int v13; // r9d
  void *v14; // [rsp+48h] [rbp+10h]
  void *v15; // [rsp+48h] [rbp+10h]

  if ( !a2 ) /*0x16e8d3*/
    return; /*0x16e8d3*/
  v4 = *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996); /*0x16e8f4*/
  if ( v4 <= 0 ) /*0x16e8fc*/
    return; /*0x16e8fc*/
  v5 = *(_DWORD **)&qword_905FB0; /*0x16e902*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x16e90c*/
  {
    v14 = operator new(0x690u); /*0x16e918*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x16e926*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e937*/
    v5 = *(_DWORD **)&qword_905FB0; /*0x16e939*/
  }
  v6 = *(_DWORD *)(a1 + 52); /*0x16e940*/
  if ( !v6 ) /*0x16e945*/
  {
    v8 = v5[239]; /*0x16e961*/
LABEL_11:
    if ( v4 == v8 ) /*0x16e969*/
    {
LABEL_22:
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 0); /*0x16e9dd*/
      if ( !*(_BYTE *)(a1 + 48) ) /*0x16e9ec*/
        DailyLevelPage_createDailyNode(a1 - 680, a2, 0, v13, 1); /*0x16ea07*/
      return; /*0x16ea07*/
    }
    goto LABEL_12; /*0x16e969*/
  }
  v7 = v6 - 1; /*0x16e947*/
  if ( !v7 ) /*0x16e94a*/
  {
    v8 = v5[242]; /*0x16e959*/
    goto LABEL_11; /*0x16e95f*/
  }
  if ( v7 == 1 ) /*0x16e94f*/
  {
    v8 = v5[245]; /*0x16e951*/
    goto LABEL_11; /*0x16e957*/
  }
LABEL_12:
  v9 = *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996); /*0x16e96b*/
  if ( !v5 ) /*0x16e97a*/
  {
    v15 = operator new(0x690u); /*0x16e986*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v15); /*0x16e994*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16e9a5*/
    v5 = *(_DWORD **)&qword_905FB0; /*0x16e9a7*/
  }
  v10 = *(_DWORD *)(a1 + 52); /*0x16e9ae*/
  if ( v10 ) /*0x16e9b3*/
  {
    v11 = v10 - 1; /*0x16e9b5*/
    if ( v11 ) /*0x16e9b8*/
    {
      if ( v11 == 1 ) /*0x16e9bd*/
        v12 = v5[246]; /*0x16e9c3*/
      else
        v12 = 0; /*0x16e9bf*/
    }
    else
    {
      v12 = v5[243]; /*0x16e9cb*/
    }
  }
  else
  {
    v12 = v5[240]; /*0x16e9d3*/
  }
  if ( v9 == v12 ) /*0x16e9db*/
    goto LABEL_22; /*0x16e9db*/
}

// [10/16] Address: 0x16ea20
// Method: DailyLevelPage::levelDownloadFailed
__int64 __fastcall DailyLevelPage_levelDownloadFailed(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == -1 ) /*0x16ea23*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 0); /*0x16ea2e*/
  return result; /*0x16ea35*/
}

// [11/16] Address: 0x16ea40
// Method: DailyLevelPage::tryGetDailyStatus
// Hidden C++ exception states: #wind=1
__int64 __fastcall DailyLevelPage_tryGetDailyStatus(__int64 a1)
{
  __int64 v3; // rcx
  void *v4; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 712) ) /*0x16ea49*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), 0); /*0x16ea5e*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 704) + 336LL))(*(_QWORD *)(a1 + 704), 0); /*0x16ea75*/
  }
  else
  {
    *(_BYTE *)(a1 + 712) = 1; /*0x16ea7c*/
    v3 = *(_QWORD *)&qword_905FB0; /*0x16ea83*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x16ea8d*/
    {
      v4 = operator new(0x690u); /*0x16ea99*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v4); /*0x16eaa7*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16eab8*/
      v3 = *(_QWORD *)&qword_905FB0; /*0x16eaba*/
    }
    return sub_25C060(v3, *(unsigned int *)(a1 + 732)); /*0x16eacc*/
  }
}

// [12/16] Address: 0x16eae0
// Method: DailyLevelPage::downloadAndCreateNode
// Hidden C++ exception states: #wind=1
struct cocos2d::CCAction *__fastcall DailyLevelPage_downloadAndCreateNode(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct cocos2d::CCFiniteTimeAction *v4; // rax
  struct cocos2d::CCAction *v5; // rax
  void *v7; // [rsp+30h] [rbp+8h]

  *(_BYTE *)(a1 + 728) = 1; /*0x16eaed*/
  v2 = *(_QWORD *)&qword_905FB0; /*0x16eaf4*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x16eafe*/
  {
    v7 = operator new(0x690u); /*0x16eb0a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x16eb18*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16eb29*/
    v2 = *(_QWORD *)&qword_905FB0; /*0x16eb2b*/
  }
  sub_22E940(v2, *(unsigned int *)(a1 + 736), 0, 0); /*0x16eb3e*/
  v3 = cocos2d::CCCallFunc::create(a1, sub_16EB90); /*0x16eb53*/
  v4 = cocos2d::CCDelayTime::create(0.5); /*0x16eb5e*/
  v5 = cocos2d::CCSequence::create(v4, v3, 0); /*0x16eb6d*/
  return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v5); /*0x16eb79*/
}

// [13/16] Address: 0x16ec90
// Method: DailyLevelPage::createDailyNode
// Hidden C++ exception states: #wind=3
char *__fastcall DailyLevelPage_createDailyNode(__int64 a1, __int64 a2, char a3, float a4, unsigned __int8 a5)
{
  __int64 v9; // rax
  char *v10; // rsi
  int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rax
  _DWORD *v14; // rdx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  const struct cocos2d::CCPoint *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  cocos2d::CCDirector *v23; // rax
  float v24; // xmm0_4
  __int64 v25; // rax
  struct cocos2d::CCFiniteTimeAction *v26; // rdi
  __int64 v27; // rbx
  struct cocos2d::CCActionInterval *v28; // rax
  struct cocos2d::CCEaseElasticOut *v29; // rax
  struct cocos2d::CCAction *v30; // rax
  char *v31; // [rsp+20h] [rbp-38h] BYREF
  void *v32; // [rsp+28h] [rbp-30h] BYREF
  float v33; // [rsp+60h] [rbp+8h] BYREF
  float v34; // [rsp+64h] [rbp+Ch]

  if ( *(_QWORD *)(a1 + 720) ) /*0x16ecba*/
    return 0; /*0x16ecc4*/
  v9 = cocos2d::CCDirector::sharedDirector(a1); /*0x16eccb*/
  cocos2d::CCDirector::getWinSize(v9, &v33); /*0x16ecd9*/
  v10 = (char *)operator new(0x178u); /*0x16ece9*/
  v31 = v10; /*0x16ecec*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v10); /*0x16ecf4*/
  *(_QWORD *)v10 = &DailyLevelNode::`vftable'; /*0x16ed02*/
  *((_QWORD *)v10 + 40) = &DailyLevelNode::`vftable'; /*0x16ed0c*/
  v11 = 0; /*0x16ed13*/
  *((_QWORD *)v10 + 41) = 0; /*0x16ed15*/
  *((_QWORD *)v10 + 42) = 0; /*0x16ed1c*/
  *((_QWORD *)v10 + 43) = 0; /*0x16ed23*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v10 + 352)); /*0x16ed31*/
  *((_WORD *)v10 + 184) = 0; /*0x16ed37*/
  if ( (unsigned __int8)DailyLevelNode_init(v10, a2, a1, a5, v31) ) /*0x16ed50*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v10); /*0x16ed5c*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x16ed6c*/
    v10 = 0; /*0x16ed6f*/
  }
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v10); /*0x16ed7f*/
  v12 = *(_QWORD *)v10; /*0x16ed85*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v33 * 0.5, (float)(v34 * 0.5) - 8.0); /*0x16edb1*/
  (*(void (__fastcall **)(char *, __int64))(v12 + 184))(v10, v13); /*0x16edbd*/
  if ( a2 ) /*0x16edc6*/
  {
    v14 = *(_DWORD **)&qword_905FB0; /*0x16edcc*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x16edd6*/
    {
      v32 = operator new(0x690u); /*0x16ede2*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v32); /*0x16edf0*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x16ee01*/
      v14 = *(_DWORD **)&qword_905FB0; /*0x16ee03*/
    }
    v15 = *(_DWORD *)(a1 + 732); /*0x16ee0a*/
    if ( v15 ) /*0x16ee12*/
    {
      v16 = v15 - 1; /*0x16ee14*/
      if ( v16 ) /*0x16ee17*/
      {
        if ( v16 == 1 ) /*0x16ee1c*/
          v11 = v14[245]; /*0x16ee1e*/
      }
      else
      {
        v11 = v14[242]; /*0x16ee26*/
      }
    }
    else
    {
      v11 = v14[239]; /*0x16ee2e*/
    }
    if ( v11 > *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996) ) /*0x16ee44*/
    {
      v17 = *((_QWORD *)v10 + 45); /*0x16ee46*/
      if ( v17 ) /*0x16ee50*/
      {
        v18 = *((_QWORD *)v10 + 41); /*0x16ee52*/
        if ( !v18 || *(_DWORD *)(v18 + 936) - *(_DWORD *)(v18 + 940) < 100 ) /*0x16ee6d*/
        {
          LOBYTE(v18) = 1; /*0x16ee72*/
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 336LL))(v17, v18); /*0x16ee74*/
          LOBYTE(v19) = 1; /*0x16ee84*/
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v10 + 45) + 1040LL))(*((_QWORD *)v10 + 45), v19); /*0x16ee86*/
        }
      }
    }
  }
  if ( !a3 ) /*0x16ee8f*/
  {
    (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v10 + 336LL))(v10, 0); /*0x16ee9d*/
    v20 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 200LL))(v10); /*0x16eea9*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v20); /*0x16eeb7*/
    v21 = *(_QWORD *)v10; /*0x16eebd*/
    v23 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v22); /*0x16eec0*/
    v24 = cocos2d::CCDirector::getScreenRight(v23) + 180.0; /*0x16eecf*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, v24, *((float *)&v31 + 1)); /*0x16eee5*/
    (*(void (__fastcall **)(char *, __int64))(v21 + 184))(v10, v25); /*0x16eef1*/
    v26 = cocos2d::CCDelayTime::create(a4); /*0x16ef00*/
    v27 = cocos2d::CCShow::create(); /*0x16ef09*/
    v28 = cocos2d::CCMoveTo::create(0.5, (const struct cocos2d::CCPoint *)&v31); /*0x16ef19*/
    v29 = cocos2d::CCEaseElasticOut::create(v28, 0.60000002); /*0x16ef2a*/
    v30 = cocos2d::CCSequence::create(v26, v27, v29, 0); /*0x16ef3c*/
    cocos2d::CCNode::runAction((cocos2d::CCNode *)v10, v30); /*0x16ef48*/
  }
  *(_QWORD *)(a1 + 720) = v10; /*0x16ef4e*/
  return v10; /*0x16ef58*/
}

// [14/16] Address: 0x16ef80
// Method: DailyLevelPage::exitDailyNode
void __fastcall DailyLevelPage_exitDailyNode(__int64 a1, cocos2d::CCNode *a2, float a3)
{
  struct cocos2d::CCFiniteTimeAction *v4; // rdi
  __int64 v5; // rax
  const struct cocos2d::CCPoint *v6; // rax
  struct cocos2d::CCActionInterval *v7; // rax
  struct cocos2d::CCEaseElasticIn *v8; // rbx
  __int64 v9; // rax
  struct cocos2d::CCAction *v10; // rax
  char v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 ) /*0x16ef83*/
  {
    if ( a2 == *(cocos2d::CCNode **)(a1 + 720) ) /*0x16efa2*/
      *(_QWORD *)(a1 + 720) = 0; /*0x16efa4*/
    v4 = cocos2d::CCDelayTime::create(a3); /*0x16efbb*/
    v5 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a2 + 200LL))(a2); /*0x16efc8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, -160.0, *(float *)(v5 + 4)); /*0x16efdc*/
    v7 = cocos2d::CCMoveTo::create(0.5, v6); /*0x16efed*/
    v8 = cocos2d::CCEaseElasticIn::create(v7, 1.2); /*0x16f00e*/
    v9 = cocos2d::CCCallFunc::create(a2, sub_3E5B0); /*0x16f011*/
    v10 = cocos2d::CCSequence::create(v4, v8, v9, 0); /*0x16f023*/
    cocos2d::CCNode::runAction(a2, v10); /*0x16f02f*/
  }
}

// [15/16] Address: 0x170060
// Method: DailyLevelPage::claimLevelReward
// Hidden C++ exception states: #wind=3
char *__fastcall DailyLevelPage_claimLevelReward(
        _DWORD *a1,
        cocos2d::CCNode *a2,
        _DWORD *a3,
        const struct cocos2d::CCPoint *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // edi
  __int64 v12; // rsi
  cocos2d::CCObject *v13; // rcx
  int v14; // esi
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // rdx
  int v19; // ecx
  int v20; // ecx
  void *v22; // [rsp+A0h] [rbp+8h] BYREF

  v8 = qword_905FE0; /*0x170087*/
  if ( !qword_905FE0 ) /*0x170091*/
  {
    v22 = operator new(0x3E8u); /*0x17009d*/
    qword_905FE0 = sub_2D2B40(v22); /*0x1700ae*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x1700bf*/
    v8 = qword_905FE0; /*0x1700c1*/
  }
  v9 = sub_2E3090(v8, a3); /*0x1700cb*/
  v10 = v9; /*0x1700d0*/
  v11 = 0; /*0x1700d3*/
  if ( v9 ) /*0x1700db*/
  {
    v12 = sub_55E830(*(unsigned int *)(v9 + 64), 0); /*0x1700eb*/
    (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v12, 100); /*0x170104*/
    v13 = *(cocos2d::CCObject **)(v12 + 704); /*0x170107*/
    if ( v13 ) /*0x170111*/
      cocos2d::CCObject::release(v13); /*0x170113*/
    *(_QWORD *)(v12 + 704) = v10; /*0x170119*/
    cocos2d::CCObject::retain((cocos2d::CCObject *)v10); /*0x170123*/
    if ( !*(_BYTE *)(v10 + 80) || *(_DWORD *)(v10 + 64) == *(_DWORD *)(v12 + 696) ) /*0x170138*/
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 720) + 336LL))(*(_QWORD *)(v12 + 720), 0); /*0x17014a*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 720) + 936LL))(*(_QWORD *)(v12 + 720), 0); /*0x17015c*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 712) + 336LL))(*(_QWORD *)(v12 + 712), 0); /*0x17016e*/
      *(_BYTE *)(v12 + 700) = 1; /*0x170174*/
      if ( *(_BYTE *)(v12 + 701) ) /*0x17017b*/
        RewardUnlockLayer_playRewardEffect(v12); /*0x17018b*/
    }
  }
  else
  {
    v14 = a3[255] - a3[256]; /*0x17019c*/
    if ( !qword_905FE0 ) /*0x1701aa*/
    {
      v22 = operator new(0x3E8u); /*0x1701b6*/
      qword_905FE0 = sub_2D2B40(v22); /*0x1701c7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x1701d8*/
    }
    if ( (unsigned int)(v14 - 2) > 8 ) /*0x1701e0*/
    {
      v15 = 0; /*0x17020b*/
    }
    else if ( v14 == 10 ) /*0x1701e5*/
    {
      v15 = 20; /*0x1701e7*/
    }
    else
    {
      v15 = (int)floorf((float)(v14 + 2) * 0.5); /*0x170205*/
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, a4); /*0x170218*/
    v17 = CurrencyRewardLayer_create(0, 0, 0, v15, 0, 0, 0, 0, v16, 0, 0, 1065353216); /*0x170255*/
    (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v17, 14); /*0x170270*/
  }
  DailyLevelPage_exitDailyNode((__int64)a1, a2, 0.0); /*0x17027c*/
  v18 = *(_DWORD **)&qword_905FB0; /*0x170281*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x17028b*/
  {
    v22 = operator new(0x690u); /*0x170297*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v22); /*0x1702a8*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x1702b9*/
    v18 = *(_DWORD **)&qword_905FB0; /*0x1702bb*/
  }
  v19 = a1[183]; /*0x1702c2*/
  if ( v19 ) /*0x1702ca*/
  {
    v20 = v19 - 1; /*0x1702cc*/
    if ( v20 ) /*0x1702cf*/
    {
      if ( v20 == 1 ) /*0x1702d4*/
        v11 = v18[245]; /*0x1702d6*/
    }
    else
    {
      v11 = v18[242]; /*0x1702de*/
    }
  }
  else
  {
    v11 = v18[239]; /*0x1702e6*/
  }
  if ( v11 <= a3[248] - a3[249] ) /*0x1702ff*/
    return DailyLevelPage_createDailyNode((__int64)a1, 0, 0, 0.5, 0); /*0x17031a*/
  else
    return (char *)DailyLevelPage_downloadAndCreateNode((__int64)a1); /*0x170301*/
}

// [16/16] Address: 0x170340
// Method: DailyLevelPage::skipDailyLevel
// Hidden C++ exception states: #wind=4
void __fastcall DailyLevelPage_skipDailyLevel(__int64 a1, cocos2d::CCNode *a2, __int64 a3)
{
  int v5; // esi
  _DWORD *v6; // r8
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rbx
  struct cocos2d::CCFiniteTimeAction *v18; // rax
  struct cocos2d::CCAction *v19; // rax
  void *v20; // [rsp+30h] [rbp+8h]
  void *v21; // [rsp+30h] [rbp+8h]
  void *v22; // [rsp+30h] [rbp+8h]
  void *v23; // [rsp+30h] [rbp+8h]

  if ( a2 == *(cocos2d::CCNode **)(a1 + 720) ) /*0x170361*/
  {
    v5 = *(_DWORD *)(a3 + 992) - *(_DWORD *)(a3 + 996); /*0x17036e*/
    v6 = *(_DWORD **)&qword_905FB0; /*0x170375*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x17037f*/
    {
      v20 = operator new(0x690u); /*0x17038b*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v20); /*0x170399*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x1703aa*/
      v6 = *(_DWORD **)&qword_905FB0; /*0x1703ac*/
    }
    v7 = *(_DWORD *)(a1 + 732); /*0x1703b3*/
    v8 = 0; /*0x1703b9*/
    if ( v7 ) /*0x1703bd*/
    {
      v9 = v7 - 1; /*0x1703bf*/
      if ( v9 ) /*0x1703c2*/
      {
        if ( v9 == 1 ) /*0x1703c7*/
          v10 = v6[246]; /*0x1703cd*/
        else
          v10 = 0; /*0x1703c9*/
      }
      else
      {
        v10 = v6[243]; /*0x1703d6*/
      }
    }
    else
    {
      v10 = v6[240]; /*0x1703df*/
    }
    if ( v5 == v10 ) /*0x1703e8*/
    {
      if ( !v6 ) /*0x1703f1*/
      {
        v21 = operator new(0x690u); /*0x1703fd*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0x17040b*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x17041c*/
        v6 = *(_DWORD **)&qword_905FB0; /*0x17041e*/
      }
      v11 = *(_DWORD *)(a1 + 732); /*0x170425*/
      if ( v11 ) /*0x17042d*/
      {
        v12 = v11 - 1; /*0x17042f*/
        if ( v12 ) /*0x170432*/
        {
          if ( v12 == 1 ) /*0x170437*/
            v13 = v6[246]; /*0x17043d*/
          else
            v13 = 0; /*0x170439*/
        }
        else
        {
          v13 = v6[243]; /*0x170446*/
        }
      }
      else
      {
        v13 = v6[240]; /*0x17044f*/
      }
      if ( !v6 ) /*0x170459*/
      {
        v22 = operator new(0x690u); /*0x170465*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v22); /*0x170473*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x170484*/
        v6 = *(_DWORD **)&qword_905FB0; /*0x170486*/
      }
      v14 = *(_DWORD *)(a1 + 732); /*0x17048d*/
      if ( v14 ) /*0x170495*/
      {
        v15 = v14 - 1; /*0x170497*/
        if ( v15 ) /*0x17049a*/
        {
          if ( v15 == 1 ) /*0x17049f*/
            v8 = v6[245]; /*0x1704a1*/
        }
        else
        {
          v8 = v6[242]; /*0x1704aa*/
        }
      }
      else
      {
        v8 = v6[239]; /*0x1704b3*/
      }
      if ( v13 < v8 ) /*0x1704bc*/
      {
        DailyLevelPage_exitDailyNode(a1, a2, 0.0); /*0x1704cb*/
        *(_BYTE *)(a1 + 728) = 1; /*0x1704d0*/
        v16 = *(_QWORD *)&qword_905FB0; /*0x1704d7*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x1704e1*/
        {
          v23 = operator new(0x690u); /*0x1704ed*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v23); /*0x1704fb*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x17050c*/
          v16 = *(_QWORD *)&qword_905FB0; /*0x17050e*/
        }
        sub_22E940(v16, *(unsigned int *)(a1 + 736), 0, 0); /*0x170521*/
        v17 = cocos2d::CCCallFunc::create(a1, sub_16EB90); /*0x170536*/
        v18 = cocos2d::CCDelayTime::create(0.5); /*0x170541*/
        v19 = cocos2d::CCSequence::create(v18, v17, 0); /*0x170550*/
        cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v19); /*0x17055c*/
      }
    }
  }
}
