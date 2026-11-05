#include <Geode/binding/LeaderboardsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/10] Address: 0x3d88d0
// Method: LeaderboardsLayer::onStat
__int64 __fastcall LeaderboardsLayer_onStat(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3d88df*/
  return sub_3D8980(a1, *(unsigned int *)(a1 + 440), v3); /*0x3d88ee*/
}

// [3/10] Address: 0x3d8fa0
// Method: LeaderboardsLayer::updateUserScoreFinished
__int64 __fastcall LeaderboardsLayer_updateUserScoreFinished(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 32); /*0x3d8fa0*/
  if ( (_DWORD)v1 != 3 ) /*0x3d8fa6*/
  {
    v2 = *(unsigned int *)(a1 + 36); /*0x3d8fa8*/
    *(_DWORD *)(a1 + 32) = 0; /*0x3d8fac*/
    return sub_3D8980(a1 - 408, v1, v2); /*0x3d8fba*/
  }
  return result; /*0x3d8fbf*/
}

// [4/10] Address: 0x3d8fc0
// Method: LeaderboardsLayer::updateUserScoreFailed
__int64 __fastcall LeaderboardsLayer_updateUserScoreFailed(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 336LL))(*(_QWORD *)(a1 + 72), 0);
}

// [5/10] Address: 0x3d8fd0
// Method: LeaderboardsLayer::loadLeaderboardFinished
__int64 __fastcall LeaderboardsLayer_loadLeaderboardFinished(__int64 a1, cocos2d::CCObject *a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 result; // rax
  cocos2d::CCObject *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v10 = 0; /*0x3d8fea*/
  v11 = 0; /*0x3d8ff2*/
  v6 = -1; /*0x3d8ff7*/
  v9 = 0; /*0x3d8ffe*/
  do /*0x3d9006*/
    ++v6; /*0x3d9003*/
  while ( *(_BYTE *)(a3 + v6) ); /*0x3d9006*/
  sub_3C230(&v9); /*0x3d9014*/
  result = sub_3D9220(a1 - 408, &v9); /*0x3d9025*/
  if ( (_BYTE)result ) /*0x3d902c*/
  {
    v8 = *(cocos2d::CCObject **)(a1 + 24); /*0x3d902e*/
    if ( v8 ) /*0x3d9035*/
      cocos2d::CCObject::release(v8); /*0x3d9037*/
    *(_QWORD *)(a1 + 24) = a2; /*0x3d9040*/
    cocos2d::CCObject::retain(a2); /*0x3d9044*/
    sub_3D86B0(a1 - 408, *(_QWORD *)(a1 + 24)); /*0x3d9055*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 336LL))(*(_QWORD *)(a1 + 72), 0); /*0x3d9063*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 336LL))(*(_QWORD *)(a1 + 80), 0); /*0x3d9072*/
  }
  return result; /*0x3d9078*/
}

// [6/10] Address: 0x3d9090
// Method: LeaderboardsLayer::loadLeaderboardFailed
__int64 __fastcall LeaderboardsLayer_loadLeaderboardFailed(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v6 = 0; /*0x3d909f*/
  v7 = 0; /*0x3d90a4*/
  v8 = 0; /*0x3d90ac*/
  v3 = -1; /*0x3d90b1*/
  do /*0x3d90c3*/
    ++v3; /*0x3d90c0*/
  while ( *(_BYTE *)(a2 + v3) ); /*0x3d90c3*/
  sub_3C230(&v6); /*0x3d90ce*/
  result = sub_3D9220(a1 - 408, &v6); /*0x3d90df*/
  if ( (_BYTE)result ) /*0x3d90e6*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 336LL))(*(_QWORD *)(a1 + 72), 0); /*0x3d90f5*/
    result = *(unsigned int *)(a1 + 32); /*0x3d90fb*/
    if ( (_DWORD)result == 4 ) /*0x3d9101*/
    {
      v7 = 0; /*0x3d9106*/
      v8 = 0; /*0x3d9110*/
      v6 = 0; /*0x3d9115*/
      *(_QWORD *)&v6 = sub_3C460(80); /*0x3d9129*/
      v7 = 65; /*0x3d912e*/
      v8 = 79; /*0x3d9137*/
      strcpy((char *)v6, "Create an <cg>account</c> to\ncompare scores\nwith <cl>Friends</c>!"); /*0x3d9140*/
    }
    else
    {
      if ( (_DWORD)result != 2 ) /*0x3d9177*/
        return result; /*0x3d9177*/
      v7 = 0; /*0x3d9180*/
      v8 = 0; /*0x3d918a*/
      v6 = 0; /*0x3d918f*/
      *(_QWORD *)&v6 = sub_3C460(64); /*0x3d91a0*/
      v7 = 60; /*0x3d91a8*/
      v8 = 63; /*0x3d91b1*/
      strcpy((char *)v6, "Create an <cg>account</c> to\ncompare scores\n <cl>Online</c>!"); /*0x3d91ba*/
    }
    TextArea_setString(*(_QWORD *)(a1 + 80), &v6); /*0x3d91f6*/
    LOBYTE(v5) = 1; /*0x3d91ff*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 336LL))(*(_QWORD *)(a1 + 80), v5); /*0x3d9204*/
  }
  return result; /*0x3d920a*/
}

