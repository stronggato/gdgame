#include <Geode/binding/KeybindingsSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x3d5370
// Method: KeybindingsSettingsPopup::~KeybindingsSettingsPopup
char *__fastcall KeybindingsSettingsPopup__dtor_KeybindingsSettingsPopup(char *Block, char a2)
{
  sub_3C310(Block + 712); /*0x3d5386*/
  sub_3D4FB0(Block + 680); /*0x3d5392*/
  StarInfoPopup__dtor_StarInfoPopup((__int64)Block); /*0x3d539a*/
  if ( (a2 & 1) != 0 ) /*0x3d53a2*/
    j_j_free(Block); /*0x3d53ac*/
  return Block; /*0x3d53b1*/
}

// [2/2] Address: 0x3d62c0
// Method: KeybindingsSettingsPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
void __fastcall KeybindingsSettingsPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  __m128i si128; // xmm3
  __int64 v6; // rcx
  __int128 v7; // xmm2
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __m128i v16; // [rsp+40h] [rbp-28h]

  v4 = *(_DWORD *)(a1 + 40); /*0x3d62e6*/
  *(_OWORD *)Block = 0; /*0x3d62ec*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x3d62f1*/
  v16 = si128; /*0x3d62f9*/
  LOBYTE(Block[0]) = 0; /*0x3d62ff*/
  v6 = a1 + 48; /*0x3d6304*/
  if ( Block != (void **)v6 ) /*0x3d6310*/
  {
    v7 = *(_OWORD *)Block; /*0x3d6312*/
    *(_OWORD *)Block = *(_OWORD *)v6; /*0x3d631a*/
    v16 = *(__m128i *)(v6 + 16); /*0x3d6323*/
    *(_OWORD *)v6 = v7; /*0x3d6328*/
    *(__m128i *)(v6 + 16) = si128; /*0x3d632b*/
  }
  v8 = *(_DWORD *)(a1 + 80); /*0x3d632f*/
  *(_DWORD *)(a1 + 40) = 0; /*0x3d6334*/
  *(_DWORD *)(a1 + 80) = 0; /*0x3d6337*/
  if ( a3 ) /*0x3d633d*/
  {
    if ( v4 == 1 ) /*0x3d6346*/
    {
      v9 = sub_384880(); /*0x3d6348*/
      sub_3870B0(v9); /*0x3d6350*/
    }
    else
    {
      if ( v4 != 2 ) /*0x3d635a*/
        goto LABEL_11; /*0x3d635a*/
      v10 = sub_384880(); /*0x3d6361*/
      LOBYTE(v11) = 1; /*0x3d636c*/
      sub_387D80(v10, (unsigned int)Block, v11, 0, 0); /*0x3d6377*/
      sub_3881C0(v10, v8); /*0x3d6381*/
    }
    v12 = *(_QWORD *)(a1 + 8); /*0x3d6386*/
    if ( v12 ) /*0x3d638d*/
      cocos2d::CCNode::scheduleOnce(v12, sub_5AB90); /*0x3d6399*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 664) + 992LL))(a1 - 664, 0); /*0x3d63af*/
    LOBYTE(v13) = 1; /*0x3d63bc*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 664) + 520LL))(a1 - 664, v13); /*0x3d63c5*/
  }
LABEL_11:
  if ( v16.m128i_i64[1] > 0xFuLL ) /*0x3d63d5*/
  {
    v14 = Block[0]; /*0x3d63da*/
    if ( (unsigned __int64)(v16.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d63e9*/
    {
      v14 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d63ef*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F ) /*0x3d63fe*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3d640f*/
    }
    j_j_free(v14); /*0x3d6416*/
  }
}
