#include <Geode/binding/TeleportPortalObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x4fd4f0
// Method: TeleportPortalObject::setRotation2
// attributes: thunk
void __fastcall TeleportPortalObject_setRotation2(__int64 a1, float a2)
{
  GameObject_setRotation(a1, a2); /*0x4fd4f0*/
}

// [2/13] Address: 0x4fefb0
// Method: TeleportPortalObject::create
// Hidden C++ exception states: #wind=1
_DWORD *__fastcall TeleportPortalObject_create(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  cocos2d::CCObject *v9; // rbx
  void *v11; // [rsp+40h] [rbp+18h]

  v4 = a2; /*0x4fefc4*/
  v6 = (_DWORD *)cocos2d::CCScene::create(a1, a2, a3, a4); /*0x4fefd0*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v7) + 232) = v6; /*0x4fefd9*/
  v11 = operator new(0x3D20u); /*0x4fefea*/
  v8 = sub_4FE5D0(v11); /*0x4feff2*/
  v9 = (cocos2d::CCObject *)v8; /*0x4feff7*/
  if ( v8 ) /*0x4feffd*/
  {
    if ( (unsigned __int8)sub_4FF060(v8, a1, v4) ) /*0x4ff009*/
    {
      cocos2d::CCObject::autorelease(v9); /*0x4ff015*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x4ff025*/
      v9 = 0; /*0x4ff028*/
    }
  }
  (*(void (__fastcall **)(_DWORD *, cocos2d::CCObject *))(*(_QWORD *)v6 + 464LL))(v6, v9); /*0x4ff033*/
  v6[7] = 5; /*0x4ff039*/
  return v6; /*0x4ff043*/
}

