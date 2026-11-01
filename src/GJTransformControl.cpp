#include <Geode/binding/GJTransformControl.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x1a23a0
// Method: GJTransformControl::init
// Hidden C++ exception states: #wind=6
bool __fastcall GJTransformControl_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct cocos2d::CCSprite *v10; // rax
  struct cocos2d::CCSprite *v11; // rax
  struct cocos2d::CCSprite *v12; // rax
  struct cocos2d::CCSprite *v13; // rax
  __int64 v14; // rax
  cocos2d::CCMenu *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rdi
  __int64 v22; // rbx
  cocos2d::CCSpriteFrameCache *v23; // rax
  struct cocos2d::CCSpriteFrame *v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rbx
  cocos2d::CCSpriteFrameCache *v27; // rax
  struct cocos2d::CCSpriteFrame *v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rbx
  cocos2d::CCSpriteFrameCache *v31; // rax
  struct cocos2d::CCSpriteFrame *v32; // rax
  __int64 *v33; // rdi
  __int64 v34; // rbx
  cocos2d::CCSpriteFrameCache *v35; // rax
  struct cocos2d::CCSpriteFrame *v36; // rax
  cocos2d::CCObject *v37; // rax
  int i; // edi
  unsigned __int64 v39; // rsi
  _BYTE *v40; // rbx
  unsigned __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int16 v44; // cx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rcx
  __int64 v47; // rbx
  char *v48; // r15
  void *v49; // rcx
  _BYTE *v50; // rbx
  unsigned __int64 v51; // rcx
  __int64 v52; // rbx
  void *v53; // r15
  void *v54; // rcx
  void **v55; // rcx
  struct cocos2d::CCSprite *v56; // rax
  struct cocos2d::CCObject *v57; // rbx
  void *v58; // rcx
  __int64 v59; // rcx
  int v60; // xmm0_4
  void *v61; // [rsp+30h] [rbp-50h]
  void *v62; // [rsp+30h] [rbp-50h]
  void *v63; // [rsp+30h] [rbp-50h]
  void *v64; // [rsp+30h] [rbp-50h]
  void *v65; // [rsp+30h] [rbp-50h]
  void *v66[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v67; // [rsp+48h] [rbp-38h]
  unsigned __int64 v68; // [rsp+50h] [rbp-30h]

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x1a23dd*/
  if ( !result ) /*0x1a23e5*/
    return result; /*0x1a23e5*/
  LOBYTE(v3) = 1; /*0x1a23ee*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v3); /*0x1a23f3*/
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 288LL))(a1, &unk_9046C8); /*0x1a2406*/
  v6 = cocos2d::CCNode::create(v5, v4); /*0x1a240c*/
  *(_QWORD *)(a1 + 416) = v6; /*0x1a2412*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v6); /*0x1a2429*/
  v9 = cocos2d::CCNode::create(v8, v7); /*0x1a242c*/
  *(_QWORD *)(a1 + 408) = v9; /*0x1a2432*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 416) + 464LL))(*(_QWORD *)(a1 + 416), v9); /*0x1a2450*/
  *(_DWORD *)(a1 + 432) = -1; /*0x1a2453*/
  v10 = cocos2d::CCSprite::createWithSpriteFrameName("warpLockOffBtn_001.png"); /*0x1a2465*/
  *(_QWORD *)(a1 + 528) = CCMenuItemSpriteExtra_create(v10, 0, a1, sub_1A2DE0); /*0x1a247f*/
  v11 = cocos2d::CCSprite::createWithSpriteFrameName("warpAnchorOffBtn_001.png"); /*0x1a248d*/
  *(_QWORD *)(a1 + 536) = CCMenuItemSpriteExtra_create(v11, 0, a1, sub_1A2ED0); /*0x1a24a7*/
  v12 = cocos2d::CCSprite::createWithSpriteFrameName("warpGridOffBtn_001.png"); /*0x1a24b5*/
  *(_QWORD *)(a1 + 544) = CCMenuItemSpriteExtra_create(v12, 0, a1, sub_1A2FC0); /*0x1a24cf*/
  v13 = cocos2d::CCSprite::createWithSpriteFrameName("warpRotateOffBtn_001.png"); /*0x1a24dd*/
  v14 = CCMenuItemSpriteExtra_create(v13, 0, a1, sub_1A30B0); /*0x1a24f2*/
  *(_QWORD *)(a1 + 552) = v14; /*0x1a24f7*/
  v15 = cocos2d::CCMenu::create( /*0x1a2524*/
          *(struct cocos2d::CCMenuItem **)(a1 + 528),
          *(_QWORD *)(a1 + 536),
          *(_QWORD *)(a1 + 544),
          v14,
          0);
  cocos2d::CCMenu::alignItemsHorizontallyWithPadding(v15, 4.0); /*0x1a2532*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, void *))(*(_QWORD *)v15 + 312LL))(v15, &unk_9046E0); /*0x1a254c*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCMenu *))(**(_QWORD **)(a1 + 408) + 464LL))(*(_QWORD *)(a1 + 408), v15); /*0x1a2566*/
  v16 = qword_905FD0; /*0x1a2569*/
  if ( !qword_905FD0 ) /*0x1a2573*/
  {
    v61 = operator new(0x6E8u); /*0x1a257f*/
    qword_905FD0 = sub_2723A0(v61); /*0x1a258c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1a259d*/
    v16 = qword_905FD0; /*0x1a259f*/
  }
  *(_BYTE *)(a1 + 569) = GameManager_getGameVariable(v16, "0188"); /*0x1a25b2*/
  v17 = qword_905FD0; /*0x1a25b9*/
  if ( !qword_905FD0 ) /*0x1a25c3*/
  {
    v62 = operator new(0x6E8u); /*0x1a25cf*/
    qword_905FD0 = sub_2723A0(v62); /*0x1a25dc*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1a25ed*/
    v17 = qword_905FD0; /*0x1a25ef*/
  }
  *(_BYTE *)(a1 + 570) = GameManager_getGameVariable(v17, "0189"); /*0x1a2602*/
  v18 = qword_905FD0; /*0x1a2609*/
  if ( !qword_905FD0 ) /*0x1a2613*/
  {
    v63 = operator new(0x6E8u); /*0x1a261f*/
    qword_905FD0 = sub_2723A0(v63); /*0x1a262c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1a263d*/
    v18 = qword_905FD0; /*0x1a263f*/
  }
  *(_BYTE *)(a1 + 571) = GameManager_getGameVariable(v18, "0190"); /*0x1a2652*/
  v19 = qword_905FD0; /*0x1a2659*/
  if ( !qword_905FD0 ) /*0x1a2663*/
  {
    v64 = operator new(0x6E8u); /*0x1a266f*/
    qword_905FD0 = sub_2723A0(v64); /*0x1a267c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1a268d*/
    v19 = qword_905FD0; /*0x1a268f*/
  }
  *(_BYTE *)(a1 + 568) = GameManager_getGameVariable(v19, "0229"); /*0x1a26a2*/
  if ( *(_BYTE *)(a1 + 569) ) /*0x1a26a9*/
  {
    v21 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 952LL))(*(_QWORD *)(a1 + 536)); /*0x1a26c3*/
    v22 = *v21; /*0x1a26c6*/
    v23 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1a26c9*/
    v24 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v23, "warpAnchorOnBtn_001.png"); /*0x1a26d9*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v22 + 1008))(v21, v24); /*0x1a26e5*/
  }
  if ( *(_BYTE *)(a1 + 570) ) /*0x1a26eb*/
  {
    v25 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 544) + 952LL))(*(_QWORD *)(a1 + 544)); /*0x1a2705*/
    v26 = *v25; /*0x1a2708*/
    v27 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1a270b*/
    v28 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v27, "warpGridOnBtn_001.png"); /*0x1a271b*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v26 + 1008))(v25, v28); /*0x1a2727*/
  }
  if ( *(_BYTE *)(a1 + 571) ) /*0x1a272d*/
  {
    v29 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 952LL))(*(_QWORD *)(a1 + 552)); /*0x1a2747*/
    v30 = *v29; /*0x1a274a*/
    v31 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1a274d*/
    v32 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v31, "warpRotateOnBtn_001.png"); /*0x1a275d*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v30 + 1008))(v29, v32); /*0x1a2769*/
  }
  if ( *(_BYTE *)(a1 + 568) ) /*0x1a276f*/
  {
    v33 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 528) + 952LL))(*(_QWORD *)(a1 + 528)); /*0x1a2789*/
    v34 = *v33; /*0x1a278c*/
    v35 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1a278f*/
    v36 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v35, "warpLockOnBtn_001.png"); /*0x1a279f*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v34 + 1008))(v33, v36); /*0x1a27ab*/
  }
  v37 = (cocos2d::CCObject *)cocos2d::CCArray::create(v20); /*0x1a27b1*/
  *(_QWORD *)(a1 + 512) = v37; /*0x1a27b7*/
  cocos2d::CCObject::retain(v37); /*0x1a27c1*/
  for ( i = 1; i < 13; ++i ) /*0x1a27c7*/
  {
    *(_OWORD *)v66 = 0; /*0x1a27e3*/
    v67 = 0; /*0x1a27e7*/
    v68 = 0; /*0x1a27eb*/
    v66[0] = (void *)sub_3C460(32); /*0x1a27f9*/
    v67 = 18; /*0x1a27fd*/
    v68 = 31; /*0x1a2805*/
    strcpy((char *)v66[0], "warpBtn_02_001.png"); /*0x1a2814*/
    if ( i == 10 ) /*0x1a282c*/
    {
      v39 = v68; /*0x1a2832*/
      if ( v68 >= 0x12 ) /*0x1a283a*/
      {
        v40 = v66[0]; /*0x1a2844*/
LABEL_22:
        v67 = 18; /*0x1a2849*/
        memmove(v66[0], "warpBtn_03_001.png", 0x12u); /*0x1a2861*/
        v40[18] = 0; /*0x1a2866*/
        goto LABEL_54; /*0x1a286a*/
      }
      v41 = v68 >> 1; /*0x1a2872*/
      if ( v68 <= 0x7FFFFFFFFFFFFFFFLL - (v68 >> 1) ) /*0x1a287e*/
      {
        v42 = 31; /*0x1a2889*/
        if ( v41 + v68 > 0x1F ) /*0x1a2891*/
          v42 = v41 + v68; /*0x1a2891*/
      }
      else
      {
        v42 = 0x7FFFFFFFFFFFFFFFLL; /*0x1a2880*/
      }
      v43 = sub_3C460(v42 + 1); /*0x1a2899*/
      v67 = 18; /*0x1a289e*/
      v68 = v42; /*0x1a28a6*/
      *(_OWORD *)v43 = *(_OWORD *)"warpBtn_03_001.png"; /*0x1a28b1*/
      v44 = *(_WORD *)"ng"; /*0x1a28b4*/
LABEL_49:
      *(_WORD *)(v43 + 16) = v44; /*0x1a2a3b*/
      *(_BYTE *)(v43 + 18) = 0; /*0x1a2a43*/
      v53 = (void *)v43; /*0x1a2a47*/
      if ( v39 > 0xF ) /*0x1a2a4a*/
      {
        v54 = v66[0]; /*0x1a2a50*/
        if ( v39 + 1 >= 0x1000 ) /*0x1a2a5e*/
        {
          v54 = (void *)*((_QWORD *)v66[0] - 1); /*0x1a2a60*/
          if ( (unsigned __int64)((char *)v66[0] - (char *)v54 - 8) > 0x1F ) /*0x1a2a73*/
            goto LABEL_69; /*0x1a2a73*/
        }
        j_j_free(v54); /*0x1a2a79*/
      }
      v66[0] = v53; /*0x1a2a7e*/
      goto LABEL_54; /*0x1a2a7e*/
    }
    if ( i != 11 ) /*0x1a28c3*/
    {
      if ( i != 1 && i != 12 ) /*0x1a29ac*/
        goto LABEL_54; /*0x1a29ac*/
      v39 = v68; /*0x1a29b2*/
      if ( v68 >= 0x12 ) /*0x1a29ba*/
      {
        v50 = v66[0]; /*0x1a29c4*/
        v67 = 18; /*0x1a29c9*/
        memmove(v66[0], "warpBtn_01_001.png", 0x12u); /*0x1a29e1*/
        v50[18] = 0; /*0x1a29e6*/
        goto LABEL_54; /*0x1a29ea*/
      }
      v51 = v68 >> 1; /*0x1a29f2*/
      if ( v68 <= 0x7FFFFFFFFFFFFFFFLL - (v68 >> 1) ) /*0x1a29fe*/
      {
        v52 = 31; /*0x1a2a09*/
        if ( v51 + v68 > 0x1F ) /*0x1a2a11*/
          v52 = v51 + v68; /*0x1a2a11*/
      }
      else
      {
        v52 = 0x7FFFFFFFFFFFFFFFLL; /*0x1a2a00*/
      }
      v43 = sub_3C460(v52 + 1); /*0x1a2a19*/
      v67 = 18; /*0x1a2a1e*/
      v68 = v52; /*0x1a2a26*/
      *(_OWORD *)v43 = *(_OWORD *)"warpBtn_01_001.png"; /*0x1a2a31*/
      v44 = *(_WORD *)"ng"; /*0x1a2a34*/
      goto LABEL_49; /*0x1a2a34*/
    }
    v45 = v68; /*0x1a28c9*/
    if ( v68 >= 0x12 ) /*0x1a28d1*/
    {
      v40 = v66[0]; /*0x1a28db*/
      goto LABEL_22; /*0x1a28e0*/
    }
    v46 = v68 >> 1; /*0x1a290c*/
    if ( v68 <= 0x7FFFFFFFFFFFFFFFLL - (v68 >> 1) ) /*0x1a2918*/
    {
      v47 = 31; /*0x1a2923*/
      if ( v46 + v68 > 0x1F ) /*0x1a292b*/
        v47 = v46 + v68; /*0x1a292b*/
    }
    else
    {
      v47 = 0x7FFFFFFFFFFFFFFFLL; /*0x1a291a*/
    }
    v48 = (char *)sub_3C460(v47 + 1); /*0x1a2938*/
    v67 = 18; /*0x1a293b*/
    v68 = v47; /*0x1a2943*/
    strcpy(v48, "warpBtn_03_001.png"); /*0x1a294e*/
    if ( v45 > 0xF ) /*0x1a2964*/
    {
      v49 = v66[0]; /*0x1a296a*/
      if ( v45 + 1 >= 0x1000 ) /*0x1a2978*/
      {
        v49 = (void *)*((_QWORD *)v66[0] - 1); /*0x1a297e*/
        if ( (unsigned __int64)((char *)v66[0] - (char *)v49 - 8) > 0x1F ) /*0x1a298d*/
LABEL_69:
          invoke_watson(0, 0, 0, 0, 0); /*0x1a2baa*/
      }
      j_j_free(v49); /*0x1a2993*/
    }
    v66[0] = v48; /*0x1a2998*/
LABEL_54:
    v55 = v66; /*0x1a2a82*/
    if ( v68 > 0xF ) /*0x1a2a8b*/
      v55 = (void **)v66[0]; /*0x1a2a8b*/
    v56 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v55); /*0x1a2a90*/
    v57 = v56; /*0x1a2a96*/
    if ( i == 12 || i == 1 ) /*0x1a2aa1*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v56, 100); /*0x1a2ad4*/
    else
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 408) + 456LL))( /*0x1a2ac0*/
        *(_QWORD *)(a1 + 408),
        v56,
        100);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v57 + 64LL))(v57, (unsigned int)i); /*0x1a2ae2*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v57 + 352LL))(v57); /*0x1a2aee*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 512), v57); /*0x1a2afe*/
    if ( v68 > 0xF ) /*0x1a2b0d*/
    {
      v58 = v66[0]; /*0x1a2b12*/
      if ( v68 + 1 >= 0x1000 ) /*0x1a2b20*/
      {
        v58 = (void *)*((_QWORD *)v66[0] - 1); /*0x1a2b26*/
        if ( (unsigned __int64)((char *)v66[0] - (char *)v58 - 8) > 0x1F ) /*0x1a2b35*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1a2bcf*/
      }
      j_j_free(v58); /*0x1a2b3b*/
    }
  }
  v59 = qword_905FD0; /*0x1a2b4b*/
  if ( !qword_905FD0 ) /*0x1a2b55*/
  {
    v65 = operator new(0x6E8u); /*0x1a2b61*/
    qword_905FD0 = sub_2723A0(v65); /*0x1a2b6e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1a2b7f*/
    v59 = qword_905FD0; /*0x1a2b81*/
  }
  if ( GameManager_getGameVariable(v59, "0169") ) /*0x1a2b8f*/
    v60 = 1056964608; /*0x1a2ba0*/
  else
    v60 = 1065353216; /*0x1a2bd6*/
  *(_DWORD *)(a1 + 584) = v60; /*0x1a2bd9*/
  sub_1A31A0(a1); /*0x1a2be5*/
  return 1; /*0x1a2bec*/
}

