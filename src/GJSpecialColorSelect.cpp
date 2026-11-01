#include <Geode/binding/GJSpecialColorSelect.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x3ba7c0
// Method: GJSpecialColorSelect::~GJSpecialColorSelect
_QWORD *__fastcall GJSpecialColorSelect__dtor_GJSpecialColorSelect(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &GJSpecialColorSelect::`vftable'; /*0x3ba7d6*/
  Block[40] = &GJSpecialColorSelect::`vftable'; /*0x3ba7e0*/
  Block[41] = &GJSpecialColorSelect::`vftable'; /*0x3ba7ee*/
  Block[42] = &GJSpecialColorSelect::`vftable'; /*0x3ba7fc*/
  Block[43] = &GJSpecialColorSelect::`vftable'; /*0x3ba80a*/
  Block[44] = &GJSpecialColorSelect::`vftable'; /*0x3ba818*/
  Block[51] = &GJSpecialColorSelect::`vftable'; /*0x3ba826*/
  Block[54] = &GJSpecialColorSelect::`vftable'; /*0x3ba834*/
  Block[68] = &GJSpecialColorSelect::`vftable'; /*0x3ba842*/
  v4 = (cocos2d::CCObject *)Block[85]; /*0x3ba849*/
  if ( v4 ) /*0x3ba853*/
    cocos2d::CCObject::release(v4); /*0x3ba855*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x3ba85e*/
  if ( (a2 & 1) != 0 ) /*0x3ba868*/
    j_j_free(Block); /*0x3ba872*/
  return Block; /*0x3ba87a*/
}

// [2/6] Address: 0x3ba890
// Method: GJSpecialColorSelect::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJSpecialColorSelect_create(unsigned int a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // r14

  v6 = operator new(0x2B0u); /*0x3ba8b7*/
  FLAlertLayer_FLAlertLayer((__int64)v6); /*0x3ba8c2*/
  *v6 = &GJSpecialColorSelect::`vftable'; /*0x3ba8ce*/
  v6[40] = &GJSpecialColorSelect::`vftable'; /*0x3ba8d8*/
  v6[41] = &GJSpecialColorSelect::`vftable'; /*0x3ba8e6*/
  v6[42] = &GJSpecialColorSelect::`vftable'; /*0x3ba8f4*/
  v6[43] = &GJSpecialColorSelect::`vftable'; /*0x3ba902*/
  v6[44] = &GJSpecialColorSelect::`vftable'; /*0x3ba910*/
  v6[51] = &GJSpecialColorSelect::`vftable'; /*0x3ba91e*/
  v6[54] = &GJSpecialColorSelect::`vftable'; /*0x3ba92c*/
  v6[68] = &GJSpecialColorSelect::`vftable'; /*0x3ba93a*/
  v6[83] = 0; /*0x3ba941*/
  *((_DWORD *)v6 + 168) = 0; /*0x3ba94c*/
  v6[85] = 0; /*0x3ba957*/
  if ( (unsigned __int8)sub_3BA9B0(v6, a1, a2, a3) ) /*0x3ba96d*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x3ba979*/
    return v6; /*0x3ba97f*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0x3ba993*/
    return 0; /*0x3ba996*/
  }
}

// [3/6] Address: 0x3bbbe0
// Method: GJSpecialColorSelect::onSelectColor
unsigned int __fastcall GJSpecialColorSelect_onSelectColor(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  unsigned int result; // eax
  struct cocos2d::CCObject *v7; // rbx
  int v8; // eax
  const char *v9; // rdx

  *(_DWORD *)(a1 + 672) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3bbc04*/
  v4 = 0; /*0x3bbc1d*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2); /*0x3bbc1f*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); /*0x3bbc22*/
  if ( result ) /*0x3bbc2a*/
  {
    do /*0x3bbc87*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), v4); /*0x3bbc4f*/
      v8 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 56LL))(v7); /*0x3bbc5c*/
      v9 = "GJ_button_05.png"; /*0x3bbc63*/
      if ( v8 != 1008 ) /*0x3bbc6d*/
        v9 = "GJ_button_04.png"; /*0x3bbc6d*/
      sub_41FC0(v7, v9); /*0x3bbc71*/
      ++v4; /*0x3bbc7d*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); /*0x3bbc7f*/
    }
    while ( v4 < result ); /*0x3bbc87*/
  }
  if ( v5 ) /*0x3bbca0*/
    return sub_41FC0(v5, "GJ_button_02.png"); /*0x3bbcb1*/
  return result; /*0x3bbcac*/
}

