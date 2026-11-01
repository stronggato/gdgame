#include <Geode/binding/LocalLevelManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/12] Address: 0xca8c0
// Method: LocalLevelManager::updateLevelRevision
// Hidden C++ exception states: #wind=5
void __fastcall LocalLevelManager_updateLevelRevision(__int64 a1)
{
  int v1; // r13d
  int v2; // edi
  unsigned int v3; // r14d
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rax
  const char *v10; // r8
  cocos2d::CCString *v11; // rax
  const char *CString; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  void **v17; // r14
  char *v18; // rsi
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  cocos2d::CCObject *v22; // rbx
  int v23; // eax
  char *v24; // rax
  int v25; // [rsp+50h] [rbp-69h]
  void *v26; // [rsp+58h] [rbp-61h]
  int v27; // [rsp+60h] [rbp-59h]
  __int128 v28; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-41h]
  __int64 v30; // [rsp+80h] [rbp-39h]
  char v31[32]; // [rsp+88h] [rbp-31h] BYREF
  void *Src[2]; // [rsp+A8h] [rbp-11h] BYREF
  unsigned __int64 v33; // [rsp+B8h] [rbp-1h]
  unsigned __int64 v34; // [rsp+C0h] [rbp+7h]
  _BYTE v35[32]; // [rsp+C8h] [rbp+Fh] BYREF

  v1 = a1; /*0xca8f2*/
  v27 = a1; /*0xca8f5*/
  v2 = *(_DWORD *)(a1 + 960); /*0xca8f9*/
  v25 = v2; /*0xca8ff*/
  if ( v2 ) /*0xca904*/
  {
    v3 = 0; /*0xca90c*/
    v4 = 0; /*0xca90f*/
    v5 = *(_QWORD *)(a1 + 856); /*0xca911*/
    v6 = (*(_QWORD *)(a1 + 864) - v5) / 168; /*0xca93e*/
    if ( v6 ) /*0xca941*/
    {
      v7 = 0; /*0xca94a*/
      v8 = a1 + 952; /*0xca94c*/
      do /*0xca978*/
      {
        if ( sub_CD810(v8, v7 + v5) ) /*0xca95a*/
          v3 += *(_DWORD *)(v7 + v5 + 160); /*0xca964*/
        ++v4; /*0xca96b*/
        v7 += 168; /*0xca96e*/
      }
      while ( v4 < v6 ); /*0xca978*/
      v1 = v27; /*0xca97a*/
      v2 = v25; /*0xca97e*/
    }
    v9 = sub_47D740(v35, v3); /*0xca98a*/
    if ( *(_QWORD *)(v9 + 24) > 0xFu ) /*0xca995*/
      v9 = *(_QWORD *)v9; /*0xca997*/
    v10 = (const char *)&unk_70802C; /*0xca9a1*/
    if ( v2 == 1 ) /*0xca9ab*/
      v10 = &byte_6E86E0; /*0xca9ab*/
    v11 = cocos2d::CCString::createWithFormat( /*0xca9bb*/
            "Delete <cy>%i</c> selected backup%s (%s)?\n<cy>This cannot be undone.</c>",
            v2,
            v10,
            (const char *)v9);
    CString = cocos2d::CCString::getCString(v11); /*0xca9c4*/
    *(_OWORD *)Src = 0; /*0xca9cd*/
    v33 = 0; /*0xca9d1*/
    v34 = 0; /*0xca9d5*/
    v13 = -1; /*0xca9d9*/
    do /*0xca9e3*/
      ++v13; /*0xca9e0*/
    while ( CString[v13] ); /*0xca9e3*/
    sub_3C230(Src); /*0xca9f1*/
    sub_3C310(v35); /*0xca9fb*/
    v28 = 0; /*0xcaa03*/
    v29 = 0; /*0xcaa07*/
    v30 = 0; /*0xcaa0b*/
    v17 = Src; /*0xcaa0f*/
    v18 = (char *)Src[0]; /*0xcaa13*/
    v19 = v34; /*0xcaa17*/
    if ( v34 > 0xF ) /*0xcaa1f*/
      v17 = (void **)Src[0]; /*0xcaa1f*/
    v20 = 0x7FFFFFFFFFFFFFFFLL; /*0xcaa23*/
    v21 = v33; /*0xcaa2d*/
    if ( v33 > 0x7FFFFFFFFFFFFFFFLL ) /*0xcaa34*/
      sub_8D90(v15, v14, v16); /*0xcabe1*/
    if ( v33 > 0xF ) /*0xcaa3e*/
    {
      if ( (v33 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xcaa60*/
      {
        v20 = v33 | 0xF; /*0xcaa62*/
        if ( (v33 | 0xF) < 0x16 ) /*0xcaa6d*/
          v20 = 22; /*0xcaa6d*/
      }
      *(_QWORD *)&v28 = sub_3C460(v20 + 1); /*0xcaa7a*/
      v29 = v21; /*0xcaa7e*/
      v30 = v20; /*0xcaa82*/
      memcpy((void *)v28, v17, v21 + 1); /*0xcaa90*/
    }
    else
    {
      v29 = v33; /*0xcaa40*/
      v30 = 15; /*0xcaa44*/
      v28 = *(_OWORD *)v17; /*0xcaa50*/
    }
    v26 = operator new(0x298u); /*0xcaaa7*/
    v22 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer((__int64)v26); /*0xcaab3*/
    if ( v22 ) /*0xcaab9*/
    {
      v23 = sub_3E4F0(v31, &v28); /*0xcaac7*/
      if ( (unsigned __int8)GJRateLevelLayer_init( /*0xcab22*/
                              (_DWORD)v22,
                              v1 + 776,
                              (unsigned int)"Delete Backups",
                              v23,
                              (__int64)"Cancel",
                              (__int64)"Delete",
                              1136525312,
                              0,
                              0,
                              1065353216) )
      {
        cocos2d::CCObject::autorelease(v22); /*0xcab2e*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v22 + 8LL))(v22, 1); /*0xcab3e*/
        v22 = 0; /*0xcab41*/
      }
    }
    sub_3C310(&v28); /*0xcab47*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v22 + 64LL))(v22, 3); /*0xcab57*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v22 + 1064LL))(v22); /*0xcab60*/
    if ( v19 > 0xF ) /*0xcab6b*/
    {
      v24 = v18; /*0xcab71*/
      if ( v19 + 1 >= 0x1000 ) /*0xcab7b*/
      {
        v18 = (char *)*((_QWORD *)v18 - 1); /*0xcab81*/
        if ( (unsigned __int64)(v24 - v18 - 8) > 0x1F ) /*0xcab90*/
          invoke_watson(0, 0, 0, 0, 0); /*0xcaba5*/
      }
      j_j_free(v18); /*0xcabaf*/
    }
  }
}

// [2/12] Address: 0x39c3b0
// Method: LocalLevelManager::getAllLevelsInDict
// Hidden C++ exception states: #wind=1
__int64 __fastcall LocalLevelManager_getAllLevelsInDict(_QWORD *a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rdi
  __int64 v4; // rax
  _QWORD **v5; // rdi
  _QWORD **i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rdx
  int v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h]

  v2 = a1[84]; /*0x39c3d7*/
  if ( v2 ) /*0x39c3e1*/
  {
    v3 = *(unsigned int **)(v2 + 56); /*0x39c3e7*/
    v4 = *v3; /*0x39c3eb*/
    if ( (_DWORD)v4 ) /*0x39c3ef*/
    {
      v5 = (_QWORD **)*((_QWORD *)v3 + 2); /*0x39c3f5*/
      for ( i = &v5[v4 - 1]; v5 <= i; ++v5 ) /*0x39c404*/
      {
        v7 = *v5; /*0x39c410*/
        if ( !*v5 ) /*0x39c410*/
          break; /*0x39c416*/
        v7[76] = 0; /*0x39c41c*/
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 1032LL))(v7, 0); /*0x39c42b*/
        if ( a1[83] ) /*0x39c431*/
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 56LL))(v7); /*0x39c448*/
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7[75] + 600LL) + 8LL))(v7[75] + 600LL); /*0x39c45d*/
          v15 = 0; /*0x39c463*/
          v16 = 0; /*0x39c46b*/
          v9 = -1; /*0x39c471*/
          do /*0x39c483*/
            ++v9; /*0x39c480*/
          while ( *(_BYTE *)(v8 + v9) ); /*0x39c483*/
          sub_3C230(&v15); /*0x39c492*/
          v10 = sub_2D27F0(a1[83] + 696LL, &v14); /*0x39c4ab*/
          sub_58AD0(v10, &v15); /*0x39c4b8*/
          if ( *((_QWORD *)&v16 + 1) > 0xFu ) /*0x39c4c7*/
          {
            v11 = (void *)v15; /*0x39c4cc*/
            if ( (unsigned __int64)(*((_QWORD *)&v16 + 1) + 1LL) >= 0x1000 ) /*0x39c4db*/
            {
              v11 = *(void **)(v15 - 8); /*0x39c4e1*/
              if ( (unsigned __int64)(v15 - (_QWORD)v11 - 8) > 0x1F ) /*0x39c4f0*/
                invoke_watson(0, 0, 0, 0, 0); /*0x39c551*/
            }
            j_j_free(v11); /*0x39c4f2*/
          }
        }
      }
    }
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x39c50c*/
  LOBYTE(v12) = 1; /*0x39c515*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v12); /*0x39c520*/
}

