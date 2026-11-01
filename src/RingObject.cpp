#include <Geode/binding/RingObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x633070
// Method: RingObject::~RingObject
_QWORD *__fastcall RingObject__dtor_RingObject(_QWORD *Block, char a2)
{
  *Block = &EffectGameObject::`vftable'; /*0x633083*/
  Block[40] = &EffectGameObject::`vftable'; /*0x633090*/
  Block[43] = &EffectGameObject::`vftable'; /*0x63309e*/
  TextGameObject__dtor_TextGameObject(Block); /*0x6330a5*/
  if ( (a2 & 1) != 0 ) /*0x6330ad*/
    j_j_free(Block); /*0x6330b7*/
  return Block; /*0x6330bc*/
}

// [2/11] Address: 0x63eb80
// Method: RingObject::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall RingObject_create(const char *a1)
{
  _QWORD *v2; // rdi

  v2 = operator new(0x748u); /*0x63eb97*/
  EffectGameObject_EffectGameObject((__int64)v2); /*0x63eba2*/
  *v2 = &RingObject::`vftable'; /*0x63ebae*/
  v2[40] = &RingObject::`vftable'; /*0x63ebb8*/
  v2[43] = &RingObject::`vftable'; /*0x63ebc6*/
  *((_WORD *)v2 + 928) = 0; /*0x63ebcd*/
  if ( EffectGameObject_init((__int64)v2, a1) ) /*0x63ebdc*/
  {
    *((_BYTE *)v2 + 1081) = 1; /*0x63ebe8*/
    *((_BYTE *)v2 + 1488) = 1; /*0x63ebef*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x63ebf6*/
    return v2; /*0x63ebfc*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x63ec12*/
    return 0; /*0x63ec15*/
  }
}

// [3/11] Address: 0x63ec30
// Method: RingObject::triggerActivated
__int64 __fastcall RingObject_triggerActivated(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1680LL))(a1);
}

// [4/11] Address: 0x63ec40
// Method: RingObject::powerOnObject
// Hidden C++ exception states: #wind=2
__int64 __fastcall RingObject_powerOnObject(__int64 a1, int a2)
{
  __int64 result; // rax
  void *v4; // [rsp+30h] [rbp+8h]

  result = *(unsigned __int8 *)(a1 + 760); /*0x63ec49*/
  *(_BYTE *)(a1 + 1360) = 1; /*0x63ec50*/
  *(_DWORD *)(a1 + 1364) = a2; /*0x63ec57*/
  *(_BYTE *)(a1 + 760) = 1; /*0x63ec5d*/
  if ( !(_BYTE)result ) /*0x63ec66*/
  {
    result = qword_905FD0; /*0x63ec68*/
    if ( !qword_905FD0 ) /*0x63ec72*/
    {
      v4 = operator new(0x6E8u); /*0x63ec7e*/
      qword_905FD0 = sub_2723A0(v4); /*0x63ec8c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x63ec9d*/
      result = qword_905FD0; /*0x63ec9f*/
    }
    if ( !*(_BYTE *)(result + 957) && !*(_BYTE *)(result + 738) && !*(_BYTE *)(a1 + 1052) ) /*0x63ecb8*/
      return RingObject_spawnCircle(a1); /*0x63ecc9*/
  }
  return result; /*0x63ecc4*/
}

