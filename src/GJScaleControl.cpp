#include <Geode/binding/GJScaleControl.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x19f900
// Method: GJScaleControl::~GJScaleControl
cocos2d::CCLayer *__fastcall GJScaleControl__dtor_GJScaleControl(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCLayer::~CCLayer(Block); /*0x19f90f*/
  if ( (a2 & 1) != 0 ) /*0x19f918*/
    j_j_free(Block); /*0x19f922*/
  return Block; /*0x19f927*/
}

// [2/6] Address: 0x1a0680
// Method: GJScaleControl::init
bool __fastcall GJScaleControl_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rdx
  struct cocos2d::CCSprite *v4; // rax
  struct cocos2d::CCMenuItem *v5; // rax
  struct cocos2d::CCMenu *v6; // rax
  int v7; // r8d
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  struct cocos2d::CCLabelBMFont *v36; // rax
  __int64 *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  struct cocos2d::CCLabelBMFont *v42; // rax
  __int64 *v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  struct cocos2d::CCLabelBMFont *v48; // rax
  __int64 *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _BYTE v54[8]; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v55[8]; // [rsp+48h] [rbp+Fh] BYREF
  char v56; // [rsp+A8h] [rbp+6Fh] BYREF
  char v57; // [rsp+B0h] [rbp+77h] BYREF
  char v58; // [rsp+B8h] [rbp+7Fh] BYREF

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x1a0692*/
  if ( result ) /*0x1a069a*/
  {
    LOBYTE(v3) = 1; /*0x1a06a9*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v3); /*0x1a06d2*/
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 288LL))(a1, &unk_9046C8); /*0x1a06e5*/
    v4 = cocos2d::CCSprite::createWithSpriteFrameName("warpLockOffBtn_001.png"); /*0x1a06f2*/
    v5 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v4, 0, a1, sub_1A0CF0); /*0x1a0707*/
    *(_QWORD *)(a1 + 568) = v5; /*0x1a070f*/
    v6 = cocos2d::CCMenu::createWithItem(v5); /*0x1a0716*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v6, 3); /*0x1a0732*/
    v8 = sub_83590( /*0x1a076c*/
           a1,
           (unsigned int)sub_1A1310,
           v7,
           (unsigned int)"slidergroove_02.png",
           (__int64)"GJ_moveBtn.png",
           (__int64)"GJ_moveSBtn.png",
           1061997773);
    *(_QWORD *)(a1 + 408) = v8; /*0x1a0771*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 416) + 336LL))(*(_QWORD *)(v8 + 416), 0); /*0x1a0784*/
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 408), 2); /*0x1a079d*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 408) + 408LL) + 920LL))( /*0x1a07b6*/
      *(_QWORD *)(*(_QWORD *)(a1 + 408) + 408LL),
      0);
    v9 = *(__int64 **)(a1 + 408); /*0x1a07bc*/
    v10 = *v9; /*0x1a07cd*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v54, 0.0, 0.0); /*0x1a07d0*/
    (*(void (__fastcall **)(__int64 *, __int64))(v10 + 184))(v9, v11); /*0x1a07dc*/
    v13 = sub_83590( /*0x1a0803*/
            a1,
            (unsigned int)sub_1A1310,
            v12,
            (unsigned int)"slidergroove_02.png",
            (__int64)"GJ_moveBtn.png",
            (__int64)"GJ_moveSBtn.png",
            1061997773);
    *(_QWORD *)(a1 + 416) = v13; /*0x1a0808*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 416) + 336LL))(*(_QWORD *)(v13 + 416), 0); /*0x1a081b*/
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 416), 2); /*0x1a0834*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 416) + 408LL) + 920LL))( /*0x1a084d*/
      *(_QWORD *)(*(_QWORD *)(a1 + 416) + 408LL),
      0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 0.0, 60.0); /*0x1a0862*/
    v15 = v14; /*0x1a086f*/
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 200LL))(*(_QWORD *)(a1 + 408)); /*0x1a0875*/
    cocos2d::CCPoint::operator+(v16, v54, v15); /*0x1a0885*/
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 416) + 184LL))(*(_QWORD *)(a1 + 416), v54); /*0x1a0899*/
    v18 = sub_83590( /*0x1a08c0*/
            a1,
            (unsigned int)sub_1A1310,
            v17,
            (unsigned int)"slidergroove_02.png",
            (__int64)"GJ_moveBtn.png",
            (__int64)"GJ_moveSBtn.png",
            1061997773);
    *(_QWORD *)(a1 + 424) = v18; /*0x1a08c5*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 416) + 336LL))(*(_QWORD *)(v18 + 416), 0); /*0x1a08d8*/
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 424), 2); /*0x1a08f1*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 424) + 408LL) + 920LL))( /*0x1a090a*/
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 408LL),
      0);
    v19 = *(__int64 **)(a1 + 424); /*0x1a0917*/
    v20 = *v19; /*0x1a0921*/
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 200LL))(*(_QWORD *)(a1 + 408)); /*0x1a0924*/
    (*(void (__fastcall **)(__int64 *, __int64))(v20 + 184))(v19, v21); /*0x1a0930*/
    *(_DWORD *)(a1 + 432) = -1; /*0x1a0936*/
    v26 = cocos2d::CCMenu::create(v23, v22, v24, v25); /*0x1a0940*/
    *(_QWORD *)(a1 + 536) = v26; /*0x1a0946*/
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v26 + 184LL))(v26, &unk_9046C8); /*0x1a0961*/
    (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 536) + 312LL))(*(_QWORD *)(a1 + 536), &unk_9046E0); /*0x1a0975*/
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 536), 4); /*0x1a098e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 14.0, 30.0); /*0x1a09ae*/
    v28 = v27; /*0x1a09bb*/
    v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 200LL))(*(_QWORD *)(a1 + 408)); /*0x1a09c1*/
    cocos2d::CCPoint::operator+(v29, &v56, v28); /*0x1a09d1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 14.0, 30.0); /*0x1a09e1*/
    v31 = v30; /*0x1a09ee*/
    v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 200LL))(*(_QWORD *)(a1 + 416)); /*0x1a09f4*/
    cocos2d::CCPoint::operator+(v32, &v57, v31); /*0x1a0a04*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 14.0, 30.0); /*0x1a0a14*/
    v34 = v33; /*0x1a0a21*/
    v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 200LL))(*(_QWORD *)(a1 + 424)); /*0x1a0a27*/
    cocos2d::CCPoint::operator+(v35, &v58, v34); /*0x1a0a37*/
    v36 = cocos2d::CCLabelBMFont::create("ScaleX:", "goldFont.fnt"); /*0x1a0a4b*/
    *(_QWORD *)(a1 + 464) = v36; /*0x1a0a59*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v36 + 160LL))(v36); /*0x1a0a6d*/
    v37 = *(__int64 **)(a1 + 464); /*0x1a0a6f*/
    v38 = *v37; /*0x1a0a8d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 1.0, 0.5); /*0x1a0a90*/
    (*(void (__fastcall **)(__int64 *, __int64))(v38 + 288))(v37, v39); /*0x1a0a9c*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 464)); /*0x1a0aaf*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, -30.0, 0.0); /*0x1a0ac7*/
    cocos2d::CCPoint::operator+(&v56, v54, v40); /*0x1a0ad8*/
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 464) + 184LL))(*(_QWORD *)(a1 + 464), v54); /*0x1a0aec*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, (const struct cocos2d::CCPoint *)&v56); /*0x1a0afa*/
    *(_QWORD *)(a1 + 488) = sub_1A1CC0(a1, v41, 0, a1 + 512); /*0x1a0b1c*/
    v42 = cocos2d::CCLabelBMFont::create("ScaleY:", "goldFont.fnt"); /*0x1a0b2a*/
    *(_QWORD *)(a1 + 472) = v42; /*0x1a0b38*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v42 + 160LL))(v42); /*0x1a0b4c*/
    v43 = *(__int64 **)(a1 + 472); /*0x1a0b4e*/
    v44 = *v43; /*0x1a0b55*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 1.0, 0.5); /*0x1a0b67*/
    (*(void (__fastcall **)(__int64 *, __int64))(v44 + 288))(v43, v45); /*0x1a0b73*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 472)); /*0x1a0b86*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, -30.0, 0.0); /*0x1a0b96*/
    cocos2d::CCPoint::operator+(&v57, v54, v46); /*0x1a0ba7*/
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 472) + 184LL))(*(_QWORD *)(a1 + 472), v54); /*0x1a0bbb*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, (const struct cocos2d::CCPoint *)&v57); /*0x1a0bc9*/
    *(_QWORD *)(a1 + 496) = sub_1A1CC0(a1, v47, 1, a1 + 520); /*0x1a0bee*/
    v48 = cocos2d::CCLabelBMFont::create("Scale:", "goldFont.fnt"); /*0x1a0bfc*/
    *(_QWORD *)(a1 + 480) = v48; /*0x1a0c0a*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v48 + 160LL))(v48); /*0x1a0c1e*/
    v49 = *(__int64 **)(a1 + 480); /*0x1a0c20*/
    v50 = *v49; /*0x1a0c36*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 1.0, 0.5); /*0x1a0c39*/
    (*(void (__fastcall **)(__int64 *, __int64))(v50 + 288))(v49, v51); /*0x1a0c45*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 480)); /*0x1a0c58*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, -30.0, 0.0); /*0x1a0c68*/
    cocos2d::CCPoint::operator+(&v58, v54, v52); /*0x1a0c79*/
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 480) + 184LL))(*(_QWORD *)(a1 + 480), v54); /*0x1a0c8d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, (const struct cocos2d::CCPoint *)&v58); /*0x1a0c9b*/
    *(_QWORD *)(a1 + 504) = sub_1A1CC0(a1, v53, 2, a1 + 528); /*0x1a0cd5*/
    return 1; /*0x1a0cdc*/
  }
  return result; /*0x1a069c*/
}

