#include <Geode/binding/ShaderGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x632e20
// Method: ShaderGameObject::~ShaderGameObject
cocos2d::CCSprite *__fastcall ShaderGameObject__dtor_ShaderGameObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x632e33*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x632e40*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x632e4e*/
  TextGameObject__dtor_TextGameObject(Block); /*0x632e55*/
  if ( (a2 & 1) != 0 ) /*0x632e5d*/
    j_j_free(Block); /*0x632e67*/
  return Block; /*0x632e6c*/
}

// [2/4] Address: 0x636b40
// Method: ShaderGameObject::customSetup
char __fastcall ShaderGameObject_customSetup(__int64 a1)
{
  char result; // al

  result = EffectGameObject_customSetup(a1); /*0x636b49*/
  switch ( *(_DWORD *)(a1 + 1036) ) /*0x636b5a*/
  {
    case 0xB6A: /*0x636b5a*/
      *(_DWORD *)(a1 + 1860) = 0; /*0x636b8c*/
      return 0; /*0x636b8a*/
    case 0xB6B: /*0x636b5a*/
      *(_QWORD *)(a1 + 1872) = 0; /*0x636b77*/
      *(_DWORD *)(a1 + 1880) = 0; /*0x636b7e*/
      return 0; /*0x636b75*/
    case 0xB6C: /*0x636b5a*/
      *(_QWORD *)(a1 + 1876) = 0; /*0x636b68*/
      return 0; /*0x636b66*/
  }
  return result; /*0x636b6f*/
}

