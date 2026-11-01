#include <Geode/binding/GJAccountSettingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x188590
// Method: GJAccountSettingsLayer::closeAccInputNodes
// Hidden C++ exception states: #wind=1
void __fastcall GJAccountSettingsLayer_closeAccInputNodes(__int64 a1, DS_Dictionary *a2)
{
  __int64 v4; // rax
  cocos2d::CCArray *v5; // rcx
  signed int v6; // ebp
  signed int i; // ebx
  struct cocos2d::CCObject *v8; // rdi
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  __int64 v11; // r8
  const char *v12; // rdx
  void *v13; // rcx
  cocos2d::CCArray *v14; // rcx
  signed int v15; // ebp
  signed int j; // ebx
  struct cocos2d::CCObject *v17; // rdi
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  __int64 v20; // r8
  const char *v21; // rdx
  void *v22; // rcx
  __int128 v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+40h] [rbp-38h]

  if ( a2 ) /*0x188593*/
  {
    DS_Dictionary::setIntegerForKey(a2, "editorSFXVersion", 1); /*0x1885d0*/
    sub_182D10(a1); /*0x1885d9*/
    v4 = sub_186270(a1, &v23); /*0x1885e6*/
    DS_Dictionary::setStringForKey(a2, "editorSFX", v4); /*0x1885f9*/
    sub_3C310(&v23); /*0x188605*/
    v5 = *(cocos2d::CCArray **)(a1 + 208); /*0x18860a*/
    if ( v5 ) /*0x188614*/
      v6 = cocos2d::CCArray::count(v5); /*0x18861c*/
    else
      v6 = 0; /*0x188620*/
    DS_Dictionary::setIntegerForKey(a2, "editorSFXFavoriteCount", v6); /*0x18862f*/
    for ( i = 0; i < v6; ++i ) /*0x188639*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 208), i); /*0x18864f*/
      if ( v8 ) /*0x188655*/
      {
        v9 = cocos2d::CCString::createWithFormat("editorSFXFavorite_%d", i); /*0x188664*/
        CString = cocos2d::CCString::getCString(v9); /*0x18866d*/
        v23 = 0; /*0x188676*/
        v24 = 0; /*0x18867e*/
        v11 = -1; /*0x188684*/
        do /*0x188693*/
          ++v11; /*0x188690*/
        while ( CString[v11] ); /*0x188693*/
        sub_3C230(&v23); /*0x1886a2*/
        v12 = (const char *)&v23; /*0x1886a8*/
        if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x1886b3*/
          v12 = (const char *)v23; /*0x1886b3*/
        DS_Dictionary::setSubDictForKey(a2, v12, 0, 1); /*0x1886c2*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, DS_Dictionary *))(*(_QWORD *)v8 + 40LL))(v8, a2); /*0x1886d1*/
        DS_Dictionary::stepOutOfSubDict(a2); /*0x1886d7*/
        if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x1886e7*/
        {
          v13 = (void *)v23; /*0x1886ec*/
          if ( (unsigned __int64)(*((_QWORD *)&v24 + 1) + 1LL) >= 0x1000 ) /*0x1886fb*/
          {
            v13 = *(void **)(v23 - 8); /*0x188701*/
            if ( (unsigned __int64)(v23 - (_QWORD)v13 - 8) > 0x1F ) /*0x188710*/
              invoke_watson(0, 0, 0, 0, 0); /*0x18874a*/
          }
          j_j_free(v13); /*0x188712*/
        }
      }
    }
    v14 = *(cocos2d::CCArray **)(a1 + 216); /*0x188721*/
    if ( v14 ) /*0x18872b*/
      v15 = cocos2d::CCArray::count(v14); /*0x188733*/
    else
      v15 = 0; /*0x188751*/
    DS_Dictionary::setIntegerForKey(a2, "editorSFXMyCount", v15); /*0x188760*/
    DS_Dictionary::setIntegerForKey(a2, "editorSFXNextLocalID", *(_DWORD *)(a1 + 224)); /*0x188777*/
    for ( j = 0; j < v15; ++j ) /*0x188781*/
    {
      v17 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 216), j); /*0x18879f*/
      if ( v17 ) /*0x1887a5*/
      {
        v18 = cocos2d::CCString::createWithFormat("editorSFXMy_%d", j); /*0x1887b4*/
        v19 = cocos2d::CCString::getCString(v18); /*0x1887bd*/
        v23 = 0; /*0x1887c6*/
        v24 = 0; /*0x1887ce*/
        v20 = -1; /*0x1887d4*/
        do /*0x1887e3*/
          ++v20; /*0x1887e0*/
        while ( v19[v20] ); /*0x1887e3*/
        sub_3C230(&v23); /*0x1887f2*/
        v21 = (const char *)&v23; /*0x1887f8*/
        if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x188803*/
          v21 = (const char *)v23; /*0x188803*/
        DS_Dictionary::setSubDictForKey(a2, v21, 0, 1); /*0x188812*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, DS_Dictionary *))(*(_QWORD *)v17 + 40LL))(v17, a2); /*0x188821*/
        DS_Dictionary::stepOutOfSubDict(a2); /*0x188827*/
        if ( *((_QWORD *)&v24 + 1) > 0xFu ) /*0x188837*/
        {
          v22 = (void *)v23; /*0x18883c*/
          if ( (unsigned __int64)(*((_QWORD *)&v24 + 1) + 1LL) >= 0x1000 ) /*0x18884b*/
          {
            v22 = *(void **)(v23 - 8); /*0x188851*/
            if ( (unsigned __int64)(v23 - (_QWORD)v22 - 8) > 0x1F ) /*0x188860*/
              invoke_watson(0, 0, 0, 0, 0); /*0x1888be*/
          }
          j_j_free(v22); /*0x188862*/
        }
      }
    }
    DS_Dictionary::setFloatForKey(a2, "editorSFXGlobalVolume", *(float *)(a1 + 264)); /*0x188883*/
  }
}