// [3/6] Address: 0x1a0d80
// Method: GJScaleControl::loadValues
__int64 __fastcall GJScaleControl_loadValues(__int64 a1, float *a2, cocos2d::CCArray *a3, __int64 a4)
{
  float v8; // xmm7_4
  float v9; // xmm6_4
  unsigned int v10; // r14d
  unsigned int v11; // edi
  struct cocos2d::CCObject *v12; // rbx
  __int64 v13; // rcx
  float v14; // xmm0_4
  float v15; // xmm1_4
  struct cocos2d::CCObject *v16; // rbx
  float *v17; // rdi
  __int64 v18; // rax
  float v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  _BYTE v30[16]; // [rsp+20h] [rbp-98h] BYREF
  int v31; // [rsp+C0h] [rbp+8h] BYREF
  char v32; // [rsp+D0h] [rbp+18h] BYREF

  *(_BYTE *)(a1 + 456) = 1; /*0x1a0dd1*/
  v8 = -1.0; /*0x1a0dd8*/
  v9 = -1.0; /*0x1a0ddc*/
  if ( a3 && cocos2d::CCArray::count(a3) ) /*0x1a0dec*/
  {
    v10 = 0; /*0x1a0e05*/
    v11 = 0; /*0x1a0e08*/
    if ( cocos2d::CCArray::count(a3) ) /*0x1a0e0b*/
    {
      do /*0x1a0ebc*/
      {
        v12 = cocos2d::CCArray::objectAtIndex(a3, v11); /*0x1a0e35*/
        v31 = *((_DWORD *)v12 + 231); /*0x1a0e43*/
        v13 = *(_QWORD *)sub_1A5D10(a4, v30, &v31); /*0x1a0e56*/
        v14 = *((float *)v12 + 290) / *((float *)v12 + 330); /*0x1a0e69*/
        v15 = *((float *)v12 + 291) / *((float *)v12 + 331); /*0x1a0e71*/
        if ( v8 == -1.0 ) /*0x1a0e7b*/
        {
          v8 = *((float *)v12 + 290) / *((float *)v12 + 330); /*0x1a0e7d*/
        }
        else if ( v8 != v14 ) /*0x1a0e87*/
        {
          v8 = -2.0; /*0x1a0e89*/
        }
        if ( v9 == -1.0 ) /*0x1a0e93*/
        {
          v9 = *((float *)v12 + 291) / *((float *)v12 + 331); /*0x1a0e95*/
        }
        else if ( v9 != v15 ) /*0x1a0e9f*/
        {
          v9 = -2.0; /*0x1a0ea1*/
        }
        *(float *)(v13 + 28) = v14; /*0x1a0ea5*/
        ++v11; /*0x1a0eaa*/
        *(float *)(v13 + 32) = v15; /*0x1a0eac*/
      }
      while ( v11 < cocos2d::CCArray::count(a3) ); /*0x1a0ebc*/
      if ( v8 == -2.0 ) /*0x1a0ec8*/
        v8 = 1.0; /*0x1a0eca*/
      if ( v9 == -2.0 ) /*0x1a0ed4*/
        v9 = 1.0; /*0x1a0ed6*/
    }
    if ( cocos2d::CCArray::count(a3) ) /*0x1a0edd*/
    {
      do /*0x1a0fb7*/
      {
        v16 = cocos2d::CCArray::objectAtIndex(a3, v10); /*0x1a0f04*/
        v31 = *((_DWORD *)v16 + 231); /*0x1a0f12*/
        v17 = *(float **)sub_1A5D10(a4, v30, &v31); /*0x1a0f24*/
        v18 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 200LL))(v16); /*0x1a0f31*/
        cocos2d::CCPoint::operator=(v17 + 5, v18); /*0x1a0f3a*/
        v17[7] = *((float *)v16 + 290) / *((float *)v16 + 330); /*0x1a0f53*/
        v17[8] = *((float *)v16 + 291) / *((float *)v16 + 331); /*0x1a0f68*/
        v17[9] = (*(float (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 376LL))(v16); /*0x1a0f76*/
        v19 = (*(float (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 392LL))(v16); /*0x1a0f81*/
        v20 = v17[7]; /*0x1a0f87*/
        v17[10] = v19; /*0x1a0f8f*/
        ++v10; /*0x1a0f94*/
        v17[8] = v17[8] / v9; /*0x1a0fa4*/
        v17[7] = v20 / v8; /*0x1a0fa9*/
      }
      while ( v10 < cocos2d::CCArray::count(a3) ); /*0x1a0fb7*/
    }
    sub_83840(*(_QWORD *)(a1 + 408)); /*0x1a0ffd*/
  }
  else
  {
    if ( !a2 ) /*0x1a103f*/
      goto LABEL_23; /*0x1a103f*/
    v8 = a2[290] / a2[330]; /*0x1a1055*/
    v9 = a2[291] / a2[331]; /*0x1a1071*/
    sub_83840(*(_QWORD *)(a1 + 408)); /*0x1a109c*/
  }
  sub_83840(*(_QWORD *)(a1 + 416)); /*0x1a10d8*/
LABEL_23:
  sub_83840(*(_QWORD *)(a1 + 424)); /*0x1a1123*/
  sub_1A1B10(a1); /*0x1a1139*/
  sub_1A1BA0(a1); /*0x1a1144*/
  sub_1A1C30(a1); /*0x1a1150*/
  v21 = *(_QWORD *)(a1 + 424); /*0x1a1155*/
  v22 = *(_DWORD *)(a1 + 560); /*0x1a115c*/
  *(float *)(a1 + 436) = v8; /*0x1a1165*/
  *(float *)(a1 + 440) = v9; /*0x1a116d*/
  (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v21 + 336LL))(v21, v22 != 46); /*0x1a1182*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 480) + 336LL))(*(_QWORD *)(a1 + 480), v22 != 46); /*0x1a1195*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 504) + 336LL))(*(_QWORD *)(a1 + 504), v22 != 46); /*0x1a11a8*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 528) + 336LL))(*(_QWORD *)(a1 + 528), v22 != 46); /*0x1a11bb*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 408) + 336LL))(*(_QWORD *)(a1 + 408), v22 == 46); /*0x1a11cf*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 464) + 336LL))(*(_QWORD *)(a1 + 464), v22 == 46); /*0x1a11e3*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 488) + 336LL))(*(_QWORD *)(a1 + 488), v22 == 46); /*0x1a11f7*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 512) + 336LL))(*(_QWORD *)(a1 + 512), v22 == 46); /*0x1a120b*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 416) + 336LL))(*(_QWORD *)(a1 + 416), v22 == 46); /*0x1a121f*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 472) + 336LL))(*(_QWORD *)(a1 + 472), v22 == 46); /*0x1a1233*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 496) + 336LL))(*(_QWORD *)(a1 + 496), v22 == 46); /*0x1a1247*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 520) + 336LL))(*(_QWORD *)(a1 + 520), v22 == 46); /*0x1a125b*/
  v23 = 416; /*0x1a1269*/
  if ( v22 != 46 ) /*0x1a126e*/
    v23 = 424; /*0x1a126e*/
  v24 = *(_QWORD *)(v23 + a1); /*0x1a1278*/
  v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 568) + 504LL))(*(_QWORD *)(a1 + 568)); /*0x1a1299*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, 0.0, 60.0); /*0x1a129c*/
  v27 = v26; /*0x1a12a5*/
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 200LL))(v24); /*0x1a12ab*/
  cocos2d::CCPoint::operator+(v28, &v31, v27); /*0x1a12bf*/
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 184LL))(v25, &v31); /*0x1a12d9*/
}

