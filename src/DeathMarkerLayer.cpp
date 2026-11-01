#include <Geode/binding/DeathMarkerLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x1129e0
// Method: DeathMarkerLayer::~DeathMarkerLayer
// Hidden C++ exception states: #wind=1
char *__fastcall DeathMarkerLayer__dtor_DeathMarkerLayer(char *Block, char a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  __int64 *v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  cocos2d::CCObject *v12; // rcx
  cocos2d::CCObject *v13; // rcx

  *(_QWORD *)Block = &DeathMarkerLayer::`vftable'; /*0x112a05*/
  v4 = *((_QWORD *)Block + 55); /*0x112a08*/
  if ( v4 ) /*0x112a12*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 512LL))(v4); /*0x112a17*/
    cocos2d::CCObject::release(*((cocos2d::CCObject **)Block + 55)); /*0x112a24*/
  }
  v5 = 0; /*0x112a2a*/
  v6 = (__int64 *)(Block + 320); /*0x112a2c*/
  v7 = *((_QWORD *)Block + 40); /*0x112a33*/
  v8 = (*((_QWORD *)Block + 41) - v7) / 80; /*0x112a58*/
  if ( v8 ) /*0x112a5b*/
  {
    v9 = 0; /*0x112a5d*/
    do /*0x112ad7*/
    {
      v10 = *(_QWORD *)(v9 + v7 + 64); /*0x112a60*/
      if ( v10 ) /*0x112a68*/
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v10 + 728LL))(v10, v8); /*0x112a6d*/
      v11 = *(_QWORD *)(v9 + *v6 + 72); /*0x112a76*/
      if ( v11 ) /*0x112a7e*/
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v11 + 728LL))(v11, v8); /*0x112a83*/
      v12 = *(cocos2d::CCObject **)(v9 + *v6 + 64); /*0x112a8c*/
      if ( v12 ) /*0x112a94*/
        cocos2d::CCObject::release(v12); /*0x112a96*/
      v13 = *(cocos2d::CCObject **)(v9 + *v6 + 72); /*0x112a9f*/
      if ( v13 ) /*0x112aa7*/
        cocos2d::CCObject::release(v13); /*0x112aa9*/
      ++v5; /*0x112aaf*/
      v9 += 80; /*0x112ab2*/
      v7 = *v6; /*0x112ab6*/
      v8 = (*((_QWORD *)Block + 41) - *((_QWORD *)Block + 40)) / 80LL; /*0x112ad1*/
    }
    while ( v5 < v8 ); /*0x112ad7*/
  }
  sub_3DA90(Block + 368); /*0x112ae0*/
  sub_116D80(Block + 352); /*0x112aec*/
  sub_116DF0(Block + 320); /*0x112af4*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)Block); /*0x112afc*/
  if ( (a2 & 1) != 0 ) /*0x112b07*/
    j_j_free(Block); /*0x112b11*/
  return Block; /*0x112b19*/
}