// [2/6] Address: 0x39acd0
// Method: GJAccountSettingsLayer::createToggleButton
// Hidden C++ exception states: #wind=1
cocos2d::CCMenuItem *__fastcall GJAccountSettingsLayer_createToggleButton(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        float a7,
        float a8)
{
  struct cocos2d::CCSprite *v11; // rbp
  struct cocos2d::CCSprite *v12; // rbx
  cocos2d::CCMenuItem *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  const char *v17; // rcx
  cocos2d::CCLabelBMFont *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  float *v21; // rax
  __int64 v22; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v25[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h]

  v26 = a2; /*0x39ad01*/
  v11 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"); /*0x39ad23*/
  v12 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"); /*0x39ad33*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v11 + 160LL))(v11); /*0x39ad4f*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 160LL))(v12); /*0x39ad61*/
  v13 = CCMenuItemToggler_create((__int64)v11, (__int64)v12, a1, a3); /*0x39ad74*/
  LOBYTE(v14) = 1; /*0x39ad77*/
  CCMenuItemToggler_toggle((__int64)v13, v14); /*0x39ad7c*/
  (*(void (__fastcall **)(__int64, cocos2d::CCMenuItem *))(*(_QWORD *)a5 + 464LL))(a5, v13); /*0x39ad91*/
  v15 = *(_QWORD *)v13; /*0x39ad94*/
  cocos2d::CCNode::convertToNodeSpace(a5, v24, a6); /*0x39ada2*/
  (*(void (__fastcall **)(cocos2d::CCMenuItem *, __int64))(v15 + 184))(v13, v16); /*0x39adae*/
  *(_DWORD *)(*((_QWORD *)v13 + 47) + 372LL) = 1069547520; /*0x39adbb*/
  *(_DWORD *)(*((_QWORD *)v13 + 48) + 372LL) = 1069547520; /*0x39adcc*/
  CCMenuItemToggler_toggle((__int64)v13, *((unsigned __int8 *)v13 + 392)); /*0x39ade1*/
  v17 = (const char *)a2; /*0x39ade6*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x39adee*/
    v17 = *(const char **)a2; /*0x39adf0*/
  v18 = cocos2d::CCLabelBMFont::create(v17, (const char *)&qword_6FFF68); /*0x39ae00*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x39ae17*/
    *(_QWORD *)(a1 + 584),
    v18);
  v19 = *(_QWORD *)v18; /*0x39ae1a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v24, 0.0, 0.5); /*0x39ae28*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v19 + 288))(v18, v20); /*0x39ae34*/
  v21 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v11 + 320LL))(v11); /*0x39ae41*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, (float)((float)(*v21 * 0.5) * 0.5) + 4.0, 0.0); /*0x39ae63*/
  cocos2d::CCPoint::operator+(a6, v24, v22); /*0x39ae74*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v18 + 184LL))(v18, v24); /*0x39ae85*/
  cocos2d::CCLabelBMFont::limitLabelWidth(v18, a7, a8, 0.0); /*0x39aea3*/
  sub_3C310(a2); /*0x39aead*/
  return v13; /*0x39aeb5*/
}

