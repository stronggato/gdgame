#include <Geode/binding/LevelSelectLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x43d270
// Method: LevelSelectLayer::~LevelSelectLayer
cocos2d::CCLayer *__fastcall LevelSelectLayer__dtor_LevelSelectLayer(cocos2d::CCLayer *Block, char a2)
{
  *(_QWORD *)Block = &LevelSelectLayer::`vftable'; /*0x43d283*/
  *((_QWORD *)Block + 40) = &LevelSelectLayer::`vftable'; /*0x43d290*/
  *((_QWORD *)Block + 41) = &LevelSelectLayer::`vftable'; /*0x43d29e*/
  *((_QWORD *)Block + 42) = &LevelSelectLayer::`vftable'; /*0x43d2ac*/
  *((_QWORD *)Block + 43) = &LevelSelectLayer::`vftable'; /*0x43d2ba*/
  *((_QWORD *)Block + 44) = &LevelSelectLayer::`vftable'; /*0x43d2c8*/
  *((_QWORD *)Block + 51) = &LevelSelectLayer::`vftable'; /*0x43d2d6*/
  *((_QWORD *)Block + 52) = &LevelSelectLayer::`vftable'; /*0x43d2e4*/
  cocos2d::CCLayer::~CCLayer(Block); /*0x43d2eb*/
  if ( (a2 & 1) != 0 ) /*0x43d2f4*/
    j_j_free(Block); /*0x43d2fe*/
  return Block; /*0x43d303*/
}

// [2/13] Address: 0x43d420
// Method: LevelSelectLayer::scene
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelSelectLayer_scene(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  cocos2d::CCLayer *v7; // rdi

  v4 = a1; /*0x43d434*/
  v5 = cocos2d::CCScene::create(a1, a2, a3, a4); /*0x43d43c*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v6) + 232) = v5; /*0x43d445*/
  v7 = (cocos2d::CCLayer *)operator new(0x1E0u); /*0x43d456*/
  cocos2d::CCLayer::CCLayer(v7); /*0x43d461*/
  *(_QWORD *)v7 = &LevelSelectLayer::`vftable'; /*0x43d46e*/
  *((_QWORD *)v7 + 40) = &LevelSelectLayer::`vftable'; /*0x43d478*/
  *((_QWORD *)v7 + 41) = &LevelSelectLayer::`vftable'; /*0x43d486*/
  *((_QWORD *)v7 + 42) = &LevelSelectLayer::`vftable'; /*0x43d494*/
  *((_QWORD *)v7 + 43) = &LevelSelectLayer::`vftable'; /*0x43d4a2*/
  *((_QWORD *)v7 + 44) = &LevelSelectLayer::`vftable'; /*0x43d4b0*/
  *((_QWORD *)v7 + 51) = &LevelSelectLayer::`vftable'; /*0x43d4be*/
  *((_QWORD *)v7 + 52) = &LevelSelectLayer::`vftable'; /*0x43d4cc*/
  *((_DWORD *)v7 + 106) = 0; /*0x43d4d5*/
  *((_QWORD *)v7 + 54) = 0; /*0x43d4db*/
  *((_QWORD *)v7 + 55) = 0; /*0x43d4e2*/
  *((_QWORD *)v7 + 56) = 0; /*0x43d4e9*/
  *((_QWORD *)v7 + 57) = 0; /*0x43d4f0*/
  *((_BYTE *)v7 + 464) = 0; /*0x43d4f7*/
  *((_QWORD *)v7 + 59) = 0; /*0x43d4fe*/
  if ( (unsigned __int8)LevelSelectLayer_init(v7, v4) ) /*0x43d50a*/
  {
    cocos2d::CCObject::autorelease(v7); /*0x43d516*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x43d526*/
    v7 = 0; /*0x43d529*/
  }
  (*(void (__fastcall **)(__int64, cocos2d::CCLayer *))(*(_QWORD *)v5 + 464LL))(v5, v7); /*0x43d535*/
  return v5; /*0x43d53e*/
}

// [4/13] Address: 0x43e410
// Method: LevelSelectLayer::onDownload
__int64 __fastcall LevelSelectLayer_onDownload(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = SongsLayer_create(); /*0x43e428*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL))(a1); /*0x43e42b*/
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 456LL))(v3, v2, 100); /*0x43e447*/
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1080LL))(v2, 0); /*0x43e459*/
}

// [5/13] Address: 0x43e470
// Method: LevelSelectLayer::updatePageWithObject
__int64 __fastcall LevelSelectLayer_updatePageWithObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = LevelPage_updateDynamicPage(a2, a3); /*0x43e48e*/
  if ( !*(_BYTE *)(a1 + 48) && (float)*(int *)(a1 + 44) > 60.0 ) /*0x43e4a8*/
  {
    result = (unsigned int)(*(_DWORD *)(a3 + 328) - *(_DWORD *)(a3 + 332)); /*0x43e4b0*/
    if ( (_DWORD)result == -1 ) /*0x43e4b9*/
    {
      *(_BYTE *)(a1 + 48) = 1; /*0x43e4be*/
      return sub_4417D0(a2); /*0x43e4c2*/
    }
  }
  return result; /*0x43e4c7*/
}