// [3/12] Address: 0x4669f0
// Method: LocalLevelManager::~LocalLevelManager
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall LocalLevelManager__dtor_LocalLevelManager(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &LocalLevelManager::`vftable'; /*0x466a06*/
  Block[45] = &LocalLevelManager::`vftable'; /*0x466a10*/
  qword_906068 = 0; /*0x466a17*/
  v4 = (cocos2d::CCObject *)Block[46]; /*0x466a22*/
  if ( v4 ) /*0x466a2c*/
    cocos2d::CCObject::release(v4); /*0x466a2e*/
  sub_3C310(Block + 80); /*0x466a3b*/
  sub_3C310(Block + 76); /*0x466a47*/
  sub_3C310(Block + 72); /*0x466a53*/
  sub_271550(Block + 59); /*0x466a5f*/
  sub_74F50(Block + 56); /*0x466a6b*/
  sub_3DA90(Block + 51); /*0x466a77*/
  sub_65700(Block + 49); /*0x466a83*/
  sub_3C310(Block + 40); /*0x466a8f*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)Block); /*0x466a97*/
  if ( (a2 & 1) != 0 ) /*0x466aa2*/
    j_j_free(Block); /*0x466aac*/
  return Block; /*0x466ab4*/
}

// [4/12] Address: 0x466c50
// Method: LocalLevelManager::init
char __fastcall LocalLevelManager_init(__int64 a1)
{
  sub_3F5A0((void *)(a1 + 320), "CCLocalLevels.dat", 0x11u); /*0x466c6d*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 888LL))(a1); /*0x466c78*/
  return 1; /*0x466c80*/
}

// [5/12] Address: 0x4675c0
// Method: LocalLevelManager::firstLoad
void __fastcall LocalLevelManager_firstLoad(__int64 a1)
{
  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rdi
  cocos2d::CCObject *v5; // rax
  cocos2d::CCObject *v6; // rdi
  cocos2d::CCObject *v7; // rcx

  v2 = (cocos2d::CCObject *)cocos2d::CCArray::create(a1); /*0x4675cd*/
  v4 = v2; /*0x4675d3*/
  if ( *(cocos2d::CCObject **)(a1 + 368) != v2 ) /*0x4675dd*/
  {
    if ( v2 ) /*0x4675e2*/
      cocos2d::CCObject::retain(v2); /*0x4675e7*/
    v3 = *(cocos2d::CCObject **)(a1 + 368); /*0x4675ed*/
    if ( v3 ) /*0x4675f7*/
      cocos2d::CCObject::release(v3); /*0x4675f9*/
    *(_QWORD *)(a1 + 368) = v4; /*0x4675ff*/
  }
  v5 = (cocos2d::CCObject *)cocos2d::CCArray::create(v3); /*0x467606*/
  v6 = v5; /*0x46760c*/
  if ( *(cocos2d::CCObject **)(a1 + 376) != v5 ) /*0x467616*/
  {
    if ( v5 ) /*0x46761b*/
      cocos2d::CCObject::retain(v5); /*0x467620*/
    v7 = *(cocos2d::CCObject **)(a1 + 376); /*0x467626*/
    if ( v7 ) /*0x467630*/
      cocos2d::CCObject::release(v7); /*0x467632*/
    *(_QWORD *)(a1 + 376) = v6; /*0x467638*/
  }
}

// [6/12] Address: 0x467650
// Method: LocalLevelManager::encodeDataTo
// Hidden C++ exception states: #wind=2
void __fastcall LocalLevelManager_encodeDataTo(__int64 a1, DS_Dictionary *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h]

  v4 = qword_905FD0; /*0x467660*/
  if ( !qword_905FD0 ) /*0x46766a*/
  {
    v6 = operator new(0x6E8u); /*0x467676*/
    qword_905FD0 = sub_2723A0(v6); /*0x467684*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x467695*/
    v4 = qword_905FD0; /*0x467697*/
  }
  v5 = *(_QWORD *)(v4 + 560); /*0x46769e*/
  if ( v5 ) /*0x4676a8*/
    sub_513570(v5); /*0x4676aa*/
  DS_Dictionary::setArrayForKey(a2, "LLM_01", *(struct cocos2d::CCArray **)(a1 + 368)); /*0x4676c0*/
  DS_Dictionary::setIntegerForKey(a2, "LLM_02", 51); /*0x4676d6*/
  DS_Dictionary::setArrayForKey(a2, "LLM_03", *(struct cocos2d::CCArray **)(a1 + 376)); /*0x4676f7*/
}