// [3/6] Address: 0x39b300
// Method: GJAccountSettingsLayer::onClose
__int64 __fastcall GJAccountSettingsLayer_onClose(_QWORD *a1)
{
  __int64 v2; // rdx

  sub_39B190(a1, a1[86]); /*0x39b310*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x39b31d*/
  LOBYTE(v2) = 1; /*0x39b326*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v2);
}

// [4/6] Address: 0x39b340
// Method: GJAccountSettingsLayer::onUpdate
// Hidden C++ exception states: #wind=6
__int64 __fastcall GJAccountSettingsLayer_onUpdate(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+74h] [rbp-8Ch] BYREF
  int v20; // [rsp+78h] [rbp-88h] BYREF
  int v21; // [rsp+7Ch] [rbp-84h] BYREF
  int v22; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v23; // [rsp+88h] [rbp-78h]
  _BYTE *v24; // [rsp+90h] [rbp-70h]
  _BYTE *v25; // [rsp+98h] [rbp-68h]
  _BYTE *v26; // [rsp+A0h] [rbp-60h]
  _BYTE *v27; // [rsp+A8h] [rbp-58h]
  _BYTE *v28; // [rsp+B0h] [rbp-50h]
  _BYTE v29[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v30[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v31[32]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v32[32]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v33[32]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v34[32]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v35[88]; // [rsp+178h] [rbp+78h] BYREF
  int v37; // [rsp+1F0h] [rbp+F0h] BYREF
  int v38; // [rsp+1F8h] [rbp+F8h] BYREF

  v1 = a1; /*0x39b364*/
  sub_39B190(a1, *(_QWORD *)(a1 + 688)); /*0x39b36e*/
  v23 = v29; /*0x39b377*/
  v37 = 6; /*0x39b37b*/
  v24 = v30; /*0x39b389*/
  v38 = 5; /*0x39b38d*/
  v25 = v31; /*0x39b39b*/
  v18 = 4; /*0x39b39f*/
  v26 = v32; /*0x39b3ab*/
  v19 = 3; /*0x39b3af*/
  v27 = v33; /*0x39b3bb*/
  v20 = 2; /*0x39b3bf*/
  v28 = v34; /*0x39b3cb*/
  v21 = 1; /*0x39b3cf*/
  v22 = 0; /*0x39b3d7*/
  v1 += 696; /*0x39b3de*/
  v2 = sub_2D27F0(v1, &v37); /*0x39b3ef*/
  v3 = sub_3E4F0(v29, v2); /*0x39b400*/
  v4 = sub_2D27F0(v1, &v38); /*0x39b40d*/
  v5 = sub_3E4F0(v30, v4); /*0x39b41e*/
  v6 = sub_2D27F0(v1, &v18); /*0x39b429*/
  v7 = sub_3E4F0(v31, v6); /*0x39b43a*/
  v8 = sub_2D27F0(v1, &v19); /*0x39b445*/
  v9 = sub_3E4F0(v32, v8); /*0x39b456*/
  v10 = sub_2D27F0(v1, &v20); /*0x39b461*/
  v11 = sub_3E4F0(v33, v10); /*0x39b472*/
  v12 = sub_2D27F0(v1, &v21); /*0x39b47d*/
  v13 = sub_3E4F0(v34, v12); /*0x39b48e*/
  v14 = sub_2D27F0(v1, &v22); /*0x39b498*/
  v15 = sub_3E4F0(v35, v14); /*0x39b4a4*/
  v16 = sub_39C610( /*0x39b4fc*/
          a1,
          *(_DWORD *)(a1 + 668),
          *(_DWORD *)(a1 + 672),
          *(_DWORD *)(a1 + 676),
          *(_DWORD *)(a1 + 680),
          *(_DWORD *)(a1 + 684),
          v15,
          v13,
          v11,
          v9,
          v7,
          v5,
          v3);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 1064LL))(v16); /*0x39b510*/
}

