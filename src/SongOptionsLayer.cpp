#include <Geode/binding/SongOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x1615d0
// Method: SongOptionsLayer::~SongOptionsLayer
_QWORD *__fastcall SongOptionsLayer__dtor_SongOptionsLayer(_QWORD *Block, char a2)
{
  *Block = &SongOptionsLayer::`vftable'; /*0x1615e3*/
  Block[40] = &SongOptionsLayer::`vftable'; /*0x1615f0*/
  Block[41] = &SongOptionsLayer::`vftable'; /*0x1615fe*/
  Block[42] = &SongOptionsLayer::`vftable'; /*0x16160c*/
  Block[43] = &SongOptionsLayer::`vftable'; /*0x16161a*/
  Block[44] = &SongOptionsLayer::`vftable'; /*0x161628*/
  Block[51] = &SongOptionsLayer::`vftable'; /*0x161636*/
  Block[54] = &SongOptionsLayer::`vftable'; /*0x161644*/
  Block[68] = &SongOptionsLayer::`vftable'; /*0x161652*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x161659*/
  if ( (a2 & 1) != 0 ) /*0x161661*/
    j_j_free(Block); /*0x16166b*/
  return Block; /*0x161670*/
}

// [2/3] Address: 0x164210
// Method: SongOptionsLayer::keyBackClicked
__int64 __fastcall SongOptionsLayer_keyBackClicked(__int64 a1)
{
  return sub_164080(a1 - 336, 0);
}

// [3/3] Address: 0x1ab7f0
// Method: SongOptionsLayer::onPlayback
// Hidden C++ exception states: #wind=2
__int64 __fastcall SongOptionsLayer_onPlayback(__int64 a1, float a2)
{
  float v3; // xmm6_4
  float v4; // xmm0_4
  __int64 v5; // rbx
  __int64 v6; // rbx
  struct cocos2d::CCString *v7; // rax
  void *v8; // rcx
  void *v10; // [rsp+30h] [rbp-48h]
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-30h]
  unsigned __int64 v13; // [rsp+50h] [rbp-28h]

  v3 = 0.0; /*0x1ab811*/
  if ( a2 > 0.0 ) /*0x1ab817*/
  {
    v4 = fminf(300.0, a2); /*0x1ab821*/
    v3 = 5.0; /*0x1ab825*/
    if ( v4 >= 5.0 ) /*0x1ab830*/
      v3 = v4; /*0x1ab832*/
  }
  *(float *)(a1 + 700) = v3; /*0x1ab835*/
  v5 = qword_905FD0; /*0x1ab83d*/
  if ( !qword_905FD0 ) /*0x1ab847*/
  {
    v10 = operator new(0x6E8u); /*0x1ab853*/
    qword_905FD0 = sub_2723A0(v10); /*0x1ab861*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1ab872*/
    v5 = qword_905FD0; /*0x1ab874*/
  }
  *(_OWORD *)Block = 0; /*0x1ab87e*/
  v12 = 3; /*0x1ab883*/
  v13 = 15; /*0x1ab88c*/
  LODWORD(Block[0]) = 6256231; /*0x1ab89b*/
  sub_43D80(Block, "0193", 4u); /*0x1ab8c2*/
  v6 = *(_QWORD *)(v5 + 432); /*0x1ab8c7*/
  v7 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(int)(float)(v3 * 10.0)); /*0x1ab8e1*/
  cocos2d::CCDictionary::setObject(v6, v7, Block); /*0x1ab8f2*/
  if ( v13 > 0xF ) /*0x1ab902*/
  {
    v8 = Block[0]; /*0x1ab907*/
    if ( v13 + 1 >= 0x1000 ) /*0x1ab916*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x1ab91c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x1ab92b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x1ab940*/
    }
    j_j_free(v8); /*0x1ab947*/
  }
  return GJRotationControl_finishTouch(a1); /*0x1ab954*/
}
