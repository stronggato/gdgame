#include <Geode/binding/NewgroundsInfoLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x37dc20
// Method: NewgroundsInfoLayer::onArtists
// Hidden C++ exception states: #wind=1
__int64 __fastcall NewgroundsInfoLayer_onArtists(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 (__fastcall *v3)(__int64); // rdx

  v2 = operator new(0x2C0u); /*0x37dc3c*/
  FLAlertLayer_FLAlertLayer((__int64)v2); /*0x37dc47*/
  *v2 = &ShardsPage::`vftable'; /*0x37dc53*/
  v2[40] = &ShardsPage::`vftable'; /*0x37dc5d*/
  v2[41] = &ShardsPage::`vftable'; /*0x37dc6b*/
  v2[42] = &ShardsPage::`vftable'; /*0x37dc79*/
  v2[43] = &ShardsPage::`vftable'; /*0x37dc87*/
  v2[44] = &ShardsPage::`vftable'; /*0x37dc95*/
  v2[51] = &ShardsPage::`vftable'; /*0x37dca3*/
  v2[54] = &ShardsPage::`vftable'; /*0x37dcb1*/
  v2[68] = &ShardsPage::`vftable'; /*0x37dcbf*/
  v2[83] = 0; /*0x37dcc8*/
  v2[84] = 0; /*0x37dccf*/
  v2[85] = 0; /*0x37dcd6*/
  v2[86] = 0; /*0x37dcdd*/
  *((_DWORD *)v2 + 174) = -1; /*0x37dce4*/
  if ( (unsigned __int8)ShardsPage_init(v2) ) /*0x37dd04*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x37dd14*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x37dd24*/
    v2 = 0; /*0x37dd27*/
  }
  v2[71] = a1; /*0x37dd2a*/
  v3 = *(__int64 (__fastcall **)(__int64))(*v2 + 1064LL); /*0x37dd34*/
  if ( v3 == TopArtistsLayer_show ) /*0x37dd48*/
    return TopArtistsLayer_show((__int64)v2); /*0x37dd59*/
  else
    return v3((__int64)v2); /*0x37dd6d*/
}
