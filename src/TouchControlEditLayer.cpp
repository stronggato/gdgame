#include <Geode/binding/TouchControlEditLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x44e320
// Method: TouchControlEditLayer::~TouchControlEditLayer
_QWORD *__fastcall TouchControlEditLayer__dtor_TouchControlEditLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &TouchControlEditLayer::`vftable'; /*0x44e336*/
  Block[40] = &TouchControlEditLayer::`vftable'; /*0x44e340*/
  Block[41] = &TouchControlEditLayer::`vftable'; /*0x44e34e*/
  Block[42] = &TouchControlEditLayer::`vftable'; /*0x44e35c*/
  Block[43] = &TouchControlEditLayer::`vftable'; /*0x44e36a*/
  Block[44] = &TouchControlEditLayer::`vftable'; /*0x44e378*/
  Block[51] = &TouchControlEditLayer::`vftable'; /*0x44e386*/
  Block[54] = &TouchControlEditLayer::`vftable'; /*0x44e394*/
  Block[68] = &TouchControlEditLayer::`vftable'; /*0x44e3a2*/
  Block[83] = &TouchControlEditLayer::`vftable'; /*0x44e3b0*/
  Block[84] = &TouchControlEditLayer::`vftable'; /*0x44e3be*/
  v4 = (cocos2d::CCObject *)Block[159]; /*0x44e3c5*/
  if ( v4 ) /*0x44e3cf*/
    cocos2d::CCObject::release(v4); /*0x44e3d1*/
  sub_3DA90(Block + 156); /*0x44e3de*/
  sub_3DA90(Block + 152); /*0x44e3ea*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x44e3f2*/
  if ( (a2 & 1) != 0 ) /*0x44e3fc*/
    j_j_free(Block); /*0x44e406*/
  return Block; /*0x44e40e*/
}

// [2/9] Address: 0x44fa80
// Method: TouchControlEditLayer::valueDidChange
// Hidden C++ exception states: #wind=1
char __fastcall TouchControlEditLayer_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 *v6; // rbx
  int v7; // eax
  char v8; // kr08_1
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  bool v17; // si
  __int64 v18; // r8
  void *v20; // [rsp+40h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 1240); /*0x44fa9a*/
  v5 = 0; /*0x44faa1*/
  if ( !v4 ) /*0x44faa6*/
  {
    v6 = *(__int64 **)(a1 + 1216); /*0x44faa8*/
    if ( v6 == *(__int64 **)(a1 + 1224) ) /*0x44fab6*/
      v4 = 0; /*0x44fab8*/
    else
      v4 = *v6; /*0x44fabc*/
  }
  *(_BYTE *)(a1 + 1328) = 1; /*0x44fabf*/
  v8 = a2 - 1; /*0x44fad2*/
  v7 = a2 - 1; /*0x44fad2*/
  v9 = -4096; /*0x44fad4*/
  switch ( v7 ) /*0x44fae5*/
  {
    case 0: /*0x44fae5*/
      if ( v4 ) /*0x44faea*/
      {
        v10 = (int)(float)(a3 * 255.0); /*0x44faf8*/
        LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 320) + 320LL) + 40LL))( /*0x44fb11*/
                       *(_QWORD *)(v4 + 320) + 320LL,
                       (unsigned __int8)v10);
        v11 = *(_QWORD *)(v4 + 328); /*0x44fb14*/
        if ( v11 ) /*0x44fb1e*/
          LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v11 + 320) + 40LL))( /*0x44fb32*/
                         v11 + 320,
                         (unsigned __int8)v10);
      }
      break; /*0x44fb35*/
    case 1: /*0x44fae5*/
      if ( v4 ) /*0x44fb3d*/
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 320) + 160LL))(*(_QWORD *)(v4 + 320)); /*0x44fb63*/
        v12 = *(_QWORD *)(v4 + 328); /*0x44fb69*/
        if ( v12 ) /*0x44fb73*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 160LL))(v12); /*0x44fb7b*/
        sub_66F240(v4); /*0x44fb84*/
      }
      LOBYTE(v7) = sub_44F770(a1); /*0x44fb8c*/
      break; /*0x44fb91*/
    case 2: /*0x44fae5*/
      if ( v4 ) /*0x44fb99*/
      {
        if ( *(_QWORD *)(v4 + 328) ) /*0x44fbaf*/
        {
          *(_BYTE *)(v4 + 381) = a3 != 0.0; /*0x44fbb8*/
          LOBYTE(v9) = a3 == 0.0; /*0x44fbc5*/
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 320) + 336LL))(*(_QWORD *)(v4 + 320), v9); /*0x44fbcb*/
          LOBYTE(v13) = *(_BYTE *)(v4 + 381) == 0; /*0x44fbdf*/
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 328) + 336LL))(*(_QWORD *)(v4 + 328), v13); /*0x44fbe5*/
          sub_66F160(v4); /*0x44fbee*/
        }
        LOBYTE(v7) = sub_44F6F0(a1); /*0x44fbf6*/
      }
      break; /*0x44fbfb*/
    case 3: /*0x44fae5*/
      if ( v4 ) /*0x44fc03*/
      {
        if ( a3 == 0.0 ) /*0x44fc11*/
        {
          *(_BYTE *)(v4 + 382) = 0; /*0x44fc15*/
          LOBYTE(v7) = 0; /*0x44fc13*/
        }
        else
        {
          *(_BYTE *)(v4 + 382) = 1; /*0x44fc22*/
          LOBYTE(v7) = 1; /*0x44fc20*/
        }
      }
      break; /*0x44fc1b*/
    case 4: /*0x44fae5*/
      if ( v4 ) /*0x44fc30*/
      {
        *(_BYTE *)(v4 + 387) = a3 != 0.0; /*0x44fc42*/
        LOBYTE(v7) = sub_66F160(v4); /*0x44fc4b*/
      }
      break; /*0x44fc50*/
    case 5: /*0x44fae5*/
      v14 = *(_QWORD *)(a1 + 1008); /*0x44fc6a*/
      if ( v14 ) /*0x44fc74*/
      {
        LOBYTE(v5) = *(_DWORD *)(v14 + 68) == 0; /*0x44fc79*/
        *(_DWORD *)(v14 + 68) = v5; /*0x44fc7d*/
        LOBYTE(v7) = sub_44F8F0(a1); /*0x44fc83*/
      }
      else
      {
        if ( !qword_905FD0 ) /*0x44fc94*/
        {
          v20 = operator new(0x6E8u); /*0x44fca0*/
          qword_905FD0 = sub_2723A0(v20); /*0x44fcae*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x44fcbf*/
        }
        GameManager_toggleGameVariable(a1, "0113"); /*0x44fcc8*/
        LOBYTE(v7) = sub_44F8F0(a1); /*0x44fcd0*/
      }
      break; /*0x44fc88*/
    case 6: /*0x44fae5*/
      sub_450970(a1); /*0x44fcdd*/
      *(_BYTE *)(a1 + 1000) = a3 != 0.0; /*0x44fcf2*/
      sub_44EA90(a1); /*0x44fcfb*/
      sub_44E420(a1); /*0x44fd03*/
      sub_44F770(a1); /*0x44fd0b*/
      sub_44F8F0(a1); /*0x44fd13*/
      sub_44F5F0(a1); /*0x44fd1b*/
      v15 = *(_QWORD *)(a1 + 1240); /*0x44fd20*/
      v17 = !v15 && ((v16 = *(__int64 **)(a1 + 1216), v16 == *(__int64 **)(a1 + 1224)) || (v15 = *v16) == 0) /*0x44fd4b*/
         || *(_BYTE *)(v15 + 381) == 0;
      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 1, v17); /*0x44fd65*/
      LOBYTE(v18) = *(_BYTE *)(a1 + 1000) == 0; /*0x44fd72*/
      LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 2, v18); /*0x44fd81*/
      break; /*0x44fd81*/
    default:
      LOBYTE(v7) = v8; /*0xf1c0000000000004*/
      break; /*0xf1c0000000000004*/
  }
  return v7; /*0x44fd87*/
}

// [3/9] Address: 0x44fdc0
// Method: TouchControlEditLayer::getValue
// Hidden C++ exception states: #wind=1
double __fastcall TouchControlEditLayer_getValue(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 *v4; // r8
  double result; // xmm0_8
  __int64 v6; // rax
  __int64 v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 1240); /*0x44fdc7*/
  v3 = 0; /*0x44fdce*/
  if ( !v2 ) /*0x44fdd4*/
  {
    v4 = *(__int64 **)(a1 + 1216); /*0x44fdd6*/
    if ( v4 == *(__int64 **)(a1 + 1224) ) /*0x44fde4*/
      v2 = 0; /*0x44fde6*/
    else
      v2 = *v4; /*0x44fdeb*/
  }
  switch ( a2 ) /*0x44fe0d*/
  {
    case 1: /*0x44fe0d*/
      if ( !v2 ) /*0x44fe12*/
        goto LABEL_8; /*0x44fe12*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v2 + 320) + 320LL) /*0x44fe2f*/
                                                                                                 + 32LL))(*(_QWORD *)(v2 + 320) + 320LL));
      *(float *)&result = *(float *)&result / 255.0; /*0x44fe32*/
      break; /*0x44fe3e*/
    case 2: /*0x44fe0d*/
      if ( v2 ) /*0x44fe4f*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 320) + 168LL))(*(_QWORD *)(v2 + 320)); /*0x44fe5f*/
      else
LABEL_8:
        *(_QWORD *)&result = 1065353216; /*0x44fe3f*/
      break; /*0x44fe5f*/
    case 3: /*0x44fe0d*/
      if ( v2 ) /*0x44fe69*/
        v3 = *(unsigned __int8 *)(v2 + 381); /*0x44fe6b*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)v3); /*0x44fe78*/
      break; /*0x44fe7f*/
    case 4: /*0x44fe0d*/
      if ( v2 ) /*0x44fe83*/
        v3 = *(unsigned __int8 *)(v2 + 382); /*0x44fe85*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)v3); /*0x44fe92*/
      break; /*0x44fe99*/
    case 5: /*0x44fe0d*/
      if ( v2 ) /*0x44fe9d*/
        v3 = *(unsigned __int8 *)(v2 + 387); /*0x44fe9f*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)v3); /*0x44feac*/
      break; /*0x44feb3*/
    case 6: /*0x44fe0d*/
      v6 = *(_QWORD *)(a1 + 1008); /*0x44feb4*/
      if ( v6 ) /*0x44febe*/
      {
        *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(int *)(v6 + 68)); /*0x44fec7*/
      }
      else
      {
        v7 = qword_905FD0; /*0x44fecf*/
        if ( !qword_905FD0 ) /*0x44fed9*/
        {
          v8 = operator new(0x6E8u); /*0x44fee5*/
          qword_905FD0 = sub_2723A0(v8); /*0x44fef3*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x44ff04*/
          v7 = qword_905FD0; /*0x44ff06*/
        }
        *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)GameManager_getGameVariable(v7, "0113")); /*0x44ff20*/
      }
      break; /*0x44fece*/
    case 7: /*0x44fe0d*/
      *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)*(unsigned __int8 *)(a1 + 1000)); /*0x44ff34*/
      break; /*0x44ff3b*/
    default:
      result = 0.0; /*0x44ff3c*/
      break; /*0x44ff3c*/
  }
  return result; /*0x44fe3a*/
}

// [6/9] Address: 0x450960
// Method: TouchControlEditLayer::ccTouchEnded
__int64 __fastcall TouchControlEditLayer_ccTouchEnded(__int64 a1)
{
  *(_DWORD *)(a1 + 960) = 0; /*0x450962*/
  *(_QWORD *)(a1 + 968) = 0; /*0x450968*/
  return 0; /*0x45096f*/
}

// [7/9] Address: 0x450e30
// Method: TouchControlEditLayer::keyBackClicked
__int64 __fastcall TouchControlEditLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 336; /*0x450e3d*/
  if ( *(_BYTE *)(a1 + 992) ) /*0x450e36*/
    sub_450970(a1 - 336); /*0x450e49*/
  return SetupTriggerPopup_onClose(v1); /*0x450e53*/
}

// [8/9] Address: 0x452590
// Method: TouchControlEditLayer::onEnter
int __fastcall TouchControlEditLayer_onEnter(cocos2d::CCArray **a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  cocos2d::CCArray *v4; // rbp
  cocos2d::CCObject *v5; // rax
  unsigned int v6; // ebx
  struct cocos2d::CCObject *v7; // rax
  struct cocos2d::CCObject *v8; // rdi

  cocos2d::CCLayer::onEnter((cocos2d::CCLayer *)a1); /*0x452599*/
  v2 = (*((__int64 (__fastcall **)(cocos2d::CCArray **))*a1 + 63))(a1); /*0x4525a5*/
  if ( v2 ) /*0x4525ae*/
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 480LL))(v2); /*0x4525bf*/
    v4 = (cocos2d::CCArray *)v2; /*0x4525c5*/
    if ( v2 ) /*0x4525cb*/
    {
      if ( !a1[159] ) /*0x4525d1*/
      {
        v5 = (cocos2d::CCObject *)cocos2d::CCArray::create(v3); /*0x4525e0*/
        a1[159] = v5; /*0x4525e9*/
        cocos2d::CCObject::retain(v5); /*0x4525f0*/
      }
      v6 = 0; /*0x4525f9*/
      for ( LODWORD(v2) = cocos2d::CCArray::count(v4); v6 < (unsigned int)v2; LODWORD(v2) = cocos2d::CCArray::count(v4) ) /*0x452603*/
      {
        v7 = cocos2d::CCArray::objectAtIndex(v4, v6); /*0x452615*/
        v8 = v7; /*0x45261b*/
        if ( v7 != (struct cocos2d::CCObject *)a1 /*0x452634*/
          && v6
          && (*(unsigned __int8 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 344LL))(v7) )
        {
          (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v8 + 336LL))(v8, 0); /*0x452642*/
          cocos2d::CCArray::addObject(a1[159], v8); /*0x452652*/
        }
        ++v6; /*0x45265b*/
      }
    }
  }
  return v2; /*0x452676*/
}

// [9/9] Address: 0x452680
// Method: TouchControlEditLayer::onExit
void __fastcall TouchControlEditLayer_onExit(cocos2d::CCArray **a1)
{
  cocos2d::CCArray *v1; // rax
  unsigned int *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *i; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx

  v1 = a1[159]; /*0x452686*/
  if ( v1 ) /*0x452693*/
  {
    v3 = (unsigned int *)*((_QWORD *)v1 + 7); /*0x45269a*/
    v4 = *v3; /*0x45269e*/
    if ( (_DWORD)v4 ) /*0x4526a2*/
    {
      v5 = (_QWORD *)*((_QWORD *)v3 + 2); /*0x4526a4*/
      for ( i = &v5[v4 - 1]; v5 <= i; ++v5 ) /*0x4526b8*/
      {
        v7 = *v5; /*0x4526c0*/
        if ( !*v5 ) /*0x4526c0*/
          break; /*0x4526c6*/
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 504LL))(*v5) ) /*0x4526ce*/
        {
          LOBYTE(v8) = 1; /*0x4526dc*/
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 336LL))(v7, v8); /*0x4526e1*/
        }
      }
    }
    cocos2d::CCArray::removeAllObjects(a1[159]); /*0x452701*/
  }
  cocos2d::CCLayer::onExit((cocos2d::CCLayer *)a1); /*0x452714*/
}
