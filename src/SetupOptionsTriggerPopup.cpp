#include <Geode/binding/SetupOptionsTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x5c7210
// Method: SetupOptionsTriggerPopup::addOption
// Hidden C++ exception states: #wind=3
double __fastcall SetupOptionsTriggerPopup_addOption(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // r12d
  const char *v7; // rcx
  struct cocos2d::CCObject *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  struct cocos2d::CCObject *PageContainer; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  _BYTE v18[8]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v19; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h]
  __int64 v21; // [rsp+70h] [rbp-9h]
  __int128 *v22; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp+7h] BYREF

  v23[1] = a3; /*0x5c723e*/
  v6 = (int)(*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 1168LL))(a1); /*0x5c724b*/
  v7 = (const char *)a3; /*0x5c7250*/
  if ( *(_QWORD *)(a3 + 24) > 0xFu ) /*0x5c7258*/
    v7 = *(const char **)a3; /*0x5c725a*/
  v8 = cocos2d::CCLabelBMFont::create(v7, (const char *)&qword_6FFF68); /*0x5c726a*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 160LL))(v8); /*0x5c7282*/
  v9 = *(_QWORD *)v8; /*0x5c7284*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v18, 0.0, 0.5); /*0x5c7296*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v9 + 288))(v8, v10); /*0x5c72a2*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x5c72b5*/
    *(_QWORD *)(a1 + 584),
    v8);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -100.0, 0.0); /*0x5c72ca*/
  cocos2d::CCPoint::operator+(a1 + 1000, v18, v11); /*0x5c72de*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v8 + 184LL))(v8, v18); /*0x5c72ee*/
  PageContainer = SetupTriggerPopup_getPageContainer(a1, *(_DWORD *)(a1 + 1008)); /*0x5c72fe*/
  cocos2d::CCArray::addObject(PageContainer, v8); /*0x5c7309*/
  v22 = &v19; /*0x5c7313*/
  v19 = 0; /*0x5c731a*/
  v20 = 2; /*0x5c731e*/
  v21 = 15; /*0x5c7326*/
  strcpy((char *)&v19, "On"); /*0x5c7333*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v23, 40.0, 0.0); /*0x5c734a*/
  cocos2d::CCPoint::operator+(a1 + 1000, v18, v13); /*0x5c735e*/
  SetupTriggerPopup_createCustomToggleValueControl( /*0x5c739a*/
    a1,
    a2,
    v6 == 1,
    v14,
    (__int64)&v19,
    (const struct cocos2d::CCPoint *)v18,
    0,
    *(_DWORD *)(a1 + 1008),
    0);
  v23[0] = &v19; /*0x5c73a3*/
  v19 = 0; /*0x5c73aa*/
  v20 = 3; /*0x5c73ae*/
  v21 = 15; /*0x5c73b6*/
  LOWORD(v19) = *(_WORD *)"Off"; /*0x5c73c4*/
  WORD1(v19) = (unsigned __int8)aOff[2]; /*0x5c73cf*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 100.0, 0.0); /*0x5c73e5*/
  cocos2d::CCPoint::operator+(a1 + 1000, v18, v15); /*0x5c73f9*/
  SetupTriggerPopup_createCustomToggleValueControl( /*0x5c7436*/
    a1,
    -a2,
    v6 == -1,
    v16,
    (__int64)&v19,
    (const struct cocos2d::CCPoint *)v18,
    0,
    *(_DWORD *)(a1 + 1008),
    0);
  *(float *)(a1 + 1004) = *(float *)(a1 + 1004) - 30.0; /*0x5c744c*/
  return sub_3C310(a3); /*0x5c745d*/
}

