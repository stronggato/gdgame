
// Address: 0x47130
// Method: cocos2d::CCLightning
// Hidden C++ exception states: #wind=1
__int64 __fastcall cocos2d_CCLightning(__int64 a1)
{
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)a1);
  cocos2d::CCRGBAProtocol::CCRGBAProtocol((cocos2d::CCRGBAProtocol *)(a1 + 320));
  *(_QWORD *)a1 = &cocos2d::CCLightning::`vftable';
  *(_QWORD *)(a1 + 320) = &cocos2d::CCLightning::`vftable';
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 328), (const struct cocos2d::CCPoint *)&unk_903A20);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 336), (const struct cocos2d::CCPoint *)&unk_903A20);
  *(_BYTE *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 368) = 0x40000000;
  *(_BYTE *)(a1 + 373) = 0;
  *(_DWORD *)(a1 + 376) = 1056964608;
  *(_DWORD *)(a1 + 380) = 1065353216;
  *(_QWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 392) = 0;
  *(_WORD *)(a1 + 396) = 0;
  *(_WORD *)(a1 + 404) = 0;
  *(_BYTE *)(a1 + 406) = 0;
  return a1;
}

// Address: 0x47430
// Method: cocos2d::draw
void __fastcall cocos2d_draw(__int64 a1)
{
  int v1; // eax
  unsigned int *v2; // r12
  unsigned __int8 v3; // r8
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  __int64 v7; // r14
  __int64 v8; // rbp
  int v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rsi
  __int64 v16; // rbp
  int v17; // r14d
  int v18; // edi
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  char v22; // [rsp+80h] [rbp+8h] BYREF
  char v23; // [rsp+88h] [rbp+10h] BYREF
  char v24; // [rsp+90h] [rbp+18h] BYREF
  char v25; // [rsp+98h] [rbp+20h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 397);
  v2 = (unsigned int *)(a1 + 392);
  v3 = *(_BYTE *)(a1 + 403);
  v5 = *(_BYTE *)(a1 + 402);
  *(_DWORD *)(a1 + 392) = 0;
  cocos2d::ccDrawColor4B(
    (cocos2d *)*(unsigned __int8 *)(a1 + 401),
    v5,
    v3,
    (int)(float)((float)v1 * *(float *)(a1 + 380)));
  glLineWidth(*(GLfloat *)(a1 + 368));
  cocos2d::ccGLBlendFunc((cocos2d *)((char *)&loc_300 + 2), 1u, v6);
  v7 = *(_QWORD *)(a1 + 384);
  v8 = *(_QWORD *)(a1 + 360);
  v9 = *(_DWORD *)(a1 + 352);
  v10 = *(_DWORD *)(a1 + 348);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, (const struct cocos2d::CCPoint *)(a1 + 328));
  v12 = v11;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, 0.0, 0.0);
  sub_46EE0((unsigned int)&v22, v13, v12, v10, v9, v8, v7, (__int64)v2);
  if ( *(_BYTE *)(a1 + 344) )
  {
    v15 = *(_QWORD *)(a1 + 384);
    v16 = *(_QWORD *)(a1 + 360);
    v17 = *(_DWORD *)(a1 + 352);
    v18 = *(_DWORD *)(a1 + 348) / 2;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, (const struct cocos2d::CCPoint *)(a1 + 336));
    v20 = v19;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, (const struct cocos2d::CCPoint *)&v22);
    sub_46EE0((unsigned int)&v25, v21, v20, v18, v17, v16, v15, (__int64)v2);
  }
  cocos2d::ccDrawLines(*(cocos2d **)(a1 + 384), (const struct cocos2d::CCPoint *)*v2, v14);
}

// Address: 0x47690
// Method: cocos2d::getColor
__int64 __fastcall cocos2d_getColor(__int64 a1)
{
  return a1 + 81;
}

// Address: 0x47700
// Method: cocos2d::getDisplayedColor
__int64 __fastcall cocos2d_getDisplayedColor(__int64 a1)
{
  return a1 + 78;
}

// Address: 0x47670
// Method: cocos2d::getDisplayedOpacity
__int64 __fastcall cocos2d_getDisplayedOpacity(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
}

// Address: 0x47660
// Method: cocos2d::getOpacity
__int64 __fastcall cocos2d_getOpacity(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 77);
}