// [3/5] Address: 0x1a42d0
// Method: GJTransformControl::ccTouchBegan
char __fastcall GJTransformControl_ccTouchBegan(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  const struct cocos2d::CCPoint *v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  cocos2d::CCRect *v8; // rax
  __int16 *v9; // r14
  __int16 v10; // dx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct cocos2d::CCObject *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct cocos2d::CCObject *v16; // rax
  const struct cocos2d::CCPoint *v17; // rax
  struct cocos2d::CCObject *v18; // rax
  const struct cocos2d::CCPoint *v19; // rax
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  __int64 v23; // rax
  struct cocos2d::CCObject *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 Location; // rax
  __int64 v28; // rax
  unsigned int v29; // edx
  cocos2d::CCArray *v30; // rcx
  struct cocos2d::CCObject *v31; // rax
  __int64 v32; // rax
  struct cocos2d::CCObject *v33; // rax
  __int64 v34; // rax
  struct cocos2d::CCObject *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v39; // rax
  cocos2d::CCArray *v40; // rcx
  struct cocos2d::CCObject *v41; // rax
  const struct cocos2d::CCPoint *v42; // rax
  __int64 v43; // rax
  _BYTE v44[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v45[8]; // [rsp+28h] [rbp-48h] BYREF
  float v46; // [rsp+30h] [rbp-40h] BYREF
  float v47; // [rsp+34h] [rbp-3Ch]
  float v48[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v49[8]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v50[8]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v51[8]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v52[24]; // [rsp+58h] [rbp-18h] BYREF
  float v53; // [rsp+A0h] [rbp+30h] BYREF
  float v54; // [rsp+A4h] [rbp+34h]
  char v55; // [rsp+B8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(a1 + 112) != -1 ) /*0x1a42ee*/
    return 0; /*0x1a42ee*/
  cocos2d::CCTouch::getLocation(a2, v45); /*0x1a4303*/
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 88), v49, v45); /*0x1a4315*/
  cocos2d::CCNode::convertToNodeSpace(a1 - 320, v50, v45); /*0x1a432a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v55); /*0x1a4334*/
  v4 = 1; /*0x1a433a*/
  v5 = 1; /*0x1a433f*/
  while ( 1 ) /*0x1a4341*/
  {
    if ( v5 == 12 || (v6 = (const struct cocos2d::CCPoint *)v49, v5 == 1) ) /*0x1a434c*/
      v6 = (const struct cocos2d::CCPoint *)v50; /*0x1a434e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v53, v6); /*0x1a4356*/
    v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), v5 - 1); /*0x1a4366*/
    v8 = (cocos2d::CCRect *)cocos2d::CCNode::boundingBox(v7, v52); /*0x1a4373*/
    if ( cocos2d::CCRect::containsPoint(v8, (const struct cocos2d::CCPoint *)&v53) ) /*0x1a4380*/
      break; /*0x1a4380*/
    if ( ++v5 >= 13 ) /*0x1a438f*/
    {
      v9 = (__int16 *)(a1 + 116); /*0x1a4391*/
      goto LABEL_10; /*0x1a4395*/
    }
  }
  v9 = (__int16 *)(a1 + 116); /*0x1a4397*/
  *(_WORD *)(a1 + 116) = v5; /*0x1a439f*/
  cocos2d::CCPoint::operator=(&v55, &v53); /*0x1a43a7*/