// [7/12] Address: 0x467700
// Method: LocalLevelManager::didEncodeForSave
// Hidden C++ exception states: #wind=5
int __fastcall LocalLevelManager_didEncodeForSave(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  void **v5; // rax
  char v6; // di
  void *v7; // rcx
  void **v8; // rdx
  char v9; // di
  __int64 v10; // rax
  char v11; // di
  void *v12; // rdx
  __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  void *v17; // [rsp+38h] [rbp-31h]
  void *Block[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+50h] [rbp-19h]
  unsigned __int64 v20; // [rsp+58h] [rbp-11h]
  void *v21[2]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v22; // [rsp+70h] [rbp+7h]
  _BYTE Src[32]; // [rsp+80h] [rbp+17h] BYREF

  if ( !*(_QWORD *)&qword_905FB0 ) /*0x46773f*/
  {
    v17 = operator new(0x690u); /*0x46774b*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0x467758*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x467769*/
  }
  LOBYTE(a3) = 1; /*0x46776b*/
  v4 = (_QWORD *)sub_220990(a1, Block, a3); /*0x467777*/
  if ( (_QWORD *)(a1 + 472) != v4 ) /*0x467784*/
  {
    sub_271550(a1 + 472); /*0x467789*/
    *(_QWORD *)(a1 + 472) = *v4; /*0x467791*/
    *(_QWORD *)(a1 + 480) = v4[1]; /*0x467798*/
    *(_QWORD *)(a1 + 488) = v4[2]; /*0x4677a0*/
    *v4 = 0; /*0x4677a4*/
    v4[1] = 0; /*0x4677a7*/
    v4[2] = 0; /*0x4677ab*/
  }
  sub_271550(Block); /*0x4677b3*/
  if ( Mtx_lock((_Mtx_t)(a1 + 496)) ) /*0x4677c6*/
  {
    std::_Throw_Cpp_error(5); /*0x4677d5*/
    __debugbreak(); /*0x4677db*/
  }
  if ( *(_DWORD *)(a1 + 572) == 0x7FFFFFFF ) /*0x4677e4*/
  {
    *(_DWORD *)(a1 + 572) = 2147483646; /*0x4677e8*/
    std::_Throw_Cpp_error(6); /*0x4677f0*/
  }
  if ( *(_BYTE *)(a1 + 672) ) /*0x4677f7*/
  {
    *(_OWORD *)Block = 0; /*0x467803*/
    v19 = 0; /*0x467807*/
    v20 = 15; /*0x46780b*/
    LOBYTE(Block[0]) = 0; /*0x467813*/
    v5 = Block; /*0x467817*/
    v6 = 1; /*0x46781b*/
  }
  else
  {
    v5 = (void **)sub_3E4F0(Src, a1 + 576); /*0x46782d*/
    v6 = 2; /*0x467832*/
  }
  sub_58AD0(a1 + 608, v5); /*0x467844*/
  if ( (v6 & 2) != 0 ) /*0x46784d*/
  {
    v6 &= ~2u; /*0x46784f*/
    sub_3C310(Src); /*0x467859*/
  }
  if ( (v6 & 1) != 0 ) /*0x467863*/
  {
    v6 &= ~1u; /*0x467865*/
    if ( v20 > 0xF ) /*0x467873*/
    {
      v7 = Block[0]; /*0x467878*/
      if ( v20 + 1 >= 0x1000 ) /*0x467886*/
      {
        v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x46788c*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x46789b*/
          invoke_watson(0, 0, 0, 0, 0); /*0x4678ac*/
      }
      j_j_free(v7); /*0x4678b3*/
    }
  }
  if ( *(_QWORD *)(a1 + 624) ) /*0x4678b8*/
  {
    v10 = cocos2d::CCFileUtils::sharedFileUtils(); /*0x4678e2*/
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 136LL))(v10, Src); /*0x4678f9*/
    v11 = v6 | 0x28; /*0x4678ff*/
    v12 = (void *)(a1 + 608); /*0x467905*/
    if ( *(_QWORD *)(a1 + 632) > 0xFu ) /*0x467914*/
      v12 = *(void **)(a1 + 608); /*0x467916*/
    v13 = sub_43D80(Src, v12, *(_QWORD *)(a1 + 624)); /*0x467928*/
    *(_OWORD *)v21 = *(_OWORD *)v13; /*0x467930*/
    v22 = *(_OWORD *)(v13 + 16); /*0x467938*/
    *(_QWORD *)(v13 + 16) = 0; /*0x46793c*/
    *(_QWORD *)(v13 + 24) = 15; /*0x467940*/
    *(_BYTE *)v13 = 0; /*0x467948*/
    v8 = v21; /*0x46794b*/
    v9 = v11 | 0x50; /*0x46794f*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x4678c5*/
    v19 = 0; /*0x4678c9*/
    v20 = 15; /*0x4678cd*/
    LOBYTE(Block[0]) = 0; /*0x4678d5*/
    v8 = Block; /*0x4678d9*/
    v9 = v6 | 4; /*0x4678dd*/
  }
  sub_58AD0(a1 + 640, v8); /*0x467959*/
  if ( (v9 & 0x10) != 0 ) /*0x467962*/
  {
    v9 &= ~0x10u; /*0x467964*/
    if ( *((_QWORD *)&v22 + 1) > 0xFu ) /*0x46796f*/
    {
      v14 = v21[0]; /*0x467974*/
      if ( (unsigned __int64)(*((_QWORD *)&v22 + 1) + 1LL) >= 0x1000 ) /*0x467982*/
      {
        v14 = (void *)*((_QWORD *)v21[0] - 1); /*0x467988*/
        if ( (unsigned __int64)((char *)v21[0] - (char *)v14 - 8) > 0x1F ) /*0x467997*/
          invoke_watson(0, 0, 0, 0, 0); /*0x4679a8*/
      }
      j_j_free(v14); /*0x4679af*/
    }
  }
  if ( (v9 & 8) != 0 ) /*0x4679b9*/
  {
    v9 &= ~8u; /*0x4679bb*/
    sub_3C310(Src); /*0x4679c2*/
  }
  if ( (v9 & 4) != 0 && v20 > 0xF ) /*0x4679d6*/
  {
    v15 = Block[0]; /*0x4679db*/
    if ( v20 + 1 >= 0x1000 ) /*0x4679e9*/
    {
      v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x4679ef*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x4679fe*/
        invoke_watson(0, 0, 0, 0, 0); /*0x467a0f*/
    }
    j_j_free(v15); /*0x467a16*/
  }
  return Mtx_unlock((_Mtx_t)(a1 + 496)); /*0x467a25*/
}

