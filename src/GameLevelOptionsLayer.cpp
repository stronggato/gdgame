#include <Geode/binding/GameLevelOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x396200
// Method: GameLevelOptionsLayer::~GameLevelOptionsLayer
_QWORD *__fastcall GameLevelOptionsLayer__dtor_GameLevelOptionsLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &GameLevelOptionsLayer::`vftable'; /*0x396216*/
  Block[40] = &GameLevelOptionsLayer::`vftable'; /*0x396220*/
  Block[41] = &GameLevelOptionsLayer::`vftable'; /*0x39622e*/
  Block[42] = &GameLevelOptionsLayer::`vftable'; /*0x39623c*/
  Block[43] = &GameLevelOptionsLayer::`vftable'; /*0x39624a*/
  Block[44] = &GameLevelOptionsLayer::`vftable'; /*0x396258*/
  Block[51] = &GameLevelOptionsLayer::`vftable'; /*0x396266*/
  Block[54] = &GameLevelOptionsLayer::`vftable'; /*0x396274*/
  Block[68] = &GameLevelOptionsLayer::`vftable'; /*0x396282*/
  Block[83] = &GameLevelOptionsLayer::`vftable'; /*0x396290*/
  Block[84] = &GameLevelOptionsLayer::`vftable'; /*0x39629e*/
  Block[142] = &GameLevelOptionsLayer::`vftable'; /*0x3962ac*/
  v4 = (cocos2d::CCObject *)Block[143]; /*0x3962b3*/
  if ( v4 ) /*0x3962bd*/
    cocos2d::CCObject::release(v4); /*0x3962bf*/
  SFXSettingsPopup__dtor_SFXSettingsPopup(Block); /*0x3962c8*/
  if ( (a2 & 1) != 0 ) /*0x3962d2*/
    j_j_free(Block); /*0x3962dc*/
  return Block; /*0x3962e4*/
}

// [2/5] Address: 0x3a6b30
// Method: GameLevelOptionsLayer::setupOptions
void __fastcall GameLevelOptionsLayer_setupOptions(__int64 a1)
{
  __int64 v1; // r9
  int v3; // r9d
  __int64 v4; // rbx
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r9

  v1 = *(_QWORD *)(a1 + 1144); /*0x3a6b36*/
  if ( v1 ) /*0x3a6b43*/
  {
    *(_BYTE *)(sub_3976E0(a1, (unsigned int)"Low Detail Mode", 1, *(unsigned __int8 *)(v1 + 841), (__int64)&byte_6E86E0) /*0x3a6b89*/
             + 393) = 1;
    sub_3976E0( /*0x3a6b9f*/
      a1,
      (unsigned int)"Disable Shake",
      2,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 1144) + 842LL),
      (__int64)&byte_6E86E0);
    LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)(a1 + 1144) + 1588LL) == 1; /*0x3a6bce*/
    v4 = sub_3976E0( /*0x3a6be5*/
           a1,
           (unsigned int)"Enable CBS",
           3,
           v3,
           (__int64)"Force <cg>enable</c> <cy>Click Between Steps</c> on this level regardless of the global setting.");
    LOBYTE(v5) = *(_DWORD *)(*(_QWORD *)(a1 + 1144) + 1588LL) == 2; /*0x3a6c04*/
    v6 = sub_3976E0( /*0x3a6c08*/
           a1,
           (unsigned int)"Disable CBS",
           4,
           v5,
           (__int64)"Force <cr>disable</c> <cy>Click Between Steps</c> on this level regardless of the global setting.");
    *(_BYTE *)(v4 + 393) = 1; /*0x3a6c0d*/
    *(_BYTE *)(v6 + 393) = 1; /*0x3a6c19*/
    v7 = *(_QWORD *)(a1 + 1144); /*0x3a6c20*/
    if ( *(_DWORD *)(v7 + 972) == 5 ) /*0x3a6c2f*/
      sub_3976E0( /*0x3a6c55*/
        a1,
        (unsigned int)"Enable Platformer\nSaves",
        5,
        *(unsigned __int8 *)(v7 + 1704),
        (__int64)"Force <cg>enable</c> <cy>checkpoint saving</c> on this level, even if auto-save is globally disabled.");
  }
}

