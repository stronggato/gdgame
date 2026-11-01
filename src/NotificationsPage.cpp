#include <Geode/binding/NotificationsPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x4739c0
// Method: NotificationsPage::~NotificationsPage
// Hidden C++ exception states: #wind=1
char *__fastcall NotificationsPage__dtor_NotificationsPage(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx

  *(_QWORD *)Block = &NotificationsPage::`vftable'; /*0x4739db*/
  *((_QWORD *)Block + 40) = &NotificationsPage::`vftable'; /*0x4739e5*/
  *((_QWORD *)Block + 41) = &NotificationsPage::`vftable'; /*0x4739f3*/
  *((_QWORD *)Block + 42) = &NotificationsPage::`vftable'; /*0x473a01*/
  *((_QWORD *)Block + 43) = &NotificationsPage::`vftable'; /*0x473a0f*/
  *((_QWORD *)Block + 44) = &NotificationsPage::`vftable'; /*0x473a1d*/
  *((_QWORD *)Block + 51) = &NotificationsPage::`vftable'; /*0x473a2b*/
  *((_QWORD *)Block + 54) = &NotificationsPage::`vftable'; /*0x473a39*/
  *((_QWORD *)Block + 68) = &NotificationsPage::`vftable'; /*0x473a47*/
  v4 = Block + 664; /*0x473a4e*/
  *((_QWORD *)Block + 83) = &NotificationsPage::`vftable'; /*0x473a5c*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x473a5f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x473a69*/
  {
    v6 = operator new(0x690u); /*0x473a70*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x473a7d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x473a8e*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x473a90*/
  }
  if ( *(char **)(v5 + 528) == v4 ) /*0x473a9e*/
    *(_QWORD *)(v5 + 528) = 0; /*0x473aa0*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x473aab*/
  if ( v7 ) /*0x473ab5*/
    cocos2d::CCObject::release(v7); /*0x473ab7*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 91); /*0x473abd*/
  if ( v8 ) /*0x473ac7*/
    cocos2d::CCObject::release(v8); /*0x473ac9*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x473ad2*/
  if ( (a2 & 1) != 0 ) /*0x473adc*/
    j_j_free(Block); /*0x473ae6*/
  return Block; /*0x473aee*/
}

