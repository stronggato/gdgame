#include <Geode/binding/AchievementsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x964b0
// Method: AchievementsLayer::~AchievementsLayer
struct cocos2d::CCObject *__fastcall AchievementsLayer__dtor_AchievementsLayer(
        struct cocos2d::CCObject *Block,
        char a2)
{
  *(_QWORD *)Block = &AchievementsLayer::`vftable'; /*0x964c3*/
  *((_QWORD *)Block + 40) = &AchievementsLayer::`vftable'; /*0x964d0*/
  *((_QWORD *)Block + 41) = &AchievementsLayer::`vftable'; /*0x964de*/
  *((_QWORD *)Block + 42) = &AchievementsLayer::`vftable'; /*0x964ec*/
  *((_QWORD *)Block + 43) = &AchievementsLayer::`vftable'; /*0x964fa*/
  *((_QWORD *)Block + 44) = &AchievementsLayer::`vftable'; /*0x96508*/
  *((_QWORD *)Block + 51) = &AchievementsLayer::`vftable'; /*0x96516*/
  *((_QWORD *)Block + 54) = &AchievementsLayer::`vftable'; /*0x96524*/
  GJDropDownLayer__dtor_GJDropDownLayer(Block); /*0x9652b*/
  if ( (a2 & 1) != 0 ) /*0x96533*/
    j_j_free(Block); /*0x9653d*/
  return Block; /*0x96542*/
}

// [2/4] Address: 0x96550
// Method: AchievementsLayer::customSetup
__int64 __fastcall AchievementsLayer_customSetup(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  char v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  const char *v10; // rsi
  float v11; // xmm6_4
  __int64 v12; // r14
  const char *v13; // rcx
  int v14; // eax
  cocos2d::CCObject *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  cocos2d::CCDirector *v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rax
  __int64 v22; // rax
  cocos2d::CCSprite *v23; // rax
  int v24; // ebx
  cocos2d::CCObject *v25; // rax
  __int64 *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  cocos2d::CCDirector *v29; // rax
  float v30; // xmm0_4
  __int64 v31; // rax
  __int64 v32; // rax
  struct cocos2d::CCLabelBMFont *v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rcx
  cocos2d::CCDirector *v38; // rax
  float v39; // xmm6_4
  __int64 v40; // rcx
  cocos2d::CCDirector *v41; // rax
  float ScreenRight; // xmm1_4
  __int64 v43; // rax
  __int64 *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 result; // rax
  char v48; // [rsp+60h] [rbp+8h] BYREF
  float v49; // [rsp+64h] [rbp+Ch]
  char v50; // [rsp+68h] [rbp+10h] BYREF
  char v51; // [rsp+70h] [rbp+18h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x96568*/
  cocos2d::CCDirector::getWinSize(v2, &v48); /*0x96576*/
  v4 = *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v3) + 209); /*0x96582*/
  v9 = cocos2d::CCMenu::create(v6, v5, v7, v8); /*0x9658a*/
  v10 = "GJ_arrow_01_001.png"; /*0x96596*/
  v11 = v49 * 0.5; /*0x9659d*/
  v12 = v9; /*0x965a5*/
  v13 = "GJ_arrow_01_001.png"; /*0x965b2*/
  if ( v4 ) /*0x965b5*/
    v13 = "controllerBtn_DPad_Left_001.png"; /*0x965b5*/
  v14 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName(v13); /*0x965b9*/
  v15 = CCMenuItemSpriteExtra_create(v14, 0, (int)a1, (__int64)sub_96AB0); /*0x965ce*/
  a1[78] = (__int64)v15; /*0x965d3*/
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v12 + 464LL))(v12, v15); /*0x965ea*/
  v16 = (__int64 *)a1[78]; /*0x965ed*/
  v17 = *v16; /*0x965f4*/
  v19 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v18); /*0x965f7*/
  v20 = cocos2d::CCDirector::getScreenLeft(v19) + 24.0; /*0x9660e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v20, v11); /*0x96619*/
  cocos2d::CCNode::convertToNodeSpace(v12, &v51, v21); /*0x9662a*/
  (*(void (__fastcall **)(__int64 *, __int64))(v17 + 184))(v16, v22); /*0x96636*/
  if ( v4 ) /*0x96646*/
    v10 = "controllerBtn_DPad_Right_001.png"; /*0x96646*/
  v23 = cocos2d::CCSprite::createWithSpriteFrameName(v10); /*0x9664d*/
  v24 = (int)v23; /*0x96653*/
  if ( !v4 ) /*0x96659*/
    cocos2d::CCSprite::setFlipX(v23, 1); /*0x96660*/
  v25 = CCMenuItemSpriteExtra_create(v24, 0, (int)a1, (__int64)sub_96AA0); /*0x96675*/
  a1[77] = (__int64)v25; /*0x9667a*/
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v12 + 464LL))(v12, v25); /*0x96691*/
  v26 = (__int64 *)a1[77]; /*0x96694*/
  v27 = *v26; /*0x9669b*/
  v29 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v28); /*0x9669e*/
  v30 = cocos2d::CCDirector::getScreenRight(v29) - 24.0; /*0x966b5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v30, v11); /*0x966c0*/
  cocos2d::CCNode::convertToNodeSpace(v12, &v51, v31); /*0x966d1*/
  (*(void (__fastcall **)(__int64 *, __int64))(v27 + 184))(v26, v32); /*0x966dd*/
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1[72] + 456LL))(a1[72], v12, 10); /*0x966f6*/
  v33 = cocos2d::CCLabelBMFont::create(" ", "goldFont.fnt"); /*0x9670a*/
  v34 = a1[72]; /*0x96710*/
  a1[79] = (__int64)v33; /*0x96717*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v34 + 464LL))(v34, v33); /*0x9672b*/
  v35 = (__int64 *)a1[79]; /*0x9672e*/
  v36 = *v35; /*0x96735*/
  v38 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v37); /*0x96738*/
  v39 = cocos2d::CCDirector::getScreenTop(v38) - 4.0; /*0x9674a*/
  v41 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v40); /*0x96752*/
  ScreenRight = cocos2d::CCDirector::getScreenRight(v41); /*0x96769*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, (float)(ScreenRight - 7.0) - 0.0, v39); /*0x9677b*/
  (*(void (__fastcall **)(__int64 *, __int64))(v36 + 184))(v35, v43); /*0x96787*/
  v44 = (__int64 *)a1[79]; /*0x9678d*/
  v45 = *v44; /*0x967a4*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, 1.0, 1.0); /*0x967a7*/
  (*(void (__fastcall **)(__int64 *, __int64))(v45 + 288))(v44, v46); /*0x967b3*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 160LL))(a1[79]); /*0x967cb*/
  result = AchievementsLayer_loadPage(a1, 0); /*0x967d6*/
  if ( v4 ) /*0x967de*/
    return GameToolbox_addRThumbScrollButton(a1[72]); /*0x967e7*/
  return result; /*0x967ec*/
}

