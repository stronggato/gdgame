#include <Geode/binding/SetFolderPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x396000
// Method: SetFolderPopup::~SetFolderPopup
_QWORD *__fastcall SetFolderPopup__dtor_SetFolderPopup(_QWORD *Block, char a2)
{
  *Block = &SetFolderPopup::`vftable'; /*0x396013*/
  Block[40] = &SetFolderPopup::`vftable'; /*0x396020*/
  Block[41] = &SetFolderPopup::`vftable'; /*0x39602e*/
  Block[42] = &SetFolderPopup::`vftable'; /*0x39603c*/
  Block[43] = &SetFolderPopup::`vftable'; /*0x39604a*/
  Block[44] = &SetFolderPopup::`vftable'; /*0x396058*/
  Block[51] = &SetFolderPopup::`vftable'; /*0x396066*/
  Block[54] = &SetFolderPopup::`vftable'; /*0x396074*/
  Block[68] = &SetFolderPopup::`vftable'; /*0x396082*/
  Block[88] = &SetFolderPopup::`vftable'; /*0x396090*/
  SetLevelOrderPopup__dtor_SetLevelOrderPopup(); /*0x396097*/
  if ( (a2 & 1) != 0 ) /*0x39609f*/
    j_j_free(Block); /*0x3960a9*/
  return Block; /*0x3960ae*/
}

// [2/5] Address: 0x3a2bb0
// Method: SetFolderPopup::create
// Hidden C++ exception states: #wind=2
_QWORD *__fastcall SetFolderPopup_create(unsigned int a1, unsigned __int8 a2, __int64 a3)
{
  _QWORD *v6; // rsi
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]

  v10 = a3; /*0x3a2bd3*/
  v6 = operator new(0x2D8u); /*0x3a2be2*/
  SetIDPopup_SetIDPopup((__int64)v6); /*0x3a2bed*/
  *v6 = &SetFolderPopup::`vftable'; /*0x3a2bf9*/
  v6[40] = &SetFolderPopup::`vftable'; /*0x3a2c03*/
  v6[41] = &SetFolderPopup::`vftable'; /*0x3a2c11*/
  v6[42] = &SetFolderPopup::`vftable'; /*0x3a2c1f*/
  v6[43] = &SetFolderPopup::`vftable'; /*0x3a2c2d*/
  v6[44] = &SetFolderPopup::`vftable'; /*0x3a2c3b*/
  v6[51] = &SetFolderPopup::`vftable'; /*0x3a2c49*/
  v6[54] = &SetFolderPopup::`vftable'; /*0x3a2c57*/
  v6[68] = &SetFolderPopup::`vftable'; /*0x3a2c65*/
  v6[88] = &SetFolderPopup::`vftable'; /*0x3a2c73*/
  *((_BYTE *)v6 + 712) = 0; /*0x3a2c7a*/
  v6[90] = 0; /*0x3a2c81*/
  v7 = sub_3E4F0(v9, a3); /*0x3a2c94*/
  if ( (unsigned __int8)TextAlertPopup_create(v6, a1, a2, v7, v6) ) /*0x3a2ca5*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x3a2cb1*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0x3a2cc1*/
    v6 = 0; /*0x3a2cc4*/
  }
  sub_3C310(a3); /*0x3a2cc9*/
  return v6; /*0x3a2cd1*/
}

