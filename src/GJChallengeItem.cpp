#include <Geode/binding/GJChallengeItem.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x2d2ec0
// Method: GJChallengeItem::~GJChallengeItem
cocos2d::CCObject *__fastcall GJChallengeItem__dtor_GJChallengeItem(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 112); /*0x2d2ed3*/
  cocos2d::CCObject::~CCObject(Block); /*0x2d2edb*/
  if ( (a2 & 1) != 0 ) /*0x2d2ee4*/
    j_j_free(Block); /*0x2d2eee*/
  return Block; /*0x2d2ef3*/
}

// [2/4] Address: 0x2f5d50
// Method: GJChallengeItem::createFromString
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJChallengeItem_createFromString(__int64 a1)
{
  cocos2d::CCArray *v2; // rbx
  cocos2d::CCString *v4; // rax
  int v5; // r12d
  cocos2d::CCString *v6; // rax
  int v7; // r13d
  cocos2d::CCString *v8; // rax
  cocos2d::CCString *v9; // rax
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void **v16; // r14
  char *v17; // rbp
  unsigned __int64 v18; // r15
  __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  __int64 v21; // rbx
  char *v22; // rcx
  int v23; // [rsp+30h] [rbp-88h]
  int v24; // [rsp+34h] [rbp-84h]
  __int128 v25; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-70h]
  __int64 v27; // [rsp+50h] [rbp-68h]
  __int64 v28; // [rsp+60h] [rbp-58h]
  void *Src[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]
  unsigned __int64 v31; // [rsp+80h] [rbp-38h]

  v28 = a1; /*0x2f5d84*/
  v2 = (cocos2d::CCArray *)sub_D09B0(a1, &unk_709CE8); /*0x2f5d95*/
  if ( cocos2d::CCArray::count(v2) >= 5 ) /*0x2f5da4*/
  {
    v4 = cocos2d::CCArray::stringAtIndex(v2, 0); /*0x2f5dba*/
    v5 = cocos2d::CCString::intValue(v4); /*0x2f5dc9*/
    v6 = cocos2d::CCArray::stringAtIndex(v2, 1u); /*0x2f5dd4*/
    v7 = cocos2d::CCString::intValue(v6); /*0x2f5de3*/
    v8 = cocos2d::CCArray::stringAtIndex(v2, 2u); /*0x2f5dee*/
    v24 = cocos2d::CCString::intValue(v8); /*0x2f5dfd*/
    v9 = cocos2d::CCArray::stringAtIndex(v2, 3u); /*0x2f5e09*/
    v23 = cocos2d::CCString::intValue(v9); /*0x2f5e18*/
    v10 = cocos2d::CCArray::stringAtIndex(v2, 4u); /*0x2f5e24*/
    CString = cocos2d::CCString::getCString(v10); /*0x2f5e2d*/
    *(_OWORD *)Src = 0; /*0x2f5e36*/
    v30 = 0; /*0x2f5e3d*/
    v31 = 0; /*0x2f5e42*/
    v12 = -1; /*0x2f5e4a*/
    do /*0x2f5e54*/
      ++v12; /*0x2f5e51*/
    while ( CString[v12] ); /*0x2f5e54*/
    sub_3C230(Src); /*0x2f5e62*/
    v25 = 0; /*0x2f5e6b*/
    v26 = 0; /*0x2f5e70*/
    v27 = 0; /*0x2f5e75*/
    v16 = Src; /*0x2f5e7a*/
    v17 = (char *)Src[0]; /*0x2f5e7f*/
    v18 = v31; /*0x2f5e84*/
    if ( v31 > 0xF ) /*0x2f5e90*/
      v16 = (void **)Src[0]; /*0x2f5e90*/
    v19 = 0x7FFFFFFFFFFFFFFFLL; /*0x2f5e94*/
    v20 = v30; /*0x2f5e9e*/
    if ( v30 > 0x7FFFFFFFFFFFFFFFLL ) /*0x2f5ea6*/
      sub_8D90(v14, v13, v15); /*0x2f5fb8*/
    if ( v30 > 0xF ) /*0x2f5eb0*/
    {
      if ( (v30 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x2f5ed5*/
      {
        v19 = v30 | 0xF; /*0x2f5ed7*/
        if ( (v30 | 0xF) < 0x16 ) /*0x2f5ee2*/
          v19 = 22; /*0x2f5ee2*/
      }
      *(_QWORD *)&v25 = sub_3C460(v19 + 1); /*0x2f5eef*/
      v26 = v20; /*0x2f5ef4*/
      v27 = v19; /*0x2f5ef9*/
      memcpy((void *)v25, v16, v20 + 1); /*0x2f5f08*/
    }
    else
    {
      v26 = v30; /*0x2f5eb2*/
      v27 = 15; /*0x2f5eb7*/
      v25 = *(_OWORD *)v16; /*0x2f5ec4*/
    }
    v21 = GJChallengeItem_create(v7, v24, v23, v5, (__int64)&v25); /*0x2f5f2b*/
    if ( v18 > 0xF ) /*0x2f5f32*/
    {
      v22 = v17; /*0x2f5f38*/
      if ( v18 + 1 >= 0x1000 ) /*0x2f5f42*/
      {
        v17 = (char *)*((_QWORD *)v17 - 1); /*0x2f5f48*/
        if ( (unsigned __int64)(v22 - v17 - 8) > 0x1F ) /*0x2f5f57*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2f5f6c*/
      }
      j_j_free(v17); /*0x2f5f76*/
    }
    sub_3C310(a1); /*0x2f5f7f*/
    return v21; /*0x2f5f84*/
  }
  else
  {
    sub_3C310(a1); /*0x2f5da9*/
    return 0; /*0x2f5dae*/
  }
}

// [3/4] Address: 0x2f5fc0
// Method: GJChallengeItem::create
// Hidden C++ exception states: #wind=3
char *__fastcall GJChallengeItem_create(int a1, int a2, int a3, int a4, __int64 a5)
{
  char *v9; // rsi
  size_t *v10; // rax
  size_t *v11; // r14
  void *v12; // rdx
  float v13; // xmm0_4
  float v14; // xmm0_4
  char v16[32]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = a5; /*0x2f5ffe*/
  v9 = (char *)operator new(0x90u); /*0x2f600d*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v9); /*0x2f6018*/
  *(_QWORD *)v9 = &GJChallengeItem::`vftable'; /*0x2f6025*/
  *((_QWORD *)v9 + 7) = 0; /*0x2f602a*/
  *((_QWORD *)v9 + 8) = 0; /*0x2f602e*/
  *((_QWORD *)v9 + 9) = 0; /*0x2f6032*/
  *((_QWORD *)v9 + 10) = 0; /*0x2f6036*/
  *((_QWORD *)v9 + 11) = 0; /*0x2f603a*/
  *((_DWORD *)v9 + 24) = 0; /*0x2f603e*/
  v9[100] = 0; /*0x2f6041*/
  *((_DWORD *)v9 + 26) = 0; /*0x2f6044*/
  *((_OWORD *)v9 + 7) = 0; /*0x2f604e*/
  *((_QWORD *)v9 + 16) = 0; /*0x2f6052*/
  *((_QWORD *)v9 + 17) = 15; /*0x2f6056*/
  v9[112] = 0; /*0x2f605e*/
  sub_3E4F0(v16, a5); /*0x2f6069*/
  v11 = v10; /*0x2f606e*/
  *((_DWORD *)v9 + 14) = a1; /*0x2f6076*/
  *((_DWORD *)v9 + 24) = a4; /*0x2f6079*/
  if ( v9 + 112 != (char *)v10 ) /*0x2f607f*/
  {
    v12 = v10; /*0x2f6081*/
    if ( v10[3] > 0xF ) /*0x2f6089*/
      v12 = (void *)*v10; /*0x2f608b*/
    sub_3F5A0(v9 + 112, v12, v10[2]); /*0x2f6095*/
  }
  *((_DWORD *)v9 + 23) = a2; /*0x2f609a*/
  v13 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2f60b3*/
  *((_DWORD *)v9 + 22) = (int)v13; /*0x2f60bf*/
  *((_DWORD *)v9 + 21) = a2 + (int)v13; /*0x2f60c5*/
  *((_DWORD *)v9 + 20) = a3; /*0x2f60c8*/
  v14 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2f60e0*/
  *((_DWORD *)v9 + 19) = (int)v14; /*0x2f60ec*/
  *((_DWORD *)v9 + 18) = a3 + (int)v14; /*0x2f60f1*/
  sub_3C310(v11); /*0x2f60f7*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v9); /*0x2f60ff*/
  sub_3C310(a5); /*0x2f6109*/
  return v9; /*0x2f6111*/
}

// [4/4] Address: 0x2f6140
// Method: GJChallengeItem::encodeWithCoder
void __fastcall GJChallengeItem_encodeWithCoder(__int64 a1, DS_Dictionary *a2)
{
  DS_Dictionary::setIntegerForKey(a2, "kCEK", 7); /*0x2f6160*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708050, *(_DWORD *)(a1 + 56)); /*0x2f6174*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708038, *(_DWORD *)(a1 + 96)); /*0x2f6188*/
  DS_Dictionary::setBoolForKey(a2, "6", *(_BYTE *)(a1 + 100)); /*0x2f619d*/
  DS_Dictionary::setStringForKey(a2, &word_708030, a1 + 112); /*0x2f61b1*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708048, *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 64)); /*0x2f61c9*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708044, *(_DWORD *)(a1 + 84) - *(_DWORD *)(a1 + 88)); /*0x2f61e1*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_70803C, *(_DWORD *)(a1 + 72) - *(_DWORD *)(a1 + 76)); /*0x2f61f9*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708028, *(_DWORD *)(a1 + 104)); /*0x2f6217*/
}
