#include <Geode/binding/FriendRequestPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x3959c0
// Method: FriendRequestPopup::~FriendRequestPopup
// Hidden C++ exception states: #wind=1
char *__fastcall FriendRequestPopup__dtor_FriendRequestPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &FriendRequestPopup::`vftable'; /*0x3959db*/
  *((_QWORD *)Block + 40) = &FriendRequestPopup::`vftable'; /*0x3959e5*/
  *((_QWORD *)Block + 41) = &FriendRequestPopup::`vftable'; /*0x3959f3*/
  *((_QWORD *)Block + 42) = &FriendRequestPopup::`vftable'; /*0x395a01*/
  *((_QWORD *)Block + 43) = &FriendRequestPopup::`vftable'; /*0x395a0f*/
  *((_QWORD *)Block + 44) = &FriendRequestPopup::`vftable'; /*0x395a1d*/
  *((_QWORD *)Block + 51) = &FriendRequestPopup::`vftable'; /*0x395a2b*/
  *((_QWORD *)Block + 54) = &FriendRequestPopup::`vftable'; /*0x395a39*/
  *((_QWORD *)Block + 68) = &FriendRequestPopup::`vftable'; /*0x395a47*/
  v4 = Block + 664; /*0x395a4e*/
  *((_QWORD *)Block + 83) = &FriendRequestPopup::`vftable'; /*0x395a5c*/
  *((_QWORD *)Block + 84) = &FriendRequestPopup::`vftable'; /*0x395a66*/
  *((_QWORD *)Block + 85) = &FriendRequestPopup::`vftable'; /*0x395a74*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x395a7b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x395a85*/
  {
    v6 = operator new(0x690u); /*0x395a8c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x395a99*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x395aaa*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x395aac*/
  }
  if ( *(char **)(v5 + 1488) == v4 ) /*0x395aba*/
    *(_QWORD *)(v5 + 1488) = 0; /*0x395abc*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x395ac7*/
  if ( v7 ) /*0x395ad1*/
    cocos2d::CCObject::release(v7); /*0x395ad3*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x395adc*/
  if ( (a2 & 1) != 0 ) /*0x395ae6*/
    j_j_free(Block); /*0x395af0*/
  return Block; /*0x395af8*/
}

// [2/7] Address: 0x39f440
// Method: FriendRequestPopup::keyBackClicked
__int64 __fastcall FriendRequestPopup_keyBackClicked(__int64 a1)
{
  return sub_39EDE0(a1 - 336, 0);
}

// [3/7] Address: 0x39f450
// Method: FriendRequestPopup::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall FriendRequestPopup_uploadActionFinished(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // r8
  void *v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h]
  unsigned __int64 v13; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 32); /*0x39f471*/
  if ( !v4 || *(_DWORD *)(v4 + 320) != a2 && *(_DWORD *)(v4 + 324) != a2 ) /*0x39f48c*/
    return; /*0x39f48c*/
  *(_BYTE *)(a1 + 24) = 1; /*0x39f492*/
  if ( !*(_QWORD *)(a1 + 56) ) /*0x39f496*/
    return; /*0x39f49b*/
  v12 = 14; /*0x39f4a8*/
  v13 = 15; /*0x39f4b5*/
  strcpy((char *)Block, "Unknown action"); /*0x39f4c1*/
  HIBYTE(Block[1]) = 0; /*0x39f4cc*/
  switch ( a3 ) /*0x39f4e2*/
  {
    case '$': /*0x39f4e2*/
      v12 = 15; /*0x39f4e4*/
      v5 = 0x2074736575716552LL; /*0x39f4e8*/
      Block[1] = (void *)0x6465766F6D6572LL; /*0x39f4f6*/
LABEL_12:
      Block[0] = (void *)v5; /*0x39f561*/
      break; /*0x39f561*/
    case '%': /*0x39f4e2*/
      v5 = 0x6120646E65697246LL; /*0x39f51a*/
      LODWORD(Block[1]) = 1684366436; /*0x39f528*/
LABEL_11:
      WORD2(Block[1]) = 33; /*0x39f552*/
      v12 = 13; /*0x39f559*/
      goto LABEL_12; /*0x39f559*/
    case '(': /*0x39f4e2*/
      v5 = 0x6F6C622072657355LL; /*0x39f53a*/
      LODWORD(Block[1]) = 1684368227; /*0x39f548*/
      goto LABEL_11; /*0x39f548*/
  }
  v8 = 0; /*0x39f566*/
  v9 = 0; /*0x39f571*/
  v10 = 0; /*0x39f579*/
  v6 = -1; /*0x39f581*/
  do /*0x39f593*/
    ++v6; /*0x39f590*/
  while ( *((_BYTE *)Block + v6) ); /*0x39f593*/
  sub_3C230(&v8); /*0x39f59e*/
  UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 56), &v8); /*0x39f5ab*/
  if ( v13 > 0xF ) /*0x39f5b9*/
  {
    v7 = Block[0]; /*0x39f5be*/
    if ( v13 + 1 >= 0x1000 ) /*0x39f5cc*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x39f5d2*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x39f5e1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x39f5f6*/
    }
    j_j_free(v7); /*0x39f5fd*/
  }
}

