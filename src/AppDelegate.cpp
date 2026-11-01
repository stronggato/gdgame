#include <Geode/binding/AppDelegate.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x97080
// Method: AppDelegate::applicationDidFinishLaunching
// Hidden C++ exception states: #wind=7
char __fastcall AppDelegate_applicationDidFinishLaunching(_BYTE *a1, __int64 a2, struct cocos2d::timezone *a3)
{
  __int64 v4; // rcx
  cocos2d::CCDirector *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  bool GameVariable; // bl
  __int64 v16; // rcx
  cocos2d::CCApplication *v17; // rax
  __int64 v18; // rcx
  bool v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rcx
  bool v22; // bl
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct cocos2d::CCScene *v31; // rax
  __int128 v33; // [rsp+40h] [rbp-38h] BYREF
  __int64 v34; // [rsp+50h] [rbp-28h]
  __int64 v35; // [rsp+58h] [rbp-20h]
  int v36; // [rsp+80h] [rbp+8h] BYREF
  int v37; // [rsp+84h] [rbp+Ch]
  __int128 *v38; // [rsp+88h] [rbp+10h]

  a1[225] = 0; /*0x9708f*/
  cocos2d::gettimeofday((cocos2d *)&v36, 0, a3); /*0x970a0*/
  srand(v37 * v36); /*0x970b5*/
  v5 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v4); /*0x970c1*/
  v38 = &v33; /*0x970c9*/
  v33 = 0; /*0x970d4*/
  v34 = 0; /*0x970db*/
  v35 = 0; /*0x970e0*/
  *(_QWORD *)&v33 = sub_3C460(48); /*0x970ef*/
  v34 = 36; /*0x970f4*/
  v35 = 47; /*0x970fd*/
  strcpy((char *)v33, "/data/data/com.robtopx.geometryjump/"); /*0x9710d*/
  v6 = cocos2d::CCFileUtils::sharedFileUtils(); /*0x97128*/
  cocos2d::CCFileUtils::setAndroidPath(v6, &v33); /*0x97136*/
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 112LL))(a1); /*0x97142*/
  cocos2d::CCDirector::setProjection(v5, 0); /*0x9714a*/
  CCContentManager::sharedManager(); /*0x97150*/
  v7 = GJObjectDecoder_sharedDecoder(); /*0x9715b*/
  v8 = ObjectDecoder::sharedDecoder(); /*0x9715e*/
  v10 = v7 + 320; /*0x97164*/
  if ( !v7 ) /*0x9716e*/
    v10 = 0; /*0x9716e*/
  *(_QWORD *)(v8 + 320) = v10; /*0x97172*/
  if ( !qword_905FD0 ) /*0x97180*/
  {
    v38 = (__int128 *)operator new(0x6E8u); /*0x9718c*/
    qword_905FD0 = sub_2723A0(v38); /*0x9719d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x971ae*/
  }
  sub_466AC0(v10, v9); /*0x971b0*/
  v13 = sub_466AC0(v12, v11); /*0x971b5*/
  sub_468B50(v13); /*0x971bd*/
  v14 = qword_905FD0; /*0x971c2*/
  if ( !qword_905FD0 ) /*0x971cc*/
  {
    v38 = (__int128 *)operator new(0x6E8u); /*0x971d8*/
    qword_905FD0 = sub_2723A0(v38); /*0x971e9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x971fa*/
    v14 = qword_905FD0; /*0x971fc*/
    if ( !qword_905FD0 ) /*0x97206*/
    {
      v38 = (__int128 *)operator new(0x6E8u); /*0x97212*/
      qword_905FD0 = sub_2723A0(v38); /*0x97223*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x97234*/
      v14 = qword_905FD0; /*0x97236*/
    }
  }
  GameVariable = GameManager_getGameVariable(v14, "0030"); /*0x97249*/
  v17 = (cocos2d::CCApplication *)cocos2d::CCApplication::sharedApplication(v16); /*0x9724c*/
  cocos2d::CCApplication::toggleVerticalSync(v17, GameVariable); /*0x97258*/
  v18 = qword_905FD0; /*0x9725e*/
  if ( !qword_905FD0 ) /*0x97268*/
  {
    v38 = (__int128 *)operator new(0x6E8u); /*0x97274*/
    qword_905FD0 = sub_2723A0(v38); /*0x97285*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x97296*/
    v18 = qword_905FD0; /*0x97298*/
  }
  v19 = GameManager_getGameVariable(v18, "0032"); /*0x972ab*/
  *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v20) + 211) = v19; /*0x972b4*/
  v21 = qword_905FD0; /*0x972ba*/
  if ( !qword_905FD0 ) /*0x972c4*/
  {
    v38 = (__int128 *)operator new(0x6E8u); /*0x972d0*/
    qword_905FD0 = sub_2723A0(v38); /*0x972e1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x972f2*/
    v21 = qword_905FD0; /*0x972f4*/
  }
  v22 = GameManager_getGameVariable(v21, "0023"); /*0x97307*/
  *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v23) + 212) = v22; /*0x97310*/
  v25 = qword_905FD0; /*0x97316*/
  if ( !qword_905FD0 ) /*0x97320*/
  {
    v38 = (__int128 *)operator new(0x6E8u); /*0x9732c*/
    qword_905FD0 = sub_2723A0(v38); /*0x9733d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9734e*/
    v25 = qword_905FD0; /*0x97350*/
  }
  v26 = cocos2d::CCDirector::sharedDirector(v24); /*0x97357*/
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 112LL))(v26); /*0x97367*/
  cocos2d::CCScheduler::scheduleSelector(v27, sub_284FDC, v25); /*0x9738c*/
  a1[244] = 0; /*0x97392*/
  cocos2d::CCDirector::setDepthTest(v5, 0); /*0x9739e*/
  (*(void (__fastcall **)(cocos2d::CCDirector *))(*(_QWORD *)v5 + 80LL))(v5); /*0x973b2*/
  *((_BYTE *)v5 + 217) = 1; /*0x973b5*/
  a1[242] = 0; /*0x973bc*/
  v31 = (struct cocos2d::CCScene *)LoadingLayer_scene(0, v28, v29, v30); /*0x973c5*/
  cocos2d::CCDirector::runWithScene(v5, v31); /*0x973d0*/
  return 1; /*0x973d8*/
}

