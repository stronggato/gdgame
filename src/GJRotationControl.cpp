#include <Geode/binding/GJRotationControl.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x19f8c0
// Method: GJRotationControl::~GJRotationControl
cocos2d::CCLayer *__fastcall GJRotationControl__dtor_GJRotationControl(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCLayer::~CCLayer(Block); /*0x19f8cf*/
  if ( (a2 & 1) != 0 ) /*0x19f8d8*/
    j_j_free(Block); /*0x19f8e2*/
  return Block; /*0x19f8e7*/
}

// [2/7] Address: 0x19fa70
// Method: GJRotationControl::init
bool __fastcall GJRotationControl_init(cocos2d::CCLayer *a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  struct cocos2d::CCSprite *v5; // rax
  __int64 v6; // rcx
  struct cocos2d::CCSprite *v7; // rax
  struct cocos2d::CCMenuItem *v8; // rax
  struct cocos2d::CCMenu *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  _DWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  struct cocos2d::CCSprite *v30; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int128 v40; // [rsp+30h] [rbp-28h] BYREF
  __int64 v41; // [rsp+40h] [rbp-18h]
  __int64 v42; // [rsp+48h] [rbp-10h]
  char v43; // [rsp+68h] [rbp+10h] BYREF

  result = cocos2d::CCLayer::init(a1); /*0x19fa79*/
  if ( result ) /*0x19fa81*/
  {
    LOBYTE(v3) = 1; /*0x19fa8c*/
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)a1 + 920LL))(a1, v3); /*0x19fa9b*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v43, 60.0, 0.0); /*0x19fab1*/
    cocos2d::CCPoint::operator=((char *)a1 + 416, v4); /*0x19fac1*/
    (*(void (__fastcall **)(cocos2d::CCLayer *, void *))(*(_QWORD *)a1 + 288LL))(a1, &unk_9046C8); /*0x19fad4*/
    v5 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_rotationControlBtn01_001.png"); /*0x19fae1*/
    v6 = *(_QWORD *)a1; /*0x19fae7*/
    *((_QWORD *)a1 + 53) = v5; /*0x19faf3*/
    (*(void (__fastcall **)(cocos2d::CCLayer *, struct cocos2d::CCSprite *, __int64))(v6 + 456))(a1, v5, 1); /*0x19fb04*/
    v7 = cocos2d::CCSprite::createWithSpriteFrameName("warpLockOffBtn_001.png"); /*0x19fb0e*/
    v8 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v7, 0, a1, sub_19FE60); /*0x19fb23*/
    *((_QWORD *)a1 + 56) = v8; /*0x19fb2b*/
    v9 = cocos2d::CCMenu::createWithItem(v8); /*0x19fb4d*/
    v10 = *(_QWORD *)v9; /*0x19fb50*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v43, 110.0, 35.0); /*0x19fb53*/
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v10 + 184))(v9, v11); /*0x19fb5f*/
    (*(void (__fastcall **)(cocos2d::CCLayer *, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v9, 3); /*0x19fb7b*/
    v14 = CCTextInputNode_create(v13, v12, (__int64)" "); /*0x19fba9*/
    *((_QWORD *)a1 + 58) = v14; /*0x19fbbb*/
    v15 = v14; /*0x19fbc5*/
    v16 = *(_QWORD *)v14; /*0x19fbc8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v43, 110.0, 0.0); /*0x19fbcb*/
    (*(void (__fastcall **)(char *, __int64))(v16 + 184))(v15, v17); /*0x19fbd7*/
    v18 = *((_QWORD *)a1 + 58); /*0x19fbdd*/
    *(_DWORD *)(v18 + 572) = 1056293520; /*0x19fbe4*/
    sub_555B0(v18, v19); /*0x19fbee*/
    v20 = *((_QWORD *)a1 + 58); /*0x19fbf3*/
    *(_DWORD *)(v20 + 568) = 1111490560; /*0x19fbfa*/
    sub_555B0(v20, v21); /*0x19fc04*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 58) + 600LL) + 336LL))( /*0x19fc1c*/
      *(_QWORD *)(*((_QWORD *)a1 + 58) + 600LL),
      0);
    *(_DWORD *)(*((_QWORD *)a1 + 58) + 616LL) = 7; /*0x19fc29*/
    v22 = *((_QWORD *)a1 + 58); /*0x19fc33*/
    v41 = 12; /*0x19fc42*/
    v40 = 0; /*0x19fc4b*/
    v42 = 15; /*0x19fc50*/
    *(_DWORD *)(v22 + 724) = 1; /*0x19fc59*/
    v23 = *((_QWORD *)a1 + 58); /*0x19fc63*/
    BYTE12(v40) = 0; /*0x19fc6a*/
    *(_DWORD *)(v23 + 728) = 2; /*0x19fc6f*/
    v24 = (_DWORD *)*((_QWORD *)a1 + 58); /*0x19fc87*/
    qmemcpy(&v40, "0123456789.-", 12); /*0x19fc8e*/
    GameManager_getMenuMusicFile(v24, &v40); /*0x19fc98*/
    *(_BYTE *)(*((_QWORD *)a1 + 58) + 424LL) = 1; /*0x19fcbd*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v40, 0.0, 0.0, 40.0, 40.0); /*0x19fcc4*/
    v26 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02_small.png", v25); /*0x19fcef*/
    v27 = *v26; /*0x19fcf2*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v43, 80.0, 32.0); /*0x19fcf5*/
    (*(void (__fastcall **)(_QWORD *, __int64))(v27 + 312))(v26, v28); /*0x19fd01*/
    (*(void (__fastcall **)(_QWORD *))(*v26 + 160LL))(v26); /*0x19fd1c*/
    LOBYTE(v29) = 90; /*0x19fd25*/
    (*(void (__fastcall **)(_QWORD *, __int64))(v26[40] + 40LL))(v26 + 40, v29); /*0x19fd2a*/
    (*(void (__fastcall **)(_QWORD *))(*v26 + 240LL))(v26); /*0x19fd3e*/
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)a1 + 58) + 456LL))( /*0x19fd57*/
      *((_QWORD *)a1 + 58),
      v26,
      0xFFFFFFFFLL);
    (*(void (__fastcall **)(cocos2d::CCLayer *, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *((_QWORD *)a1 + 58), 2); /*0x19fd70*/
    v30 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png"); /*0x19fd8b*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v30 + 160LL))(v30); /*0x19fd9b*/
    v31 = (_QWORD *)CCMenuItemSpriteExtra_create(v30, 0, a1, sub_19FEF0); /*0x19fdac*/
    *((_QWORD *)a1 + 59) = v31; /*0x19fdbe*/
    v32 = v31; /*0x19fdc8*/
    v33 = *v31; /*0x19fdcb*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v43, 151.0, 0.0); /*0x19fdce*/
    (*(void (__fastcall **)(_QWORD *, __int64))(v33 + 184))(v32, v34); /*0x19fdda*/
    v39 = cocos2d::CCMenu::create(v36, v35, v37, v38); /*0x19fded*/
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v39 + 184LL))(v39, &unk_9046C8); /*0x19fdfd*/
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v39 + 312LL))(v39, &unk_9046E0); /*0x19fe14*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 464LL))(v39, *((_QWORD *)a1 + 59)); /*0x19fe2b*/
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v39, 3); /*0x19fe3d*/
    ShaderLayer_tweenValueAuto((__int64)a1, 0.0); /*0x19fe49*/
    return 1; /*0x19fe53*/
  }
  return result; /*0x19fa83*/
}

