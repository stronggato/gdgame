#include <Geode/binding/SetupTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/50] Address: 0x5a9a0
// Method: SetupTriggerPopup::textInputShouldOffset
void __fastcall SetupTriggerPopup_textInputShouldOffset(__int64 a1, _BYTE *a2, float a3)
{
  _BYTE *v4; // rbx
  const struct cocos2d::CCPoint *v5; // rax
  const struct cocos2d::CCPoint *v6; // rdx
  _BYTE *v7; // rbx
  float v8; // xmm6_4
  __int64 v9; // rax
  cocos2d::CCNode *v10; // rdi
  struct cocos2d::CCAction *v11; // rbx
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-30h] BYREF
  char v14; // [rsp+60h] [rbp+8h] BYREF
  float v15; // [rsp+64h] [rbp+Ch]
  char v16; // [rsp+78h] [rbp+20h] BYREF
  float v17; // [rsp+7Ch] [rbp+24h]

  if ( *(_QWORD *)(a1 + 40) && a2 && a2[468] ) /*0x5a9c5*/
  {
    v4 = (_BYTE *)(a1 - 544); /*0x5a9d7*/
    while ( a2 != v4 ) /*0x5a9e3*/
    {
      a2 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 504LL))(a2); /*0x5a9f1*/
      if ( !a2 ) /*0x5a9f7*/
        return; /*0x5a9f7*/
    }
    v5 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 200LL))(*(_QWORD *)(a1 + 40)); /*0x5aa15*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, v5); /*0x5aa23*/
    v6 = (const struct cocos2d::CCPoint *)(a1 + 56); /*0x5aa2d*/
    if ( !*(_BYTE *)(a1 + 55) ) /*0x5aa29*/
      v6 = (const struct cocos2d::CCPoint *)&v16; /*0x5aa33*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, v6); /*0x5aa3d*/
    v7 = (_BYTE *)(a1 + 54); /*0x5aa49*/
    v8 = (float)(v17 + a3) - v15; /*0x5aa54*/
    if ( v8 > 0.0 || *v7 ) /*0x5aa5f*/
    {
      cocos2d::CCPoint::operator=(a1 + 56, &v14); /*0x5aa71*/
      *(_BYTE *)(a1 + 55) = 1; /*0x5aa7a*/
      *v7 = 1; /*0x5aa82*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v13, 0.0, fmaxf(0.0, v8)); /*0x5aa8d*/
      cocos2d::CCPoint::operator+(&v14, v12, v9); /*0x5aaa0*/
      v10 = *(cocos2d::CCNode **)(a1 + 40); /*0x5aaa6*/
      cocos2d::CCNode::stopActionByTag(v10, 27490); /*0x5aab2*/
      v11 = cocos2d::CCMoveTo::create(0.2, (const struct cocos2d::CCPoint *)v12); /*0x5aad3*/
      (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v11 + 64LL))(v11, 27490); /*0x5aad9*/
      cocos2d::CCNode::runAction(v10, v11); /*0x5aae3*/
    }
  }
}

// [2/50] Address: 0x5ab00
// Method: SetupTriggerPopup::textInputReturn
void __fastcall SetupTriggerPopup_textInputReturn(__int64 a1)
{
  cocos2d::CCNode *v2; // rdi
  const struct cocos2d::CCPoint *v3; // rax
  const struct cocos2d::CCPoint *v4; // rbx
  struct cocos2d::CCAction *v5; // rbx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 54) ) /*0x5ab06*/
  {
    if ( *(_QWORD *)(a1 + 40) ) /*0x5ab0f*/
    {
      *(_BYTE *)(a1 + 54) = 0; /*0x5ab16*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v6, (const struct cocos2d::CCPoint *)(a1 + 56)); /*0x5ab28*/
      v2 = *(cocos2d::CCNode **)(a1 + 40); /*0x5ab2e*/
      v4 = v3; /*0x5ab3a*/
      cocos2d::CCNode::stopActionByTag(v2, 27490); /*0x5ab3d*/
      v5 = cocos2d::CCMoveTo::create(0.2, v4); /*0x5ab5c*/
      (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v5 + 64LL))(v5, 27490); /*0x5ab62*/
      cocos2d::CCNode::runAction(v2, v5); /*0x5ab6c*/
    }
  }
}

// [3/50] Address: 0x80530
// Method: SetupTriggerPopup::triggerSliderChanged
__int64 __fastcall SetupTriggerPopup_triggerSliderChanged(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax

  v3 = *(_BYTE *)(a1 + 480); /*0x80544*/
  result = sub_80AF0(); /*0x80554*/
  v8 = *(_QWORD *)(a1 + 560); /*0x80559*/
  if ( v8 ) /*0x80563*/
  {
    v9 = (__int64 *)(v8 + 320); /*0x80565*/
    v10 = *v9; /*0x80572*/
    if ( v3 ) /*0x80578*/
      result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v10 + 32))(v9, a2, a3); /*0x8057a*/
    else
      result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v10 + 24))(v9, a2, a3); /*0x8057f*/
    *(_QWORD *)(a1 + 560) = 0; /*0x80582*/
  }
  return result; /*0x8058d*/
}

// [4/50] Address: 0x99980
// Method: SetupTriggerPopup::SetupTriggerPopup
// Hidden C++ exception states: #wind=2
__int64 __fastcall SetupTriggerPopup_SetupTriggerPopup(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  FLAlertLayer_FLAlertLayer(); /*0x99997*/
  *(_QWORD *)a1 = &SetupTriggerPopup::`vftable'; /*0x999a4*/
  *(_QWORD *)(a1 + 320) = &SetupTriggerPopup::`vftable'; /*0x999ae*/
  *(_QWORD *)(a1 + 328) = &SetupTriggerPopup::`vftable'; /*0x999bc*/
  *(_QWORD *)(a1 + 336) = &SetupTriggerPopup::`vftable'; /*0x999ca*/
  *(_QWORD *)(a1 + 344) = &SetupTriggerPopup::`vftable'; /*0x999d8*/
  *(_QWORD *)(a1 + 352) = &SetupTriggerPopup::`vftable'; /*0x999e6*/
  *(_QWORD *)(a1 + 408) = &SetupTriggerPopup::`vftable'; /*0x999f4*/
  *(_QWORD *)(a1 + 432) = &SetupTriggerPopup::`vftable'; /*0x99a02*/
  *(_QWORD *)(a1 + 544) = &SetupTriggerPopup::`vftable'; /*0x99a10*/
  *(_QWORD *)(a1 + 664) = &SetupTriggerPopup::`vftable'; /*0x99a1e*/
  *(_QWORD *)(a1 + 672) = &SetupTriggerPopup::`vftable'; /*0x99a2c*/
  *(_QWORD *)(a1 + 680) = 0; /*0x99a35*/
  *(_QWORD *)(a1 + 688) = 0; /*0x99a3c*/
  *(_WORD *)(a1 + 696) = 0; /*0x99a43*/
  *(_QWORD *)(a1 + 704) = 0; /*0x99a4a*/
  *(_QWORD *)(a1 + 712) = 0; /*0x99a51*/
  *(_QWORD *)(a1 + 720) = 0; /*0x99a58*/
  *(_BYTE *)(a1 + 728) = 0; /*0x99a5f*/
  *(_QWORD *)(a1 + 732) = 0; /*0x99a66*/
  *(_DWORD *)(a1 + 740) = 0; /*0x99a6d*/
  *(_BYTE *)(a1 + 744) = 0; /*0x99a73*/
  *(_QWORD *)(a1 + 752) = 0; /*0x99a7a*/
  *(_QWORD *)(a1 + 760) = 0; /*0x99a81*/
  *(_QWORD *)(a1 + 768) = 0; /*0x99a88*/
  *(_QWORD *)(a1 + 776) = 0; /*0x99a8f*/
  *(_QWORD *)(a1 + 784) = 0; /*0x99a96*/
  *(_QWORD *)(a1 + 792) = 0; /*0x99a9d*/
  *(_QWORD *)(a1 + 800) = 0; /*0x99aa4*/
  *(_QWORD *)(a1 + 808) = 0; /*0x99aab*/
  *(_QWORD *)(a1 + 816) = 0; /*0x99ab2*/
  *(_QWORD *)(a1 + 824) = 0; /*0x99ab9*/
  *(_QWORD *)(a1 + 832) = 0; /*0x99ac0*/
  *(_QWORD *)(a1 + 840) = 0; /*0x99ac7*/
  *(_QWORD *)(a1 + 848) = 0; /*0x99ace*/
  *(_QWORD *)(a1 + 856) = 0; /*0x99ad5*/
  *(_QWORD *)(a1 + 864) = 0; /*0x99adc*/
  v2 = operator new(0x28u); /*0x99ae8*/
  *v2 = v2; /*0x99aed*/
  v2[1] = v2; /*0x99af0*/
  v2[2] = v2; /*0x99af4*/
  *((_WORD *)v2 + 12) = 257; /*0x99af8*/
  *(_QWORD *)(a1 + 856) = v2; /*0x99afe*/
  *(_QWORD *)(a1 + 872) = 0; /*0x99b05*/
  *(_QWORD *)(a1 + 880) = 0; /*0x99b0c*/
  v3 = operator new(0x28u); /*0x99b18*/
  *v3 = v3; /*0x99b1d*/
  v3[1] = v3; /*0x99b20*/
  v3[2] = v3; /*0x99b24*/
  *((_WORD *)v3 + 12) = 257; /*0x99b28*/
  *(_QWORD *)(a1 + 872) = v3; /*0x99b2e*/
  *(_WORD *)(a1 + 888) = 0; /*0x99b35*/
  *(_QWORD *)(a1 + 896) = 0; /*0x99b3c*/
  *(_DWORD *)(a1 + 904) = 0; /*0x99b43*/
  *(_DWORD *)(a1 + 908) = 1065353216; /*0x99b49*/
  *(_QWORD *)(a1 + 912) = 0; /*0x99b53*/
  *(_QWORD *)(a1 + 920) = 0; /*0x99b5a*/
  *(_QWORD *)(a1 + 928) = 0; /*0x99b61*/
  *(_QWORD *)(a1 + 936) = 0; /*0x99b68*/
  *(_QWORD *)(a1 + 944) = 0; /*0x99b6f*/
  *(_QWORD *)(a1 + 952) = 0; /*0x99b76*/
  *(_QWORD *)(a1 + 960) = 0; /*0x99b7d*/
  *(_QWORD *)(a1 + 968) = 0; /*0x99b84*/
  *(_BYTE *)(a1 + 976) = 0; /*0x99b8b*/
  *(_QWORD *)(a1 + 984) = 0; /*0x99b92*/
  *(_DWORD *)(a1 + 992) = 10; /*0x99b99*/
  return a1; /*0x99ba6*/
}

// [5/50] Address: 0x1240a0
// Method: SetupTriggerPopup::textInputClosed
__int64 __fastcall SetupTriggerPopup_textInputClosed(__int64 (__fastcall ***a1)(_QWORD))
{
  return (**a1)(a1);
}

// [6/50] Address: 0x18f7d0
// Method: SetupTriggerPopup::addCustomButton
__int64 __fastcall SetupTriggerPopup_addCustomButton(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v5; // rax
  void *v6; // rax
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rax
  cocos2d::CCObject *v14; // rcx

  *a1 = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f7f2*/
  a1[40] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f7fc*/
  a1[41] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f80a*/
  a1[42] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f818*/
  a1[43] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f826*/
  a1[44] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f834*/
  a1[51] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f842*/
  a1[54] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f850*/
  a1[68] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f85e*/
  a1[83] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f86c*/
  a1[84] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f87a*/
  v2 = a1 + 125; /*0x18f881*/
  a1[125] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f88f*/
  v3 = a1 + 126; /*0x18f892*/
  a1[126] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f8a0*/
  a1[127] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f8aa*/
  a1[128] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f8b8*/
  a1[129] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f8c6*/
  a1[130] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f8d4*/
  v4 = a1 + 131; /*0x18f8db*/
  a1[131] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f8e9*/
  a1[132] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f8f3*/
  a1[133] = &EditorSoundConfigInfoLayer::`vftable'; /*0x18f901*/
  v5 = *(_QWORD **)&qword_905FB0; /*0x18f90a*/
  if ( *(_QWORD *)&qword_905FB0 /*0x18f949*/
    || (v6 = operator new(0x690u),
        *(_QWORD *)&qword_905FB0 = sub_214250(v6),
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0),
        (v5 = *(_QWORD **)&qword_905FB0) != 0) )
  {
    if ( (_QWORD *)v5[183] == v2 ) /*0x18f9ba*/
      v5[183] = 0; /*0x18f9bc*/
    if ( !v5 ) /*0x18f9c6*/
    {
      v9 = operator new(0x690u); /*0x18f9cd*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0x18f9da*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x18f9eb*/
      v5 = *(_QWORD **)&qword_905FB0; /*0x18f9ed*/
    }
  }
  else
  {
    v7 = operator new(0x690u); /*0x18f950*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x18f95d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x18f96e*/
    v5 = *(_QWORD **)&qword_905FB0; /*0x18f970*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x18f97a*/
    {
      v8 = operator new(0x690u); /*0x18f981*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v8); /*0x18f98e*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x18f99f*/
      v5 = *(_QWORD **)&qword_905FB0; /*0x18f9a1*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x18f9ab*/
        goto LABEL_16; /*0x18f9ab*/
      goto LABEL_12; /*0x18f9ab*/
    }
  }
  if ( (_QWORD *)v5[184] == v3 ) /*0x18f9fb*/
    v5[184] = 0; /*0x18f9fd*/
LABEL_12:
  if ( !v5 ) /*0x18fa07*/
  {
    v10 = operator new(0x690u); /*0x18fa0e*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x18fa1b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x18fa2c*/
    v5 = *(_QWORD **)&qword_905FB0; /*0x18fa2e*/
  }
  if ( (_QWORD *)v5[186] == v4 ) /*0x18fa3c*/
    v5[186] = 0; /*0x18fa3e*/
LABEL_16:
  v11 = qword_906070; /*0x18fa45*/
  if ( !qword_906070 ) /*0x18fa4f*/
  {
    v12 = operator new(0x3D0u); /*0x18fa56*/
    qword_906070 = sub_47C350(v12); /*0x18fa63*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x18fa74*/
    v11 = qword_906070; /*0x18fa77*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v11, a1 + 133); /*0x18fa85*/
  v13 = a1[148]; /*0x18fa8a*/
  if ( v13 ) /*0x18fa94*/
    *(_QWORD *)(v13 + 664) = 0; /*0x18fa96*/
  v14 = (cocos2d::CCObject *)a1[134]; /*0x18fa9d*/
  if ( v14 ) /*0x18faa7*/
    cocos2d::CCObject::release(v14); /*0x18faa9*/
  return UIPOptionsLayer__dtor_UIPOptionsLayer(a1); /*0x18fab2*/
}

