#include <Geode/binding/CreatorLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0xea270
// Method: CreatorLayer::checkQuestsStatus
// Hidden C++ exception states: #wind=1
__int64 __fastcall CreatorLayer_checkQuestsStatus(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // edi
  cocos2d::CCObject *v7; // rbx
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 832); /*0xea282*/
  if ( v2 ) /*0xea28c*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 512LL))(v2); /*0xea291*/
    *(_QWORD *)(a1 + 832) = 0; /*0xea297*/
  }
  v3 = GJAccountManager_sharedState(v2); /*0xea2a2*/
  v4 = *(_QWORD *)(a1 + 800); /*0xea2aa*/
  result = (unsigned int)(*(_DWORD *)(v3 + 360) - *(_DWORD *)(v3 + 364)); /*0xea2b7*/
  if ( *(_DWORD *)(v4 + 240) == (_DWORD)result )
  {
    v6 = *(_DWORD *)(v4 + 248); /*0xea2c9*/
    v13 = operator new(0x2C8u); /*0xea2d9*/
    v7 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v13); /*0xea2e6*/
    if ( v7 )
    {
      v8 = "Adds: Anyone";
      if ( v6 == 1 )
        v8 = "Adds: Owner Only";
      if ( (unsigned __int8)ButtonSprite_init( /*0xea348*/
                              (_DWORD)v7,
                              (_DWORD)v8,
                              90,
                              0,
                              1053609165,
                              1,
                              (__int64)&qword_6FFF68,
                              (__int64)"GJ_button_04.png",
                              1104150528) )
      {
        cocos2d::CCObject::autorelease(v7); /*0xea354*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0xea364*/
        v7 = 0; /*0xea367*/
      }
    }
    v9 = CCMenuItemSpriteExtra_create(v7, 0, a1, sub_EA410); /*0xea378*/
    *(_QWORD *)(a1 + 832) = v9; /*0xea37d*/
    *(_DWORD *)(v9 + 372) = 1066192077; /*0xea384*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))( /*0xea39f*/
      *(_QWORD *)(a1 + 552),
      *(_QWORD *)(a1 + 832));
    v10 = **(_QWORD **)(a1 + 832); /*0xea3ac*/
    v11 = *(_QWORD *)(a1 + 832); /*0xea3af*/
    cocos2d::CCPoint::CCPoint( /*0xea3eb*/
      (cocos2d::CCPoint *)&v13,
      *(float *)(a1 + 664) + 83.0,
      (float)(*(float *)(a1 + 668) - (float)(*(float *)(a1 + 676) * 0.5)) + 24.0);
    return (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 184))(v11, v12); /*0xea3f7*/
  }
  return result; /*0xea3fd*/
}

