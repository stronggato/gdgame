#include <Geode/binding/EndPortalObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x16bfa0
// Method: EndPortalObject::updateEndPos
// Hidden C++ exception states: #wind=3
double __fastcall EndPortalObject_updateEndPos(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  cocos2d::extension::CCHttpClient *Instance; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  double result; // xmm0_8
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  cocos2d::CCObject *v17; // rcx
  cocos2d::extension::CCHttpClient *v18; // rax
  unsigned __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm1_4
  __int64 v22; // rdx
  void *v23; // [rsp+20h] [rbp-58h]
  void *v24; // [rsp+28h] [rbp-50h]
  _BYTE v25[16]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v26; // [rsp+88h] [rbp+10h] BYREF
  char v27; // [rsp+8Ah] [rbp+12h]
  unsigned int v28; // [rsp+90h] [rbp+18h] BYREF
  void *v29; // [rsp+98h] [rbp+20h]

  v4 = (__int64)a1; /*0x16bfb2*/
  if ( a1[73] == a1[74] ) /*0x16bfc3*/
  {
    (**(void (__fastcall ***)(__int64, void *))(a1[47] + 368LL))(a1[47] + 368LL, &unk_6FDF7C); /*0x16c227*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(v4 + 376) + 360LL))( /*0x16c241*/
      *(_QWORD *)(v4 + 376) + 360LL,
      "Download complete.");
    if ( *(_BYTE *)(v4 + 501) ) /*0x16c24d*/
    {
      v20 = 0.34999999; /*0x16c256*/
      v21 = 140.0; /*0x16c25e*/
    }
    else
    {
      v20 = 0.40000001; /*0x16c268*/
      v21 = 230.0; /*0x16c270*/
    }
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(v4 + 376), v21, v20, 0.0); /*0x16c278*/
    LOBYTE(v22) = 1; /*0x16c27e*/
    sub_16C5A0(v4, v22); /*0x16c283*/
    *(_BYTE *)(v4 + 545) = 0; /*0x16c288*/
    return CustomSongWidget_updateMultiAssetInfo(v4, 1); /*0x16c294*/
  }
  else
  {
    do /*0x16c204*/
    {
      Instance = (cocos2d::extension::CCHttpClient *)cocos2d::extension::CCHttpClient::getInstance(a1, a2, a3, a4); /*0x16bfe0*/
      v7 = cocos2d::extension::CCHttpClient::availableThreadCount(Instance); /*0x16bfef*/
      v10 = *(_QWORD *)(v4 + 584); /*0x16bff2*/
      v11 = *(_QWORD *)(v4 + 592); /*0x16bff9*/
      if ( v10 == v11 ) /*0x16c003*/
        break; /*0x16c003*/
      while ( *(_BYTE *)(v10 + 12) ) /*0x16c014*/
      {
        v10 += 16; /*0x16c016*/
        if ( v10 == v11 ) /*0x16c01d*/
          return result; /*0x16c01d*/
      }
      if ( *(int *)(v10 + 8) <= 1 ) /*0x16c028*/
      {
        *(_BYTE *)(v10 + 12) = 1; /*0x16c0b4*/
        v13 = *(_DWORD *)(v10 + 4); /*0x16c0b8*/
        if ( v13 == 1 ) /*0x16c0be*/
        {
          v14 = *(_DWORD *)v10; /*0x16c0c4*/
          v28 = v14; /*0x16c0c6*/
          if ( v14 >= 10000000 ) /*0x16c0d3*/
          {
            v16 = qword_906070; /*0x16c143*/
            if ( !qword_906070 ) /*0x16c14d*/
            {
              v23 = operator new(0x3D0u); /*0x16c159*/
              qword_906070 = sub_47C350(v23); /*0x16c167*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x16c178*/
              v16 = qword_906070; /*0x16c17a*/
            }
            sub_47FAF0(v16, (unsigned int)v14); /*0x16c183*/
          }
          else
          {
            sub_BB1F0(v4 + 616, v25, &v28); /*0x16c0e9*/
            v15 = qword_906070; /*0x16c0ee*/
            if ( !qword_906070 ) /*0x16c0f8*/
            {
              v29 = operator new(0x3D0u); /*0x16c104*/
              qword_906070 = sub_47C350(v29); /*0x16c115*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x16c126*/
              v15 = qword_906070; /*0x16c128*/
            }
            sub_47E760(v15, v28, 0); /*0x16c139*/
          }
        }
        else if ( v13 == 2 ) /*0x16c18d*/
        {
          v17 = (cocos2d::CCObject *)qword_906070; /*0x16c18f*/
          if ( !qword_906070 ) /*0x16c199*/
          {
            v24 = operator new(0x3D0u); /*0x16c1a5*/
            qword_906070 = sub_47C350(v24); /*0x16c1b3*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x16c1c4*/
            v17 = (cocos2d::CCObject *)qword_906070; /*0x16c1c7*/
          }
          result = MusicDownloadManager_downloadSFX(v17, *(_DWORD *)v10); /*0x16c1d0*/
        }
      }
      else
      {
        result = CustomSongWidget_updateMultiAssetInfo(v4, 1); /*0x16c033*/
        v26 = 13055; /*0x16c04a*/
        v27 = 25; /*0x16c052*/
        (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(v4 + 376) + 368LL))( /*0x16c073*/
          *(_QWORD *)(v4 + 376) + 368LL,
          &v26);
        (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(v4 + 376) + 360LL))( /*0x16c08d*/
          *(_QWORD *)(v4 + 376) + 360LL,
          "Some assets failed to download.");
        cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(v4 + 376), 230.0, 0.40000001, 0.0); /*0x16c09f*/
        sub_16C5A0(v4, 0); /*0x16c0aa*/
      }
      v18 = (cocos2d::extension::CCHttpClient *)cocos2d::extension::CCHttpClient::getInstance(v11, v6, v8, v9); /*0x16c1d5*/
      v19 = cocos2d::extension::CCHttpClient::availableThreadCount(v18); /*0x16c1de*/
      a1 = *(_QWORD **)(v4 + 592); /*0x16c1e4*/
      if ( *(_QWORD **)(v4 + 584) == a1 ) /*0x16c1f2*/
        break; /*0x16c1f2*/
    }
    while ( v19 && v19 < v7 ); /*0x16c204*/
  }
  return result; /*0x16c299*/
}

