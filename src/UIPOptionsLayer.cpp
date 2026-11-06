#include <Geode/binding/UIPOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x82d80
// Method: UIPOptionsLayer::ccTouchCancelled
__int64 __fastcall UIPOptionsLayer_ccTouchCancelled(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
}

// [2/11] Address: 0x132890
// Method: UIPOptionsLayer::registerWithTouchDispatcher
void __fastcall UIPOptionsLayer_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x13289d*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x1328a5*/
  if ( !a1 ) /*0x1328af*/
    v3 = 0; /*0x1328af*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x1328c0*/
  cocos2d::CCTouchDispatcher::addTargetedDelegate(v4, v3, 0, 1); /*0x1328d9*/
}

// [4/11] Address: 0x3a8460
// Method: UIPOptionsLayer::onClose
// Hidden C++ exception states: #wind=3
__int64 __fastcall UIPOptionsLayer_onClose(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h]
  void *v8; // [rsp+30h] [rbp+8h]

  v2 = qword_905FD0; /*0x3a8475*/
  if ( !qword_905FD0 ) /*0x3a847f*/
  {
    v7 = operator new(0x6E8u); /*0x3a848b*/
    qword_905FD0 = sub_2723A0(v7); /*0x3a8499*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3a84aa*/
    v2 = qword_905FD0; /*0x3a84ac*/
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1008) + 200LL))(*(_QWORD *)(a1 + 1008)); /*0x3a84bd*/
  cocos2d::CCPoint::operator=(v2 + 1752, v3); /*0x3a84cd*/
  v4 = qword_905FD0; /*0x3a84d3*/
  if ( !qword_905FD0 ) /*0x3a84dd*/
  {
    v8 = operator new(0x6E8u); /*0x3a84e9*/
    qword_905FD0 = sub_2723A0(v8); /*0x3a84f7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3a8508*/
    v4 = qword_905FD0; /*0x3a850a*/
  }
  v5 = *(_QWORD *)(v4 + 560); /*0x3a8511*/
  if ( v5 ) /*0x3a851b*/
    UILayer_updateCheckState(*(_QWORD *)(v5 + 13952)); /*0x3a8524*/
  return SetupTriggerPopup_onClose(a1); /*0x3a852f*/
}

// [5/11] Address: 0x3a8550
// Method: UIPOptionsLayer::onReset
// Hidden C++ exception states: #wind=2
__int64 __fastcall UIPOptionsLayer_onReset(_QWORD **a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  cocos2d::CCDirector *v5; // rax
  float v6; // xmm0_4
  __int64 v7; // rax
  __int64 v8; // rdx
  float v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h]
  char v12; // [rsp+48h] [rbp+20h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x3a855d*/
  cocos2d::CCDirector::getWinSize(v2, &v10); /*0x3a856b*/
  v4 = qword_905FD0; /*0x3a8571*/
  if ( !qword_905FD0 ) /*0x3a857b*/
  {
    v11 = operator new(0x6E8u); /*0x3a8587*/
    qword_905FD0 = sub_2723A0(v11); /*0x3a8595*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3a85a6*/
    v4 = qword_905FD0; /*0x3a85a8*/
  }
  v5 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v3); /*0x3a85af*/
  v6 = cocos2d::CCDirector::getScreenBottom(v5) + 40.0; /*0x3a85be*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, v10 * 0.5, v6); /*0x3a85dc*/
  cocos2d::CCPoint::operator=(v4 + 1752, v7); /*0x3a85ec*/
  v8 = qword_905FD0; /*0x3a85f2*/
  if ( !qword_905FD0 ) /*0x3a85fc*/
  {
    v11 = operator new(0x6E8u); /*0x3a8608*/
    qword_905FD0 = sub_2723A0(v11); /*0x3a8616*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3a8627*/
    v8 = qword_905FD0; /*0x3a8629*/
  }
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1[126] + 184LL))(a1[126], v8 + 1752); /*0x3a8641*/
  return ((__int64 (__fastcall *)(_QWORD **, __int64))(*a1)[145])(a1, 4294967267LL); /*0x3a8660*/
}

