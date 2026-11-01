#include <Geode/binding/KeyframeGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x651a40
// Method: KeyframeGameObject::init
char __fastcall KeyframeGameObject_init(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCObject *v3; // rax

  *(_DWORD *)(a1 + 28) = 13; /*0x651a4d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "keyframeIcon_001.png") ) /*0x651a57*/
    return 0; /*0x651ab9*/
  sub_287800(a1); /*0x651a64*/
  *(_BYTE *)(a1 + 313) = 0; /*0x651a69*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x651a70*/
  *(_WORD *)(a1 + 1465) = -1; /*0x651a7a*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x651a83*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x651a8a*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x651a94*/
  v3 = (cocos2d::CCObject *)cocos2d::CCArray::create(v2); /*0x651a9b*/
  *(_QWORD *)(a1 + 1856) = v3; /*0x651aa4*/
  cocos2d::CCObject::retain(v3); /*0x651aab*/
  return 1; /*0x651ab3*/
}

// [2/5] Address: 0x651ad0
// Method: KeyframeGameObject::updateShadowObjects
// Hidden C++ exception states: #wind=1
double __fastcall KeyframeGameObject_updateShadowObjects(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  struct cocos2d::CCObject *Group; // rsi
  cocos2d::CCArray *v8; // rax
  cocos2d::CCArray *v9; // rbx
  struct cocos2d::CCObject *v10; // rbx
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  const struct cocos2d::CCPoint *v15; // rax
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  double result; // xmm0_8
  char v19; // [rsp+20h] [rbp-98h]
  _BYTE v20[8]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v21[8]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v22[8]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v23[32]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v24[32]; // [rsp+78h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a1 + 1864); /*0x651afa*/
  if ( v6 ) /*0x651b04*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 528LL))(v6); /*0x651b09*/
    *(_QWORD *)(a1 + 1864) = 0; /*0x651b0f*/
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 1856)); /*0x651b21*/
  if ( *(_BYTE *)(a1 + 1896) ) /*0x651b27*/
  {
    *(_BYTE *)(a1 + 559) = 1; /*0x651b3c*/
    Group = GJBaseGameLayer_getGroup(a2, *(unsigned int *)(a1 + 1480)); /*0x651b51*/
    v8 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a2 + 4032), *(int *)(a1 + 1480)); /*0x651b62*/
    v9 = v8; /*0x651b68*/
    if ( v8 && cocos2d::CCArray::count(v8) ) /*0x651b73*/
      v10 = cocos2d::CCArray::objectAtIndex(v9, 0); /*0x651b88*/
    else
      v10 = 0; /*0x651b8d*/
    if ( cocos2d::CCArray::count(Group) ) /*0x651b92*/
    {
      if ( v10 ) /*0x651ba3*/
      {
        v19 = 0; /*0x651ba9*/
        sub_1C2920(a3, v24, Group, 0, v19); /*0x651bbc*/
        v11 = sub_3E4F0(v23, v24); /*0x651bcc*/
        LOBYTE(v12) = 1; /*0x651bef*/
        v13 = sub_1EDA80(a3, v11, 0, v12, 0, *(_QWORD *)(a1 + 1856), (__int64)Group, (__int64)v10); /*0x651bfb*/
        *(_QWORD *)(a1 + 1864) = v13; /*0x651c00*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v13); /*0x651c17*/
        (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 312LL))(a1, &unk_905DF0); /*0x651c27*/
        *(_BYTE *)(a1 + 1220) = 1; /*0x651c2d*/
        *(_DWORD *)(a1 + 764) = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1864) + 320LL))(*(_QWORD *)(a1 + 1864)); /*0x651c46*/
        *(_DWORD *)(a1 + 768) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1864) + 320LL))(*(_QWORD *)(a1 + 1864)) /*0x651c5f*/
                                          + 4);
        (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 1864) + 184LL))(*(_QWORD *)(a1 + 1864), &unk_905DD8); /*0x651c76*/
        EditorUI_getGroupCenter(v14, (cocos2d::CCPoint *)v22, Group, 1); /*0x651c87*/
        v15 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v10 + 200LL))(v10); /*0x651c92*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v21, v15); /*0x651ca0*/
        cocos2d::CCPoint::operator-(v22, v20, v21); /*0x651cb5*/
        cocos2d::CCPoint::operator=(a1 + 716, v20); /*0x651cc7*/
        *(_BYTE *)(a1 + 872) = 1; /*0x651ccd*/
        v16 = *(_QWORD *)(a1 + 320); /*0x651cd4*/
        v17 = (*(__int64 (__fastcall **)(__int64))(v16 + 32))(a1 + 320); /*0x651ce2*/
        (*(void (__fastcall **)(__int64, _QWORD))(v16 + 40))(a1 + 320, v17); /*0x651cef*/
        return sub_3C310(v24); /*0x651cf8*/
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 559) = 0; /*0x651b30*/
  }
  return result; /*0x651cfd*/
}

