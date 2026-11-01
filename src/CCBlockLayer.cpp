#include <Geode/binding/CCBlockLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x45020
// Method: CCBlockLayer::CCBlockLayer
__int64 __fastcall CCBlockLayer_CCBlockLayer(__int64 a1)
{
  cocos2d::CCLayerColor::CCLayerColor((cocos2d::CCLayerColor *)a1); /*0x45029*/
  *(_WORD *)(a1 + 544) = 0; /*0x45036*/
  *(_QWORD *)a1 = &CCBlockLayer::`vftable'; /*0x4503f*/
  *(_QWORD *)(a1 + 320) = &CCBlockLayer::`vftable'; /*0x45049*/
  *(_QWORD *)(a1 + 328) = &CCBlockLayer::`vftable'; /*0x45057*/
  *(_QWORD *)(a1 + 336) = &CCBlockLayer::`vftable'; /*0x45065*/
  *(_QWORD *)(a1 + 344) = &CCBlockLayer::`vftable'; /*0x45073*/
  *(_QWORD *)(a1 + 352) = &CCBlockLayer::`vftable'; /*0x45081*/
  *(_QWORD *)(a1 + 408) = &CCBlockLayer::`vftable'; /*0x4508f*/
  *(_QWORD *)(a1 + 432) = &CCBlockLayer::`vftable'; /*0x4509d*/
  return a1; /*0x450a7*/
}

// [2/7] Address: 0x450f0
// Method: CCBlockLayer::~CCBlockLayer
void __fastcall CCBlockLayer__dtor_CCBlockLayer(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax

  *(_QWORD *)a1 = &CCBlockLayer::`vftable'; /*0x45100*/
  *(_QWORD *)(a1 + 320) = &CCBlockLayer::`vftable'; /*0x4510a*/
  *(_QWORD *)(a1 + 328) = &CCBlockLayer::`vftable'; /*0x45118*/
  *(_QWORD *)(a1 + 336) = &CCBlockLayer::`vftable'; /*0x45126*/
  *(_QWORD *)(a1 + 344) = &CCBlockLayer::`vftable'; /*0x45134*/
  *(_QWORD *)(a1 + 352) = &CCBlockLayer::`vftable'; /*0x45142*/
  *(_QWORD *)(a1 + 408) = &CCBlockLayer::`vftable'; /*0x45150*/
  *(_QWORD *)(a1 + 432) = &CCBlockLayer::`vftable'; /*0x4515e*/
  if ( *(_BYTE *)(a1 + 545) ) /*0x45165*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x4516e*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x45181*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, (struct cocos2d::CCObject *)a1); /*0x45189*/
  }
  cocos2d::CCLayerColor::~CCLayerColor((cocos2d::CCLayerColor *)a1); /*0x45197*/
}

// [3/7] Address: 0x452f0
// Method: CCBlockLayer::keyBackClicked
__int64 __fastcall CCBlockLayer_keyBackClicked(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 336) + 1072LL))(a1 - 336);
}

// [4/7] Address: 0x45310
// Method: CCBlockLayer::exitLayer
__int64 __fastcall CCBlockLayer_exitLayer(__int64 a1)
{
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x4531e*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1120LL))(a1); /*0x4532a*/
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, 0);
}

// [5/7] Address: 0x45350
// Method: CCBlockLayer::showLayer
__int64 __fastcall CCBlockLayer_showLayer(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1);
}

// [6/7] Address: 0x45360
// Method: CCBlockLayer::hideLayer
__int64 __fastcall CCBlockLayer_hideLayer(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1104LL))(a1);
}

// [7/7] Address: 0x45380
// Method: CCBlockLayer::layerHidden
__int64 __fastcall CCBlockLayer_layerHidden(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 336LL))(a1, 0); /*0x4538e*/
  if ( a1[544] ) /*0x45394*/
  {
    LOBYTE(v3) = 1; /*0x453a0*/
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v3); /*0x453aa*/
  }
  return result; /*0x453b1*/
}
