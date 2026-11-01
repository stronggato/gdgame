#include <Geode/binding/SetupPulsePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/15] Address: 0xa0530
// Method: SetupPulsePopup::onPaste
// Hidden C++ exception states: #wind=2
__int64 __fastcall SetupPulsePopup_onPaste(__int64 a1)
{
  __int64 v2; // rdx
  void *v4; // [rsp+40h] [rbp+18h]

  v2 = qword_905FD0; /*0xa0539*/
  if ( !qword_905FD0 ) /*0xa0543*/
  {
    v4 = operator new(0x6E8u); /*0xa054f*/
    qword_905FD0 = sub_2723A0(v4); /*0xa055d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa056e*/
    v2 = qword_905FD0; /*0xa0570*/
  }
  *(_BYTE *)(v2 + 944) = *(_BYTE *)(v2 + 944) == 0; /*0xa0581*/
  return CharacterColorPage_updateIconColors(a1); /*0xa058a*/
}

// [2/15] Address: 0x127820
// Method: SetupPulsePopup::onCopy
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupPulsePopup_onCopy(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // bx
  char v3; // di
  __int64 result; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 1016); /*0x12782a*/
  v2 = *(_WORD *)(v1 + 472); /*0x127831*/
  v3 = *(_BYTE *)(v1 + 474); /*0x127838*/
  result = qword_905FD0; /*0x12783f*/
  if ( !qword_905FD0 ) /*0x127849*/
  {
    v5 = operator new(0x6E8u); /*0x127855*/
    qword_905FD0 = sub_2723A0(v5); /*0x127863*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x127874*/
    result = qword_905FD0; /*0x127876*/
  }
  *(_WORD *)(result + 992) = v2; /*0x12787d*/
  *(_BYTE *)(result + 994) = v3; /*0x127884*/
  return result; /*0x12788b*/
}

// [3/15] Address: 0x5c7e80
// Method: SetupPulsePopup::~SetupPulsePopup
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupPulsePopup__dtor_SetupPulsePopup(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *Block = &SetupPulsePopup::`vftable'; /*0x5c7e96*/
  Block[40] = &SetupPulsePopup::`vftable'; /*0x5c7ea0*/
  Block[41] = &SetupPulsePopup::`vftable'; /*0x5c7eae*/
  Block[42] = &SetupPulsePopup::`vftable'; /*0x5c7ebc*/
  Block[43] = &SetupPulsePopup::`vftable'; /*0x5c7eca*/
  Block[44] = &SetupPulsePopup::`vftable'; /*0x5c7ed8*/
  Block[51] = &SetupPulsePopup::`vftable'; /*0x5c7ee6*/
  Block[54] = &SetupPulsePopup::`vftable'; /*0x5c7ef4*/
  Block[68] = &SetupPulsePopup::`vftable'; /*0x5c7f02*/
  Block[83] = &SetupPulsePopup::`vftable'; /*0x5c7f10*/
  Block[84] = &SetupPulsePopup::`vftable'; /*0x5c7f1e*/
  Block[125] = &SetupPulsePopup::`vftable'; /*0x5c7f2c*/
  Block[126] = &SetupPulsePopup::`vftable'; /*0x5c7f3a*/
  v4 = (cocos2d::CCObject *)Block[129]; /*0x5c7f41*/
  if ( v4 ) /*0x5c7f4b*/
    cocos2d::CCObject::release(v4); /*0x5c7f4d*/
  v5 = (cocos2d::CCObject *)Block[130]; /*0x5c7f53*/
  if ( v5 ) /*0x5c7f5d*/
    cocos2d::CCObject::release(v5); /*0x5c7f5f*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5c7f68*/
  if ( (a2 & 1) != 0 ) /*0x5c7f72*/
    j_j_free(Block); /*0x5c7f7c*/
  return Block; /*0x5c7f84*/
}

// [4/15] Address: 0x5c7f90
// Method: SetupPulsePopup::create
// Hidden C++ exception states: #wind=1
char *__fastcall SetupPulsePopup_create(__int64 a1, __int64 a2)
{
  char *v4; // r14

  v4 = (char *)operator new(0x538u); /*0x5c7fb5*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5c7fc0*/
  cocos2d::extension::ColorPickerDelegate::ColorPickerDelegate((cocos2d::extension::ColorPickerDelegate *)(v4 + 1000)); /*0x5c7fcc*/
  *(_QWORD *)v4 = &SetupPulsePopup::`vftable'; /*0x5c7fd9*/
  *((_QWORD *)v4 + 40) = &SetupPulsePopup::`vftable'; /*0x5c7fe3*/
  *((_QWORD *)v4 + 41) = &SetupPulsePopup::`vftable'; /*0x5c7ff1*/
  *((_QWORD *)v4 + 42) = &SetupPulsePopup::`vftable'; /*0x5c7fff*/
  *((_QWORD *)v4 + 43) = &SetupPulsePopup::`vftable'; /*0x5c800d*/
  *((_QWORD *)v4 + 44) = &SetupPulsePopup::`vftable'; /*0x5c801b*/
  *((_QWORD *)v4 + 51) = &SetupPulsePopup::`vftable'; /*0x5c8029*/
  *((_QWORD *)v4 + 54) = &SetupPulsePopup::`vftable'; /*0x5c8037*/
  *((_QWORD *)v4 + 68) = &SetupPulsePopup::`vftable'; /*0x5c8045*/
  *((_QWORD *)v4 + 83) = &SetupPulsePopup::`vftable'; /*0x5c8053*/
  *((_QWORD *)v4 + 84) = &SetupPulsePopup::`vftable'; /*0x5c8061*/
  *((_QWORD *)v4 + 125) = &SetupPulsePopup::`vftable'; /*0x5c806f*/
  *((_QWORD *)v4 + 126) = &SetupPulsePopup::`vftable'; /*0x5c807d*/
  *((_QWORD *)v4 + 127) = 0; /*0x5c8086*/
  v4[1024] = 0; /*0x5c808d*/
  *((_QWORD *)v4 + 129) = 0; /*0x5c8094*/
  *((_QWORD *)v4 + 130) = 0; /*0x5c809b*/
  *((_QWORD *)v4 + 138) = 0; /*0x5c80a2*/
  *((_QWORD *)v4 + 139) = 0; /*0x5c80a9*/
  *((_QWORD *)v4 + 148) = 0; /*0x5c80b0*/
  *((_QWORD *)v4 + 150) = 0; /*0x5c80b7*/
  *((_QWORD *)v4 + 151) = 0; /*0x5c80be*/
  *((_QWORD *)v4 + 152) = 0; /*0x5c80c5*/
  *((_QWORD *)v4 + 153) = 0; /*0x5c80cc*/
  *((_QWORD *)v4 + 154) = 0; /*0x5c80d3*/
  *((_QWORD *)v4 + 155) = 0; /*0x5c80da*/
  *((_WORD *)v4 + 624) = 0; /*0x5c80e1*/
  v4[1250] = 0; /*0x5c80e9*/
  *((_DWORD *)v4 + 313) = 0; /*0x5c80f0*/
  v4[1260] = 0; /*0x5c80f7*/
  *((_QWORD *)v4 + 158) = 0; /*0x5c80fe*/
  *((_DWORD *)v4 + 318) = 0; /*0x5c8105*/
  *((_WORD *)v4 + 642) = 0; /*0x5c810c*/
  *(_OWORD *)(v4 + 1288) = unk_8F85E0; /*0x5c811b*/
  if ( (unsigned __int8)sub_5C8170(v4, a1, a2) ) /*0x5c812c*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5c8138*/
    return v4; /*0x5c813e*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x5c8152*/
    return 0; /*0x5c8155*/
  }
}

