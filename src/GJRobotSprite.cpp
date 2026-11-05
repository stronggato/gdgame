#include <Geode/binding/GJRobotSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x183890
// Method: GJRobotSprite::create
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJRobotSprite_create(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v5; // [rsp+38h] [rbp+10h]

  v5 = operator new(0x808u); /*0x1838a6*/
  v2 = SFXTriggerGameObject_SFXTriggerGameObject(v5); /*0x1838ae*/
  v3 = v2; /*0x1838b3*/
  if ( v2 ) /*0x1838b9*/
  {
    if ( EffectGameObject_init(v2, "GJ_sfxIcon_001.png") ) /*0x1838c5*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v3); /*0x1838d1*/
      *(_DWORD *)(v3 + 1888) = a1; /*0x1838d7*/
      *(_DWORD *)(v3 + 1908) = 1065353216; /*0x1838dd*/
      *(_QWORD *)(v3 + 1900) = 0; /*0x1838e9*/
      *(_QWORD *)(v3 + 1912) = 0; /*0x1838f0*/
      *(_QWORD *)(v3 + 1920) = 0; /*0x1838f7*/
      *(_BYTE *)(v3 + 1930) = 0; /*0x1838fe*/
      *(_BYTE *)(v3 + 1928) = 0; /*0x183904*/
      *(_DWORD *)(v3 + 1972) = 0; /*0x18390a*/
      return v3; /*0x18391d*/
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1); /*0x183926*/
  }
  return 0; /*0x183913*/
}

