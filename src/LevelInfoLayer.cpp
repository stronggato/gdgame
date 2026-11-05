#include <Geode/binding/LevelInfoLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/38] Address: 0xd98f0
// Method: LevelInfoLayer::onRateStarsMod
// Hidden C++ exception states: #wind=1
void __fastcall LevelInfoLayer_onRateStarsMod(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 (__fastcall *v4)(__int64); // rdx

  if ( !*(_BYTE *)(a1 + 782) ) /*0xd9902*/
  {
    v2 = *(_QWORD *)(a1 + 744); /*0xd990f*/
    if ( *(_BYTE *)(v2 + 320) || *(_DWORD *)(v2 + 324) != 8 ) /*0xd9926*/
    {
      v3 = operator new(0x418u); /*0xd9936*/
      SetupTriggerPopup_SetupTriggerPopup((__int64)v3); /*0xd9941*/
      *v3 = &ThreadSearchPopup::`vftable'; /*0xd994d*/
      v3[40] = &ThreadSearchPopup::`vftable'; /*0xd9957*/
      v3[41] = &ThreadSearchPopup::`vftable'; /*0xd9965*/
      v3[42] = &ThreadSearchPopup::`vftable'; /*0xd9973*/
      v3[43] = &ThreadSearchPopup::`vftable'; /*0xd9981*/
      v3[44] = &ThreadSearchPopup::`vftable'; /*0xd998f*/
      v3[51] = &ThreadSearchPopup::`vftable'; /*0xd999d*/
      v3[54] = &ThreadSearchPopup::`vftable'; /*0xd99ab*/
      v3[68] = &ThreadSearchPopup::`vftable'; /*0xd99b9*/
      v3[83] = &ThreadSearchPopup::`vftable'; /*0xd99c7*/
      v3[84] = &ThreadSearchPopup::`vftable'; /*0xd99d5*/
      v3[125] = 0; /*0xd99de*/
      v3[126] = 0; /*0xd99e5*/
      v3[127] = 0; /*0xd99ec*/
      v3[128] = 0; /*0xd99f3*/
      v3[129] = 0; /*0xd99fa*/
      *((_DWORD *)v3 + 260) = 2026; /*0xd9a01*/
      if ( (unsigned __int8)sub_F8F00(v3, a1) ) /*0xd9a11*/
      {
        cocos2d::CCObject::autorelease((cocos2d::CCObject *)v3); /*0xd9a1d*/
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 8LL))(v3, 1); /*0xd9a2d*/
        v3 = 0; /*0xd9a30*/
      }
      v4 = *(__int64 (__fastcall **)(__int64))(*v3 + 1064LL); /*0xd9a36*/
      if ( v4 == SetupTriggerPopup_show ) /*0xd9a4a*/
        SetupTriggerPopup_show((__int64)v3); /*0xd9a5b*/
      else
        v4((__int64)v3); /*0xd9a60*/
    }
  }
}

// [2/38] Address: 0xf3010
// Method: LevelInfoLayer::confirmClone
// Hidden C++ exception states: #wind=2
__int64 __fastcall LevelInfoLayer_confirmClone(__int64 a1)
{
  __int64 v2; // rax
  int *v3; // r9
  int v4; // r10d
  int v5; // r8d
  const char *v6; // rdx
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  int v9; // edi
  __int64 v10; // r8
  cocos2d::CCObject *v11; // rbx
  int v12; // eax
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  _BYTE v17[40]; // [rsp+70h] [rbp-28h] BYREF
  void *v18; // [rsp+B0h] [rbp+18h]

  v2 = GJAccountManager_sharedState(a1); /*0xf3020*/
  v3 = *(int **)(a1 + 1016); /*0xf3025*/
  v4 = v3[60]; /*0xf302c*/
  v5 = *(_DWORD *)(v2 + 360) - *(_DWORD *)(v2 + 364); /*0xf303a*/
  if ( v3[62] == 1 ) /*0xf3049*/
  {
    v6 = "the owner"; /*0xf3052*/
    if ( v4 == v5 ) /*0xf305c*/
      v6 = "the new owner"; /*0xf305c*/
  }
  else
  {
    v6 = "a member"; /*0xf3062*/
  }
  if ( v4 != v5 ) /*0xf306c*/
  {
    v7 = cocos2d::CCString::createWithFormat( /*0xf3075*/
           "Leave this group chat?\n<cl>You can only rejoin if %s invites you back.</c>",
           v6);
LABEL_11:
    CString = cocos2d::CCString::getCString(v7); /*0xf3097*/
    goto LABEL_12; /*0xf309a*/
  }
  if ( v3[50] > 1 ) /*0xf307f*/
  {
    v7 = cocos2d::CCString::createWithFormat( /*0xf3091*/
           "Leave this group chat?\n"
           "<cy>Ownership will pass to the member who\n"
           "has been here the longest.</c>\n"
           "<cl>You can only rejoin if %s invites you back.</c>",
           v6);
    goto LABEL_11; /*0xf3091*/
  }
  CString = "Leave this group chat?\n<cy>You are the last member, so the group chat will end.</c>"; /*0xf3081*/
LABEL_12:
  v9 = a1 + 1008; /*0xf30a0*/
  v14 = 0; /*0xf30aa*/
  v15 = 0; /*0xf30af*/
  v16 = 0; /*0xf30b8*/
  v10 = -1; /*0xf30c1*/
  do /*0xf30d3*/
    ++v10; /*0xf30d0*/
  while ( CString[v10] ); /*0xf30d3*/
  sub_3C230(&v14); /*0xf30e2*/
  v18 = operator new(0x298u); /*0xf30fe*/
  v11 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer(v18); /*0xf310e*/
  if ( v11 ) /*0xf3114*/
  {
    v12 = sub_3E4F0(v17, &v14); /*0xf3124*/
    if ( (unsigned __int8)GJRateLevelLayer_init( /*0xf317b*/
                            (_DWORD)v11,
                            v9,
                            (unsigned int)"Leave Group Chat",
                            v12,
                            (__int64)"Back",
                            (__int64)"Leave",
                            1136525312,
                            0,
                            0,
                            1065353216) )
    {
      cocos2d::CCObject::autorelease(v11); /*0xf3187*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1); /*0xf3197*/
      v11 = 0; /*0xf319a*/
    }
  }
  sub_3C310(&v14); /*0xf31a1*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 64LL))(v11, 3); /*0xf31b1*/
  sub_41FC0(*((_QWORD *)v11 + 77), "GJ_button_06.png"); /*0xf31c2*/
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v11 + 1064LL))(v11); /*0xf31d3*/
}

// [3/38] Address: 0x132bb0
// Method: LevelInfoLayer::updateSideButtons
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelInfoLayer_updateSideButtons(__int64 a1)
{
  void (__fastcall **v2)(__int64, const char *); // rdi
  __int64 v3; // rbx
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  void *v8; // [rsp+30h] [rbp+8h]

  v2 = *(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 704) + 360LL); /*0x132bc9*/
  v3 = *(_QWORD *)(a1 + 704); /*0x132bd0*/
  v4 = cocos2d::CCString::createWithFormat("BPM: %i", *(_DWORD *)(a1 + 792));
  CString = cocos2d::CCString::getCString(v4); /*0x132be9*/
  (*v2)(v3 + 360, CString); /*0x132bf9*/
  v6 = qword_906070; /*0x132bfb*/
  if ( !qword_906070 ) /*0x132c05*/
  {
    v8 = operator new(0x3D0u); /*0x132c11*/
    qword_906070 = sub_47C350(v8); /*0x132c1f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x132c30*/
    v6 = qword_906070; /*0x132c32*/
  }
  result = MusicDownloadManager_getSongInfoObject(v6, *(unsigned int *)(a1 + 768)); /*0x132c3f*/
  if ( result ) /*0x132c47*/
    *(_DWORD *)(result + 484) = *(_DWORD *)(a1 + 792); /*0x132c4f*/
  return result; /*0x132c55*/
}

// [4/38] Address: 0x1b1280
// Method: LevelInfoLayer::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall LevelInfoLayer_create(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // si
  __int64 v5; // rcx
  unsigned int i; // ebx
  __int64 v7; // rdx
  struct cocos2d::CCObject *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *result; // rax
  _QWORD *v27; // rbx
  void *v28; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 1661) ) /*0x1b129a*/
  {
    v4 = 0; /*0x1b12a3*/
  }
  else
  {
    v5 = qword_905FD0; /*0x1b12a8*/
    if ( !qword_905FD0 ) /*0x1b12b2*/
    {
      v28 = operator new(0x6E8u); /*0x1b12be*/
      qword_905FD0 = sub_2723A0(v28); /*0x1b12cc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1b12dd*/
      v5 = qword_905FD0; /*0x1b12df*/
    }
    v4 = a2; /*0x1b12f2*/
    if ( !GameManager_getGameVariable(v5, "0046") ) /*0x1b12ed*/
      v4 = 1; /*0x1b12fb*/
  }
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); ++i ) /*0x1b1307*/
  {
    v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), i); /*0x1b131a*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v8 + 336LL))(v8, v4); /*0x1b1331*/
  }
  if ( !*(_BYTE *)(a1 + 915) ) /*0x1b1347*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1104) + 336LL))(*(_QWORD *)(a1 + 1104), 0); /*0x1b135c*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1096) + 336LL))(*(_QWORD *)(a1 + 1096), 0); /*0x1b136e*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1112) + 336LL))(*(_QWORD *)(a1 + 1112), 0); /*0x1b1380*/
  }
  v9 = *(_QWORD *)(a1 + 872); /*0x1b1386*/
  v10 = (_DWORD *)(a1 + 1508); /*0x1b138d*/
  if ( v9 ) /*0x1b1397*/
  {
    if ( v4 && *v10 == 2 ) /*0x1b13a1*/
      LOBYTE(v7) = 1; /*0x1b13a3*/
    else
      v7 = 0; /*0x1b13a7*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 336LL))(v9, v7); /*0x1b13ac*/
  }
  v11 = *(_QWORD *)(a1 + 880); /*0x1b13b2*/
  if ( v11 ) /*0x1b13bc*/
  {
    if ( v4 && *v10 == 3 && !*(_QWORD *)(a1 + 1664) ) /*0x1b13c8*/
      LOBYTE(v7) = 1; /*0x1b13d2*/
    else
      v7 = 0; /*0x1b13d6*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 336LL))(v11, v7); /*0x1b13db*/
    v10 = (_DWORD *)(a1 + 1508); /*0x1b13e1*/
  }
  v12 = *(_QWORD *)(a1 + 1664); /*0x1b13e8*/
  v13 = v10; /*0x1b13ef*/
  if ( v12 ) /*0x1b13f5*/
  {
    if ( v4 && *v10 == 3 ) /*0x1b13ff*/
      LOBYTE(v7) = 1; /*0x1b1401*/
    else
      v7 = 0; /*0x1b1405*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 336LL))(v12, v7); /*0x1b140a*/
    v13 = (_DWORD *)(a1 + 1508); /*0x1b1410*/
  }
  if ( v4 && *v10 == 1 ) /*0x1b141f*/
  {
    LOBYTE(v7) = 1; /*0x1b142b*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 952) + 336LL))(*(_QWORD *)(a1 + 952), v7); /*0x1b142d*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 952) + 336LL))(*(_QWORD *)(a1 + 952), 0); /*0x1b1441*/
    if ( !v4 ) /*0x1b144a*/
      goto LABEL_36; /*0x1b144a*/
  }
  if ( *v13 == 4 ) /*0x1b1450*/
  {
    LOBYTE(v14) = 1; /*0x1b1452*/
    goto LABEL_37; /*0x1b1454*/
  }
LABEL_36:
  v14 = 0; /*0x1b1456*/
LABEL_37:
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1432) + 336LL))(*(_QWORD *)(a1 + 1432), v14); /*0x1b1458*/
  if ( !*(_BYTE *)(a1 + 1661) ) /*0x1b146f*/
  {
    if ( !v4 ) /*0x1b14ee*/
      goto LABEL_59; /*0x1b14ee*/
    v22 = *(_QWORD *)(a1 + 1048); /*0x1b14f0*/
    if ( v22 ) /*0x1b14fa*/
    {
      LOBYTE(v15) = 1; /*0x1b14ff*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 336LL))(v22, v15); /*0x1b1501*/
    }
    v23 = *(_QWORD *)(a1 + 1064); /*0x1b1507*/
    if ( v23 ) /*0x1b1511*/
    {
      LOBYTE(v15) = 1; /*0x1b1516*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 336LL))(v23, v15); /*0x1b1518*/
    }
    v24 = *(_QWORD *)(a1 + 1248); /*0x1b151e*/
    if ( v24 ) /*0x1b1528*/
    {
      LOBYTE(v15) = *(_DWORD *)(a1 + 1508) == 2; /*0x1b1531*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 336LL))(v24, v15); /*0x1b1537*/
    }
    sub_1ABE10(a1); /*0x1b1540*/
    goto LABEL_58; /*0x1b1540*/
  }
  v17 = *(_QWORD *)(a1 + 1048); /*0x1b1471*/
  if ( v17 ) /*0x1b147b*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 336LL))(v17, 0); /*0x1b1482*/
  v18 = *(_QWORD *)(a1 + 1056); /*0x1b1488*/
  if ( v18 ) /*0x1b1492*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 336LL))(v18, 0); /*0x1b1499*/
  v19 = *(_QWORD *)(a1 + 1064); /*0x1b149f*/
  if ( v19 ) /*0x1b14a9*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 336LL))(v19, 0); /*0x1b14b0*/
  v20 = *(_QWORD *)(a1 + 1248); /*0x1b14b6*/
  if ( v20 ) /*0x1b14c0*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 336LL))(v20, 0); /*0x1b14c7*/
  v21 = *(_QWORD *)(a1 + 800); /*0x1b14cd*/
  if ( v21 ) /*0x1b14d7*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 336LL))(v21, 0); /*0x1b14de*/
  if ( v4 ) /*0x1b14e7*/
LABEL_58:
    EditorUI_updateGroupIDLabel(a1, v15, v16); /*0x1b1545*/
LABEL_59:
  v25 = *(_QWORD *)(a1 + 1088); /*0x1b154d*/
  if ( v25 ) /*0x1b1557*/
  {
    if ( *(_BYTE *)(a1 + 1661) && *(_BYTE *)(a1 + 1662) ) /*0x1b1562*/
      LOBYTE(v15) = 1; /*0x1b156b*/
    else
      v15 = 0; /*0x1b156f*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 336LL))(v25, v15); /*0x1b1574*/
  }
  result = *(_QWORD **)(a1 + 608); /*0x1b157a*/
  v27 = (_QWORD *)*result; /*0x1b1581*/
  if ( (_QWORD *)*result != result ) /*0x1b1587*/
  {
    do /*0x1b15ab*/
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v27[3] + 336LL))(v27[3], v4); /*0x1b159b*/
      v27 = (_QWORD *)*v27; /*0x1b15a1*/
    }
    while ( v27 != *(_QWORD **)(a1 + 608) ); /*0x1b15ab*/
  }
  return result; /*0x1b15ad*/
}

// [6/38] Address: 0x34f100
// Method: LevelInfoLayer::onRateDemon
// Hidden C++ exception states: #wind=8
void __fastcall LevelInfoLayer_onRateDemon(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // [rsp+30h] [rbp+8h]
  void *v5; // [rsp+30h] [rbp+8h]
  void *v6; // [rsp+30h] [rbp+8h]
  void *v7; // [rsp+30h] [rbp+8h]
  void *v8; // [rsp+30h] [rbp+8h]
  void *v9; // [rsp+30h] [rbp+8h]
  void *v10; // [rsp+30h] [rbp+8h]
  void *v11; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 14400) ) /*0x34f117*/
  {
    v2 = qword_905F60; /*0x34f124*/
    if ( !qword_905F60 ) /*0x34f12e*/
    {
      v4 = operator new(0x8A8u); /*0x34f13a*/
      qword_905F60 = sub_5AE20(v4); /*0x34f148*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x34f159*/
      v2 = qword_905F60; /*0x34f15b*/
    }
    if ( !v2 ) /*0x34f168*/
    {
      v5 = operator new(0x8A8u); /*0x34f174*/
      qword_905F60 = sub_5AE20(v5); /*0x34f182*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x34f193*/
      v2 = qword_905F60; /*0x34f195*/
    }
    if ( !v2 ) /*0x34f1a2*/
    {
      v6 = operator new(0x8A8u); /*0x34f1ae*/
      qword_905F60 = sub_5AE20(v6); /*0x34f1bc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x34f1cd*/
      v2 = qword_905F60; /*0x34f1cf*/
    }
    if ( !v2 ) /*0x34f1dc*/
    {
      v7 = operator new(0x8A8u); /*0x34f1e8*/
      qword_905F60 = sub_5AE20(v7); /*0x34f1f6*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x34f207*/
    }
    sub_3A6590(*(_QWORD *)(a1 + 14384)); /*0x34f237*/
    v3 = qword_905F60; /*0x34f23c*/
    if ( !qword_905F60 ) /*0x34f246*/
    {
      v8 = operator new(0x8A8u); /*0x34f252*/
      qword_905F60 = sub_5AE20(v8); /*0x34f260*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x34f271*/
      v3 = qword_905F60; /*0x34f273*/
    }
    if ( !v3 ) /*0x34f280*/
    {
      v9 = operator new(0x8A8u); /*0x34f28c*/
      qword_905F60 = sub_5AE20(v9); /*0x34f29a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x34f2ab*/
      v3 = qword_905F60; /*0x34f2ad*/
    }
    if ( !v3 ) /*0x34f2ba*/
    {
      v10 = operator new(0x8A8u); /*0x34f2c6*/
      qword_905F60 = sub_5AE20(v10); /*0x34f2d4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x34f2e1*/
      v3 = qword_905F60; /*0x34f2e4*/
    }
    if ( !v3 ) /*0x34f2f1*/
    {
      v11 = operator new(0x8A8u); /*0x34f2fd*/
      qword_905F60 = sub_5AE20(v11); /*0x34f30b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x34f31c*/
    }
    sub_3A6590(*(_QWORD *)(a1 + 14392)); /*0x34f34c*/
  }
}

// [8/38] Address: 0x41a940
// Method: LevelInfoLayer::onAddToList
__int64 __fastcall LevelInfoLayer_onAddToList(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = GJSearchObject_create(102); /*0x41a94e*/
  *(_BYTE *)(v2 + 462) = 1; /*0x41a956*/
  v3 = sub_3DE4D0(v2); /*0x41a95d*/
  v4 = a1 + 472; /*0x41a964*/
  if ( !a1 ) /*0x41a96e*/
    v4 = 0; /*0x41a96e*/
  *(_QWORD *)(v3 + 784) = v4; /*0x41a975*/
  return sub_3E7B80(v3); /*0x41a97c*/
}

// [9/38] Address: 0x41a990
// Method: LevelInfoLayer::cellPerformedAction
// Hidden C++ exception states: #wind=1
char __fastcall LevelInfoLayer_cellPerformedAction(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  __int128 v15; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]
  __int64 v17; // [rsp+78h] [rbp-10h]

  if ( a3 != 28 || a4 != 1 || !*(_QWORD *)(a1 + 32) ) /*0x41a9b4*/
    return 0; /*0x41aabd*/
  GJLevelList_addLevelToList(*(_QWORD *)(a2 + 560)); /*0x41a9c8*/
  v5 = a5; /*0x41a9cd*/
  if ( a5 ) /*0x41a9d8*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a5 + 1056LL))(a5, 0); /*0x41a9df*/
  v6 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v5) + 272); /*0x41a9eb*/
  v15 = 0; /*0x41a9ff*/
  v16 = 0; /*0x41aa06*/
  v17 = 15; /*0x41aa0b*/
  LOBYTE(v15) = 0; /*0x41aa14*/
  v12 = 0; /*0x41aa18*/
  *(_QWORD *)&v12 = sub_3C460(32); /*0x41aa31*/
  v13 = 19; /*0x41aa36*/
  v14 = 31; /*0x41aa3f*/
  strcpy((char *)v12, "Added to Level List"); /*0x41aa4f*/
  v7 = *v6; /*0x41aa6b*/
  v10 = sub_3A4CA0(&v12, v8, v9, 255, &v15); /*0x41aa93*/
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v7 + 456))(v6, v10, 115); /*0x41aaa4*/
  return 1; /*0x41aaac*/
}

// [10/38] Address: 0x41aad0
// Method: LevelInfoLayer::onSetFolder
void __fastcall LevelInfoLayer_onSetFolder(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 504); /*0x41aad9*/
  if ( v2 && !*(_BYTE *)(a1 + 488) ) /*0x41aae5*/
  {
    v5[2] = 10; /*0x41aafd*/
    v5[1] = 29285; /*0x41ab06*/
    v5[3] = 15; /*0x41ab0d*/
    v5[0] = 0x646C6F4620746553LL; /*0x41ab1e*/
    v3 = (_QWORD *)SetFolderPopup_create(*(unsigned int *)(v2 + 988), 0, v5); /*0x41ab34*/
    v4 = a1 + 464; /*0x41ab3b*/
    if ( !a1 ) /*0x41ab45*/
      v4 = 0; /*0x41ab45*/
    v3[87] = v4; /*0x41ab49*/
    (*(void (__fastcall **)(_QWORD *))(*v3 + 1064LL))(v3); /*0x41ab5d*/
  }
}

// [11/38] Address: 0x41ab70
// Method: LevelInfoLayer::setIDPopupClosed
void __fastcall LevelInfoLayer_setIDPopupClosed(__int64 a1, __int64 a2, int a3)
{
  int v3; // edx
  cocos2d::CCString *v5; // rax
  const char *CString; // rax

  v3 = 0; /*0x41ab76*/
  if ( a3 >= 0 ) /*0x41ab83*/
    v3 = a3; /*0x41ab83*/
  if ( v3 > 999 ) /*0x41ab89*/
    v3 = 999; /*0x41ab89*/
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 988LL) = v3; /*0x41ab97*/
  v5 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0x41ab9d*/
  CString = cocos2d::CCString::getCString(v5); /*0x41aba6*/
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 128) + 360LL))( /*0x41abc3*/
    *(_QWORD *)(a1 + 128) + 360LL,
    CString);
  cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 128), 24.0, 0.55000001, 0.0); /*0x41abe5*/
}

// [12/38] Address: 0x41abf0
// Method: LevelInfoLayer::onFavorite
void __fastcall LevelInfoLayer_onFavorite(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // bp
  const char *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rdi
  cocos2d::CCSpriteFrameCache *v7; // rax
  struct cocos2d::CCSpriteFrame *v8; // rax

  if ( !*(_BYTE *)(a1 + 488) ) /*0x41abf4*/
  {
    v2 = *(_QWORD *)(a1 + 504); /*0x41ac01*/
    v3 = *(_BYTE *)(v2 + 984); /*0x41ac17*/
    *(_BYTE *)(v2 + 984) = v3 == 0; /*0x41ac29*/
    v4 = "gj_heartOff_001.png"; /*0x41ac3e*/
    v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2); /*0x41ac45*/
    v6 = *v5; /*0x41ac48*/
    if ( !v3 ) /*0x41ac52*/
      v4 = "gj_heartOn_001.png"; /*0x41ac52*/
    v7 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x41ac56*/
    v8 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v7, v4); /*0x41ac62*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v6 + 1008))(v5, v8); /*0x41ac6e*/
  }
}

// [13/38] Address: 0x41afd0
// Method: LevelInfoLayer::onGarage
// Hidden C++ exception states: #wind=1
void __fastcall LevelInfoLayer_onGarage(__int64 a1)
{
  struct cocos2d::CCScene *v1; // rax
  struct cocos2d::CCScene *v2; // rbx
  __int64 v3; // rcx
  cocos2d::CCDirector *v4; // rax
  __int64 v5; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 488) ) /*0x41afd6*/
  {
    v1 = (struct cocos2d::CCScene *)GJGarageLayer_scene(); /*0x41afdf*/
    v2 = cocos2d::CCTransitionMoveInT::create(0.5, v1); /*0x41aff5*/
    v4 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v3); /*0x41aff8*/
    cocos2d::CCDirector::pushScene(v4, v2); /*0x41b004*/
    v5 = qword_905FD0; /*0x41b00a*/
    if ( !qword_905FD0 ) /*0x41b014*/
    {
      v6 = operator new(0x6E8u); /*0x41b020*/
      qword_905FD0 = sub_2723A0(v6); /*0x41b02e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x41b03f*/
      v5 = qword_905FD0; /*0x41b041*/
    }
    *(_BYTE *)(v5 + 1112) = 1; /*0x41b048*/
  }
}

// [14/38] Address: 0x41b1b0
// Method: LevelInfoLayer::downloadLevel
// Hidden C++ exception states: #wind=8
__int64 __fastcall LevelInfoLayer_downloadLevel(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // rcx
  bool GameVariable; // al
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 i; // r8
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 j; // r8
  int v16; // ecx
  _DWORD *v17; // rax
  unsigned int v18; // edi
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 result; // rax
  void *v23; // [rsp+30h] [rbp+8h]
  void *v24; // [rsp+30h] [rbp+8h]
  void *v25; // [rsp+30h] [rbp+8h]
  void *v26; // [rsp+30h] [rbp+8h]
  void *v27; // [rsp+30h] [rbp+8h]
  void *v28; // [rsp+30h] [rbp+8h]
  void *v29; // [rsp+30h] [rbp+8h]

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 496) + 336LL))(*(_QWORD *)(a1 + 496), 0); /*0x41b1ce*/
  LOBYTE(v2) = 1; /*0x41b1de*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 640) + 336LL))(*(_QWORD *)(a1 + 640), v2); /*0x41b1e0*/
  v3 = *(_QWORD *)&qword_905FB0; /*0x41b1e6*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x41b1f0*/
  {
    v23 = operator new(0x690u); /*0x41b1fc*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v23); /*0x41b20a*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41b21b*/
    v3 = *(_QWORD *)&qword_905FB0; /*0x41b21d*/
  }
  v4 = *(_DWORD *)(v3 + 1608); /*0x41b224*/
  if ( v4 != 99 && v4 != 100 ) /*0x41b237*/
  {
    v5 = qword_905FD0; /*0x41b23d*/
    if ( !qword_905FD0 ) /*0x41b247*/
    {
      v24 = operator new(0x6E8u); /*0x41b253*/
      qword_905FD0 = sub_2723A0(v24); /*0x41b261*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x41b272*/
      v5 = qword_905FD0; /*0x41b274*/
    }
    GameVariable = GameManager_getGameVariable(v5, "0084"); /*0x41b282*/
    v3 = *(_QWORD *)&qword_905FB0; /*0x41b287*/
    if ( GameVariable ) /*0x41b290*/
    {
      if ( !*(_DWORD *)(*(_QWORD *)(a1 + 504) + 704LL) ) /*0x41b29d*/
      {
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x41b2ad*/
        {
          v25 = operator new(0x690u); /*0x41b2b9*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0x41b2c7*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41b2d8*/
          v3 = *(_QWORD *)&qword_905FB0; /*0x41b2da*/
        }
        v7 = 0; /*0x41b2e1*/
        v8 = *(_QWORD *)(v3 + 856); /*0x41b2e3*/
        if ( v8 ) /*0x41b2ed*/
        {
          v9 = *(_QWORD *)(v8 + 56); /*0x41b2ef*/
          if ( v9 ) /*0x41b2f6*/
          {
            for ( i = *(_QWORD *)(v9 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x41b2f8*/
            {
              v11 = v7; /*0x41b300*/
              v7 = *(_DWORD *)(*(_QWORD *)(v9 + 264) + 704LL); /*0x41b309*/
              if ( v7 >= v11 ) /*0x41b311*/
                v7 = v11; /*0x41b311*/
              v9 = i; /*0x41b314*/
              if ( !i ) /*0x41b31a*/
                break; /*0x41b31a*/
            }
          }
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 504) + 704LL) = v7; /*0x41b32c*/
      }
    }
    else
    {
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x41b33a*/
      {
        v26 = operator new(0x690u); /*0x41b346*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v26); /*0x41b354*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41b365*/
        v3 = *(_QWORD *)&qword_905FB0; /*0x41b367*/
      }
      v12 = 0; /*0x41b36e*/
      v13 = *(_QWORD *)(v3 + 856); /*0x41b370*/
      if ( v13 ) /*0x41b37a*/
      {
        v14 = *(_QWORD *)(v13 + 56); /*0x41b37c*/
        if ( v14 ) /*0x41b383*/
        {
          for ( j = *(_QWORD *)(v14 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x41b385*/
          {
            v16 = v12; /*0x41b390*/
            v12 = *(_DWORD *)(*(_QWORD *)(v14 + 264) + 704LL); /*0x41b399*/
            if ( v12 <= v16 ) /*0x41b3a1*/
              v12 = v16; /*0x41b3a1*/
            v14 = j; /*0x41b3a4*/
            if ( !j ) /*0x41b3aa*/
              break; /*0x41b3aa*/
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 504) + 704LL) = v12 + 1; /*0x41b3bf*/
    }
  }
  if ( !v3 ) /*0x41b3c8*/
  {
    v27 = operator new(0x690u); /*0x41b3d4*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v27); /*0x41b3e2*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41b3f3*/
    v3 = *(_QWORD *)&qword_905FB0; /*0x41b3f5*/
  }
  sub_21D860(v3, *(_QWORD *)(a1 + 504)); /*0x41b406*/
  v17 = *(_DWORD **)(a1 + 504); /*0x41b40b*/
  v18 = v17[248] - v17[249]; /*0x41b418*/
  v19 = v17[82] - v17[83]; /*0x41b424*/
  v20 = *(_QWORD *)&qword_905FB0; /*0x41b42a*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x41b434*/
  {
    v28 = operator new(0x690u); /*0x41b440*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v28); /*0x41b44e*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41b45f*/
    v20 = *(_QWORD *)&qword_905FB0; /*0x41b462*/
  }
  sub_22E940(v20, v19, *(unsigned __int8 *)(*(_QWORD *)(a1 + 504) + 721LL), v18); /*0x41b47d*/
  v21 = a1 + 408; /*0x41b482*/
  result = *(_QWORD *)&qword_905FB0; /*0x41b489*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x41b493*/
  {
    v29 = operator new(0x690u); /*0x41b49f*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v29); /*0x41b4ad*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41b4be*/
    result = *(_QWORD *)&qword_905FB0; /*0x41b4c0*/
  }
  *(_QWORD *)(result + 1360) = v21; /*0x41b4c7*/
  return result; /*0x41b4ce*/
}

// [16/38] Address: 0x41cac0
// Method: LevelInfoLayer::levelDownloadFinished
// Hidden C++ exception states: #wind=2
__int64 __fastcall LevelInfoLayer_levelDownloadFinished(__int64 a1, cocos2d::CCObject *a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  cocos2d::CCObject *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  void **v12; // rdi
  __int64 v13; // rbx
  cocos2d::CCSpriteFrameCache *v14; // rax
  struct cocos2d::CCSpriteFrame *v15; // rax
  void *v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // rbx
  __int64 v19; // rax
  _BYTE v20[32]; // [rsp+40h] [rbp-19h] BYREF
  void *Block[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v22; // [rsp+70h] [rbp+17h]
  unsigned __int64 v23; // [rsp+78h] [rbp+1Fh]

  v4 = *(_QWORD *)(a1 + 96); /*0x41caec*/
  if ( !v4 /*0x41cb0f*/
    || (result = (unsigned int)(*(_DWORD *)(v4 + 328) - *(_DWORD *)(v4 + 332)),
        (_DWORD)result == *((_DWORD *)a2 + 82) - *((_DWORD *)a2 + 83)) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 232) + 336LL))(*(_QWORD *)(a1 + 232), 0); /*0x41cb21*/
    v6 = *(cocos2d::CCObject **)(a1 + 96); /*0x41cb27*/
    if ( v6 ) /*0x41cb2e*/
      cocos2d::CCObject::release(v6); /*0x41cb30*/
    *(_QWORD *)(a1 + 96) = a2; /*0x41cb36*/
    cocos2d::CCObject::retain(a2); /*0x41cb3d*/
    LOBYTE(v7) = 1; /*0x41cb4a*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 336LL))(*(_QWORD *)(a1 + 88), v7); /*0x41cb4c*/
    sub_420820(a1 - 408); /*0x41cb59*/
    v8 = *(_QWORD *)(a1 + 192); /*0x41cb5e*/
    if ( v8 ) /*0x41cb68*/
    {
      v9 = *(_QWORD *)(a1 + 96); /*0x41cb6e*/
      LOBYTE(v9) = *(_DWORD *)(v9 + 1052) != *(_DWORD *)(v9 + 1056); /*0x41cb7e*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 336LL))(v8, v9); /*0x41cb84*/
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 344LL))(*(_QWORD *)(a1 + 192)) ) /*0x41cb94*/
      {
        *(_OWORD *)Block = 0; /*0x41cba5*/
        Block[0] = (void *)sub_3C460(32); /*0x41cbc1*/
        v22 = 23; /*0x41cbc5*/
        v23 = 31; /*0x41cbcd*/
        strcpy((char *)Block[0], "GJ_duplicateBtn_001.png"); /*0x41cbdc*/
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 1052LL) - *(_DWORD *)(*(_QWORD *)(a1 + 96) + 1056LL) != 1 ) /*0x41cc14*/
        {
          v22 = 29; /*0x41cc31*/
          memmove(Block[0], "GJ_duplicateLockedBtn_001.png", 0x1Du); /*0x41cc49*/
          *((_BYTE *)Block[0] + 29) = 0; /*0x41cc4e*/
        }
        v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 952LL))(*(_QWORD *)(a1 + 192)); /*0x41cd20*/
        v11 = v10; /*0x41cd26*/
        v12 = Block; /*0x41cd29*/
        if ( v23 > 0xF ) /*0x41cd32*/
          v12 = (void **)Block[0]; /*0x41cd32*/
        v13 = *v10; /*0x41cd37*/
        v14 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x41cd3a*/
        v15 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v14, (const char *)v12); /*0x41cd46*/
        (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSpriteFrame *))(v13 + 1008))(v11, v15); /*0x41cd52*/
        if ( v23 > 0xF ) /*0x41cd61*/
        {
          v16 = Block[0]; /*0x41cd66*/
          if ( v23 + 1 >= 0x1000 ) /*0x41cd74*/
          {
            v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x41cd7a*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x41cd89*/
              invoke_watson(0, 0, 0, 0, 0); /*0x41cd9a*/
          }
          j_j_free(v16); /*0x41cda1*/
        }
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 344LL))(*(_QWORD *)(a1 + 192)); /*0x41cdb0*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 936LL))(*(_QWORD *)(a1 + 192), v17); /*0x41cdca*/
    }
    v18 = sub_3E4F0(Block, *(_QWORD *)(a1 + 96) + 1376LL); /*0x41cde9*/
    v19 = sub_3E4F0(v20, *(_QWORD *)(a1 + 96) + 1344LL); /*0x41cdfb*/
    return sub_16AE50(*(_QWORD *)(a1 + 320), v19, v18, *(unsigned int *)(*(_QWORD *)(a1 + 96) + 1408LL)); /*0x41ce18*/
  }
  return result; /*0x41ce1d*/
}

// [17/38] Address: 0x41ce40
// Method: LevelInfoLayer::levelDownloadFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelInfoLayer_levelDownloadFailed(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  _QWORD *v3; // rbx
  __int128 v5; // [rsp+50h] [rbp-48h] BYREF
  __int64 v6; // [rsp+60h] [rbp-38h]
  __int64 v7; // [rsp+68h] [rbp-30h]
  _BYTE v8[40]; // [rsp+70h] [rbp-28h] BYREF

  v1 = a1 - 408; /*0x41ce4d*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 - 408 + 640) + 336LL))(*(_QWORD *)(a1 - 408 + 640), 0); /*0x41ce60*/
  v5 = 0; /*0x41ce69*/
  *(_QWORD *)&v5 = sub_3C460(48); /*0x41ce87*/
  v6 = 46; /*0x41ce8c*/
  v7 = 47; /*0x41ce95*/
  strcpy((char *)v5, "Level download failed, please try again later."); /*0x41cea5*/
  v2 = sub_3E4F0(v8, &v5); /*0x41ceee*/
  v3 = (_QWORD *)FLAlertLayer_create_0( /*0x41cf39*/
                   0,
                   (unsigned int)"Error",
                   v2,
                   (unsigned int)"OK",
                   0,
                   1133903872,
                   0,
                   0,
                   1065353216);
  sub_3C310(&v5); /*0x41cf41*/
  v3[71] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 504LL))(v1); /*0x41cf52*/
  return (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 1064LL))(v3); /*0x41cf68*/
}

// [18/38] Address: 0x41cf80
// Method: LevelInfoLayer::levelUpdateFinished
__int64 __fastcall LevelInfoLayer_levelUpdateFinished(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  int v6; // r9d
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 88); /*0x41cf8a*/
  if ( !v3 /*0x41cfb6*/
    || (v6 = *(_DWORD *)(v3 + 328) - *(_DWORD *)(v3 + 332),
        result = (unsigned int)(*(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332)),
        v6 == (_DWORD)result) )
  {
    if ( !*(_BYTE *)(a1 + 220) ) /*0x41cfb8*/
      LevelInfoLayer_showUpdateAlert(a1, a3); /*0x41cfc4*/
    result = (**(__int64 (__fastcall ***)(__int64, __int64))(a1 - 8))(a1 - 8, a2); /*0x41cfd4*/
    *(_BYTE *)(a1 + 220) = 0; /*0x41cfd6*/
  }
  return result; /*0x41cfdd*/
}

// [19/38] Address: 0x41cff0
// Method: LevelInfoLayer::showUpdateAlert
// Hidden C++ exception states: #wind=1
void __fastcall LevelInfoLayer_showUpdateAlert(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  const char *v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rbx
  __int128 v8; // [rsp+50h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  _BYTE v11[40]; // [rsp+70h] [rbp-28h] BYREF

  v2 = a2 - 1; /*0x41cffd*/
  if ( v2 ) /*0x41d000*/
  {
    v3 = v2 - 1; /*0x41d002*/
    if ( v3 ) /*0x41d005*/
    {
      if ( v3 != 1 ) /*0x41d00a*/
        return; /*0x41d00a*/
      v4 = "Level has been updated to the latest version."; /*0x41d010*/
    }
    else
    {
      v4 = "Update your application to update this level."; /*0x41d019*/
    }
  }
  else
  {
    v4 = "Level is up to date."; /*0x41d022*/
  }
  v8 = 0; /*0x41d02c*/
  v9 = 0; /*0x41d033*/
  v10 = 0; /*0x41d038*/
  v5 = -1; /*0x41d03d*/
  do /*0x41d047*/
    ++v5; /*0x41d044*/
  while ( v4[v5] ); /*0x41d047*/
  sub_3C230(&v8); /*0x41d052*/
  v6 = sub_3E4F0(v11, &v8); /*0x41d06e*/
  v7 = FLAlertLayer_create_0(0, (unsigned int)"Update", v6, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x41d0ba*/
  sub_3C310(&v8); /*0x41d0c2*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0x41d0d4*/
}

// [20/38] Address: 0x41d0e0
// Method: LevelInfoLayer::levelUpdateFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelInfoLayer_levelUpdateFailed(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int128 v6; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  _BYTE v9[40]; // [rsp+70h] [rbp-28h] BYREF

  v6 = 0; /*0x41d0f3*/
  *(_QWORD *)&v6 = sub_3C460(48); /*0x41d10e*/
  v7 = 44; /*0x41d113*/
  v8 = 47; /*0x41d11c*/
  strcpy((char *)v6, "Level update failed, please try again later."); /*0x41d12c*/
  v2 = sub_3E4F0(v9, &v6); /*0x41d16a*/
  v3 = (_QWORD *)FLAlertLayer_create_0( /*0x41d1b5*/
                   0,
                   (unsigned int)"Error",
                   v2,
                   (unsigned int)"OK",
                   0,
                   1133903872,
                   0,
                   0,
                   1065353216);
  sub_3C310(&v6); /*0x41d1bd*/
  v3[71] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 416) + 504LL))(a1 - 416); /*0x41d1d2*/
  (*(void (__fastcall **)(_QWORD *))(*v3 + 1064LL))(v3); /*0x41d1e6*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 224) + 336LL))(*(_QWORD *)(a1 + 224), 0); /*0x41d1f4*/
  LOBYTE(v4) = 1; /*0x41d201*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 336LL))(*(_QWORD *)(a1 + 80), v4);
}

// [21/38] Address: 0x41d220
// Method: LevelInfoLayer::levelDeleteFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelInfoLayer_levelDeleteFinished(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int128 v6; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  _BYTE v9[40]; // [rsp+70h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 56); /*0x41d230*/
  if ( *(_DWORD *)(result + 328) - *(_DWORD *)(result + 332) == a2 ) /*0x41d245*/
  {
    v6 = 0; /*0x41d24e*/
    *(_QWORD *)&v6 = sub_3C460(48); /*0x41d26c*/
    v7 = 43; /*0x41d271*/
    v8 = 47; /*0x41d27a*/
    strcpy((char *)v6, "The level has been removed from the server."); /*0x41d28a*/
    v4 = sub_3E4F0(v9, &v6); /*0x41d2d4*/
    v5 = FLAlertLayer_create_0( /*0x41d31f*/
           0,
           (unsigned int)"Level Deleted",
           v4,
           (unsigned int)"OK",
           0,
           1133903872,
           0,
           0,
           1065353216);
    sub_3C310(&v6); /*0x41d327*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x41d339*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 336LL))(*(_QWORD *)(a1 + 192), 0); /*0x41d347*/
  }
  return result; /*0x41d34d*/
}

// [22/38] Address: 0x41d360
// Method: LevelInfoLayer::levelDeleteFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelInfoLayer_levelDeleteFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rbx
  __int128 v6; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  _BYTE v9[40]; // [rsp+70h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 56); /*0x41d370*/
  if ( *(_DWORD *)(result + 328) - *(_DWORD *)(result + 332) == a2 ) /*0x41d385*/
  {
    v6 = 0; /*0x41d38e*/
    *(_QWORD *)&v6 = sub_3C460(48); /*0x41d3a9*/
    v7 = 44; /*0x41d3ae*/
    v8 = 47; /*0x41d3b7*/
    strcpy((char *)v6, "Level delete failed, please try again later."); /*0x41d3c7*/
    v4 = sub_3E4F0(v9, &v6); /*0x41d405*/
    v5 = FLAlertLayer_create_0(0, (unsigned int)"Error", v4, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x41d450*/
    sub_3C310(&v6); /*0x41d458*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x41d46a*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 336LL))(*(_QWORD *)(a1 + 192), 0); /*0x41d478*/
  }
  return result; /*0x41d47e*/
}

// [23/38] Address: 0x41d490
// Method: LevelInfoLayer::onEnterTransitionDidFinish
// Hidden C++ exception states: #wind=2
_DWORD *__fastcall LevelInfoLayer_onEnterTransitionDidFinish(__int64 a1)
{
  _DWORD *result; // rax
  int v3; // edx
  unsigned int v4; // edi
  __int64 v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h]
  void *v7; // [rsp+30h] [rbp+8h]

  cocos2d::CCLayer::onEnterTransitionDidFinish((cocos2d::CCLayer *)a1); /*0x41d49d*/
  *(_BYTE *)(a1 + 637) = 1; /*0x41d4a3*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x41d4b4*/
  {
    v6 = operator new(0x690u); /*0x41d4c0*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x41d4ce*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41d4df*/
  }
  result = (_DWORD *)sub_223430(); /*0x41d4e8*/
  if ( *(_QWORD *)(a1 + 504) ) /*0x41d4ed*/
  {
    result = (_DWORD *)sub_41B060(a1); /*0x41d4fe*/
    if ( !(_BYTE)result ) /*0x41d505*/
    {
      result = *(_DWORD **)(a1 + 504); /*0x41d507*/
      v3 = result[305]; /*0x41d50e*/
      if ( v3 != 1 && v3 != 2 ) /*0x41d51c*/
      {
        v4 = result[82] - result[83]; /*0x41d524*/
        v5 = *(_QWORD *)&qword_905FB0; /*0x41d52a*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x41d534*/
        {
          v7 = operator new(0x690u); /*0x41d540*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x41d54e*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41d55f*/
          v5 = *(_QWORD *)&qword_905FB0; /*0x41d562*/
        }
        return (_DWORD *)sub_2250E0(v5, v4, *(unsigned int *)(*(_QWORD *)(a1 + 504) + 860LL), 0); /*0x41d57c*/
      }
    }
  }
  return result; /*0x41d581*/
}

// [25/38] Address: 0x41e560
// Method: LevelInfoLayer::loadLevelStep
struct cocos2d::CCAction *__fastcall LevelInfoLayer_loadLevelStep(__int64 a1)
{
  cocos2d::CCArray *v2; // rax
  struct cocos2d::CCObject *v3; // rbx
  __int64 (__fastcall *v4)(); // rdx
  __int64 v5; // rbx
  struct cocos2d::CCFiniteTimeAction *v6; // rax
  struct cocos2d::CCAction *v7; // rax

  v2 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 704) + 480LL))(*(_QWORD *)(a1 + 704)); /*0x41e577*/
  v3 = cocos2d::CCArray::objectAtIndex(v2, 0); /*0x41e58b*/
  sub_5070B0(v3); /*0x41e58e*/
  cocos2d::CCProgressTimer::setPercentage(*(cocos2d::CCProgressTimer **)(a1 + 720), *((float *)v3 + 3273) * 100.0); /*0x41e5aa*/
  if ( *((float *)v3 + 3273) >= 1.0 ) /*0x41e5bf*/
  {
    if ( *(_BYTE *)(a1 + 736) ) /*0x41e5ca*/
      sub_513750(v3, *(_QWORD *)(a1 + 504) + 1632LL); /*0x41e5e4*/
    v4 = LevelInfoLayer_playStep4; /*0x41e5e9*/
  }
  else
  {
    v4 = LevelInfoLayer_loadLevelStep; /*0x41e5c1*/
  }
  v5 = cocos2d::CCCallFunc::create(a1, v4); /*0x41e5fc*/
  v6 = cocos2d::CCDelayTime::create(0.0); /*0x41e5ff*/
  v7 = cocos2d::CCSequence::create(v6, v5, 0); /*0x41e60e*/
  return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v7); /*0x41e61a*/
}

// [26/38] Address: 0x41e630
// Method: LevelInfoLayer::playStep4
// Hidden C++ exception states: #wind=1
void __fastcall LevelInfoLayer_playStep4(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCScene *v3; // rbx
  __int64 v4; // rcx
  cocos2d::CCDirector *v5; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  dword_9037A0 = clock(); /*0x41e643*/
  v2 = qword_905FD0; /*0x41e649*/
  if ( !qword_905FD0 ) /*0x41e653*/
  {
    v6 = operator new(0x6E8u); /*0x41e65f*/
    qword_905FD0 = sub_2723A0(v6); /*0x41e66d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x41e67e*/
    v2 = qword_905FD0; /*0x41e680*/
  }
  *(_BYTE *)(v2 + 1160) = 0; /*0x41e687*/
  v3 = cocos2d::CCTransitionFade::create(0.5, *(struct cocos2d::CCScene **)(a1 + 704)); /*0x41e6a3*/
  v5 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v4); /*0x41e6a6*/
  cocos2d::CCDirector::replaceScene(v5, v3); /*0x41e6b2*/
  cocos2d::CCObject::release(*(cocos2d::CCObject **)(a1 + 704)); /*0x41e6bf*/
  *(_QWORD *)(a1 + 704) = 0; /*0x41e6c5*/
}

// [27/38] Address: 0x41e8e0
// Method: LevelInfoLayer::numberInputClosed
// Hidden C++ exception states: #wind=2
double __fastcall LevelInfoLayer_numberInputClosed(__int64 a1, __int64 a2)
{
  const char *v3; // rcx
  int v4; // ebx
  const char *v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  __int64 v9; // rbx
  __int128 v11; // [rsp+58h] [rbp-80h] BYREF
  __int64 v12; // [rsp+68h] [rbp-70h]
  __int64 v13; // [rsp+70h] [rbp-68h]
  _BYTE v14[32]; // [rsp+80h] [rbp-58h] BYREF
  char *String[3]; // [rsp+A0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+B8h] [rbp-20h]

  sub_3E4F0(String, a2 + 728); /*0x41e918*/
  v3 = (const char *)String; /*0x41e91e*/
  if ( v16 > 0xF ) /*0x41e92f*/
    v3 = String[0]; /*0x41e92f*/
  v4 = atoi(v3) + 1000000; /*0x41e93e*/
  v5 = (const char *)String; /*0x41e944*/
  if ( v16 > 0xF ) /*0x41e955*/
    v5 = String[0]; /*0x41e955*/
  v6 = atoi(v5) + 10000; /*0x41e964*/
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 1052LL) - *(_DWORD *)(*(_QWORD *)(a1 + 48) + 1056LL); /*0x41e973*/
  if ( v4 == v7 || v6 == v7 ) /*0x41e983*/
  {
    sub_41EAB0(a1 - 456, 0); /*0x41ea73*/
  }
  else
  {
    v11 = 0; /*0x41e98c*/
    *(_QWORD *)&v11 = sub_3C460(32); /*0x41e9a5*/
    v12 = 19; /*0x41e9aa*/
    v13 = 31; /*0x41e9b3*/
    strcpy((char *)v11, "Incorrect password!"); /*0x41e9c3*/
    v8 = sub_3E4F0(v14, &v11); /*0x41e9f6*/
    v9 = FLAlertLayer_create_0(0, (unsigned int)"Error", v8, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x41ea42*/
    sub_3C310(&v11); /*0x41ea4a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL))(v9); /*0x41ea5c*/
    ++*(_DWORD *)(*(_QWORD *)(a1 + 48) + 1076LL); /*0x41ea62*/
  }
  return sub_3C310(String); /*0x41ea86*/
}

// [28/38] Address: 0x41f1e0
// Method: LevelInfoLayer::adminActionConfirmed
__int64 __fastcall LevelInfoLayer_adminActionConfirmed(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 == 5 ) /*0x41f1e3*/
    return sub_41F120(a1 - 480, a4); /*0x41f1ef*/
  return result; /*0x41f1f4*/
}

// [29/38] Address: 0x41f240
// Method: LevelInfoLayer::onRate
// Hidden C++ exception states: #wind=4
void __fastcall LevelInfoLayer_onRate(__int64 a1)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(cocos2d::CCObject *); // rdx
  cocos2d::CCObject *v6; // rcx
  unsigned int v7; // ebx
  cocos2d::CCObject *v8; // rdi
  __int128 v9; // [rsp+50h] [rbp-58h] BYREF
  __int64 v10; // [rsp+60h] [rbp-48h]
  __int64 v11; // [rsp+68h] [rbp-40h]
  _BYTE v12[56]; // [rsp+70h] [rbp-38h] BYREF
  void *v13; // [rsp+B8h] [rbp+10h]

  if ( !*(_BYTE *)(a1 + 488) ) /*0x41f257*/
  {
    v2 = qword_905FD0; /*0x41f264*/
    if ( !qword_905FD0 ) /*0x41f26e*/
    {
      v13 = operator new(0x6E8u); /*0x41f27a*/
      qword_905FD0 = sub_2723A0(v13); /*0x41f28b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x41f29c*/
      v2 = qword_905FD0; /*0x41f29e*/
    }
    if ( *(_BYTE *)(v2 + 964) ) /*0x41f2a5*/
    {
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 504) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 504) + 332LL); /*0x41f412*/
      v8 = (cocos2d::CCObject *)operator new(0x2B8u); /*0x41f422*/
      FLAlertLayer_FLAlertLayer(v8); /*0x41f430*/
      *(_QWORD *)v8 = &RateLevelLayer::`vftable'; /*0x41f43c*/
      *((_QWORD *)v8 + 40) = &RateLevelLayer::`vftable'; /*0x41f446*/
      *((_QWORD *)v8 + 41) = &RateLevelLayer::`vftable'; /*0x41f454*/
      *((_QWORD *)v8 + 42) = &RateLevelLayer::`vftable'; /*0x41f462*/
      *((_QWORD *)v8 + 43) = &RateLevelLayer::`vftable'; /*0x41f470*/
      *((_QWORD *)v8 + 44) = &RateLevelLayer::`vftable'; /*0x41f47e*/
      *((_QWORD *)v8 + 51) = &RateLevelLayer::`vftable'; /*0x41f48c*/
      *((_QWORD *)v8 + 54) = &RateLevelLayer::`vftable'; /*0x41f49a*/
      *((_QWORD *)v8 + 68) = &RateLevelLayer::`vftable'; /*0x41f4a8*/
      *((_QWORD *)v8 + 83) = 0; /*0x41f4b1*/
      *((_QWORD *)v8 + 84) = 0; /*0x41f4b8*/
      *((_QWORD *)v8 + 85) = 0; /*0x41f4bf*/
      *((_QWORD *)v8 + 86) = 0; /*0x41f4c6*/
      if ( (unsigned __int8)RateLevelLayer_init(v8, v7) ) /*0x41f4d2*/
      {
        cocos2d::CCObject::autorelease(v8); /*0x41f4de*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1); /*0x41f4ee*/
        v8 = 0; /*0x41f4f1*/
      }
      *((_QWORD *)v8 + 86) = a1 + 424; /*0x41f4fb*/
      v5 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v8 + 1064LL); /*0x41f505*/
      v6 = v8; /*0x41f513*/
      if ( (char *)v5 == (char *)FLAlertLayer_show ) /*0x41f519*/
      {
        FLAlertLayer_show(v8); /*0x41f51f*/
        return; /*0x41f51f*/
      }
    }
    else
    {
      *(_BYTE *)(v2 + 964) = 1; /*0x41f2b2*/
      v9 = 0; /*0x41f2bc*/
      *(_QWORD *)&v9 = sub_3C460(144); /*0x41f2d7*/
      v10 = 136; /*0x41f2dc*/
      v11 = 143; /*0x41f2e5*/
      strcpy( /*0x41f2f5*/
        (char *)v9,
        "Please <cg>rate</c> the <cl>difficulty</c> as fairly as possible. \n"
        "<cy>(Demon and Auto levels are manually verified before accepted)</c>");
      v3 = sub_3E4F0(v12, &v9); /*0x41f373*/
      v4 = FLAlertLayer_create_0( /*0x41f3c4*/
             (int)a1 + 440,
             (unsigned int)"Rate Difficulty",
             v3,
             (unsigned int)"OK",
             0,
             1133903872,
             0,
             0,
             1065353216);
      sub_3C310(&v9); /*0x41f3cc*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 64LL))(v4, 7); /*0x41f3e0*/
      v5 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v4 + 1064LL); /*0x41f3e6*/
      v6 = (cocos2d::CCObject *)v4; /*0x41f3ed*/
    }
    v5(v6); /*0x41f3f0*/
  }
}

