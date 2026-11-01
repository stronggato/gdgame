#include <Geode/binding/EditorSoundConfigUploadPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x1980b0
// Method: EditorSoundConfigUploadPopup::~EditorSoundConfigUploadPopup
// Hidden C++ exception states: #wind=1
char *__fastcall EditorSoundConfigUploadPopup__dtor_EditorSoundConfigUploadPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax

  *(_QWORD *)Block = &EditorSoundConfigUploadPopup::`vftable'; /*0x1980cb*/
  *((_QWORD *)Block + 40) = &EditorSoundConfigUploadPopup::`vftable'; /*0x1980d5*/
  *((_QWORD *)Block + 41) = &EditorSoundConfigUploadPopup::`vftable'; /*0x1980e3*/
  *((_QWORD *)Block + 42) = &EditorSoundConfigUploadPopup::`vftable'; /*0x1980f1*/
  *((_QWORD *)Block + 43) = &EditorSoundConfigUploadPopup::`vftable'; /*0x1980ff*/
  *((_QWORD *)Block + 44) = &EditorSoundConfigUploadPopup::`vftable'; /*0x19810d*/
  *((_QWORD *)Block + 51) = &EditorSoundConfigUploadPopup::`vftable'; /*0x19811b*/
  *((_QWORD *)Block + 54) = &EditorSoundConfigUploadPopup::`vftable'; /*0x198129*/
  *((_QWORD *)Block + 68) = &EditorSoundConfigUploadPopup::`vftable'; /*0x198137*/
  *((_QWORD *)Block + 83) = &EditorSoundConfigUploadPopup::`vftable'; /*0x198145*/
  *((_QWORD *)Block + 84) = &EditorSoundConfigUploadPopup::`vftable'; /*0x198153*/
  v4 = Block + 1000; /*0x19815a*/
  *((_QWORD *)Block + 125) = &EditorSoundConfigUploadPopup::`vftable'; /*0x198168*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x19816b*/
  if ( *(_QWORD *)&qword_905FB0 /*0x1981a3*/
    || (v6 = operator new(0x690u),
        *(_QWORD *)&qword_905FB0 = sub_214250(v6),
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0),
        (v5 = *(_QWORD *)&qword_905FB0) != 0) )
  {
    if ( *(char **)(v5 + 1448) == v4 ) /*0x1981ac*/
      *(_QWORD *)(v5 + 1448) = 0; /*0x1981ae*/
  }
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x1981bc*/
  if ( (a2 & 1) != 0 ) /*0x1981c6*/
    j_j_free(Block); /*0x1981d0*/
  return Block; /*0x1981d8*/
}

// [2/5] Address: 0x199c50
// Method: EditorSoundConfigUploadPopup::keyBackClicked
__int64 __fastcall EditorSoundConfigUploadPopup_keyBackClicked(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 result; // rax

  v1 = (_BYTE *)(a1 - 336); /*0x199c50*/
  if ( !v1[1040] ) /*0x199c57*/
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v1 + 1104LL))(v1, 0); /*0x199c65*/
  return result; /*0x199c6c*/
}

// [3/5] Address: 0x199c70
// Method: EditorSoundConfigUploadPopup::onClose
// Hidden C++ exception states: #wind=3
__int64 __fastcall EditorSoundConfigUploadPopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v5; // [rsp+40h] [rbp+18h]
  void *v6; // [rsp+40h] [rbp+18h]

  v2 = *(_QWORD *)&qword_905FB0; /*0x199c8a*/
  if ( *(_QWORD *)&qword_905FB0 /*0x199ccb*/
    || (v5 = operator new(0x690u),
        *(_QWORD *)&qword_905FB0 = sub_214250(v5),
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0),
        (v2 = *(_QWORD *)&qword_905FB0) != 0) )
  {
    v3 = a1 + 1000; /*0x199ccd*/
    if ( !a1 ) /*0x199cd9*/
      v3 = 0; /*0x199cd9*/
    if ( !v2 ) /*0x199ce0*/
    {
      v6 = operator new(0x690u); /*0x199cec*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x199cfa*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x199d0b*/
      v2 = *(_QWORD *)&qword_905FB0; /*0x199d0d*/
    }
    if ( *(_QWORD *)(v2 + 1448) == v3 ) /*0x199d1b*/
      *(_QWORD *)(v2 + 1448) = 0; /*0x199d1d*/
  }
  return SetupTriggerPopup_onClose(a1); /*0x199d2a*/
}