// [3/5] Address: 0x3a2f80
// Method: SetFolderPopup::valueChanged
// Hidden C++ exception states: #wind=4
void __fastcall SetFolderPopup_valueChanged(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // r8
  void **v5; // rdx
  void *v6; // rcx
  void *v7; // [rsp+30h] [rbp-58h]
  void *Block[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h]
  unsigned __int64 v10; // [rsp+50h] [rbp-38h]
  _BYTE v11[32]; // [rsp+58h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 720) ) /*0x3a2f9b*/
  {
    v2 = *(_QWORD *)&qword_905FB0; /*0x3a2fa9*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3a2fb3*/
    {
      v7 = operator new(0x690u); /*0x3a2fbf*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x3a2fcd*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3a2fde*/
      v2 = *(_QWORD *)&qword_905FB0; /*0x3a2fe0*/
    }
    v3 = (_QWORD *)GJBaseGameLayer_activateSFXTrigger(v2, (__int64)v11, *(_DWORD *)(a1 + 672), *(_BYTE *)(a1 + 712)); /*0x3a2ffb*/
    if ( v3[3] > 0xFu ) /*0x3a3006*/
      v3 = (_QWORD *)*v3; /*0x3a3008*/
    *(_OWORD *)Block = 0; /*0x3a300e*/
    v9 = 0; /*0x3a3013*/
    v10 = 0; /*0x3a301c*/
    v4 = -1; /*0x3a3025*/
    do /*0x3a3033*/
      ++v4; /*0x3a3030*/
    while ( *((_BYTE *)v3 + v4) ); /*0x3a3033*/
    sub_3C230(Block); /*0x3a3042*/
    sub_3C310(v11); /*0x3a304d*/
    v5 = Block; /*0x3a3052*/
    if ( v10 > 0xF ) /*0x3a305d*/
      v5 = (void **)Block[0]; /*0x3a305d*/
    (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 720) + 360LL))(*(_QWORD *)(a1 + 720) + 360LL, v5); /*0x3a3074*/
    if ( v10 > 0xF ) /*0x3a3080*/
    {
      v6 = Block[0]; /*0x3a3085*/
      if ( v10 + 1 >= 0x1000 ) /*0x3a3094*/
      {
        v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x3a309a*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x3a30a9*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3a30be*/
      }
      j_j_free(v6); /*0x3a30c5*/
    }
  }
}

// [4/5] Address: 0x3a30e0
// Method: SetFolderPopup::onSetFolderName
// Hidden C++ exception states: #wind=6
void __fastcall SetFolderPopup_onSetFolderName(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rbx
  char v6[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+60h] [rbp-A0h]
  __int64 v8; // [rsp+68h] [rbp-98h]
  _DWORD v9[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v10; // [rsp+80h] [rbp-80h]
  __int64 v11; // [rsp+88h] [rbp-78h]
  void *v12; // [rsp+90h] [rbp-70h]
  __int128 v13; // [rsp+98h] [rbp-68h] BYREF
  __int64 v14; // [rsp+A8h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp-50h]
  __int128 v16; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+C8h] [rbp-38h]
  __int64 v18; // [rsp+D0h] [rbp-30h]
  __int128 *v19; // [rsp+D8h] [rbp-28h]
  char *v20; // [rsp+E0h] [rbp-20h]
  _DWORD *v21; // [rsp+E8h] [rbp-18h]
  _BYTE v22[32]; // [rsp+F0h] [rbp-10h] BYREF

  if ( *(int *)(a1 + 672) > 0 ) /*0x3a310f*/
  {
    v19 = &v13; /*0x3a3119*/
    v20 = v6; /*0x3a3122*/
    v21 = v9; /*0x3a312b*/
    v13 = 0; /*0x3a3132*/
    v14 = 2; /*0x3a3136*/
    v15 = 15; /*0x3a313e*/
    strcpy((char *)&v13, "OK"); /*0x3a314d*/
    v7 = 15; /*0x3a3155*/
    v8 = 15; /*0x3a315e*/
    strcpy(v6, "Set Folder Name"); /*0x3a316f*/
    v9[3] = 0; /*0x3a319d*/
    v10 = 11; /*0x3a31a1*/
    v11 = 15; /*0x3a31a9*/
    strcpy((char *)v9, "Folder Name"); /*0x3a31b9*/
    v2 = *(_QWORD *)&qword_905FB0; /*0x3a31da*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3a31e4*/
    {
      v12 = operator new(0x690u); /*0x3a31f0*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v12); /*0x3a31fd*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3a320e*/
      v2 = *(_QWORD *)&qword_905FB0; /*0x3a3210*/
    }
    v3 = (_QWORD *)GJBaseGameLayer_activateSFXTrigger(v2, (__int64)v22, *(_DWORD *)(a1 + 672), *(_BYTE *)(a1 + 712)); /*0x3a322a*/
    if ( v3[3] > 0xFu ) /*0x3a3235*/
      v3 = (_QWORD *)*v3; /*0x3a3237*/
    v16 = 0; /*0x3a323d*/
    v17 = 0; /*0x3a3241*/
    v18 = 0; /*0x3a3245*/
    v4 = -1; /*0x3a3249*/
    do /*0x3a3253*/
      ++v4; /*0x3a3250*/
    while ( *((_BYTE *)v3 + v4) ); /*0x3a3253*/
    sub_3C230(&v16); /*0x3a3261*/
    v5 = (_QWORD *)sub_3A34B0( /*0x3a32ad*/
                     (unsigned int)&v16,
                     (unsigned int)v9,
                     20,
                     (unsigned int)v6,
                     (__int64)&v13,
                     1,
                     1114636288,
                     0,
                     1,
                     0);
    sub_3C310(v22); /*0x3a32b4*/
    v5[94] = a1 + 704; /*0x3a32c0*/
    (*(void (__fastcall **)(_QWORD *))(*v5 + 1064LL))(v5); /*0x3a32d4*/
  }
}

