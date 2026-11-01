#include <Geode/binding/SetupSmartBlockLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/12] Address: 0x7da50
// Method: SetupSmartBlockLayer::onCreateAll
// Hidden C++ exception states: #wind=2
__time64_t __fastcall SetupSmartBlockLayer_onCreateAll(__int64 a1)
{
  __int128 v1; // kr00_16
  __int64 v2; // r11
  __int64 v3; // r15
  __int64 v4; // r11
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  size_t v16; // r12
  size_t v17; // rsi
  void **v18; // r13
  _QWORD *v19; // rcx
  void **v20; // rdx
  size_t v21; // rdi
  size_t v22; // r8
  unsigned int v23; // ecx
  __int64 *v24; // rax
  _QWORD *v25; // rdx
  void **v26; // rcx
  size_t v27; // rbx
  size_t v28; // r8
  int v29; // eax
  _OWORD *v30; // rax
  void *v31; // rcx
  __time64_t result; // rax
  unsigned __int64 v33; // [rsp+30h] [rbp-39h]
  __int64 v34; // [rsp+38h] [rbp-31h]
  __int128 v35; // [rsp+40h] [rbp-29h] BYREF
  __int128 v36; // [rsp+50h] [rbp-19h]
  __int64 *v37; // [rsp+68h] [rbp-1h]
  __int64 v38; // [rsp+70h] [rbp+7h]
  void *Buf2[2]; // [rsp+78h] [rbp+Fh] BYREF
  size_t Size[2]; // [rsp+88h] [rbp+1Fh]

  if ( Block == *(&Block + 1) ) /*0x7da90*/
  {
    sub_7F3B0(a1, &unk_6F97D0, 262); /*0x7daa3*/
    v33 = 0; /*0x7daaa*/
    v1 = *(_OWORD *)&Block; /*0x7dadd*/
    if ( ((_BYTE *)*(&Block + 1) - (_BYTE *)Block) / 48 ) /*0x7dada*/
    {
      v2 = 0; /*0x7dae3*/
      v34 = 0; /*0x7dae6*/
      do /*0x7ddae*/
      {
        v3 = v2 + v1; /*0x7daf0*/
        v4 = *(_QWORD *)(v2 + v1); /*0x7daf4*/
        if ( v4 ) /*0x7dafa*/
        {
          if ( *(_BYTE *)(v3 + 27) ) /*0x7db00*/
          {
            v5 = 0; /*0x7db07*/
            v6 = (*((_QWORD *)&v1 + 1) - (_QWORD)v1) / 48LL; /*0x7db28*/
            if ( v6 ) /*0x7db2b*/
            {
              v7 = v1 + 8; /*0x7db2d*/
              while ( !*(_QWORD *)(v7 - 8) /*0x7db4e*/
                   || *(_BYTE *)(v7 + 19)
                   || *(_DWORD *)v7 != *(_DWORD *)(v3 + 8)
                   || *(_BYTE *)(v7 + 32) != *(_BYTE *)(v3 + 40) )
              {
                ++v5; /*0x7db50*/
                v7 += 48; /*0x7db53*/
                if ( v5 >= v6 ) /*0x7db5a*/
                  goto LABEL_15; /*0x7db5a*/
              }
              v3 = v7 - 8; /*0x7db5e*/
            }
          }
LABEL_15:
          *(_OWORD *)Buf2 = 0; /*0x7db62*/
          Size[0] = 0; /*0x7db69*/
          Size[1] = 0; /*0x7db6d*/
          v8 = -1; /*0x7db71*/
          do /*0x7db83*/
            ++v8; /*0x7db80*/
          while ( *(_BYTE *)(v4 + v8) ); /*0x7db83*/
          sub_3C230(Buf2); /*0x7db91*/
          v13 = qword_903D40; /*0x7db97*/
          *(_QWORD *)&v35 = qword_903D40; /*0x7db9e*/
          v14 = *(_QWORD *)(qword_903D40 + 8); /*0x7dba2*/
          *(_QWORD *)&v36 = v14; /*0x7dba6*/
          DWORD2(v36) = 0; /*0x7dbaa*/
          v15 = qword_903D40; /*0x7dbad*/
          v16 = Size[1]; /*0x7dbb0*/
          v17 = Size[0]; /*0x7dbb4*/
          v18 = (void **)Buf2[0]; /*0x7dbb8*/
          if ( !*(_BYTE *)(v14 + 25) ) /*0x7dbbc*/
          {
            do /*0x7dc46*/
            {
              *(_QWORD *)&v36 = v14; /*0x7dbd0*/
              v19 = (_QWORD *)(v14 + 32); /*0x7dbd4*/
              v20 = Buf2; /*0x7dbd8*/
              if ( v16 > 0xF ) /*0x7dbe0*/
                v20 = v18; /*0x7dbe0*/
              if ( *(_QWORD *)(v14 + 56) > 0xFu ) /*0x7dbe9*/
                v19 = (_QWORD *)*v19; /*0x7dbeb*/
              v21 = *(_QWORD *)(v14 + 48); /*0x7dbee*/
              v22 = v21; /*0x7dbf2*/
              if ( v17 < v21 ) /*0x7dbf8*/
                v22 = v17; /*0x7dbf8*/
              v23 = memcmp(v19, v20, v22); /*0x7dc01*/
              if ( !v23 ) /*0x7dc05*/
              {
                if ( v21 >= v17 ) /*0x7dc0a*/
                  v23 = v21 > v17; /*0x7dc18*/
                else
                  v23 = -1; /*0x7dc0c*/
              }
              v10 = v23 >> 31; /*0x7dc1b*/
              if ( (_BYTE)v10 ) /*0x7dc20*/
              {
                DWORD2(v36) = 0; /*0x7dc22*/
              }
              else
              {
                DWORD2(v36) = 1; /*0x7dc2b*/
                v15 = v14; /*0x7dc32*/
              }
              v24 = (__int64 *)(v14 + 16); /*0x7dc35*/
              if ( !(_BYTE)v10 ) /*0x7dc3b*/
                v24 = (__int64 *)v14; /*0x7dc3b*/
              v14 = *v24; /*0x7dc3f*/
            }
            while ( !*(_BYTE *)(*v24 + 25) ); /*0x7dc46*/
            v13 = v35; /*0x7dc48*/
          }
          if ( *(_BYTE *)(v15 + 25) ) /*0x7dc4c*/
            goto LABEL_47; /*0x7dc4c*/
          v25 = (_QWORD *)(v15 + 32); /*0x7dc53*/
          if ( *(_QWORD *)(v15 + 56) > 0xFu ) /*0x7dc5c*/
            v25 = (_QWORD *)*v25; /*0x7dc5e*/
          v26 = Buf2; /*0x7dc61*/
          if ( v16 > 0xF ) /*0x7dc69*/
            v26 = v18; /*0x7dc69*/
          v27 = *(_QWORD *)(v15 + 48); /*0x7dc6d*/
          v28 = v17; /*0x7dc71*/
          if ( v27 < v17 ) /*0x7dc77*/
            v28 = *(_QWORD *)(v15 + 48); /*0x7dc77*/
          v29 = memcmp(v26, v25, v28); /*0x7dc7b*/
          if ( !v29 ) /*0x7dc82*/
          {
            if ( v17 >= v27 ) /*0x7dc87*/
              v29 = v17 > v27; /*0x7dc95*/
            else
              v29 = -1; /*0x7dc89*/
          }
          if ( v29 < 0 ) /*0x7dc9d*/
          {
LABEL_47:
            if ( qword_903D48 == 0x38E38E38E38E38ELL ) /*0x7dcb7*/
              sub_5AC20(v10, v9, v11, v12); /*0x7de1d*/
            v37 = &qword_903D40; /*0x7dcc4*/
            v38 = 0; /*0x7dcca*/
            v30 = operator new(0x48u); /*0x7dcd3*/
            v30[2] = *(_OWORD *)Buf2; /*0x7dcdd*/
            v30[3] = *(_OWORD *)Size; /*0x7dce5*/
            Size[0] = 0; /*0x7dce9*/
            Size[1] = 15; /*0x7dced*/
            LOBYTE(Buf2[0]) = 0; /*0x7dcf5*/
            *((_QWORD *)v30 + 8) = 0; /*0x7dcf9*/
            *(_QWORD *)v30 = v13; /*0x7dcfd*/
            *((_QWORD *)v30 + 1) = v13; /*0x7dd00*/
            *((_QWORD *)v30 + 2) = v13; /*0x7dd04*/
            *((_WORD *)v30 + 12) = 0; /*0x7dd08*/
            v38 = 0; /*0x7dd0c*/
            v35 = v36; /*0x7dd14*/
            v15 = sub_69600(&qword_903D40, &v35, v30); /*0x7dd27*/
          }
          *(_QWORD *)(v15 + 64) = v3; /*0x7dd2a*/
          if ( Size[1] > 0xF ) /*0x7dd36*/
          {
            v31 = Buf2[0]; /*0x7dd3b*/
            if ( Size[1] + 1 >= 0x1000 ) /*0x7dd49*/
            {
              v31 = (void *)*((_QWORD *)Buf2[0] - 1); /*0x7dd4f*/
              if ( (unsigned __int64)((char *)Buf2[0] - (char *)v31 - 8) > 0x1F ) /*0x7dd5e*/
                invoke_watson(0, 0, 0, 0, 0); /*0x7ddc5*/
            }
            j_j_free(v31); /*0x7dd60*/
          }
          v1 = *(_OWORD *)&Block; /*0x7dd6c*/
        }
        ++v33; /*0x7dd7a*/
        v2 = v34 + 48; /*0x7dd82*/
        v34 += 48; /*0x7dd86*/
      }
      while ( v33 < (*((_QWORD *)&v1 + 1) - (_QWORD)v1) / 48LL ); /*0x7ddae*/
    }
  }
  else
  {
    result = time64(0); /*0x7ddce*/
    if ( result - qword_9060B0 < 2 ) /*0x7dde2*/
      return result; /*0x7dde2*/
    qword_9060B0 = result; /*0x7dde4*/
  }
  return sub_7D650(); /*0x7ddf0*/
}