// [2/9] Address: 0x473b00
// Method: NotificationsPage::init
bool __fastcall NotificationsPage_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rdx
  void (__fastcall *v8)(__int64 *, __int64); // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  struct cocos2d::CCLabelBMFont *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCLabelBMFont *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCSprite *v24; // rax
  struct cocos2d::CCMenuItem *v25; // rax
  struct cocos2d::CCMenu *v26; // rax
  float v27; // xmm1_4
  struct cocos2d::CCMenu *v28; // rdi
  float v29; // xmm2_4
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  struct cocos2d::CCLabelBMFont *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  float v42; // xmm7_4
  struct cocos2d::CCSprite *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 *v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  cocos2d::CCSprite *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // rsi
  __int64 v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  struct cocos2d::CCSprite *v59; // rax
  __int64 v60; // rax
  __int64 *v61; // rsi
  __int64 v62; // rbx
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  struct cocos2d::CCSprite *v66; // rbx
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  _BYTE v72[16]; // [rsp+30h] [rbp-39h] BYREF
  float v73; // [rsp+D8h] [rbp+6Fh] BYREF
  float v74; // [rsp+DCh] [rbp+73h]
  char v75; // [rsp+E0h] [rbp+77h] BYREF
  char v76; // [rsp+E8h] [rbp+7Fh] BYREF

  result = FLAlertLayer_init(a1, 150); /*0x473b18*/
  if ( result ) /*0x473b1f*/
  {
    *(_BYTE *)(a1 + 596) = 1; /*0x473b6d*/
    v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x473b75*/
    cocos2d::CCDirector::getWinSize(v4, &v73); /*0x473b82*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v72, 0.0, 0.0, 80.0, 80.0); /*0x473ba0*/
    v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5); /*0x473bb6*/
    v7 = v6[40]; /*0x473bc0*/
    v8 = *(void (__fastcall **)(__int64 *, __int64))(v7 + 40); /*0x473bc3*/
    LOBYTE(v7) = -1; /*0x473bc7*/
    v8(v6 + 40, v7); /*0x473bc9*/
    v9 = *v6; /*0x473be0*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v75, 440.0, 290.0); /*0x473be3*/
    (*(void (__fastcall **)(__int64 *, __int64))(v9 + 312))(v6, v10); /*0x473bef*/
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x473c08*/
      *(_QWORD *)(a1 + 584),
      v6,
      0xFFFFFFFFLL);
    v11 = *v6; /*0x473c25*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, v73 * 0.5, v74 * 0.5); /*0x473c32*/
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 184))(v6, v12); /*0x473c3e*/
    v13 = cocos2d::CCLabelBMFont::create("Notifications", (const char *)&qword_6FFF68); /*0x473c65*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x473c75*/
      *(_QWORD *)(a1 + 584),
      v13,
      20);
    v14 = *(_QWORD *)v13; /*0x473c8f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, v73 * 0.5, (float)((float)(v74 * 0.5) + 145.0) - 20.0); /*0x473ca9*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v14 + 184))(v13, v15); /*0x473cb5*/
    cocos2d::CCLabelBMFont::limitLabelWidth(v13, 185.0, 0.80000001, 0.0); /*0x473cd6*/
    v16 = cocos2d::CCLabelBMFont::create(" ", "goldFont.fnt"); /*0x473cea*/
    v17 = *(_QWORD *)(a1 + 584); /*0x473cf0*/
    *(_QWORD *)(a1 + 672) = v16; /*0x473cfd*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v17 + 456LL))(v17, v16, 20); /*0x473d11*/
    v18 = *(__int64 **)(a1 + 672); /*0x473d14*/
    v19 = *v18; /*0x473d2b*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, 1.0, 0.5); /*0x473d2e*/
    (*(void (__fastcall **)(__int64 *, __int64))(v19 + 288))(v18, v20); /*0x473d3a*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 672) + 160LL))(*(_QWORD *)(a1 + 672)); /*0x473d4e*/
    v21 = *(__int64 **)(a1 + 672); /*0x473d62*/
    v22 = *v21; /*0x473d80*/
    cocos2d::CCPoint::CCPoint( /*0x473d9f*/
      (cocos2d::CCPoint *)&v75,
      (float)((float)(v73 * 0.5) + 220.0) - 10.0,
      (float)((float)(v74 * 0.5) + 145.0) - 20.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v22 + 184))(v21, v23); /*0x473dab*/
    v24 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_backBtn_001.png"); /*0x473db8*/
    v25 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v24, 0, a1, sub_474500); /*0x473dcd*/
    *((_DWORD *)v25 + 93) = 1070386381; /*0x473dd7*/
    v26 = cocos2d::CCMenu::create(v25, 0); /*0x473de1*/
    v27 = v73; /*0x473df0*/
    v28 = v26; /*0x473df5*/
    v29 = v74 * 0.5; /*0x473df8*/
    *(_QWORD *)(a1 + 552) = v26; /*0x473dfd*/
    v30 = *(_QWORD *)v26; /*0x473e04*/
    cocos2d::CCPoint::CCPoint( /*0x473e20*/
      (cocos2d::CCPoint *)&v75,
      (float)((float)(v27 * 0.5) - 220.0) + 10.0,
      (float)(v29 + 145.0) - 10.0);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v30 + 184))(v28, v31); /*0x473e2c*/
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x473e49*/
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 552),
      10);
    v32 = LoadingCircle_create(); /*0x473e4f*/
    v33 = *(_QWORD *)(a1 + 584); /*0x473e54*/
    *(_QWORD *)(a1 + 696) = v32; /*0x473e5b*/
    *(_QWORD *)(v32 + 552) = v33; /*0x473e62*/
    *(_BYTE *)(*(_QWORD *)(a1 + 696) + 560LL) = 0; /*0x473e70*/
    cocos2d::CCObject::retain(*(cocos2d::CCObject **)(a1 + 696)); /*0x473e7e*/
    LoadingCircle_show(*(_QWORD *)(a1 + 696)); /*0x473e8b*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), 0); /*0x473e9c*/
    v34 = *(__int64 **)(*(_QWORD *)(a1 + 696) + 544LL); /*0x473ebc*/
    v35 = *v34; /*0x473ec8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, v73 * 0.5, v74 * 0.5); /*0x473ecb*/
    (*(void (__fastcall **)(__int64 *, __int64))(v35 + 184))(v34, v36); /*0x473ed7*/
    v37 = cocos2d::CCLabelBMFont::create("Something went wrong...", "goldFont.fnt"); /*0x473eeb*/
    v38 = *(_QWORD *)(a1 + 584); /*0x473ef1*/
    *(_QWORD *)(a1 + 680) = v37; /*0x473efe*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v38 + 456LL))(v38, v37, 10); /*0x473f12*/
    v39 = *(__int64 **)(a1 + 680); /*0x473f23*/
    v40 = *v39; /*0x473f34*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, v73 * 0.5, v74 * 0.5); /*0x473f37*/
    (*(void (__fastcall **)(__int64 *, __int64))(v40 + 184))(v39, v41); /*0x473f43*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 680) + 160LL))(*(_QWORD *)(a1 + 680)); /*0x473f5b*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 680) + 336LL))(*(_QWORD *)(a1 + 680), 0); /*0x473f6d*/
    v42 = v74 * 0.5; /*0x473f7f*/
    v43 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"); /*0x473f8e*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v43 + 160LL))(v43); /*0x473f9e*/
    v44 = CCMenuItemSpriteExtra_create(v43, 0, a1, sub_474EF0); /*0x473faf*/
    v45 = *(_QWORD *)(a1 + 552); /*0x473fb4*/
    *(_QWORD *)(a1 + 712) = v44; /*0x473fbb*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 464LL))(v45, v44); /*0x473fcf*/
    v46 = *(__int64 **)(a1 + 712); /*0x473fdb*/
    v47 = *(_QWORD *)(a1 + 552); /*0x473fe5*/
    v48 = *v46; /*0x473ff1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, (float)(v73 * 0.5) - 195.0, v42); /*0x473ffc*/
    cocos2d::CCNode::convertToNodeSpace(v47, &v76, v49); /*0x47400c*/
    (*(void (__fastcall **)(__int64 *, __int64))(v48 + 184))(v46, v50); /*0x474018*/
    *(_DWORD *)(*(_QWORD *)(a1 + 712) + 372LL) = 0x40000000; /*0x47402c*/
    v51 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"); /*0x474041*/
    cocos2d::CCSprite::setFlipX(v51, 1); /*0x474044*/
    (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v51 + 160LL))(v51); /*0x47405b*/
    v52 = CCMenuItemSpriteExtra_create(v51, 0, a1, sub_474EE0); /*0x47406c*/
    v53 = *(_QWORD *)(a1 + 552); /*0x474071*/
    *(_QWORD *)(a1 + 704) = v52; /*0x474078*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 464LL))(v53, v52); /*0x47408c*/
    v54 = *(__int64 **)(a1 + 704); /*0x474098*/
    v55 = *(_QWORD *)(a1 + 552); /*0x4740a2*/
    v56 = *v54; /*0x4740ae*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, (float)(v73 * 0.5) + 195.0, v42); /*0x4740b9*/
    cocos2d::CCNode::convertToNodeSpace(v55, &v76, v57); /*0x4740c9*/
    (*(void (__fastcall **)(__int64 *, __int64))(v56 + 184))(v54, v58); /*0x4740d5*/
    *(_DWORD *)(*(_QWORD *)(a1 + 704) + 372LL) = 0x40000000; /*0x4740e4*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 712) + 336LL))(*(_QWORD *)(a1 + 712), 0); /*0x4740f8*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 704) + 336LL))(*(_QWORD *)(a1 + 704), 0); /*0x47410a*/
    v59 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png"); /*0x474117*/
    v60 = CCMenuItemSpriteExtra_create(v59, 0, a1, sub_474430); /*0x47412c*/
    *(_QWORD *)(a1 + 720) = v60; /*0x474131*/
    *(_DWORD *)(v60 + 372) = 1069547520; /*0x474138*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x474153*/
      *(_QWORD *)(a1 + 552),
      *(_QWORD *)(a1 + 720));
    v61 = *(__int64 **)(a1 + 720); /*0x474167*/
    v62 = *(_QWORD *)(a1 + 552); /*0x47416e*/
    v63 = *v61; /*0x47417a*/
    cocos2d::CCPoint::CCPoint( /*0x47419e*/
      (cocos2d::CCPoint *)&v75,
      (float)((float)(v73 * 0.5) + 220.0) - 10.0,
      (float)((float)((float)(v74 * 0.5) - 145.0) + 10.0) + 1.0);
    cocos2d::CCNode::convertToNodeSpace(v62, &v76, v64); /*0x4741ae*/
    (*(void (__fastcall **)(__int64 *, __int64))(v63 + 184))(v61, v65); /*0x4741ba*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 720) + 336LL))(*(_QWORD *)(a1 + 720), 0); /*0x4741cc*/
    v66 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsBtn02_001.png"); /*0x4741e3*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v66 + 160LL))(v66); /*0x4741f3*/
    v67 = CCMenuItemSpriteExtra_create(v66, 0, a1, sub_4742F0); /*0x474209*/
    *(_DWORD *)(v67 + 372) = 1069547520; /*0x47420c*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v67); /*0x47422a*/
    v68 = *(_QWORD *)v67; /*0x47423b*/
    v69 = *(_QWORD *)(a1 + 552); /*0x47423e*/
    cocos2d::CCPoint::CCPoint( /*0x47426b*/
      (cocos2d::CCPoint *)&v75,
      (float)((float)(v73 * 0.5) - 220.0) + 10.0,
      (float)((float)((float)(v74 * 0.5) - 145.0) + 10.0) + 1.0);
    cocos2d::CCNode::convertToNodeSpace(v69, &v76, v70); /*0x47427b*/
    (*(void (__fastcall **)(__int64, __int64))(v68 + 184))(v67, v71); /*0x474287*/
    sub_4745D0(a1, 0); /*0x474292*/
    return 1; /*0x47429d*/
  }
  return result; /*0x473b21*/
}

