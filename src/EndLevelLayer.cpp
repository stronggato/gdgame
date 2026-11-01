#include <Geode/binding/EndLevelLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/16] Address: 0xd9570
// Method: EndLevelLayer::onReplay
// Hidden C++ exception states: #wind=3
void __fastcall EndLevelLayer_onReplay(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]
  void *v17; // [rsp+80h] [rbp+8h]
  void *v18; // [rsp+80h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 1104) ) /*0xd957d*/
  {
    v2 = *(_QWORD *)&qword_905FB0; /*0xd958a*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xd9594*/
    {
      v17 = operator new(0x690u); /*0xd95a0*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0xd95b1*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd95c2*/
      v2 = *(_QWORD *)&qword_905FB0; /*0xd95c4*/
    }
    if ( (unsigned int)sub_21ED50(v2, "threadViewUpdate") - 1 > 4 ) /*0xd95e4*/
    {
      v9 = *(_QWORD *)&qword_905FB0; /*0xd96b8*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xd96c2*/
      {
        v18 = operator new(0x690u); /*0xd96ce*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0xd96df*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd96f0*/
        v9 = *(_QWORD *)&qword_905FB0; /*0xd96f3*/
      }
      GameLevelManager_makeTimeStamp(v9, (__int64)"threadViewUpdate"); /*0xd9701*/
      if ( *(_BYTE *)(a1 + 781) ) /*0xd9706*/
        v10 = *(_QWORD *)(a1 + 768); /*0xd970f*/
      else
        v10 = 0; /*0xd9718*/
      if ( (unsigned __int8)sub_D8710(a1, 0, v10) ) /*0xd9720*/
        sub_D94E0(a1); /*0xd972c*/
    }
    else
    {
      v4 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v3) + 272); /*0xd95f0*/
      v14 = 0; /*0xd9607*/
      v15 = 0; /*0xd960f*/
      v16 = 15; /*0xd9614*/
      LOBYTE(v14) = 0; /*0xd961d*/
      v11 = 0; /*0xd9622*/
      *(_QWORD *)&v11 = sub_3C460(32); /*0xd963b*/
      v12 = 18; /*0xd9640*/
      v13 = 31; /*0xd9649*/
      strcpy((char *)v11, "Already up to date"); /*0xd9659*/
      v5 = *v4; /*0xd966b*/
      v8 = sub_3A4CA0(&v11, v6, v7, 150, &v14); /*0xd9693*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v5 + 456))(v4, v8, 1000); /*0xd96a4*/
    }
  }
}

// [2/16] Address: 0xd9a90
// Method: EndLevelLayer::coinEnterFinishedO
__int64 __fastcall EndLevelLayer_coinEnterFinishedO(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 632LL))(a2); /*0xd9a9f*/
  if ( result ) /*0xd9aa8*/
  {
    if ( *(__int64 *)(result + 56) > 0 ) /*0xd9ab1*/
      return sub_D9AD0(a1); /*0xd9abb*/
  }
  return result; /*0xd9ab6*/
}