// [2/5] Address: 0x3a8bd0
// Method: GJRobotSprite::~GJRobotSprite
void __fastcall GJRobotSprite__dtor_GJRobotSprite(__int64 a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rax

  *(_QWORD *)a1 = &GJRobotSprite::`vftable'; /*0x3a8be0*/
  *(_QWORD *)(a1 + 320) = &GJRobotSprite::`vftable'; /*0x3a8bea*/
  *(_QWORD *)(a1 + 344) = &GJRobotSprite::`vftable'; /*0x3a8bf8*/
  v2 = *(cocos2d::CCObject **)(a1 + 760); /*0x3a8bff*/
  if ( v2 ) /*0x3a8c09*/
    cocos2d::CCObject::release(v2); /*0x3a8c0b*/
  v3 = *(cocos2d::CCObject **)(a1 + 744); /*0x3a8c11*/
  if ( v3 ) /*0x3a8c1b*/
    cocos2d::CCObject::release(v3); /*0x3a8c1d*/
  v4 = qword_905FD0; /*0x3a8c23*/
  if ( !qword_905FD0 ) /*0x3a8c2d*/
  {
    v5 = operator new(0x6E8u); /*0x3a8c34*/
    qword_905FD0 = sub_2723A0(v5); /*0x3a8c41*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3a8c52*/
    v4 = qword_905FD0; /*0x3a8c54*/
  }
  GameManager_unloadIcons(v4, *(_DWORD *)(a1 + 788)); /*0x3a8c61*/
  CCAnimatedSprite__dtor_CCAnimatedSprite((cocos2d::CCSprite *)a1); /*0x3a8c6e*/
}

// [4/5] Address: 0x3a9a00
// Method: GJRobotSprite::setOpacity
__int64 __fastcall GJRobotSprite_setOpacity(__int64 a1, unsigned __int8 a2)
{
  unsigned int v3; // ebx
  unsigned int i; // edi
  struct cocos2d::CCObject *v6; // rax
  cocos2d::CCArray *v7; // rdi
  struct cocos2d::CCObject *v8; // rax

  v3 = 0; /*0x3a9a17*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 440)); ++i ) /*0x3a9a25*/
  {
    v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 440), i); /*0x3a9a39*/
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v6 + 40) + 40LL))((__int64)v6 + 320, a2); /*0x3a9a4d*/
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 368) + 320LL) + 40LL))( /*0x3a9a78*/
    *(_QWORD *)(a1 + 368) + 320LL,
    a2);
  v7 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 448) + 480LL))(*(_QWORD *)(a1 + 448)); /*0x3a9a8e*/
  if ( cocos2d::CCArray::count(v7) ) /*0x3a9a91*/
  {
    do /*0x3a9ac9*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v7, v3); /*0x3a9aa5*/
      (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v8 + 40) + 40LL))((__int64)v8 + 320, a2); /*0x3a9ab9*/
      ++v3; /*0x3a9abf*/
    }
    while ( v3 < cocos2d::CCArray::count(v7) ); /*0x3a9ac9*/
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 456) + 320LL) + 40LL))(
           *(_QWORD *)(a1 + 456) + 320LL,
           a2);
}

// [5/5] Address: 0x3aa0f0
// Method: GJRobotSprite::hideSecondary
__int64 __fastcall GJRobotSprite_hideSecondary(__int64 a1)
{
  unsigned int i; // ebx
  struct cocos2d::CCObject *v3; // rax

  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 760)); ++i ) /*0x3aa106*/
  {
    v3 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 760), i); /*0x3aa119*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v3 + 336LL))(v3, 0); /*0x3aa12e*/
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 776) + 336LL))(*(_QWORD *)(a1 + 776), 0);
}

// Address: 0x3a8d30
// Method: GJRobotSprite::init
// Hidden C++ exception states: #wind=8
char __fastcall GJRobotSprite_init(__int64 *a1, unsigned int a2, __int64 *a3)
{
  int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // r9
  struct cocos2d::CCTexture2D *v9; // rax
  __int64 v10; // r14
  struct cocos2d::CCTexture2D *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  cocos2d::CCString *v14; // rax
  const char *CString; // rax
  __int64 v16; // r8
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  const char *p_Src; // rbx
  cocos2d::CCTextureCache *v21; // rax
  void *v22; // r8
  const struct cocos2d::CCRect *v23; // rax
  __int64 v25; // rbx
  cocos2d::CCNode *v26; // rcx
  cocos2d::CCNode *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdi
  float v31; // xmm6_4
  float *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  cocos2d::CCObject *v36; // rax
  __int64 v37; // rcx
  cocos2d::CCObject *v38; // rax
  __int64 v39; // rax
  int v40; // ebx
  cocos2d::CCArray *v41; // r14
  unsigned int i; // r12d
  struct cocos2d::CCObject *v43; // r14
  __int64 v44; // rdx
  unsigned int v45; // r13d
  unsigned __int64 v46; // rcx
  const char *v47; // rcx
  struct cocos2d::CCSprite *v48; // rdi
  __int64 v49; // rbx
  float v50; // xmm6_4
  float *v51; // rax
  __int64 v52; // rax
  struct cocos2d::CCTexture2D *v53; // rdi
  struct cocos2d::CCObject *v54; // rbx
  __int64 v55; // rcx
  cocos2d::CCObject *v56; // rax
  struct cocos2d::CCSprite *v57; // rax
  __int64 v58; // rdi
  float v59; // xmm6_4
  float *v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  void *v63; // rax
  int v64; // [rsp+30h] [rbp-99h]
  cocos2d::CCArray *v65; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v66; // [rsp+40h] [rbp-89h]
  struct cocos2d::CCTexture2D *v67; // [rsp+48h] [rbp-81h]
  __int64 *v68; // [rsp+50h] [rbp-79h]
  _BYTE v69[8]; // [rsp+58h] [rbp-71h] BYREF
  __int64 *v70; // [rsp+60h] [rbp-69h]
  __int128 Src; // [rsp+68h] [rbp-61h] BYREF
  __int64 v72; // [rsp+78h] [rbp-51h]
  unsigned __int64 v73; // [rsp+80h] [rbp-49h]
  void *Block[2]; // [rsp+88h] [rbp-41h] BYREF
  __int64 v75; // [rsp+98h] [rbp-31h]
  unsigned __int64 v76; // [rsp+A0h] [rbp-29h]
  _QWORD v77[2]; // [rsp+A8h] [rbp-21h] BYREF
  unsigned __int64 v78; // [rsp+B8h] [rbp-11h]

  v68 = a3;
  v66 = a2;
  v70 = a3;
  v6 = 0;
  v7 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v65 = (cocos2d::CCArray *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v65);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v7 = qword_905FD0;
  }
  v8 = *(unsigned int *)(v7 + 1272);
  *(_DWORD *)(v7 + 1272) = v8 + 1;
  *((_DWORD *)a1 + 197) = v8;
  v9 = (struct cocos2d::CCTexture2D *)sub_279AB0(v7, a2, *((unsigned int *)a1 + 196), v8);
  v67 = v9;
  v10 = (__int64)a3;
  if ( (unsigned __int64)a3[3] > 0xF )
    v10 = *a3;
  v11 = v9;
  if ( !v9 )
  {
    v12 = ObjectManager_instance();
    v13 = sub_7C320(v12, v10);
    HIDWORD(Block[1]) = 0;
    v75 = 11;
    v76 = 15;
    strcpy((char *)Block, "spriteSheet");
    v14 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v13, Block);
    CString = cocos2d::CCString::getCString(v14);
    Src = 0;
    v72 = 0;
    v73 = 0;
    v16 = -1;
    do
      ++v16;
    while ( CString[v16] );
    sub_3C230(&Src);
    if ( v76 > 0xF )
    {
      v17 = Block[0];
      if ( v76 + 1 >= 0x1000 )
      {
        v17 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v17);
    }
    v75 = 0;
    v76 = 15;
    LOBYTE(Block[0]) = 0;
    sub_43D80(&Src, ".png", 4u);
    p_Src = (const char *)&Src;
    if ( v73 > 0xF )
      p_Src = (const char *)Src;
    v21 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v19, v18);
    v11 = cocos2d::CCTextureCache::addImage(v21, p_Src, 0);
    if ( v73 > 0xF )
    {
      v22 = (void *)Src;
      if ( v73 + 1 >= 0x1000 )
      {
        v22 = *(void **)(Src - 8);
        if ( (unsigned __int64)(Src - (_QWORD)v22 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v22);
    }
    v72 = 0;
    v73 = 15;
    LOBYTE(Src) = 0;
  }
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)Block, 0.0, 0.0, 0.0, 0.0);
  if ( cocos2d::CCSprite::initWithTexture((cocos2d::CCSprite *)a1, v11, v23) )
  {
    *((_BYTE *)a1 + 559) = 1;
    sub_3F5A0(a1 + 75, &byte_6E86E0, 0);
    CCAnimatedSprite_loadType(a1, v10, v11, 1);
    *((_BYTE *)a1 + 559) = 1;
    v25 = a1[83];
    sub_86290(v25);
    v26 = *(cocos2d::CCNode **)(*(_QWORD *)(v25 + 320) + 688LL);
    if ( v26 )
      cocos2d::CCNode::stopAllActions(v26);
    v27 = *(cocos2d::CCNode **)(*(_QWORD *)(v25 + 320) + 680LL);
    if ( v27 )
      cocos2d::CCNode::stopAllActions(v27);
    v28 = *a1;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v65, 30.0, 30.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v28 + 312))(a1, v29);
    v30 = *(_QWORD *)a1[86];
    v31 = *(float *)((*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1) + 4) * 0.5;
    v32 = (float *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1);
    v33 = a1[86];
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v65, *v32 * 0.5, v31);
    (*(void (__fastcall **)(__int64, __int64))(v30 + 184))(v33, v34);
    v36 = (cocos2d::CCObject *)cocos2d::CCArray::create(v35);
    a1[95] = (__int64)v36;
    cocos2d::CCObject::retain(v36);
    v38 = (cocos2d::CCObject *)cocos2d::CCArray::create(v37);
    a1[93] = (__int64)v38;
    cocos2d::CCObject::retain(v38);
    v39 = cocos2d::CCSprite::create();
    a1[96] = v39;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1[86] + 456LL))(a1[86], v39, 0xFFFFFFFFLL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[96] + 336LL))(a1[96], 0);
    *(_BYTE *)(a1[96] + 559) = 1;
    v40 = *((_DWORD *)a1 + 196);
    v64 = v40;
    v41 = *(cocos2d::CCArray **)(a1[86] + 632);
    v65 = v41;
    for ( i = 0; i < cocos2d::CCArray::count(v65); v41 = v65 )
    {
      v43 = cocos2d::CCArray::objectAtIndex(v41, i);
      *((_BYTE *)v43 + 618) = 1;
      sub_3E4F0(v77, (char *)v43 + 632);
      v6 |= 2u;
      if ( v78 )
      {
        if ( v78 >= (unsigned __int64)(v40 == 6) + 11 )
        {
          v46 = (v40 == 6) + 9LL;
          Src = 0;
          v72 = 0;
          v73 = 0;
          if ( v78 < v46 )
            sub_3E4D0(v46, v44);
          sub_3C230(&Src);
          v6 |= 5u;
          v47 = (const char *)&Src;
          if ( v73 > 0xF )
            v47 = (const char *)Src;
          v45 = atoi(v47);
        }
        else
        {
          v45 = -1;
        }
        if ( (v6 & 1) != 0 )
        {
          v6 &= ~1u;
          sub_3C310(&Src);
        }
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v43 + 64LL))(v43, v45);
        v48 = cocos2d::CCSprite::createWithTexture(v67, (const struct cocos2d::CCRect *)&unk_904CB8);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v43 + 456LL))(
          v43,
          v48,
          0xFFFFFFFFLL);
        v49 = *(_QWORD *)v48;
        v50 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v43 + 320LL))(v43) + 4)
            * 0.5;
        v51 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v43 + 320LL))(v43);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v69, *v51 * 0.5, v50);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v49 + 184))(v48, v52);
        cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[95], v48);
        v53 = v67;
        v54 = cocos2d::CCSprite::createWithTexture(v67, (const struct cocos2d::CCRect *)&unk_904CB8);
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1[96] + 456LL))(
          a1[96],
          v54,
          0xFFFFFFFFLL);
        *((_BYTE *)v43 + 616) = 1;
        if ( !*((_QWORD *)v43 + 75) )
        {
          v56 = (cocos2d::CCObject *)cocos2d::CCArray::create(v55);
          *((_QWORD *)v43 + 75) = v56;
          cocos2d::CCObject::retain(v56);
        }
        cocos2d::CCArray::addObject(*((cocos2d::CCArray **)v43 + 75), v54);
        *((_BYTE *)v43 + 617) = 1;
        if ( *((_DWORD *)a1 + 196) == 5 && i == 6 )
          a1[100] = (__int64)v43;
        if ( v45 == 1 )
          a1[99] = (__int64)v43;
        if ( v43 == (struct cocos2d::CCObject *)a1[99] && !a1[97] )
        {
          v57 = cocos2d::CCSprite::createWithTexture(v53);
          a1[97] = (__int64)v57;
          *((_BYTE *)a1 + 752) = 0;
          (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[99] + 456LL))(
            a1[99],
            v57,
            2);
          v58 = *(_QWORD *)a1[97];
          v59 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[99] + 320LL))(a1[99]) + 4) * 0.5;
          v60 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[99] + 320LL))(a1[99]);
          v61 = a1[97];
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, *v60 * 0.5, v59);
          (*(void (__fastcall **)(__int64, __int64))(v58 + 184))(v61, v62);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[97] + 336LL))(a1[97], *((unsigned __int8 *)a1 + 752));
        }
        v40 = v64;
      }
      sub_3C310(v77);
      ++i;
    }
    PlayerObject_toggleSpiderMode(a1, v66);
    Src = 0;
    v72 = 4;
    v73 = 15;
    strcpy((char *)&Src, "idle");
    Block[0] = &Src;
    sub_3E4F0(v77, &Src);
    SpriteAnimationManager_runAnimation(a1[83], v63);
    sub_3C310(&Src);
    sub_3C310(v68);
    return 1;
  }
  else
  {
    sub_3C310(a3);
    return 0;
  }
}