LABEL_10:
  v10 = *v9; /*0x1a43ad*/
  if ( !*v9 ) /*0x1a43ad*/
    return 0; /*0x1a476c*/
  v11 = *(_QWORD *)(a1 + 120); /*0x1a43c2*/
  if ( v11 ) /*0x1a43c9*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11); /*0x1a43ce*/
    v10 = *v9; /*0x1a43d1*/
  }
  if ( !*(_BYTE *)(a1 + 249) ) /*0x1a43d5*/
  {
    v12 = cocos2d::CCDirector::sharedDirector(v11); /*0x1a43de*/
    if ( !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 176LL))(v12) + 154) ) /*0x1a43fa*/
      goto LABEL_33; /*0x1a43fa*/
    v10 = *v9; /*0x1a4400*/
  }
  if ( (unsigned __int16)(v10 - 2) <= 7u && *(_QWORD *)(a1 + 120) ) /*0x1a4411*/
  {
    *(_BYTE *)(a1 + 276) = 1; /*0x1a4422*/
    switch ( v10 ) /*0x1a4441*/
    {
      case 2: /*0x1a4441*/
        v4 = 2; /*0x1a445f*/
        break; /*0x1a4464*/
      case 3: /*0x1a4441*/
        break;
      case 4: /*0x1a4441*/
        v4 = 4; /*0x1a4466*/
        break; /*0x1a446b*/
      case 5: /*0x1a4441*/
        v4 = 3; /*0x1a446d*/
        break; /*0x1a4472*/
      case 6: /*0x1a4441*/
        v4 = 8; /*0x1a4443*/
        break; /*0x1a4448*/
      case 7: /*0x1a4441*/
        v4 = 7; /*0x1a444a*/
        break; /*0x1a444f*/
      case 8: /*0x1a4441*/
        v4 = 6; /*0x1a4451*/
        break; /*0x1a4456*/
      case 9: /*0x1a4441*/
        v4 = 5; /*0x1a4458*/
        break; /*0x1a445d*/
      default:
        v4 = 0; /*0x1a4474*/
        break; /*0x1a4474*/
    }
    v13 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 0); /*0x1a4476*/
    v14 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v13 + 200LL))(v13); /*0x1a4492*/
    cocos2d::CCNode::convertToWorldSpace(a1 - 320, v44, v14); /*0x1a44a3*/
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 88), v48, v15); /*0x1a44b4*/
    v16 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 5u); /*0x1a44c6*/
    v17 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 200LL))(v16); /*0x1a44d9*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v53, v17); /*0x1a44e3*/
    v18 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 8u); /*0x1a44f5*/
    v19 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 200LL))(v18); /*0x1a4508*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, v19); /*0x1a4511*/
    v20 = v46 - v53; /*0x1a452d*/
    v21 = 0.5; /*0x1a4532*/
    if ( (float)(v47 - v54) == 0.0 ) /*0x1a453f*/
      v22 = 0.5; /*0x1a4541*/
    else
      v22 = (float)(v48[1] - v54) / (float)(v47 - v54); /*0x1a454f*/
    if ( v20 != 0.0 ) /*0x1a4558*/
      v21 = (float)(v48[0] - v53) / v20; /*0x1a4564*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v44, v21, v22); /*0x1a456f*/
    cocos2d::CCPoint::operator=(a1 + 268, v23); /*0x1a457f*/
    v24 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), v4); /*0x1a458e*/
    v25 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v24 + 200LL))(v24); /*0x1a45a1*/
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 88), v51, v25); /*0x1a45ae*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v44, (const struct cocos2d::CCPoint *)v51); /*0x1a45bc*/
    sub_1A55B0(a1 - 320, v26); /*0x1a45cc*/
    Location = cocos2d::CCTouch::getLocation(a2, v44); /*0x1a45d8*/
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 88), v52, Location); /*0x1a45e9*/
    cocos2d::CCPoint::operator=(&v55, v28); /*0x1a45f6*/
    goto LABEL_34; /*0x1a45fc*/
  }