// [6/11] Address: 0x3a8670
// Method: UIPOptionsLayer::valueDidChange
// Hidden C++ exception states: #wind=1
void __fastcall UIPOptionsLayer_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  cocos2d::CCArray *v6; // rax
  cocos2d::CCArray *v7; // rax
  struct cocos2d::CCObject *v8; // rax
  cocos2d::CCArray *v9; // rax
  void *v10; // [rsp+58h] [rbp+20h]

  if ( a2 == -29 ) /*0x3a8673*/
  {
    v4 = qword_905FD0; /*0x3a8693*/
    if ( !qword_905FD0 ) /*0x3a869d*/
    {
      v10 = operator new(0x6E8u); /*0x3a86a9*/
      qword_905FD0 = sub_2723A0(v10); /*0x3a86b7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3a86c8*/
      v4 = qword_905FD0; /*0x3a86ca*/
    }
    *(float *)(v4 + 1760) = a3; /*0x3a86d1*/
    v5 = 0; /*0x3a86e1*/
    v6 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1008) + 480LL))(*(_QWORD *)(a1 + 1008)); /*0x3a86ed*/
    if ( cocos2d::CCArray::count(v6) ) /*0x3a86f6*/
    {
      do /*0x3a8759*/
      {
        v7 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1008) + 480LL))(*(_QWORD *)(a1 + 1008)); /*0x3a871a*/
        v8 = cocos2d::CCArray::objectAtIndex(v7, v5); /*0x3a8725*/
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v8 + 40) + 40LL))( /*0x3a8739*/
          (__int64)v8 + 320,
          (unsigned __int8)(int)(float)(a3 * 255.0));
        ++v5; /*0x3a873c*/
        v9 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1008) + 480LL))(*(_QWORD *)(a1 + 1008)); /*0x3a8748*/
      }
      while ( v5 < cocos2d::CCArray::count(v9) ); /*0x3a8759*/
    }
  }
}

// [7/11] Address: 0x3a8770
// Method: UIPOptionsLayer::getValue
// Hidden C++ exception states: #wind=1
float __fastcall UIPOptionsLayer_getValue(__int64 a1, int a2)
{
  __int64 v3; // rax
  void *v4; // [rsp+40h] [rbp+18h]

  if ( a2 != -29 ) /*0x3a8777*/
    return 0.0; /*0x3a8779*/
  v3 = qword_905FD0; /*0x3a8781*/
  if ( !qword_905FD0 ) /*0x3a878b*/
  {
    v4 = operator new(0x6E8u); /*0x3a8797*/
    qword_905FD0 = sub_2723A0(v4); /*0x3a87a5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3a87b6*/
    v3 = qword_905FD0; /*0x3a87b8*/
  }
  return *(float *)(v3 + 1760); /*0x3a877c*/
}

// [8/11] Address: 0x3a87d0
// Method: UIPOptionsLayer::ccTouchBegan
char __fastcall UIPOptionsLayer_ccTouchBegan(__int64 a1, __int64 a2)
{
  const struct cocos2d::CCPoint *v4; // rax
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  float v10; // [rsp+78h] [rbp+20h] BYREF
  float v11; // [rsp+7Ch] [rbp+24h]

  cocos2d::CCTouch::getLocation(a2, v7); /*0x3a87e8*/
  cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v9, v7); /*0x3a87ff*/
  if ( *(int *)(a1 + 680) < 0 ) /*0x3a880c*/
  {
    v4 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 200LL))(*(_QWORD *)(a1 + 688)); /*0x3a881c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v10, v4); /*0x3a882a*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v8, v10 - 70.0, v11 - 25.0, 140.0, 50.0); /*0x3a8867*/
    if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v8, (const struct cocos2d::CCPoint *)&v9) ) /*0x3a8877*/
    {
      *(_DWORD *)(a1 + 680) = *(_DWORD *)(a2 + 56); /*0x3a8890*/
      cocos2d::CCPoint::operator=(a1 + 696, &v9); /*0x3a8896*/
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 200LL))(*(_QWORD *)(a1 + 688)); /*0x3a88a6*/
      cocos2d::CCPoint::operator-(&v9, &v10, v5); /*0x3a88b9*/
      cocos2d::CCPoint::operator=(a1 + 704, &v10); /*0x3a88cb*/
    }
  }
  return 1; /*0x3a88d1*/
}