// [3/5] Address: 0x3a6c60
// Method: GameLevelOptionsLayer::didToggle
// Hidden C++ exception states: #wind=1
void __fastcall GameLevelOptionsLayer_didToggle(__int64 a1, int a2)
{
  __int64 v3; // r8
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  cocos2d::CCObject *v14; // rbx
  bool v15; // bl
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  _BYTE v19[40]; // [rsp+70h] [rbp-28h] BYREF

  if ( a2 == 1 ) /*0x3a6c77*/
  {
    v11 = *(_QWORD *)(a1 + 1144); /*0x3a6d67*/
    if ( !*(_QWORD *)(v11 + 1648) ) /*0x3a6d76*/
    {
      v15 = *(_BYTE *)(v11 + 841) == 0; /*0x3a6ebc*/
      *(_BYTE *)(v11 + 841) = v15; /*0x3a6ebf*/
      v9 = sub_3974D0(a1, 1, (unsigned int)(a2 - 1)); /*0x3a6eca*/
      if ( !v9 ) /*0x3a6ed2*/
        return; /*0x3a6ed2*/
      v10 = v15; /*0x3a6ed4*/
      goto LABEL_24; /*0x3a6ed4*/
    }
    v12 = a1 + 1136; /*0x3a6d7c*/
    if ( !a1 ) /*0x3a6d88*/
      v12 = 0; /*0x3a6d88*/
    v16 = 0; /*0x3a6d8f*/
    *(_QWORD *)&v16 = sub_3C460(96); /*0x3a6dab*/
    v17 = 94; /*0x3a6db0*/
    v18 = 95; /*0x3a6db9*/
    strcpy( /*0x3a6dc9*/
      (char *)v16,
      "Changing <cy>LDM</c> will <cr>delete</c> your <cg>saved</c> <cy>checkpoint</c> for this level.");
    v13 = sub_3E4F0(v19, &v16); /*0x3a6e34*/
    v14 = FLAlertLayer_create_0( /*0x3a6e88*/
            v12,
            (int)"Low Detail Mode",
            v13,
            (__int64)"Cancel",
            (__int64)"OK",
            1136525312,
            0,
            0,
            1065353216);
    sub_3C310(&v16); /*0x3a6e90*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v14 + 1064LL))(v14); /*0x3a6ea2*/
  }
  else
  {
    if ( a2 == 2 ) /*0x3a6c81*/
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 1144) + 842LL) = *(_BYTE *)(*(_QWORD *)(a1 + 1144) + 842LL) == 0; /*0x3a6d50*/
      return; /*0x3a6d66*/
    }
    if ( a2 != 3 && a2 != 4 ) /*0x3a6c91*/
    {
      if ( a2 == 5 ) /*0x3a6c97*/
        *(_BYTE *)(*(_QWORD *)(a1 + 1144) + 1704LL) = *(_BYTE *)(*(_QWORD *)(a1 + 1144) + 1704LL) == 0; /*0x3a6cae*/
      return; /*0x3a6cc4*/
    }
    v3 = *(_QWORD *)(a1 + 1144); /*0x3a6cc5*/
    v4 = *(_DWORD *)(v3 + 1588); /*0x3a6ccc*/
    if ( a2 == 3 ) /*0x3a6cd6*/
    {
      v4 = v4 != 1; /*0x3a6ce0*/
    }
    else if ( a2 == 4 ) /*0x3a6ce7*/
    {
      v5 = 2; /*0x3a6ce9*/
      if ( v4 == 2 ) /*0x3a6cf2*/
        v5 = 0; /*0x3a6cf2*/
      v4 = v5; /*0x3a6cf5*/
    }
    *(_DWORD *)(v3 + 1588) = v4; /*0x3a6cf7*/
    v6 = sub_3974D0(a1, 3, v3); /*0x3a6d06*/
    if ( v6 ) /*0x3a6d0e*/
    {
      LOBYTE(v7) = v4 == 1; /*0x3a6d13*/
      CCMenuItemToggler_toggle(v6, v7); /*0x3a6d19*/
    }
    v9 = sub_3974D0(a1, 4, v8); /*0x3a6d26*/
    if ( v9 ) /*0x3a6d2e*/
    {
      LOBYTE(v10) = v4 == 2; /*0x3a6d37*/
LABEL_24:
      CCMenuItemToggler_toggle(v9, v10); /*0x3a6ed7*/
    }
  }
}

