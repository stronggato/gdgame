#include <Geode/binding/BrowseSmartKeyLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x1b4ba0
// Method: BrowseSmartKeyLayer::getAllSelectedBlocks
unsigned int __fastcall BrowseSmartKeyLayer_getAllSelectedBlocks(__int64 a1, cocos2d::CCArray *a2)
{
  unsigned int v4; // esi
  unsigned int result; // eax
  struct cocos2d::CCObject *v6; // rax
  struct cocos2d::CCObject *v7; // rbx
  __int64 v8; // rax
  cocos2d::CCArray *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi

  v4 = 0; /*0x1b4bb9*/
  result = cocos2d::CCArray::count(a2); /*0x1b4bbb*/
  if ( result ) /*0x1b4bc3*/
  {
    do /*0x1b4ca3*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(a2, v4); /*0x1b4bd8*/
      v7 = v6; /*0x1b4bde*/
      if ( *((_DWORD *)v6 + 314) == 5 ) /*0x1b4be8*/
      {
        v8 = *((int *)v6 + 220); /*0x1b4bee*/
        if ( (int)v8 > 0 ) /*0x1b4bf7*/
        {
          v9 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(*(_QWORD *)(a1 + 1512) + 4320LL), v8); /*0x1b4c0a*/
          if ( v9 ) /*0x1b4c13*/
            cocos2d::CCArray::removeObject(v9, v7, 1); /*0x1b4c1e*/
        }
        *((_BYTE *)v7 + 1140) = *((_BYTE *)v7 + 1141); /*0x1b4c31*/
        EditorUI_deselectObject(a1, (__int64)v7); /*0x1b4c37*/
        LOBYTE(v10) = 1; /*0x1b4c3f*/
        v11 = *(_QWORD *)(a1 + 1512); /*0x1b4c41*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 1160LL))(v7, v10); /*0x1b4c4b*/
        GJBaseGameLayer_removeObjectFromSection(v11, (__int64)v7); /*0x1b4c57*/
        sub_3F1780(v11, v7); /*0x1b4c62*/
        *(_BYTE *)(v11 + 15730) = 1; /*0x1b4c6a*/
        sub_1FF670(a1); /*0x1b4c71*/
        sub_1FFD20(a1); /*0x1b4c79*/
        sub_200430(a1); /*0x1b4c81*/
        cocos2d::CCArray::removeObjectAtIndex(a2, v4, 1); /*0x1b4c8e*/
      }
      else
      {
        ++v4; /*0x1b4c96*/
      }
      result = cocos2d::CCArray::count(a2); /*0x1b4c9b*/
    }
    while ( v4 < result ); /*0x1b4ca3*/
  }
  return result; /*0x1b4cb3*/
}

// [3/4] Address: 0x5e7370
// Method: BrowseSmartKeyLayer::~BrowseSmartKeyLayer
_QWORD *__fastcall BrowseSmartKeyLayer__dtor_BrowseSmartKeyLayer(_QWORD *Block, char a2)
{
  *Block = &BrowseSmartKeyLayer::`vftable'; /*0x5e7384*/
  Block[40] = &BrowseSmartKeyLayer::`vftable'; /*0x5e7390*/
  Block[41] = &BrowseSmartKeyLayer::`vftable'; /*0x5e739e*/
  Block[42] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73ac*/
  Block[43] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73ba*/
  Block[44] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73c8*/
  Block[51] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73d6*/
  Block[54] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73e4*/
  Block[68] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73f2*/
  sub_3C310(Block + 89); /*0x5e7400*/
  BrowseSmartTemplateLayer__dtor_BrowseSmartTemplateLayer(Block); /*0x5e7408*/
  if ( (a2 & 1) != 0 ) /*0x5e7410*/
    j_j_free(Block); /*0x5e741a*/
  return Block; /*0x5e741f*/
}

// [4/4] Address: 0x5ed3e0
// Method: BrowseSmartKeyLayer::onBack
// Hidden C++ exception states: #wind=1
__int64 __fastcall BrowseSmartKeyLayer_onBack(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  cocos2d::CCObject *v7; // rbx
  void *v9; // [rsp+30h] [rbp+8h]

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x5ed3ed*/
  v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x5ed3f9*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, a1); /*0x5ed405*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x5ed413*/
  LOBYTE(v4) = 1; /*0x5ed41c*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4); /*0x5ed421*/
  v5 = *((_QWORD *)a1 + 83); /*0x5ed427*/
  v9 = operator new(0x2C8u); /*0x5ed438*/
  v6 = sub_5E7270(v9); /*0x5ed440*/
  v7 = (cocos2d::CCObject *)v6; /*0x5ed445*/
  if ( v6 ) /*0x5ed44b*/
  {
    if ( (unsigned __int8)sub_5EAAA0(v6, v5) ) /*0x5ed453*/
    {
      cocos2d::CCObject::autorelease(v7); /*0x5ed45f*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x5ed46f*/
      v7 = 0; /*0x5ed472*/
    }
  }
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v7 + 1064LL))(v7);
}