// [3/16] Address: 0xe1480
// Method: EndLevelLayer::playStarEffect
__int64 __fastcall EndLevelLayer_playStarEffect(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  char *v6; // r8
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  cocos2d::CCLabelBMFont *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  float v12; // xmm6_4
  double v13; // xmm0_8
  float v14; // xmm8_4
  struct cocos2d::CCSprite *v15; // rsi
  __int64 v16; // rdx
  void (__fastcall *v17)(char *, __int64); // rax
  float v18; // xmm8_4
  float v19; // xmm6_4
  double v20; // xmm0_8
  float v21; // xmm7_4
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  char v35; // [rsp+70h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 744); /*0xe1486*/
  if ( !*(_BYTE *)(result + 320) && *(_QWORD *)(a1 + 552) ) /*0xe149d*/
  {
    v3 = *(_QWORD *)(a1 + 864); /*0xe14ab*/
    if ( v3 ) /*0xe14b5*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 512LL))(v3); /*0xe14ba*/
      result = 0; /*0xe14c0*/
      *(_QWORD *)(a1 + 864) = 0; /*0xe14c2*/
      *(_QWORD *)(a1 + 856) = 0; /*0xe14c9*/
    }
    v4 = *(_QWORD *)(a1 + 744); /*0xe14d0*/
    if ( *(_BYTE *)(v4 + 320) || *(_DWORD *)(v4 + 324) != 8 ) /*0xe14e7*/
    {
      v5 = *(unsigned int *)(v4 + 200); /*0xe14ed*/
      v6 = (char *)&unk_70802C; /*0xe14ff*/
      if ( (_DWORD)v5 == 1 ) /*0xe1527*/
        v6 = &byte_6E86E0; /*0xe1527*/
      v7 = cocos2d::CCString::createWithFormat("%i member%s", v5, v6); /*0xe1536*/
      CString = cocos2d::CCString::getCString(v7); /*0xe153f*/
      v9 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt"); /*0xe1568*/
      cocos2d::CCLabelBMFont::limitLabelWidth(v9, 70.0, 0.40000001, 0.2); /*0xe1573*/
      v10 = *(_QWORD *)v9; /*0xe1586*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, 0.0, 0.5); /*0xe158c*/
      (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v10 + 288))(v9, v11); /*0xe1598*/
      v12 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v9 + 320LL))(v9); /*0xe15ad*/
      v13 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v9 + 168LL))(v9); /*0xe15b4*/
      v14 = *(float *)&v13 * v12; /*0xe15c5*/
      v15 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png"); /*0xe15d8*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 160LL))(v15); /*0xe15e8*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 352LL))(v15); /*0xe15ff*/
      v16 = *((_QWORD *)v15 + 40); /*0xe1608*/
      v17 = *(void (__fastcall **)(char *, __int64))(v16 + 40); /*0xe160b*/
      LOBYTE(v16) = -106; /*0xe160f*/
      v17((char *)v15 + 320, v16); /*0xe1611*/
      v18 = v14 + 10.0; /*0xe1619*/
      v19 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 320LL))(v15) + 4); /*0xe162b*/
      v20 = (*(double (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 168LL))(v15); /*0xe1633*/
      v21 = (float)((float)(*(float *)&v20 * v19) * 0.5) + v18; /*0xe1648*/
      v24 = cocos2d::CCNode::create(v23, v22); /*0xe1663*/
      v25 = *(_QWORD *)v24; /*0xe1666*/
      v26 = cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v35, v21, 28.0); /*0xe1669*/
      (*(void (__fastcall **)(__int64, __int64))(v25 + 312))(v24, v26); /*0xe1675*/
      v27 = *(_QWORD *)v9; /*0xe1688*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, 0.0, 14.0); /*0xe1691*/
      (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v27 + 184))(v9, v28); /*0xe169d*/
      (*(void (__fastcall **)(__int64, cocos2d::CCLabelBMFont *))(*(_QWORD *)v24 + 464LL))(v24, v9); /*0xe16ac*/
      v29 = *(_QWORD *)v15; /*0xe16b2*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, v18, 14.0); /*0xe16c1*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v29 + 184))(v15, v30); /*0xe16cd*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)v24 + 464LL))(v24, v15); /*0xe16dc*/
      *(_QWORD *)(a1 + 856) = v9; /*0xe16e9*/
      v31 = CCMenuItemSpriteExtra_create(v24, 0, a1, sub_DB1E0); /*0xe16f8*/
      *(_QWORD *)(a1 + 864) = v31; /*0xe16fd*/
      *(_DWORD *)(v31 + 372) = 1067869798; /*0xe1704*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))( /*0xe171f*/
        *(_QWORD *)(a1 + 552),
        *(_QWORD *)(a1 + 864));
      v32 = *(__int64 **)(a1 + 864); /*0xe1732*/
      v33 = *v32; /*0xe1749*/
      cocos2d::CCPoint::CCPoint( /*0xe174f*/
        (cocos2d::CCPoint *)&v35,
        (float)(v21 * 0.5) + *(float *)(a1 + 872),
        *(float *)(a1 + 876));
      return (*(__int64 (__fastcall **)(__int64 *, __int64))(v33 + 184))(v32, v34); /*0xe175b*/
    }
  }
  return result; /*0xe1788*/
}

// [4/16] Address: 0xfdac0
// Method: EndLevelLayer::goEdit
__int64 __fastcall EndLevelLayer_goEdit(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax

  v1 = a1[84]; /*0xfdad4*/
  v3 = a1[83]; /*0xfdade*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xfdae5*/
  LOBYTE(v4) = 1; /*0xfdaee*/
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v4); /*0xfdaf3*/
  if ( v1 ) /*0xfdafc*/
    return sub_F72B0(v1, v3); /*0xfdb04*/
  return result; /*0xfdb09*/
}

