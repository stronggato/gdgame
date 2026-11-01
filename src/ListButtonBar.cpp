#include <Geode/binding/ListButtonBar.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x76aa0
// Method: ListButtonBar::~ListButtonBar
cocos2d::CCNode *__fastcall ListButtonBar__dtor_ListButtonBar(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &ListButtonBar::`vftable'; /*0x76ab6*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 41); /*0x76ab9*/
  if ( v4 ) /*0x76ac3*/
    cocos2d::CCObject::release(v4); /*0x76ac5*/
  cocos2d::CCNode::~CCNode(Block); /*0x76ace*/
  if ( (a2 & 1) != 0 ) /*0x76ad9*/
    j_j_free(Block); /*0x76ae3*/
  return Block; /*0x76aeb*/
}

// [2/6] Address: 0x76b40
// Method: ListButtonBar::create
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall ListButtonBar_create(
        int a1,
        const struct cocos2d::CCPoint *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  cocos2d::CCNode *v12; // r14
  int v13; // eax
  cocos2d::CCNode *v15; // [rsp+50h] [rbp-18h] BYREF

  v12 = (cocos2d::CCNode *)operator new(0x160u); /*0x76b70*/
  v15 = v12; /*0x76b73*/
  cocos2d::CCNode::CCNode(v12); /*0x76b7b*/
  *(_QWORD *)v12 = &ListButtonBar::`vftable'; /*0x76b88*/
  *((_QWORD *)v12 + 40) = 0; /*0x76b8b*/
  *((_QWORD *)v12 + 41) = 0; /*0x76b96*/
  *((_QWORD *)v12 + 42) = 0; /*0x76ba1*/
  *((_BYTE *)v12 + 344) = 0; /*0x76bac*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, a2); /*0x76bbc*/
  if ( (unsigned __int8)ListButtonBar_init((_DWORD)v12, a1, v13, a3, a4, a5, a6, a7, a8) ) /*0x76c0e*/
  {
    cocos2d::CCObject::autorelease(v12); /*0x76c1a*/
    return v12; /*0x76c20*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1); /*0x76c34*/
    return 0; /*0x76c37*/
  }
}

