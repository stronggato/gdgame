#include <Geode/binding/GauntletNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x2fd8e0
// Method: GauntletNode::~GauntletNode
cocos2d::CCNode *__fastcall GauntletNode__dtor_GauntletNode(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &GauntletNode::`vftable'; /*0x2fd8f6*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 43); /*0x2fd8f9*/
  if ( v4 ) /*0x2fd903*/
    cocos2d::CCObject::release(v4); /*0x2fd905*/
  cocos2d::CCNode::~CCNode(Block); /*0x2fd90e*/
  if ( (a2 & 1) != 0 ) /*0x2fd919*/
    j_j_free(Block); /*0x2fd923*/
  return Block; /*0x2fd92b*/
}

// [3/4] Address: 0x2ff5b0
// Method: GauntletNode::onClaimReward
__int64 __fastcall GauntletNode_onClaimReward(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1; /*0x2ff5b9*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 320) + 336LL))(*(_QWORD *)(a1 + 320), a2); /*0x2ff5c5*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 336LL))(*(_QWORD *)(a1 + 328), 0);
}

// [4/4] Address: 0x2ff5f0
// Method: GauntletNode::frameForType
__int64 __fastcall GauntletNode_frameForType(__int64 a1, int a2)
{
  char *v3; // rax
  __int64 result; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  char *v47; // rax
  char *v48; // rax
  char *v49; // rax
  char *v50; // rax
  char *v51; // rax
  char *v52; // rax
  char *v53; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  char *v59; // rax
  char *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rbx
  char *v64; // rax
  __int64 v65; // [rsp+50h] [rbp+18h] BYREF

  switch ( a2 ) /*0x2ff61b*/
  {
    case 2: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff625*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff628*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff62c*/
      v3 = (char *)sub_3C460(32); /*0x2ff630*/
      *(_QWORD *)a1 = v3; /*0x2ff635*/
      *(_QWORD *)(a1 + 16) = 18; /*0x2ff638*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff640*/
      strcpy(v3, "island_ice_001.png"); /*0x2ff64f*/
      result = a1; /*0x2ff661*/
      break; /*0x2ff669*/
    case 3: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff672*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff675*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff679*/
      v5 = (char *)sub_3C460(32); /*0x2ff67d*/
      *(_QWORD *)a1 = v5; /*0x2ff682*/
      *(_QWORD *)(a1 + 16) = 21; /*0x2ff685*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff68d*/
      strcpy(v5, "island_poison_001.png"); /*0x2ff69c*/
      result = a1; /*0x2ff6b6*/
      break; /*0x2ff6be*/
    case 4: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff6c7*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff6ca*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff6ce*/
      v6 = (char *)sub_3C460(32); /*0x2ff6d2*/
      *(_QWORD *)a1 = v6; /*0x2ff6d7*/
      *(_QWORD *)(a1 + 16) = 21; /*0x2ff6da*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff6e2*/
      strcpy(v6, "island_shadow_001.png"); /*0x2ff6f1*/
      result = a1; /*0x2ff70b*/
      break; /*0x2ff713*/
    case 5: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff71c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff71f*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff723*/
      v7 = (char *)sub_3C460(32); /*0x2ff727*/
      *(_QWORD *)a1 = v7; /*0x2ff72c*/
      *(_QWORD *)(a1 + 16) = 19; /*0x2ff72f*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff737*/
      strcpy(v7, "island_lava_001.png"); /*0x2ff746*/
      result = a1; /*0x2ff762*/
      break; /*0x2ff76a*/
    case 6: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff773*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff776*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff77a*/
      v8 = (char *)sub_3C460(32); /*0x2ff77e*/
      *(_QWORD *)a1 = v8; /*0x2ff783*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ff786*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff78e*/
      strcpy(v8, "island_bonus_001.png"); /*0x2ff79d*/
      result = a1; /*0x2ff7ad*/
      break; /*0x2ff7b5*/
    case 7: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff7be*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff7c1*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff7c5*/
      v9 = (char *)sub_3C460(32); /*0x2ff7c9*/
      *(_QWORD *)a1 = v9; /*0x2ff7ce*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ff7d1*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff7d9*/
      strcpy(v9, "island_chaos_001.png"); /*0x2ff7e8*/
      result = a1; /*0x2ff7f8*/
      break; /*0x2ff800*/
    case 8: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff809*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff80c*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff810*/
      v10 = (char *)sub_3C460(32); /*0x2ff814*/
      *(_QWORD *)a1 = v10; /*0x2ff819*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ff81c*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff824*/
      strcpy(v10, "island_demon_001.png"); /*0x2ff833*/
      result = a1; /*0x2ff843*/
      break; /*0x2ff84b*/
    case 9: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff854*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff857*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff85b*/
      v11 = (char *)sub_3C460(32); /*0x2ff85f*/
      *(_QWORD *)a1 = v11; /*0x2ff864*/
      *(_QWORD *)(a1 + 16) = 19; /*0x2ff867*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff86f*/
      strcpy(v11, "island_time_001.png"); /*0x2ff87e*/
      result = a1; /*0x2ff89a*/
      break; /*0x2ff8a2*/
    case 10: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff8ab*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff8ae*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff8b2*/
      v12 = (char *)sub_3C460(32); /*0x2ff8b6*/
      *(_QWORD *)a1 = v12; /*0x2ff8bb*/
      *(_QWORD *)(a1 + 16) = 22; /*0x2ff8be*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff8c6*/
      strcpy(v12, "island_crystal_001.png"); /*0x2ff8d5*/
      result = a1; /*0x2ff8f0*/
      break; /*0x2ff8f8*/
    case 11: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff901*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff904*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff908*/
      v13 = (char *)sub_3C460(32); /*0x2ff90c*/
      *(_QWORD *)a1 = v13; /*0x2ff911*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ff914*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff91c*/
      strcpy(v13, "island_magic_001.png"); /*0x2ff92b*/
      result = a1; /*0x2ff93b*/
      break; /*0x2ff943*/
    case 12: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff94c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff94f*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff953*/
      v14 = (char *)sub_3C460(32); /*0x2ff957*/
      *(_QWORD *)a1 = v14; /*0x2ff95c*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ff95f*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff967*/
      strcpy(v14, "island_spike_001.png"); /*0x2ff976*/
      result = a1; /*0x2ff986*/
      break; /*0x2ff98e*/
    case 13: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff997*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff99a*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff99e*/
      v15 = (char *)sub_3C460(32); /*0x2ff9a2*/
      *(_QWORD *)a1 = v15; /*0x2ff9a7*/
      *(_QWORD *)(a1 + 16) = 22; /*0x2ff9aa*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ff9b2*/
      strcpy(v15, "island_monster_001.png"); /*0x2ff9c1*/
      result = a1; /*0x2ff9dc*/
      break; /*0x2ff9e4*/
    case 14: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ff9ed*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ff9f0*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ff9f4*/
      v16 = (char *)sub_3C460(32); /*0x2ff9f8*/
      *(_QWORD *)a1 = v16; /*0x2ff9fd*/
      *(_QWORD *)(a1 + 16) = 19; /*0x2ffa00*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffa08*/
      strcpy(v16, "island_doom_001.png"); /*0x2ffa17*/
      result = a1; /*0x2ffa33*/
      break; /*0x2ffa3b*/
    case 15: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffa44*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffa47*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffa4b*/
      v17 = (char *)sub_3C460(32); /*0x2ffa4f*/
      *(_QWORD *)a1 = v17; /*0x2ffa54*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffa57*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffa5f*/
      strcpy(v17, "island_death_001.png"); /*0x2ffa6e*/
      result = a1; /*0x2ffa7e*/
      break; /*0x2ffa86*/
    case 16: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffa8f*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffa92*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffa96*/
      v18 = (char *)sub_3C460(32); /*0x2ffa9a*/
      *(_QWORD *)a1 = v18; /*0x2ffa9f*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffaa2*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffaaa*/
      strcpy(v18, "island_new01_001.png"); /*0x2ffab9*/
      result = a1; /*0x2ffac9*/
      break; /*0x2ffad1*/
    case 17: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffada*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffadd*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffae1*/
      v19 = (char *)sub_3C460(32); /*0x2ffae5*/
      *(_QWORD *)a1 = v19; /*0x2ffaea*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffaed*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffaf5*/
      strcpy(v19, "island_new02_001.png"); /*0x2ffb04*/
      result = a1; /*0x2ffb14*/
      break; /*0x2ffb1c*/
    case 18: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffb25*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffb28*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffb2c*/
      v20 = (char *)sub_3C460(32); /*0x2ffb30*/
      *(_QWORD *)a1 = v20; /*0x2ffb35*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffb38*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffb40*/
      strcpy(v20, "island_new03_001.png"); /*0x2ffb4f*/
      result = a1; /*0x2ffb5f*/
      break; /*0x2ffb67*/
    case 19: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffb70*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffb73*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffb77*/
      v21 = (char *)sub_3C460(32); /*0x2ffb7b*/
      *(_QWORD *)a1 = v21; /*0x2ffb80*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffb83*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffb8b*/
      strcpy(v21, "island_new04_001.png"); /*0x2ffb9a*/
      result = a1; /*0x2ffbaa*/
      break; /*0x2ffbb2*/
    case 20: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffbbb*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffbbe*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffbc2*/
      v22 = (char *)sub_3C460(32); /*0x2ffbc6*/
      *(_QWORD *)a1 = v22; /*0x2ffbcb*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffbce*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffbd6*/
      strcpy(v22, "island_new05_001.png"); /*0x2ffbe5*/
      result = a1; /*0x2ffbf5*/
      break; /*0x2ffbfd*/
    case 21: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffc06*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffc09*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffc0d*/
      v23 = (char *)sub_3C460(32); /*0x2ffc11*/
      *(_QWORD *)a1 = v23; /*0x2ffc16*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffc19*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffc21*/
      strcpy(v23, "island_new06_001.png"); /*0x2ffc30*/
      result = a1; /*0x2ffc40*/
      break; /*0x2ffc48*/
    case 22: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffc51*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffc54*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffc58*/
      v24 = (char *)sub_3C460(32); /*0x2ffc5c*/
      *(_QWORD *)a1 = v24; /*0x2ffc61*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffc64*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffc6c*/
      strcpy(v24, "island_new07_001.png"); /*0x2ffc7b*/
      result = a1; /*0x2ffc8b*/
      break; /*0x2ffc93*/
    case 23: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffc9c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffc9f*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffca3*/
      v25 = (char *)sub_3C460(32); /*0x2ffca7*/
      *(_QWORD *)a1 = v25; /*0x2ffcac*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffcaf*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffcb7*/
      strcpy(v25, "island_new08_001.png"); /*0x2ffcc6*/
      result = a1; /*0x2ffcd6*/
      break; /*0x2ffcde*/
    case 24: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffce7*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffcea*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffcee*/
      v26 = (char *)sub_3C460(32); /*0x2ffcf2*/
      *(_QWORD *)a1 = v26; /*0x2ffcf7*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffcfa*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffd02*/
      strcpy(v26, "island_new09_001.png"); /*0x2ffd11*/
      result = a1; /*0x2ffd21*/
      break; /*0x2ffd29*/
    case 25: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffd32*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffd35*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffd39*/
      v27 = (char *)sub_3C460(32); /*0x2ffd3d*/
      *(_QWORD *)a1 = v27; /*0x2ffd42*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffd45*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffd4d*/
      strcpy(v27, "island_new10_001.png"); /*0x2ffd5c*/
      result = a1; /*0x2ffd6c*/
      break; /*0x2ffd74*/
    case 26: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffd7d*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffd80*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffd84*/
      v28 = (char *)sub_3C460(32); /*0x2ffd88*/
      *(_QWORD *)a1 = v28; /*0x2ffd8d*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffd90*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffd98*/
      strcpy(v28, "island_new11_001.png"); /*0x2ffda7*/
      result = a1; /*0x2ffdb7*/
      break; /*0x2ffdbf*/
    case 27: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffdc8*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffdcb*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffdcf*/
      v29 = (char *)sub_3C460(32); /*0x2ffdd3*/
      *(_QWORD *)a1 = v29; /*0x2ffdd8*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffddb*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffde3*/
      strcpy(v29, "island_new12_001.png"); /*0x2ffdf2*/
      result = a1; /*0x2ffe02*/
      break; /*0x2ffe0a*/
    case 28: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffe13*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffe16*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffe1a*/
      v30 = (char *)sub_3C460(32); /*0x2ffe1e*/
      *(_QWORD *)a1 = v30; /*0x2ffe23*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffe26*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffe2e*/
      strcpy(v30, "island_new13_001.png"); /*0x2ffe3d*/
      result = a1; /*0x2ffe4d*/
      break; /*0x2ffe55*/
    case 29: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffe5e*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffe61*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffe65*/
      v31 = (char *)sub_3C460(32); /*0x2ffe69*/
      *(_QWORD *)a1 = v31; /*0x2ffe6e*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffe71*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffe79*/
      strcpy(v31, "island_new14_001.png"); /*0x2ffe88*/
      result = a1; /*0x2ffe98*/
      break; /*0x2ffea0*/
    case 30: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffea9*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffeac*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffeb0*/
      v32 = (char *)sub_3C460(32); /*0x2ffeb4*/
      *(_QWORD *)a1 = v32; /*0x2ffeb9*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2ffebc*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffec4*/
      strcpy(v32, "island_new15_001.png"); /*0x2ffed3*/
      result = a1; /*0x2ffee3*/
      break; /*0x2ffeeb*/
    case 31: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2ffef4*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2ffef7*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2ffefb*/
      v33 = (char *)sub_3C460(32); /*0x2ffeff*/
      *(_QWORD *)a1 = v33; /*0x2fff04*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2fff07*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2fff0f*/
      strcpy(v33, "island_new16_001.png"); /*0x2fff1e*/
      result = a1; /*0x2fff2e*/
      break; /*0x2fff36*/
    case 32: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2fff3f*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2fff42*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2fff46*/
      v34 = (char *)sub_3C460(32); /*0x2fff4a*/
      *(_QWORD *)a1 = v34; /*0x2fff4f*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2fff52*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2fff5a*/
      strcpy(v34, "island_new17_001.png"); /*0x2fff69*/
      result = a1; /*0x2fff79*/
      break; /*0x2fff81*/
    case 33: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2fff8a*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2fff8d*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2fff91*/
      v35 = (char *)sub_3C460(32); /*0x2fff95*/
      *(_QWORD *)a1 = v35; /*0x2fff9a*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2fff9d*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2fffa5*/
      strcpy(v35, "island_new18_001.png"); /*0x2fffb4*/
      result = a1; /*0x2fffc4*/
      break; /*0x2fffcc*/
    case 34: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x2fffd5*/
      *(_QWORD *)(a1 + 16) = 0; /*0x2fffd8*/
      *(_QWORD *)(a1 + 24) = 0; /*0x2fffdc*/
      v36 = (char *)sub_3C460(32); /*0x2fffe0*/
      *(_QWORD *)a1 = v36; /*0x2fffe5*/
      *(_QWORD *)(a1 + 16) = 20; /*0x2fffe8*/
      *(_QWORD *)(a1 + 24) = 31; /*0x2ffff0*/
      strcpy(v36, "island_new19_001.png"); /*0x2fffff*/
      result = a1; /*0x30000f*/
      break; /*0x300017*/
    case 35: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300020*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300023*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300027*/
      v37 = (char *)sub_3C460(32); /*0x30002b*/
      *(_QWORD *)a1 = v37; /*0x300030*/
      *(_QWORD *)(a1 + 16) = 20; /*0x300033*/
      *(_QWORD *)(a1 + 24) = 31; /*0x30003b*/
      strcpy(v37, "island_new20_001.png"); /*0x30004a*/
      result = a1; /*0x30005a*/
      break; /*0x300062*/
    case 36: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x30006b*/
      *(_QWORD *)(a1 + 16) = 0; /*0x30006e*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300072*/
      v38 = (char *)sub_3C460(32); /*0x300076*/
      *(_QWORD *)a1 = v38; /*0x30007b*/
      *(_QWORD *)(a1 + 16) = 20; /*0x30007e*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300086*/
      strcpy(v38, "island_new21_001.png"); /*0x300095*/
      result = a1; /*0x3000a5*/
      break; /*0x3000ad*/
    case 37: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x3000b6*/
      *(_QWORD *)(a1 + 16) = 0; /*0x3000b9*/
      *(_QWORD *)(a1 + 24) = 0; /*0x3000bd*/
      v39 = (char *)sub_3C460(32); /*0x3000c1*/
      *(_QWORD *)a1 = v39; /*0x3000c6*/
      *(_QWORD *)(a1 + 16) = 20; /*0x3000c9*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3000d1*/
      strcpy(v39, "island_new22_001.png"); /*0x3000e0*/
      result = a1; /*0x3000f0*/
      break; /*0x3000f8*/
    case 38: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300101*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300104*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300108*/
      v40 = (char *)sub_3C460(32); /*0x30010c*/
      *(_QWORD *)a1 = v40; /*0x300111*/
      *(_QWORD *)(a1 + 16) = 20; /*0x300114*/
      *(_QWORD *)(a1 + 24) = 31; /*0x30011c*/
      strcpy(v40, "island_new23_001.png"); /*0x30012b*/
      result = a1; /*0x30013b*/
      break; /*0x300143*/
    case 39: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x30014c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x30014f*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300153*/
      v41 = (char *)sub_3C460(32); /*0x300157*/
      *(_QWORD *)a1 = v41; /*0x30015c*/
      *(_QWORD *)(a1 + 16) = 20; /*0x30015f*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300167*/
      strcpy(v41, "island_new24_001.png"); /*0x300176*/
      result = a1; /*0x300186*/
      break; /*0x30018e*/
    case 40: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300197*/
      *(_QWORD *)(a1 + 16) = 0; /*0x30019a*/
      *(_QWORD *)(a1 + 24) = 0; /*0x30019e*/
      v42 = (char *)sub_3C460(32); /*0x3001a2*/
      *(_QWORD *)a1 = v42; /*0x3001a7*/
      *(_QWORD *)(a1 + 16) = 20; /*0x3001aa*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3001b2*/
      strcpy(v42, "island_new25_001.png"); /*0x3001c1*/
      result = a1; /*0x3001d1*/
      break; /*0x3001d9*/
    case 41: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x3001e2*/
      *(_QWORD *)(a1 + 16) = 0; /*0x3001e5*/
      *(_QWORD *)(a1 + 24) = 0; /*0x3001e9*/
      v43 = (char *)sub_3C460(32); /*0x3001ed*/
      *(_QWORD *)a1 = v43; /*0x3001f2*/
      *(_QWORD *)(a1 + 16) = 20; /*0x3001f5*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3001fd*/
      strcpy(v43, "island_new26_001.png"); /*0x30020c*/
      result = a1; /*0x30021c*/
      break; /*0x300224*/
    case 42: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x30022d*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300230*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300234*/
      v44 = (char *)sub_3C460(32); /*0x300238*/
      *(_QWORD *)a1 = v44; /*0x30023d*/
      *(_QWORD *)(a1 + 16) = 20; /*0x300240*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300248*/
      strcpy(v44, "island_new27_001.png"); /*0x300257*/
      result = a1; /*0x300267*/
      break; /*0x30026f*/
    case 43: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300278*/
      *(_QWORD *)(a1 + 16) = 0; /*0x30027b*/
      *(_QWORD *)(a1 + 24) = 0; /*0x30027f*/
      v45 = (char *)sub_3C460(32); /*0x300283*/
      *(_QWORD *)a1 = v45; /*0x300288*/
      *(_QWORD *)(a1 + 16) = 20; /*0x30028b*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300293*/
      strcpy(v45, "island_new28_001.png"); /*0x3002a2*/
      result = a1; /*0x3002b2*/
      break; /*0x3002ba*/
    case 44: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x3002c3*/
      *(_QWORD *)(a1 + 16) = 0; /*0x3002c6*/
      *(_QWORD *)(a1 + 24) = 0; /*0x3002ca*/
      v46 = (char *)sub_3C460(32); /*0x3002ce*/
      *(_QWORD *)a1 = v46; /*0x3002d3*/
      *(_QWORD *)(a1 + 16) = 20; /*0x3002d6*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3002de*/
      strcpy(v46, "island_new29_001.png"); /*0x3002ed*/
      result = a1; /*0x3002fd*/
      break; /*0x300305*/
    case 45: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x30030e*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300311*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300315*/
      v47 = (char *)sub_3C460(32); /*0x300319*/
      *(_QWORD *)a1 = v47; /*0x30031e*/
      *(_QWORD *)(a1 + 16) = 20; /*0x300321*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300329*/
      strcpy(v47, "island_new30_001.png"); /*0x300338*/
      result = a1; /*0x300348*/
      break; /*0x300350*/
    case 46: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300359*/
      *(_QWORD *)(a1 + 16) = 0; /*0x30035c*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300360*/
      v48 = (char *)sub_3C460(32); /*0x300364*/
      *(_QWORD *)a1 = v48; /*0x300369*/
      *(_QWORD *)(a1 + 16) = 20; /*0x30036c*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300374*/
      strcpy(v48, "island_new31_001.png"); /*0x300383*/
      result = a1; /*0x300393*/
      break; /*0x30039b*/
    case 47: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x3003a4*/
      *(_QWORD *)(a1 + 16) = 0; /*0x3003a7*/
      *(_QWORD *)(a1 + 24) = 0; /*0x3003ab*/
      v49 = (char *)sub_3C460(32); /*0x3003af*/
      *(_QWORD *)a1 = v49; /*0x3003b4*/
      *(_QWORD *)(a1 + 16) = 20; /*0x3003b7*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3003bf*/
      strcpy(v49, "island_new32_001.png"); /*0x3003ce*/
      result = a1; /*0x3003de*/
      break; /*0x3003e6*/
    case 48: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x3003ef*/
      *(_QWORD *)(a1 + 16) = 0; /*0x3003f2*/
      *(_QWORD *)(a1 + 24) = 0; /*0x3003f6*/
      v50 = (char *)sub_3C460(32); /*0x3003fa*/
      *(_QWORD *)a1 = v50; /*0x3003ff*/
      *(_QWORD *)(a1 + 16) = 20; /*0x300402*/
      *(_QWORD *)(a1 + 24) = 31; /*0x30040a*/
      strcpy(v50, "island_new33_001.png"); /*0x300419*/
      result = a1; /*0x300429*/
      break; /*0x300431*/
    case 49: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x30043a*/
      *(_QWORD *)(a1 + 16) = 0; /*0x30043d*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300441*/
      v51 = (char *)sub_3C460(32); /*0x300445*/
      *(_QWORD *)a1 = v51; /*0x30044a*/
      *(_QWORD *)(a1 + 16) = 20; /*0x30044d*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300455*/
      strcpy(v51, "island_new34_001.png"); /*0x300464*/
      result = a1; /*0x300474*/
      break; /*0x30047c*/
    case 50: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300485*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300488*/
      *(_QWORD *)(a1 + 24) = 0; /*0x30048c*/
      v52 = (char *)sub_3C460(32); /*0x300490*/
      *(_QWORD *)a1 = v52; /*0x300495*/
      *(_QWORD *)(a1 + 16) = 20; /*0x300498*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3004a0*/
      strcpy(v52, "island_new35_001.png"); /*0x3004af*/
      result = a1; /*0x3004bf*/
      break; /*0x3004c7*/
    case 51: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x3004d0*/
      *(_QWORD *)(a1 + 16) = 0; /*0x3004d3*/
      *(_QWORD *)(a1 + 24) = 0; /*0x3004d7*/
      v53 = (char *)sub_3C460(32); /*0x3004db*/
      *(_QWORD *)a1 = v53; /*0x3004e0*/
      *(_QWORD *)(a1 + 16) = 20; /*0x3004e3*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3004eb*/
      strcpy(v53, "island_ncs01_001.png"); /*0x3004fa*/
      result = a1; /*0x30050a*/
      break; /*0x300512*/
    case 52: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x30051b*/
      *(_QWORD *)(a1 + 16) = 0; /*0x30051e*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300522*/
      v54 = (char *)sub_3C460(32); /*0x300526*/
      *(_QWORD *)a1 = v54; /*0x30052b*/
      *(_QWORD *)(a1 + 16) = 20; /*0x30052e*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300536*/
      strcpy(v54, "island_ncs02_001.png"); /*0x300545*/
      result = a1; /*0x300555*/
      break; /*0x30055d*/
    case 53: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300566*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300569*/
      *(_QWORD *)(a1 + 24) = 0; /*0x30056d*/
      v55 = (char *)sub_3C460(32); /*0x300571*/
      *(_QWORD *)a1 = v55; /*0x300576*/
      *(_QWORD *)(a1 + 16) = 20; /*0x300579*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300581*/
      strcpy(v55, "island_space_001.png"); /*0x300590*/
      result = a1; /*0x3005a0*/
      break; /*0x3005a8*/
    case 54: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x3005b1*/
      *(_QWORD *)(a1 + 16) = 0; /*0x3005b4*/
      *(_QWORD *)(a1 + 24) = 0; /*0x3005b8*/
      v56 = (char *)sub_3C460(32); /*0x3005bc*/
      *(_QWORD *)a1 = v56; /*0x3005c1*/
      *(_QWORD *)(a1 + 16) = 21; /*0x3005c4*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3005cc*/
      strcpy(v56, "island_cosmos_001.png"); /*0x3005db*/
      result = a1; /*0x3005f5*/
      break; /*0x3005fd*/
    case 55: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300606*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300609*/
      *(_QWORD *)(a1 + 24) = 0; /*0x30060d*/
      v57 = (char *)sub_3C460(32); /*0x300611*/
      *(_QWORD *)a1 = v57; /*0x300616*/
      *(_QWORD *)(a1 + 16) = 21; /*0x300619*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300621*/
      strcpy(v57, "island_random_001.png"); /*0x300630*/
      result = a1; /*0x30064a*/
      break; /*0x300652*/
    case 56: /*0x2ff61b*/
      sub_3C1F0(a1, "island_chance_001.png"); /*0x30065d*/
      result = a1; /*0x300662*/
      break; /*0x30066a*/
    case 57: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300673*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300676*/
      *(_QWORD *)(a1 + 24) = 0; /*0x30067a*/
      v58 = (char *)sub_3C460(32); /*0x30067e*/
      *(_QWORD *)a1 = v58; /*0x300683*/
      *(_QWORD *)(a1 + 16) = 21; /*0x300686*/
      *(_QWORD *)(a1 + 24) = 31; /*0x30068e*/
      strcpy(v58, "island_future_001.png"); /*0x30069d*/
      result = a1; /*0x3006b7*/
      break; /*0x3006bf*/
    case 58: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x3006c8*/
      *(_QWORD *)(a1 + 16) = 0; /*0x3006cb*/
      *(_QWORD *)(a1 + 24) = 0; /*0x3006cf*/
      v59 = (char *)sub_3C460(32); /*0x3006d3*/
      *(_QWORD *)a1 = v59; /*0x3006d8*/
      *(_QWORD *)(a1 + 16) = 21; /*0x3006db*/
      *(_QWORD *)(a1 + 24) = 31; /*0x3006e3*/
      strcpy(v59, "island_utopia_001.png"); /*0x3006f2*/
      result = a1; /*0x30070c*/
      break; /*0x300714*/
    case 59: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x30071d*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300720*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300724*/
      v60 = (char *)sub_3C460(32); /*0x300728*/
      *(_QWORD *)a1 = v60; /*0x30072d*/
      *(_QWORD *)(a1 + 16) = 21; /*0x300730*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300738*/
      strcpy(v60, "island_cinema_001.png"); /*0x300747*/
      result = a1; /*0x300761*/
      break; /*0x300769*/
    case 60: /*0x2ff61b*/
      *(_OWORD *)a1 = 0; /*0x300772*/
      *(_QWORD *)(a1 + 16) = 0; /*0x300775*/
      *(_QWORD *)(a1 + 24) = 0; /*0x30077e*/
      v65 = std::string::_Calculate_growth(19, 15, 0x7FFFFFFFFFFFFFFFLL); /*0x30079b*/
      v62 = sub_3C3B0(v61, &v65); /*0x3007a0*/
      *(_QWORD *)(a1 + 24) = v65; /*0x3007b1*/
      *(_QWORD *)a1 = v62; /*0x3007be*/
      v63 = v62; /*0x3007c1*/
      *(_QWORD *)(a1 + 16) = 19; /*0x3007c4*/
      std::_Char_traits<char,int>::copy(v62, "island_love_001.png", 19); /*0x3007cc*/
      *(_BYTE *)(v63 + 19) = 0; /*0x3007d1*/
      result = a1; /*0x3007d5*/
      break; /*0x3007e2*/
    case 61: /*0x2ff61b*/
      sub_3C1F0(a1, "island_duality_001.png"); /*0x3007ed*/
      result = a1; /*0x3007f2*/
      break; /*0x3007fa*/
    case 62: /*0x2ff61b*/
      sub_3C1F0(a1, "island_paradox_001.png"); /*0x300805*/
      result = a1; /*0x30080a*/
      break; /*0x300812*/
    default:
      *(_OWORD *)a1 = 0; /*0x30081b*/
      *(_QWORD *)(a1 + 16) = 0; /*0x30081e*/
      *(_QWORD *)(a1 + 24) = 0; /*0x300822*/
      v64 = (char *)sub_3C460(32); /*0x300826*/
      *(_QWORD *)a1 = v64; /*0x30082b*/
      *(_QWORD *)(a1 + 16) = 19; /*0x30082e*/
      *(_QWORD *)(a1 + 24) = 31; /*0x300836*/
      strcpy(v64, "island_fire_001.png"); /*0x300845*/
      result = a1; /*0x300861*/
      break; /*0x300861*/
  }
  return result; /*0x2ff664*/
}
