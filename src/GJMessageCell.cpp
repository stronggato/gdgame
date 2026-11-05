#include <Geode/binding/GJMessageCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x15a550
// Method: GJMessageCell::init
__int64 __fastcall GJMessageCell_init(_QWORD *a1)
{
  a1[73] = 0; /*0x15a552*/
  a1[74] = 0; /*0x15a559*/
  a1[75] = 0; /*0x15a560*/
  return 1; /*0x15a569*/
}

// [3/7] Address: 0x15af40
// Method: GJMessageCell::markAsRead
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall GJMessageCell_markAsRead(__int64 a1)
{
  struct cocos2d::CCObject *result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // ecx
  void *v7; // [rsp+30h] [rbp+8h]

  result = *(struct cocos2d::CCObject **)(a1 + 584); /*0x15af46*/
  if ( !*((_BYTE *)result + 464) ) /*0x15af4d*/
  {
    *((_BYTE *)result + 464) = 1; /*0x15af5a*/
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 472LL))(*(_QWORD *)(a1 + 544), 100); /*0x15af70*/
    if ( v2 ) /*0x15af79*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 336LL))(v2, 0); /*0x15af8a*/
    v3 = GJAccountManager_sharedState(); /*0x15af8d*/
    v4 = *(_DWORD *)(v3 + 360) - *(_DWORD *)(v3 + 364); /*0x15af98*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x15af9e*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x15afa8*/
    {
      v7 = operator new(0x690u); /*0x15afb4*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x15afc2*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x15afd3*/
      v5 = *(_QWORD *)&qword_905FB0; /*0x15afd5*/
    }
    result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v5 + 1232), v4); /*0x15afe6*/
    if ( result ) /*0x15afef*/
    {
      v6 = *((_DWORD *)result + 191) - 1; /*0x15aff9*/
      if ( v6 < 0 ) /*0x15affc*/
        v6 = 0; /*0x15affc*/
      *((_DWORD *)result + 191) = v6; /*0x15afff*/
    }
  }
  return result; /*0x15b005*/
}

// [4/7] Address: 0x15b230
// Method: GJMessageCell::FLAlert_Clicked
// Hidden C++ exception states: #wind=2
void __fastcall GJMessageCell_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]
  void *v13; // [rsp+68h] [rbp+20h]
  void *v14; // [rsp+68h] [rbp+20h]

  if ( a3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 && *(_QWORD *)(a1 + 24) ) /*0x15b262*/
  {
    GJMessageCell_markAsRead(a1 - 560); /*0x15b277*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x15b27c*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x15b286*/
    {
      v13 = operator new(0x690u); /*0x15b292*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x15b2a0*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x15b2b1*/
      v4 = *(_QWORD *)&qword_905FB0; /*0x15b2b3*/
    }
    if ( (unsigned __int8)sub_2386C0(v4, *(_QWORD *)(a1 + 24), 0, *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 465LL)) ) /*0x15b2c9*/
    {
      v5 = a1 + 16; /*0x15b2d6*/
      if ( a1 == 560 ) /*0x15b2df*/
        v5 = 0; /*0x15b2df*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x15b2e3*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x15b2ed*/
      {
        v14 = operator new(0x690u); /*0x15b2f9*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x15b307*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x15b318*/
        v6 = *(_QWORD *)&qword_905FB0; /*0x15b31a*/
      }
      *(_QWORD *)(v6 + 1488) = v5; /*0x15b321*/
      v7 = *(_QWORD *)(a1 + 32); /*0x15b328*/
      if ( v7 ) /*0x15b32f*/
        *(_QWORD *)(v7 + 664) = 0; /*0x15b331*/
      v10 = 0; /*0x15b33b*/
      *(_QWORD *)&v10 = sub_3C460(32); /*0x15b354*/
      v11 = 19; /*0x15b359*/
      v12 = 31; /*0x15b362*/
      strcpy((char *)v10, "Deleting message..."); /*0x15b372*/
      v8 = a1 + 8; /*0x15b38e*/
      if ( a1 == 560 ) /*0x15b395*/
        v8 = 0; /*0x15b395*/
      v9 = sub_39D2A0(v8, &v10); /*0x15b39e*/
      *(_QWORD *)(a1 + 32) = v9; /*0x15b3a3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL))(v9); /*0x15b3b4*/
    }
  }
}

