#include <Geode/binding/SupportLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0xf4aa0
// Method: SupportLayer::onRequestAccess
// Hidden C++ exception states: #wind=2
void __fastcall SupportLayer_onRequestAccess(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h]

  v2 = a1 + 1000; /*0xf4ab2*/
  if ( !a1 ) /*0xf4abe*/
    v2 = 0; /*0xf4abe*/
  v3 = *(_QWORD *)&qword_905FB0; /*0xf4ac2*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xf4acc*/
  {
    v6 = operator new(0x690u); /*0xf4ad8*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xf4ae6*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf4af7*/
    v3 = *(_QWORD *)&qword_905FB0; /*0xf4af9*/
  }
  if ( *(_QWORD *)(v3 + 1392) == v2 ) /*0xf4b07*/
  {
    v4 = *(_QWORD *)(a1 + 1024); /*0xf4b09*/
    v5 = v4 + 672; /*0xf4b10*/
    if ( !v4 ) /*0xf4b1a*/
      v5 = 0; /*0xf4b1a*/
    *(_QWORD *)(v3 + 1392) = v5; /*0xf4b1e*/
  }
}

// [3/8] Address: 0x665aa0
// Method: SupportLayer::createToggleButton
// Hidden C++ exception states: #wind=1
cocos2d::CCMenuItem *__fastcall SupportLayer_createToggleButton(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6)
{
  struct cocos2d::CCSprite *v9; // rbp
  struct cocos2d::CCSprite *v10; // rbx
  cocos2d::CCMenuItem *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  const char *v14; // rcx
  struct cocos2d::CCLabelBMFont *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  float *v18; // rax
  __int64 v19; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v22[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]

  v23 = a2; /*0x665ad2*/
  v9 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"); /*0x665af4*/
  v10 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"); /*0x665b04*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 160LL))(v9); /*0x665b1d*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 160LL))(v10); /*0x665b35*/
  v11 = CCMenuItemToggler_create((__int64)v9, (__int64)v10, a1, (__int64)sub_6666C0); /*0x665b4d*/
  CCMenuItemToggler_toggle((__int64)v11, a4); /*0x665b57*/
  (*(void (__fastcall **)(__int64, cocos2d::CCMenuItem *))(*(_QWORD *)a5 + 464LL))(a5, v11); /*0x665b6c*/
  v12 = *(_QWORD *)v11; /*0x665b6f*/
  cocos2d::CCNode::convertToNodeSpace(a5, v21, a6); /*0x665b7d*/
  (*(void (__fastcall **)(cocos2d::CCMenuItem *, __int64))(v12 + 184))(v11, v13); /*0x665b89*/
  *(_DWORD *)(*((_QWORD *)v11 + 47) + 372LL) = 1069547520; /*0x665b96*/
  *(_DWORD *)(*((_QWORD *)v11 + 48) + 372LL) = 1069547520; /*0x665ba7*/
  CCMenuItemToggler_toggle((__int64)v11, *((unsigned __int8 *)v11 + 392)); /*0x665bbc*/
  v14 = (const char *)a2; /*0x665bc1*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x665bc9*/
    v14 = *(const char **)a2; /*0x665bcb*/
  v15 = cocos2d::CCLabelBMFont::create(v14, (const char *)&qword_6FFF68); /*0x665bdb*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 576) + 464LL))( /*0x665bf2*/
    *(_QWORD *)(a1 + 576),
    v15);
  v16 = *(_QWORD *)v15; /*0x665bf5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v21, 0.0, 0.5); /*0x665c0b*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v16 + 288))(v15, v17); /*0x665c17*/
  v18 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 320LL))(v9); /*0x665c24*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v22, (float)((float)(*v18 * 0.5) * 0.80000001) + 8.0, 0.0); /*0x665c4a*/
  cocos2d::CCPoint::operator+(a6, v21, v19); /*0x665c5b*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v15 + 184LL))(v15, v21); /*0x665c6c*/
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 320LL))(v15) > 120.0 ) /*0x665c8d*/
  {
    (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 320LL))(v15); /*0x665c95*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 160LL))(v15); /*0x665ca8*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 168LL))(v15); /*0x665cb4*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 160LL))(v15); /*0x665ccb*/
  sub_3C310(a2); /*0x665cd5*/
  return v11; /*0x665cdd*/
}