// [5/16] Address: 0x1a5390
// Method: EndLevelLayer::playCoinEffect
double __fastcall EndLevelLayer_playCoinEffect(__int64 a1, float a2)
{
  cocos2d::CCArray *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rcx
  struct cocos2d::CCObject *v12; // rax
  __int64 v13; // rax
  struct cocos2d::CCObject *v14; // rax
  __int64 v15; // rax
  double result; // xmm0_8
  char v17; // [rsp+90h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 440) ) /*0x1a5399*/
  {
    v3 = *(cocos2d::CCArray **)(a1 + 424); /*0x1a53b4*/
    if ( v3 ) /*0x1a53be*/
    {
      if ( cocos2d::CCArray::count(v3) ) /*0x1a53c4*/
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 120LL))(*(_QWORD *)(a1 + 440)); /*0x1a5404*/
        v5 = sub_200810(v4); /*0x1a5407*/
        v6 = *(_QWORD *)(a1 + 416); /*0x1a540c*/
        *(_DWORD *)(a1 + 576) = 0; /*0x1a5415*/
        v7 = v5; /*0x1a541e*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 352LL))(v6); /*0x1a5427*/
        *(_DWORD *)v7 = 1065353216; /*0x1a542d*/
        *(_QWORD *)(v7 + 4) = 1065353216; /*0x1a543a*/
        *(_QWORD *)(v7 + 12) = 0; /*0x1a5444*/
        *(_DWORD *)(v7 + 20) = 0; /*0x1a544b*/
        *(_QWORD *)(v7 + 32) = 0; /*0x1a544e*/
        *(_QWORD *)(v7 + 40) = 0; /*0x1a5452*/
        *(_DWORD *)(v7 + 64) = 1065353216; /*0x1a5456*/
        *(_DWORD *)(v7 + 68) = 1065353216; /*0x1a545d*/
        sub_1A32A0(a1, 0, *(_QWORD *)(a1 + 424), v4 + 464); /*0x1a546b*/
        v8 = *(_QWORD *)(a1 + 424); /*0x1a5470*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, (const struct cocos2d::CCPoint *)(v4 + 816)); /*0x1a5491*/
        sub_1FDCB0(v4, v8, v9, v10, 1065353216, -a2, -a2, 0, 0); /*0x1a54c6*/
        sub_200740(v4, *(_QWORD *)(a1 + 424)); /*0x1a54d5*/
        *(float *)(v7 + 8) = a2; /*0x1a54da*/
        *(float *)(v7 + 12) = a2; /*0x1a54e4*/
        v11 = *(_QWORD *)(a1 + 416); /*0x1a54ea*/
        *(float *)(a1 + 576) = a2; /*0x1a54f1*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 352LL))(v11); /*0x1a54fd*/
        GJTransformControl_updateButtons(a1, 0, 0); /*0x1a550b*/
        v12 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 512), 6u); /*0x1a551c*/
        v13 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v12 + 200LL))(v12); /*0x1a552f*/
        cocos2d::CCPoint::operator=(a1 + 456, v13); /*0x1a553b*/
        v14 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 512), 7u); /*0x1a554d*/
        v15 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v14 + 200LL))(v14); /*0x1a5560*/
        return cocos2d::CCPoint::operator=(a1 + 464, v15); /*0x1a556c*/
      }
    }
  }
  return result; /*0x1a5594*/
}

// [7/16] Address: 0x202bc0
// Method: EndLevelLayer::getCoinString
// Hidden C++ exception states: #wind=1
__int64 __fastcall EndLevelLayer_getCoinString(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // r12d
  int v6; // r13d
  int v7; // r14d
  char v8; // bl
  void **v9; // rdx
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  void *v13; // rcx
  void *Block[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-20h]
  unsigned __int64 v17; // [rsp+58h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 608) ) /*0x202bfc*/
  {
    *(_OWORD *)Block = 0; /*0x202c1c*/
    Block[0] = (void *)sub_3C460(32); /*0x202c32*/
    v16 = 17; /*0x202c36*/
    v17 = 31; /*0x202c3e*/
    strcpy((char *)Block[0], "<cy>all</c> coins"); /*0x202c4d*/
    v4 = *(int **)(*(_QWORD *)(a1 + 608) + 2168LL); /*0x202c65*/
    v5 = v4[270] - v4[271]; /*0x202c73*/
    v6 = v4[273] - v4[274]; /*0x202c81*/
    v7 = v4[276] - v4[277]; /*0x202c8f*/
    if ( v4[259] >= 2 && (v5 == 1 || v6 == 1 || v7 == 1) ) /*0x202cb7*/
    {
      v16 = 5; /*0x202cd4*/
      memmove(Block[0], "coin ", 5u); /*0x202cec*/
      *((_BYTE *)Block[0] + 5) = 0; /*0x202cf1*/
      v8 = 1; /*0x202da7*/
      if ( v5 != 1 ) /*0x202dad*/
      {
        v8 = 0; /*0x202daf*/
        sub_43D80(Block, "<cy>1</c>", 9u); /*0x202dc2*/
      }
      if ( v6 != 1 ) /*0x202dcb*/
      {
        if ( !v8 ) /*0x202dcf*/
          sub_43D80(Block, ", ", 2u); /*0x202de2*/
        v8 = 0; /*0x202de7*/
        sub_43D80(Block, "<cy>2</c>", 9u); /*0x202dfa*/
      }
      if ( v7 != 1 && *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 2168LL) + 1036LL) >= 3 ) /*0x202e1a*/
      {
        if ( !v8 ) /*0x202e1e*/
          sub_43D80(Block, ", ", 2u); /*0x202e31*/
        sub_43D80(Block, "<cy>3</c>", 9u); /*0x202e47*/
      }
    }
    v9 = Block; /*0x202e4c*/
    if ( v17 > 0xF ) /*0x202e55*/
      v9 = (void **)Block[0]; /*0x202e55*/
    v10 = cocos2d::CCString::createWithFormat("You need to <cg>collect</c> %s to verify the level!", (const char *)v9); /*0x202e61*/
    CString = cocos2d::CCString::getCString(v10); /*0x202e6a*/
    *(_OWORD *)a2 = 0; /*0x202e73*/
    *(_QWORD *)(a2 + 16) = 0; /*0x202e78*/
    *(_QWORD *)(a2 + 24) = 0; /*0x202e7c*/
    v12 = -1; /*0x202e80*/
    do /*0x202e8a*/
      ++v12; /*0x202e87*/
    while ( CString[v12] ); /*0x202e8a*/
    sub_3C230(a2); /*0x202e96*/
    if ( v17 > 0xF ) /*0x202ea4*/
    {
      v13 = Block[0]; /*0x202ea9*/
      if ( v17 + 1 >= 0x1000 ) /*0x202eb7*/
      {
        v13 = (void *)*((_QWORD *)Block[0] - 1); /*0x202ebd*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0x202ecc*/
          invoke_watson(0, 0, 0, 0, 0); /*0x202edd*/
      }
      j_j_free(v13); /*0x202ee4*/
    }
  }
  else
  {
    *(_OWORD *)a2 = 0; /*0x202c05*/
    *(_QWORD *)(a2 + 16) = 0; /*0x202c08*/
    *(_QWORD *)(a2 + 24) = 15; /*0x202c11*/
    *(_BYTE *)a2 = 0; /*0x202c15*/
  }
  return a2; /*0x202eec*/
}

