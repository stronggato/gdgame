#include <Geode/binding/FindObjectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x17dc80
// Method: FindObjectPopup::~FindObjectPopup
cocos2d::CCNode *__fastcall FindObjectPopup__dtor_FindObjectPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &FindObjectPopup::`vftable'; /*0x17dc93*/
  *((_QWORD *)Block + 40) = &FindObjectPopup::`vftable'; /*0x17dca0*/
  *((_QWORD *)Block + 41) = &FindObjectPopup::`vftable'; /*0x17dcae*/
  *((_QWORD *)Block + 42) = &FindObjectPopup::`vftable'; /*0x17dcbc*/
  *((_QWORD *)Block + 43) = &FindObjectPopup::`vftable'; /*0x17dcca*/
  *((_QWORD *)Block + 44) = &FindObjectPopup::`vftable'; /*0x17dcd8*/
  *((_QWORD *)Block + 51) = &FindObjectPopup::`vftable'; /*0x17dce6*/
  *((_QWORD *)Block + 54) = &FindObjectPopup::`vftable'; /*0x17dcf4*/
  *((_QWORD *)Block + 68) = &FindObjectPopup::`vftable'; /*0x17dd02*/
  *((_QWORD *)Block + 83) = &FindObjectPopup::`vftable'; /*0x17dd10*/
  *((_QWORD *)Block + 84) = &FindObjectPopup::`vftable'; /*0x17dd1e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x17dd25*/
  if ( (a2 & 1) != 0 ) /*0x17dd2d*/
    j_j_free(Block); /*0x17dd37*/
  return Block; /*0x17dd3c*/
}

// [3/4] Address: 0x17e400
// Method: FindObjectPopup::valueDidChange
__int64 __fastcall FindObjectPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 result; // rax

  if ( a2 == 51 ) /*0x17e403*/
  {
    result = (unsigned int)(int)a3; /*0x17e405*/
    *(_DWORD *)(a1 + 1152) = result; /*0x17e409*/
  }
  return result; /*0x17e40f*/
}

// [4/4] Address: 0x17e4b0
// Method: FindObjectPopup::onFieldEnter
__int64 __fastcall FindObjectPopup_onFieldEnter(__int64 a1)
{
  return sub_17E410(a1, 0);
}

// Address: 0x17dd50
// Method: FindObjectPopup::onBuildWindowContent
// Hidden C++ exception states: #wind=4
double __fastcall FindObjectPopup_onBuildWindowContent(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  cocos2d::CCString *v4; // rax
  int v5; // ebx
  void *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  void *v9; // r8
  cocos2d::CCDictionary *v10; // rbx
  struct cocos2d::CCObject *v11; // rax
  cocos2d::CCString *v12; // rax
  char *CString; // rax
  __int64 v14; // r8
  struct cocos2d::CCObject *v15; // rbx
  _QWORD *v16; // rax
  float v17; // xmm8_4
  float v18; // xmm9_4
  cocos2d::CCObject *v19; // rbx
  cocos2d::CCObject *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  struct cocos2d::CCSprite *v23; // rax
  cocos2d::CCObject *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  cocos2d::CCSprite *v27; // rbx
  cocos2d::CCObject *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rbx
  __int64 v32; // rdx
  void (__fastcall *v33)(char *, __int64); // r8
  cocos2d::CCObject *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  void *v41; // [rsp+60h] [rbp-A0h] BYREF
  float v42; // [rsp+68h] [rbp-98h] BYREF
  float v43; // [rsp+6Ch] [rbp-94h]
  __int128 *v44; // [rsp+70h] [rbp-90h] BYREF
  float v45; // [rsp+78h] [rbp-88h] BYREF
  float v46; // [rsp+7Ch] [rbp-84h]
  void *v47; // [rsp+80h] [rbp-80h] BYREF
  __int128 v48; // [rsp+88h] [rbp-78h] BYREF
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  _BYTE v51[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 Src; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v54; // [rsp+E0h] [rbp-20h]

  v2 = cocos2d::CCDirector::sharedDirector(a1);
  cocos2d::CCDirector::getWinSize(v2, &v44);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, *(float *)&v44 * 0.5, *((float *)&v44 + 1) * 0.5);
  v3 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v47 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v47);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v3 = qword_905FD0;
  }
  Src = 0;
  v53 = 3;
  v54 = 15;
  LODWORD(Src) = 6256231;
  sub_43D80(&Src, "0230", 4u);
  v4 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v3 + 432), &Src);
  v5 = cocos2d::CCString::intValue(v4);
  if ( v54 > 0xF )
  {
    v6 = (void *)Src;
    if ( v54 + 1 >= 0x1000 )
    {
      v6 = *(void **)(Src - 8);
      if ( (unsigned __int64)(Src - (_QWORD)v6 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v6);
  }
  *(_DWORD *)(a1 + 1152) = v5;
  v53 = 8;
  v54 = 15;
  Src = 0x44492070756F7247uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, v42, v43 + 11.5);
  v8 = sub_3C3E00(a1, (int)a1 + 544, 1, 51, (__int64)&Src, v7, 1061997773, 6, 0, 0, 0);
  if ( v54 > 0xF )
  {
    v9 = (void *)Src;
    if ( v54 + 1 >= 0x1000 )
    {
      v9 = *(void **)(Src - 8);
      if ( (unsigned __int64)(Src - (_QWORD)v9 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v9);
  }
  v53 = 0;
  v54 = 15;
  LOBYTE(Src) = 0;
  v10 = *(cocos2d::CCDictionary **)(a1 + 832);
  v11 = cocos2d::CCFloat::create((float)*(int *)(a1 + 1152));
  cocos2d::CCDictionary::setObject(v10, v11, 51);
  if ( *(int *)(a1 + 1152) <= 0 )
  {
    CString = &byte_6E86E0;
  }
  else
  {
    v12 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8);
    CString = (char *)cocos2d::CCString::getCString(v12);
  }
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v14 = -1;
  do
    ++v14;
  while ( CString[v14] );
  sub_3C230(&v48);
  v44 = &v48;
  *(_BYTE *)(a1 + 744) = 1;
  v15 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 760), 51);
  if ( v15 )
  {
    sub_3E4F0(v51, &v48);
    CCTextInputNode_setString(v15, v16);
  }
  *(_BYTE *)(a1 + 744) = 0;
  sub_3C310(&v48);
  if ( v8 )
    sub_3C5CB0(v8);
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v45, (const struct cocos2d::CCSize *)(*(_QWORD *)(a1 + 1024) + 424LL));
  v17 = v45 * 0.5;
  v18 = -28.5 - (float)(v46 * 0.5);
  v41 = operator new(0x2C8u);
  v19 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v41);
  if ( v19 )
  {
    if ( ButtonSprite_init(
           (__int64)v19,
           (__int64)"Select",
           50,
           0,
           1058642330,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_01.png",
           1103626240) )
    {
      cocos2d::CCObject::autorelease(v19);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v19 + 8LL))(v19, 1);
      LODWORD(v19) = 0;
    }
  }
  v20 = CCMenuItemSpriteExtra_create((int)v19, 0, a1, (__int64)FindObjectPopup_onFieldEnter);
  v21 = *(_QWORD *)v20;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v41, v17, v18);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v21 + 184))(v20, v22);
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 1032) + 464LL))(*(_QWORD *)(a1 + 1032), v20);
  v23 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
  LODWORD(v21) = (_DWORD)v23;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v23 + 160LL))(v23);
  v24 = CCMenuItemSpriteExtra_create(v21, 0, a1, (__int64)sub_17E4C0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v24 + 64LL))(v24, 1);
  v25 = *(_QWORD *)v24;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v41, v17 - 60.0, v18);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v25 + 184))(v24, v26);
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 1032) + 464LL))(*(_QWORD *)(a1 + 1032), v24);
  v27 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
  (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v27 + 160LL))(v27);
  cocos2d::CCSprite::setFlipX(v27, 1);
  v28 = CCMenuItemSpriteExtra_create((int)v27, 0, a1, (__int64)sub_17E4C0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v28 + 64LL))(v28, 2);
  v29 = *(_QWORD *)v28;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v41, v17 + 60.0, v18);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v29 + 184))(v28, v30);
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 1032) + 464LL))(*(_QWORD *)(a1 + 1032), v28);
  v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsBtn02_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 160LL))(v31);
  v32 = *((_QWORD *)v31 + 40);
  v33 = *(void (__fastcall **)(char *, __int64))(v32 + 40);
  LOBYTE(v32) = -56;
  v33((char *)v31 + 320, v32);
  v34 = CCMenuItemSpriteExtra_create((int)v31, 0, a1, (__int64)sub_17E4F0);
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v34);
  v35 = *(_QWORD *)v34;
  v36 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v41,
    (float)((float)(*(float *)(a1 + 1040) * 0.5) + v42) - 12.0,
    (float)((float)(*(float *)(a1 + 1044) * 0.5) + v43) - 14.0);
  cocos2d::CCNode::convertToNodeSpace(v36, &v47, v37);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v35 + 184))(v34, v38);
  v39 = *(_QWORD *)(a1 + 1024);
  *(float *)(v39 + 432) = v46;
  sub_7FF60(v39);
  sub_801A0();
  return sub_7FFD0(v39);
}