// [2/12] Address: 0xd5960
// Method: SetupSmartBlockLayer::onAllowFlipping
// Hidden C++ exception states: #wind=1
void __fastcall SetupSmartBlockLayer_onAllowFlipping(__int64 a1, struct cocos2d::CCObject *a2)
{
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx
  struct cocos2d::CCObject *v6; // rax
  cocos2d::CCArray *v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h]
  __int64 v19; // [rsp+68h] [rbp-10h]

  if ( a2 ) /*0xd5963*/
  {
    if ( *((int *)a2 + 98) > 0 ) /*0xd5985*/
    {
      v4 = *(cocos2d::CCArray **)(a1 + 208); /*0xd598b*/
      if ( v4 ) /*0xd5995*/
      {
        v5 = 0; /*0xd599b*/
        if ( (int)cocos2d::CCArray::count(v4) <= 0 ) /*0xd59a5*/
        {
LABEL_7:
          if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 208)) >= 0xA ) /*0xd59f4*/
          {
            v9 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v8) + 272); /*0xd5a00*/
            v17 = 0; /*0xd5a17*/
            v18 = 0; /*0xd5a1c*/
            v19 = 15; /*0xd5a25*/
            LOBYTE(v17) = 0; /*0xd5a2e*/
            v14 = 0; /*0xd5a33*/
            *(_QWORD *)&v14 = sub_3C460(32); /*0xd5a54*/
            v15 = 20; /*0xd5a59*/
            v16 = 31; /*0xd5a62*/
            strcpy((char *)v14, "Filter limit reached"); /*0xd5a72*/
            v10 = *v9; /*0xd5a82*/
            v13 = sub_3A4CA0(&v14, v11, v12, 150, &v17); /*0xd5aaa*/
            (*(void (__fastcall **)(__int64 *, __int64, __int64))(v10 + 456))(v9, v13, 1000); /*0xd5abb*/
            return; /*0xd5ad2*/
          }
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 208), a2); /*0xd5aea*/
        }
        else
        {
          while ( 1 ) /*0xd59b9*/
          {
            v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 208), v5); /*0xd59b9*/
            v7 = *(cocos2d::CCArray **)(a1 + 208); /*0xd59bf*/
            if ( *((_DWORD *)v6 + 98) == *((_DWORD *)a2 + 98) ) /*0xd59d2*/
              break; /*0xd59d2*/
            if ( (int)++v5 >= (int)cocos2d::CCArray::count(v7) ) /*0xd59e2*/
              goto LABEL_7; /*0xd59e2*/
          }
          cocos2d::CCArray::removeObjectAtIndex(v7, v5, 1); /*0xd5ad8*/
        }
        sub_D5CD0(a1 - 680); /*0xd5af7*/
      }
    }
  }
}

