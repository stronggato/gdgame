#include <Geode/binding/RetryLevelLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/6] Address: 0x55c6c0
// Method: RetryLevelLayer::showLayer
struct cocos2d::CCAction *__fastcall RetryLevelLayer_showLayer(cocos2d::CCNode *a1, char a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCFiniteTimeAction *v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCAction *v11; // rax
  struct cocos2d::CCAction *v12; // rax

  cocos2d::CCNode::stopAllActions(*((cocos2d::CCNode **)a1 + 72)); /*0x55c6dc*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1096LL))(a1); /*0x55c6e8*/
  v4 = (__int64 *)*((_QWORD *)a1 + 72); /*0x55c6ee*/
  v5 = *v4; /*0x55c6f5*/
  if ( a2 ) /*0x55c6fa*/
  {
    (*(void (__fastcall **)(__int64 *, __int64))(v5 + 184))(v4, (__int64)a1 + 544); /*0x55c703*/
    LOBYTE(v6) = 100; /*0x55c717*/
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)a1 + 51) + 40LL))((__int64)a1 + 408, v6); /*0x55c719*/
    return (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1112LL))(a1); /*0x55c731*/
  }
  else
  {
    (*(void (**)(void))(v5 + 160))(); /*0x55c740*/
    v8 = cocos2d::CCScaleTo::create(0.5, 1.0); /*0x55c756*/
    v9 = cocos2d::CCEaseElasticOut::create(v8, 0.60000002); /*0x55c777*/
    v10 = cocos2d::CCCallFunc::create(a1, sub_132EAC); /*0x55c77a*/
    v11 = cocos2d::CCSequence::create(v9, v10, 0); /*0x55c789*/
    cocos2d::CCNode::runAction(*((cocos2d::CCNode **)a1 + 72), v11); /*0x55c799*/
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)a1 + 51) + 40LL))((__int64)a1 + 408, 0); /*0x55c7af*/
    v12 = cocos2d::CCFadeTo::create(0.5, 0x64u); /*0x55c7bc*/
    return cocos2d::CCNode::runAction(a1, v12); /*0x55c7d7*/
  }
}

// [3/6] Address: 0x55c7e0
// Method: RetryLevelLayer::enterAnimFinished
// Hidden C++ exception states: #wind=3
void RetryLevelLayer_enterAnimFinished()
{
  void *v0; // rax

  if ( !qword_905FD0 ) /*0x55c7ec*/
  {
    v0 = operator new(0x6E8u); /*0x55c7f3*/
    qword_905FD0 = sub_2723A0(v0); /*0x55c806*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x55c81b*/
  }
}

// [4/6] Address: 0x55c830
// Method: RetryLevelLayer::rewardedVideoFinished
void __fastcall RetryLevelLayer_rewardedVideoFinished(__int64 a1)
{
  *(_BYTE *)(a1 + 17) = 0; /*0x55c830*/
}

// [5/6] Address: 0x55c910
// Method: RetryLevelLayer::keyDown
__int64 __fastcall RetryLevelLayer_keyDown(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)(a2 - 27); /*0x55c913*/
  if ( a2 != 27 ) /*0x55c917*/
  {
    v2 = (unsigned int)(a2 - 32); /*0x55c919*/
    if ( a2 == 32 ) /*0x55c91d*/
      return sub_55C840(a1 - 344, 0, v2); /*0x55c91d*/
    v2 = (unsigned int)(a2 - 1001); /*0x55c91f*/
    if ( a2 == 1001 ) /*0x55c926*/
      return sub_55C840(a1 - 344, 0, v2); /*0x55c944*/
    v2 = (unsigned int)(a2 - 1003); /*0x55c928*/
    if ( a2 != 1003 ) /*0x55c92c*/
    {
      if ( a2 != 1009 ) /*0x55c932*/
        return cocos2d::CCLayer::keyDown(a1); /*0x55c934*/
      return sub_55C840(a1 - 344, 0, v2); /*0x55c932*/
    }
  }
  return sub_55C960(a1 - 344, 0, v2);
}

// [6/6] Address: 0x55ca80
// Method: RetryLevelLayer::keyBackClicked
__int64 __fastcall RetryLevelLayer_keyBackClicked(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 288) ) /*0x55ca80*/
  {
    *(_BYTE *)(a1 + 288) = 1; /*0x55ca89*/
    return sub_55C960(a1 - 336, 0, a3); /*0x55ca99*/
  }
  return result; /*0x55ca9e*/
}

