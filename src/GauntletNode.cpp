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

// Address: 0x2fd940
// Method: GauntletNode::generateNode
// Hidden C++ exception states: #wind=7
double __fastcall GauntletNode_generateNode(_QWORD *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  float v4; // xmm7_4
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  float v10; // xmm6_4
  char v11; // dl
  __int16 v12; // cx
  __int64 v13; // rax
  _QWORD *v14; // rdi
  void (__fastcall ***v15)(_QWORD, _QWORD); // r13
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r12
  const char *v20; // rcx
  struct cocos2d::CCLabelBMFont *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCLabelBMFont *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  const char *v28; // rcx
  struct cocos2d::CCLabelBMFont *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  struct cocos2d::CCLabelBMFont *v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  const char *v37; // rcx
  struct cocos2d::CCSprite *v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rax
  const char *v41; // rcx
  struct cocos2d::CCSprite *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  cocos2d::CCString *v48; // rax
  const char *CString; // rax
  signed int v50; // r13d
  const char *v51; // rcx
  struct cocos2d::CCLabelBMFont *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  const char *v56; // rcx
  struct cocos2d::CCLabelBMFont *v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rbx
  cocos2d::CCArray *v62; // rcx
  signed int v63; // edi
  cocos2d::CCArray *v64; // rcx
  struct cocos2d::CCSprite *v65; // rdi
  __int64 v66; // rbx
  __int64 v67; // rax
  struct cocos2d::CCSprite *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // rax
  _QWORD *v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // rdx
  struct cocos2d::CCLabelBMFont *v76; // r14
  __int64 v77; // rbx
  __int64 v78; // rax
  struct cocos2d::CCLabelBMFont *v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rdx
  cocos2d::CCSprite *v83; // rsi
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  cocos2d::CCSprite *v87; // rdi
  __int64 v88; // rbx
  __int64 v89; // rax
  cocos2d::CCArray *v90; // rax
  struct cocos2d::CCObject *v91; // rax
  cocos2d::CCArray *v92; // rax
  struct cocos2d::CCObject *v93; // rax
  __int64 v94; // rdx
  struct cocos2d::CCLabelBMFont *v95; // rdi
  __int64 v96; // rbx
  __int64 v97; // rax
  struct cocos2d::CCLabelBMFont *v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rdx
  cocos2d::CCSprite *v101; // rsi
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rax
  cocos2d::CCSprite *v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rax
  cocos2d::CCArray *v108; // rax
  struct cocos2d::CCObject *v109; // rax
  cocos2d::CCArray *v110; // rax
  struct cocos2d::CCObject *v111; // rax
  __int64 v112; // rdx
  struct cocos2d::CCSprite *v113; // rdi
  __int64 v114; // rbx
  __int64 v115; // rax
  struct cocos2d::CCSprite *v116; // rdi
  __int64 v117; // rbx
  __int64 v118; // rax
  struct cocos2d::CCSprite *v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rbx
  __int64 v122; // rax
  struct cocos2d::CCLabelBMFont *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rax
  double result; // xmm0_8
  __int16 v128; // [rsp+30h] [rbp-D0h] BYREF
  char v129; // [rsp+32h] [rbp-CEh]
  _WORD v130[4]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v131; // [rsp+3Ch] [rbp-C4h] BYREF
  _BYTE v132[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v133; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v134[8]; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v135)(void *, __int16 *); // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v136[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v137[32]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v138; // [rsp+88h] [rbp-78h] BYREF
  __int64 v139; // [rsp+98h] [rbp-68h]
  unsigned __int64 v140; // [rsp+A0h] [rbp-60h]
  _QWORD v141[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v142; // [rsp+C0h] [rbp-40h]
  _QWORD v143[3]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v144; // [rsp+E0h] [rbp-20h]
  _BYTE v145[32]; // [rsp+E8h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 576LL))(a1, 0);
  v2 = a1[43];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 328);
    v131 = v3;
    SetGroupIDLayer_onArrow((__int64)v143, v3);
    GauntletNode_frameForType((__int64)v141, v3);
    v130[0] = -1;
    LOBYTE(v130[1]) = -1;
    v130[2] = -1;
    LOBYTE(v130[3]) = -1;
    v4 = 0.69999999;
    v6 = cocos2d::CCNode::create(0xFFFF, v5);
    a1[40] = v6;
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 312LL))(v6, &unk_904A28);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 456LL))(a1, a1[40], 1);
    v9 = cocos2d::CCNode::create(v8, v7);
    a1[41] = v9;
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 312LL))(v9, &unk_904A28);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 456LL))(a1, a1[41], 2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[41] + 336LL))(a1[41], 0);
    v10 = 0.0;
    switch ( v3 )
    {
      case 1:
        v11 = 0;
        v12 = 25855;
        v130[0] = 25855;
        LOBYTE(v130[1]) = 0;
        v128 = -14081;
        v130[2] = -14081;
        LOBYTE(v130[3]) = 0;
        break;
      case 2:
        v11 = -1;
        v12 = 32000;
        v130[0] = 32000;
        LOBYTE(v130[1]) = -1;
        v128 = -106;
        v130[2] = -106;
        LOBYTE(v130[3]) = -1;
        break;
      case 3:
        v11 = 0;
        v12 = -20736;
        v130[0] = -20736;
        LOBYTE(v130[1]) = 0;
        v128 = -156;
        v130[2] = -156;
        LOBYTE(v130[3]) = 50;
        v4 = 0.62;
        break;
      case 4:
        v11 = -56;
        v12 = 100;
        strcpy((char *)v130, "d");
        LOBYTE(v130[1]) = -56;
        v128 = 13020;
        v130[2] = 13020;
        LOBYTE(v130[3]) = -1;
        v4 = 0.62;
        break;
      case 5:
        v11 = 0;
        v12 = 200;
        v130[0] = 200;
        LOBYTE(v130[1]) = 0;
        v128 = 23295;
        v130[2] = 23295;
        LOBYTE(v130[3]) = 0;
        break;
      case 6:
        v128 = 25675;
        v11 = -1;
        v12 = 25675;
        v130[0] = 25675;
        LOBYTE(v130[1]) = -1;
        break;
      case 7:
        v128 = 25700;
        v11 = 100;
        goto LABEL_10;
      case 8:
      case 15:
        v128 = 12850;
        v11 = 50;
        goto LABEL_10;
      case 9:
        v11 = -1;
        v12 = 25600;
        v130[0] = 25600;
        LOBYTE(v130[1]) = -1;
        v128 = -256;
        v130[2] = -256;
        LOBYTE(v130[3]) = -1;
        break;
      case 10:
        v11 = -106;
        v12 = 13055;
        v130[0] = 13055;
        LOBYTE(v130[1]) = -106;
        v128 = -14081;
        v130[2] = -14081;
        LOBYTE(v130[3]) = -1;
        v4 = 0.60000002;
        break;
      case 11:
        v128 = 12800;
        v11 = 125;
        goto LABEL_15;
      case 12:
        v11 = 0;
        v12 = 25750;
        v130[0] = 25750;
        LOBYTE(v130[1]) = 0;
        v128 = -14081;
        v130[2] = -14081;
        LOBYTE(v130[3]) = 50;
        break;
      case 13:
        v11 = 0;
        v12 = 19200;
        v130[0] = 19200;
        LOBYTE(v130[1]) = 0;
        v128 = -206;
        v130[2] = -206;
        LOBYTE(v130[3]) = 0;
        v4 = 0.55000001;
        break;
      case 14:
        v128 = 19300;
        v11 = 50;
LABEL_10:
        v12 = v128;
        v130[0] = v128;
        LOBYTE(v130[1]) = v11;
        v128 = 6655;
        v130[2] = 6655;
        LOBYTE(v130[3]) = 25;
        break;
      case 16:
        v11 = 0;
        v12 = 25600;
        v130[0] = 25600;
        LOBYTE(v130[1]) = 0;
        v128 = -206;
        v130[2] = -206;
        LOBYTE(v130[3]) = 0;
        v10 = 2.0;
        break;
      case 17:
        v11 = 0;
        v12 = 25750;
        v130[0] = 25750;
        LOBYTE(v130[1]) = 0;
        v128 = -14081;
        v130[2] = -14081;
        LOBYTE(v130[3]) = 50;
        v10 = 1.0;
        break;
      case 18:
        v11 = -71;
        v12 = 95;
        strcpy((char *)v130, "_");
        LOBYTE(v130[1]) = -71;
        v128 = 32255;
        v130[2] = 32255;
        LOBYTE(v130[3]) = -1;
        break;
      case 19:
        v11 = 75;
        v12 = 19200;
        v130[0] = 19200;
        LOBYTE(v130[1]) = 75;
        v128 = -14336;
        v130[2] = -14336;
        LOBYTE(v130[3]) = -56;
        v10 = -2.0;
        break;
      case 20:
        v11 = 0;
        v12 = 110;
        strcpy((char *)v130, "n");
        LOBYTE(v130[1]) = 0;
        v128 = 19455;
        v130[2] = 19455;
        LOBYTE(v130[3]) = 0;
        v10 = 3.0;
        break;
      case 21:
        v11 = -1;
        v12 = 32050;
        v130[0] = 32050;
        LOBYTE(v130[1]) = -1;
        v128 = -156;
        v130[2] = -156;
        LOBYTE(v130[3]) = -1;
        v10 = 3.0;
        break;
      case 22:
        v11 = 48;
        v12 = 11300;
        qmemcpy(v130, "$,0", 3);
        v128 = -1;
        v130[2] = -1;
        LOBYTE(v130[3]) = 110;
        v4 = 0.55000001;
        break;
      case 23:
        v11 = 80;
        v12 = 23130;
        qmemcpy(v130, "ZZP", 3);
        v128 = -96;
        v130[2] = -96;
        LOBYTE(v130[3]) = 13;
        break;
      case 24:
        v11 = 61;
        v12 = 15907;
        qmemcpy(v130, "#>=", 3);
        v128 = -2929;
        v130[2] = -2929;
        LOBYTE(v130[3]) = -1;
        break;
      case 25:
        v11 = 40;
        v12 = 11325;
        qmemcpy(v130, "=,(", 3);
        v128 = -6401;
        v130[2] = -6401;
        LOBYTE(v130[3]) = -86;
        v10 = 2.0;
        break;
      case 26:
        v11 = 60;
        v12 = 9050;
        qmemcpy(v130, "Z#<", 3);
        v128 = -26881;
        v130[2] = -26881;
        LOBYTE(v130[3]) = -1;
        break;
      case 27:
        v11 = 104;
        v12 = 10293;
        qmemcpy(v130, "5(h", 3);
        v128 = -19201;
        v130[2] = -19201;
        LOBYTE(v130[3]) = 114;
        break;
      case 28:
        v128 = 6483;
        v11 = 96;
        goto LABEL_33;
      case 29:
        v11 = 0;
        v12 = 7751;
        v130[0] = 7751;
        LOBYTE(v130[1]) = 0;
        v128 = -32001;
        v130[2] = -32001;
        LOBYTE(v130[3]) = 0;
        v4 = 0.47999999;
        v10 = 3.0;
        break;
      case 30:
        v11 = 45;
        v12 = 14125;
        qmemcpy(v130, "-7-", 3);
        v128 = -8961;
        v130[2] = -8961;
        LOBYTE(v130[3]) = 0;
        v4 = 0.55000001;
        v10 = 3.0;
        break;
      case 31:
        v11 = 80;
        v12 = 12800;
        v128 = -1;
        goto LABEL_16;
      case 32:
        v11 = 63;
        v12 = 9522;
        v128 = 24746;
        goto LABEL_16;
      case 33:
        v11 = 125;
        v12 = 17920;
        v130[0] = 17920;
        LOBYTE(v130[1]) = 125;
        v128 = -6631;
        v130[2] = -6631;
        LOBYTE(v130[3]) = -1;
        v10 = 2.0;
        break;
      case 34:
        v11 = 76;
        v12 = 76;
        strcpy((char *)v130, "L");
        LOBYTE(v130[1]) = 76;
        v128 = -29441;
        v130[2] = -29441;
        LOBYTE(v130[3]) = 0;
        v4 = 0.60000002;
        v10 = 6.0;
        break;
      case 35:
        v11 = 105;
        v12 = 7218;
        v130[0] = 7218;
        LOBYTE(v130[1]) = 105;
        v128 = -256;
        v130[2] = -256;
        LOBYTE(v130[3]) = -1;
        v10 = 5.0;
        break;
      case 36:
        v11 = -106;
        v12 = 94;
        strcpy((char *)v130, "^");
        LOBYTE(v130[1]) = -106;
        v128 = -132;
        v130[2] = -132;
        LOBYTE(v130[3]) = 0;
        v4 = 0.55000001;
        v10 = -4.0;
        break;
      case 37:
        v12 = 25660;
        v128 = -39;
        goto LABEL_44;
      case 38:
        v11 = -1;
        v12 = -28416;
        v130[0] = -28416;
        LOBYTE(v130[1]) = -1;
        v128 = -1;
        v130[2] = -1;
        LOBYTE(v130[3]) = -1;
        v4 = 0.5;
        break;
      case 39:
        v11 = 0;
        v12 = 14197;
        strcpy((char *)v130, "u7");
        v128 = -1;
        v130[2] = -1;
        LOBYTE(v130[3]) = -1;
        v4 = 0.55000001;
        break;
      case 40:
        v12 = 12825;
        v128 = -1;
LABEL_44:
        v11 = 0;
        LOBYTE(v130[1]) = 0;
        v130[0] = v12;
        v130[2] = v128;
        LOBYTE(v130[3]) = 0;
        v4 = 0.60000002;
        break;
      case 41:
        v128 = 76;
        v11 = 50;
LABEL_33:
        v12 = v128;
        v128 = -256;
        goto LABEL_34;
      case 42:
        v11 = 50;
        v12 = 12850;
        v128 = -256;
        goto LABEL_16;
      case 43:
        v11 = -1;
        v12 = 25600;
        v130[0] = 25600;
        LOBYTE(v130[1]) = -1;
        v128 = -1;
        v130[2] = -1;
        LOBYTE(v130[3]) = -1;
        v10 = -2.0;
        break;
      case 44:
        v11 = 50;
        v12 = 12800;
        v130[0] = 12800;
        LOBYTE(v130[1]) = 50;
        v128 = -370;
        v130[2] = -370;
        LOBYTE(v130[3]) = -78;
        break;
      case 45:
        v11 = 0;
        v12 = 18176;
        v130[0] = 18176;
        LOBYTE(v130[1]) = 0;
        v128 = -1;
        v130[2] = -1;
        LOBYTE(v130[3]) = -96;
        break;
      case 46:
        v11 = -46;
        v12 = 26147;
        v128 = -1;
        goto LABEL_16;
      case 47:
        v11 = 77;
        v12 = 10048;
        v128 = -16905;
        goto LABEL_16;
      case 48:
        v11 = 78;
        v12 = 7196;
        v128 = -256;
        goto LABEL_16;
      case 49:
        v11 = 70;
        v12 = 10522;
        v128 = -106;
        goto LABEL_16;
      case 50:
        v11 = 69;
        v12 = 1605;
        v130[0] = 1605;
        LOBYTE(v130[1]) = 69;
        v128 = -21761;
        v130[2] = -21761;
        LOBYTE(v130[3]) = -12;
        break;
      case 51:
        v11 = 70;
        v12 = 15640;
        v128 = -226;
        goto LABEL_16;
      case 52:
        v11 = 68;
        v12 = 8768;
        v128 = -20481;
        goto LABEL_16;
      case 53:
        v128 = 13340;
        v11 = 66;
LABEL_15:
        v12 = v128;
        v128 = -206;
        goto LABEL_16;
      case 54:
        v11 = 45;
        v12 = 11575;
        v128 = -14081;
        goto LABEL_34;
      case 55:
        v11 = 19;
        v12 = 22163;
        v128 = -10241;
        goto LABEL_34;
      case 56:
        v11 = 105;
        v12 = 12852;
        v128 = -256;
        goto LABEL_16;
      case 57:
        v11 = 37;
        v12 = 19493;
        v128 = -130;
LABEL_34:
        LOBYTE(v130[1]) = v11;
        v130[0] = v12;
        v130[2] = v128;
        LOBYTE(v130[3]) = 0;
        break;
      case 58:
        v11 = 57;
        v12 = 7204;
        v128 = -16696;
        goto LABEL_16;
      case 59:
        v11 = 42;
        v12 = 12863;
        qmemcpy(v130, "?2*", 3);
        v128 = -1;
        v130[2] = -1;
        LOBYTE(v130[3]) = -36;
        break;
      case 60:
        v11 = 92;
        v12 = 12428;
        v128 = -21761;
        goto LABEL_16;
      case 61:
        v11 = 65;
        v12 = 16705;
        v128 = -1;
        goto LABEL_16;
      case 62:
        v11 = 60;
        v12 = 8983;
        v128 = -7911;
LABEL_16:
        LOBYTE(v130[1]) = v11;
        v130[0] = v12;
        v130[2] = v128;
        LOBYTE(v130[3]) = -1;
        break;
      default:
        v11 = v130[1];
        v12 = v130[0];
        break;
    }
    *((_WORD *)a1 + 168) = v130[2];
    *((_BYTE *)a1 + 338) = v130[3];
    *(_WORD *)((char *)a1 + 339) = v12;
    *((_BYTE *)a1 + 341) = v11;
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v138, 0.0, 0.0, 86.0, 86.0);
    v14 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("GJ_squareB_01.png", v13);
    v15 = (void (__fastcall ***)(_QWORD, _QWORD))(v14 + 40);
    LOBYTE(v16) = -1;
    (*(void (__fastcall **)(_QWORD *, __int64))(v14[40] + 40LL))(v14 + 40, v16);
    v17 = *v14;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v133, 110.0, 234.0);
    (*(void (__fastcall **)(_QWORD *, __int64))(v17 + 312))(v14, v18);
    v19 = -1;
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 456LL))(a1, v14, 0xFFFFFFFFLL);
    (**v15)(v15, v130);
    v20 = (const char *)v143;
    if ( v144 > 0xF )
      v20 = (const char *)v143[0];
    v21 = cocos2d::CCLabelBMFont::create(v20, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCLabelBMFont *, __int64))(*a1 + 456LL))(a1, v21, 2);
    cocos2d::CCLabelBMFont::limitLabelWidth(v21, 75.0, v4, 0.0);
    v22 = *(_QWORD *)v21;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, 94.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v22 + 184))(v21, v23);
    v135 = (void (__fastcall ***)(void *, __int16 *))((char *)v21 + 368);
    (**((void (__fastcall ***)(__int64, _WORD *))v21 + 46))((__int64)v21 + 368, &v130[2]);
    v24 = cocos2d::CCLabelBMFont::create("Gauntlet", (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCLabelBMFont *, __int64))(*a1 + 456LL))(a1, v24, 2);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v24 + 160LL))(v24);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, -19.0);
    v26 = v25;
    v27 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v21 + 200LL))(v21);
    cocos2d::CCPoint::operator+(v27, v132, v26);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v24 + 184LL))(v24, v132);
    v133 = (char *)v24 + 368;
    (**((void (__fastcall ***)(__int64, _WORD *))v24 + 46))((__int64)v24 + 368, &v130[2]);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v134, 2.0, -3.0);
    v28 = (const char *)v143;
    if ( v144 > 0xF )
      v28 = (const char *)v143[0];
    v29 = cocos2d::CCLabelBMFont::create(v28, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCLabelBMFont *, __int64))(*a1 + 456LL))(a1, v29, 1);
    v30 = *(_QWORD *)v29;
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v21 + 168LL))(v21);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(v30 + 160))(v29);
    v31 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v21 + 200LL))(v21);
    cocos2d::CCPoint::operator+(v31, v132, v134);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v29 + 184LL))(v29, v132);
    v32 = cocos2d::CCLabelBMFont::create("Gauntlet", (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCLabelBMFont *, __int64))(*a1 + 456LL))(a1, v32, 1);
    v33 = *(_QWORD *)v32;
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v24 + 168LL))(v24);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(v33 + 160))(v32);
    v34 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v24 + 200LL))(v24);
    cocos2d::CCPoint::operator+(v34, v132, v134);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v32 + 184LL))(v32, v132);
    (**((void (__fastcall ***)(__int64, void *))v29 + 46))((__int64)v29 + 368, &unk_6FE440);
    (**((void (__fastcall ***)(__int64, void *))v32 + 46))((__int64)v32 + 368, &unk_6FE440);
    LOBYTE(v35) = 60;
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v29 + 46) + 40LL))((__int64)v29 + 368, v35);
    LOBYTE(v36) = 60;
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v32 + 46) + 40LL))((__int64)v32 + 368, v36);
    if ( *((_BYTE *)a1 + 352) )
    {
      v128 = 20560;
      memset(&v131, 80, 3);
      (**v15)(v15, &v131);
      LOWORD(v131) = -20561;
      v128 = -20561;
      v129 = -81;
      (**v135)(v135, &v128);
      (**(void (__fastcall ***)(_BYTE *, __int16 *))v133)(v133, &v128);
      v113 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)&xmmword_7178B0);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v113 + 160LL))(v113);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[40] + 456LL))(a1[40], v113, 2);
      v114 = *(_QWORD *)v113;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, v10 + 16.0);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v114 + 184))(v113, v115);
      v116 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_unlockBtn_001.png");
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[40] + 456LL))(a1[40], v116, 2);
      v117 = *(_QWORD *)v116;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v135, 0.0, -41.0);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v117 + 184))(v116, v118);
      v119 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_adVideoBtn_001.png");
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[40] + 456LL))(a1[40], v119, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v132, 0.0, -31.0);
      v121 = v120;
      v122 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v116 + 200LL))(v116);
      cocos2d::CCPoint::operator+(v122, &v133, v121);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE **))(*(_QWORD *)v119 + 184LL))(v119, &v133);
      v123 = cocos2d::CCLabelBMFont::create("View Ad", (const char *)&qword_6FFF68);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v123 + 160LL))(v123);
      LOWORD(v131) = -30841;
      BYTE2(v131) = -121;
      (**((void (__fastcall ***)(__int64, unsigned int *))v123 + 46))((__int64)v123 + 368, &v131);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1[40] + 456LL))(
        a1[40],
        v123,
        2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v136, 0.0, -25.0);
      v125 = v124;
      v126 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v119 + 200LL))(v119);
      cocos2d::CCPoint::operator+(v126, &v133, v125);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE **))(*(_QWORD *)v123 + 184LL))(v123, &v133);
    }
    else
    {
      v37 = (const char *)v141;
      if ( v142 > 0xF )
        v37 = (const char *)v141[0];
      v38 = cocos2d::CCSprite::createWithSpriteFrameName(v37);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[40] + 456LL))(a1[40], v38, 2);
      v39 = *(_QWORD *)v38;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, v10 + 16.0);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v39 + 184))(v38, v40);
      v41 = (const char *)v141;
      if ( v142 > 0xF )
        v41 = (const char *)v141[0];
      v42 = cocos2d::CCSprite::createWithSpriteFrameName(v41);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[40] + 456LL))(a1[40], v42, 1);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, -10.0);
      v44 = v43;
      v45 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 200LL))(v38);
      cocos2d::CCPoint::operator+(v45, v132, v44);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v42 + 184LL))(v42, v132);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v42 + 136LL))(v42);
      (**((void (__fastcall ***)(__int64, void *))v42 + 40))((__int64)v42 + 320, &unk_6FE440);
      LOBYTE(v46) = 50;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v42 + 40) + 40LL))((__int64)v42 + 320, v46);
      v47 = GJMapPack_completedMaps(a1[43]);
      v48 = cocos2d::CCString::createWithFormat("%i/5", v47);
      CString = cocos2d::CCString::getCString(v48);
      v138 = 0;
      v50 = 0;
      v139 = 0;
      v140 = 0;
      do
        ++v19;
      while ( CString[v19] );
      sub_3C230(&v138);
      v51 = (const char *)&v138;
      if ( v140 > 0xF )
        v51 = (const char *)v138;
      v52 = cocos2d::CCLabelBMFont::create(v51, (const char *)&qword_6FFF68);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1[40] + 456LL))(
        a1[40],
        v52,
        2);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v52 + 160LL))(v52);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, -40.0 - v10);
      v54 = v53;
      v55 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 200LL))(v38);
      cocos2d::CCPoint::operator+(v55, v132, v54);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v52 + 184LL))(v52, v132);
      v56 = (const char *)&v138;
      if ( v140 > 0xF )
        v56 = (const char *)v138;
      v57 = cocos2d::CCLabelBMFont::create(v56, (const char *)&qword_6FFF68);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1[40] + 456LL))(
        a1[40],
        v57,
        1);
      v58 = *(_QWORD *)v57;
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v52 + 168LL))(v52);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(v58 + 160))(v57);
      (**((void (__fastcall ***)(__int64, void *))v57 + 46))((__int64)v57 + 368, &unk_6FE440);
      LOBYTE(v59) = 60;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v57 + 46) + 40LL))((__int64)v57 + 368, v59);
      v60 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v52 + 200LL))(v52);
      cocos2d::CCPoint::operator+(v60, v132, v134);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v57 + 184LL))(v57, v132);
      v61 = a1[43];
      v62 = *(cocos2d::CCArray **)(v61 + 320);
      if ( !v62 || !cocos2d::CCArray::count(v62) )
        goto LABEL_98;
      v63 = GJMapPack_completedMaps(v61);
      v64 = *(cocos2d::CCArray **)(v61 + 320);
      if ( v64 )
        v50 = cocos2d::CCArray::count(v64);
      if ( v63 >= v50 )
      {
        v65 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png");
        (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSprite *, __int64))(*a1 + 456LL))(a1, v65, 5);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 160LL))(v65);
        v66 = *(_QWORD *)v65;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, -72.0);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v66 + 184))(v65, v67);
        v68 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png");
        (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSprite *, __int64))(*a1 + 456LL))(a1, v68, 1);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v68 + 160LL))(v68);
        v69 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 200LL))(v65);
        cocos2d::CCPoint::operator+(v69, v132, v134);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v68 + 184LL))(v68, v132);
        (**((void (__fastcall ***)(__int64, void *))v68 + 40))((__int64)v68 + 320, &unk_6FE440);
        LOBYTE(v70) = 60;
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v68 + 40) + 40LL))((__int64)v68 + 320, v70);
        if ( !qword_905FE0 )
        {
          v133 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v133);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
        }
        sub_2EAB20(v71, v145, v131);
        v133 = v137;
        sub_3E4F0(v137, v145);
        v73 = v72;
        v74 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v135 = (void (__fastcall ***)(void *, __int16 *))operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v135);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v74 = qword_905FE0;
        }
        if ( !GameStatsManager_isSpecialChestUnlocked(v74, v73) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[40] + 336LL))(a1[40], 0);
          LOBYTE(v75) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[41] + 336LL))(a1[41], v75);
          v76 = cocos2d::CCLabelBMFont::create("Reward", "goldFont.fnt");
          (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v76 + 160LL))(v76);
          (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1[41] + 456LL))(
            a1[41],
            v76,
            2);
          v77 = *(_QWORD *)v76;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, 43.0);
          (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v77 + 184))(v76, v78);
          v79 = cocos2d::CCLabelBMFont::create("Reward", "goldFont.fnt");
          v80 = *(_QWORD *)v79;
          (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v76 + 168LL))(v76);
          (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(v80 + 160))(v79);
          (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1[41] + 456LL))(
            a1[41],
            v79,
            1);
          v81 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v76 + 200LL))(v76);
          cocos2d::CCPoint::operator+(v81, v132, v134);
          (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v79 + 184LL))(v79, v132);
          (**((void (__fastcall ***)(__int64, void *))v79 + 46))((__int64)v79 + 368, &unk_6FE440);
          LOBYTE(v82) = 60;
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v79 + 46) + 40LL))((__int64)v79 + 368, v82);
          v83 = GJChestSprite_create(2);
          (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[41] + 456LL))(a1[41], v83, 2);
          (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v83 + 160LL))(v83);
          v84 = *(_QWORD *)v83;
          v85 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v76 + 200LL))(v76);
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, *(float *)(v85 + 4) - 46.0);
          (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v84 + 184))(v83, v86);
          v87 = GJChestSprite_create(2);
          (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[41] + 456LL))(a1[41], v87, 1);
          v88 = *(_QWORD *)v87;
          (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v83 + 168LL))(v83);
          (*(void (__fastcall **)(cocos2d::CCSprite *))(v88 + 160))(v87);
          v89 = (*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v83 + 200LL))(v83);
          cocos2d::CCPoint::operator+(v89, v132, v134);
          (*(void (__fastcall **)(cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v87 + 184LL))(v87, v132);
          v90 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v87 + 480LL))(v87);
          v91 = cocos2d::CCArray::objectAtIndex(v90, 0);
          (**((void (__fastcall ***)(__int64, void *))v91 + 40))((__int64)v91 + 320, &unk_6FE440);
          v92 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v87 + 480LL))(v87);
          v93 = cocos2d::CCArray::objectAtIndex(v92, 0);
          LOBYTE(v94) = 60;
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v93 + 40) + 40LL))((__int64)v93 + 320, v94);
        }
        sub_3C310(v145);
      }
      else
      {
LABEL_98:
        v95 = cocos2d::CCLabelBMFont::create("Reward", "goldFont.fnt");
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v95 + 160LL))(v95);
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1[40] + 456LL))(
          a1[40],
          v95,
          2);
        v96 = *(_QWORD *)v95;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, -47.0);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v96 + 184))(v95, v97);
        v98 = cocos2d::CCLabelBMFont::create("Reward", "goldFont.fnt");
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v98 + 160LL))(v98);
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1[40] + 456LL))(
          a1[40],
          v98,
          1);
        v99 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v95 + 200LL))(v95);
        cocos2d::CCPoint::operator+(v99, v132, v134);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v98 + 184LL))(v98, v132);
        (**((void (__fastcall ***)(__int64, void *))v98 + 46))((__int64)v98 + 368, &unk_6FE440);
        LOBYTE(v100) = 60;
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v98 + 46) + 40LL))((__int64)v98 + 368, v100);
        v101 = GJChestSprite_create(2);
        (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[40] + 456LL))(a1[40], v101, 2);
        (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v101 + 160LL))(v101);
        v102 = *(_QWORD *)v101;
        v103 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v95 + 200LL))(v95);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v133, 0.0, *(float *)(v103 + 4) - 31.5);
        (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v102 + 184))(v101, v104);
        v105 = GJChestSprite_create(2);
        (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[40] + 456LL))(a1[40], v105, 1);
        v106 = *(_QWORD *)v105;
        (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v101 + 168LL))(v101);
        (*(void (__fastcall **)(cocos2d::CCSprite *))(v106 + 160))(v105);
        v107 = (*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v101 + 200LL))(v101);
        cocos2d::CCPoint::operator+(v107, v132, v134);
        (*(void (__fastcall **)(cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v105 + 184LL))(v105, v132);
        v108 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v105 + 480LL))(v105);
        v109 = cocos2d::CCArray::objectAtIndex(v108, 0);
        (**((void (__fastcall ***)(__int64, void *))v109 + 40))((__int64)v109 + 320, &unk_6FE440);
        v110 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v105 + 480LL))(v105);
        v111 = cocos2d::CCArray::objectAtIndex(v110, 0);
        LOBYTE(v112) = 60;
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v111 + 40) + 40LL))((__int64)v111 + 320, v112);
      }
      sub_3C310(&v138);
    }
    sub_3C310(v141);
    return sub_3C310(v143);
  }
  return result;
}
