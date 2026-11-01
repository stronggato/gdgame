#include <Geode/binding/GridSettingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x2c5330
// Method: GridSettingsLayer::~GridSettingsLayer
cocos2d::CCNode *__fastcall GridSettingsLayer__dtor_GridSettingsLayer(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GridSettingsLayer::`vftable'; /*0x2c5343*/
  *((_QWORD *)Block + 40) = &GridSettingsLayer::`vftable'; /*0x2c5350*/
  *((_QWORD *)Block + 41) = &GridSettingsLayer::`vftable'; /*0x2c535e*/
  *((_QWORD *)Block + 42) = &GridSettingsLayer::`vftable'; /*0x2c536c*/
  *((_QWORD *)Block + 43) = &GridSettingsLayer::`vftable'; /*0x2c537a*/
  *((_QWORD *)Block + 44) = &GridSettingsLayer::`vftable'; /*0x2c5388*/
  *((_QWORD *)Block + 51) = &GridSettingsLayer::`vftable'; /*0x2c5396*/
  *((_QWORD *)Block + 54) = &GridSettingsLayer::`vftable'; /*0x2c53a4*/
  *((_QWORD *)Block + 68) = &GridSettingsLayer::`vftable'; /*0x2c53b2*/
  *((_QWORD *)Block + 83) = &GridSettingsLayer::`vftable'; /*0x2c53c0*/
  *((_QWORD *)Block + 84) = &GridSettingsLayer::`vftable'; /*0x2c53ce*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x2c53d5*/
  if ( (a2 & 1) != 0 ) /*0x2c53dd*/
    j_j_free(Block); /*0x2c53e7*/
  return Block; /*0x2c53ec*/
}

// [3/4] Address: 0x2c5b30
// Method: GridSettingsLayer::getValue
double __fastcall GridSettingsLayer_getValue(__int64 a1, int a2)
{
  __int64 v2; // rax
  double result; // xmm0_8
  __int64 v4; // rax
  double v5; // xmm1_8

  if ( a2 == -2 ) /*0x2c5b33*/
  {
    v4 = *(_QWORD *)(a1 + 1000); /*0x2c5b60*/
    if ( v4 ) /*0x2c5b6a*/
    {
      *(_QWORD *)&v5 = *(unsigned int *)(v4 + 700); /*0x2c5b75*/
      if ( *(float *)&v5 <= 0.0 ) /*0x2c5b83*/
        *(_QWORD *)&v5 = 1106247680; /*0x2c5b85*/
      return v5; /*0x2c5b8d*/
    }
    else
    {
      *(_QWORD *)&result = 1106247680; /*0x2c5b6c*/
    }
  }
  else if ( a2 == -1 ) /*0x2c5b38*/
  {
    v2 = *(_QWORD *)(a1 + 1000); /*0x2c5b3e*/
    if ( v2 && *(_BYTE *)(v2 + 704) ) /*0x2c5b4a*/
      *(_QWORD *)&result = 1065353216; /*0x2c5b53*/
    else
      return 0.0; /*0x2c5b5c*/
  }
  else
  {
    return SetupTriggerPopup_getValue(a1, a2); /*0x2c5b38*/
  }
  return result; /*0x2c5b5b*/
}

// [4/4] Address: 0x2c5ba0
// Method: GridSettingsLayer::valueDidChange
__int64 __fastcall GridSettingsLayer_valueDidChange(__int64 a1, __int64 a2, float a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( (_DWORD)a2 == -2 ) /*0x2c5ba3*/
  {
    if ( *(_QWORD *)(a1 + 1000) ) /*0x2c5bce*/
      return SongOptionsLayer_onPlayback(); /*0x2c5bf3*/
  }
  else if ( (_DWORD)a2 == -1 ) /*0x2c5ba8*/
  {
    v3 = *(_QWORD *)(a1 + 1000); /*0x2c5baa*/
    if ( v3 ) /*0x2c5bb4*/
    {
      if ( a3 == 0.0 ) /*0x2c5bbe*/
      {
        return sub_1AB980(v3, 0); /*0x2c5bc2*/
      }
      else
      {
        LOBYTE(a2) = 1; /*0x2c5bc7*/
        return sub_1AB980(v3, a2); /*0x2c5bc9*/
      }
    }
  }
  return result; /*0x2c5bf8*/
}
