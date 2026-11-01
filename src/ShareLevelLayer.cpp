#include <Geode/binding/ShareLevelLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x62b7a0
// Method: ShareLevelLayer::onShare
// Hidden C++ exception states: #wind=6
bool __fastcall ShareLevelLayer_onShare(__int64 a1, cocos2d::CCObject *a2)
{
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  const char *p_Buf2; // rcx
  struct cocos2d::CCLabelBMFont *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  const struct cocos2d::CCPoint *v20; // rax
  char *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  void (__fastcall ***v26)(_QWORD, _QWORD); // rbx
  _WORD *v27; // rax
  size_t v28; // rbx
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  void **v31; // rcx
  void **v32; // rsi
  size_t v33; // r8
  void **v34; // rdx
  size_t v35; // r8
  float v36; // xmm6_4
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  void **v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // ebx
  const struct cocos2d::CCPoint *v44; // rax
  char *v45; // rbx
  __int64 v46; // rax
  const struct cocos2d::CCPoint *v47; // rax
  char *v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rcx
  cocos2d::CCArray *v57; // rsi
  const char *v58; // rdi
  int v59; // eax
  struct cocos2d::CCObject *v60; // rbx
  int v61; // eax
  struct cocos2d::CCObject *v62; // rbx
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  struct cocos2d::CCSprite *v66; // rax
  cocos2d::CCObject *v67; // r15
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  struct cocos2d::CCSprite *v72; // rax
  cocos2d::CCObject *v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  struct cocos2d::CCSprite *v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rax
  void *v85; // rcx
  void *v86; // rcx
  __int128 *v87; // [rsp+40h] [rbp-C0h] BYREF
  float v88; // [rsp+48h] [rbp-B8h] BYREF
  float v89; // [rsp+4Ch] [rbp-B4h]
  char v90[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v91[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v92; // [rsp+68h] [rbp-98h] BYREF
  __int64 v93; // [rsp+78h] [rbp-88h]
  __int64 v94; // [rsp+80h] [rbp-80h]
  char v95[8]; // [rsp+88h] [rbp-78h] BYREF
  char v96[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v97[16]; // [rsp+98h] [rbp-68h] BYREF
  void *Buf1[2]; // [rsp+A8h] [rbp-58h] BYREF
  size_t v99; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v100; // [rsp+C0h] [rbp-40h]
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v102; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v103; // [rsp+E0h] [rbp-20h]
  __int128 Buf2; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v105; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v106; // [rsp+100h] [rbp+0h]

  LODWORD(v87) = -1778384896; /*0x62b803*/
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v87); /*0x62b80c*/
  if ( !result ) /*0x62b814*/
    return result; /*0x62b814*/
  sub_5ABA0(a1); /*0x62b81d*/
  *(_QWORD *)(a1 + 664) = a2; /*0x62b822*/
  cocos2d::CCObject::retain(a2); /*0x62b82c*/
  LOBYTE(v5) = 1; /*0x62b835*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v5); /*0x62b83a*/
  LOBYTE(v6) = 1; /*0x62b843*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v6); /*0x62b848*/
  v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x62b84e*/
  cocos2d::CCDirector::getWinSize(v8, &v88); /*0x62b85c*/
  v9 = cocos2d::CCLayer::create(); /*0x62b862*/
  *(_QWORD *)(a1 + 584) = v9; /*0x62b868*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v9); /*0x62b87f*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v91, 0.0, 0.0, 80.0, 80.0); /*0x62b8a2*/
  v11 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v10); /*0x62b8b8*/
  v12 = *v11; /*0x62b8bb*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v87, 420.0, 300.0); /*0x62b8d3*/
  (*(void (__fastcall **)(__int64 *, __int64))(v12 + 312))(v11, v13); /*0x62b8df*/
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x62b8ff*/
    *(_QWORD *)(a1 + 584),
    v11,
    0xFFFFFFFFLL);
  v14 = *v11; /*0x62b901*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, v88 * 0.5, v89 * 0.5); /*0x62b928*/
  (*(void (__fastcall **)(__int64 *, __int64))(v14 + 184))(v11, v15); /*0x62b934*/
  sub_3E4F0(&Buf2, *(_QWORD *)(a1 + 664) + 344LL); /*0x62b94c*/
  p_Buf2 = (const char *)&Buf2; /*0x62b952*/
  if ( v106 > 0xF ) /*0x62b95b*/
    p_Buf2 = (const char *)Buf2; /*0x62b95b*/
  v17 = cocos2d::CCLabelBMFont::create(p_Buf2, "goldFont.fnt"); /*0x62b970*/
  sub_3C310(&Buf2); /*0x62b977*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x62b990*/
    *(_QWORD *)(a1 + 584),
    v17);
  v18 = *(_QWORD *)v17; /*0x62b993*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, v88 * 0.5, (float)((float)(v89 * 0.5) + 150.0) - 20.0); /*0x62b9cd*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v18 + 184))(v17, v19); /*0x62b9d9*/
  v87 = &v92; /*0x62b9e4*/
  v92 = 0; /*0x62b9ec*/
  v93 = 0; /*0x62b9f1*/
  v94 = 0; /*0x62b9f6*/
  *(_QWORD *)&v92 = sub_3C460(64); /*0x62ba07*/
  v93 = 53; /*0x62ba0c*/
  v94 = 63; /*0x62ba15*/
  strcpy((char *)v92, "<cy>You cannot change the name once it is shared.</c>"); /*0x62ba24*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v90, 0.5, 1.0); /*0x62ba68*/
  v21 = TextArea_create((__int64)&v92, "chatFont.fnt", 1.0, 400.0, v20, 1101004800, 0, 0); /*0x62baa1*/
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v21); /*0x62bab8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -20.0); /*0x62bacb*/
  v23 = v22; /*0x62bad1*/
  v24 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v17 + 200LL))(v17); /*0x62bae1*/
  cocos2d::CCPoint::operator+(v24, &v87, v23); /*0x62baee*/
  (*(void (__fastcall **)(char *, __int128 **))(*(_QWORD *)v21 + 184LL))(v21, &v87); /*0x62baff*/
  (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 160LL))(v21); /*0x62bb13*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v95, v88 * 0.5, (float)(v89 * 0.5) + 60.0); /*0x62bb3b*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v97, 0.0, 0.0, 80.0, 80.0); /*0x62bb54*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v91, (const struct cocos2d::CCRect *)v97); /*0x62bb63*/
  v26 = (void (__fastcall ***)(_QWORD, _QWORD))cocos2d::extension::CCScale9Sprite::create("square02b_001.png", v25); /*0x62bb79*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v96, 380.0, 50.0); /*0x62bb90*/
  ((void (__fastcall **)(_QWORD, char *))*v26)[39](v26, v96); /*0x62bba7*/
  (*(void (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD, _QWORD), __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x62bbc4*/
    *(_QWORD *)(a1 + 584),
    v26,
    0xFFFFFFFFLL);
  ((void (__fastcall **)(_QWORD, char *))*v26)[23](v26, v95); /*0x62bbd1*/
  LOWORD(v87) = 16514; /*0x62bbe3*/
  BYTE2(v87) = 33; /*0x62bbe8*/
  (*v26[40])(v26 + 40, &v87); /*0x62bbfc*/
  *(_OWORD *)Block = 0; /*0x62bc01*/
  v102 = 0; /*0x62bc05*/
  v103 = 0; /*0x62bc09*/
  v27 = (_WORD *)sub_3C460(32); /*0x62bc12*/
  Block[0] = v27; /*0x62bc17*/
  v102 = 25; /*0x62bc1b*/
  v103 = 31; /*0x62bc23*/
  qmemcpy(v27, "(No description provided", 24); /*0x62bc32*/
  v27[12] = (unsigned __int8)aNoDescriptionP[24]; /*0x62bc49*/
  if ( *((_QWORD *)a2 + 49) ) /*0x62bc50*/
  {
    sub_3E4F0(&Buf2, (char *)a2 + 376); /*0x62bc81*/
    sub_463F60(Buf1, v30); /*0x62bc8d*/
    v29 = v100; /*0x62bc92*/
    v28 = v99; /*0x62bc96*/
  }
  else
  {
    *(_OWORD *)Buf1 = 0; /*0x62bc5d*/
    v28 = 0; /*0x62bc61*/
    v99 = 0; /*0x62bc64*/
    v29 = 15; /*0x62bc68*/
    v100 = 15; /*0x62bc6d*/
    LOBYTE(Buf1[0]) = 0; /*0x62bc71*/
  }
  Buf2 = 0; /*0x62bc9d*/
  v105 = 0; /*0x62bca1*/
  v106 = 15; /*0x62bca5*/
  LOBYTE(Buf2) = 0; /*0x62bcad*/
  v31 = Buf1; /*0x62bcb1*/
  v32 = (void **)Buf1[0]; /*0x62bcb5*/
  if ( v29 > 0xF ) /*0x62bcbd*/
    v31 = (void **)Buf1[0]; /*0x62bcbd*/
  v33 = v28; /*0x62bcc1*/
  if ( v28 ) /*0x62bcc7*/
    v33 = 0; /*0x62bcc7*/
  if ( memcmp(v31, &Buf2, v33) || v28 ) /*0x62bcdb*/
  {
    v34 = Buf1; /*0x62bcdd*/
    if ( v29 > 0xF ) /*0x62bce5*/
      v34 = v32; /*0x62bce5*/
    v35 = -1; /*0x62bce9*/
    do /*0x62bcf3*/
      ++v35; /*0x62bcf0*/
    while ( *((_BYTE *)v34 + v35) ); /*0x62bcf3*/
    sub_3F5A0(Block, v34, v35); /*0x62bcfe*/
  }
  MoreOptionsLayer_onClose(Block); /*0x62bd07*/
  v36 = 1.0; /*0x62bd0c*/
  SetupSmartBlockLayer_onCreateAll(v37); /*0x62bd0f*/
  if ( (int)sub_7EAA0(Block, (unsigned int)dword_8F83A4) >= 180 ) /*0x62bd2a*/
  {
    v39 = 180; /*0x62bd47*/
LABEL_22:
    v36 = (float)((float)((float)(180 - v39) / 180.0) * 0.30000001) + 0.69999999; /*0x62bd49*/
    goto LABEL_23; /*0x62bd62*/
  }
  SetupSmartBlockLayer_onCreateAll(v38); /*0x62bd2c*/
  v39 = sub_7EAA0(Block, (unsigned int)dword_8F83A4); /*0x62bd3b*/
  if ( v39 > 70 ) /*0x62bd43*/
    goto LABEL_22; /*0x62bd43*/
LABEL_23:
  v91[0] = &v92; /*0x62bd6a*/
  v40 = Block; /*0x62bd74*/
  if ( v103 > 0xF ) /*0x62bd7d*/
    v40 = (void **)Block[0]; /*0x62bd7d*/
  v92 = 0; /*0x62bd85*/
  v93 = 0; /*0x62bd8a*/
  v94 = 0; /*0x62bd8f*/
  v41 = -1; /*0x62bd93*/
  do /*0x62bda3*/
    ++v41; /*0x62bda0*/
  while ( *((_BYTE *)v40 + v41) ); /*0x62bda3*/
  sub_3C230(&v92); /*0x62bdaf*/
  SetupSmartBlockLayer_onCreateAll(v42); /*0x62bdb5*/
  v43 = dword_8F83A4; /*0x62bdba*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v90, 0.5, 0.5); /*0x62bdcd*/
  v45 = TextArea_create((__int64)&v92, "chatFont.fnt", 1.0, 368.5 / v36, v44, 1101004800, 1, v43); /*0x62be08*/
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v45); /*0x62be1f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, 1.0); /*0x62be2e*/
  cocos2d::CCPoint::operator+(v95, &v87, v46); /*0x62be40*/
  (*(void (__fastcall **)(char *, __int128 **))(*(_QWORD *)v45 + 184LL))(v45, &v87); /*0x62be51*/
  (*(void (__fastcall **)(char *))(*(_QWORD *)v45 + 160LL))(v45); /*0x62be60*/
  v91[0] = &v92; /*0x62be6b*/
  v92 = 0; /*0x62be73*/
  v93 = 0; /*0x62be78*/
  v94 = 0; /*0x62be7d*/
  *(_QWORD *)&v92 = sub_3C460(112); /*0x62be8e*/
  v93 = 102; /*0x62be93*/
  v94 = 111; /*0x62be9c*/
  strcpy( /*0x62beab*/
    (char *)v92,
    "By sharing a level you give the rights to use the level\n(in any way) to the creators of Geometry Dash.");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v90, 0.5, 1.0); /*0x62bf09*/
  v48 = TextArea_create((__int64)&v92, "chatFont.fnt", 1.0, 380.0, v47, 1101004800, 0, 0); /*0x62bf42*/
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v48); /*0x62bf59*/
  v49 = *(_QWORD *)v48; /*0x62bf5c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, v88 * 0.5, (float)((float)(v89 * 0.5) - 150.0) + 65.0); /*0x62bf87*/
  (*(void (__fastcall **)(char *, __int64))(v49 + 184))(v48, v50); /*0x62bf93*/
  (*(void (__fastcall **)(char *))(*(_QWORD *)v48 + 160LL))(v48); /*0x62bfa7*/
  *(_DWORD *)(a1 + 640) = -1; /*0x62bfad*/
  v55 = cocos2d::CCMenu::create(v52, v51, v53, v54); /*0x62bfb8*/
  *(_QWORD *)(a1 + 552) = v55; /*0x62bfbe*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v55, 10); /*0x62bfdf*/
  FriendRequestPopup_loadFromGJFriendRequest(a1); /*0x62bfe5*/
  v57 = (cocos2d::CCArray *)cocos2d::CCArray::create(v56); /*0x62bff0*/
  v58 = "GJ_button_01.png"; /*0x62bffa*/
  v59 = (unsigned int)ButtonSprite_create( /*0x62c01f*/
                        (int)"Cancel",
                        0,
                        0,
                        1.0,
                        0,
                        (__int64)"goldFont.fnt",
                        (__int64)"GJ_button_01.png",
                        0);
  v60 = CCMenuItemSpriteExtra_create(v59, 0, a1, (__int64)UploadPopup_onClose); /*0x62c038*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x62c04f*/
    *(_QWORD *)(a1 + 552),
    v60);
  cocos2d::CCArray::addObject(v57, v60); /*0x62c058*/
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 664) + 857LL) ) /*0x62c06c*/
    v58 = "GJ_button_04.png"; /*0x62c073*/
  v61 = (unsigned int)ButtonSprite_create((int)"Share Level", 0, 0, 1.0, 0, (__int64)"goldFont.fnt", (__int64)v58, 0); /*0x62c09c*/
  v62 = CCMenuItemSpriteExtra_create(v61, 0, a1, (__int64)sub_62CF40); /*0x62c0b5*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x62c0cc*/
    *(_QWORD *)(a1 + 552),
    v62);
  cocos2d::CCArray::addObject(v57, v62); /*0x62c0d5*/
  v63 = *(_QWORD *)(a1 + 552); /*0x62c0db*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, v88 * 0.5, (float)((float)(v89 * 0.5) - 150.0) + 25.0); /*0x62c10a*/
  cocos2d::CCNode::convertToNodeSpace(v63, v90, v64); /*0x62c11b*/
  GameToolbox_alignItemsHorisontally((__int64)v57, 15.0, v65, 0); /*0x62c132*/
  v66 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsBtn02_001.png"); /*0x62c13e*/
  LODWORD(v63) = (_DWORD)v66; /*0x62c144*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v66 + 160LL))(v66); /*0x62c15c*/
  v67 = CCMenuItemSpriteExtra_create(v63, 0, a1, (__int64)sub_62CDC0); /*0x62c172*/
  *((_DWORD *)v67 + 93) = 0x40000000; /*0x62c175*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v67); /*0x62c193*/
  v68 = *(_QWORD *)v67; /*0x62c196*/
  v69 = *(_QWORD *)(a1 + 552); /*0x62c199*/
  cocos2d::CCPoint::CCPoint( /*0x62c1d8*/
    (cocos2d::CCPoint *)v91,
    (float)((float)(v88 * 0.5) + 210.0) - 26.0,
    (float)((float)(v89 * 0.5) + 150.0) - 26.0);
  cocos2d::CCNode::convertToNodeSpace(v69, v90, v70); /*0x62c1e9*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v68 + 184))(v67, v71); /*0x62c1f5*/
  v72 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_reportBtn_001.png"); /*0x62c202*/
  LODWORD(v69) = (_DWORD)v72; /*0x62c208*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v72 + 160LL))(v72); /*0x62c220*/
  v73 = CCMenuItemSpriteExtra_create(v69, 0, a1, (__int64)sub_62C490); /*0x62c236*/
  *((_DWORD *)v73 + 93) = 1067030938; /*0x62c239*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v73); /*0x62c257*/
  v74 = *(_QWORD *)v73; /*0x62c25a*/
  v75 = *(_QWORD *)(a1 + 552); /*0x62c25d*/
  cocos2d::CCPoint::CCPoint( /*0x62c294*/
    (cocos2d::CCPoint *)v91,
    (float)((float)(v88 * 0.5) - 210.0) + 26.0,
    (float)((float)(v89 * 0.5) + 150.0) - 26.0);
  cocos2d::CCNode::convertToNodeSpace(v75, v90, v76); /*0x62c2a5*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v74 + 184))(v73, v77); /*0x62c2b1*/
  v78 = qword_905FD0; /*0x62c2b7*/
  if ( !qword_905FD0 ) /*0x62c2c1*/
  {
    v87 = (__int128 *)operator new(0x6E8u); /*0x62c2cd*/
    qword_905FD0 = sub_2723A0(v87); /*0x62c2db*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x62c2ec*/
    v78 = qword_905FD0; /*0x62c2ee*/
  }
  if ( !GameManager_getGameVariable(v78, "0029") ) /*0x62c2fc*/
  {
    v79 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsTxt_001.png"); /*0x62c316*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x62c32d*/
      *(_QWORD *)(a1 + 584),
      v79);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, -55.0, 0.0); /*0x62c341*/
    v81 = v80; /*0x62c347*/
    v82 = *(_QWORD *)(a1 + 552); /*0x62c34a*/
    v83 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v67 + 200LL))(v67); /*0x62c357*/
    cocos2d::CCNode::convertToWorldSpace(v82, v90, v83); /*0x62c368*/
    cocos2d::CCPoint::operator+(v84, &v87, v81); /*0x62c379*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int128 **))(*(_QWORD *)v79 + 184LL))(v79, &v87); /*0x62c38a*/
  }
  if ( v100 > 0xF ) /*0x62c399*/
  {
    v85 = Buf1[0]; /*0x62c39e*/
    if ( v100 + 1 >= 0x1000 ) /*0x62c3ac*/
    {
      v85 = (void *)*((_QWORD *)Buf1[0] - 1); /*0x62c3b2*/
      if ( (unsigned __int64)((char *)Buf1[0] - (char *)v85 - 8) > 0x1F ) /*0x62c3c1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x62c3d2*/
    }
    j_j_free(v85); /*0x62c3d9*/
  }
  v99 = 0; /*0x62c3de*/
  v100 = 15; /*0x62c3e2*/
  LOBYTE(Buf1[0]) = 0; /*0x62c3ea*/
  if ( v103 > 0xF ) /*0x62c3f6*/
  {
    v86 = Block[0]; /*0x62c3fb*/
    if ( v103 + 1 >= 0x1000 ) /*0x62c409*/
    {
      v86 = (void *)*((_QWORD *)Block[0] - 1); /*0x62c40f*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v86 - 8) > 0x1F ) /*0x62c41e*/
        invoke_watson(0, 0, 0, 0, 0); /*0x62c42f*/
    }
    j_j_free(v86); /*0x62c436*/
  }
  return 1; /*0x62c43d*/
}

