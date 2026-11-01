#include <Geode/binding/RateDemonLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x558290
// Method: RateDemonLayer::init
// Hidden C++ exception states: #wind=5
bool __fastcall RateDemonLayer_init(__int64 a1, int a2)
{
  bool result; // al
  __int64 v5; // rax
  __int64 v6; // rcx
  bool v7; // al
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  const char *v15; // rcx
  struct cocos2d::CCLabelBMFont *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  cocos2d::CCObject *v20; // rax
  __int64 v21; // rcx
  cocos2d::CCArray *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int i; // edi
  int v29; // edx
  cocos2d::CCString *v30; // rax
  const char *CString; // rax
  struct cocos2d::CCSprite *v32; // r14
  __int64 v33; // rax
  cocos2d::CCObject *v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r9d
  int v39; // edi
  cocos2d::CCObject *v40; // rbx
  int v41; // r9d
  int v42; // edi
  cocos2d::CCObject *v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  _BYTE v47[16]; // [rsp+40h] [rbp-68h] BYREF
  float v48; // [rsp+C0h] [rbp+18h] BYREF
  float v49; // [rsp+C4h] [rbp+1Ch]
  void *v50; // [rsp+C8h] [rbp+20h] BYREF

  result = FLAlertLayer_init(a1, 75); /*0x5582bd*/
  if ( !result ) /*0x5582c4*/
    return result; /*0x5582c4*/
  v5 = qword_905FD0; /*0x5582ca*/
  if ( !qword_905FD0 ) /*0x5582d4*/
  {
    v50 = operator new(0x6E8u); /*0x5582e0*/
    qword_905FD0 = sub_2723A0(v50); /*0x5582f1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x558302*/
    v5 = qword_905FD0; /*0x558304*/
  }
  v6 = (unsigned int)(*(_DWORD *)(v5 + 1064) - *(_DWORD *)(v5 + 1068)); /*0x558311*/
  v7 = (_DWORD)v6 == 1 || (_DWORD)v6 == 2 || *(_BYTE *)(v5 + 1076); /*0x55832e*/
  *(_BYTE *)(a1 + 720) = v7; /*0x558330*/
  *(_DWORD *)(a1 + 712) = a2; /*0x558336*/
  *(_DWORD *)(a1 + 716) = -1; /*0x55833c*/
  v8 = cocos2d::CCDirector::sharedDirector(v6); /*0x558346*/
  cocos2d::CCDirector::getWinSize(v8, &v48); /*0x558357*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v47, 0.0, 0.0, 80.0, 80.0); /*0x55837a*/
  v10 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v9); /*0x558390*/
  v11 = *v10; /*0x558393*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v50, 380.0, 180.0); /*0x5583ae*/
  (*(void (__fastcall **)(__int64 *, __int64))(v11 + 312))(v10, v12); /*0x5583ba*/
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x5583d3*/
    *(_QWORD *)(a1 + 584),
    v10,
    0xFFFFFFFFLL);
  v13 = *v10; /*0x5583d9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v48 * 0.5, v49 * 0.5); /*0x558406*/
  (*(void (__fastcall **)(__int64 *, __int64))(v13 + 184))(v10, v14); /*0x558412*/
  v15 = "Advisor: Rate Demon";
  if ( !*(_BYTE *)(a1 + 720) ) /*0x558426*/
    v15 = "Rate Demon"; /*0x55842d*/
  v16 = cocos2d::CCLabelBMFont::create(v15, (const char *)&qword_6FFF68); /*0x55843e*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 160LL))(v16); /*0x558456*/
  v17 = *(_QWORD *)v16; /*0x558458*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v48 * 0.5, (float)((float)(v49 * 0.5) + 90.0) - 20.0); /*0x55848d*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v17 + 184))(v16, v18); /*0x558499*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x5584ac*/
    *(_QWORD *)(a1 + 584),
    v16);
  v20 = (cocos2d::CCObject *)cocos2d::CCArray::create(v19); /*0x5584b2*/
  *(_QWORD *)(a1 + 696) = v20; /*0x5584b8*/
  cocos2d::CCObject::retain(v20); /*0x5584c2*/
  v22 = (cocos2d::CCArray *)cocos2d::CCArray::create(v21); /*0x5584ce*/
  v27 = cocos2d::CCMenu::create(v24, v23, v25, v26); /*0x5584d1*/
  *(_QWORD *)(a1 + 552) = v27; /*0x5584d7*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v27, 10); /*0x5584f8*/
  for ( i = 1; i <= 5; ++i ) /*0x5584fb*/
  {
    v29 = 6; /*0x558510*/
    if ( i == 1 ) /*0x55851a*/
    {
      v29 = 7; /*0x558545*/
    }
    else if ( i == 2 ) /*0x55851f*/
    {
      v29 = 8; /*0x55853e*/
    }
    else if ( i != 3 ) /*0x558524*/
    {
      if ( i == 4 ) /*0x558529*/
      {
        v29 = 9; /*0x558537*/
      }
      else if ( i == 5 ) /*0x55852e*/
      {
        v29 = 10; /*0x558530*/
      }
    }
    v30 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn2_001.png", v29); /*0x558551*/
    CString = cocos2d::CCString::getCString(v30); /*0x55855a*/
    v32 = cocos2d::CCSprite::createWithSpriteFrameName(CString); /*0x558569*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v32 + 160LL))(v32); /*0x55857c*/
    v50 = operator new(0x208u); /*0x558588*/
    v33 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v50); /*0x558593*/
    v34 = (cocos2d::CCObject *)v33; /*0x558598*/
    if ( v33 ) /*0x55859e*/
    {
      if ( (unsigned __int8)sub_47940(v33, (_DWORD)v32, 0, a1, (__int64)RateDemonLayer_selectRating) ) /*0x5585b1*/
      {
        cocos2d::CCObject::autorelease(v34); /*0x5585bd*/
        goto LABEL_26; /*0x5585c3*/
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v34 + 8LL))(v34, 1); /*0x5585cd*/
    }
    v34 = 0; /*0x5585d0*/
