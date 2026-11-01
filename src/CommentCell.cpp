#include <Geode/binding/CommentCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0xc8cf0
// Method: CommentCell::onViewProfile
double __fastcall CommentCell_onViewProfile(__int64 a1)
{
  _QWORD *v1; // rcx
  double result; // xmm0_8
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 928); /*0xc8cf4*/
  if ( v1 ) /*0xc8cfe*/
  {
    v4 = 0; /*0xc8d03*/
    v3 = 0; /*0xc8d0c*/
    LOBYTE(v3) = 0; /*0xc8d16*/
    v5 = 15; /*0xc8d1b*/
    return CCTextInputNode_setString(v1, &v3); /*0xc8d24*/
  }
  return result; /*0xc8d29*/
}

// [2/8] Address: 0x14f890
// Method: CommentCell::CommentCell
__int64 __fastcall CommentCell_CommentCell(__int64 a1, __int64 a2)
{
  SmartTemplateCell_loadFromObject(a1, a2); /*0x14f899*/
  *(_QWORD *)a1 = &CommentCell::`vftable'; /*0x14f8a5*/
  *(_QWORD *)(a1 + 320) = &CommentCell::`vftable'; /*0x14f8af*/
  *(_QWORD *)(a1 + 328) = &CommentCell::`vftable'; /*0x14f8bd*/
  *(_QWORD *)(a1 + 336) = &CommentCell::`vftable'; /*0x14f8cb*/
  *(_QWORD *)(a1 + 344) = &CommentCell::`vftable'; /*0x14f8d9*/
  *(_QWORD *)(a1 + 352) = &CommentCell::`vftable'; /*0x14f8e7*/
  *(_QWORD *)(a1 + 560) = &CommentCell::`vftable'; /*0x14f8f5*/
  *(_QWORD *)(a1 + 568) = &CommentCell::`vftable'; /*0x14f903*/
  *(_QWORD *)(a1 + 576) = 0; /*0x14f90c*/
  *(_QWORD *)(a1 + 584) = 0; /*0x14f913*/
  *(_QWORD *)(a1 + 592) = 0; /*0x14f91a*/
  *(_BYTE *)(a1 + 602) = 0; /*0x14f921*/
  *(_QWORD *)(a1 + 608) = 0; /*0x14f927*/
  return a1; /*0x14f931*/
}

// [3/8] Address: 0x14f940
// Method: CommentCell::init
__int64 __fastcall CommentCell_init(__int64 a1)
{
  *(_QWORD *)(a1 + 576) = 0; /*0x14f942*/
  *(_QWORD *)(a1 + 584) = 0; /*0x14f949*/
  *(_QWORD *)(a1 + 592) = 0; /*0x14f950*/
  *(_BYTE *)(a1 + 602) = 0; /*0x14f957*/
  *(_QWORD *)(a1 + 608) = 0; /*0x14f95d*/
  return 1; /*0x14f966*/
}

// [4/8] Address: 0x152560
// Method: CommentCell::likedItem
void __fastcall CommentCell_likedItem(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a1 + 32); /*0x152560*/
  if ( v4 && a3 == *(_DWORD *)(v4 + 384) ) /*0x152570*/
  {
    v5 = *(_DWORD *)(v4 + 392); /*0x152572*/
    v6 = a1 - 560; /*0x152578*/
    if ( a4 ) /*0x152582*/
      *(_DWORD *)(v4 + 392) = v5 + 1; /*0x152586*/
    else
      *(_DWORD *)(v4 + 392) = v5 - 1; /*0x152593*/
    sub_1525A0(v6); /*0x15258c*/
  }
}