// [2/2] Address: 0x62cc10
// Method: ShareLevelLayer::selectRating
__int64 __fastcall ShareLevelLayer_selectRating(__int64 a1, __int64 a2)
{
  int *v2; // r14
  int v4; // esi
  unsigned int v5; // r15d
  struct cocos2d::CCObject *v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  const char *v9; // rdx
  int v10; // eax
  cocos2d::CCString *v11; // rax
  const char *CString; // rsi
  __int64 *v13; // rdi
  __int64 v14; // rbx
  cocos2d::CCSpriteFrameCache *v15; // rax
  struct cocos2d::CCSpriteFrame *v16; // rax

  v2 = (int *)(a1 + 672); /*0x62cc21*/
  if ( a2 ) /*0x62cc33*/
    *v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x62cc3e*/
  v4 = 0; /*0x62cc48*/
  v5 = 0; /*0x62cc4a*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)) ) /*0x62cc4d*/
  {
    do /*0x62ccca*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), v5); /*0x62cc80*/
      v7 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v6 + 952LL))(v6); /*0x62cc95*/
      v8 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v6 + 56LL))(v6); /*0x62cc9f*/
      v9 = "GJ_button_04.png"; /*0x62cca4*/
      if ( *v2 == v8 ) /*0x62ccae*/
        v9 = "GJ_button_01.png"; /*0x62ccae*/
      sub_41FC0(v7, v9); /*0x62ccb2*/
      ++v5; /*0x62ccbe*/
    }
    while ( v5 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)) ); /*0x62ccca*/
    v2 = (int *)(a1 + 672); /*0x62ccd1*/
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 664) + 1116LL) = *v2; /*0x62cce7*/
  v10 = *v2; /*0x62cced*/
  if ( *v2 <= 1 ) /*0x62ccf8*/
  {
    if ( v10 == 1 ) /*0x62cda1*/
    {
      CString = "difficulty_auto_btn_001.png"; /*0x62cda7*/
      goto LABEL_12; /*0x62cdae*/
    }
  }
  else if ( v10 == 2 ) /*0x62cd01*/
  {
    v4 = 1; /*0x62cd03*/
  }
  else if ( v10 == 3 ) /*0x62cd5e*/
  {
    v4 = 2; /*0x62cd60*/
  }
  else if ( v10 > 5 ) /*0x62cd6a*/
  {
    if ( v10 > 7 ) /*0x62cd76*/
    {
      if ( v10 > 9 ) /*0x62cd82*/
      {
        if ( v10 == 10 ) /*0x62cd91*/
          v4 = 6; /*0x62cd97*/
      }
      else
      {
        v4 = 5; /*0x62cd84*/
      }
    }
    else
    {
      v4 = 4; /*0x62cd78*/
    }
  }
  else
  {
    v4 = 3; /*0x62cd6c*/
  }
  v11 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn_001.png", v4); /*0x62cd11*/
  CString = cocos2d::CCString::getCString(v11); /*0x62cd20*/
LABEL_12:
  v13 = *(__int64 **)(a1 + 688); /*0x62cd23*/
  v14 = *v13; /*0x62cd2a*/
  v15 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x62cd2d*/
  v16 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v15, CString); /*0x62cd39*/
  return (*(__int64 (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v14 + 1008))(v13, v16); /*0x62cd4c*/
}