// [7/10] Address: 0x3d9370
// Method: LeaderboardsLayer::onInfo
// Hidden C++ exception states: #wind=3
void __fastcall LeaderboardsLayer_onInfo(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  char *v7; // rdx
  int v8; // edi
  __int64 v9; // r8
  void **v10; // rbx
  __int64 v11; // rax
  cocos2d::CCObject *v12; // rbx
  void *v13; // rcx
  void *v14; // rcx
  __int128 v15; // [rsp+58h] [rbp-41h] BYREF
  __int64 v16; // [rsp+68h] [rbp-31h]
  __int64 v17; // [rsp+70h] [rbp-29h]
  char v18[32]; // [rsp+80h] [rbp-19h] BYREF
  void *v19[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+17h]
  unsigned __int64 v21; // [rsp+B8h] [rbp+1Fh]
  void *Block[2]; // [rsp+C0h] [rbp+27h]
  __int64 v23; // [rsp+D0h] [rbp+37h]
  __int64 v24; // [rsp+D8h] [rbp+3Fh]

  *(_OWORD *)v19 = 0; /*0x3d93a0*/
  v20 = 0; /*0x3d93a6*/
  v2 = 15; /*0x3d93aa*/
  v21 = 15; /*0x3d93af*/
  LOBYTE(v19[0]) = 0; /*0x3d93b3*/
  *(_OWORD *)Block = 0; /*0x3d93b7*/
  v23 = 0; /*0x3d93bb*/
  v3 = 15; /*0x3d93bf*/
  v24 = 15; /*0x3d93c2*/
  LOBYTE(Block[0]) = 0; /*0x3d93c6*/
  v4 = *(_DWORD *)(a1 + 440) - 1; /*0x3d93d0*/
  if ( v4 ) /*0x3d93d3*/
  {
    v5 = v4 - 1; /*0x3d93d9*/
    if ( v5 ) /*0x3d93dc*/
    {
      v6 = v5 - 1; /*0x3d93e2*/
      if ( v6 ) /*0x3d93e5*/
      {
        if ( v6 != 1 ) /*0x3d93ee*/
          goto LABEL_16; /*0x3d93ee*/
        v20 = 7; /*0x3d93f4*/
        qmemcpy(v19, "Friend", 6); /*0x3d9403*/
        HIWORD(v19[0]) = (unsigned __int8)aFriends[6]; /*0x3d9418*/
        v7 = (char *)sub_3C460(80); /*0x3d9429*/
        v23 = 77; /*0x3d942c*/
        v24 = 79; /*0x3d943a*/
        strcpy(v7, "The <cg>Friends</c> leaderboard shows your friends in order of <cy>Stars</c>."); /*0x3d9445*/
      }
      else
      {
        v20 = 8; /*0x3d9492*/
        strcpy((char *)v19, "Creators"); /*0x3d94a4*/
        v7 = (char *)sub_3C460(224); /*0x3d94b6*/
        v23 = 216; /*0x3d94b9*/
        v24 = 223; /*0x3d94c7*/
        strcpy( /*0x3d94df*/
          v7,
          "The <cg>Creators</c> leaderboard is sorted by amount of Creator Points. Creating a rated level rewards 1, <cy>"
          "Featured</c> rewards 2, <co>Epic</c> rewards 3, <cp>Legendary</c> rewards 4, and <cj>Mythic</c> rewards 5.");
      }
    }
    else
    {
      v20 = 6; /*0x3d955f*/
      strcpy((char *)v19, "Global"); /*0x3d956d*/
      v7 = (char *)sub_3C460(128); /*0x3d9589*/
      v23 = 126; /*0x3d958c*/
      v24 = 127; /*0x3d959a*/
      strcpy( /*0x3d95a5*/
        v7,
        "The <cg>Global</c> leaderboard shows players in order of <cy>Stars</c>.\n"
        "Players banned by Leaderboard Moderators are excluded.");
    }
  }
  else
  {
    v20 = 7; /*0x3d9614*/
    v19[0] = (void *)0x30303120706F54LL; /*0x3d9623*/
    v7 = (char *)sub_3C460(224); /*0x3d9649*/
    v23 = 208; /*0x3d964c*/
    v24 = 223; /*0x3d965a*/
    strcpy( /*0x3d9672*/
      v7,
      "The <cg>Top 100</c> leaderboard shows the players with the most <cy>Stars</c> in the game. Players must be <cl>man"
      "ually whitelisted</c> by a Leaderboard Moderator to appear here, ensuring legitimate rankings.");
  }
  Block[0] = v7; /*0x3d96ee*/
  v8 = a1 + 416; /*0x3d96f2*/
  if ( !a1 ) /*0x3d96fc*/
    v8 = 0; /*0x3d96fc*/
  v15 = 0; /*0x3d970f*/
  v16 = 0; /*0x3d9713*/
  v17 = 0; /*0x3d9717*/
  v9 = -1; /*0x3d971b*/
  do /*0x3d9725*/
    ++v9; /*0x3d9722*/
  while ( v7[v9] ); /*0x3d9725*/
  sub_3C230(&v15); /*0x3d9733*/
  v10 = v19; /*0x3d9740*/
  if ( v21 > 0xF ) /*0x3d9749*/
    LODWORD(v10) = v19[0]; /*0x3d9749*/
  v11 = sub_3E4F0(v18, &v15); /*0x3d9756*/
  v12 = FLAlertLayer_create_0(v8, (int)v10, v11, (__int64)"OK", (__int64)"Info", 1136525312, 0, 0, 1065353216); /*0x3d97a6*/
  sub_3C310(&v15); /*0x3d97ad*/
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v12 + 1064LL))(v12); /*0x3d97bf*/
  v2 = v21; /*0x3d97c1*/
  v3 = v24; /*0x3d97c5*/