// [5/15] Address: 0x5cb6f0
// Method: SetupPulsePopup::onSelectPulseMode
int __fastcall SetupPulsePopup_onSelectPulseMode(__int64 a1, __int64 a2)
{
  int v3; // ebp
  const char *v4; // rsi
  const char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // esi
  unsigned int i; // edi
  struct cocos2d::CCObject *v10; // rax
  unsigned int j; // edi
  __int64 v12; // rdx
  struct cocos2d::CCObject *v13; // rax
  __int64 v14; // rax
  cocos2d::CCArray *v15; // rcx
  struct cocos2d::CCObject *v16; // rax

  if ( a2 ) /*0x5cb710*/
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5cb71b*/
  else
    v3 = -1; /*0x5cb71f*/
  v4 = "GJ_button_04.png"; /*0x5cb72b*/
  v5 = "GJ_button_04.png"; /*0x5cb73b*/
  if ( !v3 ) /*0x5cb73e*/
    v5 = "GJ_button_02.png"; /*0x5cb73e*/
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1128) + 952LL))(*(_QWORD *)(a1 + 1128)); /*0x5cb745*/
  sub_41FC0(v6, v5); /*0x5cb751*/
  if ( v3 == 1 ) /*0x5cb760*/
    v4 = "GJ_button_02.png"; /*0x5cb760*/
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1136) + 952LL))(*(_QWORD *)(a1 + 1136)); /*0x5cb767*/
  sub_41FC0(v7, v4); /*0x5cb773*/
  v8 = 0; /*0x5cb77f*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1032)); ++i ) /*0x5cb783*/
  {
    v10 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1032), i); /*0x5cb7a9*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, bool))(*(_QWORD *)v10 + 336LL))(v10, v3 == 0); /*0x5cb7c0*/
  }
  for ( j = 0; j < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1040)); ++j ) /*0x5cb7df*/
  {
    v13 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1040), j); /*0x5cb7f9*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, bool))(*(_QWORD *)v13 + 336LL))(v13, v3 == 1); /*0x5cb810*/
  }
  LOBYTE(v12) = v3 == 1; /*0x5cb830*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1192) + 920LL))(*(_QWORD *)(a1 + 1192), v12); /*0x5cb836*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1304) + 920LL))(*(_QWORD *)(a1 + 1304), v3 == 0); /*0x5cb850*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1312) + 920LL))(*(_QWORD *)(a1 + 1312), v3 == 0); /*0x5cb864*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1320) + 920LL))(*(_QWORD *)(a1 + 1320), v3 == 0); /*0x5cb878*/
  LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1328) + 920LL))( /*0x5cb88c*/
                   *(_QWORD *)(a1 + 1328),
                   v3 == 0);
  *(_DWORD *)(a1 + 1276) = v3; /*0x5cb892*/
  if ( !*(_BYTE *)(a1 + 1284) ) /*0x5cb898*/
  {
    v14 = *(_QWORD *)(a1 + 680); /*0x5cb8a1*/
    if ( v14 ) /*0x5cb8ab*/
    {
      *(_DWORD *)(v14 + 1620) = v3; /*0x5cb8ad*/
    }
    else
    {
      v15 = *(cocos2d::CCArray **)(a1 + 688); /*0x5cb8b5*/
      if ( v15 ) /*0x5cb8bf*/
      {
        LODWORD(v14) = cocos2d::CCArray::count(v15); /*0x5cb8c1*/
        if ( (_DWORD)v14 ) /*0x5cb8c9*/
        {
          do /*0x5cb8fc*/
          {
            v16 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v8++); /*0x5cb8d9*/
            *((_DWORD *)v16 + 405) = *(_DWORD *)(a1 + 1276); /*0x5cb8e7*/
            LODWORD(v14) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x5cb8f4*/
          }
          while ( v8 < (unsigned int)v14 ); /*0x5cb8fc*/
        }
      }
    }
  }
  return v14; /*0x5cb8fe*/
}

// [6/15] Address: 0x5cb920
// Method: SetupPulsePopup::onSelectTargetMode
int __fastcall SetupPulsePopup_onSelectTargetMode(__int64 a1, __int64 a2)
{
  int v3; // ebp
  const char *v4; // rsi
  const char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // rsi
  bool v9; // di
  __int64 v10; // rcx
  __int64 v11; // rcx
  cocos2d::CCDictionary *v12; // rcx
  struct cocos2d::CCObject *v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rcx
  cocos2d::CCArray *v16; // rcx
  struct cocos2d::CCObject *v17; // rax

  v3 = -1; /*0x5cb93d*/
  if ( a2 ) /*0x5cb945*/
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5cb950*/
  v4 = "GJ_button_04.png"; /*0x5cb959*/
  v5 = "GJ_button_04.png"; /*0x5cb969*/
  if ( !v3 ) /*0x5cb96c*/
    v5 = "GJ_button_02.png"; /*0x5cb96c*/
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1072) + 952LL))(*(_QWORD *)(a1 + 1072)); /*0x5cb973*/
  sub_41FC0(v6, v5); /*0x5cb980*/
  if ( v3 == 1 ) /*0x5cb98f*/
    v4 = "GJ_button_02.png"; /*0x5cb98f*/
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1080) + 952LL))(*(_QWORD *)(a1 + 1080)); /*0x5cb996*/
  sub_41FC0(v7, v4); /*0x5cb9a2*/
  if ( v3 ) /*0x5cb9b0*/
  {
    v8 = (const char *)&qword_743BA0; /*0x5cb9be*/
    if ( v3 != 1 ) /*0x5cb9c5*/
      v8 = "ID"; /*0x5cb9c5*/
  }
  else
  {
    v8 = "Channel ID"; /*0x5cb9b2*/
  }
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1152) + 336LL))(*(_QWORD *)(a1 + 1152), v3 == 0); /*0x5cb9dd*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1152) + 936LL))(*(_QWORD *)(a1 + 1152), v3 == 0); /*0x5cb9f1*/
  v9 = v3 == 1; /*0x5cba01*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1200) + 336LL))(*(_QWORD *)(a1 + 1200), v3 == 1); /*0x5cba0c*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1200) + 936LL))(*(_QWORD *)(a1 + 1200), v3 == 1); /*0x5cba20*/
  v10 = *(_QWORD *)(a1 + 1224); /*0x5cba26*/
  if ( v10 ) /*0x5cba30*/
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v10 + 336LL))(v10, v9); /*0x5cba39*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1208) + 336LL))(*(_QWORD *)(a1 + 1208), v9); /*0x5cba4d*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1208) + 936LL))(*(_QWORD *)(a1 + 1208), v9); /*0x5cba61*/
  v11 = *(_QWORD *)(a1 + 1232); /*0x5cba67*/
  if ( v11 ) /*0x5cba71*/
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v11 + 336LL))(v11, v9); /*0x5cba7a*/
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 1088) + 360LL))(*(_QWORD *)(a1 + 1088) + 360LL, v8); /*0x5cba94*/
  v12 = *(cocos2d::CCDictionary **)(a1 + 984); /*0x5cba96*/
  *(_DWORD *)(a1 + 1280) = v3; /*0x5cbaa2*/
  v13 = cocos2d::CCDictionary::objectForKey(v12, 51); /*0x5cbaa8*/
  v14 = 0; /*0x5cbaae*/
  if ( v13 ) /*0x5cbab3*/
    LODWORD(v13) = sub_3C4E40(v13, v3 == 1); /*0x5cbac0*/
  if ( !*(_BYTE *)(a1 + 1284) ) /*0x5cbac5*/
  {
    *(_DWORD *)(a1 + 1252) = 0; /*0x5cbad5*/
    SetupPulsePopup_updateTargetID(a1); /*0x5cbadb*/
    LODWORD(v13) = SetupPulsePopup_updateTextInputLabel(a1); /*0x5cbae3*/
    v15 = *(_QWORD *)(a1 + 680); /*0x5cbae8*/
    if ( v15 ) /*0x5cbaf2*/
    {
      LODWORD(v13) = *(_DWORD *)(a1 + 1280); /*0x5cbaf4*/
      *(_DWORD *)(v15 + 1624) = (_DWORD)v13; /*0x5cbafa*/
    }
    else
    {
      v16 = *(cocos2d::CCArray **)(a1 + 688); /*0x5cbb02*/
      if ( v16 ) /*0x5cbb0c*/
      {
        LODWORD(v13) = cocos2d::CCArray::count(v16); /*0x5cbb0e*/
        if ( (_DWORD)v13 ) /*0x5cbb16*/
        {
          do /*0x5cbb4c*/
          {
            v17 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v14++); /*0x5cbb29*/
            *((_DWORD *)v17 + 406) = *(_DWORD *)(a1 + 1280); /*0x5cbb37*/
            LODWORD(v13) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x5cbb44*/
          }
          while ( v14 < (unsigned int)v13 ); /*0x5cbb4c*/
        }
      }
    }
  }
  return (int)v13; /*0x5cbb4e*/
}

