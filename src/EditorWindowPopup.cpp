#include <Geode/binding/EditorWindowPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x17c750
// Method: EditorWindowPopup::ccTouchBegan
bool __fastcall EditorWindowPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  float *v3; // rbx
  float v7; // xmm4_4
  const struct cocos2d::CCPoint *Location; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = (float *)(a1 - 320); /*0x17c764*/
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 320) + 344LL))(a1 - 320) ) /*0x17c77a*/
    return 0; /*0x17c77a*/
  sub_17BF50(v3); /*0x17c78b*/
  if ( *(_DWORD *)(a1 + 740) != -1 ) /*0x17c797*/
  {
    v7 = v3[262]; /*0x17c79d*/
    cocos2d::CCRect::CCRect( /*0x17c816*/
      (cocos2d::CCRect *)v10,
      (float)(v3[263] - (float)((float)(v7 * v3[260]) * 0.5)) - 6.0,
      (float)(v3[264] - (float)((float)(v7 * v3[261]) * 0.5)) - 6.0,
      (float)(v7 * v3[260]) + 12.0,
      (float)(v7 * v3[261]) + 12.0);
    Location = (const struct cocos2d::CCPoint *)cocos2d::CCTouch::getLocation(a2, &v11); /*0x17c824*/
    return cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v10, Location); /*0x17c83d*/
  }
  if ( !(unsigned __int8)sub_17C880(v3, a2, a3) ) /*0x17c848*/
    return 0; /*0x17c85e*/
  *(_DWORD *)(a1 + 740) = *(_DWORD *)(a2 + 56); /*0x17c854*/
  return 1; /*0x17c860*/
}

