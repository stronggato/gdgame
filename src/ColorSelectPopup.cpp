#include <Geode/binding/ColorSelectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/19] Address: 0x124420
// Method: ColorSelectPopup::create
// Hidden C++ exception states: #wind=1
char *__fastcall ColorSelectPopup_create(__int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // r14

  v6 = (char *)operator new(0x500u); /*0x124445*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v6); /*0x124450*/
  cocos2d::extension::ColorPickerDelegate::ColorPickerDelegate((cocos2d::extension::ColorPickerDelegate *)(v6 + 1000)); /*0x12445c*/
  *(_QWORD *)v6 = &ColorSelectPopup::`vftable'; /*0x124469*/
  *((_QWORD *)v6 + 40) = &ColorSelectPopup::`vftable'; /*0x124473*/
  *((_QWORD *)v6 + 41) = &ColorSelectPopup::`vftable'; /*0x124481*/
  *((_QWORD *)v6 + 42) = &ColorSelectPopup::`vftable'; /*0x12448f*/
  *((_QWORD *)v6 + 43) = &ColorSelectPopup::`vftable'; /*0x12449d*/
  *((_QWORD *)v6 + 44) = &ColorSelectPopup::`vftable'; /*0x1244ab*/
  *((_QWORD *)v6 + 51) = &ColorSelectPopup::`vftable'; /*0x1244b9*/
  *((_QWORD *)v6 + 54) = &ColorSelectPopup::`vftable'; /*0x1244c7*/
  *((_QWORD *)v6 + 68) = &ColorSelectPopup::`vftable'; /*0x1244d5*/
  *((_QWORD *)v6 + 83) = &ColorSelectPopup::`vftable'; /*0x1244e3*/
  *((_QWORD *)v6 + 84) = &ColorSelectPopup::`vftable'; /*0x1244f1*/
  *((_QWORD *)v6 + 125) = &ColorSelectPopup::`vftable'; /*0x1244ff*/
  *((_QWORD *)v6 + 126) = &ColorSelectPopup::`vftable'; /*0x12450d*/
  *((_QWORD *)v6 + 127) = 0; /*0x124516*/
  v6[1024] = 0; /*0x12451d*/
  *((_QWORD *)v6 + 129) = 0; /*0x124524*/
  *((_QWORD *)v6 + 130) = 0; /*0x12452b*/
  *((_QWORD *)v6 + 131) = 0; /*0x124532*/
  *((_QWORD *)v6 + 135) = 0; /*0x124539*/
  *((_QWORD *)v6 + 136) = 0; /*0x124540*/
  *((_QWORD *)v6 + 138) = 0; /*0x124547*/
  *((_QWORD *)v6 + 139) = 0; /*0x12454e*/
  *((_DWORD *)v6 + 280) = 0; /*0x124555*/
  *((_DWORD *)v6 + 281) = 1065353216; /*0x12455c*/
  *((_QWORD *)v6 + 141) = 0; /*0x124567*/
  *((_QWORD *)v6 + 142) = 0; /*0x12456e*/
  *((_DWORD *)v6 + 286) = 0; /*0x124575*/
  *((_WORD *)v6 + 574) = 0; /*0x12457c*/
  *((_DWORD *)v6 + 288) = 0; /*0x124584*/
  v6[1156] = 0; /*0x12458b*/
  *((_DWORD *)v6 + 290) = 0; /*0x124592*/
  v6[1164] = 0; /*0x124599*/
  *(_OWORD *)(v6 + 1176) = unk_8F83F0; /*0x1245a7*/
  *((_QWORD *)v6 + 152) = 0; /*0x1245af*/
  v6[1240] = 0; /*0x1245b6*/
  if ( (unsigned __int8)ColorSelectPopup_init(v6, a1, a2, a3) ) /*0x1245c9*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x1245d5*/
    return v6; /*0x1245db*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x1245ef*/
    return 0; /*0x1245f2*/
  }
}

// [3/19] Address: 0x126e50
// Method: ColorSelectPopup::determineStartValues
bool __fastcall ColorSelectPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rdi
  char v4; // r15
  __int128 v5; // xmm0
  char v6; // r12
  float v7; // xmm7_4
  float v8; // xmm6_4
  char v9; // r13
  char v10; // si
  unsigned int v11; // r14d
  struct cocos2d::CCObject *v12; // rax
  struct cocos2d::CCObject *v13; // rdx
  int v14; // eax
  char v15; // cl
  int v16; // eax
  bool v17; // al
  __int16 v18; // ax
  char v19; // cl
  __m128 v20; // xmm2
  __m128i v21; // xmm2
  __m128 v22; // xmm1
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // edx
  bool v29; // al
  bool result; // al
  __m128 v31; // [rsp+20h] [rbp-A8h]
  float v32; // [rsp+3Ch] [rbp-8Ch]
  char v33; // [rsp+D0h] [rbp+8h]

  SetupTriggerPopup_determineStartValues(a1); /*0x126e5d*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x126e62*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x126e7c*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x126e7f*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x126e87*/
  }
  if ( v3 && cocos2d::CCArray::count(v3) )
  {
    v4 = 1; /*0x126ef2*/
    v5 = unk_8F83F0; /*0x126ef5*/
    *(_WORD *)(a1 + 1096) = -1; /*0x126efe*/
    v6 = 0; /*0x126f18*/
    *(_BYTE *)(a1 + 1098) = -1; /*0x126f1b*/
    v7 = -1.0; /*0x126f21*/
    *(_DWORD *)(a1 + 1116) = -1; /*0x126f27*/
    v33 = 0; /*0x126f31*/
    v8 = -1.0; /*0x126f38*/
    *(_DWORD *)(a1 + 1120) = 1; /*0x126f3c*/
    v9 = 0; /*0x126f46*/
    *(_DWORD *)(a1 + 1124) = 1065353216; /*0x126f49*/
    v10 = 1; /*0x126f53*/
    *(_BYTE *)(a1 + 1164) = 1; /*0x126f57*/
    v11 = 0; /*0x126f5e*/
    *(_WORD *)(a1 + 1144) = 257; /*0x126f61*/
    *(_BYTE *)(a1 + 1146) = 1; /*0x126f6a*/
    *(_DWORD *)(a1 + 1152) = -1; /*0x126f71*/
    *(_DWORD *)(a1 + 1160) = -1; /*0x126f7b*/
    *(_OWORD *)(a1 + 1176) = v5; /*0x126f85*/
    if ( cocos2d::CCArray::count(v3) )
    {
      do
      {
        v12 = cocos2d::CCArray::objectAtIndex(v3, v11); /*0x126fb9*/
        v13 = v12; /*0x126fbf*/
        if ( !*((_BYTE *)v12 + 1648) ) /*0x126fc2*/
          *(_BYTE *)(a1 + 1164) = 0; /*0x126fcb*/
        if ( !*((_BYTE *)v12 + 1652) ) /*0x126fd2*/
          *(_BYTE *)(a1 + 1146) = 0; /*0x126fdb*/
        if ( !v6 )
        {
          v14 = *(_DWORD *)(a1 + 1116); /*0x126fe7*/
          v15 = *((_BYTE *)v13 + 1501); /*0x126fed*/
          if ( v14 == -1 )
          {
            if ( v15 )
              *(_DWORD *)(a1 + 1116) = 1; /*0x126ffd*/
            else
              *(_DWORD *)(a1 + 1116) = *((_BYTE *)v13 + 1502) != 0 ? 2 : 0;
          }
          else if ( v15 && v14 != 1 || *((_BYTE *)v13 + 1502) && v14 != 2 ) /*0x127034*/
          {
            v6 = 1; /*0x127036*/
            *(_DWORD *)(a1 + 1116) = 0; /*0x127039*/
          }
        }
        if ( *((_DWORD *)v13 + 259) == 29 ) /*0x127046*/
        {
          if ( *(_BYTE *)(a1 + 1145) ) /*0x127051*/
            *(_BYTE *)(a1 + 1145) = *((_BYTE *)v13 + 1500); /*0x127061*/
        }
        else
        {
          *(_BYTE *)(a1 + 1144) = 0; /*0x127048*/
        }
        if ( *(_DWORD *)(a1 + 1120) == 1 ) /*0x12706e*/
          *(_DWORD *)(a1 + 1120) = *((unsigned __int8 *)v13 + 1503); /*0x127077*/
        if ( !*(_BYTE *)(a1 + 1147) ) /*0x12707d*/
        {
          v16 = *((_DWORD *)v13 + 259); /*0x127086*/
          v17 = v16 == 744 || ((v16 - 899) & 0xFFFFFFEF) == 0; /*0x1270a3*/
          *(_BYTE *)(a1 + 1147) = v17; /*0x1270a5*/
        }
        if ( !*(_BYTE *)(a1 + 1149) ) /*0x1270ab*/
          *(_BYTE *)(a1 + 1149) = *((_DWORD *)v13 + 259) == 899; /*0x1270c1*/
        if ( v7 == -1.0 ) /*0x1270d5*/
        {
          v7 = *((float *)v13 + 367); /*0x1270d7*/
        }
        else if ( v7 != *((float *)v13 + 367) ) /*0x1270e1*/
        {
          v7 = -2.0; /*0x1270e3*/
        }
        if ( v8 == -1.0 ) /*0x1270f5*/
        {
          v8 = *((float *)v13 + 368); /*0x1270f7*/
        }
        else if ( v8 != *((float *)v13 + 368) ) /*0x127101*/
        {
          v8 = -2.0; /*0x127103*/
        }
        if ( !v33 ) /*0x12710f*/
        {
          v18 = *(_WORD *)((char *)v13 + 1465); /*0x127111*/
          v19 = *((_BYTE *)v13 + 1467); /*0x127118*/
          if ( v4 ) /*0x127122*/
          {
            *(_WORD *)(a1 + 1096) = v18; /*0x127124*/
            *(_BYTE *)(a1 + 1098) = v19; /*0x12712b*/
          }
          else if ( *(_WORD *)(a1 + 1096) != v18 || *(_BYTE *)(a1 + 1098) != v19 ) /*0x127159*/
          {
            *(_WORD *)(a1 + 1096) = -1; /*0x127162*/
            *(_BYTE *)(a1 + 1098) = -1; /*0x127170*/
            v33 = 1; /*0x127176*/
          }
          v4 = 0; /*0x12717e*/
        }
        if ( !v9 ) /*0x127184*/
        {
          if ( v10 ) /*0x12718d*/
          {
            *(_OWORD *)(a1 + 1176) = *(_OWORD *)((char *)v13 + 1628); /*0x127196*/
          }
          else
          {
            v20 = *(__m128 *)((char *)v13 + 1628); /*0x1271a2*/
            if ( *(float *)(a1 + 1176) != v20.m128_f32[0] /*0x127207*/
              || *(float *)(a1 + 1180) != _mm_shuffle_ps(v20, v20, 85).m128_f32[0]
              || *(float *)(a1 + 1184) != _mm_shuffle_ps(v20, v20, 170).m128_f32[0]
              || (v21 = _mm_srli_si128((__m128i)v20, 8), *(_BYTE *)(a1 + 1188) != v21.m128i_i8[4])
              || *(_BYTE *)(a1 + 1189) != v21.m128i_i8[5] )
            {
              v31.m128_i32[0] = -1165815185; /*0x127209*/
              v9 = 1; /*0x127211*/
              *(unsigned __int64 *)((char *)v31.m128_u64 + 4) = 0; /*0x127214*/
              LOWORD(v32) = 0; /*0x12721e*/
              v22 = _mm_shuffle_ps(v31, v31, 147); /*0x127229*/
              v22.m128_f32[0] = v32; /*0x12722d*/
              v31 = _mm_shuffle_ps(v22, v22, 57); /*0x127235*/
              *(__m128 *)(a1 + 1176) = v31; /*0x12723a*/
            }
          }
          v10 = 0; /*0x127241*/
        }
        v23 = *(_DWORD *)(a1 + 1152); /*0x127244*/
        v24 = *((_DWORD *)v13 + 258); /*0x12724a*/
        if ( v23 == -1 ) /*0x127253*/
        {
          *(_DWORD *)(a1 + 1152) = v24; /*0x127255*/
        }
        else if ( v23 != v24 ) /*0x12725f*/
        {
          *(_DWORD *)(a1 + 1152) = 0; /*0x127261*/
        }
        v25 = *(_DWORD *)(a1 + 1160); /*0x127267*/
        v26 = *((_DWORD *)v13 + 411); /*0x12726d*/
        if ( v25 == -1 ) /*0x127276*/
        {
          *(_DWORD *)(a1 + 1160) = v26; /*0x127278*/
        }
        else if ( v25 != v26 ) /*0x127282*/
        {
          *(_DWORD *)(a1 + 1160) = 0; /*0x127284*/
        }
        ++v11; /*0x12728d*/
      }
      while ( v11 < cocos2d::CCArray::count(v3) );
      if ( v7 >= 0.0 ) /*0x1272a9*/
        *(float *)(a1 + 1112) = v7; /*0x1272ab*/
      if ( v8 >= 0.0 ) /*0x1272bd*/
        *(float *)(a1 + 1124) = v8; /*0x1272c3*/
    }
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 1128); /*0x1272d0*/
    if ( v27 ) /*0x1272da*/
    {
      *(_BYTE *)(a1 + 1144) = 0; /*0x1272e0*/
      *(_DWORD *)(a1 + 1116) = *(_DWORD *)(v27 + 88); /*0x1272ea*/
      *(_DWORD *)(a1 + 1120) = *(unsigned __int8 *)(v27 + 84); /*0x1272f4*/
      *(_DWORD *)(a1 + 1124) = *(_DWORD *)(v27 + 96); /*0x1272fd*/
      v28 = *(_DWORD *)(v27 + 92); /*0x127303*/
      v29 = v28 == 1003 || v28 == 1002 || (unsigned int)(v28 - 1) <= 0x3E6; /*0x127324*/
      *(_BYTE *)(a1 + 1147) = v29; /*0x127326*/
      *(_BYTE *)(a1 + 1148) = v28 == 0; /*0x127333*/
      *(_WORD *)(a1 + 1096) = *(_WORD *)(v27 + 72); /*0x12733d*/
      *(_BYTE *)(a1 + 1098) = *(_BYTE *)(v27 + 74); /*0x127348*/
      *(_DWORD *)(a1 + 1112) = 0; /*0x12734e*/
      *(_DWORD *)(a1 + 1160) = *(_DWORD *)(v27 + 120); /*0x127357*/
      *(_BYTE *)(a1 + 1164) = *(_BYTE *)(v27 + 125); /*0x127361*/
      *(_OWORD *)(a1 + 1176) = *(_OWORD *)(v27 + 104); /*0x12736b*/
    }
  }
  result = *(_DWORD *)(a1 + 1160) != 0; /*0x127384*/
  *(_BYTE *)(a1 + 1240) = result; /*0x1273bf*/
  *(_BYTE *)(a1 + 1147) = 1; /*0x1273c5*/
  return result; /*0x127379*/
}

// [4/19] Address: 0x127470
// Method: ColorSelectPopup::onToggleTintMode
char __fastcall ColorSelectPopup_onToggleTintMode(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // edi
  unsigned int v4; // eax
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // rcx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx

  v1 = *(_DWORD *)(a1 + 1120); /*0x12747a*/
  v2 = 0; /*0x127480*/
  v4 = v1 != 1; /*0x12748a*/
  *(_DWORD *)(a1 + 1120) = v4; /*0x12748d*/
  v5 = *(_QWORD *)(a1 + 680); /*0x127493*/
  if ( v5 ) /*0x12749d*/
  {
    *(_BYTE *)(v5 + 1503) = v1 != 1; /*0x1274a5*/
    LOBYTE(v4) = v1 != 1; /*0x1274a2*/
  }
  else
  {
    v6 = *(cocos2d::CCArray **)(a1 + 688); /*0x1274b6*/
    if ( v6 ) /*0x1274c0*/
    {
      v4 = cocos2d::CCArray::count(v6); /*0x1274c2*/
      if ( v4 ) /*0x1274ca*/
      {
        do /*0x127500*/
        {
          v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v2++); /*0x1274d9*/
          *((_BYTE *)v7 + 1503) = *(_DWORD *)(a1 + 1120) != 0; /*0x1274eb*/
          v4 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x1274f8*/
        }
        while ( v2 < v4 ); /*0x127500*/
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 1128); /*0x12750d*/
      if ( v8 ) /*0x127517*/
      {
        *(_BYTE *)(v8 + 84) = v1 != 1; /*0x12751f*/
        LOBYTE(v4) = v1 != 1; /*0x12751c*/
      }
    }
  }
  return v4; /*0x1274ab*/
}

// [5/19] Address: 0x127660
// Method: ColorSelectPopup::onPlayerColor1
int __fastcall ColorSelectPopup_onPlayerColor1(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  BOOL v5; // edx
  __int64 v6; // rax
  cocos2d::CCArray *v7; // rcx
  struct cocos2d::CCObject *v8; // rax

  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 1064), 0); /*0x127676*/
  v2 = *(_DWORD *)(a1 + 1116); /*0x12767b*/
  v3 = 0; /*0x127681*/
  v4 = *(_QWORD *)(a1 + 680); /*0x127683*/
  v5 = v2 != 1; /*0x12768f*/
  *(_DWORD *)(a1 + 1116) = v5; /*0x127692*/
  if ( v4 ) /*0x12769b*/
  {
    *(_BYTE *)(v4 + 1501) = v2 != 1; /*0x1276a3*/
    v6 = *(_QWORD *)(a1 + 680); /*0x1276a9*/
    *(_BYTE *)(v6 + 1502) = 0; /*0x1276b0*/
  }
  else
  {
    v7 = *(cocos2d::CCArray **)(a1 + 688); /*0x1276c2*/
    if ( v7 ) /*0x1276cc*/
    {
      LODWORD(v6) = cocos2d::CCArray::count(v7); /*0x1276ce*/
      if ( (_DWORD)v6 ) /*0x1276d6*/
      {
        do /*0x127717*/
        {
          v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v3++); /*0x1276e9*/
          *((_BYTE *)v8 + 1501) = *(_DWORD *)(a1 + 1116) == 1; /*0x1276fb*/
          *((_BYTE *)v8 + 1502) = 0; /*0x127701*/
          LODWORD(v6) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x12770f*/
        }
        while ( v3 < (unsigned int)v6 ); /*0x127717*/
      }
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 1128); /*0x127724*/
      if ( v6 ) /*0x12772e*/
        *(_DWORD *)(v6 + 88) = v5; /*0x127730*/
    }
  }
  return v6; /*0x1276b7*/
}

// [6/19] Address: 0x127740
// Method: ColorSelectPopup::onPlayerColor2
int __fastcall ColorSelectPopup_onPlayerColor2(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  cocos2d::CCArray *v7; // rcx
  struct cocos2d::CCObject *v8; // rax

  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 1056), 0); /*0x127756*/
  v2 = *(_DWORD *)(a1 + 1116); /*0x12775b*/
  v3 = 0; /*0x127766*/
  v4 = 0; /*0x12776a*/
  if ( v2 != 2 ) /*0x12776c*/
    v4 = 2; /*0x12776c*/
  v5 = *(_QWORD *)(a1 + 680); /*0x12776f*/
  *(_DWORD *)(a1 + 1116) = v4; /*0x127776*/
  if ( v5 ) /*0x12777f*/
  {
    *(_BYTE *)(v5 + 1502) = v2 != 2; /*0x127787*/
    v6 = *(_QWORD *)(a1 + 680); /*0x12778d*/
    *(_BYTE *)(v6 + 1501) = 0; /*0x127794*/
  }
  else
  {
    v7 = *(cocos2d::CCArray **)(a1 + 688); /*0x1277a6*/
    if ( v7 ) /*0x1277b0*/
    {
      LODWORD(v6) = cocos2d::CCArray::count(v7); /*0x1277b2*/
      if ( (_DWORD)v6 ) /*0x1277ba*/
      {
        do /*0x1277f7*/
        {
          v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v3++); /*0x1277c9*/
          *((_BYTE *)v8 + 1502) = *(_DWORD *)(a1 + 1116) == 2; /*0x1277db*/
          *((_BYTE *)v8 + 1501) = 0; /*0x1277e1*/
          LODWORD(v6) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x1277ef*/
        }
        while ( v3 < (unsigned int)v6 ); /*0x1277f7*/
      }
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 1128); /*0x127804*/
      if ( v6 ) /*0x12780e*/
        *(_DWORD *)(v6 + 88) = v4; /*0x127810*/
    }
  }
  return v6; /*0x12779b*/
}

// [7/19] Address: 0x127920
// Method: ColorSelectPopup::onDefault
// Hidden C++ exception states: #wind=4
void __fastcall ColorSelectPopup_onDefault(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  char v19[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h]
  __int64 v21; // [rsp+48h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-18h]
  __int64 v24; // [rsp+68h] [rbp-10h]
  __int128 *v25; // [rsp+90h] [rbp+18h] BYREF

  v4 = qword_905FD0; /*0x127937*/
  if ( !qword_905FD0 ) /*0x127941*/
  {
    v25 = (__int128 *)operator new(0x6E8u); /*0x12794d*/
    qword_905FD0 = sub_2723A0(v25); /*0x12795e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x12796f*/
    v4 = qword_905FD0; /*0x127971*/
  }
  v5 = *(_QWORD *)(v4 + 568); /*0x127978*/
  if ( v5 ) /*0x127982*/
  {
    v6 = *(_QWORD *)(a1 + 680); /*0x127988*/
    if ( v6 ) /*0x127992*/
    {
      v7 = sub_3624A0(*(_QWORD *)(*(_QWORD *)(v5 + 3592) + 320LL), *(unsigned int *)(v6 + 1032)); /*0x1279ac*/
      v8 = v7; /*0x1279b1*/
      if ( v7 ) /*0x1279b7*/
      {
        LOWORD(v25) = *(_WORD *)(v7 + 72); /*0x1279c1*/
        BYTE2(v25) = *(_BYTE *)(v7 + 74); /*0x1279cd*/
        (*(void (__fastcall **)(_QWORD, __int128 **))(**(_QWORD **)(a1 + 1016) + 1128LL))(*(_QWORD *)(a1 + 1016), &v25); /*0x1279ed*/
        if ( *(_DWORD *)(a1 + 1120) != *(unsigned __int8 *)(v8 + 84) ) /*0x1279fa*/
          ColorSelectPopup_onToggleTintMode(a1); /*0x127a01*/
        *(_DWORD *)(a1 + 1124) = *(_DWORD *)(v8 + 96); /*0x127a09*/
        ColorSelectPopup_updateOpacity(a1); /*0x127a12*/
        GJBaseGameLayer_resetGradientLayers(a1); /*0x127a1a*/
        v9 = *(_QWORD *)(a1 + 1048); /*0x127a1f*/
        if ( v9 ) /*0x127a29*/
          sub_83840(v9); /*0x127a37*/
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 688); /*0x127a41*/
      if ( v10 ) /*0x127a4b*/
      {
        v11 = *(unsigned int **)(v10 + 56); /*0x127a51*/
        v12 = *v11; /*0x127a55*/
        if ( (_DWORD)v12 ) /*0x127a59*/
        {
          v13 = (__int64 *)*((_QWORD *)v11 + 2); /*0x127a5f*/
          v14 = &v13[v12 - 1]; /*0x127a67*/
          if ( v13 <= v14 ) /*0x127a6e*/
          {
            while ( 1 ) /*0x127a74*/
            {
              v15 = *v13; /*0x127a74*/
              if ( !*v13 ) /*0x127a74*/
                break; /*0x127a74*/
              if ( !v4 ) /*0x127a83*/
              {
                v25 = (__int128 *)operator new(0x6E8u); /*0x127a8f*/
                qword_905FD0 = sub_2723A0(v25); /*0x127aa0*/
                (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x127ab1*/
                v4 = qword_905FD0; /*0x127ab3*/
              }
              v16 = sub_3624A0( /*0x127ad5*/
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 568) + 3592LL) + 320LL),
                      *(unsigned int *)(v15 + 1032));
              if ( v16 ) /*0x127add*/
              {
                *(_WORD *)(v15 + 1465) = *(_WORD *)(v16 + 72); /*0x127ae3*/
                *(_BYTE *)(v15 + 1467) = *(_BYTE *)(v16 + 74); /*0x127aee*/
                *(_BYTE *)(v15 + 1503) = *(_BYTE *)(v16 + 84); /*0x127af8*/
                *(_DWORD *)(v15 + 1472) = *(_DWORD *)(v16 + 96); /*0x127b01*/
                *(_DWORD *)(a1 + 1124) = *(_DWORD *)(v16 + 96); /*0x127b0a*/
              }
              if ( ++v13 > v14 ) /*0x127b17*/
                break; /*0x127b17*/
              v4 = qword_905FD0; /*0x127b19*/
            }
          }
        }
        v25 = &v22; /*0x127b2a*/
        v22 = 0; /*0x127b35*/
        v23 = 0; /*0x127b3a*/
        v24 = 15; /*0x127b43*/
        LOBYTE(v22) = 0; /*0x127b4c*/
        v20 = 15; /*0x127b51*/
        v21 = 15; /*0x127b5a*/
        strcpy(v19, "Defaults Loaded"); /*0x127b6b*/
        v17 = *(_QWORD *)a1; /*0x127b97*/
        v18 = sub_3A4CA0(v19, v4, a3, 150, &v22); /*0x127bbf*/
        (*(void (__fastcall **)(__int64, __int64, __int64))(v17 + 456))(a1, v18, 100); /*0x127bd0*/
      }
    }
  }
}

// [8/19] Address: 0x127bf0
// Method: ColorSelectPopup::sliderChanged
void __fastcall ColorSelectPopup_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm0_4
  cocos2d::CCString *v5; // rax
  float v6; // xmm0_4

  Value = SliderThumb_getValue(a2); /*0x127c08*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x127c1c*/
  {
    *(float *)(a1 + 1112) = Value * 10.0; /*0x127c29*/
    sub_127CE0(a1); /*0x127c31*/
    sub_127E20(a1); /*0x127c48*/
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x127c59*/
  {
    v5 = cocos2d::CCString::createWithFormat("%.02f", Value); /*0x127c6e*/
    v6 = cocos2d::CCString::floatValue(v5); /*0x127c77*/
    *(float *)(a1 + 1124) = v6; /*0x127c88*/
    if ( v6 > 0.02 ) /*0x127c90*/
    {
      if ( v6 >= 0.98000002 ) /*0x127ca5*/
        *(_DWORD *)(a1 + 1124) = 1065353216; /*0x127ca7*/
    }
    else
    {
      *(_DWORD *)(a1 + 1124) = 0; /*0x127c92*/
    }
    ColorSelectPopup_updateOpacity(a1); /*0x127cb4*/
    GJBaseGameLayer_resetGradientLayers(a1); /*0x127cbc*/
  }
}

// [9/19] Address: 0x127d70
// Method: ColorSelectPopup::updateOpacity
void __fastcall ColorSelectPopup_updateOpacity(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rcx
  unsigned int v4; // edi
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 680); /*0x127d79*/
  if ( v2 ) /*0x127d83*/
  {
    *(_DWORD *)(v2 + 1472) = *(_DWORD *)(a1 + 1124); /*0x127d8b*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x127d97*/
    if ( v3 ) /*0x127da1*/
    {
      v4 = 0; /*0x127da8*/
      if ( cocos2d::CCArray::count(v3) ) /*0x127daa*/
      {
        do /*0x127dec*/
        {
          v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v4++); /*0x127dc9*/
          *((_DWORD *)v5 + 368) = *(_DWORD *)(a1 + 1124); /*0x127dd7*/
        }
        while ( v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x127dec*/
      }
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 1128); /*0x127df9*/
      if ( v6 ) /*0x127e03*/
        *(_DWORD *)(v6 + 96) = *(_DWORD *)(a1 + 1124); /*0x127e0b*/
    }
  }
}

// [10/19] Address: 0x127f50
// Method: ColorSelectPopup::closeColorSelect
// Hidden C++ exception states: #wind=1
__int64 __fastcall ColorSelectPopup_closeColorSelect(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int *v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 *i; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  void *v18; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 1136); /*0x127f62*/
  v3 = 0; /*0x127f69*/
  if ( v2 ) /*0x127f6e*/
  {
    *(_QWORD *)(v2 + 608) = 0; /*0x127f70*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1136) + 1032LL))(*(_QWORD *)(a1 + 1136), 0); /*0x127f83*/
  }
  v4 = *(_QWORD *)(a1 + 1216); /*0x127f89*/
  if ( v4 ) /*0x127f93*/
  {
    *(_QWORD *)(v4 + 608) = 0; /*0x127f95*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1216) + 1032LL))(*(_QWORD *)(a1 + 1216), 0); /*0x127fa8*/
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 1208) + 608LL) = 0; /*0x127fb5*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1208) + 1032LL))(*(_QWORD *)(a1 + 1208), 0); /*0x127fc8*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1248) + 608LL) = 0; /*0x127fd5*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1248) + 1032LL))(*(_QWORD *)(a1 + 1248), 0); /*0x127fe8*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1256) + 608LL) = 0; /*0x127ff5*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1256) + 1032LL))(*(_QWORD *)(a1 + 1256), 0); /*0x128008*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1264) + 608LL) = 0; /*0x128015*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1264) + 1032LL))(*(_QWORD *)(a1 + 1264), 0); /*0x128028*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 608LL) = 0; /*0x128035*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1272) + 1032LL))(*(_QWORD *)(a1 + 1272), 0); /*0x128048*/
  v5 = *(_QWORD *)(a1 + 1168); /*0x12804e*/
  if ( !*(_BYTE *)(v5 + 392) ) /*0x128055*/
  {
    *(_OWORD *)(a1 + 1176) = *(_OWORD *)(v5 + 376); /*0x128069*/
    v6 = *(_QWORD *)(a1 + 680); /*0x128070*/
    if ( v6 ) /*0x12807a*/
    {
      *(_OWORD *)(v6 + 1628) = *(_OWORD *)(v5 + 376); /*0x128083*/
    }
    else if ( *(_QWORD *)(a1 + 688) ) /*0x12808c*/
    {
      if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ) /*0x12809b*/
      {
        do /*0x1280de*/
          *(_OWORD *)((char *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v3++) + 1628) = *(_OWORD *)(a1 + 1176); /*0x1280c6*/
        while ( v3 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x1280de*/
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 1128); /*0x1280e2*/
      if ( v7 ) /*0x1280ec*/
        *(_OWORD *)(v7 + 104) = *(_OWORD *)(v5 + 376); /*0x1280f5*/
    }
  }
  if ( !qword_905FD0 ) /*0x128101*/
  {
    v18 = operator new(0x6E8u); /*0x12810d*/
    qword_905FD0 = sub_2723A0(v18); /*0x12811b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x12812c*/
  }
  v8 = *(_QWORD *)(a1 + 688); /*0x12812e*/
  v9 = *(_QWORD *)(a1 + 680); /*0x128135*/
  if ( v9 ) /*0x12813f*/
  {
    if ( *(_BYTE *)(v9 + 1263) ) /*0x128141*/
      cocos2d::CCPoint::operator=(v9 + 1816, &dword_904F10); /*0x128158*/
  }
  else if ( v8 ) /*0x128163*/
  {
    v10 = *(unsigned int **)(v8 + 56); /*0x128165*/
    v11 = *v10; /*0x128169*/
    if ( (_DWORD)v11 ) /*0x12816d*/
    {
      v12 = (__int64 *)*((_QWORD *)v10 + 2); /*0x12816f*/
      for ( i = &v12[v11 - 1]; v12 <= i; ++v12 ) /*0x12817e*/
      {
        v14 = *v12; /*0x128180*/
        if ( !*v12 ) /*0x128180*/
          break; /*0x128186*/
        if ( *(_BYTE *)(v14 + 1263) ) /*0x128188*/
          cocos2d::CCPoint::operator=(v14 + 1816, &dword_904F10); /*0x12819f*/
      }
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x1281b6*/
  v16 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 1104); /*0x1281bc*/
  if ( v16 ) /*0x1281c6*/
    (**v16)(v16, a1); /*0x1281ce*/
  LOBYTE(v15) = 1; /*0x1281d3*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v15);
}

// [11/19] Address: 0x1281f0
// Method: ColorSelectPopup::keyBackClicked
__int64 __fastcall ColorSelectPopup_keyBackClicked(__int64 a1)
{
  return ColorSelectPopup_closeColorSelect(a1 - 336);
}

// [12/19] Address: 0x128200
// Method: ColorSelectPopup::colorValueChanged
void __fastcall ColorSelectPopup_colorValueChanged(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rcx
  unsigned int v6; // edi
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx

  v2 = *(_QWORD *)(a1 + 80); /*0x12820d*/
  if ( v2 ) /*0x128214*/
  {
    v3 = *(_QWORD *)(a1 + 16); /*0x12821a*/
    *(_WORD *)(a1 + 96) = *(_WORD *)(v3 + 472); /*0x128236*/
    *(_BYTE *)(a1 + 98) = *(_BYTE *)(v3 + 474); /*0x128245*/
    (**(void (__fastcall ***)(__int64, __int64))(v2 + 320))(v2 + 320, a1 + 96); /*0x12824b*/
    (**(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 88) + 320LL))(*(_QWORD *)(a1 + 88) + 320LL, a1 + 72); /*0x12825f*/
    if ( !*(_BYTE *)(a1 + 156) ) /*0x128261*/
    {
      v4 = *(_QWORD *)(a1 - 320); /*0x12826e*/
      if ( v4 ) /*0x128278*/
      {
        *(_WORD *)(v4 + 1465) = *(_WORD *)(a1 + 96); /*0x12827e*/
        *(_BYTE *)(v4 + 1467) = *(_BYTE *)(a1 + 98); /*0x128289*/
      }
      else
      {
        v5 = *(cocos2d::CCArray **)(a1 - 312); /*0x128291*/
        if ( v5 ) /*0x12829b*/
        {
          v6 = 0; /*0x12829d*/
          if ( cocos2d::CCArray::count(v5) ) /*0x12829f*/
          {
            do /*0x1282e5*/
            {
              v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 - 312), v6++); /*0x1282b9*/
              *(_WORD *)((char *)v7 + 1465) = *(_WORD *)(a1 + 96); /*0x1282c5*/
              *((_BYTE *)v7 + 1467) = *(_BYTE *)(a1 + 98); /*0x1282d0*/
            }
            while ( v6 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 - 312)) ); /*0x1282e5*/
          }
        }
        else
        {
          v8 = *(_QWORD *)(a1 + 128); /*0x1282e9*/
          if ( v8 ) /*0x1282f3*/
          {
            *(_WORD *)(v8 + 72) = *(_WORD *)(a1 + 96); /*0x1282f9*/
            *(_BYTE *)(v8 + 74) = *(_BYTE *)(a1 + 98); /*0x128301*/
          }
        }
      }
    }
    sub_128330(a1 - 1000); /*0x12830b*/
  }
}

// [13/19] Address: 0x129140
// Method: ColorSelectPopup::colorToHex
// Hidden C++ exception states: #wind=1
__int128 *__fastcall ColorSelectPopup_colorToHex(__int128 *Src, unsigned __int8 *a2)
{
  int v3; // r13d
  __int64 v4; // rcx
  unsigned __int8 *v5; // r8
  unsigned __int8 *v6; // r9
  unsigned __int8 *v7; // rax
  int v8; // eax
  __int8 v9; // r12
  size_t v10; // r13
  __int128 *v11; // r15
  size_t v12; // r14
  unsigned __int64 v13; // rdi
  __int8 *v14; // rsi
  unsigned __int64 v15; // rdx
  __int128 *v16; // rcx
  unsigned __int64 v17; // rax
  void *v18; // rcx
  size_t v19; // r15
  __int128 *v20; // r12
  size_t v21; // r14
  unsigned __int64 v22; // rdi
  __int128 *v23; // rsi
  unsigned __int64 v24; // rdx
  __int128 *v25; // rcx
  unsigned __int64 v26; // rax
  char *v27; // rcx
  size_t v28; // r15
  __int128 *v29; // r12
  size_t v30; // r14
  unsigned __int64 v31; // rdi
  __int128 *v32; // rsi
  unsigned __int64 v33; // rdx
  __int128 *v34; // rcx
  bool v35; // cf
  char *v36; // rax
  int v38; // [rsp+30h] [rbp-89h]
  int v39; // [rsp+34h] [rbp-85h]
  int v40; // [rsp+38h] [rbp-81h]
  unsigned int v41; // [rsp+3Ch] [rbp-7Dh]
  unsigned __int8 *v42; // [rsp+40h] [rbp-79h]
  unsigned __int8 *v43; // [rsp+48h] [rbp-71h]
  unsigned __int8 *i; // [rsp+50h] [rbp-69h]
  __m128i si128; // [rsp+60h] [rbp-59h]
  __int128 v46; // [rsp+70h] [rbp-49h] BYREF
  __int128 v47; // [rsp+80h] [rbp-39h]
  __int128 v48; // [rsp+90h] [rbp-29h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-19h]
  __int128 v50; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v51; // [rsp+C0h] [rbp+7h]

  v42 = a2; /*0x12916f*/
  *Src = 0; /*0x129183*/
  *((_QWORD *)Src + 2) = 0; /*0x129186*/
  *((_QWORD *)Src + 3) = 15; /*0x12918a*/
  *(_BYTE *)Src = 0; /*0x129192*/
  v3 = 1; /*0x129194*/
  v38 = 1; /*0x12919a*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_831630); /*0x1291a7*/
  v4 = 0; /*0x1291ac*/
  v40 = 0; /*0x1291ae*/
  v5 = a2 + 1; /*0x1291b2*/
  v43 = a2 + 1; /*0x1291b6*/
  v6 = a2 + 2; /*0x1291ba*/
  for ( i = a2 + 2; ; v6 = i ) /*0x1291be*/
  {
    if ( (_DWORD)v4 ) /*0x1291d4*/
    {
      if ( (_DWORD)v4 == 1 ) /*0x1291d9*/
        v7 = v5; /*0x1291e0*/
      else
        v7 = a2; /*0x1291db*/
    }
    else
    {
      v7 = v6; /*0x1291e5*/
    }
    v8 = *v7; /*0x1291e8*/
    v41 = v8; /*0x1291eb*/
    if ( v8 ) /*0x1291f0*/
    {
      v39 = v8; /*0x1291f6*/
      do /*0x12936f*/
      {
        v4 = v8 & 0xF; /*0x12920e*/
        v9 = si128.m128i_i8[v4]; /*0x129211*/
        v10 = *((_QWORD *)Src + 2); /*0x129217*/
        if ( v10 == 0x7FFFFFFFFFFFFFFFLL ) /*0x12921e*/
          goto LABEL_77; /*0x12921e*/
        v11 = Src; /*0x129224*/
        if ( *((_QWORD *)Src + 3) > 0xFu ) /*0x12922c*/
          v11 = *(__int128 **)Src; /*0x12922e*/
        v46 = 0; /*0x129234*/
        v12 = v10 + 1; /*0x129238*/
        v13 = 15; /*0x12923c*/
        v14 = (__int8 *)&v46; /*0x129241*/
        if ( v10 + 1 > 0xF ) /*0x129248*/
        {
          v13 = v12 | 0xF; /*0x12924d*/
          if ( (v12 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x129254*/
          {
            if ( v13 < 0x16 ) /*0x12925f*/
              v13 = 22; /*0x12925f*/
          }
          else
          {
            v13 = 0x7FFFFFFFFFFFFFFFLL; /*0x129256*/
          }
          v14 = (__int8 *)sub_3C460(v13 + 1); /*0x12926c*/
          *(_QWORD *)&v46 = v14; /*0x12926f*/
        }
        *(_QWORD *)&v47 = v10 + 1; /*0x129273*/
        *((_QWORD *)&v47 + 1) = v13; /*0x129277*/
        *v14 = v9; /*0x12927b*/
        memcpy(v14 + 1, v11, v10); /*0x129288*/
        v14[v12] = 0; /*0x12928d*/
        v3 = v38 | 2; /*0x129297*/
        v38 |= 2u; /*0x12929b*/
        if ( Src == &v46 ) /*0x1292a7*/
        {
          v17 = *((_QWORD *)&v47 + 1); /*0x129310*/
        }
        else
        {
          v15 = *((_QWORD *)Src + 3); /*0x1292a9*/
          if ( v15 > 0xF ) /*0x1292b1*/
          {
            v16 = *(__int128 **)Src; /*0x1292b6*/
            if ( v15 + 1 >= 0x1000 ) /*0x1292c0*/
            {
              if ( (unsigned __int64)v16 - *((_QWORD *)v16 - 1) - 8 > 0x1F ) /*0x1292d5*/
                goto LABEL_75; /*0x1292d5*/
              v16 = (__int128 *)*((_QWORD *)v16 - 1); /*0x1292db*/
            }
            j_j_free(v16); /*0x1292de*/
          }
          *((_QWORD *)Src + 2) = 0; /*0x1292e3*/
          *((_QWORD *)Src + 3) = 15; /*0x1292eb*/
          *(_BYTE *)Src = 0; /*0x1292f3*/
          *Src = v46; /*0x1292fa*/
          Src[1] = v47; /*0x129301*/
          v17 = 15; /*0x129305*/
          LOBYTE(v46) = 0; /*0x12930a*/
        }
        if ( v17 > 0xF ) /*0x129318*/
        {
          v18 = (void *)v46; /*0x12931e*/
          if ( v17 + 1 >= 0x1000 ) /*0x12932c*/
          {
            v18 = *(void **)(v46 - 8); /*0x129332*/
            if ( (unsigned __int64)(v46 - (_QWORD)v18 - 8) > 0x1F ) /*0x129341*/
              goto LABEL_75; /*0x129341*/
          }
          j_j_free(v18); /*0x129347*/
        }
        a2 = (unsigned __int8 *)((v39 >> 31) & 0xF); /*0x129351*/
        v8 = v39 / 16; /*0x129356*/
        v39 = v8; /*0x129359*/
      }
      while ( v8 > 0 ); /*0x12936f*/
      if ( v41 > 0xF ) /*0x129379*/
        goto LABEL_73; /*0x129379*/
      v19 = *((_QWORD *)Src + 2); /*0x12937f*/
      v4 = 0x7FFFFFFFFFFFFFFFLL; /*0x129383*/
      if ( v19 == 0x7FFFFFFFFFFFFFFFLL ) /*0x129390*/
        goto LABEL_77; /*0x129390*/
      v20 = Src; /*0x129396*/
      if ( *((_QWORD *)Src + 3) > 0xFu ) /*0x12939e*/
        v20 = *(__int128 **)Src; /*0x1293a0*/
      v48 = 0; /*0x1293a6*/
      v21 = v19 + 1; /*0x1293aa*/
      v22 = 15; /*0x1293ae*/
      v23 = &v48; /*0x1293b3*/
      if ( v19 + 1 > 0xF ) /*0x1293ba*/
      {
        v22 = v21 | 0xF; /*0x1293bf*/
        if ( (v21 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x1293c6*/
        {
          if ( v22 < 0x16 ) /*0x1293d3*/
            v22 = 22; /*0x1293d3*/
        }
        else
        {
          v22 = 0x7FFFFFFFFFFFFFFFLL; /*0x1293c8*/
        }
        v23 = (__int128 *)sub_3C460(v22 + 1); /*0x1293e0*/
        *(_QWORD *)&v48 = v23; /*0x1293e3*/
      }
      *(_QWORD *)&v49 = v19 + 1; /*0x1293e7*/
      *((_QWORD *)&v49 + 1) = v22; /*0x1293eb*/
      *(_BYTE *)v23 = 48; /*0x1293ef*/
      memcpy((char *)v23 + 1, v20, v19); /*0x1293fc*/
      *((_BYTE *)v23 + v21) = 0; /*0x129401*/
      v3 |= 4u; /*0x129406*/
      v38 = v3; /*0x12940a*/
      if ( Src == &v48 ) /*0x129416*/
      {
        v26 = *((_QWORD *)&v49 + 1); /*0x12947f*/
      }
      else
      {
        v24 = *((_QWORD *)Src + 3); /*0x129418*/
        if ( v24 > 0xF ) /*0x129420*/
        {
          v25 = *(__int128 **)Src; /*0x129425*/
          if ( v24 + 1 >= 0x1000 ) /*0x12942f*/
          {
            if ( (unsigned __int64)v25 - *((_QWORD *)v25 - 1) - 8 > 0x1F ) /*0x129444*/
              goto LABEL_75; /*0x129444*/
            v25 = (__int128 *)*((_QWORD *)v25 - 1); /*0x12944a*/
          }
          j_j_free(v25); /*0x12944d*/
        }
        *((_QWORD *)Src + 2) = 0; /*0x129452*/
        *((_QWORD *)Src + 3) = 15; /*0x12945a*/
        *(_BYTE *)Src = 0; /*0x129462*/
        *Src = v48; /*0x129469*/
        Src[1] = v49; /*0x129470*/
        v26 = 15; /*0x129474*/
        LOBYTE(v48) = 0; /*0x129479*/
      }
      if ( v26 <= 0xF ) /*0x129487*/
        goto LABEL_73; /*0x129487*/
      v27 = (char *)v48; /*0x12948d*/
      goto LABEL_70; /*0x129491*/
    }
    v28 = *((_QWORD *)Src + 2); /*0x129496*/
    if ( 0x7FFFFFFFFFFFFFFFLL - v28 < 2 ) /*0x1294a4*/
LABEL_77:
      sub_8D90(v4, a2, v5); /*0x12962f*/
    v29 = Src; /*0x1294aa*/
    if ( *((_QWORD *)Src + 3) > 0xFu ) /*0x1294b2*/
      v29 = *(__int128 **)Src; /*0x1294b4*/
    v50 = 0; /*0x1294ba*/
    v30 = v28 + 2; /*0x1294be*/
    v31 = 15; /*0x1294c2*/
    v32 = &v50; /*0x1294c7*/
    if ( v28 + 2 > 0xF ) /*0x1294ce*/
    {
      v31 = v30 | 0xF; /*0x1294d3*/
      if ( (v30 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x1294da*/
      {
        if ( v31 < 0x16 ) /*0x1294e5*/
          v31 = 22; /*0x1294e5*/
      }
      else
      {
        v31 = 0x7FFFFFFFFFFFFFFFLL; /*0x1294dc*/
      }
      v32 = (__int128 *)sub_3C460(v31 + 1); /*0x1294f2*/
      *(_QWORD *)&v50 = v32; /*0x1294f5*/
    }
    *(_QWORD *)&v51 = v28 + 2; /*0x1294f9*/
    *((_QWORD *)&v51 + 1) = v31; /*0x1294fd*/
    *(_WORD *)v32 = 12336; /*0x129501*/
    memcpy((char *)v32 + 2, v29, v28); /*0x129510*/
    *((_BYTE *)v32 + v30) = 0; /*0x129515*/
    v3 |= 8u; /*0x12951a*/
    v38 = v3; /*0x12951e*/
    if ( Src == &v50 ) /*0x12952a*/
    {
      v26 = *((_QWORD *)&v51 + 1); /*0x129593*/
    }
    else
    {
      v33 = *((_QWORD *)Src + 3); /*0x12952c*/
      if ( v33 > 0xF ) /*0x129534*/
      {
        v34 = *(__int128 **)Src; /*0x129539*/
        if ( v33 + 1 >= 0x1000 ) /*0x129543*/
        {
          if ( (unsigned __int64)v34 - *((_QWORD *)v34 - 1) - 8 > 0x1F ) /*0x129558*/
            goto LABEL_75; /*0x129558*/
          v34 = (__int128 *)*((_QWORD *)v34 - 1); /*0x12955e*/
        }
        j_j_free(v34); /*0x129561*/
      }
      *((_QWORD *)Src + 2) = 0; /*0x129566*/
      *((_QWORD *)Src + 3) = 15; /*0x12956e*/
      *(_BYTE *)Src = 0; /*0x129576*/
      *Src = v50; /*0x12957d*/
      Src[1] = v51; /*0x129584*/
      v26 = 15; /*0x129588*/
      LOBYTE(v50) = 0; /*0x12958d*/
    }
    if ( v26 > 0xF ) /*0x12959b*/
    {
      v27 = (char *)v50; /*0x12959d*/
LABEL_70:
      v35 = v26 + 1 < 0x1000; /*0x1295a1*/
      v36 = v27; /*0x1295ac*/
      if ( !v35 ) /*0x1295af*/
      {
        v27 = (char *)*((_QWORD *)v27 - 1); /*0x1295b1*/
        if ( (unsigned __int64)(v36 - v27 - 8) > 0x1F ) /*0x1295c4*/
LABEL_75:
          invoke_watson(0, 0, 0, 0, 0); /*0x1295eb*/
      }
      j_j_free(v27); /*0x1295c6*/
    }
LABEL_73:
    v4 = (unsigned int)(v40 + 1); /*0x1295cf*/
    v40 = v4; /*0x1295d1*/
    if ( (int)v4 >= 3 ) /*0x1295d8*/
      break; /*0x1295d8*/
    a2 = v42; /*0x1295da*/
    v5 = v43; /*0x1295de*/
  }
  return Src; /*0x129608*/
}

// [14/19] Address: 0x129640
// Method: ColorSelectPopup::show
__int64 __fastcall ColorSelectPopup_show(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+32h] [rbp+Ah]

  v1 = *(_QWORD *)(a1 + 1016); /*0x129646*/
  *(_BYTE *)(a1 + 1156) = 1; /*0x129650*/
  *(_WORD *)(a1 + 1072) = *(_WORD *)(v1 + 472); /*0x12965e*/
  *(_BYTE *)(a1 + 1074) = *(_BYTE *)(v1 + 474); /*0x12966c*/
  v4 = *(_WORD *)(v1 + 472); /*0x129680*/
  v5 = *(_BYTE *)(v1 + 474); /*0x129691*/
  (**(void (__fastcall ***)(__int64, __int16 *))(a1 + 1000))(a1 + 1000, &v4); /*0x129698*/
  *(_BYTE *)(a1 + 1156) = 0; /*0x12969d*/
  return SetupTriggerPopup_show(a1); /*0x1296a4*/
}

// [15/19] Address: 0x129d20
// Method: ColorSelectPopup::updateCustomColorIdx
int __fastcall ColorSelectPopup_updateCustomColorIdx(__int64 a1)
{
  int result; // eax
  __int64 v3; // rcx
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // edi
  struct cocos2d::CCObject *v6; // rax

  result = *(_DWORD *)(a1 + 1152); /*0x129d26*/
  if ( result < 1 ) /*0x129d36*/
    result = 1; /*0x129d36*/
  v3 = *(_QWORD *)(a1 + 680); /*0x129d39*/
  *(_DWORD *)(a1 + 1152) = result; /*0x129d40*/
  if ( v3 ) /*0x129d49*/
  {
    *(_DWORD *)(v3 + 1032) = result; /*0x129d4b*/
  }
  else
  {
    v4 = *(cocos2d::CCArray **)(a1 + 688); /*0x129d57*/
    if ( v4 ) /*0x129d61*/
    {
      v5 = 0; /*0x129d68*/
      result = cocos2d::CCArray::count(v4); /*0x129d6a*/
      if ( result ) /*0x129d72*/
      {
        do /*0x129dac*/
        {
          v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v5++); /*0x129d89*/
          *((_DWORD *)v6 + 258) = *(_DWORD *)(a1 + 1152); /*0x129d97*/
          result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x129da4*/
        }
        while ( v5 < result ); /*0x129dac*/
      }
    }
  }
  return result; /*0x129d51*/
}

// [16/19] Address: 0x129fb0
// Method: ColorSelectPopup::onToggleHSVMode
__int64 __fastcall ColorSelectPopup_onToggleHSVMode(__int64 a1)
{
  bool v1; // zf

  v1 = *(_BYTE *)(a1 + 1240) == 0; /*0x129fb6*/
  *(_DWORD *)(a1 + 1160) = 0; /*0x129fc0*/
  *(_BYTE *)(a1 + 1240) = v1; /*0x129fcd*/
  sub_12A550(); /*0x129fd3*/
  sub_12A2E0(a1); /*0x129fdb*/
  return ColorSelectPopup_updateHSVMode(a1); /*0x129fe3*/
}

// [17/19] Address: 0x129ff0
// Method: ColorSelectPopup::updateHSVMode
__int64 __fastcall ColorSelectPopup_updateHSVMode(__int64 a1)
{
  _BYTE *v2; // rsi
  unsigned int v3; // edi
  unsigned int i; // ebp
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx

  v2 = (_BYTE *)(a1 + 1240); /*0x12a007*/
  v3 = 0; /*0x12a015*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1192)); ++i ) /*0x12a019*/
  {
    v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1192), i); /*0x12a039*/
    LOBYTE(v6) = *v2 == 0; /*0x12a042*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 336LL))(v5, v6); /*0x12a052*/
  }
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1200)) ) /*0x12a06f*/
  {
    do /*0x12a0b3*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1200), v3); /*0x12a089*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v7 + 336LL))(v7, (unsigned __int8)*v2); /*0x12a09f*/
      ++v3; /*0x12a0a9*/
    }
    while ( v3 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1200)) ); /*0x12a0b3*/
    v2 = (_BYTE *)(a1 + 1240); /*0x12a0b5*/
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1208) + 920LL))( /*0x12a0c9*/
    *(_QWORD *)(a1 + 1208),
    (unsigned __int8)*v2);
  LOBYTE(v8) = *v2 == 0; /*0x12a0d9*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1248) + 920LL))(*(_QWORD *)(a1 + 1248), v8); /*0x12a0df*/
  LOBYTE(v9) = *v2 == 0; /*0x12a0ef*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1256) + 920LL))(*(_QWORD *)(a1 + 1256), v9); /*0x12a0f5*/
  LOBYTE(v10) = *v2 == 0; /*0x12a105*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1264) + 920LL))(*(_QWORD *)(a1 + 1264), v10); /*0x12a10b*/
  LOBYTE(v11) = *v2 == 0; /*0x12a11b*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1272) + 920LL))(*(_QWORD *)(a1 + 1272), v11);
}

// [18/19] Address: 0x12a140
// Method: ColorSelectPopup::colorSelectClosed
void __fastcall ColorSelectPopup_colorSelectClosed(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+38h] [rbp-8h]

  if ( a3 >= 1000 ) /*0x12a147*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 6 ) /*0x12a179*/
    {
      v6 = *(_QWORD *)(a1 + 128); /*0x12a17f*/
      *(_DWORD *)(a1 + 144) = a3; /*0x12a18d*/
      v12 = 0; /*0x12a193*/
      LOWORD(v12) = 48; /*0x12a197*/
      *(_BYTE *)(a1 - 264) = 1; /*0x12a19d*/
      v13 = 1; /*0x12a1a4*/
      v14 = 15; /*0x12a1ac*/
      CCTextInputNode_setString(v6, &v12); /*0x12a1b4*/
      v7 = GJSpecialColorSelect_textForColorIdx((unsigned int)a3); /*0x12a1bb*/
      v13 = 0; /*0x12a1c5*/
      v8 = -1; /*0x12a1c9*/
      v14 = 0; /*0x12a1d0*/
      v12 = 0; /*0x12a1d4*/
      do /*0x12a1e3*/
        ++v8; /*0x12a1e0*/
      while ( *(_BYTE *)(v7 + v8) ); /*0x12a1e3*/
      sub_3C230(&v12); /*0x12a1f0*/
      SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 128), &v12); /*0x12a200*/
      ColorSelectPopup_updateCustomColorIdx(a1 - 1008); /*0x12a20c*/
      sub_607BB0(a1 - 1008); /*0x12a218*/
    }
    else
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 7 ) /*0x12a22e*/
        return; /*0x12a22e*/
      v9 = *(_QWORD *)(a1 + 200); /*0x12a234*/
      *(_DWORD *)(a1 + 152) = a3; /*0x12a242*/
      v12 = 0; /*0x12a248*/
      LOWORD(v12) = 48; /*0x12a24c*/
      *(_BYTE *)(a1 - 264) = 1; /*0x12a252*/
      v13 = 1; /*0x12a259*/
      v14 = 15; /*0x12a261*/
      CCTextInputNode_setString(v9, &v12); /*0x12a269*/
      v10 = GJSpecialColorSelect_textForColorIdx((unsigned int)a3); /*0x12a270*/
      v13 = 0; /*0x12a27a*/
      v11 = -1; /*0x12a27e*/
      v14 = 0; /*0x12a285*/
      v12 = 0; /*0x12a289*/
      do /*0x12a293*/
        ++v11; /*0x12a290*/
      while ( *(_BYTE *)(v10 + v11) ); /*0x12a293*/
      sub_3C230(&v12); /*0x12a2a0*/
      SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 200), &v12); /*0x12a2b0*/
      sub_12A2E0(a1 - 1008); /*0x12a2bc*/
    }
    *(_BYTE *)(a1 - 264) = 0; /*0x12a2c1*/
  }
}

// [19/19] Address: 0x14c660
// Method: ColorSelectPopup::hexToColor
// Hidden C++ exception states: #wind=1
const char *__fastcall ColorSelectPopup_hexToColor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  void **v4; // rcx
  char *v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  size_t v8; // r8
  int v9; // edi
  char *v10; // rax
  __int64 v12; // r8
  void **v13; // rcx
  char *v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  size_t v17; // r8
  int v18; // edi
  char *v19; // rax
  __int64 v20; // r8
  void **v21; // rcx
  char *v22; // rsi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r14
  size_t v25; // r8
  int v26; // edi
  char *v27; // rax
  __int64 v28; // r8
  void **v29; // rcx
  char *v30; // rsi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r14
  size_t v33; // r8
  int v34; // edi
  char *v35; // rax
  __int64 v36; // r8
  void **v37; // rcx
  char *v38; // rsi
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r14
  size_t v41; // r8
  int v42; // edi
  char *v43; // rax
  __int64 v44; // r8
  void **v45; // rcx
  char *v46; // rsi
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // r14
  size_t v49; // r8
  int v50; // edi
  char *v51; // rax
  __int64 v52; // r8
  void **v53; // rcx
  char *v54; // rsi
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // r14
  size_t v57; // r8
  int v58; // edi
  char *v59; // rax
  __int64 v60; // r8
  void **v61; // rcx
  char *v62; // rsi
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // r14
  size_t v65; // r8
  int v66; // edi
  char *v67; // rax
  __int64 v68; // r8
  void **v69; // rcx
  char *v70; // rsi
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // r14
  size_t v73; // r8
  int v74; // edi
  char *v75; // rax
  __int64 v76; // r8
  void **v77; // rcx
  char *v78; // rsi
  unsigned __int64 v79; // r15
  unsigned __int64 v80; // r14
  size_t v81; // r8
  int v82; // edi
  char *v83; // rax
  __int64 v84; // r8
  void **v85; // rcx
  char *v86; // rsi
  unsigned __int64 v87; // r15
  unsigned __int64 v88; // r14
  size_t v89; // r8
  int v90; // edi
  char *v91; // rax
  __int64 v92; // r8
  void **v93; // rcx
  char *v94; // rsi
  unsigned __int64 v95; // r15
  unsigned __int64 v96; // r14
  size_t v97; // r8
  int v98; // edi
  char *v99; // rax
  __int64 v100; // r8
  void **v101; // rcx
  char *v102; // rsi
  unsigned __int64 v103; // r15
  unsigned __int64 v104; // r14
  size_t v105; // r8
  int v106; // edi
  char *v107; // rax
  __int64 v108; // r8
  void **v109; // rcx
  char *v110; // rsi
  unsigned __int64 v111; // r15
  unsigned __int64 v112; // r14
  size_t v113; // r8
  int v114; // edi
  char *v115; // rax
  __int64 v116; // r8
  void **v117; // rcx
  char *v118; // rsi
  unsigned __int64 v119; // r15
  unsigned __int64 v120; // r14
  size_t v121; // r8
  int v122; // edi
  char *v123; // rax
  __int64 v124; // r8
  void **v125; // rcx
  char *v126; // rsi
  unsigned __int64 v127; // r15
  unsigned __int64 v128; // r14
  size_t v129; // r8
  int v130; // edi
  char *v131; // rax
  __int64 v132; // r8
  void **v133; // rcx
  char *v134; // rsi
  unsigned __int64 v135; // r15
  unsigned __int64 v136; // r14
  size_t v137; // r8
  int v138; // edi
  char *v139; // rax
  __int64 v140; // r8
  void **v141; // rcx
  char *v142; // rsi
  unsigned __int64 v143; // r15
  unsigned __int64 v144; // r14
  size_t v145; // r8
  int v146; // edi
  char *v147; // rax
  __int64 v148; // r8
  void **v149; // rcx
  char *v150; // rsi
  unsigned __int64 v151; // r15
  unsigned __int64 v152; // r14
  size_t v153; // r8
  int v154; // edi
  char *v155; // rax
  __int128 Buf2; // [rsp+30h] [rbp-50h] BYREF
  __int64 v157; // [rsp+40h] [rbp-40h]
  __int64 v158; // [rsp+48h] [rbp-38h]
  void *Buf1[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v160; // [rsp+60h] [rbp-20h]
  unsigned __int64 v161; // [rsp+68h] [rbp-18h]

  v2 = a2; /*0x14c690*/
  Buf2 = 0; /*0x14c696*/
  v157 = 1; /*0x14c6a0*/
  v158 = 15; /*0x14c6a4*/
  LOWORD(Buf2) = 49; /*0x14c6ac*/
  *(_OWORD *)Buf1 = 0; /*0x14c6b2*/
  v160 = 0; /*0x14c6b9*/
  v161 = 0; /*0x14c6bd*/
  v3 = -1; /*0x14c6c1*/
  do /*0x14c6d3*/
    ++v3; /*0x14c6d0*/
  while ( *(_BYTE *)(a2 + v3) ); /*0x14c6d3*/
  sub_3C230(Buf1); /*0x14c6dd*/
  v4 = Buf1; /*0x14c6e2*/
  v5 = (char *)Buf1[0]; /*0x14c6e6*/
  v6 = v161; /*0x14c6ea*/
  if ( v161 > 0xF ) /*0x14c6f2*/
    v4 = (void **)Buf1[0]; /*0x14c6f2*/
  v7 = v160; /*0x14c6f6*/
  v8 = v160; /*0x14c6fa*/
  if ( v160 > 1 ) /*0x14c701*/
    v8 = 1; /*0x14c701*/
  v9 = memcmp(v4, &Buf2, v8); /*0x14c70e*/
  if ( !v9 ) /*0x14c712*/
  {
    if ( v7 ) /*0x14c718*/
      v9 = v7 > 1; /*0x14c724*/
    else
      v9 = -1; /*0x14c71a*/
  }
  if ( v6 > 0xF ) /*0x14c72c*/
  {
    v10 = v5; /*0x14c732*/
    if ( v6 + 1 >= 0x1000 ) /*0x14c73c*/
    {
      v5 = (char *)*((_QWORD *)v5 - 1); /*0x14c742*/
      if ( (unsigned __int64)(v10 - v5 - 8) > 0x1F ) /*0x14c751*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14c762*/
    }
    j_j_free(v5); /*0x14c76c*/
  }
  if ( !v9 ) /*0x14c774*/
    return "Total Jumps:"; /*0x14c776*/
  Buf2 = 0; /*0x14c785*/
  v157 = 1; /*0x14c789*/
  v158 = 15; /*0x14c78d*/
  LOWORD(Buf2) = 50; /*0x14c795*/
  *(_OWORD *)Buf1 = 0; /*0x14c79b*/
  v160 = 0; /*0x14c79f*/
  v161 = 0; /*0x14c7a3*/
  v12 = -1; /*0x14c7a7*/
  do /*0x14c7b3*/
    ++v12; /*0x14c7b0*/
  while ( *(_BYTE *)(v2 + v12) ); /*0x14c7b3*/
  sub_3C230(Buf1); /*0x14c7c1*/
  v13 = Buf1; /*0x14c7c6*/
  v14 = (char *)Buf1[0]; /*0x14c7ca*/
  v15 = v161; /*0x14c7ce*/
  if ( v161 > 0xF ) /*0x14c7d6*/
    v13 = (void **)Buf1[0]; /*0x14c7d6*/
  v16 = v160; /*0x14c7da*/
  v17 = v160; /*0x14c7de*/
  if ( v160 > 1 ) /*0x14c7e5*/
    v17 = 1; /*0x14c7e5*/
  v18 = memcmp(v13, &Buf2, v17); /*0x14c7f2*/
  if ( !v18 ) /*0x14c7f6*/
  {
    if ( v16 ) /*0x14c7fc*/
      v18 = v16 > 1; /*0x14c808*/
    else
      v18 = -1; /*0x14c7fe*/
  }
  if ( v15 > 0xF ) /*0x14c810*/
  {
    v19 = v14; /*0x14c816*/
    if ( v15 + 1 >= 0x1000 ) /*0x14c820*/
    {
      v14 = (char *)*((_QWORD *)v14 - 1); /*0x14c826*/
      if ( (unsigned __int64)(v19 - v14 - 8) > 0x1F ) /*0x14c835*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14c846*/
    }
    j_j_free(v14); /*0x14c850*/
  }
  if ( !v18 ) /*0x14c858*/
    return "Total Attempts:"; /*0x14c85a*/
  Buf2 = 0; /*0x14c869*/
  v157 = 1; /*0x14c86d*/
  v158 = 15; /*0x14c871*/
  LOWORD(Buf2) = 51; /*0x14c879*/
  *(_OWORD *)Buf1 = 0; /*0x14c87f*/
  v160 = 0; /*0x14c883*/
  v161 = 0; /*0x14c887*/
  v20 = -1; /*0x14c88b*/
  do /*0x14c895*/
    ++v20; /*0x14c892*/
  while ( *(_BYTE *)(v2 + v20) ); /*0x14c895*/
  sub_3C230(Buf1); /*0x14c8a3*/
  v21 = Buf1; /*0x14c8a8*/
  v22 = (char *)Buf1[0]; /*0x14c8ac*/
  v23 = v161; /*0x14c8b0*/
  if ( v161 > 0xF ) /*0x14c8b8*/
    v21 = (void **)Buf1[0]; /*0x14c8b8*/
  v24 = v160; /*0x14c8bc*/
  v25 = v160; /*0x14c8c0*/
  if ( v160 > 1 ) /*0x14c8c7*/
    v25 = 1; /*0x14c8c7*/
  v26 = memcmp(v21, &Buf2, v25); /*0x14c8d4*/
  if ( !v26 ) /*0x14c8d8*/
  {
    if ( v24 ) /*0x14c8de*/
      v26 = v24 > 1; /*0x14c8ea*/
    else
      v26 = -1; /*0x14c8e0*/
  }
  if ( v23 > 0xF ) /*0x14c8f2*/
  {
    v27 = v22; /*0x14c8f8*/
    if ( v23 + 1 >= 0x1000 ) /*0x14c902*/
    {
      v22 = (char *)*((_QWORD *)v22 - 1); /*0x14c908*/
      if ( (unsigned __int64)(v27 - v22 - 8) > 0x1F ) /*0x14c917*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14c928*/
    }
    j_j_free(v22); /*0x14c932*/
  }
  if ( !v26 ) /*0x14c93a*/
    return "Completed Levels:"; /*0x14c93c*/
  Buf2 = 0; /*0x14c94b*/
  v157 = 1; /*0x14c94f*/
  v158 = 15; /*0x14c953*/
  LOWORD(Buf2) = 52; /*0x14c95b*/
  *(_OWORD *)Buf1 = 0; /*0x14c961*/
  v160 = 0; /*0x14c965*/
  v161 = 0; /*0x14c969*/
  v28 = -1; /*0x14c96d*/
  do /*0x14c977*/
    ++v28; /*0x14c974*/
  while ( *(_BYTE *)(v2 + v28) ); /*0x14c977*/
  sub_3C230(Buf1); /*0x14c985*/
  v29 = Buf1; /*0x14c98a*/
  v30 = (char *)Buf1[0]; /*0x14c98e*/
  v31 = v161; /*0x14c992*/
  if ( v161 > 0xF ) /*0x14c99a*/
    v29 = (void **)Buf1[0]; /*0x14c99a*/
  v32 = v160; /*0x14c99e*/
  v33 = v160; /*0x14c9a2*/
  if ( v160 > 1 ) /*0x14c9a9*/
    v33 = 1; /*0x14c9a9*/
  v34 = memcmp(v29, &Buf2, v33); /*0x14c9b6*/
  if ( !v34 ) /*0x14c9ba*/
  {
    if ( v32 ) /*0x14c9c0*/
      v34 = v32 > 1; /*0x14c9cc*/
    else
      v34 = -1; /*0x14c9c2*/
  }
  if ( v31 > 0xF ) /*0x14c9d4*/
  {
    v35 = v30; /*0x14c9da*/
    if ( v31 + 1 >= 0x1000 ) /*0x14c9e4*/
    {
      v30 = (char *)*((_QWORD *)v30 - 1); /*0x14c9ea*/
      if ( (unsigned __int64)(v35 - v30 - 8) > 0x1F ) /*0x14c9f9*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14ca0a*/
    }
    j_j_free(v30); /*0x14ca14*/
  }
  if ( !v34 ) /*0x14ca1c*/
    return "Completed Online Levels:"; /*0x14ca1e*/
  Buf2 = 0; /*0x14ca2d*/
  v157 = 2; /*0x14ca36*/
  v158 = 15; /*0x14ca3a*/
  strcpy((char *)&Buf2, "15"); /*0x14ca47*/
  *(_OWORD *)Buf1 = 0; /*0x14ca4f*/
  v160 = 0; /*0x14ca53*/
  v161 = 0; /*0x14ca57*/
  v36 = -1; /*0x14ca5b*/
  do /*0x14ca65*/
    ++v36; /*0x14ca62*/
  while ( *(_BYTE *)(v2 + v36) ); /*0x14ca65*/
  sub_3C230(Buf1); /*0x14ca73*/
  v37 = Buf1; /*0x14ca78*/
  v38 = (char *)Buf1[0]; /*0x14ca7c*/
  v39 = v161; /*0x14ca80*/
  if ( v161 > 0xF ) /*0x14ca88*/
    v37 = (void **)Buf1[0]; /*0x14ca88*/
  v40 = v160; /*0x14ca8c*/
  v41 = v160; /*0x14ca90*/
  if ( v160 > 2 ) /*0x14ca97*/
    v41 = 2; /*0x14ca97*/
  v42 = memcmp(v37, &Buf2, v41); /*0x14caa4*/
  if ( !v42 ) /*0x14caa8*/
  {
    if ( v40 >= 2 ) /*0x14caae*/
      v42 = v40 > 2; /*0x14caba*/
    else
      v42 = -1; /*0x14cab0*/
  }
  if ( v39 > 0xF ) /*0x14cac2*/
  {
    v43 = v38; /*0x14cac8*/
    if ( v39 + 1 >= 0x1000 ) /*0x14cad2*/
    {
      v38 = (char *)*((_QWORD *)v38 - 1); /*0x14cad8*/
      if ( (unsigned __int64)(v43 - v38 - 8) > 0x1F ) /*0x14cae7*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14caf8*/
    }
    j_j_free(v38); /*0x14cb02*/
  }
  if ( !v42 ) /*0x14cb0a*/
    return "Completed Daily Levels:"; /*0x14cb0c*/
  Buf2 = 0; /*0x14cb1b*/
  v157 = 1; /*0x14cb1f*/
  v158 = 15; /*0x14cb23*/
  LOWORD(Buf2) = 53; /*0x14cb2b*/
  *(_OWORD *)Buf1 = 0; /*0x14cb31*/
  v160 = 0; /*0x14cb35*/
  v161 = 0; /*0x14cb39*/
  v44 = -1; /*0x14cb3d*/
  do /*0x14cb47*/
    ++v44; /*0x14cb44*/
  while ( *(_BYTE *)(v2 + v44) ); /*0x14cb47*/
  sub_3C230(Buf1); /*0x14cb55*/
  v45 = Buf1; /*0x14cb5a*/
  v46 = (char *)Buf1[0]; /*0x14cb5e*/
  v47 = v161; /*0x14cb62*/
  if ( v161 > 0xF ) /*0x14cb6a*/
    v45 = (void **)Buf1[0]; /*0x14cb6a*/
  v48 = v160; /*0x14cb6e*/
  v49 = v160; /*0x14cb72*/
  if ( v160 > 1 ) /*0x14cb79*/
    v49 = 1; /*0x14cb79*/
  v50 = memcmp(v45, &Buf2, v49); /*0x14cb86*/
  if ( !v50 ) /*0x14cb8a*/
  {
    if ( v48 ) /*0x14cb90*/
      v50 = v48 > 1; /*0x14cb9c*/
    else
      v50 = -1; /*0x14cb92*/
  }
  if ( v47 > 0xF ) /*0x14cba4*/
  {
    v51 = v46; /*0x14cbaa*/
    if ( v47 + 1 >= 0x1000 ) /*0x14cbb4*/
    {
      v46 = (char *)*((_QWORD *)v46 - 1); /*0x14cbba*/
      if ( (unsigned __int64)(v51 - v46 - 8) > 0x1F ) /*0x14cbc9*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14cbda*/
    }
    j_j_free(v46); /*0x14cbe4*/
  }
  if ( !v50 ) /*0x14cbec*/
    return "Completed Demon Levels:"; /*0x14cbee*/
  Buf2 = 0; /*0x14cbfd*/
  v157 = 1; /*0x14cc01*/
  v158 = 15; /*0x14cc05*/
  LOWORD(Buf2) = 54; /*0x14cc0d*/
  *(_OWORD *)Buf1 = 0; /*0x14cc13*/
  v160 = 0; /*0x14cc17*/
  v161 = 0; /*0x14cc1b*/
  v52 = -1; /*0x14cc1f*/
  do /*0x14cc29*/
    ++v52; /*0x14cc26*/
  while ( *(_BYTE *)(v2 + v52) ); /*0x14cc29*/
  sub_3C230(Buf1); /*0x14cc37*/
  v53 = Buf1; /*0x14cc3c*/
  v54 = (char *)Buf1[0]; /*0x14cc40*/
  v55 = v161; /*0x14cc44*/
  if ( v161 > 0xF ) /*0x14cc4c*/
    v53 = (void **)Buf1[0]; /*0x14cc4c*/
  v56 = v160; /*0x14cc50*/
  v57 = v160; /*0x14cc54*/
  if ( v160 > 1 ) /*0x14cc5b*/
    v57 = 1; /*0x14cc5b*/
  v58 = memcmp(v53, &Buf2, v57); /*0x14cc68*/
  if ( !v58 ) /*0x14cc6c*/
  {
    if ( v56 ) /*0x14cc72*/
      v58 = v56 > 1; /*0x14cc7e*/
    else
      v58 = -1; /*0x14cc74*/
  }
  if ( v55 > 0xF ) /*0x14cc86*/
  {
    v59 = v54; /*0x14cc8c*/
    if ( v55 + 1 >= 0x1000 ) /*0x14cc96*/
    {
      v54 = (char *)*((_QWORD *)v54 - 1); /*0x14cc9c*/
      if ( (unsigned __int64)(v59 - v54 - 8) > 0x1F ) /*0x14ccab*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14ccbc*/
    }
    j_j_free(v54); /*0x14ccc6*/
  }
  if ( !v58 ) /*0x14ccce*/
    return "Collected Stars:"; /*0x14ccd0*/
  Buf2 = 0; /*0x14ccdf*/
  v157 = 2; /*0x14cce8*/
  v158 = 15; /*0x14ccec*/
  strcpy((char *)&Buf2, "28"); /*0x14ccf9*/
  *(_OWORD *)Buf1 = 0; /*0x14cd01*/
  v160 = 0; /*0x14cd05*/
  v161 = 0; /*0x14cd09*/
  v60 = -1; /*0x14cd0d*/
  do /*0x14cd17*/
    ++v60; /*0x14cd14*/
  while ( *(_BYTE *)(v2 + v60) ); /*0x14cd17*/
  sub_3C230(Buf1); /*0x14cd25*/
  v61 = Buf1; /*0x14cd2a*/
  v62 = (char *)Buf1[0]; /*0x14cd2e*/
  v63 = v161; /*0x14cd32*/
  if ( v161 > 0xF ) /*0x14cd3a*/
    v61 = (void **)Buf1[0]; /*0x14cd3a*/
  v64 = v160; /*0x14cd3e*/
  v65 = v160; /*0x14cd42*/
  if ( v160 > 2 ) /*0x14cd49*/
    v65 = 2; /*0x14cd49*/
  v66 = memcmp(v61, &Buf2, v65); /*0x14cd56*/
  if ( !v66 ) /*0x14cd5a*/
  {
    if ( v64 >= 2 ) /*0x14cd60*/
      v66 = v64 > 2; /*0x14cd6c*/
    else
      v66 = -1; /*0x14cd62*/
  }
  if ( v63 > 0xF ) /*0x14cd74*/
  {
    v67 = v62; /*0x14cd7a*/
    if ( v63 + 1 >= 0x1000 ) /*0x14cd84*/
    {
      v62 = (char *)*((_QWORD *)v62 - 1); /*0x14cd8a*/
      if ( (unsigned __int64)(v67 - v62 - 8) > 0x1F ) /*0x14cd99*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14cdaa*/
    }
    j_j_free(v62); /*0x14cdb4*/
  }
  if ( !v66 ) /*0x14cdbc*/
    return "Collected Moons:"; /*0x14cdbe*/
  Buf2 = 0; /*0x14cdcd*/
  v157 = 1; /*0x14cdd1*/
  v158 = 15; /*0x14cdd5*/
  LOWORD(Buf2) = 56; /*0x14cddd*/
  *(_OWORD *)Buf1 = 0; /*0x14cde3*/
  v160 = 0; /*0x14cde7*/
  v161 = 0; /*0x14cdeb*/
  v68 = -1; /*0x14cdef*/
  do /*0x14cdf9*/
    ++v68; /*0x14cdf6*/
  while ( *(_BYTE *)(v2 + v68) ); /*0x14cdf9*/
  sub_3C230(Buf1); /*0x14ce07*/
  v69 = Buf1; /*0x14ce0c*/
  v70 = (char *)Buf1[0]; /*0x14ce10*/
  v71 = v161; /*0x14ce14*/
  if ( v161 > 0xF ) /*0x14ce1c*/
    v69 = (void **)Buf1[0]; /*0x14ce1c*/
  v72 = v160; /*0x14ce20*/
  v73 = v160; /*0x14ce24*/
  if ( v160 > 1 ) /*0x14ce2b*/
    v73 = 1; /*0x14ce2b*/
  v74 = memcmp(v69, &Buf2, v73); /*0x14ce38*/
  if ( !v74 ) /*0x14ce3c*/
  {
    if ( v72 ) /*0x14ce42*/
      v74 = v72 > 1; /*0x14ce4e*/
    else
      v74 = -1; /*0x14ce44*/
  }
  if ( v71 > 0xF ) /*0x14ce56*/
  {
    v75 = v70; /*0x14ce5c*/
    if ( v71 + 1 >= 0x1000 ) /*0x14ce66*/
    {
      v70 = (char *)*((_QWORD *)v70 - 1); /*0x14ce6c*/
      if ( (unsigned __int64)(v75 - v70 - 8) > 0x1F ) /*0x14ce7b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14ce8c*/
    }
    j_j_free(v70); /*0x14ce96*/
  }
  if ( !v74 ) /*0x14ce9e*/
    return "Collected Secret Coins:"; /*0x14cea0*/
  Buf2 = 0; /*0x14ceaf*/
  v157 = 2; /*0x14ceb8*/
  v158 = 15; /*0x14cebc*/
  strcpy((char *)&Buf2, "12"); /*0x14cec9*/
  *(_OWORD *)Buf1 = 0; /*0x14ced1*/
  v160 = 0; /*0x14ced5*/
  v161 = 0; /*0x14ced9*/
  v76 = -1; /*0x14cedd*/
  do /*0x14cee7*/
    ++v76; /*0x14cee4*/
  while ( *(_BYTE *)(v2 + v76) ); /*0x14cee7*/
  sub_3C230(Buf1); /*0x14cef5*/
  v77 = Buf1; /*0x14cefa*/
  v78 = (char *)Buf1[0]; /*0x14cefe*/
  v79 = v161; /*0x14cf02*/
  if ( v161 > 0xF ) /*0x14cf0a*/
    v77 = (void **)Buf1[0]; /*0x14cf0a*/
  v80 = v160; /*0x14cf0e*/
  v81 = v160; /*0x14cf12*/
  if ( v160 > 2 ) /*0x14cf19*/
    v81 = 2; /*0x14cf19*/
  v82 = memcmp(v77, &Buf2, v81); /*0x14cf26*/
  if ( !v82 ) /*0x14cf2a*/
  {
    if ( v80 >= 2 ) /*0x14cf30*/
      v82 = v80 > 2; /*0x14cf3c*/
    else
      v82 = -1; /*0x14cf32*/
  }
  if ( v79 > 0xF ) /*0x14cf44*/
  {
    v83 = v78; /*0x14cf4a*/
    if ( v79 + 1 >= 0x1000 ) /*0x14cf54*/
    {
      v78 = (char *)*((_QWORD *)v78 - 1); /*0x14cf5a*/
      if ( (unsigned __int64)(v83 - v78 - 8) > 0x1F ) /*0x14cf69*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14cf7a*/
    }
    j_j_free(v78); /*0x14cf84*/
  }
  if ( !v82 ) /*0x14cf8c*/
    return "Collected User Coins:"; /*0x14cf8e*/
  Buf2 = 0; /*0x14cf9d*/
  v157 = 1; /*0x14cfa1*/
  v158 = 15; /*0x14cfa5*/
  LOWORD(Buf2) = 55; /*0x14cfad*/
  *(_OWORD *)Buf1 = 0; /*0x14cfb3*/
  v160 = 0; /*0x14cfb7*/
  v161 = 0; /*0x14cfbb*/
  v84 = -1; /*0x14cfbf*/
  do /*0x14cfc9*/
    ++v84; /*0x14cfc6*/
  while ( *(_BYTE *)(v2 + v84) ); /*0x14cfc9*/
  sub_3C230(Buf1); /*0x14cfd7*/
  v85 = Buf1; /*0x14cfdc*/
  v86 = (char *)Buf1[0]; /*0x14cfe0*/
  v87 = v161; /*0x14cfe4*/
  if ( v161 > 0xF ) /*0x14cfec*/
    v85 = (void **)Buf1[0]; /*0x14cfec*/
  v88 = v160; /*0x14cff0*/
  v89 = v160; /*0x14cff4*/
  if ( v160 > 1 ) /*0x14cffb*/
    v89 = 1; /*0x14cffb*/
  v90 = memcmp(v85, &Buf2, v89); /*0x14d008*/
  if ( !v90 ) /*0x14d00c*/
  {
    if ( v88 ) /*0x14d012*/
      v90 = v88 > 1; /*0x14d01e*/
    else
      v90 = -1; /*0x14d014*/
  }
  if ( v87 > 0xF ) /*0x14d026*/
  {
    v91 = v86; /*0x14d02c*/
    if ( v87 + 1 >= 0x1000 ) /*0x14d036*/
    {
      v86 = (char *)*((_QWORD *)v86 - 1); /*0x14d03c*/
      if ( (unsigned __int64)(v91 - v86 - 8) > 0x1F ) /*0x14d04b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d05c*/
    }
    j_j_free(v86); /*0x14d066*/
  }
  if ( !v90 ) /*0x14d06e*/
    return "Completed Map Packs:"; /*0x14d070*/
  Buf2 = 0; /*0x14d07f*/
  v157 = 2; /*0x14d088*/
  v158 = 15; /*0x14d08c*/
  strcpy((char *)&Buf2, "40"); /*0x14d099*/
  *(_OWORD *)Buf1 = 0; /*0x14d0a1*/
  v160 = 0; /*0x14d0a5*/
  v161 = 0; /*0x14d0a9*/
  v92 = -1; /*0x14d0ad*/
  do /*0x14d0b7*/
    ++v92; /*0x14d0b4*/
  while ( *(_BYTE *)(v2 + v92) ); /*0x14d0b7*/
  sub_3C230(Buf1); /*0x14d0c5*/
  v93 = Buf1; /*0x14d0ca*/
  v94 = (char *)Buf1[0]; /*0x14d0ce*/
  v95 = v161; /*0x14d0d2*/
  if ( v161 > 0xF ) /*0x14d0da*/
    v93 = (void **)Buf1[0]; /*0x14d0da*/
  v96 = v160; /*0x14d0de*/
  v97 = v160; /*0x14d0e2*/
  if ( v160 > 2 ) /*0x14d0e9*/
    v97 = 2; /*0x14d0e9*/
  v98 = memcmp(v93, &Buf2, v97); /*0x14d0f6*/
  if ( !v98 ) /*0x14d0fa*/
  {
    if ( v96 >= 2 ) /*0x14d100*/
      v98 = v96 > 2; /*0x14d10c*/
    else
      v98 = -1; /*0x14d102*/
  }
  if ( v95 > 0xF ) /*0x14d114*/
  {
    v99 = v94; /*0x14d11a*/
    if ( v95 + 1 >= 0x1000 ) /*0x14d124*/
    {
      v94 = (char *)*((_QWORD *)v94 - 1); /*0x14d12a*/
      if ( (unsigned __int64)(v99 - v94 - 8) > 0x1F ) /*0x14d139*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d14a*/
    }
    j_j_free(v94); /*0x14d154*/
  }
  if ( !v98 ) /*0x14d15c*/
    return "Completed Gauntlets:"; /*0x14d15e*/
  Buf2 = 0; /*0x14d16d*/
  v157 = 1; /*0x14d171*/
  v158 = 15; /*0x14d175*/
  LOWORD(Buf2) = 57; /*0x14d17d*/
  *(_OWORD *)Buf1 = 0; /*0x14d183*/
  v160 = 0; /*0x14d187*/
  v161 = 0; /*0x14d18b*/
  v100 = -1; /*0x14d18f*/
  do /*0x14d199*/
    ++v100; /*0x14d196*/
  while ( *(_BYTE *)(v2 + v100) ); /*0x14d199*/
  sub_3C230(Buf1); /*0x14d1a7*/
  v101 = Buf1; /*0x14d1ac*/
  v102 = (char *)Buf1[0]; /*0x14d1b0*/
  v103 = v161; /*0x14d1b4*/
  if ( v161 > 0xF ) /*0x14d1bc*/
    v101 = (void **)Buf1[0]; /*0x14d1bc*/
  v104 = v160; /*0x14d1c0*/
  v105 = v160; /*0x14d1c4*/
  if ( v160 > 1 ) /*0x14d1cb*/
    v105 = 1; /*0x14d1cb*/
  v106 = memcmp(v101, &Buf2, v105); /*0x14d1d8*/
  if ( !v106 ) /*0x14d1dc*/
  {
    if ( v104 ) /*0x14d1e2*/
      v106 = v104 > 1; /*0x14d1ee*/
    else
      v106 = -1; /*0x14d1e4*/
  }
  if ( v103 > 0xF ) /*0x14d1f6*/
  {
    v107 = v102; /*0x14d1fc*/
    if ( v103 + 1 >= 0x1000 ) /*0x14d206*/
    {
      v102 = (char *)*((_QWORD *)v102 - 1); /*0x14d20c*/
      if ( (unsigned __int64)(v107 - v102 - 8) > 0x1F ) /*0x14d21b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d22c*/
    }
    j_j_free(v102); /*0x14d236*/
  }
  if ( !v106 ) /*0x14d23e*/
    return "Players destroyed:"; /*0x14d240*/
  Buf2 = 0; /*0x14d24f*/
  v157 = 2; /*0x14d259*/
  v158 = 15; /*0x14d25d*/
  strcpy((char *)&Buf2, "10"); /*0x14d26a*/
  *(_OWORD *)Buf1 = 0; /*0x14d272*/
  v160 = 0; /*0x14d276*/
  v161 = 0; /*0x14d27a*/
  v108 = -1; /*0x14d27e*/
  do /*0x14d288*/
    ++v108; /*0x14d285*/
  while ( *(_BYTE *)(v2 + v108) ); /*0x14d288*/
  sub_3C230(Buf1); /*0x14d296*/
  v109 = Buf1; /*0x14d29b*/
  v110 = (char *)Buf1[0]; /*0x14d29f*/
  v111 = v161; /*0x14d2a3*/
  if ( v161 > 0xF ) /*0x14d2ab*/
    v109 = (void **)Buf1[0]; /*0x14d2ab*/
  v112 = v160; /*0x14d2af*/
  v113 = v160; /*0x14d2b3*/
  if ( v160 > 2 ) /*0x14d2ba*/
    v113 = 2; /*0x14d2ba*/
  v114 = memcmp(v109, &Buf2, v113); /*0x14d2c7*/
  if ( !v114 ) /*0x14d2cb*/
  {
    if ( v112 >= 2 ) /*0x14d2d1*/
      v114 = v112 > 2; /*0x14d2dd*/
    else
      v114 = -1; /*0x14d2d3*/
  }
  if ( v111 > 0xF ) /*0x14d2e5*/
  {
    v115 = v110; /*0x14d2eb*/
    if ( v111 + 1 >= 0x1000 ) /*0x14d2f5*/
    {
      v110 = (char *)*((_QWORD *)v110 - 1); /*0x14d2fb*/
      if ( (unsigned __int64)(v115 - v110 - 8) > 0x1F ) /*0x14d30a*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d31b*/
    }
    j_j_free(v110); /*0x14d325*/
  }
  if ( !v114 ) /*0x14d32d*/
    return "Liked/Disliked Levels:"; /*0x14d32f*/
  Buf2 = 0; /*0x14d33e*/
  v157 = 2; /*0x14d342*/
  v158 = 15; /*0x14d346*/
  strcpy((char *)&Buf2, "11"); /*0x14d353*/
  *(_OWORD *)Buf1 = 0; /*0x14d35b*/
  v160 = 0; /*0x14d35f*/
  v161 = 0; /*0x14d363*/
  v116 = -1; /*0x14d367*/
  do /*0x14d373*/
    ++v116; /*0x14d370*/
  while ( *(_BYTE *)(v2 + v116) ); /*0x14d373*/
  sub_3C230(Buf1); /*0x14d381*/
  v117 = Buf1; /*0x14d386*/
  v118 = (char *)Buf1[0]; /*0x14d38a*/
  v119 = v161; /*0x14d38e*/
  if ( v161 > 0xF ) /*0x14d396*/
    v117 = (void **)Buf1[0]; /*0x14d396*/
  v120 = v160; /*0x14d39a*/
  v121 = v160; /*0x14d39e*/
  if ( v160 > 2 ) /*0x14d3a5*/
    v121 = 2; /*0x14d3a5*/
  v122 = memcmp(v117, &Buf2, v121); /*0x14d3b2*/
  if ( !v122 ) /*0x14d3b6*/
  {
    if ( v120 >= 2 ) /*0x14d3bc*/
      v122 = v120 > 2; /*0x14d3c8*/
    else
      v122 = -1; /*0x14d3be*/
  }
  if ( v119 > 0xF ) /*0x14d3d0*/
  {
    v123 = v118; /*0x14d3d6*/
    if ( v119 + 1 >= 0x1000 ) /*0x14d3e0*/
    {
      v118 = (char *)*((_QWORD *)v118 - 1); /*0x14d3e6*/
      if ( (unsigned __int64)(v123 - v118 - 8) > 0x1F ) /*0x14d3f5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d406*/
    }
    j_j_free(v118); /*0x14d410*/
  }
  if ( !v122 ) /*0x14d418*/
    return "Rated Levels:"; /*0x14d41a*/
  Buf2 = 0; /*0x14d429*/
  v157 = 2; /*0x14d42d*/
  v158 = 15; /*0x14d431*/
  strcpy((char *)&Buf2, "14"); /*0x14d43e*/
  *(_OWORD *)Buf1 = 0; /*0x14d446*/
  v160 = 0; /*0x14d44a*/
  v161 = 0; /*0x14d44e*/
  v124 = -1; /*0x14d452*/
  do /*0x14d463*/
    ++v124; /*0x14d460*/
  while ( *(_BYTE *)(v2 + v124) ); /*0x14d463*/
  sub_3C230(Buf1); /*0x14d471*/
  v125 = Buf1; /*0x14d476*/
  v126 = (char *)Buf1[0]; /*0x14d47a*/
  v127 = v161; /*0x14d47e*/
  if ( v161 > 0xF ) /*0x14d486*/
    v125 = (void **)Buf1[0]; /*0x14d486*/
  v128 = v160; /*0x14d48a*/
  v129 = v160; /*0x14d48e*/
  if ( v160 > 2 ) /*0x14d495*/
    v129 = 2; /*0x14d495*/
  v130 = memcmp(v125, &Buf2, v129); /*0x14d4a2*/
  if ( !v130 ) /*0x14d4a6*/
  {
    if ( v128 >= 2 ) /*0x14d4ac*/
      v130 = v128 > 2; /*0x14d4b8*/
    else
      v130 = -1; /*0x14d4ae*/
  }
  if ( v127 > 0xF ) /*0x14d4c0*/
  {
    v131 = v126; /*0x14d4c6*/
    if ( v127 + 1 >= 0x1000 ) /*0x14d4d0*/
    {
      v126 = (char *)*((_QWORD *)v126 - 1); /*0x14d4d6*/
      if ( (unsigned __int64)(v131 - v126 - 8) > 0x1F ) /*0x14d4e5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d4f6*/
    }
    j_j_free(v126); /*0x14d500*/
  }
  if ( !v130 ) /*0x14d508*/
    return "Total orbs collected:"; /*0x14d50a*/
  Buf2 = 0; /*0x14d519*/
  v157 = 2; /*0x14d51d*/
  v158 = 15; /*0x14d521*/
  strcpy((char *)&Buf2, "13"); /*0x14d52e*/
  *(_OWORD *)Buf1 = 0; /*0x14d536*/
  v160 = 0; /*0x14d53a*/
  v161 = 0; /*0x14d53e*/
  v132 = -1; /*0x14d542*/
  do /*0x14d553*/
    ++v132; /*0x14d550*/
  while ( *(_BYTE *)(v2 + v132) ); /*0x14d553*/
  sub_3C230(Buf1); /*0x14d561*/
  v133 = Buf1; /*0x14d566*/
  v134 = (char *)Buf1[0]; /*0x14d56a*/
  v135 = v161; /*0x14d56e*/
  if ( v161 > 0xF ) /*0x14d576*/
    v133 = (void **)Buf1[0]; /*0x14d576*/
  v136 = v160; /*0x14d57a*/
  v137 = v160; /*0x14d57e*/
  if ( v160 > 2 ) /*0x14d585*/
    v137 = 2; /*0x14d585*/
  v138 = memcmp(v133, &Buf2, v137); /*0x14d592*/
  if ( !v138 ) /*0x14d596*/
  {
    if ( v136 >= 2 ) /*0x14d59c*/
      v138 = v136 > 2; /*0x14d5a8*/
    else
      v138 = -1; /*0x14d59e*/
  }
  if ( v135 > 0xF ) /*0x14d5b0*/
  {
    v139 = v134; /*0x14d5b6*/
    if ( v135 + 1 >= 0x1000 ) /*0x14d5c0*/
    {
      v134 = (char *)*((_QWORD *)v134 - 1); /*0x14d5c6*/
      if ( (unsigned __int64)(v139 - v134 - 8) > 0x1F ) /*0x14d5d5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d5e6*/
    }
    j_j_free(v134); /*0x14d5f0*/
  }
  if ( !v138 ) /*0x14d5f8*/
    return "Collected Diamonds:"; /*0x14d5fa*/
  Buf2 = 0; /*0x14d609*/
  v157 = 2; /*0x14d60d*/
  v158 = 15; /*0x14d611*/
  strcpy((char *)&Buf2, "41"); /*0x14d61e*/
  *(_OWORD *)Buf1 = 0; /*0x14d626*/
  v160 = 0; /*0x14d62a*/
  v161 = 0; /*0x14d62e*/
  v140 = -1; /*0x14d632*/
  do /*0x14d643*/
    ++v140; /*0x14d640*/
  while ( *(_BYTE *)(v2 + v140) ); /*0x14d643*/
  sub_3C230(Buf1); /*0x14d651*/
  v141 = Buf1; /*0x14d656*/
  v142 = (char *)Buf1[0]; /*0x14d65a*/
  v143 = v161; /*0x14d65e*/
  if ( v161 > 0xF ) /*0x14d666*/
    v141 = (void **)Buf1[0]; /*0x14d666*/
  v144 = v160; /*0x14d66a*/
  v145 = v160; /*0x14d66e*/
  if ( v160 > 2 ) /*0x14d675*/
    v145 = 2; /*0x14d675*/
  v146 = memcmp(v141, &Buf2, v145); /*0x14d682*/
  if ( !v146 ) /*0x14d686*/
  {
    if ( v144 >= 2 ) /*0x14d68c*/
      v146 = v144 > 2; /*0x14d698*/
    else
      v146 = -1; /*0x14d68e*/
  }
  if ( v143 > 0xF ) /*0x14d6a0*/
  {
    v147 = v142; /*0x14d6a6*/
    if ( v143 + 1 >= 0x1000 ) /*0x14d6b0*/
    {
      v142 = (char *)*((_QWORD *)v142 - 1); /*0x14d6b6*/
      if ( (unsigned __int64)(v147 - v142 - 8) > 0x1F ) /*0x14d6c5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d6d6*/
    }
    j_j_free(v142); /*0x14d6e0*/
  }
  if ( !v146 ) /*0x14d6e8*/
    return "Collected List Rewards:"; /*0x14d6ea*/
  Buf2 = 0; /*0x14d6f9*/
  v157 = 2; /*0x14d6fd*/
  v158 = 15; /*0x14d701*/
  strcpy((char *)&Buf2, "42"); /*0x14d70e*/
  *(_OWORD *)Buf1 = 0; /*0x14d716*/
  v160 = 0; /*0x14d71a*/
  v161 = 0; /*0x14d71e*/
  v148 = -1; /*0x14d722*/
  do /*0x14d733*/
    ++v148; /*0x14d730*/
  while ( *(_BYTE *)(v2 + v148) ); /*0x14d733*/
  sub_3C230(Buf1); /*0x14d741*/
  v149 = Buf1; /*0x14d746*/
  v150 = (char *)Buf1[0]; /*0x14d74a*/
  v151 = v161; /*0x14d74e*/
  if ( v161 > 0xF ) /*0x14d756*/
    v149 = (void **)Buf1[0]; /*0x14d756*/
  v152 = v160; /*0x14d75a*/
  v153 = v160; /*0x14d75e*/
  if ( v160 > 2 ) /*0x14d765*/
    v153 = 2; /*0x14d765*/
  v154 = memcmp(v149, &Buf2, v153); /*0x14d772*/
  if ( !v154 ) /*0x14d776*/
  {
    if ( v152 >= 2 ) /*0x14d77c*/
      v154 = v152 > 2; /*0x14d788*/
    else
      v154 = -1; /*0x14d77e*/
  }
  if ( v151 > 0xF ) /*0x14d790*/
  {
    v155 = v150; /*0x14d796*/
    if ( v151 + 1 >= 0x1000 ) /*0x14d7a0*/
    {
      v150 = (char *)*((_QWORD *)v150 - 1); /*0x14d7a6*/
      if ( (unsigned __int64)(v155 - v150 - 8) > 0x1F ) /*0x14d7b5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x14d7c6*/
    }
    j_j_free(v150); /*0x14d7d0*/
  }
  if ( !v154 ) /*0x14d7df*/
    return "Completed Insane Levels:"; /*0x14d7df*/
  return (const char *)v2; /*0x14d7e6*/
}

// Address: 0x124610
// Method: ColorSelectPopup::init
// Hidden C++ exception states: #wind=7
char __fastcall ColorSelectPopup_init(__int64 a1, int a2, int a3, cocos2d::CCObject *a4)
{
  char result; // al
  __int64 v7; // rcx
  cocos2d::CCObject *v8; // rax
  __int64 v9; // rcx
  cocos2d::CCObject *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  struct cocos2d::CCLabelBMFont *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  cocos2d::CCObject *v22; // rbx
  cocos2d::CCObject *v23; // rax
  struct cocos2d::CCLabelBMFont *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  void (__fastcall *v30)(_QWORD *, __int64); // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  const char *v34; // r8
  char *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __i... [49151 chars total]
