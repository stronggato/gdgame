#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/CCBlockLayer.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};

using namespace cocos2d;

// [1/7] Address: 0x45020
// Method: CCBlockLayer::CCBlockLayer
CCBlockLayer::CCBlockLayer()
{
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

//   cocos2d::CCLayerColor::CCLayerColor((cocos2d::CCLayerColor *)a1); /*0x45029*/ // cleaned base ctor/dtor
  *(_WORD *)(((uintptr_t)a1 + 544))  = (uintptr_t)(0); /*0x45036*/
//   *(_QWORD *)a1 = &CCBlockLayer::`vftable'; /*0x4503f*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 320)) = &CCBlockLayer::`vftable'; /*0x45049*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 328)) = &CCBlockLayer::`vftable'; /*0x45057*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 336)) = &CCBlockLayer::`vftable'; /*0x45065*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 344)) = &CCBlockLayer::`vftable'; /*0x45073*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 352)) = &CCBlockLayer::`vftable'; /*0x45081*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 408)) = &CCBlockLayer::`vftable'; /*0x4508f*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 432)) = &CCBlockLayer::`vftable'; /*0x4509d*/ // cleaned vftable
  return; /*0x450a7*/
}

// [2/7] Address: 0x450f0
// Method: CCBlockLayer::~CCBlockLayer
CCBlockLayer::~CCBlockLayer()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax

//   *(_QWORD *)a1 = &CCBlockLayer::`vftable'; /*0x45100*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 320)) = &CCBlockLayer::`vftable'; /*0x4510a*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 328)) = &CCBlockLayer::`vftable'; /*0x45118*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 336)) = &CCBlockLayer::`vftable'; /*0x45126*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 344)) = &CCBlockLayer::`vftable'; /*0x45134*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 352)) = &CCBlockLayer::`vftable'; /*0x45142*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 408)) = &CCBlockLayer::`vftable'; /*0x45150*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 432)) = &CCBlockLayer::`vftable'; /*0x4515e*/ // cleaned vftable
  if ( *(_BYTE *)(((uintptr_t)a1 + 545)) ) /*0x45165*/
  {
    v2 = ((uintptr_t)cocos2d::CCDirector::sharedDirector()); /*0x4516e*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x45181*/
    (((cocos2d::CCTouchDispatcher*)(v3))->unregisterForcePrio((cocos2d::CCObject*)((struct cocos2d::CCObject *)a1))); /*0x45189*/
  }
//   cocos2d::CCLayerColor::~CCLayerColor((cocos2d::CCLayerColor *)a1); /*0x45197*/ // cleaned base ctor/dtor
}

// [3/7] Address: 0x452f0
// Method: CCBlockLayer::keyBackClicked
void CCBlockLayer::keyBackClicked()
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(((uintptr_t)a1 - 336)) + 1072LL))(((uintptr_t)a1 - 336)); return; }
}

// [4/7] Address: 0x45310
// Method: CCBlockLayer::exitLayer
void CCBlockLayer::exitLayer()
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x4531e*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1120LL))(a1); /*0x4532a*/
  { (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, 0); return; }
}

// [5/7] Address: 0x45350
// Method: CCBlockLayer::showLayer
void CCBlockLayer::showLayer(bool instant)
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1); return; }
}

// [6/7] Address: 0x45360
// Method: CCBlockLayer::hideLayer
void CCBlockLayer::hideLayer(bool instant)
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1104LL))(a1); return; }
}

// [7/7] Address: 0x45380
// Method: CCBlockLayer::layerHidden
void CCBlockLayer::layerHidden()
{
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 result; // rax
  __int64 v3; // rdx

  result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 336LL))(a1, 0); /*0x4538e*/
  if ( a1[544] ) /*0x45394*/
  {
    LOBYTE(v3) = 1; /*0x453a0*/
    { (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v3); return; } /*0x453aa*/
  }
  { result; return; } /*0x453b1*/
}