LABEL_33:
  *(_BYTE *)(a1 + 276) = 0; /*0x1a45fe*/
LABEL_34:
  v29 = *v9 - 1; /*0x1a4605*/
  v30 = *(cocos2d::CCArray **)(a1 + 192); /*0x1a460f*/
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 56); /*0x1a4616*/
  v31 = cocos2d::CCArray::objectAtIndex(v30, v29); /*0x1a4619*/
  v32 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v31 + 200LL))(v31); /*0x1a462c*/
  cocos2d::CCPoint::operator-(v32, &v53, &v55); /*0x1a463a*/
  cocos2d::CCPoint::operator=(a1 + 128, &v53); /*0x1a464b*/
  v33 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 6u); /*0x1a465d*/
  v34 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 200LL))(v33); /*0x1a4670*/
  cocos2d::CCPoint::operator=(a1 + 152, v34); /*0x1a467d*/
  v35 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 7u); /*0x1a468f*/
  v36 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v35 + 200LL))(v35); /*0x1a46a2*/
  cocos2d::CCPoint::operator=(a1 + 160, v36); /*0x1a46ae*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v53, *(float *)(a1 + 240), *(float *)(a1 + 244)); /*0x1a46c8*/
  cocos2d::CCPoint::operator=(a1 + 168, v37); /*0x1a46d8*/
  if ( *v9 == 12 ) /*0x1a46e6*/
  {
    *(_DWORD *)(a1 + 252) = *(_DWORD *)(a1 + 256); /*0x1a46ee*/
    return 1; /*0x1a46f4*/
  }
  else
  {
    if ( *v9 == 1 ) /*0x1a46fc*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v53, 3.4028235e38, 3.4028235e38); /*0x1a470d*/
      cocos2d::CCPoint::operator=(a1 + 284, v39); /*0x1a471d*/
      v40 = *(cocos2d::CCArray **)(a1 + 192); /*0x1a4723*/
      *(_DWORD *)(a1 + 280) = 0; /*0x1a472c*/
      v41 = cocos2d::CCArray::objectAtIndex(v40, 0); /*0x1a4736*/
      v42 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v41 + 200LL))(v41); /*0x1a4742*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v53, v42); /*0x1a474f*/
      sub_1A5740(a1 - 320, v52, v43); /*0x1a4763*/
    }
    return 1; /*0x1a4768*/
  }
}

