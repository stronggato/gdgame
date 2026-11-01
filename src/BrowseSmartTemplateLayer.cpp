#include <Geode/binding/BrowseSmartTemplateLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0xfff80
// Method: BrowseSmartTemplateLayer::baseSetup
double __fastcall BrowseSmartTemplateLayer_baseSetup(__int64 a1, float a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 v5; // rbx
  float v6; // xmm8_4
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  float v22; // [rsp+80h] [rbp+8h] BYREF
  float v23; // [rsp+84h] [rbp+Ch]
  float v24; // [rsp+90h] [rbp+18h] BYREF
  float v25; // [rsp+94h] [rbp+1Ch]
  char v26; // [rsp+98h] [rbp+20h] BYREF

  v3 = cocos2d::CCDirector::sharedDirector(a1); /*0xfffa4*/
  cocos2d::CCDirector::getWinSize(v3, &v24); /*0xfffb5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, v24 * 0.5, v25 * 0.5); /*0xfffe8*/
  v4 = *(__int64 **)(a1 + 688); /*0xfffee*/
  *(float *)(a1 + 728) = a2; /*0x100010*/
  v5 = *v4; /*0x100018*/
  v6 = (float)(a2 * 0.5) + v23; /*0x10001f*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v26, 380.0, a2); /*0x100029*/
  (*(void (__fastcall **)(__int64 *, __int64))(v5 + 312))(v4, v7); /*0x100035*/
  (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 688) + 184LL))(*(_QWORD *)(a1 + 688), &v22); /*0x10004d*/
  v8 = *(__int64 **)(a1 + 696); /*0x100053*/
  v9 = *v8; /*0x100077*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, v22, v6 - 22.0); /*0x10007a*/
  (*(void (__fastcall **)(__int64 *, __int64))(v9 + 184))(v8, v10); /*0x100086*/
  v11 = *(__int64 **)(a1 + 704); /*0x10008c*/
  v12 = *v11; /*0x1000b0*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, v22, v6 - 45.0); /*0x1000b3*/
  (*(void (__fastcall **)(__int64 *, __int64))(v12 + 184))(v11, v13); /*0x1000bf*/
  v14 = *(__int64 **)(a1 + 712); /*0x1000de*/
  v15 = *v14; /*0x1000f9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, (float)(v22 - 190.0) + 8.0, v6 - 8.0); /*0x1000fc*/
  (*(void (__fastcall **)(__int64 *, __int64))(v15 + 184))(v14, v16); /*0x100108*/
  v17 = *(__int64 **)(a1 + 720); /*0x100127*/
  v18 = *v17; /*0x100142*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, (float)(v22 + 190.0) - 16.0, v6 - 16.0); /*0x100145*/
  (*(void (__fastcall **)(__int64 *, __int64))(v18 + 184))(v17, v19); /*0x100151*/
  cocos2d::CCPoint::CCPoint( /*0x100190*/
    (cocos2d::CCPoint *)&v26,
    v22,
    (float)((float)((float)(v23 - (float)(a2 * 0.5)) + 12.0) + (float)(v6 - 90.0)) * 0.5);
  return cocos2d::CCPoint::operator=(a1 + 732, v20); /*0x1001a6*/
}