// [4/6] Address: 0x1a1320
// Method: GJScaleControl::ccTouchBegan
char __fastcall GJScaleControl_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  float Value; // xmm0_4
  cocos2d::CCString *v11; // rax
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v15; // xmm0_4
  cocos2d::CCString *v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 v19; // rcx
  _BYTE v20[40]; // [rsp+20h] [rbp-28h] BYREF
  char v21; // [rsp+50h] [rbp+8h] BYREF
  char v22; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 112) != -1 ) /*0x1a1339*/
    return 0; /*0x1a1339*/
  cocos2d::CCTouch::getLocation(a2, &v21); /*0x1a1347*/
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 344LL))(*(_QWORD *)(a1 + 168)) ) /*0x1a1357*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, (const struct cocos2d::CCPoint *)&v21); /*0x1a136b*/
    if ( (unsigned __int8)sub_57940(*(_QWORD *)(a1 + 168), v6) ) /*0x1a137b*/
      return 1; /*0x1a137b*/
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 176) + 344LL))(*(_QWORD *)(a1 + 176)) ) /*0x1a1392*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, (const struct cocos2d::CCPoint *)&v21); /*0x1a13a6*/
    if ( (unsigned __int8)sub_57940(*(_QWORD *)(a1 + 176), v7) ) /*0x1a13b6*/
      return 1; /*0x1a13b6*/
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 344LL))(*(_QWORD *)(a1 + 184)) ) /*0x1a13cd*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, (const struct cocos2d::CCPoint *)&v21); /*0x1a13e1*/
    if ( (unsigned __int8)sub_57940(*(_QWORD *)(a1 + 184), v8) ) /*0x1a13f1*/
      return 1; /*0x1a13f8*/
  }
  sub_1A22B0(a1 - 320); /*0x1a1405*/
  cocos2d::CCTouch::getLocation(a2, &v22); /*0x1a1412*/
  cocos2d::CCNode::convertToNodeSpace(a1 - 320, v20, &v22); /*0x1a1429*/
  cocos2d::CCPoint::operator=(&v22, v9); /*0x1a1437*/
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 320LL) + 8LL))( /*0x1a1451*/
         *(_QWORD *)(a1 + 88) + 320LL,
         a2,
         a3) )
  {
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 56); /*0x1a145f*/
    Value = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 408LL) + 456LL)); /*0x1a1474*/
    v11 = cocos2d::CCString::createWithFormat( /*0x1a14a4*/
            "%.02f",
            (float)((float)((float)(*(float *)(a1 + 232) - *(float *)(a1 + 236)) * Value) + *(float *)(a1 + 236)));
    v12 = cocos2d::CCString::floatValue(v11); /*0x1a14ad*/
    v13 = *(_QWORD *)(a1 + 224); /*0x1a14b3*/
    *(float *)(a1 + 116) = v12; /*0x1a14ba*/
    if ( v13 ) /*0x1a14c2*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13); /*0x1a14c7*/
    *(_WORD *)(a1 + 138) = 0; /*0x1a14cc*/
    return 1; /*0x1a14e1*/
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 320LL) + 8LL))( /*0x1a14f6*/
         *(_QWORD *)(a1 + 96) + 320LL,
         a2,
         a3) )
  {
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 56); /*0x1a1504*/
    v15 = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 408LL) + 456LL)); /*0x1a1519*/
    v16 = cocos2d::CCString::createWithFormat( /*0x1a1549*/
            "%.02f",
            (float)((float)((float)(*(float *)(a1 + 232) - *(float *)(a1 + 236)) * v15) + *(float *)(a1 + 236)));
    v17 = cocos2d::CCString::floatValue(v16); /*0x1a1552*/
    v18 = *(_QWORD *)(a1 + 224); /*0x1a1558*/
    *(float *)(a1 + 120) = v17; /*0x1a155f*/
    if ( v18 ) /*0x1a1567*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18); /*0x1a156c*/
    *(_WORD *)(a1 + 138) = 1; /*0x1a156f*/
    return 1; /*0x1a1586*/
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 320LL) + 8LL))( /*0x1a159b*/
          *(_QWORD *)(a1 + 104) + 320LL,
          a2,
          a3) )
    return 0; /*0x1a15d7*/
  v19 = *(_QWORD *)(a1 + 224); /*0x1a15a2*/
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 56); /*0x1a15ac*/
  if ( v19 ) /*0x1a15b2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19); /*0x1a15b7*/
  *(_WORD *)(a1 + 138) = 2; /*0x1a15ba*/
  return 1; /*0x1a14d5*/
}

