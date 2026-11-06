#include <Geode/binding/SetupShaderEffectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [4/19] Address: 0x5dac20
// Method: SetupShaderEffectPopup::init
// Hidden C++ exception states: #wind=1
char __fastcall SetupShaderEffectPopup_init(__int64 a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  const struct cocos2d::CCPoint *v9; // rax
  float v10[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 *v11; // [rsp+48h] [rbp-40h]
  _BYTE v12[8]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-18h]

  result = sub_6060E0(a1, a2, a3, a4, 1133412352, 1, 0); /*0x5dac5a*/
  if ( result ) /*0x5dac61*/
  {
    *(_BYTE *)(a1 + 744) = 1; /*0x5dac74*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1); /*0x5dac81*/
    v13 = 0; /*0x5dac8a*/
    v14 = 2; /*0x5dac8f*/
    v15 = 15; /*0x5dac98*/
    strcpy((char *)&v13, "OK"); /*0x5daca6*/
    SetupTriggerPopup_addCloseButton(a1, (__int64 *)&v13); /*0x5dacb8*/
    sub_607670(a1); /*0x5dacc0*/
    *(_BYTE *)(a1 + 888) = 1; /*0x5dacc5*/
    *(_DWORD *)(a1 + 1020) = a4; /*0x5daccc*/
    switch ( a4 ) /*0x5dacf4*/
    {
      case 2904: /*0x5dacf4*/
        SetupShaderEffectPopup_setupShaderTrigger(a1); /*0x5dadb5*/
        goto LABEL_23; /*0x5dadba*/
      case 2905: /*0x5dacf4*/
        sub_5DBB80(a1); /*0x5dacf9*/
        goto LABEL_22; /*0x5dacfe*/
      case 2907: /*0x5dacf4*/
        sub_5DCEA0(a1); /*0x5dad06*/
        goto LABEL_22; /*0x5dad0b*/
      case 2909: /*0x5dacf4*/
        sub_5DE0B0(a1); /*0x5dad13*/
        goto LABEL_22; /*0x5dad18*/
      case 2910: /*0x5dacf4*/
        SetupShaderEffectPopup_setupChromatic(a1); /*0x5dad20*/
        goto LABEL_22; /*0x5dad25*/
      case 2911: /*0x5dacf4*/
        SetupShaderEffectPopup_setupChromaticGlitch(a1); /*0x5dad2d*/
        goto LABEL_22; /*0x5dad32*/
      case 2912: /*0x5dacf4*/
        SetupShaderEffectPopup_setupPixelate(a1); /*0x5dad3a*/
        goto LABEL_22; /*0x5dad3f*/
      case 2913: /*0x5dacf4*/
        sub_5DFC00(a1); /*0x5dad47*/
        goto LABEL_22; /*0x5dad4c*/
      case 2914: /*0x5dacf4*/
        SetupSFXPopup_init(a1); /*0x5dad51*/
        goto LABEL_22; /*0x5dad56*/
      case 2915: /*0x5dacf4*/
        sub_5E1080(a1); /*0x5dad5b*/
        goto LABEL_22; /*0x5dad60*/
      case 2916: /*0x5dacf4*/
        sub_5E1C40(a1); /*0x5dad65*/
        goto LABEL_22; /*0x5dad6a*/
      case 2917: /*0x5dacf4*/
        sub_5E2570(a1); /*0x5dad6f*/
        goto LABEL_22; /*0x5dad74*/
      case 2919: /*0x5dacf4*/
        SetupShaderEffectPopup_setupGrayscale(a1); /*0x5dad79*/
        goto LABEL_22; /*0x5dad7e*/
      case 2920: /*0x5dacf4*/
        SetupShaderEffectPopup_setupSepia(a1); /*0x5dad83*/
        goto LABEL_22; /*0x5dad88*/
      case 2921: /*0x5dacf4*/
        SetupShaderEffectPopup_setupInvertColor(a1); /*0x5dad8d*/
        goto LABEL_22; /*0x5dad92*/
      case 2922: /*0x5dacf4*/
        SetupShaderEffectPopup_setupHueShift(a1); /*0x5dad97*/
        goto LABEL_22; /*0x5dad9c*/
      case 2923: /*0x5dacf4*/
        sub_5E4330(a1); /*0x5dada1*/
        goto LABEL_22; /*0x5dada6*/
      case 2924: /*0x5dacf4*/
        SetupShaderEffectPopup_setupSplitScreen(a1); /*0x5dadab*/
        goto LABEL_22; /*0x5dadb0*/
      default:
        if ( a4 != 2904 ) /*0x5dadc5*/
        {
LABEL_22:
          v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x5dadcb*/
          cocos2d::CCDirector::getWinSize(v8, v10); /*0x5dadd9*/
          v11 = &v13; /*0x5dade4*/
          v13 = 0; /*0x5dadec*/
          v14 = 1; /*0x5dadf1*/
          v15 = 15; /*0x5dadfa*/
          LOWORD(v13) = 32; /*0x5dae03*/
          cocos2d::CCPoint::CCPoint( /*0x5dae5b*/
            (cocos2d::CCPoint *)v12,
            (float)((float)(*(float *)(a1 + 732) * 0.5) + (float)(v10[0] * 0.5)) - 15.0,
            (float)((float)(*(float *)(a1 + 736) * 0.5) + (float)(v10[1] * 0.5)) - 15.0);
          SetupTriggerPopup_createToggleValueControl(a1, 531, (__int64)&v13, v9, 0, 0, 0, 0.60000002); /*0x5dae8d*/
        }
LABEL_23:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1136LL))(a1); /*0x5dae92*/
        *(_BYTE *)(a1 + 744) = 0; /*0x5dae9e*/
        result = 1; /*0x5daea5*/
        break; /*0x5daea5*/
    }
  }
  return result; /*0x5dac63*/
}

// [5/19] Address: 0x5daf10
// Method: SetupShaderEffectPopup::updateDefaultTriggerValues
void __fastcall SetupShaderEffectPopup_updateDefaultTriggerValues(struct cocos2d::CCObject **a1)
{
  struct cocos2d::CCObject *v2; // rdi
  __int16 v3; // ax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]

  SetupTriggerPopup_updateDefaultTriggerValues(a1); /*0x5daf1d*/
  v2 = cocos2d::CCDictionary::objectForKey(a1[95], 51); /*0x5daf34*/
  if ( v2 ) /*0x5daf3a*/
  {
    if ( (*((float (__fastcall **)(struct cocos2d::CCObject **, __int64))*a1 + 146))(a1, 138) == 0.0 ) /*0x5daf62*/
    {
      if ( (*((float (__fastcall **)(struct cocos2d::CCObject **, __int64))*a1 + 146))(a1, 200) == 0.0 ) /*0x5daf7a*/
      {
        if ( (*((float (__fastcall **)(struct cocos2d::CCObject **, __int64))*a1 + 146))(a1, 201) == 0.0 ) /*0x5daf92*/
          return; /*0x5daf92*/
        v5 = 1; /*0x5daf97*/
        v4 = 0; /*0x5dafa0*/
        LOWORD(v4) = 67; /*0x5dafa5*/
        goto LABEL_9; /*0x5dafac*/
      }
      v3 = 12880; /*0x5dafae*/
    }
    else
    {
      v3 = 12624; /*0x5dafb5*/
    }
    v5 = 2; /*0x5dafbd*/
    v4 = 0; /*0x5dafc6*/
    BYTE2(v4) = 0; /*0x5dafcb*/
    LOWORD(v4) = v3; /*0x5dafd0*/
LABEL_9:
    v6 = 15; /*0x5dafd5*/
    CCTextInputNode_setString(v2, &v4); /*0x5dafe6*/
  }
}

// [7/19] Address: 0x5dbad0
// Method: SetupShaderEffectPopup::updateZLayerButtons
unsigned int __fastcall SetupShaderEffectPopup_updateZLayerButtons(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int result; // eax
  struct cocos2d::CCObject *v4; // rsi
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  const char *v8; // rdx

  v2 = 0; /*0x5dbadd*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1000)); /*0x5dbae6*/
  if ( result ) /*0x5dbaee*/
  {
    do /*0x5dbb6c*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1000), v2); /*0x5dbb0f*/
      v5 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 56LL))(v4); /*0x5dbb1c*/
      v6 = *(_DWORD *)(a1 + 1008); /*0x5dbb1e*/
      if ( v5 == v6 || (v7 = *(_DWORD *)(a1 + 1012), v5 == v7) ) /*0x5dbb30*/
      {
        v8 = "GJ_button_02.png"; /*0x5dbb4c*/
      }
      else if ( v5 <= v6 || v5 >= v7 ) /*0x5dbb38*/
      {
        v8 = "GJ_button_04.png"; /*0x5dbb43*/
      }
      else
      {
        v8 = "GJ_button_01.png"; /*0x5dbb3a*/
      }
      sub_41FC0(v4, v8); /*0x5dbb56*/
      ++v2; /*0x5dbb62*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1000)); /*0x5dbb64*/
    }
    while ( v2 < result ); /*0x5dbb6c*/
  }
  return result; /*0x5dbb73*/
}

// [15/19] Address: 0x5e4a10
// Method: SetupShaderEffectPopup::onResetColors
double __fastcall SetupShaderEffectPopup_onResetColors(cocos2d::CCDictionary **a1)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8

  if ( cocos2d::CCDictionary::objectForKey(a1[94], 176) ) /*0x5e4a2a*/
  {
    LOBYTE(v2) = 1; /*0x5e4a48*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 144))(a1, 176, v2); /*0x5e4a4b*/
  }
  else
  {
    sub_60A5A0(a1, 176); /*0x5e4a56*/
  }
  sub_60ABF0(a1, 176); /*0x5e4a66*/
  if ( cocos2d::CCDictionary::objectForKey(a1[94], 191) ) /*0x5e4a77*/
  {
    LOBYTE(v3) = 1; /*0x5e4a8d*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 144))(a1, 191, v3); /*0x5e4a90*/
  }
  else
  {
    sub_60A5A0(a1, 191); /*0x5e4a9b*/
  }
  sub_60ABF0(a1, 191); /*0x5e4aab*/
  if ( cocos2d::CCDictionary::objectForKey(a1[94], 175) ) /*0x5e4abc*/
  {
    LOBYTE(v4) = 1; /*0x5e4ad2*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 144))(a1, 175, v4); /*0x5e4ad5*/
  }
  else
  {
    sub_60A5A0(a1, 175); /*0x5e4ae0*/
  }
  sub_60ABF0(a1, 175); /*0x5e4af0*/
  if ( cocos2d::CCDictionary::objectForKey(a1[94], 179) ) /*0x5e4b01*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 179, 0); /*0x5e4b1a*/
  else
    sub_60A5A0(a1, 179); /*0x5e4b25*/
  sub_60ABF0(a1, 179); /*0x5e4b35*/
  if ( cocos2d::CCDictionary::objectForKey(a1[94], 180) ) /*0x5e4b46*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 180, 0); /*0x5e4b5f*/
  else
    sub_60A5A0(a1, 180); /*0x5e4b6a*/
  sub_60ABF0(a1, 180); /*0x5e4b7a*/
  if ( cocos2d::CCDictionary::objectForKey(a1[94], 189) ) /*0x5e4b8b*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 189, 0); /*0x5e4ba4*/
  else
    sub_60A5A0(a1, 189); /*0x5e4baf*/
  return sub_60ABF0(a1, 189); /*0x5e4bbf*/
}

