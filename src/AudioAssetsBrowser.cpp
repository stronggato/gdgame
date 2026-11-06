#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/AudioAssetsBrowser.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub LABEL_29;
inline GDStub MusicDownloadManager_getCustomContentURL;
using namespace cocos2d;

// [1/3] Address: 0x983b0
// Method: AudioAssetsBrowser::musicActionFinished
void AudioAssetsBrowser::musicActionFinished(GJMusicAction action)
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCObject *v2; // rcx
  void *v3; // [rsp+40h] [rbp+18h]

  v2 = (cocos2d::CCObject *)qword_906070; /*0x983b9*/
  if ( !qword_906070 ) /*0x983c3*/
  {
    v3 = (_QWORD *)operator new(0x3D0u); /*0x983cf*/
    qword_906070 = sub_47C350(v3); /*0x983dd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x983ee*/
    v2 = (cocos2d::CCObject *)qword_906070; /*0x983f0*/
  }
  if ( *((_QWORD *)v2 + 51) ) /*0x983f7*/
  {
    if ( !*((_QWORD *)v2 + 48) ) /*0x98401*/
      MusicDownloadManager_getCustomContentURL(v2); /*0x9840b*/
    sub_98480(((uintptr_t)((uintptr_t)a1 - 672))); /*0x9841c*/
  }
  else if ( *((_QWORD *)v2 + 48) ) /*0x98421*/
  {
    sub_48B630(); /*0x9843a*/
  }
  else
  {
    MusicDownloadManager_getCustomContentURL(v2); /*0x98430*/
  }
}

// [2/3] Address: 0x98440
// Method: AudioAssetsBrowser::musicActionFailed
void AudioAssetsBrowser::musicActionFailed(GJMusicAction action)
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCNode *v1; // rbx

  v1 = *(cocos2d::CCNode **)(a1 + 80); /*0x98446*/
  (((cocos2d::CCNode*)(v1))->stopActionByTag(0)); /*0x9844f*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)v1 + 40) + 40LL))((_QWORD *)v1 + 40, 0); /*0x98461*/
  { (*(__int64 (__fastcall **)(cocos2d::CCNode *, _QWORD))(*(_QWORD *)v1 + 336LL))(v1, 0); return; }
}