// [2/11] Address: 0x17ce10
// Method: EditorWindowPopup::ccTouchMoved
__int64 __fastcall EditorWindowPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 Location; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm10_4
  float v16; // xmm5_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  __int64 v21; // rax
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  float v36; // [rsp+A0h] [rbp+8h] BYREF
  float v37; // [rsp+A4h] [rbp+Ch]
  char v38; // [rsp+A8h] [rbp+10h] BYREF
  char v39; // [rsp+B8h] [rbp+20h] BYREF

  result = *(unsigned int *)(a1 + 740); /*0x17ce1f*/
  v4 = a1 - 320; /*0x17ce25*/
  if ( *(_DWORD *)(a2 + 56) == (_DWORD)result ) /*0x17ce38*/
  {
    if ( *(_BYTE *)(a1 + 757) ) /*0x17ce3e*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 320LL) + 16LL))(*(_QWORD *)(a1 + 232) + 320LL); /*0x17ce5b*/
    if ( *(_BYTE *)(a1 + 758) ) /*0x17ce60*/
    {
      Location = cocos2d::CCTouch::getLocation(a2, &v36); /*0x17ce74*/
      result = sub_17C2A0(v4, Location); /*0x17ce80*/
      v9 = *(_QWORD *)(a1 + 696); /*0x17ce85*/
      if ( v9 ) /*0x17ce8f*/
      {
        v10 = v9 + 320; /*0x17ce95*/
        v11 = 255; /*0x17ce9c*/
        if ( (_BYTE)result ) /*0x17cea9*/
          v11 = 150; /*0x17cea9*/
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, v11); /*0x17ceb0*/
      }
    }
    else if ( *(_DWORD *)(v4 + 1080) ) /*0x17ceb8*/
    {
      v12 = cocos2d::CCTouch::getLocation(a2, &v38); /*0x17ced6*/
      cocos2d::CCPoint::operator-(v12, &v36, a1 + 772); /*0x17ceee*/
      v13 = 1.0; /*0x17cefb*/
      if ( *(_DWORD *)(a1 + 760) == 1 ) /*0x17cf03*/
        v14 = -1.0; /*0x17cf05*/
      else
        v14 = 1.0; /*0x17cf0f*/
      v15 = *(float *)(a1 + 768); /*0x17cf2a*/
      v16 = v15 - v37; /*0x17cf37*/
      v17 = (float)(v36 - *(float *)(a1 + 764)) * v14; /*0x17cf40*/
      if ( *(_DWORD *)(a1 + 780) == 2 ) /*0x17cf44*/
      {
        v18 = *(float *)(a1 + 720); /*0x17cf4a*/
        v19 = *(float *)(a1 + 724); /*0x17cf5a*/
        v20 = fminf(*(float *)(a1 + 812), fmaxf(*(float *)(a1 + 808), fmaxf(v17 / v18, v16 / v19))); /*0x17cf82*/
        *(float *)(a1 + 728) = v20; /*0x17cfa7*/
        cocos2d::CCPoint::CCPoint( /*0x17cfbe*/
          (cocos2d::CCPoint *)&v38,
          (float)((float)((float)(v18 * v20) * v14) * 0.5) + *(float *)(a1 + 764),
          v15 - (float)((float)(v19 * v20) * 0.5));
        cocos2d::CCPoint::operator=(a1 + 732, v21); /*0x17cfce*/
        return sub_17C180(v4); /*0x17cfd7*/
      }
      else
      {
        v22 = *(float *)(a1 + 804); /*0x17d001*/
        v23 = *(float *)(a1 + 800); /*0x17d00e*/
        v24 = *(float *)(a1 + 792); /*0x17d01f*/
        v25 = *(float *)(a1 + 796); /*0x17d036*/
        v26 = fmaxf(v24, fminf(v23, v17)); /*0x17d043*/
        v27 = fmaxf(v25, fminf(v22, v16)); /*0x17d04e*/
        if ( *(_BYTE *)(a1 + 784) ) /*0x17cff5*/
        {
          v28 = *(float *)(a1 + 720); /*0x17d058*/
          if ( v28 <= 0.0 ) /*0x17d06e*/
            v29 = 1.0; /*0x17d079*/
          else
            v29 = v26 / v28; /*0x17d073*/
          v30 = *(float *)(a1 + 724); /*0x17d07c*/
          if ( v30 > 0.0 ) /*0x17d08e*/
            v13 = v27 / v30; /*0x17d093*/
          v31 = *(float *)(a1 + 788); /*0x17d09a*/
          if ( v29 <= v13 ) /*0x17d0a2*/
            v26 = v31 * v27; /*0x17d0b0*/
          else
            v27 = v26 / v31; /*0x17d0a7*/
          if ( v24 > v26 ) /*0x17d0b8*/
          {
            v26 = *(float *)(a1 + 792); /*0x17d0be*/
            v27 = v24 / v31; /*0x17d0c2*/
          }
          if ( v25 > v27 ) /*0x17d0ca*/
          {
            v27 = *(float *)(a1 + 796); /*0x17d0cf*/
            v26 = v31 * v25; /*0x17d0d3*/
          }
          if ( v26 > v23 ) /*0x17d0db*/
          {
            v26 = *(float *)(a1 + 800); /*0x17d0e0*/
            v27 = v23 / v31; /*0x17d0e3*/
          }
          if ( v27 > v22 ) /*0x17d0ea*/
          {
            v27 = *(float *)(a1 + 804); /*0x17d0ef*/
            v26 = v31 * v22; /*0x17d0f2*/
          }
        }
        *(float *)(a1 + 724) = v27; /*0x17d102*/
        *(float *)(a1 + 720) = v26; /*0x17d11f*/
        cocos2d::CCPoint::CCPoint( /*0x17d136*/
          (cocos2d::CCPoint *)&v38,
          (float)((float)(v14 * v26) * 0.5) + *(float *)(a1 + 764),
          v15 - (float)(v27 * 0.5));
        cocos2d::CCPoint::operator=(a1 + 732, v32); /*0x17d146*/
        return sub_17C180(v4); /*0x17d14f*/
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 744) ) /*0x17d16f*/
      {
        cocos2d::CCTouch::getLocation(a2, &v36); /*0x17d183*/
        cocos2d::CCPoint::operator-(&v36, &v38, a1 + 748); /*0x17d1a0*/
        v33 = sub_17C3E0(v4, &v39, &v38); /*0x17d1b9*/
        cocos2d::CCPoint::operator=(v4 + 1052, v33); /*0x17d1c8*/
        return sub_17BFD0(v4); /*0x17d1d6*/
      }
      if ( *(_QWORD *)(v4 + 1024) ) /*0x17d1db*/
      {
        sub_80830(); /*0x17d1e7*/
        result = *(_QWORD *)(a1 + 704); /*0x17d1ec*/
        if ( *(_BYTE *)(result + 481) ) /*0x17d1f3*/
        {
          *(_BYTE *)(result + 481) = 0; /*0x17d1fc*/
          if ( !*(_BYTE *)(a1 + 756) ) /*0x17d20a*/
            return result; /*0x17d20a*/
          v34 = *(_QWORD *)(a1 + 712); /*0x17d210*/
          if ( v34 ) /*0x17d21a*/
          {
            result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v34 + 320) + 32LL))( /*0x17d22c*/
                       v34 + 320,
                       a2,
                       a3);
            *(_BYTE *)(a1 + 756) = 0; /*0x17d22f*/
          }
        }
      }
      if ( *(_BYTE *)(a1 + 756) ) /*0x17d236*/
      {
        v35 = *(_QWORD *)(a1 + 712); /*0x17d243*/
        if ( v35 ) /*0x17d24d*/
          return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v35 + 320) + 16LL))( /*0x17d263*/
                   v35 + 320,
                   a2,
                   a3);
      }
    }
  }
  return result; /*0x17cfe2*/
}