// [18/19] Address: 0x5e54e0
// Method: SetupShaderEffectPopup::toggleGroup
__int64 __fastcall SetupShaderEffectPopup_toggleGroup(cocos2d::CCDictionary **a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v4; // ebp
  cocos2d::CCArray *v5; // r15
  unsigned int i; // edi
  unsigned int *v7; // rbx
  int v8; // eax
  struct cocos2d::CCObject *v9; // rax
  struct cocos2d::CCObject *v10; // rsi
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  __int64 v13; // rdx

  v4 = a3; /*0x5e54f8*/
  v5 = (cocos2d::CCArray *)sub_606BC0(a1, a2); /*0x5e5506*/
  (*(void (__fastcall **)(cocos2d::CCArray *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, v4); /*0x5e550c*/
  for ( i = 0; i < cocos2d::CCArray::count(v5); ++i ) /*0x5e5515*/
  {
    v7 = (unsigned int *)cocos2d::CCArray::objectAtIndex(v5, i); /*0x5e5542*/
    if ( !cocos2d::CCDictionary::objectForKey(a1[119], v7[2]) ) /*0x5e5548*/
      (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v7 + 336LL))(v7, (unsigned __int8)v4); /*0x5e5564*/
    v8 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v7 + 56LL))(v7); /*0x5e556d*/
    v9 = cocos2d::CCDictionary::objectForKey(a1[95], v8); /*0x5e557a*/
    v10 = v9; /*0x5e5580*/
    if ( v9 ) /*0x5e5586*/
    {
      v11 = *(_QWORD *)v9; /*0x5e5588*/
      v12 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 344LL))(v9); /*0x5e558e*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(v11 + 920))(v10, v12); /*0x5e559a*/
    }
  }
  if ( (*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 513) == 0.0 ) /*0x5e55e1*/
    return sub_6095A0(a1, 0); /*0x5e55ee*/
  LOBYTE(v13) = 1; /*0x5e55f3*/
  return sub_6095A0(a1, v13); /*0x5e55e8*/
}

// Address: 0x592a60
// Method: SetupShaderEffectPopup::setupBulge
// Hidden C++ exception states: #wind=3
char __fastcall SetupShaderEffectPopup_setupBulge(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rcx
  void **v14; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v15[8]; // [rsp+88h] [rbp-78h] BYREF
  float v16[2]; // [rsp+90h] [rbp-70h] BYREF
  void **v17; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v18[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v19; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-28h]

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1128792064, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    a1[744] = 1;
    Block[1] = 0;
    si128.m128i_i64[0] = 8;
    si128.m128i_i64[1] = 15;
    Block[0] = (void *)0x32206769666E6F43LL;
    sub_606E80(a1, Block);
    *(_OWORD *)Block = 0;
    si128.m128i_i64[0] = 2;
    si128.m128i_i64[1] = 15;
    strcpy((char *)Block, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)Block);
    v14 = Block;
    *(_OWORD *)Block = 0;
    si128 = 0u;
    Block[0] = (void *)sub_3C460(208);
    si128.m128i_i64[0] = 197;
    si128.m128i_i64[1] = 207;
    strcpy(
      (char *)Block[0],
      "<cg>Enter Channel</c> is used to set a specific enter effect.\n"
      "<cy>Material</c> is used to link with specific events.\n"
      "<cl>ControlID</c> allows you to reference specific objects when using remapping.");
    v19 = 0;
    v20 = 4;
    v21 = 15;
    strcpy((char *)&v19, "Help");
    sub_6070A0(a1, &v19, Block);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v16);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v15, v16[0] * 0.5, (float)(v16[1] * 0.5) + 30.0);
    si128 = _mm_load_si128((const __m128i *)&xmmword_830FB0);
    strcpy((char *)Block, "Enter Channel:");
    HIBYTE(Block[1]) = 0;
    v8 = (_DWORD)a1 + 544;
    if ( !a1 )
      v8 = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, -80.0, 0.0);
    cocos2d::CCPoint::operator+(v15, &v14, v9);
    sub_3C3E00((_DWORD)a1, v8, 8, 343, (__int64)Block, (__int64)&v14, 1060320051, 6, 0, 0, 0);
    if ( si128.m128i_i64[1] > 0xFuLL )
    {
      v10 = Block[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v10 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v10);
    }
    v17 = Block;
    Block[1] = algn_34 + 6;
    si128.m128i_i64[0] = 9;
    si128.m128i_i64[1] = 15;
    Block[0] = (void *)0x6C6169726574614DLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v18, 80.0, 0.0);
    cocos2d::CCPoint::operator+(v15, &v14, v11);
    sub_6088F0((_DWORD)a1, 446, (unsigned int)Block, (unsigned int)&v14, 1060320051, 1, 3, 6, 1, 0, 0, 0, 0, 0, 2, 0);
    if ( a1[889] )
    {
      Block[1] = &locret_3A44;
      si128 = _mm_load_si128((const __m128i *)&xmmword_830F70);
      Block[0] = (void *)0x496C6F72746E6F43LL;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v18, 80.0, -55.0);
      cocos2d::CCPoint::operator+(v15, &v14, v12);
      sub_3C3E00((_DWORD)a1, v8, 6, 534, (__int64)Block, (__int64)&v14, 1060320051, 6, 0, 0, 0);
      if ( si128.m128i_i64[1] > 0xFuLL )
      {
        v13 = Block[0];
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v13 = (void *)*((_QWORD *)Block[0] - 1);
          if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v13);
      }
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}

// Address: 0x5de730
// Method: SetupShaderEffectPopup::setupChromatic
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupShaderEffectPopup_setupChromatic(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  const struct cocos2d::CCPoint *v9; // rax
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int128 *v14; // [rsp+40h] [rbp-59h] BYREF
  __int128 *v15; // [rsp+48h] [rbp-51h] BYREF
  __int128 v16; // [rsp+50h] [rbp-49h] BYREF
  __int64 v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  __int128 v19; // [rsp+70h] [rbp-29h] BYREF
  __int64 v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  char v22; // [rsp+108h] [rbp+6Fh] BYREF
  float v23; // [rsp+110h] [rbp+77h] BYREF
  float v24; // [rsp+114h] [rbp+7Bh]
  __int128 *v25; // [rsp+118h] [rbp+7Fh] BYREF

  v17 = 15;
  v18 = 15;
  strcpy((char *)&v16, "Setup Chromatic");
  sub_606E80(a1, &v16);
  v25 = &v16;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  *(_QWORD *)&v16 = sub_3C460(208);
  v17 = 202;
  v18 = 207;
  strcpy(
    (char *)v16,
    "Applies <cg>chromatic aberration</c>.\n"
    "<cy>Use X and Y</c> sets which axis is affected.\n"
    "<cl>TargetX and TargetY</c> define how strong the effect is.\n"
    "<cp>FadeTime</c> is time until final state is reached.");
  v19 = 0;
  v20 = 4;
  v21 = 15;
  strcpy((char *)&v19, "Help");
  sub_6070A0(a1, &v19, &v16);
  v3 = cocos2d::CCDirector::sharedDirector(v2);
  cocos2d::CCDirector::getWinSize(v3, &v23);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, v23 * 0.5, (float)(v24 * 0.5) + 85.0);
  v14 = &v19;
  v20 = 8;
  v21 = 15;
  v19 = 0x3A58746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, -100.0, 0.0);
  cocos2d::CCPoint::operator+(&v22, &v25, v4);
  SetupTriggerPopup_createValueControl(
    a1,
    180,
    (__int64)&v19,
    (const struct cocos2d::CCPoint *)&v25,
    1060320051,
    0,
    1084227584);
  v15 = &v19;
  v20 = 8;
  v21 = 15;
  v19 = 0x3A59746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, 100.0, 0.0);
  cocos2d::CCPoint::operator+(&v22, &v25, v5);
  SetupTriggerPopup_createValueControl(
    a1,
    189,
    (__int64)&v19,
    (const struct cocos2d::CCPoint *)&v25,
    1060320051,
    0,
    1084227584);
  v15 = &v16;
  *((_QWORD *)&v16 + 1) = 58;
  v17 = 9;
  v18 = 15;
  *(_QWORD *)&v16 = 0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, -100.0, -50.0);
  cocos2d::CCPoint::operator+(&v22, &v25, v6);
  SetupTriggerPopup_createValueControl(a1, 10, (__int64)&v16, (const struct cocos2d::CCPoint *)&v25, 1060320051, 0, 0);
  v15 = &v16;
  v16 = 0;
  v17 = 5;
  v18 = 15;
  strcpy((char *)&v16, "Use X");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, 45.0, -55.0);
  cocos2d::CCPoint::operator+(&v22, &v25, v7);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    188,
    (__int64)&v16,
    (const struct cocos2d::CCPoint *)&v25,
    0,
    0,
    0,
    1.0);
  v15 = &v16;
  v16 = 0;
  v17 = 5;
  v18 = 15;
  strcpy((char *)&v16, "Use Y");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, 130.0, -55.0);
  cocos2d::CCPoint::operator+(&v22, &v25, v8);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    190,
    (__int64)&v16,
    (const struct cocos2d::CCPoint *)&v25,
    0,
    0,
    0,
    1.0);
  v25 = &v19;
  v20 = 8;
  v21 = 15;
  v19 = 0x65766974616C6552uLL;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v15,
    (float)((float)((float)(*(float *)(a1 + 732) * 0.5) + (float)(v23 * 0.5)) - 72.0) - 90.0,
    (float)((float)(v24 * 0.5) - (float)(*(float *)(a1 + 736) * 0.5)) + 20.0);
  SetupTriggerPopup_createToggleValueControl(a1, 514, (__int64)&v19, v9, 0, 0, 0, 1.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, 0.0, -100.0);
  cocos2d::CCPoint::operator+(&v22, &v25, v10);
  return sub_60EDA0(a1, (unsigned int)&v25, v11, v12, 0);
}

