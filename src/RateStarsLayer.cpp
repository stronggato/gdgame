#include <Geode/binding/RateStarsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0xe9980
// Method: RateStarsLayer::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall RateStarsLayer_create(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v6; // r14

  v6 = operator new(0x378u); /*0xe99a6*/
  PlayLayer_PlayLayer((__int64)v6); /*0xe99b1*/
  *v6 = &MemberListPopup::`vftable'; /*0xe99bd*/
  v6[40] = &MemberListPopup::`vftable'; /*0xe99c7*/
  v6[41] = &MemberListPopup::`vftable'; /*0xe99d5*/
  v6[42] = &MemberListPopup::`vftable'; /*0xe99e3*/
  v6[43] = &MemberListPopup::`vftable'; /*0xe99f1*/
  v6[44] = &MemberListPopup::`vftable'; /*0xe99ff*/
  v6[51] = &MemberListPopup::`vftable'; /*0xe9a0d*/
  v6[54] = &MemberListPopup::`vftable'; /*0xe9a1b*/
  v6[68] = &MemberListPopup::`vftable'; /*0xe9a29*/
  v6[97] = &MemberListPopup::`vftable'; /*0xe9a37*/
  v6[98] = &MemberListPopup::`vftable'; /*0xe9a45*/
  v6[99] = &MemberListPopup::`vftable'; /*0xe9a53*/
  v6[100] = 0; /*0xe9a5c*/
  v6[101] = 0; /*0xe9a63*/
  *((_BYTE *)v6 + 816) = 0; /*0xe9a6a*/
  v6[103] = 0; /*0xe9a71*/
  v6[104] = 0; /*0xe9a78*/
  v6[105] = 0; /*0xe9a7f*/
  *((_BYTE *)v6 + 848) = 0; /*0xe9a86*/
  v6[107] = 0; /*0xe9a8d*/
  *((_BYTE *)v6 + 864) = 0; /*0xe9a94*/
  *(_QWORD *)((char *)v6 + 868) = 0; /*0xe9a9b*/
  *((_DWORD *)v6 + 219) = 0; /*0xe9aa2*/
  *((_BYTE *)v6 + 880) = 0; /*0xe9aa9*/
  if ( (unsigned __int8)sub_E9B00(v6, a1, a2, a3) ) /*0xe9abd*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0xe9ac9*/
    return v6; /*0xe9acf*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0xe9ae3*/
    return 0; /*0xe9ae6*/
  }
}

