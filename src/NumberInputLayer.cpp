#include <Geode/binding/NumberInputLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x5a940
// Method: NumberInputLayer::registerWithTouchDispatcher
void __fastcall NumberInputLayer_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x5a94d*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x5a955*/
  if ( !a1 ) /*0x5a95f*/
    v3 = 0; /*0x5a95f*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x5a970*/
  cocos2d::CCTouchDispatcher::addPrioTargetedDelegate(v4, v3, -501, 1); /*0x5a98c*/
}

// [2/3] Address: 0x212700
// Method: NumberInputLayer::onNumber
// Hidden C++ exception states: #wind=1
double __fastcall NumberInputLayer_onNumber(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  double result; // xmm0_8
  _BYTE v5[32]; // [rsp+28h] [rbp-30h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 632LL))(a2); /*0x21271b*/
  v3 = v2; /*0x212721*/
  if ( v2 ) /*0x212727*/
  {
    if ( *(int *)(v2 + 392) > 0 ) /*0x212730*/
    {
      sub_3E4F0(v5, v2 + 320); /*0x21273e*/
      sub_F1E50(*(unsigned int *)(v3 + 392), v5); /*0x21274f*/
      return sub_3C310(v5); /*0x21275a*/
    }
  }
  return result; /*0x21275f*/
}

// [3/3] Address: 0x49d060
// Method: NumberInputLayer::init
// Hidden C++ exception states: #wind=2
bool __fastcall NumberInputLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  void (__fastcall *v8)(_QWORD *, __int64); // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // eax
  cocos2d::CCObject *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  float v25; // xmm6_4
  unsigned int v26; // esi
  unsigned int v27; // r15d
  cocos2d::CCString *v28; // rax
  const char *CString; // rdi
  __int64 v30; // rax
  cocos2d::CCObject *v31; // rbx
  cocos2d::CCObject *v32; // r14
  float v33; // xmm2_4
  float v34; // xmm1_4
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  struct cocos2d::CCLabelBMFont *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  void *v42; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v43[8]; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE v44[16]; // [rsp+60h] [rbp-D8h] BYREF
  float v45; // [rsp+148h] [rbp+10h] BYREF
  float v46; // [rsp+14Ch] [rbp+14h]
  float v47; // [rsp+150h] [rbp+18h] BYREF
  float v48; // [rsp+154h] [rbp+1Ch]
  void *v49; // [rsp+158h] [rbp+20h] BYREF

  result = FLAlertLayer_init(a1, 150); /*0x49d0b9*/
  if ( result ) /*0x49d0c0*/
  {
    v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x49d0c6*/
    cocos2d::CCDirector::getWinSize(v4, &v45); /*0x49d0d7*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v44, 0.0, 0.0, 80.0, 80.0); /*0x49d0f6*/
    v6 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5); /*0x49d10c*/
    v7 = v6[40]; /*0x49d116*/
    v8 = *(void (__fastcall **)(_QWORD *, __int64))(v7 + 40); /*0x49d119*/
    LOBYTE(v7) = -1; /*0x49d11d*/
    v8(v6 + 40, v7); /*0x49d11f*/
    v9 = *v6; /*0x49d122*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v49, 270.0, 270.0); /*0x49d138*/
    (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 312))(v6, v10); /*0x49d144*/
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x49d15d*/
      *(_QWORD *)(a1 + 584),
      v6,
      0xFFFFFFFFLL);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, v45 * 0.5, v46 * 0.5); /*0x49d190*/
    (*(void (__fastcall **)(_QWORD *, float *))(*v6 + 184LL))(v6, &v47); /*0x49d1a4*/
    v11 = cocos2d::CCLabelBMFont::create("Enter Password", "goldFont.fnt"); /*0x49d1be*/
    *(_QWORD *)(a1 + 672) = v11; /*0x49d1c1*/
    v12 = *(_QWORD *)v11; /*0x49d1c8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v49, v47, (float)(v48 + 135.0) - 16.0); /*0x49d1f9*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 184))(v11, v13); /*0x49d205*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x49d21c*/
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 672));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 672) + 160LL))(*(_QWORD *)(a1 + 672)); /*0x49d234*/
    v18 = cocos2d::CCMenu::create(v15, v14, v16, v17); /*0x49d23a*/
    *(_QWORD *)(a1 + 552) = v18; /*0x49d240*/
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v18, 10); /*0x49d261*/
    v19 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x49d26b*/
    v20 = CCMenuItemSpriteExtra_create(v19, 0, a1, (__int64)UploadPopup_onClose); /*0x49d285*/
    *((_DWORD *)v20 + 93) = 1070386381; /*0x49d288*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v20); /*0x49d2a6*/
    v21 = *(_QWORD *)v20; /*0x49d2a9*/
    v22 = *(_QWORD *)(a1 + 552); /*0x49d2ac*/
    cocos2d::CCPoint::CCPoint( /*0x49d2ef*/
      (cocos2d::CCPoint *)&v49,
      (float)((float)(v45 * 0.5) - 135.0) + 10.0,
      (float)((float)(v46 * 0.5) + 135.0) - 10.0);
    cocos2d::CCNode::convertToNodeSpace(v22, &v42, v23); /*0x49d300*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v21 + 184))(v20, v24); /*0x49d30c*/
    v25 = (float)(v46 * 0.5) + 50.0; /*0x49d328*/
    v26 = 1; /*0x49d32c*/
    while ( 1 ) /*0x49d378*/
    {
      v27 = v26; /*0x49d378*/
      if ( v26 >= 0xA ) /*0x49d37e*/
      {
        if ( v26 == 10 ) /*0x49d39d*/
        {
          CString = (const char *)&word_79062C; /*0x49d39f*/
        }
        else if ( v26 == 11 ) /*0x49d3ab*/
        {
          CString = "0"; /*0x49d3ad*/
          v27 = 0; /*0x49d3b4*/
        }
        else
        {
          CString = "OK"; /*0x49d3b9*/
          if ( v26 != 12 ) /*0x49d3c3*/
            CString = 0; /*0x49d3c3*/
        }
      }
      else
      {
        v28 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v26); /*0x49d389*/
        CString = cocos2d::CCString::getCString(v28); /*0x49d398*/
      }
      v49 = operator new(0x2C8u); /*0x49d3d1*/
      v30 = ButtonSprite_ButtonSprite((__int64)v49); /*0x49d3dc*/
      v31 = (cocos2d::CCObject *)v30; /*0x49d3e1*/
      if ( v30 ) /*0x49d3e7*/
      {
        if ( ButtonSprite_init( /*0x49d415*/
               v30,
               (__int64)CString,
               30,
               30,
               1065353216,
               1,
               (const char *)&qword_6FFF68,
               (__int64)"GJ_button_01.png",
               1109393408) )
        {
          cocos2d::CCObject::autorelease(v31); /*0x49d421*/
        }
        else
        {
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v31 + 8LL))(v31, 1); /*0x49d431*/
          LODWORD(v31) = 0; /*0x49d434*/
        }
      }
      v42 = operator new(0x208u); /*0x49d441*/
      v32 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v42); /*0x49d44e*/
      if ( !v32 ) /*0x49d454*/
        goto LABEL_19; /*0x49d454*/
      if ( !(unsigned __int8)sub_47940((_DWORD)v32, (_DWORD)v31, 0, a1, (__int64)sub_49D630) ) /*0x49d46e*/
        break; /*0x49d46e*/
      cocos2d::CCObject::autorelease(v32); /*0x49d47a*/