// [2/14] Address: 0x132ed0
// Method: CreatorLayer::~CreatorLayer
// Hidden C++ exception states: #wind=1
char *__fastcall CreatorLayer__dtor_CreatorLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax

  *(_QWORD *)Block = &CreatorLayer::`vftable'; /*0x132eeb*/
  *((_QWORD *)Block + 40) = &CreatorLayer::`vftable'; /*0x132ef5*/
  *((_QWORD *)Block + 41) = &CreatorLayer::`vftable'; /*0x132f03*/
  *((_QWORD *)Block + 42) = &CreatorLayer::`vftable'; /*0x132f11*/
  *((_QWORD *)Block + 43) = &CreatorLayer::`vftable'; /*0x132f1f*/
  *((_QWORD *)Block + 44) = &CreatorLayer::`vftable'; /*0x132f2d*/
  *((_QWORD *)Block + 51) = &CreatorLayer::`vftable'; /*0x132f3b*/
  *((_QWORD *)Block + 52) = &CreatorLayer::`vftable'; /*0x132f49*/
  v4 = Block + 424; /*0x132f50*/
  *((_QWORD *)Block + 53) = &CreatorLayer::`vftable'; /*0x132f5e*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x132f61*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x132f6b*/
  {
    v6 = operator new(0x690u); /*0x132f72*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x132f7f*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x132f90*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x132f92*/
  }
  if ( *(char **)(v5 + 1568) == v4 ) /*0x132fa0*/
    *(_QWORD *)(v5 + 1568) = 0; /*0x132fa2*/
  cocos2d::CCLayer::~CCLayer((cocos2d::CCLayer *)Block); /*0x132fb0*/
  if ( (a2 & 1) != 0 ) /*0x132fbb*/
    j_j_free(Block); /*0x132fc5*/
  return Block; /*0x132fcd*/
}

// [5/14] Address: 0x135020
// Method: CreatorLayer::onLeaderboards
// Hidden C++ exception states: #wind=3
bool __fastcall CreatorLayer_onLeaderboards(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  struct cocos2d::CCScene *v8; // r14
  __int64 v9; // rcx
  cocos2d::CCLayer *v10; // rsi
  struct cocos2d::CCScene *v11; // rbx
  __int64 v12; // rcx
  cocos2d::CCDirector *v13; // rax
  void *v15; // [rsp+50h] [rbp+18h]
  void *v16; // [rsp+50h] [rbp+18h]

  v4 = *(_QWORD *)&qword_905FB0; /*0x135032*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x13503c*/
  {
    v15 = operator new(0x690u); /*0x135048*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v15); /*0x135056*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x135063*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x135066*/
  }
  v5 = v4; /*0x13506d*/
  if ( !v4 ) /*0x135073*/
  {
    v16 = operator new(0x690u); /*0x13507f*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v16); /*0x13508d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x13509e*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x1350a0*/
  }
  v6 = *(_DWORD *)(v5 + 1340); /*0x1350a7*/
  v7 = *(_DWORD *)(v4 + 1336); /*0x1350ad*/
  v8 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(a1, a2, a3, a4); /*0x1350b9*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v9) + 232) = v8; /*0x1350c2*/
  v10 = (cocos2d::CCLayer *)operator new(0x200u); /*0x1350d3*/
  cocos2d::CCLayer::CCLayer(v10); /*0x1350de*/
  *(_QWORD *)v10 = &LeaderboardsLayer::`vftable'; /*0x1350eb*/
  *((_QWORD *)v10 + 40) = &LeaderboardsLayer::`vftable'; /*0x1350f5*/
  *((_QWORD *)v10 + 41) = &LeaderboardsLayer::`vftable'; /*0x135103*/
  *((_QWORD *)v10 + 42) = &LeaderboardsLayer::`vftable'; /*0x135111*/
  *((_QWORD *)v10 + 43) = &LeaderboardsLayer::`vftable'; /*0x13511f*/
  *((_QWORD *)v10 + 44) = &LeaderboardsLayer::`vftable'; /*0x13512d*/
  *((_QWORD *)v10 + 51) = &LeaderboardsLayer::`vftable'; /*0x13513b*/
  *((_QWORD *)v10 + 52) = &LeaderboardsLayer::`vftable'; /*0x135149*/
  *((_QWORD *)v10 + 53) = 0; /*0x135152*/
  *((_QWORD *)v10 + 54) = 0; /*0x135159*/
  *((_QWORD *)v10 + 55) = 0; /*0x135160*/
  *((_QWORD *)v10 + 56) = 0; /*0x135167*/
  *((_QWORD *)v10 + 57) = 0; /*0x13516e*/
  *((_QWORD *)v10 + 58) = 0; /*0x135175*/
  *((_QWORD *)v10 + 59) = 0; /*0x13517c*/
  *((_QWORD *)v10 + 60) = 0; /*0x135183*/
  *((_QWORD *)v10 + 61) = 0; /*0x13518a*/
  *((_QWORD *)v10 + 63) = 0; /*0x135191*/
  if ( (unsigned __int8)LeaderboardsLayer_init(v10, v7, v6) ) /*0x1351a0*/
  {
    cocos2d::CCObject::autorelease(v10); /*0x1351ac*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x1351bc*/
    v10 = 0; /*0x1351bf*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCScene *, cocos2d::CCLayer *))(*(_QWORD *)v8 + 464LL))(v8, v10); /*0x1351cb*/
  v11 = cocos2d::CCTransitionFade::create(0.5, v8); /*0x1351e2*/
  v13 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v12); /*0x1351e5*/
  return cocos2d::CCDirector::pushScene(v13, v11); /*0x1351f1*/
}

// [6/14] Address: 0x135300
// Method: CreatorLayer::onTopLists
// Hidden C++ exception states: #wind=4
__int64 CreatorLayer_onTopLists()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct cocos2d::CCScene *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct cocos2d::CCScene *v8; // rbx
  __int64 v9; // rcx
  cocos2d::CCDirector *v10; // rax
  __int64 result; // rax
  void *v12; // [rsp+20h] [rbp-18h]

  v0 = GJSearchObject_create(6); /*0x135314*/
  *(_DWORD *)(v0 + 464) = 1; /*0x135317*/
  v5 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(v2, v1, v3, v4); /*0x135327*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v6) + 232) = v5; /*0x135330*/
  v7 = sub_3DE4D0(v0); /*0x13533a*/
  (*(void (__fastcall **)(struct cocos2d::CCScene *, __int64))(*(_QWORD *)v5 + 464LL))(v5, v7); /*0x13534f*/
  v8 = cocos2d::CCTransitionFade::create(0.5, v5); /*0x135363*/
  v10 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v9); /*0x135366*/
  cocos2d::CCDirector::pushScene(v10, v8); /*0x135372*/
  result = qword_905FD0; /*0x135378*/
  if ( !qword_905FD0 ) /*0x135382*/
  {
    v12 = operator new(0x6E8u); /*0x13538e*/
    qword_905FD0 = sub_2723A0(v12); /*0x13539c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1353ad*/
    result = qword_905FD0; /*0x1353af*/
  }
  *(_DWORD *)(result + 740) = 1; /*0x1353b6*/
  return result; /*0x1353c0*/
}

// [7/14] Address: 0x1353d0
// Method: CreatorLayer::onOnlineLevels
// Hidden C++ exception states: #wind=1
bool CreatorLayer_onOnlineLevels()
{
  __int64 v0; // rcx
  struct cocos2d::CCScene *v1; // rax
  struct cocos2d::CCScene *v2; // rbx
  __int64 v3; // rcx
  cocos2d::CCDirector *v4; // rax
  void *v6; // [rsp+40h] [rbp+18h]

  v0 = qword_905FD0; /*0x1353d6*/
  if ( !qword_905FD0 ) /*0x1353e0*/
  {
    v6 = operator new(0x6E8u); /*0x1353ec*/
    qword_905FD0 = sub_2723A0(v6); /*0x1353fa*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x13540b*/
    v0 = qword_905FD0; /*0x13540d*/
  }
  v1 = (struct cocos2d::CCScene *)LevelSearchLayer_scene(*(unsigned int *)(v0 + 1304)); /*0x13541a*/
  v2 = cocos2d::CCTransitionFade::create(0.5, v1); /*0x135430*/
  v4 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v3); /*0x135433*/
  return cocos2d::CCDirector::pushScene(v4, v2); /*0x13543f*/
}

// [8/14] Address: 0x135620
// Method: CreatorLayer::onMultiplayer
// Hidden C++ exception states: #wind=3
void __fastcall CreatorLayer_onMultiplayer(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _BYTE *v4; // rbx
  __int64 v5; // r8
  int v6; // r15d
  __int64 v7; // rdi
  char *v8; // rbx
  void **v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 DialogLayer; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  void *v18; // rcx
  __int16 v19; // [rsp+30h] [rbp-79h] BYREF
  char v20; // [rsp+32h] [rbp-77h]
  __int128 *v21; // [rsp+40h] [rbp-69h] BYREF
  __int128 v22; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-51h]
  __int64 v24; // [rsp+60h] [rbp-49h]
  __int128 v25; // [rsp+68h] [rbp-41h] BYREF
  __int64 v26; // [rsp+78h] [rbp-31h]
  __int64 v27; // [rsp+80h] [rbp-29h]
  _BYTE v28[8]; // [rsp+88h] [rbp-21h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-9h]
  __int64 v31; // [rsp+A8h] [rbp-1h]
  void *Block[2]; // [rsp+B0h] [rbp+7h] BYREF
  unsigned __int64 v33; // [rsp+C0h] [rbp+17h]
  unsigned __int64 v34; // [rsp+C8h] [rbp+1Fh]

  *(_OWORD *)Block = 0; /*0x135658*/
  v4 = (_BYTE *)sub_3C460(64); /*0x135666*/
  Block[0] = v4; /*0x135669*/
  v33 = 60; /*0x13566d*/
  v34 = 63; /*0x135675*/
  strcpy(v4, "Versus mode has been <co>delayed</c>,\nbut it's in the works!"); /*0x135684*/
  v6 = 2; /*0x1356b7*/
  v7 = 13; /*0x1356c4*/
  v30 = 13; /*0x1356c9*/
  v31 = 15; /*0x1356d3*/
  strcpy((char *)Src, "The Keymaster"); /*0x1356df*/
  HIWORD(Src[1]) = 0; /*0x1356ea*/
  switch ( a1[121] ) /*0x135721*/
  {
    case 1: /*0x135721*/
      v33 = 52; /*0x135723*/
      memmove(v4, "Yea<d010>.<d010>.<d010>. It's still <cl>delayed</c>.", 0x34u); /*0x13573b*/
      v4[52] = 0; /*0x135740*/
      break; /*0x135744*/
    case 2: /*0x135721*/
      v33 = 23; /*0x135749*/
      memmove(v4, "I blame <cg>RobTop</c>.", 0x17u); /*0x135761*/
      v4[23] = 0; /*0x135766*/
      goto LABEL_4; /*0x135766*/
    case 3: /*0x135721*/
      v33 = 53; /*0x1357a1*/
      memmove(v4, "Who else could we <cr>blame</c>?\nWe're not even real.", 0x35u); /*0x1357b9*/
      v4[53] = 0; /*0x1357be*/
      break; /*0x1357c2*/
    case 4: /*0x135721*/
      v33 = 36; /*0x1357c7*/
      memmove(v4, "Speak for yourself <co>I'm real!</c>", 0x24u); /*0x1357df*/
      v4[36] = 0; /*0x1357e4*/
      v6 = 14; /*0x1357e8*/
      goto LABEL_5; /*0x1357ee*/
    case 5: /*0x135721*/
      v33 = 52; /*0x1357f0*/
      memmove(v4, "<cl>Yea, a real pain in the<d010>.<d010>.<d010>.</c>", 0x34u); /*0x135808*/
      v4[52] = 0; /*0x13580d*/
      break; /*0x135811*/
    case 6: /*0x135721*/
      v33 = 62; /*0x135816*/
      memmove(v4, "You're just <cr>mad</c> because you don't have a <cy>shop</c>.", 0x3Eu); /*0x13582e*/
      v4[62] = 0; /*0x135833*/
      v6 = 26; /*0x135837*/
      goto LABEL_5; /*0x13583d*/
    case 7: /*0x135721*/
      v33 = 24; /*0x135842*/
      memmove(v4, "You have a <cy>shop</c>?", 0x18u); /*0x13585a*/
      v4[24] = 0; /*0x13585f*/
      v6 = 4; /*0x135863*/
      break; /*0x135869*/
    case 8: /*0x135721*/
      v8 = (char *)sub_3C460(95); /*0x135878*/
      v33 = 73; /*0x13587b*/
      v34 = 94; /*0x135883*/
      strcpy(v8, "<co>I HAVE SAID TOO MUCH!\nQUICKLY TO THE <i050><s260>CHOPPER!</s></i></c>"); /*0x135892*/
      j_j_free(Block[0]); /*0x1358da*/
      Block[0] = v8; /*0x1358df*/
LABEL_4:
      v6 = 10; /*0x13576a*/
      goto LABEL_5; /*0x13576a*/
    case 9: /*0x135721*/
      v33 = 42; /*0x1358e8*/
      memmove(v4, "You don't have a chop<d010>.<d010>.<d010>.", 0x2Au); /*0x135900*/
      v4[42] = 0; /*0x135905*/
      break; /*0x135909*/
    case 0xA: /*0x135721*/
      v33 = 15; /*0x13590b*/
      memmove(v4, ".<d010>.<d010>.", 0xFu); /*0x13591c*/
      v4[15] = 0; /*0x135921*/
      v6 = 52; /*0x135925*/
LABEL_5:
      v7 = 7; /*0x135770*/
      v30 = 7; /*0x135775*/
      Src[0] = (void *)0x68637461726353LL; /*0x135780*/
      break; /*0x13579c*/
    case 0xB: /*0x135721*/
      v33 = 29; /*0x135930*/
      memmove(v4, ".<d010>.<d010>.<d010>.<d010>.", 0x1Du); /*0x135948*/
      v4[29] = 0; /*0x13594d*/
      v6 = 17; /*0x135951*/
      break; /*0x135951*/
    default:
      break;
  }
  v21 = &v22; /*0x13595d*/
  v19 = -1; /*0x13596c*/
  v20 = -1; /*0x135977*/
  v22 = 0; /*0x13597d*/
  v23 = 0; /*0x135984*/
  v24 = 0; /*0x135988*/
  v9 = Block; /*0x13598c*/
  if ( v34 > 0xF ) /*0x135995*/
    v9 = (void **)Block[0]; /*0x135995*/
  if ( v33 > 0x7FFFFFFFFFFFFFFFLL ) /*0x1359a8*/
    sub_8D90(v3, v2, v5); /*0x135bd5*/
  if ( v33 > 0xF ) /*0x1359bb*/
  {
    v10 = v33 | 0xF; /*0x1359d3*/
    if ( (v33 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x1359da*/
    {
      if ( v10 < 0x16 ) /*0x1359e4*/
        v10 = 22; /*0x1359e4*/
    }
    else
    {
      v10 = 0x7FFFFFFFFFFFFFFFLL; /*0x1359dc*/
    }
    *(_QWORD *)&v22 = sub_3C460(v10 + 1); /*0x1359f1*/
    v23 = v33; /*0x1359f9*/
    v24 = v10; /*0x1359fd*/
    memcpy((void *)v22, v9, v33 + 1); /*0x135a0a*/
  }
  else
  {
    v23 = v33; /*0x1359bd*/
    v24 = 15; /*0x1359c1*/
    v22 = *(_OWORD *)v9; /*0x1359c9*/
  }
  v26 = v7; /*0x135a45*/
  v27 = 15; /*0x135a49*/
  v25 = *(_OWORD *)Src; /*0x135a50*/
  v11 = sub_1723F0((unsigned int)&v25, (unsigned int)&v22, v6, 15, 0, (__int64)&v19); /*0x135ab3*/
  DialogLayer = DialogLayer_createDialogLayer(v11, 0, 2); /*0x135ac8*/
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x135ae2*/
  v14 = cocos2d::CCDirector::sharedDirector(v13); /*0x135ae5*/
  cocos2d::CCDirector::getWinSize(v14, &v21); /*0x135af2*/
  v15 = *(__int64 **)(DialogLayer + 560); /*0x135af8*/
  v16 = *v15; /*0x135aff*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, *(float *)&v21 * 0.5, *((float *)&v21 + 1) * 0.5); /*0x135b20*/
  (*(void (__fastcall **)(__int64 *, __int64))(v16 + 184))(v15, v17); /*0x135b2c*/
  sub_173300(DialogLayer); /*0x135b35*/
  if ( (int)++a1[121] > 11 ) /*0x135b4b*/
    a1[121] = 0; /*0x135b4d*/
  if ( v34 > 0xF ) /*0x135b5d*/
  {
    v18 = Block[0]; /*0x135b62*/
    if ( v34 + 1 >= 0x1000 ) /*0x135b70*/
    {
      v18 = (void *)*((_QWORD *)Block[0] - 1); /*0x135b76*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F ) /*0x135b85*/
        invoke_watson(0, 0, 0, 0, 0); /*0x135b96*/
    }
    j_j_free(v18); /*0x135b9d*/
  }
}

// [9/14] Address: 0x135c10
// Method: CreatorLayer::onAdventureMap
// Hidden C++ exception states: #wind=2
__int64 CreatorLayer_onAdventureMap()
{
  char *v0; // rbx
  __int64 v1; // rax
  __int64 (__fastcall *v2)(char *); // rdx
  char v4[14]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v5; // [rsp+2Eh] [rbp-3Ah]
  __int64 v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  char v8[40]; // [rsp+40h] [rbp-28h] BYREF

  v6 = 12; /*0x135c20*/
  v7 = 15; /*0x135c28*/
  strcpy(v4, "mapPromo.png"); /*0x135c38*/
  v4[13] = 0; /*0x135c44*/
  v5 = 0; /*0x135c44*/
  v0 = (char *)operator new(0x2B8u); /*0x135c5f*/
  FLAlertLayer_FLAlertLayer(v0); /*0x135c6d*/
  *(_QWORD *)v0 = &GJPromoPopup::`vftable'; /*0x135c79*/
  *((_QWORD *)v0 + 40) = &GJPromoPopup::`vftable'; /*0x135c83*/
  *((_QWORD *)v0 + 41) = &GJPromoPopup::`vftable'; /*0x135c91*/
  *((_QWORD *)v0 + 42) = &GJPromoPopup::`vftable'; /*0x135c9f*/
  *((_QWORD *)v0 + 43) = &GJPromoPopup::`vftable'; /*0x135cad*/
  *((_QWORD *)v0 + 44) = &GJPromoPopup::`vftable'; /*0x135cbb*/
  *((_QWORD *)v0 + 51) = &GJPromoPopup::`vftable'; /*0x135cc9*/
  *((_QWORD *)v0 + 54) = &GJPromoPopup::`vftable'; /*0x135cd7*/
  *((_QWORD *)v0 + 68) = &GJPromoPopup::`vftable'; /*0x135ce5*/
  *(_OWORD *)(v0 + 664) = 0; /*0x135cef*/
  *((_QWORD *)v0 + 85) = 0; /*0x135cf6*/
  *((_QWORD *)v0 + 86) = 15; /*0x135d01*/
  v0[664] = 0; /*0x135d0c*/
  v1 = sub_3E4F0(v8, v4); /*0x135d1d*/
  if ( (unsigned __int8)sub_3A7130(v0, v1) ) /*0x135d28*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x135d34*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x135d44*/
    v0 = 0; /*0x135d47*/
  }
  sub_3C310(v4); /*0x135d4e*/
  v2 = *(__int64 (__fastcall **)(char *))(*(_QWORD *)v0 + 1064LL); /*0x135d56*/
  if ( (char *)v2 == (char *)TopArtistsLayer_show ) /*0x135d6a*/
    return TopArtistsLayer_show(v0); /*0x135d6c*/
  else
    return v2(v0); /*0x135d77*/
}