// [2/8] Address: 0x559650
// Method: RateStarsLayer::~RateStarsLayer
char *__fastcall RateStarsLayer__dtor_RateStarsLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &RateStarsLayer::`vftable'; /*0x55966b*/
  *((_QWORD *)Block + 40) = &RateStarsLayer::`vftable'; /*0x559675*/
  *((_QWORD *)Block + 41) = &RateStarsLayer::`vftable'; /*0x559683*/
  *((_QWORD *)Block + 42) = &RateStarsLayer::`vftable'; /*0x559691*/
  *((_QWORD *)Block + 43) = &RateStarsLayer::`vftable'; /*0x55969f*/
  *((_QWORD *)Block + 44) = &RateStarsLayer::`vftable'; /*0x5596ad*/
  *((_QWORD *)Block + 51) = &RateStarsLayer::`vftable'; /*0x5596bb*/
  *((_QWORD *)Block + 54) = &RateStarsLayer::`vftable'; /*0x5596c9*/
  *((_QWORD *)Block + 68) = &RateStarsLayer::`vftable'; /*0x5596d7*/
  *((_QWORD *)Block + 83) = &RateStarsLayer::`vftable'; /*0x5596e5*/
  v4 = Block + 672; /*0x5596ec*/
  *((_QWORD *)Block + 84) = &RateStarsLayer::`vftable'; /*0x5596fa*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x5596fd*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x559707*/
  {
    v6 = operator new(0x690u); /*0x55970e*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x55971b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x55972c*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x55972e*/
  }
  if ( *(char **)(v5 + 1488) == v4 ) /*0x55973c*/
    *(_QWORD *)(v5 + 1488) = 0; /*0x55973e*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x559749*/
  if ( v7 ) /*0x559753*/
    cocos2d::CCObject::release(v7); /*0x559755*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x55975e*/
  if ( (a2 & 1) != 0 ) /*0x559768*/
    j_j_free(Block); /*0x559772*/
  return Block; /*0x55977a*/
}

// [4/8] Address: 0x559f70
// Method: RateStarsLayer::onFeature
double __fastcall RateStarsLayer_onFeature(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 744); /*0x559f70*/
  v2 = 0; /*0x559f77*/
  if ( v1 < 4 ) /*0x559f81*/
    v2 = (unsigned int)(v1 + 1); /*0x559f81*/
  *(_DWORD *)(a1 + 744) = v2; /*0x559f84*/
  return GauntletSelectLayer_playUnlockAnimation(*(_QWORD *)(a1 + 736), v2);
}

// [5/8] Address: 0x55a3b0
// Method: RateStarsLayer::uploadActionFinished
void __fastcall RateStarsLayer_uploadActionFinished(__int64 a1, int a2)
{
  bool v3; // zf
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 32) ) /*0x55a3bc*/
  {
    v3 = *(_QWORD *)(a1 + 56) == 0; /*0x55a3be*/
    *(_BYTE *)(a1 + 8) = 1; /*0x55a3c3*/
    if ( !v3 ) /*0x55a3c7*/
    {
      v4 = 0; /*0x55a3d8*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x55a3ee*/
      v5 = 17; /*0x55a3f8*/
      v6 = 31; /*0x55a401*/
      strcpy((char *)v4, "Rating submitted!"); /*0x55a40a*/
      UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 56), &v4); /*0x55a41f*/
    }
  }
}

// [6/8] Address: 0x55a430
// Method: RateStarsLayer::uploadActionFailed
void __fastcall RateStarsLayer_uploadActionFailed(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 32) ) /*0x55a43c*/
  {
    if ( *(_QWORD *)(a1 + 56) ) /*0x55a442*/
    {
      v3 = 0; /*0x55a466*/
      *(_QWORD *)&v3 = sub_3C460(32); /*0x55a477*/
      v4 = 31; /*0x55a47f*/
      v5 = 31; /*0x55a488*/
      strcpy((char *)v3, "Failed. Please try again later."); /*0x55a491*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 56), &v3); /*0x55a4cc*/
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 664LL) = 0; /*0x55a4d5*/
      *(_QWORD *)(a1 + 56) = 0; /*0x55a4dc*/
    }
  }
}

// [7/8] Address: 0x55a4f0
// Method: RateStarsLayer::onClosePopup
__int64 __fastcall RateStarsLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD); // rcx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x55a508*/
  LOBYTE(v4) = 1; /*0x55a511*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x55a516*/
  v6 = *(_BYTE *)(a1 + 16) == 0; /*0x55a51c*/
  *(_QWORD *)(a1 + 64) = 0; /*0x55a520*/
  if ( !v6 ) /*0x55a528*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 664) + 992LL))(a1 - 664, 0); /*0x55a53a*/
    LOBYTE(v7) = 1; /*0x55a54e*/
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 664) + 520LL))(a1 - 664, v7); /*0x55a550*/
    v8 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 88); /*0x55a556*/
    if ( v8 ) /*0x55a55d*/
      return (**v8)(v8); /*0x55a562*/
  }
  return result; /*0x55a564*/
}

// [8/8] Address: 0x55a5b0
// Method: RateStarsLayer::keyBackClicked
__int64 __fastcall RateStarsLayer_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x55a5b6*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x55a5c5*/
  LOBYTE(v2) = 1; /*0x55a5ce*/
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2); /*0x55a5d3*/
  v4 = (__int64 (__fastcall ***)(_QWORD))v1[94]; /*0x55a5d9*/
  if ( v4 ) /*0x55a5e3*/
    return (**v4)(v4); /*0x55a5ed*/
  return result; /*0x55a5f0*/
}

// Address: 0x559790
// Method: RateStarsLayer::init
// Hidden C++ exception states: #wind=4
bool __fastcall RateStarsLayer_init(__int64 a1, int a2, char a3)
{
  bool result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  char *v15; // rax
  int *v16; // rdx
  const char *p_Src; // rcx
  struct cocos2d::CCLabelBMFont *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  cocos2d::CCObject *v22; // rax
  __int64 v23; // rcx
  cocos2d::CCArray *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned int i; // edi
  __int64 v33; // r14
  cocos2d::CCString *v34; // rax
  const char *CString; // r15
  cocos2d::CCObject *v36; // rbx
  struct cocos2d::CCObject *v37; // rbx
  cocos2d::CCArray *v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  cocos2d::CCSprite *v48; // rax
  cocos2d::CCObject *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned int v52; // edi
  cocos2d::CCObject *v53; // rbx
  unsigned int v54; // edi
  cocos2d::CCObject *v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  float v59; // [rsp+50h] [rbp-59h] BYREF
  float v60; // [rsp+54h] [rbp-55h]
  void *v61; // [rsp+58h] [rbp-51h] BYREF
  __int64 v62[2]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v63[8]; // [rsp+70h] [rbp-39h] BYREF
  __int128 Src; // [rsp+78h] [rbp-31h] BYREF
  __int64 v65; // [rsp+88h] [rbp-21h]
  unsigned __int64 v66; // [rsp+90h] [rbp-19h]

  result = FLAlertLayer_init(a1, 75);
  if ( result )
  {
    *(_BYTE *)(a1 + 681) = 0;
    *(_DWORD *)(a1 + 704) = a2;
    *(_DWORD *)(a1 + 708) = -1;
    v8 = cocos2d::CCDirector::sharedDirector(v7);
    cocos2d::CCDirector::getWinSize(v8, &v59);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v62, 0.0, 0.0, 80.0, 80.0);
    v10 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v9);
    v11 = *v10;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v61, 380.0, 180.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 312))(v10, v12);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v10,
      0xFFFFFFFFLL);
    v13 = *v10;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v61, v59 * 0.5, v60 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v13 + 184))(v10, v14);
    Src = 0;
    v65 = 5;
    v66 = 15;
    strcpy((char *)&Src, "Rate ");
    if ( *(_BYTE *)(a1 + 681) )
    {
      v15 = (char *)sub_3C460(32);
      v65 = 17;
      v66 = 31;
      strcpy(v15, "Advisor: Suggest ");
      *(_QWORD *)&Src = v15;
    }
    v16 = (int *)"Moons";
    if ( !a3 )
      v16 = &dword_77FB74;
    sub_43D80(&Src, v16, 5u);
    p_Src = (const char *)&Src;
    if ( v66 > 0xF )
      p_Src = (const char *)Src;
    v18 = cocos2d::CCLabelBMFont::create(p_Src, (const char *)&qword_6FFF68);
    v19 = *(_QWORD *)v18;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v61, v59 * 0.5, (float)((float)(v60 * 0.5) + 90.0) - 20.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v19 + 184))(v18, v20);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v18);
    v22 = (cocos2d::CCObject *)cocos2d::CCArray::create(v21);
    *(_QWORD *)(a1 + 696) = v22;
    cocos2d::CCObject::retain(v22);
    v24 = (cocos2d::CCArray *)cocos2d::CCArray::create(v23);
    v26 = cocos2d::CCArray::create(v25);
    v31 = cocos2d::CCMenu::create(v28, v27, v29, v30);
    *(_QWORD *)(a1 + 552) = v31;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v31, 10);
    for ( i = 1; (int)i <= 10; ++i )
    {
      v33 = *(_QWORD *)(a1 + 552);
      v34 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, i);
      CString = cocos2d::CCString::getCString(v34);
      v61 = operator new(0x2C8u);
      v36 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v61);
      if ( v36 )
      {
        if ( ButtonSprite_init(
               (__int64)v36,
               (__int64)CString,
               20,
               0,
               1056964608,
               1,
               (const char *)&qword_6FFF68,
               (__int64)"GJ_button_01.png",
               1106247680) )
        {
          cocos2d::CCObject::autorelease(v36);
        }
        else
        {
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v36 + 8LL))(v36, 1);
          LODWORD(v36) = 0;
        }
      }
      v37 = CCMenuItemSpriteExtra_create((int)v36, 0, a1, (__int64)sub_559FA0);
      (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v37 + 160LL))(v37);
      *((_DWORD *)v37 + 101) = 1065353216;
      if ( v33 )
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)v33 + 464LL))(v33, v37);
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 696), v37);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v37 + 64LL))(v37, i);
      v38 = v24;
      if ( i > 5 )
        v38 = (cocos2d::CCArray *)v26;
      cocos2d::CCArray::addObject(v38, v37);
    }
    v39 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v61,
      (float)(v59 * 0.5) - 30.0,
      (float)((float)(v60 * 0.5) + 23.0) + 3.0);
    cocos2d::CCNode::convertToNodeSpace(v39, v62, v40);
    GameToolbox_alignItemsHorisontally((__int64)v24, 18.0, v41, 0);
    v42 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v62,
      (float)(v59 * 0.5) - 30.0,
      (float)((float)(v60 * 0.5) - 23.0) + 3.0);
    cocos2d::CCNode::convertToNodeSpace(v42, &v61, v43);
    GameToolbox_alignItemsHorisontally(v26, 18.0, v44, 0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v62, 172.0, 2.0);
    v46 = v45;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v61, (float)(v59 * 0.5) - 30.0, v60 * 0.5);
    cocos2d::CCPoint::operator+(v47, v63, v46);
    v48 = GJDifficultySprite_create();
    *(_QWORD *)(a1 + 736) = v48;
    (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v48 + 160LL))(v48);
    if ( *(_BYTE *)(a1 + 681) )
    {
      v49 = CCMenuItemSpriteExtra_create(*(_QWORD *)(a1 + 736), 0, a1, (__int64)RateStarsLayer_onFeature);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v49);
      v50 = *(_QWORD *)v49;
      cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v62, v63);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v50 + 184))(v49, v51);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        *(_QWORD *)(a1 + 736),
        11);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 736) + 184LL))(*(_QWORD *)(a1 + 736), v63);
    }
    cocos2d::CCArray::removeAllObjects(v24);
    v52 = (unsigned int)ButtonSprite_create(
                          (int)"Cancel",
                          0,
                          0,
                          1.0,
                          0,
                          (__int64)"goldFont.fnt",
                          (__int64)"GJ_button_01.png",
                          0);
    v62[0] = (__int64)operator new(0x208u);
    v53 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v62[0]);
    if ( v53 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v53, v52, 0, a1, (__int64)sub_55A570) )
      {
        cocos2d::CCObject::autorelease(v53);
        goto LABEL_26;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v53 + 8LL))(v53, 1);
    }
    v53 = 0;
LABEL_26:
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v53);
    cocos2d::CCArray::addObject(v24, v53);
    v54 = (unsigned int)ButtonSprite_create(
                          (int)"Submit",
                          0,
                          0,
                          1.0,
                          0,
                          (__int64)"goldFont.fnt",
                          (__int64)"GJ_button_01.png",
                          0);
    v62[0] = (__int64)operator new(0x208u);
    v55 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v62[0]);
    if ( v55 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v55, v54, 0, a1, (__int64)sub_55A1A0) )
      {
        cocos2d::CCObject::autorelease(v55);
LABEL_31:
        *(_QWORD *)(a1 + 688) = v55;
        (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
          *(_QWORD *)(a1 + 552),
          v55);
        cocos2d::CCArray::addObject(v24, *(struct cocos2d::CCObject **)(a1 + 688));
        v56 = *(_QWORD *)(a1 + 552);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v62, v59 * 0.5, (float)((float)(v60 * 0.5) - 90.0) + 25.0);
        cocos2d::CCNode::convertToNodeSpace(v56, &v61, v57);
        GameToolbox_alignItemsHorisontally((__int64)v24, 15.0, v58, 0);
        sub_559FA0(a1, 0);
        sub_3C310(&Src);
        return 1;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v55 + 8LL))(v55, 1);
    }
    v55 = 0;
    goto LABEL_31;
  }
  return result;
}
