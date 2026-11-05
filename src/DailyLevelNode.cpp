#include <Geode/binding/DailyLevelNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x171360
// Method: DailyLevelNode::showSkipButton
__int64 __fastcall DailyLevelNode_showSkipButton(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 360); /*0x171369*/
  if ( v2 ) /*0x171373*/
  {
    v3 = *(_QWORD *)(a1 + 328); /*0x171375*/
    if ( !v3 || (result = (unsigned int)(*(_DWORD *)(v3 + 936) - *(_DWORD *)(v3 + 940)), (int)result < 100) ) /*0x171390*/
    {
      LOBYTE(v3) = 1; /*0x171395*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 336LL))(v2, v3); /*0x171397*/
      LOBYTE(v5) = 1; /*0x1713a4*/
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 360) + 1040LL))(*(_QWORD *)(a1 + 360), v5); /*0x1713ae*/
    }
  }
  return result; /*0x1713b5*/
}

// [3/3] Address: 0x171730
// Method: DailyLevelNode::FLAlert_Clicked
void __fastcall DailyLevelNode_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r8
  cocos2d::CCNode *v4; // rdx
  __int64 v5; // rcx

  if ( a3 ) /*0x171733*/
  {
    v3 = *(_QWORD *)(a1 + 8); /*0x171735*/
    v4 = (cocos2d::CCNode *)(a1 - 320); /*0x171739*/
    v5 = *(_QWORD *)(a1 + 16); /*0x171740*/
    *((_BYTE *)v4 + 368) = 1; /*0x171744*/
    DailyLevelPage_skipDailyLevel(v5, v4, v3); /*0x17174b*/
  }
}

// Address: 0x170650
// Method: DailyLevelNode::init
// Hidden C++ exception states: #wind=3
bool __fastcall DailyLevelNode_init(__int64 a1, cocos2d::CCObject *a2, __int64 a3, char a4)
{
  bool result; // al
  __int64 v9; // rcx
  __int64 v10; // rax
  cocos2d::CCTouchDispatcher *v11; // rax
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // r12
  void **v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rax
  void **v28; // rcx
  struct cocos2d::CCSprite *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  struct cocos2d::CCLabelBMFont *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  struct cocos2d::CCSprite *v37; // rax
  int v38; // ebx
  cocos2d::CCObject *v39; // rax
  struct cocos2d::CCMenu *v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  cocos2d::CCString *v50; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  struct cocos2d::CCSprite *v58; // rax
  int v59; // ebx
  cocos2d::CCObject *v60; // rax
  struct cocos2d::CCMenu *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rax
  struct cocos2d::CCLabelBMFont *v65; // r14
  __int64 v66; // rbx
  __int64 v67; // rax
  int v68; // ecx
  struct cocos2d::CCSprite *v69; // r15
  int v70; // ebx
  int v71; // edx
  cocos2d::CCString *v72; // rax
  const char *v73; // rax
  cocos2d::CCSprite *v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rax
  float v77; // xmm6_4
  double v78; // xmm0_8
  float v79; // xmm7_4
  float v80; // xmm6_4
  double v81; // xmm0_8
  float v82; // xmm8_4
  float v83; // xmm6_4
  double v84; // xmm0_8
  float v85; // xmm7_4
  __int64 v86; // rbx
  float v87; // xmm6_4
  float v88; // xmm7_4
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rax
  float v93; // xmm6_4
  double v94; // xmm0_8
  float v95; // xmm1_4
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rdx
  struct cocos2d::CCLabelBMFont *v102; // rax
  void *v103; // rcx
  void *v104; // rcx
  __int16 v105; // [rsp+30h] [rbp-89h] BYREF
  char v106; // [rsp+32h] [rbp-87h]
  _BYTE v107[12]; // [rsp+34h] [rbp-85h] BYREF
  _QWORD v108[2]; // [rsp+40h] [rbp-79h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v110; // [rsp+60h] [rbp-59h]
  unsigned __int64 v111; // [rsp+68h] [rbp-51h]
  void *v112[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v113; // [rsp+80h] [rbp-39h]
  unsigned __int64 v114; // [rsp+88h] [rbp-31h]

  result = cocos2d::CCNode::init((cocos2d::CCNode *)a1);
  if ( !result )
    return result;
  v10 = cocos2d::CCDirector::sharedDirector(v9);
  v11 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 144LL))(v10);
  cocos2d::CCTouchDispatcher::registerForcePrio(v11, (struct cocos2d::CCObject *)a1, 2, 0);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 328) = a2;
    cocos2d::CCObject::retain(a2);
  }
  *(_QWORD *)(a1 + 336) = a3;
  *(_OWORD *)v112 = 0;
  v113 = 0;
  v114 = 15;
  LOBYTE(v112[0]) = 0;
  *(_OWORD *)Block = 0;
  v110 = 0;
  v111 = 15;
  LOBYTE(Block[0]) = 0;
  v12 = *(_DWORD *)(a3 + 732);
  if ( !v12 )
    goto LABEL_9;
  v13 = v12 - 1;
  if ( !v13 )
  {
    v113 = 15;
    qmemcpy(v112, "GJ_square05.pn", 14);
    HIWORD(v112[1]) = (unsigned __int8)aGjSquare05Png[14];
    v14 = sub_3C460(32);
    v110 = 22;
    v111 = 31;
    strcpy((char *)v14, "gj_weeklyCrown_001.png");
    goto LABEL_11;
  }
  if ( v13 == 1 )
  {
    v113 = 15;
    strcpy((char *)v112, "GJ_square04.png");
    v14 = sub_3C460(32);
    v110 = 21;
    v111 = 31;
    qmemcpy((void *)v14, "gj_eventCrown_001.pn", 20);
  }
  else
  {
LABEL_9:
    v113 = 15;
    qmemcpy(v112, "GJ_square02.pn", 14);
    HIWORD(v112[1]) = (unsigned __int8)aGjSquare02Png[14];
    v14 = sub_3C460(32);
    v110 = 21;
    v111 = 31;
    qmemcpy((void *)v14, "gj_dailyCrown_001.pn", 20);
  }
  *(_WORD *)(v14 + 20) = 103;
