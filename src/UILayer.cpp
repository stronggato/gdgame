#include <Geode/binding/UILayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/15] Address: 0xeff50
// Method: UILayer::togglePlatformerMode
void __fastcall UILayer_togglePlatformerMode(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // bl
  char v5; // cl
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int16 v11; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+32h] [rbp+Ah]
  __int16 v13; // [rsp+38h] [rbp+10h]

  *(_BYTE *)(a1 + 744) = a2; /*0xeff5d*/
  v3 = *(_QWORD *)(a1 + 752); /*0xeff63*/
  v4 = a2; /*0xeff6a*/
  if ( v3 ) /*0xeff70*/
  {
    LOBYTE(a2) = a2 ^ 1; /*0xeff79*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 936LL))(v3, a2); /*0xeff7c*/
    if ( v4 ) /*0xeff84*/
    {
      v13 = 32125; /*0xeff86*/
      v5 = 125; /*0xeff8d*/
    }
    else
    {
      v13 = -1; /*0xeff91*/
      v5 = -1; /*0xeff98*/
    }
    v12 = v5; /*0xeff9f*/
    v6 = *(_QWORD *)(a1 + 752); /*0xeffa3*/
    v11 = v13; /*0xeffaa*/
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 952LL))(v6); /*0xeffb8*/
    v8 = v7[79]; /*0xeffbb*/
    if ( v8 ) /*0xeffc5*/
      (**(void (__fastcall ***)(__int64, __int16 *))(v8 + 368))(v8 + 368, &v11); /*0xeffd9*/
    v9 = v7[80]; /*0xeffdc*/
    if ( v9 ) /*0xeffe6*/
      (**(void (__fastcall ***)(__int64, __int16 *))(v9 + 320))(v9 + 320, &v11); /*0xefff7*/
    v10 = v7[82]; /*0xefff9*/
    if ( v10 || (v10 = v7[81]) != 0 ) /*0xf000f*/
      (**(void (__fastcall ***)(__int64, __int16 *))(v10 + 320))(v10 + 320, &v11); /*0xf0020*/
  }
}

