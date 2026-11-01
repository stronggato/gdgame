#include <Geode/binding/FriendPickerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0xd18f0
// Method: FriendPickerPopup::~FriendPickerPopup
// Hidden C++ exception states: #wind=1
char *__fastcall FriendPickerPopup__dtor_FriendPickerPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rax
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx

  *(_QWORD *)Block = &FriendPickerPopup::`vftable'; /*0xd190b*/
  *((_QWORD *)Block + 40) = &FriendPickerPopup::`vftable'; /*0xd1915*/
  *((_QWORD *)Block + 41) = &FriendPickerPopup::`vftable'; /*0xd1923*/
  *((_QWORD *)Block + 42) = &FriendPickerPopup::`vftable'; /*0xd1931*/
  *((_QWORD *)Block + 43) = &FriendPickerPopup::`vftable'; /*0xd193f*/
  *((_QWORD *)Block + 44) = &FriendPickerPopup::`vftable'; /*0xd194d*/
  *((_QWORD *)Block + 51) = &FriendPickerPopup::`vftable'; /*0xd195b*/
  *((_QWORD *)Block + 54) = &FriendPickerPopup::`vftable'; /*0xd1969*/
  *((_QWORD *)Block + 68) = &FriendPickerPopup::`vftable'; /*0xd1977*/
  *((_QWORD *)Block + 97) = &FriendPickerPopup::`vftable'; /*0xd1985*/
  v4 = Block + 784; /*0xd198c*/
  *((_QWORD *)Block + 98) = &FriendPickerPopup::`vftable'; /*0xd199a*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd199d*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd19a7*/
  {
    v6 = operator new(0x690u); /*0xd19ae*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd19bb*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd19cc*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd19ce*/
  }
  if ( *(char **)(v5 + 1496) == v4 ) /*0xd19de*/
    *(_QWORD *)(v5 + 1496) = 0; /*0xd19e0*/
  v7 = *((_QWORD *)Block + 109); /*0xd19e7*/
  if ( v7 ) /*0xd19f1*/
    *(_QWORD *)(v7 + 608) = 0; /*0xd19f3*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 100); /*0xd19fa*/
  if ( v8 ) /*0xd1a04*/
    cocos2d::CCObject::release(v8); /*0xd1a06*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 101); /*0xd1a0c*/
  if ( v9 ) /*0xd1a16*/
    cocos2d::CCObject::release(v9); /*0xd1a18*/
  v10 = (cocos2d::CCObject *)*((_QWORD *)Block + 102); /*0xd1a1e*/
  if ( v10 ) /*0xd1a28*/
    cocos2d::CCObject::release(v10); /*0xd1a2a*/
  sub_3C310(Block + 832); /*0xd1a37*/
  PagedListPopup__dtor_PagedListPopup(Block); /*0xd1a3f*/
  if ( (a2 & 1) != 0 ) /*0xd1a49*/
    j_j_free(Block); /*0xd1a53*/
  return Block; /*0xd1a5b*/
}

// [2/7] Address: 0xe55f0
// Method: FriendPickerPopup::getUserListFinished
void __fastcall FriendPickerPopup_getUserListFinished(__int64 a1, cocos2d::CCObject *a2, int a3)
{
  __int64 v5; // rcx
  cocos2d::CCObject *v6; // rcx
  __int64 v7; // rcx
  cocos2d::CCObject *v8; // rcx

  if ( a3 == 2 ) /*0xe5609*/
  {
    v5 = *(_QWORD *)(a1 - 88); /*0xe560b*/
    if ( v5 ) /*0xe5612*/
      LoadingCircle_fadeAndRemove(v5); /*0xe5614*/
    v6 = *(cocos2d::CCObject **)(a1 + 24); /*0xe5619*/
    if ( v6 ) /*0xe5620*/
      cocos2d::CCObject::release(v6); /*0xe5622*/
    *(_QWORD *)(a1 + 24) = a2; /*0xe562b*/
    cocos2d::CCObject::retain(a2); /*0xe562f*/
    *(_BYTE *)(a1 + 40) = 1; /*0xe5635*/
  }
  else
  {
    if ( a3 ) /*0xe563e*/
      return; /*0xe563e*/
    v7 = *(_QWORD *)(a1 - 88); /*0xe5640*/
    if ( v7 ) /*0xe5647*/
      LoadingCircle_fadeAndRemove(v7); /*0xe5649*/
    v8 = *(cocos2d::CCObject **)(a1 + 16); /*0xe564e*/
    if ( v8 ) /*0xe5655*/
      cocos2d::CCObject::release(v8); /*0xe5657*/
    *(_QWORD *)(a1 + 16) = a2; /*0xe5660*/
    cocos2d::CCObject::retain(a2); /*0xe5664*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 16)) > 1 ) /*0xe5677*/
      qsort( /*0xe5694*/
        *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 16LL),
        **(unsigned int **)(*(_QWORD *)(a1 + 16) + 56LL),
        8u,
        sub_E49D0);
  }
  sub_E6130(a1 - 784); /*0xe56a1*/
}

// [3/7] Address: 0xe56c0
// Method: FriendPickerPopup::getUserListFailed
// Hidden C++ exception states: #wind=1
void __fastcall FriendPickerPopup_getUserListFailed(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  cocos2d::CCObject *v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  _WORD v13[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+48h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h]
  __int64 v18; // [rsp+68h] [rbp-10h]

  if ( a2 == 2 ) /*0xe56d8*/
  {
    v5 = *(_QWORD *)(a1 - 88); /*0xe56de*/
    if ( v5 ) /*0xe56e5*/
      LoadingCircle_fadeAndRemove(v5); /*0xe56e7*/
    if ( a3 == -2 ) /*0xe56ef*/
    {
      v6 = *(cocos2d::CCObject **)(a1 + 24); /*0xe56f1*/
      if ( v6 ) /*0xe56f8*/
      {
        cocos2d::CCObject::release(v6); /*0xe56fa*/
        *(_QWORD *)(a1 + 24) = 0; /*0xe5702*/
      }
      *(_BYTE *)(a1 + 40) = 1; /*0xe5706*/
      sub_E6130(a1 - 784); /*0xe5722*/
    }
    else
    {
      v7 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v5) + 272); /*0xe572d*/
      v16 = 0; /*0xe5744*/
      v17 = 0; /*0xe574b*/
      v18 = 15; /*0xe5750*/
      LOBYTE(v16) = 0; /*0xe5759*/
      v13[7] = 0; /*0xe575d*/
      v14 = 13; /*0xe5762*/
      v15 = 15; /*0xe576b*/
      strcpy((char *)v13, "Search failed"); /*0xe577c*/
      v8 = *v7; /*0xe579c*/
      v11 = sub_3A4CA0(v13, v9, v10, 150, &v16); /*0xe57c4*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v8 + 456))(v7, v11, 1000); /*0xe57d5*/
    }
  }
  else if ( !a2 ) /*0xe57ef*/
  {
    v12 = *(_QWORD *)(a1 - 88); /*0xe57f1*/
    if ( v12 ) /*0xe57f8*/
      LoadingCircle_fadeAndRemove(v12); /*0xe57fa*/
    sub_C1980(a1 - 784, "Something went wrong..."); /*0xe580d*/
  }
}

// [4/7] Address: 0xe5830
// Method: FriendPickerPopup::textChanged
// Hidden C++ exception states: #wind=1
__int64 __fastcall FriendPickerPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 i; // rdi
  _QWORD *v6; // rdx
  _QWORD *v7; // rbx
  void *v8; // rcx
  _QWORD v10[2]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-50h]
  unsigned __int64 v12; // [rsp+50h] [rbp-48h]
  void *Block[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v14; // [rsp+68h] [rbp-30h]

  *(_BYTE *)(a1 + 280) = 0; /*0xe5851*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0xe5869*/
  *(_OWORD *)Block = 0; /*0xe586f*/
  v14 = 0; /*0xe5877*/
  v4 = -1; /*0xe587d*/
  do /*0xe5887*/
    ++v4; /*0xe5884*/
  while ( *(_BYTE *)(v3 + v4) ); /*0xe5887*/
  sub_3C230(Block); /*0xe5896*/
  sub_3E4F0(v10, Block); /*0xe58a6*/
  for ( i = 0; i < v11; ++i ) /*0xe58b2*/
  {
    v6 = v10; /*0xe58b4*/
    if ( v12 > 0xF ) /*0xe58bf*/
      v6 = (_QWORD *)v10[0]; /*0xe58bf*/
    v7 = v10; /*0xe58c5*/
    if ( v12 > 0xF ) /*0xe58ca*/
      v7 = (_QWORD *)v10[0]; /*0xe58ca*/
    *((_BYTE *)v7 + i) = tolower(*((char *)v6 + i)); /*0xe58da*/
  }
  sub_58AD0(a1 + 288, v10); /*0xe58f3*/
  sub_3C310(v10); /*0xe58fd*/
  if ( *((_QWORD *)&v14 + 1) > 0xFu ) /*0xe590c*/
  {
    v8 = Block[0]; /*0xe5911*/
    if ( (unsigned __int64)(*((_QWORD *)&v14 + 1) + 1LL) >= 0x1000 ) /*0xe5920*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0xe5926*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0xe5935*/
        invoke_watson(0, 0, 0, 0, 0); /*0xe594a*/
    }
    j_j_free(v8); /*0xe5951*/
  }
  return sub_E6130(a1 - 544); /*0xe5962*/
}

// [5/7] Address: 0xe6450
// Method: FriendPickerPopup::virtualRowCount
unsigned int __fastcall FriendPickerPopup_virtualRowCount(__int64 a1)
{
  cocos2d::CCArray *v1; // rcx

  v1 = *(cocos2d::CCArray **)(a1 + 40); /*0xe6450*/
  if ( v1 ) /*0xe6457*/
    return cocos2d::CCArray::count(v1); /*0xe6459*/
  else
    return 0; /*0xe6460*/
}

// [6/7] Address: 0xe6480
// Method: FriendPickerPopup::mountVirtualRow
// Hidden C++ exception states: #wind=1
void __fastcall FriendPickerPopup_mountVirtualRow(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  struct cocos2d::CCObject *v7; // rbp
  int v8; // r14d
  char v9; // al
  bool v10; // di
  cocos2d::CCArray *v11; // rcx
  unsigned int v12; // ebx
  bool v13; // bl
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  bool v18; // di
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rax
  const char *v22; // rcx
  struct cocos2d::CCLabelBMFont *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rcx
  const char *v32; // rcx
  struct cocos2d::CCSprite *v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rax
  void *v36; // [rsp+80h] [rbp+8h] BYREF

  v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 40), a2); /*0xe64b4*/
  v8 = 0; /*0xe64b7*/
  if ( *(_BYTE *)(a1 + 51) ) /*0xe64ba*/
    goto LABEL_19; /*0xe64be*/
  v9 = *(_BYTE *)(a1 + 48); /*0xe64c4*/
  v10 = v9 == 0; /*0xe64ca*/
  if ( v9 ) /*0xe64d0*/
  {
    v11 = *(cocos2d::CCArray **)(a1 + 24); /*0xe64d2*/
    if ( v11 ) /*0xe64d9*/
    {
      v12 = 0; /*0xe64db*/
      if ( (int)cocos2d::CCArray::count(v11) > 0 ) /*0xe64e6*/
      {
        while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 24), v12) + 98) != *((_DWORD *)v7 + 98) ) /*0xe6508*/
        {
          if ( (int)++v12 >= (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 24)) ) /*0xe6518*/
            goto LABEL_9; /*0xe6518*/
        }
        v10 = 1; /*0xe651c*/
      }
    }
  }
LABEL_9:
  if ( !*(_BYTE *)(a1 + 49) ) /*0xe6523*/
  {
    v14 = *((_DWORD *)v7 + 113); /*0xe653a*/
    if ( v14 ) /*0xe6542*/
    {
      if ( v14 != 1 ) /*0xe6547*/
        goto LABEL_18; /*0xe6547*/
      if ( !v10 ) /*0xe654c*/
      {
        v15 = qword_905FD0; /*0xe654e*/
        if ( !qword_905FD0 ) /*0xe6558*/
        {
          v36 = operator new(0x6E8u); /*0xe6564*/
          qword_905FD0 = sub_2723A0(v36); /*0xe6575*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xe6586*/
          v15 = qword_905FD0; /*0xe6588*/
        }
        v16 = *(_DWORD *)(v15 + 1064) - *(_DWORD *)(v15 + 1068); /*0xe6595*/
        if ( v16 != 1 && v16 != 2 ) /*0xe65a3*/
        {
LABEL_18:
          v13 = 0; /*0xe65a5*/
          goto LABEL_20; /*0xe65a7*/
        }
      }
    }
LABEL_19:
    v13 = 1; /*0xe65a9*/
    goto LABEL_20; /*0xe65a9*/
  }
  v13 = *((_DWORD *)v7 + !v10 + 116) != 2; /*0xe6535*/
LABEL_20:
  v18 = 0; /*0xe65ca*/
  if ( *(_BYTE *)(a1 + 50) ) /*0xe65ab*/
  {
    v17 = *(_QWORD *)(a1 + 16); /*0xe65b1*/
    if ( v17 ) /*0xe65b8*/
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 8LL))(v17, *((unsigned int *)v7 + 98)) ) /*0xe65c3*/
        v18 = 1; /*0xe65af*/
    }
  }
  if ( *(_BYTE *)(a1 + 52) ) /*0xe65d2*/
  {
    v19 = *(_QWORD *)(a1 + 16); /*0xe65d8*/
    if ( v19 ) /*0xe65df*/
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 48LL))(v19, *((unsigned int *)v7 + 98)); /*0xe65ed*/
  }
  v20 = !v13 && !v8; /*0xe65fd*/
  sub_155960((_DWORD)v7, (_DWORD)a3, (_DWORD)a4, a1 - 776, (__int64)sub_E6820, 1101004800, v20, 0); /*0xe6632*/
  if ( v13 && v18 ) /*0xe663e*/
  {
    LOWORD(v36) = -256; /*0xe6652*/
    BYTE2(v36) = 0; /*0xe665a*/
    (**(void (__fastcall ***)(__int64, void **))(v21 + 368))(v21 + 368, &v36); /*0xe6674*/
  }
  if ( v8 ) /*0xe6679*/
  {
    v22 = "Invited"; /*0xe6686*/
    if ( v8 == 1 ) /*0xe6691*/
      v22 = "Member"; /*0xe6691*/
    v23 = cocos2d::CCLabelBMFont::create(v22, "chatFont.fnt"); /*0xe66a2*/
    v24 = *(_QWORD *)v23; /*0xe66a5*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v36, 1.0, 0.5); /*0xe66c0*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v24 + 288))(v23, v25); /*0xe66cc*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v23 + 160LL))(v23); /*0xe66e7*/
    LOBYTE(v26) = -126; /*0xe66f3*/
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v23 + 46) + 40LL))((__int64)v23 + 368, v26); /*0xe66f5*/
    v27 = *(_QWORD *)v23; /*0xe66f8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v36, *(float *)(a1 - 72) - 12.0, 20.0); /*0xe6713*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v27 + 184))(v23, v28); /*0xe671f*/
    v29 = *a3; /*0xe6725*/
    v30 = 1; /*0xe6729*/
    v31 = a3; /*0xe672f*/
  }
  else
  {
    if ( !v13 ) /*0xe6739*/
      return; /*0xe6739*/
    v32 = "GJ_checkOff_001.png"; /*0xe6746*/
    if ( v18 ) /*0xe6750*/
      v32 = "GJ_checkOn_001.png"; /*0xe6750*/
    v33 = cocos2d::CCSprite::createWithSpriteFrameName(v32); /*0xe675a*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v33 + 160LL))(v33); /*0xe6772*/
    v23 = (struct cocos2d::CCLabelBMFont *)CCMenuItemSpriteExtra_create(v33, 0, a1 - 776, sub_E6860); /*0xe678c*/
    *((_DWORD *)v23 + 93) = 1068708659; /*0xe678f*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, struct cocos2d::CCObject *))(*(_QWORD *)v23 + 640LL))( /*0xe67a9*/
      v23,
      v7);
    v34 = *(_QWORD *)v23; /*0xe67ac*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v36, *(float *)(a1 - 72) - 24.0, 20.0); /*0xe67c7*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v34 + 184))(v23, v35); /*0xe67d3*/
    v29 = *a4; /*0xe67d9*/
    v30 = 3; /*0xe67dd*/
    v31 = a4; /*0xe67e3*/
  }
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCLabelBMFont *, __int64))(v29 + 456))(v31, v23, v30); /*0xe67e9*/
}

// [7/7] Address: 0xe6b30
// Method: FriendPickerPopup::onClose
__int64 __fastcall FriendPickerPopup_onClose(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = a1[99]; /*0xe6b39*/
  if ( v2 ) /*0xe6b43*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2); /*0xe6b48*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xe6b53*/
  LOBYTE(v3) = 1; /*0xe6b5c*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v3);
}
