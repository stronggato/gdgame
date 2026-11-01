#include <Geode/binding/DeathTrackerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x101750
// Method: DeathTrackerPopup::~DeathTrackerPopup
// Hidden C++ exception states: #wind=1
char *__fastcall DeathTrackerPopup__dtor_DeathTrackerPopup(char *Block, char a2)
{
  sub_3DA90(Block + 1016); /*0x101766*/
  sub_10CB50(Block + 992); /*0x101772*/
  sub_685C0(Block + 944); /*0x10177e*/
  `eh vector destructor iterator'(Block + 824, 0x18u, 3u, sub_3DA90); /*0x10179c*/
  sub_FDCC0(Block + 752); /*0x1017a8*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x1017b0*/
  if ( (a2 & 1) != 0 ) /*0x1017b9*/
    j_j_free(Block); /*0x1017c3*/
  return Block; /*0x1017cb*/
}

// [2/10] Address: 0x10a920
// Method: DeathTrackerPopup::virtualRowCount
__int64 __fastcall DeathTrackerPopup_virtualRowCount(__int64 a1)
{
  return (*(_QWORD *)(a1 + 336) - *(_QWORD *)(a1 + 328)) / 56LL; /*0x10a94c*/
}

// [3/10] Address: 0x10a950
// Method: DeathTrackerPopup::virtualRowHeight
float __fastcall DeathTrackerPopup_virtualRowHeight(__int64 a1, int a2)
{
  return *(float *)(56LL * a2 + *(_QWORD *)(a1 + 328) + 4); /*0x10a964*/
}

// [4/10] Address: 0x10c260
// Method: DeathTrackerPopup::setIDPopupClosed
unsigned __int64 __fastcall DeathTrackerPopup_setIDPopupClosed(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdx

  result = (unsigned __int64)((unsigned __int128)((__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) /*0x10c27f*/
                                                * (__int128)0x6666666666666667LL) >> 64) >> 63;
  v4 = (*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) / 80LL; /*0x10c283*/
  if ( (int)v4 > 0 ) /*0x10c288*/
  {
    *(_BYTE *)(a1 + 60) = 0; /*0x10c28d*/
    if ( (int)v4 < a3 ) /*0x10c296*/
      a3 = v4; /*0x10c296*/
    if ( a3 < 1 ) /*0x10c29d*/
      a3 = 1; /*0x10c29d*/
    *(_DWORD *)(a1 + 64) = v4 - a3; /*0x10c2ab*/
    return sub_104670(a1 - 672); /*0x10c2af*/
  }
  return result; /*0x10c2b4*/
}

// [5/10] Address: 0x10c520
// Method: DeathTrackerPopup::keyBackClicked
__int64 __fastcall DeathTrackerPopup_keyBackClicked(__int64 a1)
{
  return sub_10C2C0(a1 - 336, 0);
}

// [6/10] Address: 0x10c530
// Method: DeathTrackerPopup::keyDown
void __fastcall DeathTrackerPopup_keyDown(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rcx

  if ( a2 == 37 ) /*0x10c533*/
  {
    sub_10B3E0(a1 - 344, 0); /*0x10c53e*/
    return; /*0x10c53e*/
  }
  if ( a2 != 39 ) /*0x10c546*/
  {
    FLAlertLayer_keyDown(a1, a2); /*0x10c556*/
    return; /*0x10c556*/
  }
  v4 = a1 - 344; /*0x10c548*/
  if ( *(_BYTE *)(v4 + 732) ) /*0x10b470*/
  {
    v2 = *(_QWORD *)(v4 + 752); /*0x10b479*/
    if ( v2 != *(_QWORD *)(v4 + 760) ) /*0x10b487*/
    {
      *(_BYTE *)(v4 + 732) = 0; /*0x10b489*/
      *(_DWORD *)(v4 + 736) = (*(_DWORD *)(v4 + 760) - (int)v2) / 80 - 1; /*0x10b4b7*/
      sub_104670(v4); /*0x10b4bd*/
      return; /*0x10b4bd*/
    }
  }
  else
  {
    v3 = *(_DWORD *)(v4 + 736); /*0x10b4c2*/
    if ( v3 > 0 ) /*0x10b4ca*/
    {
      *(_DWORD *)(v4 + 736) = v3 - 1; /*0x10b4ce*/
      sub_104670(v4); /*0x10b4d4*/
      return; /*0x10b4d4*/
    }
    *(_BYTE *)(v4 + 732) = 1; /*0x10b4d9*/
  }
  sub_104670(v4); /*0x10b4e0*/
}

// [7/10] Address: 0x10c560
// Method: DeathTrackerPopup::ccTouchBegan
char __fastcall DeathTrackerPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ecx
  bool v7; // r14
  bool v8; // si
  __int64 v9; // rax
  __int64 v10; // r13
  _QWORD *v11; // r15
  const struct cocos2d::CCSize *v12; // rdx
  cocos2d::CCRect *v13; // rax
  __int64 v14; // rcx
  char result; // al
  _BYTE v16[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v18[48]; // [rsp+48h] [rbp-30h] BYREF
  float v19; // [rsp+80h] [rbp+8h] BYREF
  float v20; // [rsp+84h] [rbp+Ch]
  float v21; // [rsp+98h] [rbp+20h] BYREF
  float v22; // [rsp+9Ch] [rbp+24h]

  cocos2d::CCTouch::getLocation(a2, v18); /*0x10c57d*/
  v6 = *(_DWORD *)(a1 + 408); /*0x10c583*/
  v7 = !v6 || v6 == 2 && *(_BYTE *)(a1 + 666); /*0x10c5a0*/
  v8 = v6 == 1 || v6 == 2 && !*(_BYTE *)(a1 + 666); /*0x10c5c3*/
  if ( v7 ) /*0x10c5c9*/
    v9 = 392; /*0x10c5cb*/
  else
    v9 = 32 * !v8 + 368LL; /*0x10c5de*/
  v10 = *(_QWORD *)(v9 + a1); /*0x10c5ec*/
  if ( v10 ) /*0x10c5f3*/
  {
    if ( v8 ) /*0x10c5fc*/
    {
      v11 = (_QWORD *)(a1 + 368); /*0x10c5fe*/
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)v16, (const struct cocos2d::CCSize *)(*(_QWORD *)(a1 + 368) + 424LL)); /*0x10c614*/
      v12 = (const struct cocos2d::CCSize *)v16; /*0x10c61a*/
    }
    else
    {
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)v17, (const struct cocos2d::CCSize *)(v10 + 320)); /*0x10c62d*/
      v12 = (const struct cocos2d::CCSize *)v17; /*0x10c633*/
      v11 = (_QWORD *)(a1 + 368); /*0x10c638*/
    }
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v19, v12); /*0x10c647*/
    cocos2d::CCNode::convertToWorldSpace(v10, &v21, &unk_9041C8); /*0x10c65f*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v17, v21, v22, v19, v20); /*0x10c694*/
    if ( cocos2d::CCRect::containsPoint(v13, (const struct cocos2d::CCPoint *)v18) ) /*0x10c6a2*/
    {
      if ( v7 ) /*0x10c6b2*/
      {
        v14 = *(_QWORD *)(a1 + 392); /*0x10c6b4*/
      }
      else
      {
        if ( v8 ) /*0x10c6ef*/
        {
          sub_80640(*v11, a2); /*0x10c6f4*/
          goto LABEL_22; /*0x10c6f9*/
        }
        v14 = *(_QWORD *)(a1 + 400); /*0x10c6fb*/
      }
      sub_1125D0(v14, a2); /*0x10c6bb*/
LABEL_22:
      FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x10c6c0*/
      return 1; /*0x10c6eb*/
    }
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x10c70d*/
  if ( result ) /*0x10c714*/
    return 1; /*0x10c714*/
  return result; /*0x10c6d0*/
}

// [8/10] Address: 0x10c720
// Method: DeathTrackerPopup::ccTouchMoved
__int64 __fastcall DeathTrackerPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx

  v3 = *(_DWORD *)(a1 + 408); /*0x10c72f*/
  if ( !v3 ) /*0x10c740*/
    goto LABEL_4; /*0x10c740*/
  if ( v3 != 2 ) /*0x10c745*/
  {
    if ( (unsigned int)(v3 - 1) > 1 ) /*0x10c786*/
    {
      v7 = *(_QWORD *)(a1 + 400); /*0x10c788*/
      goto LABEL_5; /*0x10c78f*/
    }
LABEL_13:
    v8 = *(_QWORD *)(a1 + 368); /*0x10c791*/
    goto LABEL_7; /*0x10c798*/
  }
  if ( !*(_BYTE *)(a1 + 666) ) /*0x10c74e*/
    goto LABEL_13; /*0x10c74e*/
LABEL_4:
  v7 = *(_QWORD *)(a1 + 392); /*0x10c750*/
LABEL_5:
  if ( !v7 ) /*0x10c75a*/
    goto LABEL_9; /*0x10c75a*/
  v8 = *(_QWORD *)(v7 + 328); /*0x10c75c*/
LABEL_7:
  if ( v8 ) /*0x10c766*/
    sub_80830(); /*0x10c768*/
LABEL_9:
  result = *(unsigned int *)(a2 + 56); /*0x10c76d*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x10c776*/
  {
    v10 = *(_QWORD *)(a1 + 232); /*0x10c778*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x10c7a0*/
      return result; /*0x10c7a0*/
    v10 = *(_QWORD *)(a1 + 304); /*0x10c7a2*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v10 + 320) + 16LL))(v10 + 320, a2, a3); /*0x10c7bc*/
}

// [9/10] Address: 0x10c7d0
// Method: DeathTrackerPopup::ccTouchEnded
__int64 __fastcall DeathTrackerPopup_ccTouchEnded(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 408); /*0x10c7df*/
  if ( !v2 ) /*0x10c7f0*/
    goto LABEL_4; /*0x10c7f0*/
  if ( v2 != 2 ) /*0x10c7f5*/
  {
    if ( (unsigned int)(v2 - 1) > 1 ) /*0x10c83f*/
    {
      v5 = *(_QWORD *)(a1 + 400); /*0x10c841*/
      goto LABEL_5; /*0x10c848*/
    }
LABEL_12:
    v6 = *(_QWORD *)(a1 + 368); /*0x10c84a*/
    goto LABEL_7; /*0x10c851*/
  }
  if ( !*(_BYTE *)(a1 + 666) ) /*0x10c7fe*/
    goto LABEL_12; /*0x10c7fe*/
LABEL_4:
  v5 = *(_QWORD *)(a1 + 392); /*0x10c800*/
LABEL_5:
  if ( !v5 ) /*0x10c80a*/
    return FLAlertLayer_ccTouchEnded(a1, a2); /*0x10c80a*/
  v6 = *(_QWORD *)(v5 + 328); /*0x10c80c*/
LABEL_7:
  if ( v6 ) /*0x10c816*/
    sub_80AF0(v6); /*0x10c818*/
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0x10c826*/
}

// [10/10] Address: 0x10c860
// Method: DeathTrackerPopup::ccTouchCancelled
__int64 __fastcall DeathTrackerPopup_ccTouchCancelled(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 408); /*0x10c86f*/
  if ( !v2 ) /*0x10c880*/
    goto LABEL_4; /*0x10c880*/
  if ( v2 == 2 ) /*0x10c885*/
  {
    if ( *(_BYTE *)(a1 + 666) ) /*0x10c887*/
    {
LABEL_4:
      v5 = *(_QWORD *)(a1 + 392); /*0x10c890*/
LABEL_5:
      if ( v5 ) /*0x10c89a*/
      {
        v6 = *(_QWORD *)(v5 + 328); /*0x10c89c*/
        if ( v6 ) /*0x10c8a6*/
          sub_80AF0(v6); /*0x10c8a8*/
      }
      return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x10c8a8*/
    }
  }
  else if ( (unsigned int)(v2 - 1) > 1 ) /*0x10c8cf*/
  {
    v5 = *(_QWORD *)(a1 + 400); /*0x10c8d1*/
    goto LABEL_5; /*0x10c8d8*/
  }
  v8 = *(_QWORD *)(a1 + 368); /*0x10c8da*/
  if ( v8 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v8 + 440) ) /*0x10c8ef*/
  {
    *(_DWORD *)(v8 + 440) = -1; /*0x10c8f3*/
    *(_QWORD *)(v8 + 472) = 0; /*0x10c8fd*/
    *(_WORD *)(v8 + 480) = 0; /*0x10c904*/
    *(_BYTE *)(v8 + 508) = 0; /*0x10c90b*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v8); /*0x10c911*/
  }
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x10c8b6*/
}