// [4/5] Address: 0x1a47b0
// Method: GJTransformControl::ccTouchMoved
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJTransformControl_ccTouchMoved(__int64 a1, __int64 a2)
{
  __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 result; // rax
  struct cocos2d::CCObject *v9; // r14
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  struct cocos2d::CCObject *v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  const struct cocos2d::CCPoint *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  float v29; // xmm6_4
  float v30; // xmm1_4
  __int64 v31; // rax
  float v32; // xmm2_4
  struct cocos2d::CCObject *v33; // rsi
  __int64 v34; // rbx
  float v35; // xmm6_4
  float *v36; // rax
  __int64 v37; // rax
  const struct cocos2d::CCPoint *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  float *v41; // rax
  __int64 v42; // rax
  float v43; // xmm6_4
  float v44; // xmm1_4
  __int64 v45; // rax
  float v46; // xmm2_4
  struct cocos2d::CCObject *v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // rax
  const struct cocos2d::CCPoint *v50; // rax
  __int64 v51; // rax
  float v52; // xmm8_4
  float v53; // xmm7_4
  __int16 v54; // ax
  float v55; // xmm6_4
  float v56; // xmm6_4
  float v57; // xmm8_4
  float v58; // xmm2_4
  __int16 v59; // ax
  float v60; // xmm1_4
  float v61; // xmm1_4
  __int32 v62; // xmm8_4
  float *v63; // rax
  float *v64; // rbx
  char v65; // dl
  float *v66; // rcx
  float v67; // xmm1_4
  float v68; // xmm0_4
  float *v69; // rsi
  float *v70; // rax
  __int64 v71; // rax
  float v72; // xmm2_4
  struct cocos2d::CCObject *v73; // rax
  struct cocos2d::CCObject *v74; // rsi
  float v75; // xmm0_4
  float v76; // xmm6_4
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  struct cocos2d::CCObject *v80; // rax
  struct cocos2d::CCObject *v81; // rsi
  float v82; // xmm0_4
  float v83; // xmm6_4
  __int64 v84; // rbx
  float *v85; // rax
  __int64 v86; // rax
  float v87; // xmm7_4
  float v88; // xmm0_4
  __int64 v89; // rcx
  _BYTE v90[16]; // [rsp+20h] [rbp-40h] BYREF
  float v91; // [rsp+90h] [rbp+30h] BYREF
  float v92; // [rsp+94h] [rbp+34h]
  float v93; // [rsp+98h] [rbp+38h] BYREF
  float v94; // [rsp+9Ch] [rbp+3Ch]
  void *v95; // [rsp+A8h] [rbp+48h] BYREF

  cocos2d::CCTouch::getLocation(a2, &v91); /*0x1a47e0*/
  v4 = *(_WORD *)(a1 + 116); /*0x1a47e6*/
  if ( v4 == 12 || v4 == 1 ) /*0x1a47f4*/
  {
    v6 = a1 - 320; /*0x1a481e*/
    cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v93, &v91); /*0x1a4830*/
    cocos2d::CCPoint::operator=(&v91, v7); /*0x1a483d*/
  }
  else
  {
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 88), &v93, &v91); /*0x1a4802*/
    cocos2d::CCPoint::operator=(&v91, v5); /*0x1a480f*/
    v6 = a1 - 320; /*0x1a4815*/
  }
  result = *(unsigned int *)(a2 + 56); /*0x1a4843*/
  if ( *(_DWORD *)(a1 + 112) == (_DWORD)result ) /*0x1a4849*/
  {
    v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 0); /*0x1a485e*/
    v10 = *(__int16 *)(a1 + 116); /*0x1a4861*/
    switch ( *(_WORD *)(a1 + 116) ) /*0x1a4887*/
    {
      case 1: /*0x1a4887*/
        cocos2d::CCPoint::operator+(&v91, &v93, a1 + 128); /*0x1a4898*/
        v11 = qword_905FD0; /*0x1a489e*/
        if ( !qword_905FD0 ) /*0x1a48a8*/
        {
          v95 = operator new(0x6E8u); /*0x1a48b4*/
          qword_905FD0 = sub_2723A0(v95); /*0x1a48c1*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1a48d2*/
          v11 = qword_905FD0; /*0x1a48d4*/
        }
        if ( !GameManager_getGameVariable(v11, "0242") ) /*0x1a48e2*/
        {
          v12 = *(_DWORD *)(a1 + 280); /*0x1a48ef*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v95, (const struct cocos2d::CCPoint *)&v93); /*0x1a48fd*/
          v14 = sub_1A5740(a1 - 320, v90, v13); /*0x1a4911*/
          cocos2d::CCPoint::operator=(&v93, v14); /*0x1a491d*/
          if ( *(_BYTE *)(a1 + 250) && !*(_DWORD *)(a1 + 280) ) /*0x1a492c*/
          {
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v95, (const struct cocos2d::CCPoint *)&v93); /*0x1a493d*/
            v17 = GJBaseGameLayer_addProximityVolumeEffect(a1 - 320, (__int64)v90, v16, 1); /*0x1a4954*/
            cocos2d::CCPoint::operator=(&v93, v17); /*0x1a4960*/
          }
          v18 = *(_DWORD *)(a1 + 280); /*0x1a4966*/
          if ( v18 ) /*0x1a496e*/
          {
            if ( v18 != v12 ) /*0x1a4972*/
            {
              v19 = sub_182B60(v15); /*0x1a4974*/
              sub_182FE0(v19, 275); /*0x1a4981*/
            }
          }
        }
        (*(void (__fastcall **)(struct cocos2d::CCObject *, float *))(*(_QWORD *)v9 + 184LL))(v9, &v93); /*0x1a4990*/
        return GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a4996*/
      case 2: /*0x1a4887*/
      case 3: /*0x1a4887*/
        v20 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), v10 - 1); /*0x1a49ac*/
        v21 = *(_QWORD *)v20; /*0x1a49af*/
        v22 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v20 + 200LL))(v20); /*0x1a49b5*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v93, v91 + *(float *)(a1 + 128), *(float *)(v22 + 4)); /*0x1a49d1*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v21 + 184))(v20, v23); /*0x1a49dd*/
        if ( *(_BYTE *)(a1 + 250) ) /*0x1a49e3*/
        {
          v24 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v20 + 200LL))(v20); /*0x1a49f2*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v95, v24); /*0x1a49ff*/
          GJBaseGameLayer_addProximityVolumeEffect(v6, (__int64)&v93, v25, 0); /*0x1a4a12*/
          v26 = *(_QWORD *)v20; /*0x1a4a17*/
          v27 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v20 + 200LL))(v20); /*0x1a4a1d*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v95, v93, *(float *)(v27 + 4)); /*0x1a4a31*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v26 + 184))(v20, v28); /*0x1a4a3d*/
        }
        v29 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 200LL))(v9); /*0x1a4a4f*/
        v30 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v20 + 200LL))(v20) - v29; /*0x1a4a63*/
        v31 = 136; /*0x1a4a67*/
        if ( *(_WORD *)(a1 + 116) != 3 ) /*0x1a4a76*/
          v31 = 144; /*0x1a4a76*/
        v32 = *(float *)(v31 + a1) - v29; /*0x1a4a7e*/
        if ( fabs(v32) > 0.0099999998 ) /*0x1a4a93*/
        {
          *(float *)(a1 + 240) = v30 / v32; /*0x1a4a9d*/
          (***(void (__fastcall ****)(_QWORD))(a1 + 120))(*(_QWORD *)(a1 + 120)); /*0x1a4aac*/
        }
        return GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a4aae*/
      case 4: /*0x1a4887*/
      case 5: /*0x1a4887*/
        v33 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), v10 - 1); /*0x1a4ac4*/
        v34 = *(_QWORD *)v33; /*0x1a4ac7*/
        v35 = v92 + *(float *)(a1 + 132); /*0x1a4acf*/
        v36 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 200LL))(v33); /*0x1a4ada*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v93, *v36, v35); /*0x1a4aeb*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v34 + 184))(v33, v37); /*0x1a4af7*/
        if ( *(_BYTE *)(a1 + 250) ) /*0x1a4afd*/
        {
          v38 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 200LL))(v33); /*0x1a4b0c*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v95, v38); /*0x1a4b19*/
          GJBaseGameLayer_addProximityVolumeEffect(v6, (__int64)&v93, v39, 0); /*0x1a4b2c*/
          v40 = *(_QWORD *)v33; /*0x1a4b31*/
          v41 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 200LL))(v33); /*0x1a4b37*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v95, *v41, v94); /*0x1a4b4a*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v40 + 184))(v33, v42); /*0x1a4b56*/
        }
        v43 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 200LL))(v9) + 4); /*0x1a4b68*/
        v44 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 200LL))(v33) + 4) /*0x1a4b7e*/
            - v43;
        v45 = 140; /*0x1a4b82*/
        if ( *(_WORD *)(a1 + 116) != 4 ) /*0x1a4b91*/
          v45 = 148; /*0x1a4b91*/
        v46 = *(float *)(v45 + a1) - v43; /*0x1a4b99*/
        if ( fabs(v46) > 0.0099999998 ) /*0x1a4bae*/
        {
          *(float *)(a1 + 244) = v44 / v46; /*0x1a4bb8*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 8LL))(*(_QWORD *)(a1 + 120)); /*0x1a4bc7*/
        }
        return GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a4bca*/
      case 6: /*0x1a4887*/
      case 7: /*0x1a4887*/
      case 8: /*0x1a4887*/
      case 9: /*0x1a4887*/
        v47 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), v10 - 1); /*0x1a4be0*/
        v48 = *(_QWORD *)v47; /*0x1a4be3*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v93, v91 + *(float *)(a1 + 128), v92 + *(float *)(a1 + 132)); /*0x1a4c04*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v48 + 184))(v47, v49); /*0x1a4c10*/
        if ( *(_BYTE *)(a1 + 250) ) /*0x1a4c16*/
        {
          v50 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v47 + 200LL))(v47); /*0x1a4c25*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v95, v50); /*0x1a4c32*/
          GJBaseGameLayer_addProximityVolumeEffect(v6, (__int64)&v93, v51, 0); /*0x1a4c45*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, float *))(*(_QWORD *)v47 + 184LL))(v47, &v93); /*0x1a4c54*/
        }
        v52 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 200LL))(v9); /*0x1a4c66*/
        v53 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v47 + 200LL))(v47) - v52; /*0x1a4c7b*/
        v54 = *(_WORD *)(a1 + 116); /*0x1a4c80*/
        if ( v54 == 7 || v54 == 9 ) /*0x1a4c8e*/
          v55 = *(float *)(a1 + 136); /*0x1a4c9a*/
        else
          v55 = *(float *)(a1 + 144); /*0x1a4c90*/
        v56 = v55 - v52; /*0x1a4ca2*/
        v57 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 200LL))(v9) + 4); /*0x1a4cb3*/
        v58 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v47 + 200LL))(v47) + 4) /*0x1a4cca*/
            - v57;
        v59 = *(_WORD *)(a1 + 116); /*0x1a4ccf*/
        if ( v59 == 6 || v59 == 7 ) /*0x1a4cdd*/
          v60 = *(float *)(a1 + 140); /*0x1a4ce9*/
        else
          v60 = *(float *)(a1 + 148); /*0x1a4cdf*/
        v61 = v60 - v57; /*0x1a4cf1*/
        v62 = _mm_load_si128((const __m128i *)&xmmword_831640).m128i_i32[0]; /*0x1a4cf9*/
        v63 = (float *)(a1 + 240); /*0x1a4d0e*/
        if ( COERCE_FLOAT(LODWORD(v56) & v62) > 0.0099999998 ) /*0x1a4d18*/
          *v63 = v53 / v56; /*0x1a4d1e*/
        v64 = (float *)(a1 + 244); /*0x1a4d29*/
        if ( COERCE_FLOAT(LODWORD(v61) & v62) > 0.0099999998 ) /*0x1a4d33*/
          *v64 = v58 / v61; /*0x1a4d39*/
        v65 = *(_BYTE *)(a1 + 248); /*0x1a4d49*/
        v66 = (float *)(a1 + 240); /*0x1a4d50*/
        if ( v65 ) /*0x1a4d55*/
        {
          v67 = *(float *)(a1 + 168); /*0x1a4d57*/
          if ( v67 != 0.0 ) /*0x1a4d67*/
          {
            v68 = *(float *)(a1 + 172); /*0x1a4d69*/
            v66 = (float *)(a1 + 240); /*0x1a4d71*/
            if ( v68 != 0.0 ) /*0x1a4d79*/
            {
              *v64 = (float)(v68 * *v63) / v67; /*0x1a4d83*/
LABEL_53:
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 16LL))(*(_QWORD *)(a1 + 120)); /*0x1a4de1*/
              return GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a4fcb*/
            }
          }
        }
        v69 = v66; /*0x1a4d89*/
        v70 = (float *)(a1 + 244); /*0x1a4d8c*/
        if ( !v65 ) /*0x1a4d91*/
        {
          v71 = cocos2d::CCDirector::sharedDirector(v66); /*0x1a4d93*/
          if ( !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 176LL))(v71) + 152) ) /*0x1a4daf*/
            goto LABEL_53; /*0x1a4daf*/
          v70 = (float *)(a1 + 244); /*0x1a4db1*/
        }
        v72 = *v69; /*0x1a4db8*/
        if ( COERCE_FLOAT(*(_DWORD *)v69 & v62) < COERCE_FLOAT(*(_DWORD *)v64 & v62) ) /*0x1a4dd1*/
          v72 = *v64; /*0x1a4dd3*/
        *v69 = v72; /*0x1a4dd6*/
        *v70 = v72; /*0x1a4dda*/
        goto LABEL_53; /*0x1a4dda*/
      case 0xA: /*0x1a4887*/
        v73 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), v10 - 1); /*0x1a4e03*/
        v74 = v73; /*0x1a4e09*/
        v75 = v91 + *(float *)(a1 + 128); /*0x1a4e11*/
        v76 = -100.0; /*0x1a4e19*/
        if ( v75 >= -100.0 ) /*0x1a4e24*/
          v76 = fminf(100.0, v75); /*0x1a4e2e*/
        v77 = *(_QWORD *)v73; /*0x1a4e32*/
        v78 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v73 + 200LL))(v73); /*0x1a4e38*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v93, v76, *(float *)(v78 + 4)); /*0x1a4e4a*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v77 + 184))(v74, v79); /*0x1a4e56*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 64LL))(*(_QWORD *)(a1 + 120)); /*0x1a4e6e*/
        return GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a4e71*/
      case 0xB: /*0x1a4887*/
        v80 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), v10 - 1); /*0x1a4e81*/
        v81 = v80; /*0x1a4e87*/
        v82 = v92 + *(float *)(a1 + 132); /*0x1a4e8f*/
        v83 = -100.0; /*0x1a4e97*/
        if ( v82 >= -100.0 ) /*0x1a4ea2*/
          v83 = fminf(100.0, v82); /*0x1a4eac*/
        v84 = *(_QWORD *)v80; /*0x1a4eb0*/
        v85 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v80 + 200LL))(v80); /*0x1a4eb6*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v93, *v85, v83); /*0x1a4ec7*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v84 + 184))(v81, v86); /*0x1a4ed3*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 72LL))(*(_QWORD *)(a1 + 120)); /*0x1a4eeb*/
        return GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a4eee*/
      case 0xC: /*0x1a4887*/
        v87 = (float)((float)((float)-(float)(atan2f(v92 + *(float *)(a1 + 132), v91 + *(float *)(a1 + 128)) * 57.29578) /*0x1a4f34*/
                            * 100.0)
                    / 100.0)
            - *(float *)(a1 + 260);
        if ( *(_BYTE *)(a1 + 250) ) /*0x1a4f3c*/
        {
          v88 = roundf(v87 / 45.0) * 45.0; /*0x1a4f56*/
          if ( fabs(v88 - v87) < 4.0 ) /*0x1a4f77*/
            v87 = v88; /*0x1a4f79*/
        }
        if ( v87 != *(float *)(a1 + 256) ) /*0x1a4f85*/
        {
          *(float *)(a1 + 256) = v87; /*0x1a4f87*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 352LL))(*(_QWORD *)(a1 + 96)); /*0x1a4f99*/
          v89 = *(_QWORD *)(a1 + 120); /*0x1a4f9f*/
          if ( v89 ) /*0x1a4fa6*/
          {
            if ( !*(_BYTE *)(a1 + 251) ) /*0x1a4fa8*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 40LL))(v89); /*0x1a4fbc*/
          }
        }
        return GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a4fbc*/
      default:
        return GJTransformControl_updateButtons(a1 - 320, 0, 0);
    }
  }
  return result; /*0x1a4fd0*/
}

