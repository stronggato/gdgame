#include <Geode/binding/GravityEffectSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x516940
// Method: GravityEffectSprite::~GravityEffectSprite
cocos2d::CCSprite *__fastcall GravityEffectSprite__dtor_GravityEffectSprite(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCSprite::~CCSprite(Block); /*0x51694f*/
  if ( (a2 & 1) != 0 ) /*0x516958*/
    j_j_free(Block); /*0x516962*/
  return Block; /*0x516967*/
}

// [2/2] Address: 0x516980
// Method: GravityEffectSprite::init
bool __fastcall GravityEffectSprite_init(cocos2d::CCSprite *a1)
{
  bool result; // al
  struct cocos2d::CCSpriteBatchNode *v3; // rsi
  __int64 v4; // rcx
  cocos2d::CCDirector *v5; // rax
  __int64 v6; // rcx
  cocos2d::CCDirector *v7; // rax
  __int64 v8; // rcx
  cocos2d::CCDirector *v9; // rax
  int v10; // ebp
  float v11; // xmm8_4
  struct cocos2d::CCSprite *v12; // rdi
  float v13; // xmm7_4
  __int64 v14; // rcx
  cocos2d::CCDirector *v15; // rax
  float v16; // xmm6_4
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // [rsp+D8h] [rbp+10h] BYREF

  result = cocos2d::CCSprite::init(a1); /*0x51698c*/
  if ( result ) /*0x516994*/
  {
    v3 = cocos2d::CCSpriteBatchNode::create("gravityLine_001.png", 0x16u); /*0x516a14*/
    (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1); /*0x516a21*/
    (*(void (__fastcall **)(cocos2d::CCSprite *, struct cocos2d::CCSpriteBatchNode *))(*(_QWORD *)a1 + 464LL))(a1, v3); /*0x516a34*/
    v22 = 0x100000302LL; /*0x516a3e*/
    (**((void (__fastcall ***)(__int64, __int64))v3 + 40))((__int64)v3 + 320, 0x100000302LL); /*0x516a5f*/
    v5 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v4); /*0x516a61*/
    cocos2d::CCDirector::getContentScaleFactor(v5); /*0x516a6a*/
    v7 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v6); /*0x516a81*/
    cocos2d::CCDirector::getScreenRight(v7); /*0x516a8a*/
    v9 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v8); /*0x516a95*/
    v10 = 0; /*0x516aad*/
    v11 = (float)(cocos2d::CCDirector::getScreenRight(v9) - 60.0) / 22.0; /*0x516ae0*/
    do /*0x516c33*/
    {
      v12 = cocos2d::CCSprite::create("gravityLine_001.png"); /*0x516b03*/
      (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, struct cocos2d::CCSprite *))(*(_QWORD *)v3 + 464LL))( /*0x516b10*/
        v3,
        v12);
      v13 = (float)rand(); /*0x516b1d*/
      v15 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v14); /*0x516b25*/
      v16 = (float)(30.0 - (float)(cocos2d::CCDirector::getScreenRight(v15) * 0.5)) + (float)((float)v10 * v11); /*0x516b5e*/
      v17 = rand(); /*0x516b62*/
      cocos2d::CCPoint::CCPoint( /*0x516b88*/
        (cocos2d::CCPoint *)&v22,
        (float)((float)((float)v17 / 32767.0) * v11) + v16,
        (float)((float)((float)(v13 / 32767.0) + (float)(v13 / 32767.0)) - 1.0) * 10.0);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64 *))(*(_QWORD *)v12 + 184LL))(v12, &v22); /*0x516b9c*/
      v18 = *(_QWORD *)v12; /*0x516ba2*/
      rand(); /*0x516ba5*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v18 + 120))(v12); /*0x516bcc*/
      v19 = *(_QWORD *)v12; /*0x516bcf*/
      rand(); /*0x516bd2*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v19 + 136))(v12); /*0x516bf1*/
      v20 = *((_QWORD *)v12 + 40); /*0x516bf7*/
      v21 = rand(); /*0x516bfe*/
      (*(void (__fastcall **)(__int64, _QWORD))(v20 + 40))( /*0x516c2b*/
        (__int64)v12 + 320,
        (unsigned int)(int)(float)((float)((float)((float)v21 / 32767.0) * 130.0) + 50.0));
      ++v10; /*0x516c2e*/
    }
    while ( v10 < 22 ); /*0x516c33*/
    return 1; /*0x516c3f*/
  }
  return result; /*0x516996*/
}
