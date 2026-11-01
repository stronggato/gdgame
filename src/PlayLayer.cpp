#include <Geode/binding/PlayLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/80] Address: 0x89380
// Method: PlayLayer::updateProgressbar
// local variable allocation has failed, the output may be wrong!
// Hidden C++ exception states: #wind=1
__int64 __fastcall PlayLayer_updateProgressbar(__int64 a1, __int64 a2, float a3, double a4, float a5, float a6)
{
  __int128 v8; // xmm6
  __int64 v9; // rax
  float v10; // xmm0_4
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  float v14; // xmm7_4
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v18[32]; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-A0h]

  v19 = a2; /*0x893d3*/
  v8 = 0x3F800000u; /*0x893e1*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1); /*0x893ec*/
  *(float *)(a1 + 624) = a3; /*0x893f2*/
  v9 = sub_3E4F0(v18, a2); /*0x89403*/
  TextArea_setString(a1, v9); /*0x8940e*/
  if ( a5 < 1.0 ) /*0x89421*/
  {
    do /*0x894ea*/
    {
      v10 = (float)((float)((float)*(int *)(a1 + 688) + *(float *)(a1 + 664)) + a6) * *(float *)&v8; /*0x8945a*/
      if ( v10 <= *(float *)&a4 ) /*0x89462*/
        break; /*0x89462*/
      v11 = *(_OWORD *)&a4; /*0x89468*/
      *(float *)&v11 = *(float *)&a4 / v10; /*0x8946c*/
      if ( (float)(*(float *)&a4 / v10) < 0.0 ) /*0x89476*/
      {
        v12 = v11; /*0x89481*/
        *(float *)&v12 = sqrtf(*(float *)&v11); /*0x89484*/
      }
      else
      {
        v12 = 0; /*0x89478*/
        *(float *)&v12 = fsqrt(*(float *)&v11); /*0x8947b*/
      }
      *(float *)&v12 = floorf((float)(*(float *)&v12 * *(float *)&v8) * 20.0) / 20.0; /*0x89496*/
      if ( *(float *)&v12 >= *(float *)&v8 ) /*0x8949d*/
      {
        v12 = v8; /*0x8949f*/
        *(float *)&v12 = *(float *)&v8 - 0.050000001; /*0x894a2*/
      }
      v8 = v12; /*0x894a7*/
      *(float *)&v8 = fmaxf(*(float *)&v12, a5); /*0x894aa*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1); /*0x894b8*/
      *(float *)(a1 + 624) = a3 / *(float *)&v8; /*0x894c6*/
      v13 = sub_3E4F0(v18, a2); /*0x894d6*/
      TextArea_setString(a1, v13); /*0x894e1*/
    }
    while ( *(float *)&v8 > a5 ); /*0x894ea*/
    if ( *(float *)&v8 < 1.0 ) /*0x894f4*/
    {
      while ( 1 ) /*0x8950c*/
      {
        v14 = fminf(1.0, *(float *)&v8 + 0.050000001); /*0x8950c*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1); /*0x89519*/
        *(float *)(a1 + 624) = a3 / v14; /*0x89527*/
        v15 = sub_3E4F0(v18, a2); /*0x89537*/
        TextArea_setString(a1, v15); /*0x89542*/
        if ( (float)((float)((float)((float)*(int *)(a1 + 688) + *(float *)(a1 + 664)) + a6) * v14) > *(float *)&a4 ) /*0x89567*/
          break; /*0x89567*/
        *(float *)&v8 = v14; /*0x89569*/
        if ( v14 >= 1.0 ) /*0x89570*/
          return sub_3C310(a2); /*0x89570*/
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1); /*0x8957d*/
      *(float *)(a1 + 624) = a3 / *(float *)&v8; /*0x89588*/
      v16 = sub_3E4F0(v18, a2); /*0x89599*/
      TextArea_setString(a1, v16); /*0x895a4*/
    }
  }
  return sub_3C310(a2); /*0x895b2*/
}

// [3/80] Address: 0xa9f90
// Method: PlayLayer::PlayLayer
// Hidden C++ exception states: #wind=1
__int64 __fastcall PlayLayer_PlayLayer(__int64 a1)
{
  FLAlertLayer_FLAlertLayer(); /*0xa9fa2*/
  *(_QWORD *)a1 = &PagedListPopup::`vftable'; /*0xa9faf*/
  *(_QWORD *)(a1 + 320) = &PagedListPopup::`vftable'; /*0xa9fb9*/
  *(_QWORD *)(a1 + 328) = &PagedListPopup::`vftable'; /*0xa9fc7*/
  *(_QWORD *)(a1 + 336) = &PagedListPopup::`vftable'; /*0xa9fd5*/
  *(_QWORD *)(a1 + 344) = &PagedListPopup::`vftable'; /*0xa9fe3*/
  *(_QWORD *)(a1 + 352) = &PagedListPopup::`vftable'; /*0xa9ff1*/
  *(_QWORD *)(a1 + 408) = &PagedListPopup::`vftable'; /*0xa9fff*/
  *(_QWORD *)(a1 + 432) = &PagedListPopup::`vftable'; /*0xaa00d*/
  *(_QWORD *)(a1 + 544) = &PagedListPopup::`vftable'; /*0xaa01b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 664)); /*0xaa029*/
  *(_QWORD *)(a1 + 672) = 0; /*0xaa031*/
  *(_DWORD *)(a1 + 680) = 0; /*0xaa038*/
  *(_DWORD *)(a1 + 684) = -1; /*0xaa03e*/
  *(_QWORD *)(a1 + 688) = 0; /*0xaa048*/
  *(_QWORD *)(a1 + 696) = 0; /*0xaa04f*/
  *(_QWORD *)(a1 + 704) = 0; /*0xaa056*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 712)); /*0xaa064*/
  *(_QWORD *)(a1 + 720) = 0; /*0xaa06a*/
  *(_QWORD *)(a1 + 728) = 0; /*0xaa071*/
  *(_QWORD *)(a1 + 736) = 0; /*0xaa078*/
  *(_QWORD *)(a1 + 744) = 0; /*0xaa07f*/
  *(_QWORD *)(a1 + 752) = 0; /*0xaa086*/
  *(_QWORD *)(a1 + 760) = 0; /*0xaa08d*/
  *(_DWORD *)(a1 + 768) = -6908266; /*0xaa094*/
  return a1; /*0xaa0a1*/
}

// [4/80] Address: 0x11b570
// Method: PlayLayer::createObjectsFromSetupFinished
// Hidden C++ exception states: #wind=2
void __fastcall PlayLayer_createObjectsFromSetupFinished(__int64 a1)
{
  __int64 v2; // rcx
  float Value; // xmm0_4
  float v4; // xmm0_4
  int v5; // eax
  float v6; // xmm0_4
  float v7; // xmm0_4
  int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct cocos2d::CCString *v11; // rax
  void *v12; // rcx
  __int64 v13; // rdi
  void (__fastcall **v14)(__int64, const char *); // rdi
  __int64 v15; // rbx
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  void *v18; // [rsp+30h] [rbp-48h]
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]
  unsigned __int64 v21; // [rsp+50h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 1024); /*0x11b59b*/
  if ( v2 ) /*0x11b5a5*/
  {
    Value = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(v2 + 408) + 456LL)); /*0x11b5b9*/
    if ( (int)roundf(Value * 15.0) > 15 /*0x11b603*/
      || (v4 = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 408LL) + 456LL)),
          (int)roundf(v4 * 15.0) >= 0) )
    {
      v6 = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 408LL) + 456LL)); /*0x11b61e*/
      if ( (int)roundf(v6 * 15.0) <= 15 ) /*0x11b634*/
      {
        v7 = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 408LL) + 456LL)); /*0x11b652*/
        v5 = (int)roundf(v7 * 15.0); /*0x11b661*/
      }
      else
      {
        v5 = 15; /*0x11b636*/
      }
    }
    else
    {
      v5 = 0; /*0x11b605*/
    }
    v8 = 10 * (v5 + 5); /*0x11b66b*/
    v9 = qword_905FD0; /*0x11b66d*/
    if ( !qword_905FD0 ) /*0x11b677*/
    {
      v18 = operator new(0x6E8u); /*0x11b683*/
      qword_905FD0 = sub_2723A0(v18); /*0x11b691*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x11b6a2*/
      v9 = qword_905FD0; /*0x11b6a4*/
    }
    *(_OWORD *)Block = 0; /*0x11b6ae*/
    v20 = 3; /*0x11b6b3*/
    v21 = 15; /*0x11b6bc*/
    LODWORD(Block[0]) = 6256231; /*0x11b6cb*/
    sub_43D80(Block, "0211", 4u); /*0x11b6f2*/
    v10 = *(_QWORD *)(v9 + 432); /*0x11b6f7*/
    v11 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v8); /*0x11b707*/
    cocos2d::CCDictionary::setObject(v10, v11, Block); /*0x11b718*/
    if ( v21 > 0xF ) /*0x11b728*/
    {
      v12 = Block[0]; /*0x11b72d*/
      if ( v21 + 1 >= 0x1000 ) /*0x11b73c*/
      {
        v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x11b742*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x11b751*/
          invoke_watson(0, 0, 0, 0, 0); /*0x11b766*/
      }
      j_j_free(v12); /*0x11b76d*/
    }
    v13 = *(_QWORD *)(a1 + 1032); /*0x11b772*/
    if ( v13 ) /*0x11b77c*/
    {
      v14 = *(void (__fastcall ***)(__int64, const char *))(v13 + 360); /*0x11b77e*/
      v15 = *(_QWORD *)(a1 + 1032); /*0x11b785*/
      v16 = cocos2d::CCString::createWithFormat("%.1fx", (float)((float)v8 / 100.0)); /*0x11b7aa*/
      CString = cocos2d::CCString::getCString(v16); /*0x11b7b3*/
      (*v14)(v15 + 360, CString); /*0x11b7c3*/
    }
  }
}

// [5/80] Address: 0x309570
// Method: PlayLayer::init
// Hidden C++ exception states: #wind=10
bool __fastcall PlayLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  void *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  void *v9; // rbx
  cocos2d::CCObject *v10; // rax
  cocos2d::CCObject *v11; // rax
  cocos2d::CCObject *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  cocos2d::CCObject *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  cocos2d::CCObject *v28; // rax
  cocos2d::CCObject *v29; // rax
  cocos2d::CCObject *v30; // rax
  cocos2d::CCObject *v31; // rax
  cocos2d::CCObject *v32; // rax
  __int64 v33; // rax
  cocos2d::CCObject *v34; // rax
  __int64 v35; // rax
  cocos2d::CCObject *v36; // rax
  cocos2d::CCObject *v37; // rax
  cocos2d::CCObject *v38; // rax
  cocos2d::CCObject *v39; // rax
  cocos2d::CCObject *v40; // rax
  cocos2d::CCObject *v41; // rax
  cocos2d::CCObject *v42; // rax
  cocos2d::CCObject *v43; // rax
  cocos2d::CCObject *v44; // rax
  cocos2d::CCObject *v45; // rax
  cocos2d::CCObject *v46; // rax
  cocos2d::CCObject *v47; // rax
  cocos2d::CCObject *v48; // rax
  cocos2d::CCObject *v49; // rax
  __int64 i; // rcx
  float *v51; // rdx
  __int64 v52; // r8
  unsigned __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdi
  void *v56; // rbx
  __int64 v57; // rax
  const struct cocos2d::CCPoint *v58; // rax
  struct cocos2d::CCActionInterval *v59; // rax
  struct cocos2d::CCFiniteTimeAction *v60; // rdi
  const struct cocos2d::CCPoint *v61; // rax
  struct cocos2d::CCActionInterval *v62; // rax
  struct cocos2d::CCEaseInOut *v63; // rax
  cocos2d::CCNode *v64; // rbx
  struct cocos2d::CCActionInterval *v65; // rax
  struct cocos2d::CCAction *v66; // rax
  cocos2d::CCObject *v67; // rax
  cocos2d::CCObject *v68; // rax
  cocos2d::CCObject *v69; // rax
  cocos2d::CCObject *v70; // rax
  cocos2d::CCObject *v71; // rax
  cocos2d::CCObject *v72; // rax
  __int64 v73; // rax
  char *v74; // rdi
  char *v75; // rbp
  cocos2d::CCPoint *v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rcx
  unsigned __int8 GameVariable; // al
  _BYTE v80[1744]; // [rsp+20h] [rbp-6F8h] BYREF
  char *v81; // [rsp+728h] [rbp+10h] BYREF
  char v82; // [rsp+730h] [rbp+18h] BYREF

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x309590*/
  if ( result ) /*0x309598*/
  {
    dword_8F8470 = 10; /*0x30959e*/
    dword_905FF8 = 0; /*0x3095aa*/
    memset(v80, 0, sizeof(v80)); /*0x3095bd*/
    v3 = sub_306D20(v80); /*0x3095c7*/
    sub_30A1C0(a1 + 424, v3); /*0x3095d7*/
    sub_307570(v80); /*0x3095e2*/
    *(_OWORD *)(a1 + 14404) = 0; /*0x3095f0*/
    *(_OWORD *)(a1 + 14420) = 0; /*0x3095f7*/
    *(_OWORD *)(a1 + 14436) = 0; /*0x3095fe*/
    *(_OWORD *)(a1 + 14452) = 0; /*0x309605*/
    *(_OWORD *)(a1 + 14468) = 0; /*0x30960c*/
    *(_OWORD *)(a1 + 14484) = 0; /*0x309613*/
    *(_DWORD *)(a1 + 14304) = 1008981770; /*0x30961a*/
    *(_DWORD *)(a1 + 14308) = 1008981770; /*0x309624*/
    v4 = *(_QWORD *)(a1 + 13008); /*0x309635*/
    if ( (unsigned __int64)((*(_QWORD *)(a1 + 13024) - v4) >> 3) < 0x64 ) /*0x309647*/
    {
      v5 = (*(_QWORD *)(a1 + 13016) - v4) >> 3; /*0x309650*/
      v6 = (void *)sub_3C460(800); /*0x30965e*/
      memmove(v6, *(const void **)(a1 + 13008), *(_QWORD *)(a1 + 13016) - *(_QWORD *)(a1 + 13008)); /*0x30966e*/
      sub_BBD70(a1 + 13008, v6, v5, 100); /*0x309682*/
    }
    v7 = *(_QWORD *)(a1 + 13040); /*0x30968e*/
    if ( (unsigned __int64)((*(_QWORD *)(a1 + 13056) - v7) >> 3) < 0x64 ) /*0x3096a0*/
    {
      v8 = (*(_QWORD *)(a1 + 13048) - v7) >> 3; /*0x3096a9*/
      v9 = (void *)sub_3C460(800); /*0x3096b7*/
      memmove(v9, *(const void **)(a1 + 13040), *(_QWORD *)(a1 + 13048) - *(_QWORD *)(a1 + 13040)); /*0x3096c7*/
      sub_BBD70(a1 + 13040, v9, v8, 100); /*0x3096db*/
    }
    cocos2d::CCNode::resetGlobalOrderOfArrival(); /*0x3096e0*/
    v10 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x3096e6*/
    *(_QWORD *)(a1 + 12984) = v10; /*0x3096ec*/
    cocos2d::CCObject::retain(v10); /*0x3096f6*/
    v11 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x3096fc*/
    *(_QWORD *)(a1 + 13792) = v11; /*0x309702*/
    cocos2d::CCObject::retain(v11); /*0x30970c*/
    v12 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x309712*/
    *(_QWORD *)(a1 + 13800) = v12; /*0x309718*/
    cocos2d::CCObject::retain(v12); /*0x309722*/
    v13 = qword_905FD0; /*0x309728*/
    if ( !qword_905FD0 ) /*0x309732*/
    {
      v81 = (char *)operator new(0x6E8u); /*0x30973e*/
      qword_905FD0 = sub_2723A0(v81); /*0x30974f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x309760*/
      v13 = qword_905FD0; /*0x309762*/
    }
    *(_BYTE *)(a1 + 13713) = GameManager_getGameVariable(v13, "0129") ^ 1; /*0x309777*/
    v14 = qword_905FD0; /*0x30977d*/
    if ( !qword_905FD0 ) /*0x309787*/
    {
      v81 = (char *)operator new(0x6E8u); /*0x309793*/
      qword_905FD0 = sub_2723A0(v81); /*0x3097a4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3097b5*/
      v14 = qword_905FD0; /*0x3097b7*/
    }
    *(_BYTE *)(a1 + 13714) = GameManager_getGameVariable(v14, "0130"); /*0x3097ca*/
    v15 = qword_905FD0; /*0x3097d0*/
    if ( !qword_905FD0 ) /*0x3097da*/
    {
      v81 = (char *)operator new(0x6E8u); /*0x3097e6*/
      qword_905FD0 = sub_2723A0(v81); /*0x3097f7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x309808*/
      v15 = qword_905FD0; /*0x30980a*/
    }
    *(_BYTE *)(a1 + 2209) = GameManager_getGameVariable(v15, "0136"); /*0x30981d*/
    v16 = qword_905FD0; /*0x309823*/
    if ( !qword_905FD0 ) /*0x30982d*/
    {
      v81 = (char *)operator new(0x6E8u); /*0x309839*/
      qword_905FD0 = sub_2723A0(v81); /*0x30984a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x30985b*/
      v16 = qword_905FD0; /*0x30985d*/
    }
    *(_BYTE *)(a1 + 14642) = GameManager_getGameVariable(v16, "0176"); /*0x309870*/
    v17 = qword_905FD0; /*0x309876*/
    if ( !qword_905FD0 ) /*0x309880*/
    {
      v81 = (char *)operator new(0x6E8u); /*0x30988c*/
      qword_905FD0 = sub_2723A0(v81); /*0x30989d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3098ae*/
      v17 = qword_905FD0; /*0x3098b0*/
    }
    *(_BYTE *)(a1 + 14641) = GameManager_getGameVariable(v17, "0177"); /*0x3098c3*/
    v18 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x3098c9*/
    *(_QWORD *)(a1 + 13720) = v18; /*0x3098cf*/
    cocos2d::CCObject::retain(v18); /*0x3098d9*/
    v19 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x3098df*/
    *(_QWORD *)(a1 + 2272) = v19; /*0x3098e5*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v19); /*0x3098fc*/
    v20 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x3098ff*/
    *(_QWORD *)(a1 + 2280) = v20; /*0x309905*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2272) + 464LL))(*(_QWORD *)(a1 + 2272), v20); /*0x309920*/
    v21 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x309923*/
    *(_QWORD *)(a1 + 2288) = v21; /*0x309929*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2280) + 464LL))(*(_QWORD *)(a1 + 2280), v21); /*0x309944*/
    v22 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x309947*/
    *(_QWORD *)(a1 + 2296) = v22; /*0x30994d*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2288) + 464LL))(*(_QWORD *)(a1 + 2288), v22); /*0x309968*/
    v23 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x30996b*/
    *(_QWORD *)(a1 + 2304) = v23; /*0x309971*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2272) + 464LL))(*(_QWORD *)(a1 + 2272), v23); /*0x30998c*/
    v24 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x30998f*/
    *(_QWORD *)(a1 + 4336) = v24; /*0x309995*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v24, 0xFFFFFFFFLL); /*0x3099b2*/
    v25 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x3099b5*/
    *(_QWORD *)(a1 + 4344) = v25; /*0x3099bb*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v25, 1); /*0x3099d8*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 4344) + 336LL))(*(_QWORD *)(a1 + 4344), 0); /*0x3099e7*/
    v26 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x3099ed*/
    *(_QWORD *)(a1 + 4352) = v26; /*0x3099f3*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v26, 2); /*0x309a10*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 4352) + 336LL))(*(_QWORD *)(a1 + 4352), 0); /*0x309a1f*/
    v27 = ((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x309a25*/
    *(_QWORD *)(a1 + 13096) = v27; /*0x309a2b*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 4336) + 464LL))(*(_QWORD *)(a1 + 4336), v27); /*0x309a46*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 13096) + 336LL))(*(_QWORD *)(a1 + 13096), 0); /*0x309a55*/
    v28 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309a5b*/
    *(_QWORD *)(a1 + 13128) = v28; /*0x309a61*/
    cocos2d::CCObject::retain(v28); /*0x309a6b*/
    v29 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309a71*/
    *(_QWORD *)(a1 + 13136) = v29; /*0x309a77*/
    cocos2d::CCObject::retain(v29); /*0x309a81*/
    v30 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x309a87*/
    *(_QWORD *)(a1 + 4424) = v30; /*0x309a8d*/
    cocos2d::CCObject::retain(v30); /*0x309a97*/
    v31 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x309a9d*/
    *(_QWORD *)(a1 + 3600) = v31; /*0x309aa3*/
    cocos2d::CCObject::retain(v31); /*0x309aad*/
    v32 = cocos2d::CCArray::createWithCapacity(0x64u); /*0x309ab8*/
    *(_QWORD *)(a1 + 13960) = v32; /*0x309abe*/
    cocos2d::CCObject::retain(v32); /*0x309ac8*/
    v33 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v81, (const struct cocos2d::CCPoint *)&dword_904A70); /*0x309add*/
    v34 = (cocos2d::CCObject *)OBB2D_create(v33); /*0x309af7*/
    *(_QWORD *)(a1 + 2312) = v34; /*0x309afc*/
    cocos2d::CCObject::retain(v34); /*0x309b06*/
    v35 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v81, (const struct cocos2d::CCPoint *)&dword_904A70); /*0x309b1b*/
    v36 = (cocos2d::CCObject *)OBB2D_create(v35); /*0x309b2d*/
    *(_QWORD *)(a1 + 13240) = v36; /*0x309b32*/
    cocos2d::CCObject::retain(v36); /*0x309b3c*/
    v37 = (cocos2d::CCObject *)GJEffectManager_create(); /*0x309b42*/
    *(_QWORD *)(a1 + 2472) = v37; /*0x309b47*/
    cocos2d::CCObject::retain(v37); /*0x309b51*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 2472)); /*0x309b64*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 2472) + 336LL))(*(_QWORD *)(a1 + 2472), 0); /*0x309b76*/
    *(_QWORD *)(*(_QWORD *)(a1 + 2472) + 320LL) = a1 + 408; /*0x309b8a*/
    v38 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x309b91*/
    *(_QWORD *)(a1 + 3608) = v38; /*0x309b97*/
    cocos2d::CCObject::retain(v38); /*0x309ba1*/
    v39 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x309ba7*/
    *(_QWORD *)(a1 + 3624) = v39; /*0x309bad*/
    cocos2d::CCObject::retain(v39); /*0x309bb7*/
    v40 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309bbd*/
    *(_QWORD *)(a1 + 3632) = v40; /*0x309bc3*/
    cocos2d::CCObject::retain(v40); /*0x309bcd*/
    v41 = (cocos2d::CCObject *)((__int64 (*)(void))cocos2d::CCNode::create)(); /*0x309bd3*/
    *(_QWORD *)(a1 + 3640) = v41; /*0x309bd9*/
    cocos2d::CCObject::retain(v41); /*0x309be3*/
    v42 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309be9*/
    *(_QWORD *)(a1 + 4432) = v42; /*0x309bef*/
    cocos2d::CCObject::retain(v42); /*0x309bf9*/
    v43 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309bff*/
    *(_QWORD *)(a1 + 3936) = v43; /*0x309c05*/
    cocos2d::CCObject::retain(v43); /*0x309c0f*/
    v44 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309c15*/
    *(_QWORD *)(a1 + 3944) = v44; /*0x309c1b*/
    cocos2d::CCObject::retain(v44); /*0x309c25*/
    v45 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309c2b*/
    *(_QWORD *)(a1 + 3952) = v45; /*0x309c31*/
    cocos2d::CCObject::retain(v45); /*0x309c3b*/
    v46 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309c41*/
    *(_QWORD *)(a1 + 4032) = v46; /*0x309c47*/
    cocos2d::CCObject::retain(v46); /*0x309c51*/
    v47 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309c57*/
    *(_QWORD *)(a1 + 4040) = v47; /*0x309c5d*/
    cocos2d::CCObject::retain(v47); /*0x309c67*/
    v48 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309c6d*/
    *(_QWORD *)(a1 + 4048) = v48; /*0x309c73*/
    cocos2d::CCObject::retain(v48); /*0x309c7d*/
    v49 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309c83*/
    *(_QWORD *)(a1 + 4320) = v49; /*0x309c89*/
    cocos2d::CCObject::retain(v49); /*0x309c93*/
    sub_353F50(a1 + 3960); /*0x309ca0*/
    sub_353F50(a1 + 3984); /*0x309cac*/
    sub_353F50(a1 + 4008); /*0x309cb8*/
    for ( i = 0; i < 80000; i += 8 ) /*0x309cbd*/
    {
      *(_QWORD *)(i + *(_QWORD *)(a1 + 3960)) = 0; /*0x309cc7*/
      *(_QWORD *)(i + *(_QWORD *)(a1 + 3984)) = 0; /*0x309cd2*/
      *(_QWORD *)(i + *(_QWORD *)(a1 + 4008)) = 0; /*0x309cdd*/
    }
    sub_82220(a1 + 1576, 101); /*0x309cfa*/
    sub_82220(a1 + 1600, 101); /*0x309d0b*/
    v51 = (float *)(a1 + 4588); /*0x309d10*/
    v52 = 2000; /*0x309d17*/
    v53 = qword_905FF0; /*0x309d25*/
    do /*0x309d69*/
    {
      v53 = 214013 * v53 + 2531011; /*0x309d37*/
      *v51++ = (float)((float)((float)((v53 >> 16) & 0x7FFF) / 32767.0) /*0x309d5d*/
                     + (float)((float)((v53 >> 16) & 0x7FFF) / 32767.0))
             - 1.0;
      --v52; /*0x309d65*/
    }
    while ( v52 ); /*0x309d69*/
    qword_905FF0 = v53; /*0x309d6b*/
    v54 = *(_QWORD *)(a1 + 13248); /*0x309d79*/
    if ( (unsigned __int64)((*(_QWORD *)(a1 + 13264) - v54) >> 3) < 0x1F4 ) /*0x309d8d*/
    {
      v55 = (*(_QWORD *)(a1 + 13256) - v54) >> 3; /*0x309d96*/
      v56 = (void *)sub_3C460(4000); /*0x309da4*/
      memmove(v56, *(const void **)(a1 + 13248), *(_QWORD *)(a1 + 13256) - *(_QWORD *)(a1 + 13248)); /*0x309db4*/
      sub_BBD70(a1 + 13248, v56, v55, 500); /*0x309dc8*/
    }
    v57 = cocos2d::CCNode::create(v54, v51); /*0x309dcd*/
    *(_QWORD *)(a1 + 2264) = v57; /*0x309dd3*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v57 + 336LL))(v57, 0); /*0x309de9*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 2264)); /*0x309df9*/
    v58 = (const struct cocos2d::CCPoint *)cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v81, 0.0, -3.0); /*0x309e12*/
    v59 = cocos2d::CCMoveBy::create(0.60000002, v58); /*0x309e23*/
    v60 = cocos2d::CCEaseInOut::create(v59, 1.5); /*0x309e3d*/
    v61 = (const struct cocos2d::CCPoint *)cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v82, 0.0, 3.0); /*0x309e53*/
    v62 = cocos2d::CCMoveBy::create(0.60000002, v61); /*0x309e64*/
    v63 = cocos2d::CCEaseInOut::create(v62, 1.5); /*0x309e70*/
    v64 = *(cocos2d::CCNode **)(a1 + 2264); /*0x309e76*/
    v65 = cocos2d::CCSequence::create(v60, v63, 0); /*0x309e86*/
    v66 = cocos2d::CCRepeatForever::create(v65); /*0x309e8f*/
    cocos2d::CCNode::runAction(v64, v66); /*0x309e9b*/
    v67 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309ea1*/
    *(_QWORD *)(a1 + 13936) = v67; /*0x309ea7*/
    cocos2d::CCObject::retain(v67); /*0x309eb1*/
    v68 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309eb7*/
    *(_QWORD *)(a1 + 12776) = v68; /*0x309ebd*/
    cocos2d::CCObject::retain(v68); /*0x309ec7*/
    v69 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309ecd*/
    *(_QWORD *)(a1 + 12784) = v69; /*0x309ed3*/
    cocos2d::CCObject::retain(v69); /*0x309edd*/
    v70 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x309ee3*/
    *(_QWORD *)(a1 + 12864) = v70; /*0x309ee9*/
    cocos2d::CCObject::retain(v70); /*0x309ef3*/
    v71 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x309ef9*/
    *(_QWORD *)(a1 + 12872) = v71; /*0x309eff*/
    cocos2d::CCObject::retain(v71); /*0x309f09*/
    v72 = (cocos2d::CCObject *)cocos2d::CCArray::create(); /*0x309f0f*/
    *(_QWORD *)(a1 + 12792) = v72; /*0x309f15*/
    cocos2d::CCObject::retain(v72); /*0x309f1f*/
    *(_DWORD *)(a1 + 12768) = 40; /*0x309f25*/
    if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication() + 243) /*0x309f44*/
      || *(_BYTE *)(cocos2d::CCApplication::sharedApplication() + 244) )
    {
      *(_DWORD *)(a1 + 12768) = 10; /*0x309f4d*/
    }
    v73 = qword_905FD0; /*0x309f57*/
    if ( !qword_905FD0 ) /*0x309f61*/
    {
      v81 = (char *)operator new(0x6E8u); /*0x309f6d*/
      qword_905FD0 = sub_2723A0(v81); /*0x309f7e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x309f8f*/
      v73 = qword_905FD0; /*0x309f91*/
    }
    *(_QWORD *)(v73 + 576) = a1; /*0x309f98*/
    v74 = (char *)operator new(0x290u); /*0x309fa9*/
    v81 = v74; /*0x309fac*/
    cocos2d::CCLayerColor::CCLayerColor((cocos2d::CCLayerColor *)v74); /*0x309fb7*/
    cocos2d::CCKeyboardDelegate::CCKeyboardDelegate((cocos2d::CCKeyboardDelegate *)(v74 + 544)); /*0x309fc4*/
    *(_QWORD *)v74 = &UILayer::`vftable'; /*0x309fd1*/
    *((_QWORD *)v74 + 40) = &UILayer::`vftable'; /*0x309fdb*/
    *((_QWORD *)v74 + 41) = &UILayer::`vftable'; /*0x309fe9*/
    *((_QWORD *)v74 + 42) = &UILayer::`vftable'; /*0x309ff7*/
    *((_QWORD *)v74 + 43) = &UILayer::`vftable'; /*0x30a005*/
    *((_QWORD *)v74 + 44) = &UILayer::`vftable'; /*0x30a013*/
    *((_QWORD *)v74 + 51) = &UILayer::`vftable'; /*0x30a021*/
    *((_QWORD *)v74 + 54) = &UILayer::`vftable'; /*0x30a02f*/
    *((_QWORD *)v74 + 68) = &UILayer::`vftable'; /*0x30a03d*/
    *((_QWORD *)v74 + 69) = 0; /*0x30a044*/
    *((_QWORD *)v74 + 70) = 0; /*0x30a04b*/
    *((_QWORD *)v74 + 71) = 0; /*0x30a052*/
    *((_DWORD *)v74 + 144) = 0; /*0x30a059*/
    v74[580] = 0; /*0x30a063*/
    *((_QWORD *)v74 + 73) = -1; /*0x30a06a*/
    *((_DWORD *)v74 + 148) = 0; /*0x30a075*/
    v74[596] = 0; /*0x30a07b*/
    *((_QWORD *)v74 + 75) = 0; /*0x30a082*/
    v74[608] = 0; /*0x30a089*/
    *((_QWORD *)v74 + 77) = 0; /*0x30a090*/
    *((_DWORD *)v74 + 156) = 0; /*0x30a097*/
    *((_QWORD *)v74 + 79) = 0; /*0x30a0a1*/
    *((_QWORD *)v74 + 80) = 0; /*0x30a0a8*/
    v74[648] = 0; /*0x30a0af*/
    if ( (unsigned __int8)UILayer_init(v74, a1) ) /*0x30a0bc*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v74); /*0x30a0c8*/
    }
    else
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v74 + 8LL))(v74, 1); /*0x30a0d8*/
      v74 = 0; /*0x30a0db*/
    }
    *(_QWORD *)(a1 + 13952) = v74; /*0x30a0de*/
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v74, 101); /*0x30a0f4*/
    v75 = (char *)operator new(0x2580u); /*0x30a104*/
    v81 = v75; /*0x30a107*/
    v76 = (cocos2d::CCPoint *)v75; /*0x30a10f*/
    v77 = 1200; /*0x30a112*/
    do /*0x30a128*/
    {
      cocos2d::CCPoint::CCPoint(v76); /*0x30a11a*/
      v76 = (cocos2d::CCPoint *)((char *)v76 + 8); /*0x30a120*/
      --v77; /*0x30a124*/
    }
    while ( v77 ); /*0x30a128*/
    *(_QWORD *)(a1 + 14528) = v75; /*0x30a12a*/
    memset(v75, 0, 0x2580u); /*0x30a13c*/
    v78 = qword_905FD0; /*0x30a141*/
    if ( !qword_905FD0 ) /*0x30a14b*/
    {
      v81 = (char *)operator new(0x6E8u); /*0x30a157*/
      qword_905FD0 = sub_2723A0(v81); /*0x30a168*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x30a179*/
      v78 = qword_905FD0; /*0x30a17b*/
    }
    GameVariable = GameManager_getGameVariable(v78, "0144"); /*0x30a189*/
    sub_34F370(a1, GameVariable); /*0x30a194*/
    return 1; /*0x30a199*/
  }
  return result; /*0x30a19b*/
}

// [6/80] Address: 0x313d30
// Method: PlayLayer::getHitboxTrailMax
__int64 PlayLayer_getHitboxTrailMax()
{
  return 480; /*0x313d35*/
}

// [8/80] Address: 0x4ef3c0
// Method: PlayLayer::showTwoPlayerGuide
// Hidden C++ exception states: #wind=2
void __fastcall PlayLayer_showTwoPlayerGuide(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  char v4; // si
  double v5; // xmm0_8
  float v6; // xmm8_4
  float (__fastcall *v7)(_DWORD *); // rbx
  double v8; // xmm0_8
  float v9; // xmm0_4
  float v10; // xmm9_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 v14; // rax
  __int64 v15; // rdx
  float v16; // xmm1_4
  float v17; // xmm2_4
  double v18; // xmm3_8
  double v19; // xmm0_8
  double v20; // xmm0_8
  float v21; // xmm8_4
  double v22; // xmm0_8
  float v23; // xmm7_4
  struct cocos2d::CCActionInterval *v24; // rax
  struct cocos2d::CCFiniteTimeAction *v25; // rbx
  struct cocos2d::CCActionInterval *v26; // rax
  struct cocos2d::CCEaseInOut *v27; // rax
  struct cocos2d::CCAction *v28; // rax
  __int64 v29; // rax
  __int16 v30; // r12
  unsigned __int8 v31; // r13
  cocos2d::CCNode *v32; // r15
  __int64 v33; // rax
  int v34; // esi
  __int64 v35; // rbx
  __int64 v36; // rax
  cocos2d::CCArray *v37; // rbp
  cocos2d::CCString *v38; // rax
  const char *CString; // rbx
  cocos2d::CCSpriteFrameCache *v40; // rax
  struct cocos2d::CCObject *v41; // rax
  struct cocos2d::CCAnimation *v42; // rax
  struct cocos2d::CCFiniteTimeAction *v43; // rbx
  __int64 v44; // rax
  struct cocos2d::CCAction *v45; // rax
  struct cocos2d::CCFiniteTimeAction *v46; // rbx
  struct cocos2d::CCFadeOut *v47; // rax
  struct cocos2d::CCAction *v48; // rax
  unsigned __int8 v49; // dl
  unsigned __int8 v50; // r8
  struct cocos2d::CCAction *v51; // rax
  struct cocos2d::CCFiniteTimeAction *v52; // rbx
  struct cocos2d::CCTintTo *v53; // rax
  struct cocos2d::CCAction *v54; // rax
  __int64 v55; // rcx
  float v56; // [rsp+B0h] [rbp+8h] BYREF
  float v57; // [rsp+B4h] [rbp+Ch]
  __int64 v58; // [rsp+C0h] [rbp+18h] BYREF

  v2 = a2; /*0x4ef3f0*/
  if ( *(_BYTE *)(a1 + 2540) ) /*0x4ef3f6*/
    return; /*0x4ef3fd*/
  *(_BYTE *)(a1 + 2540) = 1; /*0x4ef403*/
  *(_QWORD *)(a1 + 2584) = 0; /*0x4ef40c*/
  *(_WORD *)(a1 + 1840) = 0; /*0x4ef413*/
  *(_BYTE *)(a1 + 1648) = 0; /*0x4ef41a*/
  *(_DWORD *)(a1 + 1832) = 0; /*0x4ef420*/
  if ( *(_BYTE *)(a1 + 2936) /*0x4ef45e*/
    && !*(_BYTE *)(a1 + 2497)
    && !*(_BYTE *)(a1 + 2498)
    && !*(_BYTE *)(a1 + 2500)
    && !*(_BYTE *)(a1 + 2508)
    && !*(_BYTE *)(a1 + 2499)
    && !*(_BYTE *)(a1 + 2501)
    && !*(_BYTE *)(a1 + 2502) )
  {
    sub_4E6C50(a1); /*0x4ef466*/
  }
  if ( !*(_BYTE *)(a1 + 2500) ) /*0x4ef474*/
  {
    if ( !*(_BYTE *)(a1 + 2353) ) /*0x4ef47d*/
      cocos2d::CCMotionStreak::stopStroke(*(cocos2d::CCMotionStreak **)(a1 + 1960)); /*0x4ef48d*/
    if ( *(_BYTE *)(a1 + 2432) ) /*0x4ef493*/
    {
      *(_BYTE *)(a1 + 2432) = 0; /*0x4ef49c*/
      sub_4F9CA0(a1); /*0x4ef4bd*/
    }
  }
  LOBYTE(a2) = 1; /*0x4ef4cc*/
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 1640) + 336LL))(*(_QWORD *)(a1 + 1640), a2); /*0x4ef4ce*/
  v4 = 0; /*0x4ef4e2*/
  if ( v2 ) /*0x4ef4e8*/
  {
    *(_QWORD *)(a1 + 1424) = v2; /*0x4ef4ee*/
    v4 = *((_BYTE *)v2 + 1052); /*0x4ef4f5*/
    *(_QWORD *)(a1 + 1416) = *(_QWORD *)(a1 + 2728); /*0x4ef504*/
    v5 = (*(double (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 1424LL))(v2); /*0x4ef511*/
    v6 = *(float *)&v5; /*0x4ef517*/
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 1272LL))(v2) ) /*0x4ef521*/
      v6 = *(float *)&v5 + 180.0; /*0x4ef533*/
    v7 = *(float (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 392LL); /*0x4ef542*/
    v8 = (*(double (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 376LL))(v2); /*0x4ef54c*/
    if ( fabs(*(float *)&v8 - v7(v2)) > 179.0 ) /*0x4ef568*/
      v6 = v6 + 180.0; /*0x4ef56a*/
    v9 = fmodf(-v6, 360.0); /*0x4ef586*/
    v10 = v9; /*0x4ef58b*/
    if ( v9 <= 180.0 ) /*0x4ef5a3*/
    {
      if ( v9 < -180.0 ) /*0x4ef5b0*/
        v10 = v9 + 360.0; /*0x4ef5b2*/
    }
    else
    {
      v10 = v9 + -360.0; /*0x4ef5a5*/
    }
    if ( *(_BYTE *)(a1 + 2936) ) /*0x4ef5b7*/
      goto LABEL_58; /*0x4ef5be*/
    v11 = 0.0; /*0x4ef5c7*/
    if ( *(_BYTE *)(a1 + 2507) ) /*0x4ef5ca*/
      v11 = -90.0; /*0x4ef5d3*/
    if ( *(_BYTE *)(a1 + 2506) ) /*0x4ef5db*/
      v11 = v11 + 180.0; /*0x4ef5e4*/
    if ( v11 != 0.0 ) /*0x4ef5ed*/
    {
      v10 = v10 + v11; /*0x4ef5ef*/
      if ( v10 <= 180.0 ) /*0x4ef5f8*/
      {
        if ( v10 < -180.0 ) /*0x4ef605*/
          v10 = v10 + 360.0; /*0x4ef607*/
      }
      else
      {
        v10 = v10 + -360.0; /*0x4ef5fa*/
      }
    }
    if ( fabs(v10) > 90.0 ) /*0x4ef61e*/
    {
      if ( v10 <= 0.0 ) /*0x4ef624*/
        v12 = -180.0; /*0x4ef62b*/
      else
        v12 = 180.0; /*0x4ef626*/
      v13 = v12 - v10; /*0x4ef62e*/
      v10 = v13; /*0x4ef633*/
      if ( v13 <= 180.0 ) /*0x4ef63b*/
      {
        if ( v13 < -180.0 ) /*0x4ef648*/
          v10 = v13 + 360.0; /*0x4ef64a*/
      }
      else
      {
        v10 = v13 + -360.0; /*0x4ef63d*/
      }
    }
    if ( v10 > 70.0 || v10 < -70.0 ) /*0x4ef669*/
    {
      if ( v10 <= 0.0 ) /*0x4ef66f*/
      {
        if ( v10 < 70.0 && v10 > -180.0 ) /*0x4ef68d*/
        {
          v10 = -70.0; /*0x4ef68f*/
          goto LABEL_53; /*0x4ef693*/
        }
      }
      else if ( v10 <= 70.0 || v10 >= 180.0 ) /*0x4ef67b*/
      {
        v10 = -70.0; /*0x4ef67d*/
        goto LABEL_53; /*0x4ef681*/
      }
      v10 = 70.0; /*0x4ef695*/
    }
LABEL_53:
    if ( v11 != 0.0 ) /*0x4ef69e*/
    {
      v10 = v10 - v11; /*0x4ef6a0*/
      if ( v10 <= 180.0 ) /*0x4ef6a9*/
      {
        if ( v10 < -180.0 ) /*0x4ef6be*/
          v10 = v10 + 360.0; /*0x4ef6c0*/
      }
      else
      {
        v10 = v10 + -360.0; /*0x4ef6ab*/
      }
    }
LABEL_58:
    v14 = cocos2d::ccpForAngle(&v58); /*0x4ef6e0*/
    cocos2d::CCPoint::operator*(v14, &v56); /*0x4ef708*/
    if ( *(_BYTE *)(a1 + 2507) ) /*0x4ef70e*/
    {
      v16 = v56; /*0x4ef717*/
      v17 = v57; /*0x4ef720*/
      v56 = v57; /*0x4ef729*/
      v57 = v16; /*0x4ef732*/
    }
    else
    {
      v16 = v57; /*0x4ef73d*/
      v17 = v56; /*0x4ef746*/
    }
    v18 = v17; /*0x4ef74f*/
    *(double *)(a1 + 1392) = v17; /*0x4ef752*/
    *(double *)(a1 + 1400) = v16; /*0x4ef75d*/
    if ( *(_BYTE *)(a1 + 2936) ) /*0x4ef765*/
    {
      if ( v18 >= 0.0 ) /*0x4ef775*/
      {
        if ( v18 > 0.0 ) /*0x4ef787*/
          sub_4F2080(a1, 0); /*0x4ef78e*/
      }
      else
      {
        LOBYTE(v15) = 1; /*0x4ef777*/
        sub_4F2080(a1, v15); /*0x4ef77c*/
      }
    }
    else
    {
      v19 = (float)(v16 / fabs(v17)); /*0x4ef7a0*/
      *(double *)(a1 + 1400) = v19; /*0x4ef7a3*/
      *(double *)(a1 + 1392) = fabs(v19); /*0x4ef7b2*/
    }
    *(double *)(a1 + 1408) = v10; /*0x4ef7c2*/
  }
  GJBaseGameLayer_checkRepellPlayer(a1); /*0x4ef7ca*/
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 1640)); /*0x4ef7d9*/
  v20 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 128LL))(*(_QWORD *)(a1 + 1640)); /*0x4ef7e9*/
  v21 = *(float *)&v20 * 1.1; /*0x4ef7f3*/
  v22 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 144LL))(*(_QWORD *)(a1 + 1640)); /*0x4ef806*/
  v23 = *(float *)&v22 * 1.2; /*0x4ef80f*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 120LL))(*(_QWORD *)(a1 + 1640)); /*0x4ef829*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1640) + 136LL))(*(_QWORD *)(a1 + 1640)); /*0x4ef83a*/
  v24 = cocos2d::CCScaleTo::create(0.1, v21 * 0.89999998, v23 * 1.2); /*0x4ef85f*/
  v25 = cocos2d::CCEaseInOut::create(v24, 2.0); /*0x4ef879*/
  v26 = cocos2d::CCScaleTo::create(0.1, v21, v23); /*0x4ef88b*/
  v27 = cocos2d::CCEaseInOut::create(v26, 2.0); /*0x4ef897*/
  v28 = cocos2d::CCSequence::create(v25, v27, 0); /*0x4ef8a6*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 1640), v28); /*0x4ef8b6*/
  cocos2d::CCParticleSystem::resumeSystem(*(cocos2d::CCParticleSystem **)(a1 + 2288)); /*0x4ef8c3*/
  v29 = 2706; /*0x4ef8c9*/
  if ( !*(_BYTE *)(a1 + 2754) ) /*0x4ef8d3*/
    v29 = 2709; /*0x4ef8da*/
  v30 = *(_WORD *)(v29 + a1); /*0x4ef8dd*/
  LOWORD(v56) = v30; /*0x4ef8e2*/
  v31 = *(_BYTE *)(v29 + a1 + 2); /*0x4ef8eb*/
  if ( v2 && *(_BYTE *)(a1 + 2028) && !v4 ) /*0x4ef90a*/
  {
    v32 = cocos2d::CCSprite::createWithSpriteFrameName("playerDash2_boom2_001.png"); /*0x4ef91d*/
    v33 = qword_905FD0; /*0x4ef920*/
    if ( !qword_905FD0 ) /*0x4ef92a*/
    {
      v58 = (__int64)operator new(0x6E8u); /*0x4ef936*/
      qword_905FD0 = sub_2723A0(v58); /*0x4ef947*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ef958*/
      v33 = qword_905FD0; /*0x4ef95a*/
    }
    (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(*(_QWORD *)(v33 + 560) + 4360LL) + 456LL))( /*0x4ef97b*/
      *(_QWORD *)(*(_QWORD *)(v33 + 560) + 4360LL),
      v32,
      40);
    v58 = 0x100000302LL; /*0x4ef981*/
    v34 = 1; /*0x4ef98c*/
    (**((void (__fastcall ***)(__int64, __int64))v32 + 43))((__int64)v32 + 344, 0x100000302LL); /*0x4ef9aa*/
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v32 + 352LL))(v32); /*0x4ef9be*/
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v32 + 160LL))(v32); /*0x4ef9d2*/
    v35 = *(_QWORD *)v32; /*0x4ef9d8*/
    v36 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)v2 + 1208LL))(v2, &v58); /*0x4ef9e9*/
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v35 + 184))(v32, v36); /*0x4ef9f5*/
    (**((void (__fastcall ***)(__int64, __int16 *))v32 + 40))((__int64)v32 + 320, &word_6FF508); /*0x4efa0c*/
    v37 = (cocos2d::CCArray *)cocos2d::CCArray::create(); /*0x4efa14*/
    do /*0x4efa5e*/
    {
      v38 = cocos2d::CCString::createWithFormat("playerDash2_boom2_%03d.png", v34); /*0x4efa29*/
      CString = cocos2d::CCString::getCString(v38); /*0x4efa38*/
      v40 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4efa3b*/
      v41 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v40, CString); /*0x4efa47*/
      cocos2d::CCArray::addObject(v37, v41); /*0x4efa53*/
      ++v34; /*0x4efa59*/
    }
    while ( v34 <= 9 ); /*0x4efa5e*/
    v42 = cocos2d::CCAnimation::createWithSpriteFrames(v37, 0.050000001); /*0x4efa6b*/
    v43 = cocos2d::CCAnimate::create(v42); /*0x4efa7a*/
    v44 = cocos2d::CCCallFunc::create(v32, sub_3E5B0); /*0x4efa87*/
    v45 = cocos2d::CCSequence::create(v43, v44, 0); /*0x4efa96*/
    cocos2d::CCNode::runAction(v32, v45); /*0x4efaa2*/
    v46 = cocos2d::CCDelayTime::create(0.2); /*0x4efab2*/
    v47 = cocos2d::CCFadeOut::create(0.30000001); /*0x4efabd*/
    v48 = cocos2d::CCSequence::create(v46, v47, 0); /*0x4efacc*/
    cocos2d::CCNode::runAction(v32, v48); /*0x4efad8*/
    v49 = 0; /*0x4efae0*/
    v50 = -1; /*0x4efae2*/
    if ( v2[259] != 1704 ) /*0x4efaf3*/
    {
      v49 = -1; /*0x4efaf3*/
      v50 = 0; /*0x4efaf7*/
    }
    v51 = cocos2d::CCTintTo::create(0.30000001, v49, v50, v49); /*0x4efb07*/
    cocos2d::CCNode::runAction(v32, v51); /*0x4efb13*/
    *(_WORD *)(a1 + 2080) = -1; /*0x4efb2f*/
    *(_BYTE *)(a1 + 2082) = -1; /*0x4efb3a*/
    *(_WORD *)(a1 + 2083) = -1; /*0x4efb3d*/
    *(_BYTE *)(a1 + 2085) = -1; /*0x4efb45*/
    (**(void (__fastcall ***)(__int64))(a1 + 320))(a1 + 320); /*0x4efb55*/
    PlayerObject_setSecondColor((_QWORD *)a1, a1 + 2083); /*0x4efb61*/
    *(_QWORD *)(a1 + 2064) = *(_QWORD *)(a1 + 2728); /*0x4efb6d*/
    *(_DWORD *)(a1 + 2072) = 1045220557; /*0x4efb74*/
    *(_DWORD *)(a1 + 2076) = 1036831949; /*0x4efb7e*/
    (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1640) + 320LL))( /*0x4efba0*/
      *(_QWORD *)(a1 + 1640) + 320LL,
      &word_6FF508);
    v52 = cocos2d::CCDelayTime::create(0.1); /*0x4efbb0*/
    v53 = cocos2d::CCTintTo::create(0.2, v30, BYTE1(v56), v31); /*0x4efbc8*/
    v54 = cocos2d::CCSequence::create(v52, v53, 0); /*0x4efbd7*/
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 1640), v54); /*0x4efbe7*/
  }
  cocos2d::CCPoint::operator=(a1 + 2612, &unk_905428); /*0x4efbfb*/
  v55 = *(_QWORD *)(a1 + 3112); /*0x4efc01*/
  if ( v55 ) /*0x4efc0b*/
    sub_337190(v55, 23, 0, *(unsigned int *)(a1 + 924)); /*0x4efc1c*/
}

// [9/80] Address: 0x4fecc0
// Method: PlayLayer::~PlayLayer
__int64 __fastcall PlayLayer__dtor_PlayLayer(_QWORD *a1)
{
  cocos2d::CCEGLView *v2; // rax
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  cocos2d::CCObject *v12; // rcx
  cocos2d::CCObject *v13; // rcx
  cocos2d::CCObject *v14; // rcx
  __int64 v15; // rax
  void *v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  __int64 v19; // rax

  *a1 = &PlayLayer::`vftable'; /*0x4fecd0*/
  a1[40] = &PlayLayer::`vftable'; /*0x4fecda*/
  a1[41] = &PlayLayer::`vftable'; /*0x4fece8*/
  a1[42] = &PlayLayer::`vftable'; /*0x4fecf6*/
  a1[43] = &PlayLayer::`vftable'; /*0x4fed04*/
  a1[44] = &PlayLayer::`vftable'; /*0x4fed12*/
  a1[51] = &PlayLayer::`vftable'; /*0x4fed20*/
  a1[1839] = &PlayLayer::`vftable'; /*0x4fed2e*/
  a1[1840] = &PlayLayer::`vftable'; /*0x4fed3c*/
  a1[1841] = &PlayLayer::`vftable'; /*0x4fed4a*/
  *(_BYTE *)(cocos2d::CCEGLView::sharedOpenGLView() + 237) = 0; /*0x4fed57*/
  v2 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(); /*0x4fed5e*/
  cocos2d::CCEGLView::showCursor(v2, 1); /*0x4fed69*/
  v3 = (cocos2d::CCObject *)a1[271]; /*0x4fed6f*/
  if ( v3 ) /*0x4fed79*/
    cocos2d::CCObject::release(v3); /*0x4fed7b*/
  v4 = (cocos2d::CCObject *)a1[1871]; /*0x4fed81*/
  if ( v4 ) /*0x4fed8b*/
    cocos2d::CCObject::release(v4); /*0x4fed8d*/
  v5 = (cocos2d::CCObject *)a1[1862]; /*0x4fed93*/
  if ( v5 ) /*0x4fed9d*/
    cocos2d::CCObject::release(v5); /*0x4fed9f*/
  v6 = (cocos2d::CCObject *)a1[449]; /*0x4feda5*/
  if ( v6 ) /*0x4fedaf*/
    cocos2d::CCObject::release(v6); /*0x4fedb1*/
  v7 = (cocos2d::CCObject *)a1[1889]; /*0x4fedb7*/
  if ( v7 ) /*0x4fedc1*/
    cocos2d::CCObject::release(v7); /*0x4fedc3*/
  v8 = (cocos2d::CCObject *)a1[448]; /*0x4fedc9*/
  if ( v8 ) /*0x4fedd3*/
    cocos2d::CCObject::release(v8); /*0x4fedd5*/
  v9 = (cocos2d::CCObject *)a1[1875]; /*0x4feddb*/
  if ( v9 ) /*0x4fede5*/
    cocos2d::CCObject::release(v9); /*0x4fede7*/
  v10 = (cocos2d::CCObject *)a1[1941]; /*0x4feded*/
  if ( v10 ) /*0x4fedf7*/
    cocos2d::CCObject::release(v10); /*0x4fedf9*/
  v11 = (cocos2d::CCObject *)a1[1877]; /*0x4fedff*/
  if ( v11 ) /*0x4fee09*/
    cocos2d::CCObject::release(v11); /*0x4fee0b*/
  v12 = (cocos2d::CCObject *)a1[1872]; /*0x4fee11*/
  if ( v12 ) /*0x4fee1b*/
    cocos2d::CCObject::release(v12); /*0x4fee1d*/
  v13 = (cocos2d::CCObject *)a1[1878]; /*0x4fee23*/
  if ( v13 ) /*0x4fee2d*/
    cocos2d::CCObject::release(v13); /*0x4fee2f*/
  v14 = (cocos2d::CCObject *)a1[1870]; /*0x4fee35*/
  if ( v14 ) /*0x4fee3f*/
    cocos2d::CCObject::release(v14); /*0x4fee41*/
  v15 = qword_905FD0; /*0x4fee47*/
  if ( !qword_905FD0 ) /*0x4fee51*/
  {
    v16 = operator new(0x6E8u); /*0x4fee58*/
    qword_905FD0 = sub_2723A0(v16); /*0x4fee65*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4fee76*/
    v15 = qword_905FD0; /*0x4fee78*/
  }
  if ( *(_QWORD **)(v15 + 560) == a1 ) /*0x4fee86*/
    *(_QWORD *)(v15 + 560) = 0; /*0x4fee88*/
  v17 = qword_905F60; /*0x4fee93*/
  if ( !qword_905F60 ) /*0x4fee9d*/
  {
    v18 = operator new(0x8A8u); /*0x4feea4*/
    qword_905F60 = sub_5AE20(v18); /*0x4feeb1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x4feec2*/
    v17 = qword_905F60; /*0x4feec4*/
  }
  *(_BYTE *)(v17 + 544) = 0; /*0x4feecb*/
  v19 = cocos2d::CCDirector::sharedDirector(); /*0x4feed2*/
  *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 176LL))(v19) + 156) = 0; /*0x4feee7*/
  sub_685C0(a1 + 1948); /*0x4feef5*/
  sub_685C0(a1 + 1945); /*0x4fef01*/
  sub_516CB0(a1 + 1942); /*0x4fef0d*/
  sub_3DA90(a1 + 1916); /*0x4fef19*/
  sub_3DB00(a1 + 1914); /*0x4fef25*/
  sub_685C0(a1 + 1909); /*0x4fef31*/
  sub_685C0(a1 + 1906); /*0x4fef3d*/
  sub_685C0(a1 + 1902); /*0x4fef49*/
  sub_685C0(a1 + 1895); /*0x4fef55*/
  sub_685C0(a1 + 1892); /*0x4fef61*/
  sub_410690(a1 + 1858); /*0x4fef6d*/
  sub_3DA90(a1 + 1855); /*0x4fef79*/
  sub_3DA90(a1 + 1852); /*0x4fef85*/
  sub_3DA90(a1 + 1849); /*0x4fef91*/
  sub_74F50(a1 + 1844); /*0x4fef9d*/
  return GJBaseGameLayer__dtor_GJBaseGameLayer(a1); /*0x4fefa5*/
}

// [11/80] Address: 0x501240
// Method: PlayLayer::shouldDrawDebugHitboxes
bool __fastcall PlayLayer_shouldDrawDebugHitboxes(_BYTE *a1)
{
  return a1[14536] && a1[13088] || a1[14538] && a1[13194]; /*0x501266*/
}

// [12/80] Address: 0x501270
// Method: PlayLayer::shouldDrawHitboxTrail
bool __fastcall PlayLayer_shouldDrawHitboxTrail(_BYTE *a1)
{
  return a1[14539] && a1[13088] || a1[14540] && a1[13194]; /*0x501296*/
}

// [13/80] Address: 0x5012a0
// Method: PlayLayer::shouldRecordHitboxTrail
bool __fastcall PlayLayer_shouldRecordHitboxTrail(__int64 a1)
{
  return *(_BYTE *)(a1 + 14539) || *(_BYTE *)(a1 + 14540); /*0x5012b4*/
}

// [14/80] Address: 0x501550
// Method: PlayLayer::updateTestModeLabel
// Hidden C++ exception states: #wind=1
void __fastcall PlayLayer_updateTestModeLabel(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  char *v6; // rax
  size_t v7; // r8
  char *v8; // rdx
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  void **v11; // rdx
  void *v12; // rcx
  void *Block[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  unsigned __int64 v15; // [rsp+48h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 14920); /*0x501573*/
  if ( !v3 ) /*0x50157d*/
    return; /*0x50157d*/
  if ( *(_BYTE *)(a1 + 14905) /*0x5015b2*/
    || (v4 = (_BYTE *)(a1 + 14906), *(_BYTE *)(a1 + 14906))
    || *(_BYTE *)(a1 + 13160)
    || *(float *)(a1 + 13728) != 1.0 )
  {
    LOBYTE(a2) = 1; /*0x5015b8*/
    v4 = (_BYTE *)(a1 + 14906); /*0x5015ba*/
  }
  else
  {
    a2 = 0; /*0x5015b4*/
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 336LL))(v3, a2); /*0x5015c4*/
  *(_OWORD *)Block = 0; /*0x5015cd*/
  v5 = 0; /*0x5015d1*/
  v14 = 0; /*0x5015d3*/
  v15 = 15; /*0x5015d7*/
  LOBYTE(Block[0]) = 0; /*0x5015df*/
  if ( *(_BYTE *)(a1 + 2210) ) /*0x5015e2*/
  {
    v5 = 13; /*0x5015ea*/
    qmemcpy(Block, "Ignore Damag", 12); /*0x5015f7*/
    WORD2(Block[1]) = (unsigned __int8)aIgnoreDamage[12]; /*0x50160c*/
LABEL_14:
    v14 = v5; /*0x501682*/
    goto LABEL_15; /*0x501682*/
  }
  if ( *(_BYTE *)(a1 + 14905) ) /*0x501615*/
  {
    v6 = (char *)sub_3C460(32); /*0x501623*/
    v14 = 18; /*0x501628*/
    v15 = 31; /*0x501630*/
    strcpy(v6, "Used Ignore Damage"); /*0x50163f*/
    Block[0] = v6; /*0x501651*/
    v5 = 18; /*0x501655*/
    goto LABEL_15; /*0x501659*/
  }
  if ( *(_BYTE *)(a1 + 13160) ) /*0x50165b*/
  {
    v5 = 8; /*0x501664*/
    strcpy((char *)Block, "Testmode"); /*0x501673*/
    v4 = (_BYTE *)(a1 + 14906); /*0x50167b*/
    goto LABEL_14; /*0x50167b*/
  }
LABEL_15:
  if ( *(float *)(a1 + 13728) != 1.0 || *v4 )
  {
    if ( v5 ) /*0x5016a5*/
      sub_43D80(Block, (void *)Delimiter, 1u); /*0x5016b8*/
    if ( *v4 && *(float *)(a1 + 13728) == 1.0 )
    {
      v7 = 17; /*0x5016d5*/
      v8 = "Used Speed Change"; /*0x5016db*/
    }
    else
    {
      v9 = cocos2d::CCString::createWithFormat("Speed: %.01fx", *(float *)(a1 + 13728));
      CString = cocos2d::CCString::getCString(v9); /*0x501704*/
      v7 = -1; /*0x50170a*/
      do /*0x501714*/
        ++v7; /*0x501711*/
      while ( CString[v7] ); /*0x501714*/
      v8 = (char *)CString; /*0x50171b*/
    }
    sub_43D80(Block, v8, v7); /*0x501722*/
  }
  v11 = Block; /*0x501727*/
  if ( v15 > 0xF ) /*0x501730*/
    v11 = (void **)Block[0]; /*0x501730*/
  (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 14920) + 360LL))(*(_QWORD *)(a1 + 14920) + 360LL, v11); /*0x501746*/
  if ( v15 > 0xF ) /*0x501751*/
  {
    v12 = Block[0]; /*0x501756*/
    if ( v15 + 1 >= 0x1000 ) /*0x501764*/
    {
      v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x50176a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x501779*/
        invoke_watson(0, 0, 0, 0, 0); /*0x50178e*/
    }
    j_j_free(v12); /*0x501795*/
  }
}

// [15/80] Address: 0x5017c0
// Method: PlayLayer::startGame
__int64 __fastcall PlayLayer_startGame(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = cocos2d::CCDirector::sharedDirector(); /*0x5017c9*/
  LOBYTE(v3) = 1; /*0x5017cf*/
  *(_BYTE *)(v2 + 178) = 1; /*0x5017d1*/
  v4 = *(_QWORD *)(a1 + 3576); /*0x5017d8*/
  *(_BYTE *)(a1 + 13208) = 1; /*0x5017df*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 336LL))(v4, v3); /*0x5017e9*/
  LOBYTE(v5) = 1; /*0x5017f6*/
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3584) + 336LL))(*(_QWORD *)(a1 + 3584), v5); /*0x5017fb*/
  if ( !*(_BYTE *)(a1 + 14893) ) /*0x501801*/
    result = PlayLayer_startMusic(a1); /*0x50180d*/
  *(_BYTE *)(a1 + 14893) = 0; /*0x501812*/
  return result; /*0x501819*/
}

// [19/80] Address: 0x5058d0
// Method: PlayLayer::updateTimeWarp
__int64 __fastcall PlayLayer_updateTimeWarp(__int64 a1, float a2)
{
  float v2; // xmm0_4
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 14000) ) /*0x5058d0*/
    a2 = 1.0; /*0x5058e1*/
  *(_DWORD *)(a1 + 820) = 0; /*0x5058f4*/
  v2 = fmaxf(0.1, fminf(a2, 2.0)); /*0x5058fe*/
  *(float *)(a1 + 816) = v2; /*0x505905*/
  if ( v2 == 1.0 ) /*0x50590f*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1320LL))(a1); /*0x505917*/
  return result; /*0x50591e*/
}

// [21/80] Address: 0x505e30
// Method: PlayLayer::spawnCircle
__int64 __fastcall PlayLayer_spawnCircle(__int64 a1)
{
  cocos2d::CCDirector *v2; // rax
  int v3; // r9d
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct cocos2d::CCPoint *v10; // rdx
  __int64 result; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x505e3d*/
  cocos2d::CCDirector::getScreenRight(v2); /*0x505e46*/
  LOBYTE(v3) = 1; /*0x505e54*/
  v7 = CCCircleWave_create(v5, v4, v6, v3, 1); /*0x505e6c*/
  *(_DWORD *)(v7 + 356) = 4; /*0x505e6f*/
  v8 = *(_QWORD *)(a1 + 3576); /*0x505e79*/
  *(_WORD *)(v7 + 340) = *(_WORD *)(v8 + 2706); /*0x505e87*/
  *(_BYTE *)(v7 + 342) = *(_BYTE *)(v8 + 2708); /*0x505e95*/
  if ( *(_BYTE *)(a1 + 12734) || (v9 = *(_QWORD *)(a1 + 13152)) == 0 || *(_QWORD *)(a1 + 15640) ) /*0x505eb0*/
    v10 = (const struct cocos2d::CCPoint *)(a1 + 15628); /*0x505ec8*/
  else
    v10 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 200LL))(v9); /*0x505ec3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, v10); /*0x505ed4*/
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 184LL))(v7, &v12); /*0x505ee5*/
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 4360) + 456LL))( /*0x505efb*/
             *(_QWORD *)(a1 + 4360),
             v7,
             0);
  *(_DWORD *)(v7 + 352) = 1; /*0x505f06*/
  return result; /*0x505f01*/
}

// [22/80] Address: 0x506250
// Method: PlayLayer::activatePlatformerEndTrigger
__int64 __fastcall PlayLayer_activatePlatformerEndTrigger(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // bl
  __int64 v10; // rax
  char v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+68h] [rbp+20h] BYREF

  result = *(_QWORD *)(a1 + 3576); /*0x50625a*/
  if ( !*(_BYTE *)(result + 2504) && !*(_BYTE *)(a1 + 14000) ) /*0x506274*/
  {
    *(_QWORD *)(a1 + 15640) = a2; /*0x506281*/
    v5 = *(unsigned int *)(a2 + 1480); /*0x506288*/
    if ( (int)v5 > 0 ) /*0x506290*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 408) + 8LL))(a1 + 408, v5, 0); /*0x5062bf*/
    v6 = *(_QWORD *)(a1 + 13952); /*0x5062c2*/
    *(_BYTE *)(a1 + 14000) = 1; /*0x5062cb*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 568) + 936LL))(*(_QWORD *)(v6 + 568), 0); /*0x5062dc*/
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 1208LL))(a2, &v11); /*0x5062ed*/
    if ( *(int *)(a2 + 1484) > 0 ) /*0x5062fb*/
    {
      v7 = sub_3287A0(a1); /*0x506300*/
      if ( v7 ) /*0x506308*/
      {
        v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 1208LL))(v7, &v12); /*0x50631c*/
        cocos2d::CCPoint::operator=(&v11, v8); /*0x506327*/
      }
    }
    v9 = *(_BYTE *)(a2 + 1858); /*0x50632d*/
    v10 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, (const struct cocos2d::CCPoint *)&v11); /*0x50633e*/
    return PlayLayer_playPlatformerEndAnimationToPos(a1, v10, v9); /*0x50634e*/
  }
  return result; /*0x506353*/
}

// [24/80] Address: 0x506680
// Method: PlayLayer::showEndLayer
// Hidden C++ exception states: #wind=2
__int64 __fastcall PlayLayer_showEndLayer(__int64 a1)
{
  cocos2d::CCEGLView *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 (__fastcall *v8)(_QWORD *, _QWORD); // r8

  *(_BYTE *)(cocos2d::CCEGLView::sharedOpenGLView() + 237) = 0; /*0x506698*/
  v2 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(); /*0x50669f*/
  cocos2d::CCEGLView::showCursor(v2, 1); /*0x5066aa*/
  PlayerObject_releaseAllButtons(*(_QWORD *)(a1 + 3576)); /*0x5066b7*/
  v3 = *(_QWORD *)(a1 + 3584); /*0x5066bc*/
  if ( v3 ) /*0x5066c6*/
    PlayerObject_releaseAllButtons(v3); /*0x5066c8*/
  v4 = *(_QWORD *)(a1 + 13952); /*0x5066cd*/
  *(_QWORD *)(v4 + 584) = -1; /*0x5066d4*/
  *(_WORD *)(v4 + 578) = 0; /*0x5066df*/
  *(_BYTE *)(v4 + 580) = 0; /*0x5066e8*/
  UILayer_resetUINodeState(); /*0x5066ef*/
  UILayer_toggleMenuVisibility(*(_QWORD *)(a1 + 13952), 0); /*0x5066fd*/
  *(_BYTE *)(a1 + 15381) = 1; /*0x506702*/
  v5 = operator new(0x2B0u); /*0x506713*/
  GJDropDownLayer_GJDropDownLayer(v5); /*0x50671e*/
  *v5 = &EndLevelLayer::`vftable'; /*0x50672b*/
  v5[40] = &EndLevelLayer::`vftable'; /*0x506735*/
  v5[41] = &EndLevelLayer::`vftable'; /*0x506743*/
  v5[42] = &EndLevelLayer::`vftable'; /*0x506751*/
  v5[43] = &EndLevelLayer::`vftable'; /*0x50675f*/
  v5[44] = &EndLevelLayer::`vftable'; /*0x50676d*/
  v5[51] = &EndLevelLayer::`vftable'; /*0x50677b*/
  v5[54] = &EndLevelLayer::`vftable'; /*0x506789*/
  v5[76] = 0; /*0x506792*/
  *((_DWORD *)v5 + 154) = 0; /*0x506799*/
  *((_WORD *)v5 + 310) = 0; /*0x50679f*/
  v5[78] = 0; /*0x5067a6*/
  v5[79] = 0; /*0x5067ad*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 80)); /*0x5067bb*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 81)); /*0x5067c8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 82)); /*0x5067d5*/
  v5[83] = 0; /*0x5067db*/
  v5[84] = 0; /*0x5067e2*/
  *((_BYTE *)v5 + 681) = 0; /*0x5067e9*/
  v5[76] = a1; /*0x5067f0*/
  LOBYTE(v6) = 1; /*0x5067f7*/
  if ( (unsigned __int8)GJDropDownLayer_init(v5, " ", v7, v6) ) /*0x50680c*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v5); /*0x506818*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1); /*0x506828*/
    v5 = 0; /*0x50682b*/
  }
  (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v5, 1001); /*0x50683d*/
  v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v5 + 1080LL); /*0x506846*/
  if ( (char *)v8 == (char *)EndLevelLayer_showLayer ) /*0x50685c*/
    return EndLevelLayer_showLayer(v5, 0); /*0x50686d*/
  else
    return v8(v5, 0); /*0x506881*/
}

// [25/80] Address: 0x506890
// Method: PlayLayer::showRetryLayer
// Hidden C++ exception states: #wind=1
__int64 __fastcall PlayLayer_showRetryLayer(__int64 a1)
{
  cocos2d::CCEGLView *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 (__fastcall *v8)(_QWORD *, _QWORD); // r8

  *(_BYTE *)(cocos2d::CCEGLView::sharedOpenGLView() + 237) = 0; /*0x5068a3*/
  v2 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(); /*0x5068aa*/
  cocos2d::CCEGLView::showCursor(v2, 1); /*0x5068b5*/
  PlayerObject_releaseAllButtons(*(_QWORD *)(a1 + 3576)); /*0x5068c2*/
  v3 = *(_QWORD *)(a1 + 3584); /*0x5068c7*/
  if ( v3 ) /*0x5068d1*/
    PlayerObject_releaseAllButtons(v3); /*0x5068d3*/
  v4 = *(_QWORD *)(a1 + 13952); /*0x5068d8*/
  *(_QWORD *)(v4 + 584) = -1; /*0x5068df*/
  *(_WORD *)(v4 + 578) = 0; /*0x5068ea*/
  *(_BYTE *)(v4 + 580) = 0; /*0x5068f3*/
  UILayer_resetUINodeState(); /*0x5068fa*/
  UILayer_toggleMenuVisibility(*(_QWORD *)(a1 + 13952), 0); /*0x506908*/
  *(_BYTE *)(a1 + 15381) = 1; /*0x50690d*/
  v5 = operator new(0x278u); /*0x50691e*/
  GJDropDownLayer_GJDropDownLayer(v5); /*0x506929*/
  *v5 = &RetryLevelLayer::`vftable'; /*0x506935*/
  v5[40] = &RetryLevelLayer::`vftable'; /*0x50693f*/
  v5[41] = &RetryLevelLayer::`vftable'; /*0x50694d*/
  v5[42] = &RetryLevelLayer::`vftable'; /*0x50695b*/
  v5[43] = &RetryLevelLayer::`vftable'; /*0x506969*/
  v5[44] = &RetryLevelLayer::`vftable'; /*0x506977*/
  v5[51] = &RetryLevelLayer::`vftable'; /*0x506985*/
  v5[54] = &RetryLevelLayer::`vftable'; /*0x506993*/
  v5[76] = &RetryLevelLayer::`vftable'; /*0x5069a1*/
  v5[77] = 0; /*0x5069a8*/
  *((_WORD *)v5 + 312) = 0; /*0x5069b3*/
  LOBYTE(v6) = 1; /*0x5069bc*/
  if ( (unsigned __int8)GJDropDownLayer_init(v5, " ", v7, v6) ) /*0x5069d1*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v5); /*0x5069dd*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1); /*0x5069ed*/
    v5 = 0; /*0x5069f0*/
  }
  (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v5, 100); /*0x506a01*/
  v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v5 + 1080LL); /*0x506a0a*/
  if ( (char *)v8 == (char *)RetryLevelLayer_showLayer ) /*0x506a20*/
    return RetryLevelLayer_showLayer(v5, 0); /*0x506a2c*/
  else
    return v8(v5, 0); /*0x506a3b*/
}

// [26/80] Address: 0x507d10
// Method: PlayLayer::addObject
void __fastcall PlayLayer_addObject(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128 v12; // xmm0
  __int64 v13; // rax
  float v14; // xmm6_4
  __int64 v15; // rax
  __m128 v16; // xmm0
  __int16 v17; // cx
  __int64 v18; // rax
  const struct cocos2d::CCPoint *v19; // rax
  float v20; // xmm6_4
  __int64 v21; // rax
  __int64 v22; // rdx
  float TeleportXOff; // xmm0_4
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  double v30; // xmm0_8
  float v31; // xmm1_4
  __int64 v32; // rax
  __int64 v33; // rax
  float v34; // xmm1_4
  int v35; // ecx
  __int64 v36; // rdx
  cocos2d::CCString *v37; // rax
  const char *CString; // rax
  struct cocos2d::CCObject *v39; // rdi
  __int64 v40; // rcx
  int v41; // eax
  int *v42; // rdx
  int v43; // ecx
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r8
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  unsigned __int8 v62; // al
  int v63; // ecx
  int v64; // edi
  const char *v65; // rcx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  __int64 v73; // r15
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rbx
  const struct cocos2d::CCPoint *v77; // rax
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rbx
  unsigned __int8 v81; // al
  __int64 v82; // rbx
  unsigned __int8 v83; // al
  __int64 v84; // rbx
  __int64 v85; // rbx
  float v86; // xmm0_4
  __int64 v87; // rax
  float v88; // xmm1_4
  float v89; // xmm0_4
  __int64 v90; // rax
  float v91; // xmm2_4
  __int64 v92; // r8
  int v93; // ecx
  int v94; // ecx
  int v95; // ecx
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  __m128 v99; // [rsp+20h] [rbp-60h]
  __m128 v100; // [rsp+30h] [rbp-50h] BYREF
  float v101; // [rsp+A8h] [rbp+28h] BYREF
  float v102; // [rsp+ACh] [rbp+2Ch]
  __int64 v103; // [rsp+B0h] [rbp+30h] BYREF

  if ( !a2 ) /*0x507d13*/
    return; /*0x507d13*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 25 ) /*0x507d53*/
    GameObject_determineSlopeDirection(a2); /*0x507d55*/
  else
    GameObject_updateIsOriented(a2); /*0x507d5c*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 336LL))(a2, 0); /*0x507d69*/
  if ( *(float *)(*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 1664LL))(a2, &v101) > *(float *)(a1 + 15040) ) /*0x507d8b*/
    *(_DWORD *)(a1 + 15040) = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 1664LL))( /*0x507d9f*/
                                           a2,
                                           &v101);
  v4 = *(_DWORD *)(a2 + 1036); /*0x507da6*/
  if ( v4 == 3613 /*0x507de7*/
    || v4 == 3662
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 20
    && (*(_DWORD *)(a2 + 1256) != 1 || !*(_BYTE *)(a2 + 1488))
    && *(_DWORD *)(a2 + 1036) != 2063 )
  {
    *(_DWORD *)(a2 + 632) = -1; /*0x507dfa*/
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1192LL))(a1, a2); /*0x507df2*/
  }
  if ( *(_DWORD *)(a2 + 1036) == 3663 ) /*0x507e0e*/
    *(_BYTE *)(a1 + 15296) = 1; /*0x507e10*/
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3600), (struct cocos2d::CCObject *)a2); /*0x507e22*/
  LOBYTE(v5) = 1; /*0x507e28*/
  sub_328160(a1, a2, v5); /*0x507e31*/
  if ( *(_DWORD *)(a2 + 1036) == 1615 ) /*0x507e40*/
  {
    v101 = *(float *)(a2 + 1696); /*0x507e4c*/
    v6 = *(_DWORD *)(a2 + 1916); /*0x507e4f*/
    v103 = a2; /*0x507e55*/
    if ( v6 < 0 ) /*0x507e5b*/
      v101 = *(float *)&v6; /*0x507e5d*/
    if ( *(_BYTE *)(a2 + 1920) ) /*0x507e60*/
    {
      v7 = sub_353880(a1 + 4504, &v100, &v101); /*0x507e78*/
      v8 = *(_QWORD *)v7 + 24LL; /*0x507e80*/
      v9 = *(_QWORD **)(*(_QWORD *)v7 + 32LL); /*0x507e84*/
      if ( v9 != *(_QWORD **)(*(_QWORD *)v7 + 40LL) ) /*0x507e8c*/
      {
        *v9 = a2; /*0x507e8e*/
        *(_QWORD *)(v8 + 8) += 8LL; /*0x507e91*/
        goto LABEL_29; /*0x507e96*/
      }
    }
    else
    {
      v10 = sub_353880(a1 + 4440, &v100, &v101); /*0x507e9f*/
      v8 = *(_QWORD *)v10 + 24LL; /*0x507ea7*/
      v9 = *(_QWORD **)(*(_QWORD *)v10 + 32LL); /*0x507eab*/
      if ( v9 != *(_QWORD **)(*(_QWORD *)v10 + 40LL) ) /*0x507eb3*/
      {
        *v9 = a2; /*0x507eb5*/
        *(_QWORD *)(v8 + 8) += 8LL; /*0x507eb8*/
        goto LABEL_29; /*0x507ebd*/
      }
    }
    sub_68840(v8, v9, &v103); /*0x507ec3*/
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 30 /*0x507eea*/
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 1648LL))(a2) == 31 )
  {
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 15024), (struct cocos2d::CCObject *)a2); /*0x507ef6*/
  }
LABEL_29:
  if ( *(_DWORD *)(a2 + 660) == 1012 ) /*0x507f04*/
  {
    v11 = *(_QWORD *)(a2 + 1272); /*0x507f20*/
    v100.m128_i16[6] = 256; /*0x507f2b*/
    v99.m128_u64[0] = 0x3F26666600000000LL; /*0x507f3a*/
    v99.m128_i32[2] = 1041865114; /*0x507f4f*/
    v12 = _mm_shuffle_ps(v99, v99, 147); /*0x507f5a*/
    v12.m128_f32[0] = v100.m128_f32[3]; /*0x507f5e*/
    LOWORD(v103) = *(_WORD *)(v11 + 327); /*0x507f62*/
    BYTE2(v103) = *(_BYTE *)(v11 + 329); /*0x507f75*/
    v99 = _mm_shuffle_ps(v12, v12, 57); /*0x507f78*/
    v100 = v99; /*0x507f7c*/
    v13 = GameToolbox_transformColor(&v101, &v103, &v100); /*0x507f81*/
    *(_WORD *)(a2 + 641) = *(_WORD *)v13; /*0x507f89*/
    *(_BYTE *)(a2 + 643) = *(_BYTE *)(v13 + 2); /*0x507f94*/
  }
  if ( *(_QWORD *)(a2 + 896) && *(_DWORD *)(a2 + 664) == 1012 ) /*0x507fb5*/
  {
    v100.m128_i16[6] = 256; /*0x507fd4*/
    v14 = v100.m128_f32[3]; /*0x507fdd*/
    v99.m128_u64[0] = 0x3F26666600000000LL; /*0x507fe2*/
    v99.m128_i32[2] = 1041865114; /*0x507ff0*/
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 320) + 8LL))(a2 + 320); /*0x507ff7*/
    v16 = _mm_shuffle_ps(v99, v99, 147); /*0x508002*/
    v16.m128_f32[0] = v14; /*0x50800a*/
    v17 = *(_WORD *)v15; /*0x50800e*/
    LOBYTE(v15) = *(_BYTE *)(v15 + 2); /*0x508011*/
    LOWORD(v103) = v17; /*0x508015*/
    v100 = _mm_shuffle_ps(v16, v16, 57); /*0x508021*/
    BYTE2(v103) = v15; /*0x508026*/
    v18 = GameToolbox_transformColor(&v101, &v103, &v100); /*0x508029*/
    *(_WORD *)(a2 + 641) = *(_WORD *)v18; /*0x508031*/
    *(_BYTE *)(a2 + 643) = *(_BYTE *)(v18 + 2); /*0x50803c*/
  }
  if ( *(_BYTE *)(a2 + 1260) /*0x50806c*/
    && *(_DWORD *)(a2 + 1256) == 1
    && (!*(_BYTE *)(a2 + 1488) && !*(_BYTE *)(a2 + 1489)
     || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1536LL))(a2)) )
  {
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3624), (struct cocos2d::CCObject *)a2); /*0x508080*/
  }
  if ( *(_BYTE *)(a1 + 12734) ) /*0x508086*/
    *(_BYTE *)(a2 + 712) = 0; /*0x508090*/
  if ( *(_DWORD *)(a2 + 1036) == 747 ) /*0x5080bd*/
  {
    v19 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2); /*0x5080c9*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v101, v19); /*0x5080d6*/
    v20 = *(float *)(a2 + 1876); /*0x5080e2*/
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2); /*0x5080ea*/
    v22 = *(_QWORD *)(a1 + 2856); /*0x5080f0*/
    v102 = v20 + *(float *)(v21 + 4); /*0x5080ff*/
    TeleportXOff = TeleportPortalObject_getTeleportXOff(a2, v22); /*0x508104*/
    v101 = v101 + TeleportXOff; /*0x50811b*/
    v24 = sub_64E910("portal_16_front_001.png", 0); /*0x508120*/
    *(_QWORD *)(a2 + 1864) = v24; /*0x508125*/
    v25 = v24; /*0x50812c*/
    v26 = *(_QWORD *)v24; /*0x50812f*/
    *(_DWORD *)(v24 + 1036) = 749; /*0x508132*/
    (*(void (__fastcall **)(__int64))(v26 + 1112))(v24); /*0x508146*/
    v27 = *(_QWORD *)v25; /*0x508148*/
    v28 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, (const struct cocos2d::CCPoint *)&v101); /*0x508153*/
    (*(void (__fastcall **)(__int64, __int64))(v27 + 1216))(v25, v28); /*0x50815f*/
    *(_BYTE *)(v25 + 1060) = 1; /*0x508165*/
    *(_DWORD *)(v25 + 1136) = *(_DWORD *)(a2 + 1136); /*0x508175*/
    *(_DWORD *)(v25 + 1056) = *(_DWORD *)(a2 + 1056); /*0x508181*/
    LOBYTE(v29) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1272LL))(a2) == 0; /*0x508198*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 1088LL))(v25, v29); /*0x50819b*/
    *(_BYTE *)(v25 + 1004) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1272LL))(a2) == 0; /*0x5081b5*/
    *(_BYTE *)(v25 + 1050) = *(_BYTE *)(a2 + 1050); /*0x5081c2*/
    *(_BYTE *)(v25 + 1051) = *(_BYTE *)(a2 + 1051); /*0x5081cf*/
    *(_BYTE *)(v25 + 1052) = *(_BYTE *)(a2 + 1052); /*0x5081dc*/
    v30 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2); /*0x5081e5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 352LL))(v25); /*0x5081f7*/
    *(_DWORD *)(v25 + 980) = LODWORD(v30); /*0x508200*/
    *(_DWORD *)(v25 + 984) = LODWORD(v30); /*0x50820b*/
    GameObject_copyGroups(v25, a2); /*0x508213*/
    v31 = (float)(int)roundf(*(float *)(a2 + 1160) * 1000.0) / 1000.0; /*0x508235*/
    *(float *)(v25 + 1160) = v31; /*0x508239*/
    v32 = *(_QWORD *)v25; /*0x508241*/
    *(float *)(v25 + 996) = v31; /*0x508247*/
    *(_DWORD *)(v25 + 64) = 0; /*0x508253*/
    (*(void (__fastcall **)(__int64))(v32 + 1288))(v25); /*0x508257*/
    *(_BYTE *)(v25 + 848) = 1; /*0x50825d*/
    *(_BYTE *)(v25 + 872) = 1; /*0x508264*/
    *(float *)&v30 = roundf(*(float *)(a2 + 1164) * 1000.0); /*0x508277*/
    *(_DWORD *)(v25 + 68) = 0; /*0x508280*/
    v33 = *(_QWORD *)v25; /*0x50828c*/
    v34 = (float)(int)*(float *)&v30 / 1000.0; /*0x508292*/
    *(float *)(v25 + 1164) = v34; /*0x508296*/
    *(float *)(v25 + 1000) = v34; /*0x50829e*/
    (*(void (__fastcall **)(__int64))(v33 + 1296))(v25); /*0x5082aa*/
    *(_BYTE *)(v25 + 848) = 1; /*0x5082b0*/
    *(_BYTE *)(v25 + 872) = 1; /*0x5082b7*/
    *(_DWORD *)(v25 + 1328) = *(_DWORD *)(a2 + 1328); /*0x5082c4*/
    *(_DWORD *)(v25 + 1332) = *(_DWORD *)(a2 + 1332); /*0x5082d0*/
    if ( *(_BYTE *)(a2 + 1302) ) /*0x5082d6*/
      *(_BYTE *)(v25 + 1302) = 1; /*0x5082df*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 1464LL))(v25); /*0x5082ec*/
    PlayLayer_addObject(a1, v25); /*0x5082f8*/
  }
  v35 = *(_DWORD *)(a2 + 1036); /*0x5082fd*/
  if ( v35 <= 286 ) /*0x508315*/
  {
    if ( v35 != 286 ) /*0x50831b*/
    {
      switch ( v35 ) /*0x508345*/
      {
        case 10: /*0x508345*/
        case 11: /*0x508345*/
        case 12: /*0x508345*/
        case 13: /*0x508345*/
        case 45: /*0x508345*/
        case 46: /*0x508345*/
        case 47: /*0x508345*/
        case 99: /*0x508345*/
        case 101: /*0x508345*/
        case 111: /*0x508345*/
          goto LABEL_93;
        case 15: /*0x508345*/
        case 16: /*0x508345*/
        case 17: /*0x508345*/
          v36 = *(unsigned int *)(a1 + 15036); /*0x508347*/
          if ( (int)v36 < 0 ) /*0x50835c*/
            v36 = 0; /*0x50835c*/
          if ( (int)v36 > 3 ) /*0x508362*/
            v36 = 3; /*0x508362*/
          v37 = cocos2d::CCString::createWithFormat("rod_ball_%02d_001.png", v36); /*0x508365*/
          CString = cocos2d::CCString::getCString(v37); /*0x50836e*/
          v39 = (struct cocos2d::CCObject *)GameObject_createWithFrame(CString); /*0x50837c*/
          v40 = *(_QWORD *)v39; /*0x50837f*/
          *((_DWORD *)v39 + 259) = 37; /*0x508382*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(v40 + 1112))(v39); /*0x508396*/
          v41 = *(_DWORD *)(a2 + 660); /*0x508398*/
          if ( v41 != 1004 ) /*0x5083a3*/
          {
            v42 = (int *)*((_QWORD *)v39 + 138); /*0x5083a5*/
            if ( v42 ) /*0x5083af*/
            {
              v43 = 1101; /*0x5083b3*/
              if ( v41 < 0 ) /*0x5083b8*/
                v41 = 0; /*0x5083b8*/
              if ( v41 <= 1101 ) /*0x5083be*/
                v43 = v41; /*0x5083c2*/
              *v42 = v43; /*0x5083ce*/
            }
          }
          v44 = *(_QWORD **)(a2 + 1104); /*0x5083d0*/
          if ( v44 ) /*0x5083da*/
            *v44 = 0; /*0x5083dc*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1464LL))(a2); /*0x5083e5*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 1464LL))(v39); /*0x5083f1*/
          *(_QWORD *)(a2 + 1328) = 0; /*0x5083f7*/
          *((_QWORD *)v39 + 166) = 0; /*0x508402*/
          v45 = cocos2d::CCPoint::CCPoint( /*0x508429*/
                  (cocos2d::CCPoint *)&v103,
                  *(float *)(a2 + 432) * 0.5,
                  *(float *)(a2 + 436) + 10.0);
          cocos2d::CCNode::convertToWorldSpace(a2, &v101, v45); /*0x508439*/
          v46 = *(_QWORD *)v39; /*0x50844a*/
          v47 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 2864), &v103, &v101); /*0x508451*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v46 + 1216))(v39, v47); /*0x50845d*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 160LL))(v39); /*0x508471*/
          (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)a1 + 1192LL))(a1, v39); /*0x508480*/
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3600), v39); /*0x508490*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v39 + 336LL))(v39, 0); /*0x50849e*/
          GameObject_copyGroups(v39, a2); /*0x5084aa*/
          LOBYTE(v48) = 1; /*0x5084af*/
          sub_328160(a1, v39, v48); /*0x5084b8*/
          break; /*0x5084bd*/
        case 29: /*0x508345*/
        case 30: /*0x508345*/
        case 105: /*0x508345*/
          goto LABEL_77;
        case 31: /*0x508345*/
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 12984), (struct cocos2d::CCObject *)a2); /*0x5084cc*/
          break; /*0x5084d2*/
        case 36: /*0x508345*/
        case 84: /*0x508345*/
        case 141: /*0x508345*/
          goto LABEL_89;
        default:
          goto LABEL_131;
      }
      goto LABEL_131;
    }
LABEL_93:
    if ( *(_BYTE *)(a2 + 1302) ) /*0x50861b*/
      goto LABEL_131; /*0x508622*/
    v62 = GJBaseGameLayer_addGuideArt(a1, a2); /*0x508633*/
    v63 = *(_DWORD *)(a2 + 1036); /*0x508638*/
    v64 = v62; /*0x50863e*/
    if ( v63 <= 286 ) /*0x508647*/
    {
      if ( v63 == 286 ) /*0x50864d*/
      {
        v65 = "portal_11_back_001.png"; /*0x5086ea*/
      }
      else
      {
        switch ( v63 ) /*0x508670*/
        {
          case 11: /*0x508670*/
            v65 = "portal_02_back_001.png"; /*0x50867e*/
            break; /*0x508685*/
          case 12: /*0x508670*/
            v65 = "portal_03_back_001.png"; /*0x50868a*/
            break; /*0x508691*/
          case 13: /*0x508670*/
            v65 = "portal_04_back_001.png"; /*0x508696*/
            break; /*0x50869d*/
          case 45: /*0x508670*/
            v65 = "portal_05_back_001.png"; /*0x5086a2*/
            break; /*0x5086a9*/
          case 46: /*0x508670*/
            v65 = "portal_06_back_001.png"; /*0x5086ae*/
            break; /*0x5086b5*/
          case 47: /*0x508670*/
            v65 = "portal_07_back_001.png"; /*0x5086ba*/
            break; /*0x5086c1*/
          case 99: /*0x508670*/
            v65 = "portal_08_back_001.png"; /*0x5086c6*/
            break; /*0x5086cd*/
          case 101: /*0x508670*/
            v65 = "portal_09_back_001.png"; /*0x5086d2*/
            break; /*0x5086d9*/
          case 111: /*0x508670*/
            v65 = "portal_10_back_001.png"; /*0x5086de*/
            break; /*0x5086e5*/
          default:
            goto LABEL_97;
        }
      }
      goto LABEL_128; /*0x5086e5*/
    }
    if ( v63 > 1331 ) /*0x5086fc*/
    {
      v70 = v63 - 1933; /*0x508750*/
      if ( !v70 ) /*0x508756*/
      {
        v65 = "portal_18_back_001.png"; /*0x508788*/
        goto LABEL_128; /*0x508788*/
      }
      v71 = v70 - 131; /*0x508758*/
      if ( !v71 ) /*0x50875e*/
        goto LABEL_115; /*0x50875e*/
      v72 = v71 - 838; /*0x508760*/
      if ( v72 ) /*0x508766*/
      {
        if ( v72 == 24 ) /*0x50876b*/
          v65 = "portal_19_back_001.png"; /*0x508776*/
        else
          v65 = "portal_01_back_001.png"; /*0x50876d*/
        goto LABEL_128; /*0x508774*/
      }
    }
    else
    {
      if ( v63 == 1331 ) /*0x5086fe*/
      {
        v65 = "portal_17_back_001.png"; /*0x508747*/
        goto LABEL_128; /*0x50874e*/
      }
      v66 = v63 - 287; /*0x508700*/
      if ( !v66 ) /*0x508706*/
      {
        v65 = "portal_12_back_001.png"; /*0x50873e*/
        goto LABEL_128; /*0x508745*/
      }
      v67 = v66 - 373; /*0x508708*/
      if ( !v67 ) /*0x50870e*/
      {
        v65 = "portal_13_back_001.png"; /*0x508735*/
        goto LABEL_128; /*0x50873c*/
      }
      v68 = v67 - 85; /*0x508710*/
      if ( !v68 ) /*0x508713*/
      {
        v65 = "portal_14_back_001.png"; /*0x50872c*/
        goto LABEL_128; /*0x508733*/
      }
      v69 = v68 - 2; /*0x508715*/
      if ( v69 ) /*0x508718*/
      {
        if ( v69 != 2 ) /*0x50871d*/
        {
LABEL_97:
          v65 = "portal_01_back_001.png"; /*0x508672*/
LABEL_128:
          v73 = GameObject_createWithFrame(v65); /*0x50878f*/
          v74 = *(_QWORD *)v73; /*0x50879c*/
          *(_DWORD *)(v73 + 1036) = 38; /*0x50879f*/
          (*(void (__fastcall **)(__int64, __int64))(v74 + 1656))(v73, 7); /*0x5087b3*/
          v75 = *(_QWORD *)v73; /*0x5087b6*/
          *(_BYTE *)(v73 + 1298) = 1; /*0x5087b9*/
          (*(void (__fastcall **)(__int64))(v75 + 1112))(v73); /*0x5087cb*/
          v76 = *(_QWORD *)v73; /*0x5087d0*/
          v77 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2); /*0x5087dd*/
          v78 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v101, v77); /*0x5087e6*/
          (*(void (__fastcall **)(__int64, __int64))(v76 + 1216))(v73, v78); /*0x5087f2*/
          *(_BYTE *)(v73 + 1060) = 1; /*0x5087f8*/
          *(_DWORD *)(v73 + 1124) = 4; /*0x508800*/
          v79 = *(_DWORD *)(a2 + 1136); /*0x50880b*/
          if ( !v79 ) /*0x508813*/
            v79 = *(_DWORD *)(a2 + 1056); /*0x508815*/
          v80 = *(_QWORD *)v73; /*0x50881b*/
          *(_DWORD *)(v73 + 1056) = v64 + v79 - 100; /*0x508826*/
          v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1272LL))(a2); /*0x508830*/
          (*(void (__fastcall **)(__int64, _QWORD))(v80 + 1088))(v73, v81); /*0x50883c*/
          v82 = *(_QWORD *)v73; /*0x508848*/
          v83 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1280LL))(a2); /*0x50884b*/
          (*(void (__fastcall **)(__int64, _QWORD))(v82 + 1096))(v73, v83); /*0x508857*/
          v84 = *(_QWORD *)v73; /*0x508863*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 376LL))(a2); /*0x508866*/
          (*(void (__fastcall **)(__int64))(v84 + 368))(v73); /*0x508872*/
          v85 = *(_QWORD *)v73; /*0x50887e*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 392LL))(a2); /*0x508881*/
          (*(void (__fastcall **)(__int64))(v85 + 384))(v73); /*0x50888d*/
          *(_DWORD *)(v73 + 980) = *(_DWORD *)(a2 + 980); /*0x508899*/
          *(_DWORD *)(v73 + 984) = *(_DWORD *)(a2 + 984); /*0x5088a6*/
          *(_BYTE *)(v73 + 1004) = *(_BYTE *)(a2 + 1004); /*0x5088b4*/
          *(_BYTE *)(v73 + 1005) = *(_BYTE *)(a2 + 1005); /*0x5088c2*/
          v86 = roundf(*(float *)(a2 + 1160) * 1000.0); /*0x5088d5*/
          *(_DWORD *)(v73 + 64) = 0; /*0x5088de*/
          v87 = *(_QWORD *)v73; /*0x5088ea*/
          v88 = (float)(int)v86 / 1000.0; /*0x5088f0*/
          *(float *)(v73 + 1160) = v88; /*0x5088f4*/
          *(float *)(v73 + 996) = v88; /*0x5088fd*/
          (*(void (__fastcall **)(__int64))(v87 + 1288))(v73); /*0x50890a*/
          *(_BYTE *)(v73 + 848) = 1; /*0x508910*/
          *(_BYTE *)(v73 + 872) = 1; /*0x508918*/
          v89 = roundf(*(float *)(a2 + 1164) * 1000.0); /*0x50892c*/
          *(_DWORD *)(v73 + 68) = 0; /*0x508936*/
          v90 = *(_QWORD *)v73; /*0x508945*/
          v91 = (float)(int)v89 / 1000.0; /*0x50894b*/
          *(float *)(v73 + 1164) = v91; /*0x50894f*/
          *(float *)(v73 + 1000) = v91; /*0x508958*/
          (*(void (__fastcall **)(__int64))(v90 + 1296))(v73); /*0x508961*/
          *(_BYTE *)(v73 + 848) = 1; /*0x508967*/
          *(_BYTE *)(v73 + 872) = 1; /*0x50896f*/
          *(_DWORD *)(v73 + 988) = *(_DWORD *)(a2 + 988); /*0x50897d*/
          *(_DWORD *)(v73 + 992) = *(_DWORD *)(a2 + 992); /*0x50898a*/
          *(_BYTE *)(v73 + 1050) = *(_BYTE *)(a2 + 1050); /*0x508998*/
          *(_BYTE *)(v73 + 1051) = *(_BYTE *)(a2 + 1051); /*0x5089a6*/
          *(_BYTE *)(v73 + 1052) = *(_BYTE *)(a2 + 1052); /*0x5089b4*/
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1192LL))(a1, v73); /*0x5089c4*/
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3600), (struct cocos2d::CCObject *)v73); /*0x5089d4*/
          GameObject_copyGroups(v73, a2); /*0x5089e0*/
          LOBYTE(v92) = 1; /*0x5089e5*/
          sub_328160(a1, v73, v92); /*0x5089ee*/
          *(_BYTE *)(a2 + 1060) = 1; /*0x5089f6*/
          *(_DWORD *)(a2 + 1056) = v64 + 12; /*0x5089fd*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 1464LL))(v73); /*0x508a09*/
          *(_DWORD *)(v73 + 1328) = *(_DWORD *)(a2 + 1328); /*0x508a15*/
          *(_DWORD *)(v73 + 1332) = *(_DWORD *)(a2 + 1332); /*0x508a22*/
          goto LABEL_131; /*0x508a22*/
        }
LABEL_115:
        v65 = "portal_16_back_001.png"; /*0x508723*/
        goto LABEL_128; /*0x50872a*/
      }
    }
    v65 = "portal_15_back_001.png"; /*0x50877f*/
    goto LABEL_128; /*0x508786*/
  }
  if ( v35 <= 1022 ) /*0x5084dd*/
  {
    if ( v35 != 1022 ) /*0x5084e3*/
    {
      if ( v35 > 747 ) /*0x5084ef*/
      {
        v52 = v35 - 749; /*0x508522*/
        if ( !v52 ) /*0x508528*/
          goto LABEL_93; /*0x508528*/
        v53 = v52 - 150; /*0x50852e*/
        if ( v53 ) /*0x508534*/
        {
          v54 = v53 - 1; /*0x508536*/
          if ( v54 ) /*0x508539*/
          {
            if ( v54 != 15 ) /*0x50853e*/
              goto LABEL_131; /*0x50853e*/
          }
        }
      }
      else
      {
        if ( v35 == 747 ) /*0x5084f1*/
          goto LABEL_93; /*0x5084f1*/
        v49 = v35 - 287; /*0x5084f7*/
        if ( !v49 ) /*0x5084fd*/
          goto LABEL_93; /*0x5084fd*/
        v50 = v49 - 373; /*0x508503*/
        if ( !v50 ) /*0x508509*/
          goto LABEL_93; /*0x508509*/
        v51 = v50 - 84; /*0x50850f*/
        if ( v51 ) /*0x508512*/
        {
          if ( v51 != 1 ) /*0x508517*/
            goto LABEL_131; /*0x508517*/
          goto LABEL_93; /*0x508517*/
        }
      }
LABEL_77:
      if ( *(_BYTE *)(a2 + 1501) ) /*0x508544*/
      {
        v55 = *(_QWORD *)(a1 + 3576); /*0x50854d*/
        *(_WORD *)(a2 + 1465) = *(_WORD *)(v55 + 2706); /*0x50855b*/
        *(_BYTE *)(a2 + 1467) = *(_BYTE *)(v55 + 2708); /*0x508569*/
      }
      else if ( *(_BYTE *)(a2 + 1502) ) /*0x508574*/
      {
        v56 = *(_QWORD *)(a1 + 3576); /*0x508581*/
        *(_WORD *)(a2 + 1465) = *(_WORD *)(v56 + 2709); /*0x50858f*/
        *(_BYTE *)(a2 + 1467) = *(_BYTE *)(v56 + 2711); /*0x50859d*/
      }
      goto LABEL_131; /*0x50856f*/
    }
    goto LABEL_89; /*0x5084e3*/
  }
  if ( v35 > 1933 ) /*0x5085ae*/
  {
    v60 = v35 - 2064; /*0x508602*/
    if ( v60 ) /*0x508608*/
    {
      v61 = v60 - 838; /*0x50860a*/
      if ( v61 ) /*0x508610*/
      {
        if ( v61 != 24 ) /*0x508615*/
          goto LABEL_131; /*0x508615*/
      }
    }
    goto LABEL_93; /*0x508615*/
  }
  if ( v35 == 1933 ) /*0x5085b0*/
    goto LABEL_93; /*0x5085b0*/
  v57 = v35 - 1330; /*0x5085b2*/
  if ( !v57 ) /*0x5085b8*/
    goto LABEL_89; /*0x5085b8*/
  v58 = v57 - 1; /*0x5085ba*/
  if ( !v58 ) /*0x5085bd*/
    goto LABEL_93; /*0x5085bd*/
  v59 = v58 - 2; /*0x5085bf*/
  if ( !v59 ) /*0x5085c2*/
  {
LABEL_89:
    GJBaseGameLayer_addGuideArt(a1, a2); /*0x5085f2*/
    goto LABEL_131; /*0x5085fd*/
  }
  if ( v59 == 483 && *(_BYTE *)(a2 + 1693) ) /*0x5085d0*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3608), (struct cocos2d::CCObject *)a2); /*0x5085e7*/
LABEL_131:
  v93 = *(_DWORD *)(a2 + 1036); /*0x508a2e*/
  if ( v93 > 1934 ) /*0x508a5a*/
  {
    v95 = v93 - 1935; /*0x508a8e*/
    if ( !v95 ) /*0x508a94*/
      goto LABEL_146; /*0x508a94*/
    v96 = v95 - 965; /*0x508a96*/
    if ( !v96 ) /*0x508a9c*/
      goto LABEL_146; /*0x508a9c*/
    v97 = v96 - 2; /*0x508a9e*/
    if ( !v97 ) /*0x508aa1*/
      goto LABEL_146; /*0x508aa1*/
    v98 = v97 - 120; /*0x508aa3*/
    if ( !v98 || v98 == 5 ) /*0x508aab*/
      goto LABEL_146; /*0x508aab*/
  }
  else
  {
    if ( v93 == 1934 ) /*0x508a5c*/
      goto LABEL_146; /*0x508a5c*/
    if ( v93 <= 203 ) /*0x508a64*/
    {
      if ( v93 != 203 ) /*0x508a66*/
      {
        v94 = v93 - 200; /*0x508a68*/
        if ( v94 ) /*0x508a6e*/
        {
          if ( (unsigned int)(v94 - 1) >= 2 ) /*0x508a73*/
            goto LABEL_147; /*0x508a73*/
        }
      }
LABEL_146:
      if ( *(_BYTE *)(a2 + 1784) ) /*0x508aad*/
      {
LABEL_150:
        EffectGameObject_updateSpeedModType(a2); /*0x508ad1*/
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 14976), (struct cocos2d::CCObject *)a2); /*0x508ae3*/
        return; /*0x508ae3*/
      }
      goto LABEL_147; /*0x508ab4*/
    }
    if ( v93 == 1334 || v93 == 1917 ) /*0x508a8a*/
      goto LABEL_146; /*0x508a8a*/
  }
LABEL_147:
  if ( *(_DWORD *)(a2 + 1256) == 1 && *(_BYTE *)(a2 + 1796) && *(_BYTE *)(a2 + 1784) ) /*0x508ac8*/
    goto LABEL_150; /*0x508acf*/
}

// [27/80] Address: 0x509250
// Method: PlayLayer::processLoadedMoveActions
// Hidden C++ exception states: #wind=3
__int64 __fastcall PlayLayer_processLoadedMoveActions(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *i; // rbx
  int v6; // eax
  __int64 v7; // rsi
  struct cocos2d::CCObject *v8; // rdi
  unsigned int *v9; // rsi
  __int64 v10; // rax
  double **v11; // rsi
  double **j; // rbp
  double *v13; // rdi
  double v14; // xmm1_8
  __int64 v15; // rdx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v19[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h]
  char v24; // [rsp+98h] [rbp+10h] BYREF

  v19[1] = 0; /*0x509279*/
  v2 = operator new(0x28u); /*0x509283*/
  *v2 = v2; /*0x509288*/
  v2[1] = v2; /*0x50928b*/
  v19[0] = v2; /*0x50928f*/
  v20 = 0; /*0x509294*/
  v21 = 0; /*0x50929c*/
  v22 = 7; /*0x5092a2*/
  v23 = 8; /*0x5092ab*/
  v18 = 1065353216; /*0x5092b4*/
  sub_3E200(&v20, 16, v2); /*0x5092c9*/
  GJEffectManager_getLoadedMoveOffset(*(_QWORD *)(a1 + 2472), &v18); /*0x5092db*/
  for ( i = *(__int64 **)v19[0]; i != (__int64 *)v19[0]; i = (__int64 *)*i ) /*0x5092eb*/
  {
    v6 = *((_DWORD *)i + 4); /*0x509300*/
    if ( v6 > 9999 ) /*0x509306*/
      v6 = 9999; /*0x509306*/
    if ( v6 < 0 ) /*0x50930c*/
      v6 = 0; /*0x50930c*/
    v7 = (unsigned int)v6; /*0x509310*/
    v8 = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 3960) + 8LL * (unsigned int)v6); /*0x509319*/
    if ( !v8 ) /*0x509320*/
    {
      v8 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v4); /*0x509328*/
      cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 3936), v8, (unsigned int)v7); /*0x509338*/
      v4 = *(_QWORD *)(a1 + 3960); /*0x50933e*/
      *(_QWORD *)(v4 + 8 * v7) = v8; /*0x509345*/
      if ( !v8 ) /*0x50934c*/
        continue; /*0x50934c*/
    }
    v9 = (unsigned int *)*((_QWORD *)v8 + 7); /*0x509352*/
    v10 = *v9; /*0x509356*/
    if ( (_DWORD)v10 ) /*0x50935a*/
    {
      v11 = (double **)*((_QWORD *)v9 + 2); /*0x509360*/
      for ( j = &v11[v10 - 1]; v11 <= j; ++v11 ) /*0x50936f*/
      {
        v13 = *v11; /*0x509380*/
        if ( !*v11 ) /*0x509380*/
          break; /*0x509386*/
        if ( !*((_BYTE *)v13 + 1352) ) /*0x50938c*/
        {
          v14 = *((double *)i + 4); /*0x509399*/
          if ( !*((_BYTE *)v13 + 712) ) /*0x5093a3*/
            v13[119] = *((double *)i + 3) + v13[119]; /*0x5093b4*/
          v13[120] = v14 + v13[120]; /*0x5093c4*/
          LOBYTE(v3) = 1; /*0x5093cf*/
          (*(void (__fastcall **)(double *, __int64))(*(_QWORD *)v13 + 1624LL))(v13, v3); /*0x5093d4*/
          *((_BYTE *)v13 + 848) = 1; /*0x5093da*/
          LOBYTE(v15) = 1; /*0x5093e4*/
          (*(void (__fastcall **)(double *, __int64))(*(_QWORD *)v13 + 1640LL))(v13, v15); /*0x5093e9*/
          (*(void (__fastcall **)(__int64, double *))(*(_QWORD *)a1 + 1216LL))(a1, v13); /*0x5093f8*/
          *((_DWORD *)v13 + 311) = -1; /*0x5093fe*/
          v16 = (*(__int64 (__fastcall **)(double *, char *))(*(_QWORD *)v13 + 1208LL))(v13, &v24); /*0x509416*/
          cocos2d::CCPoint::operator=(v13 + 154, v16); /*0x509426*/
        }
      }
    }
  }
  sub_3DA90(&v20); /*0x50944c*/
  return sub_36C0A0(v19); /*0x50945b*/
}

// [28/80] Address: 0x509480
// Method: PlayLayer::updateVisibility
// Hidden C++ exception states: #wind=1
__int64 __fastcall PlayLayer_updateVisibility(__int64 a1)
{
  float v2; // xmm3_4
  float v3; // xmm1_4
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int16 v7; // cx
  char v8; // dl
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rax
  __int16 v14; // bx
  unsigned __int8 v15; // di
  _DWORD *i; // rax
  int v17; // xmm6_4
  float v18; // xmm11_4
  cocos2d::CCDirector *v19; // rax
  __int64 v20; // r8
  float v21; // xmm13_4
  __int16 *v22; // rcx
  float v23; // xmm0_4
  __int64 v24; // rax
  int v25; // xmm8_4
  char v26; // al
  __int64 v27; // r15
  __int64 v28; // rdx
  const struct cocos2d::CCPoint *v29; // r14
  unsigned __int8 *v30; // rdi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r8
  int v33; // ecx
  _QWORD *v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // r14
  __int64 v38; // r12
  __int64 v39; // r13
  __int64 *v40; // rbx
  int v41; // ecx
  unsigned __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r12
  int v48; // ecx
  unsigned __int64 v49; // rdx
  int v50; // r9d
  _QWORD *v51; // r10
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // rax
  int v60; // ecx
  int v61; // r9d
  unsigned __int64 v62; // r8
  __int64 v63; // r11
  __int64 v64; // rcx
  char v65; // al
  __int64 v66; // rax
  __int16 v67; // dx
  bool v68; // r12
  __int64 v69; // rax
  unsigned int v70; // r15d
  int v71; // r13d
  __int64 v72; // rdx
  __int64 v73; // rcx
  cocos2d::CCArray *v74; // r14
  unsigned int j; // ebx
  struct cocos2d::CCObject *v76; // rax
  __int64 v77; // rdx
  int v78; // r9d
  float v79; // xmm1_4
  __int16 *v80; // rdx
  unsigned __int8 *v81; // rcx
  __int64 v82; // rax
  float v83; // xmm1_4
  cocos2d *v84; // rcx
  float v85; // xmm0_4
  __int64 v86; // rdx
  __int64 v87; // rcx
  int v88; // ebx
  __int64 v89; // rbx
  __int64 v90; // rax
  int v91; // r9d
  int v92; // r9d
  __int64 result; // rax
  __int16 v94; // [rsp+40h] [rbp-C0h] BYREF
  char v95; // [rsp+42h] [rbp-BEh]
  __int16 v96; // [rsp+50h] [rbp-B0h] BYREF
  char v97; // [rsp+52h] [rbp-AEh]
  __int16 v98; // [rsp+60h] [rbp-A0h] BYREF
  char v99; // [rsp+62h] [rbp-9Eh]
  float v100; // [rsp+68h] [rbp-98h] BYREF
  int v101; // [rsp+70h] [rbp-90h] BYREF
  int v102; // [rsp+74h] [rbp-8Ch]
  int v103; // [rsp+78h] [rbp-88h]
  int v104; // [rsp+7Ch] [rbp-84h]
  int v105; // [rsp+80h] [rbp-80h]
  void *v106; // [rsp+88h] [rbp-78h] BYREF
  int v107; // [rsp+94h] [rbp-6Ch]
  __int64 v108; // [rsp+98h] [rbp-68h]
  __int64 v109; // [rsp+A0h] [rbp-60h]
  float v110[42]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v111; // [rsp+190h] [rbp+90h] BYREF
  char v112; // [rsp+192h] [rbp+92h]
  __int16 v113; // [rsp+1A0h] [rbp+A0h] BYREF
  char v114; // [rsp+1A2h] [rbp+A2h]
  __int16 v115; // [rsp+1A8h] [rbp+A8h] BYREF
  char v116; // [rsp+1AAh] [rbp+AAh]

  v2 = *(float *)(a1 + 13212); /*0x5094e7*/
  v3 = *(float *)(a1 + 1292); /*0x5094ef*/
  *(float *)&dword_9037B4 = v3 + v2; /*0x5094fe*/
  if ( *(_BYTE *)(a1 + 15244) && (*(_QWORD *)(a1 + 2176) || *(_QWORD *)(a1 + 2184)) ) /*0x50951d*/
  {
    v2 = v2 + 40.0; /*0x509537*/
    cocos2d::CCRect::CCRect( /*0x509562*/
      (cocos2d::CCRect *)&v101,
      v3 - 20.0,
      *(float *)(a1 + 1296) - 20.0,
      v2,
      *(float *)(a1 + 13216) + 40.0);
    v4 = *(_QWORD *)(a1 + 2184); /*0x509568*/
    if ( v4 ) /*0x509572*/
      sub_1168E0(v4, &v101); /*0x509579*/
    v5 = *(_QWORD *)(a1 + 2176); /*0x50957e*/
    if ( v5 ) /*0x509588*/
      sub_1168E0(v5, &v101); /*0x50958f*/
  }
  PlayerObject_collidedWithObjectInternal(a1); /*0x50959b*/
  GJEffectManager_processColors(*(_QWORD *)(a1 + 2472)); /*0x5095a7*/
  v6 = sub_362560(*(_QWORD *)(a1 + 2472), 1005); /*0x5095b8*/
  if ( v6 ) /*0x5095c0*/
  {
    v7 = *(_WORD *)(v6 + 327); /*0x5095c2*/
    v8 = *(_BYTE *)(v6 + 329); /*0x5095c9*/
  }
  else
  {
    v7 = -1; /*0x5095d2*/
    v8 = -1; /*0x5095d9*/
  }
  v111 = v7; /*0x5095e0*/
  v112 = v8; /*0x5095e7*/
  GJEffectManager_calculateLightBGColor(*(_QWORD *)(a1 + 2472), &v111); /*0x5095fb*/
  v9 = cocos2d::CCDirector::sharedDirector(); /*0x509600*/
  cocos2d::CCDirector::getWinSize(v9, v110); /*0x50960d*/
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 4384) + 320LL) + 8LL))(*(_QWORD *)(a1 + 4384) + 320LL); /*0x509624*/
  LOWORD(v107) = 257; /*0x509627*/
  v101 = 0; /*0x509631*/
  v102 = -1097229926; /*0x509639*/
  v103 = 1053609165; /*0x509641*/
  v104 = v107; /*0x50964e*/
  GameToolbox_transformColor(&v94, v10, &v101); /*0x509661*/
  v11 = sub_362560(*(_QWORD *)(a1 + 2472), 1007); /*0x509672*/
  if ( v11 ) /*0x50967a*/
  {
    v115 = *(_WORD *)(v11 + 327); /*0x509683*/
    v12 = *(_BYTE *)(v11 + 329); /*0x50968a*/
  }
  else
  {
    v115 = -1; /*0x50969a*/
    v12 = -1; /*0x5096a1*/
  }
  v116 = v12; /*0x5096a8*/
  v13 = sub_362560(*(_QWORD *)(a1 + 2472), 1000); /*0x5096ba*/
  if ( v13 ) /*0x5096c2*/
  {
    v14 = *(_WORD *)(v13 + 327); /*0x5096c4*/
    v15 = *(_BYTE *)(v13 + 329); /*0x5096cb*/
  }
  else
  {
    v14 = -1; /*0x5096d4*/
    v15 = -1; /*0x5096db*/
  }
  v112 = v15; /*0x5096e2*/
  v111 = v14; /*0x5096e9*/
  LOWORD(v107) = 257; /*0x5096f0*/
  v101 = 0; /*0x5096f6*/
  v102 = -1102263091; /*0x5096fe*/
  v103 = 1045220557; /*0x509706*/
  v104 = v107; /*0x509713*/
  GameToolbox_transformColor(&v113, &v111, &v101); /*0x50972c*/
  *(_WORD *)(a1 + 13280) = v113; /*0x509738*/
  *(_BYTE *)(a1 + 13282) = v114; /*0x509746*/
  for ( i = *(_DWORD **)(a1 + 15584); i != *(_DWORD **)(a1 + 15592); ++i ) /*0x50975a*/
    *i = 0; /*0x509762*/
  v17 = 1056964608; /*0x509777*/
  v18 = (float)(v110[0] * 0.5) - 75.0; /*0x509784*/
  v19 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x50979a*/
  v21 = (float)(cocos2d::CCDirector::getScreenRight(v19) - (float)(v18 + 110.0)) - 90.0; /*0x5097b2*/
  v22 = &v115; /*0x5097e8*/
  if ( (float)((unsigned __int8)v14 + HIBYTE(v111) + v15) >= 150.0 ) /*0x5097fa*/
    v22 = &word_6FF514; /*0x5097fa*/
  v98 = *v22; /*0x509801*/
  v99 = *((_BYTE *)v22 + 2); /*0x50980a*/
  LOBYTE(v113) = *(_BYTE *)(*(_QWORD *)(a1 + 3576) + 2504LL); /*0x50981c*/
  v23 = *(float *)(a1 + 1052); /*0x509822*/
  LOBYTE(v111) = v23 != 0.0 && v23 != 1.0; /*0x509841*/
  if ( *(_BYTE *)(a1 + 15128) ) /*0x509851*/
  {
    v24 = qword_905F60; /*0x50985a*/
    if ( !qword_905F60 ) /*0x509864*/
    {
      v106 = operator new(0x8A8u); /*0x509870*/
      qword_905F60 = sub_5AE20(v106); /*0x50987d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x50988e*/
      v24 = qword_905F60; /*0x509890*/
    }
    v25 = *(_DWORD *)(v24 + 528); /*0x509897*/
  }
  else
  {
    v25 = *(_DWORD *)(*(_QWORD *)(a1 + 13232) + 580LL); /*0x5098a9*/
  }
  v26 = *(_BYTE *)(a1 + 13088); /*0x5098b2*/
  if ( v26 && !*(_BYTE *)(a1 + 13089) || *(_BYTE *)(a1 + 15008) ) /*0x5098c6*/
    v25 = 1056964608; /*0x5098cf*/
  if ( !v26 || *(_BYTE *)(a1 + 13089) ) /*0x5098d7*/
    v17 = v25; /*0x5098e0*/
  *(_DWORD *)(*(_QWORD *)(a1 + 3576) + 2740LL) = v17; /*0x5098eb*/
  *(_DWORD *)(*(_QWORD *)(a1 + 3584) + 2740LL) = v17; /*0x5098fa*/
  v27 = *(_QWORD *)(a1 + 15320); /*0x509902*/
  v108 = v27; /*0x509909*/
  v105 = 0; /*0x50990d*/
  if ( *(int *)(a1 + 13272) > 0 ) /*0x50991b*/
  {
    v28 = 0; /*0x509921*/
    v109 = 0; /*0x509923*/
    v29 = (const struct cocos2d::CCPoint *)(a1 + 14988); /*0x509927*/
    while ( 1 ) /*0x509957*/
    {
      v30 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 13248) + 8 * v28); /*0x509957*/
      v31 = *((int *)v30 + 332); /*0x50995b*/
      if ( (int)v31 <= 0 ) /*0x509964*/
      {
        v54 = *(_QWORD *)v30; /*0x509caf*/
        LOBYTE(v20) = 1; /*0x509cb2*/
        v55 = GameObject_colorForMode(v30, *((unsigned int *)v30 + 165), v20); /*0x509cbe*/
        (*(void (__fastcall **)(unsigned __int8 *, __int64))(v54 + 1432))(v30, v55); /*0x509cc9*/
        v2 = 1.0; /*0x509ccf*/
        if ( *((int *)v30 + 165) > 0 ) /*0x509cd9*/
        {
          v56 = (int)*(float *)(*((_QWORD *)v30 + 159) + 320LL); /*0x509ce2*/
          if ( (unsigned __int8)v56 < 0xFAu ) /*0x509ced*/
            v2 = (float)(unsigned __int8)v56 * 0.0040000002; /*0x509cf9*/
        }
        if ( *((__int16 *)v30 + 604) > 0 ) /*0x509d05*/
          v2 = v2 * GameObject_groupOpacityMod(v30); /*0x509d0f*/
        *(float *)(*((_QWORD *)v30 + 138) + 8LL) = v2; /*0x509d1a*/
        if ( *((_QWORD *)v30 + 112) ) /*0x509d1f*/
        {
          v57 = *((unsigned int *)v30 + 166); /*0x509d2d*/
          if ( (_DWORD)v57 || *((_WORD *)v30 + 588) ) /*0x509d37*/
          {
            v58 = *(_QWORD *)v30; /*0x509d44*/
            v59 = GameObject_colorForMode(v30, v57, 0); /*0x509d4d*/
            (*(void (__fastcall **)(unsigned __int8 *, __int64))(v58 + 1440))(v30, v59); /*0x509d58*/
            v2 = 1.0; /*0x509d5e*/
            if ( *((int *)v30 + 166) > 0 ) /*0x509d68*/
            {
              v60 = (int)*(float *)(*((_QWORD *)v30 + 160) + 320LL); /*0x509d71*/
              if ( (unsigned __int8)v60 < 0xFAu ) /*0x509d7c*/
                v2 = (float)(unsigned __int8)v60 * 0.0040000002; /*0x509d88*/
            }
            if ( *((__int16 *)v30 + 604) > 0 ) /*0x509d94*/
              v2 = v2 * GameObject_groupOpacityMod(v30); /*0x509d9e*/
            *(float *)(*((_QWORD *)v30 + 139) + 8LL) = v2; /*0x509da9*/
          }
        }
      }
      else
      {
        v32 = v31 >> 5; /*0x509970*/
        v33 = *(_DWORD *)(*(_QWORD *)(a1 + 15584) + 4 * ((v31 >> 5) + ((v31 - 32 * (v31 >> 5)) >> 5))); /*0x509997*/
        v34 = (_QWORD *)(a1 + 15536); /*0x50999a*/
        if ( _bittest(&v33, ((_BYTE)v31 - 32 * (unsigned __int8)(v31 >> 5)) & 0x1F) ) /*0x5099a4*/
        {
          v37 = (__int64 *)(a1 + 15560); /*0x509a7b*/
        }
        else
        {
          v35 = *v34 + 3LL * *((int *)v30 + 332); /*0x5099ae*/
          LOBYTE(v32) = 1; /*0x5099b1*/
          v36 = GameObject_colorForMode(v30, *((unsigned int *)v30 + 165), v32); /*0x5099bd*/
          *(_WORD *)v35 = *(_WORD *)v36; /*0x5099c5*/
          *(_BYTE *)(v35 + 2) = *(_BYTE *)(v36 + 2); /*0x5099cc*/
          v37 = (__int64 *)(a1 + 15560); /*0x5099cf*/
          v38 = *((int *)v30 + 332); /*0x5099d6*/
          v39 = *(_QWORD *)(a1 + 15560); /*0x5099dd*/
          v2 = 1.0; /*0x5099e0*/
          v40 = (__int64 *)(a1 + 15560); /*0x5099e3*/
          if ( *((int *)v30 + 165) > 0 ) /*0x5099ed*/
          {
            v41 = (int)*(float *)(*((_QWORD *)v30 + 159) + 320LL); /*0x5099f6*/
            if ( (unsigned __int8)v41 < 0xFAu ) /*0x509a01*/
            {
              v2 = (float)(unsigned __int8)v41 * 0.0040000002; /*0x509a0d*/
              v40 = (__int64 *)(a1 + 15560); /*0x509a11*/
            }
          }
          if ( *((__int16 *)v30 + 604) > 0 ) /*0x509a20*/
          {
            v2 = v2 * GameObject_groupOpacityMod(v30); /*0x509a2a*/
            v37 = v40; /*0x509a2e*/
          }
          *(float *)(v39 + 4 * v38) = v2; /*0x509a31*/
          v42 = ((unsigned __int64)*((int *)v30 + 332) >> 5) /*0x509a57*/
              + ((*((int *)v30 + 332) - 32 * ((unsigned __int64)*((int *)v30 + 332) >> 5)) >> 5);
          *(_DWORD *)(*(_QWORD *)(a1 + 15584) + 4 * v42) |= 1 << ((v30[1328] /*0x509a6c*/
                                                                 - 32 * ((unsigned __int64)*((int *)v30 + 332) >> 5))
                                                                & 0x1F);
        }
        (*(void (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)v30 + 1432LL))( /*0x509a96*/
          v30,
          *v34 + 3LL * *((int *)v30 + 332));
        *(_DWORD *)(*((_QWORD *)v30 + 138) + 8LL) = *(_DWORD *)(*v37 + 4LL * *((int *)v30 + 332)); /*0x509ab0*/
        if ( *((_QWORD *)v30 + 112) ) /*0x509ab3*/
        {
          v43 = *(_DWORD *)(*(_QWORD *)(a1 + 15584) /*0x509af2*/
                          + 4
                          * (((unsigned __int64)*((int *)v30 + 333) >> 5)
                           + ((*((int *)v30 + 333) - 32 * ((unsigned __int64)*((int *)v30 + 333) >> 5)) >> 5)));
          if ( !_bittest( /*0x509af8*/
                  &v43,
                  ((unsigned __int8)*((_DWORD *)v30 + 333)
                 - 32 * (unsigned __int8)((unsigned __int64)*((int *)v30 + 333) >> 5))
                & 0x1F) )
          {
            v44 = *v34 + 3LL * *((int *)v30 + 333); /*0x509b02*/
            v45 = GameObject_colorForMode(v30, *((unsigned int *)v30 + 166), 0); /*0x509b11*/
            *(_WORD *)v44 = *(_WORD *)v45; /*0x509b19*/
            *(_BYTE *)(v44 + 2) = *(_BYTE *)(v45 + 2); /*0x509b20*/
            v46 = *((int *)v30 + 333); /*0x509b23*/
            v47 = *v37; /*0x509b2a*/
            v2 = 1.0; /*0x509b2d*/
            if ( *((int *)v30 + 166) > 0 ) /*0x509b37*/
            {
              v48 = (int)*(float *)(*((_QWORD *)v30 + 160) + 320LL); /*0x509b40*/
              if ( (unsigned __int8)v48 < 0xFAu ) /*0x509b4b*/
              {
                v2 = (float)(unsigned __int8)v48 * 0.0040000002; /*0x509b57*/
                v34 = (_QWORD *)(a1 + 15536); /*0x509b5b*/
                v37 = (__int64 *)(a1 + 15560); /*0x509b62*/
              }
            }
            if ( *((__int16 *)v30 + 604) > 0 ) /*0x509b71*/
              v2 = v2 * GameObject_groupOpacityMod(v30); /*0x509b7b*/
            *(float *)(v47 + 4 * v46) = v2; /*0x509b7f*/
            v49 = ((unsigned __int64)*((int *)v30 + 333) >> 5) /*0x509ba4*/
                + ((*((int *)v30 + 333) - 32 * ((unsigned __int64)*((int *)v30 + 333) >> 5)) >> 5);
            *(_DWORD *)(*(_QWORD *)(a1 + 15584) + 4 * v49) |= 1 << ((v30[1332] /*0x509bb9*/
                                                                   - 32 * ((unsigned __int64)*((int *)v30 + 333) >> 5))
                                                                  & 0x1F);
          }
          (*(void (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)v30 + 1440LL))( /*0x509bd0*/
            v30,
            *v34 + 3LL * *((int *)v30 + 333));
          *(_DWORD *)(*((_QWORD *)v30 + 139) + 8LL) = *(_DWORD *)(*v37 + 4LL * *((int *)v30 + 333)); /*0x509bea*/
        }
        v27 = v108; /*0x509bed*/
        v29 = (const struct cocos2d::CCPoint *)(a1 + 14988); /*0x509bf1*/
      }
      if ( v30[773] && v27 ) /*0x509c08*/
        break; /*0x509c08*/
LABEL_94:
      (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v30 + 1152LL))(v30); /*0x509e71*/
      v66 = (*(__int64 (__fastcall **)(unsigned __int8 *, int *))(*(_QWORD *)v30 + 1208LL))(v30, &v101); /*0x509e88*/
      cocos2d::CCPoint::operator=(v29, v66); /*0x509e94*/
      v67 = *((_WORD *)v30 + 508); /*0x509e9a*/
      if ( v67 != -1 ) /*0x509ea5*/
      {
        v68 = 1; /*0x509ea7*/
        v69 = *(_QWORD *)(a1 + 1576); /*0x509eaa*/
        goto LABEL_99; /*0x509eb1*/
      }
      if ( *((_WORD *)v30 + 509) != 0xFFFF ) /*0x509ec0*/
      {
        v68 = 0; /*0x509ec6*/
LABEL_98:
        v69 = *(_QWORD *)(a1 + 1600); /*0x509ec9*/
        v67 = *((_WORD *)v30 + 509); /*0x509ed0*/
        goto LABEL_99; /*0x509ed0*/
      }
      v79 = *(float *)(a1 + 13224) + *(float *)(a1 + 1292); /*0x50a04c*/
      v68 = *(float *)v29 > v79; /*0x50a05c*/
      if ( *(float *)v29 <= v79 ) /*0x50a063*/
        goto LABEL_98; /*0x50a063*/
      v69 = *(_QWORD *)(a1 + 1576); /*0x50a069*/
LABEL_99:
      v70 = *(_DWORD *)(v69 + 4LL * *((__int16 *)v30 + 510)); /*0x509ed4*/
      v71 = v67; /*0x509ee0*/
      if ( v30[1353] ) /*0x509ee4*/
      {
        v71 = -14; /*0x509eed*/
        v70 = -14; /*0x509ef3*/
      }
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v30 + 1576LL))(v30) ) /*0x509efc*/
        (*(void (__fastcall **)(unsigned __int8 *, __int64, __int64))(*(_QWORD *)v30 + 1696LL))(v30, v72, 0xFFFFFFFFLL); /*0x509f1e*/
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v30 + 1584LL))(v30) ) /*0x509f2a*/
        EnhancedGameObject_updateRotateAction(v30); /*0x509f3b*/
      if ( v30[895] ) /*0x509f40*/
      {
        v96 = v94; /*0x509f4e*/
        v97 = v95; /*0x509f58*/
        v73 = *((_QWORD *)v30 + 186); /*0x509f5c*/
        if ( v73 ) /*0x509f66*/
        {
          v74 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 480LL))(v73); /*0x509f71*/
          for ( j = 0; j < cocos2d::CCArray::count(v74); ++j ) /*0x509f79*/
          {
            v76 = cocos2d::CCArray::objectAtIndex(v74, j); /*0x509f88*/
            (**((void (__fastcall ***)(__int64, __int16 *))v76 + 40))((__int64)v76 + 320, &v96); /*0x509f9d*/
          }
          v29 = (const struct cocos2d::CCPoint *)(a1 + 14988); /*0x509fae*/
        }
      }
      if ( (*(unsigned int (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v30 + 1648LL))(v30) == 30 ) /*0x509fc4*/
      {
        (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2264) + 200LL))(*(_QWORD *)(a1 + 2264)); /*0x509fd0*/
        EffectGameObject_updateInteractiveHover(v30); /*0x509fde*/
      }
      if ( *((_DWORD *)v30 + 259) == 143 ) /*0x509ff4*/
        (*(void (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)v30 + 1352LL))(v30, a1 + 13280); /*0x509fff*/
      if ( v30[1040] ) /*0x50a005*/
        goto LABEL_152; /*0x50a00c*/
      if ( v30[976] && !v30[977] ) /*0x50a01f*/
        (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v30 + 1304LL))(v30); /*0x50a09d*/
      if ( v30[1081] ) /*0x50a09f*/
      {
        v80 = &v115; /*0x50a0bc*/
        if ( !v30[1082] ) /*0x50a0b5*/
          v80 = (__int16 *)(a1 + 13280); /*0x50a0c5*/
        (*(void (__fastcall **)(unsigned __int8 *, __int16 *))(*(_QWORD *)v30 + 1352LL))(v30, v80); /*0x50a0c8*/
      }
      if ( v30[1080] ) /*0x50a0cb*/
      {
        if ( (_BYTE)v113 ) /*0x50a21f*/
        {
          (*(void (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)v30 + 1352LL))(v30, a1 + 13280); /*0x50a22a*/
          LOBYTE(v86) = -1; /*0x50a23a*/
          (*(void (__fastcall **)(unsigned __int8 *, __int64))(*((_QWORD *)v30 + 40) + 40LL))(v30 + 320, v86); /*0x50a23c*/
          v87 = *((_QWORD *)v30 + 94); /*0x50a23f*/
          if ( v87 ) /*0x50a249*/
          {
            v88 = (int)(float)(*((float *)v30 + 271) * 255.0); /*0x50a25f*/
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v87 + 320) + 40LL))(v87 + 320, (unsigned __int8)v88); /*0x50a269*/
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v30 + 94) + 952LL))( /*0x50a279*/
              *((_QWORD *)v30 + 94),
              (unsigned __int8)v88);
          }
        }
        else
        {
          v2 = v18; /*0x50a299*/
          PlayLayer_updateInvisibleBlock(a1, (_DWORD)v30, v20, v78, LODWORD(v21), v18 - 30.0, (__int64)&v98); /*0x50a2a7*/
        }
LABEL_147:
        if ( v70 != -15 ) /*0x50a2b0*/
          goto LABEL_134; /*0x50a2b0*/
        goto LABEL_148; /*0x50a2b0*/
      }
      if ( v30[1043] || v70 == -14 ) /*0x50a0e9*/
      {
        LOBYTE(v77) = -1; /*0x50a20e*/
        (*(void (__fastcall **)(unsigned __int8 *, __int64))(*((_QWORD *)v30 + 40) + 40LL))(v30 + 320, v77); /*0x50a210*/
        goto LABEL_147; /*0x50a213*/
      }
      if ( v30[1041] && (!v30[1044] || !v30[1120]) && (unsigned int)(v71 + 2) <= 1 && v70 == -2 ) /*0x50a117*/
      {
        v81 = v30 + 320; /*0x50a119*/
        v82 = *((_QWORD *)v30 + 40); /*0x50a120*/
        LOBYTE(v77) = -1; /*0x50a123*/
LABEL_133:
        (*(void (__fastcall **)(unsigned __int8 *, __int64))(v82 + 40))(v81, v77); /*0x50a125*/
LABEL_134:
        PlayLayer_applyEnterEffect(a1, v30, v70, v68); /*0x50a128*/
        goto LABEL_135; /*0x50a135*/
      }
      if ( v70 != -15 ) /*0x50a15b*/
      {
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v100, v29); /*0x50a169*/
        v83 = *((float *)v30 + 213); /*0x50a16f*/
        if ( v68 ) /*0x50a189*/
        {
          v100 = v100 - v83; /*0x50a18f*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v106, (const struct cocos2d::CCPoint *)&v100); /*0x50a195*/
        }
        else
        {
          v100 = v100 + v83; /*0x50a1ba*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v106, (const struct cocos2d::CCPoint *)&v100); /*0x50a1c0*/
        }
        v85 = cocos2d::clampf(v84, 0.0, 1.0, v2); /*0x50a1e6*/
        v81 = v30 + 320; /*0x50a1ec*/
        v77 = (unsigned int)(int)(float)(v85 * 255.0); /*0x50a1f8*/
        v82 = *((_QWORD *)v30 + 40); /*0x50a1fc*/
        goto LABEL_133; /*0x50a1ff*/
      }
LABEL_148:
      if ( v30[1042] ) /*0x50a2b6*/
        goto LABEL_134; /*0x50a2bd*/
      PlayLayer_applyCustomEnterEffect(a1, v30, v68); /*0x50a2cd*/
LABEL_135:
      if ( (_BYTE)v111 ) /*0x50a141*/
      {
        PlayLayer_screenFlipObject(a1, v30); /*0x50a14d*/
      }
      else if ( *(_BYTE *)(a1 + 13148) ) /*0x50a2d7*/
      {
        (*(void (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)v30 + 1088LL))(v30, v30[1004]); /*0x50a2ed*/
        (*(void (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)v30 + 1096LL))(v30, v30[1005]); /*0x50a300*/
        (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v30 + 352LL))(v30); /*0x50a314*/
        v89 = *(_QWORD *)v30; /*0x50a31a*/
        v90 = (*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v30 + 200LL))(v30); /*0x50a320*/
        (*(void (__fastcall **)(unsigned __int8 *, __int64))(v89 + 184))(v30, v90); /*0x50a32c*/
      }
LABEL_152:
      ++v105; /*0x50a332*/
      v28 = ++v109; /*0x50a33e*/
      v27 = v108; /*0x50a34b*/
      if ( v105 >= *(_DWORD *)(a1 + 13272) ) /*0x50a359*/
        goto LABEL_153; /*0x50a359*/
    }
    v50 = *((_DWORD *)v30 + 165); /*0x509c0e*/
    v51 = (_QWORD *)(a1 + 15304); /*0x509c15*/
    v52 = *(_QWORD *)(a1 + 15328); /*0x509c65*/
    v53 = *(_QWORD *)(v52 /*0x509c6f*/
                    + 16
                    * (*(_QWORD *)(a1 + 15352)
                     & (0x100000001B3LL
                      * (HIBYTE(v50)
                       ^ (0x100000001B3LL
                        * (BYTE2(v50)
                         ^ (0x100000001B3LL
                          * (BYTE1(v50) ^ (0x100000001B3LL * ((unsigned __int8)v50 ^ 0xCBF29CE484222325uLL)))))))))
                    + 8);
    if ( v53 != *(_QWORD *)(a1 + 15312) ) /*0x509c78*/
    {
      if ( v50 == *(_DWORD *)(v53 + 16) ) /*0x509c89*/
        goto LABEL_81; /*0x509c89*/
      while ( v53 != *(_QWORD *)(v52 /*0x509c93*/
                               + 16
                               * (*(_QWORD *)(a1 + 15352)
                                & (0x100000001B3LL
                                 * ((unsigned __int8)HIBYTE(*((_DWORD *)v30 + 165))
                                  ^ (0x100000001B3LL
                                   * ((unsigned __int8)BYTE2(*((_DWORD *)v30 + 165))
                                    ^ (0x100000001B3LL
                                     * ((unsigned __int8)BYTE1(*((_DWORD *)v30 + 165))
                                      ^ (0x100000001B3LL * ((unsigned __int8)v50 ^ 0xCBF29CE484222325uLL)))))))))) )
      {
        v53 = *(_QWORD *)(v53 + 8); /*0x509c99*/
        if ( v50 == *(_DWORD *)(v53 + 16) ) /*0x509ca1*/
        {
          v51 = (_QWORD *)(a1 + 15304); /*0x509ca3*/
          goto LABEL_81; /*0x509caa*/
        }
      }
      v51 = (_QWORD *)(a1 + 15304); /*0x509db3*/
    }
    v53 = 0; /*0x509dba*/
LABEL_81:
    if ( !*((_QWORD *)v30 + 112) ) /*0x509dc4*/
      goto LABEL_90; /*0x509dc4*/
    v61 = *((_DWORD *)v30 + 166); /*0x509dca*/
    v62 = v51[6] /*0x509e0c*/
        & (0x100000001B3LL
         * (HIBYTE(v61)
          ^ (0x100000001B3LL
           * (BYTE2(v61)
            ^ (0x100000001B3LL * (BYTE1(v61) ^ (0x100000001B3LL * ((unsigned __int8)v61 ^ 0xCBF29CE484222325uLL))))))));
    v63 = v51[3]; /*0x509e10*/
    v64 = *(_QWORD *)(v63 + 16 * v62 + 8); /*0x509e1a*/
    if ( v64 != v51[1] ) /*0x509e23*/
    {
      if ( v61 == *(_DWORD *)(v64 + 16) ) /*0x509e30*/
        goto LABEL_88; /*0x509e30*/
      while ( v64 != *(_QWORD *)(v63 + 16 * v62) ) /*0x509e35*/
      {
        v64 = *(_QWORD *)(v64 + 8); /*0x509e37*/
        if ( v61 == *(_DWORD *)(v64 + 16) ) /*0x509e3f*/
          goto LABEL_88; /*0x509e3f*/
      }
    }
    v64 = 0; /*0x509e43*/
LABEL_88:
    if ( v64 ) /*0x509e48*/
    {
      v65 = 1; /*0x509e4a*/
LABEL_91:
      if ( v53 || v65 ) /*0x509e57*/
      {
        (*(void (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)v30 + 1128LL))(v30, 0); /*0x509e61*/
        sub_2959C0(v30, 0); /*0x509e6c*/
      }
      goto LABEL_94; /*0x509e6c*/
    }
LABEL_90:
    v65 = 0; /*0x509e4e*/
    goto LABEL_91; /*0x509e4e*/
  }
LABEL_153:
  sub_3110C0(a1); /*0x50a35f*/
  GJBaseGameLayer_processAreaEffects(a1, a1 + 1696, 3, v91, 1); /*0x50a384*/
  GJBaseGameLayer_processAreaEffects(a1, a1 + 1720, 4, v92, 1); /*0x50a3a2*/
  sub_347940(a1); /*0x50a3ae*/
  *(_BYTE *)(a1 + 13148) = 0; /*0x50a3b3*/
  sub_3DB60(a1 + 15304); /*0x50a3c1*/
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1160LL))(a1) ) /*0x50a3cc*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1152LL))(a1); /*0x50a3cc*/
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1168LL))(a1); /*0x50a3dc*/
  if ( (_BYTE)result ) /*0x50a3e4*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1152LL))(a1); /*0x50a3ec*/
  return result; /*0x50a3f2*/
}

// [29/80] Address: 0x50a450
// Method: PlayLayer::opacityForObject
float __fastcall PlayLayer_opacityForObject(__int64 a1, __int64 a2)
{
  return GameObject_groupOpacityMod(a2);
}

// [30/80] Address: 0x50a460
// Method: PlayLayer::manualUpdateObjectColors
__int64 __fastcall PlayLayer_manualUpdateObjectColors(__int64 a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax

  sub_295730(a2); /*0x50a470*/
  LOBYTE(v3) = 1; /*0x50a47b*/
  v4 = *a2; /*0x50a47e*/
  v5 = GameObject_colorForMode(a2, *((unsigned int *)a2 + 165), v3); /*0x50a484*/
  (*(void (__fastcall **)(__int64 *, __int64))(v4 + 1432))(a2, v5); /*0x50a48f*/
  v6 = *a2; /*0x50a49e*/
  v7 = GameObject_colorForMode(a2, *((unsigned int *)a2 + 166), 0); /*0x50a4a4*/
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 1440))(a2, v7); /*0x50a4b6*/
}

// [31/80] Address: 0x50a4d0
// Method: PlayLayer::updateInvisibleBlock
__int64 __fastcall PlayLayer_updateInvisibleBlock(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        float a5,
        float a6,
        __int16 *a7)
{
  float v11; // xmm1_4
  float v12; // xmm0_4
  float *v13; // rax
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm6_4
  __int64 v25; // rdx
  int v26; // ebx
  float v27; // xmm0_4
  int v28; // r8d
  int v29; // eax
  char *v30; // rdx
  float v31; // xmm2_4
  __int16 v33; // [rsp+20h] [rbp-88h]
  __int16 v34; // [rsp+B0h] [rbp+8h] BYREF
  float v35; // [rsp+B8h] [rbp+10h] BYREF
  char v36; // [rsp+C0h] [rbp+18h] BYREF
  char v37; // [rsp+C1h] [rbp+19h]
  char v38; // [rsp+C2h] [rbp+1Ah]

  (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 1208LL))(a2, &v35); /*0x50a515*/
  v11 = *(float *)(a2 + 852); /*0x50a52b*/
  if ( v35 <= *(float *)(a1 + 13220) ) /*0x50a533*/
    v12 = v35 + v11; /*0x50a53b*/
  else
    v12 = v35 - v11; /*0x50a535*/
  v35 = v12; /*0x50a547*/
  v13 = (float *)cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v34, (const struct cocos2d::CCPoint *)&v35); /*0x50a558*/
  v14 = *(float *)(a1 + 13224); /*0x50a55e*/
  v15 = *(float *)(a1 + 1292); /*0x50a56a*/
  v16 = *v13; /*0x50a579*/
  if ( *v13 <= (float)(v14 + v15) ) /*0x50a580*/
  {
    v17 = 0.014285714; /*0x50a5a0*/
    v18 = (float)((float)(v14 + v15) - v16) - 0.0; /*0x50a5a8*/
  }
  else
  {
    v17 = 0.02; /*0x50a582*/
    v18 = (float)((float)(v16 - 0.0) - v15) - v14; /*0x50a593*/
  }
  v19 = (float)(v14 - v18) * v17; /*0x50a5ba*/
  if ( v19 >= 0.0 ) /*0x50a5c2*/
    v20 = fminf(1.0, v19); /*0x50a5cd*/
  else
    v20 = 0.0; /*0x50a5c4*/
  v21 = v20 * 255.0; /*0x50a5ea*/
  if ( v35 <= (float)(v15 + a3) ) /*0x50a5f2*/
  {
    v22 = a6; /*0x50a607*/
    v23 = (float)(v15 + a4) - v35; /*0x50a619*/
  }
  else
  {
    v22 = a5; /*0x50a5f4*/
    v23 = (float)(v35 - v15) - a3; /*0x50a601*/
  }
  v24 = fmaxf(0.0, fminf(1.0, v23 / fmaxf(v22, 1.0))); /*0x50a63e*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a2 + 320) + 40LL))( /*0x50a662*/
    a2 + 320,
    (unsigned int)(int)fminf((float)((float)(v24 * 0.94999999) + 0.050000001) * 255.0, v21));
  v25 = *(_QWORD *)(a2 + 752); /*0x50a665*/
  if ( v25 ) /*0x50a675*/
  {
    v26 = (int)(float)((float)(unsigned __int8)(int)fminf((float)((float)(v24 * 0.85000002) + 0.15000001) * 255.0, v21) /*0x50a6b8*/
                     * *(float *)(a2 + 1084));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v25 + 320) + 40LL))(v25 + 320, (unsigned __int8)v26); /*0x50a6bf*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 752) + 952LL))( /*0x50a6cf*/
      *(_QWORD *)(a2 + 752),
      (unsigned __int8)v26);
  }
  v27 = (float)(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 320) + 32LL))(a2 + 320) / 255.0; /*0x50a715*/
  if ( v27 <= 0.80000001 ) /*0x50a71d*/
  {
    v30 = (char *)(a1 + 13280); /*0x50a82a*/
  }
  else
  {
    v33 = *(_WORD *)(a1 + 13280); /*0x50a73d*/
    v28 = *((unsigned __int8 *)a7 + 2); /*0x50a74d*/
    v29 = (unsigned __int8)*a7; /*0x50a752*/
    v34 = *a7; /*0x50a755*/
    v30 = &v36; /*0x50a75d*/
    v31 = (float)((float)(1.0 - (float)((float)(v27 - 0.80000001) / 0.2)) * 0.30000001) + 0.69999999; /*0x50a77f*/
    v36 = (int)fmaxf( /*0x50a7af*/
                 0.0,
                 fminf((float)((float)v29 * (float)(1.0 - v31)) + (float)((float)(unsigned __int8)v33 * v31), 255.0));
    v37 = (int)fmaxf( /*0x50a7f8*/
                 0.0,
                 fminf((float)((float)HIBYTE(v34) * (float)(1.0 - v31)) + (float)((float)HIBYTE(v33) * v31), 255.0));
    v38 = (int)fmaxf( /*0x50a821*/
                 0.0,
                 fminf(
                   (float)((float)v28 * (float)(1.0 - v31)) + (float)((float)*(unsigned __int8 *)(a1 + 13282) * v31),
                   255.0));
  }
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 1352LL))(a2, v30); /*0x50a83d*/
}

// [32/80] Address: 0x50a860
// Method: PlayLayer::screenFlipObject
__int64 __fastcall PlayLayer_screenFlipObject(__int64 a1, unsigned __int8 *a2)
{
  float v4; // xmm7_4
  __int64 v5; // rax
  const struct cocos2d::CCPoint *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  float v9; // xmm0_4
  bool v10; // cl
  float v11; // xmm2_4
  int v12; // esi
  float v13; // xmm0_4
  __int64 v14; // rdx
  __int64 result; // rax
  int v16; // esi
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // r8
  float v21; // [rsp+60h] [rbp+8h] BYREF
  float v22; // [rsp+64h] [rbp+Ch]
  float v23; // [rsp+68h] [rbp+10h] BYREF
  char v24; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(float *)(a1 + 1052); /*0x50a893*/
  if ( *(float *)(a1 + 13108) == -1.0 ) /*0x50a89d*/
    v4 = 1.0 - v4; /*0x50a8a6*/
  v5 = cocos2d::CCDirector::sharedDirector(); /*0x50a8a9*/
  cocos2d::CCDirector::getWinSize(v5, &v23); /*0x50a8b7*/
  v6 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a2 + 200LL))(a2); /*0x50a8c3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, v6); /*0x50a8d1*/
  v7 = *(_QWORD *)a2; /*0x50a8f3*/
  v8 = cocos2d::CCPoint::CCPoint( /*0x50a914*/
         (cocos2d::CCPoint *)&v24,
         (float)((float)((float)(v23 / *(float *)(a1 + 424))
                       - (float)((float)(v21 - *(float *)(a1 + 1040)) + (float)(v21 - *(float *)(a1 + 1040))))
               * v4)
       + v21,
         v22);
  (*(void (__fastcall **)(unsigned __int8 *, __int64))(v7 + 184))(a2, v8); /*0x50a920*/
  v9 = fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a2 + 360LL))(a2)))); /*0x50a932*/
  v10 = v9 != 90.0 && v9 != 270.0; /*0x50a94f*/
  v11 = *(float *)(a1 + 13108); /*0x50a955*/
  v12 = (int)v9; /*0x50a962*/
  v13 = *(float *)(a1 + 1052); /*0x50a966*/
  v14 = (unsigned int)(v12 / 90); /*0x50a97a*/
  result = (unsigned int)(90 * v14); /*0x50a97c*/
  v16 = v12 - result; /*0x50a97f*/
  if ( v11 == 1.0 )
  {
    if ( v13 < 0.5 ) /*0x50a993*/
      goto LABEL_9; /*0x50a993*/
  }
  else if ( v13 > 0.5 )
  {
LABEL_9:
    if ( *(_BYTE *)(a1 + 1056) )
    {
      if ( !(v11 == 1.0 ? v13 > 0.5 : v13 < 0.5) )
      {
        v19 = 1; /*0x50aa06*/
        if ( v11 != 1.0 ) /*0x50aa0b*/
          v19 = -1; /*0x50aa0d*/
        v20 = *(_QWORD *)a2; /*0x50aa12*/
        if ( v10 ) /*0x50aa1a*/
        {
          LOBYTE(v14) = v19 * a2[1004] != 0; /*0x50aa28*/
          result = (*(__int64 (__fastcall **)(unsigned __int8 *, __int64))(v20 + 1088))(a2, v14); /*0x50aa2b*/
        }
        else
        {
          LOBYTE(v14) = v19 * a2[1005] != 0; /*0x50aa40*/
          result = (*(__int64 (__fastcall **)(unsigned __int8 *, __int64))(v20 + 1096))(a2, v14); /*0x50aa43*/
        }
        if ( v16 ) /*0x50aa4c*/
          return (*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a2 + 352LL))(a2); /*0x50aa4c*/
      }
    }
    return result; /*0x50aa4c*/
  }
  v18 = *(_QWORD *)a2; /*0x50a9bb*/
  if ( v10 ) /*0x50a9c3*/
  {
    LOBYTE(v14) = a2[1004] == 0; /*0x50a9cc*/
    result = (*(__int64 (__fastcall **)(unsigned __int8 *, __int64))(v18 + 1088))(a2, v14); /*0x50a9cf*/
  }
  else
  {
    LOBYTE(v14) = a2[1005] == 0; /*0x50a9de*/
    result = (*(__int64 (__fastcall **)(unsigned __int8 *, __int64))(v18 + 1096))(a2, v14); /*0x50a9e1*/
  }
  if ( v16 ) /*0x50a9e9*/
    return (*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a2 + 352LL))(a2); /*0x50aa5d*/
  return result; /*0x50aa69*/
}

// [33/80] Address: 0x50aa80
// Method: PlayLayer::applyCustomEnterEffect
__int64 __fastcall PlayLayer_applyCustomEnterEffect(__int64 a1, _WORD *a2, unsigned __int8 a3)
{
  __int64 v4; // rdi
  char v5; // r13
  char v7; // r12
  float v8; // xmm8_4
  float v9; // xmm14_4
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int16 *v13; // rcx
  int v14; // xmm0_4
  unsigned int v15; // eax
  __int64 v16; // rcx
  __m128 **v17; // rax
  __int64 v18; // rcx
  __m128 *v19; // rsi
  __int64 v20; // r8
  float v21; // xmm15_4
  unsigned __int64 v22; // rbx
  float v23; // xmm0_4
  float v24; // xmm0_4
  __int64 v25; // r8
  double v26; // xmm0_8
  float v27; // xmm7_4
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int16 v31; // r9
  unsigned __int8 v32; // r10
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  __m128i v35; // xmm3
  float v36; // xmm0_4
  __m128 v37; // xmm6
  float v38; // xmm4_4
  float v39; // xmm1_4
  bool v40; // zf
  __m128 v41; // xmm6
  __m128 v42; // xmm6
  __m128 v43; // xmm6
  __m128 v44; // xmm6
  unsigned __int16 *v45; // rax
  __int16 *v46; // rax
  float v47; // xmm3_4
  __int16 v48; // ax
  unsigned __int8 v49; // al
  double v50; // xmm0_8
  __int64 v51; // rdx
  float v52; // xmm8_4
  float v53; // xmm6_4
  double v54; // xmm0_8
  __int64 v55; // rdx
  float v56; // xmm6_4
  float v57; // xmm7_4
  float v58; // xmm6_4
  double v59; // xmm0_8
  __int64 v60; // rdx
  float v61; // xmm8_4
  float v62; // xmm6_4
  double v63; // xmm0_8
  __int64 v64; // rdx
  float v65; // xmm8_4
  __int64 v66; // rcx
  double v67; // xmm0_8
  float v68; // xmm6_4
  const struct cocos2d::CCPoint *v69; // rax
  unsigned __int8 v70; // bl
  float *v71; // rdx
  __int64 result; // rax
  __int16 v73; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int8 v74; // [rsp+22h] [rbp-DEh]
  __int16 v75; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int8 v76; // [rsp+26h] [rbp-DAh]
  char v77; // [rsp+28h] [rbp-D8h]
  float v78; // [rsp+2Ch] [rbp-D4h]
  char v79; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v80; // [rsp+31h] [rbp-CFh]
  char v81; // [rsp+32h] [rbp-CEh]
  char v82; // [rsp+33h] [rbp-CDh]
  int v83; // [rsp+34h] [rbp-CCh]
  __int16 v84; // [rsp+38h] [rbp-C8h]
  __int16 v85; // [rsp+3Ch] [rbp-C4h]
  __int16 v86; // [rsp+40h] [rbp-C0h]
  float v87; // [rsp+48h] [rbp-B8h] BYREF
  float v88; // [rsp+4Ch] [rbp-B4h]
  unsigned int v89; // [rsp+50h] [rbp-B0h] BYREF
  float v90; // [rsp+58h] [rbp-A8h]
  int v91; // [rsp+5Ch] [rbp-A4h]
  float v92; // [rsp+60h] [rbp-A0h] BYREF
  float v93; // [rsp+64h] [rbp-9Ch]
  __m128 v94; // [rsp+70h] [rbp-90h] BYREF
  float v95[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v96; // [rsp+88h] [rbp-78h]
  char v97[8]; // [rsp+90h] [rbp-70h] BYREF
  __m128 *v98; // [rsp+98h] [rbp-68h]
  __int64 v99; // [rsp+A0h] [rbp-60h]
  char v100[12]; // [rsp+A8h] [rbp-58h] BYREF
  __int32 v101; // [rsp+B4h] [rbp-4Ch]

  v4 = (__int16)a2[506]; /*0x50aa9e*/
  v5 = 1; /*0x50aab5*/
  v7 = 1; /*0x50aad5*/
  v80 = a3; /*0x50ab03*/
  v8 = 1.0; /*0x50ab07*/
  v78 = 1.0; /*0x50ab0e*/
  v90 = 1.0; /*0x50ab14*/
  v9 = 1.0; /*0x50ab1a*/
  v83 = 1065353216; /*0x50ab1e*/
  v81 = 1; /*0x50ab25*/
  v10 = 2 * (a3 ^ 1) - 1; /*0x50ab2a*/
  v77 = 1; /*0x50ab31*/
  v79 = 1; /*0x50ab36*/
  v82 = 1; /*0x50ab3b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, (const struct cocos2d::CCPoint *)(a1 + 14988)); /*0x50ab40*/
  v11 = (*(__int64 (__fastcall **)(_WORD *))(*((_QWORD *)a2 + 40) + 8LL))(a2 + 160); /*0x50ab50*/
  v73 = *(_WORD *)v11; /*0x50ab56*/
  v74 = *(_BYTE *)(v11 + 2); /*0x50ab5f*/
  v12 = *((_QWORD *)a2 + 112); /*0x50ab63*/
  v99 = v12; /*0x50ab6a*/
  if ( v12 ) /*0x50ab71*/
    v13 = (__int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 320) + 8LL))(v12 + 320); /*0x50ab80*/
  else
    v13 = &word_6FF514; /*0x50ab85*/
  v75 = *v13; /*0x50ab8f*/
  v76 = *((_BYTE *)v13 + 2); /*0x50ab9d*/
  if ( v80 ) /*0x50aba3*/
    v14 = dword_9037B4; /*0x50aba5*/
  else
    v14 = *(_DWORD *)(a1 + 1292); /*0x50abaf*/
  v15 = (__int16)a2[510]; /*0x50abb8*/
  v91 = v14; /*0x50abc4*/
  v89 = v15; /*0x50abca*/
  if ( v15 <= 0x64 ) /*0x50abd1*/
  {
    v16 = a1 + 1448; /*0x50abde*/
    if ( !v80 ) /*0x50abe9*/
      v16 = a1 + 1512; /*0x50abeb*/
    v17 = (__m128 **)(*(_QWORD *)sub_354A60(v16, v100, &v89) + 24LL); /*0x50abfa*/
    if ( v17 ) /*0x50abfe*/
    {
      v19 = *v17; /*0x50ac04*/
      v98 = v17[1]; /*0x50ac0b*/
      if ( v19 != v98 ) /*0x50ac12*/
      {
        v20 = v4; /*0x50ac20*/
        v96 = v4; /*0x50ac67*/
        v21 = (float)v10; /*0x50ac72*/
        while ( 1 ) /*0x50ac89*/
        {
          v22 = v19[10].m128_u64[0]; /*0x50ac89*/
          v23 = v19[1].m128_f32[1]; /*0x50acc4*/
          if ( v23 == 0.0 ) /*0x50acd8*/
            v24 = 0.0; /*0x50acda*/
          else
            v24 = v23 * *(float *)(a1 + 4LL * (__int16)a2[506] + 4588); /*0x50ace8*/
          v26 = sub_32CCF0(v18, (unsigned int)(int)(float)(v24 + v19[1].m128_f32[0]), v20); /*0x50ad03*/
          v27 = *(float *)&v26; /*0x50ad08*/
          if ( *(float *)&v26 >= 1.0 ) /*0x50ad0f*/
            goto LABEL_91; /*0x50ad0f*/
          v28 = *(_DWORD *)(v22 + 1036); /*0x50ad15*/
          v82 = 0; /*0x50ad1b*/
          v18 = (unsigned int)(v28 - 3017); /*0x50ad20*/
          if ( !(_DWORD)v18 ) /*0x50ad26*/
          {
            if ( *(_BYTE *)(v22 + 1988) ) /*0x50b31d*/
            {
              v61 = (float)((float)(*(float *)(a1 + 4 * v25 + 4620) * v19[4].m128_f32[2]) + v19[4].m128_f32[1]) * v21; /*0x50b354*/
              v62 = (float)((float)(*(float *)(a1 + 4 * v25 + 4624) * v19[5].m128_f32[0]) + v19[4].m128_f32[3]) * v21; /*0x50b359*/
              if ( v61 != 0.0 || v62 != 0.0 ) /*0x50b36c*/
              {
                v18 = *(unsigned int *)(v22 + 1944); /*0x50b372*/
                if ( (_DWORD)v18 != -1 ) /*0x50b37b*/
                {
                  if ( (_DWORD)v18 == -2 ) /*0x50b380*/
                  {
                    v63 = sub_720C0(v18, *(unsigned int *)(v22 + 1936)); /*0x50b390*/
                    v27 = *(float *)&v63; /*0x50b395*/
                  }
                  else
                  {
                    v64 = (int)v18 - (int)(float)(*(float *)&v26 * -100.0); /*0x50b3ad*/
                    v18 = *(_QWORD *)(a1 + 12608); /*0x50b3b0*/
                    v27 = (float)((float)((float)(*(float *)&v26 /*0x50b3df*/
                                                - (float)((float)(int)(float)(*(float *)&v26 * 100.0) * 0.0099999998))
                                        * (float)(*(float *)(v18 + 4 * v64 + 4) - *(float *)(v18 + 4 * v64)))
                                * 100.0)
                        + *(float *)(v18 + 4 * v64);
                  }
                }
                v87 = v87 + (float)(v61 * (float)(1.0 - v27)); /*0x50b400*/
                v88 = v88 + (float)(v62 * (float)(1.0 - v27)); /*0x50b410*/
                goto LABEL_89; /*0x50b416*/
              }
            }
            else
            {
              v65 = (float)(*(float *)(a1 + 4 * v25 + 4628) * v19[3].m128_f32[2]) + v19[3].m128_f32[1]; /*0x50b42b*/
              if ( v65 != 0.0 ) /*0x50b437*/
              {
                v66 = *(unsigned int *)(v22 + 1944); /*0x50b43d*/
                if ( (_DWORD)v66 != -1 ) /*0x50b446*/
                {
                  if ( (_DWORD)v66 == -2 ) /*0x50b44b*/
                  {
                    v67 = sub_720C0(v66, *(unsigned int *)(v22 + 1936)); /*0x50b45b*/
                    v27 = *(float *)&v67; /*0x50b464*/
                  }
                  else
                  {
                    v27 = (float)((float)((float)(*(float *)&v26 /*0x50b4ae*/
                                                - (float)((float)(int)(float)(*(float *)&v26 * 100.0) * 0.0099999998))
                                        * (float)(*(float *)(*(_QWORD *)(a1 + 12608)
                                                           + 4LL * ((int)v66 - (int)(float)(*(float *)&v26 * -100.0))
                                                           + 4)
                                                - *(float *)(*(_QWORD *)(a1 + 12608)
                                                           + 4LL * ((int)v66 - (int)(float)(*(float *)&v26 * -100.0)))))
                                * 100.0)
                        + *(float *)(*(_QWORD *)(a1 + 12608) + 4LL * ((int)v66 - (int)(float)(*(float *)&v26 * -100.0)));
                  }
                }
                v68 = (float)(1.0 - v27) * v65; /*0x50b4d3*/
                cocos2d::ccpForAngle(v95); /*0x50b4e8*/
                v87 = v87 + (float)(v95[0] * v68); /*0x50b519*/
                v88 = v88 + (float)(v95[1] * v68); /*0x50b529*/
LABEL_89:
                v77 = 0; /*0x50b52f*/
              }
            }
LABEL_90:
            v8 = *(float *)&v83; /*0x50b534*/
            goto LABEL_91; /*0x50b534*/
          }
          v18 = (unsigned int)(v18 - 1); /*0x50ad2c*/
          if ( !(_DWORD)v18 ) /*0x50ad2f*/
          {
            v58 = (float)(*(float *)(a1 + 4 * v25 + 4660) * v19[6].m128_f32[3]) + v19[6].m128_f32[2]; /*0x50b278*/
            if ( v58 != 0.0 ) /*0x50b283*/
            {
              v18 = *(unsigned int *)(v22 + 1944); /*0x50b289*/
              if ( (_DWORD)v18 != -1 ) /*0x50b292*/
              {
                if ( (_DWORD)v18 == -2 ) /*0x50b297*/
                {
                  v59 = sub_720C0(v18, *(unsigned int *)(v22 + 1936)); /*0x50b2a7*/
                  v27 = *(float *)&v59; /*0x50b2ac*/
                }
                else
                {
                  v60 = (int)v18 - (int)(float)(*(float *)&v26 * -100.0); /*0x50b2c4*/
                  v18 = *(_QWORD *)(a1 + 12608); /*0x50b2c7*/
                  v27 = (float)((float)((float)(*(float *)&v26 /*0x50b2f6*/
                                              - (float)((float)(int)(float)(*(float *)&v26 * 100.0) * 0.0099999998))
                                      * (float)(*(float *)(v18 + 4 * v60 + 4) - *(float *)(v18 + 4 * v60)))
                              * 100.0)
                      + *(float *)(v18 + 4 * v60);
                }
              }
              v79 = 0; /*0x50b2ff*/
              v8 = v8 + (float)((float)(1.0 - v27) * v58); /*0x50b30c*/
              v83 = LODWORD(v8); /*0x50b311*/
            }
            goto LABEL_91; /*0x50b318*/
          }
          v18 = (unsigned int)(v18 - 1); /*0x50ad35*/
          if ( !(_DWORD)v18 ) /*0x50ad38*/
          {
            v52 = (float)(*(float *)(a1 + 4 * v25 + 4636) * v19[5].m128_f32[3]) + v19[5].m128_f32[2]; /*0x50b181*/
            v53 = (float)(*(float *)(a1 + 4 * v25 + 4640) * v19[6].m128_f32[1]) + v19[6].m128_f32[0]; /*0x50b187*/
            if ( v52 != 0.0 || v53 != 0.0 ) /*0x50b19a*/
            {
              v18 = *(unsigned int *)(v22 + 1944); /*0x50b1a0*/
              if ( (_DWORD)v18 != -1 ) /*0x50b1a9*/
              {
                if ( (_DWORD)v18 == -2 ) /*0x50b1ae*/
                {
                  v54 = sub_720C0(v18, *(unsigned int *)(v22 + 1936)); /*0x50b1be*/
                  v27 = *(float *)&v54; /*0x50b1c3*/
                }
                else
                {
                  v55 = (int)v18 - (int)(float)(*(float *)&v26 * -100.0); /*0x50b1db*/
                  v18 = *(_QWORD *)(a1 + 12608); /*0x50b1de*/
                  v27 = (float)((float)((float)(*(float *)&v26 /*0x50b20d*/
                                              - (float)((float)(int)(float)(*(float *)&v26 * 100.0) * 0.0099999998))
                                      * (float)(*(float *)(v18 + 4 * v55 + 4) - *(float *)(v18 + 4 * v55)))
                              * 100.0)
                      + *(float *)(v18 + 4 * v55);
                }
              }
              v81 = 0; /*0x50b217*/
              v56 = (float)(v53 - 1.0) * (float)(1.0 - v27); /*0x50b234*/
              v57 = v78 * (float)((float)((float)(v52 - 1.0) * (float)(1.0 - v27)) + 1.0); /*0x50b248*/
              v8 = *(float *)&v83; /*0x50b24d*/
              v78 = v57; /*0x50b258*/
              v90 = v90 * (float)(v56 + 1.0); /*0x50b25e*/
              goto LABEL_91; /*0x50b264*/
            }
            goto LABEL_90; /*0x50b19a*/
          }
          v18 = (unsigned int)(v18 - 1); /*0x50ad3e*/
          if ( !(_DWORD)v18 ) /*0x50ad41*/
          {
            if ( !*((_BYTE *)a2 + 1043) ) /*0x50b0d0*/
            {
              v18 = *(unsigned int *)(v22 + 1944); /*0x50b0de*/
              if ( (_DWORD)v18 == -1 ) /*0x50b0e7*/
                goto LABEL_61; /*0x50b0e7*/
              if ( (_DWORD)v18 != -2 ) /*0x50b0ec*/
              {
                v51 = (int)v18 - (int)(float)(*(float *)&v26 * -100.0); /*0x50b121*/
                v18 = *(_QWORD *)(a1 + 12608); /*0x50b124*/
                v27 = (float)((float)((float)(*(float *)&v26 /*0x50b153*/
                                            - (float)((float)(int)(float)(*(float *)&v26 * 100.0) * 0.0099999998))
                                    * (float)(*(float *)(v18 + 4 * v51 + 4) - *(float *)(v18 + 4 * v51)))
                            * 100.0)
                    + *(float *)(v18 + 4 * v51);
LABEL_61:
                v9 = v9 * v27; /*0x50b158*/
                goto LABEL_91; /*0x50b15d*/
              }
              v50 = sub_720C0(v18, *(unsigned int *)(v22 + 1936)); /*0x50b0fc*/
              v9 = v9 * *(float *)&v50; /*0x50b104*/
            }
            goto LABEL_91; /*0x50b109*/
          }
          if ( (_DWORD)v18 != 1 ) /*0x50ad4a*/
            goto LABEL_91; /*0x50ad4a*/
          v29 = *(unsigned int *)(v22 + 1976); /*0x50ad50*/
          v18 = (unsigned int)v29; /*0x50ad56*/
          if ( (_DWORD)v29 ) /*0x50ad5a*/
          {
            v18 = (unsigned int)(v29 - 1010); /*0x50ad5c*/
            if ( (_DWORD)v29 == 1010 ) /*0x50ad62*/
            {
              v31 = 0; /*0x50ada1*/
              v32 = 0; /*0x50ada9*/
              v84 = 0; /*0x50adb1*/
              goto LABEL_29; /*0x50adb7*/
            }
            if ( (_DWORD)v29 != 1011 ) /*0x50ad67*/
            {
              v30 = sub_362560(*(_QWORD *)(a1 + 2472), v29); /*0x50ad70*/
              if ( v30 ) /*0x50ad87*/
              {
                v31 = *(_WORD *)(v30 + 327); /*0x50ad89*/
                v32 = *(_BYTE *)(v30 + 329); /*0x50ad91*/
                v84 = v31; /*0x50ad99*/
                goto LABEL_29; /*0x50ad9f*/
              }
            }
          }
          v32 = -1; /*0x50adb9*/
          v84 = -1; /*0x50adbd*/
          v31 = -1; /*0x50adc3*/
LABEL_29:
          if ( *(_BYTE *)(v22 + 2029) ) /*0x50adc7*/
          {
            v33 = v19[8]; /*0x50add4*/
            v34 = (__m128)0x3F800000u; /*0x50addb*/
            v34.m128_f32[0] = 1.0 - *(float *)&v26; /*0x50ade3*/
            v35 = (__m128i)_mm_shuffle_ps(v33, v33, 255); /*0x50adea*/
            v101 = v35.m128i_i32[0]; /*0x50adf1*/
            v37 = v34; /*0x50adfe*/
            v36 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0] * (float)(1.0 - *(float *)&v26); /*0x50ae01*/
            v37.m128_f32[0] = (float)(1.0 - v27) * v33.m128_f32[0]; /*0x50ae05*/
            v38 = 1.0 - (float)(1.0 - v27); /*0x50ae09*/
            if ( !v35.m128i_i8[0] ) /*0x50ae0d*/
              v36 = v36 + v38; /*0x50ae0f*/
            v39 = _mm_shuffle_ps(v33, v33, 170).m128_f32[0] * v34.m128_f32[0]; /*0x50ae1b*/
            if ( !((unsigned __int16)_mm_cvtsi128_si32(v35) >> 8) ) /*0x50ae1f*/
              v39 = v39 + v38; /*0x50ae26*/
            v40 = *(_BYTE *)(v22 + 1650) == 0; /*0x50ae2a*/
            v41 = _mm_shuffle_ps(v37, v37, 225); /*0x50ae31*/
            v41.m128_f32[0] = v36; /*0x50ae35*/
            v42 = _mm_shuffle_ps(v41, v41, 198); /*0x50ae39*/
            v42.m128_f32[0] = v39; /*0x50ae3d*/
            v43 = _mm_shuffle_ps(v42, v42, 39); /*0x50ae41*/
            v43.m128_f32[0] = *(float *)v35.m128i_i32; /*0x50ae45*/
            v44 = _mm_shuffle_ps(v43, v43, 57); /*0x50ae49*/
            v94 = v44; /*0x50ae4d*/
            if ( v40 ) /*0x50ae52*/
            {
              v94 = v44; /*0x50ae59*/
              v45 = (unsigned __int16 *)GameToolbox_transformColor(v97, &v73, &v94); /*0x50ae68*/
              v18 = *v45; /*0x50ae7c*/
              v73 = *v45; /*0x50ae7f*/
              v74 = *((_BYTE *)v45 + 2); /*0x50ae88*/
            }
            if ( *(_BYTE *)(v22 + 1649) || !*((_QWORD *)a2 + 112) ) /*0x50ae99*/
              goto LABEL_55; /*0x50aea1*/
            v94 = v44; /*0x50aeac*/
            v46 = (__int16 *)GameToolbox_transformColor(&v89, &v75, &v94); /*0x50aebc*/
            v7 = 0; /*0x50aec8*/
            v18 = (unsigned __int16)*v46; /*0x50aed3*/
            v75 = *v46; /*0x50aed6*/
            v76 = *((_BYTE *)v46 + 2); /*0x50aedf*/
            goto LABEL_91; /*0x50aee3*/
          }
          v47 = fminf(1.0, (float)(v19[7].m128_f32[0] * *(float *)&v26) + (float)(1.0 - v19[7].m128_f32[0])); /*0x50af11*/
          if ( !*(_BYTE *)(v22 + 1650) ) /*0x50aee8*/
          {
            if ( v47 <= 0.0 ) /*0x50af1f*/
            {
              v48 = v31; /*0x50afc6*/
              v18 = v32; /*0x50afca*/
LABEL_45:
              v85 = v48; /*0x50afce*/
            }
            else
            {
              if ( v47 == 1.0 ) /*0x50af37*/
              {
                v48 = v73; /*0x50af39*/
                v18 = v74; /*0x50af3e*/
                goto LABEL_45; /*0x50af43*/
              }
              LOBYTE(v85) = (int)(float)((float)((float)((unsigned __int8)v73 - (unsigned __int8)v31) * v47) /*0x50af79*/
                                       + (float)(unsigned __int8)v31);
              HIBYTE(v85) = (int)(float)((float)((float)(HIBYTE(v73) - HIBYTE(v84)) * v47) + (float)HIBYTE(v84)); /*0x50afa0*/
              v48 = v85; /*0x50afb0*/
              v18 = (unsigned int)(int)(float)((float)((float)(v74 - v32) * v47) + (float)v32); /*0x50afc0*/
            }
            v73 = v48; /*0x50afd3*/
            v74 = v18; /*0x50afd8*/
          }
          if ( *(_BYTE *)(v22 + 1649) || !*((_QWORD *)a2 + 112) ) /*0x50afe9*/
            goto LABEL_55; /*0x50aff1*/
          if ( v47 <= 0.0 ) /*0x50affb*/
          {
            v49 = v32; /*0x50b0b4*/
            goto LABEL_54; /*0x50b0b4*/
          }
          if ( v47 == 1.0 ) /*0x50b013*/
          {
            v31 = v75; /*0x50b015*/
            v49 = v76; /*0x50b01b*/
LABEL_54:
            v86 = v31; /*0x50b0b8*/
            v75 = v31; /*0x50b0be*/
            v76 = v49; /*0x50b0c4*/
LABEL_55:
            v7 = 0; /*0x50b0c8*/
            goto LABEL_91; /*0x50b0cb*/
          }
          v18 = (unsigned __int8)v31; /*0x50b02a*/
          LOBYTE(v86) = (int)(float)((float)((float)((unsigned __int8)v75 - (unsigned __int8)v31) * v47) /*0x50b056*/
                                   + (float)(unsigned __int8)v31);
          HIBYTE(v86) = (int)(float)((float)((float)(HIBYTE(v75) - HIBYTE(v84)) * v47) + (float)HIBYTE(v84)); /*0x50b07d*/
          v75 = v86; /*0x50b08f*/
          v7 = 0; /*0x50b095*/
          v76 = (int)(float)((float)((float)(v76 - v32) * v47) + (float)v32); /*0x50b0ab*/
LABEL_91:
          v20 = v96; /*0x50b541*/
          v19 = (__m128 *)((char *)v19 + 232); /*0x50b545*/
          if ( v19 == v98 ) /*0x50b550*/
          {
            v5 = v77; /*0x50b580*/
            break; /*0x50b580*/
          }
        }
      }
    }
  }
  v69 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)a2 + 200LL))(a2); /*0x50b591*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v92, v69); /*0x50b5a5*/
  v70 = v80; /*0x50b5ab*/
  if ( v80 ) /*0x50b5ba*/
    a2[508] = -15; /*0x50b5bc*/
  else
    a2[509] = -15; /*0x50b5c8*/
  (*(void (__fastcall **)(_WORD *, _QWORD))(*((_QWORD *)a2 + 40) + 40LL))( /*0x50b5ea*/
    a2 + 160,
    (unsigned int)(int)(float)(v9 * 255.0));
  if ( v5 ) /*0x50b601*/
  {
    if ( *(float *)(a1 + 14988) != v92 || *(float *)(a1 + 14992) != v93 ) /*0x50b625*/
    {
      v71 = (float *)(a1 + 14988); /*0x50b627*/
LABEL_103:
      (*(void (__fastcall **)(_WORD *, float *))(*(_QWORD *)a2 + 184LL))(a2, v71); /*0x50b653*/
    }
  }
  else if ( v87 != v92 || v88 != v93 ) /*0x50b64c*/
  {
    v71 = &v87; /*0x50b64e*/
    goto LABEL_103; /*0x50b64e*/
  }
  (*(void (__fastcall **)(_WORD *))(*(_QWORD *)a2 + 1328LL))(a2); /*0x50b68b*/
  (*(void (__fastcall **)(_WORD *))(*(_QWORD *)a2 + 1288LL))(a2); /*0x50b6b7*/
  result = (*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)a2 + 1296LL))(a2); /*0x50b6cd*/
  if ( !v7 ) /*0x50b6f7*/
  {
    result = (*(__int64 (__fastcall **)(_WORD *, __int16 *))(*(_QWORD *)a2 + 1432LL))(a2, &v73); /*0x50b704*/
    if ( v99 ) /*0x50b70f*/
      result = (*(__int64 (__fastcall **)(_WORD *, __int16 *))(*(_QWORD *)a2 + 1440LL))(a2, &v75); /*0x50b71c*/
  }
  if ( v82 ) /*0x50b727*/
  {
    if ( v70 ) /*0x50b72b*/
      a2[508] = -1; /*0x50b72d*/
    else
      a2[509] = -1; /*0x50b743*/
  }
  return result; /*0x50b737*/
}

// [34/80] Address: 0x50b760
// Method: PlayLayer::applyEnterEffect
__int64 __fastcall PlayLayer_applyEnterEffect(float *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  float v4; // xmm3_4
  float *v5; // r14
  __int64 v8; // r15
  cocos2d *v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm9_4
  bool v13; // cl
  __int16 v14; // dx
  const struct cocos2d::CCPoint *v15; // rax
  __int64 result; // rax
  bool v17; // zf
  __int64 v18; // rax
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22; // eax
  __int64 v23; // rax
  float v24; // xmm0_4
  __int64 v25; // rax
  float *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[16]; // [rsp+20h] [rbp-50h] BYREF
  float v32; // [rsp+A0h] [rbp+30h] BYREF
  float v33; // [rsp+A4h] [rbp+34h]
  char v34; // [rsp+A8h] [rbp+38h] BYREF

  v5 = a1 + 3747; /*0x50b779*/
  v8 = a4; /*0x50b79a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, (const struct cocos2d::CCPoint *)(a1 + 3747)); /*0x50b7a5*/
  v11 = cocos2d::clampf(v10, 0.0, 1.0, v4); /*0x50b7f6*/
  v12 = v11; /*0x50b803*/
  if ( *(_BYTE *)(a2 + 1042) ) /*0x50b7fc*/
    v13 = 1; /*0x50b809*/
  else
    v13 = v11 == 1.0; /*0x50b813*/
  v14 = *(_WORD *)(a2 + 2 * (v8 ^ 1) + 1016); /*0x50b828*/
  if ( v14 != -1 && (a3 != -14 || v14 == -14) ) /*0x50b83e*/
  {
    if ( v13 ) /*0x50b842*/
    {
      *(_BYTE *)(a2 + 1024) = 1; /*0x50b848*/
      if ( (_BYTE)v8 ) /*0x50b852*/
        *(_WORD *)(a2 + 1016) = -1; /*0x50b854*/
      else
        *(_WORD *)(a2 + 1018) = -1; /*0x50b861*/
    }
    goto LABEL_39; /*0x50b85c*/
  }
  if ( !v13 ) /*0x50b870*/
  {
    if ( (_BYTE)v8 ) /*0x50b90b*/
      *(_WORD *)(a2 + 1016) = a3; /*0x50b90d*/
    else
      *(_WORD *)(a2 + 1018) = a3; /*0x50b916*/
    if ( (unsigned int)(a3 + 13) <= 1 ) /*0x50b923*/
    {
      v23 = cocos2d::CCDirector::sharedDirector(); /*0x50b9d9*/
      cocos2d::CCDirector::getWinSize(v23, &v32); /*0x50b9e6*/
      if ( a1[3748] <= (float)((float)(v33 * 0.5) + a1[324]) ) /*0x50ba14*/
        v24 = 0.0; /*0x50ba1b*/
      else
        v24 = 180.0; /*0x50ba16*/
      *(float *)(a2 + 1008) = v24; /*0x50ba1e*/
      if ( a3 != -13 ) /*0x50ba29*/
        goto LABEL_39; /*0x50ba29*/
      v21 = v24 + 180.0; /*0x50ba2b*/
    }
    else if ( a3 == -11 ) /*0x50b92c*/
    {
      v22 = rand(); /*0x50b9b2*/
      v21 = (float)((float)((float)((float)v22 / 32767.0) + (float)((float)v22 / 32767.0)) - 1.0) * 180.0; /*0x50b9cf*/
    }
    else
    {
      if ( (unsigned int)(a3 + 10) > 1 ) /*0x50b938*/
      {
LABEL_39:
        switch ( *(_WORD *)(a2 + 2 * (v8 ^ 1) + 1016) ) /*0x50ba65*/
        {
          case 0xFFF3: /*0x50ba65*/
          case 0xFFF4: /*0x50ba65*/
          case 0xFFF5: /*0x50ba65*/
          case 0xFFF6: /*0x50ba65*/
          case 0xFFF7: /*0x50ba65*/
            cocos2d::ccpForAngle(&v32); /*0x50bb5b*/
            v30 = cocos2d::CCPoint::CCPoint( /*0x50bb82*/
                    (cocos2d::CCPoint *)v31,
                    (float)((float)(1.0 - v12) * 100.0) * v32,
                    (float)((float)(1.0 - v12) * 100.0) * v33);
            cocos2d::CCPoint::operator+(v5, &v34, v30); /*0x50bb92*/
            v26 = (float *)&v34; /*0x50bb98*/
            goto LABEL_53; /*0x50bb9c*/
          case 0xFFF8: /*0x50ba65*/
            v28 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v34, (float)(1.0 - v12) * 100.0, 0.0); /*0x50baea*/
            cocos2d::CCPoint::operator+(v5, &v32, v28); /*0x50bafa*/
            v26 = &v32; /*0x50bb00*/
            goto LABEL_53; /*0x50bb04*/
          case 0xFFF9: /*0x50ba65*/
            v29 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v34, (float)(1.0 - v12) * -100.0, 0.0); /*0x50bb20*/
            cocos2d::CCPoint::operator+(v5, &v32, v29); /*0x50bb30*/
            v26 = &v32; /*0x50bb36*/
            goto LABEL_53; /*0x50bb3a*/
          case 0xFFFA: /*0x50ba65*/
            v25 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v34, 0.0, (float)(1.0 - v12) * -100.0); /*0x50ba7e*/
            cocos2d::CCPoint::operator+(v5, &v32, v25); /*0x50ba8e*/
            v26 = &v32; /*0x50ba94*/
            goto LABEL_53; /*0x50ba98*/
          case 0xFFFB: /*0x50ba65*/
            v27 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v34, 0.0, (float)(1.0 - v12) * 100.0); /*0x50bab4*/
            cocos2d::CCPoint::operator+(v5, &v32, v27); /*0x50bac4*/
            v26 = &v32; /*0x50baca*/
            goto LABEL_53; /*0x50bace*/
          case 0xFFFC: /*0x50ba65*/
            if ( !*(_BYTE *)(a2 + 976) || *(_BYTE *)(a2 + 977) ) /*0x50bbf4*/
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1288LL))(a2); /*0x50bc1f*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1296LL))(a2); /*0x50bc2e*/
            }
            goto LABEL_51; /*0x50bc2e*/
          case 0xFFFD: /*0x50ba65*/
            if ( *(_BYTE *)(a2 + 976) && !*(_BYTE *)(a2 + 977) ) /*0x50bbb1*/
            {
LABEL_51:
              result = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 184LL))(a2, v5); /*0x50bc39*/
            }
            else
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1288LL))(a2); /*0x50bbc1*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1296LL))(a2); /*0x50bbd1*/
              result = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 184LL))(a2, v5); /*0x50bbe0*/
            }
            break; /*0x50bbe6*/
          default:
            v26 = v5; /*0x50bc4a*/
LABEL_53:
            result = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 184LL))(a2, v26); /*0x50bc4d*/
            if ( !*(_BYTE *)(a2 + 976) || *(_BYTE *)(a2 + 977) ) /*0x50bc62*/
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1288LL))(a2); /*0x50bc74*/
              result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1296LL))(a2); /*0x50bc83*/
            }
            break; /*0x50bc83*/
        }
        if ( v12 == 0.0 ) /*0x50bc8f*/
        {
          *(_BYTE *)(a2 + 1024) = 1; /*0x50bc91*/
          if ( (_BYTE)v8 ) /*0x50bc9b*/
            *(_WORD *)(a2 + 1016) = -1; /*0x50bc9d*/
          else
            *(_WORD *)(a2 + 1018) = -1; /*0x50bca7*/
        }
        return result; /*0x50bca5*/
      }
      v18 = cocos2d::CCDirector::sharedDirector(); /*0x50b93e*/
      cocos2d::CCDirector::getWinSize(v18, &v32); /*0x50b94b*/
      v19 = a1[3748]; /*0x50b966*/
      v20 = (float)(v33 * 0.5) + a1[324]; /*0x50b96e*/
      if ( a3 == -10 ) /*0x50b975*/
      {
        if ( v19 <= v20 ) /*0x50b97a*/
          v21 = -45.0; /*0x50b989*/
        else
          v21 = -135.0; /*0x50b97c*/
      }
      else if ( v19 <= v20 ) /*0x50b999*/
      {
        v21 = 45.0; /*0x50b9a8*/
      }
      else
      {
        v21 = 135.0; /*0x50b99b*/
      }
    }
    *(float *)(a2 + 1008) = v21; /*0x50ba2f*/
    goto LABEL_39; /*0x50ba2f*/
  }
  v15 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2); /*0x50b87c*/
  result = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, v15); /*0x50b889*/
  if ( *v5 != v32 || a1[3748] != v33 ) /*0x50b8aa*/
    result = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 184LL))(a2, v5); /*0x50b8b5*/
  if ( *(_BYTE *)(a2 + 1024) ) /*0x50b8bb*/
  {
    v17 = *(_BYTE *)(a2 + 976) == 0; /*0x50b8c8*/
    *(_BYTE *)(a2 + 1024) = 0; /*0x50b8cf*/
    if ( v17 || *(_BYTE *)(a2 + 977) ) /*0x50b8d8*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1288LL))(a2); /*0x50b8ee*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1296LL))(a2); /*0x50b8fd*/
    }
  }
  return result; /*0x50bcaf*/
}

// [35/80] Address: 0x50bd10
// Method: PlayLayer::loadDefaultColors
// Hidden C++ exception states: #wind=3
__int64 __fastcall PlayLayer_loadDefaultColors(_QWORD *a1)
{
  _QWORD *v2; // rax
  cocos2d::CCArray *AllColorActions; // rsi
  unsigned int i; // ebx
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  cocos2d::CCArray *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 j; // rbx
  unsigned int k; // ebx
  __int64 v13; // rcx
  struct cocos2d::CCObject *v14; // rax
  __int64 v15; // rbx
  cocos2d::CCArray *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 m; // rbx
  unsigned int v20; // ebx
  struct cocos2d::CCObject *v21; // rax
  char v22; // r9
  unsigned int v23; // edx
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-A8h]
  int v27; // [rsp+40h] [rbp-88h]
  _BYTE v28[16]; // [rsp+60h] [rbp-68h] BYREF
  int v29; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v31; // [rsp+88h] [rbp-40h] BYREF
  __int128 v32; // [rsp+90h] [rbp-38h]
  __int64 v33; // [rsp+A0h] [rbp-28h]
  __int64 v34; // [rsp+A8h] [rbp-20h]
  unsigned int v35; // [rsp+D8h] [rbp+10h] BYREF

  v30[1] = 0; /*0x50bd3b*/
  v2 = operator new(0x18u); /*0x50bd44*/
  *v2 = v2; /*0x50bd49*/
  v2[1] = v2; /*0x50bd4c*/
  v30[0] = v2; /*0x50bd50*/
  v31 = 0; /*0x50bd55*/
  v32 = 0; /*0x50bd60*/
  v33 = 7; /*0x50bd69*/
  v34 = 8; /*0x50bd75*/
  v29 = 1065353216; /*0x50bd81*/
  sub_3E200(&v31, 16, v2); /*0x50bd99*/
  AllColorActions = (cocos2d::CCArray *)GJEffectManager_getAllColorActions(a1[309]); /*0x50bdab*/
  for ( i = 0; i < cocos2d::CCArray::count(AllColorActions); ++i ) /*0x50bdb3*/
  {
    v5 = cocos2d::CCArray::objectAtIndex(AllColorActions, i); /*0x50bdc5*/
    if ( *((_BYTE *)v5 + 84) ) /*0x50bdcb*/
    {
      v35 = *((_DWORD *)v5 + 23); /*0x50bdd4*/
      sub_67020(&v29, v28, &v35); /*0x50bded*/
    }
  }
  GJEffectManager_reset(a1[309]); /*0x50be08*/
  v6 = *(_QWORD *)(a1[449] + 320LL); /*0x50be14*/
  v8 = (cocos2d::CCArray *)cocos2d::CCArray::create(v7); /*0x50be21*/
  v9 = *(_QWORD *)(v6 + 328); /*0x50be24*/
  if ( v9 ) /*0x50be2e*/
  {
    v10 = *(_QWORD *)(v9 + 56); /*0x50be30*/
    if ( v10 ) /*0x50be37*/
    {
      for ( j = *(_QWORD *)(v10 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x50be39*/
      {
        cocos2d::CCArray::addObject(v8, *(struct cocos2d::CCObject **)(v10 + 264)); /*0x50be4a*/
        v10 = j; /*0x50be50*/
        if ( !j ) /*0x50be56*/
          break; /*0x50be56*/
      }
    }
  }
  for ( k = 0; k < cocos2d::CCArray::count(v8); ++k ) /*0x50be66*/
  {
    v14 = cocos2d::CCArray::objectAtIndex(v8, k); /*0x50be75*/
    LOBYTE(v27) = *((_BYTE *)v14 + 125); /*0x50beae*/
    LOBYTE(v26) = *((_BYTE *)v14 + 84); /*0x50becd*/
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, int, _DWORD, __int64, _DWORD, int, _QWORD, _DWORD, _DWORD))(*a1 + 1112LL))( /*0x50bed7*/
      a1,
      (__int64)v14 + 72,
      (__int64)v14 + 104,
      *((unsigned int *)v14 + 23),
      v26,
      *((_DWORD *)v14 + 24),
      (__int64)v14 + 104,
      *((_DWORD *)v14 + 30),
      v27,
      0,
      *((_DWORD *)v14 + 32),
      *((_DWORD *)v14 + 33));
  }
  v15 = a1[309]; /*0x50bee9*/
  v16 = (cocos2d::CCArray *)cocos2d::CCArray::create(v13); /*0x50bef6*/
  v17 = *(_QWORD *)(v15 + 328); /*0x50bef9*/
  if ( v17 ) /*0x50bf03*/
  {
    v18 = *(_QWORD *)(v17 + 56); /*0x50bf05*/
    if ( v18 ) /*0x50bf0c*/
    {
      for ( m = *(_QWORD *)(v18 + 288); ; m = *(_QWORD *)(m + 288) ) /*0x50bf0e*/
      {
        cocos2d::CCArray::addObject(v16, *(struct cocos2d::CCObject **)(v18 + 264)); /*0x50bf2a*/
        v18 = m; /*0x50bf30*/
        if ( !m ) /*0x50bf36*/
          break; /*0x50bf36*/
      }
    }
  }
  v20 = 0; /*0x50bf41*/
  if ( cocos2d::CCArray::count(v16) ) /*0x50bf46*/
  {
    while ( 1 ) /*0x50bf75*/
    {
      v21 = cocos2d::CCArray::objectAtIndex(v16, v20); /*0x50bf75*/
      v22 = *((_BYTE *)v21 + 84); /*0x50bf7b*/
      v23 = *((_DWORD *)v21 + 23); /*0x50bf80*/
      v24 = *(_QWORD *)(v31 /*0x50bfcc*/
                      + 16
                      * (v33
                       & (0x100000001B3LL
                        * (((unsigned __int64)v23 >> 24)
                         ^ (0x100000001B3LL
                          * (BYTE2(v23)
                           ^ (0x100000001B3LL
                            * ((0x100000001B3LL * ((unsigned __int8)v23 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v23))))))))
                      + 8);
      if ( v24 == v30[0] ) /*0x50bfd6*/
        goto LABEL_23; /*0x50bfd6*/
      if ( v23 != *(_DWORD *)(v24 + 16) ) /*0x50bfdf*/
        break; /*0x50bfdf*/
LABEL_24:
      if ( v22 != (v24 != 0) ) /*0x50bffd*/
      {
        v35 = v23; /*0x50bfff*/
        sub_67020(a1 + 1913, v28, &v35); /*0x50c01a*/
      }
      if ( ++v20 >= cocos2d::CCArray::count(v16) ) /*0x50c02c*/
        goto LABEL_27; /*0x50c02c*/
    }
    while ( v24 != *(_QWORD *)(v31 /*0x50bfe4*/
                             + 16
                             * (v33
                              & (0x100000001B3LL
                               * (((unsigned __int64)v23 >> 24)
                                ^ (0x100000001B3LL
                                 * (BYTE2(v23)
                                  ^ (0x100000001B3LL
                                   * ((0x100000001B3LL * ((unsigned __int8)v23 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v23))))))))) )
    {
      v24 = *(_QWORD *)(v24 + 8); /*0x50bfe6*/
      if ( v23 == *(_DWORD *)(v24 + 16) ) /*0x50bfed*/
        goto LABEL_24; /*0x50bfed*/
    }
LABEL_23:
    v24 = 0; /*0x50bff1*/
    goto LABEL_24; /*0x50bff1*/
  }
LABEL_27:
  GJEffectManager_updateEffects(a1[309]); /*0x50c032*/
  sub_361D10(a1[309]); /*0x50c048*/
  sub_361DD0(a1[309]); /*0x50c054*/
  sub_3DA90(&v31); /*0x50c062*/
  return sub_3DB00(v30); /*0x50c071*/
}

// [36/80] Address: 0x50c090
// Method: PlayLayer::updateColor
__int64 __fastcall PlayLayer_updateColor(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        char a5,
        int a6,
        __int64 a7,
        int a8,
        char a9,
        __int64 a10,
        int a11)
{
  char v12; // bl
  __int64 result; // rax
  __int64 v14; // rdi
  _BYTE v15[16]; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = a4; /*0x50c09a*/
  v12 = a5; /*0x50c0b7*/
  result = GJBaseGameLayer_updateColor(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11); /*0x50c109*/
  v14 = result; /*0x50c10e*/
  if ( v12 != *(_BYTE *)(a1 + 12733) ) /*0x50c117*/
  {
    sub_67020(a1 + 15304, v15, &v16); /*0x50c12d*/
    return v14; /*0x50c132*/
  }
  return result; /*0x50c135*/
}

// [37/80] Address: 0x50c150
// Method: PlayLayer::playGravityEffect
// Hidden C++ exception states: #wind=1
void __fastcall PlayLayer_playGravityEffect(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  cocos2d::CCSprite *v7; // r14
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int16 v13; // si
  char v14; // r15
  __int64 v15; // rax
  cocos2d::CCArray *v16; // rsi
  struct cocos2d::CCObject *v17; // rax
  struct cocos2d::CCFiniteTimeAction *v18; // rbx
  __int64 v19; // rax
  struct cocos2d::CCAction *v20; // rax
  __int64 v21; // rbx
  struct cocos2d::CCFiniteTimeAction *v22; // rax
  struct cocos2d::CCAction *v23; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v25[8]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-20h] BYREF
  void *v27; // [rsp+80h] [rbp+30h] BYREF
  float v28; // [rsp+90h] [rbp+40h] BYREF
  float v29; // [rsp+94h] [rbp+44h]
  char v30; // [rsp+98h] [rbp+48h] BYREF

  if ( !*(_BYTE *)(a1 + 15496) ) /*0x50c16e*/
  {
    v4 = qword_905FD0; /*0x50c17b*/
    if ( !qword_905FD0 ) /*0x50c185*/
    {
      v27 = operator new(0x6E8u); /*0x50c191*/
      qword_905FD0 = sub_2723A0(v27); /*0x50c19e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50c1af*/
      v4 = qword_905FD0; /*0x50c1b1*/
    }
    if ( !*(_BYTE *)(v4 + 957) ) /*0x50c1b8*/
    {
      v5 = *(_DWORD *)(a1 + 15100); /*0x50c1c5*/
      if ( v5 < *(_DWORD *)(a1 + 15096) ) /*0x50c1d1*/
      {
        *(_DWORD *)(a1 + 15100) = v5 + 1; /*0x50c1d9*/
        v6 = cocos2d::CCDirector::sharedDirector(); /*0x50c1df*/
        cocos2d::CCDirector::getWinSize(v6, &v28); /*0x50c1ec*/
        v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 15112), *(_DWORD *)(a1 + 15104)); /*0x50c205*/
        LOBYTE(v8) = 1; /*0x50c212*/
        (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v7 + 520LL))(v7, v8); /*0x50c217*/
        v9 = *(_DWORD *)(a1 + 15104); /*0x50c21a*/
        v10 = 0; /*0x50c228*/
        if ( v9 < *(_DWORD *)(a1 + 15096) - 1 ) /*0x50c22c*/
          *(_DWORD *)(a1 + 15104) = v9 + 1; /*0x50c238*/
        else
          *(_DWORD *)(a1 + 15104) = 0; /*0x50c22e*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, v28 * 0.5, v29 + 95.0); /*0x50c260*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v24, v28 * 0.5, -95.0); /*0x50c27b*/
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 3576) + 2507LL) ) /*0x50c288*/
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, v28 + 95.0, v29 * 0.5); /*0x50c2aa*/
          cocos2d::CCPoint::operator=(v24, v11); /*0x50c2b7*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, -95.0, v29 * 0.5); /*0x50c2d2*/
          cocos2d::CCPoint::operator=(&v30, v12); /*0x50c2df*/
        }
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25); /*0x50c2e9*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v26); /*0x50c2f3*/
        if ( a2 ) /*0x50c300*/
        {
          cocos2d::CCPoint::operator=(v25, v24); /*0x50c306*/
          cocos2d::CCPoint::operator=(v26, &v30); /*0x50c314*/
          v13 = -1; /*0x50c31a*/
          v14 = 0; /*0x50c321*/
        }
        else
        {
          cocos2d::CCPoint::operator=(v25, &v30); /*0x50c32f*/
          cocos2d::CCPoint::operator=(v26, v24); /*0x50c33d*/
          cocos2d::CCSprite::setFlipY(v7, 1); /*0x50c348*/
          LOWORD(v27) = -256; /*0x50c34e*/
          v14 = -1; /*0x50c354*/
          v13 = -256; /*0x50c357*/
        }
        (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v7 + 352LL))(v7); /*0x50c37d*/
        (*(void (__fastcall **)(__int64, cocos2d::CCSprite *, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v7, 0); /*0x50c38f*/
        (*(void (__fastcall **)(cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v7 + 184LL))(v7, v25); /*0x50c39f*/
        LOWORD(v27) = v13; /*0x50c3a5*/
        BYTE2(v27) = v14; /*0x50c3a9*/
        v15 = (*(__int64 (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v7 + 472LL))(v7, 1); /*0x50c3b8*/
        if ( v15 ) /*0x50c3c1*/
        {
          v16 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 480LL))(v15); /*0x50c3d2*/
          if ( cocos2d::CCArray::count(v16) ) /*0x50c3d8*/
          {
            do /*0x50c40a*/
            {
              v17 = cocos2d::CCArray::objectAtIndex(v16, v10); /*0x50c3e7*/
              (**((void (__fastcall ***)(__int64, void **))v17 + 40))((__int64)v17 + 320, &v27); /*0x50c3fb*/
              ++v10; /*0x50c3fd*/
            }
            while ( v10 < cocos2d::CCArray::count(v16) ); /*0x50c40a*/
          }
        }
        v18 = cocos2d::CCMoveTo::create(0.40000001, (const struct cocos2d::CCPoint *)v26); /*0x50c421*/
        v19 = cocos2d::CCCallFunc::create(v7, sub_3E5B0); /*0x50c42e*/
        v20 = cocos2d::CCSequence::create(v18, v19, 0); /*0x50c43d*/
        cocos2d::CCNode::runAction(v7, v20); /*0x50c449*/
        v21 = cocos2d::CCCallFunc::create(a1, PlayLayer_gravityEffectFinished); /*0x50c45f*/
        v22 = cocos2d::CCDelayTime::create(0.40000001); /*0x50c465*/
        v23 = cocos2d::CCSequence::create(v22, v21, 0); /*0x50c474*/
        cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v23); /*0x50c480*/
      }
    }
  }
}

// [38/80] Address: 0x50c4a0
// Method: PlayLayer::gravityEffectFinished
__int64 __fastcall PlayLayer_gravityEffectFinished(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 15100) - 1); /*0x50c4a8*/
  if ( *(_DWORD *)(a1 + 15100) - 1 <= 0 ) /*0x50c4ac*/
    result = 0; /*0x50c4ac*/
  *(_DWORD *)(a1 + 15100) = result; /*0x50c4af*/
  return result; /*0x50c4b5*/
}

// [39/80] Address: 0x50c650
// Method: PlayLayer::updateTimeLabel
// Hidden C++ exception states: #wind=2
void __fastcall PlayLayer_updateTimeLabel(__int64 a1, unsigned int a2, int a3, char a4)
{
  cocos2d::CCString *v8; // rax
  char *CString; // rax
  size_t v10; // r8
  _QWORD *v11; // rax
  size_t v12; // r8
  void **v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  float v20; // xmm0_4
  __int64 v21; // rax
  void *v22; // rcx
  float v23; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v24[8]; // [rsp+38h] [rbp-70h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v26; // [rsp+50h] [rbp-58h]
  unsigned __int64 v27; // [rsp+58h] [rbp-50h]
  _BYTE v28[32]; // [rsp+60h] [rbp-48h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 15056) + 344LL))(*(_QWORD *)(a1 + 15056)) /*0x50c695*/
    && *(_BYTE *)(a1 + 12734) )
  {
    *(_OWORD *)Block = 0; /*0x50c6a5*/
    v26 = 0; /*0x50c6aa*/
    v27 = 15; /*0x50c6b3*/
    LOBYTE(Block[0]) = 0; /*0x50c6bc*/
    if ( a4 ) /*0x50c6c6*/
    {
      v8 = cocos2d::CCString::createWithFormat("%i.%02d", a2, a3); /*0x50c6d2*/
      CString = (char *)cocos2d::CCString::getCString(v8); /*0x50c6db*/
      v10 = -1; /*0x50c6e1*/
      do /*0x50c6f3*/
        ++v10; /*0x50c6f0*/
      while ( CString[v10] ); /*0x50c6f3*/
      sub_3F5A0(Block, CString, v10); /*0x50c702*/
    }
    else
    {
      v11 = (_QWORD *)GameToolbox_intToString(v28, a2); /*0x50c70e*/
      if ( v11[3] > 0xFu ) /*0x50c719*/
        v11 = (_QWORD *)*v11; /*0x50c71b*/
      v12 = -1; /*0x50c71e*/
      do /*0x50c728*/
        ++v12; /*0x50c725*/
      while ( *((_BYTE *)v11 + v12) ); /*0x50c728*/
      sub_3F5A0(Block, v11, v12); /*0x50c737*/
      sub_3C310(v28); /*0x50c742*/
    }
    v13 = Block; /*0x50c747*/
    if ( v27 > 0xF ) /*0x50c752*/
      v13 = (void **)Block[0]; /*0x50c752*/
    (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 15056) + 360LL))(*(_QWORD *)(a1 + 15056) + 360LL, v13); /*0x50c769*/
    v14 = cocos2d::CCDirector::sharedDirector(); /*0x50c76b*/
    cocos2d::CCDirector::getWinSize(v14, &v23); /*0x50c779*/
    v15 = v26; /*0x50c77f*/
    v16 = *(__int64 **)(a1 + 15056); /*0x50c784*/
    v17 = *v16; /*0x50c78b*/
    v18 = (*(__int64 (__fastcall **)(__int64 *))(*v16 + 200))(v16); /*0x50c791*/
    v19 = 5 * v15; /*0x50c7a5*/
    if ( 5 * v15 < 0 ) /*0x50c7af*/
      v20 = (float)(int)(v19 & 1 | (v19 >> 1)) + (float)(int)(v19 & 1 | (v19 >> 1)); /*0x50c7c9*/
    else
      v20 = (float)(int)v19; /*0x50c7b1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v24, (float)(v23 * 0.5) - v20, *(float *)(v18 + 4)); /*0x50c7db*/
    (*(void (__fastcall **)(__int64 *, __int64))(v17 + 184))(v16, v21); /*0x50c7e7*/
    if ( v27 > 0xF ) /*0x50c7f7*/
    {
      v22 = Block[0]; /*0x50c7fc*/
      if ( v27 + 1 >= 0x1000 ) /*0x50c80b*/
      {
        v22 = (void *)*((_QWORD *)Block[0] - 1); /*0x50c811*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F ) /*0x50c820*/
          invoke_watson(0, 0, 0, 0, 0); /*0x50c835*/
      }
      j_j_free(v22); /*0x50c83c*/
    }
  }
}

// [40/80] Address: 0x50c870
// Method: PlayLayer::toggleProgressbar
// Hidden C++ exception states: #wind=3
__int64 __fastcall PlayLayer_toggleProgressbar(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // bp
  float v4; // xmm6_4
  float v5; // xmm7_4
  const char *v6; // rdx
  unsigned __int8 GameVariable; // r14
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 result; // rax
  float v18; // [rsp+60h] [rbp+8h] BYREF
  void *v19; // [rsp+68h] [rbp+10h] BYREF

  v2 = qword_905FD0; /*0x50c88f*/
  if ( !qword_905FD0 ) /*0x50c899*/
  {
    v19 = operator new(0x6E8u); /*0x50c8a5*/
    qword_905FD0 = sub_2723A0(v19); /*0x50c8b3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50c8c4*/
    v2 = qword_905FD0; /*0x50c8c6*/
  }
  v3 = *(_BYTE *)(v2 + 956); /*0x50c8cd*/
  v4 = 0.0; /*0x50c8d4*/
  if ( *(_BYTE *)(a1 + 12734) )
  {
    v3 = 0; /*0x50c8e0*/
    v5 = 0.0; /*0x50c8e3*/
    v6 = "0145"; /*0x50c8e6*/
  }
  else
  {
    v5 = (float)(v3 != 0 ? 0x6E : 0);
    v6 = "0040"; /*0x50c901*/
  }
  GameVariable = GameManager_getGameVariable(v2, v6); /*0x50c90d*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 15072) + 336LL))(*(_QWORD *)(a1 + 15072), v3); /*0x50c926*/
  v8 = cocos2d::CCDirector::sharedDirector(); /*0x50c929*/
  cocos2d::CCDirector::getWinSize(v8, &v18); /*0x50c937*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 15056) + 336LL))(*(_QWORD *)(a1 + 15056), GameVariable); /*0x50c94b*/
  v9 = *(__int64 **)(a1 + 15056); /*0x50c951*/
  v10 = *v9; /*0x50c958*/
  v11 = (*(__int64 (__fastcall **)(__int64 *))(*v9 + 200))(v9); /*0x50c95b*/
  v12 = *(_QWORD *)(a1 + 15056); /*0x50c961*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, (float)(v18 * 0.5) + v5, *(float *)(v11 + 4)); /*0x50c984*/
  (*(void (__fastcall **)(__int64, __int64))(v10 + 184))(v12, v13); /*0x50c990*/
  if ( !v3 && !*(_BYTE *)(a1 + 12734) ) /*0x50c99b*/
    v4 = 0.5; /*0x50c9a4*/
  v14 = **(_QWORD **)(a1 + 15056); /*0x50c9b3*/
  v15 = *(_QWORD *)(a1 + 15056); /*0x50c9b6*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, v4, 0.5); /*0x50c9c9*/
  (*(void (__fastcall **)(__int64, __int64))(v14 + 288))(v15, v16); /*0x50c9d5*/
  result = sub_50C4C0(a1); /*0x50c9de*/
  if ( *(_BYTE *)(a1 + 12734) ) /*0x50c9e3*/
  {
    if ( GameVariable ) /*0x50c9ef*/
      return sub_33E860(a1); /*0x50c9f4*/
  }
  return result; /*0x50c9f9*/
}

// [41/80] Address: 0x50ca20
// Method: PlayLayer::toggleMusicInPractice
// Hidden C++ exception states: #wind=3
__int64 __fastcall PlayLayer_toggleMusicInPractice(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  cocos2d::CCString *v4; // rax
  bool v5; // bl
  __int64 result; // rax
  __int64 v7; // rcx
  void *v8; // [rsp+20h] [rbp-38h]
  void *v9; // [rsp+20h] [rbp-38h]
  _BYTE v10[32]; // [rsp+28h] [rbp-30h] BYREF

  v2 = qword_905FE0; /*0x50ca3c*/
  if ( !qword_905FE0 ) /*0x50ca46*/
  {
    v8 = operator new(0x3E8u); /*0x50ca52*/
    qword_905FE0 = sub_2D2B40(v8); /*0x50ca60*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x50ca71*/
    v2 = qword_905FE0; /*0x50ca73*/
  }
  if ( (unsigned __int8)sub_2E5B30(a1, 12, 17) ) /*0x50ca85*/
  {
    GameStatsManager_getRewardKey(v3, v10, 17, 12); /*0x50ca9f*/
    v4 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v2 + 896), v10); /*0x50cab1*/
    v5 = cocos2d::CCString::boolValue(v4); /*0x50cac0*/
    result = sub_3C310(v10); /*0x50cac8*/
    if ( v5 ) /*0x50cacf*/
      goto LABEL_9; /*0x50cacf*/
  }
  v7 = qword_905FD0; /*0x50cad1*/
  if ( !qword_905FD0 ) /*0x50cadb*/
  {
    v9 = operator new(0x6E8u); /*0x50cae7*/
    qword_905FD0 = sub_2723A0(v9); /*0x50caf5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50cb06*/
    v7 = qword_905FD0; /*0x50cb08*/
  }
  result = GameManager_getGameVariable(v7, "0125"); /*0x50cb16*/
  if ( (_BYTE)result && (result = *(_QWORD *)(a1 + 2168), *(_DWORD *)(result + 1220) == 2) ) /*0x50cb2d*/
LABEL_9:
    *(_BYTE *)(a1 + 13089) = 1; /*0x50cb2f*/
  else
    *(_BYTE *)(a1 + 13089) = 0; /*0x50cb38*/
  return result; /*0x50cb3f*/
}

// [42/80] Address: 0x50cb60
// Method: PlayLayer::flipArt
__int64 __fastcall PlayLayer_flipArt(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 15048) + 120LL))(*(_QWORD *)(a1 + 15048));
}

// [43/80] Address: 0x50d550
// Method: PlayLayer::toggleInfoLabel
__int64 __fastcall PlayLayer_toggleInfoLabel(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 GameVariable; // al
  void *v5; // [rsp+30h] [rbp+8h]

  v2 = qword_905FD0; /*0x50d559*/
  if ( !qword_905FD0 ) /*0x50d563*/
  {
    v5 = operator new(0x6E8u); /*0x50d56f*/
    qword_905FD0 = sub_2723A0(v5); /*0x50d57d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50d58e*/
    v2 = qword_905FD0; /*0x50d590*/
  }
  GameVariable = GameManager_getGameVariable(v2, "0109"); /*0x50d59e*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 15504) + 336LL))(*(_QWORD *)(a1 + 15504), GameVariable); /*0x50d5b7*/
  return GJUserMessage_create_0(a1); /*0x50d5bd*/
}

// [44/80] Address: 0x50d5d0
// Method: PlayLayer::timeForPos
__int64 __fastcall PlayLayer_timeForPos(_QWORD *a1, const struct cocos2d::CCPoint *a2, int a3, int a4, char a5)
{
  __int64 v6; // rsi
  char v8; // bl
  int v9; // edi
  int v10; // eax
  char v12; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1[1872]; /*0x50d5ec*/
  v8 = *(_BYTE *)(a1[447] + 2936LL); /*0x50d5f6*/
  v9 = *(_DWORD *)(a1[449] + 332LL); /*0x50d609*/
  v10 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, a2); /*0x50d60f*/
  return LevelTools_timeForPos(v10, v6, v9, a3, a4, a5, v8, 0, 0, 0); /*0x50d64c*/
}

// [45/80] Address: 0x50d670
// Method: PlayLayer::posForTime
__int64 __fastcall PlayLayer_posForTime(_QWORD *a1, __int64 a2)
{
  sub_463590(a2, a2, a1[1872], *(_DWORD *)(a1[449] + 332LL), *(_BYTE *)(a1[447] + 2936LL), 0, 0, (__int64)(a1 + 104)); /*0x50d6bd*/
  return a2; /*0x50d6c5*/
}

// [46/80] Address: 0x50d6d0
// Method: PlayLayer::resetSPTriggered
__int64 *__fastcall PlayLayer_resetSPTriggered(__int64 a1)
{
  __int64 *result; // rax
  __int64 v2; // rcx
  __int64 *i; // rdx
  __int64 v4; // rcx

  result = *(__int64 **)(a1 + 14976); /*0x50d6d0*/
  if ( result ) /*0x50d6da*/
  {
    result = (__int64 *)result[7]; /*0x50d6dc*/
    v2 = *(unsigned int *)result; /*0x50d6e0*/
    if ( (_DWORD)v2 ) /*0x50d6e4*/
    {
      result = (__int64 *)result[2]; /*0x50d6e6*/
      for ( i = &result[v2 - 1]; result <= i; *(_BYTE *)(v4 + 1850) = 0 ) /*0x50d6f5*/
      {
        v4 = *result; /*0x50d6f7*/
        if ( !*result ) /*0x50d6f7*/
          break; /*0x50d6fd*/
        ++result; /*0x50d6ff*/
      }
    }
  }
  return result; /*0x50d70f*/
}

// [47/80] Address: 0x50d710
// Method: PlayLayer::toggleGroundVisibility
__int64 __fastcall PlayLayer_toggleGroundVisibility(__int64 a1, __int64 a2)
{
  char v3; // bl
  _BYTE *v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE *v7; // rcx

  v3 = a2; /*0x50d71d*/
  v4 = *(_BYTE **)(a1 + 4400); /*0x50d720*/
  if ( v4[457] != (_BYTE)a2 ) /*0x50d72d*/
  {
    v5 = v4[456] == 0; /*0x50d72f*/
    v4[457] = a2; /*0x50d736*/
    if ( v5 || !(_BYTE)a2 ) /*0x50d740*/
      a2 = 0; /*0x50d746*/
    else
      LOBYTE(a2) = 1; /*0x50d742*/
    result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 336LL))(v4, a2); /*0x50d74b*/
  }
  v7 = *(_BYTE **)(a1 + 4408); /*0x50d751*/
  if ( v7[457] != v3 ) /*0x50d75e*/
  {
    v5 = v7[456] == 0; /*0x50d760*/
    v7[457] = v3; /*0x50d767*/
    if ( v5 || !v3 ) /*0x50d771*/
      a2 = 0; /*0x50d777*/
    else
      LOBYTE(a2) = 1; /*0x50d773*/
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 336LL))(v7, a2); /*0x50d77c*/
  }
  return result; /*0x50d782*/
}

// [48/80] Address: 0x50d790
// Method: PlayLayer::toggleMGVisibility
__int64 __fastcall PlayLayer_toggleMGVisibility(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rcx
  bool v3; // zf
  __int64 result; // rax

  v2 = *(_BYTE **)(a1 + 4416); /*0x50d790*/
  if ( v2 && v2[449] != (_BYTE)a2 ) /*0x50d7a2*/
  {
    v3 = v2[448] == 0; /*0x50d7a4*/
    v2[449] = a2; /*0x50d7ab*/
    if ( v3 || !(_BYTE)a2 ) /*0x50d7b5*/
    {
      return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v2 + 336LL))(v2, 0); /*0x50d7c8*/
    }
    else
    {
      LOBYTE(a2) = 1; /*0x50d7ba*/
      return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v2 + 336LL))(v2, a2); /*0x50d7bc*/
    }
  }
  return result; /*0x50d7cf*/
}

// [49/80] Address: 0x50d7d0
// Method: PlayLayer::toggleHideAttempts
// Hidden C++ exception states: #wind=2
void __fastcall PlayLayer_toggleHideAttempts(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  void *v6; // [rsp+30h] [rbp+8h]
  void *v7; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 14743) != a2 ) /*0x50d7df*/
  {
    *(_BYTE *)(a1 + 14743) = a2; /*0x50d7e5*/
    if ( a2 ) /*0x50d7ed*/
      goto LABEL_12; /*0x50d7ed*/
    if ( *(_BYTE *)(a1 + 13088) ) /*0x50d7f3*/
    {
      v3 = qword_905FD0; /*0x50d7fb*/
      if ( !qword_905FD0 ) /*0x50d805*/
      {
        v6 = operator new(0x6E8u); /*0x50d811*/
        qword_905FD0 = sub_2723A0(v6); /*0x50d81f*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50d830*/
        v3 = qword_905FD0; /*0x50d832*/
      }
      if ( (unsigned __int8)GameManager_getGameVariable(v3, "0134") ) /*0x50d840*/
        goto LABEL_12; /*0x50d840*/
    }
    v4 = qword_905FD0; /*0x50d849*/
    if ( !qword_905FD0 ) /*0x50d853*/
    {
      v7 = operator new(0x6E8u); /*0x50d85f*/
      qword_905FD0 = sub_2723A0(v7); /*0x50d86d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50d87e*/
      v4 = qword_905FD0; /*0x50d880*/
    }
    if ( (unsigned __int8)GameManager_getGameVariable(v4, "0135") ) /*0x50d88e*/
    {
LABEL_12:
      v5 = 0; /*0x50d8a4*/
    }
    else
    {
      if ( *(int *)(a1 + 12708) <= 0 ) /*0x50d89e*/
        return; /*0x50d89e*/
      LOBYTE(v5) = 1; /*0x50d8a0*/
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 15048) + 336LL))(*(_QWORD *)(a1 + 15048), v5); /*0x50d8b5*/
  }
}

// [50/80] Address: 0x50d8d0
// Method: PlayLayer::toggleGlitter
// Hidden C++ exception states: #wind=1
void __fastcall PlayLayer_toggleGlitter(__int64 a1, char a2)
{
  __int64 v4; // rax
  void *v5; // [rsp+40h] [rbp+18h]

  v4 = qword_905FD0; /*0x50d8e0*/
  if ( !qword_905FD0 ) /*0x50d8ea*/
  {
    v5 = operator new(0x6E8u); /*0x50d8f6*/
    qword_905FD0 = sub_2723A0(v5); /*0x50d904*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50d915*/
    v4 = qword_905FD0; /*0x50d917*/
  }
  if ( !*(_BYTE *)(v4 + 957) ) /*0x50d91e*/
  {
    *(_BYTE *)(a1 + 15492) = a2; /*0x50d927*/
    if ( *(_BYTE *)(a1 + 15493) || !a2 ) /*0x50d93a*/
      cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(a1 + 13184)); /*0x50d95b*/
    else
      cocos2d::CCParticleSystem::resumeSystem(*(cocos2d::CCParticleSystem **)(a1 + 13184)); /*0x50d94d*/
  }
}

// [52/80] Address: 0x50ed10
// Method: PlayLayer::currencyWillExit
__int64 __fastcall PlayLayer_currencyWillExit(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 result; // rax

  v1 = (_BYTE *)(a1 - 14720); /*0x50ed10*/
  if ( v1[15382] ) /*0x50ed17*/
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v1 + 1456LL))(v1); /*0x50ed23*/
  return result; /*0x50ed2a*/
}

// [53/80] Address: 0x50ed30
// Method: PlayLayer::dialogClosed
__int64 __fastcall PlayLayer_dialogClosed(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 result; // rax

  v1 = (_BYTE *)(a1 - 14728); /*0x50ed30*/
  if ( v1[15382] ) /*0x50ed37*/
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v1 + 1456LL))(v1); /*0x50ed43*/
  return result; /*0x50ed4a*/
}

// [54/80] Address: 0x50ed50
// Method: PlayLayer::showHint
struct cocos2d::CCAction *__fastcall PlayLayer_showHint(__int64 a1)
{
  __int64 v2; // rax
  float v3; // xmm7_4
  int v4; // edx
  const char *v5; // rcx
  cocos2d::CCNode *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  struct cocos2d::CCFiniteTimeAction *v9; // rsi
  struct cocos2d::CCDelayTime *v10; // rdi
  struct cocos2d::CCFadeOut *v11; // rbx
  __int64 v12; // rax
  struct cocos2d::CCAction *v13; // rax
  float v15; // [rsp+70h] [rbp+8h] BYREF
  float v16; // [rsp+74h] [rbp+Ch]
  char v17; // [rsp+78h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 15065) = 1; /*0x50ed6a*/
  v2 = cocos2d::CCDirector::sharedDirector(); /*0x50ed71*/
  cocos2d::CCDirector::getWinSize(v2, &v15); /*0x50ed7f*/
  v3 = 3.0; /*0x50ed94*/
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 2168) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 2168) + 332LL); /*0x50eda2*/
  if ( v4 == 1 || v4 == 1001 ) /*0x50edb3*/
  {
    v5 = "Click / Space to jump over the spikes"; /*0x50edce*/
  }
  else
  {
    v5 = "Click while touching a ring to jump mid air"; /*0x50edbd*/
    v3 = 4.0; /*0x50edc4*/
  }
  v6 = cocos2d::CCLabelBMFont::create(v5, (const char *)&qword_6FFF68); /*0x50ede5*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v6 + 160LL))(v6); /*0x50edf5*/
  (*(void (__fastcall **)(__int64, cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v6, 3); /*0x50ee0d*/
  v7 = *(_QWORD *)v6; /*0x50ee29*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, v15 * 0.5, (float)(v16 * 0.5) + 60.0); /*0x50ee3c*/
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v7 + 184))(v6, v8); /*0x50ee48*/
  (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v6 + 46) + 40LL))((__int64)v6 + 368, 0); /*0x50ee5a*/
  v9 = cocos2d::CCFadeIn::create(0.5); /*0x50ee69*/
  v10 = cocos2d::CCDelayTime::create(v3); /*0x50ee75*/
  v11 = cocos2d::CCFadeOut::create(0.5); /*0x50ee88*/
  v12 = cocos2d::CCCallFunc::create(v6, sub_3E5B0); /*0x50ee8b*/
  v13 = cocos2d::CCSequence::create(v9, v10, v11, v12, 0); /*0x50eea6*/
  return cocos2d::CCNode::runAction(v6, v13); /*0x50eeb8*/
}

// [55/80] Address: 0x50eee0
// Method: PlayLayer::circleWaveWillBeRemoved
void __fastcall PlayLayer_circleWaveWillBeRemoved(__int64 a1, struct cocos2d::CCObject *a2)
{
  cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(a1 + 304), a2, 1); /*0x50eeea*/
}

// [56/80] Address: 0x50ef00
// Method: PlayLayer::processCheckpoints
// Hidden C++ exception states: #wind=3
void __fastcall PlayLayer_processCheckpoints(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  cocos2d::CCObject *v14; // rcx
  __int64 v15; // rdx
  void *v16; // [rsp+80h] [rbp+8h] BYREF
  void *v17; // [rsp+88h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 15612) ) /*0x50ef15*/
  {
    *(_BYTE *)(a1 + 15612) = 0; /*0x50ef1e*/
    PlayLayer_markCheckpoint(a1); /*0x50ef25*/
  }
  v2 = *(_QWORD *)(a1 + 15616); /*0x50ef2a*/
  if ( v2 ) /*0x50ef34*/
  {
    v3 = *(unsigned int *)(v2 + 1864); /*0x50ef3a*/
    if ( (int)v3 > 0 ) /*0x50ef46*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 408) + 8LL))(a1 + 408, v3, 0); /*0x50ef8e*/
    v4 = qword_905FD0; /*0x50eff2*/
    if ( !qword_905FD0 ) /*0x50effc*/
    {
      v16 = operator new(0x6E8u); /*0x50f008*/
      qword_905FD0 = sub_2723A0(v16); /*0x50f019*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50f02a*/
      v4 = qword_905FD0; /*0x50f02c*/
    }
    if ( (unsigned __int8)GameManager_getGameVariable(v4, "0146") ) /*0x50f03a*/
      goto LABEL_27; /*0x50f03a*/
    v5 = PlayLayer_markCheckpoint(a1); /*0x50f04f*/
    if ( !v5 ) /*0x50f055*/
      goto LABEL_27; /*0x50f055*/
    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 15616) + 1208LL))(*(_QWORD *)(a1 + 15616), &v16); /*0x50f074*/
    v6 = *(_QWORD *)(a1 + 15616); /*0x50f077*/
    if ( *(_BYTE *)(v6 + 1700) ) /*0x50f07e*/
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3576) + 200LL))(*(_QWORD *)(a1 + 3576)); /*0x50f091*/
    }
    else
    {
      if ( *(int *)(v6 + 1484) <= 0 || (v8 = sub_3287A0(a1)) == 0 ) /*0x50f0ae*/
      {
LABEL_16:
        v9 = *(__int64 **)(v5 + 3680); /*0x50f0d9*/
        v10 = *v9; /*0x50f0e0*/
        v11 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, (const struct cocos2d::CCPoint *)&v16); /*0x50f0f3*/
        (*(void (__fastcall **)(__int64 *, __int64))(v10 + 1216))(v9, v11); /*0x50f0ff*/
        cocos2d::CCPoint::operator=(*(_QWORD *)(v5 + 3688) + 320LL, &v16); /*0x50f11b*/
        *(_BYTE *)(*(_QWORD *)(v5 + 3688) + 432LL) = 1; /*0x50f128*/
        v12 = *(_QWORD *)(v5 + 3680); /*0x50f12f*/
        *(_BYTE *)(v12 + 774) = 1; /*0x50f136*/
        *(_BYTE *)(v12 + 1007) = 1; /*0x50f13d*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v12 + 320) + 40LL))(v12 + 320, 0); /*0x50f150*/
        *(_DWORD *)(v5 + 3708) = *(_DWORD *)(*(_QWORD *)(a1 + 15616) + 924LL); /*0x50f160*/
        *(_DWORD *)(v5 + 3712) = *(_DWORD *)(*(_QWORD *)(a1 + 15616) + 1860LL); /*0x50f173*/
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 2168) + 1220LL) != 1 && !*(_BYTE *)(a1 + 13088) && !*(_BYTE *)(a1 + 13160) ) /*0x50f19a*/
        {
          v13 = qword_905FD0; /*0x50f1a7*/
          if ( !qword_905FD0 ) /*0x50f1b1*/
          {
            v17 = operator new(0x6E8u); /*0x50f1bd*/
            qword_905FD0 = sub_2723A0(v17); /*0x50f1ce*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50f1df*/
            v13 = qword_905FD0; /*0x50f1e1*/
          }
          if ( (!(unsigned __int8)GameManager_getGameVariable(v13, "0192") || *(_BYTE *)(*(_QWORD *)(a1 + 2168) + 1704LL)) /*0x50f20f*/
            && *(_QWORD *)(a1 + 14896) != v5 )
          {
            cocos2d::CCObject::retain((cocos2d::CCObject *)v5); /*0x50f214*/
            v14 = *(cocos2d::CCObject **)(a1 + 14896); /*0x50f21a*/
            if ( v14 ) /*0x50f224*/
              cocos2d::CCObject::release(v14); /*0x50f226*/
            *(_QWORD *)(a1 + 14896) = v5; /*0x50f22c*/
          }
        }
LABEL_27:
        v15 = *(unsigned int *)(*(_QWORD *)(a1 + 15616) + 1480LL); /*0x50f233*/
        if ( (int)v15 > 0 ) /*0x50f243*/
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 408) + 8LL))(a1 + 408, v15, 0); /*0x50f28b*/
        sub_337190(a1, 60, 0, 0); /*0x50f2ef*/
        *(_QWORD *)(a1 + 15616) = 0; /*0x50f2f4*/
        return; /*0x50f2f4*/
      }
      v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 1208LL))(v8, &v17); /*0x50f0c5*/
    }
    cocos2d::CCPoint::operator=(&v16, v7); /*0x50f0d3*/
    goto LABEL_16; /*0x50f0d3*/
  }
}

// [57/80] Address: 0x50f310
// Method: PlayLayer::postUpdate
unsigned int __fastcall PlayLayer_postUpdate(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebp
  unsigned int v7; // edi
  unsigned int result; // eax
  struct cocos2d::CCObject *v9; // rax
  struct cocos2d::CCObject *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  struct cocos2d::CCObject *v14; // rax
  float v15; // [rsp+50h] [rbp+8h] BYREF
  float v16; // [rsp+54h] [rbp+Ch]
  char v17; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_BYTE *)(a1 + 15128) ) /*0x50f317*/
    AudioEffectsLayer_audioStep(*(_QWORD *)(a1 + 13232)); /*0x50f33c*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1072LL))(a1); /*0x50f34a*/
  GJBaseGameLayer_updateLevelColors(a1); /*0x50f353*/
  sub_50C4C0(a1); /*0x50f35b*/
  GJUserMessage_create_0(a1); /*0x50f363*/
  v2 = cocos2d::CCDirector::sharedDirector(); /*0x50f368*/
  cocos2d::CCDirector::getWinSize(v2, &v15); /*0x50f376*/
  v3 = *(__int64 **)(a1 + 13184); /*0x50f397*/
  v4 = *v3; /*0x50f3ac*/
  cocos2d::CCPoint::CCPoint( /*0x50f3c7*/
    (cocos2d::CCPoint *)&v17,
    (float)((float)(v15 * 0.5) / *(float *)(a1 + 424)) + *(float *)(a1 + 1040),
    (float)((float)(v16 * 0.5) / *(float *)(a1 + 424)) + *(float *)(a1 + 1044));
  (*(void (__fastcall **)(__int64 *, __int64))(v4 + 184))(v3, v5); /*0x50f3d3*/
  v6 = 0; /*0x50f3e0*/
  v7 = 0; /*0x50f3e2*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 15016)); /*0x50f3e4*/
  if ( result ) /*0x50f3f1*/
  {
    do /*0x50f447*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 15016), v7); /*0x50f409*/
      v10 = v9; /*0x50f40f*/
      v11 = *((_QWORD *)v9 + 40); /*0x50f412*/
      if ( v11 ) /*0x50f41c*/
      {
        v12 = *(_QWORD *)v9; /*0x50f421*/
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 200LL))(v11); /*0x50f424*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v12 + 184))(v10, v13); /*0x50f430*/
      }
      ++v7; /*0x50f43d*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 15016)); /*0x50f43f*/
    }
    while ( v7 < result ); /*0x50f447*/
  }
  if ( *(_BYTE *)(a1 + 13712) ) /*0x50f458*/
  {
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 4424)) ) /*0x50f468*/
    {
      do /*0x50f4b2*/
      {
        v14 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 4424), v6); /*0x50f489*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v14 + 336LL))(v14, 0); /*0x50f49e*/
        ++v6; /*0x50f4a8*/
      }
      while ( v6 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 4424)) ); /*0x50f4b2*/
    }
    return PlayLayer_onQuit(a1); /*0x50f4b7*/
  }
  return result; /*0x50f4bc*/
}

// [58/80] Address: 0x50f4d0
// Method: PlayLayer::checkForEnd
// Hidden C++ exception states: #wind=3
void __fastcall PlayLayer_checkForEnd(__int64 a1)
{
  __int64 v2; // rcx
  float *SpawnPos; // rbx
  __int64 v4; // rcx
  float *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+38h] [rbp+10h] BYREF
  void *v15; // [rsp+40h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 13152); /*0x50f4dd*/
  if ( v2 && !*(_BYTE *)(a1 + 14952) ) /*0x50f4ed*/
  {
    if ( !*(_BYTE *)(v2 + 1368) /*0x50f561*/
      && (SpawnPos = (float *)EndPortalObject_getSpawnPos(v2, &v13),
          *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3576) + 200LL))(*(_QWORD *)(a1 + 3576)) >= *SpawnPos)
      || (v4 = *(_QWORD *)(a1 + 13152), *(_BYTE *)(v4 + 1368))
      && (v5 = (float *)EndPortalObject_getSpawnPos(v4, &v14),
          *v5 >= *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3576) + 200LL))(*(_QWORD *)(a1 + 3576))) )
    {
      *(_BYTE *)(a1 + 14952) = 1; /*0x50f567*/
      if ( *(float *)(a1 + 14308) != 0.0 ) /*0x50f57e*/
      {
        sub_2064E0(*(_QWORD *)(a1 + 13152), 0); /*0x50f589*/
        v6 = *(_QWORD *)(a1 + 13152); /*0x50f58e*/
        GJBaseGameLayer_removeObjectFromSection(a1, v6); /*0x50f59b*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1192LL))(a1, v6); /*0x50f5a9*/
      }
      v7 = *(_QWORD *)(a1 + 13152); /*0x50f5af*/
      v8 = qword_905FD0; /*0x50f5b6*/
      if ( !qword_905FD0 ) /*0x50f5c0*/
      {
        v15 = operator new(0x6E8u); /*0x50f5cc*/
        qword_905FD0 = sub_2723A0(v15); /*0x50f5da*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50f5eb*/
        v8 = qword_905FD0; /*0x50f5ed*/
      }
      v9 = *(_QWORD *)(v8 + 560); /*0x50f5f4*/
      if ( !*(_BYTE *)(*(_QWORD *)(v9 + 3576) + 2504LL) ) /*0x50f602*/
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v9 + 13952) + 568LL) + 936LL))( /*0x50f61e*/
          *(_QWORD *)(*(_QWORD *)(v9 + 13952) + 568LL),
          0);
        v10 = qword_905FD0; /*0x50f624*/
        if ( !qword_905FD0 ) /*0x50f62e*/
        {
          v13 = operator new(0x6E8u); /*0x50f63a*/
          qword_905FD0 = sub_2723A0(v13); /*0x50f648*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x50f655*/
          v10 = qword_905FD0; /*0x50f658*/
        }
        v11 = *(_QWORD *)(v10 + 560); /*0x50f65f*/
        v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 1664LL))(v7, &v14); /*0x50f671*/
        PlayLayer_playEndAnimationToPos(v11, v12); /*0x50f67d*/
      }
    }
  }
}

// [59/80] Address: 0x50f690
// Method: PlayLayer::updateVerifyDamage
void __fastcall PlayLayer_updateVerifyDamage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // r14
  float *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 14624) && !*(_BYTE *)(a1 + 14744) ) /*0x50f6a7*/
  {
    if ( *(_BYTE *)(a1 + 14905) ) /*0x50f6b4*/
      *(_BYTE *)(a1 + 14744) = 1; /*0x50f6d1*/
    v2 = *(_QWORD *)(a1 + 3576); /*0x50f6d8*/
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2); /*0x50f6e5*/
    v4 = *(__int64 **)(a1 + 14624); /*0x50f6eb*/
    v5 = (float *)v3; /*0x50f6f8*/
    v6 = *v4; /*0x50f6fb*/
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2); /*0x50f6fe*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v9, *v5, *(float *)(v7 + 4)); /*0x50f712*/
    (*(void (__fastcall **)(__int64 *, __int64))(v6 + 1216))(v4, v8); /*0x50f71e*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1216LL))(a1, *(_QWORD *)(a1 + 14624)); /*0x50f731*/
  }
}

// [60/80] Address: 0x50f760
// Method: PlayLayer::updateAttemptTime
__int64 __fastcall PlayLayer_updateAttemptTime(__int64 a1, float a2)
{
  __int64 result; // rax
  struct __timeb64 Time; // [rsp+20h] [rbp-28h] BYREF

  *(double *)(a1 + 15448) = a2 + *(double *)(a1 + 15448); /*0x50f787*/
  if ( *(double *)(a1 + 15472) <= 0.0 ) /*0x50f79a*/
  {
    ftime64(&Time); /*0x50f7a1*/
    result = Time.millitm; /*0x50f7a7*/
    *(double *)(a1 + 15472) = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x50f7ca*/
  }
  return result; /*0x50f7d2*/
}

// [61/80] Address: 0x50f7f0
// Method: PlayLayer::checkpointActivated
__int64 __fastcall PlayLayer_checkpointActivated(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 12734) ) /*0x50f7f0*/
    *(_QWORD *)(a1 + 15616) = a2; /*0x50f7f9*/
  return GJBaseGameLayer_checkpointActivated();
}

// [62/80] Address: 0x50f810
// Method: PlayLayer::createCheckpoint
// Hidden C++ exception states: #wind=4
__int64 __fastcall PlayLayer_createCheckpoint(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  cocos2d::CCObject *v4; // rbx
  cocos2d::CCObject *v5; // rcx
  __int64 v6; // rax
  cocos2d::CCObject *v7; // rbx
  cocos2d::CCObject *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // r15
  __int64 *i; // r14
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  const void **v17; // r15
  struct cocos2d::CCObject *Object; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rdi
  void *v21; // rbx
  cocos2d::CCArray *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 j; // rbx
  _QWORD *v26; // rcx
  struct cocos2d::CCObject *v27; // r14
  __int64 v28; // rcx
  cocos2d::CCObject *v29; // rcx
  cocos2d::CCSprite *v30; // rax
  cocos2d::CCSprite *v31; // rdi
  float v32; // xmm1_4
  __int64 v33; // rbx
  const struct cocos2d::CCPoint *v34; // rax
  __int64 v35; // rax
  cocos2d::CCObject *v36; // rcx
  char v38[16]; // [rsp+20h] [rbp-378h] BYREF
  _BYTE v39[832]; // [rsp+30h] [rbp-368h] BYREF
  void *v40; // [rsp+3A0h] [rbp+8h] BYREF

  v2 = PlayerCheckpoint_create(); /*0x50f831*/
  v40 = operator new(0x568u); /*0x50f83e*/
  v3 = sub_51BD70(v40); /*0x50f849*/
  v4 = (cocos2d::CCObject *)v3; /*0x50f84e*/
  if ( v3 ) /*0x50f854*/
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3) ) /*0x50f85c*/
    {
      cocos2d::CCObject::autorelease(v4); /*0x50f866*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x50f876*/
      v4 = 0; /*0x50f879*/
    }
  }
  if ( *(cocos2d::CCObject **)(v2 + 3688) != v4 ) /*0x50f882*/
  {
    if ( v4 ) /*0x50f887*/
      cocos2d::CCObject::retain(v4); /*0x50f88c*/
    v5 = *(cocos2d::CCObject **)(v2 + 3688); /*0x50f892*/
    if ( v5 ) /*0x50f89c*/
      cocos2d::CCObject::release(v5); /*0x50f89e*/
    *(_QWORD *)(v2 + 3688) = v4; /*0x50f8a4*/
  }
  sub_4FB400(*(_QWORD *)(a1 + 3576), v4); /*0x50f8b5*/
  if ( *(_BYTE *)(a1 + 1058) ) /*0x50f8ba*/
  {
    v40 = operator new(0x568u); /*0x50f8d1*/
    v6 = sub_51BD70(v40); /*0x50f8dc*/
    v7 = (cocos2d::CCObject *)v6; /*0x50f8e1*/
    if ( v6 ) /*0x50f8e7*/
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6) ) /*0x50f8ef*/
      {
        cocos2d::CCObject::autorelease(v7); /*0x50f8f9*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x50f909*/
        v7 = 0; /*0x50f90c*/
      }
    }
    if ( *(cocos2d::CCObject **)(v2 + 3696) != v7 ) /*0x50f915*/
    {
      if ( v7 ) /*0x50f91a*/
        cocos2d::CCObject::retain(v7); /*0x50f91f*/
      v8 = *(cocos2d::CCObject **)(v2 + 3696); /*0x50f925*/
      if ( v8 ) /*0x50f92f*/
        cocos2d::CCObject::release(v8); /*0x50f931*/
      *(_QWORD *)(v2 + 3696) = v7; /*0x50f937*/
    }
    sub_4FB400(*(_QWORD *)(a1 + 3584), v7); /*0x50f948*/
  }
  sub_50FDD0(v2 + 320, a1 + 424); /*0x50f95b*/
  *(_DWORD *)(v2 + 4696) = *(_DWORD *)(a1 + 992); /*0x50f966*/
  v9 = *(_QWORD *)(a1 + 12960); /*0x50f96c*/
  if ( v9 ) /*0x50f976*/
    sub_510CB0(v2 + 2064, v9 + 408); /*0x50f986*/
  v10 = qword_905F60; /*0x50f98b*/
  if ( !qword_905F60 ) /*0x50f995*/
  {
    v40 = operator new(0x8A8u); /*0x50f9a1*/
    qword_905F60 = sub_5AE20(v40); /*0x50f9b2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x50f9c3*/
    v10 = qword_905F60; /*0x50f9c5*/
  }
  sub_5D560(v10, v2 + 2784); /*0x50f9d3*/
  v11 = *(__int64 **)(a1 + 13072); /*0x50f9d8*/
  for ( i = *(__int64 **)(a1 + 13064); i != v11; ++i ) /*0x50f9e9*/
  {
    v13 = *i; /*0x50f9f0*/
    LODWORD(v40) = *(_DWORD *)(*i + 924); /*0x50f9f9*/
    v14 = v13 + 1880; /*0x50fa00*/
    v15 = *(_QWORD *)sub_517030(v2 + 4632, v38, &v40); /*0x50fa20*/
    sub_681F0(v15 + 24, v14); /*0x50fa2a*/
    sub_681F0(v15 + 88, v14 + 64); /*0x50fa37*/
  }
  *(_BYTE *)(v2 + 3704) = *(_BYTE *)(*(_QWORD *)(a1 + 4408) + 457LL) == 0; /*0x50fa56*/
  memset(v39, 0, sizeof(v39)); /*0x50fa69*/
  v16 = sub_4FEA10(v39); /*0x50fa73*/
  v17 = (const void **)(v2 + 3792); /*0x50fa78*/
  sub_511490(v2 + 3792, v16); /*0x50fa85*/
  sub_4FEB70(v39); /*0x50fa8f*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14968)) ) /*0x50fa9b*/
  {
    Object = cocos2d::CCArray::lastObject(*(cocos2d::CCArray **)(a1 + 14968)); /*0x50fab0*/
    if ( Object ) /*0x50fab9*/
    {
      v19 = (*((_QWORD *)Object + 475) - *((_QWORD *)Object + 474)) / 68LL; /*0x50faeb*/
      if ( v19 > (*(_QWORD *)(v2 + 3808) - *(_QWORD *)(v2 + 3792)) / 68LL ) /*0x50fb0f*/
      {
        if ( v19 > 0x3C3C3C3C3C3C3C3LL ) /*0x50fb1e*/
          sub_59000(); /*0x50fdc8*/
        v20 = (*(_QWORD *)(v2 + 3800) - (_QWORD)*v17) / 68LL; /*0x50fb3f*/
        v21 = (void *)sub_3C460(68 * v19); /*0x50fb4b*/
        memmove(v21, *v17, *(_QWORD *)(v2 + 3800) - (_QWORD)*v17); /*0x50fb5b*/
        sub_3753E0(v2 + 3792, v21, v20, v19); /*0x50fb6c*/
      }
    }
  }
  sub_36ACD0(*(_QWORD *)(a1 + 2472), v2 + 3792); /*0x50fb7b*/
  v22 = 0; /*0x50fb80*/
  v23 = *(_QWORD *)(a1 + 12944); /*0x50fb82*/
  if ( v23 ) /*0x50fb8c*/
  {
    v24 = *(_QWORD *)(v23 + 56); /*0x50fb92*/
    if ( v24 ) /*0x50fb99*/
    {
      for ( j = *(_QWORD *)(v24 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x50fb9f*/
      {
        v26 = *(_QWORD **)(v24 + 264); /*0x50fbb0*/
        v27 = (struct cocos2d::CCObject *)v26[73]; /*0x50fbb7*/
        if ( (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 504LL))(v26) && v27 ) /*0x50fbcf*/
        {
          if ( !v22 ) /*0x50fbd4*/
            v22 = (cocos2d::CCArray *)cocos2d::CCArray::create(v28); /*0x50fbdc*/
          cocos2d::CCArray::addObject(v22, v27); /*0x50fbe5*/
        }
        v24 = j; /*0x50fbeb*/
        if ( !j ) /*0x50fbf1*/
          break; /*0x50fbf1*/
      }
      if ( v22 && *(cocos2d::CCArray **)(v2 + 4624) != v22 ) /*0x50fc08*/
      {
        cocos2d::CCObject::retain(v22); /*0x50fc0d*/
        v29 = *(cocos2d::CCObject **)(v2 + 4624); /*0x50fc13*/
        if ( v29 ) /*0x50fc1d*/
          cocos2d::CCObject::release(v29); /*0x50fc1f*/
        *(_QWORD *)(v2 + 4624) = v22; /*0x50fc25*/
      }
    }
  }
  v40 = operator new(0x550u); /*0x50fc36*/
  v30 = (cocos2d::CCSprite *)GameObject_GameObject(v40); /*0x50fc41*/
  v31 = v30; /*0x50fc46*/
  if ( v30 ) /*0x50fc4c*/
  {
    *((_DWORD *)v30 + 7) = 13; /*0x50fc4e*/
    if ( cocos2d::CCSprite::initWithSpriteFrameName(v30, "checkpoint_01_001.png") ) /*0x50fc5f*/
    {
      sub_287800(v31); /*0x50fc7b*/
      *((_BYTE *)v31 + 313) = 1; /*0x50fc80*/
      cocos2d::CCObject::autorelease(v31); /*0x50fc8a*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v31 + 8LL))(v31, 1); /*0x50fc74*/
      v31 = 0; /*0x50fc77*/
    }
  }
  *((_DWORD *)v31 + 259) = 44; /*0x50fc90*/
  (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v31 + 1112LL))(v31); /*0x50fca0*/
  v32 = *(float *)(a1 + 1052); /*0x50fca6*/
  if ( v32 == 0.0 || v32 == 1.0 ) /*0x50fcc1*/
  {
    v33 = *(_QWORD *)v31; /*0x50fcc3*/
    v34 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3576) + 200LL))(*(_QWORD *)(a1 + 3576)); /*0x50fcd0*/
    v35 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v40, v34); /*0x50fce1*/
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v33 + 1216))(v31, v35); /*0x50fced*/
  }
  else
  {
    cocos2d::CCPoint::CCPoint( /*0x50fd0b*/
      (cocos2d::CCPoint *)&v40,
      (const struct cocos2d::CCPoint *)(*(_QWORD *)(a1 + 3576) + 2712LL));
    (*(void (__fastcall **)(cocos2d::CCSprite *, void **))(*(_QWORD *)v31 + 1216LL))(v31, &v40); /*0x50fd1f*/
  }
  if ( *(cocos2d::CCSprite **)(v2 + 3680) != v31 ) /*0x50fd2c*/
  {
    cocos2d::CCObject::retain(v31); /*0x50fd31*/
    v36 = *(cocos2d::CCObject **)(v2 + 3680); /*0x50fd37*/
    if ( v36 ) /*0x50fd41*/
      cocos2d::CCObject::release(v36); /*0x50fd43*/
    *(_QWORD *)(v2 + 3680) = v31; /*0x50fd49*/
  }
  sub_512ED0(a1, v2 + 3720); /*0x50fd5a*/
  sub_5131C0(a1, v2 + 3744, v2 + 3768); /*0x50fd70*/
  sub_681F0(v2 + 4752, *(_QWORD *)(a1 + 2472) + 880LL); /*0x50fd8a*/
  sub_36F8F0(v2 + 4816, *(_QWORD *)(a1 + 2472) + 944LL); /*0x50fda4*/
  return v2; /*0x50fdac*/
}

// [63/80] Address: 0x511c90
// Method: PlayLayer::markCheckpoint
__int64 __fastcall PlayLayer_markCheckpoint(__int64 a1)
{
  __int64 Checkpoint; // rdi
  unsigned int v4; // eax
  __int64 v5; // rcx

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 3576) + 2504LL) ) /*0x511ca0*/
    return 0; /*0x511ca9*/
  Checkpoint = PlayLayer_createCheckpoint(a1); /*0x511cc1*/
  sub_511B70(a1); /*0x511cc4*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(Checkpoint + 3680) + 1152LL))(*(_QWORD *)(Checkpoint + 3680)); /*0x511cd3*/
  if ( *(_BYTE *)(a1 + 12734) /*0x511cfb*/
    && *(_BYTE *)(a1 + 13088)
    && cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14968)) > 1 )
  {
    v4 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14968)); /*0x511d04*/
    v5 = *((_QWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 14968), v4 - 2) + 460); /*0x511d1c*/
    *(_BYTE *)(v5 + 774) = 1; /*0x511d23*/
    *(_BYTE *)(v5 + 1007) = 1; /*0x511d2a*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v5 + 320) + 40LL))(v5 + 320, 0); /*0x511d3b*/
  }
  *(_BYTE *)(a1 + 15612) = 0; /*0x511d41*/
  return Checkpoint; /*0x511cab*/
}

// [64/80] Address: 0x511e80
// Method: PlayLayer::loadFromCheckpoint
// Hidden C++ exception states: #wind=4
void __fastcall PlayLayer_loadFromCheckpoint(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 *v15; // r15
  __int64 *i; // r14
  __int64 v17; // rdi
  __int64 v18; // rbx
  char v19; // al
  __int64 *v20; // rdx
  bool v21; // cl
  char v22; // al
  __int64 *v23; // rdx
  bool v24; // cl
  _BYTE *v25; // rax
  __int64 v26; // rbx
  const struct cocos2d::CCPoint *v27; // rax
  __int64 v28; // rax
  cocos2d::CCArray *v29; // rdi
  __int64 v30; // r14
  unsigned int v31; // ebx
  struct cocos2d::CCObject *v32; // rax
  __int64 v33; // r12
  __int64 j; // r15
  _DWORD *v35; // rdi
  float v36; // xmm1_4
  float v37; // xmm1_4
  void (__fastcall *v38)(_DWORD *, __int64); // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 *v43; // r8
  __int64 *k; // rdx
  __int64 v45; // rcx
  __int64 *v46; // rdi
  __int64 *m; // rbx
  __int64 v48; // rax
  unsigned __int8 v49; // bl
  __int64 v50; // r9
  __int64 v51; // rdi
  unsigned int *v52; // rdi
  __int64 v53; // rax
  __int64 *v54; // rdi
  __int64 *n; // rbp
  __int64 v56; // rbx
  int v57; // edx
  __int64 *v58; // r8
  __int64 *v59; // rax
  __int64 v60; // rcx
  int v61; // eax
  struct cocos2d::CCObject *v62; // rbx
  unsigned int *v63; // rdx
  __int64 v64; // rax
  __int64 *v65; // rdx
  __int64 *ii; // r8
  __int64 v67; // rcx
  _BYTE *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rax
  int v71; // xmm6_4
  _BYTE v72[16]; // [rsp+30h] [rbp-48h] BYREF
  void *v73; // [rsp+88h] [rbp+10h] BYREF
  char v74; // [rsp+90h] [rbp+18h] BYREF

  if ( a2 ) /*0x511e83*/
  {
    sub_50FDD0(a1 + 424, a2 + 320); /*0x511eb8*/
    v6 = *(_QWORD *)(a1 + 12960); /*0x511ebd*/
    if ( v6 ) /*0x511ec7*/
      sub_510CB0(v6 + 408, a2 + 2064); /*0x511ed7*/
    if ( !*(_BYTE *)(a1 + 13088) || *(_BYTE *)(a1 + 13089) ) /*0x511ee5*/
    {
      if ( *(_BYTE *)(a1 + 12734) ) /*0x511ef2*/
      {
        if ( !qword_905F60 ) /*0x511f0a*/
        {
          v73 = operator new(0x8A8u); /*0x511f16*/
          qword_905F60 = sub_5AE20(v73); /*0x511f27*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x511f38*/
        }
        v7 = qword_905F60; /*0x511f3a*/
        v8 = *(_QWORD **)(qword_905F60 + 328); /*0x511f41*/
        v9 = (_QWORD *)*v8; /*0x511f48*/
        if ( (_QWORD *)*v8 != v8 ) /*0x511f4e*/
        {
          do /*0x511f7e*/
          {
            if ( !*((_BYTE *)v9 + 73) ) /*0x511f50*/
            {
              v10 = sub_5FDE0(v7, *((unsigned int *)v9 + 6)); /*0x511f5c*/
              if ( v10 ) /*0x511f64*/
              {
                LOBYTE(v11) = 1; /*0x511f66*/
                FMOD::ChannelControl::setPaused(v10, v11); /*0x511f6b*/
              }
            }
            v9 = (_QWORD *)*v9; /*0x511f74*/
          }
          while ( v9 != *(_QWORD **)(v7 + 328) ); /*0x511f7e*/
        }
      }
      else
      {
        GJBaseGameLayer_pauseAudio(); /*0x511efb*/
      }
      if ( !qword_905F60 ) /*0x511f88*/
      {
        v73 = operator new(0x8A8u); /*0x511f94*/
        qword_905F60 = sub_5AE20(v73); /*0x511fa5*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x511fb6*/
      }
      FMODAudioEngine_loadAudioState(qword_905F60, a2 + 2784); /*0x511fc6*/
      if ( *(_BYTE *)(a1 + 12734) ) /*0x511fcb*/
      {
        v12 = qword_905F60; /*0x511fd8*/
        if ( !qword_905F60 ) /*0x511fe2*/
        {
          v73 = operator new(0x8A8u); /*0x511fee*/
          qword_905F60 = sub_5AE20(v73); /*0x511fff*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x512010*/
          v12 = qword_905F60; /*0x512012*/
        }
        v13 = *(_QWORD **)(v12 + 328); /*0x512019*/
        v14 = (_QWORD *)*v13; /*0x512020*/
        if ( (_QWORD *)*v13 == v13 ) /*0x512026*/
        {
LABEL_23:
          FMOD::ChannelControl::setVolume(*(_QWORD *)(v12 + 552)); /*0x51203d*/
          *(_DWORD *)(v12 + 524) = -1082130432; /*0x51204d*/
          *(_DWORD *)(v12 + 520) = 1036831949; /*0x512057*/
        }
        else
        {
          while ( !*((_BYTE *)v14 + 73) ) /*0x51202c*/
          {
            v14 = (_QWORD *)*v14; /*0x512031*/
            if ( v14 == *(_QWORD **)(v12 + 328) ) /*0x51203b*/
              goto LABEL_23; /*0x51203b*/
          }
        }
      }
      GJBaseGameLayer_processActivatedAudioTriggers(a1); /*0x512070*/
      *(_BYTE *)(a1 + 15624) = 0; /*0x512075*/
      *(_BYTE *)(a1 + 14502) = 1; /*0x51207c*/
    }
    v15 = *(__int64 **)(a1 + 13072); /*0x512083*/
    for ( i = *(__int64 **)(a1 + 13064); i != v15; ++i ) /*0x512094*/
    {
      v17 = *i; /*0x5120a0*/
      LODWORD(v73) = *(_DWORD *)(*i + 924); /*0x5120a9*/
      v18 = *(_QWORD *)sub_517030(a2 + 4632, v72, &v73); /*0x5120c9*/
      sub_681F0(v17 + 1880, v18 + 24); /*0x5120d7*/
      sub_681F0(v17 + 1944, v18 + 88); /*0x5120e7*/
    }
    if ( *(_BYTE *)(a1 + 1058) ) /*0x5120f5*/
    {
      *(_BYTE *)(a1 + 1058) = 0; /*0x5120fe*/
      LOBYTE(v5) = 1; /*0x51210d*/
      GJBaseGameLayer_toggleDualMode(a1, 0, v5, 0, 1); /*0x512115*/
    }
    LOBYTE(v4) = 1; /*0x51211a*/
    v19 = sub_511D60(a1, v4); /*0x51211f*/
    v20 = (__int64 *)(a2 + 3688); /*0x512124*/
    v21 = v19 && !*(_BYTE *)(*v20 + 1073); /*0x51213f*/
    *(_BYTE *)(*v20 + 384) = v21; /*0x512144*/
    PlayerObject_loadFromCheckpoint(*(_QWORD *)(a1 + 3576), *v20); /*0x512154*/
    if ( *(_BYTE *)(a1 + 1058) ) /*0x512159*/
    {
      v22 = sub_511D60(a1, 0); /*0x51216b*/
      v23 = (__int64 *)(a2 + 3696); /*0x512170*/
      v24 = v22 && !*(_BYTE *)(*v23 + 1073); /*0x51218b*/
      *(_BYTE *)(*v23 + 384) = v24; /*0x512190*/
      PlayerObject_loadFromCheckpoint(*(_QWORD *)(a1 + 3584), *v23); /*0x5121a0*/
      v25 = *(_BYTE **)(a1 + 3576); /*0x5121a5*/
      if ( !v25[2497] && !v25[2498] && !v25[2500] && !v25[2508] && !v25[2499] ) /*0x5121d0*/
      {
        v26 = *(_QWORD *)(a1 + 1024); /*0x5121d9*/
        if ( v26 ) /*0x5121e3*/
        {
          v27 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 200LL))(*(_QWORD *)(a1 + 1024)); /*0x5121eb*/
          v28 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v73, v27); /*0x5121fc*/
          cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 3576) + 2568LL, v28); /*0x512213*/
          *(_QWORD *)(*(_QWORD *)(a1 + 3576) + 2696LL) = v26; /*0x512220*/
          *(_QWORD *)(a1 + 1024) = v26; /*0x512227*/
        }
      }
    }
    GJEffectManager_loadFromState(*(_QWORD *)(a1 + 2472), a2 + 3792); /*0x51223c*/
    v29 = *(cocos2d::CCArray **)(a2 + 4624); /*0x512241*/
    v30 = 0; /*0x512248*/
    if ( v29 ) /*0x51224e*/
    {
      v31 = 0; /*0x512250*/
      if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a2 + 4624)) ) /*0x512256*/
      {
        do /*0x512283*/
        {
          v32 = cocos2d::CCArray::objectAtIndex(v29, v31); /*0x512265*/
          GJBaseGameLayer_triggerGradientCommand(a1, v32); /*0x512271*/
          ++v31; /*0x512276*/
        }
        while ( v31 < cocos2d::CCArray::count(v29) ); /*0x512283*/
      }
    }
    PlayLayer_processLoadedMoveActions(a1); /*0x512288*/
    v33 = *(_QWORD *)(a2 + 3728); /*0x51228d*/
    for ( j = *(_QWORD *)(a2 + 3720); j != v33; j += 48 ) /*0x51229e*/
    {
      v35 = *(_DWORD **)j; /*0x5122b0*/
      *((_QWORD *)v35 + 119) = *(_QWORD *)(j + 8); /*0x5122b7*/
      *((_QWORD *)v35 + 120) = *(_QWORD *)(j + 16); /*0x5122c2*/
      v35[170] = *(_DWORD *)(j + 24); /*0x5122cd*/
      v35[172] = *(_DWORD *)(j + 28); /*0x5122d7*/
      v36 = *(float *)(j + 32); /*0x5122dd*/
      *((float *)v35 + 174) = v36 + *((float *)v35 + 174); /*0x5122ee*/
      *((float *)v35 + 290) = v36 + *((float *)v35 + 290); /*0x5122fe*/
      *((_BYTE *)v35 + 848) = 1; /*0x512306*/
      *((_BYTE *)v35 + 872) = 1; /*0x51230d*/
      v37 = *(float *)(j + 36); /*0x512314*/
      *((float *)v35 + 175) = v37 + *((float *)v35 + 175); /*0x512325*/
      *((float *)v35 + 291) = v37 + *((float *)v35 + 291); /*0x512335*/
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v35 + 1328LL))(v35); /*0x512346*/
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v35 + 1304LL))(v35); /*0x512355*/
      v35[311] = -1; /*0x51235b*/
      v35[313] = -1; /*0x512365*/
      v38 = *(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v35 + 184LL); /*0x512372*/
      v39 = (*(__int64 (__fastcall **)(_DWORD *, void **))(*(_QWORD *)v35 + 1208LL))(v35, &v73); /*0x512384*/
      v38(v35, v39); /*0x512390*/
      v40 = (*(__int64 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v35 + 1208LL))(v35, &v74); /*0x5123a0*/
      cocos2d::CCPoint::operator=(v35 + 308, v40); /*0x5123b0*/
      LOBYTE(v41) = 1; /*0x5123b9*/
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v35 + 1624LL))(v35, v41); /*0x5123be*/
      *((_BYTE *)v35 + 848) = 1; /*0x5123c4*/
      LOBYTE(v42) = 1; /*0x5123ce*/
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v35 + 1640LL))(v35, v42); /*0x5123d3*/
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 1216LL))(a1, v35); /*0x5123e2*/
    }
    v43 = *(__int64 **)(a2 + 3752); /*0x5123f5*/
    for ( k = *(__int64 **)(a2 + 3744); k != v43; k += 2 ) /*0x512406*/
    {
      v45 = *k; /*0x512410*/
      *(_BYTE *)(v45 + 1460) = *((_BYTE *)k + 8); /*0x512417*/
      *(_BYTE *)(v45 + 1461) = *((_BYTE *)k + 9); /*0x512421*/
    }
    v46 = *(__int64 **)(a2 + 3776); /*0x512430*/
    for ( m = *(__int64 **)(a2 + 3768); m != v46; m += 2 ) /*0x512441*/
    {
      v48 = *m; /*0x512443*/
      if ( *(_DWORD *)(*m + 1256) == 2 ) /*0x51244d*/
      {
        AnimatedGameObject_playAnimation(*m, *((unsigned int *)m + 2)); /*0x512455*/
      }
      else if ( *(_DWORD *)(v48 + 1036) == 1615 ) /*0x512466*/
      {
        *(_BYTE *)(v48 + 1928) = 1; /*0x512468*/
      }
    }
    LOBYTE(k) = *(_BYTE *)(a2 + 3704) == 0; /*0x51247f*/
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 1232LL))(a1, k); /*0x512488*/
    v49 = *(_BYTE *)(a1 + 812); /*0x51248e*/
    *(_BYTE *)(a1 + 812) = v49; /*0x512495*/
    sub_4E2850(*(_QWORD *)(a1 + 3576), v49); /*0x5124a5*/
    sub_4E2850(*(_QWORD *)(a1 + 3584), v49); /*0x5124b4*/
    v51 = *(_QWORD *)(a1 + 15024); /*0x5124b9*/
    if ( v51 ) /*0x5124c3*/
    {
      v52 = *(unsigned int **)(v51 + 56); /*0x5124c9*/
      v53 = *v52; /*0x5124cd*/
      if ( (_DWORD)v53 ) /*0x5124d1*/
      {
        v54 = (__int64 *)*((_QWORD *)v52 + 2); /*0x5124d7*/
        for ( n = &v54[v53 - 1]; v54 <= n; ++v54 ) /*0x5124e6*/
        {
          v56 = *v54; /*0x5124f0*/
          if ( !*v54 ) /*0x5124f0*/
            break; /*0x5124f6*/
          v57 = *(_DWORD *)(v56 + 924); /*0x5124fc*/
          v58 = *(__int64 **)(*(_QWORD *)(a1 + 2472) + 1376LL); /*0x512509*/
          v59 = (__int64 *)v58[1]; /*0x512510*/
          while ( !*((_BYTE *)v59 + 25) ) /*0x512514*/
          {
            if ( *((_DWORD *)v59 + 7) < v57 || *((_DWORD *)v59 + 7) <= v57 && *((int *)v59 + 8) < 0 ) /*0x51252b*/
            {
              v59 = (__int64 *)v59[2]; /*0x512535*/
            }
            else
            {
              v58 = v59; /*0x51252d*/
              v59 = (__int64 *)*v59; /*0x512530*/
            }
          }
          if ( !*((_BYTE *)v58 + 25) /*0x512551*/
            && v57 >= *((_DWORD *)v58 + 7)
            && (v57 > *((_DWORD *)v58 + 7) || *((int *)v58 + 8) <= 0) )
          {
            *(_BYTE *)(v56 + 978) = 1; /*0x512553*/
            *(_BYTE *)(v56 + 774) = 1; /*0x51255a*/
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v56 + 320) + 40LL))(v56 + 320, 0); /*0x51256d*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 1336LL))(v56); /*0x512579*/
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v56 + 1648LL))(v56) == 31 ) /*0x51258e*/
            {
              sub_319D20(a1, v56); /*0x512596*/
              if ( !(unsigned __int8)sub_31A2D0(a1, v56) ) /*0x5125a1*/
                sub_319C30(a1, v56); /*0x5125b0*/
            }
          }
        }
      }
    }
    do /*0x512677*/
    {
      v60 = v30 & 0x1F; /*0x5125dd*/
      v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2472) + 1280LL) + 4 * ((unsigned __int64)(unsigned int)v30 >> 5)); /*0x5125e0*/
      if ( !_bittest(&v61, v60) ) /*0x5125e7*/
      {
        v62 = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 3960) + 8 * v30); /*0x5125f7*/
        if ( v62 /*0x51262a*/
          || (v62 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v60),
              cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 3936), v62, (unsigned int)v30),
              (*(_QWORD *)(*(_QWORD *)(a1 + 3960) + 8 * v30) = v62) != 0) )
        {
          v63 = (unsigned int *)*((_QWORD *)v62 + 7); /*0x51262c*/
          v64 = *v63; /*0x512630*/
          if ( (_DWORD)v64 ) /*0x512634*/
          {
            v65 = (__int64 *)*((_QWORD *)v63 + 2); /*0x512636*/
            for ( ii = &v65[v64 - 1]; v65 <= ii; ++v65 ) /*0x512645*/
            {
              v67 = *v65; /*0x512647*/
              if ( !*v65 ) /*0x512647*/
                break; /*0x51264d*/
              *(_BYTE *)(v67 + 654) = (int)--*(_DWORD *)(v67 + 1216) < 0; /*0x51265e*/
            }
          }
        }
      }
      v30 = (unsigned int)(v30 + 1); /*0x51266d*/
    }
    while ( (int)v30 <= 9999 ); /*0x512677*/
    v68 = *(_BYTE **)(a1 + 3576); /*0x51267d*/
    v69 = 6; /*0x512684*/
    if ( v68[2497] || v68[2498] || v68[2500] || v68[2508] ) /*0x5126a5*/
    {
      v69 = 5; /*0x5126d0*/
    }
    else if ( v68[2499] ) /*0x5126ae*/
    {
      v69 = 16; /*0x5126b7*/
    }
    else if ( v68[2502] ) /*0x5126bf*/
    {
      v69 = 33; /*0x5126c8*/
    }
    LOBYTE(v50) = 1; /*0x5126d6*/
    GJBaseGameLayer_updateDualGround(a1, v68, v69, v50); /*0x5126dc*/
    *(_DWORD *)(a1 + 824) = *(_DWORD *)(a1 + 816); /*0x5126e7*/
    v70 = cocos2d::CCDirector::sharedDirector(); /*0x5126ed*/
    v71 = *(_DWORD *)(a1 + 824); /*0x5126f3*/
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 112LL))(v70) + 56) = v71; /*0x512707*/
  }
}

// [65/80] Address: 0x512730
// Method: PlayLayer::removeCheckpoint
void __fastcall PlayLayer_removeCheckpoint(__int64 a1, char a2)
{
  cocos2d::CCArray *v4; // rcx
  struct cocos2d::CCObject *Object; // rax
  _QWORD *v6; // rbx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCArray *v8; // rcx
  struct cocos2d::CCObject *v9; // rbx
  _BYTE *v10; // rcx
  __int64 v11; // rdx

  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14968)) ) /*0x512747*/
  {
    v4 = *(cocos2d::CCArray **)(a1 + 14968); /*0x512755*/
    if ( a2 ) /*0x512764*/
      Object = cocos2d::CCArray::objectAtIndex(v4, 0); /*0x512768*/
    else
      Object = cocos2d::CCArray::lastObject(v4); /*0x512770*/
    v6 = (_QWORD *)*((_QWORD *)Object + 460); /*0x512776*/
    GJBaseGameLayer_removeObjectFromSection(a1, v6); /*0x512783*/
    v7 = (cocos2d::CCObject *)v6[94]; /*0x512788*/
    if ( v7 ) /*0x512792*/
    {
      cocos2d::CCObject::release(v7); /*0x512794*/
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6[94] + 528LL))(v6[94]); /*0x5127a4*/
      v6[94] = 0; /*0x5127aa*/
    }
    (*(void (__fastcall **)(_QWORD *))(*v6 + 528LL))(v6); /*0x5127bb*/
    v8 = *(cocos2d::CCArray **)(a1 + 14968); /*0x5127c1*/
    if ( a2 ) /*0x5127cb*/
    {
      cocos2d::CCArray::removeObjectAtIndex(v8, 0, 1); /*0x5127e1*/
    }
    else
    {
      cocos2d::CCArray::removeLastObject(v8, 1); /*0x5127ea*/
      if ( *(_BYTE *)(a1 + 12734) && *(_BYTE *)(a1 + 13088) ) /*0x5127f9*/
      {
        if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14968)) ) /*0x512809*/
        {
          v9 = cocos2d::CCArray::lastObject(*(cocos2d::CCArray **)(a1 + 14968)); /*0x512820*/
          v10 = (_BYTE *)*((_QWORD *)v9 + 460); /*0x512823*/
          v10[774] = 0; /*0x51282a*/
          v10[1007] = 0; /*0x512831*/
          v10 += 320; /*0x512838*/
          v11 = *(_QWORD *)v10; /*0x51283f*/
          LOBYTE(v11) = -1; /*0x512846*/
          (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 40LL))(v10, v11); /*0x512848*/
          *((_DWORD *)v9 + 1174) = *(_DWORD *)(a1 + 992); /*0x512851*/
        }
      }
    }
  }
}

// [66/80] Address: 0x512870
// Method: PlayLayer::removeAllCheckpoints
void __fastcall PlayLayer_removeAllCheckpoints(__int64 a1)
{
  cocos2d::CCObject *v2; // rcx

  sub_513570(); /*0x512879*/
  while ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14968)) ) /*0x512885*/
    PlayLayer_removeCheckpoint(a1, 0); /*0x512895*/
  v2 = *(cocos2d::CCObject **)(a1 + 14896); /*0x5128ab*/
  if ( v2 ) /*0x5128b5*/
  {
    cocos2d::CCObject::release(v2); /*0x5128b7*/
    *(_QWORD *)(a1 + 14896) = 0; /*0x5128bd*/
  }
}

// [67/80] Address: 0x5128d0
// Method: PlayLayer::scanDynamicSaveObjects
// Hidden C++ exception states: #wind=5
__int64 __fastcall PlayLayer_scanDynamicSaveObjects(__int64 a1)
{
  signed int v2; // r12d
  _QWORD *v3; // rsi
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r15
  _QWORD *v10; // r13
  _DWORD *v11; // rdi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  _DWORD *v19; // rax
  int v20; // ecx
  int v21; // ebx
  __int64 *v22; // rax
  _DWORD *v23; // rax
  __int64 *v24; // rax
  __int128 v25; // xmm0
  __int64 *k; // rcx
  __int64 *v27; // rbx
  int v28; // eax
  __int64 v29; // rsi
  struct cocos2d::CCObject *v30; // rdi
  unsigned int *v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // rdi
  __int64 *i; // rsi
  __int64 v35; // rax
  __int64 *j; // rax
  signed int v37; // r13d
  struct cocos2d::CCObject *v38; // rdi
  struct cocos2d::CCObject *v39; // rsi
  struct cocos2d::CCObject *v40; // r15
  unsigned int *v41; // rbx
  __int64 v42; // rcx
  __int64 *v43; // rbx
  __int64 *m; // rdi
  __int64 v45; // rax
  unsigned int *v46; // rbx
  __int64 v47; // rax
  __int64 *v48; // rbx
  __int64 *n; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 ii; // rsi
  __int64 v53; // rax
  unsigned int *v54; // rbx
  __int64 v55; // rax
  __int64 *v56; // rbx
  __int64 *jj; // rdi
  __int64 v58; // rax
  _QWORD *v60; // [rsp+20h] [rbp-49h] BYREF
  __int64 v61; // [rsp+28h] [rbp-41h]
  _QWORD **v62; // [rsp+30h] [rbp-39h]
  __int64 v63; // [rsp+38h] [rbp-31h]
  _QWORD **v64; // [rsp+40h] [rbp-29h]
  __int64 v65; // [rsp+48h] [rbp-21h]
  _QWORD **v66; // [rsp+50h] [rbp-19h]
  __int64 v67; // [rsp+58h] [rbp-11h]
  _OWORD v68[2]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v69; // [rsp+80h] [rbp+17h]
  __int64 v70; // [rsp+90h] [rbp+27h]
  __int64 v71; // [rsp+D8h] [rbp+6Fh] BYREF

  v2 = 0; /*0x5128f7*/
  v61 = 0; /*0x5128fe*/
  v3 = operator new(0x20u); /*0x51290c*/
  *v3 = v3; /*0x51290f*/
  v3[1] = v3; /*0x512912*/
  v3[2] = v3; /*0x512916*/
  *((_WORD *)v3 + 12) = 257; /*0x51291a*/
  v60 = v3; /*0x512920*/
  v69 = 0; /*0x512927*/
  v70 = 0; /*0x51292c*/
  v6 = *(_QWORD *)(a1 + 3600); /*0x512930*/
  if ( v6 ) /*0x51293a*/
  {
    v7 = *(unsigned int **)(v6 + 56); /*0x512940*/
    v8 = *v7; /*0x512944*/
    if ( (_DWORD)v8 ) /*0x512948*/
    {
      v9 = (_QWORD *)*((_QWORD *)v7 + 2); /*0x51294e*/
      v10 = &v9[v8 - 1]; /*0x512956*/
      while ( 1 ) /*0x51295a*/
      {
        if ( v9 > v10 ) /*0x51295d*/
          goto LABEL_46; /*0x51295d*/
        v5 = 0x7FFFFFFFFFFFFFFLL; /*0x512963*/
        v11 = (_DWORD *)*v9; /*0x51296d*/
        if ( !*v9 ) /*0x51296d*/
          goto LABEL_46; /*0x512973*/
        v12 = v11[259]; /*0x512979*/
        if ( v12 > 2067 ) /*0x512985*/
          break; /*0x512985*/
        if ( v12 == 2067 ) /*0x51298b*/
          goto LABEL_24; /*0x51298b*/
        v13 = v12 - 1346; /*0x512991*/
        if ( !v13 ) /*0x512997*/
          goto LABEL_24; /*0x512997*/
        v14 = v13 - 1; /*0x51299d*/
        if ( v14 ) /*0x5129a0*/
        {
          if ( v14 == 467 ) /*0x5129a8*/
            goto LABEL_24; /*0x5129a8*/
          ++v9; /*0x5129ae*/
        }
        else
        {
          v15 = v11[371]; /*0x5129b4*/
          v16 = (__int64 *)v3[1]; /*0x5129ba*/
          v17 = 0; /*0x5129be*/
          v4 = v3; /*0x5129c1*/
          if ( !*((_BYTE *)v16 + 25) ) /*0x5129c4*/
          {
            v18 = (__int64 *)v3[1]; /*0x5129ca*/
            do /*0x5129f0*/
            {
              v16 = v18; /*0x5129d0*/
              if ( *((_DWORD *)v18 + 7) >= v15 ) /*0x5129d6*/
              {
                v17 = 1; /*0x5129e1*/
                v4 = v18; /*0x5129e6*/
              }
              else
              {
                v17 = 0; /*0x5129d8*/
                v18 += 2; /*0x5129db*/
              }
              v18 = (__int64 *)*v18; /*0x5129e9*/
            }
            while ( !*((_BYTE *)v18 + 25) ); /*0x5129f0*/
          }
          *(_QWORD *)&v68[0] = v16; /*0x5129f2*/
          *((_QWORD *)&v68[0] + 1) = __PAIR64__(HIDWORD(v69), v17); /*0x5129f6*/
          if ( *((_BYTE *)v4 + 25) || v15 < *((_DWORD *)v4 + 7) ) /*0x512a0a*/
          {
            if ( v61 == 0x7FFFFFFFFFFFFFFLL ) /*0x512a14*/
              goto LABEL_96; /*0x512a14*/
            v62 = &v60; /*0x512a1e*/
            v63 = 0; /*0x512a22*/
            v19 = operator new(0x20u); /*0x512a2b*/
            v63 = 0; /*0x512a31*/
LABEL_44:
            v19[7] = v15; /*0x512b85*/
            *(_QWORD *)v19 = v3; /*0x512b88*/
            *((_QWORD *)v19 + 1) = v3; /*0x512b8b*/
            *((_QWORD *)v19 + 2) = v3; /*0x512b8f*/
            v25 = v68[0]; /*0x512b93*/
            *((_WORD *)v19 + 12) = 0; /*0x512b97*/
            v68[0] = v25; /*0x512b9d*/
            sub_69600(&v60, v68, v19); /*0x512bac*/
            v3 = v60; /*0x512bb1*/
          }
LABEL_45:
          ++v9; /*0x512bb5*/
        }
      }
      v20 = v12 - 3016; /*0x512a3a*/
      if ( v20 && (unsigned int)(v20 - 16) > 1 ) /*0x512a45*/
        goto LABEL_45; /*0x512a45*/
LABEL_24:
      v21 = v11[370]; /*0x512a50*/
      v16 = (__int64 *)v3[1]; /*0x512a56*/
      v17 = 0; /*0x512a5a*/
      v4 = v3; /*0x512a5d*/
      if ( !*((_BYTE *)v16 + 25) ) /*0x512a60*/
      {
        v22 = (__int64 *)v3[1]; /*0x512a66*/
        do /*0x512a90*/
        {
          v16 = v22; /*0x512a70*/
          if ( *((_DWORD *)v22 + 7) >= v21 ) /*0x512a76*/
          {
            v17 = 1; /*0x512a81*/
            v4 = v22; /*0x512a86*/
          }
          else
          {
            v17 = 0; /*0x512a78*/
            v22 += 2; /*0x512a7b*/
          }
          v22 = (__int64 *)*v22; /*0x512a89*/
        }
        while ( !*((_BYTE *)v22 + 25) ); /*0x512a90*/
      }
      *(_QWORD *)&v68[0] = v16; /*0x512a92*/
      *((_QWORD *)&v68[0] + 1) = __PAIR64__(HIDWORD(v69), v17); /*0x512a96*/
      if ( *((_BYTE *)v4 + 25) || v21 < *((_DWORD *)v4 + 7) ) /*0x512aaa*/
      {
        if ( v61 == 0x7FFFFFFFFFFFFFFLL ) /*0x512ab0*/
          goto LABEL_96; /*0x512ab0*/
        v64 = &v60; /*0x512aba*/
        v65 = 0; /*0x512abe*/
        v23 = operator new(0x20u); /*0x512ac7*/
        v23[7] = v21; /*0x512acd*/
        *(_QWORD *)v23 = v3; /*0x512ad0*/
        *((_QWORD *)v23 + 1) = v3; /*0x512ad3*/
        *((_QWORD *)v23 + 2) = v3; /*0x512ad7*/
        *((_WORD *)v23 + 12) = 0; /*0x512adb*/
        v65 = 0; /*0x512ae1*/
        sub_69600(&v60, v68, v23); /*0x512af8*/
        v3 = v60; /*0x512afd*/
        v5 = 0x7FFFFFFFFFFFFFFLL; /*0x512b01*/
      }
      v15 = v11[371]; /*0x512b0b*/
      v16 = (__int64 *)v3[1]; /*0x512b11*/
      v17 = 0; /*0x512b15*/
      v4 = v3; /*0x512b18*/
      if ( !*((_BYTE *)v16 + 25) ) /*0x512b1b*/
      {
        v24 = (__int64 *)v3[1]; /*0x512b21*/
        do /*0x512b44*/
        {
          v16 = v24; /*0x512b24*/
          if ( *((_DWORD *)v24 + 7) >= v15 ) /*0x512b2a*/
          {
            v17 = 1; /*0x512b35*/
            v4 = v24; /*0x512b3a*/
          }
          else
          {
            v17 = 0; /*0x512b2c*/
            v24 += 2; /*0x512b2f*/
          }
          v24 = (__int64 *)*v24; /*0x512b3d*/
        }
        while ( !*((_BYTE *)v24 + 25) ); /*0x512b44*/
      }
      *(_QWORD *)&v68[0] = v16; /*0x512b46*/
      *((_QWORD *)&v68[0] + 1) = __PAIR64__(HIDWORD(v69), v17); /*0x512b4a*/
      if ( *((_BYTE *)v4 + 25) || v15 < *((_DWORD *)v4 + 7) ) /*0x512b5e*/
      {
        if ( v61 == 0x7FFFFFFFFFFFFFFLL ) /*0x512b64*/
LABEL_96:
          sub_5AC20(v17, v16, v4, 0x7FFFFFFFFFFFFFFLL); /*0x512ec8*/
        v66 = &v60; /*0x512b6e*/
        v67 = 0; /*0x512b72*/
        v19 = operator new(0x20u); /*0x512b7b*/
        v67 = 0; /*0x512b81*/
        goto LABEL_44; /*0x512b81*/
      }
      goto LABEL_45; /*0x512b5e*/
    }
  }
LABEL_46:
  sub_310370(a1, &v60, v4, v5); /*0x512bbe*/
  v27 = (__int64 *)*v60; /*0x512bce*/
  if ( !*(_BYTE *)(*v60 + 25LL) ) /*0x512bd1*/
  {
    do /*0x512cf3*/
    {
      v28 = *((_DWORD *)v27 + 7); /*0x512bf0*/
      if ( v28 > 9999 ) /*0x512bf6*/
        v28 = 9999; /*0x512bf6*/
      if ( v28 < 0 ) /*0x512bfc*/
        v28 = 0; /*0x512bfc*/
      v29 = (unsigned int)v28; /*0x512c00*/
      v30 = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 3960) + 8LL * (unsigned int)v28); /*0x512c09*/
      if ( v30 /*0x512c3c*/
        || (v30 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(k),
            cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 3936), v30, (unsigned int)v29),
            (*(_QWORD *)(*(_QWORD *)(a1 + 3960) + 8 * v29) = v30) != 0) )
      {
        v31 = (unsigned int *)*((_QWORD *)v30 + 7); /*0x512c3e*/
        v32 = *v31; /*0x512c42*/
        if ( (_DWORD)v32 ) /*0x512c46*/
        {
          v33 = (__int64 *)*((_QWORD *)v31 + 2); /*0x512c48*/
          for ( i = &v33[v32 - 1]; v33 <= i; ++v33 ) /*0x512c57*/
          {
            v35 = *v33; /*0x512c60*/
            if ( !*v33 ) /*0x512c60*/
              break; /*0x512c66*/
            v71 = *v33; /*0x512c68*/
            if ( !*(_BYTE *)(v35 + 1352) ) /*0x512c6c*/
            {
              *(_BYTE *)(v35 + 1352) = 1; /*0x512c75*/
              sub_BB550(a1 + 14792, &v71); /*0x512c87*/
            }
          }
        }
      }
      k = (__int64 *)v27[2]; /*0x512c95*/
      if ( *((_BYTE *)k + 25) ) /*0x512c99*/
      {
        for ( j = (__int64 *)v27[1]; !*((_BYTE *)j + 25); j = (__int64 *)j[1] ) /*0x512ca3*/
        {
          if ( v27 != (__int64 *)j[2] ) /*0x512cb4*/
            break; /*0x512cb4*/
          v27 = j; /*0x512cb6*/
        }
        v27 = j; /*0x512cc3*/
      }
      else
      {
        v27 = (__int64 *)v27[2]; /*0x512cc8*/
        for ( k = (__int64 *)*k; !*((_BYTE *)k + 25); k = (__int64 *)*k ) /*0x512cce*/
          v27 = k; /*0x512ce0*/
      }
    }
    while ( !*((_BYTE *)v27 + 25) ); /*0x512cf3*/
  }
  v37 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 4248)) - 2; /*0x512d06*/
  if ( v37 > 0 ) /*0x512d0d*/
  {
    do /*0x512e94*/
    {
      v38 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 4248), v2); /*0x512d30*/
      v39 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 4248), v2 + 1); /*0x512d45*/
      v40 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 4248), v2 + 2); /*0x512d5a*/
      if ( v38 ) /*0x512d60*/
      {
        v41 = (unsigned int *)*((_QWORD *)v38 + 7); /*0x512d62*/
        v42 = *v41; /*0x512d66*/
        if ( (_DWORD)v42 ) /*0x512d6a*/
        {
          v43 = (__int64 *)*((_QWORD *)v41 + 2); /*0x512d6c*/
          for ( m = &v43[v42 - 1]; v43 <= m; ++v43 ) /*0x512d7b*/
          {
            v45 = *v43; /*0x512d80*/
            if ( !*v43 ) /*0x512d80*/
              break; /*0x512d86*/
            v71 = *v43; /*0x512d88*/
            if ( !*(_BYTE *)(v45 + 1352) ) /*0x512d8c*/
            {
              *(_BYTE *)(v45 + 1352) = 1; /*0x512d95*/
              sub_BB550(a1 + 14792, &v71); /*0x512da7*/
            }
          }
        }
      }
      if ( v39 ) /*0x512db8*/
      {
        v46 = (unsigned int *)*((_QWORD *)v39 + 7); /*0x512dba*/
        v47 = *v46; /*0x512dbe*/
        if ( (_DWORD)v47 ) /*0x512dc2*/
        {
          v48 = (__int64 *)*((_QWORD *)v46 + 2); /*0x512dc4*/
          for ( n = &v48[v47 - 1]; v48 <= n; ++v48 ) /*0x512dd3*/
          {
            v50 = *v48; /*0x512dd5*/
            if ( !*v48 ) /*0x512dd5*/
              break; /*0x512ddb*/
            v71 = *v48; /*0x512ddd*/
            if ( !*(_BYTE *)(v50 + 1352) ) /*0x512de1*/
            {
              *(_BYTE *)(v50 + 1352) = 1; /*0x512dea*/
              sub_BB550(a1 + 14792, &v71); /*0x512dfc*/
            }
          }
        }
      }
      if ( v40 ) /*0x512e0d*/
      {
        v51 = *((_QWORD *)v40 + 7); /*0x512e0f*/
        if ( v51 ) /*0x512e16*/
        {
          for ( ii = *(_QWORD *)(v51 + 288); ; ii = *(_QWORD *)(ii + 288) ) /*0x512e18*/
          {
            v53 = *(_QWORD *)(v51 + 264); /*0x512e20*/
            if ( v53 ) /*0x512e2a*/
            {
              v54 = *(unsigned int **)(v53 + 56); /*0x512e2c*/
              v55 = *v54; /*0x512e30*/
              if ( (_DWORD)v55 ) /*0x512e34*/
              {
                v56 = (__int64 *)*((_QWORD *)v54 + 2); /*0x512e36*/
                for ( jj = &v56[v55 - 1]; v56 <= jj; ++v56 ) /*0x512e45*/
                {
                  v58 = *v56; /*0x512e47*/
                  if ( !*v56 ) /*0x512e47*/
                    break; /*0x512e4d*/
                  v71 = *v56; /*0x512e4f*/
                  if ( !*(_BYTE *)(v58 + 1352) ) /*0x512e53*/
                  {
                    *(_BYTE *)(v58 + 1352) = 1; /*0x512e5c*/
                    sub_BB550(a1 + 14792, &v71); /*0x512e6e*/
                  }
                }
              }
            }
            v51 = ii; /*0x512e7c*/
            if ( !ii ) /*0x512e82*/
              break; /*0x512e82*/
          }
        }
      }
      v2 += 4; /*0x512e8d*/
    }
    while ( v2 < v37 ); /*0x512e94*/
  }
  return sub_BB6F0(&v60, &v60); /*0x512ea7*/
}

// [69/80] Address: 0x5150e0
// Method: PlayLayer::updateAttempts
// Hidden C++ exception states: #wind=8
__int64 __fastcall PlayLayer_updateAttempts(__int64 a1)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rbx
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  float v14; // [rsp+40h] [rbp+8h] BYREF
  float v15; // [rsp+44h] [rbp+Ch]
  void *v16; // [rsp+48h] [rbp+10h] BYREF
  void *v17; // [rsp+50h] [rbp+18h]

  ++*(_DWORD *)(a1 + 12708); /*0x5150eb*/
  v2 = (_DWORD *)qword_905FD0; /*0x5150f1*/
  if ( !qword_905FD0 ) /*0x5150fb*/
  {
    v16 = operator new(0x6E8u); /*0x515107*/
    qword_905FD0 = sub_2723A0(v16); /*0x515115*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x515126*/
    v2 = (_DWORD *)qword_905FD0; /*0x515128*/
  }
  v3 = v2; /*0x51512f*/
  if ( !v2 ) /*0x515135*/
  {
    v16 = operator new(0x6E8u); /*0x515141*/
    qword_905FD0 = sub_2723A0(v16); /*0x51514f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x515160*/
    v2 = (_DWORD *)qword_905FD0; /*0x515162*/
  }
  v2[260] = v3[260] + 1; /*0x515171*/
  ++v2[261]; /*0x515177*/
  if ( !*(_BYTE *)(a1 + 13088) ) /*0x51517d*/
    ++v2[262]; /*0x515186*/
  v4 = cocos2d::CCString::createWithFormat("Attempt %i", *(_DWORD *)(a1 + 12708)); /*0x515199*/
  CString = cocos2d::CCString::getCString(v4); /*0x5151a2*/
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 15048) + 360LL))( /*0x5151bf*/
    *(_QWORD *)(a1 + 15048) + 360LL,
    CString);
  v6 = cocos2d::CCDirector::sharedDirector(); /*0x5151c2*/
  cocos2d::CCDirector::getWinSize(v6, &v14); /*0x5151d0*/
  if ( *(_DWORD *)(a1 + 12708) != 1 || *(_BYTE *)(a1 + 12734) ) /*0x5151df*/
  {
    v7 = **(_QWORD **)(a1 + 15048); /*0x5151ef*/
    v8 = *(_QWORD *)(a1 + 15048); /*0x5151f2*/
    cocos2d::CCPoint::CCPoint( /*0x515236*/
      (cocos2d::CCPoint *)&v16,
      (float)((float)(v14 * 0.5) + *(float *)(a1 + 1040)) + 50.0,
      (float)((float)(v15 * 0.5) + *(float *)(a1 + 1044)) + 85.0);
    (*(void (__fastcall **)(__int64, __int64))(v7 + 184))(v8, v9); /*0x515242*/
  }
  if ( *(_BYTE *)(a1 + 14743) ) /*0x515248*/
    goto LABEL_20; /*0x515248*/
  if ( *(_BYTE *)(a1 + 13088) ) /*0x515255*/
  {
    v10 = qword_905FD0; /*0x51525e*/
    if ( !qword_905FD0 ) /*0x515268*/
    {
      v17 = operator new(0x6E8u); /*0x515274*/
      qword_905FD0 = sub_2723A0(v17); /*0x515282*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x515293*/
      v10 = qword_905FD0; /*0x515295*/
    }
    if ( (unsigned __int8)GameManager_getGameVariable(v10, "0134") ) /*0x5152a3*/
      goto LABEL_20; /*0x5152a3*/
  }
  v11 = qword_905FD0; /*0x5152ac*/
  if ( !qword_905FD0 ) /*0x5152b6*/
  {
    v17 = operator new(0x6E8u); /*0x5152c2*/
    qword_905FD0 = sub_2723A0(v17); /*0x5152d0*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5152e1*/
    v11 = qword_905FD0; /*0x5152e3*/
  }
  result = GameManager_getGameVariable(v11, "0135"); /*0x5152f1*/
  if ( (_BYTE)result ) /*0x5152f8*/
  {
LABEL_20:
    v13 = 0; /*0x515307*/
  }
  else
  {
    if ( *(int *)(a1 + 12708) <= 0 ) /*0x515301*/
      return result; /*0x515301*/
    LOBYTE(v13) = 1; /*0x515303*/
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 15048) + 336LL))(*(_QWORD *)(a1 + 15048), v13); /*0x515319*/
}

// [70/80] Address: 0x515710
// Method: PlayLayer::pauseGame
// Hidden C++ exception states: #wind=3
void __fastcall PlayLayer_pauseGame(_BYTE *a1, char a2)
{
  cocos2d::CCEGLView *v4; // rax
  __int64 v5; // r9
  unsigned int *i; // r10
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 v11; // rax
  struct __timeb64 Time; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1[14000] && !a1[15381] && !*(_BYTE *)(cocos2d::CCApplication::sharedApplication() + 225) ) /*0x515759*/
  {
    a1[2214] = 1; /*0x515766*/
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1320LL))(a1); /*0x51577b*/
    a1[15495] = 1; /*0x515781*/
    PlayLayer_dtFlushCells(a1); /*0x51578b*/
    PlayLayer_dtCommitPlaytime(a1); /*0x515793*/
    *((_QWORD *)a1 + 1926) = 0; /*0x51579a*/
    *((_QWORD *)a1 + 1927) = 0; /*0x5157a1*/
    *((_QWORD *)a1 + 1928) = 0; /*0x5157a8*/
    ftime64(&Time); /*0x5157b4*/
    *((double *)a1 + 1933) = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x5157dd*/
    *(_BYTE *)(cocos2d::CCDirector::sharedDirector() + 178) = 0; /*0x5157eb*/
    *(_BYTE *)(cocos2d::CCEGLView::sharedOpenGLView() + 237) = 0; /*0x5157f8*/
    v4 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(); /*0x5157ff*/
    cocos2d::CCEGLView::showCursor(v4, 1); /*0x51580a*/
    for ( i = (unsigned int *)*((_QWORD *)a1 + 1672); /*0x51583c*/
          (*((_QWORD *)a1 + 1673) - (_QWORD)i) / 24LL;
          i = (unsigned int *)*((_QWORD *)a1 + 1672) )
    {
      LOBYTE(v5) = *((_BYTE *)i + 5) == 0; /*0x515854*/
      GJBaseGameLayer_handleButton(a1, *((unsigned __int8 *)i + 4), *i, v5); /*0x515863*/
      memmove( /*0x51587d*/
        *((void **)a1 + 1672),
        (const void *)(*((_QWORD *)a1 + 1672) + 24LL),
        *((_QWORD *)a1 + 1673) - (*((_QWORD *)a1 + 1672) + 24LL));
      *((_QWORD *)a1 + 1673) -= 24LL; /*0x515882*/
    }
    PlayerObject_releaseAllButtons(*((_QWORD *)a1 + 447)); /*0x5158b8*/
    v7 = *((_QWORD *)a1 + 448); /*0x5158bd*/
    if ( v7 ) /*0x5158c7*/
      PlayerObject_releaseAllButtons(v7); /*0x5158c9*/
    GJBaseGameLayer_pauseAudio(); /*0x5158ce*/
    if ( !qword_905FD0 ) /*0x5158da*/
    {
      Time.time = (__time64_t)operator new(0x6E8u); /*0x5158e6*/
      qword_905FD0 = sub_2723A0(Time.time); /*0x5158f4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x515905*/
    }
    PlayerObject_releaseAllButtons(*((_QWORD *)a1 + 447)); /*0x51590e*/
    v8 = *((_QWORD *)a1 + 448); /*0x515913*/
    if ( v8 ) /*0x51591d*/
      PlayerObject_releaseAllButtons(v8); /*0x51591f*/
    v9 = *((_QWORD *)a1 + 1744); /*0x515924*/
    *(_QWORD *)(v9 + 584) = -1; /*0x51592b*/
    *(_WORD *)(v9 + 578) = 0; /*0x515936*/
    *(_BYTE *)(v9 + 580) = 0; /*0x51593f*/
    UILayer_resetUINodeState(); /*0x515946*/
    UILayer_toggleMenuVisibility(*((_QWORD *)a1 + 1744), 0); /*0x515954*/
    v10 = (char *)operator new(0x2A0u); /*0x515963*/
    Time.time = (__time64_t)v10; /*0x515966*/
    CCBlockLayer_CCBlockLayer(v10); /*0x51596e*/
    *(_QWORD *)v10 = &PauseLayer::`vftable'; /*0x51597a*/
    *((_QWORD *)v10 + 40) = &PauseLayer::`vftable'; /*0x515984*/
    *((_QWORD *)v10 + 41) = &PauseLayer::`vftable'; /*0x515992*/
    *((_QWORD *)v10 + 42) = &PauseLayer::`vftable'; /*0x5159a0*/
    *((_QWORD *)v10 + 43) = &PauseLayer::`vftable'; /*0x5159ae*/
    *((_QWORD *)v10 + 44) = &PauseLayer::`vftable'; /*0x5159bc*/
    *((_QWORD *)v10 + 51) = &PauseLayer::`vftable'; /*0x5159ca*/
    *((_QWORD *)v10 + 54) = &PauseLayer::`vftable'; /*0x5159d8*/
    *((_QWORD *)v10 + 69) = &PauseLayer::`vftable'; /*0x5159e6*/
    *((_QWORD *)v10 + 70) = &PauseLayer::`vftable'; /*0x5159f4*/
    *((_QWORD *)v10 + 71) = &PauseLayer::`vftable'; /*0x515a02*/
    *((_QWORD *)v10 + 72) = &PauseLayer::`vftable'; /*0x515a10*/
    *(_WORD *)(v10 + 585) = 0; /*0x515a17*/
    *((_QWORD *)v10 + 74) = 0; /*0x515a20*/
    *((_DWORD *)v10 + 150) = 0; /*0x515a27*/
    *((_QWORD *)v10 + 76) = 0; /*0x515a2d*/
    v10[616] = 0; /*0x515a34*/
    *((_QWORD *)v10 + 78) = 0; /*0x515a3b*/
    *((_QWORD *)v10 + 79) = 0; /*0x515a42*/
    *((_QWORD *)v10 + 80) = 0; /*0x515a49*/
    *((_QWORD *)v10 + 81) = 0; /*0x515a50*/
    *((_QWORD *)v10 + 82) = 0; /*0x515a57*/
    *((_QWORD *)v10 + 83) = 0; /*0x515a5e*/
    v10[584] = a2; /*0x515a65*/
    if ( (unsigned __int8)EditorPauseLayer_init(v10) ) /*0x515a6f*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v10); /*0x515a7b*/
    }
    else
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x515a8b*/
      v10 = 0; /*0x515a8e*/
    }
    v11 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 504LL))(a1); /*0x515a97*/
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v11 + 456LL))(v11, v10, 10); /*0x515ab3*/
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 712LL))(a1); /*0x515abc*/
  }
}

// [71/80] Address: 0x515af0
// Method: PlayLayer::resumeAndRestart
// Hidden C++ exception states: #wind=5
__int64 __fastcall PlayLayer_resumeAndRestart(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  cocos2d::CCEGLView *v11; // rax
  __int64 v12; // rcx
  cocos2d::CCEGLView *v13; // rax
  void *v14; // [rsp+30h] [rbp+8h]
  void *v15; // [rsp+30h] [rbp+8h]
  void *v16; // [rsp+30h] [rbp+8h]
  void *v17; // [rsp+30h] [rbp+8h]
  void *v18; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 13088) || *(_BYTE *)(a1 + 13089) ) /*0x515b09*/
  {
    if ( a2 || !*(_BYTE *)(a1 + 12734) ) /*0x515b1f*/
    {
      GJBaseGameLayer_resetAudio(); /*0x515bb6*/
    }
    else
    {
      if ( !qword_905F60 ) /*0x515b36*/
      {
        v14 = operator new(0x8A8u); /*0x515b42*/
        qword_905F60 = sub_5AE20(v14); /*0x515b50*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x515b61*/
      }
      sub_613B0(); /*0x515b6a*/
      v4 = qword_905F60; /*0x515b6f*/
      if ( !qword_905F60 ) /*0x515b79*/
      {
        v15 = operator new(0x8A8u); /*0x515b85*/
        qword_905F60 = sub_5AE20(v15); /*0x515b93*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x515ba4*/
        v4 = qword_905F60; /*0x515ba6*/
      }
      FMODAudioEngine_stopAllMusic(v4, 0); /*0x515baf*/
    }
    *(_BYTE *)(a1 + 15624) = 0; /*0x515bbb*/
    v5 = qword_905F60; /*0x515bc2*/
    if ( !qword_905F60 ) /*0x515bcc*/
    {
      v16 = operator new(0x8A8u); /*0x515bd8*/
      qword_905F60 = sub_5AE20(v16); /*0x515be6*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x515bf7*/
      v5 = qword_905F60; /*0x515bf9*/
    }
    *(_BYTE *)(a1 + 15008) = *(float *)(v5 + 512) <= 0.0; /*0x515c0d*/
  }
  *(_BYTE *)(a1 + 15495) = 0; /*0x515c13*/
  *(_BYTE *)(a1 + 2214) = 0; /*0x515c1a*/
  result = cocos2d::CCApplication::sharedApplication(); /*0x515c21*/
  if ( *(_BYTE *)(result + 225) ) /*0x515c27*/
  {
    *(_BYTE *)(cocos2d::CCApplication::sharedApplication() + 225) = 0; /*0x515c3a*/
    PlayerObject_releaseAllButtons(*(_QWORD *)(a1 + 3576)); /*0x515c48*/
    v7 = *(_QWORD *)(a1 + 3584); /*0x515c4d*/
    if ( v7 ) /*0x515c57*/
      PlayerObject_releaseAllButtons(v7); /*0x515c59*/
    v8 = *(_QWORD *)(a1 + 13952); /*0x515c5e*/
    *(_QWORD *)(v8 + 584) = -1; /*0x515c65*/
    *(_WORD *)(v8 + 578) = 0; /*0x515c70*/
    *(_BYTE *)(v8 + 580) = 0; /*0x515c79*/
    UILayer_resetUINodeState(); /*0x515c80*/
    LOBYTE(v9) = 1; /*0x515c85*/
    UILayer_toggleMenuVisibility(*(_QWORD *)(a1 + 13952), v9); /*0x515c8e*/
    *(_BYTE *)(cocos2d::CCEGLView::sharedOpenGLView() + 237) = 1; /*0x515c99*/
    v10 = qword_905FD0; /*0x515ca0*/
    if ( !qword_905FD0 ) /*0x515caa*/
    {
      v17 = operator new(0x6E8u); /*0x515cb6*/
      qword_905FD0 = sub_2723A0(v17); /*0x515cc4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x515cd5*/
      v10 = qword_905FD0; /*0x515cd7*/
    }
    if ( (unsigned __int8)GameManager_getGameVariable(v10, "0128") ) /*0x515ce5*/
    {
      v11 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(); /*0x515cee*/
      cocos2d::CCEGLView::toggleLockCursor(v11, 1); /*0x515cf9*/
    }
    else
    {
      v12 = qword_905FD0; /*0x515d01*/
      if ( !qword_905FD0 ) /*0x515d0b*/
      {
        v18 = operator new(0x6E8u); /*0x515d17*/
        qword_905FD0 = sub_2723A0(v18); /*0x515d25*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x515d36*/
        v12 = qword_905FD0; /*0x515d38*/
      }
      if ( !(unsigned __int8)GameManager_getGameVariable(v12, "0024") ) /*0x515d46*/
      {
        v13 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(); /*0x515d4f*/
        cocos2d::CCEGLView::showCursor(v13, 0); /*0x515d5a*/
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 696LL))(a1); /*0x515d66*/
    if ( a2 ) /*0x515d72*/
      return sub_513E00(a1); /*0x515d7e*/
    else
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 1456LL))(a1); /*0x515d86*/
  }
  return result; /*0x515d74*/
}

// [72/80] Address: 0x5160f0
// Method: PlayLayer::prepareMusic
// Hidden C++ exception states: #wind=3
void __fastcall PlayLayer_prepareMusic(__int64 a1)
{
  int v2; // edi
  int v3; // r8d
  int v4; // r9d
  int v5; // ecx
  __int64 v6; // rax
  float v7; // xmm6_4
  __int64 v8; // rcx
  _BYTE v9[32]; // [rsp+50h] [rbp-38h] BYREF
  void *v10; // [rsp+90h] [rbp+8h]
  void *v11; // [rsp+A0h] [rbp+18h]

  if ( (!*(_BYTE *)(a1 + 13088) || *(_BYTE *)(a1 + 13089)) && !*(_BYTE *)(a1 + 13194) ) /*0x51611b*/
  {
    v2 = sub_261160(*(_QWORD *)(a1 + 2168), v9); /*0x516146*/
    v5 = qword_905F60; /*0x516149*/
    if ( !qword_905F60 ) /*0x516153*/
    {
      v11 = operator new(0x8A8u); /*0x51615f*/
      qword_905F60 = sub_5AE20(v11); /*0x516170*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x516181*/
      v5 = qword_905F60; /*0x516183*/
    }
    FMODAudioEngine_loadMusic( /*0x5161c5*/
      v5,
      v2,
      v3,
      v4,
      1065353216,
      *(_BYTE *)(a1 + 12734),
      0,
      0,
      *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 350LL));
    v6 = *(_QWORD *)(a1 + 3592); /*0x5161ca*/
    v7 = (*(float *)(v6 + 344) + *(double *)(a1 + 976)) * 1000.0; /*0x5161ec*/
    if ( !*(_BYTE *)(v6 + 350) ) /*0x5161f0*/
    {
      v8 = qword_905F60; /*0x5161f9*/
      if ( !qword_905F60 ) /*0x516203*/
      {
        v10 = operator new(0x8A8u); /*0x51620f*/
        qword_905F60 = sub_5AE20(v10); /*0x516220*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x516231*/
        v8 = qword_905F60; /*0x516233*/
      }
      FMODAudioEngine_setMusicTimeMS(v8, (unsigned int)(int)v7, 0, 0); /*0x516245*/
    }
    *(_BYTE *)(a1 + 15624) = 1; /*0x51624a*/
  }
}

// [73/80] Address: 0x516270
// Method: PlayLayer::startMusic
// Hidden C++ exception states: #wind=2
void __fastcall PlayLayer_startMusic(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCObject *Checkpoint; // rax
  void *v4; // [rsp+30h] [rbp+8h]
  void *v5; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 13194) ) /*0x51627d*/
  {
    if ( *(_BYTE *)(a1 + 13208) ) /*0x51628a*/
    {
      v2 = *(_QWORD *)(a1 + 12976); /*0x516297*/
      if ( !v2 /*0x5162b0*/
        || !cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 14960), *(unsigned int *)(v2 + 924)) )
      {
        if ( !qword_905F60 ) /*0x5162c7*/
        {
          v4 = operator new(0x8A8u); /*0x5162d3*/
          qword_905F60 = sub_5AE20(v4); /*0x5162e1*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5162f2*/
        }
        if ( !*(_BYTE *)(a1 + 15624) ) /*0x5162f4*/
          PlayLayer_prepareMusic(a1); /*0x516300*/
        sub_342010(a1); /*0x516308*/
        GJBaseGameLayer_updateProximityVolumeEffects(a1); /*0x516310*/
        if ( *(double *)(a1 + 976) <= 0.0 /*0x516354*/
          && *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 348LL)
          && (!*(_BYTE *)(a1 + 13088) || *(_BYTE *)(a1 + 13089)) )
        {
          if ( !qword_905F60 ) /*0x516367*/
          {
            v5 = operator new(0x8A8u); /*0x516373*/
            qword_905F60 = sub_5AE20(v5); /*0x516381*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x516392*/
          }
          FMODAudioEngine_fadeInMusic(); /*0x5163a3*/
        }
        if ( *(_QWORD *)(a1 + 12976) ) /*0x5163af*/
        {
          if ( !*(_BYTE *)(a1 + 13088) || *(_BYTE *)(a1 + 13089) ) /*0x5163c2*/
          {
            GJBaseGameLayer_pauseAudio(); /*0x5163d2*/
            GJBaseGameLayer_processActivatedAudioTriggers(a1); /*0x5163e2*/
          }
          if ( !cocos2d::CCDictionary::objectForKey( /*0x5163fb*/
                  *(cocos2d::CCDictionary **)(a1 + 14960),
                  *(unsigned int *)(*(_QWORD *)(a1 + 12976) + 924LL)) )
          {
            Checkpoint = (struct cocos2d::CCObject *)PlayLayer_createCheckpoint(a1); /*0x516409*/
            cocos2d::CCDictionary::setObject( /*0x516426*/
              *(cocos2d::CCDictionary **)(a1 + 14960),
              Checkpoint,
              *(unsigned int *)(*(_QWORD *)(a1 + 12976) + 924LL));
          }
        }
        *(_BYTE *)(a1 + 15624) = 0; /*0x51642c*/
        *(_BYTE *)(a1 + 14502) = 1; /*0x516433*/
      }
    }
  }
}

// [74/80] Address: 0x516450
// Method: PlayLayer::onQuit
// Hidden C++ exception states: #wind=6
__int64 __fastcall PlayLayer_onQuit(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  cocos2d::CCEGLView *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h]
  void *v11; // [rsp+30h] [rbp+8h]
  void *v12; // [rsp+30h] [rbp+8h]
  void *v13; // [rsp+30h] [rbp+8h]
  void *v14; // [rsp+30h] [rbp+8h]
  void *v15; // [rsp+30h] [rbp+8h]

  sub_513570(); /*0x516459*/
  if ( *(_BYTE *)(a1 + 12734) && *(_QWORD *)(*(_QWORD *)(a1 + 2168) + 1648LL) ) /*0x51646e*/
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x516480*/
    {
      v10 = operator new(0x690u); /*0x51648c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x51649a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x5164ab*/
    }
    sub_2201E0(v2, *(_QWORD *)(a1 + 2168)); /*0x5164b4*/
  }
  PlayLayer_dtFlushCells(a1); /*0x5164bc*/
  PlayLayer_dtCommitPlaytime(a1); /*0x5164c4*/
  v3 = cocos2d::CCDirector::sharedDirector(); /*0x5164c9*/
  *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL))(v3) + 56) = 1065353216; /*0x5164db*/
  *(_BYTE *)(cocos2d::CCDirector::sharedDirector() + 178) = 0; /*0x5164e8*/
  v4 = qword_905FD0; /*0x5164ef*/
  if ( !qword_905FD0 ) /*0x5164f9*/
  {
    v11 = operator new(0x6E8u); /*0x516505*/
    qword_905FD0 = sub_2723A0(v11); /*0x516513*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x516524*/
    v4 = qword_905FD0; /*0x516526*/
  }
  if ( *(_BYTE *)(v4 + 1060) ) /*0x51652d*/
  {
    *(_BYTE *)(v4 + 1060) = 0; /*0x516536*/
    if ( *(int *)(cocos2d::CCDirector::sharedDirector() + 180) >= 10 ) /*0x51654a*/
    {
      v5 = qword_905FD0; /*0x51654c*/
      if ( !qword_905FD0 ) /*0x516556*/
      {
        v12 = operator new(0x6E8u); /*0x516562*/
        qword_905FD0 = sub_2723A0(v12); /*0x516570*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x516581*/
        v5 = qword_905FD0; /*0x516583*/
      }
      sub_27ACB0(v5, "0023", 0); /*0x516594*/
    }
  }
  *(_BYTE *)(cocos2d::CCEGLView::sharedOpenGLView() + 237) = 0; /*0x51659f*/
  v6 = (cocos2d::CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView(); /*0x5165a6*/
  cocos2d::CCEGLView::showCursor(v6, 1); /*0x5165b1*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 13952) + 568LL) + 936LL))( /*0x5165ca*/
    *(_QWORD *)(*(_QWORD *)(a1 + 13952) + 568LL),
    0);
  cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 31); /*0x5165d8*/
  cocos2d::CCNode::stopAllActions((cocos2d::CCNode *)a1); /*0x5165e1*/
  cocos2d::CCNode::unscheduleAllSelectors((cocos2d::CCNode *)a1); /*0x5165ea*/
  GJBaseGameLayer_resetAudio(); /*0x5165f0*/
  if ( !qword_905F60 ) /*0x5165ff*/
  {
    v13 = operator new(0x8A8u); /*0x51660b*/
    qword_905F60 = sub_5AE20(v13); /*0x516619*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x51662a*/
  }
  sub_61640(); /*0x516633*/
  v7 = *(_QWORD *)(a1 + 2168); /*0x516638*/
  v8 = qword_905FD0; /*0x51663f*/
  if ( !qword_905FD0 ) /*0x516649*/
  {
    v14 = operator new(0x6E8u); /*0x516655*/
    qword_905FD0 = sub_2723A0(v14); /*0x516663*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x516670*/
    v8 = qword_905FD0; /*0x516674*/
  }
  sub_283C80(v8, v7); /*0x51667e*/
  if ( !qword_905FD0 ) /*0x51668d*/
  {
    v15 = operator new(0x6E8u); /*0x516699*/
    qword_905FD0 = sub_2723A0(v15); /*0x5166a7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5166b8*/
  }
  return sub_2732D0(); /*0x5166c1*/
}

// [75/80] Address: 0x5166d0
// Method: PlayLayer::removeAllObjects
void __fastcall PlayLayer_removeAllObjects(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD *i; // rbp
  __int64 v14; // rbx

  v1 = *(_QWORD *)(a1 + 13952); /*0x5166da*/
  *(_BYTE *)(a1 + 14904) = 0; /*0x5166e4*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 568) + 936LL))(*(_QWORD *)(v1 + 568), 0); /*0x5166fc*/
  LOBYTE(v3) = 1; /*0x516709*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3576) + 1160LL))(*(_QWORD *)(a1 + 3576), v3); /*0x51670e*/
  v4 = *(_QWORD *)(a1 + 3576); /*0x516714*/
  if ( *(_BYTE *)(v4 + 2030) ) /*0x51671b*/
    cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(v4 + 2240)); /*0x51672b*/
  *(_BYTE *)(v4 + 2030) = 0; /*0x516731*/
  v5 = *(_QWORD *)(a1 + 3576); /*0x516738*/
  cocos2d::CCMotionStreak::stopStroke(*(cocos2d::CCMotionStreak **)(v5 + 1960)); /*0x516746*/
  if ( *(_BYTE *)(v5 + 2432) ) /*0x51674c*/
  {
    *(_BYTE *)(v5 + 2432) = 0; /*0x516764*/
    sub_4F9CA0(v5); /*0x51677d*/
  }
  PlayerObject_toggleGhostEffect(*(_QWORD *)(a1 + 3576), 0); /*0x51678b*/
  if ( *(_BYTE *)(a1 + 1058) ) /*0x516790*/
  {
    LOBYTE(v6) = 1; /*0x5167a4*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3584) + 1160LL))(*(_QWORD *)(a1 + 3584), v6); /*0x5167a9*/
    v7 = *(_QWORD *)(a1 + 3584); /*0x5167af*/
    if ( *(_BYTE *)(v7 + 2030) ) /*0x5167b6*/
      cocos2d::CCParticleSystem::stopSystem(*(cocos2d::CCParticleSystem **)(v7 + 2240)); /*0x5167c6*/
    *(_BYTE *)(v7 + 2030) = 0; /*0x5167cc*/
    v8 = *(_QWORD *)(a1 + 3584); /*0x5167d3*/
    cocos2d::CCMotionStreak::stopStroke(*(cocos2d::CCMotionStreak **)(v8 + 1960)); /*0x5167e1*/
    if ( *(_BYTE *)(v8 + 2432) ) /*0x5167e7*/
    {
      *(_BYTE *)(v8 + 2432) = 0; /*0x5167f7*/
      sub_4F9CA0(v8); /*0x51680e*/
    }
    PlayerObject_toggleGhostEffect(*(_QWORD *)(a1 + 3584), 0); /*0x51681c*/
  }
  v9 = *(_QWORD *)(a1 + 3600); /*0x516821*/
  if ( v9 ) /*0x516830*/
  {
    v10 = *(unsigned int **)(v9 + 56); /*0x516837*/
    v11 = *v10; /*0x51683b*/
    if ( (_DWORD)v11 ) /*0x51683f*/
    {
      v12 = (_QWORD *)*((_QWORD *)v10 + 2); /*0x516841*/
      for ( i = &v12[v11 - 1]; v12 <= i; ++v12 ) /*0x516855*/
      {
        v14 = *v12; /*0x516857*/
        if ( !*v12 ) /*0x516857*/
          break; /*0x51685d*/
        LOBYTE(v6) = 1; /*0x516862*/
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v14 + 1160LL))(*v12, v6); /*0x516867*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 728LL))(v14); /*0x516873*/
      }
    }
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 3600)); /*0x51689d*/
}

// [76/80] Address: 0x5168b0
// Method: PlayLayer::onEnterTransitionDidFinish
__int64 __fastcall PlayLayer_onEnterTransitionDidFinish(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 15495) ) /*0x5168b6*/
    *(_BYTE *)(cocos2d::CCApplication::sharedApplication() + 225) = 0; /*0x5168c8*/
  cocos2d::CCLayer::onEnterTransitionDidFinish((cocos2d::CCLayer *)a1); /*0x5168d2*/
  return sub_66BE60(*(_QWORD *)(a1 + 13952)); /*0x5168df*/
}

// [77/80] Address: 0x5168f0
// Method: PlayLayer::onExit
void __fastcall PlayLayer_onExit(cocos2d::CCLayer *a1)
{
  PlayLayer_dtFlushCells(a1); /*0x5168f9*/
  if ( !*(_BYTE *)(cocos2d::CCApplication::sharedApplication() + 225) ) /*0x516904*/
  {
    *(_BYTE *)(cocos2d::CCDirector::sharedDirector() + 178) = 0; /*0x516913*/
    *(_BYTE *)(cocos2d::CCApplication::sharedApplication() + 225) = 1; /*0x516923*/
    cocos2d::CCLayer::onExit(a1); /*0x51692f*/
  }
}

// [78/80] Address: 0x519c80
// Method: PlayLayer::dtCommitPlaytime
void __fastcall PlayLayer_dtCommitPlaytime(__int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rcx
  __int64 v4; // rcx

  if ( (!*(_BYTE *)(a1 + 12734) || *(_BYTE *)(a1 + 15296)) /*0x519cb9*/
    && !*(_BYTE *)(a1 + 14905)
    && !*(_BYTE *)(a1 + 14906)
    && !*(_BYTE *)(a1 + 12732) )
  {
    if ( !*(_BYTE *)(a1 + 13088) ) /*0x519cc2*/
    {
      v2 = lround(*(double *)(a1 + 15448) - *(double *)(a1 + 15192)); /*0x519cdb*/
      v3 = *(_DWORD **)(a1 + 2168); /*0x519ce1*/
      if ( v2 > 0 ) /*0x519cea*/
      {
        v3[465] += v2; /*0x519cec*/
        v3[464] += v2; /*0x519cf2*/
        v3[428] = 2; /*0x519cf8*/
      }
    }
    *(_QWORD *)(a1 + 15192) = *(_QWORD *)(a1 + 15448); /*0x519d0b*/
    *(_DWORD *)(*(_QWORD *)(a1 + 2168) + 1852LL) = time64(0); /*0x519d1f*/
    v4 = *(_QWORD *)(a1 + 2168); /*0x519d25*/
    if ( !*(_DWORD *)(v4 + 1848) ) /*0x519d2c*/
      *(_DWORD *)(v4 + 1848) = *(_DWORD *)(v4 + 1852); /*0x519d3b*/
  }
}

// [79/80] Address: 0x519d50
// Method: PlayLayer::dtFlushCells
// Hidden C++ exception states: #wind=1
void __fastcall PlayLayer_dtFlushCells(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // rdx
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rax
  size_t v15; // r8
  _QWORD v16[2]; // [rsp+20h] [rbp-288h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-278h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-268h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-258h] BYREF
  _BYTE v20[528]; // [rsp+60h] [rbp-248h] BYREF

  if ( *(_BYTE *)(a1 + 15184) ) /*0x519d84*/
  {
    v2 = *(_QWORD *)(a1 + 2168); /*0x519d91*/
    if ( v2 ) /*0x519d9b*/
    {
      fmt::BasicWriter<char>::BasicWriter<char>(v20); /*0x519da6*/
      v3 = 0; /*0x519db0*/
      if ( (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 15168) - *(_QWORD *)(a1 + 15160)) >> 2) >= 4 ) /*0x519dc9*/
      {
        do /*0x519ea0*/
        {
          if ( v3 ) /*0x519dd9*/
          {
            v16[0] = &unk_709CE8; /*0x519ddb*/
            v16[1] = 0; /*0x519de0*/
            fmt::BasicWriter<char>::operator<<(v20, v16); /*0x519def*/
          }
          v19[0] = &unk_709CE8; /*0x519df5*/
          v19[1] = 0; /*0x519dfa*/
          v18[0] = &unk_709CE8; /*0x519dff*/
          v18[1] = 0; /*0x519e04*/
          v17[0] = &unk_709CE8; /*0x519e09*/
          v17[1] = 0; /*0x519e0e*/
          v4 = *(_QWORD *)(a1 + 15160); /*0x519e13*/
          v5 = *(_DWORD *)(v4 + 4 * v3 + 12); /*0x519e1a*/
          v6 = *(_DWORD *)(v4 + 4 * v3 + 8); /*0x519e1f*/
          v7 = *(_DWORD *)(v4 + 4 * v3 + 4); /*0x519e24*/
          v8 = fmt::BasicWriter<char>::operator<<(v20, *(unsigned int *)(v4 + 4 * v3)); /*0x519e32*/
          v9 = fmt::BasicWriter<char>::operator<<(v8, v17); /*0x519e40*/
          v10 = fmt::BasicWriter<char>::operator<<(v9, v7); /*0x519e4b*/
          v11 = fmt::BasicWriter<char>::operator<<(v10, v18); /*0x519e59*/
          v12 = fmt::BasicWriter<char>::operator<<(v11, v6); /*0x519e64*/
          v13 = fmt::BasicWriter<char>::operator<<(v12, v19); /*0x519e72*/
          fmt::BasicWriter<char>::operator<<(v13, v5); /*0x519e7d*/
          v3 += 4; /*0x519e83*/
        }
        while ( v3 + 4 <= (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 15168) - *(_QWORD *)(a1 + 15160)) >> 2) ); /*0x519ea0*/
      }
      v14 = (_BYTE *)fmt::BasicWriter<char>::c_str(v20); /*0x519eab*/
      v15 = -1; /*0x519eb1*/
      do /*0x519ec3*/
        ++v15; /*0x519ec0*/
      while ( v14[v15] ); /*0x519ec3*/
      sub_3F5A0((void *)(v2 + 1944), v14, v15); /*0x519ed3*/
      fmt::BasicWriter<char>::~BasicWriter<char>(v20); /*0x519ede*/
      *(_BYTE *)(a1 + 15184) = 0; /*0x519ee4*/
    }
  }
}

// [80/80] Address: 0x66e2a0
// Method: PlayLayer::storeCheckpoint
void PlayLayer_storeCheckpoint()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  void *v2; // [rsp+40h] [rbp+18h]

  v0 = qword_905FD0; /*0x66e2a4*/
  if ( !qword_905FD0 ) /*0x66e2ae*/
  {
    v2 = operator new(0x6E8u); /*0x66e2ba*/
    qword_905FD0 = sub_2723A0(v2); /*0x66e2c8*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x66e2d9*/
    v0 = qword_905FD0; /*0x66e2db*/
  }
  v1 = *(_QWORD *)(v0 + 560); /*0x66e2e2*/
  if ( v1 ) /*0x66e2ec*/
  {
    if ( *(_BYTE *)(v1 + 13088) ) /*0x66e2ee*/
      PlayLayer_removeCheckpoint(v1, 0); /*0x66e2fd*/
  }
}
