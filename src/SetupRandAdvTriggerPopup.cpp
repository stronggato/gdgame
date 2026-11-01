#include <Geode/binding/SetupRandAdvTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x523a10
// Method: SetupRandAdvTriggerPopup::onAddChance
// Hidden C++ exception states: #wind=3
void __fastcall SetupRandAdvTriggerPopup_onAddChance(__int64 *a1, cocos2d::CCArray **a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  size_t *v6; // r8
  void *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  const char *v11; // rcx
  int v12; // ecx
  const char *v13; // rcx
  unsigned int v14; // r8d
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct cocos2d::CCObject *v19; // rdx
  void *v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h]
  int v23; // [rsp+48h] [rbp-38h]
  _QWORD *v24; // [rsp+50h] [rbp-30h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __m128i si128; // [rsp+68h] [rbp-18h]

  *(_OWORD *)Block = 0; /*0x523a40*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x523a4c*/
  LOBYTE(Block[0]) = 0; /*0x523a51*/
  v4 = *a1; /*0x523a55*/
  v5 = *((int *)a1 + 6); /*0x523a58*/
  if ( (int)v5 < (int)((a1[1] - *a1) >> 5) ) /*0x523a69*/
  {
    *((_DWORD *)a1 + 6) = v5 + 1; /*0x523a71*/
    v6 = (size_t *)(32 * v5 + v4); /*0x523a78*/
    if ( Block != (void **)v6 ) /*0x523a82*/
    {
      v7 = v6; /*0x523a84*/
      if ( v6[3] > 0xF ) /*0x523a8c*/
        v7 = (void *)*v6; /*0x523a8e*/
      sub_3F5A0(Block, v7, v6[2]); /*0x523a99*/
    }
  }
  v8 = (_QWORD *)a1[4]; /*0x523a9e*/
  v21 = 0; /*0x523aa5*/
  v22 = 0; /*0x523aaa*/
  v23 = 0; /*0x523ab2*/
  v24 = v8; /*0x523ab9*/
  sub_1C2580(Block, &word_70806C, &v21); /*0x523acc*/
  v9 = 0; /*0x523ad2*/
  v10 = v23; /*0x523ae3*/
  if ( v23 < (int)((__int64)(*((_QWORD *)&v21 + 1) - v21) >> 5) ) /*0x523ae9*/
  {
    ++v23; /*0x523af0*/
    v11 = (const char *)(32 * v10 + v21); /*0x523af7*/
    if ( *((_QWORD *)v11 + 3) > 0xFu ) /*0x523b00*/
      v11 = *(const char **)v11; /*0x523b02*/
    v9 = (unsigned int)atoi(v11); /*0x523b0b*/
  }
  cocos2d::CCArray::removeAllObjects(*a2); /*0x523b10*/
  if ( (int)v9 > 0 ) /*0x523b18*/
  {
    v12 = v23; /*0x523b32*/
    while ( v12 >= (int)((__int64)(*((_QWORD *)&v21 + 1) - v21) >> 5) ) /*0x523b51*/
    {
LABEL_31:
      if ( !--v9 ) /*0x523c2f*/
        goto LABEL_32; /*0x523c2f*/
    }
    v23 = v12 + 1; /*0x523b5c*/
    v13 = (const char *)(32LL * v12 + v21); /*0x523b63*/
    if ( *((_QWORD *)v13 + 3) > 0xFu ) /*0x523b6c*/
      v13 = *(const char **)v13; /*0x523b6e*/
    v14 = atoi(v13); /*0x523b77*/
    if ( !v14 || !v24 ) /*0x523b89*/
    {
LABEL_30:
      v12 = v23; /*0x523c28*/
      goto LABEL_31; /*0x523c28*/
    }
    v15 = (__int64 *)(v24[1834] /*0x523bd3*/
                    + 16
                    * (v24[1837]
                     & (0x100000001B3LL
                      * (((unsigned __int64)v14 >> 24)
                       ^ (0x100000001B3LL
                        * ((0x100000001B3LL
                          * ((0x100000001B3LL * ((unsigned __int8)v14 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v14)))
                         ^ BYTE2(v14)))))));
    v16 = v15[1]; /*0x523bda*/
    v17 = v24[1832]; /*0x523bde*/
    if ( v16 != v17 ) /*0x523be8*/
    {
      v18 = *v15; /*0x523bea*/
      if ( v14 == *(_DWORD *)(v16 + 16) ) /*0x523bf1*/
      {
LABEL_23:
        if ( !v16 ) /*0x523c09*/
          v16 = v24[1832]; /*0x523c09*/
        if ( v16 == v17 ) /*0x523c10*/
          v19 = 0; /*0x523c18*/
        else
          v19 = *(struct cocos2d::CCObject **)(v16 + 24); /*0x523c12*/
        if ( v19 ) /*0x523c1d*/
          cocos2d::CCArray::addObject(*a2, v19); /*0x523c22*/
        goto LABEL_30; /*0x523c22*/
      }
      while ( v16 != v18 ) /*0x523bf6*/
      {
        v16 = *(_QWORD *)(v16 + 8); /*0x523bf8*/
        if ( v14 == *(_DWORD *)(v16 + 16) ) /*0x523c00*/
          goto LABEL_23; /*0x523c00*/
      }
    }
    v16 = 0; /*0x523c04*/
    goto LABEL_23; /*0x523c04*/
  }
LABEL_32:
  sub_74F50(&v21); /*0x523c35*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x523c47*/
  {
    v20 = Block[0]; /*0x523c4c*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x523c5a*/
    {
      v20 = (void *)*((_QWORD *)Block[0] - 1); /*0x523c60*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v20 - 8) > 0x1F ) /*0x523c6f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x523c84*/
    }
    j_j_free(v20); /*0x523c8b*/
  }
}

