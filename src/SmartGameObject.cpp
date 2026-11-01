#include <Geode/binding/SmartGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x632820
// Method: SmartGameObject::~SmartGameObject
cocos2d::CCSprite *__fastcall SmartGameObject__dtor_SmartGameObject(cocos2d::CCSprite *Block, char a2)
{
  sub_3C310((char *)Block + 1400); /*0x632836*/
  sub_3C310((char *)Block + 1368); /*0x632842*/
  TextGameObject__dtor_TextGameObject(Block); /*0x63284a*/
  if ( (a2 & 1) != 0 ) /*0x632852*/
    j_j_free(Block); /*0x63285c*/
  return Block; /*0x632861*/
}

// [2/4] Address: 0x63c710
// Method: SmartGameObject::updateSmartFrame
void __fastcall SmartGameObject_updateSmartFrame(__int64 *a1)
{
  int v2; // ecx
  int v3; // ecx
  const char *v4; // rax
  char *v5; // rbx
  size_t v6; // rdi
  __int64 v7; // r8
  const char *v8; // r14
  char *v9; // r15
  void **v10; // rdx
  const char *v11; // rcx
  size_t v12; // r12
  size_t v13; // r13
  size_t v14; // r8
  int v15; // ebp
  char *v16; // rax
  __int64 v17; // rbx
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  void *Buf2[2]; // [rsp+30h] [rbp-58h] BYREF
  size_t Size; // [rsp+40h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v2 = *((_DWORD *)a1 + 259) - 2895; /*0x63c72f*/
  if ( v2 ) /*0x63c735*/
  {
    v3 = v2 - 1; /*0x63c737*/
    if ( v3 ) /*0x63c73a*/
    {
      if ( v3 != 1 ) /*0x63c73f*/
        return; /*0x63c73f*/
      v4 = "smartBlock03b_001.png"; /*0x63c745*/
      v5 = "smartBlock03_001.png"; /*0x63c74c*/
    }
    else
    {
      v4 = "smartBlock02b_001.png"; /*0x63c755*/
      v5 = "smartBlock02_001.png"; /*0x63c75c*/
    }
  }
  else
  {
    v4 = "smartBlock01b_001.png"; /*0x63c765*/
    v5 = "smartBlock01_001.png"; /*0x63c76c*/
  }
  if ( *((_BYTE *)a1 + 1360) ) /*0x63c773*/
    v5 = (char *)v4; /*0x63c78d*/
  v6 = -1; /*0x63c7a0*/
  v7 = -1; /*0x63c7ac*/
  Size = 0; /*0x63c7af*/
  v22 = 0; /*0x63c7b4*/
  *(_OWORD *)Buf2 = 0; /*0x63c7be*/
  do /*0x63c7c6*/
    ++v7; /*0x63c7c3*/
  while ( v5[v7] ); /*0x63c7c6*/
  sub_3C230(Buf2); /*0x63c7d4*/
  v8 = (const char *)(a1 + 175); /*0x63c7df*/
  v9 = (char *)Buf2[0]; /*0x63c7e6*/
  v10 = Buf2; /*0x63c7eb*/
  if ( v22 > 0xF ) /*0x63c7f0*/
    v10 = (void **)Buf2[0]; /*0x63c7f0*/
  v11 = (const char *)(a1 + 175); /*0x63c7f4*/
  if ( (unsigned __int64)a1[178] > 0xF ) /*0x63c7fc*/
    v11 = *(const char **)v8; /*0x63c7fe*/
  v12 = a1[177]; /*0x63c801*/
  v13 = Size; /*0x63c805*/
  v14 = v12; /*0x63c80a*/
  if ( Size < v12 ) /*0x63c810*/
    v14 = Size; /*0x63c810*/
  v15 = memcmp(v11, v10, v14); /*0x63c819*/
  if ( !v15 ) /*0x63c81d*/
  {
    if ( v12 >= v13 ) /*0x63c822*/
      v15 = v12 > v13; /*0x63c82d*/
    else
      v15 = -1; /*0x63c824*/
  }
  if ( v22 > 0xF ) /*0x63c847*/
  {
    v16 = v9; /*0x63c84d*/
    if ( v22 + 1 >= 0x1000 ) /*0x63c857*/
    {
      v9 = (char *)*((_QWORD *)v9 - 1); /*0x63c859*/
      if ( (unsigned __int64)(v16 - v9 - 8) > 0x1F ) /*0x63c86c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x63c881*/
    }
    j_j_free(v9); /*0x63c88b*/
  }
  if ( v15 ) /*0x63c892*/
  {
    do /*0x63c897*/
      ++v6; /*0x63c894*/
    while ( v5[v6] ); /*0x63c897*/
    sub_3F5A0(a1 + 175, v5, v6); /*0x63c8a6*/
    if ( (unsigned __int64)a1[178] > 0xF ) /*0x63c8b0*/
      v8 = *(const char **)v8; /*0x63c8b2*/
    v17 = *a1; /*0x63c8b5*/
    v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x63c8b8*/
    v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v8); /*0x63c8c4*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v17 + 1008))(a1, v19); /*0x63c8d0*/
  }
}

// [3/4] Address: 0x63c910
// Method: SmartGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall SmartGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 updated; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-288h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-270h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-260h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-238h] BYREF

  *(_QWORD *)&v10 = a2; /*0x63c93a*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x63c946*/
  updated = UpdateAccountSettingsPopup_init(a1, v12, a3); /*0x63c958*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, updated); /*0x63c96f*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63c97e*/
  sub_3C310(v12); /*0x63c98a*/
  if ( *(_BYTE *)(a1 + 1360) ) /*0x63c98f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c99f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c9a4*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63c9b3*/
    fmt::BasicWriter<char>::operator<<(v13, 157); /*0x63c9c3*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c9c9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c9ce*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63c9dd*/
    fmt::BasicWriter<char>::operator<<(v13, 1); /*0x63c9ed*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x63c9f8*/
  *(_OWORD *)a2 = 0; /*0x63ca01*/
  *(_QWORD *)(a2 + 16) = 0; /*0x63ca04*/
  *(_QWORD *)(a2 + 24) = 0; /*0x63ca08*/
  v8 = -1; /*0x63ca0c*/
  do /*0x63ca16*/
    ++v8; /*0x63ca13*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x63ca16*/
  sub_3C230(a2); /*0x63ca23*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x63ca2e*/
  return a2; /*0x63ca37*/
}

// [4/4] Address: 0x63ca60
// Method: SmartGameObject::customObjectSetup
void __fastcall SmartGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  const char *v5; // rcx

  if ( *(_QWORD *)(*(_QWORD *)a3 + 1256LL) ) /*0x63ca6c*/
  {
    v5 = (const char *)(*(_QWORD *)a2 + 5024LL); /*0x63ca7d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5048LL) > 0xFu ) /*0x63ca89*/
      v5 = *(const char **)v5; /*0x63ca8b*/
    v4 = atoi(v5); /*0x63ca8e*/
  }
  else
  {
    v4 = 0; /*0x63ca76*/
  }
  *(_BYTE *)(a1 + 1360) = v4 != 0; /*0x63ca9c*/
  SmartGameObject_updateSmartFrame((__int64 *)a1); /*0x63caa7*/
}