// [3/11] Address: 0x17d270
// Method: EditorWindowPopup::ccTouchEnded
__int64 __fastcall EditorWindowPopup_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  bool v7; // zf
  __int64 v8; // rcx
  __int64 Location; // rax
  __int64 v10; // rcx
  char v11; // di
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  char v15; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 740); /*0x17d284*/
  v5 = a2; /*0x17d28d*/
  if ( *(_DWORD *)(a2 + 56) != (_DWORD)result ) /*0x17d296*/
    return result; /*0x17d296*/
  v7 = *(_BYTE *)(a1 + 757) == 0; /*0x17d29c*/
  *(_DWORD *)(a1 + 740) = -1; /*0x17d2a3*/
  if ( !v7 ) /*0x17d2ad*/
  {
    *(_BYTE *)(a1 + 757) = 0; /*0x17d2af*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 320LL) + 24LL))(*(_QWORD *)(a1 + 232) + 320LL); /*0x17d2ca*/
  }
  if ( *(_BYTE *)(a1 + 758) ) /*0x17d2cf*/
  {
    *(_BYTE *)(a1 + 758) = 0; /*0x17d2d8*/
    v8 = *(_QWORD *)(a1 + 696); /*0x17d2df*/
    if ( v8 ) /*0x17d2e9*/
    {
      LOBYTE(a2) = -1; /*0x17d2f2*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v8 + 320) + 40LL))(v8 + 320, a2); /*0x17d2f7*/
    }
    Location = cocos2d::CCTouch::getLocation(v5, &v15); /*0x17d302*/
    result = sub_17C2A0(a1 - 320, Location); /*0x17d312*/
    if ( (_BYTE)result ) /*0x17d319*/
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 320) + 1104LL))(a1 - 320, 0); /*0x17d32f*/
    return result; /*0x17d335*/
  }
  if ( *(_DWORD *)(a1 + 760) ) /*0x17d33a*/
  {
    *(_DWORD *)(a1 + 760) = 0; /*0x17d343*/
    return result; /*0x17d34d*/
  }
  if ( *(_BYTE *)(a1 + 744) ) /*0x17d34f*/
  {
    *(_BYTE *)(a1 + 744) = 0; /*0x17d358*/
    return result; /*0x17d35f*/
  }
  v10 = *(_QWORD *)(a1 + 704); /*0x17d361*/
  if ( v10 && *(_BYTE *)(v10 + 480) ) /*0x17d36d*/
  {
    v11 = 1; /*0x17d376*/
LABEL_17:
    result = sub_80AF0(v10); /*0x17d383*/
    goto LABEL_18; /*0x17d383*/
  }
  v11 = 0; /*0x17d37b*/
  if ( v10 ) /*0x17d381*/
    goto LABEL_17; /*0x17d381*/