// [3/5] Address: 0x651d20
// Method: KeyframeGameObject::setOpacity
__int64 __fastcall KeyframeGameObject_setOpacity(__int64 a1, unsigned __int8 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int *v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int64 i; // rsi

  LOBYTE(v3) = a2; /*0x651d34*/
  if ( *(_BYTE *)(a1 + 1560) ) /*0x651d2a*/
    v3 = (int)(float)((float)a2 * 0.5); /*0x651d48*/
  GameObject_setOpacity(a1, (unsigned __int8)v3); /*0x651d50*/
  v4 = *(_QWORD *)(a1 + 1520); /*0x651d55*/
  if ( v4 ) /*0x651d5f*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 368) + 40LL))(v4 + 368, *(unsigned __int8 *)(a1 + 9)); /*0x651d6f*/
  result = *(_QWORD *)(a1 + 1536); /*0x651d72*/
  if ( result ) /*0x651d7c*/
  {
    v6 = *(unsigned int **)(result + 56); /*0x651d7e*/
    result = *v6; /*0x651d82*/
    if ( (_DWORD)result ) /*0x651d86*/
    {
      v7 = *((_QWORD *)v6 + 2); /*0x651d88*/
      for ( i = v7 + 8 * (result - 1); v7 <= i; v7 += 8LL ) /*0x651d9c*/
      {
        if ( !*(_QWORD *)v7 ) /*0x651da0*/
          break; /*0x651da6*/
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v7 + 320LL) + 40LL))( /*0x651db6*/
                   *(_QWORD *)v7 + 320LL,
                   (unsigned __int8)v3);
      }
    }
  }
  return result; /*0x651dc7*/
}

