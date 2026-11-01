#include <Geode/binding/ShaderLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0x4bcf0
// Method: ShaderLayer::performCalculations
// write access to const memory has been detected, the output may be wrong!
void __fastcall ShaderLayer_performCalculations(__int64 a1)
{
  cocos2d::CCGLProgram *v2; // rax
  cocos2d::CCGLProgram *v3; // rax
  unsigned int v4; // r8d
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // edi
  cocos2d::CCGLProgram *v9; // rax
  int v10; // ebx
  float v11; // xmm6_4
  cocos2d::CCGLProgram *v12; // rax
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  int v16; // ebx
  cocos2d::CCGLProgram *v17; // rax
  __int64 v18; // r9

  if ( !*(_BYTE *)(a1 + 559) ) /*0x4bcf6*/
  {
    if ( *(_BYTE *)(a1 + 329) ) /*0x4bd06*/
    {
      cocos2d::ccGLEnable(*(unsigned int *)(a1 + 248)); /*0x4bd33*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 648LL))(a1); /*0x4bd3f*/
      v2 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 648LL))(a1); /*0x4bd4b*/
      cocos2d::CCGLProgram::use(v2); /*0x4bd54*/
      v3 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 648LL))(a1); /*0x4bd60*/
      cocos2d::CCGLProgram::setUniformsForBuiltins(v3); /*0x4bd69*/
      cocos2d::ccGLBlendFunc((cocos2d *)*(unsigned int *)(a1 + 404), *(_DWORD *)(a1 + 408), v4); /*0x4bd7b*/
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 96LL))(*(_QWORD *)(a1 + 416)); /*0x4bd8b*/
      cocos2d::ccGLBindTexture2D((cocos2d *)v5, v6); /*0x4bd90*/
      cocos2d::ccGLEnableVertexAttribs((cocos2d *)((char *)&loc_3 + 4), v7); /*0x4bd9b*/
      v8 = *(_DWORD *)(a1 + 652); /*0x4bda7*/
      v9 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 648LL))(a1); /*0x4bdad*/
      cocos2d::CCGLProgram::setUniformLocationWithMatrix3fv(v9, v8, (float *)(a1 + 616), 1u); /*0x4bdc5*/
      v10 = *(_DWORD *)(a1 + 656); /*0x4bdd5*/
      v11 = (float)*(unsigned __int8 *)(a1 + 328) / 255.0; /*0x4bde5*/
      v12 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 648LL))(a1); /*0x4bded*/
      cocos2d::CCGLProgram::setUniformLocationWith1f(v12, v10, v11); /*0x4bdfb*/
      v13 = *(float *)(a1 + 612); /*0x4be07*/
      v14 = *(float *)(a1 + 608); /*0x4be0f*/
      v15 = *(float *)(a1 + 604); /*0x4be17*/
      v16 = *(_DWORD *)(a1 + 660); /*0x4be20*/
      v17 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 648LL))(a1); /*0x4be26*/
      cocos2d::CCGLProgram::setUniformLocationWith3f(v17, v16, v15, v14, v13); /*0x4be3e*/
      _glewVertexAttribPointer(0, 3, 5126, 0, 24, a1 + 460); /*0x4be72*/
      _glewVertexAttribPointer(2, 2, 5126, 0, 24, a1 + 476); /*0x4bea0*/
      LOBYTE(v18) = 1; /*0x4beb3*/
      _glewVertexAttribPointer(1, 4, 5121, v18, 24, a1 + 472); /*0x4bed1*/
      glDrawArrays(5u, 0, 4); /*0x4bee1*/
      ++g_uNumberOfDraws; /*0x4befe*/
    }
  }
}

// [2/14] Address: 0x1a0190
// Method: ShaderLayer::tweenValueAuto
__int64 __fastcall ShaderLayer_tweenValueAuto(__int64 a1, float a2)
{
  float v3; // xmm8_4
  float v4; // xmm7_4
  float v5; // xmm0_4
  __int64 v6; // rax
  char v8; // [rsp+50h] [rbp+8h] BYREF

  *(float *)(a1 + 432) = a2; /*0x1a01ac*/
  *(float *)(a1 + 436) = a2; /*0x1a01b5*/
  v3 = (float)-a2 * 0.017453292; /*0x1a01c6*/
  v4 = sinf(v3) * 60.0; /*0x1a01df*/
  v5 = cosf(v3) * 60.0; /*0x1a01ec*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, v5, v4); /*0x1a01ff*/
  cocos2d::CCPoint::operator=(a1 + 416, v6); /*0x1a020f*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 424) + 184LL))(*(_QWORD *)(a1 + 424), a1 + 416); /*0x1a0226*/
  return sub_1A0100(a1); /*0x1a0237*/
}

