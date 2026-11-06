#include <Geode/binding/TableView.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0x40f30
// Method: TableView::registerWithTouchDispatcher
void __fastcall TableView_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x40f3d*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x40f45*/
  if ( !a1 ) /*0x40f4f*/
    v3 = 0; /*0x40f4f*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x40f60*/
  cocos2d::CCTouchDispatcher::addPrioTargetedDelegate(v4, v3, -138, 0); /*0x40f7c*/
}

// [2/14] Address: 0x5ab80
// Method: TableView::onEnter
// attributes: thunk
void __fastcall TableView_onEnter(cocos2d::CCLayer *this)
{
  cocos2d::CCLayer::onEnter(this); /*0x5ab80*/
}

// [3/14] Address: 0x86790
// Method: TableView::isDuplicateInVisibleCellArray
struct cocos2d::CCObject *__fastcall TableView_isDuplicateInVisibleCellArray(__int64 a1, __int64 a2)
{
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx
  struct cocos2d::CCObject *result; // rax

  v4 = *(cocos2d::CCArray **)(a1 + 584); /*0x867a5*/
  if ( !v4 ) /*0x867af*/
    return 0; /*0x867af*/
  if ( !cocos2d::CCArray::count(v4) ) /*0x867b1*/
    return 0; /*0x867b1*/
  v5 = 0; /*0x867c2*/
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584)) ) /*0x867c4*/
    return 0; /*0x86808*/
  while ( 1 ) /*0x867d9*/
  {
    result = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 584), v5); /*0x867d9*/
    if ( *((_DWORD *)result + 121) == *(_DWORD *)(a2 + 60) && *((_DWORD *)result + 120) == *(_DWORD *)(a2 + 56) ) /*0x867f3*/
      break; /*0x867f3*/
    if ( ++v5 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584)) ) /*0x86806*/
      return 0; /*0x86806*/
  }
  return result; /*0x8680a*/
}

// [4/14] Address: 0x86820
// Method: TableView::isDuplicateIndexPath
char __fastcall TableView_isDuplicateIndexPath(__int64 a1, __int64 a2)
{
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx
  struct cocos2d::CCObject *v6; // rax

  v4 = *(cocos2d::CCArray **)(a1 + 600); /*0x86835*/
  if ( !v4 ) /*0x8683f*/
    return 0; /*0x8683f*/
  if ( !cocos2d::CCArray::count(v4) ) /*0x86841*/
    return 0; /*0x86841*/
  v5 = 0; /*0x86852*/
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)) ) /*0x86854*/
    return 0; /*0x86892*/
  while ( 1 ) /*0x86869*/
  {
    v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), v5); /*0x86869*/
    if ( *((_DWORD *)v6 + 15) == *(_DWORD *)(a2 + 60) && *((_DWORD *)v6 + 14) == *(_DWORD *)(a2 + 56) ) /*0x8687d*/
      break; /*0x8687d*/
    if ( ++v5 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)) ) /*0x86890*/
      return 0; /*0x86890*/
  }
  return 1; /*0x86894*/
}