// [5/6] Address: 0x39b530
// Method: GJAccountSettingsLayer::updateScoreValues
// Hidden C++ exception states: #wind=2
double __fastcall GJAccountSettingsLayer_updateScoreValues(int *a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCObject *v3; // rax
  struct cocos2d::CCObject *v4; // rdi
  int *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  void *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  void *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  void *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  void *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  void *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  void *v33; // rdx
  double result; // xmm0_8
  _BYTE v35[32]; // [rsp+20h] [rbp-20h] BYREF
  void *v36; // [rsp+60h] [rbp+20h] BYREF
  __int64 v37; // [rsp+68h] [rbp+28h]

  v2 = *(_QWORD *)&qword_905FB0; /*0x39b542*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x39b54c*/
  {
    v36 = operator new(0x690u); /*0x39b558*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v36); /*0x39b565*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x39b576*/
    v2 = *(_QWORD *)&qword_905FB0; /*0x39b578*/
  }
  v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v2 + 1232), a1[166]); /*0x39b58d*/
  v4 = v3; /*0x39b593*/
  if ( v3 ) /*0x39b599*/
  {
    *((_DWORD *)v3 + 113) = a1[167]; /*0x39b5a5*/
    *((_DWORD *)v3 + 114) = a1[168]; /*0x39b5b1*/
    *((_DWORD *)v3 + 115) = a1[169]; /*0x39b5bd*/
    *((_DWORD *)v3 + 116) = a1[170]; /*0x39b5c9*/
    *((_DWORD *)v3 + 117) = a1[171]; /*0x39b5d5*/
    LODWORD(v36) = 0; /*0x39b5db*/
    v5 = a1 + 174; /*0x39b5e2*/
    v6 = sub_2D27F0(a1 + 174, &v36); /*0x39b5f0*/
    v7 = sub_3E4F0(v35, v6); /*0x39b5fc*/
    v8 = v7; /*0x39b601*/
    v37 = v7; /*0x39b604*/
    if ( (struct cocos2d::CCObject *)((char *)v4 + 480) != (struct cocos2d::CCObject *)v7 ) /*0x39b612*/
    {
      v9 = (void *)v7; /*0x39b614*/
      if ( *(_QWORD *)(v7 + 24) > 0xFu ) /*0x39b61c*/
        v9 = *(void **)v7; /*0x39b61e*/
      sub_3F5A0((char *)v4 + 480, v9, *(_QWORD *)(v7 + 16)); /*0x39b625*/
    }
    sub_3C310(v8); /*0x39b62e*/
    LODWORD(v36) = 1; /*0x39b633*/
    v10 = sub_2D27F0(v5, &v36); /*0x39b641*/
    v11 = sub_3E4F0(v35, v10); /*0x39b64d*/
    v12 = v11; /*0x39b652*/
    v37 = v11; /*0x39b655*/
    if ( (struct cocos2d::CCObject *)((char *)v4 + 512) != (struct cocos2d::CCObject *)v11 ) /*0x39b663*/
    {
      v13 = (void *)v11; /*0x39b665*/
      if ( *(_QWORD *)(v11 + 24) > 0xFu ) /*0x39b66d*/
        v13 = *(void **)v11; /*0x39b66f*/
      sub_3F5A0((char *)v4 + 512, v13, *(_QWORD *)(v11 + 16)); /*0x39b676*/
    }
    sub_3C310(v12); /*0x39b67f*/
    LODWORD(v36) = 2; /*0x39b684*/
    v14 = sub_2D27F0(v5, &v36); /*0x39b692*/
    v15 = sub_3E4F0(v35, v14); /*0x39b69e*/
    v16 = v15; /*0x39b6a3*/
    v37 = v15; /*0x39b6a6*/
    if ( (struct cocos2d::CCObject *)((char *)v4 + 544) != (struct cocos2d::CCObject *)v15 ) /*0x39b6b4*/
    {
      v17 = (void *)v15; /*0x39b6b6*/
      if ( *(_QWORD *)(v15 + 24) > 0xFu ) /*0x39b6be*/
        v17 = *(void **)v15; /*0x39b6c0*/
      sub_3F5A0((char *)v4 + 544, v17, *(_QWORD *)(v15 + 16)); /*0x39b6c7*/
    }
    sub_3C310(v16); /*0x39b6d0*/
    LODWORD(v36) = 3; /*0x39b6d5*/
    v18 = sub_2D27F0(v5, &v36); /*0x39b6e3*/
    v19 = sub_3E4F0(v35, v18); /*0x39b6ef*/
    v20 = v19; /*0x39b6f4*/
    v37 = v19; /*0x39b6f7*/
    if ( (struct cocos2d::CCObject *)((char *)v4 + 608) != (struct cocos2d::CCObject *)v19 ) /*0x39b705*/
    {
      v21 = (void *)v19; /*0x39b707*/
      if ( *(_QWORD *)(v19 + 24) > 0xFu ) /*0x39b70f*/
        v21 = *(void **)v19; /*0x39b711*/
      sub_3F5A0((char *)v4 + 608, v21, *(_QWORD *)(v19 + 16)); /*0x39b718*/
    }
    sub_3C310(v20); /*0x39b721*/
    LODWORD(v36) = 4; /*0x39b726*/
    v22 = sub_2D27F0(v5, &v36); /*0x39b734*/
    v23 = sub_3E4F0(v35, v22); /*0x39b740*/
    v24 = v23; /*0x39b745*/
    v37 = v23; /*0x39b748*/
    if ( (struct cocos2d::CCObject *)((char *)v4 + 640) != (struct cocos2d::CCObject *)v23 ) /*0x39b756*/
    {
      v25 = (void *)v23; /*0x39b758*/
      if ( *(_QWORD *)(v23 + 24) > 0xFu ) /*0x39b760*/
        v25 = *(void **)v23; /*0x39b762*/
      sub_3F5A0((char *)v4 + 640, v25, *(_QWORD *)(v23 + 16)); /*0x39b769*/
    }
    sub_3C310(v24); /*0x39b772*/
    LODWORD(v36) = 5; /*0x39b777*/
    v26 = sub_2D27F0(v5, &v36); /*0x39b785*/
    v27 = sub_3E4F0(v35, v26); /*0x39b791*/
    v28 = v27; /*0x39b796*/
    v37 = v27; /*0x39b799*/
    if ( (struct cocos2d::CCObject *)((char *)v4 + 576) != (struct cocos2d::CCObject *)v27 ) /*0x39b7a7*/
    {
      v29 = (void *)v27; /*0x39b7a9*/
      if ( *(_QWORD *)(v27 + 24) > 0xFu ) /*0x39b7b1*/
        v29 = *(void **)v27; /*0x39b7b3*/
      sub_3F5A0((char *)v4 + 576, v29, *(_QWORD *)(v27 + 16)); /*0x39b7ba*/
    }
    sub_3C310(v28); /*0x39b7c3*/
    LODWORD(v36) = 6; /*0x39b7c8*/
    v30 = sub_2D27F0(v5, &v36); /*0x39b7d6*/
    v31 = sub_3E4F0(v35, v30); /*0x39b7e2*/
    v32 = v31; /*0x39b7e7*/
    v37 = v31; /*0x39b7ea*/
    if ( (struct cocos2d::CCObject *)((char *)v4 + 672) != (struct cocos2d::CCObject *)v31 ) /*0x39b7f8*/
    {
      v33 = (void *)v31; /*0x39b7fa*/
      if ( *(_QWORD *)(v31 + 24) > 0xFu ) /*0x39b802*/
        v33 = *(void **)v31; /*0x39b804*/
      sub_3F5A0((char *)v4 + 672, v33, *(_QWORD *)(v31 + 16)); /*0x39b80b*/
    }
    return sub_3C310(v32); /*0x39b814*/
  }
  return result; /*0x39b819*/
}

// [6/6] Address: 0x39b830
// Method: GJAccountSettingsLayer::keyBackClicked
__int64 __fastcall GJAccountSettingsLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = a1 - 336; /*0x39b83d*/
  sub_39B190(a1 - 336, *(_QWORD *)(a1 + 352)); /*0x39b847*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x39b854*/
  LOBYTE(v2) = 1; /*0x39b85d*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v2);
}