// [5/5] Address: 0x1a5030
// Method: GJTransformControl::ccTouchEnded
void __fastcall GJTransformControl_ccTouchEnded(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 v5; // r8
  __int16 v6; // ax
  bool v7; // zf
  struct cocos2d::CCObject *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct cocos2d::CCObject *v11; // rax
  struct cocos2d::CCObject *v12; // rax
  __int64 v13; // rax
  float v14; // xmm1_4
  __int64 v15; // rcx
  struct cocos2d::CCObject *v16; // rax
  const struct cocos2d::CCPoint *v17; // rax
  struct cocos2d::CCObject *v18; // rax
  const struct cocos2d::CCPoint *v19; // rax
  __int64 v20; // rax
  __int16 v21; // ax
  struct cocos2d::CCObject *v22; // rax
  const struct cocos2d::CCPoint *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r8
  _BYTE v29[8]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v30[32]; // [rsp+28h] [rbp-20h] BYREF
  float v31; // [rsp+50h] [rbp+8h] BYREF
  float v32; // [rsp+54h] [rbp+Ch]
  float v33; // [rsp+58h] [rbp+10h] BYREF
  float v34; // [rsp+5Ch] [rbp+14h]
  char v35; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0; /*0x1a5047*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35); /*0x1a504a*/
  if ( *(_DWORD *)(a1 - 320 + 432) == *(_DWORD *)(a2 + 56) ) /*0x1a5060*/
  {
    v6 = *(_WORD *)(a1 + 116); /*0x1a5066*/
    if ( v6 == 1 ) /*0x1a506e*/
    {
      v7 = *(_QWORD *)(a1 + 120) == 0; /*0x1a5074*/
      *(_DWORD *)(a1 + 112) = -1; /*0x1a5079*/
      if ( !v7 ) /*0x1a5080*/
      {
        v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 0); /*0x1a508f*/
        v9 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 200LL))(v8); /*0x1a50a2*/
        cocos2d::CCNode::convertToWorldSpace(a1 - 320, &v31, v9); /*0x1a50af*/
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 104LL))(*(_QWORD *)(a1 + 120), v10); /*0x1a50c3*/
        v11 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 0); /*0x1a50cf*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, void *))(*(_QWORD *)v11 + 184LL))(v11, &unk_9046C8); /*0x1a50e9*/
        v4 = 1; /*0x1a50f2*/
        v12 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 104), 0); /*0x1a50f5*/
        v13 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v12 + 200LL))(v12); /*0x1a5108*/
        cocos2d::CCPoint::operator=(&v35, v13); /*0x1a5112*/