// [30/38] Address: 0x41fcd0
// Method: LevelInfoLayer::rateLevelClosed
__int64 __fastcall LevelInfoLayer_rateLevelClosed(__int64 a1)
{
  return sub_41FFD0(a1 - 424);
}

// [31/38] Address: 0x41ff60
// Method: LevelInfoLayer::likedItem
__int64 __fastcall LevelInfoLayer_likedItem(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v7; // rax

  result = *(_QWORD *)(a1 + 72); /*0x41ff6a*/
  v5 = a1 - 432; /*0x41ff6e*/
  if ( a3 == *(_DWORD *)(result + 328) - *(_DWORD *)(result + 332) ) /*0x41ff88*/
  {
    sub_41FFD0(a1 - 432); /*0x41ff8d*/
    v7 = *(_QWORD *)(v5 + 504); /*0x41ff92*/
    if ( a4 ) /*0x41ff9f*/
    {
      ++*(_DWORD *)(v7 + 964); /*0x41ffa1*/
      return sub_420820(v5); /*0x41ffb1*/
    }
    else
    {
      ++*(_DWORD *)(v7 + 968); /*0x41ffb6*/
      return sub_420820(v5); /*0x41ffbc*/
    }
  }
  return result; /*0x41ffa7*/
}

// [32/38] Address: 0x4202a0
// Method: LevelInfoLayer::onUpdate
// Hidden C++ exception states: #wind=3
double __fastcall LevelInfoLayer_onUpdate(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  double result; // xmm0_8
  void *v10; // [rsp+30h] [rbp+8h]
  void *v11; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 488) ) /*0x4202b2*/
  {
    if ( (unsigned __int8)sub_41B060(a1) ) /*0x4202bf*/
    {
      LevelInfoLayer_downloadLevel(a1); /*0x4202da*/
    }
    else
    {
      v2 = *(_DWORD *)(*(_QWORD *)(a1 + 504) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 504) + 332LL); /*0x4202ec*/
      v3 = *(_QWORD *)&qword_905FB0; /*0x4202f2*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x4202fc*/
      {
        v10 = operator new(0x690u); /*0x420308*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x420316*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x420327*/
        v3 = *(_QWORD *)&qword_905FB0; /*0x42032a*/
      }
      v4 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v2); /*0x42033a*/
      CString = cocos2d::CCString::getCString(v4); /*0x420343*/
      if ( (unsigned __int8)sub_21EC00(v3, CString) ) /*0x420357*/
      {
        LevelInfoLayer_showUpdateAlert(v6, 1); /*0x420374*/
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 496) + 336LL))(*(_QWORD *)(a1 + 496), 0); /*0x420385*/
        LOBYTE(v7) = 1; /*0x420395*/
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 640) + 336LL))(*(_QWORD *)(a1 + 640), v7); /*0x420397*/
        v8 = *(_QWORD *)&qword_905FB0; /*0x4203a4*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x4203ae*/
        {
          v11 = operator new(0x690u); /*0x4203ba*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0x4203c8*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4203d9*/
          v8 = *(_QWORD *)&qword_905FB0; /*0x4203db*/
        }
        *(_QWORD *)(v8 + 1416) = a1 + 416; /*0x4203e2*/
        return GameLevelManager_updateLevel(v8, *(_QWORD *)(a1 + 504)); /*0x4203f0*/
      }
    }
  }
  return result; /*0x4202cb*/
}

