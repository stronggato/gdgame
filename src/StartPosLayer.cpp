#include <Geode/binding/StartPosLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x4538c0
// Method: StartPosLayer::~StartPosLayer
cocos2d::CCNode *__fastcall StartPosLayer__dtor_StartPosLayer(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx

  *(_QWORD *)Block = &StartPosLayer::`vftable'; /*0x4538d6*/
  *((_QWORD *)Block + 40) = &StartPosLayer::`vftable'; /*0x4538e0*/
  *((_QWORD *)Block + 41) = &StartPosLayer::`vftable'; /*0x4538ee*/
  *((_QWORD *)Block + 42) = &StartPosLayer::`vftable'; /*0x4538fc*/
  *((_QWORD *)Block + 43) = &StartPosLayer::`vftable'; /*0x45390a*/
  *((_QWORD *)Block + 44) = &StartPosLayer::`vftable'; /*0x453918*/
  *((_QWORD *)Block + 51) = &StartPosLayer::`vftable'; /*0x453926*/
  *((_QWORD *)Block + 54) = &StartPosLayer::`vftable'; /*0x453934*/
  *((_QWORD *)Block + 68) = &StartPosLayer::`vftable'; /*0x453942*/
  *((_QWORD *)Block + 83) = &StartPosLayer::`vftable'; /*0x453950*/
  *((_QWORD *)Block + 84) = &StartPosLayer::`vftable'; /*0x45395e*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 125); /*0x453965*/
  if ( v4 ) /*0x45396f*/
    cocos2d::CCObject::release(v4); /*0x453971*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 127); /*0x453977*/
  if ( v5 ) /*0x453981*/
    cocos2d::CCObject::release(v5); /*0x453983*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 128); /*0x453989*/
  if ( v6 ) /*0x453993*/
    cocos2d::CCObject::release(v6); /*0x453995*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x45399e*/
  if ( (a2 & 1) != 0 ) /*0x4539a8*/
    j_j_free(Block); /*0x4539b2*/
  return Block; /*0x4539ba*/
}

// [2/5] Address: 0x45aaf0
// Method: StartPosLayer::onClose
// Hidden C++ exception states: #wind=4
__int64 __fastcall StartPosLayer_onClose(__int64 a1, __int64 a2)
{
  struct cocos2d::CCObject *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  void *v10; // rcx
  void **v11; // r15
  char *v12; // r14
  unsigned __int64 v13; // r13
  size_t v14; // rsi
  __int128 v15; // xmm0
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void **v20; // rdi
  size_t v21; // rbx
  unsigned __int64 v22; // r8
  void **v23; // rcx
  void **v24; // rdx
  void *v25; // rcx
  char *v26; // rax
  void *v28[2]; // [rsp+38h] [rbp-61h] BYREF
  size_t v29; // [rsp+48h] [rbp-51h]
  __int64 v30; // [rsp+50h] [rbp-49h]
  __int64 v31; // [rsp+58h] [rbp-41h]
  __int128 v32; // [rsp+60h] [rbp-39h] BYREF
  __int128 v33; // [rsp+70h] [rbp-29h]
  void *Src[2]; // [rsp+80h] [rbp-19h] BYREF
  __int128 v35; // [rsp+90h] [rbp-9h]
  void *Block[2]; // [rsp+A0h] [rbp+7h] BYREF
  size_t Size[2]; // [rsp+B0h] [rbp+17h]

  v31 = a2; /*0x45ab22*/
  v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 760), -16); /*0x45ab39*/
  if ( v3 ) /*0x45ab42*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v3 + 75) + 600LL) + 8LL))(*((_QWORD *)v3 + 75) + 600LL); /*0x45ab59*/
    *(_OWORD *)Src = 0; /*0x45ab5f*/
    v35 = 0u; /*0x45ab63*/
    v5 = -1; /*0x45ab6b*/
    do /*0x45ab75*/
      ++v5; /*0x45ab72*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x45ab75*/
    sub_3C230(Src); /*0x45ab82*/
    v9 = v35; /*0x45ab88*/
    if ( (unsigned __int64)v35 > 0x14 ) /*0x45ab90*/
    {
      v32 = 0; /*0x45ab99*/
      v33 = 0; /*0x45aba0*/
      sub_3C230(&v32); /*0x45abc1*/
      v6 = *((_QWORD *)&v35 + 1); /*0x45abc6*/
      if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x45abce*/
      {
        v10 = Src[0]; /*0x45abd3*/
        if ( (unsigned __int64)(*((_QWORD *)&v35 + 1) + 1LL) >= 0x1000 ) /*0x45abe1*/
        {
          v10 = (void *)*((_QWORD *)Src[0] - 1); /*0x45abe7*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v10 - 8) > 0x1F ) /*0x45abf6*/
LABEL_39:
            invoke_watson(0, 0, 0, 0, 0); /*0x45ae00*/
        }
        j_j_free(v10); /*0x45abfc*/
      }
      *(_OWORD *)Src = v32; /*0x45ac05*/
      v35 = v33; /*0x45ac0d*/
      v9 = v33; /*0x45ac11*/
    }
    v32 = 0; /*0x45ac19*/
    v33 = 0u; /*0x45ac1d*/
    v11 = Src; /*0x45ac25*/
    v12 = (char *)Src[0]; /*0x45ac29*/
    v13 = *((_QWORD *)&v35 + 1); /*0x45ac2d*/
    if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x45ac35*/
      v11 = (void **)Src[0]; /*0x45ac35*/
    v14 = 0x7FFFFFFFFFFFFFFFLL; /*0x45ac39*/
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL ) /*0x45ac46*/
      sub_8D90(v7, v6, v8); /*0x45aeb2*/
    if ( v9 > 0xF ) /*0x45ac55*/
    {
      v16 = v9 | 0xF; /*0x45ac70*/
      if ( (v9 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x45ac77*/
      {
        if ( v16 < 0x16 ) /*0x45ac81*/
          v16 = 22; /*0x45ac81*/
      }
      else
      {
        v16 = 0x7FFFFFFFFFFFFFFFLL; /*0x45ac79*/
      }
      *(_QWORD *)&v32 = sub_3C460(v16 + 1); /*0x45ac8e*/
      *(_QWORD *)&v33 = v9; /*0x45ac92*/
      *((_QWORD *)&v33 + 1) = v16; /*0x45ac96*/
      memcpy((void *)v32, v11, v9 + 1); /*0x45aca4*/
      v9 = v33; /*0x45aca9*/
      v15 = v32; /*0x45acad*/
    }
    else
    {
      *(_QWORD *)&v33 = v9; /*0x45ac57*/
      *((_QWORD *)&v33 + 1) = 15; /*0x45ac5b*/
      v15 = *(_OWORD *)v11; /*0x45ac63*/
      v32 = *(_OWORD *)v11; /*0x45ac67*/
    }
    if ( v9 ) /*0x45acbe*/
    {
      cocos2d::ZipUtils::base64URLEncode(Block, &v32); /*0x45ace5*/
    }
    else
    {
      *(_OWORD *)Block = v15; /*0x45acc0*/
      *(_OWORD *)Size = v33; /*0x45acc8*/
      *(_QWORD *)&v33 = 0; /*0x45accc*/
      *((_QWORD *)&v33 + 1) = 15; /*0x45acd0*/
      LOBYTE(v32) = 0; /*0x45acd8*/
    }
    sub_3C310(&v32); /*0x45acf0*/
    *(_OWORD *)v28 = 0; /*0x45acf9*/
    v29 = 0; /*0x45acfd*/
    v30 = 0; /*0x45ad01*/
    v20 = Block; /*0x45ad05*/
    if ( Size[1] > 0xF ) /*0x45ad0e*/
      v20 = (void **)Block[0]; /*0x45ad0e*/
    v21 = Size[0]; /*0x45ad13*/
    if ( Size[0] > 0x7FFFFFFFFFFFFFFFLL ) /*0x45ad1a*/
      sub_8D90(v18, v17, v19); /*0x45aeac*/
    if ( Size[0] > 0xF ) /*0x45ad24*/
    {
      if ( (Size[0] | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x45ad47*/
      {
        v14 = Size[0] | 0xF; /*0x45ad49*/
        if ( (Size[0] | 0xF) < 0x16 ) /*0x45ad55*/
          v14 = 22; /*0x45ad55*/
      }
      v28[0] = (void *)sub_3C460(v14 + 1); /*0x45ad62*/
      v29 = v21; /*0x45ad66*/
      v30 = v14; /*0x45ad6a*/
      memcpy(v28[0], v20, v21 + 1); /*0x45ad78*/
      v22 = v14; /*0x45ad7d*/
    }
    else
    {
      v29 = Size[0]; /*0x45ad26*/
      v22 = 15; /*0x45ad2a*/
      v30 = 15; /*0x45ad30*/
      *(_OWORD *)v28 = *(_OWORD *)v20; /*0x45ad37*/
    }
    v23 = (void **)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) + 488LL); /*0x45ad9c*/
    if ( v23 != v28 ) /*0x45adaa*/
    {
      v24 = v28; /*0x45adac*/
      if ( v22 > 0xF ) /*0x45adb4*/
        v24 = (void **)v28[0]; /*0x45adb4*/
      sub_3F5A0(v23, v24, v21); /*0x45adbc*/
    }
    sub_3C310(v28); /*0x45adc6*/
    if ( Size[1] > 0xF ) /*0x45add4*/
    {
      v25 = Block[0]; /*0x45add9*/
      if ( Size[1] + 1 >= 0x1000 ) /*0x45ade7*/
      {
        v25 = (void *)*((_QWORD *)Block[0] - 1); /*0x45aded*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F ) /*0x45adfc*/
          goto LABEL_39; /*0x45adfc*/
      }
      j_j_free(v25); /*0x45ae16*/
    }
    Size[0] = 0; /*0x45ae1d*/
    Size[1] = 15; /*0x45ae21*/
    LOBYTE(Block[0]) = 0; /*0x45ae29*/
    if ( v13 > 0xF ) /*0x45ae30*/
    {
      v26 = v12; /*0x45ae36*/
      if ( v13 + 1 >= 0x1000 ) /*0x45ae40*/
      {
        v12 = (char *)*((_QWORD *)v12 - 1); /*0x45ae46*/
        if ( (unsigned __int64)(v26 - v12 - 8) > 0x1F ) /*0x45ae55*/
          invoke_watson(0, 0, 0, 0, 0); /*0x45ae64*/
      }
      j_j_free(v12); /*0x45ae6e*/
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x45ae7f*/
}

// [3/5] Address: 0x45aec0
// Method: StartPosLayer::updateInputNode
// Hidden C++ exception states: #wind=3
void __fastcall StartPosLayer_updateInputNode(__int64 a1, int a2, float a3)
{
  struct cocos2d::CCObject *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  void *v13; // rcx
  __int128 v14; // [rsp+38h] [rbp-51h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h]
  __int64 v16; // [rsp+50h] [rbp-39h]
  _BYTE v17[32]; // [rsp+58h] [rbp-31h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-11h] BYREF
  __int128 v19; // [rsp+88h] [rbp-1h]
  _BYTE v20[32]; // [rsp+98h] [rbp+Fh] BYREF

  if ( a2 == -16 ) /*0x45aeef*/
  {
    v4 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 760), -16); /*0x45af09*/
    if ( v4 ) /*0x45af0f*/
    {
      sub_3E4F0(v20, *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) + 488LL); /*0x45af2e*/
      v5 = sub_3E4F0(v17, v20); /*0x45af3c*/
      v6 = v5; /*0x45af41*/
      if ( *(_QWORD *)(v5 + 16) ) /*0x45af48*/
      {
        cocos2d::ZipUtils::base64URLDecode(Src, v5); /*0x45af84*/
      }
      else
      {
        *(_OWORD *)Src = 0; /*0x45af51*/
        v19 = 0u; /*0x45af55*/
        *(_OWORD *)Src = *(_OWORD *)v5; /*0x45af60*/
        v19 = *(_OWORD *)(v5 + 16); /*0x45af68*/
        *(_QWORD *)(v5 + 16) = 0; /*0x45af6c*/
        *(_QWORD *)(v5 + 24) = 15; /*0x45af70*/
        *(_BYTE *)v5 = 0; /*0x45af78*/
      }
      sub_3C310(v6); /*0x45af8e*/
      v14 = 0; /*0x45af97*/
      v15 = 0; /*0x45af9b*/
      v16 = 0; /*0x45af9f*/
      v10 = Src; /*0x45afa3*/
      if ( *((_QWORD *)&v19 + 1) > 0xFu ) /*0x45afac*/
        v10 = (void **)Src[0]; /*0x45afac*/
      v11 = v19; /*0x45afb1*/
      v12 = 0x7FFFFFFFFFFFFFFFLL; /*0x45afb5*/
      if ( (unsigned __int64)v19 > 0x7FFFFFFFFFFFFFFFLL ) /*0x45afc2*/
        sub_8D90(v8, v7, v9); /*0x45b0bf*/
      if ( (unsigned __int64)v19 > 0xF ) /*0x45afcc*/
      {
        if ( ((unsigned __int64)v19 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x45afed*/
        {
          v12 = v19 | 0xF; /*0x45afef*/
          if ( ((unsigned __int64)v19 | 0xF) < 0x16 ) /*0x45affa*/
            v12 = 22; /*0x45affa*/
        }
        *(_QWORD *)&v14 = sub_3C460(v12 + 1); /*0x45b007*/
        v15 = v11; /*0x45b00b*/
        v16 = v12; /*0x45b00f*/
        memcpy((void *)v14, v10, v11 + 1); /*0x45b01d*/
      }
      else
      {
        v15 = v19; /*0x45afce*/
        v16 = 15; /*0x45afd2*/
        v14 = *(_OWORD *)v10; /*0x45afdd*/
      }
      CCTextInputNode_setString(v4, &v14); /*0x45b029*/
      if ( *((_QWORD *)&v19 + 1) > 0xFu ) /*0x45b037*/
      {
        v13 = Src[0]; /*0x45b03c*/
        if ( (unsigned __int64)(*((_QWORD *)&v19 + 1) + 1LL) >= 0x1000 ) /*0x45b04a*/
        {
          v13 = (void *)*((_QWORD *)Src[0] - 1); /*0x45b050*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v13 - 8) > 0x1F ) /*0x45b05f*/
            invoke_watson(0, 0, 0, 0, 0); /*0x45b070*/
        }
        j_j_free(v13); /*0x45b077*/
      }
      *(_QWORD *)&v19 = 0; /*0x45b07c*/
      *((_QWORD *)&v19 + 1) = 15; /*0x45b080*/
      LOBYTE(Src[0]) = 0; /*0x45b088*/
      sub_3C310(v20); /*0x45b090*/
    }
  }
  else
  {
    SetupTriggerPopup_updateInputNode(a1, a2, a3); /*0x45b097*/
  }
}

// [4/5] Address: 0x45b0d0
// Method: StartPosLayer::getValue
double __fastcall StartPosLayer_getValue(__int64 a1, int a2)
{
  double result; // xmm0_8

  switch ( a2 ) /*0x45b0f0*/
  {
    case -16: /*0x45b0f0*/
      result = 0.0; /*0x45b294*/
      break; /*0x45b297*/
    case -15: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) + 476LL)); /*0x45b290*/
      break; /*0x45b293*/
    case -14: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) + 480LL)); /*0x45b276*/
      break; /*0x45b279*/
    case -13: /*0x45b0f0*/
      *(_QWORD *)&result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) + 484LL); /*0x45b257*/
      break; /*0x45b25f*/
    case -12: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) + 376LL)); /*0x45b245*/
      break; /*0x45b248*/
    case -11: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) + 372LL)); /*0x45b22b*/
      break; /*0x45b22e*/
    case -10: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b211*/
                                                                         + 473LL));
      break; /*0x45b214*/
    case -9: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b1f4*/
                                                                         + 472LL));
      break; /*0x45b1f7*/
    case -8: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b1d7*/
                                                                         + 448LL));
      break; /*0x45b1da*/
    case -7: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b1ba*/
                                                                         + 370LL));
      break; /*0x45b1bd*/
    case -6: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b19d*/
                                                                         + 339LL));
      break; /*0x45b1a0*/
    case -5: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b180*/
                                                                         + 471LL));
      break; /*0x45b183*/
    case -4: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b163*/
                                                                         + 338LL));
      break; /*0x45b166*/
    case -3: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b146*/
                                                                         + 337LL));
      break; /*0x45b149*/
    case -2: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b129*/
                                                                         + 336LL));
      break; /*0x45b12c*/
    case -1: /*0x45b0f0*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1000) + 1856LL) /*0x45b10c*/
                                                                         + 369LL));
      break; /*0x45b10f*/
    default:
      result = SetupTriggerPopup_getValue(a1, a2); /*0x45b298*/
      break; /*0x45b298*/
  }
  return result; /*0x45b10f*/
}

// [5/5] Address: 0x45b2e0
// Method: StartPosLayer::valueDidChange
__int64 __fastcall StartPosLayer_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 result; // rax

  switch ( a2 ) /*0x45b301*/
  {
    case -15: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b4bd*/
      *(_DWORD *)(*(_QWORD *)(result + 1856) + 476LL) = (int)a3; /*0x45b4cf*/
      break; /*0x45b4d5*/
    case -14: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b4a4*/
      *(_DWORD *)(*(_QWORD *)(result + 1856) + 480LL) = (int)a3; /*0x45b4b6*/
      break; /*0x45b4bc*/
    case -13: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b475*/
      *(float *)(*(_QWORD *)(result + 1856) + 484LL) = fmaxf(-100.0, fminf(100.0, a3)); /*0x45b49b*/
      break; /*0x45b4a3*/
    case -12: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b4ef*/
      *(_DWORD *)(*(_QWORD *)(result + 1856) + 376LL) = (int)a3; /*0x45b501*/
      break; /*0x45b501*/
    case -11: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b4d6*/
      *(_DWORD *)(*(_QWORD *)(result + 1856) + 372LL) = (int)a3; /*0x45b4e8*/
      break; /*0x45b4ee*/
    case -10: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b460*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 473LL) = a3 != 0.0; /*0x45b46e*/
      break; /*0x45b474*/
    case -9: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b43b*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 472LL) = a3 != 0.0; /*0x45b449*/
      break; /*0x45b44f*/
    case -8: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b416*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 448LL) = a3 != 0.0; /*0x45b424*/
      break; /*0x45b42a*/
    case -7: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b3f1*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 370LL) = a3 != 0.0; /*0x45b3ff*/
      break; /*0x45b405*/
    case -6: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b3cc*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 339LL) = a3 != 0.0; /*0x45b3da*/
      break; /*0x45b3e0*/
    case -5: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b3a7*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 471LL) = a3 != 0.0; /*0x45b3b5*/
      break; /*0x45b3bb*/
    case -4: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b382*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 338LL) = a3 != 0.0; /*0x45b390*/
      break; /*0x45b396*/
    case -3: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b35d*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 337LL) = a3 != 0.0; /*0x45b36b*/
      break; /*0x45b371*/
    case -2: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b338*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 336LL) = a3 != 0.0; /*0x45b346*/
      break; /*0x45b34c*/
    case -1: /*0x45b301*/
      result = *(_QWORD *)(a1 + 1000); /*0x45b313*/
      *(_BYTE *)(*(_QWORD *)(result + 1856) + 369LL) = a3 != 0.0; /*0x45b321*/
      break; /*0x45b327*/
    default:
      return result;
  }
  return result; /*0x45b327*/
}