// [3/4] Address: 0x96810
// Method: AchievementsLayer::keyDown
__int64 __fastcall AchievementsLayer_keyDown(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 result; // rax

  v3 = (unsigned int)(a2 - 37); /*0x9681c*/
  if ( (_DWORD)a2 != 37 ) /*0x96820*/
  {
    v3 = (unsigned int)(a2 - 39); /*0x96822*/
    if ( (_DWORD)a2 == 39 ) /*0x96826*/
    {
LABEL_6:
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 272) + 344LL))( /*0x96843*/
                 *(_QWORD *)(a1 + 272),
                 a2,
                 v3);
      if ( (_BYTE)result ) /*0x96855*/
        return AchievementsLayer_loadPage(a1 - 344, (unsigned int)(*(_DWORD *)(a1 + 264) + 1)); /*0x9686b*/
      return result; /*0x9686b*/
    }
    v3 = (unsigned int)(a2 - 1025); /*0x96828*/
    if ( (_DWORD)a2 != 1025 ) /*0x9682f*/
    {
      if ( (_DWORD)a2 != 1027 ) /*0x96835*/
        return cocos2d::CCLayer::keyDown(a1); /*0x9683c*/
      goto LABEL_6; /*0x96835*/
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 280) + 344LL))( /*0x9687a*/
             *(_QWORD *)(a1 + 280),
             a2,
             v3);
  if ( (_BYTE)result ) /*0x96882*/
    return AchievementsLayer_loadPage(a1 - 344, (unsigned int)(*(_DWORD *)(a1 + 264) - 1)); /*0x96898*/
  return result; /*0x96837*/
}

