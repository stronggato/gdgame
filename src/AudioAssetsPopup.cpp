#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/AudioAssetsPopup.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub CustomSongWidget_updateMultiAssetInfo;
inline GDStub MusicDownloadManager_removeMusicDownloadDelegate;
inline GDStub UIPOptionsLayer__dtor_UIPOptionsLayer;
using namespace cocos2d;

// [1/3] Address: 0xbbea0
// Method: AudioAssetsPopup::~AudioAssetsPopup
AudioAssetsPopup::~AudioAssetsPopup()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 v4; // rcx
  void *v5; // rax

//   *(_QWORD *)Block  = (uintptr_t)(&AudioAssetsPopup::`vftable'); /*0xbbebb*/ // cleaned vftable
//   *((_QWORD *)Block + 40) = &AudioAssetsPopup::`vftable'; /*0xbbec5*/ // cleaned vftable
//   *((_QWORD *)Block + 41) = &AudioAssetsPopup::`vftable'; /*0xbbed3*/ // cleaned vftable
//   *((_QWORD *)Block + 42) = &AudioAssetsPopup::`vftable'; /*0xbbee1*/ // cleaned vftable
//   *((_QWORD *)Block + 43) = &AudioAssetsPopup::`vftable'; /*0xbbeef*/ // cleaned vftable
//   *((_QWORD *)Block + 44) = &AudioAssetsPopup::`vftable'; /*0xbbefd*/ // cleaned vftable
//   *((_QWORD *)Block + 51) = &AudioAssetsPopup::`vftable'; /*0xbbf0b*/ // cleaned vftable
//   *((_QWORD *)Block + 54) = &AudioAssetsPopup::`vftable'; /*0xbbf19*/ // cleaned vftable
//   *((_QWORD *)Block + 68) = &AudioAssetsPopup::`vftable'; /*0xbbf27*/ // cleaned vftable
//   *((_QWORD *)Block + 83) = &AudioAssetsPopup::`vftable'; /*0xbbf35*/ // cleaned vftable
//   *((_QWORD *)Block + 84) = &AudioAssetsPopup::`vftable'; /*0xbbf43*/ // cleaned vftable
//   *((_QWORD *)Block + 125) = &AudioAssetsPopup::`vftable'; /*0xbbf51*/ // cleaned vftable
  v4 = qword_906070; /*0xbbf58*/
  if ( !qword_906070 ) /*0xbbf62*/
  {
    v5 = (_QWORD *)operator new(0x3D0u); /*0xbbf69*/
    qword_906070 = sub_47C350(v5); /*0xbbf76*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0xbbf87*/
    v4 = qword_906070; /*0xbbf8a*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v4, (__int64)Block + 1000); /*0xbbf98*/
//   UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0xbbfa0*/ // cleaned dtor call
//   if ( (a2 & 1) != 0 ) /*0xbbfaa*/
//     j_j_free(Block); /*0xbbfb4*/ // cleaned scalar delete
  return; /*0xbbfbc*/
}

// [2/3] Address: 0xbc5b0
// Method: AudioAssetsPopup::musicActionFinished
void AudioAssetsPopup::musicActionFinished(GJMusicAction p0)
{
  __int64 a1 = (__int64)this;
  int a2 = (int)to_gd_arg(p0);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rcx
  double result; // xmm0_8
  void *v8; // [rsp+40h] [rbp+18h]
  void *v9; // [rsp+40h] [rbp+18h]

  if ( a2 == 8 && *(_QWORD *)(a1 + 8) ) /*0xbc5c6*/
  {
    v3 = qword_906070; /*0xbc5d1*/
    if ( !qword_906070 ) /*0xbc5db*/
    {
      v8 = (_QWORD *)operator new(0x3D0u); /*0xbc5e7*/
      qword_906070 = sub_47C350(v8); /*0xbc5f5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0xbc602*/
      v3 = qword_906070; /*0xbc605*/
    }
    v4 = v3; /*0xbc60c*/
    if ( !v3 ) /*0xbc612*/
    {
      v9 = (_QWORD *)operator new(0x3D0u); /*0xbc61e*/
      qword_906070 = sub_47C350(v9); /*0xbc62c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0xbc63d*/
      v3 = qword_906070; /*0xbc63f*/
    }
    v5 = *(_DWORD *)(v4 + 404); /*0xbc646*/
    v6 = *(_QWORD *)(a1 + 8); /*0xbc64c*/
    *(_DWORD *)(v6 + 608) = *(_DWORD *)(v3 + 400); /*0xbc656*/
    *(_DWORD *)(v6 + 612) = v5; /*0xbc65c*/
    { CustomSongWidget_updateMultiAssetInfo(v6, 0); return; } /*0xbc664*/
  }
  { result; return; } /*0xbc673*/
}

// [3/3] Address: 0xbc680
// Method: AudioAssetsPopup::onClose
void AudioAssetsPopup::onClose(cocos2d::CCObject* sender)
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h]

  v2 = a1 + 1000; /*0xbc68d*/
  if ( !a1 ) /*0xbc699*/
    v2 = 0; /*0xbc699*/
  v3 = qword_906070; /*0xbc69d*/
  if ( !qword_906070 ) /*0xbc6a7*/
  {
    v6 = (_QWORD *)operator new(0x3D0u); /*0xbc6b3*/
    qword_906070 = sub_47C350(v6); /*0xbc6c1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0xbc6d2*/
    v3 = qword_906070; /*0xbc6d5*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v3, v2); /*0xbc6df*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0xbc6ec*/
  LOBYTE(v4) = 1; /*0xbc6f5*/
  { (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4); return; }
}
