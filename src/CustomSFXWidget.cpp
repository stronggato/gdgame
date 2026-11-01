#include <Geode/binding/CustomSFXWidget.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/11] Address: 0xefab0
// Method: CustomSFXWidget::onPlayback
// Hidden C++ exception states: #wind=3
double __fastcall CustomSFXWidget_onPlayback(__int64 a1)
{
  double result; // xmm0_8
  cocos2d::CCArray *v3; // rcx
  int v4; // edi
  const char *v5; // rdx
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  struct cocos2d::CCObject *v8; // rax
  __int64 v9; // rax
  void **v10; // xmm0_8
  __m128i v11; // xmm1
  void **v12; // rdx
  void *v13; // rcx
  cocos2d::CCString *v14; // rax
  char *CString; // rax
  size_t v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  _QWORD Src[4]; // [rsp+38h] [rbp-70h] BYREF
  void *Block[2]; // [rsp+58h] [rbp-50h] BYREF
  __m128i v21; // [rsp+68h] [rbp-40h]
  _BYTE v22[32]; // [rsp+78h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 872) ) /*0xefad2*/
  {
    v3 = *(cocos2d::CCArray **)(a1 + 736); /*0xefae0*/
    if ( v3 ) /*0xefaea*/
    {
      v4 = cocos2d::CCArray::count(v3); /*0xefaf6*/
      if ( v4 ) /*0xefafa*/
      {
        v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 736), 0); /*0xefb64*/
        sub_3E4F0(Src, (char *)v7 + 320); /*0xefb76*/
        if ( v4 >= 2 ) /*0xefb7f*/
        {
          v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 736), 1u); /*0xefb91*/
          sub_3E4F0(v22, (char *)v8 + 320); /*0xefba3*/
          v9 = sub_58C00(v22, 0, ", ", 2); /*0xefbbd*/
          *(_OWORD *)Block = *(_OWORD *)v9; /*0xefbc5*/
          v10 = (void **)Block[0]; /*0xefbc2*/
          v21 = *(__m128i *)(v9 + 16); /*0xefbce*/
          v11 = v21; /*0xefbca*/
          *(_QWORD *)(v9 + 16) = 0; /*0xefbd3*/
          *(_QWORD *)(v9 + 24) = 15; /*0xefbdb*/
          *(_BYTE *)v9 = 0; /*0xefbe3*/
          v12 = Block; /*0xefbe6*/
          if ( _mm_srli_si128(v11, 8).m128i_u64[0] > 0xF ) /*0xefc02*/
            v12 = v10; /*0xefc02*/
          sub_43D80(Src, v12, v11.m128i_u64[0]); /*0xefc10*/
          if ( v21.m128i_i64[1] > 0xFuLL ) /*0xefc1f*/
          {
            v13 = Block[0]; /*0xefc24*/
            if ( (unsigned __int64)(v21.m128i_i64[1] + 1) >= 0x1000 ) /*0xefc33*/
            {
              v13 = (void *)*((_QWORD *)Block[0] - 1); /*0xefc39*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0xefc48*/
                invoke_watson(0, 0, 0, 0, 0); /*0xefc5d*/
            }
            j_j_free(v13); /*0xefc64*/
          }
          sub_3C310(v22); /*0xefc6f*/
        }
        if ( v4 >= 3 ) /*0xefc77*/
        {
          v14 = cocos2d::CCString::createWithFormat(" +%i", v4 - 2); /*0xefc83*/
          CString = (char *)cocos2d::CCString::getCString(v14); /*0xefc8c*/
          v16 = -1; /*0xefc92*/
          do /*0xefca3*/
            ++v16; /*0xefca0*/
          while ( CString[v16] ); /*0xefca3*/
          sub_43D80(Src, CString, v16); /*0xefcb2*/
        }
        v17 = Src; /*0xefcb7*/
        if ( Src[3] > 0xFu ) /*0xefcc2*/
          v17 = (_QWORD *)Src[0]; /*0xefcc2*/
        (**(void (__fastcall ***)(__int64, _QWORD *))(*(_QWORD *)(a1 + 872) + 360LL))( /*0xefcd9*/
          *(_QWORD *)(a1 + 872) + 360LL,
          v17);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 872) + 160LL))(*(_QWORD *)(a1 + 872)); /*0xefced*/
        cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 872), 264.0, 0.44999999, 0.2); /*0xefd12*/
        LOBYTE(v18) = -1; /*0xefd29*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 872) + 368LL) + 40LL))( /*0xefd2b*/
          *(_QWORD *)(a1 + 872) + 368LL,
          v18);
        return sub_3C310(Src); /*0xefd34*/
      }
      else
      {
        v5 = "Select users..."; /*0xefb11*/
        if ( *(_BYTE *)(a1 + 745) ) /*0xefb18*/
          v5 = "Select user"; /*0xefb1f*/
        result = (**(double (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 872) + 360LL))( /*0xefb26*/
                   *(_QWORD *)(a1 + 872) + 360LL,
                   v5);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 872) + 160LL))(*(_QWORD *)(a1 + 872)); /*0xefb3a*/
        LOBYTE(v6) = 120; /*0xefb51*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 872) + 368LL) + 40LL))( /*0xefb53*/
          *(_QWORD *)(a1 + 872) + 368LL,
          v6);
      }
    }
  }
  return result; /*0xefd39*/
}

