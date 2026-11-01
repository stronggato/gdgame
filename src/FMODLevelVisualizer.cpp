#include <Geode/binding/FMODLevelVisualizer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x24e4f0
// Method: FMODLevelVisualizer::updateVisualizer
// Hidden C++ exception states: #wind=3
void __fastcall FMODLevelVisualizer_updateVisualizer(__int64 a1, _QWORD *a2)
{
  cocos2d::CCObject *v4; // rsi
  __int64 v5; // r8
  cocos2d::CCArray *v6; // rdi
  void *v7; // r8
  __m128i si128; // xmm6
  unsigned int v9; // ebx
  __m128i v10; // xmm7
  cocos2d::CCString *v11; // rax
  int v12; // eax
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  void *v17; // rcx
  void *v18; // rcx
  cocos2d::CCObject *v19; // rcx
  __int128 v20; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+40h] [rbp-98h]
  void *Block[2]; // [rsp+50h] [rbp-88h] BYREF
  __m128i v23; // [rsp+60h] [rbp-78h]
  __int128 v24; // [rsp+70h] [rbp-68h] BYREF
  __int128 v25; // [rsp+80h] [rbp-58h]

  v4 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x24e528*/
  if ( a2[3] > 0xFu ) /*0x24e530*/
    a2 = (_QWORD *)*a2; /*0x24e532*/
  *(_OWORD *)Block = 0; /*0x24e538*/
  v23 = 0; /*0x24e540*/
  v5 = -1; /*0x24e546*/
  do /*0x24e553*/
    ++v5; /*0x24e550*/
  while ( *((_BYTE *)a2 + v5) ); /*0x24e553*/
  sub_3C230(Block); /*0x24e562*/
  v6 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_709CE8); /*0x24e579*/
  if ( v23.m128i_i64[1] > 0xFuLL ) /*0x24e585*/
  {
    v7 = Block[0]; /*0x24e58a*/
    if ( (unsigned __int64)(v23.m128i_i64[1] + 1) >= 0x1000 ) /*0x24e599*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x24e59f*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x24e5ae*/
        invoke_watson(0, 0, 0, 0, 0); /*0x24e5c3*/
    }
    j_j_free(v7); /*0x24e5cd*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x24e5d2*/
  v23 = si128; /*0x24e5da*/
  LOBYTE(Block[0]) = 0; /*0x24e5e0*/
  v9 = 0; /*0x24e5e5*/
  if ( v6 ) /*0x24e5ea*/
  {
    v10 = _mm_load_si128((const __m128i *)&xmmword_830EE0); /*0x24e5f0*/
    while ( v9 < cocos2d::CCArray::count(v6) ) /*0x24e60b*/
    {
      v11 = cocos2d::CCArray::stringAtIndex(v6, v9); /*0x24e616*/
      v12 = cocos2d::CCString::intValue(v11); /*0x24e61f*/
      if ( v12 > 0 ) /*0x24e627*/
      {
        v13 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v12); /*0x24e636*/
        CString = cocos2d::CCString::getCString(v13); /*0x24e63f*/
        v24 = 0; /*0x24e648*/
        v25 = 0; /*0x24e650*/
        v15 = -1; /*0x24e659*/
        do /*0x24e663*/
          ++v15; /*0x24e660*/
        while ( CString[v15] ); /*0x24e663*/
        sub_3C230(&v24); /*0x24e672*/
        v20 = 0; /*0x24e67b*/
        v21 = v10; /*0x24e680*/
        LOWORD(v20) = 49; /*0x24e686*/
        v16 = cocos2d::CCString::create(&v20); /*0x24e692*/
        cocos2d::CCDictionary::setObject(v4, v16, &v24); /*0x24e6a3*/
        if ( v21.m128i_i64[1] > 0xFuLL ) /*0x24e6b3*/
        {
          v17 = (void *)v20; /*0x24e6b8*/
          if ( (unsigned __int64)(v21.m128i_i64[1] + 1) >= 0x1000 ) /*0x24e6c7*/
          {
            v17 = *(void **)(v20 - 8); /*0x24e6cd*/
            if ( (unsigned __int64)(v20 - (_QWORD)v17 - 8) > 0x1F ) /*0x24e6dc*/
              invoke_watson(0, 0, 0, 0, 0); /*0x24e744*/
          }
          j_j_free(v17); /*0x24e6de*/
        }
        v21 = si128; /*0x24e6e3*/
        LOBYTE(v20) = 0; /*0x24e6e9*/
        if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x24e6fa*/
        {
          v18 = (void *)v24; /*0x24e6ff*/
          if ( (unsigned __int64)(*((_QWORD *)&v25 + 1) + 1LL) >= 0x1000 ) /*0x24e70e*/
          {
            v18 = *(void **)(v24 - 8); /*0x24e714*/
            if ( (unsigned __int64)(v24 - (_QWORD)v18 - 8) > 0x1F ) /*0x24e723*/
              invoke_watson(0, 0, 0, 0, 0); /*0x24e75e*/
          }
          j_j_free(v18); /*0x24e725*/
        }
      }
      ++v9; /*0x24e72a*/
    }
  }
  if ( *(cocos2d::CCObject **)(a1 + 872) != v4 ) /*0x24e76c*/
  {
    if ( v4 ) /*0x24e771*/
      cocos2d::CCObject::retain(v4); /*0x24e776*/
    v19 = *(cocos2d::CCObject **)(a1 + 872); /*0x24e77c*/
    if ( v19 ) /*0x24e786*/
      cocos2d::CCObject::release(v19); /*0x24e788*/
    *(_QWORD *)(a1 + 872) = v4; /*0x24e78e*/
  }
}

