#include <Geode/binding/SelectListIconLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x42da30
// Method: SelectListIconLayer::onSelect
unsigned int __fastcall SelectListIconLayer_onSelect(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v5; // rdi
  int v6; // eax
  void (__fastcall *v7)(char *, __int16 *); // r8
  __int16 *v8; // rdx
  _BYTE v9[3]; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 ) /*0x42da46*/
    *(_DWORD *)(a1 + 672) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x42da51*/
  v3 = 0; /*0x42da5e*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)); /*0x42da60*/
  if ( result ) /*0x42da68*/
  {
    do /*0x42dad1*/
    {
      v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 664), v3); /*0x42da7f*/
      v6 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v5 + 56LL))(v5); /*0x42da8c*/
      v7 = (void (__fastcall *)(char *, __int16 *))**((_QWORD **)v5 + 40); /*0x42da98*/
      if ( *(_DWORD *)(a1 + 672) == v6 ) /*0x42daa1*/
      {
        v8 = &word_6FEBA8; /*0x42dab6*/
      }
      else
      {
        memset(v9, 125, sizeof(v9)); /*0x42daa3*/
        v8 = (__int16 *)v9; /*0x42daaa*/
      }
      v7((char *)v5 + 320, v8); /*0x42dabd*/
      ++v3; /*0x42dac7*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)); /*0x42dac9*/
    }
    while ( v3 < result ); /*0x42dad1*/
  }
  return result; /*0x42dad8*/
}