// [8/12] Address: 0x467a50
// Method: LocalLevelManager::dataLoaded
// Hidden C++ exception states: #wind=6
int __fastcall LocalLevelManager_dataLoaded(__int64 a1, DS_Dictionary *a2)
{
  __int64 v2; // r14
  unsigned int v3; // r13d
  cocos2d::CCObject *ArrayForKey; // rax
  cocos2d::CCArray *v5; // rsi
  cocos2d::CCObject *v6; // rcx
  int v7; // ebx
  int v8; // r12d
  cocos2d::CCDictionary *v9; // r15
  unsigned int v10; // edi
  struct cocos2d::CCObject *v11; // rsi
  cocos2d::CCArray *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int i; // ebx
  struct cocos2d::CCObject *v16; // rax
  unsigned int v17; // ebx
  struct cocos2d::CCObject *v18; // rsi
  cocos2d::CCArray *v19; // rax
  __int64 v20; // rcx
  cocos2d::CCArray *v21; // rdi
  cocos2d::CCArray *v22; // r15
  _QWORD *v23; // r14
  __int64 *v24; // rdi
  __int64 *v25; // rbx
  unsigned int v26; // eax
  __int64 *v27; // rcx
  __int64 *v28; // rcx
  cocos2d::CCArray *v29; // rdx
  int v30; // r14d
  unsigned int v31; // ebx
  int v32; // ecx
  int v33; // r14d
  unsigned int v34; // ebx
  struct cocos2d::CCObject *v35; // rax
  struct cocos2d::CCObject *v36; // r15
  unsigned int v37; // r14d
  struct cocos2d::CCObject *v38; // rbx
  _QWORD *v39; // r15
  __int64 *v40; // r14
  __int64 *v41; // rbx
  unsigned int v42; // eax
  __int64 *v43; // rcx
  __int64 *v44; // rcx
  cocos2d::CCArray *v45; // rsi
  unsigned int v46; // ebx
  __m128i si128; // xmm6
  cocos2d::CCString *v48; // rax
  const char *CString; // rax
  __int64 v50; // r8
  struct cocos2d::CCArray *v51; // rdi
  void *v52; // r8
  cocos2d::CCObject *v53; // rax
  cocos2d::CCArray *v54; // rsi
  cocos2d::CCArray *v55; // rcx
  cocos2d::CCObject *v56; // rcx
  _QWORD *v57; // r12
  __int64 *v58; // rbx
  __int64 *v59; // r13
  unsigned int v60; // eax
  __int64 *v61; // rcx
  __int64 *v62; // rcx
  unsigned int v63; // ebx
  unsigned int v64; // eax
  unsigned int v65; // r12d
  cocos2d::CCDictionary *v66; // r15
  unsigned int v67; // edi
  struct cocos2d::CCObject *v68; // rsi
  cocos2d::CCArray *v69; // rbx
  __int64 v70; // rcx
  struct cocos2d::CCObject *v71; // rsi
  cocos2d::CCArray *v72; // rax
  __int64 v73; // rcx
  cocos2d::CCArray *v74; // rbx
  cocos2d::CCArray *v75; // rbx
  int v76; // r14d
  unsigned int v77; // edi
  int v78; // ecx
  int v79; // r14d
  unsigned int v80; // edi
  struct cocos2d::CCObject *v81; // rax
  struct cocos2d::CCObject *v82; // r15
  unsigned int v83; // edi
  struct cocos2d::CCObject *v84; // rax
  cocos2d::CCArray *v85; // rdi
  unsigned int v86; // esi
  cocos2d::CCString *v87; // rax
  const char *v88; // rax
  __int64 v89; // r8
  struct cocos2d::CCArray *v90; // rbx
  int result; // eax
  struct cocos2d::CCObject *v92; // rdx
  int v93; // ecx
  int v94; // eax
  int v95; // [rsp+30h] [rbp-99h]
  cocos2d::CCDictionary *v96; // [rsp+38h] [rbp-91h]
  cocos2d::CCDictionary *v97; // [rsp+38h] [rbp-91h]
  unsigned int v98; // [rsp+40h] [rbp-89h]
  cocos2d::CCArray *v100; // [rsp+50h] [rbp-79h]
  cocos2d::CCArray *v101; // [rsp+50h] [rbp-79h]
  __int128 v102; // [rsp+58h] [rbp-71h] BYREF
  DS_Dictionary *v103; // [rsp+68h] [rbp-61h]
  void *Block[2]; // [rsp+70h] [rbp-59h] BYREF
  __m128i v105; // [rsp+80h] [rbp-49h]
  _BYTE Buf1[32]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE Buf2[32]; // [rsp+B0h] [rbp-19h] BYREF

  v103 = a2; /*0x467a85*/
  v2 = a1; /*0x467a89*/
  v3 = 0; /*0x467a91*/
  ArrayForKey = DS_Dictionary::getArrayForKey(a2, "LLM_01", 0); /*0x467aa1*/
  v5 = ArrayForKey; /*0x467aa7*/
  v100 = ArrayForKey; /*0x467aaa*/
  if ( !*(_QWORD *)(v2 + 368) ) /*0x467aae*/
  {
    if ( ArrayForKey ) /*0x467aba*/
    {
      cocos2d::CCObject::retain(ArrayForKey); /*0x467ac3*/
      v6 = *(cocos2d::CCObject **)(v2 + 368); /*0x467ac9*/
      if ( v6 ) /*0x467ad3*/
        cocos2d::CCObject::release(v6); /*0x467ad5*/
      *(_QWORD *)(v2 + 368) = v5; /*0x467adb*/
    }
    goto LABEL_69; /*0x467ae2*/
  }
  v7 = sub_467550(v2); /*0x467aef*/
  v8 = v7 + cocos2d::CCArray::count(v5) + 1; /*0x467afe*/
  v95 = v8; /*0x467b01*/
  v9 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x467b0c*/
  v96 = v9; /*0x467b0f*/
  v10 = 0; /*0x467b14*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v2 + 368)) ) /*0x467b1e*/
  {
    do /*0x467bc2*/
    {
      v11 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v2 + 368), v10); /*0x467b3f*/
      sub_3E4F0(Block, (char *)v11 + 344); /*0x467b4d*/
      v12 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(v9, Block); /*0x467b60*/
      sub_3C310(Block); /*0x467b67*/
      if ( !v12 ) /*0x467b6f*/
      {
        v12 = (cocos2d::CCArray *)cocos2d::CCArray::create(v13); /*0x467b77*/
        sub_3E4F0(Buf1, (char *)v11 + 344); /*0x467b85*/
        cocos2d::CCDictionary::setObject(v9, v12, Buf1); /*0x467b95*/
        sub_3C310(Buf1); /*0x467ba0*/
      }
      cocos2d::CCArray::addObject(v12, v11); /*0x467bab*/
      ++v10; /*0x467bb1*/
    }
    while ( v10 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v2 + 368)) ); /*0x467bc2*/
    v2 = a1; /*0x467bcd*/
    v5 = v100; /*0x467bd2*/
  }
  v102 = 0; /*0x467bd9*/
  v14 = operator new(0x40u); /*0x467be3*/
  *v14 = v14; /*0x467be8*/
  v14[1] = v14; /*0x467beb*/
  v14[2] = v14; /*0x467bef*/
  *((_WORD *)v14 + 12) = 257; /*0x467bf3*/
  *(_QWORD *)&v102 = v14; /*0x467bf9*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v2 + 368)); ++i ) /*0x467c07*/
  {
    v16 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v2 + 368), i); /*0x467c1a*/
    if ( *((_QWORD *)v16 + 201) ) /*0x467c27*/
      sub_CD620(&v102, Block, (char *)v16 + 1592); /*0x467c36*/
  }
  v17 = 0; /*0x467c4e*/
  v98 = 0; /*0x467c51*/
  if ( cocos2d::CCArray::count(v5) ) /*0x467c58*/
  {
    while ( 1 ) /*0x467c7b*/
    {
      v18 = cocos2d::CCArray::objectAtIndex(v5, v17); /*0x467c7b*/
      *((_BYTE *)v18 + 858) = 0; /*0x467c7e*/
      sub_3E4F0(Block, (char *)v18 + 344); /*0x467c90*/
      if ( !v105.m128i_i64[0] ) /*0x467c9b*/
        sub_3F5A0(Block, &qword_742E10, 7u); /*0x467cae*/
      v19 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(v9, Block); /*0x467cba*/
      v21 = v19; /*0x467cc0*/
      if ( !v19 ) /*0x467cc6*/
      {
        v22 = (cocos2d::CCArray *)cocos2d::CCArray::create(v20); /*0x467cd2*/
        v23 = (_QWORD *)((char *)v18 + 1592); /*0x467cd5*/
        v24 = (__int64 *)v102; /*0x467cdc*/
        v25 = *(__int64 **)(v102 + 8); /*0x467ce0*/
        if ( !*((_BYTE *)v25 + 25) ) /*0x467ce4*/
        {
          do /*0x467d1a*/
          {
            v26 = (unsigned int)sub_3C160(v25 + 4, (char *)v18 + 1592) >> 31; /*0x467cfc*/
            v27 = v25; /*0x467cff*/
            if ( (_BYTE)v26 ) /*0x467d04*/
              v27 = v24; /*0x467d04*/
            v24 = v27; /*0x467d08*/
            v28 = v25 + 2; /*0x467d0b*/
            if ( !(_BYTE)v26 ) /*0x467d0f*/
              v28 = v25; /*0x467d0f*/
            v25 = (__int64 *)*v28; /*0x467d13*/
          }
          while ( !*(_BYTE *)(*v28 + 25) ); /*0x467d1a*/
        }
        if ( !*((_BYTE *)v24 + 25) && (int)sub_3C160((char *)v18 + 1592, v24 + 4) >= 0 ) /*0x467d33*/
        {
          *((_QWORD *)v18 + 201) = 0; /*0x467d35*/
          if ( *((_QWORD *)v18 + 202) > 0xFu ) /*0x467d44*/
            v23 = (_QWORD *)*v23; /*0x467d46*/
          *(_BYTE *)v23 = 0; /*0x467d49*/
        }
        cocos2d::CCArray::addObject(v22, v18); /*0x467d53*/
        *((_DWORD *)v18 + 176) = v8--; /*0x467d59*/
        v95 = v8; /*0x467d63*/
        v29 = v22; /*0x467d6c*/
        v9 = v96; /*0x467d6f*/
        cocos2d::CCDictionary::setObject(v96, v29, Block); /*0x467d77*/
        goto LABEL_55; /*0x467d7d*/
      }
      v30 = 0; /*0x467d82*/
      v31 = 0; /*0x467d85*/
      if ( cocos2d::CCArray::count(v19) ) /*0x467d8b*/
      {
        do /*0x467dbd*/
        {
          v32 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(v21, v31) + 171); /*0x467da0*/
          if ( v32 <= v30 ) /*0x467da9*/
            v32 = v30; /*0x467da9*/
          v30 = v32; /*0x467dad*/
          ++v31; /*0x467db0*/
        }
        while ( v31 < cocos2d::CCArray::count(v21) ); /*0x467dbd*/
      }
      v33 = v30 + 1; /*0x467dbf*/
      v34 = 0; /*0x467dc2*/
      if ( cocos2d::CCArray::count(v21) ) /*0x467dc8*/
      {
        while ( 1 ) /*0x467dd7*/
        {
          v35 = cocos2d::CCArray::objectAtIndex(v21, v34); /*0x467dd7*/
          v36 = v35; /*0x467ddd*/
          if ( *((_DWORD *)v35 + 171) == *((_DWORD *)v18 + 171) ) /*0x467dec*/
            break; /*0x467dec*/
          if ( ++v34 >= cocos2d::CCArray::count(v21) ) /*0x467dff*/
            goto LABEL_38; /*0x467dff*/
        }
        if ( !*((_BYTE *)v35 + 858) ) /*0x4680cb*/
        {
          GJGameLevel_handleStatsConflict(v18, v35); /*0x4680da*/
          cocos2d::CCArray::removeObject(v21, v36, 1); /*0x4680e8*/
          cocos2d::CCArray::addObject(v21, v18); /*0x4680f4*/
          goto LABEL_54; /*0x4680fa*/
        }
        v57 = (_QWORD *)((char *)v18 + 1592); /*0x4680ff*/
        v58 = (__int64 *)v102; /*0x468106*/
        v59 = *(__int64 **)(v102 + 8); /*0x46810a*/
        if ( !*((_BYTE *)v59 + 25) ) /*0x46810e*/
        {
          do /*0x46814b*/
          {
            v60 = (unsigned int)sub_3C160(v59 + 4, (char *)v18 + 1592) >> 31; /*0x46812c*/
            v61 = v59; /*0x46812f*/
            if ( (_BYTE)v60 ) /*0x468134*/
              v61 = v58; /*0x468134*/
            v58 = v61; /*0x468138*/
            v62 = v59 + 2; /*0x46813b*/
            if ( !(_BYTE)v60 ) /*0x46813f*/
              v62 = v59; /*0x46813f*/
            v59 = (__int64 *)*v62; /*0x468143*/
          }
          while ( !*(_BYTE *)(*v62 + 25) ); /*0x46814b*/
        }
        if ( *((_BYTE *)v58 + 25) ) /*0x46814d*/
        {
          v3 = 0; /*0x468184*/
        }
        else
        {
          v3 = 0; /*0x468162*/
          if ( (int)sub_3C160((char *)v18 + 1592, v58 + 4) >= 0 ) /*0x468167*/
          {
            *((_QWORD *)v18 + 201) = 0; /*0x468169*/
            if ( *((_QWORD *)v18 + 202) > 0xFu ) /*0x468178*/
              v57 = (_QWORD *)*v57; /*0x46817a*/
            *(_BYTE *)v57 = 0; /*0x46817e*/
          }
        }
        cocos2d::CCArray::addObject(v21, v18); /*0x46818d*/
        *((_DWORD *)v36 + 171) = v33; /*0x468193*/
        v8 = v95; /*0x46819a*/
      }
      else
      {
LABEL_38:
        v37 = 0; /*0x467e01*/
        if ( cocos2d::CCArray::count(v21) ) /*0x467e07*/
        {
          do /*0x467e1d*/
          {
            v38 = cocos2d::CCArray::objectAtIndex(v21, v37); /*0x467e1d*/
            sub_3E4F0(Buf2, (char *)v18 + 408); /*0x467e2b*/
            sub_3E4F0(Buf1, (char *)v38 + 408); /*0x467e3c*/
            LODWORD(v38) = sub_3C160(Buf1, Buf2); /*0x467e4e*/
            sub_3C310(Buf1); /*0x467e54*/
            sub_3C310(Buf2); /*0x467e5e*/
            if ( !(_DWORD)v38 ) /*0x467e65*/
              goto LABEL_54; /*0x467e65*/
          }
          while ( ++v37 < cocos2d::CCArray::count(v21) ); /*0x467e1d*/
        }
        v39 = (_QWORD *)((char *)v18 + 1592); /*0x467e7c*/
        v40 = (__int64 *)v102; /*0x467e83*/
        v41 = *(__int64 **)(v102 + 8); /*0x467e87*/
        if ( !*((_BYTE *)v41 + 25) ) /*0x467e8b*/
        {
          do /*0x467ebb*/
          {
            v42 = (unsigned int)sub_3C160(v41 + 4, (char *)v18 + 1592) >> 31; /*0x467e9d*/
            v43 = v41; /*0x467ea0*/
            if ( (_BYTE)v42 ) /*0x467ea5*/
              v43 = v40; /*0x467ea5*/
            v40 = v43; /*0x467ea9*/
            v44 = v41 + 2; /*0x467eac*/
            if ( !(_BYTE)v42 ) /*0x467eb0*/
              v44 = v41; /*0x467eb0*/
            v41 = (__int64 *)*v44; /*0x467eb4*/
          }
          while ( !*(_BYTE *)(*v44 + 25) ); /*0x467ebb*/
        }
        if ( !*((_BYTE *)v40 + 25) && (int)sub_3C160((char *)v18 + 1592, v40 + 4) >= 0 ) /*0x467ed5*/
        {
          *((_QWORD *)v18 + 201) = 0; /*0x467ed7*/
          if ( *((_QWORD *)v18 + 202) > 0xFu ) /*0x467ee6*/
            v39 = (_QWORD *)*v39; /*0x467ee8*/
          *(_BYTE *)v39 = 0; /*0x467eeb*/
        }
        cocos2d::CCArray::addObject(v21, v18); /*0x467ef5*/
      }
      *((_DWORD *)v18 + 176) = v8--; /*0x467efb*/
      v95 = v8; /*0x467f05*/
LABEL_54:
      v9 = v96; /*0x467f0a*/
LABEL_55:
      sub_3C310(Block); /*0x467f0f*/
      v17 = ++v98; /*0x467f1c*/
      v5 = v100; /*0x467f22*/
      if ( v98 >= cocos2d::CCArray::count(v100) ) /*0x467f31*/
      {
        v2 = a1; /*0x467f37*/
        break; /*0x467f37*/
      }
    }
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v2 + 368)); /*0x467f3c*/
  v45 = cocos2d::CCDictionary::allKeys(v9); /*0x467f52*/
  v46 = 0; /*0x467f55*/
  if ( cocos2d::CCArray::count(v45) ) /*0x467f5b*/
  {
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x467f69*/
    do /*0x46802b*/
    {
      v48 = cocos2d::CCArray::stringAtIndex(v45, v46); /*0x467f76*/
      CString = cocos2d::CCString::getCString(v48); /*0x467f7f*/
      *(_OWORD *)Block = 0; /*0x467f88*/
      v105 = 0; /*0x467f8f*/
      v50 = -1; /*0x467f94*/
      do /*0x467fa3*/
        ++v50; /*0x467fa0*/
      while ( CString[v50] ); /*0x467fa3*/
      sub_3C230(Block); /*0x467fb1*/
      v51 = (struct cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(v9, Block); /*0x467fc4*/
      if ( v105.m128i_i64[1] > 0xFuLL ) /*0x467fcf*/
      {
        v52 = Block[0]; /*0x467fd4*/
        if ( (unsigned __int64)(v105.m128i_i64[1] + 1) >= 0x1000 ) /*0x467fe2*/
        {
          v52 = (void *)*((_QWORD *)Block[0] - 1); /*0x467fe8*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v52 - 8) > 0x1F ) /*0x467ff7*/
            invoke_watson(0, 0, 0, 0, 0); /*0x4681b3*/
        }
        j_j_free(v52); /*0x468000*/
      }
      v105 = si128; /*0x468005*/
      LOBYTE(Block[0]) = 0; /*0x46800a*/
      cocos2d::CCArray::addObjectsFromArray(*(cocos2d::CCArray **)(v2 + 368), v51); /*0x468018*/
      ++v46; /*0x46801e*/
    }
    while ( v46 < cocos2d::CCArray::count(v45) ); /*0x46802b*/
  }
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v2 + 368)) ) /*0x468038*/
    qsort( /*0x468060*/
      *(void **)(*(_QWORD *)(*(_QWORD *)(v2 + 368) + 56LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(v2 + 368) + 56LL),
      8u,
      sub_215FC0);
  sub_CDA30(&v102); /*0x46806b*/
LABEL_69:
  v53 = DS_Dictionary::getArrayForKey(v103, "LLM_03", 0); /*0x468070*/
  v54 = v53; /*0x468084*/
  v101 = v53; /*0x468087*/
  v55 = *(cocos2d::CCArray **)(v2 + 376); /*0x46808b*/
  if ( !v55 ) /*0x468095*/
  {
    if ( v53 ) /*0x46809e*/
    {
      cocos2d::CCObject::retain(v53); /*0x4680a7*/
      v56 = *(cocos2d::CCObject **)(v2 + 376); /*0x4680ad*/
      if ( v56 ) /*0x4680b7*/
        cocos2d::CCObject::release(v56); /*0x4680b9*/
      *(_QWORD *)(v2 + 376) = v54; /*0x4680bf*/
    }
    goto LABEL_123; /*0x4680c6*/
  }
  v63 = 0; /*0x4681ba*/
  if ( cocos2d::CCArray::count(v55) ) /*0x4681bd*/
  {
    do /*0x468207*/
    {
      v64 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(v2 + 376)); /*0x4681d7*/
      *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v2 + 376), v64 + ~v63) + 94) = v63; /*0x4681f0*/
      ++v63; /*0x4681f6*/
    }
    while ( v63 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v2 + 376)) ); /*0x468207*/
  }
  v65 = v63 + cocos2d::CCArray::count(v54) + 1; /*0x468216*/
  v66 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x46821f*/
  v97 = v66; /*0x468222*/
  v67 = 0; /*0x468227*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v2 + 376)) ) /*0x468231*/
  {
    do /*0x4682d7*/
    {
      v68 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v2 + 376), v67); /*0x46824f*/
      sub_3E4F0(Buf2, (char *)v68 + 440); /*0x46825d*/
      v69 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(v66, Buf2); /*0x468270*/
      sub_3C310(Buf2); /*0x468277*/
      if ( !v69 ) /*0x46827f*/
      {
        v69 = (cocos2d::CCArray *)cocos2d::CCArray::create(v70); /*0x468287*/
        sub_3E4F0(Buf1, (char *)v68 + 440); /*0x468295*/
        cocos2d::CCDictionary::setObject(v66, v69, Buf1); /*0x4682a5*/
        sub_3C310(Buf1); /*0x4682b0*/
      }
      cocos2d::CCArray::addObject(v69, v68); /*0x4682bb*/
      ++v67; /*0x4682c1*/
      v2 = a1; /*0x4682c3*/
    }
    while ( v67 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 376)) ); /*0x4682d7*/
    v54 = v101; /*0x4682dd*/
  }
  if ( cocos2d::CCArray::count(v54) ) /*0x4682e4*/
  {
    while ( 1 ) /*0x4682fe*/
    {
      v71 = cocos2d::CCArray::objectAtIndex(v54, v3); /*0x4682fe*/
      *((_BYTE *)v71 + 399) = 0; /*0x468301*/
      sub_3E4F0(Block, (char *)v71 + 440); /*0x468313*/
      if ( !v105.m128i_i64[0] ) /*0x46831e*/
        sub_3F5A0(Block, &qword_742E10, 7u); /*0x468331*/
      v72 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(v66, Block); /*0x46833d*/
      v74 = v72; /*0x468343*/
      if ( v72 ) /*0x468349*/
      {
        v76 = 0; /*0x468382*/
        v77 = 0; /*0x468385*/
        if ( cocos2d::CCArray::count(v72) ) /*0x46838b*/
        {
          do /*0x4683bd*/
          {
            v78 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(v74, v77) + 93); /*0x4683a0*/
            if ( v78 <= v76 ) /*0x4683a9*/
              v78 = v76; /*0x4683a9*/
            v76 = v78; /*0x4683ad*/
            ++v77; /*0x4683b0*/
          }
          while ( v77 < cocos2d::CCArray::count(v74) ); /*0x4683bd*/
        }
        v79 = v76 + 1; /*0x4683bf*/
        v80 = 0; /*0x4683c2*/
        if ( !cocos2d::CCArray::count(v74) ) /*0x4683d0*/
        {
LABEL_109:
          v83 = 0; /*0x468404*/
          if ( cocos2d::CCArray::count(v74) ) /*0x46840a*/
          {
            do /*0x468419*/
            {
              v84 = cocos2d::CCArray::objectAtIndex(v74, v83); /*0x468419*/
              if ( (unsigned __int8)GJLevelList_hasMatchingLevels(v71, v84) ) /*0x468425*/
                goto LABEL_114; /*0x46842c*/
            }
            while ( ++v83 < cocos2d::CCArray::count(v74) ); /*0x468419*/
          }
          cocos2d::CCArray::addObject(v74, v71); /*0x46843d*/
          goto LABEL_113; /*0x468443*/
        }
        while ( 1 ) /*0x4683d7*/
        {
          v81 = cocos2d::CCArray::objectAtIndex(v74, v80); /*0x4683d7*/
          v82 = v81; /*0x4683dd*/
          if ( *((_DWORD *)v81 + 93) == *((_DWORD *)v71 + 93) ) /*0x4683ec*/
            break; /*0x4683ec*/
          if ( ++v80 >= cocos2d::CCArray::count(v74) ) /*0x4683ff*/
            goto LABEL_109; /*0x4683ff*/
        }
        v92 = v81; /*0x4685b1*/
        if ( !*((_BYTE *)v81 + 399) ) /*0x4685b4*/
        {
          v93 = *((_DWORD *)v81 + 94); /*0x4685bd*/
          v94 = *((_DWORD *)v71 + 94); /*0x4685c3*/
          if ( v94 <= v93 ) /*0x4685cb*/
            v94 = v93; /*0x4685cb*/
          *((_DWORD *)v71 + 94) = v94; /*0x4685ce*/
          cocos2d::CCArray::removeObject(v74, v92, 1); /*0x4685da*/
          cocos2d::CCArray::addObject(v74, v71); /*0x4685e6*/
          goto LABEL_114; /*0x4685ec*/
        }
        if ( !(unsigned __int8)GJLevelList_hasMatchingLevels(v71, v81) ) /*0x4685f4*/
        {
          cocos2d::CCArray::addObject(v74, v71); /*0x468607*/
          *((_DWORD *)v82 + 93) = v79; /*0x46860d*/
LABEL_113:
          *((_DWORD *)v71 + 94) = v65--; /*0x468449*/
        }
      }
      else
      {
        v75 = (cocos2d::CCArray *)cocos2d::CCArray::create(v73); /*0x468351*/
        cocos2d::CCArray::addObject(v75, v71); /*0x46835a*/
        *((_DWORD *)v71 + 94) = v65--; /*0x468360*/
        cocos2d::CCDictionary::setObject(v66, v75, Block); /*0x468374*/
      }
LABEL_114:
      sub_3C310(Block); /*0x468453*/
      ++v3; /*0x46845c*/
      v54 = v101; /*0x46845f*/
      v66 = v97; /*0x46846f*/
      if ( v3 >= cocos2d::CCArray::count(v101) ) /*0x468474*/
      {
        v2 = a1; /*0x46847a*/
        break; /*0x46847a*/
      }
    }
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v2 + 376)); /*0x46847f*/
  v85 = cocos2d::CCDictionary::allKeys(v66); /*0x468495*/
  if ( cocos2d::CCArray::count(v85) ) /*0x46849b*/
  {
    v86 = 0; /*0x4684a9*/
    do /*0x46852d*/
    {
      v87 = cocos2d::CCArray::stringAtIndex(v85, v86); /*0x4684b5*/
      v88 = cocos2d::CCString::getCString(v87); /*0x4684be*/
      *(_OWORD *)Block = 0; /*0x4684c7*/
      v105 = 0; /*0x4684ce*/
      v89 = -1; /*0x4684d3*/
      do /*0x4684e3*/
        ++v89; /*0x4684e0*/
      while ( v88[v89] ); /*0x4684e3*/
      sub_3C230(Block); /*0x4684f1*/
      v90 = (struct cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(v66, Block); /*0x468504*/
      sub_3C310(Block); /*0x46850b*/
      cocos2d::CCArray::addObjectsFromArray(*(cocos2d::CCArray **)(v2 + 376), v90); /*0x46851a*/
      ++v86; /*0x468520*/
    }
    while ( v86 < cocos2d::CCArray::count(v85) ); /*0x46852d*/
  }
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v2 + 376)) ) /*0x468536*/
    qsort( /*0x46855e*/
      *(void **)(*(_QWORD *)(*(_QWORD *)(v2 + 376) + 56LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(v2 + 376) + 56LL),
      8u,
      sub_215FF0);
LABEL_123:
  result = DS_Dictionary::getIntegerForKey(v103, "LLM_02"); /*0x468564*/
  if ( result < 19 ) /*0x468578*/
    return sub_4671B0(v2); /*0x46857d*/
  return result; /*0x468582*/
}