// [6/13] Address: 0x43e4e0
// Method: LevelSelectLayer::scrollLayerMoved
int __fastcall LevelSelectLayer_scrollLayerMoved(__int64 a1, float *a2)
{
  float v3; // xmm6_4
  float i; // xmm7_4
  int v5; // ebx
  float v6; // xmm0_4
  unsigned int v7; // edi
  unsigned int v8; // r12d
  float v9; // xmm0_4
  double v10; // xmm0_8
  double v11; // xmm0_8
  float v12; // xmm2_4
  void (__fastcall ***v13)(_QWORD, unsigned __int8 *); // rcx
  cocos2d::CCArray *v14; // rax
  cocos2d::CCArray *v15; // rsi
  unsigned int v16; // ebx
  struct cocos2d::CCObject *v17; // rax
  cocos2d::CCArray *v18; // rax
  __int64 v19; // rcx
  cocos2d::CCArray *v20; // rbx
  struct cocos2d::CCObject *v21; // rax
  unsigned __int8 v23; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 v24; // [rsp+91h] [rbp+41h]
  unsigned __int8 v25; // [rsp+92h] [rbp+42h]
  unsigned __int8 v26; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int8 v27; // [rsp+99h] [rbp+49h]
  unsigned __int8 v28; // [rsp+9Ah] [rbp+4Ah]
  unsigned __int8 v29; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int8 v30; // [rsp+A1h] [rbp+51h]
  unsigned __int8 v31; // [rsp+A2h] [rbp+52h]

  v3 = (float)-*a2 / *(float *)(a1 + 16); /*0x43e505*/
  for ( i = 0.0; v3 < 0.0; v3 = v3 + 24.0 ) /*0x43e51b*/
    ; /*0x43e525*/
  v5 = (int)floorf(v3); /*0x43e536*/
  *(_DWORD *)(a1 + 52) = v5; /*0x43e54f*/
  v6 = floorf(v3 + 0.5); /*0x43e566*/
  sub_43EF70(a1 - 408, (unsigned int)(int)v6); /*0x43e576*/
  v7 = 0; /*0x43e588*/
  v8 = 0; /*0x43e595*/
  if ( v5 % 24 != 23 ) /*0x43e598*/
    v8 = v5 % 24 + 1; /*0x43e598*/
  v9 = fminf(1.0, (float)((float)(v3 - (float)v5) / 0.66666669) - 0.2); /*0x43e5b4*/
  if ( v9 >= 0.0 ) /*0x43e5bb*/
    i = v9; /*0x43e5bd*/
  LevelSelectLayer_colorForPage(a1 - 408, &v26, (unsigned int)(v5 % 24)); /*0x43e5ce*/
  LevelSelectLayer_colorForPage(a1 - 408, &v29, v8); /*0x43e5e1*/
  v10 = i; /*0x43e5f1*/
  if ( i > 0.2 ) /*0x43e5f9*/
  {
    if ( v10 < 0.8 ) /*0x43e608*/
      v11 = (v10 - 0.2) / 0.6; /*0x43e618*/
    else
      v11 = 1.0; /*0x43e60a*/
  }
  else
  {
    v11 = 0.0; /*0x43e5fb*/
  }
  v12 = v11; /*0x43e62c*/
  v13 = (void (__fastcall ***)(_QWORD, unsigned __int8 *))(*(_QWORD *)(a1 + 24) + 320LL); /*0x43e630*/
  v23 = (int)(float)((float)((float)v26 * (float)(1.0 - v12)) + (float)((float)v29 * v12)); /*0x43e65f*/
  v24 = (int)(float)((float)((float)v27 * (float)(1.0 - v12)) + (float)((float)v30 * v12)); /*0x43e689*/
  v25 = (int)(float)((float)((float)v28 * (float)(1.0 - v12)) + (float)((float)v31 * v12)); /*0x43e6b3*/
  (**v13)(v13, &v23); /*0x43e6b9*/
  v29 = (int)(float)((float)v23 * 0.80000001); /*0x43e6d6*/
  v30 = (int)(float)((float)v24 * 0.80000001); /*0x43e6ec*/
  v31 = (int)(float)((float)v25 * 0.80000001); /*0x43e702*/
  v14 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 408LL) + 480LL))(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 408LL)); /*0x43e713*/
  v15 = v14; /*0x43e719*/
  if ( v14 ) /*0x43e71f*/
  {
    v16 = 0; /*0x43e724*/
    if ( cocos2d::CCArray::count(v14) ) /*0x43e726*/
    {
      do /*0x43e758*/
      {
        v17 = cocos2d::CCArray::objectAtIndex(v15, v16); /*0x43e735*/
        (**((void (__fastcall ***)(__int64, unsigned __int8 *))v17 + 40))((__int64)v17 + 320, &v29); /*0x43e749*/
        ++v16; /*0x43e74e*/
      }
      while ( v16 < cocos2d::CCArray::count(v15) ); /*0x43e758*/
    }
  }
  v29 = (int)(float)((float)v23 * 0.89999998); /*0x43e775*/
  v30 = (int)(float)((float)v24 * 0.89999998); /*0x43e78b*/
  v31 = (int)(float)((float)v25 * 0.89999998); /*0x43e7a1*/
  v18 = *(cocos2d::CCArray **)(a1 + 32); /*0x43e7a4*/
  v19 = *((_QWORD *)v18 + 52); /*0x43e7a8*/
  if ( v19 ) /*0x43e7b2*/
  {
    v18 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 480LL))(v19); /*0x43e7b7*/
    v20 = v18; /*0x43e7bd*/
    if ( v18 ) /*0x43e7c3*/
    {
      LODWORD(v18) = cocos2d::CCArray::count(v18); /*0x43e7c8*/
      if ( (_DWORD)v18 ) /*0x43e7d0*/
      {
        do /*0x43e7fa*/
        {
          v21 = cocos2d::CCArray::objectAtIndex(v20, v7); /*0x43e7d7*/
          (**((void (__fastcall ***)(__int64, unsigned __int8 *))v21 + 40))((__int64)v21 + 320, &v29); /*0x43e7eb*/
          ++v7; /*0x43e7f0*/
          LODWORD(v18) = cocos2d::CCArray::count(v20); /*0x43e7f2*/
        }
        while ( v7 < (unsigned int)v18 ); /*0x43e7fa*/
      }
    }
  }
  return (int)v18; /*0x43e7fc*/
}