LABEL_18:
  if ( *(_BYTE *)(a1 + 756) ) /*0x17d388*/
  {
    v12 = *(_QWORD *)(a1 + 712); /*0x17d391*/
    if ( v12 ) /*0x17d39b*/
    {
      v13 = (__int64 *)(v12 + 320); /*0x17d39d*/
      v14 = *v13; /*0x17d3aa*/
      if ( v11 ) /*0x17d3b0*/
        result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v14 + 32))(v13, v5, a3); /*0x17d3b2*/
      else
        result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v14 + 24))(v13, v5, a3); /*0x17d3b7*/
      *(_BYTE *)(a1 + 756) = 0; /*0x17d3ba*/
    }
  }
  return result; /*0x17d3c1*/
}

// [4/11] Address: 0x17d3e0
// Method: EditorWindowPopup::ccTouchCancelled
void __fastcall EditorWindowPopup_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = a2; /*0x17d3f8*/
  if ( *(_DWORD *)(a2 + 56) == *(_DWORD *)(a1 + 740) ) /*0x17d401*/
  {
    v6 = *(_BYTE *)(a1 + 757) == 0; /*0x17d407*/
    *(_DWORD *)(a1 + 740) = -1; /*0x17d40e*/
    if ( v6 ) /*0x17d418*/
    {
      v6 = *(_BYTE *)(a1 + 758) == 0; /*0x17d445*/
      *(_BYTE *)(a1 + 744) = 0; /*0x17d44c*/
      *(_DWORD *)(a1 + 760) = 0; /*0x17d453*/
      if ( !v6 ) /*0x17d45d*/
      {
        *(_BYTE *)(a1 + 758) = 0; /*0x17d45f*/
        v7 = *(_QWORD *)(a1 + 696); /*0x17d466*/
        if ( v7 ) /*0x17d470*/
        {
          LOBYTE(a2) = -1; /*0x17d479*/
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 320) + 40LL))(v7 + 320, a2); /*0x17d47e*/
        }
      }
      v8 = *(_QWORD *)(a1 + 704); /*0x17d481*/
      if ( v8 && *(_DWORD *)(v4 + 56) == *(_DWORD *)(v8 + 440) ) /*0x17d496*/
      {
        *(_QWORD *)(v8 + 472) = 0; /*0x17d498*/
        *(_DWORD *)(v8 + 440) = -1; /*0x17d4a3*/
        *(_WORD *)(v8 + 480) = 0; /*0x17d4ad*/
        *(_BYTE *)(v8 + 508) = 0; /*0x17d4b6*/
        cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v8); /*0x17d4bd*/
      }
      if ( *(_BYTE *)(a1 + 756) ) /*0x17d4c3*/
      {
        v9 = *(_QWORD *)(a1 + 712); /*0x17d4cc*/
        if ( v9 ) /*0x17d4d6*/
        {
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v9 + 320) + 32LL))(v9 + 320, v4, a3); /*0x17d4e8*/
          *(_BYTE *)(a1 + 756) = 0; /*0x17d4eb*/
        }
      }
    }
    else
    {
      *(_BYTE *)(a1 + 757) = 0; /*0x17d41a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 320LL) + 32LL))(*(_QWORD *)(a1 + 232) + 320LL); /*0x17d441*/
    }
  }
}