LABEL_20:
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v32 + 64LL))(v32, v27); /*0x49d490*/
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x49d4a9*/
        *(_QWORD *)(a1 + 552),
        v32);
      v33 = v25; /*0x49d4af*/
      if ( v26 < 0xA ) /*0x49d4b5*/
      {
        if ( v26 < 7 ) /*0x49d4c1*/
        {
          if ( v26 >= 4 ) /*0x49d4d0*/
            v33 = v25 - 50.0; /*0x49d4d5*/
        }
        else
        {
          v33 = v25 - 100.0; /*0x49d4c6*/
        }
      }
      else
      {
        v33 = v25 - 150.0; /*0x49d4b7*/
      }
      v34 = v45 * 0.5; /*0x49d4e2*/
      if ( v26 == 3 * (v26 / 3) ) /*0x49d4f7*/
      {
        v34 = v34 + 60.0; /*0x49d4f9*/
      }
      else if ( v26 % 3 == 1 ) /*0x49d503*/
      {
        v34 = v34 + -60.0; /*0x49d505*/
      }
      if ( v26 == 12 ) /*0x49d50d*/
        *(_QWORD *)(a1 + 680) = v32; /*0x49d50f*/
      v35 = *(_QWORD *)v32; /*0x49d516*/
      v36 = *(_QWORD *)(a1 + 552); /*0x49d519*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v43, v34, v33); /*0x49d525*/
      cocos2d::CCNode::convertToNodeSpace(v36, v44, v37); /*0x49d536*/
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v35 + 184))(v32, v38); /*0x49d542*/
      if ( (int)++v26 >= 13 ) /*0x49d554*/
      {
        v39 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, (const char *)&qword_6FFF68); /*0x49d56a*/
        *(_QWORD *)(a1 + 664) = v39; /*0x49d56d*/
        v40 = *(_QWORD *)v39; /*0x49d574*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v49, v47, v48 + 95.0); /*0x49d599*/
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v40 + 184))(v39, v41); /*0x49d5a5*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x49d5bc*/
          *(_QWORD *)(a1 + 584),
          *(_QWORD *)(a1 + 664));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 664) + 160LL))(*(_QWORD *)(a1 + 664)); /*0x49d5d4*/
        sub_49D7A0(a1); /*0x49d5dd*/
        return 1; /*0x49d5e2*/
      }
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v32 + 8LL))(v32, 1); /*0x49d48a*/
LABEL_19:
    v32 = 0; /*0x49d48d*/
    goto LABEL_20; /*0x49d48d*/
  }
  return result; /*0x49d5e4*/
}