// Address: 0x5decb0
// Method: SetupShaderEffectPopup::setupChromaticGlitch
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupShaderEffectPopup_setupChromaticGlitch(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  const char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const struct cocos2d::CCPoint *v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  __int128 *v22; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v23; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  char v30; // [rsp+148h] [rbp+48h] BYREF
  float v31; // [rsp+150h] [rbp+50h] BYREF
  float v32; // [rsp+154h] [rbp+54h]
  __int128 *v33; // [rsp+158h] [rbp+58h] BYREF

  v24 = 0;
  *(_QWORD *)&v24 = sub_3C460(32);
  v25 = 19;
  v26 = 31;
  strcpy((char *)v24, "Setup Chroma Glitch");
  sub_606E80(a1, &v24);
  v33 = &v24;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v2 = sub_3C460(432);
  *(_QWORD *)&v24 = v2;
  v25 = 421;
  v26 = 431;
  v3 = v2;
  v4 = "Applies <cg>chromatic aberration</c> in waves alongside glitch lines.\n"
       "<cy>Speed</c> is how fast the wave effect happens.\n"
       "<cl>Strength</c> is how big the waves are.\n"
       "<cp>LineThickness</c> is how big the lines are.\n"
       "<cr>LineStrength</c> is the opacity of the lines.\n"
       "<co>RGBOff</c> sets color offset.\n"
       "<ca>FadeTime</c> is time until final state is reached.\n"
       "<cj>RelativePos</c> changes the shape of the effect based on position.";
  v5 = 3;
  do
  {
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *(_OWORD *)(v3 + 16) = *((_OWORD *)v4 + 1);
    *(_OWORD *)(v3 + 32) = *((_OWORD *)v4 + 2);
    *(_OWORD *)(v3 + 48) = *((_OWORD *)v4 + 3);
    *(_OWORD *)(v3 + 64) = *((_OWORD *)v4 + 4);
    *(_OWORD *)(v3 + 80) = *((_OWORD *)v4 + 5);
    *(_OWORD *)(v3 + 96) = *((_OWORD *)v4 + 6);
    v3 += 128;
    *(_OWORD *)(v3 - 16) = *((_OWORD *)v4 + 7);
    v4 += 128;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v3 = *(_OWORD *)v4;
  *(_OWORD *)(v3 + 16) = *((_OWORD *)v4 + 1);
  *(_DWORD *)(v3 + 32) = *((_DWORD *)v4 + 8);
  *(_BYTE *)(v3 + 36) = v4[36];
  *(_BYTE *)(v2 + 421) = 0;
  v27 = 0;
  v28 = 4;
  v29 = 15;
  strcpy((char *)&v27, "Help");
  sub_6070A0(a1, &v27, &v24);
  v7 = cocos2d::CCDirector::sharedDirector(v6);
  cocos2d::CCDirector::getWinSize(v7, &v31);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, v31 * 0.5, (float)(v32 * 0.5) + 100.0);
  v22 = &v24;
  v24 = 0;
  v25 = 6;
  v26 = 15;
  strcpy((char *)&v24, "Speed:");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, -100.0, 0.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v8);
  SetupTriggerPopup_createValueControl(
    a1,
    175,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    1058642330,
    0,
    1084227584);
  v23 = &v24;
  v25 = 7;
  v26 = 15;
  v24 = 0x3A66664F424752uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 100.0, 0.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v9);
  SetupTriggerPopup_createValueControl(
    a1,
    180,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    1058642330,
    0,
    1084227584);
  v23 = &v24;
  *((_QWORD *)&v24 + 1) = 58;
  v25 = 9;
  v26 = 15;
  *(_QWORD *)&v24 = 0x6874676E65727453LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -100.0, -40.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v10);
  SetupTriggerPopup_createValueControl(
    a1,
    176,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    1058642330,
    0,
    1084227584);
  v23 = &v24;
  *((_QWORD *)&v24 + 1) = 58;
  v25 = 9;
  v26 = 15;
  *(_QWORD *)&v24 = 0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 100.0, -40.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v11);
  SetupTriggerPopup_createValueControl(
    a1,
    10,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    1058642330,
    0,
    1084227584);
  v23 = &v24;
  v25 = 14;
  v26 = 15;
  strcpy((char *)&v24, "LineThickness:");
  HIBYTE(v24) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -100.0, -80.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v12);
  SetupTriggerPopup_createValueControl(
    a1,
    179,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    1058642330,
    0,
    0x40000000);
  v23 = &v24;
  *((_QWORD *)&v24 + 1) = 58;
  v25 = 9;
  v26 = 15;
  *(_QWORD *)&v24 = 0x48746E656D676553LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 100.0, -80.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v13);
  SetupTriggerPopup_createValueControl(
    a1,
    189,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    1058642330,
    0,
    1084227584);
  v23 = &v24;
  v25 = 13;
  v26 = 15;
  strcpy((char *)&v24, "LineStrength:");
  HIWORD(v24) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -100.0, -120.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v14);
  SetupTriggerPopup_createValueControl(
    a1,
    191,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    1058642330,
    0,
    0x40000000);
  v23 = &v24;
  HIWORD(v24) = 0;
  v25 = 7;
  v26 = 15;
  qmemcpy(&v24, "Disabl", 6);
  *(_QWORD *)((char *)&v24 + 6) = (unsigned __int8)aDisable[6];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 110.0, -125.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v15);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    192,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    0,
    0,
    0,
    1.0);
  v23 = &v24;
  v25 = 12;
  v26 = 15;
  strcpy((char *)&v24, "Relative\nPos");
  BYTE13(v24) = 0;
  HIWORD(v24) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 110.0, -155.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v16);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    194,
    (__int64)&v24,
    (const struct cocos2d::CCPoint *)&v33,
    0,
    0,
    0,
    1.0);
  v33 = &v27;
  v28 = 8;
  v29 = 15;
  v27 = 0x65766974616C6552uLL;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v23,
    (float)((float)((float)(*(float *)(a1 + 732) * 0.5) + (float)(v31 * 0.5)) - 72.0) - 90.0,
    (float)((float)(v32 * 0.5) - (float)(*(float *)(a1 + 736) * 0.5)) + 20.0);
  SetupTriggerPopup_createToggleValueControl(a1, 514, (__int64)&v27, v17, 0, 0, 0, 1.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, 0.0, -160.0);
  cocos2d::CCPoint::operator+(&v30, &v33, v18);
  return sub_60EDA0(a1, (unsigned int)&v33, v19, v20, 0);
}

// Address: 0x5fa3f0
// Method: SetupShaderEffectPopup::setupColorChange
// Hidden C++ exception states: #wind=4
char __fastcall SetupShaderEffectPopup_setupColorChange(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  _BYTE *v6; // r9
  _BYTE *v7; // rcx
  const char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rax
  void *v16; // rcx
  __m128i v17; // xmm6
  __int64 v18; // rax
  void *v19; // rcx
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // rax
  void **v23; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v24[8]; // [rsp+68h] [rbp-51h] BYREF
  void **v25; // [rsp+70h] [rbp-49h] BYREF
  float v26[2]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-39h] BYREF
  void *Block[2]; // [rsp+88h] [rbp-31h] BYREF
  __m128i si128; // [rsp+98h] [rbp-21h]
  void *v30[2]; // [rsp+A8h] [rbp-11h] BYREF
  __m128i v31; // [rsp+B8h] [rbp-1h]

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1133248512, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    *(_OWORD *)Block = 0;
    Block[0] = (void *)sub_3C460(32);
    si128.m128i_i64[0] = 16;
    si128.m128i_i64[1] = 31;
    strcpy((char *)Block[0], "Setup Checkpoint");
    sub_606E80(a1, Block);
    *(_OWORD *)Block = 0;
    si128.m128i_i64[0] = 2;
    si128.m128i_i64[1] = 15;
    strcpy((char *)Block, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)Block);
    v23 = Block;
    *(_OWORD *)Block = 0;
    si128 = 0u;
    v6 = (_BYTE *)sub_3C460(448);
    Block[0] = v6;
    si128.m128i_i64[0] = 441;
    si128.m128i_i64[1] = 447;
    v7 = v6;
    v8 = "<cg>Checkpoints</c> used when the game type is Platformer.\n"
         "<co>PreSpawnID</c> spawned before the checkpoint is saved.\n"
         "<cy>SpawnID</c> spawned after the checkpoint is saved.\n"
         "<cp>RespawnID</c> spawned after respawning at the checkpoint.\n"
         "<cl>TargetPos</c> lets you set a respawn location upon death after the checkpoint. Make sure this group contain"
         "s one object.\n"
         "<cj>Player Pos</c> respawns where the player was when the checkpoint was touched.";
    v9 = 3;
    do
    {
      *(_OWORD *)v7 = *(_OWORD *)v8;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v8 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v8 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v8 + 3);
      *((_OWORD *)v7 + 4) = *((_OWORD *)v8 + 4);
      *((_OWORD *)v7 + 5) = *((_OWORD *)v8 + 5);
      *((_OWORD *)v7 + 6) = *((_OWORD *)v8 + 6);
      v7 += 128;
      *((_OWORD *)v7 - 1) = *((_OWORD *)v8 + 7);
      v8 += 128;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)v7 = *(_OWORD *)v8;
    *((_OWORD *)v7 + 1) = *((_OWORD *)v8 + 1);
    *((_OWORD *)v7 + 2) = *((_OWORD *)v8 + 2);
    *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 6);
    v7[56] = v8[56];
    v6[441] = 0;
    *(_OWORD *)v30 = 0;
    v31.m128i_i64[0] = 4;
    v31.m128i_i64[1] = 15;
    strcpy((char *)v30, "Help");
    sub_6070A0(a1, v30, Block);
    sub_607360(a1);
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    cocos2d::CCDirector::getWinSize(v11, v26);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v24, v26[0] * 0.5, v26[1] * 0.5);
    si128 = _mm_load_si128((const __m128i *)&xmmword_830F80);
    Block[0] = (void *)0x6E77617053657250LL;
    Block[1] = &loc_3A4446 + 3;
    v12 = (_DWORD)a1 + 544;
    if ( !a1 )
      v12 = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, -80.0, 60.0);
    cocos2d::CCPoint::operator+(v24, &v23, v13);
    sub_3C3E00((_DWORD)a1, v12, 1, 604, (__int64)Block, (__int64)&v23, 1061997773, 6, 0, 0, 0);
    if ( si128.m128i_i64[1] > 0xFuLL )
    {
      v14 = Block[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v14 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v14);
    }
    v30[1] = 0;
    v31 = _mm_load_si128((const __m128i *)&xmmword_830F50);
    v30[0] = (void *)0x3A44496E77617053LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, 80.0, 60.0);
    cocos2d::CCPoint::operator+(v24, &v23, v15);
    sub_3C3E00((_DWORD)a1, v12, 1, 51, (__int64)v30, (__int64)&v23, 1061997773, 6, 0, 0, 0);
    if ( v31.m128i_i64[1] > 0xFuLL )
    {
      v16 = v30[0];
      if ( (unsigned __int64)(v31.m128i_i64[1] + 1) >= 0x1000 )
      {
        v16 = (void *)*((_QWORD *)v30[0] - 1);
        if ( (unsigned __int64)((char *)v30[0] - (char *)v16 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v16);
    }
    Block[1] = &locret_3A44;
    v17 = _mm_load_si128((const __m128i *)&xmmword_830F70);
    si128 = v17;
    Block[0] = (void *)0x496E776170736552LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, -80.0, -5.0);
    cocos2d::CCPoint::operator+(v24, &v23, v18);
    sub_3C3E00((_DWORD)a1, v12, 1, 448, (__int64)Block, (__int64)&v23, 1061997773, 6, 0, 0, 0);
    if ( si128.m128i_i64[1] > 0xFuLL )
    {
      v19 = Block[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v19 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v19);
      v17 = _mm_load_si128((const __m128i *)&xmmword_830F70);
    }
    Block[1] = &loc_3A73;
    si128 = v17;
    Block[0] = (void *)0x6F50746567726154LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, 80.0, -5.0);
    cocos2d::CCPoint::operator+(v24, &v23, v20);
    sub_3C3E00((_DWORD)a1, v12, 1, 71, (__int64)Block, (__int64)&v23, 1061997773, 6, 0, 0, 0);
    if ( si128.m128i_i64[1] > 0xFuLL )
    {
      v21 = Block[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v21 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v21);
    }
    v25 = Block;
    Block[1] = algn_7364 + 11;
    si128.m128i_i64[0] = 10;
    si128.m128i_i64[1] = 15;
    Block[0] = (void *)0x5020726579616C50LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v27, 80.0, -60.0);
    cocos2d::CCPoint::operator+(v24, &v23, v22);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      138,
      (__int64)Block,
      (const struct cocos2d::CCPoint *)&v23,
      1,
      0,
      0,
      1.0);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}

