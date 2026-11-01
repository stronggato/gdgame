#include <Geode/binding/RateLevelLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x45b850
// Method: RateLevelLayer::selectRating
__int64 __fastcall RateLevelLayer_selectRating(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx

  if ( a2 ) /*0x45b860*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x45b868*/
    v4 = *(_QWORD *)(a1 + 1000); /*0x45b86b*/
    *(_DWORD *)(a1 + 1008) = v3; /*0x45b872*/
    *(_DWORD *)(*(_QWORD *)(v4 + 1856) + 328LL) = v3; /*0x45b87f*/
  }
  return sub_45B550(*(_QWORD *)(a1 + 1016), *(unsigned int *)(a1 + 1008)); /*0x45b893*/
}

// [2/4] Address: 0x558ef0
// Method: RateLevelLayer::init
// Hidden C++ exception states: #wind=3
bool __fastcall RateLevelLayer_init(__int64 a1, int a2)
{
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  struct cocos2d::CCLabelBMFont *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  cocos2d::CCObject *v17; // rax
  __int64 v18; // rcx
  cocos2d::CCArray *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int i; // edi
  cocos2d::CCString *v26; // rax
  const char *CString; // rax
  const char *v28; // rcx
  struct cocos2d::CCObject *v29; // r14
  __int64 v30; // rax
  cocos2d::CCObject *v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // edi
  cocos2d::CCObject *v36; // rbx
  unsigned int v37; // edi
  cocos2d::CCObject *v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE v42[16]; // [rsp+40h] [rbp-68h] BYREF
  float v43; // [rsp+C0h] [rbp+18h] BYREF
  float v44; // [rsp+C4h] [rbp+1Ch]
  void *v45; // [rsp+C8h] [rbp+20h] BYREF

  result = FLAlertLayer_init(a1, 75); /*0x558f1d*/
  if ( !result ) /*0x558f24*/
    return result; /*0x558f24*/
  *(_DWORD *)(a1 + 680) = a2; /*0x558f2a*/
  v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x558f30*/
  cocos2d::CCDirector::getWinSize(v6, &v43); /*0x558f41*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v42, 0.0, 0.0, 80.0, 80.0); /*0x558f64*/
  v8 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v7); /*0x558f7a*/
  v9 = *v8; /*0x558f7d*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v45, 360.0, 180.0); /*0x558f98*/
  (*(void (__fastcall **)(__int64 *, __int64))(v9 + 312))(v8, v10); /*0x558fa4*/
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x558fbd*/
    *(_QWORD *)(a1 + 584),
    v8,
    0xFFFFFFFFLL);
  v11 = *v8; /*0x558fc3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, v43 * 0.5, v44 * 0.5); /*0x558ff0*/
  (*(void (__fastcall **)(__int64 *, __int64))(v11 + 184))(v8, v12); /*0x558ffc*/
  v13 = cocos2d::CCLabelBMFont::create("Rate Difficulty", (const char *)&qword_6FFF68); /*0x559016*/
  v14 = *(_QWORD *)v13; /*0x559019*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, v43 * 0.5, (float)((float)(v44 * 0.5) + 90.0) - 20.0); /*0x55904e*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v14 + 184))(v13, v15); /*0x55905a*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x55906d*/
    *(_QWORD *)(a1 + 584),
    v13);
  v17 = (cocos2d::CCObject *)cocos2d::CCArray::create(v16); /*0x559073*/
  *(_QWORD *)(a1 + 672) = v17; /*0x559079*/
  cocos2d::CCObject::retain(v17); /*0x559083*/
  v19 = (cocos2d::CCArray *)cocos2d::CCArray::create(v18); /*0x55908f*/
  v24 = cocos2d::CCMenu::create(v21, v20, v22, v23); /*0x559092*/
  *(_QWORD *)(a1 + 552) = v24; /*0x559098*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v24, 10); /*0x5590b9*/
  for ( i = 0; i <= 6; ++i ) /*0x5590bc*/
  {
    v26 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn_001.png", i); /*0x5590d9*/
    CString = cocos2d::CCString::getCString(v26); /*0x5590e2*/
    v28 = "difficulty_auto_btn_001.png"; /*0x5590e8*/
    if ( i ) /*0x5590f1*/
      v28 = CString; /*0x5590f1*/
    v29 = cocos2d::CCSprite::createWithSpriteFrameName(v28); /*0x5590fb*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 672), v29); /*0x559108*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v29 + 160LL))(v29); /*0x55911e*/
    v45 = operator new(0x208u); /*0x55912a*/
    v30 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v45); /*0x559135*/
    v31 = (cocos2d::CCObject *)v30; /*0x55913a*/
    if ( v30 ) /*0x559140*/
    {
      if ( (unsigned __int8)sub_47940(v30, (_DWORD)v29, 0, a1, (__int64)sub_559410) ) /*0x559153*/
      {
        cocos2d::CCObject::autorelease(v31); /*0x55915f*/
        goto LABEL_10; /*0x559165*/
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v31 + 8LL))(v31, 1); /*0x55916f*/
    }
    v31 = 0; /*0x559172*/
