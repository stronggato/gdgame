#include <Geode/binding/LoadingLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x464e30
// Method: LoadingLayer::scene
// Hidden C++ exception states: #wind=1
__int64 __fastcall LoadingLayer_scene(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 v5; // rsi
  cocos2d::CCLayer *v6; // rdi

  v4 = a1; /*0x464e44*/
  v5 = cocos2d::CCScene::create(a1, a2, a3, a4); /*0x464e4d*/
  v6 = (cocos2d::CCLayer *)operator new(0x1C8u); /*0x464e5a*/
  cocos2d::CCLayer::CCLayer(v6); /*0x464e65*/
  *(_QWORD *)v6 = &LoadingLayer::`vftable'; /*0x464e72*/
  *((_QWORD *)v6 + 40) = &LoadingLayer::`vftable'; /*0x464e7c*/
  *((_QWORD *)v6 + 41) = &LoadingLayer::`vftable'; /*0x464e8a*/
  *((_QWORD *)v6 + 42) = &LoadingLayer::`vftable'; /*0x464e98*/
  *((_QWORD *)v6 + 43) = &LoadingLayer::`vftable'; /*0x464ea6*/
  *((_QWORD *)v6 + 44) = &LoadingLayer::`vftable'; /*0x464eb4*/
  *((_WORD *)v6 + 204) = 0; /*0x464ebb*/
  *((_DWORD *)v6 + 103) = 0; /*0x464ec6*/
  *((_QWORD *)v6 + 52) = 0; /*0x464ecc*/
  *((_QWORD *)v6 + 53) = 0; /*0x464ed3*/
  *((_QWORD *)v6 + 54) = 0; /*0x464eda*/
  *((_QWORD *)v6 + 55) = 0; /*0x464ee1*/
  *((_BYTE *)v6 + 448) = 0; /*0x464ee8*/
  if ( (unsigned __int8)LoadingLayer_init(v6, v4) ) /*0x464ef5*/
  {
    cocos2d::CCObject::autorelease(v6); /*0x464f01*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x464f11*/
    v6 = 0; /*0x464f14*/
  }
  (*(void (__fastcall **)(__int64, cocos2d::CCLayer *))(*(_QWORD *)v5 + 464LL))(v5, v6); /*0x464f20*/
  return v5; /*0x464f29*/
}

