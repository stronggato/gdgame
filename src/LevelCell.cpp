#include <Geode/binding/LevelCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x146340
// Method: LevelCell::~LevelCell
_QWORD *__fastcall LevelCell__dtor_LevelCell(_QWORD *Block, char a2)
{
  *Block = &LevelCell::`vftable'; /*0x146353*/
  Block[40] = &LevelCell::`vftable'; /*0x146360*/
  Block[41] = &LevelCell::`vftable'; /*0x14636e*/
  Block[42] = &LevelCell::`vftable'; /*0x14637c*/
  Block[43] = &LevelCell::`vftable'; /*0x14638a*/
  Block[44] = &LevelCell::`vftable'; /*0x146398*/
  URLCell__dtor_URLCell(); /*0x14639f*/
  if ( (a2 & 1) != 0 ) /*0x1463a7*/
    j_j_free(Block); /*0x1463b1*/
  return Block; /*0x1463b6*/
}

// [2/9] Address: 0x146460
// Method: LevelCell::LevelCell
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelCell_LevelCell(__int64 a1)
{
  SmartTemplateCell_loadFromObject(); /*0x14646d*/
  *(_QWORD *)a1 = &LevelCell::`vftable'; /*0x14647a*/
  *(_QWORD *)(a1 + 320) = &LevelCell::`vftable'; /*0x146484*/
  *(_QWORD *)(a1 + 328) = &LevelCell::`vftable'; /*0x146492*/
  *(_QWORD *)(a1 + 336) = &LevelCell::`vftable'; /*0x1464a0*/
  *(_QWORD *)(a1 + 344) = &LevelCell::`vftable'; /*0x1464ae*/
  *(_QWORD *)(a1 + 352) = &LevelCell::`vftable'; /*0x1464bc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 592)); /*0x1464ca*/
  *(_WORD *)(a1 + 577) = 0; /*0x1464d0*/
  *(_BYTE *)(a1 + 608) = 0; /*0x1464d9*/
  *(_BYTE *)(a1 + 576) = 0; /*0x1464e0*/
  *(_QWORD *)(a1 + 568) = 0; /*0x1464e9*/
  *(_QWORD *)(a1 + 560) = 0; /*0x1464f0*/
  *(_QWORD *)(a1 + 600) = 0; /*0x1464f7*/
  *(_QWORD *)(a1 + 584) = 0; /*0x1464fe*/
  *(_DWORD *)(a1 + 612) = 0; /*0x146505*/
  return a1; /*0x14650e*/
}

// [3/9] Address: 0x146520
// Method: LevelCell::init
__int64 __fastcall LevelCell_init(__int64 a1)
{
  *(_QWORD *)(a1 + 568) = 0; /*0x146522*/
  *(_QWORD *)(a1 + 560) = 0; /*0x146529*/
  *(_QWORD *)(a1 + 600) = 0; /*0x146530*/
  *(_QWORD *)(a1 + 584) = 0; /*0x146537*/
  *(_DWORD *)(a1 + 612) = 0; /*0x14653e*/
  return 1; /*0x146546*/
}

