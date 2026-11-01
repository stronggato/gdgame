#include <Geode/binding/ConfigureValuePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x12f380
// Method: ConfigureValuePopup::~ConfigureValuePopup
_QWORD *__fastcall ConfigureValuePopup__dtor_ConfigureValuePopup(_QWORD *Block, char a2)
{
  *Block = &ConfigureValuePopup::`vftable'; /*0x12f393*/
  Block[40] = &ConfigureValuePopup::`vftable'; /*0x12f3a0*/
  Block[41] = &ConfigureValuePopup::`vftable'; /*0x12f3ae*/
  Block[42] = &ConfigureValuePopup::`vftable'; /*0x12f3bc*/
  Block[43] = &ConfigureValuePopup::`vftable'; /*0x12f3ca*/
  Block[44] = &ConfigureValuePopup::`vftable'; /*0x12f3d8*/
  Block[51] = &ConfigureValuePopup::`vftable'; /*0x12f3e6*/
  Block[54] = &ConfigureValuePopup::`vftable'; /*0x12f3f4*/
  Block[68] = &ConfigureValuePopup::`vftable'; /*0x12f402*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x12f409*/
  if ( (a2 & 1) != 0 ) /*0x12f411*/
    j_j_free(Block); /*0x12f41b*/
  return Block; /*0x12f420*/
}

// [2/7] Address: 0x12f430
// Method: ConfigureValuePopup::create
// Hidden C++ exception states: #wind=4
_QWORD *__fastcall ConfigureValuePopup_create(int a1, __int64 a2, __int64 a3, float a4, __int64 a5, __int64 a6, int a7)
{
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  void *v10; // rax
  int v11; // r8d
  int v12; // r9d
  _BYTE v14[32]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v15[32]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+90h] [rbp-88h]
  __int64 v17; // [rsp+98h] [rbp-80h]

  v16 = a5; /*0x12f478*/
  v17 = a6; /*0x12f487*/
  v8 = operator new(0x2C8u); /*0x12f495*/
  FLAlertLayer_FLAlertLayer((__int64)v8); /*0x12f4a0*/
  *v8 = &ConfigureValuePopup::`vftable'; /*0x12f4ac*/
  v8[40] = &ConfigureValuePopup::`vftable'; /*0x12f4b6*/
  v8[41] = &ConfigureValuePopup::`vftable'; /*0x12f4c4*/
  v8[42] = &ConfigureValuePopup::`vftable'; /*0x12f4d2*/
  v8[43] = &ConfigureValuePopup::`vftable'; /*0x12f4e0*/
  v8[44] = &ConfigureValuePopup::`vftable'; /*0x12f4ee*/
  v8[51] = &ConfigureValuePopup::`vftable'; /*0x12f4fc*/
  v8[54] = &ConfigureValuePopup::`vftable'; /*0x12f50a*/
  v8[68] = &ConfigureValuePopup::`vftable'; /*0x12f518*/
  *((_DWORD *)v8 + 166) = 0; /*0x12f522*/
  *((_WORD *)v8 + 340) = 0; /*0x12f529*/
  v8[86] = 0; /*0x12f531*/
  v8[87] = 0; /*0x12f538*/
  v8[88] = 0; /*0x12f53f*/
  v9 = sub_3E4F0(v14, a6); /*0x12f55d*/
  v10 = (void *)sub_3E4F0(v15, a5); /*0x12f568*/
  if ( (unsigned __int8)sub_12F610((int)v8, a1, v11, v12, SLODWORD(a4), v10, v9, a7) ) /*0x12f598*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v8); /*0x12f5a4*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 8LL))(v8, 1); /*0x12f5b4*/
    v8 = 0; /*0x12f5b7*/
  }
  sub_3C310(a5); /*0x12f5bd*/
  sub_3C310(a6); /*0x12f5c6*/
  return v8; /*0x12f5ce*/
}

// [3/7] Address: 0x130060
// Method: ConfigureValuePopup::sliderChanged
__int64 __fastcall ConfigureValuePopup_sliderChanged(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a1 + 680) = 1; /*0x130069*/
  *(float *)(a1 + 668) = (float)((float)(*(float *)(a1 + 676) - *(float *)(a1 + 672)) * SliderThumb_getValue(a2)) /*0x130097*/
                       + *(float *)(a1 + 672);
  return sub_130120(a1); /*0x13009f*/
}

// [4/7] Address: 0x1300b0
// Method: ConfigureValuePopup::onArrow
__int64 __fastcall ConfigureValuePopup_onArrow(__int64 a1, __int64 a2)
{
  int v3; // eax
  float v4; // xmm0_4
  float v5; // xmm0_4

  *(_BYTE *)(a1 + 680) = 1; /*0x1300b6*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1300c6*/
  v4 = *(float *)(a1 + 668); /*0x1300c9*/
  if ( v3 ) /*0x1300d3*/
    v5 = v4 + 1.0; /*0x1300df*/
  else
    v5 = v4 - 1.0; /*0x1300d5*/
  *(float *)(a1 + 668) = fminf(*(float *)(a1 + 676), fmaxf(*(float *)(a1 + 672), v5)); /*0x130102*/
  return sub_130120(a1); /*0x13010a*/
}