// [7/15] Address: 0x5cbb70
// Method: SetupPulsePopup::determineStartValues
void __fastcall SetupPulsePopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rbp
  __int128 v4; // xmm0
  char v5; // r12
  char v6; // r13
  char v7; // r14
  unsigned int v8; // r15d
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  int v12; // edi
  int v13; // esi
  struct cocos2d::CCObject *v14; // rax
  struct cocos2d::CCObject *v15; // rdx
  int v16; // eax
  __int16 v17; // ax
  char v18; // cl
  __m128 v19; // xmm2
  __m128i v20; // xmm2
  __m128 v21; // xmm1
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  __m128 v28; // [rsp+20h] [rbp-B8h]
  float v29; // [rsp+3Ch] [rbp-9Ch]
  char v30; // [rsp+E0h] [rbp+8h]

  SetupTriggerPopup_determineStartValues(a1); /*0x5cbb7d*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5cbb82*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5cbb9c*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5cbb9f*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5cbba7*/
  }
  if ( v3 && cocos2d::CCArray::count(v3) ) /*0x5cbbba*/
  {
    v4 = unk_8F85E0; /*0x5cbbd2*/
    v5 = 1; /*0x5cbbf1*/
    v6 = 0; /*0x5cbbfc*/
    v7 = 1; /*0x5cbc07*/
    v8 = 0; /*0x5cbc13*/
    *(_WORD *)(a1 + 1120) = -1; /*0x5cbc1e*/
    *(_BYTE *)(a1 + 1122) = -1; /*0x5cbc3a*/
    v30 = 0; /*0x5cbc51*/
    v9 = -1.0; /*0x5cbc58*/
    v10 = -1.0; /*0x5cbc67*/
    *(_WORD *)(a1 + 1248) = 257; /*0x5cbc6b*/
    v11 = -1.0; /*0x5cbc74*/
    *(_BYTE *)(a1 + 1285) = 1; /*0x5cbc78*/
    *(_BYTE *)(a1 + 1250) = 1; /*0x5cbc7f*/
    v12 = -1; /*0x5cbc86*/
    v13 = -1; /*0x5cbc88*/
    *(_QWORD *)(a1 + 1252) = -1; /*0x5cbc8a*/
    for ( *(_OWORD *)(a1 + 1288) = v4; v8 < cocos2d::CCArray::count(v3); ++v8 ) /*0x5cbc9c*/
    {
      v14 = cocos2d::CCArray::objectAtIndex(v3, v8); /*0x5cbcc6*/
      v15 = v14; /*0x5cbccc*/
      if ( !*((_BYTE *)v14 + 1649) ) /*0x5cbccf*/
        *(_BYTE *)(a1 + 1248) = 0; /*0x5cbcd8*/
      if ( !*((_BYTE *)v14 + 1650) ) /*0x5cbcdf*/
        *(_BYTE *)(a1 + 1249) = 0; /*0x5cbce8*/
      if ( !*((_BYTE *)v14 + 1651) ) /*0x5cbcef*/
        *(_BYTE *)(a1 + 1285) = 0; /*0x5cbcf8*/
      if ( !*((_BYTE *)v14 + 1652) ) /*0x5cbcff*/
        *(_BYTE *)(a1 + 1250) = 0; /*0x5cbd08*/
      if ( v9 == -1.0 ) /*0x5cbd1d*/
      {
        v9 = *((float *)v14 + 402); /*0x5cbd1f*/
      }
      else if ( v9 != *((float *)v14 + 402) ) /*0x5cbd29*/
      {
        v9 = -2.0; /*0x5cbd2b*/
      }
      if ( v10 == -1.0 ) /*0x5cbd3d*/
      {
        v10 = *((float *)v14 + 403); /*0x5cbd3f*/
      }
      else if ( v10 != *((float *)v14 + 403) ) /*0x5cbd49*/
      {
        v10 = -2.0; /*0x5cbd4b*/
      }
      if ( v11 == -1.0 ) /*0x5cbd5d*/
      {
        v11 = *((float *)v14 + 404); /*0x5cbd5f*/
      }
      else if ( v11 != *((float *)v14 + 404) ) /*0x5cbd6b*/
      {
        v11 = -2.0; /*0x5cbd6d*/
      }
      v16 = *((_DWORD *)v14 + 405); /*0x5cbd71*/
      if ( v12 == -1 ) /*0x5cbd7f*/
      {
        v12 = v16; /*0x5cbd81*/
      }
      else if ( v12 != v16 ) /*0x5cbd87*/
      {
        v12 = -2; /*0x5cbd87*/
      }
      if ( v13 == -1 ) /*0x5cbd93*/
      {
        v13 = *((_DWORD *)v15 + 406); /*0x5cbd95*/
      }
      else if ( v13 != *((_DWORD *)v15 + 406) ) /*0x5cbd9b*/
      {
        v13 = -2; /*0x5cbd9b*/
      }
      if ( !v30 ) /*0x5cbda6*/
      {
        v17 = *(_WORD *)((char *)v15 + 1465); /*0x5cbda8*/
        v18 = *((_BYTE *)v15 + 1467); /*0x5cbdaf*/
        if ( v5 ) /*0x5cbdb9*/
        {
          *(_WORD *)(a1 + 1120) = v17; /*0x5cbdbb*/
          *(_BYTE *)(a1 + 1122) = v18; /*0x5cbdc2*/
        }
        else if ( *(_WORD *)(a1 + 1120) != v17 || *(_BYTE *)(a1 + 1122) != v18 ) /*0x5cbdf0*/
        {
          *(_WORD *)(a1 + 1120) = -1; /*0x5cbdf9*/
          *(_BYTE *)(a1 + 1122) = -1; /*0x5cbe07*/
          v30 = 1; /*0x5cbe0d*/
        }
        v5 = 0; /*0x5cbe15*/
      }
      if ( !v6 ) /*0x5cbe1b*/
      {
        if ( v7 ) /*0x5cbe24*/
        {
          *(_OWORD *)(a1 + 1288) = *(_OWORD *)((char *)v15 + 1628); /*0x5cbe2d*/
        }
        else
        {
          v19 = *(__m128 *)((char *)v15 + 1628); /*0x5cbe39*/
          if ( *(float *)(a1 + 1288) != v19.m128_f32[0] /*0x5cbe9e*/
            || *(float *)(a1 + 1292) != _mm_shuffle_ps(v19, v19, 85).m128_f32[0]
            || *(float *)(a1 + 1296) != _mm_shuffle_ps(v19, v19, 170).m128_f32[0]
            || (v20 = _mm_srli_si128((__m128i)v19, 8), *(_BYTE *)(a1 + 1300) != v20.m128i_i8[4])
            || *(_BYTE *)(a1 + 1301) != v20.m128i_i8[5] )
          {
            v28.m128_i32[0] = -1165815185; /*0x5cbea0*/
            v6 = 1; /*0x5cbea8*/
            *(unsigned __int64 *)((char *)v28.m128_u64 + 4) = 0; /*0x5cbeab*/
            LOWORD(v29) = 0; /*0x5cbeb9*/
            v21 = _mm_shuffle_ps(v28, v28, 147); /*0x5cbec6*/
            v21.m128_f32[0] = v29; /*0x5cbeca*/
            v28 = _mm_shuffle_ps(v21, v21, 57); /*0x5cbed2*/
            *(__m128 *)(a1 + 1288) = v28; /*0x5cbed7*/
          }
        }
        v7 = 0; /*0x5cbede*/
      }
      v22 = *(_DWORD *)(a1 + 1252); /*0x5cbee1*/
      v23 = *((_DWORD *)v15 + 370); /*0x5cbee7*/
      if ( v22 == -1 ) /*0x5cbef0*/
      {
        *(_DWORD *)(a1 + 1252) = v23; /*0x5cbef2*/
      }
      else if ( v22 != v23 ) /*0x5cbefc*/
      {
        *(_DWORD *)(a1 + 1252) = 0; /*0x5cbefe*/
      }
      v24 = *(_DWORD *)(a1 + 1256); /*0x5cbf08*/
      v25 = *((_DWORD *)v15 + 411); /*0x5cbf0e*/
      if ( v24 == -1 ) /*0x5cbf17*/
      {
        *(_DWORD *)(a1 + 1256) = v25; /*0x5cbf19*/
      }
      else if ( v24 != v25 ) /*0x5cbf23*/
      {
        *(_DWORD *)(a1 + 1256) = 0; /*0x5cbf25*/
      }
    }
    if ( v9 < 0.0 ) /*0x5cbf7c*/
      v9 = -0.1; /*0x5cbf7e*/
    *(float *)(a1 + 1264) = v9; /*0x5cbf85*/
    if ( v10 < 0.0 ) /*0x5cbf95*/
      v10 = -0.1; /*0x5cbf97*/
    *(float *)(a1 + 1268) = v10; /*0x5cbf9a*/
    if ( v11 < 0.0 ) /*0x5cbfb4*/
      v11 = -0.1; /*0x5cbfb6*/
    *(float *)(a1 + 1272) = v11; /*0x5cbfba*/
    v26 = -1; /*0x5cbfc5*/
    v27 = -1; /*0x5cbfca*/
    if ( v12 >= 0 ) /*0x5cbfcc*/
      v27 = v12; /*0x5cbfcc*/
    *(_DWORD *)(a1 + 1276) = v27; /*0x5cbfd1*/
    if ( v13 >= 0 ) /*0x5cbfdd*/
      v26 = v13; /*0x5cbfdd*/
    *(_DWORD *)(a1 + 1280) = v26; /*0x5cbff0*/
  }
}

