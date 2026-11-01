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
