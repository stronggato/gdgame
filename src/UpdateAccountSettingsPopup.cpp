#include <Geode/binding/UpdateAccountSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/5] Address: 0x39cfe0
// Method: UpdateAccountSettingsPopup::updateSettingsFinished
double __fastcall UpdateAccountSettingsPopup_updateSettingsFinished(__int64 a1)
{
  struct cocos2d::CCSprite *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  *(_BYTE *)(a1 + 8) = 1; /*0x39cff2*/
  v2 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png"); /*0x39d00e*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v2 + 160LL))(v2); /*0x39d014*/
  v3 = *(_QWORD *)v2; /*0x39d01e*/
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 544LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 544LL)); /*0x39d02b*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v3 + 184))(v2, v4); /*0x39d037*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 - 80) + 464LL))( /*0x39d047*/
    *(_QWORD *)(a1 - 80),
    v2);
  LoadingCircle_fadeAndRemove(*(_QWORD *)(a1 + 32)); /*0x39d051*/
  v6 = 0; /*0x39d065*/
  *(_QWORD *)&v6 = sub_3C460(32); /*0x39d07b*/
  v7 = 25; /*0x39d085*/
  v8 = 31; /*0x39d08e*/
  strcpy((char *)v6, "Account settings updated!"); /*0x39d097*/
  return TextArea_setString(*(__int64 **)(a1 + 24), (const void **)&v6); /*0x39d0be*/
}

// [3/5] Address: 0x39d0d0
// Method: UpdateAccountSettingsPopup::updateSettingsFailed
double __fastcall UpdateAccountSettingsPopup_updateSettingsFailed(__int64 a1)
{
  struct cocos2d::CCSprite *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rcx
  const void *v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = cocos2d::CCSprite::createWithSpriteFrameName("exMark_001.png"); /*0x39d0f3*/
  v3 = *(_QWORD *)v2; /*0x39d0f6*/
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 544LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 544LL)); /*0x39d103*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v3 + 184))(v2, v4); /*0x39d10f*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 - 80) + 464LL))( /*0x39d11f*/
    *(_QWORD *)(a1 - 80),
    v2);
  LoadingCircle_fadeAndRemove(*(_QWORD *)(a1 + 32)); /*0x39d129*/
  v5 = *(__int64 **)(a1 + 24); /*0x39d141*/
  HIBYTE(v7[1]) = 0; /*0x39d155*/
  v7[2] = &loc_D + 1; /*0x39d15c*/
  v7[3] = &loc_D + 2; /*0x39d165*/
  strcpy((char *)v7, "Update Failed."); /*0x39d16e*/
  return TextArea_setString(v5, v7); /*0x39d179*/
}

// [4/5] Address: 0x39d190
// Method: UpdateAccountSettingsPopup::onClose
__int64 __fastcall UpdateAccountSettingsPopup_onClose(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x39d19e*/
  LOBYTE(v2) = 1; /*0x39d1a7*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2); /*0x39d1ac*/
  if ( *(_BYTE *)(a1 + 672) ) /*0x39d1b2*/
  {
    v4 = *(int **)(a1 + 680); /*0x39d1bb*/
    if ( v4 ) /*0x39d1c5*/
    {
      GJAccountSettingsLayer_updateScoreValues(v4); /*0x39d1c7*/
      v5 = *(_QWORD **)(a1 + 680); /*0x39d1cc*/
      sub_39B190(v5, v5[86]); /*0x39d1dd*/
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 992LL))(v5, 0); /*0x39d1ea*/
      LOBYTE(v6) = 1; /*0x39d1f3*/
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v5 + 520LL))(v5, v6); /*0x39d1fd*/
    }
  }
  return result; /*0x39d204*/
}

// [5/5] Address: 0x39d210
// Method: UpdateAccountSettingsPopup::keyBackClicked
__int64 __fastcall UpdateAccountSettingsPopup_keyBackClicked(__int64 a1)
{
  return UpdateAccountSettingsPopup_onClose(a1 - 336);
}
