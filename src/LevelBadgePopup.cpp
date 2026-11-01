#include <Geode/binding/LevelBadgePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0xd14f0
// Method: LevelBadgePopup::~LevelBadgePopup
// Hidden C++ exception states: #wind=1
char *__fastcall LevelBadgePopup__dtor_LevelBadgePopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rax
  cocos2d::CCTouchDispatcher *v8; // rax

  *(_QWORD *)Block = &LevelBadgePopup::`vftable'; /*0xd150b*/
  *((_QWORD *)Block + 40) = &LevelBadgePopup::`vftable'; /*0xd1515*/
  *((_QWORD *)Block + 41) = &LevelBadgePopup::`vftable'; /*0xd1523*/
  *((_QWORD *)Block + 42) = &LevelBadgePopup::`vftable'; /*0xd1531*/
  *((_QWORD *)Block + 43) = &LevelBadgePopup::`vftable'; /*0xd153f*/
  *((_QWORD *)Block + 44) = &LevelBadgePopup::`vftable'; /*0xd154d*/
  *((_QWORD *)Block + 51) = &LevelBadgePopup::`vftable'; /*0xd155b*/
  *((_QWORD *)Block + 54) = &LevelBadgePopup::`vftable'; /*0xd1569*/
  *((_QWORD *)Block + 68) = &LevelBadgePopup::`vftable'; /*0xd1577*/
  v4 = Block + 664; /*0xd157e*/
  *((_QWORD *)Block + 83) = &LevelBadgePopup::`vftable'; /*0xd158c*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd158f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd1599*/
  {
    v6 = operator new(0x690u); /*0xd15a0*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd15ad*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd15be*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd15c0*/
  }
  if ( *(char **)(v5 + 1352) == v4 ) /*0xd15ce*/
    *(_QWORD *)(v5 + 1352) = 0; /*0xd15d0*/
  v7 = cocos2d::CCDirector::sharedDirector(Block); /*0xd15db*/
  v8 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 144LL))(v7); /*0xd15ee*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v8, (struct cocos2d::CCObject *)Block); /*0xd15f6*/
  sub_3C310(Block + 696); /*0xd1603*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0xd160b*/
  if ( (a2 & 1) != 0 ) /*0xd1615*/
    j_j_free(Block); /*0xd161f*/
  return Block; /*0xd1627*/
}