// [8/15] Address: 0x5cc3a0
// Method: SetupPulsePopup::colorSelectClosed
void __fastcall SetupPulsePopup_colorSelectClosed(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+38h] [rbp-8h]

  if ( a3 >= 1000 ) /*0x5cc3a7*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 7 ) /*0x5cc3d9*/
    {
      v6 = *(_QWORD **)(a1 + 184); /*0x5cc3df*/
      *(_DWORD *)(a1 + 248) = a3; /*0x5cc3ed*/
      v12 = 0; /*0x5cc3f3*/
      LOWORD(v12) = 48; /*0x5cc3f7*/
      *(_BYTE *)(a1 - 264) = 1; /*0x5cc3fd*/
      v13 = 1; /*0x5cc404*/
      v14 = 15; /*0x5cc40c*/
      CCTextInputNode_setString(v6, &v12); /*0x5cc414*/
      v7 = GJSpecialColorSelect_textForColorIdx((unsigned int)a3); /*0x5cc41b*/
      v13 = 0; /*0x5cc425*/
      v8 = -1; /*0x5cc429*/
      v14 = 0; /*0x5cc430*/
      v12 = 0; /*0x5cc434*/
      do /*0x5cc443*/
        ++v8; /*0x5cc440*/
      while ( *(_BYTE *)(v7 + v8) ); /*0x5cc443*/
      sub_3C230(&v12); /*0x5cc450*/
      SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 184), &v12); /*0x5cc460*/
      sub_5CD7B0(a1 - 1008); /*0x5cc46c*/
    }
    else
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 6 ) /*0x5cc482*/
        return; /*0x5cc482*/
      v9 = *(_QWORD **)(a1 + 176); /*0x5cc488*/
      *(_DWORD *)(a1 + 244) = a3; /*0x5cc496*/
      v12 = 0; /*0x5cc49c*/
      LOWORD(v12) = 48; /*0x5cc4a0*/
      *(_BYTE *)(a1 - 264) = 1; /*0x5cc4a6*/
      v13 = 1; /*0x5cc4ad*/
      v14 = 15; /*0x5cc4b5*/
      CCTextInputNode_setString(v9, &v12); /*0x5cc4bd*/
      v10 = GJSpecialColorSelect_textForColorIdx((unsigned int)a3); /*0x5cc4c4*/
      v13 = 0; /*0x5cc4ce*/
      v11 = -1; /*0x5cc4d2*/
      v14 = 0; /*0x5cc4d9*/
      v12 = 0; /*0x5cc4dd*/
      do /*0x5cc4e4*/
        ++v11; /*0x5cc4e1*/
      while ( *(_BYTE *)(v10 + v11) ); /*0x5cc4e4*/
      sub_3C230(&v12); /*0x5cc4f1*/
      SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 176), &v12); /*0x5cc501*/
      SetupPulsePopup_updateTargetID(a1 - 1008); /*0x5cc50d*/
      sub_607BB0(a1 - 1008); /*0x5cc519*/
    }
    *(_BYTE *)(a1 - 264) = 0; /*0x5cc51e*/
  }
}