// [3/14] Address: 0x316d40
// Method: ShaderLayer::triggerChromaticGlitch
void __fastcall ShaderLayer_triggerChromaticGlitch(__int64 a1, __int64 *a2, float a3, char a4)
{
  int v5; // r8d
  float v7; // xmm8_4
  __int64 *v8; // rcx
  __int64 v9; // rax
  float v10; // xmm9_4
  float v11; // xmm0_4
  bool v12; // zf
  _BYTE *v13; // rax
  float v14; // xmm6_4
  float *v15; // rdi
  float v16; // xmm3_4
  __int64 v17; // rax
  _BYTE *v18; // rdi
  _DWORD *v19; // rax
  int v20; // [rsp+20h] [rbp-A8h]
  char v21; // [rsp+D0h] [rbp+8h] BYREF
  float v22; // [rsp+D4h] [rbp+Ch]
  int v23; // [rsp+E8h] [rbp+20h] BYREF

  v5 = (int)a2; /*0x316d5e*/
  v7 = 0.0; /*0x316d75*/
  if ( *(_BYTE *)(a1 + 1058) ) /*0x316d4f*/
  {
    v8 = *(__int64 **)(a1 + 1032); /*0x316d8e*/
    if ( v8 || (v8 = *(__int64 **)(a1 + 12976)) != 0 ) /*0x316da4*/
    {
LABEL_7:
      v9 = *v8; /*0x316dbf*/
      goto LABEL_8; /*0x316dbf*/
    }
  }
  if ( !a2 ) /*0x316da9*/
  {
    v8 = *(__int64 **)(a1 + 12976); /*0x316db3*/
    if ( !v8 ) /*0x316dbd*/
      goto LABEL_9; /*0x316dbd*/
    goto LABEL_7; /*0x316dbd*/
  }
  v9 = *a2; /*0x316dab*/
  v8 = a2; /*0x316dae*/
LABEL_8:
  v7 = *(float *)((*(__int64 (__fastcall **)(__int64 *, char *, __int64 *))(v9 + 1664))(v8, &v21, a2) + 4); /*0x316dc2*/
LABEL_9:
  v10 = a3 * 0.5; /*0x316dd6*/
  v11 = v7 - (float)(a3 * 0.5); /*0x316df3*/
  if ( !*(_BYTE *)(a1 + 786) ) /*0x316dd6*/
    v11 = floorf(v11 / 30.0) * 30.0; /*0x316e07*/
  v12 = *(_BYTE *)(a1 + 1058) == 0; /*0x316e0f*/
  v13 = (_BYTE *)(a1 + 784); /*0x316e16*/
  v14 = 0.5; /*0x316e25*/
  *(float *)(a1 + 776) = fmaxf(90.0, v11) + v10; /*0x316e32*/
  if ( !v12 || *v13 ) /*0x316e3c*/
    v14 = 0.40000001; /*0x316e41*/
  if ( a4 ) /*0x316e55*/
  {
    v14 = 0.0; /*0x316e57*/
LABEL_17:
    v23 = 25; /*0x316e61*/
    sub_351620(a1 + 1064, &v23); /*0x316e7b*/
    *(_DWORD *)(a1 + 1060) = 1065353216; /*0x316e80*/
    goto LABEL_25; /*0x316e8a*/
  }
  if ( v14 <= 0.0 ) /*0x316e5f*/
    goto LABEL_17; /*0x316e5f*/
  v15 = (float *)(a1 + 748); /*0x316e92*/
  if ( !*v13 || a3 != *v15 ) /*0x316ea1*/
  {
    v16 = *(float *)(a1 + 1060); /*0x316ea7*/
    if ( v16 >= 0.0 ) /*0x316eb2*/
    {
      if ( v16 > 0.0 ) /*0x316ec6*/
      {
        v17 = cocos2d::CCDirector::sharedDirector(v8); /*0x316ec8*/
        cocos2d::CCDirector::getWinSize(v17, &v21); /*0x316ed9*/
        *(float *)(a1 + 1060) = (float)((float)((float)(1.0 - (float)(*v15 * 0.5)) + (float)(v22 * 0.5)) /*0x316f23*/
                                      * *(float *)(a1 + 1060))
                              / (float)((float)(1.0 - v10) + (float)(v22 * 0.5));
      }
    }
    else
    {
      *(_DWORD *)(a1 + 1060) = 0; /*0x316eb4*/
    }
    GJGameState_tweenValue(a1 + 424, (_DWORD)a2, v5, 25, LODWORD(v14), 1, 0x40000000, -1, -1); /*0x316f68*/
  }
LABEL_25:
  if ( *(float *)(a1 + 572) == 0.0 ) /*0x316f7a*/
  {
    v18 = (_BYTE *)(a1 + 672); /*0x316f7c*/
LABEL_28:
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 0.0, *(float *)(a1 + 776)); /*0x316f91*/
    LOBYTE(v20) = 0; /*0x316fcb*/
    GJEffectManager_prepareMoveActions(a1, v19, 0, 1, v20, v14, 1, 0x40000000); /*0x316fd0*/
    *v18 = 1; /*0x316fd5*/
    goto LABEL_29; /*0x316fd5*/
  }
  v18 = (_BYTE *)(a1 + 672); /*0x316f85*/
  if ( *(_BYTE *)(a1 + 672) ) /*0x316f8c*/
    goto LABEL_28; /*0x316f8f*/
