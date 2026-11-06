#include <Geode/binding/PurchaseItemPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3abc40
// Method: PurchaseItemPopup::~PurchaseItemPopup
_QWORD *__fastcall PurchaseItemPopup__dtor_PurchaseItemPopup(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &PurchaseItemPopup::`vftable'; /*0x3abc56*/
  Block[40] = &PurchaseItemPopup::`vftable'; /*0x3abc60*/
  Block[41] = &PurchaseItemPopup::`vftable'; /*0x3abc6e*/
  Block[42] = &PurchaseItemPopup::`vftable'; /*0x3abc7c*/
  Block[43] = &PurchaseItemPopup::`vftable'; /*0x3abc8a*/
  Block[44] = &PurchaseItemPopup::`vftable'; /*0x3abc98*/
  Block[51] = &PurchaseItemPopup::`vftable'; /*0x3abca6*/
  Block[54] = &PurchaseItemPopup::`vftable'; /*0x3abcb4*/
  Block[68] = &PurchaseItemPopup::`vftable'; /*0x3abcc2*/
  v4 = (cocos2d::CCObject *)Block[83]; /*0x3abcc9*/
  if ( v4 ) /*0x3abcd3*/
    cocos2d::CCObject::release(v4); /*0x3abcd5*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x3abcde*/
  if ( (a2 & 1) != 0 ) /*0x3abce8*/
    j_j_free(Block); /*0x3abcf2*/
  return Block; /*0x3abcfa*/
}

// [3/3] Address: 0x3b2430
// Method: PurchaseItemPopup::onPurchase
// Hidden C++ exception states: #wind=1
__int64 __fastcall PurchaseItemPopup_onPurchase(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, _QWORD); // rcx
  __int64 v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h]

  v2 = *(_DWORD *)(a1[83] + 320LL) - *(_DWORD *)(a1[83] + 324LL); /*0x3b244a*/
  v3 = qword_905FE0; /*0x3b2450*/
  if ( !qword_905FE0 ) /*0x3b245a*/
  {
    v7 = operator new(0x3E8u); /*0x3b2466*/
    qword_905FE0 = sub_2D2B40(v7); /*0x3b2474*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3b2485*/
    v3 = qword_905FE0; /*0x3b2488*/
  }
  if ( (unsigned __int8)sub_2D68E0(v3, v2) ) /*0x3b2491*/
  {
    v4 = (void (__fastcall ***)(_QWORD, _QWORD))a1[84]; /*0x3b249a*/
    if ( v4 ) /*0x3b24a4*/
      (**v4)(v4, a1[83]); /*0x3b24b0*/
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x3b24ba*/
  LOBYTE(v5) = 1; /*0x3b24c3*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v5);
}

// Address: 0x3b1580
// Method: PurchaseItemPopup::init
// Hidden C++ exception states: #wind=10
bool __fastcall PurchaseItemPopup_init(__int64 a1, cocos2d::CCObject *a2)
{
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rdi
  float v12; // xmm7_4
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  struct cocos2d::CCLabelBMFont *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  _DWORD *v20; // rax
  int v21; // r12d
  int v22; // r13d
  char *StoreItem; // rdi
  int v24; // ecx
  float v25; // xmm6_4
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  void **v31; // r14
  __int64 v32; // rsi
  size_t v33; // rbx
  unsigned __int64 v34; // rcx
  size_t v35; // rdi
  void **v36; // r13
  size_t v37; // r12
  unsigned __int64 v38; // rdi
  __int128 *v39; // r14
  void *v40; // rcx
  const char *v41; // rdx
  __int64 v42; // r8
  __int128 *v43; // r9
  _QWORD *v44; // r8
  void **v45; // rdx
  const char *v46; // rcx
  cocos2d::CCString *v47; // rax
  char *CString; // rax
  size_t v49; // r8
  void **v50; // rdx
  __int64 v51; // r8
  const struct cocos2d::CCPoint *v52; // rax
  char *v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rcx
  cocos2d::CCArray *v62; // rdi
  cocos2d::CCObject *v63; // rbx
  struct cocos2d::CCObject *v64; // rbx
  cocos2d::CCObject *v65; // rbx
  struct cocos2d::CCObject *v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // r13
  char *v72; // r14
  __int64 v73; // rbx
  __int64 v74; // rax
  char *v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  char *v80; // rax
  void *v81; // rcx
  void *v82; // rcx
  void *v83; // rcx
  char v84; // [rsp+50h] [rbp-B0h]
  int v85; // [rsp+54h] [rbp-ACh] BYREF
  float v86; // [rsp+58h] [rbp-A8h] BYREF
  float v87; // [rsp+5Ch] [rbp-A4h]
  int v88; // [rsp+60h] [rbp-A0h] BYREF
  cocos2d::CCObject *v89; // [rsp+68h] [rbp-98h] BYREF
  __int64 v90[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v91[32]; // [rsp+80h] [rbp-80h] BYREF
  void *v92[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v93; // [rsp+B0h] [rbp-50h]
  __int128 v94; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v95; // [rsp+D0h] [rbp-30h]
  void *Block[2]; // [rsp+E0h] [rbp-20h]
  __int64 v97; // [rsp+F0h] [rbp-10h]
  __int64 v98; // [rsp+F8h] [rbp-8h]
  __int128 v99; // [rsp+100h] [rbp+0h] BYREF
  __int64 v100; // [rsp+110h] [rbp+10h]
  unsigned __int64 v101; // [rsp+118h] [rbp+18h]
  void *v102[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v103; // [rsp+130h] [rbp+30h]
  unsigned __int64 v104; // [rsp+138h] [rbp+38h]
  _QWORD v105[4]; // [rsp+140h] [rbp+40h] BYREF
  void *Src[2]; // [rsp+160h] [rbp+60h] BYREF
  size_t Size; // [rsp+170h] [rbp+70h]
  unsigned __int64 v108; // [rsp+178h] [rbp+78h]

  v89 = a2;
  v85 = 1258291200;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v85);
  if ( !result )
    return result;
  *(_QWORD *)(a1 + 664) = a2;
  cocos2d::CCObject::retain(a2);
  sub_5ABA0(a1);
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v5);
  LOBYTE(v6) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v6);
  v8 = cocos2d::CCDirector::sharedDirector(v7);
  cocos2d::CCDirector::getWinSize(v8, &v86);
  v9 = cocos2d::CCLayer::create();
  *(_QWORD *)(a1 + 584) = v9;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v9);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v90, 0.0, 0.0, 80.0, 80.0);
  v11 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square02.png", v10);
  v12 = 260.0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 664) + 344LL) - *(_DWORD *)(*(_QWORD *)(a1 + 664) + 348LL) == 11 )
    v12 = 280.0;
  v13 = *v11;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v88, v12, 190.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v13 + 312))(v11, v14);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v11,
    0xFFFFFFFFLL);
  v15 = *v11;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, v86 * 0.5, v87 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v15 + 184))(v11, v16);
  v17 = cocos2d::CCLabelBMFont::create("Buy Item", (const char *)&qword_6FFF68);
  v18 = *(_QWORD *)v17;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, v86 * 0.5, (float)((float)(v87 * 0.5) + 95.0) - 16.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v18 + 184))(v17, v19);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
    *(_QWORD *)(a1 + 584),
    v17);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v17 + 160LL))(v17);
  v20 = *(_DWORD **)(a1 + 664);
  v21 = v20[83] - v20[84];
  v85 = v21;
  v22 = v20[86] - v20[87];
  v88 = v22;
  StoreItem = GJItemIcon_createStoreItem(v22, v21, 0);
  (*(void (__fastcall **)(char *))(*(_QWORD *)StoreItem + 160LL))(StoreItem);
  v24 = 0;
  if ( v22 == 6 )
    v24 = -8;
  v25 = (float)v24;
  if ( v22 == 12 )
  {
    v84 = 1;
    switch ( v21 )
    {
      case 6:
        v25 = 0.0;
        break;
      case 7:
        v25 = 12.0;
        break;
      case 8:
      case 10:
      case 12:
        v25 = 15.0;
        break;
      case 9:
      case 13:
      case 14:
      case 15:
        v25 = 10.0;
        break;
      case 11:
        v25 = 5.0;
        break;
      default:
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v84 = 0;
  }
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    StoreItem,
    1);
  v26 = *(_QWORD *)StoreItem;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v90, v86 * 0.5, (float)((float)(v87 * 0.5) + 22.0) + v25);
  (*(void (__fastcall **)(char *, __int64))(v26 + 184))(StoreItem, v27);
  ItemInfoPopup_nameForUnlockType((__int64)Src, v21, v22);
  *(_OWORD *)v92 = 0;
  v93 = 0u;
  v31 = Src;
  if ( v108 > 0xF )
    v31 = (void **)Src[0];
  v32 = 0x7FFFFFFFFFFFFFFFLL;
  v33 = Size;
  if ( Size > 0x7FFFFFFFFFFFFFFFLL )
    sub_8D90(v29, v28, v30);
  if ( Size > 0xF )
  {
    v35 = Size | 0xF;
    if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v35 < 0x16 )
        v35 = 22;
    }
    else
    {
      v35 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v92[0] = (void *)sub_3C460(v35 + 1);
    *(_QWORD *)&v93 = v33;
    *((_QWORD *)&v93 + 1) = v35;
    memcpy(v92[0], v31, v33 + 1);
    v34 = *((_QWORD *)&v93 + 1);
    v33 = v93;
  }
  else
  {
    *(_QWORD *)&v93 = Size;
    v34 = 15;
    *((_QWORD *)&v93 + 1) = 15;
    *(_OWORD *)v92 = *(_OWORD *)v31;
  }
  if ( v33 >= 8 )
  {
    if ( v33 == 0x7FFFFFFFFFFFFFFFLL )
      sub_8D90(v34, 22, v30);
    v36 = v92;
    if ( v34 > 0xF )
      v36 = (void **)v92[0];
    v94 = 0;
    v37 = v33 + 1;
    v38 = 15;
    v39 = &v94;
    if ( v33 + 1 > 0xF )
    {
      v38 = v37 | 0xF;
      if ( (v37 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v38 < 0x16 )
          v38 = 22;
      }
      else
      {
        v38 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v39 = (__int128 *)sub_3C460(v38 + 1);
      *(_QWORD *)&v94 = v39;
    }
    *(_QWORD *)&v95 = v33 + 1;
    *((_QWORD *)&v95 + 1) = v38;
    *(_BYTE *)v39 = 10;
    memcpy((char *)v39 + 1, v36, v33);
    *((_BYTE *)v39 + v37) = 0;
    if ( *((_QWORD *)&v93 + 1) > 0xFu )
    {
      v40 = v92[0];
      if ( (unsigned __int64)(*((_QWORD *)&v93 + 1) + 1LL) >= 0x1000 )
      {
        v40 = (void *)*((_QWORD *)v92[0] - 1);
        if ( (unsigned __int64)((char *)v92[0] - (char *)v40 - 8) > 0x1F )
          goto LABEL_96;
      }
      j_j_free(v40);
    }
    *(_OWORD *)v92 = v94;
    v93 = v95;
    v21 = v85;
    v22 = v88;
  }
  v41 = "<cj>Mana Orbs</c>";
  if ( *((_DWORD *)v89 + 92) == 4 )
    v41 = "<cc>Diamond Shards</c>";
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v42 = -1;
  do
    ++v42;
  while ( v41[v42] );
  sub_3C230(&v99);
  GameToolbox_pointsToString(
    (__int64)v105,
    *(_DWORD *)(*(_QWORD *)(a1 + 664) + 356LL) - *(_DWORD *)(*(_QWORD *)(a1 + 664) + 360LL));
  *(_OWORD *)v102 = 0;
  v103 = 0;
  v104 = 15;
  LOBYTE(v102[0]) = 0;
  v43 = &v99;
  v44 = v105;
  v45 = v92;
  v46 = "Do you want to <cg>unlock</c><co>%s</c>\nfor <cy>%s</c> %s?";
  if ( !v84 )
    v46 = "Do you want to <cg>buy</c> this <co>%s</c>\nfor <cy>%s</c> %s?";
  if ( v101 > 0xF )
    v43 = (__int128 *)v99;
  if ( v105[3] > 0xFu )
    v44 = (_QWORD *)v105[0];
  if ( *((_QWORD *)&v93 + 1) > 0xFu )
    v45 = (void **)v92[0];
  v47 = cocos2d::CCString::createWithFormat(v46, v45, v44, v43);
  CString = (char *)cocos2d::CCString::getCString(v47);
  v49 = -1;
  do
    ++v49;
  while ( CString[v49] );
  sub_3F5A0(v102, CString, v49);
  v90[0] = (__int64)&v94;
  v50 = v102;
  if ( v104 > 0xF )
    v50 = (void **)v102[0];
  v94 = 0;
  v95 = 0u;
  v51 = -1;
  do
    ++v51;
  while ( *((_BYTE *)v50 + v51) );
  sub_3C230(&v94);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v89, 0.5, 1.0);
  v53 = TextArea_create((__int64)&v94, &qword_6FFF68, 1.0, 999.0, v52, 1108082688, 0, 0);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v53 + 160LL))(v53);
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v53);
  v54 = *(_QWORD *)v53;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v90, v86 * 0.5, (float)(v87 * 0.5) - 20.0);
  (*(void (__fastcall **)(char *, __int64))(v54 + 184))(v53, v55);
  *(_DWORD *)(a1 + 640) = -1;
  v60 = cocos2d::CCMenu::create(v57, v56, v58, v59);
  *(_QWORD *)(a1 + 552) = v60;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v60, 10);
  v62 = (cocos2d::CCArray *)cocos2d::CCArray::create(v61);
  v90[0] = (__int64)operator new(0x2C8u);
  v63 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v90[0]);
  if ( v63 )
  {
    if ( ButtonSprite_init(
           (__int64)v63,
           (__int64)"Cancel",
           50,
           0,
           1058642330,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_06.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v63);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v63 + 8LL))(v63, 1);
      LODWORD(v63) = 0;
    }
  }
  v64 = CCMenuItemSpriteExtra_create((int)v63, 0, a1, (__int64)UploadPopup_onClose);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    v64);
  cocos2d::CCArray::addObject(v62, v64);
  v90[0] = (__int64)operator new(0x2C8u);
  v65 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v90[0]);
  if ( v65 )
  {
    if ( ButtonSprite_init(
           (__int64)v65,
           (__int64)"Buy",
           50,
           0,
           1058642330,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v65);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v65 + 8LL))(v65, 1);
      LODWORD(v65) = 0;
    }
  }
  v66 = CCMenuItemSpriteExtra_create((int)v65, 0, a1, (__int64)PurchaseItemPopup_onPurchase);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    v66);
  cocos2d::CCArray::addObject(v62, v66);
  v67 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 200LL))(*(_QWORD *)(a1 + 584));
  v68 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v90,
    v86 * 0.5,
    (float)((float)((float)(v87 * 0.5) - 95.0) + 22.0) + *(float *)(v67 + 4));
  cocos2d::CCNode::convertToNodeSpace(v68, &v89, v69);
  GameToolbox_alignItemsHorisontally((__int64)v62, 15.0, v70, 0);
  if ( v22 == 12 )
  {
    *(_OWORD *)Block = 0;
    v97 = 0;
    v71 = 15;
    v98 = 15;
    LOBYTE(Block[0]) = 0;
    if ( v21 == 16 )
    {
      v72 = (char *)sub_3C460(192);
      v73 = 180;
      v71 = 191;
      strcpy(
        v72,
        "This item lets you <co>customize Practice and Menu music</c>.\n"
        "After purchasing this item you will be able to change practice and menu music from the more info page on custom songs.");
    }
    else
    {
      if ( v21 != 17 )
      {
        if ( (unsigned int)(v21 - 6) > 9 )
        {
          v72 = (char *)Block[0];
LABEL_78:
          if ( v71 > 0xF )
          {
            v80 = v72;
            if ( v71 + 1 >= 0x1000 )
            {
              v72 = (char *)*((_QWORD *)v72 - 1);
              if ( (unsigned __int64)(v80 - v72 - 8) > 0x1F )
                invoke_watson(0, 0, 0, 0, 0);
            }
            j_j_free(v72);
          }
          goto LABEL_83;
        }
        v72 = (char *)sub_3C460(208);
        v73 = 195;
        v97 = 195;
        v71 = 207;
        v98 = 207;
        qmemcpy(
          v72,
          "When you activate a path, <cy>Stars</c> and <cl>Moons</c> you <cg>collect</c> will level up your <co>Path</c>."
          "\n"
          "You can unlock multiple paths, but <cr>only one</c> can be <cr>active</c> at a time",
          194);
        *((_WORD *)v72 + 97) = (unsigned __int8)aWhenYouActivat_0[194];
LABEL_74:
        Block[0] = v72;
        v90[0] = (__int64)&v94;
        v94 = 0;
        v95 = 0u;
        if ( (v73 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          v32 = v73 | 0xF;
          if ( (v73 | 0xFuLL) < 0x16 )
            v32 = 22;
        }
        *(_QWORD *)&v94 = sub_3C460(v32 + 1);
        *(_QWORD *)&v95 = v73;
        *((_QWORD *)&v95 + 1) = v32;
        memcpy((void *)v94, v72, v73 + 1);
        sub_3E4F0(v91, Src);
        v75 = InfoAlertButton_create(v74, (__int64)&v94);
        (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v75);
        v76 = *(_QWORD *)v75;
        v77 = *(_QWORD *)(a1 + 552);
        cocos2d::CCPoint::CCPoint(
          (cocos2d::CCPoint *)v90,
          (float)((float)(v86 * 0.5) + (float)(v12 * 0.5)) - 20.0,
          (float)((float)(v87 * 0.5) + 95.0) - 18.0);
        cocos2d::CCNode::convertToNodeSpace(v77, &v89, v78);
        (*(void (__fastcall **)(char *, __int64))(v76 + 184))(v75, v79);
        goto LABEL_78;
      }
      v72 = (char *)sub_3C460(160);
      v73 = 158;
      v71 = 159;
      strcpy(
        v72,
        "This item lets you play\n"
        "<co>Normal mode music in sync in Practice mode</c>.\n"
        "After purchasing this item you will be able to toggle the option in the game menu.");
    }
    v97 = v73;
    v98 = v71;
    goto LABEL_74;
  }
LABEL_83:
  if ( v104 > 0xF )
  {
    v81 = v102[0];
    if ( v104 + 1 >= 0x1000 )
    {
      v81 = (void *)*((_QWORD *)v102[0] - 1);
      if ( (unsigned __int64)((char *)v102[0] - (char *)v81 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v81);
  }
  v103 = 0;
  v104 = 15;
  LOBYTE(v102[0]) = 0;
  sub_3C310(v105);
  if ( v101 <= 0xF )
    goto LABEL_92;
  v82 = (void *)v99;
  if ( v101 + 1 >= 0x1000 )
  {
    v82 = *(void **)(v99 - 8);
    if ( (unsigned __int64)(v99 - (_QWORD)v82 - 8) > 0x1F )
LABEL_96:
      invoke_watson(0, 0, 0, 0, 0);
  }
  j_j_free(v82);
LABEL_92:
  v100 = 0;
  v101 = 15;
  LOBYTE(v99) = 0;
  if ( *((_QWORD *)&v93 + 1) > 0xFu )
  {
    v83 = v92[0];
    if ( (unsigned __int64)(*((_QWORD *)&v93 + 1) + 1LL) >= 0x1000 )
    {
      v83 = (void *)*((_QWORD *)v92[0] - 1);
      if ( (unsigned __int64)((char *)v92[0] - (char *)v83 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v83);
  }
  *(_QWORD *)&v93 = 0;
  *((_QWORD *)&v93 + 1) = 15;
  LOBYTE(v92[0]) = 0;
  sub_3C310(Src);
  return 1;
}