// [7/13] Address: 0x43e820
// Method: LevelSelectLayer::colorForPage
// Hidden C++ exception states: #wind=9
char *__fastcall LevelSelectLayer_colorForPage(__int64 a1, char *a2, int a3)
{
  char *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // [rsp+48h] [rbp+20h]
  void *v15; // [rsp+48h] [rbp+20h]
  void *v16; // [rsp+48h] [rbp+20h]
  void *v17; // [rsp+48h] [rbp+20h]
  void *v18; // [rsp+48h] [rbp+20h]
  void *v19; // [rsp+48h] [rbp+20h]
  void *v20; // [rsp+48h] [rbp+20h]
  void *v21; // [rsp+48h] [rbp+20h]
  void *v22; // [rsp+48h] [rbp+20h]

  if ( a3 ) /*0x43e82f*/
  {
    if ( a3 == 22 * (a3 / 22) ) /*0x43e84d*/
    {
      *(_WORD *)a2 = 11301; /*0x43e85b*/
      a2[2] = 52; /*0x43e85e*/
      return a2; /*0x43e862*/
    }
    else
    {
      switch ( a3 ) /*0x43e889*/
      {
        case 1: /*0x43e889*/
          v5 = qword_905FD0; /*0x43e88b*/
          if ( !qword_905FD0 ) /*0x43e895*/
          {
            v14 = operator new(0x6E8u); /*0x43e8a1*/
            qword_905FD0 = sub_2723A0(v14); /*0x43e8af*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43e8c0*/
            v5 = qword_905FD0; /*0x43e8c2*/
          }
          GameManager_colorForIdx(v5, a2, 7); /*0x43e8d2*/
          result = a2; /*0x43e8d7*/
          break; /*0x43e8df*/
        case 2: /*0x43e889*/
          v6 = qword_905FD0; /*0x43e8e0*/
          if ( !qword_905FD0 ) /*0x43e8ea*/
          {
            v15 = operator new(0x6E8u); /*0x43e8f6*/
            qword_905FD0 = sub_2723A0(v15); /*0x43e904*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43e915*/
            v6 = qword_905FD0; /*0x43e917*/
          }
          GameManager_colorForIdx(v6, a2, 8); /*0x43e927*/
          result = a2; /*0x43e92c*/
          break; /*0x43e934*/
        case 3: /*0x43e889*/
          v7 = qword_905FD0; /*0x43e935*/
          if ( !qword_905FD0 ) /*0x43e93f*/
          {
            v16 = operator new(0x6E8u); /*0x43e94b*/
            qword_905FD0 = sub_2723A0(v16); /*0x43e959*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43e96a*/
            v7 = qword_905FD0; /*0x43e96c*/
          }
          GameManager_colorForIdx(v7, a2, 9); /*0x43e97c*/
          result = a2; /*0x43e981*/
          break; /*0x43e989*/
        case 4: /*0x43e889*/
          v8 = qword_905FD0; /*0x43e98a*/
          if ( !qword_905FD0 ) /*0x43e994*/
          {
            v17 = operator new(0x6E8u); /*0x43e9a0*/
            qword_905FD0 = sub_2723A0(v17); /*0x43e9ae*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43e9bf*/
            v8 = qword_905FD0; /*0x43e9c1*/
          }
          GameManager_colorForIdx(v8, a2, 10); /*0x43e9d1*/
          result = a2; /*0x43e9d6*/
          break; /*0x43e9de*/
        case 5: /*0x43e889*/
          v9 = qword_905FD0; /*0x43e9df*/
          if ( !qword_905FD0 ) /*0x43e9e9*/
          {
            v18 = operator new(0x6E8u); /*0x43e9f5*/
            qword_905FD0 = sub_2723A0(v18); /*0x43ea03*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43ea14*/
            v9 = qword_905FD0; /*0x43ea16*/
          }
          GameManager_colorForIdx(v9, a2, 11); /*0x43ea26*/
          result = a2; /*0x43ea2b*/
          break; /*0x43ea33*/
        case 6: /*0x43e889*/
          v10 = qword_905FD0; /*0x43ea34*/
          if ( !qword_905FD0 ) /*0x43ea3e*/
          {
            v19 = operator new(0x6E8u); /*0x43ea4a*/
            qword_905FD0 = sub_2723A0(v19); /*0x43ea58*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43ea69*/
            v10 = qword_905FD0; /*0x43ea6b*/
          }
          GameManager_colorForIdx(v10, a2, 1); /*0x43ea7b*/
          result = a2; /*0x43ea80*/
          break; /*0x43ea88*/
        case 7: /*0x43e889*/
          v11 = qword_905FD0; /*0x43ea89*/
          if ( !qword_905FD0 ) /*0x43ea93*/
          {
            v20 = operator new(0x6E8u); /*0x43ea9f*/
            qword_905FD0 = sub_2723A0(v20); /*0x43eaad*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43eabe*/
            v11 = qword_905FD0; /*0x43eac0*/
          }
          GameManager_colorForIdx(v11, a2, 3); /*0x43ead0*/
          result = a2; /*0x43ead5*/
          break; /*0x43eadd*/
        case 8: /*0x43e889*/
          v12 = qword_905FD0; /*0x43eade*/
          if ( !qword_905FD0 ) /*0x43eae8*/
          {
            v21 = operator new(0x6E8u); /*0x43eaf4*/
            qword_905FD0 = sub_2723A0(v21); /*0x43eb02*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43eb13*/
            v12 = qword_905FD0; /*0x43eb15*/
          }
          GameManager_colorForIdx(v12, a2, 4); /*0x43eb25*/
          result = a2; /*0x43eb2a*/
          break; /*0x43eb32*/
        default:
          LevelSelectLayer_colorForPage(a1, a2, (unsigned int)(a3 % 9)); /*0x43eb50*/
          result = a2; /*0x43eb55*/
          break; /*0x43eb5d*/
      }
    }
  }
  else
  {
    v13 = qword_905FD0; /*0x43eb5e*/
    if ( !qword_905FD0 ) /*0x43eb68*/
    {
      v22 = operator new(0x6E8u); /*0x43eb74*/
      qword_905FD0 = sub_2723A0(v22); /*0x43eb82*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43eb93*/
      v13 = qword_905FD0; /*0x43eb95*/
    }
    GameManager_colorForIdx(v13, a2, 5); /*0x43eba5*/
    return a2; /*0x43ebaa*/
  }
  return result; /*0x43e865*/
}