// [4/9] Address: 0x146550
// Method: LevelCell::loadFromLevel
__int64 __fastcall LevelCell_loadFromLevel(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  struct cocos2d::CCMenu *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  struct cocos2d::CCSprite *v7; // rdi
  struct cocos2d::CCSprite *v8; // rbx
  cocos2d::CCMenuItem *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // [rsp+50h] [rbp+8h] BYREF
  char v18; // [rsp+58h] [rbp+10h] BYREF
  char v19; // [rsp+60h] [rbp+18h] BYREF
  char v20; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2; /*0x14655a*/
  LOBYTE(a2) = 1; /*0x146564*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2); /*0x146569*/
  *(_QWORD *)(a1 + 584) = 0; /*0x146571*/
  v4 = cocos2d::CCMenu::create(0); /*0x14657c*/
  v5 = *(_QWORD *)(a1 + 544); /*0x146582*/
  *(_QWORD *)(a1 + 600) = v4; /*0x14658f*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)v5 + 456LL))(v5, v4, 3); /*0x1465a3*/
  *(_QWORD *)(a1 + 568) = v3; /*0x1465a6*/
  if ( *(_DWORD *)(v3 + 1220) == 2 ) /*0x1465b7*/
    LevelCell_loadLocalLevelCell(a1); /*0x1465b9*/
  else
    LevelCell_loadCustomLevelCell(a1); /*0x1465c0*/
  result = *(_QWORD *)(a1 + 568); /*0x1465c5*/
  if ( *(_BYTE *)(result + 844) ) /*0x1465cc*/
  {
    if ( !*(_BYTE *)(a1 + 608) ) /*0x1465d9*/
    {
      v7 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"); /*0x146604*/
      v8 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"); /*0x146610*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v7 + 160LL))(v7); /*0x146625*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v8 + 160LL))(v8); /*0x14663c*/
      v9 = CCMenuItemToggler_create((__int64)v8, (__int64)v7, a1, (__int64)sub_146740); /*0x14664e*/
      *(_QWORD *)(a1 + 584) = v9; /*0x146653*/
      CCMenuItemToggler_toggle((__int64)v9, *(unsigned __int8 *)(v3 + 843)); /*0x146664*/
      v10 = *(_QWORD *)(a1 + 584); /*0x146669*/
      *(_DWORD *)(*(_QWORD *)(v10 + 376) + 372LL) = 1067030938; /*0x146677*/
      *(_DWORD *)(*(_QWORD *)(v10 + 384) + 372LL) = 1067030938; /*0x146688*/
      CCMenuItemToggler_toggle(v10, *(unsigned __int8 *)(v10 + 392)); /*0x146699*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 600) + 464LL))( /*0x1466af*/
        *(_QWORD *)(a1 + 600),
        *(_QWORD *)(a1 + 584));
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, -50.0, 0.0); /*0x1466c5*/
      cocos2d::CCPoint::operator+(a1 + 592, &v17, v11); /*0x1466da*/
      v12 = *(__int64 **)(a1 + 584); /*0x1466e0*/
      v13 = *(_QWORD *)(a1 + 600); /*0x1466f8*/
      v14 = *v12; /*0x1466ff*/
      cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 544), &v19, &v17); /*0x146702*/
      cocos2d::CCNode::convertToNodeSpace(v13, &v20, v15); /*0x146713*/
      return (*(__int64 (__fastcall **)(__int64 *, __int64))(v14 + 184))(v12, v16); /*0x14671f*/
    }
  }
  return result; /*0x14672f*/
}

// [7/9] Address: 0x14acd0
// Method: LevelCell::onClick
// Hidden C++ exception states: #wind=3
__int64 __fastcall LevelCell_onClick(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64, __int64, _QWORD); // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  cocos2d::CCObject *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  _BYTE v18[40]; // [rsp+70h] [rbp-28h] BYREF
  void *v19; // [rsp+A0h] [rbp+8h]
  void *v20; // [rsp+A0h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 576) ) /*0x14ace3*/
  {
    result = *(_QWORD *)(a1 + 416); /*0x14acec*/
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64, __int64, _QWORD))(result + 624); /*0x14acf3*/
    if ( !v5 ) /*0x14acfd*/
      return result; /*0x14acfd*/
    v6 = 1; /*0x14ad05*/
    v7 = 37; /*0x14ad0b*/
    return (**v5)(v5, a1, v7, v6, 0); /*0x14ad11*/
  }
  if ( *(_DWORD *)(a1 + 552) == 29 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) ) /*0x14ad25*/
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x14ad35*/
    if ( v8 ) /*0x14ad38*/
    {
      v9 = v8 - 1; /*0x14ad3a*/
      if ( v9 ) /*0x14ad3d*/
      {
        result = (unsigned int)(v9 - 1); /*0x14ad3f*/
        if ( (_DWORD)result ) /*0x14ad42*/
        {
          if ( (_DWORD)result != 1 ) /*0x14ad47*/
            return result; /*0x14ad47*/
          v6 = 2; /*0x14ad4d*/
        }
        else
        {
          v6 = 5; /*0x14ad55*/
        }
      }
      else
      {
        v6 = 4; /*0x14ad5d*/
      }
    }
    else
    {
      v6 = 3; /*0x14ad65*/
    }
    result = *(_QWORD *)(a1 + 416); /*0x14ad6b*/
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64, __int64, _QWORD))(result + 624); /*0x14ad72*/
    if ( v5 ) /*0x14ad7c*/
    {
LABEL_28:
      v7 = *(unsigned int *)(a1 + 552); /*0x14afbe*/
      return (**v5)(v5, a1, v7, v6, 0); /*0x14afc5*/
    }
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(a1 + 568) + 864LL) > 22 ) /*0x14ad97*/
    {
      v15 = 0; /*0x14ada0*/
      *(_QWORD *)&v15 = sub_3C460(64); /*0x14adbe*/
      v16 = 54; /*0x14adc3*/
      v17 = 63; /*0x14adcc*/
      strcpy((char *)v15, "Please update your application to download this level."); /*0x14addc*/
      v10 = sub_3E4F0(v18, &v15); /*0x14ae24*/
      v11 = FLAlertLayer_create_0(0, (int)"Unavailable", v10, (__int64)"Close", 0, 1132068864, 0, 0, 1065353216); /*0x14ae70*/
      sub_3C310(&v15); /*0x14ae78*/
      return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v11 + 1064LL))(v11); /*0x14ae9c*/
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 5 /*0x14aebb*/
      || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 6 )
    {
      v6 = (unsigned int)((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 5) + 9; /*0x14afa7*/
      result = *(_QWORD *)(a1 + 416); /*0x14afab*/
      v5 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64, __int64, _QWORD))(result + 624); /*0x14afb2*/
      if ( !v5 ) /*0x14afbc*/
        return result; /*0x14afbc*/
      goto LABEL_28; /*0x14afbc*/
    }
    if ( *(int *)(*(_QWORD *)(a1 + 568) + 1412LL) <= 0 ) /*0x14aecf*/
    {
      v14 = *(_QWORD *)&qword_905FB0; /*0x14af35*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x14af3f*/
      {
        v20 = operator new(0x690u); /*0x14af4b*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v20); /*0x14af5c*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x14af6d*/
        v14 = *(_QWORD *)&qword_905FB0; /*0x14af6f*/
      }
      return sub_21E250(v14, *(_QWORD *)(a1 + 568)); /*0x14af8d*/
    }
    else
    {
      v12 = *(_QWORD *)&qword_905FB0; /*0x14aed1*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x14aedb*/
      {
        v19 = operator new(0x690u); /*0x14aee7*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0x14aef8*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x14af09*/
        v12 = *(_QWORD *)&qword_905FB0; /*0x14af0b*/
      }
      v13 = sub_146790(a1); /*0x14af15*/
      return sub_21E250(v12, v13); /*0x14af30*/
    }
  }
  return result; /*0x14ae8c*/
}