// [3/11] Address: 0x15d910
// Method: CustomSFXWidget::~CustomSFXWidget
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall CustomSFXWidget__dtor_CustomSFXWidget(cocos2d::CCNode *Block, char a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  cocos2d::CCObject *v6; // rcx

  *(_QWORD *)Block = &CustomSFXWidget::`vftable'; /*0x15d92b*/
  *((_QWORD *)Block + 40) = &CustomSFXWidget::`vftable'; /*0x15d935*/
  *((_QWORD *)Block + 41) = &CustomSFXWidget::`vftable'; /*0x15d943*/
  v4 = qword_906070; /*0x15d94a*/
  if ( !qword_906070 ) /*0x15d954*/
  {
    v5 = operator new(0x3D0u); /*0x15d95b*/
    qword_906070 = sub_47C350(v5); /*0x15d968*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x15d979*/
    v4 = qword_906070; /*0x15d97c*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v4, (__int64)Block + 320); /*0x15d98a*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 42); /*0x15d98f*/
  if ( v6 ) /*0x15d999*/
    cocos2d::CCObject::release(v6); /*0x15d99b*/
  cocos2d::CCNode::~CCNode(Block); /*0x15d9a4*/
  if ( (a2 & 1) != 0 ) /*0x15d9af*/
    j_j_free(Block); /*0x15d9b9*/
  return Block; /*0x15d9c1*/
}

// [4/11] Address: 0x15db40
// Method: CustomSFXWidget::create
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall CustomSFXWidget_create(
        int a1,
        int a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  cocos2d::CCNode *v12; // r14
  char v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+30h] [rbp-38h]

  v12 = (cocos2d::CCNode *)operator new(0x1F8u); /*0x15db6e*/
  cocos2d::CCNode::CCNode(v12); /*0x15db79*/
  *(_QWORD *)v12 = &CustomSFXWidget::`vftable'; /*0x15db86*/
  *((_QWORD *)v12 + 40) = &CustomSFXWidget::`vftable'; /*0x15db90*/
  *((_QWORD *)v12 + 41) = &CustomSFXWidget::`vftable'; /*0x15db9e*/
  *((_QWORD *)v12 + 42) = 0; /*0x15dba7*/
  *((_QWORD *)v12 + 44) = 0; /*0x15dbae*/
  *((_QWORD *)v12 + 45) = 0; /*0x15dbb5*/
  *((_QWORD *)v12 + 47) = 0; /*0x15dbbc*/
  *((_QWORD *)v12 + 49) = 0; /*0x15dbc3*/
  *((_QWORD *)v12 + 50) = 0; /*0x15dbca*/
  *((_QWORD *)v12 + 51) = 0; /*0x15dbd1*/
  *((_QWORD *)v12 + 52) = 0; /*0x15dbd8*/
  *((_QWORD *)v12 + 53) = 0; /*0x15dbdf*/
  *((_QWORD *)v12 + 54) = 0; /*0x15dbe6*/
  *((_QWORD *)v12 + 55) = 0; /*0x15dbed*/
  *((_QWORD *)v12 + 56) = 0; /*0x15dbf4*/
  *((_QWORD *)v12 + 57) = 0; /*0x15dbfb*/
  *((_QWORD *)v12 + 58) = 0; /*0x15dc02*/
  *((_QWORD *)v12 + 59) = 0; /*0x15dc09*/
  *((_QWORD *)v12 + 60) = 0; /*0x15dc10*/
  *((_DWORD *)v12 + 122) = 0; /*0x15dc17*/
  *((_WORD *)v12 + 246) = 0; /*0x15dc1e*/
  *((_BYTE *)v12 + 494) = 0; /*0x15dc26*/
  *((_QWORD *)v12 + 62) = 0; /*0x15dc2d*/
  v16 = 0; /*0x15dc58*/
  v15 = 1; /*0x15dc5d*/
  v14 = 1; /*0x15dc62*/
  if ( (unsigned __int8)SecretNumberLayer_playNumberEffect((_DWORD)v12, a1, a2, a3, v14, v15, v16, a7, a8, a9) ) /*0x15dc74*/
  {
    cocos2d::CCObject::autorelease(v12); /*0x15dc80*/
    return v12; /*0x15dc86*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1); /*0x15dc9a*/
    return 0; /*0x15dc9d*/
  }
}

