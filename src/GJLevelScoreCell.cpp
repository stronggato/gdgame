#include <Geode/binding/GJLevelScoreCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x154ac0
// Method: GJLevelScoreCell::~GJLevelScoreCell
_QWORD *__fastcall GJLevelScoreCell__dtor_GJLevelScoreCell(_QWORD *Block, char a2)
{
  *Block = &GJLevelScoreCell::`vftable'; /*0x154ad3*/
  Block[40] = &GJLevelScoreCell::`vftable'; /*0x154ae0*/
  Block[41] = &GJLevelScoreCell::`vftable'; /*0x154aee*/
  Block[42] = &GJLevelScoreCell::`vftable'; /*0x154afc*/
  Block[43] = &GJLevelScoreCell::`vftable'; /*0x154b0a*/
  Block[44] = &GJLevelScoreCell::`vftable'; /*0x154b18*/
  URLCell__dtor_URLCell(Block); /*0x154b1f*/
  if ( (a2 & 1) != 0 ) /*0x154b27*/
    j_j_free(Block); /*0x154b31*/
  return Block; /*0x154b36*/
}

// Address: 0x154b50
// Method: GJLevelScoreCell::loadFromScore
// Hidden C++ exception states: #wind=5
double __fastcall GJLevelScoreCell_loadFromScore(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  cocos2d::CCSprite *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  void (__fastcall **v8)(__int64, char *); // rbx
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v12; // rax
  bool v13; // al
  struct cocos2d::CCMenu *v14; // r12
  int v15; // eax
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  cocos2d::CCLabelBMFont *v18; // rbx
  char *v19; // rdx
  const char *v20; // rcx
  struct cocos2d::CCSprite *v21; // rbx
  const char *v22; // rcx
  cocos2d::CCLabelBMFont *v23; // r15
  float v24; // xmm2_4
  float v25; // xmm1_4
  cocos2d::CCObject *v26; // rdi
  float v27; // xmm6_4
  double v28; // xmm0_8
  float v29; // xmm9_4
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  float v33; // xmm6_4
  double v34; // xmm0_8
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // rax
  signed int v39; // edx
  __m128i *v40; // rbx
  void *v41; // rcx
  cocos2d::CCString *v42; // rax
  char *v43; // rax
  size_t v44; // r8
  void **v45; // rcx
  struct cocos2d::CCLabelBMFont *v46; // r14
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // ecx
  int v54; // r15d
  __int64 v55; // r12
  struct cocos2d::CCSprite *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  const char *v60; // rdx
  cocos2d::CCString *v61; // rax
  const char *v62; // rax
  cocos2d::CCLabelBMFont *v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int16 v70; // [rsp+30h] [rbp-D0h] BYREF
  char v71; // [rsp+32h] [rbp-CEh]
  char v72[8]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v73[12]; // [rsp+3Ch] [rbp-C4h] BYREF
  void *v74; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v75[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v76[8]; // [rsp+58h] [rbp-A8h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v78; // [rsp+70h] [rbp-90h]
  __int128 v79; // [rsp+80h] [rbp-80h] BYREF
  __int64 v80; // [rsp+90h] [rbp-70h]
  unsigned __int64 v81; // [rsp+98h] [rbp-68h]
  _QWORD v82[4]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2);
  *(_QWORD *)(a1 + 560) = v2;
  v4 = SimplePlayer_create(1u);
  (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v4,
    1);
  (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v4 + 160LL))(v4);
  v5 = *(_QWORD *)v4;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, 60.0, (float)(*(float *)(a1 + 532) * 0.5) + 0.0);
  (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v5 + 184))(v4, v6);
  v7 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v74 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v74);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v7 = qword_905FD0;
  }
  v8 = (void (__fastcall **)(__int64, char *))*((_QWORD *)v4 + 40);
  v9 = GameManager_colorForIdx(v7, (char *)&v70, *(_DWORD *)(*(_QWORD *)(a1 + 560) + 432LL));
  (*v8)((__int64)v4 + 320, v9);
  v10 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v74 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v74);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v10 = qword_905FD0;
  }
  v11 = GameManager_colorForIdx(v10, v72, *(_DWORD *)(*(_QWORD *)(a1 + 560) + 436LL));
  (**(void (__fastcall ***)(__int64, char *))(*((_QWORD *)v4 + 76) + 320LL))(*((_QWORD *)v4 + 76) + 320LL, v11);
  SimplePlayer_updateColors((__int64)v4);
  SimplePlayer_tryEnableCustomGlowColor((__int64)v4, *(_DWORD *)(*(_QWORD *)(a1 + 560) + 440LL));
  v12 = *(_QWORD *)(a1 + 560);
  v13 = *(_DWORD *)(v12 + 444) == 2 || *(_BYTE *)(v12 + 744);
  *((_BYTE *)v4 + 660) = v13;
  SimplePlayer_updatePlayerFrame(
    (__int64)v4,
    *(unsigned int *)(*(_QWORD *)(a1 + 560) + 428LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 560) + 448LL));
  SimplePlayer_updateColors((__int64)v4);
  v14 = cocos2d::CCMenu::create(0);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v14);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v75, 22.0, *(float *)(a1 + 532) * 0.5);
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 412LL);
  if ( v15 <= 3 )
  {
    v79 = 0;
    v80 = 0;
    v81 = 15;
    LOBYTE(v79) = 0;
    if ( v15 == 1 )
    {
      v19 = (char *)sub_3C460(32);
      v80 = 22;
      v81 = 31;
      strcpy(v19, "rankIcon_top10_001.png");
      *(_QWORD *)&v79 = v19;
    }
    else
    {
      if ( v15 == 2 )
      {
        v19 = (char *)sub_3C460(32);
        v80 = 22;
        v81 = 31;
        strcpy(v19, "rankIcon_top50_001.png");
      }
      else
      {
        v19 = (char *)sub_3C460(32);
        v80 = 23;
        v81 = 31;
        strcpy(v19, "rankIcon_top100_001.png");
      }
      *(_QWORD *)&v79 = v19;
    }
    v20 = (const char *)&v79;
    if ( v81 > 0xF )
      v20 = v19;
    v21 = cocos2d::CCSprite::createWithSpriteFrameName(v20);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v21);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v21 + 184LL))(v21, v75);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v21 + 160LL))(v21);
    sub_3C310(&v79);
  }
  else
  {
    v16 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v15);
    CString = cocos2d::CCString::getCString(v16);
    v18 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt");
    (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v18);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v18 + 184LL))(v18, v75);
    cocos2d::CCLabelBMFont::limitLabelWidth(v18, 20.0, 0.75, 0.0);
  }
  sub_3E4F0(&v79, *(_QWORD *)(a1 + 560) + 320LL);
  v22 = (const char *)&v79;
  if ( v81 > 0xF )
    v22 = (const char *)v79;
  v23 = cocos2d::CCLabelBMFont::create(v22, "goldFont.fnt");
  sub_3C310(&v79);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 560) + 936LL) == 1 )
  {
    v24 = 0.69999999;
    v25 = 100.0;
  }
  else
  {
    v24 = 0.80000001;
    v25 = 130.0;
  }
  cocos2d::CCLabelBMFont::limitLabelWidth(v23, v25, v24, 0.0);
  v26 = CCMenuItemSpriteExtra_create((int)v23, 0, a1, (__int64)sub_155650);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v14 + 464LL))(v14, v26);
  v27 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v23 + 320LL))(v23);
  v28 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v23 + 168LL))(v23);
  v29 = *(float *)&v28 * v27;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v74, 30.0, 0.0);
  v31 = v30;
  v32 = (*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v4 + 200LL))(v4);
  cocos2d::CCPoint::operator+(v32, v76, v31);
  v33 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v23 + 320LL))(v23) * 0.5;
  v34 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v23 + 168LL))(v23);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v74, *(float *)&v34 * v33, 0.0);
  cocos2d::CCPoint::operator+(v76, v72, v35);
  v36 = *(_QWORD *)v26;
  cocos2d::CCNode::convertToNodeSpace(v14, v73, v72);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v36 + 184))(v26, v37);
  if ( (unsigned __int8)GJUserScore_isCurrentUser(*(_QWORD *)(a1 + 560)) )
  {
    v70 = -26906;
    v71 = 10;
    (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 536) + 408LL))(*(_QWORD *)(a1 + 536) + 408LL, &v70);
  }
  v38 = *(_DWORD **)(a1 + 560);
  v39 = v38[99];
  *(_OWORD *)Block = 0;
  v78.m128i_i64[0] = 0;
  v78.m128i_i64[1] = 15;
  LOBYTE(Block[0]) = 0;
  if ( v38[234] == 1 )
  {
    if ( v38[235] )
    {
      v40 = GameToolbox_pointsToString((__int64)&v79, v39);
      if ( Block != (void **)v40 )
      {
        if ( v78.m128i_i64[1] > 0xFuLL )
        {
          v41 = Block[0];
          if ( (unsigned __int64)(v78.m128i_i64[1] + 1) >= 0x1000 )
          {
            v41 = (void *)*((_QWORD *)Block[0] - 1);
            if ( (unsigned __int64)((char *)Block[0] - (char *)v41 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          goto LABEL_39;
        }
LABEL_40:
        v78.m128i_i64[0] = 0;
        v78.m128i_i64[1] = 15;
        LOBYTE(Block[0]) = 0;
        *(__m128i *)Block = *v40;
        v78 = v40[1];
        v40[1].m128i_i64[0] = 0;
        v40[1].m128i_i64[1] = 15;
        v40->m128i_i8[0] = 0;
      }
    }
    else
    {
      v40 = (__m128i *)sub_73600(&v79);
      if ( Block != (void **)v40 )
      {
        if ( v78.m128i_i64[1] > 0xFuLL )
        {
          v41 = Block[0];
          if ( (unsigned __int64)(v78.m128i_i64[1] + 1) >= 0x1000 )
          {
            v41 = (void *)*((_QWORD *)Block[0] - 1);
            if ( (unsigned __int64)((char *)Block[0] - (char *)v41 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
LABEL_39:
          j_j_free(v41);
          goto LABEL_40;
        }
        goto LABEL_40;
      }
    }
    sub_3C310(&v79);
    goto LABEL_45;
  }
  v42 = cocos2d::CCString::createWithFormat("%i%%", v39);
  v43 = (char *)cocos2d::CCString::getCString(v42);
  v44 = -1;
  do
    ++v44;
  while ( v43[v44] );
  sub_3F5A0(Block, v43, v44);
LABEL_45:
  v45 = Block;
  if ( v78.m128i_i64[1] > 0xFuLL )
    v45 = (void **)Block[0];
  v46 = cocos2d::CCLabelBMFont::create((const char *)v45, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v46,
    2);
  v47 = *(_QWORD *)v46;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 560) + 936LL) == 1 )
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v47 + 288))(v46, v48);
    cocos2d::CCLabelBMFont::limitLabelWidth(v46, 85.0, 0.5, 0.0);
    v49 = *(_QWORD *)v46;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, *(float *)(a1 + 528) - 60.0, *(float *)(a1 + 532) * 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v49 + 184))(v46, v50);
  }
  else
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v47 + 288))(v46, v51);
    cocos2d::CCLabelBMFont::limitLabelWidth(v46, 200.0, 0.60000002, 0.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, v29 + 6.0, -1.0);
    cocos2d::CCPoint::operator+(v76, v72, v52);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, char *))(*(_QWORD *)v46 + 184LL))(v46, v72);
    v53 = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 420LL);
    if ( v53 > 0 )
    {
      v54 = 65;
      v55 = (unsigned int)v53;
      do
      {
        v56 = cocos2d::CCSprite::createWithSpriteFrameName("usercoin_small01_001.png");
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
          *(_QWORD *)(a1 + 544),
          v56);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v56 + 160LL))(v56);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, (float)v54, 5.0);
        v58 = v57;
        v59 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 200LL))(v46);
        cocos2d::CCPoint::operator+(v59, v72, v58);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, char *))(*(_QWORD *)v56 + 184LL))(v56, v72);
        v54 += 8;
        --v55;
      }
      while ( v55 );
    }
  }
  sub_3E4F0(v82, *(_QWORD *)(a1 + 560) + 800LL);
  v60 = (const char *)v82;
  if ( v82[3] > 0xFu )
    v60 = (const char *)v82[0];
  v61 = cocos2d::CCString::createWithFormat("%s ago", v60);
  v62 = cocos2d::CCString::getCString(v61);
  v63 = cocos2d::CCLabelBMFont::create(v62, "chatFont.fnt");
  (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v63,
    1);
  v64 = *(_QWORD *)v63;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, 1.0, 0.5);
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v64 + 288))(v63, v65);
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v63 + 160LL))(v63);
  (**((void (__fastcall ***)(__int64, __int16 *))v63 + 46))((__int64)v63 + 368, &word_6FDF60);
  LOBYTE(v66) = 125;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v63 + 46) + 40LL))((__int64)v63 + 368, v66);
  v67 = *(_QWORD *)v63;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, *(float *)(a1 + 528) - 11.0, 10.0);
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v67 + 184))(v63, v68);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 560) + 936LL) == 1 )
    cocos2d::CCLabelBMFont::limitLabelWidth(v63, 35.0, 0.5, 0.0);
  sub_3C310(v82);
  return sub_3C310(Block);
}