// [3/9] Address: 0x4745c0
// Method: NotificationsPage::keyBackClicked
__int64 __fastcall NotificationsPage_keyBackClicked(__int64 a1)
{
  return sub_474500(a1 - 336, 0);
}

// [4/9] Address: 0x474850
// Method: NotificationsPage::loadNotificationsFinished
void __fastcall NotificationsPage_loadNotificationsFinished(__int64 a1, cocos2d::CCObject *a2, int a3, int a4, int a5)
{
  cocos2d::CCObject *v8; // rcx
  int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  cocos2d::CCArray *v17; // rcx
  int v18; // edi
  int v19; // ebx
  unsigned int v20; // eax
  cocos2d::CCString *v21; // rax
  const char *CString; // rax

  if ( a3 == *(_DWORD *)(a1 + 72) ) /*0x474871*/
  {
    cocos2d::CCObject::retain(a2); /*0x47487a*/
    v8 = *(cocos2d::CCObject **)(a1 + 64); /*0x474880*/
    if ( v8 ) /*0x474887*/
      cocos2d::CCObject::release(v8); /*0x474889*/
    v9 = 10; /*0x474893*/
    *(_QWORD *)(a1 + 64) = a2; /*0x47489a*/
    *(_DWORD *)(a1 + 76) = a4; /*0x47489e*/
    if ( a5 > 0 ) /*0x4748a1*/
      v9 = a5; /*0x4748a1*/
    *(_DWORD *)(a1 + 80) = v9; /*0x4748a6*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x4748b0*/
    LOBYTE(v10) = 1; /*0x4748ba*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), v10); /*0x4748bf*/
    v11 = cocos2d::CCArray::count(a2); /*0x4748c8*/
    v12 = a1 - 664; /*0x4748ce*/
    if ( v11 ) /*0x4748d7*/
    {
      sub_4746C0(v12, a2); /*0x4748dc*/
      v13 = 0; /*0x4748e1*/
    }
    else
    {
      sub_4746C0(v12, 0); /*0x4748e7*/
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 16) + 360LL))( /*0x474901*/
        *(_QWORD *)(a1 + 16) + 360LL,
        "No notifications yet");
      LOBYTE(v13) = 1; /*0x474903*/
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 336LL))(*(_QWORD *)(a1 + 16), v13); /*0x47490c*/
    v14 = *(_DWORD *)(a1 + 80) * *(_DWORD *)(a1 + 72); /*0x47491b*/
    LOBYTE(v15) = *(_DWORD *)(a1 + 72) > 0; /*0x474924*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 336LL))(*(_QWORD *)(a1 + 48), v15); /*0x474927*/
    v16 = (unsigned int)(v14 + *(_DWORD *)(a1 + 80)); /*0x474934*/
    LOBYTE(v16) = (int)v16 < *(_DWORD *)(a1 + 76); /*0x47493c*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 336LL))(*(_QWORD *)(a1 + 40), v16); /*0x47493f*/
    if ( *(int *)(a1 + 76) > 0 && (v17 = *(cocos2d::CCArray **)(a1 + 64)) != 0 && cocos2d::CCArray::count(v17) ) /*0x474954*/
    {
      v18 = *(_DWORD *)(a1 + 80) * *(_DWORD *)(a1 + 72); /*0x474965*/
      v19 = *(_DWORD *)(a1 + 76); /*0x474969*/
      v20 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 64)); /*0x47496c*/
      v21 = cocos2d::CCString::createWithFormat("%i to %i of %i", v18 + 1, v18 + v20, v19); /*0x474983*/
      CString = cocos2d::CCString::getCString(v21); /*0x47498c*/
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 8) + 360LL))( /*0x4749a6*/
        *(_QWORD *)(a1 + 8) + 360LL,
        CString);
    }
    else
    {
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 8) + 360LL))(*(_QWORD *)(a1 + 8) + 360LL, " "); /*0x4749c0*/
    }
  }
}

