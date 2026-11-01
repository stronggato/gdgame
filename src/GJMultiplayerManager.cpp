#include <Geode/binding/GJMultiplayerManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x189790
// Method: GJMultiplayerManager::addComment
// Hidden C++ exception states: #wind=3
char __fastcall GJMultiplayerManager_addComment(__int64 a1, __int64 a2, void *a3)
{
  int v5; // esi
  __int64 v6; // r15
  __int64 v8; // rax
  char v9; // bl
  int v10; // ebp
  _QWORD *v11; // r14
  _QWORD *i; // rbx
  cocos2d::CCArray **v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  void *v16; // rdx
  _BYTE v17[16]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v18; // [rsp+48h] [rbp-60h]
  _BYTE v19[32]; // [rsp+58h] [rbp-50h] BYREF

  v5 = 0; /*0x1897b8*/
  v6 = sub_189210(); /*0x1897bf*/
  if ( v6 ) /*0x1897c5*/
  {
    v8 = sub_186270(a1, v19); /*0x1897f0*/
    cocos2d::ZipUtils::compressString(v17, v8, 0, 0xFFFFFFFFLL, 0); /*0x18980b*/
    sub_3C310(v19); /*0x189817*/
    if ( v18 ) /*0x189823*/
    {
      v10 = 0; /*0x189846*/
      v11 = *(_QWORD **)(a1 + 8); /*0x189848*/
      for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i ) /*0x189852*/
      {
        v13 = (cocos2d::CCArray **)i[3]; /*0x189854*/
        if ( v13 && *v13 && cocos2d::CCArray::count(*v13) ) /*0x189865*/
        {
          ++v5; /*0x18986f*/
          v10 += cocos2d::CCArray::count(*v13); /*0x18987a*/
        }
      }
      v14 = sub_3E4F0(v19, v17); /*0x18988e*/
      v15 = v14; /*0x189893*/
      if ( v6 + 512 != v14 ) /*0x1898a5*/
      {
        v16 = (void *)v14; /*0x1898a7*/
        if ( *(_QWORD *)(v14 + 24) > 0xFu ) /*0x1898af*/
          v16 = *(void **)v14; /*0x1898b1*/
        sub_3F5A0((void *)(v6 + 512), v16, *(_QWORD *)(v14 + 16)); /*0x1898b8*/
      }
      sub_3C310(v15); /*0x1898c1*/
      *(_BYTE *)(v6 + 544) = 1; /*0x1898c6*/
      *(_DWORD *)(v6 + 360) = v10; /*0x1898ce*/
      *(_DWORD *)(v6 + 356) = v5; /*0x1898d5*/
      ++*(_DWORD *)(v6 + 332); /*0x1898dc*/
      *(_DWORD *)(v6 + 372) = time64(0); /*0x1898eb*/
      v9 = 1; /*0x1898f2*/
    }
    else
    {
      if ( a3 ) /*0x189828*/
        sub_3F5A0(a3, "No active sound actions to save.", 0x20u); /*0x18983a*/
      v9 = 0; /*0x18983f*/
    }
    sub_3C310(v17); /*0x1898f9*/
    return v9; /*0x1898fe*/
  }
  else
  {
    if ( a3 ) /*0x1897ca*/
      sub_3F5A0(a3, "List not found.", 0xFu); /*0x1897dc*/
    return 0; /*0x1897e1*/
  }
}

// [2/8] Address: 0x38c6d0
// Method: GJMultiplayerManager::~GJMultiplayerManager
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall GJMultiplayerManager__dtor_GJMultiplayerManager(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &GJMultiplayerManager::`vftable'; /*0x38c6e6*/
  qword_906008 = 0; /*0x38c6e9*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 40); /*0x38c6f4*/
  if ( v4 ) /*0x38c6fe*/
    cocos2d::CCObject::release(v4); /*0x38c700*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 41); /*0x38c706*/
  if ( v5 ) /*0x38c710*/
    cocos2d::CCObject::release(v5); /*0x38c712*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 42); /*0x38c718*/
  if ( v6 ) /*0x38c722*/
    cocos2d::CCObject::release(v6); /*0x38c724*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 43); /*0x38c72a*/
  if ( v7 ) /*0x38c734*/
    cocos2d::CCObject::release(v7); /*0x38c736*/
  cocos2d::CCNode::~CCNode(Block); /*0x38c73f*/
  if ( (a2 & 1) != 0 ) /*0x38c74a*/
    j_j_free(Block); /*0x38c754*/
  return Block; /*0x38c75c*/
}

// [3/8] Address: 0x38c770
// Method: GJMultiplayerManager::sharedState
// Hidden C++ exception states: #wind=1
__int64 GJMultiplayerManager_sharedState()
{
  __int64 result; // rax
  cocos2d::CCNode *v1; // [rsp+30h] [rbp+8h]

  result = qword_906008; /*0x38c776*/
  if ( !qword_906008 ) /*0x38c780*/
  {
    v1 = (cocos2d::CCNode *)operator new(0x170u); /*0x38c793*/
    cocos2d::CCNode::CCNode(v1); /*0x38c79b*/
    *(_QWORD *)v1 = &GJMultiplayerManager::`vftable'; /*0x38c7a8*/
    *((_QWORD *)v1 + 40) = 0; /*0x38c7ad*/
    *((_QWORD *)v1 + 41) = 0; /*0x38c7b4*/
    *((_QWORD *)v1 + 42) = 0; /*0x38c7bb*/
    *((_QWORD *)v1 + 43) = 0; /*0x38c7c2*/
    *((_QWORD *)v1 + 44) = 0; /*0x38c7c9*/
    *((_QWORD *)v1 + 45) = 0; /*0x38c7d0*/
    qword_906008 = (__int64)v1; /*0x38c7d7*/
    GJMultiplayerManager_init(v1); /*0x38c7f4*/
    return qword_906008; /*0x38c7f9*/
  }
  return result; /*0x38c800*/
}