// [4/4] Address: 0x968b0
// Method: AchievementsLayer::loadPage
__int64 __fastcall AchievementsLayer_loadPage(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rdi
  __int64 v6; // rcx
  cocos2d::CCArray *v7; // r15
  int v8; // esi
  signed int v9; // r12d
  unsigned int v10; // ebx
  struct cocos2d::CCObject *v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  signed int v18; // ebx
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, __int64); // r8
  cocos2d::CCString *v21; // rax
  const char *CString; // rax
  __int64 v23; // r8
  _QWORD *v24; // rbx
  __int64 v26; // [rsp+20h] [rbp-48h]

  v2 = a2; /*0x968c6*/
  *(_DWORD *)(a1 + 608) = a2; /*0x968cb*/
  v4 = *(_QWORD *)(a1 + 624); /*0x968d1*/
  if ( (int)a2 <= 0 ) /*0x968e4*/
    a2 = 0; /*0x968ea*/
  else
    LOBYTE(a2) = 1; /*0x968e6*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 336LL))(v4, a2); /*0x968ec*/
  v5 = *(cocos2d::CCArray **)(AchievementManager_sharedState() + 368); /*0x968f4*/
  v7 = (cocos2d::CCArray *)cocos2d::CCArray::create(v6); /*0x96901*/
  v8 = 10 * v2; /*0x96907*/
  v9 = cocos2d::CCArray::count(v5); /*0x96912*/
  if ( v5 ) /*0x96918*/
  {
    if ( cocos2d::CCArray::count(v5) ) /*0x9691d*/
    {
      v10 = 10 * v2; /*0x96927*/
      if ( !__OFSUB__(v8, v8 + 10) ) /*0x9692e*/
      {
        do /*0x9695a*/
        {
          if ( v10 > cocos2d::CCArray::count(v5) - 1 ) /*0x9693d*/
            break; /*0x9693d*/
          v11 = cocos2d::CCArray::objectAtIndex(v5, v10); /*0x96944*/
          cocos2d::CCArray::addObject(v7, v11); /*0x96950*/
          ++v10; /*0x96956*/
        }
        while ( (int)v10 < v8 + 10 ); /*0x9695a*/
      }
    }
  }
  v12 = cocos2d::CCArray::count(v5); /*0x96965*/
  v13 = cocos2d::CCArray::count(v7); /*0x9696a*/
  v14 = *(__int64 **)(a1 + 616); /*0x96974*/
  v15 = *v14; /*0x9697b*/
  if ( v13 + v8 >= v12 ) /*0x96988*/
    v15 = 0; /*0x9698e*/
  else
    LOBYTE(v15) = 1; /*0x9698a*/
  (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 336))(v14, v15); /*0x96990*/
  if ( v8 ) /*0x969a5*/
    LOBYTE(v16) = 1; /*0x969ab*/
  else
    v16 = 0; /*0x969a7*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 624) + 336LL))(*(_QWORD *)(a1 + 624), v16); /*0x969ad*/
  v18 = v8 + 10; /*0x969b0*/
  v19 = *(_QWORD *)(a1 + 616); /*0x969b3*/
  v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 336LL); /*0x969bd*/
  if ( v8 + 10 < v9 ) /*0x969c7*/
  {
    LOBYTE(v17) = 1; /*0x969d3*/
    v20(v19, v17); /*0x969d5*/
  }
  else
  {
    v20(v19, 0); /*0x969cb*/
    v18 = v9; /*0x969ce*/
  }
  v21 = cocos2d::CCString::createWithFormat("%i to %i of %i", v8 + 1, v18, v9); /*0x969e8*/
  CString = cocos2d::CCString::getCString(v21); /*0x969f1*/
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 632) + 360LL))( /*0x96a0e*/
    *(_QWORD *)(a1 + 632) + 360LL,
    CString);
  LOBYTE(v23) = 1; /*0x96a1b*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 568) + 552LL))(*(_QWORD *)(a1 + 568), 9, v23); /*0x96a23*/
  v24 = CustomListView_create(v7, 0, 220.0, 356.0, v26, 3); /*0x96a54*/
  (*(void (__fastcall **)(_QWORD *, __int64))(*v24 + 64LL))(v24, 9); /*0x96a66*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 568) + 456LL))( /*0x96a83*/
           *(_QWORD *)(a1 + 568),
           v24,
           6);
}