// [3/4] Address: 0x636ba0
// Method: ShaderGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall ShaderGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x636bd8*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x636be5*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x636bf9*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x636c10*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636c1f*/
  sub_3C310(v13); /*0x636c2d*/
  if ( *(float *)(a1 + 1856) != 0.0 ) /*0x636c49*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636c4b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636c50*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636c5f*/
    fmt::BasicWriter<char>::operator<<(v12, 175); /*0x636c6f*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636c75*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636c7a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636c89*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636c9f*/
  }
  if ( *(float *)(a1 + 1860) != 0.0 ) /*0x636cb2*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636cb4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636cb9*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636cc8*/
    fmt::BasicWriter<char>::operator<<(v12, 176); /*0x636cd8*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636cde*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636ce3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636cf2*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636d08*/
  }
  if ( *(float *)(a1 + 1864) != 0.0 ) /*0x636d1b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636d1d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636d22*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636d31*/
    fmt::BasicWriter<char>::operator<<(v12, 191); /*0x636d41*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636d47*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636d4c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636d5b*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636d71*/
  }
  if ( *(float *)(a1 + 1868) != 0.0 ) /*0x636d84*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636d86*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636d8b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636d9a*/
    fmt::BasicWriter<char>::operator<<(v12, 177); /*0x636daa*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636db0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636db5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636dc4*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636dda*/
  }
  if ( *(float *)(a1 + 1892) != 0.0 ) /*0x636ded*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636def*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636df4*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636e03*/
    fmt::BasicWriter<char>::operator<<(v12, 290); /*0x636e13*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636e19*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636e1e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636e2d*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636e43*/
  }
  if ( *(float *)(a1 + 1896) != 0.0 ) /*0x636e56*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636e58*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636e5d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636e6c*/
    fmt::BasicWriter<char>::operator<<(v12, 291); /*0x636e7c*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636e82*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636e87*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636e96*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636eac*/
  }
  if ( *(float *)(a1 + 1872) != 0.0 ) /*0x636ebf*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636ec1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636ec6*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636ed5*/
    fmt::BasicWriter<char>::operator<<(v12, 179); /*0x636ee5*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636eeb*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636ef0*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636eff*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636f15*/
  }
  if ( *(float *)(a1 + 1876) != 0.0 ) /*0x636f28*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636f2a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636f2f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636f3e*/
    fmt::BasicWriter<char>::operator<<(v12, 180); /*0x636f4e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636f54*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636f59*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636f68*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636f7e*/
  }
  if ( *(float *)(a1 + 1880) != 0.0 ) /*0x636f91*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636f93*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636f98*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636fa7*/
    fmt::BasicWriter<char>::operator<<(v12, 189); /*0x636fb7*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636fbd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636fc2*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636fd1*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x636fe7*/
  }
  if ( *(_BYTE *)(a1 + 1912) ) /*0x636fed*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636ff6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636ffb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63700a*/
    fmt::BasicWriter<char>::operator<<(v12, 185); /*0x63701a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637020*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637025*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637034*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1912)); /*0x637046*/
  }
  if ( *(float *)(a1 + 1884) != 0.0 ) /*0x637059*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63705b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637060*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63706f*/
    fmt::BasicWriter<char>::operator<<(v12, 181); /*0x63707f*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637085*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63708a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637099*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x6370af*/
  }
  if ( *(float *)(a1 + 1888) != 0.0 ) /*0x6370c2*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6370c4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6370c9*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6370d8*/
    fmt::BasicWriter<char>::operator<<(v12, 182); /*0x6370e8*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6370ee*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6370f3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637102*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x637118*/
  }
  if ( *(_BYTE *)(a1 + 1900) ) /*0x63711e*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637127*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63712c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63713b*/
    fmt::BasicWriter<char>::operator<<(v12, 184); /*0x63714b*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637151*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637156*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637165*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1900)); /*0x637177*/
  }
  if ( *(_BYTE *)(a1 + 1913) ) /*0x63717d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637186*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63718b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63719a*/
    fmt::BasicWriter<char>::operator<<(v12, 186); /*0x6371aa*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6371b0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6371b5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6371c4*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1913)); /*0x6371d6*/
  }
  if ( *(_BYTE *)(a1 + 1914) ) /*0x6371dc*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6371e5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6371ea*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6371f9*/
    fmt::BasicWriter<char>::operator<<(v12, 187); /*0x637209*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63720f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637214*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637223*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1914)); /*0x637235*/
  }
  if ( *(_BYTE *)(a1 + 1915) ) /*0x63723b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637244*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637249*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637258*/
    fmt::BasicWriter<char>::operator<<(v12, 188); /*0x637268*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63726e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637273*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637282*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1915)); /*0x637294*/
  }
  if ( *(_BYTE *)(a1 + 1916) ) /*0x63729a*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6372a3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6372a8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6372b7*/
    fmt::BasicWriter<char>::operator<<(v12, 190); /*0x6372c7*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6372cd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6372d2*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6372e1*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1916)); /*0x6372f3*/
  }
  if ( *(_BYTE *)(a1 + 1917) ) /*0x6372f9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637302*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637307*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637316*/
    fmt::BasicWriter<char>::operator<<(v12, 194); /*0x637326*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63732c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637331*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637340*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1917)); /*0x637352*/
  }
  if ( *(_BYTE *)(a1 + 1918) ) /*0x637358*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637361*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637366*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637375*/
    fmt::BasicWriter<char>::operator<<(v12, 515); /*0x637385*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63738b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637390*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63739f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1918)); /*0x6373b1*/
  }
  if ( *(_BYTE *)(a1 + 1919) ) /*0x6373b7*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6373c0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6373c5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6373d4*/
    fmt::BasicWriter<char>::operator<<(v12, 192); /*0x6373e4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6373ea*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6373ef*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6373fe*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1919)); /*0x637410*/
  }
  if ( *(float *)(a1 + 1904) != 0.0 ) /*0x637423*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637425*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63742a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637439*/
    fmt::BasicWriter<char>::operator<<(v12, 183); /*0x637449*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63744f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637454*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637463*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x637479*/
  }
  if ( *(float *)(a1 + 1908) != 0.0 ) /*0x63748c*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63748e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637493*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6374a2*/
    fmt::BasicWriter<char>::operator<<(v12, 512); /*0x6374b2*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6374b8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6374bd*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6374cc*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x6374e2*/
  }
  if ( *(float *)(a1 + 1468) != 0.0 ) /*0x6374f5*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6374f7*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6374fc*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63750b*/
    fmt::BasicWriter<char>::operator<<(v12, 10); /*0x63751b*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637521*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637526*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637535*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x63754b*/
  }
  if ( *(_DWORD *)(a1 + 1512) ) /*0x637551*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63755a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63755f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63756e*/
    fmt::BasicWriter<char>::operator<<(v12, 30); /*0x63757e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637584*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637589*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637598*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1512)); /*0x6375a9*/
  }
  if ( *(float *)(a1 + 1516) != 0.0 ) /*0x6375bc*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6375be*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6375c3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6375d2*/
    fmt::BasicWriter<char>::operator<<(v12, 85); /*0x6375e2*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6375e8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6375ed*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6375fc*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x637612*/
  }
  if ( *(_DWORD *)(a1 + 1480) ) /*0x637618*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637621*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637626*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637635*/
    fmt::BasicWriter<char>::operator<<(v12, 51); /*0x637645*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63764b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637650*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63765f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1480)); /*0x637670*/
  }
  if ( *(_DWORD *)(a1 + 1484) ) /*0x637676*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63767f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637684*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637693*/
    fmt::BasicWriter<char>::operator<<(v12, 71); /*0x6376a3*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6376a9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6376ae*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6376bd*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1484)); /*0x6376ce*/
  }
  if ( *(_BYTE *)(a1 + 1700) ) /*0x6376d4*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6376dd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6376e2*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6376f1*/
    fmt::BasicWriter<char>::operator<<(v12, 138); /*0x637701*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637707*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63770c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63771b*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1700)); /*0x63772d*/
  }
  if ( *(_BYTE *)(a1 + 1701) ) /*0x637733*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63773c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637741*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637750*/
    fmt::BasicWriter<char>::operator<<(v12, 200); /*0x637760*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637766*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63776b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63777a*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1701)); /*0x63778c*/
  }
  if ( *(_BYTE *)(a1 + 1702) ) /*0x637792*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63779b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6377a0*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6377af*/
    fmt::BasicWriter<char>::operator<<(v12, 201); /*0x6377bf*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6377c5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6377ca*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6377d9*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1702)); /*0x6377eb*/
  }
  if ( *(_DWORD *)(a1 + 1920) ) /*0x6377f1*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6377fa*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6377ff*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63780e*/
    fmt::BasicWriter<char>::operator<<(v12, 196); /*0x63781e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637824*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637829*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637838*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1920)); /*0x637849*/
  }
  if ( *(_DWORD *)(a1 + 1924) ) /*0x63784f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637858*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63785d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63786c*/
    fmt::BasicWriter<char>::operator<<(v12, 197); /*0x63787c*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637882*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637887*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637896*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1924)); /*0x6378a7*/
  }
  if ( *(float *)(a1 + 1908) != 0.0 ) /*0x6378ba*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6378bc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6378c1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6378d0*/
    fmt::BasicWriter<char>::operator<<(v12, 512); /*0x6378e0*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6378e6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6378eb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6378fa*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x637910*/
  }
  if ( *(_BYTE *)(a1 + 1928) ) /*0x637916*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63791f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637924*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637933*/
    fmt::BasicWriter<char>::operator<<(v12, 513); /*0x637943*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637949*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63794e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63795d*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1928)); /*0x63796f*/
  }
  if ( *(_BYTE *)(a1 + 1929) ) /*0x637975*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63797e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637983*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637992*/
    fmt::BasicWriter<char>::operator<<(v12, 514); /*0x6379a2*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6379a8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6379ad*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6379bc*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1929)); /*0x6379ce*/
  }
  if ( *(_BYTE *)(a1 + 1930) ) /*0x6379d4*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6379dd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6379e2*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6379f1*/
    fmt::BasicWriter<char>::operator<<(v12, 531); /*0x637a01*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x637a07*/
    *((_QWORD *)&v10 + 1) = 0; /*0x637a0c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x637a1b*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1930)); /*0x637a2d*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x637a38*/
  *(_OWORD *)a2 = 0; /*0x637a41*/
  *(_QWORD *)(a2 + 16) = 0; /*0x637a44*/
  *(_QWORD *)(a2 + 24) = 0; /*0x637a48*/
  v8 = -1; /*0x637a4c*/
  do /*0x637a56*/
    ++v8; /*0x637a53*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x637a56*/
  sub_3C230(a2); /*0x637a63*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x637a6e*/
  return a2; /*0x637a77*/
}

