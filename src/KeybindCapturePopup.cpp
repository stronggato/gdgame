#include <Geode/binding/KeybindCapturePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x44a110
// Method: KeybindCapturePopup::~KeybindCapturePopup
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall KeybindCapturePopup__dtor_KeybindCapturePopup(_QWORD *Block, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  cocos2d::CCTextureCache *v7; // rax

  *Block = &KeybindCapturePopup::`vftable'; /*0x44a126*/
  Block[40] = &KeybindCapturePopup::`vftable'; /*0x44a130*/
  Block[41] = &KeybindCapturePopup::`vftable'; /*0x44a13e*/
  Block[42] = &KeybindCapturePopup::`vftable'; /*0x44a14c*/
  Block[43] = &KeybindCapturePopup::`vftable'; /*0x44a15a*/
  Block[44] = &KeybindCapturePopup::`vftable'; /*0x44a168*/
  Block[51] = &KeybindCapturePopup::`vftable'; /*0x44a176*/
  Block[54] = &KeybindCapturePopup::`vftable'; /*0x44a184*/
  Block[68] = &KeybindCapturePopup::`vftable'; /*0x44a192*/
  Block[83] = &KeybindCapturePopup::`vftable'; /*0x44a1a0*/
  Block[84] = &KeybindCapturePopup::`vftable'; /*0x44a1ae*/
  Block[125] = &KeybindCapturePopup::`vftable'; /*0x44a1bc*/
  v4 = cocos2d::CCDirector::sharedDirector(Block); /*0x44a1c3*/
  *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 176LL))(v4) + 158) = 0; /*0x44a1d8*/
  if ( *((_BYTE *)Block + 1038) ) /*0x44a1df*/
  {
    v7 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v6, v5); /*0x44a1e8*/
    cocos2d::CCTextureCache::removeTextureForKey(v7, "controller_outline.png"); /*0x44a1f8*/
  }
  Block[125] = &InputCaptureDelegate::`vftable'; /*0x44a205*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x44a20f*/
  if ( (a2 & 1) != 0 ) /*0x44a219*/
    j_j_free(Block); /*0x44a223*/
  return Block; /*0x44a22b*/
}

// [2/5] Address: 0x44a240
// Method: KeybindCapturePopup::inputKeySelected
__int64 __fastcall KeybindCapturePopup_inputKeySelected(__int64 a1, int a2)
{
  __int64 v3; // rcx

  v3 = a1 - 1000; /*0x44a243*/
  if ( *(_BYTE *)(v3 + 1037) && a2 == *(_DWORD *)(a1 + 32) ) /*0x44a257*/
    return sub_44AAE0(v3, 0); /*0x44a25b*/
  *(_DWORD *)(a1 + 32) = a2; /*0x44a260*/
  *(_BYTE *)(a1 + 37) = 1; /*0x44a264*/
  return sub_44A270();
}

// [3/5] Address: 0x44acc0
// Method: KeybindCapturePopup::onClose
__int64 __fastcall KeybindCapturePopup_onClose(__int64 a1)
{
  __int64 v2; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x44acd0*/
  *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 176LL))(v2) + 158) = 0; /*0x44ace8*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1008LL))(a1, 0); /*0x44acf2*/
  return SetupTriggerPopup_onClose(a1); /*0x44acfe*/
}

// [4/5] Address: 0x44ad10
// Method: KeybindCapturePopup::keyDown
char __fastcall KeybindCapturePopup_keyDown(__int64 a1, int a2)
{
  unsigned __int16 v2; // di
  char result; // al
  __int64 v5; // rax
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // bp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  _DWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // rdx
  bool v22; // bp
  void (__fastcall ***v23)(_QWORD, void *, __int64); // rcx
  int v24; // eax
  __int64 v25; // rcx

  v2 = a2; /*0x44ad1d*/
  result = a2 - 16; /*0x44ad30*/
  switch ( a2 ) /*0x44ad45*/
  {
    case 16: /*0x44ad45*/
    case 17: /*0x44ad45*/
    case 18: /*0x44ad45*/
    case 160: /*0x44ad45*/
    case 161: /*0x44ad45*/
    case 162: /*0x44ad45*/
    case 163: /*0x44ad45*/
      return result;
    case 27: /*0x44ad45*/
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 344) + 1104LL))(a1 - 344, 0); /*0x44ad5e*/
      break; /*0x44ad5e*/
    default:
      v5 = cocos2d::CCDirector::sharedDirector(a1); /*0x44ad6f*/
      v6 = *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5) + 153); /*0x44ad84*/
      v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x44ad8b*/
      v9 = *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 176LL))(v8) + 154); /*0x44ada0*/
      v11 = cocos2d::CCDirector::sharedDirector(v10); /*0x44ada7*/
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 176LL))(v11); /*0x44adba*/
      v13 = v2; /*0x44adbc*/
      v14 = *(unsigned __int8 *)(v12 + 152); /*0x44adbf*/
      if ( (unsigned int)v2 - 1001 > 0x2B ) /*0x44add0*/
      {
        v15 = v2 | 0x10000; /*0x44add4*/
        if ( !v6 ) /*0x44addb*/
          v15 = v2; /*0x44addb*/
        v16 = v15 | 0x20000; /*0x44ade0*/
        if ( !v9 ) /*0x44ade7*/
          v16 = v15; /*0x44ade7*/
        v13 = v16; /*0x44adea*/
        LODWORD(v13) = v16 | 0x40000; /*0x44adec*/
        if ( !(_BYTE)v14 ) /*0x44adf3*/
          v13 = v16; /*0x44adf3*/
      }
      v17 = (unsigned __int16)v13; /*0x44adfd*/
      if ( !*(_BYTE *)(a1 + 695) /*0x44ae14*/
        || (result = (unsigned int)(unsigned __int16)v13 - 1001 <= 0x2B, result == *(_BYTE *)(a1 + 694)) )
      {
        v18 = (_DWORD *)(a1 + 688); /*0x44ae21*/
        if ( *(_BYTE *)(a1 + 693) && (_DWORD)v13 == *v18 ) /*0x44ae2c*/
        {
          result = sub_44AAE0(a1 - 344, 0); /*0x44ae37*/
        }
        else
        {
          *v18 = v13; /*0x44ae41*/
          v19 = *(_QWORD *)(a1 + 712); /*0x44ae43*/
          *(_BYTE *)(a1 + 693) = 0; /*0x44ae4a*/
          if ( v19 ) /*0x44ae54*/
          {
            v20 = *(_QWORD *)(v19 + 344); /*0x44ae56*/
            v21 = &unk_6FEBE0; /*0x44ae5d*/
            v22 = (v17 & 1) == 0; /*0x44ae6b*/
            *(_BYTE *)(v19 + 328) = v22; /*0x44ae6f*/
            v23 = (void (__fastcall ***)(_QWORD, void *, __int64))(v20 + 320); /*0x44ae76*/
            if ( (v17 & 1) == 0 ) /*0x44ae84*/
              v21 = &unk_6FEBC4; /*0x44ae84*/
            (**v23)(v23, v21, v14); /*0x44ae8b*/
            v24 = v17 - 1; /*0x44ae94*/
            if ( (v17 & 1) != 0 ) /*0x44ae9a*/
              v24 = v17; /*0x44ae9a*/
            *(_DWORD *)(*(_QWORD *)(a1 + 712) + 332LL) = v24; /*0x44ae9d*/
            sub_443F90(); /*0x44aea3*/
            v25 = *(_QWORD *)(a1 + 720); /*0x44aea8*/
            if ( v25 ) /*0x44aeb2*/
              CCMenuItemToggler_toggle(v25, v22); /*0x44aeb8*/
          }
          result = sub_44A270(a1 - 344, v13, v14); /*0x44aec4*/
        }
      }
      break; /*0x44ae3c*/
  }
  return result; /*0x44aed3*/
}

// [5/5] Address: 0x44af80
// Method: KeybindCapturePopup::keyUp
__int64 __fastcall KeybindCapturePopup_keyUp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 688); /*0x44af80*/
  if ( (_DWORD)result ) /*0x44af88*/
  {
    result = (unsigned __int16)result; /*0x44af8a*/
    if ( (_DWORD)a2 == (unsigned __int16)result ) /*0x44af8f*/
    {
      *(_BYTE *)(a1 + 693) = 1; /*0x44af91*/
      return sub_44A270(a1 - 344, a2, a3); /*0x44af9f*/
    }
  }
  return result; /*0x44afa4*/
}