// [2/5] Address: 0x205e30
// Method: EndPortalObject::init
// Hidden C++ exception states: #wind=3
char __fastcall EndPortalObject_init(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  int v14; // r14d
  int i; // ebp
  struct cocos2d::CCSprite *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int16 v20; // [rsp+30h] [rbp-98h]
  __int16 v21; // [rsp+30h] [rbp-98h]
  _BYTE v22[4]; // [rsp+40h] [rbp-88h] BYREF
  float v23; // [rsp+44h] [rbp-84h]
  void *v24; // [rsp+48h] [rbp-80h] BYREF
  __int64 v25; // [rsp+50h] [rbp-78h] BYREF
  float v26; // [rsp+58h] [rbp-70h]
  int v27; // [rsp+5Ch] [rbp-6Ch]
  float v28[4]; // [rsp+60h] [rbp-68h] BYREF

  *(_DWORD *)(a1 + 28) = 13; /*0x205e65*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "block001_01_001.png") ) /*0x205e73*/
    return 0; /*0x206237*/
  sub_287800(a1); /*0x205e84*/
  *(_BYTE *)(a1 + 313) = 1; /*0x205e89*/
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 992LL))(a1, &unk_9047F0); /*0x205e9d*/
  v3 = cocos2d::CCDirector::sharedDirector(v2); /*0x205ea3*/
  cocos2d::CCDirector::getWinSize(v3, v22); /*0x205eb1*/
  *(_BYTE *)(a1 + 1007) = 0; /*0x205eb7*/
  *(_BYTE *)(a1 + 1040) = 1; /*0x205ebe*/
  *(_DWORD *)(a1 + 928) = 7; /*0x205ec5*/
  v4 = GameObject_createAndAddParticle(a1, 7, (int)"endEffectPortal.plist", 4, 2); /*0x205eec*/
  v5 = v4; /*0x205ef1*/
  if ( v4 ) /*0x205ef7*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 1168LL))(v4); /*0x205f18*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, -15.0, 0.0); /*0x205f2a*/
    cocos2d::CCPoint::operator=(a1 + 820, v6); /*0x205f3a*/
    v7 = qword_905FD0; /*0x205f40*/
    if ( !qword_905FD0 ) /*0x205f4a*/
    {
      v24 = operator new(0x6E8u); /*0x205f56*/
      qword_905FD0 = sub_2723A0(v24); /*0x205f64*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x205f75*/
      v7 = qword_905FD0; /*0x205f77*/
    }
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 560) + 3576LL); /*0x205f85*/
    v20 = *(_WORD *)(v8 + 2706); /*0x205f93*/
    v9 = *(unsigned __int8 *)(v8 + 2708); /*0x205f98*/
    v28[0] = (float)(unsigned __int8)v20 / 255.0; /*0x205fb5*/
    v28[1] = (float)HIBYTE(v20) / 255.0; /*0x205fcb*/
    v28[2] = (float)v9 / 255.0; /*0x205fdc*/
    v28[3] = 1.0; /*0x205fe2*/
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v5 + 1352LL))(v5, v28); /*0x205ff5*/
    v10 = qword_905FD0; /*0x205ffb*/
    if ( !qword_905FD0 ) /*0x206005*/
    {
      v24 = operator new(0x6E8u); /*0x206011*/
      qword_905FD0 = sub_2723A0(v24); /*0x20601f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x206030*/
      v10 = qword_905FD0; /*0x206032*/
    }
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 560) + 3576LL); /*0x206040*/
    v21 = *(_WORD *)(v11 + 2706); /*0x20604e*/
    v12 = *(unsigned __int8 *)(v11 + 2708); /*0x206053*/
    *(float *)&v25 = (float)(unsigned __int8)v21 / 255.0; /*0x206068*/
    *((float *)&v25 + 1) = (float)HIBYTE(v21) / 255.0; /*0x20607e*/
    v26 = (float)v12 / 255.0; /*0x20608f*/
    v27 = 1065353216; /*0x206095*/
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 1384LL))(v5, &v25); /*0x2060a8*/
  }
  *(_QWORD *)(a1 + 1360) = cocos2d::CCSprite::createWithSpriteFrameName("gradientBar.png"); /*0x2060bb*/
  v13 = qword_905FD0; /*0x2060c2*/
  if ( !qword_905FD0 ) /*0x2060cc*/
  {
    v24 = operator new(0x6E8u); /*0x2060d8*/
    qword_905FD0 = sub_2723A0(v24); /*0x2060e6*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2060f7*/
    v13 = qword_905FD0; /*0x2060f9*/
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v13 + 560) + 2864LL) + 464LL))( /*0x206118*/
    *(_QWORD *)(*(_QWORD *)(v13 + 560) + 2864LL),
    *(_QWORD *)(a1 + 1360));
  v25 = 0x100000302LL; /*0x20611e*/
  (**(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 1360) + 344LL))( /*0x206144*/
    *(_QWORD *)(a1 + 1360) + 344LL,
    0x100000302LL);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1360) + 136LL))(*(_QWORD *)(a1 + 1360)); /*0x206166*/
  v14 = (int)roundf((float)(v23 * 1.5) / 30.0); /*0x20618c*/
  for ( i = 0; i < v14; ++i ) /*0x206196*/
  {
    v16 = cocos2d::CCSprite::createWithSpriteFrameName("square_02_001.png"); /*0x2061cd*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v16); /*0x2061e0*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 352LL))(v16); /*0x2061f4*/
    v17 = *(_QWORD *)v16; /*0x2061f6*/
    cocos2d::CCPoint::CCPoint( /*0x206213*/
      (cocos2d::CCPoint *)&v24,
      0.0,
      (float)((float)(v14 / 2) * 30.0) - (float)((float)i * 30.0));
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v17 + 184))(v16, v18); /*0x20621f*/
  }
  *(_BYTE *)(a1 + 904) = 1; /*0x20622c*/
  return 1; /*0x206239*/
}