LABEL_29:
  *(float *)(a1 + 748) = a3; /*0x316fd8*/
  *(float *)(a1 + 744) = v7; /*0x317007*/
  *(_BYTE *)(a1 + 784) = 1; /*0x317015*/
}

// [4/14] Address: 0x61db80
// Method: ShaderLayer::init
// Hidden C++ exception states: #wind=1
bool __fastcall ShaderLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rdx
  double v4; // xmm0_8
  void *v5; // [rsp+38h] [rbp+10h]

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x61db89*/
  if ( result ) /*0x61db91*/
  {
    v3 = qword_905FD0; /*0x61db99*/
    if ( !qword_905FD0 ) /*0x61dba3*/
    {
      v5 = operator new(0x6E8u); /*0x61dbaf*/
      qword_905FD0 = sub_2723A0(v5); /*0x61dbbd*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x61dbce*/
      v3 = qword_905FD0; /*0x61dbd0*/
    }
    sub_61DC90(a1, *(unsigned __int8 *)(v3 + 1748)); /*0x61dbe1*/
    v4 = (float)((float)((float)((float)rand() / 32767.0) * 100.0) + 10000.0); /*0x61dc0b*/
    *(double *)(a1 + 552) = v4; /*0x61dc0e*/
    *(double *)(a1 + 536) = v4; /*0x61dc16*/
    if ( *(_DWORD *)(a1 + 1116) != 1 ) /*0x61dc27*/
    {
      *(_DWORD *)(a1 + 1116) = 1; /*0x61dc2e*/
      *(_BYTE *)(a1 + 1124) = 1; /*0x61dc34*/
    }
    if ( *(_DWORD *)(a1 + 1120) != 15 ) /*0x61dc43*/
    {
      *(_DWORD *)(a1 + 1120) = 15; /*0x61dc4a*/
      *(_BYTE *)(a1 + 1124) = 1; /*0x61dc50*/
    }
    if ( *(_BYTE *)(a1 + 1125) ) /*0x61dc57*/
      *(_BYTE *)(a1 + 1125) = 0; /*0x61dc60*/
    *(_BYTE *)(a1 + 1124) = 1; /*0x61dc78*/
    return 1; /*0x61dc7f*/
  }
  return result; /*0x61db93*/
}

// [5/14] Address: 0x61e9b0
// Method: ShaderLayer::toggleAntiAlias
void __fastcall ShaderLayer_toggleAntiAlias(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  cocos2d::CCTexture2D *v4; // rax
  __int64 v5; // rax
  cocos2d::CCTexture2D *v6; // rax

  if ( *(_BYTE *)(a1 + 1160) != a2 ) /*0x61e9ba*/
  {
    *(_BYTE *)(a1 + 1160) = a2; /*0x61e9bc*/
    v2 = **(_QWORD **)(a1 + 1144); /*0x61e9c9*/
    if ( a2 ) /*0x61e9ce*/
    {
      v3 = (*(__int64 (**)(void))(v2 + 888))(); /*0x61e9d0*/
      v4 = (cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 344) + 16LL))(v3 + 344); /*0x61e9e0*/
      cocos2d::CCTexture2D::setAntiAliasTexParameters(v4); /*0x61e9ea*/
    }
    else
    {
      v5 = (*(__int64 (**)(void))(v2 + 888))(); /*0x61e9f1*/
      v6 = (cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 344) + 16LL))(v5 + 344); /*0x61ea01*/
      cocos2d::CCTexture2D::setAliasTexParameters(v6); /*0x61ea0b*/
    }
  }
}

// [6/14] Address: 0x61ea20
// Method: ShaderLayer::update
_QWORD *__fastcall ShaderLayer_update(__int64 a1, float a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r9
  float v7; // [rsp+40h] [rbp+8h] BYREF
  float v8; // [rsp+44h] [rbp+Ch]
  char v9; // [rsp+50h] [rbp+18h] BYREF

  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v7, (const struct cocos2d::CCSize *)(a1 + 1208)); /*0x61ea41*/
  if ( *(float *)(a1 + 1224) != v7 || *(float *)(a1 + 1228) != v8 ) /*0x61ea67*/
    sub_61DC90(a1, 0); /*0x61ea6e*/
  *(double *)(a1 + 536) = a2 + *(double *)(a1 + 536); /*0x61ea82*/
  result = *(_QWORD **)(a1 + 416); /*0x61ea8a*/
  v4 = (_QWORD *)*result; /*0x61ea91*/
  if ( (_QWORD *)*result != result ) /*0x61ea97*/
  {
    do /*0x61eaea*/
    {
      GJValueTween_step((char *)v4 + 20); /*0x61eaa7*/
      result = (_QWORD *)GJShaderState_updateTweenAction(a1 + 408, v5, *((unsigned int *)v4 + 4)); /*0x61eabc*/
      if ( *((_BYTE *)v4 + 48) ) /*0x61eac1*/
      {
        result = (_QWORD *)sub_34FB90(a1 + 408, &v9, v4, v6); /*0x61ead6*/
        v4 = (_QWORD *)*result; /*0x61eadb*/
      }
      else
      {
        v4 = (_QWORD *)*v4; /*0x61eae0*/
      }
    }
    while ( v4 != *(_QWORD **)(a1 + 416) ); /*0x61eaea*/
  }
  return result; /*0x61eaec*/
}

