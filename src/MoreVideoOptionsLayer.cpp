#include <Geode/binding/MoreVideoOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0xcabf0
// Method: MoreVideoOptionsLayer::onClose
__int64 __fastcall MoreVideoOptionsLayer_onClose(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = a1[116]; /*0xcabf9*/
  if ( v2 ) /*0xcac03*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1032LL))(v2, 0); /*0xcac0a*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xcac18*/
  LOBYTE(v3) = 1; /*0xcac21*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v3);
}

// [4/4] Address: 0x4cd1b0
// Method: MoreVideoOptionsLayer::keyBackClicked
__int64 __fastcall MoreVideoOptionsLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = a1 - 336; /*0x4cd1b6*/
  v2 = *(_QWORD *)(a1 + 376); /*0x4cd1bd*/
  if ( v2 ) /*0x4cd1c7*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1032LL))(v2, 0); /*0x4cd1ce*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x4cd1dc*/
  LOBYTE(v3) = 1; /*0x4cd1e5*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v3);
}

// Address: 0x4ca7a0
// Method: MoreVideoOptionsLayer::init
// Hidden C++ exception states: #wind=4
bool __fastcall MoreVideoOptionsLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  size_t v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCLabelBMFont *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  cocos2d::CCObject *v20; // rax
  __int64 v21; // rcx
  cocos2d::CCObject *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  cocos2d::CCObject *v29; // rax
  struct cocos2d::CCObject *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  struct cocos2d::CCObject *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  char *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  float v47; // xmm6_4
  float v48; // xmm0_4
  cocos2d::CCString *v49; // rax
  char *CString; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  void **v54; // rsi
  unsigned __int64 v55; // rdi
  __int64 v56; // rbx
  cocos2d::CCObject *v57; // rbx
  struct cocos2d::CCObject *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  int v62; // eax
  cocos2d::CCObject *v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  float v68; // xmm7_4
  int v69; // eax
  cocos2d::CCObject *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rcx
  cocos2d::CCDirector *v73; // rax
  float v74; // xmm0_4
  __int64 v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  cocos2d::CCSprite *v79; // rax
  cocos2d::CCObject *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rcx
  cocos2d::CCDirector *v83; // rax
  float v84; // xmm0_4
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  int v89; // [rsp+50h] [rbp-79h] BYREF
  float v90; // [rsp+58h] [rbp-71h] BYREF
  float v91; // [rsp+5Ch] [rbp-6Dh]
  void *v92; // [rsp+60h] [rbp-69h] BYREF
  __int128 v93; // [rsp+68h] [rbp-61h] BYREF
  __int64 v94; // [rsp+78h] [rbp-51h]
  __int64 v95; // [rsp+80h] [rbp-49h]
  void *v96; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v97[8]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v98[16]; // [rsp+98h] [rbp-31h] BYREF
  void *Src[2]; // [rsp+A8h] [rbp-21h] BYREF
  unsigned __int64 v100; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v101; // [rsp+C0h] [rbp-9h]

  v89 = 1258291200;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v89);
  if ( result )
  {
    v3 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v96 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v96);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v3 = qword_905FD0;
    }
    if ( GameManager_getGameVariable(v3, "0168") )
      *(_BYTE *)(a1 + 596) = 1;
    sub_5ABA0(a1);
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v4);
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v5);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, &v90);
    v8 = cocos2d::CCLayer::create();
    *(_QWORD *)(a1 + 584) = v8;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v8);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v98, 0.0, 0.0, 80.0, 80.0);
    v10 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v9);
    v11 = *v10;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v96, 360.0, 260.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 312))(v10, v12);
    v13 = -1;
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v10,
      0xFFFFFFFFLL);
    v14 = *v10;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v96, v90 * 0.5, v91 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 184))(v10, v15);
    v16 = cocos2d::CCLabelBMFont::create("Advanced Video Options", (const char *)&qword_6FFF68);
    v17 = *(_QWORD *)v16;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v96, v90 * 0.5, (float)((float)(v91 * 0.5) + 130.0) - 16.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v17 + 184))(v16, v18);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v16);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 160LL))(v16);
    *(_DWORD *)(a1 + 640) = -1;
    v20 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(v19);
    *(_QWORD *)(a1 + 688) = v20;
    cocos2d::CCObject::retain(v20);
    v22 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(v21);
    *(_QWORD *)(a1 + 680) = v22;
    cocos2d::CCObject::retain(v22);
    v27 = cocos2d::CCMenu::create(v24, v23, v25, v26);
    *(_QWORD *)(a1 + 552) = v27;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v27, 10);
    sub_4CB260(
      a1,
      "Vertical Sync",
      "0030",
      "Fixes screen tearing in fullscreen mode. Can cause issues in windowed mode.");
    sub_4CB260(
      a1,
      "Smooth Fix",
      "0023",
      "Makes some optimizations that can reduce lag. Disable if game speed becomes inconsistent.");
    sub_4CB260(a1, "Show FPS", "0115", "Shows frames per second while playing.");
    sub_4CB260(
      a1,
      "Unlock FPS",
      "0116",
      "Lets you set a custom target frames per second. Automatically disabled when vertical sync is enabled.");
    v29 = (cocos2d::CCObject *)cocos2d::CCArray::create(v28);
    *(_QWORD *)(a1 + 720) = v29;
    cocos2d::CCObject::retain(v29);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v97,
      (float)((float)(v90 * 0.5) - 180.0) + 75.0,
      (float)((float)(v91 * 0.5) - 130.0) + 35.0);
    v30 = cocos2d::CCLabelBMFont::create("FPS", (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v30 + 160LL))(v30);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v92, 0.0, 25.0);
    cocos2d::CCPoint::operator+(v97, &v89, v31);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, int *))(*(_QWORD *)v30 + 184LL))(v30, &v89);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v30);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 720), v30);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v98, 0.0, 0.0, 40.0, 40.0);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v93, (const struct cocos2d::CCRect *)v98);
    v33 = (struct cocos2d::CCObject *)cocos2d::extension::CCScale9Sprite::create("square02_small.png", v32);
    LOBYTE(v34) = 100;
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v33 + 40) + 40LL))((__int64)v33 + 320, v34);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v96, 100.0, 30.0);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, void **))(*(_QWORD *)v33 + 312LL))(v33, &v96);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v33,
      0xFFFFFFFFLL);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v33 + 184LL))(v33, v97);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 720), v33);
    v37 = CCTextInputNode_create(v36, v35, (__int64)"FPS");
    *(_QWORD *)(a1 + 712) = v37;
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v37, 20);
    *(_QWORD *)(*(_QWORD *)(a1 + 712) + 608LL) = a1 + 544;
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 712) + 184LL))(*(_QWORD *)(a1 + 712), v97);
    v38 = *(_QWORD *)(a1 + 712);
    *(_DWORD *)(v38 + 572) = 1060320051;
    sub_555B0(v38, v39);
    v40 = *(_QWORD *)(a1 + 712);
    *(_DWORD *)(v40 + 568) = 1128792064;
    sub_555B0(v40, v41);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 712) + 600LL) + 336LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 712) + 600LL),
      0);
    *(_DWORD *)(*(_QWORD *)(a1 + 712) + 616LL) = 8;
    v94 = 11;
    v95 = 15;
    *(_QWORD *)&v93 = 0x3736353433323130LL;
    *((_QWORD *)&v93 + 1) = 3029304;
    GameManager_getMenuMusicFile(*(_DWORD **)(a1 + 712), &v93);
    LOWORD(v89) = -21896;
    v42 = *(_QWORD *)(a1 + 712);
    *(_WORD *)(v42 + 580) = -21896;
    *(_BYTE *)(v42 + 582) = -16;
    sub_555B0(v42, v43);
    v44 = *(_QWORD *)(a1 + 712);
    *(_DWORD *)(v44 + 576) = 1056964608;
    sub_555B0(v44, v45);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 720), *(struct cocos2d::CCObject **)(a1 + 712));
    v46 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v92 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v92);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v46 = qword_905FD0;
    }
    v47 = fmaxf(60.0, *(float *)(v46 + 1136));
    *(_OWORD *)Src = 0;
    v100 = 0;
    v101 = 15;
    LOBYTE(Src[0]) = 0;
    v48 = floorf(v47);
    if ( v48 == v47 )
      v49 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(int)v48);
    else
      v49 = cocos2d::CCString::createWithFormat("%.03f", v47);
    CString = (char *)cocos2d::CCString::getCString(v49);
    do
      ++v13;
    while ( CString[v13] );
    sub_3F5A0(Src, CString, v13);
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v54 = Src;
    if ( v101 > 0xF )
      v54 = (void **)Src[0];
    v55 = v100;
    v56 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v100 > 0x7FFFFFFFFFFFFFFFLL )
      sub_8D90(v52, v51, v53);
    if ( v100 > 0xF )
    {
      if ( (v100 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
      {
        v56 = v100 | 0xF;
        if ( (v100 | 0xF) < 0x16 )
          v56 = 22;
      }
      *(_QWORD *)&v93 = sub_3C460(v56 + 1);
      v94 = v55;
      v95 = v56;
      memcpy((void *)v93, v54, v55 + 1);
    }
    else
    {
      v94 = v100;
      v95 = 15;
      v93 = *(_OWORD *)v54;
    }
    CCTextInputNode_setString(*(_QWORD **)(a1 + 712), &v93);
    v92 = operator new(0x2C8u);
    v57 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v92);
    if ( v57 )
    {
      if ( ButtonSprite_init(
             (__int64)v57,
             (__int64)"Apply",
             40,
             0,
             1056964608,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_04.png",
             1103626240) )
      {
        cocos2d::CCObject::autorelease(v57);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v57 + 8LL))(v57, 1);
        LODWORD(v57) = 0;
      }
    }
    v58 = CCMenuItemSpriteExtra_create((int)v57, 0, a1, (__int64)sub_4CCC70);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
      *(_QWORD *)(a1 + 552),
      v58);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 720), v58);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v92, 90.0, 0.0);
    cocos2d::CCPoint::operator+(v97, &v89, v59);
    v60 = *(_QWORD *)v58;
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), &v93, &v89);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v60 + 184))(v58, v61);
    sub_4CCB90(a1);
    sub_3C310(Src);
    v62 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    v63 = CCMenuItemSpriteExtra_create(v62, 0, a1, (__int64)sub_4CD160);
    *((_DWORD *)v63 + 93) = 1069547520;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v63);
    v64 = *(_QWORD *)v63;
    v65 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v93,
      (float)((float)(v90 * 0.5) - 180.0) + 5.0,
      (float)((float)(v91 * 0.5) + 130.0) - 5.0);
    cocos2d::CCNode::convertToNodeSpace(v65, &v92, v66);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v64 + 184))(v63, v67);
    v68 = v91 * 0.5;
    v69 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    v70 = CCMenuItemSpriteExtra_create(v69, 0, a1, (__int64)sub_4CBDA0);
    *(_QWORD *)(a1 + 696) = v70;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v70);
    v71 = **(_QWORD **)(a1 + 696);
    v73 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v72);
    v74 = cocos2d::CCDirector::getScreenLeft(v73) + 24.0;
    v75 = *(_QWORD *)(a1 + 552);
    v76 = *(_QWORD *)(a1 + 696);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v93, v74, v68);
    cocos2d::CCNode::convertToNodeSpace(v75, &v92, v77);
    (*(void (__fastcall **)(__int64, __int64))(v71 + 184))(v76, v78);
    v79 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    LODWORD(v75) = (_DWORD)v79;
    cocos2d::CCSprite::setFlipX(v79, 1);
    v80 = CCMenuItemSpriteExtra_create(v75, 0, a1, (__int64)sub_4CBD90);
    *(_QWORD *)(a1 + 704) = v80;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v80);
    v81 = **(_QWORD **)(a1 + 704);
    v83 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v82);
    v84 = cocos2d::CCDirector::getScreenRight(v83) - 24.0;
    v85 = *(_QWORD *)(a1 + 552);
    v86 = *(_QWORD *)(a1 + 704);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v93, v84, v68);
    cocos2d::CCNode::convertToNodeSpace(v85, &v92, v87);
    (*(void (__fastcall **)(__int64, __int64))(v81 + 184))(v86, v88);
    sub_4CBDB0(a1, 0);
    return 1;
  }
  return result;
}

// Address: 0x56b90
// Method: MoreVideoOptionsLayer::onApplyFPS
// Hidden C++ exception states: #wind=1
char __fastcall MoreVideoOptionsLayer_onApplyFPS(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  const char *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  void **v8; // rcx
  char *v9; // rsi
  unsigned __int64 v10; // r15
  size_t v11; // r8
  int v12; // r14d
  char *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  const struct cocos2d::CCPoint *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  char v22[4]; // [rsp+30h] [rbp-39h] BYREF
  __int128 Buf2; // [rsp+38h] [rbp-31h] BYREF
  __int64 v24; // [rsp+48h] [rbp-21h]
  __int64 v25; // [rsp+50h] [rbp-19h]
  char v26[8]; // [rsp+58h] [rbp-11h] BYREF
  void *Buf1[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v28; // [rsp+70h] [rbp+7h]
  unsigned __int64 v29; // [rsp+78h] [rbp+Fh]

  v3 = (_QWORD *)(a1 - 416);
  v4 = *(_QWORD *)(a1 - 416 + 592);
  if ( v4 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 336LL))(v4, a2);
  }
  *(_BYTE *)(a1 + 52) = 1;
  qword_903788 = (__int64)v3;
  *(_BYTE *)(a1 + 284) = 0;
  LOBYTE(v4) = 1;
  sub_8A860(v4);
  if ( *(_BYTE *)(a1 + 8) )
  {
    v5 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 600LL) + 8LL))(*(_QWORD *)(a1 + 184) + 600LL);
    if ( atof(v5) == 0.0 )
    {
      *(_OWORD *)Buf1 = 0;
      v28 = 0;
      v29 = 15;
      LOBYTE(Buf1[0]) = 0;
      CCTextInputNode_setString(v3, Buf1);
    }
  }
  Buf2 = 0;
  v24 = 0;
  v25 = 15;
  LOBYTE(Buf2) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 600LL) + 8LL))(*(_QWORD *)(a1 + 184) + 600LL);
  *(_OWORD *)Buf1 = 0;
  v28 = 0;
  v29 = 0;
  v7 = -1;
  do
    ++v7;
  while ( *(_BYTE *)(v6 + v7) );
  sub_3C230(Buf1);
  v8 = Buf1;
  v9 = (char *)Buf1[0];
  v10 = v29;
  if ( v29 > 0xF )
    v8 = (void **)Buf1[0];
  v11 = v28;
  if ( v28 )
    v11 = 0;
  v12 = memcmp(v8, &Buf2, v11);
  if ( !v12 )
    v12 = v28 != 0;
  if ( v10 > 0xF )
  {
    v13 = v9;
    if ( v10 + 1 >= 0x1000 )
    {
      v9 = (char *)*((_QWORD *)v9 - 1);
      if ( (unsigned __int64)(v13 - v9 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v9);
  }
  if ( !v12 )
  {
    v14 = *(_QWORD *)(a1 + 208);
    if ( v14 )
    {
      (**(void (__fastcall ***)(__int64, const char *))(v14 + 360))(v14 + 360, " ");
    }
    else
    {
      v15 = *(__int64 **)(a1 + 224);
      if ( v15 )
      {
        *(_OWORD *)Buf1 = 0;
        v28 = 1;
        v29 = 15;
        LOWORD(Buf1[0]) = 32;
        TextArea_setString(v15, (const void **)Buf1);
      }
    }
    CustomSFXWidget_init(v3, *(unsigned int *)(v3[75] + 760LL));
  }
  v16 = *(_QWORD *)(a1 + 192);
  if ( v16 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 8LL))(v16, v3);
  if ( *(_BYTE *)(a1 + 218) )
  {
    v17 = cocos2d::CCDirector::sharedDirector(v16);
    cocos2d::CCDirector::getWinSize(v17, v22);
    v18 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 296LL))(*(_QWORD *)(a1 + 184));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v26, v18);
    sub_53180(Buf1, v3, v19);
    *((float *)Buf1 + 1) = *((float *)Buf1 + 1) + -4.0;
    cocos2d::CCRect::getMinY((cocos2d::CCRect *)Buf1);
    v20 = *(_QWORD *)(a1 + 192);
    if ( v20 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 24LL))(v20, v3);
  }
  return 0;
}