// Address: 0x394b90
// Method: SetupShaderEffectPopup::setupGlitch
// Hidden C++ exception states: #wind=4
char __fastcall SetupShaderEffectPopup_setupGlitch(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rcx
  void **v16; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v17[8]; // [rsp+88h] [rbp-78h] BYREF
  void **v18; // [rsp+90h] [rbp-70h] BYREF
  void **v19; // [rsp+98h] [rbp-68h] BYREF
  float v20[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v21; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-28h]

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1134231552, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    *(_OWORD *)Block = 0;
    Block[0] = (void *)sub_3C460(32);
    si128.m128i_i64[0] = 27;
    si128.m128i_i64[1] = 31;
    strcpy((char *)Block[0], "Setup Follow Player Command");
    sub_606E80(a1, Block);
    *(_OWORD *)Block = 0;
    si128.m128i_i64[0] = 2;
    si128.m128i_i64[1] = 15;
    strcpy((char *)Block, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)Block);
    v16 = Block;
    *(_OWORD *)Block = 0;
    si128 = 0u;
    Block[0] = (void *)sub_3C460(224);
    si128.m128i_i64[0] = 214;
    si128.m128i_i64[1] = 223;
    strcpy(
      (char *)Block[0],
      "Make a group of objects <cg>follow</c> the player's Y position.\n"
      "<cy>Speed</c> is how fast it snaps to the position. Leaving this at 1.0 makes it instantaneous.\n"
      "<cl>Max Speed</c> limits how fast the movement can be.");
    v21 = 0;
    v22 = 4;
    v23 = 15;
    strcpy((char *)&v21, "Help");
    sub_6070A0(a1, &v21, Block);
    sub_607470(a1);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v20);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v17, v20[0] * 0.5, v20[1] * 0.5);
    v19 = Block;
    *(_OWORD *)Block = 0;
    si128.m128i_i64[0] = 6;
    si128.m128i_i64[1] = 15;
    strcpy((char *)Block, "Speed:");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, -110.0, 105.0);
    cocos2d::CCPoint::operator+(v17, &v16, v8);
    sub_6088F0(
      (_DWORD)a1,
      90,
      (unsigned int)Block,
      (unsigned int)&v16,
      1061997773,
      0,
      1,
      10,
      0,
      0,
      1065353216,
      0,
      0,
      0,
      3,
      0);
    v18 = Block;
    *(_OWORD *)Block = 0;
    si128.m128i_i64[0] = 6;
    si128.m128i_i64[1] = 15;
    strcpy((char *)Block, "Delay:");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, 100.0, 105.0);
    cocos2d::CCPoint::operator+(v17, &v16, v9);
    sub_6088F0(
      (_DWORD)a1,
      91,
      (unsigned int)Block,
      (unsigned int)&v16,
      1061997773,
      0,
      1,
      10,
      0,
      0,
      1065353216,
      0,
      0,
      0,
      2,
      0);
    v18 = Block;
    Block[1] = 0;
    si128.m128i_i64[0] = 7;
    si128.m128i_i64[1] = 15;
    Block[0] = (void *)0x3A74657366664FLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, -110.0, 35.0);
    cocos2d::CCPoint::operator+(v17, &v16, v10);
    sub_6088F0(
      (_DWORD)a1,
      92,
      (unsigned int)Block,
      (unsigned int)&v16,
      1061997773,
      0,
      2,
      10,
      0,
      -1027080192,
      1120403456,
      0,
      0,
      0,
      0,
      0);
    v18 = Block;
    Block[1] = algn_3A64;
    si128.m128i_i64[0] = 10;
    si128.m128i_i64[1] = 15;
    Block[0] = (void *)0x656570532078614DLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, 100.0, 35.0);
    cocos2d::CCPoint::operator+(v17, &v16, v11);
    sub_6088F0(
      (_DWORD)a1,
      105,
      (unsigned int)Block,
      (unsigned int)&v16,
      1061997773,
      0,
      1,
      10,
      0,
      0,
      1120403456,
      0,
      0,
      0,
      1,
      0);
    v18 = Block;
    Block[1] = algn_3A64 + 1;
    si128.m128i_i64[0] = 10;
    si128.m128i_i64[1] = 15;
    Block[0] = (void *)0x6D69542065766F4DLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, -110.0, -35.0);
    cocos2d::CCPoint::operator+(v17, &v16, v12);
    sub_6088F0(
      (_DWORD)a1,
      10,
      (unsigned int)Block,
      (unsigned int)&v16,
      1061997773,
      0,
      1,
      10,
      0,
      0,
      1092616192,
      0,
      0,
      0,
      2,
      0);
    si128 = _mm_load_si128((const __m128i *)&xmmword_830FC0);
    strcpy((char *)Block, "Target Group ID");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, 100.0, -50.0);
    cocos2d::CCPoint::operator+(v17, &v16, v13);
    v14 = (_DWORD)a1 + 544;
    if ( !a1 )
      v14 = 0;
    sub_3C3E00((_DWORD)a1, v14, 1, 51, (__int64)Block, (__int64)&v16, 1061997773, 6, 0, 0, 0);
    if ( si128.m128i_i64[1] > 0xFuLL )
    {
      v15 = Block[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v15 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v15);
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}