// [7/14] Address: 0x61efa0
// Method: ShaderLayer::objectPosToShaderPos
float *__fastcall ShaderLayer_objectPosToShaderPos(__int64 a1, float *a2, __int64 a3)
{
  __int64 v5; // rax
  float v7; // xmm1_4
  float v8; // [rsp+30h] [rbp+8h] BYREF
  float v9; // [rsp+34h] [rbp+Ch]
  char v10; // [rsp+38h] [rbp+10h] BYREF

  cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(*(_QWORD *)(a1 + 1176) + 4360LL), &v8, a3); /*0x61efc3*/
  v5 = cocos2d::CCNode::convertToNodeSpace(a1, &v10, &v8); /*0x61efd6*/
  cocos2d::CCPoint::operator=(&v8, v5); /*0x61efe4*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)a2, v8 / *(float *)(a1 + 1224), v9 / *(float *)(a1 + 1228)); /*0x61f009*/
  cocos2d::CCPoint::operator*(a2, &v10); /*0x61f01f*/
  cocos2d::CCPoint::operator=(a2, &v10); /*0x61f02d*/
  v7 = a2[1]; /*0x61f042*/
  *a2 = *a2 / *(float *)(a1 + 560); /*0x61f047*/
  a2[1] = v7 / *(float *)(a1 + 564); /*0x61f058*/
  return a2; /*0x61f053*/
}

// [8/14] Address: 0x6224b0
// Method: ShaderLayer::prePixelateShader
__int64 __fastcall ShaderLayer_prePixelateShader(__int64 a1)
{
  float *v2; // rdi
  char v3; // dl
  float v4; // xmm8_4
  float v5; // xmm7_4
  float v6; // xmm9_4
  __int64 v7; // rcx
  float v8; // xmm0_4
  char v9; // al
  float v10; // xmm0_4
  cocos2d::CCRenderTexture *v11; // rcx
  float v12; // xmm7_4
  float v13; // xmm1_4
  float v14; // xmm2_4

  if ( *(float *)(a1 + 820) > 1.0 /*0x622510*/
    || (v2 = (float *)(a1 + 824), *(float *)(a1 + 824) > 1.0)
    || cocos2d::CCNode::getActionByTag((cocos2d::CCNode *)a1, 9)
    || cocos2d::CCNode::getActionByTag((cocos2d::CCNode *)a1, 10) )
  {
    *(_BYTE *)(a1 + 1126) = 1; /*0x62252a*/
    v2 = (float *)(a1 + 824); /*0x622531*/
    *(_BYTE *)(a1 + 829) = 1; /*0x622538*/
    v3 = *(_BYTE *)(a1 + 831) == 0; /*0x622546*/
  }
  else
  {
    *(_BYTE *)(a1 + 829) = 0; /*0x62251b*/
    v3 = *(_BYTE *)(a1 + 1161); /*0x622521*/
  }
  ShaderLayer_toggleAntiAlias(a1, v3); /*0x62254c*/
  v4 = *(float *)(a1 + 820); /*0x622551*/
  if ( v4 < 1.0 ) /*0x62255e*/
  {
    *(_DWORD *)(a1 + 820) = 1065353216; /*0x622560*/
    v4 = 1.0; /*0x62256a*/
  }
  v5 = *v2; /*0x62256e*/
  if ( *v2 < 1.0 ) /*0x622575*/
  {
    *v2 = 1.0; /*0x622577*/
    v5 = 1.0; /*0x62257d*/
  }
  v6 = *(float *)(a1 + 1200); /*0x622587*/
  if ( *(_BYTE *)(a1 + 830) && (v7 = *(_QWORD *)(a1 + 1176)) != 0 ) /*0x62259c*/
  {
    v8 = fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 4360) + 168LL))(*(_QWORD *)(v7 + 4360))))); /*0x6225ae*/
    v4 = *(float *)(a1 + 820); /*0x6225b5*/
    v5 = *v2; /*0x6225be*/
  }
  else
  {
    v8 = 1.0; /*0x6225c4*/
  }
  v9 = *(_BYTE *)(a1 + 829); /*0x6225c7*/
  if ( v9 ) /*0x6225d0*/
    v10 = v8 * v6; /*0x6225d2*/
  else
    v10 = 1.0; /*0x6225d9*/
  v11 = *(cocos2d::CCRenderTexture **)(a1 + 1144); /*0x6225dc*/
  v12 = v5 * v10; /*0x6225eb*/
  v13 = 1.0 / (float)(v4 * v10); /*0x6225ef*/
  *(float *)(a1 + 560) = v13; /*0x6225f8*/
  *(float *)(a1 + 564) = 1.0 / v12; /*0x622600*/
  if ( v9 ) /*0x62260a*/
  {
    v14 = 1.0 / v12; /*0x62260c*/
  }
  else
  {
    v14 = 0.0; /*0x622611*/
    v13 = 0.0; /*0x622614*/
  }
  cocos2d::CCRenderTexture::updateInternalScale(v11, v13, v14); /*0x622617*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 120LL))(*(_QWORD *)(a1 + 1152)); /*0x62262b*/
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 136LL))(*(_QWORD *)(a1 + 1152));
}

