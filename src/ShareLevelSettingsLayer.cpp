#include <Geode/binding/ShareLevelSettingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/5] Address: 0x62b6e0
// Method: ShareLevelSettingsLayer::~ShareLevelSettingsLayer
_QWORD *__fastcall ShareLevelSettingsLayer__dtor_ShareLevelSettingsLayer(_QWORD *Block, char a2)
{
  *Block = &ShareLevelSettingsLayer::`vftable'; /*0x62b6f3*/
  Block[40] = &ShareLevelSettingsLayer::`vftable'; /*0x62b700*/
  Block[41] = &ShareLevelSettingsLayer::`vftable'; /*0x62b70e*/
  Block[42] = &ShareLevelSettingsLayer::`vftable'; /*0x62b71c*/
  Block[43] = &ShareLevelSettingsLayer::`vftable'; /*0x62b72a*/
  Block[44] = &ShareLevelSettingsLayer::`vftable'; /*0x62b738*/
  Block[51] = &ShareLevelSettingsLayer::`vftable'; /*0x62b746*/
  Block[54] = &ShareLevelSettingsLayer::`vftable'; /*0x62b754*/
  Block[68] = &ShareLevelSettingsLayer::`vftable'; /*0x62b762*/
  Block[83] = &ShareLevelSettingsLayer::`vftable'; /*0x62b770*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x62b777*/
  if ( (a2 & 1) != 0 ) /*0x62b77f*/
    j_j_free(Block); /*0x62b789*/
  return Block; /*0x62b78e*/
}

// [3/5] Address: 0x62e7f0
// Method: ShareLevelSettingsLayer::onUnlisted
// Hidden C++ exception states: #wind=3
__int64 __fastcall ShareLevelSettingsLayer_onUnlisted(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  cocos2d::CCObject *v6; // rbx
  __int64 v7; // rax
  __int128 v9; // [rsp+50h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp-30h]
  _BYTE v12[40]; // [rsp+70h] [rbp-28h] BYREF
  void *v13; // [rsp+A0h] [rbp+8h]
  void *v14; // [rsp+A0h] [rbp+8h]

  *(_BYTE *)(*(_QWORD *)(a1 + 680) + 688LL) = *(_BYTE *)(*(_QWORD *)(a1 + 680) + 688LL) == 0; /*0x62e811*/
  v2 = qword_905FD0; /*0x62e817*/
  if ( !qword_905FD0 ) /*0x62e821*/
  {
    v13 = operator new(0x6E8u); /*0x62e82d*/
    qword_905FD0 = sub_2723A0(v13); /*0x62e83e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x62e84f*/
    v2 = qword_905FD0; /*0x62e851*/
  }
  if ( !GameManager_getGameVariable(v2, "0070") ) /*0x62e85f*/
  {
    v4 = qword_905FD0; /*0x62e86c*/
    if ( !qword_905FD0 ) /*0x62e876*/
    {
      v14 = operator new(0x6E8u); /*0x62e882*/
      qword_905FD0 = sub_2723A0(v14); /*0x62e893*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x62e8a4*/
      v4 = qword_905FD0; /*0x62e8a7*/
    }
    LOBYTE(v3) = 1; /*0x62e8ae*/
    sub_27ACB0(v4, "0070", v3); /*0x62e8b8*/
    v9 = 0; /*0x62e8c0*/
    *(_QWORD *)&v9 = sub_3C460(128); /*0x62e8de*/
    v10 = 119; /*0x62e8e3*/
    v11 = 127; /*0x62e8ec*/
    strcpy( /*0x62e8fc*/
      (char *)v9,
      "An unlisted level can only be found by entering its levelID. Once a level is unlisted, it cannot change back to listed.");
    v5 = sub_3E4F0(v12, &v9); /*0x62e979*/
    v6 = FLAlertLayer_create_0(0, (int)"Unlisted", v5, (__int64)"OK", 0, 1134559232, 0, 0, 1065353216); /*0x62e9c4*/
    sub_3C310(&v9); /*0x62e9cc*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v6 + 1064LL))(v6); /*0x62e9de*/
  }
  v7 = *(_QWORD *)(a1 + 680); /*0x62e9e0*/
  if ( !*(_BYTE *)(v7 + 688) ) /*0x62e9e7*/
    *(_BYTE *)(v7 + 689) = 0; /*0x62e9f0*/
  return sub_62EA30(a1); /*0x62e9fa*/
}

// [4/5] Address: 0x62eb10
// Method: ShareLevelSettingsLayer::onClose
__int64 __fastcall ShareLevelSettingsLayer_onClose(_QWORD *a1)
{
  __int64 v1; // rdi
  float v3; // xmm0_4
  __int64 v4; // rdx

  v1 = a1[85]; /*0x62eb1a*/
  if ( *(_DWORD *)(v1 + 1052) - *(_DWORD *)(v1 + 1056) == -1 ) /*0x62eb33*/
  {
    v3 = (float)((float)rand() / 32767.0) * 1000.0; /*0x62eb4a*/
    *(_DWORD *)(v1 + 1056) = (int)v3; /*0x62eb56*/
    *(_DWORD *)(v1 + 1052) = (int)v3 + 1; /*0x62eb5e*/
  }
  if ( a1[88] ) /*0x62eb64*/
    sub_62CAF0(); /*0x62eb70*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x62eb7d*/
  LOBYTE(v4) = 1; /*0x62eb86*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v4);
}

// [5/5] Address: 0x62eba0
// Method: ShareLevelSettingsLayer::keyBackClicked
__int64 __fastcall ShareLevelSettingsLayer_keyBackClicked(__int64 a1)
{
  return ShareLevelSettingsLayer_onClose((_QWORD *)(a1 - 336));
}