// [7/50] Address: 0x1fc250
// Method: SetupTriggerPopup::valueChanged
void __fastcall SetupTriggerPopup_valueChanged(__int64 a1, unsigned int a2)
{
  cocos2d::CCArray **v2; // r14
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  cocos2d::CCArray *v12; // rbx
  __int64 v13; // rbp
  struct cocos2d::CCObject *v14; // rax
  float v15; // xmm6_4
  cocos2d::CCArray **v16; // r15
  cocos2d::CCArray *v17; // rbp
  __int64 v18; // rbx
  struct cocos2d::CCObject *v19; // rax
  float v20; // xmm6_4
  __int64 v21; // rbx
  int v22; // eax
  int v23; // r8d
  struct cocos2d::CCObject *v24; // rcx
  __int64 v25; // rbx
  int v26; // eax
  int v27; // r8d
  struct cocos2d::CCObject *v28; // rax
  int v29; // r8d
  __int64 v30; // r10
  char v31; // [rsp+70h] [rbp+8h] BYREF

  v2 = (cocos2d::CCArray **)(a1 + 944); /*0x1fc261*/
  if ( !*(_QWORD *)(a1 + 1568) && !cocos2d::CCArray::count(*v2) ) /*0x1fc27a*/
    return; /*0x1fc27a*/
  v5 = cocos2d::CCDirector::sharedDirector(a1); /*0x1fc288*/
  v8 = 0; /*0x1fc29d*/
  if ( !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5) + 157) ) /*0x1fc29f*/
  {
    v6 = *(_DWORD **)(a1 + 1512); /*0x1fc2a8*/
    ++v6[3871]; /*0x1fc2af*/
    v7 = (unsigned int)v6[3892]; /*0x1fc2b5*/
    if ( (int)v7 >= 0 ) /*0x1fc2bd*/
    {
      v9 = v6[3876] - v7; /*0x1fc2c5*/
      v7 = 0; /*0x1fc2c7*/
      if ( v9 > 1 ) /*0x1fc2cc*/
      {
        do /*0x1fc2dc*/
        {
          if ( (int)v7 >= 7 ) /*0x1fc2d3*/
            break; /*0x1fc2d3*/
          v9 = (unsigned int)v9 >> 1; /*0x1fc2d5*/
          v7 = (unsigned int)(v7 + 1); /*0x1fc2d7*/
        }
        while ( (unsigned int)v9 > 1 ); /*0x1fc2dc*/
      }
      v2 = (cocos2d::CCArray **)(a1 + 944); /*0x1fc2e1*/
      ++v6[(int)v7 + 3884]; /*0x1fc2e8*/
    }
    v6[3892] = v6[3876]; /*0x1fc2f5*/
  }
  switch ( a2 ) /*0x1fc316*/
  {
    case '%': /*0x1fc316*/
    case '&': /*0x1fc316*/
      v10 = sub_182B60(v7); /*0x1fc330*/
      v11 = 132; /*0x1fc335*/
      goto LABEL_14; /*0x1fc335*/
    case '\'': /*0x1fc316*/
    case '(': /*0x1fc316*/
    case ')': /*0x1fc316*/
    case '*': /*0x1fc316*/
      v10 = sub_182B60(v7); /*0x1fc318*/
      v11 = 130; /*0x1fc31d*/
      goto LABEL_14; /*0x1fc322*/
    case ',': /*0x1fc316*/
      v10 = sub_182B60(v7); /*0x1fc324*/
      v11 = 131; /*0x1fc329*/
LABEL_14:
      sub_182FE0(v10, v11); /*0x1fc33a*/
      break; /*0x1fc33d*/
    default:
      break;
  }
  EditorUI_createUndoObject(a1, (__int64)v6, 0); /*0x1fc342*/
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 840) + 344LL))(*(_QWORD *)(a1 + 840)) ) /*0x1fc36e*/
  {
    if ( cocos2d::CCArray::count(*v2) ) /*0x1fc52a*/
    {
      if ( a2 == 37 ) /*0x1fc537*/
      {
        sub_1FCE50(a1, *v2); /*0x1fc5c3*/
        return; /*0x1fc5c8*/
      }
      if ( a2 == 38 ) /*0x1fc540*/
      {
        sub_1FD040(a1, *(_QWORD *)(a1 + 944)); /*0x1fc54c*/
        return; /*0x1fc551*/
      }
      v2 = (cocos2d::CCArray **)(a1 + 944); /*0x1fc556*/
    }
    v16 = v2; /*0x1fc568*/
    if ( cocos2d::CCArray::count(*v2) ) /*0x1fc56b*/
    {
      if ( a2 == 39 || a2 == 40 || a2 == 41 || a2 == 42 ) /*0x1fc593*/
      {
        v21 = *(_QWORD *)(a1 + 944); /*0x1fc689*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, (const struct cocos2d::CCPoint *)&unk_9047A8); /*0x1fc69c*/
        sub_1FD230(a1, v21, v23, v22, 0); /*0x1fc6b3*/
        return; /*0x1fc6b8*/
      }
      v16 = (cocos2d::CCArray **)(a1 + 944); /*0x1fc5da*/
    }
    v17 = *v2; /*0x1fc5e1*/
    if ( a2 != 44 ) /*0x1fc5e7*/
    {
      if ( cocos2d::CCArray::count(*v2) ) /*0x1fc731*/
      {
        if ( cocos2d::CCArray::count(*v16) ) /*0x1fc73e*/
        {
          do /*0x1fc779*/
          {
            v28 = cocos2d::CCArray::objectAtIndex(*v16, v8); /*0x1fc755*/
            sub_1FC810(a1, v28, a2, 0); /*0x1fc767*/
            ++v8; /*0x1fc76f*/
          }
          while ( v8 < cocos2d::CCArray::count(*v16) ); /*0x1fc779*/
        }
      }
      else
      {
        if ( (unsigned __int8)sub_19F470(*(unsigned int *)(*(_QWORD *)(a1 + 1568) + 1036LL)) && a2 - 39 <= 3 /*0x1fc7a6*/
          || v29 == 2900 )
        {
          *(_BYTE *)(a1 + 740) = 1; /*0x1fc7a8*/
        }
        sub_1FC810(a1, v30, a2, 0); /*0x1fc7bb*/
        *(_BYTE *)(a1 + 740) = 0; /*0x1fc7c0*/
      }
      return; /*0x1fc779*/
    }
    v18 = *(_QWORD *)(a1 + 1568); /*0x1fc5ed*/
    if ( v17 && cocos2d::CCArray::count(*v2) ) /*0x1fc608*/
    {
      if ( !cocos2d::CCArray::count(v17) ) /*0x1fc621*/
        return; /*0x1fc621*/
      while ( 1 ) /*0x1fc635*/
      {
        v19 = cocos2d::CCArray::objectAtIndex(v17, v8); /*0x1fc635*/
        v20 = LevelEditorLayer_rotationForSlopeNearObject(*(_QWORD *)(a1 + 1512), (__int64)v19); /*0x1fc64d*/
        if ( v20 != -1.0 ) /*0x1fc656*/
          break; /*0x1fc656*/
        if ( ++v8 >= cocos2d::CCArray::count(v17) ) /*0x1fc669*/
          goto LABEL_63; /*0x1fc669*/
      }
    }
    else
    {
      if ( !v18 ) /*0x1fc6c0*/
        return; /*0x1fc6c0*/
      v20 = LevelEditorLayer_rotationForSlopeNearObject(*(_QWORD *)(a1 + 1512), v18); /*0x1fc6d5*/
LABEL_63:
      if ( v20 == -1.0 ) /*0x1fc6dd*/
        return; /*0x1fc6dd*/
    }
    v24 = *(struct cocos2d::CCObject **)(a1 + 1568); /*0x1fc6e3*/
    if ( v24 ) /*0x1fc6ed*/
      LODWORD(v25) = (unsigned int)cocos2d::CCArray::createWithObject(v24); /*0x1fc6f5*/
    else
      v25 = *(_QWORD *)(a1 + 944); /*0x1fc6fa*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, (const struct cocos2d::CCPoint *)&unk_9047A8); /*0x1fc70d*/
    sub_1FD230(a1, v25, v27, v26, 0); /*0x1fc724*/
    return; /*0x1fc729*/
  }
  if ( a2 == 39 || a2 == 40 || a2 == 41 || a2 == 42 ) /*0x1fc392*/
    goto LABEL_30; /*0x1fc392*/
  if ( a2 == 44 ) /*0x1fc39b*/
  {
    v12 = *(cocos2d::CCArray **)(a1 + 944); /*0x1fc3a1*/
    v13 = *(_QWORD *)(a1 + 1568); /*0x1fc3a8*/
    if ( v12 && cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1fc3bf*/
    {
      if ( !cocos2d::CCArray::count(v12) ) /*0x1fc3d4*/
        return; /*0x1fc3d4*/
      while ( 1 ) /*0x1fc3e5*/
      {
        v14 = cocos2d::CCArray::objectAtIndex(v12, v8); /*0x1fc3e5*/
        v15 = LevelEditorLayer_rotationForSlopeNearObject(*(_QWORD *)(a1 + 1512), (__int64)v14); /*0x1fc3fd*/
        if ( v15 != -1.0 ) /*0x1fc402*/
          goto LABEL_30; /*0x1fc402*/
        if ( ++v8 >= cocos2d::CCArray::count(v12) ) /*0x1fc411*/
          goto LABEL_29; /*0x1fc411*/
      }
    }
    if ( v13 ) /*0x1fc418*/
    {
      v15 = LevelEditorLayer_rotationForSlopeNearObject(*(_QWORD *)(a1 + 1512), v13); /*0x1fc42d*/
LABEL_29:
      if ( v15 != -1.0 ) /*0x1fc435*/
LABEL_30:
        sub_1A5320(*(_QWORD *)(a1 + 840)); /*0x1fc43b*/
    }
  }
  else
  {
    if ( a2 == 37 ) /*0x1fc452*/
    {
      *(float *)(*(_QWORD *)(a1 + 840) + 560LL) = -*(float *)(*(_QWORD *)(a1 + 840) + 560LL); /*0x1fc471*/
      (**(void (__fastcall ***)(__int64))(a1 + 440))(a1 + 440); /*0x1fc48b*/
    }
    else
    {
      if ( a2 != 38 ) /*0x1fc492*/
        return; /*0x1fc492*/
      *(float *)(*(_QWORD *)(a1 + 840) + 564LL) = -*(float *)(*(_QWORD *)(a1 + 840) + 564LL); /*0x1fc4b5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 440) + 8LL))(a1 + 440); /*0x1fc4cf*/
    }
    GJTransformControl_updateButtons(*(_QWORD *)(a1 + 840), 0, 0); /*0x1fc4de*/
  }
}

// [8/50] Address: 0x2c37d0
// Method: SetupTriggerPopup::addTitle
// Hidden C++ exception states: #wind=8
void __fastcall SetupTriggerPopup_addTitle(_QWORD *a1, int a2, float a3)
{
  unsigned __int8 v5; // bp
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned __int8 v15; // bl
  cocos2d::CCString *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  void *v21; // [rsp+20h] [rbp-58h]
  void *v22; // [rsp+20h] [rbp-58h]
  void *v23; // [rsp+20h] [rbp-58h]
  void *v24; // [rsp+20h] [rbp-58h]
  void *v25; // [rsp+20h] [rbp-58h]
  void *v26; // [rsp+20h] [rbp-58h]
  void *v27; // [rsp+20h] [rbp-58h]
  _BYTE v28[32]; // [rsp+28h] [rbp-50h] BYREF

  v5 = a3 != 0.0; /*0x2c3800*/
  switch ( a2 ) /*0x2c380d*/
  {
    case -4: /*0x2c380d*/
      v20 = qword_905FD0; /*0x2c3b54*/
      if ( !qword_905FD0 ) /*0x2c3b5e*/
      {
        v27 = operator new(0x6E8u); /*0x2c3b6a*/
        qword_905FD0 = sub_2723A0(v27); /*0x2c3b78*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c3b89*/
        v20 = qword_905FD0; /*0x2c3b8b*/
      }
      *(float *)(v20 + 1140) = a3; /*0x2c3b92*/
      break;
    case -3: /*0x2c380d*/
      v19 = qword_905F60; /*0x2c3b0a*/
      if ( !qword_905F60 ) /*0x2c3b14*/
      {
        v26 = operator new(0x8A8u); /*0x2c3b20*/
        qword_905F60 = sub_5AE20(v26); /*0x2c3b2e*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x2c3b3f*/
        v19 = qword_905F60; /*0x2c3b41*/
      }
      *(_DWORD *)(v19 + 620) = (int)a3; /*0x2c3b4c*/
      break;
    case -2: /*0x2c380d*/
      v13 = qword_905FE0; /*0x2c3992*/
      if ( !qword_905FE0 ) /*0x2c399c*/
      {
        v23 = operator new(0x3E8u); /*0x2c39a8*/
        qword_905FE0 = sub_2D2B40(v23); /*0x2c39b6*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2c39c7*/
        v13 = qword_905FE0; /*0x2c39c9*/
      }
      if ( (unsigned __int8)sub_2E5B30(a1, 12, 17) ) /*0x2c39db*/
      {
        GameStatsManager_getRewardKey(v14, (__int64)v28, 0x11u, 0xCu); /*0x2c39f9*/
        v16 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v13 + 896), v28); /*0x2c3a0b*/
        v15 = cocos2d::CCString::boolValue(v16); /*0x2c3a1a*/
        sub_3C310(v28); /*0x2c3a22*/
      }
      else
      {
        v15 = 0; /*0x2c39e4*/
      }
      if ( !qword_905FE0 ) /*0x2c3a2f*/
      {
        v24 = operator new(0x3E8u); /*0x2c3a3b*/
        qword_905FE0 = sub_2D2B40(v24); /*0x2c3a49*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2c3a5a*/
      }
      if ( (unsigned __int8)sub_2E5B30(v14, 12, 17) ) /*0x2c3a68*/
      {
        if ( v15 != v5 ) /*0x2c3a93*/
        {
          v17 = qword_905FE0; /*0x2c3a99*/
          if ( !qword_905FE0 ) /*0x2c3aa3*/
          {
            v25 = operator new(0x3E8u); /*0x2c3aaf*/
            qword_905FE0 = sub_2D2B40(v25); /*0x2c3abd*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2c3ace*/
            v17 = qword_905FE0; /*0x2c3ad1*/
          }
          GameStatsManager_toggleEnableItem(v17, 0xCu, 0x11u, v5); /*0x2c3ae7*/
          v18 = a1[135]; /*0x2c3aec*/
          if ( v18 ) /*0x2c3af6*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 1440LL))(v18); /*0x2c3aff*/
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 1152LL))(a1, 4294967294LL, v15); /*0x2c3a7d*/
        sub_2C4B20(a1); /*0x2c3a86*/
      }
      break;
    case -1: /*0x2c380d*/
      v11 = qword_905FD0; /*0x2c392f*/
      if ( !qword_905FD0 ) /*0x2c3939*/
      {
        v22 = operator new(0x6E8u); /*0x2c3945*/
        qword_905FD0 = sub_2723A0(v22); /*0x2c3953*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c3964*/
        v11 = qword_905FD0; /*0x2c3966*/
      }
      *(_BYTE *)(v11 + 956) = v5; /*0x2c396d*/
      v12 = a1[135]; /*0x2c3974*/
      if ( v12 ) /*0x2c397e*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 1416LL))(v12); /*0x2c3987*/
      break;
    default:
      v6 = a1[142] /*0x2c387a*/
         & (0x100000001B3LL
          * (HIBYTE(a2)
           ^ (0x100000001B3LL
            * (BYTE2(a2)
             ^ (0x100000001B3LL * ((0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(a2)))))));
      v7 = a1[139]; /*0x2c3881*/
      v8 = *(_QWORD *)(v7 /*0x2c388e*/
                     + 16
                     * (a1[142]
                      & (0x100000001B3LL
                       * (HIBYTE(a2)
                        ^ (0x100000001B3LL
                         * (BYTE2(a2)
                          ^ (0x100000001B3LL
                           * ((0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(a2))))))))
                     + 8);
      v9 = a1[137]; /*0x2c3893*/
      if ( v8 != v9 ) /*0x2c389d*/
      {
        if ( a2 == *(_DWORD *)(v8 + 16) ) /*0x2c38a9*/
        {
LABEL_11:
          if ( !v8 ) /*0x2c38c5*/
            v8 = a1[137]; /*0x2c38c5*/
          if ( v8 != v9 ) /*0x2c38cc*/
          {
            v10 = qword_905FD0; /*0x2c38d2*/
            if ( !qword_905FD0 ) /*0x2c38dc*/
            {
              v21 = operator new(0x6E8u); /*0x2c38e8*/
              qword_905FD0 = sub_2723A0(v21); /*0x2c38f6*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c3903*/
              v10 = qword_905FD0; /*0x2c3906*/
            }
            sub_27ACB0(v10, *(_QWORD *)(v8 + 24), v5); /*0x2c3915*/
            sub_2C3BC0(a1, *(_QWORD *)(v8 + 24), v5); /*0x2c3925*/
          }
          return; /*0x2c392a*/
        }
        while ( v8 != *(_QWORD *)(v7 + 16 * v6) ) /*0x2c38b3*/
        {
          v8 = *(_QWORD *)(v8 + 8); /*0x2c38b5*/
          if ( a2 == *(_DWORD *)(v8 + 16) ) /*0x2c38bc*/
            goto LABEL_11; /*0x2c38bc*/
        }
      }
      v8 = 0; /*0x2c38c0*/
      goto LABEL_11; /*0x2c38c0*/
  }
}

// [9/50] Address: 0x367390
// Method: SetupTriggerPopup::toggleDisableButtons
__int64 __fastcall SetupTriggerPopup_toggleDisableButtons(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *i; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  v2 = *(_QWORD **)(a2 + 8); /*0x36739b*/
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i ) /*0x3673ab*/
  {
    v6 = i[3]; /*0x3673e0*/
    *(_QWORD *)(v6 + 56) = 0; /*0x3673e4*/
    *(_QWORD *)(v6 + 64) = 0; /*0x3673e8*/
    *(_QWORD *)(v6 + 72) = 0; /*0x3673ec*/
    *(_QWORD *)(v6 + 128) = 0x3FF0000000000000LL; /*0x3673f0*/
    *(_QWORD *)(v6 + 136) = 0x3FF0000000000000LL; /*0x3673f7*/
    *(_DWORD *)(v6 + 116) = 0; /*0x3673fe*/
    *(_BYTE *)(v6 + 120) = 0; /*0x367402*/
    *(_DWORD *)(v6 + 124) = 0; /*0x367406*/
    *(_QWORD *)(v6 + 144) = 0; /*0x36740a*/
    *(_QWORD *)(v6 + 152) = 0; /*0x367411*/
    *(_QWORD *)(v6 + 160) = 0; /*0x367418*/
    *(_QWORD *)(v6 + 168) = 0; /*0x36741f*/
    *(_QWORD *)(v6 + 176) = 0; /*0x367426*/
    *(_DWORD *)(v6 + 184) = 0; /*0x36742d*/
    *(_QWORD *)(v6 + 192) = 0; /*0x367434*/
    *(_QWORD *)(v6 + 88) = 0; /*0x36743b*/
    *(_QWORD *)(v6 + 96) = 0; /*0x36743f*/
    *(_QWORD *)(v6 + 104) = 0; /*0x367443*/
    *(_WORD *)(v6 + 112) = 0; /*0x367447*/
    *(_BYTE *)(v6 + 208) = 0; /*0x36744c*/
    *(_QWORD *)(v6 + 200) = 0; /*0x367453*/
    v7 = *(_QWORD *)(v6 + 216); /*0x36745a*/
    if ( v7 != *(_QWORD *)(v6 + 224) ) /*0x367468*/
      *(_QWORD *)(v6 + 224) = v7; /*0x36746a*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0); /*0x367479*/
    *(_DWORD *)(v6 + 28) = 0; /*0x36747c*/
    v8 = *(_QWORD *)a1 + 1528LL; /*0x367483*/
    v9 = *(_QWORD **)(*(_QWORD *)a1 + 1536LL); /*0x36748a*/
    if ( v9 == *(_QWORD **)(*(_QWORD *)a1 + 1544LL) ) /*0x367492*/
    {
      sub_68840(v8, v9, i + 3); /*0x3674a6*/
    }
    else
    {
      *v9 = i[3]; /*0x367498*/
      *(_QWORD *)(v8 + 8) += 8LL; /*0x36749b*/
    }
  }
  return sub_654A0(a2); /*0x3674ce*/
}

// [10/50] Address: 0x3a4900
// Method: SetupTriggerPopup::show
__int64 __fastcall SetupTriggerPopup_show(__int64 a1)
{
  int *v2; // rbx
  cocos2d::CCScene *v3; // rdi
  int v4; // eax

  v2 = (int *)(a1 + 592); /*0x3a4918*/
  v3 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x3a491f*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x3a4926*/
  {
    v3 = *(cocos2d::CCScene **)(a1 + 568); /*0x3a4932*/
  }
  else if ( !*v2 ) /*0x3a4937*/
  {
    if ( cocos2d::CCScene::getHighestChildZ(v3) + 1 >= 105 ) /*0x3a494a*/
      v4 = cocos2d::CCScene::getHighestChildZ(v3) + 1; /*0x3a495c*/
    else
      v4 = 105; /*0x3a494c*/
    *v2 = v4; /*0x3a495e*/
  }
  if ( !*v2 ) /*0x3a4960*/
    *v2 = 105; /*0x3a4968*/
  return (*(__int64 (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v3 + 456LL))(v3, a1);
}

// [11/50] Address: 0x6068d0
// Method: SetupTriggerPopup::onPage
__int64 __fastcall SetupTriggerPopup_onPage(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  int v5; // eax
  int v6; // edx
  bool v7; // sf
  __int64 v8; // rdx

  v4 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)); /*0x6068f8*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x6068fa*/
  v6 = *(_DWORD *)(a1 + 904); /*0x6068fe*/
  v7 = v5 + v6 < 0; /*0x606904*/
  v8 = (unsigned int)(v5 + v6); /*0x606904*/
  *(_DWORD *)(a1 + 904) = v8; /*0x606906*/
  if ( v7 ) /*0x60690c*/
  {
    v8 = v4 + (unsigned int)v8; /*0x60690e*/
LABEL_5:
    *(_DWORD *)(a1 + 904) = v8; /*0x60691b*/
    return SetupTriggerPopup_goToPage(a1, v8, 0); /*0x60691b*/
  }
  if ( (int)v8 > (int)(v4 - 1) ) /*0x606917*/
  {
    v8 = (unsigned int)v8 - v4; /*0x606919*/
    goto LABEL_5; /*0x606919*/
  }
  return SetupTriggerPopup_goToPage(a1, v8, 0); /*0x606927*/
}