// [9/14] Address: 0x622a00
// Method: ShaderLayer::triggerLensCircle
__int64 __fastcall ShaderLayer_triggerLensCircle(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        float a8,
        float a9,
        int a10,
        int a11,
        unsigned __int8 a12)
{
  int v13; // edx
  __int64 v14; // r8

  if ( cocos2d::clampf((cocos2d *)a1, 0.0, 1.0, a4) != -909190.0 ) /*0x622a7f*/
  {
    if ( a2 > 0.0 && *(_BYTE *)(a1 + 1128) ) /*0x622a86*/
      sub_61DA90(a1 + 408, 13, v14); /*0x622a9b*/
    ShaderLayer_tweenValue(a1, v13, v14, 13, LODWORD(a2), a10, a11); /*0x622acb*/
  }
  if ( a4 != -909190.0 ) /*0x622ad6*/
  {
    if ( a2 > 0.0 && *(_BYTE *)(a1 + 1128) ) /*0x622add*/
      sub_61DA90(a1 + 408, 12, v14); /*0x622af2*/
    ShaderLayer_tweenValue(a1, v13, v14, 12, LODWORD(a2), a10, a11); /*0x622b22*/
  }
  if ( a3 != -909190.0 ) /*0x622b2d*/
  {
    if ( a2 > 0.0 && *(_BYTE *)(a1 + 1128) ) /*0x622b34*/
      sub_61DA90(a1 + 408, 11, v14); /*0x622b49*/
    ShaderLayer_tweenValue(a1, v13, v14, 11, LODWORD(a2), a10, a11); /*0x622b79*/
  }
  if ( a8 != -909190.0 ) /*0x622b8e*/
  {
    if ( a2 > 0.0 && *(_BYTE *)(a1 + 1128) ) /*0x622b95*/
      sub_61DA90(a1 + 408, 14, v14); /*0x622baa*/
    ShaderLayer_tweenValue(a1, v13, v14, 14, LODWORD(a2), a10, a11); /*0x622bda*/
  }
  if ( a9 != -909190.0 ) /*0x622bef*/
  {
    if ( a2 > 0.0 && *(_BYTE *)(a1 + 1128) ) /*0x622bf6*/
      sub_61DA90(a1 + 408, 15, v14); /*0x622c0b*/
    ShaderLayer_tweenValue(a1, v13, v14, 15, LODWORD(a2), a10, a11); /*0x622c3b*/
  }
  *(_DWORD *)(a1 + 844) = a6; /*0x622c72*/
  *(_DWORD *)(a1 + 848) = a7; /*0x622c7f*/
  *(_BYTE *)(a1 + 852) = a12; /*0x622c8d*/
  return a12; /*0x622c93*/
}

// [10/14] Address: 0x623ad0
// Method: ShaderLayer::triggerInvertColor
__int64 __fastcall ShaderLayer_triggerInvertColor(
        __int64 a1,
        int a2,
        __int64 a3,
        float a4,
        float a5,
        float a6,
        char a7,
        char a8,
        unsigned __int8 a9,
        int a10,
        int a11)
{
  float v11; // xmm1_4
  float v12; // xmm2_4
  __int64 result; // rax
  __int64 v14; // rbx
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = (__int64)&retaddr; /*0x623ad0*/
  v14 = a1; /*0x623ae7*/
  if ( a7 ) /*0x623b2e*/
  {
    result = a9; /*0x623b40*/
    *(_BYTE *)(a1 + 1064) = a9; /*0x623b48*/
    if ( a8 ) /*0x623b4e*/
    {
      if ( a4 != -909190.0 ) /*0x623b5a*/
      {
        if ( v11 > 0.0 ) /*0x623b5f*/
        {
          if ( *(_BYTE *)(a1 + 1128) ) /*0x623b61*/
            sub_61DA90(a1 + 408, 35, a3); /*0x623b76*/
          LODWORD(a1) = v14; /*0x623b83*/
        }
        result = ShaderLayer_tweenValue(a1, a2, a3, 35, LODWORD(v11), a10, a11); /*0x623ba6*/
      }
      if ( a5 != -909190.0 ) /*0x623bbb*/
      {
        if ( v11 > 0.0 && *(_BYTE *)(v14 + 1128) ) /*0x623bc2*/
          sub_61DA90(v14 + 408, 36, a3); /*0x623bd7*/
        result = ShaderLayer_tweenValue(v14, a2, a3, 36, LODWORD(v11), a10, a11); /*0x623c07*/
      }
      if ( a6 != -909190.0 ) /*0x623c1c*/
      {
        if ( v11 > 0.0 && *(_BYTE *)(v14 + 1128) ) /*0x623c27*/
          sub_61DA90(v14 + 408, 37, a3); /*0x623c3c*/
        result = ShaderLayer_tweenValue(v14, a2, a3, 37, LODWORD(v11), a10, a11); /*0x623c67*/
      }
    }
    else
    {
      *(float *)(a1 + 1056) = a5; /*0x623ca8*/
      *(float *)(a1 + 1060) = a6; /*0x623cb0*/
      *(float *)(a1 + 1052) = a4; /*0x623cb8*/
    }
  }
  if ( v12 != -909190.0 ) /*0x623cdb*/
  {
    if ( v11 > 0.0 ) /*0x623ce0*/
    {
      if ( *(_BYTE *)(v14 + 1128) ) /*0x623ce2*/
        sub_61DA90(v14 + 408, 34, a3); /*0x623cf7*/
    }
    return ShaderLayer_tweenValue(v14, a2, a3, 34, LODWORD(v11), a10, a11); /*0x623d27*/
  }
  return result; /*0x623d2c*/
}

