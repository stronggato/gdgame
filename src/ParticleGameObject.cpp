#include <Geode/binding/ParticleGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/30] Address: 0x2e2e70
// Method: ParticleGameObject::updateParticleAngle
// Hidden C++ exception states: #wind=1
void __fastcall ParticleGameObject_updateParticleAngle(__int64 a1, int a2, __int64 a3)
{
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]

  if ( a3 ) /*0x2e2e73*/
  {
    v5 = cocos2d::CCString::createWithFormat("d%i", a2); /*0x2e2e9f*/
    CString = cocos2d::CCString::getCString(v5); /*0x2e2ea8*/
    *(_OWORD *)Block = 0; /*0x2e2eb1*/
    v10 = 0; /*0x2e2eb9*/
    v7 = -1; /*0x2e2ebf*/
    do /*0x2e2ec9*/
      ++v7; /*0x2e2ec6*/
    while ( CString[v7] ); /*0x2e2ec9*/
    sub_3C230(Block); /*0x2e2ed8*/
    cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 848), a3, Block); /*0x2e2eed*/
    if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x2e2efd*/
    {
      v8 = Block[0]; /*0x2e2f02*/
      if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0x2e2f11*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x2e2f17*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x2e2f26*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2e2f3b*/
      }
      j_j_free(v8); /*0x2e2f42*/
    }
  }
}

// [2/30] Address: 0x632870
// Method: ParticleGameObject::~ParticleGameObject
char *__fastcall ParticleGameObject__dtor_ParticleGameObject(char *Block, char a2)
{
  sub_3C310(Block + 1768); /*0x632886*/
  sub_3C310(Block + 1464); /*0x632892*/
  TextGameObject__dtor_TextGameObject(Block); /*0x63289a*/
  if ( (a2 & 1) != 0 ) /*0x6328a2*/
    j_j_free(Block); /*0x6328ac*/
  return Block; /*0x6328b1*/
}