// [5/6] Address: 0x1a15f0
// Method: GJScaleControl::ccTouchMoved
double __fastcall GJScaleControl_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  double result; // xmm0_8
  __int16 v7; // ax
  __int64 v8; // rdi
  float Value; // xmm0_4
  cocos2d::CCString *v10; // rax
  __int64 v11; // r8
  float v12; // xmm0_4
  float v13; // xmm9_4
  bool v14; // al
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdi

  if ( *(_DWORD *)(a1 + 112) != *(_DWORD *)(a2 + 56) ) /*0x1a1612*/
    return result; /*0x1a1612*/
  v7 = *(_WORD *)(a1 + 138); /*0x1a1618*/
  if ( v7 ) /*0x1a1644*/
  {
    if ( v7 == 1 ) /*0x1a1650*/
      v8 = *(_QWORD *)(a1 + 96); /*0x1a1652*/
    else
      v8 = *(_QWORD *)(a1 + 104); /*0x1a1658*/
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 88); /*0x1a1646*/
  }
  SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(v8 + 408) + 456LL)); /*0x1a166a*/
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 16LL))(v8 + 320, a2, a3); /*0x1a1683*/
  Value = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(v8 + 408) + 456LL)); /*0x1a1694*/
  v10 = cocos2d::CCString::createWithFormat( /*0x1a16c4*/
          "%.02f",
          (float)((float)((float)(*(float *)(a1 + 232) - *(float *)(a1 + 236)) * Value) + *(float *)(a1 + 236)));
  v12 = cocos2d::CCString::floatValue(v10); /*0x1a16cd*/
  v13 = v12; /*0x1a16e7*/
  if ( *(_BYTE *)(a1 + 136) && v12 > 0.97000003 && v12 < 1.03 ) /*0x1a1701*/
  {
    v13 = 1.0; /*0x1a1729*/
    sub_83840(v8); /*0x1a1739*/
  }
  v14 = 0; /*0x1a173e*/
  v15 = v13; /*0x1a1750*/
  v16 = v13; /*0x1a1754*/
  if ( *(_WORD *)(a1 + 138) == 2 ) /*0x1a1758*/
  {
    v17 = *(float *)(a1 + 116); /*0x1a175e*/
    v18 = *(float *)(a1 + 120); /*0x1a1763*/
    if ( v17 != v18 ) /*0x1a176d*/
    {
      if ( v17 > v18 ) /*0x1a1778*/
      {
        v15 = v13; /*0x1a1794*/
        v16 = (float)(int)roundf((float)((float)(v13 / v17) * v18) * 100.0) / 100.0; /*0x1a17a1*/
LABEL_17:
        v14 = v15 == *(float *)(a1 + 128) || v16 == *(float *)(a1 + 132); /*0x1a17f0*/
        goto LABEL_21; /*0x1a17f2*/
      }
      v15 = (float)(int)roundf((float)((float)(v13 / v18) * v17) * 100.0) / 100.0; /*0x1a17cd*/
    }
    v16 = v13; /*0x1a17d5*/
    goto LABEL_17; /*0x1a17d5*/
  }
