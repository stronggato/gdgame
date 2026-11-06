#include <Geode/binding/SetupSpawnPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/9] Address: 0x1bcec0
// Method: SetupSpawnPopup::queueUpdateButtons
bool __fastcall SetupSpawnPopup_queueUpdateButtons(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  bool result; // al

  result = !*(_BYTE *)(a1 + 736) /*0x1bcf3b*/
        && (v2 = cocos2d::CCDirector::sharedDirector(a1),
            !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 176LL))(v2) + 152))
        && (*(_BYTE *)(a1 + 912)
         || (v4 = cocos2d::CCDirector::sharedDirector(v3),
             *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4) + 153))
         || (v6 = cocos2d::CCDirector::sharedDirector(v5),
             *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) + 155)))
        && *(_DWORD *)(a1 + 1508) == 3;
  return result; /*0x1bcf3d*/
}

// [4/9] Address: 0x5b4b70
// Method: SetupSpawnPopup::onClose
__int64 __fastcall SetupSpawnPopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+18h]

  v2 = qword_905FD0; /*0x5b4b80*/
  if ( !qword_905FD0 ) /*0x5b4b8a*/
  {
    v4 = operator new(0x6E8u); /*0x5b4b96*/
    qword_905FD0 = sub_2723A0(v4); /*0x5b4ba4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5b4bb5*/
    v2 = qword_905FD0; /*0x5b4bb7*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 568) + 14873LL) = 1; /*0x5b4bc5*/
  return SetupTriggerPopup_onClose(a1); /*0x5b4bd2*/
}

// [5/9] Address: 0x5eeee0
// Method: SetupSpawnPopup::~SetupSpawnPopup
_QWORD *__fastcall SetupSpawnPopup__dtor_SetupSpawnPopup(_QWORD *Block, char a2)
{
  *Block = &SetupSpawnPopup::`vftable'; /*0x5eeef4*/
  Block[40] = &SetupSpawnPopup::`vftable'; /*0x5eef00*/
  Block[41] = &SetupSpawnPopup::`vftable'; /*0x5eef0e*/
  Block[42] = &SetupSpawnPopup::`vftable'; /*0x5eef1c*/
  Block[43] = &SetupSpawnPopup::`vftable'; /*0x5eef2a*/
  Block[44] = &SetupSpawnPopup::`vftable'; /*0x5eef38*/
  Block[51] = &SetupSpawnPopup::`vftable'; /*0x5eef46*/
  Block[54] = &SetupSpawnPopup::`vftable'; /*0x5eef54*/
  Block[68] = &SetupSpawnPopup::`vftable'; /*0x5eef62*/
  Block[83] = &SetupSpawnPopup::`vftable'; /*0x5eef70*/
  Block[84] = &SetupSpawnPopup::`vftable'; /*0x5eef7e*/
  sub_3DA90(Block + 127); /*0x5eef8c*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x5eef94*/
  if ( (a2 & 1) != 0 ) /*0x5eef9c*/
    j_j_free(Block); /*0x5eefa6*/
  return Block; /*0x5eefab*/
}

// [6/9] Address: 0x5eefc0
// Method: SetupSpawnPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupSpawnPopup_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x418u); /*0x5eefe4*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5eefef*/
  *v4 = &SetupSpawnPopup::`vftable'; /*0x5eeffb*/
  v4[40] = &SetupSpawnPopup::`vftable'; /*0x5ef005*/
  v4[41] = &SetupSpawnPopup::`vftable'; /*0x5ef013*/
  v4[42] = &SetupSpawnPopup::`vftable'; /*0x5ef021*/
  v4[43] = &SetupSpawnPopup::`vftable'; /*0x5ef02f*/
  v4[44] = &SetupSpawnPopup::`vftable'; /*0x5ef03d*/
  v4[51] = &SetupSpawnPopup::`vftable'; /*0x5ef04b*/
  v4[54] = &SetupSpawnPopup::`vftable'; /*0x5ef059*/
  v4[68] = &SetupSpawnPopup::`vftable'; /*0x5ef067*/
  v4[83] = &SetupSpawnPopup::`vftable'; /*0x5ef075*/
  v4[84] = &SetupSpawnPopup::`vftable'; /*0x5ef083*/
  *((_BYTE *)v4 + 1000) = 0; /*0x5ef08a*/
  v4[127] = 0; /*0x5ef093*/
  v4[128] = 0; /*0x5ef09a*/
  v4[129] = 0; /*0x5ef0a1*/
  v4[130] = 0; /*0x5ef0a8*/
  if ( (unsigned __int8)sub_5EF100(v4, a1, a2) ) /*0x5ef0b8*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5ef0c4*/
    return v4; /*0x5ef0ca*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5ef0de*/
    return 0; /*0x5ef0e1*/
  }
}