// [2/15] Address: 0xffae0
// Method: UILayer::processUINodeTouch
// Hidden C++ exception states: #wind=3
bool __fastcall UILayer_processUINodeTouch(__int64 a1, int a2, const char *a3, const char *a4)
{
  bool result; // al
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  cocos2d::CCLabelBMFont *v17; // rax
  cocos2d::CCLabelBMFont *v18; // rax
  __int64 v19; // rax
  struct cocos2d::CCSprite *v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // r8
  _OWORD *v23; // rcx
  const char *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h]
  __int64 v31; // [rsp+48h] [rbp-38h]
  float v32[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v33[8]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v34[4]; // [rsp+60h] [rbp-20h] BYREF

  LODWORD(v29) = -1778384896; /*0xffb14*/
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v29); /*0xffb1b*/
  if ( result ) /*0xffb23*/
  {
    *(_DWORD *)(a1 + 672) = a2; /*0xffb29*/
    LOBYTE(v9) = -106; /*0xffb39*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, v9); /*0xffb3b*/
    sub_5ABA0(a1); /*0xffb41*/
    *(_BYTE *)(a1 + 596) = 1; /*0xffb46*/
    LOBYTE(v10) = 1; /*0xffb50*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v10); /*0xffb55*/
    LOBYTE(v11) = 1; /*0xffb5e*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v11); /*0xffb63*/
    v13 = cocos2d::CCDirector::sharedDirector(v12); /*0xffb69*/
    cocos2d::CCDirector::getWinSize(v13, v32); /*0xffb76*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v33, v32[0] * 0.5, v32[1] * 0.5); /*0xffb9a*/
    v14 = cocos2d::CCLayer::create(); /*0xffba0*/
    *(_QWORD *)(a1 + 584) = v14; /*0xffba6*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v14); /*0xffbbd*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v29, 0.0, 0.0, 80.0, 80.0); /*0xffbd8*/
    v16 = cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v15); /*0xffbee*/
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 184LL))(v16, v33); /*0xffc02*/
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0xffc1f*/
      *(_QWORD *)(a1 + 584),
      v16,
      4294967294LL);
    *(_QWORD *)(a1 + 688) = v16; /*0xffc22*/
    if ( *((_QWORD *)a3 + 3) > 0xFu ) /*0xffc2e*/
      a3 = *(const char **)a3; /*0xffc30*/
    v17 = cocos2d::CCLabelBMFont::create(a3, (const char *)&qword_6FFF68); /*0xffc3d*/
    *(_QWORD *)(a1 + 696) = v17; /*0xffc43*/
    cocos2d::CCLabelBMFont::limitLabelWidth(v17, 310.0, 0.69999999, 0.0); /*0xffc60*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))( /*0xffc77*/
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 696));
    if ( *((_QWORD *)a4 + 3) > 0xFu ) /*0xffc82*/
      a4 = *(const char **)a4; /*0xffc84*/
    v18 = cocos2d::CCLabelBMFont::create(a4, "goldFont.fnt"); /*0xffc91*/
    *(_QWORD *)(a1 + 704) = v18; /*0xffc97*/
    cocos2d::CCLabelBMFont::limitLabelWidth(v18, 310.0, 0.60000002, 0.30000001); /*0xffcb9*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))( /*0xffcd0*/
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 704));
    v19 = cocos2d::CCMenu::create(); /*0xffcd6*/
    *(_QWORD *)(a1 + 552) = v19; /*0xffcdc*/
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v19, 10); /*0xffcfd*/
    (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 552) + 184LL))(*(_QWORD *)(a1 + 552), &unk_9041A8); /*0xffd11*/
    *(_DWORD *)(a1 + 640) = -1; /*0xffd17*/
    v20 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0xffd2e*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v20 + 160LL))(v20); /*0xffd46*/
    v21 = CCMenuItemSpriteExtra_create(v20, 0, a1, UploadPopup_onClose); /*0xffd5c*/
    *(_DWORD *)(v21 + 372) = 1069547520; /*0xffd5f*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v21); /*0xffd7d*/
    *(_QWORD *)(a1 + 712) = v21; /*0xffd80*/
    v29 = 0; /*0xffd92*/
    v30 = 0; /*0xffd98*/
    v31 = 0; /*0xffd9c*/
    v22 = sub_3C460(272); /*0xffdaa*/
    *(_QWORD *)&v29 = v22; /*0xffdad*/
    v30 = 257; /*0xffdb1*/
    v31 = 271; /*0xffdb9*/
    v23 = (_OWORD *)v22; /*0xffdc1*/
    v24 = "<cl>Blue arrow</c> = Levels uploaded with this song.\n" /*0xffdc4*/
          "<cy>Star</c> = Rated levels using this song.\n"
          "<cg>Green arrow</c> = Total downloads for rated levels.\n"
          "<cy>Rated levels are grouped by difficulty and rating.</c>\n"
          "<cl>Only a level's main song is counted.</c>";
    v25 = 2; /*0xffdcb*/
    do /*0xffe20*/
    {
      *v23 = *(_OWORD *)v24; /*0xffdd3*/
      v23[1] = *((_OWORD *)v24 + 1); /*0xffdda*/
      v23[2] = *((_OWORD *)v24 + 2); /*0xffde2*/
      v23[3] = *((_OWORD *)v24 + 3); /*0xffdea*/
      v23[4] = *((_OWORD *)v24 + 4); /*0xffdf2*/
      v23[5] = *((_OWORD *)v24 + 5); /*0xffdfa*/
      v23[6] = *((_OWORD *)v24 + 6); /*0xffe02*/
      v23 += 8; /*0xffe06*/
      *(v23 - 1) = *((_OWORD *)v24 + 7); /*0xffe11*/
      v24 += 128; /*0xffe15*/
      --v25; /*0xffe1c*/
    }
    while ( v25 ); /*0xffe20*/
    *(_BYTE *)v23 = *v24; /*0xffe25*/
    *(_BYTE *)(v22 + 257) = 0; /*0xffe27*/
    v34[1] = 25959; /*0xffe31*/
    v34[2] = 10; /*0xffe35*/
    v34[3] = 15; /*0xffe3d*/
    v34[0] = 0x61735520676E6F53LL; /*0xffe4d*/
    v26 = InfoAlertButton_create(v34, &v29); /*0xffe75*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v26); /*0xffe8c*/
    *(_QWORD *)(a1 + 720) = v26; /*0xffe8f*/
    BrowseSmartTemplateLayer_baseSetup(a1); /*0xffea1*/
    v27 = LoadingCircle_create(); /*0xffea6*/
    *(_QWORD *)(a1 + 680) = v27; /*0xffeab*/
    *(_QWORD *)(v27 + 552) = *(_QWORD *)(a1 + 584); /*0xffeb9*/
    *(_BYTE *)(*(_QWORD *)(a1 + 680) + 560LL) = 0; /*0xffec7*/
    cocos2d::CCObject::retain(*(cocos2d::CCObject **)(a1 + 680)); /*0xffed5*/
    LoadingCircle_show(*(_QWORD *)(a1 + 680)); /*0xffee2*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 680) + 544LL) + 184LL))( /*0xffeff*/
      *(_QWORD *)(*(_QWORD *)(a1 + 680) + 544LL),
      a1 + 732);
    v28 = *(_QWORD *)&qword_905FB0; /*0xfff0c*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xfff16*/
    {
      *(_QWORD *)&v29 = operator new(0x690u); /*0xfff22*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v29); /*0xfff2f*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xfff40*/
      v28 = *(_QWORD *)&qword_905FB0; /*0xfff42*/
    }
    *(_QWORD *)(v28 + 1600) = a1 + 664; /*0xfff49*/
    sub_250720(v28, *(unsigned int *)(a1 + 672)); /*0xfff56*/
    return 1; /*0xfff5b*/
  }
  return result; /*0xfff5d*/
}