// [3/30] Address: 0x63cab0
// Method: ParticleGameObject::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *ParticleGameObject_create()
{
  cocos2d::CCObject *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 (__fastcall *v4)(); // rdx
  char v5; // al

  v0 = (cocos2d::CCObject *)operator new(0x720u); /*0x63cac0*/
  sub_284FF0(v0); /*0x63cacb*/
  *(_QWORD *)v0 = &ParticleGameObject::`vftable'; /*0x63cad7*/
  *((_QWORD *)v0 + 40) = &ParticleGameObject::`vftable'; /*0x63cae1*/
  *((_QWORD *)v0 + 43) = &ParticleGameObject::`vftable'; /*0x63caef*/
  *(_OWORD *)((char *)v0 + 1464) = 0; /*0x63caf9*/
  *((_QWORD *)v0 + 185) = 0; /*0x63cb00*/
  *((_QWORD *)v0 + 186) = 15; /*0x63cb0b*/
  *((_BYTE *)v0 + 1464) = 0; /*0x63cb16*/
  *((_BYTE *)v0 + 1496) = 1; /*0x63cb1d*/
  sub_6AE20((char *)v0 + 1504, v1, v2, v3); /*0x63cb2b*/
  *((_BYTE *)v0 + 1800) = 0; /*0x63cb30*/
  *((_DWORD *)v0 + 451) = 0; /*0x63cb37*/
  *((_BYTE *)v0 + 1808) = 0; /*0x63cb41*/
  *((_DWORD *)v0 + 453) = -1082130432; /*0x63cb48*/
  *((_WORD *)v0 + 908) = 0; /*0x63cb52*/
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v0 + 72LL); /*0x63cb5e*/
  if ( v4 == ParticleGameObject_init ) /*0x63cb6f*/
  {
    v5 = EnhancedGameObject_init(v0, "edit_eCParticleBtn_001.png"); /*0x63cb78*/
    if ( v5 ) /*0x63cb7f*/
    {
      *((_BYTE *)v0 + 1402) = 1; /*0x63cb81*/
      *((_BYTE *)v0 + 313) = 0; /*0x63cb88*/
      v5 = 1; /*0x63cb8f*/
    }
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(cocos2d::CCObject *))v4)(v0); /*0x63cb93*/
  }
  if ( v5 ) /*0x63cb97*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x63cb9c*/
    return v0; /*0x63cba2*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x63cbba*/
    return 0; /*0x63cbbd*/
  }
}

// [4/30] Address: 0x63cbd0
// Method: ParticleGameObject::init
char __fastcall ParticleGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x63cbdd*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eCParticleBtn_001.png") ) /*0x63cbe7*/
    return 0; /*0x63cc19*/
  sub_287800(a1); /*0x63cbf4*/
  *(_DWORD *)(a1 + 1256) = 4; /*0x63cbfb*/
  *(_BYTE *)(a1 + 1402) = 1; /*0x63cc05*/
  *(_BYTE *)(a1 + 313) = 0; /*0x63cc0c*/
  return 1; /*0x63cc13*/
}

// [5/30] Address: 0x63cc30
// Method: ParticleGameObject::customObjectSetup
// Hidden C++ exception states: #wind=1
char __fastcall ParticleGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // esi
  void **v7; // rax
  char v8; // di
  void *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  const char *v14; // rcx
  char result; // al
  void *Block[2]; // [rsp+38h] [rbp-70h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  _BYTE v18[32]; // [rsp+58h] [rbp-50h] BYREF

  v6 = 0; /*0x63cc5b*/
  EnhancedGameObject_customObjectSetup(); /*0x63cc61*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1160LL) ) /*0x63cc69*/
  {
    v7 = (void **)sub_3E4F0(v18, *(_QWORD *)a2 + 4640LL); /*0x63cca8*/
    v8 = 2; /*0x63ccad*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x63cc75*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x63cc82*/
    LOBYTE(Block[0]) = 0; /*0x63cc88*/
    v7 = Block; /*0x63cc8d*/
    v8 = 1; /*0x63cc92*/
  }
  sub_58AD0(a1 + 1464, v7); /*0x63ccbc*/
  if ( (v8 & 2) != 0 ) /*0x63ccc5*/
  {
    v8 &= ~2u; /*0x63ccc7*/
    sub_3C310(v18); /*0x63cccf*/
  }
  if ( (v8 & 1) != 0 && si128.m128i_i64[1] > 0xFuLL ) /*0x63cce4*/
  {
    v9 = Block[0]; /*0x63cce9*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x63ccf8*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x63ccfe*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x63cd0d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x63cd1e*/
    }
    j_j_free(v9); /*0x63cd25*/
  }
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1168LL) ) /*0x63cd2d*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 4672LL); /*0x63cd3e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4696LL) > 0xFu ) /*0x63cd4a*/
      v11 = *(const char **)v11; /*0x63cd4c*/
    v10 = atoi(v11); /*0x63cd4f*/
  }
  else
  {
    v10 = 0; /*0x63cd37*/
  }
  *(_BYTE *)(a1 + 817) = v10 != 0; /*0x63cd5a*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1176LL) ) /*0x63cd63*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 4704LL); /*0x63cd74*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4728LL) > 0xFu ) /*0x63cd80*/
      v13 = *(const char **)v13; /*0x63cd82*/
    v12 = atoi(v13); /*0x63cd85*/
  }
  else
  {
    v12 = 0; /*0x63cd6d*/
  }
  *(_BYTE *)(a1 + 1800) = v12 != 0; /*0x63cd90*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1688LL) ) /*0x63cd99*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 6752LL); /*0x63cda6*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6776LL) > 0xFu ) /*0x63cdb2*/
      v14 = *(const char **)v14; /*0x63cdb4*/
    v6 = atoi(v14); /*0x63cdbd*/
  }
  result = v6 != 0; /*0x63cdc1*/
  *(_BYTE *)(a1 + 1808) = v6 != 0; /*0x63cdc4*/
  if ( !*(_BYTE *)(a1 + 653) && *(_QWORD *)(a1 + 1480) ) /*0x63cdd3*/
  {
    *(_BYTE *)(a1 + 816) = 1; /*0x63cddd*/
    if ( *(_BYTE *)(a1 + 1496) ) /*0x63cde4*/
    {
      *(_BYTE *)(a1 + 1496) = 0; /*0x63cded*/
      result = KeyframeObject_setupSpline(a1 + 1464, a1 + 1504); /*0x63ce02*/
    }
    *(_BYTE *)(a1 + 816) = 1; /*0x63ce07*/
  }
  return result; /*0x63ce0e*/
}

// [6/30] Address: 0x63ce40
// Method: ParticleGameObject::customSetup
__int64 __fastcall ParticleGameObject_customSetup(__int64 a1)
{
  __int64 v2; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  EnhancedGameObject_customSetup(); /*0x63ce49*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v4, 0.0, 0.0); /*0x63ce59*/
  cocos2d::CCPoint::operator=(a1 + 820, v2); /*0x63ce69*/
  *(_BYTE *)(a1 + 1072) = 0; /*0x63ce76*/
  *(_BYTE *)(a1 + 828) = 0; /*0x63ce83*/
  *(_DWORD *)(a1 + 928) = 7; /*0x63ce91*/
  *(_BYTE *)(a1 + 904) = 1; /*0x63ce9b*/
  *(_WORD *)(a1 + 1042) = 257; /*0x63cea2*/
  *(_BYTE *)(a1 + 816) = 1; /*0x63ceab*/
  *(_BYTE *)(a1 + 652) = 1; /*0x63ceb2*/
  return sub_3F5A0( /*0x63ceb9*/
           (void *)(a1 + 1464),
           "30a-1a1a0.3a30a90a90a29a0a11a0a0a0a0a0a0a0a2a1a0a0a1a0a1a0a1a0a1a0a1a1a0a0a1a0a1a0a1a0a1a0a0a0a0a0a0a0a0a0a0a"
           "0a0a2a1a0a0a0a0a0a0a0a0a0a0",
           0x88u);
}

// [7/30] Address: 0x63ced0
// Method: ParticleGameObject::blendModeChanged
__int64 __fastcall ParticleGameObject_blendModeChanged(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 776); /*0x63ced0*/
  if ( v1 && (*(_BYTE *)(a1 + 817) || *(_BYTE *)(a1 + 1800)) ) /*0x63cee5*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 1272LL))( /*0x63cefb*/
             *(_QWORD *)(a1 + 776),
             *(unsigned __int8 *)(a1 + 1120));
  return result; /*0x63cf02*/
}

// [8/30] Address: 0x63cf10
// Method: ParticleGameObject::addMainSpriteToParent
char __fastcall ParticleGameObject_addMainSpriteToParent(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rdi

  LOBYTE(v4) = GameObject_addMainSpriteToParent((_BYTE *)a1, a2); /*0x63cf20*/
  if ( *(_QWORD *)(a1 + 776) ) /*0x63cf25*/
  {
    v5 = *(_DWORD *)(a1 + 1132); /*0x63cf33*/
    if ( !v5 ) /*0x63cf40*/
      v5 = *(_DWORD *)(a1 + 1124); /*0x63cf42*/
    v6 = GameObject_parentForZLayer(a1, v5, 0, 4); /*0x63cf60*/
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 776) + 504LL))(*(_QWORD *)(a1 + 776)); /*0x63cf66*/
    if ( v4 == v6 ) /*0x63cf6f*/
    {
      if ( a2 ) /*0x63cfc0*/
        LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 584LL))(v6, *(_QWORD *)(a1 + 776)); /*0x63cfe2*/
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 776) + 520LL))(*(_QWORD *)(a1 + 776), 0); /*0x63cf84*/
      LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 456LL))(v6, *(_QWORD *)(a1 + 776)); /*0x63cfb6*/
    }
  }
  return v4; /*0x63cfed*/
}

// [9/30] Address: 0x63d000
// Method: ParticleGameObject::claimParticle
// Hidden C++ exception states: #wind=2
void __fastcall ParticleGameObject_claimParticle(__int64 *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // r10
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r11
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  float v10; // xmm0_4
  void *v11; // [rsp+50h] [rbp+8h]
  void *v12; // [rsp+50h] [rbp+8h]

  if ( !a1[97] && !*((_BYTE *)a1 + 1817) ) /*0x63d01b*/
  {
    if ( *((_BYTE *)a1 + 1496) ) /*0x63d028*/
    {
      *((_BYTE *)a1 + 1496) = 0; /*0x63d031*/
      KeyframeObject_setupSpline(a1 + 183, a1 + 188); /*0x63d046*/
    }
    v2 = qword_905FD0; /*0x63d04b*/
    if ( *((_BYTE *)a1 + 653) ) /*0x63d052*/
    {
      if ( !qword_905FD0 ) /*0x63d05e*/
      {
        v11 = operator new(0x6E8u); /*0x63d06a*/
        qword_905FD0 = sub_2723A0(v11); /*0x63d078*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x63d089*/
        v2 = qword_905FD0; /*0x63d08b*/
      }
      v3 = *(_QWORD **)(v2 + 568); /*0x63d092*/
      v4 = *v3; /*0x63d0bc*/
      v5 = v3; /*0x63d0d0*/
    }
    else
    {
      if ( !qword_905FD0 ) /*0x63d0d8*/
      {
        v12 = operator new(0x6E8u); /*0x63d0e4*/
        qword_905FD0 = sub_2723A0(v12); /*0x63d0f2*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x63d103*/
        v2 = qword_905FD0; /*0x63d105*/
      }
      v6 = *(_QWORD **)(v2 + 560); /*0x63d10c*/
      v4 = *v6; /*0x63d13e*/
      v5 = v6; /*0x63d14f*/
    }
    a1[97] = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64 *))(v4 + 1352))(v5, a1 + 183, a1 + 188); /*0x63d166*/
    v7 = *a1; /*0x63d16d*/
    v8 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 200))(a1); /*0x63d173*/
    (*(void (__fastcall **)(__int64 *, __int64))(v7 + 184))(a1, v8); /*0x63d17f*/
    v9 = a1[97]; /*0x63d185*/
    if ( v9 ) /*0x63d18f*/
    {
      v10 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v9 + 912LL))(v9); /*0x63d194*/
      *((_BYTE *)a1 + 1402) = v10 >= 0.0; /*0x63d1a3*/
      if ( v10 >= 0.0 ) /*0x63d1ab*/
      {
        cocos2d::CCParticleSystem::stopSystem((cocos2d::CCParticleSystem *)a1[97]); /*0x63d1b4*/
        *((_BYTE *)a1 + 1816) = 1; /*0x63d1ba*/
        *((_DWORD *)a1 + 453) = -1082130432; /*0x63d1c1*/
      }
      ParticleGameObject_applyParticleSettings(a1, a1[97]); /*0x63d1d5*/
    }
  }
}

// [10/30] Address: 0x63d1f0
// Method: ParticleGameObject::applyParticleSettings
__int64 __fastcall ParticleGameObject_applyParticleSettings(__int64 a1, __int64 *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int16 v12; // r15
  int v13; // r12d
  __int16 *v14; // rax
  __int16 v15; // bx
  int v16; // edi
  __int64 v17; // rax
  __int32 v18; // xmm2_4
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int16 v24; // bx
  int v25; // edi
  __int16 *v26; // rax
  __int16 v27; // cx
  __m128 v28; // xmm3
  __m128 v29; // xmm3
  __m128 v30; // xmm3
  __m128 v31; // xmm3
  __m128 v32; // xmm3
  __m128 v33; // xmm3
  __m128 v34; // xmm3
  __int16 v35; // [rsp+20h] [rbp-38h] BYREF
  char v36; // [rsp+22h] [rbp-36h]
  __int16 v37; // [rsp+24h] [rbp-34h]
  __m128 v38; // [rsp+28h] [rbp-30h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 1520))(a2); /*0x63d217*/
  *(_BYTE *)(a1 + 828) = v4 != 2; /*0x63d223*/
  *(_BYTE *)(a1 + 1072) = v4 != 2; /*0x63d229*/
  v5 = *a2; /*0x63d22f*/
  if ( v4 == 2 ) /*0x63d232*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1); /*0x63d24d*/
    (*(void (__fastcall **)(__int64 *))(v5 + 120))(a2); /*0x63d259*/
    v6 = *a2; /*0x63d262*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1); /*0x63d265*/
    (*(void (__fastcall **)(__int64 *))(v6 + 136))(a2); /*0x63d271*/
  }
  else
  {
    (*(void (__fastcall **)(__int64 *))(v5 + 160))(a2); /*0x63d23f*/
  }
  v7 = *a2; /*0x63d27e*/
  if ( *(_BYTE *)(a1 + 1072) ) /*0x63d277*/
  {
    (*(void (__fastcall **)(__int64 *))(v7 + 352))(a2); /*0x63d2a3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63d2af*/
    result = sub_63DE50(a1, v9, a2); /*0x63d2be*/
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63d289*/
    result = (*(__int64 (__fastcall **)(__int64 *))(v7 + 352))(a2); /*0x63d295*/
  }
  if ( !*(_BYTE *)(a1 + 817) ) /*0x63d2d2*/
  {
    if ( !*(_BYTE *)(a1 + 1800) ) /*0x63d431*/
      return result; /*0x63d431*/
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 320) + 8LL))(a1 + 320); /*0x63d441*/
    v23 = *(_QWORD *)(a1 + 896); /*0x63d444*/
    v24 = *(_WORD *)v22; /*0x63d44b*/
    v25 = *(unsigned __int8 *)(v22 + 2); /*0x63d44e*/
    v35 = *(_WORD *)v22; /*0x63d452*/
    v36 = v25; /*0x63d456*/
    if ( v23 ) /*0x63d45d*/
      v26 = (__int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v23 + 320) + 8LL))(v23 + 320); /*0x63d469*/
    else
      v26 = &v35; /*0x63d46e*/
    v27 = *v26; /*0x63d472*/
    v21 = *((unsigned __int8 *)v26 + 2); /*0x63d478*/
    v38.m128_i32[3] = 1065353216; /*0x63d491*/
    v37 = v27; /*0x63d498*/
    v28 = v38; /*0x63d49c*/
    v28.m128_f32[0] = (float)(unsigned __int8)v24 / 255.0; /*0x63d4b7*/
    v29 = _mm_shuffle_ps(v28, v28, 225); /*0x63d4be*/
    v29.m128_f32[0] = (float)HIBYTE(v35) / 255.0; /*0x63d4c2*/
    v30 = _mm_shuffle_ps(v29, v29, 198); /*0x63d4c9*/
    v30.m128_f32[0] = (float)v25 / 255.0; /*0x63d4d9*/
    v31 = _mm_shuffle_ps(v30, v30, 201); /*0x63d4e0*/
    v38 = v31; /*0x63d4e4*/
    v38.m128_i32[3] = 1065353216; /*0x63d4e8*/
    *(__m128 *)((char *)a2 + 716) = v31; /*0x63d4ef*/
    v32 = v38; /*0x63d4f7*/
    v32.m128_f32[0] = (float)(unsigned __int8)v27 / 255.0; /*0x63d507*/
    v33 = _mm_shuffle_ps(v32, v32, 225); /*0x63d50b*/
    v33.m128_f32[0] = (float)HIBYTE(v27) / 255.0; /*0x63d517*/
    v34 = _mm_shuffle_ps(v33, v33, 198); /*0x63d51b*/
    v34.m128_f32[0] = (float)(int)v21 / 255.0; /*0x63d51f*/
    *(__m128 *)((char *)a2 + 732) = _mm_shuffle_ps(v34, v34, 201); /*0x63d527*/
    if ( !*(_BYTE *)(a1 + 892) && !*(_BYTE *)(a1 + 893) ) /*0x63d538*/
    {
      v21 = 0; /*0x63d541*/
      return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 1272))(a2, v21); /*0x63d543*/
    }
LABEL_21:
    LOBYTE(v21) = 1; /*0x63d545*/
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 1272))(a2, v21); /*0x63d545*/
  }
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 320) + 8LL))(a1 + 320); /*0x63d2f4*/
  v11 = *(_QWORD *)(a1 + 896); /*0x63d2f7*/
  v12 = *(_WORD *)v10; /*0x63d2fe*/
  v13 = *(unsigned __int8 *)(v10 + 2); /*0x63d302*/
  v35 = *(_WORD *)v10; /*0x63d307*/
  v36 = v13; /*0x63d30c*/
  if ( v11 ) /*0x63d313*/
    v14 = (__int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 320) + 8LL))(v11 + 320); /*0x63d31f*/
  else
    v14 = &v35; /*0x63d324*/
  v15 = *v14; /*0x63d328*/
  v16 = *((unsigned __int8 *)v14 + 2); /*0x63d32e*/
  v17 = *a2; /*0x63d332*/
  v37 = v15; /*0x63d335*/
  v18 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64 *))(v17 + 1344))(a2) + 12); /*0x63d356*/
  v38.m128_f32[2] = (float)v13 / 255.0; /*0x63d36e*/
  v38.m128_i32[3] = v18; /*0x63d377*/
  v38.m128_f32[0] = (float)(unsigned __int8)v12 / 255.0; /*0x63d37c*/
  v19 = *a2; /*0x63d385*/
  v38.m128_f32[1] = (float)HIBYTE(v35) / 255.0; /*0x63d38f*/
  (*(void (__fastcall **)(__int64 *, __m128 *))(v19 + 1352))(a2, &v38); /*0x63d394*/
  v38.m128_i32[3] = *(_DWORD *)((*(__int64 (__fastcall **)(__int64 *))(*a2 + 1376))(a2) + 12); /*0x63d3b5*/
  v20 = *a2; /*0x63d3c9*/
  v38.m128_f32[0] = (float)(unsigned __int8)v15 / 255.0; /*0x63d3d3*/
  v38.m128_f32[1] = (float)HIBYTE(v37) / 255.0; /*0x63d3e7*/
  v38.m128_f32[2] = (float)v16 / 255.0; /*0x63d3ec*/
  (*(void (__fastcall **)(__int64 *, __m128 *))(v20 + 1384))(a2, &v38); /*0x63d3f1*/
  if ( *(_BYTE *)(a1 + 892) || *(_BYTE *)(a1 + 893) ) /*0x63d416*/
    goto LABEL_21; /*0x63d41d*/
  v21 = 0; /*0x63d423*/
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 1272))(a2, v21); /*0x63d553*/
}

// [11/30] Address: 0x63d580
// Method: ParticleGameObject::unclaimParticle
// Hidden C++ exception states: #wind=2
void __fastcall ParticleGameObject_unclaimParticle(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h]
  void *v6; // [rsp+30h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 1480) && *(_QWORD *)(a1 + 776) ) /*0x63d597*/
  {
    v2 = *(_BYTE *)(a1 + 653) == 0; /*0x63d5a5*/
    v3 = qword_905FD0; /*0x63d5ac*/
    if ( v2 ) /*0x63d5b3*/
    {
      if ( !qword_905FD0 ) /*0x63d5f8*/
      {
        v6 = operator new(0x6E8u); /*0x63d604*/
        qword_905FD0 = sub_2723A0(v6); /*0x63d612*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x63d623*/
        v3 = qword_905FD0; /*0x63d625*/
      }
      v4 = *(_QWORD *)(v3 + 560); /*0x63d62c*/
    }
    else
    {
      if ( !qword_905FD0 ) /*0x63d5b8*/
      {
        v5 = operator new(0x6E8u); /*0x63d5c4*/
        qword_905FD0 = sub_2723A0(v5); /*0x63d5d2*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x63d5e3*/
        v3 = qword_905FD0; /*0x63d5e5*/
      }
      v4 = *(_QWORD *)(v3 + 568); /*0x63d5ec*/
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 1360LL))(v4, a1 + 1464, *(_QWORD *)(a1 + 776)); /*0x63d644*/
    *(_QWORD *)(a1 + 776) = 0; /*0x63d64a*/
  }
}

// [12/30] Address: 0x63d660
// Method: ParticleGameObject::particleWasActivated
void __fastcall ParticleGameObject_particleWasActivated(__int64 a1)
{
  cocos2d::CCParticleSystem *v2; // rcx
  __int64 v3; // rdi

  if ( *(_BYTE *)(a1 + 1808) ) /*0x63d666*/
  {
    v2 = *(cocos2d::CCParticleSystem **)(a1 + 776); /*0x63d676*/
    if ( v2 ) /*0x63d680*/
    {
      if ( cocos2d::CCParticleSystem::getTimeElapsed(v2) <= 0.0 ) /*0x63d692*/
      {
        if ( (float)((*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 776) + 960LL))(*(_QWORD *)(a1 + 776)) / 10.0) <= 0.2 ) /*0x63d6c1*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 776) + 960LL))(*(_QWORD *)(a1 + 776)); /*0x63d6cd*/
        v3 = 10; /*0x63d6de*/
        do /*0x63d704*/
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 776) + 32LL))(*(_QWORD *)(a1 + 776)); /*0x63d6fd*/
          --v3; /*0x63d700*/
        }
        while ( v3 ); /*0x63d704*/
      }
    }
  }
}

// [13/30] Address: 0x63d720
// Method: ParticleGameObject::setParticleString
// Hidden C++ exception states: #wind=1
double __fastcall ParticleGameObject_setParticleString(__int64 a1, size_t *a2)
{
  size_t *v4; // rdi
  void *v5; // rdx

  v4 = (size_t *)(a1 + 1464); /*0x63d749*/
  if ( (unsigned int)sub_3C160((void *)(a1 + 1464), a2) ) /*0x63d753*/
  {
    if ( v4 != a2 ) /*0x63d75f*/
    {
      v5 = a2; /*0x63d761*/
      if ( a2[3] > 0xF ) /*0x63d769*/
        v5 = (void *)*a2; /*0x63d76b*/
      sub_3F5A0(v4, v5, a2[2]); /*0x63d775*/
    }
    *(_BYTE *)(a1 + 1496) = 1; /*0x63d77a*/
  }
  return sub_3C310(a2); /*0x63d789*/
}

// [14/30] Address: 0x63d7b0
// Method: ParticleGameObject::updateParticle
// Hidden C++ exception states: #wind=1
void __fastcall ParticleGameObject_updateParticle(__int64 a1)
{
  cocos2d::CCParticleSystem *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  bool v7; // al
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  double v11; // xmm0_8
  float v12; // xmm6_4
  __int64 v13; // rbx
  __int64 v14; // rdx
  _BYTE v15[264]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v16[40]; // [rsp+128h] [rbp-50h] BYREF

  v2 = *(cocos2d::CCParticleSystem **)(a1 + 776); /*0x63d7da*/
  if ( v2 ) /*0x63d7e4*/
  {
    cocos2d::CCParticleSystem::stopSystem(v2); /*0x63d7ea*/
    v6 = *(_QWORD *)(a1 + 776); /*0x63d7f0*/
    if ( *(_QWORD *)(a1 + 1480) ) /*0x63d7f7*/
    {
      sub_6AE20(v15, v3, v4, v5); /*0x63d806*/
      KeyframeObject_setupSpline(a1 + 1464, v15); /*0x63d818*/
      GameToolbox_particleFromStruct(v15, v6, 0); /*0x63d828*/
      sub_3C310(v16); /*0x63d836*/
    }
    v7 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 776) + 912LL))(*(_QWORD *)(a1 + 776)) >= 0.0 /*0x63d860*/
      || *(_BYTE *)(a1 + 1433);
    *(_BYTE *)(a1 + 1402) = v7; /*0x63d862*/
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 776) + 1520LL))(*(_QWORD *)(a1 + 776)); /*0x63d872*/
    *(_BYTE *)(a1 + 828) = v8 != 2; /*0x63d87e*/
    *(_BYTE *)(a1 + 1072) = v8 != 2; /*0x63d884*/
    if ( v8 != 2 ) /*0x63d88a*/
    {
      v9 = *(_QWORD *)(a1 + 776); /*0x63d88c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63d899*/
      sub_63DE50(a1, v10, v9); /*0x63d8a8*/
    }
    if ( *(_BYTE *)(a1 + 828) ) /*0x63d8ad*/
    {
      v11 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1); /*0x63d8bc*/
      v12 = *(float *)&v11; /*0x63d8c2*/
      v13 = *(_QWORD *)(a1 + 776); /*0x63d8c5*/
      if ( v13 ) /*0x63d8cf*/
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63d8d7*/
        sub_63DE50(a1, v14, v13); /*0x63d8e6*/
        cocos2d::CCParticleSystem::loadScaledDefaults(*(cocos2d::CCParticleSystem **)(a1 + 776), fabs(v12)); /*0x63d8fc*/
      }
    }
    if ( *(_QWORD *)(a1 + 776) && (*(_BYTE *)(a1 + 817) || *(_BYTE *)(a1 + 1800)) ) /*0x63d915*/
      GameObject_updateObjectEditorColor((_QWORD *)a1); /*0x63d921*/
  }
}

// [15/30] Address: 0x63dae0
// Method: ParticleGameObject::updateParticlePreviewArtOpacity
__int64 __fastcall ParticleGameObject_updateParticlePreviewArtOpacity(_QWORD *a1, float a2)
{
  __int64 result; // rax
  int v4; // edi
  __int64 v5; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 472LL))(a1, 1); /*0x63dafd*/
  v4 = (int)a2; /*0x63db03*/
  if ( result ) /*0x63db0a*/
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(result + 320) + 40LL))( /*0x63db1a*/
               result + 320,
               (unsigned __int8)v4);
  v5 = a1[112]; /*0x63db1d*/
  if ( v5 ) /*0x63db27*/
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 472LL))(v5, 1); /*0x63db31*/
    if ( result ) /*0x63db3a*/
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(result + 320) + 40LL))( /*0x63db4a*/
               result + 320,
               (unsigned __int8)v4);
  }
  return result; /*0x63db4d*/
}

// [16/30] Address: 0x63db60
// Method: ParticleGameObject::setRotation
double __fastcall ParticleGameObject_setRotation(__int64 a1, float a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  double result; // xmm0_8

  GameObject_setRotation(a1, a2); /*0x63db69*/
  if ( *(_BYTE *)(a1 + 1072) ) /*0x63db6e*/
  {
    v3 = *(_QWORD *)(a1 + 776); /*0x63db82*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63db89*/
    return sub_63DE50(a1, v4, v3); /*0x63db98*/
  }
  return result; /*0x63dba2*/
}

// [17/30] Address: 0x63dbb0
// Method: ParticleGameObject::setRotationX
double __fastcall ParticleGameObject_setRotationX(__int64 a1, float a2)
{
  double result; // xmm0_8
  unsigned int i; // ebx
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx

  *(_QWORD *)&result = *(unsigned int *)(a1 + 56); /*0x63dbba*/
  if ( *(float *)&result != a2 ) /*0x63dbcf*/
  {
    *(_WORD *)(a1 + 872) = 257; /*0x63dbd5*/
    *(_BYTE *)(a1 + 848) = 1; /*0x63dbde*/
    cocos2d::CCSprite::setRotationX((cocos2d::CCSprite *)a1, a2); /*0x63dbe5*/
    if ( *(_BYTE *)(a1 + 616) ) /*0x63dbeb*/
    {
      for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x63dbfd*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x63dc19*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v5 + 368LL))(v5); /*0x63dc2f*/
      }
    }
    v6 = *(_QWORD *)(a1 + 752); /*0x63dc44*/
    if ( v6 ) /*0x63dc4e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 368LL))(v6); /*0x63dc56*/
    v7 = *(_QWORD *)(a1 + 896); /*0x63dc5c*/
    if ( v7 && !*(_BYTE *)(a1 + 874) ) /*0x63dc68*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 368LL))(v7); /*0x63dc77*/
    v8 = *(_QWORD *)(a1 + 776); /*0x63dc7d*/
    if ( v8 && !*(_BYTE *)(a1 + 1072) ) /*0x63dc89*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 368LL))(v8); /*0x63dc98*/
    *(_QWORD *)&result = *(unsigned int *)(a1 + 56); /*0x63dc9e*/
    *(_BYTE *)(a1 + 912) = *(float *)&result == 90.0 /*0x63dccf*/
                        || *(float *)&result == -90.0
                        || *(float *)&result == 270.0
                        || *(float *)&result == -270.0;
  }
  if ( *(_BYTE *)(a1 + 1072) ) /*0x63dcdf*/
  {
    v9 = *(_QWORD *)(a1 + 776); /*0x63dcf3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63dcfa*/
    return sub_63DE50(a1, v10, v9); /*0x63dd09*/
  }
  return result; /*0x63dd0e*/
}

// [18/30] Address: 0x63dd20
// Method: ParticleGameObject::setRotationY
double __fastcall ParticleGameObject_setRotationY(__int64 a1, float a2)
{
  double result; // xmm0_8
  unsigned int i; // ebx
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx

  *(_QWORD *)&result = *(unsigned int *)(a1 + 60); /*0x63dd2a*/
  if ( *(float *)&result != a2 ) /*0x63dd3f*/
  {
    *(_WORD *)(a1 + 872) = 257; /*0x63dd45*/
    *(_BYTE *)(a1 + 848) = 1; /*0x63dd4e*/
    cocos2d::CCSprite::setRotationY((cocos2d::CCSprite *)a1, a2); /*0x63dd55*/
    if ( *(_BYTE *)(a1 + 616) ) /*0x63dd5b*/
    {
      for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x63dd6d*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x63dd89*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v5 + 384LL))(v5); /*0x63dd9f*/
      }
    }
    v6 = *(_QWORD *)(a1 + 752); /*0x63ddb4*/
    if ( v6 ) /*0x63ddbe*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 384LL))(v6); /*0x63ddc6*/
    v7 = *(_QWORD *)(a1 + 896); /*0x63ddcc*/
    if ( v7 && !*(_BYTE *)(a1 + 874) ) /*0x63ddd8*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 384LL))(v7); /*0x63dde7*/
    v8 = *(_QWORD *)(a1 + 776); /*0x63dded*/
    if ( v8 && !*(_BYTE *)(a1 + 1072) ) /*0x63ddf9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 384LL))(v8); /*0x63de08*/
  }
  if ( *(_BYTE *)(a1 + 1072) ) /*0x63de0e*/
  {
    v9 = *(_QWORD *)(a1 + 776); /*0x63de22*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63de29*/
    return sub_63DE50(a1, v10, v9); /*0x63de38*/
  }
  return result; /*0x63de3d*/
}

// [19/30] Address: 0x63df80
// Method: ParticleGameObject::setScaleX
void __fastcall ParticleGameObject_setScaleX(__int64 a1, float a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx

  GameObject_setScaleX(a1, a2); /*0x63df91*/
  if ( *(_BYTE *)(a1 + 828) ) /*0x63df96*/
  {
    v3 = *(_QWORD *)(a1 + 776); /*0x63dfa4*/
    if ( v3 ) /*0x63dfae*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63dfb6*/
      sub_63DE50(a1, v4, v3); /*0x63dfc5*/
      cocos2d::CCParticleSystem::loadScaledDefaults(*(cocos2d::CCParticleSystem **)(a1 + 776), fabs(a2)); /*0x63dfdb*/
    }
  }
}

// [20/30] Address: 0x63e000
// Method: ParticleGameObject::setScaleY
void __fastcall ParticleGameObject_setScaleY(__int64 a1, float a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx

  GameObject_setScaleY(a1, a2); /*0x63e011*/
  if ( *(_BYTE *)(a1 + 828) ) /*0x63e016*/
  {
    v3 = *(_QWORD *)(a1 + 776); /*0x63e024*/
    if ( v3 ) /*0x63e02e*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63e036*/
      sub_63DE50(a1, v4, v3); /*0x63e045*/
      cocos2d::CCParticleSystem::loadScaledDefaults(*(cocos2d::CCParticleSystem **)(a1 + 776), fabs(a2)); /*0x63e05b*/
    }
  }
}

// [21/30] Address: 0x63e080
// Method: ParticleGameObject::setScale
void __fastcall ParticleGameObject_setScale(__int64 a1, float a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx

  GameObject_setScale(a1, a2); /*0x63e091*/
  if ( *(_BYTE *)(a1 + 828) ) /*0x63e096*/
  {
    v3 = *(_QWORD *)(a1 + 776); /*0x63e0a4*/
    if ( v3 ) /*0x63e0ae*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1); /*0x63e0b6*/
      sub_63DE50(a1, v4, v3); /*0x63e0c5*/
      cocos2d::CCParticleSystem::loadScaledDefaults(*(cocos2d::CCParticleSystem **)(a1 + 776), fabs(a2)); /*0x63e0db*/
    }
  }
}

// [22/30] Address: 0x63e100
// Method: ParticleGameObject::setObjectColor
__int64 __fastcall ParticleGameObject_setObjectColor(__int64 a1, __int16 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  float v8; // xmm3_4
  __m128i v9; // xmm0
  float v10; // xmm1_4
  __m128 v11; // xmm4
  __m128 v12; // xmm4
  __m128 v13; // xmm4
  __m128 v14; // xmm4
  float v15[4]; // [rsp+20h] [rbp-28h] BYREF

  result = GameObject_setObjectColor(a1, a2); /*0x63e11f*/
  v5 = *(_QWORD *)(a1 + 776); /*0x63e124*/
  if ( v5 ) /*0x63e12e*/
  {
    if ( *(_BYTE *)(a1 + 817) ) /*0x63e134*/
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 1344LL))(v5); /*0x63e140*/
      v7 = *(_QWORD *)(a1 + 776); /*0x63e153*/
      v8 = *(float *)(v6 + 12); /*0x63e15a*/
      LODWORD(v6) = *(unsigned __int8 *)a2; /*0x63e15f*/
      v15[3] = v8; /*0x63e162*/
      v9 = _mm_cvtsi32_si128(v6); /*0x63e168*/
      LODWORD(v6) = *((unsigned __int8 *)a2 + 1); /*0x63e16c*/
      v15[0] = _mm_cvtepi32_ps(v9).m128_f32[0] / 255.0; /*0x63e177*/
      v10 = (float)*((unsigned __int8 *)a2 + 2) / 255.0; /*0x63e193*/
      v15[1] = (float)(int)v6 / 255.0; /*0x63e197*/
      v15[2] = v10; /*0x63e19d*/
      return (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v7 + 1352LL))(v7, v15); /*0x63e1a6*/
    }
    else if ( *(_BYTE *)(a1 + 1800) ) /*0x63e1ae*/
    {
      v11 = 0; /*0x63e1ba*/
      result = *((unsigned __int8 *)a2 + 2); /*0x63e1df*/
      v11.m128_f32[0] = (float)*(unsigned __int8 *)a2 / 255.0; /*0x63e1e3*/
      v12 = _mm_shuffle_ps(v11, v11, 225); /*0x63e1eb*/
      v12.m128_f32[0] = (float)*((unsigned __int8 *)a2 + 1) / 255.0; /*0x63e1f7*/
      v13 = _mm_shuffle_ps(v12, v12, 198); /*0x63e1fb*/
      v13.m128_f32[0] = (float)(int)result / 255.0; /*0x63e1ff*/
      v14 = _mm_shuffle_ps(v13, v13, 39); /*0x63e203*/
      v14.m128_f32[0] = *(float *)(v5 + 728); /*0x63e207*/
      *(__m128 *)(v5 + 716) = _mm_shuffle_ps(v14, v14, 57); /*0x63e20f*/
    }
  }
  return result; /*0x63e216*/
}

// [23/30] Address: 0x63e230
// Method: ParticleGameObject::setChildColor
void __fastcall ParticleGameObject_setChildColor(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  float v7; // xmm3_4
  __m128i v8; // xmm0
  float v9; // xmm1_4
  __m128 v10; // xmm4
  __m128 v11; // xmm4
  __m128 v12; // xmm4
  __m128 v13; // xmm4
  float v14[4]; // [rsp+20h] [rbp-28h] BYREF

  GameObject_setChildColor(a1, a2); /*0x63e24f*/
  v4 = *(_QWORD *)(a1 + 776); /*0x63e254*/
  if ( v4 ) /*0x63e25e*/
  {
    if ( *(_BYTE *)(a1 + 817) ) /*0x63e264*/
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 1376LL))(v4); /*0x63e270*/
      v6 = *(_QWORD *)(a1 + 776); /*0x63e283*/
      v7 = *(float *)(v5 + 12); /*0x63e28a*/
      LODWORD(v5) = *a2; /*0x63e28f*/
      v14[3] = v7; /*0x63e292*/
      v8 = _mm_cvtsi32_si128(v5); /*0x63e298*/
      LODWORD(v5) = a2[1]; /*0x63e29c*/
      v14[0] = _mm_cvtepi32_ps(v8).m128_f32[0] / 255.0; /*0x63e2a7*/
      v9 = (float)a2[2] / 255.0; /*0x63e2c3*/
      v14[1] = (float)(int)v5 / 255.0; /*0x63e2c7*/
      v14[2] = v9; /*0x63e2cd*/
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v6 + 1384LL))(v6, v14); /*0x63e2d6*/
    }
    else if ( *(_BYTE *)(a1 + 1800) ) /*0x63e2de*/
    {
      v10 = 0; /*0x63e2ea*/
      v10.m128_f32[0] = (float)*a2 / 255.0; /*0x63e313*/
      v11 = _mm_shuffle_ps(v10, v10, 225); /*0x63e31b*/
      v11.m128_f32[0] = (float)a2[1] / 255.0; /*0x63e327*/
      v12 = _mm_shuffle_ps(v11, v11, 198); /*0x63e32b*/
      v12.m128_f32[0] = (float)a2[2] / 255.0; /*0x63e32f*/
      v13 = _mm_shuffle_ps(v12, v12, 39); /*0x63e333*/
      v13.m128_f32[0] = *(float *)(v4 + 744); /*0x63e337*/
      *(__m128 *)(v4 + 732) = _mm_shuffle_ps(v13, v13, 57); /*0x63e33f*/
    }
  }
}

// [24/30] Address: 0x63e360
// Method: ParticleGameObject::updateMainParticleOpacity
__int64 __fastcall ParticleGameObject_updateMainParticleOpacity(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 776); /*0x63e360*/
  if ( v2 ) /*0x63e36a*/
  {
    if ( *(_BYTE *)(a1 + 817) ) /*0x63e36c*/
    {
      *(float *)(v2 + 596) = (float)a2 / 255.0; /*0x63e387*/
      result = *(_QWORD *)(a1 + 776); /*0x63e390*/
      *(_BYTE *)(result + 838) = a2; /*0x63e397*/
    }
    else if ( *(_BYTE *)(a1 + 1800) ) /*0x63e39e*/
    {
      *(float *)(v2 + 728) = (float)a2 / 255.0; /*0x63e3b9*/
      result = *(_QWORD *)(a1 + 776); /*0x63e3c2*/
      *(_BYTE *)(result + 838) = a2; /*0x63e3c9*/
    }
    else
    {
      *(_BYTE *)(v2 + 838) = a2; /*0x63e3d0*/
    }
  }
  return result; /*0x63e39d*/
}

// [25/30] Address: 0x63e3e0
// Method: ParticleGameObject::updateSecondaryParticleOpacity
__int64 __fastcall ParticleGameObject_updateSecondaryParticleOpacity(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 776); /*0x63e3e0*/
  if ( v2 ) /*0x63e3ea*/
  {
    if ( *(_BYTE *)(a1 + 817) ) /*0x63e3ec*/
    {
      *(float *)(v2 + 628) = (float)a2 / 255.0; /*0x63e407*/
      return a2; /*0x63e3f5*/
    }
    else if ( *(_BYTE *)(a1 + 1800) ) /*0x63e411*/
    {
      *(float *)(v2 + 744) = (float)a2 / 255.0; /*0x63e42c*/
      return a2; /*0x63e41a*/
    }
  }
  return result; /*0x63e410*/
}

// [26/30] Address: 0x63e440
// Method: ParticleGameObject::deactivateObject
__int64 __fastcall ParticleGameObject_deactivateObject(__int64 a1)
{
  char v1; // bl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 773); /*0x63e44a*/
  result = EnhancedGameObject_deactivateObject(); /*0x63e454*/
  if ( v1 ) /*0x63e45b*/
  {
    if ( !*(_BYTE *)(a1 + 773) ) /*0x63e45d*/
      *(_DWORD *)(a1 + 1812) = -1082130432; /*0x63e466*/
  }
  return result; /*0x63e470*/
}

// [27/30] Address: 0x63e480
// Method: ParticleGameObject::resetObject
__int64 __fastcall ParticleGameObject_resetObject(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = EnhancedGameObject_resetObject(); /*0x63e489*/
  v3 = *(_QWORD *)(a1 + 776); /*0x63e48e*/
  *(_BYTE *)(a1 + 1816) = 1; /*0x63e495*/
  *(_DWORD *)(a1 + 1812) = -1082130432; /*0x63e49c*/
  if ( v3 ) /*0x63e4a9*/
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 1256LL))(v3); /*0x63e4ae*/
    if ( (_BYTE)result ) /*0x63e4b6*/
    {
      cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 776)); /*0x63e4bf*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1264LL))(a1); /*0x63e4d0*/
    }
  }
  return result; /*0x63e4d7*/
}

// [28/30] Address: 0x63e4e0
// Method: ParticleGameObject::updateSyncedAnimation
void __fastcall ParticleGameObject_updateSyncedAnimation(__int64 a1, float a2)
{
  float *v2; // rdi
  float v4; // xmm0_4
  double v5; // xmm0_8
  float v6; // xmm6_4
  double v7; // xmm0_8
  float v8; // xmm0_4
  float v9; // xmm8_4

  v2 = *(float **)(a1 + 776); /*0x63e4ea*/
  if ( v2 ) /*0x63e501*/
  {
    if ( *(_BYTE *)(a1 + 1433) ) /*0x63e507*/
    {
      if ( *(_BYTE *)(a1 + 1441) ) /*0x63e510*/
      {
        cocos2d::CCParticleSystem::resetSystem(*(cocos2d::CCParticleSystem **)(a1 + 776)); /*0x63e520*/
        *(_BYTE *)(a1 + 1441) = 0; /*0x63e526*/
      }
    }
    else
    {
      v4 = *(float *)(a1 + 1812); /*0x63e53e*/
      if ( v4 < 0.0 ) /*0x63e554*/
      {
        v5 = (*(double (__fastcall **)(float *))(*(_QWORD *)v2 + 976LL))(v2); /*0x63e56a*/
        v6 = *(float *)&v5; /*0x63e576*/
        v7 = (*(double (__fastcall **)(float *))(*(_QWORD *)v2 + 960LL))(v2); /*0x63e579*/
        v8 = (*(float (__fastcall **)(float *))(*(_QWORD *)v2 + 912LL))(v2) + (float)(*(float *)&v7 + v6); /*0x63e59d*/
        v2 = *(float **)(a1 + 776); /*0x63e5ab*/
        qword_906088 = 214013 * qword_906088 + 2531011; /*0x63e5b8*/
        v9 = fmaxf( /*0x63e5fa*/
               0.0,
               (float)((float)((float)((float)((float)(((unsigned __int64)qword_906088 >> 16) & 0x7FFF) / 32767.0)
                                     + (float)((float)(((unsigned __int64)qword_906088 >> 16) & 0x7FFF) / 32767.0))
                             - 1.0)
                     * v2[137])
             + v2[136]);
        if ( *(_BYTE *)(a1 + 1816) ) /*0x63e5c8*/
        {
          *(_BYTE *)(a1 + 1816) = 0; /*0x63e611*/
          v4 = v9 + a2; /*0x63e618*/
        }
        else
        {
          v4 = (float)(v8 + a2) + v9; /*0x63e606*/
        }
        *(float *)(a1 + 1812) = v4; /*0x63e61d*/
      }
      if ( a2 > v4 ) /*0x63e62f*/
      {
        cocos2d::CCParticleSystem::resetSystem((cocos2d::CCParticleSystem *)v2); /*0x63e634*/
        *(_DWORD *)(a1 + 1812) = -1082130432; /*0x63e63a*/
      }
    }
  }
}

// [29/30] Address: 0x63e660
// Method: ParticleGameObject::updateAnimateOnTrigger
void __fastcall ParticleGameObject_updateAnimateOnTrigger(__int64 a1)
{
  cocos2d::CCParticleSystem *v2; // rcx

  if ( *(_BYTE *)(a1 + 1402) && *(_BYTE *)(a1 + 1433) ) /*0x63e672*/
  {
    *(_BYTE *)(a1 + 1441) = 0; /*0x63e67d*/
    *(_QWORD *)(a1 + 1376) = 0; /*0x63e684*/
    *(_QWORD *)(a1 + 1368) = 0; /*0x63e68d*/
    *(_BYTE *)(a1 + 774) = 1; /*0x63e694*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 320) + 40LL))(a1 + 320, 0); /*0x63e6a5*/
    v2 = *(cocos2d::CCParticleSystem **)(a1 + 776); /*0x63e6a8*/
    if ( v2 ) /*0x63e6b2*/
    {
      cocos2d::CCParticleSystem::resetSystem(v2); /*0x63e6b4*/
      cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 776)); /*0x63e6c6*/
    }
  }
}

// [30/30] Address: 0x63e6e0
// Method: ParticleGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall ParticleGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v11 = a2; /*0x63e710*/
  fmt::BasicWriter<char>::BasicWriter<char>(v14); /*0x63e71d*/
  SaveString = EnhancedGameObject_getSaveString(a1, v13, a3); /*0x63e72f*/
  v11 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v12, SaveString); /*0x63e746*/
  fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e755*/
  sub_3C310(v13); /*0x63e761*/
  *(_QWORD *)&v11 = &unk_709CE8; /*0x63e76d*/
  *((_QWORD *)&v11 + 1) = 0; /*0x63e772*/
  fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e781*/
  fmt::BasicWriter<char>::operator<<(v14, 145); /*0x63e791*/
  *(_QWORD *)&v11 = &unk_709CE8; /*0x63e797*/
  *((_QWORD *)&v11 + 1) = 0; /*0x63e79c*/
  fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e7ab*/
  v7 = (_QWORD *)(a1 + 1464); /*0x63e7b1*/
  if ( *(_QWORD *)(a1 + 1488) > 0xFu ) /*0x63e7bd*/
    v7 = (_QWORD *)*v7; /*0x63e7bf*/
  v11 = (unsigned __int64)v7; /*0x63e7c2*/
  fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e7d6*/
  if ( *(_BYTE *)(a1 + 817) ) /*0x63e7dc*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x63e7e5*/
    *((_QWORD *)&v11 + 1) = 0; /*0x63e7ea*/
    fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e7f9*/
    fmt::BasicWriter<char>::operator<<(v14, 146); /*0x63e809*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x63e80f*/
    *((_QWORD *)&v11 + 1) = 0; /*0x63e814*/
    fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e823*/
    fmt::BasicWriter<char>::operator<<(v14, *(unsigned __int8 *)(a1 + 817)); /*0x63e835*/
  }
  if ( *(_BYTE *)(a1 + 1800) ) /*0x63e83b*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x63e844*/
    *((_QWORD *)&v11 + 1) = 0; /*0x63e849*/
    fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e858*/
    fmt::BasicWriter<char>::operator<<(v14, 147); /*0x63e868*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x63e86e*/
    *((_QWORD *)&v11 + 1) = 0; /*0x63e873*/
    fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e882*/
    fmt::BasicWriter<char>::operator<<(v14, *(unsigned __int8 *)(a1 + 1800)); /*0x63e894*/
  }
  if ( *(_BYTE *)(a1 + 1808) ) /*0x63e89a*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x63e8a3*/
    *((_QWORD *)&v11 + 1) = 0; /*0x63e8a8*/
    fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e8b7*/
    fmt::BasicWriter<char>::operator<<(v14, 211); /*0x63e8c7*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x63e8cd*/
    *((_QWORD *)&v11 + 1) = 0; /*0x63e8d2*/
    fmt::BasicWriter<char>::operator<<(v14, &v11); /*0x63e8e1*/
    fmt::BasicWriter<char>::operator<<(v14, *(unsigned __int8 *)(a1 + 1808)); /*0x63e8f3*/
  }
  v8 = fmt::BasicWriter<char>::c_str(v14); /*0x63e8fe*/
  *(_OWORD *)a2 = 0; /*0x63e907*/
  *(_QWORD *)(a2 + 16) = 0; /*0x63e90a*/
  *(_QWORD *)(a2 + 24) = 0; /*0x63e90e*/
  v9 = -1; /*0x63e912*/
  do /*0x63e923*/
    ++v9; /*0x63e920*/
  while ( *(_BYTE *)(v8 + v9) ); /*0x63e923*/
  sub_3C230(a2); /*0x63e930*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v14); /*0x63e93b*/
  return a2; /*0x63e944*/
}
