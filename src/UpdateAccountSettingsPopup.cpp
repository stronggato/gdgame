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

// Address: 0x298b90
// Method: UpdateAccountSettingsPopup::init
// Hidden C++ exception states: #wind=3
__int64 __fastcall UpdateAccountSettingsPopup_init(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned int v6; // ebx
  float v7; // xmm7_4
  float v8; // xmm6_4
  __int64 v9; // rsi
  char v10; // cl
  __int64 i; // rbx
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r8
  void *v15; // rcx
  double v16; // xmm0_8
  float v17; // xmm6_4
  double v18; // xmm0_8
  float v19; // xmm9_4
  float v20; // xmm6_4
  _DWORD *v21; // rax
  __int64 v22; // rax
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  char v26; // dl
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  _BYTE v35[16]; // [rsp+50h] [rbp-B0h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h]
  _BYTE v38[528]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[528]; // [rsp+290h] [rbp+190h] BYREF

  v3 = a3;
  v34 = a3;
  *(_QWORD *)&v33 = a2;
  v6 = *(_DWORD *)(a1 + 1036);
  fmt::BasicWriter<char>::BasicWriter<char>(v38);
  fmt::BasicWriter<char>::operator<<(v38, 1);
  *(_QWORD *)&v33 = &unk_709CE8;
  *((_QWORD *)&v33 + 1) = 0;
  fmt::BasicWriter<char>::operator<<(v38, &v33);
  fmt::BasicWriter<char>::operator<<(v38, v6);
  v7 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
  v8 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1) + 4) - 90.0;
  *(_QWORD *)&v33 = &unk_709CE8;
  *((_QWORD *)&v33 + 1) = 0;
  fmt::BasicWriter<char>::operator<<(v38, &v33);
  fmt::BasicWriter<char>::operator<<(v38, 2);
  *(_QWORD *)&v33 = &unk_709CE8;
  *((_QWORD *)&v33 + 1) = 0;
  fmt::BasicWriter<char>::operator<<(v38, &v33);
  if ( (float)(int)v7 == v7 )
    fmt::BasicWriter<char>::operator<<(v38, (unsigned int)(int)v7);
  else
    fmt::BasicWriter<char>::operator<<(v38);
  *(_QWORD *)&v33 = &unk_709CE8;
  *((_QWORD *)&v33 + 1) = 0;
  fmt::BasicWriter<char>::operator<<(v38, &v33);
  fmt::BasicWriter<char>::operator<<(v38, 3);
  *(_QWORD *)&v33 = &unk_709CE8;
  *((_QWORD *)&v33 + 1) = 0;
  fmt::BasicWriter<char>::operator<<(v38, &v33);
  if ( (float)(int)v8 == v8 )
    fmt::BasicWriter<char>::operator<<(v38, (unsigned int)(int)v8);
  else
    fmt::BasicWriter<char>::operator<<(v38);
  if ( *(_BYTE *)(a1 + 1028) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 96);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 1);
  }
  if ( *(_BYTE *)(a1 + 1301) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 134);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1301));
  }
  if ( *(_BYTE *)(a1 + 1302) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 135);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1302));
  }
  if ( *(_BYTE *)(a1 + 640) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 511);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 640));
  }
  if ( *(_BYTE *)(a1 + 1303) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 136);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1303));
  }
  if ( *(_BYTE *)(a1 + 1304) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 289);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1304));
  }
  if ( *(_BYTE *)(a1 + 1308) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 495);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1308));
  }
  if ( *(_BYTE *)(a1 + 1309) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 496);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1309));
  }
  if ( *(_BYTE *)(a1 + 1310) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 509);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1310));
  }
  if ( *(_BYTE *)(a1 + 1307) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 356);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1307));
  }
  if ( *(_BYTE *)(a1 + 977) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 372);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 977));
  }
  if ( *(_WORD *)(a1 + 1048) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 497);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, (unsigned int)*(__int16 *)(a1 + 1048));
  }
  if ( *(_BYTE *)(a1 + 1305) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 137);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1305));
  }
  if ( *(_BYTE *)(a1 + 1306) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 193);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1306));
  }
  if ( *(_BYTE *)(a1 + 1222) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 121);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1222));
  }
  if ( *(_WORD *)(a1 + 1020) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 343);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, (unsigned int)*(__int16 *)(a1 + 1020));
  }
  if ( *(_WORD *)(a1 + 1022) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 446);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, (unsigned int)*(__int16 *)(a1 + 1022));
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1272LL))(a1) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 4);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 1);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1280LL))(a1) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 5);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 1);
  }
  if ( *(int *)(a1 + 880) > 0 )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 108);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned int *)(a1 + 880));
  }
  if ( *(_WORD *)(a1 + 1210) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 20);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, (unsigned int)*(__int16 *)(a1 + 1210));
  }
  if ( *(_WORD *)(a1 + 1212) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 61);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, (unsigned int)*(__int16 *)(a1 + 1212));
  }
  if ( *(_BYTE *)(a1 + 1267) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 103);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1267));
  }
  v9 = -1;
  if ( *(__int16 *)(a1 + 1176) > 0 )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 57);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::BasicWriter<char>(v39);
    v10 = 1;
    for ( i = 0; i < 20; i += 2 )
    {
      v12 = *(__int16 *)(*(_QWORD *)(a1 + 1168) + i);
      if ( v12 > 0 )
      {
        if ( !v10 )
        {
          *(_QWORD *)&v33 = ".";
          *((_QWORD *)&v33 + 1) = 0;
          fmt::BasicWriter<char>::operator<<(v39, &v33);
        }
        fmt::BasicWriter<char>::operator<<(v39, (unsigned int)v12);
        v10 = 0;
      }
    }
    v13 = fmt::BasicWriter<char>::c_str(v39);
    *(_OWORD *)Block = 0;
    v37 = 0;
    v14 = -1;
    v3 = v34;
    do
      ++v14;
    while ( *(_BYTE *)(v13 + v14) );
    sub_3C230(Block);
    fmt::BasicWriter<char>::~BasicWriter<char>(v39);
    v33 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v35, Block);
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    if ( *((_QWORD *)&v37 + 1) > 0xFu )
    {
      v15 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 )
      {
        v15 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v15);
    }
  }
  if ( *(_BYTE *)(a1 + 1178) && v3 )
  {
    sub_329270(v3, Block, a1);
    if ( (_QWORD)v37 )
    {
      *(_QWORD *)&v33 = &unk_709CE8;
      *((_QWORD *)&v33 + 1) = 0;
      fmt::BasicWriter<char>::operator<<(v38, &v33);
      fmt::BasicWriter<char>::operator<<(v38, 274);
      *(_QWORD *)&v33 = &unk_709CE8;
      *((_QWORD *)&v33 + 1) = 0;
      fmt::BasicWriter<char>::operator<<(v38, &v33);
      v33 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v35, Block);
      fmt::BasicWriter<char>::operator<<(v38, &v33);
    }
    sub_3C310(Block);
  }
  if ( *(_BYTE *)(a1 + 1051) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 64);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 1);
  }
  if ( *(_BYTE *)(a1 + 1050) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 67);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 1);
  }
  if ( *(_BYTE *)(a1 + 1052) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 116);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1052));
  }
  if ( *(_BYTE *)(a1 + 1053) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 507);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1053));
  }
  if ( *(int *)(a1 + 1328) > 0 )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 155);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned int *)(a1 + 1328));
  }
  if ( *(int *)(a1 + 1332) > 0 )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 156);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned int *)(a1 + 1332));
  }
  if ( *(_DWORD *)(a1 + 1076) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 53);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned int *)(a1 + 1076));
  }
  if ( *(_DWORD *)(a1 + 1136) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 25);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned int *)(a1 + 1136));
  }
  v16 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 376LL))(a1);
  v17 = *(float *)&v16;
  v18 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 392LL))(a1);
  v19 = *(float *)&v18;
  v20 = roundf((float)(v17 - (float)(360 * (int)(float)(v17 / 360.0))) * 100.0) / 100.0;
  if ( v20 == (float)(roundf((float)(v19 - (float)(360 * (int)(float)(v19 / 360.0))) * 100.0) / 100.0) )
  {
    if ( v20 == 0.0 )
      goto LABEL_93;
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 6);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
  }
  else
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 131);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 132);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
  }
  fmt::BasicWriter<char>::operator<<(v38);
