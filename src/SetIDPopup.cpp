#include <Geode/binding/SetIDPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/6] Address: 0x395e40
// Method: SetIDPopup::SetIDPopup
__int64 __fastcall SetIDPopup_SetIDPopup(__int64 a1)
{
  FLAlertLayer_FLAlertLayer(a1); /*0x395e49*/
  *(_QWORD *)(a1 + 684) = 1000; /*0x395e55*/
  *(_QWORD *)a1 = &SetIDPopup::`vftable'; /*0x395e60*/
  *(_QWORD *)(a1 + 320) = &SetIDPopup::`vftable'; /*0x395e6a*/
  *(_QWORD *)(a1 + 328) = &SetIDPopup::`vftable'; /*0x395e78*/
  *(_QWORD *)(a1 + 336) = &SetIDPopup::`vftable'; /*0x395e86*/
  *(_QWORD *)(a1 + 344) = &SetIDPopup::`vftable'; /*0x395e94*/
  *(_QWORD *)(a1 + 352) = &SetIDPopup::`vftable'; /*0x395ea2*/
  *(_QWORD *)(a1 + 408) = &SetIDPopup::`vftable'; /*0x395eb0*/
  *(_QWORD *)(a1 + 432) = &SetIDPopup::`vftable'; /*0x395ebe*/
  *(_QWORD *)(a1 + 544) = &SetIDPopup::`vftable'; /*0x395ecc*/
  *(_QWORD *)(a1 + 664) = 0; /*0x395ed5*/
  *(_DWORD *)(a1 + 672) = 0; /*0x395edc*/
  *(_WORD *)(a1 + 676) = 0; /*0x395ee2*/
  *(_DWORD *)(a1 + 680) = 0; /*0x395ee9*/
  *(_QWORD *)(a1 + 696) = 0; /*0x395eef*/
  return a1; /*0x395ef9*/
}

// [3/6] Address: 0x3a1920
// Method: SetIDPopup::create
// Hidden C++ exception states: #wind=4
cocos2d::CCObject *__fastcall SetIDPopup_create(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        int a8,
        char a9)
{
  cocos2d::CCObject *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  void *v17; // [rsp+60h] [rbp-A8h]
  _BYTE v18[32]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v19[32]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-58h]
  __int64 v21; // [rsp+B8h] [rbp-50h]

  v20 = a4; /*0x3a1952*/
  v21 = a5; /*0x3a195e*/
  v17 = operator new(0x2C0u); /*0x3a196c*/
  v13 = (cocos2d::CCObject *)SetIDPopup_SetIDPopup((__int64)v17); /*0x3a1979*/
  if ( v13 ) /*0x3a197f*/
  {
    v14 = sub_3E4F0(v18, a5); /*0x3a199c*/
    v15 = sub_3E4F0(v19, a4); /*0x3a19aa*/
    if ( (unsigned __int8)sub_3A1A60((_DWORD)v13, a1, a2, a3, v15, v14, a6, a7, a8, a9, 0) ) /*0x3a19fd*/
    {
      cocos2d::CCObject::autorelease(v13); /*0x3a1a09*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1); /*0x3a1a19*/
      v13 = 0; /*0x3a1a1c*/
    }
  }
  sub_3C310(a4); /*0x3a1a21*/
  sub_3C310(a5); /*0x3a1a2a*/
  return v13; /*0x3a1a32*/
}

// [4/6] Address: 0x3a24b0
// Method: SetIDPopup::textChanged
void __fastcall SetIDPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  const char *v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rax
  char *String[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v15; // [rsp+48h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 132) ) /*0x3a24c9*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x3a24ea*/
    *(_OWORD *)String = 0; /*0x3a24f3*/
    v4 = -1; /*0x3a24f8*/
    v15 = 0; /*0x3a24ff*/
    do /*0x3a2508*/
      ++v4; /*0x3a2505*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x3a2508*/
    sub_3C230(String); /*0x3a2517*/
    v5 = (const char *)String; /*0x3a2522*/
    if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x3a2527*/
      v5 = String[0]; /*0x3a2527*/
    v6 = atoi(v5); /*0x3a252d*/
    v7 = *((_QWORD *)&v15 + 1); /*0x3a2533*/
    *(_DWORD *)(a1 + 128) = v6; /*0x3a2538*/
    if ( v7 > 0xF ) /*0x3a2542*/
    {
      v8 = String[0]; /*0x3a2544*/
      if ( v7 + 1 >= 0x1000 ) /*0x3a2556*/
      {
        v8 = (char *)*((_QWORD *)String[0] - 1); /*0x3a2558*/
        if ( (unsigned __int64)(String[0] - v8 - 8) > 0x1F ) /*0x3a256b*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3a2580*/
      }
      j_j_free(v8); /*0x3a2587*/
    }
    v9 = *(_DWORD *)(a1 + 128); /*0x3a258c*/
    v10 = *(_DWORD *)(a1 + 140); /*0x3a2592*/
    v11 = v10; /*0x3a2599*/
    v12 = *(_DWORD *)(a1 + 136); /*0x3a259c*/
    if ( v10 >= v9 ) /*0x3a25a5*/
      v11 = *(_DWORD *)(a1 + 128); /*0x3a25a5*/
    if ( v12 <= v11 ) /*0x3a25aa*/
    {
      v12 = *(_DWORD *)(a1 + 128); /*0x3a25af*/
      if ( v10 < v9 ) /*0x3a25b1*/
        v12 = *(_DWORD *)(a1 + 140); /*0x3a25b1*/
    }
    v13 = *(_QWORD *)(a1 - 544); /*0x3a25b5*/
    *(_DWORD *)(a1 + 128) = v12; /*0x3a25bc*/
    (*(void (__fastcall **)(__int64))(v13 + 1080))(a1 - 544); /*0x3a25c9*/
  }
}

// [5/6] Address: 0x3a26a0
// Method: SetIDPopup::show
__int64 __fastcall SetIDPopup_show(__int64 a1)
{
  cocos2d::CCScene *v2; // rbx
  int v3; // eax

  v2 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x3a26b3*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x3a26ba*/
  {
    v2 = *(cocos2d::CCScene **)(a1 + 568); /*0x3a26c6*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v2) + 1 >= 105 ) /*0x3a26d9*/
      v3 = cocos2d::CCScene::getHighestChildZ(v2) + 1; /*0x3a26eb*/
    else
      v3 = 105; /*0x3a26db*/
    *(_DWORD *)(a1 + 592) = v3; /*0x3a26ed*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0x3a26f3*/
    *(_DWORD *)(a1 + 592) = 105; /*0x3a26ff*/
  return (*(__int64 (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1);
}

// [6/6] Address: 0x3a2880
// Method: SetIDPopup::keyBackClicked
__int64 __fastcall SetIDPopup_keyBackClicked(__int64 a1)
{
  return sub_3A27E0(a1 - 336, 0);
}

// Address: 0xc0130
// Method: SetIDPopup::init
// Hidden C++ exception states: #wind=6
char __fastcall SetIDPopup_init(__int64 a1, cocos2d::CCObject *a2, char a3, int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  float v9; // xmm8_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  __int64 v12; // rcx
  __int64 v13; // rbx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  void *v19; // rcx
  bool v20; // bl
  __int64 v21; // rax
  __int128 v22; // xmm6
  __int128 v23; // xmm11
  void *v24; // rcx
  void **v25; // rcx
  struct cocos2d::CCLabelBMFont *v26; // rdi
  __int64 v27; // rdx
  void (__fastcall *v28)(char *, __int64); // r8
  __int64 v29; // rbx
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rax
  int v32; // ebx
  cocos2d::CCObject *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  cocos2d::CCObject *v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  void **v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // ebx
  const struct cocos2d::CCPoint *v48; // rax
  char *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  cocos2d::CCObject *v52; // rbx
  cocos2d::CCObject *v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  void *v58; // rcx
  void *v60; // [rsp+50h] [rbp-B0h] BYREF
  __int128 *v61; // [rsp+58h] [rbp-A8h] BYREF
  float v62; // [rsp+60h] [rbp-A0h] BYREF
  float v63; // [rsp+64h] [rbp-9Ch]
  __int128 v64; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+78h] [rbp-88h]
  __int64 v66; // [rsp+80h] [rbp-80h]
  void *v67[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v68; // [rsp+98h] [rbp-68h]
  void *Src[4]; // [rsp+A8h] [rbp-58h] BYREF
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-28h]

  if ( !a2 || !(unsigned __int8)sub_6060E0(a1, 0, 0, a4, 1126825984, 1, 0) )
    return 0;
  *(_QWORD *)(a1 + 1000) = a2;
  cocos2d::CCObject::retain(a2);
  v8 = cocos2d::CCDirector::sharedDirector(v7);
  cocos2d::CCDirector::getWinSize(v8, &v62);
  v9 = v62 * 0.5;
  v10 = v63 * 0.5;
  v11 = (float)(v63 * 0.5) + 85.0;
  sub_3E4F0(Block, *(_QWORD *)(a1 + 1000) + 352LL);
  if ( !(_QWORD)v71 )
  {
    v12 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v60 = operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v60);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v12 = *(_QWORD *)&qword_905FB0;
    }
    v13 = sub_21A830(v12, Src, *(unsigned int *)(*(_QWORD *)(a1 + 1000) + 404LL));
    if ( Block != (void **)v13 )
    {
      if ( *((_QWORD *)&v71 + 1) > 0xFu )
      {
        v14 = Block[0];
        if ( (unsigned __int64)(*((_QWORD *)&v71 + 1) + 1LL) >= 0x1000 )
        {
          v14 = (void *)*((_QWORD *)Block[0] - 1);
          if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v14);
      }
      *(_QWORD *)&v71 = 0;
      *((_QWORD *)&v71 + 1) = 15;
      LOBYTE(Block[0]) = 0;
      *(_OWORD *)Block = *(_OWORD *)v13;
      v71 = *(_OWORD *)(v13 + 16);
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 15;
      *(_BYTE *)v13 = 0;
    }
    sub_3C310(Src);
    if ( !(_QWORD)v71 )
      sub_3F5A0(Block, "Comment", 7u);
  }
  sub_3E4F0(Src, Block);
  v16 = sub_606E80(a1, v15);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 240LL))(v16);
  *(_OWORD *)v67 = 0;
  *(_QWORD *)&v68 = 0;
  *((_QWORD *)&v68 + 1) = 15;
  LOBYTE(v67[0]) = 0;
  v17 = *(_QWORD *)(a1 + 1000);
  if ( *(int *)(v17 + 468) > 0 )
  {
    v18 = sub_73350(Src, *(int *)(v17 + 468));
    if ( v67 != (void **)v18 )
    {
      if ( *((_QWORD *)&v68 + 1) > 0xFu )
      {
        v19 = v67[0];
        if ( (unsigned __int64)(*((_QWORD *)&v68 + 1) + 1LL) >= 0x1000 )
        {
          v19 = (void *)*((_QWORD *)v67[0] - 1);
          if ( (unsigned __int64)((char *)v67[0] - (char *)v19 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v19);
      }
      *(_QWORD *)&v68 = 0;
      *((_QWORD *)&v68 + 1) = 15;
      LOBYTE(v67[0]) = 0;
      *(_OWORD *)v67 = *(_OWORD *)v18;
      v68 = *(_OWORD *)(v18 + 16);
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 15;
      *(_BYTE *)v18 = 0;
    }
LABEL_30:
    sub_3C310(Src);
    goto LABEL_31;
  }
  sub_3E4F0(Src, v17 + 408);
  v20 = Src[2] != 0;
  sub_3C310(Src);
  if ( v20 )
  {
    sub_3E4F0(Src, *(_QWORD *)(a1 + 1000) + 408LL);
    v21 = sub_43D80(Src, " ago", 4u);
    v22 = *(_OWORD *)v21;
    v23 = *(_OWORD *)(v21 + 16);
    *(_QWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 15;
    *(_BYTE *)v21 = 0;
    if ( *((_QWORD *)&v68 + 1) > 0xFu )
    {
      v24 = v67[0];
      if ( (unsigned __int64)(*((_QWORD *)&v68 + 1) + 1LL) >= 0x1000 )
      {
        v24 = (void *)*((_QWORD *)v67[0] - 1);
        if ( (unsigned __int64)((char *)v67[0] - (char *)v24 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v24);
    }
    *(_OWORD *)v67 = v22;
    v68 = v23;
    goto LABEL_30;
  }
LABEL_31:
  if ( (_QWORD)v68 )
  {
    v25 = v67;
    if ( *((_QWORD *)&v68 + 1) > 0xFu )
      v25 = (void **)v67[0];
    v26 = cocos2d::CCLabelBMFont::create((const char *)v25, "chatFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v26 + 160LL))(v26);
    (**((void (__fastcall ***)(__int64, void *))v26 + 46))((__int64)v26 + 368, &unk_6FDDD0);
    v27 = *((_QWORD *)v26 + 46);
    v28 = *(void (__fastcall **)(char *, __int64))(v27 + 40);
    LOBYTE(v27) = -106;
    v28((char *)v26 + 368, v27);
    v29 = *(_QWORD *)v26;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, v9, v11 - 36.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v29 + 184))(v26, v30);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v26,
      1);
  }
  v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
  v32 = (int)v31;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 160LL))(v31);
  v33 = CCMenuItemSpriteExtra_create(v32, 0, a1, (__int64)sub_9C4B8);
  *((_DWORD *)v33 + 93) = 1069547520;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v33);
  v34 = *(_QWORD *)v33;
  v35 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, (float)(v9 - 150.0) + 8.0, v11 - 12.0);
  cocos2d::CCNode::convertToNodeSpace(v35, &v61, v36);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v34 + 184))(v33, v37);
  v38 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("threadBtn_copy_001.png");
  v39 = CCMenuItemSpriteExtra_create(v38, 0, a1, (__int64)sub_C0A40);
  *((_DWORD *)v39 + 93) = 1068708659;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v39);
  v40 = *(_QWORD *)v39;
  v41 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v61, (float)(v9 + 150.0) - 18.0, v11 - 19.0);
  cocos2d::CCNode::convertToNodeSpace(v41, &v60, v42);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v40 + 184))(v39, v43);
  sub_3E4F0(Src, *(_QWORD *)(a1 + 1000) + 320LL);
  MoreOptionsLayer_onClose(Src);
  v61 = &v64;
  v44 = Src;
  if ( Src[3] > (char *)&loc_D + 2 )
    v44 = (void **)Src[0];
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v45 = -1;
  do
    ++v45;
  while ( *((_BYTE *)v44 + v45) );
  sub_3C230(&v64);
  SetupSmartBlockLayer_onCreateAll(v46);
  v47 = dword_8F83A4;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, 0.5, 0.5);
  v49 = TextArea_create((__int64)&v64, "chatFont.fnt", 1.0, 343.75, v48, 1101004800, 1, v47);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v49 + 160LL))(v49);
  v50 = *(_QWORD *)v49;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v61, v9, v10 + 6.0);
  (*(void (__fastcall **)(char *, __int64))(v50 + 184))(v49, v51);
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v49, 1);
  if ( a3 )
  {
    v61 = (__int128 *)operator new(0x2C8u);
    v52 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v61);
    if ( v52 )
    {
      if ( ButtonSprite_init(
             (__int64)v52,
             (__int64)&dword_71ECEC,
             100,
             0,
             1060320051,
             1,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_06.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v52);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v52 + 8LL))(v52, 1);
        LODWORD(v52) = 0;
      }
    }
    v53 = CCMenuItemSpriteExtra_create((int)v52, 0, a1, (__int64)sub_C0A00);
    *((_DWORD *)v53 + 93) = 1066192077;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v53);
    v54 = *(_QWORD *)v53;
    v55 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v61, v9, (float)(v10 - 85.0) + 24.0);
    cocos2d::CCNode::convertToNodeSpace(v55, &v60, v56);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v54 + 184))(v53, v57);
  }
  sub_3C310(Src);
  if ( *((_QWORD *)&v68 + 1) > 0xFu )
  {
    v58 = v67[0];
    if ( (unsigned __int64)(*((_QWORD *)&v68 + 1) + 1LL) >= 0x1000 )
    {
      v58 = (void *)*((_QWORD *)v67[0] - 1);
      if ( (unsigned __int64)((char *)v67[0] - (char *)v58 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v58);
  }
  *(_QWORD *)&v68 = 0;
  *((_QWORD *)&v68 + 1) = 15;
  LOBYTE(v67[0]) = 0;
  sub_3C310(Block);
  return 1;
}