// [4/8] Address: 0x38cc30
// Method: GJMultiplayerManager::handleIt
// Hidden C++ exception states: #wind=6
double __fastcall GJMultiplayerManager_handleIt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  const char *v8; // rbx
  __int64 v9; // rsi
  const char *v10; // rdx
  const char *v11; // rcx
  unsigned int v12; // r13d
  const void *v13; // rcx
  unsigned __int64 v14; // r14
  size_t v15; // r8
  void (__fastcall ***v16)(_QWORD, _QWORD, __int64); // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  const char *v20; // rdx
  const char *v21; // rcx
  unsigned int v22; // r13d
  const void *v23; // rcx
  unsigned __int64 v24; // r14
  size_t v25; // r8
  __int64 v26; // rcx
  __int128 Buf2; // [rsp+30h] [rbp-61h] BYREF
  __int64 v29; // [rsp+40h] [rbp-51h]
  __int64 v30; // [rsp+48h] [rbp-49h]
  _BYTE v31[32]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v32[32]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v33; // [rsp+90h] [rbp-1h]
  __int64 v34; // [rsp+98h] [rbp+7h]

  v33 = a3; /*0x38cc63*/
  v34 = a4; /*0x38cc67*/
  sub_6C100(a3); /*0x38cc6e*/
  switch ( a5 ) /*0x38cc79*/
  {
    case 13: /*0x38cc79*/
      v8 = (const char *)sub_3E4F0(v32, a4); /*0x38cdd0*/
      v9 = sub_3E4F0(v31, a3); /*0x38cde3*/
      v20 = v8; /*0x38cdea*/
      if ( *((_QWORD *)v8 + 3) > 0xFu ) /*0x38cdf2*/
        v20 = *(const char **)v8; /*0x38cdf4*/
      sub_38CF50(a1, v20); /*0x38cdfa*/
      v21 = v8; /*0x38cdff*/
      if ( *((_QWORD *)v8 + 3) > 0xFu ) /*0x38ce07*/
        v21 = *(const char **)v8; /*0x38ce09*/
      v22 = atoi(v21); /*0x38ce12*/
      Buf2 = 0; /*0x38ce18*/
      v29 = 2; /*0x38ce21*/
      v30 = 15; /*0x38ce25*/
      strcpy((char *)&Buf2, "-1"); /*0x38ce32*/
      v23 = (const void *)v9; /*0x38ce3a*/
      if ( *(_QWORD *)(v9 + 24) > 0xFu ) /*0x38ce42*/
        v23 = *(const void **)v9; /*0x38ce44*/
      v24 = *(_QWORD *)(v9 + 16); /*0x38ce47*/
      v25 = v24; /*0x38ce4b*/
      if ( v24 > 2 ) /*0x38ce51*/
        v25 = 2; /*0x38ce51*/
      if ( memcmp(v23, &Buf2, v25) || v24 != 2 ) /*0x38ce66*/
      {
        v26 = *(_QWORD *)(a1 + 352); /*0x38ce68*/
        if ( v26 ) /*0x38ce72*/
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 16LL))(v26, v22); /*0x38ce7a*/
      }
      goto LABEL_32; /*0x38ce7a*/
    case 63: /*0x38cc79*/
      v18 = sub_3E4F0(v32, a4); /*0x38cd99*/
      v19 = sub_3E4F0(v31, a3); /*0x38cda3*/
      GJMultiplayerManager_onJoinLobbyCompleted(a1, v19, v18); /*0x38cdb2*/
      break;
    case 64: /*0x38cc79*/
      v8 = (const char *)sub_3E4F0(v31, a4); /*0x38cca5*/
      v9 = sub_3E4F0(v32, a3); /*0x38ccb8*/
      v10 = v8; /*0x38ccbf*/
      if ( *((_QWORD *)v8 + 3) > 0xFu ) /*0x38ccc7*/
        v10 = *(const char **)v8; /*0x38ccc9*/
      sub_38CF50(a1, v10); /*0x38cccf*/
      v11 = v8; /*0x38ccd4*/
      if ( *((_QWORD *)v8 + 3) > 0xFu ) /*0x38ccdc*/
        v11 = *(const char **)v8; /*0x38ccde*/
      v12 = atoi(v11); /*0x38cce7*/
      Buf2 = 0; /*0x38cced*/
      v29 = 2; /*0x38ccf6*/
      v30 = 15; /*0x38ccfa*/
      strcpy((char *)&Buf2, "-1"); /*0x38cd07*/
      v13 = (const void *)v9; /*0x38cd0f*/
      if ( *(_QWORD *)(v9 + 24) > 0xFu ) /*0x38cd17*/
        v13 = *(const void **)v9; /*0x38cd19*/
      v14 = *(_QWORD *)(v9 + 16); /*0x38cd1c*/
      v15 = v14; /*0x38cd20*/
      if ( v14 > 2 ) /*0x38cd26*/
        v15 = 2; /*0x38cd26*/
      if ( !memcmp(v13, &Buf2, v15) && v14 == 2 ) /*0x38cd3b*/
      {
        v17 = *(_QWORD *)(a1 + 360); /*0x38cd5b*/
        if ( v17 ) /*0x38cd65*/
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 8LL))(v17, v12, 64); /*0x38cd73*/
      }
      else
      {
        v16 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 360); /*0x38cd3f*/
        if ( v16 ) /*0x38cd49*/
          (**v16)(v16, v12, 64); /*0x38cd57*/
      }
