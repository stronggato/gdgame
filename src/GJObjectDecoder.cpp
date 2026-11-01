#include <Geode/binding/GJObjectDecoder.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x38e1c0
// Method: GJObjectDecoder::sharedDecoder
// Hidden C++ exception states: #wind=1
__int64 GJObjectDecoder_sharedDecoder()
{
  __int64 result; // rax
  _QWORD *v1; // [rsp+30h] [rbp+8h]

  result = qword_906050; /*0x38e1c6*/
  if ( !qword_906050 ) /*0x38e1d0*/
  {
    v1 = operator new(0x148u); /*0x38e1df*/
    memset(v1, 0, 0x148u); /*0x38e1ef*/
    cocos2d::CCNode::CCNode((cocos2d::CCNode *)v1); /*0x38e1f7*/
    *v1 = &GJObjectDecoder::`vftable'; /*0x38e204*/
    v1[40] = &GJObjectDecoder::`vftable'; /*0x38e20e*/
    qword_906050 = (__int64)v1; /*0x38e215*/
    cocos2d::CCNode::init((cocos2d::CCNode *)v1); /*0x38e232*/
    return qword_906050; /*0x38e238*/
  }
  return result; /*0x38e23f*/
}

// [2/2] Address: 0x38e260
// Method: GJObjectDecoder::getDecodedObject
// Hidden C++ exception states: #wind=3
struct cocos2d::CCObject *__fastcall GJObjectDecoder_getDecodedObject(__int64 a1, int a2, struct DS_Dictionary *a3)
{
  __int64 v4; // rax
  cocos2d::CCObject *v5; // rsi
  struct cocos2d::CCObject *result; // rax
  char *v7; // rdi
  __int64 StringForKey; // rax
  int IntegerForKey; // ebx
  float v10; // xmm0_4
  int v11; // ebx
  float v12; // xmm0_4
  int v13; // ebx
  float v14; // xmm0_4
  cocos2d::CCObject *v15; // rbx
  cocos2d::CCObject *ArrayForKey; // rax
  cocos2d::CCObject *v17; // rdi
  cocos2d::CCObject *v18; // rcx
  char *v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  char *v22; // rbx
  void *v23; // [rsp+30h] [rbp-58h]
  cocos2d::CCObject *v24; // [rsp+30h] [rbp-58h]
  char *v25; // [rsp+30h] [rbp-58h]
  __int128 v26; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+50h] [rbp-38h]
  _BYTE v29[32]; // [rsp+58h] [rbp-30h] BYREF

  switch ( a2 ) /*0x38e2a9*/
  {
    case 4: /*0x38e2a9*/
      v23 = operator new(0x840u); /*0x38e2b5*/
      v4 = GJGameLevel_GJGameLevel((__int64)v23); /*0x38e2bd*/
      v5 = (cocos2d::CCObject *)v4; /*0x38e2c2*/
      if ( v4 ) /*0x38e2c8*/
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4) ) /*0x38e2d0*/
        {
          cocos2d::CCObject::autorelease(v5); /*0x38e2da*/
          sub_2643E0(v5, a3); /*0x38e2e6*/
          return v5; /*0x38e2ee*/
        }
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x38e2fb*/
        v5 = 0; /*0x38e2fe*/
      }
      sub_2643E0(v5, a3); /*0x38e306*/
      result = v5; /*0x38e30b*/
      break; /*0x38e30e*/
    case 5: /*0x38e2a9*/
      result = cocos2d::CCObject::createWithCoder(a3); /*0x38e316*/
      break; /*0x38e31c*/
    case 6: /*0x38e2a9*/
      result = (struct cocos2d::CCObject *)sub_491560(a3); /*0x38e324*/
      break; /*0x38e329*/
    case 7: /*0x38e2a9*/
      v26 = 0; /*0x38e331*/
      v27 = 0; /*0x38e338*/
      v28 = 15; /*0x38e33d*/
      LOBYTE(v26) = 0; /*0x38e346*/
      v7 = GJChallengeItem_create(0, 0, 0, 0, (__int64)&v26); /*0x38e364*/
      *((_DWORD *)v7 + 14) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708050); /*0x38e377*/
      *((_DWORD *)v7 + 24) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708038); /*0x38e38a*/
      v7[100] = DS_Dictionary::getBoolForKey(a3, "6"); /*0x38e39d*/
      StringForKey = DS_Dictionary::getStringForKey(a3, v29, &word_708030); /*0x38e3af*/
      sub_58AD0(v7 + 112, StringForKey); /*0x38e3bc*/
      sub_3C310(v29); /*0x38e3c6*/
      IntegerForKey = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708048); /*0x38e3db*/
      *((_DWORD *)v7 + 17) = IntegerForKey; /*0x38e3dd*/
      v10 = (float)((float)rand() / 32767.0) * 1000.0; /*0x38e3f5*/
      *((_DWORD *)v7 + 16) = (int)v10; /*0x38e401*/
      *((_DWORD *)v7 + 15) = (int)v10 + IntegerForKey; /*0x38e407*/
      v11 = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708044); /*0x38e41a*/
      *((_DWORD *)v7 + 23) = v11; /*0x38e41c*/
      v12 = (float)((float)rand() / 32767.0) * 1000.0; /*0x38e434*/
      *((_DWORD *)v7 + 22) = (int)v12; /*0x38e440*/
      *((_DWORD *)v7 + 21) = (int)v12 + v11; /*0x38e446*/
      v13 = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_70803C); /*0x38e459*/
      *((_DWORD *)v7 + 20) = v13; /*0x38e45b*/
      v14 = (float)((float)rand() / 32767.0) * 1000.0; /*0x38e473*/
      *((_DWORD *)v7 + 19) = (int)v14; /*0x38e47f*/
      *((_DWORD *)v7 + 18) = v13 + (int)v14; /*0x38e485*/
      *((_DWORD *)v7 + 26) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708028); /*0x38e498*/
      result = (struct cocos2d::CCObject *)v7; /*0x38e49b*/
      break; /*0x38e49e*/
    case 8: /*0x38e2a9*/
      v26 = 0; /*0x38e4a6*/
      v27 = 0; /*0x38e4ad*/
      v28 = 15; /*0x38e4b2*/
      LOBYTE(v26) = 0; /*0x38e4bb*/
      v15 = GJRewardItem_create_0(0, 0, (__int64)&v26); /*0x38e4ce*/
      *((_DWORD *)v15 + 14) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708050); /*0x38e4e1*/
      *((_DWORD *)v15 + 16) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708048); /*0x38e4f4*/
      ArrayForKey = DS_Dictionary::getArrayForKey(a3, (const char *)&word_708044, 0); /*0x38e504*/
      v17 = ArrayForKey; /*0x38e50a*/
      if ( *((cocos2d::CCObject **)v15 + 9) != ArrayForKey ) /*0x38e511*/
      {
        if ( ArrayForKey ) /*0x38e516*/
          cocos2d::CCObject::retain(ArrayForKey); /*0x38e51b*/
        v18 = (cocos2d::CCObject *)*((_QWORD *)v15 + 9); /*0x38e521*/
        if ( v18 ) /*0x38e528*/
          cocos2d::CCObject::release(v18); /*0x38e52a*/
        *((_QWORD *)v15 + 9) = v17; /*0x38e530*/
      }
      result = v15; /*0x38e534*/
      break; /*0x38e537*/
    case 9: /*0x38e2a9*/
      v24 = (cocos2d::CCObject *)operator new(0x48u); /*0x38e549*/
      cocos2d::CCObject::CCObject(v24); /*0x38e551*/
      *(_QWORD *)v24 = &GJRewardObject::`vftable'; /*0x38e55e*/
      *((_DWORD *)v24 + 14) = 0; /*0x38e563*/
      *((_QWORD *)v24 + 8) = 0; /*0x38e566*/
      cocos2d::CCObject::autorelease(v24); /*0x38e56d*/
      *((_DWORD *)v24 + 14) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708050); /*0x38e583*/
      *((_DWORD *)v24 + 16) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708048); /*0x38e596*/
      *((_DWORD *)v24 + 17) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708044); /*0x38e5a9*/
      *((_DWORD *)v24 + 15) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_70803C); /*0x38e5bc*/
      result = v24; /*0x38e5bf*/
      break; /*0x38e5c2*/
    case 10: /*0x38e2a9*/
      v19 = GJSmartTemplate_create(); /*0x38e5cc*/
      GJSmartTemplate_dataLoaded((__int64)v19, a3); /*0x38e5d5*/
      result = (struct cocos2d::CCObject *)v19; /*0x38e5da*/
      break; /*0x38e5dd*/
    case 11: /*0x38e2a9*/
      v25 = (char *)operator new(0x80u); /*0x38e5ef*/
      cocos2d::CCObject::CCObject((cocos2d::CCObject *)v25); /*0x38e5f7*/
      *(_QWORD *)v25 = &GJSmartPrefab::`vftable'; /*0x38e604*/
      *(_OWORD *)(v25 + 56) = 0; /*0x38e60a*/
      *((_QWORD *)v25 + 9) = 0; /*0x38e610*/
      *((_QWORD *)v25 + 10) = 15; /*0x38e614*/
      v25[56] = 0; /*0x38e61c*/
      *(_OWORD *)(v25 + 88) = 0; /*0x38e620*/
      *((_QWORD *)v25 + 13) = 0; /*0x38e624*/
      *((_QWORD *)v25 + 14) = 15; /*0x38e628*/
      v25[88] = 0; /*0x38e630*/
      *((_DWORD *)v25 + 31) = 0; /*0x38e634*/
      v20 = dword_8F84A0; /*0x38e637*/
      *((_DWORD *)v25 + 30) = dword_8F84A0; /*0x38e63d*/
      dword_8F84A0 = v20 + 1; /*0x38e642*/
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v25); /*0x38e64b*/
      v21 = DS_Dictionary::getStringForKey(a3, v29, &word_708050); /*0x38e660*/
      sub_58AD0(v25 + 88, v21); /*0x38e66d*/
      sub_3C310(v29); /*0x38e677*/
      *((_DWORD *)v25 + 31) = DS_Dictionary::getIntegerForKey(a3, (const char *)&word_708048); /*0x38e68c*/
      result = (struct cocos2d::CCObject *)v25; /*0x38e68f*/
      break; /*0x38e692*/
    case 12: /*0x38e2a9*/
      v22 = GJLevelList_create(); /*0x38e699*/
      GJLevelList_dataLoaded((__int64)v22, a3); /*0x38e6a2*/
      result = (struct cocos2d::CCObject *)v22; /*0x38e6a7*/
      break; /*0x38e6aa*/
    default:
      result = 0; /*0x38e6ac*/
      break; /*0x38e6ac*/
  }
  return result; /*0x38e6ae*/
}