// [2/3] Address: 0x3a6030
// Method: FMODLevelVisualizer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *FMODLevelVisualizer_create()
{
  cocos2d::CCNode *v0; // rbx

  v0 = (cocos2d::CCNode *)operator new(0x148u); /*0x3a6040*/
  cocos2d::CCNode::CCNode(v0); /*0x3a604b*/
  *(_QWORD *)v0 = &FMODLevelVisualizer::`vftable'; /*0x3a6058*/
  *((_DWORD *)v0 + 80) = 0; /*0x3a605b*/
  if ( (unsigned __int8)FMODLevelVisualizer_init(v0) ) /*0x3a607b*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x3a608b*/
    return v0; /*0x3a6091*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x3a60a9*/
    return 0; /*0x3a60ac*/
  }
}

// [3/3] Address: 0x3a60c0
// Method: FMODLevelVisualizer::init
bool __fastcall FMODLevelVisualizer_init(cocos2d::CCNode *a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  cocos2d::CCTextureCache *v5; // rax
  cocos2d::CCTexture2D *v6; // rbx
  struct cocos2d::CCSpriteBatchNode *v7; // r14
  struct cocos2d::CCSprite *v8; // rbx
  int v9; // ebp
  float v10; // xmm7_4
  unsigned int v11; // r15d
  unsigned int v12; // esi
  struct cocos2d::CCSprite *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  struct cocos2d::CCSprite *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-C8h] BYREF
  float v21; // [rsp+F8h] [rbp+10h] BYREF
  char v22; // [rsp+100h] [rbp+18h] BYREF
  float v23; // [rsp+104h] [rbp+1Ch]
  char v24; // [rsp+108h] [rbp+20h] BYREF

  result = cocos2d::CCNode::init(a1); /*0x3a60cc*/
  if ( result ) /*0x3a60d4*/
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, void *))(*(_QWORD *)a1 + 312LL))(a1, &unk_904CA8); /*0x3a6155*/
    v5 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v4, v3); /*0x3a615b*/
    v6 = cocos2d::CCTextureCache::addImage(v5, "PixelSheet_01.png", 0); /*0x3a6177*/
    cocos2d::CCTexture2D::setAliasTexParameters(v6); /*0x3a617a*/
    v7 = cocos2d::CCSpriteBatchNode::createWithTexture(v6); /*0x3a6190*/
    (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCSpriteBatchNode *))(*(_QWORD *)a1 + 464LL))(a1, v7); /*0x3a619d*/
    (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 50); /*0x3a61af*/
    v8 = cocos2d::CCSprite::createWithSpriteFrameName("pixelart_base_001.png"); /*0x3a61cb*/
    (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v7 + 456LL))( /*0x3a61d8*/
      v7,
      v8,
      0xFFFFFFFFLL);
    (**((void (__fastcall ***)(__int64, void *))v8 + 40))((__int64)v8 + 320, &unk_6FE4A8); /*0x3a61ef*/
    *((_DWORD *)a1 + 80) = *((_DWORD *)v8 + 108); /*0x3a6205*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v8 + 120LL))(v8); /*0x3a6216*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v8 + 136LL))(v8); /*0x3a6231*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, -3.0, -48.0); /*0x3a624f*/
    v9 = 0; /*0x3a625e*/
    v10 = v21; /*0x3a628e*/
    while ( 1 ) /*0x3a62c0*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, (const struct cocos2d::CCPoint *)&v24); /*0x3a62c0*/
      v11 = 0; /*0x3a62c6*/
      if ( v9 ) /*0x3a62cd*/
      {
        if ( v9 == 1 ) /*0x3a62d2*/
        {
          v10 = 0.60000002; /*0x3a6306*/
          LOWORD(v21) = -1; /*0x3a630a*/
          v11 = 200; /*0x3a631d*/
        }
        else
        {
          if ( v9 != 2 ) /*0x3a62d7*/
            goto LABEL_10; /*0x3a62d7*/
          v10 = 0.85000002; /*0x3a62e0*/
          LOWORD(v21) = 255; /*0x3a62e4*/
          v11 = 300; /*0x3a62f7*/
        }
      }
      else
      {
        v10 = 0.0; /*0x3a632c*/
        LOWORD(v21) = -256; /*0x3a632f*/
        v11 = 100; /*0x3a6342*/
      }
      BYTE2(v21) = 0; /*0x3a6348*/
LABEL_10:
      v12 = 0; /*0x3a634f*/
      v23 = v23 + (float)(v10 * 96.0); /*0x3a6373*/
      while ( 1 ) /*0x3a6396*/
      {
        v13 = cocos2d::CCSprite::createWithSpriteFrameName("pixelart_base_001.png"); /*0x3a6396*/
        (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v7 + 456LL))( /*0x3a63a3*/
          v7,
          v13,
          v12);
        (**((void (__fastcall ***)(__int64, float *))v13 + 40))((__int64)v13 + 320, &v21); /*0x3a63bf*/
        if ( !v12 ) /*0x3a63c4*/
        {
          LOBYTE(v14) = 100; /*0x3a63d4*/
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 40) + 40LL))((__int64)v13 + 320, v14); /*0x3a63d6*/
        }
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, char *))(*(_QWORD *)v13 + 184LL))(v13, &v22); /*0x3a63e7*/
        v15 = *(_QWORD *)v13; /*0x3a63ed*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, 0.0, 0.0); /*0x3a63fb*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v15 + 288))(v13, v16); /*0x3a6407*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v13 + 120LL))(v13); /*0x3a6417*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v13 + 136LL))(v13); /*0x3a642d*/
        if ( v12 == 1 ) /*0x3a6436*/
          break; /*0x3a6436*/
        if ( (int)++v12 >= 2 ) /*0x3a643d*/
          goto LABEL_17; /*0x3a643d*/
      }
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, v11); /*0x3a644e*/
LABEL_17:
      if ( ++v9 >= 3 ) /*0x3a6456*/
      {
        v17 = cocos2d::CCSprite::createWithSpriteFrameName("pixelart_base_001.png"); /*0x3a64b8*/
        (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v7 + 456LL))( /*0x3a64c5*/
          v7,
          v17,
          2);
        (**((void (__fastcall ***)(__int64, void *))v17 + 40))((__int64)v17 + 320, &unk_6FE4A8); /*0x3a64d9*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, char *))(*(_QWORD *)v17 + 184LL))(v17, &v24); /*0x3a64f1*/
        v18 = *(_QWORD *)v17; /*0x3a64f4*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 0.0, 0.0); /*0x3a6505*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v18 + 288))(v17, v19); /*0x3a6511*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v17 + 120LL))(v17); /*0x3a6521*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v17 + 136LL))(v17); /*0x3a6538*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v17 + 64LL))(v17, 400); /*0x3a6549*/
        sub_3A6590(a1); /*0x3a6558*/
        return 1; /*0x3a6563*/
      }
    }
  }
  return result; /*0x3a60d6*/
}