// [9/11] Address: 0x3a88e0
// Method: UIPOptionsLayer::ccTouchMoved
__int64 __fastcall UIPOptionsLayer_ccTouchMoved(__int64 a1, __int64 a2)
{
  const struct cocos2d::CCPoint *v4; // r8
  __int64 result; // rax
  float v6; // xmm0_4
  const struct cocos2d::CCPoint *v7; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  cocos2d::CCTouch::getLocation(a2, &v10); /*0x3a88f8*/
  cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v9, &v10); /*0x3a890f*/
  result = *(unsigned int *)(a2 + 56); /*0x3a8915*/
  if ( *(_DWORD *)(a1 + 680) == (_DWORD)result ) /*0x3a891e*/
  {
    v6 = cocos2d::ccpDistance((cocos2d *)&v9, (const struct cocos2d::CCPoint *)(a1 + 696), v4); /*0x3a892f*/
    v7 = (const struct cocos2d::CCPoint *)&v9; /*0x3a893c*/
    if ( v6 <= 1.0 ) /*0x3a8946*/
      v7 = (const struct cocos2d::CCPoint *)(a1 + 696); /*0x3a8946*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v7); /*0x3a894a*/
    cocos2d::CCPoint::operator-(&v11, v8, a1 + 704); /*0x3a8961*/
    return (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 688) + 184LL))(*(_QWORD *)(a1 + 688), v8); /*0x3a8976*/
  }
  return result; /*0x3a897c*/
}

// [10/11] Address: 0x3a8990
// Method: UIPOptionsLayer::ccTouchEnded
__int64 __fastcall UIPOptionsLayer_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 56); /*0x3a8990*/
  if ( *(_DWORD *)(a1 + 680) == (_DWORD)result ) /*0x3a8999*/
    *(_DWORD *)(a1 + 680) = -1; /*0x3a899b*/
  return result; /*0x3a89a5*/
}