// [8/16] Address: 0x202f20
// Method: EndLevelLayer::showLayer
// Hidden C++ exception states: #wind=1
__int64 __fastcall EndLevelLayer_showLayer(cocos2d::CCNode *a1, char a2)
{
  __int64 v4; // rcx
  char v5; // bl
  const struct cocos2d::CCPoint *v6; // rdx
  __int64 v7; // rdx
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCFiniteTimeAction *v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCAction *v11; // rax
  struct cocos2d::CCAction *v12; // rax
  cocos2d::CCArray *v13; // rcx
  void *v15; // [rsp+40h] [rbp+8h]

  v4 = qword_905FD0; /*0x202f3a*/
  if ( !qword_905FD0 ) /*0x202f44*/
  {
    v15 = operator new(0x6E8u); /*0x202f50*/
    qword_905FD0 = sub_2723A0(v15); /*0x202f5e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x202f6f*/
    v4 = qword_905FD0; /*0x202f71*/
  }
  v5 = 1; /*0x202f84*/
  if ( !GameManager_getGameVariable(v4, "0168") ) /*0x202f7f*/
    v5 = a2; /*0x202f8b*/
  cocos2d::CCNode::stopAllActions(*((cocos2d::CCNode **)a1 + 72)); /*0x202f95*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1096LL))(a1); /*0x202fa1*/
  v6 = (cocos2d::CCNode *)((char *)a1 + 544); /*0x202fa7*/
  if ( v5 ) /*0x202fb0*/
  {
    (*(void (__fastcall **)(_QWORD, const struct cocos2d::CCPoint *))(**((_QWORD **)a1 + 72) + 184LL))( /*0x202fbc*/
      *((_QWORD *)a1 + 72),
      v6);
    LOBYTE(v7) = 100; /*0x202fc9*/
    (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)a1 + 51) + 40LL))((_QWORD *)a1 + 51, v7); /*0x202fd2*/
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1112LL))(a1); /*0x202fdb*/
    sub_203980(a1); /*0x202fea*/
    sub_203E70(a1); /*0x202ff5*/
  }
  else
  {
    v8 = cocos2d::CCMoveTo::create(1.0, v6); /*0x20300a*/
    v9 = cocos2d::CCEaseBounceOut::create(v8); /*0x203019*/
    v10 = cocos2d::CCCallFunc::create(a1, sub_132EAC); /*0x203026*/
    v11 = cocos2d::CCSequence::create(v9, v10, 0); /*0x203035*/
    cocos2d::CCNode::runAction(*((cocos2d::CCNode **)a1 + 72), v11); /*0x203045*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)a1 + 51) + 40LL))((_QWORD *)a1 + 51, 0); /*0x20305b*/
    v12 = cocos2d::CCFadeTo::create(1.0, 0x64u); /*0x203063*/
    cocos2d::CCNode::runAction(a1, v12); /*0x20306f*/
    sub_203E70(a1); /*0x203083*/
    v13 = (cocos2d::CCArray *)*((_QWORD *)a1 + 79); /*0x203088*/
    if ( v13 ) /*0x203092*/
      cocos2d::CCArray::count(v13); /*0x203094*/
    sub_203980(a1); /*0x2030b9*/
  }
  sub_2043E0(a1); /*0x2030c4*/
  return sub_204890(a1); /*0x2030cf*/
}

// [9/16] Address: 0x203480
// Method: EndLevelLayer::onEdit
// Hidden C++ exception states: #wind=2
void __fastcall EndLevelLayer_onEdit(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct cocos2d::CCFiniteTimeAction *v5; // rax
  struct cocos2d::CCAction *v6; // rax
  void *v7; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 619) ) /*0x20348d*/
  {
    *(_BYTE *)(a1 + 619) = 1; /*0x20349a*/
    cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 608)); /*0x2034a8*/
    cocos2d::CCNode::unscheduleAllSelectors(*(cocos2d::CCNode **)(a1 + 608)); /*0x2034b5*/
    v2 = qword_905F60; /*0x2034bb*/
    if ( !qword_905F60 ) /*0x2034c5*/
    {
      v7 = operator new(0x8A8u); /*0x2034d1*/
      qword_905F60 = sub_5AE20(v7); /*0x2034df*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x2034f0*/
      v2 = qword_905F60; /*0x2034f2*/
    }
    v3 = *(_QWORD *)(v2 + 552); /*0x2034f9*/
    if ( v3 ) /*0x203503*/
      FMOD::ChannelControl::stop(v3); /*0x203505*/
    sub_3DB60(v2 + 1096); /*0x203512*/
    sub_3DB60(v2 + 1160); /*0x20351e*/
    sub_3DB60(v2 + 1224); /*0x20352a*/
    PlayLayer_removeAllObjects(*(_QWORD *)(a1 + 608)); /*0x203536*/
    v4 = cocos2d::CCCallFunc::create(a1, sub_203580); /*0x20354b*/
    v5 = cocos2d::CCDelayTime::create(0.0); /*0x203551*/
    v6 = cocos2d::CCSequence::create(v5, v4, 0); /*0x203560*/
    cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v6); /*0x20356c*/
  }
}

