#include <Geode/binding/AutoSaveSettingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x99c10
// Method: AutoSaveSettingsLayer::~AutoSaveSettingsLayer
cocos2d::CCNode *__fastcall AutoSaveSettingsLayer__dtor_AutoSaveSettingsLayer(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &AutoSaveSettingsLayer::`vftable'; /*0x99c24*/
  *((_QWORD *)Block + 40) = &AutoSaveSettingsLayer::`vftable'; /*0x99c30*/
  *((_QWORD *)Block + 41) = &AutoSaveSettingsLayer::`vftable'; /*0x99c3e*/
  *((_QWORD *)Block + 42) = &AutoSaveSettingsLayer::`vftable'; /*0x99c4c*/
  *((_QWORD *)Block + 43) = &AutoSaveSettingsLayer::`vftable'; /*0x99c5a*/
  *((_QWORD *)Block + 44) = &AutoSaveSettingsLayer::`vftable'; /*0x99c68*/
  *((_QWORD *)Block + 51) = &AutoSaveSettingsLayer::`vftable'; /*0x99c76*/
  *((_QWORD *)Block + 54) = &AutoSaveSettingsLayer::`vftable'; /*0x99c84*/
  *((_QWORD *)Block + 68) = &AutoSaveSettingsLayer::`vftable'; /*0x99c92*/
  *((_QWORD *)Block + 83) = &AutoSaveSettingsLayer::`vftable'; /*0x99ca0*/
  *((_QWORD *)Block + 84) = &AutoSaveSettingsLayer::`vftable'; /*0x99cae*/
  sub_3C310((char *)Block + 1016); /*0x99cbc*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x99cc4*/
  if ( (a2 & 1) != 0 ) /*0x99ccc*/
    j_j_free(Block); /*0x99cd6*/
  return Block; /*0x99cdb*/
}

// [2/3] Address: 0x9ae30
// Method: AutoSaveSettingsLayer::getValue
// Hidden C++ exception states: #wind=5
float __fastcall AutoSaveSettingsLayer_getValue(__int64 a1, int a2)
{
  double Value; // xmm0_8
  __int64 v3; // rcx
  char *v4; // rdx
  __int64 v5; // rbx
  cocos2d::CCString *v6; // rax
  int v7; // ebx
  void *v8; // r8
  int v9; // eax
  __int64 v10; // rbx
  cocos2d::CCString *v11; // rax
  void *v12; // r8
  void *v14; // [rsp+30h] [rbp-30h]
  void *v15; // [rsp+30h] [rbp-30h]
  void *v16; // [rsp+30h] [rbp-30h]
  void *v17; // [rsp+30h] [rbp-30h]
  void *Block[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  unsigned __int64 v20; // [rsp+50h] [rbp-10h]

  switch ( a2 ) /*0x9ae4e*/
  {
    case -4: /*0x9ae4e*/
      v10 = qword_905FD0; /*0x9b018*/
      if ( !qword_905FD0 ) /*0x9b022*/
      {
        v17 = operator new(0x6E8u); /*0x9b02e*/
        qword_905FD0 = sub_2723A0(v17); /*0x9b03b*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9b04c*/
        v10 = qword_905FD0; /*0x9b04e*/
      }
      *(_OWORD *)Block = 0; /*0x9b058*/
      v19 = 3; /*0x9b05c*/
      v20 = 15; /*0x9b064*/
      LODWORD(Block[0]) = 6256231; /*0x9b072*/
      sub_43D80(Block, "0187", 4u); /*0x9b095*/
      v11 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v10 + 432), Block); /*0x9b0a5*/
      v7 = cocos2d::CCString::intValue(v11); /*0x9b0b4*/
      if ( v20 > 0xF ) /*0x9b0be*/
      {
        v12 = Block[0]; /*0x9b0c3*/
        if ( v20 + 1 >= 0x1000 ) /*0x9b0d1*/
        {
          v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x9b0d7*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x9b0e6*/
            invoke_watson(0, 0, 0, 0, 0); /*0x9b0fb*/
        }
        j_j_free(v12); /*0x9b105*/
      }
      v9 = 3600; /*0x9b10a*/
      break;
    case -3: /*0x9ae4e*/
      v3 = qword_905FD0; /*0x9afcf*/
      if ( !qword_905FD0 ) /*0x9afd9*/
      {
        v16 = operator new(0x6E8u); /*0x9afe5*/
        qword_905FD0 = sub_2723A0(v16); /*0x9aff2*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9b003*/
        v3 = qword_905FD0; /*0x9b005*/
      }
      v4 = "0186"; /*0x9b00c*/
LABEL_9:
      if ( GameManager_getGameVariable(v3, v4) ) /*0x9aeb5*/
        LODWORD(Value) = 1065353216; /*0x9aebe*/
      else
        LODWORD(Value) = 0; /*0x9aecb*/
      return *(float *)&Value; /*0x9aec6*/
    case -2: /*0x9ae4e*/
      v5 = qword_905FD0; /*0x9aed3*/
      if ( !qword_905FD0 ) /*0x9aedd*/
      {
        v15 = operator new(0x6E8u); /*0x9aee9*/
        qword_905FD0 = sub_2723A0(v15); /*0x9aef6*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9af07*/
        v5 = qword_905FD0; /*0x9af09*/
      }
      *(_OWORD *)Block = 0; /*0x9af13*/
      v19 = 3; /*0x9af17*/
      v20 = 15; /*0x9af1f*/
      LODWORD(Block[0]) = 6256231; /*0x9af2d*/
      sub_43D80(Block, "0185", 4u); /*0x9af50*/
      v6 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v5 + 432), Block); /*0x9af60*/
      v7 = cocos2d::CCString::intValue(v6); /*0x9af6f*/
      if ( v20 > 0xF ) /*0x9af79*/
      {
        v8 = Block[0]; /*0x9af7e*/
        if ( v20 + 1 >= 0x1000 ) /*0x9af8c*/
        {
          v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x9af92*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x9afa1*/
            invoke_watson(0, 0, 0, 0, 0); /*0x9afb6*/
        }
        j_j_free(v8); /*0x9afc0*/
      }
      v9 = 300; /*0x9afc5*/
      break;
    case -1: /*0x9ae4e*/
      v3 = qword_905FD0; /*0x9ae71*/
      if ( !qword_905FD0 ) /*0x9ae7b*/
      {
        v14 = operator new(0x6E8u); /*0x9ae87*/
        qword_905FD0 = sub_2723A0(v14); /*0x9ae94*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9aea5*/
        v3 = qword_905FD0; /*0x9aea7*/
      }
      v4 = "0184"; /*0x9aeae*/
      goto LABEL_9; /*0x9aeae*/
    default:
      Value = SetupTriggerPopup_getValue(a1, a2); /*0x9ae67*/
      return *(float *)&Value; /*0x9ae6c*/
  }
  if ( v7 <= 0 ) /*0x9b111*/
    v7 = v9; /*0x9b111*/
  *(float *)&Value = (float)(v7 / 0x3Cu); /*0x9b122*/
  return *(float *)&Value; /*0x9b125*/
}

// [3/3] Address: 0x9b140
// Method: AutoSaveSettingsLayer::valueDidChange
// Hidden C++ exception states: #wind=5
void __fastcall AutoSaveSettingsLayer_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rbx
  struct cocos2d::CCString *v7; // rax
  void *v8; // rcx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rbx
  struct cocos2d::CCString *v13; // rax
  void *v14; // [rsp+30h] [rbp-30h]
  void *v15; // [rsp+30h] [rbp-30h]
  void *v16; // [rsp+30h] [rbp-30h]
  void *v17; // [rsp+30h] [rbp-30h]
  void *Block[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  unsigned __int64 v20; // [rsp+50h] [rbp-10h]

  if ( a2 == -4 ) /*0x9b163*/
  {
    v10 = 60 * (int)a3; /*0x9b364*/
    if ( v10 > 18000 ) /*0x9b36e*/
      v10 = 18000; /*0x9b36e*/
    if ( v10 < 600 ) /*0x9b378*/
      v10 = 600; /*0x9b378*/
    v11 = qword_905FD0; /*0x9b37b*/
    if ( !qword_905FD0 ) /*0x9b385*/
    {
      v17 = operator new(0x6E8u); /*0x9b391*/
      qword_905FD0 = sub_2723A0(v17); /*0x9b39e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9b3af*/
      v11 = qword_905FD0; /*0x9b3b1*/
    }
    *(_OWORD *)Block = 0; /*0x9b3bb*/
    v19 = 3; /*0x9b3bf*/
    v20 = 15; /*0x9b3c7*/
    LODWORD(Block[0]) = 6256231; /*0x9b3d5*/
    sub_43D80(Block, "0187", 4u); /*0x9b3f8*/
    v12 = *(_QWORD *)(v11 + 432); /*0x9b3fd*/
    v13 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v10); /*0x9b40d*/
    cocos2d::CCDictionary::setObject(v12, v13, Block); /*0x9b41d*/
    if ( v20 > 0xF ) /*0x9b42c*/
    {
      v8 = Block[0]; /*0x9b431*/
      if ( v20 + 1 >= 0x1000 ) /*0x9b43f*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x9b445*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x9b454*/
          invoke_watson(0, 0, 0, 0, 0); /*0x9b469*/
      }
      goto LABEL_31; /*0x9b454*/
    }
  }
  else if ( a2 == -3 ) /*0x9b16c*/
  {
    v9 = qword_905FD0; /*0x9b30e*/
    if ( !qword_905FD0 ) /*0x9b318*/
    {
      v16 = operator new(0x6E8u); /*0x9b324*/
      qword_905FD0 = sub_2723A0(v16); /*0x9b331*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9b342*/
      v9 = qword_905FD0; /*0x9b344*/
    }
    sub_27ACB0(v9, "0186", a3 != 0.0); /*0x9b356*/
  }
  else
  {
    if ( a2 != -2 ) /*0x9b175*/
    {
      if ( a2 == -1 ) /*0x9b17a*/
      {
        v3 = qword_905FD0; /*0x9b190*/
        if ( !qword_905FD0 ) /*0x9b19a*/
        {
          v14 = operator new(0x6E8u); /*0x9b1a6*/
          qword_905FD0 = sub_2723A0(v14); /*0x9b1b3*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9b1c4*/
          v3 = qword_905FD0; /*0x9b1c6*/
        }
        sub_27ACB0(v3, "0184", a3 != 0.0); /*0x9b1d8*/
      }
      return; /*0x9b1dd*/
    }
    v4 = 60 * (int)a3; /*0x9b1e6*/
    if ( v4 > 3600 ) /*0x9b1f0*/
      v4 = 3600; /*0x9b1f0*/
    if ( v4 < 60 ) /*0x9b1fa*/
      v4 = 60; /*0x9b1fa*/
    v5 = qword_905FD0; /*0x9b1fd*/
    if ( !qword_905FD0 ) /*0x9b207*/
    {
      v15 = operator new(0x6E8u); /*0x9b213*/
      qword_905FD0 = sub_2723A0(v15); /*0x9b220*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x9b231*/
      v5 = qword_905FD0; /*0x9b233*/
    }
    *(_OWORD *)Block = 0; /*0x9b23d*/
    v19 = 3; /*0x9b241*/
    v20 = 15; /*0x9b249*/
    LODWORD(Block[0]) = 6256231; /*0x9b257*/
    sub_43D80(Block, "0185", 4u); /*0x9b27a*/
    v6 = *(_QWORD *)(v5 + 432); /*0x9b27f*/
    v7 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v4); /*0x9b28f*/
    cocos2d::CCDictionary::setObject(v6, v7, Block); /*0x9b29f*/
    if ( v20 > 0xF ) /*0x9b2ae*/
    {
      v8 = Block[0]; /*0x9b2b7*/
      if ( v20 + 1 >= 0x1000 ) /*0x9b2c5*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x9b2cf*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x9b2de*/
          invoke_watson(0, 0, 0, 0, 0); /*0x9b2f7*/
      }
LABEL_31:
      j_j_free(v8); /*0x9b470*/
    }
  }
}