// [3/3] Address: 0x5c7480
// Method: SetupOptionsTriggerPopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall SetupOptionsTriggerPopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rdx
  struct cocos2d::CCObject *result; // rax
  __int64 v12; // rdx

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c74a1*/
  v5 = -v4; /*0x5c74a9*/
  if ( v4 > 0 ) /*0x5c74ab*/
    v5 = v4; /*0x5c74ab*/
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c74b1*/
  v7 = -1; /*0x5c74b9*/
  if ( v6 > 0 ) /*0x5c74c5*/
    v7 = 1; /*0x5c74c5*/
  v8 = 0; /*0x5c74d1*/
  if ( v7 != (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, _QWORD))*a1 + 146))(a1, v5) ) /*0x5c74de*/
    v8 = v7; /*0x5c74de*/
  SetupTriggerPopup_updateValue(a1, v5, (float)v8); /*0x5c74e8*/
  v9 = cocos2d::CCDictionary::objectForKey(a1[97], (int)v5); /*0x5c74f7*/
  if ( v9 ) /*0x5c7500*/
  {
    LOBYTE(v10) = v8 == 1; /*0x5c7508*/
    CCMenuItemToggler_toggle((__int64)v9, v10); /*0x5c750b*/
  }
  result = cocos2d::CCDictionary::objectForKey(a1[97], -v5); /*0x5c751c*/
  if ( result ) /*0x5c7525*/
  {
    LOBYTE(v12) = v8 == -1; /*0x5c752d*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v12); /*0x5c7530*/
  }
  return result; /*0x5c7535*/
}

