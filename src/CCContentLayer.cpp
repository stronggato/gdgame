#include <Geode/binding/CCContentLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x45c80
// Method: CCContentLayer::setPosition
int __fastcall CCContentLayer_setPosition(cocos2d::CCNode *a1, const struct cocos2d::CCPoint *a2)
{
  cocos2d::CCArray *v3; // rax
  cocos2d::CCArray *v4; // r14
  unsigned int v5; // ebp
  struct cocos2d::CCObject *v6; // rax
  struct cocos2d::CCObject *v7; // rsi
  float v8; // xmm7_4
  float v9; // xmm6_4
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  float v13; // xmm0_4

  cocos2d::CCNode::setPosition(a1, a2); /*0x45c8e*/
  v3 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 480LL))(a1); /*0x45c9a*/
  v4 = v3; /*0x45ca0*/
  if ( v3 ) /*0x45ca6*/
  {
    v5 = 0; /*0x45cb4*/
    for ( LODWORD(v3) = cocos2d::CCArray::count(v3); v5 < (unsigned int)v3; LODWORD(v3) = cocos2d::CCArray::count(v4) ) /*0x45cbe*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(v4, v5); /*0x45cf5*/
      v7 = v6; /*0x45cfb*/
      if ( *((_QWORD *)v6 + 52) ) /*0x45cfe*/
      {
        v8 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v6 + 320LL))(v6) + 4); /*0x45d22*/
        v9 = *(float *)((*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v7 + 52) + 320LL))(*((_QWORD **)v7 + 52)) + 4); /*0x45d33*/
        v10 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 504LL))(v7); /*0x45d44*/
        v11 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 200LL))(v7); /*0x45d56*/
        v13 = *(float *)(v11 + 4) + *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 200LL))(v10) + 4); /*0x45d6a*/
        if ( v13 > v9 || (float)-v8 > v13 ) /*0x45d7b*/
          v12 = 0; /*0x45d81*/
        else
          LOBYTE(v12) = 1; /*0x45d7d*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 336LL))(v7, v12); /*0x45d89*/
      }
      ++v5; /*0x45d92*/
    }
  }
  return (int)v3; /*0x45dc1*/
}