// [5/11] Address: 0x15f600
// Method: CustomSFXWidget::showLoadingArt
__int64 __fastcall CustomSFXWidget_showLoadingArt(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  float v4; // xmm6_4
  double v5; // xmm0_8
  float v6; // xmm7_4
  double v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  float v12; // xmm6_4
  double v13; // xmm0_8
  __int64 v14; // rax
  __int64 v15; // rdx
  cocos2d::CCNode *v16; // rbx
  struct cocos2d::CCAction *v17; // rax
  __int64 v18; // rdx
  char v20; // [rsp+50h] [rbp+8h] BYREF
  char v21; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 472) ) /*0x15f606*/
  {
    if ( *(_BYTE *)(a1 + 492) ) /*0x15f617*/
    {
      v3 = *(_QWORD *)(a1 + 360); /*0x15f62e*/
      v4 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 320LL))(v3); /*0x15f649*/
      v5 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v3 + 168LL))(v3); /*0x15f650*/
      v6 = (float)(*(float *)&v5 * v4) + 12.0; /*0x15f660*/
      v7 = sub_160B90(a1); /*0x15f668*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, *(float *)&v7 + v6, 0.0); /*0x15f67c*/
      v9 = v8; /*0x15f689*/
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 200LL))(*(_QWORD *)(a1 + 360)); /*0x15f68f*/
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 352); /*0x15f6c2*/
      v12 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 320LL))(v11); /*0x15f6d8*/
      v13 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v11 + 168LL))(v11); /*0x15f6df*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, (float)(*(float *)&v13 * v12) + 14.0, 0.0); /*0x15f6fc*/
      v9 = v14; /*0x15f709*/
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 200LL))(*(_QWORD *)(a1 + 352)); /*0x15f70f*/
    }
    cocos2d::CCPoint::operator+(v10, &v20, v9); /*0x15f6a0*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 472) + 184LL))(*(_QWORD *)(a1 + 472), &v20); /*0x15f6b5*/
    cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 472)); /*0x15f742*/
    LOBYTE(v15) = 25; /*0x15f74f*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 472) + 320LL) + 40LL))( /*0x15f75b*/
      *(_QWORD *)(a1 + 472) + 320LL,
      v15);
    v16 = *(cocos2d::CCNode **)(a1 + 472); /*0x15f768*/
    v17 = cocos2d::CCFadeTo::create(0.2, 0xAFu); /*0x15f76f*/
    cocos2d::CCNode::runAction(v16, v17); /*0x15f77b*/
    LOBYTE(v18) = 1; /*0x15f788*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 472) + 336LL))(*(_QWORD *)(a1 + 472), v18); /*0x15f79c*/
  }
  else
  {
    LOBYTE(a2) = 1; /*0x15f7aa*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 456) + 336LL))(*(_QWORD *)(a1 + 456), a2); /*0x15f7b4*/
  }
}