// [10/14] Address: 0x135f70
// Method: CreatorLayer::onSecretVault
// Hidden C++ exception states: #wind=3
void __fastcall CreatorLayer_onSecretVault(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // r9d
  struct cocos2d::CCScene *v5; // rax
  struct cocos2d::CCScene *v6; // rbx
  __int64 v7; // rcx
  cocos2d::CCDirector *v8; // rax
  unsigned __int64 v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  char *v16; // rax
  char *v17; // rax
  char *v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  char *v22; // rax
  void **v23; // rbx
  __int64 v24; // rax
  __int64 DialogLayer; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  void *v31; // rcx
  __int16 v32; // [rsp+30h] [rbp-59h] BYREF
  char v33; // [rsp+32h] [rbp-57h]
  __int128 *v34; // [rsp+40h] [rbp-49h] BYREF
  __int128 v35; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-31h]
  __int64 v37; // [rsp+60h] [rbp-29h]
  _WORD v38[8]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v39; // [rsp+78h] [rbp-11h]
  __int64 v40; // [rsp+80h] [rbp-9h]
  _BYTE v41[8]; // [rsp+88h] [rbp-1h] BYREF
  void *Src[2]; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int64 v43; // [rsp+A0h] [rbp+17h]
  __int64 v44; // [rsp+A8h] [rbp+1Fh]

  v2 = qword_905FE0; /*0x135fa5*/
  if ( !qword_905FE0 ) /*0x135faf*/
  {
    v34 = (__int128 *)operator new(0x3E8u); /*0x135fbb*/
    qword_905FE0 = sub_2D2B40(v34); /*0x135fc8*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x135fd9*/
    v2 = qword_905FE0; /*0x135fdb*/
  }
  if ( (int)GameStatsManager_getStat(v2, "13") < 50 ) /*0x135ff1*/
  {
    *(_OWORD *)Src = 0; /*0x136026*/
    v43 = 3; /*0x13602a*/
    v9 = 15; /*0x136032*/
    v44 = 15; /*0x136038*/
    LOWORD(Src[0]) = *(_WORD *)"zzz"; /*0x136042*/
    WORD1(Src[0]) = (unsigned __int8)aZzz[2]; /*0x13604d*/
    v10 = a1[120]; /*0x136054*/
    if ( v10 >= 0 ) /*0x13605e*/
    {
      v12 = v10 + 1; /*0x136089*/
    }
    else
    {
      v11 = rand(); /*0x136060*/
      v12 = (int)roundf((float)((float)v11 / 32767.0) * 10.0); /*0x136083*/
    }
    v13 = a1 + 120; /*0x13608b*/
    v14 = (unsigned int)v12; /*0x136093*/
    a1[120] = v12; /*0x136095*/
    v15 = 0x7FFFFFFFFFFFFFFFLL; /*0x13609a*/
    if ( v12 <= 10 ) /*0x1360a7*/
    {
      if ( (unsigned int)v12 <= 0xA ) /*0x1360c7*/
      {
        switch ( v12 ) /*0x1360e0*/
        {
          case 0: /*0x1360e0*/
            goto LABEL_12;
          case 1: /*0x1360e0*/
            v9 = 31; /*0x136142*/
            v17 = (char *)sub_3C460(32); /*0x136153*/
            v43 = 19; /*0x136158*/
            v44 = 31; /*0x136160*/
            strcpy(v17, "I can't let you in."); /*0x13616b*/
            v14 = 46; /*0x136179*/
            Src[0] = v17; /*0x136187*/
            break; /*0x13618b*/
          case 2: /*0x1360e0*/
            v9 = 63; /*0x1361aa*/
            v18 = (char *)sub_3C460(64); /*0x1361c0*/
            v43 = 49; /*0x1361c3*/
            v44 = 63; /*0x1361cb*/
            strcpy(v18, "Player used knock.<d040>\nIt's not very effective."); /*0x1361d6*/
            goto LABEL_24; /*0x1361fd*/
          case 3: /*0x1360e0*/
            v9 = 47; /*0x13621c*/
            v18 = (char *)sub_3C460(48); /*0x136232*/
            v43 = 38; /*0x136235*/
            v44 = 47; /*0x13623d*/
            strcpy(v18, "Don't you have something better to do?"); /*0x136248*/
            v14 = 1679847284; /*0x136256*/
            goto LABEL_24; /*0x13626e*/
          case 4: /*0x1360e0*/
            v9 = 31; /*0x13628d*/
            v19 = (char *)sub_3C460(32); /*0x13629e*/
            v43 = 21; /*0x1362a3*/
            v44 = 31; /*0x1362ab*/
            strcpy(v19, "That is a bad idea..."); /*0x1362b6*/
            v14 = 46; /*0x1362c2*/
            Src[0] = v19; /*0x1362d0*/
            break; /*0x1362d4*/
          case 5: /*0x1360e0*/
            v43 = 15; /*0x1362dd*/
            memmove(Src, ".<d030>.<d030>.", 0xFu); /*0x1362f5*/
            HIBYTE(Src[1]) = 0; /*0x1362fa*/
            v9 = v44; /*0x1362fe*/
            break; /*0x136302*/
          case 6: /*0x1360e0*/
            v20 = 31; /*0x136316*/
            v21 = 31; /*0x13632a*/
            v18 = (char *)sub_3C460(32); /*0x13633d*/
            strcpy(v18, "I guess you don't like rules..."); /*0x136347*/
            v14 = 1936026741; /*0x136357*/
            goto LABEL_23; /*0x136379*/
          case 7: /*0x1360e0*/
            v9 = 47; /*0x136398*/
            v22 = (char *)sub_3C460(48); /*0x1363a9*/
            v43 = 36; /*0x1363ae*/
            v44 = 47; /*0x1363b6*/
            strcpy(v22, "RubRub told me not to let anyone in."); /*0x1363c1*/
            v14 = 778987808; /*0x1363cf*/
            Src[0] = v22; /*0x1363dc*/
            break; /*0x1363e0*/
          case 8: /*0x1360e0*/
            v9 = 47; /*0x1363ff*/
            v18 = (char *)sub_3C460(48); /*0x136415*/
            v43 = 41; /*0x136418*/
            v44 = 47; /*0x136420*/
            strcpy(v18, "This is not the door you are looking for."); /*0x13642b*/
            goto LABEL_24; /*0x136454*/
          case 9: /*0x1360e0*/
            v9 = 47; /*0x136473*/
            v18 = (char *)sub_3C460(48); /*0x136489*/
            v43 = 43; /*0x13648c*/
            v44 = 47; /*0x136494*/
            strcpy(v18, "I don't understand why you keep clicking..."); /*0x13649f*/
            goto LABEL_24; /*0x1364d3*/
          case 10: /*0x1360e0*/
            v20 = 47; /*0x1364e7*/
            v21 = 47; /*0x1364fb*/
            v18 = (char *)sub_3C460(48); /*0x13650e*/
            strcpy(v18, "Trust me,<d030> you don't want to come in here."); /*0x136518*/
LABEL_23:
            v43 = v20; /*0x136555*/
            v44 = v21; /*0x136559*/
            v9 = v21; /*0x13655d*/
LABEL_24:
            Src[0] = v18; /*0x136560*/
            break; /*0x136560*/
        }
      }
    }
    else
    {
      a1[120] = 0; /*0x1360a9*/
LABEL_12:
      v9 = 31; /*0x1360e2*/
      v16 = (char *)sub_3C460(32); /*0x1360f7*/
      v43 = 20; /*0x1360fc*/
      v44 = 31; /*0x136104*/
      strcpy(v16, "You are not ready..."); /*0x13610f*/
      v14 = 774778489; /*0x136112*/
      Src[0] = v16; /*0x13611f*/
    }
    v34 = &v35; /*0x136564*/
    v32 = -1; /*0x136573*/
    v33 = -1; /*0x13657e*/
    v35 = 0; /*0x136584*/
    v36 = 0; /*0x136588*/
    v37 = 0; /*0x13658c*/
    v23 = Src; /*0x136590*/
    if ( v9 > 0xF ) /*0x136598*/
      v23 = (void **)Src[0]; /*0x136598*/
    if ( v43 > 0x7FFFFFFFFFFFFFFFLL ) /*0x1365a1*/
      sub_8D90(v14, v13, v3); /*0x136769*/
    if ( v43 > 0xF ) /*0x1365af*/
    {
      if ( (v43 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x1365d1*/
      {
        v15 = v43 | 0xF; /*0x1365d3*/
        if ( (v43 | 0xF) < 0x16 ) /*0x1365de*/
          v15 = 22; /*0x1365de*/
      }
      *(_QWORD *)&v35 = sub_3C460(v15 + 1); /*0x1365eb*/
      v36 = v43; /*0x1365f3*/
      v37 = v15; /*0x1365f7*/
      memcpy((void *)v35, v23, v43 + 1); /*0x136604*/
    }
    else
    {
      v36 = v43; /*0x1365b1*/
      v37 = 15; /*0x1365b5*/
      v35 = *(_OWORD *)v23; /*0x1365c0*/
    }
    v38[7] = 0; /*0x13660a*/
    v39 = 13; /*0x13660f*/
    v40 = 15; /*0x136617*/
    strcpy((char *)v38, "The Keymaster"); /*0x136627*/
    v24 = sub_1723F0((unsigned int)v38, (unsigned int)&v35, 2, v4, 0, (__int64)&v32); /*0x136667*/
    DialogLayer = DialogLayer_createDialogLayer(v24, 0, 2); /*0x13667c*/
    (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x136696*/
    v27 = cocos2d::CCDirector::sharedDirector(v26); /*0x136699*/
    cocos2d::CCDirector::getWinSize(v27, &v34); /*0x1366a6*/
    v28 = **(_QWORD **)(DialogLayer + 560); /*0x1366b3*/
    v29 = *(_QWORD *)(DialogLayer + 560); /*0x1366b6*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v41, *(float *)&v34 * 0.5, *((float *)&v34 + 1) * 0.5); /*0x1366d7*/
    (*(void (__fastcall **)(__int64, __int64))(v28 + 184))(v29, v30); /*0x1366e3*/
    sub_173300(DialogLayer); /*0x1366ec*/
    if ( v9 > 0xF ) /*0x1366f6*/
    {
      v31 = Src[0]; /*0x1366fc*/
      if ( v9 + 1 >= 0x1000 ) /*0x13670a*/
      {
        v31 = (void *)*((_QWORD *)Src[0] - 1); /*0x136710*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v31 - 8) > 0x1F ) /*0x13671f*/
          invoke_watson(0, 0, 0, 0, 0); /*0x136730*/
      }
      j_j_free(v31); /*0x136737*/
    }
  }
  else
  {
    v5 = (struct cocos2d::CCScene *)SecretLayer2_scene(); /*0x135ff3*/
    v6 = cocos2d::CCTransitionFade::create(0.5, v5); /*0x136009*/
    v8 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v7); /*0x13600c*/
    cocos2d::CCDirector::replaceScene(v8, v6); /*0x136018*/
  }
}

// [11/14] Address: 0x1367a0
// Method: CreatorLayer::onTreasureRoom
// Hidden C++ exception states: #wind=5
void __fastcall CreatorLayer_onTreasureRoom(__int64 a1)
{
  __int64 v2; // rcx
  int Stat; // ebx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct cocos2d::CCScene *v7; // rax
  struct cocos2d::CCScene *v8; // rbx
  __int64 v9; // rcx
  cocos2d::CCDirector *v10; // rax
  cocos2d::CCArray *v11; // rbx
  int v12; // r9d
  struct cocos2d::CCObject *v13; // rax
  int v14; // r9d
  struct cocos2d::CCObject *v15; // rax
  int v16; // r9d
  struct cocos2d::CCObject *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  void *v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // rdx
  const char *v30; // r8
  cocos2d::CCString *v31; // rax
  char *CString; // rax
  size_t v33; // r8
  void **v34; // rsi
  unsigned __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 DialogLayer; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  void *v44; // rcx
  __int16 v45; // [rsp+30h] [rbp-49h] BYREF
  char v46; // [rsp+32h] [rbp-47h]
  __int128 *v47; // [rsp+40h] [rbp-39h] BYREF
  __int128 v48; // [rsp+48h] [rbp-31h] BYREF
  __int64 v49; // [rsp+58h] [rbp-21h]
  __int64 v50; // [rsp+60h] [rbp-19h]
  __int128 v51; // [rsp+68h] [rbp-11h] BYREF
  __int64 v52; // [rsp+78h] [rbp-1h]
  __int64 v53; // [rsp+80h] [rbp+7h]
  __int128 *v54; // [rsp+88h] [rbp+Fh] BYREF
  void *Src[2]; // [rsp+90h] [rbp+17h] BYREF
  unsigned __int64 v56; // [rsp+A0h] [rbp+27h]
  unsigned __int64 v57; // [rsp+A8h] [rbp+2Fh]

  v2 = qword_905FE0; /*0x1367d1*/
  if ( !qword_905FE0 ) /*0x1367db*/
  {
    v47 = (__int128 *)operator new(0x3E8u); /*0x1367e7*/
    qword_905FE0 = sub_2D2B40(v47); /*0x1367f4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x136805*/
    v2 = qword_905FE0; /*0x136807*/
  }
  Stat = GameStatsManager_getStat(v2, (const char *)&word_732410); /*0x13681a*/
  v5 = qword_905FD0; /*0x13681c*/
  if ( !qword_905FD0 ) /*0x136826*/
  {
    v47 = (__int128 *)operator new(0x6E8u); /*0x136832*/
    qword_905FD0 = sub_2723A0(v47); /*0x13683f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x136850*/
    v5 = qword_905FD0; /*0x136852*/
  }
  if ( (unsigned __int8)sub_27B350(v5, &word_708038, v4) ) /*0x136860*/
  {
    v7 = (struct cocos2d::CCScene *)SecretRewardsLayer_scene(0); /*0x13686b*/
    v8 = cocos2d::CCTransitionFade::create(0.5, v7); /*0x136881*/
    v10 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v9); /*0x136884*/
    cocos2d::CCDirector::replaceScene(v10, v8); /*0x136890*/
  }
  else if ( Stat < 5 ) /*0x13689e*/
  {
    *(_OWORD *)Src = 0; /*0x136c55*/
    v26 = (void *)sub_3C460(64); /*0x136c6e*/
    Src[0] = v26; /*0x136c71*/
    v56 = 63; /*0x136c75*/
    v57 = 63; /*0x136c7d*/
    strcpy((char *)v26, "Bring me <cy>5</c> <cg>keys</c>,<d020>\nand I will let you pass."); /*0x136c8c*/
    v29 = (unsigned int)(5 - Stat); /*0x136cd9*/
    if ( Stat > 0 ) /*0x136cdd*/
    {
      v30 = &byte_6E86E0; /*0x136ce6*/
      if ( (int)v29 > 1 ) /*0x136cf0*/
        v30 = (const char *)&unk_70802C; /*0x136cf0*/
      v31 = cocos2d::CCString::createWithFormat( /*0x136cfb*/
              "Collect <cy>%i</c> more <cg>key%s</c>,<d020>\nand I will let you pass.",
              v29,
              v30);
      CString = (char *)cocos2d::CCString::getCString(v31); /*0x136d04*/
      v33 = -1; /*0x136d0a*/
      do /*0x136d14*/
        ++v33; /*0x136d11*/
      while ( CString[v33] ); /*0x136d14*/
      sub_3F5A0(Src, CString, v33); /*0x136d22*/
    }
    v54 = &v48; /*0x136d2b*/
    v45 = -1; /*0x136d36*/
    v46 = -1; /*0x136d41*/
    v48 = 0; /*0x136d47*/
    v49 = 0; /*0x136d4b*/
    v50 = 0; /*0x136d4f*/
    v34 = Src; /*0x136d53*/
    if ( v57 > 0xF ) /*0x136d5c*/
      v34 = (void **)Src[0]; /*0x136d5c*/
    v35 = v56; /*0x136d61*/
    v36 = 0x7FFFFFFFFFFFFFFFLL; /*0x136d65*/
    if ( v56 > 0x7FFFFFFFFFFFFFFFLL ) /*0x136d72*/
      sub_8D90(v26, v29, v27); /*0x136f30*/
    if ( v56 > 0xF ) /*0x136d7c*/
    {
      if ( (v56 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x136d9d*/
      {
        v36 = v56 | 0xF; /*0x136d9f*/
        if ( (v56 | 0xF) < 0x16 ) /*0x136daa*/
          v36 = 22; /*0x136daa*/
      }
      *(_QWORD *)&v48 = sub_3C460(v36 + 1); /*0x136db7*/
      v49 = v35; /*0x136dbb*/
      v50 = v36; /*0x136dbf*/
      memcpy((void *)v48, v34, v35 + 1); /*0x136dcd*/
    }
    else
    {
      v49 = v56; /*0x136d7e*/
      v50 = 15; /*0x136d82*/
      v48 = *(_OWORD *)v34; /*0x136d8d*/
    }
    v52 = 13; /*0x136dd8*/
    v53 = 15; /*0x136de0*/
    strcpy((char *)&v51, "The Keymaster"); /*0x136df0*/
    HIWORD(v51) = 0; /*0x136dfb*/
    v37 = sub_1723F0((unsigned int)&v51, (unsigned int)&v48, 2, v28, 0, (__int64)&v45); /*0x136e30*/
    DialogLayer = DialogLayer_createDialogLayer(v37, 0, 2); /*0x136e45*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x136e5e*/
    v40 = cocos2d::CCDirector::sharedDirector(v39); /*0x136e61*/
    cocos2d::CCDirector::getWinSize(v40, &v47); /*0x136e6e*/
    v41 = **(_QWORD **)(DialogLayer + 560); /*0x136e7b*/
    v42 = *(_QWORD *)(DialogLayer + 560); /*0x136e7e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, *(float *)&v47 * 0.5, *((float *)&v47 + 1) * 0.5); /*0x136e9f*/
    (*(void (__fastcall **)(__int64, __int64))(v41 + 184))(v42, v43); /*0x136eab*/
    sub_173300(DialogLayer); /*0x136eb4*/
    if ( v57 > 0xF ) /*0x136ec2*/
    {
      v44 = Src[0]; /*0x136ec7*/
      if ( v57 + 1 >= 0x1000 ) /*0x136ed5*/
      {
        v44 = (void *)*((_QWORD *)Src[0] - 1); /*0x136edb*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v44 - 8) > 0x1F ) /*0x136eea*/
          invoke_watson(0, 0, 0, 0, 0); /*0x136efb*/
      }
      j_j_free(v44); /*0x136f02*/
    }
  }
  else
  {
    v11 = (cocos2d::CCArray *)cocos2d::CCArray::create(v6); /*0x1368aa*/
    v47 = &v51; /*0x1368b1*/
    v45 = -1; /*0x1368bc*/
    v46 = -1; /*0x1368c7*/
    v51 = 0; /*0x1368cd*/
    v52 = 0; /*0x1368d4*/
    v53 = 0; /*0x1368d8*/
    *(_QWORD *)&v51 = sub_3C460(48); /*0x1368e9*/
    v52 = 39; /*0x1368ed*/
    v53 = 47; /*0x1368f5*/
    strcpy((char *)v51, "Well, well, well.<d035>\nLook who it is."); /*0x136904*/
    v49 = 13; /*0x136939*/
    v50 = 15; /*0x136941*/
    strcpy((char *)&v48, "The Keymaster"); /*0x136951*/
    HIWORD(v48) = 0; /*0x13695c*/
    v13 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v48, (unsigned int)&v51, 2, v12, 0, (__int64)&v45); /*0x136991*/
    cocos2d::CCArray::addObject(v11, v13); /*0x13699c*/
    v47 = &v51; /*0x1369a6*/
    v45 = -1; /*0x1369b1*/
    v46 = -1; /*0x1369bc*/
    v51 = 0; /*0x1369c2*/
    v52 = 0; /*0x1369c6*/
    v53 = 0; /*0x1369ca*/
    *(_QWORD *)&v51 = sub_3C460(64); /*0x1369db*/
    v52 = 59; /*0x1369df*/
    v53 = 63; /*0x1369e7*/
    strcpy((char *)v51, "I see you have the <cg>keys</c>.<d040>\nBut what comes next?"); /*0x1369f6*/
    v49 = 13; /*0x136a3a*/
    v50 = 15; /*0x136a42*/
    strcpy((char *)&v48, "The Keymaster"); /*0x136a52*/
    HIWORD(v48) = 0; /*0x136a5d*/
    v15 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v48, (unsigned int)&v51, 2, v14, 0, (__int64)&v45); /*0x136a92*/
    cocos2d::CCArray::addObject(v11, v15); /*0x136a9d*/
    v47 = &v51; /*0x136aa7*/
    v45 = -1; /*0x136ab2*/
    v46 = -1; /*0x136abd*/
    v51 = 0; /*0x136ac3*/
    v52 = 0; /*0x136ac7*/
    v53 = 0; /*0x136acb*/
    *(_QWORD *)&v51 = sub_3C460(80); /*0x136adc*/
    v52 = 69; /*0x136ae0*/
    v53 = 79; /*0x136ae8*/
    strcpy((char *)v51, "The <co>door</c> is open.<d040>\nTime to find out<d010>.<d010>.<d010>."); /*0x136af7*/
    v49 = 13; /*0x136b37*/
    v50 = 15; /*0x136b3f*/
    strcpy((char *)&v48, "The Keymaster"); /*0x136b4f*/
    HIWORD(v48) = 0; /*0x136b5a*/
    v17 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v48, (unsigned int)&v51, 2, v16, 0, (__int64)&v45); /*0x136b8f*/
    cocos2d::CCArray::addObject(v11, v17); /*0x136b9a*/
    v18 = (_QWORD *)DialogLayer_createDialogLayer(0, v11, 2); /*0x136bab*/
    v19 = v18; /*0x136bb0*/
    v20 = a1 + 416; /*0x136bb3*/
    if ( !a1 ) /*0x136bbd*/
      v20 = 0; /*0x136bbd*/
    v18[78] = v20; /*0x136bc1*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v18 + 64LL))(v18, 0); /*0x136bd4*/
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v19, 100); /*0x136bed*/
    v22 = cocos2d::CCDirector::sharedDirector(v21); /*0x136bf0*/
    cocos2d::CCDirector::getWinSize(v22, &v47); /*0x136bfd*/
    v23 = *(_QWORD *)v19[70]; /*0x136c0a*/
    v24 = v19[70]; /*0x136c0d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, *(float *)&v47 * 0.5, *((float *)&v47 + 1) * 0.5); /*0x136c2e*/
    (*(void (__fastcall **)(__int64, __int64))(v23 + 184))(v24, v25); /*0x136c3a*/
    sub_1734F0(v19, 2); /*0x136c48*/
  }
}

