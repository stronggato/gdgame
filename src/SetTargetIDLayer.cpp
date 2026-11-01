#include <Geode/binding/SetTargetIDLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x2c2e40
// Method: SetTargetIDLayer::init
// Hidden C++ exception states: #wind=3
struct cocos2d::CCObject *__fastcall SetTargetIDLayer_init(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // edi
  struct cocos2d::CCObject *v11; // r13
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rbx
  unsigned int v16; // edi
  unsigned int *v17; // rdx
  int v18; // edi
  __int64 v19; // rax
  const struct cocos2d::CCPoint *v20; // rdx
  float v21; // xmm0_4
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // edi
  __int64 v27; // rbx
  int v28; // eax
  cocos2d::CCArray *v29; // rdi
  struct cocos2d::CCObject *v30; // rbx
  __int64 v31; // rdx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  _QWORD *i; // rdi
  __int64 v36; // rax
  __int64 v37; // r8
  __int128 *v38; // rdx
  __int128 *v39; // r9
  __int128 *v40; // rax
  __int64 v41; // rax
  struct cocos2d::CCObject *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rbx
  struct cocos2d::CCObject *v45; // rsi
  __int64 v46; // rax
  struct cocos2d::CCObject *PageContainer; // rax
  cocos2d::CCArray *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  int v51; // eax
  cocos2d::CCArray *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+60h] [rbp-A0h] BYREF
  struct cocos2d::CCObject *v58; // [rsp+68h] [rbp-98h] BYREF
  __int128 *v59; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+88h] [rbp-78h]
  cocos2d::CCArray *v63; // [rsp+90h] [rbp-70h] BYREF
  int v64; // [rsp+98h] [rbp-68h]
  _BYTE v65[4]; // [rsp+A0h] [rbp-60h] BYREF
  float v66; // [rsp+A4h] [rbp-5Ch]
  __int128 v67; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-48h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  __int128 v70; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-28h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  char v73[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v74[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v75[32]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v76; // [rsp+118h] [rbp+18h] BYREF
  __int128 v77; // [rsp+128h] [rbp+28h]

  v60 = a3; /*0x2c2e74*/
  v8 = *(int *)(a1 + 1052); /*0x2c2e7f*/
  if ( (int)v8 < 0 ) /*0x2c2e89*/
    return 0; /*0x2c2e89*/
  v9 = *(_QWORD *)(a1 + 1000); /*0x2c2e8f*/
  v61 = v9; /*0x2c2e96*/
  if ( (int)v8 >= (int)((*(_QWORD *)(a1 + 1008) - v9) / 88) ) /*0x2c2ec2*/
    return 0; /*0x2c3450*/
  v62 = 88 * v8; /*0x2c2ecc*/
  v10 = *(_DWORD *)(88 * v8 + v9 + 76); /*0x2c2ed0*/
  v11 = 0; /*0x2c2ee5*/
  v12 = 0; /*0x2c2eeb*/
  if ( v10 / 12 >= 0 ) /*0x2c2eee*/
    v12 = v10 / 12; /*0x2c2eee*/
  v64 = v12; /*0x2c2ef1*/
  v13 = *(_QWORD *)(a1 + 1024); /*0x2c2ef4*/
  v14 = *(_QWORD *)(a1 + 1032) - v13; /*0x2c2f02*/
  if ( (int)v8 >= (int)(v14 / 24) || v12 < 0 ) /*0x2c2f2b*/
  {
    v57 = 0; /*0x2c2fb7*/
  }
  else
  {
    v15 = (__int64 *)(v13 + 24 * v8); /*0x2c2f35*/
    v14 = *v15; /*0x2c2f39*/
    if ( (int)((v15[1] - *v15) >> 2) <= v12 ) /*0x2c2f49*/
    {
      do /*0x2c2f9d*/
      {
        v16 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 896)); /*0x2c2f5d*/
        v57 = v16; /*0x2c2f5f*/
        SetupTriggerPopup_getPageContainer(a1, v16); /*0x2c2f68*/
        v17 = (unsigned int *)v15[1]; /*0x2c2f6d*/
        if ( v17 == (unsigned int *)v15[2] ) /*0x2c2f75*/
        {
          sub_689C0(v15, v17, &v57); /*0x2c2f88*/
        }
        else
        {
          *v17 = v16; /*0x2c2f77*/
          v15[1] += 4; /*0x2c2f79*/
        }
        v14 = *v15; /*0x2c2f8d*/
      }
      while ( (int)((v15[1] - *v15) >> 2) <= v12 ); /*0x2c2f9d*/
      v10 = *(_DWORD *)(v62 + v61 + 76); /*0x2c2fa7*/
    }
    v57 = *(_DWORD *)(v14 + 4LL * v12); /*0x2c2fb1*/
  }
  v18 = v10 % 12; /*0x2c2fd2*/
  v19 = cocos2d::CCDirector::sharedDirector(v14); /*0x2c2fd7*/
  cocos2d::CCDirector::getWinSize(v19, &v58); /*0x2c2fe5*/
  cocos2d::CCPoint::CCPoint( /*0x2c301b*/
    (cocos2d::CCPoint *)&v63,
    (float)(*(float *)&v58 * 0.5) - 160.0,
    (float)(*((float *)&v58 + 1) * 0.5) + 75.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v59, (float)(*(float *)&v58 * 0.5) + 32.0, *((float *)&v63 + 1)); /*0x2c303d*/
  v20 = (const struct cocos2d::CCPoint *)&v63; /*0x2c3046*/
  if ( (((_BYTE)v18 + 1) & 1) == 0 ) /*0x2c304f*/
    v20 = (const struct cocos2d::CCPoint *)&v59; /*0x2c304f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v65, v20); /*0x2c3057*/
  if ( v18 + 1 > 2 ) /*0x2c3060*/
  {
    v21 = floorf((float)v18 * 0.5); /*0x2c306d*/
    v66 = v66 - (float)((float)(int)v21 * 37.0); /*0x2c308e*/
  }
  v59 = &v67; /*0x2c3097*/
  v67 = 0; /*0x2c309f*/
  v68 = 0; /*0x2c30a3*/
  v69 = 0; /*0x2c30a7*/
  v22 = -1; /*0x2c30ab*/
  v23 = -1; /*0x2c30b2*/
  do /*0x2c30b8*/
    ++v23; /*0x2c30b5*/
  while ( *(_BYTE *)(a2 + v23) ); /*0x2c30b8*/
  sub_3C230(&v67); /*0x2c30c5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, 8.0, 0.0); /*0x2c30dd*/
  v25 = v24; /*0x2c30e3*/
  v26 = *(_DWORD *)(v62 + v61 + 64); /*0x2c30ee*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v74, (const struct cocos2d::CCPoint *)v65); /*0x2c30fa*/
  v56 = v25; /*0x2c3103*/
  v27 = (int)v60; /*0x2c3147*/
  v29 = (cocos2d::CCArray *)sub_609810( /*0x2c3156*/
                              a1,
                              v60,
                              (unsigned int)&v67,
                              v28,
                              0,
                              v57,
                              v26,
                              1060320051,
                              1051931443,
                              1140457472,
                              v56);
  v63 = v29; /*0x2c3159*/
  v30 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), v27); /*0x2c316d*/
  v58 = v30; /*0x2c3170*/
  if ( v30 ) /*0x2c3178*/
  {
    if ( (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1168LL))(a1, v60) == 0.0 ) /*0x2c3193*/
      v31 = 0; /*0x2c3195*/
    else
      LOBYTE(v31) = 1; /*0x2c3199*/
    CCMenuItemToggler_toggle((__int64)v30, v31); /*0x2c319e*/
  }
  if ( v29 ) /*0x2c31a6*/
  {
    v32 = (unsigned int *)*((_QWORD *)v29 + 7); /*0x2c31a8*/
    v33 = *v32; /*0x2c31ac*/
    if ( (_DWORD)v33 ) /*0x2c31b0*/
    {
      v34 = (_QWORD *)*((_QWORD *)v32 + 2); /*0x2c31b2*/
      for ( i = &v34[v33 - 1]; v34 <= i; ++v34 ) /*0x2c31c1*/
      {
        if ( !*v34 ) /*0x2c31c3*/
          break; /*0x2c31c9*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v34 + 336LL))(*v34, 0); /*0x2c31d0*/
      }
      v30 = v58; /*0x2c31df*/
    }
  }
  if ( !a4 ) /*0x2c31e7*/
    goto LABEL_50; /*0x2c31e7*/
  v36 = -1; /*0x2c31ed*/
  do /*0x2c31f3*/
    ++v36; /*0x2c31f0*/
  while ( *(_BYTE *)(a4 + v36) ); /*0x2c31f3*/
  if ( v36 && v30 ) /*0x2c3206*/
  {
    v76 = 0; /*0x2c320f*/
    v77 = 0; /*0x2c3216*/
    v37 = -1; /*0x2c321b*/
    do /*0x2c3223*/
      ++v37; /*0x2c3220*/
    while ( *(_BYTE *)(a2 + v37) ); /*0x2c3223*/
    sub_3C230(&v76); /*0x2c3231*/
    v38 = &v76; /*0x2c3237*/
    if ( *((_QWORD *)&v77 + 1) > 0xFu ) /*0x2c3240*/
      v38 = (__int128 *)v76; /*0x2c3240*/
    v39 = (__int128 *)((char *)v38 + v77); /*0x2c3249*/
    v40 = &v76; /*0x2c324c*/
    if ( *((_QWORD *)&v77 + 1) > 0xFu ) /*0x2c3255*/
      v40 = (__int128 *)v76; /*0x2c3255*/
    for ( ; v40 != v39; v40 = (__int128 *)((char *)v40 + 1) ) /*0x2c325d*/
    {
      if ( *(_BYTE *)v40 == 10 ) /*0x2c3263*/
        *(_BYTE *)v40 = 32; /*0x2c3265*/
    }
    v59 = &v70; /*0x2c3274*/
    v70 = 0; /*0x2c327c*/
    v71 = 0; /*0x2c3280*/
    v72 = 0; /*0x2c3284*/
    do /*0x2c3293*/
      ++v22; /*0x2c3290*/
    while ( *(_BYTE *)(a4 + v22) ); /*0x2c3293*/
    sub_3C230(&v70); /*0x2c32a4*/
    v41 = sub_3E4F0(v75, &v76); /*0x2c32b2*/
    v42 = (struct cocos2d::CCObject *)InfoAlertButton_create(v41, &v70); /*0x2c32c7*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x2c32e1*/
      *(_QWORD *)(a1 + 552),
      v42);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, -17.0, 15.0); /*0x2c32f9*/
    v44 = v43; /*0x2c32ff*/
    v45 = v58; /*0x2c3302*/
    v46 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v58 + 200LL))(v58); /*0x2c3314*/
    cocos2d::CCPoint::operator+(v46, &v59, v44); /*0x2c3321*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int128 **))(*(_QWORD *)v42 + 184LL))(v42, &v59); /*0x2c3332*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v42 + 336LL))(v42, 0); /*0x2c3340*/
    PageContainer = SetupTriggerPopup_getPageContainer(a1, v57); /*0x2c334d*/
    cocos2d::CCArray::addObject(PageContainer, v42); /*0x2c3358*/
    v48 = (cocos2d::CCArray *)sub_606BC0(a1, *(unsigned int *)(v62 + v61 + 64)); /*0x2c336d*/
    cocos2d::CCArray::addObject(v48, v42); /*0x2c3378*/
    sub_3C310(&v76); /*0x2c3383*/
  }
  else
  {
LABEL_50:
    v45 = v58; /*0x2c338a*/
  }
  v49 = v61; /*0x2c338f*/
  v50 = v62; /*0x2c3393*/
  ++*(_DWORD *)(v62 + v61 + 76); /*0x2c3397*/
  v51 = *(_DWORD *)(v50 + v49 + 72); /*0x2c33a1*/
  if ( v51 <= v64 + 1 ) /*0x2c33a8*/
    v51 = v64 + 1; /*0x2c33a8*/
  *(_DWORD *)(v50 + v49 + 72) = v51; /*0x2c33ab*/
  if ( a5 ) /*0x2c33b7*/
  {
    v52 = v63; /*0x2c33bd*/
    if ( cocos2d::CCArray::count(v63) > 1 ) /*0x2c33cd*/
      v11 = cocos2d::CCArray::objectAtIndex(v52, 1u); /*0x2c33dd*/
    LOWORD(v57) = -26986; /*0x2c33e0*/
    BYTE2(v57) = -106; /*0x2c33e7*/
    *((_BYTE *)v45 + 393) = 1; /*0x2c33ec*/
    v53 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v45 + 47) + 952LL))(*((_QWORD *)v45 + 47)); /*0x2c33fd*/
    (**(void (__fastcall ***)(__int64, unsigned int *))(v53 + 320))(v53 + 320, &v57); /*0x2c3412*/
    v54 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v45 + 48) + 952LL))(*((_QWORD *)v45 + 48)); /*0x2c341e*/
    (**(void (__fastcall ***)(__int64, unsigned int *))(v54 + 320))(v54 + 320, &v57); /*0x2c3433*/
    if ( v11 ) /*0x2c3438*/
      (**((void (__fastcall ***)(__int64, unsigned int *))v11 + 46))((__int64)v11 + 368, &v57); /*0x2c3449*/
  }
  return v45; /*0x2c3452*/
}