// [4/7] Address: 0x39f620
// Method: FriendRequestPopup::uploadActionFailed
__int64 __fastcall FriendRequestPopup_uploadActionFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  result = *(_QWORD *)(a1 + 32); /*0x39f626*/
  if ( result && (*(_DWORD *)(result + 320) == a2 || *(_DWORD *)(result + 324) == a2) ) /*0x39f644*/
  {
    if ( *(_QWORD *)(a1 + 56) ) /*0x39f64a*/
    {
      v4 = 0; /*0x39f66f*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x39f680*/
      v5 = 31; /*0x39f688*/
      v6 = 31; /*0x39f691*/
      strcpy((char *)v4, "Failed. Please try again later."); /*0x39f69a*/
      result = sub_39D9F0(*(_QWORD *)(a1 + 56), &v4); /*0x39f6d5*/
      if ( (_BYTE)result ) /*0x39f6dc*/
        *(_QWORD *)(a1 + 56) = 0; /*0x39f6de*/
    }
  }
  return result; /*0x39f6e6*/
}

// [5/7] Address: 0x39f6f0
// Method: FriendRequestPopup::onClosePopup
__int64 __fastcall FriendRequestPopup_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // zf

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x39f708*/
  LOBYTE(v4) = 1; /*0x39f711*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x39f716*/
  if ( a2 == *(_QWORD *)(a1 + 48) ) /*0x39f727*/
  {
    v6 = *(_BYTE *)(a1 + 16) == 0; /*0x39f729*/
    *(_QWORD *)(a1 + 48) = 0; /*0x39f72d*/
    if ( !v6 ) /*0x39f735*/
      return sub_39EDE0(a1 - 672, 0); /*0x39f739*/
  }
  return result; /*0x39f73e*/
}

// [6/7] Address: 0x39f750
// Method: FriendRequestPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
void __fastcall FriendRequestPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  void *v10; // [rsp+68h] [rbp+20h]

  if ( a3 ) /*0x39f753*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x39f775*/
    {
      v5 = *(_QWORD *)&qword_905FB0; /*0x39f77b*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x39f785*/
      {
        v10 = operator new(0x690u); /*0x39f791*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x39f79f*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x39f7b0*/
        v5 = *(_QWORD *)&qword_905FB0; /*0x39f7b2*/
      }
      if ( (unsigned __int8)sub_253000(v5, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 324LL)) ) /*0x39f7c3*/
      {
        v7 = 0; /*0x39f7d3*/
        *(_QWORD *)&v7 = sub_3C460(32); /*0x39f7ee*/
        v8 = 16; /*0x39f7f3*/
        v9 = 31; /*0x39f7fc*/
        strcpy((char *)v7, "Blocking user..."); /*0x39f80c*/
        v6 = sub_39D2A0(a1 - 8, &v7); /*0x39f81c*/
        *(_QWORD *)(a1 + 40) = v6; /*0x39f821*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 1064LL))(v6); /*0x39f83c*/
      }
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x39f84b*/
    {
      sub_39F070(a1 - 680, 0); /*0x39f856*/
    }
  }
}