// [12/50] Address: 0x606940
// Method: SetupTriggerPopup::getPageContainer
struct cocos2d::CCObject *__fastcall SetupTriggerPopup_getPageContainer(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rbx
  struct cocos2d::CCObject *v6; // rax

  while ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)) <= a2 ) /*0x60695e*/
  {
    v5 = *(cocos2d::CCArray **)(a1 + 896); /*0x606970*/
    v6 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v4); /*0x606977*/
    cocos2d::CCArray::addObject(v5, v6); /*0x606983*/
  }
  return cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 896), a2); /*0x6069a8*/
}

// [13/50] Address: 0x6069c0
// Method: SetupTriggerPopup::goToPage
unsigned int __fastcall SetupTriggerPopup_goToPage(__int64 a1, signed int a2, char a3)
{
  signed int v5; // ebx
  unsigned int result; // eax
  signed int v7; // eax
  cocos2d::CCArray *v8; // rcx
  unsigned int v9; // r12d
  cocos2d::CCArray *v10; // rax
  cocos2d::CCArray *v11; // rbp
  bool v12; // r15
  unsigned int v13; // edi
  unsigned int *v14; // rbx
  int v15; // eax
  struct cocos2d::CCObject *v16; // rax
  struct cocos2d::CCObject *v17; // rsi
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  __int64 v20; // rcx
  unsigned __int8 v21; // r13
  __int64 v22; // rcx
  signed int v23; // [rsp+58h] [rbp+10h]

  v23 = a2; /*0x6069c0*/
  v5 = a2; /*0x6069db*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)); /*0x6069dd*/
  if ( !result ) /*0x6069e5*/
    return result; /*0x6069e5*/
  if ( v5 >= (int)(cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)) - 1) ) /*0x606a01*/
    v7 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)) - 1; /*0x606a14*/
  else
    v7 = v5; /*0x606a03*/
  if ( v7 < 0 ) /*0x606a18*/
  {
    v5 = 0; /*0x606a1a*/
LABEL_9:
    v23 = v5; /*0x606a41*/
    goto LABEL_10; /*0x606a41*/
  }
  if ( v5 >= (int)(cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)) - 1) ) /*0x606a2f*/
  {
    v5 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)) - 1; /*0x606a3e*/
    goto LABEL_9; /*0x606a3e*/
  }
LABEL_10:
  v8 = *(cocos2d::CCArray **)(a1 + 896); /*0x606a45*/
  v9 = 0; /*0x606a4c*/
  *(_DWORD *)(a1 + 904) = v5; /*0x606a4f*/
  *(_BYTE *)(a1 + 976) = a3; /*0x606a56*/
  if ( cocos2d::CCArray::count(v8) ) /*0x606a5d*/
  {
    do /*0x606b46*/
    {
      v10 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 896), v9); /*0x606a8a*/
      v11 = v10; /*0x606a90*/
      v12 = v9 == v5 && !a3; /*0x606aa2*/
      v13 = 0; /*0x606aa8*/
      if ( cocos2d::CCArray::count(v10) ) /*0x606aaa*/
      {
        do /*0x606b2d*/
        {
          v14 = (unsigned int *)cocos2d::CCArray::objectAtIndex(v11, v13); /*0x606ac6*/
          if ( !cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 952), v14[2]) ) /*0x606acc*/
            (*(void (__fastcall **)(unsigned int *, bool))(*(_QWORD *)v14 + 336LL))(v14, v12); /*0x606ae1*/
          v15 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v14 + 56LL))(v14); /*0x606aed*/
          v16 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 760), v15); /*0x606afa*/
          v17 = v16; /*0x606b00*/
          if ( v16 ) /*0x606b06*/
          {
            v18 = *(_QWORD *)v16; /*0x606b08*/
            v19 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 344LL))(v16); /*0x606b0e*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(v18 + 920))(v17, v19); /*0x606b1a*/
          }
          ++v13; /*0x606b23*/
        }
        while ( v13 < cocos2d::CCArray::count(v11) ); /*0x606b2d*/
        v5 = v23; /*0x606b2f*/
      }
      ++v9; /*0x606b3a*/
    }
    while ( v9 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)) ); /*0x606b46*/
  }
  v20 = *(_QWORD *)(a1 + 960); /*0x606b60*/
  v21 = a3 ^ 1; /*0x606b67*/
  if ( v20 ) /*0x606b73*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 336LL))(v20, v21); /*0x606b7c*/
  v22 = *(_QWORD *)(a1 + 968); /*0x606b82*/
  if ( v22 ) /*0x606b8c*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 336LL))(v22, v21); /*0x606b95*/
  sub_606D30(a1); /*0x606b9e*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1080LL))(a1); /*0x606baf*/
}

// [14/50] Address: 0x606c40
// Method: SetupTriggerPopup::toggleGroup
unsigned int __fastcall SetupTriggerPopup_toggleGroup(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // r15d
  cocos2d::CCArray *v5; // r14
  unsigned int v6; // edi
  unsigned int result; // eax
  unsigned int *v8; // rbx
  int v9; // eax
  struct cocos2d::CCObject *v10; // rax
  struct cocos2d::CCObject *v11; // rsi
  __int64 v12; // rbx
  unsigned __int8 v13; // al

  v3 = a3; /*0x606c4e*/
  v5 = (cocos2d::CCArray *)sub_606BC0(); /*0x606c60*/
  (*(void (__fastcall **)(cocos2d::CCArray *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, v3); /*0x606c66*/
  v6 = 0; /*0x606c6d*/
  result = cocos2d::CCArray::count(v5); /*0x606c6f*/
  if ( result ) /*0x606c77*/
  {
    do /*0x606d09*/
    {
      v8 = (unsigned int *)cocos2d::CCArray::objectAtIndex(v5, v6); /*0x606ca2*/
      if ( !cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 952), v8[2]) ) /*0x606ca8*/
        (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v8 + 336LL))(v8, (unsigned __int8)v3); /*0x606cbd*/
      v9 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 56LL))(v8); /*0x606cc9*/
      v10 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 760), v9); /*0x606cd6*/
      v11 = v10; /*0x606cdc*/
      if ( v10 ) /*0x606ce2*/
      {
        v12 = *(_QWORD *)v10; /*0x606ce4*/
        v13 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v10 + 344LL))(v10); /*0x606cea*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(v12 + 920))(v11, v13); /*0x606cf6*/
      }
      ++v6; /*0x606cff*/
      result = cocos2d::CCArray::count(v5); /*0x606d01*/
    }
    while ( v6 < result ); /*0x606d09*/
  }
  return result; /*0x606d15*/
}

// [15/50] Address: 0x606f90
// Method: SetupTriggerPopup::addCloseButton
// Hidden C++ exception states: #wind=2
double __fastcall SetupTriggerPopup_addCloseButton(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  cocos2d::CCObject *v5; // rdi
  __int64 v6; // rax
  void *v8; // [rsp+50h] [rbp-38h]

  LODWORD(v4) = (_DWORD)a2; /*0x606fb6*/
  if ( (unsigned __int64)a2[3] > 0xF ) /*0x606fbe*/
    v4 = *a2; /*0x606fc0*/
  v8 = operator new(0x2C8u); /*0x606fcd*/
  v5 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v8); /*0x606fda*/
  if ( v5 ) /*0x606fe0*/
  {
    if ( (unsigned __int8)ButtonSprite_init( /*0x60702a*/
                            (_DWORD)v5,
                            v4,
                            40,
                            0,
                            1061997773,
                            1,
                            (__int64)"goldFont.fnt",
                            (__int64)"GJ_button_01.png",
                            1106247680) )
    {
      cocos2d::CCObject::autorelease(v5); /*0x607036*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x607046*/
      v5 = 0; /*0x607049*/
    }
  }
  v6 = CCMenuItemSpriteExtra_create(v5, 0, a1, sub_9C4B8); /*0x60705a*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v6); /*0x607073*/
  return sub_3C310(a2); /*0x60707f*/
}

// [16/50] Address: 0x607ab0
// Method: SetupTriggerPopup::determineStartValues
void __fastcall SetupTriggerPopup_determineStartValues(__int64 a1)
{
  cocos2d::CCArray *v2; // rsi
  unsigned int v3; // edi
  struct cocos2d::CCObject *v4; // rax

  if ( *(_QWORD *)(a1 + 680) ) /*0x607aba*/
  {
    v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x607ad7*/
    cocos2d::CCArray::addObject(v2, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x607ada*/
  }
  else
  {
    v2 = *(cocos2d::CCArray **)(a1 + 688); /*0x607ae2*/
  }
  if ( v2 ) /*0x607aec*/
  {
    if ( cocos2d::CCArray::count(v2) ) /*0x607af5*/
    {
      v3 = 0; /*0x607b0b*/
      *(_WORD *)(a1 + 696) = 257; /*0x607b0d*/
      *(_BYTE *)(a1 + 728) = 1; /*0x607b16*/
      *(_BYTE *)(a1 + 889) = 1; /*0x607b1d*/
      if ( cocos2d::CCArray::count(v2) ) /*0x607b24*/
      {
        while ( 1 ) /*0x607b35*/
        {
          v4 = cocos2d::CCArray::objectAtIndex(v2, v3); /*0x607b35*/
          if ( *((_DWORD *)v4 + 314) != 1 ) /*0x607b42*/
            break; /*0x607b42*/
          if ( !*((_BYTE *)v4 + 1488) ) /*0x607b44*/
            *(_BYTE *)(a1 + 696) = 0; /*0x607b4d*/
          if ( !*((_BYTE *)v4 + 1489) ) /*0x607b54*/
            *(_BYTE *)(a1 + 697) = 0; /*0x607b5d*/
          if ( !*((_BYTE *)v4 + 1680) ) /*0x607b64*/
            *(_BYTE *)(a1 + 728) = 0; /*0x607b6d*/
          if ( ++v3 >= cocos2d::CCArray::count(v2) ) /*0x607b81*/
            return; /*0x607b81*/
        }
        *(_BYTE *)(a1 + 889) = 0; /*0x607b93*/
      }
    }
  }
}

// [17/50] Address: 0x607e10
// Method: SetupTriggerPopup::updateMultiTriggerBtn
void __fastcall SetupTriggerPopup_updateMultiTriggerBtn(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  unsigned int v3; // edi
  struct cocos2d::CCObject *v4; // rax
  __int64 v5; // rdx

  v2 = *(cocos2d::CCArray **)(a1 + 720); /*0x607e19*/
  if ( v2 ) /*0x607e23*/
  {
    v3 = 0; /*0x607e2a*/
    if ( cocos2d::CCArray::count(v2) ) /*0x607e2c*/
    {
      do /*0x607e84*/
      {
        v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 720), v3); /*0x607e49*/
        if ( *(_BYTE *)(a1 + 697) || *(_BYTE *)(a1 + 696) ) /*0x607e5b*/
          LOBYTE(v5) = 1; /*0x607e68*/
        else
          v5 = 0; /*0x607e64*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 336LL))(v4, v5); /*0x607e6d*/
        ++v3; /*0x607e7a*/
      }
      while ( v3 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 720)) ); /*0x607e84*/
    }
  }
}

// [18/50] Address: 0x607f30
// Method: SetupTriggerPopup::textChanged
void __fastcall SetupTriggerPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r8
  const char *v8; // rcx
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rdx
  float v12; // xmm1_4
  char *v13; // rcx
  float TruncatedValue; // xmm0_4
  __int64 v15; // rax
  struct cocos2d::CCObject *v16; // rax
  struct cocos2d::CCObject *v17; // rax
  float v18; // [rsp+30h] [rbp-58h] BYREF
  char *String[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v20; // [rsp+48h] [rbp-40h]

  v2 = (__int64 *)(a1 - 544); /*0x607f4e*/
  if ( !*(_BYTE *)(a1 + 200) ) /*0x607f47*/
  {
    v5 = (*(int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x607f80*/
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x607f86*/
    *(_OWORD *)String = 0; /*0x607f8f*/
    v7 = -1; /*0x607f94*/
    v20 = 0; /*0x607f9b*/
    do /*0x607fa4*/
      ++v7; /*0x607fa1*/
    while ( *(_BYTE *)(v6 + v7) ); /*0x607fa4*/
    sub_3C230(String); /*0x607fb3*/
    v8 = (const char *)String; /*0x607fbe*/
    if ( *((_QWORD *)&v20 + 1) > 0xFu ) /*0x607fc3*/
      v8 = String[0]; /*0x607fc3*/
    v10 = atof(v8); /*0x607fc9*/
    v11 = *((_QWORD *)&v20 + 1); /*0x607fcf*/
    v12 = v10; /*0x607fd7*/
    v18 = v12; /*0x607fdb*/
    if ( *((_QWORD *)&v20 + 1) > 0xFu ) /*0x607fe5*/
    {
      v13 = String[0]; /*0x607fe7*/
      if ( (unsigned __int64)(*((_QWORD *)&v20 + 1) + 1LL) >= 0x1000 ) /*0x607ff9*/
      {
        v13 = (char *)*((_QWORD *)String[0] - 1); /*0x607ffb*/
        if ( (unsigned __int64)(String[0] - v13 - 8) > 0x1F ) /*0x60800e*/
          invoke_watson(0, 0, 0, 0, 0); /*0x608023*/
      }
      j_j_free(v13); /*0x60802a*/
    }
    TruncatedValue = SetupTriggerPopup_getTruncatedValue(v9, v11, *(unsigned int *)(a2 + 728)); /*0x608041*/
    v15 = *v2; /*0x608046*/
    v18 = TruncatedValue; /*0x608050*/
    (*(void (__fastcall **)(__int64 *, _QWORD, float *))(v15 + 1112))(v2, (unsigned int)v5, &v18); /*0x608059*/
    v16 = cocos2d::CCFloat::create(v18); /*0x608065*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 288), v16, v5); /*0x608078*/
    sub_60ABF0(v2, (unsigned int)v5); /*0x608089*/
    (*(void (__fastcall **)(__int64 *, _QWORD))(*v2 + 1184))(v2, (unsigned int)v5); /*0x60809c*/
    v17 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 224), v5); /*0x6080af*/
    if ( v17 ) /*0x6080b8*/
      sub_83840(v17); /*0x6080c0*/
  }
}

// [19/50] Address: 0x6080f0
// Method: SetupTriggerPopup::onClose
// Hidden C++ exception states: #wind=4
__int64 __fastcall SetupTriggerPopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *i; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *v16; // [rsp+30h] [rbp+8h]
  void *v17; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 644) ) /*0x608102*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x60810b*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x608117*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, (struct cocos2d::CCObject *)a1); /*0x608123*/
    *(_BYTE *)(a1 + 644) = 0; /*0x608129*/
  }
  v4 = qword_905FD0; /*0x608130*/
  if ( !qword_905FD0 ) /*0x60813a*/
  {
    v16 = operator new(0x6E8u); /*0x608146*/
    qword_905FD0 = sub_2723A0(v16); /*0x608154*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x608165*/
    v4 = qword_905FD0; /*0x608167*/
  }
  if ( *(_QWORD *)(v4 + 568) ) /*0x60816e*/
  {
    v5 = *(_QWORD *)(a1 + 688); /*0x60817c*/
    v6 = *(_QWORD *)(a1 + 680); /*0x608183*/
    if ( v6 ) /*0x60818d*/
    {
      if ( *(_BYTE *)(v6 + 1263) ) /*0x60818f*/
        cocos2d::CCPoint::operator=(v6 + 1816, &dword_904F10); /*0x6081a6*/
    }
    else if ( v5 ) /*0x6081b1*/
    {
      v7 = *(unsigned int **)(v5 + 56); /*0x6081b3*/
      v8 = *v7; /*0x6081b7*/
      if ( (_DWORD)v8 ) /*0x6081bb*/
      {
        v9 = (__int64 *)*((_QWORD *)v7 + 2); /*0x6081bd*/
        for ( i = &v9[v8 - 1]; v9 <= i; ++v9 ) /*0x6081cc*/
        {
          v11 = *v9; /*0x6081d0*/
          if ( !*v9 ) /*0x6081d0*/
            break; /*0x6081d6*/
          if ( *(_BYTE *)(v11 + 1263) ) /*0x6081d8*/
            cocos2d::CCPoint::operator=(v11 + 1816, &dword_904F10); /*0x6081ef*/
        }
      }
    }
  }
  sub_6082A0(a1); /*0x608201*/
  sub_607BB0(a1); /*0x608209*/
  v12 = qword_905FD0; /*0x60820e*/
  if ( !qword_905FD0 ) /*0x608218*/
  {
    v17 = operator new(0x6E8u); /*0x608224*/
    qword_905FD0 = sub_2723A0(v17); /*0x608232*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x608243*/
    v12 = qword_905FD0; /*0x608245*/
  }
  v13 = *(_QWORD *)(v12 + 568); /*0x60824c*/
  if ( v13 && (*(_QWORD *)(a1 + 680) || *(_QWORD *)(a1 + 688)) ) /*0x608262*/
    *(_BYTE *)(v13 + 15730) = 1; /*0x60826c*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x60827b*/
  LOBYTE(v14) = 1; /*0x608284*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v14);
}

// [20/50] Address: 0x608310
// Method: SetupTriggerPopup::keyDown
// attributes: thunk
__int64 SetupTriggerPopup_keyDown()
{
  return cocos2d::CCLayer::keyDown();
}

// [21/50] Address: 0x608320
// Method: SetupTriggerPopup::sliderBegan
void __fastcall SetupTriggerPopup_sliderBegan(__int64 a1)
{
  cocos2d::CCNode *v1; // rdi
  cocos2d::CCNode *v3; // rax
  cocos2d::CCNode *v4; // rbp
  struct cocos2d::CCAction *v5; // rbx
  cocos2d::CCNode *v6; // rax
  cocos2d::CCNode *v7; // rsi
  struct cocos2d::CCAction *v8; // rbx
  struct cocos2d::CCAction *v9; // rbx

  v1 = (cocos2d::CCNode *)(a1 - 672); /*0x608331*/
  if ( *(_BYTE *)(a1 + 216) ) /*0x60832a*/
  {
    v3 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 88) + 472LL))( /*0x608357*/
                              *(_QWORD *)(a1 - 88),
                              1);
    v4 = v3; /*0x60835d*/
    if ( v3 ) /*0x608363*/
    {
      cocos2d::CCNode::stopActionByTag(v3, 2); /*0x60836d*/
      v5 = cocos2d::CCFadeTo::create(0.15000001, 0); /*0x608388*/
      (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v5 + 64LL))(v5, 2); /*0x608395*/
      cocos2d::CCNode::runAction(v4, v5); /*0x60839e*/
    }
    v6 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 88) + 472LL))( /*0x6083b0*/
                              *(_QWORD *)(a1 - 88),
                              3);
    v7 = v6; /*0x6083bb*/
    if ( v6 ) /*0x6083c1*/
    {
      cocos2d::CCNode::stopActionByTag(v6, 2); /*0x6083cb*/
      v8 = cocos2d::CCFadeTo::create(0.15000001, 0); /*0x6083e6*/
      (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v8 + 64LL))(v8, 2); /*0x6083f3*/
      cocos2d::CCNode::runAction(v7, v8); /*0x6083fc*/
    }
    if ( v1 ) /*0x608405*/
    {
      cocos2d::CCNode::stopActionByTag(v1, 2); /*0x60840f*/
      v9 = cocos2d::CCFadeTo::create(0.15000001, 0); /*0x60842d*/
      (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 2); /*0x608433*/
      cocos2d::CCNode::runAction(v1, v9); /*0x60843d*/
    }
  }
}