// [9/12] Address: 0x469e40
// Method: LocalLevelManager::saveFinished
// Hidden C++ exception states: #wind=3
void __fastcall LocalLevelManager_saveFinished(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 i; // rbx
  const char *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  struct _Mtx_internal_imp_t *v12; // rbx
  _OWORD *v13; // rsi
  __m128i v14; // xmm1
  _OWORD *v15; // r14
  void *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r14
  void **v19; // rdx
  char *v20; // rsi
  const void *v21; // rcx
  unsigned __int64 v22; // r12
  size_t v23; // r8
  _QWORD *v24; // rdi
  void **v25; // rcx
  void *v26; // rcx
  char *v27; // rax
  void *Buf2[2]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v29; // [rsp+40h] [rbp-40h]
  void *v30; // [rsp+50h] [rbp-30h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v32; // [rsp+68h] [rbp-18h]

  if ( a2 ) /*0x469e42*/
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x469e83*/
    {
      v30 = operator new(0x690u); /*0x469e8f*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v30); /*0x469e9c*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x469ead*/
    }
    sub_220BF0(a1, a1 + 472); /*0x469eb6*/
    v3 = *(_QWORD *)(a1 + 472); /*0x469ebb*/
    v4 = *(_QWORD *)(a1 + 480); /*0x469ec2*/
    if ( v3 != v4 ) /*0x469ecc*/
    {
      do /*0x469edf*/
      {
        sub_3C310(v3); /*0x469ed3*/
        v3 += 40; /*0x469ed8*/
      }
      while ( v3 != v4 ); /*0x469edf*/
      *(_QWORD *)(a1 + 480) = *(_QWORD *)(a1 + 472); /*0x469ee8*/
    }
    v5 = *(_QWORD *)(a1 + 456); /*0x469eef*/
    for ( i = *(_QWORD *)(a1 + 448); i != v5; i += 32 ) /*0x469f00*/
    {
      v7 = (const char *)i; /*0x469f02*/
      if ( *(_QWORD *)(i + 24) > 0xFu ) /*0x469f0a*/
        v7 = *(const char **)i; /*0x469f0c*/
      remove(v7); /*0x469f0f*/
    }
    v8 = *(_QWORD *)(a1 + 448); /*0x469f1e*/
    v9 = *(_QWORD *)(a1 + 456); /*0x469f25*/
    if ( v8 != v9 ) /*0x469f2f*/
    {
      do /*0x469f40*/
      {
        sub_3C310(v8); /*0x469f34*/
        v8 += 32; /*0x469f39*/
      }
      while ( v8 != v9 ); /*0x469f40*/
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 448); /*0x469f49*/
    }
    *(_OWORD *)Buf2 = 0; /*0x469f53*/
    v10 = 0; /*0x469f5a*/
    v29.m128i_i64[0] = 0; /*0x469f5d*/
    v11 = 15; /*0x469f61*/
    v29.m128i_i64[1] = 15; /*0x469f67*/
    LOBYTE(Buf2[0]) = 0; /*0x469f6b*/
    *(_OWORD *)Block = 0; /*0x469f6f*/
    *(_QWORD *)&v32 = 0; /*0x469f73*/
    *((_QWORD *)&v32 + 1) = 15; /*0x469f77*/
    LOBYTE(Block[0]) = 0; /*0x469f7b*/
    v12 = (struct _Mtx_internal_imp_t *)(a1 + 496); /*0x469f7f*/
    if ( Mtx_lock((_Mtx_t)(a1 + 496)) ) /*0x469f89*/
    {
      std::_Throw_Cpp_error(5); /*0x469f98*/
      __debugbreak(); /*0x469f9e*/
    }
    if ( *(_DWORD *)(a1 + 572) == 0x7FFFFFFF ) /*0x469fa7*/
    {
      *(_DWORD *)(a1 + 572) = 2147483646; /*0x469fab*/
      std::_Throw_Cpp_error(6); /*0x469fb3*/
      __debugbreak(); /*0x469fb9*/
    }
    v13 = (_OWORD *)(a1 + 608); /*0x469fba*/
    if ( Buf2 != (void **)(a1 + 608) ) /*0x469fc8*/
    {
      *(_OWORD *)Buf2 = *v13; /*0x469fcd*/
      v29 = *(__m128i *)(a1 + 624); /*0x469fd5*/
      v14 = v29; /*0x469fd1*/
      *(_QWORD *)(a1 + 624) = 0; /*0x469fd9*/
      *(_QWORD *)(a1 + 632) = 15; /*0x469fdd*/
      *(_BYTE *)v13 = 0; /*0x469fe5*/
      v11 = _mm_srli_si128(v14, 8).m128i_u64[0]; /*0x469ff1*/
      v10 = v14.m128i_i64[0]; /*0x469ff6*/
    }
    v15 = (_OWORD *)(a1 + 640); /*0x469ffb*/
    if ( Block != (void **)(a1 + 640) ) /*0x46a009*/
    {
      if ( *((_QWORD *)&v32 + 1) > 0xFu ) /*0x46a013*/
      {
        v16 = Block[0]; /*0x46a018*/
        if ( (unsigned __int64)(*((_QWORD *)&v32 + 1) + 1LL) >= 0x1000 ) /*0x46a026*/
        {
          v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x46a02c*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x46a03b*/
            invoke_watson(0, 0, 0, 0, 0); /*0x46a04c*/
        }
        j_j_free(v16); /*0x46a053*/
      }
      *(_OWORD *)Block = *v15; /*0x46a05c*/
      v32 = *(_OWORD *)(a1 + 656); /*0x46a065*/
      *(_QWORD *)(a1 + 656) = 0; /*0x46a069*/
      *(_QWORD *)(a1 + 664) = 15; /*0x46a06d*/
      *(_BYTE *)v15 = 0; /*0x46a075*/
    }
    *(_QWORD *)(a1 + 624) = 0; /*0x46a079*/
    if ( *(_QWORD *)(a1 + 632) > 0xFu ) /*0x46a082*/
      v13 = *(_OWORD **)v13; /*0x46a084*/
    *(_BYTE *)v13 = 0; /*0x46a087*/
    v17 = (_QWORD *)(a1 + 640); /*0x46a08a*/
    *(_QWORD *)(a1 + 656) = 0; /*0x46a091*/
    if ( *(_QWORD *)(a1 + 664) > 0xFu ) /*0x46a09a*/
      v17 = (_QWORD *)*v17; /*0x46a09c*/
    *(_BYTE *)v17 = 0; /*0x46a09f*/
    v18 = a1 + 576; /*0x46a0a2*/
    v19 = Buf2; /*0x46a0a9*/
    v20 = (char *)Buf2[0]; /*0x46a0ad*/
    if ( v11 > 0xF ) /*0x46a0b5*/
      v19 = (void **)Buf2[0]; /*0x46a0b5*/
    v21 = (const void *)(a1 + 576); /*0x46a0b9*/
    v22 = *(_QWORD *)(a1 + 600); /*0x46a0bc*/
    if ( v22 > 0xF ) /*0x46a0c4*/
      v21 = *(const void **)v18; /*0x46a0c6*/
    v23 = *(_QWORD *)(a1 + 592); /*0x46a0c9*/
    if ( v23 == v10 && (!v23 || !memcmp(v21, v19, v23)) ) /*0x46a0d7*/
    {
      v24 = (_QWORD *)(a1 + 576); /*0x46a0e0*/
      *(_QWORD *)(v18 + 16) = 0; /*0x46a0ea*/
      if ( v22 > 0xF ) /*0x46a0f2*/
        v24 = (_QWORD *)*v24; /*0x46a0f4*/
      *(_BYTE *)v24 = 0; /*0x46a0f7*/
    }
    Mtx_unlock(v12); /*0x46a102*/
    if ( (_QWORD)v32 ) /*0x46a10d*/
    {
      v25 = Block; /*0x46a10f*/
      if ( *((_QWORD *)&v32 + 1) > 0xFu ) /*0x46a118*/
        v25 = (void **)Block[0]; /*0x46a118*/
      remove((const char *)v25); /*0x46a11d*/
    }
    if ( *((_QWORD *)&v32 + 1) > 0xFu ) /*0x46a12c*/
    {
      v26 = Block[0]; /*0x46a131*/
      if ( (unsigned __int64)(*((_QWORD *)&v32 + 1) + 1LL) >= 0x1000 ) /*0x46a13f*/
      {
        v26 = (void *)*((_QWORD *)Block[0] - 1); /*0x46a145*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v26 - 8) > 0x1F ) /*0x46a154*/
          invoke_watson(0, 0, 0, 0, 0); /*0x46a165*/
      }
      j_j_free(v26); /*0x46a16c*/
    }
    *(_QWORD *)&v32 = 0; /*0x46a171*/
    *((_QWORD *)&v32 + 1) = 15; /*0x46a175*/
    LOBYTE(Block[0]) = 0; /*0x46a17d*/
    if ( v11 > 0xF ) /*0x46a185*/
    {
      v27 = v20; /*0x46a18b*/
      if ( v11 + 1 >= 0x1000 ) /*0x46a195*/
      {
        v20 = (char *)*((_QWORD *)v20 - 1); /*0x46a19b*/
        if ( (unsigned __int64)(v27 - v20 - 8) > 0x1F ) /*0x46a1aa*/
          invoke_watson(0, 0, 0, 0, 0); /*0x46a1bb*/
      }
      j_j_free(v20); /*0x46a1c5*/
    }
  }
}

