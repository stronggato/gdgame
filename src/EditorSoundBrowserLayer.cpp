#include <Geode/binding/EditorSoundBrowserLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x18b2a0
// Method: EditorSoundBrowserLayer::~EditorSoundBrowserLayer
// Hidden C++ exception states: #wind=1
char *__fastcall EditorSoundBrowserLayer__dtor_EditorSoundBrowserLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx

  *(_QWORD *)Block = &EditorSoundBrowserLayer::`vftable'; /*0x18b2bb*/
  *((_QWORD *)Block + 40) = &EditorSoundBrowserLayer::`vftable'; /*0x18b2c5*/
  *((_QWORD *)Block + 41) = &EditorSoundBrowserLayer::`vftable'; /*0x18b2d3*/
  *((_QWORD *)Block + 42) = &EditorSoundBrowserLayer::`vftable'; /*0x18b2e1*/
  *((_QWORD *)Block + 43) = &EditorSoundBrowserLayer::`vftable'; /*0x18b2ef*/
  *((_QWORD *)Block + 44) = &EditorSoundBrowserLayer::`vftable'; /*0x18b2fd*/
  *((_QWORD *)Block + 51) = &EditorSoundBrowserLayer::`vftable'; /*0x18b30b*/
  *((_QWORD *)Block + 54) = &EditorSoundBrowserLayer::`vftable'; /*0x18b319*/
  *((_QWORD *)Block + 68) = &EditorSoundBrowserLayer::`vftable'; /*0x18b327*/
  *((_QWORD *)Block + 83) = &EditorSoundBrowserLayer::`vftable'; /*0x18b335*/
  *((_QWORD *)Block + 84) = &EditorSoundBrowserLayer::`vftable'; /*0x18b343*/
  v4 = Block + 1000; /*0x18b34a*/
  *((_QWORD *)Block + 125) = &EditorSoundBrowserLayer::`vftable'; /*0x18b358*/
  *((_QWORD *)Block + 126) = &EditorSoundBrowserLayer::`vftable'; /*0x18b362*/
  *((_QWORD *)Block + 127) = &EditorSoundBrowserLayer::`vftable'; /*0x18b370*/
  *((_QWORD *)Block + 128) = &EditorSoundBrowserLayer::`vftable'; /*0x18b37e*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x18b385*/
  if ( *(_QWORD *)&qword_905FB0 /*0x18b3bd*/
    || (v6 = operator new(0x690u),
        *(_QWORD *)&qword_905FB0 = sub_214250(v6),
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0),
        (v5 = *(_QWORD *)&qword_905FB0) != 0) )
  {
    if ( *(char **)(v5 + 1456) == v4 ) /*0x18b3c6*/
      *(_QWORD *)(v5 + 1456) = 0; /*0x18b3c8*/
  }
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 136); /*0x18b3d3*/
  if ( v7 ) /*0x18b3dd*/
    cocos2d::CCObject::release(v7); /*0x18b3df*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 146); /*0x18b3e5*/
  if ( v8 ) /*0x18b3ef*/
    cocos2d::CCObject::release(v8); /*0x18b3f1*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 147); /*0x18b3f7*/
  if ( v9 ) /*0x18b401*/
    cocos2d::CCObject::release(v9); /*0x18b403*/
  sub_3C310(Block + 1136); /*0x18b410*/
  sub_3C310(Block + 1104); /*0x18b41c*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x18b424*/
  if ( (a2 & 1) != 0 ) /*0x18b42e*/
    j_j_free(Block); /*0x18b438*/
  return Block; /*0x18b440*/
}

// [2/6] Address: 0x18c820
// Method: EditorSoundBrowserLayer::onClose
// Hidden C++ exception states: #wind=3
__int64 __fastcall EditorSoundBrowserLayer_onClose(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  void *v5; // rdx
  __int64 v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h]
  void *v9; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)&qword_905FB0; /*0x18c83c*/
  if ( *(_QWORD *)&qword_905FB0 /*0x18c87d*/
    || (v8 = operator new(0x690u),
        *(_QWORD *)&qword_905FB0 = sub_214250(v8),
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0),
        (v2 = *(_QWORD *)&qword_905FB0) != 0) )
  {
    v3 = a1 + 1000; /*0x18c87f*/
    if ( !a1 ) /*0x18c889*/
      v3 = 0; /*0x18c889*/
    if ( !v2 ) /*0x18c890*/
    {
      v9 = operator new(0x690u); /*0x18c89c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0x18c8aa*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x18c8bb*/
      v2 = *(_QWORD *)&qword_905FB0; /*0x18c8bd*/
    }
    if ( *(_QWORD *)(v2 + 1456) == v3 ) /*0x18c8cb*/
      *(_QWORD *)(v2 + 1456) = 0; /*0x18c8cd*/
  }
  v4 = *(_QWORD *)(a1 + 1192); /*0x18c8d4*/
  if ( v4 ) /*0x18c8de*/
    cocos2d::CCNode::scheduleOnce(v4, sub_5AB90); /*0x18c8ea*/
  if ( !*(_BYTE *)(a1 + 1188) ) /*0x18c8f0*/
  {
    dword_8F83EC = *(_DWORD *)(a1 + 1032); /*0x18c8ff*/
    if ( &qword_8F8420 != (void **)(a1 + 1104) ) /*0x18c916*/
    {
      v5 = (void *)(a1 + 1104); /*0x18c918*/
      if ( *(_QWORD *)(a1 + 1128) > 0xFu ) /*0x18c920*/
        v5 = *(void **)(a1 + 1104); /*0x18c922*/
      sub_3F5A0(&qword_8F8420, v5, *(_QWORD *)(a1 + 1120)); /*0x18c929*/
    }
  }
  v6 = *(_QWORD *)(a1 + 1040); /*0x18c92e*/
  if ( v6 ) /*0x18c938*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 528LL))(v6); /*0x18c93d*/
    *(_QWORD *)(a1 + 1040) = 0; /*0x18c943*/
  }
  return SetupTriggerPopup_onClose(a1); /*0x18c950*/
}

// [3/6] Address: 0x18daa0
// Method: EditorSoundBrowserLayer::setTextPopupClosed
// Hidden C++ exception states: #wind=3
double __fastcall EditorSoundBrowserLayer_setTextPopupClosed(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rsi
  int v5; // r14d
  size_t v6; // rbx
  size_t v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // rax
  size_t v10; // r8
  _BYTE *v11; // rax
  _BOOL8 v12; // rdx
  unsigned __int64 *v13; // rax
  __int64 v14; // rax
  cocos2d::CCObject *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  cocos2d::CCObject *v20; // rbx
  void *v21; // rdx
  __int128 v23; // [rsp+50h] [rbp-29h] BYREF
  __int64 v24; // [rsp+60h] [rbp-19h]
  __int64 v25; // [rsp+68h] [rbp-11h]
  __int128 *v26; // [rsp+70h] [rbp-9h]
  __int128 *v27; // [rsp+78h] [rbp-1h]
  _BYTE v28[32]; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int64 *v29; // [rsp+A0h] [rbp+27h]

  v4 = a1; /*0x18dac9*/
  v29 = a3; /*0x18dacc*/
  v5 = *(_DWORD *)(a1 + 160); /*0x18dad0*/
  *(_DWORD *)(a1 + 160) = 0; /*0x18dada*/
  v6 = a3[2]; /*0x18dae1*/
  if ( v6 )
  {
    v7 = a3[2]; /*0x18daee*/
    do /*0x18db2d*/
    {
      a1 = (unsigned __int64)a3; /*0x18daf1*/
      v8 = a3[3]; /*0x18daf4*/
      if ( v8 > 0xF ) /*0x18dafc*/
        a1 = *a3; /*0x18dafe*/
      v6 = v7; /*0x18db01*/
      if ( *(_BYTE *)(v7 + a1 - 1) != 32 ) /*0x18db09*/
        break; /*0x18db09*/
      a1 = v7 - 1; /*0x18db0b*/
      a3[2] = v7 - 1; /*0x18db0f*/
      v9 = a3; /*0x18db13*/
      if ( v8 > 0xF ) /*0x18db1a*/
        v9 = (unsigned __int64 *)*a3; /*0x18db1c*/
      *((_BYTE *)v9 + a1) = 0; /*0x18db1f*/
      v6 = a3[2]; /*0x18db23*/
      v7 = v6; /*0x18db27*/
    }
    while ( v6 ); /*0x18db2d*/
    if ( v6 )
    {
      v10 = v6; /*0x18db38*/
      do
      {
        v11 = a3; /*0x18db40*/
        a1 = a3[3]; /*0x18db43*/
        if ( a1 > 0xF ) /*0x18db4b*/
          v11 = (_BYTE *)*a3; /*0x18db4d*/
        v6 = v10; /*0x18db50*/
        if ( *v11 != 32 ) /*0x18db56*/
          break; /*0x18db56*/
        v12 = v10 != 0; /*0x18db69*/
        v13 = a1 <= 0xF ? a3 : (unsigned __int64 *)*a3;
        v6 = v10 - v12; /*0x18db92*/
        memmove(v13, (char *)v13 + v12, v10 - v12 + 1); /*0x18dba1*/
        a3[2] = v6; /*0x18dba6*/
        v10 = v6; /*0x18dbaa*/
      }
      while ( v6 );
    }
  }
  if ( v5 == 1 ) /*0x18dbb6*/
  {
    if ( !v6 ) /*0x18dbbf*/
    {
      v23 = 0; /*0x18dbc8*/
      *(_QWORD *)&v23 = sub_3C460(32); /*0x18dbde*/
      v24 = 20; /*0x18dbe2*/
      v25 = 31; /*0x18dbea*/
      strcpy((char *)v23, "Please enter a name."); /*0x18dbf9*/
      v26 = &v23; /*0x18dc0d*/
      v14 = sub_3E4F0(v28, &v23); /*0x18dc19*/
      v15 = FLAlertLayer_create_0(0, (int)"Error", v14, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x18dc64*/
      sub_3C310(&v23); /*0x18dc6b*/
      (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v15 + 1064LL))(v15); /*0x18dc76*/
      return sub_3C310(a3); /*0x18dc7c*/
    }
    if ( !sub_182B60(a1) || (v17 = sub_182B60(v16), !sub_189310(v17, a3)) ) /*0x18dc96*/
    {
      v23 = 0; /*0x18dcad*/
      *(_QWORD *)&v23 = sub_3C460(64); /*0x18dcc6*/
      v24 = 51; /*0x18dcca*/
      v25 = 63; /*0x18dcd2*/
      strcpy((char *)v23, "You already have 50 sound packs. Delete some first."); /*0x18dce1*/
      v27 = &v23; /*0x18dd17*/
      v19 = sub_3E4F0(v28, &v23); /*0x18dd23*/
      v20 = FLAlertLayer_create_0(0, (int)"Limit Reached", v19, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x18dd6f*/
      sub_3C310(&v23); /*0x18dd76*/
      (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v20 + 1064LL))(v20); /*0x18dd88*/
      return sub_3C310(a3); /*0x18dd8a*/
    }
    v18 = 1; /*0x18dca0*/
LABEL_32:
    sub_18C970(v4 - 1024, v18); /*0x18ddba*/
    return sub_3C310(a3); /*0x18ddc1*/
  }
  if ( v5 == 2 && v6 ) /*0x18dd95*/
  {
    if ( (unsigned __int64 *)(v4 + 80) != a3 ) /*0x18dd9e*/
    {
      v21 = a3; /*0x18dda0*/
      if ( a3[3] > 0xF ) /*0x18dda8*/
        v21 = (void *)*a3; /*0x18ddaa*/
      sub_3F5A0((void *)(v4 + 80), v21, v6); /*0x18ddb0*/
    }
    v18 = 9; /*0x18ddb5*/
    goto LABEL_32; /*0x18ddb5*/
  }
  return sub_3C310(a3); /*0x18ddcf*/
}

// [4/6] Address: 0x18de10
// Method: EditorSoundBrowserLayer::rebuildContent
__int64 __fastcall EditorSoundBrowserLayer_rebuildContent(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1; /*0x18de10*/
  return sub_18CCD0(a1, 0, a3);
}

// [5/6] Address: 0x18ded0
// Method: EditorSoundBrowserLayer::loadEditorSoundsFailed
void __fastcall EditorSoundBrowserLayer_loadEditorSoundsFailed(_QWORD *a1, _BYTE *a2)
{
  __int64 v3; // rax
  const void *v4; // rcx
  size_t v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9

  if ( a2 ) /*0x18ded3*/
  {
    v3 = -1; /*0x18dee1*/
    do /*0x18def3*/
      ++v3; /*0x18def0*/
    while ( a2[v3] ); /*0x18def3*/
    v4 = a1 + 17; /*0x18def9*/
    if ( a1[20] > 0xFu ) /*0x18df08*/
      v4 = (const void *)a1[17]; /*0x18df0a*/
    v5 = a1[19]; /*0x18df11*/
    if ( v5 == v3 && (!v5 || !memcmp(v4, a2, v5)) ) /*0x18df22*/
    {
      v6 = a1[10]; /*0x18df2b*/
      if ( v6 ) /*0x18df37*/
      {
        LoadingCircle_fadeAndRemove(v6); /*0x18df39*/
        a1[10] = 0; /*0x18df3e*/
      }
      v7 = cocos2d::CCArray::create(v6); /*0x18df46*/
      sub_18D3E0(a1 - 125, v7, "Could not load sound packs.\nPress refresh to retry.", v8); /*0x18df5d*/
      sub_18D600(a1 - 125); /*0x18df69*/
    }
  }
}

// [6/6] Address: 0x18df80
// Method: EditorSoundBrowserLayer::onConfigViewClicked
void __fastcall EditorSoundBrowserLayer_onConfigViewClicked(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( a2 ) /*0x18df8a*/
  {
    v3 = *(_DWORD *)(a1 + 24); /*0x18df8c*/
    v4 = 0; /*0x18df8f*/
    if ( v3 ) /*0x18df93*/
    {
      if ( v3 == 1 ) /*0x18dfa5*/
        v4 = 2; /*0x18dfa5*/
    }
    else
    {
      v4 = 1; /*0x18df95*/
    }
    v5 = sub_18F5A0(a2, v4, a1 - 1008); /*0x18dfb3*/
    if ( v5 ) /*0x18dfbb*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x18dfce*/
  }
}
