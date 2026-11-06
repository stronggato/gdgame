#include <Geode/binding/MenuLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0x46dbe0
// Method: MenuLayer::~MenuLayer
// Hidden C++ exception states: #wind=1
cocos2d::CCLayer *__fastcall MenuLayer__dtor_MenuLayer(cocos2d::CCLayer *Block, char a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rax
  void *v7; // rax

  *(_QWORD *)Block = &MenuLayer::`vftable'; /*0x46dbfb*/
  *((_QWORD *)Block + 40) = &MenuLayer::`vftable'; /*0x46dc05*/
  *((_QWORD *)Block + 41) = &MenuLayer::`vftable'; /*0x46dc13*/
  *((_QWORD *)Block + 42) = &MenuLayer::`vftable'; /*0x46dc21*/
  *((_QWORD *)Block + 43) = &MenuLayer::`vftable'; /*0x46dc2f*/
  *((_QWORD *)Block + 44) = &MenuLayer::`vftable'; /*0x46dc3d*/
  *((_QWORD *)Block + 51) = &MenuLayer::`vftable'; /*0x46dc4b*/
  *((_QWORD *)Block + 52) = &MenuLayer::`vftable'; /*0x46dc59*/
  *((_QWORD *)Block + 53) = &MenuLayer::`vftable'; /*0x46dc67*/
  v4 = qword_906070; /*0x46dc6e*/
  if ( !qword_906070 ) /*0x46dc78*/
  {
    v5 = operator new(0x3D0u); /*0x46dc7f*/
    qword_906070 = sub_47C350(v5); /*0x46dc8c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x46dc9d*/
    v4 = qword_906070; /*0x46dca0*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v4, (__int64)Block + 424); /*0x46dcae*/
  v6 = qword_905FD0; /*0x46dcb3*/
  if ( !qword_905FD0 ) /*0x46dcbd*/
  {
    v7 = operator new(0x6E8u); /*0x46dcc4*/
    qword_905FD0 = sub_2723A0(v7); /*0x46dcd1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46dce2*/
    v6 = qword_905FD0; /*0x46dce4*/
  }
  *(_QWORD *)(v6 + 592) = 0; /*0x46dceb*/
  MenuLayer_willClose(Block); /*0x46dcf9*/
  cocos2d::CCLayer::~CCLayer(Block); /*0x46dd01*/
  if ( (a2 & 1) != 0 ) /*0x46dd0c*/
    j_j_free(Block); /*0x46dd16*/
  return Block; /*0x46dd1e*/
}

// [2/14] Address: 0x46dd30
// Method: MenuLayer::scene
// Hidden C++ exception states: #wind=1
_DWORD *__fastcall MenuLayer_scene(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  _DWORD *v5; // rsi
  __int64 v6; // rcx
  cocos2d::CCLayer *v7; // rdi
  __int64 v8; // rbx
  struct cocos2d::CCFiniteTimeAction *v9; // rax
  struct cocos2d::CCAction *v10; // rax

  v4 = a1; /*0x46dd44*/
  v5 = (_DWORD *)cocos2d::CCScene::create(a1, a2, a3, a4); /*0x46dd4d*/
  v5[7] = 15; /*0x46dd50*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v6) + 232) = v5; /*0x46dd5d*/
  v7 = (cocos2d::CCLayer *)operator new(0x200u); /*0x46dd6e*/
  cocos2d::CCLayer::CCLayer(v7); /*0x46dd79*/
  *(_QWORD *)v7 = &MenuLayer::`vftable'; /*0x46dd86*/
  *((_QWORD *)v7 + 40) = &MenuLayer::`vftable'; /*0x46dd90*/
  *((_QWORD *)v7 + 41) = &MenuLayer::`vftable'; /*0x46dd9e*/
  *((_QWORD *)v7 + 42) = &MenuLayer::`vftable'; /*0x46ddac*/
  *((_QWORD *)v7 + 43) = &MenuLayer::`vftable'; /*0x46ddba*/
  *((_QWORD *)v7 + 44) = &MenuLayer::`vftable'; /*0x46ddc8*/
  *((_QWORD *)v7 + 51) = &MenuLayer::`vftable'; /*0x46ddd6*/
  *((_QWORD *)v7 + 52) = &MenuLayer::`vftable'; /*0x46dde4*/
  *((_QWORD *)v7 + 53) = &MenuLayer::`vftable'; /*0x46ddf2*/
  *((_BYTE *)v7 + 432) = 0; /*0x46ddf9*/
  *((_QWORD *)v7 + 55) = 0; /*0x46de02*/
  *((_QWORD *)v7 + 56) = 0; /*0x46de09*/
  *((_QWORD *)v7 + 57) = 0; /*0x46de10*/
  *((_QWORD *)v7 + 58) = 0; /*0x46de17*/
  *((_QWORD *)v7 + 59) = 0; /*0x46de1e*/
  *((_QWORD *)v7 + 60) = 0; /*0x46de25*/
  *((_QWORD *)v7 + 61) = 0; /*0x46de2c*/
  *((_QWORD *)v7 + 62) = 0; /*0x46de33*/
  if ( (unsigned __int8)MenuLayer_init(v7) ) /*0x46de50*/
  {
    cocos2d::CCObject::autorelease(v7); /*0x46de60*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x46de70*/
    v7 = 0; /*0x46de73*/
  }
  (*(void (__fastcall **)(_DWORD *, cocos2d::CCLayer *))(*(_QWORD *)v5 + 464LL))(v5, v7); /*0x46de7f*/
  if ( v4 ) /*0x46de87*/
  {
    v8 = cocos2d::CCCallFunc::create(v7, sub_470A40); /*0x46de99*/
    v9 = cocos2d::CCDelayTime::create(0.0); /*0x46de9f*/
    v10 = cocos2d::CCSequence::create(v9, v8, 0); /*0x46deae*/
    cocos2d::CCNode::runAction(v7, v10); /*0x46deba*/
  }
  return v5; /*0x46dec3*/
}