// [3/12] Address: 0x123dc0
// Method: SetupSmartBlockLayer::show
__int64 __fastcall SetupSmartBlockLayer_show(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x123dd6*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x123ddd*/
    v2 = *(_QWORD *)(a1 + 568); /*0x123de7*/
  if ( !*(_DWORD *)(a1 + 592) ) /*0x123dcf*/
    *(_DWORD *)(a1 + 592) = 105; /*0x123df6*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1);
}

// [5/12] Address: 0x5e70a0
// Method: SetupSmartBlockLayer::~SetupSmartBlockLayer
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall SetupSmartBlockLayer__dtor_SetupSmartBlockLayer(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *(_QWORD *)Block = &SetupSmartBlockLayer::`vftable'; /*0x5e70b6*/
  *((_QWORD *)Block + 40) = &SetupSmartBlockLayer::`vftable'; /*0x5e70c0*/
  *((_QWORD *)Block + 41) = &SetupSmartBlockLayer::`vftable'; /*0x5e70ce*/
  *((_QWORD *)Block + 42) = &SetupSmartBlockLayer::`vftable'; /*0x5e70dc*/
  *((_QWORD *)Block + 43) = &SetupSmartBlockLayer::`vftable'; /*0x5e70ea*/
  *((_QWORD *)Block + 44) = &SetupSmartBlockLayer::`vftable'; /*0x5e70f8*/
  *((_QWORD *)Block + 51) = &SetupSmartBlockLayer::`vftable'; /*0x5e7106*/
  *((_QWORD *)Block + 54) = &SetupSmartBlockLayer::`vftable'; /*0x5e7114*/
  *((_QWORD *)Block + 68) = &SetupSmartBlockLayer::`vftable'; /*0x5e7122*/
  *((_QWORD *)Block + 83) = &SetupSmartBlockLayer::`vftable'; /*0x5e7130*/
  cocos2d::CCNode::removeAllChildrenWithCleanup(Block, 1); /*0x5e7139*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 86); /*0x5e713f*/
  if ( v4 ) /*0x5e7149*/
    cocos2d::CCObject::release(v4); /*0x5e714b*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x5e7151*/
  if ( v5 ) /*0x5e715b*/
    cocos2d::CCObject::release(v5); /*0x5e715d*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x5e7166*/
  if ( (a2 & 1) != 0 ) /*0x5e7170*/
    j_j_free(Block); /*0x5e717a*/
  return Block; /*0x5e7182*/
}

// [6/12] Address: 0x5e7430
// Method: SetupSmartBlockLayer::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupSmartBlockLayer_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x2C0u); /*0x5e744f*/
  FLAlertLayer_FLAlertLayer((__int64)v4); /*0x5e745a*/
  *v4 = &SetupSmartBlockLayer::`vftable'; /*0x5e7466*/
  v4[40] = &SetupSmartBlockLayer::`vftable'; /*0x5e7470*/
  v4[41] = &SetupSmartBlockLayer::`vftable'; /*0x5e747e*/
  v4[42] = &SetupSmartBlockLayer::`vftable'; /*0x5e748c*/
  v4[43] = &SetupSmartBlockLayer::`vftable'; /*0x5e749a*/
  v4[44] = &SetupSmartBlockLayer::`vftable'; /*0x5e74a8*/
  v4[51] = &SetupSmartBlockLayer::`vftable'; /*0x5e74b6*/
  v4[54] = &SetupSmartBlockLayer::`vftable'; /*0x5e74c4*/
  v4[68] = &SetupSmartBlockLayer::`vftable'; /*0x5e74d2*/
  v4[83] = &SetupSmartBlockLayer::`vftable'; /*0x5e74e0*/
  *((_DWORD *)v4 + 168) = 0; /*0x5e74e7*/
  *((_WORD *)v4 + 338) = 0; /*0x5e74f1*/
  *((_BYTE *)v4 + 678) = 0; /*0x5e74fa*/
  *((_DWORD *)v4 + 170) = -1; /*0x5e7501*/
  v4[86] = 0; /*0x5e750b*/
  v4[87] = 0; /*0x5e7516*/
  if ( (unsigned __int8)SetupSmartBlockLayer_init(v4, a1, a2) ) /*0x5e752a*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5e7536*/
    return v4; /*0x5e753c*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5e755e*/
    return 0; /*0x5e7561*/
  }
}

// [8/12] Address: 0x5e9070
// Method: SetupSmartBlockLayer::onCreate
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupSmartBlockLayer_onCreate(__int64 a1)
{
  cocos2d::CCArray *v2; // rax
  cocos2d::CCArray *v3; // rsi
  struct cocos2d::CCObject *v4; // rdx
  struct cocos2d::CCArray *v5; // rdx
  int v6; // ecx
  char v7; // bp
  int v8; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v22; // [rsp+50h] [rbp+8h]
  void *v23; // [rsp+50h] [rbp+8h]
  void *v24; // [rsp+50h] [rbp+8h]
  void *v25; // [rsp+50h] [rbp+8h]

  v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x5e9087*/
  v3 = v2; /*0x5e908d*/
  v4 = *(struct cocos2d::CCObject **)(a1 + 688); /*0x5e9090*/
  if ( v4 ) /*0x5e909a*/
  {
    cocos2d::CCArray::addObject(v2, v4); /*0x5e909f*/
  }
  else
  {
    v5 = *(struct cocos2d::CCArray **)(a1 + 696); /*0x5e90a7*/
    if ( v5 ) /*0x5e90b1*/
      cocos2d::CCArray::addObjectsFromArray(v2, v5); /*0x5e90b6*/
  }
  v6 = *(_DWORD *)(a1 + 680); /*0x5e90bc*/
  if ( v6 >= 0 ) /*0x5e90c4*/
  {
    v7 = v6 == 9; /*0x5e90cd*/
    if ( v6 == 9 ) /*0x5e90d1*/
    {
      *(_DWORD *)(a1 + 680) = 8; /*0x5e90d3*/
    }
    else
    {
      v8 = 1861; /*0x5e90e6*/
      if ( v6 > 1861 ) /*0x5e90ed*/
      {
        if ( v6 == 2703 ) /*0x5e92b7*/
        {
          qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x5e9320*/
          v8 = ((int)floorf( /*0x5e9353*/
                       (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)
                     + (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)) != 0)
             + 2703;
          goto LABEL_39; /*0x5e9353*/
        }
        v8 = 2838; /*0x5e92b9*/
        if ( v6 == 2838 ) /*0x5e92c0*/
        {
          qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x5e92d7*/
          if ( (int)floorf( /*0x5e930a*/
                      (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)
                    + (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)) )
            v8 = 2840; /*0x5e930a*/
          goto LABEL_39; /*0x5e930a*/
        }
      }
      else
      {
        if ( v6 == 1861 ) /*0x5e90f3*/
        {
          qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x5e9251*/
          v14 = (int)floorf((float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0) * 4.0); /*0x5e927d*/
          if ( v14 ) /*0x5e9283*/
          {
            v15 = v14 - 1; /*0x5e9289*/
            if ( v15 ) /*0x5e928c*/
            {
              if ( v15 == 1 ) /*0x5e9291*/
                v8 = 1863; /*0x5e929d*/
              else
                v8 = 1864; /*0x5e9293*/
            }
            else
            {
              v8 = 1862; /*0x5e92a7*/
            }
          }
          goto LABEL_39; /*0x5e9298*/
        }
        v9 = v6 - 869; /*0x5e90f9*/
        if ( !v9 ) /*0x5e90ff*/
        {
          qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x5e9202*/
          v8 = ((int)floorf( /*0x5e9235*/
                       (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)
                     + (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)) != 0)
             + 869;
          goto LABEL_39; /*0x5e923b*/
        }
        v10 = v9 - 562; /*0x5e9105*/
        if ( !v10 ) /*0x5e910b*/
        {
          qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x5e919a*/
          v13 = (int)floorf((float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0) * 3.0); /*0x5e91c6*/
          if ( v13 ) /*0x5e91cc*/
          {
            if ( v13 == 1 ) /*0x5e91d1*/
              v8 = 1432; /*0x5e91dd*/
            else
              v8 = 1433; /*0x5e91d3*/
          }
          else
          {
            v8 = 1431; /*0x5e91e7*/
          }
          goto LABEL_39; /*0x5e91d8*/
        }
        if ( v10 == 30 ) /*0x5e9110*/
        {
          qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x5e9123*/
          v11 = (int)floorf((float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0) * 4.0); /*0x5e914f*/
          if ( v11 ) /*0x5e9155*/
          {
            v12 = v11 - 1; /*0x5e9157*/
            if ( v12 ) /*0x5e915a*/
            {
              if ( v12 == 1 ) /*0x5e915f*/
                v8 = 1463; /*0x5e916b*/
              else
                v8 = 1464; /*0x5e9161*/
            }
            else
            {
              v8 = 1462; /*0x5e9175*/
            }
          }
          else
          {
            v8 = 1461; /*0x5e917f*/
          }
          goto LABEL_39; /*0x5e9166*/
        }
      }
    }
    v8 = v22; /*0x5e90dd*/
LABEL_39:
    if ( !qword_905FD0 ) /*0x5e9363*/
    {
      v23 = operator new(0x6E8u); /*0x5e936f*/
      qword_905FD0 = sub_2723A0(v23); /*0x5e937d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5e938a*/
    }
    v16 = EditorUI_smartTypeForKey(v8); /*0x5e9396*/
    EditorUI_createSmartObjectsFromType( /*0x5e93bd*/
      *(_QWORD *)(*(_QWORD *)(v17 + 568) + 14968LL),
      v16,
      v3,
      v7,
      *(_BYTE *)(a1 + 677));
    return sub_5E8FB0(a1, 0); /*0x5e93c2*/
  }
  v18 = *(_QWORD *)&qword_905FB0; /*0x5e93c7*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x5e93d1*/
  {
    v24 = operator new(0x690u); /*0x5e93dd*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v24); /*0x5e93eb*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x5e93fc*/
    v18 = *(_QWORD *)&qword_905FB0; /*0x5e93fe*/
  }
  v19 = *(_QWORD *)(v18 + 1664); /*0x5e9405*/
  v20 = qword_905FD0; /*0x5e940c*/
  if ( !qword_905FD0 ) /*0x5e9416*/
  {
    v25 = operator new(0x6E8u); /*0x5e9422*/
    qword_905FD0 = sub_2723A0(v25); /*0x5e9430*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5e9441*/
    v20 = qword_905FD0; /*0x5e9444*/
  }
  EditorUI_createSmartObjectsFromTemplate( /*0x5e9477*/
    *(_QWORD *)(*(_QWORD *)(v20 + 568) + 14968LL),
    v19,
    v3,
    *(_BYTE *)(a1 + 676),
    *(_BYTE *)(a1 + 677),
    0);
  return sub_5E8FB0(a1, 0); /*0x5e9481*/
}

// [9/12] Address: 0x5e94a0
// Method: SetupSmartBlockLayer::onCreateTemplate
// Hidden C++ exception states: #wind=2
__int64 __fastcall SetupSmartBlockLayer_onCreateTemplate(__int64 a1)
{
  cocos2d::CCArray *v2; // rax
  cocos2d::CCArray *v3; // rbx
  struct cocos2d::CCObject *v4; // rdx
  struct cocos2d::CCArray *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h]
  void *v11; // [rsp+30h] [rbp+8h]

  v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x5e94b2*/
  v3 = v2; /*0x5e94b8*/
  v4 = *(struct cocos2d::CCObject **)(a1 + 688); /*0x5e94bb*/
  if ( v4 ) /*0x5e94c5*/
  {
    cocos2d::CCArray::addObject(v2, v4); /*0x5e94ca*/
  }
  else
  {
    v5 = *(struct cocos2d::CCArray **)(a1 + 696); /*0x5e94d2*/
    if ( v5 ) /*0x5e94dc*/
      cocos2d::CCArray::addObjectsFromArray(v2, v5); /*0x5e94e1*/
  }
  v6 = *(_QWORD *)&qword_905FB0; /*0x5e94e7*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x5e94f1*/
  {
    v10 = operator new(0x690u); /*0x5e94fd*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x5e950b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x5e951c*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x5e951e*/
  }
  v7 = *(_QWORD *)(v6 + 1664); /*0x5e9525*/
  v8 = qword_905FD0; /*0x5e952c*/
  if ( !qword_905FD0 ) /*0x5e9536*/
  {
    v11 = operator new(0x6E8u); /*0x5e9542*/
    qword_905FD0 = sub_2723A0(v11); /*0x5e9550*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5e9561*/
    v8 = qword_905FD0; /*0x5e9564*/
  }
  EditorUI_addObjectsToSmartTemplate(*(_QWORD *)(*(_QWORD *)(v8 + 568) + 14968LL), v7, v3); /*0x5e957f*/
  return sub_5E8FB0(a1, 0); /*0x5e9589*/
}

// [10/12] Address: 0x5e9610
// Method: SetupSmartBlockLayer::selectArtClosed
__int64 __fastcall SetupSmartBlockLayer_selectArtClosed(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 680); /*0x5e9610*/
  *(_DWORD *)(a1 + 16) = result; /*0x5e9616*/
  return result; /*0x5e9619*/
}

// [11/12] Address: 0x5e9620
// Method: SetupSmartBlockLayer::onSelectTemplate
__int64 SetupSmartBlockLayer_onSelectTemplate()
{
  __int64 v0; // rax
  __int64 v1; // rax

  v0 = GJSearchObject_create(101); /*0x5e9629*/
  *(_BYTE *)(v0 + 462) = 1; /*0x5e9631*/
  v1 = sub_3DE4D0(v0); /*0x5e9638*/
  return sub_3E7B80(v1); /*0x5e9640*/
}

// [12/12] Address: 0x5e9650
// Method: SetupSmartBlockLayer::keyBackClicked
__int64 __fastcall SetupSmartBlockLayer_keyBackClicked(__int64 a1)
{
  return sub_5E8FB0(a1 - 336, 0);
}
