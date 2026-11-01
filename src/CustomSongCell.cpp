#include <Geode/binding/CustomSongCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x14dd00
// Method: CustomSongCell::CustomSongCell
void __fastcall CustomSongCell_CustomSongCell(_QWORD *a1)
{
  *a1 = &CustomSongCell::`vftable'; /*0x14dd07*/
  a1[40] = &CustomSongCell::`vftable'; /*0x14dd11*/
  a1[41] = &CustomSongCell::`vftable'; /*0x14dd1f*/
  a1[42] = &CustomSongCell::`vftable'; /*0x14dd2d*/
  a1[43] = &CustomSongCell::`vftable'; /*0x14dd3b*/
  a1[44] = &CustomSongCell::`vftable'; /*0x14dd49*/
  a1[70] = &CustomSongCell::`vftable'; /*0x14dd57*/
  URLCell__dtor_URLCell(a1); /*0x14dd5e*/
}

// [2/5] Address: 0x14de40
// Method: CustomSongCell::loadFromObject
bool __fastcall CustomSongCell_loadFromObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // edx
  cocos2d::CCNode *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  struct cocos2d::CCSprite *v8; // rbx
  struct cocos2d::CCMenuItem *v9; // rax
  struct cocos2d::CCMenu *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  bool result; // al
  char v14; // [rsp+80h] [rbp+8h] BYREF

  v3 = a2; /*0x14de63*/
  LOBYTE(a2) = 1; /*0x14de66*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2); /*0x14de6b*/
  *(_QWORD *)(a1 + 568) = v3; /*0x14de73*/
  v4 = a1 + 560; /*0x14de7e*/
  if ( !a1 ) /*0x14de9f*/
    v4 = 0; /*0x14de9f*/
  v5 = CustomSongWidget_create(v3, v4, 1u, 1, 0, 0, 0, 0, 0, 0, 0); /*0x14dec0*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x14ded0*/
    *(_QWORD *)(a1 + 544),
    v5,
    2);
  v6 = *(_QWORD *)v5; /*0x14def3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, *(float *)(a1 + 528) * 0.5, *(float *)(a1 + 532) * 0.5); /*0x14defe*/
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v6 + 184))(v5, v7); /*0x14df0a*/
  *((_BYTE *)v5 + 512) = 1; /*0x14df17*/
  v8 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_trashBtn_001.png"); /*0x14df2c*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v8 + 160LL))(v8); /*0x14df3c*/
  v9 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v8, 0, a1, sub_14E0A0); /*0x14df4d*/
  *((_DWORD *)v9 + 93) = 1069547520; /*0x14df57*/
  v10 = cocos2d::CCMenu::create(v9, 0); /*0x14df74*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x14df84*/
    *(_QWORD *)(a1 + 544),
    v10,
    3);
  v11 = *(_QWORD *)v10; /*0x14df9f*/
  cocos2d::CCPoint::CCPoint( /*0x14dfba*/
    (cocos2d::CCPoint *)&v14,
    (float)(*(float *)(a1 + 528) * 0.5) + 90.0,
    (float)(*(float *)(a1 + 532) * 0.5) - 24.0);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v11 + 184))(v10, v12); /*0x14dfc6*/
  result = *(_DWORD *)(*(_QWORD *)(a1 + 568) + 320LL) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 560) /*0x14dffc*/
                                                                                                 + 8LL))(a1 + 560);
  *(_BYTE *)(a1 + 576) = result; /*0x14dfff*/
  return result; /*0x14e005*/
}

// [3/5] Address: 0x14e010
// Method: CustomSongCell::songIDChanged
__int64 __fastcall CustomSongCell_songIDChanged(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64, __int64, _QWORD); // rcx

  result = *(_QWORD *)(a1 - 144); /*0x14e014*/
  v2 = a1 - 560; /*0x14e01b*/
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64, __int64, _QWORD))(result + 624); /*0x14e022*/
  if ( v3 ) /*0x14e02c*/
    return (**v3)(v3, v2, 14, 1, 0); /*0x14e046*/
  return result; /*0x14e048*/
}

// [4/5] Address: 0x14e050
// Method: CustomSongCell::getActiveSongID
__int64 __fastcall CustomSongCell_getActiveSongID(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 - 144) + 624LL); /*0x14e057*/
  if ( v1 ) /*0x14e061*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1); /*0x14e066*/
  else
    return 0; /*0x14e06a*/
}

// [5/5] Address: 0x14e070
// Method: CustomSongCell::getSongFileName
__int64 __fastcall CustomSongCell_getSongFileName(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = 0; /*0x14e079*/
  *(_QWORD *)(a2 + 16) = 0; /*0x14e07c*/
  *(_QWORD *)(a2 + 24) = 15; /*0x14e080*/
  *(_BYTE *)a2 = 0; /*0x14e088*/
  return a2; /*0x14e08d*/
}