// Address: 0x55bc60
// Method: RetryLevelLayer::customSetup
// Hidden C++ exception states: #wind=5
double __fastcall RetryLevelLayer_customSetup(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  const char *v4; // rcx
  struct cocos2d::CCLabelBMFont *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v14; // rsi
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  int v18; // r10d
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  cocos2d::CCString *v21; // rax
  const char *v22; // rax
  struct cocos2d::CCLabelBMFont *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  cocos2d::CCObject *v37; // r12
  __int64 v38; // rax
  int v39; // eax
  cocos2d::CCObject *v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  struct cocos2d::CCSprite *v43; // r14
  __int64 (__fastcall *v44)(cocos2d::CCObject *); // rdi
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  struct cocos2d::CCSprite *v50; // r14
  __int64 (__fastcall *v51)(cocos2d::CCObject *); // rdi
  __int64 v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  void *v59; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v60[8]; // [rsp+28h] [rbp-31h] BYREF
  float v61; // [rsp+30h] [rbp-29h] BYREF
  float v62; // [rsp+34h] [rbp-25h]
  _BYTE v63[8]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v64[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v65[8]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v66[3]; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp+Fh]

  v2 = cocos2d::CCDirector::sharedDirector(a1);
  cocos2d::CCDirector::getWinSize(v2, &v61);
  v3 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v59 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v59);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v3 = qword_905FD0;
  }
  sub_3E4F0(v66, *(_QWORD *)(*(_QWORD *)(v3 + 560) + 2168LL) + 344LL);
  v4 = (const char *)v66;
  if ( v67 > 0xF )
    v4 = (const char *)v66[0];
  v5 = cocos2d::CCLabelBMFont::create(v4, (const char *)&qword_6FFF68);
  sub_3C310(v66);
  v6 = *(_QWORD *)v5;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v59, v61 * 0.5, (float)((float)(v62 * 0.5) + 80.0) - 15.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v6 + 184))(v5, v7);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 576) + 464LL))(
    *(_QWORD *)(a1 + 576),
    v5);
  cocos2d::CCLabelBMFont::limitLabelWidth(v5, 320.0, 0.0, 0.0);
  sub_55C400(a1);
  LOBYTE(v8) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 576) + 552LL))(*(_QWORD *)(a1 + 576), 0, v8);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 576) + 552LL))(*(_QWORD *)(a1 + 576), 1, v9);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 560) + 336LL))(*(_QWORD *)(a1 + 560), 0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v59, 0.0, 5.0);
  cocos2d::CCPoint::operator+(a1 + 544, v60, v10);
  cocos2d::CCPoint::operator=(a1 + 544, v60);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v65, v61 * 0.5, (float)((float)(v62 * 0.5) - 10.0) - 15.0);
  v11 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v59 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v59);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v11 = qword_905FD0;
  }
  v12 = cocos2d::CCString::createWithFormat("Jumps: %i", *(_DWORD *)(*(_QWORD *)(v11 + 560) + 15368LL));
  CString = cocos2d::CCString::getCString(v12);
  v14 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt");
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 576) + 456LL))(
    *(_QWORD *)(a1 + 576),
    v14,
    3);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v14 + 184LL))(v14, v65);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v14 + 160LL))(v14);
  v15 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v59 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v59);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v15 = qword_905FD0;
  }
  v16 = (int)*(double *)(*(_QWORD *)(v15 + 560) + 968LL);
  v17 = v16 % 60;
  v18 = v16 / 60 % 60;
  if ( v16 / 3600 )
    v19 = cocos2d::CCString::createWithFormat("%02d:%02d:%02d", v16 / 3600, v18, v17);
  else
    v19 = cocos2d::CCString::createWithFormat("%02d:%02d", v18, v17);
  v20 = cocos2d::CCString::getCString(v19);
  v21 = cocos2d::CCString::createWithFormat("Time: %s", v20);
  v22 = cocos2d::CCString::getCString(v21);
  v23 = cocos2d::CCLabelBMFont::create(v22, "goldFont.fnt");
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 576) + 456LL))(
    *(_QWORD *)(a1 + 576),
    v23,
    3);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v59, 0.0, -24.0);
  v25 = v24;
  v26 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v14 + 200LL))(v14);
  cocos2d::CCPoint::operator+(v26, v60, v25);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v23 + 184LL))(v23, v60);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v23 + 160LL))(v23);
  v31 = cocos2d::CCMenu::create(v28, v27, v29, v30);
  *(_QWORD *)(a1 + 616) = v31;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 576) + 456LL))(*(_QWORD *)(a1 + 576), v31, 1);
  v32 = *(_QWORD *)(a1 + 576);
  v33 = *(_QWORD *)(a1 + 616);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v59, v61 * 0.5, (float)((float)(v62 * 0.5) - 115.0) - 10.0);
  cocos2d::CCNode::convertToWorldSpace(v32, v60, v34);
  cocos2d::CCNode::convertToNodeSpace(v33, v64, v35);
  v36 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_replayBtn_001.png");
  v37 = CCMenuItemSpriteExtra_create(v36, 0, a1, (__int64)sub_55C840);
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 616) + 464LL))(*(_QWORD *)(a1 + 616), v37);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v59, -100.0, 0.0);
  cocos2d::CCPoint::operator+(v64, v60, v38);
  (*(void (__fastcall **)(cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v37 + 184LL))(v37, v60);
  v39 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_menuBtn_001.png");
  v40 = CCMenuItemSpriteExtra_create(v39, 0, a1, (__int64)sub_55C960);
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 616) + 464LL))(*(_QWORD *)(a1 + 616), v40);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v59, 100.0, 0.0);
  cocos2d::CCPoint::operator+(v64, v60, v41);
  (*(void (__fastcall **)(cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v40 + 184LL))(v40, v60);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 576) + 184LL))(*(_QWORD *)(a1 + 576), a1 + 544);
  if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v42) + 209) )
  {
    v43 = cocos2d::CCSprite::createWithSpriteFrameName("controllerBtn_Start_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 576) + 456LL))(
      *(_QWORD *)(a1 + 576),
      v43,
      10);
    v44 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v37 + 504LL);
    v45 = *(_QWORD *)(a1 + 576);
    v46 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v37 + 200LL))(v37);
    v47 = v44(v37);
    cocos2d::CCNode::convertToWorldSpace(v47, &v59, v46);
    cocos2d::CCNode::convertToNodeSpace(v45, v60, v48);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v63, 0.0, -25.0);
    cocos2d::CCPoint::operator+(v60, &v59, v49);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v43 + 184LL))(v43, &v59);
    v50 = cocos2d::CCSprite::createWithSpriteFrameName("controllerBtn_B_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 576) + 456LL))(
      *(_QWORD *)(a1 + 576),
      v50,
      10);
    v51 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v40 + 504LL);
    v52 = *(_QWORD *)(a1 + 576);
    v53 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v40 + 200LL))(v40);
    v54 = v51(v40);
    cocos2d::CCNode::convertToWorldSpace(v54, v63, v53);
    cocos2d::CCNode::convertToNodeSpace(v52, &v59, v55);
    cocos2d::CCPoint::operator=(v60, v56);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v63, 0.0, -25.0);
    cocos2d::CCPoint::operator+(v60, &v59, v57);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v50 + 184LL))(v50, &v59);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v50 + 160LL))(v50);
  }
  HIWORD(v66[1]) = 0;
  v66[2] = 13;
  v67 = 15;
  strcpy((char *)v66, "Geometry Dash");
  return sub_3C310(v66);
}

