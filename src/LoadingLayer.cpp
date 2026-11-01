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