// [5/9] Address: 0x4749e0
// Method: NotificationsPage::loadNotificationsFailed
__int64 __fastcall NotificationsPage_loadNotificationsFailed(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( a2 == *(_DWORD *)(a1 + 72) ) /*0x4749ec*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x4749f7*/
    LOBYTE(v3) = 1; /*0x474a01*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), v3); /*0x474a06*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 16) + 360LL))( /*0x474a21*/
      *(_QWORD *)(a1 + 16) + 360LL,
      "Something went wrong");
    LOBYTE(v4) = 1; /*0x474a27*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 336LL))(*(_QWORD *)(a1 + 16), v4); /*0x474a31*/
  }
  return result; /*0x474a38*/
}

// [6/9] Address: 0x474a40
// Method: NotificationsPage::notificationRewardFinished
// Hidden C++ exception states: #wind=6
double __fastcall NotificationsPage_notificationRewardFinished(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  cocos2d::CCObject *v14; // rcx
  void *v16; // [rsp+20h] [rbp-68h]
  void *v17; // [rsp+20h] [rbp-68h]
  void *v18; // [rsp+28h] [rbp-60h]
  _BYTE v19[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+50h] [rbp-38h] BYREF

  if ( !qword_905FE0 ) /*0x474a6e*/
  {
    v16 = operator new(0x3E8u); /*0x474a7a*/
    qword_905FE0 = sub_2D2B40(v16); /*0x474a88*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x474a99*/
  }
  sub_2EB110(a1, v20, a2); /*0x474aa3*/
  v4 = (_QWORD *)sub_3E4F0(v19, v20); /*0x474ac2*/
  v5 = qword_905FE0; /*0x474ac5*/
  if ( !qword_905FE0 ) /*0x474acf*/
  {
    v18 = operator new(0x3E8u); /*0x474adb*/
    qword_905FE0 = sub_2D2B40(v18); /*0x474ae9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x474afa*/
    v5 = qword_905FE0; /*0x474afc*/
  }
  if ( GameStatsManager_isSpecialChestUnlocked(v5, v4) ) /*0x474b06*/
  {
    v6 = *(_QWORD *)(a1 + 24); /*0x474b0f*/
    if ( v6 ) /*0x474b16*/
    {
      v7 = *(_QWORD *)(v6 + 544); /*0x474b1c*/
      if ( v7 ) /*0x474b26*/
        CustomListView_reloadAll(v7); /*0x474b2c*/
    }
  }
  else
  {
    v8 = sub_3E4F0(v19, v20); /*0x474b4f*/
    v9 = qword_905FE0; /*0x474b52*/
    if ( !qword_905FE0 ) /*0x474b5c*/
    {
      v17 = operator new(0x3E8u); /*0x474b68*/
      qword_905FE0 = sub_2D2B40(v17); /*0x474b76*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x474b87*/
      v9 = qword_905FE0; /*0x474b89*/
    }
    v10 = sub_2EB1F0(v9, v8); /*0x474b98*/
    if ( v10 ) /*0x474b9e*/
    {
      v11 = *(_QWORD *)(a1 + 24); /*0x474ba4*/
      if ( v11 ) /*0x474bab*/
      {
        v12 = *(_QWORD *)(v11 + 544); /*0x474bad*/
        if ( v12 ) /*0x474bb7*/
          CustomListView_reloadAll(v12); /*0x474bb9*/
      }
      v13 = sub_55E830(*(unsigned int *)(v10 + 64), 0); /*0x474bc8*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 664) + 456LL))(a1 - 664, v13, 100); /*0x474be9*/
      v14 = *(cocos2d::CCObject **)(v13 + 704); /*0x474bec*/
      if ( v14 ) /*0x474bf6*/
        cocos2d::CCObject::release(v14); /*0x474bf8*/
      *(_QWORD *)(v13 + 704) = v10; /*0x474bfe*/
      cocos2d::CCObject::retain((cocos2d::CCObject *)v10); /*0x474c08*/
      if ( !*(_BYTE *)(v10 + 80) || *(_DWORD *)(v10 + 64) == *(_DWORD *)(v13 + 696) ) /*0x474c1d*/
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 720) + 336LL))(*(_QWORD *)(v13 + 720), 0); /*0x474c2b*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 720) + 936LL))(*(_QWORD *)(v13 + 720), 0); /*0x474c3d*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 712) + 336LL))(*(_QWORD *)(v13 + 712), 0); /*0x474c4f*/
        *(_BYTE *)(v13 + 700) = 1; /*0x474c55*/
        if ( *(_BYTE *)(v13 + 701) ) /*0x474c5c*/
          RewardUnlockLayer_playRewardEffect(v13); /*0x474c68*/
      }
    }
  }
  return sub_3C310(v20); /*0x474c78*/
}