// [22/50] Address: 0x608460
// Method: SetupTriggerPopup::sliderEnded
void __fastcall SetupTriggerPopup_sliderEnded(__int64 a1)
{
  cocos2d::CCNode *v1; // rdi
  cocos2d::CCNode *v3; // rax
  cocos2d::CCNode *v4; // rbp
  struct cocos2d::CCAction *v5; // rbx
  cocos2d::CCNode *v6; // rax
  cocos2d::CCNode *v7; // rsi
  struct cocos2d::CCAction *v8; // rbx
  struct cocos2d::CCAction *v9; // rbx

  v1 = (cocos2d::CCNode *)(a1 - 672); /*0x608471*/
  if ( *(_BYTE *)(a1 + 216) ) /*0x60846a*/
  {
    v3 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 88) + 472LL))( /*0x608497*/
                              *(_QWORD *)(a1 - 88),
                              1);
    v4 = v3; /*0x60849d*/
    if ( v3 ) /*0x6084a3*/
    {
      cocos2d::CCNode::stopActionByTag(v3, 2); /*0x6084ad*/
      v5 = cocos2d::CCFadeTo::create(0.15000001, 0xFFu); /*0x6084c8*/
      (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v5 + 64LL))(v5, 2); /*0x6084d5*/
      cocos2d::CCNode::runAction(v4, v5); /*0x6084de*/
    }
    v6 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 88) + 472LL))( /*0x6084f0*/
                              *(_QWORD *)(a1 - 88),
                              3);
    v7 = v6; /*0x6084fb*/
    if ( v6 ) /*0x608501*/
    {
      cocos2d::CCNode::stopActionByTag(v6, 2); /*0x60850b*/
      v8 = cocos2d::CCFadeTo::create(0.15000001, 0xFFu); /*0x608526*/
      (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v8 + 64LL))(v8, 2); /*0x608533*/
      cocos2d::CCNode::runAction(v7, v8); /*0x60853c*/
    }
    if ( v1 ) /*0x608545*/
    {
      cocos2d::CCNode::stopActionByTag(v1, 2); /*0x60854f*/
      v9 = cocos2d::CCFadeTo::create(0.15000001, 0x96u); /*0x60856d*/
      (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 2); /*0x608573*/
      cocos2d::CCNode::runAction(v1, v9); /*0x60857d*/
    }
  }
}

// [23/50] Address: 0x608690
// Method: SetupTriggerPopup::triggerArrowLeft
__int64 __fastcall SetupTriggerPopup_triggerArrowLeft(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x60869f*/
  return SetupTriggerPopup_triggerArrowChanged(a1, v3, 0); /*0x6086aa*/
}

// [24/50] Address: 0x6086c0
// Method: SetupTriggerPopup::triggerArrowRight
__int64 __fastcall SetupTriggerPopup_triggerArrowRight(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // r8

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x6086cf*/
  LOBYTE(v4) = 1; /*0x6086d2*/
  return SetupTriggerPopup_triggerArrowChanged(a1, v3, v4); /*0x6086da*/
}

// [25/50] Address: 0x6086f0
// Method: SetupTriggerPopup::triggerArrowChanged
_BYTE *__fastcall SetupTriggerPopup_triggerArrowChanged(__int64 a1, unsigned int a2)
{
  char v4; // bp
  _BYTE *result; // rax
  unsigned int v6; // [rsp+60h] [rbp+18h] BYREF

  cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 832), (int)a2); /*0x608721*/
  v4 = *(_BYTE *)(a1 + 744); /*0x608735*/
  *(_BYTE *)(a1 + 744) = 1; /*0x608747*/
  v6 = a2; /*0x608755*/
  if ( *(_BYTE *)sub_16C910(a1 + 872, &v6) ) /*0x60876a*/
  {
    v6 = a2; /*0x608774*/
    *(_BYTE *)sub_16C910(a1 + 856, &v6) = 1; /*0x608780*/
  }
  sub_60A5A0(a1, a2); /*0x608793*/
  sub_60ABF0(a1, a2); /*0x6087a0*/
  v6 = a2; /*0x6087aa*/
  result = (_BYTE *)sub_16C910(a1 + 872, &v6); /*0x6087b5*/
  if ( *result ) /*0x6087ba*/
  {
    v6 = a2; /*0x6087c4*/
    result = (_BYTE *)sub_16C910(a1 + 856, &v6); /*0x6087cb*/
    *result = 0; /*0x6087d0*/
  }
  *(_BYTE *)(a1 + 744) = v4; /*0x6087dd*/
  return result; /*0x6087d3*/
}

// [26/50] Address: 0x608800
// Method: SetupTriggerPopup::createValueControl
// Hidden C++ exception states: #wind=2
double __fastcall SetupTriggerPopup_createValueControl(
        int a1,
        int a2,
        __int64 a3,
        const struct cocos2d::CCPoint *a4,
        int a5,
        int a6,
        int a7)
{
  int v11; // edi
  int v12; // eax
  _BYTE v14[8]; // [rsp+88h] [rbp-60h] BYREF
  _QWORD v15[5]; // [rsp+90h] [rbp-58h] BYREF

  v15[4] = a3; /*0x60882d*/
  v11 = sub_3E4F0(v15, a3); /*0x608845*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v14, a4); /*0x608853*/
  sub_6088F0(a1, a2, v11, v12, a5, 0, 1, 6, 0, a6, a7, 0, 0, 0, 2, 0); /*0x6088c4*/
  return sub_3C310(a3); /*0x6088d2*/
}

// [27/50] Address: 0x609570
// Method: SetupTriggerPopup::onDisableValue
__int64 __fastcall SetupTriggerPopup_onDisableValue(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x60957f*/
  return SetupTriggerPopup_updateValue(a1, v3); /*0x60958f*/
}

// [28/50] Address: 0x609680
// Method: SetupTriggerPopup::createToggleValueControl
// Hidden C++ exception states: #wind=2
__int64 __fastcall SetupTriggerPopup_createToggleValueControl(
        int a1,
        int a2,
        __int64 a3,
        const struct cocos2d::CCPoint *a4,
        char a5,
        int a6,
        int a7,
        float a8)
{
  float v12; // xmm2_4
  float v13; // xmm1_4
  cocos2d::CCPoint *v14; // rcx
  const struct cocos2d::CCPoint *v15; // rax
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rbx
  _BYTE v20[8]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE *v22; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v23[8]; // [rsp+78h] [rbp-B0h] BYREF
  _BYTE v24[32]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-88h]

  v25 = a3; /*0x6096c1*/
  if ( a5 ) /*0x6096ee*/
  {
    v12 = 4.0; /*0x6096f0*/
    v13 = 0.0; /*0x6096f8*/
    v14 = (cocos2d::CCPoint *)v20; /*0x6096fb*/
  }
  else
  {
    v12 = 0.0; /*0x609702*/
    v13 = 8.0; /*0x609705*/
    v14 = (cocos2d::CCPoint *)&v22; /*0x60970d*/
  }
  cocos2d::CCPoint::CCPoint(v14, v13, v12); /*0x609712*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v21, v15); /*0x609720*/
  v22 = v24; /*0x60972e*/
  v16 = sub_3E4F0(v24, a3); /*0x609743*/
  cocos2d::CCPoint::operator*(v21, v20); /*0x609754*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v23, a4); /*0x609783*/
  v18 = sub_609810(a1, a2, v16, v17, a5, a6, a7, a8 * 0.69999999, a8 * 0.34999999, a8 * 110.0, (__int64)v20); /*0x6097c6*/
  sub_3C310(a3); /*0x6097cc*/
  return v18; /*0x6097d4*/
}

// [29/50] Address: 0x609a40
// Method: SetupTriggerPopup::createCustomToggleValueControl
// Hidden C++ exception states: #wind=2
struct cocos2d::CCArray *__fastcall SetupTriggerPopup_createCustomToggleValueControl(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        const struct cocos2d::CCPoint *a6,
        char a7,
        unsigned int a8,
        int a9)
{
  cocos2d::CCArray *v10; // r12
  float v11; // xmm2_4
  float v12; // xmm1_4
  cocos2d::CCPoint *v13; // rcx
  const struct cocos2d::CCPoint *v14; // rax
  __int64 v15; // rcx
  struct cocos2d::CCArray *v16; // r15
  int v17; // ebp
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  struct cocos2d::CCObject *v23; // rbx
  _BYTE v27[8]; // [rsp+90h] [rbp-98h] BYREF
  const struct cocos2d::CCPoint *v28; // [rsp+98h] [rbp-90h]
  cocos2d::CCArray *PageContainer; // [rsp+A0h] [rbp-88h]
  _BYTE v30[8]; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE *v31; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v32[8]; // [rsp+B8h] [rbp-70h] BYREF
  _BYTE v33[32]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-48h]

  v34 = a5; /*0x609a83*/
  v28 = a6; /*0x609a93*/
  PageContainer = SetupTriggerPopup_getPageContainer(a1, a8); /*0x609ac4*/
  v10 = (cocos2d::CCArray *)sub_606BC0(a1, (unsigned int)a9); /*0x609ad6*/
  if ( a7 ) /*0x609adb*/
  {
    v11 = 4.0; /*0x609add*/
    v12 = 0.0; /*0x609ae5*/
    v13 = (cocos2d::CCPoint *)v30; /*0x609ae8*/
  }
  else
  {
    v11 = 0.0; /*0x609af2*/
    v12 = 8.0; /*0x609af5*/
    v13 = (cocos2d::CCPoint *)&v31; /*0x609afd*/
  }
  cocos2d::CCPoint::CCPoint(v13, v12, v11); /*0x609b05*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v27, v14); /*0x609b16*/
  v16 = (struct cocos2d::CCArray *)cocos2d::CCArray::create(v15); /*0x609b22*/
  v31 = v33; /*0x609b2d*/
  v17 = sub_3E4F0(v33, a5); /*0x609b45*/
  v18 = *(_QWORD *)(a1 + 584); /*0x609b48*/
  v19 = *(_QWORD *)(a1 + 552); /*0x609b4f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, (const struct cocos2d::CCPoint *)v27); /*0x609b66*/
  v21 = v20; /*0x609b6c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, v28); /*0x609b7f*/
  v23 = (struct cocos2d::CCObject *)sub_6D440( /*0x609c04*/
                                      v17,
                                      (unsigned int)sub_610E88,
                                      a3,
                                      v19,
                                      v22,
                                      a1,
                                      v18,
                                      1060320051,
                                      1051931443,
                                      1121714176,
                                      v21,
                                      (__int64)&qword_6FFF68,
                                      a7,
                                      0,
                                      (__int64)v16);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v23 + 64LL))(v23, a2); /*0x609c1b*/
  *((_BYTE *)v23 + 393) = 1; /*0x609c1e*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 776), v23, (int)a2); /*0x609c32*/
  cocos2d::CCArray::addObjectsFromArray(PageContainer, v16); /*0x609c43*/
  if ( a9 > 0 ) /*0x609c51*/
    cocos2d::CCArray::addObjectsFromArray(v10, v16); /*0x609c59*/
  sub_3C310(a5); /*0x609c63*/
  return v16; /*0x609c6b*/
}

// [30/50] Address: 0x609ca0
// Method: SetupTriggerPopup::addInfoLabel
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall SetupTriggerPopup_addInfoLabel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  const char *v9; // rcx
  struct cocos2d::CCObject *v10; // rdi
  struct cocos2d::CCObject *PageContainer; // rax
  cocos2d::CCArray *v12; // rax

  v9 = (const char *)a2; /*0x609cce*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x609cd6*/
    v9 = *(const char **)a2; /*0x609cd8*/
  v10 = cocos2d::CCLabelBMFont::create(v9, "goldFont.fnt"); /*0x609ce8*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v10 + 160LL))(v10); /*0x609cfb*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x609d1b*/
    *(_QWORD *)(a1 + 584),
    v10,
    1);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v10 + 184LL))(v10, a4); /*0x609d2e*/
  PageContainer = SetupTriggerPopup_getPageContainer(a1, 0); /*0x609d36*/
  cocos2d::CCArray::addObject(PageContainer, v10); /*0x609d41*/
  if ( a6 > 0 ) /*0x609d50*/
  {
    v12 = (cocos2d::CCArray *)sub_606BC0(a1, (unsigned int)a6); /*0x609d55*/
    cocos2d::CCArray::addObject(v12, v10); /*0x609d60*/
  }
  sub_3C310(a2); /*0x609d6a*/
  return v10; /*0x609d72*/
}

// [31/50] Address: 0x609d90
// Method: SetupTriggerPopup::createPlusButton
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall SetupTriggerPopup_createPlusButton(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int a6,
        int a7)
{
  cocos2d::CCArray *v10; // r14
  const char *v11; // rcx
  struct cocos2d::CCSprite *v12; // rbx
  struct cocos2d::CCObject *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCObject *PageContainer; // [rsp+20h] [rbp-78h]
  _BYTE v18[8]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD *v19; // [rsp+30h] [rbp-68h]

  v19 = a5; /*0x609dc9*/
  PageContainer = SetupTriggerPopup_getPageContainer(a1, a6); /*0x609de2*/
  v10 = (cocos2d::CCArray *)sub_606BC0(a1, (unsigned int)a7); /*0x609df2*/
  if ( !a5[2] ) /*0x609df5*/
    sub_3F5A0(a5, "GJ_plus2Btn_001.png", 0x13u); /*0x609e0c*/
  v11 = (const char *)a5; /*0x609e11*/
  if ( a5[3] > 0xFu ) /*0x609e19*/
    v11 = (const char *)*a5; /*0x609e1b*/
  v12 = cocos2d::CCSprite::createWithSpriteFrameName(v11); /*0x609e24*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 160LL))(v12); /*0x609e37*/
  v13 = (struct cocos2d::CCObject *)CCMenuItemSpriteExtra_create(v12, 0, a1, sub_610E94); /*0x609e4e*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, a2); /*0x609e5e*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x609e75*/
    *(_QWORD *)(a1 + 552),
    v13);
  v14 = *(_QWORD *)v13; /*0x609e78*/
  v15 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v18, a3); /*0x609e8a*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v14 + 184))(v13, v15); /*0x609e96*/
  cocos2d::CCArray::addObject(PageContainer, v13); /*0x609ea4*/
  if ( a7 > 0 ) /*0x609ead*/
    cocos2d::CCArray::addObject(v10, v13); /*0x609eb5*/
  sub_3C310(a5); /*0x609ebf*/
  return v13; /*0x609ec7*/
}

