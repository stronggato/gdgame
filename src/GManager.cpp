#include <Geode/binding/GManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x59030
// Method: GManager::GManager
__int64 __fastcall GManager_GManager(__int64 a1)
{
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)a1); /*0x59039*/
  *(_QWORD *)a1 = &GManager::`vftable'; /*0x59049*/
  *(_OWORD *)(a1 + 320) = 0; /*0x5904f*/
  *(_QWORD *)(a1 + 336) = 0; /*0x59056*/
  *(_QWORD *)(a1 + 344) = 15; /*0x59061*/
  *(_BYTE *)(a1 + 320) = 0; /*0x5906c*/
  *(_WORD *)(a1 + 352) = 0; /*0x59073*/
  *(_BYTE *)(a1 + 354) = 0; /*0x5907c*/
  return a1; /*0x59083*/
}

// [2/6] Address: 0x761d0
// Method: GManager::init
__int64 __fastcall GManager_init(__int64 a1)
{
  *(_BYTE *)(a1 + 352) = 1; /*0x761d2*/
  *(_BYTE *)(a1 + 353) = 0; /*0x761d9*/
  return 1; /*0x761e1*/
}

// [3/6] Address: 0x761f0
// Method: GManager::setup
__int64 __fastcall GManager_setup(__int64 a1)
{
  *(_BYTE *)(a1 + 352) = 1; /*0x761f7*/
  return GManager_loadDataFromFile(a1, a1 + 320);
}

// [4/6] Address: 0x76210
// Method: GManager::getCompressedSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall GManager_getCompressedSaveString(__int64 a1, __int64 a2)
{
  DS_Dictionary *v4; // rdi
  DS_Dictionary *v6; // [rsp+38h] [rbp-40h]
  _BYTE v7[32]; // [rsp+40h] [rbp-38h] BYREF

  v6 = (DS_Dictionary *)operator new(0xF0u); /*0x76243*/
  v4 = DS_Dictionary::DS_Dictionary(v6); /*0x76251*/
  (*(void (__fastcall **)(__int64, DS_Dictionary *))(*(_QWORD *)a1 + 896LL))(a1, v4); /*0x7625d*/
  DS_Dictionary::saveRootSubDictToString(v4, v7); /*0x7626b*/
  if ( v4 ) /*0x76274*/
  {
    DS_Dictionary::~DS_Dictionary(v4); /*0x76279*/
    j_j_free(v4); /*0x76287*/
  }
  cocos2d::ZipUtils::compressString(a2, v7, 0, 0xFFFFFFFFLL, 11); /*0x762a6*/
  sub_3C310(v7); /*0x762b2*/
  return a2; /*0x762ba*/
}

// [5/6] Address: 0x762e0
// Method: GManager::loadFromCompressedString
// Hidden C++ exception states: #wind=2
double __fastcall GManager_loadFromCompressedString(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  DS_Dictionary *v4; // rbx
  char RootSubDictFromString; // al
  _BYTE *v6; // rdx
  DS_Dictionary *v8; // [rsp+20h] [rbp-38h]
  _QWORD v9[4]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2; /*0x762f9*/
  cocos2d::ZipUtils::decompressString(v9, a2, 0, 11); /*0x7630d*/
  v2[2] = 0; /*0x76314*/
  if ( v2[3] > 0xFu ) /*0x76321*/
    v2 = (_QWORD *)*v2; /*0x76323*/
  *(_BYTE *)v2 = 0; /*0x76326*/
  v8 = (DS_Dictionary *)operator new(0xF0u); /*0x76333*/
  v4 = DS_Dictionary::DS_Dictionary(v8); /*0x76341*/
  RootSubDictFromString = DS_Dictionary::loadRootSubDictFromString(v4, v9); /*0x7634c*/
  v9[2] = 0; /*0x76352*/
  v6 = v9; /*0x7635b*/
  if ( v9[3] > 0xFu ) /*0x76366*/
    v6 = (_BYTE *)v9[0]; /*0x76366*/
  *v6 = 0; /*0x7636c*/
  if ( RootSubDictFromString ) /*0x76371*/
    (*(void (__fastcall **)(__int64, DS_Dictionary *))(*(_QWORD *)a1 + 920LL))(a1, v4); /*0x7637c*/
  if ( v4 ) /*0x76385*/
  {
    DS_Dictionary::~DS_Dictionary(v4); /*0x7638a*/
    j_j_free(v4); /*0x76398*/
  }
  return sub_3C310(v9); /*0x763a8*/
}

// [6/6] Address: 0x766e0
// Method: GManager::loadDataFromFile
// Hidden C++ exception states: #wind=6
void __fastcall GManager_loadDataFromFile(__int64 a1, const char *a2)
{
  DS_Dictionary *v4; // rax
  DS_Dictionary *v5; // rdi
  const char *v6; // rdx
  __int64 v7; // r8
  const char *v8; // rdx
  const char *v9; // rdx
  bool RootSubDictFromCompressedFile; // bp
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  const char *v13; // rcx
  const char *v14; // rdx
  DS_Dictionary *v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+20h] [rbp-68h]
  _QWORD v17[3]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-48h]
  _QWORD v19[4]; // [rsp+48h] [rbp-40h] BYREF

  v15 = (DS_Dictionary *)operator new(0xF0u); /*0x7670b*/
  v4 = DS_Dictionary::DS_Dictionary(v15); /*0x76713*/
  v5 = v4; /*0x76719*/
  v6 = a2; /*0x7671c*/
  if ( *((_QWORD *)a2 + 3) > 0xFu ) /*0x76724*/
    v6 = *(const char **)a2; /*0x76726*/
  if ( DS_Dictionary::loadRootSubDictFromCompressedFile(v4, v6, 1) ) /*0x7672f*/
    goto LABEL_21; /*0x7672f*/
  v8 = a2; /*0x7673d*/
  if ( *((_QWORD *)a2 + 3) > 0xFu ) /*0x76745*/
    v8 = *(const char **)a2; /*0x76747*/
  sub_75EC0(v17, v8, v7, "2.dat", v15); /*0x76756*/
  v9 = (const char *)v17; /*0x7675c*/
  if ( v18 > 0xF ) /*0x76767*/
    v9 = (const char *)v17[0]; /*0x76767*/
  RootSubDictFromCompressedFile = DS_Dictionary::loadRootSubDictFromCompressedFile(v5, v9, 1); /*0x76779*/
  v12 = *((_QWORD *)a2 + 3); /*0x7677c*/
  if ( RootSubDictFromCompressedFile ) /*0x76782*/
  {
    if ( v12 > 0xF ) /*0x76788*/
      a2 = *(const char **)a2; /*0x7678a*/
    v13 = (const char *)v17; /*0x7678d*/
    if ( v18 > 0xF ) /*0x76798*/
      v13 = (const char *)v17[0]; /*0x76798*/
    DS_Dictionary::copyFile(v13, a2); /*0x767a1*/
  }
  else
  {
    if ( v12 > 0xF ) /*0x767ad*/
      a2 = *(const char **)a2; /*0x767af*/
    sub_75EC0(v19, a2, v11, ".dat.bak", v16); /*0x767c1*/
    v14 = (const char *)v19; /*0x767c7*/
    if ( v19[3] > 0xFu ) /*0x767d2*/
      v14 = (const char *)v19[0]; /*0x767d2*/
    RootSubDictFromCompressedFile = DS_Dictionary::loadRootSubDictFromCompressedFile(v5, v14, 1); /*0x767e4*/
    sub_3C310(v19); /*0x767ec*/
  }
  sub_3C310(v17); /*0x767f7*/
  if ( RootSubDictFromCompressedFile ) /*0x767ff*/
LABEL_21:
    (*(void (__fastcall **)(__int64, DS_Dictionary *))(*(_QWORD *)a1 + 920LL))(a1, v5); /*0x76818*/
  else
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 928LL))(a1); /*0x76807*/
  if ( v5 ) /*0x76821*/
  {
    DS_Dictionary::~DS_Dictionary(v5); /*0x76826*/
    j_j_free(v5); /*0x76834*/
  }
}