// [4/8] Address: 0x666300
// Method: SupportLayer::onGetReward
// Hidden C++ exception states: #wind=2
__int64 __fastcall SupportLayer_onGetReward(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  cocos2d::CCObject *v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  void *v10; // [rsp+68h] [rbp+20h]

  v7 = 0; /*0x66631f*/
  v8 = 4; /*0x666324*/
  v9 = 15; /*0x66632d*/
  strcpy((char *)&v7, "0023"); /*0x66633c*/
  v2 = qword_905FE0; /*0x666345*/
  if ( !qword_905FE0 ) /*0x66634f*/
  {
    v10 = operator new(0x3E8u); /*0x66635b*/
    qword_905FE0 = sub_2D2B40(v10); /*0x666369*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x66637a*/
    v2 = qword_905FE0; /*0x66637c*/
  }
  result = GameStatsManager_unlockSpecialChest(v2, (__int64)&v7); /*0x666388*/
  v4 = result; /*0x66638d*/
  if ( result ) /*0x666393*/
  {
    v5 = sub_55E830(*(unsigned int *)(result + 64), 0); /*0x6663a3*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v5, 100); /*0x6663bc*/
    v6 = *(cocos2d::CCObject **)(v5 + 704); /*0x6663bf*/
    if ( v6 ) /*0x6663c9*/
      cocos2d::CCObject::release(v6); /*0x6663cb*/
    *(_QWORD *)(v5 + 704) = v4; /*0x6663d1*/
    cocos2d::CCObject::retain((cocos2d::CCObject *)v4); /*0x6663db*/
    if ( !*(_BYTE *)(v4 + 80) || (result = *(unsigned int *)(v5 + 696), *(_DWORD *)(v4 + 64) == (_DWORD)result) ) /*0x6663f0*/
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 720) + 336LL))(*(_QWORD *)(v5 + 720), 0); /*0x6663fe*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 720) + 936LL))(*(_QWORD *)(v5 + 720), 0); /*0x666410*/
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 712) + 336LL))(*(_QWORD *)(v5 + 712), 0); /*0x666422*/
      *(_BYTE *)(v5 + 700) = 1; /*0x666428*/
      if ( *(_BYTE *)(v5 + 701) ) /*0x66642f*/
        return RewardUnlockLayer_playRewardEffect(v5); /*0x66643b*/
    }
  }
  return result; /*0x666440*/
}

// [5/8] Address: 0x666450
// Method: SupportLayer::onClosePopup
__int64 __fastcall SupportLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x666468*/
  LOBYTE(v4) = 1; /*0x666471*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x666476*/
  *(_QWORD *)(a1 + 8) = 0; /*0x666481*/
  return result; /*0x66647c*/
}

// [6/8] Address: 0x666490
// Method: SupportLayer::uploadActionFinished
// Hidden C++ exception states: #wind=3
void __fastcall SupportLayer_uploadActionFinished(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  int v5; // ecx
  __int128 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-10h]
  __int64 v8; // [rsp+38h] [rbp-8h]
  void *v9; // [rsp+68h] [rbp+28h]

  if ( a3 == 49 && *(_QWORD *)(a1 + 16) ) /*0x6664aa*/
  {
    v4 = qword_905FD0; /*0x6664b5*/
    if ( !qword_905FD0 ) /*0x6664bf*/
    {
      v9 = operator new(0x6E8u); /*0x6664cb*/
      qword_905FD0 = sub_2723A0(v9); /*0x6664d8*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x6664e9*/
      v4 = qword_905FD0; /*0x6664eb*/
    }
    v5 = *(_DWORD *)(v4 + 1064) - *(_DWORD *)(v4 + 1068); /*0x6664f8*/
    if ( v5 == 2 ) /*0x666501*/
    {
      v6 = 0; /*0x666506*/
      *(_QWORD *)&v6 = sub_3C460(48); /*0x66651e*/
      v7 = 34; /*0x666522*/
      v8 = 47; /*0x66652a*/
      strcpy((char *)v6, "Success! Moderator access granted."); /*0x666539*/
    }
    else if ( v5 == 1 ) /*0x66655e*/
    {
      v6 = 0; /*0x666563*/
      *(_QWORD *)&v6 = sub_3C460(48); /*0x66657b*/
      v7 = 32; /*0x66657f*/
      v8 = 47; /*0x666587*/
      strcpy((char *)v6, "Success! Advisor access granted."); /*0x666596*/
    }
    else
    {
      if ( !*(_BYTE *)(v4 + 1076) ) /*0x6665b1*/
        return; /*0x6665b1*/
      v6 = 0; /*0x6665b6*/
      *(_QWORD *)&v6 = sub_3C460(48); /*0x6665d1*/
      v7 = 46; /*0x6665d5*/
      v8 = 47; /*0x6665dd*/
      strcpy((char *)v6, "Success! Leaderboard Moderator\naccess granted."); /*0x6665ec*/
    }
    UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 16), &v6); /*0x666627*/
  }
}