// Address: 0x5e3150
// Method: SetupShaderEffectPopup::setupGrayscale
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupShaderEffectPopup_setupGrayscale(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  const char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  __int128 *v17; // [rsp+80h] [rbp-39h] BYREF
  __int128 *v18; // [rsp+88h] [rbp-31h] BYREF
  __int128 v19; // [rsp+90h] [rbp-29h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-19h]
  __int64 v21; // [rsp+A8h] [rbp-11h]
  __int128 v22; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+7h]
  __int64 v24; // [rsp+C8h] [rbp+Fh]
  char v25; // [rsp+128h] [rbp+6Fh] BYREF
  float v26; // [rsp+130h] [rbp+77h] BYREF
  float v27; // [rsp+134h] [rbp+7Bh]
  __int128 *v28; // [rsp+138h] [rbp+7Fh] BYREF

  v20 = 15;
  v21 = 15;
  strcpy((char *)&v19, "Setup Grayscale");
  sub_606E80(a1, &v19);
  v28 = &v19;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v2 = sub_3C460(288);
  *(_QWORD *)&v19 = v2;
  v20 = 279;
  v21 = 287;
  v3 = v2;
  v4 = "Applies a <cg>grayscale</c> filter to the screen.\n"
       "<cy>Target</c> is how much of the filter to apply.\n"
       "<cl>FadeTime</c> is time until final state is reached.\n"
       "<cp>Tint Channel</c> lets you set a color channel to tint towards.\n"
       "<cr>UseLum</c> uses a different conversion to grayscale.";
  v5 = 2;
  do
  {
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *(_OWORD *)(v3 + 16) = *((_OWORD *)v4 + 1);
    *(_OWORD *)(v3 + 32) = *((_OWORD *)v4 + 2);
    *(_OWORD *)(v3 + 48) = *((_OWORD *)v4 + 3);
    *(_OWORD *)(v3 + 64) = *((_OWORD *)v4 + 4);
    *(_OWORD *)(v3 + 80) = *((_OWORD *)v4 + 5);
    *(_OWORD *)(v3 + 96) = *((_OWORD *)v4 + 6);
    v3 += 128;
    *(_OWORD *)(v3 - 16) = *((_OWORD *)v4 + 7);
    v4 += 128;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v3 = *(_OWORD *)v4;
  *(_DWORD *)(v3 + 16) = *((_DWORD *)v4 + 4);
  *(_WORD *)(v3 + 20) = *((_WORD *)v4 + 10);
  *(_BYTE *)(v3 + 22) = v4[22];
  *(_BYTE *)(v2 + 279) = 0;
  v22 = 0;
  v23 = 4;
  v24 = 15;
  strcpy((char *)&v22, "Help");
  sub_6070A0(a1, &v22, &v19);
  v7 = cocos2d::CCDirector::sharedDirector(v6);
  cocos2d::CCDirector::getWinSize(v7, &v26);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, v26 * 0.5, (float)(v27 * 0.5) + 85.0);
  v17 = &v19;
  v20 = 7;
  v21 = 15;
  v19 = 0x3A746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, -100.0, 0.0);
  cocos2d::CCPoint::operator+(&v25, &v28, v8);
  SetupTriggerPopup_createValueControl(a1, 176, (__int64)&v19, (const struct cocos2d::CCPoint *)&v28, 1060320051, 0, 0);
  v18 = &v19;
  *((_QWORD *)&v19 + 1) = 58;
  v20 = 9;
  v21 = 15;
  *(_QWORD *)&v19 = 0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, 100.0, 0.0);
  cocos2d::CCPoint::operator+(&v25, &v28, v9);
  SetupTriggerPopup_createValueControl(a1, 10, (__int64)&v19, (const struct cocos2d::CCPoint *)&v28, 1060320051, 0, 0);
  v18 = &v19;
  v19 = 0;
  v20 = 6;
  v21 = 15;
  strcpy((char *)&v19, "UseLum");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, 55.0, -55.0);
  cocos2d::CCPoint::operator+(&v25, &v28, v10);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    188,
    (__int64)&v19,
    (const struct cocos2d::CCPoint *)&v28,
    0,
    0,
    0,
    1.0);
  v18 = &v22;
  v22 = 0;
  v23 = 1;
  v24 = 15;
  LOWORD(v22) = 32;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, -24.0, -55.0);
  cocos2d::CCPoint::operator+(&v25, &v28, v11);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    190,
    (__int64)&v22,
    (const struct cocos2d::CCPoint *)&v28,
    0,
    0,
    0,
    1.0);
  v18 = &v19;
  v20 = 13;
  v21 = 15;
  strcpy((char *)&v19, "Tint\nChannel:");
  HIWORD(v19) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, -100.0, -55.0);
  cocos2d::CCPoint::operator+(&v25, &v28, v12);
  sub_6088F0(a1, 51, (unsigned int)&v19, (unsigned int)&v28, 1060320051, 1, 2, 6, 0, 0, 0, 0, 0, 0, 2, 0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, 0.0, -100.0);
  cocos2d::CCPoint::operator+(&v25, &v28, v13);
  return sub_60EDA0(a1, (unsigned int)&v28, v14, v15, 0);
}

// Address: 0x5e3fe0
// Method: SetupShaderEffectPopup::setupHueShift
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupShaderEffectPopup_setupHueShift(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r8d
  int v8; // r9d
  __int128 *v10; // [rsp+80h] [rbp-29h] BYREF
  __int128 *v11; // [rsp+88h] [rbp-21h] BYREF
  __int128 v12; // [rsp+90h] [rbp-19h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-9h]
  __int64 v14; // [rsp+A8h] [rbp-1h]
  __int128 v15; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+17h]
  __int64 v17; // [rsp+C8h] [rbp+1Fh]
  char v18; // [rsp+118h] [rbp+6Fh] BYREF
  float v19; // [rsp+120h] [rbp+77h] BYREF
  float v20; // [rsp+124h] [rbp+7Bh]
  __int128 *v21; // [rsp+128h] [rbp+7Fh] BYREF

  v13 = 15;
  v14 = 15;
  strcpy((char *)&v12, "Setup Hue Shift");
  sub_606E80(a1, &v12);
  v21 = &v12;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  *(_QWORD *)&v12 = sub_3C460(160);
  v13 = 146;
  v14 = 159;
  strcpy(
    (char *)v12,
    "Changes the <cg>hue</c> of the screen.\n"
    "<cy>Degrees</c> is how much the colors should shift.\n"
    "<cl>FadeTime</c> is time until final state is reached.");
  v15 = 0;
  v16 = 4;
  v17 = 15;
  strcpy((char *)&v15, "Help");
  sub_6070A0(a1, &v15, &v12);
  v3 = cocos2d::CCDirector::sharedDirector(v2);
  cocos2d::CCDirector::getWinSize(v3, &v19);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, v19 * 0.5, (float)(v20 * 0.5) + 85.0);
  v10 = &v15;
  v16 = 8;
  v17 = 15;
  v15 = 0x3A73656572676544uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, -100.0, 0.0);
  cocos2d::CCPoint::operator+(&v18, &v21, v4);
  sub_6088F0(
    a1,
    176,
    (unsigned int)&v15,
    (unsigned int)&v21,
    1060320051,
    0,
    2,
    6,
    0,
    -1020002304,
    1127481344,
    0,
    0,
    0,
    2,
    0);
  v11 = &v12;
  *((_QWORD *)&v12 + 1) = 58;
  v13 = 9;
  v14 = 15;
  *(_QWORD *)&v12 = 0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v10, 100.0, 0.0);
  cocos2d::CCPoint::operator+(&v18, &v21, v5);
  SetupTriggerPopup_createValueControl(a1, 10, (__int64)&v12, (const struct cocos2d::CCPoint *)&v21, 1060320051, 0, 0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, 0.0, -100.0);
  cocos2d::CCPoint::operator+(&v18, &v21, v6);
  return sub_60EDA0(a1, (unsigned int)&v21, v7, v8, 0);
}

// Address: 0x5e3980
// Method: SetupShaderEffectPopup::setupInvertColor
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupShaderEffectPopup_setupInvertColor(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  const char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r9d
  __int128 *v20; // [rsp+40h] [rbp-49h] BYREF
  __int128 *v21; // [rsp+48h] [rbp-41h] BYREF
  __int128 v22; // [rsp+50h] [rbp-39h] BYREF
  __int64 v23; // [rsp+60h] [rbp-29h]
  __int64 v24; // [rsp+68h] [rbp-21h]
  __int128 v25; // [rsp+70h] [rbp-19h] BYREF
  __int64 v26; // [rsp+80h] [rbp-9h]
  __int64 v27; // [rsp+88h] [rbp-1h]
  char v28; // [rsp+F8h] [rbp+6Fh] BYREF
  float v29; // [rsp+100h] [rbp+77h] BYREF
  float v30; // [rsp+104h] [rbp+7Bh]
  __int128 *v31; // [rsp+108h] [rbp+7Fh] BYREF

  v22 = 0;
  *(_QWORD *)&v22 = sub_3C460(32);
  v23 = 18;
  v24 = 31;
  strcpy((char *)v22, "Setup Invert Color");
  sub_606E80(a1, &v22);
  v31 = &v22;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v2 = sub_3C460(432);
  *(_QWORD *)&v22 = v2;
  v23 = 429;
  v24 = 431;
  v3 = v2;
  v4 = "<cg>Inverts colors</c> on the screen.\n"
       "<cy>Target</c> is how much of the filter to apply.\n"
       "<cl>FadeTime</c> is time until final state is reached.\n"
       "<cp>R, G, and B</c> let you customize the filter color.\n"
       "<cr>EditRGB</c> allows editing the above values.\n"
       "<co>TweenRGB</c> makes transitions smoother.\n"
       "<ca>ClampRGB</c> limits these values to 1.\n"
       "<cy>Tip:</c> Use ClampRGB and set an R, G or B value\n"
       "over 1 to avoid the middle grey effect.";
  v5 = 3;
  do
  {
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *(_OWORD *)(v3 + 16) = *((_OWORD *)v4 + 1);
    *(_OWORD *)(v3 + 32) = *((_OWORD *)v4 + 2);
    *(_OWORD *)(v3 + 48) = *((_OWORD *)v4 + 3);
    *(_OWORD *)(v3 + 64) = *((_OWORD *)v4 + 4);
    *(_OWORD *)(v3 + 80) = *((_OWORD *)v4 + 5);
    *(_OWORD *)(v3 + 96) = *((_OWORD *)v4 + 6);
    v3 += 128;
    *(_OWORD *)(v3 - 16) = *((_OWORD *)v4 + 7);
    v4 += 128;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v3 = *(_OWORD *)v4;
  *(_OWORD *)(v3 + 16) = *((_OWORD *)v4 + 1);
  *(_QWORD *)(v3 + 32) = *((_QWORD *)v4 + 4);
  *(_DWORD *)(v3 + 40) = *((_DWORD *)v4 + 10);
  *(_BYTE *)(v3 + 44) = v4[44];
  *(_BYTE *)(v2 + 429) = 0;
  v25 = 0;
  v26 = 4;
  v27 = 15;
  strcpy((char *)&v25, "Help");
  sub_6070A0(a1, &v25, &v22);
  v7 = cocos2d::CCDirector::sharedDirector(v6);
  cocos2d::CCDirector::getWinSize(v7, &v29);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, v29 * 0.5, (float)(v30 * 0.5) + 90.0);
  v20 = &v22;
  v23 = 7;
  v24 = 15;
  v22 = 0x3A746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, -100.0, 0.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v8);
  SetupTriggerPopup_createValueControl(a1, 176, (__int64)&v22, (const struct cocos2d::CCPoint *)&v31, 1060320051, 0, 0);
  v21 = &v22;
  *((_QWORD *)&v22 + 1) = 58;
  v23 = 9;
  v24 = 15;
  *(_QWORD *)&v22 = 0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 100.0, 0.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v9);
  SetupTriggerPopup_createValueControl(a1, 10, (__int64)&v22, (const struct cocos2d::CCPoint *)&v31, 1060320051, 0, 0);
  v21 = &v25;
  v25 = 0;
  v26 = 2;
  v27 = 15;
  strcpy((char *)&v25, "R:");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, -130.0, -50.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v10);
  SetupTriggerPopup_createValueControl(a1, 179, (__int64)&v25, (const struct cocos2d::CCPoint *)&v31, 1058642330, 0, 0);
  v21 = &v25;
  v25 = 0;
  v26 = 2;
  v27 = 15;
  strcpy((char *)&v25, "G:");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 0.0, -50.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v11);
  SetupTriggerPopup_createValueControl(a1, 180, (__int64)&v25, (const struct cocos2d::CCPoint *)&v31, 1058642330, 0, 0);
  v21 = &v25;
  v25 = 0;
  v26 = 2;
  v27 = 15;
  strcpy((char *)&v25, "B:");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 130.0, -50.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v12);
  SetupTriggerPopup_createValueControl(a1, 189, (__int64)&v25, (const struct cocos2d::CCPoint *)&v31, 1058642330, 0, 0);
  v21 = &v22;
  v23 = 7;
  v24 = 15;
  v22 = 0x42475274696445uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, -130.0, -105.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v13);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    188,
    (__int64)&v22,
    (const struct cocos2d::CCPoint *)&v31,
    0,
    0,
    0,
    1.0);
  v21 = &v25;
  v26 = 8;
  v27 = 15;
  v25 = 0x4247526E65657754uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, -30.0, -105.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v14);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    190,
    (__int64)&v25,
    (const struct cocos2d::CCPoint *)&v31,
    0,
    0,
    0,
    1.0);
  v21 = &v25;
  v26 = 8;
  v27 = 15;
  v25 = 0x424752706D616C43uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 70.0, -105.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v15);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    194,
    (__int64)&v25,
    (const struct cocos2d::CCPoint *)&v31,
    0,
    0,
    0,
    1.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 0.0, -140.0);
  cocos2d::CCPoint::operator+(&v28, &v31, v16);
  return sub_60EDA0(a1, (unsigned int)&v31, v17, v18, 0);
}