// [4/5] Address: 0x199d50
// Method: EditorSoundConfigUploadPopup::uploadEditorSoundFinished
// Hidden C++ exception states: #wind=2
void __fastcall EditorSoundConfigUploadPopup_uploadEditorSoundFinished(__int64 a1, int a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rdi
  int v9; // eax
  int v10; // edx
  cocos2d::CCString *v11; // rax
  char *CString; // rax
  __int64 v13; // rsi
  size_t v14; // r8
  __int64 v15; // r14
  cocos2d::CCObject *v16; // rbp
  unsigned int v17; // edi
  __int64 v18; // rbx
  __int64 v19; // rax
  void **v20; // rdx
  __int64 v21; // rax
  cocos2d::CCObject *v22; // rbx
  void *v23; // rcx
  __int128 v24; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-90h]
  __int64 v26; // [rsp+70h] [rbp-88h]
  _BYTE v27[32]; // [rsp+80h] [rbp-78h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp-58h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-48h]

  *(_BYTE *)(a1 + 40) = 0; /*0x199d80*/
  v4 = *(_QWORD *)(a1 + 8); /*0x199d84*/
  if ( v4 ) /*0x199d8b*/
    LoadingCircle_fadeAndRemove(v4); /*0x199d8d*/
  *(_QWORD *)(a1 + 8) = 0; /*0x199d95*/
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 324LL); /*0x199d9d*/
  if ( v5 > 0 ) /*0x199da5*/
  {
    v6 = sub_182B60(v4); /*0x199da7*/
    v7 = sub_189210(v6, (unsigned int)v5); /*0x199db1*/
    v8 = (_DWORD *)v7; /*0x199db6*/
    if ( v7 ) /*0x199dbc*/
    {
      *(_DWORD *)(v7 + 320) = a2; /*0x199dbe*/
      v9 = time64(0); /*0x199dc6*/
      if ( !v8[92] ) /*0x199dcc*/
        v8[92] = v9; /*0x199dd5*/
      v8[93] = v9; /*0x199ddb*/
      v8[84] = v8[83]; /*0x199de7*/
    }
    if ( !*(_DWORD *)(a1 + 104) ) /*0x199ded*/
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 364LL) = *(_DWORD *)(a1 + 92); /*0x199dfa*/
  }
  *(_OWORD *)Block = 0; /*0x199e03*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x199e13*/
  LOBYTE(Block[0]) = 0; /*0x199e1c*/
  v10 = *(_DWORD *)(a1 + 104); /*0x199e24*/
  if ( v10 <= 0 || a2 == v10 )
    v11 = cocos2d::CCString::createWithFormat("Sound pack uploaded.\nPack ID: <cy>%i</c>", a2);
  else
    v11 = cocos2d::CCString::createWithFormat(
            "Sound pack #%i was not found on the server.\nUploaded as a new pack: <cy>%i</c>",
            v10,
            a2);
  CString = (char *)cocos2d::CCString::getCString(v11); /*0x199e53*/
  v13 = -1; /*0x199e59*/
  v14 = -1; /*0x199e60*/
  do /*0x199e66*/
    ++v14; /*0x199e63*/
  while ( CString[v14] ); /*0x199e66*/
  sub_3F5A0(Block, CString, v14); /*0x199e78*/
  v15 = *(_QWORD *)(a1 + 112); /*0x199e7d*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 1000) + 1104LL))(a1 - 1000, 0); /*0x199e91*/
  if ( v15 ) /*0x199e9a*/
  {
    v16 = *(cocos2d::CCObject **)(v15 + 1072); /*0x199e9c*/
    if ( v16 ) /*0x199ea6*/
      cocos2d::CCObject::retain(*(cocos2d::CCObject **)(v15 + 1072)); /*0x199eab*/
    v17 = *(_DWORD *)(v15 + 1080); /*0x199eb1*/
    v18 = *(_QWORD *)(v15 + 1088); /*0x199eb8*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 1104LL))(v15, 0); /*0x199ec7*/
    v19 = sub_18F5A0(v16, v17, v18); /*0x199ed5*/
    if ( v19 ) /*0x199edd*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 1064LL))(v19); /*0x199ee5*/
    if ( v16 ) /*0x199eee*/
      cocos2d::CCObject::release(v16); /*0x199ef3*/
  }
  v20 = Block; /*0x199ef9*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x199f0a*/
    v20 = (void **)Block[0]; /*0x199f0a*/
  v24 = 0; /*0x199f16*/
  v25 = 0; /*0x199f1b*/
  v26 = 0; /*0x199f20*/
  do /*0x199f28*/
    ++v13; /*0x199f25*/
  while ( *((_BYTE *)v20 + v13) ); /*0x199f28*/
  sub_3C230(&v24); /*0x199f36*/
  v21 = sub_3E4F0(v27, &v24); /*0x199f52*/
  v22 = FLAlertLayer_create_0(0, (int)"Upload Complete", v21, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x199f9e*/
  sub_3C310(&v24); /*0x199fa6*/
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v22 + 1064LL))(v22); /*0x199fb8*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x199fc7*/
  {
    v23 = Block[0]; /*0x199fcc*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x199fde*/
    {
      v23 = (void *)*((_QWORD *)Block[0] - 1); /*0x199fe4*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v23 - 8) > 0x1F ) /*0x199ff3*/
        invoke_watson(0, 0, 0, 0, 0); /*0x19a004*/
    }
    j_j_free(v23); /*0x19a00b*/
  }
}