// [2/5] Address: 0x5cda70
// Method: SetupRandAdvTriggerPopup::~SetupRandAdvTriggerPopup
cocos2d::CCNode *__fastcall SetupRandAdvTriggerPopup__dtor_SetupRandAdvTriggerPopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cda86*/
  *((_QWORD *)Block + 40) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cda90*/
  *((_QWORD *)Block + 41) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cda9e*/
  *((_QWORD *)Block + 42) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdaac*/
  *((_QWORD *)Block + 43) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdaba*/
  *((_QWORD *)Block + 44) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdac8*/
  *((_QWORD *)Block + 51) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdad6*/
  *((_QWORD *)Block + 54) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdae4*/
  *((_QWORD *)Block + 68) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdaf2*/
  *((_QWORD *)Block + 83) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdb00*/
  *((_QWORD *)Block + 84) = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdb0e*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 126); /*0x5cdb15*/
  if ( v4 ) /*0x5cdb1f*/
    cocos2d::CCObject::release(v4); /*0x5cdb21*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5cdb2a*/
  if ( (a2 & 1) != 0 ) /*0x5cdb34*/
    j_j_free(Block); /*0x5cdb3e*/
  return Block; /*0x5cdb46*/
}

// [3/5] Address: 0x5cdb70
// Method: SetupRandAdvTriggerPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupRandAdvTriggerPopup_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x428u); /*0x5cdb94*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5cdb9f*/
  *v4 = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdbab*/
  v4[40] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdbb5*/
  v4[41] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdbc3*/
  v4[42] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdbd1*/
  v4[43] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdbdf*/
  v4[44] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdbed*/
  v4[51] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdbfb*/
  v4[54] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdc09*/
  v4[68] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdc17*/
  v4[83] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdc25*/
  v4[84] = &SetupRandAdvTriggerPopup::`vftable'; /*0x5cdc33*/
  *((_BYTE *)v4 + 1000) = 0; /*0x5cdc3a*/
  v4[126] = 0; /*0x5cdc43*/
  v4[127] = 0; /*0x5cdc4a*/
  v4[128] = 0; /*0x5cdc51*/
  *((_DWORD *)v4 + 258) = 0; /*0x5cdc58*/
  *((_BYTE *)v4 + 1036) = 0; /*0x5cdc5e*/
  v4[130] = 0; /*0x5cdc65*/
  v4[131] = 0; /*0x5cdc6c*/
  *((_DWORD *)v4 + 264) = 0; /*0x5cdc73*/
  if ( (unsigned __int8)sub_5CDCD0(v4, a1, a2) ) /*0x5cdc82*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5cdc8e*/
    return v4; /*0x5cdc94*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5cdca8*/
    return 0; /*0x5cdcab*/
  }
}

// [4/5] Address: 0x5ce9c0
// Method: SetupRandAdvTriggerPopup::onClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupRandAdvTriggerPopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+30h] [rbp+8h]

  *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 608LL) = 0; /*0x5ce9d7*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1016) + 1032LL))(*(_QWORD *)(a1 + 1016), 0); /*0x5ce9ee*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 608LL) = 0; /*0x5ce9fb*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1024) + 1032LL))(*(_QWORD *)(a1 + 1024), 0); /*0x5cea12*/
  v2 = qword_905FD0; /*0x5cea18*/
  if ( !qword_905FD0 ) /*0x5cea22*/
  {
    v4 = operator new(0x6E8u); /*0x5cea2e*/
    qword_905FD0 = sub_2723A0(v4); /*0x5cea3c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5cea4d*/
    v2 = qword_905FD0; /*0x5cea4f*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 568) + 14873LL) = 1; /*0x5cea5d*/
  return SetupTriggerPopup_onClose(a1); /*0x5cea6a*/
}

// [5/5] Address: 0x5cf630
// Method: SetupRandAdvTriggerPopup::callRemoveFromGroup
__int64 __fastcall SetupRandAdvTriggerPopup_callRemoveFromGroup(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  _DWORD *v7; // rcx
  struct cocos2d::CCObject *v8; // rax
  int v9; // edx
  struct cocos2d::CCObject *v10; // rbp
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  _DWORD *v13; // rcx
  __int64 result; // rax

  cocos2d::CCNode::unschedule(a1, SetupRandAdvTriggerPopup_callRemoveFromGroup); /*0x5cf649*/
  v2 = *(_QWORD *)(a1 + 680); /*0x5cf64f*/
  v3 = *(_DWORD *)(a1 + 1032); /*0x5cf656*/
  *(_BYTE *)(a1 + 1036) = 0; /*0x5cf65c*/
  *(_BYTE *)(a1 + 1000) = 1; /*0x5cf663*/
  if ( v2 ) /*0x5cf66d*/
  {
    v4 = *(_QWORD *)(v2 + 1856); /*0x5cf66f*/
    v5 = 0; /*0x5cf676*/
    v6 = (*(_QWORD *)(v2 + 1864) - v4) >> 4; /*0x5cf682*/
    if ( v6 ) /*0x5cf689*/
    {
      v7 = *(_DWORD **)(v2 + 1856); /*0x5cf68f*/
      while ( *v7 != v3 ) /*0x5cf694*/
      {
        v5 = (unsigned int)(v5 + 1); /*0x5cf696*/
        v7 += 4; /*0x5cf698*/
        if ( (int)v5 >= v6 ) /*0x5cf6a2*/
          goto LABEL_16; /*0x5cf6a2*/
      }
      memmove( /*0x5cf6c1*/
        (void *)(v4 + 16LL * (int)v5),
        (const void *)(v4 + 16LL * (int)v5 + 16),
        *(_QWORD *)(v2 + 1864) - (v4 + 16LL * (int)v5 + 16));
      *(_QWORD *)(v2 + 1864) -= 16LL; /*0x5cf6c6*/
    }
  }
  else if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ) /*0x5cf6da*/
  {
    do /*0x5cf76b*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v2); /*0x5cf6f9*/
      v9 = 0; /*0x5cf6ff*/
      v10 = v8; /*0x5cf701*/
      v11 = *((_QWORD *)v8 + 232); /*0x5cf704*/
      v12 = (*((_QWORD *)v8 + 233) - v11) >> 4; /*0x5cf715*/
      if ( v12 ) /*0x5cf71c*/
      {
        v13 = (_DWORD *)*((_QWORD *)v8 + 232); /*0x5cf71e*/
        while ( *v13 != v3 ) /*0x5cf723*/
        {
          ++v9; /*0x5cf725*/
          v13 += 4; /*0x5cf727*/
          if ( v9 >= v12 ) /*0x5cf731*/
            goto LABEL_15; /*0x5cf731*/
        }
        memmove( /*0x5cf74d*/
          (void *)(v11 + 16LL * v9),
          (const void *)(v11 + 16LL * v9 + 16),
          *((_QWORD *)v8 + 233) - (v11 + 16LL * v9 + 16));
        *((_QWORD *)v10 + 233) -= 16LL; /*0x5cf752*/
      }
LABEL_15:
      LODWORD(v2) = v2 + 1; /*0x5cf75a*/
    }
    while ( (unsigned int)v2 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5cf76b*/
  }
LABEL_16:
  result = sub_5CEA80(a1, v5); /*0x5cf772*/
  *(_DWORD *)(a1 + 1032) = 0; /*0x5cf77f*/
  return result; /*0x5cf77a*/
}