// [8/13] Address: 0x43ebe0
// Method: LevelSelectLayer::onNext
__int64 __fastcall LevelSelectLayer_onNext(__int64 a1)
{
  __int64 v1; // rbx
  cocos2d::CCNode *v3; // rcx

  v1 = *(_QWORD *)(a1 + 448); /*0x43ebea*/
  if ( *(_BYTE *)(v1 + 552) ) /*0x43ebf4*/
  {
    v3 = *(cocos2d::CCNode **)(v1 + 504); /*0x43ebfd*/
    *(_BYTE *)(v1 + 552) = 0; /*0x43ec09*/
    cocos2d::CCNode::stopActionByTag(v3, 2); /*0x43ec10*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 504) + 184LL))(*(_QWORD *)(v1 + 504), v1 + 496); /*0x43ec27*/
    BoomScrollLayer_moveToPageEnded(v1); /*0x43ec30*/
  }
  return BoomScrollLayer_moveToPage( /*0x43ec44*/
           *(_QWORD *)(a1 + 448),
           (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 448) + 588LL) + 1));
}

// [9/13] Address: 0x43ec60
// Method: LevelSelectLayer::onPrev
__int64 __fastcall LevelSelectLayer_onPrev(__int64 a1)
{
  __int64 v1; // rbx
  cocos2d::CCNode *v3; // rcx

  v1 = *(_QWORD *)(a1 + 448); /*0x43ec6a*/
  if ( *(_BYTE *)(v1 + 552) ) /*0x43ec74*/
  {
    v3 = *(cocos2d::CCNode **)(v1 + 504); /*0x43ec7d*/
    *(_BYTE *)(v1 + 552) = 0; /*0x43ec89*/
    cocos2d::CCNode::stopActionByTag(v3, 2); /*0x43ec90*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 504) + 184LL))(*(_QWORD *)(v1 + 504), v1 + 496); /*0x43eca7*/
    BoomScrollLayer_moveToPageEnded(v1); /*0x43ecb0*/
  }
  return BoomScrollLayer_moveToPage( /*0x43ecc4*/
           *(_QWORD *)(a1 + 448),
           (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 448) + 588LL) - 1));
}

// [10/13] Address: 0x43ece0
// Method: LevelSelectLayer::onBack
bool __fastcall LevelSelectLayer_onBack(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct cocos2d::CCScene *v4; // rax
  struct cocos2d::CCScene *v5; // rbx
  __int64 v6; // rcx
  cocos2d::CCDirector *v7; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x43eceb*/
  v4 = (struct cocos2d::CCScene *)MenuLayer_scene(0, v1, v2, v3); /*0x43ecf3*/
  v5 = cocos2d::CCTransitionFade::create(0.5, v4); /*0x43ed09*/
  v7 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v6); /*0x43ed0c*/
  return cocos2d::CCDirector::replaceScene(v7, v5); /*0x43ed18*/
}

// [11/13] Address: 0x43ed30
// Method: LevelSelectLayer::keyBackClicked
bool __fastcall LevelSelectLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct cocos2d::CCScene *v4; // rax
  struct cocos2d::CCScene *v5; // rbx
  __int64 v6; // rcx
  cocos2d::CCDirector *v7; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x43ed42*/
  v4 = (struct cocos2d::CCScene *)MenuLayer_scene(0, v1, v2, v3); /*0x43ed4a*/
  v5 = cocos2d::CCTransitionFade::create(0.5, v4); /*0x43ed60*/
  v7 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v6); /*0x43ed63*/
  return cocos2d::CCDirector::replaceScene(v7, v5); /*0x43ed6f*/
}