LABEL_21:
  v19 = *(unsigned __int16 *)(a1 + 138); /*0x1a17f6*/
  if ( (_WORD)v19 == 2 && (fmaxf(v15, v16) > *(float *)(a1 + 232) || *(float *)(a1 + 236) > fminf(v15, v16) || v14) ) /*0x1a1831*/
  {
    v20 = v8; /*0x1a1837*/
  }
  else
  {
    v21 = *(__int64 **)(a1 + 224); /*0x1a183f*/
    *(float *)(a1 + 128) = v15; /*0x1a1846*/
    *(float *)(a1 + 132) = v16; /*0x1a184e*/
    if ( v21 ) /*0x1a185a*/
    {
      v22 = *v21; /*0x1a185c*/
      v23 = *(unsigned __int8 *)(a1 + 256); /*0x1a185f*/
      if ( (_WORD)v19 ) /*0x1a186a*/
      {
        if ( (_WORD)v19 == 1 ) /*0x1a187b*/
          (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v22 + 8))(v21, v19, (unsigned __int8)v23); /*0x1a1885*/
        else
          (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v22 + 16))(v21, v19, v11, v23); /*0x1a1891*/
      }
      else
      {
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD))v22)(v21, v19, (unsigned __int8)v23); /*0x1a1873*/
      }
    }
    v24 = a1 - 320; /*0x1a18b5*/
    if ( *(_WORD *)(a1 + 138) != 1 ) /*0x1a189e*/
      sub_1A1B10(a1 - 320); /*0x1a18d8*/
    if ( *(_WORD *)(a1 + 138) ) /*0x1a18dd*/
      sub_1A1BA0(v24); /*0x1a18ee*/
    sub_1A1C30(v24); /*0x1a18f9*/
    if ( *(_WORD *)(a1 + 138) == 2 ) /*0x1a191a*/
    {
      sub_83840(*(_QWORD *)(a1 + 88)); /*0x1a194a*/
      v20 = *(_QWORD *)(a1 + 96); /*0x1a1964*/
    }
    else
    {
      v20 = *(_QWORD *)(a1 + 104); /*0x1a191c*/
    }
  }
  return sub_83840(v20); /*0x1a19b1*/
}