LABEL_11:
  Block[0] = (void *)v14;
  v15 = *(_QWORD *)(a1 + 328);
  if ( v15 && *(_DWORD *)(v15 + 936) - *(_DWORD *)(v15 + 940) >= 100 )
  {
    v16 = 1;
    v17 = (void **)"GJ_square03.png";
  }
  else
  {
    v16 = 0;
    v17 = v112;
    if ( v114 > 0xF )
      v17 = (void **)v112[0];
  }
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v108, 0.0, 0.0, 80.0, 80.0);
  v19 = cocos2d::extension::CCScale9Sprite::create(v17, v18);
  v20 = v19;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 336) + 732LL) == 1 && !v16 )
  {
    v105 = -20561;
    v106 = -81;
    (**(void (__fastcall ***)(__int64, __int16 *))(v19 + 320))(v19 + 320, &v105);
  }
  v21 = *(_QWORD *)v20;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v107, 380.0, 116.0);
  (*(void (__fastcall **)(__int64, __int64))(v21 + 312))(v20, v22);
  v23 = *(_QWORD *)v20;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v107, 0.0, 0.0);
  (*(void (__fastcall **)(__int64, __int64))(v23 + 184))(v20, v24);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v20, 1);
  if ( *(_QWORD *)(a1 + 328) )
  {
    v25 = sub_1463D0();
    *(_BYTE *)(v25 + 578) = 1;
    LevelCell_loadFromLevel(v25, (__int64)a2);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v25, 2);
    v26 = *(_QWORD *)v25;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v107, -180.0, -47.0);
    (*(void (__fastcall **)(__int64, __int64))(v26 + 184))(v25, v27);
    v28 = Block;
    if ( v111 > 0xF )
      v28 = (void **)Block[0];
    v29 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v28);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v29, 2);
    v30 = *(_QWORD *)v29;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v107, 0.0, 70.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v30 + 184))(v29, v31);
    if ( a4 )
    {
      v32 = cocos2d::CCLabelBMFont::create("New!", "goldFont.fnt");
      v33 = *(_QWORD *)v32;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v107, 1.0, 1.0);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v33 + 288))(v32, v34);
      v35 = *(_QWORD *)v32;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v107, 182.0, 53.0);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v35 + 184))(v32, v36);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v32 + 160LL))(v32);
      (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v32, 3);
    }
    if ( v16 )
    {
      v37 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_rewardBtn_001.png");
      v38 = (int)v37;
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v37 + 160LL))(v37);
      v39 = CCMenuItemSpriteExtra_create(v38, 0, a1, (__int64)sub_1713C0);
      *((_DWORD *)v39 + 93) = 1066192077;
      v40 = cocos2d::CCMenu::createWithItem(v39);
      (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v40, 10);
      v41 = *(_QWORD *)v40;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v107, 150.0, -2.0);
      (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v41 + 184))(v40, v42);
      v43 = (*(__int64 (__fastcall **)(struct cocos2d::CCMenu *))(*(_QWORD *)v40 + 200LL))(v40);
      cocos2d::CCPoint::operator=(a1 + 352, v43);
      v44 = *(_QWORD *)(v25 + 560);
      if ( v44 )
      {
        v45 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 952LL))(*(_QWORD *)(v25 + 560));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 160LL))(v45);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, -55.0, 0.0);
        v47 = v46;
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 200LL))(v44);
        cocos2d::CCPoint::operator+(v48, v107, v47);
        (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v44 + 184LL))(v44, v107);
      }
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      v49 = (unsigned int)(*((_DWORD *)a2 + 248) - *((_DWORD *)a2 + 249));
      if ( (int)v49 <= 200000 )
      {
        if ( (int)v49 > 100000 )
          v49 = (unsigned int)(v49 - 100000);
      }
      else
      {
        v49 = (unsigned int)(v49 - 200000);
      }
      v50 = cocos2d::CCString::createWithFormat("#%i", v49);
      CString = cocos2d::CCString::getCString(v50);
      v52 = cocos2d::CCLabelBMFont::create(CString, "chatFont.fnt");
      (**((void (__fastcall ***)(__int64, void *))v52 + 46))((__int64)v52 + 368, &unk_6FDF84);
      LOBYTE(v53) = -106;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v52 + 46) + 40LL))((__int64)v52 + 368, v53);
      v54 = *(_QWORD *)v52;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, 1.0, 0.0);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v54 + 288))(v52, v55);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v52 + 160LL))(v52);
      (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v52, 3);
      v56 = *(_QWORD *)v52;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, 183.0, -51.0);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v56 + 184))(v52, v57);
    }
    v58 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteBtn_001.png");
    v59 = (int)v58;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v58 + 160LL))(v58);
    v60 = CCMenuItemSpriteExtra_create(v59, 0, a1, (__int64)sub_1714F0);
    v61 = cocos2d::CCMenu::createWithItem(v60);
    *(_QWORD *)(a1 + 360) = v61;
    (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v61, 10);
    v62 = **(_QWORD **)(a1 + 360);
    v63 = *(_QWORD *)(a1 + 360);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, -186.0, 54.0);
    (*(void (__fastcall **)(__int64, __int64))(v62 + 184))(v63, v64);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 360) + 336LL))(*(_QWORD *)(a1 + 360), 0);
    v65 = cocos2d::CCLabelBMFont::create("Bonus:", "goldFont.fnt");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v65, 10);
    v66 = *(_QWORD *)v65;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v66 + 288))(v65, v67);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v65 + 160LL))(v65);
    v68 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 732LL);
    if ( v68 == 1 || v68 == 2 )
    {
      v74 = GJChestSprite_create(3);
      (*(void (__fastcall **)(__int64, cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v74, 10);
      (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v74 + 160LL))(v74);
      v96 = *(_QWORD *)v74;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, 30.0, -84.0);
      (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v96 + 184))(v74, v97);
      v95 = -25.0;
    }
    else
    {
      v69 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_bigDiamond_001.png");
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v69, 10);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v69 + 160LL))(v69);
      v70 = *(_DWORD *)(*(_QWORD *)(a1 + 328) + 1020LL) - *(_DWORD *)(*(_QWORD *)(a1 + 328) + 1024LL);
      if ( !qword_905FE0 )
      {
        v108[0] = operator new(0x3E8u);
        qword_905FE0 = sub_2D2B40(v108[0]);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      }
      if ( (unsigned int)(v70 - 2) > 8 )
      {
        v71 = 0;
      }
      else if ( v70 == 10 )
      {
        v71 = 20;
      }
      else
      {
        v71 = (int)floorf((float)(v70 + 2) * 0.5);
      }
      v72 = cocos2d::CCString::createWithFormat("%ix", v71);
      v73 = cocos2d::CCString::getCString(v72);
      v74 = cocos2d::CCLabelBMFont::create(v73, (const char *)&qword_6FFF68);
      (*(void (__fastcall **)(__int64, cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v74, 10);
      v75 = *(_QWORD *)v74;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, 1.0, 0.5);
      (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v75 + 288))(v74, v76);
      (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v74 + 160LL))(v74);
      v77 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v69 + 320LL))(v69);
      v78 = (*(double (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v69 + 168LL))(v69);
      v79 = *(float *)&v78 * v77;
      v80 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v74 + 320LL))(v74);
      v81 = (*(double (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v74 + 168LL))(v74);
      v82 = (float)(*(float *)&v81 * v80) + v79;
      v83 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v65 + 320LL))(v65);
      v84 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v65 + 168LL))(v65);
      v85 = (float)((float)(*(float *)&v84 * v83) + v82) + 25.0;
      v86 = *(_QWORD *)v69;
      v87 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v69 + 320LL))(v69);
      v88 = (float)(v85 * 0.5)
          - (float)((float)((*(float (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v69 + 168LL))(v69) * v87)
                  * 0.5);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, v88, -84.0);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v86 + 184))(v69, v89);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, -20.0, 0.0);
      v91 = v90;
      v92 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v69 + 200LL))(v69);
      cocos2d::CCPoint::operator+(v92, v107, v91);
      (*(void (__fastcall **)(cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v74 + 184LL))(v74, v107);
      v93 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v74 + 320LL))(v74);
      v94 = (*(double (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v74 + 168LL))(v74);
      v95 = (float)-(float)(*(float *)&v94 * v93) - 5.0;
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v108, v95, 0.0);
    v99 = v98;
    v100 = (*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v74 + 200LL))(v74);
    cocos2d::CCPoint::operator+(v100, v107, v99);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v65 + 184LL))(v65, v107);
  }
  else
  {
    (**(void (__fastcall ***)(__int64, void *))(v20 + 320))(v20 + 320, &unk_6FDF84);
    LOBYTE(v101) = 75;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v20 + 320) + 40LL))(v20 + 320, v101);
    v102 = cocos2d::CCLabelBMFont::create("00:00:00", (const char *)&qword_6FFF68);
    *(_QWORD *)(a1 + 344) = v102;
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v102 + 160LL))(v102);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 344), 3);
    *(_BYTE *)(a1 + 369) = 1;
  }
  if ( v111 > 0xF )
  {
    v103 = Block[0];
    if ( v111 + 1 >= 0x1000 )
    {
      v103 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v103 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v103);
  }
  v110 = 0;
  v111 = 15;
  LOBYTE(Block[0]) = 0;
  if ( v114 > 0xF )
  {
    v104 = v112[0];
    if ( v114 + 1 >= 0x1000 )
    {
      v104 = (void *)*((_QWORD *)v112[0] - 1);
      if ( (unsigned __int64)((char *)v112[0] - (char *)v104 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v104);
  }
  return 1;
}