LABEL_16:
  if ( v3 > 0xF ) /*0x3d97cd*/
  {
    v13 = Block[0]; /*0x3d97d3*/
    if ( v3 + 1 >= 0x1000 ) /*0x3d97e1*/
    {
      v13 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d97e7*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0x3d97f6*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3d9807*/
    }
    j_j_free(v13); /*0x3d980e*/
    v2 = v21; /*0x3d9813*/
  }
  if ( v2 > 0xF ) /*0x3d981b*/
  {
    v14 = v19[0]; /*0x3d9820*/
    if ( v2 + 1 >= 0x1000 ) /*0x3d982e*/
    {
      v14 = (void *)*((_QWORD *)v19[0] - 1); /*0x3d9834*/
      if ( (unsigned __int64)((char *)v19[0] - (char *)v14 - 8) > 0x1F ) /*0x3d9843*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3d9854*/
    }
    j_j_free(v14); /*0x3d985b*/
  }
}

// [8/10] Address: 0x3d9890
// Method: LeaderboardsLayer::FLAlert_Clicked
void __fastcall LeaderboardsLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax

  if ( a3 ) /*0x3d9897*/
  {
    v3 = cocos2d::CCApplication::sharedApplication(a1); /*0x3d9899*/
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v3 + 96LL))( /*0x3d98b4*/
      v3,
      "https://www.boomlings.com/GDLeaderboards");
  }
}

