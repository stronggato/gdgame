#include <Geode/binding/PlayerObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/109] Address: 0x76650
// Method: PlayerObject::fadeOutStreak2
__int64 __fastcall PlayerObject_fadeOutStreak2(__int64 a1, double a2)
{
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  sub_760D0(&v5); /*0x76666*/
  result = *(unsigned __int8 *)(a1 + 353); /*0x7666b*/
  if ( (_BYTE)result ) /*0x76674*/
  {
    v4 = v5; /*0x76683*/
    v6 = 10; /*0x76688*/
    do /*0x766c2*/
    {
      sub_76860(&v6); /*0x76696*/
      result = sub_760D0(&v5); /*0x766a0*/
      if ( (double)(*(_DWORD *)result - v4) > a2 * 1000000000.0 ) /*0x766b7*/
        break; /*0x766b7*/
      result = *(unsigned __int8 *)(a1 + 353); /*0x766b9*/
    }
    while ( (_BYTE)result ); /*0x766c2*/
  }
  return result; /*0x766c9*/
}

// [3/109] Address: 0xd9460
// Method: PlayerObject::disablePlayerControls
void __fastcall PlayerObject_disablePlayerControls(__int64 a1, float a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 783) || (v3 = *(_QWORD *)(a1 + 744), !*(_BYTE *)(v3 + 320)) && *(_DWORD *)(v3 + 324) == 8 ) /*0xd9491*/
    a2 = 0.0; /*0xd9493*/
  if ( a2 != *(float *)(a1 + 932) ) /*0xd949f*/
  {
    *(float *)(a1 + 932) = a2; /*0xd94a8*/
    cocos2d::CCNode::unschedule(a1, sub_DB7A0); /*0xd94b0*/
    if ( *(float *)(a1 + 932) > 0.0 ) /*0xd94c1*/
      cocos2d::CCNode::schedule(a1, sub_DB7A0); /*0xd94cd*/
  }
}

// [4/109] Address: 0x11c9d0
// Method: PlayerObject::toggleRobotMode
// Hidden C++ exception states: #wind=1
void __fastcall PlayerObject_toggleRobotMode(__int64 a1)
{
  char v2; // di
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  const char *v7; // rcx
  int v8; // r14d
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  const char *v13; // rcx
  unsigned int v14; // r15d
  char *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rcx
  void *v19; // [rsp+30h] [rbp-50h] BYREF
  char *String[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h]
  unsigned __int64 v22; // [rsp+50h] [rbp-30h]
  char *v23[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  unsigned __int64 v25; // [rsp+70h] [rbp-10h]

  v2 = 0; /*0x11ca00*/
  LODWORD(v19) = 0; /*0x11ca03*/
  v3 = *(_QWORD *)(a1 + 1008); /*0x11ca07*/
  v4 = -1; /*0x11ca0e*/
  if ( v3 ) /*0x11ca18*/
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 600) + 600LL) + 8LL))(*(_QWORD *)(v3 + 600) + 600LL); /*0x11ca2b*/
    *(_OWORD *)String = 0; /*0x11ca31*/
    v21 = 0; /*0x11ca35*/
    v22 = 0; /*0x11ca39*/
    v6 = -1; /*0x11ca3d*/
    do /*0x11ca43*/
      ++v6; /*0x11ca40*/
    while ( *(_BYTE *)(v5 + v6) ); /*0x11ca43*/
    sub_3C230(String); /*0x11ca50*/
    v2 = 5; /*0x11ca55*/
    v7 = (const char *)String; /*0x11ca5a*/
    if ( v22 > 0xF ) /*0x11ca63*/
      v7 = String[0]; /*0x11ca63*/
    v8 = atoi(v7); /*0x11ca6e*/
  }
  else
  {
    v8 = 0; /*0x11ca73*/
  }
  if ( (v2 & 1) != 0 ) /*0x11ca7a*/
  {
    v2 &= ~1u; /*0x11ca7c*/
    if ( v22 > 0xF ) /*0x11ca87*/
    {
      v9 = String[0]; /*0x11ca8c*/
      if ( v22 + 1 >= 0x1000 ) /*0x11ca9a*/
      {
        v9 = (char *)*((_QWORD *)String[0] - 1); /*0x11caa0*/
        if ( (unsigned __int64)(String[0] - v9 - 8) > 0x1F ) /*0x11caaf*/
          invoke_watson(0, 0, 0, 0, 0); /*0x11cac0*/
      }
      j_j_free(v9); /*0x11cac7*/
    }
    v21 = 0; /*0x11cacc*/
    v22 = 15; /*0x11cad0*/
    LOBYTE(String[0]) = 0; /*0x11cad8*/
  }
  if ( v8 > 0 ) /*0x11cadf*/
  {
    v11 = *(_QWORD *)(a1 + 1016); /*0x11cb09*/
    if ( v11 ) /*0x11cb13*/
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v11 + 600) + 600LL) + 8LL))(*(_QWORD *)(v11 + 600) + 600LL); /*0x11cb26*/
      *(_OWORD *)v23 = 0; /*0x11cb2c*/
      v24 = 0; /*0x11cb30*/
      v25 = 0; /*0x11cb34*/
      do /*0x11cb43*/
        ++v4; /*0x11cb40*/
      while ( *(_BYTE *)(v12 + v4) ); /*0x11cb43*/
      sub_3C230(v23); /*0x11cb53*/
      v2 |= 0xAu; /*0x11cb58*/
      v13 = (const char *)v23; /*0x11cb5b*/
      if ( v25 > 0xF ) /*0x11cb64*/
        v13 = v23[0]; /*0x11cb64*/
      v14 = atoi(v13); /*0x11cb6f*/
    }
    else
    {
      v14 = 0; /*0x11cb74*/
    }
    if ( (v2 & 2) != 0 ) /*0x11cb7b*/
    {
      if ( v25 > 0xF ) /*0x11cb85*/
      {
        v15 = v23[0]; /*0x11cb8a*/
        if ( v25 + 1 >= 0x1000 ) /*0x11cb98*/
        {
          v15 = (char *)*((_QWORD *)v23[0] - 1); /*0x11cb9e*/
          if ( (unsigned __int64)(v23[0] - v15 - 8) > 0x1F ) /*0x11cbad*/
            invoke_watson(0, 0, 0, 0, 0); /*0x11cbbe*/
        }
        j_j_free(v15); /*0x11cbc5*/
      }
      v24 = 0; /*0x11cbca*/
      v25 = 15; /*0x11cbce*/
      LOBYTE(v23[0]) = 0; /*0x11cbd6*/
    }
    v16 = *(_QWORD *)&qword_905FB0; /*0x11cbda*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x11cbe4*/
    {
      v19 = operator new(0x690u); /*0x11cbf0*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0x11cbfd*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x11cc0e*/
      v16 = *(_QWORD *)&qword_905FB0; /*0x11cc10*/
    }
    LODWORD(v19) = v8; /*0x11cc17*/
    sub_658F0(v16 + 448, &v19); /*0x11cc26*/
    sub_65770(v16 + 320, &v19); /*0x11cc36*/
    sub_658F0(v16 + 384, &v19); /*0x11cc46*/
    LOBYTE(v17) = 1; /*0x11cc4b*/
    sub_2250E0(v16, (unsigned int)v8, v14, v17); /*0x11cc57*/
    *(_DWORD *)(a1 + 1032) = v8; /*0x11cc5c*/
    *(_DWORD *)(a1 + 1036) = v14; /*0x11cc63*/
    *(_DWORD *)(a1 + 1040) = 0; /*0x11cc6a*/
    v18 = *(_QWORD *)(a1 + 1024); /*0x11cc71*/
    if ( v18 ) /*0x11cc7b*/
      (**(void (__fastcall ***)(__int64, const char *))(v18 + 360))(v18 + 360, "Fetching..."); /*0x11cc8e*/
    cocos2d::CCNode::unschedule(a1, sub_11CCE0); /*0x11cc9a*/
    cocos2d::CCNode::schedule(a1, sub_11CCE0); /*0x11ccb2*/
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 1024); /*0x11cae1*/
    if ( v10 ) /*0x11caeb*/
      (**(void (__fastcall ***)(__int64, const char *))(v10 + 360))(v10 + 360, "Enter a valid level ID."); /*0x11cb02*/
  }
}

// [5/109] Address: 0x1755e0
// Method: PlayerObject::lockPlayer
__int64 __fastcall PlayerObject_lockPlayer(__int64 a1)
{
  __int64 v2; // rax

  if ( *(_BYTE *)(a1 + 332) ) /*0x1755e6*/
  {
    v2 = sub_182B60(); /*0x1755f2*/
    sub_182FE0(v2, 278); /*0x1755ff*/
  }
  return EditButtonBar_goToPage(a1, (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 344) + 588LL) + 1)); /*0x175616*/
}

// [6/109] Address: 0x291d60
// Method: PlayerObject::setFlipY
__int64 __fastcall PlayerObject_setFlipY(__int64 *a1, char a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 714) != a2 ) /*0x291d6f*/
  {
    v3 = *a1; /*0x291d76*/
    *((_BYTE *)a1 + 714) = a2; /*0x291d79*/
    (*(void (**)(void))(v3 + 144))(); /*0x291d7f*/
    return (*(__int64 (__fastcall **)(__int64 *))(v3 + 136))(a1); /*0x291d92*/
  }
  return result; /*0x291d9d*/
}

// [8/109] Address: 0x3571d0
// Method: PlayerObject::rotateGameplay
char *__fastcall PlayerObject_rotateGameplay(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3,
        int *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        int *a8)
{
  __int64 v10; // rax
  signed __int64 v11; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  char *v18; // rax
  int v19; // edx
  char *v20; // rsi
  char *v21; // r14
  int v22; // r10d
  unsigned int v23; // r11d
  int v24; // r9d
  int v25; // r8d
  void *v26; // rcx
  _BYTE *v27; // r8
  _BYTE *v28; // rdx
  size_t v29; // r8

  v10 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 5; /*0x3571ef*/
  v11 = a2 - (_BYTE *)*a1; /*0x3571f3*/
  if ( v10 == 0x7FFFFFFFFFFFFFFLL ) /*0x357209*/
    sub_59000(); /*0x35731b*/
  v14 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5; /*0x35721b*/
  v15 = v10 + 1; /*0x357227*/
  v16 = v14 >> 1; /*0x35722b*/
  if ( v14 <= 0x7FFFFFFFFFFFFFFLL - (v14 >> 1) ) /*0x357237*/
  {
    v17 = v10 + 1; /*0x3572ba*/
    if ( v16 + v14 >= v15 ) /*0x3572c0*/
      v17 = v16 + v14; /*0x3572c0*/
    if ( v17 > 0x7FFFFFFFFFFFFFFLL ) /*0x3572c7*/
      sub_8CF0(); /*0x357321*/
  }
  else
  {
    v17 = 0x7FFFFFFFFFFFFFFLL; /*0x357239*/
  }
  v18 = (char *)sub_3C460(32 * v17); /*0x357248*/
  v19 = *a4; /*0x35724d*/
  v20 = &v18[v11 & 0xFFFFFFFFFFFFFFE0uLL]; /*0x35725d*/
  v21 = v18; /*0x357260*/
  v22 = *a8; /*0x357263*/
  v23 = *a7; /*0x35726e*/
  v24 = *a6; /*0x357276*/
  v25 = *a5; /*0x35727e*/
  *(_QWORD *)v20 = *a3; /*0x357285*/
  v26 = v18; /*0x357288*/
  *((_DWORD *)v20 + 2) = v19; /*0x35728b*/
  *((_DWORD *)v20 + 3) = v25; /*0x35728e*/
  *((_DWORD *)v20 + 4) = v22; /*0x357292*/
  *((_DWORD *)v20 + 5) = v24; /*0x357296*/
  *((_QWORD *)v20 + 3) = v23; /*0x35729a*/
  v27 = a1[1]; /*0x3572a5*/
  v28 = *a1; /*0x3572a9*/
  if ( a2 == v27 ) /*0x3572af*/
  {
    v29 = v27 - v28; /*0x3572b1*/
  }
  else
  {
    memmove(v18, v28, a2 - v28); /*0x3572d4*/
    v26 = v20 + 32; /*0x3572dd*/
    v29 = (_BYTE *)a1[1] - a2; /*0x3572e1*/
    v28 = a2; /*0x3572e4*/
  }
  memmove(v26, v28, v29); /*0x3572e7*/
  sub_359A00(a1, v21, v15, v17); /*0x3572f8*/
  return v20; /*0x35730f*/
}

// [10/109] Address: 0x3daf70
// Method: PlayerObject::updateStreakBlend
struct cocos2d::CCAction *__fastcall PlayerObject_updateStreakBlend(cocos2d::CCNode *a1)
{
  cocos2d::CCNode *v2; // rbx
  struct cocos2d::CCAction *v3; // rax
  struct cocos2d::CCFiniteTimeAction *v4; // rbx
  __int64 v5; // rax
  struct cocos2d::CCAction *v6; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0; /*0x3daf7d*/
  v2 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v8); /*0x3daf9c*/
  (*(void (__fastcall **)(cocos2d::CCNode *, cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v2, 90); /*0x3dafa9*/
  v3 = cocos2d::CCFadeIn::create(0.30000001); /*0x3dafb4*/
  cocos2d::CCNode::runAction(v2, v3); /*0x3dafc0*/
  v4 = cocos2d::CCDelayTime::create(0.30000001); /*0x3dafde*/
  v5 = cocos2d::CCCallFunc::create(a1, LevelAreaLayer_onEnterTower); /*0x3dafe1*/
  v6 = cocos2d::CCSequence::create(v4, v5, 0); /*0x3daff0*/
  return cocos2d::CCNode::runAction(a1, v6); /*0x3daffc*/
}

// [11/109] Address: 0x3e8840
// Method: PlayerObject::PlayerObject
// Hidden C++ exception states: #wind=23
__int64 __fastcall PlayerObject_PlayerObject(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax

  GJBaseGameLayer_GJBaseGameLayer(); /*0x3e8852*/
  *(_QWORD *)a1 = &LevelEditorLayer::`vftable'; /*0x3e885f*/
  *(_QWORD *)(a1 + 320) = &LevelEditorLayer::`vftable'; /*0x3e8869*/
  *(_QWORD *)(a1 + 328) = &LevelEditorLayer::`vftable'; /*0x3e8877*/
  *(_QWORD *)(a1 + 336) = &LevelEditorLayer::`vftable'; /*0x3e8885*/
  *(_QWORD *)(a1 + 344) = &LevelEditorLayer::`vftable'; /*0x3e8893*/
  *(_QWORD *)(a1 + 352) = &LevelEditorLayer::`vftable'; /*0x3e88a1*/
  *(_QWORD *)(a1 + 408) = &LevelEditorLayer::`vftable'; /*0x3e88af*/
  *(_QWORD *)(a1 + 14712) = &LevelEditorLayer::`vftable'; /*0x3e88bd*/
  *(_QWORD *)(a1 + 14729) = 0; /*0x3e88c4*/
  *(_WORD *)(a1 + 14737) = 0; /*0x3e88cf*/
  *(_DWORD *)(a1 + 14740) = 0; /*0x3e88da*/
  *(_BYTE *)(a1 + 14744) = 0; /*0x3e88e0*/
  *(_QWORD *)(a1 + 14752) = 0; /*0x3e88e7*/
  *(_QWORD *)(a1 + 14760) = 0; /*0x3e88ee*/
  *(_QWORD *)(a1 + 14768) = 0; /*0x3e88f5*/
  *(_QWORD *)(a1 + 14776) = 0; /*0x3e88fc*/
  *(_QWORD *)(a1 + 14784) = 0; /*0x3e8903*/
  *(_QWORD *)(a1 + 14792) = 0; /*0x3e890a*/
  *(_QWORD *)(a1 + 14800) = 0; /*0x3e8911*/
  *(_QWORD *)(a1 + 14808) = 0; /*0x3e8918*/
  *(_QWORD *)(a1 + 14816) = 0; /*0x3e891f*/
  *(_QWORD *)(a1 + 14824) = 0; /*0x3e8926*/
  *(_QWORD *)(a1 + 14832) = 0; /*0x3e892d*/
  *(_QWORD *)(a1 + 14840) = 0; /*0x3e8934*/
  *(_QWORD *)(a1 + 14848) = 0; /*0x3e893b*/
  *(_QWORD *)(a1 + 14856) = 0; /*0x3e8942*/
  *(_QWORD *)(a1 + 14864) = 0; /*0x3e8949*/
  *(_BYTE *)(a1 + 14872) = 0; /*0x3e8950*/
  *(_QWORD *)(a1 + 14876) = 0; /*0x3e8957*/
  *(_QWORD *)(a1 + 14884) = 0; /*0x3e895e*/
  *(_BYTE *)(a1 + 14892) = 0; /*0x3e8965*/
  *(_QWORD *)(a1 + 14896) = 0; /*0x3e896c*/
  *(_BYTE *)(a1 + 14905) = 0; /*0x3e8973*/
  *(_QWORD *)(a1 + 14912) = 0; /*0x3e897a*/
  *(_QWORD *)(a1 + 14920) = 0; /*0x3e8981*/
  *(_BYTE *)(a1 + 14928) = 0; /*0x3e8988*/
  *(_WORD *)(a1 + 14930) = 0; /*0x3e898f*/
  *(_DWORD *)(a1 + 14932) = 0; /*0x3e8996*/
  *(_QWORD *)(a1 + 14936) = 0; /*0x3e899c*/
  *(_DWORD *)(a1 + 14944) = 1065353216; /*0x3e89a3*/
  *(_DWORD *)(a1 + 14948) = 1065353216; /*0x3e89ad*/
  *(_QWORD *)(a1 + 14952) = 0; /*0x3e89b7*/
  *(_DWORD *)(a1 + 14960) = 0; /*0x3e89be*/
  *(_WORD *)(a1 + 14964) = 0; /*0x3e89c4*/
  *(_QWORD *)(a1 + 14968) = 0; /*0x3e89cb*/
  *(_QWORD *)(a1 + 14976) = 0; /*0x3e89d2*/
  *(_QWORD *)(a1 + 14984) = 0; /*0x3e89d9*/
  *(_QWORD *)(a1 + 14992) = 0; /*0x3e89e0*/
  *(_DWORD *)(a1 + 15000) = 0; /*0x3e89e7*/
  *(_QWORD *)(a1 + 15008) = 0; /*0x3e89ed*/
  *(_WORD *)(a1 + 15016) = 0; /*0x3e89f4*/
  *(_BYTE *)(a1 + 15018) = 0; /*0x3e89fb*/
  *(_OWORD *)(a1 + 15024) = 0; /*0x3e8a05*/
  *(_QWORD *)(a1 + 15040) = 0; /*0x3e8a0c*/
  *(_QWORD *)(a1 + 15048) = 15; /*0x3e8a13*/
  *(_BYTE *)(a1 + 15024) = 0; /*0x3e8a1e*/
  *(_QWORD *)(a1 + 15056) = 0; /*0x3e8a25*/
  *(_QWORD *)(a1 + 15064) = 0; /*0x3e8a2c*/
  *(_QWORD *)(a1 + 15072) = 0; /*0x3e8a33*/
  *(_QWORD *)(a1 + 15080) = 0; /*0x3e8a3a*/
  *(_QWORD *)(a1 + 15088) = 0; /*0x3e8a41*/
  *(_QWORD *)(a1 + 15096) = 0; /*0x3e8a48*/
  *(_QWORD *)(a1 + 15112) = 0; /*0x3e8a4f*/
  *(_QWORD *)(a1 + 15120) = 0; /*0x3e8a56*/
  *(_QWORD *)(a1 + 15128) = 0; /*0x3e8a5d*/
  *(_QWORD *)(a1 + 15136) = 0; /*0x3e8a64*/
  *(_QWORD *)(a1 + 15144) = 0; /*0x3e8a6b*/
  *(_QWORD *)(a1 + 15152) = 0; /*0x3e8a72*/
  *(_QWORD *)(a1 + 15160) = 0; /*0x3e8a79*/
  *(_QWORD *)(a1 + 15168) = 0; /*0x3e8a80*/
  *(_QWORD *)(a1 + 15176) = 0; /*0x3e8a87*/
  *(_QWORD *)(a1 + 15184) = 0; /*0x3e8a8e*/
  *(_QWORD *)(a1 + 15192) = 0; /*0x3e8a95*/
  *(_QWORD *)(a1 + 15200) = 0; /*0x3e8a9c*/
  *(_QWORD *)(a1 + 15208) = 0; /*0x3e8aa3*/
  *(_QWORD *)(a1 + 15216) = 0; /*0x3e8aaa*/
  *(_QWORD *)(a1 + 15224) = 0; /*0x3e8ab1*/
  *(_QWORD *)(a1 + 15232) = 0; /*0x3e8ab8*/
  *(_QWORD *)(a1 + 15240) = 0; /*0x3e8abf*/
  *(_QWORD *)(a1 + 15248) = 0; /*0x3e8ac6*/
  *(_QWORD *)(a1 + 15256) = 0; /*0x3e8acd*/
  *(_QWORD *)(a1 + 15264) = 0; /*0x3e8ad4*/
  *(_QWORD *)(a1 + 15272) = 0; /*0x3e8adb*/
  *(_QWORD *)(a1 + 15280) = 0; /*0x3e8ae2*/
  *(_QWORD *)(a1 + 15288) = 0; /*0x3e8ae9*/
  *(_QWORD *)(a1 + 15296) = 0; /*0x3e8af0*/
  *(_DWORD *)(a1 + 15304) = 0; /*0x3e8af7*/
  *(_QWORD *)(a1 + 15312) = 0; /*0x3e8afd*/
  *(_QWORD *)(a1 + 15320) = 0; /*0x3e8b04*/
  *(_QWORD *)(a1 + 15328) = 0; /*0x3e8b0b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 15336)); /*0x3e8b19*/
  *(_QWORD *)(a1 + 15344) = 0; /*0x3e8b1f*/
  *(_QWORD *)(a1 + 15352) = 0; /*0x3e8b26*/
  *(_QWORD *)(a1 + 15360) = 0; /*0x3e8b2d*/
  *(_QWORD *)(a1 + 15368) = 0; /*0x3e8b34*/
  *(_QWORD *)(a1 + 15376) = 0; /*0x3e8b3b*/
  *(_QWORD *)(a1 + 15384) = 0; /*0x3e8b42*/
  *(_QWORD *)(a1 + 15392) = 0; /*0x3e8b49*/
  *(_QWORD *)(a1 + 15400) = 0; /*0x3e8b50*/
  *(_QWORD *)(a1 + 15408) = 0; /*0x3e8b57*/
  *(_QWORD *)(a1 + 15416) = 0; /*0x3e8b5e*/
  *(_QWORD *)(a1 + 15424) = 0; /*0x3e8b65*/
  *(_QWORD *)(a1 + 15432) = 0; /*0x3e8b6c*/
  *(_QWORD *)(a1 + 15440) = 0; /*0x3e8b73*/
  *(_QWORD *)(a1 + 15448) = 0; /*0x3e8b7a*/
  *(_QWORD *)(a1 + 15456) = 0; /*0x3e8b81*/
  *(_DWORD *)(a1 + 15464) = -1; /*0x3e8b88*/
  *(_QWORD *)(a1 + 15472) = 0; /*0x3e8b92*/
  *(_QWORD *)(a1 + 15480) = 0; /*0x3e8b99*/
  *(_QWORD *)(a1 + 15488) = 0; /*0x3e8ba0*/
  *(_QWORD *)(a1 + 15496) = 0; /*0x3e8ba7*/
  *(_QWORD *)(a1 + 15504) = 0; /*0x3e8bae*/
  *(_DWORD *)(a1 + 15512) = 0; /*0x3e8bb5*/
  *(_QWORD *)(a1 + 15520) = 0; /*0x3e8bbb*/
  *(_QWORD *)(a1 + 15528) = 0; /*0x3e8bc2*/
  *(_OWORD *)(a1 + 15536) = 0; /*0x3e8bcc*/
  *(_OWORD *)(a1 + 15552) = 0; /*0x3e8bd3*/
  *(_DWORD *)(a1 + 15568) = -1; /*0x3e8bda*/
  *(_BYTE *)(a1 + 15576) = 0; /*0x3e8be4*/
  *(_QWORD *)(a1 + 15584) = 0; /*0x3e8beb*/
  *(_QWORD *)(a1 + 15592) = 0; /*0x3e8bf2*/
  *(_QWORD *)(a1 + 15600) = 0; /*0x3e8bf9*/
  *(_QWORD *)(a1 + 15608) = 0; /*0x3e8c00*/
  *(_QWORD *)(a1 + 15616) = 0; /*0x3e8c07*/
  *(_QWORD *)(a1 + 15624) = 0; /*0x3e8c0e*/
  *(_QWORD *)(a1 + 15632) = 0; /*0x3e8c15*/
  *(_QWORD *)(a1 + 15640) = 0; /*0x3e8c1c*/
  *(_QWORD *)(a1 + 15648) = 0; /*0x3e8c23*/
  *(_QWORD *)(a1 + 15656) = 0; /*0x3e8c2a*/
  sub_3DC10(a1 + 15664); /*0x3e8c38*/
  *(_WORD *)(a1 + 15728) = 0; /*0x3e8c3e*/
  *(_BYTE *)(a1 + 15730) = 0; /*0x3e8c45*/
  *(_QWORD *)(a1 + 15732) = 0; /*0x3e8c4c*/
  *(_DWORD *)(a1 + 15740) = 0; /*0x3e8c53*/
  *(_QWORD *)(a1 + 15744) = 0; /*0x3e8c59*/
  *(_QWORD *)(a1 + 15752) = 0; /*0x3e8c60*/
  *(_QWORD *)(a1 + 15760) = 0; /*0x3e8c67*/
  *(_QWORD *)(a1 + 15768) = 0; /*0x3e8c6e*/
  *(_QWORD *)(a1 + 15776) = 0; /*0x3e8c75*/
  *(_QWORD *)(a1 + 15784) = 0; /*0x3e8c7c*/
  *(_QWORD *)(a1 + 15792) = 0; /*0x3e8c83*/
  *(_QWORD *)(a1 + 15800) = 0; /*0x3e8c8a*/
  *(_DWORD *)(a1 + 15808) = 0; /*0x3e8c9d*/
  *(_QWORD *)(a1 + 15816) = 0; /*0x3e8ca0*/
  *(_QWORD *)(a1 + 15824) = 0; /*0x3e8ca4*/
  v2 = operator new(0x50u); /*0x3e8cad*/
  *v2 = v2; /*0x3e8cb2*/
  v2[1] = v2; /*0x3e8cb5*/
  *(_QWORD *)(a1 + 15816) = v2; /*0x3e8cb9*/
  *(_QWORD *)(a1 + 15832) = 0; /*0x3e8cbd*/
  *(_QWORD *)(a1 + 15840) = 0; /*0x3e8cc1*/
  *(_QWORD *)(a1 + 15848) = 0; /*0x3e8cc5*/
  *(_QWORD *)(a1 + 15856) = 7; /*0x3e8cc9*/
  *(_QWORD *)(a1 + 15864) = 8; /*0x3e8cd1*/
  *(_DWORD *)(a1 + 15808) = 1065353216; /*0x3e8cd9*/
  v3 = *(_QWORD *)(a1 + 15816); /*0x3e8ce0*/
  v4 = operator new(0x80u); /*0x3e8d0a*/
  v5 = *(_QWORD **)(a1 + 15832); /*0x3e8d0d*/
  v6 = (__int64)(*(_QWORD *)(a1 + 15848) - (_QWORD)v5) >> 3; /*0x3e8d18*/
  if ( v6 ) /*0x3e8d1f*/
  {
    if ( (unsigned __int64)(8 * v6) >= 0x1000 ) /*0x3e8d30*/
    {
      if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F ) /*0x3e8d45*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3e8d8d*/
      v5 = (_QWORD *)*(v5 - 1); /*0x3e8d47*/
    }
    j_j_free(v5); /*0x3e8d4a*/
  }
  *(_QWORD *)(a1 + 15832) = v4; /*0x3e8d4f*/
  v7 = v4 + 16; /*0x3e8d53*/
  *(_QWORD *)(a1 + 15840) = v4 + 16; /*0x3e8d5a*/
  *(_QWORD *)(a1 + 15848) = v4 + 16; /*0x3e8d5e*/
  do /*0x3e8d7a*/
    *v4++ = v3; /*0x3e8d70*/
  while ( v4 != v7 ); /*0x3e8d7a*/
  *(_DWORD *)(a1 + 15872) = 0; /*0x3e8d9f*/
  *(_OWORD *)(a1 + 15880) = 0; /*0x3e8da8*/
  *(_QWORD *)(a1 + 15896) = 0; /*0x3e8daf*/
  *(_QWORD *)(a1 + 15904) = 15; /*0x3e8db6*/
  *(_BYTE *)(a1 + 15880) = 0; /*0x3e8dc1*/
  *(_OWORD *)(a1 + 15912) = 0; /*0x3e8dc8*/
  *(_QWORD *)(a1 + 15928) = 0; /*0x3e8dcf*/
  *(_QWORD *)(a1 + 15936) = 15; /*0x3e8dd6*/
  *(_BYTE *)(a1 + 15912) = 0; /*0x3e8de1*/
  return a1; /*0x3e8deb*/
}

// [12/109] Address: 0x4cfab0
// Method: PlayerObject::activateStreak
char __fastcall PlayerObject_activateStreak(__int64 a1)
{
  char result; // al

  result = NumberInputLayer_init(); /*0x4cfab9*/
  if ( result ) /*0x4cfac0*/
  {
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 672) + 360LL))( /*0x4cfae0*/
      *(_QWORD *)(a1 + 672) + 360LL,
      "Parental Control");
    *(_DWORD *)(a1 + 688) = 3; /*0x4cfae5*/
    *(_DWORD *)(a1 + 692) = 4; /*0x4cfaef*/
    sub_4CFB10(a1); /*0x4cfaf9*/
    return 1; /*0x4cfafe*/
  }
  return result; /*0x4cfac2*/
}

// [14/109] Address: 0x4ddd90
// Method: PlayerObject::playCompleteEffect
struct cocos2d::CCAction *__fastcall PlayerObject_playCompleteEffect(__int64 a1, char a2, char a3)
{
  cocos2d::CCParticleSystem *v6; // rcx
  cocos2d::CCNode *v7; // rcx
  __int64 v8; // r14
  struct cocos2d::CCAction *v9; // rbx
  struct cocos2d::CCAction *result; // rax
  cocos2d::CCParticleSystem *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // xmm1_4
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  __int16 v44; // [rsp+30h] [rbp-38h]
  __m128i si128; // [rsp+40h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 2500) ) /*0x4dddae*/
    sub_4F9CA0(); /*0x4dddc9*/
  PlayerObject_stopDashing(a1); /*0x4dddd1*/
  if ( *(_BYTE *)(a1 + 2030) ) /*0x4dddd6*/
    cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2240)); /*0x4ddde6*/
  v6 = *(cocos2d::CCParticleSystem **)(a1 + 2248); /*0x4dddec*/
  *(_BYTE *)(a1 + 2030) = 0; /*0x4dddf3*/
  cocos2d::CCParticleSystem::stopSystem(v6); /*0x4dddfa*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2256)); /*0x4dde07*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2264)); /*0x4dde14*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2280)); /*0x4dde21*/
  v7 = *(cocos2d::CCNode **)(a1 + 3096); /*0x4dde27*/
  if ( v7 ) /*0x4dde31*/
  {
    cocos2d::CCNode::stopAllActions(v7); /*0x4dde33*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 3096) + 336LL))(*(_QWORD *)(a1 + 3096), 0); /*0x4dde45*/
  }
  PlayerObject_toggleGhostEffect(a1, 0); /*0x4dde55*/
  PlayerObject_disableSwingFire(a1); /*0x4dde5d*/
  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL))(a1) ) /*0x4dde68*/
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL))(a1); /*0x4dde7f*/
  else
    v8 = *(_QWORD *)(a1 + 3120); /*0x4dde84*/
  if ( a3 ) /*0x4dde8f*/
  {
    result = (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 320) + 40LL))( /*0x4ddecc*/
                                           a1 + 320,
                                           0);
  }
  else
  {
    v9 = cocos2d::CCFadeTo::create(0.1, 0); /*0x4ddea4*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 4); /*0x4ddeb1*/
    result = cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v9); /*0x4ddeba*/
  }
  if ( !a2 ) /*0x4dded2*/
  {
    v11 = cocos2d::CCParticleSystemQuad::create("explodeEffectVortex.plist", 0); /*0x4ddeec*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v11 + 1528LL))(v11, 2); /*0x4ddefc*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCParticleSystem *, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4ddf19*/
      *(_QWORD *)(a1 + 3120),
      v11,
      99);
    LOBYTE(v12) = 1; /*0x4ddf1f*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v11 + 1544LL))(v11, v12); /*0x4ddf2b*/
    v13 = *(_QWORD *)v11; /*0x4ddf33*/
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4ddf36*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v13 + 184))(v11, v14); /*0x4ddf42*/
    v44 = *(_WORD *)(a1 + 2706); /*0x4ddf5f*/
    *(float *)si128.m128i_i32 = (float)(unsigned __int8)v44 / 255.0; /*0x4ddf7f*/
    v15 = *(_QWORD *)v11; /*0x4ddf97*/
    *(float *)&v16 = (float)*(unsigned __int8 *)(a1 + 2708) / 255.0; /*0x4ddfa1*/
    *(float *)&si128.m128i_i32[1] = (float)HIBYTE(v44) / 255.0; /*0x4ddfa5*/
    si128.m128i_i64[1] = v16 | 0x3F80000000000000LL; /*0x4ddfab*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __m128i *))(v15 + 1352))(v11, &si128); /*0x4ddfb1*/
    v17 = *(_QWORD *)v11; /*0x4ddfc4*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_8314D0); /*0x4ddfca*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __m128i *))(v17 + 1384))(v11, &si128); /*0x4ddfcf*/
    LOBYTE(v18) = 1; /*0x4ddfd8*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v11 + 1272LL))(v11, v18); /*0x4ddfdd*/
    v19 = *(_QWORD *)v11; /*0x4ddff0*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_831310); /*0x4ddff6*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __m128i *))(v19 + 1368))(v11, &si128); /*0x4ddffb*/
    v20 = *(_QWORD *)v11; /*0x4de00e*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_831310); /*0x4de014*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __m128i *))(v20 + 1400))(v11, &si128); /*0x4de019*/
    v21 = *(_QWORD *)v11; /*0x4de01f*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v11 + 1048LL))(v11); /*0x4de025*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(v21 + 1056))(v11); /*0x4de031*/
    v22 = *(_QWORD *)v11; /*0x4de037*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v11 + 960LL))(v11); /*0x4de03d*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(v22 + 968))(v11); /*0x4de051*/
    v23 = (*(__int64 (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v11 + 944LL))(v11); /*0x4de05d*/
    cocos2d::CCPoint::operator*(v23, &si128); /*0x4de073*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __m128i *))(*(_QWORD *)v11 + 952LL))(v11, &si128); /*0x4de084*/
    v24 = *(_QWORD *)v11; /*0x4de08a*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v11 + 1280LL))(v11); /*0x4de090*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(v24 + 1288))(v11); /*0x4de0a4*/
    v25 = *(_QWORD *)v11; /*0x4de0aa*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v11 + 1312LL))(v11); /*0x4de0b0*/
    (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(v25 + 1320))(v11); /*0x4de0c4*/
    cocos2d::CCParticleSystem::resetSystem(v11); /*0x4de0cd*/
    v29 = CCCircleWave_create(v27, v26, v28, 0, 1); /*0x4de0ff*/
    v30 = *(_QWORD *)v29; /*0x4de102*/
    *(_WORD *)(v29 + 340) = *(_WORD *)(a1 + 2706); /*0x4de105*/
    *(_BYTE *)(v29 + 342) = *(_BYTE *)(a1 + 2708); /*0x4de113*/
    v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4de126*/
    (*(void (__fastcall **)(__int64, __int64))(v30 + 184))(v29, v31); /*0x4de12e*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 456LL))(v8, v29, 99); /*0x4de143*/
    v35 = CCCircleWave_create(v33, v32, v34, 0, 1); /*0x4de175*/
    v36 = *(_QWORD *)v35; /*0x4de178*/
    *(_WORD *)(v35 + 340) = *(_WORD *)(a1 + 2709); /*0x4de17b*/
    *(_BYTE *)(v35 + 342) = *(_BYTE *)(a1 + 2711); /*0x4de189*/
    v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4de19c*/
    (*(void (__fastcall **)(__int64, __int64))(v36 + 184))(v35, v37); /*0x4de1a4*/
    *(_DWORD *)(v35 + 360) = 1061997773; /*0x4de1aa*/
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4de1c7*/
      *(_QWORD *)(a1 + 3120),
      v35,
      1000);
    v41 = CCCircleWave_create(v39, v38, v40, 0, 1); /*0x4de1f9*/
    v42 = *(_QWORD *)v41; /*0x4de1fc*/
    *(_WORD *)(v41 + 340) = *(_WORD *)(a1 + 2706); /*0x4de1ff*/
    *(_BYTE *)(v41 + 342) = *(_BYTE *)(a1 + 2708); /*0x4de20d*/
    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4de220*/
    (*(void (__fastcall **)(__int64, __int64))(v42 + 184))(v41, v43); /*0x4de228*/
    *(_DWORD *)(v41 + 360) = 1061997773; /*0x4de22e*/
    return (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 3120) /*0x4de24b*/
                                                                                           + 456LL))(
                                         *(_QWORD *)(a1 + 3120),
                                         v41,
                                         1000);
  }
  return result; /*0x4de251*/
}

// [15/109] Address: 0x4e0080
// Method: PlayerObject::~PlayerObject
__int64 __fastcall PlayerObject__dtor_PlayerObject(__int64 a1)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v3; // rax
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
  __int64 v14; // rcx
  void *v15; // rax

  *(_QWORD *)a1 = &PlayerObject::`vftable'; /*0x4e0094*/
  *(_QWORD *)(a1 + 320) = &PlayerObject::`vftable'; /*0x4e009e*/
  *(_QWORD *)(a1 + 344) = &PlayerObject::`vftable'; /*0x4e00ac*/
  *(_QWORD *)(a1 + 1360) = &PlayerObject::`vftable'; /*0x4e00ba*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1688)); ++i ) /*0x4e00ca*/
  {
    v3 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1688), i); /*0x4e00e9*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v3 + 728LL))(v3); /*0x4e00fc*/
  }
  v4 = *(cocos2d::CCObject **)(a1 + 1688); /*0x4e0111*/
  if ( v4 ) /*0x4e011b*/
    cocos2d::CCObject::release(v4); /*0x4e011d*/
  v5 = *(cocos2d::CCObject **)(a1 + 1456); /*0x4e0123*/
  if ( v5 ) /*0x4e012d*/
    cocos2d::CCObject::release(v5); /*0x4e012f*/
  v6 = *(cocos2d::CCObject **)(a1 + 1464); /*0x4e0135*/
  if ( v6 ) /*0x4e013f*/
    cocos2d::CCObject::release(v6); /*0x4e0141*/
  v7 = *(cocos2d::CCObject **)(a1 + 1472); /*0x4e0147*/
  if ( v7 ) /*0x4e0151*/
    cocos2d::CCObject::release(v7); /*0x4e0153*/
  v8 = *(cocos2d::CCObject **)(a1 + 1480); /*0x4e0159*/
  if ( v8 ) /*0x4e0163*/
    cocos2d::CCObject::release(v8); /*0x4e0165*/
  v9 = *(cocos2d::CCObject **)(a1 + 1448); /*0x4e016b*/
  if ( v9 ) /*0x4e0175*/
    cocos2d::CCObject::release(v9); /*0x4e0177*/
  v10 = *(cocos2d::CCObject **)(a1 + 2624); /*0x4e017d*/
  if ( v10 ) /*0x4e0187*/
    cocos2d::CCObject::release(v10); /*0x4e0189*/
  v11 = *(cocos2d::CCObject **)(a1 + 3128); /*0x4e018f*/
  if ( v11 ) /*0x4e0199*/
    cocos2d::CCObject::release(v11); /*0x4e019b*/
  v12 = *(cocos2d::CCObject **)(a1 + 3072); /*0x4e01a1*/
  if ( v12 ) /*0x4e01ab*/
    cocos2d::CCObject::release(v12); /*0x4e01ad*/
  v13 = *(cocos2d::CCObject **)(a1 + 3080); /*0x4e01b3*/
  if ( v13 ) /*0x4e01bd*/
    cocos2d::CCObject::release(v13); /*0x4e01bf*/
  v14 = qword_905FD0; /*0x4e01c5*/
  if ( !qword_905FD0 ) /*0x4e01cf*/
  {
    v15 = operator new(0x6E8u); /*0x4e01d6*/
    qword_905FD0 = sub_2723A0(v15); /*0x4e01e3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4e01f4*/
    v14 = qword_905FD0; /*0x4e01f6*/
  }
  GameManager_unloadIcons(v14, *(unsigned int *)(a1 + 3068)); /*0x4e0203*/
  sub_3C310(a1 + 3032); /*0x4e020f*/
  sub_7F2E0(a1 + 3008); /*0x4e021b*/
  sub_7F2E0(a1 + 2976); /*0x4e0227*/
  sub_685C0(a1 + 2760); /*0x4e0233*/
  sub_3DA90((void *)(a1 + 2656)); /*0x4e023f*/
  sub_3DB00(a1 + 2640); /*0x4e024b*/
  sub_3DA90((void *)(a1 + 2152)); /*0x4e0257*/
  sub_3DB00(a1 + 2136); /*0x4e0263*/
  sub_3DA90((void *)(a1 + 1792)); /*0x4e026f*/
  sub_65440(a1 + 1776); /*0x4e027b*/
  sub_3DA90((void *)(a1 + 1728)); /*0x4e0287*/
  sub_36C0A0(a1 + 1712); /*0x4e0293*/
  return TextGameObject__dtor_TextGameObject(a1); /*0x4e029b*/
}

// [16/109] Address: 0x4e02b0
// Method: PlayerObject::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall PlayerObject_create(int a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 v9; // rax
  cocos2d::CCObject *v10; // rbx
  void *v12; // [rsp+30h] [rbp-18h]

  v12 = operator new(0xC50u); /*0x4e02df*/
  v9 = sub_4DF030(v12); /*0x4e02e7*/
  v10 = (cocos2d::CCObject *)v9; /*0x4e02ec*/
  if ( v9 ) /*0x4e02f2*/
  {
    if ( (unsigned __int8)sub_4E0350(v9, a1, a2, a3, a4, a5) ) /*0x4e030e*/
    {
      cocos2d::CCObject::autorelease(v10); /*0x4e031a*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x4e032a*/
      return 0; /*0x4e032d*/
    }
  }
  return v10; /*0x4e0332*/
}

// [17/109] Address: 0x4e2220
// Method: PlayerObject::addAllParticles
__int64 __fastcall PlayerObject_addAllParticles(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e2240*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2240),
    39);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e225d*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2272),
    39);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e227a*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2288),
    39);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e2297*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2280),
    39);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e22b4*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2248),
    39);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e22d1*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2256),
    39);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e22ee*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2264),
    61);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e230b*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2320),
    61);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e2328*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2328),
    61);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e2345*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 2296),
    39);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))(
           *(_QWORD *)(a1 + 3120),
           *(_QWORD *)(a1 + 2304),
           39);
}

// [18/109] Address: 0x4e2370
// Method: PlayerObject::setupStreak
// Hidden C++ exception states: #wind=8
void __fastcall PlayerObject_setupStreak(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  cocos2d::CCString *v4; // rax
  const char *CString; // rdx
  float v6; // xmm0_4
  float v7; // xmm2_4
  cocos2d::CCMotionStreak *v8; // rax
  __int64 v9; // rax
  int v10; // edx
  float v11; // xmm6_4
  float v12; // xmm7_4
  __int64 v13; // rax
  const char *v14; // rdi
  cocos2d::CCTextureCache *v15; // rax
  struct cocos2d::CCTexture2D *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // [rsp+30h] [rbp-68h]
  void *v20; // [rsp+30h] [rbp-68h]
  void *v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v23[32]; // [rsp+40h] [rbp-58h] BYREF

  v2 = qword_905FD0; /*0x4e239c*/
  if ( !qword_905FD0 ) /*0x4e23a6*/
  {
    v19 = operator new(0x6E8u); /*0x4e23b2*/
    qword_905FD0 = sub_2723A0(v19); /*0x4e23c0*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4e23d1*/
    v2 = qword_905FD0; /*0x4e23d3*/
  }
  v3 = *(_DWORD *)(v2 + 880) - *(_DWORD *)(v2 + 884); /*0x4e23e0*/
  if ( v3 >= 7 ) /*0x4e23e9*/
  {
    v3 = 7; /*0x4e23f7*/
  }
  else if ( v3 <= 1 ) /*0x4e23ee*/
  {
    v3 = 1; /*0x4e23f0*/
  }
  *(_DWORD *)(a1 + 2344) = v3; /*0x4e23fc*/
  *(_BYTE *)(a1 + 1842) = *(_BYTE *)(v2 + 944); /*0x4e2409*/
  v4 = cocos2d::CCString::createWithFormat("streak_%02d_001.png", v3); /*0x4e2416*/
  CString = cocos2d::CCString::getCString(v4); /*0x4e2425*/
  *(_DWORD *)(a1 + 2348) = 1092616192; /*0x4e2428*/
  v6 = 0.30000001; /*0x4e2432*/
  v7 = 10.0; /*0x4e244b*/
  switch ( *(_DWORD *)(a1 + 2344) ) /*0x4e2474*/
  {
    case 2: /*0x4e2474*/
    case 7: /*0x4e2474*/
      v7 = 14.0; /*0x4e24d8*/
      *(_BYTE *)(a1 + 2352) = 1; /*0x4e24e0*/
      *(_DWORD *)(a1 + 2348) = 1096810496; /*0x4e24e7*/
      break; /*0x4e24e7*/
    case 3: /*0x4e2474*/
      *(_DWORD *)(a1 + 2348) = 1091043328; /*0x4e2476*/
      v7 = 8.5; /*0x4e2480*/
      break; /*0x4e2488*/
    case 4: /*0x4e2474*/
      v6 = 0.40000001; /*0x4e248a*/
      v7 = 10.0; /*0x4e2492*/
      break; /*0x4e2495*/
    case 5: /*0x4e2474*/
      *(_DWORD *)(a1 + 2348) = 1084227584; /*0x4e2497*/
      v6 = 0.60000002; /*0x4e24a1*/
      *(_BYTE *)(a1 + 2353) = 1; /*0x4e24a9*/
      v7 = 5.0; /*0x4e24b0*/
      break; /*0x4e24b3*/
    case 6: /*0x4e2474*/
      v6 = 1.0; /*0x4e24b5*/
      *(_BYTE *)(a1 + 2353) = 1; /*0x4e24bd*/
      *(_DWORD *)(a1 + 2348) = 1077936128; /*0x4e24c4*/
      v7 = 3.0; /*0x4e24ce*/
      break; /*0x4e24d6*/
    default:
      break;
  }
  v8 = cocos2d::CCMotionStreak::create(v6, 5.0, v7, (const struct cocos2d::_ccColor3B *)&word_6FF508, CString); /*0x4e24f1*/
  *(_QWORD *)(a1 + 1960) = v8; /*0x4e2506*/
  if ( *(_DWORD *)(a1 + 2344) == 6 ) /*0x4e2514*/
    cocos2d::CCMotionStreak::enableRepeatMode(v8, 0.1); /*0x4e2521*/
  *(_DWORD *)(*(_QWORD *)(a1 + 1960) + 464LL) = 1112014848; /*0x4e252e*/
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e254f*/
    *(_QWORD *)(a1 + 3120),
    *(_QWORD *)(a1 + 1960),
    4294967294LL);
  v9 = qword_905FD0; /*0x4e2555*/
  if ( !qword_905FD0 ) /*0x4e255f*/
  {
    v20 = operator new(0x6E8u); /*0x4e256b*/
    qword_905FD0 = sub_2723A0(v20); /*0x4e2579*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4e258a*/
    v9 = qword_905FD0; /*0x4e258c*/
  }
  v10 = *(_DWORD *)(v9 + 892) - *(_DWORD *)(v9 + 896); /*0x4e2599*/
  *(_DWORD *)(a1 + 2356) = v10; /*0x4e259f*/
  if ( v10 <= 6 ) /*0x4e25a8*/
  {
    if ( v10 > 1 ) /*0x4e25bc*/
    {
      switch ( v10 ) /*0x4e25cd*/
      {
        case 2: /*0x4e25cd*/
          v11 = 0.063600004; /*0x4e262b*/
          v12 = 22.0; /*0x4e2633*/
          break;
        case 3: /*0x4e25cd*/
          v11 = 0.1278; /*0x4e2619*/
          v12 = 28.599998; /*0x4e2621*/
          break;
        case 4: /*0x4e25cd*/
          v11 = 0.105; /*0x4e2607*/
          v12 = 28.599998; /*0x4e260f*/
          break;
        case 5: /*0x4e25cd*/
          v11 = 0.090000004; /*0x4e25f5*/
          v12 = 18.700001; /*0x4e25fd*/
          break;
        default:
          v11 = 0.096000001; /*0x4e25e3*/
          v12 = 27.0; /*0x4e25eb*/
          break;
      }
      v13 = sub_4DFC80(v23); /*0x4e2643*/
      v14 = (const char *)v13; /*0x4e2648*/
      if ( *(_QWORD *)(v13 + 24) > 0xFu ) /*0x4e2650*/
        v14 = *(const char **)v13; /*0x4e2652*/
      v15 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x4e2655*/
      v16 = cocos2d::CCTextureCache::addImage(v15, v14, 0); /*0x4e2664*/
      *(_QWORD *)(a1 + 1968) = cocos2d::CCMotionStreak::create( /*0x4e268a*/
                                 v11,
                                 1.0,
                                 v12,
                                 (const struct cocos2d::_ccColor3B *)&word_6FF508,
                                 v16);
      sub_3C310(v23); /*0x4e2696*/
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e26b2*/
        *(_QWORD *)(a1 + 3120),
        *(_QWORD *)(a1 + 1968),
        4294967293LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 1968) + 464LL) = 1112014848; /*0x4e26bf*/
      *(_BYTE *)(*(_QWORD *)(a1 + 1968) + 468LL) = 1; /*0x4e26d0*/
      (**(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 1968) + 344LL))( /*0x4e26fd*/
        *(_QWORD *)(a1 + 1968) + 344LL,
        0x100000302LL);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 2356) = 1; /*0x4e25aa*/
  }
  v22 = 0x100000302LL; /*0x4e26ff*/
  (**(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 1960) + 344LL))( /*0x4e2725*/
    *(_QWORD *)(a1 + 1960) + 344LL,
    0x100000302LL);
  v17 = HardStreak_create(); /*0x4e2727*/
  *(_QWORD *)(a1 + 1976) = v17; /*0x4e272c*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4e2750*/
    *(_QWORD *)(a1 + 3120),
    v17,
    4294967293LL);
  v18 = qword_905FD0; /*0x4e2753*/
  if ( !qword_905FD0 ) /*0x4e275d*/
  {
    v21 = operator new(0x6E8u); /*0x4e2769*/
    qword_905FD0 = sub_2723A0(v21); /*0x4e2777*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4e2788*/
    v18 = qword_905FD0; /*0x4e278a*/
  }
  if ( *(_DWORD *)(v18 + 844) - *(_DWORD *)(v18 + 848) != 15 || *(_BYTE *)(a1 + 2098) ) /*0x4e27a2*/
    cocos2d::CCDrawNode::setBlendFunc(*(cocos2d::CCDrawNode **)(a1 + 1976), (const struct cocos2d::_ccBlendFunc *)&v22); /*0x4e27c7*/
  else
    *(_BYTE *)(*(_QWORD *)(a1 + 1976) + 440LL) = 1; /*0x4e27b2*/
  cocos2d::CCMotionStreak::stopStroke(*(cocos2d::CCMotionStreak **)(a1 + 1960)); /*0x4e27d4*/
  if ( *(_BYTE *)(a1 + 2432) ) /*0x4e27da*/
  {
    *(_BYTE *)(a1 + 2432) = 0; /*0x4e27e3*/
    sub_4F9CA0(a1); /*0x4e2808*/
  }
}

// [19/109] Address: 0x4e28c0
// Method: PlayerObject::setYVelocity
void __fastcall PlayerObject_setYVelocity(__int64 a1, double a2)
{
  double v2; // xmm7_8

  v2 = (double)(int)a2; /*0x4e28d6*/
  if ( a2 == v2 ) /*0x4e28e0*/
    *(double *)(a1 + 2472) = a2; /*0x4e28e2*/
  else
    *(double *)(a1 + 2472) = round((a2 - v2) * 1000.0) / 1000.0 + v2; /*0x4e2916*/
}

// [21/109] Address: 0x4e3c80
// Method: PlayerObject::updateMove
// Hidden C++ exception states: #wind=8
char __fastcall PlayerObject_updateMove(__int64 *a1, float a2)
{
  double v4; // xmm11_8
  char v5; // bl
  char v6; // r13
  double v7; // xmm12_8
  double v8; // xmm15_8
  char v9; // al
  float v10; // xmm1_4
  char v11; // r15
  char v12; // r12
  double v13; // xmm0_8
  __int64 v14; // rdx
  int v15; // ecx
  double v16; // xmm6_8
  bool v17; // al
  double v18; // xmm0_8
  double v19; // xmm2_8
  char v20; // bl
  void **v21; // rcx
  unsigned __int64 v22; // rsi
  size_t v23; // r8
  unsigned __int64 v24; // rsi
  bool v25; // r14
  void **v26; // rcx
  unsigned __int64 v27; // r14
  size_t v28; // r8
  void *v29; // rcx
  char v30; // bl
  void **v31; // rcx
  unsigned __int64 v32; // rsi
  size_t v33; // r8
  bool v34; // si
  float v35; // xmm2_4
  double v36; // xmm1_8
  __int64 v37; // rax
  char v38; // al
  char v39; // si
  unsigned __int64 v40; // rcx
  unsigned __int32 v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  double v44; // xmm2_8
  double v45; // xmm3_8
  char v46; // al
  double v47; // xmm2_8
  double v48; // xmm2_8
  double v49; // xmm0_8
  float v50; // xmm4_4
  unsigned __int64 v51; // xmm6_8
  double v52; // xmm2_8
  float v53; // xmm1_4
  double v54; // xmm3_8
  float v55; // xmm0_4
  char v56; // bl
  double v57; // xmm0_8
  float v58; // xmm1_4
  float v59; // xmm1_4
  __int64 v60; // rbx
  int v61; // eax
  double v62; // xmm1_8
  float v63; // xmm0_4
  float v64; // xmm3_4
  double v65; // xmm2_8
  float v66; // xmm2_4
  double v67; // xmm1_8
  __int64 v68; // rbx
  char v70; // [rsp+30h] [rbp-D0h]
  __int128 Buf2; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+58h] [rbp-A8h]
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+70h] [rbp-90h]
  void *Buf1[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v77; // [rsp+90h] [rbp-70h]
  unsigned __int64 v78; // [rsp+98h] [rbp-68h]
  void *v79[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v80; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v81; // [rsp+B8h] [rbp-48h]

  v4 = *((float *)a1 + 639) * *((double *)a1 + 248); /*0x4e3d02*/
  v5 = *((_BYTE *)a1 + 2488); /*0x4e3d0b*/
  if ( v5 && !*((_BYTE *)a1 + 1684) && !*((_BYTE *)a1 + 2496) ) /*0x4e3d1f*/
    v4 = v4 * cosf(*((float *)a1 + 382)); /*0x4e3d3c*/
  v6 = 1; /*0x4e3d41*/
  v7 = 0.05000000074505806; /*0x4e3d4d*/
  v8 = *((double *)a1 + 352); /*0x4e3d51*/
  v9 = *((_BYTE *)a1 + 2864); /*0x4e3d5a*/
  if ( v9 ) /*0x4e3d6b*/
    v10 = 0.2; /*0x4e3d6d*/
  else
    v10 = 1.0; /*0x4e3d72*/
  v11 = *((_BYTE *)a1 + 2825); /*0x4e3d7a*/
  if ( *((_WORD *)a1 + 1412) || *((_BYTE *)a1 + 2913) || *((_BYTE *)a1 + 2914) ) /*0x4e3d99*/
  {
    v12 = *((_BYTE *)a1 + 2824); /*0x4e3db1*/
    v70 = 1; /*0x4e3db9*/
    if ( v11 ) /*0x4e3dc1*/
    {
      v70 = 1; /*0x4e3dc3*/
      if ( v12 ) /*0x4e3dcb*/
      {
        v70 = 1; /*0x4e3dcd*/
        if ( *((_BYTE *)a1 + 2826) ) /*0x4e3dd2*/
          v12 = 0; /*0x4e3ddb*/
        else
          v11 = 0; /*0x4e3de0*/
      }
    }
  }
  else
  {
    v70 = 0; /*0x4e3da2*/
    v12 = *((_BYTE *)a1 + 2824); /*0x4e3da7*/
  }
  if ( !v9 && !*((_BYTE *)a1 + 2580) && v11 != *((_BYTE *)a1 + 2915) ) /*0x4e3e07*/
  {
    if ( *((int *)a1 + 721) <= 0 ) /*0x4e3e10*/
    {
      v13 = *((double *)a1 + 341) - *((double *)a1 + 361); /*0x4e3e1f*/
      if ( v13 < 0.5 ) /*0x4e3e2c*/
        v10 = (v13 + v13) * 0.800000011920929 + 0.2000000029802322; /*0x4e3e3e*/
    }
    else
    {
      v10 = 0.2; /*0x4e3e12*/
    }
  }
  v14 = 1; /*0x4e3e42*/
  v15 = 1; /*0x4e3e47*/
  if ( v11 ) /*0x4e3e52*/
    v15 = -1; /*0x4e3e52*/
  v16 = a2 * 0.5 * v10; /*0x4e3e66*/
  v17 = (*((_BYTE *)a1 + 2913) && v11 || *((_BYTE *)a1 + 2914) && v12) /*0x4e3eb0*/
     && fabs(v8) >= v4 * 0.949999988079071
     && v5
     && !*((_BYTE *)a1 + 2496);
  if ( *((_BYTE *)a1 + 2849) || v17 ) /*0x4e3ece*/
  {
    v18 = *((double *)a1 + 173); /*0x4e3ed0*/
    v19 = 1.0; /*0x4e3ed8*/
    if ( v18 < 0.0 ) /*0x4e3ee0*/
      v19 = 1.0 - v18 / 15.0 * 0.300000011920929; /*0x4e3ef2*/
    if ( v17 ) /*0x4e3ef8*/
      *((double *)a1 + 357) = (float)(a2 * 0.25) * v19 + *((double *)a1 + 357); /*0x4e3f19*/
    v4 = v4 + *((double *)a1 + 357); /*0x4e3f21*/
    *((_BYTE *)a1 + 2849) = 1; /*0x4e3f2a*/
  }
  if ( v11 && *((double *)a1 + 352) > 0.0 || v12 && *((double *)a1 + 352) < 0.0 ) /*0x4e3f52*/
    v16 = v16 * 1.5; /*0x4e3f54*/
  if ( v11 || v12 ) /*0x4e3f75*/
  {
    *((_DWORD *)a1 + 648) = 0; /*0x4e43ef*/
    v6 = 0; /*0x4e43f9*/
    if ( v11 && (v36 = *((double *)a1 + 352), v36 > -v4) || v12 && (v36 = *((double *)a1 + 352), v4 > v36) ) /*0x4e442c*/
      *((double *)a1 + 352) = (double)v15 * v16 + v36; /*0x4e443e*/
    if ( *((_BYTE *)a1 + 2580) ) /*0x4e4446*/
    {
      if ( *((_BYTE *)a1 + 2501) ) /*0x4e444f*/
      {
        v37 = sub_3E4F0(Buf1, a1 + 379); /*0x4e4463*/
        CCAnimatedSprite_runAnimation(a1[277], v37); /*0x4e4472*/
      }
      else if ( *((_BYTE *)a1 + 2502) ) /*0x4e4479*/
      {
        sub_4FB190(a1); /*0x4e4485*/
      }
    }
  }
  else
  {
    if ( *((_BYTE *)a1 + 2580) ) /*0x4e3f7b*/
    {
      if ( *((_BYTE *)a1 + 2501) ) /*0x4e3f88*/
      {
        Buf2 = 0; /*0x4e3f98*/
        v72 = 6; /*0x4e3f9d*/
        v73 = 15; /*0x4e3fa2*/
        strcpy((char *)&Buf2, "idle01"); /*0x4e3fb1*/
        sub_3E4F0(Buf1, *(_QWORD *)(a1[277] + 664) + 408LL); /*0x4e3fe3*/
        v20 = 3; /*0x4e3fe9*/
        v21 = Buf1; /*0x4e3fee*/
        if ( v78 > 0xF ) /*0x4e3ff7*/
          v21 = (void **)Buf1[0]; /*0x4e3ff7*/
        v22 = v77; /*0x4e3ffc*/
        v23 = v77; /*0x4e4000*/
        if ( v77 > 6 ) /*0x4e400d*/
          v23 = 6; /*0x4e400d*/
        if ( !memcmp(v21, &Buf2, v23) && v22 == 6 ) /*0x4e4022*/
        {
          v24 = si128.m128i_u64[1]; /*0x4e4024*/
          v25 = 0; /*0x4e4029*/
        }
        else
        {
          *(_OWORD *)Block = 0; /*0x4e4034*/
          si128.m128i_i64[0] = 6; /*0x4e4039*/
          v24 = 15; /*0x4e403e*/
          si128.m128i_i64[1] = 15; /*0x4e4043*/
          strcpy((char *)Block, "idle02"); /*0x4e404e*/
          sub_3E4F0(v79, *(_QWORD *)(a1[277] + 664) + 408LL); /*0x4e4084*/
          v20 = 15; /*0x4e4089*/
          v26 = v79; /*0x4e408e*/
          if ( v81 > 0xF ) /*0x4e4096*/
            v26 = (void **)v79[0]; /*0x4e4096*/
          v27 = v80; /*0x4e409b*/
          v28 = v80; /*0x4e409f*/
          if ( v80 > 6 ) /*0x4e40ab*/
            v28 = 6; /*0x4e40ab*/
          v25 = memcmp(v26, Block, v28) || v27 != 6; /*0x4e40c3*/
        }
        if ( (v20 & 8) != 0 ) /*0x4e40ce*/
        {
          v20 &= ~8u; /*0x4e40d0*/
          sub_3C310(v79); /*0x4e40d7*/
        }
        if ( (v20 & 4) != 0 ) /*0x4e40e0*/
        {
          v20 &= ~4u; /*0x4e40e2*/
          if ( v24 > 0xF ) /*0x4e40e9*/
          {
            v29 = Block[0]; /*0x4e40ef*/
            if ( v24 + 1 >= 0x1000 ) /*0x4e40fe*/
            {
              v29 = (void *)*((_QWORD *)Block[0] - 1); /*0x4e4104*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v29 - 8) > 0x1F ) /*0x4e4113*/
                invoke_watson(0, 0, 0, 0, 0); /*0x4e4128*/
            }
            j_j_free(v29); /*0x4e412f*/
          }
        }
        if ( (v20 & 2) != 0 ) /*0x4e4138*/
          sub_3C310(Buf1); /*0x4e413e*/
        if ( v25 ) /*0x4e4147*/
        {
          *(_OWORD *)Block = 0; /*0x4e414c*/
          si128.m128i_i64[0] = 6; /*0x4e4156*/
          si128.m128i_i64[1] = 15; /*0x4e415b*/
          strcpy((char *)Block, "idle01"); /*0x4e416a*/
          sub_43850(a1[277], Block); /*0x4e4193*/
        }
      }
      else if ( *((_BYTE *)a1 + 2502) ) /*0x4e41c4*/
      {
        Buf2 = 0; /*0x4e41d0*/
        v72 = 6; /*0x4e41d5*/
        v73 = 15; /*0x4e41da*/
        strcpy((char *)&Buf2, "idle01"); /*0x4e41e9*/
        sub_3E4F0(Buf1, *(_QWORD *)(a1[278] + 664) + 408LL); /*0x4e421f*/
        v30 = 48; /*0x4e4225*/
        v31 = Buf1; /*0x4e422a*/
        if ( v78 > 0xF ) /*0x4e4233*/
          v31 = (void **)Buf1[0]; /*0x4e4233*/
        v32 = v77; /*0x4e4238*/
        v33 = v77; /*0x4e423c*/
        if ( v77 > 6 ) /*0x4e4248*/
          v33 = 6; /*0x4e4248*/
        v34 = 0; /*0x4e42d3*/
        if ( memcmp(v31, &Buf2, v33) || v32 != 6 ) /*0x4e425e*/
        {
          *(_OWORD *)Block = 0; /*0x4e4263*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_830F30); /*0x4e4270*/
          strcpy((char *)Block, "idle02"); /*0x4e427c*/
          sub_3E4F0(v79, *(_QWORD *)(a1[278] + 664) + 408LL); /*0x4e42b2*/
          v30 = -16; /*0x4e42b7*/
          if ( (unsigned int)sub_3C160(v79, Block) ) /*0x4e42c5*/
            v34 = 1; /*0x4e425e*/
        }
        if ( v30 < 0 ) /*0x4e42d8*/
        {
          v30 &= ~0x80u; /*0x4e42da*/
          sub_3C310(v79); /*0x4e42e2*/
        }
        if ( (v30 & 0x40) != 0 ) /*0x4e42eb*/
        {
          v30 &= ~0x40u; /*0x4e42ed*/
          sub_3C310(Block); /*0x4e42f5*/
        }
        if ( (v30 & 0x20) != 0 ) /*0x4e42fe*/
          sub_3C310(Buf1); /*0x4e4304*/
        if ( v34 ) /*0x4e430d*/
        {
          *(_OWORD *)Block = 0; /*0x4e4316*/
          si128.m128i_i64[0] = 6; /*0x4e4320*/
          si128.m128i_i64[1] = 15; /*0x4e4325*/
          strcpy((char *)Block, "idle01"); /*0x4e4334*/
          sub_43850(a1[278], Block); /*0x4e435d*/
        }
      }
    }
    if ( *((_BYTE *)a1 + 2864) ) /*0x4e41ae*/
    {
      v7 = 0.2000000029802322; /*0x4e41bb*/
    }
    else
    {
      v7 = fminf(1.0, *((float *)a1 + 648) + 0.2); /*0x4e4382*/
      v35 = 0.2; /*0x4e4386*/
      if ( !*((_BYTE *)a1 + 2580) ) /*0x4e4389*/
      {
        if ( *((_BYTE *)a1 + 2497) || *((_BYTE *)a1 + 2499) || *((_BYTE *)a1 + 2498) ) /*0x4e43a4*/
        {
          v35 = 0.02; /*0x4e43ce*/
        }
        else if ( *((_BYTE *)a1 + 2501) || *((_BYTE *)a1 + 2502) ) /*0x4e43b6*/
        {
          v35 = 0.1; /*0x4e43c9*/
        }
        else
        {
          v35 = 0.050000001; /*0x4e43bf*/
        }
      }
      *((float *)a1 + 648) = (float)(a2 * v35) + *((float *)a1 + 648); /*0x4e43e2*/
    }
  }
  if ( fabs(*((double *)a1 + 352)) < 0.5 ) /*0x4e449e*/
    *((_BYTE *)a1 + 2972) = 0; /*0x4e44a0*/
  v38 = *((_BYTE *)a1 + 2972); /*0x4e44a7*/
  if ( v38 || *((_BYTE *)a1 + 2912) ) /*0x4e44b2*/
    v6 = 1; /*0x4e44ba*/
  if ( (*((_BYTE *)a1 + 2840) || v38 || *((_BYTE *)a1 + 2912)) && !*((_BYTE *)a1 + 2864) ) /*0x4e44d2*/
  {
    v7 = 0.05000000074505806; /*0x4e44db*/
    v39 = v70; /*0x4e44df*/
    if ( !*((_BYTE *)a1 + 2608) && !v70 ) /*0x4e44f0*/
      v7 = 0.2000000029802322; /*0x4e44f2*/
  }
  else
  {
    v39 = v70; /*0x4e44f8*/
    if ( *((_BYTE *)a1 + 2848) && !*((_BYTE *)a1 + 2864) ) /*0x4e4506*/
      v7 = 0.1000000014901161; /*0x4e450f*/
  }
  v40 = *((unsigned __int8 *)a1 + 2913); /*0x4e4518*/
  v41 = _mm_load_si128((const __m128i *)&xmmword_831640).m128i_u32[0]; /*0x4e451f*/
  if ( !(_BYTE)v40 ) /*0x4e452d*/
  {
    if ( !*((_BYTE *)a1 + 2914) ) /*0x4e4535*/
      goto LABEL_174; /*0x4e4535*/
    *((_BYTE *)a1 + 2915) = 0; /*0x4e453b*/
    v42 = (float)1; /*0x4e4550*/
LABEL_137:
    if ( !*((_BYTE *)a1 + 2914) || v12 ) /*0x4e4582*/
      goto LABEL_174; /*0x4e4582*/
    goto LABEL_139; /*0x4e4582*/
  }
  *((_BYTE *)a1 + 2915) = v40; /*0x4e4555*/
  v42 = (float)-1; /*0x4e456a*/
  if ( v11 ) /*0x4e4570*/
    goto LABEL_137; /*0x4e4570*/
LABEL_139:
  v6 = 0; /*0x4e4588*/
  if ( a1[208] ) /*0x4e458b*/
    LODWORD(v43) = COERCE_UNSIGNED_INT(*((float *)a1 + 424) * 57.29578) & v41; /*0x4e45a5*/
  else
    v43 = 0.0; /*0x4e45aa*/
  v44 = (fmax(40.0, fmin(v43, 80.0)) - 40.0) / 40.0; /*0x4e45cb*/
  v45 = a2 * 0.5 * (v44 * 0.5 + 0.5) * 0.4000000059604645; /*0x4e45ed*/
  v14 = *((unsigned __int8 *)a1 + 2497); /*0x4e45f5*/
  if ( (_BYTE)v14 ) /*0x4e4606*/
    v45 = v45 * 0.699999988079071; /*0x4e4608*/
  v46 = *((_BYTE *)a1 + 2913); /*0x4e460c*/
  if ( v46 && *((double *)a1 + 352) > 0.0 /*0x4e463e*/
    || (v40 = *((unsigned __int8 *)a1 + 2914), (_BYTE)v40) && *((double *)a1 + 352) < 0.0 )
  {
    v47 = v44 * 0.699999988079071 + 1.350000023841858; /*0x4e4648*/
    if ( (_BYTE)v14 ) /*0x4e4652*/
    {
      v47 = v47 + -0.25; /*0x4e4654*/
    }
    else if ( *((_BYTE *)a1 + 2499) ) /*0x4e465e*/
    {
      v47 = v47 + -0.2800000011920929; /*0x4e4667*/
    }
    else if ( *((_BYTE *)a1 + 2502) ) /*0x4e4671*/
    {
      v47 = v47 + -0.2000000029802322; /*0x4e467a*/
    }
    if ( *((_BYTE *)a1 + 2864) ) /*0x4e4682*/
      v47 = v47 * 4.0; /*0x4e468b*/
    if ( v46 && !v12 || *((_BYTE *)a1 + 2914) && !v11 ) /*0x4e46a8*/
      v47 = v47 * 0.800000011920929; /*0x4e46aa*/
    v48 = v47 * v16; /*0x4e46b2*/
    if ( fabs(v48) > fabs(v45) ) /*0x4e46ce*/
      v45 = v48; /*0x4e46d0*/
  }
  else if ( v46 && v12 || (_BYTE)v40 && v11 ) /*0x4e46e5*/
  {
    v45 = v45 + v16; /*0x4e46e7*/
  }
  if ( *((_BYTE *)a1 + 2488) && !*((_BYTE *)a1 + 2880) && *((int *)a1 + 721) > 0 && !*((_BYTE *)a1 + 2496) ) /*0x4e4706*/
    *((double *)a1 + 352) = *((double *)a1 + 352) * 0.800000011920929; /*0x4e471f*/
  *((double *)a1 + 352) = v42 * v45 + *((double *)a1 + 352); /*0x4e4736*/
LABEL_174:
  if ( *((_BYTE *)a1 + 2848) && !*((_BYTE *)a1 + 2864) && !*((_BYTE *)a1 + 2913) && !*((_BYTE *)a1 + 2914) ) /*0x4e4759*/
  {
    v49 = *((double *)a1 + 352); /*0x4e4762*/
    if ( *((_BYTE *)a1 + 2915) ) /*0x4e476a*/
    {
      if ( v49 <= 0.0 ) /*0x4e4778*/
        goto LABEL_183; /*0x4e4778*/
      goto LABEL_182; /*0x4e4778*/
    }
    if ( v49 < 0.0 ) /*0x4e4781*/
LABEL_182:
      *((_BYTE *)a1 + 2848) = 0; /*0x4e4783*/
  }
LABEL_183:
  v50 = 0.15000001; /*0x4e478a*/
  v51 = _mm_load_si128((const __m128i *)&xmmword_831650).m128i_u64[0]; /*0x4e4792*/
  if ( v6 || (v52 = *((double *)a1 + 352), COERCE_DOUBLE(*(_QWORD *)&v52 & v51) > v4) ) /*0x4e47b2*/
  {
    if ( *((_BYTE *)a1 + 2864) || *((_BYTE *)a1 + 2912) ) /*0x4e4809*/
      v53 = 0.15000001; /*0x4e481c*/
    else
      v53 = 1.0; /*0x4e4812*/
    v54 = *((double *)a1 + 352) - *((double *)a1 + 352) * v7 * a2 * v53; /*0x4e4842*/
    *((double *)a1 + 352) = v54; /*0x4e4846*/
    if ( COERCE_DOUBLE(*(_QWORD *)&v54 & v51) < 0.009999999776482582 /*0x4e4885*/
      || *((_BYTE *)a1 + 2936) && (v8 > 0.0 && v54 < 0.0 || v8 < 0.0 && v54 > 0.0) )
    {
      a1[352] = 0; /*0x4e4887*/
LABEL_203:
      *((_BYTE *)a1 + 2912) = 0; /*0x4e4892*/
      *((_BYTE *)a1 + 2848) = 0; /*0x4e4899*/
      *((_BYTE *)a1 + 2972) = 0; /*0x4e48a0*/
      *((_BYTE *)a1 + 2840) = 0; /*0x4e48a7*/
    }
  }
  else if ( *((_BYTE *)a1 + 2936) /*0x4e47f5*/
         && (COERCE_DOUBLE(*(_QWORD *)&v52 & v51) < 0.009999999776482582
          || v8 > 0.0 && v52 < 0.0
          || v8 < 0.0 && v52 > 0.0) )
  {
    goto LABEL_203; /*0x4e47f5*/
  }
  if ( *((_BYTE *)a1 + 2840) ) /*0x4e48ae*/
  {
    if ( !*((_BYTE *)a1 + 2864) && !*((_BYTE *)a1 + 2912) ) /*0x4e48c0*/
      v50 = 1.0; /*0x4e48d1*/
    v55 = *((float *)a1 + 711) - *((float *)a1 + 711) * v7 * a2 * v50; /*0x4e4908*/
    *((float *)a1 + 711) = v55; /*0x4e490c*/
    if ( COERCE_FLOAT(LODWORD(v55) & v41) < 1.0 ) /*0x4e491a*/
      *((_BYTE *)a1 + 2840) = 0; /*0x4e491c*/
  }
  if ( *((_BYTE *)a1 + 2540) ) /*0x4e4936*/
  {
    *((double *)a1 + 352) = v4; /*0x4e493f*/
    goto LABEL_238; /*0x4e4948*/
  }
  v56 = *((_BYTE *)a1 + 2506); /*0x4e494d*/
  if ( v11 && !v56 ) /*0x4e495b*/
  {
    LOBYTE(v14) = 1; /*0x4e495d*/
LABEL_218:
    sub_4F2080(a1, v14); /*0x4e496c*/
    goto LABEL_219; /*0x4e496f*/
  }
  if ( v12 && v56 ) /*0x4e4968*/
  {
    v14 = 0; /*0x4e496a*/
    goto LABEL_218; /*0x4e496a*/
  }
LABEL_219:
  if ( v56 == *((_BYTE *)a1 + 2506) ) /*0x4e497a*/
    goto LABEL_238; /*0x4e497a*/
  PlayerObject_exitPlatformerAnimateJump(a1); /*0x4e4983*/
  if ( *((_BYTE *)a1 + 2497) || *((_BYTE *)a1 + 2498) ) /*0x4e4995*/
    goto LABEL_236; /*0x4e499c*/
  if ( *((_BYTE *)a1 + 2500) /*0x4e49e3*/
    || *((_BYTE *)a1 + 2508)
    || *((_BYTE *)a1 + 2499)
    || *((_BYTE *)a1 + 2501)
    || *((_BYTE *)a1 + 2502)
    || *((_BYTE *)a1 + 1840) )
  {
    if ( !*((_BYTE *)a1 + 2498) ) /*0x4e4a70*/
      goto LABEL_238; /*0x4e4a70*/
LABEL_236:
    v60 = *a1; /*0x4e4a72*/
    (*(void (__fastcall **)(__int64 *))(*a1 + 360))(a1); /*0x4e4a78*/
    goto LABEL_237; /*0x4e4a78*/
  }
  v57 = (*(double (__fastcall **)(__int64 *))(*a1 + 360))(a1); /*0x4e49f2*/
  v58 = *(float *)&v57; /*0x4e49f8*/
  if ( *((_BYTE *)a1 + 2488) ) /*0x4e49fb*/
    v58 = *(float *)&v57 - *((double *)a1 + 295) * 57.29578018188477; /*0x4e4a1c*/
  v59 = fabs(v58); /*0x4e4a20*/
  if ( v59 > 45.0 && v59 < 135.0 || v59 > 225.0 && v59 < 315.0 ) /*0x4e4a51*/
  {
    v60 = *a1; /*0x4e4a53*/
    (*(float (__fastcall **)(__int64 *))(*a1 + 360))(a1); /*0x4e4a59*/
LABEL_237:
    (*(void (__fastcall **)(__int64 *))(v60 + 352))(a1); /*0x4e4a82*/
  }
LABEL_238:
  if ( *((_BYTE *)a1 + 2497) /*0x4e4adc*/
    || *((_BYTE *)a1 + 2498)
    || *((_BYTE *)a1 + 2500)
    || *((_BYTE *)a1 + 2508)
    || *((_BYTE *)a1 + 2499)
    || *((_BYTE *)a1 + 2501)
    || *((_BYTE *)a1 + 2502) )
  {
    LOBYTE(v61) = 0; /*0x4e4b5e*/
  }
  else
  {
    LOBYTE(v61) = 1; /*0x4e4ae5*/
    if ( *((double *)a1 + 352) != 0.0 && !*((_BYTE *)a1 + 1840) && v39 && COERCE_DOUBLE(a1[309] & v51) > 1.0 ) /*0x4e4b19*/
    {
      if ( !*((_BYTE *)a1 + 2610) && !*((_BYTE *)a1 + 2540) ) /*0x4e4b24*/
      {
        *((_WORD *)a1 + 920) = 0; /*0x4e4b2d*/
        *((_BYTE *)a1 + 1648) = 0; /*0x4e4b36*/
        *((_DWORD *)a1 + 458) = 0; /*0x4e4b3d*/
        PlayerObject_runNormalRotation(a1, 0); /*0x4e4b4f*/
      }
      LOBYTE(v61) = PlayerObject_exitPlatformerAnimateJump(a1); /*0x4e4b57*/
      goto LABEL_262; /*0x4e4b5c*/
    }
  }
  if ( !*((_BYTE *)a1 + 2488) && !*((_BYTE *)a1 + 2489) ) /*0x4e4b69*/
  {
    if ( (_BYTE)v61 ) /*0x4e4b74*/
    {
      if ( !v39 && !*((_BYTE *)a1 + 2580) && !*((_BYTE *)a1 + 1840) ) /*0x4e4b84*/
      {
        v40 = (unsigned int)(int)(*(float (__fastcall **)(__int64 *))(*a1 + 360))(a1); /*0x4e4b99*/
        v61 = 90 * ((int)v40 / 90); /*0x4e4bb0*/
        if ( (_DWORD)v40 != v61 ) /*0x4e4bb5*/
        {
          PlayerObject_convertToClosestRotation(a1); /*0x4e4bbd*/
          LOBYTE(v61) = sub_4EAE50(a1); /*0x4e4bcc*/
        }
      }
    }
  }
LABEL_262:
  if ( v11 || v12 || !*((_BYTE *)a1 + 2580) ) /*0x4e4beb*/
  {
    *((float *)a1 + 748) = *((double *)a1 + 341); /*0x4e4d11*/
  }
  else if ( *((double *)a1 + 341) - *((float *)a1 + 748) > *((float *)a1 + 749) ) /*0x4e4c1e*/
  {
    v61 = rand(); /*0x4e4c24*/
    *((float *)a1 + 749) = (float)((float)((float)v61 / 32767.0) * 10.0) + 5.0; /*0x4e4c45*/
    *((float *)a1 + 748) = *((double *)a1 + 341); /*0x4e4c59*/
    if ( *((_BYTE *)a1 + 2501) ) /*0x4e4c61*/
    {
      *(_OWORD *)Block = 0; /*0x4e4c6d*/
      si128.m128i_i64[0] = 6; /*0x4e4c77*/
      si128.m128i_i64[1] = 15; /*0x4e4c7c*/
      strcpy((char *)Block, "idle02"); /*0x4e4c8b*/
      LOBYTE(v61) = CCAnimatedSprite_runAnimation(a1[277], Block); /*0x4e4cac*/
    }
    else if ( *((_BYTE *)a1 + 2502) ) /*0x4e4cb3*/
    {
      *(_OWORD *)Block = 0; /*0x4e4cbf*/
      si128.m128i_i64[0] = 6; /*0x4e4cc9*/
      si128.m128i_i64[1] = 15; /*0x4e4cce*/
      strcpy((char *)Block, "idle02"); /*0x4e4cdd*/
      LOBYTE(v61) = CCAnimatedSprite_runAnimation(a1[278], Block); /*0x4e4cfe*/
    }
  }
  if ( *((_BYTE *)a1 + 2499) && !*((_BYTE *)a1 + 1841) && !*((_BYTE *)a1 + 2540) ) /*0x4e4d33*/
  {
    v62 = *((double *)a1 + 352); /*0x4e4d59*/
    if ( !*((_BYTE *)a1 + 2864) ) /*0x4e4d6c*/
    {
LABEL_308:
      if ( *((_BYTE *)a1 + 2488) ) /*0x4e4f32*/
        cosf(*((double *)a1 + 295)); /*0x4e4f47*/
      v68 = *a1; /*0x4e4f57*/
      (*(void (__fastcall **)(__int64 *))(*a1 + 360))(a1); /*0x4e4f5d*/
      LOBYTE(v61) = (*(__int64 (__fastcall **)(__int64 *))(v68 + 352))(a1); /*0x4e4f75*/
      goto LABEL_311; /*0x4e4f75*/
    }
    if ( v62 < 0.0 && (v63 = *((float *)a1 + 634), v63 > 0.0) && v11 /*0x4e4dcd*/
      || v62 > 0.0 && (v63 = *((float *)a1 + 634), v63 < 0.0) && v12
      || (v64 = *((float *)a1 + 634), v65 = v64, v64 > 0.0) && (v63 = *((float *)a1 + 634), v62 > v65)
      || v64 < 0.0 && (v63 = *((float *)a1 + 634), v65 > v62) )
    {
      v66 = 0.2; /*0x4e4dcf*/
      v64 = v63; /*0x4e4dd7*/
    }
    else
    {
      v66 = 0.1; /*0x4e4ddc*/
    }
    if ( v64 <= 0.0 || *((double *)a1 + 352) <= v64 || !v12 ) /*0x4e4dfe*/
    {
      if ( v64 >= 0.0 || v64 <= *((double *)a1 + 352) ) /*0x4e4e11*/
      {
LABEL_294:
        if ( v11 ) /*0x4e4e23*/
          goto LABEL_305; /*0x4e4e23*/
        goto LABEL_295; /*0x4e4e23*/
      }
      if ( !v11 ) /*0x4e4e16*/
      {
LABEL_295:
        if ( v12 ) /*0x4e4e2c*/
          goto LABEL_304; /*0x4e4e2c*/
        if ( !*((_BYTE *)a1 + 2913) ) /*0x4e4e32*/
        {
          v67 = *((double *)a1 + 352); /*0x4e4e42*/
          if ( v64 <= v67 ) /*0x4e4e4e*/
          {
            if ( !*((_BYTE *)a1 + 2914) && v67 <= v64 ) /*0x4e4e66*/
            {
              if ( v64 <= 0.0 ) /*0x4e4e6c*/
              {
                if ( v64 < 0.0 ) /*0x4e4e8f*/
                {
                  v64 = fminf(-v64, (float)(a2 * v66) * 0.5) + v64; /*0x4e4eb0*/
                  *((float *)a1 + 634) = v64; /*0x4e4eb3*/
                }
                goto LABEL_307; /*0x4e4ebb*/
              }
              v64 = v64 - fminf(v64, (float)(a2 * v66) * 0.5); /*0x4e4e85*/
              goto LABEL_306; /*0x4e4e89*/
            }
LABEL_304:
            v64 = (float)(a2 * v66) + v64; /*0x4e4ebd*/
            *((float *)a1 + 634) = v64; /*0x4e4ecc*/
LABEL_307:
            *((float *)a1 + 634) = cocos2d::clampf((cocos2d *)v40, -5.0, 5.0, v64); /*0x4e4eea*/
            goto LABEL_308; /*0x4e4efe*/
          }
        }
LABEL_305:
        v64 = v64 - (float)(a2 * v66); /*0x4e4ed6*/
LABEL_306:
        *((float *)a1 + 634) = v64; /*0x4e4ee2*/
        goto LABEL_307; /*0x4e4ee2*/
      }
    }
    v66 = 0.30000001; /*0x4e4e18*/
    goto LABEL_294; /*0x4e4e18*/
  }
LABEL_311:
  if ( !*((_BYTE *)a1 + 2864) ) /*0x4e4f7b*/
    *((float *)a1 + 634) = *((double *)a1 + 352); /*0x4e4f90*/
  return v61; /*0x4e4f98*/
}

// [22/109] Address: 0x4e4ff0
// Method: PlayerObject::toggleVisibility
void __fastcall PlayerObject_toggleVisibility(__int64 *a1, unsigned __int8 a2)
{
  char v3; // di
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = a2 ^ 1; /*0x4e5005*/
  if ( *((_BYTE *)a1 + 1843) != (a2 ^ 1) ) /*0x4e5013*/
  {
    if ( a2 ) /*0x4e501b*/
    {
      v7 = *a1; /*0x4e50b1*/
      *((_BYTE *)a1 + 1843) = v3; /*0x4e50b4*/
      (*(void (**)(void))(v7 + 336))(); /*0x4e50bb*/
      if ( *((_BYTE *)a1 + 2497) || *((_BYTE *)a1 + 2498) || *((_BYTE *)a1 + 2500) || *((_BYTE *)a1 + 2508) ) /*0x4e50dc*/
      {
        sub_4E5190(a1); /*0x4e5114*/
        sub_4F9B40(a1); /*0x4e511c*/
        cocos2d::CCParticleSystem::resetSystem((cocos2d::CCParticleSystem *)a1[281]); /*0x4e5128*/
        if ( *((_BYTE *)a1 + 2500) ) /*0x4e512e*/
        {
          sub_4FA2B0(a1); /*0x4e5149*/
        }
        else if ( *((_BYTE *)a1 + 2497) ) /*0x4e514e*/
        {
          if ( !*((_BYTE *)a1 + 2936) ) /*0x4e5157*/
          {
            v9 = a1[246]; /*0x4e5160*/
            if ( v9 ) /*0x4e516a*/
            {
              LOBYTE(v8) = 1; /*0x4e516f*/
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 336LL))(v9, v8); /*0x4e5171*/
            }
          }
        }
      }
      else if ( *((_BYTE *)a1 + 2353) ) /*0x4e50e5*/
      {
        sub_4E5190(a1); /*0x4e50f5*/
        sub_4F9B40(a1); /*0x4e510c*/
      }
    }
    else
    {
      cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 11); /*0x4e5026*/
      v5 = *a1; /*0x4e502c*/
      *((_BYTE *)a1 + 1843) = v3; /*0x4e5036*/
      (*(void (__fastcall **)(__int64 *, _QWORD))(v5 + 336))(a1, a2); /*0x4e503d*/
      cocos2d::CCMotionStreak::stopStroke((cocos2d::CCMotionStreak *)a1[245]); /*0x4e504a*/
      if ( *((_BYTE *)a1 + 2432) != a2 ) /*0x4e5057*/
      {
        *((_BYTE *)a1 + 2432) = a2; /*0x4e5059*/
        sub_4F9CA0(a1); /*0x4e507e*/
      }
      v6 = a1[246]; /*0x4e5083*/
      if ( v6 ) /*0x4e508d*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 336LL))(v6, 0); /*0x4e5094*/
      PlayerObject_resetAllParticles(a1); /*0x4e50ac*/
    }
  }
}

// [23/109] Address: 0x4e5280
// Method: PlayerObject::levelWillFlip
void __fastcall PlayerObject_levelWillFlip(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 968LL))(*(_QWORD *)(a1 + 2248)); /*0x4e52a3*/
  cocos2d::CCMotionStreak::stopStroke(*(cocos2d::CCMotionStreak **)(a1 + 1960)); /*0x4e52b0*/
  if ( *(_BYTE *)(a1 + 2432) ) /*0x4e52b6*/
  {
    *(_BYTE *)(a1 + 2432) = 0; /*0x4e52c6*/
    sub_4F9CA0(a1); /*0x4e52df*/
  }
}

// [24/109] Address: 0x4e5300
// Method: PlayerObject::levelFlipFinished
__int64 __fastcall PlayerObject_levelFlipFinished(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 968LL))(*(_QWORD *)(a1 + 2248)); /*0x4e531b*/
  if ( *(_BYTE *)(a1 + 2497) || *(_BYTE *)(a1 + 2498) || *(_BYTE *)(a1 + 2500) || *(_BYTE *)(a1 + 2508) ) /*0x4e533c*/
  {
    sub_4E5190(a1); /*0x4e5366*/
    result = sub_4F9B40(a1); /*0x4e536e*/
    if ( *(_BYTE *)(a1 + 2500) ) /*0x4e5373*/
      return sub_4FA2B0(a1); /*0x4e5384*/
  }
  else if ( *(_BYTE *)(a1 + 2353) ) /*0x4e5345*/
  {
    sub_4E5190(a1); /*0x4e5351*/
    return sub_4F9B40(a1); /*0x4e535e*/
  }
  return result; /*0x4e5359*/
}

// [25/109] Address: 0x4e5390
// Method: PlayerObject::resetAllParticles
unsigned int __fastcall PlayerObject_resetAllParticles(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int result; // eax
  cocos2d::CCParticleSystem *v4; // rbx

  v2 = 0; /*0x4e539d*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1688)); /*0x4e53a6*/
  if ( result ) /*0x4e53ae*/
  {
    do /*0x4e53f5*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1688), v2); /*0x4e53d2*/
      cocos2d::CCParticleSystem::resetSystem(v4); /*0x4e53d5*/
      cocos2d::CCParticleSystem::stopSystem(v4); /*0x4e53de*/
      ++v2; /*0x4e53eb*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1688)); /*0x4e53ed*/
    }
    while ( v2 < result ); /*0x4e53f5*/
  }
  return result; /*0x4e53fc*/
}

// [26/109] Address: 0x4e5410
// Method: PlayerObject::stopParticles
void __fastcall PlayerObject_stopParticles(__int64 a1)
{
  cocos2d::CCParticleSystem *v2; // rcx

  if ( *(_BYTE *)(a1 + 2030) ) /*0x4e5416*/
    cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2240)); /*0x4e5429*/
  v2 = *(cocos2d::CCParticleSystem **)(a1 + 2248); /*0x4e542f*/
  *(_BYTE *)(a1 + 2030) = 0; /*0x4e5436*/
  cocos2d::CCParticleSystem::stopSystem(v2); /*0x4e543d*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2256)); /*0x4e544a*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2264)); /*0x4e5457*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2280)); /*0x4e5469*/
}

// [27/109] Address: 0x4e6780
// Method: PlayerObject::incrementJumps
// Hidden C++ exception states: #wind=1
void __fastcall PlayerObject_incrementJumps(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _DWORD *v4; // rdi
  int v5; // ebx
  float v6; // xmm0_4
  void *v7; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 2028) ) /*0x4e6792*/
  {
    v2 = qword_905FD0; /*0x4e679f*/
    if ( !qword_905FD0 ) /*0x4e67a9*/
    {
      v7 = operator new(0x6E8u); /*0x4e67b5*/
      qword_905FD0 = sub_2723A0(v7); /*0x4e67c3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4e67d4*/
      v2 = qword_905FD0; /*0x4e67d6*/
    }
    v3 = *(_QWORD *)(v2 + 560); /*0x4e67dd*/
    *(_BYTE *)(v3 + 15372) = 1; /*0x4e67e4*/
    ++*(_DWORD *)(v3 + 15376); /*0x4e67eb*/
    ++*(_DWORD *)(v3 + 15368); /*0x4e67f1*/
    v4 = *(_DWORD **)(v3 + 2168); /*0x4e67f7*/
    v5 = v4[220] - v4[221] + 1; /*0x4e680a*/
    v4[222] = v5; /*0x4e680c*/
    v6 = (float)((float)rand() / 32767.0) * 1000.0; /*0x4e6827*/
    v4[221] = (int)v6; /*0x4e6833*/
    v4[220] = v5 + (int)v6; /*0x4e683b*/
    *(_BYTE *)(a1 + 2704) = 1; /*0x4e6841*/
  }
}

// [28/109] Address: 0x4e6860
// Method: PlayerObject::animatePlatformerJump
struct cocos2d::CCAction *__fastcall PlayerObject_animatePlatformerJump(__int64 a1, float a2)
{
  struct cocos2d::CCAction *result; // rax
  int v4; // ebp
  unsigned __int32 v5; // xmm14_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  int v10; // eax
  struct cocos2d::CCActionInterval *v11; // rax
  struct cocos2d::CCFiniteTimeAction *v12; // rdi
  struct cocos2d::CCActionInterval *v13; // rax
  struct cocos2d::CCEaseInOut *v14; // rbx
  struct cocos2d::CCActionInterval *v15; // rax
  struct cocos2d::CCEaseInOut *v16; // rax
  struct cocos2d::CCAction *v17; // rbx
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  result = (struct cocos2d::CCAction *)&retaddr; /*0x4e6860*/
  if ( !*(_BYTE *)(a1 + 2825) /*0x4e68fa*/
    && !*(_BYTE *)(a1 + 2824)
    && !*(_BYTE *)(a1 + 2913)
    && !*(_BYTE *)(a1 + 2914)
    && !*(_BYTE *)(a1 + 2497)
    && !*(_BYTE *)(a1 + 2498)
    && !*(_BYTE *)(a1 + 2500)
    && !*(_BYTE *)(a1 + 2508)
    && !*(_BYTE *)(a1 + 2499)
    && !*(_BYTE *)(a1 + 2501)
    && !*(_BYTE *)(a1 + 2502) )
  {
    v4 = 0; /*0x4e6918*/
    v5 = _mm_load_si128((const __m128i *)&xmmword_831640).m128i_u32[0]; /*0x4e6960*/
    do /*0x4e6aa5*/
    {
      while ( 1 ) /*0x4e6986*/
      {
        v6 = 0.80000001; /*0x4e6986*/
        v7 = a2 * 1.35; /*0x4e698a*/
        v8 = 1.1; /*0x4e698e*/
        v9 = 0.89999998; /*0x4e6992*/
        v10 = (int)COERCE_FLOAT(COERCE_UNSIGNED_INT((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1)) & v5); /*0x4e69a0*/
        if ( v10 > 45 && v10 < 135 || (unsigned int)(v10 - 226) <= 0x58 ) /*0x4e69b8*/
        {
          v6 = a2 * 1.35; /*0x4e69ba*/
          v8 = 0.89999998; /*0x4e69bd*/
          v7 = 0.80000001; /*0x4e69c1*/
          v9 = 1.1; /*0x4e69c5*/
        }
        v11 = cocos2d::CCScaleTo::create(0.1 / *(float *)(a1 + 2956), v6, v7); /*0x4e69df*/
        v12 = cocos2d::CCEaseInOut::create(v11, 2.0); /*0x4e6a06*/
        v13 = cocos2d::CCScaleTo::create(0.25 / *(float *)(a1 + 2956), v8, v9); /*0x4e6a0d*/
        v14 = cocos2d::CCEaseInOut::create(v13, 2.0); /*0x4e6a28*/
        v15 = cocos2d::CCScaleTo::create(0.15000001 / *(float *)(a1 + 2956), 1.0, 1.0); /*0x4e6a3e*/
        v16 = cocos2d::CCEaseInOut::create(v15, 2.0); /*0x4e6a4b*/
        v17 = cocos2d::CCSequence::create(v12, v14, v16, 0); /*0x4e6a68*/
        (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v17 + 64LL))(v17, 13); /*0x4e6a75*/
        if ( v4 ) /*0x4e6a7d*/
          break; /*0x4e6a7d*/
        cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 1856), v17); /*0x4e6a86*/
        v4 = 1; /*0x4e6a8c*/
      }
      result = cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 1880), v17); /*0x4e6a9a*/
      ++v4; /*0x4e6aa0*/
    }
    while ( v4 < 2 ); /*0x4e6aa5*/
  }
  return result; /*0x4e6b03*/
}

// [29/109] Address: 0x4e6b20
// Method: PlayerObject::exitPlatformerAnimateJump
struct cocos2d::CCAction *__fastcall PlayerObject_exitPlatformerAnimateJump(__int64 a1)
{
  struct cocos2d::CCAction *result; // rax
  cocos2d::CCNode *v3; // rdi
  struct cocos2d::CCActionInterval *v4; // rax
  struct cocos2d::CCAction *v5; // rbx
  cocos2d::CCNode *v6; // rdi
  struct cocos2d::CCActionInterval *v7; // rax
  struct cocos2d::CCAction *v8; // rbx

  result = cocos2d::CCNode::getActionByTag(*(cocos2d::CCNode **)(a1 + 1856), 13); /*0x4e6b35*/
  if ( result ) /*0x4e6b3e*/
  {
    v3 = *(cocos2d::CCNode **)(a1 + 1856); /*0x4e6b59*/
    cocos2d::CCNode::stopActionByTag(v3, 13); /*0x4e6b63*/
    cocos2d::CCNode::stopActionByTag(v3, 14); /*0x4e6b71*/
    v4 = cocos2d::CCScaleTo::create(0.1, 1.0, 1.0); /*0x4e6b90*/
    v5 = cocos2d::CCEaseInOut::create(v4, 2.0); /*0x4e6baf*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v5 + 64LL))(v5, 14); /*0x4e6bb5*/
    cocos2d::CCNode::runAction(v3, v5); /*0x4e6bbf*/
    v6 = *(cocos2d::CCNode **)(a1 + 1880); /*0x4e6bc5*/
    cocos2d::CCNode::stopActionByTag(v6, 13); /*0x4e6bd4*/
    cocos2d::CCNode::stopActionByTag(v6, 14); /*0x4e6be2*/
    v7 = cocos2d::CCScaleTo::create(0.1, 1.0, 1.0); /*0x4e6bf8*/
    v8 = cocos2d::CCEaseInOut::create(v7, 2.0); /*0x4e6c17*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v8 + 64LL))(v8, 14); /*0x4e6c1d*/
    return cocos2d::CCNode::runAction(v6, v8); /*0x4e6c27*/
  }
  return result; /*0x4e6c3d*/
}

// [30/109] Address: 0x4e6ce0
// Method: PlayerObject::convertToClosestRotation
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall PlayerObject_convertToClosestRotation(_BYTE *a1, double a2)
{
  __int128 v2; // xmm6
  __int128 v3; // xmm3
  float v4; // xmm2_4

  v2 = *(_OWORD *)&a2; /*0x4e6cf0*/
  if ( a1[2497] || a1[2498] || a1[2500] || a1[2508] || a1[2501] || a1[2502] || a1[2540] ) /*0x4e6d3a*/
    return (__m128)v2; /*0x4e6d3a*/
  v3 = *(_OWORD *)&a2; /*0x4e6d55*/
  v4 = (float)((int)(*(float (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 360LL))(a1) % 360); /*0x4e6d76*/
  if ( *(float *)&a2 <= v4 ) /*0x4e6d7c*/
  {
    if ( v4 > *(float *)&a2 ) /*0x4e6da1*/
    {
      do /*0x4e6dba*/
      {
        v3 = v2; /*0x4e6db0*/
        *(float *)&v2 = *(float *)&v2 + 90.0; /*0x4e6db3*/
      }
      while ( v4 > *(float *)&v2 ); /*0x4e6dba*/
    }
  }
  else
  {
    do /*0x4e6d9a*/
    {
      v3 = v2; /*0x4e6d90*/
      *(float *)&v2 = *(float *)&v2 + -90.0; /*0x4e6d93*/
    }
    while ( *(float *)&v2 > v4 ); /*0x4e6d9a*/
  }
  if ( fabs(v4 - *(float *)&v3) > fabs(v4 - *(float *)&v2) ) /*0x4e6dd8*/
    return (__m128)v2; /*0x4e6de7*/
  else
    return (__m128)v3; /*0x4e6dda*/
}

// [31/109] Address: 0x4e6e00
// Method: PlayerObject::runNormalRotation
void __fastcall PlayerObject_runNormalRotation(__int64 a1, char a2, float a3)
{
  float v5; // xmm2_4
  bool v6; // zf
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // edx

  if ( a2 /*0x4e6e82*/
    || !*(_BYTE *)(a1 + 2497)
    && !*(_BYTE *)(a1 + 2498)
    && !*(_BYTE *)(a1 + 2500)
    && !*(_BYTE *)(a1 + 2508)
    && !*(_BYTE *)(a1 + 2501)
    && !*(_BYTE *)(a1 + 2502)
    && !*(_BYTE *)(a1 + 2540)
    && (!*(_BYTE *)(a1 + 2936)
     || *(_BYTE *)(a1 + 2825)
     || *(_BYTE *)(a1 + 2824)
     || *(_BYTE *)(a1 + 2913)
     || *(_BYTE *)(a1 + 2914)) )
  {
    if ( *(float *)(a1 + 2552) == 1.0 ) /*0x4e6e9f*/
      v5 = 0.43333334; /*0x4e6ea1*/
    else
      v5 = 0.33333334; /*0x4e6eab*/
    v6 = *(_BYTE *)(a1 + 2503) == 0; /*0x4e6eb3*/
    *(_BYTE *)(a1 + 1840) = 1; /*0x4e6ec5*/
    v7 = 1; /*0x4e6ecd*/
    v8 = -180; /*0x4e6ed2*/
    if ( v6 ) /*0x4e6ed7*/
      v8 = 180; /*0x4e6ed7*/
    v9 = -1; /*0x4e6ee2*/
    if ( !*(_BYTE *)(a1 + 2506) ) /*0x4e6eda*/
      v9 = 1; /*0x4e6ee5*/
    v10 = v9 * v8; /*0x4e6ee8*/
    if ( *(_BYTE *)(a1 + 2507) ) /*0x4e6eeb*/
      v7 = -1; /*0x4e6ef3*/
    *(float *)(a1 + 1832) = (float)((float)((float)((float)v10 * (float)v7) * *(float *)(a1 + 2956)) * a3) / v5; /*0x4e6f1a*/
  }
}

// [32/109] Address: 0x4e6f30
// Method: PlayerObject::runBallRotation
void __fastcall PlayerObject_runBallRotation(__int64 a1, float a2)
{
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  float v11; // xmm0_4

  if ( !*(_BYTE *)(a1 + 2540) && !*(_BYTE *)(a1 + 2936) ) /*0x4e6f40*/
  {
    v3 = 1.0; /*0x4e6f4d*/
    *(_BYTE *)(a1 + 1648) = a2 != 1.0; /*0x4e6f62*/
    v4 = *(float *)(a1 + 2552); /*0x4e6f68*/
    *(float *)(a1 + 1836) = a2; /*0x4e6f73*/
    if ( v4 == 1.0 ) /*0x4e6f7d*/
      v5 = 1.0; /*0x4e6f7f*/
    else
      v5 = 0.80000001; /*0x4e6f84*/
    v6 = *(float *)(a1 + 2556); /*0x4e6f8c*/
    if ( v6 == 0.69999999 ) /*0x4e6f9d*/
    {
      v3 = 1.2405638; /*0x4e6f9f*/
    }
    else if ( v6 == 1.1 ) /*0x4e6fb2*/
    {
      v3 = 0.80424345; /*0x4e6fb4*/
    }
    else if ( v6 == 1.3 ) /*0x4e6fc7*/
    {
      v3 = 0.66576928; /*0x4e6fc9*/
    }
    else if ( v6 == 1.6 ) /*0x4e6fdc*/
    {
      v3 = 0.54093748; /*0x4e6fde*/
    }
    v7 = v5 * 0.2; /*0x4e6ff2*/
    v8 = -120; /*0x4e6ffa*/
    if ( !*(_BYTE *)(a1 + 2503) ) /*0x4e6fe6*/
      v8 = 120; /*0x4e6fff*/
    v9 = -1; /*0x4e700f*/
    if ( !*(_BYTE *)(a1 + 2506) ) /*0x4e7008*/
      v9 = 1; /*0x4e7014*/
    v10 = *(_BYTE *)(a1 + 2507) == 0; /*0x4e701f*/
    v11 = (float)(v9 * v8) / (float)(v7 * v3); /*0x4e702d*/
    *(float *)(a1 + 1832) = v11; /*0x4e7031*/
    if ( !v10 ) /*0x4e7039*/
      *(float *)(a1 + 1832) = v11 * -1.0; /*0x4e7043*/
    *(_BYTE *)(a1 + 1840) = 1; /*0x4e704b*/
  }
}

// [33/109] Address: 0x4e7060
// Method: PlayerObject::runBallRotation2
void __fastcall PlayerObject_runBallRotation2(__int64 a1)
{
  float v2; // xmm3_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  int v5; // ecx
  int v6; // eax
  double v7; // xmm1_8

  if ( !*(_BYTE *)(a1 + 2540) ) /*0x4e7060*/
  {
    v2 = 1.0; /*0x4e7078*/
    if ( *(float *)(a1 + 2552) == 1.0 ) /*0x4e7085*/
      v3 = 1.0; /*0x4e7087*/
    else
      v3 = 0.80000001; /*0x4e708c*/
    v4 = *(float *)(a1 + 2556); /*0x4e7094*/
    if ( v4 == 0.69999999 ) /*0x4e70a5*/
    {
      v2 = 1.2405638; /*0x4e70a7*/
    }
    else if ( v4 == 1.1 ) /*0x4e70ba*/
    {
      v2 = 0.80424345; /*0x4e70bc*/
    }
    else if ( v4 == 1.3 ) /*0x4e70cf*/
    {
      v2 = 0.66576928; /*0x4e70d1*/
    }
    else if ( v4 == 1.6 ) /*0x4e70e4*/
    {
      v2 = 0.54093748; /*0x4e70e6*/
    }
    v5 = 340; /*0x4e7100*/
    if ( !*(_BYTE *)(a1 + 2503) ) /*0x4e70ee*/
      v5 = -340; /*0x4e7105*/
    *(_BYTE *)(a1 + 1841) = 1; /*0x4e7108*/
    v6 = -1; /*0x4e7116*/
    v7 = v3; /*0x4e711b*/
    if ( !*(_BYTE *)(a1 + 2506) ) /*0x4e710f*/
      v6 = 1; /*0x4e711e*/
    *(float *)(a1 + 1832) = (float)((float)(v6 * v5) * *(float *)(a1 + 2956)) / (v7 * 0.8 * v2); /*0x4e714e*/
  }
}

// [34/109] Address: 0x4e8d60
// Method: PlayerObject::handleRotatedCollisionInternal
__int64 __fastcall PlayerObject_handleRotatedCollisionInternal(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const struct cocos2d::CCRect *a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  const struct cocos2d::CCPoint *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  _QWORD *i; // rbx
  unsigned __int8 v14; // bp
  int v15; // eax
  int v16; // edx
  const struct cocos2d::CCPoint *v17; // rax
  float v18; // xmm2_4
  _QWORD *v19; // rsi
  _QWORD *j; // rbx
  float v22[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v23[8]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-38h] BYREF
  float v25; // [rsp+80h] [rbp+8h] BYREF
  float v26; // [rsp+84h] [rbp+Ch]

  v10 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1); /*0x4e8d8c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, v10); /*0x4e8d9d*/
  sub_4EAFA0(a1, a3); /*0x4e8da9*/
  v12 = (_QWORD *)a1[222]; /*0x4e8dae*/
  for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i ) /*0x4e8dbb*/
    sub_4EAFA0(a1, i[3]); /*0x4e8dc7*/
  v14 = 0; /*0x4e8dd4*/
  if ( a7 ) /*0x4e8ddf*/
  {
    sub_4E9430(a1, v11, a3, a6); /*0x4e8df3*/
  }
  else
  {
    v15 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v24, a4); /*0x4e8e02*/
    v14 = sub_4EB5F0((_DWORD)a1, v16, a3, v15, a5); /*0x4e8e25*/
  }
  v17 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1); /*0x4e8e35*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v22, v17); /*0x4e8e3f*/
  v18 = v26 - (float)(v22[0] - v25); /*0x4e8e73*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v23, (float)(v22[1] - v26) + v25, v18); /*0x4e8e8c*/
  (*(void (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 184LL))(a1, v23); /*0x4e8e9d*/
  PlayerObject_unrotateGameplayObject(a1, a3); /*0x4e8ea9*/
  v19 = (_QWORD *)a1[222]; /*0x4e8eae*/
  for ( j = (_QWORD *)*v19; j != v19; j = (_QWORD *)*j ) /*0x4e8ebb*/
    PlayerObject_unrotateGameplayObject(a1, j[3]); /*0x4e8ec7*/
  return v14; /*0x4e8ee6*/
}

// [35/109] Address: 0x4e8f00
// Method: PlayerObject::preSlopeCollision
char __fastcall PlayerObject_preSlopeCollision(__int64 a1, float a2, _DWORD *a3)
{
  const struct cocos2d::CCRect *v6; // rax
  const struct cocos2d::CCRect *v7; // rax
  unsigned int v8; // ecx
  char v9; // r14
  float v10; // xmm7_4
  bool v11; // bl
  int v12; // eax
  bool v13; // r15
  float v14; // xmm9_4
  __int64 v15; // rax
  float v16; // xmm2_4
  char v17; // al
  float v18; // xmm3_4
  float *v19; // rax
  float v20; // xmm1_4
  BOOL v21; // eax
  float v22; // xmm6_4
  int v23; // eax
  int v24; // edx
  float v25; // xmm1_4
  float v26; // xmm3_4
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // ecx
  float *v32; // rbx
  __int64 v33; // rcx
  int v34; // ecx
  float *v35; // rbx
  bool v36; // al
  char v37; // cl
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  int v41; // edx
  float v42; // [rsp+30h] [rbp-69h] BYREF
  float v43; // [rsp+34h] [rbp-65h]
  float v44; // [rsp+38h] [rbp-61h]
  float v45; // [rsp+3Ch] [rbp-5Dh]
  _BYTE v46[4]; // [rsp+40h] [rbp-59h] BYREF
  float v47; // [rsp+44h] [rbp-55h]
  float v48; // [rsp+4Ch] [rbp-4Dh]
  _BYTE v49[16]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v50[16]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v51[16]; // [rsp+70h] [rbp-29h] BYREF
  int v52; // [rsp+100h] [rbp+67h] BYREF
  float v53; // [rsp+110h] [rbp+77h] BYREF
  float v54; // [rsp+114h] [rbp+7Bh]

  if ( a3[231] == *(_DWORD *)(a1 + 1680) ) /*0x4e8f30*/
    return 0; /*0x4e8f34*/
  v6 = (const struct cocos2d::CCRect *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a3 + 1184LL))(a3); /*0x4e8f70*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v42, v6); /*0x4e8f7d*/
  v7 = (const struct cocos2d::CCRect *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1184LL))(a1); /*0x4e8f89*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v49, v7); /*0x4e8f96*/
  v8 = a3[273]; /*0x4e8f9c*/
  v9 = 0; /*0x4e8fa2*/
  v10 = 0.0; /*0x4e8fa5*/
  v11 = v8 == 2 || ((v8 - 3) & 0xFFFFFFFC) == 0 && v8 != 5; /*0x4e8fbc*/
  v13 = 0; /*0x4e8fd1*/
  if ( v8 <= 6 ) /*0x4e8fc5*/
  {
    v12 = 106; /*0x4e8fc7*/
    if ( _bittest(&v12, v8) ) /*0x4e8fcc*/
      v13 = 1; /*0x4e8fc5*/
  }
  if ( *(_BYTE *)(a1 + 2936) && (*(_BYTE *)(a1 + 2488) || *(_BYTE *)(a1 + 2489)) ) /*0x4e8ff4*/
    v14 = 5.0; /*0x4e8ffd*/
  else
    v14 = 0.0; /*0x4e9008*/
  v15 = (*(__int64 (__fastcall **)(_DWORD *, int *))(*(_QWORD *)a3 + 1208LL))(a3, &v52); /*0x4e9016*/
  cocos2d::CCPoint::operator-(v15, &v53, a3 + 308); /*0x4e902a*/
  if ( *(_BYTE *)(a1 + 2507) ) /*0x4e9030*/
    v16 = v54; /*0x4e9039*/
  else
    v16 = v53; /*0x4e9040*/
  v17 = *(_BYTE *)(a1 + 2506); /*0x4e9050*/
  v18 = *(float *)(a1 + 2556) * *(double *)(a1 + 1984) * a2; /*0x4e907a*/
  if ( v11 ) /*0x4e9080*/
  {
    if ( v17 && !*(_BYTE *)(a1 + 2936) && v18 <= v16 ) /*0x4e9092*/
      goto LABEL_40; /*0x4e9092*/
    v19 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4e909e*/
    v20 = v42; /*0x4e90a4*/
    if ( v42 <= *v19 ) /*0x4e90ac*/
      goto LABEL_40; /*0x4e90ac*/
    v9 = 1; /*0x4e90b9*/
    v21 = *(_BYTE *)(a1 + 2506) && !*(_BYTE *)(a1 + 2936); /*0x4e90cd*/
  }
  else
  {
    if ( !v17 && !*(_BYTE *)(a1 + 2936) && v16 <= v18 ) /*0x4e90e1*/
      goto LABEL_40; /*0x4e90e1*/
    v22 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4e90ff*/
    if ( v22 <= cocos2d::CCRect::getMaxX((cocos2d::CCRect *)&v42) ) /*0x4e9114*/
      goto LABEL_40; /*0x4e9114*/
    v9 = 1; /*0x4e9121*/
    v21 = !*(_BYTE *)(a1 + 2506) && !*(_BYTE *)(a1 + 2936); /*0x4e9135*/
    v20 = (float)(v44 + v42) - 1.0; /*0x4e9141*/
  }
  v10 = (float)v21; /*0x4e9153*/
  cocos2d::CCRect::CCRect( /*0x4e9178*/
    (cocos2d::CCRect *)v50,
    v20,
    (float)(v10 + v14) + v43,
    1.0,
    v45 - (float)((float)(v10 + v14) + (float)(v10 + v14)));
  if ( cocos2d::CCRect::intersectsRect((cocos2d::CCRect *)v49, (const struct cocos2d::CCRect *)v50) ) /*0x4e9186*/
  {
    v23 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v51, (const struct cocos2d::CCRect *)v50); /*0x4e9198*/
    sub_4EB5F0(a1, v24, (_DWORD)a3, v23, 0); /*0x4e91b0*/
  }
LABEL_40:
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v46); /*0x4e91b5*/
  v25 = v42 + v10; /*0x4e91e2*/
  v26 = v44 - (float)(v10 + v10); /*0x4e91f8*/
  if ( v13 ) /*0x4e91fc*/
  {
    v27 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v51, v25, (float)(v43 + v45) - 1.0, v26, 1.0); /*0x4e920c*/
    cocos2d::CCRect::operator=(v46, v27); /*0x4e9219*/
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4e9225*/
    if ( *(float *)(v28 + 4) < (float)(v48 + v47) ) /*0x4e923d*/
      goto LABEL_42; /*0x4e923d*/
LABEL_64:
    v9 = 1; /*0x4e93e6*/
    if ( cocos2d::CCRect::intersectsRect((cocos2d::CCRect *)v49, (const struct cocos2d::CCRect *)v46) ) /*0x4e93f2*/
    {
      v40 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v51, (const struct cocos2d::CCRect *)v46); /*0x4e9408*/
      sub_4EB5F0(a1, v41, (_DWORD)a3, v40, 0); /*0x4e9420*/
    }
    goto LABEL_60; /*0x4e9425*/
  }
  v38 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v51, v25, v43, v26, 1.0); /*0x4e93b3*/
  cocos2d::CCRect::operator=(v46, v38); /*0x4e93c0*/
  v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4e93cc*/
  if ( (float)(v48 + v47) >= *(float *)(v39 + 4) ) /*0x4e93e0*/
    goto LABEL_64; /*0x4e93e0*/
LABEL_42:
  if ( !v9 ) /*0x4e9246*/
  {
    *(_BYTE *)(a1 + 1649) = 0; /*0x4e924c*/
    if ( !*(_BYTE *)(a1 + 2488) ) /*0x4e9253*/
    {
      v52 = a3[231]; /*0x4e9271*/
      *(_QWORD *)(*(_QWORD *)sub_2A1A70(a1 + 1768, v51, &v52) + 24LL) = a3; /*0x4e9280*/
      v29 = *(_QWORD *)(a1 + 1656); /*0x4e9284*/
      if ( !v29 ) /*0x4e928e*/
        goto LABEL_59; /*0x4e928e*/
      if ( !*(_BYTE *)(v29 + 1088) /*0x4e92b5*/
        || (v30 = *(_DWORD *)(v29 + 1092), v30 == 1)
        || ((v30 - 3) & 0xFFFFFFFC) == 0 && v30 != 4 )
      {
        if ( !*((_BYTE *)a3 + 1088) || (v31 = a3[273], v31 == 1) || ((v31 - 3) & 0xFFFFFFFC) == 0 && v31 != 4 ) /*0x4e92d8*/
        {
          v32 = (float *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a3 + 200LL))(a3); /*0x4e92ed*/
          if ( *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1656) + 200LL))(*(_QWORD *)(a1 + 1656)) > *v32 ) /*0x4e9300*/
            goto LABEL_59; /*0x4e9300*/
        }
      }
      v33 = *(_QWORD *)(a1 + 1656); /*0x4e9302*/
      if ( *(_BYTE *)(v33 + 1088) ) /*0x4e9309*/
      {
        v34 = *(_DWORD *)(v33 + 1092); /*0x4e9312*/
        if ( v34 != 1 && (((v34 - 3) & 0xFFFFFFFC) != 0 || v34 == 4) ) /*0x4e932a*/
        {
          v35 = (float *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a3 + 200LL))(a3); /*0x4e933f*/
          if ( *v35 > *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1656) + 200LL))(*(_QWORD *)(a1 + 1656)) ) /*0x4e9352*/
LABEL_59:
            *(_QWORD *)(a1 + 1656) = a3; /*0x4e9354*/
        }
      }
    }
  }
LABEL_60:
  v36 = cocos2d::CCRect::intersectsRect((cocos2d::CCRect *)&v42, (const struct cocos2d::CCRect *)v49); /*0x4e935b*/
  v37 = v9; /*0x4e9384*/
  if ( !v36 ) /*0x4e9390*/
    return 1; /*0x4e9390*/
  return v37; /*0x4e939f*/
}

// [36/109] Address: 0x4ea7c0
// Method: PlayerObject::updateSlopeRotation
__int64 __fastcall PlayerObject_updateSlopeRotation(__int64 a1)
{
  PlayerObject_convertToClosestRotation((_BYTE *)a1, *(double *)(a1 + 2360) * 57.29578018188477); /*0x4ea7e5*/
  return sub_4EAE50(a1); /*0x4ea823*/
}

// [37/109] Address: 0x4eac30
// Method: PlayerObject::updateRotation
void __fastcall PlayerObject_updateRotation(__int64 *a1)
{
  double v2; // xmm1_8
  bool v3; // cf
  bool v4; // zf
  double v5; // rbx

  if ( !*((_BYTE *)a1 + 2610) && !*((_BYTE *)a1 + 2540) )
  {
    if ( !*((_BYTE *)a1 + 2499) )
    {
      if ( *((_BYTE *)a1 + 2488) )
      {
        PlayerObject_convertToClosestRotation(a1, *((double *)a1 + 295) * 57.29578018188477); /*0x4eac93*/
        sub_4EAE50(a1); /*0x4eacd1*/
      }
      else if ( *((_BYTE *)a1 + 2497) || *((_BYTE *)a1 + 2498) || *((_BYTE *)a1 + 2500) || *((_BYTE *)a1 + 2508) )
      {
        sub_4EA840(); /*0x4eadc0*/
      }
      else if ( *((_BYTE *)a1 + 2580)
             && ((v2 = *((double *)a1 + 309), *((_BYTE *)a1 + 2503))
               ? (v3 = v2 < 0.25, v4 = v2 == 0.25)
               : (v3 = v2 > -0.25, v4 = v2 == -0.25),
                 (v3 || v4) && !*((_BYTE *)a1 + 2489)) )
      {
        if ( !*((_BYTE *)a1 + 2936) || !*((_BYTE *)a1 + 1840) ) /*0x4ead56*/
        {
          *((_WORD *)a1 + 920) = 0; /*0x4ead61*/
          *((_BYTE *)a1 + 1648) = 0; /*0x4ead6a*/
          *((_DWORD *)a1 + 458) = 0; /*0x4ead71*/
          PlayerObject_convertToClosestRotation(a1, 0.0); /*0x4ead7b*/
          sub_4EAE50(a1); /*0x4ead89*/
        }
      }
      else if ( (*((_BYTE *)a1 + 2501) || *((_BYTE *)a1 + 2502)) && !*((_BYTE *)a1 + 2489) ) /*0x4eada2*/
      {
        sub_4EAE50(a1); /*0x4eadb9*/
      }
    }
    if ( *((float *)a1 + 458) != 0.0 ) /*0x4eadd4*/
    {
      v5 = *(double *)a1; /*0x4eadfd*/
      (*(void (__fastcall **)(__int64 *))(*a1 + 360))(a1); /*0x4eae03*/
      (*(void (__fastcall **)(__int64 *))(*(_QWORD *)&v5 + 352LL))(a1); /*0x4eae24*/
    }
  }
}

// [38/109] Address: 0x4eb270
// Method: PlayerObject::unrotateGameplayObject
void __fastcall PlayerObject_unrotateGameplayObject(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  double v11; // xmm1_8
  float v12; // xmm2_4
  float v13; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _BYTE v24[56]; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+60h] [rbp+8h] BYREF
  char v26; // [rsp+68h] [rbp+10h] BYREF

  v4 = *((unsigned int *)a2 + 231); /*0x4eb296*/
  v5 = 0; /*0x4eb29c*/
  v6 = a1[216]; /*0x4eb2c9*/
  v7 = *(_QWORD *)(v6 /*0x4eb2e5*/
                 + 16
                 * (a1[219]
                  & (0x100000001B3LL
                   * (((unsigned __int64)(unsigned int)v4 >> 24)
                    ^ (0x100000001B3LL
                     * (BYTE2(v4)
                      ^ (0x100000001B3LL
                       * (BYTE1(v4) ^ (0x100000001B3LL * ((unsigned __int8)v4 ^ 0xCBF29CE484222325uLL)))))))))
                 + 8);
  if ( v7 != a1[214] ) /*0x4eb2f1*/
  {
    v8 = *(_QWORD *)(v6 /*0x4eb2f3*/
                   + 16
                   * (a1[219]
                    & (0x100000001B3LL
                     * (((unsigned __int64)(unsigned int)v4 >> 24)
                      ^ (0x100000001B3LL
                       * (BYTE2(v4)
                        ^ (0x100000001B3LL
                         * (BYTE1(v4) ^ (0x100000001B3LL * ((unsigned __int8)v4 ^ 0xCBF29CE484222325uLL))))))))));
    if ( (_DWORD)v4 == *(_DWORD *)(v7 + 16) ) /*0x4eb2fa*/
      goto LABEL_7; /*0x4eb2fa*/
    while ( v7 != v8 ) /*0x4eb303*/
    {
      v7 = *(_QWORD *)(v7 + 8); /*0x4eb305*/
      if ( (_DWORD)v4 == *(_DWORD *)(v7 + 16) ) /*0x4eb30c*/
        goto LABEL_7; /*0x4eb30c*/
    }
  }
  v7 = 0; /*0x4eb310*/
LABEL_7:
  if ( v7 ) /*0x4eb316*/
  {
    LOBYTE(v4) = 1; /*0x4eb31f*/
    (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 1624))(a2, v4); /*0x4eb329*/
    v25 = *((_DWORD *)a2 + 231); /*0x4eb341*/
    v9 = sub_4FE070(a1 + 213, v24, &v25); /*0x4eb34a*/
    v10 = *(_QWORD *)v9; /*0x4eb357*/
    v11 = -*(double *)(*(_QWORD *)v9 + 32LL); /*0x4eb35f*/
    if ( !*((_BYTE *)a2 + 712) ) /*0x4eb362*/
      *((double *)a2 + 119) = *((double *)a2 + 119) - *(double *)(v10 + 24); /*0x4eb37b*/
    *((double *)a2 + 120) = v11 + *((double *)a2 + 120); /*0x4eb38e*/
    v12 = -*(double *)(v10 + 32); /*0x4eb3ab*/
    v13 = -*(double *)(v10 + 24); /*0x4eb3af*/
    v14 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, v13, v12); /*0x4eb3b3*/
    cocos2d::CCPoint::operator+(a2 + 154, &v25, v14); /*0x4eb3c8*/
    cocos2d::CCPoint::operator=(a2 + 154, &v25); /*0x4eb3da*/
    v15 = *a2; /*0x4eb3f3*/
    *((float *)a2 + 245) = *((float *)a2 + 245) + 90.0; /*0x4eb3f9*/
    *((float *)a2 + 246) = *((float *)a2 + 246) + 90.0; /*0x4eb411*/
    (*(void (__fastcall **)(__int64 *))(v15 + 1328))(a2); /*0x4eb419*/
    if ( (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 1648))(a2) == 25 ) /*0x4eb433*/
      GameObject_determineSlopeDirection(a2); /*0x4eb438*/
    v16 = *((_DWORD *)a2 + 231); /*0x4eb43d*/
    v17 = a1[214]; /*0x4eb444*/
    v18 = a1[216]; /*0x4eb479*/
    v19 = 2 /*0x4eb492*/
        * (a1[219]
         & (0x100000001B3LL
          * (((unsigned __int64)v16 >> 24)
           ^ (0x100000001B3LL
            * (BYTE2(v16)
             ^ (0x100000001B3LL * (BYTE1(v16) ^ (0x100000001B3LL * ((unsigned __int8)v16 ^ 0xCBF29CE484222325uLL)))))))));
    v20 = *(_QWORD *)(v18 /*0x4eb495*/
                    + 16
                    * (a1[219]
                     & (0x100000001B3LL
                      * (((unsigned __int64)v16 >> 24)
                       ^ (0x100000001B3LL
                        * (BYTE2(v16)
                         ^ (0x100000001B3LL
                          * (BYTE1(v16) ^ (0x100000001B3LL * ((unsigned __int8)v16 ^ 0xCBF29CE484222325uLL)))))))))
                    + 8);
    v21 = v20; /*0x4eb49a*/
    if ( v20 != v17 ) /*0x4eb4a0*/
    {
      if ( v16 == *(_DWORD *)(v20 + 16) ) /*0x4eb4aa*/
      {
LABEL_16:
        v5 = (_QWORD *)v21; /*0x4eb4bf*/
      }
      else
      {
        while ( v21 != *(_QWORD *)(v18 /*0x4eb4b3*/
                                 + 16
                                 * (a1[219]
                                  & (0x100000001B3LL
                                   * (((unsigned __int64)*((unsigned int *)a2 + 231) >> 24)
                                    ^ (0x100000001B3LL
                                     * ((unsigned __int8)BYTE2(*((_DWORD *)a2 + 231))
                                      ^ (0x100000001B3LL
                                       * ((unsigned __int8)BYTE1(*((_DWORD *)a2 + 231))
                                        ^ (0x100000001B3LL * ((unsigned __int8)v16 ^ 0xCBF29CE484222325uLL)))))))))) )
        {
          v21 = *(_QWORD *)(v21 + 8); /*0x4eb4b5*/
          if ( v16 == *(_DWORD *)(v21 + 16) ) /*0x4eb4bd*/
            goto LABEL_16; /*0x4eb4bd*/
        }
      }
    }
    if ( v5 ) /*0x4eb4c5*/
    {
      v22 = *(_QWORD **)(v18 /*0x4eb4c7*/
                       + 16
                       * (a1[219]
                        & (0x100000001B3LL
                         * (((unsigned __int64)*((unsigned int *)a2 + 231) >> 24)
                          ^ (0x100000001B3LL
                           * ((unsigned __int8)BYTE2(*((_DWORD *)a2 + 231))
                            ^ (0x100000001B3LL
                             * ((unsigned __int8)BYTE1(*((_DWORD *)a2 + 231))
                              ^ (0x100000001B3LL * ((unsigned __int8)v16 ^ 0xCBF29CE484222325uLL))))))))));
      if ( (_QWORD *)v20 == v5 ) /*0x4eb4ce*/
      {
        if ( v22 == v5 ) /*0x4eb4d3*/
          *(_QWORD *)(v18 /*0x4eb4d5*/
                    + 16
                    * (a1[219]
                     & (0x100000001B3LL
                      * (((unsigned __int64)*((unsigned int *)a2 + 231) >> 24)
                       ^ (0x100000001B3LL
                        * ((unsigned __int8)BYTE2(*((_DWORD *)a2 + 231))
                         ^ (0x100000001B3LL
                          * ((unsigned __int8)BYTE1(*((_DWORD *)a2 + 231))
                           ^ (0x100000001B3LL * ((unsigned __int8)v16 ^ 0xCBF29CE484222325uLL)))))))))) = v17;
        else
          v17 = v5[1]; /*0x4eb4e0*/
        *(_QWORD *)(v18 + 8 * v19 + 8) = v17; /*0x4eb4d9*/
      }
      else if ( v22 == v5 ) /*0x4eb4ee*/
      {
        *(_QWORD *)(v18 /*0x4eb4f3*/
                  + 16
                  * (a1[219]
                   & (0x100000001B3LL
                    * (((unsigned __int64)*((unsigned int *)a2 + 231) >> 24)
                     ^ (0x100000001B3LL
                      * ((unsigned __int8)BYTE2(*((_DWORD *)a2 + 231))
                       ^ (0x100000001B3LL
                        * ((unsigned __int8)BYTE1(*((_DWORD *)a2 + 231))
                         ^ (0x100000001B3LL * ((unsigned __int8)v16 ^ 0xCBF29CE484222325uLL)))))))))) = *v5;
      }
      v23 = *v5; /*0x4eb4f7*/
      --a1[215]; /*0x4eb4fd*/
      *(_QWORD *)v5[1] = v23; /*0x4eb508*/
      *(_QWORD *)(v23 + 8) = v5[1]; /*0x4eb50f*/
      j_j_free(v5); /*0x4eb518*/
    }
  }
}

// [39/109] Address: 0x4eb530
// Method: PlayerObject::collidedWithObject
__int64 __fastcall PlayerObject_collidedWithObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct cocos2d::CCRect *a4,
        char a5)
{
  const struct cocos2d::CCRect *v7; // rax
  const struct cocos2d::CCRect *v8; // rax
  __int64 v9; // rdx
  int v11; // eax
  int v12; // edx
  _BYTE v13[16]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 2507) ) /*0x4eb53a*/
  {
    v7 = (const struct cocos2d::CCRect *)cocos2d::CCRect::CCRect((cocos2d::CCRect *)v13, a4); /*0x4eb559*/
    v8 = (const struct cocos2d::CCRect *)cocos2d::CCRect::CCRect((cocos2d::CCRect *)v14, v7); /*0x4eb567*/
    return PlayerObject_handleRotatedCollisionInternal((_QWORD *)a1, v9, a3, v8, a5, 0, 0); /*0x4eb58f*/
  }
  else
  {
    v11 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v14, a4); /*0x4eb5ac*/
    return sub_4EB5F0(a1, v12, a3, v11, a5); /*0x4eb5ca*/
  }
}

// [40/109] Address: 0x4ed6d0
// Method: PlayerObject::didHitHead
void __fastcall PlayerObject_didHitHead(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  bool v5; // cc

  if ( *(int *)(a1 + 2952) > 0 ) /*0x4ed6e0*/
  {
    LOBYTE(a3) = 1; /*0x4ed6e9*/
    LOBYTE(a2) = *(_BYTE *)(a1 + 2503) == 0; /*0x4ed6ec*/
    PlayerObject_flipGravity(a1, a2, a3); /*0x4ed6ef*/
    v4 = 2; /*0x4ed6fb*/
    if ( !*(_BYTE *)(a1 + 2503) ) /*0x4ed6f4*/
      v4 = -2; /*0x4ed705*/
    PlayerObject_setYVelocity(a1, (double)v4); /*0x4ed713*/
    v5 = *(_DWORD *)(a1 + 2940) <= 0; /*0x4ed718*/
    *(_BYTE *)(a1 + 2596) = 1; /*0x4ed71f*/
    *(_BYTE *)(a1 + 2580) = 0; /*0x4ed726*/
    if ( !v5 ) /*0x4ed72d*/
    {
      *(_BYTE *)(a1 + 2505) = 0; /*0x4ed72f*/
      *(_WORD *)(a1 + 2445) = 0; /*0x4ed736*/
    }
  }
}

// [41/109] Address: 0x4ed750
// Method: PlayerObject::checkSnapJumpToObject
void __fastcall PlayerObject_checkSnapJumpToObject(__int64 *a1, _DWORD *a2)
{
  _DWORD *v3; // rcx
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm7_4
  int v10; // ecx
  __int32 v11; // xmm5_4
  int v12; // eax
  int v13; // eax
  double v14; // xmm6_8
  double v15; // xmm2_8
  double v16; // xmm1_8
  double v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  float *v20; // rbx
  float v21; // [rsp+88h] [rbp+10h] BYREF
  float v22; // [rsp+8Ch] [rbp+14h]
  float v23; // [rsp+90h] [rbp+18h] BYREF
  float v24; // [rsp+94h] [rbp+1Ch]
  char v25; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 ) /*0x4ed753*/
  {
    v3 = (_DWORD *)a1[274]; /*0x4ed767*/
    if ( !v3 || v3[231] == a2[231] || (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 1648LL))(v3) ) /*0x4ed78f*/
    {
LABEL_32:
      a1[274] = (__int64)a2; /*0x4eda43*/
      v20 = (float *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 200LL))(a2); /*0x4eda59*/
      *((double *)a1 + 264) = (float)(*(float *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 200))(a1) - *v20); /*0x4eda78*/
      return; /*0x4eda78*/
    }
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)a1[274] + 1208LL))(a1[274], &v21); /*0x4ed7c5*/
    (*(void (__fastcall **)(_DWORD *, float *))(*(_QWORD *)a2 + 1208LL))(a2, &v23); /*0x4ed7d9*/
    v5 = *((float *)a1 + 639); /*0x4ed7df*/
    v6 = 120.0; /*0x4ed7fe*/
    v7 = 90.0; /*0x4ed809*/
    v8 = 150.0; /*0x4ed80d*/
    v9 = 1.0; /*0x4ed816*/
    if ( v5 != 0.89999998 ) /*0x4ed81b*/
    {
      if ( v5 == 0.69999999 ) /*0x4ed826*/
      {
        v7 = 60.0; /*0x4ed828*/
        v8 = 120.0; /*0x4ed831*/
LABEL_14:
        v6 = 90.0; /*0x4ed891*/
LABEL_15:
        v10 = -1; /*0x4ed894*/
        v11 = _mm_load_si128((const __m128i *)&xmmword_831640).m128i_i32[0]; /*0x4ed8ae*/
        if ( v9 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - (float)(v21 + v6)) & v11) ) /*0x4ed8dd*/
        {
          v12 = -1; /*0x4ed8e9*/
          if ( !*((_BYTE *)a1 + 2503) ) /*0x4ed8df*/
            v12 = 1; /*0x4ed8eb*/
          if ( v9 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - (float)((float)((float)v12 * 30.0) + v22)) & v11) ) /*0x4ed90c*/
            goto LABEL_27; /*0x4ed90c*/
        }
        if ( v9 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - (float)(v21 + v8)) & v11) ) /*0x4ed927*/
        {
          v13 = -1; /*0x4ed930*/
          if ( !*((_BYTE *)a1 + 2503) ) /*0x4ed929*/
            v13 = 1; /*0x4ed93b*/
          if ( v9 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - (float)(v22 - (float)((float)v13 * 30.0))) & v11) ) /*0x4ed95a*/
            goto LABEL_27; /*0x4ed95a*/
        }
        if ( v9 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - (float)(v21 + v7)) & v11) ) /*0x4ed96b*/
        {
          if ( !*((_BYTE *)a1 + 2503) ) /*0x4ed971*/
            v10 = 1; /*0x4ed978*/
          if ( v9 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - (float)((float)((float)v10 * 60.0) + v22)) & v11) ) /*0x4ed99d*/
          {
LABEL_27:
            v14 = *(float *)(*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a2 + 200LL))(a2, 1) /*0x4ed9bc*/
                + *((double *)a1 + 264);
            v15 = v9; /*0x4ed9cd*/
            v16 = *(float *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 200))(a1); /*0x4ed9d4*/
            if ( v9 < fabs(v14 - v16) ) /*0x4ed9e6*/
            {
              if ( v14 <= v16 ) /*0x4ed9ec*/
                v14 = v16 - v15; /*0x4ed9fa*/
              else
                v14 = v15 + v16; /*0x4ed9f1*/
            }
            v17 = *(double *)a1; /*0x4ed9fe*/
            v18 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 200))(a1); /*0x4eda04*/
            v19 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, v14, *(float *)(v18 + 4)); /*0x4eda1b*/
            (*(void (__fastcall **)(__int64 *, __int64))(*(_QWORD *)&v17 + 184LL))(a1, v19); /*0x4eda27*/
          }
        }
        goto LABEL_32; /*0x4eda27*/
      }
      if ( v5 == 1.1 ) /*0x4ed840*/
      {
        v6 = 150.0; /*0x4ed842*/
        v7 = 120.0; /*0x4ed846*/
        v8 = 195.0; /*0x4ed84a*/
      }
      else
      {
        if ( v5 != 1.3 ) /*0x4ed85e*/
          goto LABEL_15; /*0x4ed85e*/
        v6 = 180.0; /*0x4ed860*/
        v8 = 225.0; /*0x4ed868*/
        v7 = 135.0; /*0x4ed871*/
      }
      v9 = 2.0; /*0x4ed87a*/
    }
    if ( *((float *)a1 + 638) == 1.0 ) /*0x4ed88f*/
      goto LABEL_15; /*0x4ed88f*/
    goto LABEL_14; /*0x4ed88f*/
  }
}

// [42/109] Address: 0x4eda90
// Method: PlayerObject::updateCollide
void __fastcall PlayerObject_updateCollide(__int64 a1, int a2, __int64 a3)
{
  float v6; // xmm8_4
  int v7; // edi
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edi
  float v12; // xmm2_4
  int v13; // eax
  double v14; // xmm1_8
  double v15; // xmm2_8
  double v16; // xmm1_8
  cocos2d::CCDictionary *v17; // rcx
  int v18; // edi
  float v19; // xmm0_4
  double v20; // xmm1_8
  double v21; // xmm2_8
  double v22; // xmm1_8

  v6 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1184LL))(a1) + 12) * 0.5; /*0x4edac7*/
  (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1184LL))(a1); /*0x4edad0*/
  if ( a2 ) /*0x4edae5*/
  {
    v7 = a2 - 1; /*0x4edaeb*/
    if ( v7 ) /*0x4edaee*/
    {
      v8 = v7 - 1; /*0x4edaf0*/
      if ( v8 ) /*0x4edaf3*/
      {
        if ( v8 == 1 ) /*0x4edaf8*/
        {
          (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4edb04*/
          PlayerObject_updateCollideRight(a1, v9, a3); /*0x4edb17*/
        }
      }
      else
      {
        (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4edb27*/
        PlayerObject_updateCollideLeft(a1, v10, a3); /*0x4edb3b*/
      }
      return; /*0x4edb1c*/
    }
    v11 = -1; /*0x4edb51*/
    if ( !*(_BYTE *)(a1 + 2503) ) /*0x4edb45*/
      v11 = 1; /*0x4edb59*/
    v12 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1) + 4) - (float)((float)v11 * v6); /*0x4edb76*/
    if ( a3 ) /*0x4edb7d*/
      v13 = *(_DWORD *)(a3 + 924); /*0x4edb7f*/
    else
      v13 = 0; /*0x4edb87*/
    v14 = *(double *)(a1 + 2408); /*0x4edb89*/
    v15 = v12; /*0x4edb98*/
    if ( v14 != 0.0 ) /*0x4edb9d*/
    {
      if ( *(_BYTE *)(a1 + 2503) ) /*0x4edb9f*/
        v16 = fmin(v14, v15); /*0x4edbae*/
      else
        v16 = fmax(v14, v15); /*0x4edba8*/
      v15 = v16; /*0x4edbb2*/
    }
    *(double *)(a1 + 2408) = v15; /*0x4edbb5*/
    if ( v13 && v13 != *(_DWORD *)(a1 + 1488) ) /*0x4edbcb*/
    {
      v17 = *(cocos2d::CCDictionary **)(a1 + 1464); /*0x4edbd1*/
      *(_DWORD *)(a1 + 1488) = v13; /*0x4edbd8*/
      goto LABEL_33; /*0x4edbde*/
    }
  }
  else
  {
    v18 = -1; /*0x4edbef*/
    if ( !*(_BYTE *)(a1 + 2503) ) /*0x4edbe3*/
      v18 = 1; /*0x4edbf7*/
    v19 = (float)((float)v18 * v6) + *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1) + 4); /*0x4edc0f*/
    if ( a3 ) /*0x4edc17*/
      v13 = *(_DWORD *)(a3 + 924); /*0x4edc19*/
    else
      v13 = 0; /*0x4edc21*/
    v20 = *(double *)(a1 + 2400); /*0x4edc23*/
    v21 = v19; /*0x4edc2b*/
    if ( v20 != 0.0 ) /*0x4edc37*/
    {
      if ( *(_BYTE *)(a1 + 2503) ) /*0x4edc39*/
        v22 = fmax(v20, v21); /*0x4edc48*/
      else
        v22 = fmin(v20, v21); /*0x4edc42*/
      v21 = v22; /*0x4edc4c*/
    }
    *(double *)(a1 + 2400) = v21; /*0x4edc4f*/
    if ( v13 && v13 != *(_DWORD *)(a1 + 1492) ) /*0x4edc61*/
    {
      v17 = *(cocos2d::CCDictionary **)(a1 + 1456); /*0x4edc63*/
      *(_DWORD *)(a1 + 1492) = v13; /*0x4edc6a*/
LABEL_33:
      if ( v17 ) /*0x4edc73*/
        cocos2d::CCDictionary::setObject(v17, *(struct cocos2d::CCObject **)(a1 + 1448), v13); /*0x4edc7f*/
    }
  }
}

// [43/109] Address: 0x4edca0
// Method: PlayerObject::updateCollideLeft
void __fastcall PlayerObject_updateCollideLeft(__int64 a1, float a2, __int64 a3)
{
  int v6; // eax
  double v7; // xmm1_8
  double v8; // xmm2_8
  cocos2d::CCDictionary *v9; // rcx

  if ( a3 ) /*0x4edcb6*/
    v6 = *(_DWORD *)(a3 + 924); /*0x4edcb8*/
  else
    v6 = 0; /*0x4edcc1*/
  v7 = *(double *)(a1 + 2416); /*0x4edcc3*/
  v8 = a2; /*0x4edcce*/
  if ( v7 != 0.0 ) /*0x4edcdb*/
    v8 = fmax(v7, v8); /*0x4edce1*/
  *(double *)(a1 + 2416) = v8; /*0x4edce4*/
  if ( v6 ) /*0x4edcee*/
  {
    if ( v6 != *(_DWORD *)(a1 + 1496) ) /*0x4edcf6*/
    {
      *(_DWORD *)(a1 + 1496) = v6; /*0x4edcf8*/
      v9 = *(cocos2d::CCDictionary **)(a1 + 1472); /*0x4edcfe*/
      if ( v9 ) /*0x4edd08*/
        cocos2d::CCDictionary::setObject(v9, *(struct cocos2d::CCObject **)(a1 + 1448), v6); /*0x4edd14*/
    }
    *(_QWORD *)(a1 + 1552) = a3; /*0x4edd1a*/
    *(_QWORD *)(a1 + 1560) = 0; /*0x4edd21*/
  }
}

// [44/109] Address: 0x4edd40
// Method: PlayerObject::updateCollideRight
void __fastcall PlayerObject_updateCollideRight(__int64 a1, float a2, __int64 a3)
{
  int v6; // eax
  double v7; // xmm1_8
  double v8; // xmm2_8
  cocos2d::CCDictionary *v9; // rcx

  if ( a3 ) /*0x4edd56*/
    v6 = *(_DWORD *)(a3 + 924); /*0x4edd58*/
  else
    v6 = 0; /*0x4edd61*/
  v7 = *(double *)(a1 + 2424); /*0x4edd63*/
  v8 = a2; /*0x4edd6e*/
  if ( v7 != 0.0 ) /*0x4edd7b*/
    v8 = fmin(v7, v8); /*0x4edd81*/
  *(double *)(a1 + 2424) = v8; /*0x4edd84*/
  if ( v6 ) /*0x4edd8e*/
  {
    if ( v6 != *(_DWORD *)(a1 + 1500) ) /*0x4edd96*/
    {
      *(_DWORD *)(a1 + 1500) = v6; /*0x4edd98*/
      v9 = *(cocos2d::CCDictionary **)(a1 + 1480); /*0x4edd9e*/
      if ( v9 ) /*0x4edda8*/
        cocos2d::CCDictionary::setObject(v9, *(struct cocos2d::CCObject **)(a1 + 1448), v6); /*0x4eddb4*/
    }
    *(_QWORD *)(a1 + 1560) = a3; /*0x4eddba*/
    *(_QWORD *)(a1 + 1552) = 0; /*0x4eddc1*/
  }
}

// [45/109] Address: 0x4edde0
// Method: PlayerObject::spiderTestJump
__int64 __fastcall PlayerObject_spiderTestJump(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = PlayerObject_spiderTestJumpInternal(a1, 0); /*0x4eddeb*/
  v3 = *(_QWORD *)(a1 + 3112); /*0x4eddf0*/
  if ( v3 ) /*0x4eddfa*/
    result = sub_337190(v3, 18, 0, *(unsigned int *)(a1 + 924)); /*0x4ede0b*/
  if ( !*(_BYTE *)(a1 + 2497) /*0x4ede3d*/
    && !*(_BYTE *)(a1 + 2498)
    && !*(_BYTE *)(a1 + 2500)
    && !*(_BYTE *)(a1 + 2508)
    && !*(_BYTE *)(a1 + 2499)
    && !*(_BYTE *)(a1 + 2502) )
  {
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4ede82*/
  }
  return result; /*0x4ede89*/
}

// [47/109] Address: 0x4eec10
// Method: PlayerObject::playSpiderDashEffect
// Hidden C++ exception states: #wind=8
void __fastcall PlayerObject_playSpiderDashEffect(__int64 a1, float *a2, float *a3)
{
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  struct cocos2d::CCActionInterval *v34; // rax
  struct cocos2d::CCAction *v35; // rbx
  cocos2d::CCNode *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rbx
  void (__fastcall *v39)(cocos2d::CCNode *, __int64); // rbx
  float v40; // xmm2_4
  float v41; // xmm1_4
  __int64 v42; // rax
  __int64 v43; // rdx
  cocos2d::CCArray *v44; // rbp
  cocos2d::CCString *v45; // rax
  const char *CString; // rbx
  cocos2d::CCSpriteFrameCache *v47; // rax
  struct cocos2d::CCObject *v48; // rax
  struct cocos2d::CCAnimation *v49; // rax
  struct cocos2d::CCFiniteTimeAction *v50; // rbx
  __int64 v51; // rax
  struct cocos2d::CCAction *v52; // rax
  __int64 v53; // [rsp+80h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 2028) && !*(_BYTE *)(a1 + 1843) ) /*0x4eec54*/
  {
    v6 = -1; /*0x4eec61*/
    v7 = -1; /*0x4eec66*/
    v8 = 1; /*0x4eec68*/
    if ( !*(_BYTE *)(a1 + 2506) ) /*0x4eec6d*/
      v7 = 1; /*0x4eec74*/
    *a2 = (float)((float)v7 * 7.5) + *a2; /*0x4eec8a*/
    if ( !*(_BYTE *)(a1 + 2506) ) /*0x4eec8e*/
      v6 = 1; /*0x4eec95*/
    *a3 = (float)((float)v6 * 7.5) + *a3; /*0x4eecac*/
    v9 = qword_905FD0; /*0x4eecb1*/
    if ( !qword_905FD0 ) /*0x4eecbb*/
    {
      v53 = (__int64)operator new(0x6E8u); /*0x4eecc7*/
      qword_905FD0 = sub_2723A0(v53); /*0x4eecd8*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4eece9*/
      v9 = qword_905FD0; /*0x4eeceb*/
    }
    if ( !*(_BYTE *)(v9 + 957) ) /*0x4eecf2*/
    {
      *a3 = *a3 + 6.0; /*0x4eed0c*/
      v10 = CCCircleWave_create(v6, (_DWORD)a2, (_DWORD)a3, 0, 0); /*0x4eed49*/
      v11 = v10; /*0x4eed4e*/
      if ( *(_BYTE *)(a1 + 2753) ) /*0x4eed51*/
        v12 = a1 + 2706; /*0x4eed5a*/
      else
        v12 = a1 + 2709; /*0x4eed6d*/
      v13 = a1 + 2706; /*0x4eed61*/
      *(_WORD *)(v10 + 340) = *(_WORD *)v12; /*0x4eed81*/
      *(_BYTE *)(v10 + 342) = *(_BYTE *)(v12 + 2); /*0x4eed8c*/
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v10 + 184LL))(v10, a2); /*0x4eed9b*/
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4eedb1*/
        *(_QWORD *)(a1 + 3120),
        v11,
        0);
      v14 = qword_905FD0; /*0x4eedb7*/
      if ( !qword_905FD0 ) /*0x4eedc1*/
      {
        v53 = (__int64)operator new(0x6E8u); /*0x4eedcd*/
        qword_905FD0 = sub_2723A0(v53); /*0x4eedde*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4eedef*/
        v14 = qword_905FD0; /*0x4eedf1*/
      }
      v15 = *(_QWORD *)(v14 + 560); /*0x4eedf8*/
      v16 = v15 + 14712; /*0x4eedff*/
      if ( !v15 ) /*0x4eee0c*/
        v16 = 0; /*0x4eee0c*/
      *(_QWORD *)(v11 + 368) = v16; /*0x4eee10*/
      cocos2d::CCArray::addObject( /*0x4eee28*/
        *(cocos2d::CCArray **)(*(_QWORD *)(v14 + 560) + 15016LL),
        (struct cocos2d::CCObject *)v11);
      *(_DWORD *)(v11 + 360) = 1054280254; /*0x4eee2e*/
      v20 = CCCircleWave_create(v18, v17, v19, 0, 0); /*0x4eee67*/
      v21 = v20; /*0x4eee6c*/
      v22 = a1 + 2706; /*0x4eee6f*/
      if ( !*(_BYTE *)(a1 + 2753) ) /*0x4eee72*/
        v22 = a1 + 2709; /*0x4eee79*/
      *(_WORD *)(v20 + 340) = *(_WORD *)v22; /*0x4eee80*/
      *(_BYTE *)(v20 + 342) = *(_BYTE *)(v22 + 2); /*0x4eee8b*/
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v20 + 184LL))(v20, a3); /*0x4eeea1*/
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4eeeb4*/
        *(_QWORD *)(a1 + 3120),
        v21,
        0);
      v23 = qword_905FD0; /*0x4eeeba*/
      if ( !qword_905FD0 ) /*0x4eeec4*/
      {
        v53 = (__int64)operator new(0x6E8u); /*0x4eeed0*/
        qword_905FD0 = sub_2723A0(v53); /*0x4eeee1*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4eeef2*/
        v23 = qword_905FD0; /*0x4eeef4*/
      }
      v24 = *(_QWORD *)(v23 + 560); /*0x4eeefb*/
      v25 = v24 + 14712; /*0x4eef02*/
      if ( !v24 ) /*0x4eef11*/
        v25 = 0; /*0x4eef11*/
      *(_QWORD *)(v21 + 368) = v25; /*0x4eef15*/
      cocos2d::CCArray::addObject( /*0x4eef2d*/
        *(cocos2d::CCArray **)(*(_QWORD *)(v23 + 560) + 15016LL),
        (struct cocos2d::CCObject *)v21);
      *(_DWORD *)(v21 + 360) = 1062668862; /*0x4eef33*/
      v29 = CCCircleWave_create(v27, v26, v28, 0, 0); /*0x4eef67*/
      v30 = v29; /*0x4eef6c*/
      if ( !*(_BYTE *)(a1 + 2753) ) /*0x4eef6f*/
        v13 = a1 + 2709; /*0x4eef76*/
      *(_WORD *)(v29 + 340) = *(_WORD *)v13; /*0x4eef7e*/
      *(_BYTE *)(v29 + 342) = *(_BYTE *)(v13 + 2); /*0x4eef8a*/
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v29 + 184LL))(v29, a3); /*0x4eefa0*/
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4eefb3*/
        *(_QWORD *)(a1 + 3120),
        v30,
        0);
      v31 = qword_905FD0; /*0x4eefb9*/
      if ( !qword_905FD0 ) /*0x4eefc3*/
      {
        v53 = (__int64)operator new(0x6E8u); /*0x4eefcf*/
        qword_905FD0 = sub_2723A0(v53); /*0x4eefe0*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4eeff1*/
        v31 = qword_905FD0; /*0x4eeff3*/
      }
      v32 = *(_QWORD *)(v31 + 560); /*0x4eeffa*/
      v33 = v32 + 14712; /*0x4ef001*/
      if ( !v32 ) /*0x4ef010*/
        v33 = 0; /*0x4ef010*/
      *(_QWORD *)(v30 + 368) = v33; /*0x4ef014*/
      cocos2d::CCArray::addObject( /*0x4ef02c*/
        *(cocos2d::CCArray **)(*(_QWORD *)(v31 + 560) + 15016LL),
        (struct cocos2d::CCObject *)v30);
      *(_DWORD *)(v30 + 352) = 1; /*0x4ef032*/
    }
    *(_WORD *)(a1 + 2080) = -1; /*0x4ef04e*/
    *(_BYTE *)(a1 + 2082) = -1; /*0x4ef059*/
    *(_WORD *)(a1 + 2083) = -1; /*0x4ef05c*/
    *(_BYTE *)(a1 + 2085) = -1; /*0x4ef064*/
    (**(void (__fastcall ***)(__int64))(a1 + 320))(a1 + 320); /*0x4ef074*/
    PlayerObject_setSecondColor(a1, a1 + 2083); /*0x4ef080*/
    *(_QWORD *)(a1 + 2064) = *(_QWORD *)(a1 + 2728); /*0x4ef08c*/
    *(_DWORD *)(a1 + 2072) = 1050253722; /*0x4ef093*/
    *(_DWORD *)(a1 + 2076) = 1028443341; /*0x4ef09d*/
    cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(a1 + 2224), 10); /*0x4ef0b3*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2224) + 160LL))(*(_QWORD *)(a1 + 2224)); /*0x4ef0cb*/
    v34 = cocos2d::CCScaleTo::create(0.44999999, 1.0); /*0x4ef0e1*/
    v35 = cocos2d::CCEaseElasticOut::create(v34, 0.34999999); /*0x4ef0f8*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v35 + 64LL))(v35, 10); /*0x4ef10a*/
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 2224), v35); /*0x4ef117*/
    if ( *(_BYTE *)(a1 + 2028) ) /*0x4ef11d*/
    {
      v36 = cocos2d::CCSprite::createWithSpriteFrameName("spiderDash_002.png"); /*0x4ef137*/
      (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v36 + 352LL))(v36); /*0x4ef17e*/
      v37 = qword_905FD0; /*0x4ef180*/
      if ( !qword_905FD0 ) /*0x4ef18a*/
      {
        v53 = (__int64)operator new(0x6E8u); /*0x4ef196*/
        qword_905FD0 = sub_2723A0(v53); /*0x4ef1a7*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ef1b8*/
        v37 = qword_905FD0; /*0x4ef1ba*/
      }
      (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(*(_QWORD *)(v37 + 560) + 4360LL) + 456LL))( /*0x4ef1db*/
        *(_QWORD *)(*(_QWORD *)(v37 + 560) + 4360LL),
        v36,
        40);
      v53 = 0x100000302LL; /*0x4ef1e1*/
      (**((void (__fastcall ***)(__int64, __int64))v36 + 43))((__int64)v36 + 344, 0x100000302LL); /*0x4ef205*/
      v38 = *(_QWORD *)v36; /*0x4ef223*/
      (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v36 + 320LL))(v36); /*0x4ef229*/
      (*(void (__fastcall **)(cocos2d::CCNode *))(v38 + 120))(v36); /*0x4ef24c*/
      v39 = *(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v36 + 184LL); /*0x4ef252*/
      if ( *(_BYTE *)(a1 + 2507) ) /*0x4ef261*/
      {
        v41 = (float)((float)(*a3 - *a2) * 0.5) + *a2; /*0x4ef29b*/
        v40 = a2[1]; /*0x4ef2a0*/
      }
      else
      {
        v40 = (float)((float)(a3[1] - a2[1]) * 0.5) + a2[1]; /*0x4ef27d*/
        v41 = *a2; /*0x4ef282*/
      }
      v42 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v53, v41, v40); /*0x4ef2a5*/
      v39(v36, v42); /*0x4ef2b1*/
      v43 = 2706; /*0x4ef2ba*/
      if ( !*(_BYTE *)(a1 + 2753) ) /*0x4ef2c4*/
        v43 = 2709; /*0x4ef2cb*/
      (**((void (__fastcall ***)(__int64, __int64))v36 + 40))((__int64)v36 + 320, a1 + v43); /*0x4ef2d4*/
      v44 = (cocos2d::CCArray *)cocos2d::CCArray::create(); /*0x4ef2dc*/
      do /*0x4ef31e*/
      {
        v45 = cocos2d::CCString::createWithFormat("spiderDash_%03d.png", v8); /*0x4ef2e9*/
        CString = cocos2d::CCString::getCString(v45); /*0x4ef2f8*/
        v47 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4ef2fb*/
        v48 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v47, CString); /*0x4ef307*/
        cocos2d::CCArray::addObject(v44, v48); /*0x4ef313*/
        ++v8; /*0x4ef319*/
      }
      while ( v8 <= 8 ); /*0x4ef31e*/
      v49 = cocos2d::CCAnimation::createWithSpriteFrames(v44, 0.039999999); /*0x4ef32b*/
      v50 = cocos2d::CCAnimate::create(v49); /*0x4ef33a*/
      v51 = cocos2d::CCCallFunc::create(v36, sub_3E5B0); /*0x4ef347*/
      v52 = cocos2d::CCSequence::create(v50, v51, 0); /*0x4ef356*/
      cocos2d::CCNode::runAction(v36, v52); /*0x4ef362*/
    }
  }
  if ( !*(_BYTE *)(a1 + 1843) && (!*(_BYTE *)(a1 + 2502) || !*(_BYTE *)(a1 + 2936)) ) /*0x4ef37a*/
    cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 2240)); /*0x4ef38a*/
}

// [48/109] Address: 0x4f00f0
// Method: PlayerObject::stopDashing
// Hidden C++ exception states: #wind=2
void __fastcall PlayerObject_stopDashing(__int64 a1)
{
  __int64 v2; // rax
  float *v3; // rax
  cocos2d::CCNode *v4; // r15
  __int64 v5; // rax
  struct cocos2d::CCSprite *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  void (__fastcall **v14)(__int64, __int64); // rbx
  __int64 v15; // rax
  double v16; // xmm0_8
  float v17; // xmm6_4
  double v18; // xmm0_8
  struct cocos2d::CCFiniteTimeAction *v19; // rbx
  __int64 v20; // rax
  struct cocos2d::CCAction *v21; // rax
  const struct cocos2d::CCPoint *v22; // rax
  struct cocos2d::CCAction *v23; // rax
  struct cocos2d::CCAction *v24; // rax
  struct cocos2d::CCAction *v25; // rax
  float *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  int v31; // eax
  int v32; // ecx
  float v33; // xmm1_4
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  _BYTE v37[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v38; // [rsp+90h] [rbp+8h] BYREF
  float v39; // [rsp+98h] [rbp+10h] BYREF
  float v40; // [rsp+9Ch] [rbp+14h]

  if ( *(_BYTE *)(a1 + 2540) ) /*0x4f010e*/
  {
    *(_BYTE *)(a1 + 2540) = 0; /*0x4f011b*/
    *(_QWORD *)(a1 + 2584) = 0; /*0x4f0122*/
    if ( *(_BYTE *)(a1 + 2936) ) /*0x4f012d*/
    {
      v2 = *(_QWORD *)(a1 + 1424); /*0x4f013a*/
      if ( v2 ) /*0x4f0144*/
      {
        cocos2d::CCPoint::CCPoint( /*0x4f0178*/
          (cocos2d::CCPoint *)&v38,
          *(float *)(v2 + 1868) * *(double *)(a1 + 1392),
          *(float *)(v2 + 1868) * *(double *)(a1 + 1400));
        v3 = (float *)cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v39, (const struct cocos2d::CCPoint *)&v38); /*0x4f018e*/
        *(_BYTE *)(a1 + 2394) = 1; /*0x4f0194*/
        *(double *)(a1 + 2472) = v3[1]; /*0x4f01a4*/
        if ( *(_BYTE *)(a1 + 2936) ) /*0x4f01ad*/
        {
          *(double *)(a1 + 2816) = *v3; /*0x4f01be*/
          *(_BYTE *)(a1 + 2972) = 1; /*0x4f01c7*/
        }
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 1424) + 1877LL) ) /*0x4f01d6*/
        {
          *(_BYTE *)(a1 + 2394) = 0; /*0x4f01df*/
          *(_BYTE *)(a1 + 2972) = 0; /*0x4f01e7*/
        }
      }
    }
    *(_QWORD *)(a1 + 1424) = 0; /*0x4f01ef*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1640) + 336LL))(*(_QWORD *)(a1 + 1640), 0); /*0x4f0206*/
    if ( *(_BYTE *)(a1 + 2028) && !*(_BYTE *)(a1 + 2025) ) /*0x4f0220*/
    {
      v4 = cocos2d::CCSprite::createWithSpriteFrameName("playerDash2_001.png"); /*0x4f023b*/
      v5 = qword_905FD0; /*0x4f023e*/
      if ( !qword_905FD0 ) /*0x4f0248*/
      {
        v38 = (__int64)operator new(0x6E8u); /*0x4f0254*/
        qword_905FD0 = sub_2723A0(v38); /*0x4f0265*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f0276*/
        v5 = qword_905FD0; /*0x4f0278*/
      }
      (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(*(_QWORD *)(v5 + 560) + 4360LL) + 456LL))( /*0x4f0299*/
        *(_QWORD *)(*(_QWORD *)(v5 + 560) + 4360LL),
        v4,
        40);
      v38 = 0x100000302LL; /*0x4f029f*/
      (**((void (__fastcall ***)(__int64, __int64))v4 + 43))((__int64)v4 + 344, 0x100000302LL); /*0x4f02c4*/
      v6 = cocos2d::CCSprite::createWithSpriteFrameName("playerDash2_outline_001.png"); /*0x4f02d3*/
      (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v4 + 456LL))( /*0x4f02e9*/
        v4,
        v6,
        1);
      (*(void (__fastcall **)(cocos2d::CCNode *, float *))(*(_QWORD *)v4 + 328LL))(v4, &v39); /*0x4f0301*/
      v7 = *(_QWORD *)v6; /*0x4f0304*/
      v8 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v38, v39 * 0.5, v40 * 0.5); /*0x4f0331*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v7 + 184))(v6, v8); /*0x4f033d*/
      LOBYTE(v9) = -106; /*0x4f034d*/
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v6 + 40) + 40LL))((__int64)v6 + 320, v9); /*0x4f034f*/
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 200LL))(*(_QWORD *)(a1 + 1640)); /*0x4f0362*/
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f0372*/
      cocos2d::CCPoint::operator+(v11, &v38, v10); /*0x4f0382*/
      (*(void (__fastcall **)(cocos2d::CCNode *, __int64 *))(*(_QWORD *)v4 + 184LL))(v4, &v38); /*0x4f0396*/
      v12 = *(_QWORD *)v4; /*0x4f039c*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 128LL))(*(_QWORD *)(a1 + 1640)); /*0x4f03a9*/
      (*(void (__fastcall **)(cocos2d::CCNode *))(v12 + 120))(v4); /*0x4f03be*/
      v13 = *(_QWORD *)v4; /*0x4f03c1*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 144LL))(*(_QWORD *)(a1 + 1640)); /*0x4f03d7*/
      (*(void (__fastcall **)(cocos2d::CCNode *))(v13 + 136))(v4); /*0x4f03e7*/
      v14 = (void (__fastcall **)(__int64, __int64))*((_QWORD *)v4 + 40); /*0x4f03ed*/
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1640) + 320LL) + 8LL))(*(_QWORD *)(a1 + 1640) + 320LL); /*0x4f0405*/
      (*v14)((__int64)v4 + 320, v15); /*0x4f0412*/
      (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v4 + 352LL))(v4); /*0x4f0431*/
      v16 = (*(double (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v4 + 144LL))(v4); /*0x4f043d*/
      v17 = *(float *)&v16 * 0.2; /*0x4f044e*/
      v18 = (*(double (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v4 + 128LL))(v4); /*0x4f0458*/
      v19 = cocos2d::CCScaleTo::create(0.2, *(float *)&v18 * 0.2, v17); /*0x4f0471*/
      v20 = cocos2d::CCCallFunc::create(v4, sub_3E5B0); /*0x4f047e*/
      v21 = cocos2d::CCSequence::create(v19, v20, 0); /*0x4f048d*/
      cocos2d::CCNode::runAction(v4, v21); /*0x4f0499*/
      v22 = (const struct cocos2d::CCPoint *)cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v38, -20.0, 0.0); /*0x4f04b2*/
      v23 = cocos2d::CCMoveBy::create(0.2, v22); /*0x4f04be*/
      cocos2d::CCNode::runAction(v4, v23); /*0x4f04ca*/
      v24 = cocos2d::CCFadeTo::create(0.2, 0); /*0x4f04d5*/
      cocos2d::CCNode::runAction(v4, v24); /*0x4f04e1*/
      v25 = cocos2d::CCFadeTo::create(0.2, 0); /*0x4f04ec*/
      cocos2d::CCNode::runAction(v6, v25); /*0x4f04f8*/
    }
    cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2288)); /*0x4f0505*/
    if ( !*(_BYTE *)(a1 + 2497) /*0x4f0559*/
      && !*(_BYTE *)(a1 + 2498)
      && !*(_BYTE *)(a1 + 2500)
      && !*(_BYTE *)(a1 + 2508)
      && !*(_BYTE *)(a1 + 2501)
      && !*(_BYTE *)(a1 + 2502) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 360LL))(*(_QWORD *)(a1 + 1856)); /*0x4f0571*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 160LL))(*(_QWORD *)(a1 + 1856)); /*0x4f0587*/
      cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 1856)); /*0x4f0594*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 352LL))(*(_QWORD *)(a1 + 1856)); /*0x4f05a7*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1880) + 160LL))(*(_QWORD *)(a1 + 1880)); /*0x4f05ba*/
      cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 1880)); /*0x4f05c7*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1880) + 352LL))(*(_QWORD *)(a1 + 1880)); /*0x4f05da*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4f05e9*/
      if ( *(_BYTE *)(a1 + 2936) ) /*0x4f05ef*/
      {
        v26 = (float *)cocos2d::CCPoint::CCPoint( /*0x4f061f*/
                         (cocos2d::CCPoint *)&v38,
                         *(double *)(a1 + 1392),
                         *(double *)(a1 + 1400));
        v27 = (float)(*v26 * *v26) + (float)(v26[1] * v26[1]); /*0x4f0636*/
        if ( v27 < 0.0 ) /*0x4f0640*/
          v28 = sqrtf(v27); /*0x4f0653*/
        else
          v28 = fsqrt(v27); /*0x4f0645*/
        if ( v28 <= 17.310005 ) /*0x4f0661*/
          v29 = (float)((float)(v28 / 17.310005) * 1.5) + 0.5; /*0x4f0679*/
        else
          v29 = 2.0; /*0x4f0663*/
        if ( *(float *)(a1 + 2552) == 1.0 ) /*0x4f068f*/
          v30 = 0.43333334; /*0x4f0691*/
        else
          v30 = 0.33333334; /*0x4f069b*/
        v31 = 1; /*0x4f06a3*/
        v32 = -1; /*0x4f06a6*/
        if ( *(_BYTE *)(a1 + 2507) ) /*0x4f06ab*/
          v31 = -1; /*0x4f06b3*/
        v33 = (float)v31; /*0x4f06ba*/
        v34 = -180; /*0x4f06bd*/
        if ( !*(_BYTE *)(a1 + 2503) ) /*0x4f06c7*/
          v34 = 180; /*0x4f06cf*/
        if ( !*(_BYTE *)(a1 + 2506) ) /*0x4f06d2*/
          v32 = 1; /*0x4f06da*/
        *(float *)(a1 + 1832) = (float)((float)((float)((float)(v32 * v34) * v33) * *(float *)(a1 + 2956)) * v29) / v30; /*0x4f06fd*/
        *(_BYTE *)(a1 + 1840) = 1; /*0x4f0706*/
      }
    }
    if ( *(_BYTE *)(a1 + 2499) ) /*0x4f070e*/
    {
      if ( *(_BYTE *)(a1 + 2936) ) /*0x4f0718*/
      {
        *(_WORD *)(a1 + 1840) = 0; /*0x4f0722*/
        *(_BYTE *)(a1 + 1648) = 0; /*0x4f072c*/
        *(_DWORD *)(a1 + 1832) = 0; /*0x4f0734*/
      }
      PlayerObject_runBallRotation(a1, 1.0); /*0x4f0745*/
    }
    if ( *(_BYTE *)(a1 + 2580) ) /*0x4f074a*/
    {
      if ( *(_BYTE *)(a1 + 2501) ) /*0x4f0754*/
      {
        v35 = sub_3E4F0(v37, a1 + 3032); /*0x4f076a*/
        CCAnimatedSprite_runAnimation(*(_QWORD *)(a1 + 2216), v35); /*0x4f0779*/
      }
      else if ( *(_BYTE *)(a1 + 2502) ) /*0x4f0780*/
      {
        sub_4FB190(a1); /*0x4f078d*/
      }
    }
    v36 = *(_QWORD *)(a1 + 3112); /*0x4f0792*/
    if ( v36 ) /*0x4f079c*/
      sub_337190(v36, 24, 0, *(unsigned int *)(a1 + 924)); /*0x4f07ad*/
  }
}

// [49/109] Address: 0x4f07e0
// Method: PlayerObject::updateDashAnimation
__int64 __fastcall PlayerObject_updateDashAnimation(__int64 a1)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // rcx
  cocos2d::CCArray *v7; // rax
  struct cocos2d::CCObject *v8; // r14
  cocos2d::CCString *v9; // rax
  const char *CString; // rbp
  cocos2d::CCString *v11; // rax
  const char *v12; // r15
  __int64 *v13; // rdi
  __int64 v14; // rbx
  cocos2d::CCSpriteFrameCache *v15; // rax
  struct cocos2d::CCSpriteFrame *v16; // rax
  __int64 v17; // rbx
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  const struct cocos2d::CCSize *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  float v23; // [rsp+50h] [rbp+8h] BYREF
  float v24; // [rsp+54h] [rbp+Ch]
  char v25; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 360LL))(*(_QWORD *)(a1 + 1640)); /*0x4f07f4*/
  v3 = floorf( /*0x4f0844*/
         *(double *)(a1 + 2728)
       / (float)((float)(1.0 - (float)((float)(fabs(v2) / 70.0) * 0.40000001))
               * (float)(0.039999999 / *(float *)(a1 + 2556))));
  result = (unsigned int)(12 * ((int)v3 / 12)); /*0x4f0860*/
  v5 = (int)v3 % 12 + 1; /*0x4f0865*/
  if ( v5 != *(_DWORD *)(a1 + 2544) ) /*0x4f086e*/
  {
    v6 = *(_QWORD *)(a1 + 1640); /*0x4f0874*/
    *(_DWORD *)(a1 + 2544) = v5; /*0x4f087b*/
    v7 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 480LL))(v6); /*0x4f0893*/
    v8 = cocos2d::CCArray::objectAtIndex(v7, 0); /*0x4f08ad*/
    v9 = cocos2d::CCString::createWithFormat("playerDash2_%03d.png", v5); /*0x4f08b0*/
    CString = cocos2d::CCString::getCString(v9); /*0x4f08c8*/
    v11 = cocos2d::CCString::createWithFormat("playerDash2_outline_%03d.png", v5); /*0x4f08cb*/
    result = (__int64)cocos2d::CCString::getCString(v11); /*0x4f08d4*/
    v12 = (const char *)result; /*0x4f08da*/
    if ( CString ) /*0x4f08e0*/
    {
      v13 = *(__int64 **)(a1 + 1640); /*0x4f08eb*/
      v14 = *v13; /*0x4f08f2*/
      v15 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f08f5*/
      v16 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v15, CString); /*0x4f0901*/
      (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v14 + 1008))(v13, v16); /*0x4f090d*/
      v17 = *(_QWORD *)v8; /*0x4f0913*/
      v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f0916*/
      v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v12); /*0x4f0922*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSpriteFrame *))(v17 + 1008))(v8, v19); /*0x4f092e*/
      v20 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 320LL))(*(_QWORD *)(a1 + 1640)); /*0x4f093e*/
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v23, v20); /*0x4f094c*/
      v21 = *(_QWORD *)v8; /*0x4f096b*/
      v22 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, v23 * 0.5, v24 * 0.5); /*0x4f0976*/
      return (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, __int64))(v21 + 184))(v8, v22); /*0x4f0982*/
    }
  }
  return result; /*0x4f099c*/
}

// [50/109] Address: 0x4f09b0
// Method: PlayerObject::resetObject
__int64 __fastcall PlayerObject_resetObject(__int64 a1)
{
  __int64 v2; // rbp
  struct cocos2d::CCArray *v3; // rax
  unsigned int *v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 i; // r15
  __int64 v8; // rdi
  struct cocos2d::CCObject *v9; // rbx
  unsigned __int64 v10; // rdx
  void *v11; // r9
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  int v14; // ecx
  unsigned __int64 v15; // rax
  size_t v16; // r8
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 result; // rax
  bool v22; // zf
  int v23; // [rsp+40h] [rbp-38h]
  _DWORD v24[3]; // [rsp+44h] [rbp-34h] BYREF

  v2 = *(_QWORD *)(a1 + 3128); /*0x4f09c3*/
  *(_BYTE *)(a1 + 2025) = 1; /*0x4f09ca*/
  v3 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(v2 + 320)); /*0x4f09e0*/
  if ( v3 ) /*0x4f09e9*/
  {
    v4 = (unsigned int *)*((_QWORD *)v3 + 7); /*0x4f09f4*/
    v5 = *v4; /*0x4f09f8*/
    if ( (_DWORD)v5 ) /*0x4f09fd*/
    {
      v6 = *((_QWORD *)v4 + 2); /*0x4f09ff*/
      for ( i = v6 + 8 * (v5 - 1); v6 <= i; v6 += 8LL ) /*0x4f0a13*/
      {
        if ( !*(_QWORD *)v6 ) /*0x4f0a15*/
          break; /*0x4f0a1b*/
        v8 = *(int *)(*(_QWORD *)v6 + 56LL); /*0x4f0a1d*/
        v9 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v2 + 320), v8); /*0x4f0a31*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 72LL))(v9); /*0x4f0a3e*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 88LL))(v9); /*0x4f0a4b*/
        cocos2d::CCDictionary::removeObjectForKey(*(cocos2d::CCDictionary **)(v2 + 320), v8); /*0x4f0a58*/
      }
    }
  }
  *(_QWORD *)(a1 + 2872) = 0; /*0x4f0a78*/
  *(_BYTE *)(a1 + 1376) = 0; /*0x4f0a7f*/
  *(_BYTE *)(a1 + 1632) = 0; /*0x4f0a86*/
  *(_QWORD *)(a1 + 1536) = 0; /*0x4f0a8d*/
  *(_QWORD *)(a1 + 1544) = 0; /*0x4f0a94*/
  *(_QWORD *)(a1 + 1512) = 0; /*0x4f0a9b*/
  *(_QWORD *)(a1 + 1520) = 0; /*0x4f0aa2*/
  *(_BYTE *)(a1 + 2392) = 0; /*0x4f0aa9*/
  *(_QWORD *)(a1 + 1552) = 0; /*0x4f0ab0*/
  *(_QWORD *)(a1 + 1560) = 0; /*0x4f0ab7*/
  *(_QWORD *)(a1 + 1576) = 0; /*0x4f0abe*/
  *(_QWORD *)(a1 + 1584) = 0; /*0x4f0ac5*/
  *(_QWORD *)(a1 + 1616) = 0; /*0x4f0acc*/
  *(_QWORD *)(a1 + 1600) = 0; /*0x4f0ad3*/
  *(_QWORD *)(a1 + 1592) = 0; /*0x4f0ada*/
  *(_QWORD *)(a1 + 1624) = 0; /*0x4f0ae1*/
  *(_BYTE *)(a1 + 1608) = 0; /*0x4f0ae8*/
  *(_BYTE *)(a1 + 2120) = 0; /*0x4f0aef*/
  *(_QWORD *)(a1 + 2520) = 0; /*0x4f0af6*/
  *(_QWORD *)(a1 + 2528) = 0; /*0x4f0afd*/
  sub_4F2080(a1, 0); /*0x4f0b04*/
  sub_4F37D0(a1, 2, 4, 0, 0, 0, 0, 0); /*0x4f0b33*/
  *(_QWORD *)(a1 + 2816) = 0; /*0x4f0b3a*/
  *(_BYTE *)(a1 + 2840) = 0; /*0x4f0b44*/
  *(_BYTE *)(a1 + 2848) = 0; /*0x4f0b4b*/
  *(_BYTE *)(a1 + 2972) = 0; /*0x4f0b52*/
  *(_BYTE *)(a1 + 2864) = 0; /*0x4f0b59*/
  *(_QWORD *)(a1 + 2832) = 0; /*0x4f0b60*/
  *(_WORD *)(a1 + 2913) = 0; /*0x4f0b67*/
  *(_BYTE *)(a1 + 2496) = 0; /*0x4f0b6e*/
  *(_DWORD *)(a1 + 2884) = 0; /*0x4f0b75*/
  *(_QWORD *)(a1 + 2888) = 0; /*0x4f0b7b*/
  *(_QWORD *)(a1 + 2896) = 0; /*0x4f0b82*/
  *(_BYTE *)(a1 + 2611) = 0; /*0x4f0b89*/
  *(_DWORD *)(a1 + 2956) = 1065353216; /*0x4f0b90*/
  *(_BYTE *)(a1 + 2444) = 0; /*0x4f0b9a*/
  *(_BYTE *)(a1 + 2505) = 0; /*0x4f0ba1*/
  *(_BYTE *)(a1 + 2580) = 1; /*0x4f0ba8*/
  *(_QWORD *)(a1 + 2584) = 0; /*0x4f0baf*/
  *(_QWORD *)(a1 + 2600) = 0; /*0x4f0bb6*/
  *(_QWORD *)(a1 + 2480) = 0; /*0x4f0bbd*/
  *(_QWORD *)(a1 + 1424) = 0; /*0x4f0bc4*/
  *(_QWORD *)(a1 + 1416) = 0; /*0x4f0bcb*/
  *(_DWORD *)(a1 + 2592) = 0; /*0x4f0bd2*/
  *(_BYTE *)(a1 + 2608) = 0; /*0x4f0bd8*/
  PlayerObject_toggleVisibility((__int64 *)a1, 1u); /*0x4f0bdf*/
  *(_QWORD *)(a1 + 2064) = 0xBFF0000000000000uLL; /*0x4f0bf5*/
  (**(void (__fastcall ***)(__int64, __int64))(a1 + 320))(a1 + 320, a1 + 2434); /*0x4f0c0a*/
  PlayerObject_setSecondColor(a1, a1 + 2437); /*0x4f0c16*/
  PlayerObject_stopParticles(a1); /*0x4f0c1e*/
  *(_QWORD *)(a1 + 2788) = 0; /*0x4f0c2a*/
  *(_QWORD *)(a1 + 2940) = 0; /*0x4f0c38*/
  *(_QWORD *)(a1 + 2948) = 0; /*0x4f0c3f*/
  *(_QWORD *)(a1 + 2796) = 0; /*0x4f0c46*/
  *(_QWORD *)(a1 + 2804) = 0; /*0x4f0c4d*/
  *(_DWORD *)(a1 + 2960) = 0; /*0x4f0c54*/
  cocos2d::CCPoint::operator=(a1 + 2964, &unk_905428); /*0x4f0c5a*/
  sub_16C8A0(a1 + 2976); /*0x4f0c67*/
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 2624)); /*0x4f0c73*/
  sub_3DB60(a1 + 2632); /*0x4f0c80*/
  v10 = *(_QWORD *)(a1 + 2768); /*0x4f0c85*/
  v11 = *(void **)(a1 + 2760); /*0x4f0c91*/
  v12 = 0; /*0x4f0ca5*/
  v23 = 0; /*0x4f0ca7*/
  v24[0] = 0; /*0x4f0cab*/
  while ( 1 ) /*0x4f0cb0*/
  {
    v13 = *((_BYTE *)&v24[-1] + v12++); /*0x4f0cb0*/
    if ( v13 != *((_BYTE *)v24 + v12 - 1) ) /*0x4f0cbd*/
      break; /*0x4f0cbd*/
    if ( v12 == 4 ) /*0x4f0cc3*/
    {
      v14 = 0; /*0x4f0cc5*/
      goto LABEL_11; /*0x4f0cc7*/
    }
  }
  v14 = v13 < *((_BYTE *)v24 + v12 - 1) ? -1 : 1;
LABEL_11:
  v15 = v10 - (_QWORD)v11; /*0x4f0cce*/
  if ( !v14 ) /*0x4f0cd6*/
  {
    v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL; /*0x4f0cdc*/
LABEL_17:
    memset(v11, 0, v16); /*0x4f0cf9*/
    goto LABEL_18; /*0x4f0cfe*/
  }
  v17 = (v15 + 3) >> 2; /*0x4f0ce5*/
  if ( (unsigned __int64)v11 > v10 ) /*0x4f0cec*/
    v17 = 0; /*0x4f0cec*/
  if ( v17 ) /*0x4f0cf3*/
  {
    v16 = 4 * v17; /*0x4f0cf5*/
    goto LABEL_17; /*0x4f0cf5*/
  }
LABEL_18:
  *(_DWORD *)(a1 + 2756) = 0; /*0x4f0d03*/
  *(_DWORD *)(a1 + 2784) = 0; /*0x4f0d0c*/
  PlayerObject_stopDashing(a1); /*0x4f0d12*/
  if ( !*(_BYTE *)(a1 + 2353) ) /*0x4f0d17*/
    cocos2d::CCMotionStreak::stopStroke(*(cocos2d::CCMotionStreak **)(a1 + 1960)); /*0x4f0d27*/
  if ( *(_BYTE *)(a1 + 2432) ) /*0x4f0d2d*/
  {
    *(_BYTE *)(a1 + 2432) = 0; /*0x4f0d36*/
    sub_4F9CA0(a1); /*0x4f0d5b*/
  }
  PlayerObject_removePendingCheckpoint(a1); /*0x4f0d63*/
  cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(a1 + 2224), 10); /*0x4f0d74*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2224) + 160LL))(*(_QWORD *)(a1 + 2224)); /*0x4f0d8c*/
  *(_BYTE *)(a1 + 2033) = 0; /*0x4f0d99*/
  *(_BYTE *)(a1 + 2433) = 0; /*0x4f0da7*/
  cocos2d::CCPoint::operator=(a1 + 2612, &unk_905428); /*0x4f0dae*/
  *(_QWORD *)(a1 + 2696) = 0; /*0x4f0dbb*/
  cocos2d::CCPoint::operator=(a1 + 2568, &unk_905428); /*0x4f0dc9*/
  *(_BYTE *)(a1 + 2610) = 0; /*0x4f0dd6*/
  *(_QWORD *)(a1 + 2192) = 0; /*0x4f0ddd*/
  *(_BYTE *)(a1 + 2027) = 0; /*0x4f0de4*/
  *(_WORD *)(a1 + 2488) = 0; /*0x4f0deb*/
  *(_DWORD *)(a1 + 2492) = 0; /*0x4f0df2*/
  *(_DWORD *)(a1 + 1680) = -1; /*0x4f0df8*/
  *(_QWORD *)(a1 + 2368) = 0; /*0x4f0e02*/
  *(_BYTE *)(a1 + 2394) = 0; /*0x4f0e09*/
  *(_QWORD *)(a1 + 2360) = 0; /*0x4f0e10*/
  *(_QWORD *)(a1 + 1664) = 0; /*0x4f0e17*/
  *(_QWORD *)(a1 + 1656) = 0; /*0x4f0e1e*/
  sub_654A0(a1 + 1768); /*0x4f0e25*/
  *(_BYTE *)(a1 + 1649) = 0; /*0x4f0e2a*/
  *(_QWORD *)(a1 + 2400) = 0; /*0x4f0e34*/
  *(_QWORD *)(a1 + 2408) = 0; /*0x4f0e3d*/
  *(_QWORD *)(a1 + 2416) = 0; /*0x4f0e47*/
  *(_QWORD *)(a1 + 2424) = 0; /*0x4f0e4e*/
  *(_QWORD *)(a1 + 2728) = 0; /*0x4f0e55*/
  *(_BYTE *)(a1 + 2596) = 0; /*0x4f0e5c*/
  *(_QWORD *)(a1 + 2472) = 0; /*0x4f0e63*/
  PlayerObject_flipGravity(a1, 0, 0); /*0x4f0e6a*/
  PlayerObject_toggleFlyMode(a1, 0, 0); /*0x4f0e77*/
  PlayerObject_toggleBirdMode(a1, 0, 0); /*0x4f0e84*/
  PlayerObject_toggleRollMode(a1, 0, 0); /*0x4f0e91*/
  PlayerObject_toggleDartMode(a1, 0, 0); /*0x4f0e9e*/
  sub_4F5180(a1, 0, 0); /*0x4f0eab*/
  UnDecorator::getZName(a1, 0, 0); /*0x4f0eb8*/
  PlayerObject_toggleSwingMode(a1, 0, 0); /*0x4f0ec5*/
  *(_DWORD *)(a1 + 2552) = 1058642330; /*0x4f0ecd*/
  sub_4FA350(a1, 0, 0); /*0x4f0edc*/
  v18 = *(_QWORD *)a1; /*0x4f0ee1*/
  *(_WORD *)(a1 + 1840) = 0; /*0x4f0ee7*/
  *(_BYTE *)(a1 + 1648) = 0; /*0x4f0eee*/
  *(_DWORD *)(a1 + 1832) = 0; /*0x4f0ef5*/
  (*(void (__fastcall **)(__int64))(v18 + 352))(a1); /*0x4f0efe*/
  *(_BYTE *)(a1 + 2504) = 0; /*0x4f0f09*/
  cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 4); /*0x4f0f13*/
  LOBYTE(v19) = -1; /*0x4f0f27*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 320) + 40LL))(a1 + 320, v19); /*0x4f0f29*/
  PlayerObject_toggleGhostEffect(a1, 0); /*0x4f0f31*/
  PlayerObject_updateTimeMod(a1, v20, 0); /*0x4f0f44*/
  sub_4E5190(a1); /*0x4f0f4c*/
  result = PlayerObject_levelFlipFinished(a1); /*0x4f0f54*/
  v22 = *(_BYTE *)(a1 + 2353) == 0; /*0x4f0f59*/
  *(_BYTE *)(a1 + 2025) = 0; /*0x4f0f6d*/
  if ( !v22 ) /*0x4f0f7c*/
    return sub_4F9B40(a1); /*0x4f0f86*/
  return result; /*0x4f0f81*/
}

// [51/109] Address: 0x4f0fa0
// Method: PlayerObject::playSpawnEffect
// Hidden C++ exception states: #wind=1
void __fastcall PlayerObject_playSpawnEffect(cocos2d::CCNode *a1)
{
  struct cocos2d::CCFiniteTimeAction *v2; // rbx
  __int64 v3; // rax
  struct cocos2d::CCAction *v4; // rbx
  __int64 v5; // rax
  int i; // edi
  __int64 v7; // rbx
  struct cocos2d::CCFiniteTimeAction *v8; // rax
  struct cocos2d::CCAction *v9; // rax
  void *v10; // [rsp+40h] [rbp+8h]

  if ( !*((_BYTE *)a1 + 2736) ) /*0x4f0fb7*/
  {
    cocos2d::CCNode::stopActionByTag(a1, 11); /*0x4f0fc9*/
    v2 = cocos2d::CCBlink::create(0.40000001, 4u); /*0x4f0fe2*/
    v3 = cocos2d::CCShow::create(); /*0x4f0fe5*/
    v4 = cocos2d::CCSequence::create(v2, v3, 0); /*0x4f0ffa*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v4 + 64LL))(v4, 11); /*0x4f100c*/
    cocos2d::CCNode::runAction(a1, v4); /*0x4f1015*/
    v5 = qword_905FD0; /*0x4f101b*/
    if ( !qword_905FD0 ) /*0x4f1025*/
    {
      v10 = operator new(0x6E8u); /*0x4f1031*/
      qword_905FD0 = sub_2723A0(v10); /*0x4f103f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f1050*/
      v5 = qword_905FD0; /*0x4f1052*/
    }
    if ( !*(_BYTE *)(v5 + 957) ) /*0x4f1059*/
    {
      for ( i = 0; i < 4; ++i ) /*0x4f1062*/
      {
        v7 = cocos2d::CCCallFunc::create(a1, sub_4F10D0); /*0x4f1080*/
        v8 = cocos2d::CCDelayTime::create((float)i * 0.1); /*0x4f108e*/
        v9 = cocos2d::CCSequence::create(v8, v7, 0); /*0x4f109d*/
        cocos2d::CCNode::runAction(a1, v9); /*0x4f10a9*/
      }
    }
  }
}

// [52/109] Address: 0x4f1290
// Method: PlayerObject::spawnPortalCircle
// Hidden C++ exception states: #wind=4
void __fastcall PlayerObject_spawnPortalCircle(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  struct cocos2d::CCObject *v9; // rdi
  cocos2d::CCObject *v10; // rbx
  cocos2d::CCObject *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  void *v17; // [rsp+50h] [rbp+8h]
  void *v18; // [rsp+50h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 2028) && !*(_BYTE *)(a1 + 2025) ) /*0x4f12c0*/
  {
    v4 = qword_905FD0; /*0x4f12cd*/
    if ( !qword_905FD0 ) /*0x4f12d7*/
    {
      v17 = operator new(0x6E8u); /*0x4f12e3*/
      qword_905FD0 = sub_2723A0(v17); /*0x4f12f1*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f1302*/
      v4 = qword_905FD0; /*0x4f1304*/
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v4 + 560) + 13149LL) /*0x4f133b*/
      && !*(_BYTE *)(v4 + 957)
      && !cocos2d::CCPoint::equals((cocos2d::CCPoint *)(a1 + 2568), (const struct cocos2d::CCPoint *)&unk_905428) )
    {
      LOBYTE(v8) = 1; /*0x4f134e*/
      v9 = (struct cocos2d::CCObject *)CCCircleWave_create(v6, v5, v7, v8, 1); /*0x4f1369*/
      *((_WORD *)v9 + 170) = *(_WORD *)a2; /*0x4f1370*/
      *((_BYTE *)v9 + 342) = *(_BYTE *)(a2 + 2); /*0x4f137c*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 184LL))(v9, a1 + 2568); /*0x4f1396*/
      v10 = *(cocos2d::CCObject **)(a1 + 2696); /*0x4f1399*/
      if ( v10 ) /*0x4f13a3*/
      {
        v11 = (cocos2d::CCObject *)*((_QWORD *)v9 + 40); /*0x4f13a9*/
        if ( v11 ) /*0x4f13b3*/
          cocos2d::CCObject::release(v11); /*0x4f13b5*/
        *((_QWORD *)v9 + 40) = v10; /*0x4f13bb*/
        cocos2d::CCObject::retain(v10); /*0x4f13c5*/
        cocos2d::CCNode::unschedule(v9, CCCircleWave_updatePosition); /*0x4f13d5*/
        v12 = *(_QWORD *)v9; /*0x4f13db*/
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 40) + 200LL))(*((_QWORD *)v9 + 40)); /*0x4f13e8*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v12 + 184))(v9, v13); /*0x4f13f4*/
        v14 = qword_905FD0; /*0x4f13fa*/
        if ( !qword_905FD0 ) /*0x4f1404*/
        {
          v18 = operator new(0x6E8u); /*0x4f1410*/
          qword_905FD0 = sub_2723A0(v18); /*0x4f141e*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f142f*/
          v14 = qword_905FD0; /*0x4f1431*/
        }
        v15 = *(_QWORD *)(v14 + 560); /*0x4f1438*/
        v16 = v15 + 14712; /*0x4f143f*/
        if ( !v15 ) /*0x4f144c*/
          v16 = 0; /*0x4f144c*/
        *((_QWORD *)v9 + 46) = v16; /*0x4f1450*/
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(*(_QWORD *)(v14 + 560) + 15016LL), v9); /*0x4f1468*/
      }
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, _QWORD))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4f147e*/
        *(_QWORD *)(a1 + 3120),
        v9,
        0);
    }
  }
}

// [53/109] Address: 0x4f16b0
// Method: PlayerObject::spawnDualCircle
// Hidden C++ exception states: #wind=4
void __fastcall PlayerObject_spawnDualCircle(_BYTE *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  cocos2d::CCObject *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // [rsp+40h] [rbp+8h]
  void *v15; // [rsp+40h] [rbp+8h]

  if ( !a1[2025] ) /*0x4f16c2*/
  {
    v4 = qword_905FD0; /*0x4f16cf*/
    if ( !qword_905FD0 ) /*0x4f16d9*/
    {
      v14 = operator new(0x6E8u); /*0x4f16e5*/
      qword_905FD0 = sub_2723A0(v14); /*0x4f16f3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f1704*/
      v4 = qword_905FD0; /*0x4f1706*/
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v4 + 560) + 13149LL) && !*(_BYTE *)(v4 + 957) ) /*0x4f1721*/
    {
      v5 = CCCircleWave_create((_DWORD)a1, v4, a3, 1, 1); /*0x4f1753*/
      *(_WORD *)(v5 + 340) = *((_WORD *)a1 + 1353); /*0x4f175d*/
      *(_BYTE *)(v5 + 342) = a1[2708]; /*0x4f176b*/
      v6 = *(_QWORD *)v5; /*0x4f1771*/
      v7 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f1781*/
      (*(void (__fastcall **)(__int64, __int64))(v6 + 184))(v5, v7); /*0x4f1789*/
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 390) + 456LL))(*((_QWORD *)a1 + 390), v5, 0); /*0x4f179f*/
      v8 = *(cocos2d::CCObject **)(v5 + 320); /*0x4f17a5*/
      if ( v8 ) /*0x4f17af*/
        cocos2d::CCObject::release(v8); /*0x4f17b1*/
      *(_QWORD *)(v5 + 320) = a1; /*0x4f17b7*/
      cocos2d::CCObject::retain((cocos2d::CCObject *)a1); /*0x4f17c1*/
      cocos2d::CCNode::unschedule(v5, CCCircleWave_updatePosition); /*0x4f17d1*/
      v9 = *(_QWORD *)v5; /*0x4f17d7*/
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 320) + 200LL))(*(_QWORD *)(v5 + 320)); /*0x4f17e4*/
      (*(void (__fastcall **)(__int64, __int64))(v9 + 184))(v5, v10); /*0x4f17f0*/
      v11 = qword_905FD0; /*0x4f17f6*/
      if ( !qword_905FD0 ) /*0x4f1800*/
      {
        v15 = operator new(0x6E8u); /*0x4f180c*/
        qword_905FD0 = sub_2723A0(v15); /*0x4f181a*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f182b*/
        v11 = qword_905FD0; /*0x4f182d*/
      }
      v12 = *(_QWORD *)(v11 + 560); /*0x4f1834*/
      v13 = v12 + 14712; /*0x4f183b*/
      if ( !v12 ) /*0x4f1848*/
        v13 = 0; /*0x4f1848*/
      *(_QWORD *)(v5 + 368) = v13; /*0x4f184c*/
      cocos2d::CCArray::addObject( /*0x4f1864*/
        *(cocos2d::CCArray **)(*(_QWORD *)(v11 + 560) + 15016LL),
        (struct cocos2d::CCObject *)v5);
    }
  }
}

// [54/109] Address: 0x4f1880
// Method: PlayerObject::playerDestroyed
__int64 __fastcall PlayerObject_playerDestroyed(__int64 a1, char a2)
{
  __int64 v4; // rax
  cocos2d::CCNode *v5; // rcx

  if ( *(_BYTE *)(a1 + 2500) ) /*0x4f188a*/
    sub_4F9CA0(a1); /*0x4f18a1*/
  PlayerObject_stopDashing(a1); /*0x4f18a9*/
  *(_BYTE *)(a1 + 2504) = 1; /*0x4f18b1*/
  *(_WORD *)(a1 + 1840) = 0; /*0x4f18b8*/
  *(_BYTE *)(a1 + 1648) = 0; /*0x4f18c1*/
  *(_DWORD *)(a1 + 1832) = 0; /*0x4f18c8*/
  PlayerObject_stopParticles(a1); /*0x4f18d2*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f18dd*/
  cocos2d::CCPoint::operator=(a1 + 1232, v4); /*0x4f18ed*/
  v5 = *(cocos2d::CCNode **)(a1 + 3096); /*0x4f18f3*/
  if ( v5 ) /*0x4f18fd*/
  {
    cocos2d::CCNode::stopAllActions(v5); /*0x4f18ff*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 3096) + 336LL))(*(_QWORD *)(a1 + 3096), 0); /*0x4f1911*/
  }
  PlayerObject_toggleGhostEffect(a1, 0); /*0x4f191c*/
  PlayerObject_disableSwingFire(a1); /*0x4f1924*/
  if ( !*(_BYTE *)(a1 + 2028) || a2 || *(_BYTE *)(a1 + 1843) ) /*0x4f1937*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 320) + 40LL))(a1 + 320, 0); /*0x4f1968*/
  else
    return PlayerObject_playDeathEffect(a1); /*0x4f194d*/
}

// [55/109] Address: 0x4f1970
// Method: PlayerObject::switchedDirTo
char __fastcall PlayerObject_switchedDirTo(__int64 a1, int a2)
{
  char v5; // al
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 3024) ) /*0x4f197a*/
  {
    v6 = 3; /*0x4f1999*/
    *(_BYTE *)sub_16C910(a1 + 3008, &v6) = a2 == 3; /*0x4f19b9*/
    v6 = 2; /*0x4f19bc*/
    *(_BYTE *)sub_16C910(a1 + 3008, &v6) = a2 == 2; /*0x4f19d4*/
  }
  if ( *(_BYTE *)(a1 + 2611) ) /*0x4f19d6*/
    return 0; /*0x4f19eb*/
  v5 = *(_BYTE *)(a1 + 2849); /*0x4f19ec*/
  if ( a2 == 3 ) /*0x4f19f6*/
  {
    *(_BYTE *)(a1 + 2824) = 1; /*0x4f19f8*/
    *(_BYTE *)(a1 + 2826) = 0; /*0x4f19ff*/
    if ( v5 ) /*0x4f1a08*/
    {
      if ( *(_BYTE *)(a1 + 2915) ) /*0x4f1a0a*/
      {
        *(_BYTE *)(a1 + 2849) = 0; /*0x4f1a13*/
        *(_QWORD *)(a1 + 2856) = 0; /*0x4f1a1a*/
      }
    }
    if ( *(double *)(a1 + 2816) >= 0.0 ) /*0x4f1a30*/
      return 1; /*0x4f1a3e*/
  }
  else
  {
    *(_WORD *)(a1 + 2825) = 257; /*0x4f1a3f*/
    if ( v5 && !*(_BYTE *)(a1 + 2915) ) /*0x4f1a4c*/
    {
      *(_BYTE *)(a1 + 2849) = 0; /*0x4f1a55*/
      *(_QWORD *)(a1 + 2856) = 0; /*0x4f1a5c*/
    }
    if ( *(double *)(a1 + 2816) <= 0.0 ) /*0x4f1a76*/
      return 1; /*0x4f1a76*/
  }
  *(_BYTE *)(a1 + 2912) = 0; /*0x4f1a78*/
  return 1; /*0x4f19e1*/
}

// [56/109] Address: 0x4f1a90
// Method: PlayerObject::pushButton
char __fastcall PlayerObject_pushButton(__int64 a1, unsigned int a2)
{
  cocos2d::CCArray *v4; // rcx
  signed int v6; // eax
  unsigned int v7; // edi
  struct cocos2d::CCArray *v8; // rbp
  struct cocos2d::CCArray *v9; // rax
  __int64 v10; // rsi
  struct cocos2d::CCArray *v11; // r15
  unsigned int *v12; // rsi
  __int64 v13; // rax
  struct cocos2d::CCObject **v14; // rsi
  struct cocos2d::CCObject **i; // r14
  struct cocos2d::CCObject *v16; // rdi
  int v17; // eax
  cocos2d::CCArray *v18; // rcx
  unsigned int *v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rdi
  _QWORD *j; // rsi
  unsigned int *v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rdi
  _QWORD *k; // rsi
  unsigned int v27; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 3024) ) /*0x4f1a97*/
  {
    v27 = a2; /*0x4f1aa5*/
    *(_BYTE *)sub_16C910(a1 + 3008, &v27) = 1; /*0x4f1aba*/
  }
  if ( !*(_BYTE *)(a1 + 2610) && !*(_BYTE *)(a1 + 2611) ) /*0x4f1aca*/
  {
    if ( a2 != 1 ) /*0x4f1aee*/
    {
      if ( a2 - 2 <= 1 ) /*0x4f1d05*/
        PlayerObject_switchedDirTo(a1, a2); /*0x4f1d10*/
      return 1; /*0x4f1d15*/
    }
    if ( !*(_BYTE *)(a1 + 2445) ) /*0x4f1af4*/
      sub_4FA2B0(a1); /*0x4f1b00*/
    *(_WORD *)(a1 + 2445) = 257; /*0x4f1b0c*/
    *(_BYTE *)(a1 + 2024) = 0; /*0x4f1b15*/
    sub_3DB60(a1 + 2128); /*0x4f1b1c*/
    v4 = *(cocos2d::CCArray **)(a1 + 2624); /*0x4f1b28*/
    *(_BYTE *)(a1 + 2449) = *(_BYTE *)(a1 + 2445); /*0x4f1b2f*/
    *(_BYTE *)(a1 + 2450) = *(_BYTE *)(a1 + 2446); /*0x4f1b3c*/
    *(_DWORD *)(a1 + 2451) = 0; /*0x4f1b42*/
    if ( cocos2d::CCArray::count(v4) ) /*0x4f1b4c*/
    {
      v6 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 2624)); /*0x4f1bc8*/
      v7 = v6; /*0x4f1bce*/
      if ( v6 > 0 ) /*0x4f1bd2*/
      {
        v8 = cocos2d::CCArray::createWithCapacity(v6); /*0x4f1bde*/
        v9 = cocos2d::CCArray::createWithCapacity(v7); /*0x4f1be1*/
        v10 = *(_QWORD *)(a1 + 2624); /*0x4f1be7*/
        v11 = v9; /*0x4f1bee*/
        if ( v10 ) /*0x4f1bf4*/
        {
          v12 = *(unsigned int **)(v10 + 56); /*0x4f1bf6*/
          v13 = *v12; /*0x4f1bfa*/
          if ( (_DWORD)v13 ) /*0x4f1bfe*/
          {
            v14 = (struct cocos2d::CCObject **)*((_QWORD *)v12 + 2); /*0x4f1c00*/
            for ( i = &v14[v13 - 1]; v14 <= i; ++v14 ) /*0x4f1c0f*/
            {
              v16 = *v14; /*0x4f1c11*/
              if ( !*v14 ) /*0x4f1c11*/
                break; /*0x4f1c11*/
              if ( *((_BYTE *)v16 + 1856) ) /*0x4f1c19*/
              {
                PlayerObject_ringJump(a1, *v14, 0); /*0x4f1cee*/
                *(_BYTE *)(a1 + 2445) = 0; /*0x4f1cf3*/
                return 1; /*0x4f1cfa*/
              }
              v17 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 1648LL))(*v14); /*0x4f1c2c*/
              v18 = v8; /*0x4f1c35*/
              if ( v17 != 36 ) /*0x4f1c3b*/
                v18 = v11; /*0x4f1c3d*/
              cocos2d::CCArray::addObject(v18, v16); /*0x4f1c40*/
            }
          }
        }
        if ( v8 ) /*0x4f1c52*/
        {
          v19 = (unsigned int *)*((_QWORD *)v8 + 7); /*0x4f1c54*/
          v20 = *v19; /*0x4f1c58*/
          if ( (_DWORD)v20 ) /*0x4f1c5c*/
          {
            v21 = (_QWORD *)*((_QWORD *)v19 + 2); /*0x4f1c5e*/
            for ( j = &v21[v20 - 1]; v21 <= j; ++v21 ) /*0x4f1c6d*/
            {
              if ( !*v21 ) /*0x4f1c70*/
                break; /*0x4f1c76*/
              PlayerObject_ringJump(a1, *v21, 0); /*0x4f1c7e*/
            }
          }
        }
        if ( v11 ) /*0x4f1c8f*/
        {
          v23 = (unsigned int *)*((_QWORD *)v11 + 7); /*0x4f1c95*/
          v24 = *v23; /*0x4f1c99*/
          if ( (_DWORD)v24 ) /*0x4f1c9d*/
          {
            v25 = (_QWORD *)*((_QWORD *)v23 + 2); /*0x4f1ca3*/
            for ( k = &v25[v24 - 1]; v25 <= k; ++v25 ) /*0x4f1cb2*/
            {
              if ( !*v25 ) /*0x4f1cc0*/
                break; /*0x4f1cc6*/
              PlayerObject_ringJump(a1, *v25, 0); /*0x4f1cd2*/
            }
          }
        }
      }
      return 1; /*0x4f1cde*/
    }
    if ( *(_BYTE *)(a1 + 2499) ) /*0x4f1b56*/
    {
      if ( !*(_BYTE *)(a1 + 2505) ) /*0x4f1bb2*/
        return 1; /*0x4f1baa*/
    }
    else if ( *(_BYTE *)(a1 + 2497) /*0x4f1b86*/
           || *(_BYTE *)(a1 + 2498)
           || *(_BYTE *)(a1 + 2500)
           || *(_BYTE *)(a1 + 2508)
           || !*(_BYTE *)(a1 + 2445)
           || !*(_BYTE *)(a1 + 2505) )
    {
      return 1; /*0x4f1b8c*/
    }
    GameStatsManager_checkAchievement(a1); /*0x4f1bba*/
    return 1; /*0x4f1bbf*/
  }
  return 0; /*0x4f1ba4*/
}

// [57/109] Address: 0x4f1d30
// Method: PlayerObject::releaseButton
bool __fastcall PlayerObject_releaseButton(__int64 a1, int a2)
{
  bool v5; // zf
  double v6; // xmm1_8
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 == 5 ) /*0x4f1d42*/
  {
    PlayerObject_releaseButton(a1, 2); /*0x4f1d49*/
    PlayerObject_releaseButton(a1, 3); /*0x4f1d56*/
    return *(_BYTE *)(a1 + 2611) == 0; /*0x4f1d6f*/
  }
  if ( !*(_BYTE *)(a1 + 3024) ) /*0x4f1d70*/
  {
    v7 = a2; /*0x4f1d80*/
    *(_BYTE *)sub_16C910(a1 + 3008, &v7) = 0; /*0x4f1d8e*/
  }
  if ( *(_BYTE *)(a1 + 2611) ) /*0x4f1d91*/
    return 0; /*0x4f1da6*/
  if ( *(_BYTE *)(a1 + 2445) ) /*0x4f1da7*/
    sub_4FA2B0(a1); /*0x4f1db3*/
  switch ( a2 ) /*0x4f1dbb*/
  {
    case 1: /*0x4f1dbb*/
      v5 = *(_BYTE *)(a1 + 2540) == 0; /*0x4f1dbd*/
      *(_WORD *)(a1 + 2445) = 0; /*0x4f1dc4*/
      *(_BYTE *)(a1 + 2468) = 1; /*0x4f1dcd*/
      if ( !v5 ) /*0x4f1dd4*/
      {
        PlayerObject_stopDashing(a1); /*0x4f1dd9*/
        return 1; /*0x4f1dec*/
      }
      return 1; /*0x4f1dd4*/
    case 2: /*0x4f1dbb*/
      *(_BYTE *)(a1 + 2825) = 0; /*0x4f1df5*/
      if ( *(double *)(a1 + 2816) >= 0.0 ) /*0x4f1e04*/
        return 1; /*0x4f1e12*/
      break;
    case 3: /*0x4f1dbb*/
      v6 = *(double *)(a1 + 2816); /*0x4f1e18*/
      *(_BYTE *)(a1 + 2824) = 0; /*0x4f1e27*/
      if ( v6 <= 0.0 ) /*0x4f1e2e*/
        return 1; /*0x4f1e2e*/
      break;
    default:
      return 1; /*0x4f1e16*/
  }
  *(_BYTE *)(a1 + 2912) = 0; /*0x4f1e30*/
  return 1; /*0x4f1d65*/
}

// [58/109] Address: 0x4f1e50
// Method: PlayerObject::resetTouchedRings
__int64 __fastcall PlayerObject_resetTouchedRings(__int64 a1, char a2)
{
  cocos2d::CCArray *v3; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  v3 = *(cocos2d::CCArray **)(a1 + 2624); /*0x4f1e59*/
  if ( a2 ) /*0x4f1e62*/
  {
    cocos2d::CCArray::removeAllObjects(v3); /*0x4f1e64*/
    return sub_3DB60(a1 + 2632); /*0x4f1e76*/
  }
  v5 = 0; /*0x4f1e80*/
  if ( cocos2d::CCArray::count(v3) ) /*0x4f1e82*/
  {
    while ( 1 ) /*0x4f1ebf*/
    {
      v6 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 2624), v5) + 231); /*0x4f1ebf*/
      v7 = (__int64 *)(*(_QWORD *)(a1 + 2656) /*0x4f1f0a*/
                     + 16
                     * (*(_QWORD *)(a1 + 2680)
                      & (0x100000001B3LL
                       * (((unsigned __int64)v6 >> 24)
                        ^ (0x100000001B3LL
                         * ((0x100000001B3LL
                           * ((0x100000001B3LL * ((unsigned __int8)v6 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v6)))
                          ^ BYTE2(v6)))))));
      v8 = v7[1]; /*0x4f1f11*/
      if ( v8 == *(_QWORD *)(a1 + 2640) ) /*0x4f1f1c*/
        goto LABEL_9; /*0x4f1f1c*/
      v9 = *v7; /*0x4f1f1e*/
      if ( v6 != *(_DWORD *)(v8 + 16) ) /*0x4f1f25*/
        break; /*0x4f1f25*/
LABEL_10:
      if ( v8 ) /*0x4f1f3d*/
        ++v5; /*0x4f1f53*/
      else
        cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(a1 + 2624), v5, 1); /*0x4f1f4b*/
      if ( v5 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 2624)) ) /*0x4f1f64*/
        return sub_3DB60(a1 + 2632); /*0x4f1f64*/
    }
    while ( v8 != v9 ) /*0x4f1f2a*/
    {
      v8 = *(_QWORD *)(v8 + 8); /*0x4f1f2c*/
      if ( v6 == *(_DWORD *)(v8 + 16) ) /*0x4f1f34*/
        goto LABEL_10; /*0x4f1f34*/
    }
LABEL_9:
    v8 = 0; /*0x4f1f38*/
    goto LABEL_10; /*0x4f1f38*/
  }
  return sub_3DB60(a1 + 2632); /*0x4f1e71*/
}

// [59/109] Address: 0x4f1f90
// Method: PlayerObject::reversePlayer
void __fastcall PlayerObject_reversePlayer(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  float v4; // xmm2_4
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  float v8; // xmm0_4
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  float v10; // [rsp+50h] [rbp+8h] BYREF
  float v11; // [rsp+54h] [rbp+Ch]
  char v12; // [rsp+60h] [rbp+18h] BYREF
  char v13; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2; /*0x4f1f9e*/
  if ( !*(_BYTE *)(a1 + 2936) ) /*0x4f1f97*/
  {
    if ( a2 && *(_BYTE *)(a1 + 1378) ) /*0x4f1fb3*/
    {
      v4 = *(double *)(a1 + 2520); /*0x4f1fd6*/
      v5 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, v4, v4); /*0x4f1fe2*/
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f1fef*/
      cocos2d::CCPoint::operator+(v6, &v12, v5); /*0x4f1ffc*/
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v2 + 1208LL))(v2, v9); /*0x4f200d*/
      cocos2d::CCPoint::operator-(v7, &v10, &v12); /*0x4f2020*/
      if ( *(_BYTE *)(a1 + 2507) ) /*0x4f2026*/
        v8 = v11; /*0x4f203c*/
      else
        v8 = v10; /*0x4f2034*/
      *(double *)(a1 + 2520) = (float)(v8 + v8) + *(double *)(a1 + 2520); /*0x4f2051*/
    }
    LOBYTE(a2) = *(_BYTE *)(a1 + 2506) == 0; /*0x4f2063*/
    sub_4F2080(a1, a2); /*0x4f2066*/
  }
}

// [60/109] Address: 0x4f23e0
// Method: PlayerObject::updatePlayerArt
__int64 __fastcall PlayerObject_updatePlayerArt(__int64 a1)
{
  int v2; // eax
  int v3; // xmm1_4
  int v4; // xmm1_4
  __int64 v5; // rax
  int v6; // xmm1_4
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // xmm1_4
  int v11; // [rsp+50h] [rbp+20h] BYREF
  int v12; // [rsp+54h] [rbp+24h]
  int v13; // [rsp+58h] [rbp+28h] BYREF
  int v14; // [rsp+5Ch] [rbp+2Ch]
  char v15; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1368) + 120LL))(*(_QWORD *)(a1 + 1368)); /*0x4f241e*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1368) + 136LL))(*(_QWORD *)(a1 + 1368)); /*0x4f249c*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1368) + 352LL))(*(_QWORD *)(a1 + 1368)); /*0x4f24c1*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2240) + 1000LL))(*(_QWORD *)(a1 + 2240)); /*0x4f250a*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 1000LL))(*(_QWORD *)(a1 + 2248)); /*0x4f251d*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2256) + 1000LL))(*(_QWORD *)(a1 + 2256)); /*0x4f2530*/
  v2 = 300; /*0x4f253d*/
  if ( !*(_BYTE *)(a1 + 2503) ) /*0x4f2536*/
    v2 = -300; /*0x4f254a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, 0.0, (float)v2); /*0x4f2558*/
  if ( *(_BYTE *)(a1 + 2507) ) /*0x4f255e*/
  {
    v3 = v13; /*0x4f2567*/
    v13 = v14; /*0x4f2571*/
    v14 = v3; /*0x4f2576*/
  }
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 2240) + 1040LL))(*(_QWORD *)(a1 + 2240), &v13); /*0x4f2589*/
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 2248) + 1040LL))(*(_QWORD *)(a1 + 2248), &v13); /*0x4f259d*/
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 2256) + 1040LL))(*(_QWORD *)(a1 + 2256), &v13); /*0x4f25b1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, 0.0, 2.0); /*0x4f25c6*/
  if ( *(_BYTE *)(a1 + 2507) ) /*0x4f25cc*/
  {
    v4 = v11; /*0x4f25d5*/
    v11 = v12; /*0x4f25df*/
    v12 = v4; /*0x4f25e4*/
  }
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 2248) + 952LL))(*(_QWORD *)(a1 + 2248), &v11); /*0x4f25f7*/
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 2256) + 952LL))(*(_QWORD *)(a1 + 2256), &v11); /*0x4f260b*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2272) + 1000LL))(*(_QWORD *)(a1 + 2272)); /*0x4f265a*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2280) + 1000LL))(*(_QWORD *)(a1 + 2280)); /*0x4f266d*/
  v5 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, 5.0, 1.0); /*0x4f268a*/
  cocos2d::CCPoint::operator=(&v11, v5); /*0x4f2697*/
  if ( *(_BYTE *)(a1 + 2507) ) /*0x4f269d*/
  {
    v6 = v11; /*0x4f26a6*/
    v11 = v12; /*0x4f26b0*/
    v12 = v6; /*0x4f26b5*/
  }
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 2272) + 952LL))(*(_QWORD *)(a1 + 2272), &v11); /*0x4f26c8*/
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 2280) + 952LL))(*(_QWORD *)(a1 + 2280), &v11); /*0x4f26dc*/
  v7 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, 5.0, 1.0); /*0x4f26f1*/
  cocos2d::CCPoint::operator=(&v11, v7); /*0x4f26fe*/
  if ( *(_BYTE *)(a1 + 2501) || *(_BYTE *)(a1 + 2502) ) /*0x4f270d*/
  {
    v8 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, 15.0, 0.0); /*0x4f2725*/
    cocos2d::CCPoint::operator=(&v11, v8); /*0x4f2732*/
  }
  if ( *(_BYTE *)(a1 + 2507) ) /*0x4f2738*/
  {
    v9 = v11; /*0x4f2741*/
    v11 = v12; /*0x4f274b*/
    v12 = v9; /*0x4f2750*/
  }
  return (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 2240) + 952LL))(*(_QWORD *)(a1 + 2240), &v11); /*0x4f2769*/
}

// [61/109] Address: 0x4f2780
// Method: PlayerObject::ringJump
// Hidden C++ exception states: #wind=25
void __fastcall PlayerObject_ringJump(__int64 a1, __int64 a2, char a3)
{
  int v5; // edx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // r12
  int v10; // r15d
  int v11; // eax
  int v12; // r14d
  bool v13; // bl
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  char isFacingLeft; // al
  __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // cl
  char isFacingDown; // al
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // bl
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  char v34; // al
  int v35; // eax
  float v36; // xmm9_4
  float v37; // xmm6_4
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // bl
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // al
  int v47; // ecx
  __int64 v48; // rax
  double v49; // xmm0_8
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  char v53; // bl
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  char v58; // al
  cocos2d::CCNode **v59; // rbx
  __int64 v60; // rbx
  cocos2d::CCNode *v61; // rcx
  cocos2d::CCNode *v62; // rcx
  char v63; // dl
  int v64; // ecx
  int v65; // eax
  float v66; // xmm0_4
  __int64 v67; // rax
  char v68; // r14
  __int16 v69; // bx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // r9d
  int v76; // edx
  int v77; // ecx
  int v78; // r8d
  __int64 v79; // r15
  __int64 v80; // rbx
  __int64 v81; // rax
  cocos2d::CCObject *v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int128 v88; // [rsp+30h] [rbp-50h] BYREF
  __int64 v89; // [rsp+40h] [rbp-40h]
  __int64 v90; // [rsp+48h] [rbp-38h]
  void *v91; // [rsp+C0h] [rbp+40h]
  void *v92; // [rsp+C0h] [rbp+40h]
  void *v93; // [rsp+C0h] [rbp+40h]
  void *v94; // [rsp+C0h] [rbp+40h]
  void *v95; // [rsp+C0h] [rbp+40h]
  void *v96; // [rsp+C0h] [rbp+40h]
  void *v97; // [rsp+C0h] [rbp+40h]
  void *v98; // [rsp+C0h] [rbp+40h]
  void *v99; // [rsp+C0h] [rbp+40h]
  void *v100; // [rsp+C0h] [rbp+40h]
  void *v101; // [rsp+C0h] [rbp+40h]
  void *v102; // [rsp+C0h] [rbp+40h]
  int v103; // [rsp+D0h] [rbp+50h] BYREF

  LOBYTE(v103) = a3; /*0x4f2785*/
  if ( *(_BYTE *)(a1 + 2504) || !a2 ) /*0x4f27c5*/
    return; /*0x4f27c5*/
  v5 = *(_DWORD *)(a2 + 924); /*0x4f27cb*/
  v6 = *(_QWORD *)(a1 + 2176) /*0x4f281d*/
     & (0x100000001B3LL
      * (HIBYTE(v5)
       ^ (0x100000001B3LL
        * (BYTE2(v5)
         ^ (0x100000001B3LL * (BYTE1(v5) ^ (0x100000001B3LL * ((unsigned __int8)v5 ^ 0xCBF29CE484222325uLL))))))));
  v7 = *(_QWORD *)(a1 + 2152); /*0x4f2824*/
  v8 = *(_QWORD *)(v7 + 16 * v6 + 8); /*0x4f2831*/
  if ( v8 == *(_QWORD *)(a1 + 2136) ) /*0x4f2840*/
    goto LABEL_8; /*0x4f2840*/
  if ( v5 != *(_DWORD *)(v8 + 16) ) /*0x4f284c*/
  {
    while ( v8 != *(_QWORD *)(v7 + 16 * v6) ) /*0x4f2853*/
    {
      v8 = *(_QWORD *)(v8 + 8); /*0x4f2855*/
      if ( v5 == *(_DWORD *)(v8 + 16) ) /*0x4f285c*/
        goto LABEL_9; /*0x4f285c*/
    }
LABEL_8:
    v8 = 0; /*0x4f2860*/
  }
LABEL_9:
  if ( v8 ) /*0x4f2866*/
    return; /*0x4f2866*/
  v9 = *(_BYTE *)(a2 + 1052); /*0x4f286c*/
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2); /*0x4f2880*/
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2); /*0x4f2890*/
  v12 = v11; /*0x4f2892*/
  v13 = v10 != 36 && v11 != 46; /*0x4f28a4*/
  if ( !*(_BYTE *)(a1 + 2450) /*0x4f28fa*/
    || *(_BYTE *)(a1 + 2540)
    || !*(_BYTE *)(a1 + 2449)
    || (*(_BYTE *)(a1 + 2451) || !v13) && (*(_BYTE *)(a1 + 2452) || v10 != 36) && (*(_BYTE *)(a1 + 2453) || v11 != 46) )
  {
    return; /*0x4f28fa*/
  }
  if ( *(_BYTE *)(a2 + 1796) ) /*0x4f2900*/
    PlayerObject_reversePlayer(a1, a2); /*0x4f290f*/
  *(_BYTE *)(a1 + 2120) = 1; /*0x4f2914*/
  v103 = *(_DWORD *)(a2 + 924); /*0x4f2921*/
  sub_67020(a1 + 2128, &v88, &v103); /*0x4f2933*/
  v14 = *(_QWORD *)(a1 + 3112); /*0x4f2938*/
  if ( v14 ) /*0x4f2942*/
  {
    sub_337190(v14, 8, 0, *(unsigned int *)(a1 + 924)); /*0x4f2953*/
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2); /*0x4f295e*/
    v17 = GJBaseGameLayer_objectTypeToGameEvent(v16, v15); /*0x4f2966*/
    v18 = *(_QWORD *)(a1 + 3112); /*0x4f296b*/
    if ( v18 ) /*0x4f2975*/
      sub_337190(v18, v17, 0, *(unsigned int *)(a1 + 924)); /*0x4f2983*/
  }
  if ( v10 == 36 ) /*0x4f298c*/
  {
    *(_BYTE *)(a1 + 2452) = 1; /*0x4f298e*/
  }
  else if ( v12 == 46 ) /*0x4f299b*/
  {
    *(_BYTE *)(a1 + 2453) = 1; /*0x4f299d*/
  }
  else
  {
    *(_BYTE *)(a1 + 2451) = 1; /*0x4f29a6*/
  }
  cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(a1 + 2624), (struct cocos2d::CCObject *)a2, 1); /*0x4f29ba*/
  if ( v13 ) /*0x4f29c2*/
    *(_BYTE *)(a1 + 2024) = 1; /*0x4f29c4*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 36 ) /*0x4f29da*/
  {
    sub_321EF0(*(_QWORD *)(a1 + 3112), a2); /*0x4f29e6*/
    if ( *(_BYTE *)(a1 + 3149) ) /*0x4f29ee*/
      *(_BYTE *)(a1 + 2446) = 0; /*0x4f29fb*/
    goto LABEL_172; /*0x4f2a02*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) != 46 ) /*0x4f2a16*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 43 ) /*0x4f2a48*/
    {
      if ( !*(_BYTE *)(a1 + 2507) ) /*0x4f2a4a*/
        goto LABEL_44; /*0x4f2a4a*/
      isFacingLeft = GameObject_isFacingLeft(a2); /*0x4f2a56*/
      v22 = *(_BYTE *)(a1 + 2503); /*0x4f2a5b*/
      if ( isFacingLeft != v22 ) /*0x4f2a64*/
      {
LABEL_45:
        LOBYTE(v20) = v22 == 0; /*0x4f2a82*/
        LOBYTE(v21) = 1; /*0x4f2a87*/
        PlayerObject_flipGravity(a1, v20, v21); /*0x4f2a8d*/
        goto LABEL_46; /*0x4f2a8d*/
      }
      if ( !*(_BYTE *)(a1 + 2507) ) /*0x4f2a66*/
      {
LABEL_44:
        isFacingDown = GameObject_isFacingDown(a2); /*0x4f2a72*/
        v22 = *(_BYTE *)(a1 + 2503); /*0x4f2a77*/
        if ( isFacingDown != v22 ) /*0x4f2a80*/
          goto LABEL_45; /*0x4f2a80*/
      }
LABEL_46:
      PlayerObject_spiderTestJump(a1); /*0x4f2a92*/
      goto LABEL_172; /*0x4f2a9d*/
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 37 ) /*0x4f2ab1*/
    {
      v24 = *(_QWORD *)(a1 + 3112); /*0x4f2ab3*/
      if ( !v24 ) /*0x4f2abd*/
      {
LABEL_65:
        PlayLayer_showTwoPlayerGuide(a1, a2); /*0x4f2c34*/
        goto LABEL_172; /*0x4f2c42*/
      }
      v25 = 41; /*0x4f2ac3*/
LABEL_64:
      sub_337190(v24, v25, 0, *(unsigned int *)(a1 + 924)); /*0x4f2c25*/
      goto LABEL_65; /*0x4f2c2f*/
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 38 ) /*0x4f2adc*/
    {
      if ( *(_BYTE *)(a1 + 2028) ) /*0x4f2ae2*/
      {
        v29 = *(_BYTE *)(a1 + 2503); /*0x4f2aef*/
        v30 = qword_905FD0; /*0x4f2af6*/
        if ( !qword_905FD0 ) /*0x4f2b00*/
        {
          v91 = operator new(0x6E8u); /*0x4f2b0c*/
          qword_905FD0 = sub_2723A0(v91); /*0x4f2b19*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f2b2a*/
          v30 = qword_905FD0; /*0x4f2b2c*/
        }
        LOBYTE(v27) = v29 == 0; /*0x4f2b35*/
        LOBYTE(v28) = 1; /*0x4f2b39*/
        GJBaseGameLayer_flipGravity(*(_QWORD *)(v30 + 560), a1, v27, v28); /*0x4f2b46*/
        v31 = qword_905FD0; /*0x4f2b4b*/
        if ( !qword_905FD0 ) /*0x4f2b55*/
        {
          v92 = operator new(0x6E8u); /*0x4f2b61*/
          qword_905FD0 = sub_2723A0(v92); /*0x4f2b6e*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f2b7f*/
          v31 = qword_905FD0; /*0x4f2b81*/
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v31 + 560) + 1328LL))( /*0x4f2b99*/
          *(_QWORD *)(v31 + 560),
          *(unsigned __int8 *)(a1 + 2503));
      }
      else
      {
        v32 = qword_905FD0; /*0x4f2ba1*/
        if ( !qword_905FD0 ) /*0x4f2bab*/
        {
          v93 = operator new(0x6E8u); /*0x4f2bb7*/
          qword_905FD0 = sub_2723A0(v93); /*0x4f2bc4*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f2bd5*/
          v32 = qword_905FD0; /*0x4f2bd7*/
        }
        v33 = *(_QWORD *)(v32 + 568); /*0x4f2bde*/
        v34 = *(_BYTE *)(a1 + 2503); /*0x4f2be5*/
        if ( v33 ) /*0x4f2bef*/
        {
          LOBYTE(v27) = v34 == 0; /*0x4f2bf3*/
          LOBYTE(v28) = 1; /*0x4f2bf7*/
          GJBaseGameLayer_flipGravity(v33, a1, v27, v28); /*0x4f2bfd*/
        }
        else
        {
          LOBYTE(v26) = v34 == 0; /*0x4f2c06*/
          LOBYTE(v27) = 1; /*0x4f2c09*/
          PlayerObject_flipGravity(a1, v26, v27); /*0x4f2c0f*/
        }
      }
      v24 = *(_QWORD *)(a1 + 3112); /*0x4f2c14*/
      if ( !v24 ) /*0x4f2c1e*/
        goto LABEL_65; /*0x4f2c1e*/
      v25 = 42; /*0x4f2c20*/
      goto LABEL_64; /*0x4f2c20*/
    }
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2); /*0x4f2c4d*/
    *(_BYTE *)(a1 + 2446) = 0; /*0x4f2c53*/
    if ( v35 == 32 ) /*0x4f2c5d*/
    {
      v63 = *(_BYTE *)(a1 + 2503); /*0x4f32fb*/
      v64 = -1; /*0x4f3302*/
      v65 = -1; /*0x4f3307*/
      if ( !v63 ) /*0x4f3311*/
        v65 = 1; /*0x4f3311*/
      v66 = (float)v65 * -15.0; /*0x4f331c*/
      if ( *(_BYTE *)(a1 + 2497) || *(_BYTE *)(a1 + 2498) || *(_BYTE *)(a1 + 2500) || *(_BYTE *)(a1 + 2508) ) /*0x4f333f*/
      {
        if ( !v63 ) /*0x4f3366*/
          v64 = 1; /*0x4f3366*/
        v66 = (float)v64 * -14.0; /*0x4f3371*/
        if ( *(_BYTE *)(a1 + 2498) ) /*0x4f3379*/
          v66 = v66 * 0.80000001; /*0x4f3382*/
      }
      else if ( !*(_BYTE *)(a1 + 2501) && *(_BYTE *)(a1 + 2502) ) /*0x4f3351*/
      {
        v66 = v66 * 1.1; /*0x4f335a*/
      }
      PlayerObject_setYVelocity(a1, v66); /*0x4f3390*/
      if ( *(_BYTE *)(a1 + 2499) ) /*0x4f3395*/
      {
        PlayerObject_runBallRotation2(a1); /*0x4f33e0*/
      }
      else if ( !*(_BYTE *)(a1 + 2610) && !*(_BYTE *)(a1 + 2540) ) /*0x4f33aa*/
      {
        *(_WORD *)(a1 + 1840) = 0; /*0x4f33b3*/
        *(_BYTE *)(a1 + 1648) = 0; /*0x4f33bb*/
        *(_DWORD *)(a1 + 1832) = 0; /*0x4f33c2*/
        PlayerObject_runNormalRotation(a1, 0, 1.0); /*0x4f33d6*/
      }
      sub_4F9B40(a1); /*0x4f33eb*/
      *(_BYTE *)(a1 + 2705) = 1; /*0x4f33f0*/
      *(_BYTE *)(a1 + 2394) = 1; /*0x4f33f7*/
      if ( *(_BYTE *)(a1 + 2499) || *(_BYTE *)(a1 + 2508) ) /*0x4f3407*/
        *(_BYTE *)(a1 + 2445) = 0; /*0x4f3410*/
      goto LABEL_172; /*0x4f3410*/
    }
    *(_BYTE *)(a1 + 2596) = 1; /*0x4f2c63*/
    *(_BYTE *)(a1 + 2580) = 0; /*0x4f2c6a*/
    *(_BYTE *)(a1 + 2505) = 0; /*0x4f2c71*/
    v36 = 1.0; /*0x4f2c80*/
    if ( *(float *)(a1 + 2552) != 1.0 ) /*0x4f2c91*/
      v36 = 0.80000001; /*0x4f2c93*/
    v37 = *(double *)(a1 + 1992); /*0x4f2ca4*/
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 13 ) /*0x4f2cb7*/
    {
      v37 = v37 * 0.80000001; /*0x4f2cb9*/
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 29 ) /*0x4f2cd5*/
    {
      if ( *(_BYTE *)(a1 + 2497) ) /*0x4f2cd7*/
        v37 = v37 * 0.69999999; /*0x4f2ce4*/
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 12 ) /*0x4f2d00*/
    {
      if ( *(_BYTE *)(a1 + 2497) ) /*0x4f2d02*/
      {
        v37 = v37 * 0.37; /*0x4f2d0b*/
      }
      else if ( *(_BYTE *)(a1 + 2498) ) /*0x4f2d18*/
      {
        v37 = v37 * 0.41999999; /*0x4f2d21*/
      }
      else if ( *(_BYTE *)(a1 + 2499) ) /*0x4f2d2e*/
      {
        v37 = v37 * 0.76999998; /*0x4f2d37*/
      }
      else
      {
        v37 = v37 * 0.72000003; /*0x4f2d44*/
      }
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 35 ) /*0x4f2d60*/
    {
      if ( *(_BYTE *)(a1 + 2497) ) /*0x4f2d66*/
      {
        if ( *(float *)(a1 + 2552) != 1.0 ) /*0x4f2d7c*/
          v37 = v37 * 1.4; /*0x4f2d82*/
      }
      else if ( *(_BYTE *)(a1 + 2498) ) /*0x4f2d8f*/
      {
        if ( *(float *)(a1 + 2552) == 1.0 ) /*0x4f2da5*/
          v37 = v37 * 1.02; /*0x4f2da7*/
        else
          v37 = v37 * 1.36; /*0x4f2db1*/
      }
      else if ( *(_BYTE *)(a1 + 2499) ) /*0x4f2dbb*/
      {
        v37 = v37 * 1.34; /*0x4f2dc4*/
      }
      else if ( *(_BYTE *)(a1 + 2501) ) /*0x4f2dce*/
      {
        v37 = v37 * 1.28; /*0x4f2dd7*/
      }
      else if ( *(_BYTE *)(a1 + 2502) ) /*0x4f2de1*/
      {
        v37 = v37 * 1.34; /*0x4f2dea*/
      }
      else
      {
        v37 = v37 * 1.38; /*0x4f2df4*/
      }
    }
    else if ( *(_BYTE *)(a1 + 2501) ) /*0x4f2dfe*/
    {
      v37 = v37 * 0.89999998; /*0x4f2e07*/
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 29 ) /*0x4f2e1e*/
    {
      if ( *(_BYTE *)(a1 + 2028) ) /*0x4f2e24*/
      {
        v41 = *(_BYTE *)(a1 + 2503); /*0x4f2e31*/
        v42 = qword_905FD0; /*0x4f2e38*/
        if ( !qword_905FD0 ) /*0x4f2e42*/
        {
          v94 = operator new(0x6E8u); /*0x4f2e4e*/
          qword_905FD0 = sub_2723A0(v94); /*0x4f2e5b*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f2e6c*/
          v42 = qword_905FD0; /*0x4f2e6e*/
        }
        LOBYTE(v39) = v41 == 0; /*0x4f2e77*/
        LOBYTE(v40) = 1; /*0x4f2e7b*/
        GJBaseGameLayer_flipGravity(*(_QWORD *)(v42 + 560), a1, v39, v40); /*0x4f2e88*/
        if ( !v9 ) /*0x4f2e90*/
        {
          v43 = qword_905FD0; /*0x4f2e96*/
          if ( !qword_905FD0 ) /*0x4f2ea0*/
          {
            v95 = operator new(0x6E8u); /*0x4f2eac*/
            qword_905FD0 = sub_2723A0(v95); /*0x4f2eb9*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f2eca*/
            v43 = qword_905FD0; /*0x4f2ecc*/
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v43 + 560) + 1328LL))( /*0x4f2ee4*/
            *(_QWORD *)(v43 + 560),
            *(unsigned __int8 *)(a1 + 2503));
        }
      }
      else
      {
        v44 = qword_905FD0; /*0x4f2eec*/
        if ( !qword_905FD0 ) /*0x4f2ef6*/
        {
          v96 = operator new(0x6E8u); /*0x4f2f02*/
          qword_905FD0 = sub_2723A0(v96); /*0x4f2f0f*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f2f20*/
          v44 = qword_905FD0; /*0x4f2f22*/
        }
        v45 = *(_QWORD *)(v44 + 568); /*0x4f2f29*/
        v46 = *(_BYTE *)(a1 + 2503); /*0x4f2f30*/
        if ( v45 ) /*0x4f2f3a*/
        {
          LOBYTE(v39) = v46 == 0; /*0x4f2f3e*/
          LOBYTE(v40) = 1; /*0x4f2f42*/
          GJBaseGameLayer_flipGravity(v45, a1, v39, v40); /*0x4f2f48*/
        }
        else
        {
          LOBYTE(v38) = v46 == 0; /*0x4f2f51*/
          LOBYTE(v39) = 1; /*0x4f2f54*/
          PlayerObject_flipGravity(a1, v38, v39); /*0x4f2f5a*/
        }
      }
    }
    v47 = -1; /*0x4f2f5f*/
    if ( !*(_BYTE *)(a1 + 2503) ) /*0x4f2f6a*/
      v47 = 1; /*0x4f2f71*/
    PlayerObject_setYVelocity(a1, (float)((float)((float)v47 * v37) * v36)); /*0x4f2f8b*/
    if ( *(_BYTE *)(a1 + 2499) ) /*0x4f2f90*/
    {
      PlayerObject_runBallRotation2(a1); /*0x4f2fd6*/
    }
    else if ( !*(_BYTE *)(a1 + 2610) && !*(_BYTE *)(a1 + 2540) ) /*0x4f2fa5*/
    {
      *(_WORD *)(a1 + 1840) = 0; /*0x4f2fae*/
      *(_BYTE *)(a1 + 1648) = 0; /*0x4f2fb6*/
      *(_DWORD *)(a1 + 1832) = 0; /*0x4f2fbd*/
      PlayerObject_runNormalRotation(a1, 0, 1.0); /*0x4f2fcc*/
    }
    if ( *(_BYTE *)(a1 + 2936) && !*(_BYTE *)(a1 + 1840) ) /*0x4f2fe7*/
      PlayerObject_animatePlatformerJump(a1, 1.0); /*0x4f2ff6*/
    v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f3001*/
    cocos2d::CCPoint::operator=(a1 + 2612, v48); /*0x4f3011*/
    sub_4F9B40(a1); /*0x4f301a*/
    *(_BYTE *)(a1 + 2705) = 1; /*0x4f301f*/
    if ( !*(_BYTE *)(a1 + 2499) ) /*0x4f3026*/
    {
      if ( *(_BYTE *)(a1 + 2508) ) /*0x4f302f*/
      {
        v49 = *(double *)(a1 + 2472) * 0.6000000238418579; /*0x4f3040*/
LABEL_127:
        *(double *)(a1 + 2472) = v49; /*0x4f3063*/
        *(_BYTE *)(a1 + 2445) = 0; /*0x4f306b*/
        goto LABEL_128; /*0x4f306b*/
      }
      if ( !*(_BYTE *)(a1 + 2502) ) /*0x4f3051*/
      {
LABEL_128:
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 13 ) /*0x4f3081*/
        {
          if ( *(_BYTE *)(a1 + 2028) ) /*0x4f3087*/
          {
            v53 = *(_BYTE *)(a1 + 2503); /*0x4f3094*/
            v54 = qword_905FD0; /*0x4f309b*/
            if ( !qword_905FD0 ) /*0x4f30a5*/
            {
              v97 = operator new(0x6E8u); /*0x4f30b1*/
              qword_905FD0 = sub_2723A0(v97); /*0x4f30be*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f30cf*/
              v54 = qword_905FD0; /*0x4f30d1*/
            }
            LOBYTE(v51) = v53 == 0; /*0x4f30da*/
            LOBYTE(v52) = 1; /*0x4f30de*/
            GJBaseGameLayer_flipGravity(*(_QWORD *)(v54 + 560), a1, v51, v52); /*0x4f30eb*/
            if ( !v9 ) /*0x4f30f3*/
            {
              v55 = qword_905FD0; /*0x4f30f9*/
              if ( !qword_905FD0 ) /*0x4f3103*/
              {
                v98 = operator new(0x6E8u); /*0x4f310f*/
                qword_905FD0 = sub_2723A0(v98); /*0x4f311c*/
                (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f312d*/
                v55 = qword_905FD0; /*0x4f312f*/
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v55 + 560) + 1328LL))( /*0x4f3147*/
                *(_QWORD *)(v55 + 560),
                *(unsigned __int8 *)(a1 + 2503));
            }
          }
          else
          {
            v56 = qword_905FD0; /*0x4f314f*/
            if ( !qword_905FD0 ) /*0x4f3159*/
            {
              v99 = operator new(0x6E8u); /*0x4f3165*/
              qword_905FD0 = sub_2723A0(v99); /*0x4f3172*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f3183*/
              v56 = qword_905FD0; /*0x4f3185*/
            }
            v57 = *(_QWORD *)(v56 + 568); /*0x4f318c*/
            v58 = *(_BYTE *)(a1 + 2503); /*0x4f3193*/
            if ( v57 ) /*0x4f319d*/
            {
              LOBYTE(v51) = v58 == 0; /*0x4f31a1*/
              LOBYTE(v52) = 1; /*0x4f31a5*/
              GJBaseGameLayer_flipGravity(v57, a1, v51, v52); /*0x4f31ab*/
            }
            else
            {
              LOBYTE(v50) = v58 == 0; /*0x4f31b4*/
              LOBYTE(v51) = 1; /*0x4f31b7*/
              PlayerObject_flipGravity(a1, v50, v51); /*0x4f31bd*/
            }
          }
        }
        if ( *(_BYTE *)(a1 + 2501) ) /*0x4f31c2*/
        {
          *((_QWORD *)&v88 + 1) = 29810; /*0x4f31ce*/
          v89 = 10; /*0x4f31d2*/
          v90 = 15; /*0x4f31da*/
          *(_QWORD *)&v88 = 0x6174735F706D756ALL; /*0x4f31ea*/
          CCAnimatedSprite_runAnimation(*(_QWORD *)(a1 + 2216), &v88); /*0x4f3209*/
        }
        else if ( *(_BYTE *)(a1 + 2502) ) /*0x4f3213*/
        {
          v59 = *(cocos2d::CCNode ***)(a1 + 2224); /*0x4f3220*/
          cocos2d::CCNode::stopAllActions(v59[86]); /*0x4f322e*/
          cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)v59, 1); /*0x4f323a*/
          sub_3F5A0(v59 + 79, &byte_6E86E0, 0); /*0x4f3251*/
          v60 = *(_QWORD *)(*(_QWORD *)(a1 + 2224) + 664LL); /*0x4f325d*/
          sub_86290(v60); /*0x4f3267*/
          v61 = *(cocos2d::CCNode **)(*(_QWORD *)(v60 + 320) + 688LL); /*0x4f3273*/
          if ( v61 ) /*0x4f327d*/
            cocos2d::CCNode::stopAllActions(v61); /*0x4f327f*/
          v62 = *(cocos2d::CCNode **)(*(_QWORD *)(v60 + 320) + 680LL); /*0x4f328c*/
          if ( v62 ) /*0x4f3296*/
            cocos2d::CCNode::stopAllActions(v62); /*0x4f3298*/
          v88 = 0; /*0x4f32a1*/
          v89 = 4; /*0x4f32a5*/
          v90 = 15; /*0x4f32ad*/
          strcpy((char *)&v88, "jump"); /*0x4f32bb*/
          sub_43850(*(_QWORD *)(a1 + 2224), &v88); /*0x4f32d5*/
        }
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 35 ) /*0x4f32e9*/
          *(_BYTE *)(a1 + 2394) = 1; /*0x4f32ef*/
        goto LABEL_172; /*0x4f32f6*/
      }
    }
    v49 = *(double *)(a1 + 2472) * 0.699999988079071; /*0x4f305b*/
    goto LABEL_127; /*0x4f305b*/
  }
  GJBaseGameLayer_teleportPlayer(*(_QWORD *)(a1 + 3112), a2, a1); /*0x4f2a25*/
  *(_BYTE *)(a1 + 2446) = 0; /*0x4f2a2a*/
LABEL_172:
  if ( !*(_BYTE *)(a1 + 2025) ) /*0x4f3417*/
  {
    v67 = qword_905FD0; /*0x4f3424*/
    if ( !qword_905FD0 ) /*0x4f342e*/
    {
      v100 = operator new(0x6E8u); /*0x4f343a*/
      qword_905FD0 = sub_2723A0(v100); /*0x4f3447*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f3458*/
      v67 = qword_905FD0; /*0x4f345a*/
    }
    if ( !*(_BYTE *)(v67 + 957) /*0x4f34a1*/
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1400LL))(a2)
      && *(_BYTE *)(a1 + 2028)
      && !v9
      && *(_DWORD *)(a2 + 1036) != 3643 )
    {
      LOWORD(v103) = -14081; /*0x4f34a7*/
      v68 = 0; /*0x4f34ad*/
      v69 = -14081; /*0x4f34b0*/
      switch ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) ) /*0x4f34e7*/
      {
        case 0xCu: /*0x4f34e7*/
        case 0x26u: /*0x4f34e7*/
          LOWORD(v103) = 255; /*0x4f34fb*/
          v68 = -1; /*0x4f3501*/
          v69 = 255; /*0x4f3504*/
          break; /*0x4f3508*/
        case 0xDu: /*0x4f34e7*/
          LOWORD(v103) = -256; /*0x4f34e9*/
          v68 = -1; /*0x4f34ef*/
          v69 = -256; /*0x4f34f2*/
          break; /*0x4f34f6*/
        case 0x1Du: /*0x4f34e7*/
        case 0x25u: /*0x4f34e7*/
          LOWORD(v103) = -256; /*0x4f350d*/
          v69 = -256; /*0x4f3513*/
          break; /*0x4f3517*/
        case 0x20u: /*0x4f34e7*/
          v70 = qword_905FD0; /*0x4f351c*/
          if ( !qword_905FD0 ) /*0x4f3526*/
          {
            v101 = operator new(0x6E8u); /*0x4f3532*/
            qword_905FD0 = sub_2723A0(v101); /*0x4f353f*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f3550*/
            v70 = qword_905FD0; /*0x4f3552*/
          }
          v71 = sub_362560(*(_QWORD *)(*(_QWORD *)(v70 + 560) + 2472LL), 1007); /*0x4f356c*/
          if ( v71 ) /*0x4f3574*/
          {
            v69 = *(_WORD *)(v71 + 327); /*0x4f3576*/
            v68 = *(_BYTE *)(v71 + 329); /*0x4f357d*/
          }
          else
          {
            v69 = -1; /*0x4f3587*/
            v68 = -1; /*0x4f358e*/
          }
          break; /*0x4f3585*/
        case 0x23u: /*0x4f34e7*/
          LOWORD(v103) = 25855; /*0x4f3598*/
          v69 = 25855; /*0x4f359e*/
          break; /*0x4f35a2*/
        case 0x24u: /*0x4f34e7*/
          v72 = *(_QWORD *)(a2 + 896); /*0x4f35b3*/
          if ( v72 ) /*0x4f35bd*/
            v73 = v72 + 320; /*0x4f35bf*/
          else
            v73 = a2 + 320; /*0x4f35c8*/
          v74 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73); /*0x4f35d2*/
          v69 = *(_WORD *)v74; /*0x4f35d5*/
          v68 = *(_BYTE *)(v74 + 2); /*0x4f35d8*/
          break; /*0x4f35d8*/
        case 0x2Bu: /*0x4f34e7*/
          LOWORD(v103) = 13055; /*0x4f35a4*/
          v68 = -1; /*0x4f35aa*/
          v69 = 13055; /*0x4f35ad*/
          break; /*0x4f35b1*/
        default:
          break;
      }
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2); /*0x4f35dd*/
      LOBYTE(v75) = 1; /*0x4f3603*/
      v79 = CCCircleWave_create(v77, v76, v78, v75, 1); /*0x4f361e*/
      *(_WORD *)(v79 + 340) = v69; /*0x4f3621*/
      *(_BYTE *)(v79 + 342) = v68; /*0x4f3628*/
      v80 = *(_QWORD *)v79; /*0x4f362f*/
      v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2); /*0x4f363f*/
      (*(void (__fastcall **)(__int64, __int64))(v80 + 184))(v79, v81); /*0x4f3647*/
      v82 = *(cocos2d::CCObject **)(v79 + 320); /*0x4f364d*/
      if ( v82 ) /*0x4f3657*/
        cocos2d::CCObject::release(v82); /*0x4f3659*/
      *(_QWORD *)(v79 + 320) = a2; /*0x4f365f*/
      cocos2d::CCObject::retain((cocos2d::CCObject *)a2); /*0x4f3669*/
      cocos2d::CCNode::unschedule(v79, CCCircleWave_updatePosition); /*0x4f3679*/
      v83 = *(_QWORD *)v79; /*0x4f367f*/
      v84 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v79 + 320) + 200LL))(*(_QWORD *)(v79 + 320)); /*0x4f368c*/
      (*(void (__fastcall **)(__int64, __int64))(v83 + 184))(v79, v84); /*0x4f3698*/
      v85 = qword_905FD0; /*0x4f369e*/
      if ( !qword_905FD0 ) /*0x4f36a8*/
      {
        v102 = operator new(0x6E8u); /*0x4f36b4*/
        qword_905FD0 = sub_2723A0(v102); /*0x4f36c1*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f36d2*/
        v85 = qword_905FD0; /*0x4f36d4*/
      }
      v86 = *(_QWORD *)(v85 + 560); /*0x4f36db*/
      v87 = v86 + 14712; /*0x4f36e2*/
      if ( !v86 ) /*0x4f36ec*/
        v87 = 0; /*0x4f36ec*/
      *(_QWORD *)(v79 + 368) = v87; /*0x4f36f0*/
      cocos2d::CCArray::addObject( /*0x4f3708*/
        *(cocos2d::CCArray **)(*(_QWORD *)(v85 + 560) + 15016LL),
        (struct cocos2d::CCObject *)v79);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4f371e*/
        *(_QWORD *)(a1 + 3120),
        v79,
        0);
    }
  }
  if ( !*(_BYTE *)(a1 + 653) ) /*0x4f3724*/
    sub_6429C0(a2); /*0x4f3730*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 1384LL))(a2, a1); /*0x4f373e*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1680LL))(a2); /*0x4f374a*/
  PlayerObject_incrementJumps(a1); /*0x4f3753*/
}

// [62/109] Address: 0x4f3c30
// Method: PlayerObject::flipGravity
// Hidden C++ exception states: #wind=3
void __fastcall PlayerObject_flipGravity(__int64 a1, char a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  __int16 v11; // [rsp+38h] [rbp+10h]

  if ( *(_BYTE *)(a1 + 2503) != a2 ) /*0x4f3c4f*/
  {
    sub_4FA2B0(a1); /*0x4f3c55*/
    *(_BYTE *)(a1 + 2503) = a2; /*0x4f3c5a*/
    v6 = *(_QWORD *)(a1 + 3112); /*0x4f3c61*/
    if ( v6 ) /*0x4f3c6b*/
    {
      v7 = 10; /*0x4f3c7a*/
      if ( !a2 ) /*0x4f3c7f*/
        v7 = 11; /*0x4f3c81*/
      sub_337190(v6, v7, 0, *(unsigned int *)(a1 + 924)); /*0x4f3c86*/
    }
    *(_QWORD *)(a1 + 2056) = *(_QWORD *)(a1 + 2728); /*0x4f3c92*/
    *(_QWORD *)(a1 + 2408) = 0; /*0x4f3c99*/
    *(_QWORD *)(a1 + 2400) = 0; /*0x4f3ca4*/
    *(_BYTE *)(a1 + 2609) = 0; /*0x4f3caf*/
    if ( *(_BYTE *)(a1 + 2489) || *(_BYTE *)(a1 + 2488) ) /*0x4f3cbf*/
      *(_BYTE *)(a1 + 1684) = *(_BYTE *)(a1 + 1684) == 0; /*0x4f3cd2*/
    cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a1 + 1456)); /*0x4f3cdf*/
    cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a1 + 1464)); /*0x4f3cec*/
    cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a1 + 1472)); /*0x4f3cf9*/
    cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a1 + 1480)); /*0x4f3d06*/
    *(_QWORD *)(a1 + 1504) = -1; /*0x4f3d0c*/
    *(_QWORD *)(a1 + 1488) = -1; /*0x4f3d17*/
    *(_QWORD *)(a1 + 1496) = -1; /*0x4f3d22*/
    if ( !*(_BYTE *)(a1 + 2025) ) /*0x4f3d2d*/
    {
      *(double *)(a1 + 2472) = *(double *)(a1 + 2472) * 0.5; /*0x4f3d46*/
      if ( !a3 ) /*0x4f3d51*/
      {
        if ( a2 ) /*0x4f3d66*/
        {
          v11 = -14081; /*0x4f3d68*/
          BYTE2(v10) = 0; /*0x4f3d6f*/
        }
        else
        {
          v11 = -27136; /*0x4f3d76*/
          BYTE2(v10) = -1; /*0x4f3d7d*/
        }
        LOWORD(v10) = v11; /*0x4f3d87*/
        PlayerObject_spawnPortalCircle(a1, (__int64)&v10); /*0x4f3d8c*/
      }
    }
    PlayerObject_updatePlayerScale(a1); /*0x4f3d94*/
    PlayerObject_updatePlayerArt(a1); /*0x4f3d9c*/
    if ( !*(_BYTE *)(a1 + 2499) ) /*0x4f3da1*/
    {
      v8 = qword_905FD0; /*0x4f3daa*/
      if ( !qword_905FD0 ) /*0x4f3db4*/
      {
        v10 = operator new(0x6E8u); /*0x4f3dc0*/
        qword_905FD0 = sub_2723A0(v10); /*0x4f3dce*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f3ddf*/
        v8 = qword_905FD0; /*0x4f3de1*/
      }
      v9 = *(_QWORD *)(v8 + 560); /*0x4f3de8*/
      if ( v9 && !*(_BYTE *)(v9 + 13161) && !*(_BYTE *)(a1 + 2500) && !*(_BYTE *)(a1 + 2025) ) /*0x4f3e06*/
      {
        *(_BYTE *)(a1 + 2027) = 1; /*0x4f3e0f*/
        sub_4F9B40(a1); /*0x4f3e19*/
      }
    }
    cocos2d::CCPoint::operator=(a1 + 2612, a1 + 2568); /*0x4f3e2c*/
    *(_BYTE *)(a1 + 2505) = 0; /*0x4f3e32*/
    if ( *(_BYTE *)(a1 + 2499) ) /*0x4f3e39*/
    {
      *(_WORD *)(a1 + 1840) = 0; /*0x4f3e42*/
      *(_BYTE *)(a1 + 1648) = 0; /*0x4f3e4b*/
      *(_DWORD *)(a1 + 1832) = 0; /*0x4f3e52*/
      PlayerObject_runBallRotation2(a1); /*0x4f3e6e*/
    }
    else if ( *(_BYTE *)(a1 + 2508) ) /*0x4f3e73*/
    {
      sub_4F4850(a1); /*0x4f3e7f*/
    }
  }
}

// [63/109] Address: 0x4f3ea0
// Method: PlayerObject::playerIsFallingBugged
bool __fastcall PlayerObject_playerIsFallingBugged(__int64 a1)
{
  double v1; // xmm1_8
  float v2; // xmm0_4
  double v3; // xmm2_8
  double v5; // xmm2_8
  float v6; // xmm1_4

  if ( *(_BYTE *)(a1 + 2507) || *(_BYTE *)(a1 + 2936) || *(_BYTE *)(a1 + 2508) || *(_BYTE *)(a1 + 1377) ) /*0x4f3ebb*/
  {
    v5 = *(double *)(a1 + 2472); /*0x4f3f23*/
    v6 = *(double *)(a1 + 2000) + *(double *)(a1 + 2000); /*0x4f3f2f*/
    if ( *(_BYTE *)(a1 + 2503) ) /*0x4f3f14*/
      return v5 > (float)-v6; /*0x4f3f52*/
    else
      return v6 > v5; /*0x4f3f3c*/
  }
  else
  {
    v1 = *(double *)(a1 + 2000); /*0x4f3ecb*/
    v2 = v1; /*0x4f3ed3*/
    if ( *(_BYTE *)(a1 + 2721) ) /*0x4f3ec4*/
      v2 = -v1; /*0x4f3ee3*/
    v3 = *(double *)(a1 + 2472); /*0x4f3eee*/
    if ( *(_BYTE *)(a1 + 2503) ) /*0x4f3ee7*/
      return v3 > v1 + v1; /*0x4f3f10*/
    else
      return (float)(v2 + v2) > v3; /*0x4f3f04*/
  }
}

// [64/109] Address: 0x4f3f60
// Method: PlayerObject::toggleFlyMode
// Hidden C++ exception states: #wind=3
void __fastcall PlayerObject_toggleFlyMode(__int64 a1, char a2, char a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  float v10; // xmm2_4
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // [rsp+40h] [rbp+8h] BYREF
  __int16 v21; // [rsp+48h] [rbp+10h]

  if ( *(_BYTE *)(a1 + 2497) != a2 ) /*0x4f3f82*/
  {
    *(_QWORD *)(a1 + 2016) = *(_QWORD *)(a1 + 2728); /*0x4f3f8f*/
    *(_BYTE *)(a1 + 2497) = a2; /*0x4f3f96*/
    if ( a2 ) /*0x4f3f9e*/
      PlayerObject_switchedToMode(a1, 5); /*0x4f3fa5*/
    *(_WORD *)(a1 + 1840) = 0; /*0x4f3faa*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4f3fb3*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4f3fba*/
    *(double *)(a1 + 2472) = *(double *)(a1 + 2472) * 0.5; /*0x4f3fd4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4f3fe5*/
    *(_BYTE *)(a1 + 2580) = 0; /*0x4f3feb*/
    *(_BYTE *)(a1 + 2505) = 0; /*0x4f3ff2*/
    *(_BYTE *)(a1 + 2027) = 0; /*0x4f3ff9*/
    PlayerObject_removePendingCheckpoint(a1); /*0x4f4003*/
    if ( *(_BYTE *)(a1 + 2497) ) /*0x4f400b*/
    {
      sub_4E6C50(a1); /*0x4f4018*/
      v6 = (_DWORD *)qword_905FD0; /*0x4f401d*/
      if ( *(_BYTE *)(a1 + 2936) ) /*0x4f4024*/
      {
        if ( !qword_905FD0 ) /*0x4f40d3*/
        {
          v20 = operator new(0x6E8u); /*0x4f40df*/
          qword_905FD0 = sub_2723A0(v20); /*0x4f40ed*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f40fe*/
          v6 = (_DWORD *)qword_905FD0; /*0x4f4100*/
        }
        PlayerObject_updatePlayerJetpackFrame(a1, (unsigned int)(v6[229] - v6[230])); /*0x4f4116*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 160LL))(*(_QWORD *)(a1 + 1856)); /*0x4f412d*/
        v11 = **(_QWORD **)(a1 + 1856); /*0x4f413a*/
        v12 = *(_QWORD *)(a1 + 1856); /*0x4f413d*/
        v13 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 6.0, 4.0); /*0x4f4155*/
        (*(void (__fastcall **)(__int64, __int64))(v11 + 184))(v12, v13); /*0x4f4161*/
        v10 = 0.0; /*0x4f4167*/
      }
      else
      {
        if ( !qword_905FD0 ) /*0x4f4034*/
        {
          v20 = operator new(0x6E8u); /*0x4f4040*/
          qword_905FD0 = sub_2723A0(v20); /*0x4f404e*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f405f*/
          v6 = (_DWORD *)qword_905FD0; /*0x4f4061*/
        }
        PlayerObject_updatePlayerShipFrame(a1, (unsigned int)(v6[190] - v6[191])); /*0x4f4077*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 160LL))(*(_QWORD *)(a1 + 1856)); /*0x4f408e*/
        v7 = **(_QWORD **)(a1 + 1856); /*0x4f409b*/
        v8 = *(_QWORD *)(a1 + 1856); /*0x4f409e*/
        v9 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 0.0, 5.0); /*0x4f40b1*/
        (*(void (__fastcall **)(__int64, __int64))(v7 + 184))(v8, v9); /*0x4f40bd*/
        v10 = -5.0; /*0x4f40c3*/
      }
      v14 = **(_QWORD **)(a1 + 1888); /*0x4f4171*/
      v15 = *(_QWORD *)(a1 + 1888); /*0x4f4174*/
      v16 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 0.0, v10); /*0x4f417f*/
      (*(void (__fastcall **)(__int64, __int64))(v14 + 184))(v15, v16); /*0x4f418b*/
      LOBYTE(v17) = 1; /*0x4f419b*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1888) + 336LL))(*(_QWORD *)(a1 + 1888), v17); /*0x4f419d*/
      sub_4F9EE0(a1); /*0x4f41a6*/
      if ( !*(_BYTE *)(a1 + 1843) ) /*0x4f41ab*/
      {
        cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 2248)); /*0x4f41bb*/
        cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 2256)); /*0x4f41c8*/
      }
      cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2256)); /*0x4f41d5*/
      *(_BYTE *)(a1 + 2031) = 0; /*0x4f41db*/
      if ( *(_BYTE *)(a1 + 2030) ) /*0x4f41e2*/
        cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2240)); /*0x4f41f2*/
      *(_BYTE *)(a1 + 2030) = 0; /*0x4f41f8*/
      if ( !a3 ) /*0x4f4202*/
      {
        v21 = 255; /*0x4f4204*/
        LOWORD(v20) = 255; /*0x4f4210*/
        BYTE2(v20) = -1; /*0x4f4215*/
        PlayerObject_spawnPortalCircle(a1, (__int64)&v20); /*0x4f422a*/
      }
      sub_4F9B40(a1); /*0x4f4232*/
      PlayerObject_updatePlayerScale(a1); /*0x4f423a*/
      v19 = *(_QWORD *)(a1 + 1968); /*0x4f423f*/
      if ( v19 && !*(_BYTE *)(a1 + 2936) && !*(_BYTE *)(a1 + 1843) ) /*0x4f4254*/
      {
        LOBYTE(v18) = 1; /*0x4f4260*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 336LL))(v19, v18); /*0x4f4262*/
      }
    }
    else
    {
      PlayerObject_resetPlayerIcon(a1); /*0x4f426a*/
    }
    if ( a2 ) /*0x4f4272*/
    {
      PlayerObject_updatePlayerArt(a1); /*0x4f4277*/
      GJBaseGameLayer_checkRepellPlayer(a1); /*0x4f427f*/
    }
  }
}

// [65/109] Address: 0x4f42a0
// Method: PlayerObject::toggleBirdMode
// Hidden C++ exception states: #wind=2
void __fastcall PlayerObject_toggleBirdMode(__int64 a1, char a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int16 v15; // [rsp+20h] [rbp-48h] BYREF
  char v16; // [rsp+22h] [rbp-46h]
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  float v18[4]; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_BYTE *)(a1 + 2498) != a2 ) /*0x4f42d1*/
  {
    *(_QWORD *)(a1 + 2016) = *(_QWORD *)(a1 + 2728); /*0x4f42de*/
    *(_BYTE *)(a1 + 2498) = a2; /*0x4f42e5*/
    if ( a2 ) /*0x4f42ed*/
      PlayerObject_switchedToMode(a1, 19); /*0x4f42f4*/
    *(_WORD *)(a1 + 1840) = 0; /*0x4f42f9*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4f4302*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4f4309*/
    *(double *)(a1 + 2472) = *(double *)(a1 + 2472) * 0.5; /*0x4f4323*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4f4334*/
    *(_BYTE *)(a1 + 2580) = 0; /*0x4f433a*/
    *(_BYTE *)(a1 + 2505) = 0; /*0x4f4341*/
    *(_BYTE *)(a1 + 2027) = 0; /*0x4f4348*/
    PlayerObject_removePendingCheckpoint(a1); /*0x4f4352*/
    if ( *(_BYTE *)(a1 + 2498) ) /*0x4f4357*/
    {
      v6 = qword_905FD0; /*0x4f4364*/
      if ( !qword_905FD0 ) /*0x4f436e*/
      {
        v17 = operator new(0x6E8u); /*0x4f437a*/
        qword_905FD0 = sub_2723A0(v17); /*0x4f4388*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f4399*/
        v6 = qword_905FD0; /*0x4f439b*/
      }
      sub_4F7DD0(a1, (unsigned int)(*(_DWORD *)(v6 + 784) - *(_DWORD *)(v6 + 788))); /*0x4f43b1*/
      sub_4E6C50(a1); /*0x4f43b9*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 160LL))(*(_QWORD *)(a1 + 1856)); /*0x4f43d0*/
      v7 = **(_QWORD **)(a1 + 1856); /*0x4f43dd*/
      v8 = *(_QWORD *)(a1 + 1856); /*0x4f43e0*/
      v9 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, 0.0, 5.0); /*0x4f43f3*/
      (*(void (__fastcall **)(__int64, __int64))(v7 + 184))(v8, v9); /*0x4f43ff*/
      LOBYTE(v10) = 1; /*0x4f440f*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1888) + 336LL))(*(_QWORD *)(a1 + 1888), v10); /*0x4f4411*/
      v11 = **(_QWORD **)(a1 + 1888); /*0x4f441e*/
      v12 = *(_QWORD *)(a1 + 1888); /*0x4f4421*/
      v13 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, 0.0, -7.0); /*0x4f4434*/
      (*(void (__fastcall **)(__int64, __int64))(v11 + 184))(v12, v13); /*0x4f4440*/
      sub_4F9EE0(a1); /*0x4f4449*/
      v15 = *(_WORD *)(a1 + 2709); /*0x4f4455*/
      v18[0] = (float)(unsigned __int8)v15 / 255.0; /*0x4f4470*/
      v18[1] = (float)HIBYTE(v15) / 255.0; /*0x4f4486*/
      v18[2] = (float)*(unsigned __int8 *)(a1 + 2711) / 255.0; /*0x4f449e*/
      v18[3] = 1.0; /*0x4f44a4*/
      (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 2248) + 1352LL))(*(_QWORD *)(a1 + 2248), v18); /*0x4f44bb*/
      (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 2248) + 1384LL))(*(_QWORD *)(a1 + 2248), v18); /*0x4f44d0*/
      if ( !*(_BYTE *)(a1 + 1843) ) /*0x4f44d6*/
        cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 2248)); /*0x4f44e6*/
      if ( *(_BYTE *)(a1 + 2030) ) /*0x4f44ec*/
        cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2240)); /*0x4f44fc*/
      *(_BYTE *)(a1 + 2030) = 0; /*0x4f4502*/
      if ( !a3 ) /*0x4f450c*/
      {
        v15 = -14081; /*0x4f451a*/
        v16 = 0; /*0x4f451f*/
        PlayerObject_spawnPortalCircle(a1, (__int64)&v15); /*0x4f4534*/
      }
      sub_4F9B40(a1); /*0x4f453c*/
      PlayerObject_updatePlayerScale(a1); /*0x4f4544*/
      LOBYTE(v14) = 1; /*0x4f4553*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1904) + 336LL))(*(_QWORD *)(a1 + 1904), v14); /*0x4f4555*/
    }
    else
    {
      PlayerObject_resetPlayerIcon(a1); /*0x4f4560*/
    }
    if ( a2 ) /*0x4f4568*/
    {
      PlayerObject_updatePlayerArt(a1); /*0x4f456d*/
      GJBaseGameLayer_checkRepellPlayer(a1); /*0x4f4575*/
    }
  }
}

// [66/109] Address: 0x4f45a0
// Method: PlayerObject::toggleSwingMode
// Hidden C++ exception states: #wind=2
void __fastcall PlayerObject_toggleSwingMode(__int64 a1, char a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  __int16 v11; // [rsp+38h] [rbp+10h]

  if ( *(_BYTE *)(a1 + 2508) != a2 ) /*0x4f45bf*/
  {
    *(_QWORD *)(a1 + 2016) = *(_QWORD *)(a1 + 2728); /*0x4f45cc*/
    *(_BYTE *)(a1 + 2508) = a2; /*0x4f45d3*/
    if ( a2 ) /*0x4f45db*/
      PlayerObject_switchedToMode(a1, 41); /*0x4f45e2*/
    *(_WORD *)(a1 + 1840) = 0; /*0x4f45e7*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4f45f0*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4f45f7*/
    *(double *)(a1 + 2472) = *(double *)(a1 + 2472) * 0.5; /*0x4f4611*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4f4622*/
    *(_BYTE *)(a1 + 2580) = 0; /*0x4f4628*/
    *(_BYTE *)(a1 + 2505) = 0; /*0x4f462f*/
    *(_BYTE *)(a1 + 2027) = 0; /*0x4f4636*/
    PlayerObject_removePendingCheckpoint(a1); /*0x4f4640*/
    if ( *(_BYTE *)(a1 + 2508) ) /*0x4f4645*/
    {
      v6 = qword_905FD0; /*0x4f4652*/
      if ( !qword_905FD0 ) /*0x4f465c*/
      {
        v10 = operator new(0x6E8u); /*0x4f4668*/
        qword_905FD0 = sub_2723A0(v10); /*0x4f4676*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f4687*/
        v6 = qword_905FD0; /*0x4f4689*/
      }
      PlayerObject_updatePlayerSwingFrame(a1, (unsigned int)(*(_DWORD *)(v6 + 832) - *(_DWORD *)(v6 + 836))); /*0x4f469f*/
      if ( !a3 ) /*0x4f46a7*/
      {
        v11 = -14081; /*0x4f46a9*/
        LOWORD(v10) = -14081; /*0x4f46b5*/
        BYTE2(v10) = 0; /*0x4f46ba*/
        PlayerObject_spawnPortalCircle(a1, (__int64)&v10); /*0x4f46cf*/
      }
      if ( !*(_BYTE *)(a1 + 1843) ) /*0x4f46d4*/
      {
        cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 2248)); /*0x4f46e4*/
        cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 2256)); /*0x4f46f1*/
      }
      cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2256)); /*0x4f46fe*/
      *(_BYTE *)(a1 + 2031) = 0; /*0x4f4704*/
      if ( *(_BYTE *)(a1 + 2030) ) /*0x4f470b*/
        cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2240)); /*0x4f471b*/
      *(_BYTE *)(a1 + 2030) = 0; /*0x4f4721*/
      sub_4F9B40(a1); /*0x4f472b*/
      LOBYTE(v7) = 1; /*0x4f473a*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1928) + 336LL))(*(_QWORD *)(a1 + 1928), v7); /*0x4f473c*/
      PlayerFireBoostSprite_loopFireAnimation(*(_QWORD *)(a1 + 1928)); /*0x4f4749*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1936) + 160LL))(*(_QWORD *)(a1 + 1936)); /*0x4f4760*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1944) + 160LL))(*(_QWORD *)(a1 + 1944)); /*0x4f4778*/
      LOBYTE(v8) = 1; /*0x4f4788*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1936) + 336LL))(*(_QWORD *)(a1 + 1936), v8); /*0x4f478a*/
      LOBYTE(v9) = 1; /*0x4f479a*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1944) + 336LL))(*(_QWORD *)(a1 + 1944), v9); /*0x4f479c*/
      cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 2296)); /*0x4f47a9*/
      cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 2304)); /*0x4f47b6*/
      cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2296)); /*0x4f47c3*/
      cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2304)); /*0x4f47d0*/
      sub_4F4850(a1); /*0x4f47d9*/
    }
    else
    {
      PlayerObject_resetPlayerIcon(a1); /*0x4f47e3*/
      PlayerObject_updatePlayerFrame(a1, *(unsigned int *)(a1 + 1568)); /*0x4f47f1*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4f4814*/
      PlayerObject_disableSwingFire(a1); /*0x4f481d*/
    }
    if ( a2 ) /*0x4f4825*/
    {
      PlayerObject_updatePlayerArt(a1); /*0x4f482a*/
      GJBaseGameLayer_checkRepellPlayer(a1); /*0x4f4832*/
    }
  }
}

// [67/109] Address: 0x4f4970
// Method: PlayerObject::disableSwingFire
void __fastcall PlayerObject_disableSwingFire(cocos2d::CCNode **a1)
{
  (*(void (__fastcall **)(cocos2d::CCNode *, _QWORD))(*(_QWORD *)a1[241] + 336LL))(a1[241], 0); /*0x4f4985*/
  cocos2d::CCNode::stopAllActions(a1[241]); /*0x4f4992*/
  (*(void (__fastcall **)(cocos2d::CCNode *, _QWORD))(*(_QWORD *)a1[242] + 336LL))(a1[242], 0); /*0x4f49a4*/
  cocos2d::CCNode::stopAllActions(a1[242]); /*0x4f49b1*/
  (*(void (__fastcall **)(cocos2d::CCNode *, _QWORD))(*(_QWORD *)a1[243] + 336LL))(a1[243], 0); /*0x4f49c3*/
  cocos2d::CCNode::stopAllActions(a1[243]); /*0x4f49d0*/
  cocos2d::CCParticleSystem::stopSystem(a1[287]); /*0x4f49dd*/
  cocos2d::CCParticleSystem::stopSystem(a1[288]); /*0x4f49ef*/
}

// [68/109] Address: 0x4f4a00
// Method: PlayerObject::toggleDartMode
// Hidden C++ exception states: #wind=3
void __fastcall PlayerObject_toggleDartMode(__int64 a1, char a2, char a3)
{
  unsigned int v6; // ebx
  float v7; // xmm6_4
  __int64 v8; // rax
  __int16 *v9; // rdx
  cocos2d::CCArray **v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rbx
  void *v16; // [rsp+60h] [rbp+8h] BYREF
  __int16 v17; // [rsp+68h] [rbp+10h]

  if ( *(_BYTE *)(a1 + 2500) != a2 ) /*0x4f4a21*/
  {
    *(_QWORD *)(a1 + 2016) = *(_QWORD *)(a1 + 2728); /*0x4f4a2e*/
    *(_BYTE *)(a1 + 2500) = a2; /*0x4f4a35*/
    if ( a2 ) /*0x4f4a3d*/
      PlayerObject_switchedToMode(a1, 26); /*0x4f4a44*/
    *(_WORD *)(a1 + 1840) = 0; /*0x4f4a49*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4f4a52*/
    v6 = 0; /*0x4f4a59*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4f4a5b*/
    *(double *)(a1 + 2472) = *(double *)(a1 + 2472) * 0.5; /*0x4f4a71*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4f4a82*/
    *(_BYTE *)(a1 + 2580) = 0; /*0x4f4a88*/
    *(_BYTE *)(a1 + 2505) = 0; /*0x4f4a8e*/
    *(_BYTE *)(a1 + 2027) = 0; /*0x4f4a94*/
    PlayerObject_removePendingCheckpoint(a1); /*0x4f4a9d*/
    v7 = 1.0; /*0x4f4aa2*/
    if ( *(_BYTE *)(a1 + 2500) ) /*0x4f4aaa*/
    {
      *(_DWORD *)(a1 + 2744) = 1101004800; /*0x4f4ab6*/
      *(_DWORD *)(a1 + 764) = 1092616192; /*0x4f4ac0*/
      *(_DWORD *)(a1 + 768) = 1092616192; /*0x4f4aca*/
      v8 = qword_905FD0; /*0x4f4ad4*/
      if ( !qword_905FD0 ) /*0x4f4ade*/
      {
        v16 = operator new(0x6E8u); /*0x4f4aea*/
        qword_905FD0 = sub_2723A0(v16); /*0x4f4af8*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f4b09*/
        v8 = qword_905FD0; /*0x4f4b0b*/
      }
      PlayerObject_updatePlayerDartFrame(a1, (unsigned int)(*(_DWORD *)(v8 + 796) - *(_DWORD *)(v8 + 800))); /*0x4f4b21*/
      if ( !a3 ) /*0x4f4b29*/
      {
        v17 = -14081; /*0x4f4b2b*/
        LOWORD(v16) = -14081; /*0x4f4b37*/
        BYTE2(v16) = 0; /*0x4f4b3c*/
        PlayerObject_spawnPortalCircle(a1, (__int64)&v16); /*0x4f4b51*/
      }
      sub_4F9B40(a1); /*0x4f4b59*/
      PlayerObject_updatePlayerScale(a1); /*0x4f4b61*/
      if ( *(_BYTE *)(a1 + 2030) ) /*0x4f4b66*/
        cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2240)); /*0x4f4b76*/
      *(_BYTE *)(a1 + 2030) = 0; /*0x4f4b7c*/
      v9 = &word_6FF504; /*0x4f4b9b*/
      if ( !*(_BYTE *)(a1 + 2097) ) /*0x4f4b94*/
        v9 = &word_6FF508; /*0x4f4ba4*/
      (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1960) + 320LL))( /*0x4f4bab*/
        *(_QWORD *)(a1 + 1960) + 320LL,
        v9);
      v10 = *(cocos2d::CCArray ***)(a1 + 1976); /*0x4f4bad*/
      cocos2d::CCDrawNode::clear((cocos2d::CCDrawNode *)v10); /*0x4f4bb7*/
      cocos2d::CCArray::removeAllObjects(v10[52]); /*0x4f4bc4*/
      sub_4FA2B0(a1); /*0x4f4bcd*/
      if ( *(_BYTE *)(a1 + 2028) && !*(_BYTE *)(a1 + 2025) ) /*0x4f4bdf*/
      {
        v14 = qword_905FD0; /*0x4f4bec*/
        if ( !qword_905FD0 ) /*0x4f4bf6*/
        {
          v16 = operator new(0x6E8u); /*0x4f4c02*/
          qword_905FD0 = sub_2723A0(v16); /*0x4f4c10*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f4c21*/
          v14 = qword_905FD0; /*0x4f4c23*/
        }
        if ( !*(_BYTE *)(*(_QWORD *)(v14 + 560) + 13149LL) && !a3 ) /*0x4f4c41*/
        {
          v15 = CCCircleWave_create(v12, v11, v13, 0, 1); /*0x4f4c6c*/
          *(_WORD *)(v15 + 340) = *(_WORD *)(a1 + 2706); /*0x4f4c76*/
          *(_BYTE *)(v15 + 342) = *(_BYTE *)(a1 + 2708); /*0x4f4c84*/
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 184LL))(v15, a1 + 2568); /*0x4f4c9e*/
          *(_DWORD *)(v15 + 352) = 1; /*0x4f4ca1*/
          *(_DWORD *)(v15 + 356) = 4; /*0x4f4cab*/
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4f4cc5*/
            *(_QWORD *)(a1 + 3120),
            v15,
            0);
        }
      }
    }
    else
    {
      if ( *(float *)(a1 + 2552) == 1.0 || !*(_BYTE *)(a1 + 2752) ) /*0x4f4cdc*/
        v6 = *(_DWORD *)(a1 + 1568); /*0x4f4ce4*/
      PlayerObject_updatePlayerFrame(a1, v6); /*0x4f4cef*/
      PlayerObject_resetPlayerIcon(a1); /*0x4f4cf7*/
    }
    if ( *(_BYTE *)(a1 + 2500) ) /*0x4f4cfc*/
      v7 = 0.80000001; /*0x4f4d05*/
    cocos2d::CCMotionStreak::setStroke( /*0x4f4d28*/
      *(cocos2d::CCMotionStreak **)(a1 + 1960),
      (float)(*(float *)(a1 + 2348) * *(float *)(a1 + 2552)) * v7);
    if ( a2 ) /*0x4f4d31*/
    {
      PlayerObject_updatePlayerArt(a1); /*0x4f4d36*/
      GJBaseGameLayer_checkRepellPlayer(a1); /*0x4f4d3e*/
    }
  }
}

// [69/109] Address: 0x4f4d60
// Method: PlayerObject::resetPlayerIcon
__int64 __fastcall PlayerObject_resetPlayerIcon(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int16 *v5; // rdx
  __int64 v6; // rcx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF

  sub_4E6C50(a1); /*0x4f4d78*/
  v2 = *(_BYTE *)(a1 + 2610) == 0; /*0x4f4d7d*/
  *(_DWORD *)(a1 + 764) = 1106247680; /*0x4f4d8c*/
  *(_DWORD *)(a1 + 768) = 1106247680; /*0x4f4d96*/
  *(_DWORD *)(a1 + 2744) = 1106247680; /*0x4f4da0*/
  if ( v2 && !*(_BYTE *)(a1 + 2540) ) /*0x4f4dac*/
  {
    v2 = *(_BYTE *)(a1 + 2499) == 0; /*0x4f4db5*/
    *(_WORD *)(a1 + 1840) = 0; /*0x4f4dbf*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4f4dc8*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4f4dcf*/
    if ( v2 ) /*0x4f4dd9*/
      PlayerObject_runNormalRotation(a1, 0, 1.0); /*0x4f4de0*/
    else
      PlayerObject_runBallRotation(a1, 1.0); /*0x4f4dea*/
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 160LL))(*(_QWORD *)(a1 + 1856)); /*0x4f4dfc*/
  (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 1856) + 184LL))(*(_QWORD *)(a1 + 1856), &unk_905428); /*0x4f4e13*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1888) + 336LL))(*(_QWORD *)(a1 + 1888), 0); /*0x4f4e25*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1904) + 336LL))(*(_QWORD *)(a1 + 1904), 0); /*0x4f4e37*/
  sub_4F9EE0(a1); /*0x4f4e40*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2248)); /*0x4f4e4c*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2256)); /*0x4f4e59*/
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2264)); /*0x4f4e66*/
  v3 = *(_QWORD *)(a1 + 2248); /*0x4f4e6c*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_831370); /*0x4f4e80*/
  (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v3 + 1352LL))(v3, &si128); /*0x4f4e88*/
  v4 = *(_QWORD *)(a1 + 2248); /*0x4f4e8e*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_831340); /*0x4f4ea2*/
  (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v4 + 1384LL))(v4, &si128); /*0x4f4eaa*/
  v5 = &word_6FF508; /*0x4f4eb7*/
  if ( !*(_BYTE *)(a1 + 2352) ) /*0x4f4ec5*/
    v5 = (__int16 *)(a1 + 2709); /*0x4f4ed1*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1960) + 320LL))(*(_QWORD *)(a1 + 1960) + 320LL, v5); /*0x4f4ed8*/
  if ( !*(_BYTE *)(a1 + 2353) ) /*0x4f4eda*/
    cocos2d::CCMotionStreak::stopStroke(*(cocos2d::CCMotionStreak **)(a1 + 1960)); /*0x4f4eea*/
  if ( *(_BYTE *)(a1 + 2432) ) /*0x4f4ef0*/
  {
    *(_BYTE *)(a1 + 2432) = 0; /*0x4f4f00*/
    sub_4F9CA0(a1); /*0x4f4f1e*/
  }
  v6 = *(_QWORD *)(a1 + 1968); /*0x4f4f23*/
  if ( v6 ) /*0x4f4f2d*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 336LL))(v6, 0); /*0x4f4f34*/
  return PlayerObject_updatePlayerScale(a1); /*0x4f4f42*/
}

// [70/109] Address: 0x4f4f60
// Method: PlayerObject::stopBurstEffect
void __fastcall PlayerObject_stopBurstEffect(__int64 a1)
{
  cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 2272)); /*0x4f4f67*/
}

// [71/109] Address: 0x4f4f70
// Method: PlayerObject::levelFlipping
// Hidden C++ exception states: #wind=1
bool __fastcall PlayerObject_levelFlipping(__int64 a1)
{
  __int64 v1; // rax
  float v2; // xmm1_4
  void *v4; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 2028) ) /*0x4f4f74*/
    return 0; /*0x4f4f74*/
  v1 = qword_905FD0; /*0x4f4f7d*/
  if ( !qword_905FD0 ) /*0x4f4f87*/
  {
    v4 = operator new(0x6E8u); /*0x4f4f93*/
    qword_905FD0 = sub_2723A0(v4); /*0x4f4fa1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f4fb2*/
    v1 = qword_905FD0; /*0x4f4fb4*/
  }
  v2 = *(float *)(*(_QWORD *)(v1 + 560) + 1052LL); /*0x4f4fc2*/
  return v2 != 0.0 && v2 != 1.0; /*0x4f4fdf*/
}

// [72/109] Address: 0x4f4ff0
// Method: PlayerObject::toggleRollMode
// Hidden C++ exception states: #wind=2
void __fastcall PlayerObject_toggleRollMode(__int64 a1, char a2, char a3)
{
  float v6; // xmm0_4
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  __int16 v11; // [rsp+38h] [rbp+10h]

  if ( *(_BYTE *)(a1 + 2499) != a2 ) /*0x4f500f*/
  {
    *(_QWORD *)(a1 + 2016) = *(_QWORD *)(a1 + 2728); /*0x4f501c*/
    *(_BYTE *)(a1 + 2499) = a2; /*0x4f5023*/
    if ( a2 ) /*0x4f502b*/
      PlayerObject_switchedToMode(a1, 16); /*0x4f5032*/
    v6 = *(float *)(a1 + 2552); /*0x4f5037*/
    if ( *(_BYTE *)(a1 + 2499) ) /*0x4f503f*/
    {
      if ( v6 == 1.0 || !*(_BYTE *)(a1 + 2752) ) /*0x4f5057*/
      {
        v8 = qword_905FD0; /*0x4f5064*/
        if ( !qword_905FD0 ) /*0x4f506e*/
        {
          v10 = operator new(0x6E8u); /*0x4f507a*/
          qword_905FD0 = sub_2723A0(v10); /*0x4f5088*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f5099*/
          v8 = qword_905FD0; /*0x4f509b*/
        }
        v7 = (unsigned int)(*(_DWORD *)(v8 + 772) - *(_DWORD *)(v8 + 776)); /*0x4f50a8*/
      }
      else
      {
        v7 = 0; /*0x4f5060*/
      }
      PlayerObject_updatePlayerRollFrame(a1, v7); /*0x4f50b1*/
      if ( !a3 ) /*0x4f50b9*/
      {
        v11 = 13055; /*0x4f50bb*/
        LOWORD(v10) = 13055; /*0x4f50c7*/
        BYTE2(v10) = 50; /*0x4f50cc*/
        PlayerObject_spawnPortalCircle(a1, (__int64)&v10); /*0x4f50e1*/
      }
    }
    else
    {
      if ( v6 == 1.0 || !*(_BYTE *)(a1 + 2752) ) /*0x4f50f3*/
        v9 = *(unsigned int *)(a1 + 1568); /*0x4f5100*/
      else
        v9 = 0; /*0x4f50fc*/
      PlayerObject_updatePlayerFrame(a1, v9); /*0x4f5109*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4f512c*/
    }
    *(_WORD *)(a1 + 1840) = 0; /*0x4f5132*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4f513b*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4f5142*/
    if ( a2 ) /*0x4f514f*/
    {
      PlayerObject_updatePlayerArt(a1); /*0x4f5154*/
      GJBaseGameLayer_checkRepellPlayer(a1); /*0x4f515c*/
    }
  }
}

// [73/109] Address: 0x4f5900
// Method: PlayerObject::switchedToMode
void __fastcall PlayerObject_switchedToMode(__int64 a1, int a2)
{
  if ( ((a2 != 5 && (PlayerObject_toggleFlyMode(a1, 0, 0), a2 == 19) || (PlayerObject_toggleBirdMode(a1, 0, 0), a2 != 16)) /*0x4f597b*/
     && (PlayerObject_toggleRollMode(a1, 0, 0), a2 == 26)
     || (PlayerObject_toggleDartMode(a1, 0, 0), a2 != 27))
    && (sub_4F5180(a1, 0, 0), a2 == 33)
    || (UnDecorator::getZName(a1, 0, 0), a2 != 41) )
  {
    PlayerObject_toggleSwingMode(a1, 0, 0); /*0x4f5985*/
  }
}

// [74/109] Address: 0x4f59a0
// Method: PlayerObject::hitGroundNoJump
__int64 __fastcall PlayerObject_hitGroundNoJump(__int64 a1)
{
  char v1; // di
  char v2; // bl
  __int64 v4; // xmm6_8
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 2505); /*0x4f59af*/
  v2 = *(_BYTE *)(a1 + 2580); /*0x4f59b8*/
  v4 = *(_QWORD *)(a1 + 2584); /*0x4f59c7*/
  result = PlayerObject_hitGround(a1, 0); /*0x4f59cf*/
  *(_QWORD *)(a1 + 2584) = v4; /*0x4f59d4*/
  *(_BYTE *)(a1 + 2580) = v2; /*0x4f59e1*/
  *(_BYTE *)(a1 + 2505) = v1; /*0x4f59ec*/
  return result; /*0x4f59dc*/
}

// [75/109] Address: 0x4f5a00
// Method: PlayerObject::hitGround
void __fastcall PlayerObject_hitGround(__int64 a1, __int16 *a2, char a3)
{
  __int64 v6; // r8
  char v7; // dl
  int v8; // r12d
  double v9; // xmm1_8
  int v10; // eax
  char v11; // r15
  __int64 v12; // rcx
  bool v13; // cf
  bool v14; // zf
  __int64 v15; // r9
  __int64 v16; // rdx
  bool v17; // cf
  bool v18; // zf
  bool v19; // cf
  bool v20; // zf
  bool v21; // cf
  bool v22; // zf
  float v23; // xmm0_4
  __int64 v24; // rcx
  __int64 v25; // rdx
  char v26; // cl
  __int64 v27; // rax
  cocos2d::CCParticleSystem *v28; // rsi
  float *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  void (__fastcall *v33)(cocos2d::CCParticleSystem *); // rdx
  int v34; // xmm0_4
  __int64 v35; // rax
  __int64 v36; // rax
  float v37; // xmm0_4
  __int64 v38; // rax
  _BYTE v39[32]; // [rsp+20h] [rbp-68h] BYREF
  int v40; // [rsp+90h] [rbp+8h] BYREF
  int v41; // [rsp+94h] [rbp+Ch]
  char v42; // [rsp+98h] [rbp+10h] BYREF

  if ( a2 ) /*0x4f5a37*/
    v6 = (unsigned int)a2[511]; /*0x4f5a39*/
  else
    v6 = 0; /*0x4f5a43*/
  *(_DWORD *)(a1 + 2548) = v6; /*0x4f5a46*/
  v7 = *(_BYTE *)(a1 + 2503); /*0x4f5a52*/
  v8 = -1; /*0x4f5a59*/
  v9 = *(double *)(a1 + 2472); /*0x4f5a5f*/
  v10 = -1; /*0x4f5a67*/
  *(_BYTE *)(a1 + 2864) = 0; /*0x4f5a6a*/
  v11 = 0; /*0x4f5a78*/
  v12 = *(_QWORD *)(a1 + 3112); /*0x4f5a7c*/
  if ( !v7 ) /*0x4f5a83*/
    v10 = 1; /*0x4f5a83*/
  if ( (double)v10 * v9 > 5.0 ) /*0x4f5a9a*/
    v11 = 1; /*0x4f5a9a*/
  if ( !v12 || *(_BYTE *)(a1 + 2500) ) /*0x4f5aa7*/
    goto LABEL_48; /*0x4f5aae*/
  if ( v7 ) /*0x4f5ab6*/
  {
    v13 = v9 < 14.0; /*0x4f5ac6*/
    v14 = v9 == 14.0; /*0x4f5ac6*/
  }
  else
  {
    v13 = v9 > -14.0; /*0x4f5ac0*/
    v14 = v9 == -14.0; /*0x4f5ac0*/
  }
  if ( !v13 && !v14 ) /*0x4f5ace*/
  {
    v15 = *(unsigned int *)(a1 + 924); /*0x4f5ad5*/
    v16 = 5; /*0x4f5adc*/
LABEL_31:
    sub_337190(v12, v16, v6, v15); /*0x4f5b7c*/
    goto LABEL_32; /*0x4f5b7c*/
  }
  if ( v7 ) /*0x4f5ae8*/
  {
    v17 = v9 < 8.0; /*0x4f5af8*/
    v18 = v9 == 8.0; /*0x4f5af8*/
  }
  else
  {
    v17 = v9 > -8.0; /*0x4f5af2*/
    v18 = v9 == -8.0; /*0x4f5af2*/
  }
  if ( !v17 && !v18 ) /*0x4f5b00*/
  {
    v15 = *(unsigned int *)(a1 + 924); /*0x4f5b07*/
    v16 = 4; /*0x4f5b0e*/
    goto LABEL_31; /*0x4f5b13*/
  }
  if ( v7 ) /*0x4f5b17*/
  {
    v19 = v9 < 4.0; /*0x4f5b27*/
    v20 = v9 == 4.0; /*0x4f5b27*/
  }
  else
  {
    v19 = v9 > -4.0; /*0x4f5b21*/
    v20 = v9 == -4.0; /*0x4f5b21*/
  }
  if ( !v19 && !v20 ) /*0x4f5b2f*/
  {
    v15 = *(unsigned int *)(a1 + 924); /*0x4f5b36*/
    v16 = 3; /*0x4f5b3d*/
    goto LABEL_31; /*0x4f5b42*/
  }
  if ( v7 ) /*0x4f5b46*/
  {
    v21 = v9 < 1.0; /*0x4f5b56*/
    v22 = v9 == 1.0; /*0x4f5b56*/
  }
  else
  {
    v21 = v9 > -1.0; /*0x4f5b50*/
    v22 = v9 == -1.0; /*0x4f5b50*/
  }
  if ( !v21 && !v22 ) /*0x4f5b5e*/
  {
    v16 = 1; /*0x4f5b65*/
    v15 = *(unsigned int *)(a1 + 924); /*0x4f5b67*/
    if ( !*(_BYTE *)(a1 + 2580) ) /*0x4f5b6e*/
      v16 = 2; /*0x4f5b77*/
    goto LABEL_31; /*0x4f5b77*/
  }
LABEL_32:
  if ( *(float *)(a1 + 3140) != 0.0 ) /*0x4f5b8e*/
  {
    v23 = fabs(*(float *)(a1 + 3140) - *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1) + 4)); /*0x4f5bad*/
    if ( v23 > 0.0 ) /*0x4f5bb7*/
    {
      if ( v23 <= 450.0 ) /*0x4f5bc4*/
      {
        if ( v23 <= 300.0 ) /*0x4f5be0*/
        {
          if ( v23 <= 150.0 ) /*0x4f5bfc*/
          {
            if ( v23 <= 7.5 ) /*0x4f5c18*/
              goto LABEL_47; /*0x4f5c18*/
            v24 = *(_QWORD *)(a1 + 3112); /*0x4f5c1a*/
            if ( !v24 ) /*0x4f5c24*/
              goto LABEL_47; /*0x4f5c24*/
            v25 = 65; /*0x4f5c26*/
            goto LABEL_46; /*0x4f5c26*/
          }
          v24 = *(_QWORD *)(a1 + 3112); /*0x4f5bfe*/
          if ( v24 ) /*0x4f5c08*/
          {
            v25 = 66; /*0x4f5c0a*/
            goto LABEL_46; /*0x4f5c0f*/
          }
        }
        else
        {
          v24 = *(_QWORD *)(a1 + 3112); /*0x4f5be2*/
          if ( v24 ) /*0x4f5bec*/
          {
            v25 = 67; /*0x4f5bee*/
            goto LABEL_46; /*0x4f5bf3*/
          }
        }
      }
      else
      {
        v24 = *(_QWORD *)(a1 + 3112); /*0x4f5bc6*/
        if ( v24 ) /*0x4f5bd0*/
        {
          v25 = 68; /*0x4f5bd2*/
LABEL_46:
          sub_337190(v24, v25, *(unsigned int *)(a1 + 2548), *(unsigned int *)(a1 + 924)); /*0x4f5c2b*/
        }
      }
    }
LABEL_47:
    *(_DWORD *)(a1 + 3140) = 0; /*0x4f5c3e*/
  }
LABEL_48:
  *(_QWORD *)(a1 + 2472) = 0; /*0x4f5c45*/
  *(_BYTE *)(a1 + 2849) = 0; /*0x4f5c4c*/
  if ( !*(_BYTE *)(a1 + 2580) && !a3 && !PlayerObject_levelFlipping(a1) && !*(_BYTE *)(a1 + 1843) ) /*0x4f5c79*/
  {
    v26 = *(_BYTE *)(a1 + 2312); /*0x4f5c86*/
    v27 = 2320; /*0x4f5c99*/
    if ( !v26 ) /*0x4f5c9e*/
      v27 = 2328; /*0x4f5c9e*/
    v28 = *(cocos2d::CCParticleSystem **)(v27 + a1); /*0x4f5ca1*/
    *(_BYTE *)(a1 + 2312) = v26 == 0; /*0x4f5ca8*/
    if ( (*(unsigned int (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v28 + 904LL))(v28, 2328) <= 2 ) /*0x4f5cbd*/
    {
      (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v28 + 1000LL))(v28); /*0x4f5ce5*/
      if ( !*(_BYTE *)(a1 + 2503) ) /*0x4f5cf2*/
        v8 = 1; /*0x4f5cf9*/
      v29 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2320) + 1032LL))(*(_QWORD *)(a1 + 2320)); /*0x4f5d00*/
      v30 = *(_QWORD *)v28; /*0x4f5d06*/
      v31 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, *v29, (float)v8 * *(float *)(a1 + 2340)); /*0x4f5d25*/
      (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v30 + 1040))(v28, v31); /*0x4f5d31*/
      v32 = 15; /*0x4f5d3e*/
      if ( !*(_BYTE *)(a1 + 2503) ) /*0x4f5d37*/
        v32 = -15; /*0x4f5d4b*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v40, 0.0, (float)v32 * *(float *)(a1 + 2552)); /*0x4f5d65*/
      v33 = *(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v28 + 352LL); /*0x4f5d71*/
      if ( *(_BYTE *)(a1 + 2507) ) /*0x4f5d78*/
      {
        v34 = v41; /*0x4f5d8a*/
        v41 = v40; /*0x4f5d93*/
        v40 = v34; /*0x4f5da4*/
      }
      v33(v28); /*0x4f5db2*/
      if ( a2 && (*(unsigned int (__fastcall **)(__int16 *))(*(_QWORD *)a2 + 1648LL))(a2) == 25 ) /*0x4f5dc8*/
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v28 + 352LL))(v28); /*0x4f5e00*/
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f5e0c*/
      cocos2d::CCPoint::operator+(v35, &v42, &v40); /*0x4f5e25*/
      (*(void (__fastcall **)(cocos2d::CCParticleSystem *, char *))(*(_QWORD *)v28 + 184LL))(v28, &v42); /*0x4f5e39*/
      cocos2d::CCParticleSystem::resetSystem(v28); /*0x4f5e42*/
    }
  }
  if ( !*(_BYTE *)(a1 + 1440) ) /*0x4f5e64*/
  {
    sub_4FA2B0(a1); /*0x4f5e70*/
    *(_BYTE *)(a1 + 1440) = 1; /*0x4f5e75*/
  }
  if ( !*(_BYTE *)(a1 + 2580) && !*(_BYTE *)(a1 + 2540) ) /*0x4f5e85*/
  {
    if ( *(_BYTE *)(a1 + 2501) ) /*0x4f5e8e*/
    {
      v36 = sub_3E4F0(v39, a1 + 3032); /*0x4f5ea3*/
      CCAnimatedSprite_runAnimation(*(_QWORD *)(a1 + 2216), v36); /*0x4f5eb2*/
    }
    else if ( *(_BYTE *)(a1 + 2502) ) /*0x4f5eb9*/
    {
      sub_4FB190(a1); /*0x4f5ec5*/
    }
  }
  *(_BYTE *)(a1 + 2580) = 1; /*0x4f5ece*/
  *(_BYTE *)(a1 + 2609) = a3 ^ 1; /*0x4f5ed5*/
  if ( !v11 ) /*0x4f5ee9*/
  {
    *(_QWORD *)(a1 + 2584) = *(_QWORD *)(a1 + 2728); /*0x4f5ef2*/
    *(_BYTE *)(a1 + 2505) = 1; /*0x4f5ef9*/
  }
  *(_BYTE *)(a1 + 2032) = 1; /*0x4f5f00*/
  *(_DWORD *)(a1 + 2788) = 2; /*0x4f5f07*/
  if ( *(_BYTE *)(a1 + 2499) ) /*0x4f5f11*/
  {
    if ( *(_BYTE *)(a1 + 1648) && !*(_BYTE *)(a1 + 2488) ) /*0x4f5f54*/
    {
      *(_WORD *)(a1 + 1840) = 0; /*0x4f5f5d*/
      *(_BYTE *)(a1 + 1648) = 0; /*0x4f5f65*/
      *(_DWORD *)(a1 + 1832) = 0; /*0x4f5f6c*/
    }
    if ( *(_BYTE *)(a1 + 1841) ) /*0x4f5f73*/
    {
      *(_WORD *)(a1 + 1840) = 0; /*0x4f5f7c*/
      *(_BYTE *)(a1 + 1648) = 0; /*0x4f5f84*/
      *(_DWORD *)(a1 + 1832) = 0; /*0x4f5f8b*/
    }
    if ( !*(_BYTE *)(a1 + 1840) && !*(_BYTE *)(a1 + 2610) && !*(_BYTE *)(a1 + 2540) ) /*0x4f5fa4*/
    {
      *(_WORD *)(a1 + 1840) = 0; /*0x4f5fb8*/
      *(_BYTE *)(a1 + 1648) = 0; /*0x4f5fc0*/
      *(_DWORD *)(a1 + 1832) = 0; /*0x4f5fc7*/
      PlayerObject_runBallRotation(a1, 1.0); /*0x4f5fce*/
    }
  }
  else if ( *(_BYTE *)(a1 + 1840) || *(_BYTE *)(a1 + 2489) ) /*0x4f5f23*/
  {
    *(_WORD *)(a1 + 1840) = 0; /*0x4f5f30*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4f5f38*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4f5f3f*/
  }
  if ( !*(_BYTE *)(a1 + 2499) /*0x4f6009*/
    && !*(_BYTE *)(a1 + 2497)
    && !*(_BYTE *)(a1 + 2498)
    && !*(_BYTE *)(a1 + 2500)
    && !*(_BYTE *)(a1 + 2508)
    && !*(_BYTE *)(a1 + 2488)
    && !*(_BYTE *)(a1 + 2489) )
  {
    v37 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x4f6018*/
    if ( (int)v37 != 90 * ((int)v37 / 90) ) /*0x4f603a*/
    {
      *(_WORD *)(a1 + 1840) = 0; /*0x4f603c*/
      *(_BYTE *)(a1 + 1648) = 0; /*0x4f6044*/
      *(_DWORD *)(a1 + 1832) = 0; /*0x4f604b*/
    }
  }
  v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f6058*/
  cocos2d::CCPoint::operator=(a1 + 2612, v38); /*0x4f6068*/
  if ( !*(_BYTE *)(a1 + 2497) /*0x4f6097*/
    && !*(_BYTE *)(a1 + 2498)
    && !*(_BYTE *)(a1 + 2500)
    && !*(_BYTE *)(a1 + 2508)
    && *(_BYTE *)(a1 + 2027) )
  {
    if ( !*(_BYTE *)(a1 + 2353) ) /*0x4f60a0*/
      cocos2d::CCMotionStreak::stopStroke(*(cocos2d::CCMotionStreak **)(a1 + 1960)); /*0x4f60b0*/
    if ( *(_BYTE *)(a1 + 2432) ) /*0x4f60b6*/
    {
      *(_BYTE *)(a1 + 2432) = 0; /*0x4f60c6*/
      sub_4F9CA0(a1); /*0x4f60e4*/
    }
    *(_BYTE *)(a1 + 2433) = 1; /*0x4f60e9*/
  }
  *(_BYTE *)(a1 + 2027) = 0; /*0x4f60f0*/
}

// [77/109] Address: 0x4f6dc0
// Method: PlayerObject::setColor
__int64 __fastcall PlayerObject_setColor(cocos2d::CCSprite *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  cocos2d::CCSprite::setColor(a1, (const struct cocos2d::_ccColor3B *)a2); /*0x4f6dd0*/
  (**(void (__fastcall ***)(__int64, __int64))(*((_QWORD *)a1 + 192) + 320LL))(*((_QWORD *)a1 + 192) + 320LL, a2); /*0x4f6dea*/
  (**(void (__fastcall ***)(__int64, __int64))(*((_QWORD *)a1 + 196) + 320LL))(*((_QWORD *)a1 + 196) + 320LL, a2); /*0x4f6e00*/
  v4 = *((_QWORD *)a1 + 237); /*0x4f6e05*/
  *(_WORD *)(v4 + 753) = *(_WORD *)a2; /*0x4f6e0c*/
  *(_BYTE *)(v4 + 755) = *(_BYTE *)(a2 + 2); /*0x4f6e17*/
  sub_3A9500(); /*0x4f6e1d*/
  v5 = *((_QWORD *)a1 + 238); /*0x4f6e25*/
  *(_WORD *)(v5 + 753) = *(_WORD *)a2; /*0x4f6e2c*/
  *(_BYTE *)(v5 + 755) = *(_BYTE *)(a2 + 2); /*0x4f6e37*/
  return sub_3A9500(); /*0x4f6e3d*/
}

// [78/109] Address: 0x4f6e50
// Method: PlayerObject::setSecondColor
__int64 __fastcall PlayerObject_setSecondColor(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  (**(void (__fastcall ***)(__int64))(a1[233] + 320LL))(a1[233] + 320LL); /*0x4f6e71*/
  (**(void (__fastcall ***)(__int64, __int64))(a1[237] + 320LL))(a1[237] + 320LL, a2); /*0x4f6e87*/
  v4 = a1[277]; /*0x4f6e8c*/
  *(_WORD *)(v4 + 756) = *(_WORD *)a2; /*0x4f6e93*/
  *(_BYTE *)(v4 + 758) = *(_BYTE *)(a2 + 2); /*0x4f6e9e*/
  sub_3A9500(); /*0x4f6ea4*/
  v5 = a1[278]; /*0x4f6eac*/
  *(_WORD *)(v5 + 756) = *(_WORD *)a2; /*0x4f6eb3*/
  *(_BYTE *)(v5 + 758) = *(_BYTE *)(a2 + 2); /*0x4f6ebe*/
  return sub_3A9500(); /*0x4f6ec4*/
}

// [79/109] Address: 0x4f75d0
// Method: PlayerObject::setOpacity
__int64 __fastcall PlayerObject_setOpacity(_QWORD *a1, unsigned __int8 a2)
{
  GameObject_setOpacity(); /*0x4f75e0*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[192] + 320LL) + 40LL))(a1[192] + 320LL, a2); /*0x4f75fa*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[193] + 320LL) + 40LL))(a1[193] + 320LL, a2); /*0x4f7612*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[194] + 320LL) + 40LL))(a1[194] + 320LL, a2); /*0x4f762a*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[195] + 320LL) + 40LL))(a1[195] + 320LL, a2); /*0x4f7642*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[196] + 320LL) + 40LL))(a1[196] + 320LL, a2); /*0x4f765a*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[197] + 320LL) + 40LL))(a1[197] + 320LL, a2); /*0x4f7672*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[198] + 320LL) + 40LL))(a1[198] + 320LL, a2); /*0x4f768a*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[199] + 320LL) + 40LL))(a1[199] + 320LL, a2); /*0x4f76a2*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[200] + 320LL) + 40LL))(a1[200] + 320LL, a2); /*0x4f76ba*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[237] + 320LL) + 40LL))(a1[237] + 320LL, a2); /*0x4f76d2*/
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[238] + 320LL) + 40LL))(a1[238] + 320LL, a2);
}

// [80/109] Address: 0x4f7700
// Method: PlayerObject::getRealPosition
cocos2d::CCPoint *__fastcall PlayerObject_getRealPosition(__int64 a1, cocos2d::CCPoint *a2)
{
  const struct cocos2d::CCPoint *v3; // rax

  v3 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f770c*/
  cocos2d::CCPoint::CCPoint(a2, v3); /*0x4f7718*/
  return a2; /*0x4f7721*/
}

// [81/109] Address: 0x4f7730
// Method: PlayerObject::updatePlayerFrame
// Hidden C++ exception states: #wind=1
__int64 __fastcall PlayerObject_updatePlayerFrame(__int64 a1, int a2)
{
  int v3; // r15d
  __int64 v4; // rcx
  cocos2d::CCString *v5; // rax
  const char *CString; // rsi
  cocos2d::CCString *v7; // rax
  const char *v8; // rbp
  cocos2d::CCString *v9; // rax
  const char *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rbx
  cocos2d::CCSpriteFrameCache *v13; // rax
  struct cocos2d::CCSpriteFrame *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  cocos2d::CCSpriteFrameCache *v17; // rax
  struct cocos2d::CCSpriteFrame *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  cocos2d::CCSpriteFrameCache *v21; // rax
  struct cocos2d::CCSpriteFrame *v22; // rax
  const struct cocos2d::CCSize *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  cocos2d::CCString *v27; // rax
  const char *v28; // rax
  __int64 v29; // r8
  __int128 v31; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-38h]
  __int64 v33; // [rsp+38h] [rbp-30h]
  float v34; // [rsp+70h] [rbp+8h] BYREF
  float v35; // [rsp+74h] [rbp+Ch]
  void *v36; // [rsp+80h] [rbp+18h] BYREF

  v3 = 485; /*0x4f7749*/
  if ( a2 < 485 ) /*0x4f7752*/
    v3 = a2; /*0x4f7752*/
  if ( v3 <= 0 ) /*0x4f7759*/
    v3 = 0; /*0x4f7764*/
  else
    *(_DWORD *)(a1 + 1568) = v3; /*0x4f775b*/
  v4 = qword_905FD0; /*0x4f7767*/
  if ( !qword_905FD0 ) /*0x4f7771*/
  {
    v36 = operator new(0x6E8u); /*0x4f777d*/
    qword_905FD0 = sub_2723A0(v36); /*0x4f778e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f779f*/
    v4 = qword_905FD0; /*0x4f77a1*/
  }
  sub_279AB0(v4, (unsigned int)v3, 0, *(unsigned int *)(a1 + 3068)); /*0x4f77b5*/
  v5 = cocos2d::CCString::createWithFormat("player_%02d_001.png", v3); /*0x4f77c4*/
  CString = cocos2d::CCString::getCString(v5); /*0x4f77d3*/
  v7 = cocos2d::CCString::createWithFormat("player_%02d_2_001.png", v3); /*0x4f77e0*/
  v8 = cocos2d::CCString::getCString(v7); /*0x4f77ef*/
  v9 = cocos2d::CCString::createWithFormat("player_%02d_glow_001.png", v3); /*0x4f77fc*/
  v10 = cocos2d::CCString::getCString(v9); /*0x4f780b*/
  v11 = **(_QWORD **)(a1 + 1856); /*0x4f7815*/
  v12 = *(_QWORD *)(a1 + 1856); /*0x4f7818*/
  v13 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f781b*/
  v14 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v13, CString); /*0x4f7827*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v11 + 1008))(v12, v14); /*0x4f7833*/
  v15 = **(_QWORD **)(a1 + 1864); /*0x4f7840*/
  v16 = *(_QWORD *)(a1 + 1864); /*0x4f7843*/
  v17 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f7846*/
  v18 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v17, v8); /*0x4f7852*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v15 + 1008))(v16, v18); /*0x4f785e*/
  v19 = **(_QWORD **)(a1 + 1880); /*0x4f786b*/
  v20 = *(_QWORD *)(a1 + 1880); /*0x4f786e*/
  v21 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f7871*/
  v22 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v21, v10); /*0x4f787d*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v19 + 1008))(v20, v22); /*0x4f7889*/
  v23 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 320LL))(*(_QWORD *)(a1 + 1856)); /*0x4f7899*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v34, v23); /*0x4f78a7*/
  v24 = **(_QWORD **)(a1 + 1864); /*0x4f78b4*/
  v25 = *(_QWORD *)(a1 + 1864); /*0x4f78b7*/
  v26 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v36, v34 * 0.5, v35 * 0.5); /*0x4f78de*/
  (*(void (__fastcall **)(__int64, __int64))(v24 + 184))(v25, v26); /*0x4f78ea*/
  v27 = cocos2d::CCString::createWithFormat("player_%02d_extra_001.png", v3); /*0x4f78fa*/
  v28 = cocos2d::CCString::getCString(v27); /*0x4f7903*/
  v31 = 0; /*0x4f790c*/
  v32 = 0; /*0x4f7911*/
  v33 = 0; /*0x4f791a*/
  v29 = -1; /*0x4f7923*/
  do /*0x4f7933*/
    ++v29; /*0x4f7930*/
  while ( v28[v29] ); /*0x4f7933*/
  sub_3C230(&v31); /*0x4f7942*/
  return sub_4F8710(a1, &v31); /*0x4f7954*/
}

// [82/109] Address: 0x4f7970
// Method: PlayerObject::updatePlayerShipFrame
// Hidden C++ exception states: #wind=1
__int64 __fastcall PlayerObject_updatePlayerShipFrame(__int64 a1, int a2)
{
  int v3; // eax
  unsigned int v4; // r15d
  __int64 v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rsi
  cocos2d::CCString *v8; // rax
  const char *v9; // rbp
  cocos2d::CCString *v10; // rax
  const char *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  cocos2d::CCSpriteFrameCache *v14; // rax
  struct cocos2d::CCSpriteFrame *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  cocos2d::CCSpriteFrameCache *v22; // rax
  struct cocos2d::CCSpriteFrame *v23; // rax
  const struct cocos2d::CCSize *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  cocos2d::CCString *v28; // rax
  const char *v29; // rax
  __int64 v30; // r8
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+38h] [rbp-30h]
  float v35; // [rsp+70h] [rbp+8h] BYREF
  float v36; // [rsp+74h] [rbp+Ch]
  void *v37; // [rsp+80h] [rbp+18h] BYREF

  v3 = 169; /*0x4f7989*/
  if ( a2 < 169 ) /*0x4f7990*/
    v3 = a2; /*0x4f7990*/
  v4 = 1; /*0x4f7993*/
  if ( v3 > 1 ) /*0x4f799c*/
    v4 = v3; /*0x4f799c*/
  v5 = qword_905FD0; /*0x4f79a0*/
  if ( !qword_905FD0 ) /*0x4f79aa*/
  {
    v37 = operator new(0x6E8u); /*0x4f79b6*/
    qword_905FD0 = sub_2723A0(v37); /*0x4f79c7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f79d8*/
    v5 = qword_905FD0; /*0x4f79da*/
  }
  sub_279AB0(v5, v4, 1, *(unsigned int *)(a1 + 3068)); /*0x4f79f1*/
  v6 = cocos2d::CCString::createWithFormat("ship_%02d_001.png", v4); /*0x4f7a00*/
  CString = cocos2d::CCString::getCString(v6); /*0x4f7a0f*/
  v8 = cocos2d::CCString::createWithFormat("ship_%02d_2_001.png", v4); /*0x4f7a1c*/
  v9 = cocos2d::CCString::getCString(v8); /*0x4f7a2b*/
  v10 = cocos2d::CCString::createWithFormat("ship_%02d_glow_001.png", v4); /*0x4f7a38*/
  v11 = cocos2d::CCString::getCString(v10); /*0x4f7a47*/
  v12 = **(_QWORD **)(a1 + 1888); /*0x4f7a51*/
  v13 = *(_QWORD *)(a1 + 1888); /*0x4f7a54*/
  v14 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f7a57*/
  v15 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v14, CString); /*0x4f7a63*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v12 + 1008))(v13, v15); /*0x4f7a6f*/
  v16 = **(_QWORD **)(a1 + 1896); /*0x4f7a7c*/
  v17 = *(_QWORD *)(a1 + 1896); /*0x4f7a7f*/
  v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f7a82*/
  v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v9); /*0x4f7a8e*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v16 + 1008))(v17, v19); /*0x4f7a9a*/
  v20 = **(_QWORD **)(a1 + 1920); /*0x4f7aa7*/
  v21 = *(_QWORD *)(a1 + 1920); /*0x4f7aaa*/
  v22 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f7aad*/
  v23 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v22, v11); /*0x4f7ab9*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v20 + 1008))(v21, v23); /*0x4f7ac5*/
  v24 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1888) + 320LL))(*(_QWORD *)(a1 + 1888)); /*0x4f7ad5*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v35, v24); /*0x4f7ae3*/
  v25 = **(_QWORD **)(a1 + 1896); /*0x4f7af0*/
  v26 = *(_QWORD *)(a1 + 1896); /*0x4f7af3*/
  v27 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37, v35 * 0.5, v36 * 0.5); /*0x4f7b1a*/
  (*(void (__fastcall **)(__int64, __int64))(v25 + 184))(v26, v27); /*0x4f7b26*/
  v28 = cocos2d::CCString::createWithFormat("ship_%02d_extra_001.png", v4); /*0x4f7b36*/
  v29 = cocos2d::CCString::getCString(v28); /*0x4f7b3f*/
  v32 = 0; /*0x4f7b48*/
  v33 = 0; /*0x4f7b4f*/
  v34 = 0; /*0x4f7b54*/
  v30 = -1; /*0x4f7b59*/
  do /*0x4f7b63*/
    ++v30; /*0x4f7b60*/
  while ( v29[v30] ); /*0x4f7b63*/
  sub_3C230(&v32); /*0x4f7b71*/
  return sub_4F8810(a1, &v32); /*0x4f7b83*/
}

// [83/109] Address: 0x4f7ba0
// Method: PlayerObject::updatePlayerJetpackFrame
__int64 __fastcall PlayerObject_updatePlayerJetpackFrame(__int64 a1, int a2)
{
  int v3; // eax
  unsigned int v4; // r15d
  __int64 v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rsi
  cocos2d::CCString *v8; // rax
  const char *v9; // rbp
  cocos2d::CCString *v10; // rax
  const char *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  cocos2d::CCSpriteFrameCache *v14; // rax
  struct cocos2d::CCSpriteFrame *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  cocos2d::CCSpriteFrameCache *v22; // rax
  struct cocos2d::CCSpriteFrame *v23; // rax
  const struct cocos2d::CCSize *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  cocos2d::CCString *v28; // rax
  const char *v29; // rax
  __int64 v30; // r8
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+38h] [rbp-30h]
  float v35; // [rsp+70h] [rbp+8h] BYREF
  float v36; // [rsp+74h] [rbp+Ch]
  void *v37; // [rsp+80h] [rbp+18h] BYREF

  v3 = 8; /*0x4f7bb9*/
  if ( a2 < 8 ) /*0x4f7bc0*/
    v3 = a2; /*0x4f7bc0*/
  v4 = 1; /*0x4f7bc3*/
  if ( v3 > 1 ) /*0x4f7bcc*/
    v4 = v3; /*0x4f7bcc*/
  v5 = qword_905FD0; /*0x4f7bd0*/
  if ( !qword_905FD0 ) /*0x4f7bda*/
  {
    v37 = operator new(0x6E8u); /*0x4f7be6*/
    qword_905FD0 = sub_2723A0(v37); /*0x4f7bf7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f7c08*/
    v5 = qword_905FD0; /*0x4f7c0a*/
  }
  sub_279AB0(v5, v4, 8, *(unsigned int *)(a1 + 3068)); /*0x4f7c21*/
  v6 = cocos2d::CCString::createWithFormat("jetpack_%02d_001.png", v4); /*0x4f7c30*/
  CString = cocos2d::CCString::getCString(v6); /*0x4f7c3f*/
  v8 = cocos2d::CCString::createWithFormat("jetpack_%02d_2_001.png", v4); /*0x4f7c4c*/
  v9 = cocos2d::CCString::getCString(v8); /*0x4f7c5b*/
  v10 = cocos2d::CCString::createWithFormat("jetpack_%02d_glow_001.png", v4); /*0x4f7c68*/
  v11 = cocos2d::CCString::getCString(v10); /*0x4f7c77*/
  v12 = **(_QWORD **)(a1 + 1888); /*0x4f7c81*/
  v13 = *(_QWORD *)(a1 + 1888); /*0x4f7c84*/
  v14 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f7c87*/
  v15 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v14, CString); /*0x4f7c93*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v12 + 1008))(v13, v15); /*0x4f7c9f*/
  v16 = **(_QWORD **)(a1 + 1896); /*0x4f7cac*/
  v17 = *(_QWORD *)(a1 + 1896); /*0x4f7caf*/
  v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f7cb2*/
  v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v9); /*0x4f7cbe*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v16 + 1008))(v17, v19); /*0x4f7cca*/
  v20 = **(_QWORD **)(a1 + 1920); /*0x4f7cd7*/
  v21 = *(_QWORD *)(a1 + 1920); /*0x4f7cda*/
  v22 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f7cdd*/
  v23 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v22, v11); /*0x4f7ce9*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v20 + 1008))(v21, v23); /*0x4f7cf5*/
  v24 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1888) + 320LL))(*(_QWORD *)(a1 + 1888)); /*0x4f7d05*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v35, v24); /*0x4f7d13*/
  v25 = **(_QWORD **)(a1 + 1896); /*0x4f7d20*/
  v26 = *(_QWORD *)(a1 + 1896); /*0x4f7d23*/
  v27 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37, v35 * 0.5, v36 * 0.5); /*0x4f7d4a*/
  (*(void (__fastcall **)(__int64, __int64))(v25 + 184))(v26, v27); /*0x4f7d56*/
  v28 = cocos2d::CCString::createWithFormat("jetpack_%02d_extra_001.png", v4); /*0x4f7d66*/
  v29 = cocos2d::CCString::getCString(v28); /*0x4f7d6f*/
  v32 = 0; /*0x4f7d78*/
  v33 = 0; /*0x4f7d7f*/
  v34 = 0; /*0x4f7d84*/
  v30 = -1; /*0x4f7d89*/
  do /*0x4f7d93*/
    ++v30; /*0x4f7d90*/
  while ( v29[v30] ); /*0x4f7d93*/
  sub_3C230(&v32); /*0x4f7da1*/
  return sub_4F8810(a1, &v32); /*0x4f7db3*/
}

// [84/109] Address: 0x4f8080
// Method: PlayerObject::updatePlayerRollFrame
// Hidden C++ exception states: #wind=1
__int64 __fastcall PlayerObject_updatePlayerRollFrame(__int64 a1, int a2)
{
  int v3; // eax
  unsigned int v4; // r15d
  __int64 v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rsi
  cocos2d::CCString *v8; // rax
  const char *v9; // rbp
  cocos2d::CCString *v10; // rax
  const char *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  cocos2d::CCSpriteFrameCache *v14; // rax
  struct cocos2d::CCSpriteFrame *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  cocos2d::CCSpriteFrameCache *v22; // rax
  struct cocos2d::CCSpriteFrame *v23; // rax
  const struct cocos2d::CCSize *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  cocos2d::CCString *v28; // rax
  const char *v29; // rax
  __int64 v30; // r8
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+38h] [rbp-30h]
  float v35; // [rsp+70h] [rbp+8h] BYREF
  float v36; // [rsp+74h] [rbp+Ch]
  void *v37; // [rsp+80h] [rbp+18h] BYREF

  v3 = 118; /*0x4f8099*/
  if ( a2 < 118 ) /*0x4f80a0*/
    v3 = a2; /*0x4f80a0*/
  v4 = 0; /*0x4f80a3*/
  if ( v3 > 0 ) /*0x4f80a8*/
    v4 = v3; /*0x4f80a8*/
  v5 = qword_905FD0; /*0x4f80ac*/
  if ( !qword_905FD0 ) /*0x4f80b6*/
  {
    v37 = operator new(0x6E8u); /*0x4f80c2*/
    qword_905FD0 = sub_2723A0(v37); /*0x4f80d3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f80e4*/
    v5 = qword_905FD0; /*0x4f80e6*/
  }
  sub_279AB0(v5, v4, 2, *(unsigned int *)(a1 + 3068)); /*0x4f80fd*/
  v6 = cocos2d::CCString::createWithFormat("player_ball_%02d_001.png", v4); /*0x4f810c*/
  CString = cocos2d::CCString::getCString(v6); /*0x4f811b*/
  v8 = cocos2d::CCString::createWithFormat("player_ball_%02d_2_001.png", v4); /*0x4f8128*/
  v9 = cocos2d::CCString::getCString(v8); /*0x4f8137*/
  v10 = cocos2d::CCString::createWithFormat("player_ball_%02d_glow_001.png", v4); /*0x4f8144*/
  v11 = cocos2d::CCString::getCString(v10); /*0x4f8153*/
  v12 = **(_QWORD **)(a1 + 1856); /*0x4f815d*/
  v13 = *(_QWORD *)(a1 + 1856); /*0x4f8160*/
  v14 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f8163*/
  v15 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v14, CString); /*0x4f816f*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v12 + 1008))(v13, v15); /*0x4f817b*/
  v16 = **(_QWORD **)(a1 + 1864); /*0x4f8188*/
  v17 = *(_QWORD *)(a1 + 1864); /*0x4f818b*/
  v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f818e*/
  v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v9); /*0x4f819a*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v16 + 1008))(v17, v19); /*0x4f81a6*/
  v20 = **(_QWORD **)(a1 + 1880); /*0x4f81b3*/
  v21 = *(_QWORD *)(a1 + 1880); /*0x4f81b6*/
  v22 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f81b9*/
  v23 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v22, v11); /*0x4f81c5*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v20 + 1008))(v21, v23); /*0x4f81d1*/
  v24 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 320LL))(*(_QWORD *)(a1 + 1856)); /*0x4f81e1*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v35, v24); /*0x4f81ef*/
  v25 = **(_QWORD **)(a1 + 1864); /*0x4f81fc*/
  v26 = *(_QWORD *)(a1 + 1864); /*0x4f81ff*/
  v27 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37, v35 * 0.5, v36 * 0.5); /*0x4f8226*/
  (*(void (__fastcall **)(__int64, __int64))(v25 + 184))(v26, v27); /*0x4f8232*/
  v28 = cocos2d::CCString::createWithFormat("player_ball_%02d_extra_001.png", v4); /*0x4f8242*/
  v29 = cocos2d::CCString::getCString(v28); /*0x4f824b*/
  v32 = 0; /*0x4f8254*/
  v33 = 0; /*0x4f8259*/
  v34 = 0; /*0x4f8262*/
  v30 = -1; /*0x4f826b*/
  do /*0x4f8275*/
    ++v30; /*0x4f8272*/
  while ( v29[v30] ); /*0x4f8275*/
  sub_3C230(&v32); /*0x4f8284*/
  return sub_4F8710(a1, &v32); /*0x4f8296*/
}

// [85/109] Address: 0x4f82b0
// Method: PlayerObject::updatePlayerSwingFrame
__int64 __fastcall PlayerObject_updatePlayerSwingFrame(__int64 a1, int a2)
{
  int v3; // eax
  unsigned int v4; // r15d
  __int64 v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rsi
  cocos2d::CCString *v8; // rax
  const char *v9; // rbp
  cocos2d::CCString *v10; // rax
  const char *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  cocos2d::CCSpriteFrameCache *v14; // rax
  struct cocos2d::CCSpriteFrame *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  cocos2d::CCSpriteFrameCache *v22; // rax
  struct cocos2d::CCSpriteFrame *v23; // rax
  const struct cocos2d::CCSize *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  cocos2d::CCString *v28; // rax
  const char *v29; // rax
  __int64 v30; // r8
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+38h] [rbp-30h]
  float v35; // [rsp+70h] [rbp+8h] BYREF
  float v36; // [rsp+74h] [rbp+Ch]
  void *v37; // [rsp+80h] [rbp+18h] BYREF

  v3 = 43; /*0x4f82c9*/
  if ( a2 < 43 ) /*0x4f82d0*/
    v3 = a2; /*0x4f82d0*/
  v4 = 1; /*0x4f82d3*/
  if ( v3 > 1 ) /*0x4f82dc*/
    v4 = v3; /*0x4f82dc*/
  v5 = qword_905FD0; /*0x4f82e0*/
  if ( !qword_905FD0 ) /*0x4f82ea*/
  {
    v37 = operator new(0x6E8u); /*0x4f82f6*/
    qword_905FD0 = sub_2723A0(v37); /*0x4f8307*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f8318*/
    v5 = qword_905FD0; /*0x4f831a*/
  }
  sub_279AB0(v5, v4, 7, *(unsigned int *)(a1 + 3068)); /*0x4f8331*/
  v6 = cocos2d::CCString::createWithFormat("swing_%02d_001.png", v4); /*0x4f8340*/
  CString = cocos2d::CCString::getCString(v6); /*0x4f834f*/
  v8 = cocos2d::CCString::createWithFormat("swing_%02d_2_001.png", v4); /*0x4f835c*/
  v9 = cocos2d::CCString::getCString(v8); /*0x4f836b*/
  v10 = cocos2d::CCString::createWithFormat("swing_%02d_glow_001.png", v4); /*0x4f8378*/
  v11 = cocos2d::CCString::getCString(v10); /*0x4f8387*/
  v12 = **(_QWORD **)(a1 + 1856); /*0x4f8391*/
  v13 = *(_QWORD *)(a1 + 1856); /*0x4f8394*/
  v14 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f8397*/
  v15 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v14, CString); /*0x4f83a3*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v12 + 1008))(v13, v15); /*0x4f83af*/
  v16 = **(_QWORD **)(a1 + 1864); /*0x4f83bc*/
  v17 = *(_QWORD *)(a1 + 1864); /*0x4f83bf*/
  v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f83c2*/
  v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v9); /*0x4f83ce*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v16 + 1008))(v17, v19); /*0x4f83da*/
  v20 = **(_QWORD **)(a1 + 1880); /*0x4f83e7*/
  v21 = *(_QWORD *)(a1 + 1880); /*0x4f83ea*/
  v22 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f83ed*/
  v23 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v22, v11); /*0x4f83f9*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v20 + 1008))(v21, v23); /*0x4f8405*/
  v24 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 320LL))(*(_QWORD *)(a1 + 1856)); /*0x4f8415*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v35, v24); /*0x4f8423*/
  v25 = **(_QWORD **)(a1 + 1864); /*0x4f8430*/
  v26 = *(_QWORD *)(a1 + 1864); /*0x4f8433*/
  v27 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37, v35 * 0.5, v36 * 0.5); /*0x4f845a*/
  (*(void (__fastcall **)(__int64, __int64))(v25 + 184))(v26, v27); /*0x4f8466*/
  v28 = cocos2d::CCString::createWithFormat("swing_%02d_extra_001.png", v4); /*0x4f8476*/
  v29 = cocos2d::CCString::getCString(v28); /*0x4f847f*/
  v32 = 0; /*0x4f8488*/
  v33 = 0; /*0x4f848f*/
  v34 = 0; /*0x4f8494*/
  v30 = -1; /*0x4f8499*/
  do /*0x4f84a3*/
    ++v30; /*0x4f84a0*/
  while ( v29[v30] ); /*0x4f84a3*/
  sub_3C230(&v32); /*0x4f84b1*/
  return sub_4F8710(a1, &v32); /*0x4f84c3*/
}

// [86/109] Address: 0x4f84e0
// Method: PlayerObject::updatePlayerDartFrame
__int64 __fastcall PlayerObject_updatePlayerDartFrame(__int64 a1, int a2)
{
  int v3; // eax
  unsigned int v4; // r15d
  __int64 v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rsi
  cocos2d::CCString *v8; // rax
  const char *v9; // rbp
  cocos2d::CCString *v10; // rax
  const char *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  cocos2d::CCSpriteFrameCache *v14; // rax
  struct cocos2d::CCSpriteFrame *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  cocos2d::CCSpriteFrameCache *v22; // rax
  struct cocos2d::CCSpriteFrame *v23; // rax
  const struct cocos2d::CCSize *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  cocos2d::CCString *v28; // rax
  const char *v29; // rax
  __int64 v30; // r8
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int64 v34; // [rsp+38h] [rbp-30h]
  float v35; // [rsp+70h] [rbp+8h] BYREF
  float v36; // [rsp+74h] [rbp+Ch]
  void *v37; // [rsp+80h] [rbp+18h] BYREF

  v3 = 96; /*0x4f84f9*/
  if ( a2 < 96 ) /*0x4f8500*/
    v3 = a2; /*0x4f8500*/
  v4 = 1; /*0x4f8503*/
  if ( v3 > 1 ) /*0x4f850c*/
    v4 = v3; /*0x4f850c*/
  v5 = qword_905FD0; /*0x4f8510*/
  if ( !qword_905FD0 ) /*0x4f851a*/
  {
    v37 = operator new(0x6E8u); /*0x4f8526*/
    qword_905FD0 = sub_2723A0(v37); /*0x4f8537*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f8548*/
    v5 = qword_905FD0; /*0x4f854a*/
  }
  sub_279AB0(v5, v4, 4, *(unsigned int *)(a1 + 3068)); /*0x4f8561*/
  v6 = cocos2d::CCString::createWithFormat("dart_%02d_001.png", v4); /*0x4f8570*/
  CString = cocos2d::CCString::getCString(v6); /*0x4f857f*/
  v8 = cocos2d::CCString::createWithFormat("dart_%02d_2_001.png", v4); /*0x4f858c*/
  v9 = cocos2d::CCString::getCString(v8); /*0x4f859b*/
  v10 = cocos2d::CCString::createWithFormat("dart_%02d_glow_001.png", v4); /*0x4f85a8*/
  v11 = cocos2d::CCString::getCString(v10); /*0x4f85b7*/
  v12 = **(_QWORD **)(a1 + 1856); /*0x4f85c1*/
  v13 = *(_QWORD *)(a1 + 1856); /*0x4f85c4*/
  v14 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f85c7*/
  v15 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v14, CString); /*0x4f85d3*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v12 + 1008))(v13, v15); /*0x4f85df*/
  v16 = **(_QWORD **)(a1 + 1864); /*0x4f85ec*/
  v17 = *(_QWORD *)(a1 + 1864); /*0x4f85ef*/
  v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f85f2*/
  v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v9); /*0x4f85fe*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v16 + 1008))(v17, v19); /*0x4f860a*/
  v20 = **(_QWORD **)(a1 + 1880); /*0x4f8617*/
  v21 = *(_QWORD *)(a1 + 1880); /*0x4f861a*/
  v22 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4f861d*/
  v23 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v22, v11); /*0x4f8629*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v20 + 1008))(v21, v23); /*0x4f8635*/
  v24 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 320LL))(*(_QWORD *)(a1 + 1856)); /*0x4f8645*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v35, v24); /*0x4f8653*/
  v25 = **(_QWORD **)(a1 + 1864); /*0x4f8660*/
  v26 = *(_QWORD *)(a1 + 1864); /*0x4f8663*/
  v27 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37, v35 * 0.5, v36 * 0.5); /*0x4f868a*/
  (*(void (__fastcall **)(__int64, __int64))(v25 + 184))(v26, v27); /*0x4f8696*/
  v28 = cocos2d::CCString::createWithFormat("dart_%02d_extra_001.png", v4); /*0x4f86a6*/
  v29 = cocos2d::CCString::getCString(v28); /*0x4f86af*/
  v32 = 0; /*0x4f86b8*/
  v33 = 0; /*0x4f86bf*/
  v34 = 0; /*0x4f86c4*/
  v30 = -1; /*0x4f86c9*/
  do /*0x4f86d3*/
    ++v30; /*0x4f86d0*/
  while ( v29[v30] ); /*0x4f86d3*/
  sub_3C230(&v32); /*0x4f86e1*/
  return sub_4F8710(a1, &v32); /*0x4f86f3*/
}

// [87/109] Address: 0x4f8910
// Method: PlayerObject::toggleGhostEffect
// Hidden C++ exception states: #wind=4
void __fastcall PlayerObject_toggleGhostEffect(__int64 a1, int a2)
{
  cocos2d::CCNode *v3; // rdi
  void (__fastcall ***v4)(_QWORD, cocos2d::CCNode *); // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  void (__fastcall *v14)(__int64); // rdx
  void *v15; // [rsp+30h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 1844) != a2 ) /*0x4f8923*/
  {
    *(_DWORD *)(a1 + 1844) = a2; /*0x4f8929*/
    v3 = *(cocos2d::CCNode **)(a1 + 1848); /*0x4f892f*/
    if ( v3 ) /*0x4f8939*/
    {
      v4 = (void (__fastcall ***)(_QWORD, cocos2d::CCNode *))*((_QWORD *)v3 + 48); /*0x4f893b*/
      if ( v4 ) /*0x4f8945*/
        (**v4)(v4, v3); /*0x4f894d*/
      cocos2d::CCNode::unscheduleAllSelectors(v3); /*0x4f8952*/
      cocos2d::CCNode::stopAllActions(v3); /*0x4f895b*/
      (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v3 + 528LL))(v3); /*0x4f8967*/
      *(_QWORD *)(a1 + 1848) = 0; /*0x4f896d*/
    }
    if ( *(_DWORD *)(a1 + 1844) == 1 ) /*0x4f897f*/
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1856) + 320LL) + 8LL))(*(_QWORD *)(a1 + 1856) + 320LL); /*0x4f8996*/
      if ( *(_WORD *)v5 || *(_BYTE *)(v5 + 2) ) /*0x4f89b3*/
      {
        v10 = sub_75910(); /*0x4f8a91*/
        *(_QWORD *)(a1 + 1848) = v10; /*0x4f8a96*/
        *(_QWORD *)(v10 + 360) = a1; /*0x4f8a9d*/
        *(_QWORD *)(*(_QWORD *)(a1 + 1848) + 340LL) = 0x100000302LL; /*0x4f8ac0*/
        *(_DWORD *)(*(_QWORD *)(a1 + 1848) + 336LL) = *(_DWORD *)(a1 + 2552); /*0x4f8ad4*/
        *(_DWORD *)(*(_QWORD *)(a1 + 1848) + 376LL) = 1128792064; /*0x4f8ae1*/
        v11 = *(_QWORD *)(a1 + 1848); /*0x4f8aeb*/
        *(_WORD *)(v11 + 392) = *(_WORD *)(a1 + 2706); /*0x4f8af9*/
        *(_BYTE *)(v11 + 394) = *(_BYTE *)(a1 + 2708); /*0x4f8b07*/
        v12 = *(_QWORD *)(a1 + 1848); /*0x4f8b0d*/
        *(_QWORD *)(v12 + 352) = *(_QWORD *)(a1 + 1856); /*0x4f8b1b*/
        *(_DWORD *)(v12 + 320) = 1028443341; /*0x4f8b22*/
        *(_DWORD *)(v12 + 324) = 1053609165; /*0x4f8b2c*/
        *(_DWORD *)(v12 + 328) = 1058642330; /*0x4f8b36*/
        *(_BYTE *)(v12 + 332) = 0; /*0x4f8b40*/
        cocos2d::CCNode::schedule(v12, GhostTrailEffect_trailSnapshot); /*0x4f8b56*/
        v9 = qword_905FD0; /*0x4f8b5c*/
        if ( !qword_905FD0 ) /*0x4f8b66*/
        {
LABEL_12:
          v15 = operator new(0x6E8u); /*0x4f8b68*/
          v13 = sub_2723A0(v15); /*0x4f8b7a*/
          v14 = *(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL); /*0x4f8b83*/
          qword_905FD0 = v13; /*0x4f8b87*/
          v14(v13); /*0x4f8b91*/
          v9 = qword_905FD0; /*0x4f8b93*/
        }
      }
      else
      {
        v6 = sub_75910(); /*0x4f89bc*/
        *(_QWORD *)(a1 + 1848) = v6; /*0x4f89c1*/
        *(_QWORD *)(v6 + 360) = a1; /*0x4f89c8*/
        *(_DWORD *)(*(_QWORD *)(a1 + 1848) + 336LL) = *(_DWORD *)(a1 + 2552); /*0x4f89dc*/
        *(_DWORD *)(*(_QWORD *)(a1 + 1848) + 376LL) = 1128792064; /*0x4f89e9*/
        v7 = *(_QWORD *)(a1 + 1848); /*0x4f89f3*/
        *(_WORD *)(v7 + 392) = 0; /*0x4f8a01*/
        *(_BYTE *)(v7 + 394) = 0; /*0x4f8a0f*/
        v8 = *(_QWORD *)(a1 + 1848); /*0x4f8a15*/
        *(_QWORD *)(v8 + 352) = *(_QWORD *)(a1 + 1856); /*0x4f8a23*/
        *(_DWORD *)(v8 + 320) = 1028443341; /*0x4f8a2a*/
        *(_DWORD *)(v8 + 324) = 1053609165; /*0x4f8a34*/
        *(_DWORD *)(v8 + 328) = 1058642330; /*0x4f8a3e*/
        *(_BYTE *)(v8 + 332) = 0; /*0x4f8a48*/
        cocos2d::CCNode::schedule(v8, GhostTrailEffect_trailSnapshot); /*0x4f8a5e*/
        v9 = qword_905FD0; /*0x4f8a64*/
        if ( !qword_905FD0 ) /*0x4f8a6e*/
          goto LABEL_12; /*0x4f8a6e*/
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 1848) + 368LL) = *(_QWORD *)(*(_QWORD *)(v9 + 560) + 4360LL); /*0x4f8b9a*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v9 + 560) + 4360LL) + 464LL))( /*0x4f8bce*/
        *(_QWORD *)(*(_QWORD *)(v9 + 560) + 4360LL),
        *(_QWORD *)(a1 + 1848));
    }
  }
}

// [88/109] Address: 0x4f8be0
// Method: PlayerObject::releaseAllButtons
bool __fastcall PlayerObject_releaseAllButtons(__int64 a1)
{
  char *v2; // r15
  _BYTE *v3; // rdi
  char *v4; // r14
  _BYTE *v5; // r12
  __int64 v6; // r13
  bool v7; // zf
  char v8; // al
  _BYTE *v9; // rsi
  _BYTE *v10; // rcx
  bool v11; // cc
  double v12; // xmm0_8
  int v14; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 3024) ) /*0x4f8be8*/
  {
    v2 = (char *)(a1 + 3024); /*0x4f8c33*/
  }
  else
  {
    v14 = 1; /*0x4f8c14*/
    v2 = (char *)(a1 + 3024); /*0x4f8c27*/
    *(_BYTE *)sub_16C910(a1 + 3008, &v14) = 0; /*0x4f8c2e*/
  }
  v3 = (_BYTE *)(a1 + 2611); /*0x4f8c3a*/
  v4 = v2; /*0x4f8c41*/
  v5 = (_BYTE *)(a1 + 2611); /*0x4f8c47*/
  if ( !*(_BYTE *)(a1 + 2611) ) /*0x4f8c44*/
  {
    v6 = a1 + 2611; /*0x4f8c58*/
    if ( *(_BYTE *)(a1 + 2445) ) /*0x4f8c4c*/
    {
      sub_4FA2B0(a1); /*0x4f8c60*/
      v6 = a1 + 2611; /*0x4f8c65*/
      v4 = (char *)(a1 + 3024); /*0x4f8c6c*/
    }
    v7 = *(_BYTE *)(a1 + 2540) == 0; /*0x4f8c73*/
    *(_WORD *)(a1 + 2445) = 0; /*0x4f8c7a*/
    *(_BYTE *)(a1 + 2468) = 1; /*0x4f8c83*/
    if ( !v7 ) /*0x4f8c8a*/
    {
      PlayerObject_stopDashing(a1); /*0x4f8c8f*/
      v5 = (_BYTE *)v6; /*0x4f8c94*/
    }
  }
  v8 = *(_BYTE *)(a1 + 3024); /*0x4f8c9c*/
  if ( !v8 ) /*0x4f8caa*/
  {
    v14 = 2; /*0x4f8cb1*/
    v3 = v5; /*0x4f8cc5*/
    *(_BYTE *)sub_16C910(a1 + 3008, &v14) = 0; /*0x4f8cc8*/
    v8 = *v2; /*0x4f8ccb*/
  }
  v9 = v3; /*0x4f8cd2*/
  if ( !*v3 ) /*0x4f8ccf*/
  {
    v10 = v3; /*0x4f8ceb*/
    if ( *(_BYTE *)(a1 + 2445) ) /*0x4f8ce4*/
    {
      sub_4FA2B0(a1); /*0x4f8cf3*/
      v8 = *v4; /*0x4f8cf8*/
      v10 = (_BYTE *)(a1 + 2611); /*0x4f8cfc*/
    }
    v11 = *(double *)(a1 + 2816) >= 0.0; /*0x4f8d03*/
    *(_BYTE *)(a1 + 2825) = 0; /*0x4f8d0b*/
    if ( !v11 ) /*0x4f8d12*/
    {
      *(_BYTE *)(a1 + 2912) = 0; /*0x4f8d14*/
      v9 = v10; /*0x4f8d1b*/
    }
  }
  if ( !v8 ) /*0x4f8d25*/
  {
    v14 = 3; /*0x4f8d2e*/
    v3 = v9; /*0x4f8d40*/
    *(_BYTE *)sub_16C910(a1 + 3008, &v14) = 0; /*0x4f8d43*/
  }
  if ( !*v3 ) /*0x4f8d46*/
  {
    if ( *(_BYTE *)(a1 + 2445) ) /*0x4f8d55*/
      sub_4FA2B0(a1); /*0x4f8d61*/
    v12 = *(double *)(a1 + 2816); /*0x4f8d66*/
    *(_BYTE *)(a1 + 2824) = 0; /*0x4f8d72*/
    if ( v12 > 0.0 ) /*0x4f8d79*/
      *(_BYTE *)(a1 + 2912) = 0; /*0x4f8d7b*/
  }
  PlayerObject_releaseButton(a1, 2); /*0x4f8d8a*/
  return PlayerObject_releaseButton(a1, 3); /*0x4f8d97*/
}

// [89/109] Address: 0x4f8fe0
// Method: PlayerObject::enablePlayerControls
char __fastcall PlayerObject_enablePlayerControls(__int64 a1)
{
  __int64 v1; // rdi
  bool v3; // zf
  _BYTE *v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 3008; /*0x4f8fea*/
  *(_BYTE *)(a1 + 2611) = 0; /*0x4f8ff1*/
  v6 = 2; /*0x4f8ffb*/
  if ( *(_BYTE *)sub_16C910(a1 + 3008, &v6) ) /*0x4f9010*/
  {
    if ( !*(_BYTE *)(a1 + 3024) ) /*0x4f9019*/
    {
      v6 = 3; /*0x4f9027*/
      *(_BYTE *)sub_16C910(v1, &v6) = 0; /*0x4f903f*/
      v6 = 2; /*0x4f9042*/
      *(_BYTE *)sub_16C910(v1, &v6) = 1; /*0x4f904f*/
    }
    if ( *(_BYTE *)(a1 + 2611) ) /*0x4f9052*/
      goto LABEL_19; /*0x4f9052*/
    v3 = *(_BYTE *)(a1 + 2849) == 0; /*0x4f905f*/
    *(_WORD *)(a1 + 2825) = 257; /*0x4f9066*/
    if ( !v3 && !*(_BYTE *)(a1 + 2915) ) /*0x4f9071*/
    {
      *(_BYTE *)(a1 + 2849) = 0; /*0x4f907a*/
      *(_QWORD *)(a1 + 2856) = 0; /*0x4f9081*/
    }
    if ( *(double *)(a1 + 2816) <= 0.0 ) /*0x4f909b*/
      goto LABEL_19; /*0x4f909b*/
LABEL_18:
    *(_BYTE *)(a1 + 2912) = 0; /*0x4f9145*/
    goto LABEL_19; /*0x4f9145*/
  }
  v6 = 3; /*0x4f90ab*/
  if ( *(_BYTE *)sub_16C910(v1, &v6) ) /*0x4f90bb*/
  {
    if ( !*(_BYTE *)(a1 + 3024) ) /*0x4f90c4*/
    {
      v6 = 3; /*0x4f90d2*/
      *(_BYTE *)sub_16C910(v1, &v6) = 1; /*0x4f90ea*/
      v6 = 2; /*0x4f90ed*/
      *(_BYTE *)sub_16C910(v1, &v6) = 0; /*0x4f90fa*/
    }
    if ( !*(_BYTE *)(a1 + 2611) ) /*0x4f90fd*/
    {
      v3 = *(_BYTE *)(a1 + 2849) == 0; /*0x4f9106*/
      *(_BYTE *)(a1 + 2824) = 1; /*0x4f910d*/
      *(_BYTE *)(a1 + 2826) = 0; /*0x4f9114*/
      if ( !v3 && *(_BYTE *)(a1 + 2915) ) /*0x4f911d*/
      {
        *(_BYTE *)(a1 + 2849) = 0; /*0x4f9126*/
        *(_QWORD *)(a1 + 2856) = 0; /*0x4f912d*/
      }
      if ( *(double *)(a1 + 2816) < 0.0 ) /*0x4f9143*/
        goto LABEL_18; /*0x4f9143*/
    }
  }
LABEL_19:
  v6 = 1; /*0x4f914c*/
  v4 = (_BYTE *)sub_16C910(v1, &v6); /*0x4f915c*/
  if ( *v4 ) /*0x4f9161*/
    LOBYTE(v4) = PlayerObject_pushButton(a1, 1u); /*0x4f916e*/
  return (char)v4; /*0x4f9173*/
}

// [90/109] Address: 0x4f9180
// Method: PlayerObject::bumpPlayer
struct cocos2d::CCAction *__fastcall PlayerObject_bumpPlayer(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        __int64 a5)
{
  char isFacingLeft; // al
  char v8; // cl
  char isFacingDown; // al
  __int64 v10; // rcx
  struct cocos2d::CCAction *result; // rax
  float v12; // xmm1_4

  if ( *(_BYTE *)(a1 + 2936) || !*(_BYTE *)(a1 + 3000) ) /*0x4f919d*/
    *(_BYTE *)(a1 + 2468) = 1; /*0x4f91a6*/
  if ( a3 == 44 ) /*0x4f91b0*/
  {
    if ( a5 ) /*0x4f91be*/
    {
      if ( *(_BYTE *)(a1 + 2507) /*0x4f91f6*/
        && (isFacingLeft = GameObject_isFacingLeft(a5), v8 = *(_BYTE *)(a1 + 2503), isFacingLeft != v8)
        || !*(_BYTE *)(a1 + 2507)
        && (isFacingDown = GameObject_isFacingDown(a5), v8 = *(_BYTE *)(a1 + 2503), isFacingDown != v8) )
      {
        PlayerObject_flipGravity(a1, v8 == 0, 1); /*0x4f9203*/
      }
    }
    PlayerObject_spiderTestJumpInternal(a1, 0); /*0x4f920d*/
    v10 = *(_QWORD *)(a1 + 3112); /*0x4f9212*/
    if ( v10 ) /*0x4f921c*/
      sub_337190(v10, 18, 0, *(unsigned int *)(a1 + 924)); /*0x4f922d*/
    if ( !*(_BYTE *)(a1 + 2497) /*0x4f925f*/
      && !*(_BYTE *)(a1 + 2498)
      && !*(_BYTE *)(a1 + 2500)
      && !*(_BYTE *)(a1 + 2508)
      && !*(_BYTE *)(a1 + 2499)
      && !*(_BYTE *)(a1 + 2502) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4f929f*/
    }
    return (struct cocos2d::CCAction *)PlayerObject_playBumpEffect(a1, 44); /*0x4f92b7*/
  }
  else
  {
    result = (struct cocos2d::CCAction *)PlayerObject_propellPlayer(a1, a2, a4, a3); /*0x4f92c3*/
    if ( *(_BYTE *)(a1 + 2936) && !*(_BYTE *)(a1 + 1840) ) /*0x4f92d1*/
    {
      if ( a3 == 34 ) /*0x4f92dd*/
        v12 = 1.2; /*0x4f92df*/
      else
        v12 = 1.0; /*0x4f92e9*/
      result = PlayerObject_animatePlatformerJump(a1, v12); /*0x4f92f4*/
    }
    *(_BYTE *)(a1 + 2394) = 0; /*0x4f92f9*/
    if ( a3 == 34 ) /*0x4f9303*/
    {
      *(_BYTE *)(a1 + 2394) = 1; /*0x4f930c*/
      return (struct cocos2d::CCAction *)cocos2d::CCPoint::operator=(a1 + 2612, &unk_905428); /*0x4f931a*/
    }
  }
  return result; /*0x4f92ad*/
}

// [91/109] Address: 0x4f9330
// Method: PlayerObject::propellPlayer
__int64 __fastcall PlayerObject_propellPlayer(__int64 a1, float a2, char a3, unsigned int a4)
{
  float v7; // xmm2_4
  int v8; // eax
  char v9; // al
  _BYTE *v10; // r10
  __int64 v11; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]

  *(_BYTE *)(a1 + 2596) = 1; /*0x4f934e*/
  *(_BYTE *)(a1 + 2580) = 0; /*0x4f9355*/
  *(_BYTE *)(a1 + 2505) = 0; /*0x4f935c*/
  *(_BYTE *)(a1 + 2027) = 1; /*0x4f9363*/
  *(_WORD *)(a1 + 2488) = 0; /*0x4f936a*/
  v7 = 1.0; /*0x4f937b*/
  if ( *(float *)(a1 + 2552) != 1.0 ) /*0x4f938b*/
    v7 = 0.80000001; /*0x4f938d*/
  v8 = -1; /*0x4f9395*/
  if ( !*(_BYTE *)(a1 + 2503) ) /*0x4f939f*/
    v8 = 1; /*0x4f93a6*/
  PlayerObject_setYVelocity(a1, (float)((float)((float)v8 * (float)(a2 * 16.0)) * v7)); /*0x4f93c6*/
  v9 = *(_BYTE *)(a1 + 2499); /*0x4f93cb*/
  v10 = (_BYTE *)(a1 + 2502); /*0x4f93d2*/
  if ( v9 || *v10 || *(_BYTE *)(a1 + 2508) ) /*0x4f93e2*/
    *(double *)(a1 + 2472) = *(double *)(a1 + 2472) * 0.6000000238418579; /*0x4f93fa*/
  if ( !*(_BYTE *)(a1 + 2610) && !*(_BYTE *)(a1 + 2540) ) /*0x4f940b*/
  {
    *(_WORD *)(a1 + 1840) = 0; /*0x4f9414*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4f941d*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4f9424*/
    if ( v9 ) /*0x4f9433*/
      PlayerObject_runBallRotation(a1, 1.0); /*0x4f9444*/
    else
      PlayerObject_runNormalRotation(a1, 0, 1.0); /*0x4f943a*/
  }
  if ( !a3 ) /*0x4f944c*/
  {
    PlayerObject_playBumpEffect(a1, a4); /*0x4f9453*/
    v10 = (_BYTE *)(a1 + 2502); /*0x4f9458*/
  }
  if ( *(_BYTE *)(a1 + 2501) ) /*0x4f945f*/
  {
    v15 = 0; /*0x4f946b*/
    v16 = 10; /*0x4f9470*/
    v11 = 0x6174735F706D756ALL; /*0x4f9479*/
    WORD4(v15) = 29810; /*0x4f9488*/
    BYTE10(v15) = 0; /*0x4f948d*/
    v12 = *(_QWORD *)(a1 + 2216); /*0x4f9492*/
LABEL_20:
    v17 = 15; /*0x4f94d1*/
    *(_QWORD *)&v15 = v11; /*0x4f94da*/
    CCAnimatedSprite_runAnimation(v12, &v15); /*0x4f94e5*/
    goto LABEL_21; /*0x4f94e5*/
  }
  if ( *v10 ) /*0x4f949b*/
  {
    v15 = 0; /*0x4f94a4*/
    v16 = 9; /*0x4f94a9*/
    v11 = 0x6F6F6C5F6C6C6166LL; /*0x4f94b2*/
    WORD4(v15) = 112; /*0x4f94c1*/
    v12 = *(_QWORD *)(a1 + 2224); /*0x4f94ca*/
    goto LABEL_20; /*0x4f94ca*/
  }
LABEL_21:
  sub_4F9B40(a1); /*0x4f94ea*/
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f94f8*/
  return cocos2d::CCPoint::operator=(a1 + 2612, v13); /*0x4f9508*/
}

// [92/109] Address: 0x4f9530
// Method: PlayerObject::playBumpEffect
// Hidden C++ exception states: #wind=3
__int64 __fastcall PlayerObject_playBumpEffect(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  struct cocos2d::CCObject *v7; // rdi
  char v8; // dl
  int v9; // ebx
  int v10; // ebx
  cocos2d::CCObject *v11; // rbx
  cocos2d::CCObject *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  void *v18; // [rsp+50h] [rbp+18h]
  __int16 v19; // [rsp+50h] [rbp+18h]
  void *v20; // [rsp+50h] [rbp+18h]

  result = qword_905FD0; /*0x4f9549*/
  if ( !qword_905FD0 ) /*0x4f9553*/
  {
    v18 = operator new(0x6E8u); /*0x4f955f*/
    qword_905FD0 = sub_2723A0(v18); /*0x4f956d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f957e*/
    result = qword_905FD0; /*0x4f9580*/
  }
  if ( !*(_BYTE *)(result + 957) && *(_BYTE *)(a1 + 2028) ) /*0x4f9594*/
  {
    v6 = CCCircleWave_create(a1, a2, a3, 0, 1); /*0x4f95e2*/
    v7 = (struct cocos2d::CCObject *)v6; /*0x4f95e7*/
    v19 = -14081; /*0x4f95ea*/
    v8 = 0; /*0x4f95f1*/
    v9 = a2 - 9; /*0x4f95f3*/
    if ( v9 ) /*0x4f95f6*/
    {
      v10 = v9 - 1; /*0x4f95f8*/
      if ( v10 ) /*0x4f95fb*/
      {
        if ( v10 != 34 ) /*0x4f9600*/
        {
LABEL_12:
          *(_WORD *)(v6 + 340) = v19; /*0x4f9618*/
          *(_BYTE *)(v6 + 342) = v8; /*0x4f9624*/
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 184LL))(v6, a1 + 2568); /*0x4f9637*/
          v11 = *(cocos2d::CCObject **)(a1 + 2696); /*0x4f963d*/
          if ( v11 ) /*0x4f9647*/
          {
            v12 = (cocos2d::CCObject *)*((_QWORD *)v7 + 40); /*0x4f964d*/
            if ( v12 ) /*0x4f9657*/
              cocos2d::CCObject::release(v12); /*0x4f9659*/
            *((_QWORD *)v7 + 40) = v11; /*0x4f965f*/
            cocos2d::CCObject::retain(v11); /*0x4f9669*/
            cocos2d::CCNode::unschedule(v7, CCCircleWave_updatePosition); /*0x4f9679*/
            v13 = *(_QWORD *)v7; /*0x4f967f*/
            v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 40) + 200LL))(*((_QWORD *)v7 + 40)); /*0x4f968c*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v13 + 184))(v7, v14); /*0x4f9698*/
            v15 = qword_905FD0; /*0x4f969e*/
            if ( !qword_905FD0 ) /*0x4f96a8*/
            {
              v20 = operator new(0x6E8u); /*0x4f96b4*/
              qword_905FD0 = sub_2723A0(v20); /*0x4f96c2*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4f96d3*/
              v15 = qword_905FD0; /*0x4f96d5*/
            }
            v16 = *(_QWORD *)(v15 + 560); /*0x4f96dc*/
            v17 = v16 + 14712; /*0x4f96e3*/
            if ( !v16 ) /*0x4f96f0*/
              v17 = 0; /*0x4f96f0*/
            *((_QWORD *)v7 + 46) = v17; /*0x4f96f4*/
            cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(*(_QWORD *)(v15 + 560) + 15016LL), v7); /*0x4f970c*/
          }
          return (*(__int64 (__fastcall **)(_QWORD, struct cocos2d::CCObject *, _QWORD))(**(_QWORD **)(a1 + 3120) + 456LL))( /*0x4f9722*/
                   *(_QWORD *)(a1 + 3120),
                   v7,
                   0);
        }
        HIBYTE(v19) = 50; /*0x4f9602*/
      }
      else
      {
        v19 = -256; /*0x4f9609*/
      }
    }
    else
    {
      HIBYTE(v19) = 0; /*0x4f9612*/
    }
    v8 = -1; /*0x4f9616*/
    goto LABEL_12; /*0x4f9616*/
  }
  return result; /*0x4f9728*/
}

// [94/109] Address: 0x4f9990
// Method: PlayerObject::boostPlayer
__int64 __fastcall PlayerObject_boostPlayer(__int64 a1, float a2)
{
  double v3; // xmm7_8
  double v4; // xmm0_8
  float v5; // xmm1_4
  int v6; // eax
  __int64 v7; // rax
  _QWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF

  *(_BYTE *)(a1 + 2596) = 1; /*0x4f999e*/
  *(_BYTE *)(a1 + 2580) = 0; /*0x4f99a5*/
  *(_BYTE *)(a1 + 2505) = 0; /*0x4f99ac*/
  *(_BYTE *)(a1 + 2027) = 1; /*0x4f99b3*/
  *(_BYTE *)(a1 + 2394) = 1; /*0x4f99ba*/
  v3 = (double)(int)a2; /*0x4f99c9*/
  v4 = a2; /*0x4f99d0*/
  if ( a2 != v3 ) /*0x4f99da*/
    v4 = round((v4 - v3) * 1000.0) / 1000.0 + v3; /*0x4f99f6*/
  *(double *)(a1 + 2472) = v4; /*0x4f99fa*/
  if ( !*(_BYTE *)(a1 + 2540) ) /*0x4f9a02*/
  {
    if ( *(_BYTE *)(a1 + 2497) /*0x4f9a48*/
      || *(_BYTE *)(a1 + 2498)
      || *(_BYTE *)(a1 + 2500)
      || *(_BYTE *)(a1 + 2508)
      || *(_BYTE *)(a1 + 2499)
      || *(_BYTE *)(a1 + 2501) )
    {
      if ( !*(_BYTE *)(a1 + 2502) ) /*0x4f9ac4*/
        goto LABEL_19; /*0x4f9ac4*/
    }
    else if ( !*(_BYTE *)(a1 + 2502) ) /*0x4f9a51*/
    {
      *(_BYTE *)(a1 + 1841) = 0; /*0x4f9a5a*/
      *(_BYTE *)(a1 + 1648) = 0; /*0x4f9a61*/
      if ( *(float *)(a1 + 2552) == 1.0 ) /*0x4f9a79*/
        v5 = 0.86666667; /*0x4f9a7b*/
      else
        v5 = 0.66666669; /*0x4f9a85*/
      v6 = 180; /*0x4f9a8d*/
      if ( !*(_BYTE *)(a1 + 2503) ) /*0x4f9a97*/
        v6 = -180; /*0x4f9a9e*/
      *(float *)(a1 + 1832) = (float)v6 / v5; /*0x4f9aac*/
      *(_BYTE *)(a1 + 1840) = 1; /*0x4f9ab4*/
      goto LABEL_19; /*0x4f9abb*/
    }
    v9[1] = 112; /*0x4f9ac9*/
    v9[2] = 9; /*0x4f9ace*/
    v9[3] = 15; /*0x4f9ad7*/
    v9[0] = 0x6F6F6C5F6C6C6166LL; /*0x4f9ae8*/
    sub_43850(*(_QWORD *)(a1 + 2224), v9); /*0x4f9b12*/
  }
LABEL_19:
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4f9b17*/
  return cocos2d::CCPoint::operator=(a1 + 2612, v7); /*0x4f9b2d*/
}

// [95/109] Address: 0x4f9e60
// Method: PlayerObject::updatePlayerScale
__int64 __fastcall PlayerObject_updatePlayerScale(_QWORD *a1)
{
  __int64 v1; // rdi
  struct cocos2d::CCObject *v3; // rax

  v1 = a1[391]; /*0x4f9e6a*/
  v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v1 + 320), 6); /*0x4f9e80*/
  if ( v3 ) /*0x4f9e89*/
  {
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v3 + 88LL))(v3); /*0x4f9e91*/
    cocos2d::CCDictionary::removeObjectForKey(*(cocos2d::CCDictionary **)(v1 + 320), 6); /*0x4f9ea1*/
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 120LL))(a1); /*0x4f9eb5*/
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 136LL))(a1);
}

// [96/109] Address: 0x4fa0d0
// Method: PlayerObject::copyAttributes
__int64 __fastcall PlayerObject_copyAttributes(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 2025) = 1; /*0x4fa0df*/
  *(_QWORD *)(a1 + 2728) = *(_QWORD *)(a2 + 2728); /*0x4fa0f3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v9, (const struct cocos2d::CCPoint *)(a2 + 2712)); /*0x4fa106*/
  cocos2d::CCPoint::operator=(a1 + 2712, &v9); /*0x4fa118*/
  v4 = *(_QWORD *)a1; /*0x4fa124*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2); /*0x4fa127*/
  (*(void (__fastcall **)(__int64, __int64))(v4 + 184))(a1, v5); /*0x4fa133*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v9, (const struct cocos2d::CCPoint *)(a2 + 2560)); /*0x4fa145*/
  cocos2d::CCPoint::operator=(a1 + 2560, &v9); /*0x4fa157*/
  PlayerObject_flipGravity(a1, *(_BYTE *)(a2 + 2503), 1); /*0x4fa16a*/
  sub_4F2080(a1, *(unsigned __int8 *)(a2 + 2506)); /*0x4fa179*/
  PlayerObject_toggleFlyMode(a1, *(_BYTE *)(a2 + 2497), 0); /*0x4fa18b*/
  PlayerObject_toggleBirdMode(a1, *(_BYTE *)(a2 + 2498), 0); /*0x4fa19d*/
  PlayerObject_toggleRollMode(a1, *(_BYTE *)(a2 + 2499), 0); /*0x4fa1af*/
  PlayerObject_toggleDartMode(a1, *(_BYTE *)(a2 + 2500), 0); /*0x4fa1c1*/
  sub_4F5180(a1, *(unsigned __int8 *)(a2 + 2501), 0); /*0x4fa1d3*/
  UnDecorator::getZName(a1, *(unsigned __int8 *)(a2 + 2502), 0); /*0x4fa1e5*/
  PlayerObject_toggleSwingMode(a1, *(_BYTE *)(a2 + 2508), 0); /*0x4fa1f7*/
  PlayerObject_updateTimeMod(a1, v6, 0); /*0x4fa20a*/
  if ( *(float *)(a2 + 2552) == 1.0 ) /*0x4fa220*/
    v7 = 0; /*0x4fa222*/
  else
    LOBYTE(v7) = 1; /*0x4fa226*/
  sub_4FA350(a1, v7, 0); /*0x4fa22e*/
  PlayerObject_setYVelocity(a1, *(double *)(a2 + 2472)); /*0x4fa23e*/
  *(_BYTE *)(a1 + 2025) = 0; /*0x4fa248*/
  *(_BYTE *)(a1 + 2445) = *(_BYTE *)(a2 + 2445); /*0x4fa256*/
  result = *(unsigned __int8 *)(a2 + 2446); /*0x4fa25c*/
  *(_BYTE *)(a1 + 2446) = result; /*0x4fa268*/
  return result; /*0x4fa263*/
}

// [97/109] Address: 0x4fa280
// Method: PlayerObject::getOrientedBox
__int64 __fastcall PlayerObject_getOrientedBox(_QWORD *a1)
{
  (*(void (__fastcall **)(_QWORD *))(*a1 + 1416LL))(a1); /*0x4fa28c*/
  return a1[92]; /*0x4fa299*/
}

// [98/109] Address: 0x4fa2a0
// Method: PlayerObject::getObjectRotation
__int64 __fastcall PlayerObject_getObjectRotation(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1);
}

// [99/109] Address: 0x4fa9f0
// Method: PlayerObject::updateTimeMod
// Hidden C++ exception states: #wind=4
void __fastcall PlayerObject_updateTimeMod(__int64 a1, float a2, char a3)
{
  __int64 v4; // rax
  _BYTE *v5; // r14
  const char *v6; // rbx
  __int64 v7; // rax
  cocos2d::CCParticleSystem *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  float v11; // xmm6_4
  cocos2d::CCDirector *v12; // rax
  float v13; // xmm0_4
  __int64 v14; // rax
  __int64 v15; // rbx
  cocos2d::CCDirector *v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // [rsp+60h] [rbp+8h] BYREF
  char v22; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 2025) && *(_BYTE *)(a1 + 2028) && !a3 && *(float *)(a1 + 2556) != a2 ) /*0x4faa40*/
  {
    v4 = qword_905FD0; /*0x4faa46*/
    if ( !qword_905FD0 ) /*0x4faa50*/
    {
      v21 = operator new(0x6E8u); /*0x4faa5c*/
      qword_905FD0 = sub_2723A0(v21); /*0x4faa6a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4faa7b*/
      v4 = qword_905FD0; /*0x4faa7d*/
    }
    v5 = *(_BYTE **)(v4 + 560); /*0x4faa84*/
    if ( !*(_BYTE *)(v4 + 957) && !v5[13149] ) /*0x4faa98*/
    {
      if ( a2 == 0.69999999 ) /*0x4faab0*/
      {
        v6 = "speedEffect_slow.plist"; /*0x4faab2*/
      }
      else if ( a2 == 1.1 ) /*0x4faac5*/
      {
        v6 = "speedEffect_fast.plist"; /*0x4faac7*/
      }
      else if ( a2 == 1.3 ) /*0x4faada*/
      {
        v6 = "speedEffect_vfast.plist"; /*0x4faadc*/
      }
      else
      {
        v6 = "speedEffect_vvfast.plist"; /*0x4faaef*/
        if ( a2 != 1.6 ) /*0x4faaf6*/
          v6 = "speedEffect_normal.plist"; /*0x4faaf8*/
      }
      v7 = cocos2d::CCDirector::sharedDirector(); /*0x4faaff*/
      cocos2d::CCDirector::getWinSize(v7, &v21); /*0x4fab0d*/
      v8 = cocos2d::CCParticleSystemQuad::create(v6, 0); /*0x4fab1e*/
      (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v8 + 1528LL))(v8, 2); /*0x4fab33*/
      v9 = *(_QWORD *)v8; /*0x4fab36*/
      LOBYTE(v9) = 1; /*0x4fab40*/
      (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v8 + 1544LL))(v8, v9); /*0x4fab45*/
      (*(void (__fastcall **)(_BYTE *, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v5 + 456LL))(v5, v8, 100); /*0x4fab5e*/
      v10 = *(_QWORD *)v8; /*0x4fab61*/
      v11 = *((float *)&v21 + 1) * 0.5; /*0x4fab6a*/
      v12 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x4fab72*/
      v13 = cocos2d::CCDirector::getScreenRight(v12) + 10.0; /*0x4fab81*/
      v14 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, v13, v11); /*0x4fab94*/
      (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v10 + 184))(v8, v14); /*0x4faba0*/
      v15 = *(_QWORD *)v8; /*0x4faba6*/
      v16 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x4faba9*/
      v17 = (float)(cocos2d::CCDirector::getScreenScaleFactorH(v16) * 320.0) * 0.5; /*0x4fabc0*/
      v18 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 10.0, v17); /*0x4fabd8*/
      (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v15 + 952))(v8, v18); /*0x4fabe4*/
      cocos2d::CCParticleSystem::resetSystem(v8); /*0x4fabed*/
    }
  }
  *(float *)(a1 + 2556) = a2; /*0x4fabf3*/
  if ( a2 == 0.89999998 ) /*0x4fac06*/
  {
    *(_QWORD *)(a1 + 1992) = 0x40265C2D20000000LL; /*0x4fac12*/
    *(_QWORD *)(a1 + 2000) = 0x3FEEA99100000000LL; /*0x4fac23*/
LABEL_27:
    v19 = 0x4017147B60000000LL; /*0x4facec*/
    goto LABEL_28; /*0x4facec*/
  }
  if ( a2 == 0.69999999 ) /*0x4fac39*/
  {
    *(_QWORD *)(a1 + 1992) = 0x40253D74D594F26BLL; /*0x4fac45*/
    *(_QWORD *)(a1 + 2000) = 0x3FEE161C36976BC2LL; /*0x4fac56*/
    v19 = 0x4017EB85A4F00EF1LL; /*0x4fac5d*/
  }
  else if ( a2 == 1.1 ) /*0x4fac76*/
  {
    *(_QWORD *)(a1 + 1992) = 0x4026D70E6F2E8C05LL; /*0x4fac82*/
    *(_QWORD *)(a1 + 2000) = 0x3FEEA15FCC1871E7LL; /*0x4fac93*/
    v19 = 0x40177AE1CDE5D181LL; /*0x4fac9a*/
  }
  else
  {
    if ( a2 != 1.3 && a2 != 1.6 ) /*0x4facea*/
      goto LABEL_27; /*0x4facea*/
    *(_QWORD *)(a1 + 1992) = 0x402675C6C11A1123LL; /*0x4facbc*/
    *(_QWORD *)(a1 + 2000) = 0x3FEEC22467BE553BLL; /*0x4faccd*/
    v19 = 0x401800008637BD06LL; /*0x4facd4*/
  }
LABEL_28:
  *(_QWORD *)(a1 + 1984) = v19; /*0x4facf6*/
  sub_4FAD80(a1); /*0x4fad00*/
  if ( *(_BYTE *)(a1 + 2499) && !*(_BYTE *)(a1 + 2610) && !*(_BYTE *)(a1 + 2540) ) /*0x4fad17*/
  {
    *(_WORD *)(a1 + 1840) = 0; /*0x4fad20*/
    *(_BYTE *)(a1 + 1648) = 0; /*0x4fad29*/
    *(_DWORD *)(a1 + 1832) = 0; /*0x4fad30*/
    PlayerObject_runBallRotation(a1, 1.0); /*0x4fad45*/
  }
  v20 = *(_QWORD *)(a1 + 1968); /*0x4fad4a*/
  if ( v20 ) /*0x4fad54*/
    sub_4DFE90(v20, *(unsigned int *)(a1 + 2356), a1); /*0x4fad5f*/
}

// [100/109] Address: 0x4fbe30
// Method: PlayerObject::loadFromCheckpoint
// Hidden C++ exception states: #wind=17
char __fastcall PlayerObject_loadFromCheckpoint(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int *v5; // rsi
  __int64 v6; // rax
  struct cocos2d::CCObject **v7; // rsi
  struct cocos2d::CCObject **i; // rbp
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r14
  _BYTE *v12; // rsi
  const struct cocos2d::CCPoint *v13; // rax
  __int64 v14; // rax
  char v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r14
  _BYTE *v21; // rsi
  const struct cocos2d::CCPoint *v22; // rax
  __int64 v23; // rax
  char v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rsi
  _BYTE *v28; // rsi
  __int64 v29; // r14
  const struct cocos2d::CCPoint *v30; // rax
  __int64 v31; // rax
  char v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // r14
  _BYTE *v36; // rsi
  const struct cocos2d::CCPoint *v37; // rax
  __int64 v38; // rax
  char v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rsi
  char v44; // al
  double v45; // xmm0_8
  double v46; // xmm7_8
  char result; // al
  void *v48; // [rsp+50h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 2025) = 1; /*0x4fbe53*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4fbe65*/
  *(_BYTE *)(a1 + 1376) = *(_BYTE *)(a2 + 528); /*0x4fbe72*/
  *(_BYTE *)(a1 + 1377) = *(_BYTE *)(a2 + 529); /*0x4fbe7f*/
  *(_BYTE *)(a1 + 1378) = *(_BYTE *)(a2 + 530); /*0x4fbe8c*/
  *(_QWORD *)(a1 + 1384) = *(_QWORD *)(a2 + 536); /*0x4fbe99*/
  *(_QWORD *)(a1 + 1432) = *(_QWORD *)(a2 + 544); /*0x4fbea7*/
  *(_BYTE *)(a1 + 1440) = *(_BYTE *)(a2 + 552); /*0x4fbeb5*/
  *(_DWORD *)(a1 + 1488) = *(_DWORD *)(a2 + 556); /*0x4fbec1*/
  *(_DWORD *)(a1 + 1492) = *(_DWORD *)(a2 + 560); /*0x4fbecd*/
  *(_DWORD *)(a1 + 1496) = *(_DWORD *)(a2 + 564); /*0x4fbed9*/
  *(_DWORD *)(a1 + 1500) = *(_DWORD *)(a2 + 568); /*0x4fbee5*/
  *(_DWORD *)(a1 + 1504) = *(_DWORD *)(a2 + 572); /*0x4fbef1*/
  *(_DWORD *)(a1 + 1508) = *(_DWORD *)(a2 + 576); /*0x4fbefd*/
  *(_QWORD *)(a1 + 1512) = *(_QWORD *)(a2 + 584); /*0x4fbf0a*/
  *(_QWORD *)(a1 + 1520) = *(_QWORD *)(a2 + 592); /*0x4fbf18*/
  *(_DWORD *)(a1 + 1528) = *(_DWORD *)(a2 + 600); /*0x4fbf25*/
  *(_BYTE *)(a1 + 1532) = *(_BYTE *)(a2 + 604); /*0x4fbf32*/
  *(_BYTE *)(a1 + 1533) = *(_BYTE *)(a2 + 605); /*0x4fbf3f*/
  *(_QWORD *)(a1 + 1536) = *(_QWORD *)(a2 + 608); /*0x4fbf4c*/
  *(_QWORD *)(a1 + 1544) = *(_QWORD *)(a2 + 616); /*0x4fbf5a*/
  *(_QWORD *)(a1 + 1552) = *(_QWORD *)(a2 + 624); /*0x4fbf68*/
  *(_QWORD *)(a1 + 1560) = *(_QWORD *)(a2 + 632); /*0x4fbf76*/
  *(_QWORD *)(a1 + 1576) = *(_QWORD *)(a2 + 640); /*0x4fbf84*/
  *(_QWORD *)(a1 + 1584) = *(_QWORD *)(a2 + 648); /*0x4fbf92*/
  *(_QWORD *)(a1 + 1592) = *(_QWORD *)(a2 + 656); /*0x4fbfa0*/
  *(_QWORD *)(a1 + 1600) = *(_QWORD *)(a2 + 664); /*0x4fbfae*/
  *(_BYTE *)(a1 + 1608) = *(_BYTE *)(a2 + 672); /*0x4fbfbc*/
  *(_QWORD *)(a1 + 1616) = *(_QWORD *)(a2 + 680); /*0x4fbfc9*/
  *(_QWORD *)(a1 + 1624) = *(_QWORD *)(a2 + 688); /*0x4fbfd7*/
  *(_BYTE *)(a1 + 1632) = *(_BYTE *)(a2 + 696); /*0x4fbfe5*/
  *(_BYTE *)(a1 + 1648) = *(_BYTE *)(a2 + 697); /*0x4fbff2*/
  *(_BYTE *)(a1 + 1649) = *(_BYTE *)(a2 + 698); /*0x4fbfff*/
  *(_QWORD *)(a1 + 1656) = *(_QWORD *)(a2 + 704); /*0x4fc00c*/
  *(_QWORD *)(a1 + 1664) = *(_QWORD *)(a2 + 712); /*0x4fc01a*/
  *(_QWORD *)(a1 + 1672) = *(_QWORD *)(a2 + 720); /*0x4fc028*/
  *(_DWORD *)(a1 + 1680) = *(_DWORD *)(a2 + 728); /*0x4fc035*/
  *(_BYTE *)(a1 + 1684) = *(_BYTE *)(a2 + 732); /*0x4fc042*/
  *(_DWORD *)(a1 + 1696) = *(_DWORD *)(a2 + 736); /*0x4fc04e*/
  *(_DWORD *)(a1 + 1832) = *(_DWORD *)(a2 + 740); /*0x4fc05a*/
  *(_DWORD *)(a1 + 1836) = *(_DWORD *)(a2 + 744); /*0x4fc066*/
  *(_BYTE *)(a1 + 1840) = *(_BYTE *)(a2 + 748); /*0x4fc073*/
  *(_BYTE *)(a1 + 1841) = *(_BYTE *)(a2 + 749); /*0x4fc080*/
  *(_QWORD *)(a1 + 1984) = *(_QWORD *)(a2 + 752); /*0x4fc08d*/
  *(_QWORD *)(a1 + 1992) = *(_QWORD *)(a2 + 760); /*0x4fc09b*/
  *(_QWORD *)(a1 + 2000) = *(_QWORD *)(a2 + 768); /*0x4fc0a9*/
  *(_DWORD *)(a1 + 2008) = *(_DWORD *)(a2 + 776); /*0x4fc0b6*/
  *(_QWORD *)(a1 + 2016) = *(_QWORD *)(a2 + 784); /*0x4fc0c3*/
  *(_BYTE *)(a1 + 2024) = *(_BYTE *)(a2 + 792); /*0x4fc0d1*/
  *(_BYTE *)(a1 + 2026) = *(_BYTE *)(a2 + 793); /*0x4fc0de*/
  *(_BYTE *)(a1 + 2027) = *(_BYTE *)(a2 + 794); /*0x4fc0eb*/
  *(_BYTE *)(a1 + 2028) = *(_BYTE *)(a2 + 795); /*0x4fc0f8*/
  *(_BYTE *)(a1 + 2032) = *(_BYTE *)(a2 + 796); /*0x4fc105*/
  *(_QWORD *)(a1 + 2088) = *(_QWORD *)(a2 + 800); /*0x4fc112*/
  *(_BYTE *)(a1 + 2096) = *(_BYTE *)(a2 + 808); /*0x4fc120*/
  *(_BYTE *)(a1 + 2120) = *(_BYTE *)(a2 + 809); /*0x4fc12d*/
  sub_36F8F0(a1 + 2128, a2 + 816); /*0x4fc141*/
  *(_BYTE *)(a1 + 2232) = *(_BYTE *)(a2 + 880); /*0x4fc14d*/
  *(_DWORD *)(a1 + 2336) = *(_DWORD *)(a2 + 884); /*0x4fc159*/
  *(_DWORD *)(a1 + 2340) = *(_DWORD *)(a2 + 888); /*0x4fc165*/
  *(_QWORD *)(a1 + 2360) = *(_QWORD *)(a2 + 896); /*0x4fc172*/
  *(_QWORD *)(a1 + 2368) = *(_QWORD *)(a2 + 904); /*0x4fc180*/
  *(_QWORD *)(a1 + 2376) = *(_QWORD *)(a2 + 912); /*0x4fc18e*/
  *(_QWORD *)(a1 + 2384) = *(_QWORD *)(a2 + 920); /*0x4fc19c*/
  *(_BYTE *)(a1 + 2392) = *(_BYTE *)(a2 + 928); /*0x4fc1aa*/
  *(_BYTE *)(a1 + 2393) = *(_BYTE *)(a2 + 929); /*0x4fc1b7*/
  *(_BYTE *)(a1 + 2394) = *(_BYTE *)(a2 + 930); /*0x4fc1c4*/
  *(_BYTE *)(a1 + 2395) = *(_BYTE *)(a2 + 931); /*0x4fc1d1*/
  *(_QWORD *)(a1 + 2400) = *(_QWORD *)(a2 + 936); /*0x4fc1de*/
  *(_QWORD *)(a1 + 2408) = *(_QWORD *)(a2 + 944); /*0x4fc1ec*/
  *(_QWORD *)(a1 + 2416) = *(_QWORD *)(a2 + 952); /*0x4fc1fa*/
  *(_QWORD *)(a1 + 2424) = *(_QWORD *)(a2 + 960); /*0x4fc208*/
  *(_BYTE *)(a1 + 2447) = *(_BYTE *)(a2 + 968); /*0x4fc216*/
  *(_BYTE *)(a1 + 2448) = *(_BYTE *)(a2 + 969); /*0x4fc223*/
  *(_BYTE *)(a1 + 2449) = *(_BYTE *)(a2 + 970); /*0x4fc230*/
  *(_BYTE *)(a1 + 2450) = *(_BYTE *)(a2 + 971); /*0x4fc23d*/
  *(_BYTE *)(a1 + 2451) = *(_BYTE *)(a2 + 972); /*0x4fc24a*/
  *(_BYTE *)(a1 + 2452) = *(_BYTE *)(a2 + 973); /*0x4fc257*/
  *(_BYTE *)(a1 + 2453) = *(_BYTE *)(a2 + 974); /*0x4fc264*/
  *(_BYTE *)(a1 + 2454) = *(_BYTE *)(a2 + 975); /*0x4fc271*/
  *(_BYTE *)(a1 + 2468) = *(_BYTE *)(a2 + 976); /*0x4fc27e*/
  *(_QWORD *)(a1 + 2472) = *(_QWORD *)(a2 + 984); /*0x4fc28b*/
  *(_QWORD *)(a1 + 2480) = *(_QWORD *)(a2 + 992); /*0x4fc299*/
  *(_BYTE *)(a1 + 2496) = *(_BYTE *)(a2 + 1000); /*0x4fc2a7*/
  *(_DWORD *)(a1 + 2512) = *(_DWORD *)(a2 + 1004); /*0x4fc2b3*/
  *(_QWORD *)(a1 + 2528) = *(_QWORD *)(a2 + 1008); /*0x4fc2c0*/
  *(_DWORD *)(a1 + 2536) = *(_DWORD *)(a2 + 1016); /*0x4fc2cd*/
  cocos2d::CCPoint::operator=(a1 + 2560, a2 + 1020); /*0x4fc2e1*/
  cocos2d::CCPoint::operator=(a1 + 2568, a2 + 1028); /*0x4fc2f5*/
  *(_DWORD *)(a1 + 2576) = *(_DWORD *)(a2 + 1036); /*0x4fc301*/
  *(_BYTE *)(a1 + 2580) = *(_BYTE *)(a2 + 1040); /*0x4fc30e*/
  *(_QWORD *)(a1 + 2584) = *(_QWORD *)(a2 + 1048); /*0x4fc31b*/
  *(_DWORD *)(a1 + 2592) = *(_DWORD *)(a2 + 1056); /*0x4fc328*/
  *(_BYTE *)(a1 + 2596) = *(_BYTE *)(a2 + 1060); /*0x4fc335*/
  *(_QWORD *)(a1 + 2600) = *(_QWORD *)(a2 + 1064); /*0x4fc342*/
  *(_BYTE *)(a1 + 2610) = *(_BYTE *)(a2 + 1072); /*0x4fc350*/
  *(_BYTE *)(a1 + 2611) = *(_BYTE *)(a2 + 1073); /*0x4fc35d*/
  cocos2d::CCPoint::operator=(a1 + 2612, a2 + 1076); /*0x4fc371*/
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 2624)); /*0x4fc37e*/
  v4 = *(_QWORD *)(a2 + 1088); /*0x4fc384*/
  if ( v4 ) /*0x4fc38e*/
  {
    v5 = *(unsigned int **)(v4 + 56); /*0x4fc390*/
    v6 = *v5; /*0x4fc394*/
    if ( (_DWORD)v6 ) /*0x4fc398*/
    {
      v7 = (struct cocos2d::CCObject **)*((_QWORD *)v5 + 2); /*0x4fc39a*/
      for ( i = &v7[v6 - 1]; v7 <= i; ++v7 ) /*0x4fc3a9*/
      {
        if ( !*v7 ) /*0x4fc3b0*/
          break; /*0x4fc3b6*/
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 2624), *v7); /*0x4fc3bf*/
      }
    }
  }
  sub_36F8F0(a1 + 2632, a2 + 1096); /*0x4fc3dc*/
  *(_QWORD *)(a1 + 2696) = *(_QWORD *)(a2 + 1160); /*0x4fc3e8*/
  *(_QWORD *)(a1 + 2728) = *(_QWORD *)(a2 + 1168); /*0x4fc3f6*/
  *(_DWORD *)(a1 + 2748) = *(_DWORD *)(a2 + 1176); /*0x4fc403*/
  *(_BYTE *)(a1 + 2752) = *(_BYTE *)(a2 + 1180); /*0x4fc410*/
  *(_BYTE *)(a1 + 2753) = *(_BYTE *)(a2 + 1181); /*0x4fc41d*/
  *(_BYTE *)(a1 + 2754) = *(_BYTE *)(a2 + 1182); /*0x4fc42a*/
  *(_DWORD *)(a1 + 2788) = *(_DWORD *)(a2 + 1184); /*0x4fc436*/
  *(_DWORD *)(a1 + 2792) = *(_DWORD *)(a2 + 1188); /*0x4fc442*/
  *(_DWORD *)(a1 + 2796) = *(_DWORD *)(a2 + 1192); /*0x4fc44e*/
  *(_DWORD *)(a1 + 2800) = *(_DWORD *)(a2 + 1196); /*0x4fc45a*/
  *(_DWORD *)(a1 + 2804) = *(_DWORD *)(a2 + 1200); /*0x4fc466*/
  *(_DWORD *)(a1 + 2808) = *(_DWORD *)(a2 + 1204); /*0x4fc472*/
  *(_QWORD *)(a1 + 2816) = *(_QWORD *)(a2 + 1208); /*0x4fc47f*/
  *(_BYTE *)(a1 + 2824) = *(_BYTE *)(a2 + 1216); /*0x4fc48d*/
  *(_BYTE *)(a1 + 2825) = *(_BYTE *)(a2 + 1217); /*0x4fc49a*/
  *(_BYTE *)(a1 + 2826) = *(_BYTE *)(a2 + 1218); /*0x4fc4a7*/
  *(_QWORD *)(a1 + 2832) = *(_QWORD *)(a2 + 1224); /*0x4fc4b4*/
  *(_BYTE *)(a1 + 2840) = *(_BYTE *)(a2 + 1232); /*0x4fc4c2*/
  *(_DWORD *)(a1 + 2844) = *(_DWORD *)(a2 + 1236); /*0x4fc4ce*/
  *(_BYTE *)(a1 + 2848) = *(_BYTE *)(a2 + 1240); /*0x4fc4db*/
  *(_BYTE *)(a1 + 2849) = *(_BYTE *)(a2 + 1241); /*0x4fc4e8*/
  *(_QWORD *)(a1 + 2856) = *(_QWORD *)(a2 + 1248); /*0x4fc4f5*/
  *(_BYTE *)(a1 + 2864) = *(_BYTE *)(a2 + 1256); /*0x4fc503*/
  *(_QWORD *)(a1 + 2872) = *(_QWORD *)(a2 + 1264); /*0x4fc510*/
  *(_BYTE *)(a1 + 2880) = *(_BYTE *)(a2 + 1272); /*0x4fc51e*/
  *(_DWORD *)(a1 + 2884) = *(_DWORD *)(a2 + 1276); /*0x4fc52a*/
  *(_QWORD *)(a1 + 2888) = *(_QWORD *)(a2 + 1280); /*0x4fc537*/
  *(_QWORD *)(a1 + 2896) = *(_QWORD *)(a2 + 1288); /*0x4fc545*/
  *(_QWORD *)(a1 + 2904) = *(_QWORD *)(a2 + 1296); /*0x4fc553*/
  *(_BYTE *)(a1 + 2912) = *(_BYTE *)(a2 + 1304); /*0x4fc561*/
  *(_BYTE *)(a1 + 2913) = *(_BYTE *)(a2 + 1305); /*0x4fc56e*/
  *(_BYTE *)(a1 + 2914) = *(_BYTE *)(a2 + 1306); /*0x4fc57b*/
  *(_BYTE *)(a1 + 2915) = *(_BYTE *)(a2 + 1307); /*0x4fc588*/
  *(_QWORD *)(a1 + 2920) = *(_QWORD *)(a2 + 1312); /*0x4fc595*/
  *(_QWORD *)(a1 + 2928) = *(_QWORD *)(a2 + 1320); /*0x4fc5a3*/
  *(_DWORD *)(a1 + 2940) = *(_DWORD *)(a2 + 1328); /*0x4fc5b0*/
  *(_DWORD *)(a1 + 2944) = *(_DWORD *)(a2 + 1332); /*0x4fc5bc*/
  *(_DWORD *)(a1 + 2948) = *(_DWORD *)(a2 + 1336); /*0x4fc5c8*/
  *(_DWORD *)(a1 + 2952) = *(_DWORD *)(a2 + 1340); /*0x4fc5d4*/
  *(_DWORD *)(a1 + 2960) = *(_DWORD *)(a2 + 1344); /*0x4fc5e0*/
  cocos2d::CCPoint::operator=(a1 + 2964, a2 + 1348); /*0x4fc5f4*/
  *(_BYTE *)(a1 + 2972) = *(_BYTE *)(a2 + 1356); /*0x4fc601*/
  sub_36C270(a1 + 2976, a2 + 1360); /*0x4fc615*/
  *(_DWORD *)(a1 + 3140) = *(_DWORD *)(a2 + 1376); /*0x4fc620*/
  PlayerObject_toggleVisibility((__int64 *)a1, *(_BYTE *)(a2 + 368) == 0); /*0x4fc633*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2 + 320); /*0x4fc645*/
  PlayerObject_flipGravity(a1, *(_BYTE *)(a2 + 344), 0); /*0x4fc658*/
  *(_BYTE *)(a1 + 2507) = *(_BYTE *)(a2 + 345); /*0x4fc664*/
  PlayerObject_updatePlayerArt(a1); /*0x4fc66d*/
  *(_DWORD *)(a1 + 2956) = *(_DWORD *)(a2 + 448); /*0x4fc678*/
  PlayerObject_toggleGhostEffect(a1, *(_DWORD *)(a2 + 356)); /*0x4fc687*/
  sub_4FA350(a1, *(unsigned __int8 *)(a2 + 360), 0); /*0x4fc699*/
  *(_QWORD *)(a1 + 2520) = *(_QWORD *)(a2 + 376); /*0x4fc6a5*/
  cocos2d::CCPoint::operator=(a1 + 1232, a2 + 328); /*0x4fc6ba*/
  *(_QWORD *)(a1 + 2192) = *(_QWORD *)(a2 + 456); /*0x4fc6c7*/
  *(_QWORD *)(a1 + 2112) = *(_QWORD *)(a2 + 464); /*0x4fc6d5*/
  *(_QWORD *)(a1 + 2104) = *(_QWORD *)(a2 + 472); /*0x4fc6e3*/
  *(_DWORD *)(a1 + 2784) = *(_DWORD *)(a2 + 512); /*0x4fc6f0*/
  *(_DWORD *)(a1 + 2756) = *(_DWORD *)(a2 + 484); /*0x4fc6fc*/
  if ( a1 + 2760 != a2 + 488 ) /*0x4fc713*/
    sub_4FE290(a1 + 2760, *(_QWORD *)(a2 + 488), (__int64)(*(_QWORD *)(a2 + 496) - *(_QWORD *)(a2 + 488)) >> 2); /*0x4fc723*/
  *(_BYTE *)(a1 + 2489) = *(_BYTE *)(a2 + 517); /*0x4fc72f*/
  *(_BYTE *)(a1 + 2488) = *(_BYTE *)(a2 + 516); /*0x4fc73c*/
  *(_DWORD *)(a1 + 2492) = *(_DWORD *)(a2 + 520); /*0x4fc748*/
  if ( *(_BYTE *)(a2 + 369) ) /*0x4fc74e*/
  {
    LOBYTE(v9) = 1; /*0x4fc757*/
    sub_4F2080(a1, v9); /*0x4fc75c*/
  }
  PlayerObject_updateTimeMod(a1, *(float *)(a2 + 364), 0); /*0x4fc76f*/
  if ( *(_BYTE *)(a2 + 346) ) /*0x4fc774*/
  {
    v10 = qword_905FD0; /*0x4fc781*/
    if ( !qword_905FD0 ) /*0x4fc78b*/
    {
      v48 = operator new(0x6E8u); /*0x4fc797*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fc7a5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fc7b6*/
      v10 = qword_905FD0; /*0x4fc7b8*/
    }
    v11 = *(_QWORD *)(v10 + 560); /*0x4fc7bf*/
    v12 = *(_BYTE **)(v11 + 1024); /*0x4fc7c6*/
    PlayerObject_switchedToMode(a1, 5); /*0x4fc7d5*/
    if ( v12 ) /*0x4fc7dd*/
    {
      v13 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v12 + 200LL))(v12); /*0x4fc7e5*/
      v14 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v13); /*0x4fc7f3*/
      cocos2d::CCPoint::operator=(a1 + 2568, v14); /*0x4fc803*/
      *(_QWORD *)(a1 + 2696) = v12; /*0x4fc809*/
    }
    if ( *(_BYTE *)(v11 + 1058) && *(_QWORD *)(v11 + 1032) ) /*0x4fc81a*/
    {
      v12 = *(_BYTE **)(v11 + 1032); /*0x4fc826*/
    }
    else if ( !v12 ) /*0x4fc82e*/
    {
      goto LABEL_21; /*0x4fc82e*/
    }
    *(_QWORD *)(v11 + 1024) = v12; /*0x4fc830*/
    if ( v12[1052] ) /*0x4fc837*/
    {
      v15 = 1; /*0x4fc840*/
LABEL_22:
      PlayerObject_toggleFlyMode(a1, 1, v15); /*0x4fc848*/
      LOBYTE(v16) = 1; /*0x4fc855*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 1136LL))(v11, v16); /*0x4fc85a*/
      goto LABEL_80; /*0x4fc860*/
    }
LABEL_21:
    v15 = 0; /*0x4fc845*/
    goto LABEL_22; /*0x4fc845*/
  }
  if ( *(_BYTE *)(a2 + 347) ) /*0x4fc865*/
  {
    v17 = qword_905FD0; /*0x4fc872*/
    if ( !qword_905FD0 ) /*0x4fc87c*/
    {
      v48 = operator new(0x6E8u); /*0x4fc888*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fc896*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fc8a7*/
      v17 = qword_905FD0; /*0x4fc8a9*/
    }
    v18 = v17; /*0x4fc8b0*/
    if ( !v17 ) /*0x4fc8b6*/
    {
      v48 = operator new(0x6E8u); /*0x4fc8c2*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fc8d0*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fc8e1*/
      v17 = qword_905FD0; /*0x4fc8e3*/
    }
    sub_3167D0(*(_QWORD *)(v17 + 560), a1, *(_QWORD *)(*(_QWORD *)(v18 + 560) + 1024LL)); /*0x4fc902*/
    goto LABEL_80; /*0x4fc907*/
  }
  if ( *(_BYTE *)(a2 + 348) ) /*0x4fc90c*/
  {
    v19 = qword_905FD0; /*0x4fc919*/
    if ( !qword_905FD0 ) /*0x4fc923*/
    {
      v48 = operator new(0x6E8u); /*0x4fc92f*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fc93d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fc94e*/
      v19 = qword_905FD0; /*0x4fc950*/
    }
    v20 = *(_QWORD *)(v19 + 560); /*0x4fc957*/
    v21 = *(_BYTE **)(v20 + 1024); /*0x4fc95e*/
    PlayerObject_switchedToMode(a1, 19); /*0x4fc96d*/
    if ( v21 ) /*0x4fc975*/
    {
      v22 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v21 + 200LL))(v21); /*0x4fc97d*/
      v23 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v22); /*0x4fc98b*/
      cocos2d::CCPoint::operator=(a1 + 2568, v23); /*0x4fc99b*/
      *(_QWORD *)(a1 + 2696) = v21; /*0x4fc9a1*/
    }
    if ( *(_BYTE *)(v20 + 1058) && *(_QWORD *)(v20 + 1032) ) /*0x4fc9b2*/
    {
      v21 = *(_BYTE **)(v20 + 1032); /*0x4fc9be*/
    }
    else if ( !v21 ) /*0x4fc9c6*/
    {
      goto LABEL_40; /*0x4fc9c6*/
    }
    *(_QWORD *)(v20 + 1024) = v21; /*0x4fc9c8*/
    if ( v21[1052] ) /*0x4fc9cf*/
    {
      v24 = 1; /*0x4fc9d8*/
LABEL_41:
      PlayerObject_toggleBirdMode(a1, 1, v24); /*0x4fc9e0*/
      LOBYTE(v25) = 1; /*0x4fc9ed*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 1136LL))(v20, v25); /*0x4fc9f2*/
      goto LABEL_80; /*0x4fc9f8*/
    }
LABEL_40:
    v24 = 0; /*0x4fc9dd*/
    goto LABEL_41; /*0x4fc9dd*/
  }
  if ( *(_BYTE *)(a2 + 349) ) /*0x4fc9fd*/
  {
    v26 = qword_905FD0; /*0x4fca0a*/
    if ( !qword_905FD0 ) /*0x4fca14*/
    {
      v48 = operator new(0x6E8u); /*0x4fca20*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fca2e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fca3f*/
      v26 = qword_905FD0; /*0x4fca41*/
    }
    v27 = v26; /*0x4fca48*/
    if ( !v26 ) /*0x4fca4e*/
    {
      v48 = operator new(0x6E8u); /*0x4fca5a*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fca68*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fca79*/
      v26 = qword_905FD0; /*0x4fca7b*/
    }
    v28 = *(_BYTE **)(*(_QWORD *)(v27 + 560) + 1024LL); /*0x4fca89*/
    v29 = *(_QWORD *)(v26 + 560); /*0x4fca90*/
    PlayerObject_switchedToMode(a1, 41); /*0x4fca9f*/
    if ( v28 ) /*0x4fcaa7*/
    {
      v30 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v28 + 200LL))(v28); /*0x4fcaaf*/
      v31 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v30); /*0x4fcabd*/
      cocos2d::CCPoint::operator=(a1 + 2568, v31); /*0x4fcacd*/
      *(_QWORD *)(a1 + 2696) = v28; /*0x4fcad3*/
    }
    if ( *(_BYTE *)(v29 + 1058) && *(_QWORD *)(v29 + 1032) ) /*0x4fcae4*/
    {
      v28 = *(_BYTE **)(v29 + 1032); /*0x4fcaf0*/
    }
    else if ( !v28 ) /*0x4fcaf8*/
    {
      goto LABEL_55; /*0x4fcaf8*/
    }
    *(_QWORD *)(v29 + 1024) = v28; /*0x4fcafa*/
    if ( v28[1052] ) /*0x4fcb01*/
    {
      v32 = 1; /*0x4fcb0a*/
LABEL_56:
      PlayerObject_toggleSwingMode(a1, 1, v32); /*0x4fcb12*/
      LOBYTE(v33) = 1; /*0x4fcb1f*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 1136LL))(v29, v33); /*0x4fcb24*/
      goto LABEL_80; /*0x4fcb2a*/
    }
LABEL_55:
    v32 = 0; /*0x4fcb0f*/
    goto LABEL_56; /*0x4fcb0f*/
  }
  if ( *(_BYTE *)(a2 + 350) ) /*0x4fcb2f*/
  {
    v34 = qword_905FD0; /*0x4fcb3c*/
    if ( !qword_905FD0 ) /*0x4fcb46*/
    {
      v48 = operator new(0x6E8u); /*0x4fcb52*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fcb60*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fcb71*/
      v34 = qword_905FD0; /*0x4fcb73*/
    }
    v35 = *(_QWORD *)(v34 + 560); /*0x4fcb7a*/
    v36 = *(_BYTE **)(v35 + 1024); /*0x4fcb81*/
    PlayerObject_switchedToMode(a1, 26); /*0x4fcb90*/
    if ( v36 ) /*0x4fcb98*/
    {
      v37 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v36 + 200LL))(v36); /*0x4fcba0*/
      v38 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v37); /*0x4fcbae*/
      cocos2d::CCPoint::operator=(a1 + 2568, v38); /*0x4fcbbe*/
      *(_QWORD *)(a1 + 2696) = v36; /*0x4fcbc4*/
    }
    if ( *(_BYTE *)(v35 + 1058) && *(_QWORD *)(v35 + 1032) ) /*0x4fcbd5*/
    {
      v36 = *(_BYTE **)(v35 + 1032); /*0x4fcbe1*/
    }
    else if ( !v36 ) /*0x4fcbe9*/
    {
      goto LABEL_68; /*0x4fcbe9*/
    }
    *(_QWORD *)(v35 + 1024) = v36; /*0x4fcbeb*/
    if ( v36[1052] ) /*0x4fcbf2*/
    {
      v39 = 1; /*0x4fcbfb*/
LABEL_69:
      PlayerObject_toggleDartMode(a1, 1, v39); /*0x4fcc03*/
      LOBYTE(v40) = 1; /*0x4fcc10*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 1136LL))(v35, v40); /*0x4fcc15*/
      goto LABEL_80; /*0x4fcc1b*/
    }
LABEL_68:
    v39 = 0; /*0x4fcc00*/
    goto LABEL_69; /*0x4fcc00*/
  }
  if ( *(_BYTE *)(a2 + 351) ) /*0x4fcc20*/
  {
    v41 = qword_905FD0; /*0x4fcc29*/
    if ( !qword_905FD0 ) /*0x4fcc33*/
    {
      v48 = operator new(0x6E8u); /*0x4fcc3f*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fcc4d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fcc5e*/
      v41 = qword_905FD0; /*0x4fcc60*/
    }
    sub_3165F0(*(_QWORD *)(v41 + 560), a1, *(_QWORD *)(*(_QWORD *)(v41 + 560) + 1024LL)); /*0x4fcc78*/
  }
  else if ( *(_BYTE *)(a2 + 352) ) /*0x4fcc82*/
  {
    v42 = qword_905FD0; /*0x4fcc8f*/
    if ( !qword_905FD0 ) /*0x4fcc99*/
    {
      v48 = operator new(0x6E8u); /*0x4fcca5*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fccb3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fccc4*/
      v42 = qword_905FD0; /*0x4fccc6*/
    }
    v43 = v42; /*0x4fcccd*/
    if ( !v42 ) /*0x4fccd3*/
    {
      v48 = operator new(0x6E8u); /*0x4fccdf*/
      qword_905FD0 = sub_2723A0(v48); /*0x4fcced*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fccfe*/
      v42 = qword_905FD0; /*0x4fcd00*/
    }
    sub_3166E0(*(_QWORD *)(v42 + 560), a1, *(_QWORD *)(*(_QWORD *)(v43 + 560) + 1024LL)); /*0x4fcd1f*/
  }
LABEL_80:
  sub_4E5190(a1); /*0x4fcd24*/
  v44 = *(_BYTE *)(a2 + 384); /*0x4fcd2c*/
  *(_BYTE *)(a1 + 2445) = v44; /*0x4fcd33*/
  if ( v44 && *(_BYTE *)(a2 + 385) ) /*0x4fcd3d*/
  {
    *(_QWORD *)(a1 + 1392) = *(_QWORD *)(a2 + 392); /*0x4fcd4d*/
    *(_QWORD *)(a1 + 1400) = *(_QWORD *)(a2 + 400); /*0x4fcd5b*/
    *(_QWORD *)(a1 + 1408) = *(_QWORD *)(a2 + 408); /*0x4fcd69*/
    *(_QWORD *)(a1 + 1424) = *(_QWORD *)(a2 + 424); /*0x4fcd77*/
    *(_QWORD *)(a1 + 1416) = *(_QWORD *)(a2 + 416); /*0x4fcd85*/
    PlayLayer_showTwoPlayerGuide(a1, 0); /*0x4fcd91*/
  }
  v45 = *(double *)(a2 + 336); /*0x4fcd96*/
  v46 = (double)(int)v45; /*0x4fcda6*/
  if ( v45 != v46 ) /*0x4fcdb0*/
    v45 = round((v45 - v46) * 1000.0) / 1000.0 + v46; /*0x4fcdcc*/
  *(double *)(a1 + 2472) = v45; /*0x4fcdd0*/
  *(_BYTE *)(a1 + 2505) = *(_BYTE *)(a2 + 353); /*0x4fcddf*/
  *(_QWORD *)(a1 + 2056) = *(_QWORD *)(a2 + 440); /*0x4fcdec*/
  *(_BYTE *)(a1 + 2608) = *(_BYTE *)(a2 + 480); /*0x4fcdfa*/
  if ( *(_BYTE *)(a2 + 432) ) /*0x4fce00*/
  {
    PlayerObject_releaseAllButtons(a1); /*0x4fce0c*/
    *(_QWORD *)(a1 + 2472) = 0; /*0x4fce13*/
    *(_QWORD *)(a1 + 2816) = 0; /*0x4fce1a*/
    *(_BYTE *)(a1 + 2505) = 0; /*0x4fce21*/
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x4fce35*/
  *(_BYTE *)(a1 + 2025) = 0; /*0x4fce3b*/
  if ( *(_BYTE *)(a1 + 2936) ) /*0x4fce42*/
    return PlayerObject_releaseAllButtons(a1); /*0x4fce4e*/
  return result; /*0x4fce53*/
}

// [101/109] Address: 0x4fce80
// Method: PlayerObject::removePendingCheckpoint
void __fastcall PlayerObject_removePendingCheckpoint(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rbx
  cocos2d::CCObject *v4; // rcx

  v1 = *(_QWORD *)(a1 + 2200); /*0x4fce8a*/
  if ( v1 ) /*0x4fce97*/
  {
    v3 = *(_QWORD **)(v1 + 3680); /*0x4fce99*/
    v4 = (cocos2d::CCObject *)v3[94]; /*0x4fcea0*/
    if ( v4 ) /*0x4fceaa*/
    {
      cocos2d::CCObject::release(v4); /*0x4fceac*/
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3[94] + 528LL))(v3[94]); /*0x4fcebc*/
      v3[94] = 0; /*0x4fcec2*/
    }
    (*(void (__fastcall **)(_QWORD *))(*v3 + 528LL))(v3); /*0x4fced3*/
    cocos2d::CCObject::release(*(cocos2d::CCObject **)(a1 + 2200)); /*0x4fcee0*/
    *(_QWORD *)(a1 + 2200) = 0; /*0x4fcee6*/
  }
}

// [102/109] Address: 0x4fcf00
// Method: PlayerObject::tryPlaceCheckpoint
// Hidden C++ exception states: #wind=16
void __fastcall PlayerObject_tryPlaceCheckpoint(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdi
  struct cocos2d::CCObject *Object; // rdi
  char v7; // bp
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct cocos2d::CCObject *v13; // rdi
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rbp
  struct cocos2d::CCObject *v17; // rbp
  char v18; // r14
  int v19; // eax
  cocos2d::CCObject *Checkpoint; // rax
  char v21; // bp
  __int64 v22; // rcx
  void *v23; // [rsp+20h] [rbp-38h]
  void *v24; // [rsp+20h] [rbp-38h]
  void *v25; // [rsp+20h] [rbp-38h]
  void *v26; // [rsp+20h] [rbp-38h]
  void *v27; // [rsp+20h] [rbp-38h]
  void *v28; // [rsp+20h] [rbp-38h]
  void *v29; // [rsp+20h] [rbp-38h]
  void *v30; // [rsp+20h] [rbp-38h]
  void *v31; // [rsp+20h] [rbp-38h]
  void *v32; // [rsp+20h] [rbp-38h]
  void *v33; // [rsp+20h] [rbp-38h]
  struct __timeb64 Time; // [rsp+28h] [rbp-30h] BYREF

  v2 = qword_905FD0; /*0x4fcf24*/
  if ( !qword_905FD0 ) /*0x4fcf2e*/
  {
    v23 = operator new(0x6E8u); /*0x4fcf3a*/
    qword_905FD0 = sub_2723A0(v23); /*0x4fcf48*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fcf59*/
    v2 = qword_905FD0; /*0x4fcf5b*/
  }
  v3 = *(_QWORD *)(v2 + 560); /*0x4fcf62*/
  if ( !v3 /*0x4fcf9a*/
    || !*(_BYTE *)(v3 + 13088)
    || !(unsigned __int8)GameManager_getGameVariable(v2, "0027")
    || *(_DWORD *)(a1 + 924) != 1 )
  {
    return; /*0x4fcf9a*/
  }
  v4 = qword_905FD0; /*0x4fcfa0*/
  if ( !qword_905FD0 ) /*0x4fcfaa*/
  {
    v24 = operator new(0x6E8u); /*0x4fcfb6*/
    qword_905FD0 = sub_2723A0(v24); /*0x4fcfc4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fcfd5*/
    v4 = qword_905FD0; /*0x4fcfd7*/
  }
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 560) + 12976LL) ) /*0x4fcfe5*/
  {
    if ( (unsigned __int8)GameManager_getGameVariable(v4, "0234") ) /*0x4fcff9*/
      return; /*0x4fd000*/
    v4 = qword_905FD0; /*0x4fd006*/
  }
  if ( !*(_BYTE *)(a1 + 2497) && !*(_BYTE *)(a1 + 2498) && !*(_BYTE *)(a1 + 2500) && !*(_BYTE *)(a1 + 2508) ) /*0x4fd034*/
  {
    if ( *(_BYTE *)(a1 + 2027) || *(_BYTE *)(a1 + 2433) ) /*0x4fd04a*/
    {
      *(_BYTE *)(a1 + 2027) = 0; /*0x4fd057*/
      if ( !v4 ) /*0x4fd061*/
      {
        v25 = operator new(0x6E8u); /*0x4fd06d*/
        qword_905FD0 = sub_2723A0(v25); /*0x4fd07b*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd08c*/
        v4 = qword_905FD0; /*0x4fd08e*/
      }
      v5 = *(_QWORD *)(v4 + 560); /*0x4fd095*/
      if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(v5 + 14968)) ) /*0x4fd0a3*/
        goto LABEL_27; /*0x4fd0a3*/
      Object = cocos2d::CCArray::lastObject(*(cocos2d::CCArray **)(v5 + 14968)); /*0x4fd0be*/
      if ( !Object ) /*0x4fd0c4*/
        goto LABEL_27; /*0x4fd0c4*/
      v7 = *(_BYTE *)(a1 + 1533); /*0x4fd0c6*/
      v8 = qword_905FD0; /*0x4fd0cd*/
      if ( !qword_905FD0 ) /*0x4fd0d7*/
      {
        v26 = operator new(0x6E8u); /*0x4fd0e3*/
        qword_905FD0 = sub_2723A0(v26); /*0x4fd0f1*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd102*/
        v8 = qword_905FD0; /*0x4fd104*/
      }
      v9 = *(_DWORD *)(*(_QWORD *)(v8 + 560) + 1000LL) - *((_DWORD *)Object + 1174); /*0x4fd118*/
      v10 = 500; /*0x4fd11e*/
      if ( v7 ) /*0x4fd12b*/
        v10 = 100; /*0x4fd12b*/
      if ( v9 > v10 ) /*0x4fd130*/
      {
LABEL_27:
        *(_BYTE *)(a1 + 2033) = 1; /*0x4fd136*/
        ftime64(&Time); /*0x4fd142*/
        *(double *)(a1 + 2040) = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x4fd16b*/
        v11 = qword_905FD0; /*0x4fd173*/
        if ( !qword_905FD0 ) /*0x4fd17d*/
          goto LABEL_38; /*0x4fd17d*/
        goto LABEL_39; /*0x4fd17d*/
      }
    }
    return; /*0x4fd130*/
  }
  if ( !*(_BYTE *)(a1 + 2936) ) /*0x4fd1a7*/
  {
    v15 = 500; /*0x4fd2fb*/
    if ( *(_QWORD *)(a1 + 2200) ) /*0x4fd305*/
    {
LABEL_56:
      v21 = *(_BYTE *)(a1 + 1533); /*0x4fd449*/
      if ( !v4 ) /*0x4fd453*/
      {
        v33 = operator new(0x6E8u); /*0x4fd45f*/
        qword_905FD0 = sub_2723A0(v33); /*0x4fd46d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd47e*/
        v4 = qword_905FD0; /*0x4fd480*/
      }
      v22 = *(_QWORD *)(v4 + 560); /*0x4fd48e*/
      if ( v21 ) /*0x4fd4a4*/
        v15 = 100; /*0x4fd4a4*/
      if ( *(_DWORD *)(v22 + 1000) - *(_DWORD *)(*(_QWORD *)(a1 + 2200) + 4696LL) > v15 ) /*0x4fd4a9*/
      {
        sub_511B70(v22); /*0x4fd4ab*/
        cocos2d::CCObject::release(*(cocos2d::CCObject **)(a1 + 2200)); /*0x4fd4b7*/
        *(_QWORD *)(a1 + 2200) = 0; /*0x4fd4bd*/
      }
      return; /*0x4fd4bd*/
    }
    if ( !v4 ) /*0x4fd316*/
    {
      v30 = operator new(0x6E8u); /*0x4fd322*/
      qword_905FD0 = sub_2723A0(v30); /*0x4fd330*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd341*/
      v4 = qword_905FD0; /*0x4fd343*/
    }
    v16 = *(_QWORD *)(v4 + 560); /*0x4fd34a*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v16 + 14968)) /*0x4fd375*/
      && (v17 = cocos2d::CCArray::lastObject(*(cocos2d::CCArray **)(v16 + 14968))) != 0 )
    {
      v18 = *(_BYTE *)(a1 + 1533); /*0x4fd377*/
      v4 = qword_905FD0; /*0x4fd37f*/
      if ( !qword_905FD0 ) /*0x4fd389*/
      {
        v31 = operator new(0x6E8u); /*0x4fd395*/
        qword_905FD0 = sub_2723A0(v31); /*0x4fd3a3*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd3b4*/
        v4 = qword_905FD0; /*0x4fd3b6*/
      }
      v19 = 500; /*0x4fd3d0*/
      if ( v18 ) /*0x4fd3d5*/
        v19 = 100; /*0x4fd3d5*/
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 560) + 1000LL) - *((_DWORD *)v17 + 1174) <= v19 ) /*0x4fd3da*/
      {
LABEL_55:
        if ( !*(_QWORD *)(a1 + 2200) ) /*0x4fd447*/
          return; /*0x4fd447*/
        goto LABEL_56; /*0x4fd447*/
      }
    }
    else
    {
      v4 = qword_905FD0; /*0x4fd3de*/
    }
    if ( !v4 ) /*0x4fd3e8*/
    {
      v32 = operator new(0x6E8u); /*0x4fd3f4*/
      qword_905FD0 = sub_2723A0(v32); /*0x4fd402*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd413*/
      v4 = qword_905FD0; /*0x4fd415*/
    }
    Checkpoint = (cocos2d::CCObject *)PlayLayer_createCheckpoint(*(_QWORD *)(v4 + 560)); /*0x4fd423*/
    *(_QWORD *)(a1 + 2200) = Checkpoint; /*0x4fd428*/
    cocos2d::CCObject::retain(Checkpoint); /*0x4fd432*/
    v4 = qword_905FD0; /*0x4fd438*/
    goto LABEL_55; /*0x4fd438*/
  }
  if ( !v4 ) /*0x4fd1b0*/
  {
    v27 = operator new(0x6E8u); /*0x4fd1bc*/
    qword_905FD0 = sub_2723A0(v27); /*0x4fd1ca*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd1db*/
    v4 = qword_905FD0; /*0x4fd1dd*/
  }
  v12 = *(_QWORD *)(v4 + 560); /*0x4fd1e4*/
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(v12 + 14968)) ) /*0x4fd1f2*/
    goto LABEL_37; /*0x4fd1f2*/
  v13 = cocos2d::CCArray::lastObject(*(cocos2d::CCArray **)(v12 + 14968)); /*0x4fd209*/
  if ( !v13 ) /*0x4fd20f*/
    goto LABEL_37; /*0x4fd20f*/
  v14 = qword_905FD0; /*0x4fd211*/
  if ( !qword_905FD0 ) /*0x4fd21b*/
  {
    v28 = operator new(0x6E8u); /*0x4fd227*/
    qword_905FD0 = sub_2723A0(v28); /*0x4fd235*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd246*/
    v14 = qword_905FD0; /*0x4fd248*/
  }
  if ( *(_DWORD *)(*(_QWORD *)(v14 + 560) + 1000LL) - *((_DWORD *)v13 + 1174) > 500 ) /*0x4fd269*/
  {
LABEL_37:
    *(_BYTE *)(a1 + 2033) = 1; /*0x4fd26f*/
    ftime64(&Time); /*0x4fd27b*/
    *(double *)(a1 + 2040) = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x4fd2a4*/
    v11 = qword_905FD0; /*0x4fd2ac*/
    if ( !qword_905FD0 ) /*0x4fd2b6*/
    {
LABEL_38:
      v29 = operator new(0x6E8u); /*0x4fd2b8*/
      qword_905FD0 = sub_2723A0(v29); /*0x4fd2d0*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fd2e1*/
      v11 = qword_905FD0; /*0x4fd2e3*/
    }
LABEL_39:
    PlayLayer_markCheckpoint(*(_QWORD *)(v11 + 560)); /*0x4fd2ea*/
  }
}

// [103/109] Address: 0x4fd500
// Method: PlayerObject::setFlipX
void __fastcall PlayerObject_setFlipX(__int64 *a1, char a2)
{
  __int64 v4; // rbx

  if ( *((_BYTE *)a1 + 713) != a2 ) /*0x4fd516*/
  {
    v4 = *a1; /*0x4fd51d*/
    *((_BYTE *)a1 + 713) = a2; /*0x4fd520*/
    (*(void (**)(void))(v4 + 128))(); /*0x4fd526*/
    (*(void (__fastcall **)(__int64 *))(v4 + 120))(a1); /*0x4fd539*/
  }
  cocos2d::CCSprite::setFlipX((cocos2d::CCSprite *)a1[232], a2); /*0x4fd54c*/
  cocos2d::CCSprite::setFlipX((cocos2d::CCSprite *)a1[233], a2); /*0x4fd55d*/
  cocos2d::CCSprite::setFlipX((cocos2d::CCSprite *)a1[236], a2); /*0x4fd56e*/
  cocos2d::CCSprite::setFlipX((cocos2d::CCSprite *)a1[237], a2); /*0x4fd57f*/
  cocos2d::CCSprite::setFlipX((cocos2d::CCSprite *)a1[238], a2); /*0x4fd590*/
  cocos2d::CCSprite::setFlipX((cocos2d::CCSprite *)a1[240], a2); /*0x4fd5ab*/
}

// [104/109] Address: 0x4fd5c0
// Method: PlayerObject::setScaleX
// attributes: thunk
__int64 PlayerObject_setScaleX()
{
  return GameObject_setScaleX();
}

// [105/109] Address: 0x4fd5d0
// Method: PlayerObject::setScaleY
// attributes: thunk
__int64 PlayerObject_setScaleY()
{
  return GameObject_setScaleY();
}

// [106/109] Address: 0x4fd5e0
// Method: PlayerObject::setScale
// attributes: thunk
__int64 PlayerObject_setScale()
{
  return GameObject_setScale();
}

// [107/109] Address: 0x4fd5f0
// Method: PlayerObject::setVisible
__int64 __fastcall PlayerObject_setVisible(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r8

  v2 = 0; /*0x4fd5f0*/
  if ( !*(_BYTE *)(a1 + 1843) ) /*0x4fd5f6*/
    v2 = a2; /*0x4fd5fd*/
  return GameObject_setVisible(a1, v2);
}

// [108/109] Address: 0x4fd610
// Method: PlayerObject::animationFinished
// Hidden C++ exception states: #wind=1
void __fastcall PlayerObject_animationFinished(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  size_t v10; // r8
  int v11; // edi
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  void **v15; // rcx
  char *v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r15
  size_t v19; // r8
  int v20; // edi
  char *v21; // rax
  __int64 v22; // r8
  void **v23; // rcx
  char *v24; // rdi
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r14
  size_t v27; // r8
  int v28; // ebx
  char *v29; // rax
  __int128 Buf2; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h]
  __int64 v32; // [rsp+48h] [rbp-38h]
  void *Buf1[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-18h]
  unsigned __int64 v35; // [rsp+70h] [rbp-10h]

  v4 = 0; /*0x4fd63e*/
  v31 = 10; /*0x4fd64a*/
  v32 = 15; /*0x4fd64e*/
  *(_QWORD *)&v4 = 0x6174735F706D756ALL; /*0x4fd656*/
  Buf2 = v4; /*0x4fd65e*/
  WORD4(Buf2) = 29810; /*0x4fd66a*/
  BYTE10(Buf2) = 0; /*0x4fd66e*/
  *(_OWORD *)Buf1 = 0; /*0x4fd675*/
  v34 = 0; /*0x4fd67c*/
  v35 = 0; /*0x4fd680*/
  v5 = -1; /*0x4fd684*/
  do /*0x4fd693*/
    ++v5; /*0x4fd690*/
  while ( *(_BYTE *)(a2 + v5) ); /*0x4fd693*/
  sub_3C230(Buf1); /*0x4fd69d*/
  v6 = Buf1; /*0x4fd6a2*/
  v7 = (char *)Buf1[0]; /*0x4fd6a6*/
  v8 = v35; /*0x4fd6aa*/
  if ( v35 > 0xF ) /*0x4fd6b2*/
    v6 = (void **)Buf1[0]; /*0x4fd6b2*/
  v9 = v34; /*0x4fd6b6*/
  v10 = v34; /*0x4fd6ba*/
  if ( v34 > 0xA ) /*0x4fd6c1*/
    v10 = 10; /*0x4fd6c1*/
  v11 = memcmp(v6, &Buf2, v10); /*0x4fd6ce*/
  if ( !v11 ) /*0x4fd6d2*/
  {
    if ( v9 >= 0xA ) /*0x4fd6d8*/
      v11 = v9 > 0xA; /*0x4fd6e4*/
    else
      v11 = -1; /*0x4fd6da*/
  }
  if ( v8 > 0xF ) /*0x4fd6ec*/
  {
    v12 = v7; /*0x4fd6f2*/
    if ( v8 + 1 >= 0x1000 ) /*0x4fd6fc*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x4fd702*/
      if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x4fd711*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4fd722*/
    }
    j_j_free(v7); /*0x4fd72c*/
  }
  if ( !v11 ) /*0x4fd737*/
  {
    Buf1[1] = 0; /*0x4fd739*/
    v34 = 9; /*0x4fd73d*/
    strcpy((char *)Buf1, "jump_loop"); /*0x4fd74d*/
    v13 = *(_QWORD *)(a1 + 856); /*0x4fd760*/
LABEL_56:
    v35 = 15; /*0x4fda1f*/
    CCAnimatedSprite_runAnimation(v13, Buf1); /*0x4fda2b*/
    return; /*0x4fda2b*/
  }
  *((_QWORD *)&Buf2 + 1) = 0; /*0x4fd76c*/
  v31 = 10; /*0x4fd775*/
  v32 = 15; /*0x4fd779*/
  strcpy((char *)&Buf2, "fall_start"); /*0x4fd789*/
  *(_OWORD *)Buf1 = 0; /*0x4fd7a0*/
  v34 = 0; /*0x4fd7a4*/
  v35 = 0; /*0x4fd7a8*/
  v14 = -1; /*0x4fd7ac*/
  do /*0x4fd7b6*/
    ++v14; /*0x4fd7b3*/
  while ( *(_BYTE *)(a2 + v14) ); /*0x4fd7b6*/
  sub_3C230(Buf1); /*0x4fd7c4*/
  v15 = Buf1; /*0x4fd7c9*/
  v16 = (char *)Buf1[0]; /*0x4fd7cd*/
  v17 = v35; /*0x4fd7d1*/
  if ( v35 > 0xF ) /*0x4fd7d9*/
    v15 = (void **)Buf1[0]; /*0x4fd7d9*/
  v18 = v34; /*0x4fd7dd*/
  v19 = v34; /*0x4fd7e1*/
  if ( v34 > 0xA ) /*0x4fd7e8*/
    v19 = 10; /*0x4fd7e8*/
  v20 = memcmp(v15, &Buf2, v19); /*0x4fd7f5*/
  if ( !v20 ) /*0x4fd7f9*/
  {
    if ( v18 >= 0xA ) /*0x4fd7ff*/
      v20 = v18 > 0xA; /*0x4fd80b*/
    else
      v20 = -1; /*0x4fd801*/
  }
  if ( v17 > 0xF ) /*0x4fd813*/
  {
    v21 = v16; /*0x4fd819*/
    if ( v17 + 1 >= 0x1000 ) /*0x4fd823*/
    {
      v16 = (char *)*((_QWORD *)v16 - 1); /*0x4fd829*/
      if ( (unsigned __int64)(v21 - v16 - 8) > 0x1F ) /*0x4fd838*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4fd849*/
    }
    j_j_free(v16); /*0x4fd853*/
  }
  if ( !v20 ) /*0x4fd85e*/
  {
    Buf1[1] = 0; /*0x4fd860*/
    v34 = 9; /*0x4fd864*/
    v35 = 15; /*0x4fd86c*/
    strcpy((char *)Buf1, "fall_loop"); /*0x4fd87c*/
    CCAnimatedSprite_runAnimation(*(_QWORD *)(a1 + 856), Buf1); /*0x4fd89a*/
    Buf1[1] = sub_70; /*0x4fd8a2*/
    v34 = 9; /*0x4fd8a6*/
    Buf1[0] = (void *)0x6F6F6C5F6C6C6166LL; /*0x4fd8b6*/
    goto LABEL_55; /*0x4fd8c9*/
  }
  Buf2 = 0; /*0x4fd8ce*/
  v31 = 6; /*0x4fd8d8*/
  v32 = 15; /*0x4fd8dc*/
  strcpy((char *)&Buf2, "idle02"); /*0x4fd8ea*/
  *(_OWORD *)Buf1 = 0; /*0x4fd8fc*/
  v34 = 0; /*0x4fd900*/
  v35 = 0; /*0x4fd904*/
  v22 = -1; /*0x4fd908*/
  do /*0x4fd913*/
    ++v22; /*0x4fd910*/
  while ( *(_BYTE *)(a2 + v22) ); /*0x4fd913*/
  sub_3C230(Buf1); /*0x4fd921*/
  v23 = Buf1; /*0x4fd926*/
  v24 = (char *)Buf1[0]; /*0x4fd92a*/
  v25 = v35; /*0x4fd92e*/
  if ( v35 > 0xF ) /*0x4fd936*/
    v23 = (void **)Buf1[0]; /*0x4fd936*/
  v26 = v34; /*0x4fd93a*/
  v27 = v34; /*0x4fd93e*/
  if ( v34 > 6 ) /*0x4fd945*/
    v27 = 6; /*0x4fd945*/
  v28 = memcmp(v23, &Buf2, v27); /*0x4fd952*/
  if ( !v28 ) /*0x4fd956*/
  {
    if ( v26 >= 6 ) /*0x4fd95c*/
      v28 = v26 > 6; /*0x4fd968*/
    else
      v28 = -1; /*0x4fd95e*/
  }
  if ( v25 > 0xF ) /*0x4fd96f*/
  {
    v29 = v24; /*0x4fd975*/
    if ( v25 + 1 >= 0x1000 ) /*0x4fd97f*/
    {
      v24 = (char *)*((_QWORD *)v24 - 1); /*0x4fd985*/
      if ( (unsigned __int64)(v29 - v24 - 8) > 0x1F ) /*0x4fd994*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4fd9a5*/
    }
    j_j_free(v24); /*0x4fd9af*/
  }
  if ( !v28 ) /*0x4fd9b7*/
  {
    if ( *(_BYTE *)(a1 + 1141) ) /*0x4fd9b9*/
    {
      *(_OWORD *)Buf1 = 0; /*0x4fd9c4*/
      v34 = 6; /*0x4fd9c8*/
      strcpy((char *)Buf1, "idle01"); /*0x4fd9d2*/
      v13 = *(_QWORD *)(a1 + 856); /*0x4fd9e3*/
      goto LABEL_56; /*0x4fd9ea*/
    }
    if ( !*(_BYTE *)(a1 + 1142) ) /*0x4fd9f3*/
      return; /*0x4fd9f3*/
    *(_OWORD *)Buf1 = 0; /*0x4fd9f8*/
    v34 = 6; /*0x4fd9fc*/
    strcpy((char *)Buf1, "idle01"); /*0x4fda06*/
LABEL_55:
    v13 = *(_QWORD *)(a1 + 864); /*0x4fda18*/
    goto LABEL_56; /*0x4fda18*/
  }
}

// [109/109] Address: 0x4fdbf0
// Method: PlayerObject::updateInternalActions
void __fastcall PlayerObject_updateInternalActions(__int64 a1)
{
  __int64 v1; // r14
  struct cocos2d::CCArray *v2; // rax
  unsigned int *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 i; // rsi
  __int64 v7; // rbp
  struct cocos2d::CCObject *v8; // rdi
  char v9; // al
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 3128); /*0x4fdbf6*/
  v2 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(v1 + 320)); /*0x4fdc0c*/
  if ( v2 ) /*0x4fdc15*/
  {
    v3 = (unsigned int *)*((_QWORD *)v2 + 7); /*0x4fdc20*/
    v4 = *v3; /*0x4fdc24*/
    if ( (_DWORD)v4 ) /*0x4fdc28*/
    {
      v5 = *((_QWORD *)v3 + 2); /*0x4fdc2e*/
      for ( i = v5 + 8 * (v4 - 1); v5 <= i; v5 += 8LL ) /*0x4fdc42*/
      {
        if ( !*(_QWORD *)v5 ) /*0x4fdc50*/
          break; /*0x4fdc56*/
        v7 = *(int *)(*(_QWORD *)v5 + 56LL); /*0x4fdc58*/
        v8 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v1 + 320), v7); /*0x4fdc6c*/
        v9 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 72LL))(v8); /*0x4fdc79*/
        v10 = *(_QWORD *)v8; /*0x4fdc7b*/
        if ( v9 ) /*0x4fdc83*/
        {
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(v10 + 88))(v8); /*0x4fdc8d*/
          cocos2d::CCDictionary::removeObjectForKey(*(cocos2d::CCDictionary **)(v1 + 320), v7); /*0x4fdc9a*/
        }
        else
        {
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(v10 + 96))(v8); /*0x4fdc88*/
        }
      }
    }
  }
}

// Address: 0x33b660
// Method: PlayerObject::collidedWithObjectInternal
// Hidden C++ exception states: #wind=3
double __fastcall PlayerObject_collidedWithObjectInternal(__int64 a1, float a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  float v5; // xmm14_4
  double v6; // xmm0_8
  __int64 v7; // rax
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float X; // xmm6_4
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  float v18; // xmm6_4
  __int64 v19; // rbx
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  float *v23; // rax
  char v24; // cl
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rbx
  float v28; // xmm2_4
  float v29; // xmm3_4
  float MaxX; // xmm12_4
  float MinX; // xmm11_4
  float MaxY; // xmm9_4
  float MinY; // xmm10_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  int v37; // r13d
  float v38; // xmm7_4
  float v39; // xmm0_4
  int v40; // esi
  float v41; // xmm0_4
  int v42; // ebx
  __int64 v43... [24393 chars total]

// Address: 0x4d8ad0
// Method: PlayerObject::playDeathEffect
__int64 __fastcall PlayerObject_playDeathEffect(_QWORD **a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // r12
  float v5; // xmm10_4
  struct cocos2d::CCAction *v6; // rbx
  cocos2d::CCNode *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  float v12; // xmm6_4
  __int64 v13; // rcx
  cocos2d::CCArray *v14; // r15
  int v15; // edi
  cocos2d::CCString *v16; // rax
  const char *CString; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  cocos2d::CCSpriteFrameCache *v20; // rax
  struct cocos2d::CCObject *v21; // rax
  float v22; // xmm6_4
  struct cocos2d::CCAnimation *v23; // rax
  struct cocos2d::CCFiniteTimeAction *v24; // rbx
  __int64 v25; // rax
  struct cocos2d::CCAction *v26; // rax
  float v27; // xmm6_4
  struct cocos2d::CCFiniteTimeAction *v28; // rbx
  struct cocos2d::CCFadeOut *v29; // rax
  struct cocos2d::CCAction *v30; // rax
  cocos2d::CCParticleSystem *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; //... [121661 chars total]

// Address: 0x4f9740
// Method: PlayerObject::redirectPlayerForce
void __fastcall PlayerObject_redirectPlayerForce(__int64 a1, double a2, __int64 a3, float a4, float a5)
{
  float v6; // xmm9_4
  double v7; // xmm2_8
  double v8; // xmm0_8
  float v9; // xmm12_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  _BYTE *v17; // rax
  _BYTE *v18; // rdx
  float v19; // xmm1_4
  float *v20; // rax
  bool v21; // zf
  double v22; // xmm0_8
  _BYTE v23[16]; // [rsp+20h] [rbp-21h] BYREF
  float X; // [rsp+A0h] [rbp+5Fh] BYREF
  float Y; // [rsp+A4h] [rbp+63h]

  v6 = *(float *)&a2 * 0.017453292;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&X, *(double *)(a1 + 2816), *(double *)(a1 + 2472));
  HIDWORD(v7) = HIDWORD(a2);
  *(float *)&v7 = (float)(*(float *)&a2 * 0.017453292) - atan2f(Y, X);
  v8 = GJBaseGameLayer_convertToClosestDirection(v7, 3.1415927);
  v9 = *(float *)&v8;
  if ( *(float *)&v8 != 0.0 )
  {
    v10 = cosf(*(float *)&v8);
    v11 = sinf(v9);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v23,
      (float)(v10 * X) - (float)(v11 * Y),
      (float)(v10 * Y) + (float)(v11 * X));
    cocos2d::CCPoint::operator=(&X, v12);
  }
  cocos2d::CCPoint::operator*(&X, v23);
  cocos2d::CCPoint::operator=(&X, v23);
  v13 = (float)(Y * Y) + (float)(X * X);
  if ( v13 < 0.0 )
    v14 = sqrtf(v13);
  else
    v14 = fsqrt(v13);
  if ( a5 > 0.0 && v14 > a5 )
    goto LABEL_12;
  if ( a4 > 0.0 && a4 > v14 )
  {
    if ( v14 == 0.0 )
    {
      v15 = sinf(v6) * a4;
      v16 = cosf(v6);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v23, v16 * a4, v15);
      v18 = v17;
LABEL_13:
      cocos2d::CCPoint::operator=(&X, v18);
      goto LABEL_14;
    }
LABEL_12:
    cocos2d::CCPoint::operator*(&X, v23);
    v18 = v23;
    goto LABEL_13;
  }
LABEL_14:
  if ( *(_BYTE *)(a1 + 2507) )
  {
    v19 = X;
    X = Y;
    Y = v19;
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v23, (const struct cocos2d::CCPoint *)&X);
  v21 = *(_BYTE *)(a1 + 2936) == 0;
  *(_BYTE *)(a1 + 2394) = 1;
  *(double *)(a1 + 2472) = v20[1];
  if ( !v21 )
  {
    v22 = *v20;
    *(_BYTE *)(a1 + 2972) = 1;
    *(double *)(a1 + 2816) = v22;
  }
}

// Address: 0x4f6100
// Method: PlayerObject::setPosition
__int64 __fastcall PlayerObject_setPosition(__int64 a1, float *a2)
{
  const struct cocos2d::CCPoint *v3; // rax
  __int64 v4; // rbx
  float *v5; // rdx
  __int64 v6; // rcx
  float *v7; // rax
  float *v8; // r8
  float v9; // xmm1_4
  float v10; // xmm2_4
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r15
  float *v27; // rax
  __int64 *v28; // r14
  __int64 v29; // rsi
  __int64 (__fastcall *v30)(__int64 *); // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 *v40; // r12
  __int64 v41; // r15
  __int64 (__fastcall *v42)(__int64); // rdi
  __int64 (__fastcall *v43)(__int64 *); // rsi
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 *v51; // r12
  __int64 v52; // r15
  __int64 (__fastcall *v53)(__int64); // rdi
  __int64 (__fastcall *v54)(__int64 *); // rsi
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 *v62; // r12
  __int64 v63; // r15
  __int64 (__fastcall *v64)(__int64); // rdi
  __int64 (__fastcall *v65)(__int64 *); // rsi
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // esi
  int v73; // eax
  unsigned int v74; // ebx
  __int64 v75; // rax
  int v76; // eax
  __m128i v77; // xmm0
  char v78; // bl
  int v79; // eax
  float v80; // xmm7_4
  float v81; // xmm8_4
  float v82; // xmm10_4
  float v83; // xmm1_4
  float v84; // xmm0_4
  double v85; // xmm6_8
  double v86; // xmm12_8
  float v87; // xmm0_4
  char v88; // cl
  bool v89; // al
  double v90; // xmm0_8
  double v91; // xmm6_8
  float v92; // xmm7_4
  int v93; // eax
  double v94; // xmm8_8
  float v95; // xmm6_4
  float v96; // xmm0_4
  float v97; // xmm1_4
  float *v98; // rbx
  int v99; // xmm1_4
  unsigned int v100; // eax
  __m128i v101; // xmm2
  int v102; // eax
  float v103; // xmm1_4
  int v104; // eax
  __int64 *v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rax
  int v108; // eax
  float v109; // xmm2_4
  float v110; // xmm1_4
  __int64 v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rax
  float v114; // xmm2_4
  float v115; // xmm1_4
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 *v120; // r15
  __int64 v121; // r14
  __int64 (__fastcall *v122)(__int64); // rdi
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 *v127; // r14
  __int64 v128; // rbx
  __int64 v129; // rsi
  __int64 (__fastcall *v130)(__int64 *); // rdi
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rbx
  __int64 v134; // rax
  char *v135; // rdx
  __int64 v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 (__fastcall *v139)(__int64 *); // rdi
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 *v142; // rdi
  __int64 v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  const struct cocos2d::CCPoint *v147; // rax
  __int64 v148; // rax
  __int64 *v149; // rdi
  __int64 v150; // rbx
  __int64 v151; // rax
  int v153; // [rsp+20h] [rbp-79h] BYREF
  int v154; // [rsp+24h] [rbp-75h]
  char v155[8]; // [rsp+28h] [rbp-71h] BYREF
  float v156[2]; // [rsp+30h] [rbp-69h] BYREF
  char v157[8]; // [rsp+38h] [rbp-61h] BYREF
  char v158[8]; // [rsp+40h] [rbp-59h] BYREF
  char v159[8]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v160[16]; // [rsp+50h] [rbp-49h] BYREF
  float v161; // [rsp+100h] [rbp+67h] BYREF
  float v162; // [rsp+104h] [rbp+6Bh]
  float *v163; // [rsp+108h] [rbp+6Fh]
  float v164; // [rsp+110h] [rbp+77h] BYREF
  float v165; // [rsp+114h] [rbp+7Bh]
  char v166; // [rsp+118h] [rbp+7Fh] BYREF

  v163 = a2;
  *(_WORD *)(a1 + 872) = 257;
  GameObject_setPosition(a1, a2);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v166);
  v3 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1888) + 200LL))(*(_QWORD *)(a1 + 1888));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v155, v3);
  if ( *(_BYTE *)(a1 + 2508) )
  {
    v4 = *(_QWORD *)(a1 + 1368);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, *(float *)(a1 + 2552) * -10.0, 0.0);
    v5 = &v164;
    v6 = v4;
    v8 = v7;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 2936) && *(_BYTE *)(a1 + 2497) )
    {
      v9 = *(float *)(a1 + 2552) * -10.0;
      v10 = -18.0;
    }
    else if ( *(_BYTE *)(a1 + 2498) )
    {
      v10 = -3.0;
      v9 = 0.0;
    }
    else
    {
      v9 = *(float *)(a1 + 2552) * -12.0;
      v10 = -4.0;
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v164, v9, v10);
    cocos2d::CCPoint::operator+(v155, &v161, v11);
    v6 = *(_QWORD *)(a1 + 1368);
    v8 = &v161;
    v5 = (float *)v157;
  }
  cocos2d::CCNode::convertToWorldSpace(v6, v5, v8);
  cocos2d::CCPoint::operator=(&v166, v12);
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 504LL))(*(_QWORD *)(a1 + 2248)) )
  {
    v13 = *(__int64 **)(a1 + 2248);
    v14 = *v13;
    v15 = (*(__int64 (__fastcall **)(__int64 *))(*v13 + 504))(v13);
    cocos2d::CCNode::convertToNodeSpace(v15, &v161, &v166);
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 184))(v13, v16);
  }
  v17 = *(__int64 **)(a1 + 2256);
  v18 = *v17;
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 200LL))(*(_QWORD *)(a1 + 2248));
  (*(void (__fastcall **)(__int64 *, __int64))(v18 + 184))(v17, v19);
  v20 = *(__int64 **)(a1 + 2272);
  v21 = *v20;
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 200LL))(*(_QWORD *)(a1 + 2248));
  (*(void (__fastcall **)(__int64 *, __int64))(v21 + 184))(v20, v22);
  v23 = *(__int64 **)(a1 + 2288);
  v24 = *v23;
  v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 200LL))(*(_QWORD *)(a1 + 2248));
  (*(void (__fastcall **)(__int64 *, __int64))(v24 + 184))(v23, v25);
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 2216) + 800LL);
  v27 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 320LL))(v26);
  v28 = *(__int64 **)(a1 + 3096);
  v29 = *v28;
  v30 = *(__int64 (__fastcall **)(__int64 *))(*v28 + 504);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, *v27 * 0.5, 2.5);
  cocos2d::CCNode::convertToWorldSpace(v26, &v164, v31);
  v33 = v32;
  v34 = v30(v28);
  cocos2d::CCNode::convertToNodeSpace(v34, v157, v33);
  (*(void (__fastcall **)(__int64 *, __int64))(v29 + 184))(v28, v35);
  v36 = *(__int64 **)(a1 + 3096);
  v37 = *(_QWORD *)(*(_QWORD *)(a1 + 2216) + 688LL);
  v38 = *v36;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 128LL))(v37);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 360LL))(v26);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 360LL))(v37);
  (*(void (__fastcall **)(__int64 *))(v38 + 352))(v36);
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2280) + 504LL))(*(_QWORD *)(a1 + 2280)) )
  {
    v39 = *(_QWORD *)(a1 + 3096);
    v40 = *(__int64 **)(a1 + 2280);
    v41 = *v40;
    v42 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 504LL);
    v43 = *(__int64 (__fastcall **)(__int64 *))(*v40 + 504);
    v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 200LL))(v39);
    v45 = v42(v39);
    cocos2d::CCNode::convertToWorldSpace(v45, &v161, v44);
    v47 = v46;
    v48 = v43(v40);
    cocos2d::CCNode::convertToNodeSpace(v48, &v164, v47);
    (*(void (__fastcall **)(__int64 *, __int64))(v41 + 184))(v40, v49);
  }
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2296) + 504LL))(*(_QWORD *)(a1 + 2296)) )
  {
    v50 = *(_QWORD *)(a1 + 1936);
    v51 = *(__int64 **)(a1 + 2296);
    v52 = *v51;
    v53 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 504LL);
    v54 = *(__int64 (__fastcall **)(__int64 *))(*v51 + 504);
    v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 200LL))(v50);
    v56 = v53(v50);
    cocos2d::CCNode::convertToWorldSpace(v56, &v161, v55);
    v58 = v57;
    v59 = v54(v51);
    cocos2d::CCNode::convertToNodeSpace(v59, &v164, v58);
    (*(void (__fastcall **)(__int64 *, __int64))(v52 + 184))(v51, v60);
  }
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2304) + 504LL))(*(_QWORD *)(a1 + 2304)) )
  {
    v61 = *(_QWORD *)(a1 + 1944);
    v62 = *(__int64 **)(a1 + 2304);
    v63 = *v62;
    v64 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 504LL);
    v65 = *(__int64 (__fastcall **)(__int64 *))(*v62 + 504);
    v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 200LL))(v61);
    v67 = v64(v61);
    cocos2d::CCNode::convertToWorldSpace(v67, &v161, v66);
    v69 = v68;
    v70 = v65(v62);
    cocos2d::CCNode::convertToNodeSpace(v70, &v164, v69);
    (*(void (__fastcall **)(__int64 *, __int64))(v63 + 184))(v62, v71);
  }
  v72 = -1;
  v73 = -1;
  if ( !*(_BYTE *)(a1 + 2503) )
    v73 = 1;
  if ( *(_BYTE *)(a1 + 2508) )
    v73 = 1;
  v74 = -v73;
  if ( *(_BYTE *)(a1 + 2032) )
    v74 = v73;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v156, 0.0, 0.0);
  if ( *(_BYTE *)(a1 + 2501) )
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, 0.0, -2.0);
    cocos2d::CCPoint::operator=(v156, v75);
  }
  v76 = -1;
  v77 = _mm_cvtsi32_si128(v74);
  if ( !*(_BYTE *)(a1 + 2506) )
    v76 = 1;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v153,
    (float)((float)(v156[0] - 10.0) * *(float *)(a1 + 2552)) * (float)v76,
    (float)((float)(v156[1] - 13.0) * _mm_cvtepi32_ps(v77).m128_f32[0]) * *(float *)(a1 + 2552));
  if ( *(_BYTE *)(a1 + 2488) )
  {
    v78 = *(_BYTE *)(a1 + 1532);
    v79 = 1;
    v80 = *(float *)(a1 + 2552) * *(float *)(a1 + 768);
    if ( !v78 )
      v79 = -1;
    v81 = *(float *)(a1 + 2552) * 20.0;
    v82 = (float)v79;
    v83 = (float)(v81 * v81) + (float)(v80 * v80);
    if ( v83 < 0.0 )
      v84 = sqrtf(v83);
    else
      v84 = fsqrt(v83);
    v85 = *(float *)(a1 + 1696);
    v86 = (float)(v84 * 0.5);
    if ( v82 == -1.0 )
      v85 = -v85;
    v87 = atanf(v80 / v81);
    v88 = *(_BYTE *)(a1 + 2506);
    v89 = v88 != v78;
    if ( *(_BYTE *)(a1 + 2503) )
      v89 = v88 == v78;
    v90 = v82 * v87;
    if ( v89 )
      v91 = v85 + v90;
    else
      v91 = v85 - v90;
    v92 = v91;
    v93 = -1;
    if ( !v88 )
      v93 = 1;
    v94 = (double)v93;
    v95 = sinf(v92) * v86 * (double)v93;
    v96 = cosf(v92);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, v96 * v86 * v94, v95);
    if ( *(_BYTE *)(a1 + 2507) )
    {
      v97 = v161;
      v161 = v162;
      v162 = v97;
    }
    v98 = v163;
    cocos2d::CCPoint::operator-(v163, &v164, &v161);
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 2240) + 184LL))(*(_QWORD *)(a1 + 2240), &v164);
  }
  else if ( *(_BYTE *)(a1 + 2580) )
  {
    if ( *(_BYTE *)(a1 + 2507) )
    {
      v99 = v153;
      v153 = v154;
      v154 = v99;
    }
    v98 = v163;
    cocos2d::CCPoint::operator+(v163, &v161, &v153);
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 2240) + 184LL))(*(_QWORD *)(a1 + 2240), &v161);
  }
  else
  {
    v98 = v163;
  }
  if ( *(_BYTE *)(a1 + 2609) )
  {
    v100 = -1;
    if ( !*(_BYTE *)(a1 + 2503) )
      v100 = 1;
    v101 = _mm_cvtsi32_si128(v100);
    v102 = -1;
    if ( !*(_BYTE *)(a1 + 2506) )
      v102 = 1;
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v161,
      (float)v102 * *(float *)(a1 + 2552),
      _mm_cvtepi32_ps(v101).m128_f32[0] * (float)(*(float *)(a1 + 2552) * -15.0));
    if ( *(_BYTE *)(a1 + 2507) )
    {
      v103 = v161;
      v161 = v162;
      v162 = v103;
    }
    cocos2d::CCPoint::operator+(v98, &v164, &v161);
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 2264) + 184LL))(*(_QWORD *)(a1 + 2264), &v164);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2264) + 1000LL))(*(_QWORD *)(a1 + 2264));
    v104 = 300;
    v105 = *(__int64 **)(a1 + 2264);
    if ( !*(_BYTE *)(a1 + 2503) )
      v104 = -300;
    v106 = *v105;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v164, -350.0, (float)v104);
    (*(void (__fastcall **)(__int64 *, __int64))(v106 + 1040))(v105, v107);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2264) + 352LL))(*(_QWORD *)(a1 + 2264));
  }
  if ( !*(_BYTE *)(a1 + 2497) )
  {
    if ( !*(_BYTE *)(a1 + 2498) )
    {
      if ( *(_BYTE *)(a1 + 2508) )
      {
        v142 = *(__int64 **)(a1 + 1960);
        v143 = *v142;
        v144 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 200LL))(*(_QWORD *)(a1 + 2248));
        (*(void (__fastcall **)(__int64 *, __int64))(v143 + 184))(v142, v144);
      }
      else
      {
        if ( !*(_BYTE *)(a1 + 2506) )
          v72 = 1;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, (float)v72 * (float)(*(float *)(a1 + 2552) * -2.0), 0.0);
        if ( *(_BYTE *)(a1 + 2507) )
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v164, v162, v161);
          cocos2d::CCPoint::operator=(&v161, v145);
        }
        v146 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
        cocos2d::CCPoint::operator+(v146, &v164, &v161);
        (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 1960) + 184LL))(*(_QWORD *)(a1 + 1960), &v164);
      }
      goto LABEL_95;
    }
    if ( !(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1960) + 504LL))(*(_QWORD *)(a1 + 1960)) )
      goto LABEL_95;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v164, 0.0, 0.0);
    v137 = v136;
    v138 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1888) + 200LL))(*(_QWORD *)(a1 + 1888));
    cocos2d::CCPoint::operator+(v138, &v161, v137);
    v127 = *(__int64 **)(a1 + 1960);
    v129 = *v127;
    v139 = *(__int64 (__fastcall **)(__int64 *))(*v127 + 504);
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 1368), v160, &v161);
    v133 = v140;
    v134 = v139(v127);
    v135 = v159;
LABEL_87:
    cocos2d::CCNode::convertToNodeSpace(v134, v135, v133);
    (*(void (__fastcall **)(__int64 *, __int64))(v129 + 184))(v127, v141);
    goto LABEL_95;
  }
  if ( *(_BYTE *)(a1 + 2936) )
  {
    v127 = *(__int64 **)(a1 + 1960);
    v128 = *(_QWORD *)(a1 + 1368);
    v129 = *v127;
    v130 = *(__int64 (__fastcall **)(__int64 *))(*v127 + 504);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, *(float *)(a1 + 2552) * -10.0, *(float *)(a1 + 2552) * -12.0);
    cocos2d::CCNode::convertToWorldSpace(v128, &v164, v131);
    v133 = v132;
    v134 = v130(v127);
    v135 = v160;
    goto LABEL_87;
  }
  v108 = -4;
  if ( !*(_BYTE *)(a1 + 2506) )
    v108 = 4;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, (float)v108, 0.0);
  if ( *(_BYTE *)(a1 + 2507) )
  {
    v109 = v161;
    v110 = v162;
    v161 = v162;
    v162 = v109;
  }
  else
  {
    v109 = v162;
    v110 = v161;
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v157, v110, v109);
  v112 = v111;
  v113 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2248) + 200LL))(*(_QWORD *)(a1 + 2248));
  cocos2d::CCPoint::operator+(v113, &v164, v112);
  (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 1960) + 184LL))(*(_QWORD *)(a1 + 1960), &v164);
  if ( *(_QWORD *)(a1 + 1968) )
  {
    if ( *(_DWORD *)(a1 + 2356) == 2 )
    {
      v115 = -8.0;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 2356) == 3 )
      {
        v114 = -3.5;
        v115 = -8.0;
LABEL_80:
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v164, v115, v114);
        if ( !*(_BYTE *)(a1 + 2506) )
          v72 = 1;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v158, (float)v72 * v164, v165);
        v117 = v116;
        v118 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1888) + 200LL))(*(_QWORD *)(a1 + 1888));
        cocos2d::CCPoint::operator+(v118, v157, v117);
        v119 = *(_QWORD *)(a1 + 1960);
        v120 = *(__int64 **)(a1 + 1968);
        v121 = *v120;
        v122 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v119 + 504LL);
        cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 1368), v159, v157);
        v124 = v123;
        v125 = v122(v119);
        cocos2d::CCNode::convertToNodeSpace(v125, v160, v124);
        (*(void (__fastcall **)(__int64 *, __int64))(v121 + 184))(v120, v126);
        goto LABEL_95;
      }
      if ( *(_DWORD *)(a1 + 2356) != 4 && *(_DWORD *)(a1 + 2356) != 5 )
      {
        if ( *(_DWORD *)(a1 + 2356) == 6 )
        {
          v114 = -2.5;
          v115 = -14.0;
        }
        else
        {
          v114 = 0.0;
          v115 = 0.0;
        }
        goto LABEL_80;
      }
      v115 = -14.0;
    }
    v114 = -3.0;
    goto LABEL_80;
  }
LABEL_95:
  if ( *(_BYTE *)(a1 + 2432) && *(_BYTE *)(a1 + 2500) )
  {
    v147 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, v147);
    cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 1976) + 424LL, v148);
  }
  v149 = *(__int64 **)(a1 + 1976);
  v150 = *v149;
  v151 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v150 + 184))(v149, v151);
}

// Address: 0x4ede90
// Method: PlayerObject::spiderTestJumpInternal
double __usercall PlayerObject_spiderTestJumpInternal@<xmm0>(char a1@<dl>, __int64 a2@<rcx>, double result@<xmm0>)
{
  char v5; // r14
  float v6; // xmm8_4
  bool v7; // bl
  __int128 v8; // xmm7
  const struct cocos2d::CCRect *v9; // rax
  float MinPortalY; // xmm14_4
  float MaxPortalY; // xmm15_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  __int128 v18; // xmm0
  __int64 v19; // rbx
  float *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  cocos2d::CCArray *v23; // r15
  const struct cocos2d::CCRect *v24; // rax
  char v25; // r8
  cocos2d::CCArray *v26; // r13
  int (__cdecl *v27)(const void *, const void *); // rsi
  __int64 (__fastcall *v28)(); // rax
  __int64 v29; // rbx
  float *v30; // rax
  float v31; // xmm9_4
  int v32; // ebx
  const struct cocos2d::CCPoint *v33; // rax
  unsigned int v34; // r12d
  struct cocos2d::CCObject *v35; // rax
  __int64 *v36; // rbx
  float v37; // xmm6_4
  cocos2d::CCRect *v38; // rax
  cocos2d::CCRect *v39; // rax
  __int64 v40; // rax
  cocos2d::CCRect *v41; // rax
  float MaxX; // xmm0_4
  cocos2d::CCRect *v43; // rax
  char v44; // si
  int v45; // ecx
  char v46; // al
  double v47; // xmm6_8
  double v48; // xmm0_8
  int v49; // eax
  float v50; // xmm2_4
  float v51; // xmm1_4
  bool v52; // cf
  char v53; // si
  cocos2d::CCRect *v54; // rcx
  float MinY; // xmm0_4
  float v56; // xmm1_4
  cocos2d::CCRect *v57; // rcx
  float MaxY; // xmm0_4
  float v59; // xmm1_4
  unsigned int v60; // ebx
  struct cocos2d::CCObject *v61; // rax
  const struct cocos2d::CCRect *v62; // rax
  struct cocos2d::CCObject *v63; // rax
  _DWORD *v64; // rax
  struct cocos2d::CCObject *v65; // rax
  _DWORD *v66; // rax
  __int64 v67; // rdx
  const struct cocos2d::CCPoint *v69; // rax
  cocos2d::CCDictionary *v70; // rcx
  float *v71; // rax
  float *v72; // rbx
  float *v73; // rax
  __int64 v74; // rcx
  float v75; // [rsp+20h] [rbp-E0h] BYREF
  float v76; // [rsp+24h] [rbp-DCh]
  float v77; // [rsp+28h] [rbp-D8h]
  float v78; // [rsp+2Ch] [rbp-D4h]
  float v79; // [rsp+30h] [rbp-D0h] BYREF
  float v80; // [rsp+34h] [rbp-CCh]
  float v81; // [rsp+38h] [rbp-C8h]
  float v82; // [rsp+3Ch] [rbp-C4h]
  float v83; // [rsp+40h] [rbp-C0h] BYREF
  float v84; // [rsp+44h] [rbp-BCh]
  float v85; // [rsp+48h] [rbp-B8h]
  float v86; // [rsp+4Ch] [rbp-B4h]
  float v87; // [rsp+50h] [rbp-B0h] BYREF
  float v88; // [rsp+54h] [rbp-ACh]
  float v89; // [rsp+58h] [rbp-A8h]
  float v90; // [rsp+5Ch] [rbp-A4h]
  _BYTE v91[8]; // [rsp+60h] [rbp-A0h] BYREF
  float v92; // [rsp+68h] [rbp-98h]
  float v93; // [rsp+6Ch] [rbp-94h]
  _DWORD v94[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v95[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v96[8]; // [rsp+80h] [rbp-80h] BYREF
  float v97[4]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v98[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v99[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v100[24]; // [rsp+B8h] [rbp-48h] BYREF
  bool v101; // [rsp+1C0h] [rbp+C0h]
  char v102; // [rsp+1C8h] [rbp+C8h]
  float v103; // [rsp+1D0h] [rbp+D0h] BYREF
  float v104; // [rsp+1D4h] [rbp+D4h]
  int v105; // [rsp+1D8h] [rbp+D8h] BYREF
  int v106; // [rsp+1DCh] [rbp+DCh]

  v102 = a1;
  if ( *(_BYTE *)(a2 + 2504) || *(_BYTE *)(a2 + 2610) || *(_BYTE *)(a2 + 2025) )
    return result;
  v5 = *(_BYTE *)(a2 + 2507);
  v6 = *(float *)(a2 + 2552) * 8.0;
  v7 = v5
    || *(_BYTE *)(*(_QWORD *)(a2 + 3112) + 785LL)
    || !*(_BYTE *)(a2 + 2497)
    && !*(_BYTE *)(a2 + 2498)
    && !*(_BYTE *)(a2 + 2500)
    && !*(_BYTE *)(a2 + 2508)
    && !*(_BYTE *)(a2 + 2499)
    && !*(_BYTE *)(a2 + 2502);
  LODWORD(v8) = 0;
  v101 = v7;
  v9 = (const struct cocos2d::CCRect *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1184LL))(a2);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v79, v9);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v75, (const struct cocos2d::CCRect *)&v79);
  if ( *(_BYTE *)(a2 + 2507) )
  {
    MaxPortalY = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2) + 3000.0;
    MinPortalY = fmaxf(0.0, *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2) - 3000.0);
  }
  else if ( v7 )
  {
    MinPortalY = fmaxf(90.0, *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2) + 4) - 3000.0);
    MaxPortalY = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2) + 4) + 3000.0;
  }
  else
  {
    MinPortalY = GJBaseGameLayer_getMinPortalY(*(_QWORD *)(a2 + 3112));
    MaxPortalY = GJBaseGameLayer_getMaxPortalY(*(_QWORD *)(a2 + 3112));
  }
  if ( *(_BYTE *)(a2 + 2503) )
  {
    if ( v5 )
    {
      v14 = v75 - MinPortalY;
      v75 = MinPortalY;
      v12 = v14 + 2.0;
      goto LABEL_25;
    }
    v17 = v76 - MinPortalY;
    v76 = MinPortalY;
    v13 = v17 + 2.0;
  }
  else
  {
    if ( v5 )
    {
      v75 = v75 + (float)(v77 - 2.0);
      v12 = MaxPortalY - v75;
LABEL_25:
      v77 = v12;
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v83, (const struct cocos2d::CCRect *)&v75);
      v86 = v82;
      v84 = v80;
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)v91, (const struct cocos2d::CCRect *)&v83);
      v15 = v78;
      v16 = v77;
      v86 = v6;
      v93 = v93 + 4.0;
      v84 = v84 + (float)((float)(v78 - v6) * 0.5);
      goto LABEL_28;
    }
    v76 = v76 + (float)(v78 - 2.0);
    v13 = MaxPortalY - v76;
  }
  v78 = v13;
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v83, (const struct cocos2d::CCRect *)&v75);
  v85 = v81;
  v83 = v79;
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v91, (const struct cocos2d::CCRect *)&v83);
  v16 = v77;
  v15 = v78;
  v85 = v6;
  v92 = v92 + 4.0;
  v83 = v83 + (float)((float)(v77 - v6) * 0.5);
LABEL_28:
  if ( *(_BYTE *)(a2 + 2936) )
  {
    if ( !v5 )
    {
      v18 = LODWORD(v75);
      v75 = v75 + 1.0;
      v77 = v16 + -2.0;
      goto LABEL_43;
    }
    v18 = LODWORD(v76);
    *(float *)&v18 = v76 + 1.0;
    v78 = v15 + -2.0;
  }
  else
  {
    if ( v5 )
    {
      v18 = LODWORD(v82);
      v78 = (float)(v82 * 0.5) + 1.0;
    }
    else
    {
      v18 = LODWORD(v81);
      v77 = (float)(v81 * 0.5) + 1.0;
    }
    if ( !*(_BYTE *)(a2 + 2506) )
    {
      if ( v5 )
        v76 = (float)(v82 * 0.5) + v80;
      else
        v75 = (float)(v81 * 0.5) + v79;
      goto LABEL_43;
    }
    if ( !v5 )
    {
      v18 = LODWORD(v79);
      v75 = (float)(v79 - (float)(v81 * 0.5)) - 1.0;
      goto LABEL_43;
    }
    v18 = LODWORD(v80);
    *(float *)&v18 = (float)(v80 - (float)(v82 * 0.5)) - 1.0;
  }
  v76 = *(float *)&v18;
LABEL_43:
  v19 = *(_QWORD *)(a2 + 3112);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v98, (const struct cocos2d::CCRect *)&v75);
  v21 = GJBaseGameLayer_staticObjectsInRect(v19, v20, 1);
  v22 = *(_QWORD *)(a2 + 3112);
  v23 = (cocos2d::CCArray *)v21;
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v99, (const struct cocos2d::CCRect *)&v83);
  v26 = GJBaseGameLayer_damagingObjectsInRect(v22, v24, v25);
  if ( *(_BYTE *)(a2 + 2507) )
  {
    v27 = (int (__cdecl *)(const void *, const void *))sub_4DFFC0;
    v28 = sub_4E0020;
  }
  else
  {
    v27 = (int (__cdecl *)(const void *, const void *))sub_4DFF00;
    v28 = (__int64 (__fastcall *)())sub_4DFF60;
  }
  if ( *(_BYTE *)(a2 + 2503) )
    v27 = (int (__cdecl *)(const void *, const void *))v28;
  if ( !cocos2d::CCArray::count(v23) && cocos2d::CCArray::count(v26) || a1 )
  {
    v29 = *(_QWORD *)(a2 + 3112);
    v102 = 1;
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v100, (const struct cocos2d::CCRect *)v91);
    v23 = (cocos2d::CCArray *)GJBaseGameLayer_staticObjectsInRect(v29, v30, 1);
  }
  if ( cocos2d::CCArray::count(v23) )
    qsort(*(void **)(*((_QWORD *)v23 + 7) + 16LL), **((unsigned int **)v23 + 7), 8u, v27);
  if ( cocos2d::CCArray::count(v26) )
    qsort(*(void **)(*((_QWORD *)v26 + 7) + 16LL), **((unsigned int **)v26 + 7), 8u, v27);
  v31 = 0.0;
  v32 = 1;
  if ( cocos2d::CCArray::count(v23) )
  {
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v97, (const struct cocos2d::CCRect *)&v79);
    v33 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, v33);
    v34 = 0;
    if ( !cocos2d::CCArray::count(v23) )
      goto LABEL_96;
    while ( 1 )
    {
      v35 = cocos2d::CCArray::objectAtIndex(v23, v34);
      v36 = (__int64 *)v35;
      if ( *(_BYTE *)(a2 + 2503) )
      {
        v40 = *(_QWORD *)v35;
        if ( v5 )
        {
          v8 = LODWORD(v81);
          v41 = (cocos2d::CCRect *)(*(__int64 (__fastcall **)(__int64 *))(v40 + 1184))(v36);
          MaxX = cocos2d::CCRect::getMaxX(v41);
        }
        else
        {
          v8 = LODWORD(v82);
          v43 = (cocos2d::CCRect *)(*(__int64 (__fastcall **)(__int64 *))(v40 + 1184))(v36);
          MaxX = cocos2d::CCRect::getMaxY(v43);
        }
        *(float *)&v8 = (float)(*(float *)&v8 * 0.5) + MaxX;
      }
      else
      {
        if ( v5 )
        {
          v37 = v81;
          v38 = (cocos2d::CCRect *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v35 + 1184LL))(v35);
          *(float *)&v18 = cocos2d::CCRect::getMinX(v38);
        }
        else
        {
          v37 = v82;
          v39 = (cocos2d::CCRect *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v35 + 1184LL))(v35);
          *(float *)&v18 = cocos2d::CCRect::getMinY(v39);
        }
        *((_QWORD *)&v8 + 1) = *((_QWORD *)&v18 + 1);
        *(float *)&v8 = *(float *)&v18 - (float)(v37 * 0.5);
      }
      v44 = 0;
      if ( (*(unsigned int (__fastcall **)(__int64 *))(*v36 + 1648))(v36) == 25 )
      {
        (*(void (__fastcall **)(__int64 *, _DWORD *))(*v36 + 1208))(v36, v94);
        if ( *(_BYTE *)(a2 + 2507) )
          sub_4EAFA0(a2, v36);
        v45 = *((_DWORD *)v36 + 273);
        v46 = v45 == 1 || ((v45 - 3) & 0xFFFFFFFC) == 0 && v45 != 4;
        if ( v46 != *(_BYTE *)(a2 + 2503) )
        {
          v47 = *(float *)((*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v36 + 1208))(v36, v96) + 4);
          *(_QWORD *)&v48 = GameObject_slopeYPos((__int64)v36, v103).m128_u64[0];
          v49 = -1;
          if ( !*(_BYTE *)(a2 + 2503) )
            v49 = 1;
          if ( v5 )
          {
            v8 = v94[0];
            v51 = v81;
          }
          else
          {
            v8 = v94[1];
            v51 = v82;
          }
          v44 = 1;
          v50 = v48 - v47;
          *(float *)&v8 = (float)(*(float *)&v8 + v50) - (float)((float)(v51 * 0.5) * (float)v49);
        }
        if ( *(_BYTE *)(a2 + 2507) )
          PlayerObject_unrotateGameplayObject((_QWORD *)a2, v36);
      }
      if ( *(_BYTE *)(a2 + 2503) )
      {
        if ( v5 )
          v18 = LODWORD(v103);
        else
          v18 = LODWORD(v104);
        v52 = (float)(*(float *)&v18 + 10.0) < *(float *)&v8;
      }
      else if ( v5 )
      {
        v18 = LODWORD(v103);
        v52 = *(float *)&v8 < (float)(v103 - 10.0);
      }
      else
      {
        v18 = LODWORD(v104);
        v52 = *(float *)&v8 < (float)(v104 - 10.0);
      }
      if ( v52 )
        goto LABEL_128;
      if ( *(_BYTE *)(a2 + 2936) )
      {
        if ( !v44 )
          goto LABEL_95;
      }
      else
      {
        if ( !*(_BYTE *)(a2 + 2506) )
        {
          v54 = (cocos2d::CCRect *)(*(__int64 (__fastcall **)(__int64 *))(*v36 + 1184))(v36);
          if ( v5 )
          {
            MinY = cocos2d::CCRect::getMinY(v54);
            v56 = v104;
          }
          else
          {
            MinY = cocos2d::CCRect::getMinX(v54);
            v56 = v103;
          }
          if ( MinY > v56 )
            goto LABEL_109;
          if ( !*(_BYTE *)(a2 + 2506) )
            goto LABEL_95;
        }
        v57 = (cocos2d::CCRect *)(*(__int64 (__fastcall **)(__int64 *))(*v36 + 1184))(v36);
        if ( v5 )
        {
          MaxY = cocos2d::CCRect::getMaxY(v57);
          v59 = v104;
        }
        else
        {
          MaxY = cocos2d::CCRect::getMaxX(v57);
          v59 = v103;
        }
        if ( v59 <= MaxY )
        {
LABEL_95:
          v32 = 1;
          goto LABEL_96;
        }
      }
LABEL_109:
      v60 = 0;
      if ( !cocos2d::CCArray::count(v23) )
        goto LABEL_95;
      while ( 1 )
      {
        v61 = cocos2d::CCArray::objectAtIndex(v23, v60);
        if ( v34 != v60 )
        {
          *((_QWORD *)&v18 + 1) = *((_QWORD *)&v8 + 1);
          if ( v5 )
            v97[0] = *(float *)&v8 - (float)(v81 * 0.5);
          else
            v97[1] = *(float *)&v8 - (float)(v82 * 0.5);
          v62 = (const struct cocos2d::CCRect *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v61 + 1184LL))(v61);
          cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v87, v62);
          if ( !v44 )
          {
            if ( v5 )
            {
              v18 = LODWORD(v89);
              v89 = v89 + -4.0;
              v87 = v87 + 2.0;
            }
            else
            {
              v18 = LODWORD(v90);
              v90 = v90 + -4.0;
              v88 = v88 + 2.0;
            }
          }
          if ( cocos2d::CCRect::intersectsRect((cocos2d::CCRect *)&v87, (const struct cocos2d::CCRect *)v97) )
            break;
        }
        if ( ++v60 >= cocos2d::CCArray::count(v23) )
          goto LABEL_95;
      }
      if ( !v44 )
        goto LABEL_128;
      if ( v31 == 0.0 )
        goto LABEL_127;
      if ( !*(_BYTE *)(a2 + 2503) )
      {
        if ( v31 <= *(float *)&v8 )
          goto LABEL_128;
LABEL_127:
        v31 = *(float *)&v8;
        goto LABEL_128;
      }
      if ( *(float *)&v8 > v31 )
        goto LABEL_127;
LABEL_128:
      LODWORD(v8) = 0;
      if ( ++v34 >= cocos2d::CCArray::count(v23) )
        goto LABEL_95;
    }
  }
  if ( cocos2d::CCArray::count(v26) )
  {
    v53 = 1;
    v63 = cocos2d::CCArray::objectAtIndex(v26, 0);
    v64 = (_DWORD *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *, float *))(*(_QWORD *)v63 + 1208LL))(
                      v63,
                      &v103);
    if ( !v5 )
      ++v64;
    LODWORD(v8) = *v64;
  }
  else
  {
LABEL_96:
    v53 = 0;
  }
  if ( *(_BYTE *)(a2 + 2936) )
  {
    if ( v31 != 0.0 )
    {
      if ( *(_BYTE *)(a2 + 2503) )
      {
        if ( v31 <= *(float *)&v8 )
          goto LABEL_140;
      }
      else if ( *(float *)&v8 <= v31 )
      {
        goto LABEL_140;
      }
      *(float *)&v8 = v31;
    }
  }
  else
  {
    v31 = 0.0;
  }
LABEL_140:
  if ( *(float *)&v8 == 0.0 )
  {
    if ( v31 == 0.0 )
    {
      if ( *(_BYTE *)(a2 + 2503) )
      {
        if ( v5 )
          *(float *)&v8 = (float)(v81 * 0.5) + MinPortalY;
        else
          *(float *)&v8 = (float)(v82 * 0.5) + MinPortalY;
      }
      else if ( v5 )
      {
        *(float *)&v8 = MaxPortalY - (float)(v81 * 0.5);
      }
      else
      {
        *(float *)&v8 = MaxPortalY - (float)(v82 * 0.5);
      }
    }
    else
    {
      *(float *)&v8 = v31;
    }
  }
  if ( !v53 && cocos2d::CCArray::count(v26) )
  {
    v65 = cocos2d::CCArray::objectAtIndex(v26, 0);
    v66 = (_DWORD *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v65 + 1208LL))(v65, v96);
    if ( !v5 )
      ++v66;
    *(_QWORD *)&result = (unsigned int)*v66;
    if ( !(*(_BYTE *)(a2 + 2503) ? *(float *)&result <= *(float *)&v8 : *(float *)&v8 <= *(float *)&result) )
    {
      if ( !v102 )
      {
        LOBYTE(v67) = 1;
        PlayerObject_spiderTestJumpInternal(a2, v67);
        return result;
      }
      LODWORD(v8) = *v66;
    }
  }
  v69 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v95, v69);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v105, (const struct cocos2d::CCPoint *)v95);
  if ( v5 )
    v105 = v8;
  else
    v106 = v8;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 184LL))(a2, &v105);
  PlayerObject_flipGravity(a2, *(_BYTE *)(a2 + 2503) == 0, 1);
  if ( !*(_BYTE *)(a2 + 2503) )
    v32 = -1;
  PlayerObject_setYVelocity(a2, (double)v32);
  v70 = *(cocos2d::CCDictionary **)(a2 + 1456);
  *(_BYTE *)(a2 + 2032) = 0;
  *(_BYTE *)(a2 + 2445) = 0;
  cocos2d::CCDictionary::removeAllObjects(v70);
  cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a2 + 1464));
  cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a2 + 1472));
  cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a2 + 1480));
  *(_QWORD *)(a2 + 1504) = -1;
  *(_QWORD *)(a2 + 1488) = -1;
  *(_QWORD *)(a2 + 1496) = -1;
  if ( v5 )
    *(_DWORD *)(a2 + 2712) = v105;
  else
    *(_DWORD *)(a2 + 2716) = v106;
  *(_QWORD *)(a2 + 2088) = *(_QWORD *)(a2 + 2728);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, (const struct cocos2d::CCPoint *)&v105);
  v72 = v71;
  result = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, (const struct cocos2d::CCPoint *)v95);
  PlayerObject_playSpiderDashEffect(a2, v73, v72);
  if ( v101 )
  {
    v74 = *(_QWORD *)(a2 + 3112);
    if ( v74 )
      return GJBaseGameLayer_checkCameraLimitAfterTeleport(v74, (_BYTE *)a2, 60.0);
  }
  return result;
}

// Address: 0x8bb90
// Method: PlayerObject::togglePlayerScale
// Hidden C++ exception states: #wind=2
bool __fastcall PlayerObject_togglePlayerScale(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  void (__fastcall *v8)(_QWORD *, __int64); // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  cocos2d::CCArray *v20; // rdi
  int v21; // eax
  struct cocos2d::CCObject *v22; // rbx
  int v23; // eax
  struct cocos2d::CCObject *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  float *v32; // rax
  float *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  float *v42; // rax
  float *v43; // rbx
  __int64 v44; // rax
  struct cocos2d::CCLabelBMFont *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbx
  float v49; // xmm6_4
  double v50; // xmm0_8
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  char *TextInput; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  float *v64; // rax
  float *v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  char *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rax
  float *v77; // rax
  float *v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rax
  float *v87; // rax
  float *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rax
  cocos2d::CCLayerColor *v93; // rax
  __int64 *v94; // rdi
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rax
  __int128 v98; // [rsp+40h] [rbp-79h] BYREF
  __int64 v99; // [rsp+50h] [rbp-69h]
  __int64 v100; // [rsp+58h] [rbp-61h]
  _BYTE v101[8]; // [rsp+68h] [rbp-51h] BYREF
  __int128 *v102; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v103[2]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v104[8]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v105[8]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v106[8]; // [rsp+98h] [rbp-21h] BYREF
  float v107; // [rsp+A0h] [rbp-19h] BYREF
  float v108; // [rsp+A4h] [rbp-15h]
  _BYTE v109[72]; // [rsp+A8h] [rbp-11h] BYREF
  char v110; // [rsp+128h] [rbp+6Fh] BYREF
  float v111; // [rsp+130h] [rbp+77h] BYREF
  float v112; // [rsp+134h] [rbp+7Bh]
  char v113; // [rsp+138h] [rbp+7Fh] BYREF

  result = FLAlertLayer_init(a1, 150);
  if ( result )
  {
    *(_BYTE *)(a1 + 596) = 1;
    v4 = cocos2d::CCDirector::sharedDirector(v3);
    cocos2d::CCDirector::getWinSize(v4, &v107);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v103, 0.0, 0.0, 80.0, 80.0);
    v6 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5);
    v7 = v6[40];
    v8 = *(void (__fastcall **)(_QWORD *, __int64))(v7 + 40);
    LOBYTE(v7) = -1;
    v8(v6 + 40, v7);
    v9 = *v6;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v101, 400.0, 300.0);
    (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 312))(v6, v10);
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v6,
      0xFFFFFFFFLL);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v111, v107 * 0.5, v108 * 0.5);
    (*(void (__fastcall **)(_QWORD *, float *))(*v6 + 184LL))(v6, &v111);
    v11 = cocos2d::CCLabelBMFont::create("Register Account", (const char *)&qword_6FFF68);
    v12 = *(_QWORD *)v11;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, v111, (float)(v112 + 150.0) - 16.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 184))(v11, v13);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v11);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 160LL))(v11);
    v18 = cocos2d::CCMenu::create(v15, v14, v16, v17);
    *(_QWORD *)(a1 + 552) = v18;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v18, 10);
    v20 = (cocos2d::CCArray *)cocos2d::CCArray::create(v19);
    v21 = (unsigned int)ButtonSprite_create(
                          (int)"Cancel",
                          0,
                          0,
                          1.0,
                          0,
                          (__int64)"goldFont.fnt",
                          (__int64)"GJ_button_01.png",
                          0);
    v22 = CCMenuItemSpriteExtra_create(v21, 0, a1, (__int64)AccountRegisterLayer_onClose);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
      *(_QWORD *)(a1 + 552),
      v22);
    cocos2d::CCArray::addObject(v20, v22);
    v23 = (unsigned int)ButtonSprite_create(
                          (int)"Submit",
                          0,
                          0,
                          1.0,
                          0,
                          (__int64)"goldFont.fnt",
                          (__int64)"GJ_button_01.png",
                          0);
    v24 = CCMenuItemSpriteExtra_create(v23, 0, a1, (__int64)sub_8D2C0);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
      *(_QWORD *)(a1 + 552),
      v24);
    cocos2d::CCArray::addObject(v20, v24);
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 200LL))(*(_QWORD *)(a1 + 584));
    v26 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v101,
      v111,
      (float)((float)(v112 - 150.0) + 22.0) + *(float *)(v25 + 4));
    cocos2d::CCNode::convertToNodeSpace(v26, &v102, v27);
    GameToolbox_alignItemsHorisontally((__int64)v20, 15.0, v28, 0);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v110, 300.0, 30.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v113, v111, v112 + 90.0);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v30 = v29;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)&v113);
    sub_8C920(a1, v31, v30);
    v102 = &v98;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    *(_QWORD *)&v98 = sub_3C460(48);
    v99 = 34;
    v100 = 47;
    strcpy((char *)v98, "Username: (shown to other players)");
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v101, (const struct cocos2d::CCSize *)&v110);
    v33 = v32;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, (const struct cocos2d::CCPoint *)&v113);
    *(_QWORD *)(a1 + 720) = AccountRegisterLayer_createTextLabel(a1, v34, (__int64)&v98, v33);
    v103[0] = &v98;
    v99 = 8;
    v100 = 15;
    v98 = 0x656D616E72657355uLL;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v36 = v35;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)&v113);
    *(_QWORD *)(a1 + 680) = AccountRegisterLayer_createTextInput(a1, v37, v36, (__int64 *)&v98, 1u);
    v98 = 0;
    v99 = 0;
    v100 = 0;
    *(_QWORD *)&v98 = sub_3C460(64);
    v99 = 62;
    v100 = 63;
    strcpy((char *)v98, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    GameManager_getMenuMusicFile(*(_DWORD **)(a1 + 680), &v98);
    *(_DWORD *)(*(_QWORD *)(a1 + 680) + 616LL) = 15;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, 0.0, -45.0);
    cocos2d::CCPoint::operator+(&v113, v104, v38);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v103, (const struct cocos2d::CCSize *)&v110);
    v40 = v39;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v102, (const struct cocos2d::CCPoint *)v104);
    sub_8C920(a1, v41, v40);
    v103[0] = &v98;
    *((_QWORD *)&v98 + 1) = 58;
    v99 = 9;
    v100 = 15;
    *(_QWORD *)&v98 = 0x64726F7773736150LL;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v43 = v42;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)v104);
    *(_QWORD *)(a1 + 728) = AccountRegisterLayer_createTextLabel(a1, v44, (__int64)&v98, v43);
    v45 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68);
    *(_QWORD *)(a1 + 736) = v45;
    v46 = *(_QWORD *)v45;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v46 + 288))(v45, v47);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 736) + 160LL))(*(_QWORD *)(a1 + 736));
    v48 = *(_QWORD *)(a1 + 728);
    v49 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 320LL))(v48);
    v50 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v48 + 168LL))(v48);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, (float)(*(float *)&v50 * v49) + 8.0, 0.0);
    v52 = v51;
    v53 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 728) + 200LL))(*(_QWORD *)(a1 + 728));
    cocos2d::CCPoint::operator+(v53, v101, v52);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 736) + 184LL))(*(_QWORD *)(a1 + 736), v101);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 736));
    v103[0] = &v98;
    v99 = 8;
    v100 = 15;
    v98 = 0x64726F7773736150uLL;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v55 = v54;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)v104);
    TextInput = AccountRegisterLayer_createTextInput(a1, v56, v55, (__int64 *)&v98, 2u);
    *(_QWORD *)(a1 + 688) = TextInput;
    v98 = 0;
    v99 = 0;
    v100 = 15;
    LOBYTE(v98) = 0;
    GameManager_getMenuMusicFile(TextInput, &v98);
    *(_DWORD *)(*(_QWORD *)(a1 + 688) + 616LL) = 64;
    *(_BYTE *)(*(_QWORD *)(a1 + 688) + 633LL) = 1;
    v58 = *(_QWORD *)(a1 + 688);
    *(_DWORD *)(v58 + 572) = 1065353216;
    sub_555B0(v58, v59);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, 0.0, -45.0);
    cocos2d::CCPoint::operator+(v104, v105, v60);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v103, (const struct cocos2d::CCSize *)&v110);
    v62 = v61;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v102, (const struct cocos2d::CCPoint *)v105);
    sub_8C920(a1, v63, v62);
    v103[0] = &v98;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    *(_QWORD *)&v98 = sub_3C460(32);
    v99 = 17;
    v100 = 31;
    strcpy((char *)v98, "Confirm Password:");
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v65 = v64;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)v105);
    *(_QWORD *)(a1 + 744) = AccountRegisterLayer_createTextLabel(a1, v66, (__int64)&v98, v65);
    v103[0] = &v98;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    *(_QWORD *)&v98 = sub_3C460(32);
    v99 = 16;
    v100 = 31;
    strcpy((char *)v98, "Confirm Password");
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v68 = v67;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)v105);
    v70 = AccountRegisterLayer_createTextInput(a1, v69, v68, (__int64 *)&v98, 3u);
    *(_QWORD *)(a1 + 696) = v70;
    v98 = 0;
    v99 = 0;
    v100 = 15;
    LOBYTE(v98) = 0;
    GameManager_getMenuMusicFile(v70, &v98);
    *(_DWORD *)(*(_QWORD *)(a1 + 696) + 616LL) = 64;
    *(_BYTE *)(*(_QWORD *)(a1 + 696) + 633LL) = 1;
    v71 = *(_QWORD *)(a1 + 696);
    *(_DWORD *)(v71 + 572) = 1065353216;
    sub_555B0(v71, v72);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, 0.0, -45.0);
    cocos2d::CCPoint::operator+(v105, v106, v73);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v103, (const struct cocos2d::CCSize *)&v110);
    v75 = v74;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v102, (const struct cocos2d::CCPoint *)v106);
    sub_8C920(a1, v76, v75);
    v103[0] = &v98;
    v98 = 0;
    v99 = 6;
    v100 = 15;
    strcpy((char *)&v98, "Email:");
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v78 = v77;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)v106);
    *(_QWORD *)(a1 + 752) = AccountRegisterLayer_createTextLabel(a1, v79, (__int64)&v98, v78);
    v103[0] = &v98;
    v98 = 0;
    v99 = 5;
    v100 = 15;
    strcpy((char *)&v98, "Email");
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v81 = v80;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)v106);
    *(_QWORD *)(a1 + 704) = AccountRegisterLayer_createTextInput(a1, v82, v81, (__int64 *)&v98, 4u);
    v98 = 0;
    v99 = 0;
    v100 = 0;
    *(_QWORD *)&v98 = sub_3C460(80);
    v99 = 67;
    v100 = 79;
    strcpy((char *)v98, " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_@.");
    GameManager_getMenuMusicFile(*(_DWORD **)(a1 + 704), &v98);
    *(_DWORD *)(*(_QWORD *)(a1 + 704) + 616LL) = 50;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, 0.0, -45.0);
    cocos2d::CCPoint::operator+(v106, v109, v83);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v103, (const struct cocos2d::CCSize *)&v110);
    v85 = v84;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v102, (const struct cocos2d::CCPoint *)v109);
    sub_8C920(a1, v86, v85);
    v103[0] = &v98;
    v99 = 13;
    v100 = 15;
    strcpy((char *)&v98, "Verify Email:");
    HIWORD(v98) = 0;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v88 = v87;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)v109);
    *(_QWORD *)(a1 + 760) = AccountRegisterLayer_createTextLabel(a1, v89, (__int64)&v98, v88);
    v103[0] = &v98;
    v99 = 12;
    v100 = 15;
    strcpy((char *)&v98, "Verify Email");
    BYTE13(v98) = 0;
    HIWORD(v98) = 0;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v102, (const struct cocos2d::CCSize *)&v110);
    v91 = v90;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, (const struct cocos2d::CCPoint *)v109);
    *(_QWORD *)(a1 + 712) = AccountRegisterLayer_createTextInput(a1, v92, v91, (__int64 *)&v98, 4u);
    v98 = 0;
    v99 = 0;
    v100 = 0;
    *(_QWORD *)&v98 = sub_3C460(80);
    v99 = 67;
    v100 = 79;
    strcpy((char *)v98, " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_@.");
    GameManager_getMenuMusicFile(*(_DWORD **)(a1 + 712), &v98);
    *(_DWORD *)(*(_QWORD *)(a1 + 712) + 616LL) = 50;
    v93 = LoadingCircle_create();
    *(_QWORD *)(a1 + 768) = v93;
    *((_QWORD *)v93 + 69) = *(_QWORD *)(a1 + 584);
    *(_BYTE *)(*(_QWORD *)(a1 + 768) + 560LL) = 1;
    cocos2d::CCObject::retain(*(cocos2d::CCObject **)(a1 + 768));
    LoadingCircle_show(*(_QWORD *)(a1 + 768));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 768) + 336LL))(*(_QWORD *)(a1 + 768), 0);
    v94 = *(__int64 **)(*(_QWORD *)(a1 + 768) + 544LL);
    v95 = *v94;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, v107 * 0.5, v108 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v95 + 184))(v94, v96);
    v97 = GJAccountManager_sharedState();
    sub_3029F0(v97);
    return 1;
  }
  return result;
}

// Address: 0x3a9b00
// Method: PlayerObject::toggleSpiderMode
// Hidden C++ exception states: #wind=6
unsigned int __fastcall PlayerObject_toggleSpiderMode(__int64 a1, int a2)
{
  unsigned int v2; // r13d
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  cocos2d::CCArray *v8; // rbx
  unsigned int v9; // r12d
  unsigned int result; // eax
  struct cocos2d::CCObject *v11; // r15
  unsigned int v12; // eax
  const char *v13; // rcx
  cocos2d::CCString *v14; // rax
  char *CString; // rax
  size_t v16; // r8
  const char *v17; // rdx
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  __int64 v20; // r8
  const char *v21; // rdx
  cocos2d::CCString *v22; // rax
  const char *v23; // rax
  __int64 v24; // r8
  const char *v25; // rdx
  cocos2d::CCString *v26; // rax
  const char *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  const char *v31; // rdi
  __int64 v32; // rbx
  cocos2d::CCSpriteFrameCache *v33; // rax
  struct cocos2d::CCSpriteFrame *v34; // rax
  struct cocos2d::CCObject *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct cocos2d::CCObject *v38; // rsi
  const char *v39; // rdi
  __int64 v40; // rbx
  cocos2d::CCSpriteFrameCache *v41; // rax
  struct cocos2d::CCSpriteFrame *v42; // rax
  __int64 v43; // rbx
  float v44; // xmm6_4
  float *v45; // rax
  __int64 v46; // rax
  cocos2d::CCArray *v47; // rax
  struct cocos2d::CCObject *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct cocos2d::CCObject *v51; // rsi
  const char *v52; // rdi
  __int64 v53; // rbx
  cocos2d::CCSpriteFrameCache *v54; // rax
  struct cocos2d::CCSpriteFrame *v55; // rax
  const char *v56; // rdx
  cocos2d::CCString *v57; // rax
  const char *v58; // rax
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  const char *v62; // rbx
  cocos2d::CCSpriteFrameCache *v63; // rax
  struct cocos2d::CCSpriteFrame *v64; // rax
  __int64 v65; // rcx
  struct cocos2d::CCSprite *v66; // rax
  __int64 v67; // rdi
  float v68; // xmm6_4
  float *v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  char v72; // dl
  void *v73; // rcx
  void *v74; // rcx
  void *v75; // [rsp+30h] [rbp-D0h]
  cocos2d::CCArray *v76; // [rsp+30h] [rbp-D0h]
  _BYTE v77[8]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v78[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v79; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v81; // [rsp+60h] [rbp-A0h]
  __int128 v82; // [rsp+68h] [rbp-98h] BYREF
  __int64 v83; // [rsp+78h] [rbp-88h]
  unsigned __int64 v84; // [rsp+80h] [rbp-80h]
  __int128 v85; // [rsp+88h] [rbp-78h] BYREF
  __int64 v86; // [rsp+98h] [rbp-68h]
  unsigned __int64 v87; // [rsp+A0h] [rbp-60h]
  __int128 v88; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v89; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-40h]
  __int128 v91; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v93; // [rsp+E0h] [rbp-20h]

  v2 = a2;
  v4 = (*(_DWORD *)(a1 + 784) != 5) + 68;
  v5 = v4;
  if ( a2 < v4 )
    v5 = a2;
  if ( v5 >= 1 )
  {
    if ( a2 >= v4 )
      v2 = v4;
  }
  else
  {
    v2 = 1;
  }
  v6 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v75 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v75);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v6 = qword_905FD0;
  }
  v7 = sub_279AB0(v6, v2, *(unsigned int *)(a1 + 784), *(unsigned int *)(a1 + 788));
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 344) + 24LL))(a1 + 344, v7);
  v8 = *(cocos2d::CCArray **)(*(_QWORD *)(a1 + 688) + 632LL);
  v76 = v8;
  v9 = 0;
  result = cocos2d::CCArray::count(v8);
  if ( result )
  {
    do
    {
      v11 = cocos2d::CCArray::objectAtIndex(v8, v9);
      v12 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 56LL))(v11);
      v79 = 0;
      v80 = 0;
      v81 = 15;
      LOBYTE(v79) = 0;
      v13 = "robot_%02d_%02d";
      if ( *(_DWORD *)(a1 + 784) != 5 )
        v13 = "spider_%02d_%02d";
      v14 = cocos2d::CCString::createWithFormat(v13, v2, v12);
      CString = (char *)cocos2d::CCString::getCString(v14);
      v16 = -1;
      do
        ++v16;
      while ( CString[v16] );
      sub_3F5A0(&v79, CString, v16);
      v17 = (const char *)&v79;
      if ( v81 > 0xF )
        v17 = (const char *)v79;
      v18 = cocos2d::CCString::createWithFormat("%s_001.png", v17);
      v19 = cocos2d::CCString::getCString(v18);
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v20 = -1;
      do
        ++v20;
      while ( v19[v20] );
      sub_3C230(&v91);
      v21 = (const char *)&v79;
      if ( v81 > 0xF )
        v21 = (const char *)v79;
      v22 = cocos2d::CCString::createWithFormat("%s_2_001.png", v21);
      v23 = cocos2d::CCString::getCString(v22);
      v88 = 0;
      v89 = 0;
      v90 = 0;
      v24 = -1;
      do
        ++v24;
      while ( v23[v24] );
      sub_3C230(&v88);
      v25 = (const char *)&v79;
      if ( v81 > 0xF )
        v25 = (const char *)v79;
      v26 = cocos2d::CCString::createWithFormat("%s_glow_001.png", v25);
      v27 = cocos2d::CCString::getCString(v26);
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v28 = -1;
      do
        ++v28;
      while ( v27[v28] );
      sub_3C230(&v85);
      v31 = (const char *)&v91;
      if ( v93 > 0xF )
        v31 = (const char *)v91;
      v32 = *(_QWORD *)v11;
      v33 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v30, v29);
      v34 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v33, v31);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSpriteFrame *))(v32 + 1008))(v11, v34);
      v35 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 760), v9);
      v38 = v35;
      if ( v35 )
      {
        v39 = (const char *)&v88;
        if ( v90 > 0xF )
          v39 = (const char *)v88;
        v40 = *(_QWORD *)v35;
        v41 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v37, v36);
        v42 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v41, v39);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSpriteFrame *))(v40 + 1008))(v38, v42);
        v43 = *(_QWORD *)v38;
        v44 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 320LL))(v11) + 4)
            * 0.5;
        v45 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 320LL))(v11);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v77, *v45 * 0.5, v44);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v43 + 184))(v38, v46);
      }
      v47 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 768) + 480LL))(*(_QWORD *)(a1 + 768));
      v48 = cocos2d::CCArray::objectAtIndex(v47, v9);
      v51 = v48;
      v52 = (const char *)&v85;
      if ( v87 > 0xF )
        v52 = (const char *)v85;
      v53 = *(_QWORD *)v48;
      v54 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v50, v49);
      v55 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v54, v52);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSpriteFrame *))(v53 + 1008))(v51, v55);
      if ( v11 == *(struct cocos2d::CCObject **)(a1 + 792) )
      {
        v56 = (const char *)&v79;
        if ( v81 > 0xF )
          v56 = (const char *)v79;
        v57 = cocos2d::CCString::createWithFormat("%s_extra_001.png", v56);
        v58 = cocos2d::CCString::getCString(v57);
        v82 = 0;
        v83 = 0;
        v84 = 0;
        v59 = -1;
        do
          ++v59;
        while ( v58[v59] );
        sub_3C230(&v82);
        v62 = (const char *)&v82;
        if ( v84 > 0xF )
          v62 = (const char *)v82;
        v63 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v61, v60);
        v64 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v63, v62);
        if ( v64 )
        {
          v65 = *(_QWORD *)(a1 + 776);
          if ( v65 )
          {
            (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(*(_QWORD *)v65 + 1008LL))(v65, v64);
          }
          else
          {
            v66 = cocos2d::CCSprite::createWithSpriteFrame(v64);
            *(_QWORD *)(a1 + 776) = v66;
            (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 792) + 456LL))(
              *(_QWORD *)(a1 + 792),
              v66,
              2);
          }
          v67 = **(_QWORD **)(a1 + 776);
          v68 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 320LL))(v11) + 4)
              * 0.5;
          v69 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 320LL))(v11);
          v70 = *(_QWORD *)(a1 + 776);
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v78, *v69 * 0.5, v68);
          (*(void (__fastcall **)(__int64, __int64))(v67 + 184))(v70, v71);
          v72 = 1;
        }
        else
        {
          v72 = 0;
        }
        *(_BYTE *)(a1 + 752) = v72;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 776) + 336LL))(*(_QWORD *)(a1 + 776));
        if ( v84 > 0xF )
        {
          v73 = (void *)v82;
          if ( v84 + 1 >= 0x1000 )
          {
            v73 = *(void **)(v82 - 8);
            if ( (unsigned __int64)(v82 - (_QWORD)v73 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v73);
        }
      }
      sub_3C310(&v85);
      sub_3C310(&v88);
      sub_3C310(&v91);
      if ( v81 > 0xF )
      {
        v74 = (void *)v79;
        if ( v81 + 1 >= 0x1000 )
        {
          v74 = *(void **)(v79 - 8);
          if ( (unsigned __int64)(v79 - (_QWORD)v74 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v74);
      }
      ++v9;
      v8 = v76;
      result = cocos2d::CCArray::count(v76);
    }
    while ( v9 < result );
  }
  return result;
}

// Address: 0x4e2930
// Method: PlayerObject::update
// Hidden C++ exception states: #wind=8
void __fastcall PlayerObject_update(__int64 a1, float a2)
{
  double v3; // xmm13_8
  float v4; // xmm7_4
  double v5; // xmm0_8
  double v6; // xmm6_8
  double v7; // xmm1_8
  __int16 v8; // ax
  __int16 v9; // cx
  float v10; // xmm2_4
  __int16 v11; // ax
  int v12; // ecx
  int v13; // r8d
  __int16 v14; // ax
  __int16 v15; // cx
  float v16; // xmm2_4
  __int16 v17; // ax
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rcx
  double v22; // xmm0_8
  double v23; // xmm0_8
  const struct cocos2d::CCPoint *v24; // rax
  const struct cocos2d::CCPoint *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // edi
  float v29; // xmm1_4
  char v30; // al
  _BYTE *v31; // rbx
  double v32; // xmm6_8
  char v33; // dl
  float v34; // xmm2_4
  float v35; // xmm2_4
  int v36; // eax
  float v37; // xmm1_4
  int v38; // ecx
  int v39; // eax
  char v40; // al
  double v41; // xmm8_8
  double v42; // xmm6_8
  ch... [26425 chars total]
