#include <Geode/binding/SetupSongTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x5ed590
// Method: SetupSongTriggerPopup::~SetupSongTriggerPopup
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupSongTriggerPopup__dtor_SetupSongTriggerPopup(_QWORD *Block, char a2)
{
  __int64 v4; // rcx
  void *v5; // rax

  *Block = &SetupSongTriggerPopup::`vftable'; /*0x5ed5ab*/
  Block[40] = &SetupSongTriggerPopup::`vftable'; /*0x5ed5b5*/
  Block[41] = &SetupSongTriggerPopup::`vftable'; /*0x5ed5c3*/
  Block[42] = &SetupSongTriggerPopup::`vftable'; /*0x5ed5d1*/
  Block[43] = &SetupSongTriggerPopup::`vftable'; /*0x5ed5df*/
  Block[44] = &SetupSongTriggerPopup::`vftable'; /*0x5ed5ed*/
  Block[51] = &SetupSongTriggerPopup::`vftable'; /*0x5ed5fb*/
  Block[54] = &SetupSongTriggerPopup::`vftable'; /*0x5ed609*/
  Block[68] = &SetupSongTriggerPopup::`vftable'; /*0x5ed617*/
  Block[83] = &SetupSongTriggerPopup::`vftable'; /*0x5ed625*/
  Block[84] = &SetupSongTriggerPopup::`vftable'; /*0x5ed633*/
  Block[126] = &SetupSongTriggerPopup::`vftable'; /*0x5ed641*/
  Block[127] = &SetupSongTriggerPopup::`vftable'; /*0x5ed64f*/
  v4 = qword_906070; /*0x5ed656*/
  if ( !qword_906070 ) /*0x5ed660*/
  {
    v5 = operator new(0x3D0u); /*0x5ed667*/
    qword_906070 = sub_47C350(v5); /*0x5ed674*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x5ed685*/
    v4 = qword_906070; /*0x5ed688*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v4, (__int64)(Block + 126)); /*0x5ed696*/
  SetupAudioTriggerPopup__dtor_SetupAudioTriggerPopup(Block); /*0x5ed69e*/
  if ( (a2 & 1) != 0 ) /*0x5ed6a8*/
    j_j_free(Block); /*0x5ed6b2*/
  return Block; /*0x5ed6ba*/
}

// [2/8] Address: 0x5ed6d0
// Method: SetupSongTriggerPopup::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall SetupSongTriggerPopup_create(__int64 a1, __int64 a2)
{
  cocos2d::CCObject *v4; // rsi

  v4 = (cocos2d::CCObject *)operator new(0x408u); /*0x5ed6ef*/
  sub_5D5400(v4); /*0x5ed6fa*/
  *(_QWORD *)v4 = &SetupSongTriggerPopup::`vftable'; /*0x5ed706*/
  *((_QWORD *)v4 + 40) = &SetupSongTriggerPopup::`vftable'; /*0x5ed710*/
  *((_QWORD *)v4 + 41) = &SetupSongTriggerPopup::`vftable'; /*0x5ed71e*/
  *((_QWORD *)v4 + 42) = &SetupSongTriggerPopup::`vftable'; /*0x5ed72c*/
  *((_QWORD *)v4 + 43) = &SetupSongTriggerPopup::`vftable'; /*0x5ed73a*/
  *((_QWORD *)v4 + 44) = &SetupSongTriggerPopup::`vftable'; /*0x5ed748*/
  *((_QWORD *)v4 + 51) = &SetupSongTriggerPopup::`vftable'; /*0x5ed756*/
  *((_QWORD *)v4 + 54) = &SetupSongTriggerPopup::`vftable'; /*0x5ed764*/
  *((_QWORD *)v4 + 68) = &SetupSongTriggerPopup::`vftable'; /*0x5ed772*/
  *((_QWORD *)v4 + 83) = &SetupSongTriggerPopup::`vftable'; /*0x5ed780*/
  *((_QWORD *)v4 + 84) = &SetupSongTriggerPopup::`vftable'; /*0x5ed78e*/
  *((_QWORD *)v4 + 126) = &SetupSongTriggerPopup::`vftable'; /*0x5ed79c*/
  *((_QWORD *)v4 + 127) = &SetupSongTriggerPopup::`vftable'; /*0x5ed7aa*/
  *((_QWORD *)v4 + 128) = 0; /*0x5ed7b1*/
  if ( (unsigned __int8)sub_5ED810(v4, a1, a2) ) /*0x5ed7c5*/
  {
    cocos2d::CCObject::autorelease(v4); /*0x5ed7d1*/
    return v4; /*0x5ed7d7*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x5ed7f9*/
    return 0; /*0x5ed7fc*/
  }
}