// [4/4] Address: 0x637aa0
// Method: ShaderGameObject::customObjectSetup
int __fastcall ShaderGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  float v6; // xmm6_4
  float v7; // xmm1_4
  const char *v8; // rcx
  float v9; // xmm7_4
  float v10; // xmm1_4
  const char *v11; // rcx
  float v12; // xmm7_4
  float v13; // xmm1_4
  const char *v14; // rcx
  float v15; // xmm7_4
  float v16; // xmm1_4
  const char *v17; // rcx
  float v18; // xmm7_4
  float v19; // xmm1_4
  const char *v20; // rcx
  float v21; // xmm7_4
  float v22; // xmm1_4
  const char *v23; // rcx
  float v24; // xmm7_4
  float v25; // xmm1_4
  const char *v26; // rcx
  float v27; // xmm7_4
  float v28; // xmm1_4
  const char *v29; // rcx
  float v30; // xmm7_4
  float v31; // xmm1_4
  const char *v32; // rcx
  float v33; // xmm7_4
  float v34; // xmm1_4
  const char *v35; // rcx
  float v36; // xmm7_4
  float v37; // xmm1_4
  const char *v38; // rcx
  float v39; // xmm7_4
  const char *v40; // rcx
  float v41; // xmm7_4
  float v42; // xmm1_4
  char v43; // al
  float v44; // xmm1_4
  const char *v45; // rcx
  float v46; // xmm7_4
  float v47; // xmm1_4
  const char *v48; // rcx
  float v49; // xmm7_4
  int v50; // eax
  const char *v51; // rcx
  int v52; // eax
  const char *v53; // rcx
  int v54; // eax
  const char *v55; // rcx
  int v56; // eax
  const char *v57; // rcx
  int v58; // eax
  const char *v59; // rcx
  int v60; // eax
  const char *v61; // rcx
  int v62; // eax
  const char *v63; // rcx
  int v64; // eax
  const char *v65; // rcx
  int v66; // eax
  const char *v67; // rcx
  int v68; // eax
  const char *v69; // rcx
  int v70; // eax
  const char *v71; // rcx
  int v72; // eax
  const char *v73; // rcx
  float v74; // xmm1_4
  const char *v75; // rcx
  float v76; // xmm7_4
  int v77; // eax
  const char *v78; // rcx
  const char *v79; // rcx
  float v80; // xmm7_4
  int v81; // ebp
  int v82; // eax
  const char *v83; // rcx
  int v84; // eax
  const char *v85; // rcx
  int v86; // eax
  const char *v87; // rcx
  int v88; // eax
  const char *v89; // rcx
  int v90; // eax
  const char *v91; // rcx
  int v92; // eax
  const char *v93; // rcx
  __int64 v94; // rax
  const char *v95; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x637ad4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1400LL) ) /*0x637aee*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 5600LL); /*0x637b03*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5624LL) > 0xFu ) /*0x637b0f*/
      v8 = *(const char **)v8; /*0x637b11*/
    v9 = atof(v8); /*0x637b1d*/
    v6 = 0.0; /*0x637b2a*/
    if ( isnan(v9) ) /*0x637b24*/
      v7 = 0.0; /*0x637b31*/
    else
      v7 = fminf(1000000000.0, fmaxf(-1000000000.0, v9)); /*0x637b42*/
  }
  else
  {
    v6 = 0.0; /*0x637af8*/
    v7 = 0.0; /*0x637afb*/
  }
  *(float *)(a1 + 1856) = v7; /*0x637b46*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1408LL) ) /*0x637b51*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 5632LL); /*0x637b63*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5656LL) > 0xFu ) /*0x637b6f*/
      v11 = *(const char **)v11; /*0x637b71*/
    v12 = atof(v11); /*0x637b7d*/
    if ( isnan(v12) ) /*0x637b84*/
      v10 = 0.0; /*0x637b8e*/
    else
      v10 = fminf(1000000000.0, fmaxf(-1000000000.0, v12)); /*0x637b9f*/
  }
  else
  {
    v10 = 0.0; /*0x637b5b*/
  }
  *(float *)(a1 + 1860) = v10; /*0x637ba3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1528LL) ) /*0x637bae*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 6112LL); /*0x637bc0*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6136LL) > 0xFu ) /*0x637bcc*/
      v14 = *(const char **)v14; /*0x637bce*/
    v15 = atof(v14); /*0x637bda*/
    if ( isnan(v15) ) /*0x637be1*/
      v13 = 0.0; /*0x637beb*/
    else
      v13 = fminf(1000000000.0, fmaxf(-1000000000.0, v15)); /*0x637bfc*/
  }
  else
  {
    v13 = 0.0; /*0x637bb8*/
  }
  *(float *)(a1 + 1864) = v13; /*0x637c00*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1432LL) ) /*0x637c0b*/
  {
    v17 = (const char *)(*(_QWORD *)a2 + 5728LL); /*0x637c1d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5752LL) > 0xFu ) /*0x637c29*/
      v17 = *(const char **)v17; /*0x637c2b*/
    v18 = atof(v17); /*0x637c37*/
    if ( isnan(v18) ) /*0x637c3e*/
      v16 = 0.0; /*0x637c48*/
    else
      v16 = fminf(1000000000.0, fmaxf(-1000000000.0, v18)); /*0x637c59*/
  }
  else
  {
    v16 = 0.0; /*0x637c15*/
  }
  *(float *)(a1 + 1872) = v16; /*0x637c5d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1440LL) ) /*0x637c68*/
  {
    v20 = (const char *)(*(_QWORD *)a2 + 5760LL); /*0x637c7a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5784LL) > 0xFu ) /*0x637c86*/
      v20 = *(const char **)v20; /*0x637c88*/
    v21 = atof(v20); /*0x637c94*/
    if ( isnan(v21) ) /*0x637c9b*/
      v19 = 0.0; /*0x637ca5*/
    else
      v19 = fminf(1000000000.0, fmaxf(-1000000000.0, v21)); /*0x637cb6*/
  }
  else
  {
    v19 = 0.0; /*0x637c72*/
  }
  *(float *)(a1 + 1876) = v19; /*0x637cba*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1512LL) ) /*0x637cc5*/
  {
    v23 = (const char *)(*(_QWORD *)a2 + 6048LL); /*0x637cd7*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6072LL) > 0xFu ) /*0x637ce3*/
      v23 = *(const char **)v23; /*0x637ce5*/
    v24 = atof(v23); /*0x637cf1*/
    if ( isnan(v24) ) /*0x637cf8*/
      v22 = 0.0; /*0x637d02*/
    else
      v22 = fminf(1000000000.0, fmaxf(-1000000000.0, v24)); /*0x637d13*/
  }
  else
  {
    v22 = 0.0; /*0x637ccf*/
  }
  *(float *)(a1 + 1880) = v22; /*0x637d17*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1416LL) ) /*0x637d22*/
  {
    v26 = (const char *)(*(_QWORD *)a2 + 5664LL); /*0x637d34*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5688LL) > 0xFu ) /*0x637d40*/
      v26 = *(const char **)v26; /*0x637d42*/
    v27 = atof(v26); /*0x637d4e*/
    if ( isnan(v27) ) /*0x637d55*/
      v25 = 0.0; /*0x637d5f*/
    else
      v25 = fminf(1000000000.0, fmaxf(-1000000000.0, v27)); /*0x637d70*/
  }
  else
  {
    v25 = 0.0; /*0x637d2c*/
  }
  *(float *)(a1 + 1868) = v25; /*0x637d74*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2320LL) ) /*0x637d7f*/
  {
    v29 = (const char *)(*(_QWORD *)a2 + 9280LL); /*0x637d91*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9304LL) > 0xFu ) /*0x637d9d*/
      v29 = *(const char **)v29; /*0x637d9f*/
    v30 = atof(v29); /*0x637dab*/
    if ( isnan(v30) ) /*0x637db2*/
      v28 = 0.0; /*0x637dbc*/
    else
      v28 = fminf(1000000000.0, fmaxf(-1000000000.0, v30)); /*0x637dcd*/
  }
  else
  {
    v28 = 0.0; /*0x637d89*/
  }
  *(float *)(a1 + 1892) = v28; /*0x637dd1*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2328LL) ) /*0x637ddc*/
  {
    v32 = (const char *)(*(_QWORD *)a2 + 9312LL); /*0x637dee*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9336LL) > 0xFu ) /*0x637dfa*/
      v32 = *(const char **)v32; /*0x637dfc*/
    v33 = atof(v32); /*0x637e08*/
    if ( isnan(v33) ) /*0x637e0f*/
      v31 = 0.0; /*0x637e19*/
    else
      v31 = fminf(1000000000.0, fmaxf(-1000000000.0, v33)); /*0x637e2a*/
  }
  else
  {
    v31 = 0.0; /*0x637de6*/
  }
  *(float *)(a1 + 1896) = v31; /*0x637e2e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1448LL) ) /*0x637e39*/
  {
    v35 = (const char *)(*(_QWORD *)a2 + 5792LL); /*0x637e4b*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5816LL) > 0xFu ) /*0x637e57*/
      v35 = *(const char **)v35; /*0x637e59*/
    v36 = atof(v35); /*0x637e65*/
    if ( isnan(v36) ) /*0x637e6c*/
      v34 = 0.0; /*0x637e76*/
    else
      v34 = fminf(1000000000.0, fmaxf(-1000000000.0, v36)); /*0x637e87*/
  }
  else
  {
    v34 = 0.0; /*0x637e43*/
  }
  *(float *)(a1 + 1884) = v34; /*0x637e8b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1456LL) ) /*0x637e96*/
  {
    v38 = (const char *)(*(_QWORD *)a2 + 5824LL); /*0x637ea8*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5848LL) > 0xFu ) /*0x637eb4*/
      v38 = *(const char **)v38; /*0x637eb6*/
    v39 = atof(v38); /*0x637ec2*/
    if ( isnan(v39) ) /*0x637ec9*/
      v37 = 0.0; /*0x637ed3*/
    else
      v37 = fminf(1000000000.0, fmaxf(-1000000000.0, v39)); /*0x637ee4*/
  }
  else
  {
    v37 = 0.0; /*0x637ea0*/
  }
  *(float *)(a1 + 1888) = v37; /*0x637ee8*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 1456LL) ) /*0x637ef3*/
    goto LABEL_86; /*0x637ef3*/
  v40 = (const char *)(*(_QWORD *)a2 + 5824LL); /*0x637f00*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 5848LL) > 0xFu ) /*0x637f0c*/
    v40 = *(const char **)v40; /*0x637f0e*/
  v41 = atof(v40); /*0x637f1a*/
  v42 = isnan(v41) ? 0.0 : fminf(1000000000.0, fmaxf(-1000000000.0, v41));
  if ( v42 == 0.0 ) /*0x637f45*/