// [5/8] Address: 0x1529e0
// Method: CommentCell::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
__int64 __fastcall CommentCell_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  void *v13; // [rsp+38h] [rbp+10h]
  void *v14; // [rsp+38h] [rbp+10h]
  void *v15; // [rsp+38h] [rbp+10h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1529f7*/
  if ( !(_DWORD)result ) /*0x1529fc*/
  {
    if ( a3 ) /*0x152a04*/
    {
      v6 = a1 - 568; /*0x152a0a*/
      result = *(_QWORD *)(a1 - 568 + 592); /*0x152a11*/
      if ( result ) /*0x152a1b*/
      {
        v7 = *(_DWORD *)(result + 460); /*0x152a21*/
        switch ( v7 ) /*0x152a2a*/
        {
          case 3: /*0x152a2a*/
            v8 = 6; /*0x152a2c*/
            break;
          case 4: /*0x152a2a*/
            v8 = 7; /*0x152a38*/
            break;
          case 5: /*0x152a2a*/
            v8 = 8; /*0x152a44*/
            break;
          default:
            v9 = *(_QWORD *)&qword_905FB0; /*0x152a9d*/
            if ( *(_BYTE *)(v6 + 600) ) /*0x152aa4*/
            {
              if ( !*(_QWORD *)&qword_905FB0 ) /*0x152afa*/
              {
                v15 = operator new(0x690u); /*0x152b06*/
                *(_QWORD *)&qword_905FB0 = sub_214250(v15); /*0x152b14*/
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x152b25*/
                v9 = *(_QWORD *)&qword_905FB0; /*0x152b27*/
              }
              v10 = *(unsigned int **)(v6 + 592); /*0x152b2e*/
              v11 = v10[101]; /*0x152b35*/
              v12 = 1; /*0x152b3c*/
            }
            else
            {
              if ( !*(_QWORD *)&qword_905FB0 ) /*0x152ab0*/
              {
                v14 = operator new(0x690u); /*0x152abc*/
                *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x152aca*/
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x152adb*/
                v9 = *(_QWORD *)&qword_905FB0; /*0x152add*/
              }
              v10 = *(unsigned int **)(v6 + 592); /*0x152ae4*/
              v11 = v10[99]; /*0x152aeb*/
              v12 = 0; /*0x152af2*/
            }
            goto LABEL_20; /*0x152af5*/
        }
        v9 = *(_QWORD *)&qword_905FB0; /*0x152a49*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x152a53*/
        {
          v13 = operator new(0x690u); /*0x152a5f*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x152a6d*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x152a7e*/
          v9 = *(_QWORD *)&qword_905FB0; /*0x152a80*/
        }
        v10 = *(unsigned int **)(v6 + 592); /*0x152a87*/
        v11 = v10[99]; /*0x152a8e*/
        v12 = v8; /*0x152a95*/
LABEL_20:
        sub_23CFB0(v9, v10[96], v12, v11); /*0x152b42*/
        *(_BYTE *)(*(_QWORD *)(v6 + 592) + 440LL) = 1; /*0x152b54*/
        return sub_14F970(v6, *(_QWORD *)(v6 + 592)); /*0x152b65*/
      }
    }
  }
  return result; /*0x152b6a*/
}

// [6/8] Address: 0x152b80
// Method: CommentCell::onUnhide
__int64 __fastcall CommentCell_onUnhide(__int64 a1)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 592) + 400LL) = 0; /*0x152b87*/
  return sub_14F970(a1, *(_QWORD *)(a1 + 592));
}

// [7/8] Address: 0x1ae2c0
// Method: CommentCell::updateLabelValues
void __fastcall CommentCell_updateLabelValues(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // r8
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  v1 = *(_QWORD *)(a1 + 1568); /*0x1ae2ca*/
  if ( v1 ) /*0x1ae2d7*/
  {
    v3 = *(_DWORD *)(v1 + 1036); /*0x1ae2dd*/
    EditorUI_deselectAll(a1); /*0x1ae2e8*/
    v4 = *(_QWORD *)(a1 + 1512); /*0x1ae2ed*/
    v5 = *(_DWORD *)(v4 + 14992) - *(_DWORD *)(v4 + 14996); /*0x1ae2fc*/
    LevelEditorLayer_removeAllObjectsOfType(v4, v3); /*0x1ae302*/
    *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15480LL) += v5 /*0x1ae321*/
                                                   + *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 14996LL)
                                                   - *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 14992LL);
    v6 = *(_QWORD *)(a1 + 1512) + 15472LL; /*0x1ae32e*/
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15568LL); /*0x1ae335*/
    if ( v7 >= 0 ) /*0x1ae33b*/
    {
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15504LL) - v7; /*0x1ae341*/
      v9 = 0; /*0x1ae343*/
      if ( v8 > 1 ) /*0x1ae348*/
      {
        do /*0x1ae35c*/
        {
          if ( v9 >= 7 ) /*0x1ae353*/
            break; /*0x1ae353*/
          v8 = (unsigned int)v8 >> 1; /*0x1ae355*/
          ++v9; /*0x1ae357*/
        }
        while ( (unsigned int)v8 > 1 ); /*0x1ae35c*/
      }
      ++*(_DWORD *)(v6 + 4LL * v9 + 64); /*0x1ae361*/
    }
    *(_DWORD *)(v6 + 96) = *(_DWORD *)(v6 + 32); /*0x1ae36d*/
    EditorUI_updateButtons(a1); /*0x1ae371*/
  }
}
