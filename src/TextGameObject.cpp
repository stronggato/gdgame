#include <Geode/binding/TextGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x285140
// Method: TextGameObject::getTextKerning
__int64 __fastcall TextGameObject_getTextKerning(__int64 a1)
{
  return *(unsigned int *)(a1 + 1392); /*0x285146*/
}

// [2/6] Address: 0x2851a0
// Method: TextGameObject::~TextGameObject
// Hidden C++ exception states: #wind=1
void __fastcall TextGameObject__dtor_TextGameObject(cocos2d::CCSprite *a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  cocos2d::CCObject *v10; // rcx

  *(_QWORD *)a1 = &GameObject::`vftable'; /*0x2851b0*/
  *((_QWORD *)a1 + 40) = &GameObject::`vftable'; /*0x2851ba*/
  *((_QWORD *)a1 + 43) = &GameObject::`vftable'; /*0x2851c8*/
  v2 = (cocos2d::CCObject *)*((_QWORD *)a1 + 94); /*0x2851cf*/
  if ( v2 ) /*0x2851d9*/
    cocos2d::CCObject::release(v2); /*0x2851db*/
  v3 = (cocos2d::CCObject *)*((_QWORD *)a1 + 112); /*0x2851e1*/
  if ( v3 ) /*0x2851eb*/
    cocos2d::CCObject::release(v3); /*0x2851ed*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)a1 + 92); /*0x2851f3*/
  if ( v4 ) /*0x2851fd*/
    cocos2d::CCObject::release(v4); /*0x2851ff*/
  v5 = (void *)*((_QWORD *)a1 + 138); /*0x285205*/
  if ( v5 ) /*0x28520f*/
    j_j_free(v5); /*0x285216*/
  v6 = (void *)*((_QWORD *)a1 + 139); /*0x28521b*/
  if ( v6 ) /*0x285225*/
    j_j_free(v6); /*0x28522c*/
  v7 = (void *)*((_QWORD *)a1 + 146); /*0x285231*/
  if ( v7 ) /*0x28523b*/
    j_j_free(v7); /*0x28523d*/
  v8 = (void *)*((_QWORD *)a1 + 148); /*0x285242*/
  if ( v8 ) /*0x28524c*/
    j_j_free(v8); /*0x28524e*/
  v9 = (void *)*((_QWORD *)a1 + 150); /*0x285253*/
  if ( v9 ) /*0x28525d*/
    j_j_free(v9); /*0x28525f*/
  sub_3C310((char *)a1 + 784); /*0x28526b*/
  *(_QWORD *)a1 = &CCSpritePlus::`vftable'; /*0x285278*/
  *((_QWORD *)a1 + 40) = &CCSpritePlus::`vftable'; /*0x285282*/
  *((_QWORD *)a1 + 43) = &CCSpritePlus::`vftable'; /*0x285290*/
  v10 = (cocos2d::CCObject *)*((_QWORD *)a1 + 75); /*0x285297*/
  if ( v10 ) /*0x2852a1*/
    cocos2d::CCObject::release(v10); /*0x2852a3*/
  cocos2d::CCSprite::~CCSprite(a1); /*0x2852ac*/
}