// [2/4] Address: 0x593dc0
// Method: SetTargetIDLayer::~SetTargetIDLayer
cocos2d::CCNode *__fastcall SetTargetIDLayer__dtor_SetTargetIDLayer(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetTargetIDLayer::`vftable'; /*0x593dd3*/
  *((_QWORD *)Block + 40) = &SetTargetIDLayer::`vftable'; /*0x593de0*/
  *((_QWORD *)Block + 41) = &SetTargetIDLayer::`vftable'; /*0x593dee*/
  *((_QWORD *)Block + 42) = &SetTargetIDLayer::`vftable'; /*0x593dfc*/
  *((_QWORD *)Block + 43) = &SetTargetIDLayer::`vftable'; /*0x593e0a*/
  *((_QWORD *)Block + 44) = &SetTargetIDLayer::`vftable'; /*0x593e18*/
  *((_QWORD *)Block + 51) = &SetTargetIDLayer::`vftable'; /*0x593e26*/
  *((_QWORD *)Block + 54) = &SetTargetIDLayer::`vftable'; /*0x593e34*/
  *((_QWORD *)Block + 68) = &SetTargetIDLayer::`vftable'; /*0x593e42*/
  *((_QWORD *)Block + 83) = &SetTargetIDLayer::`vftable'; /*0x593e50*/
  *((_QWORD *)Block + 84) = &SetTargetIDLayer::`vftable'; /*0x593e5e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x593e65*/
  if ( (a2 & 1) != 0 ) /*0x593e6d*/
    j_j_free(Block); /*0x593e77*/
  return Block; /*0x593e7c*/
}

// [3/4] Address: 0x593e90
// Method: SetTargetIDLayer::create
// Hidden C++ exception states: #wind=4
_QWORD *__fastcall SetTargetIDLayer_create(int a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // r14
  __int64 v9; // rbx
  int v10; // eax
  _BYTE v12[32]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v13[32]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v14; // [rsp+90h] [rbp-58h]
  __int64 v15; // [rsp+98h] [rbp-50h]

  v14 = a3; /*0x593ec0*/
  v15 = a4; /*0x593ec4*/
  v8 = operator new(0x3F8u); /*0x593ed2*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v8); /*0x593edd*/
  *v8 = &SetTargetIDLayer::`vftable'; /*0x593ee9*/
  v8[40] = &SetTargetIDLayer::`vftable'; /*0x593ef3*/
  v8[41] = &SetTargetIDLayer::`vftable'; /*0x593f01*/
  v8[42] = &SetTargetIDLayer::`vftable'; /*0x593f0f*/
  v8[43] = &SetTargetIDLayer::`vftable'; /*0x593f1d*/
  v8[44] = &SetTargetIDLayer::`vftable'; /*0x593f2b*/
  v8[51] = &SetTargetIDLayer::`vftable'; /*0x593f39*/
  v8[54] = &SetTargetIDLayer::`vftable'; /*0x593f47*/
  v8[68] = &SetTargetIDLayer::`vftable'; /*0x593f55*/
  v8[83] = &SetTargetIDLayer::`vftable'; /*0x593f63*/
  v8[84] = &SetTargetIDLayer::`vftable'; /*0x593f71*/
  *(_QWORD *)((char *)v8 + 1004) = 0; /*0x593f78*/
  v9 = sub_3E4F0(v12, a4); /*0x593f9a*/
  v10 = sub_3E4F0(v13, a3); /*0x593fa5*/
  if ( (unsigned __int8)sub_594020((_DWORD)v8, a1, a2, v10, v9) ) /*0x593fc6*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v8); /*0x593fd2*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 8LL))(v8, 1); /*0x593fe2*/
    v8 = 0; /*0x593fe5*/
  }
  sub_3C310(a3); /*0x593feb*/
  sub_3C310(a4); /*0x593ff4*/
  return v8; /*0x593ffc*/
}

// [4/4] Address: 0x594530
// Method: SetTargetIDLayer::valueDidChange
void __fastcall SetTargetIDLayer_valueDidChange(__int64 a1, int a2, float a3)
{
  float v3; // xmm0_4

  if ( a2 == 51 ) /*0x594533*/
  {
    v3 = (float)*(int *)(a1 + 1004); /*0x59453d*/
    if ( v3 <= a3 && (v3 = (float)*(int *)(a1 + 1008), a3 <= v3) ) /*0x594553*/
      sub_607BB0(a1); /*0x594562*/
    else
      SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0x33u, v3); /*0x59455d*/
  }
}