// [4/4] Address: 0x466340
// Method: LoadingLayer::getLoadingString
const char *__fastcall LoadingLayer_getLoadingString(__int64 a1)
{
  const char *result; // rax

  if ( *(_BYTE *)(a1 + 448) ) /*0x466344*/
    return "Loading resources"; /*0x46634d*/
  switch ( rand() % 100 )
  {
    case 1:
      result = "Listen to the music to help time your jumps"; /*0x46639d*/
      break; /*0x4663a8*/
    case 2:
      result = "Back for more are ya?"; /*0x4663a9*/
      break; /*0x4663b4*/
    case 3:
      result = "Use practice mode to learn the layout of a level"; /*0x4663b5*/
      break; /*0x4663c0*/
    case 4:
      result = "If at first you don't succeed, try, try again..."; /*0x4663c1*/
      break; /*0x4663cc*/
    case 5:
      result = "Customize your character's icon and color!"; /*0x4663cd*/
      break; /*0x4663d8*/
    case 6:
      result = "You can download all songs from the level select page!"; /*0x4663d9*/
      break; /*0x4663e4*/
    case 7:
      result = "Spikes are not your friends, don't forget to jump"; /*0x4663e5*/
      break; /*0x4663f0*/
    case 8:
      result = "Build your own levels using the level editor"; /*0x4663f1*/
      break; /*0x4663fc*/
    case 9:
      result = "Go online to play other players levels!"; /*0x4663fd*/
      break; /*0x466408*/
    case 10:
      result = "Can you beat them all?"; /*0x466409*/
      break; /*0x466414*/
    case 11:
      result = "Here be dragons..."; /*0x466415*/
      break; /*0x466420*/
    case 12:
      result = "Pro tip: Don't crash";
      break; /*0x46642c*/
    case 13:
      result = "Hold down to keep jumping"; /*0x46642d*/
      break; /*0x466438*/
    case 14:
      result = "The spikes whisper to me..."; /*0x466439*/
      break; /*0x466444*/
    case 15:
      result = "Looking for pixels"; /*0x466445*/
      break; /*0x466450*/
    case 16:
      result = "Loading awesome soundtracks..."; /*0x466451*/
      break; /*0x46645c*/
    case 17:
      result = "What if the spikes are the good guys?"; /*0x46645d*/
      break; /*0x466468*/
    case 18:
      result = "Pro tip: Jump";
      break; /*0x466474*/
    case 19:
      result = "Does anyone even read this?"; /*0x466475*/
      break; /*0x466480*/
    case 20:
      result = "Collecting scrap metal"; /*0x466481*/
      break; /*0x46648c*/
    case 21:
      result = "Waiting for planets to align"; /*0x46648d*/
      break; /*0x466498*/
    case 22:
      result = "Starting the flux capacitor"; /*0x466499*/
      break; /*0x4664a4*/
    case 23:
      result = "Wandering around aimlessly"; /*0x4664a5*/
      break; /*0x4664b0*/
    case 24:
      result = "Where did I put that coin..."; /*0x4664b1*/
      break; /*0x4664bc*/
    case 25:
      result = "Loading the progressbar"; /*0x4664bd*/
      break; /*0x4664c8*/
    case 26:
      result = "Calculating chance of success"; /*0x4664c9*/
      break; /*0x4664d4*/
    case 27:
      result = "Hiding secrets"; /*0x4664d5*/
      break; /*0x4664e0*/
    case 28:
      result = "Drawing pretty pictures"; /*0x4664e1*/
      break; /*0x4664ec*/
    case 29:
      result = "Programmer is sleeping, please wait"; /*0x4664ed*/
      break; /*0x4664f8*/
    case 30:
      result = "RobTop is Love, RobTop is Life"; /*0x4664f9*/
      break; /*0x466504*/
    case 31:
      result = "Play, Crash, Rage, Quit, Repeat"; /*0x466505*/
      break; /*0x466510*/
    case 32:
      result = "Only one button required to crash"; /*0x466511*/
      break; /*0x46651c*/
    case 33:
      result = "Such wow, very amaze."; /*0x46651d*/
      break; /*0x466528*/
    case 34:
      result = "Fus Ro DASH!"; /*0x466529*/
      break; /*0x466534*/
    case 35:
      result = "Loading Rage Cannon"; /*0x466535*/
      break; /*0x466540*/
    case 36:
      result = "Counting to 1337"; /*0x466541*/
      break; /*0x46654c*/
    case 37:
      result = "It's all in the timing"; /*0x46654d*/
      break; /*0x466558*/
    case 38:
      result = "Fake spikes are fake"; /*0x466559*/
      break; /*0x466564*/
    case 39:
      result = "Spikes... OF DOOM!"; /*0x466565*/
      break; /*0x466570*/
    case 40:
      result = "Why don't you go outside?"; /*0x466571*/
      break; /*0x46657c*/
    case 41:
      result = "Loading will be finished... soon"; /*0x46657d*/
      break; /*0x466588*/
    case 42:
      result = "This seems like a good\nplace to hide a secret..."; /*0x466589*/
      break; /*0x466594*/
    case 43:
      result = "The Vault Keeper's name is 'Spooky'..."; /*0x466595*/
      break; /*0x4665a0*/
    case 44:
      result = "Hope the big guy doesn't wake up..."; /*0x4665a1*/
      break; /*0x4665ac*/
    case 45:
      result = "Shhhh! You're gonna wake the big one!"; /*0x4665ad*/
      break; /*0x4665b8*/
    case 46:
      result = "I have been expecting you."; /*0x4665b9*/
      break; /*0x4665c4*/
    case 47:
      result = "A wild RubRub appeared!"; /*0x4665c5*/
      break; /*0x4665d0*/
    case 48:
      result = "So many secrets..."; /*0x4665d1*/
      break; /*0x4665dc*/
    case 49:
      result = "Hiding rocket launcher"; /*0x4665dd*/
      break; /*0x4665e8*/
    case 50:
      result = "It's Over 9000!"; /*0x4665e9*/
      break; /*0x4665f4*/
    case 51:
      result = "Programming amazing AI"; /*0x4665f5*/
      break; /*0x466600*/
    case 52:
      result = "Hiding secret vault"; /*0x466601*/
      break; /*0x46660c*/
    case 53:
      result = "Spooky doesn't get out much"; /*0x46660d*/
      break; /*0x466618*/
    case 54:
      result = "RubRub was here"; /*0x466619*/
      break; /*0x466624*/
    case 55:
      result = "Warp Speed"; /*0x466625*/
      break; /*0x466630*/
    case 56:
      result = "So, what's up?"; /*0x466631*/
      break; /*0x46663c*/
    case 57:
      result = "Hold on, reading the manual"; /*0x46663d*/
      break; /*0x466648*/
    case 58:
      result = "I don't know how this works..."; /*0x466649*/
      break; /*0x466654*/
    case 59:
      result = "Why u have to be mad?"; /*0x466655*/
      break; /*0x466660*/
    case 60:
      result = "It is only game..."; /*0x466661*/
      break; /*0x46666c*/
    case 61:
      result = "What's a Ninja Muffin?"; /*0x46666d*/
      break; /*0x466678*/
    case 62:
      result = "Update 2.3 coming soon"; /*0x466679*/
      break; /*0x466684*/
    case 63:
      result = "Why are you back? Just to suffer?"; /*0x466685*/
      break; /*0x466690*/
    case 64:
      result = "I am porfesional progarmer"; /*0x466691*/
      break; /*0x46669c*/
    case 65:
      result = "Welcome to Robert Games"; /*0x46669d*/
      break; /*0x4666a8*/
    case 66:
      result = "Winner of the Fastest Update award"; /*0x4666a9*/
      break; /*0x4666b4*/
    case 67:
      result = "You got something to eat?"; /*0x4666b5*/
      break; /*0x4666c0*/
    case 68:
      result = "Time to crash at 96%"; /*0x4666c1*/
      break; /*0x4666cc*/
    case 69:
      result = "Most relaxing game ever made"; /*0x4666cd*/
      break; /*0x4666d8*/
    case 70:
      result = "Now with more colors!"; /*0x4666d9*/
      break; /*0x4666e4*/
    case 71:
      result = "Troll Headquarters"; /*0x4666e5*/
      break; /*0x4666f0*/
    case 72:
      result = "Welcome to the friendliest place on earth"; /*0x4666f1*/
      break; /*0x4666fc*/
    case 73:
      result = "Loading Shape Jumper"; /*0x4666fd*/
      break; /*0x466708*/
    case 74:
      result = "Made by RobTroll"; /*0x466709*/
      break; /*0x466714*/
    case 75:
      result = "Why can't you just be nice"; /*0x466715*/
      break; /*0x466720*/
    case 76:
      result = "Loading the loading screen"; /*0x466721*/
      break; /*0x46672c*/
    case 77:
      result = "Get ready for big fail"; /*0x46672d*/
      break; /*0x466738*/
    case 78:
      result = "RTX OFF"; /*0x466739*/
      break; /*0x466744*/
    case 79:
      result = "It's Rob Toppin Time!"; /*0x466745*/
      break; /*0x466750*/
    case 80:
      result = "It's you again. I can smell it."; /*0x466751*/
      break; /*0x46675c*/
    case 81:
      result = "Eat. Sleep. Dash. Repeat."; /*0x46675d*/
      break; /*0x466768*/
    case 82:
      result = "Impossible geometry!"; /*0x466769*/
      break; /*0x466774*/
    case 83:
      result = "Breaking physics..."; /*0x466775*/
      break; /*0x466780*/
    case 84:
      result = "Trying to find more FPS"; /*0x466781*/
      break; /*0x46678c*/
    case 85:
      result = "Stay calm, or panic. Whatever you prefer."; /*0x46678d*/
      break; /*0x466798*/
    case 86:
      result = "It's about time..."; /*0x466799*/
      break; /*0x4667a4*/
    case 87:
      result = "Loading done. Just waiting."; /*0x4667a5*/
      break; /*0x4667b0*/
    case 88:
      result = "Gathering pixels..."; /*0x4667b1*/
      break; /*0x4667bc*/
    case 89:
      result = "At the end of the day, it is night."; /*0x4667bd*/
      break; /*0x4667c8*/
    case 90:
      result = "You waited how many years!?"; /*0x4667c9*/
      break; /*0x4667d4*/
    case 91:
      result = "50% of the time, you crash, everytime."; /*0x4667d5*/
      break; /*0x4667e0*/
    case 92:
      result = "Dont Dash. Open Inside."; /*0x4667e1*/
      break; /*0x4667ec*/
    case 93:
      result = "Fixing bugs, hold on."; /*0x4667ed*/
      break; /*0x4667f8*/
    case 94:
      result = "Adding bugs, hold on."; /*0x4667f9*/
      break; /*0x466804*/
    case 95:
      result = "What are these physics..."; /*0x466805*/
      break; /*0x466810*/
    case 96:
      result = "Loading what, exactly?"; /*0x466811*/
      break; /*0x46681c*/
    case 97:
      result = "Dashing to victory!"; /*0x46681d*/
      break; /*0x466828*/
    case 98:
      result = "I'm something of a programmer myself."; /*0x466829*/
      break; /*0x466834*/
    case 99:
      result = "You know what? I don't know..."; /*0x466835*/
      break; /*0x466840*/
    default:
      result = "Unlock new icons and colors by completing achievements!"; /*0x466841*/
      break; /*0x466841*/
  }
  return result; /*0x466354*/
}