// [6/11] Address: 0x15f920
// Method: CustomSFXWidget::onDownload
// Hidden C++ exception states: #wind=3
__int64 __fastcall CustomSFXWidget_onDownload(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  cocos2d::CCObject *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h]
  void *v9; // [rsp+30h] [rbp+8h]
  void *v10; // [rsp+30h] [rbp+8h]

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 368) + 336LL))(*(_QWORD *)(a1 + 368), 0); /*0x15f935*/
  if ( *(_QWORD *)(a1 + 336) ) /*0x15f93b*/
  {
    v3 = qword_905FD0; /*0x15f949*/
    if ( !qword_905FD0 ) /*0x15f953*/
    {
      v8 = operator new(0x6E8u); /*0x15f95f*/
      qword_905FD0 = sub_2723A0(v8); /*0x15f96d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x15f97e*/
      v3 = qword_905FD0; /*0x15f980*/
    }
    if ( GameManager_getGameVariable(v3, "0016") ) /*0x15f98e*/
    {
      CustomSFXWidget_showLoadingArt(a1, v4); /*0x15f9e1*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 376) + 336LL))(*(_QWORD *)(a1 + 376), 0); /*0x15f9f2*/
      LOBYTE(v6) = 1; /*0x15fa02*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 384) + 336LL))(*(_QWORD *)(a1 + 384), v6); /*0x15fa04*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 408) + 336LL))(*(_QWORD *)(a1 + 408), 0); /*0x15fa16*/
      *(_BYTE *)(a1 + 491) = 0; /*0x15fa1c*/
      v7 = (cocos2d::CCObject *)qword_906070; /*0x15fa23*/
      if ( !qword_906070 ) /*0x15fa2d*/
      {
        v10 = operator new(0x3D0u); /*0x15fa39*/
        qword_906070 = sub_47C350(v10); /*0x15fa47*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x15fa58*/
        v7 = (cocos2d::CCObject *)qword_906070; /*0x15fa5a*/
      }
      MusicDownloadManager_downloadSFX(v7, *(_DWORD *)(a1 + 496)); /*0x15fa67*/
      return sub_15FA80(a1); /*0x15fa74*/
    }
    else
    {
      if ( !qword_906070 ) /*0x15f99f*/
      {
        v9 = operator new(0x3D0u); /*0x15f9ab*/
        qword_906070 = sub_47C350(v9); /*0x15f9b9*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x15f9ca*/
      }
      return MusicDownloadManager_showTOS(v5, (int)a1 + 328); /*0x15f9d9*/
    }
  }
  return result; /*0x15f9d4*/
}

// [7/11] Address: 0x15fb30
// Method: CustomSFXWidget::onSelect
__int64 __fastcall CustomSFXWidget_onSelect(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 336) ) /*0x15fb30*/
  {
    v1 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 480); /*0x15fb3c*/
    if ( v1 ) /*0x15fb46*/
      return (**v1)(v1); /*0x15fb4b*/
  }
  return result; /*0x15fb4e*/
}

// [8/11] Address: 0x1600b0
// Method: CustomSFXWidget::songStateChanged
__int64 __fastcall CustomSFXWidget_songStateChanged(__int64 a1)
{
  return sub_1600C0(a1 - 320);
}