// [2/3] Address: 0x97880
// Method: AppDelegate::pauseGame
// Hidden C++ exception states: #wind=3
void __fastcall AppDelegate_pauseGame(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h]
  void *v6; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x9788f*/
  if ( v1 && *(_DWORD *)(v1 + 28) == 5 ) /*0x978a3*/
  {
    v2 = qword_905FD0; /*0x978a9*/
    if ( !qword_905FD0 ) /*0x978b3*/
    {
      v5 = operator new(0x6E8u); /*0x978bf*/
      qword_905FD0 = sub_2723A0(v5); /*0x978cd*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x978de*/
      v2 = qword_905FD0; /*0x978e0*/
    }
    v3 = *(_QWORD *)(v2 + 560); /*0x978e7*/
    if ( v3 && !*(_BYTE *)(v3 + 15381) && !*(_BYTE *)(cocos2d::CCApplication::sharedApplication(v1) + 225) ) /*0x97902*/
    {
      v4 = qword_905FD0; /*0x9790b*/
      if ( !qword_905FD0 ) /*0x97915*/
      {
        v6 = operator new(0x6E8u); /*0x97921*/
        qword_905FD0 = sub_2723A0(v6); /*0x9792f*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x97940*/
        v4 = qword_905FD0; /*0x97942*/
      }
      PlayLayer_pauseGame(*(_BYTE **)(v4 + 560), 1); /*0x97956*/
    }
  }
}

// [3/3] Address: 0x97960
// Method: AppDelegate::trySaveGame
// Hidden C++ exception states: #wind=2
__int64 __fastcall AppDelegate_trySaveGame(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // [rsp+20h] [rbp-28h]
  void *v18; // [rsp+20h] [rbp-28h]
  struct __timeb64 Time; // [rsp+28h] [rbp-20h] BYREF

  if ( a2 ) /*0x9798b*/
    *(_QWORD *)(a1 + 248) = 0; /*0x9798d*/
  if ( *(double *)(a1 + 248) == 0.0 /*0x979ed*/
    || (ftime64(&Time),
        result = Time.millitm,
        (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time) - *(double *)(a1 + 248) >= 10.0) )
  {
    if ( *(_BYTE *)(a1 + 240) ) /*0x979f3*/
    {
      v5 = qword_905FD0; /*0x97a00*/
      if ( !qword_905FD0 ) /*0x97a0a*/
      {
        v17 = operator new(0x6E8u); /*0x97a16*/
        qword_905FD0 = sub_2723A0(v17); /*0x97a24*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x97a35*/
        v5 = qword_905FD0; /*0x97a37*/
      }
      v6 = sub_763C0(v5, a2 ^ 1u); /*0x97a4a*/
      *(_BYTE *)(sub_466AC0(v8, v7) + 672) = a2 ^ 1; /*0x97a59*/
      v11 = sub_466AC0(v10, v9); /*0x97a5f*/
      if ( (unsigned __int8)sub_763C0(v11, a2 ^ 1u) || v6 ) /*0x97a76*/
      {
        ftime64(&Time); /*0x97a7d*/
        *(double *)(a1 + 248) = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x97aa6*/
      }
      if ( a2 ) /*0x97ab1*/
      {
        v12 = qword_905FD0; /*0x97ab3*/
        if ( !qword_905FD0 ) /*0x97abd*/
        {
          v18 = operator new(0x6E8u); /*0x97ac9*/
          qword_905FD0 = sub_2723A0(v18); /*0x97ad7*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x97ae8*/
          v12 = qword_905FD0; /*0x97aea*/
        }
        PlayerObject_fadeOutStreak2(v12, 30.0); /*0x97af9*/
        v15 = sub_466AC0(v14, v13); /*0x97afe*/
        PlayerObject_fadeOutStreak2(v15, 30.0); /*0x97b0e*/
      }
    }
    v16 = cocos2d::CCApplication::sharedApplication(a1); /*0x97b13*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 64LL))(v16); /*0x97b23*/
  }
  return result; /*0x97b25*/
}
