#include <Geode/binding/ClearPlatformerSavesOptionsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0xa33a0
// Method: ClearPlatformerSavesOptionsPopup::init
// Hidden C++ exception states: #wind=4
char __fastcall ClearPlatformerSavesOptionsPopup_init(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm7_4
  struct cocos2d::CCSprite *v11; // rax
  int v12; // ebx
  cocos2d::CCObject *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  char *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  bool GameVariable; // al
  __int64 v33; // rax
  __int128 *v34; // [rsp+80h] [rbp-80h] BYREF
  __int128 v35; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  float v38; // [rsp+A8h] [rbp-58h] BYREF
  float v39; // [rsp+ACh] [rbp-54h]
  _BYTE v40[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int128 *v44; // [rsp+D8h] [rbp-28h]
  void *v45; // [rsp+E0h] [rbp-20h]
  _BYTE v46[8]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v47[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int64 v50; // [rsp+110h] [rbp+10h]

  result = sub_6060E0(a1, 0, 0, a4, 1120403456, 1, 0); /*0xa3423*/
  if ( result ) /*0xa342a*/
  {
    v7 = cocos2d::CCDirector::sharedDirector(v6); /*0xa3430*/
    cocos2d::CCDirector::getWinSize(v7, &v38); /*0xa343d*/
    v8 = v38 * 0.5; /*0xa3452*/
    v9 = v39 * 0.5; /*0xa345d*/
    v10 = (float)(v39 * 0.5) + 50.0; /*0xa3466*/
    v11 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0xa3475*/
    v12 = (int)v11; /*0xa347b*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v11 + 160LL))(v11); /*0xa3498*/
    v13 = CCMenuItemSpriteExtra_create(v12, 0, a1, (__int64)sub_9C4B8); /*0xa34ae*/
    *((_DWORD *)v13 + 93) = 1069547520; /*0xa34b1*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v13); /*0xa34cf*/
    v14 = *(_QWORD *)v13; /*0xa34d2*/
    v15 = *(_QWORD *)(a1 + 552); /*0xa34d5*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v40, (float)(v8 - 120.0) + 8.0, v10 - 12.0); /*0xa34ff*/
    cocos2d::CCNode::convertToNodeSpace(v15, &v34, v16); /*0xa350f*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v14 + 184))(v13, v17); /*0xa351b*/
    v48 = 0; /*0xa3524*/
    v18 = sub_3C460(192); /*0xa3532*/
    *(_QWORD *)&v48 = v18; /*0xa3535*/
    v49 = 184; /*0xa3539*/
    v50 = 191; /*0xa3541*/
    strcpy( /*0xa3553*/
      (char *)v18,
      "By default, online backup keeps platformer saves only for <cy>favorite</c> levels.\n"
      "Enable this to exclude those too, so <cr>no</c> platformer saves are backed up.\n"
      "\n"
      "<cg>Default:</c> Off");
    v34 = &v41; /*0xa35de*/
    v41 = 0; /*0xa35e5*/
    v42 = 0; /*0xa35ec*/
    v43 = 0; /*0xa35f0*/
    v19 = sub_3C460(192); /*0xa35f9*/
    *(_QWORD *)&v41 = v19; /*0xa3601*/
    v42 = 184; /*0xa3605*/
    v43 = 191; /*0xa360d*/
    *(_OWORD *)v19 = *(_OWORD *)v18; /*0xa361a*/
    *(_OWORD *)(v19 + 16) = *(_OWORD *)(v18 + 16); /*0xa3622*/
    *(_OWORD *)(v19 + 32) = *(_OWORD *)(v18 + 32); /*0xa362b*/
    *(_OWORD *)(v19 + 48) = *(_OWORD *)(v18 + 48); /*0xa3634*/
    *(_OWORD *)(v19 + 64) = *(_OWORD *)(v18 + 64); /*0xa363d*/
    *(_OWORD *)(v19 + 80) = *(_OWORD *)(v18 + 80); /*0xa3646*/
    *(_OWORD *)(v19 + 96) = *(_OWORD *)(v18 + 96); /*0xa364f*/
    *(_OWORD *)(v19 + 112) = *(_OWORD *)(v18 + 112); /*0xa365c*/
    *(_OWORD *)(v19 + 128) = *(_OWORD *)(v18 + 128); /*0xa3668*/
    *(_OWORD *)(v19 + 144) = *(_OWORD *)(v18 + 144); /*0xa3673*/
    *(_OWORD *)(v19 + 160) = *(_OWORD *)(v18 + 160); /*0xa367f*/
    *(_QWORD *)(v19 + 176) = *(_QWORD *)(v18 + 176); /*0xa368a*/
    *(_BYTE *)(v19 + 184) = *(_BYTE *)(v18 + 184); /*0xa3696*/
    v36 = 12; /*0xa36a0*/
    v37 = 15; /*0xa36a8*/
    strcpy((char *)&v35, "Backup Saves"); /*0xa36b8*/
    BYTE13(v35) = 0; /*0xa36c3*/
    HIWORD(v35) = 0; /*0xa36c3*/
    v20 = InfoAlertButton_create((__int64)&v35, (__int64)&v41); /*0xa36db*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v20); /*0xa36f2*/
    v21 = *(_QWORD *)v20; /*0xa36f5*/
    v22 = *(_QWORD *)(a1 + 552); /*0xa36f8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v34, (float)(v8 + 120.0) - 16.0, v10 - 16.0); /*0xa3722*/
    cocos2d::CCNode::convertToNodeSpace(v22, v40, v23); /*0xa3732*/
    (*(void (__fastcall **)(char *, __int64))(v21 + 184))(v20, v24); /*0xa373e*/
    v44 = &v35; /*0xa3748*/
    v35 = 0; /*0xa374f*/
    v36 = 0; /*0xa3753*/
    v37 = 0; /*0xa3757*/
    *(_QWORD *)&v35 = sub_3C460(32); /*0xa3765*/
    v36 = 27; /*0xa3769*/
    v37 = 31; /*0xa3771*/
    strcpy((char *)v35, "No favorite saves\nin backup"); /*0xa3780*/
    v25 = qword_905FD0; /*0xa37a9*/
    if ( !qword_905FD0 ) /*0xa37b3*/
    {
      v45 = operator new(0x6E8u); /*0xa37bf*/
      qword_905FD0 = sub_2723A0(v45); /*0xa37cc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa37dd*/
      v25 = qword_905FD0; /*0xa37df*/
    }
    v26 = *(_QWORD *)(a1 + 584); /*0xa37e6*/
    v27 = *(_QWORD *)(a1 + 552); /*0xa37ed*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v46, 8.0, 0.0); /*0xa3803*/
    v29 = v28; /*0xa3809*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v47, v8 - 68.0, v9); /*0xa3821*/
    v31 = v30; /*0xa3827*/
    GameVariable = GameManager_getGameVariable(v25, "0237"); /*0xa3834*/
    v33 = sub_6D440( /*0xa3896*/
            (unsigned int)&v35,
            (unsigned int)sub_A3930,
            GameVariable,
            v27,
            v31,
            a1,
            v26,
            1061997773,
            1056964608,
            1124204544,
            v29,
            (__int64)&qword_6FFF68,
            0,
            0,
            0);
    *(_QWORD *)(a1 + 1000) = v33; /*0xa389b*/
    *(_DWORD *)(*(_QWORD *)(v33 + 376) + 372LL) = 1065353216; /*0xa38a9*/
    *(_DWORD *)(*(_QWORD *)(v33 + 384) + 372LL) = 1065353216; /*0xa38bb*/
    CCMenuItemToggler_toggle(v33, *(unsigned __int8 *)(v33 + 392)); /*0xa38d0*/
    j_j_free((void *)v18); /*0xa38de*/
    return 1; /*0xa38e3*/
  }
  return result; /*0xa38e5*/
}
