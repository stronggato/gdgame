#include <Geode/binding/EditorSFXSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x18b150
// Method: EditorSFXSettingsPopup::getValue
double __fastcall EditorSFXSettingsPopup_getValue(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  double result; // xmm0_8

  if ( a2 != 9001 ) /*0x18b15a*/
    return SetupTriggerPopup_getValue(a1, a2); /*0x18b221*/
  v2 = *(_DWORD *)(a1 + 1000); /*0x18b165*/
  v3 = (_QWORD *)sub_182B60(a1); /*0x18b16b*/
  v4 = v3[19]; /*0x18b1b2*/
  v5 = v3[17]; /*0x18b1c4*/
  v6 = 2 /*0x18b1d2*/
     * (v3[22]
      & (0x100000001B3LL
       * (((unsigned __int64)v2 >> 24)
        ^ (0x100000001B3LL
         * (BYTE2(v2)
          ^ (0x100000001B3LL * ((0x100000001B3LL * ((unsigned __int8)v2 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v2))))))));
  v7 = *(_QWORD *)(v4 /*0x18b1d5*/
                 + 16
                 * (v3[22]
                  & (0x100000001B3LL
                   * (((unsigned __int64)v2 >> 24)
                    ^ (0x100000001B3LL
                     * (BYTE2(v2)
                      ^ (0x100000001B3LL
                       * ((0x100000001B3LL * ((unsigned __int8)v2 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v2))))))))
                 + 8);
  if ( v7 == v5 ) /*0x18b1dd*/
    goto LABEL_7; /*0x18b1dd*/
  v8 = *(_QWORD *)(v4 + 8 * v6); /*0x18b1df*/
  if ( v2 != *(_DWORD *)(v7 + 16) ) /*0x18b1e6*/
  {
    while ( v7 != v8 ) /*0x18b1eb*/
    {
      v7 = *(_QWORD *)(v7 + 8); /*0x18b1ed*/
      if ( v2 == *(_DWORD *)(v7 + 16) ) /*0x18b1f4*/
        goto LABEL_8; /*0x18b1f4*/
    }
LABEL_7:
    v7 = 0; /*0x18b1f8*/
  }
LABEL_8:
  if ( !v7 ) /*0x18b202*/
    v7 = v5; /*0x18b202*/
  if ( v7 == v5 ) /*0x18b209*/
    return 0.0; /*0x18b215*/
  *(_QWORD *)&result = *(unsigned int *)(v7 + 20); /*0x18b20b*/
  return result; /*0x18b210*/
}

// [2/2] Address: 0x18b230
// Method: EditorSFXSettingsPopup::valueDidChange
void __fastcall EditorSFXSettingsPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 v3; // rcx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 == 9001 ) /*0x18b236*/
  {
    v5 = *(_DWORD *)(a1 + 1000); /*0x18b24a*/
    v3 = sub_182B60(a1) + 128; /*0x18b259*/
    if ( a3 > 0.0 ) /*0x18b260*/
      *(float *)(*(_QWORD *)sub_66DF0(v3, v4, &v5) + 20LL) = a3; /*0x18b288*/
    else
      sub_658F0(v3, &v5); /*0x18b267*/
  }
}