// Address: 0x5ac310
// Method: SetupShaderEffectPopup::setupPinch
// Hidden C++ exception states: #wind=3
char __fastcall SetupShaderEffectPopup_setupPinch(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  float v8; // xmm6_4
  int v9; // edi
  float v10; // xmm7_4
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  void **v15; // [rsp+60h] [rbp-49h] BYREF
  float v16[2]; // [rsp+68h] [rbp-41h] BYREF
  void *v17[2]; // [rsp+70h] [rbp-39h] BYREF
  __m128i v18; // [rsp+80h] [rbp-29h]
  void *Block[2]; // [rsp+90h] [rbp-19h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-9h]

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1128792064, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v18.m128i_i64[0] = 15;
    v18.m128i_i64[1] = 15;
    strcpy((char *)v17, "Collision State");
    sub_606E80(a1, v17);
    *(_OWORD *)v17 = 0;
    v18.m128i_i64[0] = 2;
    v18.m128i_i64[1] = 15;
    strcpy((char *)v17, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)v17);
    v15 = v17;
    *(_OWORD *)v17 = 0;
    v18 = 0u;
    v17[0] = (void *)sub_3C460(160);
    v18.m128i_i64[0] = 149;
    v18.m128i_i64[1] = 159;
    strcpy(
      (char *)v17[0],
      "Activates a group when the player collides with the hitbox.\n"
      "<cg>State On</c> is activated upon entering.\n"
      "<cy>State Off</c> is activated upon exiting.");
    *(_OWORD *)Block = 0;
    si128.m128i_i64[0] = 4;
    si128.m128i_i64[1] = 15;
    strcpy((char *)Block, "Help");
    sub_6070A0(a1, Block, v17);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v16);
    v8 = v16[0] * 0.5;
    si128 = _mm_load_si128((const __m128i *)&xmmword_830F50);
    Block[0] = (void *)0x6E4F206574617453LL;
    Block[1] = 0;
    v9 = (_DWORD)a1 + 544;
    if ( !a1 )
      v9 = 0;
    v10 = (float)((float)(v16[1] * 0.5) + 70.0) - 60.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, v8 - 70.0, v10);
    sub_3C3E00((_DWORD)a1, v9, 1, 51, (__int64)Block, v11, 1060320051, 6, 0, 0, 0);
    if ( si128.m128i_i64[1] > 0xFuLL )
    {
      v12 = Block[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v12 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v12);
    }
    v17[1] = algn_65 + 1;
    v18 = _mm_load_si128((const __m128i *)&xmmword_830F60);
    v17[0] = (void *)0x664F206574617453LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, v8 + 70.0, v10);
    sub_3C3E00((_DWORD)a1, v9, 1, 71, (__int64)v17, v13, 1060320051, 6, 0, 0, 0);
    if ( v18.m128i_i64[1] > 0xFuLL )
    {
      v14 = v17[0];
      if ( (unsigned __int64)(v18.m128i_i64[1] + 1) >= 0x1000 )
      {
        v14 = (void *)*((_QWORD *)v17[0] - 1);
        if ( (unsigned __int64)((char *)v17[0] - (char *)v14 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v14);
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}

// Address: 0x5df560
// Method: SetupShaderEffectPopup::setupPixelate
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupShaderEffectPopup_setupPixelate(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  const struct cocos2d::CCPoint *v11; // rax
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int128 *v16; // [rsp+40h] [rbp-59h] BYREF
  __int128 *v17; // [rsp+48h] [rbp-51h] BYREF
  __int128 v18; // [rsp+50h] [rbp-49h] BYREF
  __int64 v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  __int128 v21; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  char v24; // [rsp+108h] [rbp+6Fh] BYREF
  float v25; // [rsp+110h] [rbp+77h] BYREF
  float v26; // [rsp+114h] [rbp+7Bh]
  __int128 *v27; // [rsp+118h] [rbp+7Fh] BYREF

  v19 = 14;
  v20 = 15;
  strcpy((char *)&v18, "Setup Pixelate");
  HIBYTE(v18) = 0;
  sub_606E80(a1, &v18);
  v27 = &v18;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  *(_QWORD *)&v18 = sub_3C460(224);
  v19 = 208;
  v20 = 223;
  strcpy(
    (char *)v18,
    "<cg>Pixelates</c> the screen.\n"
    "<cy>TargetX and TargetY</c> define how strong the effect is.\n"
    "<cl>FadeTime</c> is time until final state is reached.\n"
    "<cp>Snap Grid</c> makes the pixels align with the game camera.");
  v21 = 0;
  v22 = 4;
  v23 = 15;
  strcpy((char *)&v21, "Help");
  sub_6070A0(a1, &v21, &v18);
  v3 = cocos2d::CCDirector::sharedDirector(v2);
  cocos2d::CCDirector::getWinSize(v3, &v25);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, v25 * 0.5, (float)(v26 * 0.5) + 95.0);
  v16 = &v21;
  v22 = 8;
  v23 = 15;
  v21 = 0x3A58746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, -100.0, 0.0);
  cocos2d::CCPoint::operator+(&v24, &v27, v4);
  SetupTriggerPopup_createValueControl(
    a1,
    180,
    (__int64)&v21,
    (const struct cocos2d::CCPoint *)&v27,
    1058642330,
    0,
    1092616192);
  v17 = &v21;
  v22 = 8;
  v23 = 15;
  v21 = 0x3A59746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, 100.0, 0.0);
  cocos2d::CCPoint::operator+(&v24, &v27, v5);
  SetupTriggerPopup_createValueControl(
    a1,
    189,
    (__int64)&v21,
    (const struct cocos2d::CCPoint *)&v27,
    1058642330,
    0,
    1092616192);
  v17 = &v18;
  *((_QWORD *)&v18 + 1) = 58;
  v19 = 9;
  v20 = 15;
  *(_QWORD *)&v18 = 0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, -100.0, -40.0);
  cocos2d::CCPoint::operator+(&v24, &v27, v6);
  SetupTriggerPopup_createValueControl(a1, 10, (__int64)&v18, (const struct cocos2d::CCPoint *)&v27, 1058642330, 0, 0);
  v17 = &v18;
  v18 = 0;
  v19 = 5;
  v20 = 15;
  strcpy((char *)&v18, "Use X");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, 45.0, -45.0);
  cocos2d::CCPoint::operator+(&v24, &v27, v7);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    188,
    (__int64)&v18,
    (const struct cocos2d::CCPoint *)&v27,
    0,
    0,
    0,
    1.0);
  v17 = &v18;
  v18 = 0;
  v19 = 5;
  v20 = 15;
  strcpy((char *)&v18, "Use Y");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, 130.0, -45.0);
  cocos2d::CCPoint::operator+(&v24, &v27, v8);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    190,
    (__int64)&v18,
    (const struct cocos2d::CCPoint *)&v27,
    0,
    0,
    0,
    1.0);
  v17 = &v18;
  *((_QWORD *)&v18 + 1) = 100;
  v19 = 9;
  v20 = 15;
  *(_QWORD *)&v18 = 0x6972472070616E53LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, -155.0, -85.0);
  cocos2d::CCPoint::operator+(&v24, &v27, v9);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    194,
    (__int64)&v18,
    (const struct cocos2d::CCPoint *)&v27,
    0,
    0,
    0,
    1.0);
  v17 = &v18;
  *((_QWORD *)&v18 + 1) = 29541;
  v19 = 10;
  v20 = 15;
  *(_QWORD *)&v18 = 0x6764452064726148LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, 45.0, -85.0);
  cocos2d::CCPoint::operator+(&v24, &v27, v10);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    515,
    (__int64)&v18,
    (const struct cocos2d::CCPoint *)&v27,
    0,
    0,
    0,
    1.0);
  v27 = &v21;
  v22 = 8;
  v23 = 15;
  v21 = 0x65766974616C6552uLL;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v17,
    (float)((float)((float)(*(float *)(a1 + 732) * 0.5) + (float)(v25 * 0.5)) - 72.0) - 90.0,
    (float)((float)(v26 * 0.5) - (float)(*(float *)(a1 + 736) * 0.5)) + 20.0);
  SetupTriggerPopup_createToggleValueControl(a1, 514, (__int64)&v21, v11, 0, 0, 0, 1.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, 0.0, -120.0);
  cocos2d::CCPoint::operator+(&v24, &v27, v12);
  return sub_60EDA0(a1, (unsigned int)&v27, v13, v14, 0);
}