LABEL_10:
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v31 + 64LL))(v31, (unsigned int)i); /*0x559174*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v31); /*0x55918c*/
    cocos2d::CCArray::addObject(v19, v31); /*0x559198*/
  }
  v32 = *(_QWORD *)(a1 + 552); /*0x5591a9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, v43 * 0.5, v44 * 0.5); /*0x5591d2*/
  cocos2d::CCNode::convertToNodeSpace(v32, v42, v33); /*0x5591e3*/
  GameToolbox_alignItemsHorisontally((__int64)v19, 16.0, v34, 0); /*0x5591fa*/
  cocos2d::CCArray::removeAllObjects(v19); /*0x559202*/
  v35 = (unsigned int)ButtonSprite_create( /*0x559240*/
                        (int)"Cancel",
                        0,
                        0,
                        1.0,
                        0,
                        (__int64)"goldFont.fnt",
                        (__int64)"GJ_button_01.png",
                        0);
  v45 = operator new(0x208u); /*0x55924d*/
  v36 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v45); /*0x55925d*/
  if ( v36 ) /*0x559263*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v36, v35, 0, a1, (__int64)sub_5595B0) ) /*0x55927d*/
    {
      cocos2d::CCObject::autorelease(v36); /*0x559289*/
      goto LABEL_16; /*0x55928f*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v36 + 8LL))(v36, 1); /*0x559299*/
  }
  v36 = 0; /*0x55929c*/
LABEL_16:
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v36); /*0x55929e*/
  cocos2d::CCArray::addObject(v19, v36); /*0x5592b7*/
  v37 = (unsigned int)ButtonSprite_create( /*0x5592e7*/
                        (int)"Submit",
                        0,
                        0,
                        1.0,
                        0,
                        (__int64)"goldFont.fnt",
                        (__int64)"GJ_button_01.png",
                        0);
  v45 = operator new(0x208u); /*0x5592f4*/
  v38 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v45); /*0x559304*/
  if ( v38 ) /*0x55930a*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v38, v37, 0, a1, (__int64)RateLevelLayer_onRate) ) /*0x559324*/
    {
      cocos2d::CCObject::autorelease(v38); /*0x559330*/
      goto LABEL_21; /*0x559336*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v38 + 8LL))(v38, 1); /*0x559340*/
  }
  v38 = 0; /*0x559343*/
LABEL_21:
  *(_QWORD *)(a1 + 664) = v38; /*0x559345*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v38); /*0x559359*/
  cocos2d::CCArray::addObject(v19, *(struct cocos2d::CCObject **)(a1 + 664)); /*0x559369*/
  v39 = *(_QWORD *)(a1 + 552); /*0x55936f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, v43 * 0.5, (float)((float)(v44 * 0.5) - 90.0) + 25.0); /*0x5593a8*/
  cocos2d::CCNode::convertToNodeSpace(v39, v42, v40); /*0x5593b9*/
  GameToolbox_alignItemsHorisontally((__int64)v19, 15.0, v41, 0); /*0x5593d0*/
  sub_559410(a1, 0); /*0x5593da*/
  return 1; /*0x5593e1*/
}

// [3/4] Address: 0x559560
// Method: RateLevelLayer::onRate
__int64 __fastcall RateLevelLayer_onRate(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rcx

  if ( *(_DWORD *)(a1 + 684) != -1 ) /*0x559570*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x559577*/
    LOBYTE(v2) = 1; /*0x559580*/
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2); /*0x559585*/
    v4 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 688); /*0x55958b*/
    if ( v4 ) /*0x559595*/
      return (**v4)(v4); /*0x55959f*/
  }
  return result; /*0x5595a2*/
}

// [4/4] Address: 0x5595f0
// Method: RateLevelLayer::keyBackClicked
__int64 __fastcall RateLevelLayer_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x5595f6*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x559605*/
  LOBYTE(v2) = 1; /*0x55960e*/
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2); /*0x559613*/
  v4 = (__int64 (__fastcall ***)(_QWORD))v1[86]; /*0x559619*/
  if ( v4 ) /*0x559623*/
    return (**v4)(v4); /*0x55962d*/
  return result; /*0x559630*/
}