// [10/16] Address: 0x203650
// Method: EndLevelLayer::onHideLayer
struct cocos2d::CCAction *__fastcall EndLevelLayer_onHideLayer(__int64 a1)
{
  __int64 v2; // rdx
  struct cocos2d::CCActionInterval *v3; // rax
  struct cocos2d::CCAction *v4; // rbx
  unsigned __int8 v5; // dl
  struct cocos2d::CCAction *v6; // rbx

  *(_BYTE *)(a1 + 681) = *(_BYTE *)(a1 + 681) == 0; /*0x20366c*/
  cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(a1 + 576), 12341); /*0x203679*/
  cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 12341); /*0x203687*/
  v2 = 552; /*0x2036a1*/
  if ( !*(_BYTE *)(a1 + 681) ) /*0x20368d*/
    v2 = 544; /*0x2036a6*/
  v3 = cocos2d::CCMoveTo::create(1.0, (const struct cocos2d::CCPoint *)(a1 + v2)); /*0x2036ac*/
  v4 = cocos2d::CCEaseInOut::create(v3, 2.0); /*0x2036c8*/
  (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v4 + 64LL))(v4, 12341); /*0x2036d5*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 576), v4); /*0x2036e2*/
  v5 = 100; /*0x2036f8*/
  if ( *(_BYTE *)(a1 + 681) ) /*0x2036f2*/
    v5 = 0; /*0x2036fd*/
  v6 = cocos2d::CCFadeTo::create(1.0, v5); /*0x20370b*/
  (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v6 + 64LL))(v6, 12341); /*0x203718*/
  return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v6); /*0x203721*/
}

// [11/16] Address: 0x203740
// Method: EndLevelLayer::onRestartCheckpoint
// Hidden C++ exception states: #wind=4
void __fastcall EndLevelLayer_onRestartCheckpoint(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  cocos2d::CCEGLView *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  __int64 v10; // rbx
  struct cocos2d::CCFiniteTimeAction *v11; // rax
  struct cocos2d::CCAction *v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+48h] [rbp-10h]
  void *v16; // [rsp+60h] [rbp+8h]
  void *v17; // [rsp+60h] [rbp+8h]
  void *v18; // [rsp+70h] [rbp+18h]

  if ( !*(_BYTE *)(a1 + 619) ) /*0x20374d*/
  {
    *(_BYTE *)(a1 + 619) = 1; /*0x20375a*/
    v2 = qword_905FD0; /*0x203761*/
    if ( !qword_905FD0 ) /*0x20376b*/
    {
      v16 = operator new(0x6E8u); /*0x203777*/
      qword_905FD0 = sub_2723A0(v16); /*0x203785*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x203796*/
      v2 = qword_905FD0; /*0x203798*/
    }
    if ( !GameManager_getGameVariable(v2, "0024") ) /*0x2037a6*/
    {
      v4 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(v3); /*0x2037af*/
      cocos2d::CCEGLView::showCursor(v4, 0); /*0x2037ba*/
    }
    v5 = qword_905F60; /*0x2037c0*/
    if ( !qword_905F60 ) /*0x2037ca*/
    {
      v17 = operator new(0x8A8u); /*0x2037d6*/
      qword_905F60 = sub_5AE20(v17); /*0x2037e4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x2037f5*/
      v5 = qword_905F60; /*0x2037f7*/
    }
    FMODAudioEngine_clearAllAudio(v5); /*0x2037fe*/
    v6 = *(_QWORD *)(a1 + 608); /*0x203803*/
    if ( *(_BYTE *)(v6 + 13088) && !*(_BYTE *)(v6 + 13089) ) /*0x203813*/
      sub_515470(); /*0x20381c*/
    v13 = 0; /*0x20382e*/
    *(_QWORD *)&v13 = sub_3C460(32); /*0x203849*/
    v14 = 16; /*0x20384e*/
    v15 = 31; /*0x203857*/
    strcpy((char *)v13, "playSound_01.ogg"); /*0x203867*/
    v9 = qword_905F60; /*0x20386e*/
    if ( !qword_905F60 ) /*0x203878*/
    {
      v18 = operator new(0x8A8u); /*0x203884*/
      qword_905F60 = sub_5AE20(v18); /*0x203892*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x2038a3*/
      v9 = qword_905F60; /*0x2038a5*/
    }
    FMODAudioEngine_playEffect_0(v9, (__int64)&v13, v7, v8, 1050253722); /*0x2038ca*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1072LL))(a1, 0); /*0x2038d7*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 920LL))(a1, 0); /*0x2038e5*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1008LL))(a1, 0); /*0x2038f3*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x203901*/
    v10 = cocos2d::CCCallFunc::create(*(_QWORD *)(a1 + 608), sub_2058A4); /*0x20391b*/
    v11 = cocos2d::CCDelayTime::create(0.5); /*0x203926*/
    v12 = cocos2d::CCSequence::create(v11, v10, 0); /*0x20393b*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v12 + 64LL))(v12, 16); /*0x20394d*/
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 608), v12); /*0x20395a*/
  }
}