// [4/5] Address: 0x651de0
// Method: KeyframeGameObject::customObjectSetup
int __fastcall KeyframeGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  int v15; // eax
  const char *v16; // rcx
  float v17; // xmm6_4
  const char *v18; // rcx
  float v19; // xmm7_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  const char *v22; // rcx
  float v23; // xmm7_4
  int v24; // eax
  const char *v25; // rcx
  int v26; // eax
  const char *v27; // rcx
  float v28; // xmm1_4
  const char *v29; // rcx
  float v30; // xmm7_4
  const char *v31; // rcx
  float v32; // xmm7_4
  float v33; // xmm1_4
  int v34; // eax
  const char *v35; // rcx
  int v36; // eax
  const char *v37; // rcx
  int v38; // eax
  const char *v39; // rcx
  int v40; // eax
  const char *v41; // rcx
  int v42; // eax
  const char *v43; // rcx
  int v44; // eax
  const char *v45; // rcx
  const char *v46; // rcx
  __int64 v47; // rax
  const char *v48; // rcx
  float v49; // xmm7_4

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x651e0e*/
  v6 = 0; /*0x651e16*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x651e18*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x651e28*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x651e34*/
      v8 = *(const char **)v8; /*0x651e36*/
    v7 = atoi(v8); /*0x651e39*/
  }
  else
  {
    v7 = 0; /*0x651e21*/
  }
  *(_DWORD *)(a1 + 1480) = v7; /*0x651e3f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2984LL) ) /*0x651e48*/
  {
    v10 = (const char *)(*(_QWORD *)a2 + 11936LL); /*0x651e58*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11960LL) > 0xFu ) /*0x651e64*/
      v10 = *(const char **)v10; /*0x651e66*/
    v9 = atoi(v10); /*0x651e69*/
  }
  else
  {
    v9 = 0; /*0x651e51*/
  }
  *(_DWORD *)(a1 + 1872) = v9; /*0x651e6f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2992LL) ) /*0x651e78*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 11968LL); /*0x651e88*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11992LL) > 0xFu ) /*0x651e94*/
      v12 = *(const char **)v12; /*0x651e96*/
    v11 = atoi(v12); /*0x651e99*/
  }
  else
  {
    v11 = 0; /*0x651e81*/
  }
  *(_DWORD *)(a1 + 1876) = v11; /*0x651e9f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3000LL) ) /*0x651ea8*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 12000LL); /*0x651eb8*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12024LL) > 0xFu ) /*0x651ec4*/
      v14 = *(const char **)v14; /*0x651ec6*/
    v13 = atoi(v14); /*0x651ec9*/
  }
  else
  {
    v13 = 0; /*0x651eb1*/
  }
  *(_BYTE *)(a1 + 1880) = v13 != 0; /*0x651ed4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 240LL) ) /*0x651edd*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 960LL); /*0x651eed*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 984LL) > 0xFu ) /*0x651ef9*/
      v16 = *(const char **)v16; /*0x651efb*/
    v15 = atoi(v16); /*0x651efe*/
  }
  else
  {
    v15 = 0; /*0x651ee6*/
  }
  v17 = 0.0; /*0x651f0d*/
  *(_DWORD *)(a1 + 1512) = v15; /*0x651f19*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 680LL) ) /*0x651f27*/
    goto LABEL_33; /*0x651f27*/
  v18 = (const char *)(*(_QWORD *)a2 + 2720LL); /*0x651f33*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 2744LL) > 0xFu ) /*0x651f3f*/
    v18 = *(const char **)v18; /*0x651f41*/
  v19 = atof(v18); /*0x651f4d*/
  v20 = isnan(v19) ? 0.0 : fminf(1000000000.0, fmaxf(-1000000000.0, v19));
  if ( v20 <= 0.0 ) /*0x651f76*/