// [9/15] Address: 0x5cc540
// Method: SetupPulsePopup::sliderChanged
void __fastcall SetupPulsePopup_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm0_4
  cocos2d::CCString *v5; // rax
  float v6; // xmm0_4
  int v7; // eax
  int v8; // eax
  float v9; // xmm0_4
  const char *CString; // rax
  cocos2d::CCString *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rcx
  float v14; // xmm0_4
  const char *v15; // rax
  cocos2d::CCString *v16; // rax
  __int64 v17; // r8
  float v18; // xmm0_4
  const char *v19; // rax
  cocos2d::CCString *v20; // rax
  __int64 v21; // r8
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]
  __int64 v24; // [rsp+38h] [rbp-20h]

  Value = SliderThumb_getValue(a2); /*0x5cc558*/
  v5 = cocos2d::CCString::createWithFormat("%.01f", (float)(Value * 10.0)); /*0x5cc578*/
  v6 = cocos2d::CCString::floatValue(v5); /*0x5cc581*/
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x5cc593*/
  if ( v7 ) /*0x5cc596*/
  {
    v8 = v7 - 1; /*0x5cc59c*/
    if ( v8 ) /*0x5cc59f*/
    {
      if ( v8 != 1 ) /*0x5cc5a8*/
        return; /*0x5cc5a8*/
      *(float *)(a1 + 1272) = v6; /*0x5cc5b1*/
      sub_5CC8A0(a1); /*0x5cc5b9*/
      v9 = *(float *)(a1 + 1272); /*0x5cc5be*/
      CString = "Mixed"; /*0x5cc5c6*/
      *(_BYTE *)(a1 + 744) = 1; /*0x5cc5d4*/
      if ( v9 != -0.1 ) /*0x5cc5dd*/
      {
        v11 = cocos2d::CCString::createWithFormat("%.02f", v9); /*0x5cc5ee*/
        CString = cocos2d::CCString::getCString(v11); /*0x5cc5f7*/
      }
      v22 = 0; /*0x5cc602*/
      v23 = 0; /*0x5cc607*/
      v12 = -1; /*0x5cc60c*/
      v24 = 0; /*0x5cc613*/
      do /*0x5cc623*/
        ++v12; /*0x5cc620*/
      while ( CString[v12] ); /*0x5cc623*/
      sub_3C230(&v22); /*0x5cc631*/
      v13 = *(_QWORD **)(a1 + 1176); /*0x5cc636*/
    }
    else
    {
      *(float *)(a1 + 1268) = v6; /*0x5cc645*/
      sub_5CC810(a1); /*0x5cc64d*/
      v14 = *(float *)(a1 + 1268); /*0x5cc652*/
      v15 = "Mixed"; /*0x5cc65a*/
      *(_BYTE *)(a1 + 744) = 1; /*0x5cc668*/
      if ( v14 != -0.1 ) /*0x5cc671*/
      {
        v16 = cocos2d::CCString::createWithFormat("%.02f", v14); /*0x5cc682*/
        v15 = cocos2d::CCString::getCString(v16); /*0x5cc68b*/
      }
      v22 = 0; /*0x5cc696*/
      v23 = 0; /*0x5cc69b*/
      v17 = -1; /*0x5cc6a0*/
      v24 = 0; /*0x5cc6a7*/
      do /*0x5cc6b3*/
        ++v17; /*0x5cc6b0*/
      while ( v15[v17] ); /*0x5cc6b3*/
      sub_3C230(&v22); /*0x5cc6c1*/
      v13 = *(_QWORD **)(a1 + 1168); /*0x5cc6c6*/
    }
  }
  else
  {
    *(float *)(a1 + 1264) = v6; /*0x5cc6d5*/
    sub_5CC780(a1); /*0x5cc6dd*/
    v18 = *(float *)(a1 + 1264); /*0x5cc6e2*/
    v19 = "Mixed"; /*0x5cc6ea*/
    *(_BYTE *)(a1 + 744) = 1; /*0x5cc6f8*/
    if ( v18 != -0.1 ) /*0x5cc701*/
    {
      v20 = cocos2d::CCString::createWithFormat("%.02f", v18); /*0x5cc712*/
      v19 = cocos2d::CCString::getCString(v20); /*0x5cc71b*/
    }
    v22 = 0; /*0x5cc726*/
    v23 = 0; /*0x5cc72b*/
    v21 = -1; /*0x5cc730*/
    v24 = 0; /*0x5cc737*/
    do /*0x5cc743*/
      ++v21; /*0x5cc740*/
    while ( v19[v21] ); /*0x5cc743*/
    sub_3C230(&v22); /*0x5cc751*/
    v13 = *(_QWORD **)(a1 + 1160); /*0x5cc756*/
  }
  CCTextInputNode_setString(v13, &v22); /*0x5cc762*/
  *(_BYTE *)(a1 + 744) = 0; /*0x5cc767*/
}

// [10/15] Address: 0x5cc930
// Method: SetupPulsePopup::onClose
__int64 __fastcall SetupPulsePopup_onClose(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  cocos2d::CCArray *v5; // rcx
  struct cocos2d::CCObject *v6; // rax

  v2 = 0; /*0x5cc94c*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1184) + 608LL) = 0; /*0x5cc950*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1184) + 1032LL))(*(_QWORD *)(a1 + 1184), 0); /*0x5cc961*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1192) + 608LL) = 0; /*0x5cc970*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1192) + 1032LL))(*(_QWORD *)(a1 + 1192), 0); /*0x5cc981*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1160) + 608LL) = 0; /*0x5cc990*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1160) + 1032LL))(*(_QWORD *)(a1 + 1160), 0); /*0x5cc9a1*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 608LL) = 0; /*0x5cc9b0*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1168) + 1032LL))(*(_QWORD *)(a1 + 1168), 0); /*0x5cc9c1*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1176) + 608LL) = 0; /*0x5cc9d0*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1176) + 1032LL))(*(_QWORD *)(a1 + 1176), 0); /*0x5cc9e1*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1304) + 608LL) = 0; /*0x5cc9f0*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1304) + 1032LL))(*(_QWORD *)(a1 + 1304), 0); /*0x5cca01*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1312) + 608LL) = 0; /*0x5cca10*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1312) + 1032LL))(*(_QWORD *)(a1 + 1312), 0); /*0x5cca21*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1320) + 608LL) = 0; /*0x5cca30*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1320) + 1032LL))(*(_QWORD *)(a1 + 1320), 0); /*0x5cca41*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1328) + 608LL) = 0; /*0x5cca50*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1328) + 1032LL))(*(_QWORD *)(a1 + 1328), 0); /*0x5cca61*/
  v3 = *(_QWORD *)(a1 + 1144); /*0x5cca67*/
  if ( !*(_BYTE *)(v3 + 392) ) /*0x5cca6e*/
  {
    v4 = *(_QWORD *)(a1 + 680); /*0x5cca7e*/
    *(_OWORD *)(a1 + 1288) = *(_OWORD *)(v3 + 376); /*0x5cca85*/
    if ( v4 ) /*0x5cca8f*/
    {
      *(_OWORD *)(v4 + 1628) = *(_OWORD *)(v3 + 376); /*0x5cca98*/
    }
    else
    {
      v5 = *(cocos2d::CCArray **)(a1 + 688); /*0x5ccaa1*/
      if ( v5 && cocos2d::CCArray::count(v5) ) /*0x5ccaad*/
      {
        do /*0x5ccaee*/
        {
          v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v2++); /*0x5ccac9*/
          *(_OWORD *)((char *)v6 + 1628) = *(_OWORD *)(a1 + 1288); /*0x5ccad8*/
        }
        while ( v2 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5ccaee*/
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x5ccaf6*/
}

// [11/15] Address: 0x5ccb10
// Method: SetupPulsePopup::colorValueChanged
void __fastcall SetupPulsePopup_colorValueChanged(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rcx
  unsigned int v6; // ebx
  struct cocos2d::CCObject *v7; // rax

  v2 = *(_QWORD *)(a1 + 104); /*0x5ccb1d*/
  if ( v2 ) /*0x5ccb24*/
  {
    v3 = *(_QWORD *)(a1 + 16); /*0x5ccb2a*/
    *(_WORD *)(a1 + 120) = *(_WORD *)(v3 + 472); /*0x5ccb41*/
    *(_BYTE *)(a1 + 122) = *(_BYTE *)(v3 + 474); /*0x5ccb50*/
    (**(void (__fastcall ***)(__int64, __int64))(v2 + 320))(v2 + 320, a1 + 120); /*0x5ccb56*/
    (**(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 112) + 320LL))(*(_QWORD *)(a1 + 112) + 320LL, a1 + 96); /*0x5ccb6a*/
    if ( !*(_BYTE *)(a1 + 260) ) /*0x5ccb6c*/
    {
      v4 = *(_QWORD *)(a1 - 320); /*0x5ccb79*/
      if ( v4 ) /*0x5ccb83*/
      {
        *(_WORD *)(v4 + 1465) = *(_WORD *)(a1 + 120); /*0x5ccb89*/
        *(_BYTE *)(v4 + 1467) = *(_BYTE *)(a1 + 122); /*0x5ccb94*/
      }
      else
      {
        v5 = *(cocos2d::CCArray **)(a1 - 312); /*0x5ccb9c*/
        if ( v5 ) /*0x5ccba6*/
        {
          v6 = 0; /*0x5ccbad*/
          if ( cocos2d::CCArray::count(v5) ) /*0x5ccbaf*/
          {
            do /*0x5ccbf5*/
            {
              v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 - 312), v6++); /*0x5ccbc9*/
              *(_WORD *)((char *)v7 + 1465) = *(_WORD *)(a1 + 120); /*0x5ccbd5*/
              *((_BYTE *)v7 + 1467) = *(_BYTE *)(a1 + 122); /*0x5ccbe0*/
            }
            while ( v6 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 - 312)) ); /*0x5ccbf5*/
          }
        }
      }
    }
    sub_5CD510(a1 - 1000); /*0x5ccc03*/
  }
}