// [32/50] Address: 0x60a150
// Method: SetupTriggerPopup::updateDefaultTriggerValues
void __fastcall SetupTriggerPopup_updateDefaultTriggerValues(struct cocos2d::CCObject **a1)
{
  float v1; // xmm0_4
  cocos2d::CCArray *v3; // r13
  struct cocos2d::CCArray *v4; // rax
  unsigned int *v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 i; // r15
  unsigned int *v9; // rbx
  float v10; // xmm6_4
  unsigned int v11; // ebp
  __int64 v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  struct cocos2d::CCArray *v15; // rax
  __int64 v16; // r8
  unsigned int *v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 j; // r15
  unsigned int *v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 *k; // rdi
  cocos2d::CCDictionary *v26; // rdi
  struct cocos2d::CCObject *v27; // rax
  struct cocos2d::CCArray *v28; // rax
  unsigned int *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 m; // rbp
  unsigned int v33; // ebx
  struct cocos2d::CCArray *v34; // rax
  unsigned int *v35; // r14
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 n; // rbp
  __int64 v39; // rbx
  __int64 v40; // r8
  cocos2d::CCDictionary *v41; // rdi
  struct cocos2d::CCObject *v42; // rax

  if ( a1[85] ) /*0x60a158*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x60a175*/
    cocos2d::CCArray::addObject(v3, a1[85]); /*0x60a178*/
  }
  else
  {
    v3 = a1[86]; /*0x60a180*/
  }
  if ( v3 && cocos2d::CCArray::count(v3) ) /*0x60a1b2*/
  {
    v4 = cocos2d::CCDictionary::allKeys(a1[95]); /*0x60a1cc*/
    if ( v4 ) /*0x60a1d5*/
    {
      v5 = (unsigned int *)*((_QWORD *)v4 + 7); /*0x60a1db*/
      v6 = *v5; /*0x60a1df*/
      if ( (_DWORD)v6 ) /*0x60a1e4*/
      {
        v7 = *((_QWORD *)v5 + 2); /*0x60a1ea*/
        for ( i = v7 + 8 * (v6 - 1); v7 <= i; v7 += 8LL ) /*0x60a1f9*/
        {
          if ( !*(_QWORD *)v7 ) /*0x60a220*/
            break; /*0x60a226*/
          v9 = (unsigned int *)*((_QWORD *)v3 + 7); /*0x60a228*/
          v10 = -99999.0; /*0x60a22c*/
          v11 = *(_DWORD *)(*(_QWORD *)v7 + 56LL); /*0x60a22f*/
          v12 = *v9; /*0x60a232*/
          if ( !(_DWORD)v12 ) /*0x60a236*/
            goto LABEL_18; /*0x60a236*/
          v13 = (_QWORD *)*((_QWORD *)v9 + 2); /*0x60a238*/
          v14 = &v13[v12 - 1]; /*0x60a240*/
          if ( v13 > v14 ) /*0x60a247*/
            goto LABEL_18; /*0x60a247*/
          do /*0x60a27c*/
          {
            if ( !*v13 ) /*0x60a250*/
              break; /*0x60a256*/
            SetupTriggerPopup_getTriggerValue(a1, v11); /*0x60a25d*/
            if ( v10 == -99999.0 ) /*0x60a267*/
            {
              v10 = v1; /*0x60a269*/
            }
            else if ( v10 != v1 ) /*0x60a273*/
            {
              goto LABEL_19; /*0x60a273*/
            }
            ++v13; /*0x60a275*/
          }
          while ( v13 <= v14 ); /*0x60a27c*/
          if ( v10 != -99998.0 ) /*0x60a284*/
LABEL_18:
            sub_60A5A0(a1, v11); /*0x60a28e*/
LABEL_19:
          ; /*0x60a293*/
        }
      }
    }
    v15 = cocos2d::CCDictionary::allKeys(a1[94]); /*0x60a2ae*/
    if ( v15 ) /*0x60a2b7*/
    {
      v17 = (unsigned int *)*((_QWORD *)v15 + 7); /*0x60a2bd*/
      v18 = *v17; /*0x60a2c1*/
      if ( (_DWORD)v18 ) /*0x60a2c6*/
      {
        v19 = *((_QWORD *)v17 + 2); /*0x60a2c8*/
        for ( j = v19 + 8 * (v18 - 1); v19 <= j; v19 += 8LL ) /*0x60a2d7*/
        {
          if ( !*(_QWORD *)v19 ) /*0x60a2e0*/
            break; /*0x60a2e6*/
          v21 = (unsigned int *)*((_QWORD *)v3 + 7); /*0x60a2e8*/
          v22 = *(int *)(*(_QWORD *)v19 + 56LL); /*0x60a2ec*/
          v23 = *v21; /*0x60a2f0*/
          if ( (_DWORD)v23 ) /*0x60a2f4*/
          {
            v24 = (__int64 *)*((_QWORD *)v21 + 2); /*0x60a2f6*/
            for ( k = &v24[v23 - 1]; v24 <= k; ++v24 ) /*0x60a305*/
            {
              v16 = *v24; /*0x60a307*/
              if ( !*v24 ) /*0x60a307*/
                break; /*0x60a307*/
              SetupTriggerPopup_getTriggerValue(a1, (unsigned int)v22); /*0x60a314*/
              if ( v1 == 0.0 ) /*0x60a31e*/
              {
                v26 = a1[104]; /*0x60a36f*/
                v1 = 0.0; /*0x60a376*/
                v27 = cocos2d::CCFloat::create(0.0); /*0x60a379*/
                cocos2d::CCDictionary::setObject(v26, v27, v22); /*0x60a388*/
                goto LABEL_30; /*0x60a38e*/
              }
            }
          }
          LOBYTE(v16) = 1; /*0x60a32c*/
          (*((void (__fastcall **)(struct cocos2d::CCObject **, _QWORD, __int64))*a1 + 144))(a1, (unsigned int)v22, v16); /*0x60a334*/
LABEL_30:
          ; /*0x60a33a*/
        }
      }
    }
  }
  else
  {
    v28 = cocos2d::CCDictionary::allKeys(a1[95]); /*0x60a397*/
    if ( v28 ) /*0x60a3a0*/
    {
      v29 = (unsigned int *)*((_QWORD *)v28 + 7); /*0x60a3a2*/
      v30 = *v29; /*0x60a3a6*/
      if ( (_DWORD)v30 ) /*0x60a3aa*/
      {
        v31 = *((_QWORD *)v29 + 2); /*0x60a3ac*/
        for ( m = v31 + 8 * (v30 - 1); v31 <= m; v31 += 8LL ) /*0x60a3bb*/
        {
          if ( !*(_QWORD *)v31 ) /*0x60a3c0*/
            break; /*0x60a3c6*/
          v33 = *(_DWORD *)(*(_QWORD *)v31 + 56LL); /*0x60a3c8*/
          (*((void (__fastcall **)(struct cocos2d::CCObject **, _QWORD))*a1 + 146))(a1, v33); /*0x60a3d3*/
          sub_60A5A0(a1, v33); /*0x60a3e1*/
        }
      }
    }
    v34 = cocos2d::CCDictionary::allKeys(a1[94]); /*0x60a3f6*/
    if ( v34 ) /*0x60a3ff*/
    {
      v35 = (unsigned int *)*((_QWORD *)v34 + 7); /*0x60a405*/
      v36 = *v35; /*0x60a409*/
      if ( (_DWORD)v36 ) /*0x60a40e*/
      {
        v37 = *((_QWORD *)v35 + 2); /*0x60a414*/
        for ( n = v37 + 8 * (v36 - 1); v37 <= n; v37 += 8LL ) /*0x60a423*/
        {
          if ( !*(_QWORD *)v37 ) /*0x60a430*/
            break; /*0x60a436*/
          v39 = *(int *)(*(_QWORD *)v37 + 56LL); /*0x60a43c*/
          if ( (*((float (__fastcall **)(struct cocos2d::CCObject **, _QWORD))*a1 + 146))(a1, (unsigned int)v39) == 0.0 ) /*0x60a453*/
          {
            v41 = a1[104]; /*0x60a455*/
            v42 = cocos2d::CCFloat::create(0.0); /*0x60a45f*/
            cocos2d::CCDictionary::setObject(v41, v42, v39); /*0x60a46e*/
          }
          else
          {
            LOBYTE(v40) = 1; /*0x60a479*/
            (*((void (__fastcall **)(struct cocos2d::CCObject **, _QWORD, __int64))*a1 + 144))( /*0x60a481*/
              a1,
              (unsigned int)v39,
              v40);
          }
        }
      }
    }
  }
}

// [33/50] Address: 0x60a530
// Method: SetupTriggerPopup::getTruncatedValue
float __fastcall SetupTriggerPopup_getTruncatedValue(__int64 a1, float a2, int a3)
{
  float v4; // xmm6_4

  if ( a3 <= 0 ) /*0x60a53f*/
    return (float)(int)a2; /*0x60a549*/
  v4 = 10.0; /*0x60a55b*/
  if ( a3 > 1 ) /*0x60a567*/
    v4 = powf(10.0, (float)a3); /*0x60a579*/
  return roundf(v4 * a2) / v4; /*0x60a54c*/
}

// [34/50] Address: 0x60a650
// Method: SetupTriggerPopup::updateInputNode
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall SetupTriggerPopup_updateInputNode(__int64 a1, int a2, float a3)
{
  __int64 v4; // r12
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct cocos2d::CCObject *v9; // r14
  int v10; // ecx
  int v11; // ecx
  double v12; // xmm1_8
  int v13; // ecx
  int v14; // ecx
  cocos2d::CCString *v15; // rax
  char *CString; // rax
  size_t v17; // r8
  cocos2d::CCString *v18; // rax
  cocos2d::CCString *v19; // rax
  cocos2d::CCString *v20; // rax
  cocos2d::CCString *v21; // rax
  cocos2d::CCString *v22; // rax
  cocos2d::CCString *v23; // rax
  void **v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 v26; // rbx
  void *v27; // rcx
  struct cocos2d::CCObject *result; // rax
  __int128 v29; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-29h]
  __int64 v31; // [rsp+48h] [rbp-21h]
  void *Src[2]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-1h]
  unsigned __int64 v34; // [rsp+70h] [rbp+7h]

  v4 = a2; /*0x60a688*/
  v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 760), a2); /*0x60a695*/
  v9 = v5; /*0x60a69b*/
  if ( v5 ) /*0x60a6a1*/
  {
    *(_OWORD *)Src = 0; /*0x60a6aa*/
    v33 = 0; /*0x60a6b1*/
    v34 = 15; /*0x60a6b5*/
    LOBYTE(Src[0]) = 0; /*0x60a6bd*/
    if ( a3 == -909190.0 ) /*0x60a6ca*/
    {
      v33 = 2; /*0x60a6cc*/
      strcpy((char *)Src, "NA"); /*0x60a6d9*/
    }
    else
    {
      if ( *((_DWORD *)v5 + 181) == 2 || *((_DWORD *)v5 + 181) == 3 || *((_DWORD *)v5 + 181) == 5 ) /*0x60a701*/
      {
        v23 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(int)a3); /*0x60a867*/
        CString = (char *)cocos2d::CCString::getCString(v23); /*0x60a870*/
        v17 = -1; /*0x60a876*/
        do /*0x60a883*/
          ++v17; /*0x60a880*/
        while ( CString[v17] ); /*0x60a883*/
      }
      else
      {
        v10 = *((_DWORD *)v5 + 182); /*0x60a707*/
        if ( v10 ) /*0x60a70f*/
        {
          v11 = v10 - 1; /*0x60a715*/
          v12 = a3; /*0x60a71b*/
          if ( v11 ) /*0x60a724*/
          {
            v13 = v11 - 1; /*0x60a72a*/
            if ( v13 ) /*0x60a72d*/
            {
              v14 = v13 - 1; /*0x60a733*/
              if ( v14 ) /*0x60a736*/
              {
                if ( v14 == 1 ) /*0x60a73b*/
                {
                  v18 = cocos2d::CCString::createWithFormat("%.04f", v12); /*0x60a776*/
                  CString = (char *)cocos2d::CCString::getCString(v18); /*0x60a77f*/
                  v17 = -1; /*0x60a785*/
                  do /*0x60a793*/
                    ++v17; /*0x60a790*/
                  while ( CString[v17] ); /*0x60a793*/
                }
                else
                {
                  v15 = cocos2d::CCString::createWithFormat("%.02f", v12); /*0x60a744*/
                  CString = (char *)cocos2d::CCString::getCString(v15); /*0x60a74d*/
                  v17 = -1; /*0x60a753*/
                  do /*0x60a763*/
                    ++v17; /*0x60a760*/
                  while ( CString[v17] ); /*0x60a763*/
                }
              }
              else
              {
                v19 = cocos2d::CCString::createWithFormat("%.03f", v12); /*0x60a7a6*/
                CString = (char *)cocos2d::CCString::getCString(v19); /*0x60a7af*/
                v17 = -1; /*0x60a7b5*/
                do /*0x60a7c3*/
                  ++v17; /*0x60a7c0*/
                while ( CString[v17] ); /*0x60a7c3*/
              }
            }
            else
            {
              v20 = cocos2d::CCString::createWithFormat("%.02f", v12); /*0x60a7d6*/
              CString = (char *)cocos2d::CCString::getCString(v20); /*0x60a7df*/
              v17 = -1; /*0x60a7e5*/
              do /*0x60a7f3*/
                ++v17; /*0x60a7f0*/
              while ( CString[v17] ); /*0x60a7f3*/
            }
          }
          else
          {
            v21 = cocos2d::CCString::createWithFormat("%.01f", v12); /*0x60a806*/
            CString = (char *)cocos2d::CCString::getCString(v21); /*0x60a80f*/
            v17 = -1; /*0x60a815*/
            do /*0x60a823*/
              ++v17; /*0x60a820*/
            while ( CString[v17] ); /*0x60a823*/
          }
        }
        else
        {
          v22 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(int)a3); /*0x60a837*/
          CString = (char *)cocos2d::CCString::getCString(v22); /*0x60a840*/
          v17 = -1; /*0x60a846*/
          do /*0x60a853*/
            ++v17; /*0x60a850*/
          while ( CString[v17] ); /*0x60a853*/
        }
      }
      sub_3F5A0(Src, CString, v17); /*0x60a891*/
    }
    v29 = 0; /*0x60a899*/
    v30 = 0; /*0x60a89d*/
    v31 = 0; /*0x60a8a1*/
    v24 = Src; /*0x60a8a5*/
    if ( v34 > 0xF ) /*0x60a8ae*/
      v24 = (void **)Src[0]; /*0x60a8ae*/
    v25 = v33; /*0x60a8b3*/
    v26 = 0x7FFFFFFFFFFFFFFFLL; /*0x60a8b7*/
    if ( v33 > 0x7FFFFFFFFFFFFFFFLL ) /*0x60a8c4*/
      sub_8D90(v7, v6, v8); /*0x60a9cd*/
    if ( v33 > 0xF ) /*0x60a8ce*/
    {
      if ( (v33 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x60a8f2*/
      {
        v26 = v33 | 0xF; /*0x60a8f4*/
        if ( (v33 | 0xF) < 0x16 ) /*0x60a8ff*/
          v26 = 22; /*0x60a8ff*/
      }
      *(_QWORD *)&v29 = sub_3C460(v26 + 1); /*0x60a90c*/
      v30 = v25; /*0x60a910*/
      v31 = v26; /*0x60a914*/
      memcpy((void *)v29, v24, v25 + 1); /*0x60a922*/
    }
    else
    {
      v30 = v33; /*0x60a8d3*/
      v31 = 15; /*0x60a8d7*/
      v29 = *(_OWORD *)v24; /*0x60a8e2*/
    }
    CCTextInputNode_setString(v9, &v29); /*0x60a92e*/
    if ( v34 > 0xF ) /*0x60a93c*/
    {
      v27 = Src[0]; /*0x60a941*/
      if ( v34 + 1 >= 0x1000 ) /*0x60a94f*/
      {
        v27 = (void *)*((_QWORD *)Src[0] - 1); /*0x60a955*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v27 - 8) > 0x1F ) /*0x60a964*/
          invoke_watson(0, 0, 0, 0, 0); /*0x60a975*/
      }
      j_j_free(v27); /*0x60a97c*/
    }
  }
  result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 984), v4); /*0x60a98b*/
  if ( result ) /*0x60a994*/
    return (struct cocos2d::CCObject *)sub_3C5CB0(result); /*0x60a999*/
  return result; /*0x60a99e*/
}

// [35/50] Address: 0x60a9e0
// Method: SetupTriggerPopup::updateSlider
struct cocos2d::CCObject *__fastcall SetupTriggerPopup_updateSlider(cocos2d::CCDictionary **a1, unsigned int a2)
{
  cocos2d::CCDictionary *v2; // rbx
  __int64 v4; // rdi
  struct cocos2d::CCObject *result; // rax

  v2 = *a1; /*0x60a9ef*/
  v4 = (int)a2; /*0x60a9f5*/
  (*((void (__fastcall **)(cocos2d::CCDictionary **, _QWORD))*a1 + 146))(a1, a2); /*0x60a9ff*/
  (*((void (__fastcall **)(cocos2d::CCDictionary **, _QWORD))v2 + 148))(a1, (unsigned int)v4); /*0x60aa0d*/
  result = cocos2d::CCDictionary::objectForKey(a1[96], v4); /*0x60aa20*/
  if ( result ) /*0x60aa29*/
    return (struct cocos2d::CCObject *)sub_83840(result); /*0x60aa31*/
  return result; /*0x60aa36*/
}

// [36/50] Address: 0x60aa50
// Method: SetupTriggerPopup::updateToggleItem
struct cocos2d::CCObject *__fastcall SetupTriggerPopup_updateToggleItem(__int64 a1, int a2, unsigned __int8 a3)
{
  cocos2d::CCDictionary *v3; // rbx
  __int64 v6; // rdi
  struct cocos2d::CCObject *v7; // rax
  struct cocos2d::CCObject *result; // rax

  v3 = *(cocos2d::CCDictionary **)(a1 + 832); /*0x60aa64*/
  v6 = a2; /*0x60aa72*/
  v7 = cocos2d::CCFloat::create((float)a3); /*0x60aa7c*/
  cocos2d::CCDictionary::setObject(v3, v7, v6); /*0x60aa8b*/
  result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), v6); /*0x60aa9b*/
  if ( result ) /*0x60aaa4*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle(result, a3); /*0x60aaad*/
  return result; /*0x60aab2*/
}

// [37/50] Address: 0x60aad0
// Method: SetupTriggerPopup::getValue
double __fastcall SetupTriggerPopup_getValue(__int64 a1, int a2)
{
  double result; // xmm0_8
  struct cocos2d::CCObject *v5; // rax
  cocos2d::CCArray *v6; // rcx
  unsigned int v7; // edi
  double v8; // xmm6_8

  if ( a2 >= 0 ) /*0x60aae2*/
  {
    if ( *(_QWORD *)(a1 + 680) ) /*0x60ab17*/
    {
      SetupTriggerPopup_getTriggerValue(a1, (unsigned int)a2); /*0x60ab2f*/
    }
    else
    {
      v6 = *(cocos2d::CCArray **)(a1 + 688); /*0x60ab34*/
      if ( v6 && cocos2d::CCArray::count(v6) ) /*0x60ab4f*/
      {
        v7 = 0; /*0x60ab61*/
        for ( *(_QWORD *)&v8 = 3351465856LL; v7 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); ++v7 ) /*0x60ab6d*/
        {
          cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v7); /*0x60ab89*/
          SetupTriggerPopup_getTriggerValue(a1, (unsigned int)a2); /*0x60ab97*/
          if ( *(float *)&v8 == -99999.0 ) /*0x60aba1*/
          {
            v8 = result; /*0x60aba3*/
          }
          else if ( *(float *)&result != *(float *)&v8 ) /*0x60abad*/
          {
            return 0.0; /*0x60abad*/
          }
        }
        return v8; /*0x60abc2*/
      }
      else
      {
        return 0.0; /*0x60abc7*/
      }
    }
  }
  else
  {
    v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 832), a2); /*0x60aaee*/
    if ( v5 ) /*0x60aaf7*/
      *(_QWORD *)&result = *((unsigned int *)v5 + 14); /*0x60aaf9*/
    else
      return 0.0; /*0x60ab09*/
  }
  return result; /*0x60aafe*/
}