// [7/9] Address: 0x5eff30
// Method: SetupSpawnPopup::onAddRemap
void __fastcall SetupSpawnPopup_onAddRemap(_BYTE *a1)
{
  unsigned int v2; // ebx
  float v3; // xmm0_4

  if ( !a1[1000] ) /*0x5eff36*/
  {
    v2 = (int)(*(float (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 0xFFFFFFFFLL); /*0x5eff60*/
    v3 = (*(float (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 4294967294LL); /*0x5eff64*/
    sub_5EFF90(a1, v2, (unsigned int)(int)v3); /*0x5eff74*/
  }
}

// [8/9] Address: 0x5f0240
// Method: SetupSpawnPopup::onPasteRemap
// Hidden C++ exception states: #wind=1
void __fastcall SetupSpawnPopup_onPasteRemap(__int64 a1)
{
  __int64 v2; // rdi
  __int64 ***v3; // rdi
  __int64 **i; // rbx
  void *v5; // [rsp+40h] [rbp+18h]

  v2 = qword_905FD0; /*0x5f0252*/
  if ( !qword_905FD0 ) /*0x5f025c*/
  {
    v5 = operator new(0x6E8u); /*0x5f0268*/
    qword_905FD0 = sub_2723A0(v5); /*0x5f0276*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5f0287*/
    v2 = qword_905FD0; /*0x5f0289*/
  }
  v3 = *(__int64 ****)(*(_QWORD *)(v2 + 568) + 15672LL); /*0x5f0297*/
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i ) /*0x5f02a4*/
    sub_5EFF90(a1, *((unsigned int *)i + 4), *((unsigned int *)i + 5)); /*0x5f02ba*/
}

// [9/9] Address: 0x5f0b10
// Method: SetupSpawnPopup::onSelectRemap
void __fastcall SetupSpawnPopup_onSelectRemap(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r8
  int v5; // edx
  __int64 v6; // rcx

  if ( !*(_BYTE *)(a1 + 1000) ) /*0x5f0b16*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5f0b2c*/
    v4 = *(_QWORD *)(a1 + 1016); /*0x5f0b2f*/
    if ( (*(_QWORD *)(a1 + 1024) - v4) >> 3 <= (unsigned __int64)v3 ) /*0x5f0b4a*/
      sub_5F0C30(); /*0x5f0bcb*/
    v5 = *(_DWORD *)(v4 + 8LL * v3); /*0x5f0b4c*/
    v6 = v4 + 8LL * v3; /*0x5f0b50*/
    if ( *(_QWORD *)(a1 + 1040) == __PAIR64__(*(_DWORD *)(v6 + 4), v5) ) /*0x5f0b5a*/
    {
      *(_QWORD *)(a1 + 1040) = 0; /*0x5f0b6c*/
    }
    else
    {
      *(_DWORD *)(a1 + 1040) = v5; /*0x5f0b81*/
      *(_DWORD *)(a1 + 1044) = *(_DWORD *)(v6 + 4); /*0x5f0b95*/
      SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0xFFFFFFFF, (float)v5); /*0x5f0b9b*/
      SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0xFFFFFFFE, (float)*(int *)(a1 + 1044)); /*0x5f0bb3*/
    }
    sub_5F0BE0(a1); /*0x5f0b78*/
  }
}