// [5/11] Address: 0x17d510
// Method: EditorWindowPopup::keyDown
void __fastcall EditorWindowPopup_keyDown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1 - 344; /*0x17d526*/
  if ( !*(_BYTE *)(a1 + 735) ) /*0x17d51f*/
  {
    v5 = qword_903788; /*0x17d53c*/
    if ( !qword_903788 ) /*0x17d546*/
    {
LABEL_5:
      v6 = *(_QWORD *)(a1 + 656); /*0x17d55e*/
      if ( v6 ) /*0x17d568*/
        (**(void (__fastcall ***)(__int64, _QWORD))(v6 + 344))(v6 + 344, a2); /*0x17d579*/
      return; /*0x17d57b*/
    }
    while ( v5 != v2 ) /*0x17d54b*/
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 504LL))(v5); /*0x17d556*/
      if ( !v5 ) /*0x17d55c*/
        goto LABEL_5; /*0x17d55c*/
    }
  }
  *(_BYTE *)(a1 + 735) = 0; /*0x17d57d*/
  if ( a2 == 13 ) /*0x17d587*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 1216LL))(v2); /*0x17d58f*/
  }
  else if ( a2 == 27 ) /*0x17d59a*/
  {
    sub_17C6F0(v2); /*0x17d59f*/
  }
}

// [6/11] Address: 0x17d5c0
// Method: EditorWindowPopup::handleAction
char __fastcall EditorWindowPopup_handleAction(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v3 = a1 - 344; /*0x17d5db*/
  if ( !*(_BYTE *)(a1 + 735) ) /*0x17d5d4*/
  {
    v7 = qword_903788; /*0x17d5f5*/
    if ( !qword_903788 ) /*0x17d5ff*/
    {
LABEL_5:
      v8 = *(_QWORD *)(a1 + 656); /*0x17d617*/
      if ( v8 ) /*0x17d621*/
        return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v8 + 344) + 16LL))(v8 + 344, a2, a3); /*0x17d636*/
      else
        return 0; /*0x17d63b*/
    }
    while ( v7 != v3 ) /*0x17d604*/
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 504LL))(v7); /*0x17d60f*/
      if ( !v7 ) /*0x17d615*/
        goto LABEL_5; /*0x17d615*/
    }
  }
  *(_BYTE *)(a1 + 735) = 0; /*0x17d63f*/
  if ( a3 ) /*0x17d649*/
  {
    if ( a2 == 20067 ) /*0x17d654*/
      sub_17C6F0(v3); /*0x17d656*/
    else
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 1216LL))(v3); /*0x17d660*/
  }
  return 1; /*0x17d668*/
}

// [7/11] Address: 0x17d690
// Method: EditorWindowPopup::onFieldEnter
// attributes: thunk
__int64 __fastcall EditorWindowPopup_onFieldEnter(__int64 a1)
{
  return sub_17C6F0(a1);
}

// [8/11] Address: 0x17d6a0
// Method: EditorWindowPopup::textInputClosed
__int64 __fastcall EditorWindowPopup_textInputClosed(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  (**(void (__fastcall ***)(__int64))a1)(a1); /*0x17d6b3*/
  result = *(unsigned __int8 *)(a2 + 700); /*0x17d6b5*/
  *(_BYTE *)(a1 + 535) = result; /*0x17d6c1*/
  return result; /*0x17d6bc*/
}

// [9/11] Address: 0x17d6d0
// Method: EditorWindowPopup::show
__int64 __fastcall EditorWindowPopup_show(__int64 a1)
{
  *(_DWORD *)(a1 + 592) = 90; /*0x17d6d0*/
  return SetupTriggerPopup_show(a1);
}