// [3/13] Address: 0x6331a0
// Method: TeleportPortalObject::~TeleportPortalObject
_QWORD *__fastcall TeleportPortalObject__dtor_TeleportPortalObject(_QWORD *Block, char a2)
{
  *Block = &EffectGameObject::`vftable'; /*0x6331b3*/
  Block[40] = &EffectGameObject::`vftable'; /*0x6331c0*/
  Block[43] = &EffectGameObject::`vftable'; /*0x6331ce*/
  TextGameObject__dtor_TextGameObject(Block); /*0x6331d5*/
  if ( (a2 & 1) != 0 ) /*0x6331dd*/
    j_j_free(Block); /*0x6331e7*/
  return Block; /*0x6331ec*/
}

// [4/13] Address: 0x64ea30
// Method: TeleportPortalObject::setStartPos
__int64 __fastcall TeleportPortalObject_setStartPos(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  float *v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx
  float v6; // xmm6_4
  float TeleportXOff; // xmm0_4
  __int64 v8; // rbx
  const struct cocos2d::CCPoint *v9; // rax
  float *v10; // rax
  float v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  char v13; // [rsp+58h] [rbp+20h] BYREF

  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, a2); /*0x64ea3e*/
  if ( *(_BYTE *)(a1 + 1872) ) /*0x64ea44*/
    v11 = *(float *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 1664LL))(a1, &v12); /*0x64ea62*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, (const struct cocos2d::CCPoint *)&v11); /*0x64ea72*/
  result = GameObject_setStartPos(a1, v3); /*0x64ea7e*/
  v5 = *(_QWORD *)(a1 + 1864); /*0x64ea83*/
  if ( v5 ) /*0x64ea8d*/
  {
    v6 = *(float *)((*(__int64 (**)(void))(*(_QWORD *)v5 + 200LL))() + 4); /*0x64eaa2*/
    TeleportXOff = TeleportPortalObject_getTeleportXOff(a1, 0); /*0x64eaa7*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, TeleportXOff + v11, v6); /*0x64eabd*/
    v8 = *(_QWORD *)(a1 + 1864); /*0x64eac3*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, v9); /*0x64ead2*/
    return GameObject_setStartPos(v8, v10); /*0x64eade*/
  }
  return result; /*0x64eae8*/
}

// [5/13] Address: 0x64eaf0
// Method: TeleportPortalObject::setPosition
void __fastcall TeleportPortalObject_setPosition(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  __int64 v3; // rcx
  float v4; // xmm6_4
  float TeleportXOff; // xmm0_4
  float *v6; // rax
  float v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, a2); /*0x64eafe*/
  if ( *(_BYTE *)(a1 + 1872) ) /*0x64eb04*/
    v7 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x64eb1d*/
  GameObject_setPosition(a1, &v7); /*0x64eb2b*/
  v3 = *(_QWORD *)(a1 + 1864); /*0x64eb30*/
  if ( v3 ) /*0x64eb3a*/
  {
    v4 = *(float *)((*(__int64 (**)(void))(*(_QWORD *)v3 + 200LL))() + 4); /*0x64eb4f*/
    TeleportXOff = TeleportPortalObject_getTeleportXOff(a1, 0); /*0x64eb54*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, TeleportXOff + v7, v4); /*0x64eb6a*/
    GameObject_setPosition(*(_QWORD *)(a1 + 1864), v6); /*0x64eb7a*/
  }
}

// [6/13] Address: 0x64eb90
// Method: TeleportPortalObject::getTeleportXOff
__m128 __fastcall TeleportPortalObject_getTeleportXOff(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __m128 v8; // xmm0
  float v9; // [rsp+38h] [rbp+10h] BYREF
  float v10; // [rsp+40h] [rbp+18h] BYREF
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v2 = a2; /*0x64eb9a*/
  if ( a2 || (v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL))(a1)) != 0 ) /*0x64ebb4*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, -10.0, 0.0); /*0x64ebd9*/
    cocos2d::CCNode::convertToWorldSpace(a1, &v9, v5); /*0x64ebea*/
    v6 = cocos2d::CCNode::convertToNodeSpace(v2, &v11, &v9); /*0x64ebfd*/
    cocos2d::CCPoint::operator=(&v9, v6); /*0x64ec0b*/
    cocos2d::CCNode::convertToWorldSpace(a1, &v10, &unk_905DD8); /*0x64ec20*/
    v7 = cocos2d::CCNode::convertToNodeSpace(v2, &v11, &v10); /*0x64ec33*/
    cocos2d::CCPoint::operator=(&v10, v7); /*0x64ec41*/
    v8 = (__m128)LODWORD(v9); /*0x64ec47*/
    v8.m128_f32[0] = v9 - v10; /*0x64ec4d*/
    return _mm_xor_ps(_mm_and_ps(v8, (__m128)xmmword_831640), (__m128)xmmword_831670); /*0x64ec5f*/
  }
  else
  {
    return (__m128)0xC1200000; /*0x64ebb6*/
  }
}

// [7/13] Address: 0x64ec70
// Method: TeleportPortalObject::setRotation
// Hidden C++ exception states: #wind=1
void __fastcall TeleportPortalObject_setRotation(__int64 a1, float a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  void *v5; // [rsp+50h] [rbp+18h]

  v3 = qword_905FD0; /*0x64ec81*/
  if ( !qword_905FD0 ) /*0x64ec8b*/
  {
    v5 = operator new(0x6E8u); /*0x64ec97*/
    qword_905FD0 = sub_2723A0(v5); /*0x64eca5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x64ecb6*/
    v3 = qword_905FD0; /*0x64ecb8*/
  }
  if ( !*(_BYTE *)(v3 + 738) || *(_DWORD *)(a1 + 1036) != 749 ) /*0x64ecd2*/
  {
    GameObject_setRotation(a1, a2); /*0x64ecda*/
    v4 = *(_QWORD *)(a1 + 1864); /*0x64ecdf*/
    if ( v4 ) /*0x64ece9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 1712LL))(v4); /*0x64ecf1*/
  }
}

// [8/13] Address: 0x64ed10
// Method: TeleportPortalObject::addToGroup2
// attributes: thunk
__int64 __fastcall TeleportPortalObject_addToGroup2(__int64 a1, int a2)
{
  return GameObject_addToGroup(a1, a2);
}

// [9/13] Address: 0x64ed20
// Method: TeleportPortalObject::removeFromGroup2
// attributes: thunk
__int64 __fastcall TeleportPortalObject_removeFromGroup2(__int64 a1, int a2)
{
  return GameObject_removeFromGroup(a1, a2);
}

// [10/13] Address: 0x64ed30
// Method: TeleportPortalObject::addToGroup
// Hidden C++ exception states: #wind=1
__int64 __fastcall TeleportPortalObject_addToGroup(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  void *v8; // [rsp+40h] [rbp+18h]

  v4 = qword_905FD0; /*0x64ed44*/
  if ( !qword_905FD0 ) /*0x64ed4e*/
  {
    v8 = operator new(0x6E8u); /*0x64ed5a*/
    qword_905FD0 = sub_2723A0(v8); /*0x64ed68*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x64ed79*/
    v4 = qword_905FD0; /*0x64ed7b*/
  }
  if ( *(_BYTE *)(v4 + 738) && *(_DWORD *)(a1 + 1036) == 749 ) /*0x64ed95*/
    return 0; /*0x64ed97*/
  result = GameObject_addToGroup(a1, a2); /*0x64edae*/
  v6 = result; /*0x64edb3*/
  v7 = *(_QWORD *)(a1 + 1864); /*0x64edb5*/
  if ( v7 ) /*0x64edbf*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 1720LL))(v7, a2); /*0x64edcd*/
    return v6; /*0x64edd0*/
  }
  return result; /*0x64ed99*/
}

// [11/13] Address: 0x64edf0
// Method: TeleportPortalObject::removeFromGroup
// Hidden C++ exception states: #wind=1
__int64 __fastcall TeleportPortalObject_removeFromGroup(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // [rsp+40h] [rbp+18h]

  result = qword_905FD0; /*0x64edff*/
  if ( !qword_905FD0 ) /*0x64ee09*/
  {
    v6 = operator new(0x6E8u); /*0x64ee15*/
    qword_905FD0 = sub_2723A0(v6); /*0x64ee23*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x64ee34*/
    result = qword_905FD0; /*0x64ee36*/
  }
  if ( !*(_BYTE *)(result + 738) || *(_DWORD *)(a1 + 1036) != 749 ) /*0x64ee50*/
  {
    result = GameObject_removeFromGroup(a1, a2); /*0x64ee57*/
    v5 = *(_QWORD *)(a1 + 1864); /*0x64ee5c*/
    if ( v5 ) /*0x64ee66*/
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 1728LL))(v5, a2); /*0x64ee6d*/
  }
  return result; /*0x64ee73*/
}

// [12/13] Address: 0x64ee80
// Method: TeleportPortalObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall TeleportPortalObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  v11[0] = a2; /*0x64eebd*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x64eeca*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x64eede*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x64eef5*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64ef04*/
  sub_3C310(v13); /*0x64ef12*/
  if ( *(_QWORD *)(a1 + 1864) ) /*0x64ef1e*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64ef2b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64ef30*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64ef3f*/
    fmt::BasicWriter<char>::operator<<(v12, 54); /*0x64ef4f*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64ef55*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64ef5a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64ef69*/
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 1864) + 1664LL))(*(_QWORD *)(a1 + 1864), v11); /*0x64ef7e*/
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 1664LL))(a1, &v10); /*0x64ef92*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x64efaa*/
  }
  if ( *(_BYTE *)(a1 + 1880) ) /*0x64efb0*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64efb9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64efbe*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64efcd*/
    fmt::BasicWriter<char>::operator<<(v12, 55); /*0x64efdd*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64efe3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64efe8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64eff7*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1880)); /*0x64f009*/
  }
  if ( *(_DWORD *)(a1 + 1480) ) /*0x64f00f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f018*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f01d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f02c*/
    fmt::BasicWriter<char>::operator<<(v12, 51); /*0x64f03c*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f042*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f047*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f056*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1480)); /*0x64f067*/
  }
  if ( *(_BYTE *)(a1 + 1881) ) /*0x64f06d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f076*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f07b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f08a*/
    fmt::BasicWriter<char>::operator<<(v12, 345); /*0x64f09a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f0a0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f0a5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f0b4*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1881)); /*0x64f0c6*/
  }
  if ( *(float *)(a1 + 1884) != 0.0 ) /*0x64f0dc*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f0de*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f0e3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f0f2*/
    fmt::BasicWriter<char>::operator<<(v12, 346); /*0x64f102*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f108*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f10d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f11c*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x64f132*/
  }
  if ( *(_BYTE *)(a1 + 1888) ) /*0x64f138*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f141*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f146*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f155*/
    fmt::BasicWriter<char>::operator<<(v12, 347); /*0x64f165*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f16b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f170*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f17f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1888)); /*0x64f191*/
  }
  if ( *(float *)(a1 + 1892) != 0.0 ) /*0x64f1a4*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f1a6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f1ab*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f1ba*/
    fmt::BasicWriter<char>::operator<<(v12, 350); /*0x64f1ca*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f1d0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f1d5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f1e4*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x64f1fa*/
  }
  if ( *(float *)(a1 + 1896) != 0.0 ) /*0x64f20d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f20f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f214*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f223*/
    fmt::BasicWriter<char>::operator<<(v12, 348); /*0x64f233*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f239*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f23e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f24d*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x64f263*/
  }
  if ( *(float *)(a1 + 1900) != 0.0 ) /*0x64f276*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f278*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f27d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f28c*/
    fmt::BasicWriter<char>::operator<<(v12, 349); /*0x64f29c*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f2a2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f2a7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f2b6*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x64f2cc*/
  }
  if ( *(_BYTE *)(a1 + 1904) ) /*0x64f2d2*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f2db*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f2e0*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f2ef*/
    fmt::BasicWriter<char>::operator<<(v12, 351); /*0x64f2ff*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f305*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f30a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f319*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1904)); /*0x64f32b*/
  }
  if ( *(_BYTE *)(a1 + 1905) ) /*0x64f331*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f33a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f33f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f34e*/
    fmt::BasicWriter<char>::operator<<(v12, 352); /*0x64f35e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f364*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f369*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f378*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1905)); /*0x64f38a*/
  }
  if ( *(_BYTE *)(a1 + 1906) ) /*0x64f390*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f399*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f39e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f3ad*/
    fmt::BasicWriter<char>::operator<<(v12, 353); /*0x64f3bd*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f3c3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f3c8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f3d7*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1906)); /*0x64f3e9*/
  }
  if ( *(_DWORD *)(a1 + 1908) ) /*0x64f3ef*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f3f8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f3fd*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f40c*/
    fmt::BasicWriter<char>::operator<<(v12, 354); /*0x64f41c*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f422*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f427*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f436*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1908)); /*0x64f447*/
  }
  if ( *(_BYTE *)(a1 + 1912) ) /*0x64f44d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f456*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f45b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f46a*/
    fmt::BasicWriter<char>::operator<<(v12, 443); /*0x64f47a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f480*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f485*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f494*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1912)); /*0x64f4a6*/
  }
  if ( *(_BYTE *)(a1 + 1913) ) /*0x64f4ac*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f4b5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f4ba*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f4c9*/
    fmt::BasicWriter<char>::operator<<(v12, 464); /*0x64f4d9*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f4df*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f4e4*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f4f3*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1913)); /*0x64f505*/
  }
  if ( *(_BYTE *)(a1 + 1914) ) /*0x64f50b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f514*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f519*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f528*/
    fmt::BasicWriter<char>::operator<<(v12, 510); /*0x64f538*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f53e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f543*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f552*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1914)); /*0x64f564*/
  }
  if ( *(_BYTE *)(a1 + 1915) ) /*0x64f56a*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f573*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f578*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f587*/
    fmt::BasicWriter<char>::operator<<(v12, 591); /*0x64f597*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64f59d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64f5a2*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x64f5b1*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1915)); /*0x64f5c3*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x64f5ce*/
  *(_OWORD *)a2 = 0; /*0x64f5d7*/
  *(_QWORD *)(a2 + 16) = 0; /*0x64f5da*/
  *(_QWORD *)(a2 + 24) = 0; /*0x64f5de*/
  v8 = -1; /*0x64f5e2*/
  do /*0x64f5f3*/
    ++v8; /*0x64f5f0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x64f5f3*/
  sub_3C230(a2); /*0x64f600*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x64f60b*/
  return a2; /*0x64f614*/
}

// [13/13] Address: 0x64f650
// Method: TeleportPortalObject::customObjectSetup
char __fastcall TeleportPortalObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  float v7; // xmm6_4
  float v8; // xmm1_4
  const char *v9; // rcx
  float v10; // xmm7_4
  int v11; // ebp
  int v12; // eax
  const char *v13; // rcx
  int v14; // eax
  const char *v15; // rcx
  int v16; // eax
  const char *v17; // rcx
  float v18; // xmm1_4
  const char *v19; // rcx
  float v20; // xmm7_4
  int v21; // eax
  const char *v22; // rcx
  float v23; // xmm1_4
  const char *v24; // rcx
  float v25; // xmm7_4
  float v26; // xmm1_4
  const char *v27; // rcx
  float v28; // xmm7_4
  const char *v29; // rcx
  float v30; // xmm7_4
  int v31; // eax
  const char *v32; // rcx
  int v33; // eax
  const char *v34; // rcx
  int v35; // eax
  const char *v36; // rcx
  int v37; // eax
  const char *v38; // rcx
  int v39; // eax
  const char *v40; // rcx
  int v41; // eax
  const char *v42; // rcx
  int v43; // eax
  const char *v44; // rcx
  const char *v45; // rcx

  result = EffectGameObject_customObjectSetup(a1, a2, a3); /*0x64f668*/
  if ( *(_DWORD *)(a1 + 1036) == 747 /*0x64f68b*/
    || *(_DWORD *)(a1 + 1036) == 2902
    || *(_DWORD *)(a1 + 1036) == 3022
    || *(_DWORD *)(a1 + 1036) == 3027 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a3 + 432LL) ) /*0x64f6a3*/
    {
      v9 = (const char *)(*(_QWORD *)a2 + 1728LL); /*0x64f6d6*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1752LL) > 0xFu ) /*0x64f6e2*/
        v9 = *(const char **)v9; /*0x64f6e4*/
      v10 = atof(v9); /*0x64f6f0*/
      v7 = 0.0; /*0x64f6fd*/
      if ( isnan(v10) ) /*0x64f6f7*/
        v8 = 0.0; /*0x64f704*/
      else
        v8 = fminf(1000000000.0, fmaxf(-1000000000.0, v10)); /*0x64f715*/
    }
    else
    {
      v7 = 0.0; /*0x64f6cb*/
      v8 = 0.0; /*0x64f6ce*/
    }
    *(float *)(a1 + 1876) = v8; /*0x64f719*/
    v11 = 0; /*0x64f721*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 440LL) ) /*0x64f726*/
    {
      v13 = (const char *)(*(_QWORD *)a2 + 1760LL); /*0x64f736*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1784LL) > 0xFu ) /*0x64f742*/
        v13 = *(const char **)v13; /*0x64f744*/
      v12 = atoi(v13); /*0x64f747*/
    }
    else
    {
      v12 = 0; /*0x64f72f*/
    }
    *(_BYTE *)(a1 + 1880) = v12 != 0; /*0x64f752*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x64f75b*/
    {
      v15 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x64f76b*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x64f777*/
        v15 = *(const char **)v15; /*0x64f779*/
      v14 = atoi(v15); /*0x64f77c*/
    }
    else
    {
      v14 = 0; /*0x64f764*/
    }
    *(_DWORD *)(a1 + 1480) = v14; /*0x64f782*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2760LL) ) /*0x64f78b*/
    {
      v17 = (const char *)(*(_QWORD *)a2 + 11040LL); /*0x64f79b*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11064LL) > 0xFu ) /*0x64f7a7*/
        v17 = *(const char **)v17; /*0x64f7a9*/
      v16 = atoi(v17); /*0x64f7ac*/
    }
    else
    {
      v16 = 0; /*0x64f794*/
    }
    *(_BYTE *)(a1 + 1881) = v16 != 0; /*0x64f7b7*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2768LL) ) /*0x64f7c0*/
    {
      v19 = (const char *)(*(_QWORD *)a2 + 11072LL); /*0x64f7d1*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11096LL) > 0xFu ) /*0x64f7dd*/
        v19 = *(const char **)v19; /*0x64f7df*/
      v20 = atof(v19); /*0x64f7eb*/
      if ( isnan(v20) ) /*0x64f7f2*/
        v18 = 0.0; /*0x64f7fc*/
      else
        v18 = fminf(1000000000.0, fmaxf(-1000000000.0, v20)); /*0x64f80d*/
    }
    else
    {
      v18 = 0.0; /*0x64f7c9*/
    }
    *(float *)(a1 + 1884) = v18; /*0x64f811*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2776LL) ) /*0x64f81c*/
    {
      v22 = (const char *)(*(_QWORD *)a2 + 11104LL); /*0x64f82c*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11128LL) > 0xFu ) /*0x64f838*/
        v22 = *(const char **)v22; /*0x64f83a*/
      v21 = atoi(v22); /*0x64f83d*/
    }
    else
    {
      v21 = 0; /*0x64f825*/
    }
    *(_BYTE *)(a1 + 1888) = v21 != 0; /*0x64f848*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2800LL) ) /*0x64f851*/
    {
      v24 = (const char *)(*(_QWORD *)a2 + 11200LL); /*0x64f862*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11224LL) > 0xFu ) /*0x64f86e*/
        v24 = *(const char **)v24; /*0x64f870*/
      v25 = atof(v24); /*0x64f87c*/
      if ( isnan(v25) ) /*0x64f883*/
        v23 = 0.0; /*0x64f88d*/
      else
        v23 = fminf(1000000000.0, fmaxf(-1000000000.0, v25)); /*0x64f89e*/
    }
    else
    {
      v23 = 0.0; /*0x64f85a*/
    }
    *(float *)(a1 + 1892) = v23; /*0x64f8a2*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2784LL) ) /*0x64f8ad*/
    {
      v27 = (const char *)(*(_QWORD *)a2 + 11136LL); /*0x64f8be*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11160LL) > 0xFu ) /*0x64f8ca*/
        v27 = *(const char **)v27; /*0x64f8cc*/
      v28 = atof(v27); /*0x64f8d8*/
      if ( isnan(v28) ) /*0x64f8df*/
        v26 = 0.0; /*0x64f8e9*/
      else
        v26 = fminf(1000000000.0, fmaxf(-1000000000.0, v28)); /*0x64f8fa*/
    }
    else
    {
      v26 = 0.0; /*0x64f8b6*/
    }
    *(float *)(a1 + 1896) = v26; /*0x64f8fe*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2792LL) ) /*0x64f909*/
    {
      v29 = (const char *)(*(_QWORD *)a2 + 11168LL); /*0x64f915*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11192LL) > 0xFu ) /*0x64f921*/
        v29 = *(const char **)v29; /*0x64f923*/
      v30 = atof(v29); /*0x64f92f*/
      if ( !isnan(v30) ) /*0x64f936*/
        v7 = fminf(1000000000.0, fmaxf(-1000000000.0, v30)); /*0x64f949*/
    }
    *(float *)(a1 + 1900) = v7; /*0x64f95f*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2808LL) ) /*0x64f96f*/
    {
      v32 = (const char *)(*(_QWORD *)a2 + 11232LL); /*0x64f97f*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11256LL) > 0xFu ) /*0x64f98b*/
        v32 = *(const char **)v32; /*0x64f98d*/
      v31 = atoi(v32); /*0x64f990*/
    }
    else
    {
      v31 = 0; /*0x64f978*/
    }
    *(_BYTE *)(a1 + 1904) = v31 != 0; /*0x64f99b*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2816LL) ) /*0x64f9a4*/
    {
      v34 = (const char *)(*(_QWORD *)a2 + 11264LL); /*0x64f9b4*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11288LL) > 0xFu ) /*0x64f9c0*/
        v34 = *(const char **)v34; /*0x64f9c2*/
      v33 = atoi(v34); /*0x64f9c5*/
    }
    else
    {
      v33 = 0; /*0x64f9ad*/
    }
    *(_BYTE *)(a1 + 1905) = v33 != 0; /*0x64f9d0*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2824LL) ) /*0x64f9d9*/
    {
      v36 = (const char *)(*(_QWORD *)a2 + 11296LL); /*0x64f9e9*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11320LL) > 0xFu ) /*0x64f9f5*/
        v36 = *(const char **)v36; /*0x64f9f7*/
      v35 = atoi(v36); /*0x64f9fa*/
    }
    else
    {
      v35 = 0; /*0x64f9e2*/
    }
    *(_BYTE *)(a1 + 1906) = v35 != 0; /*0x64fa05*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 2832LL) ) /*0x64fa0e*/
    {
      v38 = (const char *)(*(_QWORD *)a2 + 11328LL); /*0x64fa1e*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 11352LL) > 0xFu ) /*0x64fa2a*/
        v38 = *(const char **)v38; /*0x64fa2c*/
      v37 = atoi(v38); /*0x64fa2f*/
    }
    else
    {
      v37 = 0; /*0x64fa17*/
    }
    *(_DWORD *)(a1 + 1908) = v37; /*0x64fa35*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3544LL) ) /*0x64fa3e*/
    {
      v40 = (const char *)(*(_QWORD *)a2 + 14176LL); /*0x64fa4e*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 14200LL) > 0xFu ) /*0x64fa5a*/
        v40 = *(const char **)v40; /*0x64fa5c*/
      v39 = atoi(v40); /*0x64fa5f*/
    }
    else
    {
      v39 = 0; /*0x64fa47*/
    }
    *(_BYTE *)(a1 + 1912) = v39 != 0; /*0x64fa6a*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3712LL) ) /*0x64fa73*/
    {
      v42 = (const char *)(*(_QWORD *)a2 + 14848LL); /*0x64fa83*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 14872LL) > 0xFu ) /*0x64fa8f*/
        v42 = *(const char **)v42; /*0x64fa91*/
      v41 = atoi(v42); /*0x64fa94*/
    }
    else
    {
      v41 = 0; /*0x64fa7c*/
    }
    *(_BYTE *)(a1 + 1913) = v41 != 0; /*0x64fa9f*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 4080LL) ) /*0x64faa8*/
    {
      v44 = (const char *)(*(_QWORD *)a2 + 16320LL); /*0x64fab8*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 16344LL) > 0xFu ) /*0x64fac4*/
        v44 = *(const char **)v44; /*0x64fac6*/
      v43 = atoi(v44); /*0x64fac9*/
    }
    else
    {
      v43 = 0; /*0x64fab1*/
    }
    *(_BYTE *)(a1 + 1914) = v43 != 0; /*0x64fad4*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 4728LL) ) /*0x64fadd*/
    {
      v45 = (const char *)(*(_QWORD *)a2 + 18912LL); /*0x64fae9*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 18936LL) > 0xFu ) /*0x64faf5*/
        v45 = *(const char **)v45; /*0x64faf7*/
      v11 = atoi(v45); /*0x64fb00*/
    }
    *(_BYTE *)(a1 + 1915) = v11 != 0; /*0x64fb0c*/
    return v11 != 0; /*0x64fb09*/
  }
  return result; /*0x64fb12*/
}