LABEL_26:
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v34); /*0x5585d2*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 696), v34); /*0x5585ef*/
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v34 + 64LL))(v34, (unsigned int)i); /*0x5585fd*/
    cocos2d::CCArray::addObject(v22, v34); /*0x558606*/
  }
  v35 = *(_QWORD *)(a1 + 552); /*0x558617*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v48 * 0.5, (float)(v49 * 0.5) + 3.0); /*0x558648*/
  cocos2d::CCNode::convertToNodeSpace(v35, v47, v36); /*0x558659*/
  GameToolbox_alignItemsHorisontally((__int64)v22, 18.0, v37, 0); /*0x558670*/
  cocos2d::CCArray::removeAllObjects(v22); /*0x558678*/
  v39 = ButtonSprite_create( /*0x5586be*/
          (unsigned int)"Cancel",
          0,
          0,
          v38,
          0,
          (__int64)"goldFont.fnt",
          (__int64)"GJ_button_01.png",
          0);
  v50 = operator new(0x208u); /*0x5586cb*/
  v40 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v50); /*0x5586db*/
  if ( v40 ) /*0x5586e1*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v40, v39, 0, a1, (__int64)sub_558D80) ) /*0x5586fb*/
    {
      cocos2d::CCObject::autorelease(v40); /*0x558707*/
      goto LABEL_32; /*0x55870d*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v40 + 8LL))(v40, 1); /*0x558717*/
  }
  v40 = 0; /*0x55871a*/
LABEL_32:
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v40); /*0x55871c*/
  cocos2d::CCArray::addObject(v22, v40); /*0x558735*/
  v42 = ButtonSprite_create( /*0x558765*/
          (unsigned int)"Submit",
          0,
          0,
          v41,
          0,
          (__int64)"goldFont.fnt",
          (__int64)"GJ_button_01.png",
          0);
  v50 = operator new(0x208u); /*0x558772*/
  v43 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v50); /*0x558782*/
  if ( v43 ) /*0x558788*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v43, v42, 0, a1, (__int64)sub_558A10) ) /*0x5587a2*/
    {
      cocos2d::CCObject::autorelease(v43); /*0x5587ae*/
      goto LABEL_37; /*0x5587b4*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v43 + 8LL))(v43, 1); /*0x5587be*/
  }
  v43 = 0; /*0x5587c1*/
LABEL_37:
  *(_QWORD *)(a1 + 688) = v43; /*0x5587c3*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v43); /*0x5587d7*/
  cocos2d::CCArray::addObject(v22, *(struct cocos2d::CCObject **)(a1 + 688)); /*0x5587e7*/
  v44 = *(_QWORD *)(a1 + 552); /*0x5587ed*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v48 * 0.5, (float)((float)(v49 * 0.5) - 90.0) + 25.0); /*0x558826*/
  cocos2d::CCNode::convertToNodeSpace(v44, v47, v45); /*0x558837*/
  GameToolbox_alignItemsHorisontally((__int64)v22, 15.0, v46, 0); /*0x55884e*/
  RateDemonLayer_selectRating(a1, 0); /*0x558858*/
  return 1; /*0x55885f*/
}

