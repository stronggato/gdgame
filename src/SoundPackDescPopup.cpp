#include <Geode/binding/SoundPackDescPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x18f450
// Method: SoundPackDescPopup::~SoundPackDescPopup
cocos2d::CCNode *__fastcall SoundPackDescPopup__dtor_SoundPackDescPopup(cocos2d::CCNode *Block, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *(_QWORD *)Block = &SoundPackDescPopup::`vftable'; /*0x18f464*/
  *((_QWORD *)Block + 40) = &SoundPackDescPopup::`vftable'; /*0x18f470*/
  *((_QWORD *)Block + 41) = &SoundPackDescPopup::`vftable'; /*0x18f47e*/
  *((_QWORD *)Block + 42) = &SoundPackDescPopup::`vftable'; /*0x18f48c*/
  *((_QWORD *)Block + 43) = &SoundPackDescPopup::`vftable'; /*0x18f49a*/
  *((_QWORD *)Block + 44) = &SoundPackDescPopup::`vftable'; /*0x18f4a8*/
  *((_QWORD *)Block + 51) = &SoundPackDescPopup::`vftable'; /*0x18f4b6*/
  *((_QWORD *)Block + 54) = &SoundPackDescPopup::`vftable'; /*0x18f4c4*/
  *((_QWORD *)Block + 68) = &SoundPackDescPopup::`vftable'; /*0x18f4d2*/
  *((_QWORD *)Block + 83) = &SoundPackDescPopup::`vftable'; /*0x18f4e0*/
  *((_QWORD *)Block + 84) = &SoundPackDescPopup::`vftable'; /*0x18f4ee*/
  *((_QWORD *)Block + 125) = &SoundPackDescPopup::`vftable'; /*0x18f4fc*/
  v4 = *((_QWORD *)Block + 127); /*0x18f503*/
  if ( v4 ) /*0x18f50f*/
    *(_QWORD *)(v4 + 608) = 0; /*0x18f511*/
  v5 = *((_QWORD *)Block + 135); /*0x18f518*/
  if ( v5 ) /*0x18f522*/
    *(_QWORD *)(v5 + 1168) = 0; /*0x18f524*/
  sub_3C310((char *)Block + 1032); /*0x18f532*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x18f53a*/
  if ( (a2 & 1) != 0 ) /*0x18f543*/
    j_j_free(Block); /*0x18f54d*/
  return Block; /*0x18f555*/
}