// [3/8] Address: 0x5ee370
// Method: SetupSongTriggerPopup::updateLength
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupSongTriggerPopup_updateLength(_QWORD *a1)
{
  __int64 result; // rax
  float v3; // xmm0_4
  float v4; // xmm0_4
  __int64 v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h]

  result = a1[128]; /*0x5ee379*/
  if ( *(_QWORD *)(result + 416) ) /*0x5ee380*/
  {
    if ( !qword_905F60 ) /*0x5ee392*/
    {
      v6 = operator new(0x8A8u); /*0x5ee39e*/
      qword_905F60 = sub_5AE20(v6); /*0x5ee3ac*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5ee3bd*/
    }
    v3 = (*(float (__fastcall **)(_QWORD *, __int64))(*a1 + 1168LL))(a1, 404); /*0x5ee3ca*/
    v4 = FMODAudioEngine_pitchForIdx((int)v3); /*0x5ee3d4*/
    v5 = *(_QWORD *)(a1[128] + 416LL); /*0x5ee3e0*/
    *(float *)(v5 + 508) = v4; /*0x5ee3e7*/
    return CustomSongWidget_updateSongInfo(v5); /*0x5ee3f4*/
  }
  return result; /*0x5ee3ef*/
}

// [4/8] Address: 0x5ee5e0
// Method: SetupSongTriggerPopup::onPlayback
// Hidden C++ exception states: #wind=11
unsigned int __fastcall SetupSongTriggerPopup_onPlayback(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // esi
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  char v13; // di
  double v14; // xmm0_8
  int v15; // xmm6_4
  int v16; // r14d
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  int v25; // [rsp+40h] [rbp-88h]
  _BYTE v26[32]; // [rsp+50h] [rbp-78h] BYREF
  void *v27; // [rsp+E0h] [rbp+18h]
  void *v28; // [rsp+E0h] [rbp+18h]
  void *v29; // [rsp+E0h] [rbp+18h]
  void *v30; // [rsp+E0h] [rbp+18h]
  void *v31; // [rsp+E0h] [rbp+18h]
  void *v32; // [rsp+E0h] [rbp+18h]
  void *v33; // [rsp+E0h] [rbp+18h]
  void *v34; // [rsp+E8h] [rbp+20h]
  void *v35; // [rsp+E8h] [rbp+20h]

  v4 = qword_905F60; /*0x5ee60a*/
  if ( !qword_905F60 ) /*0x5ee614*/
  {
    v27 = operator new(0x8A8u); /*0x5ee620*/
    qword_905F60 = sub_5AE20(v27); /*0x5ee631*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5ee642*/
    v4 = qword_905F60; /*0x5ee644*/
  }
  if ( FMODAudioEngine_isMusicPlaying(v4, 0) ) /*0x5ee64d*/
  {
    v5 = qword_905F60; /*0x5ee656*/
    if ( !qword_905F60 ) /*0x5ee660*/
    {
      v28 = operator new(0x8A8u); /*0x5ee66c*/
      qword_905F60 = sub_5AE20(v28); /*0x5ee67d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5ee68e*/
      v5 = qword_905F60; /*0x5ee690*/
    }
    v6 = *(_QWORD *)(v5 + 552); /*0x5ee697*/
    if ( v6 ) /*0x5ee6a1*/
      FMOD::ChannelControl::stop(v6); /*0x5ee6a3*/
    sub_3DB60(v5 + 1096); /*0x5ee6b0*/
    sub_3DB60(v5 + 1160); /*0x5ee6bc*/
    sub_3DB60(v5 + 1224); /*0x5ee6c8*/
  }
  else
  {
    v7 = qword_905FD0; /*0x5ee6d2*/
    if ( !qword_905FD0 ) /*0x5ee6dc*/
    {
      v29 = operator new(0x6E8u); /*0x5ee6e8*/
      qword_905FD0 = sub_2723A0(v29); /*0x5ee6f9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5ee70a*/
      v7 = qword_905FD0; /*0x5ee70c*/
    }
    if ( *(_QWORD *)(v7 + 568) ) /*0x5ee713*/
    {
      v8 = a1 - 1016; /*0x5ee721*/
      v9 = (int)(*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 1168LL))(v8, 408); /*0x5ee739*/
      v10 = (int)(*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 1168LL))(v8, 410); /*0x5ee74e*/
      v11 = (int)(*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 1168LL))(v8, 409); /*0x5ee764*/
      v12 = (int)(*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 1168LL))(v8, 411); /*0x5ee77a*/
      v13 = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 1168LL))(v8, 413) != 0.0; /*0x5ee798*/
      v14 = (*(double (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 1168LL))(v8, 406); /*0x5ee7ad*/
      v15 = LODWORD(v14); /*0x5ee7b3*/
      v16 = (int)(*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 1168LL))(v8, 404); /*0x5ee7c7*/
      if ( !qword_905F60 ) /*0x5ee7d4*/
      {
        v30 = operator new(0x8A8u); /*0x5ee7e0*/
        qword_905F60 = sub_5AE20(v30); /*0x5ee7f1*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5ee802*/
      }
      v17 = qword_906070; /*0x5ee811*/
      if ( !qword_906070 ) /*0x5ee81b*/
      {
        v34 = operator new(0x3D0u); /*0x5ee827*/
        qword_906070 = sub_47C350(v34); /*0x5ee838*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x5ee849*/
        v17 = qword_906070; /*0x5ee84b*/
      }
      v18 = (unsigned int)MusicDownloadManager_pathForSong(v17, v26, *(_DWORD *)(a2 + 320)); /*0x5ee863*/
      if ( !qword_905F60 ) /*0x5ee870*/
      {
        v35 = operator new(0x8A8u); /*0x5ee87c*/
        qword_905F60 = sub_5AE20(v35); /*0x5ee88d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5ee89a*/
      }
      FMODAudioEngine_pitchForIdx(v16); /*0x5ee8a7*/
      FMODAudioEngine_loadMusic(v19, v18, v19, v20, v15, v13, 0, 0, 0); /*0x5ee8d2*/
      v21 = qword_905F60; /*0x5ee8d7*/
      if ( !qword_905F60 ) /*0x5ee8e1*/
      {
        v31 = operator new(0x8A8u); /*0x5ee8ed*/
        qword_905F60 = sub_5AE20(v31); /*0x5ee8fe*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5ee90f*/
        v21 = qword_905F60; /*0x5ee911*/
      }
      FMODAudioEngine_setMusicTimeMS(v21, v9, 0, 0); /*0x5ee920*/
      v22 = qword_905F60; /*0x5ee925*/
      if ( !qword_905F60 ) /*0x5ee92f*/
      {
        v32 = operator new(0x8A8u); /*0x5ee93b*/
        qword_905F60 = sub_5AE20(v32); /*0x5ee94c*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5ee95d*/
        v22 = qword_905F60; /*0x5ee960*/
      }
      sub_62100(v22, v9, v10, v11, v12, v13, 0, 0, v25); /*0x5ee982*/
    }
  }
  v23 = qword_906070; /*0x5ee987*/
  if ( !qword_906070 ) /*0x5ee991*/
  {
    v33 = operator new(0x3D0u); /*0x5ee99d*/
    qword_906070 = sub_47C350(v33); /*0x5ee9ae*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x5ee9bf*/
    v23 = qword_906070; /*0x5ee9c1*/
  }
  return MusicDownloadManager_songStateChanged(v23); /*0x5ee9cd*/
}

