#include <Geode/binding/SFXFolderPickerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0xc1d70
// Method: SFXFolderPickerPopup::~SFXFolderPickerPopup
_QWORD *__fastcall SFXFolderPickerPopup__dtor_SFXFolderPickerPopup(_QWORD *Block, char a2)
{
  *Block = &SFXFolderPickerPopup::`vftable'; /*0xc1d84*/
  Block[40] = &SFXFolderPickerPopup::`vftable'; /*0xc1d90*/
  Block[41] = &SFXFolderPickerPopup::`vftable'; /*0xc1d9e*/
  Block[42] = &SFXFolderPickerPopup::`vftable'; /*0xc1dac*/
  Block[43] = &SFXFolderPickerPopup::`vftable'; /*0xc1dba*/
  Block[44] = &SFXFolderPickerPopup::`vftable'; /*0xc1dc8*/
  Block[51] = &SFXFolderPickerPopup::`vftable'; /*0xc1dd6*/
  Block[54] = &SFXFolderPickerPopup::`vftable'; /*0xc1de4*/
  Block[68] = &SFXFolderPickerPopup::`vftable'; /*0xc1df2*/
  Block[83] = &SFXFolderPickerPopup::`vftable'; /*0xc1e00*/
  sub_BB6F0(Block + 87, Block + 87); /*0xc1e11*/
  sub_BB6F0(Block + 85, Block + 85); /*0xc1e20*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0xc1e28*/
  if ( (a2 & 1) != 0 ) /*0xc1e30*/
    j_j_free(Block); /*0xc1e3a*/
  return Block; /*0xc1e3f*/
}

// [2/7] Address: 0xc48f0
// Method: SFXFolderPickerPopup::setTextPopupClosed
// Hidden C++ exception states: #wind=3
double __fastcall SFXFolderPickerPopup_setTextPopupClosed(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // rcx
  void *v9; // [rsp+28h] [rbp-50h]
  _BYTE v10[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]

  v11 = a3; /*0xc4911*/
  if ( *(_QWORD *)(a3 + 16) ) /*0xc4916*/
  {
    v5 = 1; /*0xc4924*/
    if ( *(int *)(a1 + 48) > 0 ) /*0xc492b*/
      v5 = *(_DWORD *)(a1 + 48); /*0xc492b*/
    v6 = sub_3E4F0(v10, a3); /*0xc4945*/
    v7 = qword_906070; /*0xc4948*/
    if ( !qword_906070 ) /*0xc4952*/
    {
      v9 = operator new(0x3D0u); /*0xc495e*/
      qword_906070 = sub_47C350(v9); /*0xc496c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0xc497d*/
      v7 = qword_906070; /*0xc497f*/
    }
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(sub_4820A0(v7, v6, v5, 0) + 76); /*0xc4997*/
    sub_C3F10(a1 - 664); /*0xc49a1*/
  }
  return sub_3C310(a3); /*0xc49af*/
}

// [3/7] Address: 0xc4a30
// Method: SFXFolderPickerPopup::keyBackClicked
__int64 __fastcall SFXFolderPickerPopup_keyBackClicked(__int64 a1)
{
  __int64 v1; // rax
  _QWORD **v2; // rbx
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 392); /*0xc4a36*/
  v2 = (_QWORD **)(a1 - 336); /*0xc4a3d*/
  if ( v1 ) /*0xc4a47*/
  {
    *(_QWORD *)(v1 + 608) = 0; /*0xc4a49*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2[91] + 1032LL))(v2[91], 0); /*0xc4a60*/
  }
  ((void (__fastcall *)(_QWORD **, _QWORD))(*v2)[124])(v2, 0); /*0xc4a6e*/
  LOBYTE(v3) = 1; /*0xc4a77*/
  return ((__int64 (__fastcall *)(_QWORD **, __int64))(*v2)[65])(v2, v3);
}

// [4/7] Address: 0xc4a90
// Method: SFXFolderPickerPopup::ccTouchBegan
char __fastcall SFXFolderPickerPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  if ( *(_QWORD *)(a1 + 416) && (unsigned __int8)sub_80430() ) /*0xc4ab4*/
  {
    FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0xc4ac6*/
    return 1; /*0xc4adc*/
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0xc4ae6*/
  if ( result ) /*0xc4aed*/
    return 1; /*0xc4aed*/
  return result; /*0xc4acd*/
}

// [5/7] Address: 0xc4b00
// Method: SFXFolderPickerPopup::ccTouchMoved
__int64 __fastcall SFXFolderPickerPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 416) ) /*0xc4b15*/
    sub_804A0(); /*0xc4b24*/
  result = *(unsigned int *)(a2 + 56); /*0xc4b29*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0xc4b32*/
  {
    v7 = *(_QWORD *)(a1 + 232); /*0xc4b34*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0xc4b43*/
      return result; /*0xc4b43*/
    v7 = *(_QWORD *)(a1 + 304); /*0xc4b45*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 16LL))(v7 + 320, a2, a3); /*0xc4b5f*/
}

// [6/7] Address: 0xc4b70
// Method: SFXFolderPickerPopup::ccTouchEnded
__int64 __fastcall SFXFolderPickerPopup_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 416); /*0xc4b85*/
  if ( v4 ) /*0xc4b92*/
    SetupTriggerPopup_triggerSliderChanged(v4, a2, a3); /*0xc4b94*/
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0xc4ba2*/
}

// [7/7] Address: 0xc4bc0
// Method: SFXFolderPickerPopup::ccTouchCancelled
__int64 __fastcall SFXFolderPickerPopup_ccTouchCancelled(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 416) ) /*0xc4bd5*/
    sub_805B0(); /*0xc4be4*/
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0xc4bf2*/
}
