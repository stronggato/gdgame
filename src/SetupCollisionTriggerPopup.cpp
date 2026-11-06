#include <Geode/binding/SetupCollisionTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0x5aa9e0
// Method: SetupCollisionTriggerPopup::~SetupCollisionTriggerPopup
cocos2d::CCNode *__fastcall SetupCollisionTriggerPopup__dtor_SetupCollisionTriggerPopup(
        cocos2d::CCNode *Block,
        char a2)
{
  *(_QWORD *)Block = &SetupCollisionTriggerPopup::`vftable'; /*0x5aa9f3*/
  *((_QWORD *)Block + 40) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa00*/
  *((_QWORD *)Block + 41) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa0e*/
  *((_QWORD *)Block + 42) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa1c*/
  *((_QWORD *)Block + 43) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa2a*/
  *((_QWORD *)Block + 44) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa38*/
  *((_QWORD *)Block + 51) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa46*/
  *((_QWORD *)Block + 54) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa54*/
  *((_QWORD *)Block + 68) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa62*/
  *((_QWORD *)Block + 83) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa70*/
  *((_QWORD *)Block + 84) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa7e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5aaa85*/
  if ( (a2 & 1) != 0 ) /*0x5aaa8d*/
    j_j_free(Block); /*0x5aaa97*/
  return Block; /*0x5aaa9c*/
}

// [3/4] Address: 0x5ab4b0
// Method: SetupCollisionTriggerPopup::valueDidChange
void __fastcall SetupCollisionTriggerPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2)
{
  int v2; // edx
  int v3; // edx

  v2 = a2 - 51; /*0x5ab4b0*/
  if ( v2 ) /*0x5ab4b3*/
  {
    v3 = v2 - 87; /*0x5ab4b5*/
    if ( !v3 || (unsigned int)(v3 - 62) <= 1 ) /*0x5ab4bd*/
      SetupInstantCollisionTriggerPopup_updateSpecialNodes(a1); /*0x5ab4c4*/
  }
  else
  {
    sub_607BB0(a1); /*0x5ab4c9*/
  }
}

// [4/4] Address: 0x5ab720
// Method: SetupCollisionTriggerPopup::updateDefaultTriggerValues
void __fastcall SetupCollisionTriggerPopup_updateDefaultTriggerValues(struct cocos2d::CCObject **a1)
{
  SetupTriggerPopup_updateDefaultTriggerValues(a1); /*0x5ab729*/
  SetupInstantCollisionTriggerPopup_updateSpecialNodes(a1); /*0x5ab736*/
}

// Address: 0x84270
// Method: SetupCollisionTriggerPopup::init
// Hidden C++ exception states: #wind=10
double __fastcall SetupCollisionTriggerPopup_init(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  int v3; // r12d
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i si128; // xmm8
  cocos2d::CCDictionary *v8; // rsi
  void *v9; // r8
  __m128i v10; // xmm7
  cocos2d::CCArray *v11; // rdi
  unsigned int v12; // ebx
  __m128i v13; // xmm14
  __m128i v14; // xmm11
  __m128i v15; // xmm13
  __m128i v16; // xmm12
  __m128i v17; // xmm10
  __m128i v18; // xmm9
  const char *CString; // rax
  __int64 v20; // r8
  __int64 v21; // r13
  void *v22; // rcx
  cocos2d::CCString *v23; // rax
  void *v24; // rcx
  cocos2d::CCString *v25; // rax
  void *v26; // rcx
  cocos2d::CCString *v27; // rax
  void *v28; // rcx
  cocos2d::CCString *v29; // rax
  void *v30; // rcx
  cocos2d::CCString *v31; // r15
  void *v32; // rcx
  unsigned __int64 v33; // r14
  int v34; // r12d
  const char *v35; // rax
  __int64 v36; // r8
  void **v37; // rcx
  char *v38; // rbx
  unsigned __int64 v39; // rdi
  __int64 v40; // rsi
  size_t v41; // r8
  char v42; // si
  char *v43; // rax
  void *v44; // rcx
  cocos2d::CCString *v45; // rax
  float v46; // xmm6_4
  void *v47; // rcx
  cocos2d::CCString *v48; // rdi
  const char *v49; // rax
  __int64 v50; // r8
  __int64 v51; // rbx
  struct cocos2d::CCString *v52; // rax
  _QWORD *v53; // rax
  const char *v54; // rax
  struct cocos2d::CCAnimation *v55; // rbx
  __int64 v56; // rdi
  void *v57; // rcx
  struct cocos2d::CCFiniteTimeAction *v58; // rdi
  __int64 v59; // rsi
  struct cocos2d::CCObject *v60; // rax
  struct cocos2d::CCAnimate *v61; // rax
  struct cocos2d::CCRepeatForever *v62; // rax
  __int64 v63; // rax
  const char *v64; // rax
  __int64 v65; // r8
  bool v67; // [rsp+40h] [rbp-C0h]
  bool v68; // [rsp+41h] [rbp-BFh]
  bool v69; // [rsp+42h] [rbp-BEh]
  unsigned int v70; // [rsp+44h] [rbp-BCh]
  int v71; // [rsp+50h] [rbp-B0h]
  cocos2d::CCString *v72; // [rsp+58h] [rbp-A8h]
  cocos2d::CCAnimationCache *v75; // [rsp+70h] [rbp-90h]
  cocos2d::CCArray *v76; // [rsp+78h] [rbp-88h]
  cocos2d::CCDictionary *v77; // [rsp+80h] [rbp-80h]
  _QWORD v78[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v79[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v80[3]; // [rsp+B0h] [rbp-50h] BYREF
  void *Buf1[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v82; // [rsp+D8h] [rbp-28h]
  __int128 Buf2; // [rsp+E8h] [rbp-18h] BYREF
  __m128i v84; // [rsp+F8h] [rbp-8h]
  void *Block[2]; // [rsp+108h] [rbp+8h] BYREF
  __m128i v86; // [rsp+118h] [rbp+18h]
  __int128 v87; // [rsp+128h] [rbp+28h] BYREF
  __m128i v88; // [rsp+138h] [rbp+38h]
  __int128 v89; // [rsp+148h] [rbp+48h] BYREF
  __m128i v90; // [rsp+158h] [rbp+58h]
  _BYTE v91[528]; // [rsp+170h] [rbp+70h] BYREF

  v2 = a2;
  v80[2] = a2;
  v3 = 0;
  v75 = (cocos2d::CCAnimationCache *)cocos2d::CCAnimationCache::sharedAnimationCache();
  v4 = v2;
  if ( v2[3] > 0xFu )
    v4 = (_QWORD *)*v2;
  v5 = ObjectManager_instance();
  v6 = sub_7C320(v5, v4);
  Block[1] = algn_7364 + 10;
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F70);
  v86 = si128;
  Block[0] = (void *)0x6F6974616D696E61LL;
  v8 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::objectForKey(v6, Block);
  v77 = v8;
  if ( v86.m128i_i64[1] > 0xFuLL )
  {
    v9 = Block[0];
    if ( (unsigned __int64)(v86.m128i_i64[1] + 1) >= 0x1000 )
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v9);
  }
  v10 = _mm_load_si128((const __m128i *)&Size);
  v86 = v10;
  LOBYTE(Block[0]) = 0;
  v11 = cocos2d::CCDictionary::allKeys(v8);
  v76 = v11;
  v12 = 0;
  v70 = 0;
  if ( cocos2d::CCArray::count(v11) )
  {
    v13 = _mm_load_si128((const __m128i *)&xmmword_830F80);
    v14 = _mm_load_si128((const __m128i *)&xmmword_830F20);
    v15 = _mm_load_si128((const __m128i *)&xmmword_830F90);
    v16 = _mm_load_si128((const __m128i *)&xmmword_830F60);
    v17 = _mm_load_si128((const __m128i *)&xmmword_830F30);
    v18 = _mm_load_si128((const __m128i *)&xmmword_830F10);
    while ( 1 )
    {
      v72 = cocos2d::CCArray::objectAtIndex(v11, v12);
      CString = cocos2d::CCString::getCString(v72);
      v89 = 0;
      v90 = 0;
      v20 = -1;
      do
        ++v20;
      while ( CString[v20] );
      sub_3C230(&v89);
      v21 = cocos2d::CCDictionary::objectForKey(v8, &v89);
      if ( v90.m128i_i64[1] > 0xFuLL )
      {
        v22 = (void *)v89;
        if ( (unsigned __int64)(v90.m128i_i64[1] + 1) >= 0x1000 )
        {
          v22 = *(void **)(v89 - 8);
          if ( (unsigned __int64)(v89 - (_QWORD)v22 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v22);
      }
      v90 = v10;
      LOBYTE(v89) = 0;
      Buf2 = 0;
      v84 = v18;
      strcpy((char *)&Buf2, "prio");
      v23 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v21, &Buf2);
      v71 = cocos2d::CCString::intValue(v23);
      if ( v84.m128i_i64[1] > 0xFuLL )
      {
        v24 = (void *)Buf2;
        if ( (unsigned __int64)(v84.m128i_i64[1] + 1) >= 0x1000 )
        {
          v24 = *(void **)(Buf2 - 8);
          if ( (unsigned __int64)(Buf2 - (_QWORD)v24 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v24);
      }
      *(_OWORD *)Buf1 = 0;
      v82 = v17;
      strcpy((char *)Buf1, "looped");
      v25 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v21, Buf1);
      v68 = cocos2d::CCString::boolValue(v25);
      if ( v82.m128i_i64[1] > 0xFuLL )
      {
        v26 = Buf1[0];
        if ( (unsigned __int64)(v82.m128i_i64[1] + 1) >= 0x1000 )
        {
          v26 = (void *)*((_QWORD *)Buf1[0] - 1);
          if ( (unsigned __int64)((char *)Buf1[0] - (char *)v26 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v26);
      }
      Buf1[1] = &loc_73;
      v82 = v16;
      Buf1[0] = (void *)0x7472615073657375LL;
      v27 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v21, Buf1);
      v67 = cocos2d::CCString::boolValue(v27);
      if ( v82.m128i_i64[1] > 0xFuLL )
      {
        v28 = Buf1[0];
        if ( (unsigned __int64)(v82.m128i_i64[1] + 1) >= 0x1000 )
        {
          v28 = (void *)*((_QWORD *)Buf1[0] - 1);
          if ( (unsigned __int64)((char *)Buf1[0] - (char *)v28 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v28);
      }
      v82 = v15;
      strcpy((char *)Buf1, "dontPlayNext");
      BYTE5(Buf1[1]) = 0;
      HIWORD(Buf1[1]) = 0;
      v29 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v21, Buf1);
      v69 = cocos2d::CCString::boolValue(v29);
      if ( v82.m128i_i64[1] > 0xFuLL )
      {
        v30 = Buf1[0];
        if ( (unsigned __int64)(v82.m128i_i64[1] + 1) >= 0x1000 )
        {
          v30 = (void *)*((_QWORD *)Buf1[0] - 1);
          if ( (unsigned __int64)((char *)Buf1[0] - (char *)v30 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v30);
      }
      v87 = 0;
      v88 = v14;
      strcpy((char *)&v87, "sound");
      v31 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(v21, &v87);
      if ( v88.m128i_i64[1] > 0xFuLL )
      {
        v32 = (void *)v87;
        if ( (unsigned __int64)(v88.m128i_i64[1] + 1) >= 0x1000 )
        {
          v32 = *(void **)(v87 - 8);
          if ( (unsigned __int64)(v87 - (_QWORD)v32 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v32);
      }
      v88 = v10;
      LOBYTE(v87) = 0;
      if ( !v31 )
        break;
      Buf2 = 0;
      v84.m128i_i64[0] = 1;
      v33 = 15;
      v84.m128i_i64[1] = 15;
      LOWORD(Buf2) = 48;
      v34 = v3 | 1;
      v35 = cocos2d::CCString::getCString(v31);
      *(_OWORD *)Buf1 = 0;
      v82 = 0u;
      v36 = -1;
      do
        ++v36;
      while ( v35[v36] );
      sub_3C230(Buf1);
      v3 = v34 | 2;
      v37 = Buf1;
      v38 = (char *)Buf1[0];
      v39 = v82.m128i_u64[1];
      if ( v82.m128i_i64[1] > 0xFuLL )
        v37 = (void **)Buf1[0];
      v40 = v82.m128i_i64[0];
      v41 = v82.m128i_i64[0];
      if ( v82.m128i_i64[0] > 1uLL )
        v41 = 1;
      if ( !memcmp(v37, &Buf2, v41) && v40 == 1 )
        goto LABEL_47;
      v42 = 1;
LABEL_48:
      if ( (v3 & 2) != 0 )
      {
        v3 &= ~2u;
        if ( v39 > 0xF )
        {
          v43 = v38;
          if ( v39 + 1 >= 0x1000 )
          {
            v38 = (char *)*((_QWORD *)v38 - 1);
            if ( (unsigned __int64)(v43 - v38 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v38);
        }
      }
      if ( (v3 & 1) != 0 )
      {
        v3 &= ~1u;
        if ( v33 > 0xF )
        {
          v44 = (void *)Buf2;
          if ( v33 + 1 >= 0x1000 )
          {
            v44 = *(void **)(Buf2 - 8);
            if ( (unsigned __int64)(Buf2 - (_QWORD)v44 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v44);
        }
      }
      if ( v42 )
      {
        *((_QWORD *)&Buf2 + 1) = 31073;
        v84 = si128;
        *(_QWORD *)&Buf2 = 0x6C6544646E756F73LL;
        v45 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(v21, &Buf2);
        v46 = cocos2d::CCString::floatValue(v45);
        if ( v84.m128i_i64[1] > 0xFuLL )
        {
          v47 = (void *)Buf2;
          if ( (unsigned __int64)(v84.m128i_i64[1] + 1) >= 0x1000 )
          {
            v47 = *(void **)(Buf2 - 8);
            if ( (unsigned __int64)(Buf2 - (_QWORD)v47 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v47);
        }
        v48 = v72;
        v49 = cocos2d::CCString::getCString(v72);
        *(_OWORD *)Buf1 = 0;
        v82 = 0u;
        v50 = -1;
        do
          ++v50;
        while ( v49[v50] );
        sub_3C230(Buf1);
        cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 344), v31, Buf1);
        v51 = *(_QWORD *)(a1 + 344);
        v52 = cocos2d::CCString::createWithFormat("%f", v46);
        cocos2d::CCDictionary::setObject(v51, v52, Buf1);
        sub_3C310(Buf1);
      }
      else
      {
        v48 = v72;
      }
      fmt::BasicWriter<char>::BasicWriter<char>(v91);
      v2 = a2;
      v53 = a2;
      if ( a2[3] > 0xFu )
        v53 = (_QWORD *)*a2;
      v78[0] = v53;
      v78[1] = 0;
      fmt::BasicWriter<char>::operator<<(v91, v78);
      v79[0] = &unk_70F154;
      v79[1] = 0;
      fmt::BasicWriter<char>::operator<<(v91, v79);
      v80[0] = cocos2d::CCString::getCString(v48);
      v80[1] = 0;
      fmt::BasicWriter<char>::operator<<(v91, v80);
      v54 = (const char *)fmt::BasicWriter<char>::c_str(v91);
      v55 = cocos2d::CCAnimationCache::animationByName(v75, v54);
      v82 = v13;
      Buf1[0] = (void *)0x7246656C676E6973LL;
      Buf1[1] = &loc_656D61;
      v56 = cocos2d::CCDictionary::objectForKey(v21, Buf1);
      if ( v82.m128i_i64[1] > 0xFuLL )
      {
        v57 = Buf1[0];
        if ( (unsigned __int64)(v82.m128i_i64[1] + 1) >= 0x1000 )
        {
          v57 = (void *)*((_QWORD *)Buf1[0] - 1);
          if ( (unsigned __int64)((char *)Buf1[0] - (char *)v57 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v57);
      }
      if ( !v56 )
      {
        v60 = cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)v55 + 9), 0);
        v59 = (__int64)v60;
        if ( *((_DWORD *)v60 + 7) == 14 )
          v59 = *((_QWORD *)v60 + 7);
        v61 = cocos2d::CCAnimate::create(v55);
        v58 = v61;
        *((_DWORD *)v61 + 7) = 0;
        v55 = v61;
        if ( v68 )
        {
          v62 = cocos2d::CCRepeatForever::create(v61);
          goto LABEL_81;
        }
        if ( !v69 )
        {
          v63 = cocos2d::CCCallFunc::create(a1, sub_86440);
          v62 = cocos2d::CCSequence::create(v58, v63, 0);
LABEL_81:
          v55 = v62;
        }
        *((_DWORD *)v55 + 7) = 0;
        goto LABEL_83;
      }
      LODWORD(v58) = (_DWORD)v55;
      v59 = (__int64)v55;
      *((_DWORD *)v55 + 7) = 2;
LABEL_83:
      v64 = cocos2d::CCString::getCString(v72);
      Buf2 = 0;
      v84 = 0u;
      v65 = -1;
      do
        ++v65;
      while ( v64[v65] );
      sub_3C230(&Buf2);
      sub_85950(a1, (_DWORD)v58, (_DWORD)v55, (unsigned int)&Buf2, v71, v67 + 1, v59);
      fmt::BasicWriter<char>::~BasicWriter<char>(v91);
      v12 = ++v70;
      v11 = v76;
      if ( v70 >= cocos2d::CCArray::count(v76) )
        return sub_3C310(v2);
      v8 = v77;
    }
    v33 = v84.m128i_u64[1];
    v39 = v82.m128i_u64[1];
    v38 = (char *)Buf1[0];
LABEL_47:
    v42 = 0;
    goto LABEL_48;
  }
  return sub_3C310(v2);
}
