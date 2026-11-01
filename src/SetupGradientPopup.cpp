#include <Geode/binding/SetupGradientPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x5b2370
// Method: SetupGradientPopup::determineStartValues
void __fastcall SetupGradientPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rsi
  unsigned int v4; // ebp
  int v5; // edi
  int v6; // ebx
  struct cocos2d::CCObject *v7; // rax
  int v8; // eax

  SetupTriggerPopup_determineStartValues(a1); /*0x5b237b*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5b2380*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5b239a*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5b239d*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5b23a5*/
  }
  if ( v3 && cocos2d::CCArray::count(v3) ) /*0x5b23b8*/
  {
    v4 = 0; /*0x5b23d3*/
    v5 = -99999; /*0x5b23da*/
    v6 = -99999; /*0x5b23df*/
    if ( !cocos2d::CCArray::count(v3) ) /*0x5b23e6*/
      goto LABEL_17; /*0x5b23e6*/
    do /*0x5b2448*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x5b2405*/
      if ( v5 == -99999 ) /*0x5b2417*/
      {
        v5 = *((_DWORD *)v7 + 465); /*0x5b2419*/
      }
      else if ( v5 != *((_DWORD *)v7 + 465) ) /*0x5b241f*/
      {
        v5 = -9991; /*0x5b241f*/
      }
      v8 = *((_DWORD *)v7 + 464); /*0x5b2423*/
      if ( v6 == -99999 ) /*0x5b242f*/
      {
        v6 = v8; /*0x5b2431*/
      }
      else if ( v6 != v8 ) /*0x5b2437*/
      {
        v6 = -9991; /*0x5b2437*/
      }
      ++v4; /*0x5b243e*/
    }
    while ( v4 < cocos2d::CCArray::count(v3) ); /*0x5b2448*/
    if ( v5 != -9991 ) /*0x5b244d*/
LABEL_17:
      *(_DWORD *)(a1 + 1008) = v5; /*0x5b244f*/
    if ( v6 != -9991 ) /*0x5b2468*/
      *(_DWORD *)(a1 + 1024) = v6; /*0x5b246a*/
  }
}

// [2/6] Address: 0x5b2480
// Method: SetupGradientPopup::updateToggleItem
struct cocos2d::CCObject *__fastcall SetupGradientPopup_updateToggleItem(__int64 a1, int a2, unsigned __int8 a3)
{
  cocos2d::CCDictionary *v3; // rbx
  __int64 v6; // r14
  struct cocos2d::CCObject *v7; // rax
  struct cocos2d::CCObject *result; // rax

  v3 = *(cocos2d::CCDictionary **)(a1 + 832); /*0x5b249a*/
  v6 = a2; /*0x5b24a8*/
  v7 = cocos2d::CCFloat::create((float)a3); /*0x5b24b2*/
  cocos2d::CCDictionary::setObject(v3, v7, v6); /*0x5b24c1*/
  result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), v6); /*0x5b24d1*/
  if ( result ) /*0x5b24da*/
    result = (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, a3); /*0x5b24e3*/
  if ( (_DWORD)v6 == 207 ) /*0x5b24ef*/
    return (struct cocos2d::CCObject *)SetupGradientPopup_updateGradientLabels(a1, a3); /*0x5b24f8*/
  return result; /*0x5b24fd*/
}