// [12/14] Address: 0x137180
// Method: CreatorLayer::contentStatusFinished
__int64 __fastcall CreatorLayer_contentStatusFinished(__int64 a1)
{
  return sub_137000(a1 - 424);
}

// [13/14] Address: 0x1372b0
// Method: CreatorLayer::sceneWillResume
// Hidden C++ exception states: #wind=3
__int64 __fastcall CreatorLayer_sceneWillResume(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  void *v13; // [rsp+40h] [rbp+8h]
  void *v14; // [rsp+40h] [rbp+8h]

  v2 = qword_905FD0; /*0x1372c7*/
  if ( !qword_905FD0 ) /*0x1372d1*/
  {
    v13 = operator new(0x6E8u); /*0x1372dd*/
    qword_905FD0 = sub_2723A0(v13); /*0x1372eb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1372fc*/
    v2 = qword_905FD0; /*0x1372fe*/
  }
  v3 = *(_QWORD *)(v2 + 1104); /*0x137305*/
  if ( v3 ) /*0x13730f*/
  {
    v4 = *(_QWORD *)(v3 + 720); /*0x137315*/
    if ( v4 ) /*0x13731f*/
    {
      if ( !*(_BYTE *)(v4 + 369) ) /*0x137325*/
      {
        v5 = *(_QWORD *)(v4 + 328); /*0x137332*/
        if ( v5 ) /*0x13733c*/
        {
          v6 = *(_QWORD *)&qword_905FB0; /*0x137342*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0x13734c*/
          {
            v14 = operator new(0x690u); /*0x137358*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x137366*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x137377*/
            v6 = *(_QWORD *)&qword_905FB0; /*0x137379*/
          }
          if ( *(_DWORD *)(v5 + 992) - *(_DWORD *)(v5 + 996) <= 0 ) /*0x13738e*/
          {
            v8 = (unsigned int)(*(_DWORD *)(v5 + 328) - *(_DWORD *)(v5 + 332)); /*0x13739d*/
            if ( *(_BYTE *)(v5 + 721) ) /*0x1373a3*/
              v7 = sub_21D780(v6, v8); /*0x1373ac*/
            else
              v7 = sub_21D5C0(v6, v8); /*0x1373b3*/
          }
          else
          {
            v7 = sub_21D6A0(v6); /*0x137390*/
          }
          if ( v7 ) /*0x1373bb*/
            v5 = v7; /*0x1373bb*/
          v9 = *(_QWORD *)(v3 + 720); /*0x1373bf*/
          *(_QWORD *)(v3 + 720) = 0; /*0x1373c6*/
          DailyLevelPage_createDailyNode(v3, v5, 1, 0.0, 0); /*0x1373e2*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 528LL))(v9); /*0x1373ed*/
        }
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 32); /*0x1373f3*/
  v11 = sub_9D210(); /*0x1373f7*/
  sub_136F40(v10, v11); /*0x137402*/
  return sub_137000(a1 - 408); /*0x13740e*/
}

// [14/14] Address: 0x137430
// Method: CreatorLayer::keyBackClicked
char __fastcall CreatorLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rdi
  struct cocos2d::CCScene *v2; // rax
  struct cocos2d::CCScene *v3; // rbx
  __int64 v4; // rcx
  cocos2d::CCDirector *v5; // rax
  char result; // al

  v1 = a1 - 336; /*0x13743a*/
  v2 = (struct cocos2d::CCScene *)MenuLayer_scene(0); /*0x137443*/
  v3 = cocos2d::CCTransitionFade::create(0.5, v2); /*0x137459*/
  v5 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v4); /*0x13745c*/
  result = cocos2d::CCDirector::replaceScene(v5, v3); /*0x137468*/
  if ( result ) /*0x137470*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x13747a*/
  return result; /*0x137480*/
}