LABEL_86:
    v43 = 0; /*0x637f4b*/
  else
    v43 = 1; /*0x637f47*/
  *(_BYTE *)(a1 + 1900) = v43; /*0x637f4d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1464LL) ) /*0x637f56*/
  {
    v45 = (const char *)(*(_QWORD *)a2 + 5856LL); /*0x637f68*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5880LL) > 0xFu ) /*0x637f74*/
      v45 = *(const char **)v45; /*0x637f76*/
    v46 = atof(v45); /*0x637f82*/
    if ( isnan(v46) ) /*0x637f89*/
      v44 = 0.0; /*0x637f93*/
    else
      v44 = fminf(1000000000.0, fmaxf(-1000000000.0, v46)); /*0x637fa4*/
  }
  else
  {
    v44 = 0.0; /*0x637f60*/
  }
  *(float *)(a1 + 1904) = v44; /*0x637fa8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4096LL) ) /*0x637fb3*/
  {
    v48 = (const char *)(*(_QWORD *)a2 + 0x4000LL); /*0x637fc5*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16408LL) > 0xFu ) /*0x637fd1*/
      v48 = *(const char **)v48; /*0x637fd3*/
    v49 = atof(v48); /*0x637fdf*/
    if ( isnan(v49) ) /*0x637fe6*/
      v47 = 0.0; /*0x637ff0*/
    else
      v47 = fminf(1000000000.0, fmaxf(-1000000000.0, v49)); /*0x638001*/
  }
  else
  {
    v47 = 0.0; /*0x637fbd*/
  }
  *(float *)(a1 + 1908) = v47; /*0x638005*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1472LL) ) /*0x638013*/
  {
    v51 = (const char *)(*(_QWORD *)a2 + 5888LL); /*0x638024*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5912LL) > 0xFu ) /*0x638030*/
      v51 = *(const char **)v51; /*0x638032*/
    v50 = atoi(v51); /*0x638035*/
  }
  else
  {
    v50 = 0; /*0x63801c*/
  }
  *(_BYTE *)(a1 + 1900) = v50 != 0; /*0x638040*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1480LL) ) /*0x638049*/
  {
    v53 = (const char *)(*(_QWORD *)a2 + 5920LL); /*0x63805a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5944LL) > 0xFu ) /*0x638066*/
      v53 = *(const char **)v53; /*0x638068*/
    v52 = atoi(v53); /*0x63806b*/
  }
  else
  {
    v52 = 0; /*0x638052*/
  }
  *(_BYTE *)(a1 + 1912) = v52 != 0; /*0x638076*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1488LL) ) /*0x63807f*/
  {
    v55 = (const char *)(*(_QWORD *)a2 + 5952LL); /*0x638090*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5976LL) > 0xFu ) /*0x63809c*/
      v55 = *(const char **)v55; /*0x63809e*/
    v54 = atoi(v55); /*0x6380a1*/
  }
  else
  {
    v54 = 0; /*0x638088*/
  }
  *(_BYTE *)(a1 + 1913) = v54 != 0; /*0x6380ac*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1496LL) ) /*0x6380b5*/
  {
    v57 = (const char *)(*(_QWORD *)a2 + 5984LL); /*0x6380c6*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6008LL) > 0xFu ) /*0x6380d2*/
      v57 = *(const char **)v57; /*0x6380d4*/
    v56 = atoi(v57); /*0x6380d7*/
  }
  else
  {
    v56 = 0; /*0x6380be*/
  }
  *(_BYTE *)(a1 + 1914) = v56 != 0; /*0x6380e2*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1504LL) ) /*0x6380eb*/
  {
    v59 = (const char *)(*(_QWORD *)a2 + 6016LL); /*0x6380fc*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6040LL) > 0xFu ) /*0x638108*/
      v59 = *(const char **)v59; /*0x63810a*/
    v58 = atoi(v59); /*0x63810d*/
  }
  else
  {
    v58 = 0; /*0x6380f4*/
  }
  *(_BYTE *)(a1 + 1915) = v58 != 0; /*0x638118*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1520LL) ) /*0x638121*/
  {
    v61 = (const char *)(*(_QWORD *)a2 + 6080LL); /*0x638132*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6104LL) > 0xFu ) /*0x63813e*/
      v61 = *(const char **)v61; /*0x638140*/
    v60 = atoi(v61); /*0x638143*/
  }
  else
  {
    v60 = 0; /*0x63812a*/
  }
  *(_BYTE *)(a1 + 1916) = v60 != 0; /*0x63814e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1552LL) ) /*0x638157*/
  {
    v63 = (const char *)(*(_QWORD *)a2 + 6208LL); /*0x638168*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6232LL) > 0xFu ) /*0x638174*/
      v63 = *(const char **)v63; /*0x638176*/
    v62 = atoi(v63); /*0x638179*/
  }
  else
  {
    v62 = 0; /*0x638160*/
  }
  *(_BYTE *)(a1 + 1917) = v62 != 0; /*0x638184*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4120LL) ) /*0x63818d*/
  {
    v65 = (const char *)(*(_QWORD *)a2 + 16480LL); /*0x63819e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16504LL) > 0xFu ) /*0x6381aa*/
      v65 = *(const char **)v65; /*0x6381ac*/
    v64 = atoi(v65); /*0x6381af*/
  }
  else
  {
    v64 = 0; /*0x638196*/
  }
  *(_BYTE *)(a1 + 1918) = v64 != 0; /*0x6381ba*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1536LL) ) /*0x6381c3*/
  {
    v67 = (const char *)(*(_QWORD *)a2 + 6144LL); /*0x6381d4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6168LL) > 0xFu ) /*0x6381e0*/
      v67 = *(const char **)v67; /*0x6381e2*/
    v66 = atoi(v67); /*0x6381e5*/
  }
  else
  {
    v66 = 0; /*0x6381cc*/
  }
  *(_BYTE *)(a1 + 1919) = v66 != 0; /*0x6381f0*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4104LL) ) /*0x6381f9*/
  {
    v69 = (const char *)(*(_QWORD *)a2 + 16416LL); /*0x63820a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16440LL) > 0xFu ) /*0x638216*/
      v69 = *(const char **)v69; /*0x638218*/
    v68 = atoi(v69); /*0x63821b*/
  }
  else
  {
    v68 = 0; /*0x638202*/
  }
  *(_BYTE *)(a1 + 1928) = v68 != 0; /*0x638226*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4112LL) ) /*0x63822f*/
  {
    v71 = (const char *)(*(_QWORD *)a2 + 16448LL); /*0x638240*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16472LL) > 0xFu ) /*0x63824c*/
      v71 = *(const char **)v71; /*0x63824e*/
    v70 = atoi(v71); /*0x638251*/
  }
  else
  {
    v70 = 0; /*0x638238*/
  }
  *(_BYTE *)(a1 + 1929) = v70 != 0; /*0x63825c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4248LL) ) /*0x638265*/
  {
    v73 = (const char *)(*(_QWORD *)a2 + 16992LL); /*0x638276*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17016LL) > 0xFu ) /*0x638282*/
      v73 = *(const char **)v73; /*0x638284*/
    v72 = atoi(v73); /*0x638287*/
  }
  else
  {
    v72 = 0; /*0x63826e*/
  }
  *(_BYTE *)(a1 + 1930) = v72 != 0; /*0x638292*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 80LL) ) /*0x63829b*/
  {
    v75 = (const char *)(*(_QWORD *)a2 + 320LL); /*0x6382a9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 344LL) > 0xFu ) /*0x6382b5*/
      v75 = *(const char **)v75; /*0x6382b7*/
    v76 = atof(v75); /*0x6382c3*/
    if ( isnan(v76) ) /*0x6382ca*/
      v74 = 0.0; /*0x6382d4*/
    else
      v74 = fminf(1000000000.0, fmaxf(-1000000000.0, v76)); /*0x6382e5*/
  }
  else
  {
    v74 = 0.0; /*0x6382a1*/
  }
  *(float *)(a1 + 1468) = v74; /*0x6382e9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 240LL) ) /*0x6382f4*/
  {
    v78 = (const char *)(*(_QWORD *)a2 + 960LL); /*0x638305*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 984LL) > 0xFu ) /*0x638311*/
      v78 = *(const char **)v78; /*0x638313*/
    v77 = atoi(v78); /*0x638316*/
  }
  else
  {
    v77 = 0; /*0x6382fd*/
  }
  *(_DWORD *)(a1 + 1512) = v77; /*0x63831c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 680LL) ) /*0x638325*/
  {
    v79 = (const char *)(*(_QWORD *)a2 + 2720LL); /*0x638331*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 2744LL) > 0xFu ) /*0x63833d*/
      v79 = *(const char **)v79; /*0x63833f*/
    v80 = atof(v79); /*0x63834b*/
    if ( !isnan(v80) ) /*0x638352*/
      v6 = fminf(1000000000.0, fmaxf(-1000000000.0, v80)); /*0x638365*/
  }
  v81 = 9999; /*0x638370*/
  *(float *)(a1 + 1516) = v6; /*0x638380*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x638390*/
  {
    v83 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x6383a1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x6383ad*/
      v83 = *(const char **)v83; /*0x6383af*/
    v82 = atoi(v83); /*0x6383b2*/
    if ( v82 < 0 ) /*0x6383ba*/
      v82 = 0; /*0x6383ba*/
    if ( v82 > 9999 ) /*0x6383c0*/
      v82 = 9999; /*0x6383c2*/
  }
  else
  {
    v82 = 0; /*0x638399*/
  }
  *(_DWORD *)(a1 + 1480) = v82; /*0x6383c4*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x6383cd*/
  {
    v84 = 0; /*0x6383d6*/
LABEL_193:
    v81 = v84; /*0x6383ff*/
    goto LABEL_194; /*0x6383ff*/
  }
  v85 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x6383de*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x6383ea*/
    v85 = *(const char **)v85; /*0x6383ec*/
  v84 = atoi(v85); /*0x6383ef*/
  if ( v84 < 0 ) /*0x6383f7*/
    v84 = 0; /*0x6383f7*/
  if ( v84 <= 9999 ) /*0x6383fd*/
    goto LABEL_193; /*0x6383fd*/
