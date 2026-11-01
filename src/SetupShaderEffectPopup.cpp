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