// Address: 0xe3550
// Method: SetupSpawnPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupSpawnPopup_init(__int64 a1, cocos2d::CCObject *a2, size_t *a3, __int64 a4)
{
  void *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm9_4
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  struct cocos2d::CCLabelBMFont *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rax
  struct cocos2d::CCSprite *v22; // rax
  int v23; // ebx
  cocos2d::CCObject *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  cocos2d::CCObject *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  const struct cocos2d::CCPoint *v36; // rax
  char *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  char v43; // cl
  BOOL v44; // edi
  __int64 v45; // rcx
  cocos2d::CCObject *v46; // rbx
  int *v47; // rdx
  cocos2d::CCObject *v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  __int128 *v54; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v55[8]; // [rsp+58h] [rbp-61h] BYREF
  float v56; // [rsp+60h] [rbp-59h] BYREF
  float v57; // [rsp+64h] [rbp-55h]
  _BYTE v58[32]; // [rsp+68h] [rbp-51h] BYREF
  __int128 v59; // [rsp+88h] [rbp-31h] BYREF
  __int64 v60; // [rsp+98h] [rbp-21h]
  __int64 v61; // [rsp+A0h] [rbp-19h]

  if ( !a2 || !a4 || !(unsigned __int8)sub_6060E0(a1, 0, 0, a4, 1126825984, 1, 0) )
    return 0;
  *(_QWORD *)(a1 + 1008) = a2;
  cocos2d::CCObject::retain(a2);
  *(_QWORD *)(a1 + 1016) = a4;
  if ( (size_t *)(a1 + 1024) != a3 )
  {
    v8 = a3;
    if ( a3[3] > 0xF )
      v8 = (void *)*a3;
    sub_3F5A0((void *)(a1 + 1024), v8, a3[2]);
  }
  v9 = GJAccountManager_sharedState();
  *(_BYTE *)(a1 + 1056) = *((_DWORD *)a2 + 16) == *(_DWORD *)(v9 + 360) - *(_DWORD *)(v9 + 364);
  v10 = cocos2d::CCDirector::sharedDirector(v9);
  cocos2d::CCDirector::getWinSize(v10, &v56);
  v11 = v56 * 0.5;
  v12 = v57 * 0.5;
  v13 = (float)(v57 * 0.5) + 85.0;
  sub_3E4F0(&v59, a3);
  v15 = sub_606E80(a1, v14);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 240LL))(v15);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1008) + 104LL);
  if ( v16 > 0 )
  {
    v17 = sub_73350(&v59, v16);
    if ( *(_QWORD *)(v17 + 24) > 0xFu )
      v17 = *(_QWORD *)v17;
    v18 = cocos2d::CCLabelBMFont::create((const char *)v17, "chatFont.fnt");
    sub_3C310(&v59);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v18 + 160LL))(v18);
    (**((void (__fastcall ***)(__int64, void *))v18 + 46))((__int64)v18 + 368, &unk_6FDE68);
    LOBYTE(v19) = -106;
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v18 + 46) + 40LL))((__int64)v18 + 368, v19);
    v20 = *(_QWORD *)v18;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, v11, v13 - 36.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v20 + 184))(v18, v21);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v18,
      1);
  }
  v22 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
  v23 = (int)v22;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v22 + 160LL))(v22);
  v24 = CCMenuItemSpriteExtra_create(v23, 0, a1, (__int64)sub_9C4B8);
  *((_DWORD *)v24 + 93) = 1069547520;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v24);
  v25 = *(_QWORD *)v24;
  v26 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, (float)(v11 - 150.0) + 8.0, v13 - 12.0);
  cocos2d::CCNode::convertToNodeSpace(v26, &v54, v27);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v25 + 184))(v24, v28);
  v29 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("threadBtn_copy_001.png");
  v30 = CCMenuItemSpriteExtra_create(v29, 0, a1, (__int64)sub_E3DE0);
  *((_DWORD *)v30 + 93) = 1068708659;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v30);
  v31 = *(_QWORD *)v30;
  v32 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, (float)(v11 + 150.0) - 18.0, v13 - 19.0);
  cocos2d::CCNode::convertToNodeSpace(v32, v55, v33);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v31 + 184))(v30, v34);
  v54 = &v59;
  v59 = 0;
  v60 = 0;
  v61 = 15;
  LOBYTE(v59) = 0;
  SetupSmartBlockLayer_onCreateAll(v35);
  LODWORD(v32) = dword_8F8394;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 0.0, 0.5);
  v37 = TextArea_create((__int64)&v59, "chatFont.fnt", 1.0, 250.0, v36, 1101004800, 1, v32);
  v37[601] = 1;
  v38 = *(_QWORD *)v37;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, 0.0, 0.5);
  (*(void (__fastcall **)(char *, __int64))(v38 + 288))(v37, v39);
  sub_3E4F0(v58, *(_QWORD *)(a1 + 1008) + 72LL);
  PlayLayer_updateProgressbar((__int64)v37, v40, 250.0, COERCE_DOUBLE(1117782016), 0.34999999, 0.0);
  v41 = *(_QWORD *)v37;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, (float)(v11 - 125.0) - 10.0, v12 + 2.0);
  (*(void (__fastcall **)(char *, __int64))(v41 + 184))(v37, v42);
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v37, 1);
  v43 = *(_BYTE *)(a1 + 1056);
  v44 = v43 || *(_BYTE *)(*(_QWORD *)(a1 + 1016) + 783LL);
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 1008) + 112LL) )
  {
    if ( !v43
      || (v45 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 744LL), *(_BYTE *)(v45 + 320))
      || *(_DWORD *)(v45 + 324) != 8 )
    {
      v54 = (__int128 *)operator new(0x2C8u);
      v46 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v54);
      if ( v46 )
      {
        v47 = &dword_71ECEC;
        if ( v44 )
          v47 = (int *)"Delete";
        if ( ButtonSprite_init(
               (__int64)v46,
               (__int64)v47,
               100,
               0,
               1060320051,
               1,
               (const char *)&qword_6FFF68,
               (__int64)"GJ_button_06.png",
               1106247680) )
        {
          cocos2d::CCObject::autorelease(v46);
        }
        else
        {
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v46 + 8LL))(v46, 1);
          LODWORD(v46) = 0;
        }
      }
      v48 = CCMenuItemSpriteExtra_create((int)v46, 0, a1, (__int64)sub_E3BC0);
      *((_DWORD *)v48 + 93) = 1066192077;
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v48);
      v49 = *(_QWORD *)v48;
      v50 = *(_QWORD *)(a1 + 552);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, v11, (float)(v12 - 85.0) + 24.0);
      cocos2d::CCNode::convertToNodeSpace(v50, v55, v51);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v49 + 184))(v48, v52);
    }
  }
  return 1;
}