LABEL_16:
        LOBYTE(v5) = 1; /*0x1a5252*/
        GJTransformControl_updateButtons(a1 - 320, 0, v5); /*0x1a525a*/
LABEL_17:
        *(_WORD *)(a1 + 116) = 0; /*0x1a525f*/
        GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a526d*/
        if ( v4 ) /*0x1a5275*/
        {
          v22 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 104), 0); /*0x1a5281*/
          v23 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v22 + 200LL))(v22); /*0x1a5294*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v23); /*0x1a529e*/
          cocos2d::CCPoint::operator-(&v35, &v33, &v31); /*0x1a52b3*/
          v24 = *(_QWORD *)(a1 + 104); /*0x1a52b9*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, (const struct cocos2d::CCPoint *)&v33); /*0x1a52c7*/
          v26 = v25; /*0x1a52d1*/
          v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 120LL))(*(_QWORD *)(a1 + 120)); /*0x1a52d7*/
          sub_200950(v27, v29, v26, v24); /*0x1a52e8*/
          LOBYTE(v28) = 1; /*0x1a52ed*/
          GJTransformControl_updateButtons(a1 - 320, 0, v28); /*0x1a52f5*/
          GJTransformControl_updateButtons(a1 - 320, 0, 0); /*0x1a5302*/
        }
        return; /*0x1a5302*/
      }
    }
    else if ( v6 ) /*0x1a5120*/
    {
      *(_DWORD *)(a1 + 112) = -1; /*0x1a5126*/
      if ( *(_BYTE *)(a1 + 251) && v6 == 12 ) /*0x1a513a*/
      {
        v14 = *(float *)(a1 + 256); /*0x1a513c*/
        *(_WORD *)(a1 + 116) = 0; /*0x1a5149*/
        EndLevelLayer_playCoinEffect(a1 - 320, v14); /*0x1a514d*/
        return; /*0x1a515e*/
      }
      v15 = *(_QWORD *)(a1 + 120); /*0x1a515f*/
      if ( v15 ) /*0x1a5166*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15); /*0x1a516b*/
      if ( *(_BYTE *)(a1 + 276) && *(_QWORD *)(a1 + 120) ) /*0x1a517b*/
      {
        v16 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 5u); /*0x1a5192*/
        v17 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 200LL))(v16); /*0x1a51a5*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v33, v17); /*0x1a51af*/
        v18 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 192), 8u); /*0x1a51c1*/
        v19 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 200LL))(v18); /*0x1a51d4*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v19); /*0x1a51de*/
        cocos2d::CCPoint::CCPoint( /*0x1a521d*/
          (cocos2d::CCPoint *)v29,
          (float)((float)(v31 - v33) * *(float *)(a1 + 268)) + v33,
          (float)((float)(v32 - v34) * *(float *)(a1 + 272)) + v34);
        cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 88), v30, v29); /*0x1a5231*/
        sub_1A55B0(a1 - 320, v20); /*0x1a523d*/
      }
    }
    v21 = *(_WORD *)(a1 + 116); /*0x1a5242*/
    if ( v21 != 10 && v21 != 11 ) /*0x1a5250*/
      goto LABEL_17; /*0x1a5250*/
    goto LABEL_16; /*0x1a5250*/
  }
}