// [33/38] Address: 0x420410
// Method: LevelInfoLayer::onLevelOptions
void __fastcall LevelInfoLayer_onLevelOptions(__int64 a1)
{
  char v1; // al
  __int64 v3; // rdx
  bool v4; // bl
  __int64 v5; // rax
  _BYTE v6[16]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]

  v1 = 0; /*0x420429*/
  v4 = 1; /*0x42046c*/
  if ( !*(_BYTE *)(a1 + 488) ) /*0x420432*/
  {
    v3 = *(_QWORD *)(a1 + 504); /*0x42043a*/
    if ( *(_DWORD *)(v3 + 1220) != 4 ) /*0x420448*/
    {
      sub_3E4F0(v6, v3 + 408); /*0x420456*/
      v1 = 3; /*0x420461*/
      if ( v7 ) /*0x420466*/
        v4 = 0; /*0x420438*/
    }
  }
  if ( (v1 & 1) != 0 ) /*0x420470*/
    sub_3C310(v6); /*0x420477*/
  if ( !v4 ) /*0x42047e*/
  {
    v5 = sub_3A67F0(*(_QWORD *)(a1 + 504)); /*0x420487*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x420499*/
  }
}

// [34/38] Address: 0x4204c0
// Method: LevelInfoLayer::onViewProfile
// Hidden C++ exception states: #wind=1
void __fastcall LevelInfoLayer_onViewProfile(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 488) /*0x4204eb*/
    && *(_DWORD *)(*(_QWORD *)(a1 + 504) + 660LL) - *(_DWORD *)(*(_QWORD *)(a1 + 504) + 664LL) > 0 )
  {
    v4 = qword_905FD0; /*0x4204ed*/
    if ( !qword_905FD0 ) /*0x4204f7*/
    {
      v6 = operator new(0x6E8u); /*0x420503*/
      qword_905FD0 = sub_2723A0(v6); /*0x420511*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x420522*/
      v4 = qword_905FD0; /*0x420524*/
    }
    LOBYTE(a3) = 1; /*0x42052b*/
    sub_27ACB0(v4, "0047", a3); /*0x420535*/
    v5 = ProfilePage_create( /*0x42054f*/
           (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 504) + 660LL) - *(_DWORD *)(*(_QWORD *)(a1 + 504) + 664LL)),
           0);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x420566*/
  }
}

