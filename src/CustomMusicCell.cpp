#include <Geode/binding/CustomMusicCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x14e820
// Method: CustomMusicCell::~CustomMusicCell
_QWORD *__fastcall CustomMusicCell__dtor_CustomMusicCell(_QWORD *Block, char a2)
{
  *Block = &CustomMusicCell::`vftable'; /*0x14e833*/
  Block[40] = &CustomMusicCell::`vftable'; /*0x14e840*/
  Block[41] = &CustomMusicCell::`vftable'; /*0x14e84e*/
  Block[42] = &CustomMusicCell::`vftable'; /*0x14e85c*/
  Block[43] = &CustomMusicCell::`vftable'; /*0x14e86a*/
  Block[44] = &CustomMusicCell::`vftable'; /*0x14e878*/
  Block[70] = &CustomMusicCell::`vftable'; /*0x14e886*/
  CustomSongCell_CustomSongCell(Block); /*0x14e88d*/
  if ( (a2 & 1) != 0 ) /*0x14e895*/
    j_j_free(Block); /*0x14e89f*/
  return Block; /*0x14e8a4*/
}

// [2/2] Address: 0x14e8c0
// Method: CustomMusicCell::loadFromObject
bool __fastcall CustomMusicCell_loadFromObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  cocos2d::CCNode *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebp
  const char *v14; // rcx
  struct cocos2d::CCSprite *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  bool result; // al
  _BYTE v23[16]; // [rsp+60h] [rbp-28h] BYREF
  __int16 v24; // [rsp+90h] [rbp+8h] BYREF
  char v25; // [rsp+92h] [rbp+Ah]

  v3 = a2; /*0x14e8d6*/
  LOBYTE(a2) = 1; /*0x14e8e0*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2); /*0x14e8e5*/
  v4 = *(_QWORD *)(a1 + 416); /*0x14e8eb*/
  *(_QWORD *)(a1 + 568) = v3; /*0x14e8f2*/
  v5 = *(_QWORD *)(v4 + 624); /*0x14e8f9*/
  if ( v5 ) /*0x14e903*/
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5); /*0x14e908*/
    v3 = *(_QWORD *)(a1 + 568); /*0x14e90b*/
    v7 = v6; /*0x14e912*/
  }
  else
  {
    v7 = 1; /*0x14e916*/
  }
  v8 = a1 + 560; /*0x14e91e*/
  if ( !a1 ) /*0x14e94f*/
    v8 = 0; /*0x14e94f*/
  v9 = CustomSongWidget_create(v3, v8, 1u, 1, 1, 0, 0, 1, v7 == 1, 1, 0); /*0x14e973*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))( /*0x14e983*/
    *(_QWORD *)(a1 + 544),
    v9,
    2);
  v10 = *(_QWORD *)v9; /*0x14e9a6*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, *(float *)(a1 + 528) * 0.5, *(float *)(a1 + 532) * 0.5); /*0x14e9b1*/
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v10 + 184))(v9, v11); /*0x14e9bd*/
  *((_BYTE *)v9 + 512) = 1; /*0x14e9c3*/
  v12 = *(_QWORD *)(a1 + 568); /*0x14e9cb*/
  v13 = *(_DWORD *)(v12 + 492); /*0x14e9d9*/
  if ( *(_BYTE *)(v12 + 488) || v13 > 0 ) /*0x14e9e3*/
  {
    v14 = "newMusicIcon_001.png"; /*0x14e9fa*/
    if ( v13 > 0 ) /*0x14ea01*/
      v14 = "newMusicIcon2_001.png"; /*0x14ea01*/
    v15 = cocos2d::CCSprite::createWithSpriteFrameName(v14); /*0x14ea17*/
    (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v9 + 456LL))(v9, v15, 4); /*0x14ea24*/
    v16 = *(_QWORD *)v15; /*0x14ea3f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, -157.0, 20.0); /*0x14ea42*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v16 + 184))(v15, v17); /*0x14ea4e*/
    if ( v13 > 0 ) /*0x14ea56*/
    {
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)v23, 0.0, 0.0, 80.0, 80.0); /*0x14ea75*/
      v19 = cocos2d::extension::CCScale9Sprite::create("GJ_square07.png", v18); /*0x14ea8b*/
      v24 = -256; /*0x14ea8e*/
      v25 = -1; /*0x14ea98*/
      (**(void (__fastcall ***)(__int64, __int16 *))(v19 + 320))(v19 + 320, &v24); /*0x14eab5*/
      v20 = *(_QWORD *)v19; /*0x14ead0*/
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v24, 320.0, 50.0); /*0x14ead3*/
      (*(void (__fastcall **)(__int64, __int64))(v20 + 312))(v19, v21); /*0x14eadf*/
      (*(void (__fastcall **)(cocos2d::CCNode *, __int64, __int64))(*(_QWORD *)v9 + 456LL))(v9, v19, 0xFFFFFFFFLL); /*0x14eaf4*/
    }
  }
  result = *(_DWORD *)(*(_QWORD *)(a1 + 568) + 320LL) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 560) /*0x14eb2d*/
                                                                                                 + 8LL))(a1 + 560);
  *(_BYTE *)(a1 + 576) = result; /*0x14eb30*/
  return result; /*0x14eb36*/
}
