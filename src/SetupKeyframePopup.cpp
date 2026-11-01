#include <Geode/binding/SetupKeyframePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x156e50
// Method: SetupKeyframePopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupKeyframePopup_create(int a1, int a2, __int64 a3)
{
  _QWORD *v6; // r14

  v6 = operator new(0x210u); /*0x156e78*/
  memset(v6, 0, 0x210u); /*0x156e8b*/
  CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v6); /*0x156e93*/
  *v6 = &RowPressItem::`vftable'; /*0x156e9f*/
  v6[40] = &RowPressItem::`vftable'; /*0x156ea9*/
  v6[65] = 0; /*0x156eb0*/
  if ( (unsigned __int8)sub_47940((_DWORD)v6, a1, 0, a2, a3) ) /*0x156ecc*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x156ed8*/
    return v6; /*0x156ede*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0x156eeb*/
    return 0; /*0x156eee*/
  }
}

// [2/8] Address: 0x5b4cc0
// Method: SetupKeyframePopup::~SetupKeyframePopup
cocos2d::CCNode *__fastcall SetupKeyframePopup__dtor_SetupKeyframePopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &SetupKeyframePopup::`vftable'; /*0x5b4cd6*/
  *((_QWORD *)Block + 40) = &SetupKeyframePopup::`vftable'; /*0x5b4ce0*/
  *((_QWORD *)Block + 41) = &SetupKeyframePopup::`vftable'; /*0x5b4cee*/
  *((_QWORD *)Block + 42) = &SetupKeyframePopup::`vftable'; /*0x5b4cfc*/
  *((_QWORD *)Block + 43) = &SetupKeyframePopup::`vftable'; /*0x5b4d0a*/
  *((_QWORD *)Block + 44) = &SetupKeyframePopup::`vftable'; /*0x5b4d18*/
  *((_QWORD *)Block + 51) = &SetupKeyframePopup::`vftable'; /*0x5b4d26*/
  *((_QWORD *)Block + 54) = &SetupKeyframePopup::`vftable'; /*0x5b4d34*/
  *((_QWORD *)Block + 68) = &SetupKeyframePopup::`vftable'; /*0x5b4d42*/
  *((_QWORD *)Block + 83) = &SetupKeyframePopup::`vftable'; /*0x5b4d50*/
  *((_QWORD *)Block + 84) = &SetupKeyframePopup::`vftable'; /*0x5b4d5e*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 125); /*0x5b4d65*/
  if ( v4 ) /*0x5b4d6f*/
    cocos2d::CCObject::release(v4); /*0x5b4d71*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5b4d7a*/
  if ( (a2 & 1) != 0 ) /*0x5b4d84*/
    j_j_free(Block); /*0x5b4d8e*/
  return Block; /*0x5b4d96*/
}

// [3/8] Address: 0x5b6d50
// Method: SetupKeyframePopup::valueDidChange
__int64 __fastcall SetupKeyframePopup_valueDidChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 380 ) /*0x5b6d56*/
    return SetupKeyframePopup_refreshPreviewArt(); /*0x5b6d56*/
  if ( a2 == 51 ) /*0x5b6d5f*/
    *(_BYTE *)(a1 + 1016) = 1; /*0x5b6d61*/
  return result; /*0x5b6d68*/
}

// [4/8] Address: 0x5b6d70
// Method: SetupKeyframePopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall SetupKeyframePopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  int v4; // ebx
  int v5; // ebx
  struct cocos2d::CCObject *v6; // rax
  __int64 v7; // rdx
  struct cocos2d::CCObject *result; // rax
  __int64 v9; // rdx

  v4 = (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 536); /*0x5b6d99*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == v4 ) /*0x5b6da2*/
    v5 = 0; /*0x5b6da4*/
  else
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5b6db1*/
  SetupTriggerPopup_updateValue(a1, 0x218u, (float)v5); /*0x5b6dc2*/
  v6 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5b6dd3*/
  if ( v6 ) /*0x5b6ddc*/
  {
    LOBYTE(v7) = v5 == 1; /*0x5b6de4*/
    CCMenuItemToggler_toggle((__int64)v6, v7); /*0x5b6de7*/
  }
  result = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5b6df8*/
  if ( result ) /*0x5b6e01*/
  {
    LOBYTE(v9) = v5 == 2; /*0x5b6e09*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v9); /*0x5b6e0c*/
  }
  return result; /*0x5b6e11*/
}

// [5/8] Address: 0x5b6e30
// Method: SetupKeyframePopup::onCustomButton
// Hidden C++ exception states: #wind=6
__int64 __fastcall SetupKeyframePopup_onCustomButton(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  struct cocos2d::CCObject *v5; // rcx
  struct cocos2d::CCArray *v6; // rbx
  unsigned int *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *i; // rsi
  __int64 *v11; // r15
  __int64 *j; // rbx
  int v13; // edi
  __int64 v14; // rsi
  cocos2d::CCArray *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // r12
  __int64 *k; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi
  struct cocos2d::CCObject *v21; // r15
  cocos2d::CCArray *v22; // rax
  cocos2d::CCArray *v23; // rdi
  __int64 v24; // r9
  __int64 v25; // r8
  cocos2d::CCArray *v26; // rax
  _QWORD *v27; // rax
  struct cocos2d::CCObject *v28; // rcx
  struct cocos2d::CCArray *v29; // rbx
  __int64 v30; // r9
  unsigned int *v31; // rbx
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int64 *v34; // r15
  _QWORD *v35; // rsi
  __int64 v36; // rdi
  __int64 *v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // r8
  __int64 *v40; // rax
  _DWORD *v41; // rax
  __int64 *v42; // rbx
  struct cocos2d::CCObject *v43; // rax
  __int64 **v44; // rcx
  __int64 *m; // rax
  __int64 *n; // rcx
  int v48; // [rsp+20h] [rbp-79h]
  _QWORD *v49; // [rsp+30h] [rbp-69h] BYREF
  __int64 v50; // [rsp+38h] [rbp-61h]
  int v51; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v52[2]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v53; // [rsp+58h] [rbp-41h] BYREF
  __int128 v54; // [rsp+60h] [rbp-39h]
  __int64 v55; // [rsp+70h] [rbp-29h]
  __int64 v56; // [rsp+78h] [rbp-21h]
  _QWORD **v57; // [rsp+80h] [rbp-19h]
  __int64 v58; // [rsp+88h] [rbp-11h]
  __int64 *v59; // [rsp+90h] [rbp-9h] BYREF
  int v60; // [rsp+98h] [rbp-1h]

  v52[1] = 0; /*0x5b6e6e*/
  v4 = operator new(0x18u); /*0x5b6e77*/
  *v4 = v4; /*0x5b6e7c*/
  v4[1] = v4; /*0x5b6e7f*/
  v52[0] = v4; /*0x5b6e83*/
  v53 = 0; /*0x5b6e87*/
  v54 = 0; /*0x5b6e8e*/
  v55 = 7; /*0x5b6e93*/
  v56 = 8; /*0x5b6e9b*/
  v51 = 1065353216; /*0x5b6ea3*/
  sub_3E200(&v53, 16, v4); /*0x5b6eb6*/
  v5 = (struct cocos2d::CCObject *)a1[85]; /*0x5b6ebc*/
  if ( v5 ) /*0x5b6ec6*/
    v6 = cocos2d::CCArray::createWithObject(v5); /*0x5b6ece*/
  else
    v6 = (struct cocos2d::CCArray *)a1[86]; /*0x5b6ed3*/
  if ( v6 ) /*0x5b6edd*/
  {
    if ( cocos2d::CCArray::count(v6) ) /*0x5b6ee2*/
    {
      v7 = (unsigned int *)*((_QWORD *)v6 + 7); /*0x5b6eec*/
      v8 = *v7; /*0x5b6ef0*/
      if ( (_DWORD)v8 ) /*0x5b6ef4*/
      {
        v9 = (_QWORD *)*((_QWORD *)v7 + 2); /*0x5b6ef6*/
        for ( i = &v9[v8 - 1]; v9 <= i; ++v9 ) /*0x5b6f05*/
        {
          if ( !*v9 ) /*0x5b6f07*/
            break; /*0x5b6f0d*/
          sub_67020(&v51, &v59, *v9 + 1872LL); /*0x5b6f1e*/
        }
      }
    }
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x5b6f38*/
  {
    SetupKeyframePopup_refreshPreviewArt(a1); /*0x5b6f3d*/
    goto LABEL_57; /*0x5b6f42*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 4 ) /*0x5b6f53*/
  {
    if ( a1[126] ) /*0x5b6f55*/
    {
      v11 = (__int64 *)v52[0]; /*0x5b6f5f*/
      for ( j = *(__int64 **)v52[0]; j != v11; j = (__int64 *)*j ) /*0x5b6f69*/
      {
        v13 = *((_DWORD *)j + 4); /*0x5b6f70*/
        v14 = a1[126]; /*0x5b6f74*/
        v15 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v14 + 13936), v13); /*0x5b6f85*/
        cocos2d::CCArray::reverseObjects(v15); /*0x5b6f8e*/
        GJBaseGameLayer_updateKeyframeOrder(v14, v13); /*0x5b6f99*/
      }
    }
LABEL_16:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 1104LL))(a1, 0); /*0x5b6fa6*/
    goto LABEL_57; /*0x5b6fb4*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0x5b6fc5*/
  {
    EditorUI_deselectAll(*(_QWORD *)(a1[126] + 14968LL)); /*0x5b6fd9*/
    if ( a1[126] ) /*0x5b6fde*/
    {
      v17 = (__int64 *)v52[0]; /*0x5b6fec*/
      for ( k = *(__int64 **)v52[0]; k != v17; k = (__int64 *)*k ) /*0x5b6ff7*/
      {
        v19 = *((int *)k + 4); /*0x5b7000*/
        v20 = a1[126]; /*0x5b7004*/
        v21 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v16); /*0x5b7011*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v21 + 64LL))( /*0x5b7024*/
          v21,
          *(unsigned int *)(v20 + 13944));
        cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v20 + 13936), v21, *(int *)(v20 + 13944)); /*0x5b7038*/
        ++*(_DWORD *)(v20 + 13944); /*0x5b703e*/
        *(_DWORD *)(v20 + 15612) = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v21 + 56LL))(v21); /*0x5b704d*/
        v22 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v20 + 13936), v19); /*0x5b705d*/
        v23 = v22; /*0x5b7063*/
        if ( v22 && cocos2d::CCArray::count(v22) ) /*0x5b706e*/
        {
          LOBYTE(v48) = 1; /*0x5b7078*/
          sub_1C2920(*(_QWORD *)(v20 + 14968), &v59, v23, 0, v48); /*0x5b708e*/
          *(_BYTE *)(v20 + 14872) = 1; /*0x5b7094*/
          LOBYTE(v24) = 1; /*0x5b709b*/
          v26 = (cocos2d::CCArray *)sub_3EC650(v20, &v59, v25, v24); /*0x5b70a5*/
          GJBaseGameLayer_assignNewStickyGroups(v20, v26); /*0x5b70b0*/
          *(_BYTE *)(v20 + 14872) = 0; /*0x5b70b5*/
          sub_3C310(&v59); /*0x5b70c0*/
        }
        *(_DWORD *)(v20 + 15612) = 0; /*0x5b70c5*/
        sub_1C47B0(*(_QWORD *)(a1[126] + 14968LL), v21, 0); /*0x5b70e0*/
      }
    }
    goto LABEL_16; /*0x5b70eb*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 && a1[126] ) /*0x5b7116*/
  {
    v50 = 0; /*0x5b7128*/
    v27 = operator new(0x20u); /*0x5b7131*/
    *v27 = v27; /*0x5b7136*/
    v27[1] = v27; /*0x5b7139*/
    v27[2] = v27; /*0x5b713d*/
    *((_WORD *)v27 + 12) = 257; /*0x5b7141*/
    v49 = v27; /*0x5b7147*/
    v28 = (struct cocos2d::CCObject *)a1[85]; /*0x5b714b*/
    if ( v28 ) /*0x5b7155*/
      v29 = cocos2d::CCArray::createWithObject(v28); /*0x5b715d*/
    else
      v29 = (struct cocos2d::CCArray *)a1[86]; /*0x5b7162*/
    if ( v29 ) /*0x5b716c*/
    {
      if ( cocos2d::CCArray::count(v29) ) /*0x5b7175*/
      {
        v31 = (unsigned int *)*((_QWORD *)v29 + 7); /*0x5b7183*/
        v32 = *v31; /*0x5b7187*/
        if ( (_DWORD)v32 ) /*0x5b718b*/
        {
          v33 = (__int64 *)*((_QWORD *)v31 + 2); /*0x5b7191*/
          v34 = &v33[v32 - 1]; /*0x5b7199*/
          if ( v33 <= v34 ) /*0x5b71a0*/
          {
            v35 = v49; /*0x5b71b0*/
            do /*0x5b7285*/
            {
              v36 = *v33; /*0x5b71b4*/
              if ( !*v33 ) /*0x5b71b4*/
                break; /*0x5b71ba*/
              v37 = (__int64 *)v35[1]; /*0x5b71c0*/
              v38 = 0; /*0x5b71c4*/
              v39 = v35; /*0x5b71c7*/
              if ( !*((_BYTE *)v37 + 25) ) /*0x5b71ca*/
              {
                v30 = *(unsigned int *)(v36 + 1872); /*0x5b71d0*/
                v40 = (__int64 *)v35[1]; /*0x5b71d7*/
                do /*0x5b7201*/
                {
                  v37 = v40; /*0x5b71e0*/
                  if ( *((_DWORD *)v40 + 7) >= (int)v30 ) /*0x5b71e7*/
                  {
                    v38 = 1; /*0x5b71f2*/
                    v39 = v40; /*0x5b71f7*/
                  }
                  else
                  {
                    v38 = 0; /*0x5b71e9*/
                    v40 += 2; /*0x5b71ec*/
                  }
                  v40 = (__int64 *)*v40; /*0x5b71fa*/
                }
                while ( !*((_BYTE *)v40 + 25) ); /*0x5b7201*/
              }
              v59 = v37; /*0x5b7203*/
              v60 = v38; /*0x5b7207*/
              if ( *((_BYTE *)v39 + 25) || *(_DWORD *)(v36 + 1872) < *((_DWORD *)v39 + 7) ) /*0x5b7221*/
              {
                if ( v50 == 0x7FFFFFFFFFFFFFFLL ) /*0x5b7227*/
                  sub_5AC20(v38, v37, v39, v30); /*0x5b738f*/
                v57 = &v49; /*0x5b7231*/
                v58 = 0; /*0x5b7235*/
                v41 = operator new(0x20u); /*0x5b723e*/
                v41[7] = *(_DWORD *)(v36 + 1872); /*0x5b724a*/
                *(_QWORD *)v41 = v35; /*0x5b724d*/
                *((_QWORD *)v41 + 1) = v35; /*0x5b7250*/
                *((_QWORD *)v41 + 2) = v35; /*0x5b7254*/
                *((_WORD *)v41 + 12) = 0; /*0x5b7258*/
                v58 = 0; /*0x5b725e*/
                sub_69600(&v49, &v59, v41); /*0x5b7275*/
                v35 = v49; /*0x5b727a*/
              }
              ++v33; /*0x5b727e*/
            }
            while ( v33 <= v34 ); /*0x5b7285*/
          }
        }
      }
    }
    EditorUI_deselectAll(*(_QWORD *)(a1[126] + 14968LL)); /*0x5b7299*/
    v42 = (__int64 *)*v49; /*0x5b72a2*/
    if ( !*(_BYTE *)(*v49 + 25LL) ) /*0x5b72a5*/
    {
      do /*0x5b7333*/
      {
        v43 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1[126] + 13936LL), *((int *)v42 + 7)); /*0x5b72c2*/
        sub_1C47B0(*(_QWORD *)(a1[126] + 14968LL), v43, 0); /*0x5b72dc*/
        v44 = (__int64 **)v42[2]; /*0x5b72e1*/
        if ( *((_BYTE *)v44 + 25) ) /*0x5b72e5*/
        {
          for ( m = (__int64 *)v42[1]; !*((_BYTE *)m + 25); m = (__int64 *)m[1] ) /*0x5b72ef*/
          {
            if ( v42 != (__int64 *)m[2] ) /*0x5b72f9*/
              break; /*0x5b72f9*/
            v42 = m; /*0x5b72fb*/
          }
          v42 = m; /*0x5b7308*/
        }
        else
        {
          v42 = (__int64 *)v42[2]; /*0x5b730d*/
          for ( n = *v44; !*((_BYTE *)n + 25); n = (__int64 *)*n ) /*0x5b7313*/
            v42 = n; /*0x5b7320*/
        }
      }
      while ( !*((_BYTE *)v42 + 25) ); /*0x5b7333*/
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 1104LL))(a1, 0); /*0x5b7341*/
    sub_BB6F0(&v49, &v49); /*0x5b7350*/
  }
LABEL_57:
  sub_3DA90(&v53); /*0x5b7356*/
  return sub_3DB00(v52); /*0x5b7368*/
}

// [6/8] Address: 0x5b73a0
// Method: SetupKeyframePopup::refreshPreviewArt
// Hidden C++ exception states: #wind=2
void __fastcall SetupKeyframePopup_refreshPreviewArt(_QWORD *a1)
{
  _QWORD *v2; // rbx
  struct cocos2d::CCObject *v3; // rcx
  struct cocos2d::CCArray *v4; // rdi
  __int64 v5; // r9
  unsigned int *v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rbp
  __int64 v10; // rsi
  __int64 *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // r8
  __int64 *v14; // rax
  _DWORD *v15; // rax
  __int64 *v16; // rbx
  struct cocos2d::CCObject *v17; // rax
  unsigned int *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 i; // rdx
  __int64 **v22; // rcx
  __int64 *j; // rax
  __int64 *k; // rcx
  _QWORD *v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h]
  void **v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  __int64 *v29; // [rsp+40h] [rbp-38h] BYREF
  int v30; // [rsp+48h] [rbp-30h]

  if ( a1[126] ) /*0x5b73c1*/
  {
    v26 = 0; /*0x5b73d7*/
    v2 = operator new(0x20u); /*0x5b73e6*/
    *v2 = v2; /*0x5b73e9*/
    v2[1] = v2; /*0x5b73ec*/
    v2[2] = v2; /*0x5b73f0*/
    *((_WORD *)v2 + 12) = 257; /*0x5b73f4*/
    v25 = v2; /*0x5b73fa*/
    v3 = (struct cocos2d::CCObject *)a1[85]; /*0x5b73ff*/
    if ( v3 ) /*0x5b7409*/
    {
      v4 = cocos2d::CCArray::createWithObject(v3); /*0x5b7411*/
      v2 = v25; /*0x5b7414*/
    }
    else
    {
      v4 = (struct cocos2d::CCArray *)a1[86]; /*0x5b741b*/
    }
    if ( v4 ) /*0x5b7425*/
    {
      if ( cocos2d::CCArray::count(v4) /*0x5b7459*/
        && (v6 = (unsigned int *)*((_QWORD *)v4 + 7), v7 = *v6, (_DWORD)v7)
        && (v8 = (__int64 *)*((_QWORD *)v6 + 2), v9 = &v8[v7 - 1], v8 <= v9) )
      {
        v2 = v25; /*0x5b7469*/
        do /*0x5b7549*/
        {
          v10 = *v8; /*0x5b7470*/
          if ( !*v8 ) /*0x5b7470*/
            break; /*0x5b7476*/
          v11 = (__int64 *)v2[1]; /*0x5b747c*/
          v12 = 0; /*0x5b7480*/
          v13 = v2; /*0x5b7483*/
          if ( !*((_BYTE *)v11 + 25) ) /*0x5b7486*/
          {
            v5 = *(unsigned int *)(v10 + 1872); /*0x5b748c*/
            v14 = (__int64 *)v2[1]; /*0x5b7493*/
            do /*0x5b74b7*/
            {
              v11 = v14; /*0x5b7496*/
              if ( *((_DWORD *)v14 + 7) >= (int)v5 ) /*0x5b749d*/
              {
                v12 = 1; /*0x5b74a8*/
                v13 = v14; /*0x5b74ad*/
              }
              else
              {
                v12 = 0; /*0x5b749f*/
                v14 += 2; /*0x5b74a2*/
              }
              v14 = (__int64 *)*v14; /*0x5b74b0*/
            }
            while ( !*((_BYTE *)v14 + 25) ); /*0x5b74b7*/
          }
          v29 = v11; /*0x5b74b9*/
          v30 = v12; /*0x5b74be*/
          if ( *((_BYTE *)v13 + 25) || *(_DWORD *)(v10 + 1872) < *((_DWORD *)v13 + 7) ) /*0x5b74db*/
          {
            if ( v26 == 0x7FFFFFFFFFFFFFFLL ) /*0x5b74e2*/
              sub_5AC20(v12, v11, v13, v5); /*0x5b7647*/
            v27 = (void **)&v25; /*0x5b74ed*/
            v28 = 0; /*0x5b74f2*/
            v15 = operator new(0x20u); /*0x5b74fc*/
            v15[7] = *(_DWORD *)(v10 + 1872); /*0x5b7508*/
            *(_QWORD *)v15 = v2; /*0x5b750b*/
            *((_QWORD *)v15 + 1) = v2; /*0x5b750e*/
            *((_QWORD *)v15 + 2) = v2; /*0x5b7512*/
            *((_WORD *)v15 + 12) = 0; /*0x5b7516*/
            v28 = 0; /*0x5b751c*/
            sub_69600(&v25, &v29, v15); /*0x5b7538*/
            v2 = v25; /*0x5b753d*/
          }
          ++v8; /*0x5b7542*/
        }
        while ( v8 <= v9 ); /*0x5b7549*/
      }
      else
      {
        v2 = v25; /*0x5b7551*/
      }
    }
    v16 = (__int64 *)*v2; /*0x5b7556*/
    while ( !*((_BYTE *)v16 + 25) ) /*0x5b7559*/
    {
      v17 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1[126] + 13936LL), *((int *)v16 + 7)); /*0x5b7575*/
      if ( v17 ) /*0x5b757e*/
      {
        v18 = (unsigned int *)*((_QWORD *)v17 + 7); /*0x5b7580*/
        v19 = *v18; /*0x5b7584*/
        if ( (_DWORD)v19 ) /*0x5b7588*/
        {
          v20 = *((_QWORD *)v18 + 2); /*0x5b758a*/
          for ( i = v20 + 8 * (v19 - 1); v20 <= i; v20 += 8LL ) /*0x5b7599*/
          {
            if ( !*(_QWORD *)v20 ) /*0x5b75a0*/
              break; /*0x5b75a6*/
            *(_BYTE *)(*(_QWORD *)v20 + 1897LL) = 1; /*0x5b75a8*/
          }
        }
      }
      v22 = (__int64 **)v16[2]; /*0x5b75b8*/
      if ( *((_BYTE *)v22 + 25) ) /*0x5b75bc*/
      {
        for ( j = (__int64 *)v16[1]; !*((_BYTE *)j + 25); j = (__int64 *)j[1] ) /*0x5b75c6*/
        {
          if ( v16 != (__int64 *)j[2] ) /*0x5b75d4*/
            break; /*0x5b75d4*/
          v16 = j; /*0x5b75d6*/
        }
        v16 = j; /*0x5b75e3*/
      }
      else
      {
        v16 = (__int64 *)v16[2]; /*0x5b75e8*/
        for ( k = *v22; !*((_BYTE *)k + 25); k = (__int64 *)*k ) /*0x5b75ee*/
          v16 = k; /*0x5b7600*/
      }
    }
    sub_BB6F0(&v25, &v25); /*0x5b7623*/
  }
}

// [7/8] Address: 0x5b76c0
// Method: SetupKeyframePopup::updateTimeModeButtons
void __fastcall SetupKeyframePopup_updateTimeModeButtons(_QWORD *a1)
{
  float v2; // xmm0_4
  __int64 v3; // rdi
  unsigned int *v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 *i; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx

  v2 = (*(float (__fastcall **)(_QWORD *, __int64))(*a1 + 1168LL))(a1, 379); /*0x5b76da*/
  v3 = a1[125]; /*0x5b76e0*/
  if ( v3 ) /*0x5b76ee*/
  {
    v4 = *(unsigned int **)(v3 + 56); /*0x5b76f0*/
    v5 = *v4; /*0x5b76f4*/
    if ( (_DWORD)v5 ) /*0x5b76f8*/
    {
      v6 = (__int64 *)*((_QWORD *)v4 + 2); /*0x5b76fa*/
      for ( i = &v6[v5 - 1]; v6 <= i; ++v6 ) /*0x5b770e*/
      {
        v8 = *v6; /*0x5b7710*/
        if ( !*v6 ) /*0x5b7710*/
          break; /*0x5b7716*/
        LOBYTE(v9) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(*v6) == (int)v2; /*0x5b7726*/
        CCMenuItemToggler_toggle(v8, v9); /*0x5b7729*/
      }
    }
  }
}

// [8/8] Address: 0x5b7750
// Method: SetupKeyframePopup::onClose
__int64 __fastcall SetupKeyframePopup_onClose(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // edi
  struct cocos2d::CCObject *v5; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *i; // rdx
  __int64 v10; // rax

  if ( *(_BYTE *)(a1 + 1016) ) /*0x5b775a*/
  {
    v2 = *(_QWORD *)(a1 + 1008); /*0x5b7769*/
    if ( v2 ) /*0x5b7773*/
    {
      v3 = *(_QWORD *)(a1 + 680); /*0x5b7775*/
      v4 = *(_DWORD *)(v3 + 1480); /*0x5b778f*/
      v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v2 + 13936), *(int *)(v3 + 1872)); /*0x5b7795*/
      if ( v5 ) /*0x5b779e*/
      {
        v6 = (unsigned int *)*((_QWORD *)v5 + 7); /*0x5b77a0*/
        v7 = *v6; /*0x5b77a4*/
        if ( (_DWORD)v7 ) /*0x5b77a8*/
        {
          v8 = (__int64 *)*((_QWORD *)v6 + 2); /*0x5b77aa*/
          for ( i = &v8[v7 - 1]; v8 <= i; *(_BYTE *)(v10 + 1897) = 1 ) /*0x5b77b9*/
          {
            v10 = *v8; /*0x5b77c0*/
            if ( !*v8 ) /*0x5b77c0*/
              break; /*0x5b77c6*/
            ++v8; /*0x5b77c8*/
            *(_DWORD *)(v10 + 1480) = v4; /*0x5b77cc*/
          }
        }
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x5b77e9*/
}