// [12/16] Address: 0x203970
// Method: EndLevelLayer::keyBackClicked
__int64 __fastcall EndLevelLayer_keyBackClicked(__int64 a1)
{
  return sub_203300(a1 - 336, 0);
}

// [13/16] Address: 0x203d20
// Method: EndLevelLayer::starEnterFinished
__int64 __fastcall EndLevelLayer_starEnterFinished(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  __int64 v4; // rax
  struct cocos2d::CCParticleSystemQuad *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCParticleSystemQuad *v7; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // cl
  __int64 v14; // rax
  __int16 v15; // [rsp+40h] [rbp+8h] BYREF
  char v16; // [rsp+48h] [rbp+10h] BYREF

  result = *(_QWORD *)(a1 + 608); /*0x203d26*/
  if ( result ) /*0x203d33*/
  {
    v3 = *(_DWORD *)(*(_QWORD *)(result + 2168) + 972LL); /*0x203d5a*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, 0.0, 8.0); /*0x203d60*/
    cocos2d::CCPoint::operator+(a1 + 640, &v16, v4); /*0x203d75*/
    v5 = cocos2d::CCParticleSystemQuad::create("starEffect.plist", 0); /*0x203d84*/
    LOBYTE(v6) = 1; /*0x203d8a*/
    v7 = v5; /*0x203d8c*/
    (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(*(_QWORD *)v5 + 1544LL))(v5, v6); /*0x203d9c*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCParticleSystemQuad *, __int64))(**(_QWORD **)(a1 + 576) + 456LL))( /*0x203db9*/
      *(_QWORD *)(a1 + 576),
      v7,
      9);
    (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, char *))(*(_QWORD *)v7 + 184LL))(v7, &v16); /*0x203dc7*/
    v11 = CCCircleWave_create(v9, v8, v10, 0, 1); /*0x203ded*/
    v12 = v11; /*0x203df5*/
    if ( v3 == 5 ) /*0x203dfd*/
    {
      v15 = -256; /*0x203dff*/
      v13 = -1; /*0x203e06*/
    }
    else
    {
      v15 = -1; /*0x203e0a*/
      v13 = 0; /*0x203e11*/
    }
    *(_WORD *)(v11 + 340) = v15; /*0x203e1d*/
    v14 = *(_QWORD *)v11; /*0x203e24*/
    *(_BYTE *)(v12 + 342) = v13; /*0x203e27*/
    (*(void (__fastcall **)(__int64, char *))(v14 + 184))(v12, &v16); /*0x203e30*/
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 576) + 456LL))(*(_QWORD *)(a1 + 576), v12, 9); /*0x203e49*/
    return sub_204D40(a1); /*0x203e52*/
  }
  return result; /*0x203e5c*/
}

// [15/16] Address: 0x205000
// Method: EndLevelLayer::keyDown
__int64 __fastcall EndLevelLayer_keyDown(__int64 a1, int a2)
{
  __int64 v2; // r8

  if ( a2 != 27 ) /*0x205007*/
  {
    v2 = (unsigned int)(a2 - 32); /*0x205009*/
    if ( a2 == 32 ) /*0x20500d*/
      return sub_2030F0(a1 - 344, 0, v2); /*0x20500d*/
    v2 = (unsigned int)(a2 - 1001); /*0x20500f*/
    if ( a2 == 1001 ) /*0x205016*/
      return sub_2030F0(a1 - 344, 0, v2); /*0x205034*/
    v2 = (unsigned int)(a2 - 1003); /*0x205018*/
    if ( a2 != 1003 ) /*0x20501c*/
    {
      if ( a2 != 1009 ) /*0x205022*/
        return cocos2d::CCLayer::keyDown(); /*0x205024*/
      return sub_2030F0(a1 - 344, 0, v2); /*0x205022*/
    }
  }
  return sub_203300(a1 - 344, 0);
}