// Address: 0x5e3650
// Method: SetupShaderEffectPopup::setupSepia
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupShaderEffectPopup_setupSepia(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // r8d
  int v8; // r9d
  __int128 *v10; // [rsp+40h] [rbp-29h] BYREF
  __int128 *v11; // [rsp+48h] [rbp-21h] BYREF
  __int128 v12; // [rsp+50h] [rbp-19h] BYREF
  __int64 v13; // [rsp+60h] [rbp-9h]
  __int64 v14; // [rsp+68h] [rbp-1h]
  __int128 v15; // [rsp+70h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  char v18; // [rsp+D8h] [rbp+6Fh] BYREF
  float v19; // [rsp+E0h] [rbp+77h] BYREF
  float v20; // [rsp+E4h] [rbp+7Bh]
  __int128 *v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v13 = 11;
  v14 = 15;
  *(_QWORD *)&v12 = 0x6553207075746553LL;
  *((_QWORD *)&v12 + 1) = 6383984;
  sub_606E80(a1, &v12);
  v21 = &v12;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  *(_QWORD *)&v12 = sub_3C460(160);
  v13 = 151;
  v14 = 159;
  strcpy(
    (char *)v12,
    "Applies a <cg>sepia</c> filter to the screen.\n"
    "<cy>Target</c> is how much of the filter to apply.\n"
    "<cl>FadeTime</c> is time until final state is reached.");
  v15 = 0;
  v16 = 4;
  v17 = 15;
  strcpy((char *)&v15, "Help");
  sub_6070A0(a1, &v15, &v12);
  v3 = cocos2d::CCDirector::sharedDirector(v2);
  cocos2d::CCDirector::getWinSize(v3, &v19);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, v19 * 0.5, (float)(v20 * 0.5) + 85.0);
  v10 = &v12;
  v13 = 7;
  v14 = 15;
  v12 = 0x3A746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, -100.0, 0.0);
  cocos2d::CCPoint::operator+(&v18, &v21, v4);
  SetupTriggerPopup_createValueControl(a1, 176, (__int64)&v12, (const struct cocos2d::CCPoint *)&v21, 1060320051, 0, 0);
  v11 = &v12;
  *((_QWORD *)&v12 + 1) = 58;
  v13 = 9;
  v14 = 15;
  *(_QWORD *)&v12 = 0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v10, 100.0, 0.0);
  cocos2d::CCPoint::operator+(&v18, &v21, v5);
  SetupTriggerPopup_createValueControl(a1, 10, (__int64)&v12, (const struct cocos2d::CCPoint *)&v21, 1060320051, 0, 0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, 0.0, -100.0);
  cocos2d::CCPoint::operator+(&v18, &v21, v6);
  return sub_60EDA0(a1, (unsigned int)&v21, v7, v8, 0);
}

// Address: 0x5db000
// Method: SetupShaderEffectPopup::setupShaderTrigger
// Hidden C++ exception states: #wind=5
unsigned int __fastcall SetupShaderEffectPopup_setupShaderTrigger(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  const struct cocos2d::CCPoint *v4; // rax
  const struct cocos2d::CCPoint *v5; // rax
  __int64 v6; // rcx
  cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r12
  unsigned int i; // r14d
  __int64 *v13; // rax
  __int64 v14; // rbx
  cocos2d::CCObject *v15; // rsi
  cocos2d::CCObject *v16; // rbx
  cocos2d::CCArray *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // r14
  cocos2d::CCArray *v26; // r13
  __int64 v27; // rcx
  cocos2d::CCArray *v28; // rbx
  struct cocos2d::CCObject *v29; // rax
  struct cocos2d::CCObject *v30; // rax
  unsigned int *v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r12
  int v35; // esi
  float v36; // xmm6_4
  unsigned int *v37; // rbx
  __int64 v38; // rax
  __int64 *v39; // rbx
  __int64 *v40; // r14
  double TriggerValue; // xmm0_8
  int v42; // esi
  char v44; // [rsp+50h] [rbp-69h]
  float v45; // [rsp+58h] [rbp-61h] BYREF
  float v46; // [rsp+5Ch] [rbp-5Dh]
  __int128 v47; // [rsp+60h] [rbp-59h] BYREF
  __int64 v48; // [rsp+70h] [rbp-49h]
  __int64 v49; // [rsp+78h] [rbp-41h]
  __int128 *v50; // [rsp+80h] [rbp-39h] BYREF
  __int128 *v51; // [rsp+88h] [rbp-31h] BYREF
  __int128 v52; // [rsp+90h] [rbp-29h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-19h]
  __int64 v54; // [rsp+A8h] [rbp-11h]

  v47 = 0;
  *(_QWORD *)&v47 = sub_3C460(32);
  v48 = 20;
  v49 = 31;
  strcpy((char *)v47, "Setup Shader Trigger");
  sub_606E80(a1, &v47);
  v50 = &v47;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  *(_QWORD *)&v47 = sub_3C460(160);
  v48 = 159;
  v49 = 159;
  strcpy(
    (char *)v47,
    "Edits how other <cg>shader effects</c> work. They can be limited to certain layers or disabled entirely.\n"
    "<cy>Disable All</c> disables all other shader effects.");
  v52 = 0;
  v53 = 4;
  v54 = 15;
  strcpy((char *)&v52, "Help");
  sub_6070A0(a1, &v52, &v47);
  v3 = cocos2d::CCDirector::sharedDirector(v2);
  cocos2d::CCDirector::getWinSize(v3, &v45);
  v50 = &v47;
  v48 = 11;
  v49 = 15;
  *(_QWORD *)&v47 = 0x20656C6261736944LL;
  *((_QWORD *)&v47 + 1) = 7105601;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v51, v45 * 0.5, (float)(v46 * 0.5) + 90.0);
  SetupTriggerPopup_createToggleValueControl(a1, 192, (__int64)&v47, v4, 0, 0, 0, 1.0);
  v51 = &v47;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  *(_QWORD *)&v47 = sub_3C460(32);
  v48 = 19;
  v49 = 31;
  strcpy((char *)v47, "No Player\nParticles");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v50, v45 * 0.5, (float)(v46 * 0.5) + 50.0);
  SetupTriggerPopup_createToggleValueControl(a1, 188, (__int64)&v47, v5, 0, 0, 0, 1.0);
  v7 = (cocos2d::CCObject *)cocos2d::CCArray::create(v6);
  *(_QWORD *)(a1 + 1000) = v7;
  cocos2d::CCObject::retain(v7);
  v9 = cocos2d::CCArray::create(v8);
  v11 = cocos2d::CCArray::create(v10);
  for ( i = 1; (int)i <= 15; ++i )
  {
    v13 = (__int64 *)sub_5DB710(&v52, i);
    v14 = (__int64)v13;
    if ( (unsigned __int64)v13[3] > 0xF )
      v14 = *v13;
    v51 = (__int128 *)operator new(0x2C8u);
    v15 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v51);
    if ( v15 )
    {
      if ( ButtonSprite_init(
             (__int64)v15,
             v14,
             220,
             0,
             1050253722,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_04.png",
             1103626240) )
      {
        cocos2d::CCObject::autorelease(v15);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1);
        v15 = 0;
      }
    }
    sub_3C310(&v52);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 1000), v15);
    v50 = (__int128 *)operator new(0x208u);
    v16 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v50);
    if ( v16 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v16, (_DWORD)v15, 0, a1, (__int64)sub_5DBA00) )
      {
        cocos2d::CCObject::autorelease(v16);
        goto LABEL_13;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1);
    }
    v16 = 0;
LABEL_13:
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v16 + 64LL))(v16, i);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v15 + 64LL))(v15, i);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v16);
    v17 = (cocos2d::CCArray *)v11;
    if ( i <= 7 )
      v17 = (cocos2d::CCArray *)v9;
    cocos2d::CCArray::addObject(v17, v16);
  }
  v18 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v51, v45 * 0.5, v46 * 0.5);
  cocos2d::CCNode::convertToNodeSpace(v18, &v50, v19);
  GameToolbox_alignItemsHorisontally(v9, 8.0, v20, 0);
  v21 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v51, v45 * 0.5, (float)(v46 * 0.5) - 40.0);
  cocos2d::CCNode::convertToNodeSpace(v21, &v50, v22);
  GameToolbox_alignItemsHorisontally(v11, 8.0, v23, 0);
  v25 = 0;
  v44 = 0;
  if ( *(_QWORD *)(a1 + 680) )
  {
    v26 = (cocos2d::CCArray *)cocos2d::CCArray::create(v24);
    cocos2d::CCArray::addObject(v26, *(struct cocos2d::CCObject **)(a1 + 680));
  }
  else
  {
    v26 = *(cocos2d::CCArray **)(a1 + 688);
  }
  if ( !v26 )
    goto LABEL_42;
  if ( !cocos2d::CCArray::count(v26) )
    goto LABEL_42;
  v28 = (cocos2d::CCArray *)cocos2d::CCArray::create(v27);
  v29 = cocos2d::CCInteger::create(196);
  cocos2d::CCArray::addObject(v28, v29);
  v30 = cocos2d::CCInteger::create(197);
  cocos2d::CCArray::addObject(v28, v30);
  if ( !v28 )
    goto LABEL_42;
  v31 = (unsigned int *)*((_QWORD *)v28 + 7);
  v32 = *v31;
  if ( !(_DWORD)v32 )
    goto LABEL_42;
  v33 = *((_QWORD *)v31 + 2);
  v34 = v33 + 8 * (v32 - 1);
  if ( v33 > v34 )
    goto LABEL_42;
  while ( 2 )
  {
    if ( *(_QWORD *)v33 )
    {
      v35 = *(_DWORD *)(*(_QWORD *)v33 + 56LL);
      v36 = -9999.0;
      v37 = (unsigned int *)*((_QWORD *)v26 + 7);
      v38 = *v37;
      if ( (_DWORD)v38 )
      {
        v39 = (__int64 *)*((_QWORD *)v37 + 2);
        v40 = &v39[v38 - 1];
        if ( v39 <= v40 )
        {
          do
          {
            if ( !*v39 )
              break;
            TriggerValue = SetupTriggerPopup_getTriggerValue(a1, v35, *v39);
            if ( v36 == -9999.0 )
            {
              v36 = *(float *)&TriggerValue;
            }
            else if ( v36 != *(float *)&TriggerValue )
            {
              goto LABEL_33;
            }
            ++v39;
          }
          while ( v39 <= v40 );
          if ( v36 != -9998.0 )
            goto LABEL_34;
LABEL_33:
          v25 = 1;
          v44 = 1;
LABEL_39:
          v33 += 8LL;
          if ( v33 > v34 )
            break;
          continue;
        }
LABEL_34:
        v25 = v44;
      }
      v42 = v35 - 196;
      if ( v42 )
      {
        if ( v42 == 1 )
          *(_DWORD *)(a1 + 1012) = (int)v36;
      }
      else
      {
        *(_DWORD *)(a1 + 1008) = (int)v36;
      }
      goto LABEL_39;
    }
    break;
  }
  if ( v25 )
  {
    *(_QWORD *)(a1 + 1008) = 0;
    return SetupShaderEffectPopup_updateZLayerButtons(a1);
  }
