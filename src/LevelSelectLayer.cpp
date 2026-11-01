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
