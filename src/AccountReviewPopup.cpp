#include <Geode/binding/AccountReviewPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/27] Address: 0xacf70
// Method: AccountReviewPopup::~AccountReviewPopup
__int64 __fastcall AccountReviewPopup__dtor_AccountReviewPopup(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  cocos2d::CCNotificationCenter *v9; // rax
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  _QWORD *v12; // rcx

  *a1 = &AccountReviewPopup::`vftable'; /*0xacf94*/
  a1[40] = &AccountReviewPopup::`vftable'; /*0xacf9e*/
  a1[41] = &AccountReviewPopup::`vftable'; /*0xacfac*/
  a1[42] = &AccountReviewPopup::`vftable'; /*0xacfba*/
  a1[43] = &AccountReviewPopup::`vftable'; /*0xacfc8*/
  a1[44] = &AccountReviewPopup::`vftable'; /*0xacfd6*/
  a1[51] = &AccountReviewPopup::`vftable'; /*0xacfe4*/
  a1[54] = &AccountReviewPopup::`vftable'; /*0xacff2*/
  a1[68] = &AccountReviewPopup::`vftable'; /*0xad000*/
  v3 = a1 + 97; /*0xad007*/
  a1[97] = &AccountReviewPopup::`vftable'; /*0xad015*/
  v4 = a1 + 98; /*0xad018*/
  a1[98] = &AccountReviewPopup::`vftable'; /*0xad026*/
  a1[99] = &AccountReviewPopup::`vftable'; /*0xad030*/
  a1[100] = &AccountReviewPopup::`vftable'; /*0xad03e*/
  a1[101] = &AccountReviewPopup::`vftable'; /*0xad04c*/
  a1[102] = &AccountReviewPopup::`vftable'; /*0xad05a*/
  a1[103] = &AccountReviewPopup::`vftable'; /*0xad068*/
  v5 = a1 + 104; /*0xad06f*/
  a1[104] = &AccountReviewPopup::`vftable'; /*0xad07d*/
  v6 = *(_QWORD **)&qword_905FB0; /*0xad080*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xad08a*/
  {
    v7 = operator new(0x690u); /*0xad091*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0xad09e*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xad0af*/
    v6 = *(_QWORD **)&qword_905FB0; /*0xad0b1*/
  }
  if ( (_QWORD *)v6[173] == v3 ) /*0xad0c1*/
    v6[173] = 0; /*0xad0c3*/
  if ( (_QWORD *)v6[172] == v4 ) /*0xad0d1*/
    v6[172] = 0; /*0xad0d3*/
  if ( (_QWORD *)v6[174] == v5 ) /*0xad0e1*/
    v6[174] = 0; /*0xad0e3*/
  v8 = a1[173]; /*0xad0ea*/
  if ( v8 ) /*0xad0f4*/
    *(_QWORD *)(v8 + 664) = 0; /*0xad0f6*/
  v9 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(a1, a2); /*0xad0fd*/
  cocos2d::CCNotificationCenter::removeObserver(v9, (struct cocos2d::CCObject *)a1, "ModActionTakenNotification"); /*0xad110*/
  v10 = (cocos2d::CCObject *)a1[175]; /*0xad116*/
  if ( v10 ) /*0xad120*/
    cocos2d::CCObject::release(v10); /*0xad122*/
  v11 = (cocos2d::CCObject *)a1[110]; /*0xad128*/
  if ( v11 ) /*0xad132*/
    cocos2d::CCObject::release(v11); /*0xad134*/
  v12 = (_QWORD *)a1[194]; /*0xad13a*/
  if ( v12 ) /*0xad144*/
  {
    if ( ((a1[196] - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0xad15b*/
    {
      if ( (unsigned __int64)v12 - *(v12 - 1) - 8 > 0x1F ) /*0xad170*/
        invoke_watson(0, 0, 0, 0, 0); /*0xad1ff*/
      v12 = (_QWORD *)*(v12 - 1); /*0xad172*/
    }
    j_j_free(v12); /*0xad175*/
    a1[194] = 0; /*0xad17a*/
    a1[195] = 0; /*0xad181*/
    a1[196] = 0; /*0xad188*/
  }
  sub_BB6F0(a1 + 179, a1 + 179); /*0xad199*/
  sub_3DA90(a1 + 176); /*0xad1a5*/
  sub_685C0(a1 + 170); /*0xad1b1*/
  sub_AA500(a1 + 112); /*0xad1bd*/
  sub_3C310(a1 + 106); /*0xad1c9*/
  return PagedListPopup__dtor_PagedListPopup(a1); /*0xad1d1*/
}

// [2/27] Address: 0xad210
// Method: AccountReviewPopup::onClose
__int64 __fastcall AccountReviewPopup_onClose(_BYTE *a1, __int64 a2)
{
  cocos2d::CCNotificationCenter *v3; // rax
  __int64 v4; // rdx

  if ( a1[1336] ) /*0xad216*/
  {
    v3 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(a1, a2); /*0xad222*/
    cocos2d::CCNotificationCenter::postNotification(v3, "ReportedContentChangedNotification", 0); /*0xad235*/
  }
  (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0xad243*/
  LOBYTE(v4) = 1; /*0xad24c*/
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4);
}

// [3/27] Address: 0xaebe0
// Method: AccountReviewPopup::adminAccountReviewFinished
__int64 __fastcall AccountReviewPopup_adminAccountReviewFinished(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 == *(_DWORD *)(a1 + 64) ) /*0xaebf8*/
  {
    sub_AEC50(a1 + 120, a3); /*0xaec01*/
    v5 = *(_QWORD *)(a1 + 104); /*0xaec06*/
    *(_BYTE *)(a1 + 544) = 1; /*0xaec0a*/
    if ( *(int *)(v5 + 388) <= 0 ) /*0xaec18*/
      *(_DWORD *)(v5 + 388) = *(_DWORD *)(a3 + 32); /*0xaec1d*/
    sub_AF0E0(a1 - 776, a3); /*0xaec2d*/
    return sub_B12D0(a1 - 776); /*0xaec39*/
  }
  return result; /*0xaec3e*/
}

// [4/27] Address: 0xaeef0
// Method: AccountReviewPopup::adminAccountReviewFailed
void __fastcall AccountReviewPopup_adminAccountReviewFailed(__int64 a1, int a2)
{
  struct cocos2d::CCLabelBMFont *v3; // rdi
  void (__fastcall **v4)(__int64, __int16 *); // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  struct cocos2d::CCLabelBMFont *v7; // [rsp+30h] [rbp+8h] BYREF
  __int16 v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+3Ah] [rbp+12h]

  if ( a2 == *(_DWORD *)(a1 + 64) ) /*0xaef00*/
  {
    *(_BYTE *)(a1 + 544) = 0; /*0xaef06*/
    sub_AF000(a1 - 776); /*0xaef19*/
    sub_B12D0(a1 - 776); /*0xaef25*/
    v3 = cocos2d::CCLabelBMFont::create("The account card failed to load. Close and reopen.", "chatFont.fnt"); /*0xaef46*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 160LL))(v3); /*0xaef56*/
    v8 = -26986; /*0xaef5f*/
    v4 = (void (__fastcall **)(__int64, __int16 *))*((_QWORD *)v3 + 46); /*0xaef66*/
    v9 = -106; /*0xaef69*/
    (*v4)((__int64)v3 + 368, &v8); /*0xaef76*/
    v5 = *(_QWORD *)v3; /*0xaef8b*/
    cocos2d::CCPoint::CCPoint( /*0xaefa0*/
      (cocos2d::CCPoint *)&v7,
      *(float *)(a1 - 112),
      (float)((float)(*(float *)(a1 - 100) * 0.5) + *(float *)(a1 - 108)) - 40.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v5 + 184))(v3, v6); /*0xaefac*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 - 192) + 456LL))( /*0xaefc5*/
      *(_QWORD *)(a1 - 192),
      v3,
      1);
    v7 = v3; /*0xaefd2*/
    sub_BB550(a1 + 776, &v7); /*0xaefdc*/
  }
}

// [5/27] Address: 0xb1390
// Method: AccountReviewPopup::requestPage
// Hidden C++ exception states: #wind=4
__int64 __fastcall AccountReviewPopup_requestPage(unsigned int *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  void *v11; // [rsp+40h] [rbp+8h]

  v6 = a1 + 194; /*0xb13a4*/
  if ( !a1 ) /*0xb13b0*/
    v6 = 0; /*0xb13b0*/
  v7 = *(_QWORD *)&qword_905FB0; /*0xb13b4*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xb13be*/
  {
    v11 = operator new(0x690u); /*0xb13ca*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0xb13d8*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xb13e9*/
    v7 = *(_QWORD *)&qword_905FB0; /*0xb13eb*/
  }
  *(_QWORD *)(v7 + 1384) = v6; /*0xb13f2*/
  v8 = a1[331]; /*0xb13f9*/
  v9 = a1[210]; /*0xb1402*/
  if ( v8 == 1 ) /*0xb140b*/
    return sub_242280(v7, v9, a2, a1[333]); /*0xb1423*/
  if ( v8 == 2 ) /*0xb142b*/
    return sub_23ECE0(v7, v9, a2); /*0xb143c*/
  return sub_23FB20(v7, v9, a2, a4, a1[332]); /*0xb1414*/
}

// [6/27] Address: 0xb1460
// Method: AccountReviewPopup::clearPageContent
__int64 __fastcall AccountReviewPopup_clearPageContent(__int64 a1)
{
  cocos2d::CCObject *v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  void *v6; // rcx

  PagedListPopup_clearPageContent(); /*0xb1478*/
  v2 = *(cocos2d::CCObject **)(a1 + 1400); /*0xb147d*/
  if ( v2 ) /*0xb1487*/
  {
    cocos2d::CCObject::release(v2); /*0xb1489*/
    *(_QWORD *)(a1 + 1400) = 0; /*0xb148f*/
  }
  v3 = *(_QWORD *)(a1 + 1408); /*0xb149a*/
  if ( v3 != *(_QWORD *)(a1 + 1416) ) /*0xb14a8*/
    *(_QWORD *)(a1 + 1416) = v3; /*0xb14aa*/
  v4 = *(_QWORD **)(a1 + 1432); /*0xb14b1*/
  v5 = (_QWORD *)v4[1]; /*0xb14b8*/
  while ( !*((_BYTE *)v5 + 25) ) /*0xb14bc*/
  {
    sub_BB690(a1 + 1432, a1 + 1432, v5[2]); /*0xb14d4*/
    v6 = v5; /*0xb14d9*/
    v5 = (_QWORD *)*v5; /*0xb14e1*/
    j_j_free(v6); /*0xb14e4*/
  }
  v4[1] = v4; /*0xb14ef*/
  *v4 = v4; /*0xb14f6*/
  v4[2] = v4; /*0xb14f9*/
  *(_QWORD *)(a1 + 1440) = 0; /*0xb14fd*/
  *(_DWORD *)(a1 + 1352) = -1; /*0xb1508*/
  return sub_B6550(a1); /*0xb1512*/
}

// [7/27] Address: 0xb1550
// Method: AccountReviewPopup::rebuildContent
// Hidden C++ exception states: #wind=2
__int64 __fastcall AccountReviewPopup_rebuildContent(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h]

  v2 = a1 + 776; /*0xb155d*/
  if ( !a1 ) /*0xb1569*/
    v2 = 0; /*0xb1569*/
  v3 = *(_QWORD *)&qword_905FB0; /*0xb156d*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xb1577*/
  {
    v5 = operator new(0x690u); /*0xb1583*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xb1591*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xb15a2*/
    v3 = *(_QWORD *)&qword_905FB0; /*0xb15a4*/
  }
  *(_QWORD *)(v3 + 1384) = v2; /*0xb15ab*/
  GameLevelManager_deleteServerLevelList(v3, *(_DWORD *)(a1 + 840)); /*0xb15b8*/
  return sub_C1780(a1, *(unsigned int *)(a1 + 680)); /*0xb15c6*/
}

// [8/27] Address: 0xb1630
// Method: AccountReviewPopup::dropdownSelectionChanged
__int64 __fastcall AccountReviewPopup_dropdownSelectionChanged(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a3 <= 3 ) /*0xb1634*/
  {
    v3 = a1 - 808; /*0xb1636*/
    *(_DWORD *)(v3 + 1328) = a3; /*0xb163f*/
    return sub_C1780(v3, 0); /*0xb1646*/
  }
  return result; /*0xb164b*/
}

// [9/27] Address: 0xb17b0
// Method: AccountReviewPopup::adminReportedContentFinished
void __fastcall AccountReviewPopup_adminReportedContentFinished(
        __int64 a1,
        __int64 a2,
        cocos2d::CCObject *a3,
        _DWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  cocos2d::CCObject *v11; // rcx
  int v12; // ecx
  unsigned int v13; // ebp
  int v14; // r15d
  int v15; // eax
  int v16; // r9d
  __int64 v17; // r9
  const char *v18; // rdx

  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 64) && !*(_DWORD *)(a1 + 548) ) /*0xb17cb*/
  {
    v7 = *(_QWORD *)(a1 - 80); /*0xb17d8*/
    if ( v7 ) /*0xb17df*/
      LoadingCircle_fadeAndRemove(v7, a2, a3, a4); /*0xb17e1*/
    v8 = *(unsigned int *)(a1 - 92); /*0xb17e6*/
    v9 = a1 - 776; /*0xb17e9*/
    if ( (int)v8 >= 0 ) /*0xb17f2*/
    {
      *(_DWORD *)(v9 + 684) = -1; /*0xb17f4*/
      sub_C1780(v9, v8); /*0xb1806*/
      return; /*0xb1806*/
    }
    v10 = 0; /*0xb1815*/
    *(_DWORD *)(a1 + 572) = 0; /*0xb181c*/
    if ( a3 ) /*0xb1825*/
      cocos2d::CCObject::retain(a3); /*0xb182a*/
    v11 = *(cocos2d::CCObject **)(a1 + 624); /*0xb1830*/
    if ( v11 ) /*0xb183a*/
      cocos2d::CCObject::release(v11); /*0xb183c*/
    *(_QWORD *)(a1 + 624) = a3; /*0xb1842*/
    v12 = a4[31]; /*0xb1849*/
    if ( v12 > 0 ) /*0xb184f*/
      *(_DWORD *)(a1 - 96) = a4[30] / v12; /*0xb1858*/
    *(_DWORD *)(a1 + 672) = a4[10]; /*0xb185f*/
    *(_DWORD *)(a1 + 676) = a4[11]; /*0xb1869*/
    *(_DWORD *)(a1 + 680) = a4[12]; /*0xb1873*/
    if ( a3 ) /*0xb187c*/
      v13 = cocos2d::CCArray::count(a3); /*0xb1887*/
    else
      v13 = 0; /*0xb188b*/
    if ( *(_DWORD *)(a1 + 552) || (v14 = 1, *(_DWORD *)(a1 + 672) + *(_DWORD *)(a1 + 676) <= 0) ) /*0xb18a9*/
      v14 = 0; /*0xb18ab*/
    v15 = *(_DWORD *)(a1 - 96); /*0xb18ae*/
    v16 = 0; /*0xb18bb*/
    if ( !v15 ) /*0xb18c0*/
      v16 = v14; /*0xb18c0*/
    v17 = v13 + v16; /*0xb18c4*/
    if ( v15 > 0 ) /*0xb18c9*/
      v10 = v14; /*0xb18c9*/
    sub_C1A50(a1 - 776, (unsigned int)(v14 + *a4), (unsigned int)(a4[30] + v10), v17); /*0xb18d7*/
    if ( !v13 ) /*0xb18e8*/
    {
      if ( !v14 ) /*0xb18ed*/
      {
        if ( !*(_DWORD *)(a1 - 96) ) /*0xb1915*/
        {
          v18 = "Nothing reported of this type."; /*0xb1929*/
          if ( !*(_DWORD *)(a1 + 552) ) /*0xb191b*/
            v18 = "No reported content."; /*0xb1930*/
          goto LABEL_27; /*0xb1930*/
        }
LABEL_26:
        v18 = "Nothing on this page."; /*0xb18f5*/
LABEL_27:
        sub_C1980(a1 - 776, v18); /*0xb18fc*/
        return; /*0xb1910*/
      }
      if ( *(_DWORD *)(a1 - 96) ) /*0xb18ef*/
        goto LABEL_26; /*0xb18f3*/
    }
    sub_B2290(a1 - 776, a3); /*0xb1940*/
  }
}

// [10/27] Address: 0xb1960
// Method: AccountReviewPopup::adminReportedContentFailed
__int64 __fastcall AccountReviewPopup_adminReportedContentFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  v4 = a1 - 776; /*0xb1969*/
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 64) && !*(_DWORD *)(a1 + 548) ) /*0xb1972*/
  {
    v5 = *(_QWORD *)(a1 - 80); /*0xb197b*/
    if ( v5 ) /*0xb1982*/
      LoadingCircle_fadeAndRemove(v5, a2, a3, a4); /*0xb1984*/
    v6 = *(unsigned int *)(v4 + 684); /*0xb1989*/
    if ( (int)v6 < 0 ) /*0xb1994*/
    {
      return sub_C1980(v4, "Failed to load reports."); /*0xb19b6*/
    }
    else
    {
      *(_DWORD *)(v4 + 684) = -1; /*0xb1996*/
      return sub_C1780(v4, v6); /*0xb19a5*/
    }
  }
  return result; /*0xb19a0*/
}

// [11/27] Address: 0xb19d0
// Method: AccountReviewPopup::adminAbuseInfoFinished
void __fastcall AccountReviewPopup_adminAbuseInfoFinished(
        __int64 a1,
        __int64 a2,
        cocos2d::CCObject *a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  cocos2d::CCObject *v9; // rcx
  int v10; // ecx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  bool v13; // al
  bool v14; // zf
  const char *v15; // rax
  const char *v16; // rdx

  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 64) && *(_DWORD *)(a1 + 548) == 1 ) /*0xb19fe*/
  {
    v7 = *(_QWORD *)(a1 - 80); /*0xb1a04*/
    if ( v7 ) /*0xb1a0b*/
      LoadingCircle_fadeAndRemove(v7, a2, a3, a4); /*0xb1a0d*/
    v8 = *(unsigned int *)(a1 - 92); /*0xb1a12*/
    if ( (int)v8 < 0 ) /*0xb1a17*/
    {
      if ( a3 ) /*0xb1a39*/
        cocos2d::CCObject::retain(a3); /*0xb1a3e*/
      v9 = *(cocos2d::CCObject **)(a1 + 624); /*0xb1a44*/
      if ( v9 ) /*0xb1a4e*/
        cocos2d::CCObject::release(v9); /*0xb1a50*/
      *(_QWORD *)(a1 + 624) = a3; /*0xb1a56*/
      v10 = a4[100]; /*0xb1a5d*/
      if ( v10 > 0 ) /*0xb1a66*/
        *(_DWORD *)(a1 - 96) = (int)a4[99] / v10; /*0xb1a72*/
      if ( a3 ) /*0xb1a78*/
        v11 = cocos2d::CCArray::count(a3); /*0xb1a83*/
      else
        v11 = 0; /*0xb1a87*/
      sub_C1A50(a1 - 776, a4[98], a4[99], v11); /*0xb1aa1*/
      v12 = a1 - 776; /*0xb1aa8*/
      if ( v11 ) /*0xb1ab4*/
      {
        sub_B3AB0(v12, a3); /*0xb1b0a*/
      }
      else
      {
        v13 = *(_BYTE *)(v12 + 1320) && *(_QWORD *)(a1 + 248); /*0xb1ac9*/
        if ( *(_DWORD *)(a1 + 556) || (v14 = !v13, v15 = "Nothing new since the last review.", v14) ) /*0xb1ae1*/
          v15 = "The filter has not caught anything."; /*0xb1ae3*/
        v16 = "Nothing on this page."; /*0xb1aee*/
        if ( !*(_DWORD *)(a1 - 96) ) /*0xb1aea*/
          v16 = v15; /*0xb1afc*/
        sub_C1980(a1 - 776, v16); /*0xb1b00*/
      }
    }
    else
    {
      *(_DWORD *)(a1 - 92) = -1; /*0xb1a20*/
      sub_C1780(a1 - 776, v8); /*0xb1a27*/
    }
  }
}

// [12/27] Address: 0xb1b30
// Method: AccountReviewPopup::adminAbuseInfoFailed
__int64 __fastcall AccountReviewPopup_adminAbuseInfoFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  v4 = a1 - 776; /*0xb1b39*/
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 64) && *(_DWORD *)(a1 + 548) == 1 ) /*0xb1b49*/
  {
    v5 = *(_QWORD *)(a1 - 80); /*0xb1b4b*/
    if ( v5 ) /*0xb1b52*/
      LoadingCircle_fadeAndRemove(v5, a2, a3, a4); /*0xb1b54*/
    v6 = *(unsigned int *)(v4 + 684); /*0xb1b59*/
    if ( (int)v6 < 0 ) /*0xb1b64*/
    {
      return sub_C1980(v4, "Failed to load the filter log."); /*0xb1b86*/
    }
    else
    {
      *(_DWORD *)(v4 + 684) = -1; /*0xb1b66*/
      return sub_C1780(v4, v6); /*0xb1b75*/
    }
  }
  return result; /*0xb1b70*/
}

// [13/27] Address: 0xb1ba0
// Method: AccountReviewPopup::adminUserHistoryFinished
void __fastcall AccountReviewPopup_adminUserHistoryFinished(
        __int64 a1,
        __int64 a2,
        cocos2d::CCObject *a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // rdi
  unsigned int v7; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  cocos2d::CCObject *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  const char *v15; // rdx

  v6 = a1 - 776; /*0xb1bb5*/
  v7 = a4; /*0xb1bbc*/
  if ( (_DWORD)a2 == *(_DWORD *)(a1 - 776 + 840) && *(_DWORD *)(a1 + 548) == 2 ) /*0xb1bd8*/
  {
    v10 = *(_QWORD *)(a1 - 80); /*0xb1bde*/
    if ( v10 ) /*0xb1be5*/
      LoadingCircle_fadeAndRemove(v10, a2, a3, a4); /*0xb1be7*/
    v11 = *(unsigned int *)(v6 + 684); /*0xb1bec*/
    if ( (int)v11 >= 0 ) /*0xb1bf4*/
    {
      *(_DWORD *)(v6 + 684) = -1; /*0xb1bf9*/
      sub_C1780(v6, v11); /*0xb1c03*/
      return; /*0xb1c08*/
    }
    if ( a3 ) /*0xb1c10*/
      cocos2d::CCObject::retain(a3); /*0xb1c15*/
    v12 = *(cocos2d::CCObject **)(a1 + 624); /*0xb1c1b*/
    if ( v12 ) /*0xb1c25*/
      cocos2d::CCObject::release(v12); /*0xb1c27*/
    *(_QWORD *)(a1 + 624) = a3; /*0xb1c31*/
    if ( a6 > 0 ) /*0xb1c3a*/
      *(_DWORD *)(a1 - 96) = (int)a5 / a6; /*0xb1c43*/
    if ( a3 ) /*0xb1c49*/
    {
      v13 = cocos2d::CCArray::count(a3); /*0xb1c62*/
      sub_C1A50(v6, v7, a5, v13); /*0xb1c64*/
      v14 = v6; /*0xb1c69*/
      if ( (_DWORD)v13 ) /*0xb1c6e*/
      {
        sub_B53E0(v6, a3); /*0xb1c76*/
        return; /*0xb1c7b*/
      }
    }
    else
    {
      sub_C1A50(v6, v7, a5, 0); /*0xb1c8b*/
      v14 = v6; /*0xb1c90*/
    }
    v15 = "Nothing on this page."; /*0xb1ca1*/
    if ( !*(_DWORD *)(v14 + 680) ) /*0xb1c93*/
      v15 = "No moderator actions yet."; /*0xb1ca8*/
    sub_C1980(v6, v15); /*0xb1caf*/
  }
}

// [14/27] Address: 0xb1cd0
// Method: AccountReviewPopup::adminUserHistoryFailed
__int64 __fastcall AccountReviewPopup_adminUserHistoryFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  v4 = a1 - 776; /*0xb1cd9*/
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 64) && *(_DWORD *)(a1 + 548) == 2 ) /*0xb1ce9*/
  {
    v5 = *(_QWORD *)(a1 - 80); /*0xb1ceb*/
    if ( v5 ) /*0xb1cf2*/
      LoadingCircle_fadeAndRemove(v5, a2, a3, a4); /*0xb1cf4*/
    v6 = *(unsigned int *)(v4 + 684); /*0xb1cf9*/
    if ( (int)v6 < 0 ) /*0xb1d04*/
    {
      return sub_C1980(v4, "Failed to load history."); /*0xb1d26*/
    }
    else
    {
      *(_DWORD *)(v4 + 684) = -1; /*0xb1d06*/
      return sub_C1780(v4, v6); /*0xb1d15*/
    }
  }
  return result; /*0xb1d10*/
}

// [15/27] Address: 0xb8690
// Method: AccountReviewPopup::reviewChoicePicked
// Hidden C++ exception states: #wind=8
void __fastcall AccountReviewPopup_reviewChoicePicked(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  const char *v14; // rdx
  cocos2d::CCString *v15; // rax
  const char *CString; // rax
  __int64 v17; // rbx
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rcx
  const char *v22; // rdx
  cocos2d::CCString *v23; // rax
  const char *v24; // rax
  __int64 v25; // rbx
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rcx
  void *v30; // rcx
  int v31; // edx
  const char *v32; // r9
  const char *v33; // r8
  cocos2d::CCString *v34; // rax
  const char *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // esi
  __int128 *v40; // rdx
  cocos2d::CCObject *v41; // rbx
  int v42; // eax
  void *v43; // [rsp+50h] [rbp-59h]
  void *v44; // [rsp+58h] [rbp-51h]
  void *Block[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v46; // [rsp+70h] [rbp-39h]
  unsigned __int64 v47; // [rsp+78h] [rbp-31h]
  void *v48[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v49; // [rsp+90h] [rbp-19h]
  unsigned __int64 v50; // [rsp+98h] [rbp-11h]
  __int128 v51; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v52; // [rsp+B0h] [rbp+7h]
  unsigned __int64 v53; // [rsp+B8h] [rbp+Fh]

  if ( a2 == 2 ) /*0xb86c1*/
  {
    v7 = a1 - 824; /*0xb86c3*/
    v8 = a1 - 48; /*0xb86ca*/
    if ( a1 == 824 ) /*0xb86d3*/
      v8 = 0; /*0xb86d3*/
    v9 = *(_QWORD *)&qword_905FB0; /*0xb86d7*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xb86e1*/
    {
      v43 = operator new(0x690u); /*0xb86ed*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v43); /*0xb86fa*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xb870b*/
      v9 = *(_QWORD *)&qword_905FB0; /*0xb870e*/
    }
    *(_QWORD *)(v9 + 1384) = v8; /*0xb8715*/
    if ( (unsigned __int8)sub_2448C0(v9, *(unsigned int *)(a1 + 16), (unsigned int)a3, a4) ) /*0xb8725*/
      sub_C18E0(v7); /*0xb8735*/
    return; /*0xb873a*/
  }
  if ( a2 != 1 ) /*0xb8742*/
    return; /*0xb8742*/
  if ( a3 < 0 ) /*0xb874b*/
    return; /*0xb874b*/
  v10 = *(_QWORD *)(a1 + 536); /*0xb8751*/
  if ( a3 >= (int)((*(_QWORD *)(a1 + 544) - v10) >> 2) ) /*0xb8768*/
    return; /*0xb8768*/
  v11 = *(_DWORD *)(v10 + 4LL * a3) - 1; /*0xb8771*/
  if ( v11 ) /*0xb8774*/
  {
    v12 = v11 - 1; /*0xb877a*/
    if ( !v12 ) /*0xb877d*/
    {
      sub_B75D0(a1 - 824); /*0xb8a42*/
      return; /*0xb8a47*/
    }
    v13 = v12 - 1; /*0xb8783*/
    if ( v13 ) /*0xb8786*/
    {
      if ( v13 == 1 ) /*0xb878f*/
      {
        v14 = (const char *)(a1 + 24); /*0xb8795*/
        if ( *(_QWORD *)(a1 + 48) > 0xFu ) /*0xb879e*/
          v14 = *(const char **)v14; /*0xb87a0*/
        v15 = cocos2d::CCString::createWithFormat( /*0xb87aa*/
                "Delete <cr>all</c> profile posts from <cg>%s</c>?\nLevel comments stay. Cannot be undone.",
                v14);
        CString = cocos2d::CCString::getCString(v15); /*0xb87b3*/
        *(_OWORD *)v48 = 0; /*0xb87bc*/
        v49 = 0; /*0xb87c2*/
        v50 = 0; /*0xb87c6*/
        v17 = -1; /*0xb87ca*/
        do /*0xb87d4*/
          ++v17; /*0xb87d1*/
        while ( CString[v17] ); /*0xb87d4*/
        sub_3C230(v48); /*0xb87e4*/
        *(_OWORD *)Block = 0; /*0xb87ed*/
        v46 = 0; /*0xb87f1*/
        v47 = 15; /*0xb87f5*/
        LOBYTE(Block[0]) = 0; /*0xb87fd*/
        v18 = a1 - 8; /*0xb8808*/
        if ( a1 == 824 ) /*0xb880f*/
          v18 = 0; /*0xb880f*/
        v19 = sub_BD0D0(&v51); /*0xb8817*/
        v20 = sub_A4080(v18, 2, (unsigned int)&qword_71B120, (unsigned int)v48, (__int64)"Delete", v19, (__int64)Block); /*0xb884a*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 1064LL))(v20); /*0xb885c*/
        sub_685C0(&v51); /*0xb8863*/
        if ( v47 > 0xF ) /*0xb8871*/
        {
          v21 = Block[0]; /*0xb8876*/
          if ( v47 + 1 >= 0x1000 ) /*0xb8884*/
          {
            v21 = (void *)*((_QWORD *)Block[0] - 1); /*0xb888a*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0xb8899*/
              invoke_watson(0, 0, 0, 0, 0); /*0xb88aa*/
          }
          j_j_free(v21); /*0xb88b1*/
        }
        sub_3C310(v48); /*0xb88bb*/
      }
      return; /*0xb88c0*/
    }
    v22 = (const char *)(a1 + 24); /*0xb88c5*/
    if ( *(_QWORD *)(a1 + 48) > 0xFu ) /*0xb88ce*/
      v22 = *(const char **)v22; /*0xb88d0*/
    v23 = cocos2d::CCString::createWithFormat( /*0xb88da*/
            "Delete <cr>all</c> level, list and SFX comments from <cg>%s</c>?\nProfile posts stay. Cannot be undone.",
            v22);
    v24 = cocos2d::CCString::getCString(v23); /*0xb88e3*/
    *(_OWORD *)v48 = 0; /*0xb88ec*/
    v49 = 0; /*0xb88f2*/
    v50 = 0; /*0xb88f6*/
    v25 = -1; /*0xb88fa*/
    do /*0xb8904*/
      ++v25; /*0xb8901*/
    while ( v24[v25] ); /*0xb8904*/
    sub_3C230(v48); /*0xb8914*/
    *(_OWORD *)Block = 0; /*0xb891d*/
    v46 = 0; /*0xb8921*/
    v47 = 15; /*0xb8925*/
    LOBYTE(Block[0]) = 0; /*0xb892d*/
    v26 = a1 - 8; /*0xb8938*/
    if ( a1 == 824 ) /*0xb893f*/
      v26 = 0; /*0xb893f*/
    v27 = sub_BD0D0(&v51); /*0xb8947*/
    v28 = sub_A4080(v26, 1, (unsigned int)&qword_71B140, (unsigned int)v48, (__int64)"Delete", v27, (__int64)Block); /*0xb897a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 1064LL))(v28); /*0xb898c*/
    sub_685C0(&v51); /*0xb8993*/
    if ( v47 > 0xF ) /*0xb89a1*/
    {
      v29 = Block[0]; /*0xb89a6*/
      if ( v47 + 1 >= 0x1000 ) /*0xb89b4*/
      {
        v29 = (void *)*((_QWORD *)Block[0] - 1); /*0xb89ba*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v29 - 8) > 0x1F ) /*0xb89c9*/
          invoke_watson(0, 0, 0, 0, 0); /*0xb89da*/
      }
      j_j_free(v29); /*0xb89e1*/
    }
    if ( v50 > 0xF ) /*0xb89ef*/
    {
      v30 = v48[0]; /*0xb89f8*/
      if ( v50 + 1 >= 0x1000 ) /*0xb8a06*/
      {
        v30 = (void *)*((_QWORD *)v48[0] - 1); /*0xb8a10*/
        if ( (unsigned __int64)((char *)v48[0] - (char *)v30 - 8) > 0x1F ) /*0xb8a1f*/
          invoke_watson(0, 0, 0, 0, 0); /*0xb8a34*/
      }
LABEL_63:
      j_j_free(v30); /*0xb8c1c*/
    }
  }
  else
  {
    v31 = *(_DWORD *)(a1 + 616); /*0xb8a4c*/
    v32 = (const char *)(a1 + 24); /*0xb8a52*/
    if ( *(_QWORD *)(a1 + 48) > 0xFu ) /*0xb8a5b*/
      v32 = *(const char **)v32; /*0xb8a5d*/
    v33 = (const char *)&unk_70802C; /*0xb8a67*/
    if ( v31 == 1 ) /*0xb8a71*/
      v33 = &byte_6E86E0; /*0xb8a71*/
    v34 = cocos2d::CCString::createWithFormat( /*0xb8a7c*/
            "Dismiss the reports on <cy>%i</c> selected item%s by <cg>%s</c>?\n"
            "The reports are removed, the content stays. Cannot be undone.",
            v31,
            v33,
            v32);
    v35 = cocos2d::CCString::getCString(v34); /*0xb8a85*/
    v51 = 0; /*0xb8a8e*/
    v52 = 0; /*0xb8a94*/
    v53 = 0; /*0xb8a98*/
    v36 = -1; /*0xb8a9c*/
    v37 = -1; /*0xb8aa3*/
    do /*0xb8aa9*/
      ++v37; /*0xb8aa6*/
    while ( v35[v37] ); /*0xb8aa9*/
    sub_3C230(&v51); /*0xb8ab6*/
    v38 = a1 - 824; /*0xb8abc*/
    v39 = a1 - 24; /*0xb8ac3*/
    if ( !v38 ) /*0xb8aca*/
      v39 = 0; /*0xb8aca*/
    v40 = &v51; /*0xb8ace*/
    if ( v53 > 0xF ) /*0xb8ad7*/
      v40 = (__int128 *)v51; /*0xb8ad7*/
    *(_OWORD *)Block = 0; /*0xb8adf*/
    v46 = 0; /*0xb8ae3*/
    v47 = 0; /*0xb8ae7*/
    do /*0xb8af3*/
      ++v36; /*0xb8af0*/
    while ( *((_BYTE *)v40 + v36) ); /*0xb8af3*/
    sub_3C230(Block); /*0xb8b00*/
    v44 = operator new(0x298u); /*0xb8b17*/
    v41 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer(v44); /*0xb8b23*/
    if ( v41 ) /*0xb8b29*/
    {
      v42 = sub_3E4F0(v48, Block); /*0xb8b37*/
      if ( (unsigned __int8)GJRateLevelLayer_init( /*0xb8b8e*/
                              (_DWORD)v41,
                              v39,
                              (unsigned int)"Dismiss Reports",
                              v42,
                              (__int64)"Cancel",
                              (__int64)"Dismiss",
                              1136525312,
                              0,
                              0,
                              1065353216) )
      {
        cocos2d::CCObject::autorelease(v41); /*0xb8b9a*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v41 + 8LL))(v41, 1); /*0xb8baa*/
        v41 = 0; /*0xb8bad*/
      }
    }
    sub_3C310(Block); /*0xb8bb4*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v41 + 64LL))(v41, 5); /*0xb8bc4*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v41 + 1064LL))(v41); /*0xb8bcd*/
    if ( v53 > 0xF ) /*0xb8bdc*/
    {
      v30 = (void *)v51; /*0xb8be1*/
      if ( v53 + 1 >= 0x1000 ) /*0xb8bef*/
      {
        v30 = *(void **)(v51 - 8); /*0xb8bf5*/
        if ( (unsigned __int64)(v51 - (_QWORD)v30 - 8) > 0x1F ) /*0xb8c04*/
          invoke_watson(0, 0, 0, 0, 0); /*0xb8c15*/
      }
      goto LABEL_63; /*0xb8c04*/
    }
  }
}

// [16/27] Address: 0xb8c40
// Method: AccountReviewPopup::adminClearReportsFinished
// Hidden C++ exception states: #wind=4
void __fastcall AccountReviewPopup_adminClearReportsFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  const char *v8; // r9
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  void **v13; // xmm0_8
  __m128i v14; // xmm1
  void **v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rcx
  void *v19; // [rsp+30h] [rbp-68h]
  void *Block[2]; // [rsp+38h] [rbp-60h] BYREF
  __m128i v21; // [rsp+48h] [rbp-50h]
  void *v22[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v23; // [rsp+68h] [rbp-30h]
  unsigned __int64 v24; // [rsp+70h] [rbp-28h]

  v4 = a3; /*0xb8c5e*/
  v5 = a1; /*0xb8c61*/
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 64) ) /*0xb8c69*/
  {
    v6 = a1 - 776; /*0xb8c6f*/
    v7 = *(_QWORD *)(a1 - 776 + 696); /*0xb8c76*/
    if ( v7 ) /*0xb8c80*/
      LoadingCircle_fadeAndRemove(v7, a2, a3, a4); /*0xb8c82*/
    if ( v4 > 0 ) /*0xb8c89*/
      *(_BYTE *)(v5 + 560) = 1; /*0xb8c8b*/
    v8 = (const char *)&unk_70802C; /*0xb8c99*/
    if ( v4 == 1 ) /*0xb8ca3*/
      v8 = &byte_6E86E0; /*0xb8ca3*/
    v9 = cocos2d::CCString::createWithFormat("%i %s%s", v4, "item", v8); /*0xb8cb7*/
    CString = cocos2d::CCString::getCString(v9); /*0xb8cc0*/
    *(_OWORD *)v22 = 0; /*0xb8cc9*/
    v23 = 0; /*0xb8cce*/
    v24 = 0; /*0xb8cd3*/
    v11 = -1; /*0xb8cd8*/
    do /*0xb8ce3*/
      ++v11; /*0xb8ce0*/
    while ( CString[v11] ); /*0xb8ce3*/
    sub_3C230(v22); /*0xb8cf1*/
    v12 = sub_58C00(v22, 0, "Dismissed ", 10); /*0xb8d0b*/
    *(_OWORD *)Block = *(_OWORD *)v12; /*0xb8d13*/
    v13 = (void **)Block[0]; /*0xb8d10*/
    v21 = *(__m128i *)(v12 + 16); /*0xb8d1c*/
    v14 = v21; /*0xb8d18*/
    *(_QWORD *)(v12 + 16) = 0; /*0xb8d21*/
    *(_QWORD *)(v12 + 24) = 15; /*0xb8d25*/
    *(_BYTE *)v12 = 0; /*0xb8d2d*/
    v15 = Block; /*0xb8d30*/
    if ( _mm_srli_si128(v14, 8).m128i_u64[0] > 0xF ) /*0xb8d48*/
      v15 = v13; /*0xb8d48*/
    sub_AA670(v15); /*0xb8d54*/
    if ( v21.m128i_i64[1] > 0xFuLL ) /*0xb8d63*/
    {
      v16 = Block[0]; /*0xb8d68*/
      if ( (unsigned __int64)(v21.m128i_i64[1] + 1) >= 0x1000 ) /*0xb8d77*/
      {
        v16 = (void *)*((_QWORD *)Block[0] - 1); /*0xb8d7d*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0xb8d8c*/
          invoke_watson(0, 0, 0, 0, 0); /*0xb8d9d*/
      }
      j_j_free(v16); /*0xb8da4*/
    }
    if ( v24 > 0xF ) /*0xb8db3*/
    {
      v17 = v22[0]; /*0xb8db8*/
      if ( v24 + 1 >= 0x1000 ) /*0xb8dc7*/
      {
        v17 = (void *)*((_QWORD *)v22[0] - 1); /*0xb8dcd*/
        if ( (unsigned __int64)((char *)v22[0] - (char *)v17 - 8) > 0x1F ) /*0xb8ddc*/
          invoke_watson(0, 0, 0, 0, 0); /*0xb8ded*/
      }
      j_j_free(v17); /*0xb8df4*/
    }
    v23 = 0; /*0xb8df9*/
    v24 = 15; /*0xb8dfe*/
    LOBYTE(v22[0]) = 0; /*0xb8e07*/
    if ( !*(_DWORD *)(v5 + 548) ) /*0xb8e0c*/
      sub_C1780(v6, 0); /*0xb8e1a*/
    if ( !v6 ) /*0xb8e22*/
      v5 = 0; /*0xb8e22*/
    v18 = *(_QWORD *)&qword_905FB0; /*0xb8e26*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xb8e30*/
    {
      v19 = operator new(0x690u); /*0xb8e3c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0xb8e4a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xb8e5b*/
      v18 = *(_QWORD *)&qword_905FB0; /*0xb8e5e*/
    }
    *(_QWORD *)(v18 + 1384) = v5; /*0xb8e65*/
    GameLevelManager_deleteServerLevelList(v18, *(_DWORD *)(v6 + 840)); /*0xb8e72*/
  }
}

// [17/27] Address: 0xb8ea0
// Method: AccountReviewPopup::adminClearReportsFailed
// Hidden C++ exception states: #wind=1
void __fastcall AccountReviewPopup_adminClearReportsFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  char v10[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp-10h]

  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 64) ) /*0xb8ead*/
  {
    v4 = *(_QWORD *)(a1 - 80); /*0xb8eb3*/
    if ( v4 ) /*0xb8eba*/
      LoadingCircle_fadeAndRemove(v4, a2, a3, a4); /*0xb8ebc*/
    v5 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v4) + 272); /*0xb8ec7*/
    v13 = 0; /*0xb8ede*/
    v14 = 0; /*0xb8ee3*/
    v15 = 15; /*0xb8eec*/
    LOBYTE(v13) = 0; /*0xb8ef5*/
    v10[15] = 0; /*0xb8efa*/
    v11 = 14; /*0xb8f01*/
    v12 = 15; /*0xb8f0a*/
    strcpy(v10, "Dismiss failed"); /*0xb8f1b*/
    v6 = *v5; /*0xb8f37*/
    v9 = sub_3A4CA0(v10, v7, v8, 150, &v13); /*0xb8f5f*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v6 + 456))(v5, v9, 1000); /*0xb8f70*/
  }
}

// [18/27] Address: 0xb9270
// Method: AccountReviewPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=10
void __fastcall AccountReviewPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 *v7; // rcx
  __int64 v8; // rax
  signed int v9; // ebx
  struct cocos2d::CCObject *v10; // rbx
  cocos2d::CCString *v11; // rax
  char *CString; // rax
  size_t v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _QWORD *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // ebx
  _QWORD *v29; // rax
  __int64 v30; // rdi
  char v31; // bl
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  const char *v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  int v39; // esi
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  const char *v49; // r9
  const char *v50; // r8
  cocos2d::CCString *v51; // rax
  const char *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  __int128 *v55; // xmm0_8
  __m128i v56; // xmm1
  __int128 *v57; // rcx
  __int64 *v58; // [rsp+30h] [rbp-59h] BYREF
  __int64 v59; // [rsp+38h] [rbp-51h]
  int v60[4]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v61; // [rsp+50h] [rbp-39h] BYREF
  __int64 v62; // [rsp+60h] [rbp-29h]
  __int64 v63; // [rsp+68h] [rbp-21h]
  __int128 Src; // [rsp+70h] [rbp-19h] BYREF
  __int64 v65; // [rsp+80h] [rbp-9h]
  __int64 v66; // [rsp+88h] [rbp-1h]
  __int128 v67; // [rsp+90h] [rbp+7h] BYREF
  __m128i v68; // [rsp+A0h] [rbp+17h]

  if ( a3 ) /*0xb9273*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 5 ) /*0xb92b4*/
    {
      v6 = a1 - 800; /*0xb92ba*/
      if ( *(_QWORD *)(v6 + 1400) && *(_QWORD *)(v6 + 1440) && !*(_DWORD *)(v6 + 1324) ) /*0xb92db*/
      {
        Src = 0; /*0xb92eb*/
        v65 = 0; /*0xb92ef*/
        v66 = 15; /*0xb92f3*/
        LOBYTE(Src) = 0; /*0xb92fb*/
        v7 = *(__int64 **)(v6 + 1432); /*0xb92ff*/
        v8 = *v7; /*0xb9306*/
        *(_QWORD *)v60 = v8; /*0xb9309*/
        if ( (__int64 *)v8 != v7 ) /*0xb9310*/
        {
          do /*0xb93ba*/
          {
            v9 = *(_DWORD *)(v8 + 28); /*0xb9320*/
            if ( v9 >= 0 && v9 < (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(v6 + 1400)) ) /*0xb9336*/
            {
              v10 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v6 + 1400), v9); /*0xb9347*/
              if ( v65 ) /*0xb934f*/
                sub_43D80(&Src, &unk_709CE8, 1u); /*0xb9362*/
              v11 = cocos2d::CCString::createWithFormat( /*0xb9379*/
                      "%i:%i:%i",
                      *((_DWORD *)v10 + 14),
                      *((_DWORD *)v10 + 15),
                      *((_DWORD *)v10 + 16));
              CString = (char *)cocos2d::CCString::getCString(v11); /*0xb9382*/
              v13 = -1; /*0xb9388*/
              do /*0xb9393*/
                ++v13; /*0xb9390*/
              while ( CString[v13] ); /*0xb9393*/
              sub_43D80(&Src, CString, v13); /*0xb93a1*/
            }
            sub_BB770(v60, v5); /*0xb93aa*/
            v8 = *(_QWORD *)v60; /*0xb93af*/
          }
          while ( *(_QWORD *)v60 != *(_QWORD *)(v6 + 1432) ); /*0xb93ba*/
          if ( v65 ) /*0xb93c5*/
          {
            v14 = *(_QWORD *)&qword_905FB0; /*0xb93ce*/
            if ( !*(_QWORD *)&qword_905FB0 ) /*0xb93d8*/
            {
              *(_QWORD *)&v67 = operator new(0x690u); /*0xb93e4*/
              *(_QWORD *)&qword_905FB0 = sub_214250(v67); /*0xb93f1*/
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xb9402*/
              v14 = *(_QWORD *)&qword_905FB0; /*0xb9404*/
            }
            *(_QWORD *)(v14 + 1384) = v6 + 776; /*0xb940b*/
            if ( (unsigned __int8)sub_2410B0(v14, *(unsigned int *)(v6 + 840), &Src) ) /*0xb941c*/
              sub_C18E0(v6); /*0xb9428*/
          }
        }
        sub_3C310(&Src); /*0xb9432*/
      }
    }
    else
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 6 ) /*0xb9448*/
      {
        v15 = *(_DWORD *)(a1 + 540); /*0xb944e*/
        *(_DWORD *)(a1 + 540) = -1; /*0xb9454*/
        v58 = 0; /*0xb945e*/
        v59 = 0; /*0xb9462*/
        *(_QWORD *)&v61 = &v58; /*0xb946a*/
        *((_QWORD *)&v61 + 1) = &v58; /*0xb9472*/
        v16 = operator new(0x20u); /*0xb947b*/
        *v16 = v16; /*0xb9480*/
        v16[1] = v16; /*0xb9483*/
        v16[2] = v16; /*0xb9487*/
        *((_WORD *)v16 + 12) = 257; /*0xb948b*/
        v58 = v16; /*0xb9491*/
        sub_BBA10(&v58, a1 + 632); /*0xb94a0*/
        v17 = a1 - 800; /*0xb94a6*/
        sub_BA6B0(v17, v15); /*0xb94b2*/
        sub_B6410(v17); /*0xb94ba*/
        v19 = *v58; /*0xb94c3*/
        *(_QWORD *)&v67 = v19; /*0xb94c6*/
        if ( (__int64 *)v19 != v58 ) /*0xb94cd*/
        {
          do /*0xb953f*/
          {
            v20 = *(int *)(v19 + 28); /*0xb94d0*/
            v60[0] = v20; /*0xb94d4*/
            if ( (int)v20 >= 0 ) /*0xb94d9*/
            {
              v18 = *(_QWORD *)(v17 + 1408); /*0xb94db*/
              if ( (int)v20 < (int)((*(_QWORD *)(v17 + 1416) - v18) >> 3) ) /*0xb94f2*/
              {
                if ( *(_QWORD *)(v18 + 8 * v20) ) /*0xb94f4*/
                {
                  sub_BB1F0(v17 + 1432, &v61, v60); /*0xb950a*/
                  v21 = *(_QWORD *)(*(_QWORD *)(v17 + 1408) + 8LL * v60[0]); /*0xb951a*/
                  if ( *(_BYTE *)(v21 + 392) != 1 ) /*0xb9525*/
                  {
                    LOBYTE(v18) = 1; /*0xb9527*/
                    CCMenuItemToggler_toggle(v21, v18); /*0xb9529*/
                  }
                }
              }
            }
            sub_BB770(&v67, v18); /*0xb9532*/
            v19 = v67; /*0xb9537*/
          }
          while ( (__int64 *)v67 != v58 ); /*0xb953f*/
        }
        sub_B6550(v17); /*0xb9544*/
        v23 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v22) + 272); /*0xb954f*/
        *(_QWORD *)&v67 = &v61; /*0xb955a*/
        v61 = 0; /*0xb9561*/
        v62 = 0; /*0xb9565*/
        v63 = 15; /*0xb9569*/
        LOBYTE(v61) = 0; /*0xb9571*/
        Src = 0; /*0xb9575*/
        v65 = 0; /*0xb9579*/
        v66 = 0; /*0xb957d*/
        *(_QWORD *)&Src = sub_3C460(32); /*0xb958b*/
        v65 = 17; /*0xb958f*/
        v66 = 31; /*0xb9597*/
        strcpy((char *)Src, "Deleted 1 comment"); /*0xb95a6*/
        v24 = *v23; /*0xb95b7*/
        v27 = sub_3A4CA0(&Src, v25, v26, 150, &v61); /*0xb95dd*/
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(v24 + 456))(v23, v27, 1000); /*0xb95ee*/
      }
      else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0xb9606*/
      {
        v28 = *(_DWORD *)(a1 + 540); /*0xb960c*/
        *(_DWORD *)(a1 + 540) = -1; /*0xb9612*/
        v58 = 0; /*0xb961c*/
        v59 = 0; /*0xb9620*/
        *(_QWORD *)&v61 = &v58; /*0xb9628*/
        *((_QWORD *)&v61 + 1) = &v58; /*0xb9630*/
        v29 = operator new(0x20u); /*0xb9639*/
        *v29 = v29; /*0xb963e*/
        v29[1] = v29; /*0xb9641*/
        v29[2] = v29; /*0xb9645*/
        *((_WORD *)v29 + 12) = 257; /*0xb9649*/
        v58 = v29; /*0xb964f*/
        sub_BBA10(&v58, a1 + 632); /*0xb965e*/
        v30 = a1 - 800; /*0xb9664*/
        v31 = sub_B99E0(v30, v28); /*0xb9675*/
        sub_B6410(v30); /*0xb967b*/
        v32 = *v58; /*0xb9684*/
        *(_QWORD *)&v67 = v32; /*0xb9687*/
        if ( (__int64 *)v32 != v58 ) /*0xb968e*/
        {
          do /*0xb96ff*/
          {
            v33 = *(int *)(v32 + 28); /*0xb9690*/
            v60[0] = v33; /*0xb9694*/
            if ( (int)v33 >= 0 ) /*0xb9699*/
            {
              v34 = *(_QWORD *)(v30 + 1408); /*0xb969b*/
              if ( (int)v33 < (int)((*(_QWORD *)(v30 + 1416) - v34) >> 3) ) /*0xb96b2*/
              {
                if ( *(_QWORD *)(v34 + 8 * v33) ) /*0xb96b4*/
                {
                  sub_BB1F0(v30 + 1432, &v61, v60); /*0xb96ca*/
                  v35 = *(_QWORD *)(*(_QWORD *)(v30 + 1408) + 8LL * v60[0]); /*0xb96da*/
                  if ( *(_BYTE *)(v35 + 392) != 1 ) /*0xb96e5*/
                  {
                    LOBYTE(v33) = 1; /*0xb96e7*/
                    CCMenuItemToggler_toggle(v35, v33); /*0xb96e9*/
                  }
                }
              }
            }
            sub_BB770(&v67, v33); /*0xb96f2*/
            v32 = v67; /*0xb96f7*/
          }
          while ( (__int64 *)v67 != v58 ); /*0xb96ff*/
        }
        sub_B6550(v30); /*0xb9704*/
        v36 = "Still deleting"; /*0xb9710*/
        if ( v31 ) /*0xb9719*/
          v36 = "Deleted 1 item"; /*0xb9719*/
        sub_AA670(v36); /*0xb9725*/
      }
      else
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 4 ) /*0xb973c*/
          return; /*0xb973c*/
        v58 = 0; /*0xb9742*/
        v59 = 0; /*0xb9746*/
        *(_QWORD *)&v67 = &v58; /*0xb974e*/
        *((_QWORD *)&v67 + 1) = &v58; /*0xb9756*/
        v37 = operator new(0x20u); /*0xb975f*/
        *v37 = v37; /*0xb9764*/
        v37[1] = v37; /*0xb9767*/
        v37[2] = v37; /*0xb976b*/
        *((_WORD *)v37 + 12) = 257; /*0xb976f*/
        v58 = v37; /*0xb9775*/
        sub_BBA10(&v58, a1 + 632); /*0xb9784*/
        v61 = 0u; /*0xb978a*/
        v38 = operator new(0x20u); /*0xb9797*/
        *v38 = v38; /*0xb979c*/
        v38[1] = v38; /*0xb979f*/
        v38[2] = v38; /*0xb97a3*/
        *((_WORD *)v38 + 12) = 257; /*0xb97a7*/
        *(_QWORD *)&v61 = v38; /*0xb97ad*/
        v39 = 0; /*0xb97b1*/
        v40 = *v58; /*0xb97b8*/
        *(_QWORD *)&v67 = v40; /*0xb97bb*/
        if ( (__int64 *)v40 != v58 ) /*0xb97c2*/
        {
          do /*0xb980d*/
          {
            v41 = *(unsigned int *)(v40 + 28); /*0xb97c4*/
            v42 = a1 - 800; /*0xb97c7*/
            if ( *(_DWORD *)(a1 + 524) == 1 ) /*0xb97d5*/
              v43 = sub_BA6B0(v42, v41); /*0xb97d7*/
            else
              v43 = sub_B99E0(v42, v41); /*0xb97de*/
            if ( v43 ) /*0xb97e5*/
              ++v39; /*0xb97e7*/
            else
              sub_BB1F0(&v61, v60, v40 + 28); /*0xb97f7*/
            sub_BB770(&v67, v44); /*0xb9800*/
            v40 = v67; /*0xb9805*/
          }
          while ( (__int64 *)v67 != v58 ); /*0xb980d*/
        }
        sub_B6410(a1 - 800); /*0xb9816*/
        v46 = *(_QWORD *)v61; /*0xb981f*/
        *(_QWORD *)&v67 = v46; /*0xb9822*/
        if ( v46 != (_QWORD)v61 ) /*0xb9829*/
        {
          do /*0xb989f*/
          {
            v47 = *(int *)(v46 + 28); /*0xb9830*/
            v60[0] = v47; /*0xb9834*/
            if ( (int)v47 >= 0 ) /*0xb9839*/
            {
              v45 = *(_QWORD *)(a1 + 608); /*0xb983b*/
              if ( (int)v47 < (int)((*(_QWORD *)(a1 + 616) - v45) >> 3) ) /*0xb9852*/
              {
                if ( *(_QWORD *)(v45 + 8 * v47) ) /*0xb9854*/
                {
                  sub_BB1F0(a1 + 632, &Src, v60); /*0xb986a*/
                  v48 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8LL * v60[0]); /*0xb987a*/
                  if ( *(_BYTE *)(v48 + 392) != 1 ) /*0xb9885*/
                  {
                    LOBYTE(v45) = 1; /*0xb9887*/
                    CCMenuItemToggler_toggle(v48, v45); /*0xb9889*/
                  }
                }
              }
            }
            sub_BB770(&v67, v45); /*0xb9892*/
            v46 = v67; /*0xb9897*/
          }
          while ( (_QWORD)v67 != (_QWORD)v61 ); /*0xb989f*/
        }
        sub_B6550(a1 - 800); /*0xb98a8*/
        v49 = (const char *)&unk_70802C; /*0xb98b4*/
        if ( v39 == 1 ) /*0xb98be*/
          v49 = &byte_6E86E0; /*0xb98be*/
        v50 = "item"; /*0xb98c9*/
        if ( *(_DWORD *)(a1 + 524) == 1 ) /*0xb98d7*/
          v50 = "comment"; /*0xb98d7*/
        v51 = cocos2d::CCString::createWithFormat("%i %s%s", v39, v50, v49); /*0xb98e4*/
        v52 = cocos2d::CCString::getCString(v51); /*0xb98ed*/
        Src = 0; /*0xb98f6*/
        v65 = 0; /*0xb98fa*/
        v66 = 0; /*0xb98fe*/
        v53 = -1; /*0xb9902*/
        do /*0xb9913*/
          ++v53; /*0xb9910*/
        while ( v52[v53] ); /*0xb9913*/
        sub_3C230(&Src); /*0xb9923*/
        v54 = sub_58C00(&Src, 0, "Deleted ", 8); /*0xb993c*/
        v67 = *(_OWORD *)v54; /*0xb9944*/
        v55 = (__int128 *)v67; /*0xb9941*/
        v68 = *(__m128i *)(v54 + 16); /*0xb994c*/
        v56 = v68; /*0xb9948*/
        *(_QWORD *)(v54 + 16) = 0; /*0xb9950*/
        *(_QWORD *)(v54 + 24) = 15; /*0xb9954*/
        *(_BYTE *)v54 = 0; /*0xb995c*/
        v57 = &v67; /*0xb995f*/
        if ( _mm_srli_si128(v56, 8).m128i_u64[0] > 0xF ) /*0xb9976*/
          v57 = v55; /*0xb9976*/
        sub_AA670(v57); /*0xb9982*/
        sub_3C310(&v67); /*0xb998c*/
        sub_3C310(&Src); /*0xb9996*/
        sub_BB6F0(&v61, &v61); /*0xb99a4*/
      }
      sub_BB6F0(&v58, &v58); /*0xb99b2*/
    }
  }
}

// [19/27] Address: 0xb9cf0
// Method: AccountReviewPopup::threadUpdateFinished
__int64 __fastcall AccountReviewPopup_threadUpdateFinished(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 == 103 ) /*0xb9cf4*/
    return sub_B9C70(a1 - 832); /*0xb9cfd*/
  return result; /*0xb9d02*/
}

// [20/27] Address: 0xb9d10
// Method: AccountReviewPopup::threadUpdateFailed
__int64 __fastcall AccountReviewPopup_threadUpdateFailed(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 == 103 ) /*0xb9d14*/
  {
    sub_B9C70(a1 - 832); /*0xb9d25*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 48) + 16LL))(a1 - 48, 0, 0); /*0xb9d37*/
  }
  return result; /*0xb9d3f*/
}

// [21/27] Address: 0xb9d40
// Method: AccountReviewPopup::commentDeleteFailed
__int64 __fastcall AccountReviewPopup_commentDeleteFailed(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 560) ) /*0xb9d40*/
  {
    *(_BYTE *)(a1 + 560) = 1; /*0xb9d49*/
    return cocos2d::CCNode::scheduleOnce(a1 - 784, sub_B9D70); /*0xb9d61*/
  }
  return result; /*0xb9d68*/
}

// [22/27] Address: 0xba800
// Method: AccountReviewPopup::adminActionConfirmed
// Hidden C++ exception states: #wind=3
void __fastcall AccountReviewPopup_adminActionConfirmed(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  const char *v5; // rdi
  BOOL v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // r12d
  cocos2d::CCString *v11; // rax
  const char *CString; // r13
  cocos2d::CCString *v13; // rax
  const char *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  char Particle; // si
  void *v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  void *v23; // [rsp+50h] [rbp-68h]
  void *Block[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v25; // [rsp+68h] [rbp-50h]
  unsigned __int64 v26; // [rsp+70h] [rbp-48h]

  v5 = "Deleting posts..."; /*0xba83a*/
  if ( a2 != 2 ) /*0xba844*/
    v5 = "Deleting comments..."; /*0xba844*/
  v6 = a2 == 2; /*0xba84e*/
  v7 = a1 - 816; /*0xba852*/
  if ( a1 == 816 ) /*0xba85c*/
    v8 = 0; /*0xba864*/
  else
    v8 = a1 - 40; /*0xba85e*/
  v9 = *(_QWORD *)&qword_905FB0; /*0xba866*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xba870*/
  {
    v23 = operator new(0x690u); /*0xba87c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v23); /*0xba88a*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xba89b*/
    v9 = *(_QWORD *)&qword_905FB0; /*0xba89d*/
  }
  *(_QWORD *)(v9 + 1384) = v8; /*0xba8a4*/
  v10 = *(_DWORD *)(a1 + 24); /*0xba8ab*/
  v11 = cocos2d::CCString::createWithFormat("adminDelete_%i_%i", v10, v6); /*0xba8bc*/
  CString = cocos2d::CCString::getCString(v11); /*0xba8cb*/
  v13 = cocos2d::CCString::createWithFormat("&scope=%i", v6); /*0xba8d8*/
  v14 = cocos2d::CCString::getCString(v13); /*0xba8e1*/
  *(_OWORD *)Block = 0; /*0xba8ea*/
  v25 = 0; /*0xba8f2*/
  v26 = 0; /*0xba8f7*/
  v15 = -1; /*0xba8fc*/
  v16 = -1; /*0xba903*/
  do /*0xba909*/
    ++v16; /*0xba906*/
  while ( v14[v16] ); /*0xba909*/
  sub_3C230(Block); /*0xba917*/
  Particle = GJBaseGameLayer_createParticle( /*0xba958*/
               v9,
               (__int64)CString,
               (__int64)"https://www.boomlings.com/database/adminDeleteUserComments.php",
               79,
               v10,
               (size_t *)Block,
               a4,
               a3);
  if ( v26 > 0xF ) /*0xba964*/
  {
    v18 = Block[0]; /*0xba969*/
    if ( v26 + 1 >= 0x1000 ) /*0xba978*/
    {
      v18 = (void *)*((_QWORD *)Block[0] - 1); /*0xba97e*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F ) /*0xba98d*/
        invoke_watson(0, 0, 0, 0, 0); /*0xba99e*/
    }
    j_j_free(v18); /*0xba9a8*/
  }
  if ( Particle ) /*0xba9b0*/
  {
    v19 = a1 - 24; /*0xba9b5*/
    if ( !v7 ) /*0xba9b9*/
      v19 = 0; /*0xba9bb*/
    *(_OWORD *)Block = 0; /*0xba9c1*/
    v25 = 0; /*0xba9c6*/
    v26 = 0; /*0xba9cb*/
    do /*0xba9d3*/
      ++v15; /*0xba9d0*/
    while ( v5[v15] ); /*0xba9d3*/
    sub_3C230(Block); /*0xba9e4*/
    v20 = sub_39D2A0(v19, Block); /*0xba9f1*/
    *(_QWORD *)(a1 + 568) = v20; /*0xba9f6*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 1064LL))(v20); /*0xbaa0a*/
  }
}

// [23/27] Address: 0xbaa40
// Method: AccountReviewPopup::adminDeleteCommentsFinished
// Hidden C++ exception states: #wind=2
__int64 __fastcall AccountReviewPopup_adminDeleteCommentsFinished(__int64 a1, int a2)
{
  const char *v3; // r8
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]
  void *v14; // [rsp+50h] [rbp+8h]

  if ( !*(_QWORD *)(a1 + 608) || *(_BYTE *)(a1 + 616) ) /*0xbaa60*/
  {
    v8 = a1 - 776; /*0xbaaf7*/
    v9 = a1; /*0xbaafe*/
    if ( a1 == 776 ) /*0xbab06*/
      v9 = 0; /*0xbab06*/
    v10 = *(_QWORD *)&qword_905FB0; /*0xbab0a*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xbab14*/
    {
      v14 = operator new(0x690u); /*0xbab20*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0xbab2e*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xbab3f*/
      v10 = *(_QWORD *)&qword_905FB0; /*0xbab41*/
    }
    *(_QWORD *)(v10 + 1384) = v9; /*0xbab48*/
    GameLevelManager_deleteServerLevelList(v10, *(_DWORD *)(v8 + 840)); /*0xbab55*/
    return sub_C1780(v8, *(unsigned int *)(a1 - 96)); /*0xbab6f*/
  }
  else
  {
    *(_BYTE *)(a1 + 545) = 1; /*0xbaa6d*/
    v3 = (const char *)&unk_70802C; /*0xbaa7b*/
    if ( a2 == 1 ) /*0xbaa85*/
      v3 = &byte_6E86E0; /*0xbaa85*/
    v4 = cocos2d::CCString::createWithFormat("Deleted <cg>%i</c> item%s.", a2, v3); /*0xbaa90*/
    CString = cocos2d::CCString::getCString(v4); /*0xbaa99*/
    v11 = 0; /*0xbaaa2*/
    v12 = 0; /*0xbaaa9*/
    v13 = 0; /*0xbaaae*/
    v6 = -1; /*0xbaab3*/
    do /*0xbaac3*/
      ++v6; /*0xbaac0*/
    while ( CString[v6] ); /*0xbaac3*/
    sub_3C230(&v11); /*0xbaad1*/
    return UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 608), &v11); /*0xbaae2*/
  }
}

// [24/27] Address: 0xbab80
// Method: AccountReviewPopup::adminDeleteCommentsFailed
void __fastcall AccountReviewPopup_adminDeleteCommentsFailed(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 608) ) /*0xbab86*/
  {
    if ( !*(_BYTE *)(a1 + 616) ) /*0xbab97*/
    {
      v2 = 0; /*0xbabb3*/
      *(_QWORD *)&v2 = sub_3C460(32); /*0xbabc9*/
      v3 = 31; /*0xbabd1*/
      v4 = 31; /*0xbabda*/
      strcpy((char *)v2, "Failed. Please try again later."); /*0xbabe3*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 608), &v2); /*0xbac21*/
    }
  }
}

// [25/27] Address: 0xbac30
// Method: AccountReviewPopup::onClosePopup
// Hidden C++ exception states: #wind=2
void __fastcall AccountReviewPopup_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 600) || a2 != *(_QWORD *)(a1 + 592) ) /*0xbac5a*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0xbac68*/
    LOBYTE(v4) = 1; /*0xbac71*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0xbac76*/
    v5 = 0; /*0xbac7c*/
    if ( a2 == *(_QWORD *)(a1 + 592) ) /*0xbac85*/
      *(_QWORD *)(a1 + 592) = 0; /*0xbac87*/
    if ( *(_BYTE *)(a1 + 529) ) /*0xbac8e*/
    {
      *(_BYTE *)(a1 + 529) = 0; /*0xbac97*/
      if ( a1 != 792 ) /*0xbaca8*/
        v5 = a1 - 16; /*0xbacaa*/
      v6 = *(_QWORD *)&qword_905FB0; /*0xbacae*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xbacb8*/
      {
        v7 = operator new(0x690u); /*0xbacc4*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0xbacd2*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xbacdf*/
        v6 = *(_QWORD *)&qword_905FB0; /*0xbace2*/
      }
      *(_QWORD *)(v6 + 1384) = v5; /*0xbace9*/
      GameLevelManager_deleteServerLevelList(v6, *(_DWORD *)(a1 + 48)); /*0xbacf3*/
      sub_C1780(a1 - 792, *(unsigned int *)(a1 - 112)); /*0xbacfe*/
    }
  }
}

// [26/27] Address: 0xbad20
// Method: AccountReviewPopup::adminCloseCaseFinished
// Hidden C++ exception states: #wind=4
void __fastcall AccountReviewPopup_adminCloseCaseFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  int v5; // edi
  cocos2d::CCNode *v7; // rsi
  __int64 v8; // rcx
  bool v9; // al
  const char *v10; // r9
  cocos2d::CCString *v11; // rax
  const char *CString; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  void **v16; // xmm0_8
  __m128i v17; // xmm1
  void **v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rdx
  __int64 *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // xmm0_8
  __int64 v26; // rbx
  __int64 v27; // rax
  struct cocos2d::CCAction *v28; // rax
  void *Block[2]; // [rsp+38h] [rbp-31h] BYREF
  __m128i v30; // [rsp+48h] [rbp-21h]
  void *Src[2]; // [rsp+58h] [rbp-11h] BYREF
  __m128i si128; // [rsp+68h] [rbp-1h]
  void *v33[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v34; // [rsp+88h] [rbp+1Fh]

  v4 = a4; /*0xbad46*/
  v5 = a3; /*0xbad4a*/
  v7 = (cocos2d::CCNode *)(a1 - 776); /*0xbad53*/
  if ( (_DWORD)a2 == *(_DWORD *)(a1 - 776 + 840) ) /*0xbad60*/
  {
    v8 = *(_QWORD *)(a1 - 80); /*0xbad66*/
    if ( v8 ) /*0xbad6d*/
      LoadingCircle_fadeAndRemove(v8, a2, a3, a4); /*0xbad6f*/
    *(_BYTE *)(a1 + 560) = 1; /*0xbad74*/
    v9 = *(_BYTE *)(a1 + 544) && (*(int *)(a1 + 268) > 0 || *(int *)(a1 + 280) > 0 || !*(_DWORD *)(a1 + 156)); /*0xbada3*/
    if ( v5 <= 0 ) /*0xbada7*/
    {
      if ( v4 || !v9 ) /*0xbafb8*/
      {
        v23 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v8) + 272); /*0xbb018*/
        *(_OWORD *)v33 = 0; /*0xbb02a*/
        *(_QWORD *)&v34 = 0; /*0xbb02e*/
        *((_QWORD *)&v34 + 1) = 15; /*0xbb032*/
        LOBYTE(v33[0]) = 0; /*0xbb03a*/
        si128.m128i_i64[0] = 11; /*0xbb042*/
        v25 = 0x6F6C632065736143LL; /*0xbb04a*/
        Src[1] = &loc_646571 + 2; /*0xbb059*/
      }
      else
      {
        v23 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v8) + 272); /*0xbafc0*/
        *(_OWORD *)v33 = 0; /*0xbafd2*/
        *(_QWORD *)&v34 = 0; /*0xbafd6*/
        *((_QWORD *)&v34 + 1) = 15; /*0xbafda*/
        LOBYTE(v33[0]) = 0; /*0xbafe2*/
        si128.m128i_i64[0] = 14; /*0xbafec*/
        v25 = 0x2079646165726C41LL; /*0xbaff4*/
        Src[1] = (void *)0x6465736F6C63LL; /*0xbb002*/
      }
      v26 = *v23; /*0xbb06b*/
      Src[0] = (void *)v25; /*0xbb06e*/
      si128.m128i_i64[1] = 15; /*0xbb073*/
      v27 = sub_3A4CA0(Src, v22, v24, 150, v33); /*0xbb09e*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v26 + 456))(v23, v27, 1000); /*0xbb0af*/
    }
    else
    {
      v10 = (const char *)&unk_70802C; /*0xbadb4*/
      if ( v5 == 1 ) /*0xbadbe*/
        v10 = &byte_6E86E0; /*0xbadbe*/
      v11 = cocos2d::CCString::createWithFormat("%i %s%s", v5, "item", v10); /*0xbadd2*/
      CString = cocos2d::CCString::getCString(v11); /*0xbaddb*/
      *(_OWORD *)v33 = 0; /*0xbade4*/
      v34 = 0; /*0xbadeb*/
      v13 = -1; /*0xbadf0*/
      do /*0xbadfa*/
        ++v13; /*0xbadf7*/
      while ( CString[v13] ); /*0xbadfa*/
      sub_3C230(v33); /*0xbae07*/
      v14 = sub_58C00(v33, 0, "Case closed, ", 13); /*0xbae20*/
      *(_OWORD *)Src = 0; /*0xbae28*/
      si128 = 0; /*0xbae2f*/
      *(_OWORD *)Src = *(_OWORD *)v14; /*0xbae37*/
      si128 = *(__m128i *)(v14 + 16); /*0xbae3f*/
      *(_QWORD *)(v14 + 16) = 0; /*0xbae43*/
      *(_QWORD *)(v14 + 24) = 15; /*0xbae47*/
      *(_BYTE *)v14 = 0; /*0xbae4f*/
      v15 = sub_43D80(Src, " cleared", 8u); /*0xbae63*/
      *(_OWORD *)Block = *(_OWORD *)v15; /*0xbae6b*/
      v16 = (void **)Block[0]; /*0xbae68*/
      v30 = *(__m128i *)(v15 + 16); /*0xbae73*/
      v17 = v30; /*0xbae6f*/
      *(_QWORD *)(v15 + 16) = 0; /*0xbae77*/
      *(_QWORD *)(v15 + 24) = 15; /*0xbae7b*/
      *(_BYTE *)v15 = 0; /*0xbae83*/
      v18 = Block; /*0xbae86*/
      if ( _mm_srli_si128(v17, 8).m128i_u64[0] > 0xF ) /*0xbae9d*/
        v18 = v16; /*0xbae9d*/
      sub_AA670(v18); /*0xbaea9*/
      if ( v30.m128i_i64[1] > 0xFuLL ) /*0xbaeb7*/
      {
        v19 = Block[0]; /*0xbaebc*/
        if ( (unsigned __int64)(v30.m128i_i64[1] + 1) >= 0x1000 ) /*0xbaeca*/
        {
          v19 = (void *)*((_QWORD *)Block[0] - 1); /*0xbaed0*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F ) /*0xbaedf*/
            invoke_watson(0, 0, 0, 0, 0); /*0xbaef0*/
        }
        j_j_free(v19); /*0xbaef7*/
      }
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0xbaf05*/
      {
        v20 = Src[0]; /*0xbaf0a*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0xbaf18*/
        {
          v20 = (void *)*((_QWORD *)Src[0] - 1); /*0xbaf1e*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v20 - 8) > 0x1F ) /*0xbaf2d*/
            invoke_watson(0, 0, 0, 0, 0); /*0xbaf3e*/
        }
        j_j_free(v20); /*0xbaf45*/
      }
      si128 = _mm_load_si128((const __m128i *)&Size); /*0xbaf52*/
      LOBYTE(Src[0]) = 0; /*0xbaf57*/
      if ( *((_QWORD *)&v34 + 1) > 0xFu ) /*0xbaf63*/
      {
        v21 = v33[0]; /*0xbaf6c*/
        if ( (unsigned __int64)(*((_QWORD *)&v34 + 1) + 1LL) >= 0x1000 ) /*0xbaf7a*/
        {
          v21 = (void *)*((_QWORD *)v33[0] - 1); /*0xbaf80*/
          if ( (unsigned __int64)((char *)v33[0] - (char *)v21 - 8) > 0x1F ) /*0xbaf8f*/
            invoke_watson(0, 0, 0, 0, 0); /*0xbafa0*/
        }
        j_j_free(v21); /*0xbafa7*/
      }
    }
    v28 = (struct cocos2d::CCAction *)cocos2d::CCCallFunc::create(v7, sub_BB1E0); /*0xbb0bf*/
    cocos2d::CCNode::runAction(v7, v28); /*0xbb0cb*/
  }
}

// [27/27] Address: 0xbb100
// Method: AccountReviewPopup::adminCloseCaseFailed
// Hidden C++ exception states: #wind=1
void __fastcall AccountReviewPopup_adminCloseCaseFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  char v10[14]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v11; // [rsp+3Eh] [rbp-3Ah]
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]

  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 64) ) /*0xbb10d*/
  {
    v4 = *(_QWORD *)(a1 - 80); /*0xbb113*/
    if ( v4 ) /*0xbb11a*/
      LoadingCircle_fadeAndRemove(v4, a2, a3, a4); /*0xbb11c*/
    v5 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v4) + 272); /*0xbb127*/
    v14 = 0; /*0xbb13e*/
    v15 = 0; /*0xbb143*/
    v16 = 15; /*0xbb14c*/
    LOBYTE(v14) = 0; /*0xbb155*/
    v12 = 12; /*0xbb15f*/
    v13 = 15; /*0xbb168*/
    strcpy(v10, "Clear failed"); /*0xbb179*/
    v10[13] = 0; /*0xbb185*/
    v11 = 0; /*0xbb185*/
    v6 = *v5; /*0xbb18e*/
    v9 = sub_3A4CA0(v10, v7, v8, 150, &v14); /*0xbb1b6*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v6 + 456))(v5, v9, 1000); /*0xbb1c7*/
  }
}