// [3/15] Address: 0x66b170
// Method: UILayer::init
// Hidden C++ exception states: #wind=11
bool __fastcall UILayer_init(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rcx
  cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int i; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  struct cocos2d::CCObject *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct cocos2d::CCSprite *v19; // rdi
  __int64 v20; // rdx
  void (__fastcall *v21)(char *, __int64); // r8
  cocos2d::CCObject *v22; // rbx
  struct cocos2d::CCMenu *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  cocos2d::CCDirector *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  cocos2d::CCDirector *v29; // rax
  __int64 v30; // rbx
  cocos2d::CCDirector *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  cocos2d::CCObject *v34; // rax
  struct cocos2d::CCObject *v35; // rbp
  cocos2d::CCObject *v36; // r14
  struct cocos2d::CCObject *v37; // r15
  cocos2d::CCObject *v38; // rdi
  __int64 v39; // rcx
  cocos2d::CCArray *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct cocos2d::CCObject *v47; // rdi
  __int64 v48; // rbx
  float v49; // xmm6_4
  float *v50; // rax
  __int64 v51; // rax
  struct cocos2d::CCObject *v52; // rax
  struct cocos2d::CCObject *v53; // rdi
  __int64 v54; // rbx
  float v55; // xmm6_4
  float *v56; // rax
  __int64 v57; // rax
  struct cocos2d::CCObject *v58; // rdi
  __int64 v59; // rbx
  float v60; // xmm6_4
  float *v61; // rax
  __int64 v62; // rax
  _BYTE v63[16]; // [rsp+30h] [rbp-68h] BYREF
  void *v64; // [rsp+B0h] [rbp+18h] BYREF
  void *v65; // [rsp+B8h] [rbp+20h]

  LODWORD(v64) = 0; /*0x66b1a9*/
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v64); /*0x66b1b1*/
  if ( !result ) /*0x66b1b9*/
    return result; /*0x66b1b9*/
  v5 = qword_905FD0; /*0x66b1bf*/
  if ( !qword_905FD0 ) /*0x66b1c9*/
  {
    v65 = operator new(0x6E8u); /*0x66b1d5*/
    qword_905FD0 = sub_2723A0(v65); /*0x66b1e6*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66b1f7*/
    v5 = qword_905FD0; /*0x66b1f9*/
  }
  *(_BYTE *)(a1 + 608) = GameManager_getGameVariable(v5, "0024"); /*0x66b20c*/
  *(_QWORD *)(a1 + 600) = a2; /*0x66b212*/
  v7 = (cocos2d::CCObject *)cocos2d::CCArray::create(v6); /*0x66b219*/
  *(_QWORD *)(a1 + 616) = v7; /*0x66b21f*/
  cocos2d::CCObject::retain(v7); /*0x66b229*/
  v9 = qword_905FD0; /*0x66b22f*/
  if ( !qword_905FD0 ) /*0x66b239*/
  {
    v64 = operator new(0x6E8u); /*0x66b245*/
    qword_905FD0 = sub_2723A0(v64); /*0x66b256*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66b267*/
    v9 = qword_905FD0; /*0x66b269*/
  }
  sub_27EFB0(v9, v8); /*0x66b270*/
  for ( i = 0; i < 4; ++i ) /*0x66b275*/
  {
    v11 = qword_905FD0; /*0x66b280*/
    if ( (unsigned int)i >= 2 ) /*0x66b28a*/
    {
      if ( !qword_905FD0 ) /*0x66b2d2*/
      {
        v65 = operator new(0x6E8u); /*0x66b2de*/
        qword_905FD0 = sub_2723A0(v65); /*0x66b2ef*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66b300*/
        v11 = qword_905FD0; /*0x66b302*/
      }
      v12 = v11 + 1428; /*0x66b309*/
    }
    else
    {
      if ( !qword_905FD0 ) /*0x66b28f*/
      {
        v64 = operator new(0x6E8u); /*0x66b29b*/
        qword_905FD0 = sub_2723A0(v64); /*0x66b2ac*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66b2bd*/
        v11 = qword_905FD0; /*0x66b2bf*/
      }
      v12 = v11 + 1308; /*0x66b2c6*/
    }
    v13 = (struct cocos2d::CCObject *)sub_66ED20(v12); /*0x66b315*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v13, 100); /*0x66b32e*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v13 + 336LL))(v13, 0); /*0x66b340*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 616), v13); /*0x66b34d*/
    if ( ((i - 1) & 0xFFFFFFFD) == 0 ) /*0x66b35b*/
      *((_BYTE *)v13 + 385) = 1; /*0x66b35d*/
  }
  LOBYTE(v14) = 1; /*0x66b372*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v14); /*0x66b377*/
  LOBYTE(v15) = 1; /*0x66b380*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v15); /*0x66b385*/
  LOBYTE(v16) = 1; /*0x66b38e*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v16); /*0x66b393*/
  v18 = cocos2d::CCDirector::sharedDirector(v17); /*0x66b399*/
  cocos2d::CCDirector::getWinSize(v18, v63); /*0x66b3a7*/
  v19 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_pauseBtn_clean_001.png"); /*0x66b3ba*/
  v20 = *((_QWORD *)v19 + 40); /*0x66b3c4*/
  v21 = *(void (__fastcall **)(char *, __int64))(v20 + 40); /*0x66b3c7*/
  LOBYTE(v20) = 75; /*0x66b3cb*/
  v21((char *)v19 + 320, v20); /*0x66b3cd*/
  v64 = operator new(0x208u); /*0x66b3da*/
  v22 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v64); /*0x66b3ea*/
  if ( v22 ) /*0x66b3f0*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v22, (_DWORD)v19, 0, a1, (__int64)UILayer_onPause) ) /*0x66b40a*/
    {
      cocos2d::CCObject::autorelease(v22); /*0x66b416*/
      goto LABEL_22; /*0x66b41c*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v22 + 8LL))(v22, 1); /*0x66b426*/
  }
  v22 = 0; /*0x66b429*/