// [16/16] Address: 0x451b40
// Method: EndLevelLayer::playEndEffect
// Hidden C++ exception states: #wind=8
__int64 __fastcall EndLevelLayer_playEndEffect(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // xmm0_8
  unsigned __int16 v5; // ax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int128 v31; // [rsp+30h] [rbp-99h] BYREF
  __int64 v32; // [rsp+40h] [rbp-89h]
  __int64 v33; // [rsp+48h] [rbp-81h] BYREF
  char v34; // [rsp+54h] [rbp-75h]
  char v35; // [rsp+55h] [rbp-74h]
  char v36; // [rsp+56h] [rbp-73h]
  __int128 v37; // [rsp+58h] [rbp-71h] BYREF
  __int64 v38; // [rsp+68h] [rbp-61h]
  __int64 v39; // [rsp+70h] [rbp-59h] BYREF
  char v40; // [rsp+7Ch] [rbp-4Dh]
  char v41; // [rsp+7Dh] [rbp-4Ch]
  char v42; // [rsp+7Eh] [rbp-4Bh]
  _BYTE v43[40]; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v44[40]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v45[80]; // [rsp+D0h] [rbp+7h] BYREF
  __int128 *v46; // [rsp+140h] [rbp+77h] BYREF
  void *v47; // [rsp+148h] [rbp+7Fh]

  if ( !(_QWORD)xmmword_8F84E8 ) /*0x451b63*/
  {
    v46 = &v37; /*0x451b69*/
    v37 = 0; /*0x451b70*/
    v38 = 0; /*0x451b74*/
    v39 = 15; /*0x451b7c*/
    LOBYTE(v37) = 0; /*0x451b84*/
    v4 = 0x20676E6968746F4ELL; /*0x451b88*/
    DWORD2(v31) = 1768976227; /*0x451b96*/
    v5 = 25701; /*0x451b9a*/
    v6 = *a1; /*0x451ba1*/
LABEL_38:
    HIDWORD(v31) = v5; /*0x452166*/
    *(_QWORD *)&v31 = v4; /*0x45216b*/
    v32 = 14; /*0x452171*/
    goto LABEL_39; /*0x452171*/
  }
  v7 = sub_446FB0(&xmmword_8F84D8); /*0x451bb0*/
  v8 = v7; /*0x451bb5*/
  if ( !v7 || *(int *)(v7 + 56) < 1 || (v9 = *(_QWORD *)(v7 + 144), *(_QWORD *)(v7 + 136) == v9) ) /*0x451bd9*/
  {
    v46 = &v37; /*0x45212b*/
    v37 = 0; /*0x452132*/
    v38 = 0; /*0x452136*/
    v39 = 15; /*0x45213e*/
    LOBYTE(v37) = 0; /*0x452146*/
    v4 = 0x2064696C61766E49LL; /*0x45214a*/
    DWORD2(v31) = 1718513507; /*0x452158*/
    v5 = 26473; /*0x45215c*/
    v6 = *a1; /*0x452163*/
    goto LABEL_38; /*0x452163*/
  }
  if ( a1[126] ) /*0x451bdf*/
  {
    sub_4523C0(a1, v7); /*0x451bef*/
  }
  else
  {
    v10 = cocos2d::CCDirector::sharedDirector(v9); /*0x451bf9*/
    cocos2d::CCDirector::getWinSize(v10, &v46); /*0x451c06*/
    v12 = *(_QWORD *)(v8 + 136); /*0x451c13*/
    v13 = *(_QWORD *)(v8 + 144) - v12; /*0x451c1a*/
    if ( *((_BYTE *)a1 + 1000) ) /*0x451c1d*/
    {
      if ( v13 / 60 ) /*0x451cd0*/
      {
        v17 = qword_905FD0; /*0x451cd5*/
        if ( !qword_905FD0 ) /*0x451cdf*/
        {
          v47 = operator new(0x6E8u); /*0x451ceb*/
          qword_905FD0 = sub_2723A0(v47); /*0x451cf8*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x451d09*/
          v17 = qword_905FD0; /*0x451d0b*/
        }
        v18 = sub_447990(v8, v44, *(_QWORD *)(v8 + 136), &v46); /*0x451d24*/
        sub_4521E0(v17 + 1348, v18); /*0x451d33*/
      }
      v19 = *(_QWORD *)(v8 + 136); /*0x451d38*/
      if ( (unsigned __int64)((*(_QWORD *)(v8 + 144) - v19) / 60) > 1 ) /*0x451d64*/
      {
        sub_447990(v8, &v37, v19 + 60, &v46); /*0x451d79*/
        *((float *)&v39 + 1) = *(float *)&v46 - *((float *)&v39 + 1); /*0x451d88*/
        v20 = qword_905FD0; /*0x451d8d*/
        if ( !qword_905FD0 ) /*0x451d97*/
        {
          v47 = operator new(0x6E8u); /*0x451da3*/
          qword_905FD0 = sub_2723A0(v47); /*0x451db0*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x451dc1*/
          v20 = qword_905FD0; /*0x451dc3*/
        }
        *(_OWORD *)(v20 + 1388) = v37; /*0x451dcd*/
        *(_QWORD *)(v20 + 1404) = v38; /*0x451df9*/
        *(_WORD *)(v20 + 1412) = v39; /*0x451e10*/
        cocos2d::CCPoint::operator=(v20 + 1416, (char *)&v39 + 4); /*0x451e2b*/
        *(_BYTE *)(v20 + 1424) = v40; /*0x451e35*/
        *(_BYTE *)(v20 + 1425) = v41; /*0x451e3f*/
        *(_BYTE *)(v20 + 1426) = v42; /*0x451e49*/
      }
      v21 = *(_QWORD *)(v8 + 136); /*0x451e4f*/
      if ( (unsigned __int64)((*(_QWORD *)(v8 + 144) - v21) / 60) > 2 ) /*0x451e7b*/
      {
        v22 = v21 + 120; /*0x451e7d*/
        v23 = qword_905FD0; /*0x451e81*/
        if ( !qword_905FD0 ) /*0x451e8b*/
        {
          v47 = operator new(0x6E8u); /*0x451e97*/
          qword_905FD0 = sub_2723A0(v47); /*0x451ea4*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x451eb5*/
          v23 = qword_905FD0; /*0x451eb7*/
        }
        v24 = sub_447990(v8, v45, v22, &v46); /*0x451ecc*/
        sub_4521E0(v23 + 1428, v24); /*0x451edb*/
      }
      v11 = *(_QWORD *)(v8 + 136); /*0x451ee0*/
      v14 = (*(_QWORD *)(v8 + 144) - v11) / 60; /*0x451f05*/
      if ( v14 > 3 ) /*0x451f0c*/
      {
        sub_447990(v8, &v31, v11 + 180, &v46); /*0x451f25*/
        *((float *)&v33 + 1) = *(float *)&v46 - *((float *)&v33 + 1); /*0x451f34*/
        v25 = qword_905FD0; /*0x451f39*/
        if ( !qword_905FD0 ) /*0x451f43*/
        {
          v47 = operator new(0x6E8u); /*0x451f4f*/
          qword_905FD0 = sub_2723A0(v47); /*0x451f5c*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x451f6d*/
          v25 = qword_905FD0; /*0x451f6f*/
        }
        *(_OWORD *)(v25 + 1468) = v31; /*0x451f7a*/
        *(_QWORD *)(v25 + 1484) = v32; /*0x451faa*/
        *(_WORD *)(v25 + 1492) = v33; /*0x451fc3*/
        cocos2d::CCPoint::operator=(v25 + 1496, (char *)&v33 + 4); /*0x451fde*/
        *(_BYTE *)(v25 + 1504) = v34; /*0x451fe8*/
        *(_BYTE *)(v25 + 1505) = v35; /*0x451ff2*/
        *(_BYTE *)(v25 + 1506) = v36; /*0x451ffc*/
      }
    }
    else
    {
      v14 = v13 / 60; /*0x451c45*/
      if ( v13 / 60 ) /*0x451c45*/
      {
        v15 = qword_905FD0; /*0x451c4e*/
        if ( !qword_905FD0 ) /*0x451c58*/
        {
          v47 = operator new(0x6E8u); /*0x451c64*/
          qword_905FD0 = sub_2723A0(v47); /*0x451c71*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x451c82*/
          v15 = qword_905FD0; /*0x451c84*/
        }
        v16 = sub_447990(v8, v43, v12, &v46); /*0x451c99*/
        sub_4521E0(v15 + 1308, v16); /*0x451ca8*/
      }
    }
    if ( !*((_BYTE *)a1 + 1000) ) /*0x452002*/
    {
      v26 = *(_DWORD *)(v8 + 68); /*0x45200b*/
      v27 = qword_905FD0; /*0x45200e*/
      if ( !qword_905FD0 ) /*0x452018*/
      {
        v47 = operator new(0x6E8u); /*0x452024*/
        qword_905FD0 = sub_2723A0(v47); /*0x452031*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x452042*/
        v27 = qword_905FD0; /*0x452044*/
      }
      LOBYTE(v11) = v26 != 0; /*0x45204d*/
      sub_27ACB0(v27, "0113", v11); /*0x452058*/
    }
    v28 = qword_905FD0; /*0x45205d*/
    if ( !qword_905FD0 ) /*0x452067*/
    {
      v47 = operator new(0x6E8u); /*0x452073*/
      qword_905FD0 = sub_2723A0(v47); /*0x452080*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x452091*/
      v28 = qword_905FD0; /*0x452093*/
    }
    sub_27EFB0(v28, v14); /*0x45209a*/
  }
  *((_BYTE *)a1 + 1328) = 1; /*0x45209f*/
  sub_44EA90(a1); /*0x4520a9*/
  sub_44E420(a1); /*0x4520b1*/
  sub_44F770(a1); /*0x4520b9*/
  sub_44F8F0(a1); /*0x4520c1*/
  sub_44F5F0(a1); /*0x4520c9*/
  sub_44F6F0(a1); /*0x4520d1*/
  v46 = &v37; /*0x4520da*/
  v37 = 0; /*0x4520e1*/
  v38 = 0; /*0x4520e5*/
  v39 = 15; /*0x4520ed*/
  LOBYTE(v37) = 0; /*0x4520f5*/
  v31 = 0; /*0x4520f9*/
  v32 = 6; /*0x4520fe*/
  strcpy((char *)&v31, "Pasted"); /*0x45210d*/
  v6 = *a1; /*0x452122*/
LABEL_39:
  v33 = 15; /*0x452181*/
  v29 = sub_3A4CA0(&v31, a2, a3, 150, &v37); /*0x4521ae*/
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v6 + 456))(a1, v29, 100); /*0x4521c5*/
}