// [11/14] Address: 0x624d70
// Method: ShaderLayer::visit
void __fastcall ShaderLayer_visit(__int64 a1)
{
  cocos2d::CCDirector *v2; // rax
  float ContentScaleFactor; // xmm0_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  __int64 v6; // rcx
  cocos2d::CCDirector *v7; // rax
  __int64 v8; // rax
  cocos2d::CCGridBase *v9; // rcx
  cocos2d::CCGLProgram *v10; // rax
  cocos2d::CCGLProgram *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  cocos2d::CCGridBase *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  cocos2d::CCDirector *v22; // rax
  float v23[4]; // [rsp+30h] [rbp-48h] BYREF
  char v24; // [rsp+80h] [rbp+8h] BYREF
  char v25; // [rsp+88h] [rbp+10h] BYREF
  char v26; // [rsp+90h] [rbp+18h] BYREF
  char v27; // [rsp+98h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 286) ) /*0x624d76*/
  {
    v2 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(a1); /*0x624d9a*/
    ContentScaleFactor = cocos2d::CCDirector::getContentScaleFactor(v2); /*0x624da3*/
    v4 = *(float *)(a1 + 1200); /*0x624da9*/
    v5 = ContentScaleFactor; /*0x624db1*/
    v7 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v6); /*0x624db4*/
    cocos2d::CCDirector::setContentScaleFactor(v7, v4); /*0x624dc0*/
    sub_622670(a1, &v24); /*0x624dd1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, *(float *)(a1 + 1232) * 0.5, *(float *)(a1 + 1236) * 0.5); /*0x624dfe*/
    cocos2d::CCPoint::operator+(&v24, &v25, v8); /*0x624e17*/
    kmGLPushMatrix(); /*0x624e1d*/
    v9 = *(cocos2d::CCGridBase **)(a1 + 200); /*0x624e23*/
    if ( v9 && *((_BYTE *)v9 + 56) ) /*0x624e2f*/
      cocos2d::CCGridBase::beforeDraw(v9); /*0x624e35*/
    cocos2d::CCNode::transform((cocos2d::CCNode *)a1); /*0x624e3e*/
    v10 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 648LL))(*(_QWORD *)(a1 + 1152)); /*0x624e4e*/
    cocos2d::CCGLProgram::use(v10); /*0x624e57*/
    v11 = (cocos2d::CCGLProgram *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 648LL))(*(_QWORD *)(a1 + 1152)); /*0x624e67*/
    cocos2d::CCGLProgram::setUniformsForBuiltins(v11); /*0x624e70*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, (const struct cocos2d::CCPoint *)&v25); /*0x624e86*/
    sub_61F150(a1, v12); /*0x624e92*/
    sub_624210(a1); /*0x624e9a*/
    cocos2d::CCRenderTexture::beginWithClear(*(cocos2d::CCRenderTexture **)(a1 + 1144), 0.0, 0.0, 0.0, 0.0); /*0x624eb8*/
    v13 = 0; /*0x624ec5*/
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 56LL); /*0x624ec7*/
    if ( *(_DWORD *)v14 ) /*0x624ecb*/
    {
      do /*0x624eee*/
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 8 * v13); /*0x624ed4*/
        if ( v15 != *(_QWORD *)(a1 + 1152) ) /*0x624edf*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 744LL))(v15); /*0x624ee4*/
        v13 = (unsigned int)(v13 + 1); /*0x624eea*/
      }
      while ( (unsigned int)v13 < *(_DWORD *)v14 ); /*0x624eee*/
    }
    cocos2d::CCRenderTexture::end(*(cocos2d::CCRenderTexture **)(a1 + 1144)); /*0x624ef7*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v23, (const struct cocos2d::CCRect *)(*(_QWORD *)(a1 + 1152) + 424LL)); /*0x624f10*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, v23[0] / *(float *)(a1 + 560), v23[1] / *(float *)(a1 + 564)); /*0x624f3a*/
    cocos2d::CCPoint::operator+(&v24, &v26, v16); /*0x624f53*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 1152) + 184LL))(*(_QWORD *)(a1 + 1152), &v26); /*0x624f6b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 744LL))(*(_QWORD *)(a1 + 1152)); /*0x624f7b*/
    v17 = *(cocos2d::CCGridBase **)(a1 + 200); /*0x624f81*/
    *(_DWORD *)(a1 + 48) = 0; /*0x624f8d*/
    if ( v17 && *((_BYTE *)v17 + 56) ) /*0x624f99*/
      cocos2d::CCGridBase::afterDraw(v17, (struct cocos2d::CCNode *)a1); /*0x624fa2*/
    kmGLPopMatrix(); /*0x624fa8*/
    v19 = *(_QWORD *)(a1 + 1176); /*0x624fae*/
    if ( v19 ) /*0x624fb8*/
    {
      v20 = 4344; /*0x624fcd*/
      if ( *(int *)(a1 + 1116) <= 1 ) /*0x624fd2*/
        v20 = 4336; /*0x624fd2*/
      v21 = *(_QWORD *)(v20 + v19); /*0x624fd5*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 184LL))(v21, a1 + 1184); /*0x624fdf*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 160LL))(v21); /*0x624ff3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 352LL))(v21); /*0x625007*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1); /*0x625016*/
    }
    v22 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v18); /*0x62501c*/
    cocos2d::CCDirector::setContentScaleFactor(v22, v5); /*0x625028*/
  }
}

