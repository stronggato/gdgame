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

// Address: 0x5e7580
// Method: SetupSmartBlockLayer::init
// Hidden C++ exception states: #wind=12
bool __fastcall SetupSmartBlockLayer_init(__int64 a1, cocos2d::CCObject *a2, cocos2d::CCObject *a3)
{
  bool result; // al
  cocos2d::CCObject *v7; // rcx
  __int64 v8; // rcx
  _BYTE *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int i; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  struct cocos2d::CCLabelBMFont *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  cocos2d::CCObject *v25; // rbx
  __int64 v26; // rax
  cocos2d::CCObject *v27; // rbx
  cocos2d::CCObject *v28; // r13
  __int64 v29; // rax
  cocos2d::CCObject *v30; // rbx
  cocos2d::CCObject *v31; // r12
  __int64 v32; // rax
  cocos2d::CCObject *v33; // rbx
  cocos2d::CCObject *v34; // r15
  __int64 v35; // rax
  cocos2d::CCObject *v36; // rbx
  cocos2d::CCObject *v37; // rsi
  cocos2d::CCObject *v38; // rbx
  cocos2d::CCObject *v39; // rdi
  cocos2d::CCObject *v40; // rbx
  cocos2d::CCObject *v41; // rax
  struct cocos2d::CCMenu *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  const char *v48; // rdx
  __int64 v49; // r8
  char *v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rax
  struct cocos2d::CCMenuItem *v85; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v86; // [rsp+88h] [rbp-78h] BYREF
  __int128 v87; // [rsp+90h] [rbp-70h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-60h]
  __int64 v89; // [rsp+A8h] [rbp-58h]
  _BYTE v90[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v91[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v92; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v93; // [rsp+D0h] [rbp-30h]
  __int64 v94; // [rsp+D8h] [rbp-28h]
  float v95; // [rsp+168h] [rbp+68h] BYREF
  float v96; // [rsp+16Ch] [rbp+6Ch]

  result = FLAlertLayer_init(a1, 150);
  if ( !result )
    return result;
  if ( a2 )
  {
    *(_QWORD *)(a1 + 688) = a2;
    v7 = a2;
LABEL_6:
    cocos2d::CCObject::retain(v7);
    goto LABEL_7;
  }
  if ( a3 )
  {
    *(_QWORD *)(a1 + 696) = a3;
    v7 = a3;
    goto LABEL_6;
  }
LABEL_7:
  v8 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v85 = (struct cocos2d::CCMenuItem *)operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v85);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v8 = *(_QWORD *)&qword_905FB0;
  }
  v9 = *(_BYTE **)(v8 + 1664);
  if ( v9 )
  {
    *(_BYTE *)(a1 + 673) = v9[130];
    *(_BYTE *)(a1 + 674) = v9[128];
    *(_BYTE *)(a1 + 675) = v9[129];
    *(_BYTE *)(a1 + 678) = v9[131];
  }
  v10 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v85 = (struct cocos2d::CCMenuItem *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v85);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v10 = qword_905FD0;
  }
  *(_BYTE *)(a1 + 676) = GameManager_getGameVariable(v10, "0131");
  v11 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v85 = (struct cocos2d::CCMenuItem *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v85);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v11 = qword_905FD0;
  }
  *(_BYTE *)(a1 + 677) = GameManager_getGameVariable(v11, "0132");
  v13 = *(_QWORD *)(a1 + 688);
  if ( v13 )
  {
    *(_BYTE *)(a1 + 672) = *(_BYTE *)(v13 + 1360);
  }
  else
  {
    *(_BYTE *)(a1 + 672) = 1;
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 696)); ++i )
    {
      if ( !*((_BYTE *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 696), i) + 1360) )
        *(_BYTE *)(a1 + 672) = 0;
    }
  }
  *(_BYTE *)(a1 + 596) = 1;
  v15 = cocos2d::CCDirector::sharedDirector(v12);
  cocos2d::CCDirector::getWinSize(v15, &v95);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v92, 0.0, 0.0, 80.0, 80.0);
  v17 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v16);
  v18 = *v17;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v85, 300.0, 240.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v18 + 312))(v17, v19);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v17,
    4294967294LL);
  v20 = *v17;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, v95 * 0.5, v96 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v20 + 184))(v17, v21);
  v22 = cocos2d::CCLabelBMFont::create("Create blocks", "goldFont.fnt");
  (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v22);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v22 + 160LL))(v22);
  v23 = *(_QWORD *)v22;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v85, v95 * 0.5, (float)((float)(v96 * 0.5) + 120.0) - 18.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v23 + 184))(v22, v24);
  v85 = (struct cocos2d::CCMenuItem *)operator new(0x2C8u);
  v25 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v85);
  if ( v25 )
  {
    if ( ButtonSprite_init(
           (__int64)v25,
           (__int64)"Back",
           25,
           0,
           1056964608,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_05.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v25);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v25 + 8LL))(v25, 1);
      LODWORD(v25) = 0;
    }
  }
  v85 = CCMenuItemSpriteExtra_create((int)v25, 0, a1, (__int64)sub_5E8FB0);
  v86 = (__int128 *)operator new(0x2C8u);
  v26 = ButtonSprite_ButtonSprite((__int64)v86);
  v27 = (cocos2d::CCObject *)v26;
  if ( v26 )
  {
    if ( ButtonSprite_init(
           v26,
           (__int64)&dword_71EF64,
           25,
           0,
           1056964608,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v27);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v27 + 8LL))(v27, 1);
      LODWORD(v27) = 0;
    }
  }
  v28 = CCMenuItemSpriteExtra_create((int)v27, 0, a1, (__int64)SetupSmartBlockLayer_onCreate);
  v86 = (__int128 *)operator new(0x2C8u);
  v29 = ButtonSprite_ButtonSprite((__int64)v86);
  v30 = (cocos2d::CCObject *)v29;
  if ( v29 )
  {
    if ( ButtonSprite_init(
           v29,
           (__int64)"Template",
           25,
           0,
           1056964608,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_02.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v30);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v30 + 8LL))(v30, 1);
      LODWORD(v30) = 0;
    }
  }
  v31 = CCMenuItemSpriteExtra_create((int)v30, 0, a1, (__int64)SetupSmartBlockLayer_onCreateTemplate);
  v86 = (__int128 *)operator new(0x2C8u);
  v32 = ButtonSprite_ButtonSprite((__int64)v86);
  v33 = (cocos2d::CCObject *)v32;
  if ( v32 )
  {
    if ( ButtonSprite_init(
           v32,
           (__int64)"Special",
           25,
           0,
           1056964608,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_02.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v33);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v33 + 8LL))(v33, 1);
      LODWORD(v33) = 0;
    }
  }
  v34 = CCMenuItemSpriteExtra_create((int)v33, 0, a1, (__int64)sub_5E95A0);
  v86 = (__int128 *)operator new(0x2C8u);
  v35 = ButtonSprite_ButtonSprite((__int64)v86);
  v36 = (cocos2d::CCObject *)v35;
  if ( v35 )
  {
    if ( ButtonSprite_init(
           v35,
           (__int64)"Browser",
           25,
           0,
           1056964608,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v36);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v36 + 8LL))(v36, 1);
      LODWORD(v36) = 0;
    }
  }
  v37 = CCMenuItemSpriteExtra_create((int)v36, 0, a1, (__int64)SetupSmartBlockLayer_onSelectTemplate);
  v86 = (__int128 *)operator new(0x2C8u);
  v38 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v86);
  if ( v38 )
  {
    if ( ButtonSprite_init(
           (__int64)v38,
           (__int64)"Paste\nTemplate",
           25,
           0,
           1056964608,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v38);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v38 + 8LL))(v38, 1);
      LODWORD(v38) = 0;
    }
  }
  v39 = CCMenuItemSpriteExtra_create((int)v38, 0, a1, (__int64)sub_5E88F0);
  v86 = (__int128 *)operator new(0x2C8u);
  v40 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v86);
  if ( v40 )
  {
    if ( ButtonSprite_init(
           (__int64)v40,
           (__int64)"Create\nAll",
           25,
           0,
           1056964608,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v40);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v40 + 8LL))(v40, 1);
      LODWORD(v40) = 0;
    }
  }
  v41 = CCMenuItemSpriteExtra_create((int)v40, 0, a1, (__int64)sub_5E8D00);
  v42 = cocos2d::CCMenu::create(v85, v28, v31, v34, v37, v41, v39, 0);
  *(_QWORD *)(a1 + 552) = v42;
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v42,
    10);
  cocos2d::CCMenu::alignItemsHorizontally(*(cocos2d::CCMenu **)(a1 + 552));
  v43 = **(_QWORD **)(a1 + 552);
  v44 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, v95 * 0.5, (float)((float)(v96 * 0.5) - 120.0) + 24.0);
  (*(void (__fastcall **)(__int64, __int64))(v43 + 184))(v44, v45);
  v86 = &v87;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v46 = sub_3C460(528);
  *(_QWORD *)&v87 = v46;
  v88 = 517;
  v89 = 527;
  v47 = v46;
  v48 = "<cg>Auto-builds</c> structures with given templates.\n"
        "Use <cy>Browser</c> to start and select templates.\n"
        "Click <cl>Template</c> with a template made to save it.\n"
        "Create structures with these blocks and click <cp>Create</c> to paste the selected template.\n"
        "<cr>Reference Only</c> blocks are used as reference positions.\n"
        "<co>Allow Rotation, Flip X, and Flip Y</c> allow rotating the design.\n"
        "<ca>Dont Delete</c> keeps these blocks when template is pasted.\n"
        "<cy>The tool is in beta and will be enhanced in future updates.</c>";
  v49 = 4;
  do
  {
    *(_OWORD *)v47 = *(_OWORD *)v48;
    *(_OWORD *)(v47 + 16) = *((_OWORD *)v48 + 1);
    *(_OWORD *)(v47 + 32) = *((_OWORD *)v48 + 2);
    *(_OWORD *)(v47 + 48) = *((_OWORD *)v48 + 3);
    *(_OWORD *)(v47 + 64) = *((_OWORD *)v48 + 4);
    *(_OWORD *)(v47 + 80) = *((_OWORD *)v48 + 5);
    *(_OWORD *)(v47 + 96) = *((_OWORD *)v48 + 6);
    v47 += 128;
    *(_OWORD *)(v47 - 16) = *((_OWORD *)v48 + 7);
    v48 += 128;
    --v49;
  }
  while ( v49 );
  *(_DWORD *)v47 = *(_DWORD *)v48;
  *(_BYTE *)(v47 + 4) = v48[4];
  *(_BYTE *)(v46 + 517) = 0;
  v92 = 0;
  v93 = 4;
  v94 = 15;
  strcpy((char *)&v92, "Help");
  v50 = InfoAlertButton_create((__int64)&v92, (__int64)&v87);
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v50);
  v51 = *(_QWORD *)v50;
  v52 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v86,
    (float)((float)(v95 * 0.5) - 150.0) + 18.0,
    (float)((float)(v96 * 0.5) + 120.0) - 18.0);
  cocos2d::CCNode::convertToNodeSpace(v52, &v85, v53);
  (*(void (__fastcall **)(char *, __int64))(v51 + 184))(v50, v54);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v90, (float)(v95 * 0.5) - 60.0, (float)(v96 * 0.5) + 70.0);
  v86 = &v87;
  v88 = 14;
  v89 = 15;
  strcpy((char *)&v87, "Reference Only");
  HIBYTE(v87) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -0.0);
  cocos2d::CCPoint::operator+(v90, &v85, v55);
  v56 = *(_QWORD *)(a1 + 584);
  v57 = *(_QWORD *)(a1 + 552);
  LOBYTE(v50) = *(_BYTE *)(a1 + 672);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v92, 8.0, 0.0);
  sub_6D440(
    (unsigned int)&v87,
    (unsigned int)sub_5E85B0,
    (unsigned __int8)v50,
    v57,
    (__int64)&v85,
    a1,
    v56,
    1058642330,
    1051931443,
    0,
    v58,
    (__int64)&qword_6FFF68,
    0,
    0,
    0);
  *(_QWORD *)&v92 = &v87;
  v88 = 14;
  v89 = 15;
  strcpy((char *)&v87, "Allow Rotation");
  HIBYTE(v87) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -22.0);
  cocos2d::CCPoint::operator+(v90, &v85, v59);
  v60 = *(_QWORD *)(a1 + 584);
  v61 = *(_QWORD *)(a1 + 552);
  LOBYTE(v50) = *(_BYTE *)(a1 + 673);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, 8.0, 0.0);
  sub_6D440(
    (unsigned int)&v87,
    (unsigned int)sub_5E8640,
    (unsigned __int8)v50,
    v61,
    (__int64)&v85,
    a1,
    v60,
    1058642330,
    1051931443,
    0,
    v62,
    (__int64)&qword_6FFF68,
    0,
    0,
    0);
  *(_QWORD *)&v92 = &v87;
  v88 = 12;
  v89 = 15;
  strcpy((char *)&v87, "Allow Flip X");
  BYTE13(v87) = 0;
  HIWORD(v87) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -44.0);
  cocos2d::CCPoint::operator+(v90, &v85, v63);
  v64 = *(_QWORD *)(a1 + 584);
  v65 = *(_QWORD *)(a1 + 552);
  LOBYTE(v50) = *(_BYTE *)(a1 + 674);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, 8.0, 0.0);
  v67 = sub_6D440(
          (unsigned int)&v87,
          (unsigned int)sub_5E86C0,
          (unsigned __int8)v50,
          v65,
          (__int64)&v85,
          a1,
          v64,
          1058642330,
          1051931443,
          0,
          v66,
          (__int64)&qword_6FFF68,
          0,
          0,
          0);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 64LL))(v67, 3);
  *(_QWORD *)&v92 = &v87;
  v88 = 12;
  v89 = 15;
  strcpy((char *)&v87, "Allow Flip Y");
  BYTE13(v87) = 0;
  HIWORD(v87) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -66.0);
  cocos2d::CCPoint::operator+(v90, &v85, v68);
  v69 = *(_QWORD *)(a1 + 584);
  v70 = *(_QWORD *)(a1 + 552);
  LOBYTE(v50) = *(_BYTE *)(a1 + 675);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, 8.0, 0.0);
  v72 = sub_6D440(
          (unsigned int)&v87,
          (unsigned int)sub_5E86C0,
          (unsigned __int8)v50,
          v70,
          (__int64)&v85,
          a1,
          v69,
          1058642330,
          1051931443,
          0,
          v71,
          (__int64)&qword_6FFF68,
          0,
          0,
          0);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v72 + 64LL))(v72, 4);
  *(_QWORD *)&v92 = &v87;
  v88 = 14;
  v89 = 15;
  strcpy((char *)&v87, "Ignore Corners");
  HIBYTE(v87) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -88.0);
  cocos2d::CCPoint::operator+(v90, &v85, v73);
  v74 = *(_QWORD *)(a1 + 584);
  v75 = *(_QWORD *)(a1 + 552);
  LOBYTE(v50) = *(_BYTE *)(a1 + 678);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, 8.0, 0.0);
  sub_6D440(
    (unsigned int)&v87,
    (unsigned int)sub_5E8870,
    (unsigned __int8)v50,
    v75,
    (__int64)&v85,
    a1,
    v74,
    1058642330,
    1051931443,
    0,
    v76,
    (__int64)&qword_6FFF68,
    0,
    0,
    0);
  *(_QWORD *)&v92 = &v87;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  *(_QWORD *)&v87 = sub_3C460(32);
  v88 = 23;
  v89 = 31;
  strcpy((char *)v87, "Use nearby as reference");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -110.0);
  cocos2d::CCPoint::operator+(v90, &v85, v77);
  v78 = *(_QWORD *)(a1 + 584);
  v79 = *(_QWORD *)(a1 + 552);
  LOBYTE(v50) = *(_BYTE *)(a1 + 676);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, 8.0, 0.0);
  sub_6D440(
    (unsigned int)&v87,
    (unsigned int)sub_5E8790,
    (unsigned __int8)v50,
    v79,
    (__int64)&v85,
    a1,
    v78,
    1058642330,
    1051931443,
    0,
    v80,
    (__int64)&qword_6FFF68,
    0,
    0,
    0);
  *(_QWORD *)&v92 = &v87;
  v88 = 11;
  v89 = 15;
  *(_QWORD *)&v87 = 0x6C656420746E6F44LL;
  *((_QWORD *)&v87 + 1) = 6648933;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -132.0);
  cocos2d::CCPoint::operator+(v90, &v85, v81);
  v82 = *(_QWORD *)(a1 + 584);
  v83 = *(_QWORD *)(a1 + 552);
  LOBYTE(v50) = *(_BYTE *)(a1 + 677);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, 8.0, 0.0);
  sub_6D440(
    (unsigned int)&v87,
    (unsigned int)sub_5E8800,
    (unsigned __int8)v50,
    v83,
    (__int64)&v85,
    a1,
    v82,
    1058642330,
    1051931443,
    0,
    v84,
    (__int64)&qword_6FFF68,
    0,
    0,
    0);
  *(_DWORD *)(a1 + 640) = -1;
  return 1;
}