// Address: 0x5c6a20
// Method: SetupOptionsTriggerPopup::init
// Hidden C++ exception states: #wind=1
char __fastcall SetupOptionsTriggerPopup_init(__int64 a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // r8
  _OWORD *v7; // rcx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  float v13[2]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v14[8]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v15[8]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v16; // [rsp+98h] [rbp-11h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-1h]
  __int64 v18; // [rsp+B0h] [rbp+7h]
  __int128 v19; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+C8h] [rbp+1Fh]
  __int64 v21; // [rsp+D0h] [rbp+27h]
  __int128 *v22; // [rsp+128h] [rbp+7Fh] BYREF

  result = sub_6060E0(a1, a2, a3, a4, 1133903872, 1, 0);
  if ( result )
  {
    *(_BYTE *)(a1 + 744) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_QWORD *)&v16 = sub_3C460(32);
    v17 = 21;
    v18 = 31;
    strcpy((char *)v16, "Setup Options Trigger");
    sub_606E80(a1, &v16);
    v16 = 0;
    v17 = 2;
    v18 = 15;
    strcpy((char *)&v16, "OK");
    SetupTriggerPopup_addCloseButton(a1, (__int64 *)&v16);
    v22 = &v16;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v6 = sub_3C460(464);
    *(_QWORD *)&v16 = v6;
    v17 = 456;
    v18 = 463;
    v7 = (_OWORD *)v6;
    v8 = "Lets you change various <cg>options</c>.\n"
         "<cy>Streak Additive</c> toggles blending of player trail and particles.\n"
         "<cl>Unlink Dual Gravity</c> allows dual players to switch gravity independently. By default they switch togethe"
         "r.\n"
         "<cp>Disable P1 and P2 Controls</c> allows you to toggle controls for a specific player.\n"
         "<cg>Audio on Death</c> continues to play music and SFX after the player dies.\n"
         "<co>Boost Slide</c> increases sliding after a force is applied.";
    v9 = 3;
    do
    {
      *v7 = *(_OWORD *)v8;
      v7[1] = *((_OWORD *)v8 + 1);
      v7[2] = *((_OWORD *)v8 + 2);
      v7[3] = *((_OWORD *)v8 + 3);
      v7[4] = *((_OWORD *)v8 + 4);
      v7[5] = *((_OWORD *)v8 + 5);
      v7[6] = *((_OWORD *)v8 + 6);
      v7 += 8;
      *(v7 - 1) = *((_OWORD *)v8 + 7);
      v8 += 128;
      --v9;
    }
    while ( v9 );
    *v7 = *(_OWORD *)v8;
    v7[1] = *((_OWORD *)v8 + 1);
    v7[2] = *((_OWORD *)v8 + 2);
    v7[3] = *((_OWORD *)v8 + 3);
    *((_QWORD *)v7 + 8) = *((_QWORD *)v8 + 8);
    *(_BYTE *)(v6 + 456) = 0;
    v19 = 0;
    v20 = 4;
    v21 = 15;
    strcpy((char *)&v19, "Help");
    sub_6070A0(a1, &v19, &v16);
    sub_607670(a1);
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    cocos2d::CCDirector::getWinSize(v11, v13);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v14, (float)(v13[0] * 0.5) - 30.0, (float)(v13[1] * 0.5) + 100.0);
    cocos2d::CCPoint::operator=(a1 + 1000, v14);
    *(_DWORD *)(a1 + 1008) = 0;
    v17 = 15;
    v18 = 15;
    strcpy((char *)&v16, "Streak\nAdditive");
    SetupOptionsTriggerPopup_addOption(a1, 0x9Fu, (__int64)&v16);
    v17 = 11;
    v18 = 15;
    *(_QWORD *)&v16 = 0x6F72472065646948LL;
    *((_QWORD *)&v16 + 1) = 6581877;
    SetupOptionsTriggerPopup_addOption(a1, 0xA1u, (__int64)&v16);
    v17 = 7;
    v18 = 15;
    v16 = 0x474D2065646948uLL;
    SetupOptionsTriggerPopup_addOption(a1, 0xC3u, (__int64)&v16);
    v17 = 7;
    v18 = 15;
    v16 = 0x31502065646948uLL;
    SetupOptionsTriggerPopup_addOption(a1, 0xA2u, (__int64)&v16);
    v17 = 7;
    v18 = 15;
    v16 = 0x32502065646948uLL;
    SetupOptionsTriggerPopup_addOption(a1, 0xA3u, (__int64)&v16);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_QWORD *)&v16 = sub_3C460(32);
    v17 = 19;
    v18 = 31;
    strcpy((char *)v16, "Disable P1\nControls");
    SetupOptionsTriggerPopup_addOption(a1, 0xA5u, (__int64)&v16);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_QWORD *)&v16 = sub_3C460(32);
    v17 = 19;
    v18 = 31;
    strcpy((char *)v16, "Disable P2\nControls");
    SetupOptionsTriggerPopup_addOption(a1, 0xC7u, (__int64)&v16);
    cocos2d::CCPoint::operator=(a1 + 1000, v14);
    ++*(_DWORD *)(a1 + 1008);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_QWORD *)&v16 = sub_3C460(32);
    v17 = 19;
    v18 = 31;
    strcpy((char *)v16, "Unlink Dual\nGravity");
    SetupOptionsTriggerPopup_addOption(a1, 0xA0u, (__int64)&v16);
    v17 = 13;
    v18 = 15;
    strcpy((char *)&v16, "Hide\nAttempts");
    HIWORD(v16) = 0;
    SetupOptionsTriggerPopup_addOption(a1, 0x214u, (__int64)&v16);
    v17 = 14;
    v18 = 15;
    strcpy((char *)&v16, "Audio on\nDeath");
    HIBYTE(v16) = 0;
    SetupOptionsTriggerPopup_addOption(a1, 0x23Fu, (__int64)&v16);
    v17 = 12;
    v18 = 15;
    strcpy((char *)&v16, "No Death\nSFX");
    BYTE13(v16) = 0;
    HIWORD(v16) = 0;
    SetupOptionsTriggerPopup_addOption(a1, 0x240u, (__int64)&v16);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_QWORD *)&v16 = sub_3C460(32);
    v17 = 17;
    v18 = 31;
    strcpy((char *)v16, "Edit Respawn\nTime");
    SetupOptionsTriggerPopup_addOption(a1, 0x23Du, (__int64)&v16);
    v17 = 11;
    v18 = 15;
    *(_QWORD *)&v16 = 0x6C532074736F6F42LL;
    *((_QWORD *)&v16 + 1) = 6644841;
    SetupOptionsTriggerPopup_addOption(a1, 0x251u, (__int64)&v16);
    v22 = &v16;
    v17 = 12;
    v18 = 15;
    strcpy((char *)&v16, "Respawn Time");
    BYTE13(v16) = 0;
    HIWORD(v16) = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v15, v13[0] * 0.5, *(float *)(a1 + 1004) - 5.0);
    sub_6088F0(a1, 574, (unsigned int)&v16, v12, 1061997773, 0, 1, 10, 0, 1065353216, 1092616192, 1, 0, 1, 1, 0);
    LODWORD(v22) = 574;
    *(_BYTE *)sub_16C910(a1 + 856, &v22) = 1;
    *(float *)(a1 + 1004) = *(float *)(a1 + 1004) - 30.0;
    sub_606600(a1);
    SetupTriggerPopup_goToPage(a1, 0, 0);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1136LL))(a1);
    *(_BYTE *)(a1 + 744) = 0;
    return 1;
  }
  return result;
}