// [11/11] Address: 0x605ea0
// Method: UIPOptionsLayer::~UIPOptionsLayer
__int64 __fastcall UIPOptionsLayer__dtor_UIPOptionsLayer(cocos2d::CCNode *a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  cocos2d::CCObject *v12; // rcx
  cocos2d::CCObject *v13; // rcx
  cocos2d::CCObject *v14; // rcx
  cocos2d::CCObject *v15; // rcx
  cocos2d::CCObject *v16; // rcx
  cocos2d::CCObject *v17; // rcx
  cocos2d::CCObject *v18; // rcx
  cocos2d::CCObject *v19; // rcx
  cocos2d::CCObject *v20; // rcx
  cocos2d::CCObject *v21; // rcx

  *(_QWORD *)a1 = &SetupTriggerPopup::`vftable'; /*0x605eb0*/
  *((_QWORD *)a1 + 40) = &SetupTriggerPopup::`vftable'; /*0x605eba*/
  *((_QWORD *)a1 + 41) = &SetupTriggerPopup::`vftable'; /*0x605ec8*/
  *((_QWORD *)a1 + 42) = &SetupTriggerPopup::`vftable'; /*0x605ed6*/
  *((_QWORD *)a1 + 43) = &SetupTriggerPopup::`vftable'; /*0x605ee4*/
  *((_QWORD *)a1 + 44) = &SetupTriggerPopup::`vftable'; /*0x605ef2*/
  *((_QWORD *)a1 + 51) = &SetupTriggerPopup::`vftable'; /*0x605f00*/
  *((_QWORD *)a1 + 54) = &SetupTriggerPopup::`vftable'; /*0x605f0e*/
  *((_QWORD *)a1 + 68) = &SetupTriggerPopup::`vftable'; /*0x605f1c*/
  *((_QWORD *)a1 + 83) = &SetupTriggerPopup::`vftable'; /*0x605f2a*/
  *((_QWORD *)a1 + 84) = &SetupTriggerPopup::`vftable'; /*0x605f38*/
  cocos2d::CCNode::removeAllChildrenWithCleanup(a1, 1); /*0x605f41*/
  v2 = (cocos2d::CCObject *)*((_QWORD *)a1 + 85); /*0x605f47*/
  if ( v2 ) /*0x605f51*/
    cocos2d::CCObject::release(v2); /*0x605f53*/
  v3 = (cocos2d::CCObject *)*((_QWORD *)a1 + 86); /*0x605f59*/
  if ( v3 ) /*0x605f63*/
    cocos2d::CCObject::release(v3); /*0x605f65*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)a1 + 90); /*0x605f6b*/
  if ( v4 ) /*0x605f75*/
    cocos2d::CCObject::release(v4); /*0x605f77*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)a1 + 95); /*0x605f7d*/
  if ( v5 ) /*0x605f87*/
    cocos2d::CCObject::release(v5); /*0x605f89*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)a1 + 96); /*0x605f8f*/
  if ( v6 ) /*0x605f99*/
    cocos2d::CCObject::release(v6); /*0x605f9b*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)a1 + 94); /*0x605fa1*/
  if ( v7 ) /*0x605fab*/
    cocos2d::CCObject::release(v7); /*0x605fad*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)a1 + 103); /*0x605fb3*/
  if ( v8 ) /*0x605fbd*/
    cocos2d::CCObject::release(v8); /*0x605fbf*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)a1 + 104); /*0x605fc5*/
  if ( v9 ) /*0x605fcf*/
    cocos2d::CCObject::release(v9); /*0x605fd1*/
  v10 = (cocos2d::CCObject *)*((_QWORD *)a1 + 105); /*0x605fd7*/
  if ( v10 ) /*0x605fe1*/
    cocos2d::CCObject::release(v10); /*0x605fe3*/
  v11 = (cocos2d::CCObject *)*((_QWORD *)a1 + 106); /*0x605fe9*/
  if ( v11 ) /*0x605ff3*/
    cocos2d::CCObject::release(v11); /*0x605ff5*/
  v12 = (cocos2d::CCObject *)*((_QWORD *)a1 + 112); /*0x605ffb*/
  if ( v12 ) /*0x606005*/
    cocos2d::CCObject::release(v12); /*0x606007*/
  v13 = (cocos2d::CCObject *)*((_QWORD *)a1 + 114); /*0x60600d*/
  if ( v13 ) /*0x606017*/
    cocos2d::CCObject::release(v13); /*0x606019*/
  v14 = (cocos2d::CCObject *)*((_QWORD *)a1 + 116); /*0x60601f*/
  if ( v14 ) /*0x606029*/
    cocos2d::CCObject::release(v14); /*0x60602b*/
  v15 = (cocos2d::CCObject *)*((_QWORD *)a1 + 117); /*0x606031*/
  if ( v15 ) /*0x60603b*/
    cocos2d::CCObject::release(v15); /*0x60603d*/
  v16 = (cocos2d::CCObject *)*((_QWORD *)a1 + 115); /*0x606043*/
  if ( v16 ) /*0x60604d*/
    cocos2d::CCObject::release(v16); /*0x60604f*/
  v17 = (cocos2d::CCObject *)*((_QWORD *)a1 + 118); /*0x606055*/
  if ( v17 ) /*0x60605f*/
    cocos2d::CCObject::release(v17); /*0x606061*/
  v18 = (cocos2d::CCObject *)*((_QWORD *)a1 + 119); /*0x606067*/
  if ( v18 ) /*0x606071*/
    cocos2d::CCObject::release(v18); /*0x606073*/
  v19 = (cocos2d::CCObject *)*((_QWORD *)a1 + 97); /*0x606079*/
  if ( v19 ) /*0x606083*/
    cocos2d::CCObject::release(v19); /*0x606085*/
  v20 = (cocos2d::CCObject *)*((_QWORD *)a1 + 98); /*0x60608b*/
  if ( v20 ) /*0x606095*/
    cocos2d::CCObject::release(v20); /*0x606097*/
  v21 = (cocos2d::CCObject *)*((_QWORD *)a1 + 123); /*0x60609d*/
  if ( v21 ) /*0x6060a7*/
    cocos2d::CCObject::release(v21); /*0x6060a9*/
  sub_7F2E0((char *)a1 + 872); /*0x6060b6*/
  sub_7F2E0((char *)a1 + 856); /*0x6060c2*/
  return StarInfoPopup__dtor_StarInfoPopup(a1); /*0x6060ca*/
}

// Address: 0x3a7e40
// Method: UIPOptionsLayer::init
// Hidden C++ exception states: #wind=5
char __fastcall UIPOptionsLayer_init(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  cocos2d::CCObject *v14; // rbx
  cocos2d::CCObject *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  cocos2d::CCObject *v20; // rbx
  cocos2d::CCObject *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  float v29; // xmm6_4
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rsi
  struct cocos2d::CCSprite *v32; // rdi
  __int64 v33; // rcx
  cocos2d::CCArray *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  cocos2d::CCDirector *v37; // rax
  float v38; // xmm0_4
  __int64 v39; // rax
  __int64 v40; // rax
  _BYTE v41[8]; // [rsp+80h] [rbp-39h] BYREF
  __int128 *v42; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v43[8]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v44; // [rsp+98h] [rbp-21h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-11h]
  __int64 v46; // [rsp+B0h] [rbp-9h]
  void *v47; // [rsp+128h] [rbp+6Fh] BYREF
  float v48; // [rsp+130h] [rbp+77h] BYREF
  float v49; // [rsp+134h] [rbp+7Bh]
  float v50; // [rsp+138h] [rbp+7Fh] BYREF
  float v51; // [rsp+13Ch] [rbp+83h]

  result = sub_6060E0(a1, 0, 0, a4, 1133248512, 1, 0);
  if ( result )
  {
    *(_BYTE *)(a1 + 744) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1);
    LOWORD(v47) = 17459;
    BYTE2(v47) = -103;
    (**(void (__fastcall ***)(__int64, void **))(a1 + 408))(a1 + 408, &v47);
    LOBYTE(v6) = -1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, v6);
    *(_BYTE *)(a1 + 596) = 1;
    v8 = cocos2d::CCDirector::sharedDirector(v7);
    cocos2d::CCDirector::getWinSize(v8, &v48);
    v13 = cocos2d::CCMenu::create(v10, v9, v11, v12);
    *(_QWORD *)(a1 + 552) = v13;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v13, 10);
    v47 = operator new(0x2C8u);
    v14 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v47);
    if ( v14 )
    {
      if ( ButtonSprite_init(
             (__int64)v14,
             (__int64)"OK",
             40,
             0,
             1061997773,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_01.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v14);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1);
        LODWORD(v14) = 0;
      }
    }
    v15 = CCMenuItemSpriteExtra_create((int)v14, 0, a1, (__int64)sub_9C4B8);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v15);
    v16 = *(_QWORD *)v15;
    v17 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, (float)(v48 * 0.5) - 40.0, v49 - 30.0);
    cocos2d::CCNode::convertToNodeSpace(v17, &v42, v18);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v16 + 184))(v15, v19);
    v47 = operator new(0x2C8u);
    v20 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v47);
    if ( v20 )
    {
      if ( ButtonSprite_init(
             (__int64)v20,
             (__int64)"Reset",
             40,
             0,
             1061997773,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_05.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v20);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v20 + 8LL))(v20, 1);
        LODWORD(v20) = 0;
      }
    }
    v21 = CCMenuItemSpriteExtra_create((int)v20, 0, a1, (__int64)UIPOptionsLayer_onReset);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v21);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, 80.0, 0.0);
    v23 = v22;
    v24 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v15 + 200LL))(v15);
    cocos2d::CCPoint::operator+(v24, &v47, v23);
    (*(void (__fastcall **)(cocos2d::CCObject *, void **))(*(_QWORD *)v21 + 184LL))(v21, &v47);
    sub_606590(a1);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v41, v48 * 0.5, v49 - 70.0);
    v42 = &v44;
    v45 = 8;
    v46 = 15;
    v44 = 0x3A7974696361704FuLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v43, 0.0, -75.0);
    cocos2d::CCPoint::operator+(v41, &v47, v25);
    sub_6088F0(a1, -29, (unsigned int)&v44, (unsigned int)&v47, 1061997773, 0, 1, 4, 0, 0, 1065353216, 0, 0, 1, 2, 0);
    v28 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v42 = (__int128 *)operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v42);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v28 = qword_905FD0;
    }
    v29 = *(float *)(v28 + 1760) * 255.0;
    v30 = cocos2d::CCNode::create(v27, v26);
    *(_QWORD *)(a1 + 1008) = v30;
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v30 + 312LL))(v30, &unk_904CA8);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 1008),
      9);
    v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkpointBtn_001.png");
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v31 + 40) + 40LL))(
      (__int64)v31 + 320,
      (unsigned __int8)(int)v29);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 1008) + 464LL))(
      *(_QWORD *)(a1 + 1008),
      v31);
    v32 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_removeCheckBtn_001.png");
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v32 + 40) + 40LL))(
      (__int64)v32 + 320,
      (unsigned __int8)(int)v29);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 1008) + 464LL))(
      *(_QWORD *)(a1 + 1008),
      v32);
    v34 = (cocos2d::CCArray *)cocos2d::CCArray::create(v33);
    cocos2d::CCArray::addObject(v34, v31);
    cocos2d::CCArray::addObject(v34, v32);
    v35 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v47 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v47);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v35 = qword_905FD0;
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, (const struct cocos2d::CCPoint *)(v35 + 1752));
    if ( v50 == 0.0 && v51 == 0.0 )
    {
      v37 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v36);
      v38 = cocos2d::CCDirector::getScreenBottom(v37) + 40.0;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, v48 * 0.5, v38);
      cocos2d::CCPoint::operator=(&v50, v39);
    }
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 1008) + 184LL))(*(_QWORD *)(a1 + 1008), &v50);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, (const struct cocos2d::CCPoint *)&unk_904C90);
    GameToolbox_alignItemsHorisontally((__int64)v34, 10.0, v40, 0);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1136LL))(a1);
    *(_BYTE *)(a1 + 744) = 0;
    return 1;
  }
  return result;
}