// [5/8] Address: 0x5eea00
// Method: SetupSongTriggerPopup::onSavePlaybackPos
// Hidden C++ exception states: #wind=4
double __fastcall SetupSongTriggerPopup_onSavePlaybackPos(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int MusicTimeMS; // eax
  __int64 v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  const struct cocos2d::CCPoint *v12; // rax
  __int64 v13; // rax
  double result; // xmm0_8
  unsigned int v15; // edx
  void *v16; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0; /*0x5eea18*/
  v5 = qword_905F60; /*0x5eea1a*/
  if ( !qword_905F60 ) /*0x5eea24*/
  {
    v16 = operator new(0x8A8u); /*0x5eea30*/
    qword_905F60 = sub_5AE20(v16); /*0x5eea3e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5eea4f*/
    v5 = qword_905F60; /*0x5eea51*/
  }
  if ( FMODAudioEngine_isMusicPlaying(v5, 0) ) /*0x5eea5a*/
  {
    v6 = qword_905F60; /*0x5eea63*/
    if ( !qword_905F60 ) /*0x5eea6d*/
    {
      v16 = operator new(0x8A8u); /*0x5eea79*/
      qword_905F60 = sub_5AE20(v16); /*0x5eea87*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5eea98*/
      v6 = qword_905F60; /*0x5eea9a*/
    }
    MusicTimeMS = FMODAudioEngine_getMusicTimeMS(v6); /*0x5eeaa1*/
    goto LABEL_12; /*0x5eeaa6*/
  }
  v8 = qword_905FD0; /*0x5eeaab*/
  if ( !qword_905FD0 ) /*0x5eeab5*/
  {
    v16 = operator new(0x6E8u); /*0x5eeac1*/
    qword_905FD0 = sub_2723A0(v16); /*0x5eeacf*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5eeae0*/
    v8 = qword_905FD0; /*0x5eeae2*/
  }
  v9 = *(__int64 **)(v8 + 568); /*0x5eeae9*/
  if ( v9 ) /*0x5eeaf3*/
  {
    v10 = *(_QWORD *)(a1 + 680); /*0x5eeaf5*/
    if ( v10 ) /*0x5eeaff*/
    {
      v11 = *v9; /*0x5eeb01*/
      v12 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 200LL))(v10); /*0x5eeb07*/
      result = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, v12); /*0x5eeb15*/
      *(float *)&result = (*(float (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _BYTE, _DWORD))(v11 + 1256))( /*0x5eeb36*/
                            v9,
                            v13,
                            0,
                            0,
                            0,
                            0)
                        * 1000.0;
      MusicTimeMS = (int)*(float *)&result; /*0x5eeb3e*/