// [3/3] Address: 0x1af090
// Method: AudioAssetsBrowser::init
bool AudioAssetsBrowser::init(std::vector<int>& songIds, std::vector<int>& sfxIds)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(songIds);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbx
  struct cocos2d::CCString *v8; // rax
  void *v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rbx
  struct cocos2d::CCString *v13; // rax
  void *v14; // rcx
  __int64 v15; // rbx
  struct cocos2d::CCString *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  struct cocos2d::CCString *v19; // rax
  void *v21; // [rsp+30h] [rbp-50h]
  void *v22; // [rsp+30h] [rbp-50h]
  void *v23; // [rsp+30h] [rbp-50h]
  void *v24; // [rsp+30h] [rbp-50h]
  void *Src[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  unsigned __int64 v27; // [rsp+50h] [rbp-30h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+68h] [rbp-18h]
  unsigned __int64 v30; // [rsp+70h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1af0ba*/
  v4 = v3; /*0x1af0bd*/
  if ( v3 <= 2 ) /*0x1af0c3*/
  {
    v17 = qword_905FD0; /*0x1af406*/
    if ( !qword_905FD0 ) /*0x1af410*/
    {
      v24 = (_QWORD *)operator new(0x6E8u); /*0x1af41c*/
      qword_905FD0 = sub_2723A0(v24); /*0x1af429*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1af43a*/
      v17 = qword_905FD0; /*0x1af43c*/
    }
    *(_OWORD *)Src   = (uintptr_t)((uintptr_t)(0)); /*0x1af446*/
    v26 = 3; /*0x1af44a*/
    v27 = 15; /*0x1af452*/
    LODWORD(Src[0]) = 6256231; /*0x1af460*/
    sub_43D80(Src, "0005", 4u); /*0x1af483*/
    v18 = *(_QWORD *)(v17 + 432); /*0x1af488*/
    v19 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v4); /*0x1af498*/
    (((cocos2d::CCDictionary*)(v18))->setObject((cocos2d::CCObject*)(v19), (const char*)to_gd_arg(Src))); /*0x1af4a8*/
    if ( v27 > 0xF ) /*0x1af4b7*/
    {
      v14 = Src[0]; /*0x1af4bc*/
      if ( v27 + 1 >= 0x1000 ) /*0x1af4ca*/
      {
        v14 = (void *)*((_QWORD *)Src[0] - 1); /*0x1af4d0*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v14 - 8) > 0x1F ) /*0x1af4df*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1af4f4*/
      }
      goto LABEL_29; /*0x1af4df*/
    }
  }
  else if ( v3 == 3 ) /*0x1af0de*/
  {
    v5 = *(_QWORD *)(a1 + 1568); /*0x1af0e4*/
    v6 = qword_905FD0; /*0x1af0eb*/
    if ( v5 ) /*0x1af0f5*/
    {
      if ( !qword_905FD0 ) /*0x1af0fe*/
      {
        v21 = (_QWORD *)operator new(0x6E8u); /*0x1af10a*/
        qword_905FD0 = sub_2723A0(v21); /*0x1af117*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1af128*/
        v6 = qword_905FD0; /*0x1af12a*/
      }
      *(_OWORD *)Block   = (uintptr_t)((uintptr_t)(0)); /*0x1af134*/
      v29 = 3; /*0x1af138*/
      v30 = 15; /*0x1af140*/
      LODWORD(Block[0]) = 6256231; /*0x1af14e*/
      sub_43D80(Block, "0005", 4u); /*0x1af171*/
      v7 = *(_QWORD *)(v6 + 432); /*0x1af176*/
      v8 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 3); /*0x1af189*/
      (((cocos2d::CCDictionary*)(v7))->setObject((cocos2d::CCObject*)(v8), (const char*)to_gd_arg(Block))); /*0x1af199*/
      if ( v30 > 0xF ) /*0x1af1a8*/
      {
        v9 = Block[0]; /*0x1af1ad*/
        if ( v30 + 1 >= 0x1000 ) /*0x1af1bb*/
        {
          v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x1af1c1*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x1af1d0*/
            invoke_watson(0, 0, 0, 0, 0); /*0x1af1e5*/
        }
// //         j_j_free(v9); /*0x1af1ec*/ // cleaned scalar delete // cleaned scalar delete
      }
      v29 = 0; /*0x1af1f1*/
      v30 = 15; /*0x1af1f9*/
      LOBYTE(Block[0]) = 0; /*0x1af201*/
      v10 = qword_905FD0; /*0x1af205*/
      if ( !qword_905FD0 ) /*0x1af20f*/
      {
        v22 = (_QWORD *)operator new(0x6E8u); /*0x1af21b*/
        qword_905FD0 = sub_2723A0(v22); /*0x1af228*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1af239*/
        v10 = qword_905FD0; /*0x1af23b*/
      }
      v11 = *(_DWORD *)(v5 + 1036); /*0x1af242*/
      *(_OWORD *)Src   = (uintptr_t)((uintptr_t)(0)); /*0x1af24b*/
      v26 = 3; /*0x1af24f*/
      v27 = 15; /*0x1af257*/
      LODWORD(Src[0]) = 6256231; /*0x1af265*/
      sub_43D80(Src, "0006", 4u); /*0x1af288*/
      v12 = *(_QWORD *)(v10 + 432); /*0x1af28d*/
      v13 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v11); /*0x1af29d*/
      (((cocos2d::CCDictionary*)(v12))->setObject((cocos2d::CCObject*)(v13), (const char*)to_gd_arg(Src))); /*0x1af2ad*/
      if ( v27 > 0xF ) /*0x1af2bc*/
      {
        v14 = Src[0]; /*0x1af2c5*/
        if ( v27 + 1 >= 0x1000 ) /*0x1af2d3*/
        {
          v14 = (void *)*((_QWORD *)Src[0] - 1); /*0x1af2dd*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v14 - 8) > 0x1F ) /*0x1af2ec*/
            invoke_watson(0, 0, 0, 0, 0); /*0x1af305*/
        }
LABEL_29:
// //         j_j_free(v14); /*0x1af4fb*/ // cleaned scalar delete // cleaned scalar delete
      }
    }
    else
    {
      if ( !qword_905FD0 ) /*0x1af30f*/
      {
        v23 = (_QWORD *)operator new(0x6E8u); /*0x1af31b*/
        qword_905FD0 = sub_2723A0(v23); /*0x1af328*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1af339*/
        v6 = qword_905FD0; /*0x1af33b*/
      }
      *(_OWORD *)Src   = (uintptr_t)((uintptr_t)(0)); /*0x1af345*/
      v26 = 3; /*0x1af349*/
      v27 = 15; /*0x1af351*/
      LODWORD(Src[0]) = 6256231; /*0x1af35f*/
      sub_43D80(Src, "0005", 4u); /*0x1af382*/
      v15 = *(_QWORD *)(v6 + 432); /*0x1af387*/
      v16 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 0); /*0x1af397*/
      (((cocos2d::CCDictionary*)(v15))->setObject((cocos2d::CCObject*)(v16), (const char*)to_gd_arg(Src))); /*0x1af3a7*/
      if ( v27 > 0xF ) /*0x1af3b6*/
      {
        v14 = Src[0]; /*0x1af3bf*/
        if ( v27 + 1 >= 0x1000 ) /*0x1af3cd*/
        {
          v14 = (void *)*((_QWORD *)Src[0] - 1); /*0x1af3d7*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v14 - 8) > 0x1F ) /*0x1af3e6*/
            invoke_watson(0, 0, 0, 0, 0); /*0x1af3ff*/
        }
        goto LABEL_29; /*0x1af3e6*/
      }
    }
  }
  return sub_1F20D0(a1); /*0x1af508*/
}
