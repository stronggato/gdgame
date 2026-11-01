#include <Geode/binding/GauntletSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x1abbf0
// Method: GauntletSprite::toggleLockedSprite
// Hidden C++ exception states: #wind=2
__int64 __fastcall GauntletSprite_toggleLockedSprite(__int64 a1, float a2)
{
  float v3; // xmm0_4
  float v4; // xmm6_4
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rbx
  struct cocos2d::CCString *v8; // rax
  void *v9; // rcx
  void *v11; // [rsp+30h] [rbp-48h]
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  unsigned __int64 v14; // [rsp+50h] [rbp-28h]

  v3 = fminf(300.0, a2); /*0x1abc1e*/
  v4 = 0.0099999998; /*0x1abc22*/
  if ( v3 >= 0.0099999998 ) /*0x1abc2d*/
    v4 = v3; /*0x1abc2f*/
  *(float *)(a1 + 1704) = v4; /*0x1abc32*/
  v5 = qword_905FD0; /*0x1abc3a*/
  if ( !qword_905FD0 ) /*0x1abc44*/
  {
    v11 = operator new(0x6E8u); /*0x1abc50*/
    qword_905FD0 = sub_2723A0(v11); /*0x1abc5e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1abc6f*/
    v5 = qword_905FD0; /*0x1abc71*/
  }
  v6 = (int)roundf(v4 * 1000.0); /*0x1abc89*/
  *(_OWORD *)Block = 0; /*0x1abc90*/
  v13 = 3; /*0x1abc95*/
  v14 = 15; /*0x1abc9e*/
  LODWORD(Block[0]) = 6256231; /*0x1abcad*/
  sub_43D80(Block, "0238", 4u); /*0x1abcd4*/
  v7 = *(_QWORD *)(v5 + 432); /*0x1abcd9*/
  v8 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v6); /*0x1abce9*/
  cocos2d::CCDictionary::setObject(v7, v8, Block); /*0x1abcfa*/
  if ( v14 > 0xF ) /*0x1abd0a*/
  {
    v9 = Block[0]; /*0x1abd0f*/
    if ( v14 + 1 >= 0x1000 ) /*0x1abd1e*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x1abd24*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x1abd33*/
        invoke_watson(0, 0, 0, 0, 0); /*0x1abd48*/
    }
    j_j_free(v9); /*0x1abd4f*/
  }
  return sub_1F0FD0(a1); /*0x1abd5c*/
}