LABEL_12:
      if ( MusicTimeMS < 0 ) /*0x5eeb44*/
        MusicTimeMS = 0; /*0x5eeb44*/
      v4 = MusicTimeMS; /*0x5eeb47*/
    }
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) ) /*0x5eeb4f*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 1 ) /*0x5eeb69*/
      return result; /*0x5eeb69*/
    v15 = 410; /*0x5eeb6b*/
  }
  else
  {
    v15 = 408; /*0x5eeb56*/
  }
  return SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, v15, (float)v4); /*0x5eeb7f*/
}

// [6/8] Address: 0x5eeba0
// Method: SetupSongTriggerPopup::valueDidChange
// Hidden C++ exception states: #wind=2
void __fastcall SetupSongTriggerPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, float a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // [rsp+68h] [rbp+20h]

  SetupAudioTriggerPopup_valueDidChange(); /*0x5eebbc*/
  if ( a2 == 400 ) /*0x5eebc7*/
  {
    v5 = qword_905F60; /*0x5eebcd*/
    if ( !qword_905F60 ) /*0x5eebd7*/
    {
      v8 = operator new(0x8A8u); /*0x5eebe3*/
      qword_905F60 = sub_5AE20(v8); /*0x5eebf1*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5eec02*/
      v5 = qword_905F60; /*0x5eec04*/
    }
    v6 = *(_QWORD *)(v5 + 552); /*0x5eec0b*/
    if ( v6 ) /*0x5eec15*/
      FMOD::ChannelControl::stop(v6); /*0x5eec17*/
    sub_3DB60(v5 + 1096); /*0x5eec24*/
    sub_3DB60(v5 + 1160); /*0x5eec30*/
    sub_3DB60(v5 + 1224); /*0x5eec3c*/
    SetupTriggerPopup_goToPage((__int64)a1, 0, a3 != 0.0); /*0x5eec5a*/
    LOBYTE(v7) = 1; /*0x5eec62*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 2, v7); /*0x5eec6d*/
    if ( a3 != 0.0 ) /*0x5eec78*/
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 399) ) /*0x5eec86*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 399, 0); /*0x5eec9f*/
      else
        sub_60A5A0(a1, 399); /*0x5eecaa*/
      sub_60ABF0(a1, 399); /*0x5eecba*/
    }
  }
  else if ( a2 == 404 ) /*0x5eecc7*/
  {
    SetupSongTriggerPopup_updateLength(a1); /*0x5eeccc*/
  }
}