// Address: 0x428e10
// Method: SetupSpawnPopup::updateRemapButtons
// Hidden C++ exception states: #wind=3
void __fastcall SetupSpawnPopup_updateRemapButtons(__int64 a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *i; // rdi
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  void **v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  cocos2d::CCSpriteFrameCache *v16; // rax
  struct cocos2d::CCSpriteFrame *v17; // rax
  void *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r15
  char v23; // r12
  bool hasClaimedListReward; // r13
  __int64 v25; // rcx
  struct cocos2d::CCObject *v26; // rsi
  __int64 v27; // rdx
  void (__fastcall *v28)(char *, __int64); // r8
  __int64 v29; // rbx
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rdi
  __int16 *v32; // rdx
  __int64 v33; // rdx
  float v34; // xmm6_4
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  float v40; // xmm1_4
  __int64 v41; // rbx
  __int64 v42; // rax
  cocos2d::CCString *v43; // rax
  const char *v44; // rax
  struct cocos2d::CCObject *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // eax
  float v50; // xmm6_4
  struct cocos2d::CCObject *v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  struct cocos2d::CCObject *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  const char *v59; // rcx
  struct cocos2d::CCObject *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rax
  struct cocos2d::CCObject *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  struct cocos2d::CCObject *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  struct cocos2d::CCObject *v73; // r15
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rax
  int v77; // esi
  cocos2d::CCString *v78; // rax
  const char *v79; // rax
  struct cocos2d::CCObject *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r15
  __int64 v92; // rbx
  float v93; // xmm6_4
  float *v94; // rax
  __int64 v95; // rax
  struct cocos2d::CCSprite *v96; // rsi
  cocos2d::CCObject *v97; // r13
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rdi
  __int64 v102; // rax
  struct cocos2d::CCSprite *v103; // r12
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rax
  struct cocos2d::CCLabelBMFont *v108; // rdi
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rax
  struct cocos2d::CCObject *v114; // rdx
  struct cocos2d::CCObject *v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rax
  struct cocos2d::CCLabelBMFont *v120; // rdi
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // rax
  char v124; // [rsp+30h] [rbp-99h]
  __int16 v125; // [rsp+32h] [rbp-97h] BYREF
  char v126; // [rsp+34h] [rbp-95h]
  __int16 v127; // [rsp+36h] [rbp-93h] BYREF
  char v128; // [rsp+38h] [rbp-91h]
  struct cocos2d::CCObject *v129; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v130[8]; // [rsp+48h] [rbp-81h] BYREF
  int v131; // [rsp+50h] [rbp-79h]
  __int16 v132; // [rsp+54h] [rbp-75h] BYREF
  char v133; // [rsp+56h] [rbp-73h]
  float v134[2]; // [rsp+58h] [rbp-71h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v136; // [rsp+70h] [rbp-59h]
  unsigned __int64 v137; // [rsp+78h] [rbp-51h]
  __int128 v138; // [rsp+80h] [rbp-49h] BYREF
  __int64 v139; // [rsp+90h] [rbp-39h]
  __int64 v140; // [rsp+98h] [rbp-31h]

  *(_BYTE *)(a1 + 1024) = 0;
  v2 = *(_QWORD *)(a1 + 992);
  if ( v2 )
  {
    v3 = *(unsigned int **)(v2 + 56);
    v4 = *v3;
    if ( (_DWORD)v4 )
    {
      v5 = (_QWORD *)*((_QWORD *)v3 + 2);
      for ( i = &v5[v4 - 1]; v5 <= i; ++v5 )
      {
        if ( !*v5 )
          break;
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 528LL))(*v5);
      }
    }
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 992));
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 360LL);
  if ( v7 )
  {
    if ( v7 > 0xA )
    {
      v7 = 0;
    }
    else if ( v7 == 6 || v7 == 7 )
    {
      ++v7;
    }
    else if ( v7 == 8 )
    {
      v7 = 6;
    }
    v10 = cocos2d::CCString::createWithFormat("diffIcon_%02d_btn_001.png", v7);
    CString = cocos2d::CCString::getCString(v10);
    *(_OWORD *)Block = 0;
    v136 = 0;
    v137 = 0;
    v12 = -1;
    do
      ++v12;
    while ( CString[v12] );
    sub_3C230(Block);
  }
  else
  {
    *(_OWORD *)Block = 0;
    Block[0] = (void *)sub_3C460(32);
    v136 = 25;
    v137 = 31;
    strcpy((char *)Block[0], "diffIcon_auto_btn_001.png");
    v9 = 103;
  }
  v13 = Block;
  if ( v137 > 0xF )
    v13 = (void **)Block[0];
  v14 = **(_QWORD **)(a1 + 1000);
  v15 = *(_QWORD *)(a1 + 1000);
  v16 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v9, v8);
  v17 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v16, (const char *)v13);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v14 + 1008))(v15, v17);
  if ( v137 > 0xF )
  {
    v18 = Block[0];
    if ( v137 + 1 >= 0x1000 )
    {
      v18 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v18);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1008) + 336LL))(
    *(_QWORD *)(a1 + 1008),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 920) + 397LL));
  v20 = cocos2d::CCDirector::sharedDirector(v19);
  cocos2d::CCDirector::getWinSize(v20, v134);
  v131 = GJLevelList_completedLevels(*(_QWORD *)(a1 + 920));
  v21 = *(_QWORD *)(a1 + 920);
  v22 = (__int64)(*(_QWORD *)(v21 + 328) - *(_QWORD *)(v21 + 320)) >> 2;
  v23 = 0;
  v124 = 0;
  hasClaimedListReward = 0;
  if ( *(int *)(v21 + 384) > 0 && *(int *)(v21 + 388) > 0 )
  {
    v23 = 1;
    v124 = 1;
    v25 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v129 = (struct cocos2d::CCObject *)operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v129);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v25 = qword_905FE0;
    }
    hasClaimedListReward = GameStatsManager_hasClaimedListReward(v25, *(_QWORD *)(a1 + 920));
    if ( !hasClaimedListReward )
      LODWORD(v22) = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 388LL);
  }
  v132 = 0;
  v133 = 0;
  v26 = cocos2d::CCSprite::create("GJ_progressBar_001.png");
  (**((void (__fastcall ***)(__int64, __int16 *))v26 + 40))((__int64)v26 + 320, &v132);
  v27 = *((_QWORD *)v26 + 40);
  v28 = *(void (__fastcall **)(char *, __int64))(v27 + 40);
  LOBYTE(v27) = 125;
  v28((char *)v26 + 320, v27);
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v26 + 136LL))(v26);
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v26 + 120LL))(v26);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v26, 3);
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v26);
  v29 = *(_QWORD *)v26;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, v134[0] * 0.5, 16.0);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v29 + 184))(v26, v30);
  v31 = cocos2d::CCSprite::create("GJ_progressBar_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 120LL))(v31);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 136LL))(v31);
  if ( !v23 || hasClaimedListReward )
  {
    v125 = -16816;
    v127 = -16816;
    v128 = -1;
    v32 = &v127;
  }
  else
  {
    v125 = 21759;
    v126 = 50;
    v32 = &v125;
  }
  (**((void (__fastcall ***)(__int64, __int16 *))v31 + 40))((__int64)v31 + 320, v32);
  LOBYTE(v33) = -31;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v31 + 40) + 40LL))((__int64)v31 + 320, v33);
  v34 = *((float *)v31 + 108);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v26 + 456LL))(
    v26,
    v31,
    1);
  v35 = *(_QWORD *)v31;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v35 + 288))(v31, v36);
  v37 = *(_QWORD *)v31;
  v38 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v26 + 320LL))(v26);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v129,
    (float)(v34 - (float)(v34 * 0.98000002)) * 0.5,
    *(float *)(v38 + 4) * 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v37 + 184))(v31, v39);
  v40 = 0.0;
  if ( (int)v22 > 0 )
    v40 = (float)v131 / (float)(int)v22;
  v41 = *(_QWORD *)v31;
  cocos2d::CCRect::CCRect(
    (cocos2d::CCRect *)Block,
    0.0,
    0.0,
    fminf(*((float *)v31 + 108), *((float *)v31 + 108) * v40),
    *((float *)v31 + 109));
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v41 + 992))(v31, v42);
  v43 = cocos2d::CCString::createWithFormat("%i/%i", v131, v22);
  v44 = cocos2d::CCString::getCString(v43);
  v45 = cocos2d::CCLabelBMFont::create(v44, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v45, 4);
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v45);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, 1.0);
  v47 = v46;
  v48 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v26 + 200LL))(v26);
  cocos2d::CCPoint::operator+(v48, v130, v47);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v45 + 184LL))(v45, v130);
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v45 + 160LL))(v45);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 920) + 584LL) != 2 )
  {
    if ( !v23 || (v49 = 45, hasClaimedListReward) )
      v49 = 52;
    v50 = (float)v49;
    v51 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_downloadsIcon_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v51 + 160LL))(v51);
    v52 = *(_QWORD *)v51;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 26.0, (float)(v134[1] * 0.5) + 88.0);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v52 + 184))(v51, v53);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v51, 1);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v51);
    v54 = sub_72E80(&v138, *(unsigned int *)(*(_QWORD *)(a1 + 920) + 352LL), 0);
    if ( *(_QWORD *)(v54 + 24) > 0xFu )
      v54 = *(_QWORD *)v54;
    v55 = cocos2d::CCLabelBMFont::create((const char *)v54, (const char *)&qword_6FFF68);
    sub_3C310(&v138);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v55 + 160LL))(v55);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, -21.0);
    v57 = v56;
    v58 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v51 + 200LL))(v51);
    cocos2d::CCPoint::operator+(v58, v130, v57);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v55 + 184LL))(v55, v130);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v55, 1);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v55);
    v59 = "GJ_dislikesIcon_001.png";
    if ( *(int *)(*(_QWORD *)(a1 + 920) + 356LL) >= 0 )
      v59 = "GJ_likesIcon_001.png";
    v60 = cocos2d::CCSprite::createWithSpriteFrameName(v59);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v60 + 160LL))(v60);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v129,
      0.0,
      (float)((*(int *)(*(_QWORD *)(a1 + 920) + 356LL) >> 31) & 4) - v50);
    v62 = v61;
    v63 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v51 + 200LL))(v51);
    cocos2d::CCPoint::operator+(v63, v130, v62);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v60 + 184LL))(v60, v130);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v60, 1);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v60);
    v64 = sub_72E80(&v138, *(unsigned int *)(*(_QWORD *)(a1 + 920) + 356LL), 0);
    if ( *(_QWORD *)(v64 + 24) > 0xFu )
      v64 = *(_QWORD *)v64;
    v65 = cocos2d::CCLabelBMFont::create((const char *)v64, (const char *)&qword_6FFF68);
    sub_3C310(&v138);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v65 + 160LL))(v65);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, -21.0);
    v67 = v66;
    v68 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v60 + 200LL))(v60);
    cocos2d::CCPoint::operator+(v68, v130, v67);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v65 + 184LL))(v65, v130);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v65, 1);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v65);
    if ( v124 )
    {
      if ( hasClaimedListReward )
      {
        v115 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_diamondsIcon_001.png");
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)a1 + 464LL))(a1, v115);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v115);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.0, -v50);
        v117 = v116;
        v118 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v60 + 200LL))(v60);
        cocos2d::CCPoint::operator+(v118, &v129, v117);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject **))(*(_QWORD *)v115 + 184LL))(
          v115,
          &v129);
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v115 + 160LL))(v115);
        v119 = sub_72E80(&v138, *(unsigned int *)(*(_QWORD *)(a1 + 920) + 384LL), 0);
        if ( *(_QWORD *)(v119 + 24) > 0xFu )
          v119 = *(_QWORD *)v119;
        v120 = cocos2d::CCLabelBMFont::create((const char *)v119, (const char *)&qword_6FFF68);
        sub_3C310(&v138);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v120 + 160LL))(v120);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.0, -21.0);
        v122 = v121;
        v123 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v115 + 200LL))(v115);
        cocos2d::CCPoint::operator+(v123, &v129, v122);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, struct cocos2d::CCObject **))(*(_QWORD *)v120 + 184LL))(
          v120,
          &v129);
        (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v120, 1);
        v114 = v120;
      }
      else
      {
        v69 = cocos2d::CCSprite::createWithSpriteFrameName("diamond_small01_001.png");
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v69, 10);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v69);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 125.0, 0.0);
        v71 = v70;
        v72 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v26 + 200LL))(v26);
        cocos2d::CCPoint::operator+(v72, v130, v71);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v69 + 184LL))(v69, v130);
        v73 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png");
        v129 = v73;
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)a1 + 464LL))(a1, v73);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v73);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.0, -v50);
        v75 = v74;
        v76 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v60 + 200LL))(v60);
        cocos2d::CCPoint::operator+(v76, v130, v75);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v73 + 184LL))(v73, v130);
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v73 + 160LL))(v73);
        v77 = v131;
        v78 = cocos2d::CCString::createWithFormat(
                "%i/%i",
                v131,
                (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 920) + 328LL) - *(_QWORD *)(*(_QWORD *)(a1 + 920) + 320LL)) >> 2);
        v79 = cocos2d::CCString::getCString(v78);
        v80 = cocos2d::CCLabelBMFont::create(v79, (const char *)&qword_6FFF68);
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)a1 + 464LL))(a1, v80);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v80);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.0, -21.0);
        v82 = v81;
        v83 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v73 + 200LL))(v73);
        cocos2d::CCPoint::operator+(v83, v130, v82);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v80 + 184LL))(v80, v130);
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v80 + 160LL))(v80);
        v86 = cocos2d::CCNode::create(v85, v84);
        v87 = *(_QWORD *)v86;
        cocos2d::CCSize::CCSize((cocos2d::CCSize *)Block, 50.0, 50.0);
        (*(void (__fastcall **)(__int64, __int64))(v87 + 312))(v86, v88);
        v91 = cocos2d::CCNode::create(v90, v89);
        (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v91 + 312LL))(v91, &unk_904FD0);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v86 + 464LL))(v86, v91);
        v92 = *(_QWORD *)v91;
        v93 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 320LL))(v86) + 4) * 0.5;
        v94 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 320LL))(v86);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, *v94 * 0.5, v93);
        (*(void (__fastcall **)(__int64, __int64))(v92 + 184))(v91, v95);
        if ( v77 < *(_DWORD *)(*(_QWORD *)(a1 + 920) + 388LL) )
        {
          v138 = 0;
          v139 = 0;
          v140 = 0;
          *(_QWORD *)&v138 = sub_3C460(32);
          v139 = 20;
          v140 = 31;
          strcpy((char *)v138, "GJ_rewardBtn_001.png");
          v96 = (struct cocos2d::CCSprite *)sub_4C150(&v138);
          sub_3C310(&v138);
          *((_DWORD *)v96 + 151) = 1051260355;
          *((_DWORD *)v96 + 152) = 1051260355;
          *((_DWORD *)v96 + 153) = 1051260355;
          v127 = -20561;
          v128 = -81;
          (**((void (__fastcall ***)(__int64, __int16 *))v96 + 40))((__int64)v96 + 320, &v127);
        }
        else
        {
          v96 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_rewardBtn_001.png");
        }
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v96 + 160LL))(v96);
        (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)v91 + 464LL))(v91, v96);
        v97 = CCMenuItemSpriteExtra_create(v86, 0, a1, (__int64)sub_429DF0);
        (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 880) + 464LL))(
          *(_QWORD *)(a1 + 880),
          v97);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.0, -54.0);
        v99 = v98;
        v100 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v129 + 200LL))(v129);
        cocos2d::CCPoint::operator+(v100, v130, v99);
        cocos2d::CCPoint::operator=(a1 + 1016, v130);
        v101 = *(_QWORD *)v97;
        cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 880), Block, a1 + 1016);
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v101 + 184))(v97, v102);
        v103 = cocos2d::CCSprite::createWithSpriteFrameName("diamond_small01_001.png");
        (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)v91 + 464LL))(v91, v103);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 8.0, -25.0);
        v105 = v104;
        v106 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v96 + 200LL))(v96);
        cocos2d::CCPoint::operator+(v106, &v129, v105);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCObject **))(*(_QWORD *)v103 + 184LL))(
          v103,
          &v129);
        v107 = GameToolbox_intToString((__int64)&v138, *(_DWORD *)(*(_QWORD *)(a1 + 920) + 384LL));
        if ( *(_QWORD *)(v107 + 24) > 0xFu )
          v107 = *(_QWORD *)v107;
        v108 = cocos2d::CCLabelBMFont::create((const char *)v107, (const char *)&qword_6FFF68);
        sub_3C310(&v138);
        (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v91 + 464LL))(v91, v108);
        v109 = *(_QWORD *)v108;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 1.0, 0.5);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v109 + 288))(v108, v110);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, -8.0, 0.0);
        v112 = v111;
        v113 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v103 + 200LL))(v103);
        cocos2d::CCPoint::operator+(v113, &v129, v112);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, struct cocos2d::CCObject **))(*(_QWORD *)v108 + 184LL))(
          v108,
          &v129);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v108 + 160LL))(v108);
        v114 = v97;
      }
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 992), v114);
    }
  }
}