LABEL_194:
  *(_DWORD *)(a1 + 1484) = v81; /*0x638401*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1104LL) ) /*0x63840f*/
  {
    v87 = (const char *)(*(_QWORD *)a2 + 4416LL); /*0x638420*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4440LL) > 0xFu ) /*0x63842c*/
      v87 = *(const char **)v87; /*0x63842e*/
    v86 = atoi(v87); /*0x638431*/
  }
  else
  {
    v86 = 0; /*0x638418*/
  }
  *(_BYTE *)(a1 + 1700) = v86 != 0; /*0x63843c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1600LL) ) /*0x638445*/
  {
    v89 = (const char *)(*(_QWORD *)a2 + 6400LL); /*0x638456*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6424LL) > 0xFu ) /*0x638462*/
      v89 = *(const char **)v89; /*0x638464*/
    v88 = atoi(v89); /*0x638467*/
  }
  else
  {
    v88 = 0; /*0x63844e*/
  }
  *(_BYTE *)(a1 + 1701) = v88 != 0; /*0x638472*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1608LL) ) /*0x63847b*/
  {
    v91 = (const char *)(*(_QWORD *)a2 + 6432LL); /*0x63848c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6456LL) > 0xFu ) /*0x638498*/
      v91 = *(const char **)v91; /*0x63849a*/
    v90 = atoi(v91); /*0x63849d*/
  }
  else
  {
    v90 = 0; /*0x638484*/
  }
  *(_BYTE *)(a1 + 1702) = v90 != 0; /*0x6384a8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1568LL) ) /*0x6384b1*/
  {
    v93 = (const char *)(*(_QWORD *)a2 + 6272LL); /*0x6384c2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6296LL) > 0xFu ) /*0x6384ce*/
      v93 = *(const char **)v93; /*0x6384d0*/
    v92 = atoi(v93); /*0x6384d3*/
  }
  else
  {
    v92 = 0; /*0x6384ba*/
  }
  *(_DWORD *)(a1 + 1920) = v92; /*0x6384d9*/
  v94 = *(_QWORD *)a3; /*0x6384df*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1576LL) ) /*0x6384e7*/
  {
    v95 = (const char *)(*(_QWORD *)a2 + 6304LL); /*0x63850d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6328LL) > 0xFu ) /*0x638519*/
      v95 = *(const char **)v95; /*0x63851b*/
    LODWORD(v94) = atoi(v95); /*0x63851e*/
    *(_DWORD *)(a1 + 1924) = v94; /*0x638529*/
  }
  else
  {
    *(_DWORD *)(a1 + 1924) = 0; /*0x6384f0*/
  }
  return v94; /*0x6384f7*/
}