// [3/7] Address: 0x1a02e0
// Method: GJRotationControl::ccTouchBegan
char __fastcall GJRotationControl_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 Location; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  const struct cocos2d::CCPoint *v7; // r8
  __int64 v8; // rcx
  cocos2d::CCSpriteFrameCache *v9; // rax
  struct cocos2d::CCSpriteFrame *v10; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 120) == -1 ) /*0x1a02f9*/
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 344LL))(*(_QWORD *)(a1 + 144)) ) /*0x1a0309*/
    {
      Location = cocos2d::CCTouch::getLocation(a2, &v13); /*0x1a031b*/
      if ( (unsigned __int8)sub_57940(*(_QWORD *)(a1 + 144), Location) ) /*0x1a032b*/
        return 1; /*0x1a041a*/
    }
    v5 = *(_QWORD *)(a1 + 144); /*0x1a0338*/
    if ( v5 ) /*0x1a0342*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 1032LL))(v5, 0); /*0x1a0349*/
    cocos2d::CCTouch::getLocation(a2, &v12); /*0x1a0357*/
    cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v13, &v12); /*0x1a036e*/
    cocos2d::CCPoint::operator=(&v12, v6); /*0x1a037c*/
    if ( cocos2d::ccpDistance((cocos2d *)&v12, (const struct cocos2d::CCPoint *)(a1 + 96), v7) < 24.0 ) /*0x1a039c*/
    {
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 116); /*0x1a03aa*/
      cocos2d::CCPoint::operator-(&v12, &v13, a1 + 96); /*0x1a03b2*/
      cocos2d::CCPoint::operator=(a1 + 88, &v13); /*0x1a03c1*/
      v8 = *(_QWORD *)(a1 + 160); /*0x1a03c7*/
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 56); /*0x1a03d1*/
      if ( v8 ) /*0x1a03d7*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8); /*0x1a03dc*/
      v9 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1a03df*/
      v10 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v9, "GJ_rotationControlBtn02_001.png"); /*0x1a03ef*/
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSpriteFrame *))(**(_QWORD **)(a1 + 104) + 1008LL))( /*0x1a0406*/
        *(_QWORD *)(a1 + 104),
        v10);
      return 1; /*0x1a0406*/
    }
  }
  return 0; /*0x1a040b*/
}

