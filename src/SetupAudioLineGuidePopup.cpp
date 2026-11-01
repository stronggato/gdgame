#include <Geode/binding/SetupAudioLineGuidePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x6022d0
// Method: SetupAudioLineGuidePopup::onSpeed
__int64 __fastcall SetupAudioLineGuidePopup_onSpeed(__int64 a1)
{
  float v2; // xmm0_4
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 499); /*0x6022e1*/
  v3 = (__int64 *)sub_4581A0(2, (unsigned int)(int)v2); /*0x6022f0*/
  v4 = a1 + 1000; /*0x6022f7*/
  if ( !a1 ) /*0x602301*/
    v4 = 0; /*0x602301*/
  v5 = *v3; /*0x602305*/
  v3[85] = v4; /*0x602308*/
  return (*(__int64 (__fastcall **)(__int64 *))(v5 + 1064))(v3); /*0x602319*/
}

// [3/3] Address: 0x602330
// Method: SetupAudioLineGuidePopup::selectSettingClosed
// Hidden C++ exception states: #wind=1
double __fastcall SetupAudioLineGuidePopup_selectSettingClosed(__int64 a1, __int64 a2)
{
  int v3; // edi
  int v4; // r8d
  unsigned int v5; // edx
  const char *v6; // rbx
  cocos2d::CCSpriteFrameCache *v7; // rax
  struct cocos2d::CCSpriteFrame *v8; // rax
  _QWORD v10[4]; // [rsp+28h] [rbp-30h] BYREF

  v3 = 0; /*0x602351*/
  v4 = *(_DWORD *)(a2 + 672); /*0x602353*/
  v5 = *(_DWORD *)(a2 + 676); /*0x60235a*/
  if ( v5 == 2 ) /*0x602362*/
  {
    if ( v4 ) /*0x602374*/
    {
      if ( v4 != 1 ) /*0x602379*/
      {
        switch ( v4 ) /*0x60237e*/
        {
          case 2: /*0x60237e*/
            v3 = 2; /*0x602398*/
            break;
          case 3: /*0x60237e*/
            v3 = 3; /*0x602391*/
            break;
          case 4: /*0x60237e*/
            v3 = 4; /*0x60238a*/
            break;
        }
      }
    }
    else
    {
      v3 = 1; /*0x60239f*/
    }
  }
  else
  {
    v3 = v4; /*0x6023a6*/
  }
  SelectSettingLayer_frameForItem((__int64)v10, v5, v4); /*0x6023ae*/
  v6 = (const char *)v10; /*0x6023b4*/
  if ( v10[3] > 0xFu ) /*0x6023bf*/
    v6 = (const char *)v10[0]; /*0x6023bf*/
  v7 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x6023c5*/
  v8 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v7, v6); /*0x6023d1*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSpriteFrame *))(**(_QWORD **)(a1 + 8) + 1008LL))( /*0x6023e8*/
    *(_QWORD *)(a1 + 8),
    v8);
  sub_3C310(v10); /*0x6023f1*/
  return SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)(a1 - 1000), 0x1F3u, (float)v3); /*0x60240e*/
}
