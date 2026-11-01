#include <Geode/binding/LevelBindingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x3d18e0
// Method: LevelBindingsLayer::~LevelBindingsLayer
__int64 __fastcall LevelBindingsLayer__dtor_LevelBindingsLayer(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rdx
  cocos2d::CCObject *v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  _BYTE v11[16]; // [rsp+30h] [rbp-88h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+50h] [rbp-68h]
  _BYTE v14[32]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v15[32]; // [rsp+80h] [rbp-38h] BYREF

  *(_QWORD *)a1 = &KeybindingsLayer::`vftable'; /*0x3d1909*/
  *(_QWORD *)(a1 + 320) = &KeybindingsLayer::`vftable'; /*0x3d1913*/
  *(_QWORD *)(a1 + 328) = &KeybindingsLayer::`vftable'; /*0x3d1921*/
  *(_QWORD *)(a1 + 336) = &KeybindingsLayer::`vftable'; /*0x3d192f*/
  *(_QWORD *)(a1 + 344) = &KeybindingsLayer::`vftable'; /*0x3d193d*/
  *(_QWORD *)(a1 + 352) = &KeybindingsLayer::`vftable'; /*0x3d194b*/
  *(_QWORD *)(a1 + 408) = &KeybindingsLayer::`vftable'; /*0x3d1959*/
  *(_QWORD *)(a1 + 432) = &KeybindingsLayer::`vftable'; /*0x3d1967*/
  *(_QWORD *)(a1 + 544) = &KeybindingsLayer::`vftable'; /*0x3d1975*/
  *(_QWORD *)(a1 + 664) = &KeybindingsLayer::`vftable'; /*0x3d1983*/
  *(_QWORD *)(a1 + 672) = &KeybindingsLayer::`vftable'; /*0x3d1991*/
  if ( *(_QWORD *)(a1 + 1120) && *(int *)(a1 + 1048) >= 0 ) /*0x3d19ad*/
  {
    Block[1] = 0; /*0x3d19b3*/
    Block[0] = (void *)sub_3C460(32); /*0x3d19c6*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_830FD0); /*0x3d19d3*/
    strcpy((char *)Block[0], "keybindings.tab."); /*0x3d19e0*/
    v2 = sub_D08C0(v15, *(unsigned int *)(a1 + 1048)); /*0x3d19f5*/
    sub_74FF0(v14, v3, Block, v2); /*0x3d1a07*/
    v4 = *(_QWORD *)(a1 + 1120); /*0x3d1a0c*/
    v5 = sub_7FC90(); /*0x3d1a13*/
    *(_DWORD *)(*(_QWORD *)sub_82350(v5, v11, v14) + 48LL) = *(_DWORD *)(v4 + 436); /*0x3d1a33*/
    sub_3C310(v14); /*0x3d1a3b*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x3d1a49*/
    {
      v6 = Block[0]; /*0x3d1a4e*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x3d1a5d*/
      {
        v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x3d1a63*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x3d1a72*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3d1a87*/
      }
      j_j_free(v6); /*0x3d1a8e*/
    }
    sub_3C310(v15); /*0x3d1a9b*/
  }
  dword_903798 = *(_DWORD *)(a1 + 1048); /*0x3d1aa6*/
  if ( &qword_8F84A8 != (void **)(a1 + 1144) ) /*0x3d1abd*/
  {
    v7 = (void *)(a1 + 1144); /*0x3d1abf*/
    if ( *(_QWORD *)(a1 + 1168) > 0xFu ) /*0x3d1ac7*/
      v7 = *(void **)(a1 + 1144); /*0x3d1ac9*/
    sub_3F5A0(&qword_8F84A8, v7, *(_QWORD *)(a1 + 1160)); /*0x3d1ad0*/
  }
  v8 = *(cocos2d::CCObject **)(a1 + 1072); /*0x3d1ad5*/
  if ( v8 ) /*0x3d1adf*/
    cocos2d::CCObject::release(v8); /*0x3d1ae1*/
  if ( *(_BYTE *)(a1 + 1088) ) /*0x3d1ae7*/
  {
    v9 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 1080); /*0x3d1af0*/
    if ( v9 ) /*0x3d1afa*/
      (**v9)(v9, 1); /*0x3d1b04*/
  }
  sub_3C310(a1 + 1144); /*0x3d1b09*/
  sub_19C960(a1 + 1024); /*0x3d1b15*/
  sub_19CA30(a1 + 1000); /*0x3d1b21*/
  return UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)a1); /*0x3d1b2f*/
}

// [2/6] Address: 0x448300
// Method: LevelBindingsLayer::settingsEntries
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall LevelBindingsLayer_settingsEntries(__int64 a1, _QWORD *a2)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-D0h] BYREF
  char v5; // [rsp+50h] [rbp-B0h]
  const char *v6; // [rsp+58h] [rbp-A8h]
  const char *v7; // [rsp+60h] [rbp-A0h]
  __int64 v8; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v9)(); // [rsp+70h] [rbp-90h]
  char v10; // [rsp+78h] [rbp-88h]
  const char *v11; // [rsp+80h] [rbp-80h]
  const char *v12; // [rsp+88h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v14)(); // [rsp+98h] [rbp-68h]
  char v15; // [rsp+A0h] [rbp-60h]
  const char *v16; // [rsp+A8h] [rbp-58h]
  const char *v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v19)(); // [rsp+C0h] [rbp-40h]
  char v20; // [rsp+C8h] [rbp-38h]
  const char *v21; // [rsp+D0h] [rbp-30h]
  const char *v22; // [rsp+D8h] [rbp-28h]
  __int64 v23; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v24)(); // [rsp+E8h] [rbp-18h]
  char v25; // [rsp+F0h] [rbp-10h]

  *a2 = 0; /*0x44832e*/
  a2[1] = 0; /*0x448331*/
  a2[2] = 0; /*0x448335*/
  v4[0] = "Reset"; /*0x448348*/
  v4[1] = "GJ_button_05.png"; /*0x448354*/
  v4[2] = a1; /*0x448359*/
  v4[3] = sub_448CF0; /*0x448365*/
  v5 = 1; /*0x44836a*/
  v6 = "Paste Global"; /*0x448376*/
  v7 = "GJ_button_04.png"; /*0x448382*/
  v8 = a1; /*0x448387*/
  v9 = sub_448E10; /*0x448393*/
  v10 = 1; /*0x448398*/
  v11 = "Clear"; /*0x4483a4*/
  v12 = "GJ_button_06.png"; /*0x4483af*/
  v13 = a1; /*0x4483b3*/
  v14 = sub_448F50; /*0x4483be*/
  v15 = 1; /*0x4483c2*/
  v16 = "Copy"; /*0x4483cd*/
  v17 = "GJ_button_04.png"; /*0x4483d1*/
  v18 = a1; /*0x4483d5*/
  v19 = sub_448820; /*0x4483e0*/
  v20 = 1; /*0x4483e4*/
  v21 = "Paste"; /*0x4483ef*/
  v22 = "GJ_button_04.png"; /*0x4483f3*/
  v23 = a1; /*0x4483f7*/
  v24 = sub_448A80; /*0x448402*/
  v25 = 1; /*0x448406*/
  sub_3D5040(a2, v4, 5); /*0x448418*/
  return a2; /*0x448420*/
}

// [3/6] Address: 0x4485f0
// Method: LevelBindingsLayer::setupTabs
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelBindingsLayer_setupTabs(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rax
  const char *v5; // rcx
  struct cocos2d::CCLabelBMFont *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  float v10[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-40h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-38h] BYREF
  __m128i si128; // [rsp+50h] [rbp-28h]

  Block[1] = 0; /*0x448614*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F50); /*0x448621*/
  Block[0] = (void *)0x73676E69646E6942LL; /*0x448631*/
  sub_6675A0(a1, Block, 0); /*0x448643*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x448652*/
  {
    v3 = Block[0]; /*0x448657*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x448666*/
    {
      v3 = (void *)*((_QWORD *)Block[0] - 1); /*0x44866c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v3 - 8) > 0x1F ) /*0x44867b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x448690*/
    }
    j_j_free(v3); /*0x448697*/
  }
  v4 = cocos2d::CCDirector::sharedDirector(v2); /*0x44869c*/
  cocos2d::CCDirector::getWinSize(v4, v10); /*0x4486aa*/
  v5 = "Custom Keyboard Controls"; /*0x4486b7*/
  if ( *(_BYTE *)(a1 + 1192) ) /*0x4486be*/
    v5 = "Custom Controller Controls"; /*0x4486c5*/
  v6 = cocos2d::CCLabelBMFont::create(v5, "goldFont.fnt"); /*0x4486d6*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 160LL))(v6); /*0x4486ee*/
  v7 = *(_QWORD *)v6; /*0x4486f0*/
  cocos2d::CCPoint::CCPoint( /*0x44872c*/
    (cocos2d::CCPoint *)v11,
    v10[0] * 0.5,
    (float)((float)(*(float *)(a1 + 736) * 0.5) + (float)(v10[1] * 0.5)) - 22.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v7 + 184))(v6, v8); /*0x448738*/
  return (*(__int64 (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x448751*/
           *(_QWORD *)(a1 + 584),
           v6);
}

// [4/6] Address: 0x448770
// Method: LevelBindingsLayer::actionsToShow
_QWORD *__fastcall LevelBindingsLayer_actionsToShow(__int64 a1, _QWORD *a2)
{
  char *v3; // rax
  char *v4; // rbx

  *a2 = 0; /*0x448781*/
  a2[1] = 0; /*0x448787*/
  a2[2] = 0; /*0x44878b*/
  v3 = (char *)sub_3C460(24); /*0x44878f*/
  *a2 = v3; /*0x448794*/
  a2[1] = v3; /*0x44879e*/
  v4 = v3; /*0x4487a8*/
  a2[2] = v3 + 24; /*0x4487af*/
  memmove(v3, &unk_6FEED8, 0x18u); /*0x4487b6*/
  a2[1] = v4 + 24; /*0x4487c4*/
  return a2; /*0x4487bf*/
}

// [5/6] Address: 0x4487e0
// Method: LevelBindingsLayer::openBindingEditor
__int64 __fastcall LevelBindingsLayer_openBindingEditor(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax

  v3 = sub_449F50(*(_QWORD *)(a1 + 1184), a2, a3, a1, *(_BYTE *)(a1 + 1192) != 0); /*0x4487fd*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 1064LL))(v3); /*0x44880f*/
}

// [6/6] Address: 0x449060
// Method: LevelBindingsLayer::onClose
__int64 __fastcall LevelBindingsLayer_onClose(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx

  if ( *(_BYTE *)(a1 + 1193) ) /*0x449066*/
  {
    v2 = *(_QWORD *)(a1 + 1184); /*0x449084*/
    if ( !*(_BYTE *)(v2 + 24) ) /*0x44908b*/
    {
      v3 = *(_QWORD **)(v2 + 8); /*0x449091*/
      sub_389620(v2 + 8, v2 + 8, v3[1]); /*0x4490a6*/
      v3[1] = v3; /*0x4490b0*/
      *v3 = v3; /*0x4490b4*/
      v3[2] = v3; /*0x4490b7*/
      *(_QWORD *)(v2 + 16) = 0; /*0x4490bb*/
      *(_BYTE *)(v2 + 24) = 1; /*0x4490c3*/
    }
  }
  v4 = *(_QWORD *)(a1 + 1096); /*0x4490cc*/
  if ( v4 ) /*0x4490d6*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 1032LL))(v4, 0); /*0x4490dd*/
  result = SetupTriggerPopup_onClose(a1); /*0x4490e9*/
  v7 = *(_QWORD *)(a1 + 1072); /*0x4490ee*/
  if ( v7 ) /*0x449102*/
  {
    LOBYTE(v6) = 1; /*0x449107*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 336LL))(v7, v6); /*0x44910c*/
    LOBYTE(v8) = 1; /*0x449115*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 920LL))(v7, v8); /*0x44911a*/
    LOBYTE(v9) = 1; /*0x449123*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 992LL))(v7, v9); /*0x44912d*/
  }
  return result; /*0x449134*/
}