// [35/38] Address: 0x421e60
// Method: LevelInfoLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=7
void __fastcall LevelInfoLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  _DWORD *NewLevel; // rsi
  int v10; // ebx
  _DWORD *v11; // r8
  int v12; // edx
  int v13; // r9d
  int v14; // ecx
  int v15; // edx
  float v16; // xmm0_4
  struct cocos2d::CCScene *v17; // rax
  struct cocos2d::CCScene *v18; // rbx
  __int64 v19; // rcx
  cocos2d::CCDirector *v20; // rax
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 i; // rdx
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 j; // rdx
  int v32; // ecx
  void *v33; // [rsp+30h] [rbp-58h]
  void *v34; // [rsp+30h] [rbp-58h]
  void *v35; // [rsp+30h] [rbp-58h]
  void *v36; // [rsp+30h] [rbp-58h]
  void *v37; // [rsp+30h] [rbp-58h]
  void *v38[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v39; // [rsp+60h] [rbp-28h]
  unsigned __int64 v40; // [rsp+68h] [rbp-20h]

  switch ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) ) /*0x421eb0*/
  {
    case 4u: /*0x421eb0*/
      if ( a3 ) /*0x421eb4*/
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 1040LL))(*(_QWORD *)(a1 + 56), 0); /*0x421ec3*/
        v5 = *(_QWORD *)&qword_905FB0; /*0x421ec9*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x421ed3*/
        {
          v33 = operator new(0x690u); /*0x421edf*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v33); /*0x421eed*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x421efe*/
          v5 = *(_QWORD *)&qword_905FB0; /*0x421f00*/
        }
        sub_219730(v5, *(_QWORD *)(a1 + 64)); /*0x421f0b*/
        LevelInfoLayer_onBack(a1 - 440, 0); /*0x421f19*/
        *(_BYTE *)(a1 + 48) = 1; /*0x421f1e*/
      }
      break; /*0x421f22*/
    case 5u: /*0x421eb0*/
      if ( a3 ) /*0x421f29*/
      {
        *(_OWORD *)v38 = 0; /*0x421f32*/
        v39 = 0; /*0x421f39*/
        v40 = 15; /*0x421f3e*/
        LOBYTE(v38[0]) = 0; /*0x421f47*/
        sub_41F120(a1 - 440, v38); /*0x421f67*/
        if ( v40 > 0xF ) /*0x421fc9*/
        {
          v6 = v38[0]; /*0x421fd2*/
          if ( v40 + 1 >= 0x1000 ) /*0x421fe1*/
          {
            v6 = (void *)*((_QWORD *)v38[0] - 1); /*0x421fe7*/
            if ( (unsigned __int64)((char *)v38[0] - (char *)v6 - 8) > 0x1F ) /*0x421ff6*/
              invoke_watson(0, 0, 0, 0, 0); /*0x422007*/
          }
          j_j_free(v6); /*0x42200e*/
        }
      }
      break; /*0x422013*/
    case 6u: /*0x421eb0*/
      if ( a3 ) /*0x42201a*/
      {
        v7 = a1 - 440; /*0x422020*/
        if ( !(unsigned __int8)sub_41B060(v7) && !*(_BYTE *)(v7 + 488) ) /*0x422037*/
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 992LL))(v7, 0); /*0x42204b*/
          *(_BYTE *)(v7 + 488) = 1; /*0x422051*/
          v8 = qword_905FD0; /*0x422058*/
          if ( !qword_905FD0 ) /*0x422062*/
          {
            v34 = operator new(0x6E8u); /*0x42206e*/
            qword_905FD0 = sub_2723A0(v34); /*0x42207c*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x42208d*/
            v8 = qword_905FD0; /*0x42208f*/
          }
          *(_DWORD *)(v8 + 740) = 2; /*0x422096*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0x4220a8*/
          {
            v35 = operator new(0x690u); /*0x4220b4*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v35); /*0x4220c2*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4220d3*/
          }
          NewLevel = (_DWORD *)GameLevelManager_createNewLevel(); /*0x4220da*/
          sub_2639E0(NewLevel, *(_QWORD *)(v7 + 504)); /*0x4220e7*/
          v10 = 0; /*0x4220ec*/
          v11 = *(_DWORD **)(v7 + 504); /*0x4220ee*/
          v12 = v11[265]; /*0x4220f5*/
          v13 = v11[266]; /*0x4220fc*/
          if ( v12 == v13 ) /*0x422106*/
          {
            v14 = v11[82]; /*0x42210f*/
            v15 = v11[83]; /*0x422116*/
            if ( v14 != v15 ) /*0x42211f*/
              v10 = v14 - v15; /*0x422123*/
          }
          else
          {
            v10 = v12 - v13; /*0x42210b*/
          }
          NewLevel[267] = v10; /*0x422125*/
          v16 = (float)((float)rand() / 32767.0) * 1000.0; /*0x422140*/
          NewLevel[266] = (int)v16; /*0x42214c*/
          NewLevel[265] = v10 + (int)v16; /*0x422154*/
          v17 = (struct cocos2d::CCScene *)EditLevelLayer_scene(NewLevel); /*0x42215d*/
          v18 = cocos2d::CCTransitionFade::create(0.5, v17); /*0x422173*/
          v20 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v19); /*0x422176*/
          cocos2d::CCDirector::replaceScene(v20, v18); /*0x422182*/
        }
      }
      break; /*0x422188*/
    case 7u: /*0x421eb0*/
      LevelInfoLayer_onRate(a1 - 440); /*0x422194*/
      break; /*0x422199*/
    case 8u: /*0x421eb0*/
      sub_41F530(a1 - 440, 0); /*0x4221a7*/
      break; /*0x4221ac*/
    case 9u: /*0x421eb0*/
      if ( a3 ) /*0x422306*/
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 64) + 1120LL) = 1; /*0x42230c*/
        goto LABEL_57; /*0x422313*/
      }
      break; /*0x422313*/
    case 0xAu: /*0x421eb0*/
      if ( a3 ) /*0x422317*/
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 64) + 1296LL) = 1; /*0x42231d*/
        goto LABEL_57; /*0x422324*/
      }
      break; /*0x422324*/
    case 0xBu: /*0x421eb0*/
      if ( a3 && *(_QWORD *)(a1 + 64) ) /*0x4221b9*/
      {
        v21 = *(_QWORD *)&qword_905FB0; /*0x4221c4*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x4221ce*/
        {
          v36 = operator new(0x690u); /*0x4221da*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v36); /*0x4221e8*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4221f9*/
          v21 = *(_QWORD *)&qword_905FB0; /*0x4221fb*/
        }
        v22 = 0; /*0x422202*/
        v23 = *(_QWORD *)(v21 + 856); /*0x422204*/
        if ( v23 ) /*0x42220e*/
        {
          v24 = *(_QWORD *)(v23 + 56); /*0x422210*/
          if ( v24 ) /*0x422217*/
          {
            for ( i = *(_QWORD *)(v24 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x422219*/
            {
              v26 = *(_DWORD *)(*(_QWORD *)(v24 + 264) + 704LL); /*0x422227*/
              if ( v26 <= v22 ) /*0x42222f*/
                v26 = v22; /*0x42222f*/
              v24 = i; /*0x422232*/
              v22 = v26; /*0x422235*/
              if ( !i ) /*0x42223a*/
                break; /*0x42223a*/
            }
          }
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 704LL) = v22 + 1; /*0x42224c*/
      }
      break; /*0x422252*/
    case 0xCu: /*0x421eb0*/
      if ( a3 && *(_QWORD *)(a1 + 64) ) /*0x42225f*/
      {
        v27 = *(_QWORD *)&qword_905FB0; /*0x42226a*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x422274*/
        {
          v37 = operator new(0x690u); /*0x422280*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v37); /*0x42228e*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42229f*/
          v27 = *(_QWORD *)&qword_905FB0; /*0x4222a1*/
        }
        v28 = 0; /*0x4222a8*/
        v29 = *(_QWORD *)(v27 + 856); /*0x4222aa*/
        if ( v29 ) /*0x4222b4*/
        {
          v30 = *(_QWORD *)(v29 + 56); /*0x4222b6*/
          if ( v30 ) /*0x4222bd*/
          {
            for ( j = *(_QWORD *)(v30 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x4222bf*/
            {
              v32 = *(_DWORD *)(*(_QWORD *)(v30 + 264) + 704LL); /*0x4222d7*/
              if ( v32 >= v28 ) /*0x4222df*/
                v32 = v28; /*0x4222df*/
              v30 = j; /*0x4222e2*/
              v28 = v32; /*0x4222e5*/
              if ( !j ) /*0x4222ea*/
                break; /*0x4222ea*/
            }
          }
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 704LL) = v28 - 1; /*0x4222fc*/
      }
      break; /*0x422302*/
    case 0xEu: /*0x421eb0*/
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + 1296LL) = 1; /*0x42232a*/
      if ( a3 ) /*0x422333*/
        *(_BYTE *)(a1 + 296) = 1; /*0x422335*/
      else
        sub_260AB0(*(_QWORD *)(a1 + 64)); /*0x422342*/
LABEL_57:
      LevelInfoLayer_onPlay(a1 - 440, 0); /*0x422347*/
      break; /*0x422350*/
    default:
      return;
  }
}

// [36/38] Address: 0x4223b0
// Method: LevelInfoLayer::onBack
// Hidden C++ exception states: #wind=2
void __fastcall LevelInfoLayer_onBack(__int64 a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCScene *v3; // rax
  struct cocos2d::CCScene *v4; // rbx
  __int64 v5; // rcx
  cocos2d::CCDirector *v6; // rax
  void *v7; // [rsp+30h] [rbp+8h]
  void *v8; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 488) ) /*0x4223b9*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x4223cb*/
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 504) + 721LL) ) /*0x4223d8*/
    {
      v2 = qword_905FD0; /*0x4223e1*/
      if ( !qword_905FD0 ) /*0x4223eb*/
      {
        v7 = operator new(0x6E8u); /*0x4223f7*/
        qword_905FD0 = sub_2723A0(v7); /*0x422405*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x422416*/
        v2 = qword_905FD0; /*0x422418*/
      }
      v3 = (struct cocos2d::CCScene *)sub_2F7210(*(unsigned int *)(v2 + 1116)); /*0x422425*/
      v4 = cocos2d::CCTransitionFade::create(0.5, v3); /*0x42243b*/
      v6 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v5); /*0x42243e*/
      cocos2d::CCDirector::replaceScene(v6, v4); /*0x42244f*/
    }
    else
    {
      if ( !qword_905FD0 ) /*0x42245e*/
      {
        v8 = operator new(0x6E8u); /*0x42246a*/
        qword_905FD0 = sub_2723A0(v8); /*0x422478*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x422489*/
      }
      GameManager_safePopScene(); /*0x422490*/
    }
  }
}

