#include <Geode/binding/ObjectControlGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x632c40
// Method: ObjectControlGameObject::~ObjectControlGameObject
cocos2d::CCSprite *__fastcall ObjectControlGameObject__dtor_ObjectControlGameObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x632c53*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x632c60*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x632c6e*/
  TextGameObject__dtor_TextGameObject(Block); /*0x632c75*/
  if ( (a2 & 1) != 0 ) /*0x632c7d*/
    j_j_free(Block); /*0x632c87*/
  return Block; /*0x632c8c*/
}

// [2/4] Address: 0x65eb80
// Method: ObjectControlGameObject::init
char __fastcall ObjectControlGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x65eb8d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eCollisionStateBtn_001.png") ) /*0x65eb97*/
    return 0; /*0x65ebe3*/
  sub_287800(a1); /*0x65eba4*/
  *(_BYTE *)(a1 + 313) = 0; /*0x65eba9*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x65ebb2*/
  *(_WORD *)(a1 + 1465) = -1; /*0x65ebbc*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x65ebc5*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x65ebcc*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x65ebd6*/
  return 1; /*0x65ebdd*/
}

// [3/4] Address: 0x65ebf0
// Method: ObjectControlGameObject::getSaveString
__int64 __fastcall ObjectControlGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-288h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-270h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-260h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-238h] BYREF

  *(_QWORD *)&v10 = a2; /*0x65ec1a*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65ec26*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x65ec38*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x65ec4f*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65ec5e*/
  sub_3C310(v12); /*0x65ec6a*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x65ec6f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65ec7e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65ec83*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65ec92*/
    fmt::BasicWriter<char>::operator<<(v13, 51); /*0x65eca2*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65eca8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65ecad*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65ecbc*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x65eccd*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x65ecd8*/
  *(_OWORD *)a2 = 0; /*0x65ece1*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65ece4*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65ece8*/
  v8 = -1; /*0x65ecec*/
  do /*0x65ecf6*/
    ++v8; /*0x65ecf3*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x65ecf6*/
  sub_3C230(a2); /*0x65ed03*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65ed0e*/
  return a2; /*0x65ed17*/
}

// [4/4] Address: 0x65ed40
// Method: ObjectControlGameObject::customObjectSetup
int __fastcall ObjectControlGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // edx
  const char *v8; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65ed58*/
  v6 = *(_QWORD *)a3; /*0x65ed5d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x65ed60*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x65ed85*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65ed91*/
      v8 = *(const char **)v8; /*0x65ed93*/
    LODWORD(v6) = atoi(v8); /*0x65ed96*/
    if ( (int)v6 < 0 ) /*0x65eda0*/
      LODWORD(v6) = 0; /*0x65eda0*/
    v7 = v6; /*0x65eda3*/
    if ( (int)v6 > 9999 ) /*0x65edaa*/
    {
      *(_DWORD *)(a1 + 1480) = 9999; /*0x65edb6*/
      return v6; /*0x65edb6*/
    }
  }
  else
  {
    v7 = 0; /*0x65ed6a*/
  }
  *(_DWORD *)(a1 + 1480) = v7; /*0x65ed6c*/
  return v6; /*0x65ed72*/
}
