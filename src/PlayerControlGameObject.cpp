#include <Geode/binding/PlayerControlGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x65e650
// Method: PlayerControlGameObject::init
char __fastcall PlayerControlGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x65e65d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_ePlayerControlBtn_001.png") ) /*0x65e667*/
    return 0; /*0x65e6b3*/
  sub_287800(a1); /*0x65e674*/
  *(_BYTE *)(a1 + 313) = 0; /*0x65e679*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x65e682*/
  *(_WORD *)(a1 + 1465) = -1; /*0x65e68c*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x65e695*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x65e69c*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x65e6a6*/
  return 1; /*0x65e6ad*/
}

// [2/3] Address: 0x65e6c0
// Method: PlayerControlGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall PlayerControlGameObject_getSaveString(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x65e6f0*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65e6fd*/
  SaveString = EffectGameObject_getSaveString((__int64)a1, (__int64)v12, a3); /*0x65e70f*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x65e726*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e735*/
  sub_3C310(v12); /*0x65e741*/
  if ( a1[1700] ) /*0x65e74d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e756*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e75b*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e76a*/
    fmt::BasicWriter<char>::operator<<(v13, 138); /*0x65e77a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e780*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e785*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e794*/
    fmt::BasicWriter<char>::operator<<(v13, a1[1700]); /*0x65e7a6*/
  }
  if ( a1[1701] ) /*0x65e7ac*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e7b5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e7ba*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e7c9*/
    fmt::BasicWriter<char>::operator<<(v13, 200); /*0x65e7d9*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e7df*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e7e4*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e7f3*/
    fmt::BasicWriter<char>::operator<<(v13, a1[1701]); /*0x65e805*/
  }
  if ( a1[1856] ) /*0x65e80b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e814*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e819*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e828*/
    fmt::BasicWriter<char>::operator<<(v13, 540); /*0x65e838*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e83e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e843*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e852*/
    fmt::BasicWriter<char>::operator<<(v13, a1[1856]); /*0x65e864*/
  }
  if ( a1[1857] ) /*0x65e86a*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e873*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e878*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e887*/
    fmt::BasicWriter<char>::operator<<(v13, 541); /*0x65e897*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e89d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e8a2*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e8b1*/
    fmt::BasicWriter<char>::operator<<(v13, a1[1857]); /*0x65e8c3*/
  }
  if ( a1[1858] ) /*0x65e8c9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e8d2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e8d7*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e8e6*/
    fmt::BasicWriter<char>::operator<<(v13, 542); /*0x65e8f6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e8fc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e901*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e910*/
    fmt::BasicWriter<char>::operator<<(v13, a1[1858]); /*0x65e922*/
  }
  if ( a1[1859] ) /*0x65e928*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e931*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e936*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e945*/
    fmt::BasicWriter<char>::operator<<(v13, 543); /*0x65e955*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e95b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e960*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e96f*/
    fmt::BasicWriter<char>::operator<<(v13, a1[1859]); /*0x65e981*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x65e98c*/
  *(_OWORD *)a2 = 0; /*0x65e995*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65e998*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65e99c*/
  v8 = -1; /*0x65e9a0*/
  do /*0x65e9b3*/
    ++v8; /*0x65e9b0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x65e9b3*/
  sub_3C230(a2); /*0x65e9c0*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65e9cb*/
  return a2; /*0x65e9d4*/
}

// [3/3] Address: 0x65ea00
// Method: PlayerControlGameObject::customObjectSetup
bool __fastcall PlayerControlGameObject_customObjectSetup(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  int v15; // eax
  const char *v16; // rcx
  const char *v17; // rcx

  EffectGameObject_customObjectSetup((__int64)a1, a2, a3); /*0x65ea1e*/
  v6 = 0; /*0x65ea26*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1104LL) ) /*0x65ea28*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 4416LL); /*0x65ea38*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4440LL) > 0xFu ) /*0x65ea44*/
      v8 = *(const char **)v8; /*0x65ea46*/
    v7 = atoi(v8); /*0x65ea49*/
  }
  else
  {
    v7 = 0; /*0x65ea31*/
  }
  a1[1700] = v7 != 0; /*0x65ea54*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1600LL) ) /*0x65ea5d*/
  {
    v10 = (const char *)(*(_QWORD *)a2 + 6400LL); /*0x65ea6d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6424LL) > 0xFu ) /*0x65ea79*/
      v10 = *(const char **)v10; /*0x65ea7b*/
    v9 = atoi(v10); /*0x65ea7e*/
  }
  else
  {
    v9 = 0; /*0x65ea66*/
  }
  a1[1701] = v9 != 0; /*0x65ea89*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4320LL) ) /*0x65ea92*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 17280LL); /*0x65eaa2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17304LL) > 0xFu ) /*0x65eaae*/
      v12 = *(const char **)v12; /*0x65eab0*/
    v11 = atoi(v12); /*0x65eab3*/
  }
  else
  {
    v11 = 0; /*0x65ea9b*/
  }
  a1[1856] = v11 != 0; /*0x65eabe*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4328LL) ) /*0x65eac7*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 17312LL); /*0x65ead7*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17336LL) > 0xFu ) /*0x65eae3*/
      v14 = *(const char **)v14; /*0x65eae5*/
    v13 = atoi(v14); /*0x65eae8*/
  }
  else
  {
    v13 = 0; /*0x65ead0*/
  }
  a1[1857] = v13 != 0; /*0x65eaf3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4336LL) ) /*0x65eafc*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 17344LL); /*0x65eb0c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17368LL) > 0xFu ) /*0x65eb18*/
      v16 = *(const char **)v16; /*0x65eb1a*/
    v15 = atoi(v16); /*0x65eb1d*/
  }
  else
  {
    v15 = 0; /*0x65eb05*/
  }
  a1[1858] = v15 != 0; /*0x65eb28*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4344LL) ) /*0x65eb31*/
  {
    v17 = (const char *)(*(_QWORD *)a2 + 17376LL); /*0x65eb3d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17400LL) > 0xFu ) /*0x65eb49*/
      v17 = *(const char **)v17; /*0x65eb4b*/
    v6 = atoi(v17); /*0x65eb54*/
  }
  a1[1859] = v6 != 0; /*0x65eb65*/
  return v6 != 0; /*0x65eb5d*/
}