// [37/38] Address: 0x4224a0
// Method: LevelInfoLayer::keyBackClicked
void __fastcall LevelInfoLayer_keyBackClicked(__int64 a1)
{
  LevelInfoLayer_onBack(a1 - 336); /*0x4224a9*/
}

// [38/38] Address: 0x4224b0
// Method: LevelInfoLayer::keyDown
void __fastcall LevelInfoLayer_keyDown(__int64 a1, int a2)
{
  __int64 v2; // rbx

  v2 = a1 - 344; /*0x4224bd*/
  if ( !*(_BYTE *)(a1 + 144) ) /*0x4224b6*/
  {
    if ( a2 == 32 || a2 == 1009 ) /*0x4224d1*/
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 344LL))(*(_QWORD *)(a1 + 152)) ) /*0x4224e9*/
        LevelInfoLayer_onPlay(v2, 0); /*0x4224fd*/
    }
    else
    {
      cocos2d::CCLayer::keyDown(); /*0x4224d8*/
    }
  }
}

// Address: 0x418120
// Method: LevelInfoLayer::init
// Hidden C++ exception states: #wind=28
bool __fastcall LevelInfoLayer_init(__int64 a1, _DWORD *a2, char a3)
{
  int v6; // r12d
  bool result; // al
  __int64 v8; // rcx
  cocos2d::CCObject *v9; // rax
  int v10; // edi
  __int64 v11; // rax
  cocos2d::CCLayerColor *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rsi
  int v28; // r13d
  char v29; // si
  struct cocos2d::CCSprite *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  struct cocos2d::CCSprite *v35; // rdi
  bool v36; // bl
  const char *v37; // rsi
  struct cocos2d::CCSprite *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  cocos2d::CC... [54764 chars total]

// Address: 0x41d590
// Method: LevelInfoLayer::onPlay
// Hidden C++ exception states: #wind=13
void __fastcall LevelInfoLayer_onPlay(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  cocos2d::CCObject *v6; // rbx
  __int64 v7; // rdx
  int *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  cocos2d::CCObject *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // ebx
  char *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  cocos2d::CCObject *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rbx
  struct cocos2d::CCFiniteTimeAction *v30; // rax
  struct cocos2d::CCAction *v31; // rax
  __int64 v32; // rcx
  struct cocos2d::CCSprite *v33; // rdi
  __int64 v34; // rbx
  float v35; // xmm6_4
  float *v36; // rax
  __int64 v37; // rax
  struct cocos2d::CCSprite *v38; // rdi
  __int64 v39; // rbx
  float v40; // xmm6_4
  float *v41; // rax
  __int64 v42; // rax
  struct cocos2d::CCSprite *v43; // rdi
  __int64 v44; // rbx
  float v45; // xmm6_4
  float *v46; // rax
  __int64 v47; // rax
  struct cocos2d::CCSprite *v48; // rbx
  struct cocos2d::CCProgressTimer *v49; // rax
  __int64 v50; // rdi
  float v51; // xmm6_4
  float *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  _WORD v55[2]; // [rsp+50h] [rbp-59h] BYREF
  __int16 v56; // [rsp+54h] [rbp-55h] BYREF
  char v57; // [rsp+56h] [rbp-53h]
  __int16 v58; // [rsp+58h] [rbp-51h] BYREF
  char v59; // [rsp+5Ah] [rbp-4Fh]
  __int128 *v60; // [rsp+60h] [rbp-49h] BYREF
  __int16 v61; // [rsp+68h] [rbp-41h] BYREF
  char v62; // [rsp+6Ah] [rbp-3Fh]
  __int128 *v63; // [rsp+70h] [rbp-39h]
  __int128 v64; // [rsp+78h] [rbp-31h] BYREF
  __int64 v65; // [rsp+88h] [rbp-21h]
  __int64 v66; // [rsp+90h] [rbp-19h]
  _BYTE v67[32]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v68; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v69; // [rsp+C8h] [rbp+1Fh]
  __int64 v70; // [rsp+D0h] [rbp+27h]

  if ( *(_BYTE *)(a1 + 488) || !*(_BYTE *)(a1 + 637) )
    return;
  if ( (unsigned __int8)sub_41B060(a1) )
  {
    LevelInfoLayer_downloadLevel(a1);
    return;
  }
  v2 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v63 = (__int128 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v63);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v2 = qword_905FD0;
  }
  if ( !GameManager_getGameVariable(v2, "0083") )
  {
    v3 = *(_QWORD *)(a1 + 504);
    if ( *(_DWORD *)(v3 + 680) )
    {
      if ( !*(_BYTE *)(v3 + 1120) )
      {
        v4 = qword_906070;
        if ( !qword_906070 )
        {
          v63 = (__int128 *)operator new(0x3D0u);
          qword_906070 = sub_47C350(v63);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
          v4 = qword_906070;
        }
        if ( !(unsigned __int8)sub_4803B0(v4, *(unsigned int *)(*(_QWORD *)(a1 + 504) + 680LL)) )
        {
          v68 = 0;
          v69 = 0;
          v70 = 0;
          *(_QWORD *)&v68 = sub_3C460(160);
          v69 = 154;
          v70 = 159;
          strcpy(
            (char *)v68,
            "This level uses a <cl>custom song</c> that has not been <cg>downloaded</c> yet.\n"
            "Do you want to play without music?\n"
            "<cy>Download by using the bar below</c>");
          v63 = &v68;
          sub_3E4F0(&v64, &v68);
          v6 = FLAlertLayer_create_0(
                 (int)a1 + 440,
                 (int)"No Song",
                 v5,
                 (__int64)"Cancel",
                 (__int64)"Play",
                 1133903872,
                 0,
                 0,
                 1065353216);
          sub_3C310(&v68);
          v7 = 9;
LABEL_14:
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v6 + 64LL))(v6, v7);
          (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v6 + 1064LL))(v6);
          return;
        }
      }
    }
  }
  v8 = *(int **)(a1 + 504);
  if ( v8[259] > 0 && v8[260] == v8[261] )
  {
    v9 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v60 = (__int128 *)operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v60);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v9 = qword_905FD0;
    }
    if ( !GameManager_getGameVariable(v9, "0063") )
    {
      v11 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v60 = (__int128 *)operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v60);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v11 = qword_905FD0;
      }
      LOBYTE(v10) = 1;
      sub_27ACB0(v11, "0063", v10);
      v68 = 0;
      v69 = 0;
      v70 = 0;
      *(_QWORD *)&v68 = sub_3C460(144);
      v69 = 129;
      v70 = 143;
      strcpy(
        (char *)v68,
        "This level contains <cr>unverified</c> user coins (bronze).\n"
        "The coins will not count until they become <cg>verified</c> (silver).");
      v60 = &v68;
      sub_3E4F0(&v64, &v68);
      v13 = FLAlertLayer_create_0(
              (int)a1 + 440,
              (int)"Unverified Coins",
              v12,
              (__int64)"OK",
              0,
              1133903872,
              0,
              0,
              1065353216);
      sub_3C310(&v68);
      (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v13 + 1064LL))(v13);
      return;
    }
  }
  if ( *(_BYTE *)(a1 + 736) )
    goto LABEL_58;
  v14 = *(_QWORD *)(a1 + 504);
  if ( *(_QWORD *)(v14 + 1648) && (*(_DWORD *)(v14 + 1696) != *(_DWORD *)(v14 + 860) || *(_DWORD *)(v14 + 1700) != 3) )
    sub_260AB0(v14);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 504) + 1648LL) )
  {
    v68 = 0;
    v69 = 0;
    v70 = 0;
    *(_QWORD *)&v68 = sub_3C460(96);
    v69 = 91;
    v70 = 95;
    strcpy((char *)v68, "There is a <cg>saved</c> <cy>checkpoint</c> for this level.\nDo you want to <cl>load</c> it?");
    v60 = &v68;
    sub_3E4F0(&v64, &v68);
    v6 = FLAlertLayer_create_0(
           (int)a1 + 440,
           (int)"Load Save",
           v15,
           (__int64)"New Game",
           (__int64)"Load Save",
           1136525312,
           0,
           0,
           1065353216);
    sub_3C310(&v68);
    GameToolbox_addBackButton((__int64)v6);
    *((_BYTE *)v6 + 656) = 1;
    v7 = 14;
    goto LABEL_14;
  }
  v16 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v60 = (__int128 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v60);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v16 = qword_905FD0;
  }
  if ( GameManager_getGameVariable(v16, "0082")
    || (v17 = *(_QWORD *)(a1 + 504), v18 = *(_DWORD *)(v17 + 692) - *(_DWORD *)(v17 + 696), v18 <= 40000)
    || *(_BYTE *)(v17 + 1296) )
  {
LABEL_58:
    if ( *(_BYTE *)(a1 + 488) )
      return;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0);
    *(_BYTE *)(a1 + 488) = 1;
    v23 = qword_905F60;
    if ( !qword_905F60 )
    {
      v60 = (__int128 *)operator new(0x8A8u);
      qword_905F60 = sub_5AE20(v60);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
      v23 = qword_905F60;
    }
    v24 = *(_QWORD *)(v23 + 552);
    if ( v24 )
      FMOD::ChannelControl::stop(v24);
    sub_3DB60(v23 + 1096);
    sub_3DB60(v23 + 1160);
    sub_3DB60(v23 + 1224);
    v60 = &v64;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    *(_QWORD *)&v64 = sub_3C460(32);
    v65 = 16;
    v66 = 31;
    strcpy((char *)v64, "playSound_01.ogg");
    v27 = qword_905F60;
    if ( !qword_905F60 )
    {
      v63 = (__int128 *)operator new(0x8A8u);
      qword_905F60 = sub_5AE20(v63);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
      v27 = qword_905F60;
    }
    FMODAudioEngine_playEffect_0(v27, (__int64)&v64, v25, v26, 1050253722);
    v28 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v60 = (__int128 *)operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v60);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v28 = qword_905FD0;
    }
    *(_BYTE *)(v28 + 1160) = 1;
    v29 = cocos2d::CCCallFunc::create(a1, sub_41E3B0);
    v30 = cocos2d::CCDelayTime::create(0.0);
    v31 = cocos2d::CCSequence::create(v30, v29, 0);
    cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v31);
    v56 = 11776;
    v57 = 115;
    v58 = 22272;
    v59 = -38;
    v55[0] = -156;
    v61 = -156;
    v62 = 0;
    v32 = *(_QWORD *)(a1 + 504);
    if ( *(_DWORD *)(v32 + 992) - *(_DWORD *)(v32 + 996) <= 100000 )
    {
      if ( !*(_BYTE *)(v32 + 721) )
      {
LABEL_55:
        v33 = cocos2d::CCSprite::createWithSpriteFrameName("d_circle_01_001.png");
        (**((void (__fastcall ***)(__int64, __int16 *))v33 + 40))((__int64)v33 + 320, &v56);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v33 + 160LL))(v33);
        v34 = *(_QWORD *)v33;
        v35 = *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712)) + 4)
            * 0.5;
        v36 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, *v36 * 0.5, v35);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v34 + 184))(v33, v37);
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 712) + 456LL))(
          *(_QWORD *)(a1 + 712),
          v33,
          4294967291LL);
        v38 = cocos2d::CCSprite::createWithSpriteFrameName("d_circle_01_001.png");
        (**((void (__fastcall ***)(__int64, __int16 *))v38 + 40))((__int64)v38 + 320, &v56);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 160LL))(v38);
        v39 = *(_QWORD *)v38;
        v40 = *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712)) + 4)
            * 0.5;
        v41 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, *v41 * 0.5, v40);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v39 + 184))(v38, v42);
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 712) + 456LL))(
          *(_QWORD *)(a1 + 712),
          v38,
          4294967294LL);
        v43 = cocos2d::CCSprite::createWithSpriteFrameName("d_circle_01_001.png");
        (**((void (__fastcall ***)(__int64, __int16 *))v43 + 40))((__int64)v43 + 320, &v58);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v43 + 160LL))(v43);
        v44 = *(_QWORD *)v43;
        v45 = *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712)) + 4)
            * 0.5;
        v46 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, *v46 * 0.5, v45);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v44 + 184))(v43, v47);
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 712) + 456LL))(
          *(_QWORD *)(a1 + 712),
          v43,
          4294967292LL);
        memset(v55, 125, 3);
        (**(void (__fastcall ***)(__int64, _WORD *))(*(_QWORD *)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712) + 320LL, v55);
        v48 = cocos2d::CCSprite::createWithSpriteFrameName("d_circle_01_001.png");
        (**((void (__fastcall ***)(__int64, __int16 *))v48 + 40))((__int64)v48 + 320, &v61);
        v49 = cocos2d::CCProgressTimer::create(v48);
        *(_QWORD *)(a1 + 720) = v49;
        v50 = *(_QWORD *)v49;
        v51 = *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712)) + 4)
            * 0.5;
        v52 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 712) + 320LL))(*(_QWORD *)(a1 + 712));
        v53 = *(_QWORD *)(a1 + 720);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, *v52 * 0.5, v51);
        (*(void (__fastcall **)(__int64, __int64))(v50 + 184))(v53, v54);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 720) + 160LL))(*(_QWORD *)(a1 + 720));
        cocos2d::CCProgressTimer::setPercentage(*(cocos2d::CCProgressTimer **)(a1 + 720), 0.0);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 712) + 456LL))(
          *(_QWORD *)(a1 + 712),
          *(_QWORD *)(a1 + 720),
          4294967293LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 496) + 920LL))(*(_QWORD *)(a1 + 496), 0);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 728) + 344LL) + 920LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 728) + 344LL),
          0);
        return;
      }
      v56 = 5911;
      v55[0] = 11051;
      v58 = 11051;
    }
    else
    {
      v56 = 5911;
      v58 = 11051;
      v55[0] = 13055;
      v61 = 13055;
      v62 = 0;
    }
    v59 = 43;
    v57 = 23;
    goto LABEL_55;
  }
  v68 = 0;
  v69 = 0;
  v19 = (char *)sub_3C460(160);
  *(_QWORD *)&v68 = v19;
  v70 = 159;
  if ( v18 <= 80000 )
  {
    v69 = 147;
    strcpy(
      v19,
      "This level has a <co>high object</c> count and can be <cr>unstable</c> on some devices. This may affect <cg>perfor"
      "mance</c>, <cl>load time</c> etc.");
  }
  else
  {
    v69 = 152;
    strcpy(
      v19,
      "This level has a <cr>VERY HIGH object</c> count and can be <cr>unstable</c> on some devices. This may affect <cg>p"
      "erformance</c>, <cl>load time</c> etc.");
  }
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v20 = -1;
  do
    ++v20;
  while ( v19[v20] );
  sub_3C230(&v64);
  v60 = &v64;
  sub_3E4F0(v67, &v64);
  v22 = FLAlertLayer_create_0(
          (int)a1 + 440,
          (int)"High Objects",
          v21,
          (__int64)"Cancel",
          (__int64)"Play",
          1136525312,
          0,
          0,
          1065353216);
  sub_3C310(&v64);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v22 + 64LL))(v22, 10);
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v22 + 1064LL))(v22);
  sub_3C310(&v68);
}

