#include <Geode/binding/SelectArtLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x453610
// Method: SelectArtLayer::~SelectArtLayer
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SelectArtLayer__dtor_SelectArtLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *Block = &SelectArtLayer::`vftable'; /*0x453626*/
  Block[40] = &SelectArtLayer::`vftable'; /*0x453630*/
  Block[41] = &SelectArtLayer::`vftable'; /*0x45363e*/
  Block[42] = &SelectArtLayer::`vftable'; /*0x45364c*/
  Block[43] = &SelectArtLayer::`vftable'; /*0x45365a*/
  Block[44] = &SelectArtLayer::`vftable'; /*0x453668*/
  Block[51] = &SelectArtLayer::`vftable'; /*0x453676*/
  Block[54] = &SelectArtLayer::`vftable'; /*0x453684*/
  Block[68] = &SelectArtLayer::`vftable'; /*0x453692*/
  v4 = (cocos2d::CCObject *)Block[83]; /*0x453699*/
  if ( v4 ) /*0x4536a3*/
    cocos2d::CCObject::release(v4); /*0x4536a5*/
  v5 = (cocos2d::CCObject *)Block[84]; /*0x4536ab*/
  if ( v5 ) /*0x4536b5*/
    cocos2d::CCObject::release(v5); /*0x4536b7*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x4536c0*/
  if ( (a2 & 1) != 0 ) /*0x4536ca*/
    j_j_free(Block); /*0x4536d4*/
  return Block; /*0x4536dc*/
}

// [2/3] Address: 0x458040
// Method: SelectArtLayer::onSelectCustom
unsigned int __fastcall SelectArtLayer_onSelectCustom(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  int v4; // eax
  cocos2d::CCArray *v5; // rcx
  unsigned int v6; // edi
  unsigned int result; // eax
  struct cocos2d::CCObject *v8; // rax
  const char *v9; // rdx

  v2 = (int *)(a1 + 684); /*0x45804f*/
  if ( a2 ) /*0x45805c*/
    *v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x458067*/
  v4 = *v2; /*0x458069*/
  if ( *v2 >= 1 ) /*0x45806e*/
  {
    *v2 = v4; /*0x458079*/
    if ( v4 > 3 ) /*0x45807e*/
      v4 = 3; /*0x458080*/
  }
  else
  {
    v4 = 1; /*0x458070*/
    *v2 = 1; /*0x458075*/
  }
  v5 = *(cocos2d::CCArray **)(a1 + 672); /*0x458085*/
  v6 = 0; /*0x45808c*/
  *v2 = v4; /*0x45808e*/
  result = cocos2d::CCArray::count(v5); /*0x458090*/
  if ( result ) /*0x458098*/
  {
    do /*0x4580e5*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 672), v6++); /*0x4580b9*/
      v9 = "GJ_button_02.png"; /*0x4580c1*/
      if ( *v2 != v6 ) /*0x4580cd*/
        v9 = "GJ_button_04.png"; /*0x4580cd*/
      sub_41FC0(v8, v9); /*0x4580d1*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 672)); /*0x4580dd*/
    }
    while ( v6 < result ); /*0x4580e5*/
  }
  return result; /*0x4580ec*/
}

// [3/3] Address: 0x458150
// Method: SelectArtLayer::keyBackClicked
__int64 __fastcall SelectArtLayer_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD *); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x458156*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x458165*/
  LOBYTE(v2) = 1; /*0x45816e*/
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2); /*0x458173*/
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))v1[87]; /*0x458179*/
  if ( v4 ) /*0x458183*/
    return (**v4)(v4, v1); /*0x458190*/
  return result; /*0x458193*/
}