// [7/8] Address: 0x666640
// Method: SupportLayer::uploadActionFailed
void __fastcall SupportLayer_uploadActionFailed(__int64 a1, __int64 a2, int a3)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( a3 == 49 ) /*0x666644*/
  {
    if ( *(_QWORD *)(a1 + 16) ) /*0x66664b*/
    {
      v4 = 0; /*0x666664*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x66667a*/
      v5 = 22; /*0x666684*/
      v6 = 31; /*0x66668d*/
      strcpy((char *)v4, "Failed. Nothing found."); /*0x666696*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 16), &v4); /*0x6666b5*/
    }
  }
}

// [8/8] Address: 0x6672e0
// Method: SupportLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
void __fastcall SupportLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  const char *v7; // r9
  const char *v8; // r8
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  __int64 v11; // r8
  void *v12; // rcx
  void *v13; // [rsp+40h] [rbp-78h]
  void *Block[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v15; // [rsp+58h] [rbp-60h]
  unsigned __int64 v16; // [rsp+60h] [rbp-58h]
  _QWORD v17[4]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v18[4]; // [rsp+88h] [rbp-30h] BYREF

  if ( a3 )
  {
    v3 = GJAccountManager_sharedState(); /*0x667305*/
    sub_3E4F0(v18, v3 + 328); /*0x667319*/
    v4 = qword_905FD0; /*0x66731f*/
    if ( !qword_905FD0 ) /*0x667329*/
    {
      v13 = operator new(0x6E8u); /*0x667335*/
      qword_905FD0 = sub_2723A0(v13); /*0x667343*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x667354*/
      v4 = qword_905FD0; /*0x667356*/
    }
    sub_3E4F0(v17, v4 + 624); /*0x667369*/
    v6 = cocos2d::CCApplication::sharedApplication(v5); /*0x66736f*/
    v7 = (const char *)v18; /*0x667375*/
    if ( v18[3] > 0xFu ) /*0x667386*/
      v7 = (const char *)v18[0]; /*0x667386*/
    v8 = (const char *)v17; /*0x66738f*/
    if ( v17[3] > 0xFu ) /*0x66739d*/
      v8 = (const char *)v17[0]; /*0x66739d*/
    v9 = cocos2d::CCString::createWithFormat(
           "\n\nGame: %s\n\nUserID: %s\n\nAccount: %s\n\nPlatform: %i\n\nVersion: %i - %i",
           (const char *)&qword_714F40,
           v8,
           v7,
           *(unsigned __int8 *)(v6 + 242),
           22,
           51);
    CString = cocos2d::CCString::getCString(v9); /*0x6673d5*/
    *(_OWORD *)Block = 0; /*0x6673de*/
    v15 = 0; /*0x6673e3*/
    v16 = 0; /*0x6673e8*/
    v11 = -1; /*0x6673ed*/
    do /*0x6673f7*/
      ++v11; /*0x6673f4*/
    while ( CString[v11] ); /*0x6673f7*/
    sub_3C230(Block); /*0x667406*/
    sub_3C310(v17); /*0x667411*/
    sub_3C310(v18); /*0x66741f*/
    if ( v16 > 0xF ) /*0x66742d*/
    {
      v12 = Block[0]; /*0x667432*/
      if ( v16 + 1 >= 0x1000 ) /*0x667441*/
      {
        v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x667447*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x667456*/
          invoke_watson(0, 0, 0, 0, 0); /*0x667467*/
      }
      j_j_free(v12); /*0x66746e*/
    }
  }
}