// [4/7] Address: 0x1a0430
// Method: GJRotationControl::ccTouchMoved
void __fastcall GJRotationControl_ccTouchMoved(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  float *v4; // rax
  float v5; // xmm9_4
  float v6; // xmm7_4
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm0_4
  __int64 v10; // rdx
  void (__fastcall ***v11)(_QWORD, __int64, _QWORD); // rcx
  char v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+78h] [rbp+10h] BYREF
  char v14; // [rsp+88h] [rbp+20h] BYREF

  v2 = a1 - 320; /*0x1a043b*/
  if ( *(_DWORD *)(a1 - 320 + 440) == *(_DWORD *)(a2 + 56) ) /*0x1a044b*/
  {
    cocos2d::CCTouch::getLocation(a2, &v12); /*0x1a0470*/
    cocos2d::CCNode::convertToNodeSpace(v2, &v13, &v12); /*0x1a0483*/
    cocos2d::CCPoint::operator=(&v12, v3); /*0x1a0491*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, (const struct cocos2d::CCPoint *)&v12); /*0x1a04a1*/
    v5 = atan2f((float)(v4[1] - 0.0) - *(float *)(v2 + 412), (float)(*v4 - 0.0) - *(float *)(v2 + 408)); /*0x1a04d3*/
    v6 = (float)(sinf(v5) * 60.0) + 0.0; /*0x1a04eb*/
    v7 = (float)(cosf(v5) * 60.0) + 0.0; /*0x1a0508*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, v7, v6); /*0x1a0510*/
    cocos2d::CCPoint::operator=(v2 + 416, v8); /*0x1a0520*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 424) + 184LL))(*(_QWORD *)(v2 + 424), v2 + 416); /*0x1a0537*/
    v9 = roundf((float)-(float)(v5 * 57.29578) * 1000.0) / 1000.0; /*0x1a0561*/
    if ( v9 != *(float *)(v2 + 436) ) /*0x1a058f*/
    {
      *(float *)(v2 + 436) = v9; /*0x1a0594*/
      sub_1A0100(v2); /*0x1a059f*/
      v11 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD))(v2 + 480); /*0x1a05a4*/
      if ( v11 ) /*0x1a05ae*/
        (**v11)(v11, v10, *(unsigned __int8 *)(v2 + 456)); /*0x1a05c7*/
    }
  }
}

