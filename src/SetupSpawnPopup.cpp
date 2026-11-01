#include <Geode/binding/SetupSpawnPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/9] Address: 0x1bcec0
// Method: SetupSpawnPopup::queueUpdateButtons
bool __fastcall SetupSpawnPopup_queueUpdateButtons(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  bool result; // al

  result = !*(_BYTE *)(a1 + 736) /*0x1bcf3b*/
        && (v2 = cocos2d::CCDirector::sharedDirector(a1),
            !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 176LL))(v2) + 152))
        && (*(_BYTE *)(a1 + 912)
         || (v4 = cocos2d::CCDirector::sharedDirector(v3),
             *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4) + 153))
         || (v6 = cocos2d::CCDirector::sharedDirector(v5),
             *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) + 155)))
        && *(_DWORD *)(a1 + 1508) == 3;
  return result; /*0x1bcf3d*/
}

// [4/9] Address: 0x5b4b70
// Method: SetupSpawnPopup::onClose
__int64 __fastcall SetupSpawnPopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+18h]

  v2 = qword_905FD0; /*0x5b4b80*/
  if ( !qword_905FD0 ) /*0x5b4b8a*/
  {
    v4 = operator new(0x6E8u); /*0x5b4b96*/
    qword_905FD0 = sub_2723A0(v4); /*0x5b4ba4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5b4bb5*/
    v2 = qword_905FD0; /*0x5b4bb7*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 568) + 14873LL) = 1; /*0x5b4bc5*/
  return SetupTriggerPopup_onClose(a1); /*0x5b4bd2*/
}

// [5/9] Address: 0x5eeee0
// Method: SetupSpawnPopup::~SetupSpawnPopup
_QWORD *__fastcall SetupSpawnPopup__dtor_SetupSpawnPopup(_QWORD *Block, char a2)
{
  *Block = &SetupSpawnPopup::`vftable'; /*0x5eeef4*/
  Block[40] = &SetupSpawnPopup::`vftable'; /*0x5eef00*/
  Block[41] = &SetupSpawnPopup::`vftable'; /*0x5eef0e*/
  Block[42] = &SetupSpawnPopup::`vftable'; /*0x5eef1c*/
  Block[43] = &SetupSpawnPopup::`vftable'; /*0x5eef2a*/
  Block[44] = &SetupSpawnPopup::`vftable'; /*0x5eef38*/
  Block[51] = &SetupSpawnPopup::`vftable'; /*0x5eef46*/
  Block[54] = &SetupSpawnPopup::`vftable'; /*0x5eef54*/
  Block[68] = &SetupSpawnPopup::`vftable'; /*0x5eef62*/
  Block[83] = &SetupSpawnPopup::`vftable'; /*0x5eef70*/
  Block[84] = &SetupSpawnPopup::`vftable'; /*0x5eef7e*/
  sub_3DA90(Block + 127); /*0x5eef8c*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x5eef94*/
  if ( (a2 & 1) != 0 ) /*0x5eef9c*/
    j_j_free(Block); /*0x5eefa6*/
  return Block; /*0x5eefab*/
}

// [6/9] Address: 0x5eefc0
// Method: SetupSpawnPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupSpawnPopup_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x418u); /*0x5eefe4*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5eefef*/
  *v4 = &SetupSpawnPopup::`vftable'; /*0x5eeffb*/
  v4[40] = &SetupSpawnPopup::`vftable'; /*0x5ef005*/
  v4[41] = &SetupSpawnPopup::`vftable'; /*0x5ef013*/
  v4[42] = &SetupSpawnPopup::`vftable'; /*0x5ef021*/
  v4[43] = &SetupSpawnPopup::`vftable'; /*0x5ef02f*/
  v4[44] = &SetupSpawnPopup::`vftable'; /*0x5ef03d*/
  v4[51] = &SetupSpawnPopup::`vftable'; /*0x5ef04b*/
  v4[54] = &SetupSpawnPopup::`vftable'; /*0x5ef059*/
  v4[68] = &SetupSpawnPopup::`vftable'; /*0x5ef067*/
  v4[83] = &SetupSpawnPopup::`vftable'; /*0x5ef075*/
  v4[84] = &SetupSpawnPopup::`vftable'; /*0x5ef083*/
  *((_BYTE *)v4 + 1000) = 0; /*0x5ef08a*/
  v4[127] = 0; /*0x5ef093*/
  v4[128] = 0; /*0x5ef09a*/
  v4[129] = 0; /*0x5ef0a1*/
  v4[130] = 0; /*0x5ef0a8*/
  if ( (unsigned __int8)sub_5EF100(v4, a1, a2) ) /*0x5ef0b8*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5ef0c4*/
    return v4; /*0x5ef0ca*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5ef0de*/
    return 0; /*0x5ef0e1*/
  }
}

