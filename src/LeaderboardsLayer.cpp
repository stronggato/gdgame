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