// [12/13] Address: 0x43ed80
// Method: LevelSelectLayer::keyDown
void __fastcall LevelSelectLayer_keyDown(__int64 a1, int a2)
{
  bool v2; // zf
  __int64 v3; // rdi
  signed int v4; // ebx
  cocos2d::CCArray *v5; // rcx
  signed int v6; // ecx
  struct cocos2d::CCObject *v7; // rax

  if ( a2 > 1001 ) /*0x43ed8d*/
  {
    if ( a2 != 1009 ) /*0x43edad*/
    {
      if ( a2 != 1025 ) /*0x43edb2*/
      {
        v2 = a2 == 1027; /*0x43edb4*/
LABEL_10:
        if ( v2 ) /*0x43edb7*/
          LevelSelectLayer_onNext(a1 - 344); /*0x43edd4*/
        else
          cocos2d::CCLayer::keyDown(a1); /*0x43edc0*/
        return; /*0x43edc0*/
      }
LABEL_13:
      LevelSelectLayer_onPrev(a1 - 344); /*0x43edd9*/
      return; /*0x43ede6*/
    }
  }
  else if ( a2 != 1001 && a2 != 13 && a2 != 32 ) /*0x43ed99*/
  {
    if ( a2 != 37 ) /*0x43ed9e*/
    {
      v2 = a2 == 39; /*0x43eda0*/
      goto LABEL_10; /*0x43eda3*/
    }
    goto LABEL_13; /*0x43ed9e*/
  }
  if ( !byte_9037A4 ) /*0x43edf2*/
  {
    v3 = *(_QWORD *)(a1 + 104); /*0x43edfe*/
    v4 = *(_DWORD *)(v3 + 588); /*0x43ee09*/
    v5 = *(cocos2d::CCArray **)(v3 + 480); /*0x43ee0f*/
    if ( *(_BYTE *)(v3 + 456) ) /*0x43ee02*/
    {
      v6 = cocos2d::CCArray::count(v5); /*0x43ee1e*/
      if ( v4 <= 0 ) /*0x43ee22*/
      {
        for ( ; v4 < 0; v4 += v6 ) /*0x43ee2d*/
          ; /*0x43ee30*/
      }
      else
      {
        v4 %= v6; /*0x43ee29*/
      }
      v5 = *(cocos2d::CCArray **)(v3 + 480); /*0x43ee34*/
    }
    v7 = cocos2d::CCArray::objectAtIndex(v5, v4); /*0x43ee3d*/
    LevelPage_onPlay(v7, 0); /*0x43ee48*/
  }
}

// [13/13] Address: 0x43ee60
// Method: LevelSelectLayer::onInfo
__int64 __fastcall LevelSelectLayer_onInfo(__int64 a1)
{
  __int64 v1; // rdi
  signed int v2; // ebx
  cocos2d::CCArray *v3; // rcx
  signed int v4; // ecx
  struct cocos2d::CCObject *v5; // rax

  v1 = *(_QWORD *)(a1 + 448); /*0x43ee6a*/
  v2 = *(_DWORD *)(v1 + 588); /*0x43ee78*/
  v3 = *(cocos2d::CCArray **)(v1 + 480); /*0x43ee7e*/
  if ( *(_BYTE *)(v1 + 456) ) /*0x43ee71*/
  {
    v4 = cocos2d::CCArray::count(v3); /*0x43ee8d*/
    if ( v2 <= 0 ) /*0x43ee91*/
    {
      for ( ; v2 < 0; v2 += v4 ) /*0x43ee9c*/
        ; /*0x43eea0*/
    }
    else
    {
      v2 %= v4; /*0x43ee98*/
    }
    v3 = *(cocos2d::CCArray **)(v1 + 480); /*0x43eea4*/
  }
  v5 = cocos2d::CCArray::objectAtIndex(v3, v2); /*0x43eead*/
  return GJUserCell_onRemoveFriend(v5); /*0x43eeb6*/
}

