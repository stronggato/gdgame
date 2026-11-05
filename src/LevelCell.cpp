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

// Address: 0x146bf0
// Method: LevelCell::loadCustomLevelCell
// Hidden C++ exception states: #wind=33
double __fastcall LevelCell_loadCustomLevelCell(__int64 a1)
{
  _DWORD *v2; // rdx
  float v3; // xmm14_4
  int v4; // eax
  float v5; // xmm6_4
  const char *p_Buf2; // rcx
  cocos2d::CCLabelBMFont *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  char v10; // si
  const char *v11; // rcx
  cocos2d::CCLabelBMFont *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  float v15; // xmm2_4
  void (__fastcall *v16)(cocos2d::CCLabelBMFont *, __int64); // rbx
  __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm1_4
  __int64 v20; // rax
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v26; // r12
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  char v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rdx
  bool v34; // bl
  __int64 v35; // rdi
  unsigned __int64 v36; // rbx
  char *v37; // rcx
  const char *v38; // rax
  unsig... [73742 chars total]

// Address: 0x14a2c0
// Method: LevelCell::loadLocalLevelCell
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelCell_loadLocalLevelCell(__int64 a1)
{
  const char *v2; // rcx
  struct cocos2d::CCLabelBMFont *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // xmm8_4
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // edx
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  double v15; // xmm0_8
  float v16; // xmm6_4
  const struct cocos2d::CCSize *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  cocos2d::CCObject *v21; // rbx
  cocos2d::CCObject *v22; // rax
  cocos2d::CCObject *v23; // r12
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  float v30; // xmm6_4
  struct cocos2d::CCSprite *v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  struct cocos2d::CCLabelBMFont *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  struct cocos2d::CCSprite *v41; // rsi
  float v42; // xmm6_4
  double v43; // xmm0_8
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  _OWORD *SongName; // rax
  struct cocos2d::CCLabelBMFont *v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  struct cocos2d::CCSprite *v54; // rsi
  float v55; // xmm6_4
  double v56; // xmm0_8
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  const char *v61; // rcx
  int v62; // eax
  struct cocos2d::CCLabelBMFont *v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  _BYTE v70[8]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v71[8]; // [rsp+48h] [rbp-51h] BYREF
  float v72[2]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v73; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v74; // [rsp+70h] [rbp-29h]

  sub_3E4F0(&v73, *(_QWORD *)(a1 + 568) + 344LL);
  v2 = (const char *)&v73;
  if ( v74 > 0xF )
    v2 = (const char *)v73;
  v3 = cocos2d::CCLabelBMFont::create(v2, (const char *)&qword_6FFF68);
  sub_3C310(&v73);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v3);
  v4 = *(_QWORD *)v3;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v70, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v4 + 288))(v3, v5);
  v6 = 1065353216;
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 160LL))(v3);
  v7 = *(_QWORD *)v3;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v70, 12.0, (float)(*(float *)(a1 + 532) * 0.5) + 14.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v7 + 184))(v3, v8);
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 320LL))(v3) > 200.0 )
  {
    (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 320LL))(v3);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 160LL))(v3);
  }
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 168LL))(v3);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 160LL))(v3);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 568) + 684LL);
  if ( v9 > 0 )
  {
    v10 = cocos2d::CCString::createWithFormat("Rev. %i", v9);
    CString = cocos2d::CCString::getCString(v10);
    v12 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v12);
    v13 = *(_QWORD *)v12;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v70, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v13 + 288))(v12, v14);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 160LL))(v12);
    v15 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 168LL))(v3);
    v16 = *(float *)&v15;
    v17 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 320LL))(v3);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v72, v17);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v71,
      (float)(v72[0] * v16) + 10.0,
      (float)-(float)(v72[1] * 0.5) * v16);
    v19 = v18;
    v20 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 200LL))(v3);
    cocos2d::CCPoint::operator+(v20, v70, v19);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v12 + 184LL))(v12, v70);
  }
  v21 = ButtonSprite_create(
          (int)"View",
          50,
          0,
          0.60000002,
          0,
          (__int64)&qword_6FFF68,
          (__int64)"GJ_button_01.png",
          1106247680);
  v22 = CCMenuItemSpriteExtra_create((int)v21, 0, a1, (__int64)LevelCell_onClick);
  v23 = v22;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 568) + 844LL) )
    v6 = 1069547520;
  *((_DWORD *)v22 + 93) = v6;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 600) + 464LL))(*(_QWORD *)(a1 + 600), v22);
  v24 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v21 + 320LL))(v21);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v71,
    (float)(*(float *)(a1 + 528) - (float)(v24 * 0.5)) - 9.0,
    *(float *)(a1 + 532) * 0.5);
  cocos2d::CCPoint::operator=(a1 + 592, v25);
  v26 = *(_QWORD *)v23;
  v27 = *(_QWORD *)(a1 + 600);
  cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 544), v71, a1 + 592);
  cocos2d::CCNode::convertToNodeSpace(v27, v70, v28);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v26 + 184))(v23, v29);
  v30 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v3 + 200LL))(v3) + 9.0;
  v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_timeIcon_001.png");
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v31);
  v32 = *(_QWORD *)v31;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, v30, 20.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v32 + 184))(v31, v33);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 160LL))(v31);
  v34 = sub_260E90(&v73, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 972LL));
  if ( *(_QWORD *)(v34 + 24) > 0xFu )
    v34 = *(_QWORD *)v34;
  v35 = cocos2d::CCLabelBMFont::create((const char *)v34, (const char *)&qword_6FFF68);
  sub_3C310(&v73);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v35);
  v36 = *(_QWORD *)v35;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v36 + 288))(v35, v37);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 9.0, 0.0);
  v39 = v38;
  v40 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 200LL))(v31);
  cocos2d::CCPoint::operator+(v40, v70, v39);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v35 + 184LL))(v35, v70);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 320LL))(v35);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 160LL))(v35);
  v41 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_noteIcon_001.png");
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v41);
  v42 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 320LL))(v35);
  v43 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 168LL))(v35);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, (float)(*(float *)&v43 * v42) + 17.0, 0.0);
  v45 = v44;
  v46 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 200LL))(v35);
  cocos2d::CCPoint::operator+(v46, v70, v45);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v41 + 184LL))(v41, v70);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v41 + 160LL))(v41);
  SongName = GJGameLevel_getSongName(*(_QWORD *)(a1 + 568), &v73);
  if ( *((_QWORD *)SongName + 3) > 0xFu )
    SongName = *(_OWORD **)SongName;
  v48 = cocos2d::CCLabelBMFont::create((const char *)SongName, (const char *)&qword_6FFF68);
  sub_3C310(&v73);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v48);
  v49 = *(_QWORD *)v48;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v49 + 288))(v48, v50);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 9.0, 0.0);
  v52 = v51;
  v53 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v41 + 200LL))(v41);
  cocos2d::CCPoint::operator+(v53, v70, v52);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v48 + 184LL))(v48, v70);
  fminf(
    100.0 / *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v48 + 320LL))(v48),
    0.40000001);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v48 + 160LL))(v48);
  v54 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v54);
  v55 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v48 + 320LL))(v48);
  v56 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v48 + 168LL))(v48);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, (float)(*(float *)&v56 * v55) + 17.0, 0.0);
  v58 = v57;
  v59 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v48 + 200LL))(v48);
  cocos2d::CCPoint::operator+(v59, v70, v58);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v54 + 184LL))(v54, v70);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v54 + 160LL))(v54);
  v60 = *(_QWORD *)(a1 + 568);
  if ( *(_BYTE *)(v60 + 857) )
  {
    v61 = "Uploaded";
  }
  else
  {
    v62 = *(_DWORD *)(v60 + 848) - *(_DWORD *)(v60 + 852);
    v61 = "Verified";
    if ( v62 != 1 )
      v61 = "Unverified";
  }
  v63 = cocos2d::CCLabelBMFont::create(v61, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v63);
  v64 = *(_QWORD *)v63;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v64 + 288))(v63, v65);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 9.0, 0.0);
  v67 = v66;
  v68 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v54 + 200LL))(v54);
  cocos2d::CCPoint::operator+(v68, v70, v67);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v63 + 184LL))(v63, v70);
  fminf(
    60.0 / *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v63 + 320LL))(v63),
    0.40000001);
  return (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v63 + 160LL))(v63);
}