// [8/9] Address: 0x14aff0
// Method: LevelCell::onViewProfile
__int64 __fastcall LevelCell_onViewProfile(__int64 a1)
{
  __int64 result; // rax
  char *v2; // rax

  result = *(_QWORD *)(a1 + 568); /*0x14aff4*/
  if ( *(_DWORD *)(result + 660) - *(_DWORD *)(result + 664) > 0 ) /*0x14b009*/
  {
    v2 = ProfilePage_create(*(_DWORD *)(result + 660) - *(_DWORD *)(result + 664), 0); /*0x14b00d*/
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 1064LL))(v2); /*0x14b023*/
  }
  return result; /*0x14b01f*/
}

// [9/9] Address: 0x14b030
// Method: LevelCell::draw
void __fastcall LevelCell_draw(__int64 a1)
{
  const struct cocos2d::CCPoint *v1; // rax
  const struct cocos2d::CCPoint *v2; // rbx
  cocos2d *v3; // rax
  const struct cocos2d::CCPoint *v4; // r8
  const struct cocos2d::CCPoint *v5; // rax
  const struct cocos2d::CCPoint *v6; // rbx
  cocos2d *v7; // rax
  const struct cocos2d::CCPoint *v8; // r8
  float v9; // [rsp+40h] [rbp+8h] BYREF
  float v10; // [rsp+44h] [rbp+Ch]
  char v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !*(_BYTE *)(a1 + 578) ) /*0x14b034*/
  {
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v9, *(float *)(a1 + 528), *(float *)(a1 + 532)); /*0x14b060*/
    cocos2d::ccDrawColor4B(0, 0, 0, 0x4Bu); /*0x14b070*/
    glLineWidth(2.0); /*0x14b07e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v9 - 1.0, v10); /*0x14b0a1*/
    v2 = v1; /*0x14b0b5*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, 1.0, v10); /*0x14b0b8*/
    cocos2d::ccDrawLine(v3, v2, v4); /*0x14b0c4*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v9 - 1.0, 0.0); /*0x14b0dc*/
    v6 = v5; /*0x14b0ed*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, 1.0, 0.0); /*0x14b0f0*/
    cocos2d::ccDrawLine(v7, v6, v8); /*0x14b0fc*/
  }
}