// [6/6] Address: 0x1a19d0
// Method: GJScaleControl::ccTouchEnded
__int64 __fastcall GJScaleControl_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v7; // ax
  float v8; // xmm0_4
  cocos2d::CCString *v9; // rax
  float v10; // xmm0_4
  __int64 v11; // rcx
  float Value; // xmm0_4
  cocos2d::CCString *v13; // rax
  float v14; // xmm0_4
  __int64 v15; // rcx

  result = *(unsigned int *)(a2 + 56); /*0x1a19df*/
  if ( *(_DWORD *)(a1 + 112) == (_DWORD)result ) /*0x1a19ee*/
  {
    v7 = *(_WORD *)(a1 + 138); /*0x1a19f4*/
    if ( v7 ) /*0x1a19fe*/
    {
      if ( v7 == 1 ) /*0x1a1a60*/
      {
        Value = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 408LL) + 456LL)); /*0x1a1a74*/
        v13 = cocos2d::CCString::createWithFormat( /*0x1a1aa4*/
                "%.02f",
                (float)((float)((float)(*(float *)(a1 + 232) - *(float *)(a1 + 236)) * Value) + *(float *)(a1 + 236)));
        v14 = cocos2d::CCString::floatValue(v13); /*0x1a1aad*/
        v11 = *(_QWORD *)(a1 + 96); /*0x1a1ab3*/
        *(float *)(a1 + 120) = v14; /*0x1a1ab7*/
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 104); /*0x1a1abe*/
      }
    }
    else
    {
      v8 = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 408LL) + 456LL)); /*0x1a1a12*/
      v9 = cocos2d::CCString::createWithFormat( /*0x1a1a42*/
             "%.02f",
             (float)((float)((float)(*(float *)(a1 + 232) - *(float *)(a1 + 236)) * v8) + *(float *)(a1 + 236)));
      v10 = cocos2d::CCString::floatValue(v9); /*0x1a1a4b*/
      v11 = *(_QWORD *)(a1 + 88); /*0x1a1a51*/
      *(float *)(a1 + 116) = v10; /*0x1a1a55*/
    }
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v11 + 320) + 24LL))(v11 + 320, a2, a3); /*0x1a1ad2*/
    if ( *(_DWORD *)(a1 + 112) != -1 ) /*0x1a1ad9*/
    {
      v15 = *(_QWORD *)(a1 + 224); /*0x1a1adb*/
      *(_DWORD *)(a1 + 112) = -1; /*0x1a1ae2*/
      if ( v15 ) /*0x1a1aec*/
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15); /*0x1a1af1*/
    }
  }
  return result; /*0x1a1af4*/
}