// [7/9] Address: 0x5eff30
// Method: SetupSpawnPopup::onAddRemap
void __fastcall SetupSpawnPopup_onAddRemap(_BYTE *a1)
{
  unsigned int v2; // ebx
  float v3; // xmm0_4

  if ( !a1[1000] ) /*0x5eff36*/
  {
    v2 = (int)(*(float (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 0xFFFFFFFFLL); /*0x5eff60*/
    v3 = (*(float (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 4294967294LL); /*0x5eff64*/
    sub_5EFF90(a1, v2, (unsigned int)(int)v3); /*0x5eff74*/
  }
}

// [8/9] Address: 0x5f0240
// Method: SetupSpawnPopup::onPasteRemap
// Hidden C++ exception states: #wind=1
void __fastcall SetupSpawnPopup_onPasteRemap(__int64 a1)
{
  __int64 v2; // rdi
  __int64 ***v3; // rdi
  __int64 **i; // rbx
  void *v5; // [rsp+40h] [rbp+18h]

  v2 = qword_905FD0; /*0x5f0252*/
  if ( !qword_905FD0 ) /*0x5f025c*/
  {
    v5 = operator new(0x6E8u); /*0x5f0268*/
    qword_905FD0 = sub_2723A0(v5); /*0x5f0276*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5f0287*/
    v2 = qword_905FD0; /*0x5f0289*/
  }
  v3 = *(__int64 ****)(*(_QWORD *)(v2 + 568) + 15672LL); /*0x5f0297*/
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i ) /*0x5f02a4*/
    sub_5EFF90(a1, *((unsigned int *)i + 4), *((unsigned int *)i + 5)); /*0x5f02ba*/
}

// [9/9] Address: 0x5f0b10
// Method: SetupSpawnPopup::onSelectRemap
void __fastcall SetupSpawnPopup_onSelectRemap(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r8
  int v5; // edx
  __int64 v6; // rcx

  if ( !*(_BYTE *)(a1 + 1000) ) /*0x5f0b16*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5f0b2c*/
    v4 = *(_QWORD *)(a1 + 1016); /*0x5f0b2f*/
    if ( (*(_QWORD *)(a1 + 1024) - v4) >> 3 <= (unsigned __int64)v3 ) /*0x5f0b4a*/
      sub_5F0C30(); /*0x5f0bcb*/
    v5 = *(_DWORD *)(v4 + 8LL * v3); /*0x5f0b4c*/
    v6 = v4 + 8LL * v3; /*0x5f0b50*/
    if ( *(_QWORD *)(a1 + 1040) == __PAIR64__(*(_DWORD *)(v6 + 4), v5) ) /*0x5f0b5a*/
    {
      *(_QWORD *)(a1 + 1040) = 0; /*0x5f0b6c*/
    }
    else
    {
      *(_DWORD *)(a1 + 1040) = v5; /*0x5f0b81*/
      *(_DWORD *)(a1 + 1044) = *(_DWORD *)(v6 + 4); /*0x5f0b95*/
      SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0xFFFFFFFF, (float)v5); /*0x5f0b9b*/
      SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0xFFFFFFFE, (float)*(int *)(a1 + 1044)); /*0x5f0bb3*/
    }
    sub_5F0BE0(a1); /*0x5f0b78*/
  }
}