// Address: 0x664ea0
// Method: SupportLayer::customSetup
// Hidden C++ exception states: #wind=12
__int64 __fastcall SupportLayer_customSetup(_QWORD **a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  cocos2d::CCObject *v4; // rbx
  cocos2d::CCObject *v5; // rsi
  __int64 v6; // rax
  cocos2d::CCObject *v7; // rbx
  cocos2d::CCObject *v8; // r13
  __int64 v9; // rax
  cocos2d::CCObject *v10; // rbx
  cocos2d::CCObject *v11; // r12
  __int64 v12; // rax
  cocos2d::CCObject *v13; // rbx
  cocos2d::CCObject *v14; // r14
  cocos2d::CCObject *v15; // rbx
  cocos2d::CCObject *v16; // rdi
  struct cocos2d::CCMenu *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  void (__fastcall **v20)(void **, _QWORD); // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  char v31; // bl
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  cocos2d::CCObject *v35; // rbx
  cocos2d::CCObject *v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  cocos2d::CCObject *v41; // rbx
  cocos2d::CCObject *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  float v46; // xmm6_4
  float v47; // xmm7_4
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r12
  struct cocos2d::CCSprite *v53; // rsi
  __int64 v54; // rbx
  __int64 v55; // rax
  int v56; // eax
  cocos2d::CCObject *v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  struct cocos2d::CCSprite *v62; // r14
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // eax
  cocos2d::CCObject *v67; // rdi
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  struct cocos2d::CCLabelBMFont *v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rbx
  cocos2d::CCString *v77; // rax
  int v78; // ebx
  void *v79; // r8
  cocos2d::CCNode *v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rax
  struct cocos2d::CCAction *v83; // rax
  void **v85; // [rsp+50h] [rbp-59h] BYREF
  float v86; // [rsp+58h] [rbp-51h] BYREF
  float v87; // [rsp+5Ch] [rbp-4Dh]
  void *v88; // [rsp+60h] [rbp-49h] BYREF
  void **v89; // [rsp+68h] [rbp-41h] BYREF
  void *v90; // [rsp+70h] [rbp-39h] BYREF
  void *Block[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v92; // [rsp+88h] [rbp-21h]
  unsigned __int64 v93; // [rsp+90h] [rbp-19h]

  v2 = cocos2d::CCDirector::sharedDirector(a1);
  cocos2d::CCDirector::getWinSize(v2, &v86);
  v89 = (void **)operator new(0x2C8u);
  v3 = ButtonSprite_ButtonSprite((__int64)v89);
  v4 = (cocos2d::CCObject *)v3;
  if ( v3 )
  {
    if ( ButtonSprite_init(
           v3,
           (__int64)"Links",
           70,
           0,
           1056964608,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v4);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1);
      LODWORD(v4) = 0;
    }
  }
  v5 = CCMenuItemSpriteExtra_create((int)v4, 0, (int)a1, (__int64)sub_666A10);
  v89 = (void **)v5;
  v88 = operator new(0x2C8u);
  v6 = ButtonSprite_ButtonSprite((__int64)v88);
  v7 = (cocos2d::CCObject *)v6;
  if ( v6 )
  {
    if ( ButtonSprite_init(
           v6,
           (__int64)"Contact",
           70,
           0,
           1056964608,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v7);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1);
      LODWORD(v7) = 0;
    }
  }
  v8 = CCMenuItemSpriteExtra_create((int)v7, 0, (int)a1, (__int64)sub_666910);
  v88 = operator new(0x2C8u);
  v9 = ButtonSprite_ButtonSprite((__int64)v88);
  v10 = (cocos2d::CCObject *)v9;
  if ( v9 )
  {
    if ( ButtonSprite_init(
           v9,
           (__int64)"Privacy",
           70,
           0,
           1056964608,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v10);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1);
      LODWORD(v10) = 0;
    }
  }
  v11 = CCMenuItemSpriteExtra_create((int)v10, 0, (int)a1, (__int64)sub_3A5E40);
  v88 = operator new(0x2C8u);
  v12 = ButtonSprite_ButtonSprite((__int64)v88);
  v13 = (cocos2d::CCObject *)v12;
  if ( v12 )
  {
    if ( ButtonSprite_init(
           v12,
           (__int64)"ToS",
           70,
           0,
           1056964608,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v13);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1);
      LODWORD(v13) = 0;
    }
  }
  v14 = CCMenuItemSpriteExtra_create((int)v13, 0, (int)a1, (__int64)sub_3A5E70);
  v88 = operator new(0x2C8u);
  v15 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v88);
  if ( v15 )
  {
    if ( ButtonSprite_init(
           (__int64)v15,
           (__int64)"SFX",
           70,
           0,
           1056964608,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v15);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1);
      LODWORD(v15) = 0;
    }
  }
  v16 = CCMenuItemSpriteExtra_create((int)v15, 0, (int)a1, (__int64)sub_665D10);
  v17 = cocos2d::CCMenu::create(v5, v8, v11, v14, v16, 0);
  v18 = *(_QWORD *)v17;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, v86 * 0.5, (float)(v87 * 0.5) + 60.0);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v18 + 184))(v17, v19);
  v20 = (void (__fastcall **)(void **, _QWORD))*v89;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, -100.0, 20.0);
  v20[23](v89, v21);
  v22 = *(_QWORD *)v8;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, 0.0, 20.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v22 + 184))(v8, v23);
  v24 = *(_QWORD *)v16;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, 100.0, 20.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v24 + 184))(v16, v25);
  v26 = *(_QWORD *)v11;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, -50.0, -20.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v26 + 184))(v11, v27);
  v28 = *(_QWORD *)v14;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, 50.0, -20.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v28 + 184))(v14, v29);
  v89 = Block;
  v30 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v90 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v90);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v30 = qword_905FD0;
  }
  v31 = *(_BYTE *)(v30 + 957);
  v92 = 15;
  v93 = 15;
  qmemcpy(Block, "Low Detail Mod", 14);
  HIWORD(Block[1]) = (unsigned __int8)aLowDetailMode[14];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, (float)(v86 * 0.5) - 160.0, (float)(v87 * 0.5) - 90.0);
  SupportLayer_createToggleButton((__int64)a1, (__int64)Block, v33, v31 == 0, (__int64)v17, v32);
  v34 = GJAccountManager_sharedState();
  if ( *(_DWORD *)(v34 + 360) - *(_DWORD *)(v34 + 364) > 0 )
  {
    v85 = (void **)operator new(0x2C8u);
    v35 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v85);
    if ( v35 )
    {
      if ( ButtonSprite_init(
             (__int64)v35,
             (__int64)"Req",
             220,
             0,
             1053609165,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_04.png",
             1103626240) )
      {
        cocos2d::CCObject::autorelease(v35);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v35 + 8LL))(v35, 1);
        LODWORD(v35) = 0;
      }
    }
    v36 = CCMenuItemSpriteExtra_create((int)v35, 0, (int)a1, (__int64)sub_666210);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v17 + 464LL))(v17, v36);
    v37 = *(_QWORD *)v36;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, (float)(v86 * 0.5) + 150.0, (float)(v87 * 0.5) - 90.0);
    cocos2d::CCNode::convertToNodeSpace(v17, &v90, v38);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v37 + 184))(v36, v39);
    if ( (float)((float)rand() / 32767.0) > 0.89999998 )
    {
      v85 = Block;
      *(_OWORD *)Block = 0;
      v92 = 4;
      v93 = 15;
      strcpy((char *)Block, "0023");
      v40 = qword_905FE0;
      if ( !qword_905FE0 )
      {
        v90 = operator new(0x3E8u);
        qword_905FE0 = sub_2D2B40(v90);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
        v40 = qword_905FE0;
      }
      if ( !GameStatsManager_isSpecialChestUnlocked(v40, Block) )
      {
        v85 = (void **)operator new(0x2C8u);
        v41 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v85);
        if ( v41 )
        {
          if ( ButtonSprite_init(
                 (__int64)v41,
                 (__int64)"?",
                 220,
                 0,
                 1058642330,
                 0,
                 "goldFont.fnt",
                 (__int64)"GJ_button_05.png",
                 1103626240) )
          {
            cocos2d::CCObject::autorelease(v41);
          }
          else
          {
            (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v41 + 8LL))(v41, 1);
            LODWORD(v41) = 0;
          }
        }
        v42 = CCMenuItemSpriteExtra_create((int)v41, 0, (int)a1, (__int64)SupportLayer_onGetReward);
        (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v17 + 464LL))(v17, v42);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, -50.0, 0.0);
        v44 = v43;
        v45 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v36 + 200LL))(v36);
        cocos2d::CCPoint::operator+(v45, &v89, v44);
        (*(void (__fastcall **)(cocos2d::CCObject *, void ***))(*(_QWORD *)v42 + 184LL))(v42, &v89);
      }
    }
  }
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCMenu *, __int64))(*a1[72] + 456LL))(a1[72], v17, 1);
  v46 = (float)(v86 * 0.5) - 55.0;
  v47 = (float)(v86 * 0.5) + 45.0;
  v52 = cocos2d::CCMenu::create(v49, v48, v50, v51);
  v53 = cocos2d::CCSprite::createWithSpriteFrameName("developedBy_001.png");
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSprite *))(*a1[72] + 464LL))(a1[72], v53);
  v54 = *(_QWORD *)v53;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, v46, (float)(v87 * 0.5) + 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v54 + 184))(v53, v55);
  v56 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("robtoplogo_small.png");
  v57 = CCMenuItemSpriteExtra_create(v56, 0, (int)a1, (__int64)sub_470170);
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v52 + 464LL))(v52, v57);
  v58 = *(_QWORD *)v57;
  v59 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v53 + 200LL))(v53);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, v47, *(float *)(v59 + 4));
  cocos2d::CCNode::convertToNodeSpace(v52, &v90, v60);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v58 + 184))(v57, v61);
  v62 = cocos2d::CCSprite::createWithSpriteFrameName("poweredBy_001.png");
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSprite *))(*a1[72] + 464LL))(a1[72], v62);
  v63 = *(_QWORD *)v62;
  v64 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v53 + 200LL))(v53);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, v46, *(float *)(v64 + 4) - 35.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v63 + 184))(v62, v65);
  v66 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("cocos2DxLogo.png");
  v67 = CCMenuItemSpriteExtra_create(v66, 0, (int)a1, (__int64)sub_6661E0);
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v52 + 464LL))(v52, v67);
  v68 = *(_QWORD *)v67;
  v69 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v62 + 200LL))(v62);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, v47, *(float *)(v69 + 4));
  cocos2d::CCNode::convertToNodeSpace(v52, &v90, v70);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v68 + 184))(v67, v71);
  v72 = cocos2d::CCLabelBMFont::create("FMOD Studio by Firelight Technologies Pty Ltd.", "goldFont.fnt");
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v72 + 160LL))(v72);
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCLabelBMFont *))(*a1[72] + 464LL))(a1[72], v72);
  v73 = *(_QWORD *)v72;
  v74 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v62 + 200LL))(v62);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, v86 * 0.5, *(float *)(v74 + 4) - 26.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v73 + 184))(v72, v75);
  v76 = AchievementManager_sharedState();
  *(_OWORD *)Block = 0;
  v92 = 0;
  v93 = 0;
  Block[0] = (void *)sub_3C460(32);
  v92 = 21;
  v93 = 31;
  strcpy((char *)Block[0], "geometry.ach.secret08");
  v77 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v76 + 352), Block);
  v78 = cocos2d::CCString::intValue(v77);
  if ( v93 > 0xF )
  {
    v79 = Block[0];
    if ( v93 + 1 >= 0x1000 )
    {
      v79 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v79 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v79);
  }
  if ( v78 < 100 )
  {
    v80 = cocos2d::CCLabelBMFont::create("\"blockbite\"", "chatFont.fnt");
    ((void (__fastcall *)(_QWORD **, cocos2d::CCNode *, __int64))(*a1)[57])(a1, v80, 3);
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v80 + 160LL))(v80);
    (**((void (__fastcall ***)(__int64, void *))v80 + 46))((__int64)v80 + 368, &unk_6FF6C8);
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v80 + 46) + 40LL))((__int64)v80 + 368, 0);
    v81 = *(_QWORD *)v80;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, v86 - 32.0, 8.0);
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v81 + 184))(v80, v82);
    v83 = cocos2d::CCFadeTo::create(10.0, 0x64u);
    cocos2d::CCNode::runAction(v80, v83);
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1[72] + 456LL))(a1[72], v52, 2);
}