// [4/5] Address: 0x3a6ef0
// Method: GameLevelOptionsLayer::FLAlert_Clicked
void __fastcall GameLevelOptionsLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  bool v6; // bl
  __int64 v7; // r8
  __int64 v8; // rax

  if ( a3 ) /*0x3a6ef3*/
  {
    sub_260AB0(*(_QWORD *)(a1 + 8)); /*0x3a6f01*/
    v4 = *(_QWORD *)(a1 + 8); /*0x3a6f06*/
    v5 = a1 - 1136; /*0x3a6f0a*/
    v6 = *(_BYTE *)(v4 + 841) == 0; /*0x3a6f1d*/
    *(_BYTE *)(v4 + 841) = v6; /*0x3a6f20*/
    v8 = sub_3974D0(v5, 1, v7); /*0x3a6f26*/
    if ( v8 ) /*0x3a6f2e*/
      CCMenuItemToggler_toggle(v8, v6); /*0x3a6f36*/
  }
}

// [5/5] Address: 0x3ae360
// Method: GameLevelOptionsLayer::create
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameLevelOptionsLayer_create(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 (__fastcall *v3)(_QWORD *); // rdx

  v2 = operator new(0x2B8u); /*0x3ae377*/
  FLAlertLayer_FLAlertLayer((__int64)v2); /*0x3ae382*/
  *v2 = &CommunityCreditsPage::`vftable'; /*0x3ae38e*/
  v2[40] = &CommunityCreditsPage::`vftable'; /*0x3ae398*/
  v2[41] = &CommunityCreditsPage::`vftable'; /*0x3ae3a6*/
  v2[42] = &CommunityCreditsPage::`vftable'; /*0x3ae3b4*/
  v2[43] = &CommunityCreditsPage::`vftable'; /*0x3ae3c2*/
  v2[44] = &CommunityCreditsPage::`vftable'; /*0x3ae3d0*/
  v2[51] = &CommunityCreditsPage::`vftable'; /*0x3ae3de*/
  v2[54] = &CommunityCreditsPage::`vftable'; /*0x3ae3ec*/
  v2[68] = &CommunityCreditsPage::`vftable'; /*0x3ae3fa*/
  v2[83] = 0; /*0x3ae401*/
  v2[84] = 0; /*0x3ae40c*/
  v2[85] = 0; /*0x3ae417*/
  *((_DWORD *)v2 + 172) = -1; /*0x3ae422*/
  if ( (unsigned __int8)CommunityCreditsPage_init(v2) ) /*0x3ae442*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x3ae452*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x3ae462*/
    v2 = 0; /*0x3ae465*/
  }
  v2[71] = a1; /*0x3ae467*/
  v3 = *(__int64 (__fastcall **)(_QWORD *))(*v2 + 1064LL); /*0x3ae471*/
  if ( (char *)v3 == (char *)CommunityCreditsPage_show ) /*0x3ae485*/
    return CommunityCreditsPage_show(v2); /*0x3ae491*/
  else
    return v3(v2); /*0x3ae4a0*/
}