LABEL_33:
    v20 = 2.0; /*0x651f78*/
  *(float *)(a1 + 1516) = v20; /*0x651f80*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 80LL) ) /*0x651f8b*/
  {
    v22 = (const char *)(*(_QWORD *)a2 + 320LL); /*0x651f99*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 344LL) > 0xFu ) /*0x651fa5*/
      v22 = *(const char **)v22; /*0x651fa7*/
    v23 = atof(v22); /*0x651fb3*/
    if ( isnan(v23) ) /*0x651fba*/
      v21 = 0.0; /*0x651fc4*/
    else
      v21 = fminf(1000000000.0, fmaxf(-1000000000.0, v23)); /*0x651fd5*/
  }
  else
  {
    v21 = 0.0; /*0x651f91*/
  }
  *(float *)(a1 + 1468) = v21; /*0x651fd9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x651fe4*/
  {
    v25 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x651ff4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x652000*/
      v25 = *(const char **)v25; /*0x652002*/
    v24 = atoi(v25); /*0x652005*/
  }
  else
  {
    v24 = 0; /*0x651fed*/
  }
  *(_DWORD *)(a1 + 1484) = v24; /*0x65200b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3016LL) ) /*0x652014*/
  {
    v27 = (const char *)(*(_QWORD *)a2 + 12064LL); /*0x652024*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12088LL) > 0xFu ) /*0x652030*/
      v27 = *(const char **)v27; /*0x652032*/
    v26 = atoi(v27); /*0x652035*/
  }
  else
  {
    v26 = 0; /*0x65201d*/
  }
  *(_BYTE *)(a1 + 1881) = v26 != 0; /*0x652040*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4456LL) ) /*0x652049*/
  {
    v29 = (const char *)(*(_QWORD *)a2 + 17824LL); /*0x65205a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17848LL) > 0xFu ) /*0x652066*/
      v29 = *(const char **)v29; /*0x652068*/
    v30 = atof(v29); /*0x652074*/
    if ( isnan(v30) ) /*0x65207b*/
      v28 = 0.0; /*0x652085*/
    else
      v28 = fminf(1000000000.0, fmaxf(-1000000000.0, v30)); /*0x652096*/
  }
  else
  {
    v28 = 0.0; /*0x652052*/
  }
  *(float *)(a1 + 1892) = v28; /*0x65209a*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 504LL) ) /*0x6520a5*/
  {
    v31 = (const char *)(*(_QWORD *)a2 + 2016LL); /*0x6520b1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 2040LL) > 0xFu ) /*0x6520bd*/
      v31 = *(const char **)v31; /*0x6520bf*/
    v32 = atof(v31); /*0x6520cb*/
    if ( isnan(v32) ) /*0x6520d2*/
      v33 = 0.0; /*0x6520dc*/
    else
      v33 = fminf(1000000000.0, fmaxf(-1000000000.0, v32)); /*0x6520ed*/
    if ( v33 != 0.0 ) /*0x6520f6*/
      *(float *)(a1 + 1892) = v33; /*0x6520f8*/
  }
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3024LL) ) /*0x652103*/
  {
    v35 = (const char *)(*(_QWORD *)a2 + 12096LL); /*0x652113*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12120LL) > 0xFu ) /*0x65211f*/
      v35 = *(const char **)v35; /*0x652121*/
    v34 = atoi(v35); /*0x652124*/
  }
  else
  {
    v34 = 0; /*0x65210c*/
  }
  *(_BYTE *)(a1 + 1882) = v34 != 0; /*0x65212f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3032LL) ) /*0x652138*/
  {
    v37 = (const char *)(*(_QWORD *)a2 + 12128LL); /*0x652148*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12152LL) > 0xFu ) /*0x652154*/
      v37 = *(const char **)v37; /*0x652156*/
    v36 = atoi(v37); /*0x652159*/
  }
  else
  {
    v36 = 0; /*0x652141*/
  }
  *(_DWORD *)(a1 + 1884) = v36; /*0x65215f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3008LL) ) /*0x652168*/
  {
    v39 = (const char *)(*(_QWORD *)a2 + 12032LL); /*0x652178*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12056LL) > 0xFu ) /*0x652184*/
      v39 = *(const char **)v39; /*0x652186*/
    v38 = atoi(v39); /*0x652189*/
  }
  else
  {
    v38 = 0; /*0x652171*/
  }
  *(_BYTE *)(a1 + 1883) = v38 != 0; /*0x652194*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3040LL) ) /*0x65219d*/
  {
    v41 = (const char *)(*(_QWORD *)a2 + 12160LL); /*0x6521ad*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12184LL) > 0xFu ) /*0x6521b9*/
      v41 = *(const char **)v41; /*0x6521bb*/
    v40 = atoi(v41); /*0x6521be*/
  }
  else
  {
    v40 = 0; /*0x6521a6*/
  }
  *(_BYTE *)(a1 + 1896) = v40 != 0; /*0x6521c9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3672LL) ) /*0x6521d2*/
  {
    v43 = (const char *)(*(_QWORD *)a2 + 14688LL); /*0x6521e2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14712LL) > 0xFu ) /*0x6521ee*/
      v43 = *(const char **)v43; /*0x6521f0*/
    v42 = atoi(v43); /*0x6521f3*/
  }
  else
  {
    v42 = 0; /*0x6521db*/
  }
  *(_BYTE *)(a1 + 1898) = v42 != 0; /*0x6521fe*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4288LL) ) /*0x652207*/
  {
    v45 = (const char *)(*(_QWORD *)a2 + 17152LL); /*0x652217*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17176LL) > 0xFu ) /*0x652223*/
      v45 = *(const char **)v45; /*0x652225*/
    v44 = atoi(v45); /*0x652228*/
  }
  else
  {
    v44 = 0; /*0x652210*/
  }
  *(_DWORD *)(a1 + 1900) = v44; /*0x65222e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4296LL) ) /*0x652237*/
  {
    v46 = (const char *)(*(_QWORD *)a2 + 17184LL); /*0x652243*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17208LL) > 0xFu ) /*0x65224f*/
      v46 = *(const char **)v46; /*0x652251*/
    v6 = atoi(v46); /*0x65225a*/
  }
  *(_DWORD *)(a1 + 1904) = v6; /*0x65225c*/
  v47 = *(_QWORD *)a3; /*0x652262*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4192LL) ) /*0x65226f*/
  {
    v48 = (const char *)(*(_QWORD *)a2 + 16768LL); /*0x65227c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16792LL) > 0xFu ) /*0x652288*/
      v48 = *(const char **)v48; /*0x65228a*/
    v49 = atof(v48); /*0x652296*/
    LODWORD(v47) = isnan(v49); /*0x65229d*/
    if ( !(_DWORD)v47 ) /*0x6522a5*/
      v17 = fminf(1000000000.0, fmaxf(-1000000000.0, v49)); /*0x6522b0*/
  }
  *(float *)(a1 + 1908) = v17; /*0x6522c6*/
  return v47; /*0x6522ba*/
}

