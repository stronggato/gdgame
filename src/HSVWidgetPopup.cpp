#include <Geode/binding/HSVWidgetPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x12cec0
// Method: HSVWidgetPopup::~HSVWidgetPopup
_QWORD *__fastcall HSVWidgetPopup__dtor_HSVWidgetPopup(_QWORD *Block, char a2)
{
  *Block = &HSVWidgetPopup::`vftable'; /*0x12ced3*/
  Block[40] = &HSVWidgetPopup::`vftable'; /*0x12cee0*/
  Block[41] = &HSVWidgetPopup::`vftable'; /*0x12ceee*/
  Block[42] = &HSVWidgetPopup::`vftable'; /*0x12cefc*/
  Block[43] = &HSVWidgetPopup::`vftable'; /*0x12cf0a*/
  Block[44] = &HSVWidgetPopup::`vftable'; /*0x12cf18*/
  Block[51] = &HSVWidgetPopup::`vftable'; /*0x12cf26*/
  Block[54] = &HSVWidgetPopup::`vftable'; /*0x12cf34*/
  Block[68] = &HSVWidgetPopup::`vftable'; /*0x12cf42*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x12cf49*/
  if ( (a2 & 1) != 0 ) /*0x12cf51*/
    j_j_free(Block); /*0x12cf5b*/
  return Block; /*0x12cf60*/
}

// [2/3] Address: 0x12d4b0
// Method: HSVWidgetPopup::onClose
__int64 __fastcall HSVWidgetPopup_onClose(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 i; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD, _QWORD *, __int128 *); // rcx
  __int128 v8; // xmm0
  void (__fastcall **v9)(_QWORD, _QWORD *, __int128 *); // rax
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1[83] + 416LL); /*0x12d4c5*/
  if ( v2 ) /*0x12d4cf*/
  {
    v3 = *(_QWORD *)(v2 + 56); /*0x12d4d1*/
    if ( v3 ) /*0x12d4d8*/
    {
      for ( i = *(_QWORD *)(v3 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x12d4e6*/
      {
        v5 = *(_QWORD **)(v3 + 264); /*0x12d4f0*/
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 1032LL))(v5, 0); /*0x12d4ff*/
        v5[76] = 0; /*0x12d505*/
        v3 = i; /*0x12d50c*/
        if ( !i ) /*0x12d512*/
          break; /*0x12d512*/
      }
    }
  }
  v6 = a1[83]; /*0x12d527*/
  if ( !*(_BYTE *)(v6 + 392) ) /*0x12d533*/
  {
    v7 = (void (__fastcall ***)(_QWORD, _QWORD *, __int128 *))a1[84]; /*0x12d53c*/
    if ( v7 ) /*0x12d546*/
    {
      v8 = *(_OWORD *)(v6 + 376); /*0x12d548*/
      v9 = *v7; /*0x12d54f*/
      v12 = v8; /*0x12d55a*/
      (*v9)(v7, a1, &v12); /*0x12d55f*/
    }
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x12d569*/
  LOBYTE(v10) = 1; /*0x12d572*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v10);
}

// [3/3] Address: 0x12d590
// Method: HSVWidgetPopup::keyBackClicked
__int64 __fastcall HSVWidgetPopup_keyBackClicked(__int64 a1)
{
  return HSVWidgetPopup_onClose((_QWORD *)(a1 - 336));
}