// Address: 0x41be90
// Method: LevelInfoLayer::setupLevelInfo
// Hidden C++ exception states: #wind=3
__int64 __fastcall LevelInfoLayer_setupLevelInfo(struct cocos2d::CCObject **a1)
{
  unsigned int v2; // r14d
  cocos2d::CCObject *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  struct cocos2d::CCObject *v6; // r12
  struct cocos2d::CCObject *v7; // r13
  struct cocos2d::CCLabelBMFont *v8; // rax
  __int64 v9; // rdi
  struct cocos2d::CCObject *v10; // rbx
  __int64 v11; // rax
  struct cocos2d::CCLabelBMFont *v12; // rax
  __int64 v13; // rdi
  struct cocos2d::CCObject *v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCLabelBMFont *v16; // rax
  __int64 v17; // rdi
  struct cocos2d::CCObject *v18; // rbx
  __int64 v19; // rax
  struct cocos2d::CCLabelBMFont *v20; // rax
  __int64 v21; // rdi
  struct cocos2d::CCObject *v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCLabelBMFont *v24; // rax
  __int64 v25; // rdi
  struct cocos2d::CCObject *v26; // rbx
  __int64 v27; // rax
  struct cocos2d::CCObject *v28; // rax
  int v29; // r15d
  float v30; // xmm8_4
  float v31; // xmm9_4
  float v32; // xmm6_4
  int v33; // eax
  float v34; // xmm11_4
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  struct cocos2d::CCObject *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdi
  struct cocos2d::CCObject *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdi
  struct cocos2d::CCObject *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  struct cocos2d::CCObject *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  int v59; // ecx
  int v60; // r12d
  struct cocos2d::CCObject *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdi
  struct cocos2d::CCObject *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rdi
  struct cocos2d::CCObject *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  struct cocos2d::CCObject *v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  cocos2d::CCSprite *v77; // rax
  const char *v78; // rcx
  struct cocos2d::CCSprite *v79; // rax
  __int64 v80; // rax
  struct cocos2d::CCLabelBMFont *v81; // rax
  __int64 v82; // rdi
  struct cocos2d::CCObject *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rax
  struct cocos2d::CCSprite *v88; // r15
  int v89; // ebx
  __int64 v90; // rcx
  int v91; // r12d
  int v92; // r13d
  cocos2d::CCString *v93; // rax
  const char *CString; // rax
  __int64 v95; // r8
  const char *v96; // rcx
  struct cocos2d::CCLabelBMFont *v97; // rdi
  __int64 v98; // rbx
  __int64 v99; // rax
  float v100; // xmm6_4
  float v101; // xmm0_4
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rax
  struct cocos2d::CCObject *v107; // rax
  int v109; // [rsp+20h] [rbp-69h] BYREF
  void *v110; // [rsp+28h] [rbp-61h] BYREF
  float v111[2]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v112; // [rsp+38h] [rbp-51h] BYREF
  __int64 v113; // [rsp+48h] [rbp-41h]
  unsigned __int64 v114; // [rsp+50h] [rbp-39h]

  v2 = 0;
  v3 = (cocos2d::CCObject *)cocos2d::CCArray::create(a1);
  a1[84] = v3;
  cocos2d::CCObject::retain(v3);
  v5 = cocos2d::CCDirector::sharedDirector(v4);
  cocos2d::CCDirector::getWinSize(v5, v111);
  v6 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_timeIcon_001.png");
  v7 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_downloadsIcon_001.png");
  a1[78] = cocos2d::CCSprite::createWithSpriteFrameName((const char *)&xmmword_716E08);
  a1[77] = cocos2d::CCSprite::createWithSpriteFrameName("GJ_likesIcon_001.png");
  v8 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68);
  a1[69] = v8;
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v8 + 160LL))(v8);
  v9 = *(_QWORD *)a1[69];
  v10 = a1[69];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v9 + 288))(v10, v11);
  v12 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68);
  a1[70] = v12;
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 160LL))(v12);
  v13 = *(_QWORD *)a1[70];
  v14 = a1[70];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v13 + 288))(v14, v15);
  v16 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68);
  a1[71] = v16;
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 160LL))(v16);
  v17 = *(_QWORD *)a1[71];
  v18 = a1[71];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v17 + 288))(v18, v19);
  v20 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68);
  a1[72] = v20;
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v20 + 160LL))(v20);
  v21 = *(_QWORD *)a1[72];
  v22 = a1[72];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v21 + 288))(v22, v23);
  v24 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68);
  a1[73] = v24;
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v24 + 160LL))(v24);
  v25 = *(_QWORD *)a1[73];
  v26 = a1[73];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v25 + 288))(v26, v27);
  cocos2d::CCArray::addObject(a1[84], v6);
  cocos2d::CCArray::addObject(a1[84], v7);
  cocos2d::CCArray::addObject(a1[84], a1[78]);
  cocos2d::CCArray::addObject(a1[84], a1[77]);
  cocos2d::CCArray::addObject(a1[84], a1[71]);
  cocos2d::CCArray::addObject(a1[84], a1[69]);
  cocos2d::CCArray::addObject(a1[84], a1[70]);
  cocos2d::CCArray::addObject(a1[84], a1[72]);
  cocos2d::CCArray::addObject(a1[84], a1[73]);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, v6);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, v7);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, a1[78]);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, a1[77]);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, a1[71]);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, a1[69]);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, a1[70]);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, a1[72]);
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCObject *))*a1 + 58))(a1, a1[73]);
  v28 = a1[63];
  v29 = *((_DWORD *)v28 + 255) - *((_DWORD *)v28 + 256);
  v109 = *((_DWORD *)v28 + 243);
  v30 = (float)(v111[0] * 0.5) + 80.0;
  v31 = v30 + 33.0;
  v32 = (float)(v111[1] * 0.5) + 51.0;
  v33 = 30;
  if ( v29 > 0 )
    v33 = 28;
  v34 = (float)v33;
  *((_DWORD *)a1 + 170) = 1092616192;
  if ( v29 > 0 )
    v32 = v32 + 10.0;
  v35 = *(_QWORD *)v7;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v35 + 288))(v7, v36);
  v37 = *(_QWORD *)v7;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v30, v34 + v32);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v37 + 184))(v7, v38);
  v39 = *(_QWORD *)a1[71];
  v40 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 200LL))(v7);
  v41 = a1[71];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v31, *(float *)(v40 + 4));
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v39 + 184))(v41, v42);
  v43 = *(_QWORD *)a1[77];
  v44 = a1[77];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v43 + 288))(v44, v45);
  v46 = *(_QWORD *)a1[77];
  v47 = a1[77];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v30, v32 + 1.0);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v46 + 184))(v47, v48);
  v49 = *(_QWORD *)a1[72];
  v50 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1[77] + 200LL))(a1[77]);
  v51 = a1[72];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v31, *(float *)(v50 + 4));
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v49 + 184))(v51, v52);
  v53 = *(_QWORD *)v6;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v53 + 288))(v6, v54);
  v55 = *(_QWORD *)v6;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v30, v32 - v34);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v55 + 184))(v6, v56);
  v57 = *(_QWORD *)a1[69];
  v58 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v6 + 200LL))(v6);
  v59 = 0;
  v60 = v109;
  if ( v109 == 5 )
    v59 = 6;
  v61 = a1[69];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v31, (float)v59 + *(float *)(v58 + 4));
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v57 + 184))(v61, v62);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, 0.0, -14.0);
  v64 = v63;
  v65 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1[69] + 200LL))(a1[69]);
  cocos2d::CCPoint::operator+(v65, &v109, v64);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, int *))(*(_QWORD *)a1[70] + 184LL))(a1[70], &v109);
  v66 = *(_QWORD *)a1[78];
  v67 = a1[78];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v66 + 288))(v67, v68);
  v69 = *(_QWORD *)a1[78];
  v70 = a1[78];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v30 + 1.0, v32 - (float)(v34 + v34));
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v69 + 184))(v70, v71);
  v72 = *(_QWORD *)a1[73];
  v73 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1[78] + 200LL))(a1[78]);
  v74 = a1[73];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, v31, *(float *)(v73 + 4));
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v72 + 184))(v74, v75);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, (float)(v111[0] * 0.5) - 100.0, v32 + 5.0);
  cocos2d::CCPoint::operator=((char *)a1 + 684, v76);
  v77 = GJDifficultySprite_create();
  a1[81] = v77;
  (*((void (__fastcall **)(struct cocos2d::CCObject **, cocos2d::CCSprite *, __int64))*a1 + 57))(a1, v77, 3);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1[81] + 184LL))(a1[81], (__int64)a1 + 684);
  v78 = "star_small01_001.png";
  if ( v60 == 5 )
    v78 = "moon_small01_001.png";
  v79 = cocos2d::CCSprite::createWithSpriteFrameName(v78);
  a1[82] = v79;
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCSprite *))*a1 + 58))(a1, v79);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, 8.0, -30.0);
  cocos2d::CCPoint::operator+((char *)a1 + 684, &v109, v80);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, int *))(*(_QWORD *)a1[82] + 184LL))(a1[82], &v109);
  v81 = cocos2d::CCLabelBMFont::create("0", (const char *)&qword_6FFF68);
  a1[83] = v81;
  (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCLabelBMFont *))*a1 + 58))(a1, v81);
  v82 = *(_QWORD *)a1[83];
  v83 = a1[83];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, 1.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v82 + 288))(v83, v84);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, -8.0, 0.0);
  v86 = v85;
  v87 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1[82] + 200LL))(a1[82]);
  cocos2d::CCPoint::operator+(v87, &v109, v86);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, int *))(*(_QWORD *)a1[83] + 184LL))(a1[83], &v109);
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1[83] + 160LL))(a1[83]);
  *((_DWORD *)a1 + 173) = *(_DWORD *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1[83] + 200LL))(a1[83])
                                    + 4);
  if ( v29 > 0 && (unsigned __int8)sub_2678C0(a1[63]) )
  {
    v88 = cocos2d::CCSprite::createWithSpriteFrameName("diamond_small01_001.png");
    (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCSprite *))*a1 + 58))(a1, v88);
    v89 = *((_DWORD *)a1[63] + 255) - *((_DWORD *)a1[63] + 256);
    v90 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v110 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v110);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v90 = qword_905FE0;
    }
    v91 = v89 + 2;
    if ( (unsigned int)(v89 - 2) > 8 )
      v91 = 0;
    if ( !v90 )
    {
      v110 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v110);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v90 = qword_905FE0;
    }
    v92 = sub_2E0FB0(v90, a1[63]);
    v93 = cocos2d::CCString::createWithFormat("%i/%i", v92, v91);
    CString = cocos2d::CCString::getCString(v93);
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v95 = -1;
    do
      ++v95;
    while ( CString[v95] );
    sub_3C230(&v112);
    v96 = (const char *)&v112;
    if ( v114 > 0xF )
      v96 = (const char *)v112;
    v97 = cocos2d::CCLabelBMFont::create(v96, (const char *)&qword_6FFF68);
    (*((void (__fastcall **)(struct cocos2d::CCObject **, struct cocos2d::CCLabelBMFont *))*a1 + 58))(a1, v97);
    v98 = *(_QWORD *)v97;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v98 + 288))(v97, v99);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v97 + 160LL))(v97);
    v100 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v97 + 320LL))(v97);
    v101 = (*(float (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v97 + 168LL))(v97) * v100;
    v102 = 0;
    if ( *((_DWORD *)a1[63] + 255) - *((_DWORD *)a1[63] + 256) == 10 )
      v102 = -4;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, (float)(v101 * 0.5) + 2.0, (float)v102 - 44.5);
    cocos2d::CCPoint::operator+((char *)a1 + 684, &v109, v103);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, int *))(*(_QWORD *)v88 + 184LL))(v88, &v109);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v110, -8.0, 0.0);
    v105 = v104;
    v106 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v88 + 200LL))(v88);
    cocos2d::CCPoint::operator+(v106, &v109, v105);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, int *))(*(_QWORD *)v97 + 184LL))(v97, &v109);
    if ( v92 == v91 )
    {
      LOWORD(v109) = -156;
      BYTE2(v109) = -1;
      (**((void (__fastcall ***)(__int64, int *))v97 + 46))((__int64)v97 + 368, &v109);
    }
    sub_3C310(&v112);
  }
  if ( *((_BYTE *)a1 + 696) )
  {
    if ( cocos2d::CCArray::count(a1[84]) )
    {
      do
      {
        v107 = cocos2d::CCArray::objectAtIndex(a1[84], v2);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v107 + 336LL))(v107, 0);
        ++v2;
      }
      while ( v2 < cocos2d::CCArray::count(a1[84]) );
    }
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1[78] + 336LL))(a1[78], 0);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1[73] + 336LL))(a1[73], 0);
  }
  return sub_420820(a1);
}