LABEL_22:
  *(_QWORD *)(a1 + 568) = v22; /*0x66b42b*/
  *((_DWORD *)v22 + 103) = 0; /*0x66b432*/
  *(_DWORD *)(*(_QWORD *)(a1 + 568) + 372LL) = 1082130432; /*0x66b443*/
  v23 = cocos2d::CCMenu::create(*(struct cocos2d::CCMenuItem **)(a1 + 568), 0); /*0x66b45c*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v23, 16); /*0x66b475*/
  v24 = qword_905FD0; /*0x66b478*/
  if ( !qword_905FD0 ) /*0x66b482*/
  {
    v64 = operator new(0x6E8u); /*0x66b48e*/
    qword_905FD0 = sub_2723A0(v64); /*0x66b49f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66b4b0*/
    v24 = qword_905FD0; /*0x66b4b2*/
  }
  if ( !GameManager_getGameVariable(v24, "0024") ) /*0x66b4c0*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 568) + 336LL))(*(_QWORD *)(a1 + 568), 0); /*0x66b4d5*/
  v26 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v25); /*0x66b4db*/
  cocos2d::CCDirector::getScreenRight(v26); /*0x66b4e4*/
  v27 = qword_905FD0; /*0x66b4f9*/
  if ( !qword_905FD0 ) /*0x66b503*/
  {
    v64 = operator new(0x6E8u); /*0x66b50f*/
    qword_905FD0 = sub_2723A0(v64); /*0x66b520*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66b531*/
    v27 = qword_905FD0; /*0x66b533*/
  }
  if ( GameManager_getGameVariable(v27, "0015") ) /*0x66b541*/
  {
    v29 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v28); /*0x66b54a*/
    cocos2d::CCDirector::getScreenLeft(v29); /*0x66b553*/
  }
  v30 = *(_QWORD *)v23; /*0x66b560*/
  v31 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v28); /*0x66b563*/
  cocos2d::CCDirector::getScreenTop(v31); /*0x66b56c*/
  (*(void (__fastcall **)(struct cocos2d::CCMenu *))(v30 + 176))(v23); /*0x66b57f*/
  v32 = cocos2d::CCMenu::create(); /*0x66b585*/
  *(_QWORD *)(a1 + 560) = v32; /*0x66b58b*/
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v32, 16); /*0x66b5a8*/
  v34 = (cocos2d::CCObject *)cocos2d::CCArray::create(v33); /*0x66b5ab*/
  *(_QWORD *)(a1 + 632) = v34; /*0x66b5b1*/
  cocos2d::CCObject::retain(v34); /*0x66b5bb*/
  v35 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkpointBtn_001.png"); /*0x66b5ce*/
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 632), v35); /*0x66b5db*/
  v64 = operator new(0x208u); /*0x66b5eb*/
  v36 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v64); /*0x66b5fb*/
  if ( v36 ) /*0x66b601*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v36, (_DWORD)v35, 0, a1, (__int64)sub_66E220) ) /*0x66b61b*/
    {
      cocos2d::CCObject::autorelease(v36); /*0x66b627*/
      goto LABEL_35; /*0x66b62d*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v36 + 8LL))(v36, 1); /*0x66b637*/
  }
  v36 = 0; /*0x66b63a*/
LABEL_35:
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 560) + 464LL))(*(_QWORD *)(a1 + 560), v36); /*0x66b63d*/
  *((_DWORD *)v36 + 100) = 1066192077; /*0x66b650*/
  v37 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_removeCheckBtn_001.png"); /*0x66b668*/
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 632), v37); /*0x66b675*/
  v64 = operator new(0x208u); /*0x66b685*/
  v38 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v64); /*0x66b695*/
  if ( !v38 ) /*0x66b69b*/
  {
LABEL_39:
    v38 = 0; /*0x66b6d4*/
    goto LABEL_40; /*0x66b6d4*/
  }
  if ( !(unsigned __int8)sub_47940((_DWORD)v38, (_DWORD)v37, 0, a1, (__int64)PlayLayer_storeCheckpoint) ) /*0x66b6bf*/
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v38 + 8LL))(v38, 1); /*0x66b6d1*/
    goto LABEL_39; /*0x66b6d1*/
  }
  cocos2d::CCObject::autorelease(v38); /*0x66b6c1*/
LABEL_40:
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 560) + 464LL))(*(_QWORD *)(a1 + 560), v38); /*0x66b6d6*/
  *((_DWORD *)v38 + 100) = 1066192077; /*0x66b6e9*/
  v40 = (cocos2d::CCArray *)cocos2d::CCArray::create(v39); /*0x66b6f9*/
  cocos2d::CCArray::addObject(v40, v36); /*0x66b702*/
  cocos2d::CCArray::addObject(v40, v38); /*0x66b70e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v64, (const struct cocos2d::CCPoint *)&unk_905ED8); /*0x66b723*/
  GameToolbox_alignItemsHorisontally(v40, v42, v41, 0); /*0x66b73a*/
  *((_DWORD *)v36 + 93) = 1069547520; /*0x66b73f*/
  *((_DWORD *)v38 + 93) = 1069547520; /*0x66b74a*/
  v43 = qword_905FD0; /*0x66b754*/
  if ( !qword_905FD0 ) /*0x66b75e*/
  {
    v65 = operator new(0x6E8u); /*0x66b76a*/
    qword_905FD0 = sub_2723A0(v65); /*0x66b77b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66b78c*/
    v43 = qword_905FD0; /*0x66b78e*/
  }
  if ( GameManager_getGameVariable(v43, "0071") ) /*0x66b79c*/
    goto LABEL_47; /*0x66b79c*/
  v44 = qword_905FD0; /*0x66b7a5*/
  if ( !qword_905FD0 ) /*0x66b7af*/
  {
    v64 = operator new(0x6E8u); /*0x66b7bb*/
    qword_905FD0 = sub_2723A0(v64); /*0x66b7cc*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66b7dd*/
    v44 = qword_905FD0; /*0x66b7e0*/
  }
  if ( !GameManager_getGameVariable(v44, "0024") ) /*0x66b7ee*/