// [9/10] Address: 0x3d98c0
// Method: LeaderboardsLayer::onBack
// Hidden C++ exception states: #wind=1
char __fastcall LeaderboardsLayer_onBack(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x3d98c9*/
  v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x3d98d5*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, a1); /*0x3d98e1*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x3d98ef*/
  if ( !qword_905FD0 ) /*0x3d98fd*/
  {
    v5 = operator new(0x6E8u); /*0x3d9909*/
    qword_905FD0 = sub_2723A0(v5); /*0x3d9917*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3d9928*/
  }
  return GameManager_safePopScene(); /*0x3d992a*/
}

// [10/10] Address: 0x3d9940
// Method: LeaderboardsLayer::keyBackClicked
char __fastcall LeaderboardsLayer_keyBackClicked(__int64 a1)
{
  return LeaderboardsLayer_onBack((struct cocos2d::CCObject *)(a1 - 336));
}

// Address: 0x3d6a30
// Method: LeaderboardsLayer::init
// Hidden C++ exception states: #wind=29
bool __fastcall LeaderboardsLayer_init(__int64 a1, unsigned int a2, unsigned int a3)
{
  bool result; // al
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  void **v17; // rdi
  __int64 v18; // rcx
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  __int64 v21; // r8
  void **v22; // rdi
  __int64 v23; // rcx
  void *v24; // rcx
  cocos2d::CCString *v25; // rax
  const char *v26; // rax
  __int64 v27; // r8
  void **v28; // rdi
  __int64 v29; // rcx
  void *v30; // rcx
  cocos2d::CCString *v31; // rax
  const char *v32; // rax
  __int64 v33; // r8
  void **v34; // rdi
  __int64 v35; // rcx
  void *v36; // rcx
  cocos2d::CCString *v37; // rax
  const char *v38; // rax
  __int64 v39; // r8
  void **v40; // rdi
  __int64 v41; // rcx
  void *v42; // rcx
  cocos2d::CCString *v43; // rax
  const char *v44; // rax
  __int64 v45; // r8
  void **v46; // rdi
  __int64 v47; // rcx
  void *v48; // rcx
  cocos2d::CCString *v49; // rax
  const char *v50; // rax
  __int64 v51; // r8
  void **v52; // rdi
  __int64 v53; // rcx
  void *v54; // rcx
  cocos2d::CCString *v55; // rax
  const char *v56; // rax
  __int64 v57; // r8
  void **v58; // rdi
  __int64 v59; // rcx
  void *v60; // rcx
  cocos2d::CCString *v61; // rax
  const char *v62; // rax
  __int64 v63; // r8
  void **v64; // rdi
  __int64 v65; // rcx
  void *v66; // rcx
  cocos2d::CCString *v67; // rax
  const char *v68; // rax
  __int64 v69; // r8
  void **v70; // rdi
  __int64 v71; // rcx
  void *v72; // rcx
  cocos2d::CCString *v73; // rax
  const char *v74; // rax
  __int64 v75; // r8
  void **v76; // rdi
  __int64 v77; // rcx
  void *v78; // rcx
  cocos2d::CCString *v79; // rax
  const char *v80; // rax
  void **v81; // rbx
  __int64 v82; // rcx
  void *v83; // rcx
  __int64 v84; // rax
  struct cocos2d::CCSprite *v85; // rdi
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rax
  struct cocos2d::CCSprite *v90; // rdi
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rcx
  cocos2d::CCDirector *v95; // rax
  float v96; // xmm6_4
  __int64 v97; // rcx
  cocos2d::CCDirector *v98; // rax
  float v99; // xmm0_4
  __int64 v100; // rax
  struct cocos2d::CCSprite *v101; // rdi
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rbx
  __int64 v105; // rcx
  cocos2d::CCDirector *v106; // rax
  float v107; // xmm6_4
  __int64 v108; // rcx
  cocos2d::CCDirector *v109; // rax
  float v110; // xmm0_4
  __int64 v111; // rax
  cocos2d::CCLayerColor *v112; // rax
  const struct cocos2d::CCPoint *v113; // rax
  char *v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdi
  int v123; // eax
  cocos2d::CCObject *v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rcx
  cocos2d::CCDirector *v127; // rax
  float v128; // xmm7_4
  __int64 v129; // rcx
  cocos2d::CCDirector *v130; // rax
  float v131; // xmm0_4
  __int64 v132; // rax
  int v133; // eax
  cocos2d::CCObject *v134; // r14
  struct cocos2d::CCMenu *v135; // rdi
  __int64 v136; // rbx
  __int64 v137; // rcx
  cocos2d::CCDirector *v138; // rax
  float v139; // xmm6_4
  __int64 v140; // rcx
  cocos2d::CCDirector *v141; // rax
  float v142; // xmm0_4
  __int64 v143; // rax
  __int64 v144; // rcx
  void **v145; // [rsp+40h] [rbp-39h] BYREF
  float v146[2]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v147[8]; // [rsp+50h] [rbp-29h] BYREF
  void *Block[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v149; // [rsp+68h] [rbp-11h]
  unsigned __int64 v150; // [rsp+70h] [rbp-9h]

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1);
  if ( !result )
    return result;
  v8 = 1;
  if ( a2 )
    v8 = a2;
  v9 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v145 = (void **)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v145);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v9 = qword_905FD0;
  }
  *(_BYTE *)(v9 + 744) = 0;
  *(_DWORD *)(v9 + 740) = 6;
  LOBYTE(v7) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v7);
  LOBYTE(v10) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v10);
  v12 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v145 = (void **)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v145);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v12 = qword_905FD0;
  }
  if ( !*(_BYTE *)(v12 + 688) )
  {
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v13 = cocos2d::CCString::createWithFormat("lb_%i_%i", 1, 0);
    CString = cocos2d::CCString::getCString(v13);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v15 = -1;
    v16 = -1;
    do
      ++v16;
    while ( CString[v16] );
    sub_3C230(Block);
    v17 = Block;
    if ( v150 > 0xF )
      v17 = (void **)Block[0];
    v18 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v18 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v18, v17);
    sub_3C310(Block);
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v19 = cocos2d::CCString::createWithFormat("lb_%i_%i", 1, 1);
    v20 = cocos2d::CCString::getCString(v19);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v21 = -1;
    do
      ++v21;
    while ( v20[v21] );
    sub_3C230(Block);
    v22 = Block;
    if ( v150 > 0xF )
      v22 = (void **)Block[0];
    v23 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v23 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v23, v22);
    if ( v150 > 0xF )
    {
      v24 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v24 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v24 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v24);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v25 = cocos2d::CCString::createWithFormat("lb_%i_%i", 1, 2);
    v26 = cocos2d::CCString::getCString(v25);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v27 = -1;
    do
      ++v27;
    while ( v26[v27] );
    sub_3C230(Block);
    v28 = Block;
    if ( v150 > 0xF )
      v28 = (void **)Block[0];
    v29 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v29 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v29, v28);
    if ( v150 > 0xF )
    {
      v30 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v30 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v30 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v30);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v31 = cocos2d::CCString::createWithFormat("lb_%i_%i", 1, 3);
    v32 = cocos2d::CCString::getCString(v31);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v33 = -1;
    do
      ++v33;
    while ( v32[v33] );
    sub_3C230(Block);
    v34 = Block;
    if ( v150 > 0xF )
      v34 = (void **)Block[0];
    v35 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v35 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v35, v34);
    if ( v150 > 0xF )
    {
      v36 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v36 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v36 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v36);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v37 = cocos2d::CCString::createWithFormat("lb_%i_%i", 4, 0);
    v38 = cocos2d::CCString::getCString(v37);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v39 = -1;
    do
      ++v39;
    while ( v38[v39] );
    sub_3C230(Block);
    v40 = Block;
    if ( v150 > 0xF )
      v40 = (void **)Block[0];
    v41 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v41 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v41, v40);
    if ( v150 > 0xF )
    {
      v42 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v42 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v42 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v42);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v43 = cocos2d::CCString::createWithFormat("lb_%i_%i", 4, 1);
    v44 = cocos2d::CCString::getCString(v43);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v45 = -1;
    do
      ++v45;
    while ( v44[v45] );
    sub_3C230(Block);
    v46 = Block;
    if ( v150 > 0xF )
      v46 = (void **)Block[0];
    v47 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v47 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v47, v46);
    if ( v150 > 0xF )
    {
      v48 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v48 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v48 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v48);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v49 = cocos2d::CCString::createWithFormat("lb_%i_%i", 4, 2);
    v50 = cocos2d::CCString::getCString(v49);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v51 = -1;
    do
      ++v51;
    while ( v50[v51] );
    sub_3C230(Block);
    v52 = Block;
    if ( v150 > 0xF )
      v52 = (void **)Block[0];
    v53 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v53 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v53, v52);
    if ( v150 > 0xF )
    {
      v54 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v54 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v54 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v54);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v55 = cocos2d::CCString::createWithFormat("lb_%i_%i", 4, 3);
    v56 = cocos2d::CCString::getCString(v55);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v57 = -1;
    do
      ++v57;
    while ( v56[v57] );
    sub_3C230(Block);
    v58 = Block;
    if ( v150 > 0xF )
      v58 = (void **)Block[0];
    v59 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v59 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v59, v58);
    if ( v150 > 0xF )
    {
      v60 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v60 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v60 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v60);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v61 = cocos2d::CCString::createWithFormat("lb_%i_%i", 2, 0);
    v62 = cocos2d::CCString::getCString(v61);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v63 = -1;
    do
      ++v63;
    while ( v62[v63] );
    sub_3C230(Block);
    v64 = Block;
    if ( v150 > 0xF )
      v64 = (void **)Block[0];
    v65 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v65 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v65, v64);
    if ( v150 > 0xF )
    {
      v66 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v66 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v66 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v66);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v67 = cocos2d::CCString::createWithFormat("lb_%i_%i", 2, 1);
    v68 = cocos2d::CCString::getCString(v67);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v69 = -1;
    do
      ++v69;
    while ( v68[v69] );
    sub_3C230(Block);
    v70 = Block;
    if ( v150 > 0xF )
      v70 = (void **)Block[0];
    v71 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v71 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v71, v70);
    if ( v150 > 0xF )
    {
      v72 = Block[0];
      if ( v150 + 1 >= 0x1000 )
      {
        v72 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v72 - 8) > 0x1F )
          goto LABEL_148;
      }
      j_j_free(v72);
    }
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    }
    v73 = cocos2d::CCString::createWithFormat("lb_%i_%i", 2, 2);
    v74 = cocos2d::CCString::getCString(v73);
    *(_OWORD *)Block = 0;
    v149 = 0;
    v150 = 0;
    v75 = -1;
    do
      ++v75;
    while ( v74[v75] );
    sub_3C230(Block);
    v76 = Block;
    if ( v150 > 0xF )
      v76 = (void **)Block[0];
    v77 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v145 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v145);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v77 = *(_QWORD *)&qword_905FB0;
    }
    sub_21EF80(v77, v76);
    if ( v150 <= 0xF )
    {
LABEL_137:
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v145 = (void **)operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v145);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      }
      v79 = cocos2d::CCString::createWithFormat("lb_%i_%i", 2, 3);
      v80 = cocos2d::CCString::getCString(v79);
      *(_OWORD *)Block = 0;
      v149 = 0;
      v150 = 0;
      do
        ++v15;
      while ( v80[v15] );
      sub_3C230(Block);
      v81 = Block;
      if ( v150 > 0xF )
        v81 = (void **)Block[0];
      v82 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v145 = (void **)operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v145);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v82 = *(_QWORD *)&qword_905FB0;
      }
      sub_21EF80(v82, v81);
      if ( v150 > 0xF )
      {
        v83 = Block[0];
        if ( v150 + 1 >= 0x1000 )
        {
          v83 = (void *)*((_QWORD *)Block[0] - 1);
          if ( (unsigned __int64)((char *)Block[0] - (char *)v83 - 8) > 0x1F )
            goto LABEL_148;
        }
        j_j_free(v83);
      }
      goto LABEL_150;
    }
    v78 = Block[0];
    if ( v150 + 1 < 0x1000
      || (v78 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v78 - 8) <= 0x1F) )
    {
      j_j_free(v78);
      goto LABEL_137;
    }