// [4/14] Address: 0x46ffa0
// Method: MenuLayer::showTOS
// Hidden C++ exception states: #wind=1
__int64 __fastcall MenuLayer_showTOS(_BYTE *a1)
{
  cocos2d::CCObject *v2; // rbx
  __int64 (__fastcall *v3)(cocos2d::CCObject *); // rdx

  a1[432] = 0; /*0x46ffad*/
  v2 = (cocos2d::CCObject *)operator new(0x298u); /*0x46ffbe*/
  FLAlertLayer_FLAlertLayer(v2); /*0x46ffc9*/
  *(_QWORD *)v2 = &TOSPopup::`vftable'; /*0x46ffd5*/
  *((_QWORD *)v2 + 40) = &TOSPopup::`vftable'; /*0x46ffdf*/
  *((_QWORD *)v2 + 41) = &TOSPopup::`vftable'; /*0x46ffed*/
  *((_QWORD *)v2 + 42) = &TOSPopup::`vftable'; /*0x46fffb*/
  *((_QWORD *)v2 + 43) = &TOSPopup::`vftable'; /*0x470009*/
  *((_QWORD *)v2 + 44) = &TOSPopup::`vftable'; /*0x470017*/
  *((_QWORD *)v2 + 51) = &TOSPopup::`vftable'; /*0x470025*/
  *((_QWORD *)v2 + 54) = &TOSPopup::`vftable'; /*0x470033*/
  *((_QWORD *)v2 + 68) = &TOSPopup::`vftable'; /*0x470041*/
  if ( (unsigned __int8)TOSPopup_init(v2) ) /*0x47005e*/
  {
    cocos2d::CCObject::autorelease(v2); /*0x47006e*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0x47007e*/
    v2 = 0; /*0x470081*/
  }
  *((_QWORD *)v2 + 71) = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 504LL))(a1); /*0x47008f*/
  v3 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v2 + 1064LL); /*0x470099*/
  if ( (char *)v3 == (char *)FLAlertLayer_show ) /*0x4700ad*/
    return FLAlertLayer_show(v2); /*0x4700b9*/
  else
    return v3(v2); /*0x4700c8*/
}

// [5/14] Address: 0x4700d0
// Method: MenuLayer::onMyProfile
// Hidden C++ exception states: #wind=1
__int64 __fastcall MenuLayer_onMyProfile(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  char *v6; // rax
  void *v7; // [rsp+40h] [rbp+18h]

  result = GJAccountManager_sharedState(a1); /*0x4700d4*/
  if ( *(_DWORD *)(result + 360) - *(_DWORD *)(result + 364) > 0 ) /*0x4700e7*/
  {
    v3 = qword_905FD0; /*0x4700e9*/
    if ( !qword_905FD0 ) /*0x4700f3*/
    {
      v7 = operator new(0x6E8u); /*0x4700ff*/
      qword_905FD0 = sub_2723A0(v7); /*0x47010d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x47011e*/
      v3 = qword_905FD0; /*0x470120*/
    }
    LOBYTE(v2) = 1; /*0x470127*/
    sub_27ACB0(v3, "0048", v2); /*0x470131*/
    v5 = GJAccountManager_sharedState(v4); /*0x470136*/
    v6 = ProfilePage_create(*(_DWORD *)(v5 + 360) - *(_DWORD *)(v5 + 364), 1u); /*0x470149*/
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 1064LL))(v6); /*0x47015f*/
  }
  return result; /*0x47015b*/
}

// [6/14] Address: 0x4707c0
// Method: MenuLayer::musicActionFinished
__int64 __fastcall MenuLayer_musicActionFinished(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 11 ) /*0x4707c3*/
    return sub_470650(a1 - 424); /*0x4707cc*/
  return result; /*0x4707d1*/
}

// [7/14] Address: 0x4707e0
// Method: MenuLayer::onAchievements
// Hidden C++ exception states: #wind=2
__int64 __fastcall MenuLayer_onAchievements(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  __int64 (__fastcall *v4)(_QWORD *, _QWORD); // r8

  v2 = operator new(0x288u); /*0x4707fc*/
  GJDropDownLayer_GJDropDownLayer(v2); /*0x470807*/
  *v2 = &AchievementsLayer::`vftable'; /*0x470814*/
  v2[40] = &AchievementsLayer::`vftable'; /*0x47081e*/
  v2[41] = &AchievementsLayer::`vftable'; /*0x47082c*/
  v2[42] = &AchievementsLayer::`vftable'; /*0x47083a*/
  v2[43] = &AchievementsLayer::`vftable'; /*0x470848*/
  v2[44] = &AchievementsLayer::`vftable'; /*0x470856*/
  v2[51] = &AchievementsLayer::`vftable'; /*0x470864*/
  v2[54] = &AchievementsLayer::`vftable'; /*0x470872*/
  *((_DWORD *)v2 + 152) = 0; /*0x47087b*/
  v2[77] = 0; /*0x470881*/
  v2[78] = 0; /*0x470888*/
  v2[79] = 0; /*0x47088f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v2 + 80)); /*0x47089d*/
  if ( (unsigned __int8)GJDropDownLayer_init(v2, "Achievements", v3, 0) ) /*0x4708b9*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x4708c5*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x4708d5*/
    v2 = 0; /*0x4708d8*/
  }
  (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v2, 100); /*0x4708ea*/
  v4 = *(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v2 + 1080LL); /*0x4708f3*/
  if ( (char *)v4 == (char *)GJDropDownLayer_showLayer ) /*0x470909*/
    return GJDropDownLayer_showLayer(v2, 0); /*0x47091a*/
  else
    return v4(v2, 0); /*0x47092e*/
}

// [8/14] Address: 0x470940
// Method: MenuLayer::googlePlaySignedIn
void __fastcall MenuLayer_googlePlaySignedIn(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  cocos2d::CCSpriteFrameCache *v3; // rax
  struct cocos2d::CCSpriteFrame *v4; // rax

  if ( *(_QWORD *)(a1 + 24) ) /*0x470944*/
  {
    v1 = *(__int64 **)(a1 + 24); /*0x470955*/
    v2 = *v1; /*0x470959*/
    v3 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x47095c*/
    v4 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v3, "GJ_gpBtn_001.png"); /*0x47096c*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v2 + 1008))(v1, v4); /*0x470978*/
  }
}

// [9/14] Address: 0x470bf0
// Method: MenuLayer::onStats
// Hidden C++ exception states: #wind=1
__int64 __fastcall MenuLayer_onStats(__int64 a1)
{
  cocos2d::CCObject *v2; // rbx
  __int64 v3; // r8
  __int64 (__fastcall *v4)(cocos2d::CCObject *, _QWORD); // r8

  v2 = (cocos2d::CCObject *)operator new(0x260u); /*0x470c07*/
  GJDropDownLayer_GJDropDownLayer(v2); /*0x470c12*/
  *(_QWORD *)v2 = &StatsLayer::`vftable'; /*0x470c1e*/
  *((_QWORD *)v2 + 40) = &StatsLayer::`vftable'; /*0x470c28*/
  *((_QWORD *)v2 + 41) = &StatsLayer::`vftable'; /*0x470c36*/
  *((_QWORD *)v2 + 42) = &StatsLayer::`vftable'; /*0x470c44*/
  *((_QWORD *)v2 + 43) = &StatsLayer::`vftable'; /*0x470c52*/
  *((_QWORD *)v2 + 44) = &StatsLayer::`vftable'; /*0x470c60*/
  *((_QWORD *)v2 + 51) = &StatsLayer::`vftable'; /*0x470c6e*/
  *((_QWORD *)v2 + 54) = &StatsLayer::`vftable'; /*0x470c7c*/
  if ( (unsigned __int8)GJDropDownLayer_init(v2, "Stats", v3, 0) ) /*0x470c98*/
  {
    cocos2d::CCObject::autorelease(v2); /*0x470ca4*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0x470cb4*/
    v2 = 0; /*0x470cb7*/
  }
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v2, 100); /*0x470cc8*/
  v4 = *(__int64 (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v2 + 1080LL); /*0x470cd1*/
  if ( (char *)v4 == (char *)GJDropDownLayer_showLayer ) /*0x470ce7*/
    return GJDropDownLayer_showLayer(v2, 0); /*0x470cf3*/
  else
    return v4(v2, 0); /*0x470d02*/
}

// [10/14] Address: 0x470f60
// Method: MenuLayer::keyBackClicked
__int64 __fastcall MenuLayer_keyBackClicked(__int64 a1)
{
  return sub_470F70(a1 - 336, 0);
}

// [11/14] Address: 0x471090
// Method: MenuLayer::willClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall MenuLayer_willClose(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v2 = sub_76A20(); /*0x47109d*/
  v3 = a1 + 416; /*0x4710a2*/
  if ( !a1 ) /*0x4710ae*/
    v3 = 0; /*0x4710ae*/
  if ( *(_QWORD *)(v2 + 320) == v3 ) /*0x4710b9*/
    *(_QWORD *)(sub_76A20() + 320) = 0; /*0x4710c0*/
  result = qword_905FD0; /*0x4710c7*/
  if ( !qword_905FD0 ) /*0x4710d1*/
  {
    v5 = operator new(0x6E8u); /*0x4710dd*/
    qword_905FD0 = sub_2723A0(v5); /*0x4710eb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4710fc*/
    result = qword_905FD0; /*0x4710fe*/
  }
  *(_BYTE *)(qword_905FD0 + 600) = 0; /*0x471105*/
  return result; /*0x47110c*/
}

// [12/14] Address: 0x471130
// Method: MenuLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=10
void __fastcall MenuLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  void **v15; // rdx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct cocos2d::CCFiniteTimeAction *v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCAction *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  cocos2d::CCActionManager *v27; // rax
  void *v28; // [rsp+30h] [rbp-38h]
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v30; // [rsp+48h] [rbp-20h]
  unsigned __int64 v31; // [rsp+50h] [rbp-18h]

  if ( a3 ) /*0x471133*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x47115d*/
    if ( v4 ) /*0x471162*/
    {
      v7 = v4 - 1; /*0x471168*/
      if ( v7 ) /*0x47116b*/
      {
        v8 = v7 - 1; /*0x471171*/
        if ( v8 ) /*0x471174*/
        {
          if ( v8 == 1 ) /*0x471179*/
          {
            v9 = cocos2d::CCApplication::sharedApplication(v5); /*0x47117f*/
            (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v9 + 96LL))( /*0x471196*/
              v9,
              "https://www.newgrounds.com/audio");
          }
        }
        else
        {
          v10 = cocos2d::CCString::createWithFormat("https://www.robtopgames.com/download/gj%i", 0); /*0x4711a7*/
          CString = cocos2d::CCString::getCString(v10); /*0x4711b0*/
          *(_OWORD *)Block = 0; /*0x4711b9*/
          v30 = 0; /*0x4711be*/
          v31 = 0; /*0x4711c3*/
          v12 = -1; /*0x4711c8*/
          do /*0x4711d3*/
            ++v12; /*0x4711d0*/
          while ( CString[v12] ); /*0x4711d3*/
          sub_3C230(Block); /*0x4711e1*/
          v14 = cocos2d::CCApplication::sharedApplication(v13); /*0x4711e7*/
          v15 = Block; /*0x4711ed*/
          if ( v31 > 0xF ) /*0x4711f8*/
            v15 = (void **)Block[0]; /*0x4711f8*/
          (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v14 + 96LL))(v14, v15); /*0x471208*/
          if ( v31 > 0xF ) /*0x471215*/
          {
            v16 = Block[0]; /*0x47121e*/
            if ( v31 + 1 >= 0x1000 ) /*0x47122d*/
            {
              v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x471233*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x471242*/
                invoke_watson(0, 0, 0, 0, 0); /*0x471253*/
            }
            j_j_free(v16); /*0x47125a*/
          }
        }
      }
      else
      {
        v17 = qword_905FD0; /*0x471264*/
        if ( !qword_905FD0 ) /*0x47126e*/
        {
          v28 = operator new(0x6E8u); /*0x47127a*/
          qword_905FD0 = sub_2723A0(v28); /*0x471288*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x471299*/
          v17 = qword_905FD0; /*0x47129b*/
        }
        LOBYTE(v6) = 1; /*0x4712a2*/
        sub_27ACB0(v17, "0034", v6); /*0x4712ac*/
      }
    }
    else
    {
      *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v5) + 121) = 1; /*0x4712bc*/
      v19 = cocos2d::CCApplication::sharedApplication(v18); /*0x4712c0*/
      LOBYTE(v20) = 1; /*0x4712cd*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 56LL))(v19, v20); /*0x4712d2*/
      cocos2d::CCApplication::sharedApplication(v21); /*0x4712d5*/
      v22 = cocos2d::CCDelayTime::create(0.5); /*0x4712e9*/
      v23 = cocos2d::CCCallFunc::create(a1 - 408, MenuLayer_endGame); /*0x4712fa*/
      v24 = cocos2d::CCSequence::create(v22, v23, 0); /*0x47130f*/
      v26 = cocos2d::CCDirector::sharedDirector(v25); /*0x471312*/
      v27 = (cocos2d::CCActionManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 128LL))(v26); /*0x471325*/
      cocos2d::CCActionManager::addAction(v27, v24, (struct cocos2d::CCNode *)(a1 - 408), 0); /*0x471337*/
    }
  }
}

// [13/14] Address: 0x471360
// Method: MenuLayer::keyDown
__int64 __fastcall MenuLayer_keyDown(__int64 a1, int a2)
{
  if ( a2 <= 1007 ) /*0x471366*/
  {
    if ( a2 == 1007 ) /*0x471368*/
      return sub_470DA0(a1 - 344, 0); /*0x471393*/
    if ( a2 != 13 && a2 != 32 ) /*0x471372*/
    {
      if ( a2 == 1005 ) /*0x47137a*/
        return sub_470D10(a1 - 344, 0); /*0x471385*/
      return cocos2d::CCLayer::keyDown(); /*0x47137a*/
    }
    return sub_470990(a1 - 344, 0); /*0x471372*/
  }
  if ( a2 == 1009 ) /*0x4713a2*/
    return sub_470990(a1 - 344, 0); /*0x4713c8*/
  if ( a2 != 1023 ) /*0x4713a8*/
    return cocos2d::CCLayer::keyDown(); /*0x4713aa*/
  return sub_470A50(a1 - 344, 0);
}

// [14/14] Address: 0x4713d0
// Method: MenuLayer::endGame
void __fastcall MenuLayer_endGame(__int64 a1)
{
  cocos2d::CCDirector *v1; // rax

  v1 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(a1); /*0x4713d4*/
  cocos2d::CCDirector::end(v1); /*0x4713e1*/
}

// Address: 0x46dee0
// Method: MenuLayer::init
// Hidden C++ exception states: #wind=41
bool __fastcall MenuLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v9; // rbx
  bool (__fastcall *v10)(__int64); // rdx
  bool v11; // al
  struct cocos2d::CCSprite *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  cocos2d::CCDirector *v15; // rax
  float v16; // xmm0_4
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  cocos2d::CCObject *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // eax
  __int128 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  struct cocos2d::CCSprite *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  cocos2d::CCObject *v38; // r14
  __int64 v39; // rax
  __int64 ... [38207 chars total]