// [5/14] Address: 0x86b70
// Method: TableView::reloadData
// Hidden C++ exception states: #wind=1
int __fastcall TableView_reloadData(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rcx
  struct cocos2d::CCObject *v4; // r13
  unsigned int v5; // edi
  signed int v6; // ebp
  signed int j; // r12d
  struct cocos2d::CCObject *v8; // rax
  struct cocos2d::CCObject *v9; // rbx
  __int64 v10; // rcx
  cocos2d::CCObject *v11; // r15
  double v12; // xmm0_8
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float *v16; // rax
  __int64 v17; // rax
  struct cocos2d::CCObject *v18; // r14
  const struct cocos2d::CCSize *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  signed int k; // ebp
  struct cocos2d::CCObject *v24; // rdi
  float *v25; // rax
  __int64 v26; // rax
  float v27; // xmm6_4
  float *v28; // rax
  __int64 v29; // rax
  _BYTE *v30; // rcx
  __int64 v31; // rbx
  float v32; // xmm6_4
  float *v33; // rax
  struct cocos2d::CCObject *v34; // rax
  struct cocos2d::CCObject *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rbx
  float *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  _BYTE v46[4]; // [rsp+20h] [rbp-F8h] BYREF
  float v47; // [rsp+24h] [rbp-F4h]
  _BYTE v48[4]; // [rsp+28h] [rbp-F0h] BYREF
  float v49; // [rsp+2Ch] [rbp-ECh]
  float v50[2]; // [rsp+30h] [rbp-E8h] BYREF
  cocos2d::CCObject *v51; // [rsp+38h] [rbp-E0h]
  char v52[8]; // [rsp+40h] [rbp-D8h] BYREF
  char v53[8]; // [rsp+48h] [rbp-D0h] BYREF
  char v54[8]; // [rsp+50h] [rbp-C8h] BYREF
  char v55[8]; // [rsp+58h] [rbp-C0h] BYREF
  char v56[8]; // [rsp+60h] [rbp-B8h] BYREF
  char v57[8]; // [rsp+68h] [rbp-B0h] BYREF
  char v58[8]; // [rsp+70h] [rbp-A8h] BYREF
  char v59[96]; // [rsp+78h] [rbp-A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+0h] BYREF
  unsigned int i; // [rsp+120h] [rbp+8h]
  signed int v62; // [rsp+128h] [rbp+10h]
  int v63; // [rsp+130h] [rbp+18h]
  int v64; // [rsp+138h] [rbp+20h]

  v1 = &retaddr; /*0x86b70*/
  if ( *(_QWORD *)(a1 + 608) ) /*0x86ba6*/
  {
    v3 = *(_QWORD *)(a1 + 616); /*0x86bb4*/
    if ( v3 ) /*0x86bbe*/
    {
      v4 = 0; /*0x86bc4*/
      LODWORD(v1) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, a1); /*0x86bcd*/
      v64 = (int)v1; /*0x86bd0*/
      v5 = 0; /*0x86bd7*/
      for ( i = 0; (int)v5 < v64; i = v5 ) /*0x86be2*/
      {
        v6 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 616))(*(_QWORD *)(a1 + 616), v5, a1); /*0x86c14*/
        v62 = v6; /*0x86c16*/
        LODWORD(v1) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584)); /*0x86c24*/
        v63 = (int)v1; /*0x86c2a*/
        for ( j = 0; j < v6; LODWORD(v1) = v63 ) /*0x86c36*/
        {
          if ( j < (int)v1 /*0x86c5b*/
            && (v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 584), j), (v9 = v8) != 0) )
          {
            v10 = *(_QWORD *)(a1 + 608); /*0x86c5d*/
            if ( v10 ) /*0x86c67*/
              (*(void (__fastcall **)(__int64, __int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v10 + 32LL))( /*0x86c7d*/
                v10,
                (__int64)v8 + 424,
                v8,
                a1);
            v4 = v9; /*0x86c80*/
            if ( !j ) /*0x86c86*/
              (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 200LL))(v9); /*0x86c92*/
          }
          else
          {
            v11 = (cocos2d::CCObject *)operator new(0x40u); /*0x86ca7*/
            v51 = v11; /*0x86caa*/
            cocos2d::CCObject::CCObject(v11); /*0x86cb2*/
            *(_QWORD *)v11 = &CCIndexPath::`vftable'; /*0x86cb8*/
            *((_DWORD *)v11 + 14) = j; /*0x86cbb*/
            *((_DWORD *)v11 + 15) = v5; /*0x86cbf*/
            cocos2d::CCObject::autorelease(v11); /*0x86cc6*/
            v12 = (*(double (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 608) + 40LL))( /*0x86cdc*/
                    *(_QWORD *)(a1 + 608),
                    v11,
                    a1);
            v13 = *(float *)&v12; /*0x86cdf*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v46); /*0x86ce8*/
            if ( v4 ) /*0x86cf1*/
            {
              v15 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 200LL))(v4) + 4) /*0x86d38*/
                  - v13;
              v16 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 200LL))(v4); /*0x86d44*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v52, *v16, v15); /*0x86d56*/
              cocos2d::CCPoint::operator=(v46, v17); /*0x86d64*/
              v14 = v47; /*0x86d6a*/
            }
            else
            {
              v14 = (float)(*(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 320LL))(*(_QWORD *)(a1 + 480)) /*0x86d19*/
                                     + 4)
                          - (float)((float)j * v13))
                  - v13;
              v47 = v14; /*0x86d1e*/
            }
            v18 = 0; /*0x86d70*/
            if ( v14 < 0.0 && !TableView_isDuplicateIndexPath(a1, (__int64)v11) ) /*0x86d83*/
            {
              v19 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 320LL))(*(_QWORD *)(a1 + 480)); /*0x86d9a*/
              cocos2d::CCSize::CCSize((cocos2d::CCSize *)v50, v19); /*0x86da8*/
              v20 = **(_QWORD **)(a1 + 480); /*0x86db5*/
              v21 = *(_QWORD *)(a1 + 480); /*0x86db8*/
              cocos2d::CCSize::CCSize((cocos2d::CCSize *)v53, v50[0], v50[1] - v14); /*0x86dd0*/
              (*(void (__fastcall **)(__int64, __int64))(v20 + 312))(v21, v22); /*0x86ddc*/
              for ( k = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584)) - 1; k >= 0; --k ) /*0x86df4*/
              {
                v24 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 584), k); /*0x86e0f*/
                cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v48); /*0x86e17*/
                if ( k == cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584)) - 1 ) /*0x86e2e*/
                {
                  v25 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v24 + 200LL))(v24); /*0x86e3d*/
                  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v54, *v25, (float)(0.0 - v14) + 1.0); /*0x86e55*/
                  cocos2d::CCPoint::operator=(v48, v26); /*0x86e63*/
                  v27 = v49 - v13; /*0x86e6f*/
                  v28 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v24 + 200LL))(v24); /*0x86e7a*/
                  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, *v28, v27); /*0x86e8c*/
                  v30 = v46; /*0x86e92*/
                }
                else
                {
                  v31 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 320LL))(v18); /*0x86ea5*/
                  v32 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 200LL))(v18) /*0x86eb9*/
                                 + 4)
                      + *(float *)(v31 + 4);
                  v33 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v24 + 200LL))(v24); /*0x86ec4*/
                  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v56, *v33, v32); /*0x86ed6*/
                  v30 = v48; /*0x86edc*/
                }
                cocos2d::CCPoint::operator=(v30, v29); /*0x86ee4*/
                (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v24 + 184LL))(v24, v48); /*0x86ef5*/
                v18 = v24; /*0x86efb*/
              }
              v6 = v62; /*0x86f07*/
            }
            v34 = (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 616) + 24LL))( /*0x86f1e*/
                                                *(_QWORD *)(a1 + 616),
                                                v11,
                                                a1);
            v35 = v34; /*0x86f21*/
            if ( v34 ) /*0x86f27*/
            {
              v36 = *(_QWORD *)v34; /*0x86f2d*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, 0.0, 1.0); /*0x86f3d*/
              (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v36 + 288))(v35, v37); /*0x86f49*/
              v38 = *(_QWORD *)v35; /*0x86f4f*/
              v39 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x86f58*/
              cocos2d::CCSize::CCSize((cocos2d::CCSize *)v58, *v39, v13); /*0x86f6b*/
              (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v38 + 312))(v35, v40); /*0x86f77*/
              v41 = *(_QWORD *)v35; /*0x86f7d*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v59, 0.0, v47); /*0x86f8f*/
              (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v41 + 184))(v35, v42); /*0x86f9b*/
              cocos2d::CCObject::operator=((char *)v35 + 424, v11); /*0x86fab*/
              *((_DWORD *)v35 + 120) = *((_DWORD *)v11 + 14); /*0x86fb5*/
              *((_DWORD *)v35 + 121) = *((_DWORD *)v11 + 15); /*0x86fbf*/
              cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 584), v35); /*0x86fcf*/
              cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 600), v11); /*0x86fdf*/
              v43 = *(_QWORD *)(a1 + 608); /*0x86fe5*/
              if ( v43 ) /*0x86fef*/
                (*(void (__fastcall **)(__int64, cocos2d::CCObject *, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v43 + 16LL))( /*0x86ffd*/
                  v43,
                  v11,
                  v35,
                  a1);
              (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 480) + 464LL))( /*0x8700d*/
                *(_QWORD *)(a1 + 480),
                v35);
              v44 = *(_QWORD *)(a1 + 608); /*0x87013*/
              if ( v44 ) /*0x8701d*/
                (*(void (__fastcall **)(__int64, cocos2d::CCObject *, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v44 + 24LL))( /*0x8702b*/
                  v44,
                  v11,
                  v35,
                  a1);
              v4 = v35; /*0x8702e*/
            }
            v5 = i; /*0x87038*/
          }
          ++j; /*0x8703f*/
        }
        ++v5; /*0x87052*/
      }
    }
  }
  return (int)v1; /*0x87068*/
}

// [6/14] Address: 0x870a0
// Method: TableView::onExit
// attributes: thunk
void __fastcall TableView_onExit(cocos2d::CCLayer *this)
{
  cocos2d::CCLayer::onExit(this); /*0x870a0*/
}

// [7/14] Address: 0x870b0
// Method: TableView::ccTouchBegan
char __fastcall TableView_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 Location; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v20[40]; // [rsp+30h] [rbp-28h] BYREF
  char v21; // [rsp+60h] [rbp+8h] BYREF
  char v22; // [rsp+78h] [rbp+20h] BYREF

  v2 = a1 - 320; /*0x870bf*/
  if ( *(_BYTE *)(a1 + 173) ) /*0x870b8*/
    return 0; /*0x870b8*/
  Location = cocos2d::CCTouch::getLocation(a2, v18); /*0x870da*/
  if ( (unsigned __int8)sub_497E0(v2, Location) ) /*0x870e6*/
    return 0; /*0x870e6*/
  *(_QWORD *)(a1 + 96) = a2; /*0x87100*/
  cocos2d::CCTouch::getLocationInView(a2, &v21); /*0x87104*/
  v7 = cocos2d::CCDirector::sharedDirector(v6); /*0x8710a*/
  v8 = cocos2d::CCDirector::convertToGL(v7, v18, &v21); /*0x8711d*/
  cocos2d::CCPoint::operator=(a1 + 104, v8); /*0x8712a*/
  cocos2d::CCPoint::operator=(a1 + 112, v9); /*0x87137*/
  cocos2d::CCNode::convertToNodeSpace(v2, v18, a1 + 104); /*0x87149*/
  cocos2d::CCPoint::operator=(&v21, v10); /*0x87157*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v19); /*0x87162*/
  cocos2d::CCPoint::operator=(v19, &unk_903AE0); /*0x87174*/
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 320LL))(v2); /*0x87180*/
  cocos2d::CCSize::operator=(v20, v11); /*0x8718e*/
  if ( !cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v19, (const struct cocos2d::CCPoint *)&v21) ) /*0x8719e*/
    return 0; /*0x8719e*/
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 160)); /*0x871b8*/
  cocos2d::CCTime::gettimeofdayCocos2d((struct cocos2d::cc_timeval *)(a1 + 120), 0); /*0x871c4*/
  v12 = *(_BYTE *)(a1 + 173) == 0; /*0x871ca*/
  *(_BYTE *)(a1 + 128) = 1; /*0x871d1*/
  if ( !v12 ) /*0x871dd*/
    return 0; /*0x87267*/
  *(_QWORD *)(a1 + 216) = a2; /*0x871e8*/
  cocos2d::CCTouch::getLocationInView(a2, &v22); /*0x871f2*/
  v14 = cocos2d::CCDirector::sharedDirector(v13); /*0x871f8*/
  v15 = cocos2d::CCDirector::convertToGL(v14, &v21, &v22); /*0x8720b*/
  cocos2d::CCPoint::operator=(a1 + 240, v15); /*0x8721b*/
  cocos2d::CCPoint::operator=(a1 + 224, v16); /*0x8722b*/
  if ( !*(_BYTE *)(a1 + 208) ) /*0x87231*/
  {
    cocos2d::CCNode::schedule(v2, TableView_checkBoundaryOfContent); /*0x87244*/
    *(_BYTE *)(a1 + 208) = 1; /*0x8724a*/
  }
  *(_DWORD *)(a1 + 332) = *(_DWORD *)(a1 + 228); /*0x87257*/
  return 1; /*0x8725f*/
}

// [8/14] Address: 0x87280
// Method: TableView::ccTouchEnded
void __fastcall TableView_ccTouchEnded(__int64 a1, __int64 a2)
{
  CCScrollLayerExt_ccTouchEnded(a1, a2); /*0x87295*/
  sub_87620(a1 - 320, a2); /*0x872a4*/
  if ( *(_BYTE *)(a1 + 208) ) /*0x872a9*/
  {
    cocos2d::CCNode::unschedule(a1 - 320, TableView_checkBoundaryOfContent); /*0x872c0*/
    *(_BYTE *)(a1 + 208) = 0; /*0x872c6*/
  }
}

// [9/14] Address: 0x872e0
// Method: TableView::ccTouchCancelled
void __fastcall TableView_ccTouchCancelled(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 336) ) /*0x872ef*/
  {
    sub_49F80(a1 - 320, 0); /*0x87307*/
    cocos2d::CCPoint::operator=(a1 + 104, &unk_903AE0); /*0x87317*/
    sub_87620(a1 - 320, a2); /*0x87327*/
    if ( *(_BYTE *)(a1 + 208) ) /*0x8732c*/
    {
      cocos2d::CCNode::unschedule(a1 - 320, TableView_checkBoundaryOfContent); /*0x87343*/
      *(_BYTE *)(a1 + 208) = 0; /*0x87349*/
    }
  }
}

// [10/14] Address: 0x87360
// Method: TableView::ccTouchMoved
// Hidden C++ exception states: #wind=1
void __fastcall TableView_ccTouchMoved(__int64 a1, struct cocos2d::CCObject *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  float v11; // xmm0_4
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  cocos2d::CCSet *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  cocos2d::CCTouchDispatcher *v22; // rax
  cocos2d::CCTargetedTouchHandler *Handler; // rbx
  cocos2d::CCSet *ClaimedTouches; // rax
  cocos2d::CCSet *v25; // rax
  _DWORD v26[4]; // [rsp+20h] [rbp-10h] BYREF
  char v27; // [rsp+70h] [rbp+40h] BYREF
  float v28; // [rsp+74h] [rbp+44h]
  cocos2d::CCSet *v29; // [rsp+78h] [rbp+48h] BYREF
  char v30; // [rsp+88h] [rbp+58h] BYREF

  *(_BYTE *)(a1 + 128) = 1; /*0x8737b*/
  cocos2d::CCTouch::getLocationInView(a2, &v30); /*0x87389*/
  v7 = cocos2d::CCDirector::sharedDirector(v6); /*0x8738f*/
  v8 = cocos2d::CCDirector::convertToGL(v7, &v29, &v30); /*0x873a0*/
  cocos2d::CCPoint::operator=(&v30, v8); /*0x873ad*/
  if ( a2 == *(struct cocos2d::CCObject **)(a1 + 96) ) /*0x873b7*/
  {
    cocos2d::CCPoint::operator-(&v30, v26, a1 + 104); /*0x873c9*/
    if ( *(_BYTE *)(a1 + 172) ) /*0x873cf*/
    {
      v26[1] = 0; /*0x873d8*/
    }
    else if ( *(_BYTE *)(a1 + 171) ) /*0x873e1*/
    {
      v26[0] = 0; /*0x873ea*/
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 200LL))(*(_QWORD *)(a1 + 160)); /*0x873fb*/
    cocos2d::CCPoint::operator+(v9, &v29, v26); /*0x8740c*/
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 320) + 320LL))(a1 - 320); /*0x87426*/
    v11 = (float)((float)(*(float *)(v10 + 4) /*0x8744b*/
                        - *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 320LL))(*(_QWORD *)(a1 + 160))
                                   + 4))
                - *(float *)(a1 + 176))
        - *(float *)(a1 + 184);
    if ( v11 <= *((float *)&v29 + 1) ) /*0x8746b*/
    {
      if ( *((float *)&v29 + 1) > (float)(*(float *)(a1 + 188) + *(float *)(a1 + 180)) ) /*0x87477*/
        *((float *)&v29 + 1) = *(float *)(a1 + 188) + *(float *)(a1 + 180); /*0x87479*/
    }
    else
    {
      *((float *)&v29 + 1) = v11; /*0x8746d*/
    }
    (*(void (__fastcall **)(_QWORD, cocos2d::CCSet **))(**(_QWORD **)(a1 + 160) + 184LL))(*(_QWORD *)(a1 + 160), &v29); /*0x8748c*/
    *(_BYTE *)(a1 + 129) = 1; /*0x87492*/
    cocos2d::CCPoint::operator=(a1 + 104, &v30); /*0x874a1*/
    v12 = *(_QWORD *)(a1 + 152); /*0x874a7*/
    if ( v12 ) /*0x874b1*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, a1 - 320); /*0x874bd*/
  }
  *(_BYTE *)(a1 + 256) = 1; /*0x874c0*/
  cocos2d::CCTouch::getLocationInView(a2, &v27); /*0x874ce*/
  v14 = cocos2d::CCDirector::sharedDirector(v13); /*0x874d4*/
  v15 = cocos2d::CCDirector::convertToGL(v14, &v29, &v27); /*0x874e5*/
  cocos2d::CCPoint::operator=(&v27, v15); /*0x874f2*/
  if ( a2 == *(struct cocos2d::CCObject **)(a1 + 216) ) /*0x874ff*/
  {
    cocos2d::CCPoint::operator-(&v27, &v29, a1 + 240); /*0x87510*/
    cocos2d::CCPoint::operator=(a1 + 240, &v27); /*0x87521*/
  }
  if ( fabs(v28 - *(float *)(a1 + 332)) >= 10.0 ) /*0x87545*/
  {
    *(float *)(a1 + 332) = v28; /*0x8754b*/
    v16 = (cocos2d::CCSet *)operator new(0x40u); /*0x8755d*/
    v29 = v16; /*0x87560*/
    cocos2d::CCSet::CCSet(v16); /*0x87567*/
    *(_QWORD *)v16 = &cocos2d::CCSet::`vftable'; /*0x87574*/
    cocos2d::CCSet::addObject(v16, a2); /*0x8757d*/
    cocos2d::CCObject::autorelease(v16); /*0x87586*/
    *(_BYTE *)(a1 + 336) = 1; /*0x8758c*/
    v18 = cocos2d::CCDirector::sharedDirector(v17); /*0x87593*/
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 144LL))(v18); /*0x875a6*/
    (*(void (__fastcall **)(__int64, cocos2d::CCSet *, __int64))(*(_QWORD *)(v19 + 56) + 24LL))(v19 + 56, v16, a3); /*0x875b5*/
    *(_BYTE *)(a1 + 336) = 0; /*0x875b8*/
    v21 = cocos2d::CCDirector::sharedDirector(v20); /*0x875bf*/
    v22 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 144LL))(v21); /*0x875d2*/
    Handler = cocos2d::CCTouchDispatcher::findHandler(v22, (struct cocos2d::CCTouchDelegate *)a1); /*0x875e0*/
    ClaimedTouches = cocos2d::CCTargetedTouchHandler::getClaimedTouches(Handler); /*0x875e6*/
    if ( !cocos2d::CCSet::containsObject(ClaimedTouches, a2) ) /*0x875f2*/
    {
      v25 = cocos2d::CCTargetedTouchHandler::getClaimedTouches(Handler); /*0x875ff*/
      cocos2d::CCSet::addObject(v25, a2); /*0x8760b*/
    }
  }
}