// [12/14] Address: 0x625760
// Method: ShaderLayer::tweenValue
__int64 __fastcall ShaderLayer_tweenValue(__int64 a1, float a2, float a3, unsigned int a4, float a5, int a6, int a7)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v12[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+3Ch] [rbp-4Ch]
  int v14; // [rsp+44h] [rbp-44h]
  int v15; // [rsp+48h] [rbp-40h]
  __int16 v16; // [rsp+4Ch] [rbp-3Ch]
  __int64 v17; // [rsp+50h] [rbp-38h]
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a1 + 408; /*0x62576f*/
  v19 = a4; /*0x625781*/
  v18 = a4; /*0x625788*/
  sub_351620(a1 + 408, &v18); /*0x62578f*/
  if ( a5 <= 0.0 ) /*0x6257a6*/
    return GJShaderState_updateTweenAction(v7, v8, v19); /*0x62585c*/
  v15 = a7; /*0x6257ce*/
  *(float *)v12 = a2; /*0x6257d4*/
  *(float *)&v12[1] = a3; /*0x6257da*/
  *(float *)&v12[2] = a5; /*0x6257e0*/
  v13 = 0; /*0x6257e6*/
  v16 = 0; /*0x6257ef*/
  v14 = a6; /*0x6257f6*/
  v17 = -1; /*0x6257fa*/
  sub_34F950(v7, v11, &v19, v12); /*0x625803*/
  v9 = *(_QWORD *)sub_18A2F0(v7 + 64, v11, &v19); /*0x62581e*/
  result = *(_QWORD *)(v7 + 128); /*0x625821*/
  *(_QWORD *)(v9 + 24) = result; /*0x625828*/
  return result; /*0x62582c*/
}

// [13/14] Address: 0x625870
// Method: ShaderLayer::updateZLayer
void __fastcall ShaderLayer_updateZLayer(__int64 a1, int a2, int a3, char a4)
{
  int v4; // r11d
  int v5; // r10d
  int v6; // r8d
  int v7; // edx

  v4 = 1; /*0x625872*/
  v5 = 15; /*0x625878*/
  if ( a2 > 0 ) /*0x62587e*/
    v4 = a2; /*0x62587e*/
  if ( a3 > 0 ) /*0x625885*/
    v5 = a3; /*0x625885*/
  v6 = *(_DWORD *)(a1 + 1116); /*0x625889*/
  if ( v6 != v4 ) /*0x625893*/
  {
    *(_DWORD *)(a1 + 1116) = v4; /*0x625895*/
    v6 = v4; /*0x62589c*/
    *(_BYTE *)(a1 + 1124) = 1; /*0x62589f*/
  }
  v7 = *(_DWORD *)(a1 + 1120); /*0x6258a6*/
  if ( v7 != v5 ) /*0x6258af*/
  {
    *(_DWORD *)(a1 + 1120) = v5; /*0x6258b1*/
    v7 = v5; /*0x6258b8*/
    *(_BYTE *)(a1 + 1124) = 1; /*0x6258bb*/
  }
  if ( *(_BYTE *)(a1 + 1125) != a4 ) /*0x6258c9*/
  {
    *(_BYTE *)(a1 + 1125) = a4; /*0x6258cb*/
    if ( v6 == 8 || v7 == 8 ) /*0x6258db*/
      *(_BYTE *)(a1 + 1124) = 1; /*0x6258dd*/
  }
}