// [38/50] Address: 0x60d040
// Method: SetupTriggerPopup::getTriggerValue
double __fastcall SetupTriggerPopup_getTriggerValue(__int64 a1, int a2, __int64 a3)
{
  double result; // xmm0_8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1; /*0x60d040*/
  switch ( a2 ) /*0x60d06c*/
  {
    case 10: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1468); /*0x60d0d2*/
      break; /*0x60d0df*/
    case 12: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1808)); /*0x60e1c3*/
      break; /*0x60e1ca*/
    case 28: /*0x60d06c*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v4, (const struct cocos2d::CCPoint *)(a3 + 1504)); /*0x60ddd9*/
      *(_QWORD *)&result = (unsigned int)v4; /*0x60dddf*/
      break; /*0x60dde9*/
    case 29: /*0x60d06c*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v4, (const struct cocos2d::CCPoint *)(a3 + 1504)); /*0x60ddf6*/
      *(_QWORD *)&result = HIDWORD(v4); /*0x60ddfc*/
      break; /*0x60de06*/
    case 30: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1512)); /*0x60d0e9*/
      break; /*0x60d0f0*/
    case 51: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1480)); /*0x60d16b*/
      break; /*0x60d172*/
    case 55: /*0x60d06c*/
    case 375: /*0x60d06c*/
    case 471: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1880)); /*0x60d8d0*/
      break; /*0x60d8d7*/
    case 56: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1653)); /*0x60da49*/
      break; /*0x60da50*/
    case 58: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1520)); /*0x60de68*/
      break; /*0x60de6f*/
    case 59: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1521)); /*0x60de7c*/
      break; /*0x60de83*/
    case 63: /*0x60d06c*/
    case 335: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1920); /*0x60d900*/
      break; /*0x60d90d*/
    case 65: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1649)); /*0x60d32a*/
      break; /*0x60d331*/
    case 66: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1650)); /*0x60d33e*/
      break; /*0x60d345*/
    case 68: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1560); /*0x60df40*/
      break; /*0x60df4d*/
    case 69: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1564)); /*0x60df57*/
      break; /*0x60df5e*/
    case 70: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1568)); /*0x60df6b*/
      break; /*0x60df72*/
    case 71: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1484)); /*0x60d17c*/
      break; /*0x60d183*/
    case 72: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1584); /*0x60d0ff*/
      break; /*0x60d10c*/
    case 73: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1588); /*0x60d10d*/
      break; /*0x60d11a*/
    case 76: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1668)); /*0x60d8bc*/
      break; /*0x60d8c3*/
    case 77: /*0x60d06c*/
    case 159: /*0x60d06c*/
    case 166: /*0x60d06c*/
    case 385: /*0x60d06c*/
    case 476: /*0x60d06c*/
    case 498: /*0x60d06c*/
    case 516: /*0x60d06c*/
    case 533: /*0x60d06c*/
    case 602: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1856)); /*0x60da90*/
      break; /*0x60da97*/
    case 78: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1703)); /*0x60da35*/
      break; /*0x60da3c*/
    case 80: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1696)); /*0x60d9fc*/
      break; /*0x60da03*/
    case 85: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1516); /*0x60d0f1*/
      break; /*0x60d0fe*/
    case 87: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1680)); /*0x60dfe8*/
      break; /*0x60dfef*/
    case 88: /*0x60d06c*/
    case 160: /*0x60d06c*/
    case 167: /*0x60d06c*/
    case 222: /*0x60d06c*/
    case 386: /*0x60d06c*/
    case 448: /*0x60d06c*/
    case 477: /*0x60d06c*/
    case 501: /*0x60d06c*/
    case 517: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1860)); /*0x60daa1*/
      break; /*0x60daa8*/
    case 90: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1592); /*0x60d11b*/
      break; /*0x60d128*/
    case 91: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1596); /*0x60d129*/
      break; /*0x60d136*/
    case 92: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1600)); /*0x60d140*/
      *(float *)&result = floorf(*(float *)&result / 3.0); /*0x60d14f*/
      break; /*0x60d14f*/
    case 93: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1683)); /*0x60d2c6*/
      break; /*0x60d2cd*/
    case 94: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1693)); /*0x60da21*/
      break; /*0x60da28*/
    case 95: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1684)); /*0x60da0d*/
      break; /*0x60da14*/
    case 97: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1408); /*0x60e004*/
      break; /*0x60e011*/
    case 98: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1404)); /*0x60dffc*/
      break; /*0x60e003*/
    case 99: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1458)); /*0x60d62a*/
      break; /*0x60d631*/
    case 100: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1524)); /*0x60de43*/
      break; /*0x60de4a*/
    case 101: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1528)); /*0x60de54*/
      break; /*0x60de5b*/
    case 102: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1681)); /*0x60dfc0*/
      break; /*0x60dfc7*/
    case 104: /*0x60d06c*/
    case 169: /*0x60d06c*/
    case 387: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1864)); /*0x60dab5*/
      break; /*0x60dabc*/
    case 105: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1604); /*0x60d154*/
      break; /*0x60d161*/
    case 106: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1424)); /*0x60e0aa*/
      break; /*0x60e0b1*/
    case 107: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1428); /*0x60e0c6*/
      break; /*0x60e0d3*/
    case 110: /*0x60d06c*/
    case 445: /*0x60d06c*/
    case 460: /*0x60d06c*/
    case 540: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1856)); /*0x60d652*/
      break; /*0x60d659*/
    case 122: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1432)); /*0x60e0be*/
      break; /*0x60e0c5*/
    case 123: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1433)); /*0x60e096*/
      break; /*0x60e09d*/
    case 126: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1434)); /*0x60e06e*/
      break; /*0x60e075*/
    case 127: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1435)); /*0x60e05a*/
      break; /*0x60e061*/
    case 133: /*0x60d06c*/
    case 431: /*0x60d06c*/
    case 474: /*0x60d06c*/
    case 551: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1872)); /*0x60e1eb*/
      break; /*0x60e1f2*/
    case 138: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1700)); /*0x60d29e*/
      break; /*0x60d2a5*/
    case 139: /*0x60d06c*/
    case 388: /*0x60d06c*/
    case 584: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1865)); /*0x60dac9*/
      break; /*0x60dad0*/
    case 141: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1522)); /*0x60de90*/
      break; /*0x60de97*/
    case 142: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1523)); /*0x60dea4*/
      break; /*0x60deab*/
    case 143: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1532); /*0x60de1b*/
      break; /*0x60de28*/
    case 144: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1536); /*0x60de29*/
      break; /*0x60de36*/
    case 148: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1752); /*0x60d396*/
      break; /*0x60d3a3*/
    case 149: /*0x60d06c*/
    case 150: /*0x60d06c*/
    case 175: /*0x60d06c*/
    case 292: /*0x60d06c*/
    case 520: /*0x60d06c*/
    case 547: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1856); /*0x60d977*/
      break; /*0x60d984*/
    case 151: /*0x60d06c*/
    case 176: /*0x60d06c*/
    case 213: /*0x60d06c*/
    case 293: /*0x60d06c*/
    case 521: /*0x60d06c*/
    case 526: /*0x60d06c*/
    case 548: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1860); /*0x60d985*/
      break; /*0x60d992*/
    case 153: /*0x60d06c*/
    case 468: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1873)); /*0x60e129*/
      break; /*0x60e130*/
    case 154: /*0x60d06c*/
    case 469: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1874)); /*0x60e13d*/
      break; /*0x60e144*/
    case 161: /*0x60d06c*/
    case 209: /*0x60d06c*/
    case 223: /*0x60d06c*/
    case 478: /*0x60d06c*/
    case 499: /*0x60d06c*/
    case 518: /*0x60d06c*/
    case 604: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1864)); /*0x60d1eb*/
      break; /*0x60d1f2*/
    case 162: /*0x60d06c*/
    case 203: /*0x60d06c*/
    case 220: /*0x60d06c*/
    case 519: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1868)); /*0x60d1fc*/
      break; /*0x60d203*/
    case 163: /*0x60d06c*/
    case 204: /*0x60d06c*/
    case 221: /*0x60d06c*/
    case 530: /*0x60d06c*/
    case 560: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1872)); /*0x60d4be*/
      break; /*0x60d4c5*/
    case 165: /*0x60d06c*/
    case 205: /*0x60d06c*/
    case 252: /*0x60d06c*/
    case 447: /*0x60d06c*/
    case 480: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1876)); /*0x60d68b*/
      break; /*0x60d692*/
    case 171: /*0x60d06c*/
    case 465: /*0x60d06c*/
    case 577: /*0x60d06c*/
    case 587: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1876)); /*0x60d889*/
      break; /*0x60d890*/
    case 172: /*0x60d06c*/
    case 589: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1877)); /*0x60d89d*/
      break; /*0x60d8a4*/
    case 173: /*0x60d06c*/
    case 199: /*0x60d06c*/
    case 206: /*0x60d06c*/
    case 253: /*0x60d06c*/
    case 481: /*0x60d06c*/
    case 525: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1880)); /*0x60d825*/
      break; /*0x60d82c*/
    case 177: /*0x60d06c*/
    case 301: /*0x60d06c*/
    case 449: /*0x60d06c*/
    case 451: /*0x60d06c*/
    case 479: /*0x60d06c*/
    case 522: /*0x60d06c*/
    case 550: /*0x60d06c*/
    case 582: /*0x60d06c*/
    case 588: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1868); /*0x60d9a1*/
      break; /*0x60d9ae*/
    case 179: /*0x60d06c*/
    case 454: /*0x60d06c*/
    case 483: /*0x60d06c*/
    case 523: /*0x60d06c*/
    case 583: /*0x60d06c*/
    case 590: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1872); /*0x60d9af*/
      break; /*0x60d9bc*/
    case 180: /*0x60d06c*/
    case 470: /*0x60d06c*/
    case 546: /*0x60d06c*/
    case 552: /*0x60d06c*/
    case 563: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1876); /*0x60d9bd*/
      break; /*0x60d9ca*/
    case 181: /*0x60d06c*/
    case 346: /*0x60d06c*/
    case 554: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1884); /*0x60d693*/
      break; /*0x60d6a0*/
    case 182: /*0x60d06c*/
    case 298: /*0x60d06c*/
    case 456: /*0x60d06c*/
    case 484: /*0x60d06c*/
    case 555: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1888); /*0x60d3b5*/
      break; /*0x60d3c2*/
    case 183: /*0x60d06c*/
    case 236: /*0x60d06c*/
    case 309: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1904); /*0x60d3d7*/
      break; /*0x60d3e4*/
    case 184: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1900)); /*0x60d07a*/
      break; /*0x60d081*/
    case 185: /*0x60d06c*/
    case 389: /*0x60d06c*/
    case 443: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1912)); /*0x60daee*/
      break; /*0x60daf5*/
    case 186: /*0x60d06c*/
    case 464: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1913)); /*0x60d719*/
      break; /*0x60d720*/
    case 187: /*0x60d06c*/
    case 510: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1914)); /*0x60d72d*/
      break; /*0x60d734*/
    case 188: /*0x60d06c*/
    case 591: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1915)); /*0x60d741*/
      break; /*0x60d748*/
    case 189: /*0x60d06c*/
    case 506: /*0x60d06c*/
    case 553: /*0x60d06c*/
    case 564: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1880); /*0x60d4c6*/
      break; /*0x60d4d3*/
    case 190: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1916)); /*0x60d08e*/
      break; /*0x60d095*/
    case 191: /*0x60d06c*/
    case 300: /*0x60d06c*/
    case 450: /*0x60d06c*/
    case 527: /*0x60d06c*/
    case 545: /*0x60d06c*/
    case 549: /*0x60d06c*/
    case 586: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1864); /*0x60d993*/
      break; /*0x60d9a0*/
    case 192: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1919)); /*0x60d0ca*/
      break; /*0x60d0d1*/
    case 194: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1917)); /*0x60d0a2*/
      break; /*0x60d0a9*/
    case 195: /*0x60d06c*/
    case 218: /*0x60d06c*/
    case 379: /*0x60d06c*/
    case 472: /*0x60d06c*/
    case 482: /*0x60d06c*/
    case 565: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1884)); /*0x60d95b*/
      break; /*0x60d962*/
    case 196: /*0x60d06c*/
    case 410: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1920)); /*0x60db9b*/
      break; /*0x60dba2*/
    case 197: /*0x60d06c*/
    case 411: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1924)); /*0x60dbac*/
      break; /*0x60dbb3*/
    case 200: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1701)); /*0x60d2b2*/
      break; /*0x60d2b9*/
    case 201: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1702)); /*0x60d2da*/
      break; /*0x60d2e1*/
    case 207: /*0x60d06c*/
    case 368: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1884)); /*0x60d839*/
      break; /*0x60d840*/
    case 208: /*0x60d06c*/
    case 585: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1885)); /*0x60d84d*/
      break; /*0x60d854*/
    case 212: /*0x60d06c*/
    case 461: /*0x60d06c*/
    case 504: /*0x60d06c*/
    case 541: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1857)); /*0x60d666*/
      break; /*0x60d66d*/
    case 214: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1456)); /*0x60e082*/
      break; /*0x60e089*/
    case 219: /*0x60d06c*/
    case 392: /*0x60d06c*/
    case 532: /*0x60d06c*/
    case 580: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1888)); /*0x60db13*/
      break; /*0x60db1a*/
    case 224: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1980)); /*0x60d20d*/
      break; /*0x60d214*/
    case 225: /*0x60d06c*/
    case 596: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2008)); /*0x60dd92*/
      break; /*0x60dd99*/
    case 231: /*0x60d06c*/
    case 354: /*0x60d06c*/
    case 391: /*0x60d06c*/
    case 593: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1908)); /*0x60dada*/
      break; /*0x60dae1*/
    case 232: /*0x60d06c*/
    case 408: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1912)); /*0x60db79*/
      break; /*0x60db80*/
    case 233: /*0x60d06c*/
    case 290: /*0x60d06c*/
    case 299: /*0x60d06c*/
    case 350: /*0x60d06c*/
    case 557: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1892); /*0x60d91c*/
      break; /*0x60d929*/
    case 234: /*0x60d06c*/
    case 291: /*0x60d06c*/
    case 348: /*0x60d06c*/
    case 574: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1896); /*0x60d6b5*/
      break; /*0x60d6c2*/
    case 235: /*0x60d06c*/
    case 308: /*0x60d06c*/
    case 349: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1900); /*0x60d6c3*/
      break; /*0x60d6d0*/
    case 237: /*0x60d06c*/
    case 426: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1960)); /*0x60dcce*/
      break; /*0x60dcd5*/
    case 238: /*0x60d06c*/
    case 458: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1964)); /*0x60dd48*/
      break; /*0x60dd4f*/
    case 239: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1968)); /*0x60d232*/
      break; /*0x60d239*/
    case 240: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1972)); /*0x60d243*/
      break; /*0x60d24a*/
    case 241: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1988)); /*0x60d221*/
      break; /*0x60d228*/
    case 242: /*0x60d06c*/
    case 416: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1936)); /*0x60dc21*/
      break; /*0x60dc28*/
    case 243: /*0x60d06c*/
    case 316: /*0x60d06c*/
    case 421: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1940); /*0x60dc79*/
      break; /*0x60dc86*/
    case 248: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1948)); /*0x60d254*/
      break; /*0x60d25b*/
    case 249: /*0x60d06c*/
    case 318: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1952); /*0x60d43f*/
      break; /*0x60d44c*/
    case 260: /*0x60d06c*/
    case 455: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1976)); /*0x60dd26*/
      break; /*0x60dd2d*/
    case 261: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1989)); /*0x60d268*/
      break; /*0x60d26f*/
    case 262: /*0x60d06c*/
    case 457: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1984)); /*0x60dd37*/
      break; /*0x60dd3e*/
    case 263: /*0x60d06c*/
    case 327: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1992); /*0x60d4fe*/
      break; /*0x60d50b*/
    case 264: /*0x60d06c*/
    case 328: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1996); /*0x60d50c*/
      break; /*0x60d519*/
    case 265: /*0x60d06c*/
    case 329: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2000); /*0x60d51a*/
      break; /*0x60d527*/
    case 270: /*0x60d06c*/
    case 332: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2012); /*0x60d544*/
      break; /*0x60d551*/
    case 271: /*0x60d06c*/
    case 333: /*0x60d06c*/
    case 598: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2016); /*0x60ddab*/
      break; /*0x60ddb8*/
    case 275: /*0x60d06c*/
    case 438: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2020); /*0x60d270*/
      break; /*0x60d27d*/
    case 276: /*0x60d06c*/
    case 505: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2028)); /*0x60d28a*/
      break; /*0x60d291*/
    case 278: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2029)); /*0x60d352*/
      break; /*0x60d359*/
    case 280: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1848)); /*0x60d366*/
      break; /*0x60d36d*/
    case 281: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1849)); /*0x60d37a*/
      break; /*0x60d381*/
    case 282: /*0x60d06c*/
    case 358: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2032); /*0x60d76b*/
      break; /*0x60d778*/
    case 283: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2036)); /*0x60d38e*/
      break; /*0x60d395*/
    case 286: /*0x60d06c*/
    case 340: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2024); /*0x60d57a*/
      break; /*0x60d587*/
    case 287: /*0x60d06c*/
    case 407: /*0x60d06c*/
    case 513: /*0x60d06c*/
    case 581: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1928)); /*0x60db68*/
      break; /*0x60db6f*/
    case 288: /*0x60d06c*/
    case 314: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1932); /*0x60d40f*/
      break; /*0x60d41c*/
    case 305: /*0x60d06c*/
    case 599: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2020)); /*0x60ddc5*/
      break; /*0x60ddcc*/
    case 306: /*0x60d06c*/
    case 380: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1896)); /*0x60d96f*/
      break; /*0x60d976*/
    case 307: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1897)); /*0x60d3cf*/
      break; /*0x60d3d6*/
    case 310: /*0x60d06c*/
    case 406: /*0x60d06c*/
    case 512: /*0x60d06c*/
    case 524: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1908); /*0x60db4e*/
      break; /*0x60db5b*/
    case 311: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1912); /*0x60d3e5*/
      break; /*0x60d3f2*/
    case 312: /*0x60d06c*/
    case 556: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1924); /*0x60d90e*/
      break; /*0x60d91b*/
    case 313: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1928); /*0x60d401*/
      break; /*0x60d40e*/
    case 315: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1936); /*0x60d41d*/
      break; /*0x60d42a*/
    case 317: /*0x60d06c*/
    case 422: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1944); /*0x60dc87*/
      break; /*0x60dc94*/
    case 319: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1956); /*0x60d44d*/
      break; /*0x60d45a*/
    case 320: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1964); /*0x60d46f*/
      break; /*0x60d47c*/
    case 321: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1968); /*0x60d47d*/
      break; /*0x60d48a*/
    case 322: /*0x60d06c*/
    case 434: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1972); /*0x60dd0f*/
      break; /*0x60dd1c*/
    case 323: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1976); /*0x60d48b*/
      break; /*0x60d498*/
    case 324: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1980); /*0x60d499*/
      break; /*0x60d4a6*/
    case 325: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1984); /*0x60d4a7*/
      break; /*0x60d4b4*/
    case 326: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1988); /*0x60d4f0*/
      break; /*0x60d4fd*/
    case 330: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2004); /*0x60d528*/
      break; /*0x60d535*/
    case 331: /*0x60d06c*/
    case 437: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2008); /*0x60d536*/
      break; /*0x60d543*/
    case 334: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1916); /*0x60d3f3*/
      break; /*0x60d400*/
    case 336: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2021)); /*0x60d55e*/
      break; /*0x60d565*/
    case 337: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1948)); /*0x60d437*/
      break; /*0x60d43e*/
    case 338: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1960)); /*0x60d467*/
      break; /*0x60d46e*/
    case 339: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2022)); /*0x60d572*/
      break; /*0x60d579*/
    case 341: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2040)); /*0x60d3ad*/
      break; /*0x60d3b4*/
    case 343: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(__int16 *)(a3 + 1020)); /*0x60d605*/
      break; /*0x60d60c*/
    case 344: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2048)); /*0x60d616*/
      break; /*0x60d61d*/
    case 345: /*0x60d06c*/
    case 377: /*0x60d06c*/
    case 475: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1881)); /*0x60d936*/
      break; /*0x60d93d*/
    case 347: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1888)); /*0x60d6ad*/
      break; /*0x60d6b4*/
    case 351: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1904)); /*0x60d6dd*/
      break; /*0x60d6e4*/
    case 352: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1905)); /*0x60d6f1*/
      break; /*0x60d6f8*/
    case 353: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1906)); /*0x60d705*/
      break; /*0x60d70c*/
    case 355: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2052)); /*0x60d755*/
      break; /*0x60d75c*/
    case 357: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2028); /*0x60d75d*/
      break; /*0x60d76a*/
    case 359: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2036); /*0x60d779*/
      break; /*0x60d786*/
    case 360: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2040); /*0x60d787*/
      break; /*0x60d794*/
    case 361: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2060); /*0x60d7b1*/
      break; /*0x60d7be*/
    case 362: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2064); /*0x60d7bf*/
      break; /*0x60d7cc*/
    case 363: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2068); /*0x60d7cd*/
      break; /*0x60d7da*/
    case 364: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2072); /*0x60d7db*/
      break; /*0x60d7e8*/
    case 365: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2076)); /*0x60d7f2*/
      break; /*0x60d7f9*/
    case 366: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2084)); /*0x60d803*/
      break; /*0x60d80a*/
    case 367: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2088)); /*0x60d814*/
      break; /*0x60d81b*/
    case 369: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1490)); /*0x60d861*/
      break; /*0x60d868*/
    case 370: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1776)); /*0x60d875*/
      break; /*0x60d87c*/
    case 371: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1760); /*0x60d8a5*/
      break; /*0x60d8b2*/
    case 376: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1883)); /*0x60d8e4*/
      break; /*0x60d8eb*/
    case 378: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1882)); /*0x60d94a*/
      break; /*0x60d951*/
    case 381: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1704)); /*0x60d9d7*/
      break; /*0x60d9de*/
    case 382: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1705)); /*0x60d9eb*/
      break; /*0x60d9f2*/
    case 383: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1712)); /*0x60da5a*/
      break; /*0x60da61*/
    case 390: /*0x60d06c*/
    case 409: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1916)); /*0x60db8a*/
      break; /*0x60db91*/
    case 393: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1540)); /*0x60de13*/
      break; /*0x60de1a*/
    case 394: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1541)); /*0x60deb8*/
      break; /*0x60debf*/
    case 395: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1544)); /*0x60dec9*/
      break; /*0x60ded0*/
    case 396: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1548); /*0x60ded1*/
      break; /*0x60dede*/
    case 397: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1552)); /*0x60deeb*/
      break; /*0x60def2*/
    case 399: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2057)); /*0x60df13*/
      break; /*0x60df1a*/
    case 400: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2058)); /*0x60df27*/
      break; /*0x60df2e*/
    case 401: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1572)); /*0x60df7c*/
      break; /*0x60df83*/
    case 402: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1576); /*0x60df84*/
      break; /*0x60df91*/
    case 403: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1580)); /*0x60df9b*/
      break; /*0x60dfa2*/
    case 404: /*0x60d06c*/
    case 536: /*0x60d06c*/
    case 575: /*0x60d06c*/
    case 578: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1900)); /*0x60db35*/
      break; /*0x60db3c*/
    case 405: /*0x60d06c*/
    case 537: /*0x60d06c*/
    case 576: /*0x60d06c*/
    case 579: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1904)); /*0x60db46*/
      break; /*0x60db4d*/
    case 412: /*0x60d06c*/
    case 514: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1929)); /*0x60dbc0*/
      break; /*0x60dbc7*/
    case 413: /*0x60d06c*/
    case 531: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1930)); /*0x60dbd4*/
      break; /*0x60dbdb*/
    case 414: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1931)); /*0x60dbe8*/
      break; /*0x60dbef*/
    case 415: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1933)); /*0x60dc10*/
      break; /*0x60dc17*/
    case 417: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1980)); /*0x60dc49*/
      break; /*0x60dc50*/
    case 418: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1981)); /*0x60dc71*/
      break; /*0x60dc78*/
    case 419: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1982)); /*0x60dc5d*/
      break; /*0x60dc64*/
    case 420: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1934)); /*0x60dc35*/
      break; /*0x60dc3c*/
    case 423: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 1948); /*0x60dc95*/
      break; /*0x60dca2*/
    case 424: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1952)); /*0x60dcac*/
      break; /*0x60dcb3*/
    case 425: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1956)); /*0x60dcbd*/
      break; /*0x60dcc4*/
    case 427: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1988)); /*0x60dcdf*/
      break; /*0x60dce6*/
    case 428: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1968)); /*0x60dcf3*/
      break; /*0x60dcfa*/
    case 432: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2060)); /*0x60df38*/
      break; /*0x60df3f*/
    case 433: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1969)); /*0x60dd07*/
      break; /*0x60dd0e*/
    case 436: /*0x60d06c*/
    case 597: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2012)); /*0x60dda3*/
      break; /*0x60ddaa*/
    case 439: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2016)); /*0x60dfac*/
      break; /*0x60dfb3*/
    case 440: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1708)); /*0x60da6b*/
      break; /*0x60da72*/
    case 441: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1682)); /*0x60dfd4*/
      break; /*0x60dfdb*/
    case 444: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1457)); /*0x60d63e*/
      break; /*0x60d645*/
    case 446: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(__int16 *)(a3 + 1022)); /*0x60d67a*/
      break; /*0x60d681*/
    case 452: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1875)); /*0x60e046*/
      break; /*0x60e04d*/
    case 453: /*0x60d06c*/
    case 500: /*0x60d06c*/
    case 528: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1868)); /*0x60d1da*/
      break; /*0x60d1e1*/
    case 459: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1898)); /*0x60d8f8*/
      break; /*0x60d8ff*/
    case 462: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1436)); /*0x60e0dd*/
      break; /*0x60e0e4*/
    case 463: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1716)); /*0x60da7f*/
      break; /*0x60da86*/
    case 466: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1920)); /*0x60db02*/
      break; /*0x60db09*/
    case 467: /*0x60d06c*/
      result = *(double *)(a3 + 1856); /*0x60e102*/
      break; /*0x60e10a*/
    case 473: /*0x60d06c*/
      result = *(double *)(a3 + 1864); /*0x60e114*/
      break; /*0x60e11c*/
    case 485: /*0x60d06c*/
    case 573: /*0x60d06c*/
    case 601: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1892)); /*0x60db24*/
      break; /*0x60db2b*/
    case 486: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1896)); /*0x60e14e*/
      break; /*0x60e155*/
    case 487: /*0x60d06c*/
    case 542: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1858)); /*0x60d2ee*/
      break; /*0x60d2f5*/
    case 489: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1970)); /*0x60dd5c*/
      break; /*0x60dd63*/
    case 491: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1908)); /*0x60e162*/
      break; /*0x60e169*/
    case 492: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1909)); /*0x60e176*/
      break; /*0x60e17d*/
    case 493: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1910)); /*0x60e18a*/
      break; /*0x60e191*/
    case 494: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1911)); /*0x60e19e*/
      break; /*0x60e1a5*/
    case 497: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(__int16 *)(a3 + 1048)); /*0x60e1b2*/
      break; /*0x60e1b9*/
    case 502: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1992)); /*0x60dd6d*/
      break; /*0x60dd74*/
    case 503: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1996)); /*0x60dd81*/
      break; /*0x60dd88*/
    case 508: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1886)); /*0x60d1c6*/
      break; /*0x60d1cd*/
    case 515: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1918)); /*0x60d0b6*/
      break; /*0x60d0bd*/
    case 529: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1869)); /*0x60e1d7*/
      break; /*0x60e1de*/
    case 534: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1688)); /*0x60d19e*/
      break; /*0x60d1a5*/
    case 535: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1692)); /*0x60d1b2*/
      break; /*0x60d1b9*/
    case 538: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 1556)); /*0x60d18d*/
      break; /*0x60d194*/
    case 539: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2037)); /*0x60d316*/
      break; /*0x60d31d*/
    case 543: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1859)); /*0x60d302*/
      break; /*0x60d309*/
    case 544: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1553)); /*0x60deff*/
      break; /*0x60df06*/
    case 558: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2052); /*0x60d4d4*/
      break; /*0x60d4e1*/
    case 559: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2056); /*0x60d4e2*/
      break; /*0x60d4ef*/
    case 561: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2044); /*0x60d795*/
      break; /*0x60d7a2*/
    case 562: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2048); /*0x60d7a3*/
      break; /*0x60d7b0*/
    case 566: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2104); /*0x60d5ad*/
      break; /*0x60d5ba*/
    case 567: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2108); /*0x60d5bb*/
      break; /*0x60d5c8*/
    case 568: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2112); /*0x60d5c9*/
      break; /*0x60d5d6*/
    case 569: /*0x60d06c*/
      *(_QWORD *)&result = *(unsigned int *)(a3 + 2116); /*0x60d5d7*/
      break; /*0x60d5e4*/
    case 570: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2120)); /*0x60d5f1*/
      break; /*0x60d5f8*/
    case 571: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 2092)); /*0x60d594*/
      break; /*0x60d59b*/
    case 572: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 2096)); /*0x60d5a5*/
      break; /*0x60d5ac*/
    case 592: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1440)); /*0x60e0f1*/
      break; /*0x60e0f8*/
    case 595: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1932)); /*0x60dbfc*/
      break; /*0x60dc03*/
    case 603: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1860)); /*0x60e01e*/
      break; /*0x60e025*/
    case 605: /*0x60d06c*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a3 + 1861)); /*0x60e032*/
      break; /*0x60e039*/
    default:
      result = 0.0; /*0x60e1f3*/
      break; /*0x60e1f3*/
  }
  return result; /*0x60d07d*/
}

