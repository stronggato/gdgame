#include <Geode/binding/CommunityCreditNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x12a860
// Method: CommunityCreditNode::~CommunityCreditNode
cocos2d::CCNode *__fastcall CommunityCreditNode__dtor_CommunityCreditNode(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &CommunityCreditNode::`vftable'; /*0x12a874*/
  sub_3C310((char *)Block + 336); /*0x12a880*/
  cocos2d::CCNode::~CCNode(Block); /*0x12a888*/
  if ( (a2 & 1) != 0 ) /*0x12a891*/
    j_j_free(Block); /*0x12a89b*/
  return Block; /*0x12a8a0*/
}

// [2/2] Address: 0x12a980
// Method: CommunityCreditNode::create
// Hidden C++ exception states: #wind=3
char *__fastcall CommunityCreditNode_create(int a1, int a2, __int64 a3, __int64 a4)
{
  char *v7; // rbx
  size_t *v8; // rax
  size_t *v9; // rdi
  void *v10; // rdx
  char v12[32]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]

  v13 = a4; /*0x12a9ae*/
  v7 = (char *)operator new(0x170u); /*0x12a9bd*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v7); /*0x12a9c8*/
  *(_QWORD *)v7 = &CommunityCreditNode::`vftable'; /*0x12a9d5*/
  *((_QWORD *)v7 + 40) = 0; /*0x12a9db*/
  *((_DWORD *)v7 + 82) = 0; /*0x12a9e2*/
  *((_OWORD *)v7 + 21) = 0; /*0x12a9f3*/
  *((_QWORD *)v7 + 44) = 0; /*0x12a9f6*/
  *((_QWORD *)v7 + 45) = 15; /*0x12a9fa*/
  v7[336] = 0; /*0x12aa02*/
  sub_3E4F0(v12, a4); /*0x12aa0d*/
  v9 = v8; /*0x12aa12*/
  if ( cocos2d::CCNode::init((cocos2d::CCNode *)v7) ) /*0x12aa1d*/
  {
    *((_DWORD *)v7 + 80) = a1; /*0x12aa42*/
    *((_DWORD *)v7 + 81) = a2; /*0x12aa49*/
    *((_DWORD *)v7 + 82) = 0; /*0x12aa50*/
    if ( v7 + 336 != (char *)v9 ) /*0x12aa5a*/
    {
      v10 = v9; /*0x12aa5c*/
      if ( v9[3] > 0xF ) /*0x12aa64*/
        v10 = (void *)*v9; /*0x12aa66*/
      sub_3F5A0(v7 + 336, v10, v9[2]); /*0x12aa70*/
    }
    sub_3C310(v9); /*0x12aa79*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v7); /*0x12aa81*/
  }
  else
  {
    sub_3C310(v9); /*0x12aa2a*/
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x12aa3a*/
    v7 = 0; /*0x12aa3d*/
  }
  sub_3C310(a4); /*0x12aa8b*/
  return v7; /*0x12aa93*/
}