// [11/14] Address: 0x87930
// Method: TableView::scrollWheel
// Hidden C++ exception states: #wind=1
char __fastcall TableView_scrollWheel(__int64 a1, float a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  void *v5; // [rsp+58h] [rbp+20h]

  if ( a2 == 0.0 ) /*0x87946*/
    return 0; /*0x87948*/
  v3 = a1 - 352; /*0x87955*/
  v4 = qword_905FD0; /*0x8795c*/
  if ( !qword_905FD0 ) /*0x87966*/
  {
    v5 = operator new(0x6E8u); /*0x87972*/
    qword_905FD0 = sub_2723A0(v5); /*0x87980*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x87991*/
    v4 = qword_905FD0; /*0x87993*/
  }
  *(float *)(v3 + 512) = (float)(a2 * *(float *)(v4 + 1140)) + *(float *)(v3 + 512); /*0x879aa*/
  if ( !*(_BYTE *)(v3 + 516) ) /*0x879b2*/
  {
    cocos2d::CCNode::schedule(v3, sub_4A9A0); /*0x879c5*/
    *(_BYTE *)(v3 + 516) = 1; /*0x879cb*/
  }
  return 1; /*0x8794a*/
}

// [13/14] Address: 0x881c0
// Method: TableView::checkFirstCell
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall TableView_checkFirstCell(__int64 a1, _DWORD *a2)
{
  struct cocos2d::CCObject *result; // rax
  const struct cocos2d::CCPoint *v5; // rax
  __int64 v6; // rax
  float v7; // xmm6_4
  float v8; // xmm6_4
  float v9; // xmm6_4
  int v10; // ebx
  int v11; // edi
  cocos2d::CCObject *v12; // r14
  int v13; // ecx
  double v14; // xmm0_8
  float v15; // xmm6_4
  struct cocos2d::CCObject *v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  float *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  char v28; // [rsp+70h] [rbp+18h] BYREF
  float v29; // [rsp+74h] [rbp+1Ch]
  cocos2d::CCObject *v30; // [rsp+78h] [rbp+20h] BYREF

  result = (struct cocos2d::CCObject *)sub_879E0(); /*0x881db*/
  if ( (_DWORD)result != 1 ) /*0x881e3*/
  {
    v5 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 200LL))(a2); /*0x881ef*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, v5); /*0x881fd*/
    v6 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 320LL))(a2); /*0x88209*/
    v7 = v29 + *(float *)(v6 + 4); /*0x88215*/
    v8 = v7 /*0x8822a*/
       - *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 320LL))(*(_QWORD *)(a1 + 480)) + 4);
    v9 = v8 /*0x8823f*/
       + *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 200LL))(*(_QWORD *)(a1 + 480)) + 4);
    result = (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x8824a*/
    if ( *((float *)result + 1) > v9 ) /*0x88258*/
    {
      v10 = a2[120] - 1; /*0x88265*/
      v11 = a2[121]; /*0x88267*/
      v12 = (cocos2d::CCObject *)operator new(0x40u); /*0x88278*/
      v30 = v12; /*0x8827b*/
      cocos2d::CCObject::CCObject(v12); /*0x88283*/
      *(_QWORD *)v12 = &CCIndexPath::`vftable'; /*0x88290*/
      *((_DWORD *)v12 + 14) = v10; /*0x88293*/
      *((_DWORD *)v12 + 15) = v11; /*0x88297*/
      cocos2d::CCObject::autorelease(v12); /*0x8829e*/
      result = (struct cocos2d::CCObject *)(***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 616))( /*0x882b8*/
                                             *(_QWORD *)(a1 + 616),
                                             (unsigned int)a2[121],
                                             a1);
      v13 = *((_DWORD *)v12 + 14); /*0x882ba*/
      if ( v13 >= 0 && v13 < (int)result ) /*0x882c8*/
      {
        result = TableView_isDuplicateInVisibleCellArray(a1, (__int64)v12); /*0x882d4*/
        if ( !result ) /*0x882dc*/
        {
          v14 = (*(double (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 608) + 40LL))( /*0x882f2*/
                  *(_QWORD *)(a1 + 608),
                  v12,
                  a1);
          v15 = *(float *)&v14; /*0x882f5*/
          result = (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 616) + 24LL))( /*0x88308*/
                                                 *(_QWORD *)(a1 + 616),
                                                 v12,
                                                 a1);
          v16 = result; /*0x8830b*/
          if ( result ) /*0x88311*/
          {
            v17 = *(_QWORD *)result; /*0x88317*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 0.0, 1.0); /*0x8832a*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v17 + 288))(v16, v18); /*0x88336*/
            v19 = *(_QWORD *)v16; /*0x8833c*/
            v20 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x88346*/
            cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v30, *v20, v15); /*0x88358*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v19 + 312))(v16, v21); /*0x88364*/
            v22 = *(_QWORD *)v16; /*0x8836a*/
            v23 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 320LL))(a2); /*0x8837a*/
            v24 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 200LL))(a2); /*0x8838a*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 0.0, *(float *)(v23 + 4) + *(float *)(v24 + 4)); /*0x8839e*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v22 + 184))(v16, v25); /*0x883aa*/
            cocos2d::CCObject::operator=((char *)v16 + 424, v12); /*0x883ba*/
            *((_DWORD *)v16 + 120) = *((_DWORD *)v12 + 14); /*0x883c4*/
            *((_DWORD *)v16 + 121) = *((_DWORD *)v12 + 15); /*0x883ce*/
            cocos2d::CCArray::insertObject(*(cocos2d::CCArray **)(a1 + 584), v16, 0); /*0x883e1*/
            if ( !TableView_isDuplicateIndexPath(a1, (__int64)v12) ) /*0x883ed*/
              cocos2d::CCArray::insertObject(*(cocos2d::CCArray **)(a1 + 600), v12, 0); /*0x88403*/
            v26 = *(_QWORD *)(a1 + 608); /*0x88409*/
            if ( v26 ) /*0x88413*/
              (*(void (__fastcall **)(__int64, cocos2d::CCObject *, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v26 + 16LL))( /*0x88421*/
                v26,
                v12,
                v16,
                a1);
            result = (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 480) + 464LL))( /*0x88431*/
                                                   *(_QWORD *)(a1 + 480),
                                                   v16);
            v27 = *(_QWORD *)(a1 + 608); /*0x88437*/
            if ( v27 ) /*0x88441*/
              return (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(__int64, cocos2d::CCObject *, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v27 + 24LL))( /*0x8844f*/
                                                   v27,
                                                   v12,
                                                   v16,
                                                   a1);
          }
        }
      }
    }
  }
  return result; /*0x88452*/
}

// [14/14] Address: 0x6218c0
// Method: TableView::touchFinish
void __fastcall TableView_touchFinish(__int64 a1)
{
  int v2; // ebx
  cocos2d::CCGLProgram *v3; // rax
  bool v4; // zf
  __int64 v5; // rcx
  float v6; // xmm15_4
  float v7; // xmm15_4
  float v8; // xmm12_4
  __int64 v9; // rax
  float v10; // xmm0_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm14_4
  __int64 v15; // rax
  float v16; // xmm13_4
  float v17; // xmm7_4
  const struct cocos2d::CCPoint *v18; // rax
  __int64 v19; // rax
  float v20; // xmm0_4
  float v21; // xmm9_4
  float v22; // xmm11_4
  float v23; // xmm7_4
  float v24; // xmm9_4
  const struct cocos2d::CCPoint *v25; // rax
  __int64 v26; // rax
  float v27; // xmm8_4
  const struct cocos2d::CCPoint *v28; // rax
  __int64 v29; // rax
  float v30; // xmm0_4
  __int64 v31; // rax
  float v32; // xmm8_4
  float v33; // xmm7_4
  int v34; // ebx
  cocos2d::CCGLProgram *v35; // rax
  __int64 v36; // rbx
  int v37; // edi
  float v38; // xmm0_4
  cocos2d::CCGLProgram *v39; // rax
  cocos2d::CCGLProgram *v40; // rax
  float v41; // xmm7_4
  cocos2d::CCGLProgram *v42; // rax
  cocos2d::CCGLProgram *v43; // rax
  float v44; // [rsp+D0h] [rbp+8h] BYREF
  float v45; // [rsp+D4h] [rbp+Ch]
  char v46; // [rsp+D8h] [rbp+10h] BYREF
  char v47; // [rsp+E0h] [rbp+18h] BYREF
  char v48; // [rsp+E8h] [rbp+20h] BYREF

  if ( *(float *)(a1 + 744) > 0.0 ) /*0x6218df*/
  {
    v4 = *(_BYTE *)(a1 + 768) == 0; /*0x621917*/
    *(_BYTE *)(a1 + 1126) = 1; /*0x62195b*/
    if ( v4 || (v5 = *(_QWORD *)(a1 + 1176)) == 0 ) /*0x62196e*/
      v6 = 1.0; /*0x62198e*/
    else
      v6 = fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 4360) + 168LL))(*(_QWORD *)(v5 + 4360))))); /*0x621984*/
    v7 = v6 * *(float *)(a1 + 1196); /*0x62199f*/
    v8 = floor(*(float *)(a1 + 748) * *(double *)(a1 + 536) * 20.0); /*0x6219d4*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, v8, 2345.0); /*0x6219dd*/
    v10 = sub_61EB00(v9); /*0x6219e6*/
    v11 = *(float *)(a1 + 564); /*0x6219eb*/
    v12 = *(float *)(a1 + 744); /*0x621a08*/
    v13 = *(float *)(a1 + 752); /*0x621a14*/
    v14 = (float)(v11 * v10) * v7; /*0x621a21*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, v8, 9035.0); /*0x621a26*/
    v16 = (float)((float)((float)((float)(sub_61EB00(v15) * v13) * v12) * v11) * v7) + v14; /*0x621a86*/
    v17 = (float)((float)((float)(*(float *)(a1 + 756) * *(float *)(a1 + 744)) * 0.02) * *(float *)(a1 + 564)) * v7; /*0x621a8b*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, v8, 9625.0); /*0x621a9a*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, v18); /*0x621aab*/
    v20 = sub_61EB00(v19); /*0x621ab4*/
    v21 = *(float *)(a1 + 744); /*0x621ae2*/
    v22 = (float)(v20 * (float)(v17 - (float)-v17)) - v17; /*0x621af7*/
    v23 = (float)((float)((float)(v21 * *(float *)(a1 + 764)) * 0.02) * *(float *)(a1 + 564)) * v7; /*0x621b17*/
    v24 = (float)((float)((float)(v21 * *(float *)(a1 + 760)) * 0.02) * *(float *)(a1 + 560)) * v7; /*0x621b1c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, v8, 7205.0); /*0x621b2b*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, v25); /*0x621b3c*/
    v27 = (float)(sub_61EB00(v26) * (float)(v23 - (float)-v23)) - v23; /*0x621b5f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v8, 9545.0); /*0x621b7e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, v28); /*0x621b8f*/
    v30 = sub_61EB00(v29); /*0x621b98*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, (float)(v30 * (float)(v24 - (float)-v24)) - v24, v27); /*0x621bba*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, v8, 9545.0); /*0x621bcf*/
    v32 = sub_61EB00(v31); /*0x621be4*/
    v33 = *(float *)(a1 + 1204); /*0x621be8*/
    v34 = *(_DWORD *)(a1 + 1436); /*0x621bf0*/
    v35 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 648LL))(*(_QWORD *)(a1 + 1152)); /*0x621bfe*/
    cocos2d::CCGLProgram::setUniformLocationWith1f(v35, v34, v14 * v33); /*0x621c0d*/
    v36 = *(_QWORD *)(a1 + 1152); /*0x621c13*/
    v37 = *(_DWORD *)(a1 + 1440); /*0x621c1e*/
    v38 = floorf(v16); /*0x621c24*/
    v39 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 648LL))(v36); /*0x621c3b*/
    cocos2d::CCGLProgram::setUniformLocationWith1f(v39, v37, (float)(v38 + v16) * v33); /*0x621c49*/
    LODWORD(v36) = *(_DWORD *)(a1 + 1444); /*0x621c56*/
    v40 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 648LL))(*(_QWORD *)(a1 + 1152)); /*0x621c5f*/
    cocos2d::CCGLProgram::setUniformLocationWith1f(v40, v36, v22); /*0x621c6e*/
    v41 = v33 * v45; /*0x621c7b*/
    LODWORD(v36) = *(_DWORD *)(a1 + 1448); /*0x621c84*/
    v42 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 648LL))(*(_QWORD *)(a1 + 1152)); /*0x621c8d*/
    cocos2d::CCGLProgram::setUniformLocationWith2f(v42, v36, v44, v41); /*0x621ca4*/
    LODWORD(v36) = *(_DWORD *)(a1 + 1452); /*0x621cb1*/
    v43 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 648LL))(*(_QWORD *)(a1 + 1152)); /*0x621cba*/
    cocos2d::CCGLProgram::setUniformLocationWith1f(v43, v36, v32); /*0x621cc9*/
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 1440); /*0x6218e8*/
    v3 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 648LL))(*(_QWORD *)(a1 + 1152)); /*0x6218f1*/
    cocos2d::CCGLProgram::setUniformLocationWith1f(v3, v2, 0.0); /*0x6218ff*/
  }
}

// Address: 0x87c00
// Method: TableView::checkBoundaryOfContent
// Hidden C++ exception states: #wind=4
void __fastcall TableView_checkBoundaryOfContent(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  cocos2d::CCArray *v4; // rcx
  struct cocos2d::CCObject *v5; // r14
  struct cocos2d::CCObject *v6; // r12
  int v7; // ebx
  int v8; // r13d
  const struct cocos2d::CCPoint *v9; // rax
  __int64 v10; // rax
  cocos2d::CCObject *v11; // r14
  double v12; // xmm0_8
  float v13; // xmm6_4
  struct cocos2d::CCObject *v14; // rax
  struct cocos2d::CCObject *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  float *v19; // rax
  __int64 v20; // rax
  cocos2d::CCArray *v21; // rcx
  cocos2d::CCArray *v22; // rcx
  struct cocos2d::CCObject *v23; // rdx
  float v24; // xmm0_4
  unsigned int v25; // esi
  int v26; // eax
  cocos2d::CCArray *v27; // rcx
  struct cocos2d::CCObject *v28; // rax
  double v29; // xmm0_8
  float v30; // xmm6_4
  struct cocos2d::CCObject *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbx
  float *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD v42[7]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v43; // [rsp+58h] [rbp-41h]
  _QWORD v44[7]; // [rsp+60h] [rbp-39h] BYREF
  int v45; // [rsp+98h] [rbp-1h]
  int v46; // [rsp+9Ch] [rbp+3h]
  char v47; // [rsp+100h] [rbp+67h] BYREF
  float v48; // [rsp+104h] [rbp+6Bh]
  cocos2d::CCObject *v49; // [rsp+110h] [rbp+77h] BYREF
  char v50; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584));
  v3 = v2;
  v4 = *(cocos2d::CCArray **)(a1 + 584);
  if ( v4 && v2 > 0 )
  {
    v5 = cocos2d::CCArray::objectAtIndex(v4, 0);
    v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 584), v3 - 1);
    if ( v3 == 1 )
    {
      v7 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 616))(
             *(_QWORD *)(a1 + 616),
             *((unsigned int *)v5 + 121),
             a1)
         - 1;
      cocos2d::CCObject::CCObject((cocos2d::CCObject *)v42);
      v42[0] = &CCIndexPath::`vftable';
      v43 = 0;
      cocos2d::CCObject::CCObject((cocos2d::CCObject *)v44);
      v44[0] = &CCIndexPath::`vftable';
      v45 = v7;
      v46 = 0;
      if ( *((_QWORD *)v5 + 60) == v43 )
      {
        sub_88470(a1, v6);
      }
      else if ( !*((_DWORD *)v6 + 121) && *((_DWORD *)v6 + 120) == v7 )
      {
        TableView_checkFirstCell(a1, v5);
      }
      cocos2d::CCObject::~CCObject((cocos2d::CCObject *)v44);
      cocos2d::CCObject::~CCObject((cocos2d::CCObject *)v42);
    }
    else
    {
      TableView_checkFirstCell(a1, v5);
      sub_88470(a1, v6);
    }
    return;
  }
  v8 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 616))(*(_QWORD *)(a1 + 616), 0, a1);
  if ( !v8 )
    return;
  v9 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 200LL))(*(_QWORD *)(a1 + 480));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v47, v9);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 320LL))(*(_QWORD *)(a1 + 480));
  if ( (float)(v48 - *(float *)(v10 + 4)) >= 0.0 )
  {
    v11 = (cocos2d::CCObject *)operator new(0x40u);
    v49 = v11;
    cocos2d::CCObject::CCObject(v11);
    *(_QWORD *)v11 = &CCIndexPath::`vftable';
    *((_DWORD *)v11 + 14) = v8 - 1;
    *((_DWORD *)v11 + 15) = 0;
    cocos2d::CCObject::autorelease(v11);
    if ( *((_DWORD *)v11 + 14) >= v8 )
      return;
    if ( TableView_isDuplicateInVisibleCellArray(a1, (__int64)v11) )
      return;
    v12 = (*(double (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 608) + 40LL))(
            *(_QWORD *)(a1 + 608),
            v11,
            a1);
    v13 = *(float *)&v12;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v49, (const struct cocos2d::CCPoint *)(a1 + 552));
    if ( (unsigned int)sub_87B00(a1, &v49) == 1 )
      return;
    v14 = (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 616) + 24LL))(
                                        *(_QWORD *)(a1 + 616),
                                        v11,
                                        a1);
    v15 = v14;
    if ( !v14 )
      return;
    v16 = *(_QWORD *)v14;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, 0.0, 1.0);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v16 + 288))(v15, v17);
    v18 = *(_QWORD *)v15;
    v19 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v50, *v19 * 0.5, v13);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v18 + 312))(v15, v20);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, (const struct cocos2d::CCPoint *)(a1 + 552));
    (*(void (__fastcall **)(struct cocos2d::CCObject *, char *))(*(_QWORD *)v15 + 184LL))(v15, &v50);
    cocos2d::CCObject::operator=((char *)v15 + 424, v11);
    *((_DWORD *)v15 + 120) = *((_DWORD *)v11 + 14);
    *((_DWORD *)v15 + 121) = *((_DWORD *)v11 + 15);
    v21 = *(cocos2d::CCArray **)(a1 + 584);
    if ( v8 == 1 )
      cocos2d::CCArray::insertObject(v21, v15, 0);
    else
      cocos2d::CCArray::addObject(v21, v15);
    if ( TableView_isDuplicateIndexPath(a1, (__int64)v11) )
      goto LABEL_39;
    v22 = *(cocos2d::CCArray **)(a1 + 600);
    v23 = v11;
    if ( v8 != 1 )
    {
      cocos2d::CCArray::addObject(v22, v11);
LABEL_39:
      v40 = *(_QWORD *)(a1 + 608);
      if ( v40 )
        (*(void (__fastcall **)(__int64, cocos2d::CCObject *, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v40 + 16LL))(
          v40,
          v11,
          v15,
          a1);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 480) + 464LL))(
        *(_QWORD *)(a1 + 480),
        v15);
      v41 = *(_QWORD *)(a1 + 608);
      if ( v41 )
        (*(void (__fastcall **)(__int64, cocos2d::CCObject *, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v41 + 24LL))(
          v41,
          v11,
          v15,
          a1);
      return;
    }