// [5/7] Address: 0x1a05e0
// Method: GJRotationControl::ccTouchEnded
__int64 __fastcall GJRotationControl_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(unsigned int *)(a2 + 56); /*0x1a05e0*/
  v3 = a1 - 320; /*0x1a05e3*/
  if ( *(_DWORD *)(v3 + 440) == (_DWORD)result ) /*0x1a05f0*/
    return sub_1A0260(v3); /*0x1a05f0*/
  return result; /*0x1a05f6*/
}

// [6/7] Address: 0x1a0600
// Method: GJRotationControl::draw
void __fastcall GJRotationControl_draw(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  cocos2d *v4; // rax
  const struct cocos2d::CCPoint *v5; // rdx
  char v6; // [rsp+68h] [rbp+10h] BYREF

  cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0xFFu, 0xFFu, 0x32u); /*0x1a0616*/
  glLineWidth(1.0); /*0x1a0627*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v6, 0.0, 0.0); /*0x1a0638*/
  cocos2d::ccDrawCircle(v4, v5, 0.0, a4, 0, 0, 1.0); /*0x1a0663*/
}

// [7/7] Address: 0x1ab620
// Method: GJRotationControl::finishTouch
__int64 __fastcall GJRotationControl_finishTouch(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebp
  unsigned int v5; // esi
  float v6; // xmm6_4
  struct cocos2d::CCObject *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm0_4

  if ( *(_DWORD *)(a1 + 1508) == 2 ) /*0x1ab630*/
    return sub_1AB790(a1, *(unsigned int *)(a1 + 1392)); /*0x1ab63d*/
  v3 = *(_QWORD *)(a1 + 1568); /*0x1ab642*/
  if ( v3 ) /*0x1ab64c*/
    return sub_1AB790(a1, *(unsigned int *)(v3 + 1036)); /*0x1ab659*/
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1ab672*/
  {
    ObjectToolbox_sharedState(); /*0x1ab72e*/
    v12 = ObjectToolbox_gridNodeSizeForKey(v11, 0xFFFFFFFFLL); /*0x1ab738*/
    if ( *(_BYTE *)(a1 + 704) ) /*0x1ab73d*/
    {
      if ( *(float *)(a1 + 700) > 0.0 ) /*0x1ab754*/
        v12 = *(float *)(a1 + 700); /*0x1ab756*/
    }
    result = *(_QWORD *)(a1 + 1512); /*0x1ab759*/
    *(float *)(a1 + 696) = v12; /*0x1ab765*/
    *(float *)(*(_QWORD *)(result + 15008) + 636LL) = v12; /*0x1ab774*/
    return result; /*0x1ab774*/
  }
  v4 = 0; /*0x1ab67f*/
  v5 = 0; /*0x1ab686*/
  v6 = -1.0; /*0x1ab69a*/
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1ab6a5*/
    return sub_1AB790(a1, v4); /*0x1ab6a5*/
  while ( 1 ) /*0x1ab6bf*/
  {
    v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v5); /*0x1ab6bf*/
    ObjectToolbox_sharedState(); /*0x1ab6c2*/
    v10 = ObjectToolbox_gridNodeSizeForKey(v8, *((unsigned int *)v7 + 259)); /*0x1ab6d1*/
    if ( v6 != -1.0 ) /*0x1ab6db*/
      break; /*0x1ab6db*/
    v6 = v10; /*0x1ab6dd*/
    v4 = v9; /*0x1ab6e0*/
LABEL_10:
    if ( ++v5 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1ab6fd*/
      return sub_1AB790(a1, v4); /*0x1ab6fd*/
  }
  if ( v6 == v10 ) /*0x1ab6ea*/
    goto LABEL_10; /*0x1ab6ea*/
  v4 = -1; /*0x1ab701*/
  return sub_1AB790(a1, v4); /*0x1ab638*/
}
