#include <Geode/binding/ArtTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x65e0b0
// Method: ArtTriggerGameObject::getSaveString
__int64 __fastcall ArtTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-288h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-270h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-260h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-238h] BYREF

  *(_QWORD *)&v10 = a2; /*0x65e0da*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65e0e6*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x65e0f8*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x65e10f*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e11e*/
  sub_3C310(v12); /*0x65e12a*/
  if ( *(_DWORD *)(a1 + 1856) ) /*0x65e12f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e13e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e143*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e152*/
    fmt::BasicWriter<char>::operator<<(v13, 533); /*0x65e162*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65e168*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65e16d*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65e17c*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x65e18d*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x65e198*/
  *(_OWORD *)a2 = 0; /*0x65e1a1*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65e1a4*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65e1a8*/
  v8 = -1; /*0x65e1ac*/
  do /*0x65e1b6*/
    ++v8; /*0x65e1b3*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x65e1b6*/
  sub_3C230(a2); /*0x65e1c3*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65e1ce*/
  return a2; /*0x65e1d7*/
}

// [2/3] Address: 0x65e200
// Method: ArtTriggerGameObject::customObjectSetup
int __fastcall ArtTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  const char *v7; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65e218*/
  v6 = *(_QWORD *)a3; /*0x65e21d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4264LL) ) /*0x65e220*/
  {
    v7 = (const char *)(*(_QWORD *)a2 + 17056LL); /*0x65e247*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17080LL) > 0xFu ) /*0x65e253*/
      v7 = *(const char **)v7; /*0x65e255*/
    LODWORD(v6) = atoi(v7); /*0x65e258*/
    *(_DWORD *)(a1 + 1856) = v6; /*0x65e268*/
  }
  else
  {
    *(_DWORD *)(a1 + 1856) = 0; /*0x65e22a*/
  }
  return v6; /*0x65e234*/
}

