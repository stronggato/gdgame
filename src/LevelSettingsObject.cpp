#include <Geode/binding/LevelSettingsObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3e9290
// Method: LevelSettingsObject::~LevelSettingsObject
// Hidden C++ exception states: #wind=1
char *__fastcall LevelSettingsObject__dtor_LevelSettingsObject(char *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &LevelSettingsObject::`vftable'; /*0x3e92ab*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 40); /*0x3e92ae*/
  if ( v4 ) /*0x3e92b8*/
    cocos2d::CCObject::release(v4); /*0x3e92ba*/
  sub_BB6F0(Block + 704, Block + 704); /*0x3e92ca*/
  sub_3C310(Block + 664); /*0x3e92d6*/
  sub_18A270(Block + 648, Block + 648, *(_QWORD *)(*((_QWORD *)Block + 81) + 8LL)); /*0x3e92f4*/
  j_j_free(*((void **)Block + 81)); /*0x3e9305*/
  sub_3DA90(Block + 608); /*0x3e9311*/
  sub_116D80(Block + 592); /*0x3e931d*/
  sub_3DA90(Block + 544); /*0x3e9329*/
  sub_4103F0(Block + 528); /*0x3e9335*/
  sub_3C310(Block + 488); /*0x3e9341*/
  sub_3C310(Block + 392); /*0x3e934d*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)Block); /*0x3e9355*/
  if ( (a2 & 1) != 0 ) /*0x3e9360*/
    j_j_free(Block); /*0x3e936a*/
  return Block; /*0x3e9372*/
}

// [2/3] Address: 0x40acb0
// Method: LevelSettingsObject::init
bool __fastcall LevelSettingsObject_init(__int64 a1)
{
  bool result; // al
  cocos2d::CCObject *v3; // rax
  cocos2d::CCObject *v4; // rbx
  cocos2d::CCObject *v5; // rcx
  char *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  char *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  char *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  char *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  char *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax

  result = cocos2d::CCNode::init((cocos2d::CCNode *)a1); /*0x40acb9*/
  if ( result ) /*0x40acc1*/
  {
    v3 = GJEffectManager_create(); /*0x40acd3*/
    v4 = v3; /*0x40acd8*/
    if ( *(cocos2d::CCObject **)(a1 + 320) != v3 ) /*0x40ace2*/
    {
      if ( v3 ) /*0x40ace7*/
        cocos2d::CCObject::retain(v3); /*0x40acec*/
      v5 = *(cocos2d::CCObject **)(a1 + 320); /*0x40acf2*/
      if ( v5 ) /*0x40acfc*/
        cocos2d::CCObject::release(v5); /*0x40acfe*/
      *(_QWORD *)(a1 + 320) = v4; /*0x40ad04*/
    }
    v6 = ColorAction_create(); /*0x40ad19*/
    *((_WORD *)v6 + 36) = 32040; /*0x40ad1c*/
    v6[74] = -1; /*0x40ad22*/
    v7 = *(_QWORD *)(a1 + 320); /*0x40ad26*/
    *((_DWORD *)v6 + 23) = 1000; /*0x40ad2d*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v7 + 328), (struct cocos2d::CCObject *)v6, 1000); /*0x40ad3b*/
    *(_QWORD *)(*(_QWORD *)(v7 + 736) + 8000LL) = v6; /*0x40ad50*/
    v8 = sub_362560(v7, 1000); /*0x40ad57*/
    *((_QWORD *)v6 + 18) = v8; /*0x40ad5c*/
    *(_QWORD *)(v8 + 344) = v6; /*0x40ad63*/
    v9 = ColorAction_create(); /*0x40ad78*/
    *((_WORD *)v9 + 36) = 26112; /*0x40ad7b*/
    v9[74] = -1; /*0x40ad81*/
    v10 = *(_QWORD *)(a1 + 320); /*0x40ad85*/
    *((_DWORD *)v9 + 23) = 1001; /*0x40ad8c*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v10 + 328), (struct cocos2d::CCObject *)v9, 1001); /*0x40ad9a*/
    *(_QWORD *)(*(_QWORD *)(v10 + 736) + 8008LL) = v9; /*0x40adaf*/
    v11 = sub_362560(v10, 1001); /*0x40adb6*/
    *((_QWORD *)v9 + 18) = v11; /*0x40adbb*/
    *(_QWORD *)(v11 + 344) = v9; /*0x40adc2*/
    v12 = ColorAction_create(); /*0x40add7*/
    *((_WORD *)v12 + 36) = 26112; /*0x40adda*/
    v12[74] = -1; /*0x40ade0*/
    v13 = *(_QWORD *)(a1 + 320); /*0x40ade4*/
    *((_DWORD *)v12 + 23) = 1009; /*0x40adeb*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v13 + 328), (struct cocos2d::CCObject *)v12, 1009); /*0x40adf9*/
    *(_QWORD *)(*(_QWORD *)(v13 + 736) + 8072LL) = v12; /*0x40ae0e*/
    v14 = sub_362560(v13, 1009); /*0x40ae15*/
    *((_QWORD *)v12 + 18) = v14; /*0x40ae1a*/
    *(_QWORD *)(v14 + 344) = v12; /*0x40ae21*/
    v15 = ColorAction_create(); /*0x40ae36*/
    *((_WORD *)v15 + 36) = -1; /*0x40ae39*/
    v15[74] = -1; /*0x40ae3f*/
    v15[84] = 1; /*0x40ae43*/
    v16 = *(_QWORD *)(a1 + 320); /*0x40ae47*/
    *((_DWORD *)v15 + 23) = 1002; /*0x40ae4e*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v16 + 328), (struct cocos2d::CCObject *)v15, 1002); /*0x40ae5c*/
    *(_QWORD *)(*(_QWORD *)(v16 + 736) + 8016LL) = v15; /*0x40ae71*/
    v17 = sub_362560(v16, 1002); /*0x40ae78*/
    *((_QWORD *)v15 + 18) = v17; /*0x40ae7d*/
    *(_QWORD *)(v17 + 344) = v15; /*0x40ae84*/
    v18 = ColorAction_create(); /*0x40ae99*/
    *((_WORD *)v18 + 36) = 32040; /*0x40ae9c*/
    v18[74] = -1; /*0x40aea2*/
    v19 = *(_QWORD *)(a1 + 320); /*0x40aea6*/
    *((_DWORD *)v18 + 23) = 1013; /*0x40aead*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v19 + 328), (struct cocos2d::CCObject *)v18, 1013); /*0x40aebb*/
    *(_QWORD *)(*(_QWORD *)(v19 + 736) + 8104LL) = v18; /*0x40aec8*/
    v20 = sub_362560(v19, 1013); /*0x40aed7*/
    *((_QWORD *)v18 + 18) = v20; /*0x40aedc*/
    *(_QWORD *)(v20 + 344) = v18; /*0x40aee3*/
    v21 = ColorAction_create(); /*0x40aef8*/
    *((_WORD *)v21 + 36) = 32040; /*0x40aefb*/
    v21[74] = -1; /*0x40af01*/
    v22 = *(_QWORD *)(a1 + 320); /*0x40af05*/
    *((_DWORD *)v21 + 23) = 1014; /*0x40af0c*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v22 + 328), (struct cocos2d::CCObject *)v21, 1014); /*0x40af1a*/
    *(_QWORD *)(*(_QWORD *)(v22 + 736) + 8112LL) = v21; /*0x40af2f*/
    v23 = sub_362560(v22, 1014); /*0x40af36*/
    *((_QWORD *)v21 + 18) = v23; /*0x40af40*/
    *(_QWORD *)(v23 + 344) = v21; /*0x40af47*/
    *(_QWORD *)(a1 + 328) = 0; /*0x40af55*/
    *(_WORD *)(a1 + 338) = 0; /*0x40af5c*/
    *(_QWORD *)(a1 + 352) = 0; /*0x40af63*/
    *(_DWORD *)(a1 + 364) = 0; /*0x40af6a*/
    *(_BYTE *)(a1 + 368) = 0; /*0x40af70*/
    *(_BYTE *)(a1 + 350) = 0; /*0x40af76*/
    *(_BYTE *)(a1 + 336) = 0; /*0x40af7e*/
    *(_DWORD *)(a1 + 456) = 16843009; /*0x40af85*/
    *(_DWORD *)(a1 + 464) = 16843009; /*0x40af8f*/
    *(_WORD *)(a1 + 469) = 257; /*0x40af99*/
    *(_DWORD *)(a1 + 460) = 16843009; /*0x40afa2*/
    *(_BYTE *)(a1 + 468) = 1; /*0x40afac*/
    return 1; /*0x40af4e*/
  }
  return result; /*0x40acc3*/
}

// [3/3] Address: 0x40afc0
// Method: LevelSettingsObject::getSaveString
// Hidden C++ exception states: #wind=11
__int64 __fastcall LevelSettingsObject_getSaveString(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  void *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  void **v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rdx
  void **v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  void **v23; // rax
  void *v24; // rcx
  __int64 v25; // rax
  void *v26; // rcx
  void *v27; // rcx
  __int128 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v30; // [rsp+40h] [rbp-C0h]
  void *Src[2]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-A8h]
  _BYTE v33[528]; // [rsp+70h] [rbp-90h] BYREF
  void *v34[2]; // [rsp+280h] [rbp+180h] BYREF
  __m128i v35; // [rsp+290h] [rbp+190h]
  void *Block[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v37; // [rsp+2B0h] [rbp+1B0h]
  void *v38[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v39; // [rsp+2D0h] [rbp+1D0h]
  unsigned __int64 v40; // [rsp+2D8h] [rbp+1D8h]
  _QWORD v41[4]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v42[528]; // [rsp+300h] [rbp+200h] BYREF

  *(_QWORD *)&v29 = a2; /*0x40affe*/
  fmt::BasicWriter<char>::BasicWriter<char>(v33); /*0x40b00b*/
  v4 = -1; /*0x40b019*/
  if ( !*(_BYTE *)(a1 + 368) ) /*0x40b020*/
  {
    *(_QWORD *)&v29 = "kS38"; /*0x40b034*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b039*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b048*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b04e*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b053*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b062*/
    v5 = *(_QWORD *)(a1 + 320); /*0x40b068*/
    fmt::BasicWriter<char>::BasicWriter<char>(v42); /*0x40b076*/
    v6 = *(_QWORD *)(v5 + 328); /*0x40b07d*/
    if ( v6 ) /*0x40b087*/
    {
      v7 = *(_QWORD *)(v6 + 56); /*0x40b08d*/
      if ( v7 ) /*0x40b094*/
      {
        for ( i = *(_QWORD *)(v7 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x40b09a*/
        {
          v9 = *(_QWORD *)(v7 + 264); /*0x40b0b0*/
          if ( *(int *)(v9 + 92) >= 1000 /*0x40b0f4*/
            || (v30 = *(_WORD *)(v9 + 72), v30 != -1)
            || *(_BYTE *)(v9 + 74) != 0xFF
            || *(_BYTE *)(v9 + 84)
            || *(float *)(v9 + 96) != 1.0
            || *(_DWORD *)(v9 + 120)
            || *(int *)(v9 + 88) > 0 )
          {
            sub_35FB30(v9, v42); /*0x40b0fd*/
            *(_QWORD *)&v29 = &word_70806C; /*0x40b102*/
            *((_QWORD *)&v29 + 1) = 0; /*0x40b107*/
            fmt::BasicWriter<char>::operator<<(v42, &v29); /*0x40b118*/
          }
          v7 = i; /*0x40b11e*/
          if ( !i ) /*0x40b124*/
            break; /*0x40b124*/
        }
      }
    }
    v10 = fmt::BasicWriter<char>::c_str(v42); /*0x40b136*/
    *(_OWORD *)Block = 0; /*0x40b13f*/
    v37 = 0; /*0x40b149*/
    v11 = -1; /*0x40b151*/
    do /*0x40b157*/
      ++v11; /*0x40b154*/
    while ( *(_BYTE *)(v10 + v11) ); /*0x40b157*/
    sub_3C230(Block); /*0x40b168*/
    fmt::BasicWriter<char>::~BasicWriter<char>(v42); /*0x40b175*/
    v29 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(Src, Block); /*0x40b191*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b1a0*/
    if ( *((_QWORD *)&v37 + 1) > 0xFu ) /*0x40b1b2*/
    {
      v12 = Block[0]; /*0x40b1b7*/
      if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 ) /*0x40b1c8*/
      {
        v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x40b1ce*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x40b1dd*/
          invoke_watson(0, 0, 0, 0, 0); /*0x40b1ee*/
      }
      j_j_free(v12); /*0x40b1f5*/
    }
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b1fa*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b1ff*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b20e*/
    *(_QWORD *)&v29 = "kA13"; /*0x40b21b*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b220*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b22f*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b235*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b23a*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b249*/
    fmt::BasicWriter<char>::operator<<(v33); /*0x40b25f*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b265*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b26a*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b279*/
    *(_QWORD *)&v29 = "kA15"; /*0x40b286*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b28b*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b29a*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b2a0*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b2a5*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b2b4*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 348)); /*0x40b2c6*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b2cc*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b2d1*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b2e0*/
    *(_QWORD *)&v29 = "kA16"; /*0x40b2ed*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b2f2*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b301*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b307*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b30c*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b31b*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 349)); /*0x40b32d*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b333*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b338*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b347*/
    *(_QWORD *)&v29 = "kA14"; /*0x40b354*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b359*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b368*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b36e*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b373*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b382*/
    v29 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(Src, a1 + 392); /*0x40b39d*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b3ac*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b3b2*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b3b7*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b3c6*/
    *(_QWORD *)&v29 = "kA6"; /*0x40b3d3*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b3d8*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b3e7*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b3ed*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b3f2*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b401*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 352)); /*0x40b412*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b418*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b41d*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b42c*/
    *(_QWORD *)&v29 = "kA7"; /*0x40b439*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b43e*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b44d*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b453*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b458*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b467*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 356)); /*0x40b478*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b47e*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b483*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b492*/
    *(_QWORD *)&v29 = "kA25"; /*0x40b49f*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b4a4*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b4b3*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b4b9*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b4be*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b4cd*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 364)); /*0x40b4de*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b4e4*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b4e9*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b4f8*/
    *(_QWORD *)&v29 = "kA17"; /*0x40b505*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b50a*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b519*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b51f*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b524*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b533*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 432)); /*0x40b544*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b54a*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b54f*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b55e*/
    *(_QWORD *)&v29 = "kA18"; /*0x40b56b*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b570*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b57f*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b585*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b58a*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b599*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 360)); /*0x40b5aa*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b5b0*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b5b5*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b5c4*/
    *(_QWORD *)&v29 = "kS39"; /*0x40b5d1*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b5d6*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b5e5*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b5eb*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b5f0*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b5ff*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 428)); /*0x40b610*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40b616*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40b61b*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b62a*/
  }
  *(_QWORD *)&v29 = "kA2"; /*0x40b637*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b63c*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b64b*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b651*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b656*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b665*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 328)); /*0x40b676*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b67c*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b681*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b690*/
  *(_QWORD *)&v29 = "kA3"; /*0x40b69d*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b6a2*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b6b1*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b6b7*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b6bc*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b6cb*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 336)); /*0x40b6dd*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b6e3*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b6e8*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b6f7*/
  *(_QWORD *)&v29 = "kA8"; /*0x40b704*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b709*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b718*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b71e*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b723*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b732*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 337)); /*0x40b744*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b74a*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b74f*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b75e*/
  *(_QWORD *)&v29 = "kA4"; /*0x40b76b*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b770*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b77f*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b785*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b78a*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b799*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 332)); /*0x40b7aa*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b7b0*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b7b5*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b7c4*/
  *(_QWORD *)&v29 = "kA9"; /*0x40b7d1*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b7d6*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b7e5*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b7eb*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b7f0*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b7ff*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 368)); /*0x40b811*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b817*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b81c*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b82b*/
  *(_QWORD *)&v29 = "kA10"; /*0x40b838*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b83d*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b84c*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b852*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b857*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b866*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 340)); /*0x40b878*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b87e*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b883*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b892*/
  *(_QWORD *)&v29 = "kA22"; /*0x40b89f*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b8a4*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b8b3*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b8b9*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b8be*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b8cd*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 341)); /*0x40b8df*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b8e5*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b8ea*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b8f9*/
  *(_QWORD *)&v29 = "kA23"; /*0x40b906*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b90b*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b91a*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b920*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b925*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b934*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 436)); /*0x40b946*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b94c*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b951*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b960*/
  *(_QWORD *)&v29 = "kA24"; /*0x40b96d*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b972*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b981*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b987*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b98c*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b99b*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 437)); /*0x40b9ad*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b9b3*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b9b8*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b9c7*/
  *(_QWORD *)&v29 = "kA27"; /*0x40b9d4*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b9d9*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40b9e8*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40b9ee*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40b9f3*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ba02*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 456)); /*0x40ba14*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40ba1a*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40ba1f*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ba2e*/
  *(_QWORD *)&v29 = "kA40"; /*0x40ba3b*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40ba40*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ba4f*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40ba55*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40ba5a*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ba69*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 464)); /*0x40ba7b*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40ba81*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40ba86*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ba95*/
  *(_QWORD *)&v29 = "kA57"; /*0x40baa2*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40baa7*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bab6*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40babc*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bac1*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bad0*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 465)); /*0x40bae2*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bae8*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40baed*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bafc*/
  *(_QWORD *)&v29 = "kA58"; /*0x40bb09*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bb0e*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bb1d*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bb23*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bb28*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bb37*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 466)); /*0x40bb49*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bb4f*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bb54*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bb63*/
  *(_QWORD *)&v29 = "kA48"; /*0x40bb70*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bb75*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bb84*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bb8a*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bb8f*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bb9e*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 470)); /*0x40bbb0*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bbb6*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bbbb*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bbca*/
  *(_QWORD *)&v29 = "kA41"; /*0x40bbd7*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bbdc*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bbeb*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bbf1*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bbf6*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bc05*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 467)); /*0x40bc17*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bc1d*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bc22*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bc31*/
  *(_QWORD *)&v29 = "kA42"; /*0x40bc3e*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bc43*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bc52*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bc58*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bc5d*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bc6c*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 468)); /*0x40bc7e*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bc84*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bc89*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bc98*/
  *(_QWORD *)&v29 = "kA63"; /*0x40bca5*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bcaa*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bcb9*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bcbf*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bcc4*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bcd3*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 338)); /*0x40bce5*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bceb*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bcf0*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bcff*/
  *(_QWORD *)&v29 = "kA29"; /*0x40bd0c*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bd11*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bd20*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bd26*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bd2b*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bd3a*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 339)); /*0x40bd4c*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bd52*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bd57*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bd66*/
  *(_QWORD *)&v29 = "kA31"; /*0x40bd73*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bd78*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bd87*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bd8d*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bd92*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bda1*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 457)); /*0x40bdb3*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bdb9*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bdbe*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bdcd*/
  *(_QWORD *)&v29 = "kA32"; /*0x40bdda*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bddf*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bdee*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bdf4*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bdf9*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40be08*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 458)); /*0x40be1a*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40be20*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40be25*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40be34*/
  *(_QWORD *)&v29 = "kA36"; /*0x40be41*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40be46*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40be55*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40be5b*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40be60*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40be6f*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 452)); /*0x40be80*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40be86*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40be8b*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40be9a*/
  *(_QWORD *)&v29 = "kA43"; /*0x40bea7*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40beac*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bebb*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bec1*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bec6*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bed5*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 438)); /*0x40bee7*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40beed*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bef2*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bf01*/
  *(_QWORD *)&v29 = "kA44"; /*0x40bf0e*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bf13*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bf22*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bf28*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bf2d*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bf3c*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 440)); /*0x40bf4d*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bf53*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bf58*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bf67*/
  *(_QWORD *)&v29 = "kA45"; /*0x40bf74*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bf79*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bf88*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bf8e*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bf93*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bfa2*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 469)); /*0x40bfb4*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bfba*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bfbf*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bfce*/
  *(_QWORD *)&v29 = "kA46"; /*0x40bfdb*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bfe0*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40bfef*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40bff5*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40bffa*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c009*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 350)); /*0x40c01b*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c021*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c026*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c035*/
  *(_QWORD *)&v29 = "kA47"; /*0x40c042*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c047*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c056*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c05c*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c061*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c070*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 444)); /*0x40c081*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c087*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c08c*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c09b*/
  *(_QWORD *)&v29 = "kA33"; /*0x40c0a8*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c0ad*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c0bc*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c0c2*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c0c7*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c0d6*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 459)); /*0x40c0e8*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c0ee*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c0f3*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c102*/
  *(_QWORD *)&v29 = "kA34"; /*0x40c10f*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c114*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c123*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c129*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c12e*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c13d*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 460)); /*0x40c14f*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c155*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c15a*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c169*/
  *(_QWORD *)&v29 = "kA35"; /*0x40c176*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c17b*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c18a*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c190*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c195*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c1a4*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 448)); /*0x40c1b6*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c1bc*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c1c1*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c1d0*/
  *(_QWORD *)&v29 = "kA37"; /*0x40c1dd*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c1e2*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c1f1*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c1f7*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c1fc*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c20b*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 461)); /*0x40c21d*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c223*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c228*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c237*/
  *(_QWORD *)&v29 = "kA38"; /*0x40c244*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c249*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c258*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c25e*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c263*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c272*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 462)); /*0x40c284*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c28a*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c28f*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c29e*/
  *(_QWORD *)&v29 = "kA39"; /*0x40c2ab*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c2b0*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c2bf*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c2c5*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c2ca*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c2d9*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 463)); /*0x40c2eb*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c2f1*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c2f6*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c305*/
  *(_QWORD *)&v29 = "kA19"; /*0x40c312*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c317*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c326*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c32c*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c331*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c340*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 372)); /*0x40c351*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c357*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c35c*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c36b*/
  *(_QWORD *)&v29 = "kA26"; /*0x40c378*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c37d*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c38c*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c392*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c397*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c3a6*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 376)); /*0x40c3b7*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c3bd*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c3c2*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c3d1*/
  *(_QWORD *)&v29 = "kA20"; /*0x40c3de*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c3e3*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c3f2*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c3f8*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c3fd*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c40c*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 370)); /*0x40c41e*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c424*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c429*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c438*/
  *(_QWORD *)&v29 = "kA21"; /*0x40c445*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c44a*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c459*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c45f*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c464*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c473*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 472)); /*0x40c485*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c48b*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c490*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c49f*/
  *(_QWORD *)&v29 = "kA49"; /*0x40c4ac*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c4b1*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c4c0*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c4c6*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c4cb*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c4da*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 471)); /*0x40c4ec*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c4f2*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c4f7*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c506*/
  *(_QWORD *)&v29 = "kA50"; /*0x40c513*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c518*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c527*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c52d*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c532*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c541*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 473)); /*0x40c553*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c559*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c55e*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c56d*/
  *(_QWORD *)&v29 = "kA51"; /*0x40c57a*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c57f*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c58e*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c594*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c599*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c5a8*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 476)); /*0x40c5b9*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c5bf*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c5c4*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c5d3*/
  *(_QWORD *)&v29 = "kA52"; /*0x40c5e0*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c5e5*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c5f4*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c5fa*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c5ff*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c60e*/
  fmt::BasicWriter<char>::operator<<(v33); /*0x40c624*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c62a*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c62f*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c63e*/
  *(_QWORD *)&v29 = "kA53"; /*0x40c64b*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c650*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c65f*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c665*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c66a*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c679*/
  v13 = (_QWORD *)(a1 + 488); /*0x40c67f*/
  if ( *(_QWORD *)(a1 + 512) > 0xFu ) /*0x40c68b*/
    v13 = (_QWORD *)*v13; /*0x40c68d*/
  v29 = (unsigned __int64)v13; /*0x40c690*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c6a4*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c6aa*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c6af*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c6be*/
  *(_QWORD *)&v29 = "kA54"; /*0x40c6cb*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c6d0*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c6df*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c6e5*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c6ea*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c6f9*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 480)); /*0x40c70a*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c710*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c715*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c724*/
  sub_409700(v41); /*0x40c738*/
  if ( v41[2] ) /*0x40c746*/
  {
    *(_QWORD *)&v29 = "kA55"; /*0x40c74f*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40c754*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c763*/
  }
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c769*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c76e*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c77d*/
  v14 = v41; /*0x40c783*/
  if ( v41[3] > 0xFu ) /*0x40c792*/
    v14 = (_QWORD *)v41[0]; /*0x40c792*/
  v29 = (unsigned __int64)v14; /*0x40c79a*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c7ae*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c7b4*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c7b9*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c7c8*/
  sub_40A6D0(v38); /*0x40c7dc*/
  if ( v39 ) /*0x40c7ea*/
  {
    *(_QWORD *)&v29 = "kA56"; /*0x40c7f3*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40c7f8*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c807*/
  }
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c80d*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c812*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c821*/
  v15 = v38; /*0x40c827*/
  if ( v40 > 0xF ) /*0x40c836*/
    v15 = (void **)v38[0]; /*0x40c836*/
  v29 = (unsigned __int64)v15; /*0x40c83e*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c852*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c858*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c85d*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c86c*/
  if ( *(_QWORD *)(a1 + 656) ) /*0x40c87c*/
  {
    *(_OWORD *)Src = 0; /*0x40c8aa*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_830EF0); /*0x40c8b7*/
    strcpy((char *)Src, "1|"); /*0x40c8c2*/
    v17 = sub_483600(Block); /*0x40c8d3*/
    v18 = (void *)v17; /*0x40c8d9*/
    if ( *(_QWORD *)(v17 + 24) > 0xFu ) /*0x40c8e1*/
      v18 = *(void **)v17; /*0x40c8e3*/
    sub_43D80(Src, v18, *(_QWORD *)(v17 + 16)); /*0x40c8ef*/
    sub_3C310(Block); /*0x40c8fc*/
    *(_OWORD *)v34 = *(_OWORD *)Src; /*0x40c906*/
    v35 = si128; /*0x40c912*/
    v16 = si128.m128i_i64[0]; /*0x40c919*/
  }
  else
  {
    *(_OWORD *)v34 = 0; /*0x40c883*/
    v16 = 0; /*0x40c88a*/
    v35.m128i_i64[0] = 0; /*0x40c88d*/
    v35.m128i_i64[1] = 15; /*0x40c894*/
    LOBYTE(v34[0]) = 0; /*0x40c89f*/
  }
  if ( v16 ) /*0x40c921*/
  {
    *(_QWORD *)&v29 = "kA59"; /*0x40c92a*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40c92f*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c93e*/
  }
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c944*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c949*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c958*/
  v19 = v34; /*0x40c95e*/
  if ( v35.m128i_i64[1] > 0xFuLL ) /*0x40c96d*/
    v19 = (void **)v34[0]; /*0x40c96d*/
  v29 = (unsigned __int64)v19; /*0x40c975*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c989*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40c98f*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40c994*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c9a3*/
  if ( *(_DWORD *)(a1 + 696) && *(_QWORD *)(a1 + 712) && *(_QWORD *)(a1 + 680) ) /*0x40c9c4*/
  {
    *(_QWORD *)&v29 = "kA61"; /*0x40c9d9*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40c9de*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40c9ed*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40c9f3*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40c9f8*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ca07*/
    fmt::BasicWriter<char>::operator<<(v33, *(unsigned int *)(a1 + 696)); /*0x40ca18*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40ca1e*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40ca23*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ca32*/
    *(_QWORD *)&v29 = "kA62"; /*0x40ca3f*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40ca44*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ca53*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40ca59*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40ca5e*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40ca6d*/
    v20 = (_QWORD *)sub_409110(Block); /*0x40ca81*/
    if ( v20[3] > 0xFu ) /*0x40ca8c*/
      v20 = (_QWORD *)*v20; /*0x40ca8e*/
    v29 = (unsigned __int64)v20; /*0x40ca91*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40caa5*/
    sub_3C310(Block); /*0x40cab3*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40cab8*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40cabd*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40cacc*/
    *(_QWORD *)&v29 = "kA60"; /*0x40cad9*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40cade*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40caed*/
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40caf3*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40caf8*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40cb07*/
    sub_3E4F0(Block, a1 + 664); /*0x40cb1b*/
    v22 = v21; /*0x40cb20*/
    *(_QWORD *)&v29 = v21; /*0x40cb23*/
    if ( *(_QWORD *)(v21 + 16) ) /*0x40cb28*/
    {
      cocos2d::ZipUtils::base64URLEncode(Src, v21); /*0x40cb6a*/
    }
    else
    {
      *(_OWORD *)Src = 0; /*0x40cb32*/
      si128 = 0; /*0x40cb3a*/
      *(_OWORD *)Src = *(_OWORD *)v21; /*0x40cb43*/
      si128 = *(__m128i *)(v21 + 16); /*0x40cb4c*/
      *(_QWORD *)(v21 + 16) = 0; /*0x40cb51*/
      *(_QWORD *)(v21 + 24) = 15; /*0x40cb55*/
      *(_BYTE *)v21 = 0; /*0x40cb5d*/
    }
    sub_3C310(v22); /*0x40cb74*/
    v23 = Src; /*0x40cb7a*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x40cb85*/
      v23 = (void **)Src[0]; /*0x40cb85*/
    v29 = (unsigned __int64)v23; /*0x40cb8b*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40cb9f*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x40cbaf*/
    {
      v24 = Src[0]; /*0x40cbb4*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x40cbc3*/
      {
        v24 = (void *)*((_QWORD *)Src[0] - 1); /*0x40cbc9*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v24 - 8) > 0x1F ) /*0x40cbd8*/
          invoke_watson(0, 0, 0, 0, 0); /*0x40cbe9*/
      }
      j_j_free(v24); /*0x40cbf0*/
    }
    *(_QWORD *)&v29 = &unk_709CE8; /*0x40cbf5*/
    *((_QWORD *)&v29 + 1) = 0; /*0x40cbfa*/
    fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40cc09*/
  }
  *(_QWORD *)&v29 = "kA11"; /*0x40cc16*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40cc1b*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40cc2a*/
  *(_QWORD *)&v29 = &unk_709CE8; /*0x40cc30*/
  *((_QWORD *)&v29 + 1) = 0; /*0x40cc35*/
  fmt::BasicWriter<char>::operator<<(v33, &v29); /*0x40cc44*/
  fmt::BasicWriter<char>::operator<<(v33, *(unsigned __int8 *)(a1 + 369)); /*0x40cc56*/
  v25 = fmt::BasicWriter<char>::c_str(v33); /*0x40cc61*/
  *(_OWORD *)a2 = 0; /*0x40cc6a*/
  *(_QWORD *)(a2 + 16) = 0; /*0x40cc6e*/
  *(_QWORD *)(a2 + 24) = 0; /*0x40cc72*/
  do /*0x40cc79*/
    ++v4; /*0x40cc76*/
  while ( *(_BYTE *)(v25 + v4) ); /*0x40cc79*/
  sub_3C230(a2); /*0x40cc88*/
  if ( v35.m128i_i64[1] > 0xFuLL ) /*0x40cc99*/
  {
    v26 = v34[0]; /*0x40cc9e*/
    if ( (unsigned __int64)(v35.m128i_i64[1] + 1) >= 0x1000 ) /*0x40ccaf*/
    {
      v26 = (void *)*((_QWORD *)v34[0] - 1); /*0x40ccb5*/
      if ( (unsigned __int64)((char *)v34[0] - (char *)v26 - 8) > 0x1F ) /*0x40ccc4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x40ccd5*/
    }
    j_j_free(v26); /*0x40ccdc*/
  }
  v35.m128i_i64[0] = 0; /*0x40cce1*/
  v35.m128i_i64[1] = 15; /*0x40cce8*/
  LOBYTE(v34[0]) = 0; /*0x40ccf3*/
  if ( v40 > 0xF ) /*0x40cd05*/
  {
    v27 = v38[0]; /*0x40cd0a*/
    if ( v40 + 1 >= 0x1000 ) /*0x40cd1b*/
    {
      v27 = (void *)*((_QWORD *)v38[0] - 1); /*0x40cd21*/
      if ( (unsigned __int64)((char *)v38[0] - (char *)v27 - 8) > 0x1F ) /*0x40cd30*/
        invoke_watson(0, 0, 0, 0, 0); /*0x40cd41*/
    }
    j_j_free(v27); /*0x40cd48*/
  }
  v39 = 0; /*0x40cd4d*/
  v40 = 15; /*0x40cd54*/
  LOBYTE(v38[0]) = 0; /*0x40cd5f*/
  sub_3C310(v41); /*0x40cd6d*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v33); /*0x40cd78*/
  return a2; /*0x40cd81*/
}