// [12/15] Address: 0x5ccc20
// Method: SetupPulsePopup::show
__int64 __fastcall SetupPulsePopup_show(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+32h] [rbp+Ah]

  v1 = *(_QWORD *)(a1 + 1016); /*0x5ccc26*/
  *(_BYTE *)(a1 + 1260) = 1; /*0x5ccc30*/
  *(_WORD *)(a1 + 1096) = *(_WORD *)(v1 + 472); /*0x5ccc3e*/
  *(_BYTE *)(a1 + 1098) = *(_BYTE *)(v1 + 474); /*0x5ccc4c*/
  v4 = *(_WORD *)(v1 + 472); /*0x5ccc60*/
  v5 = *(_BYTE *)(v1 + 474); /*0x5ccc71*/
  (**(void (__fastcall ***)(__int64, __int16 *))(a1 + 1000))(a1 + 1000, &v4); /*0x5ccc78*/
  *(_BYTE *)(a1 + 1260) = 0; /*0x5ccc7d*/
  return SetupTriggerPopup_show(a1); /*0x5ccc84*/
}

// [13/15] Address: 0x5ccd00
// Method: SetupPulsePopup::textChanged
void __fastcall SetupPulsePopup_textChanged(__int64 a1, _QWORD *a2)
{
  int v2; // r14d
  __int64 v3; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  const char *v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  char *v11; // rcx
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rbx
  const char *v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rdx
  char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  const char *v22; // rcx
  double v23; // xmm0_8
  unsigned __int64 v24; // rdx
  float v25; // xmm1_4
  char *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  const char *v29; // rcx
  double v30; // xmm0_8
  unsigned __int64 v31; // rdx
  float v32; // xmm1_4
  char *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rbx
  const char *v36; // rcx
  double v37; // xmm0_8
  unsigned __int64 v38; // rdx
  float v39; // xmm1_4
  char *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rbx
  const char *v43; // rcx
  int v44; // r15d
  char *v45; // r8
  char v46; // bl
  int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r8
  char **v53; // rax
  char *v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int16 v59; // cx
  char v60; // dl
  __int16 v61; // [rsp+30h] [rbp-50h] BYREF
  char v62; // [rsp+32h] [rbp-4Eh]
  char *String[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v64; // [rsp+50h] [rbp-30h]

  v2 = 0; /*0x5ccd20*/
  v3 = a1 - 544; /*0x5ccd23*/
  if ( !*(_BYTE *)(a1 - 544 + 744) ) /*0x5ccd30*/
  {
    switch ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) ) /*0x5ccd7a*/
    {
      case 5u: /*0x5ccd7a*/
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5cce7a*/
        *(_OWORD *)String = 0; /*0x5cce83*/
        v15 = -1; /*0x5cce87*/
        v64 = 0; /*0x5cce8e*/
        do /*0x5cce96*/
          ++v15; /*0x5cce93*/
        while ( *(_BYTE *)(v14 + v15) ); /*0x5cce96*/
        sub_3C230(String); /*0x5ccea6*/
        v16 = (const char *)String; /*0x5cceb0*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5cceb4*/
          v16 = String[0]; /*0x5cceb4*/
        v17 = atoi(v16); /*0x5cceb9*/
        v18 = *((_QWORD *)&v64 + 1); /*0x5ccebf*/
        *(_DWORD *)(a1 + 712) = v17; /*0x5ccec3*/
        if ( v18 > 0xF ) /*0x5ccecd*/
        {
          v19 = String[0]; /*0x5ccecf*/
          if ( v18 + 1 >= 0x1000 ) /*0x5ccee0*/
          {
            v19 = (char *)*((_QWORD *)String[0] - 1); /*0x5ccee2*/
            if ( (unsigned __int64)(String[0] - v19 - 8) > 0x1F ) /*0x5ccef5*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5ccf06*/
          }
          j_j_free(v19); /*0x5ccf0d*/
        }
        if ( *(int *)(a1 + 712) >= 0 ) /*0x5ccf22*/
          v2 = *(_DWORD *)(a1 + 712); /*0x5ccf22*/
        if ( v2 > 999 ) /*0x5ccf29*/
          v2 = 999; /*0x5ccf29*/
        *(_DWORD *)(a1 + 712) = v2; /*0x5ccf2d*/
        sub_5CD7B0(v3); /*0x5ccf34*/
        break; /*0x5ccf39*/
      case 8u: /*0x5ccd7a*/
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5ccf4f*/
        *(_OWORD *)String = 0; /*0x5ccf58*/
        v21 = -1; /*0x5ccf5c*/
        v64 = 0; /*0x5ccf63*/
        do /*0x5ccf73*/
          ++v21; /*0x5ccf70*/
        while ( *(_BYTE *)(v20 + v21) ); /*0x5ccf73*/
        sub_3C230(String); /*0x5ccf83*/
        v22 = (const char *)String; /*0x5ccf8d*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5ccf91*/
          v22 = String[0]; /*0x5ccf91*/
        v23 = atof(v22); /*0x5ccf96*/
        v24 = *((_QWORD *)&v64 + 1); /*0x5ccf9c*/
        v25 = v23; /*0x5ccfa3*/
        *(float *)(a1 + 720) = v25; /*0x5ccfa7*/
        if ( v24 > 0xF ) /*0x5ccfb3*/
        {
          v26 = String[0]; /*0x5ccfb5*/
          if ( v24 + 1 >= 0x1000 ) /*0x5ccfc6*/
          {
            v26 = (char *)*((_QWORD *)String[0] - 1); /*0x5ccfc8*/
            if ( (unsigned __int64)(String[0] - v26 - 8) > 0x1F ) /*0x5ccfdb*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5ccfec*/
          }
          j_j_free(v26); /*0x5ccff3*/
        }
        *(float *)(a1 + 720) = fmaxf(0.0, *(float *)(a1 + 720)); /*0x5cd009*/
        sub_5CC780(v3); /*0x5cd011*/
        sub_83840(*(_QWORD *)(a1 + 504)); /*0x5cd040*/
        break; /*0x5cd045*/
      case 9u: /*0x5ccd7a*/
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5cd05b*/
        *(_OWORD *)String = 0; /*0x5cd064*/
        v28 = -1; /*0x5cd068*/
        v64 = 0; /*0x5cd06f*/
        do /*0x5cd077*/
          ++v28; /*0x5cd074*/
        while ( *(_BYTE *)(v27 + v28) ); /*0x5cd077*/
        sub_3C230(String); /*0x5cd087*/
        v29 = (const char *)String; /*0x5cd091*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5cd095*/
          v29 = String[0]; /*0x5cd095*/
        v30 = atof(v29); /*0x5cd09a*/
        v31 = *((_QWORD *)&v64 + 1); /*0x5cd0a0*/
        v32 = v30; /*0x5cd0a7*/
        *(float *)(a1 + 724) = v32; /*0x5cd0ab*/
        if ( v31 > 0xF ) /*0x5cd0b7*/
        {
          v33 = String[0]; /*0x5cd0b9*/
          if ( v31 + 1 >= 0x1000 ) /*0x5cd0ca*/
          {
            v33 = (char *)*((_QWORD *)String[0] - 1); /*0x5cd0cc*/
            if ( (unsigned __int64)(String[0] - v33 - 8) > 0x1F ) /*0x5cd0df*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5cd0f0*/
          }
          j_j_free(v33); /*0x5cd0f7*/
        }
        *(float *)(a1 + 724) = fmaxf(0.0, *(float *)(a1 + 724)); /*0x5cd10d*/
        sub_5CC810(v3); /*0x5cd115*/
        sub_83840(*(_QWORD *)(a1 + 512)); /*0x5cd144*/
        break; /*0x5cd149*/
      case 0xAu: /*0x5ccd7a*/
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5cd15f*/
        *(_OWORD *)String = 0; /*0x5cd168*/
        v35 = -1; /*0x5cd16c*/
        v64 = 0; /*0x5cd173*/
        do /*0x5cd183*/
          ++v35; /*0x5cd180*/
        while ( *(_BYTE *)(v34 + v35) ); /*0x5cd183*/
        sub_3C230(String); /*0x5cd193*/
        v36 = (const char *)String; /*0x5cd19d*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5cd1a1*/
          v36 = String[0]; /*0x5cd1a1*/
        v37 = atof(v36); /*0x5cd1a6*/
        v38 = *((_QWORD *)&v64 + 1); /*0x5cd1ac*/
        v39 = v37; /*0x5cd1b3*/
        *(float *)(a1 + 728) = v39; /*0x5cd1b7*/
        if ( v38 > 0xF ) /*0x5cd1c3*/
        {
          v40 = String[0]; /*0x5cd1c5*/
          if ( v38 + 1 >= 0x1000 ) /*0x5cd1d6*/
          {
            v40 = (char *)*((_QWORD *)String[0] - 1); /*0x5cd1d8*/
            if ( (unsigned __int64)(String[0] - v40 - 8) > 0x1F ) /*0x5cd1eb*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5cd1fc*/
          }
          j_j_free(v40); /*0x5cd203*/
        }
        *(float *)(a1 + 728) = fmaxf(0.0, *(float *)(a1 + 728)); /*0x5cd219*/
        sub_5CC8A0(v3); /*0x5cd221*/
        sub_83840(*(_QWORD *)(a1 + 520)); /*0x5cd250*/
        break; /*0x5cd255*/
      case 0xBu: /*0x5ccd7a*/
      case 0xCu: /*0x5ccd7a*/
      case 0xDu: /*0x5ccd7a*/
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5cd26b*/
        *(_OWORD *)String = 0; /*0x5cd274*/
        v42 = -1; /*0x5cd278*/
        v64 = 0; /*0x5cd27f*/
        do /*0x5cd287*/
          ++v42; /*0x5cd284*/
        while ( *(_BYTE *)(v41 + v42) ); /*0x5cd287*/
        sub_3C230(String); /*0x5cd297*/
        v43 = (const char *)String; /*0x5cd2a1*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5cd2a5*/
          v43 = String[0]; /*0x5cd2a5*/
        v44 = atoi(v43); /*0x5cd2b4*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5cd2bb*/
        {
          v45 = String[0]; /*0x5cd2bd*/
          if ( (unsigned __int64)(*((_QWORD *)&v64 + 1) + 1LL) >= 0x1000 ) /*0x5cd2ce*/
          {
            v45 = (char *)*((_QWORD *)String[0] - 1); /*0x5cd2d0*/
            if ( (unsigned __int64)(String[0] - v45 - 8) > 0x1F ) /*0x5cd2e3*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5cd2f4*/
          }
          j_j_free(v45); /*0x5cd2fe*/
        }
        v46 = -1; /*0x5cd309*/
        if ( v44 < 0 ) /*0x5cd311*/
          v44 = 0; /*0x5cd311*/
        if ( v44 < 255 ) /*0x5cd318*/
          v46 = v44; /*0x5cd318*/
        v47 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) - 11; /*0x5cd31f*/
        if ( v47 ) /*0x5cd322*/
        {
          v48 = v47 - 1; /*0x5cd324*/
          if ( v48 ) /*0x5cd327*/
          {
            if ( v48 == 1 ) /*0x5cd32c*/
              *(_BYTE *)(a1 + 578) = v46; /*0x5cd32e*/
          }
          else
          {
            *(_BYTE *)(a1 + 577) = v46; /*0x5cd336*/
          }
        }
        else
        {
          *(_BYTE *)(a1 + 576) = v46; /*0x5cd33e*/
        }
        v61 = *(_WORD *)(a1 + 576); /*0x5cd34b*/
        v62 = *(_BYTE *)(a1 + 578); /*0x5cd356*/
        goto LABEL_97; /*0x5cd359*/
      case 0xEu: /*0x5ccd7a*/
        v49 = *(_QWORD *)(*(_QWORD *)(a1 + 784) + 600LL) + 600LL; /*0x5cd36c*/
        v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49); /*0x5cd376*/
        v51 = -1; /*0x5cd37f*/
        *(_OWORD *)String = 0; /*0x5cd386*/
        v52 = -1; /*0x5cd38a*/
        v64 = 0; /*0x5cd38d*/
        do /*0x5cd395*/
          ++v52; /*0x5cd392*/
        while ( *(_BYTE *)(v50 + v52) ); /*0x5cd395*/
        sub_3C230(String); /*0x5cd3a2*/
        v53 = String; /*0x5cd3ab*/
        v54 = String[0]; /*0x5cd3af*/
        v55 = -1; /*0x5cd3b7*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5cd3ba*/
          v53 = (char **)String[0]; /*0x5cd3ba*/
        do /*0x5cd3c3*/
          ++v55; /*0x5cd3c0*/
        while ( *((_BYTE *)v53 + v55) ); /*0x5cd3c3*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5cd3cd*/
        {
          if ( (unsigned __int64)(*((_QWORD *)&v64 + 1) + 1LL) >= 0x1000 ) /*0x5cd3dc*/
          {
            v54 = (char *)*((_QWORD *)String[0] - 1); /*0x5cd3de*/
            if ( (unsigned __int64)(String[0] - v54 - 8) > 0x1F ) /*0x5cd3f1*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5cd402*/
          }
          j_j_free(v54); /*0x5cd409*/
        }
        if ( v55 == 6 ) /*0x5cd412*/
        {
          v56 = *(_QWORD *)(*(_QWORD *)(a1 + 784) + 600LL) + 600LL; /*0x5cd426*/
          v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56); /*0x5cd430*/
          v64 = 0u; /*0x5cd436*/
          *(_OWORD *)String = 0; /*0x5cd43a*/
          do /*0x5cd445*/
            ++v51; /*0x5cd442*/
          while ( *(_BYTE *)(v57 + v51) ); /*0x5cd445*/
          sub_3C230(String); /*0x5cd455*/
          v58 = CreateMenuItem_create(&v61, String); /*0x5cd462*/
          v59 = *(_WORD *)v58; /*0x5cd467*/
          v60 = *(_BYTE *)(v58 + 2); /*0x5cd46a*/
          *(_WORD *)(a1 + 576) = *(_WORD *)v58; /*0x5cd46e*/
          *(_BYTE *)(a1 + 578) = v60; /*0x5cd475*/
          v61 = v59; /*0x5cd47b*/
          v62 = v60; /*0x5cd47f*/