// [4/6] Address: 0x3bbcc0
// Method: GJSpecialColorSelect::onClose
__int64 __fastcall GJSpecialColorSelect_onClose(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64, _QWORD); // rcx
  __int64 v3; // rdx

  v2 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 664); /*0x3bbcc9*/
  if ( v2 ) /*0x3bbcd3*/
    (**v2)(v2, a1, *(unsigned int *)(a1 + 672)); /*0x3bbce2*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x3bbcec*/
  LOBYTE(v3) = 1; /*0x3bbcf5*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v3);
}

// [5/6] Address: 0x3bbd10
// Method: GJSpecialColorSelect::keyBackClicked
__int64 __fastcall GJSpecialColorSelect_keyBackClicked(__int64 a1)
{
  unsigned int *v1; // rbx
  void (__fastcall ***v2)(_QWORD, unsigned int *, _QWORD); // rcx
  __int64 v3; // rdx

  v1 = (unsigned int *)(a1 - 336); /*0x3bbd16*/
  v2 = *(void (__fastcall ****)(_QWORD, unsigned int *, _QWORD))(a1 + 328); /*0x3bbd1d*/
  if ( v2 ) /*0x3bbd27*/
    (**v2)(v2, v1, v1[168]); /*0x3bbd36*/
  (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x3bbd40*/
  LOBYTE(v3) = 1; /*0x3bbd49*/
  return (*(__int64 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v1 + 520LL))(v1, v3);
}

// [6/6] Address: 0x3bbd60
// Method: GJSpecialColorSelect::textForColorIdx
const char *__fastcall GJSpecialColorSelect_textForColorIdx(int a1)
{
  const char *result; // rax

  switch ( a1 ) /*0x3bbd83*/
  {
    case 1000: /*0x3bbd83*/
      result = "BG"; /*0x3bbd85*/
      break; /*0x3bbd8c*/
    case 1001: /*0x3bbd83*/
      result = "G1"; /*0x3bbd8d*/
      break; /*0x3bbd94*/
    case 1002: /*0x3bbd83*/
      result = "L"; /*0x3bbd9d*/
      break; /*0x3bbda4*/
    case 1003: /*0x3bbd83*/
      result = (const char *)&unk_77D7D0; /*0x3bbdad*/
      break; /*0x3bbdb4*/
    case 1004: /*0x3bbd83*/
      result = "Obj"; /*0x3bbda5*/
      break; /*0x3bbdac*/
    case 1005: /*0x3bbd83*/
      result = (const char *)&word_76D080; /*0x3bbdb5*/
      break; /*0x3bbdbc*/
    case 1006: /*0x3bbd83*/
      result = (const char *)&word_76D0DC; /*0x3bbdbd*/
      break; /*0x3bbdc4*/
    case 1007: /*0x3bbd83*/
      result = (const char *)&unk_77D7D4; /*0x3bbdc5*/
      break; /*0x3bbdcc*/
    case 1009: /*0x3bbd83*/
      result = "G2"; /*0x3bbd95*/
      break; /*0x3bbd9c*/
    case 1010: /*0x3bbd83*/
      result = "Black"; /*0x3bbddd*/
      break; /*0x3bbde4*/
    case 1011: /*0x3bbd83*/
      result = "White"; /*0x3bbdd5*/
      break; /*0x3bbddc*/
    case 1012: /*0x3bbd83*/
      result = "Lighter"; /*0x3bbdcd*/
      break; /*0x3bbdd4*/
    case 1013: /*0x3bbd83*/
      result = "MG"; /*0x3bbde5*/
      break; /*0x3bbdec*/
    case 1014: /*0x3bbd83*/
      result = "MG2"; /*0x3bbded*/
      break; /*0x3bbdf4*/
    default:
      result = (const char *)&word_7091BC; /*0x3bbdf5*/
      break; /*0x3bbdf5*/
  }
  return result; /*0x3bbd8c*/
}
