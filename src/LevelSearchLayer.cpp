#include <Geode/binding/LevelSearchLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/12] Address: 0x4301e0
// Method: LevelSearchLayer::scene
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelSearchLayer_scene(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  cocos2d::CCLayer *v7; // rdi

  v4 = a1; /*0x4301f4*/
  v5 = cocos2d::CCScene::create(a1, a2, a3, a4); /*0x4301fc*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v6) + 232) = v5; /*0x430205*/
  v7 = (cocos2d::CCLayer *)operator new(0x1F8u); /*0x430216*/
  cocos2d::CCLayer::CCLayer(v7); /*0x430221*/
  *(_QWORD *)v7 = &LevelSearchLayer::`vftable'; /*0x43022e*/
  *((_QWORD *)v7 + 40) = &LevelSearchLayer::`vftable'; /*0x430238*/
  *((_QWORD *)v7 + 41) = &LevelSearchLayer::`vftable'; /*0x430246*/
  *((_QWORD *)v7 + 42) = &LevelSearchLayer::`vftable'; /*0x430254*/
  *((_QWORD *)v7 + 43) = &LevelSearchLayer::`vftable'; /*0x430262*/
  *((_QWORD *)v7 + 44) = &LevelSearchLayer::`vftable'; /*0x430270*/
  *((_QWORD *)v7 + 51) = &LevelSearchLayer::`vftable'; /*0x43027e*/
  *((_QWORD *)v7 + 52) = &LevelSearchLayer::`vftable'; /*0x43028c*/
  *((_QWORD *)v7 + 53) = &LevelSearchLayer::`vftable'; /*0x43029a*/
  *((_DWORD *)v7 + 108) = 0; /*0x4302a3*/
  *((_QWORD *)v7 + 55) = 0; /*0x4302a9*/
  *((_QWORD *)v7 + 56) = 0; /*0x4302b0*/
  *((_QWORD *)v7 + 57) = 0; /*0x4302b7*/
  *((_QWORD *)v7 + 58) = 0; /*0x4302be*/
  *((_QWORD *)v7 + 59) = 0; /*0x4302c5*/
  *((_QWORD *)v7 + 60) = 0; /*0x4302cc*/
  *((_QWORD *)v7 + 61) = 0; /*0x4302d3*/
  *((_QWORD *)v7 + 62) = 0; /*0x4302da*/
  if ( (unsigned __int8)sub_430330(v7, v4) ) /*0x4302e6*/
  {
    cocos2d::CCObject::autorelease(v7); /*0x4302f2*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x430302*/
    v7 = 0; /*0x430305*/
  }
  (*(void (__fastcall **)(__int64, cocos2d::CCLayer *))(*(_QWORD *)v5 + 464LL))(v5, v7); /*0x430311*/
  return v5; /*0x43031a*/
}

// [2/12] Address: 0x432740
// Method: LevelSearchLayer::demonFilterSelectClosed
// Hidden C++ exception states: #wind=3
void __fastcall LevelSearchLayer_demonFilterSelectClosed(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct cocos2d::CCString *v6; // rax
  void *v7; // rcx
  char *v8; // rax
  cocos2d::CCString *v9; // rax
  char *CString; // rax
  size_t v11; // r8
  void **v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  cocos2d::CCSpriteFrameCache *v15; // rax
  struct cocos2d::CCSpriteFrame *v16; // rax
  void *v17; // rcx
  void *v18; // [rsp+30h] [rbp-68h]
  void *v19[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h]
  unsigned __int64 v21; // [rsp+50h] [rbp-48h]
  char Block[13]; // [rsp+58h] [rbp-40h] BYREF
  char v23; // [rsp+65h] [rbp-33h]
  __int16 v24; // [rsp+66h] [rbp-32h]
  __int64 v25; // [rsp+68h] [rbp-30h]
  unsigned __int64 v26; // [rsp+70h] [rbp-28h]

  v4 = *(_QWORD *)&qword_905FB0; /*0x432769*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x432773*/
  {
    v18 = operator new(0x690u); /*0x43277f*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0x43278d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x43279e*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x4327a0*/
  }
  v23 = 0; /*0x4327aa*/
  v24 = 0; /*0x4327aa*/
  v25 = 12; /*0x4327af*/
  v26 = 15; /*0x4327b8*/
  strcpy(Block, "demon_filter"); /*0x4327c9*/
  v5 = *(_QWORD *)(v4 + 848); /*0x4327de*/
  v6 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x4327ee*/
  cocos2d::CCDictionary::setObject(v5, v6, Block); /*0x4327ff*/
  if ( v26 > 0xF ) /*0x43280f*/
  {
    v7 = *(void **)Block; /*0x432814*/
    if ( v26 + 1 >= 0x1000 ) /*0x432823*/
    {
      v7 = *(void **)(*(_QWORD *)Block - 8LL); /*0x432829*/
      if ( (unsigned __int64)(*(_QWORD *)Block - (_QWORD)v7 - 8LL) > 0x1F ) /*0x432838*/
        invoke_watson(0, 0, 0, 0, 0); /*0x432849*/
    }
    j_j_free(v7); /*0x432850*/
  }
  *(_OWORD *)v19 = 0; /*0x432858*/
  v20 = 0; /*0x43285d*/
  v21 = 15; /*0x432862*/
  LOBYTE(v19[0]) = 0; /*0x43286b*/
  if ( a2 ) /*0x432872*/
  {
    v9 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn2_001.png", a2); /*0x4328c5*/
    CString = (char *)cocos2d::CCString::getCString(v9); /*0x4328ce*/
    v11 = -1; /*0x4328d4*/
    do /*0x4328e3*/
      ++v11; /*0x4328e0*/
    while ( CString[v11] ); /*0x4328e3*/
    sub_3F5A0(v19, CString, v11); /*0x4328f2*/
    v8 = (char *)v19[0]; /*0x4328f7*/
  }
  else
  {
    v8 = (char *)sub_3C460(32); /*0x432879*/
    v20 = 25; /*0x43287e*/
    v21 = 31; /*0x432887*/
    strcpy(v8, "difficulty_06_btn_001.png"); /*0x432897*/
    v19[0] = v8; /*0x4328b5*/
  }
  v12 = v19; /*0x4328fc*/
  if ( v21 > 0xF ) /*0x432907*/
    v12 = (void **)v8; /*0x432907*/
  v13 = **(_QWORD **)(a1 + 64); /*0x43290f*/
  v14 = *(_QWORD *)(a1 + 64); /*0x432912*/
  v15 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x432915*/
  v16 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v15, (const char *)v12); /*0x432921*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v13 + 1008))(v14, v16); /*0x43292d*/
  if ( v21 > 0xF ) /*0x43293d*/
  {
    v17 = v19[0]; /*0x432942*/
    if ( v21 + 1 >= 0x1000 ) /*0x432951*/
    {
      v17 = (void *)*((_QWORD *)v19[0] - 1); /*0x432957*/
      if ( (unsigned __int64)((char *)v19[0] - (char *)v17 - 8) > 0x1F ) /*0x432966*/
        invoke_watson(0, 0, 0, 0, 0); /*0x432977*/
    }
    j_j_free(v17); /*0x43297e*/
  }
}

// [3/12] Address: 0x4329b0
// Method: LevelSearchLayer::onSearchMode
bool __fastcall LevelSearchLayer_onSearchMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct cocos2d::CCScene *v4; // rax
  struct cocos2d::CCScene *v5; // rbx
  __int64 v6; // rcx
  cocos2d::CCDirector *v7; // rax

  v4 = (struct cocos2d::CCScene *)LevelSearchLayer_scene(*(_DWORD *)(a1 + 432) == 0, a2, a3, a4); /*0x4329c3*/
  v5 = cocos2d::CCTransitionFade::create(0.5, v4); /*0x4329d9*/
  v7 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v6); /*0x4329dc*/
  return cocos2d::CCDirector::replaceScene(v7, v5); /*0x4329e8*/
}

// [4/12] Address: 0x433de0
// Method: LevelSearchLayer::FLAlert_Clicked
__int64 __fastcall LevelSearchLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x433df7*/
  if ( !(_DWORD)result ) /*0x433dfc*/
  {
    if ( a3 ) /*0x433e00*/
      return sub_432C70(a1 - 416); /*0x433e09*/
  }
  return result; /*0x433e0e*/
}

// [5/12] Address: 0x433e20
// Method: LevelSearchLayer::textInputOpened
// Hidden C++ exception states: #wind=1
void __fastcall LevelSearchLayer_textInputOpened(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rcx
  char *v6; // rbx
  unsigned __int64 v7; // rdi
  size_t v8; // r8
  char *v9; // rax
  __int128 Buf2; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  void *Buf1[2]; // [rsp+58h] [rbp-40h] BYREF
  size_t v14; // [rsp+68h] [rbp-30h]
  unsigned __int64 v15; // [rsp+70h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x433e56*/
  *(_OWORD *)Buf1 = 0; /*0x433e5c*/
  v14 = 0; /*0x433e61*/
  v15 = 0; /*0x433e66*/
  v4 = -1; /*0x433e6b*/
  do /*0x433e75*/
    ++v4; /*0x433e72*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x433e75*/
  sub_3C230(Buf1); /*0x433e83*/
  Buf2 = 0; /*0x433e8c*/
  v11 = 0; /*0x433e91*/
  v12 = 15; /*0x433e96*/
  LOBYTE(Buf2) = 0; /*0x433e9f*/
  v5 = Buf1; /*0x433ea4*/
  v6 = (char *)Buf1[0]; /*0x433ea9*/
  v7 = v15; /*0x433eae*/
  if ( v15 > 0xF ) /*0x433eb7*/
    v5 = (void **)Buf1[0]; /*0x433eb7*/
  v8 = v14; /*0x433ebb*/
  if ( v14 ) /*0x433ec3*/
    v8 = 0; /*0x433ec3*/
  if ( !memcmp(v5, &Buf2, v8) && !v14 ) /*0x433edb*/
  {
    Buf2 = 0; /*0x433ee0*/
    v11 = 1; /*0x433ee5*/
    v12 = 15; /*0x433eee*/
    LOWORD(Buf2) = 32; /*0x433ef7*/
    SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 32), &Buf2); /*0x433f07*/
  }
  if ( v7 > 0xF ) /*0x433f11*/
  {
    v9 = v6; /*0x433f17*/
    if ( v7 + 1 >= 0x1000 ) /*0x433f21*/
    {
      v6 = (char *)*((_QWORD *)v6 - 1); /*0x433f27*/
      if ( (unsigned __int64)(v9 - v6 - 8) > 0x1F ) /*0x433f36*/
        invoke_watson(0, 0, 0, 0, 0); /*0x433f47*/
    }
    j_j_free(v6); /*0x433f51*/
  }
}

// [6/12] Address: 0x433f80
// Method: LevelSearchLayer::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall LevelSearchLayer_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rdx
  void *v6; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x433fa9*/
  *(_OWORD *)Block = 0; /*0x433faf*/
  v8 = 0; /*0x433fb7*/
  v4 = -1; /*0x433fbd*/
  do /*0x433fc7*/
    ++v4; /*0x433fc4*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x433fc7*/
  sub_3C230(Block); /*0x433fd6*/
  v5 = Block; /*0x433fdc*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x433fe7*/
    v5 = (void **)Block[0]; /*0x433fe7*/
  LevelSearchLayer_updateSearchLabel(a1 - 408, v5); /*0x433ff4*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x434003*/
  {
    v6 = Block[0]; /*0x434008*/
    if ( (unsigned __int64)(*((_QWORD *)&v8 + 1) + 1LL) >= 0x1000 ) /*0x434017*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x43401d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x43402c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x434041*/
    }
    j_j_free(v6); /*0x434048*/
  }
}

// [7/12] Address: 0x434060
// Method: LevelSearchLayer::updateSearchLabel
// Hidden C++ exception states: #wind=3
void __fastcall LevelSearchLayer_updateSearchLabel(__int64 a1, __int64 a2)
{
  const char *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  char v7; // r15
  void **v8; // rcx
  char *v9; // r12
  size_t v10; // r13
  size_t v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  size_t v16; // rsi
  void **v17; // r14
  unsigned __int64 v18; // rdi
  char *v19; // rbx
  bool v20; // r13
  void **v21; // rdx
  void **v22; // rcx
  size_t v23; // r13
  size_t v24; // r8
  char *v25; // rax
  char *v26; // rax
  void **v27; // rdi
  __int64 v28; // rbx
  void **v29; // rax
  int v30; // [rsp+30h] [rbp-79h] BYREF
  __int64 v31; // [rsp+38h] [rbp-71h]
  __int64 v32; // [rsp+40h] [rbp-69h]
  __int128 Buf2; // [rsp+48h] [rbp-61h] BYREF
  __int64 v34; // [rsp+58h] [rbp-51h]
  __int64 v35; // [rsp+60h] [rbp-49h]
  void *Block[2]; // [rsp+68h] [rbp-41h] BYREF
  size_t v37; // [rsp+78h] [rbp-31h]
  unsigned __int64 v38; // [rsp+80h] [rbp-29h]
  void *Src[2]; // [rsp+88h] [rbp-21h] BYREF
  size_t Size; // [rsp+98h] [rbp-11h]
  unsigned __int64 v41; // [rsp+A0h] [rbp-9h]
  void *Buf1[2]; // [rsp+A8h] [rbp-1h] BYREF
  size_t v43; // [rsp+B8h] [rbp+Fh]
  unsigned __int64 v44; // [rsp+C0h] [rbp+17h]

  v32 = a1; /*0x43408d*/
  v30 = 0; /*0x434093*/
  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 440) + 624LL); /*0x4340a4*/
  v3 = "Enter a level, user or id"; /*0x4340af*/
  if ( *(_DWORD *)(a1 + 432) == 1 ) /*0x4340bd*/
    v3 = "Enter a list or id"; /*0x4340bd*/
  *(_OWORD *)Src = 0; /*0x4340c4*/
  Size = 0; /*0x4340c8*/
  v41 = 0; /*0x4340cc*/
  v4 = -1; /*0x4340d0*/
  v5 = -1; /*0x4340d7*/
  do /*0x4340e3*/
    ++v5; /*0x4340e0*/
  while ( v3[v5] ); /*0x4340e3*/
  sub_3C230(Src); /*0x4340ed*/
  Buf2 = 0; /*0x4340f6*/
  v34 = 0; /*0x4340fa*/
  v35 = 15; /*0x4340fe*/
  LOBYTE(Buf2) = 0; /*0x434106*/
  v30 = 1; /*0x43410a*/
  *(_OWORD *)Buf1 = 0; /*0x434111*/
  v43 = 0; /*0x434115*/
  v44 = 0; /*0x434119*/
  v6 = -1; /*0x43411d*/
  do /*0x434123*/
    ++v6; /*0x434120*/
  while ( *(_BYTE *)(a2 + v6) ); /*0x434123*/
  sub_3C230(Buf1); /*0x434131*/
  v7 = 3; /*0x434137*/
  v30 = 3; /*0x43413d*/
  v8 = Buf1; /*0x434141*/
  v9 = (char *)Buf1[0]; /*0x434145*/
  if ( v44 > 0xF ) /*0x43414e*/
    v8 = (void **)Buf1[0]; /*0x43414e*/
  v10 = v43; /*0x434152*/
  v11 = v43; /*0x434156*/
  if ( v43 ) /*0x43415c*/
    v11 = 0; /*0x43415c*/
  v12 = memcmp(v8, &Buf2, v11); /*0x434164*/
  v16 = Size; /*0x434169*/
  v17 = (void **)Src[0]; /*0x43416d*/
  if ( v12 || v10 ) /*0x434178*/
  {
    *(_OWORD *)Block = 0; /*0x43418a*/
    v37 = 0; /*0x434190*/
    v38 = 0; /*0x434194*/
    do /*0x43419b*/
      ++v4; /*0x434198*/
    while ( *(_BYTE *)(a2 + v4) ); /*0x43419b*/
    sub_3C230(Block); /*0x4341aa*/
    v7 = 7; /*0x4341af*/
    v21 = Src; /*0x4341b5*/
    if ( v41 > 0xF ) /*0x4341be*/
      v21 = v17; /*0x4341be*/
    v22 = Block; /*0x4341c2*/
    v19 = (char *)Block[0]; /*0x4341c6*/
    v18 = v38; /*0x4341ca*/
    if ( v38 > 0xF ) /*0x4341d2*/
      v22 = (void **)Block[0]; /*0x4341d2*/
    v23 = v37; /*0x4341d6*/
    v24 = v37; /*0x4341da*/
    if ( v16 < v37 ) /*0x4341e0*/
      v24 = v16; /*0x4341e0*/
    v20 = !memcmp(v22, v21, v24) && v23 >= v16 && v23 <= v16; /*0x4341f4*/
  }
  else
  {
    v18 = v38; /*0x43417a*/
    v19 = (char *)Block[0]; /*0x43417e*/
    v20 = 1; /*0x434182*/
  }
  if ( (v7 & 4) != 0 ) /*0x434200*/
  {
    v7 &= ~4u; /*0x434202*/
    if ( v18 > 0xF ) /*0x43420a*/
    {
      v25 = v19; /*0x434210*/
      if ( v18 + 1 >= 0x1000 ) /*0x43421a*/
      {
        v19 = (char *)*((_QWORD *)v19 - 1); /*0x434220*/
        if ( (unsigned __int64)(v25 - v19 - 8) > 0x1F ) /*0x43422f*/
          invoke_watson(0, 0, 0, 0, 0); /*0x434244*/
      }
      j_j_free(v19); /*0x43424e*/
    }
  }
  if ( (v7 & 2) != 0 && v44 > 0xF ) /*0x434262*/
  {
    v26 = v9; /*0x434268*/
    if ( v44 + 1 >= 0x1000 ) /*0x434272*/
    {
      v9 = (char *)*((_QWORD *)v9 - 1); /*0x434278*/
      if ( (unsigned __int64)(v26 - v9 - 8) > 0x1F ) /*0x434288*/
        invoke_watson(0, 0, 0, 0, 0); /*0x43429d*/
    }
    j_j_free(v9); /*0x4342a7*/
  }
  if ( v20 ) /*0x4342b0*/
  {
    *(_OWORD *)Block = 0; /*0x4342b9*/
    v37 = 0; /*0x4342c0*/
    v38 = 0; /*0x4342c4*/
    v27 = Src; /*0x4342c8*/
    if ( v41 > 0xF ) /*0x4342d1*/
      v27 = v17; /*0x4342d1*/
    v28 = 0x7FFFFFFFFFFFFFFFLL; /*0x4342d5*/
    if ( v16 > 0x7FFFFFFFFFFFFFFFLL ) /*0x4342e2*/
      sub_8D90(v14, v13, v15); /*0x43440b*/
    if ( v16 > 0xF ) /*0x4342ec*/
    {
      if ( (v16 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x43430d*/
      {
        v28 = v16 | 0xF; /*0x43430f*/
        if ( (v16 | 0xF) < 0x16 ) /*0x43431a*/
          v28 = 22; /*0x43431a*/
      }
      Block[0] = (void *)sub_3C460(v28 + 1); /*0x434327*/
      v37 = v16; /*0x43432b*/
      v38 = v28; /*0x43432f*/
      memcpy(Block[0], v27, v16 + 1); /*0x43433d*/
    }
    else
    {
      v37 = v16; /*0x4342ee*/
      v38 = 15; /*0x4342f2*/
      *(_OWORD *)Block = *(_OWORD *)v27; /*0x4342fd*/
    }
    SpriteAnimationManager_executeAnimation(*(_QWORD *)(v32 + 440), Block); /*0x434351*/
    LOWORD(v30) = -26260; /*0x434356*/
    BYTE2(v30) = -40; /*0x43435c*/
    (**(void (__fastcall ***)(__int64, int *))(v31 + 368))(v31 + 368, &v30); /*0x434372*/
  }
  else
  {
    LOWORD(v30) = -1; /*0x434376*/
    BYTE2(v30) = -1; /*0x43437c*/
    (**(void (__fastcall ***)(__int64, int *))(v31 + 368))(v31 + 368, &v30); /*0x434392*/
  }
  if ( v41 > 0xF ) /*0x43439f*/
  {
    v29 = v17; /*0x4343a5*/
    if ( v41 + 1 >= 0x1000 ) /*0x4343af*/
    {
      v17 = (void **)*(v17 - 1); /*0x4343b5*/
      if ( (unsigned __int64)((char *)v29 - (char *)v17 - 8) > 0x1F ) /*0x4343c4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4343d5*/
    }
    j_j_free(v17); /*0x4343df*/
  }
}

// [8/12] Address: 0x434420
// Method: LevelSearchLayer::getSearchObject
// Hidden C++ exception states: #wind=25
__int64 __fastcall LevelSearchLayer_getSearchObject(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rcx
  cocos2d::CCString *v5; // rax
  void *v6; // r8
  char v7; // r15
  char v8; // r14
  char v9; // si
  char v10; // di
  char v11; // bl
  char v12; // al
  __int64 v13; // rcx
  char v14; // r13
  char v15; // r12
  char v16; // r15
  char v17; // r14
  char v18; // si
  char v19; // di
  char v20; // bl
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  cocos2d::CCString *v24; // rax
  void *v25; // r8
  __int64 v26; // rbx
  cocos2d::CCString *v27; // rax
  void *v28; // r8
  __int64 v29; // rbx
  cocos2d::CCString *v30; // rax
  void *v31; // r8
  __int64 v32; // rcx
  cocos2d::CCString *v33; // rax
  void *v34; // r8
  __int64 v35; // rcx
  cocos2d::CCString *v36; // rax
  void *v37; // r8
  __int64 v38; // rcx
  cocos2d::CCString *v39; // rax
  void *v40; // r8
  __int64 v41; // rcx
  cocos2d::CCString *v42; // rax
  void *v43; // r8
  __int64 v44; // rbx
  cocos2d::CCString *v45; // rax
  char v46; // r13
  void *v47; // r8
  __int64 v48; // rbx
  cocos2d::CCString *v49; // rax
  char v50; // r12
  void *v51; // r8
  __int64 v52; // rcx
  cocos2d::CCString *v53; // rax
  char v54; // r15
  void *v55; // r8
  __int64 v56; // rcx
  cocos2d::CCString *v57; // rax
  int v58; // r14d
  void *v59; // r8
  __int64 v60; // rcx
  cocos2d::CCString *v61; // rax
  char v62; // si
  void *v63; // r8
  __int64 v64; // rbx
  cocos2d::CCString *v65; // rax
  char v66; // di
  void *v67; // r8
  __int64 v68; // rcx
  cocos2d::CCString *v69; // rax
  char v70; // bl
  void *v71; // r8
  __int64 v72; // rbx
  char v74; // [rsp+B0h] [rbp-80h]
  char v75; // [rsp+B1h] [rbp-7Fh]
  char v76; // [rsp+B2h] [rbp-7Eh]
  char v77; // [rsp+B3h] [rbp-7Dh]
  char v78; // [rsp+B4h] [rbp-7Ch]
  char v79; // [rsp+B5h] [rbp-7Bh]
  void *v80; // [rsp+B8h] [rbp-78h]
  void *v81; // [rsp+B8h] [rbp-78h]
  void *v82; // [rsp+B8h] [rbp-78h]
  void *v83; // [rsp+B8h] [rbp-78h]
  void *v84; // [rsp+B8h] [rbp-78h]
  void *v85; // [rsp+B8h] [rbp-78h]
  void *v86; // [rsp+B8h] [rbp-78h]
  void *v87; // [rsp+B8h] [rbp-78h]
  void *v88; // [rsp+B8h] [rbp-78h]
  void *v89; // [rsp+B8h] [rbp-78h]
  void *v90; // [rsp+B8h] [rbp-78h]
  void *v91; // [rsp+B8h] [rbp-78h]
  void *v92; // [rsp+B8h] [rbp-78h]
  void *v93; // [rsp+C0h] [rbp-70h]
  void *v94; // [rsp+C0h] [rbp-70h]
  void *v95; // [rsp+C0h] [rbp-70h]
  int v96; // [rsp+C0h] [rbp-70h]
  int v97; // [rsp+C8h] [rbp-68h]
  void *v98; // [rsp+D0h] [rbp-60h]
  int v99; // [rsp+D0h] [rbp-60h]
  _BYTE v103[32]; // [rsp+108h] [rbp-28h] BYREF
  _BYTE v104[32]; // [rsp+128h] [rbp-8h] BYREF
  _BYTE v105[32]; // [rsp+148h] [rbp+18h] BYREF
  __int64 v106; // [rsp+168h] [rbp+38h]
  void *Block[2]; // [rsp+170h] [rbp+40h] BYREF
  __int64 v108; // [rsp+180h] [rbp+50h]
  unsigned __int64 v109; // [rsp+188h] [rbp+58h]
  void *v110[2]; // [rsp+190h] [rbp+60h] BYREF
  __int64 v111; // [rsp+1A0h] [rbp+70h]
  unsigned __int64 v112; // [rsp+1A8h] [rbp+78h]
  void *v113[2]; // [rsp+1B0h] [rbp+80h] BYREF
  __int64 v114; // [rsp+1C0h] [rbp+90h]
  unsigned __int64 v115; // [rsp+1C8h] [rbp+98h]

  v106 = a3; /*0x434461*/
  v4 = *(_QWORD *)&qword_905FB0; /*0x43447f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434489*/
  {
    v93 = operator new(0x690u); /*0x434495*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v93); /*0x4344a2*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4344b3*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x4344b5*/
  }
  v108 = 15; /*0x4344c0*/
  v109 = 15; /*0x4344c8*/
  strcpy((char *)Block, "original_filter"); /*0x4344d8*/
  v5 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v4 + 848), Block); /*0x43450a*/
  v97 = cocos2d::CCString::intValue(v5); /*0x434519*/
  if ( v109 > 0xF ) /*0x434524*/
  {
    v6 = Block[0]; /*0x434529*/
    if ( v109 + 1 >= 0x1000 ) /*0x434537*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x43453d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x43454c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x43455d*/
    }
    j_j_free(v6); /*0x434567*/
  }
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434574*/
  {
    v94 = operator new(0x690u); /*0x434580*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v94); /*0x43458d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x43459e*/
  }
  v7 = sub_437000(a1, 5); /*0x4345ad*/
  v8 = sub_437000(a1, 4); /*0x4345be*/
  v9 = sub_437000(a1, 3); /*0x4345cf*/
  v10 = sub_437000(a1, 2); /*0x4345df*/
  v11 = sub_437000(a1, 1); /*0x4345ef*/
  v12 = sub_437000(a1, 0); /*0x4345f7*/
  GameLevelManager_getLengthStr(v13, (__int64)v103, v12, v11, v10, v9, v8, v7); /*0x43461c*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x43462a*/
  {
    v95 = operator new(0x690u); /*0x434636*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v95); /*0x434643*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x434654*/
  }
  v14 = sub_4369D0(a1, 7); /*0x434664*/
  v15 = sub_4369D0(a1, 6); /*0x434675*/
  v16 = sub_4369D0(a1, 5); /*0x43468a*/
  v17 = sub_4369D0(a1, 4); /*0x43469b*/
  v18 = sub_4369D0(a1, 3); /*0x4346ac*/
  v19 = sub_4369D0(a1, 2); /*0x4346bc*/
  v20 = sub_4369D0(a1, 1); /*0x4346cc*/
  v21 = sub_4369D0(a1, 0); /*0x4346d5*/
  GameLevelManager_getDifficultyStr(v22, (__int64)v104, v21, v20, v19, v18, v17, v16, v15, v14); /*0x434704*/
  v96 = sub_3E4F0(v105, a3); /*0x434717*/
  v23 = *(_QWORD *)&qword_905FB0; /*0x43471b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434725*/
  {
    v98 = operator new(0x690u); /*0x434731*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v98); /*0x43473e*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x43474f*/
    v23 = *(_QWORD *)&qword_905FB0; /*0x434751*/
  }
  v108 = 12; /*0x43475d*/
  v109 = 15; /*0x434765*/
  strcpy((char *)Block, "demon_filter"); /*0x434775*/
  BYTE5(Block[1]) = 0; /*0x434780*/
  HIWORD(Block[1]) = 0; /*0x434780*/
  v24 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v23 + 848), Block); /*0x434792*/
  v99 = cocos2d::CCString::intValue(v24); /*0x4347a1*/
  if ( v109 > 0xF ) /*0x4347ac*/
  {
    v25 = Block[0]; /*0x4347b1*/
    if ( v109 + 1 >= 0x1000 ) /*0x4347bf*/
    {
      v25 = (void *)*((_QWORD *)Block[0] - 1); /*0x4347c5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F ) /*0x4347d4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4347e5*/
    }
    j_j_free(v25); /*0x4347ef*/
  }
  v108 = 0; /*0x4347f4*/
  v109 = 15; /*0x4347f8*/
  LOBYTE(Block[0]) = 0; /*0x434800*/
  v26 = *(_QWORD *)&qword_905FB0; /*0x434804*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x43480e*/
  {
    v80 = operator new(0x690u); /*0x43481a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v80); /*0x434827*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x434838*/
    v26 = *(_QWORD *)&qword_905FB0; /*0x43483a*/
  }
  *(_OWORD *)v110 = 0; /*0x434844*/
  v111 = 0; /*0x434848*/
  v112 = 0; /*0x43484c*/
  v110[0] = (void *)sub_3C460(32); /*0x43485a*/
  v111 = 16; /*0x43485e*/
  v112 = 31; /*0x434866*/
  strcpy((char *)v110[0], "completed_filter"); /*0x434875*/
  v27 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v26 + 848), v110); /*0x434887*/
  v74 = cocos2d::CCString::boolValue(v27); /*0x434896*/
  if ( v112 > 0xF ) /*0x4348a1*/
  {
    v28 = v110[0]; /*0x4348a6*/
    if ( v112 + 1 >= 0x1000 ) /*0x4348b4*/
    {
      v28 = (void *)*((_QWORD *)v110[0] - 1); /*0x4348ba*/
      if ( (unsigned __int64)((char *)v110[0] - (char *)v28 - 8) > 0x1F ) /*0x4348c9*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4348da*/
    }
    j_j_free(v28); /*0x4348e4*/
  }
  v111 = 0; /*0x4348e9*/
  v112 = 15; /*0x4348ed*/
  LOBYTE(v110[0]) = 0; /*0x4348f5*/
  v29 = *(_QWORD *)&qword_905FB0; /*0x4348f9*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434903*/
  {
    v81 = operator new(0x690u); /*0x43490f*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v81); /*0x43491c*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x43492d*/
    v29 = *(_QWORD *)&qword_905FB0; /*0x43492f*/
  }
  *(_OWORD *)Block = 0; /*0x434939*/
  v108 = 0; /*0x43493d*/
  v109 = 0; /*0x434941*/
  Block[0] = (void *)sub_3C460(32); /*0x43494f*/
  v108 = 16; /*0x434953*/
  v109 = 31; /*0x43495b*/
  strcpy((char *)Block[0], "legendary_filter"); /*0x43496a*/
  v30 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v29 + 848), Block); /*0x43497c*/
  v75 = cocos2d::CCString::boolValue(v30); /*0x43498b*/
  if ( v109 > 0xF ) /*0x434996*/
  {
    v31 = Block[0]; /*0x43499b*/
    if ( v109 + 1 >= 0x1000 ) /*0x4349a9*/
    {
      v31 = (void *)*((_QWORD *)Block[0] - 1); /*0x4349af*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v31 - 8) > 0x1F ) /*0x4349be*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4349cf*/
    }
    j_j_free(v31); /*0x4349d9*/
  }
  v108 = 0; /*0x4349de*/
  v109 = 15; /*0x4349e2*/
  LOBYTE(Block[0]) = 0; /*0x4349ea*/
  v32 = *(_QWORD *)&qword_905FB0; /*0x4349ee*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x4349f8*/
  {
    v82 = operator new(0x690u); /*0x434a04*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v82); /*0x434a11*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x434a22*/
    v32 = *(_QWORD *)&qword_905FB0; /*0x434a24*/
  }
  v114 = 13; /*0x434a35*/
  v115 = 15; /*0x434a40*/
  strcpy((char *)v113, "mythic_filter"); /*0x434a53*/
  HIWORD(v113[1]) = 0; /*0x434a61*/
  v33 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v32 + 848), v113); /*0x434a89*/
  v76 = cocos2d::CCString::boolValue(v33); /*0x434a98*/
  if ( v115 > 0xF ) /*0x434aa6*/
  {
    v34 = v113[0]; /*0x434aab*/
    if ( v115 + 1 >= 0x1000 ) /*0x434abc*/
    {
      v34 = (void *)*((_QWORD *)v113[0] - 1); /*0x434ac2*/
      if ( (unsigned __int64)((char *)v113[0] - (char *)v34 - 8) > 0x1F ) /*0x434ad1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x434ae2*/
    }
    j_j_free(v34); /*0x434aec*/
  }
  v114 = 0; /*0x434af1*/
  v115 = 15; /*0x434af8*/
  LOBYTE(v113[0]) = 0; /*0x434b03*/
  v35 = *(_QWORD *)&qword_905FB0; /*0x434b0a*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434b14*/
  {
    v83 = operator new(0x690u); /*0x434b20*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v83); /*0x434b2d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x434b3e*/
    v35 = *(_QWORD *)&qword_905FB0; /*0x434b40*/
  }
  v111 = 11; /*0x434b4e*/
  v112 = 15; /*0x434b56*/
  v110[0] = (void *)0x6C69665F63697065LL; /*0x434b66*/
  v110[1] = &off_726570 + 4; /*0x434b72*/
  v36 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v35 + 848), v110); /*0x434b8f*/
  v77 = cocos2d::CCString::boolValue(v36); /*0x434b9e*/
  if ( v112 > 0xF ) /*0x434ba9*/
  {
    v37 = v110[0]; /*0x434bae*/
    if ( v112 + 1 >= 0x1000 ) /*0x434bbc*/
    {
      v37 = (void *)*((_QWORD *)v110[0] - 1); /*0x434bc2*/
      if ( (unsigned __int64)((char *)v110[0] - (char *)v37 - 8) > 0x1F ) /*0x434bd1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x434be2*/
    }
    j_j_free(v37); /*0x434bec*/
  }
  v111 = 0; /*0x434bf1*/
  v112 = 15; /*0x434bf5*/
  LOBYTE(v110[0]) = 0; /*0x434bfd*/
  v38 = *(_QWORD *)&qword_905FB0; /*0x434c01*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434c0b*/
  {
    v84 = operator new(0x690u); /*0x434c17*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v84); /*0x434c24*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x434c35*/
    v38 = *(_QWORD *)&qword_905FB0; /*0x434c37*/
  }
  v114 = 11; /*0x434c48*/
  v115 = 15; /*0x434c53*/
  v113[0] = (void *)0x6C69665F6E696F63LL; /*0x434c66*/
  v113[1] = &off_726570 + 4; /*0x434c75*/
  v39 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v38 + 848), v113); /*0x434c9e*/
  v78 = cocos2d::CCString::boolValue(v39); /*0x434cad*/
  if ( v115 > 0xF ) /*0x434cbb*/
  {
    v40 = v113[0]; /*0x434cc0*/
    if ( v115 + 1 >= 0x1000 ) /*0x434cd1*/
    {
      v40 = (void *)*((_QWORD *)v113[0] - 1); /*0x434cd7*/
      if ( (unsigned __int64)((char *)v113[0] - (char *)v40 - 8) > 0x1F ) /*0x434ce6*/
        invoke_watson(0, 0, 0, 0, 0); /*0x434cf7*/
    }
    j_j_free(v40); /*0x434d01*/
  }
  v114 = 0; /*0x434d06*/
  v115 = 15; /*0x434d0d*/
  LOBYTE(v113[0]) = 0; /*0x434d18*/
  v41 = *(_QWORD *)&qword_905FB0; /*0x434d1f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434d29*/
  {
    v85 = operator new(0x690u); /*0x434d35*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v85); /*0x434d42*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x434d53*/
    v41 = *(_QWORD *)&qword_905FB0; /*0x434d55*/
  }
  v111 = 13; /*0x434d63*/
  v112 = 15; /*0x434d6b*/
  strcpy((char *)v110, "nostar_filter"); /*0x434d7b*/
  HIWORD(v110[1]) = 0; /*0x434d86*/
  v42 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v41 + 848), v110); /*0x434da2*/
  v79 = cocos2d::CCString::boolValue(v42); /*0x434db1*/
  if ( v112 > 0xF ) /*0x434dbc*/
  {
    v43 = v110[0]; /*0x434dc1*/
    if ( v112 + 1 >= 0x1000 ) /*0x434dcf*/
    {
      v43 = (void *)*((_QWORD *)v110[0] - 1); /*0x434dd5*/
      if ( (unsigned __int64)((char *)v110[0] - (char *)v43 - 8) > 0x1F ) /*0x434de4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x434df5*/
    }
    j_j_free(v43); /*0x434dff*/
  }
  v111 = 0; /*0x434e04*/
  v112 = 15; /*0x434e08*/
  LOBYTE(v110[0]) = 0; /*0x434e10*/
  v44 = *(_QWORD *)&qword_905FB0; /*0x434e14*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434e1e*/
  {
    v86 = operator new(0x690u); /*0x434e2a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v86); /*0x434e37*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x434e48*/
    v44 = *(_QWORD *)&qword_905FB0; /*0x434e4a*/
  }
  *(_OWORD *)Block = 0; /*0x434e54*/
  v108 = 0; /*0x434e58*/
  v109 = 0; /*0x434e5c*/
  Block[0] = (void *)sub_3C460(32); /*0x434e6a*/
  v108 = 17; /*0x434e6e*/
  v109 = 31; /*0x434e76*/
  strcpy((char *)Block[0], "enable_songFilter"); /*0x434e85*/
  v45 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v44 + 848), Block); /*0x434ea1*/
  v46 = cocos2d::CCString::boolValue(v45); /*0x434eb0*/
  if ( v109 > 0xF ) /*0x434ebc*/
  {
    v47 = Block[0]; /*0x434ec1*/
    if ( v109 + 1 >= 0x1000 ) /*0x434ecf*/
    {
      v47 = (void *)*((_QWORD *)Block[0] - 1); /*0x434ed5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v47 - 8) > 0x1F ) /*0x434ee4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x434ef5*/
    }
    j_j_free(v47); /*0x434eff*/
  }
  v108 = 0; /*0x434f04*/
  v109 = 15; /*0x434f08*/
  LOBYTE(Block[0]) = 0; /*0x434f10*/
  v48 = *(_QWORD *)&qword_905FB0; /*0x434f14*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x434f1e*/
  {
    v87 = operator new(0x690u); /*0x434f2a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v87); /*0x434f37*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x434f48*/
    v48 = *(_QWORD *)&qword_905FB0; /*0x434f4a*/
  }
  *(_OWORD *)v113 = 0; /*0x434f54*/
  v114 = 0; /*0x434f5b*/
  v115 = 0; /*0x434f62*/
  v113[0] = (void *)sub_3C460(32); /*0x434f73*/
  v114 = 17; /*0x434f7a*/
  v115 = 31; /*0x434f85*/
  strcpy((char *)v113[0], "customsong_filter"); /*0x434f97*/
  v49 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v48 + 848), v113); /*0x434fb6*/
  v50 = cocos2d::CCString::boolValue(v49); /*0x434fc5*/
  if ( v115 > 0xF ) /*0x434fd4*/
  {
    v51 = v113[0]; /*0x434fd9*/
    if ( v115 + 1 >= 0x1000 ) /*0x434fea*/
    {
      v51 = (void *)*((_QWORD *)v113[0] - 1); /*0x434ff0*/
      if ( (unsigned __int64)((char *)v113[0] - (char *)v51 - 8) > 0x1F ) /*0x434fff*/
        invoke_watson(0, 0, 0, 0, 0); /*0x435010*/
    }
    j_j_free(v51); /*0x43501a*/
  }
  v114 = 0; /*0x43501f*/
  v115 = 15; /*0x435026*/
  LOBYTE(v113[0]) = 0; /*0x435031*/
  v52 = *(_QWORD *)&qword_905FB0; /*0x435038*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x435042*/
  {
    v88 = operator new(0x690u); /*0x43504e*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v88); /*0x43505b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x43506c*/
    v52 = *(_QWORD *)&qword_905FB0; /*0x43506e*/
  }
  v111 = 11; /*0x43507c*/
  v112 = 15; /*0x435084*/
  v110[0] = (void *)0x6C69665F506F7774LL; /*0x435094*/
  v110[1] = &off_726570 + 4; /*0x4350a0*/
  v53 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v52 + 848), v110); /*0x4350bd*/
  v54 = cocos2d::CCString::boolValue(v53); /*0x4350cc*/
  if ( v112 > 0xF ) /*0x4350d8*/
  {
    v55 = v110[0]; /*0x4350dd*/
    if ( v112 + 1 >= 0x1000 ) /*0x4350eb*/
    {
      v55 = (void *)*((_QWORD *)v110[0] - 1); /*0x4350f1*/
      if ( (unsigned __int64)((char *)v110[0] - (char *)v55 - 8) > 0x1F ) /*0x435100*/
        invoke_watson(0, 0, 0, 0, 0); /*0x435111*/
    }
    j_j_free(v55); /*0x43511b*/
  }
  v111 = 0; /*0x435120*/
  v112 = 15; /*0x435124*/
  LOBYTE(v110[0]) = 0; /*0x43512c*/
  v56 = *(_QWORD *)&qword_905FB0; /*0x435130*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x43513a*/
  {
    v89 = operator new(0x690u); /*0x435146*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v89); /*0x435153*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x435164*/
    v56 = *(_QWORD *)&qword_905FB0; /*0x435166*/
  }
  v108 = 11; /*0x435174*/
  v109 = 15; /*0x43517c*/
  Block[0] = (void *)0x6C69665F676E6F73LL; /*0x43518c*/
  Block[1] = &off_726570 + 4; /*0x435198*/
  v57 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v56 + 848), Block); /*0x4351b5*/
  v58 = cocos2d::CCString::intValue(v57); /*0x4351c4*/
  if ( v109 > 0xF ) /*0x4351cf*/
  {
    v59 = Block[0]; /*0x4351d4*/
    if ( v109 + 1 >= 0x1000 ) /*0x4351e2*/
    {
      v59 = (void *)*((_QWORD *)Block[0] - 1); /*0x4351e8*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v59 - 8) > 0x1F ) /*0x4351f7*/
        invoke_watson(0, 0, 0, 0, 0); /*0x435208*/
    }
    j_j_free(v59); /*0x435212*/
  }
  v108 = 0; /*0x435217*/
  v109 = 15; /*0x43521b*/
  LOBYTE(Block[0]) = 0; /*0x435223*/
  v60 = *(_QWORD *)&qword_905FB0; /*0x435227*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x435231*/
  {
    v90 = operator new(0x690u); /*0x43523d*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v90); /*0x43524a*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x43525b*/
    v60 = *(_QWORD *)&qword_905FB0; /*0x43525d*/
  }
  v114 = 15; /*0x43526b*/
  v115 = 15; /*0x435276*/
  strcpy((char *)v113, "featured_filter"); /*0x435289*/
  v61 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v60 + 848), v113); /*0x4352cd*/
  v62 = cocos2d::CCString::boolValue(v61); /*0x4352dc*/
  if ( v115 > 0xF ) /*0x4352ea*/
  {
    v63 = v113[0]; /*0x4352ef*/
    if ( v115 + 1 >= 0x1000 ) /*0x435300*/
    {
      v63 = (void *)*((_QWORD *)v113[0] - 1); /*0x435306*/
      if ( (unsigned __int64)((char *)v113[0] - (char *)v63 - 8) > 0x1F ) /*0x435315*/
        invoke_watson(0, 0, 0, 0, 0); /*0x435326*/
    }
    j_j_free(v63); /*0x435330*/
  }
  v114 = 0; /*0x435335*/
  v115 = 15; /*0x43533c*/
  LOBYTE(v113[0]) = 0; /*0x435347*/
  v64 = *(_QWORD *)&qword_905FB0; /*0x43534e*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x435358*/
  {
    v91 = operator new(0x690u); /*0x435364*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v91); /*0x435371*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x43537e*/
    v64 = *(_QWORD *)&qword_905FB0; /*0x435381*/
  }
  *(_OWORD *)Block = 0; /*0x43538b*/
  v108 = 0; /*0x43538f*/
  v109 = 0; /*0x435393*/
  Block[0] = (void *)sub_3C460(32); /*0x4353a1*/
  v108 = 18; /*0x4353a5*/
  v109 = 31; /*0x4353ad*/
  strcpy((char *)Block[0], "uncompleted_filter"); /*0x4353bc*/
  v65 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v64 + 848), Block); /*0x4353d9*/
  v66 = cocos2d::CCString::boolValue(v65); /*0x4353e8*/
  if ( v109 > 0xF ) /*0x4353f3*/
  {
    v67 = Block[0]; /*0x4353f8*/
    if ( v109 + 1 >= 0x1000 ) /*0x435406*/
    {
      v67 = (void *)*((_QWORD *)Block[0] - 1); /*0x43540c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v67 - 8) > 0x1F ) /*0x43541b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x435430*/
    }
    j_j_free(v67); /*0x43543a*/
  }
  v108 = 0; /*0x43543f*/
  v109 = 15; /*0x435447*/
  LOBYTE(Block[0]) = 0; /*0x43544f*/
  v68 = *(_QWORD *)&qword_905FB0; /*0x435453*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x43545d*/
  {
    v92 = operator new(0x690u); /*0x435469*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v92); /*0x435476*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x435487*/
    v68 = *(_QWORD *)&qword_905FB0; /*0x435489*/
  }
  v111 = 11; /*0x435497*/
  v112 = 15; /*0x43549f*/
  v110[0] = (void *)0x6C69665F72617473LL; /*0x4354af*/
  v110[1] = &off_726570 + 4; /*0x4354bb*/
  v69 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v68 + 848), v110); /*0x4354d8*/
  v70 = cocos2d::CCString::boolValue(v69); /*0x4354e7*/
  if ( v112 > 0xF ) /*0x4354f2*/
  {
    v71 = v110[0]; /*0x4354f7*/
    if ( v112 + 1 >= 0x1000 ) /*0x435505*/
    {
      v71 = (void *)*((_QWORD *)v110[0] - 1); /*0x43550b*/
      if ( (unsigned __int64)((char *)v110[0] - (char *)v71 - 8) > 0x1F ) /*0x43551a*/
        invoke_watson(0, 0, 0, 0, 0); /*0x43552f*/
    }
    j_j_free(v71); /*0x435539*/
  }
  v72 = GJSearchObject_create_1( /*0x4355e0*/
          a2,
          v96,
          (unsigned int)v104,
          (unsigned int)v103,
          0,
          v70,
          v66,
          v62,
          v58,
          v97 != 0,
          v54,
          v50,
          v46,
          v79,
          v78,
          v77,
          v76,
          v75,
          v74,
          v99,
          0,
          *(_DWORD *)(a1 + 432));
  sub_3C310(a3); /*0x4355e7*/
  return v72; /*0x4355ef*/
}

// [9/12] Address: 0x4361a0
// Method: LevelSearchLayer::onClearFreeSearch
double __fastcall LevelSearchLayer_onClearFreeSearch(__int64 a1)
{
  _QWORD *v1; // rcx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 440); /*0x4361a4*/
  v4 = 0; /*0x4361b3*/
  v3 = 0; /*0x4361bc*/
  LOBYTE(v3) = 0; /*0x4361c1*/
  v5 = 15; /*0x4361c6*/
  return CCTextInputNode_setString(v1, &v3); /*0x4361d4*/
}

// [10/12] Address: 0x4361e0
// Method: LevelSearchLayer::onBack
// Hidden C++ exception states: #wind=1
char __fastcall LevelSearchLayer_onBack(_QWORD **a1)
{
  char result; // al
  void *v3; // [rsp+30h] [rbp+8h]

  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[55] + 1032LL))(a1[55], 0); /*0x4361f5*/
  if ( !qword_905FD0 ) /*0x436203*/
  {
    v3 = operator new(0x6E8u); /*0x43620f*/
    qword_905FD0 = sub_2723A0(v3); /*0x43621d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x43622e*/
  }
  result = GameManager_safePopScene(); /*0x436230*/
  if ( result ) /*0x436237*/
    return ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[124])(a1, 0); /*0x436246*/
  return result; /*0x43624d*/
}

// [11/12] Address: 0x436ac0
// Method: LevelSearchLayer::toggleDifficulty
// Hidden C++ exception states: #wind=2
__int64 __fastcall LevelSearchLayer_toggleDifficulty(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned __int8 v4; // si
  int i; // ebx
  unsigned int v6; // r15d
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  struct cocos2d::CCString *v11; // rax
  void *v12; // rcx
  char *v13; // rcx
  void (__fastcall *v14)(char *, __int16 *); // r8
  __int16 *v15; // rdx
  int j; // ebx
  int k; // ebx
  int m; // ebx
  __int64 v19; // rcx
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  cocos2d::CCString *v22; // rax
  bool v23; // bl
  void *v24; // r8
  __int16 v26; // [rsp+30h] [rbp-40h] BYREF
  char v27; // [rsp+32h] [rbp-3Eh]
  _WORD v28[2]; // [rsp+34h] [rbp-3Ch] BYREF
  void *v29; // [rsp+38h] [rbp-38h]
  void *Block[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+50h] [rbp-20h]
  unsigned __int64 v32; // [rsp+58h] [rbp-18h]

  v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x436af3*/
  v4 = sub_4369D0(a1, v3); /*0x436b00*/
  if ( *(_DWORD *)(a1 + 432) == 1 ) /*0x436b0d*/
  {
    for ( i = 0; i <= 7; ++i ) /*0x436b0f*/
    {
      if ( i != (_DWORD)v3 ) /*0x436b15*/
        sub_436E40(a1, (unsigned int)i, 0); /*0x436b1f*/
    }
  }
  v6 = v4 ^ 1; /*0x436b2f*/
  v7 = cocos2d::CCString::createWithFormat("D%i", (unsigned int)v3); /*0x436b3d*/
  CString = cocos2d::CCString::getCString(v7); /*0x436b46*/
  *(_OWORD *)Block = 0; /*0x436b4f*/
  v31 = 0; /*0x436b53*/
  v32 = 0; /*0x436b57*/
  v9 = -1; /*0x436b5b*/
  v10 = -1; /*0x436b62*/
  do /*0x436b68*/
    ++v10; /*0x436b65*/
  while ( CString[v10] ); /*0x436b68*/
  sub_3C230(Block); /*0x436b75*/
  v11 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v6); /*0x436b85*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 480), v11, Block); /*0x436b99*/
  if ( v32 > 0xF ) /*0x436ba8*/
  {
    v12 = Block[0]; /*0x436bad*/
    if ( v32 + 1 >= 0x1000 ) /*0x436bbb*/
    {
      v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x436bc1*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x436bd0*/
        invoke_watson(0, 0, 0, 0, 0); /*0x436be1*/
    }
    j_j_free(v12); /*0x436be8*/
  }
  v13 = (char *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 464), v3) + 320; /*0x436bfd*/
  v14 = **(void (__fastcall ***)(char *, __int16 *))v13; /*0x436c07*/
  if ( (_BYTE)v6 ) /*0x436c0d*/
  {
    v26 = -1; /*0x436c19*/
    v27 = -1; /*0x436c1d*/
    v15 = &v26; /*0x436c21*/
  }
  else
  {
    v26 = 32125; /*0x436c27*/
    memset(v28, 125, 3); /*0x436c31*/
    v15 = v28; /*0x436c39*/
  }
  v14(v13, v15); /*0x436c3d*/
  if ( !(_DWORD)v3 ) /*0x436c43*/
  {
    if ( (_BYTE)v6 ) /*0x436c48*/
    {
      for ( j = 1; j <= 7; ++j ) /*0x436c4a*/
        sub_436E40(a1, (unsigned int)j, 0); /*0x436c58*/
      goto LABEL_33; /*0x436c62*/
    }
    goto LABEL_31; /*0x436c48*/
  }
  if ( (_DWORD)v3 == 6 ) /*0x436c6d*/
  {
    if ( (_BYTE)v6 ) /*0x436c72*/
    {
      for ( k = 0; k <= 5; ++k ) /*0x436c74*/
        sub_436E40(a1, (unsigned int)k, 0); /*0x436c88*/
      goto LABEL_32; /*0x436c92*/
    }
LABEL_31:
    sub_436E40(a1, 0, 0); /*0x436cc6*/
    sub_436E40(a1, 6, 0); /*0x436cde*/
LABEL_32:
    sub_436E40(a1, 7, 0); /*0x436ce3*/
    goto LABEL_33; /*0x436cee*/
  }
  if ( (_DWORD)v3 != 7 || !(_BYTE)v6 ) /*0x436c9f*/
    goto LABEL_31; /*0x436c9f*/
  for ( m = 0; m <= 6; ++m ) /*0x436ca1*/
    sub_436E40(a1, (unsigned int)m, 0); /*0x436cb8*/
LABEL_33:
  v19 = *(_QWORD *)&qword_905FB0; /*0x436cf3*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x436cfd*/
  {
    v29 = operator new(0x690u); /*0x436d09*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v29); /*0x436d16*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x436d23*/
    v19 = *(_QWORD *)&qword_905FB0; /*0x436d27*/
  }
  sub_25DDF0(v19, (unsigned int)v3, (unsigned __int8)v6); /*0x436d35*/
  v20 = cocos2d::CCString::createWithFormat("D%i", 6); /*0x436d46*/
  v21 = cocos2d::CCString::getCString(v20); /*0x436d4f*/
  *(_OWORD *)Block = 0; /*0x436d58*/
  v31 = 0; /*0x436d5c*/
  v32 = 0; /*0x436d60*/
  do /*0x436d67*/
    ++v9; /*0x436d64*/
  while ( v21[v9] ); /*0x436d67*/
  sub_3C230(Block); /*0x436d77*/
  v22 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(a1 + 480), Block); /*0x436d88*/
  v23 = cocos2d::CCString::boolValue(v22); /*0x436d97*/
  if ( v32 > 0xF ) /*0x436da2*/
  {
    v24 = Block[0]; /*0x436da7*/
    if ( v32 + 1 >= 0x1000 ) /*0x436db5*/
    {
      v24 = (void *)*((_QWORD *)Block[0] - 1); /*0x436dbb*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v24 - 8) > 0x1F ) /*0x436dca*/
        invoke_watson(0, 0, 0, 0, 0); /*0x436ddb*/
    }
    j_j_free(v24); /*0x436de5*/
  }
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 496) + 936LL))(*(_QWORD *)(a1 + 496), v23); /*0x436df7*/
  return (*(__int64 (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 496) + 336LL))(*(_QWORD *)(a1 + 496), v23); /*0x436e10*/
}

// [12/12] Address: 0x437490
// Method: LevelSearchLayer::keyBackClicked
char __fastcall LevelSearchLayer_keyBackClicked(__int64 a1)
{
  return LevelSearchLayer_onBack((_QWORD **)(a1 - 336));
}
