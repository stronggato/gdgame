#include <Geode/binding/GJUserMessage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x89ef0
// Method: GJUserMessage::init
bool __fastcall GJUserMessage_init(cocos2d::CCNode *a1)
{
  return cocos2d::CCNode::init(a1); /*0x89eff*/
}

// [2/4] Address: 0x215c40
// Method: GJUserMessage::~GJUserMessage
cocos2d::CCNode *__fastcall GJUserMessage__dtor_GJUserMessage(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GJUserMessage::`vftable'; /*0x215c54*/
  sub_3C310((char *)Block + 432); /*0x215c60*/
  sub_3C310((char *)Block + 400); /*0x215c6c*/
  sub_3C310((char *)Block + 368); /*0x215c78*/
  sub_3C310((char *)Block + 336); /*0x215c84*/
  cocos2d::CCNode::~CCNode(Block); /*0x215c8c*/
  if ( (a2 & 1) != 0 ) /*0x215c95*/
    j_j_free(Block); /*0x215c9f*/
  return Block; /*0x215ca4*/
}

// [3/4] Address: 0x26bd50
// Method: GJUserMessage::create
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *GJUserMessage_create()
{
  cocos2d::CCNode *v0; // rbx
  bool (__fastcall *v1)(cocos2d::CCNode *); // rdx
  bool v2; // al

  v0 = (cocos2d::CCNode *)operator new(0x1D8u); /*0x26bd64*/
  cocos2d::CCNode::CCNode(v0); /*0x26bd6f*/
  *(_QWORD *)v0 = &GJUserMessage::`vftable'; /*0x26bd7c*/
  *((_QWORD *)v0 + 40) = 0; /*0x26bd81*/
  *((_DWORD *)v0 + 82) = 0; /*0x26bd88*/
  *((_OWORD *)v0 + 21) = 0; /*0x26bd91*/
  *((_QWORD *)v0 + 44) = 0; /*0x26bd98*/
  *((_QWORD *)v0 + 45) = 15; /*0x26bd9f*/
  *((_BYTE *)v0 + 336) = 0; /*0x26bdaa*/
  *((_OWORD *)v0 + 23) = 0; /*0x26bdb1*/
  *((_QWORD *)v0 + 48) = 0; /*0x26bdb8*/
  *((_QWORD *)v0 + 49) = 15; /*0x26bdbf*/
  *((_BYTE *)v0 + 368) = 0; /*0x26bdca*/
  *((_OWORD *)v0 + 25) = 0; /*0x26bdd1*/
  *((_QWORD *)v0 + 52) = 0; /*0x26bdd8*/
  *((_QWORD *)v0 + 53) = 15; /*0x26bddf*/
  *((_BYTE *)v0 + 400) = 0; /*0x26bdea*/
  *((_OWORD *)v0 + 27) = 0; /*0x26bdf1*/
  *((_QWORD *)v0 + 56) = 0; /*0x26bdf8*/
  *((_QWORD *)v0 + 57) = 15; /*0x26bdff*/
  *((_BYTE *)v0 + 432) = 0; /*0x26be0a*/
  *((_WORD *)v0 + 232) = 0; /*0x26be11*/
  *((_BYTE *)v0 + 466) = 0; /*0x26be18*/
  v1 = *(bool (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v0 + 72LL); /*0x26be22*/
  if ( v1 == GJUserMessage_init ) /*0x26be33*/
    v2 = cocos2d::CCNode::init(v0); /*0x26be35*/
  else
    v2 = v1(v0); /*0x26be3d*/
  if ( v2 ) /*0x26be41*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x26be46*/
    return v0; /*0x26be4c*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x26be69*/
    return 0; /*0x26be6c*/
  }
}