// [3/3] Address: 0x65e280
// Method: ArtTriggerGameObject::triggerObject
// Hidden C++ exception states: #wind=8
void __fastcall ArtTriggerGameObject_triggerObject(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbp
  int v5; // ecx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // esi
  cocos2d::CCString *v9; // rax
  const char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  cocos2d::CCString *v14; // rax
  const char *CString; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  void (__fastcall *v19)(__int64, __int64); // r9
  __int64 v20; // r8
  int v21; // edi
  __int64 v22; // rbp
  int v23; // ecx
  int v24; // eax
  cocos2d::CCString *v25; // rax
  const char *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  cocos2d::CCString *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rdi
  int v35; // ecx
  int v36; // eax
  cocos2d::CCString *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // [rsp+40h] [rbp+8h]
  void *v41; // [rsp+40h] [rbp+8h]
  void *v42; // [rsp+40h] [rbp+8h]

  switch ( *(_DWORD *)(a1 + 1036) ) /*0x65e2a3*/
  {
    case 0xBD5: /*0x65e2a3*/
      v33 = *(_DWORD *)(a1 + 1856); /*0x65e550*/
      *(_DWORD *)(a2 + 2132) = v33; /*0x65e556*/
      if ( *(_BYTE *)(a2 + 13149) ) /*0x65e55c*/
        return; /*0x65e563*/
      v34 = qword_905FD0; /*0x65e569*/
      if ( !qword_905FD0 ) /*0x65e573*/
      {
        v42 = operator new(0x6E8u); /*0x65e57f*/
        qword_905FD0 = sub_2723A0(v42); /*0x65e58d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x65e59e*/
        v34 = qword_905FD0; /*0x65e5a1*/
      }
      v35 = *(_DWORD *)(v34 + 1012); /*0x65e5a8*/
      if ( v35 == v33 ) /*0x65e5b0*/
      {
        GJBaseGameLayer_createBackground(a2, v33); /*0x65e5b7*/
        GJBaseGameLayer_updateLevelColors((_QWORD *)a2); /*0x65e5bf*/
        return; /*0x65e5c4*/
      }
      v36 = 59; /*0x65e5c6*/
      if ( v33 < 59 ) /*0x65e5cd*/
        v36 = v33; /*0x65e5cd*/
      v8 = 1; /*0x65e5d0*/
      if ( v36 > 1 ) /*0x65e5d7*/
        v8 = v36; /*0x65e5d7*/
      if ( !*(_BYTE *)(v34 + 1032) && v8 != v35 ) /*0x65e5e5*/
      {
        *(_BYTE *)(v34 + 1032) = 1; /*0x65e5e7*/
        v37 = cocos2d::CCString::createWithFormat("game_bg_%02d_001.png", v8); /*0x65e5f7*/
        CString = cocos2d::CCString::getCString(v37); /*0x65e606*/
        v18 = cocos2d::CCTextureCache::sharedTextureCache(v39, v38); /*0x65e609*/
        v19 = GameManager_finishedLoadingBGAsync; /*0x65e60f*/
        v20 = v34; /*0x65e616*/
        goto LABEL_45; /*0x65e616*/
      }
      break;
    case 0xBD6: /*0x65e2a3*/
      v21 = *(_DWORD *)(a1 + 1856); /*0x65e422*/
      *(_DWORD *)(a2 + 2136) = v21; /*0x65e428*/
      if ( !*(_BYTE *)(a2 + 13149) ) /*0x65e42e*/
      {
        v22 = qword_905FD0; /*0x65e43b*/
        if ( !qword_905FD0 ) /*0x65e445*/
        {
          v41 = operator new(0x6E8u); /*0x65e451*/
          qword_905FD0 = sub_2723A0(v41); /*0x65e45f*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x65e470*/
          v22 = qword_905FD0; /*0x65e472*/
        }
        v23 = *(_DWORD *)(v22 + 1016); /*0x65e479*/
        if ( v23 != v21 ) /*0x65e481*/
        {
          v24 = 22; /*0x65e487*/
          if ( v21 < 22 ) /*0x65e48e*/
            v24 = v21; /*0x65e48e*/
          v8 = 1; /*0x65e491*/
          if ( v24 > 1 ) /*0x65e498*/
            v8 = v24; /*0x65e498*/
          if ( !*(_BYTE *)(v22 + 1033) && v8 != v23 ) /*0x65e4aa*/
          {
            *(_BYTE *)(v22 + 1033) = 1; /*0x65e4b0*/
            *(_BYTE *)(v22 + 1035) = 0; /*0x65e4c1*/
            *(_BYTE *)(v22 + 1036) = (unsigned int)(v8 - 8) > 3; /*0x65e4ce*/
            v25 = cocos2d::CCString::createWithFormat("groundSquare_%02d_001.png", v8); /*0x65e4dd*/
            v26 = cocos2d::CCString::getCString(v25); /*0x65e4ec*/
            v29 = cocos2d::CCTextureCache::sharedTextureCache(v28, v27); /*0x65e4ef*/
            cocos2d::CCTextureCache::addImageAsync(v29, v26, v22, sub_27AB70, v8, 0); /*0x65e511*/
            if ( (unsigned int)(v8 - 8) <= 3 ) /*0x65e51a*/
            {
              v30 = cocos2d::CCString::createWithFormat("groundSquare_%02d_2_001.png", v8); /*0x65e529*/
              CString = cocos2d::CCString::getCString(v30); /*0x65e538*/
              v18 = cocos2d::CCTextureCache::sharedTextureCache(v32, v31); /*0x65e53b*/
              v19 = (void (__fastcall *)(__int64, __int64))sub_27ABB0; /*0x65e541*/
              v20 = v22; /*0x65e548*/
              goto LABEL_45; /*0x65e54b*/
            }
          }
        }
      }
      break;
    case 0xBD7: /*0x65e2a3*/
      v3 = *(_DWORD *)(a1 + 1856); /*0x65e2bb*/
      *(_DWORD *)(a2 + 2140) = v3; /*0x65e2c1*/
      if ( *(_BYTE *)(a2 + 13149) ) /*0x65e2c7*/
        return; /*0x65e2ce*/
      v4 = qword_905FD0; /*0x65e2d4*/
      if ( !qword_905FD0 ) /*0x65e2de*/
      {
        v40 = operator new(0x6E8u); /*0x65e2ea*/
        qword_905FD0 = sub_2723A0(v40); /*0x65e2f8*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x65e309*/
        v4 = qword_905FD0; /*0x65e30b*/
      }
      v5 = *(_DWORD *)(v4 + 1020); /*0x65e312*/
      if ( v5 == v3 ) /*0x65e31a*/
      {
        if ( v3 > 0 && !*(_QWORD *)(a2 + 4416) ) /*0x65e324*/
        {
          GJBaseGameLayer_createMiddleground(a2, v3); /*0x65e337*/
          GJBaseGameLayer_updateLevelColors((_QWORD *)a2); /*0x65e33f*/
        }
        return; /*0x65e344*/
      }
      if ( !v3 ) /*0x65e34b*/
      {
        v6 = *(_QWORD *)(a2 + 4416); /*0x65e34d*/
        if ( v6 ) /*0x65e357*/
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 512LL))(v6); /*0x65e360*/
          *(_QWORD *)(a2 + 4416) = 0; /*0x65e366*/
        }
        return; /*0x65e371*/
      }
      v7 = 3; /*0x65e376*/
      if ( v3 < 3 ) /*0x65e37d*/
        v7 = v3; /*0x65e37d*/
      v8 = 1; /*0x65e380*/
      if ( v7 > 1 ) /*0x65e387*/
        v8 = v7; /*0x65e387*/
      if ( !*(_BYTE *)(v4 + 1034) && v8 != v5 ) /*0x65e399*/
      {
        *(_BYTE *)(v4 + 1034) = 1; /*0x65e39f*/
        *(_WORD *)(v4 + 1037) = 0; /*0x65e3a6*/
        v9 = cocos2d::CCString::createWithFormat("fg_%02d_001.png", v8); /*0x65e3b8*/
        v10 = cocos2d::CCString::getCString(v9); /*0x65e3c7*/
        v13 = cocos2d::CCTextureCache::sharedTextureCache(v12, v11); /*0x65e3ca*/
        cocos2d::CCTextureCache::addImageAsync(v13, v10, v4, sub_27A910, v8, 0); /*0x65e3ec*/
        v14 = cocos2d::CCString::createWithFormat("fg_%02d_2_001.png", v8); /*0x65e3fb*/
        CString = cocos2d::CCString::getCString(v14); /*0x65e40a*/
        v18 = cocos2d::CCTextureCache::sharedTextureCache(v17, v16); /*0x65e40d*/
        v19 = (void (__fastcall *)(__int64, __int64))sub_27A950; /*0x65e413*/
        v20 = v4; /*0x65e41a*/
LABEL_45:
        cocos2d::CCTextureCache::addImageAsync(v18, CString, v20, v19, v8, 0); /*0x65e619*/
      }
      break;
    default:
      return; /*0x65e2b5*/
  }
}