// [9/11] Address: 0x1612c0
// Method: CustomSFXWidget::downloadSFXFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall CustomSFXWidget_downloadSFXFinished(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h]

  v2 = a1 - 320; /*0x1612c6*/
  result = *(unsigned int *)(a1 - 320 + 496); /*0x1612cd*/
  if ( (_DWORD)result == a2 && (_DWORD)result ) /*0x1612d9*/
  {
    v4 = qword_905FD0; /*0x1612db*/
    if ( !qword_905FD0 ) /*0x1612e5*/
    {
      v5 = operator new(0x6E8u); /*0x1612f1*/
      qword_905FD0 = sub_2723A0(v5); /*0x1612ff*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x161310*/
      v4 = qword_905FD0; /*0x161312*/
    }
    result = GameManager_getGameVariable(v4, "0143"); /*0x161320*/
    if ( !(_BYTE)result ) /*0x161327*/
      return sub_15FCF0(v2, 0); /*0x161333*/
  }
  return result; /*0x16132e*/
}

// [10/11] Address: 0x161340
// Method: CustomSFXWidget::downloadSFXFailed
__int64 __fastcall CustomSFXWidget_downloadSFXFailed(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  void (__fastcall ***v6)(_QWORD, __int16 *); // rcx
  int v7; // ebx
  int v8; // ebx
  const char *v9; // rdx
  __int16 v10; // [rsp+38h] [rbp+10h] BYREF
  char v11; // [rsp+3Ah] [rbp+12h]

  result = *(unsigned int *)(a1 + 176); /*0x16134a*/
  if ( (_DWORD)result == (_DWORD)a2 && (_DWORD)result ) /*0x161360*/
  {
    LOBYTE(a2) = 1; /*0x16136a*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 336LL))(*(_QWORD *)(a1 + 48), a2); /*0x16136f*/
    v6 = (void (__fastcall ***)(_QWORD, __int16 *))(*(_QWORD *)(a1 + 48) + 368LL); /*0x16137e*/
    v10 = 13055; /*0x161385*/
    v11 = 25; /*0x16138c*/
    (**v6)(v6, &v10); /*0x161394*/
    v7 = a3 - 1; /*0x1613a4*/
    if ( v7 ) /*0x1613a7*/
    {
      v8 = v7 - 1; /*0x1613a9*/
      if ( v8 ) /*0x1613ac*/
      {
        if ( v8 == 1 ) /*0x1613b1*/
          v9 = "Download canceled."; /*0x1613bc*/
        else
          v9 = "Download failed. Please try again later."; /*0x1613b3*/
      }
      else
      {
        v9 = "SFX is not allowed for use."; /*0x1613c5*/
      }
    }
    else
    {
      v9 = "Failed to fetch SFX info."; /*0x1613ce*/
    }
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 48) + 360LL))(*(_QWORD *)(a1 + 48) + 360LL, v9); /*0x1613d5*/
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 48), 230.0, 0.40000001, 0.0); /*0x1613ef*/
    sub_15F7C0(a1 - 320); /*0x1613fc*/
    cocos2d::CCNode::unschedule(a1 - 320, sub_15FF50); /*0x16140f*/
    *(_BYTE *)(a1 + 171) = 0; /*0x16141c*/
    return sub_1600C0(a1 - 320); /*0x161423*/
  }
  return result; /*0x161428*/
}

// [11/11] Address: 0x161440
// Method: CustomSFXWidget::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
__int64 __fastcall CustomSFXWidget_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  void *v8; // [rsp+38h] [rbp+10h]

  result = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x16145a*/
  if ( (_DWORD)result ) /*0x16145d*/
  {
    if ( (_DWORD)result == 2 ) /*0x161462*/
    {
      if ( a3 ) /*0x161466*/
        return sub_15F420(a1 - 328); /*0x161479*/
    }
  }
  else if ( a3 ) /*0x161480*/
  {
    v7 = qword_905FD0; /*0x161482*/
    if ( !qword_905FD0 ) /*0x16148c*/
    {
      v8 = operator new(0x6E8u); /*0x161498*/
      qword_905FD0 = sub_2723A0(v8); /*0x1614a6*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1614b7*/
      v7 = qword_905FD0; /*0x1614b9*/
    }
    LOBYTE(v6) = 1; /*0x1614c0*/
    sub_27ACB0(v7, "0016", v6); /*0x1614ca*/
    return CustomSFXWidget_onDownload(a1 - 328); /*0x1614d8*/
  }
  return result; /*0x16146f*/
}
