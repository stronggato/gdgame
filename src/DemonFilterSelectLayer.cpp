#include <Geode/binding/DemonFilterSelectLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0x43d0f0
// Method: DemonFilterSelectLayer::selectRating
unsigned int __fastcall DemonFilterSelectLayer_selectRating(__int64 a1, __int64 a2)
{
  int v3; // eax
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  void *v10; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x43d103*/
  v4 = *(cocos2d::CCArray **)(a1 + 664); /*0x43d106*/
  v5 = 0; /*0x43d10d*/
  *(_DWORD *)(a1 + 680) = v3; /*0x43d10f*/
  result = cocos2d::CCArray::count(v4); /*0x43d115*/
  if ( result ) /*0x43d11d*/
  {
    do /*0x43d194*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 664), v5); /*0x43d13f*/
      v8 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 952LL))(v7); /*0x43d154*/
      v9 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 56LL))(v7); /*0x43d15e*/
      v10 = &unk_6FEBAC; /*0x43d167*/
      if ( *(_DWORD *)(a1 + 680) == v9 ) /*0x43d177*/
        v10 = &unk_6FEBB0; /*0x43d179*/
      (**(void (__fastcall ***)(__int64, void *))(v8 + 320))(v8 + 320, v10); /*0x43d180*/
      ++v5; /*0x43d18a*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)); /*0x43d18c*/
    }
    while ( v5 < result ); /*0x43d194*/
  }
  return result; /*0x43d1a0*/
}

// [3/4] Address: 0x43d1b0
// Method: DemonFilterSelectLayer::onClose
__int64 __fastcall DemonFilterSelectLayer_onClose(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD); // rcx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x43d1be*/
  LOBYTE(v2) = 1; /*0x43d1c7*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2); /*0x43d1cc*/
  v4 = *(__int64 (__fastcall ****)(_QWORD, _QWORD))(a1 + 688); /*0x43d1d2*/
  if ( v4 ) /*0x43d1dc*/
    return (**v4)(v4, *(unsigned int *)(a1 + 680)); /*0x43d1ec*/
  return result; /*0x43d1ef*/
}

// [4/4] Address: 0x43d200
// Method: DemonFilterSelectLayer::keyBackClicked
__int64 __fastcall DemonFilterSelectLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD); // rcx

  v1 = a1 - 336; /*0x43d206*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x43d215*/
  LOBYTE(v2) = 1; /*0x43d21e*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v2); /*0x43d223*/
  v4 = *(__int64 (__fastcall ****)(_QWORD, _QWORD))(v1 + 688); /*0x43d229*/
  if ( v4 ) /*0x43d233*/
    return (**v4)(v4, *(unsigned int *)(v1 + 680)); /*0x43d243*/
  return result; /*0x43d246*/
}

