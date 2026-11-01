#include <Geode/binding/LevelOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x4590d0
// Method: LevelOptionsLayer::setupOptions
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelOptionsLayer_setupOptions(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // eax
  __int64 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  struct cocos2d::CCSprite *v12; // rbx
  __int64 *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+80h] [rbp-19h] BYREF
  __int64 v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  __int128 v21; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+17h]
  __int64 v23; // [rsp+B8h] [rbp+1Fh]
  float v24; // [rsp+100h] [rbp+67h] BYREF
  float v25; // [rsp+104h] [rbp+6Bh]
  __int128 *v26; // [rsp+108h] [rbp+6Fh] BYREF
  char v27; // [rsp+110h] [rbp+77h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x4590ef*/
  cocos2d::CCDirector::getWinSize(v2, &v24); /*0x4590fc*/
  sub_3976E0( /*0x45912a*/
    a1,
    (unsigned int)"Mini Mode",
    0,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 336LL),
    (__int64)&byte_6E86E0);
  sub_3976E0( /*0x459153*/
    a1,
    (unsigned int)"Dual Mode",
    1,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 337LL),
    (__int64)&byte_6E86E0);
  v3 = *(_QWORD *)(a1 + 1136); /*0x459158*/
  if ( !*(_BYTE *)(v3 + 368) ) /*0x45915f*/
    sub_3976E0( /*0x45918d*/
      a1,
      (unsigned int)"2-Player Mode",
      2,
      *(unsigned __int8 *)(v3 + 340),
      (__int64)"Players are controlled separately.\n"
               "<cl>Player 1:</c> Left side\n"
               "<cg>Player 2:</c> Right side\n"
               "<cy>(You can change the controls in the options menu)</c>");
  sub_3976E0( /*0x4591b6*/
    a1,
    (unsigned int)"Mirror Mode",
    4,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 338LL),
    (__int64)&byte_6E86E0);
  sub_3976E0( /*0x4591df*/
    a1,
    (unsigned int)"Flip\nGravity",
    5,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 369LL),
    (__int64)&byte_6E86E0);
  sub_3976E0( /*0x459208*/
    a1,
    (unsigned int)"Rotate\nGameplay",
    6,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 339LL),
    (__int64)&byte_6E86E0);
  result = sub_3976E0( /*0x459231*/
             a1,
             (unsigned int)"Reverse\nGameplay",
             7,
             *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 370LL),
             (__int64)&byte_6E86E0);
  v5 = *(_QWORD *)(a1 + 1136); /*0x459236*/
  if ( !*(_BYTE *)(v5 + 368) ) /*0x45923d*/
  {
    sub_3976E0( /*0x45926f*/
      a1,
      (unsigned int)"No Time\nPenalty",
      20,
      *(unsigned __int8 *)(v5 + 438),
      (__int64)"In platformer mode you automatically lose 1000 points per second. Toggle to disable this penalty.");
    v26 = &v18; /*0x459278*/
    v19 = 12; /*0x459283*/
    v20 = 15; /*0x45928b*/
    strcpy((char *)&v18, "Spawn Group:"); /*0x45929b*/
    BYTE13(v18) = 0; /*0x4592a6*/
    HIWORD(v18) = 0; /*0x4592a6*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, (float)(v24 * 0.5) + 50.0, (float)(v25 * 0.5) - 100.0); /*0x4592de*/
    sub_6088F0(a1, 13, (unsigned int)&v18, v6, 1060320051, 1, 3, 6, 1, 0, 1176255488, 0, 0, 0, 2, 0); /*0x45934d*/
    v26 = &v21; /*0x459356*/
    v21 = 0; /*0x45935d*/
    v22 = 0; /*0x459361*/
    v23 = 0; /*0x459365*/
    *(_QWORD *)&v21 = sub_3C460(128); /*0x459376*/
    v22 = 121; /*0x45937a*/
    v23 = 127; /*0x459382*/
    strcpy( /*0x459391*/
      (char *)v21,
      "Lets you set a target position for player spawn.\n"
      "If the group contains multiple objects a random target will be selected.");
    v19 = 11; /*0x4593f3*/
    v20 = 15; /*0x4593fb*/
    *(_QWORD *)&v18 = 0x7247206E77617053LL; /*0x45940b*/
    *((_QWORD *)&v18 + 1) = 7370095; /*0x459417*/
    v7 = (__int64 *)InfoAlertButton_create(&v18, &v21); /*0x459439*/
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v7); /*0x459450*/
    v8 = *v7; /*0x459453*/
    v9 = *(_QWORD *)(a1 + 552); /*0x459456*/
    cocos2d::CCPoint::CCPoint( /*0x459495*/
      (cocos2d::CCPoint *)&v26,
      (float)((float)(v24 * 0.5) + 50.0) - 55.0,
      (float)((float)(v25 * 0.5) - 100.0) + 24.0);
    cocos2d::CCNode::convertToNodeSpace(v9, &v27, v10); /*0x4594a5*/
    (*(void (__fastcall **)(__int64 *, __int64))(v8 + 184))(v7, v11); /*0x4594b1*/
    v12 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsBtn_001.png"); /*0x4594c4*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 160LL))(v12); /*0x4594dc*/
    v13 = (__int64 *)CCMenuItemSpriteExtra_create(v12, 0, a1, LevelOptionsLayer_onSettings); /*0x4594f2*/
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v13); /*0x459509*/
    v14 = *v13; /*0x45950c*/
    v15 = *(_QWORD *)(a1 + 552); /*0x45950f*/
    cocos2d::CCPoint::CCPoint( /*0x459562*/
      (cocos2d::CCPoint *)&v26,
      (float)((float)(*(float *)(a1 + 732) * 0.5) + (float)(v24 * 0.5)) - 25.0,
      (float)((float)(*(float *)(a1 + 736) * 0.5) + (float)(v25 * 0.5)) - 25.0);
    cocos2d::CCNode::convertToNodeSpace(v15, &v27, v16); /*0x459572*/
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(v14 + 184))(v13, v17); /*0x45957e*/
  }
  return result; /*0x459584*/
}

