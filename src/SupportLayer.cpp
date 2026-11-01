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