// [14/14] Address: 0x6258f0
// Method: ShaderLayer::resetAllShaders
__int64 __fastcall ShaderLayer_resetAllShaders(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  int v6; // edx

  cocos2d::CCNode::stopAllActions((cocos2d::CCNode *)a1); /*0x625902*/
  sub_3586D0(a1 + 408, v2, v3, v4); /*0x625912*/
  sub_654A0(a1 + 472); /*0x62591b*/
  *(_DWORD *)(a1 + 804) = 1065353216; /*0x625922*/
  *(_DWORD *)(a1 + 584) = 0; /*0x625933*/
  *(_QWORD *)(a1 + 664) = 0; /*0x625940*/
  *(_DWORD *)(a1 + 744) = 0; /*0x625947*/
  *(_QWORD *)(a1 + 772) = 0; /*0x62594d*/
  *(_DWORD *)(a1 + 572) = 0; /*0x625954*/
  *(_BYTE *)(a1 + 816) = 0; /*0x62595a*/
  *(_QWORD *)(a1 + 792) = 0; /*0x625961*/
  *(_DWORD *)(a1 + 800) = 0; /*0x625968*/
  *(_QWORD *)(a1 + 808) = 0; /*0x62596e*/
  *(_QWORD *)(a1 + 820) = 0; /*0x625975*/
  *(_BYTE *)(a1 + 828) = 0; /*0x62597c*/
  *(_QWORD *)(a1 + 840) = 0; /*0x625983*/
  *(_DWORD *)(a1 + 848) = 0; /*0x62598a*/
  *(_DWORD *)(a1 + 876) = 0; /*0x625990*/
  *(_QWORD *)(a1 + 908) = 0; /*0x625996*/
  *(_QWORD *)(a1 + 932) = 0; /*0x62599d*/
  *(_QWORD *)(a1 + 916) = 0; /*0x6259a4*/
  *(_DWORD *)(a1 + 560) = 1065353216; /*0x6259ab*/
  *(_DWORD *)(a1 + 564) = 1065353216; /*0x6259b5*/
  *(_QWORD *)(a1 + 832) = 1065353216; /*0x6259bf*/
  cocos2d::CCPoint::operator=(a1 + 892, &unk_905CE8); /*0x6259ca*/
  *(_DWORD *)(a1 + 944) = 0; /*0x6259d7*/
  *(_QWORD *)(a1 + 976) = 0; /*0x6259e4*/
  *(_QWORD *)(a1 + 988) = 0; /*0x6259eb*/
  *(_WORD *)(a1 + 984) = 0; /*0x6259f2*/
  cocos2d::CCPoint::operator=(a1 + 1004, &unk_905CE8); /*0x6259f9*/
  *(_DWORD *)(a1 + 1028) = 0; /*0x6259ff*/
  *(_QWORD *)(a1 + 544) = 0xBFF0000000000000uLL; /*0x625a0f*/
  *(_QWORD *)(a1 + 1044) = 0; /*0x625a16*/
  *(_DWORD *)(a1 + 1068) = 0; /*0x625a1d*/
  *(_DWORD *)(a1 + 1052) = 1065353216; /*0x625a23*/
  *(_DWORD *)(a1 + 1056) = 1065353216; /*0x625a2d*/
  *(_DWORD *)(a1 + 1060) = 1065353216; /*0x625a37*/
  *(_DWORD *)(a1 + 1072) = 1065353216; /*0x625a41*/
  *(_DWORD *)(a1 + 1076) = 1065353216; /*0x625a4b*/
  *(_QWORD *)(a1 + 1080) = 1065353216; /*0x625a55*/
  *(_QWORD *)(a1 + 1088) = 0; /*0x625a60*/
  *(_BYTE *)(a1 + 1064) = 0; /*0x625a67*/
  *(_QWORD *)(a1 + 1096) = 0; /*0x625a6e*/
  *(_QWORD *)(a1 + 1104) = 0; /*0x625a75*/
  *(_WORD *)(a1 + 1124) = 0; /*0x625a7c*/
  *(_QWORD *)(a1 + 1116) = 0; /*0x625a83*/
  result = *(_QWORD *)(a1 + 552); /*0x625a8a*/
  v6 = *(_DWORD *)(a1 + 1116); /*0x625a91*/
  *(_QWORD *)(a1 + 536) = result; /*0x625a97*/
  if ( v6 != 1 ) /*0x625aa1*/
  {
    *(_DWORD *)(a1 + 1116) = 1; /*0x625aa8*/
    *(_BYTE *)(a1 + 1124) = 1; /*0x625aae*/
  }
  if ( *(_DWORD *)(a1 + 1120) != 15 ) /*0x625abd*/
  {
    *(_BYTE *)(a1 + 1124) = 1; /*0x625ac4*/
    *(_DWORD *)(a1 + 1120) = 15; /*0x625acb*/
  }
  if ( *(_BYTE *)(a1 + 1125) ) /*0x625ad1*/
    *(_BYTE *)(a1 + 1125) = 0; /*0x625ada*/
  return result; /*0x625af2*/
}