// [3/6] Address: 0x5b2520
// Method: SetupGradientPopup::updateGradientLabels
unsigned int __fastcall SetupGradientPopup_updateGradientLabels(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v6; // rax
  const char *v7; // rdx

  v4 = 0; /*0x5b2535*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1032)); /*0x5b2537*/
  if ( result ) /*0x5b253f*/
  {
    while ( 1 ) /*0x5b2589*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1032), v4); /*0x5b2589*/
      if ( !v4 ) /*0x5b2593*/
      {
        v7 = "U:"; /*0x5b25d7*/
        if ( a2 ) /*0x5b25de*/
          v7 = (const char *)&unk_7EDB74; /*0x5b25de*/
        goto LABEL_17; /*0x5b25de*/
      }
      if ( v4 == 1 ) /*0x5b2598*/
      {
        v7 = "D:"; /*0x5b25c7*/
        if ( a2 ) /*0x5b25ce*/
          v7 = "BR:"; /*0x5b25ce*/
        goto LABEL_17; /*0x5b25ce*/
      }
      if ( v4 == 2 ) /*0x5b259d*/
        break; /*0x5b259d*/
      if ( v4 == 3 ) /*0x5b25a2*/
      {
        v7 = "R:"; /*0x5b25a7*/
        if ( a2 ) /*0x5b25ae*/
          v7 = "TR:"; /*0x5b25ae*/
LABEL_17:
        (**((void (__fastcall ***)(__int64, const char *))v6 + 45))((__int64)v6 + 360, v7); /*0x5b25e2*/
      }
      ++v4; /*0x5b25ee*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1032)); /*0x5b25f7*/
      if ( v4 >= result ) /*0x5b25ff*/
        return result; /*0x5b25ff*/
    }
    v7 = "L:"; /*0x5b25b7*/
    if ( a2 ) /*0x5b25be*/
      v7 = "TL:"; /*0x5b25be*/
    goto LABEL_17; /*0x5b25be*/
  }
  return result; /*0x5b2619*/
}

// [4/6] Address: 0x5b2630
// Method: SetupGradientPopup::onZLayer
__int64 __fastcall SetupGradientPopup_onZLayer(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int i; // edi
  struct cocos2d::CCObject *v7; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5b263f*/
  v4 = *(_QWORD *)(a1 + 680); /*0x5b2642*/
  *(_DWORD *)(a1 + 1024) = v3; /*0x5b2649*/
  if ( v4 ) /*0x5b2652*/
  {
    *(_DWORD *)(v4 + 1856) = v3; /*0x5b2654*/
    return sub_5B26C0(a1); /*0x5b2662*/
  }
  else
  {
    for ( i = 0; /*0x5b2675*/
          i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688));
          *((_DWORD *)v7 + 464) = *(_DWORD *)(a1 + 1024) )
    {
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), i++); /*0x5b2689*/
    }
    return sub_5B26C0(a1); /*0x5b26bb*/
  }
}

// [5/6] Address: 0x5b2810
// Method: SetupGradientPopup::updateBlendingLabel
void __fastcall SetupGradientPopup_updateBlendingLabel(__int64 a1)
{
  int v1; // edx
  const char *v2; // r8
  int v4; // edx
  int v5; // edx

  v1 = *(_DWORD *)(a1 + 1008); /*0x5b2816*/
  v2 = "Mixed"; /*0x5b281c*/
  if ( v1 != -99999 ) /*0x5b282c*/
  {
    v4 = v1 - 1; /*0x5b282e*/
    if ( v4 ) /*0x5b2831*/
    {
      v5 = v4 - 1; /*0x5b2833*/
      if ( v5 ) /*0x5b2836*/
      {
        if ( v5 == 1 ) /*0x5b283b*/
          v2 = "Invert"; /*0x5b2846*/
        else
          v2 = "Normal"; /*0x5b283d*/
      }
      else
      {
        v2 = "Multiply"; /*0x5b284f*/
      }
    }
    else
    {
      v2 = "Additive"; /*0x5b2858*/
    }
  }
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 1000) + 360LL))(*(_QWORD *)(a1 + 1000) + 360LL, v2); /*0x5b2873*/
  cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 1000), 150.0, 0.69999999, 0.0); /*0x5b2894*/
}

// [6/6] Address: 0x5b28a0
// Method: SetupGradientPopup::valueDidChange
void __fastcall SetupGradientPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, float a3)
{
  float v4; // xmm2_4

  if ( a2 == 209 ) /*0x5b28a9*/
  {
    v4 = 0.0; /*0x5b28ab*/
    if ( a3 >= 0.0 && (v4 = 999.0, a3 <= 999.0) ) /*0x5b28be*/
      sub_607BB0(a1); /*0x5b28ca*/
    else
      SetupTriggerPopup_updateValue(a1, 0xD1u, v4); /*0x5b28c5*/
  }
}
