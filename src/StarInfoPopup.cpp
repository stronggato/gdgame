#include <Geode/binding/StarInfoPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x59280
// Method: StarInfoPopup::~StarInfoPopup
void __fastcall StarInfoPopup__dtor_StarInfoPopup(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax

  *(_QWORD *)a1 = &FLAlertLayer::`vftable'; /*0x59290*/
  *(_QWORD *)(a1 + 320) = &FLAlertLayer::`vftable'; /*0x5929a*/
  *(_QWORD *)(a1 + 328) = &FLAlertLayer::`vftable'; /*0x592a8*/
  *(_QWORD *)(a1 + 336) = &FLAlertLayer::`vftable'; /*0x592b6*/
  *(_QWORD *)(a1 + 344) = &FLAlertLayer::`vftable'; /*0x592c4*/
  *(_QWORD *)(a1 + 352) = &FLAlertLayer::`vftable'; /*0x592d2*/
  *(_QWORD *)(a1 + 408) = &FLAlertLayer::`vftable'; /*0x592e0*/
  *(_QWORD *)(a1 + 432) = &FLAlertLayer::`vftable'; /*0x592ee*/
  *(_QWORD *)(a1 + 544) = &FLAlertLayer::`vftable'; /*0x592fc*/
  if ( *(_BYTE *)(a1 + 644) ) /*0x59303*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x5930c*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x5931f*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, (struct cocos2d::CCObject *)a1); /*0x59327*/
  }
  cocos2d::CCLayerColor::~CCLayerColor((cocos2d::CCLayerColor *)a1); /*0x59335*/
}

// [2/2] Address: 0x5571f0
// Method: StarInfoPopup::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall StarInfoPopup_create(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  cocos2d::CCObject *v14; // r14

  v14 = (cocos2d::CCObject *)operator new(0x298u); /*0x55721e*/
  FLAlertLayer_FLAlertLayer((__int64)v14); /*0x557229*/
  *(_QWORD *)v14 = &StarInfoPopup::`vftable'; /*0x557235*/
  *((_QWORD *)v14 + 40) = &StarInfoPopup::`vftable'; /*0x55723f*/
  *((_QWORD *)v14 + 41) = &StarInfoPopup::`vftable'; /*0x55724d*/
  *((_QWORD *)v14 + 42) = &StarInfoPopup::`vftable'; /*0x55725b*/
  *((_QWORD *)v14 + 43) = &StarInfoPopup::`vftable'; /*0x557269*/
  *((_QWORD *)v14 + 44) = &StarInfoPopup::`vftable'; /*0x557277*/
  *((_QWORD *)v14 + 51) = &StarInfoPopup::`vftable'; /*0x557285*/
  *((_QWORD *)v14 + 54) = &StarInfoPopup::`vftable'; /*0x557293*/
  *((_QWORD *)v14 + 68) = &StarInfoPopup::`vftable'; /*0x5572a1*/
  if ( (unsigned __int8)sub_557340((_DWORD)v14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) ) /*0x5572fa*/
  {
    cocos2d::CCObject::autorelease(v14); /*0x557306*/
    return v14; /*0x55730c*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1); /*0x557319*/
    return 0; /*0x55731c*/
  }
}