// [3/5] Address: 0x206270
// Method: EndPortalObject::getSpawnPos
// Hidden C++ exception states: #wind=1
cocos2d::CCPoint *__fastcall EndPortalObject_getSpawnPos(__int64 a1, cocos2d::CCPoint *a2)
{
  float v4; // xmm6_4
  __int64 v5; // rax
  void *v7; // [rsp+40h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 1368) ) /*0x206285*/
    v4 = -1.0; /*0x20628e*/
  else
    v4 = 1.0; /*0x206298*/
  v5 = qword_905FD0; /*0x2062a0*/
  if ( !qword_905FD0 ) /*0x2062aa*/
  {
    v7 = operator new(0x6E8u); /*0x2062b6*/
    qword_905FD0 = sub_2723A0(v7); /*0x2062c4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2062d5*/
    v5 = qword_905FD0; /*0x2062d7*/
  }
  cocos2d::CCPoint::CCPoint( /*0x206310*/
    a2,
    *(float *)(a1 + 968) - (float)((float)(300.0 / *(float *)(*(_QWORD *)(v5 + 560) + 424LL)) * v4),
    *(float *)(a1 + 972));
  return a2; /*0x206319*/
}

// [4/5] Address: 0x206330
// Method: EndPortalObject::setPosition
// Hidden C++ exception states: #wind=1
void __fastcall EndPortalObject_setPosition(__int64 a1, float *a2)
{
  float v4; // xmm8_4
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // [rsp+60h] [rbp+8h] BYREF
  void *v9; // [rsp+70h] [rbp+18h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  GameObject_setPosition(a1, a2); /*0x206349*/
  if ( *(_QWORD *)(a1 + 1360) ) /*0x206356*/
  {
    if ( *(_BYTE *)(a1 + 1368) ) /*0x206364*/
      v4 = -1.0; /*0x20636d*/
    else
      v4 = 1.0; /*0x206373*/
    v5 = qword_905FD0; /*0x20637c*/
    if ( !qword_905FD0 ) /*0x206386*/
    {
      v9 = operator new(0x6E8u); /*0x206392*/
      qword_905FD0 = sub_2723A0(v9); /*0x2063a0*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2063b1*/
      v5 = qword_905FD0; /*0x2063b3*/
    }
    cocos2d::CCPoint::CCPoint( /*0x2063ea*/
      (cocos2d::CCPoint *)&v10,
      (float)(-14.0 - (float)(15.0 / *(float *)(*(_QWORD *)(v5 + 560) + 424LL))) * v4,
      0.0);
    cocos2d::CCPoint::operator+(a2, &v8, v6); /*0x2063fb*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 1360) + 184LL))(*(_QWORD *)(a1 + 1360), &v8); /*0x206410*/
  }
  if ( *(_QWORD *)(a1 + 776) ) /*0x206416*/
  {
    cocos2d::CCPoint::operator*(a1 + 820, &v8); /*0x206440*/
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x20644c*/
    cocos2d::CCPoint::operator+(v7, &v9, &v8); /*0x20645f*/
    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 776) + 184LL))(*(_QWORD *)(a1 + 776), &v9); /*0x206474*/
  }
}

// [5/5] Address: 0x206490
// Method: EndPortalObject::setVisible
void __fastcall EndPortalObject_setVisible(__int64 a1, unsigned __int8 a2)
{
  char v4; // si
  __int64 v5; // rdx

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 344LL))(a1); /*0x2064b4*/
  GameObject_setVisible(a1, a2); /*0x2064b7*/
  if ( a2 ) /*0x2064be*/
  {
    if ( !v4 ) /*0x2064c3*/
    {
      LOBYTE(v5) = 1; /*0x2064c5*/
      sub_2064E0(a1, v5); /*0x2064ca*/
    }
  }
}
