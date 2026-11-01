#include <Geode/binding/ThreadDescPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0xd22a0
// Method: ThreadDescPopup::~ThreadDescPopup
// Hidden C++ exception states: #wind=1
char *__fastcall ThreadDescPopup__dtor_ThreadDescPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  cocos2d::CCObject *v9; // rcx

  *(_QWORD *)Block = &ThreadDescPopup::`vftable'; /*0xd22bb*/
  *((_QWORD *)Block + 40) = &ThreadDescPopup::`vftable'; /*0xd22c5*/
  *((_QWORD *)Block + 41) = &ThreadDescPopup::`vftable'; /*0xd22d3*/
  *((_QWORD *)Block + 42) = &ThreadDescPopup::`vftable'; /*0xd22e1*/
  *((_QWORD *)Block + 43) = &ThreadDescPopup::`vftable'; /*0xd22ef*/
  *((_QWORD *)Block + 44) = &ThreadDescPopup::`vftable'; /*0xd22fd*/
  *((_QWORD *)Block + 51) = &ThreadDescPopup::`vftable'; /*0xd230b*/
  *((_QWORD *)Block + 54) = &ThreadDescPopup::`vftable'; /*0xd2319*/
  *((_QWORD *)Block + 68) = &ThreadDescPopup::`vftable'; /*0xd2327*/
  *((_QWORD *)Block + 83) = &ThreadDescPopup::`vftable'; /*0xd2335*/
  *((_QWORD *)Block + 84) = &ThreadDescPopup::`vftable'; /*0xd2343*/
  v4 = Block + 1000; /*0xd234a*/
  *((_QWORD *)Block + 125) = &ThreadDescPopup::`vftable'; /*0xd2358*/
  *((_QWORD *)Block + 126) = &ThreadDescPopup::`vftable'; /*0xd2362*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd2369*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd2373*/
  {
    v6 = operator new(0x690u); /*0xd237a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd2387*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd2398*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd239a*/
  }
  if ( *(char **)(v5 + 1392) == v4 ) /*0xd23aa*/
    *(_QWORD *)(v5 + 1392) = 0; /*0xd23ac*/
  v7 = *((_QWORD *)Block + 129); /*0xd23b3*/
  if ( v7 ) /*0xd23bd*/
    *(_QWORD *)(v7 + 608) = 0; /*0xd23bf*/
  v8 = *((_QWORD *)Block + 142); /*0xd23c6*/
  if ( v8 ) /*0xd23d0*/
    *(_QWORD *)(v8 + 1168) = 0; /*0xd23d2*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 127); /*0xd23d9*/
  if ( v9 ) /*0xd23e3*/
    cocos2d::CCObject::release(v9); /*0xd23e5*/
  sub_3C310(Block + 1080); /*0xd23f2*/
  sub_3C310(Block + 1048); /*0xd23fe*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0xd2406*/
  if ( (a2 & 1) != 0 ) /*0xd2410*/
    j_j_free(Block); /*0xd241a*/
  return Block; /*0xd2422*/
}

// [2/13] Address: 0xfb3b0
// Method: ThreadDescPopup::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall ThreadDescPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // r12
  unsigned __int64 v9; // r13
  char *v10; // rsi
  unsigned __int64 v11; // rbx
  void **v12; // r14
  __int64 v13; // rdi
  char *v14; // rax
  __int16 v15; // [rsp+30h] [rbp-39h] BYREF
  char v16; // [rsp+32h] [rbp-37h]
  __int128 v17; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+50h] [rbp-19h]
  __int64 v19; // [rsp+58h] [rbp-11h]
  void *Src[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp+7h]
  unsigned __int64 v22; // [rsp+78h] [rbp+Fh]

  if ( a2 == *(_QWORD *)(a1 + 488) ) /*0xfb3e6*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0xfb3fd*/
    *(_OWORD *)Src = 0; /*0xfb403*/
    v21 = 0; /*0xfb407*/
    v22 = 0; /*0xfb40b*/
    v4 = -1; /*0xfb40f*/
    do /*0xfb419*/
      ++v4; /*0xfb416*/
    while ( *(_BYTE *)(v3 + v4) ); /*0xfb419*/
    sub_3C230(Src); /*0xfb426*/
    v8 = *(__int64 **)(*(_QWORD *)(a1 + 488) + 640LL); /*0xfb433*/
    v9 = v22; /*0xfb43a*/
    v10 = (char *)Src[0]; /*0xfb43e*/
    if ( v8 ) /*0xfb445*/
    {
      v11 = v21; /*0xfb44b*/
      if ( v21 ) /*0xfb452*/
      {
        v17 = 0; /*0xfb4ed*/
        v18 = 0; /*0xfb4f1*/
        v19 = 0; /*0xfb4f5*/
        v12 = Src; /*0xfb4f9*/
        if ( v22 > 0xF ) /*0xfb501*/
          v12 = (void **)Src[0]; /*0xfb501*/
        v13 = 0x7FFFFFFFFFFFFFFFLL; /*0xfb505*/
        if ( v21 > 0x7FFFFFFFFFFFFFFFLL ) /*0xfb512*/
          sub_8D90(v6, v5, v7); /*0xfb654*/
        if ( v21 > 0xF ) /*0xfb51c*/
        {
          if ( (v21 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xfb53e*/
          {
            v13 = v21 | 0xF; /*0xfb540*/
            if ( (v21 | 0xF) < 0x16 ) /*0xfb54b*/
              v13 = 22; /*0xfb54b*/
          }
          *(_QWORD *)&v17 = sub_3C460(v13 + 1); /*0xfb558*/
          v18 = v11; /*0xfb55c*/
          v19 = v13; /*0xfb560*/
          memcpy((void *)v17, v12, v11 + 1); /*0xfb56e*/
        }
        else
        {
          v18 = v21; /*0xfb51e*/
          v19 = 15; /*0xfb522*/
          v17 = *(_OWORD *)v12; /*0xfb52e*/
        }
        PlayLayer_updateProgressbar( /*0xfb5a2*/
          (__int64)v8,
          (__int64)&v17,
          *(float *)(a1 + 496),
          COERCE_DOUBLE(1116995584),
          0.34999999,
          0.0);
        v15 = -1; /*0xfb5ae*/
        v16 = -1; /*0xfb5b9*/
        TextArea_colorAllCharactersTo((__int64)v8, (__int64)&v15); /*0xfb5c3*/
      }
      else
      {
        (*(void (__fastcall **)(__int64 *))(*v8 + 160))(v8); /*0xfb467*/
        *((_DWORD *)v8 + 156) = *(_DWORD *)(a1 + 496); /*0xfb474*/
        v17 = 0; /*0xfb47f*/
        *(_QWORD *)&v17 = sub_3C460(32); /*0xfb495*/
        v18 = 24; /*0xfb499*/
        v19 = 31; /*0xfb4a1*/
        strcpy((char *)v17, "Describe this group chat"); /*0xfb4b0*/
        TextArea_setString(v8, (const void **)&v17); /*0xfb4ca*/
        v15 = 27843; /*0xfb4cf*/
        v16 = 65; /*0xfb4d5*/
        TextArea_colorAllCharactersTo((__int64)v8, (__int64)&v15); /*0xfb4e0*/
      }
      CustomSFXWidget_init(*(_QWORD *)(a1 + 488), *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 488) + 600LL) + 760LL)); /*0xfb5de*/
    }
    if ( v9 > 0xF ) /*0xfb5e8*/
    {
      v14 = v10; /*0xfb5ee*/
      if ( v9 + 1 >= 0x1000 ) /*0xfb5f8*/
      {
        v10 = (char *)*((_QWORD *)v10 - 1); /*0xfb5fe*/
        if ( (unsigned __int64)(v14 - v10 - 8) > 0x1F ) /*0xfb60d*/
          invoke_watson(0, 0, 0, 0, 0); /*0xfb61e*/
      }
      j_j_free(v10); /*0xfb628*/
    }
  }
}

// [3/13] Address: 0xfba80
// Method: ThreadDescPopup::emotePicked
__int64 __fastcall ThreadDescPopup_emotePicked(__int64 a1, __int64 a2, void **a3)
{
  _BYTE *v3; // rdx
  size_t v5; // r8
  __int64 result; // rax

  if ( a3 ) /*0xfba83*/
  {
    v3 = *a3; /*0xfba8a*/
    if ( *a3 ) /*0xfba8a*/
    {
      v5 = -1; /*0xfba95*/
      do /*0xfbaa3*/
        ++v5; /*0xfbaa0*/
      while ( v3[v5] ); /*0xfbaa3*/
      sub_3F5A0((void *)(a1 + 72), v3, v5); /*0xfbaae*/
      return sub_FB660(a1 - 1008); /*0xfbaba*/
    }
  }
  return result; /*0xfbac4*/
}

// [4/13] Address: 0xfbad0
// Method: ThreadDescPopup::emotePickerClosed
void __fastcall ThreadDescPopup_emotePickerClosed(__int64 a1)
{
  *(_QWORD *)(a1 + 128) = 0; /*0xfbad0*/
}

// [5/13] Address: 0xfc1b0
// Method: ThreadDescPopup::threadUpdateFinished
void __fastcall ThreadDescPopup_threadUpdateFinished(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // rax
  __int64 v4; // rdi
  void *v6; // rdx
  void *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx

  v3 = *(_DWORD **)(a1 + 16); /*0xfc1ba*/
  v4 = a1 - 1000; /*0xfc1be*/
  if ( !v3 || a2 != v3[14] || !*(_BYTE *)(a1 + 113) ) /*0xfc1da*/
  {
LABEL_21:
    v9 = *(_QWORD *)(a1 + 24); /*0xfc2a6*/
    if ( v9 ) /*0xfc2ad*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 672) + 64LL))(v9 + 672); /*0xfc2b9*/
    return; /*0xfc2b9*/
  }
  if ( a3 != 14 ) /*0xfc1e8*/
  {
    if ( a3 == 16 ) /*0xfc1ee*/
    {
      if ( v3 + 72 != (_DWORD *)(a1 + 80) ) /*0xfc202*/
      {
        v6 = (void *)(a1 + 80); /*0xfc209*/
        if ( *(_QWORD *)(a1 + 104) > 0xFu ) /*0xfc20c*/
          v6 = *(void **)(a1 + 80); /*0xfc20e*/
        sub_3F5A0(v3 + 72, v6, *(_QWORD *)(a1 + 96)); /*0xfc215*/
      }
      if ( *(_QWORD *)(a1 + 24) ) /*0xfc21a*/
        sub_E0F80(); /*0xfc223*/
      if ( *(_BYTE *)(a1 + 112) ) /*0xfc228*/
        sub_FBF90(v4); /*0xfc23b*/
      else
        sub_FC060(v4, "Icon updated"); /*0xfc251*/
      return; /*0xfc23b*/
    }
    goto LABEL_21; /*0xfc1ee*/
  }
  if ( v3 + 64 != (_DWORD *)(a1 + 48) ) /*0xfc264*/
  {
    v7 = (void *)(a1 + 48); /*0xfc26b*/
    if ( *(_QWORD *)(a1 + 72) > 0xFu ) /*0xfc26e*/
      v7 = *(void **)(a1 + 48); /*0xfc270*/
    sub_3F5A0(v3 + 64, v7, *(_QWORD *)(a1 + 64)); /*0xfc277*/
  }
  v8 = *(_QWORD *)(a1 + 24); /*0xfc27c*/
  sub_FC060(v4, "Description updated"); /*0xfc28a*/
  if ( v8 ) /*0xfc292*/
    EnhancedGameObject_updateUserCoin(v8); /*0xfc2a1*/
}

// [6/13] Address: 0xfc2d0
// Method: ThreadDescPopup::threadUpdateFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall ThreadDescPopup_threadUpdateFailed(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  _WORD v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]

  result = *(_QWORD *)(a1 + 16); /*0xfc2da*/
  if ( result /*0xfc303*/
    && a2 == *(_DWORD *)(result + 56)
    && *(_BYTE *)(a1 + 113)
    && (result = (unsigned int)(a3 - 14), (result & 0xFFFFFFFD) == 0) )
  {
    *(_BYTE *)(a1 + 113) = 0; /*0xfc309*/
    result = SupportLayer_onRequestAccess(a1 - 1000); /*0xfc314*/
    if ( !byte_9037D9 ) /*0xfc320*/
    {
      v5 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v4) + 272); /*0xfc32c*/
      v14 = 0; /*0xfc343*/
      v15 = 0; /*0xfc34a*/
      v16 = 15; /*0xfc34f*/
      LOBYTE(v14) = 0; /*0xfc358*/
      v11[7] = 0; /*0xfc35c*/
      v12 = 13; /*0xfc361*/
      v13 = 15; /*0xfc36a*/
      strcpy((char *)v11, "Update failed"); /*0xfc37b*/
      v6 = *v5; /*0xfc39b*/
      v9 = sub_3A4CA0(v11, v7, v8, 150, &v14); /*0xfc3c3*/
      return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v6 + 456))(v5, v9, 1000); /*0xfc3d4*/
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 24); /*0xfc3e8*/
    if ( v10 ) /*0xfc3ef*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 672) + 72LL))(v10 + 672); /*0xfc3fb*/
  }
  return result; /*0xfc3da*/
}

// [7/13] Address: 0xfc410
// Method: ThreadDescPopup::threadMessagesFinished
void __fastcall ThreadDescPopup_threadMessagesFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xfc424*/
  v2 = *(_QWORD *)(a1 + 24); /*0xfc427*/
  if ( v2 ) /*0xfc42e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 16LL))(v2 + 672); /*0xfc43a*/
  if ( *(_BYTE *)(v1 + 113) ) /*0xfc43d*/
  {
    v3 = v1; /*0xfc44a*/
    if ( v1 == 1000 ) /*0xfc452*/
      v3 = 0; /*0xfc452*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xfc456*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xfc460*/
    {
      v5 = operator new(0x690u); /*0xfc46c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xfc47a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xfc48b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xfc48d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xfc49b*/
    {
      if ( v1 == 1000 ) /*0xfc4a0*/
        v1 = 0; /*0xfc4a0*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xfc4a4*/
    }
  }
}

// [8/13] Address: 0xfc4c0
// Method: ThreadDescPopup::threadMessagesFailed
void __fastcall ThreadDescPopup_threadMessagesFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xfc4d4*/
  v2 = *(_QWORD *)(a1 + 24); /*0xfc4d7*/
  if ( v2 ) /*0xfc4de*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 24LL))(v2 + 672); /*0xfc4ea*/
  if ( *(_BYTE *)(v1 + 113) ) /*0xfc4ed*/
  {
    v3 = v1; /*0xfc4fa*/
    if ( v1 == 1000 ) /*0xfc502*/
      v3 = 0; /*0xfc502*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xfc506*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xfc510*/
    {
      v5 = operator new(0x690u); /*0xfc51c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xfc52a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xfc53b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xfc53d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xfc54b*/
    {
      if ( v1 == 1000 ) /*0xfc550*/
        v1 = 0; /*0xfc550*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xfc554*/
    }
  }
}

// [9/13] Address: 0xfc570
// Method: ThreadDescPopup::threadSearchFinished
void __fastcall ThreadDescPopup_threadSearchFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xfc584*/
  v2 = *(_QWORD *)(a1 + 24); /*0xfc587*/
  if ( v2 ) /*0xfc58e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 32LL))(v2 + 672); /*0xfc59a*/
  if ( *(_BYTE *)(v1 + 113) ) /*0xfc59d*/
  {
    v3 = v1; /*0xfc5aa*/
    if ( v1 == 1000 ) /*0xfc5b2*/
      v3 = 0; /*0xfc5b2*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xfc5b6*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xfc5c0*/
    {
      v5 = operator new(0x690u); /*0xfc5cc*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xfc5da*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xfc5eb*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xfc5ed*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xfc5fb*/
    {
      if ( v1 == 1000 ) /*0xfc600*/
        v1 = 0; /*0xfc600*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xfc604*/
    }
  }
}

// [10/13] Address: 0xfc620
// Method: ThreadDescPopup::threadSearchFailed
void __fastcall ThreadDescPopup_threadSearchFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xfc634*/
  v2 = *(_QWORD *)(a1 + 24); /*0xfc637*/
  if ( v2 ) /*0xfc63e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 40LL))(v2 + 672); /*0xfc64a*/
  if ( *(_BYTE *)(v1 + 113) ) /*0xfc64d*/
  {
    v3 = v1; /*0xfc65a*/
    if ( v1 == 1000 ) /*0xfc662*/
      v3 = 0; /*0xfc662*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xfc666*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xfc670*/
    {
      v5 = operator new(0x690u); /*0xfc67c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xfc68a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xfc69b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xfc69d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xfc6ab*/
    {
      if ( v1 == 1000 ) /*0xfc6b0*/
        v1 = 0; /*0xfc6b0*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xfc6b4*/
    }
  }
}

// [11/13] Address: 0xfc6d0
// Method: ThreadDescPopup::threadSendFinished
void __fastcall ThreadDescPopup_threadSendFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xfc6e4*/
  v2 = *(_QWORD *)(a1 + 24); /*0xfc6e7*/
  if ( v2 ) /*0xfc6ee*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 48LL))(v2 + 672); /*0xfc6fa*/
  if ( *(_BYTE *)(v1 + 113) ) /*0xfc6fd*/
  {
    v3 = v1; /*0xfc70a*/
    if ( v1 == 1000 ) /*0xfc712*/
      v3 = 0; /*0xfc712*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xfc716*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xfc720*/
    {
      v5 = operator new(0x690u); /*0xfc72c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xfc73a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xfc74b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xfc74d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xfc75b*/
    {
      if ( v1 == 1000 ) /*0xfc760*/
        v1 = 0; /*0xfc760*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xfc764*/
    }
  }
}

// [12/13] Address: 0xfc780
// Method: ThreadDescPopup::threadSendFailed
void __fastcall ThreadDescPopup_threadSendFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xfc794*/
  v2 = *(_QWORD *)(a1 + 24); /*0xfc797*/
  if ( v2 ) /*0xfc79e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 56LL))(v2 + 672); /*0xfc7aa*/
  if ( *(_BYTE *)(v1 + 113) ) /*0xfc7ad*/
  {
    v3 = v1; /*0xfc7ba*/
    if ( v1 == 1000 ) /*0xfc7c2*/
      v3 = 0; /*0xfc7c2*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xfc7c6*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xfc7d0*/
    {
      v5 = operator new(0x690u); /*0xfc7dc*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xfc7ea*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xfc7fb*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xfc7fd*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xfc80b*/
    {
      if ( v1 == 1000 ) /*0xfc810*/
        v1 = 0; /*0xfc810*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xfc814*/
    }
  }
}

// [13/13] Address: 0xfc830
// Method: ThreadDescPopup::onClose
__int64 __fastcall ThreadDescPopup_onClose(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx

  SupportLayer_onRequestAccess(a1); /*0xfc839*/
  v2 = a1[142]; /*0xfc83e*/
  if ( v2 ) /*0xfc848*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1104LL))(v2, 0); /*0xfc84f*/
  v3 = a1[129]; /*0xfc855*/
  if ( v3 ) /*0xfc85f*/
  {
    *(_QWORD *)(v3 + 608) = 0; /*0xfc861*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[129] + 1032LL))(a1[129], 0); /*0xfc878*/
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xfc886*/
  LOBYTE(v4) = 1; /*0xfc88f*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v4);
}
