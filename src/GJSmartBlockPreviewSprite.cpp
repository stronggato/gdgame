#include <Geode/binding/GJSmartBlockPreviewSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x3b30e0
// Method: GJSmartBlockPreviewSprite::~GJSmartBlockPreviewSprite
cocos2d::CCNode *__fastcall GJSmartBlockPreviewSprite__dtor_GJSmartBlockPreviewSprite(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GJSmartBlockPreviewSprite::`vftable'; /*0x3b30f3*/
  cocos2d::CCNode::~CCNode(Block); /*0x3b30f9*/
  if ( (a2 & 1) != 0 ) /*0x3b3102*/
    j_j_free(Block); /*0x3b310c*/
  return Block; /*0x3b3111*/
}

// [2/2] Address: 0x3b9430
// Method: GJSmartBlockPreviewSprite::visit
void __fastcall GJSmartBlockPreviewSprite_visit(cocos2d::CCNode *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  double v6; // xmm0_8
  float v7; // xmm6_4
  double v8; // xmm0_8
  float v9; // xmm7_4
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE v13[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-38h] BYREF
  float v15; // [rsp+80h] [rbp+8h] BYREF
  float v16; // [rsp+84h] [rbp+Ch]

  v2 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 504LL))(a1); /*0x3b9451*/
  v3 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 504LL))(a1); /*0x3b9454*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 504LL))(v3); /*0x3b9460*/
  v5 = v4; /*0x3b9466*/
  if ( v2 && v4 ) /*0x3b9475*/
  {
    v6 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v2 + 168LL))(v2); /*0x3b9492*/
    v7 = *(float *)&v6 * 92.0; /*0x3b949a*/
    v8 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v5 + 168LL))(v5); /*0x3b94a5*/
    v9 = *(float *)&v8 * v7; /*0x3b94b4*/
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2); /*0x3b94b8*/
    cocos2d::CCNode::convertToWorldSpace(v5, &v15, v10); /*0x3b94cc*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v13, v15 - (float)(v9 * 0.5), v16 - (float)(v9 * 0.5), v9, v9); /*0x3b9505*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v14, (const struct cocos2d::CCRect *)v13); /*0x3b9515*/
    glEnable(0xC11u); /*0x3b9523*/
    v12 = cocos2d::CCEGLView::sharedOpenGLView(v11); /*0x3b9529*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 104LL))(v12); /*0x3b954e*/
    cocos2d::CCNode::visit(a1); /*0x3b9554*/
    glDisable(0xC11u); /*0x3b955f*/
  }
  else
  {
    cocos2d::CCNode::visit(a1); /*0x3b9595*/
  }
}