// [2/4] Address: 0xe4130
// Method: LevelBadgePopup::loadLevelsFinished
// Hidden C++ exception states: #wind=3
int __fastcall LevelBadgePopup_loadLevelsFinished(__int64 a1, cocos2d::CCArray *a2, _BYTE *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  const void *v8; // rcx
  size_t v9; // r8
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  signed int i; // ebx
  signed int v15; // eax
  struct cocos2d::CCObject *v16; // rax
  __int64 *v17; // r15
  const char *v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int128 v25; // [rsp+38h] [rbp-70h] BYREF
  __int64 v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int128 v28; // [rsp+58h] [rbp-50h] BYREF
  __int64 v29; // [rsp+68h] [rbp-40h]
  __int64 v30; // [rsp+70h] [rbp-38h]
  void *v31; // [rsp+C0h] [rbp+18h]

  v6 = -1; /*0xe4152*/
  if ( !a3 ) /*0xe415c*/
    goto LABEL_9; /*0xe415c*/
  v7 = -1; /*0xe415e*/
  do /*0xe4164*/
    ++v7; /*0xe4161*/
  while ( a3[v7] ); /*0xe4164*/
  v8 = (const void *)(a1 + 32); /*0xe416b*/
  if ( *(_QWORD *)(a1 + 56) > 0xFu ) /*0xe4174*/
    v8 = *(const void **)(a1 + 32); /*0xe4176*/
  v9 = *(_QWORD *)(a1 + 48); /*0xe417a*/
  if ( v9 == v7 )
  {
    if ( !v9 || (LODWORD(v7) = memcmp(v8, a3, v9), !(_DWORD)v7) )
    {
LABEL_9:
      v10 = a1 - 664; /*0xe419c*/
      v11 = a1; /*0xe41a3*/
      if ( a1 == 664 ) /*0xe41ac*/
        v11 = 0; /*0xe41ac*/
      v12 = *(_QWORD *)&qword_905FB0; /*0xe41b0*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xe41ba*/
      {
        v31 = operator new(0x690u); /*0xe41c6*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v31); /*0xe41d7*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xe41e8*/
        v12 = *(_QWORD *)&qword_905FB0; /*0xe41ea*/
      }
      if ( *(_QWORD *)(v12 + 1352) == v11 ) /*0xe41f8*/
        *(_QWORD *)(v12 + 1352) = 0; /*0xe41fa*/
      v13 = *(_QWORD *)(a1 + 64); /*0xe4201*/
      if ( v13 ) /*0xe4208*/
      {
        LoadingCircle_fadeAndRemove(v13); /*0xe420a*/
        *(_QWORD *)(a1 + 64) = 0; /*0xe420f*/
      }
      for ( i = 0; ; ++i )
      {
        v15 = a2 ? cocos2d::CCArray::count(a2) : 0;
        if ( i >= v15 ) /*0xe422b*/
          break; /*0xe422b*/
        v16 = cocos2d::CCArray::objectAtIndex(a2, i); /*0xe4232*/
        if ( *(_BYTE *)(a1 + 12) ) /*0xe4238*/
          v13 = *((unsigned int *)v16 + 86); /*0xe423e*/
        else
          v13 = (unsigned int)(*((_DWORD *)v16 + 82) - *((_DWORD *)v16 + 83)); /*0xe424c*/
        if ( (_DWORD)v13 == *(_DWORD *)(a1 + 8) ) /*0xe4255*/
        {
          LODWORD(v7) = sub_E4520(a1 - 664, v16); /*0xe4261*/
          return v7; /*0xe4266*/
        }
      }
      v17 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v13) + 272); /*0xe4271*/
      v25 = 0; /*0xe4288*/
      v26 = 0; /*0xe428d*/
      v27 = 15; /*0xe4292*/
      LOBYTE(v25) = 0; /*0xe429b*/
      v18 = "Level not found"; /*0xe42a7*/
      if ( *(_BYTE *)(a1 + 12) ) /*0xe42ae*/
        v18 = "List not found"; /*0xe42b2*/
      v28 = 0; /*0xe42b6*/
      v29 = 0; /*0xe42bb*/
      v30 = 0; /*0xe42c0*/
      do /*0xe42c8*/
        ++v6; /*0xe42c5*/
      while ( v18[v6] ); /*0xe42c8*/
      sub_3C230(&v28); /*0xe42d6*/
      v19 = *v17; /*0xe42db*/
      v22 = sub_3A4CA0(&v28, v20, v21, 150, &v25); /*0xe4303*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v19 + 456))(v17, v22, 1000); /*0xe4314*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 992LL))(a1 - 664, 0); /*0xe4322*/
      LOBYTE(v23) = 1; /*0xe432b*/
      LODWORD(v7) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 520LL))(a1 - 664, v23); /*0xe4330*/
    }
  }
  return v7; /*0xe4336*/
}

// [3/4] Address: 0xe48a0
// Method: LevelBadgePopup::ccTouchBegan
char __fastcall LevelBadgePopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  const struct cocos2d::CCPoint *Location; // rax
  __int64 v7; // rdx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  Location = (const struct cocos2d::CCPoint *)cocos2d::CCTouch::getLocation(a2, &v9); /*0xe48c0*/
  if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)(a1 + 360), Location) ) /*0xe48d0*/
    return FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0xe4930*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 320) + 992LL))(a1 - 320, 0); /*0xe48ea*/
  LOBYTE(v7) = 1; /*0xe48fe*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 320) + 520LL))(a1 - 320, v7); /*0xe4900*/
  return 1; /*0xe4908*/
}

// [4/4] Address: 0xe4940
// Method: LevelBadgePopup::show
__int64 __fastcall LevelBadgePopup_show(__int64 a1)
{
  cocos2d::CCScene *v2; // rbx
  int v3; // eax

  v2 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xe4953*/
  if ( *(_QWORD *)(a1 + 568) ) /*0xe495a*/
  {
    v2 = *(cocos2d::CCScene **)(a1 + 568); /*0xe4966*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v2) + 1 >= 120 ) /*0xe4979*/
      v3 = cocos2d::CCScene::getHighestChildZ(v2) + 1; /*0xe498b*/
    else
      v3 = 120; /*0xe497b*/
    *(_DWORD *)(a1 + 592) = v3; /*0xe498d*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0xe4993*/
    *(_DWORD *)(a1 + 592) = 120; /*0xe499f*/
  return (*(__int64 (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1);
}
