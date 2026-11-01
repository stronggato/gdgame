#include <Geode/binding/StartPosObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x64e5a0
// Method: StartPosObject::init
// Hidden C++ exception states: #wind=1
char __fastcall StartPosObject_init(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCObject *v3; // rbx
  cocos2d::CCObject *v4; // rax
  cocos2d::CCObject *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h]

  *(_DWORD *)(a1 + 28) = 13; /*0x64e5ad*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eStartPosBtn_001.png") ) /*0x64e5bb*/
    return 0; /*0x64e69e*/
  sub_287800(a1); /*0x64e5cc*/
  *(_BYTE *)(a1 + 313) = 0; /*0x64e5d1*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x64e5d8*/
  *(_WORD *)(a1 + 1465) = -1; /*0x64e5ee*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x64e5f5*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x64e5fc*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x64e606*/
  v7 = operator new(0x2D8u); /*0x64e617*/
  v2 = sub_3E9010(v7); /*0x64e61f*/
  v3 = (cocos2d::CCObject *)v2; /*0x64e624*/
  if ( v2 ) /*0x64e62a*/
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2) ) /*0x64e636*/
    {
      cocos2d::CCObject::autorelease(v3); /*0x64e63f*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1); /*0x64e64f*/
      v3 = 0; /*0x64e652*/
    }
  }
  v4 = *(cocos2d::CCObject **)(a1 + 1856); /*0x64e654*/
  if ( v4 != v3 ) /*0x64e65e*/
  {
    if ( v3 ) /*0x64e663*/
      cocos2d::CCObject::retain(v3); /*0x64e668*/
    v5 = *(cocos2d::CCObject **)(a1 + 1856); /*0x64e66e*/
    if ( v5 ) /*0x64e678*/
      cocos2d::CCObject::release(v5); /*0x64e67a*/
    *(_QWORD *)(a1 + 1856) = v3; /*0x64e680*/
    v4 = v3; /*0x64e687*/
  }
  *((_BYTE *)v4 + 368) = 1; /*0x64e68a*/
  return 1; /*0x64e693*/
}

// [2/4] Address: 0x64e6b0
// Method: StartPosObject::loadSettingsFromString
// Hidden C++ exception states: #wind=1
double __fastcall StartPosObject_loadSettingsFromString(__int64 a1, _QWORD *a2)
{
  __int64 refreshed; // rax
  cocos2d::CCObject *v5; // rax
  cocos2d::CCObject *v6; // rbx
  cocos2d::CCObject *v7; // rcx

  refreshed = CCTextInputNode_refreshLabel(a2); /*0x64e6dc*/
  v5 = (cocos2d::CCObject *)sub_40CDC0(refreshed); /*0x64e6e4*/
  v6 = v5; /*0x64e6e9*/
  if ( *(cocos2d::CCObject **)(a1 + 1856) != v5 ) /*0x64e6f3*/
  {
    if ( v5 ) /*0x64e6f8*/
      cocos2d::CCObject::retain(v5); /*0x64e6fd*/
    v7 = *(cocos2d::CCObject **)(a1 + 1856); /*0x64e703*/
    if ( v7 ) /*0x64e70d*/
      cocos2d::CCObject::release(v7); /*0x64e70f*/
    *(_QWORD *)(a1 + 1856) = v6; /*0x64e715*/
  }
  return sub_3C310(a2); /*0x64e724*/
}

// [3/4] Address: 0x64e750
// Method: StartPosObject::customObjectSetup
// attributes: thunk
__int64 __fastcall StartPosObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  return EffectGameObject_customObjectSetup(a1, a2, a3);
}

// [4/4] Address: 0x64e760
// Method: StartPosObject::getSaveString
// Hidden C++ exception states: #wind=2
void *__fastcall StartPosObject_getSaveString(__int64 a1, void *a2, __int64 a3)
{
  __int64 SaveString; // rax
  void *v6; // rdx
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF

  EffectGameObject_getSaveString(a1, (__int64)a2, a3); /*0x64e78c*/
  if ( *(_QWORD *)(a1 + 1856) ) /*0x64e799*/
  {
    sub_43D80(a2, &unk_709CE8, 1u); /*0x64e7b3*/
    SaveString = LevelSettingsObject_getSaveString(*(_QWORD *)(a1 + 1856), v8); /*0x64e7c4*/
    v6 = (void *)SaveString; /*0x64e7ca*/
    if ( *(_QWORD *)(SaveString + 24) > 0xFu ) /*0x64e7d2*/
      v6 = *(void **)SaveString; /*0x64e7d4*/
    sub_43D80(a2, v6, *(_QWORD *)(SaveString + 16)); /*0x64e7de*/
    sub_3C310(v8); /*0x64e7e9*/
  }
  return a2; /*0x64e7f1*/
}