// Address: 0x464f40
// Method: LoadingLayer::init
// Hidden C++ exception states: #wind=6
bool __fastcall LoadingLayer_init(__int64 a1, char a2)
{
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  cocos2d::CCTextureCache *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  cocos2d::CCSpriteFrameCache *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  struct cocos2d::CCSprite *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  cocos2d::CCDirector *v23; // rax
  struct cocos2d::CCSprite *v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rax
  struct cocos2d::CCSprite *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rax
  struct cocos2d::CCSprite *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  const char *LoadingString; // rax
  struct cocos2d::CCLabelBMFont *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  const char *v43; // rax
  __int64 v44; // r8
  const struct cocos2d::CCPoint *v45; // rax
  char *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 v51; // rbx
  float *v52; // rsi
  struct cocos2d::CCSprite *v53; // rax
  cocos2d::CCTexture2D *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rbx
  float v62; // xmm6_4
  float *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 (__fastcall *v67)(__int64); // rdi
  __int64 v68; // rbx
  struct cocos2d::CCFiniteTimeAction *v69; // rax
  struct cocos2d::CCAction *v70; // rbx
  cocos2d::CCActionManager *v71; // rax
  void *v72; // [rsp+40h] [rbp-59h] BYREF
  float v73; // [rsp+48h] [rbp-51h] BYREF
  float v74; // [rsp+4Ch] [rbp-4Dh]
  __int128 *v75; // [rsp+50h] [rbp-49h] BYREF
  __int16 v76; // [rsp+58h] [rbp-41h]
  __int16 v77; // [rsp+5Ch] [rbp-3Dh] BYREF
  char v78; // [rsp+5Eh] [rbp-3Bh]
  __int128 v79; // [rsp+60h] [rbp-39h] BYREF
  __int64 v80; // [rsp+70h] [rbp-29h]
  __int64 v81; // [rsp+78h] [rbp-21h]
  _DWORD v82[4]; // [rsp+80h] [rbp-19h] BYREF

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1);
  if ( result )
  {
    *(_BYTE *)(a1 + 448) = a2;
    *(_BYTE *)(cocos2d::CCDirector::sharedDirector(v5) + 217) = 1;
    cocos2d::CCTexture2D::setDefaultAlphaPixelFormat(0);
    if ( !*(_BYTE *)(a1 + 448) )
    {
      if ( !qword_905F60 )
      {
        v72 = operator new(0x8A8u);
        qword_905F60 = sub_5AE20(v72);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
      }
      sub_5B750();
    }
    v8 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v72 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v72);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v8 = qword_905FD0;
    }
    if ( *(_BYTE *)(v8 + 1084) )
    {
      *(_BYTE *)(v8 + 1084) = 0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v72 = operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v72);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      }
      sub_228CE0();
    }
    v9 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v7, v6);
    cocos2d::CCTextureCache::addImage(v9, "GJ_LaunchSheet.png", 0);
    v12 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v11, v10);
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v12, "GJ_LaunchSheet.plist");
    v14 = cocos2d::CCDirector::sharedDirector(v13);
    cocos2d::CCDirector::getWinSize(v14, &v73);
    v15 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v72 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v72);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v15 = qword_905FD0;
    }
    GameManager_loadBackground(v15, 1);
    v16 = cocos2d::CCString::createWithFormat("game_bg_%02d_001.png", 1);
    CString = cocos2d::CCString::getCString(v16);
    v18 = cocos2d::CCSprite::create(CString);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v18);
    v19 = *(_QWORD *)v18;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v72, v73 * 0.5, v74 * 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v19 + 184))(v18, v20);
    cocos2d::CCApplication::sharedApplication(v21);
    v23 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v22);
    cocos2d::CCDirector::getScreenScaleFactorMax(v23);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v18 + 160LL))(v18);
    v76 = 26112;
    v77 = 26112;
    v78 = -1;
    (**((void (__fastcall ***)(__int64, __int16 *))v18 + 40))((__int64)v18 + 320, &v77);
    v24 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_logo_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v24);
    v25 = *(_QWORD *)v24;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v72, v73 * 0.5, (float)(v74 * 0.5) + 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v25 + 184))(v24, v26);
    v27 = cocos2d::CCSprite::createWithSpriteFrameName("RobTopLogoBig_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v27);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, 0.0, 80.0);
    v29 = v28;
    v30 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v24 + 200LL))(v24);
    cocos2d::CCPoint::operator+(v30, &v72, v29);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v27 + 184LL))(v27, &v72);
    *(_BYTE *)(a1 + 409) = 1;
    *(_DWORD *)(a1 + 412) = 0;
    v31 = cocos2d::CCSprite::createWithSpriteFrameName("cocos2DxLogo.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v31);
    v32 = *(_QWORD *)v31;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, v73 - 34.0, 13.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v32 + 184))(v31, v33);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 160LL))(v31);
    v34 = cocos2d::CCSprite::createWithSpriteFrameName("fmodLogo.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v34);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, 0.0, 20.0);
    v36 = v35;
    v37 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 200LL))(v31);
    cocos2d::CCPoint::operator+(v37, &v72, v36);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v34 + 184LL))(v34, &v72);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v34 + 160LL))(v34);
    (**((void (__fastcall ***)(__int64, void *))v34 + 40))((__int64)v34 + 320, &unk_6FF4B0);
    LoadingString = LoadingLayer_getLoadingString(a1);
    v39 = cocos2d::CCLabelBMFont::create(LoadingString, "goldFont.fnt");
    *(_QWORD *)(a1 + 416) = v39;
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v39);
    v40 = **(_QWORD **)(a1 + 416);
    v41 = *(_QWORD *)(a1 + 416);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, v73 * 0.5, (float)(v74 * 0.5) - 70.0);
    (*(void (__fastcall **)(__int64, __int64))(v40 + 184))(v41, v42);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 160LL))(*(_QWORD *)(a1 + 416));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 416) + 336LL))(*(_QWORD *)(a1 + 416), 0);
    v75 = &v79;
    v43 = LoadingLayer_getLoadingString(a1);
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v44 = -1;
    do
      ++v44;
    while ( v43[v44] );
    sub_3C230(&v79);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v72, 0.5, 0.5);
    v46 = TextArea_create((__int64)&v79, "goldFont.fnt", 1.0, 440.0, v45, 1105199104, 0, 0);
    *(_QWORD *)(a1 + 424) = v46;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 464LL))(a1, v46);
    v47 = **(_QWORD **)(a1 + 424);
    v48 = *(_QWORD *)(a1 + 424);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, v73 * 0.5, (float)(v74 * 0.5) - 100.0);
    (*(void (__fastcall **)(__int64, __int64))(v47 + 184))(v48, v49);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 160LL))(*(_QWORD *)(a1 + 424));
    if ( *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 320LL))(*(_QWORD *)(a1 + 416)) > 300.0 )
    {
      v50 = *(__int64 **)(a1 + 416);
      v51 = *v50;
      (*(__int64 (__fastcall **)(__int64 *))(*v50 + 320))(v50);
      (*(void (__fastcall **)(_QWORD))(v51 + 160))(*(_QWORD *)(a1 + 416));
    }
    fminf(
      0.69999999,
      COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 168LL))(*(_QWORD *)(a1 + 416)))));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 160LL))(*(_QWORD *)(a1 + 416));
    v52 = (float *)cocos2d::CCSprite::create("slidergroove.png");
    (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v52, 3);
    v53 = cocos2d::CCSprite::create("sliderBar.png");
    *(_QWORD *)(a1 + 432) = v53;
    *(float *)(a1 + 440) = v52[108] - 4.0;
    *(_DWORD *)(a1 + 444) = 1090519040;
    v82[0] = 9729;
    v82[1] = 9729;
    v82[2] = 10497;
    v82[3] = 10497;
    v54 = (cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v53 + 43) + 16LL))((__int64)v53 + 344);
    cocos2d::CCTexture2D::setTexParameters(v54, (struct cocos2d::_ccTexParams *)v82);
    (*(void (__fastcall **)(float *, _QWORD, __int64))(*(_QWORD *)v52 + 456LL))(
      v52,
      *(_QWORD *)(a1 + 432),
      0xFFFFFFFFLL);
    v55 = **(_QWORD **)(a1 + 432);
    v56 = *(_QWORD *)(a1 + 432);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, 0.0, 0.0);
    (*(void (__fastcall **)(__int64, __int64))(v55 + 288))(v56, v57);
    v58 = **(_QWORD **)(a1 + 432);
    v59 = *(_QWORD *)(a1 + 432);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, 2.0, 4.0);
    (*(void (__fastcall **)(__int64, __int64))(v58 + 184))(v59, v60);
    v61 = *(_QWORD *)v52;
    v62 = *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 200LL))(*(_QWORD *)(a1 + 424)) + 4)
        + 40.0;
    v63 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 200LL))(*(_QWORD *)(a1 + 416));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v75, *v63, v62);
    (*(void (__fastcall **)(float *, __int64))(v61 + 184))(v52, v64);
    sub_465790(a1, 0);
    v66 = cocos2d::CCDirector::sharedDirector(v65);
    v67 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 128LL);
    v68 = cocos2d::CCCallFunc::create(a1, LoadingLayer_loadAssets);
    v69 = cocos2d::CCDelayTime::create(0.0);
    v70 = cocos2d::CCSequence::create(v69, v68, 0);
    v71 = (cocos2d::CCActionManager *)v67(v66);
    cocos2d::CCActionManager::addAction(v71, v70, (struct cocos2d::CCNode *)a1, 0);
    return 1;
  }
  return result;
}

