#include <Geode/binding/SetupEnterTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x395400
// Method: SetupEnterTriggerPopup::~SetupEnterTriggerPopup
cocos2d::CCNode *__fastcall SetupEnterTriggerPopup__dtor_SetupEnterTriggerPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupEnterTriggerPopup::`vftable'; /*0x395413*/
  *((_QWORD *)Block + 40) = &SetupEnterTriggerPopup::`vftable'; /*0x395420*/
  *((_QWORD *)Block + 41) = &SetupEnterTriggerPopup::`vftable'; /*0x39542e*/
  *((_QWORD *)Block + 42) = &SetupEnterTriggerPopup::`vftable'; /*0x39543c*/
  *((_QWORD *)Block + 43) = &SetupEnterTriggerPopup::`vftable'; /*0x39544a*/
  *((_QWORD *)Block + 44) = &SetupEnterTriggerPopup::`vftable'; /*0x395458*/
  *((_QWORD *)Block + 51) = &SetupEnterTriggerPopup::`vftable'; /*0x395466*/
  *((_QWORD *)Block + 54) = &SetupEnterTriggerPopup::`vftable'; /*0x395474*/
  *((_QWORD *)Block + 68) = &SetupEnterTriggerPopup::`vftable'; /*0x395482*/
  *((_QWORD *)Block + 83) = &SetupEnterTriggerPopup::`vftable'; /*0x395490*/
  *((_QWORD *)Block + 84) = &SetupEnterTriggerPopup::`vftable'; /*0x39549e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x3954a5*/
  if ( (a2 & 1) != 0 ) /*0x3954ad*/
    j_j_free(Block); /*0x3954b7*/
  return Block; /*0x3954bc*/
}

// [2/2] Address: 0x396ec0
// Method: SetupEnterTriggerPopup::determineStartValues
void __fastcall SetupEnterTriggerPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rsi
  unsigned int v4; // edi
  struct cocos2d::CCObject *v5; // rax
  int v6; // edx
  int v7; // ecx

  SetupTriggerPopup_determineStartValues(a1); /*0x396ecd*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x396ed2*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x396eec*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x396eef*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x396ef7*/
  }
  if ( v3 ) /*0x396f01*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x396f06*/
    {
      v4 = 0; /*0x396f1f*/
      for ( *(_DWORD *)(a1 + 1016) = -1; v4 < cocos2d::CCArray::count(v3); ++v4 ) /*0x396f2b*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x396f3a*/
        v6 = *(_DWORD *)(a1 + 1016); /*0x396f40*/
        v7 = *((_DWORD *)v5 + 464); /*0x396f46*/
        if ( v6 >= 0 ) /*0x396f4e*/
        {
          if ( v6 != v7 ) /*0x396f5a*/
            *(_DWORD *)(a1 + 1016) = 0; /*0x396f5c*/
        }
        else
        {
          *(_DWORD *)(a1 + 1016) = v7; /*0x396f50*/
        }
      }
    }
  }
}
