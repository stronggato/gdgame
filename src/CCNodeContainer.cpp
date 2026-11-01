#include <Geode/binding/CCNodeContainer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0xa2d50
// Method: CCNodeContainer::create
// Hidden C++ exception states: #wind=1
__int64 CCNodeContainer_create()
{
  _QWORD *v0; // rbx
  __int64 (__fastcall *v1)(__int64); // rdx

  v0 = operator new(0x3F0u); /*0xa2d60*/
  memset(v0, 0, 0x3F0u); /*0xa2d73*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v0); /*0xa2d7b*/
  *v0 = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2d87*/
  v0[40] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2d91*/
  v0[41] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2d9f*/
  v0[42] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2dad*/
  v0[43] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2dbb*/
  v0[44] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2dc9*/
  v0[51] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2dd7*/
  v0[54] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2de5*/
  v0[68] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2df3*/
  v0[83] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2e01*/
  v0[84] = &ClearPlatformerSavesOptionsPopup::`vftable'; /*0xa2e0f*/
  v0[125] = 0; /*0xa2e16*/
  if ( (unsigned __int8)ClearPlatformerSavesOptionsPopup_init(v0) ) /*0xa2e37*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0xa2e47*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v0 + 8LL))(v0, 1); /*0xa2e57*/
    v0 = 0; /*0xa2e5a*/
  }
  v1 = *(__int64 (__fastcall **)(__int64))(*v0 + 1064LL); /*0xa2e5f*/
  if ( v1 == SetupTriggerPopup_show ) /*0xa2e73*/
    return SetupTriggerPopup_show((__int64)v0); /*0xa2e7a*/
  else
    return v1((__int64)v0); /*0xa2e84*/
}

// [2/3] Address: 0x34f5d0
// Method: CCNodeContainer::~CCNodeContainer
cocos2d::CCNode *__fastcall CCNodeContainer__dtor_CCNodeContainer(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCNode::~CCNode(Block); /*0x34f5df*/
  if ( (a2 & 1) != 0 ) /*0x34f5e8*/
    j_j_free(Block); /*0x34f5f2*/
  return Block; /*0x34f5f7*/
}

// [3/3] Address: 0x34f610
// Method: CCNodeContainer::visit
void __fastcall CCNodeContainer_visit(cocos2d::CCNode *a1)
{
  if ( (*(unsigned int (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 488LL))(a1) ) /*0x34f61c*/
    cocos2d::CCNode::visit(a1); /*0x34f62e*/
}
