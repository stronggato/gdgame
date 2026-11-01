#include <Geode/binding/CCAnimateFrameCache.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x43f00
// Method: CCAnimateFrameCache::~CCAnimateFrameCache
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall CCAnimateFrameCache__dtor_CCAnimateFrameCache(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx

  *(_QWORD *)Block = &CCAnimateFrameCache::`vftable'; /*0x43f16*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 7); /*0x43f19*/
  if ( v4 ) /*0x43f20*/
    cocos2d::CCObject::release(v4); /*0x43f22*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 8); /*0x43f28*/
  if ( v5 ) /*0x43f2f*/
    cocos2d::CCObject::release(v5); /*0x43f31*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 9); /*0x43f37*/
  if ( v6 ) /*0x43f3e*/
    cocos2d::CCObject::release(v6); /*0x43f40*/
  cocos2d::CCObject::~CCObject(Block); /*0x43f49*/
  if ( (a2 & 1) != 0 ) /*0x43f54*/
    j_j_free(Block); /*0x43f5e*/
  return Block; /*0x43f66*/
}

// [2/4] Address: 0x44080
// Method: CCAnimateFrameCache::addSpriteFramesWithFile
// Hidden C++ exception states: #wind=2
__int64 __fastcall CCAnimateFrameCache_addSpriteFramesWithFile(__int64 a1, const char *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rsi
  void *v7; // r8
  __int64 v8; // rbx
  void *v9; // r8
  DS_Dictionary *v11; // rbx
  DS_Dictionary *v12; // [rsp+30h] [rbp-48h]
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h]
  unsigned __int64 v15; // [rsp+50h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0x440aa*/
  v14 = 0; /*0x440b2*/
  v15 = 0; /*0x440b7*/
  v4 = -1; /*0x440bc*/
  v5 = -1; /*0x440c3*/
  do /*0x440c9*/
    ++v5; /*0x440c6*/
  while ( a2[v5] ); /*0x440c9*/
  sub_3C230(Block); /*0x440d4*/
  v6 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 72), Block); /*0x440e9*/
  if ( v15 > 0xF ) /*0x440f5*/
  {
    v7 = Block[0]; /*0x440fa*/
    if ( v15 + 1 >= 0x1000 ) /*0x44109*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x4410f*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x4411e*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4412f*/
    }
    j_j_free(v7); /*0x44139*/
  }
  if ( v6 ) /*0x44141*/
  {
    *(_OWORD *)Block = 0; /*0x4414a*/
    v14 = 0; /*0x4414f*/
    v15 = 0; /*0x44154*/
    do /*0x44163*/
      ++v4; /*0x44160*/
    while ( a2[v4] ); /*0x44163*/
    sub_3C230(Block); /*0x44174*/
    v8 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 72), Block); /*0x44189*/
    if ( v15 > 0xF ) /*0x44195*/
    {
      v9 = Block[0]; /*0x4419a*/
      if ( v15 + 1 >= 0x1000 ) /*0x441a9*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x441af*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x441be*/
          invoke_watson(0, 0, 0, 0, 0); /*0x441cf*/
      }
      j_j_free(v9); /*0x441d9*/
    }
    return v8; /*0x441de*/
  }
  else
  {
    v12 = (DS_Dictionary *)operator new(0xF0u); /*0x441ed*/
    v11 = DS_Dictionary::DS_Dictionary(v12); /*0x441fb*/
    DS_Dictionary::loadRootSubDictFromFile(v11, a2); /*0x44204*/
    return CCAnimateFrameCache_addDict(a1, v11, a2); /*0x44213*/
  }
}

// [3/4] Address: 0x44240
// Method: CCAnimateFrameCache::addDict
// Hidden C++ exception states: #wind=8
__int64 __fastcall CCAnimateFrameCache_addDict(__int64 a1, DS_Dictionary *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r8
  void *v8; // rcx
  unsigned int NumKeys; // r13d
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  const char *v12; // rdx
  __int64 v13; // rcx
  cocos2d::CCArray *v14; // r15
  unsigned int v15; // r14d
  unsigned int i; // edi
  cocos2d::CCString *v17; // rax
  const char *CString; // rax
  __int64 v19; // r8
  void **v20; // rdx
  char *v21; // rbx
  void *v22; // rcx
  __int64 v23; // r15
  void *v24; // rcx
  unsigned int v25; // r14d
  __int64 v26; // rdi
  const char *v27; // rdx
  __int64 StringForKey; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rcx
  __int64 v33; // rax
  void *v34; // rcx
  __int64 v36; // [rsp+30h] [rbp-79h]
  void *Block[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v39; // [rsp+58h] [rbp-51h]
  unsigned __int64 v40; // [rsp+60h] [rbp-49h]
  _QWORD v41[3]; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp-29h]
  _BYTE v43[16]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v44; // [rsp+98h] [rbp-11h]
  _BYTE v45[32]; // [rsp+A8h] [rbp-1h] BYREF

  v5 = a1; /*0x44270*/
  v6 = cocos2d::CCDictionary::create(); /*0x4427d*/
  v36 = v6; /*0x44280*/
  *(_OWORD *)Block = 0; /*0x44287*/
  v39 = 0; /*0x4428e*/
  v40 = 0; /*0x44292*/
  v7 = -1; /*0x44296*/
  do /*0x442a3*/
    ++v7; /*0x442a0*/
  while ( *(_BYTE *)(a3 + v7) ); /*0x442a3*/
  sub_3C230(Block); /*0x442b0*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(v5 + 72), v6, Block); /*0x442c1*/
  if ( v40 > 0xF ) /*0x442d0*/
  {
    v8 = Block[0]; /*0x442d5*/
    if ( v40 + 1 >= 0x1000 ) /*0x442e3*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x442e9*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x442f8*/
        invoke_watson(0, 0, 0, 0, 0); /*0x44309*/
    }
    j_j_free(v8); /*0x44310*/
  }
  DS_Dictionary::stepIntoSubDictWithKey(a2, "animationContainer"); /*0x4431f*/
  NumKeys = DS_Dictionary::getNumKeys(a2); /*0x4432e*/
  v10 = 0; /*0x44331*/
  v11 = 0; /*0x44333*/
  if ( NumKeys ) /*0x44338*/
  {
    while ( 1 ) /*0x4434a*/
    {
      DS_Dictionary::getKey(a2, v41, v11); /*0x4434a*/
      v12 = (const char *)v41; /*0x44351*/
      if ( v42 > 0xF ) /*0x4435a*/
        v12 = (const char *)v41[0]; /*0x4435a*/
      DS_Dictionary::stepIntoSubDictWithKey(a2, v12); /*0x44362*/
      v14 = (cocos2d::CCArray *)cocos2d::CCArray::create(v13); /*0x4436e*/
      cocos2d::CCDictionary::setObject(*(_QWORD *)(v5 + 56), v14, v41); /*0x4437c*/
      v15 = DS_Dictionary::getNumKeys(a2); /*0x4438b*/
      for ( i = 0; i < v15; v10 = 0 ) /*0x44392*/
      {
        v17 = cocos2d::CCString::createWithFormat("sprite_%i", i); /*0x443a9*/
        CString = cocos2d::CCString::getCString(v17); /*0x443b2*/
        *(_OWORD *)Block = 0; /*0x443bb*/
        v39 = 0; /*0x443bf*/
        v40 = 0; /*0x443c3*/
        v19 = -1; /*0x443c7*/
        do /*0x443d3*/
          ++v19; /*0x443d0*/
        while ( CString[v19] ); /*0x443d3*/
        sub_3C230(Block); /*0x443e1*/
        v20 = Block; /*0x443e7*/
        if ( v40 > 0xF ) /*0x443f0*/
          v20 = (void **)Block[0]; /*0x443f0*/
        DS_Dictionary::stepIntoSubDictWithKey(a2, (const char *)v20); /*0x443f8*/
        v21 = (char *)operator new(0x68u); /*0x44408*/
        cocos2d::CCObject::CCObject((cocos2d::CCObject *)v21); /*0x44412*/
        *(_QWORD *)v21 = &SpriteDescription::`vftable'; /*0x44420*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v21 + 56)); /*0x44427*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v21 + 64)); /*0x44431*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v21 + 72)); /*0x4443b*/
        *((_QWORD *)v21 + 10) = 0; /*0x44443*/
        *((_DWORD *)v21 + 22) = 0; /*0x44447*/
        v21[92] = 0; /*0x4444a*/
        *((_QWORD *)v21 + 12) = 0; /*0x4444d*/
        if ( (unsigned __int8)SpriteDescription_initDescription(v21, a2) ) /*0x44457*/
        {
          cocos2d::CCObject::autorelease((cocos2d::CCObject *)v21); /*0x44463*/
        }
        else
        {
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v21 + 8LL))(v21, 1); /*0x44473*/
          v21 = 0; /*0x44476*/
        }
        cocos2d::CCArray::addObject(v14, (struct cocos2d::CCObject *)v21); /*0x4447e*/
        DS_Dictionary::stepOutOfSubDict(a2); /*0x44487*/
        if ( v40 > 0xF ) /*0x44496*/
        {
          v22 = Block[0]; /*0x4449b*/
          if ( v40 + 1 >= 0x1000 ) /*0x444a9*/
          {
            v22 = (void *)*((_QWORD *)Block[0] - 1); /*0x444af*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F ) /*0x444be*/
              invoke_watson(0, 0, 0, 0, 0); /*0x4450c*/
          }
          j_j_free(v22); /*0x444c0*/
        }
        ++i; /*0x444c5*/
      }
      DS_Dictionary::stepOutOfSubDict(a2); /*0x444d8*/
      sub_3C310(v41); /*0x444e3*/
      if ( ++v11 >= NumKeys ) /*0x444ee*/
        break; /*0x444ee*/
      v5 = a1; /*0x444f0*/
    }
    v6 = v36; /*0x44513*/
  }
  DS_Dictionary::stepBackToRootSubDict(a2); /*0x4451a*/
  if ( DS_Dictionary::stepIntoSubDictWithKey(a2, "usedTextures") ) /*0x4452a*/
  {
    v23 = cocos2d::CCDictionary::create(); /*0x4453e*/
    v39 = 12; /*0x44544*/
    v40 = 15; /*0x4454c*/
    Block[0] = *(void **)"usedTextures"; /*0x4455c*/
    Block[1] = (void *)*(unsigned int *)"ures"; /*0x44567*/
    cocos2d::CCDictionary::setObject(v6, v23, Block); /*0x44578*/
    if ( v40 > 0xF ) /*0x44587*/
    {
      v24 = Block[0]; /*0x4458c*/
      if ( v40 + 1 >= 0x1000 ) /*0x4459a*/
      {
        v24 = (void *)*((_QWORD *)Block[0] - 1); /*0x445a0*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v24 - 8) > 0x1F ) /*0x445af*/
          invoke_watson(0, 0, 0, 0, 0); /*0x445c0*/
      }
      j_j_free(v24); /*0x445c7*/
    }
    v25 = DS_Dictionary::getNumKeys(a2); /*0x445d5*/
    if ( v25 ) /*0x445da*/
    {
      do /*0x447fa*/
      {
        DS_Dictionary::getKey(a2, v41, v10); /*0x445ea*/
        v26 = cocos2d::CCDictionary::create(); /*0x445f7*/
        cocos2d::CCDictionary::setObject(v23, v26, v41); /*0x44604*/
        v27 = (const char *)v41; /*0x4460a*/
        if ( v42 > 0xF ) /*0x44613*/
          v27 = (const char *)v41[0]; /*0x44613*/
        DS_Dictionary::stepIntoSubDictWithKey(a2, v27); /*0x4461b*/
        Block[1] = 0; /*0x44624*/
        v39 = 7; /*0x44628*/
        v40 = 15; /*0x44630*/
        Block[0] = (void *)0x65727574786574LL; /*0x4463f*/
        StringForKey = DS_Dictionary::getStringForKey(a2, v45, &qword_702578); /*0x44669*/
        v29 = cocos2d::CCString::create(StringForKey); /*0x44673*/
        cocos2d::CCDictionary::setObject(v26, v29, Block); /*0x44683*/
        sub_3C310(v45); /*0x4468e*/
        sub_3C310(Block); /*0x44698*/
        *(_OWORD *)Block = 0; /*0x446a0*/
        v39 = 3; /*0x446a4*/
        v40 = 15; /*0x446ac*/
        LODWORD(Block[0]) = 6775156; /*0x446ba*/
        v30 = DS_Dictionary::getStringForKey(a2, v45, &dword_702580); /*0x446da*/
        v31 = cocos2d::CCString::create(v30); /*0x446e4*/
        cocos2d::CCDictionary::setObject(v26, v31, Block); /*0x446f4*/
        sub_3C310(v45); /*0x446ff*/
        if ( v40 > 0xF ) /*0x4470d*/
        {
          v32 = Block[0]; /*0x44712*/
          if ( v40 + 1 >= 0x1000 ) /*0x44720*/
          {
            v32 = (void *)*((_QWORD *)Block[0] - 1); /*0x44726*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v32 - 8) > 0x1F ) /*0x44735*/
              invoke_watson(0, 0, 0, 0, 0); /*0x4483e*/
          }
          j_j_free(v32); /*0x4473b*/
        }
        DS_Dictionary::getStringForKey(a2, v43, "customID"); /*0x4474e*/
        if ( v44 ) /*0x4475a*/
        {
          Block[1] = 0; /*0x44763*/
          v39 = 8; /*0x44767*/
          v40 = 15; /*0x4476f*/
          Block[0] = *(void **)"customID"; /*0x4477e*/
          v33 = cocos2d::CCString::create(v43); /*0x4478a*/
          cocos2d::CCDictionary::setObject(v26, v33, Block); /*0x4479a*/
          if ( v40 > 0xF ) /*0x447a9*/
          {
            v34 = Block[0]; /*0x447ae*/
            if ( v40 + 1 >= 0x1000 ) /*0x447bc*/
            {
              v34 = (void *)*((_QWORD *)Block[0] - 1); /*0x447c2*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v34 - 8) > 0x1F ) /*0x447d1*/
                invoke_watson(0, 0, 0, 0, 0); /*0x44854*/
            }
            j_j_free(v34); /*0x447d3*/
          }
        }
        DS_Dictionary::stepOutOfSubDict(a2); /*0x447db*/
        sub_3C310(v43); /*0x447e6*/
        sub_3C310(v41); /*0x447f0*/
        ++v10; /*0x447f5*/
      }
      while ( v10 < v25 ); /*0x447fa*/
    }
  }
  return v36; /*0x44804*/
}

// [4/4] Address: 0x44860
// Method: CCAnimateFrameCache::spriteFrameByName
// Hidden C++ exception states: #wind=1
__int64 __fastcall CCAnimateFrameCache_spriteFrameByName(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  void *v5; // r8
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0x4487b*/
  v8 = 0; /*0x44883*/
  v3 = -1; /*0x44889*/
  do /*0x44893*/
    ++v3; /*0x44890*/
  while ( *(_BYTE *)(a2 + v3) ); /*0x44893*/
  sub_3C230(Block); /*0x4489f*/
  v4 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 56), Block); /*0x448b4*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x448c0*/
  {
    v5 = Block[0]; /*0x448c5*/
    if ( (unsigned __int64)(*((_QWORD *)&v8 + 1) + 1LL) >= 0x1000 ) /*0x448d4*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x448da*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x448e9*/
        invoke_watson(0, 0, 0, 0, 0); /*0x448fe*/
    }
    j_j_free(v5); /*0x44908*/
  }
  return v4; /*0x44910*/
}