// [11/12] Address: 0x46b540
// Method: LocalLevelManager::fileShareFinished
void __fastcall LocalLevelManager_fileShareFinished(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( a2 ) /*0x46b54b*/
  {
    *(_DWORD *)(a1 + 328) = *(_DWORD *)(a1 + 320); /*0x46b553*/
    v3 = cocos2d::CCDirector::sharedDirector(a1); /*0x46b55e*/
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL))(v3); /*0x46b56a*/
    cocos2d::CCScheduler::scheduleSelector(v4, sub_46B5C0, a1 - 360); /*0x46b594*/
    *(_DWORD *)(a1 + 320) = 0; /*0x46b59f*/
  }
  else
  {
    *(_DWORD *)(a1 + 320) = 0; /*0x46b5af*/
  }
}

// [12/12] Address: 0x58eb20
// Method: LocalLevelManager::updateLevelOrder
// Hidden C++ exception states: #wind=4
__int64 __fastcall LocalLevelManager_updateLevelOrder(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  void *v4; // rcx
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  void *v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  void *Block[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp-10h]
  void *v16; // [rsp+90h] [rbp+18h]

  v11 = 0; /*0x58eb34*/
  v2 = operator new(0x18u); /*0x58eb3e*/
  *v2 = v2; /*0x58eb43*/
  v2[1] = v2; /*0x58eb46*/
  v10 = v2; /*0x58eb4a*/
  *(_OWORD *)Block = 0; /*0x58eb52*/
  v13 = 0; /*0x58eb58*/
  v14 = 7; /*0x58eb5d*/
  v15 = 8; /*0x58eb66*/
  v9 = 1065353216; /*0x58eb6f*/
  sub_3E200(Block, 16, v2); /*0x58eb84*/
  v3 = qword_905FD0; /*0x58eb8a*/
  if ( !qword_905FD0 ) /*0x58eb94*/
  {
    v16 = operator new(0x6E8u); /*0x58eba0*/
    qword_905FD0 = sub_2723A0(v16); /*0x58ebb1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58ebc2*/
    v3 = qword_905FD0; /*0x58ebc4*/
  }
  *(_DWORD *)(a1 + 768) = sub_3F4F80(*(_QWORD *)(v3 + 568), &v9); /*0x58ebdc*/
  v4 = Block[0]; /*0x58ebe2*/
  if ( Block[0] ) /*0x58ebea*/
  {
    if ( ((v13 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x58ec02*/
    {
      v4 = (void *)*((_QWORD *)Block[0] - 1); /*0x58ec08*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v4 - 8) > 0x1F ) /*0x58ec17*/
        invoke_watson(0, 0, 0, 0, 0); /*0x58ec28*/
    }
    j_j_free(v4); /*0x58ec2f*/
  }
  v5 = (_QWORD **)v10; /*0x58ec34*/
  **((_QWORD **)v10 + 1) = 0; /*0x58ec3d*/
  v6 = *v5; /*0x58ec40*/
  if ( *v5 ) /*0x58ec40*/
  {
    do /*0x58ec63*/
    {
      v7 = (_QWORD *)*v6; /*0x58ec50*/
      j_j_free(v6); /*0x58ec58*/
      v6 = v7; /*0x58ec5d*/
    }
    while ( v7 ); /*0x58ec63*/
  }
  j_j_free(v5); /*0x58ec6d*/
  sub_58EA20(a1); /*0x58ec75*/
  return sub_58F250(a1); /*0x58ec7d*/
}