// Address: 0xd450b
// Method: RetryLevelLayer::setupLastProgress
// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_D4500(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // esi
  __int64 v5; // rcx
  void (__fastcall **v6)(__int64, const char *); // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  float v11; // xmm8_4
  __int64 v12; // rdi
  float v13; // xmm7_4
  float *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  result = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v17 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v17);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    result = *(_QWORD *)&qword_905FB0;
  }
  v4 = *(_DWORD *)(result + 548);
  v5 = *(_QWORD *)(a1 + 768);
  if ( v5 )
  {
    LOBYTE(a2) = v4 > 0;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 336LL))(v5, a2);
    if ( v4 > 0 )
    {
      v6 = *(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 776) + 360LL);
      v7 = *(_QWORD *)(a1 + 776);
      v8 = 99;
      if ( v4 < 99 )
        v8 = (unsigned int)v4;
      v9 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v8);
      CString = cocos2d::CCString::getCString(v9);
      (*v6)(v7 + 360, CString);
      v11 = 0.0;
      cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 776), 28.0, 0.80000001, 0.0);
      if ( v4 == 1 )
        v11 = -0.5;
      v12 = **(_QWORD **)(a1 + 776);
      v13 = (float)(*(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 768) + 320LL))(*(_QWORD *)(a1 + 768))
                             + 4)
                  * 0.5)
          + 1.0;
      v14 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 768) + 320LL))(*(_QWORD *)(a1 + 768));
      v15 = *(_QWORD *)(a1 + 776);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, (float)(*v14 * 0.5) + v11, v13);
      return (*(__int64 (__fastcall **)(__int64, __int64))(v12 + 184))(v15, v16);
    }
  }
  return result;
}
