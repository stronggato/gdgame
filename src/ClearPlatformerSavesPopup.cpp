#include <Geode/binding/ClearPlatformerSavesPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0xa1fc0
// Method: ClearPlatformerSavesPopup::~ClearPlatformerSavesPopup
_QWORD *__fastcall ClearPlatformerSavesPopup__dtor_ClearPlatformerSavesPopup(_QWORD *Block, char a2)
{
  *Block = &ClearPlatformerSavesPopup::`vftable'; /*0xa1fd3*/
  Block[40] = &ClearPlatformerSavesPopup::`vftable'; /*0xa1fe0*/
  Block[41] = &ClearPlatformerSavesPopup::`vftable'; /*0xa1fee*/
  Block[42] = &ClearPlatformerSavesPopup::`vftable'; /*0xa1ffc*/
  Block[43] = &ClearPlatformerSavesPopup::`vftable'; /*0xa200a*/
  Block[44] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2018*/
  Block[51] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2026*/
  Block[54] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2034*/
  Block[68] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2042*/
  Block[83] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2050*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0xa2057*/
  if ( (a2 & 1) != 0 ) /*0xa205f*/
    j_j_free(Block); /*0xa2069*/
  return Block; /*0xa206e*/
}

// [3/3] Address: 0xa30d0
// Method: ClearPlatformerSavesPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
void __fastcall ClearPlatformerSavesPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  char v5; // di
  const char *v6; // r8
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void **v13; // r14
  char *v14; // rsi
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  cocos2d::CCObject *v19; // rbx
  char *v20; // rax
  __int128 *v21; // [rsp+50h] [rbp-49h] BYREF
  __int128 v22; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-31h]
  __int64 v24; // [rsp+70h] [rbp-29h]
  char v25[32]; // [rsp+80h] [rbp-19h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+17h]
  unsigned __int64 v28; // [rsp+B8h] [rbp+1Fh]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 && a3 ) /*0xa3118*/
  {
    v5 = *(_BYTE *)(a1 + 8); /*0xa311e*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xa312a*/
    {
      v21 = (__int128 *)operator new(0x690u); /*0xa3136*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0xa3143*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa3154*/
    }
    LODWORD(v21) = 0; /*0xa3159*/
    RewardUnlockLayer_create(v5 != 0, &v21); /*0xa316a*/
    sub_A2800(a1 - 664); /*0xa3176*/
    v6 = (const char *)&unk_70802C; /*0xa3185*/
    if ( (_DWORD)v21 == 1 ) /*0xa318f*/
      v6 = &byte_6E86E0; /*0xa318f*/
    v7 = cocos2d::CCString::createWithFormat("Cleared <cg>%i</c> platformer save%s.", (_DWORD)v21, v6); /*0xa319a*/
    CString = cocos2d::CCString::getCString(v7); /*0xa31a3*/
    *(_OWORD *)Src = 0; /*0xa31ac*/
    v27 = 0; /*0xa31b0*/
    v28 = 0; /*0xa31b4*/
    v9 = -1; /*0xa31b8*/
    do /*0xa31c3*/
      ++v9; /*0xa31c0*/
    while ( CString[v9] ); /*0xa31c3*/
    sub_3C230(Src); /*0xa31d0*/
    v22 = 0; /*0xa31d9*/
    v23 = 0; /*0xa31dd*/
    v24 = 0; /*0xa31e1*/
    v13 = Src; /*0xa31e5*/
    v14 = (char *)Src[0]; /*0xa31e9*/
    v15 = v28; /*0xa31ed*/
    if ( v28 > 0xF ) /*0xa31f5*/
      v13 = (void **)Src[0]; /*0xa31f5*/
    v16 = 0x7FFFFFFFFFFFFFFFLL; /*0xa31f9*/
    v17 = v27; /*0xa3203*/
    if ( v27 > 0x7FFFFFFFFFFFFFFFLL ) /*0xa320a*/
      sub_8D90(v11, v10, v12); /*0xa3354*/
    if ( v27 > 0xF ) /*0xa3214*/
    {
      if ( (v27 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xa3236*/
      {
        v16 = v27 | 0xF; /*0xa3238*/
        if ( (v27 | 0xF) < 0x16 ) /*0xa3243*/
          v16 = 22; /*0xa3243*/
      }
      *(_QWORD *)&v22 = sub_3C460(v16 + 1); /*0xa3250*/
      v23 = v17; /*0xa3254*/
      v24 = v16; /*0xa3258*/
      memcpy((void *)v22, v13, v17 + 1); /*0xa3266*/
    }
    else
    {
      v23 = v27; /*0xa3216*/
      v24 = 15; /*0xa321a*/
      v22 = *(_OWORD *)v13; /*0xa3226*/
    }
    v21 = &v22; /*0xa326f*/
    sub_3E4F0(v25, &v22); /*0xa327b*/
    v19 = FLAlertLayer_create_0(0, (int)"Cleared", v18, (__int64)"OK", 0, 1133903872, 0, 0, 1065353216); /*0xa32c7*/
    sub_3C310(&v22); /*0xa32ce*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v19 + 1064LL))(v19); /*0xa32e0*/
    if ( v15 > 0xF ) /*0xa32e7*/
    {
      v20 = v14; /*0xa32ed*/
      if ( v15 + 1 >= 0x1000 ) /*0xa32f7*/
      {
        v14 = (char *)*((_QWORD *)v14 - 1); /*0xa32fd*/
        if ( (unsigned __int64)(v20 - v14 - 8) > 0x1F ) /*0xa330c*/
          invoke_watson(0, 0, 0, 0, 0); /*0xa331d*/
      }
      j_j_free(v14); /*0xa3327*/
    }
  }
}

// Address: 0xa2080
// Method: ClearPlatformerSavesPopup::init
// Hidden C++ exception states: #wind=2
bool __fastcall ClearPlatformerSavesPopup_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  struct cocos2d::CCLabelBMFont *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  struct cocos2d::CCLabelBMFont *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  struct cocos2d::CCLabelBMFont *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  struct cocos2d::CCLabelBMFont *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // eax
  cocos2d::CCObject *v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  struct cocos2d::CCSprite *v37; // rax
  cocos2d::CCObject *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  cocos2d::CCObject *v49; // rbx
  cocos2d::CCObject *v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  _BYTE v55[8]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v56[16]; // [rsp+88h] [rbp-31h] BYREF
  char v57[16]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-11h]
  __int64 v59; // [rsp+B0h] [rbp-9h]
  float v60; // [rsp+128h] [rbp+6Fh] BYREF
  float v61; // [rsp+12Ch] [rbp+73h]
  char v62; // [rsp+130h] [rbp+77h] BYREF
  char *v63; // [rsp+138h] [rbp+7Fh] BYREF

  result = FLAlertLayer_init(a1, 75);
  if ( result )
  {
    *(_BYTE *)(a1 + 596) = 1;
    v4 = cocos2d::CCDirector::sharedDirector(v3);
    cocos2d::CCDirector::getWinSize(v4, &v60);
    *(_DWORD *)(a1 + 648) = 1135869952;
    *(_DWORD *)(a1 + 652) = 1132920832;
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v56, 0.0, 0.0, 80.0, 80.0);
    v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5);
    v7 = *v6;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v63, 360.0, 270.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v7 + 312))(v6, v8);
    v9 = *v6;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v63, v60 * 0.5, v61 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v9 + 184))(v6, v10);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v6,
      0xFFFFFFFFLL);
    v11 = cocos2d::CCLabelBMFont::create("Clear Platformer Saves", (const char *)&qword_6FFF68);
    v12 = *(_QWORD *)v11;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v63, v60 * 0.5, (float)((float)(v61 * 0.5) + 135.0) - 18.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 184))(v11, v13);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 160LL))(v11);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v11);
    v14 = cocos2d::CCLabelBMFont::create("Clears the saved checkpoint on all platformer levels.", "goldFont.fnt");
    v15 = *(_QWORD *)v14;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v63, v60 * 0.5, (float)(v61 * 0.5) + 80.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v15 + 184))(v14, v16);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v14 + 160LL))(v14);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v14);
    v17 = cocos2d::CCLabelBMFont::create("Stats and best runs are kept.", "goldFont.fnt");
    v18 = *(_QWORD *)v17;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v63, v60 * 0.5, (float)(v61 * 0.5) + 62.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v18 + 184))(v17, v19);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v17 + 160LL))(v17);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v17);
    v20 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, (const char *)&qword_6FFF68);
    *(_QWORD *)(a1 + 688) = v20;
    v21 = *(_QWORD *)v20;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v63, v60 * 0.5, (float)(v61 * 0.5) + 22.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v21 + 184))(v20, v22);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 160LL))(*(_QWORD *)(a1 + 688));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 688));
    v23 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, (const char *)&qword_6FFF68);
    *(_QWORD *)(a1 + 696) = v23;
    v24 = *(_QWORD *)v23;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v63, v60 * 0.5, (float)(v61 * 0.5) - 8.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v24 + 184))(v23, v25);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 696) + 160LL))(*(_QWORD *)(a1 + 696));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 696));
    v30 = cocos2d::CCMenu::create(v27, v26, v28, v29);
    *(_QWORD *)(a1 + 552) = v30;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v30, 10);
    v31 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    v32 = CCMenuItemSpriteExtra_create(v31, 0, a1, (__int64)UploadPopup_onClose);
    *((_DWORD *)v32 + 93) = 1069547520;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v32);
    v33 = *(_QWORD *)v32;
    v34 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v63,
      (float)((float)(v60 * 0.5) - 180.0) + 5.0,
      (float)((float)(v61 * 0.5) + 135.0) - 5.0);
    cocos2d::CCNode::convertToNodeSpace(v34, v55, v35);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v33 + 184))(v32, v36);
    v37 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsBtn02_001.png");
    LODWORD(v34) = (_DWORD)v37;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v37 + 160LL))(v37);
    v38 = CCMenuItemSpriteExtra_create(v34, 0, a1, (__int64)CCNodeContainer_create);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v38);
    v39 = *(_QWORD *)v38;
    v40 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v63,
      (float)((float)(v60 * 0.5) + 180.0) - 20.0,
      (float)((float)(v61 * 0.5) + 135.0) - 20.0);
    cocos2d::CCNode::convertToNodeSpace(v40, v55, v41);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v39 + 184))(v38, v42);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v62, (float)(v60 * 0.5) - 68.0, (float)(v61 * 0.5) - 56.0);
    v63 = v57;
    v58 = 15;
    v59 = 15;
    strcpy(v57, "Clear Favorites");
    v43 = *(_QWORD *)(a1 + 584);
    v44 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 8.0, 0.0);
    v46 = v45;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v56, (const struct cocos2d::CCPoint *)&v62);
    v48 = sub_6D440(
            (unsigned int)v57,
            (unsigned int)sub_A2D30,
            0,
            v44,
            v47,
            a1,
            v43,
            1061997773,
            1056964608,
            1124204544,
            v46,
            (__int64)&qword_6FFF68,
            0,
            0,
            0);
    *(_QWORD *)(a1 + 680) = v48;
    *(_DWORD *)(*(_QWORD *)(v48 + 376) + 372LL) = 1065353216;
    *(_DWORD *)(*(_QWORD *)(v48 + 384) + 372LL) = 1065353216;
    CCMenuItemToggler_toggle(v48, *(unsigned __int8 *)(v48 + 392));
    v63 = (char *)operator new(0x2C8u);
    v49 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v63);
    if ( v49 )
    {
      if ( ButtonSprite_init(
             (__int64)v49,
             (__int64)"Delete",
             60,
             0,
             1058642330,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_06.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v49);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v49 + 8LL))(v49, 1);
        LODWORD(v49) = 0;
      }
    }
    v50 = CCMenuItemSpriteExtra_create((int)v49, 0, a1, (__int64)sub_A2E90);
    *((_DWORD *)v50 + 93) = 1067030938;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v50);
    v51 = *(_QWORD *)v50;
    v52 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v63, v60 * 0.5, (float)((float)(v61 * 0.5) - 135.0) + 30.0);
    cocos2d::CCNode::convertToNodeSpace(v52, v56, v53);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v51 + 184))(v50, v54);
    sub_A2800(a1);
    return 1;
  }
  return result;
}