// Address: 0x465800
// Method: LoadingLayer::loadAssets
// Hidden C++ exception states: #wind=19
void __fastcall LoadingLayer_loadAssets(_BYTE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  cocos2d::CCTextureCache *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  cocos2d::CCSpriteFrameCache *v9; // rcx
  const char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64); // rdi
  __int64 v14; // rbx
  struct cocos2d::CCFiniteTimeAction *v15; // rax
  struct cocos2d::CCAction *v16; // rbx
  cocos2d::CCActionManager *v17; // rax
  cocos2d::CCTextureCache *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  cocos2d::CCTextureCache *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  cocos2d::CCSpriteFrameCache *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  cocos2d::CCTextureCache *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  cocos2d::CCTextureCache *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  cocos2d::CCSpriteFrameCache *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  cocos2d::CCTextureCache *v36; // rax
  cocos2d::CCTextureCache *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  cocos2d::CCTextureCache *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  cocos2d::CCSpriteFrameCache *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  cocos2d::CCTextureCache *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  cocos2d::CCSpriteFrameCache *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  cocos2d::CCTextureCache *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  cocos2d::CCTextureCache *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  cocos2d::CCTextureCache *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  cocos2d::CCSpriteFrameCache *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  cocos2d::CCTextureCache *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  cocos2d::CCTextureCache *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  cocos2d::CCSpriteFrameCache *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  cocos2d::CCTextureCache *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  cocos2d::CCTextureCache *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  cocos2d::CCTextureCache *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  cocos2d::CCTextureCache *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  cocos2d::CCTextureCache *v85; // rax
  cocos2d::CCTextureCache *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  cocos2d::CCTextureCache *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  cocos2d::CCTextureCache *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  cocos2d::CCTextureCache *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  cocos2d::CCTextureCache *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  cocos2d::CCTextureCache *v101; // rax
  const struct cocos2d::CCPoint *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  cocos2d::CCTextureCache *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  cocos2d::CCTextureCache *v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  CCContentManager *v111; // rax
  CCContentManager *v112; // rax
  CCContentManager *v113; // rax
  __int64 v114; // rax
  cocos2d::CCObject *v115; // rdi
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  bool GameVariable; // bl
  __int64 v130; // rcx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rdi
  __int64 v139; // rcx
  int v140; // xmm1_4
  __int64 v141; // rbx
  struct cocos2d::CCScene *v142; // rbx
  __int64 v143; // rcx
  cocos2d::CCDirector *v144; // rax
  struct cocos2d::CCScene *v145; // rbx
  __int64 v146; // rcx
  cocos2d::CCDirector *v147; // rax
  __int128 *v148; // [rsp+40h] [rbp-9h] BYREF
  __int128 v149; // [rsp+48h] [rbp-1h] BYREF
  __int64 v150; // [rsp+58h] [rbp+Fh]
  __int64 v151; // [rsp+60h] [rbp+17h]
  struct __timeb64 Time; // [rsp+68h] [rbp+1Fh] BYREF

  ftime64(&Time);
  v5 = *((_DWORD *)a1 + 103);
  if ( v5 <= 0 )
  {
    v6 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2);
    cocos2d::CCTextureCache::addImage(v6, "GJ_GameSheet.png", 0);
    v9 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v8, v7);
    v10 = "GJ_GameSheet.plist";