LABEL_47:
    v45 = 0; /*0x66b7fb*/
  else
    LOBYTE(v45) = 1; /*0x66b7f7*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 560) + 1040LL))(*(_QWORD *)(a1 + 560), v45); /*0x66b807*/
  UILayer_toggleCheckpointsMenu(a1, 0); /*0x66b812*/
  if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v46) + 209) ) /*0x66b81d*/
  {
    v47 = cocos2d::CCSprite::createWithSpriteFrameName("controllerBtn_B_001.png"); /*0x66b837*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 632), v47); /*0x66b844*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v37 + 464LL))(v37, v47); /*0x66b85a*/
    v48 = *(_QWORD *)v47; /*0x66b85d*/
    v49 = (float)(*(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v37 + 320LL))(v37) + 4) /*0x66b882*/
                * 0.5)
        - 25.0;
    v50 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v37 + 320LL))(v37); /*0x66b890*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v64, *v50 * 0.5, v49); /*0x66b8aa*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v48 + 184))(v47, v51); /*0x66b8b6*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v47 + 160LL))(v47); /*0x66b8cd*/
    v52 = cocos2d::CCSprite::createWithSpriteFrameName("controllerBtn_X_001.png"); /*0x66b8da*/
  }
  else
  {
    v53 = cocos2d::CCLabelBMFont::create("X", (const char *)&qword_6FFF68); /*0x66b8f9*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 632), v53); /*0x66b906*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v37 + 464LL))(v37, v53); /*0x66b91c*/
    v54 = *(_QWORD *)v53; /*0x66b91f*/
    v55 = (float)(*(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v37 + 320LL))(v37) + 4) /*0x66b944*/
                * 0.5)
        - 25.0;
    v56 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v37 + 320LL))(v37); /*0x66b952*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v64, *v56 * 0.5, v55); /*0x66b96c*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v54 + 184))(v53, v57); /*0x66b978*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v53 + 160LL))(v53); /*0x66b98f*/
    v52 = cocos2d::CCLabelBMFont::create((const char *)&word_790658, (const char *)&qword_6FFF68); /*0x66b9a3*/
  }
  v58 = v52; /*0x66b9ac*/
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 632), v52); /*0x66b9b6*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v35 + 464LL))(v35, v58); /*0x66b9cd*/
  v59 = *(_QWORD *)v58; /*0x66b9db*/
  v60 = (float)(*(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v35 + 320LL))(v35) + 4) /*0x66b9ed*/
              * 0.5)
      - 25.0;
  v61 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v35 + 320LL))(v35); /*0x66b9fc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v64, *v61 * 0.5, v60); /*0x66ba16*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v59 + 184))(v58, v62); /*0x66ba22*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v58 + 160LL))(v58); /*0x66ba31*/
  UILayer_updateCheckState(a1); /*0x66ba3a*/
  sub_66C1D0(a1, 0); /*0x66ba44*/
  return 1; /*0x66ba4b*/
}

// [4/15] Address: 0x66ba70
// Method: UILayer::updateCheckState
// Hidden C++ exception states: #wind=2
unsigned int __fastcall UILayer_updateCheckState(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  cocos2d::CCDirector *v5; // rax
  float v6; // xmm0_4
  __int64 v7; // rax
  __int64 v8; // rax
  float v9; // xmm6_4
  unsigned int v10; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  float v16; // [rsp+60h] [rbp+8h] BYREF
  float v17; // [rsp+64h] [rbp+Ch]
  float v18; // [rsp+68h] [rbp+10h] BYREF
  void *v19; // [rsp+70h] [rbp+18h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x66ba84*/
  cocos2d::CCDirector::getWinSize(v2, &v18); /*0x66ba92*/
  v3 = qword_905FD0; /*0x66ba98*/
  if ( !qword_905FD0 ) /*0x66baa2*/
  {
    v19 = operator new(0x6E8u); /*0x66baae*/
    qword_905FD0 = sub_2723A0(v19); /*0x66babc*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66bacd*/
    v3 = qword_905FD0; /*0x66bacf*/
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, (const struct cocos2d::CCPoint *)(v3 + 1752)); /*0x66bae2*/
  if ( v16 == 0.0 && v17 == 0.0 ) /*0x66bb03*/
  {
    v5 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v4); /*0x66bb05*/
    v6 = cocos2d::CCDirector::getScreenBottom(v5) + 40.0; /*0x66bb14*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, v18 * 0.5, v6); /*0x66bb32*/
    cocos2d::CCPoint::operator=(&v16, v7); /*0x66bb40*/
  }
  (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 560) + 184LL))(*(_QWORD *)(a1 + 560), &v16); /*0x66bb55*/
  v8 = qword_905FD0; /*0x66bb5b*/
  if ( !qword_905FD0 ) /*0x66bb65*/
  {
    v19 = operator new(0x6E8u); /*0x66bb71*/
    qword_905FD0 = sub_2723A0(v19); /*0x66bb7f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66bb90*/
    v8 = qword_905FD0; /*0x66bb92*/
  }
  v9 = *(float *)(v8 + 1760) * 255.0; /*0x66bba1*/
  v10 = 0; /*0x66bbab*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 632)); /*0x66bbb4*/
  if ( result ) /*0x66bbbc*/
  {
    while ( 1 ) /*0x66bbdf*/
    {
      v12 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 632), v10); /*0x66bbdf*/
      v13 = _RTDynamicCast( /*0x66bbf9*/
              v12,
              0,
              &cocos2d::CCObject `RTTI Type Descriptor',
              &cocos2d::CCSprite `RTTI Type Descriptor',
              0);
      if ( v13 ) /*0x66bc01*/
        break; /*0x66bc01*/
      v15 = _RTDynamicCast( /*0x66bc23*/
              v12,
              0,
              &cocos2d::CCObject `RTTI Type Descriptor',
              &cocos2d::CCLabelBMFont `RTTI Type Descriptor',
              0);
      if ( v15 ) /*0x66bc2b*/
      {
        v14 = v15 + 368; /*0x66bc2d*/
        goto LABEL_13; /*0x66bc2d*/
      }
LABEL_14:
      ++v10; /*0x66bc3e*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 632)); /*0x66bc47*/
      if ( v10 >= result ) /*0x66bc4f*/
        return result; /*0x66bc4f*/
    }
    v14 = v13 + 320; /*0x66bc03*/
LABEL_13:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, (unsigned int)(int)v9); /*0x66bc34*/
    goto LABEL_14; /*0x66bc3b*/
  }
  return result; /*0x66bc55*/
}

