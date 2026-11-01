#include <Geode/binding/EditorSoundsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x19a1d0
// Method: EditorSoundsLayer::~EditorSoundsLayer
__int64 __fastcall EditorSoundsLayer__dtor_EditorSoundsLayer(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rdx
  _BYTE v9[16]; // [rsp+30h] [rbp-88h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+50h] [rbp-68h]
  _BYTE v12[32]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+80h] [rbp-38h] BYREF

  *(_QWORD *)a1 = &EditorSoundsLayer::`vftable'; /*0x19a1f9*/
  *(_QWORD *)(a1 + 320) = &EditorSoundsLayer::`vftable'; /*0x19a203*/
  *(_QWORD *)(a1 + 328) = &EditorSoundsLayer::`vftable'; /*0x19a211*/
  *(_QWORD *)(a1 + 336) = &EditorSoundsLayer::`vftable'; /*0x19a21f*/
  *(_QWORD *)(a1 + 344) = &EditorSoundsLayer::`vftable'; /*0x19a22d*/
  *(_QWORD *)(a1 + 352) = &EditorSoundsLayer::`vftable'; /*0x19a23b*/
  *(_QWORD *)(a1 + 408) = &EditorSoundsLayer::`vftable'; /*0x19a249*/
  *(_QWORD *)(a1 + 432) = &EditorSoundsLayer::`vftable'; /*0x19a257*/
  *(_QWORD *)(a1 + 544) = &EditorSoundsLayer::`vftable'; /*0x19a265*/
  *(_QWORD *)(a1 + 664) = &EditorSoundsLayer::`vftable'; /*0x19a273*/
  *(_QWORD *)(a1 + 672) = &EditorSoundsLayer::`vftable'; /*0x19a281*/
  if ( *(_QWORD *)(a1 + 1144) && *(int *)(a1 + 1048) >= 0 ) /*0x19a29d*/
  {
    Block[1] = 0; /*0x19a2a3*/
    Block[0] = (void *)sub_3C460(32); /*0x19a2b6*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_830FE0); /*0x19a2c3*/
    strcpy((char *)Block[0], "editorsounds.tab."); /*0x19a2d0*/
    v2 = sub_D08C0(v13, *(unsigned int *)(a1 + 1048)); /*0x19a2ef*/
    sub_74FF0(v12, v3, Block, v2); /*0x19a301*/
    v4 = *(_QWORD *)(a1 + 1144); /*0x19a306*/
    v5 = sub_7FC90(); /*0x19a30d*/
    *(_DWORD *)(*(_QWORD *)sub_82350(v5, v9, v12) + 48LL) = *(_DWORD *)(v4 + 436); /*0x19a32d*/
    sub_3C310(v12); /*0x19a335*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x19a343*/
    {
      v6 = Block[0]; /*0x19a348*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x19a357*/
      {
        v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x19a35d*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x19a36c*/
          invoke_watson(0, 0, 0, 0, 0); /*0x19a381*/
      }
      j_j_free(v6); /*0x19a388*/
    }
    sub_3C310(v13); /*0x19a395*/
  }
  dword_903794 = *(_DWORD *)(a1 + 1048); /*0x19a3a0*/
  if ( &qword_8F8440 != (void **)(a1 + 1104) ) /*0x19a3b7*/
  {
    v7 = (void *)(a1 + 1104); /*0x19a3b9*/
    if ( *(_QWORD *)(a1 + 1128) > 0xFu ) /*0x19a3c1*/
      v7 = *(void **)(a1 + 1104); /*0x19a3c3*/
    sub_3F5A0(&qword_8F8440, v7, *(_QWORD *)(a1 + 1120)); /*0x19a3ca*/
  }
  sub_3C310(a1 + 1104); /*0x19a3d2*/
  sub_19C960(a1 + 1024); /*0x19a3de*/
  sub_19CA30(a1 + 1000); /*0x19a3ea*/
  return UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)a1); /*0x19a3f8*/
}

// [2/8] Address: 0x19bb20
// Method: EditorSoundsLayer::showTab
// Hidden C++ exception states: #wind=3
void __fastcall EditorSoundsLayer_showTab(__int64 a1, int a2)
{
  int v4; // r12d
  int v5; // edi
  bool v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  char v33; // bl
  void *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  float v37; // [rsp+30h] [rbp-79h] BYREF
  float v38; // [rsp+34h] [rbp-75h]
  _BYTE v39[16]; // [rsp+38h] [rbp-71h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-61h] BYREF
  __m128i si128; // [rsp+58h] [rbp-51h]
  _BYTE v42[32]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v43[32]; // [rsp+88h] [rbp-21h] BYREF

  if ( a2 >= 0 && a2 < (int)((*(_QWORD *)(a1 + 1008) - *(_QWORD *)(a1 + 1000)) / 88LL) ) /*0x19bb90*/
  {
    v4 = *(_DWORD *)(a1 + 1048); /*0x19bb96*/
    v5 = *(_DWORD *)(a1 + 1136); /*0x19bb9d*/
    v6 = a2 == v5; /*0x19bba6*/
    if ( *(_QWORD *)(a1 + 1144) && v4 >= 0 ) /*0x19bbba*/
    {
      v7 = sub_D08C0(v43, (unsigned int)v4); /*0x19bbcc*/
      *(_OWORD *)Block = 0; /*0x19bbd2*/
      Block[0] = (void *)sub_3C460(32); /*0x19bbe0*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_830FE0); /*0x19bbec*/
      strcpy((char *)Block[0], "editorsounds.tab."); /*0x19bbf8*/
      sub_74FF0(v42, v8, Block, v7); /*0x19bc14*/
      v9 = *(_QWORD *)(a1 + 1144); /*0x19bc1a*/
      v10 = sub_7FC90(); /*0x19bc21*/
      *(_DWORD *)(*(_QWORD *)sub_82350(v10, v39, v42) + 48LL) = *(_DWORD *)(v9 + 436); /*0x19bc3f*/
      sub_3C310(v42); /*0x19bc46*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x19bc54*/
      {
        v11 = Block[0]; /*0x19bc59*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x19bc67*/
        {
          v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x19bc6d*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x19bc7c*/
            invoke_watson(0, 0, 0, 0, 0); /*0x19bc8d*/
        }
        j_j_free(v11); /*0x19bc94*/
      }
      sub_3C310(v43); /*0x19bc9e*/
    }
    v12 = *(_QWORD *)(a1 + 1080); /*0x19bca3*/
    if ( v12 ) /*0x19bcad*/
    {
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v12 + 336LL))(v12, v6); /*0x19bcb6*/
      (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1080) + 920LL))(*(_QWORD *)(a1 + 1080), v6); /*0x19bcca*/
      if ( v4 == v5 && a2 != v5 ) /*0x19bcd8*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1080) + 1032LL))(*(_QWORD *)(a1 + 1080), 0); /*0x19bce6*/
    }
    v13 = *(_QWORD *)(a1 + 1088); /*0x19bcec*/
    if ( v13 ) /*0x19bcf6*/
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v13 + 336LL))(v13, v6); /*0x19bcff*/
    v14 = *(_QWORD *)(a1 + 1096); /*0x19bd05*/
    if ( v14 ) /*0x19bd0f*/
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v14 + 336LL))(v14, v6); /*0x19bd18*/
    *(_DWORD *)(a1 + 1048) = a2; /*0x19bd1e*/
    v15 = cocos2d::CCDirector::sharedDirector(v14); /*0x19bd25*/
    cocos2d::CCDirector::getWinSize(v15, &v37); /*0x19bd32*/
    v16 = *(float *)(a1 + 732) - 30.0; /*0x19bd40*/
    v17 = (float)(v38 * 0.5) - 100.0; /*0x19bd58*/
    if ( a2 == v5 ) /*0x19bd63*/
      v18 = 64.0; /*0x19bd65*/
    else
      v18 = 96.0; /*0x19bd6f*/
    if ( *(_QWORD *)(a1 + 1144) ) /*0x19bd7b*/
    {
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)v39, v16, (float)((float)(v38 * 0.5) + v18) - v17); /*0x19bd94*/
      v20 = v19; /*0x19bd9a*/
      v21 = *(_QWORD *)(a1 + 1144); /*0x19bd9d*/
      cocos2d::CCSize::operator=(v21 + 424, v19); /*0x19bdae*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 312LL))(v21, v20); /*0x19bdc4*/
      sub_7FF60(v21); /*0x19bdca*/
      sub_801A0(); /*0x19bdcf*/
      sub_7FFD0(v21); /*0x19bdd7*/
      v22 = *(__int64 **)(a1 + 1144); /*0x19bddc*/
      v23 = *v22; /*0x19bde3*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v39, (float)(v37 * 0.5) - (float)(v16 * 0.5), v17); /*0x19be06*/
      (*(void (__fastcall **)(__int64 *, __int64))(v23 + 184))(v22, v24); /*0x19be12*/
      LOBYTE(v25) = 1; /*0x19be29*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 1144) + 416LL) + 576LL))( /*0x19be2b*/
        *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 416LL),
        v25);
      v30 = cocos2d::CCMenu::create(v27, v26, v28, v29); /*0x19be31*/
      *(_QWORD *)(a1 + 1152) = v30; /*0x19be37*/
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v30 + 288LL))(v30, &unk_904688); /*0x19be52*/
      (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 1152) + 312LL))(*(_QWORD *)(a1 + 1152), &unk_9046A0); /*0x19be66*/
      (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 1152) + 184LL))(*(_QWORD *)(a1 + 1152), &unk_904688); /*0x19be7d*/
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 1144) + 416LL) + 456LL))( /*0x19bea1*/
        *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 416LL),
        *(_QWORD *)(a1 + 1152),
        2);
    }
    sub_19B3B0(a1, (unsigned int)a2); /*0x19bead*/
    if ( *(_QWORD *)(a1 + 1144) ) /*0x19beb2*/
    {
      v31 = sub_D08C0(v43, (unsigned int)a2); /*0x19becc*/
      *(_OWORD *)Block = 0; /*0x19bed2*/
      Block[0] = (void *)sub_3C460(32); /*0x19bee0*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_830FE0); /*0x19beec*/
      strcpy((char *)Block[0], "editorsounds.tab."); /*0x19bef8*/
      sub_74FF0(v42, v32, Block, v31); /*0x19bf14*/
      v33 = sub_7FE90(*(_QWORD *)(a1 + 1144), v42); /*0x19bf2a*/
      sub_3C310(v42); /*0x19bf31*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x19bf3f*/
      {
        v34 = Block[0]; /*0x19bf44*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x19bf52*/
        {
          v34 = (void *)*((_QWORD *)Block[0] - 1); /*0x19bf58*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v34 - 8) > 0x1F ) /*0x19bf67*/
            invoke_watson(0, 0, 0, 0, 0); /*0x19bf78*/
        }
        j_j_free(v34); /*0x19bf82*/
      }
      sub_3C310(v43); /*0x19bf8c*/
      if ( !v33 ) /*0x19bf93*/
      {
        v35 = *(_QWORD *)(a1 + 1144); /*0x19bf95*/
        *(_DWORD *)(v35 + 436) = 0; /*0x19bf9c*/
        *(_DWORD *)(v35 + 476) = 0; /*0x19bfa3*/
        sub_7FF60(v35); /*0x19bfaa*/
        sub_7FFD0(v36); /*0x19bfaf*/
      }
    }
    sub_667FE0(a1); /*0x19bfb7*/
    sub_6680D0(a1); /*0x19bfbf*/
  }
}

// [3/8] Address: 0x19c000
// Method: EditorSoundsLayer::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall EditorSoundsLayer_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rdi
  void *v7; // rdx
  void **v8; // rcx
  void **v9; // rbx
  unsigned __int64 v10; // rsi
  size_t v11; // rbp
  void **v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void **v15; // rax
  void *Buf1[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v18; // [rsp+50h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 536); /*0x19c02b*/
  if ( a2 == v3 ) /*0x19c035*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 600) + 600LL) + 8LL))(*(_QWORD *)(v3 + 600) + 600LL); /*0x19c04c*/
    *(_OWORD *)Buf1 = 0; /*0x19c052*/
    Size = 0; /*0x19c057*/
    v18 = 0; /*0x19c05c*/
    v5 = -1; /*0x19c061*/
    do /*0x19c073*/
      ++v5; /*0x19c070*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x19c073*/
    sub_3C230(Buf1); /*0x19c081*/
    v6 = (void **)(a1 + 560); /*0x19c087*/
    v7 = (void *)(a1 + 560); /*0x19c08e*/
    if ( *(_QWORD *)(a1 + 584) > 0xFu ) /*0x19c096*/
      v7 = *v6; /*0x19c098*/
    v8 = Buf1; /*0x19c09b*/
    v9 = (void **)Buf1[0]; /*0x19c0a0*/
    v10 = v18; /*0x19c0a5*/
    if ( v18 > 0xF ) /*0x19c0ae*/
      v8 = (void **)Buf1[0]; /*0x19c0ae*/
    v11 = Size; /*0x19c0b2*/
    if ( Size != *(_QWORD *)(a1 + 576) || Size && memcmp(v8, v7, Size) ) /*0x19c0c5*/
    {
      if ( v6 != Buf1 ) /*0x19c0d6*/
      {
        v12 = Buf1; /*0x19c0d8*/
        if ( v10 > 0xF ) /*0x19c0e1*/
          v12 = v9; /*0x19c0e1*/
        sub_3F5A0((void *)(a1 + 560), v12, v11); /*0x19c0eb*/
        v10 = v18; /*0x19c0f0*/
        v9 = (void **)Buf1[0]; /*0x19c0f5*/
      }
      v13 = *(_QWORD *)(a1 + 600); /*0x19c0fa*/
      if ( v13 ) /*0x19c104*/
      {
        *(_DWORD *)(v13 + 436) = 0; /*0x19c106*/
        *(_DWORD *)(v13 + 476) = 0; /*0x19c10d*/
        sub_7FF60(v13); /*0x19c114*/
        sub_7FFD0(v14); /*0x19c119*/
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 544) + 1200LL))(a1 - 544, *(unsigned int *)(a1 + 592)); /*0x19c133*/
    }
    if ( v10 > 0xF ) /*0x19c13e*/
    {
      v15 = v9; /*0x19c144*/
      if ( v10 + 1 >= 0x1000 ) /*0x19c14e*/
      {
        v9 = (void **)*(v9 - 1); /*0x19c154*/
        if ( (unsigned __int64)((char *)v15 - (char *)v9 - 8) > 0x1F ) /*0x19c163*/
          invoke_watson(0, 0, 0, 0, 0); /*0x19c174*/
      }
      j_j_free(v9); /*0x19c17e*/
    }
  }
}

// [4/8] Address: 0x19c1b0
// Method: EditorSoundsLayer::ccTouchBegan
char __fastcall EditorSoundsLayer_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  char result; // al
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-20h] BYREF
  float v11; // [rsp+60h] [rbp+8h] BYREF
  float v12; // [rsp+64h] [rbp+Ch]
  float v13; // [rsp+78h] [rbp+20h] BYREF
  float v14; // [rsp+7Ch] [rbp+24h]

  if ( *(_QWORD *)(a1 + 824) ) /*0x19c1bf*/
  {
    cocos2d::CCTouch::getLocation(a2, v9); /*0x19c1de*/
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 824), &v13, &unk_904688); /*0x19c1f7*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v11, (const struct cocos2d::CCSize *)(*(_QWORD *)(a1 + 824) + 424LL)); /*0x19c210*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v10, v13, v14, v11, v12); /*0x19c239*/
    if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v10, (const struct cocos2d::CCPoint *)v9) ) /*0x19c249*/
    {
      v6 = *(_QWORD *)(a1 + 824); /*0x19c253*/
      if ( v6 ) /*0x19c25d*/
        sub_80640(v6, a2); /*0x19c262*/
      v7 = *(_QWORD *)(a1 + 832); /*0x19c267*/
      if ( v7 ) /*0x19c271*/
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 8LL))( /*0x19c283*/
               v7 + 320,
               a2,
               a3) )
        {
          FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x19c293*/
          *(_BYTE *)(a1 + 840) = 1; /*0x19c298*/
          return 1; /*0x19c2b0*/
        }
      }
    }
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x19c2ba*/
  *(_BYTE *)(a1 + 840) = 0; /*0x19c2bf*/
  if ( result ) /*0x19c2c8*/
    return 1; /*0x19c2c8*/
  return result; /*0x19c2a1*/
}

// [5/8] Address: 0x19c2e0
// Method: EditorSoundsLayer::ccTouchMoved
__int64 __fastcall EditorSoundsLayer_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx

  if ( *(_QWORD *)(a1 + 824) ) /*0x19c2f5*/
  {
    sub_80830(); /*0x19c304*/
    v6 = *(_QWORD *)(a1 + 824); /*0x19c309*/
    if ( *(_BYTE *)(v6 + 481) ) /*0x19c310*/
    {
      *(_BYTE *)(v6 + 481) = 0; /*0x19c319*/
      if ( !*(_BYTE *)(a1 + 840) ) /*0x19c327*/
        goto LABEL_7; /*0x19c327*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 832) + 320LL) + 32LL))( /*0x19c340*/
        *(_QWORD *)(a1 + 832) + 320LL,
        a2,
        a3);
      *(_BYTE *)(a1 + 840) = 0; /*0x19c343*/
    }
  }
  if ( *(_BYTE *)(a1 + 840) ) /*0x19c34a*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 832) + 320LL) + 16LL))( /*0x19c36a*/
      *(_QWORD *)(a1 + 832) + 320LL,
      a2,
      a3);
LABEL_7:
  result = *(unsigned int *)(a2 + 56); /*0x19c36d*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x19c376*/
  {
    v8 = *(_QWORD *)(a1 + 232); /*0x19c378*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x19c387*/
      return result; /*0x19c387*/
    v8 = *(_QWORD *)(a1 + 304); /*0x19c389*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 16LL))(v8 + 320, a2, a3); /*0x19c3a3*/
}

// [6/8] Address: 0x19c3c0
// Method: EditorSoundsLayer::ccTouchEnded
__int64 __fastcall EditorSoundsLayer_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char v7; // si
  __int64 *v8; // rcx
  __int64 v9; // rax

  v5 = *(_QWORD *)(a1 + 824); /*0x19c3da*/
  if ( v5 && *(_BYTE *)(v5 + 480) ) /*0x19c3e9*/
  {
    v7 = 1; /*0x19c3f2*/
  }
  else
  {
    v7 = 0; /*0x19c3f7*/
    if ( !v5 ) /*0x19c3fd*/
      goto LABEL_6; /*0x19c3fd*/
  }
  sub_80AF0(v5); /*0x19c3ff*/
LABEL_6:
  if ( *(_BYTE *)(a1 + 840) ) /*0x19c404*/
  {
    v8 = (__int64 *)(*(_QWORD *)(a1 + 832) + 320LL); /*0x19c417*/
    v9 = *v8; /*0x19c421*/
    if ( v7 ) /*0x19c427*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 32))(v8, a2, a3); /*0x19c429*/
    else
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 24))(v8, a2, a3); /*0x19c42e*/
    *(_BYTE *)(a1 + 840) = 0; /*0x19c431*/
  }
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0x19c441*/
}

// [7/8] Address: 0x19c460
// Method: EditorSoundsLayer::ccTouchCancelled
__int64 __fastcall EditorSoundsLayer_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 824); /*0x19c475*/
  if ( v5 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v5 + 440) ) /*0x19c48d*/
  {
    *(_DWORD *)(v5 + 440) = -1; /*0x19c491*/
    *(_QWORD *)(v5 + 472) = 0; /*0x19c49b*/
    *(_WORD *)(v5 + 480) = 0; /*0x19c4a2*/
    *(_BYTE *)(v5 + 508) = 0; /*0x19c4a9*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v5); /*0x19c4af*/
  }
  if ( *(_BYTE *)(a1 + 840) ) /*0x19c4b5*/
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 832) + 320LL) + 32LL))( /*0x19c4d5*/
      *(_QWORD *)(a1 + 832) + 320LL,
      a2,
      a3);
    *(_BYTE *)(a1 + 840) = 0; /*0x19c4d8*/
  }
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x19c4e8*/
}

// [8/8] Address: 0x19c920
// Method: EditorSoundsLayer::onClose
__int64 __fastcall EditorSoundsLayer_onClose(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 1080); /*0x19c930*/
  if ( v2 ) /*0x19c93a*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1032LL))(v2, 0); /*0x19c941*/
  return SetupTriggerPopup_onClose(a1); /*0x19c94d*/
}
