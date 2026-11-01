#include <Geode/binding/GJSmartPrefab.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3b3030
// Method: GJSmartPrefab::~GJSmartPrefab
cocos2d::CCObject *__fastcall GJSmartPrefab__dtor_GJSmartPrefab(cocos2d::CCObject *Block, char a2)
{
  *(_QWORD *)Block = &GJSmartPrefab::`vftable'; /*0x3b3044*/
  sub_3C310((char *)Block + 88); /*0x3b304d*/
  sub_3C310((char *)Block + 56); /*0x3b3056*/
  cocos2d::CCObject::~CCObject(Block); /*0x3b305e*/
  if ( (a2 & 1) != 0 ) /*0x3b3067*/
    j_j_free(Block); /*0x3b3071*/
  return Block; /*0x3b3076*/
}

// [2/3] Address: 0x3b8350
// Method: GJSmartPrefab::create
// Hidden C++ exception states: #wind=1
char *GJSmartPrefab_create()
{
  int v0; // eax
  char *v2; // [rsp+30h] [rbp+8h]

  v2 = (char *)operator new(0x80u); /*0x3b8363*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v2); /*0x3b836b*/
  *(_QWORD *)v2 = &GJSmartPrefab::`vftable'; /*0x3b8378*/
  *(_OWORD *)(v2 + 56) = 0; /*0x3b837e*/
  *((_QWORD *)v2 + 9) = 0; /*0x3b8384*/
  *((_QWORD *)v2 + 10) = 15; /*0x3b8388*/
  v2[56] = 0; /*0x3b8390*/
  *(_OWORD *)(v2 + 88) = 0; /*0x3b8393*/
  *((_QWORD *)v2 + 13) = 0; /*0x3b8397*/
  *((_QWORD *)v2 + 14) = 15; /*0x3b839b*/
  v2[88] = 0; /*0x3b83a3*/
  *((_DWORD *)v2 + 31) = 0; /*0x3b83a6*/
  v0 = dword_8F84A0; /*0x3b83a9*/
  *((_DWORD *)v2 + 30) = dword_8F84A0; /*0x3b83af*/
  dword_8F84A0 = v0 + 1; /*0x3b83b4*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x3b83bd*/
  return v2; /*0x3b83c6*/
}

// [3/3] Address: 0x3b83d0
// Method: GJSmartPrefab::encodeWithCoder
void __fastcall GJSmartPrefab_encodeWithCoder(__int64 a1, DS_Dictionary *a2)
{
  DS_Dictionary::setIntegerForKey(a2, "kCEK", 11); /*0x3b83f0*/
  DS_Dictionary::setStringForKey(a2, &word_708050, a1 + 88); /*0x3b8404*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708048, *(_DWORD *)(a1 + 124)); /*0x3b8422*/
}