// [10/11] Address: 0x17d6e0
// Method: EditorWindowPopup::onExit
void __fastcall EditorWindowPopup_onExit(__int64 a1)
{
  *(_DWORD *)(a1 + 1060) = -1; /*0x17d6e0*/
  *(_BYTE *)(a1 + 1064) = 0; /*0x17d6ea*/
  *(_DWORD *)(a1 + 1080) = 0; /*0x17d6f1*/
  *(_WORD *)(a1 + 1077) = 0; /*0x17d6fb*/
  *(_BYTE *)(a1 + 1076) = 0; /*0x17d704*/
  cocos2d::CCLayer::onExit((cocos2d::CCLayer *)a1); /*0x17d70b*/
}

// [11/11] Address: 0x17d720
// Method: EditorWindowPopup::onClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall EditorWindowPopup_onClose(__int64 a1)
{
  _QWORD *v2; // r8
  void **v3; // rax
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  _OWORD *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-38h]
  __int128 v18; // [rsp+30h] [rbp-28h]
  void *v19; // [rsp+60h] [rbp+8h] BYREF
  char v20; // [rsp+70h] [rbp+18h] BYREF
  char v21; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD **)(a1 + 1000); /*0x17d72e*/
  if ( v2 ) /*0x17d738*/
  {
    v3 = (void **)v2[76]; /*0x17d73e*/
    v4 = *v3; /*0x17d745*/
    if ( *v3 != v3 ) /*0x17d74b*/
    {
      while ( v4[3] != a1 ) /*0x17d755*/
      {
        v4 = (_QWORD *)*v4; /*0x17d75a*/
        if ( v4 == (_QWORD *)v2[76] ) /*0x17d764*/
          goto LABEL_14; /*0x17d764*/
      }
      v5 = 2 /*0x17d7b2*/
         * (v2[81]
          & (0x100000001B3LL
           * (*((unsigned __int8 *)v4 + 19)
            ^ (0x100000001B3LL
             * (*((unsigned __int8 *)v4 + 18)
              ^ (0x100000001B3LL
               * (*((unsigned __int8 *)v4 + 17)
                ^ (0x100000001B3LL * (*((unsigned __int8 *)v4 + 16) ^ 0xCBF29CE484222325uLL)))))))));
      v6 = v2[78]; /*0x17d7b5*/
      v7 = *(_QWORD **)(v6 /*0x17d7bc*/
                      + 16
                      * (v2[81]
                       & (0x100000001B3LL
                        * (*((unsigned __int8 *)v4 + 19)
                         ^ (0x100000001B3LL
                          * (*((unsigned __int8 *)v4 + 18)
                           ^ (0x100000001B3LL
                            * (*((unsigned __int8 *)v4 + 17)
                             ^ (0x100000001B3LL * (*((unsigned __int8 *)v4 + 16) ^ 0xCBF29CE484222325uLL))))))))));
      if ( *(_QWORD **)(v6 /*0x17d7c5*/
                      + 16
                      * (v2[81]
                       & (0x100000001B3LL
                        * (*((unsigned __int8 *)v4 + 19)
                         ^ (0x100000001B3LL
                          * (*((unsigned __int8 *)v4 + 18)
                           ^ (0x100000001B3LL
                            * (*((unsigned __int8 *)v4 + 17)
                             ^ (0x100000001B3LL * (*((unsigned __int8 *)v4 + 16) ^ 0xCBF29CE484222325uLL)))))))))
                      + 8) == v4 )
      {
        if ( v7 == v4 ) /*0x17d7ca*/
        {
          v8 = v2[76]; /*0x17d7cc*/
          *(_QWORD *)(v6 /*0x17d7d3*/
                    + 16
                    * (v2[81]
                     & (0x100000001B3LL
                      * (*((unsigned __int8 *)v4 + 19)
                       ^ (0x100000001B3LL
                        * (*((unsigned __int8 *)v4 + 18)
                         ^ (0x100000001B3LL
                          * (*((unsigned __int8 *)v4 + 17)
                           ^ (0x100000001B3LL * (*((unsigned __int8 *)v4 + 16) ^ 0xCBF29CE484222325uLL)))))))))) = v8;
        }
        else
        {
          v8 = v4[1]; /*0x17d7de*/
        }
        *(_QWORD *)(v6 + 8 * v5 + 8) = v8; /*0x17d7d7*/
      }
      else if ( v7 == v4 ) /*0x17d7ec*/
      {
        *(_QWORD *)(v6 /*0x17d7f1*/
                  + 16
                  * (v2[81]
                   & (0x100000001B3LL
                    * (*((unsigned __int8 *)v4 + 19)
                     ^ (0x100000001B3LL
                      * (*((unsigned __int8 *)v4 + 18)
                       ^ (0x100000001B3LL
                        * (*((unsigned __int8 *)v4 + 17)
                         ^ (0x100000001B3LL * (*((unsigned __int8 *)v4 + 16) ^ 0xCBF29CE484222325uLL)))))))))) = *v4;
      }
      v9 = (_QWORD *)*v4; /*0x17d7f5*/
      --v2[77]; /*0x17d7f8*/
      *(_QWORD *)v4[1] = v9; /*0x17d803*/
      v9[1] = v4[1]; /*0x17d80a*/
      j_j_free(v4); /*0x17d813*/
    }
  }