// [5/7] Address: 0x15b3d0
// Method: GJMessageCell::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall GJMessageCell_uploadActionFinished(__int64 a1, int a2, int a3)
{
  _BYTE *v5; // rbx
  unsigned __int64 v6; // r8
  void **v7; // rdx
  __int64 v8; // r8
  void *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  void *Block[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]
  unsigned __int64 v15; // [rsp+70h] [rbp-18h]

  if ( a2 == *(_DWORD *)(*(_QWORD *)(a1 + 8) + 320LL) && *(_QWORD *)(a1 + 16) ) /*0x15b407*/
  {
    *(_OWORD *)Block = 0; /*0x15b415*/
    v5 = (_BYTE *)sub_3C460(32); /*0x15b424*/
    Block[0] = v5; /*0x15b427*/
    v14 = 23; /*0x15b42c*/
    v6 = 31; /*0x15b435*/
    v15 = 31; /*0x15b43b*/
    strcpy(v5, "Unknown action finished"); /*0x15b447*/
    if ( a3 == 45 ) /*0x15b46f*/
    {
      v14 = 16; /*0x15b471*/
      memmove(v5, "Message removed!", 0x10u); /*0x15b48a*/
      v5[16] = 0; /*0x15b48f*/
      v6 = v15; /*0x15b493*/
      v5 = Block[0]; /*0x15b498*/
    }
    v7 = Block; /*0x15b49d*/
    if ( v6 > 0xF ) /*0x15b4a6*/
      v7 = (void **)v5; /*0x15b4a6*/
    v10 = 0; /*0x15b4ad*/
    v11 = 0; /*0x15b4b4*/
    v12 = 0; /*0x15b4b9*/
    v8 = -1; /*0x15b4be*/
    do /*0x15b4c8*/
      ++v8; /*0x15b4c5*/
    while ( *((_BYTE *)v7 + v8) ); /*0x15b4c8*/
    sub_3C230(&v10); /*0x15b4d3*/
    UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 16), &v10); /*0x15b4e1*/
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 664LL) = 0; /*0x15b4ea*/
    *(_QWORD *)(a1 + 16) = 0; /*0x15b4f1*/
    if ( v15 > 0xF ) /*0x15b4fe*/
    {
      v9 = Block[0]; /*0x15b503*/
      if ( v15 + 1 >= 0x1000 ) /*0x15b512*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x15b518*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x15b527*/
          invoke_watson(0, 0, 0, 0, 0); /*0x15b538*/
      }
      j_j_free(v9); /*0x15b53f*/
    }
  }
}

// [6/7] Address: 0x15b570
// Method: GJMessageCell::uploadActionFailed
__int64 __fastcall GJMessageCell_uploadActionFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  result = *(_QWORD *)(a1 + 8); /*0x15b576*/
  if ( a2 == *(_DWORD *)(result + 320) ) /*0x15b583*/
  {
    if ( *(_QWORD *)(a1 + 16) ) /*0x15b589*/
    {
      v4 = 0; /*0x15b5ad*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x15b5be*/
      v5 = 31; /*0x15b5c6*/
      v6 = 31; /*0x15b5cf*/
      strcpy((char *)v4, "Failed. Please try again later."); /*0x15b5d8*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 16), &v4); /*0x15b613*/
      result = *(_QWORD *)(a1 + 16); /*0x15b618*/
      *(_QWORD *)(result + 664) = 0; /*0x15b61c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x15b623*/
    }
  }
  return result; /*0x15b62c*/
}

// [7/7] Address: 0x15b640
// Method: GJMessageCell::onClosePopup
__int64 __fastcall GJMessageCell_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x15b658*/
  LOBYTE(v4) = 1; /*0x15b661*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x15b666*/
  *(_QWORD *)(a1 + 24) = 0; /*0x15b671*/
  return result; /*0x15b66c*/
}