LABEL_42:
  if ( *(int *)(a1 + 1008) <= 0 )
    *(_DWORD *)(a1 + 1008) = 1;
  if ( *(int *)(a1 + 1012) <= 0 )
    *(_DWORD *)(a1 + 1012) = 15;
  return SetupShaderEffectPopup_updateZLayerButtons(a1);
}

// Address: 0x5e4bd0
// Method: SetupShaderEffectPopup::setupSplitScreen
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupShaderEffectPopup_setupSplitScreen(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  __int128 *v13; // [rsp+40h] [rbp-59h] BYREF
  __int128 *v14; // [rsp+48h] [rbp-51h] BYREF
  __int128 v15; // [rsp+50h] [rbp-49h] BYREF
  __int64 v16; // [rsp+60h] [rbp-39h]
  __int64 v17; // [rsp+68h] [rbp-31h]
  __int128 v18; // [rsp+70h] [rbp-29h] BYREF
  __int64 v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  char v21; // [rsp+108h] [rbp+6Fh] BYREF
  float v22; // [rsp+110h] [rbp+77h] BYREF
  float v23; // [rsp+114h] [rbp+7Bh]
  __int128 *v24; // [rsp+118h] [rbp+7Fh] BYREF

  v15 = 0;
  *(_QWORD *)&v15 = sub_3C460(32);
  v16 = 18;
  v17 = 31;
  strcpy((char *)v15, "Setup Split Screen");
  sub_606E80(a1, &v15);
  v24 = &v15;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  *(_QWORD *)&v15 = sub_3C460(224);
  v16 = 212;
  v17 = 223;
  strcpy(
    (char *)v15,
    "<cg>Splits the screen</c> in several sections.\n"
    "<cy>Use X and Y</c> set which direction to split in.\n"
    "<cl>TargetX and TargetY</c> set how many sections to add.\n"
    "<cp>FadeTime</c> is time until final state is reached.");
  v18 = 0;
  v19 = 4;
  v20 = 15;
  strcpy((char *)&v18, "Help");
  sub_6070A0(a1, &v18, &v15);
  v3 = cocos2d::CCDirector::sharedDirector(v2);
  cocos2d::CCDirector::getWinSize(v3, &v22);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, v22 * 0.5, (float)(v23 * 0.5) + 85.0);
  v13 = &v18;
  v19 = 8;
  v20 = 15;
  v18 = 0x3A58746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, -100.0, 0.0);
  cocos2d::CCPoint::operator+(&v21, &v24, v4);
  SetupTriggerPopup_createValueControl(
    a1,
    180,
    (__int64)&v18,
    (const struct cocos2d::CCPoint *)&v24,
    1060320051,
    -1065353216,
    1077936128);
  v14 = &v18;
  v19 = 8;
  v20 = 15;
  v18 = 0x3A59746567726154uLL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, 100.0, 0.0);
  cocos2d::CCPoint::operator+(&v21, &v24, v5);
  SetupTriggerPopup_createValueControl(
    a1,
    189,
    (__int64)&v18,
    (const struct cocos2d::CCPoint *)&v24,
    1060320051,
    -1065353216,
    1077936128);
  v14 = &v15;
  *((_QWORD *)&v15 + 1) = 58;
  v16 = 9;
  v17 = 15;
  *(_QWORD *)&v15 = 0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, -100.0, -50.0);
  cocos2d::CCPoint::operator+(&v21, &v24, v6);
  SetupTriggerPopup_createValueControl(a1, 10, (__int64)&v15, (const struct cocos2d::CCPoint *)&v24, 1060320051, 0, 0);
  v14 = &v15;
  v15 = 0;
  v16 = 5;
  v17 = 15;
  strcpy((char *)&v15, "Use X");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, 45.0, -55.0);
  cocos2d::CCPoint::operator+(&v21, &v24, v7);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    188,
    (__int64)&v15,
    (const struct cocos2d::CCPoint *)&v24,
    0,
    0,
    0,
    1.0);
  v14 = &v15;
  v15 = 0;
  v16 = 5;
  v17 = 15;
  strcpy((char *)&v15, "Use Y");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, 130.0, -55.0);
  cocos2d::CCPoint::operator+(&v21, &v24, v8);
  SetupTriggerPopup_createToggleValueControl(
    a1,
    190,
    (__int64)&v15,
    (const struct cocos2d::CCPoint *)&v24,
    0,
    0,
    0,
    1.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, 0.0, -100.0);
  cocos2d::CCPoint::operator+(&v21, &v24, v9);
  return sub_60EDA0(a1, (unsigned int)&v24, v10, v11, 0);
}

// Address: 0x5e50b0
// Method: SetupShaderEffectPopup::valueDidChange
// Hidden C++ exception states: #wind=1
void __usercall SetupShaderEffectPopup_valueDidChange(
        __int64 a1@<rdx>,
        _DWORD *a2@<rcx>,
        _BOOL8 a3@<r8>,
        float a4@<xmm2>)
{
  int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 i; // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // rsi
  struct cocos2d::CCObject *v20; // rbx
  __int64 v21; // r8
  void *v22; // rcx
  void *Block[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v24; // [rsp+40h] [rbp-29h]
  __int64 v25; // [rsp+48h] [rbp-21h]
  __int128 v26; // [rsp+50h] [rbp-19h] BYREF
  __int64 v27; // [rsp+60h] [rbp-9h]
  __int64 v28; // [rsp+68h] [rbp-1h]

  v4 = a1;
  if ( (_DWORD)a1 == 513 )
  {
    if ( a4 == 0.0 )
      a1 = 0;
    else
      LOBYTE(a1) = 1;
    sub_6095A0(a2, a1);
    if ( a4 != 0.0 )
      goto LABEL_18;
    v7 = *((_QWORD *)a2 + 95);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 56);
      if ( v8 )
      {
        for ( i = *(_QWORD *)(v8 + 288); ; i = *(_QWORD *)(i + 288) )
        {
          v10 = *(_QWORD *)(v8 + 264);
          v11 = *(_QWORD *)a2;
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
          if ( (*(float (__fastcall **)(_DWORD *, _QWORD))(v11 + 1168))(a2, v12) == -909190.0 )
          {
            v13 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
            if ( cocos2d::CCDictionary::objectForKey(*((cocos2d::CCDictionary **)a2 + 94), v13) )
              (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)a2 + 1152LL))(a2, (unsigned int)v13, 0);
            else
              sub_60A5A0(a2, (unsigned int)v13);
            sub_60ABF0(a2, (unsigned int)v13);
          }
          v8 = i;
          if ( !i )
            break;
        }
      }
    }
    if ( a4 == 0.0 )
      v6 = 0;
    else
LABEL_18:
      LOBYTE(v6) = 1;
    (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a2 + 1088LL))(a2, 103, v6);
    return;
  }
  v14 = a2[255];
  if ( v14 == 2905 || (v15 = v14 - 2907, v15 <= 0xA) && (v16 = 1665, _bittest(&v16, v15)) )
  {
    if ( (_DWORD)a1 == 188 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64, bool))(*(_QWORD *)a2 + 1088LL))(a2, 100, a4 != 0.0);
      a3 = a4 == 0.0;
      v17 = 101;
    }
    else
    {
      if ( (_DWORD)a1 != 184 )
        goto LABEL_31;
      if ( a4 == 0.0 )
        a3 = 0;
      else
        LOBYTE(a3) = 1;
      v17 = 102;
    }
    (*(void (__fastcall **)(_DWORD *, __int64, _BOOL8))(*(_QWORD *)a2 + 1088LL))(a2, v17, a3);
  }
LABEL_31:
  v18 = a2[255];
  if ( v18 != 2905 && v18 != 2907 && (unsigned int)(v18 - 2913) > 4 || v4 != 138 && (unsigned int)(v4 - 200) > 1 )
    return;
  sub_60ABF0(a2, 51);
  *(_OWORD *)Block = 0;
  v24 = 1;
  v19 = 15;
  v25 = 15;
  LOWORD(Block[0]) = 48;
  if ( a4 == 0.0 )
    goto LABEL_53;
  if ( v4 == 138 )
  {
    v24 = 2;
    strcpy((char *)Block, "P1");
  }
  else
  {
    if ( cocos2d::CCDictionary::objectForKey(*((cocos2d::CCDictionary **)a2 + 94), 138) )
      (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)a2 + 1152LL))(a2, 138, 0);
    else
      sub_60A5A0(a2, 138);
    sub_60ABF0(a2, 138);
    if ( v4 == 200 )
    {
      v24 = 2;
      strcpy((char *)Block, "P2");
LABEL_48:
      if ( cocos2d::CCDictionary::objectForKey(*((cocos2d::CCDictionary **)a2 + 94), 201) )
        (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)a2 + 1152LL))(a2, 201, 0);
      else
        sub_60A5A0(a2, 201);
      sub_60ABF0(a2, 201);
      goto LABEL_53;
    }
  }
  if ( cocos2d::CCDictionary::objectForKey(*((cocos2d::CCDictionary **)a2 + 94), 200) )
    (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)a2 + 1152LL))(a2, 200, 0);
  else
    sub_60A5A0(a2, 200);
  sub_60ABF0(a2, 200);
  if ( v4 != 201 )
    goto LABEL_48;
  v24 = 1;
  LOWORD(Block[0]) = 67;
LABEL_53:
  v20 = cocos2d::CCDictionary::objectForKey(*((cocos2d::CCDictionary **)a2 + 95), 51);
  if ( v20 )
  {
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v21 = -1;
    do
      ++v21;
    while ( *((_BYTE *)Block + v21) );
    sub_3C230(&v26);
    CCTextInputNode_setString(v20, &v26);
    v19 = v25;
  }
  if ( v19 > 0xF )
  {
    v22 = Block[0];
    if ( v19 + 1 >= 0x1000 )
    {
      v22 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v22);
  }
}