// Address: 0x43d560
// Method: LevelSelectLayer::init
// Hidden C++ exception states: #wind=16
bool __fastcall LevelSelectLayer_init(__int64 a1, int a2)
{
  bool result; // al
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  cocos2d::CCString *v10; // rax
  __int64 v11; // rcx
  int v12; // ebx
  void *v13; // r8
  __int64 v14; // rax
  struct cocos2d::CCSprite *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  cocos2d::CCObject *v22; // rax
  __int64 *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  struct cocos2d::CCSprite *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  cocos2d::CCDirector *v31; // rax
  float v32; // xmm0_4
  __int64 v33; // rax
  struct cocos2d::CCSprite *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  cocos2d::CCDirector *v39; // rax
  float v40; // xmm6_4
  __int64 v41; // rcx
  cocos2d::CCDirector *v42; // rax
  float v43; // xmm0_4
  __int64 v44; // rax
  struct cocos2d::CCSprite *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rcx
  cocos2d::CCDirector *v50; // rax
  float v51; // xmm6_4
  __int64 v52; // rcx
  cocos2d::CCDirector *v53; // rax
  float v54; // xmm0_4
  __int64 v55; // rax
  __int64 v56; // rcx
  cocos2d::CCArray *v57; // r15
  __int64 v58; // rcx
  cocos2d::CCArray *v59; // r14
  signed int i; // ebx
  __int64 v61; // rcx
  struct cocos2d::CCObject *MainLevel; // rax
  __int64 v63; // rdi
  char *v64; // rbx
  __int64 v65; // rax
  cocos2d::CCObject *v66; // rbx
  __int64 *v67; // rsi
  cocos2d::CCArray *v68; // r14
  int v69; // r13d
  float v70; // xmm0_4
  __int64 v71; // rax
  cocos2d::CCObject *v72; // rbx
  float v73; // xmm0_4
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rax
  __int64 *v77; // r12
  __int64 v78; // rcx
  cocos2d::CCDirector *v79; // rax
  float v80; // xmm0_4
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  struct cocos2d::CCLabelBMFont *v85; // rdi
  cocos2d::CCObject *v86; // rbx
  struct cocos2d::CCMenu *v87; // rdi
  __int64 v88; // rbx
  __int64 v89; // rcx
  cocos2d::CCDirector *v90; // rax
  float v91; // xmm0_4
  __int64 v92; // rax
  float v93; // xmm6_4
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r14
  __int64 v99; // rcx
  char v100; // r13
  const char *v101; // r15
  const char *v102; // rcx
  cocos2d::CCSprite *v103; // rax
  int v104; // ebx
  cocos2d::CCObject *v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rcx
  cocos2d::CCDirector *v108; // rax
  float v109; // xmm0_4
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned int v112; // ebx
  cocos2d::CCObject *v113; // rdi
  __int64 v114; // rbx
  __int64 v115; // rcx
  cocos2d::CCDirector *v116; // rax
  float v117; // xmm0_4
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned int v120; // ebx
  cocos2d::CCObject *v121; // r14
  struct cocos2d::CCMenu *v122; // rdi
  __int64 v123; // rbx
  __int64 v124; // rcx
  cocos2d::CCDirector *v125; // rax
  float v126; // xmm6_4
  __int64 v127; // rcx
  cocos2d::CCDirector *v128; // rax
  float v129; // xmm0_4
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rax
  __int64 v136; // r15
  unsigned int v137; // edi
  cocos2d::CCObject *v138; // rbx
  unsigned int v139; // edi
  cocos2d::CCObject *v140; // rbx
  __int64 v141; // rdi
  __int64 v142; // rbx
  __int64 v143; // rax
  __int64 v144; // rbx
  __int64 v145; // rcx
  cocos2d::CCDirector *v146; // rax
  float v147; // xmm7_4
  __int64 v148; // rcx
  cocos2d::CCDirector *v149; // rax
  float v150; // xmm0_4
  __int64 v151; // rax
  char *v152; // [rsp+30h] [rbp-69h] BYREF
  __int16 v153; // [rsp+38h] [rbp-61h] BYREF
  char v154; // [rsp+3Ah] [rbp-5Fh]
  cocos2d::CCArray *v155; // [rsp+40h] [rbp-59h] BYREF
  float v156; // [rsp+48h] [rbp-51h] BYREF
  float v157; // [rsp+4Ch] [rbp-4Dh]
  int v158; // [rsp+50h] [rbp-49h]
  __int64 *v159; // [rsp+58h] [rbp-41h]
  void *Block[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v161; // [rsp+70h] [rbp-29h]
  unsigned __int64 v162; // [rsp+78h] [rbp-21h]

  v158 = a2;
  v159 = (__int64 *)a1;
  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1);
  if ( !result )
    return result;
  if ( !qword_905FE0 )
  {
    v155 = (cocos2d::CCArray *)operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v155);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
  }
  if ( (unsigned __int8)sub_2E5B30(v4, 12, 4) )
  {
    v7 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v155 = (cocos2d::CCArray *)operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v155);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v7 = qword_905FD0;
    }
    LOBYTE(v6) = 1;
    sub_27B1C0(v7, "6", v6);
  }
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v5);
  LOBYTE(v8) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v8);
  byte_9037A4 = 0;
  v9 = AchievementManager_sharedState();
  *(_OWORD *)Block = 0;
  Block[0] = (void *)sub_3C460(32);
  v161 = 21;
  v162 = 31;
  strcpy((char *)Block[0], "geometry.ach.secret04");
  v10 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v9 + 352), Block);
  v12 = cocos2d::CCString::intValue(v10);
  if ( v162 > 0xF )
  {
    v13 = Block[0];
    if ( v162 + 1 >= 0x1000 )
    {
      v13 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v13);
  }
  *(_BYTE *)(a1 + 464) = v12 >= 100;
  v14 = cocos2d::CCDirector::sharedDirector(v11);
  cocos2d::CCDirector::getWinSize(v14, &v156);
  v15 = cocos2d::CCSprite::create("GJ_gradientBG.png");
  *(_QWORD *)(a1 + 432) = v15;
  v16 = *(_QWORD *)v15;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 0.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v16 + 288))(v15, v17);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 432), 4294967294LL);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 120LL))(*(_QWORD *)(a1 + 432));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 136LL))(*(_QWORD *)(a1 + 432));
  v18 = **(_QWORD **)(a1 + 432);
  v19 = *(_QWORD *)(a1 + 432);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, -5.0, -5.0);
  (*(void (__fastcall **)(__int64, __int64))(v18 + 184))(v19, v20);
  v153 = 32040;
  v154 = -1;
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 432) + 320LL))(*(_QWORD *)(a1 + 432) + 320LL, &v153);
  v21 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v155 = (cocos2d::CCArray *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v155);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v21 = qword_905FD0;
  }
  v22 = GJGroundLayer_create(*(_DWORD *)(v21 + 1016), 1u);
  *(_QWORD *)(a1 + 440) = v22;
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v22, 0);
  v23 = *(__int64 **)(a1 + 440);
  v24 = *v23;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 0.0, fminf((float)(v157 * 0.5) - 110.0, 128.0));
  (*(void (__fastcall **)(__int64 *, __int64))(v24 + 184))(v23, v25);
  v26 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_topBar_001.png");
  v27 = *(_QWORD *)v26;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 0.5, 1.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v27 + 288))(v26, v28);
  v29 = *(_QWORD *)v26;
  v31 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v30);
  v32 = cocos2d::CCDirector::getScreenTop(v31) + 1.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, v156 * 0.5, v32);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v29 + 184))(v26, v33);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v26, 1);
  v34 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
  v35 = *(_QWORD *)v34;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 0.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v35 + 288))(v34, v36);
  v37 = *(_QWORD *)v34;
  v39 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v38);
  v40 = cocos2d::CCDirector::getScreenBottom(v39) - 1.0;
  v42 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v41);
  v43 = cocos2d::CCDirector::getScreenLeft(v42) - 1.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, v43, v40);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v37 + 184))(v34, v44);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v34, 1);
  v45 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
  v46 = *(_QWORD *)v45;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, 1.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v46 + 288))(v45, v47);
  v48 = *(_QWORD *)v45;
  v50 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v49);
  v51 = cocos2d::CCDirector::getScreenBottom(v50) - 1.0;
  v53 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v52);
  v54 = cocos2d::CCDirector::getScreenRight(v53) + 1.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v155, v54, v51);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v48 + 184))(v45, v55);
  cocos2d::CCSprite::setFlipX(v45, 1);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v45, 1);
  v57 = (cocos2d::CCArray *)cocos2d::CCArray::create(v56);
  v59 = (cocos2d::CCArray *)cocos2d::CCArray::create(v58);
  v155 = v59;
  for ( i = 1; i < 23; ++i )
  {
    v61 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v152 = (char *)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v152);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v61 = *(_QWORD *)&qword_905FB0;
    }
    MainLevel = (struct cocos2d::CCObject *)GameLevelManager_getMainLevel(v61, i, 1u);
    cocos2d::CCArray::addObject(v59, MainLevel);
  }
  v63 = 3;
  do
  {
    v64 = (char *)operator new(0x240u);
    v152 = v64;
    cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)v64);
    *(_QWORD *)v64 = &LevelPage::`vftable';
    *((_QWORD *)v64 + 40) = &LevelPage::`vftable';
    *((_QWORD *)v64 + 41) = &LevelPage::`vftable';
    *((_QWORD *)v64 + 42) = &LevelPage::`vftable';
    *((_QWORD *)v64 + 43) = &LevelPage::`vftable';
    *((_QWORD *)v64 + 44) = &LevelPage::`vftable';
    *((_QWORD *)v64 + 51) = &LevelPage::`vftable';
    v64[416] = 0;
    *((_QWORD *)v64 + 53) = 0;
    *((_QWORD *)v64 + 54) = 0;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)(v64 + 520));
    *((_QWORD *)v64 + 70) = 0;
    *((_QWORD *)v64 + 71) = 0;
    if ( LevelPage_init((__int64 *)v64, 0) )
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v64);
    }
    else
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v64 + 8LL))(v64, 1);
      v64 = 0;
    }
    cocos2d::CCArray::addObject(v57, (struct cocos2d::CCObject *)v64);
    --v63;
  }
  while ( v63 );
  v152 = (char *)operator new(0x840u);
  v65 = GJGameLevel_GJGameLevel((__int64)v152);
  v66 = (cocos2d::CCObject *)v65;
  v67 = v159;
  v68 = v155;
  v69 = v158;
  if ( v65 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v65 + 72LL))(v65) )
    {
      cocos2d::CCObject::autorelease(v66);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v66 + 8LL))(v66, 1);
      v66 = 0;
    }
  }
  *((_DWORD *)v66 + 84) = -2;
  v70 = (float)((float)rand() / 32767.0) * 1000.0;
  *((_DWORD *)v66 + 83) = (int)v70;
  *((_DWORD *)v66 + 82) = (int)v70 - 2;
  cocos2d::CCArray::addObject(v68, v66);
  v152 = (char *)operator new(0x840u);
  v71 = GJGameLevel_GJGameLevel((__int64)v152);
  v72 = (cocos2d::CCObject *)v71;
  if ( v71 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v71 + 72LL))(v71) )
    {
      cocos2d::CCObject::autorelease(v72);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v72 + 8LL))(v72, 1);
      v72 = 0;
    }
  }
  *((_DWORD *)v72 + 84) = -1;
  v73 = (float)((float)rand() / 32767.0) * 1000.0;
  *((_DWORD *)v72 + 83) = (int)v73;
  *((_DWORD *)v72 + 82) = (int)v73 - 1;
  cocos2d::CCArray::addObject(v68, v72);
  LOBYTE(v74) = 1;
  v76 = sub_3F960((_DWORD)v57, v75, v74, (_DWORD)v68, (__int64)(v67 + 52));
  v77 = v67 + 56;
  v67[56] = v76;
  (*(void (__fastcall **)(__int64 *, __int64))(*v67 + 464))(v67, v76);
  v79 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v78);
  v80 = cocos2d::CCDirector::getScreenBottom(v79) + 15.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v152, v156 * 0.5, v80);
  v81 = v67[56];
  cocos2d::CCPoint::operator=(v81 + 572, v82);
  sub_40290(v81);
  *((float *)v67 + 106) = v156;
  *(_QWORD *)(*(_QWORD *)(v67[56] + 504) + 408LL) = v67 + 51;
  if ( v69 )
  {
    if ( v69 == 23 )
      BoomScrollLayer_instantMoveToPage(*v77, 22);
    BoomScrollLayer_instantMoveToPage(*v77, v69);
  }
  else
  {
    v83 = v67[51];
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v152, (const struct cocos2d::CCPoint *)&unk_904FF8);
    (*(void (__fastcall **)(__int64 *, __int64))(v83 + 16))(v67 + 51, v84);
  }
  v85 = cocos2d::CCLabelBMFont::create("Download the soundtrack", (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v85 + 160LL))(v85);
  v152 = (char *)operator new(0x208u);
  v86 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v152);
  if ( v86 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v86, (_DWORD)v85, 0, (_DWORD)v67, (__int64)LevelSelectLayer_onDownload) )
    {
      cocos2d::CCObject::autorelease(v86);
      goto LABEL_42;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v86 + 8LL))(v86, 1);
  }
  v86 = 0;
LABEL_42:
  *((_DWORD *)v86 + 93) = 1066192077;
  v87 = cocos2d::CCMenu::create(v86, 0);
  (*(void (__fastcall **)(__int64 *, struct cocos2d::CCMenu *))(*v67 + 464))(v67, v87);
  v88 = *(_QWORD *)v87;
  v90 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v89);
  v91 = cocos2d::CCDirector::getScreenBottom(v90) + 35.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v152, v156 * 0.5, v91);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v88 + 184))(v87, v92);
  v93 = v157 * 0.5;
  v98 = cocos2d::CCMenu::create(v95, v94, v96, v97);
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v67 + 456))(v67, v98, 5);
  v100 = *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v99) + 209);
  v101 = "navArrowBtn_001.png";
  v102 = "navArrowBtn_001.png";
  if ( v100 )
    v102 = "controllerBtn_DPad_Left_001.png";
  v103 = cocos2d::CCSprite::createWithSpriteFrameName(v102);
  v104 = (int)v103;
  if ( !v100 )
    cocos2d::CCSprite::setFlipX(v103, 1);
  v152 = (char *)operator new(0x208u);
  v105 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v152);
  if ( v105 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v105, v104, 0, (_DWORD)v67, (__int64)LevelSelectLayer_onPrev) )
    {
      cocos2d::CCObject::autorelease(v105);
      goto LABEL_51;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v105 + 8LL))(v105, 1);
  }
  v105 = 0;
LABEL_51:
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v98 + 464LL))(v98, v105);
  *((_DWORD *)v105 + 93) = 0x40000000;
  v106 = *(_QWORD *)v105;
  v108 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v107);
  v109 = cocos2d::CCDirector::getScreenLeft(v108) + 25.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v152, v109, v93);
  cocos2d::CCNode::convertToNodeSpace(v98, &v155, v110);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v106 + 184))(v105, v111);
  if ( v100 )
    v101 = "controllerBtn_DPad_Right_001.png";
  v112 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName(v101);
  v152 = (char *)operator new(0x208u);
  v113 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v152);
  if ( v113 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v113, v112, 0, (_DWORD)v67, (__int64)LevelSelectLayer_onNext) )
    {
      cocos2d::CCObject::autorelease(v113);
      goto LABEL_58;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v113 + 8LL))(v113, 1);
  }
  v113 = 0;
LABEL_58:
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v98 + 464LL))(v98, v113);
  *((_DWORD *)v113 + 93) = 0x40000000;
  v114 = *(_QWORD *)v113;
  v116 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v115);
  v117 = cocos2d::CCDirector::getScreenRight(v116) - 25.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v152, v117, v93);
  cocos2d::CCNode::convertToNodeSpace(v98, &v155, v118);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v114 + 184))(v113, v119);
  v120 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
  v152 = (char *)operator new(0x208u);
  v121 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v152);
  if ( v121 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v121, v120, 0, (_DWORD)v67, (__int64)LevelSelectLayer_onBack) )
    {
      cocos2d::CCObject::autorelease(v121);
      goto LABEL_63;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v121 + 8LL))(v121, 1);
  }
  v121 = 0;
LABEL_63:
  *((_DWORD *)v121 + 93) = 1070386381;
  v122 = cocos2d::CCMenu::create(v121, 0);
  (*(void (__fastcall **)(__int64 *, struct cocos2d::CCMenu *, __int64))(*v67 + 456))(v67, v122, 1);
  v123 = *(_QWORD *)v122;
  v125 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v124);
  v126 = cocos2d::CCDirector::getScreenTop(v125) - 22.0;
  v128 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v127);
  v129 = cocos2d::CCDirector::getScreenLeft(v128) + 25.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v152, v129, v126);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v123 + 184))(v122, v130);
  v135 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v152 = (char *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v152);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v135 = qword_905FD0;
  }
  *(_BYTE *)(v135 + 1096) = 0;
  v136 = cocos2d::CCMenu::create(v132, v131, v133, v134);
  (*(void (__fastcall **)(__int64 *, __int64))(*v67 + 464))(v67, v136);
  v137 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
  v152 = (char *)operator new(0x208u);
  v138 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v152);
  if ( v138 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v138, v137, 0, (_DWORD)v67, (__int64)LevelSelectLayer_onInfo) )
    {
      cocos2d::CCObject::autorelease(v138);
      goto LABEL_70;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v138 + 8LL))(v138, 1);
  }
  v138 = 0;
LABEL_70:
  *((_DWORD *)v138 + 93) = 0x40000000;
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v136 + 464LL))(v136, v138);
  v139 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("sideBtn_death_001.png");
  v152 = (char *)operator new(0x208u);
  v140 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v152);
  if ( !v140 )
  {
LABEL_74:
    v140 = 0;
    goto LABEL_75;
  }
  if ( !(unsigned __int8)sub_47940((_DWORD)v140, v139, 0, (_DWORD)v67, (__int64)sub_43EED0) )
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v140 + 8LL))(v140, 1);
    goto LABEL_74;
  }
  cocos2d::CCObject::autorelease(v140);
LABEL_75:
  v67[59] = (__int64)v140;
  *((_DWORD *)v140 + 93) = 0x40000000;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v136 + 464LL))(v136, v67[59]);
  v141 = *(_QWORD *)v67[59];
  v142 = v67[59];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v152, 0.0, -40.0);
  (*(void (__fastcall **)(__int64, __int64))(v141 + 184))(v142, v143);
  sub_43EF70(v67, *(unsigned int *)(*v77 + 588));
  v144 = *(_QWORD *)v136;
  v146 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v145);
  v147 = cocos2d::CCDirector::getScreenTop(v146) - 20.0;
  v149 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v148);
  v150 = cocos2d::CCDirector::getScreenRight(v149) - 20.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v152, v150, v147);
  (*(void (__fastcall **)(__int64, __int64))(v144 + 184))(v136, v151);
  if ( v100 )
    sub_6DEB0(v67, v121);
  return 1;
}