// [5/5] Address: 0x6522f0
// Method: KeyframeGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyframeGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x652328*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x652335*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x652349*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x652360*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65236f*/
  sub_3C310(v13); /*0x65237d*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x652389*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652392*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652397*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6523a6*/
    fmt::BasicWriter<char>::operator<<(v12, 51); /*0x6523b6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6523bc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6523c1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6523d0*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1480)); /*0x6523e1*/
  }
  if ( *(_DWORD *)(a1 + 1872) ) /*0x6523e7*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6523f0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6523f5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652404*/
    fmt::BasicWriter<char>::operator<<(v12, 373); /*0x652414*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65241a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65241f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65242e*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1872)); /*0x65243f*/
  }
  if ( *(_DWORD *)(a1 + 1876) ) /*0x652445*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65244e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652453*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652462*/
    fmt::BasicWriter<char>::operator<<(v12, 374); /*0x652472*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652478*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65247d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65248c*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1876)); /*0x65249d*/
  }
  if ( *(_BYTE *)(a1 + 1880) ) /*0x6524a3*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6524ac*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6524b1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6524c0*/
    fmt::BasicWriter<char>::operator<<(v12, 375); /*0x6524d0*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6524d6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6524db*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6524ea*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1880)); /*0x6524fc*/
  }
  if ( *(_DWORD *)(a1 + 1512) ) /*0x652502*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65250b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652510*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65251f*/
    fmt::BasicWriter<char>::operator<<(v12, 30); /*0x65252f*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652535*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65253a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652549*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1512)); /*0x65255a*/
  }
  if ( *(float *)(a1 + 1516) != 0.0 ) /*0x652570*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652572*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652577*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652586*/
    fmt::BasicWriter<char>::operator<<(v12, 85); /*0x652596*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65259c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6525a1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6525b0*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x6525c6*/
  }
  if ( *(float *)(a1 + 1468) != 0.0 ) /*0x6525d9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6525db*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6525e0*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6525ef*/
    fmt::BasicWriter<char>::operator<<(v12, 10); /*0x6525ff*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652605*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65260a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652619*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65262f*/
  }
  if ( *(_DWORD *)(a1 + 1484) ) /*0x652635*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65263e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652643*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652652*/
    fmt::BasicWriter<char>::operator<<(v12, 71); /*0x652662*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652668*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65266d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65267c*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1484)); /*0x65268d*/
  }
  if ( *(_BYTE *)(a1 + 1881) ) /*0x652693*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65269c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6526a1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6526b0*/
    fmt::BasicWriter<char>::operator<<(v12, 377); /*0x6526c0*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6526c6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6526cb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6526da*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1881)); /*0x6526ec*/
  }
  if ( *(float *)(a1 + 1892) != 0.0 ) /*0x6526ff*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652701*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652706*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652715*/
    fmt::BasicWriter<char>::operator<<(v12, 557); /*0x652725*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65272b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652730*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65273f*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x652755*/
  }
  if ( *(_BYTE *)(a1 + 1882) ) /*0x65275b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652764*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652769*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652778*/
    fmt::BasicWriter<char>::operator<<(v12, 378); /*0x652788*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65278e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652793*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6527a2*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1882)); /*0x6527b4*/
  }
  if ( *(_DWORD *)(a1 + 1884) ) /*0x6527ba*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6527c3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6527c8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6527d7*/
    fmt::BasicWriter<char>::operator<<(v12, 379); /*0x6527e7*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6527ed*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6527f2*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652801*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1884)); /*0x652812*/
  }
  if ( *(_BYTE *)(a1 + 1883) ) /*0x652818*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652821*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652826*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652835*/
    fmt::BasicWriter<char>::operator<<(v12, 376); /*0x652845*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65284b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652850*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65285f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1883)); /*0x652871*/
  }
  if ( *(_BYTE *)(a1 + 1896) ) /*0x652877*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652880*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652885*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652894*/
    fmt::BasicWriter<char>::operator<<(v12, 380); /*0x6528a4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6528aa*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6528af*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6528be*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1896)); /*0x6528d0*/
  }
  if ( *(_BYTE *)(a1 + 1898) ) /*0x6528d6*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6528df*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6528e4*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6528f3*/
    fmt::BasicWriter<char>::operator<<(v12, 459); /*0x652903*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652909*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65290e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65291d*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1898)); /*0x65292f*/
  }
  if ( *(_DWORD *)(a1 + 1900) ) /*0x652935*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65293e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652943*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652952*/
    fmt::BasicWriter<char>::operator<<(v12, 536); /*0x652962*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652968*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65296d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65297c*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1900)); /*0x65298d*/
  }
  if ( *(_DWORD *)(a1 + 1904) ) /*0x652993*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65299c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6529a1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6529b0*/
    fmt::BasicWriter<char>::operator<<(v12, 537); /*0x6529c0*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6529c6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6529cb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6529da*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1904)); /*0x6529eb*/
  }
  if ( *(float *)(a1 + 1908) != 0.0 ) /*0x6529fe*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652a00*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652a05*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652a14*/
    fmt::BasicWriter<char>::operator<<(v12, 524); /*0x652a24*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652a2a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652a2f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652a3e*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x652a54*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x652a5f*/
  *(_OWORD *)a2 = 0; /*0x652a68*/
  *(_QWORD *)(a2 + 16) = 0; /*0x652a6b*/
  *(_QWORD *)(a2 + 24) = 0; /*0x652a6f*/
  v8 = -1; /*0x652a73*/
  do /*0x652a83*/
    ++v8; /*0x652a80*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x652a83*/
  sub_3C230(a2); /*0x652a90*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x652a9b*/
  return a2; /*0x652aa4*/
}