LABEL_14:
  sub_17BED0(a1); /*0x17d818*/
  if ( *(_DWORD *)(a1 + 1136) ) /*0x17d820*/
  {
    sub_17BF50(a1); /*0x17d830*/
    if ( *(_BYTE *)(a1 + 598) ) /*0x17d835*/
    {
      v11 = cocos2d::CCDirector::sharedDirector(v10); /*0x17d83e*/
      cocos2d::CCDirector::getWinSize(v11, &v19); /*0x17d84c*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, *(float *)&v19 * 0.5, *((float *)&v19 + 1) * 0.5); /*0x17d873*/
      cocos2d::CCPoint::operator+(a1 + 600, &v21, &v20); /*0x17d88a*/
      v12 = (_DWORD *)(a1 + 1052); /*0x17d890*/
      cocos2d::CCPoint::operator=(a1 + 1052, &v21); /*0x17d89f*/
    }
    else
    {
      v12 = (_DWORD *)(a1 + 1052); /*0x17d8a7*/
    }
    LODWORD(v17) = *v12; /*0x17d8b2*/
    DWORD1(v17) = *(_DWORD *)(a1 + 1056); /*0x17d8c0*/
    *((_QWORD *)&v17 + 1) = *(_QWORD *)(a1 + 1040); /*0x17d8ce*/
    LODWORD(v18) = *(_DWORD *)(a1 + 1048); /*0x17d8ea*/
    v13 = *(_QWORD *)(a1 + 1024); /*0x17d8f0*/
    if ( v13 ) /*0x17d8fa*/
      DWORD1(v18) = *(_DWORD *)(v13 + 436); /*0x17d904*/
    else
      DWORD1(v18) = 0; /*0x17d90c*/
    DWORD2(v18) = *(_DWORD *)(a1 + 1140); /*0x17d91a*/
    BYTE12(v18) = *(_BYTE *)(a1 + 1144); /*0x17d925*/
    v14 = qword_905FD0; /*0x17d929*/
    if ( !qword_905FD0 ) /*0x17d933*/
    {
      v19 = operator new(0x6E8u); /*0x17d93f*/
      qword_905FD0 = sub_2723A0(v19); /*0x17d94d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x17d95e*/
      v14 = qword_905FD0; /*0x17d960*/
    }
    LODWORD(v19) = *(_DWORD *)(a1 + 1136); /*0x17d96d*/
    v15 = (_OWORD *)sub_17D9B0(v14 + 1144, &v19); /*0x17d97d*/
    *v15 = v17; /*0x17d987*/
    v15[1] = v18; /*0x17d98f*/
  }
  return SetupTriggerPopup_onClose(a1); /*0x17d999*/
}