// Address: 0x43ca70
// Method: DemonFilterSelectLayer::init
// Hidden C++ exception states: #wind=4
bool __fastcall DemonFilterSelectLayer_init(__int64 a1)
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
  __int64 v14; // rcx
  cocos2d::CCObject *v15; // rax
  __int64 v16; // rcx
  cocos2d::CCArray *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  cocos2d::CCString *v24; // rax
  void *v25; // r8
  cocos2d::CCObject *v26; // rsi
  int i; // ebx
  cocos2d::CCObject *v28; // r12
  unsigned int v29; // edi
  char *v30; // rax
  cocos2d::CCString *v31; // rax
  char *CString; // rax
  size_t v33; // r8
  void **v34; // rcx
  struct cocos2d::CCSprite *v35; // r14
  void *v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ebx
  cocos2d::CCObject *v41; // r14
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  float v46; // [rsp+40h] [rbp-49h] BYREF
  float v47; // [rsp+44h] [rbp-45h]
  void *v48; // [rsp+48h] [rbp-41h] BYREF
  __int64 v49[2]; // [rsp+50h] [rbp-39h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v51; // [rsp+70h] [rbp-19h]
  unsigned __int64 v52; // [rsp+78h] [rbp-11h]

  result = FLAlertLayer_init(a1, 75);
  if ( !result )
    return result;
  v4 = cocos2d::CCDirector::sharedDirector(v3);
  cocos2d::CCDirector::getWinSize(v4, &v46);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v49, 0.0, 0.0, 80.0, 80.0);
  v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5);
  v7 = *v6;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v48, 380.0, 180.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v7 + 312))(v6, v8);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v6,
    0xFFFFFFFFLL);
  v9 = *v6;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v46 * 0.5, v47 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v9 + 184))(v6, v10);
  v11 = cocos2d::CCLabelBMFont::create("Demon Filter", (const char *)&qword_6FFF68);
  v12 = *(_QWORD *)v11;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v46 * 0.5, (float)((float)(v47 * 0.5) + 90.0) - 20.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 184))(v11, v13);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
    *(_QWORD *)(a1 + 584),
    v11);
  v15 = (cocos2d::CCObject *)cocos2d::CCArray::create(v14);
  *(_QWORD *)(a1 + 664) = v15;
  cocos2d::CCObject::retain(v15);
  v17 = (cocos2d::CCArray *)cocos2d::CCArray::create(v16);
  v22 = cocos2d::CCMenu::create(v19, v18, v20, v21);
  *(_QWORD *)(a1 + 552) = v22;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v22, 10);
  v23 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v48 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v48);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v23 = *(_QWORD *)&qword_905FB0;
  }
  v51 = 12;
  v52 = 15;
  strcpy((char *)Block, "demon_filter");
  BYTE5(Block[1]) = 0;
  HIWORD(Block[1]) = 0;
  v24 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v23 + 848), Block);
  LODWORD(v48) = cocos2d::CCString::intValue(v24);
  if ( v52 > 0xF )
  {
    v25 = Block[0];
    if ( v52 + 1 >= 0x1000 )
    {
      v25 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v25);
  }
  v26 = 0;
  for ( i = 0; i <= 5; ++i )
  {
    v28 = v26;
    v29 = 6;
    switch ( i )
    {
      case 0:
        v29 = 0;
        break;
      case 1:
        v29 = 7;
        break;
      case 2:
        v29 = 8;
        break;
      case 4:
        v29 = 9;
        break;
      case 5:
        v29 = 10;
        break;
      default:
        break;
    }
    *(_OWORD *)Block = 0;
    v51 = 0;
    v52 = 15;
    LOBYTE(Block[0]) = 0;
    if ( i )
    {
      v31 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn2_001.png", v29);
      CString = (char *)cocos2d::CCString::getCString(v31);
      v33 = -1;
      do
        ++v33;
      while ( CString[v33] );
      sub_3F5A0(Block, CString, v33);
      v30 = (char *)Block[0];
    }
    else
    {
      v30 = (char *)sub_3C460(32);
      v51 = 25;
      v52 = 31;
      strcpy(v30, "difficulty_06_btn_001.png");
      Block[0] = v30;
    }
    v34 = Block;
    if ( v52 > 0xF )
      v34 = (void **)v30;
    v35 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v34);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v35 + 160LL))(v35);
    v49[0] = (__int64)operator new(0x208u);
    v26 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v49[0]);
    if ( v26 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v26, (_DWORD)v35, 0, a1, (__int64)DemonFilterSelectLayer_selectRating) )
      {
        cocos2d::CCObject::autorelease(v26);
        goto LABEL_28;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v26 + 8LL))(v26, 1);
    }
    v26 = 0;
LABEL_28:
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v26);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 664), v26);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v26 + 64LL))(v26, v29);
    cocos2d::CCArray::addObject(v17, v26);
    if ( v29 != (_DWORD)v48 )
      v26 = v28;
    if ( v52 > 0xF )
    {
      v36 = Block[0];
      if ( v52 + 1 >= 0x1000 )
      {
        v36 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v36 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v36);
    }
  }
  v37 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v49, v46 * 0.5, (float)(v47 * 0.5) + 3.0);
  cocos2d::CCNode::convertToNodeSpace(v37, &v48, v38);
  GameToolbox_alignItemsHorisontally((__int64)v17, 18.0, v39, 0);
  cocos2d::CCArray::removeAllObjects(v17);
  v40 = (unsigned int)ButtonSprite_create(
                        (int)"OK",
                        0,
                        0,
                        1.0,
                        0,
                        (__int64)"goldFont.fnt",
                        (__int64)"GJ_button_01.png",
                        0);
  v49[0] = (__int64)operator new(0x208u);
  v41 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v49[0]);
  if ( v41 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v41, v40, 0, a1, (__int64)DemonFilterSelectLayer_onClose) )
    {
      cocos2d::CCObject::autorelease(v41);
      goto LABEL_41;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v41 + 8LL))(v41, 1);
  }
  v41 = 0;
LABEL_41:
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v41);
  cocos2d::CCArray::addObject(v17, v41);
  v42 = *(_QWORD *)v41;
  v43 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v49, v46 * 0.5, (float)((float)(v47 * 0.5) - 90.0) + 25.0);
  cocos2d::CCNode::convertToNodeSpace(v43, &v48, v44);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v42 + 184))(v41, v45);
  if ( v26 )
    DemonFilterSelectLayer_selectRating(a1, (__int64)v26);
  return 1;
}