// [39/50] Address: 0x60eb50
// Method: SetupTriggerPopup::updateValue
double __fastcall SetupTriggerPopup_updateValue(cocos2d::CCDictionary **a1, unsigned int a2, float a3)
{
  __int64 v5; // r8

  if ( cocos2d::CCDictionary::objectForKey(a1[94], (int)a2) ) /*0x60eb72*/
  {
    if ( a3 == 0.0 ) /*0x60eb85*/
    {
      (*((void (__fastcall **)(cocos2d::CCDictionary **, _QWORD, _QWORD))*a1 + 144))(a1, a2, 0); /*0x60eb92*/
    }
    else
    {
      LOBYTE(v5) = 1; /*0x60eb9d*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, _QWORD, __int64))*a1 + 144))(a1, a2, v5); /*0x60eba5*/
    }
  }
  else
  {
    sub_60A5A0(a1, a2); /*0x60ebb5*/
  }
  return sub_60ABF0(a1, a2); /*0x60ebc2*/
}

// [40/50] Address: 0x60ebe0
// Method: SetupTriggerPopup::updateInputNodeLabel
// Hidden C++ exception states: #wind=1
double __fastcall SetupTriggerPopup_updateInputNodeLabel(__int64 a1, int a2, __int64 a3)
{
  struct cocos2d::CCObject *v5; // rsi
  __int64 v6; // rax
  _BYTE v8[32]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]

  v9 = a3; /*0x60ebfd*/
  *(_BYTE *)(a1 + 744) = 1; /*0x60ec02*/
  v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 760), a2); /*0x60ec19*/
  if ( v5 ) /*0x60ec1f*/
  {
    v6 = sub_3E4F0(v8, a3); /*0x60ec29*/
    CCTextInputNode_setString(v5, v6); /*0x60ec34*/
  }
  *(_BYTE *)(a1 + 744) = 0; /*0x60ec39*/
  return sub_3C310(a3); /*0x60ec48*/
}

// [41/50] Address: 0x60ec60
// Method: SetupTriggerPopup::triggerValueFromSliderValue
float __fastcall SetupTriggerPopup_triggerValueFromSliderValue(__int64 a1, int a2, float a3)
{
  __int64 v3; // rdi
  struct cocos2d::CCObject *v5; // rax
  float v6; // xmm6_4
  struct cocos2d::CCObject *v7; // rax
  float v8; // xmm0_4

  v3 = a2; /*0x60ec6a*/
  v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 840), a2); /*0x60ec87*/
  if ( v5 ) /*0x60ec90*/
    v6 = *((float *)v5 + 14); /*0x60ec92*/
  else
    v6 = 0.0; /*0x60ec99*/
  v7 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 848), v3); /*0x60eca6*/
  if ( v7 ) /*0x60ecaf*/
    v8 = *((float *)v7 + 14); /*0x60ecb1*/
  else
    v8 = 1.0; /*0x60ecb8*/
  return (float)((float)(v8 - v6) * a3) + v6; /*0x60ecd6*/
}

// [42/50] Address: 0x60ecf0
// Method: SetupTriggerPopup::triggerSliderValueFromValue
__m128 __fastcall SetupTriggerPopup_triggerSliderValueFromValue(__int64 a1, int a2, float a3)
{
  __int64 v4; // rdi
  struct cocos2d::CCObject *v5; // rax
  __int128 v6; // xmm8
  float v7; // xmm7_4
  struct cocos2d::CCObject *v8; // rax
  float v9; // xmm0_4

  v4 = a2; /*0x60ed0c*/
  v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 840), a2); /*0x60ed1d*/
  v6 = 0; /*0x60ed23*/
  if ( v5 ) /*0x60ed2a*/
    v7 = *((float *)v5 + 14); /*0x60ed2c*/
  else
    v7 = 0.0; /*0x60ed33*/
  v8 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 848), v4); /*0x60ed40*/
  if ( v8 ) /*0x60ed51*/
    v9 = *((float *)v8 + 14); /*0x60ed53*/
  else
    v9 = 1.0; /*0x60ed5a*/
  *(float *)&v6 = fmaxf(0.0, fminf(1.0, (float)(a3 - v7) / (float)(v9 - v7))); /*0x60ed7c*/
  return (__m128)v6; /*0x60ed85*/
}