LABEL_148:
    invoke_watson(0, 0, 0, 0, 0);
  }
LABEL_150:
  v84 = cocos2d::CCDirector::sharedDirector(v11);
  cocos2d::CCDirector::getWinSize(v84, v146);
  v85 = cocos2d::CCSprite::create("GJ_gradientBG.png");
  v86 = *(_QWORD *)v85;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v145, 0.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v86 + 288))(v85, v87);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v85, 4294967294LL);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v85 + 120LL))(v85);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v85 + 136LL))(v85);
  v88 = *(_QWORD *)v85;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v145, -5.0, -5.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v88 + 184))(v85, v89);
  LOWORD(v145) = 26112;
  BYTE2(v145) = -1;
  (**((void (__fastcall ***)(__int64, void ***))v85 + 40))((__int64)v85 + 320, &v145);
  v90 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
  v91 = *(_QWORD *)v90;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v145, 0.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v91 + 288))(v90, v92);
  v93 = *(_QWORD *)v90;
  v95 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v94);
  v96 = cocos2d::CCDirector::getScreenBottom(v95) - 1.0;
  v98 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v97);
  v99 = cocos2d::CCDirector::getScreenLeft(v98) - 1.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v145, v99, v96);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v93 + 184))(v90, v100);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v90, 1);
  v101 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
  v102 = *(_QWORD *)v101;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v145, 1.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v102 + 288))(v101, v103);
  v104 = *(_QWORD *)v101;
  v106 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v105);
  v107 = cocos2d::CCDirector::getScreenBottom(v106) - 1.0;
  v109 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v108);
  v110 = cocos2d::CCDirector::getScreenRight(v109) + 1.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v145, v110, v107);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v104 + 184))(v101, v111);
  cocos2d::CCSprite::setFlipX(v101, 1);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v101, 1);
  v112 = LoadingCircle_create();
  *(_QWORD *)(a1 + 480) = v112;
  *((_QWORD *)v112 + 69) = a1;
  *(_BYTE *)(*(_QWORD *)(a1 + 480) + 560LL) = 0;
  cocos2d::CCObject::retain(*(cocos2d::CCObject **)(a1 + 480));
  LoadingCircle_show(*(_QWORD *)(a1 + 480));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 480) + 336LL))(*(_QWORD *)(a1 + 480), 0);
  v145 = Block;
  *(_OWORD *)Block = 0;
  v149 = 0;
  v150 = 0;
  Block[0] = (void *)sub_3C460(32);
  v149 = 31;
  v150 = 31;
  strcpy((char *)Block[0], "No <cg>Internet</c> connection!");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, 0.5, 1.0);
  v114 = TextArea_create((__int64)Block, &qword_6FFF68, 1.0, 600.0, v113, 1101004800, 0, 0);
  *(_QWORD *)(a1 + 488) = v114;
  *((_DWORD *)v114 + 166) = 1106247680;
  v115 = **(_QWORD **)(a1 + 488);
  v116 = *(_QWORD *)(a1 + 488);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, v146[0] * 0.5, (float)(v146[1] * 0.5) + 10.0);
  (*(void (__fastcall **)(__int64, __int64))(v115 + 184))(v116, v117);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 160LL))(*(_QWORD *)(a1 + 488));
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 488), 2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 488) + 336LL))(*(_QWORD *)(a1 + 488), 0);
  v122 = cocos2d::CCMenu::create(v119, v118, v120, v121);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v122, 10);
  v123 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
  v124 = CCMenuItemSpriteExtra_create(v123, 0, a1, (__int64)LeaderboardsLayer_onInfo);
  *((_DWORD *)v124 + 93) = 0x40000000;
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v122 + 464LL))(v122, v124);
  v125 = *(_QWORD *)v122;
  v127 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v126);
  v128 = cocos2d::CCDirector::getScreenBottom(v127) + 30.0;
  v130 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v129);
  v131 = cocos2d::CCDirector::getScreenLeft(v130) + 30.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, v131, v128);
  (*(void (__fastcall **)(__int64, __int64))(v125 + 184))(v122, v132);
  sub_3D7D40(a1);
  sub_3D8980(a1, v8, a3);
  v133 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
  v134 = CCMenuItemSpriteExtra_create(v133, 0, a1, (__int64)LeaderboardsLayer_onBack);
  *((_DWORD *)v134 + 93) = 1070386381;
  v135 = cocos2d::CCMenu::create(v134, 0);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v135, 1);
  v136 = *(_QWORD *)v135;
  v138 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v137);
  v139 = cocos2d::CCDirector::getScreenTop(v138) - 23.0;
  v141 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v140);
  v142 = cocos2d::CCDirector::getScreenLeft(v141) + 24.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v147, v142, v139);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v136 + 184))(v135, v143);
  if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v144) + 209) )
    sub_6DEB0(a1, v134);
  return 1;
}