// [2/6] Address: 0x558890
// Method: RateDemonLayer::selectRating
__int64 __fastcall RateDemonLayer_selectRating(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // esi
  struct cocos2d::CCObject *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int16 *v8; // rdx
  __int64 v9; // rcx
  char v10; // al
  __int64 result; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int16 v16; // [rsp+30h] [rbp+8h] BYREF
  char v17; // [rsp+32h] [rbp+Ah]

  if ( a2 ) /*0x5588a1*/
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5588a9*/
  else
    v3 = -1; /*0x5588ae*/
  v4 = 0; /*0x5588b8*/
  for ( *(_DWORD *)(a1 + 716) = v3; v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 696)); ++v4 ) /*0x5588c7*/
  {
    v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 696), v4); /*0x5588ef*/
    v6 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v5 + 952LL))(v5); /*0x558904*/
    v7 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v5 + 56LL))(v5); /*0x55890e*/
    v8 = &word_6FF5E4; /*0x55891d*/
    if ( *(_DWORD *)(a1 + 716) == v7 ) /*0x55892a*/
      v8 = &word_6FF5E8; /*0x55892c*/
    (**(void (__fastcall ***)(__int64, __int16 *))(v6 + 320))(v6 + 320, v8); /*0x558933*/
  }
  v9 = *(_QWORD *)(a1 + 688); /*0x55895a*/
  if ( *(_DWORD *)(a1 + 716) == -1 ) /*0x558961*/
  {
    v16 = -22874; /*0x55896a*/
    v10 = -90; /*0x55896f*/
  }
  else
  {
    v16 = -1; /*0x55897f*/
    v10 = -1; /*0x558984*/
  }
  v17 = v10; /*0x55898b*/
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 952LL))(v9); /*0x558992*/
  v12 = (_QWORD *)result; /*0x558998*/
  v13 = *(_QWORD *)(result + 632); /*0x55899b*/
  if ( v13 ) /*0x5589a5*/
    result = (**(__int64 (__fastcall ***)(__int64, __int16 *))(v13 + 368))(v13 + 368, &v16); /*0x5589b9*/
  v14 = v12[80]; /*0x5589bc*/
  if ( v14 ) /*0x5589c6*/
    result = (**(__int64 (__fastcall ***)(__int64, __int16 *))(v14 + 320))(v14 + 320, &v16); /*0x5589d7*/
  v15 = v12[82]; /*0x5589d9*/
  if ( v15 ) /*0x5589e3*/
    return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v15 + 320))(v15 + 320, &v16); /*0x5589e3*/
  v15 = v12[81]; /*0x5589e5*/
  if ( v15 ) /*0x5589ef*/
    return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v15 + 320))(v15 + 320, &v16); /*0x558a00*/
  return result; /*0x558a07*/
}

// [3/6] Address: 0x558bb0
// Method: RateDemonLayer::uploadActionFinished
void __fastcall RateDemonLayer_uploadActionFinished(__int64 a1, int a2, int a3)
{
  bool v4; // zf
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  if ( a3 == 56 && a2 == *(_DWORD *)(a1 + 40) ) /*0x558bc1*/
  {
    v4 = *(_QWORD *)(a1 + 56) == 0; /*0x558bc3*/
    *(_BYTE *)(a1 + 8) = 1; /*0x558bc8*/
    if ( !v4 ) /*0x558bcc*/
    {
      v5 = 0; /*0x558bdd*/
      *(_QWORD *)&v5 = sub_3C460(32); /*0x558bf3*/
      v6 = 17; /*0x558bfd*/
      v7 = 31; /*0x558c06*/
      strcpy((char *)v5, "Rating submitted!"); /*0x558c0f*/
      UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 56), &v5); /*0x558c24*/
    }
  }
}

// [4/6] Address: 0x558c30
// Method: RateDemonLayer::uploadActionFailed
void __fastcall RateDemonLayer_uploadActionFailed(__int64 a1, int a2, int a3)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( a3 == 56 && a2 == *(_DWORD *)(a1 + 40) ) /*0x558c45*/
  {
    if ( *(_QWORD *)(a1 + 56) ) /*0x558c4b*/
    {
      v4 = 0; /*0x558c6f*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x558c80*/
      v5 = 31; /*0x558c88*/
      v6 = 31; /*0x558c91*/
      strcpy((char *)v4, "Failed. Please try again later."); /*0x558c9a*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 56), &v4); /*0x558cd5*/
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 664LL) = 0; /*0x558cde*/
      *(_QWORD *)(a1 + 56) = 0; /*0x558ce5*/
    }
  }
}

// [5/6] Address: 0x558d00
// Method: RateDemonLayer::onClosePopup
__int64 __fastcall RateDemonLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD); // rcx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x558d18*/
  LOBYTE(v4) = 1; /*0x558d21*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x558d26*/
  v6 = *(_BYTE *)(a1 + 16) == 0; /*0x558d2c*/
  *(_QWORD *)(a1 + 64) = 0; /*0x558d30*/
  if ( !v6 ) /*0x558d38*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 664) + 992LL))(a1 - 664, 0); /*0x558d4a*/
    LOBYTE(v7) = 1; /*0x558d5e*/
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 664) + 520LL))(a1 - 664, v7); /*0x558d60*/
    v8 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 72); /*0x558d66*/
    if ( v8 ) /*0x558d6d*/
      return (**v8)(v8); /*0x558d72*/
  }
  return result; /*0x558d74*/
}

// [6/6] Address: 0x558dc0
// Method: RateDemonLayer::keyBackClicked
__int64 __fastcall RateDemonLayer_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x558dc6*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x558dd5*/
  LOBYTE(v2) = 1; /*0x558dde*/
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2); /*0x558de3*/
  v4 = (__int64 (__fastcall ***)(_QWORD))v1[92]; /*0x558de9*/
  if ( v4 ) /*0x558df3*/
    return (**v4)(v4); /*0x558dfd*/
  return result; /*0x558e00*/
}
