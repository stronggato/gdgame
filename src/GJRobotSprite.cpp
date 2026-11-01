#include <Geode/binding/GJRobotSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x183890
// Method: GJRobotSprite::create
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJRobotSprite_create(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v5; // [rsp+38h] [rbp+10h]

  v5 = operator new(0x808u); /*0x1838a6*/
  v2 = SFXTriggerGameObject_SFXTriggerGameObject(v5); /*0x1838ae*/
  v3 = v2; /*0x1838b3*/
  if ( v2 ) /*0x1838b9*/
  {
    if ( EffectGameObject_init(v2, "GJ_sfxIcon_001.png") ) /*0x1838c5*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v3); /*0x1838d1*/
      *(_DWORD *)(v3 + 1888) = a1; /*0x1838d7*/
      *(_DWORD *)(v3 + 1908) = 1065353216; /*0x1838dd*/
      *(_QWORD *)(v3 + 1900) = 0; /*0x1838e9*/
      *(_QWORD *)(v3 + 1912) = 0; /*0x1838f0*/
      *(_QWORD *)(v3 + 1920) = 0; /*0x1838f7*/
      *(_BYTE *)(v3 + 1930) = 0; /*0x1838fe*/
      *(_BYTE *)(v3 + 1928) = 0; /*0x183904*/
      *(_DWORD *)(v3 + 1972) = 0; /*0x18390a*/
      return v3; /*0x18391d*/
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1); /*0x183926*/
  }
  return 0; /*0x183913*/
}

// [2/5] Address: 0x3a8bd0
// Method: GJRobotSprite::~GJRobotSprite
void __fastcall GJRobotSprite__dtor_GJRobotSprite(__int64 a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rax

  *(_QWORD *)a1 = &GJRobotSprite::`vftable'; /*0x3a8be0*/
  *(_QWORD *)(a1 + 320) = &GJRobotSprite::`vftable'; /*0x3a8bea*/
  *(_QWORD *)(a1 + 344) = &GJRobotSprite::`vftable'; /*0x3a8bf8*/
  v2 = *(cocos2d::CCObject **)(a1 + 760); /*0x3a8bff*/
  if ( v2 ) /*0x3a8c09*/
    cocos2d::CCObject::release(v2); /*0x3a8c0b*/
  v3 = *(cocos2d::CCObject **)(a1 + 744); /*0x3a8c11*/
  if ( v3 ) /*0x3a8c1b*/
    cocos2d::CCObject::release(v3); /*0x3a8c1d*/
  v4 = qword_905FD0; /*0x3a8c23*/
  if ( !qword_905FD0 ) /*0x3a8c2d*/
  {
    v5 = operator new(0x6E8u); /*0x3a8c34*/
    qword_905FD0 = sub_2723A0(v5); /*0x3a8c41*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3a8c52*/
    v4 = qword_905FD0; /*0x3a8c54*/
  }
  GameManager_unloadIcons(v4, *(_DWORD *)(a1 + 788)); /*0x3a8c61*/
  CCAnimatedSprite__dtor_CCAnimatedSprite((cocos2d::CCSprite *)a1); /*0x3a8c6e*/
}

// [4/5] Address: 0x3a9a00
// Method: GJRobotSprite::setOpacity
__int64 __fastcall GJRobotSprite_setOpacity(__int64 a1, unsigned __int8 a2)
{
  unsigned int v3; // ebx
  unsigned int i; // edi
  struct cocos2d::CCObject *v6; // rax
  cocos2d::CCArray *v7; // rdi
  struct cocos2d::CCObject *v8; // rax

  v3 = 0; /*0x3a9a17*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 440)); ++i ) /*0x3a9a25*/
  {
    v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 440), i); /*0x3a9a39*/
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v6 + 40) + 40LL))((__int64)v6 + 320, a2); /*0x3a9a4d*/
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 368) + 320LL) + 40LL))( /*0x3a9a78*/
    *(_QWORD *)(a1 + 368) + 320LL,
    a2);
  v7 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 448) + 480LL))(*(_QWORD *)(a1 + 448)); /*0x3a9a8e*/
  if ( cocos2d::CCArray::count(v7) ) /*0x3a9a91*/
  {
    do /*0x3a9ac9*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v7, v3); /*0x3a9aa5*/
      (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v8 + 40) + 40LL))((__int64)v8 + 320, a2); /*0x3a9ab9*/
      ++v3; /*0x3a9abf*/
    }
    while ( v3 < cocos2d::CCArray::count(v7) ); /*0x3a9ac9*/
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 456) + 320LL) + 40LL))(
           *(_QWORD *)(a1 + 456) + 320LL,
           a2);
}

// [5/5] Address: 0x3aa0f0
// Method: GJRobotSprite::hideSecondary
__int64 __fastcall GJRobotSprite_hideSecondary(__int64 a1)
{
  unsigned int i; // ebx
  struct cocos2d::CCObject *v3; // rax

  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 760)); ++i ) /*0x3aa106*/
  {
    v3 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 760), i); /*0x3aa119*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v3 + 336LL))(v3, 0); /*0x3aa12e*/
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 776) + 336LL))(*(_QWORD *)(a1 + 776), 0);
}
