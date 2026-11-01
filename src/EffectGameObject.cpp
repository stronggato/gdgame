#include <Geode/binding/EffectGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/23] Address: 0x11d690
// Method: EffectGameObject::playTriggerEffect
// Hidden C++ exception states: #wind=2
char __fastcall EffectGameObject_playTriggerEffect(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  float v10; // xmm9_4
  float v11; // xmm6_4
  float v12; // xmm10_4
  struct cocos2d::CCSprite *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  float v19; // xmm8_4
  float v20; // xmm10_4
  struct cocos2d::CCSprite *v21; // rbx
  struct cocos2d::CCSprite *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  bool GameVariable; // al
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  struct cocos2d::CCLabelBMFont *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  cocos2d::CCObject *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  _BYTE v41[8]; // [rsp+50h] [rbp-A8h] BYREF
  void *v42; // [rsp+58h] [rbp-A0h] BYREF
  _WORD v43[8]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-88h]
  __int64 v45; // [rsp+78h] [rbp-80h]
  float v46; // [rsp+118h] [rbp+20h] BYREF
  float v47; // [rsp+11Ch] [rbp+24h]

  result = sub_6060E0(a1, 0, 0, a4, 1125515264, 1, 0); /*0x11d6f7*/
  if ( result ) /*0x11d6fe*/
  {
    *(_QWORD *)(a1 + 1008) = a2; /*0x11d704*/
    *(_QWORD *)(a1 + 1016) = a3; /*0x11d70b*/
    v9 = cocos2d::CCDirector::sharedDirector(v8); /*0x11d712*/
    cocos2d::CCDirector::getWinSize(v9, &v46); /*0x11d723*/
    v10 = v46 * 0.5; /*0x11d73c*/
    v11 = v47 * 0.5; /*0x11d74a*/
    v12 = (float)(v47 * 0.5) + 75.0; /*0x11d753*/
    v43[7] = 0; /*0x11d75f*/
    v44 = 13; /*0x11d765*/
    v45 = 15; /*0x11d76e*/
    strcpy((char *)v43, "Death Tracker"); /*0x11d77f*/
    sub_606E80(a1, v43); /*0x11d7a7*/
    v13 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x11d7b9*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v13 + 160LL))(v13); /*0x11d7d1*/
    v14 = CCMenuItemSpriteExtra_create(v13, 0, a1, sub_9C4B8); /*0x11d7e7*/
    *(_DWORD *)(v14 + 372) = 1069547520; /*0x11d7ea*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v14); /*0x11d808*/
    v15 = *(_QWORD *)v14; /*0x11d80b*/
    v16 = *(_QWORD *)(a1 + 552); /*0x11d80e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v41, (float)(v10 - 160.0) + 8.0, v12 - 12.0); /*0x11d83a*/
    v18 = cocos2d::CCNode::convertToNodeSpace(v16, &v42, v17); /*0x11d84b*/
    (*(void (__fastcall **)(__int64, __int64))(v15 + 184))(v14, v18); /*0x11d857*/
    v19 = v10 - 120.0; /*0x11d861*/
    v20 = v12 - 56.0; /*0x11d86a*/
    v21 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"); /*0x11d880*/
    v22 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"); /*0x11d88a*/
    v23 = CCMenuItemToggler_create(v21, v22, a1, sub_11DB40); /*0x11d8a5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 160LL))(v23); /*0x11d8bd*/
    v24 = qword_905FD0; /*0x11d8bf*/
    if ( !qword_905FD0 ) /*0x11d8c9*/
    {
      v42 = operator new(0x6E8u); /*0x11d8d5*/
      qword_905FD0 = sub_2723A0(v42); /*0x11d8e3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x11d8f4*/
      v24 = qword_905FD0; /*0x11d8f6*/
    }
    GameVariable = GameManager_getGameVariable(v24, "0199"); /*0x11d904*/
    CCMenuItemToggler_toggle(v23, !GameVariable); /*0x11d911*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v23); /*0x11d923*/
    v26 = *(_QWORD *)v23; /*0x11d929*/
    v27 = *(_QWORD *)(a1 + 552); /*0x11d92c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, v19, v20); /*0x11d940*/
    v29 = cocos2d::CCNode::convertToNodeSpace(v27, v41, v28); /*0x11d951*/
    (*(void (__fastcall **)(__int64, __int64))(v26 + 184))(v23, v29); /*0x11d95d*/
    v30 = cocos2d::CCLabelBMFont::create("Auto-Scroll To Cluster", (const char *)&qword_6FFF68); /*0x11d97a*/
    v31 = *(_QWORD *)v30; /*0x11d97d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, 0.0, 0.5); /*0x11d98c*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v31 + 288))(v30, v32); /*0x11d998*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v30 + 160LL))(v30); /*0x11d9af*/
    v33 = *(_QWORD *)v30; /*0x11d9b1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, v19 + 18.0, v20); /*0x11d9ca*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v33 + 184))(v30, v34); /*0x11d9d6*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x11d9ef*/
      *(_QWORD *)(a1 + 584),
      v30,
      1);
    v42 = operator new(0x2C8u); /*0x11d9ff*/
    v35 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v42); /*0x11da0c*/
    if ( v35 ) /*0x11da12*/
    {
      if ( (unsigned __int8)ButtonSprite_init( /*0x11da59*/
                              (_DWORD)v35,
                              (unsigned int)"Clear Data",
                              100,
                              0,
                              1058642330,
                              1,
                              (__int64)&qword_6FFF68,
                              (__int64)"GJ_button_06.png",
                              1106247680) )
      {
        cocos2d::CCObject::autorelease(v35); /*0x11da65*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v35 + 8LL))(v35, 1); /*0x11da75*/
        v35 = 0; /*0x11da78*/
      }
    }
    v36 = CCMenuItemSpriteExtra_create(v35, 0, a1, sub_11DB90); /*0x11da8f*/
    *(_DWORD *)(v36 + 372) = 1066192077; /*0x11da92*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v36); /*0x11dab0*/
    v37 = *(_QWORD *)v36; /*0x11dab3*/
    v38 = *(_QWORD *)(a1 + 552); /*0x11dab6*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, v10, (float)(v11 - 75.0) + 26.0); /*0x11dad9*/
    v40 = cocos2d::CCNode::convertToNodeSpace(v38, v41, v39); /*0x11daea*/
    (*(void (__fastcall **)(__int64, __int64))(v37 + 184))(v36, v40); /*0x11daf6*/
    return 1; /*0x11dafc*/
  }
  return result; /*0x11dafe*/
}