// [2/8] Address: 0x5ea9d0
// Method: BrowseSmartTemplateLayer::~BrowseSmartTemplateLayer
__int64 __fastcall BrowseSmartTemplateLayer__dtor_BrowseSmartTemplateLayer(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx

  *a1 = &BrowseSmartTemplateLayer::`vftable'; /*0x5ea9e0*/
  a1[40] = &BrowseSmartTemplateLayer::`vftable'; /*0x5ea9ea*/
  a1[41] = &BrowseSmartTemplateLayer::`vftable'; /*0x5ea9f8*/
  a1[42] = &BrowseSmartTemplateLayer::`vftable'; /*0x5eaa06*/
  a1[43] = &BrowseSmartTemplateLayer::`vftable'; /*0x5eaa14*/
  a1[44] = &BrowseSmartTemplateLayer::`vftable'; /*0x5eaa22*/
  a1[51] = &BrowseSmartTemplateLayer::`vftable'; /*0x5eaa30*/
  a1[54] = &BrowseSmartTemplateLayer::`vftable'; /*0x5eaa3e*/
  a1[68] = &BrowseSmartTemplateLayer::`vftable'; /*0x5eaa4c*/
  v2 = (cocos2d::CCObject *)a1[83]; /*0x5eaa53*/
  if ( v2 ) /*0x5eaa5d*/
    cocos2d::CCObject::release(v2); /*0x5eaa5f*/
  v3 = (cocos2d::CCObject *)a1[84]; /*0x5eaa65*/
  if ( v3 ) /*0x5eaa6f*/
    cocos2d::CCObject::release(v3); /*0x5eaa71*/
  v4 = (cocos2d::CCObject *)a1[88]; /*0x5eaa77*/
  if ( v4 ) /*0x5eaa81*/
    cocos2d::CCObject::release(v4); /*0x5eaa83*/
  return StarInfoPopup__dtor_StarInfoPopup(a1); /*0x5eaa8c*/
}

// [3/8] Address: 0x5ebbf0
// Method: BrowseSmartTemplateLayer::goToPage
__int64 __fastcall BrowseSmartTemplateLayer_goToPage(__int64 a1, int a2)
{
  cocos2d::CCArray *v3; // rcx
  unsigned int i; // ebp
  bool v5; // r15
  cocos2d::CCArray *v6; // r14
  unsigned int j; // esi
  struct cocos2d::CCObject *v8; // rdi

  *(_DWORD *)(a1 + 680) = a2; /*0x5ebbf6*/
  v3 = *(cocos2d::CCArray **)(a1 + 672); /*0x5ebbff*/
  if ( a2 >= 0 ) /*0x5ebc0d*/
  {
    if ( *(_DWORD *)(a1 + 680) > cocos2d::CCArray::count(v3) - 1 ) /*0x5ebc2d*/
      *(_DWORD *)(a1 + 680) = 0; /*0x5ebc2f*/
  }
  else
  {
    *(_DWORD *)(a1 + 680) = cocos2d::CCArray::count(v3) - 1; /*0x5ebc17*/
  }
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 672)); ++i ) /*0x5ebc42*/
  {
    v5 = *(_DWORD *)(a1 + 680) == i; /*0x5ebc7f*/
    v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 672), i); /*0x5ebc8c*/
    for ( j = 0; j < cocos2d::CCArray::count(v6); ++j ) /*0x5ebc91*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v6, j); /*0x5ebcaf*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, bool))(*(_QWORD *)v8 + 336LL))(v8, v5); /*0x5ebcbf*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, bool))(*(_QWORD *)v8 + 936LL))(v8, v5); /*0x5ebcd3*/
    }
  }
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 672)) > 1 ) /*0x5ebd25*/
    return sub_5EB980(a1); /*0x5ebd59*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), 0); /*0x5ebd33*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), 0); /*0x5ebd54*/
}

// [4/8] Address: 0x5ebd60
// Method: BrowseSmartTemplateLayer::createPrefab
// Hidden C++ exception states: #wind=3
double __fastcall BrowseSmartTemplateLayer_createPrefab(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbp
  __int64 v7; // rcx
  void *v9; // [rsp+28h] [rbp-50h]
  _BYTE v10[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]

  v11 = a2; /*0x5ebd84*/
  v6 = sub_3E4F0(v10, a2); /*0x5ebd9d*/
  v7 = qword_905FD0; /*0x5ebda0*/
  if ( !qword_905FD0 ) /*0x5ebdaa*/
  {
    v9 = operator new(0x6E8u); /*0x5ebdb6*/
    qword_905FD0 = sub_2723A0(v9); /*0x5ebdc4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5ebdd1*/
    v7 = qword_905FD0; /*0x5ebdd5*/
  }
  sub_1B47E0(*(_QWORD *)(*(_QWORD *)(v7 + 568) + 14968LL), *(_QWORD *)(a1 + 664), v6, a3, v10, v9); /*0x5ebdf7*/
  return sub_3C310(a2); /*0x5ebe05*/
}

// [5/8] Address: 0x5ebe30
// Method: BrowseSmartTemplateLayer::onTemplateObject
// Hidden C++ exception states: #wind=2
__int64 __fastcall BrowseSmartTemplateLayer_onTemplateObject(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  cocos2d::CCArray *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  cocos2d::CCTouchDispatcher *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rbx
  char *v11; // rdi
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  char v20[16]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  __int64 v25; // [rsp+68h] [rbp-8h]
  __int64 v26; // [rsp+A0h] [rbp+30h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2) + 320; /*0x5ebe52*/
  v26 = sub_3E4F0(&v23, v3); /*0x5ebe68*/
  v4 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(*(_QWORD *)(a1 + 664) + 56LL), v26); /*0x5ebe80*/
  sub_3C310(v26); /*0x5ebe86*/
  if ( v4 && cocos2d::CCArray::count(v4) ) /*0x5ebe97*/
  {
    v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x5ebea5*/
    v7 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 144LL))(v6); /*0x5ebeb8*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v7, (struct cocos2d::CCObject *)a1); /*0x5ebec0*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x5ebece*/
    LOBYTE(v8) = 1; /*0x5ebed7*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v8); /*0x5ebedc*/
    v9 = sub_3E4F0(&v23, v3); /*0x5ebeee*/
    v10 = *(_QWORD *)(a1 + 664); /*0x5ebef5*/
    v11 = (char *)operator new(0x2F0u); /*0x5ebf06*/
    sub_5E7270(v11); /*0x5ebf10*/
    *(_QWORD *)v11 = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf1c*/
    *((_QWORD *)v11 + 40) = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf26*/
    *((_QWORD *)v11 + 41) = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf34*/
    *((_QWORD *)v11 + 42) = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf42*/
    *((_QWORD *)v11 + 43) = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf50*/
    *((_QWORD *)v11 + 44) = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf5e*/
    *((_QWORD *)v11 + 51) = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf6c*/
    *((_QWORD *)v11 + 54) = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf7a*/
    *((_QWORD *)v11 + 68) = &BrowseSmartKeyLayer::`vftable'; /*0x5ebf88*/
    *(_OWORD *)(v11 + 712) = 0; /*0x5ebf92*/
    *((_QWORD *)v11 + 91) = 0; /*0x5ebf9c*/
    *((_QWORD *)v11 + 92) = 15; /*0x5ebfa3*/
    v11[712] = 0; /*0x5ebfae*/
    *((_DWORD *)v11 + 186) = 0; /*0x5ebfb5*/
    v12 = sub_3E4F0(v20, v9); /*0x5ebfc3*/
    if ( (unsigned __int8)sub_5EC1E0(v11, v10, v12) ) /*0x5ebfd1*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v11); /*0x5ebfdd*/
    }
    else
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1); /*0x5ebfed*/
      v11 = 0; /*0x5ebff0*/
    }
    sub_3C310(v9); /*0x5ebff6*/
    *((_DWORD *)v11 + 186) = *(_DWORD *)(a1 + 680); /*0x5ec001*/
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 1064LL); /*0x5ec00a*/
    if ( v13 == FLAlertLayer_show ) /*0x5ec01e*/
      return FLAlertLayer_show((__int64)v11); /*0x5ec020*/
    else
      return v13((__int64)v11); /*0x5ec02a*/
  }
  else
  {
    v15 = sub_3E4F0(&v23, v3); /*0x5ec038*/
    BrowseSmartTemplateLayer_createPrefab(a1, v15, 0); /*0x5ec046*/
    v23 = 0; /*0x5ec056*/
    v24 = 0; /*0x5ec05d*/
    v25 = 15; /*0x5ec061*/
    LOBYTE(v23) = 0; /*0x5ec069*/
    v21 = 15; /*0x5ec06d*/
    v22 = 15; /*0x5ec075*/
    strcpy(v20, "Added to editor"); /*0x5ec085*/
    v16 = *(_QWORD *)a1; /*0x5ec0ac*/
    v19 = sub_3A4CA0(v20, v17, v18, 150, &v23); /*0x5ec0d2*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 456))(a1, v19, 100); /*0x5ec0e3*/
  }
}