// [7/9] Address: 0x474ca0
// Method: NotificationsPage::notificationRewardFailed
// Hidden C++ exception states: #wind=1
__int64 NotificationsPage_notificationRewardFailed()
{
  __int64 v0; // rax
  cocos2d::CCObject *v1; // rbx
  __int128 v3; // [rsp+50h] [rbp-48h] BYREF
  __int64 v4; // [rsp+60h] [rbp-38h]
  __int64 v5; // [rsp+68h] [rbp-30h]
  _BYTE v6[40]; // [rsp+70h] [rbp-28h] BYREF

  v3 = 0; /*0x474cac*/
  *(_QWORD *)&v3 = sub_3C460(64); /*0x474cca*/
  v4 = 51; /*0x474ccf*/
  v5 = 63; /*0x474cd8*/
  strcpy((char *)v3, "Could not claim the reward.\nPlease try again later."); /*0x474ce8*/
  v0 = sub_3E4F0(v6, &v3); /*0x474d30*/
  v1 = FLAlertLayer_create_0(0, (int)"Reward", v0, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x474d7b*/
  sub_3C310(&v3); /*0x474d83*/
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v1 + 1064LL))(v1); /*0x474d97*/
}

// [8/9] Address: 0x474da0
// Method: NotificationsPage::notificationMuteFinished
__int64 __fastcall NotificationsPage_notificationMuteFinished(__int64 a1)
{
  bool v1; // cc
  cocos2d::CCArray *v3; // rcx

  v1 = *(_DWORD *)(a1 + 72) <= 0; /*0x474daa*/
  *(_DWORD *)(a1 + 76) = 0; /*0x474db1*/
  if ( !v1 ) /*0x474db8*/
  {
    v3 = *(cocos2d::CCArray **)(a1 + 64); /*0x474dba*/
    if ( v3 ) /*0x474dc1*/
    {
      if ( cocos2d::CCArray::count(v3) <= 1 ) /*0x474dcc*/
        --*(_DWORD *)(a1 + 72); /*0x474dce*/
    }
  }
  return sub_4745D0(a1 - 664, *(unsigned int *)(a1 + 72)); /*0x474ddb*/
}

// [9/9] Address: 0x474df0
// Method: NotificationsPage::notificationMuteFailed
// Hidden C++ exception states: #wind=1
__int64 NotificationsPage_notificationMuteFailed()
{
  __int64 v0; // rax
  cocos2d::CCObject *v1; // rbx
  __int128 v3; // [rsp+50h] [rbp-48h] BYREF
  __int64 v4; // [rsp+60h] [rbp-38h]
  __int64 v5; // [rsp+68h] [rbp-30h]
  _BYTE v6[40]; // [rsp+70h] [rbp-28h] BYREF

  v3 = 0; /*0x474dfc*/
  *(_QWORD *)&v3 = sub_3C460(64); /*0x474e17*/
  v4 = 48; /*0x474e1c*/
  v5 = 63; /*0x474e25*/
  strcpy((char *)v3, "Could not mute the user.\nPlease try again later."); /*0x474e35*/
  v0 = sub_3E4F0(v6, &v3); /*0x474e68*/
  v1 = FLAlertLayer_create_0(0, (int)"Mute", v0, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x474eb3*/
  sub_3C310(&v3); /*0x474ebb*/
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v1 + 1064LL))(v1); /*0x474ecf*/
}