// [5/11] Address: 0x63ece0
// Method: RingObject::spawnCircle
// Hidden C++ exception states: #wind=4
void __fastcall RingObject_spawnCircle(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  cocos2d::CCObject *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // [rsp+48h] [rbp+10h]
  void *v16; // [rsp+48h] [rbp+10h]
  void *v17; // [rsp+48h] [rbp+10h]

  v4 = qword_905FD0; /*0x63ecf2*/
  if ( !qword_905FD0 ) /*0x63ecfc*/
  {
    v15 = operator new(0x6E8u); /*0x63ed08*/
    qword_905FD0 = sub_2723A0(v15); /*0x63ed16*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x63ed27*/
    v4 = qword_905FD0; /*0x63ed29*/
  }
  if ( *(_QWORD *)(v4 + 560) && !*(_BYTE *)(a1 + 1052) && *(_DWORD *)(a1 + 1036) != 3643 ) /*0x63ed55*/
  {
    v5 = CCCircleWave_create(a1, a2, a3, 0, 1); /*0x63ed80*/
    v6 = *(_QWORD *)v5; /*0x63ed83*/
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x63ed93*/
    (*(void (__fastcall **)(__int64, __int64))(v6 + 184))(v5, v7); /*0x63ed9b*/
    v8 = qword_905FD0; /*0x63eda1*/
    if ( !qword_905FD0 ) /*0x63edab*/
    {
      v16 = operator new(0x6E8u); /*0x63edb7*/
      qword_905FD0 = sub_2723A0(v16); /*0x63edc5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x63edd6*/
      v8 = qword_905FD0; /*0x63edd8*/
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(v8 + 560) + 4360LL) + 456LL))( /*0x63edf6*/
      *(_QWORD *)(*(_QWORD *)(v8 + 560) + 4360LL),
      v5,
      0);
    *(_DWORD *)(v5 + 352) = 1; /*0x63edfc*/
    v9 = *(cocos2d::CCObject **)(v5 + 320); /*0x63ee06*/
    if ( v9 ) /*0x63ee10*/
      cocos2d::CCObject::release(v9); /*0x63ee12*/
    *(_QWORD *)(v5 + 320) = a1; /*0x63ee18*/
    cocos2d::CCObject::retain((cocos2d::CCObject *)a1); /*0x63ee22*/
    cocos2d::CCNode::unschedule(v5, CCCircleWave_updatePosition); /*0x63ee32*/
    cocos2d::CCNode::schedule(v5, CCCircleWave_updatePosition); /*0x63ee42*/
    v10 = *(_QWORD *)v5; /*0x63ee48*/
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 320) + 200LL))(*(_QWORD *)(v5 + 320)); /*0x63ee55*/
    (*(void (__fastcall **)(__int64, __int64))(v10 + 184))(v5, v11); /*0x63ee61*/
    v12 = qword_905FD0; /*0x63ee67*/
    if ( !qword_905FD0 ) /*0x63ee71*/
    {
      v17 = operator new(0x6E8u); /*0x63ee7d*/
      qword_905FD0 = sub_2723A0(v17); /*0x63ee8b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x63ee9c*/
      v12 = qword_905FD0; /*0x63ee9e*/
    }
    v13 = *(_QWORD *)(v12 + 560); /*0x63eea5*/
    v14 = v13 + 14712; /*0x63eeac*/
    if ( !v13 ) /*0x63eeb9*/
      v14 = 0; /*0x63eeb9*/
    *(_QWORD *)(v5 + 368) = v14; /*0x63eebd*/
    cocos2d::CCArray::addObject( /*0x63eed5*/
      *(cocos2d::CCArray **)(*(_QWORD *)(v12 + 560) + 15016LL),
      (struct cocos2d::CCObject *)v5);
  }
}

// [6/11] Address: 0x63eef0
// Method: RingObject::resetObject
__int64 __fastcall RingObject_resetObject(__int64 a1)
{
  EnhancedGameObject_resetObject(a1); /*0x63eef9*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1680LL))(a1);
}

// [7/11] Address: 0x63ef10
// Method: RingObject::setScale
void __fastcall RingObject_setScale(__int64 a1, float a2)
{
  if ( !*(_BYTE *)(a1 + 653) ) /*0x63ef10*/
    a2 = fminf(1.2, a2 + 0.30000001); /*0x63ef2c*/
  GameObject_setScale(a1, a2); /*0x63ef30*/
}

// [8/11] Address: 0x63ef40
// Method: RingObject::setRScale
__int64 __fastcall RingObject_setRScale(__int64 a1)
{
  (*(void (**)(void))(*(_QWORD *)a1 + 1288LL))(); /*0x63ef5d*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1296LL))(a1);
}

// [9/11] Address: 0x63efc0
// Method: RingObject::shouldDrawEditorHitbox
bool __fastcall RingObject_shouldDrawEditorHitbox(__int64 a1)
{
  return *(_DWORD *)(a1 + 1036) == 3643; /*0x63efcd*/
}