LABEL_32:
      sub_3C310(v9); /*0x38ce7e*/
      sub_3C310(v8); /*0x38ce8a*/
      break;
  }
  sub_3C310(a3); /*0x38ce90*/
  return sub_3C310(a4); /*0x38cea1*/
}

// [5/8] Address: 0x38ced0
// Method: GJMultiplayerManager::init
bool __fastcall GJMultiplayerManager_init(cocos2d::CCNode *a1)
{
  bool result; // al
  cocos2d::CCObject *v3; // rax
  cocos2d::CCObject *v4; // rax
  cocos2d::CCObject *v5; // rax
  cocos2d::CCObject *v6; // rax

  result = cocos2d::CCNode::init(a1); /*0x38ced9*/
  if ( result ) /*0x38cee1*/
  {
    v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x38cee9*/
    *((_QWORD *)a1 + 40) = v3; /*0x38cef2*/
    cocos2d::CCObject::retain(v3); /*0x38cef9*/
    v4 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x38ceff*/
    *((_QWORD *)a1 + 41) = v4; /*0x38cf08*/
    cocos2d::CCObject::retain(v4); /*0x38cf0f*/
    v5 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x38cf15*/
    *((_QWORD *)a1 + 42) = v5; /*0x38cf1e*/
    cocos2d::CCObject::retain(v5); /*0x38cf25*/
    v6 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x38cf2b*/
    *((_QWORD *)a1 + 43) = v6; /*0x38cf34*/
    cocos2d::CCObject::retain(v6); /*0x38cf3b*/
    return 1; /*0x38cf41*/
  }
  return result; /*0x38cee3*/
}