// [5/5] Address: 0x3a3300
// Method: SetFolderPopup::setTextPopupClosed
// Hidden C++ exception states: #wind=5
double __fastcall SetFolderPopup_setTextPopupClosed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rsi
  cocos2d::CCString *v8; // rax
  const char *CString; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  void *v12; // rcx
  void *v14; // [rsp+40h] [rbp-78h]
  _BYTE v15[32]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v16; // [rsp+68h] [rbp-50h]
  void *Block[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v18; // [rsp+80h] [rbp-38h]
  unsigned __int64 v19; // [rsp+88h] [rbp-30h]

  v16 = a3; /*0x3a3327*/
  v5 = sub_3E4F0(v15, a3); /*0x3a3343*/
  v6 = *(_QWORD *)&qword_905FB0; /*0x3a334b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3a3355*/
  {
    v14 = operator new(0x690u); /*0x3a3361*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x3a336f*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3a3380*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x3a3382*/
  }
  if ( *(_BYTE *)(a1 + 8) ) /*0x3a3389*/
    v7 = *(_QWORD *)(v6 + 936); /*0x3a338f*/
  else
    v7 = *(_QWORD *)(v6 + 928); /*0x3a3398*/
  v8 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(a1 - 32)); /*0x3a33a9*/
  CString = cocos2d::CCString::getCString(v8); /*0x3a33b2*/
  *(_OWORD *)Block = 0; /*0x3a33bb*/
  v18 = 0; /*0x3a33c0*/
  v19 = 0; /*0x3a33cc*/
  v10 = -1; /*0x3a33d8*/
  do /*0x3a33e3*/
    ++v10; /*0x3a33e0*/
  while ( CString[v10] ); /*0x3a33e3*/
  sub_3C230(Block); /*0x3a33f2*/
  v11 = cocos2d::CCString::create(v5); /*0x3a33fb*/
  cocos2d::CCDictionary::setObject(v7, v11, Block); /*0x3a340c*/
  if ( v19 > 0xF ) /*0x3a341f*/
  {
    v12 = Block[0]; /*0x3a3424*/
    if ( v19 + 1 >= 0x1000 ) /*0x3a3433*/
    {
      v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x3a3439*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x3a3448*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3a345d*/
    }
    j_j_free(v12); /*0x3a3464*/
  }
  sub_3C310(v5); /*0x3a346d*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 704) + 1080LL))(a1 - 704); /*0x3a347c*/
  return sub_3C310(a3); /*0x3a348b*/
}