LABEL_97:
          (*(void (__fastcall **)(_QWORD, __int16 *))(**(_QWORD **)(a1 + 472) + 1128LL))(*(_QWORD *)(a1 + 472), &v61); /*0x5cd482*/
        }
        break; /*0x5cd490*/
      case 0x33u: /*0x5ccd7a*/
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5ccd8d*/
        *(_OWORD *)String = 0; /*0x5ccd96*/
        v7 = -1; /*0x5ccd9a*/
        v64 = 0; /*0x5ccda1*/
        do /*0x5ccda9*/
          ++v7; /*0x5ccda6*/
        while ( *(_BYTE *)(v6 + v7) ); /*0x5ccda9*/
        sub_3C230(String); /*0x5ccdb9*/
        v8 = (const char *)String; /*0x5ccdc3*/
        if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x5ccdc7*/
          v8 = String[0]; /*0x5ccdc7*/
        v9 = atoi(v8); /*0x5ccdcc*/
        v10 = *((_QWORD *)&v64 + 1); /*0x5ccdd2*/
        *(_DWORD *)(a1 + 708) = v9; /*0x5ccdd6*/
        if ( v10 > 0xF ) /*0x5ccde0*/
        {
          v11 = String[0]; /*0x5ccde2*/
          if ( v10 + 1 >= 0x1000 ) /*0x5ccdf3*/
          {
            v11 = (char *)*((_QWORD *)String[0] - 1); /*0x5ccdf5*/
            if ( (unsigned __int64)(String[0] - v11 - 8) > 0x1F ) /*0x5cce08*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5cce19*/
          }
          j_j_free(v11); /*0x5cce20*/
        }
        v12 = *(_DWORD *)(a1 + 708); /*0x5cce25*/
        v13 = 999; /*0x5cce32*/
        if ( v12 < 1 ) /*0x5cce37*/
          v12 = 1; /*0x5cce37*/
        if ( *(_DWORD *)(a1 + 736) == 1 ) /*0x5cce46*/
          v13 = 9999; /*0x5cce46*/
        if ( v13 < v12 ) /*0x5cce4e*/
          v12 = v13; /*0x5cce4e*/
        *(_DWORD *)(a1 + 708) = v12; /*0x5cce51*/
        SetupPulsePopup_updateTargetID(v3); /*0x5cce57*/
        sub_607BB0(v3); /*0x5cce5f*/
        break; /*0x5cce64*/
      default:
        return;
    }
  }
}