// [6/8] Address: 0x38d010
// Method: GJMultiplayerManager::onJoinLobbyCompleted
// Hidden C++ exception states: #wind=8
double __fastcall GJMultiplayerManager_onJoinLobbyCompleted(__int64 a1, unsigned __int64 *a2, const char *a3)
{
  unsigned __int64 *v4; // r15
  __int64 v5; // r13
  const char *v6; // rdx
  const char *v7; // rcx
  unsigned int v8; // r14d
  const void *v9; // rcx
  unsigned __int64 v10; // rsi
  size_t v11; // r8
  int v12; // ebx
  cocos2d::CCArray *v13; // rdi
  cocos2d::CCString *v14; // rax
  const char *CString; // rax
  unsigned int v16; // r14d
  __int64 v17; // r8
  cocos2d::CCString *v18; // rax
  __int64 v19; // rcx
  cocos2d::CCArray *v20; // rsi
  cocos2d::CCString *v21; // rax
  const char *v22; // rax
  __int64 v23; // r8
  cocos2d::CCArray *v24; // rbx
  unsigned int v25; // r12d
  cocos2d::CCString *v26; // rax
  const char *v27; // rax
  __int64 v28; // r8
  cocos2d::CCArray *v29; // rbx
  cocos2d::CCString *v30; // rax
  int v31; // esi
  cocos2d::CCString *v32; // rax
  const char *v33; // rax
  __int64 v34; // r8
  cocos2d::CCString *v35; // rax
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdi
  __int128 *p_Buf2; // r15
  char *v43; // r14
  unsigned __int64 v44; // r13
  size_t v45; // rsi
  unsigned __int64 v46; // rax
  size_t v47; // rbx
  void **v48; // rdx
  char *v49; // rax
  unsigned int v50; // r12d
  cocos2d::CCString *v51; // rax
  const char *v52; // rax
  __int64 v53; // r8
  cocos2d::CCArray *v54; // r15
  cocos2d::CCString *v55; // rax
  const char *v56; // rax
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  struct __timeb64 *v61; // rsi
  size_t v62; // rdi
  size_t v63; // rbx
  void (__fastcall ***v64)(_QWORD, _QWORD); // rcx
  __int64 v65; // rcx
  void *Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  size_t v68; // [rsp+40h] [rbp-C0h]
  __int64 v69; // [rsp+48h] [rbp-B8h]
  int v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+54h] [rbp-ACh]
  int v72; // [rsp+58h] [rbp-A8h]
  __int64 v73; // [rsp+60h] [rbp-A0h]
  void **v74; // [rsp+68h] [rbp-98h]
  cocos2d::CCArray *v75; // [rsp+70h] [rbp-90h]
  cocos2d::CCArray *v76; // [rsp+78h] [rbp-88h]
  cocos2d::CCArray *v77; // [rsp+80h] [rbp-80h]
  unsigned __int64 *v78; // [rsp+88h] [rbp-78h]
  const char *v79; // [rsp+90h] [rbp-70h]
  void *v80; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v81; // [rsp+A0h] [rbp-60h]
  const char *v82; // [rsp+A8h] [rbp-58h]
  __int128 Buf2; // [rsp+B0h] [rbp-50h] BYREF
  size_t Size; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-38h]
  struct __timeb64 Time; // [rsp+D0h] [rbp-30h] BYREF
  size_t v87; // [rsp+E0h] [rbp-20h]
  __int64 v88; // [rsp+E8h] [rbp-18h]
  __int128 v89; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v90; // [rsp+100h] [rbp+0h]
  __int64 v91; // [rsp+108h] [rbp+8h]
  __int128 v92; // [rsp+110h] [rbp+10h] BYREF
  __int64 v93; // [rsp+120h] [rbp+20h]
  __int64 v94; // [rsp+128h] [rbp+28h]
  __int128 v95; // [rsp+130h] [rbp+30h] BYREF
  __int64 v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+148h] [rbp+48h]

  v79 = a3; /*0x38d047*/
  v4 = a2; /*0x38d04b*/
  v78 = a2; /*0x38d04e*/
  v5 = a1; /*0x38d052*/
  v73 = a1; /*0x38d055*/
  v81 = a2; /*0x38d05a*/
  v82 = a3; /*0x38d05e*/
  v6 = a3; /*0x38d062*/
  if ( *((_QWORD *)a3 + 3) > 0xFu ) /*0x38d06a*/
    v6 = *(const char **)a3; /*0x38d06c*/
  sub_38CF50(a1, v6); /*0x38d06f*/
  v7 = a3; /*0x38d074*/
  if ( *((_QWORD *)a3 + 3) > 0xFu ) /*0x38d07c*/
    v7 = *(const char **)a3; /*0x38d07e*/
  v8 = atoi(v7); /*0x38d087*/
  Buf2 = 0; /*0x38d08d*/
  Size = 2; /*0x38d097*/
  v85 = 15; /*0x38d0a0*/
  strcpy((char *)&Buf2, "-1"); /*0x38d0ab*/
  v9 = v4; /*0x38d0b7*/
  if ( v4[3] > 0xF ) /*0x38d0be*/
    v9 = (const void *)*v4; /*0x38d0c0*/
  v10 = v4[2]; /*0x38d0c3*/
  v11 = v10; /*0x38d0c7*/
  if ( v10 > 2 ) /*0x38d0cd*/
    v11 = 2; /*0x38d0cd*/
  v12 = memcmp(v9, &Buf2, v11); /*0x38d0d6*/
  if ( !v12 ) /*0x38d0da*/
  {
    if ( v10 >= 2 ) /*0x38d0df*/
      v12 = v10 > 2; /*0x38d0ed*/
    else
      v12 = -1; /*0x38d0e1*/
  }
  if ( v12 && (v13 = (cocos2d::CCArray *)sub_D09B0(v4, &unk_74CF9C), v77 = v13, cocos2d::CCArray::count(v13) >= 3) ) /*0x38d11a*/
  {
    v14 = cocos2d::CCArray::stringAtIndex(v13, 0); /*0x38d125*/
    CString = cocos2d::CCString::getCString(v14); /*0x38d12e*/
    v95 = 0; /*0x38d137*/
    v16 = 0; /*0x38d13b*/
    v96 = 0; /*0x38d13e*/
    v97 = 0; /*0x38d142*/
    v17 = -1; /*0x38d146*/
    do /*0x38d153*/
      ++v17; /*0x38d150*/
    while ( CString[v17] ); /*0x38d153*/
    sub_3C230(&v95); /*0x38d160*/
    v18 = cocos2d::CCArray::stringAtIndex(v13, 1u); /*0x38d16e*/
    v72 = cocos2d::CCString::intValue(v18); /*0x38d17d*/
    v20 = (cocos2d::CCArray *)cocos2d::CCArray::create(v19); /*0x38d187*/
    v75 = v20; /*0x38d18a*/
    v21 = cocos2d::CCArray::stringAtIndex(v13, 2u); /*0x38d195*/
    v22 = cocos2d::CCString::getCString(v21); /*0x38d19e*/
    v92 = 0; /*0x38d1a7*/
    v93 = 0; /*0x38d1ab*/
    v94 = 0; /*0x38d1af*/
    v23 = -1; /*0x38d1b3*/
    do /*0x38d1c3*/
      ++v23; /*0x38d1c0*/
    while ( v22[v23] ); /*0x38d1c3*/
    sub_3C230(&v92); /*0x38d1d1*/
    v24 = (cocos2d::CCArray *)sub_D09B0(&v92, &unk_74CF98); /*0x38d1e7*/
    v76 = v24; /*0x38d1ea*/
    v25 = 0; /*0x38d1ef*/
    if ( cocos2d::CCArray::count(v24) ) /*0x38d1f5*/
    {
      do /*0x38d4f2*/
      {
        v26 = cocos2d::CCArray::stringAtIndex(v24, v25); /*0x38d219*/
        v27 = cocos2d::CCString::getCString(v26); /*0x38d222*/
        v89 = 0; /*0x38d22b*/
        v90 = 0; /*0x38d22f*/
        v91 = 0; /*0x38d233*/
        v28 = -1; /*0x38d237*/
        do /*0x38d243*/
          ++v28; /*0x38d240*/
        while ( v27[v28] ); /*0x38d243*/
        sub_3C230(&v89); /*0x38d251*/
        v29 = (cocos2d::CCArray *)sub_D09B0(&v89, &unk_709CE8); /*0x38d267*/
        if ( cocos2d::CCArray::count(v29) >= 3 ) /*0x38d276*/
        {
          v30 = cocos2d::CCArray::stringAtIndex(v29, 0); /*0x38d281*/
          v31 = cocos2d::CCString::intValue(v30); /*0x38d290*/
          v71 = v31; /*0x38d292*/
          v32 = cocos2d::CCArray::stringAtIndex(v29, 1u); /*0x38d29e*/
          v33 = cocos2d::CCString::getCString(v32); /*0x38d2a7*/
          Buf2 = 0; /*0x38d2b0*/
          Size = 0; /*0x38d2b4*/
          v85 = 0; /*0x38d2b8*/
          v34 = -1; /*0x38d2bc*/
          do /*0x38d2c6*/
            ++v34; /*0x38d2c3*/
          while ( v33[v34] ); /*0x38d2c6*/
          sub_3C230(&Buf2); /*0x38d2d4*/
          v35 = cocos2d::CCArray::stringAtIndex(v29, 2u); /*0x38d2e2*/
          v36 = cocos2d::CCString::intValue(v35); /*0x38d2f1*/
          v70 = v36; /*0x38d2f3*/
          v80 = operator new(0x3B8u); /*0x38d301*/
          v37 = GJUserScore_GJUserScore(v80); /*0x38d308*/
          v41 = v37; /*0x38d30d*/
          if ( v37 ) /*0x38d313*/
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 72LL))(v37) ) /*0x38d31b*/
            {
              cocos2d::CCObject::autorelease((cocos2d::CCObject *)v41); /*0x38d325*/
            }
            else
            {
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 8LL))(v41, 1); /*0x38d335*/
              v41 = 0; /*0x38d338*/
            }
          }
          *(_DWORD *)(v41 + 392) = v31; /*0x38d33b*/
          *(_OWORD *)Src = 0; /*0x38d344*/
          v68 = 0; /*0x38d349*/
          v69 = 0; /*0x38d34e*/
          p_Buf2 = &Buf2; /*0x38d353*/
          v43 = (char *)Buf2; /*0x38d357*/
          v44 = v85; /*0x38d35b*/
          if ( v85 > 0xF ) /*0x38d363*/
            p_Buf2 = (__int128 *)Buf2; /*0x38d363*/
          v45 = Size; /*0x38d367*/
          if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x38d378*/
            sub_8D90(v39, v38, v40); /*0x38d76b*/
          if ( Size > 0xF ) /*0x38d382*/
          {
            v47 = Size | 0xF; /*0x38d3a1*/
            if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x38d3a8*/
            {
              if ( v47 < 0x16 ) /*0x38d3b8*/
                v47 = 22; /*0x38d3b8*/
            }
            else
            {
              v47 = 0x7FFFFFFFFFFFFFFFLL; /*0x38d3aa*/
            }
            Src[0] = (void *)sub_3C460(v47 + 1); /*0x38d3c5*/
            v68 = v45; /*0x38d3ca*/
            v69 = v47; /*0x38d3cf*/
            memcpy(Src[0], p_Buf2, v45 + 1); /*0x38d3de*/
            v46 = v69; /*0x38d3e3*/
            v45 = v68; /*0x38d3e8*/
            v36 = v70; /*0x38d3ed*/
          }
          else
          {
            v68 = Size; /*0x38d384*/
            v46 = 15; /*0x38d389*/
            v69 = 15; /*0x38d38e*/
            *(_OWORD *)Src = *p_Buf2; /*0x38d397*/
          }
          v74 = Src; /*0x38d3f6*/
          if ( (void **)(v41 + 320) != Src ) /*0x38d40a*/
          {
            v48 = Src; /*0x38d40c*/
            if ( v46 > 0xF ) /*0x38d415*/
              v48 = (void **)Src[0]; /*0x38d415*/
            sub_3F5A0((void *)(v41 + 320), v48, v45); /*0x38d41e*/
          }
          sub_3C310(Src); /*0x38d429*/
          ftime64(&Time); /*0x38d432*/
          *(double *)(v41 + 832) = (double)Time.millitm / 1000.0 /*0x38d467*/
                                 + (double)SLODWORD(Time.time)
                                 - (float)((float)v36 * 1000.0);
          cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v73 + 328), (struct cocos2d::CCObject *)v41, v71); /*0x38d483*/
          v20 = v75; /*0x38d48c*/
          cocos2d::CCArray::addObject(v75, (struct cocos2d::CCObject *)v41); /*0x38d494*/
          if ( v44 > 0xF ) /*0x38d49f*/
          {
            v49 = v43; /*0x38d4a5*/
            if ( v44 + 1 >= 0x1000 ) /*0x38d4af*/
            {
              v43 = (char *)*((_QWORD *)v43 - 1); /*0x38d4b5*/
              if ( (unsigned __int64)(v49 - v43 - 8) > 0x1F ) /*0x38d4c4*/
                invoke_watson(0, 0, 0, 0, 0); /*0x38d659*/
            }
            j_j_free(v43); /*0x38d4cd*/
          }
          v16 = 0; /*0x38d4d2*/
        }
        sub_3C310(&v89); /*0x38d4d9*/
        ++v25; /*0x38d4de*/
        v24 = v76; /*0x38d4e1*/
      }
      while ( v25 < cocos2d::CCArray::count(v76) ); /*0x38d4f2*/
      v5 = v73; /*0x38d4f8*/
      v13 = v77; /*0x38d4fd*/
    }
    v50 = v72; /*0x38d501*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v5 + 336), v20, v72); /*0x38d513*/
    if ( cocos2d::CCArray::count(v13) >= 4 ) /*0x38d525*/
    {
      v51 = cocos2d::CCArray::stringAtIndex(v13, 3u); /*0x38d533*/
      v52 = cocos2d::CCString::getCString(v51); /*0x38d53c*/
      v89 = 0; /*0x38d545*/
      v90 = 0; /*0x38d549*/
      v91 = 0; /*0x38d54d*/
      v53 = -1; /*0x38d551*/
      do /*0x38d563*/
        ++v53; /*0x38d560*/
      while ( v52[v53] ); /*0x38d563*/
      sub_3C230(&v89); /*0x38d571*/
      if ( v90 ) /*0x38d57c*/
      {
        v54 = (cocos2d::CCArray *)sub_D09B0(&v89, &word_70806C); /*0x38d592*/
        if ( cocos2d::CCArray::count(v54) ) /*0x38d598*/
        {
          do /*0x38d6cc*/
          {
            v55 = cocos2d::CCArray::stringAtIndex(v54, v16); /*0x38d5b6*/
            v56 = cocos2d::CCString::getCString(v55); /*0x38d5bf*/
            Buf2 = 0; /*0x38d5c8*/
            Size = 0; /*0x38d5cc*/
            v85 = 0; /*0x38d5d0*/
            v57 = -1; /*0x38d5d4*/
            do /*0x38d5e3*/
              ++v57; /*0x38d5e0*/
            while ( v56[v57] ); /*0x38d5e3*/
            sub_3C230(&Buf2); /*0x38d5f1*/
            Time = 0; /*0x38d5fa*/
            v87 = 0; /*0x38d5fe*/
            v88 = 0; /*0x38d602*/
            v61 = (struct __timeb64 *)&Buf2; /*0x38d606*/
            if ( v85 > 0xF ) /*0x38d60f*/
              v61 = (struct __timeb64 *)Buf2; /*0x38d60f*/
            v62 = Size; /*0x38d614*/
            if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x38d625*/
              sub_8D90(v59, v58, v60); /*0x38d765*/
            if ( Size > 0xF ) /*0x38d62f*/
            {
              v63 = Size | 0xF; /*0x38d663*/
              if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x38d66a*/
              {
                if ( v63 < 0x16 ) /*0x38d67a*/
                  v63 = 22; /*0x38d67a*/
              }
              else
              {
                v63 = 0x7FFFFFFFFFFFFFFFLL; /*0x38d66c*/
              }
              Time.time = sub_3C460(v63 + 1); /*0x38d687*/
              v87 = v62; /*0x38d68b*/
              v88 = v63; /*0x38d68f*/
              memcpy((void *)Time.time, v61, v62 + 1); /*0x38d69d*/
            }
            else
            {
              v87 = Size; /*0x38d631*/
              v88 = 15; /*0x38d635*/
              Time = *v61; /*0x38d640*/
            }
            sub_38DF10(v5, &Time, v50); /*0x38d6ae*/
            sub_3C310(&Buf2); /*0x38d6b8*/
            ++v16; /*0x38d6bd*/
          }
          while ( v16 < cocos2d::CCArray::count(v54) ); /*0x38d6cc*/
        }
      }
      sub_3C310(&v89); /*0x38d6d6*/
    }
    v64 = *(void (__fastcall ****)(_QWORD, _QWORD))(v5 + 352); /*0x38d6db*/
    if ( v64 ) /*0x38d6e5*/
      (**v64)(v64, v50); /*0x38d6ed*/
    sub_3C310(&v92); /*0x38d6f4*/
    sub_3C310(&v95); /*0x38d6fe*/
    v4 = v78; /*0x38d703*/
  }
  else
  {
    v65 = *(_QWORD *)(v5 + 352); /*0x38d709*/
    if ( v65 ) /*0x38d713*/
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v65 + 8LL))(v65, v8, 0); /*0x38d71e*/
  }
  sub_3C310(v4); /*0x38d725*/
  return sub_3C310(v79); /*0x38d734*/
}