// [5/15] Address: 0x66c2a0
// Method: UILayer::resetUINodeState
__int64 __fastcall UILayer_resetUINodeState(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v2; // rdi
  __int64 *v3; // rdi
  __int64 *i; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int16 v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+42h] [rbp+Ah]
  __int16 v10; // [rsp+48h] [rbp+10h] BYREF
  char v11; // [rsp+4Ah] [rbp+12h]

  result = *(_QWORD *)(a1 + 616); /*0x66c2a4*/
  if ( result ) /*0x66c2ae*/
  {
    v2 = *(unsigned int **)(result + 56); /*0x66c2b9*/
    result = *v2; /*0x66c2bd*/
    if ( (_DWORD)result ) /*0x66c2c1*/
    {
      v3 = (__int64 *)*((_QWORD *)v2 + 2); /*0x66c2c7*/
      for ( i = &v3[result - 1]; v3 <= i; ++v3 ) /*0x66c2db*/
      {
        v5 = *v3; /*0x66c2f0*/
        if ( !*v3 ) /*0x66c2f0*/
          break; /*0x66c2f6*/
        v6 = *(_QWORD *)(v5 + 320); /*0x66c2fc*/
        *(_DWORD *)(v5 + 352) = -1; /*0x66c303*/
        *(_WORD *)(v5 + 383) = 0; /*0x66c30d*/
        if ( v6 ) /*0x66c319*/
        {
          v8 = -1; /*0x66c327*/
          v9 = -1; /*0x66c336*/
          (**(void (__fastcall ***)(__int64, __int16 *))(v6 + 320))(v6 + 320, &v8); /*0x66c33d*/
        }
        result = 328; /*0x66c346*/
        if ( *(_BYTE *)(v5 + 381) ) /*0x66c33f*/
          result = 320; /*0x66c34b*/
        v7 = *(_QWORD *)(result + v5); /*0x66c34f*/
        if ( v7 ) /*0x66c356*/
        {
          v10 = -1; /*0x66c364*/
          v11 = -1; /*0x66c373*/
          result = (**(__int64 (__fastcall ***)(__int64, __int16 *))(v7 + 320))(v7 + 320, &v10); /*0x66c37a*/
        }
      }
    }
  }
  return result; /*0x66c39d*/
}

// [6/15] Address: 0x66c3b0
// Method: UILayer::keyDown
__int64 __fastcall UILayer_keyDown(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 == 27 ) /*0x66c3b3*/
  {
    LOBYTE(a3) = 1; /*0x66c3bf*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 + 200) + 16LL))(a1 + 200, 10009, a3); /*0x66c3ca*/
  }
  return result; /*0x66c3ce*/
}

// [8/15] Address: 0x66e040
// Method: UILayer::keyBackClicked
__int64 __fastcall UILayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1 - 336; /*0x66e046*/
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 232) + 928LL))(*(_QWORD *)(a1 + 232)); /*0x66e057*/
  if ( (_BYTE)result ) /*0x66e05f*/
    return UILayer_onPause(v1, 0); /*0x66e06b*/
  return result; /*0x66e066*/
}

// [9/15] Address: 0x66e080
// Method: UILayer::toggleCheckpointsMenu
// Hidden C++ exception states: #wind=1
__int64 __fastcall UILayer_toggleCheckpointsMenu(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  bool GameVariable; // al
  __int64 v6; // rdx
  void *v8; // [rsp+30h] [rbp+8h]

  v2 = a2; /*0x66e08a*/
  v4 = qword_905FD0; /*0x66e090*/
  if ( !qword_905FD0 ) /*0x66e09a*/
  {
    v8 = operator new(0x6E8u); /*0x66e0a6*/
    qword_905FD0 = sub_2723A0(v8); /*0x66e0b4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66e0c5*/
    v4 = qword_905FD0; /*0x66e0c7*/
  }
  GameVariable = GameManager_getGameVariable(v4, "0071"); /*0x66e0d5*/
  v6 = 0; /*0x66e0da*/
  if ( !GameVariable ) /*0x66e0de*/
    v6 = v2; /*0x66e0de*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 560) + 336LL))(*(_QWORD *)(a1 + 560), v6);
}

// [10/15] Address: 0x66e100
// Method: UILayer::onPause
// Hidden C++ exception states: #wind=5
__int64 __fastcall UILayer_onPause(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _BYTE *v4; // rcx
  __int64 v5; // rax
  void *v6; // [rsp+40h] [rbp+18h]
  void *v7; // [rsp+40h] [rbp+18h]
  void *v8; // [rsp+40h] [rbp+18h]

  result = qword_905FD0; /*0x66e109*/
  if ( !qword_905FD0 ) /*0x66e113*/
  {
    v6 = operator new(0x6E8u); /*0x66e11f*/
    qword_905FD0 = sub_2723A0(v6); /*0x66e12d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66e13e*/
    result = qword_905FD0; /*0x66e140*/
  }
  v3 = *(_QWORD *)(result + 560); /*0x66e147*/
  if ( !v3 || *(int *)(v3 + 2156) <= 2 ) /*0x66e15a*/
  {
    *(_QWORD *)(a1 + 584) = -1; /*0x66e160*/
    UILayer_resetUINodeState(a1); /*0x66e16e*/
    result = qword_905FD0; /*0x66e173*/
    if ( !qword_905FD0 ) /*0x66e17d*/
    {
      v7 = operator new(0x6E8u); /*0x66e189*/
      qword_905FD0 = sub_2723A0(v7); /*0x66e197*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66e1a8*/
      result = qword_905FD0; /*0x66e1aa*/
    }
    v4 = *(_BYTE **)(result + 560); /*0x66e1b1*/
    if ( v4 ) /*0x66e1bb*/
    {
      PlayLayer_pauseGame(v4, 0); /*0x66e1bf*/
      v5 = qword_905FD0; /*0x66e1c4*/
      if ( !qword_905FD0 ) /*0x66e1ce*/
      {
        v8 = operator new(0x6E8u); /*0x66e1da*/
        qword_905FD0 = sub_2723A0(v8); /*0x66e1e8*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66e1f9*/
        v5 = qword_905FD0; /*0x66e1fb*/
      }
      result = *(_QWORD *)(v5 + 560); /*0x66e202*/
      ++*(_DWORD *)(result + 2156); /*0x66e209*/
    }
  }
  return result; /*0x66e20f*/
}