// [5/5] Address: 0x19a040
// Method: EditorSoundConfigUploadPopup::uploadEditorSoundFailed
// Hidden C++ exception states: #wind=1
void __fastcall EditorSoundConfigUploadPopup_uploadEditorSoundFailed(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  cocos2d::CCObject *v10; // rbx
  __int128 v11; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  _BYTE v14[32]; // [rsp+70h] [rbp-28h] BYREF

  v2 = a2; /*0x19a052*/
  *(_BYTE *)(a1 + 40) = 0; /*0x19a057*/
  v4 = *(_QWORD *)(a1 + 8); /*0x19a05b*/
  if ( v4 ) /*0x19a062*/
    LoadingCircle_fadeAndRemove(v4); /*0x19a064*/
  *(_QWORD *)(a1 + 8) = 0; /*0x19a06b*/
  v5 = *(_QWORD *)(a1 + 16); /*0x19a06f*/
  if ( v5 ) /*0x19a076*/
  {
    LOBYTE(a2) = 1; /*0x19a07b*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 336LL))(v5, a2); /*0x19a07d*/
  }
  v6 = *(_QWORD *)(a1 + 24); /*0x19a083*/
  if ( v6 ) /*0x19a08a*/
  {
    LOBYTE(a2) = 1; /*0x19a08f*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 336LL))(v6, a2); /*0x19a091*/
  }
  v7 = *(_QWORD *)(a1 + 32); /*0x19a097*/
  if ( v7 ) /*0x19a09e*/
  {
    LOBYTE(a2) = 1; /*0x19a0a3*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 336LL))(v7, a2); /*0x19a0a5*/
  }
  v8 = *(_QWORD *)(a1 + 96); /*0x19a0ab*/
  if ( v8 ) /*0x19a0b2*/
  {
    LOBYTE(a2) = 1; /*0x19a0b7*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 336LL))(v8, a2); /*0x19a0b9*/
  }
  if ( v2 == -1 ) /*0x19a0c2*/
  {
    v11 = 0; /*0x19a0cb*/
    *(_QWORD *)&v11 = sub_3C460(48); /*0x19a0e4*/
    v12 = 44; /*0x19a0e9*/
    v13 = 47; /*0x19a0f2*/
    strcpy((char *)v11, "Could not reach the server. Try again later."); /*0x19a102*/
    v9 = sub_3E4F0(v14, &v11); /*0x19a141*/
    v10 = FLAlertLayer_create_0(0, (int)"Upload Failed", v9, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x19a18d*/
    sub_3C310(&v11); /*0x19a195*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v10 + 1064LL))(v10); /*0x19a1a7*/
  }
}