// [3/6] Address: 0x76c60
// Method: ListButtonBar::init
// Hidden C++ exception states: #wind=2
char __fastcall ListButtonBar_init(
        void *a1,
        cocos2d::CCArray *a2,
        const struct cocos2d::CCPoint *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10)
{
  int v10; // ebp
  void *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  cocos2d::CCObject *v15; // rax
  __int64 v16; // rcx
  cocos2d::CCArray *v17; // rsi
  __int64 v18; // rcx
  struct cocos2d::CCObject *v19; // rax
  unsigned int v20; // r15d
  int v21; // r14d
  unsigned int v22; // edi
  unsigned int v23; // r12d
  struct cocos2d::CCObject *v24; // rbx
  cocos2d::CCArray *v25; // rbp
  int v26; // r14d
  __int64 v27; // rcx
  struct cocos2d::CCObject *v28; // rdx
  cocos2d::CCArray *v29; // rcx
  cocos2d::CCArray *v30; // rax
  struct cocos2d::CCObject *v31; // rbp
  unsigned int v32; // edi
  unsigned int v33; // eax
  const struct cocos2d::CCPoint *v34; // r15
  int v35; // xmm6_4
  int v36; // xmm7_4
  int v37; // xmm8_4
  unsigned int v38; // ebx
  int v39; // eax
  struct cocos2d::CCObject *v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rcx
  cocos2d::CCDirector *v45; // rax
  float v46; // xmm0_4
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rsi
  cocos2d::CCString *v54; // rax
  const char *CString; // rbp
  struct cocos2d::CCSprite *v56; // rbx
  cocos2d::CCObject *v57; // rdi
  float v58; // xmm7_4
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  cocos2d::CCSprite *v62; // rbx
  cocos2d::CCObject *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  float v68; // [rsp+40h] [rbp-88h] BYREF
  char v69[8]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v70[32]; // [rsp+50h] [rbp-78h] BYREF
  void *v71; // [rsp+D0h] [rbp+8h] BYREF
  const struct cocos2d::CCPoint *v72; // [rsp+E0h] [rbp+18h]
  int v73; // [rsp+E8h] [rbp+20h]

  v73 = a4; /*0x76c67*/
  v72 = a3; /*0x76c6b*/
  v71 = a1; /*0x76c6f*/
  v10 = a4; /*0x76c92*/
  v12 = a1; /*0x76c98*/
  v13 = cocos2d::CCDirector::sharedDirector(a1); /*0x76c9b*/
  cocos2d::CCDirector::getWinSize(v13, &v68); /*0x76ca9*/
  v15 = (cocos2d::CCObject *)cocos2d::CCArray::create(v14); /*0x76caf*/
  *((_QWORD *)v12 + 41) = v15; /*0x76cb5*/
  cocos2d::CCObject::retain(v15); /*0x76cc0*/
  v17 = (cocos2d::CCArray *)cocos2d::CCArray::create(v16); /*0x76ccc*/
  v19 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v18); /*0x76ccf*/
  cocos2d::CCArray::addObject(v17, v19); /*0x76cdb*/
  v20 = 0; /*0x76ce1*/
  v21 = a5; /*0x76ce6*/
  a10 = a5 * v10; /*0x76cf2*/
  v22 = 0; /*0x76cf9*/
  if ( cocos2d::CCArray::count(a2) ) /*0x76cfe*/
  {
    v23 = a10; /*0x76d0c*/
    do /*0x76d93*/
    {
      v24 = cocos2d::CCArray::objectAtIndex(a2, v22); /*0x76d1f*/
      v25 = cocos2d::CCArray::objectAtIndex(v17, v20); /*0x76d2e*/
      v26 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v24 + 56LL))(v24); /*0x76d3d*/
      if ( cocos2d::CCArray::count(v25) >= v23 || v26 == -1 ) /*0x76d52*/
      {
        v30 = (cocos2d::CCArray *)cocos2d::CCArray::create(v27); /*0x76d5c*/
        v31 = v30; /*0x76d62*/
        if ( v26 != -1 ) /*0x76d69*/
          cocos2d::CCArray::addObject(v30, v24); /*0x76d71*/
        ++v20; /*0x76d77*/
        v28 = v31; /*0x76d7a*/
        v29 = v17; /*0x76d7d*/
      }
      else
      {
        v28 = v24; /*0x76d54*/
        v29 = v25; /*0x76d57*/
      }
      cocos2d::CCArray::addObject(v29, v28); /*0x76d80*/
      ++v22; /*0x76d86*/
    }
    while ( v22 < cocos2d::CCArray::count(a2) ); /*0x76d93*/
    v12 = v71; /*0x76d99*/
    v10 = v73; /*0x76da1*/
    v21 = a5; /*0x76da8*/
  }
  v32 = 0; /*0x76db0*/
  v33 = cocos2d::CCArray::count(v17); /*0x76db5*/
  v34 = v72; /*0x76dbb*/
  if ( v33 ) /*0x76dc5*/
  {
    v35 = a8; /*0x76dcb*/
    v36 = a7; /*0x76dd4*/
    v37 = a6; /*0x76ddd*/
    do /*0x76e51*/
    {
      v38 = (unsigned int)cocos2d::CCArray::objectAtIndex(v17, v32); /*0x76dfb*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v71, v34); /*0x76e09*/
      v40 = (struct cocos2d::CCObject *)ListButtonPage_create(v38, v39, v10, v21, v37, v36, v35); /*0x76e2e*/
      cocos2d::CCArray::addObject(*((cocos2d::CCArray **)v12 + 41), v40); /*0x76e3e*/
      ++v32; /*0x76e44*/
    }
    while ( v32 < cocos2d::CCArray::count(v17) ); /*0x76e51*/
  }
  LOBYTE(v41) = cocos2d::CCArray::count(*((cocos2d::CCArray **)v12 + 41)) >= 2; /*0x76e64*/
  v43 = sub_3F960(*((_QWORD *)v12 + 41), v42, v41, 0, 0); /*0x76e7c*/
  *((_QWORD *)v12 + 40) = v43; /*0x76e81*/
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v12 + 464LL))(v12, v43); /*0x76e9a*/
  v45 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v44); /*0x76e9d*/
  v46 = cocos2d::CCDirector::getScreenBottom(v45) + 6.0; /*0x76eac*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v71, v68 * 0.5, v46); /*0x76ecd*/
  v47 = *((_QWORD *)v12 + 40); /*0x76ed3*/
  cocos2d::CCPoint::operator=(v47 + 572, v48); /*0x76ee5*/
  sub_40290(v47); /*0x76ef1*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v12 + 40) + 920LL))(*((_QWORD *)v12 + 40), 0); /*0x76f03*/
  if ( cocos2d::CCArray::count(*((cocos2d::CCArray **)v12 + 41)) <= 1 ) /*0x76f1a*/
  {
    *(_BYTE *)(*((_QWORD *)v12 + 40) + 569LL) = 0; /*0x7713d*/
    return 1; /*0x7713d*/
  }
  v53 = cocos2d::CCMenu::create(v50, v49, v51, v52); /*0x76f26*/
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v12 + 464LL))(v12, v53); /*0x76f3a*/
  v54 = cocos2d::CCString::createWithFormat("GJ_arrow_%02d_001.png", 1); /*0x76f49*/
  CString = cocos2d::CCString::getCString(v54); /*0x76f58*/
  v56 = cocos2d::CCSprite::createWithSpriteFrameName(CString); /*0x76f64*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v56 + 160LL))(v56); /*0x76f7f*/
  v71 = operator new(0x208u); /*0x76f8b*/
  v57 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v71); /*0x76f9b*/
  if ( v57 ) /*0x76fa1*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v57, (_DWORD)v56, 0, (_DWORD)v12, (__int64)ListButtonBar_onLeft) ) /*0x76fbb*/
    {
      cocos2d::CCObject::autorelease(v57); /*0x76fc7*/
      goto LABEL_20; /*0x76fcd*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v57 + 8LL))(v57, 1); /*0x76fd7*/
  }
  v57 = 0; /*0x76fda*/
