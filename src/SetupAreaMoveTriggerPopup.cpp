#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x19a620
// Method: SetupAreaMoveTriggerPopup::SetupAreaMoveTriggerPopup
__int64 __fastcall SetupAreaMoveTriggerPopup_SetupAreaMoveTriggerPopup(__int64 a1)
{
  SetupTriggerPopup_SetupTriggerPopup(a1); /*0x19a629*/
  *(_QWORD *)a1 = &TabbedPopupLayer::`vftable'; /*0x19a635*/
  *(_QWORD *)(a1 + 320) = &TabbedPopupLayer::`vftable'; /*0x19a63f*/
  *(_QWORD *)(a1 + 328) = &TabbedPopupLayer::`vftable'; /*0x19a64d*/
  *(_QWORD *)(a1 + 336) = &TabbedPopupLayer::`vftable'; /*0x19a65b*/
  *(_QWORD *)(a1 + 344) = &TabbedPopupLayer::`vftable'; /*0x19a669*/
  *(_QWORD *)(a1 + 352) = &TabbedPopupLayer::`vftable'; /*0x19a677*/
  *(_QWORD *)(a1 + 408) = &TabbedPopupLayer::`vftable'; /*0x19a685*/
  *(_QWORD *)(a1 + 432) = &TabbedPopupLayer::`vftable'; /*0x19a693*/
  *(_QWORD *)(a1 + 544) = &TabbedPopupLayer::`vftable'; /*0x19a6a1*/
  *(_QWORD *)(a1 + 664) = &TabbedPopupLayer::`vftable'; /*0x19a6af*/
  *(_QWORD *)(a1 + 672) = &TabbedPopupLayer::`vftable'; /*0x19a6bd*/
  *(_QWORD *)(a1 + 1000) = 0; /*0x19a6c6*/
  *(_QWORD *)(a1 + 1008) = 0; /*0x19a6cd*/
  *(_QWORD *)(a1 + 1016) = 0; /*0x19a6d4*/
  *(_QWORD *)(a1 + 1024) = 0; /*0x19a6db*/
  *(_QWORD *)(a1 + 1032) = 0; /*0x19a6e2*/
  *(_QWORD *)(a1 + 1040) = 0; /*0x19a6e9*/
  *(_DWORD *)(a1 + 1048) = 0; /*0x19a6f0*/
  *(_QWORD *)(a1 + 1056) = 0; /*0x19a6f6*/
  *(_QWORD *)(a1 + 1064) = 0; /*0x19a6fd*/
  *(_DWORD *)(a1 + 1052) = -1; /*0x19a707*/
  return a1; /*0x19a711*/
}

// [2/5] Address: 0x313d40
// Method: SetupAreaMoveTriggerPopup::onMode
__int64 __fastcall SetupAreaMoveTriggerPopup_onMode(__int64 *a1, _BYTE *a2, __int64 a3, int *a4)
{
  const struct cocos2d::CCRect *v8; // rax
  float MidY; // xmm6_4
  float MidX; // xmm0_4
  __int64 v11; // rax
  __int64 v12; // rax
  float v13; // xmm0_4
  __int64 v14; // rax
  int v15; // eax
  int v16; // esi
  __int64 v17; // rbp
  int v18; // edx
  __int64 v19; // rbx
  __int64 result; // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  _BYTE v23[8]; // [rsp+20h] [rbp-58h] BYREF
  float v24; // [rsp+28h] [rbp-50h]
  _BYTE v25[8]; // [rsp+30h] [rbp-48h] BYREF
  float v26; // [rsp+38h] [rbp-40h]
  float v27; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int8 v28; // [rsp+40h] [rbp-38h]
  char v29; // [rsp+80h] [rbp+8h] BYREF

  v8 = (const struct cocos2d::CCRect *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 1184LL))(a2); /*0x313d6f*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v23, v8); /*0x313d7d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25); /*0x313d88*/
  MidY = cocos2d::CCRect::getMidY((cocos2d::CCRect *)v23); /*0x313d9e*/
  MidX = cocos2d::CCRect::getMidX((cocos2d::CCRect *)v23); /*0x313da1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v29, MidX, MidY); /*0x313db5*/
  cocos2d::CCPoint::operator=(v25, v11); /*0x313dc3*/
  v12 = *(_QWORD *)a2; /*0x313dd2*/
  v26 = v24; /*0x313dd5*/
  v13 = (*(float (__fastcall **)(_BYTE *))(v12 + 1424))(a2); /*0x313ddb*/
  v28 = a2[2445]; /*0x313deb*/
  v14 = *a1; /*0x313def*/
  v27 = v13; /*0x313df2*/
  v15 = (*(__int64 (__fastcall **)(__int64 *))(v14 + 1184))(a1); /*0x313df8*/
  v16 = v15; /*0x313e01*/
  v17 = (*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) / 20LL; /*0x313e25*/
  if ( (int)v17 <= 0
    || ((int)v17 < v15 ? (v18 = v17 - 1) : (v18 = (v15 + *a4 - 1) % v15),
        (v19 = *(_QWORD *)a3 + 20LL * v18,
         !cocos2d::CCPoint::equals((cocos2d::CCPoint *)v19, (const struct cocos2d::CCPoint *)v25))
     || *(float *)(v19 + 12) != v27
     || *(float *)(v19 + 8) != v26
     || (result = v28, *(_BYTE *)(v19 + 16) != v28)) )
  {
    if ( (int)v17 >= v16 ) /*0x313e88*/
    {
      v22 = *(_QWORD *)a3 + 20LL * *a4; /*0x313ee8*/
      cocos2d::CCPoint::operator=(v22, v25); /*0x313eef*/
      *(float *)(v22 + 8) = v26; /*0x313efb*/
      *(float *)(v22 + 12) = v27; /*0x313f06*/
      *(_BYTE *)(v22 + 16) = v28; /*0x313f10*/
      result = (unsigned int)((*a4 + 1) / v16); /*0x313f19*/
      *a4 = (*a4 + 1) % v16; /*0x313f1b*/
    }
    else
    {
      v21 = *(_QWORD *)(a3 + 8); /*0x313e8a*/
      if ( v21 == *(_QWORD *)(a3 + 16) ) /*0x313e92*/
      {
        result = sub_358230(a3, *(_QWORD *)(a3 + 8), v25); /*0x313ed2*/
      }
      else
      {
        cocos2d::CCPoint::CCPoint(*(cocos2d::CCPoint **)(a3 + 8), (const struct cocos2d::CCPoint *)v25); /*0x313e9c*/
        *(float *)(v21 + 8) = v26; /*0x313ea8*/
        *(float *)(v21 + 12) = v27; /*0x313eb3*/
        result = v28; /*0x313eb8*/
        *(_BYTE *)(v21 + 16) = v28; /*0x313ebd*/
        *(_QWORD *)(a3 + 8) += 20LL; /*0x313ec0*/
      }
    }
    *((_BYTE *)a1 + 14600) = 1; /*0x313f1e*/
  }
  return result; /*0x313f26*/
}

// [3/5] Address: 0x59dca0
// Method: SetupAreaMoveTriggerPopup::~SetupAreaMoveTriggerPopup
// Decompilation failed: [WinError 10054] Удаленный хост принудительно разорвал существующее подключение

// [4/5] Address: 0x5a0290
// Method: SetupAreaMoveTriggerPopup::updateDefaultTriggerValues
// Decompilation failed: <urlopen error [WinError 10061] Подключение не установлено, т.к. конечный компьютер отверг запрос на подключение>

// [5/5] Address: 0x5a0760
// Method: SetupAreaMoveTriggerPopup::valueDidChange
// Decompilation failed: <urlopen error [WinError 10061] Подключение не установлено, т.к. конечный компьютер отверг запрос на подключение>
