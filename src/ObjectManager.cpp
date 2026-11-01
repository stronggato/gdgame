#include <Geode/binding/ObjectManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x7acd0
// Method: ObjectManager::~ObjectManager
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall ObjectManager__dtor_ObjectManager(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *(_QWORD *)Block = &ObjectManager::`vftable'; /*0x7ace6*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 41); /*0x7ace9*/
  if ( v4 ) /*0x7acf3*/
    cocos2d::CCObject::release(v4); /*0x7acf5*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 40); /*0x7acfb*/
  if ( v5 ) /*0x7ad05*/
    cocos2d::CCObject::release(v5); /*0x7ad07*/
  qword_905F78 = 0; /*0x7ad0d*/
  cocos2d::CCNode::~CCNode(Block); /*0x7ad1b*/
  if ( (a2 & 1) != 0 ) /*0x7ad26*/
    j_j_free(Block); /*0x7ad30*/
  return Block; /*0x7ad38*/
}

// [2/3] Address: 0x7ad50
// Method: ObjectManager::instance
__int64 ObjectManager_instance()
{
  __int64 result; // rax
  cocos2d::CCNode *v1; // [rsp+30h] [rbp+8h]

  result = qword_905F78; /*0x7ad56*/
  if ( !qword_905F78 ) /*0x7ad60*/
  {
    v1 = (cocos2d::CCNode *)operator new(0x150u); /*0x7ad6f*/
    cocos2d::CCNode::CCNode(v1); /*0x7ad77*/
    *(_QWORD *)v1 = &ObjectManager::`vftable'; /*0x7ad84*/
    *((_QWORD *)v1 + 40) = 0; /*0x7ad89*/
    *((_QWORD *)v1 + 41) = 0; /*0x7ad90*/
    qword_905F78 = (__int64)v1; /*0x7ad97*/
    ObjectManager_init(v1); /*0x7adb4*/
    return qword_905F78; /*0x7adb9*/
  }
  return result; /*0x7adc0*/
}

// [3/3] Address: 0x7ade0
// Method: ObjectManager::init
char __fastcall ObjectManager_init(__int64 a1)
{
  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rax

  v2 = cocos2d::CCDictionary::createWithContentsOfFile("objectDefinitions.plist"); /*0x7adf0*/
  *(_QWORD *)(a1 + 320) = v2; /*0x7adf9*/
  cocos2d::CCObject::retain(v2); /*0x7ae00*/
  sub_7B130(a1); /*0x7ae09*/
  PlayLayer_processCreateObjectsFromSetup(a1); /*0x7ae11*/
  v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x7ae16*/
  *(_QWORD *)(a1 + 328) = v3; /*0x7ae1f*/
  cocos2d::CCObject::retain(v3); /*0x7ae26*/
  return 1; /*0x7ae2e*/
}
