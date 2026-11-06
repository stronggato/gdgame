#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/CollisionBlockPopup.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub UIPOptionsLayer__dtor_UIPOptionsLayer;
using namespace cocos2d;

// [1/2] Address: 0xa39a0
// Method: CollisionBlockPopup::~CollisionBlockPopup
CollisionBlockPopup::~CollisionBlockPopup()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

//   *(_QWORD *)Block = &CollisionBlockPopup::`vftable'; /*0xa39b3*/ // cleaned vftable
//   *((_QWORD *)Block + 40) = &CollisionBlockPopup::`vftable'; /*0xa39c0*/ // cleaned vftable
//   *((_QWORD *)Block + 41) = &CollisionBlockPopup::`vftable'; /*0xa39ce*/ // cleaned vftable
//   *((_QWORD *)Block + 42) = &CollisionBlockPopup::`vftable'; /*0xa39dc*/ // cleaned vftable
//   *((_QWORD *)Block + 43) = &CollisionBlockPopup::`vftable'; /*0xa39ea*/ // cleaned vftable
//   *((_QWORD *)Block + 44) = &CollisionBlockPopup::`vftable'; /*0xa39f8*/ // cleaned vftable
//   *((_QWORD *)Block + 51) = &CollisionBlockPopup::`vftable'; /*0xa3a06*/ // cleaned vftable
//   *((_QWORD *)Block + 54) = &CollisionBlockPopup::`vftable'; /*0xa3a14*/ // cleaned vftable
//   *((_QWORD *)Block + 68) = &CollisionBlockPopup::`vftable'; /*0xa3a22*/ // cleaned vftable
//   *((_QWORD *)Block + 83) = &CollisionBlockPopup::`vftable'; /*0xa3a30*/ // cleaned vftable
//   *((_QWORD *)Block + 84) = &CollisionBlockPopup::`vftable'; /*0xa3a3e*/ // cleaned vftable
//   UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0xa3a45*/ // cleaned dtor call
//   if ( (a2 & 1) != 0 ) /*0xa3a4d*/
//     j_j_free(Block); /*0xa3a57*/ // cleaned scalar delete
  return; /*0xa3a5c*/
}

// [2/2] Address: 0xa4000
// Method: CollisionBlockPopup::valueDidChange
void CollisionBlockPopup::valueDidChange(int p0, float p1)
{
  __int64 a1 = (__int64)this;
  int a2 = to_gd_val<int>(p0);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 result; // rax

  if ( a2 == 80 || a2 == 94 ) /*0xa4008*/
    { sub_607BB0(a1); return; } /*0xa400a*/
  { result; return; } /*0xa400f*/
}