// Address: 0x15a570
// Method: GJMessageCell::loadFromMessage
// Hidden C++ exception states: #wind=5
double __fastcall GJMessageCell_loadFromMessage(__int64 a1, cocos2d::CCObject *a2)
{
  cocos2d::CCObject *v2; // rbx
  cocos2d::CCObject *v4; // rcx
  const char *v5; // rcx
  cocos2d::CCLabelBMFont *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  cocos2d::CCObject *v11; // rdi
  cocos2d::CCObject *v12; // rax
  struct cocos2d::CCMenu *v13; // r12
  __int64 v14; // rbx
  float v15; // xmm6_4
  float *v16; // rax
  __int64 v17; // rax
  cocos2d::CCObject *v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  cocos2d::CCObject *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  const char *v27; // rdx
  __int64 v28; // r8
  const char *v29; // r8
  const char *v30; // rdx
  cocos2d::CCString *v31; // rax
  const char *CString; // rbx
  cocos2d::CCLabelBMFont *v33; // rdi
  float v34; // xmm6_4
  double v35; // xmm0_8
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  cocos2d::CCObject *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  const char *v42; // rdx
  cocos2d::CCString *v43; // rax
  const char *v44; // rax
  struct cocos2d::CCLabelBMFont *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbx
  float *v50; // rax
  __int64 v51; // rax
  struct cocos2d::CCSprite *v52; // rdi
  struct cocos2d::CCSprite *v53; // rbx
  cocos2d::CCMenuItem *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  struct cocos2d::CCLabelBMFont *v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rax
  float v64; // xmm6_4
  double v65; // xmm0_8
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  double result; // xmm0_8
  void *v70; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v71[8]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v72[8]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v73[3]; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int64 v74; // [rsp+80h] [rbp-49h]
  __int128 v75; // [rsp+88h] [rbp-41h] BYREF
  __int64 v76; // [rsp+98h] [rbp-31h]
  unsigned __int64 v77; // [rsp+A0h] [rbp-29h]
  _QWORD v78[4]; // [rsp+A8h] [rbp-21h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2);
  if ( v2 )
  {
    v4 = *(cocos2d::CCObject **)(a1 + 584);
    if ( v4 )
      cocos2d::CCObject::release(v4);
    *(_QWORD *)(a1 + 584) = v2;
    cocos2d::CCObject::retain(v2);
    sub_3E4F0(v78, *(_QWORD *)(a1 + 584) + 336LL);
    v5 = (const char *)v78;
    if ( v78[3] > 0xFu )
      v5 = (const char *)v78[0];
    v6 = cocos2d::CCLabelBMFont::create(v5, (const char *)&qword_6FFF68);
    sub_3C310(v78);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v6);
    v7 = *(_QWORD *)v6;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v70, 0.0, 0.5);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v7 + 288))(v6, v8);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 160LL))(v6);
    v9 = *(_QWORD *)v6;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v70, 38.0, (float)(*(float *)(a1 + 532) * 0.5) + 14.0);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v9 + 184))(v6, v10);
    cocos2d::CCLabelBMFont::limitLabelWidth(v6, 180.0, 0.5, 0.0);
    v70 = operator new(0x2C8u);
    v11 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v70);
    if ( v11 )
    {
      if ( ButtonSprite_init(
             (__int64)v11,
             (__int64)"View",
             50,
             0,
             1058642330,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_01.png",
             1103626240) )
      {
        cocos2d::CCObject::autorelease(v11);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1);
        v11 = 0;
      }
    }
    v12 = CCMenuItemSpriteExtra_create((int)v11, 0, a1, (__int64)sub_15AE90);
    *((_DWORD *)v12 + 93) = 1066192077;
    v13 = cocos2d::CCMenu::create(v12, 0);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v13);
    v14 = *(_QWORD *)v13;
    v15 = *(float *)(a1 + 532) * 0.5;
    v16 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v11 + 320LL))(v11);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v70, (float)(*(float *)(a1 + 528) - (float)(*v16 * 0.5)) - 45.0, v15);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v14 + 184))(v13, v17);
    v70 = operator new(0x2C8u);
    v18 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v70);
    if ( v18 )
    {
      if ( ButtonSprite_init(
             (__int64)v18,
             (__int64)"X",
             50,
             0,
             1058642330,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_06.png",
             1106903040) )
      {
        cocos2d::CCObject::autorelease(v18);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v18 + 8LL))(v18, 1);
        v18 = 0;
      }
    }
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v18 + 160LL))(v18);
    v19 = *((_QWORD *)v18 + 79);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 1.5, -0.5);
    v21 = v20;
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 200LL))(v19);
    cocos2d::CCPoint::operator+(v22, &v70, v21);
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v19 + 184LL))(v19, &v70);
    v23 = CCMenuItemSpriteExtra_create((int)v18, 0, a1, (__int64)sub_15B050);
    *((_DWORD *)v23 + 93) = 1066192077;
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v13 + 464LL))(v13, v23);
    v24 = *(_QWORD *)v23;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, *(float *)(a1 + 528) - 22.0, *(float *)(a1 + 532) * 0.5);
    cocos2d::CCNode::convertToNodeSpace(v13, &v70, v25);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v24 + 184))(v23, v26);
    v27 = "From:";
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 584) + 465LL) )
      v27 = "To:";
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v28 = -1;
    do
      ++v28;
    while ( v27[v28] );
    sub_3C230(&v75);
    sub_3E4F0(v73, *(_QWORD *)(a1 + 584) + 400LL);
    v29 = (const char *)v73;
    if ( v74 > 0xF )
      v29 = (const char *)v73[0];
    v30 = (const char *)&v75;
    if ( v77 > 0xF )
      v30 = (const char *)v75;
    v31 = cocos2d::CCString::createWithFormat("%s %s", v30, v29);
    CString = cocos2d::CCString::getCString(v31);
    sub_3C310(v73);
    v33 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt");
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v33 + 160LL))(v33);
    cocos2d::CCLabelBMFont::limitLabelWidth(v33, 140.0, 0.5, 0.0);
    v34 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v33 + 320LL))(v33) * 0.5;
    v35 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v33 + 168LL))(v33);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, (float)(*(float *)&v35 * v34) + 1.0, -15.0);
    v37 = v36;
    v38 = (*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 200LL))(v6);
    cocos2d::CCPoint::operator+(v38, v72, v37);
    v39 = CCMenuItemSpriteExtra_create((int)v33, 0, a1, (__int64)sub_15B010);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v13 + 464LL))(v13, v39);
    v40 = *(_QWORD *)v39;
    cocos2d::CCNode::convertToNodeSpace(v13, v71, v72);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v40 + 184))(v39, v41);
    sub_3E4F0(v73, *(_QWORD *)(a1 + 584) + 432LL);
    LOBYTE(v40) = v73[2] != 0;
    sub_3C310(v73);
    if ( (_BYTE)v40 )
    {
      sub_3E4F0(v73, *(_QWORD *)(a1 + 584) + 432LL);
      v42 = (const char *)v73;
      if ( v74 > 0xF )
        v42 = (const char *)v73[0];
      v43 = cocos2d::CCString::createWithFormat("%s ago", v42);
      v44 = cocos2d::CCString::getCString(v43);
      v45 = cocos2d::CCLabelBMFont::create(v44, "chatFont.fnt");
      sub_3C310(v73);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
        *(_QWORD *)(a1 + 544),
        v45,
        1);
      v46 = *(_QWORD *)v45;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 0.0, 0.5);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v46 + 288))(v45, v47);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v45 + 160LL))(v45);
      (**((void (__fastcall ***)(__int64, __int16 *))v45 + 46))((__int64)v45 + 368, &word_6FDF60);
      LOBYTE(v48) = 125;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v45 + 46) + 40LL))((__int64)v45 + 368, v48);
      v49 = *(_QWORD *)v45;
      v50 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 200LL))(v6);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, *v50 + 3.0, 10.0);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v49 + 184))(v45, v51);
    }
    v52 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png");
    v53 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v52 + 160LL))(v52);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v53 + 160LL))(v53);
    v54 = CCMenuItemToggler_create((__int64)v53, (__int64)v52, a1, (__int64)sub_15B1F0);
    *(_QWORD *)(a1 + 600) = v54;
    CCMenuItemToggler_toggle((__int64)v54, *(unsigned __int8 *)(*(_QWORD *)(a1 + 584) + 466LL));
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, _QWORD))(*(_QWORD *)v13 + 464LL))(v13, *(_QWORD *)(a1 + 600));
    v55 = **(_QWORD **)(a1 + 600);
    v56 = *(_QWORD *)(a1 + 600);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 20.0, *(float *)(a1 + 532) * 0.5);
    cocos2d::CCNode::convertToNodeSpace(v13, &v70, v57);
    (*(void (__fastcall **)(__int64, __int64))(v55 + 184))(v56, v58);
    v59 = *(_QWORD *)(a1 + 600);
    *(_DWORD *)(*(_QWORD *)(v59 + 376) + 372LL) = 1067030938;
    *(_DWORD *)(*(_QWORD *)(v59 + 384) + 372LL) = 1067030938;
    CCMenuItemToggler_toggle(v59, *(unsigned __int8 *)(v59 + 392));
    v60 = *(_QWORD *)(a1 + 584);
    if ( !*(_BYTE *)(v60 + 464) && !*(_BYTE *)(v60 + 465) )
    {
      v61 = cocos2d::CCLabelBMFont::create("!", (const char *)&qword_6FFF68);
      (**((void (__fastcall ***)(__int64, void *))v61 + 46))((__int64)v61 + 368, &unk_6FDF64);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v61 + 160LL))(v61);
      v62 = *(_QWORD *)v61;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 0.0, 0.5);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v62 + 288))(v61, v63);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
        *(_QWORD *)(a1 + 544),
        v61,
        10);
      v64 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 320LL))(v6);
      v65 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 168LL))(v6);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, (float)(*(float *)&v65 * v64) + 5.0, 0.0);
      v67 = v66;
      v68 = (*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 200LL))(v6);
      cocos2d::CCPoint::operator+(v68, &v70, v67);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v61 + 184LL))(v61, &v70);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v61 + 64LL))(v61, 100);
    }
    return sub_3C310(&v75);
  }
  return result;
}