LABEL_20:
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v53 + 464LL))(v53, v57); /*0x76fdc*/
  *((_DWORD *)v57 + 93) = 1069547520; /*0x76feb*/
  v58 = a9; /*0x76ff5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v69, -a9, 0.0); /*0x77010*/
  cocos2d::CCPoint::operator+(v34, &v71, v59); /*0x77024*/
  v60 = *(_QWORD *)v57; /*0x7702a*/
  cocos2d::CCNode::convertToNodeSpace(v53, v70, &v71); /*0x7703d*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v60 + 184))(v57, v61); /*0x77049*/
  v62 = cocos2d::CCSprite::createWithSpriteFrameName(CString); /*0x77058*/
  (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v62 + 160LL))(v62); /*0x77064*/
  cocos2d::CCSprite::setFlipX(v62, 1); /*0x7706f*/
  v71 = operator new(0x208u); /*0x7707f*/
  v63 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v71); /*0x7708f*/
  if ( !v63 ) /*0x77095*/
  {
LABEL_24:
    v63 = 0; /*0x770ce*/
    goto LABEL_25; /*0x770ce*/
  }
  if ( !(unsigned __int8)sub_47940((_DWORD)v63, (_DWORD)v62, 0, (_DWORD)v12, (__int64)ListButtonBar_onRight) ) /*0x770b9*/
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v63 + 8LL))(v63, 1); /*0x770cb*/
    goto LABEL_24; /*0x770cb*/
  }
  cocos2d::CCObject::autorelease(v63); /*0x770bb*/
LABEL_25:
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v53 + 464LL))(v53, v63); /*0x770d0*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v70, v58, 0.0); /*0x770ea*/
  cocos2d::CCPoint::operator+(v34, &v71, v64); /*0x770fe*/
  v65 = *(_QWORD *)v63; /*0x77104*/
  cocos2d::CCNode::convertToNodeSpace(v53, v69, &v71); /*0x77117*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v65 + 184))(v63, v66); /*0x77123*/
  *((_DWORD *)v63 + 93) = 1069547520; /*0x77129*/
  return 1; /*0x77146*/
}

// [4/6] Address: 0x77170
// Method: ListButtonBar::goToPage
void __fastcall ListButtonBar_goToPage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rcx
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64, _QWORD); // rcx

  v4 = *(_QWORD *)(a1 + 320); /*0x7717f*/
  if ( *(_BYTE *)(v4 + 456) ) /*0x77186*/
    v5 = *(cocos2d::CCArray **)(v4 + 448); /*0x7718f*/
  else
    v5 = *(cocos2d::CCArray **)(v4 + 480); /*0x77198*/
  cocos2d::CCArray::count(v5); /*0x7719f*/
  v6 = *(_QWORD *)(a1 + 320); /*0x771ac*/
  if ( *(_BYTE *)(a1 + 344) ) /*0x771a5*/
  {
    BoomScrollLayer_moveToPage(v6, a2); /*0x771cf*/
  }
  else
  {
    BoomScrollLayer_instantMoveToPage(v6, a2 - 1); /*0x771b8*/
    BoomScrollLayer_instantMoveToPage(*(_QWORD *)(a1 + 320), a2); /*0x771c6*/
  }
  v7 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 336); /*0x771d4*/
  if ( v7 ) /*0x771de*/
    (**v7)(v7, a1, a2); /*0x771e9*/
}

// [5/6] Address: 0x77200
// Method: ListButtonBar::onRight
void __fastcall ListButtonBar_onRight(__int64 a1)
{
  ListButtonBar_goToPage(a1, *(_DWORD *)(*(_QWORD *)(a1 + 320) + 588LL) + 1); /*0x7720f*/
}

// [6/6] Address: 0x77220
// Method: ListButtonBar::onLeft
void __fastcall ListButtonBar_onLeft(__int64 a1)
{
  ListButtonBar_goToPage(a1, *(_DWORD *)(*(_QWORD *)(a1 + 320) + 588LL) - 1); /*0x7722f*/
}