// [43/50] Address: 0x60fb80
// Method: SetupTriggerPopup::onEaseRate
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupTriggerPopup_onEaseRate(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rbx
  _DWORD v5[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v6; // [rsp+50h] [rbp-38h]
  __int64 v7; // [rsp+58h] [rbp-30h]
  __int128 v8; // [rsp+60h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]
  __int64 v10; // [rsp+78h] [rbp-10h]

  v2 = a1 + 664; /*0x60fb96*/
  if ( !a1 ) /*0x60fba3*/
    v2 = 0; /*0x60fba3*/
  v8 = 0; /*0x60fbaa*/
  v9 = 0; /*0x60fbaf*/
  v10 = 15; /*0x60fbb3*/
  LOBYTE(v8) = 0; /*0x60fbbb*/
  v5[3] = 0; /*0x60fbbf*/
  v6 = 11; /*0x60fbc3*/
  v7 = 15; /*0x60fbcb*/
  strcpy((char *)v5, "Easing Rate"); /*0x60fbdb*/
  v3 = ConfigureValuePopup_create(v2, (__int64)v5, (__int64)&v8, 0); /*0x60fc2e*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 85); /*0x60fc40*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 1064LL))(v3); /*0x60fc52*/
}

// [44/50] Address: 0x60ff90
// Method: SetupTriggerPopup::valuePopupClosed
__int64 __fastcall SetupTriggerPopup_valuePopupClosed(__int64 a1, __int64 a2, float a3)
{
  cocos2d::CCString *v5; // rax
  float v6; // xmm6_4
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // ebx

  v5 = cocos2d::CCString::createWithFormat("%.02f", a3); /*0x60ffb8*/
  v6 = fmaxf(0.1, fminf(20.0, cocos2d::CCString::floatValue(v5))); /*0x60ffe1*/
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x60ffe5*/
  v8 = a1 - 664; /*0x60ffe8*/
  v9 = v7; /*0x60fff2*/
  if ( v7 == 85 ) /*0x60fffa*/
  {
    *(float *)(v8 + 820) = v6; /*0x610024*/
    sub_60ABF0(v8, 85); /*0x61002c*/
    return sub_60F800(v8); /*0x610043*/
  }
  else
  {
    sub_60ABF0(v8, v7); /*0x60fffe*/
    return SetupTriggerPopup_updateCustomEaseRateLabel(v8, v9); /*0x61001a*/
  }
}

// [45/50] Address: 0x610050
// Method: SetupTriggerPopup::createCustomEasingControls
// Hidden C++ exception states: #wind=1
double __fastcall SetupTriggerPopup_createCustomEasingControls(
        __int64 a1,
        __int64 a2,
        struct cocos2d::CCObject *a3,
        float a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8)
{
  struct cocos2d::CCObject *PageContainer; // r15
  cocos2d::CCArray *v11; // rbp
  struct cocos2d::CCObject *v12; // rax
  cocos2d::CCDictionary *v13; // rbx
  struct cocos2d::CCObject *v14; // rax
  cocos2d::CCDictionary *v15; // rbx
  struct cocos2d::CCObject *v16; // rax
  const char *v17; // rcx
  struct cocos2d::CCObject *v18; // rsi
  struct cocos2d::CCObject *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  float v23; // xmm9_4
  char *v24; // rbx
  __int64 v25; // rdx
  struct cocos2d::CCObject *v26; // rbx
  struct cocos2d::CCObject *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  struct cocos2d::CCObject *v31; // rbx
  struct cocos2d::CCObject *v32; // r15
  float *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  cocos2d::CCSprite *v39; // rbx
  struct cocos2d::CCObject *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  struct cocos2d::CCSprite *v46; // rbx
  struct cocos2d::CCObject *v47; // r15
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  int v53; // r8d
  unsigned int v54; // ebx
  float v55; // xmm0_4
  _BYTE v57[8]; // [rsp+40h] [rbp-F8h] BYREF
  struct cocos2d::CCObject *v58; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v59; // [rsp+50h] [rbp-E8h]
  cocos2d::CCArray *v60; // [rsp+58h] [rbp-E0h]
  __int64 v61; // [rsp+60h] [rbp-D8h]
  _BYTE v62[8]; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE v63[8]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+78h] [rbp-C0h]
  __int64 v65; // [rsp+80h] [rbp-B8h]

  v58 = a3; /*0x6100a0*/
  v64 = a2; /*0x6100a8*/
  v65 = a2; /*0x6100b0*/
  v59 = a6; /*0x6100c8*/
  PageContainer = SetupTriggerPopup_getPageContainer(a1, 0); /*0x6100db*/
  v60 = PageContainer; /*0x6100de*/
  v11 = (cocos2d::CCArray *)sub_606BC0(a1, (unsigned int)a8); /*0x6100ee*/
  v12 = cocos2d::CCInteger::create(a6); /*0x6100f3*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 920), v12, (int)a5); /*0x610106*/
  v61 = a6; /*0x61010c*/
  v13 = *(cocos2d::CCDictionary **)(a1 + 920); /*0x610111*/
  v14 = cocos2d::CCInteger::create(a5); /*0x61011b*/
  cocos2d::CCDictionary::setObject(v13, v14, a6); /*0x61012c*/
  v15 = *(cocos2d::CCDictionary **)(a1 + 944); /*0x610132*/
  v16 = cocos2d::CCFloat::create(a4); /*0x61013c*/
  cocos2d::CCDictionary::setObject(v15, v16, (int)a5); /*0x61014b*/
  v17 = (const char *)a2; /*0x61015e*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x610166*/
    v17 = *(const char **)a2; /*0x610168*/
  v18 = cocos2d::CCLabelBMFont::create(v17, "goldFont.fnt"); /*0x610178*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 184LL))(v18, v58); /*0x61018d*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x6101a7*/
    *(_QWORD *)(a1 + 584),
    v18);
  cocos2d::CCArray::addObject(PageContainer, v18); /*0x6101b0*/
  if ( a8 > 0 ) /*0x6101b9*/
    cocos2d::CCArray::addObject(v11, v18); /*0x6101c1*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 160LL))(v18); /*0x6101de*/
  v19 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68); /*0x6101f8*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x610212*/
    *(_QWORD *)(a1 + 584),
    v19);
  cocos2d::CCArray::addObject(PageContainer, v19); /*0x61021b*/
  if ( a8 > 0 ) /*0x610224*/
    cocos2d::CCArray::addObject(v11, v19); /*0x61022c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, 0.0, a4 * -30.0); /*0x610245*/
  v21 = v20; /*0x61024b*/
  v22 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 200LL))(v18); /*0x61025b*/
  cocos2d::CCPoint::operator+(v22, &v58, v21); /*0x610268*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject **))(*(_QWORD *)v19 + 184LL))(v19, &v58); /*0x610279*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v19 + 160LL))(v19); /*0x610289*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 928), v19, (int)a5); /*0x61029c*/
  v23 = a4 * 100.0; /*0x6102a6*/
  v58 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_colorBtn_001.png"); /*0x6102bc*/
  v24 = (char *)v58 + 320; /*0x6102c1*/
  (**((void (__fastcall ***)(char *, void *))v58 + 40))((char *)v58 + 320, &unk_6FF694); /*0x6102d8*/
  LOBYTE(v25) = 100; /*0x6102e2*/
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v24 + 40LL))(v24, v25); /*0x6102e7*/
  v26 = v58; /*0x6102ea*/
  cocos2d::CCArray::addObject(PageContainer, v58); /*0x6102f5*/
  if ( a8 > 0 ) /*0x6102fe*/
    cocos2d::CCArray::addObject(v11, v26); /*0x610306*/
  v27 = cocos2d::CCLabelBMFont::create("0", (const char *)&qword_6FFF68); /*0x610338*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v26 + 464LL))(v26, v27); /*0x61034b*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v27 + 120LL))(v27); /*0x610360*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v27 + 136LL))(v27); /*0x610370*/
  cocos2d::CCArray::addObject(v60, v27); /*0x61037e*/
  if ( a8 > 0 ) /*0x610387*/
    cocos2d::CCArray::addObject(v11, v27); /*0x61038f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v62, 1.0, 1.5); /*0x6103aa*/
  v29 = v28; /*0x6103b0*/
  v30 = cocos2d::CCNode::convertToNodeSpace(v58, v63, &unk_905C48); /*0x6103c4*/
  cocos2d::CCPoint::operator+(v30, v57, v29); /*0x6103d5*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v27 + 184LL))(v27, v57); /*0x6103e6*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 928), v27, v61); /*0x6103fb*/
  v31 = v58; /*0x610401*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v58 + 120LL))(v58); /*0x610410*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v31 + 136LL))(v31); /*0x61041d*/
  v32 = (struct cocos2d::CCObject *)CCMenuItemSpriteExtra_create(v31, 0, a1, SetupTriggerPopup_onCustomEaseRate); /*0x610437*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x610451*/
    *(_QWORD *)(a1 + 552),
    v32);
  v33 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 320LL))(v18); /*0x610461*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v63, (float)((float)(*v33 * 0.5) + 10.0) * a4, a4 * -2.0); /*0x61048b*/
  v35 = v34; /*0x610491*/
  v36 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 200LL))(v18); /*0x6104a1*/
  cocos2d::CCPoint::operator+(v36, v57, v35); /*0x6104ae*/
  v37 = *(_QWORD *)v32; /*0x6104b4*/
  v38 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v62, v57); /*0x6104c8*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v37 + 184))(v32, v38); /*0x6104d4*/
  *((_DWORD *)v32 + 93) = 1067030938; /*0x6104da*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v32 + 64LL))(v32, v59); /*0x6104ef*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 936), v32, v61); /*0x610501*/
  cocos2d::CCArray::addObject(v60, v32); /*0x61050f*/
  if ( a8 > 0 ) /*0x610518*/
    cocos2d::CCArray::addObject(v11, v32); /*0x610520*/
  v39 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"); /*0x610533*/
  cocos2d::CCSprite::setFlipX(v39, 1); /*0x61053b*/
  (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v39 + 160LL))(v39); /*0x610552*/
  v40 = (struct cocos2d::CCObject *)CCMenuItemSpriteExtra_create(v39, 0, a1, sub_6108E0); /*0x610568*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x610582*/
    *(_QWORD *)(a1 + 552),
    v40);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v63, v23, 0.0); /*0x610591*/
  v42 = v41; /*0x610597*/
  v43 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v19 + 200LL))(v19); /*0x6105a7*/
  cocos2d::CCPoint::operator+(v43, v57, v42); /*0x6105b4*/
  v44 = *(_QWORD *)v40; /*0x6105ba*/
  v45 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v62, v57); /*0x6105ce*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v44 + 184))(v40, v45); /*0x6105da*/
  *((_DWORD *)v40 + 93) = 1068708659; /*0x6105e0*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v40 + 64LL))(v40, a5); /*0x6105f4*/
  cocos2d::CCArray::addObject(v60, v40); /*0x6105ff*/
  if ( a8 > 0 ) /*0x610608*/
    cocos2d::CCArray::addObject(v11, v40); /*0x610610*/
  v46 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"); /*0x610623*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v46 + 160LL))(v46); /*0x610637*/
  v47 = (struct cocos2d::CCObject *)CCMenuItemSpriteExtra_create(v46, 0, a1, sub_610910); /*0x61064d*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x610667*/
    *(_QWORD *)(a1 + 552),
    v47);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v63, -v23, 0.0); /*0x61067e*/
  v49 = v48; /*0x610684*/
  v50 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v19 + 200LL))(v19); /*0x610694*/
  cocos2d::CCPoint::operator+(v50, v57, v49); /*0x6106a1*/
  v51 = *(_QWORD *)v47; /*0x6106a7*/
  v52 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v62, v57); /*0x6106bb*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v51 + 184))(v47, v52); /*0x6106c7*/
  *((_DWORD *)v47 + 93) = 1068708659; /*0x6106cd*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v47 + 64LL))(v47, a5); /*0x6106e1*/
  cocos2d::CCArray::addObject(v60, v47); /*0x6106ec*/
  if ( a8 > 0 ) /*0x6106f5*/
    cocos2d::CCArray::addObject(v11, v47); /*0x6106fd*/
  v54 = v59; /*0x610708*/
  sub_60FC60(a1, (_DWORD)v18, v53, a5, v59); /*0x61071c*/
  v55 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1168LL))(a1, a5); /*0x61072a*/
  sub_6109E0(a1, a5, (unsigned int)(int)v55); /*0x61073b*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1168LL))(a1, v54); /*0x610748*/
  SetupTriggerPopup_updateCustomEaseRateLabel(a1, v54); /*0x610756*/
  SetupTriggerPopup_toggleCustomEaseRateVisibility(a1, a5, v54); /*0x610764*/
  return sub_3C310(v64); /*0x610774*/
}

// [46/50] Address: 0x6107c0
// Method: SetupTriggerPopup::onCustomEaseRate
// Hidden C++ exception states: #wind=2
__int64 __fastcall SetupTriggerPopup_onCustomEaseRate(__int64 *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // eax
  _DWORD v11[4]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h]
  __int64 v13; // [rsp+58h] [rbp-40h]
  __int64 v14[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+78h] [rbp-20h]

  v4 = (_DWORD)a1 + 664; /*0x6107ec*/
  if ( !a1 ) /*0x6107f8*/
    v4 = 0; /*0x6107f8*/
  *(_OWORD *)v14 = 0; /*0x6107ff*/
  v15 = 0; /*0x610804*/
  v16 = 15; /*0x610808*/
  LOBYTE(v14[0]) = 0; /*0x610810*/
  v11[3] = 0; /*0x610815*/
  v12 = 11; /*0x610819*/
  v13 = 15; /*0x610821*/
  strcpy((char *)v11, "Easing Rate"); /*0x610831*/
  v5 = *a1; /*0x610853*/
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x61085c*/
  (*(void (__fastcall **)(__int64 *, _QWORD))(v5 + 1168))(a1, v6); /*0x610864*/
  v7 = ConfigureValuePopup_create(v4, (__int64)v11, (__int64)v14, 0); /*0x61089d*/
  v8 = *(_QWORD *)v7; /*0x6108a0*/
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x6108ad*/
  (*(void (__fastcall **)(__int64, _QWORD))(v8 + 64))(v7, v9); /*0x6108b4*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0x6108c6*/
}

// [47/50] Address: 0x610940
// Method: SetupTriggerPopup::onCustomEaseArrow
struct cocos2d::CCObject *__fastcall SetupTriggerPopup_onCustomEaseArrow(
        cocos2d::CCDictionary **a1,
        unsigned int a2,
        unsigned __int8 a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  struct cocos2d::CCObject *result; // rax

  v4 = (int)a2; /*0x610955*/
  v5 = (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, _QWORD))*a1 + 146))(a1, a2) + 2 * a3 - 1; /*0x610977*/
  if ( v5 < 0 ) /*0x61097a*/
    v5 = 0; /*0x61097a*/
  if ( v5 > 18 ) /*0x610984*/
    v5 = 18; /*0x610984*/
  sub_60ABF0(a1, (unsigned int)v4); /*0x61098e*/
  sub_6109E0(a1, (unsigned int)v4, (unsigned int)v5); /*0x61099b*/
  result = cocos2d::CCDictionary::objectForKey(a1[115], v4); /*0x6109aa*/
  if ( result ) /*0x6109b3*/
    return (struct cocos2d::CCObject *)SetupTriggerPopup_toggleCustomEaseRateVisibility( /*0x6109be*/
                                         a1,
                                         (unsigned int)v4,
                                         *((unsigned int *)result + 14));
  return result; /*0x6109c3*/
}

// [48/50] Address: 0x610be0
// Method: SetupTriggerPopup::updateCustomEaseRateLabel
// Hidden C++ exception states: #wind=1
void __fastcall SetupTriggerPopup_updateCustomEaseRateLabel(__int64 a1, int a2, float a3)
{
  struct cocos2d::CCObject *v3; // rbx
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  void **v7; // rdx
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h]

  v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 928), a2); /*0x610c0d*/
  if ( v3 ) /*0x610c13*/
  {
    v4 = cocos2d::CCString::createWithFormat("%.02f", a3); /*0x610c2c*/
    CString = cocos2d::CCString::getCString(v4); /*0x610c35*/
    *(_OWORD *)Block = 0; /*0x610c3e*/
    v10 = 0; /*0x610c46*/
    v6 = -1; /*0x610c4c*/
    do /*0x610c56*/
      ++v6; /*0x610c53*/
    while ( CString[v6] ); /*0x610c56*/
    sub_3C230(Block); /*0x610c65*/
    v7 = Block; /*0x610c6b*/
    if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x610c76*/
      v7 = (void **)Block[0]; /*0x610c76*/
    (**((void (__fastcall ***)(__int64, void **))v3 + 45))((__int64)v3 + 360, v7); /*0x610c86*/
    if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x610c92*/
    {
      v8 = Block[0]; /*0x610c97*/
      if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0x610ca6*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x610cac*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x610cbb*/
          invoke_watson(0, 0, 0, 0, 0); /*0x610cd0*/
      }
      j_j_free(v8); /*0x610cd7*/
    }
  }
}

// [49/50] Address: 0x610d00
// Method: SetupTriggerPopup::toggleCustomEaseRateVisibility
void __fastcall SetupTriggerPopup_toggleCustomEaseRateVisibility(__int64 a1, int a2, int a3)
{
  __int64 v5; // r14
  unsigned __int8 v6; // si
  cocos2d::CCArray *v7; // rcx
  unsigned int v8; // edi
  struct cocos2d::CCObject *v9; // rax
  double TriggerValue; // xmm0_8
  struct cocos2d::CCObject *v11; // rax
  unsigned int *v12; // rdi
  cocos2d::CCDictionary *v13; // rcx
  __int64 v14; // r8

  v5 = a3; /*0x610d1f*/
  switch ( (int)(*(float (**)(void))(*(_QWORD *)a1 + 1168LL))() ) /*0x610d47*/
  {
    case 1: /*0x610d47*/
    case 2: /*0x610d47*/
    case 3: /*0x610d47*/
    case 4: /*0x610d47*/
    case 5: /*0x610d47*/
    case 6: /*0x610d47*/
      v6 = 1; /*0x610d49*/
      break; /*0x610d4c*/
    default:
      v7 = *(cocos2d::CCArray **)(a1 + 688); /*0x610d51*/
      v6 = 0; /*0x610d58*/
      if ( v7 ) /*0x610d5e*/
      {
        if ( cocos2d::CCArray::count(v7) ) /*0x610d60*/
        {
          v6 = 1; /*0x610d71*/
          v8 = 0; /*0x610d74*/
          if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ) /*0x610d76*/
          {
            while ( 2 ) /*0x610d89*/
            {
              v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v8); /*0x610d89*/
              TriggerValue = SetupTriggerPopup_getTriggerValue(a1, a2, (__int64)v9); /*0x610d97*/
              switch ( (int)*(float *)&TriggerValue ) /*0x610db4*/
              {
                case 1: /*0x610db4*/
                case 2: /*0x610db4*/
                case 3: /*0x610db4*/
                case 4: /*0x610db4*/
                case 5: /*0x610db4*/
                case 6: /*0x610db4*/
                  if ( ++v8 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ) /*0x610dc7*/
                    continue; /*0x610dc7*/
                  break; /*0x610dc7*/
                default:
                  v6 = 0; /*0x610dcb*/
                  break; /*0x610dcb*/
              }
              break;
            }
          }
        }
      }
      break; /*0x610dcb*/
  }
  v11 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 936), v5); /*0x610dd8*/
  v12 = (unsigned int *)v11; /*0x610de3*/
  if ( v11 ) /*0x610df3*/
  {
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v11 + 336LL))(v11, v6); /*0x610e06*/
    v13 = *(cocos2d::CCDictionary **)(a1 + 952); /*0x610e09*/
    v14 = v12[2]; /*0x610e10*/
    if ( v6 ) /*0x610e17*/
      cocos2d::CCDictionary::removeObjectForKey(v13, (unsigned int)v14); /*0x610e23*/
    else
      cocos2d::CCDictionary::setObject(v13, (struct cocos2d::CCObject *)v12, v14); /*0x610e34*/
  }
}

// [50/50] Address: 0x610e80
// Method: SetupTriggerPopup::ccTouchBegan
// attributes: thunk
__int64 SetupTriggerPopup_ccTouchBegan()
{
  return FLAlertLayer_ccTouchBegan();
}