// [11/15] Address: 0x66e310
// Method: UILayer::toggleMenuVisibility
// Hidden C++ exception states: #wind=1
unsigned int __fastcall UILayer_toggleMenuVisibility(__int64 a1, char a2)
{
  __int64 v4; // rcx
  unsigned int result; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  struct cocos2d::CCObject *v9; // rax
  void *v10; // [rsp+40h] [rbp+18h]

  UILayer_resetUINodeState(a1); /*0x66e320*/
  v4 = qword_905FD0; /*0x66e325*/
  if ( !qword_905FD0 ) /*0x66e32f*/
  {
    v10 = operator new(0x6E8u); /*0x66e33b*/
    qword_905FD0 = sub_2723A0(v10); /*0x66e349*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66e35a*/
    v4 = qword_905FD0; /*0x66e35c*/
  }
  result = GameManager_getGameVariable(v4, "0024"); /*0x66e36a*/
  if ( (_BYTE)result )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 568) + 952LL))(*(_QWORD *)(a1 + 568)); /*0x66e37d*/
    LOBYTE(v7) = a2 != 0 ? 0x4B : 0;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 320) + 40LL))(v6 + 320, v7); /*0x66e394*/
    v8 = 0; /*0x66e397*/
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 616)); /*0x66e3a0*/
    if ( result ) /*0x66e3a8*/
    {
      do /*0x66e3e2*/
      {
        v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 616), v8); /*0x66e3b9*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v9 + 336LL))(v9, 0); /*0x66e3ce*/
        ++v8; /*0x66e3d1*/
        result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 616)); /*0x66e3da*/
      }
      while ( v8 < result ); /*0x66e3e2*/
    }
  }
  return result; /*0x66e3e4*/
}

// [12/15] Address: 0x66e3f0
// Method: UILayer::ccTouchBegan
// Hidden C++ exception states: #wind=2
char __fastcall UILayer_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // r15
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  float v15; // [rsp+20h] [rbp-30h] BYREF
  void *v16; // [rsp+28h] [rbp-28h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  char v19; // [rsp+80h] [rbp+30h] BYREF
  float v20; // [rsp+98h] [rbp+48h] BYREF

  v4 = cocos2d::CCDirector::sharedDirector(a1); /*0x66e409*/
  cocos2d::CCDirector::getWinSize(v4, &v20); /*0x66e416*/
  cocos2d::CCTouch::getLocation(a2, &v19); /*0x66e423*/
  cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v15, &v19); /*0x66e438*/
  v5 = (float)(v20 * 0.5) >= v15; /*0x66e44f*/
  if ( *(_BYTE *)(a1 + 276) ) /*0x66e453*/
  {
    v10 = *(_BYTE *)(a1 + 304) == 0; /*0x66e553*/
    goto LABEL_14; /*0x66e553*/
  }
  v6 = (__int64 *)(a1 + 280); /*0x66e460*/
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 280) + 1058LL) ) /*0x66e46e*/
  {
    v6 = (__int64 *)(a1 + 280); /*0x66e47b*/
    v7 = qword_905FD0; /*0x66e482*/
    if ( !qword_905FD0 ) /*0x66e48c*/
    {
      v16 = operator new(0x6E8u); /*0x66e498*/
      qword_905FD0 = sub_2723A0(v16); /*0x66e4a5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66e4b6*/
      v6 = (__int64 *)(a1 + 280); /*0x66e4b8*/
      v7 = qword_905FD0; /*0x66e4bf*/
    }
    if ( !GameManager_getGameVariable(v7, "0011") ) /*0x66e4cd*/
    {
      v8 = qword_905FD0; /*0x66e4d6*/
      if ( !qword_905FD0 ) /*0x66e4e0*/
      {
        v16 = operator new(0x6E8u); /*0x66e4ec*/
        qword_905FD0 = sub_2723A0(v16); /*0x66e4f9*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66e50a*/
        v8 = qword_905FD0; /*0x66e50c*/
      }
      if ( GameManager_getGameVariable(v8, "0010") ) /*0x66e51a*/
        goto LABEL_9; /*0x66e521*/
      goto LABEL_12; /*0x66e521*/
    }
  }
  if ( v5 ) /*0x66e548*/
  {
LABEL_12:
    v10 = *(_DWORD *)(a1 + 264) == -1; /*0x66e54a*/
LABEL_14:
    if ( !v10 ) /*0x66e55a*/
      return 1; /*0x66e55a*/
    v9 = *(_QWORD *)(a1 + 280); /*0x66e560*/
    *(_DWORD *)(a1 + 264) = *(_DWORD *)(a2 + 56); /*0x66e567*/
    WORD2(v17) = 1; /*0x66e56d*/
    goto LABEL_16; /*0x66e56d*/
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 268) != -1 ) /*0x66e52a*/
    return 1; /*0x66e52a*/
  *(_DWORD *)(a1 + 268) = *(_DWORD *)(a2 + 56); /*0x66e534*/
  WORD2(v17) = 257; /*0x66e53a*/
  v9 = *v6; /*0x66e540*/