// [3/6] Address: 0x2a0dd0
// Method: TextGameObject::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TextGameObject_create(struct cocos2d::CCTexture2D *a1)
{
  _QWORD *v2; // rdi

  v2 = operator new(0x578u); /*0x2a0de7*/
  GameObject_GameObject((__int64)v2); /*0x2a0df2*/
  *v2 = &TextGameObject::`vftable'; /*0x2a0dfe*/
  v2[40] = &TextGameObject::`vftable'; /*0x2a0e08*/
  v2[43] = &TextGameObject::`vftable'; /*0x2a0e16*/
  *((_OWORD *)v2 + 85) = 0; /*0x2a0e20*/
  v2[172] = 0; /*0x2a0e27*/
  v2[173] = 15; /*0x2a0e32*/
  *((_BYTE *)v2 + 1360) = 0; /*0x2a0e3d*/
  *((_DWORD *)v2 + 348) = 0; /*0x2a0e44*/
  *((_DWORD *)v2 + 7) = 13; /*0x2a0e4e*/
  if ( cocos2d::CCSprite::initWithTexture((cocos2d::CCSprite *)v2, a1, (const struct cocos2d::CCRect *)&unk_903B08) ) /*0x2a0e62*/
  {
    sub_287800(v2); /*0x2a0e6f*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x2a0e77*/
    return v2; /*0x2a0e7d*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x2a0e9a*/
    return 0; /*0x2a0e9d*/
  }
}

// [4/6] Address: 0x2a0eb0
// Method: TextGameObject::updateTextKerning
void __fastcall TextGameObject_updateTextKerning(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 1392) = a2; /*0x2a0eb0*/
}

// [5/6] Address: 0x2a1650
// Method: TextGameObject::customObjectSetup
// Hidden C++ exception states: #wind=2
void __fastcall TextGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  const char *v7; // rcx
  void **v8; // rax
  char v9; // bl
  __int64 v10; // rax
  void *v11; // rcx
  __int128 v12; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+50h] [rbp-98h]
  void *Block[2]; // [rsp+60h] [rbp-88h] BYREF
  __m128i si128; // [rsp+70h] [rbp-78h]
  _BYTE v16[32]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+A0h] [rbp-48h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)a3 + 3904LL) ) /*0x2a1683*/
  {
    v7 = (const char *)(*(_QWORD *)a2 + 15616LL); /*0x2a1693*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 15640LL) > 0xFu ) /*0x2a169f*/
      v7 = *(const char **)v7; /*0x2a16a1*/
    v6 = atoi(v7); /*0x2a16a4*/
  }
  else
  {
    v6 = 0; /*0x2a168c*/
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1600LL))(a1, v6); /*0x2a16b9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 248LL) ) /*0x2a16bf*/
  {
    v8 = (void **)sub_3E4F0(v17, *(_QWORD *)a2 + 992LL); /*0x2a1701*/
    v9 = 2; /*0x2a1707*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x2a16cb*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x2a16d8*/
    LOBYTE(Block[0]) = 0; /*0x2a16de*/
    v8 = Block; /*0x2a16e3*/
    v9 = 1; /*0x2a16e8*/
  }
  v12 = 0; /*0x2a1713*/
  v13 = 0u; /*0x2a1718*/
  v12 = *(_OWORD *)v8; /*0x2a1725*/
  v13 = *((_OWORD *)v8 + 1); /*0x2a172e*/
  v8[2] = 0; /*0x2a1733*/
  v8[3] = &loc_D + 2; /*0x2a1737*/
  *(_BYTE *)v8 = 0; /*0x2a173f*/
  v10 = sub_463F60(v16, &v12); /*0x2a174f*/
  sub_2A11F0(a1, v10, 0); /*0x2a175d*/
  if ( (v9 & 2) != 0 ) /*0x2a1766*/
  {
    v9 &= ~2u; /*0x2a1768*/
    sub_3C310(v17); /*0x2a1773*/
  }
  if ( (v9 & 1) != 0 && si128.m128i_i64[1] > 0xFuLL ) /*0x2a1787*/
  {
    v11 = Block[0]; /*0x2a178c*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x2a179b*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x2a17a1*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x2a17b0*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2a17c1*/
    }
    j_j_free(v11); /*0x2a17c8*/
  }
}

// [6/6] Address: 0x2a17f0
// Method: TextGameObject::getSaveString
// Hidden C++ exception states: #wind=4
__int64 __fastcall TextGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 updated; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  void **v9; // rax
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int128 v14; // [rsp+30h] [rbp-D0h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[40]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[528]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&v14 = a2; /*0x2a1825*/
  fmt::BasicWriter<char>::BasicWriter<char>(v18); /*0x2a1831*/
  updated = UpdateAccountSettingsPopup_init(a1, v17, a3); /*0x2a1843*/
  v14 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(Block, updated); /*0x2a185a*/
  fmt::BasicWriter<char>::operator<<(v18, &v14); /*0x2a1868*/
  sub_3C310(v17); /*0x2a1874*/
  *(_QWORD *)&v14 = &unk_709CE8; /*0x2a1880*/
  *((_QWORD *)&v14 + 1) = 0; /*0x2a1885*/
  fmt::BasicWriter<char>::operator<<(v18, &v14); /*0x2a1893*/
  fmt::BasicWriter<char>::operator<<(v18, 31); /*0x2a18a2*/
  *(_QWORD *)&v14 = &unk_709CE8; /*0x2a18a8*/
  *((_QWORD *)&v14 + 1) = 0; /*0x2a18ad*/
  fmt::BasicWriter<char>::operator<<(v18, &v14); /*0x2a18bb*/
  v7 = sub_3E4F0(v17, a1 + 1360); /*0x2a18cd*/
  v8 = v7; /*0x2a18d2*/
  *(_QWORD *)&v14 = v7; /*0x2a18d5*/
  if ( *(_QWORD *)(v7 + 16) ) /*0x2a18da*/
  {
    cocos2d::ZipUtils::base64URLEncode(Block, v7); /*0x2a191b*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x2a18e3*/
    v16 = 0; /*0x2a18eb*/
    *(_OWORD *)Block = *(_OWORD *)v7; /*0x2a18f4*/
    v16 = *(_OWORD *)(v7 + 16); /*0x2a18fd*/
    *(_QWORD *)(v7 + 16) = 0; /*0x2a1902*/
    *(_QWORD *)(v7 + 24) = 15; /*0x2a1906*/
    *(_BYTE *)v7 = 0; /*0x2a190e*/
  }
  sub_3C310(v8); /*0x2a1925*/
  v9 = Block; /*0x2a192b*/
  if ( *((_QWORD *)&v16 + 1) > 0xFu ) /*0x2a1936*/
    v9 = (void **)Block[0]; /*0x2a1936*/
  v14 = (unsigned __int64)v9; /*0x2a193c*/
  fmt::BasicWriter<char>::operator<<(v18, &v14); /*0x2a194f*/
  if ( *((_QWORD *)&v16 + 1) > 0xFu ) /*0x2a195f*/
  {
    v10 = Block[0]; /*0x2a1964*/
    if ( (unsigned __int64)(*((_QWORD *)&v16 + 1) + 1LL) >= 0x1000 ) /*0x2a1973*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x2a1979*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x2a1988*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2a1999*/
    }
    j_j_free(v10); /*0x2a19a0*/
  }
  if ( *(_DWORD *)(a1 + 1392) ) /*0x2a19a5*/
  {
    *(_QWORD *)&v14 = &unk_709CE8; /*0x2a19ae*/
    *((_QWORD *)&v14 + 1) = 0; /*0x2a19b3*/
    fmt::BasicWriter<char>::operator<<(v18, &v14); /*0x2a19c1*/
    fmt::BasicWriter<char>::operator<<(v18, 488); /*0x2a19d0*/
    *(_QWORD *)&v14 = &unk_709CE8; /*0x2a19d6*/
    *((_QWORD *)&v14 + 1) = 0; /*0x2a19db*/
    fmt::BasicWriter<char>::operator<<(v18, &v14); /*0x2a19e9*/
    fmt::BasicWriter<char>::operator<<(v18, *(unsigned int *)(a1 + 1392)); /*0x2a19f9*/
  }
  v11 = fmt::BasicWriter<char>::c_str(v18); /*0x2a1a03*/
  *(_OWORD *)a2 = 0; /*0x2a1a0c*/
  *(_QWORD *)(a2 + 16) = 0; /*0x2a1a0f*/
  *(_QWORD *)(a2 + 24) = 0; /*0x2a1a13*/
  v12 = -1; /*0x2a1a17*/
  do /*0x2a1a23*/
    ++v12; /*0x2a1a20*/
  while ( *(_BYTE *)(v11 + v12) ); /*0x2a1a23*/
  sub_3C230(a2); /*0x2a1a30*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v18); /*0x2a1a3a*/
  return a2; /*0x2a1a43*/
}
