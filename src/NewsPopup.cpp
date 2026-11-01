#include <Geode/binding/NewsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x499800
// Method: NewsPopup::~NewsPopup
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall NewsPopup__dtor_NewsPopup(_QWORD *Block, char a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rbx
  const char *v9; // rdi
  cocos2d::CCTextureCache *v10; // rax
  __int64 **v11; // rax
  __int64 *i; // rax
  __int64 *j; // rax

  *Block = &NewsPopup::`vftable'; /*0x499826*/
  Block[40] = &NewsPopup::`vftable'; /*0x499830*/
  Block[41] = &NewsPopup::`vftable'; /*0x49983e*/
  Block[42] = &NewsPopup::`vftable'; /*0x49984c*/
  Block[43] = &NewsPopup::`vftable'; /*0x49985a*/
  Block[44] = &NewsPopup::`vftable'; /*0x499868*/
  Block[51] = &NewsPopup::`vftable'; /*0x499876*/
  Block[54] = &NewsPopup::`vftable'; /*0x499884*/
  Block[68] = &NewsPopup::`vftable'; /*0x499892*/
  Block[83] = &NewsPopup::`vftable'; /*0x4998a0*/
  Block[84] = &NewsPopup::`vftable'; /*0x4998ae*/
  v4 = qword_906070; /*0x4998b5*/
  if ( !qword_906070 ) /*0x4998bf*/
  {
    v5 = operator new(0x3D0u); /*0x4998c6*/
    qword_906070 = sub_47C350(v5); /*0x4998d3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x4998e4*/
    v4 = qword_906070; /*0x4998e7*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v4, (__int64)(Block + 84)); /*0x4998f5*/
  v8 = *(__int64 **)Block[102]; /*0x499901*/
  while ( !*((_BYTE *)v8 + 25) ) /*0x499904*/
  {
    v9 = (const char *)(v8 + 4); /*0x499910*/
    if ( (unsigned __int64)v8[7] > 0xF ) /*0x499919*/
      v9 = *(const char **)v9; /*0x49991b*/
    v10 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v7, v6); /*0x49991e*/
    cocos2d::CCTextureCache::removeTextureForKey(v10, v9); /*0x49992a*/
    v11 = (__int64 **)v8[2]; /*0x499930*/
    if ( *((_BYTE *)v11 + 25) ) /*0x499934*/
    {
      for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] ) /*0x49993e*/
      {
        if ( v8 != (__int64 *)i[2] ) /*0x499948*/
          break; /*0x499948*/
        v8 = i; /*0x49994a*/
      }
      v8 = i; /*0x499957*/
    }
    else
    {
      v8 = (__int64 *)v8[2]; /*0x49995c*/
      for ( j = *v11; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x499962*/
        v8 = j; /*0x499970*/
    }
  }
  sub_CDA30(Block + 102); /*0x499989*/
  sub_CDA30(Block + 100); /*0x499995*/
  sub_3C310(Block + 96); /*0x4999a1*/
  sub_497830(Block + 85); /*0x4999ad*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x4999b5*/
  if ( (a2 & 1) != 0 ) /*0x4999bf*/
    j_j_free(Block); /*0x4999c9*/
  return Block; /*0x4999d1*/
}

// [2/11] Address: 0x49c1e0
// Method: NewsPopup::FLAlert_Clicked
void __fastcall NewsPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax

  if ( a3 ) /*0x49c1e3*/
  {
    if ( *(_QWORD *)(a1 + 120) ) /*0x49c1ea*/
    {
      v3 = cocos2d::CCApplication::sharedApplication(a1); /*0x49c1f4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3); /*0x49c212*/
    }
  }
}

// [3/11] Address: 0x49c220
// Method: NewsPopup::musicActionFinished
__int64 __fastcall NewsPopup_musicActionFinished(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 11 ) /*0x49c223*/
    return sub_49A2D0(a1 - 672); /*0x49c22c*/
  return result; /*0x49c231*/
}

// [4/11] Address: 0x49c240
// Method: NewsPopup::musicActionFailed
__int64 __fastcall NewsPopup_musicActionFailed(_QWORD *a1, int a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = a1[9]; /*0x49c240*/
  if ( v2 ) /*0x49c247*/
  {
    result = a1[2]; /*0x49c249*/
    if ( a1[1] == result ) /*0x49c251*/
    {
      result = (unsigned int)(a2 - 9); /*0x49c253*/
      if ( (result & 0xFFFFFFFD) != 0 ) /*0x49c25b*/
      {
        if ( a2 == 10 ) /*0x49c260*/
          return (**(__int64 (__fastcall ***)(__int64, const char *))(v2 + 360))(v2 + 360, "No news yet!"); /*0x49c273*/
      }
      else
      {
        return (**(__int64 (__fastcall ***)(__int64, const char *))(v2 + 360))(v2 + 360, "Could not load news."); /*0x49c287*/
      }
    }
  }
  return result; /*0x49c28a*/
}

// [5/11] Address: 0x49c290
// Method: NewsPopup::newsImageDownloaded
// Hidden C++ exception states: #wind=1
double __fastcall NewsPopup_newsImageDownloaded(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]

  v7 = a2; /*0x49c2b4*/
  sub_CD930(a1 + 128); /*0x49c2bd*/
  v4 = sub_3E4F0(v6, a2); /*0x49c2ca*/
  if ( (unsigned __int8)sub_49B920(a1 - 672, *(unsigned int *)(a1 + 32), v4) ) /*0x49c2dc*/
    sub_49A4D0(a1 - 672, *(unsigned int *)(a1 + 32)); /*0x49c2ef*/
  return sub_3C310(a2); /*0x49c2fd*/
}

// [6/11] Address: 0x49c320
// Method: NewsPopup::newsImageFailed
// Hidden C++ exception states: #wind=1
double __fastcall NewsPopup_newsImageFailed(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v8 = a2; /*0x49c344*/
  sub_CD620(a1 + 128, v6, a2); /*0x49c355*/
  v4 = sub_3E4F0(v7, a2); /*0x49c362*/
  if ( (unsigned __int8)sub_49B920(a1 - 672, *(unsigned int *)(a1 + 32), v4) ) /*0x49c374*/
    sub_49A4D0(a1 - 672, *(unsigned int *)(a1 + 32)); /*0x49c387*/
  return sub_3C310(a2); /*0x49c395*/
}

// [7/11] Address: 0x49c3c0
// Method: NewsPopup::keyDown
void __fastcall NewsPopup_keyDown(__int64 a1, int a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  signed int v6; // r8d
  unsigned __int64 v7; // rdx

  if ( a2 == 37 ) /*0x49c3c3*/
  {
    v2 = *(_DWORD *)(a1 + 360); /*0x49c3c5*/
    v3 = a1 - 344; /*0x49c3cb*/
    if ( v2 > 0 ) /*0x49c3d4*/
      sub_49A4D0(v3, (unsigned int)(v2 - 1)); /*0x49c3d8*/
  }
  else if ( a2 == 39 ) /*0x49c3e0*/
  {
    v4 = *(_QWORD *)(a1 + 344); /*0x49c3e2*/
    v5 = a1 - 344; /*0x49c3e9*/
    v6 = *(_DWORD *)(v5 + 704); /*0x49c401*/
    v7 = (__int64)((unsigned __int128)((v4 - *(_QWORD *)(v5 + 680)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4; /*0x49c40b*/
    if ( v6 < (int)((v7 >> 63) + v7 - 1) ) /*0x49c41e*/
      sub_49A4D0(v5, (unsigned int)(v6 + 1)); /*0x49c424*/
  }
  else
  {
    FLAlertLayer_keyDown(a1, a2); /*0x49c429*/
  }
}

// [8/11] Address: 0x49c430
// Method: NewsPopup::ccTouchBegan
char __fastcall NewsPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  bool v8; // al

  v5 = *(_QWORD *)(a1 + 392); /*0x49c445*/
  if ( v5 ) /*0x49c452*/
    sub_80640(v5, a2); /*0x49c454*/
  v7 = *(_QWORD *)(a1 + 400); /*0x49c459*/
  v8 = v7 /*0x49c47c*/
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 8LL))(v7 + 320, a2, a3);
  *(_BYTE *)(a1 + 408) = v8; /*0x49c485*/
  return FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x49c491*/
}

// [9/11] Address: 0x49c4b0
// Method: NewsPopup::ccTouchMoved
__int64 __fastcall NewsPopup_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  if ( *(_QWORD *)(a1 + 392) && (sub_80830(), v6 = *(_QWORD *)(a1 + 392), *(_BYTE *)(v6 + 481)) ) /*0x49c4e0*/
  {
    *(_BYTE *)(v6 + 481) = 0; /*0x49c4e9*/
    if ( *(_BYTE *)(a1 + 408) ) /*0x49c4f0*/
    {
      v7 = *(_QWORD *)(a1 + 400); /*0x49c4f9*/
      if ( v7 ) /*0x49c503*/
      {
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 32LL))(v7 + 320, a2, a3); /*0x49c515*/
        *(_BYTE *)(a1 + 408) = 0; /*0x49c518*/
      }
    }
    return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x49c537*/
  }
  else
  {
    if ( *(_BYTE *)(a1 + 408) ) /*0x49c53c*/
    {
      v9 = *(_QWORD *)(a1 + 400); /*0x49c545*/
      if ( v9 ) /*0x49c54f*/
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v9 + 320) + 16LL))(v9 + 320, a2, a3); /*0x49c561*/
    }
    result = *(unsigned int *)(a2 + 56); /*0x49c564*/
    if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x49c56d*/
    {
      v10 = *(_QWORD *)(a1 + 232); /*0x49c56f*/
    }
    else
    {
      if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x49c57e*/
        return result; /*0x49c57e*/
      v10 = *(_QWORD *)(a1 + 304); /*0x49c580*/
    }
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v10 + 320) + 16LL))(v10 + 320, a2, a3); /*0x49c597*/
  }
}

// [10/11] Address: 0x49c5b0
// Method: NewsPopup::ccTouchEnded
__int64 __fastcall NewsPopup_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char v7; // si
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v5 = *(_QWORD *)(a1 + 392); /*0x49c5ca*/
  if ( v5 && *(_BYTE *)(v5 + 480) ) /*0x49c5d9*/
  {
    v7 = 1; /*0x49c5e2*/
LABEL_5:
    sub_80AF0(v5); /*0x49c5ef*/
    goto LABEL_6; /*0x49c5ef*/
  }
  v7 = 0; /*0x49c5e7*/
  if ( v5 ) /*0x49c5ed*/
    goto LABEL_5; /*0x49c5ed*/
LABEL_6:
  if ( *(_BYTE *)(a1 + 408) ) /*0x49c5f4*/
  {
    v8 = *(_QWORD *)(a1 + 400); /*0x49c5fd*/
    if ( v8 ) /*0x49c607*/
    {
      v9 = v8 + 320; /*0x49c609*/
      v10 = *(_QWORD *)(v8 + 320); /*0x49c613*/
      if ( v7 ) /*0x49c61c*/
        (*(void (__fastcall **)(__int64, __int64, __int64))(v10 + 32))(v9, a2, a3); /*0x49c61e*/
      else
        (*(void (__fastcall **)(__int64, __int64, __int64))(v10 + 24))(v9, a2, a3); /*0x49c623*/
      *(_BYTE *)(a1 + 408) = 0; /*0x49c626*/
    }
  }
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0x49c636*/
}

// [11/11] Address: 0x49c650
// Method: NewsPopup::ccTouchCancelled
__int64 __fastcall NewsPopup_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx

  v5 = *(_QWORD *)(a1 + 392); /*0x49c665*/
  if ( v5 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v5 + 440) ) /*0x49c67d*/
  {
    *(_DWORD *)(v5 + 440) = -1; /*0x49c681*/
    *(_QWORD *)(v5 + 472) = 0; /*0x49c68b*/
    *(_WORD *)(v5 + 480) = 0; /*0x49c692*/
    *(_BYTE *)(v5 + 508) = 0; /*0x49c699*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v5); /*0x49c69f*/
  }
  if ( *(_BYTE *)(a1 + 408) ) /*0x49c6a5*/
  {
    v7 = *(_QWORD *)(a1 + 400); /*0x49c6ae*/
    if ( v7 ) /*0x49c6b8*/
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 32LL))(v7 + 320, a2, a3); /*0x49c6ca*/
      *(_BYTE *)(a1 + 408) = 0; /*0x49c6cd*/
    }
  }
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x49c6dd*/
}