LABEL_93:
  if ( **(_DWORD **)(a1 + 1104) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 21);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, **(unsigned int **)(a1 + 1104));
  }
  v21 = *(_DWORD **)(a1 + 1112);
  if ( v21 && *v21 )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 22);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, **(unsigned int **)(a1 + 1112));
  }
  if ( *(_DWORD *)(a1 + 1132) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 24);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned int *)(a1 + 1132));
  }
  if ( *(float *)(a1 + 1160) != 1.0 )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 128);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38);
  }
  if ( *(float *)(a1 + 1164) != 1.0 )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 129);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38);
  }
  if ( *(_BYTE *)(a1 + 1158) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 34);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1158));
  }
  if ( *(_BYTE *)(a1 + 1159) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 279);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, *(unsigned __int8 *)(a1 + 1159));
  }
  v22 = *(_QWORD *)(a1 + 1104);
  v23 = *(float *)&xmmword_8F8460;
  if ( *(float *)(v22 + 16) != *(float *)&xmmword_8F8460
    || (v24 = *((float *)&xmmword_8F8460 + 1), *(float *)(v22 + 20) != *((float *)&xmmword_8F8460 + 1))
    || (v25 = *((float *)&xmmword_8F8460 + 2), *(float *)(v22 + 24) != *((float *)&xmmword_8F8460 + 2))
    || (v26 = BYTE12(xmmword_8F8460), *(_BYTE *)(v22 + 28) != BYTE12(xmmword_8F8460))
    || (v27 = BYTE13(xmmword_8F8460), *(_BYTE *)(v22 + 29) != BYTE13(xmmword_8F8460)) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 41);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 1);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 43);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    v33 = *(_OWORD *)(*(_QWORD *)(a1 + 1104) + 16LL);
    v28 = GameToolbox_saveParticleToString((__int64)Block, (__int64)&v33);
    v33 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v35, v28);
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    sub_3C310(Block);
    v27 = BYTE13(xmmword_8F8460);
    v26 = BYTE12(xmmword_8F8460);
    v25 = *((float *)&xmmword_8F8460 + 2);
    v24 = *((float *)&xmmword_8F8460 + 1);
    v23 = *(float *)&xmmword_8F8460;
  }
  v29 = *(_QWORD *)(a1 + 1112);
  if ( v29
    && (*(float *)(v29 + 16) != v23
     || *(float *)(v29 + 20) != v24
     || *(float *)(v29 + 24) != v25
     || *(_BYTE *)(v29 + 28) != v26
     || *(_BYTE *)(v29 + 29) != v27) )
  {
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 42);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 1);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    fmt::BasicWriter<char>::operator<<(v38, 44);
    *(_QWORD *)&v33 = &unk_709CE8;
    *((_QWORD *)&v33 + 1) = 0;
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    v33 = *(_OWORD *)(*(_QWORD *)(a1 + 1112) + 16LL);
    v30 = GameToolbox_saveParticleToString((__int64)Block, (__int64)&v33);
    v33 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v35, v30);
    fmt::BasicWriter<char>::operator<<(v38, &v33);
    sub_3C310(Block);
  }
  v31 = fmt::BasicWriter<char>::c_str(v38);
  *(_OWORD *)a2 = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  do
    ++v9;
  while ( *(_BYTE *)(v31 + v9) );
  sub_3C230(a2);
  fmt::BasicWriter<char>::~BasicWriter<char>(v38);
  return a2;
}