// [7/8] Address: 0x38d780
// Method: GJMultiplayerManager::uploadComment
// Hidden C++ exception states: #wind=12
char __fastcall GJMultiplayerManager_uploadComment(int a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // rcx
  cocos2d::CCString *v9; // rax
  const char *CString; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  const char *v15; // rbx
  const char *v16; // r14
  cocos2d::CCString *v17; // rax
  const char *v18; // rax
  cocos2d::CCString *v19; // rax
  char *v20; // rax
  __int64 v21; // rbx
  size_t v22; // r8
  const char *v23; // r14
  const char *v24; // r15
  __int64 v25; // rax
  cocos2d::CCString *v26; // rax
  const char *v27; // rax
  __int64 v28; // r8
  void **v29; // r8
  void **v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  void *v33; // rcx
  void **v34; // rdx
  int v35; // ebx
  __int64 v36; // rbx
  __int64 v37; // rax
  void *v38; // rcx
  void *v40; // [rsp+48h] [rbp-B8h]
  __int128 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  _BYTE *v44; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int128 v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  void *Block[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-30h]
  void *v54[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v56; // [rsp+F8h] [rbp-8h]
  _QWORD v57[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v58; // [rsp+118h] [rbp+18h]
  void *v59[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE Src[32]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v61[48]; // [rsp+160h] [rbp+60h] BYREF

  v51 = a2; /*0x38d7b9*/
  v6 = sub_3E4F0(&v41, a2); /*0x38d7c4*/
  v7 = v6; /*0x38d7c9*/
  if ( *(_QWORD *)(v6 + 16) ) /*0x38d7d1*/
  {
    cocos2d::ZipUtils::base64URLEncode(Block, v6); /*0x38d80d*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x38d7da*/
    v53 = 0u; /*0x38d7de*/
    *(_OWORD *)Block = *(_OWORD *)v6; /*0x38d7e9*/
    v53 = *(_OWORD *)(v6 + 16); /*0x38d7f1*/
    *(_QWORD *)(v6 + 16) = 0; /*0x38d7f5*/
    *(_QWORD *)(v6 + 24) = 15; /*0x38d7f9*/
    *(_BYTE *)v6 = 0; /*0x38d801*/
  }
  sub_3C310(v7); /*0x38d817*/
  sub_58AD0(a2, Block); /*0x38d823*/
  if ( *((_QWORD *)&v53 + 1) > 0xFu ) /*0x38d830*/
  {
    v8 = Block[0]; /*0x38d835*/
    if ( (unsigned __int64)(*((_QWORD *)&v53 + 1) + 1LL) >= 0x1000 ) /*0x38d843*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x38d849*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x38d858*/
        invoke_watson(0, 0, 0, 0, 0); /*0x38d869*/
    }
    j_j_free(v8); /*0x38d870*/
  }
  v9 = cocos2d::CCString::createWithFormat("%i_comment", a3); /*0x38d87f*/
  CString = cocos2d::CCString::getCString(v9); /*0x38d88e*/
  v12 = sub_3E4F0(&v41, a2); /*0x38d8a8*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x38d8b3*/
  {
    v40 = operator new(0x690u); /*0x38d8bf*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v40); /*0x38d8cd*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x38d8de*/
  }
  LOBYTE(v13) = 1; /*0x38d8e1*/
  sub_25DFF0(v11, v12, v13); /*0x38d8e7*/
  sub_6F810(v57); /*0x38d8f5*/
  GJMultiplayerManager_getBasePostString(v14, Src); /*0x38d8ff*/
  v15 = (const char *)v57; /*0x38d905*/
  if ( v58 > 0xF ) /*0x38d90e*/
    v15 = (const char *)v57[0]; /*0x38d90e*/
  v16 = (const char *)a2; /*0x38d913*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x38d91b*/
    v16 = *(const char **)a2; /*0x38d91d*/
  v17 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfv", "3899", 103, 99, "9"); /*0x38d956*/
  v18 = cocos2d::CCString::getCString(v17); /*0x38d95f*/
  v19 = cocos2d::CCString::createWithFormat("&comment=%s&gameID=%i&extra=%s&secret=%s", v16, a3, v15, v18); /*0x38d97a*/
  v20 = (char *)cocos2d::CCString::getCString(v19); /*0x38d983*/
  v21 = -1; /*0x38d989*/
  v22 = -1; /*0x38d990*/
  do /*0x38d996*/
    ++v22; /*0x38d993*/
  while ( v20[v22] ); /*0x38d996*/
  sub_43D80(Src, v20, v22); /*0x38d9a4*/
  v23 = (const char *)v57; /*0x38d9a9*/
  if ( v58 > 0xF ) /*0x38d9b2*/
    v23 = (const char *)v57[0]; /*0x38d9b2*/
  v24 = (const char *)a2; /*0x38d9b7*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x38d9bf*/
    v24 = *(const char **)a2; /*0x38d9c1*/
  v25 = GJAccountManager_sharedState(); /*0x38d9c4*/
  v26 = cocos2d::CCString::createWithFormat("%i%s%i%s", *(_DWORD *)(v25 + 360) - *(_DWORD *)(v25 + 364), v24, a3, v23); /*0x38d9e7*/
  v27 = cocos2d::CCString::getCString(v26); /*0x38d9f0*/
  *(_OWORD *)Block = 0; /*0x38d9f9*/
  v53 = 0u; /*0x38da00*/
  v28 = -1; /*0x38da08*/
  do /*0x38da13*/
    ++v28; /*0x38da10*/
  while ( v27[v28] ); /*0x38da13*/
  sub_3C230(Block); /*0x38da20*/
  v29 = Block; /*0x38da26*/
  if ( *((_QWORD *)&v53 + 1) > 0xFu ) /*0x38da2f*/
    v29 = (void **)Block[0]; /*0x38da2f*/
  v30 = Block; /*0x38da34*/
  if ( *((_QWORD *)&v53 + 1) > 0xFu ) /*0x38da38*/
    v30 = (void **)Block[0]; /*0x38da38*/
  v31 = -1; /*0x38da3d*/
  do /*0x38da43*/
    ++v31; /*0x38da40*/
  while ( *((_BYTE *)v29 + v31) ); /*0x38da43*/
  sub_7D030(v30, v31, v54); /*0x38da51*/
  sub_7D300(v54, v61); /*0x38da5e*/
  *(_OWORD *)v54 = 0; /*0x38da66*/
  v55 = 0; /*0x38da6a*/
  v56 = 0; /*0x38da6e*/
  v32 = -1; /*0x38da76*/
  do /*0x38da83*/
    ++v32; /*0x38da80*/
  while ( v61[v32] ); /*0x38da83*/
  sub_3C230(v54); /*0x38da92*/
  v45 = 0; /*0x38da9b*/
  v46 = 5; /*0x38daa0*/
  v47 = 15; /*0x38daa8*/
  strcpy((char *)&v45, "52832"); /*0x38dab6*/
  cocos2d::ZipUtils::base64EncodeEnc(v59, v54, &v45); /*0x38dad7*/
  if ( v56 > 0xF ) /*0x38dae6*/
  {
    v33 = v54[0]; /*0x38daeb*/
    if ( v56 + 1 >= 0x1000 ) /*0x38daf9*/
    {
      v33 = (void *)*((_QWORD *)v54[0] - 1); /*0x38daff*/
      if ( (unsigned __int64)((char *)v54[0] - (char *)v33 - 8) > 0x1F ) /*0x38db0e*/
        invoke_watson(0, 0, 0, 0, 0); /*0x38db1f*/
    }
    j_j_free(v33); /*0x38db26*/
  }
  v55 = 0; /*0x38db2b*/
  v56 = 15; /*0x38db2f*/
  LOBYTE(v54[0]) = 0; /*0x38db37*/
  sub_43D80(Src, "&chk=", 5u); /*0x38db4c*/
  v34 = v59; /*0x38db51*/
  if ( v59[3] > (char *)&loc_D + 2 ) /*0x38db5a*/
    v34 = (void **)v59[0]; /*0x38db5a*/
  sub_43D80(Src, v34, (size_t)v59[2]); /*0x38db67*/
  v41 = 0; /*0x38db82*/
  v42 = 0; /*0x38db87*/
  v43 = 0; /*0x38db8c*/
  do /*0x38db94*/
    ++v21; /*0x38db91*/
  while ( CString[v21] ); /*0x38db94*/
  sub_3C230(&v41); /*0x38dba5*/
  v35 = sub_3E4F0(v61, Src); /*0x38dbb8*/
  v48 = 0; /*0x38dbbe*/
  v49 = 0; /*0x38dbc2*/
  v50 = 0; /*0x38dbc6*/
  *(_QWORD *)&v48 = sub_3C460(64); /*0x38dbd7*/
  v49 = 57; /*0x38dbdb*/
  v50 = 63; /*0x38dbe3*/
  strcpy((char *)v48, "https://www.geometrydash.com/database/uploadMPComment.php"); /*0x38dbf2*/
  sub_38C820(a1, (unsigned int)&v48, v35, (unsigned int)&v41, 13); /*0x38dc3d*/
  v44 = v61; /*0x38dc46*/
  v36 = sub_3E4F0(v61, a2); /*0x38dc57*/
  v37 = GJMultiplayerManager_sharedState(); /*0x38dc5a*/
  sub_38DD10(v37, v36, a3); /*0x38dc68*/
  sub_3C310(v59); /*0x38dc72*/
  if ( *((_QWORD *)&v53 + 1) > 0xFu ) /*0x38dc80*/
  {
    v38 = Block[0]; /*0x38dc85*/
    if ( (unsigned __int64)(*((_QWORD *)&v53 + 1) + 1LL) >= 0x1000 ) /*0x38dc93*/
    {
      v38 = (void *)*((_QWORD *)Block[0] - 1); /*0x38dc99*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v38 - 8) > 0x1F ) /*0x38dca8*/
        invoke_watson(0, 0, 0, 0, 0); /*0x38dcb9*/
    }
    j_j_free(v38); /*0x38dcc0*/
  }
  sub_3C310(Src); /*0x38dcca*/
  sub_3C310(v57); /*0x38dcd4*/
  sub_3C310(a2); /*0x38dcdd*/
  return 1; /*0x38dce4*/
}

// [8/8] Address: 0x38e0d0
// Method: GJMultiplayerManager::getBasePostString
// Hidden C++ exception states: #wind=3
_QWORD *__fastcall GJMultiplayerManager_getBasePostString(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  void **v4; // rdx
  size_t v5; // r8
  void *v7; // [rsp+30h] [rbp-38h]
  void *v8[4]; // [rsp+38h] [rbp-30h] BYREF

  if ( !*(_QWORD *)&qword_905FB0 ) /*0x38e0fd*/
  {
    v7 = operator new(0x690u); /*0x38e109*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x38e119*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x38e123*/
  }
  GameLevelManager_getBasePostString(a1, a2); /*0x38e129*/
  sub_43D80(a2, "&username=", 0xAu); /*0x38e146*/
  v3 = GJAccountManager_sharedState(); /*0x38e14b*/
  sub_3E4F0(v8, v3 + 328); /*0x38e15c*/
  v4 = v8; /*0x38e169*/
  if ( v8[3] > (char *)&loc_D + 2 ) /*0x38e174*/
    v4 = (void **)v8[0]; /*0x38e174*/
  v5 = -1; /*0x38e17a*/
  do /*0x38e184*/
    ++v5; /*0x38e181*/
  while ( *((_BYTE *)v4 + v5) ); /*0x38e184*/
  sub_43D80(a2, v4, v5); /*0x38e18e*/
  sub_3C310(v8); /*0x38e199*/
  return a2; /*0x38e1a1*/
}