LABEL_16:
  v11 = v9 + 13376; /*0x66e573*/
  v12 = *(_QWORD *)(a2 + 88); /*0x66e57c*/
  v13 = *(_QWORD *)(v11 + 8); /*0x66e582*/
  *(_QWORD *)((char *)&v17 + 6) = 0; /*0x66e586*/
  HIWORD(v17) = 0; /*0x66e58a*/
  LODWORD(v17) = 1; /*0x66e58e*/
  v18 = v12; /*0x66e595*/
  if ( v13 == *(_QWORD *)(v11 + 16) ) /*0x66e59e*/
  {
    sub_7F650(v11, v13, &v17); /*0x66e5bc*/
  }
  else
  {
    *(_OWORD *)v13 = v17; /*0x66e5a4*/
    *(_QWORD *)(v13 + 16) = v18; /*0x66e5ac*/
    *(_QWORD *)(v11 + 8) += 24LL; /*0x66e5b1*/
  }
  return 1; /*0x66e5c3*/
}

// [13/15] Address: 0x66e5e0
// Method: UILayer::ccTouchMoved
__int64 __fastcall UILayer_ccTouchMoved(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 - 320; /*0x66e5e0*/
  if ( *(_BYTE *)(v2 + 596) ) /*0x66e5e7*/
    return UILayer_processUINodesTouch(v2, 1, a2); /*0x66e5f8*/
  return result; /*0x66e5fd*/
}

// [14/15] Address: 0x66e600
// Method: UILayer::ccTouchEnded
__int64 __fastcall UILayer_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // xmm1_8
  __int128 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-10h]

  result = *(unsigned int *)(a2 + 56); /*0x66e610*/
  if ( *(_BYTE *)(a1 + 276) ) /*0x66e609*/
  {
    if ( *(_BYTE *)(a1 + 304) || *(_DWORD *)(a1 + 264) != (_DWORD)result ) /*0x66e64c*/
      return UILayer_processUINodesTouch(a1 - 320, 2, a2); /*0x66e6ce*/
  }
  else if ( *(_DWORD *)(a1 + 264) != (_DWORD)result ) /*0x66e61b*/
  {
    if ( *(_DWORD *)(a1 + 268) != (_DWORD)result ) /*0x66e623*/
      return result; /*0x66e623*/
    *(_DWORD *)(a1 + 268) = -1; /*0x66e629*/
    result = 0; /*0x66e633*/
    WORD2(v6) = 256; /*0x66e635*/
    goto LABEL_8; /*0x66e63b*/
  }
  result = 0; /*0x66e64e*/
  *(_DWORD *)(a1 + 264) = -1; /*0x66e650*/
  WORD2(v6) = 0; /*0x66e65a*/
LABEL_8:
  v3 = *(_QWORD *)(a1 + 280) + 13376LL; /*0x66e65e*/
  v7 = *(_QWORD *)(a2 + 88); /*0x66e671*/
  LODWORD(v6) = 1; /*0x66e676*/
  HIWORD(v6) = 0; /*0x66e67d*/
  *(_QWORD *)((char *)&v6 + 6) = 0; /*0x66e681*/
  v4 = *(_QWORD *)(v3 + 8); /*0x66e685*/
  if ( v4 == *(_QWORD *)(v3 + 16) ) /*0x66e68d*/
    return sub_7F650(v3, v4, &v6); /*0x66e6af*/
  v5 = v7; /*0x66e693*/
  *(_OWORD *)v4 = v6; /*0x66e698*/
  *(_QWORD *)(v4 + 16) = v5; /*0x66e69b*/
  *(_QWORD *)(v3 + 8) += 24LL; /*0x66e6a0*/
  return result; /*0x66e6a5*/
}

// [15/15] Address: 0x66e6e0
// Method: UILayer::processUINodesTouch
char __fastcall UILayer_processUINodesTouch(__int64 a1, int a2, __int64 a3)
{
  int v6; // esi
  int v7; // r12d
  unsigned int v8; // edi
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // xmm6_8
  __int64 v11; // rbx
  int v12; // eax
  char result; // al
  char v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+80h] [rbp+18h] BYREF

  cocos2d::CCTouch::getLocation(a3, &v14); /*0x66e70c*/
  v6 = 1; /*0x66e719*/
  v7 = *(_DWORD *)(a3 + 56); /*0x66e71e*/
  if ( *(_BYTE *)(a1 + 624) ) /*0x66e712*/
    v6 = 4; /*0x66e727*/
  v8 = 0; /*0x66e72a*/
  while ( 1 ) /*0x66e739*/
  {
    v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 616), v8); /*0x66e739*/
    v10 = *(_QWORD *)(a3 + 88); /*0x66e73f*/
    v11 = (__int64)v9; /*0x66e752*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, (const struct cocos2d::CCPoint *)&v14); /*0x66e755*/
    result = sub_66E7B0(a1, a2, v7, v12, v11, v10); /*0x66e772*/
    if ( result ) /*0x66e779*/
      break; /*0x66e779*/
    if ( (int)++v8 >= v6 ) /*0x66e77f*/
      return result; /*0x66e77f*/
  }
  return 1; /*0x66e785*/
}

// Address: 0x66c5c0
// Method: UILayer::handleAction
// Hidden C++ exception states: #wind=77
char __fastcall UILayer_handleAction(__int64 a1, int a2, unsigned __int8 a3, double a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  bool v21; // bl
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  char v28; // cl
  bool v29; // bl
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  bool v38; // bl
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  bool v45; // al
  __int64 v46; // rax
  __int64 v47; // rcx
  bool v48... [28289 chars total]