// Address: 0x377130
// Method: SetupSmartBlockLayer::onPasteTemplate
// Hidden C++ exception states: #wind=4
char __fastcall SetupSmartBlockLayer_onPasteTemplate(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i si128; // xmm6
  int v12; // edi
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rax
  void *v16; // rcx
  void **v17; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v18[8]; // [rsp+88h] [rbp-78h] BYREF
  void **v19; // [rsp+90h] [rbp-70h] BYREF
  float v20[2]; // [rsp+98h] [rbp-68h] BYREF
  void **v21; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v22; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v26; // [rsp+D8h] [rbp-28h]

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1134231552, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    *(_OWORD *)Block = 0;
    Block[0] = (void *)sub_3C460(32);
    v26.m128i_i64[0] = 20;
    v26.m128i_i64[1] = 31;
    strcpy((char *)Block[0], "Setup Follow Command");
    sub_606E80(a1, Block);
    *(_OWORD *)Block = 0;
    v26.m128i_i64[0] = 2;
    v26.m128i_i64[1] = 15;
    strcpy((char *)Block, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)Block);
    v17 = Block;
    *(_OWORD *)Block = 0;
    v26 = 0u;
    Block[0] = (void *)sub_3C460(240);
    v26.m128i_i64[0] = 234;
    v26.m128i_i64[1] = 239;
    strcpy(
      (char *)Block[0],
      "Make a group of objects <cg>follow</c> a target object.\n"
      "<cy>Target Group ID</c> is the group of objects that follow the object using <cl>Follow Group ID</c>. Make sure th"
      "at this group only contains one object or has a group ID parent.");
    v22 = 0;
    v23 = 4;
    v24 = 15;
    strcpy((char *)&v22, "Help");
    sub_6070A0(a1, &v22, Block);
    sub_607470(a1);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v20);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v18, v20[0] * 0.5, v20[1] * 0.5);
    v21 = Block;
    Block[1] = algn_3A64 + 1;
    v26.m128i_i64[0] = 10;
    v26.m128i_i64[1] = 15;
    Block[0] = (void *)0x6D69542065766F4DLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, -110.0, 90.0);
    cocos2d::CCPoint::operator+(v18, &v17, v8);
    sub_6088F0(
      (_DWORD)a1,
      10,
      (unsigned int)Block,
      (unsigned int)&v17,
      1061997773,
      0,
      1,
      10,
      0,
      0,
      1092616192,
      0,
      0,
      0,
      2,
      0);
    v19 = Block;
    *(_OWORD *)Block = 0;
    v26.m128i_i64[0] = 6;
    v26.m128i_i64[1] = 15;
    strcpy((char *)Block, "X Mod:");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, -110.0, 30.0);
    cocos2d::CCPoint::operator+(v18, &v17, v9);
    sub_6088F0(
      (_DWORD)a1,
      72,
      (unsigned int)Block,
      (unsigned int)&v17,
      1061997773,
      0,
      1,
      10,
      0,
      -1082130432,
      1065353216,
      0,
      0,
      0,
      2,
      0);
    v19 = Block;
    *(_OWORD *)Block = 0;
    v26.m128i_i64[0] = 6;
    v26.m128i_i64[1] = 15;
    strcpy((char *)Block, "Y Mod:");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, -110.0, -30.0);
    cocos2d::CCPoint::operator+(v18, &v17, v10);
    sub_6088F0(
      (_DWORD)a1,
      73,
      (unsigned int)Block,
      (unsigned int)&v17,
      1061997773,
      0,
      1,
      10,
      0,
      -1082130432,
      1065353216,
      0,
      0,
      0,
      2,
      0);
    si128 = _mm_load_si128((const __m128i *)&xmmword_830FC0);
    v26 = si128;
    strcpy((char *)Block, "Target Group ID");
    v12 = (_DWORD)a1 + 544;
    if ( !a1 )
      v12 = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, 100.0, 60.0);
    cocos2d::CCPoint::operator+(v18, &v17, v13);
    sub_3C3E00((_DWORD)a1, v12, 1, 51, (__int64)Block, (__int64)&v17, 1061997773, 6, 0, 0, 0);
    if ( v26.m128i_i64[1] > 0xFuLL )
    {
      v14 = Block[0];
      if ( (unsigned __int64)(v26.m128i_i64[1] + 1) >= 0x1000 )
      {
        v14 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v14);
      si128 = _mm_load_si128((const __m128i *)&xmmword_830FC0);
    }
    v26 = si128;
    strcpy((char *)Block, "Follow Group ID");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, 100.0, -10.0);
    cocos2d::CCPoint::operator+(v18, &v17, v15);
    sub_3C3E00((_DWORD)a1, v12, 1, 71, (__int64)Block, (__int64)&v17, 1061997773, 6, 0, 0, 0);
    if ( v26.m128i_i64[1] > 0xFuLL )
    {
      v16 = Block[0];
      if ( (unsigned __int64)(v26.m128i_i64[1] + 1) >= 0x1000 )
      {
        v16 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v16);
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}
