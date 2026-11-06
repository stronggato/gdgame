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

// Address: 0x601b90
// Method: SetupAudioLineGuidePopup::init
// Hidden C++ exception states: #wind=4
char __fastcall SetupAudioLineGuidePopup_init(__int64 a1, int a2, int a3, int a4)
{
  int v5; // ebx
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  const struct cocos2d::CCPoint *v12; // rax
  struct cocos2d::CCLabelBMFont *v13; // r14
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  const char *v18; // rcx
  cocos2d::CCObject *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int128 *v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  float v29; // [rsp+A8h] [rbp-58h] BYREF
  float v30; // [rsp+ACh] [rbp-54h]
  __int128 *v31; // [rsp+B0h] [rbp-50h] BYREF
  __int128 *v32; // [rsp+B8h] [rbp-48h] BYREF
  char v33[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v34[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-18h]

  v5 = 1;
  result = sub_6060E0(a1, a2, a3, a4, 1132068864, 1, 0);
  if ( result )
  {
    *(_BYTE *)(a1 + 744) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1);
    *(_BYTE *)(a1 + 888) = 1;
    *((_QWORD *)&v26 + 1) = 101;
    v27 = 9;
    v28 = 15;
    *(_QWORD *)&v26 = 0x64697547204D5042LL;
    sub_606E80(a1, &v26);
    v26 = 0;
    v27 = 2;
    v28 = 15;
    strcpy((char *)&v26, "OK");
    SetupTriggerPopup_addCloseButton(a1, (__int64 *)&v26);
    v25 = &v26;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    *(_QWORD *)&v26 = sub_3C460(208);
    v27 = 195;
    v28 = 207;
    strcpy(
      (char *)v26,
      "Creates lines in the editor to help <cg>synchronize</c> to music.\n"
      "<cy>BPM</c> is beats per minute. The position is based on speed.\n"
      "<cl>BPB</c> is beats per bar. This adds more lines to each beat.");
    v35 = 0;
    v36 = 4;
    v37 = 15;
    strcpy((char *)&v35, "Help");
    sub_6070A0(a1, &v35, &v26);
    v8 = cocos2d::CCDirector::sharedDirector(v7);
    cocos2d::CCDirector::getWinSize(v8, &v29);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v33, v29 * 0.5, v30 * 0.5);
    v31 = &v26;
    v26 = 0;
    v27 = 3;
    v28 = 15;
    LOWORD(v26) = *(_WORD *)"BPM";
    WORD1(v26) = (unsigned __int8)aBpm[2];
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, -80.0, 60.0);
    cocos2d::CCPoint::operator+(v33, &v25, v9);
    sub_6088F0(
      a1,
      498,
      (unsigned int)&v26,
      (unsigned int)&v25,
      1061997773,
      0,
      3,
      10,
      0,
      1065353216,
      1128792064,
      0,
      0,
      0,
      0,
      0);
    v32 = &v26;
    v26 = 0;
    v27 = 3;
    v28 = 15;
    LODWORD(v26) = 4345922;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, 80.0, 60.0);
    cocos2d::CCPoint::operator+(v33, &v25, v10);
    sub_6088F0(
      a1,
      501,
      (unsigned int)&v26,
      (unsigned int)&v25,
      1061997773,
      0,
      3,
      10,
      0,
      1065353216,
      1092616192,
      0,
      0,
      0,
      0,
      0);
    v32 = &v35;
    v36 = 8;
    v37 = 15;
    v35 = 0x6E6F697461727544uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, 0.0, -10.0);
    cocos2d::CCPoint::operator+(v33, &v25, v11);
    sub_6088F0(
      a1,
      10,
      (unsigned int)&v35,
      (unsigned int)&v25,
      1061997773,
      0,
      3,
      10,
      0,
      1065353216,
      1123024896,
      0,
      0,
      0,
      0,
      0);
    v32 = &v26;
    HIWORD(v26) = 0;
    v27 = 7;
    v28 = 15;
    qmemcpy(&v26, "Disabl", 6);
    *(_QWORD *)((char *)&v26 + 6) = (unsigned __int8)aDisable[6];
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v31,
      (float)((float)(*(float *)(a1 + 732) * 0.5) + (float)(v29 * 0.5)) - 35.0,
      (float)((float)(v30 * 0.5) - (float)(*(float *)(a1 + 736) * 0.5)) + 25.0);
    SetupTriggerPopup_createToggleValueControl(a1, 500, (__int64)&v26, v12, 1, 0, 0, 1.0);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v34,
      (float)((float)(v29 * 0.5) - (float)(*(float *)(a1 + 732) * 0.5)) + 40.0,
      (float)((float)(v30 * 0.5) - (float)(*(float *)(a1 + 736) * 0.5)) + 70.0);
    v13 = cocos2d::CCLabelBMFont::create((const char *)&dword_76FBD8, "goldFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v13 + 160LL))(v13);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v13);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, char *))(*(_QWORD *)v13 + 184LL))(v13, v34);
    v14 = (int)(*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 499);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 == 1 )
              v5 = 4;
          }
          else
          {
            v5 = 3;
          }
        }
        else
        {
          v5 = 2;
        }
      }
      else
      {
        v5 = 0;
      }
    }
    SelectSettingLayer_frameForItem((__int64)&v35, 2u, v5);
    v18 = (const char *)&v35;
    if ( v37 > 0xF )
      v18 = (const char *)v35;
    *(_QWORD *)(a1 + 1008) = cocos2d::CCSprite::createWithSpriteFrameName(v18);
    sub_3C310(&v35);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1008) + 160LL))(*(_QWORD *)(a1 + 1008));
    v19 = CCMenuItemSpriteExtra_create(*(_QWORD *)(a1 + 1008), 0, a1, (__int64)SetupAudioLineGuidePopup_onSpeed);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v19);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, 0.0, -34.0);
    v21 = v20;
    v22 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v13 + 200LL))(v13);
    cocos2d::CCPoint::operator+(v22, &v25, v21);
    v23 = *(_QWORD *)v19;
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), &v31, &v25);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v23 + 184))(v19, v24);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1136LL))(a1);
    *(_BYTE *)(a1 + 744) = 0;
    return 1;
  }
  return result;
}