// Address: 0x47310
// Method: cocos2d::initWithStrikePoint
// Hidden C++ exception states: #wind=1
char __fastcall cocos2d_initWithStrikePoint(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  cocos2d::CCPoint *v6; // rbp
  cocos2d::CCPoint *v7; // rbx
  __int64 v8; // rdi

  cocos2d::CCPoint::operator=(a1 + 328, a2);
  cocos2d::CCPoint::operator=(a1 + 336, a3);
  *(_WORD *)(a1 + 401) = -1;
  *(_BYTE *)(a1 + 403) = -1;
  *(_BYTE *)(a1 + 397) = -1;
  *(_QWORD *)(a1 + 360) = rand();
  *(_BYTE *)(a1 + 344) = 0;
  *(float *)(a1 + 376) = a4;
  *(_DWORD *)(a1 + 348) = 160;
  *(_DWORD *)(a1 + 352) = 8;
  *(_DWORD *)(a1 + 392) = 0;
  v6 = (cocos2d::CCPoint *)operator new(0x640u);
  v7 = v6;
  v8 = 200;
  do
  {
    cocos2d::CCPoint::CCPoint(v7);
    v7 = (cocos2d::CCPoint *)((char *)v7 + 8);
    --v8;
  }
  while ( v8 );
  *(_QWORD *)(a1 + 384) = v6;
  memset(v6, 0, 0x640u);
  *(_BYTE *)(a1 + 372) = 0;
  cocos2d_strike(a1);
  return 1;
}

// Address: 0x47720
// Method: cocos2d::isCascadeColorEnabled
__int64 __fastcall cocos2d_isCascadeColorEnabled(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 84);
}

// Address: 0x476e0
// Method: cocos2d::isCascadeOpacityEnabled
__int64 __fastcall cocos2d_isCascadeOpacityEnabled(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 85);
}

// Address: 0x476b0
// Method: cocos2d::isOpacityModifyRGB
__int64 __fastcall cocos2d_isOpacityModifyRGB(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 86);
}

// Address: 0x47270
// Method: cocos2d::lightningWithStrikePoint
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall cocos2d_lightningWithStrikePoint(
        const struct cocos2d::CCPoint *a1,
        const struct cocos2d::CCPoint *a2,
        float a3)
{
  cocos2d::CCObject *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-28h] BYREF
  void *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = operator new(0x198u);
  v5 = (cocos2d::CCObject *)cocos2d_CCLightning((__int64)v11);
  if ( v5 )
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, a2);
    v7 = v6;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v10, a1);
    if ( cocos2d_initWithStrikePoint((__int64)v5, v8, v7, a3) )
    {
      cocos2d::CCObject::autorelease(v5);
      return v5;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1);
  }
  return 0;
}

// Address: 0x47730
// Method: cocos2d::setCascadeColorEnabled
void __fastcall cocos2d_setCascadeColorEnabled(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 84) = a2;
}

// Address: 0x476f0
// Method: cocos2d::setCascadeOpacityEnabled
void __fastcall cocos2d_setCascadeOpacityEnabled(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 85) = a2;
}

// Address: 0x476a0
// Method: cocos2d::setColor
__int64 __fastcall cocos2d_setColor(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 81) = *(_WORD *)a2;
  result = *(unsigned __int8 *)(a2 + 2);
  *(_BYTE *)(a1 + 83) = result;
  return result;
}

// Address: 0x47680
// Method: cocos2d::setOpacity
void __fastcall cocos2d_setOpacity(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 77) = a2;
}

// Address: 0x476c0
// Method: cocos2d::setOpacityModifyRGB
void __fastcall cocos2d_setOpacityModifyRGB(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 86) = a2;
}

// Address: 0x475c0
// Method: cocos2d::strike
struct cocos2d::CCAction *__fastcall cocos2d_strike(float *a1)
{
  float v2; // xmm0_4
  __int64 v3; // rdi
  struct cocos2d::CCFadeOut *v4; // rbx
  struct cocos2d::CCFiniteTimeAction *v5; // rax
  struct cocos2d::CCAction *v6; // rax

  v2 = a1[94];
  v3 = cocos2d::CCCallFunc::create(a1, sub_47640);
  v4 = cocos2d::CCFadeOut::create(v2);
  v5 = (struct cocos2d::CCFiniteTimeAction *)cocos2d::CCShow::create();
  v6 = cocos2d::CCSequence::create(v5, v4, v3, 0);
  return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v6);
}

// Address: 0xacf40
// Method: cocos2d::unpackPVRv3Data
__int64 __fastcall ReviewChoiceSheet_onClose(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1016);
  if ( v1 )
  {
    *(_QWORD *)(v1 + 608) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1016) + 1032LL))(*(_QWORD *)(a1 + 1016), 0);
  }
  return SetupTriggerPopup_onClose(a1);
}

// Address: 0x47710
// Method: cocos2d::updateDisplayedColor
__int64 __fastcall cocos2d_updateDisplayedColor(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 78) = *(_WORD *)a2;
  result = *(unsigned __int8 *)(a2 + 2);
  *(_BYTE *)(a1 + 80) = result;
  return result;
}

// Address: 0x476d0
// Method: cocos2d::updateDisplayedOpacity
void __fastcall cocos2d_updateDisplayedOpacity(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 76) = a2;
}
