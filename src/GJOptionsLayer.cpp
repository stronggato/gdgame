#include <Geode/binding/GJOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x397580
// Method: GJOptionsLayer::addGVToggle
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJOptionsLayer_addGVToggle(__int64 a1, int a2, char *a3, __int64 a4)
{
  __int64 v8; // rbp
  __int64 v9; // rcx
  bool GameVariable; // al
  __int64 v11; // rsi
  __int64 v12; // r8
  cocos2d::CCDictionary *v13; // rdi
  struct cocos2d::CCObject *v14; // rax
  void *v15; // rcx
  void *v17; // [rsp+30h] [rbp-58h]
  void *Block[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  unsigned __int64 v20; // [rsp+50h] [rbp-38h]

  v8 = atoi(a3); /*0x3975af*/
  v9 = qword_905FD0; /*0x3975b2*/
  if ( !qword_905FD0 ) /*0x3975bc*/
  {
    v17 = operator new(0x6E8u); /*0x3975c8*/
    qword_905FD0 = sub_2723A0(v17); /*0x3975d6*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3975e7*/
    v9 = qword_905FD0; /*0x3975ea*/
  }
  GameVariable = GameManager_getGameVariable(v9, a3); /*0x3975f4*/
  v11 = sub_3976E0(a1, a2, v8, GameVariable, a4); /*0x397610*/
  *(_OWORD *)Block = 0; /*0x397616*/
  v19 = 0; /*0x39761e*/
  v20 = 0; /*0x397623*/
  v12 = -1; /*0x397628*/
  do /*0x397633*/
    ++v12; /*0x397630*/
  while ( a3[v12] ); /*0x397633*/
  sub_3C230(Block); /*0x397641*/
  v13 = *(cocos2d::CCDictionary **)(a1 + 1040); /*0x397647*/
  v14 = (struct cocos2d::CCObject *)cocos2d::CCString::create(Block); /*0x397653*/
  cocos2d::CCDictionary::setObject(v13, v14, v8); /*0x397662*/
  if ( v20 > 0xF ) /*0x397672*/
  {
    v15 = Block[0]; /*0x397677*/
    if ( v20 + 1 >= 0x1000 ) /*0x397686*/
    {
      v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x39768c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x39769b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3976ac*/
    }
    j_j_free(v15); /*0x3976b3*/
  }
  return v11; /*0x3976bb*/
}

// [2/2] Address: 0x3986b0
// Method: GJOptionsLayer::onToggle
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJOptionsLayer_onToggle(cocos2d::CCDictionary **a1, __int64 a2)
{
  int v4; // eax
  cocos2d::CCString *v5; // rbx
  char *CString; // rax
  __int64 v7; // rcx
  const char *v8; // rax
  __int64 v9; // r8
  cocos2d::CCDictionary *v11; // rbx
  unsigned int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]
  void *v16; // [rsp+50h] [rbp+8h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3986cb*/
  v5 = cocos2d::CCDictionary::objectForKey(a1[130], v4); /*0x3986de*/
  if ( v5 ) /*0x3986e4*/
  {
    if ( !qword_905FD0 ) /*0x3986f2*/
    {
      v16 = operator new(0x6E8u); /*0x3986fe*/
      qword_905FD0 = sub_2723A0(v16); /*0x39870c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x39871d*/
    }
    CString = (char *)cocos2d::CCString::getCString(v5); /*0x398722*/
    GameManager_toggleGameVariable(v7, CString); /*0x39872b*/
    v8 = cocos2d::CCString::getCString(v5); /*0x398733*/
    v13 = 0; /*0x39873c*/
    v14 = 0; /*0x398743*/
    v15 = 0; /*0x398748*/
    v9 = -1; /*0x39874d*/
    do /*0x398757*/
      ++v9; /*0x398754*/
    while ( v8[v9] ); /*0x398757*/
    sub_3C230(&v13); /*0x398765*/
    return (*((__int64 (__fastcall **)(cocos2d::CCDictionary **, __int128 *))*a1 + 151))(a1, &v13); /*0x398775*/
  }
  else
  {
    v11 = *a1; /*0x39878b*/
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x398794*/
    return (*((__int64 (__fastcall **)(cocos2d::CCDictionary **, _QWORD))v11 + 152))(a1, v12); /*0x3987b2*/
  }
}