// [2/5] Address: 0x4595a0
// Method: LevelOptionsLayer::onSettings
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelOptionsLayer_onSettings(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  struct cocos2d::CCLabelBMFont *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rdx
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1[142]; /*0x4595b0*/
  v3 = operator new(0x478u); /*0x4595c1*/
  v11 = v3; /*0x4595c4*/
  sub_4537C0(v3); /*0x4595cc*/
  *v3 = &LevelOptionsLayer2::`vftable'; /*0x4595d8*/
  v3[40] = &LevelOptionsLayer2::`vftable'; /*0x4595e2*/
  v3[41] = &LevelOptionsLayer2::`vftable'; /*0x4595f0*/
  v3[42] = &LevelOptionsLayer2::`vftable'; /*0x4595fe*/
  v3[43] = &LevelOptionsLayer2::`vftable'; /*0x45960c*/
  v3[44] = &LevelOptionsLayer2::`vftable'; /*0x45961a*/
  v3[51] = &LevelOptionsLayer2::`vftable'; /*0x459628*/
  v3[54] = &LevelOptionsLayer2::`vftable'; /*0x459636*/
  v3[68] = &LevelOptionsLayer2::`vftable'; /*0x459644*/
  v3[83] = &LevelOptionsLayer2::`vftable'; /*0x459652*/
  v3[84] = &LevelOptionsLayer2::`vftable'; /*0x459660*/
  if ( (unsigned __int8)sub_459060(v3, v2) ) /*0x45966d*/
  {
    v5 = cocos2d::CCDirector::sharedDirector(v4); /*0x45967a*/
    cocos2d::CCDirector::getWinSize(v5, &v11); /*0x459688*/
    v6 = cocos2d::CCLabelBMFont::create("Legacy Options", "goldFont.fnt"); /*0x4596a2*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 160LL))(v6); /*0x4596ba*/
    v7 = *(_QWORD *)v6; /*0x4596bc*/
    cocos2d::CCPoint::CCPoint( /*0x4596f8*/
      (cocos2d::CCPoint *)&v12,
      *(float *)&v11 * 0.5,
      (float)((float)(*((float *)v3 + 184) * 0.5) + (float)(*((float *)&v11 + 1) * 0.5)) - 20.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v7 + 184))(v6, v8); /*0x459704*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v3[73] + 456LL))( /*0x45971d*/
      v3[73],
      v6,
      1);
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v3); /*0x459726*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 8LL))(v3, 1); /*0x459739*/
    v3 = 0; /*0x45973c*/
  }
  v9 = *(__int64 (__fastcall **)(__int64))(*v3 + 1064LL); /*0x459741*/
  if ( v9 == SetupTriggerPopup_show ) /*0x459755*/
    SetupTriggerPopup_show((__int64)v3); /*0x459757*/
  else
    v9((__int64)v3); /*0x45975e*/
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 1104LL))(a1, 0);
}

// [3/5] Address: 0x459780
// Method: LevelOptionsLayer::valueDidChange
__int64 __fastcall LevelOptionsLayer_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 result; // rax

  if ( a2 == 13 ) /*0x459783*/
  {
    result = *(_QWORD *)(a1 + 1136); /*0x459785*/
    *(_DWORD *)(result + 452) = (int)a3; /*0x459790*/
  }
  return result; /*0x459796*/
}

// [4/5] Address: 0x4597a0
// Method: LevelOptionsLayer::getValue
float __fastcall LevelOptionsLayer_getValue(__int64 a1, int a2)
{
  if ( a2 == 13 ) /*0x4597a3*/
    return (float)*(int *)(*(_QWORD *)(a1 + 1136) + 452LL); /*0x4597b8*/
  else
    return 0.0; /*0x4597a5*/
}

// [5/5] Address: 0x4597c0
// Method: LevelOptionsLayer::didToggle
bool __fastcall LevelOptionsLayer_didToggle(__int64 a1, int a2)
{
  __int64 v2; // rcx
  bool result; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx

  switch ( a2 ) /*0x4597de*/
  {
    case 0: /*0x4597de*/
      v2 = *(_QWORD *)(a1 + 1136); /*0x4597e0*/
      result = *(_BYTE *)(v2 + 336) == 0; /*0x4597ee*/
      *(_BYTE *)(v2 + 336) = result; /*0x4597f1*/
      break; /*0x4597f7*/
    case 1: /*0x4597de*/
      v4 = *(_QWORD *)(a1 + 1136); /*0x4597f8*/
      result = *(_BYTE *)(v4 + 337) == 0; /*0x459806*/
      *(_BYTE *)(v4 + 337) = result; /*0x459809*/
      break; /*0x45980f*/
    case 2: /*0x4597de*/
      v5 = *(_QWORD *)(a1 + 1136); /*0x459810*/
      result = *(_BYTE *)(v5 + 340) == 0; /*0x45981e*/
      *(_BYTE *)(v5 + 340) = result; /*0x459821*/
      break; /*0x459827*/
    case 4: /*0x4597de*/
      v6 = *(_QWORD *)(a1 + 1136); /*0x459828*/
      result = *(_BYTE *)(v6 + 338) == 0; /*0x459836*/
      *(_BYTE *)(v6 + 338) = result; /*0x459839*/
      break; /*0x45983f*/
    case 5: /*0x4597de*/
      v7 = *(_QWORD *)(a1 + 1136); /*0x459840*/
      result = *(_BYTE *)(v7 + 369) == 0; /*0x45984e*/
      *(_BYTE *)(v7 + 369) = result; /*0x459851*/
      break; /*0x459857*/
    case 6: /*0x4597de*/
      v8 = *(_QWORD *)(a1 + 1136); /*0x459858*/
      result = *(_BYTE *)(v8 + 339) == 0; /*0x459866*/
      *(_BYTE *)(v8 + 339) = result; /*0x459869*/
      break; /*0x45986f*/
    case 7: /*0x4597de*/
      v9 = *(_QWORD *)(a1 + 1136); /*0x459870*/
      result = *(_BYTE *)(v9 + 370) == 0; /*0x45987e*/
      *(_BYTE *)(v9 + 370) = result; /*0x459881*/
      break; /*0x459887*/
    case 8: /*0x4597de*/
      v10 = *(_QWORD *)(a1 + 1136); /*0x459888*/
      result = *(_BYTE *)(v10 + 456) == 0; /*0x459896*/
      *(_BYTE *)(v10 + 456) = result; /*0x459899*/
      break; /*0x45989f*/
    case 9: /*0x4597de*/
      v11 = *(_QWORD *)(a1 + 1136); /*0x4598a0*/
      result = *(_BYTE *)(v11 + 457) == 0; /*0x4598ae*/
      *(_BYTE *)(v11 + 457) = result; /*0x4598b1*/
      break; /*0x4598b7*/
    case 10: /*0x4597de*/
      v12 = *(_QWORD *)(a1 + 1136); /*0x4598b8*/
      result = *(_BYTE *)(v12 + 458) == 0; /*0x4598c6*/
      *(_BYTE *)(v12 + 458) = result; /*0x4598c9*/
      break; /*0x4598cf*/
    case 11: /*0x4597de*/
      v13 = *(_QWORD *)(a1 + 1136); /*0x4598d0*/
      result = *(_BYTE *)(v13 + 459) == 0; /*0x4598de*/
      *(_BYTE *)(v13 + 459) = result; /*0x4598e1*/
      break; /*0x4598e7*/
    case 12: /*0x4597de*/
      v14 = *(_QWORD *)(a1 + 1136); /*0x4598e8*/
      result = *(_BYTE *)(v14 + 460) == 0; /*0x4598f6*/
      *(_BYTE *)(v14 + 460) = result; /*0x4598f9*/
      break; /*0x4598ff*/
    case 14: /*0x4597de*/
      v15 = *(_QWORD *)(a1 + 1136); /*0x459900*/
      result = *(_BYTE *)(v15 + 461) == 0; /*0x45990e*/
      *(_BYTE *)(v15 + 461) = result; /*0x459911*/
      break; /*0x459917*/
    case 15: /*0x4597de*/
      v16 = *(_QWORD *)(a1 + 1136); /*0x459918*/
      result = *(_BYTE *)(v16 + 462) == 0; /*0x459926*/
      *(_BYTE *)(v16 + 462) = result; /*0x459929*/
      break; /*0x45992f*/
    case 16: /*0x4597de*/
      v17 = *(_QWORD *)(a1 + 1136); /*0x459930*/
      result = *(_BYTE *)(v17 + 463) == 0; /*0x45993e*/
      *(_BYTE *)(v17 + 463) = result; /*0x459941*/
      break; /*0x459947*/
    case 17: /*0x4597de*/
      v18 = *(_QWORD *)(a1 + 1136); /*0x459948*/
      result = *(_BYTE *)(v18 + 464) == 0; /*0x459956*/
      *(_BYTE *)(v18 + 464) = result; /*0x459959*/
      break; /*0x45995f*/
    case 18: /*0x4597de*/
      v19 = *(_QWORD *)(a1 + 1136); /*0x459960*/
      result = *(_BYTE *)(v19 + 467) == 0; /*0x45996e*/
      *(_BYTE *)(v19 + 467) = result; /*0x459971*/
      break; /*0x459977*/
    case 19: /*0x4597de*/
      v20 = *(_QWORD *)(a1 + 1136); /*0x459978*/
      result = *(_BYTE *)(v20 + 468) == 0; /*0x459986*/
      *(_BYTE *)(v20 + 468) = result; /*0x459989*/
      break; /*0x45998f*/
    case 20: /*0x4597de*/
      v21 = *(_QWORD *)(a1 + 1136); /*0x459990*/
      result = *(_BYTE *)(v21 + 438) == 0; /*0x45999e*/
      *(_BYTE *)(v21 + 438) = result; /*0x4599a1*/
      break; /*0x4599a7*/
    case 22: /*0x4597de*/
      v22 = *(_QWORD *)(a1 + 1136); /*0x4599a8*/
      result = *(_BYTE *)(v22 + 469) == 0; /*0x4599b6*/
      *(_BYTE *)(v22 + 469) = result; /*0x4599b9*/
      break; /*0x4599bf*/
    case 23: /*0x4597de*/
      v23 = *(_QWORD *)(a1 + 1136); /*0x4599c0*/
      result = *(_BYTE *)(v23 + 470) == 0; /*0x4599ce*/
      *(_BYTE *)(v23 + 470) = result; /*0x4599d1*/
      break; /*0x4599d1*/
    default:
      return result;
  }
  return result; /*0x4597f7*/
}