LABEL_38:
    cocos2d::CCArray::insertObject(v22, v23, 0);
    goto LABEL_39;
  }
  v24 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1) + 4);
  if ( v24 >= v48 )
  {
    v11 = (cocos2d::CCObject *)operator new(0x40u);
    v49 = v11;
    cocos2d::CCObject::CCObject(v11);
    *(_QWORD *)v11 = &CCIndexPath::`vftable';
    v25 = 0;
    *((_QWORD *)v11 + 7) = 0;
    cocos2d::CCObject::autorelease(v11);
    v26 = *((_DWORD *)v11 + 14);
    if ( v26 >= 0 && v26 < v8 )
    {
      v27 = *(cocos2d::CCArray **)(a1 + 584);
      if ( !v27 || !cocos2d::CCArray::count(v27) || !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584)) )
        goto LABEL_34;
      while ( 1 )
      {
        v28 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 584), v25);
        if ( *((_DWORD *)v28 + 121) == *((_DWORD *)v11 + 15) && *((_DWORD *)v28 + 120) == *((_DWORD *)v11 + 14) )
          break;
        if ( ++v25 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584)) )
          goto LABEL_34;
      }
      if ( !v28 )
      {
LABEL_34:
        v29 = (*(double (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 608) + 40LL))(
                *(_QWORD *)(a1 + 608),
                v11,
                a1);
        v30 = *(float *)&v29;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v49, (const struct cocos2d::CCPoint *)(a1 + 552));
        if ( (unsigned int)sub_87B00(a1, &v49) == 1 )
          return;
        v31 = (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 616) + 24LL))(
                                            *(_QWORD *)(a1 + 616),
                                            v11,
                                            a1);
        v15 = v31;
        if ( !v31 )
          return;
        v32 = *(_QWORD *)v31;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, 0.0, 1.0);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v32 + 288))(v15, v33);
        v34 = *(_QWORD *)v15;
        v35 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
        cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v50, *v35, v30);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v34 + 312))(v15, v36);
        v37 = *(_QWORD *)v15;
        v38 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 320LL))(*(_QWORD *)(a1 + 480));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, 0.0, *(float *)(v38 + 4) - v30);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v37 + 184))(v15, v39);
        cocos2d::CCObject::operator=((char *)v15 + 424, v11);
        *((_DWORD *)v15 + 120) = *((_DWORD *)v11 + 14);
        *((_DWORD *)v15 + 121) = *((_DWORD *)v11 + 15);
        cocos2d::CCArray::insertObject(*(cocos2d::CCArray **)(a1 + 584), v15, 0);
        if ( TableView_isDuplicateIndexPath(a1, (__int64)v11) )
          goto LABEL_39;
        v23 = v11;
        v22 = *(cocos2d::CCArray **)(a1 + 600);
        goto LABEL_38;
      }
    }
  }
}