// Address: 0x26e4a0
// Method: LevelInfoLayer::setupPlatformerStats
// Hidden C++ exception states: #wind=2
char *__fastcall LevelInfoLayer_setupPlatformerStats(__int64 a1)
{
  char *v2; // rsi
  __m128i si128; // xmm6
  cocos2d::CCString *v4; // rax
  void *v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  void **v10; // rdx
  void *v11; // rcx
  cocos2d::CCString *v12; // rax
  const char *v13; // rax
  __int64 v14; // r8
  void **v15; // rdx
  void *v16; // rcx
  cocos2d::CCString *v17; // rax
  void *v18; // rcx
  __m128i v19; // xmm6
  cocos2d::CCString *v20; // rax
  void *v21; // rcx
  cocos2d::CCString *v22; // rax
  const char *v23; // rax
  __int64 v24; // r8
  void **v25; // rdx
  void *v26; // rcx
  cocos2d::CCString *v27; // rax
  void *v28; // rcx
  cocos2d::CCString *v29; // rax
  void *v30; // rcx
  cocos2d::CCString *v31; // rax
  void *v32; // rcx
  cocos2d::CCString *v33; // rax
  void *v34; // rcx
  cocos2d::CCString *v35; // rax
  void *v36; // rcx
  cocos2d::CCString *v37; // rax
  void *v38; // rcx
  cocos2d::CCString *v39; // rax
  void *v40; // rcx
  cocos2d::CCString *v41; // rax
  void *v42; // rcx
  cocos2d::CCString *v43; // rax
  const char *v44; // rax
  void *v45; // rcx
  void *Src[2]; // [rsp+38h] [rbp-71h] BYREF
  size_t Size; // [rsp+48h] [rbp-61h]
  unsigned __int64 v49; // [rsp+50h] [rbp-59h]
  void *v50[2]; // [rsp+58h] [rbp-51h] BYREF
  size_t v51; // [rsp+68h] [rbp-41h]
  unsigned __int64 v52; // [rsp+70h] [rbp-39h]
  void *v53[2]; // [rsp+78h] [rbp-31h] BYREF
  size_t v54; // [rsp+88h] [rbp-21h]
  unsigned __int64 v55; // [rsp+90h] [rbp-19h]
  __int128 v56; // [rsp+98h] [rbp-11h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-1h]
  __int64 v58; // [rsp+B0h] [rbp+7h]
  void *Block[2]; // [rsp+B8h] [rbp+Fh] BYREF
  __m128i v60; // [rsp+C8h] [rbp+1Fh]

  v2 = GJLevelList_create();
  *(_OWORD *)Block = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_830EE0);
  v60 = si128;
  LOWORD(Block[0]) = 49;
  v4 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 86) = cocos2d::CCString::intValue(v4);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v5 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v5);
    si128 = _mm_load_si128((const __m128i *)&xmmword_830EE0);
  }
  *(_OWORD *)Block = 0;
  v60 = si128;
  LOWORD(Block[0]) = 50;
  v6 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  CString = cocos2d::CCString::getCString(v6);
  *(_OWORD *)Src = 0;
  Size = 0;
  v49 = 0;
  v8 = -1;
  v9 = -1;
  do
    ++v9;
  while ( CString[v9] );
  sub_3C230(Src);
  if ( v2 + 440 != (char *)Src )
  {
    v10 = Src;
    if ( v49 > 0xF )
      v10 = (void **)Src[0];
    sub_3F5A0(v2 + 440, v10, Size);
  }
  sub_3C310(Src);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v11 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v11);
  }
  *(_OWORD *)Block = 0;
  v60 = _mm_load_si128((const __m128i *)&xmmword_830EE0);
  LOWORD(Block[0]) = 51;
  v12 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  v13 = cocos2d::CCString::getCString(v12);
  *(_OWORD *)v50 = 0;
  v51 = 0;
  v52 = 0;
  v14 = -1;
  do
    ++v14;
  while ( v13[v14] );
  sub_3C230(v50);
  if ( v2 + 536 != (char *)v50 )
  {
    v15 = v50;
    if ( v52 > 0xF )
      v15 = (void **)v50[0];
    sub_3F5A0(v2 + 536, v15, v51);
  }
  sub_3C310(v50);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v16 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v16 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v16);
  }
  *(_OWORD *)Block = 0;
  v60 = _mm_load_si128((const __m128i *)&xmmword_830EE0);
  LOWORD(Block[0]) = 53;
  v17 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 87) = cocos2d::CCString::intValue(v17);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v18 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v18 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v18);
  }
  *(_OWORD *)Block = 0;
  v19 = _mm_load_si128((const __m128i *)&xmmword_830EF0);
  v60 = v19;
  strcpy((char *)Block, "49");
  v20 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 91) = cocos2d::CCString::intValue(v20);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v21 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v21 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v21);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "50");
  v22 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  v23 = cocos2d::CCString::getCString(v22);
  *(_OWORD *)v53 = 0;
  v54 = 0;
  v55 = 0;
  v24 = -1;
  do
    ++v24;
  while ( v23[v24] );
  sub_3C230(v53);
  if ( v2 + 408 != (char *)v53 )
  {
    v25 = v53;
    if ( v55 > 0xF )
      v25 = (void **)v53[0];
    sub_3F5A0(v2 + 408, v25, v54);
  }
  sub_3C310(v53);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v26 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v26 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v26 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v26);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "10");
  v27 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 88) = cocos2d::CCString::intValue(v27);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v28 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v28 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v28 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v28);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "14");
  v29 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 89) = cocos2d::CCString::intValue(v29);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v30 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v30 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v30 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v30);
  }
  *(_OWORD *)Block = 0;
  v60 = _mm_load_si128((const __m128i *)&xmmword_830EE0);
  LOWORD(Block[0]) = 55;
  v31 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 90) = cocos2d::CCString::intValue(v31);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v32 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v32 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v32 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v32);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "28");
  v33 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 142) = cocos2d::CCString::intValue(v33);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v34 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v34 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v34 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v34);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "29");
  v35 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 143) = cocos2d::CCString::intValue(v35);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v36 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v36 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v36 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v36);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "55");
  v37 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 96) = cocos2d::CCString::intValue(v37);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v38 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v38 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v38 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v38);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "56");
  v39 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  *((_DWORD *)v2 + 97) = cocos2d::CCString::intValue(v39);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v40 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v40 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v40 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v40);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "19");
  v41 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  v2[397] = cocos2d::CCString::boolValue(v41);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v42 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v42 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v42 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v42);
  }
  *(_OWORD *)Block = 0;
  v60 = v19;
  strcpy((char *)Block, "51");
  v43 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(a1, Block);
  v44 = cocos2d::CCString::getCString(v43);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  do
    ++v8;
  while ( v44[v8] );
  sub_3C230(&v56);
  sub_26F230(v2, &v56);
  if ( v60.m128i_i64[1] > 0xFuLL )
  {
    v45 = Block[0];
    if ( (unsigned __int64)(v60.m128i_i64[1] + 1) >= 0x1000 )
    {
      v45 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v45 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v45);
  }
  return v2;
}