// [2/5] Address: 0x197590
// Method: SoundPackDescPopup::textChanged
void __fastcall SoundPackDescPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // r12
  unsigned __int64 v9; // r13
  char *v10; // rsi
  unsigned __int64 v11; // rbx
  void **v12; // r14
  __int64 v13; // rdi
  char *v14; // rax
  __int16 v15; // [rsp+30h] [rbp-39h] BYREF
  char v16; // [rsp+32h] [rbp-37h]
  __int128 v17; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+50h] [rbp-19h]
  __int64 v19; // [rsp+58h] [rbp-11h]
  void *Src[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp+7h]
  unsigned __int64 v22; // [rsp+78h] [rbp+Fh]

  if ( a2 == *(_QWORD *)(a1 + 472) ) /*0x1975c6*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x1975dd*/
    *(_OWORD *)Src = 0; /*0x1975e3*/
    v21 = 0; /*0x1975e7*/
    v22 = 0; /*0x1975eb*/
    v4 = -1; /*0x1975ef*/
    do /*0x1975f9*/
      ++v4; /*0x1975f6*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x1975f9*/
    sub_3C230(Src); /*0x197606*/
    v8 = *(__int64 **)(*(_QWORD *)(a1 + 472) + 640LL); /*0x197613*/
    v9 = v22; /*0x19761a*/
    v10 = (char *)Src[0]; /*0x19761e*/
    if ( v8 ) /*0x197625*/
    {
      v11 = v21; /*0x19762b*/
      if ( v21 ) /*0x197632*/
      {
        v17 = 0; /*0x1976cd*/
        v18 = 0; /*0x1976d1*/
        v19 = 0; /*0x1976d5*/
        v12 = Src; /*0x1976d9*/
        if ( v22 > 0xF ) /*0x1976e1*/
          v12 = (void **)Src[0]; /*0x1976e1*/
        v13 = 0x7FFFFFFFFFFFFFFFLL; /*0x1976e5*/
        if ( v21 > 0x7FFFFFFFFFFFFFFFLL ) /*0x1976f2*/
          sub_8D90(v6, v5, v7); /*0x197834*/
        if ( v21 > 0xF ) /*0x1976fc*/
        {
          if ( (v21 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x19771e*/
          {
            v13 = v21 | 0xF; /*0x197720*/
            if ( (v21 | 0xF) < 0x16 ) /*0x19772b*/
              v13 = 22; /*0x19772b*/
          }
          *(_QWORD *)&v17 = sub_3C460(v13 + 1); /*0x197738*/
          v18 = v11; /*0x19773c*/
          v19 = v13; /*0x197740*/
          memcpy((void *)v17, v12, v11 + 1); /*0x19774e*/
        }
        else
        {
          v18 = v21; /*0x1976fe*/
          v19 = 15; /*0x197702*/
          v17 = *(_OWORD *)v12; /*0x19770e*/
        }
        PlayLayer_updateProgressbar( /*0x197782*/
          (__int64)v8,
          (__int64)&v17,
          *(float *)(a1 + 480),
          COERCE_DOUBLE(1116995584),
          0.34999999,
          0.0);
        v15 = -1; /*0x19778e*/
        v16 = -1; /*0x197799*/
        TextArea_colorAllCharactersTo((__int64)v8, (__int64)&v15); /*0x1977a3*/
      }
      else
      {
        (*(void (__fastcall **)(__int64 *))(*v8 + 160))(v8); /*0x197647*/
        *((_DWORD *)v8 + 156) = *(_DWORD *)(a1 + 480); /*0x197654*/
        v17 = 0; /*0x19765f*/
        *(_QWORD *)&v17 = sub_3C460(32); /*0x197675*/
        v18 = 24; /*0x197679*/
        v19 = 31; /*0x197681*/
        strcpy((char *)v17, "Describe this sound pack"); /*0x197690*/
        TextArea_setString(v8, (const void **)&v17); /*0x1976aa*/
        v15 = 27843; /*0x1976af*/
        v16 = 65; /*0x1976b5*/
        TextArea_colorAllCharactersTo((__int64)v8, (__int64)&v15); /*0x1976c0*/
      }
      CustomSFXWidget_init(*(_QWORD *)(a1 + 472), *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 472) + 600LL) + 760LL)); /*0x1977be*/
    }
    if ( v9 > 0xF ) /*0x1977c8*/
    {
      v14 = v10; /*0x1977ce*/
      if ( v9 + 1 >= 0x1000 ) /*0x1977d8*/
      {
        v10 = (char *)*((_QWORD *)v10 - 1); /*0x1977de*/
        if ( (unsigned __int64)(v14 - v10 - 8) > 0x1F ) /*0x1977ed*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1977fe*/
      }
      j_j_free(v10); /*0x197808*/
    }
  }
}

// [3/5] Address: 0x197c60
// Method: SoundPackDescPopup::emotePicked
__int64 __fastcall SoundPackDescPopup_emotePicked(__int64 a1, __int64 a2, void **a3)
{
  _BYTE *v3; // rdx
  size_t v5; // r8
  __int64 result; // rax

  if ( a3 ) /*0x197c63*/
  {
    v3 = *a3; /*0x197c6a*/
    if ( *a3 ) /*0x197c6a*/
    {
      v5 = -1; /*0x197c75*/
      do /*0x197c83*/
        ++v5; /*0x197c80*/
      while ( v3[v5] ); /*0x197c83*/
      sub_3F5A0((void *)(a1 + 32), v3, v5); /*0x197c8e*/
      return sub_197840(a1 - 1000); /*0x197c9a*/
    }
  }
  return result; /*0x197ca4*/
}

// [4/5] Address: 0x197cb0
// Method: SoundPackDescPopup::emotePickerClosed
void __fastcall SoundPackDescPopup_emotePickerClosed(__int64 a1)
{
  *(_QWORD *)(a1 + 80) = 0; /*0x197cb0*/
}

// [5/5] Address: 0x197fe0
// Method: SoundPackDescPopup::onClose
__int64 __fastcall SoundPackDescPopup_onClose(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 1080); /*0x197ff0*/
  if ( v2 ) /*0x197ffa*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1104LL))(v2, 0); /*0x198001*/
  v3 = *(_QWORD *)(a1 + 1016); /*0x198007*/
  if ( v3 ) /*0x198011*/
  {
    *(_QWORD *)(v3 + 608) = 0; /*0x198013*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1016) + 1032LL))(*(_QWORD *)(a1 + 1016), 0); /*0x19802a*/
  }
  return SetupTriggerPopup_onClose(a1); /*0x198036*/
}