// [2/23] Address: 0x6329a0
// Method: EffectGameObject::EffectGameObject
// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectGameObject_EffectGameObject(__int64 a1)
{
  sub_284FF0(a1); /*0x6329b2*/
  *(_QWORD *)a1 = &EffectGameObject::`vftable'; /*0x6329bf*/
  *(_QWORD *)(a1 + 320) = &EffectGameObject::`vftable'; /*0x6329c9*/
  *(_QWORD *)(a1 + 344) = &EffectGameObject::`vftable'; /*0x6329d7*/
  *(_BYTE *)(a1 + 1464) = 0; /*0x6329de*/
  *(_DWORD *)(a1 + 1468) = 0; /*0x6329e7*/
  *(_DWORD *)(a1 + 1472) = 1065353216; /*0x6329ed*/
  *(_BYTE *)(a1 + 1476) = 0; /*0x6329f7*/
  *(_QWORD *)(a1 + 1480) = 0; /*0x6329fe*/
  *(_WORD *)(a1 + 1488) = 0; /*0x632a05*/
  *(_BYTE *)(a1 + 1490) = 0; /*0x632a0c*/
  *(_QWORD *)(a1 + 1492) = 0; /*0x632a13*/
  *(_DWORD *)(a1 + 1500) = 0; /*0x632a1a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1504)); /*0x632a27*/
  *(_DWORD *)(a1 + 1512) = 0; /*0x632a2d*/
  *(_QWORD *)(a1 + 1516) = 0x40000000; /*0x632a33*/
  *(_BYTE *)(a1 + 1524) = 0; /*0x632a3e*/
  *(_DWORD *)(a1 + 1528) = 0; /*0x632a45*/
  *(_DWORD *)(a1 + 1532) = 1065353216; /*0x632a4b*/
  *(_DWORD *)(a1 + 1536) = 1065353216; /*0x632a55*/
  *(_WORD *)(a1 + 1540) = 0; /*0x632a5f*/
  *(_QWORD *)(a1 + 1544) = 0; /*0x632a66*/
  *(_WORD *)(a1 + 1552) = 0; /*0x632a6d*/
  *(_QWORD *)(a1 + 1556) = 0; /*0x632a74*/
  *(_DWORD *)(a1 + 1564) = 0; /*0x632a7b*/
  *(_BYTE *)(a1 + 1568) = 0; /*0x632a81*/
  *(_QWORD *)(a1 + 1572) = 0; /*0x632a88*/
  *(_DWORD *)(a1 + 1580) = 0; /*0x632a8f*/
  *(_DWORD *)(a1 + 1584) = 1065353216; /*0x632a95*/
  *(_DWORD *)(a1 + 1588) = 1065353216; /*0x632a9f*/
  *(_QWORD *)(a1 + 1592) = 1065353216; /*0x632aa9*/
  *(_QWORD *)(a1 + 1600) = 0; /*0x632ab4*/
  *(_QWORD *)(a1 + 1608) = 0; /*0x632abb*/
  *(_QWORD *)(a1 + 1616) = 0; /*0x632ac2*/
  *(_DWORD *)(a1 + 1624) = 0; /*0x632ac9*/
  *(_OWORD *)(a1 + 1628) = xmmword_8F8610; /*0x632ad6*/
  *(_QWORD *)(a1 + 1644) = 0; /*0x632add*/
  *(_WORD *)(a1 + 1652) = 0; /*0x632ae4*/
  *(_BYTE *)(a1 + 1654) = 0; /*0x632aeb*/
  *(_QWORD *)(a1 + 1656) = 0; /*0x632af2*/
  *(_BYTE *)(a1 + 1664) = 0; /*0x632af9*/
  *(_QWORD *)(a1 + 1668) = 0; /*0x632b00*/
  *(_QWORD *)(a1 + 1676) = 0; /*0x632b07*/
  *(_QWORD *)(a1 + 1684) = 0; /*0x632b0e*/
  *(_WORD *)(a1 + 1692) = 0; /*0x632b15*/
  *(_QWORD *)(a1 + 1696) = 0; /*0x632b1c*/
  *(_WORD *)(a1 + 1704) = 0; /*0x632b23*/
  *(_QWORD *)(a1 + 1708) = 0; /*0x632b2a*/
  *(_BYTE *)(a1 + 1716) = 0; /*0x632b31*/
  *(_QWORD *)(a1 + 1720) = 0; /*0x632b38*/
  *(_QWORD *)(a1 + 1736) = 0; /*0x632b3f*/
  *(_DWORD *)(a1 + 1744) = 0; /*0x632b46*/
  *(_BYTE *)(a1 + 1748) = 0; /*0x632b4c*/
  *(_DWORD *)(a1 + 1752) = 1065353216; /*0x632b53*/
  *(_BYTE *)(a1 + 1756) = 0; /*0x632b5d*/
  *(_DWORD *)(a1 + 1760) = 1065353216; /*0x632b64*/
  *(_WORD *)(a1 + 1764) = 0; /*0x632b6e*/
  *(_DWORD *)(a1 + 1768) = 1092616192; /*0x632b75*/
  *(_DWORD *)(a1 + 1772) = 1056964608; /*0x632b7f*/
  *(_WORD *)(a1 + 1776) = 0; /*0x632b89*/
  *(_DWORD *)(a1 + 1780) = 1065353216; /*0x632b90*/
  *(_BYTE *)(a1 + 1784) = 0; /*0x632b9a*/
  *(_QWORD *)(a1 + 1788) = 0; /*0x632ba1*/
  *(_BYTE *)(a1 + 1796) = 0; /*0x632ba8*/
  *(_WORD *)(a1 + 1798) = 0; /*0x632baf*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1800)); /*0x632bbd*/
  *(_DWORD *)(a1 + 1808) = 0; /*0x632bc3*/
  *(_WORD *)(a1 + 1812) = 0; /*0x632bc9*/
  *(_BYTE *)(a1 + 1814) = 0; /*0x632bd0*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1816)); /*0x632bde*/
  *(_QWORD *)(a1 + 1824) = 0; /*0x632be4*/
  *(_BYTE *)(a1 + 1832) = 0; /*0x632beb*/
  *(_QWORD *)(a1 + 1840) = 0; /*0x632bf2*/
  *(_DWORD *)(a1 + 1848) = 0; /*0x632bf9*/
  *(_DWORD *)(a1 + 1852) = -1; /*0x632bff*/
  return a1; /*0x632c0c*/
}

// [3/23] Address: 0x632c20
// Method: EffectGameObject::getObjectLabel
__int64 __fastcall EffectGameObject_getObjectLabel(__int64 a1)
{
  return *(_QWORD *)(a1 + 1840); /*0x632c27*/
}

// [4/23] Address: 0x632c30
// Method: EffectGameObject::setObjectLabel
void __fastcall EffectGameObject_setObjectLabel(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1840) = a2; /*0x632c30*/
}

// [5/23] Address: 0x6428b0
// Method: EffectGameObject::init
char __fastcall EffectGameObject_init(__int64 a1, const char *a2)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x6428b9*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, a2) ) /*0x6428c0*/
    return 0; /*0x64290c*/
  sub_287800(a1); /*0x6428cd*/
  *(_BYTE *)(a1 + 313) = 0; /*0x6428d2*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x6428db*/
  *(_WORD *)(a1 + 1465) = -1; /*0x6428e5*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x6428ee*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x6428f5*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x6428ff*/
  return 1; /*0x642906*/
}

// [6/23] Address: 0x642920
// Method: EffectGameObject::setRScaleX
__int64 __fastcall EffectGameObject_setRScaleX(__int64 a1, float a2)
{
  float v3; // xmm1_4
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 1476) ) /*0x642920*/
  {
    if ( *(_BYTE *)(a1 + 713) ) /*0x64292c*/
      v3 = -1.0; /*0x642935*/
    else
      v3 = 1.0; /*0x64293f*/
    if ( (float)((float)(v3 * a2) * *(float *)(a1 + 1160)) != *(float *)(a1 + 64) ) /*0x642959*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1); /*0x64295e*/
  }
  return result; /*0x642962*/
}

// [7/23] Address: 0x642970
// Method: EffectGameObject::setRScaleY
__int64 __fastcall EffectGameObject_setRScaleY(__int64 a1, float a2)
{
  float v3; // xmm1_4
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 1476) ) /*0x642970*/
  {
    if ( *(_BYTE *)(a1 + 714) ) /*0x64297c*/
      v3 = -1.0; /*0x642985*/
    else
      v3 = 1.0; /*0x64298f*/
    if ( (float)((float)(v3 * a2) * *(float *)(a1 + 1164)) != *(float *)(a1 + 68) ) /*0x6429a9*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1); /*0x6429ae*/
  }
  return result; /*0x6429b5*/
}

// [8/23] Address: 0x642e10
// Method: EffectGameObject::setOpacity
__int64 __fastcall EffectGameObject_setOpacity(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = GameObject_setOpacity(a1, a2); /*0x642e19*/
  v4 = *(_QWORD *)(a1 + 1520); /*0x642e1e*/
  if ( v4 ) /*0x642e28*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 368) + 40LL))( /*0x642e3d*/
             v4 + 368,
             *(unsigned __int8 *)(a1 + 9));
  return result; /*0x642e41*/
}

// [9/23] Address: 0x642e50
// Method: EffectGameObject::triggerObject
// Hidden C++ exception states: #wind=31
void __fastcall EffectGameObject_triggerObject(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // rsi
  unsigned int v8; // r15d
  int v9; // eax
  __int64 v10; // rbx
  int v11; // r8d
  unsigned int v12; // ebx
  unsigned int v13; // eax
  void **v14; // r9
  char v15; // bl
  void *v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  char v23; // bl
  void *v24; // rcx
  int v25; // xmm0_4
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  char v29; // al
  void **v30; // r8
  __int16 v31; // bx
  int v32; // r9d
  int v33; // r10d
  char v34; // r11
  int v35; // r14d
  int v36; // r12d
  char v37; // r13
  int v38; // eax
  __int64 v39; // rdi
  __int64 v40; // rdx
  void *v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // edi
  struct cocos2d::CCObject *Group; // rbx
  struct cocos2d::CCObject *v45; //... [55985 chars total]

// [10/23] Address: 0x645250
// Method: EffectGameObject::stateSensitiveOff
// Hidden C++ exception states: #wind=1
void __fastcall EffectGameObject_stateSensitiveOff(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 1036) == 3640 ) /*0x645264*/
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 408) + 8LL))( /*0x6452b4*/
      a2 + 408,
      *(unsigned int *)(a1 + 1484),
      0);
}

// [11/23] Address: 0x645320
// Method: EffectGameObject::restoreObject
__int64 __fastcall EffectGameObject_restoreObject(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 1036) != 2063 ) /*0x64532a*/
  {
    *(_BYTE *)(a1 + 978) = 0; /*0x64532c*/
    LOBYTE(a2) = -1; /*0x645333*/
    *(_BYTE *)(a1 + 774) = 0; /*0x645335*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 320) + 40LL))(a1 + 320, a2); /*0x645346*/
  }
  return result; /*0x64534a*/
}

// [12/23] Address: 0x645350
// Method: EffectGameObject::updateSpecialColor
void __fastcall EffectGameObject_updateSpecialColor(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void (__fastcall **v4)(__int64, __int16 *); // rax
  void (__fastcall **v5)(__int64, __int16 *); // rax
  __int16 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+32h] [rbp+Ah]
  __int16 v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+3Ah] [rbp+12h]

  if ( *(_DWORD *)(a1 + 1036) == 1049 ) /*0x645363*/
  {
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 998); /*0x64536d*/
    if ( v2 ) /*0x645376*/
    {
      v3 = v2 + 320; /*0x645381*/
      if ( *(_BYTE *)(a1 + 1653) ) /*0x645378*/
      {
        v6 = -256; /*0x645388*/
        v4 = *(void (__fastcall ***)(__int64, __int16 *))(v2 + 320); /*0x64538f*/
        v7 = 127; /*0x645397*/
        (*v4)(v3, &v6); /*0x64539c*/
      }
      else
      {
        v8 = 0x3FFF; /*0x6453ab*/
        v5 = *(void (__fastcall ***)(__int64, __int16 *))(v2 + 320); /*0x6453b2*/
        v9 = 63; /*0x6453ba*/
        (*v5)(v3, &v8); /*0x6453bf*/
      }
    }
  }
}

// [13/23] Address: 0x6453d0
// Method: EffectGameObject::updateInteractiveHover
void __fastcall EffectGameObject_updateInteractiveHover(__int64 a1, float a2)
{
  __int64 *v3; // rsi
  const struct cocos2d::CCSize *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  float v11; // [rsp+50h] [rbp+8h] BYREF
  float v12; // [rsp+54h] [rbp+Ch]
  char v13; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_BYTE *)(a1 + 774) && *(_DWORD *)(a1 + 1036) != 1614 && !*(_BYTE *)(a1 + 1716) ) /*0x6453fe*/
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1); /*0x64541e*/
    if ( v3 ) /*0x645424*/
    {
      v4 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x645441*/
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v11, v4); /*0x64544b*/
      v5 = *v3; /*0x64546a*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, v11 * 0.5, (float)(v12 * 0.5) + a2); /*0x645479*/
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 184))(v3, v6); /*0x645485*/
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 2); /*0x645496*/
      v8 = v7; /*0x64549c*/
      if ( v7 ) /*0x6454a2*/
      {
        v9 = *v7; /*0x6454b5*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, v11 * 0.5, (float)(v12 * 0.5) + a2); /*0x6454c4*/
        (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 184))(v8, v10); /*0x6454d0*/
      }
    }
  }
}

// [14/23] Address: 0x6454f0
// Method: EffectGameObject::spawnXPosition
float __fastcall EffectGameObject_spawnXPosition(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 1489) || *(_BYTE *)(a1 + 1488) ) /*0x6454fd*/
    return *(float *)(a1 + 1672); /*0x645518*/
  else
    return *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x64550f*/
}

// [15/23] Address: 0x645530
// Method: EffectGameObject::triggerActivated
void __fastcall EffectGameObject_triggerActivated(__int64 a1, float a2)
{
  bool v2; // zf

  v2 = *(_BYTE *)(a1 + 1680) == 0; /*0x645530*/
  *(float *)(a1 + 1672) = a2; /*0x645537*/
  if ( v2 ) /*0x64553f*/
    *(_WORD *)(a1 + 1460) = 257; /*0x645541*/
}

// [16/23] Address: 0x645550
// Method: EffectGameObject::firstSetup
__int64 __fastcall EffectGameObject_firstSetup(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1036); /*0x645550*/
  if ( (_DWORD)result == 2063 ) /*0x64555b*/
  {
    *(_BYTE *)(a1 + 1488) = 1; /*0x64556c*/
  }
  else if ( (_DWORD)result == 3609 ) /*0x645562*/
  {
    *(_BYTE *)(a1 + 1814) = 1; /*0x645564*/
  }
  return result; /*0x64556b*/
}

// [17/23] Address: 0x645580
// Method: EffectGameObject::customSetup
// Hidden C++ exception states: #wind=2
char __fastcall EffectGameObject_customSetup(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  _QWORD *v15; // rcx
  int v16; // edx
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  bool v27; // zf
  int v28; // ecx
  int v29; // ecx
  void *v31; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v2) = EnhancedGameObject_customSetup(a1); /*0x645589*/
  v3 = *(_DWORD *)(a1 + 1036); /*0x64558e*/
  if ( v3 > 900 ) /*0x64559a*/
  {
    if ( v3 > 2066 ) /*0x64565c*/
    {
      v16 = v3 - 3607; /*0x645793*/
      if ( v16 ) /*0x645799*/
      {
        v17 = v16 - 33; /*0x64579b*/
        if ( v17 ) /*0x64579e*/
        {
          if ( v17 == 3 ) /*0x6457a3*/
            *(_WORD *)(a1 + 1488) = 1; /*0x6457a5*/
          goto LABEL_46; /*0x6457ae*/
        }
        *(_WORD *)(a1 + 1488) = 1; /*0x6457b0*/
      }
      *(_BYTE *)(a1 + 1680) = 1; /*0x6457b9*/
      goto LABEL_46; /*0x6457b9*/
    }
    if ( v3 == 2066 ) /*0x645662*/
    {
      *(_DWORD *)(a1 + 1752) = 1065353216; /*0x645787*/
      goto LABEL_46; /*0x645791*/
    }
    v10 = v3 - 915; /*0x645668*/
    if ( !v10 ) /*0x64566e*/
    {
      *(_DWORD *)(a1 + 1032) = 1002; /*0x645774*/
      *(_BYTE *)(a1 + 1503) = 1; /*0x64577e*/
      goto LABEL_46; /*0x645785*/
    }
    v11 = v10 - 414; /*0x645674*/
    if ( !v11 ) /*0x64567a*/
    {
      *(_DWORD *)(a1 + 928) = 31; /*0x6456a8*/
      *(_DWORD *)(a1 + 1056) = 9; /*0x6456b2*/
      if ( !*(_BYTE *)(a1 + 653) ) /*0x6456bc*/
      {
        v13 = qword_905FD0; /*0x6456c9*/
        if ( !qword_905FD0 ) /*0x6456d3*/
        {
          v31 = operator new(0x6E8u); /*0x6456df*/
          qword_905FD0 = sub_2723A0(v31); /*0x6456ed*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x6456fe*/
          v13 = qword_905FD0; /*0x645700*/
        }
        v14 = *(_DWORD **)(*(_QWORD *)(v13 + 560) + 2168LL); /*0x64570e*/
        v2 = v14[260]; /*0x645715*/
        if ( v2 == v14[261] && v14[305] != 2 ) /*0x64572a*/
        {
          LOWORD(v31) = -20481; /*0x645738*/
          BYTE2(v31) = 75; /*0x64573d*/
          LOBYTE(v2) = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 1344LL))(a1, &v31); /*0x64574d*/
        }
      }
      *(_BYTE *)(a1 + 645) = 1; /*0x645753*/
LABEL_35:
      v15 = *(_QWORD **)(a1 + 1104); /*0x64575a*/
      if ( v15 ) /*0x645764*/
      {
        LOBYTE(v2) = 0; /*0x645766*/
        *v15 = 0; /*0x645768*/
      }
      *(_BYTE *)(a1 + 1402) = 1; /*0x64576b*/
      goto LABEL_46; /*0x645772*/
    }
    v12 = v11 - 5; /*0x64567c*/
    if ( !v12 ) /*0x64567f*/
      goto LABEL_27; /*0x64567f*/
    if ( v12 == 578 ) /*0x645687*/
      *(_DWORD *)(a1 + 1468) = 1112014848; /*0x64568d*/
  }
  else
  {
    if ( v3 == 900 ) /*0x6455a0*/
    {
      *(_DWORD *)(a1 + 1032) = 1009; /*0x64564a*/
      goto LABEL_13; /*0x645654*/
    }
    if ( v3 <= 200 ) /*0x6455ac*/
    {
      if ( v3 != 200 ) /*0x6455ae*/
      {
        v4 = v3 - 29; /*0x6455b4*/
        if ( v4 ) /*0x6455b7*/
        {
          v5 = v4 - 1; /*0x6455b9*/
          if ( v5 ) /*0x6455bc*/
          {
            v6 = v5 - 75; /*0x6455be*/
            if ( v6 ) /*0x6455c1*/
            {
              if ( v6 != 37 ) /*0x6455c6*/
                goto LABEL_46; /*0x6455c6*/
              *(_DWORD *)(a1 + 928) = 22; /*0x6455cc*/
              *(_DWORD *)(a1 + 1056) = 9; /*0x6455d6*/
              goto LABEL_35; /*0x6455e0*/
            }
            *(_DWORD *)(a1 + 1032) = 1004; /*0x6455e5*/
          }
          else
          {
            *(_DWORD *)(a1 + 1032) = 1001; /*0x6455f1*/
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1032) = 1000; /*0x6455fd*/
        }
LABEL_13:
        *(_BYTE *)(a1 + 1503) = 0; /*0x645607*/
        *(_DWORD *)(a1 + 1472) = 1065353216; /*0x64560e*/
        goto LABEL_46; /*0x645618*/
      }
LABEL_27:
      *(_BYTE *)(a1 + 1488) = 1; /*0x64569c*/
      goto LABEL_46; /*0x6456a3*/
    }
    v7 = v3 - 201; /*0x64561d*/
    if ( !v7 ) /*0x645623*/
      goto LABEL_27; /*0x645623*/
    v8 = v7 - 1; /*0x645625*/
    if ( !v8 ) /*0x645628*/
      goto LABEL_27; /*0x645628*/
    v9 = v8 - 1; /*0x64562a*/
    if ( !v9 ) /*0x64562d*/
      goto LABEL_27; /*0x64562d*/
    if ( v9 == 541 ) /*0x645635*/
      *(_DWORD *)(a1 + 1032) = 1003; /*0x64563b*/
  }
LABEL_46:
  v18 = *(_DWORD *)(a1 + 1036); /*0x6457c0*/
  if ( v18 > 1912 ) /*0x6457cc*/
  {
    if ( v18 > 3609 ) /*0x645816*/
    {
      v29 = v18 - 3620; /*0x64582f*/
      if ( !v29 ) /*0x645835*/
        goto LABEL_68; /*0x645835*/
      v28 = v29 - 20; /*0x645837*/
      v27 = v28 == 0; /*0x645837*/
    }
    else
    {
      if ( v18 == 3609 ) /*0x645818*/
        goto LABEL_68; /*0x645818*/
      v25 = v18 - 2063; /*0x64581a*/
      if ( !v25 ) /*0x645820*/
        goto LABEL_68; /*0x645820*/
      v26 = v25 - 5; /*0x645822*/
      if ( !v26 ) /*0x645825*/
        goto LABEL_68; /*0x645825*/
      v28 = v26 - 1536; /*0x645827*/
      v27 = v28 == 0; /*0x645827*/
    }
    if ( !v27 ) /*0x64583a*/
    {
      v22 = v28 == 3; /*0x64583c*/
      goto LABEL_66; /*0x64583c*/
    }
LABEL_68:
    *(_BYTE *)(a1 + 1851) = 1; /*0x645857*/
    return v2; /*0x645857*/
  }
  if ( v18 == 1912 ) /*0x6457ce*/
    goto LABEL_68; /*0x6457ce*/
  if ( v18 > 1595 ) /*0x6457da*/
  {
    v23 = v18 - 1611; /*0x6457fb*/
    if ( !v23 ) /*0x645801*/
      goto LABEL_68; /*0x645801*/
    v24 = v23 - 200; /*0x645803*/
    if ( !v24 ) /*0x645809*/
      goto LABEL_68; /*0x645809*/
    v22 = v24 == 4; /*0x64580b*/
  }
  else
  {
    if ( v18 == 1595 ) /*0x6457dc*/
      goto LABEL_68; /*0x6457dc*/
    v19 = v18 - 142; /*0x6457de*/
    if ( !v19 ) /*0x6457e4*/
      goto LABEL_68; /*0x6457e4*/
    v20 = v19 - 1126; /*0x6457e6*/
    if ( !v20 ) /*0x6457ec*/
      goto LABEL_68; /*0x6457ec*/
    v21 = v20 - 61; /*0x6457ee*/
    if ( !v21 ) /*0x6457f1*/
      goto LABEL_68; /*0x6457f1*/
    v22 = v21 == 265; /*0x6457f3*/
  }
LABEL_66:
  if ( v22 ) /*0x64583f*/
    goto LABEL_68; /*0x64583f*/
  LOBYTE(v2) = *(_DWORD *)(a1 + 928) == 30; /*0x645848*/
  *(_BYTE *)(a1 + 1851) = v2; /*0x64584b*/
  return v2; /*0x645851*/
}

// [18/23] Address: 0x645870
// Method: EffectGameObject::customObjectSetup
// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // r12
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  int v15; // eax
  const char *v16; // rcx
  int v17; // eax
  const char *v18; // rcx
  int v19; // eax
  const char *v20; // rcx
  int v21; // eax
  const char *v22; // rcx
  int v23; // eax
  const char *v24; // rcx
  int v25; // eax
  const char *v26; // rcx
  int v27; // eax
  const char *v28; // rcx
  int v29; // eax
  const char *v30; // rcx
  int v31; // eax
  const char *v32; // rcx
  int v33; // eax
  const char *v34; // rcx
  int v35; // eax
  const char *v36; // rcx
  int v37; // eax
  const char *v38; // rcx
  int v39; // eax
  const char *v40; // rcx
  int v41; // eax
  const char *v42; // rcx
  int v43; // eax
  const char *v44; // rcx
  const char *v45... [104311 chars total]

// [19/23] Address: 0x648e30
// Method: EffectGameObject::updateSpeedModType
__int64 __fastcall EffectGameObject_updateSpeedModType(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 result; // rax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  v1 = *(_DWORD *)(a1 + 1036); /*0x648e30*/
  if ( v1 > 1934 ) /*0x648e42*/
  {
    v7 = v1 - 1935; /*0x648f02*/
    if ( v7 ) /*0x648f08*/
    {
      v8 = v7 - 965; /*0x648f0a*/
      if ( v8 ) /*0x648f10*/
      {
        v9 = v8 - 2; /*0x648f12*/
        if ( v9 ) /*0x648f15*/
        {
          v10 = v9 - 120; /*0x648f17*/
          if ( v10 ) /*0x648f1a*/
          {
            if ( v10 != 5 ) /*0x648f1f*/
            {
LABEL_31:
              result = 0; /*0x648f21*/
              if ( *(_BYTE *)(a1 + 1796) ) /*0x648f23*/
                result = 0xFFFFFFFFLL; /*0x648f29*/
              *(_WORD *)(a1 + 1798) = result; /*0x648f2d*/
              return result; /*0x648f34*/
            }
          }
        }
        result = 4294967291LL; /*0x648f3c*/
        if ( *(_BYTE *)(a1 + 1796) ) /*0x648f35*/
          result = 0xFFFFFFFFLL; /*0x648f41*/
        *(_WORD *)(a1 + 1798) = result; /*0x648f45*/
      }
      else
      {
        result = 4294967292LL; /*0x648f54*/
        if ( *(_BYTE *)(a1 + 1796) ) /*0x648f4d*/
          result = 0xFFFFFFFFLL; /*0x648f59*/
        *(_WORD *)(a1 + 1798) = result; /*0x648f5d*/
      }
    }
    else
    {
      result = 4294967294LL; /*0x648f6c*/
      if ( *(_BYTE *)(a1 + 1796) ) /*0x648f65*/
        result = 0xFFFFFFFFLL; /*0x648f71*/
      *(_WORD *)(a1 + 1798) = result; /*0x648f75*/
    }
  }
  else if ( v1 == 1934 ) /*0x648e48*/
  {
    result = 4294967293LL; /*0x648ef1*/
    if ( *(_BYTE *)(a1 + 1796) ) /*0x648eea*/
      result = 0xFFFFFFFFLL; /*0x648ef6*/
    *(_WORD *)(a1 + 1798) = result; /*0x648efa*/
  }
  else
  {
    v2 = v1 - 200; /*0x648e4e*/
    if ( v2 ) /*0x648e54*/
    {
      v3 = v2 - 2; /*0x648e56*/
      if ( v3 ) /*0x648e59*/
      {
        v4 = v3 - 1; /*0x648e5b*/
        if ( v4 ) /*0x648e5e*/
        {
          v5 = v4 - 1131; /*0x648e60*/
          if ( v5 ) /*0x648e66*/
          {
            if ( v5 == 583 ) /*0x648e6e*/
            {
              result = 0xFFFFFFFFLL; /*0x648e7b*/
              if ( *(_BYTE *)(a1 + 1796) ) /*0x648e74*/
                result = 0xFFFFFFFFLL; /*0x648e7e*/
              *(_WORD *)(a1 + 1798) = -1; /*0x648e82*/
              return result; /*0x648e89*/
            }
            goto LABEL_31; /*0x648e6e*/
          }
          result = 4; /*0x648e91*/
          if ( *(_BYTE *)(a1 + 1796) ) /*0x648e8a*/
            result = 0xFFFFFFFFLL; /*0x648e96*/
          *(_WORD *)(a1 + 1798) = result; /*0x648e9a*/
        }
        else
        {
          result = 3; /*0x648ea9*/
          if ( *(_BYTE *)(a1 + 1796) ) /*0x648ea2*/
            result = 0xFFFFFFFFLL; /*0x648eae*/
          *(_WORD *)(a1 + 1798) = result; /*0x648eb2*/
        }
      }
      else
      {
        result = 2; /*0x648ec1*/
        if ( *(_BYTE *)(a1 + 1796) ) /*0x648eba*/
          result = 0xFFFFFFFFLL; /*0x648ec6*/
        *(_WORD *)(a1 + 1798) = result; /*0x648eca*/
      }
    }
    else
    {
      result = 1; /*0x648ed9*/
      if ( *(_BYTE *)(a1 + 1796) ) /*0x648ed2*/
        result = 0xFFFFFFFFLL; /*0x648ede*/
      *(_WORD *)(a1 + 1798) = result; /*0x648ee2*/
    }
  }
  return result; /*0x648e89*/
}

// [20/23] Address: 0x648f80
// Method: EffectGameObject::canReverse
bool __fastcall EffectGameObject_canReverse(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v5; // edx

  v1 = *(_DWORD *)(a1 + 1036); /*0x648f80*/
  if ( v1 <= 1022 ) /*0x648f8c*/
  {
    if ( v1 != 1022 ) /*0x648f8e*/
    {
      switch ( v1 ) /*0x648fb4*/
      {
        case 35: /*0x648fb4*/
        case 36: /*0x648fb4*/
        case 67: /*0x648fb4*/
        case 84: /*0x648fb4*/
        case 140: /*0x648fb4*/
        case 141: /*0x648fb4*/
          return 1;
        default:
          return 0;
      }
    }
    return 1; /*0x648f8e*/
  }
  if ( v1 > 3004 ) /*0x648fbc*/
  {
    v5 = v1 - 3005; /*0x648fd2*/
    if ( !v5 ) /*0x648fd8*/
      return 1; /*0x648fd8*/
    return v5 == 22; /*0x648fda*/
  }
  else
  {
    if ( v1 == 3004 ) /*0x648fbe*/
      return 1; /*0x648fbe*/
    v2 = v1 - 1330; /*0x648fc0*/
    if ( !v2 ) /*0x648fc6*/
      return 1; /*0x648fc6*/
    v3 = v2 - 2; /*0x648fc8*/
    if ( !v3 ) /*0x648fcb*/
      return 1; /*0x648fcb*/
    return v3 == 1; /*0x648fcd*/
  }
}

// [21/23] Address: 0x649060
// Method: EffectGameObject::canSpawnTriggers
bool __fastcall EffectGameObject_canSpawnTriggers(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  bool v5; // zf
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  bool v10; // zf
  int v11; // edx
  int v12; // edx

  v1 = *(_DWORD *)(a1 + 1036); /*0x649060*/
  if ( v1 > 1912 ) /*0x64906c*/
  {
    if ( v1 > 3609 ) /*0x6490b2*/
    {
      v12 = v1 - 3620; /*0x6490cb*/
      if ( !v12 ) /*0x6490d1*/
        return 1; /*0x6490d1*/
      v11 = v12 - 20; /*0x6490d3*/
      v10 = v11 == 0; /*0x6490d3*/
    }
    else
    {
      if ( v1 == 3609 ) /*0x6490b4*/
        return 1; /*0x6490b4*/
      v8 = v1 - 2063; /*0x6490b6*/
      if ( !v8 ) /*0x6490bc*/
        return 1; /*0x6490bc*/
      v9 = v8 - 5; /*0x6490be*/
      if ( !v9 ) /*0x6490c1*/
        return 1; /*0x6490c1*/
      v11 = v9 - 1536; /*0x6490c3*/
      v10 = v11 == 0; /*0x6490c3*/
    }
    if ( v10 ) /*0x6490d6*/
      return 1; /*0x6490d6*/
    v5 = v11 == 3; /*0x6490d8*/
  }
  else
  {
    if ( v1 == 1912 ) /*0x64906e*/
      return 1; /*0x64906e*/
    if ( v1 > 1595 ) /*0x649076*/
    {
      v6 = v1 - 1611; /*0x649097*/
      if ( !v6 ) /*0x64909d*/
        return 1; /*0x64909d*/
      v7 = v6 - 200; /*0x64909f*/
      if ( !v7 ) /*0x6490a5*/
        return 1; /*0x6490a5*/
      v5 = v7 == 4; /*0x6490a7*/
    }
    else
    {
      if ( v1 == 1595 ) /*0x649078*/
        return 1; /*0x649078*/
      v2 = v1 - 142; /*0x64907a*/
      if ( !v2 ) /*0x649080*/
        return 1; /*0x649080*/
      v3 = v2 - 1126; /*0x649082*/
      if ( !v3 ) /*0x649088*/
        return 1; /*0x649088*/
      v4 = v3 - 61; /*0x64908a*/
      if ( !v4 ) /*0x64908d*/
        return 1; /*0x64908d*/
      v5 = v4 == 265; /*0x64908f*/
    }
  }
  if ( !v5 ) /*0x6490db*/
    return *(_DWORD *)(a1 + 928) == 30; /*0x6490e7*/
  return 1; /*0x6490e7*/
}

// [22/23] Address: 0x6490f0
// Method: EffectGameObject::canBeOrdered
char __fastcall EffectGameObject_canBeOrdered(__int64 a1)
{
  char result; // al
  int v3; // ecx
  int v4; // ecx

  result = *(_BYTE *)(a1 + 1260); /*0x6490f6*/
  if ( !result ) /*0x649102*/
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1528LL))(a1); /*0x649107*/
    if ( !result ) /*0x64910f*/
    {
      v3 = *(_DWORD *)(a1 + 1036); /*0x649111*/
      if ( v3 <= 203 ) /*0x64911d*/
      {
        if ( v3 != 203 ) /*0x64911f*/
        {
          v4 = v3 - 200; /*0x649121*/
          if ( v4 ) /*0x649127*/
          {
            if ( (unsigned int)(v4 - 1) >= 2 ) /*0x64912c*/
              return result; /*0x64912c*/
          }
        }
        return 1; /*0x649149*/
      }
      if ( v3 == 1334 || v3 == 2902 ) /*0x649147*/
        return 1; /*0x649147*/
    }
  }
  return result; /*0x649133*/
}

// [23/23] Address: 0x649160
// Method: EffectGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  __int64 SaveString; // rax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  _BYTE *v14; // rdi
  _BYTE *v15; // rsi
  float v16; // xmm0_4
  float v17; // xmm0_4
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rax
  __int128 v37; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v38[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v39[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v40[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v37 = a2; /*0x64919c*/
  v6 = *(_DWORD *)(a1 + 1480); /*0x6491a4*/
  if ( v6 >= 9999 ) /*0x... [106364 chars total]