// [7/8] Address: 0x5eecf0
// Method: SetupSongTriggerPopup::pageChanged
void __fastcall SetupSongTriggerPopup_pageChanged(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0x1ABu, (float)*(int *)(a1 + 904)); /*0x5eed09*/
  if ( *(_QWORD *)(a1 + 1024) ) /*0x5eed0e*/
  {
    if ( *(_BYTE *)(a1 + 976) || *(int *)(a1 + 904) >= 2 ) /*0x5eed28*/
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, 1, 0); /*0x5eed62*/
    }
    else
    {
      LOBYTE(v2) = 1; /*0x5eed2d*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 1, v2); /*0x5eed38*/
      SongSelectNode_updateWidgetVisibility(*(_QWORD *)(a1 + 1024), v3); /*0x5eed4a*/
    }
  }
}

// [8/8] Address: 0x5eed70
// Method: SetupSongTriggerPopup::onClose
// Hidden C++ exception states: #wind=4
__int64 __fastcall SetupSongTriggerPopup_onClose(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h]
  void *v9; // [rsp+30h] [rbp+8h]
  void *v10; // [rsp+30h] [rbp+8h]

  v2 = qword_905F60; /*0x5eed85*/
  if ( !qword_905F60 ) /*0x5eed8f*/
  {
    v8 = operator new(0x8A8u); /*0x5eed9b*/
    qword_905F60 = sub_5AE20(v8); /*0x5eeda9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5eedba*/
    v2 = qword_905F60; /*0x5eedbc*/
  }
  if ( FMODAudioEngine_isMusicPlaying(v2, 0) ) /*0x5eedc5*/
  {
    v3 = qword_905F60; /*0x5eedce*/
    if ( !qword_905F60 ) /*0x5eedd8*/
    {
      v9 = operator new(0x8A8u); /*0x5eede4*/
      qword_905F60 = sub_5AE20(v9); /*0x5eedf2*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5eee03*/
      v3 = qword_905F60; /*0x5eee05*/
    }
    v4 = *(_QWORD *)(v3 + 552); /*0x5eee0c*/
    if ( v4 ) /*0x5eee16*/
      FMOD::ChannelControl::stop(v4); /*0x5eee18*/
    sub_3DB60(v3 + 1096); /*0x5eee25*/
    sub_3DB60(v3 + 1160); /*0x5eee31*/
    sub_3DB60(v3 + 1224); /*0x5eee3d*/
  }
  v5 = qword_905FD0; /*0x5eee42*/
  if ( !qword_905FD0 ) /*0x5eee4c*/
  {
    v10 = operator new(0x6E8u); /*0x5eee58*/
    qword_905FD0 = sub_2723A0(v10); /*0x5eee66*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5eee77*/
    v5 = qword_905FD0; /*0x5eee79*/
  }
  *(_BYTE *)(*(_QWORD *)(v5 + 568) + 14873LL) = 1; /*0x5eee87*/
  v6 = *(_QWORD *)(a1 + 1024); /*0x5eee8e*/
  if ( *(_BYTE *)(v6 + 349) ) /*0x5eee95*/
    SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0x188u, (float)*(int *)(v6 + 344)); /*0x5eeeb1*/
  return SetupTriggerPopup_onClose(a1); /*0x5eeebc*/
}