// Address: 0x62c5f0
// Method: FriendRequestPopup::loadFromGJFriendRequest
// Hidden C++ exception states: #wind=2
double __fastcall FriendRequestPopup_loadFromGJFriendRequest(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  cocos2d::CCObject *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned int i; // edi
  __int64 v10; // r14
  cocos2d::CCString *v11; // rax
  const char *CString; // r15
  cocos2d::CCObject *v13; // rbx
  struct cocos2d::CCObject *v14; // rbx
  cocos2d::CCArray *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  const char *v21; // rdx
  __int64 v22; // r8
  const char *v23; // rcx
  struct cocos2d::CCLabelBMFont *v24; // rbx
  __int64 v25; // rax
  struct cocos2d::CCSprite *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  float v29; // xmm6_4
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  _OWORD *v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  void *v38; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v39[4]; // [rsp+58h] [rbp-A8h] BYREF
  float v40; // [rsp+5Ch] [rbp-A4h]
  _BYTE v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  float v42[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v43[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v44[8]; // [rsp+78h] [rbp-88h] BYREF
  char v45; // [rsp+80h] [rbp-80h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v48; // [rsp+D8h] [rbp-28h]

  v2 = cocos2d::CCDirector::sharedDirector(a1);
  cocos2d::CCDirector::getWinSize(v2, v42);
  v4 = (cocos2d::CCObject *)cocos2d::CCArray::create(v3);
  *(_QWORD *)(a1 + 680) = v4;
  cocos2d::CCObject::retain(v4);
  v6 = cocos2d::CCArray::create(v5);
  v8 = cocos2d::CCArray::create(v7);
  for ( i = 1; (int)i <= 10; ++i )
  {
    v10 = *(_QWORD *)(a1 + 552);
    v11 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, i);
    CString = cocos2d::CCString::getCString(v11);
    v38 = operator new(0x2C8u);
    v13 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v38);
    if ( v13 )
    {
      if ( ButtonSprite_init(
             (__int64)v13,
             (__int64)CString,
             20,
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
    v14 = CCMenuItemSpriteExtra_create((int)v13, 0, a1, (__int64)ShareLevelLayer_selectRating);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v14 + 160LL))(v14);
    *((_DWORD *)v14 + 101) = 1061997773;
    if ( v10 )
      (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)v10 + 464LL))(v10, v14);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 680), v14);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v14 + 64LL))(v14, i);
    v15 = (cocos2d::CCArray *)v6;
    if ( i > 5 )
      v15 = (cocos2d::CCArray *)v8;
    cocos2d::CCArray::addObject(v15, v14);
  }
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v39,
    v42[0] * 0.5,
    (float)((float)((float)(v42[1] * 0.5) - 50.0) + 35.0) + 2.0);
  v16 = *(_QWORD *)(a1 + 552);
  cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 584), &v38, v39);
  cocos2d::CCNode::convertToNodeSpace(v16, v43, v17);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v38, (const struct cocos2d::CCPoint *)v43);
  GameToolbox_alignItemsHorisontally(v6, 17.0, v18, 0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v41, 0.0, -35.0);
  cocos2d::CCPoint::operator+(v43, &v38, v19);
  GameToolbox_alignItemsHorisontally(v8, 17.0, (__int64)&v38, 0);
  v20 = *(_QWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 672) = *(_DWORD *)(v20 + 1116);
  v21 = "Request Stars";
  if ( *(_DWORD *)(v20 + 972) == 5 )
    v21 = "Request Moons";
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v22 = -1;
  do
    ++v22;
  while ( v21[v22] );
  sub_3C230(&v46);
  v23 = (const char *)&v46;
  if ( v48 > 0xF )
    v23 = (const char *)v46;
  v24 = cocos2d::CCLabelBMFont::create(v23, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v24 + 160LL))(v24);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v24,
    2);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v41, 0.0, 30.0);
  cocos2d::CCPoint::operator+(v39, &v38, v25);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v24 + 184LL))(v24, &v38);
  v26 = cocos2d::CCSprite::createWithSpriteFrameName("difficulty_00_btn_001.png");
  *(_QWORD *)(a1 + 688) = v26;
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v26,
    3);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v41, 155.0, -18.0);
  cocos2d::CCPoint::operator+(v39, &v38, v27);
  (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 688) + 184LL))(*(_QWORD *)(a1 + 688), &v38);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v41, -170.0, -8.0);
  cocos2d::CCPoint::operator+(v39, &v38, v28);
  v29 = v40 + 30.0;
  v30 = *(_QWORD *)(a1 + 552);
  v31 = *(_QWORD *)(a1 + 584);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v44, (const struct cocos2d::CCPoint *)&v38);
  v33 = (_OWORD *)sub_6CAA0(
                    (unsigned int)&v45,
                    v31,
                    v30,
                    a1,
                    (__int64)sub_62CBD0,
                    (__int64)sub_62CBF0,
                    v32,
                    1109393408,
                    LODWORD(v29));
  v34 = v33[1];
  v35 = v33[2];
  v36 = v33[3];
  *(_OWORD *)(a1 + 696) = *v33;
  *(_OWORD *)(a1 + 712) = v34;
  *(_OWORD *)(a1 + 728) = v35;
  *(_OWORD *)(a1 + 744) = v36;
  sub_62CAF0(a1);
  ShareLevelLayer_selectRating(a1, 0);
  return sub_3C310(&v46);
}