// [4/4] Address: 0x50cb90
// Method: GJUserMessage::create_0
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJUserMessage_create_0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  void (__fastcall **v7)(__int64, __int64); // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  const char *v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h]
  _BYTE v12[528]; // [rsp+30h] [rbp-D0h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 15504) + 344LL))(*(_QWORD *)(a1 + 15504)); /*0x50cbd5*/
  if ( (_BYTE)result )
  {
    fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x50cbe8*/
    v10 = "LevelID: ";
    v11 = 0; /*0x50cbfe*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cc18*/
    fmt::BasicWriter<char>::operator<<( /*0x50cc36*/
      v12,
      (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 2168) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 2168) + 332LL)));
    v10 = "\nTime: ";
    v11 = 0; /*0x50cc48*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cc62*/
    roundf(*(double *)(a1 + 15448) * 100.0); /*0x50cc7c*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x50cc96*/
    v10 = "\nAttempt: ";
    v11 = 0; /*0x50cca8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50ccc2*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 12708)); /*0x50ccd3*/
    v10 = "\nTaps: ";
    v11 = 0; /*0x50cce5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50ccff*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 12704)); /*0x50cd10*/
    v10 = "\nTimeWarp: ";
    v11 = 0; /*0x50cd22*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cd3c*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x50cd52*/
    v10 = "\nGravity: ";
    v11 = 0; /*0x50cd64*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cd7e*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x50cd9b*/
    if ( *(_BYTE *)(a1 + 1058) /*0x50cdd0*/
      && *(float *)(*(_QWORD *)(a1 + 3576) + 2956LL) != *(float *)(*(_QWORD *)(a1 + 3584) + 2956LL) )
    {
      v10 = " / "; /*0x50cdd2*/
      v11 = 0; /*0x50cdd7*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cdf1*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x50ce0e*/
    }
    v10 = "\nActive: ";
    v11 = 0; /*0x50ce20*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50ce3a*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 13272)); /*0x50ce4b*/
    v10 = "\nGradients: ";
    v11 = 0; /*0x50ce5d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50ce77*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 12952)); /*0x50ce88*/
    v10 = "\nParticles: ";
    v11 = 0; /*0x50ce9a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50ceb4*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 12752)); /*0x50cec5*/
    v10 = "\nParticleC: ";
    v11 = 0; /*0x50ced7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cef1*/
    fmt::BasicWriter<char>::operator<<(v12, (unsigned int)(10 * (*(_DWORD *)(a1 + 12760) / 100))); /*0x50cf16*/
    v10 = Delimiter; /*0x50cf23*/
    v11 = 0; /*0x50cf28*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cf42*/
    v10 = "-- Audio --\n"; /*0x50cf4f*/
    v11 = 0; /*0x50cf54*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cf6e*/
    v10 = "Songs: ";
    v11 = 0; /*0x50cf80*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50cf9a*/
    if ( !qword_905F60 ) /*0x50cfaa*/
    {
      v10 = (const char *)operator new(0x8A8u); /*0x50cfb6*/
      qword_905F60 = sub_5AE20(v10); /*0x50cfc4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x50cfd5*/
    }
    v3 = sub_5E130(); /*0x50cfde*/
    fmt::BasicWriter<char>::operator<<(v12, v3); /*0x50cfea*/
    v10 = Delimiter; /*0x50cff0*/
    v11 = 0; /*0x50cff5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d00f*/
    v10 = "SFX: ";
    v11 = 0; /*0x50d021*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d03b*/
    v4 = qword_905F60; /*0x50d041*/
    if ( !qword_905F60 ) /*0x50d04b*/
    {
      v10 = (const char *)operator new(0x8A8u); /*0x50d057*/
      qword_905F60 = sub_5AE20(v10); /*0x50d065*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x50d076*/
      v4 = qword_905F60; /*0x50d078*/
    }
    v5 = *(_QWORD *)(v4 + 1656); /*0x50d07f*/
    v6 = sub_5E130(); /*0x50d086*/
    fmt::BasicWriter<char>::operator<<(v12, (unsigned int)(v5 - v6)); /*0x50d094*/
    v10 = Delimiter; /*0x50d09a*/
    v11 = 0; /*0x50d09f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d0b9*/
    v10 = "-- Perf --\n"; /*0x50d0c6*/
    v11 = 0; /*0x50d0cb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d0e5*/
    v10 = "Move: ";
    v11 = 0; /*0x50d0f7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d111*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14484)); /*0x50d122*/
    v10 = Delimiter; /*0x50d128*/
    v11 = 0; /*0x50d12d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d147*/
    v10 = "Rotate: ";
    v11 = 0; /*0x50d159*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d173*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14492)); /*0x50d184*/
    v10 = Delimiter; /*0x50d18a*/
    v11 = 0; /*0x50d18f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d1a9*/
    v10 = "Scale: ";
    v11 = 0; /*0x50d1bb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d1d5*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14488)); /*0x50d1e6*/
    v10 = Delimiter; /*0x50d1ec*/
    v11 = 0; /*0x50d1f1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d20b*/
    v10 = "Follow: ";
    v11 = 0; /*0x50d21d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d237*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14496)); /*0x50d248*/
    v10 = Delimiter; /*0x50d24e*/
    v11 = 0; /*0x50d253*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d26d*/
    v10 = "-- Area --\n"; /*0x50d27a*/
    v11 = 0; /*0x50d27f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d299*/
    v10 = "Move: ";
    v11 = 0; /*0x50d2a4*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d2be*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14468)); /*0x50d2cf*/
    v10 = " / "; /*0x50d2d5*/
    v11 = 0; /*0x50d2da*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d2f4*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14452)); /*0x50d305*/
    v10 = Delimiter; /*0x50d30b*/
    v11 = 0; /*0x50d310*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d32a*/
    v10 = "Rotate: ";
    v11 = 0; /*0x50d335*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d34f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14476)); /*0x50d360*/
    v10 = " / "; /*0x50d366*/
    v11 = 0; /*0x50d36b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d385*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14460)); /*0x50d396*/
    v10 = Delimiter; /*0x50d39c*/
    v11 = 0; /*0x50d3a1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d3bb*/
    v10 = "Scale: ";
    v11 = 0; /*0x50d3c6*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d3e0*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14472)); /*0x50d3f1*/
    v10 = " / "; /*0x50d3f7*/
    v11 = 0; /*0x50d3fc*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d416*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14456)); /*0x50d427*/
    v10 = Delimiter; /*0x50d42d*/
    v11 = 0; /*0x50d432*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d44c*/
    v10 = "ColOp: ";
    v11 = 0; /*0x50d45e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d478*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14480)); /*0x50d489*/
    v10 = " / "; /*0x50d48f*/
    v11 = 0; /*0x50d494*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d4ae*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 14464)); /*0x50d4bf*/
    v10 = Delimiter; /*0x50d4c5*/
    v11 = 0; /*0x50d4ca*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x50d4e4*/
    v7 = *(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 15504) + 360LL); /*0x50d4f1*/
    v8 = *(_QWORD *)(a1 + 15504); /*0x50d4f8*/
    v9 = fmt::BasicWriter<char>::c_str(v12); /*0x50d500*/
    (*v7)(v8 + 360, v9); /*0x50d510*/
    return fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x50d518*/
  }
  return result; /*0x50d51e*/
}