// [6/8] Address: 0x5ec100
// Method: BrowseSmartTemplateLayer::onClick
__int64 __fastcall BrowseSmartTemplateLayer_onClick(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x5ec112*/
  if ( !(_DWORD)result ) /*0x5ec115*/
    return BrowseSmartTemplateLayer_goToPage(a1, *(_DWORD *)(a1 + 680) - 1); /*0x5ec141*/
  if ( (_DWORD)result == 1 ) /*0x5ec11a*/
    return BrowseSmartTemplateLayer_goToPage(a1, *(_DWORD *)(a1 + 680) + 1); /*0x5ec12c*/
  return result; /*0x5ec127*/
}

// [7/8] Address: 0x5ec150
// Method: BrowseSmartTemplateLayer::keyBackClicked
__int64 __fastcall BrowseSmartTemplateLayer_keyBackClicked(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 1080LL))(a1 - 336, 0);
}

// [8/8] Address: 0x5ec170
// Method: BrowseSmartTemplateLayer::onBack
__int64 __fastcall BrowseSmartTemplateLayer_onBack(__int64 *a1)
{
  cocos2d::CCObject *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  cocos2d::CCTouchDispatcher *v5; // rax
  __int64 v6; // rdx

  v2 = SetupSmartTemplateLayer_create(a1[83]); /*0x5ec180*/
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v2 + 1064LL))(v2); /*0x5ec18b*/
  v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x5ec191*/
  v5 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4); /*0x5ec19d*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v5, (struct cocos2d::CCObject *)a1); /*0x5ec1a9*/
  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 992))(a1, 0); /*0x5ec1b7*/
  LOBYTE(v6) = 1; /*0x5ec1c0*/
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 520))(a1, v6);
}