// [5/7] Address: 0x130300
// Method: ConfigureValuePopup::textChanged
void __fastcall ConfigureValuePopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  const char *v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rdx
  char *v9; // rcx
  float v10; // xmm3_4
  __int64 v11; // rax
  __int64 v12; // r8
  const char *v13; // rcx
  float v14; // xmm6_4
  char *v15; // rcx
  cocos2d::CCString *v16; // rax
  char *String[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 137) ) /*0x130315*/
  {
    *(_BYTE *)(a1 + 136) = 1; /*0x130325*/
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL); /*0x130343*/
    if ( *(_DWORD *)(a1 + 120) == 1 ) /*0x130346*/
    {
      v4 = (*(__int64 (**)(void))(v3 + 8))(); /*0x13034c*/
      *(_OWORD *)String = 0; /*0x130355*/
      v5 = -1; /*0x13035a*/
      v18 = 0; /*0x130361*/
      do /*0x130373*/
        ++v5; /*0x130370*/
      while ( *(_BYTE *)(v4 + v5) ); /*0x130373*/
      sub_3C230(String); /*0x130382*/
      v6 = (const char *)String; /*0x13038d*/
      if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0x130392*/
        v6 = String[0]; /*0x130392*/
      v7 = atoi(v6); /*0x130398*/
      v8 = *((_QWORD *)&v18 + 1); /*0x13039e*/
      *(float *)(a1 + 124) = (float)v7; /*0x1303aa*/
      if ( v8 > 0xF ) /*0x1303b3*/
      {
        v9 = String[0]; /*0x1303b5*/
        if ( v8 + 1 >= 0x1000 ) /*0x1303c7*/
        {
          v9 = (char *)*((_QWORD *)String[0] - 1); /*0x1303c9*/
          if ( (unsigned __int64)(String[0] - v9 - 8) > 0x1F ) /*0x1303dc*/
            invoke_watson(0, 0, 0, 0, 0); /*0x1303f1*/
        }
        j_j_free(v9); /*0x1303f8*/
      }
      v10 = fminf(*(float *)(a1 + 132), fmaxf(*(float *)(a1 + 128), *(float *)(a1 + 124))); /*0x130418*/
    }
    else
    {
      v11 = (*(__int64 (**)(void))(v3 + 8))(); /*0x130421*/
      *(_OWORD *)String = 0; /*0x13042a*/
      v12 = -1; /*0x13042f*/
      v18 = 0; /*0x130436*/
      do /*0x130443*/
        ++v12; /*0x130440*/
      while ( *(_BYTE *)(v11 + v12) ); /*0x130443*/
      sub_3C230(String); /*0x130452*/
      v13 = (const char *)String; /*0x13045d*/
      if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0x130462*/
        v13 = String[0]; /*0x130462*/
      v14 = atof(v13); /*0x130476*/
      if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0x13047e*/
      {
        v15 = String[0]; /*0x130480*/
        if ( (unsigned __int64)(*((_QWORD *)&v18 + 1) + 1LL) >= 0x1000 ) /*0x130492*/
        {
          v15 = (char *)*((_QWORD *)String[0] - 1); /*0x130494*/
          if ( (unsigned __int64)(String[0] - v15 - 8) > 0x1F ) /*0x1304a7*/
            invoke_watson(0, 0, 0, 0, 0); /*0x1304bc*/
        }
        j_j_free(v15); /*0x1304c3*/
      }
      v16 = cocos2d::CCString::createWithFormat("%.02f", v14); /*0x1304d7*/
      v10 = cocos2d::CCString::floatValue(v16); /*0x1304e6*/
    }
    *(float *)(a1 + 124) = v10; /*0x1304f7*/
    if ( *(_QWORD *)(a1 + 160) ) /*0x1304fc*/
      sub_83840(*(_QWORD *)(a1 + 160)); /*0x13052e*/
  }
}

// [6/7] Address: 0x130550
// Method: ConfigureValuePopup::onClose
__int64 __fastcall ConfigureValuePopup_onClose(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rdx

  *(_QWORD *)(*(_QWORD *)(a1 + 696) + 608LL) = 0; /*0x130562*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 696) + 1032LL))(*(_QWORD *)(a1 + 696), 0); /*0x130577*/
  if ( *(_BYTE *)(a1 + 680) ) /*0x13057d*/
  {
    v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 688); /*0x130586*/
    if ( v2 ) /*0x130590*/
      (**v2)(v2, a1); /*0x1305a0*/
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x1305aa*/
  LOBYTE(v3) = 1; /*0x1305b3*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v3);
}

// [7/7] Address: 0x1305d0
// Method: ConfigureValuePopup::keyBackClicked
__int64 __fastcall ConfigureValuePopup_keyBackClicked(__int64 a1)
{
  return ConfigureValuePopup_onClose(a1 - 336);
}