// [3/3] Address: 0x42db30
// Method: SelectListIconLayer::keyBackClicked
__int64 __fastcall SelectListIconLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rdx

  v1 = a1 - 336; /*0x42db36*/
  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 344); /*0x42db3d*/
  if ( v2 ) /*0x42db47*/
    (**v2)(v2, v1); /*0x42db4f*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x42db59*/
  LOBYTE(v3) = 1; /*0x42db62*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v3);
}

// Address: 0x42d240
// Method: SelectListIconLayer::init
// Hidden C++ exception states: #wind=4
bool __fastcall SelectListIconLayer_init(__int64 a1, int a2)
{
  unsigned int v4; // esi
  bool result; // al
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  struct cocos2d::CCLabelBMFont *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  cocos2d::CCObject *v21; // rax
  __int64 v22; // rcx
  cocos2d::CCArray *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // edi
  bool v32; // zf
  unsigned int v33; // ebx
  int v34; // edx
  cocos2d::CCString *v35; // rax
  const char *CString; // rax
  __int64 v37; // r8
  const char *v38; // rcx
  struct cocos2d::CCObject *v39; // r12
  cocos2d::CCObject *v40; // r14
  cocos2d::CCString *v41; // rax
  const char *v42; // rax
  __int64 v43; // r8
  float v44; // xmm0_4
  __int64 v45; // rax
  void *v46; // rcx
  cocos2d::CCObject *v47; // rbx
  cocos2d::CCObject *v48; // r14
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  struct cocos2d::CCObject *v53; // rbx
  int v54; // eax
  void (__fastcall *v55)(char *, __int16 *); // r8
  __int16 *v56; // rdx
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  float v58; // [rsp+58h] [rbp-A8h] BYREF
  float v59; // [rsp+5Ch] [rbp-A4h]
  __int16 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v62[8]; // [rsp+78h] [rbp-88h] BYREF
  void *v63; // [rsp+80h] [rbp-80h] BYREF
  __int128 v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h]
  unsigned __int64 v66; // [rsp+A0h] [rbp-60h]

  v4 = 0;
  v57 = -1778384896;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v57);
  if ( !result )
    return result;
  sub_5ABA0(a1);
  *(_DWORD *)(a1 + 672) = a2;
  LOBYTE(v6) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v6);
  LOBYTE(v7) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v7);
  v9 = cocos2d::CCDirector::sharedDirector(v8);
  cocos2d::CCDirector::getWinSize(v9, &v58);
  v10 = cocos2d::CCLayer::create();
  *(_QWORD *)(a1 + 584) = v10;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v10);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v61, 0.0, 0.0, 80.0, 80.0);
  v12 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v11);
  v13 = *v12;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v57, 360.0, 240.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v13 + 312))(v12, v14);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v12,
    0xFFFFFFFFLL);
  v15 = *v12;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v57, v58 * 0.5, v59 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v15 + 184))(v12, v16);
  v17 = cocos2d::CCLabelBMFont::create("Select Icon", (const char *)&qword_6FFF68);
  v18 = *(_QWORD *)v17;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v57, v58 * 0.5, (float)((float)(v59 * 0.5) + 120.0) - 20.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v18 + 184))(v17, v19);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
    *(_QWORD *)(a1 + 584),
    v17);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v17 + 160LL))(v17);
  v21 = (cocos2d::CCObject *)cocos2d::CCArray::create(v20);
  *(_QWORD *)(a1 + 664) = v21;
  cocos2d::CCObject::retain(v21);
  v23 = (cocos2d::CCArray *)cocos2d::CCArray::create(v22);
  v28 = cocos2d::CCMenu::create(v25, v24, v26, v27);
  *(_QWORD *)(a1 + 552) = v28;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v28, 10);
  v29 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v57, v58 * 0.5, (float)((float)(v59 * 0.5) + 30.0) + 5.0);
  cocos2d::CCNode::convertToNodeSpace(v29, v62, v30);
  v31 = 0;
  v32 = 0;
  do
  {
    if ( v32 )
    {
      v33 = -1;
LABEL_5:
      v34 = 0;
      goto LABEL_6;
    }
    v33 = v31;
    if ( v31 )
    {
      if ( (unsigned int)v31 > 0xA )
        goto LABEL_5;
      v34 = v31;
      if ( v31 == 6 || v31 == 7 )
      {
        v34 = v31 + 1;
      }
      else if ( v31 == 8 )
      {
        v34 = 6;
        goto LABEL_23;
      }
      if ( v34 <= 5 )
      {
LABEL_6:
        v35 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn_001.png", v34);
        CString = cocos2d::CCString::getCString(v35);
        v64 = 0;
        v65 = 0;
        v66 = 0;
        v37 = -1;
        do
          ++v37;
        while ( CString[v37] );
LABEL_8:
        sub_3C230(&v64);
        goto LABEL_9;
      }
LABEL_23:
      v41 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn2_001.png", v34);
      v42 = cocos2d::CCString::getCString(v41);
      v64 = 0;
      v65 = 0;
      v66 = 0;
      v43 = -1;
      do
        ++v43;
      while ( v42[v43] );
      goto LABEL_8;
    }
    v64 = 0;
    v65 = 0;
    v66 = 0;
    *(_QWORD *)&v64 = sub_3C460(32);
    v65 = 27;
    v66 = 31;
    strcpy((char *)v64, "difficulty_auto_btn_001.png");
LABEL_9:
    v38 = (const char *)&v64;
    if ( v66 > 0xF )
      v38 = (const char *)v64;
    v39 = cocos2d::CCSprite::createWithSpriteFrameName(v38);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 664), v39);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 160LL))(v39);
    v63 = operator new(0x208u);
    v40 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v63);
    if ( v40 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v40, (_DWORD)v39, 0, a1, (__int64)SelectListIconLayer_onSelect) )
      {
        cocos2d::CCObject::autorelease(v40);
        goto LABEL_28;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v40 + 8LL))(v40, 1);
    }
    v40 = 0;
LABEL_28:
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v39 + 64LL))(v39, v33);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v40 + 64LL))(v40, v33);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v40);
    cocos2d::CCArray::addObject(v23, v40);
    v44 = floorf((float)(v31 / 6)) * -60.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v61, (float)((float)((float)(v31 % 6) * 52.0) - 156.0) + 26.0, v44);
    cocos2d::CCPoint::operator+(v62, &v57, v45);
    (*(void (__fastcall **)(cocos2d::CCObject *, int *))(*(_QWORD *)v40 + 184LL))(v40, &v57);
    if ( v66 > 0xF )
    {
      v46 = (void *)v64;
      if ( v66 + 1 >= 0x1000 )
      {
        v46 = *(void **)(v64 - 8);
        if ( (unsigned __int64)(v64 - (_QWORD)v46 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v46);
    }
    v32 = ++v31 == 11;
  }
  while ( v31 <= 11 );
  *(_DWORD *)(a1 + 640) = -1;
  cocos2d::CCArray::removeAllObjects(v23);
  v61[0] = (__int64)operator new(0x2C8u);
  v47 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v61[0]);
  if ( v47 )
  {
    if ( ButtonSprite_init(
           (__int64)v47,
           (__int64)"OK",
           40,
           0,
           1061997773,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v47);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v47 + 8LL))(v47, 1);
      LODWORD(v47) = 0;
    }
  }
  v61[0] = (__int64)operator new(0x208u);
  v48 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v61[0]);
  if ( v48 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v48, (_DWORD)v47, 0, a1, (__int64)sub_42DAF0) )
    {
      cocos2d::CCObject::autorelease(v48);
      goto LABEL_43;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v48 + 8LL))(v48, 1);
  }
  v48 = 0;
LABEL_43:
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v48);
  v49 = *(_QWORD *)v48;
  v50 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v61, v58 * 0.5, (float)((float)(v59 * 0.5) - 120.0) + 25.0);
  cocos2d::CCNode::convertToNodeSpace(v50, &v63, v51);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v49 + 184))(v48, v52);
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)) )
  {
    do
    {
      v53 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 664), v4);
      v54 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v53 + 56LL))(v53);
      v55 = (void (__fastcall *)(char *, __int16 *))**((_QWORD **)v53 + 40);
      if ( *(_DWORD *)(a1 + 672) == v54 )
      {
        v56 = &word_6FEBA8;
      }
      else
      {
        v60 = 32125;
        memset(&v57, 125, 3);
        v56 = (__int16 *)&v57;
      }
      v55((char *)v53 + 320, v56);
      ++v4;
    }
    while ( v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)) );
  }
  *(_BYTE *)(a1 + 596) = 1;
  return 1;
}