// [14/15] Address: 0x5cd6f0
// Method: SetupPulsePopup::updateTargetID
void __fastcall SetupPulsePopup_updateTargetID(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // esi
  struct cocos2d::CCObject *v6; // rax
  int v7; // ecx

  v2 = *(_QWORD *)(a1 + 680); /*0x5cd702*/
  if ( v2 ) /*0x5cd70c*/
  {
    v3 = *(_DWORD *)(a1 + 1252); /*0x5cd70e*/
    if ( v3 < 0 ) /*0x5cd71d*/
      v3 = 0; /*0x5cd71d*/
    if ( v3 > 9999 ) /*0x5cd722*/
      v3 = 9999; /*0x5cd722*/
    *(_DWORD *)(v2 + 1480) = v3; /*0x5cd725*/
  }
  else
  {
    v4 = *(cocos2d::CCArray **)(a1 + 688); /*0x5cd73b*/
    if ( v4 ) /*0x5cd745*/
    {
      v5 = 0; /*0x5cd74e*/
      if ( cocos2d::CCArray::count(v4) ) /*0x5cd750*/
      {
        do /*0x5cd796*/
        {
          v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v5); /*0x5cd769*/
          v7 = *(_DWORD *)(a1 + 1252); /*0x5cd76f*/
          if ( v7 < 0 ) /*0x5cd777*/
            v7 = 0; /*0x5cd777*/
          if ( v7 > 9999 ) /*0x5cd77c*/
            v7 = 9999; /*0x5cd77c*/
          ++v5; /*0x5cd77f*/
          *((_DWORD *)v6 + 370) = v7; /*0x5cd781*/
        }
        while ( v5 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5cd796*/
      }
    }
  }
}

// [15/15] Address: 0x5cd840
// Method: SetupPulsePopup::updateTextInputLabel
void __fastcall SetupPulsePopup_updateTextInputLabel(__int64 a1)
{
  __int64 v1; // rdx
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  const char *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  v1 = *(unsigned int *)(a1 + 1252); /*0x5cd84f*/
  *(_BYTE *)(a1 + 744) = 1; /*0x5cd858*/
  v3 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v1); /*0x5cd866*/
  CString = cocos2d::CCString::getCString(v3); /*0x5cd86f*/
  if ( *(int *)(a1 + 1252) >= 1000 ) /*0x5cd87f*/
  {
    v5 = "0"; /*0x5cd888*/
    if ( *(_DWORD *)(a1 + 1280) == 1 ) /*0x5cd88f*/
      v5 = CString; /*0x5cd88f*/
    CString = v5; /*0x5cd893*/
  }
  v6 = -1; /*0x5cd89b*/
  v11 = 0; /*0x5cd8a2*/
  v10 = 0; /*0x5cd8a7*/
  v12 = 0; /*0x5cd8ac*/
  v7 = -1; /*0x5cd8b1*/
  do /*0x5cd8b7*/
    ++v7; /*0x5cd8b4*/
  while ( CString[v7] ); /*0x5cd8b7*/
  sub_3C230(&v10); /*0x5cd8c5*/
  CCTextInputNode_setString(*(_QWORD **)(a1 + 1184), &v10); /*0x5cd8d6*/
  v8 = *(unsigned int *)(a1 + 1252); /*0x5cd8db*/
  if ( (int)v8 >= 1000 && *(_DWORD *)(a1 + 1280) != 1 ) /*0x5cd8f0*/
  {
    v9 = GJSpecialColorSelect_textForColorIdx(v8); /*0x5cd8f2*/
    v11 = 0; /*0x5cd8fa*/
    v10 = 0; /*0x5cd8ff*/
    v12 = 0; /*0x5cd904*/
    do /*0x5cd913*/
      ++v6; /*0x5cd910*/
    while ( *(_BYTE *)(v9 + v6) ); /*0x5cd913*/
    sub_3C230(&v10); /*0x5cd924*/
    SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 1184), &v10); /*0x5cd935*/
  }
  *(_BYTE *)(a1 + 744) = 0; /*0x5cd93f*/
}