// Address: 0x132fe0
// Method: CreatorLayer::scene
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreatorLayer_scene(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  char *v6; // rdi

  v4 = (_QWORD *)cocos2d::CCScene::create(a1, a2, a3, a4);
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v5) + 232) = v4;
  v6 = (char *)operator new(0x1E8u);
  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)v6);
  cocos2d::CCSceneTransitionDelegate::CCSceneTransitionDelegate((cocos2d::CCSceneTransitionDelegate *)(v6 + 408));
  *(_QWORD *)v6 = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 40) = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 41) = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 42) = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 43) = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 44) = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 51) = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 52) = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 53) = &CreatorLayer::`vftable';
  *((_QWORD *)v6 + 54) = 0;
  *((_QWORD *)v6 + 55) = 0;
  *((_QWORD *)v6 + 56) = 0;
  *((_QWORD *)v6 + 57) = 0;
  *((_QWORD *)v6 + 58) = 0;
  *((_QWORD *)v6 + 59) = 0;
  *((_DWORD *)v6 + 120) = -1;
  *((_DWORD *)v6 + 121) = 0;
  if ( (unsigned __int8)CreatorLayer_init(v6) )
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6);
    (*(void (__fastcall **)(_QWORD *, char *))(*v4 + 464LL))(v4, v6);
    if ( v6 )
    {
      v4[40] = v6 + 408;
      return v4;
    }
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v4 + 464LL))(v4, 0);
  }
  v4[40] = 0;
  return v4;
}

// Address: 0x133180
// Method: CreatorLayer::init
// Hidden C++ exception states: #wind=19
bool __fastcall CreatorLayer_init(cocos2d::CCLayer *a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct cocos2d::CCSprite *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  struct cocos2d::CCSprite *v18; // rax
  float v19; // xmm6_4
  float v20; // xmm6_4
  __int64 v21; // rax
  signed int v22; // ebx
  char v23; // r15
  char v24; // r13
  char *v25; // rdx
  __int64 (__fastcall *v26)(); // r14
  char *v27; // r8
  char *v28; // rdx
  __int64 v29; // r8
  struct cocos2d::CCSprite *v30; // rdi
  void *v31; // rcx
  const char *v32; // rcx
  cocos2d::CCObject *v33; // r14
  float v34; // xmm0_4
  __int64 v35; // rax
  unsigned __int8 v36; // al
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdi
  void *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
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
  struct cocos2d::CCSprite *v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rcx
  cocos2d::CCDirector *v60; // rax
  float v61; // xmm6_4
  __int64 v62; // rcx
  cocos2d::CCDirector *v63; // rax
  float v64; // xmm0_4
  __int64 v65; // rax
  struct cocos2d::CCSprite *v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rcx
  cocos2d::CCDirector *v71; // rax
  float v72; // xmm6_4
  __int64 v73; // rcx
  cocos2d::CCDirector *v74; // rax
  float v75; // xmm0_4
  __int64 v76; // rax
  struct cocos2d::CCSprite *v77; // rdi
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // rcx
  cocos2d::CCDirector *v82; // rax
  float v83; // xmm6_4
  __int64 v84; // rcx
  cocos2d::CCDirector *v85; // rax
  float v86; // xmm0_4
  __int64 v87; // rax
  __int64 v88; // rcx
  int Stat; // r15d
  const char *v90; // rcx
  struct cocos2d::CCSprite *v91; // r14
  cocos2d::CCObject *v92; // rdi
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // r8
  float v97; // xmm6_4
  float *v98; // rax
  struct cocos2d::CCSprite *v99; // rbx
  __int64 v100; // rax
  cocos2d::CCString *v101; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rcx
  char v106; // al
  const char *v107; // rcx
  struct cocos2d::CCSprite *v108; // rbx
  __int64 v109; // rdi
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned int v113; // ebx
  cocos2d::CCObject *v114; // r14
  struct cocos2d::CCMenu *v115; // rdi
  __int64 v116; // rbx
  __int64 v117; // rcx
  cocos2d::CCDirector *v118; // rax
  float v119; // xmm6_4
  __int64 v120; // rcx
  cocos2d::CCDirector *v121; // rax
  float v122; // xmm0_4
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int16 v128; // [rsp+30h] [rbp-D0h] BYREF
  char v129; // [rsp+32h] [rbp-CEh]
  void *v130; // [rsp+38h] [rbp-C8h] BYREF
  void *v131; // [rsp+40h] [rbp-C0h] BYREF
  float v132; // [rsp+48h] [rbp-B8h] BYREF
  float v133; // [rsp+4Ch] [rbp-B4h]
  __int16 v134; // [rsp+50h] [rbp-B0h] BYREF
  char v135; // [rsp+52h] [rbp-AEh]
  void *v136; // [rsp+58h] [rbp-A8h] BYREF
  void *v137; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v138[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v139; // [rsp+70h] [rbp-90h] BYREF
  __int64 v140; // [rsp+80h] [rbp-80h]
  unsigned __int64 v141; // [rsp+88h] [rbp-78h]
  __int128 v142; // [rsp+90h] [rbp-70h] BYREF
  __int64 v143; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v144; // [rsp+A8h] [rbp-58h]

  result = cocos2d::CCLayer::init(a1);
  if ( result )
  {
    v4 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v131 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v131);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v4 = qword_905FD0;
    }
    *(_QWORD *)(v4 + 996) = -1;
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)a1 + 992LL))(a1, v3);
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v5);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, &v132);
    v8 = cocos2d::CCSprite::create("GJ_gradientBG.png");
    v9 = *(_QWORD *)v8;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v131, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v9 + 288))(v8, v10);
    (*(void (__fastcall **)(cocos2d::CCLayer *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
      a1,
      v8,
      4294967294LL);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v8 + 120LL))(v8);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v8 + 136LL))(v8);
    v11 = *(_QWORD *)v8;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v131, -5.0, -5.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v11 + 184))(v8, v12);
    v128 = 26112;
    v129 = -1;
    (**((void (__fastcall ***)(__int64, __int16 *))v8 + 40))((__int64)v8 + 320, &v128);
    v17 = cocos2d::CCMenu::create(v14, v13, v15, v16);
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)a1 + 464LL))(a1, v17);
    v18 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_searchBtn_001.png");
    v19 = fmaxf(0.89999998, (float)(v132 - 100.0) / (float)((float)(*((float *)v18 + 108) * 0.80000001) + 360.0));
    if ( v19 > 1.0 )
      v19 = 1.0;
    v20 = v19 * 90.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v131, v132 * 0.5, v133 * 0.5);
    cocos2d::CCNode::convertToNodeSpace(v17, v138, v21);
    v22 = 0;
    while ( 2 )
    {
      v139 = 0;
      v140 = 0;
      v141 = 15;
      LOBYTE(v139) = 0;
      v23 = 0;
      v24 = 0;
      switch ( v22 )
      {
        case 1:
          v25 = (char *)sub_3C460(32);
          v140 = 19;
          v141 = 31;
          strcpy(v25, "GJ_savedBtn_001.png");
          *(_QWORD *)&v139 = v25;
          v26 = sub_134AD0;
          goto LABEL_34;
        case 2:
          v25 = (char *)sub_3C460(32);
          v140 = 23;
          v141 = 31;
          strcpy(v25, "GJ_highscoreBtn_001.png");
          v26 = (__int64 (__fastcall *)())CreatorLayer_onLeaderboards;
          goto LABEL_33;
        case 3:
          v25 = (char *)sub_3C460(32);
          v140 = 23;
          v141 = 31;
          strcpy(v25, "GJ_challengeBtn_001.png");
          v26 = sub_135F30;
          v23 = 1;
          goto LABEL_33;
        case 4:
          v27 = (char *)sub_3C460(32);
          v140 = 20;
          v141 = 31;
          strcpy(v27, "GJ_versusBtn_001.png");
          *(_QWORD *)&v139 = v27;
          v26 = (__int64 (__fastcall *)())CreatorLayer_onMultiplayer;
          goto LABEL_12;
        case 5:
          v27 = (char *)sub_3C460(32);
          v140 = 17;
          v141 = 31;
          strcpy(v27, "GJ_mapBtn_001.png");
          *(_QWORD *)&v139 = v27;
          v26 = (__int64 (__fastcall *)())CreatorLayer_onAdventureMap;
LABEL_12:
          v28 = (char *)&v139;
          if ( v141 > 0xF )
            v28 = v27;
          v142 = 0;
          v143 = 0;
          v144 = 0;
          v29 = -1;
          do
            ++v29;
          while ( v28[v29] );
          sub_3C230(&v142);
          v30 = (struct cocos2d::CCSprite *)sub_4C150(&v142);
          if ( v144 > 0xF )
          {
            v31 = (void *)v142;
            if ( v144 + 1 >= 0x1000 )
            {
              v31 = *(void **)(v142 - 8);
              if ( (unsigned __int64)(v142 - (_QWORD)v31 - 8) > 0x1F )
                invoke_watson(0, 0, 0, 0, 0);
            }
            j_j_free(v31);
          }
          v143 = 0;
          v144 = 15;
          LOBYTE(v142) = 0;
          *((_DWORD *)v30 + 151) = 1051260355;
          *((_DWORD *)v30 + 152) = 1051260355;
          *((_DWORD *)v30 + 153) = 1051260355;
          v128 = -20561;
          v134 = -20561;
          v135 = -81;
          (**((void (__fastcall ***)(__int64, __int16 *))v30 + 40))((__int64)v30 + 320, &v134);
          goto LABEL_37;
        case 6:
          v25 = (char *)sub_3C460(32);
          v140 = 19;
          v141 = 31;
          strcpy(v25, "GJ_dailyBtn_001.png");
          v26 = sub_135D80;
          goto LABEL_33;
        case 7:
          v25 = (char *)sub_3C460(32);
          v140 = 20;
          v141 = 31;
          *(_OWORD *)v25 = xmmword_731F50;
          v26 = sub_135E10;
          goto LABEL_32;
        case 8:
          v25 = (char *)sub_3C460(32);
          v140 = 19;
          v141 = 31;
          strcpy(v25, "GJ_eventBtn_001.png");
          v26 = sub_135EA0;
          goto LABEL_33;
        case 9:
          v25 = (char *)sub_3C460(32);
          v140 = 23;
          v141 = 31;
          strcpy(v25, "GJ_gauntletsBtn_001.png");
          v26 = sub_135520;
          goto LABEL_33;
        case 10:
          v25 = (char *)sub_3C460(32);
          v140 = 22;
          v141 = 31;
          strcpy(v25, "GJ_featuredBtn_001.png");
          v26 = sub_135210;
          goto LABEL_33;
        case 11:
          v25 = (char *)sub_3C460(32);
          v140 = 19;
          v141 = 31;
          strcpy(v25, "GJ_listsBtn_001.png");
          v26 = CreatorLayer_onTopLists;
          goto LABEL_33;
        case 12:
          v25 = (char *)sub_3C460(32);
          v140 = 19;
          v141 = 31;
          strcpy(v25, "GJ_pathsBtn_001.png");
          v26 = sub_1352E0;
          goto LABEL_33;
        case 13:
          v25 = (char *)sub_3C460(32);
          v140 = 22;
          v141 = 31;
          strcpy(v25, "GJ_mapPacksBtn_001.png");
          v26 = sub_135450;
          goto LABEL_33;
        case 14:
          v25 = (char *)sub_3C460(32);
          v140 = 20;
          v141 = 31;
          strcpy(v25, "GJ_searchBtn_001.png");
          v26 = (__int64 (__fastcall *)())CreatorLayer_onOnlineLevels;
          v24 = 1;
          goto LABEL_33;
        default:
          v25 = (char *)sub_3C460(32);
          v140 = 20;
          v141 = 31;
          *(_OWORD *)v25 = xmmword_731E90;
          v26 = sub_134570;
LABEL_32:
          strcpy(v25 + 16, ".png");
LABEL_33:
          *(_QWORD *)&v139 = v25;
LABEL_34:
          v32 = (const char *)&v139;
          if ( v141 > 0xF )
            v32 = v25;
          v30 = cocos2d::CCSprite::createWithSpriteFrameName(v32);
LABEL_37:
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v30 + 160LL))(v30);
          v33 = CCMenuItemSpriteExtra_create((int)v30, 0, (int)a1, (__int64)v26);
          (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v17 + 464LL))(v17, v33);
          v34 = floorf((float)v22 / 5.0);
          cocos2d::CCPoint::CCPoint(
            (cocos2d::CCPoint *)&v136,
            (float)((float)((float)(v22 % 5) - 1.5) * v20) - (float)(v20 * 0.5),
            (float)-(float)(v34 - 1.0) * v20);
          cocos2d::CCPoint::operator+(v138, &v131, v35);
          (*(void (__fastcall **)(cocos2d::CCObject *, void **))(*(_QWORD *)v33 + 184LL))(v33, &v131);
          if ( v23 )
          {
            *((_QWORD *)a1 + 55) = v30;
            v36 = sub_9D210();
            sub_136F40(v30, v36);
          }
          switch ( v22 )
          {
            case 6:
              *((_QWORD *)a1 + 56) = v30;
              break;
            case 7:
              *((_QWORD *)a1 + 57) = v30;
              break;
            case 8:
              *((_QWORD *)a1 + 58) = v30;
              break;
            case 9:
              *((_QWORD *)a1 + 59) = v30;
              break;
          }
          v37 = qword_905FD0;
          if ( !qword_905FD0 )
          {
            v137 = operator new(0x6E8u);
            qword_905FD0 = sub_2723A0(v137);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
            v37 = qword_905FD0;
          }
          if ( GameManager_getGameVariable(v37, "0219") )
          {
            if ( (unsigned int)v22 > 0xC )
              goto LABEL_60;
            v38 = 4107;
            if ( !_bittest(&v38, v22) )
              goto LABEL_60;
          }
          else
          {
            v39 = qword_905FD0;
            if ( !qword_905FD0 )
            {
              v130 = operator new(0x6E8u);
              qword_905FD0 = sub_2723A0(v130);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
              v39 = qword_905FD0;
            }
            if ( (GameManager_getGameVariable(v39, "0218")
               || GameManager_getGameVariable(v39, "0219")
               || GameManager_getGameVariable(v39, "0077"))
              && (v22 == 11 || v24) )
            {
LABEL_60:
              (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v33 + 936LL))(v33, 0);
              (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v33 + 336LL))(v33, 0);
            }
          }
          if ( v141 > 0xF )
          {
            v40 = (void *)v139;
            if ( v141 + 1 >= 0x1000 )
            {
              v40 = *(void **)(v139 - 8);
              if ( (unsigned __int64)(v139 - (_QWORD)v40 - 8) > 0x1F )
                invoke_watson(0, 0, 0, 0, 0);
            }
            j_j_free(v40);
          }
          if ( ++v22 < 15 )
            continue;
          sub_137000(a1);
          v41 = *(_QWORD *)&qword_905FB0;
          if ( !*(_QWORD *)&qword_905FB0 )
          {
            v130 = operator new(0x690u);
            *(_QWORD *)&qword_905FB0 = sub_214250(v130);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
            v41 = *(_QWORD *)&qword_905FB0;
          }
          if ( !*(_BYTE *)(v41 + 1008) )
          {
            v42 = qword_905FD0;
            if ( !qword_905FD0 )
            {
              v130 = operator new(0x6E8u);
              qword_905FD0 = sub_2723A0(v130);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
              v42 = qword_905FD0;
            }
            if ( !GameManager_getGameVariable(v42, "0219") )
            {
              v43 = *(_QWORD *)&qword_905FB0;
              if ( !*(_QWORD *)&qword_905FB0 )
              {
                v130 = operator new(0x690u);
                *(_QWORD *)&qword_905FB0 = sub_214250(v130);
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
                v43 = *(_QWORD *)&qword_905FB0;
              }
              *(_QWORD *)(v43 + 1568) = (char *)a1 + 424;
              sub_22E110();
            }
          }
          v44 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
          v45 = *(_QWORD *)v44;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, 0.0, 0.0);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v45 + 288))(v44, v46);
          v47 = *(_QWORD *)v44;
          v49 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v48);
          v50 = cocos2d::CCDirector::getScreenBottom(v49) - 1.0;
          v52 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v51);
          v53 = cocos2d::CCDirector::getScreenLeft(v52) - 1.0;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, v53, v50);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v47 + 184))(v44, v54);
          (*(void (__fastcall **)(cocos2d::CCLayer *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
            a1,
            v44,
            1);
          v55 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
          v56 = *(_QWORD *)v55;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, 1.0, 0.0);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v56 + 288))(v55, v57);
          v58 = *(_QWORD *)v55;
          v60 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v59);
          v61 = cocos2d::CCDirector::getScreenBottom(v60) - 1.0;
          v63 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v62);
          v64 = cocos2d::CCDirector::getScreenRight(v63) + 1.0;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, v64, v61);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v58 + 184))(v55, v65);
          cocos2d::CCSprite::setFlipX(v55, 1);
          v66 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
          v67 = *(_QWORD *)v66;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, 0.0, 1.0);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v67 + 288))(v66, v68);
          v69 = *(_QWORD *)v66;
          v71 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v70);
          v72 = cocos2d::CCDirector::getScreenTop(v71) + 1.0;
          v74 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v73);
          v75 = cocos2d::CCDirector::getScreenLeft(v74) - 1.0;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, v75, v72);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v69 + 184))(v66, v76);
          cocos2d::CCSprite::setFlipY(v66, 1);
          (*(void (__fastcall **)(cocos2d::CCLayer *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
            a1,
            v66,
            0xFFFFFFFFLL);
          v77 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
          v78 = *(_QWORD *)v77;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, 1.0, 1.0);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v78 + 288))(v77, v79);
          v80 = *(_QWORD *)v77;
          v82 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v81);
          v83 = cocos2d::CCDirector::getScreenTop(v82) + 1.0;
          v85 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v84);
          v86 = cocos2d::CCDirector::getScreenRight(v85) + 1.0;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, v86, v83);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v80 + 184))(v77, v87);
          cocos2d::CCSprite::setFlipY(v77, 1);
          cocos2d::CCSprite::setFlipX(v77, 1);
          v88 = qword_905FE0;
          if ( !qword_905FE0 )
          {
            v130 = operator new(0x3E8u);
            qword_905FE0 = sub_2D2B40(v130);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
            v88 = qword_905FE0;
          }
          Stat = GameStatsManager_getStat(v88, "13");
          v90 = (const char *)&xmmword_7178B0;
          if ( Stat >= 50 )
            v90 = "GJ_lock_open_001.png";
          v91 = cocos2d::CCSprite::createWithSpriteFrameName(v90);
          v130 = operator new(0x208u);
          v92 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v130);
          if ( !v92 )
            goto LABEL_85;
          if ( (unsigned __int8)sub_47940((_DWORD)v92, (_DWORD)v91, 0, (_DWORD)a1, (__int64)CreatorLayer_onSecretVault) )
          {
            cocos2d::CCObject::autorelease(v92);
          }
          else
          {
            (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v92 + 8LL))(v92, 1);
LABEL_85:
            v92 = 0;
          }
          (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v17 + 464LL))(v17, v92);
          v93 = *(_QWORD *)v92;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, v132 - 22.0, v133 - 18.0);
          cocos2d::CCNode::convertToNodeSpace(v17, &v137, v94);
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v93 + 184))(v92, v95);
          if ( Stat < 50 )
          {
            v97 = (float)(*(float *)((*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v92 + 320LL))(v92) + 4)
                        * 0.5)
                - 22.0;
            v98 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v92 + 320LL))(v92);
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v134, *v98 * 0.5, v97);
            v99 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_diamondsIcon_001.png");
            (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCSprite *))(*(_QWORD *)v91 + 464LL))(
              v91,
              v99);
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v136, 9.0, -1.0);
            cocos2d::CCPoint::operator+(&v134, &v131, v100);
            (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v99 + 184LL))(v99, &v131);
            (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v99 + 160LL))(v99);
            v101 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 50);
            CString = cocos2d::CCString::getCString(v101);
            v103 = cocos2d::CCLabelBMFont::create(CString, (const char *)&qword_6FFF68);
            (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 464LL))(
              v91,
              v103);
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v136, -8.5, 0.0);
            cocos2d::CCPoint::operator+(&v134, &v131, v104);
            (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v103 + 184LL))(v103, &v131);
            (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v103 + 160LL))(v103);
          }
          *((_DWORD *)v92 + 93) = 0x40000000;
          v105 = qword_905FD0;
          if ( !qword_905FD0 )
          {
            v136 = operator new(0x6E8u);
            qword_905FD0 = sub_2723A0(v136);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
            v105 = qword_905FD0;
          }
          v106 = sub_27B350(v105, &word_708038, v96);
          v107 = "secretDoorBtn_closed_001.png";
          if ( v106 )
            v107 = "secretDoorBtn_open_001.png";
          v108 = cocos2d::CCSprite::createWithSpriteFrameName(v107);
          *((_QWORD *)a1 + 54) = v108;
          v130 = operator new(0x208u);
          v109 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v130);
          if ( !v109 )
            goto LABEL_96;
          if ( (unsigned __int8)sub_47940(v109, (_DWORD)v108, 0, (_DWORD)a1, (__int64)CreatorLayer_onTreasureRoom) )
          {
            cocos2d::CCObject::autorelease((cocos2d::CCObject *)v109);
          }
          else
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v109 + 8LL))(v109, 1);
LABEL_96:
            v109 = 0;
          }
          *(_WORD *)(v109 + 408) = 256;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 464LL))(v17, v109);
          v110 = *(_QWORD *)v109;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, v132 - 22.0, 24.0);
          cocos2d::CCNode::convertToNodeSpace(v17, &v137, v111);
          (*(void (__fastcall **)(__int64, __int64))(v110 + 184))(v109, v112);
          *(_DWORD *)(v109 + 372) = 1067030938;
          v113 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
          v130 = operator new(0x208u);
          v114 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v130);
          if ( !v114 )
            goto LABEL_101;
          if ( (unsigned __int8)sub_47940((_DWORD)v114, v113, 0, (_DWORD)a1, (__int64)sub_137250) )
          {
            cocos2d::CCObject::autorelease(v114);
          }
          else
          {
            (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v114 + 8LL))(v114, 1);
LABEL_101:
            v114 = 0;
          }
          *((_DWORD *)v114 + 93) = 1070386381;
          v115 = cocos2d::CCMenu::create(v114, 0);
          (*(void (__fastcall **)(cocos2d::CCLayer *, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(
            a1,
            v115,
            1);
          v116 = *(_QWORD *)v115;
          v118 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v117);
          v119 = cocos2d::CCDirector::getScreenTop(v118) - 23.0;
          v121 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v120);
          v122 = cocos2d::CCDirector::getScreenLeft(v121) + 24.0;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v130, v122, v119);
          (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v116 + 184))(v115, v123);
          v125 = qword_905FD0;
          if ( !qword_905FD0 )
          {
            v130 = operator new(0x6E8u);
            qword_905FD0 = sub_2723A0(v130);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
            v125 = qword_905FD0;
          }
          *(_QWORD *)(v125 + 996) = 0;
          if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v124) + 209) )
            sub_6DEB0(a1, v114);
          v126 = qword_905FD0;
          if ( !qword_905FD0 )
          {
            v130 = operator new(0x6E8u);
            qword_905FD0 = sub_2723A0(v130);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
            v126 = qword_905FD0;
          }
          if ( *(_DWORD *)(v126 + 692) == *(_DWORD *)(v126 + 696) )
          {
            v127 = *(_QWORD *)&qword_905FB0;
            if ( !*(_QWORD *)&qword_905FB0 )
            {
              v130 = operator new(0x690u);
              *(_QWORD *)&qword_905FB0 = sub_214250(v130);
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
              v127 = *(_QWORD *)&qword_905FB0;
            }
            GameLevelManager_updateUserScore(v127);
          }
          result = 1;
          break;
      }
      break;
    }
  }
  return result;
}