// [10/11] Address: 0x63efd0
// Method: RingObject::customObjectSetup
char __fastcall RingObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  int v7; // ebx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  const char *v14; // rcx

  result = EffectGameObject_customObjectSetup(a1, a2, a3); /*0x63efe9*/
  if ( *(_DWORD *)(a1 + 928) == 36 ) /*0x63eff5*/
  {
    v7 = 0; /*0x63f003*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x63f005*/
    {
      v9 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x63f015*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x63f021*/
        v9 = *(const char **)v9; /*0x63f023*/
      v8 = atoi(v9); /*0x63f026*/
    }
    else
    {
      v8 = 0; /*0x63f00e*/
    }
    *(_DWORD *)(a1 + 1480) = v8; /*0x63f02c*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 448LL) ) /*0x63f035*/
    {
      v11 = (const char *)(*(_QWORD *)a2 + 1792LL); /*0x63f045*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1816LL) > 0xFu ) /*0x63f051*/
        v11 = *(const char **)v11; /*0x63f053*/
      v10 = atoi(v11); /*0x63f056*/
    }
    else
    {
      v10 = 0; /*0x63f03e*/
    }
    *(_BYTE *)(a1 + 1653) = v10 != 0; /*0x63f061*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3560LL) ) /*0x63f06a*/
    {
      v13 = (const char *)(*(_QWORD *)a2 + 14240LL); /*0x63f07a*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 14264LL) > 0xFu ) /*0x63f086*/
        v13 = *(const char **)v13; /*0x63f088*/
      v12 = atoi(v13); /*0x63f08b*/
    }
    else
    {
      v12 = 0; /*0x63f073*/
    }
    *(_BYTE *)(a1 + 1856) = v12 != 0; /*0x63f096*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 4032LL) ) /*0x63f09f*/
    {
      v14 = (const char *)(*(_QWORD *)a2 + 16128LL); /*0x63f0ab*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 16152LL) > 0xFu ) /*0x63f0b7*/
        v14 = *(const char **)v14; /*0x63f0b9*/
      v7 = atoi(v14); /*0x63f0c2*/
    }
    *(_BYTE *)(a1 + 1857) = v7 != 0; /*0x63f0ce*/
    return v7 != 0; /*0x63f0cb*/
  }
  return result; /*0x63f0d4*/
}

// [11/11] Address: 0x63f0f0
// Method: RingObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall RingObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x63f120*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x63f12d*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x63f13f*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x63f156*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f165*/
  sub_3C310(v12); /*0x63f171*/
  if ( *(_DWORD *)(a1 + 928) == 36 ) /*0x63f17d*/
  {
    if ( *(_DWORD *)(a1 + 1480) ) /*0x63f18a*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x63f193*/
      *((_QWORD *)&v10 + 1) = 0; /*0x63f198*/
      fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f1a7*/
      fmt::BasicWriter<char>::operator<<(v13, 51); /*0x63f1b7*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x63f1bd*/
      *((_QWORD *)&v10 + 1) = 0; /*0x63f1c2*/
      fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f1d1*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x63f1e2*/
    }
    if ( *(_BYTE *)(a1 + 1653) ) /*0x63f1e8*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x63f1f1*/
      *((_QWORD *)&v10 + 1) = 0; /*0x63f1f6*/
      fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f205*/
      fmt::BasicWriter<char>::operator<<(v13, 56); /*0x63f215*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x63f21b*/
      *((_QWORD *)&v10 + 1) = 0; /*0x63f220*/
      fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f22f*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1653)); /*0x63f241*/
    }
    if ( *(_BYTE *)(a1 + 1856) ) /*0x63f247*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x63f250*/
      *((_QWORD *)&v10 + 1) = 0; /*0x63f255*/
      fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f264*/
      fmt::BasicWriter<char>::operator<<(v13, 445); /*0x63f274*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x63f27a*/
      *((_QWORD *)&v10 + 1) = 0; /*0x63f27f*/
      fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f28e*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1856)); /*0x63f2a0*/
    }
    if ( *(_BYTE *)(a1 + 1857) ) /*0x63f2a6*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x63f2af*/
      *((_QWORD *)&v10 + 1) = 0; /*0x63f2b4*/
      fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f2c3*/
      fmt::BasicWriter<char>::operator<<(v13, 504); /*0x63f2d3*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x63f2d9*/
      *((_QWORD *)&v10 + 1) = 0; /*0x63f2de*/
      fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f2ed*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1857)); /*0x63f2ff*/
    }
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x63f30a*/
  *(_OWORD *)a2 = 0; /*0x63f313*/
  *(_QWORD *)(a2 + 16) = 0; /*0x63f316*/
  *(_QWORD *)(a2 + 24) = 0; /*0x63f31a*/
  v8 = -1; /*0x63f31e*/
  do /*0x63f328*/
    ++v8; /*0x63f325*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x63f328*/
  sub_3C230(a2); /*0x63f335*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x63f340*/
  return a2; /*0x63f349*/
}
