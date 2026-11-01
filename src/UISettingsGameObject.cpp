#include <Geode/binding/UISettingsGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x632d00
// Method: UISettingsGameObject::~UISettingsGameObject
cocos2d::CCSprite *__fastcall UISettingsGameObject__dtor_UISettingsGameObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x632d13*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x632d20*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x632d2e*/
  TextGameObject__dtor_TextGameObject(Block); /*0x632d35*/
  if ( (a2 & 1) != 0 ) /*0x632d3d*/
    j_j_free(Block); /*0x632d47*/
  return Block; /*0x632d4c*/
}

// [2/4] Address: 0x6593c0
// Method: UISettingsGameObject::init
char __fastcall UISettingsGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x6593cd*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eUISettingsBtn_001.png") ) /*0x6593d7*/
    return 0; /*0x659423*/
  sub_287800(a1); /*0x6593e4*/
  *(_BYTE *)(a1 + 313) = 0; /*0x6593e9*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x6593f2*/
  *(_WORD *)(a1 + 1465) = -1; /*0x6593fc*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x659405*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x65940c*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x659416*/
  return 1; /*0x65941d*/
}

// [3/4] Address: 0x659430
// Method: UISettingsGameObject::getSaveString
__int64 __fastcall UISettingsGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x659460*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65946d*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x65947f*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x659496*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6594a5*/
  sub_3C310(v12); /*0x6594b1*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x6594bd*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6594c6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6594cb*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6594da*/
    fmt::BasicWriter<char>::operator<<(v13, 51); /*0x6594ea*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6594f0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6594f5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659504*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x659515*/
  }
  if ( *(_DWORD *)(a1 + 1484) ) /*0x65951b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x659524*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659529*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659538*/
    fmt::BasicWriter<char>::operator<<(v13, 71); /*0x659548*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65954e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659553*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659562*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1484)); /*0x659573*/
  }
  if ( *(_DWORD *)(a1 + 1856) ) /*0x659579*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x659582*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659587*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659596*/
    fmt::BasicWriter<char>::operator<<(v13, 385); /*0x6595a6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6595ac*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6595b1*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6595c0*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x6595d1*/
  }
  if ( *(_DWORD *)(a1 + 1860) ) /*0x6595d7*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6595e0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6595e5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6595f4*/
    fmt::BasicWriter<char>::operator<<(v13, 386); /*0x659604*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65960a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65960f*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65961e*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1860)); /*0x65962f*/
  }
  if ( *(_BYTE *)(a1 + 1864) ) /*0x659635*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65963e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659643*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659652*/
    fmt::BasicWriter<char>::operator<<(v13, 387); /*0x659662*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x659668*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65966d*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65967c*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1864)); /*0x65968e*/
  }
  if ( *(_BYTE *)(a1 + 1865) ) /*0x659694*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65969d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6596a2*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6596b1*/
    fmt::BasicWriter<char>::operator<<(v13, 388); /*0x6596c1*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6596c7*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6596cc*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6596db*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1865)); /*0x6596ed*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x6596f8*/
  *(_OWORD *)a2 = 0; /*0x659701*/
  *(_QWORD *)(a2 + 16) = 0; /*0x659704*/
  *(_QWORD *)(a2 + 24) = 0; /*0x659708*/
  v8 = -1; /*0x65970c*/
  do /*0x659716*/
    ++v8; /*0x659713*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x659716*/
  sub_3C230(a2); /*0x659723*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65972e*/
  return a2; /*0x659737*/
}

// [4/4] Address: 0x659760
// Method: UISettingsGameObject::customObjectSetup
bool __fastcall UISettingsGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  int v14; // eax
  const char *v15; // rcx
  int v16; // eax
  const char *v17; // rcx
  const char *v18; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x659783*/
  v6 = 9999; /*0x65978b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x659790*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x6597a3*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x6597af*/
      v9 = *(const char **)v9; /*0x6597b1*/
    v8 = atoi(v9); /*0x6597b4*/
    v7 = 0; /*0x6597ba*/
    if ( v8 < 0 ) /*0x6597be*/
      v8 = 0; /*0x6597be*/
    if ( v8 > 9999 ) /*0x6597c3*/
      v8 = 9999; /*0x6597c5*/
  }
  else
  {
    v7 = 0; /*0x65979a*/
    v8 = 0; /*0x65979c*/
  }
  *(_DWORD *)(a1 + 1480) = v8; /*0x6597c7*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x6597d0*/
  {
    v10 = 0; /*0x6597da*/
LABEL_16:
    v6 = v10; /*0x659801*/
    goto LABEL_17; /*0x659801*/
  }
  v11 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x6597e1*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x6597ed*/
    v11 = *(const char **)v11; /*0x6597ef*/
  v10 = atoi(v11); /*0x6597f2*/
  if ( v10 < 0 ) /*0x6597fa*/
    v10 = 0; /*0x6597fa*/
  if ( v10 <= 9999 ) /*0x6597ff*/
    goto LABEL_16; /*0x6597ff*/
LABEL_17:
  *(_DWORD *)(a1 + 1484) = v6; /*0x659803*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3080LL) ) /*0x65980c*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 12320LL); /*0x65981d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12344LL) > 0xFu ) /*0x659829*/
      v13 = *(const char **)v13; /*0x65982b*/
    v12 = atoi(v13); /*0x65982e*/
  }
  else
  {
    v12 = 0; /*0x659816*/
  }
  *(_DWORD *)(a1 + 1856) = v12; /*0x659834*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3088LL) ) /*0x65983d*/
  {
    v15 = (const char *)(*(_QWORD *)a2 + 12352LL); /*0x65984e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12376LL) > 0xFu ) /*0x65985a*/
      v15 = *(const char **)v15; /*0x65985c*/
    v14 = atoi(v15); /*0x65985f*/
  }
  else
  {
    v14 = 0; /*0x659847*/
  }
  *(_DWORD *)(a1 + 1860) = v14; /*0x659865*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3096LL) ) /*0x65986e*/
  {
    v17 = (const char *)(*(_QWORD *)a2 + 12384LL); /*0x65987f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12408LL) > 0xFu ) /*0x65988b*/
      v17 = *(const char **)v17; /*0x65988d*/
    v16 = atoi(v17); /*0x659890*/
  }
  else
  {
    v16 = 0; /*0x659878*/
  }
  *(_BYTE *)(a1 + 1864) = v16 != 0; /*0x65989b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3104LL) ) /*0x6598a4*/
  {
    v18 = (const char *)(*(_QWORD *)a2 + 12416LL); /*0x6598b1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12440LL) > 0xFu ) /*0x6598bd*/
      v18 = *(const char **)v18; /*0x6598bf*/
    v7 = atoi(v18); /*0x6598c8*/
  }
  *(_BYTE *)(a1 + 1865) = v7 != 0; /*0x6598de*/
  return v7 != 0; /*0x6598d1*/
}