LABEL_3:
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v9, v10);
    goto LABEL_4;
  }
  switch ( v5 )
  {
    case 1:
      v18 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2);
      cocos2d::CCTextureCache::addImage(v18, "GJ_GameSheet02.png", 0);
      v9 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v20, v19);
      v10 = "GJ_GameSheet02.plist";
      goto LABEL_3;
    case 2:
      v21 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2);
      cocos2d::CCTextureCache::addImage(v21, "GJ_GameSheet03.png", 0);
      v24 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v23, v22);
      cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v24, "GJ_GameSheet03.plist");
      v27 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v26, v25);
      cocos2d::CCTextureCache::addImage(v27, "GJ_GameSheetEditor.png", 0);
      v9 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v29, v28);
      v10 = "GJ_GameSheetEditor.plist";
      goto LABEL_3;
    case 3:
      v30 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2);
      cocos2d::CCTextureCache::addImage(v30, "GJ_GameSheet04.png", 0);
      v33 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v32, v31);
      cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v33, "GJ_GameSheet04.plist");
      v36 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v35, v34);
      cocos2d::CCTextureCache::prepareAsyncLoading(v36);
      goto LABEL_4;
    case 4:
      v37 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2);
      cocos2d::CCTextureCache::addImage(v37, "GJ_GameSheetGlow.png", 0);
      v9 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v39, v38);
      v10 = "GJ_GameSheetGlow.plist";
      goto LABEL_3;
    case 5:
      v40 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2);
      cocos2d::CCTextureCache::addImage(v40, "FireSheet_01.png", 0);
      v43 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v42, v41);
      cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v43, "FireSheet_01.plist");
      v46 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v45, v44);
      cocos2d::CCTextureCache::addImage(v46, "GJ_ShopSheet.png", 0);
      v49 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v48, v47);
      cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v49, "GJ_ShopSheet.plist");
      v52 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v51, v50);
      cocos2d::CCTextureCache::addImage(v52, "smallDot.png", 0);
      v55 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v54, v53);
      cocos2d::CCTextureCache::addImage(v55, "square02_001.png", 0);
      v58 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v57, v56);
      cocos2d::CCTextureCache::addImage(v58, "GJ_ParticleSheet.png", 0);
      v61 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v60, v59);
      cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v61, "GJ_ParticleSheet.plist");
      v64 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v63, v62);
      cocos2d::CCTextureCache::addImage(v64, "PixelSheet_01.png", 0);
      v9 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v66, v65);
      v10 = "PixelSheet_01.plist";
      goto LABEL_3;
    case 6:
      v67 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2);
      cocos2d::CCTextureCache::addImage(v67, "CCControlColourPickerSpriteSheet.png", 0);
      v70 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v69, v68);
      cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v70, "CCControlColourPickerSpriteSheet.plist");
      v73 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v72, v71);
      cocos2d::CCTextureCache::addImage(v73, "GJ_gradientBG.png", 0);
      v76 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v75, v74);
      cocos2d::CCTextureCache::addImage(v76, "edit_barBG_001.png", 0);
      v79 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v78, v77);
      cocos2d::CCTextureCache::addImage(v79, "GJ_button_01.png", 0);
      v82 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v81, v80);
      cocos2d::CCTextureCache::addImage(v82, "slidergroove2.png", 0);
      v85 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v84, v83);
      cocos2d::CCTextureCache::addImage(v85, "sliderBar2.png", 0);
      goto LABEL_4;
    case 7:
      v86 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2);
      cocos2d::CCTextureCache::addImage(v86, "GJ_square01.png", 0);
      v89 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v88, v87);
      cocos2d::CCTextureCache::addImage(v89, "GJ_square02.png", 0);
      v92 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v91, v90);
      cocos2d::CCTextureCache::addImage(v92, "GJ_square03.png", 0);
      v95 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v94, v93);
      cocos2d::CCTextureCache::addImage(v95, (const char *)&qword_7400F0, 0);
      v98 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v97, v96);
      cocos2d::CCTextureCache::addImage(v98, "GJ_square05.png", 0);
      v101 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v100, v99);
      cocos2d::CCTextureCache::addImage(v101, "gravityLine_001.png", 0);
      goto LABEL_4;
    case 8:
      cocos2d::CCLabelBMFont::create(" ", "chatFont.fnt");
      Time.time = (__time64_t)&v149;
      v149 = 0;
      v150 = 4;
      v151 = 15;
      strcpy((char *)&v149, "temp");
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v148, 0.0, 1.0);
      TextArea_create((__int64)&v149, "chatFont.fnt", 1.0, 200.0, v102, 1101004800, 0, 0);
      v105 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v104, v103);
      cocos2d::CCTextureCache::addImage(v105, "goldFont.png", 0);
      v108 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v107, v106);
      cocos2d::CCTextureCache::addImage(v108, "bigFont.png", 0);
      cocos2d::CCLabelBMFont::create(" ", "goldFont.fnt");
      cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68);
      goto LABEL_4;
    case 9:
      v109 = ObjectManager_instance();
      sub_7AE40(v109);
      v110 = sub_43FE0();
      CCAnimateFrameCache_addSpriteFramesWithFile(v110, "Robot_AnimDesc.plist");
      v111 = (CCContentManager *)CCContentManager::sharedManager();
      CCContentManager::addDict(v111, "glassDestroy01.plist", 0);
      v112 = (CCContentManager *)CCContentManager::sharedManager();
      CCContentManager::addDict(v112, "coinPickupEffect.plist", 0);
      v113 = (CCContentManager *)CCContentManager::sharedManager();
      CCContentManager::addDict(v113, "explodeEffect.plist", 0);
      AchievementManager_sharedState();
      ObjectToolbox_sharedState();
      goto LABEL_4;
    case 10:
      goto LABEL_4;
    case 11:
      v114 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v148 = (__int128 *)operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v148);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v114 = qword_905FD0;
      }
      if ( *(_BYTE *)(v114 + 955) )
      {
        if ( !a1[448] )
          *(_BYTE *)(v114 + 952) = 1;
      }
      goto LABEL_4;
    case 12:
      CCTextInputNode_create(v3, v2, (__int64)"Temp");
      goto LABEL_4;
    case 13:
      if ( !a1[448] )
      {
        v115 = CCCircleWave_create(v3, v2, v4, 1, 1);
        (*(void (__fastcall **)(_BYTE *, cocos2d::CCObject *))(*(_QWORD *)a1 + 464LL))(a1, v115);
        v116 = *(_QWORD *)v115;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v148, -100.0, -100.0);
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v116 + 184))(v115, v117);
      }
      goto LABEL_4;
  }
  if ( v5 != 14 )
  {
LABEL_4:
    ++*((_DWORD *)a1 + 103);
    a1[409] = 1;
    sub_465790(a1, (unsigned int)(7 * *((_DWORD *)a1 + 103)));
    v12 = cocos2d::CCDirector::sharedDirector(v11);
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 128LL);
    v14 = cocos2d::CCCallFunc::create(a1, LoadingLayer_loadAssets);
    v15 = cocos2d::CCDelayTime::create(0.0099999998);
    v16 = cocos2d::CCSequence::create(v15, v14, 0);
    v17 = (cocos2d::CCActionManager *)v13(v12);
    cocos2d::CCActionManager::addAction(v17, v16, (struct cocos2d::CCNode *)a1, 0);
    return;
  }
  v118 = cocos2d::CCDirector::sharedDirector(v3);
  v120 = cocos2d::CCApplication::sharedApplication(v119);
  v121 = v120 + 216;
  if ( !v120 )
    v121 = 0;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v118 + 240LL))(v118, v121);
  v122 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v148 = (__int128 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v122 = qword_905FD0;
  }
  if ( GameManager_getGameVariable(v122, "0115") )
  {
    v148 = &v149;
    v150 = 12;
    v151 = 15;
    *(_QWORD *)&v149 = *(_QWORD *)"chatFont.fnt";
    *((_QWORD *)&v149 + 1) = *(unsigned int *)".fnt";
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Time, 0.0, 0.0);
    v124 = v123;
    v126 = cocos2d::CCDirector::sharedDirector(v125);
    LOBYTE(v127) = 1;
    cocos2d::CCDirector::toggleShowFPS(v126, v127, &v149, v124);
  }
  v128 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v148 = (__int128 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v128 = qword_905FD0;
  }
  GameVariable = GameManager_getGameVariable(v128, "0168");
  *(_BYTE *)(cocos2d::CCDirector::sharedDirector(v130) + 405) = GameVariable;
  if ( !qword_905FD0 )
  {
    v148 = (__int128 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
  }
  GameManager_updateCustomFPS();
  v132 = sub_182B60(v131);
  sub_182D10(v132);
  *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v133) + 240) = 1;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v148 = (__int128 *)operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v148);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
  }
  sub_220540();
  if ( a1[448] )
    goto LABEL_69;
  if ( !qword_905FD0 )
  {
    v148 = (__int128 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
  }
  v138 = qword_905FD0;
  v139 = qword_905F60;
  if ( !qword_905F60 )
  {
    v148 = (__int128 *)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v139 = qword_905F60;
  }
  v140 = *(_DWORD *)(v138 + 704);
  *(_DWORD *)(v139 + 524) = 0;
  *(_DWORD *)(v139 + 512) = v140;
  if ( *(_QWORD *)(v139 + 552) )
  {
    FMOD::ChannelControl::setVolume(*(_QWORD *)(v139 + 552));
    v139 = qword_905F60;
  }
  if ( !v139 )
  {
    v148 = (__int128 *)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v139 = qword_905F60;
  }
  v141 = v139;
  *(_DWORD *)(v139 + 516) = *(_DWORD *)(v138 + 708);
  if ( *(_QWORD *)(v139 + 584) )
  {
    FMOD::ChannelControl::setVolume(*(_QWORD *)(v139 + 584));
    v139 = qword_905F60;
  }
  if ( *(_QWORD *)(v141 + 600) )
  {
    FMOD::ChannelControl::setVolume(*(_QWORD *)(v141 + 600));
    v139 = qword_905F60;
  }
  if ( !v139 )
  {
    v148 = (__int128 *)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v139 = qword_905F60;
  }
  *(_DWORD *)(v139 + 620) = (int)*(float *)(v138 + 712);
  if ( !qword_905FD0 )
  {
    v148 = (__int128 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
  }
  sub_2732D0(qword_905FD0);
  if ( !qword_905FD0 )
  {
    v148 = (__int128 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v148);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
  }
  if ( a1[448] )
  {
LABEL_69:
    LOBYTE(v135) = 1;
    v145 = (struct cocos2d::CCScene *)MenuLayer_scene(v135, v134, v136, v137);
    v147 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v146);
    cocos2d::CCDirector::replaceScene(v147, v145);
  }
  else
  {
    v142 = (struct cocos2d::CCScene *)MenuLayer_scene(0, v134, v136, v137);
    v144 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v143);
    cocos2d::CCDirector::replaceScene(v144, v142);
  }
}
