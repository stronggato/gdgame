#include <Geode/binding/EditorSoundConfigInfoLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/19] Address: 0x1928c0
// Method: EditorSoundConfigInfoLayer::ccTouchBegan
__int64 __fastcall EditorSoundConfigInfoLayer_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  cocos2d::CCRect *v6; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF
  float v10; // [rsp+60h] [rbp+8h] BYREF
  float v11; // [rsp+64h] [rbp+Ch]
  float v12; // [rsp+78h] [rbp+20h] BYREF
  float v13; // [rsp+7Ch] [rbp+24h]

  if ( *(_QWORD *)(a1 + 904) ) /*0x1928cf*/
  {
    cocos2d::CCTouch::getLocation(a2, v8); /*0x1928ee*/
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 904), &v12, &unk_904648); /*0x192907*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v10, (const struct cocos2d::CCSize *)(*(_QWORD *)(a1 + 904) + 424LL)); /*0x192920*/
    v6 = (cocos2d::CCRect *)cocos2d::CCRect::CCRect((cocos2d::CCRect *)v9, v12, v13, v10, v11); /*0x192949*/
    if ( cocos2d::CCRect::containsPoint(v6, (const struct cocos2d::CCPoint *)v8) ) /*0x192957*/
      sub_80640(*(_QWORD *)(a1 + 904), a2); /*0x19296b*/
  }
  return FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x192979*/
}

// [2/19] Address: 0x192990
// Method: EditorSoundConfigInfoLayer::ccTouchMoved
__int64 __fastcall EditorSoundConfigInfoLayer_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 904) ) /*0x1929a5*/
    sub_80830(); /*0x1929b4*/
  result = *(unsigned int *)(a2 + 56); /*0x1929b9*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x1929c2*/
  {
    v7 = *(_QWORD *)(a1 + 232); /*0x1929c4*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x1929d3*/
      return result; /*0x1929d3*/
    v7 = *(_QWORD *)(a1 + 304); /*0x1929d5*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 16LL))(v7 + 320, a2, a3); /*0x1929ef*/
}

// [3/19] Address: 0x192a00
// Method: EditorSoundConfigInfoLayer::ccTouchEnded
__int64 __fastcall EditorSoundConfigInfoLayer_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 904) ) /*0x192a15*/
    sub_80AF0(); /*0x192a24*/
  return FLAlertLayer_ccTouchEnded(a1, a2, a3); /*0x192a32*/
}

// [4/19] Address: 0x192a50
// Method: EditorSoundConfigInfoLayer::ccTouchCancelled
__int64 __fastcall EditorSoundConfigInfoLayer_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 904); /*0x192a65*/
  if ( v5 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v5 + 440) ) /*0x192a7d*/
  {
    *(_DWORD *)(v5 + 440) = -1; /*0x192a81*/
    *(_QWORD *)(v5 + 472) = 0; /*0x192a8b*/
    *(_WORD *)(v5 + 480) = 0; /*0x192a92*/
    *(_BYTE *)(v5 + 508) = 0; /*0x192a99*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v5); /*0x192a9f*/
  }
  return FLAlertLayer_ccTouchCancelled(a1, a2, a3); /*0x192aae*/
}

// [5/19] Address: 0x1938d0
// Method: EditorSoundConfigInfoLayer::soundPackDescSaved
// Hidden C++ exception states: #wind=3
void __fastcall EditorSoundConfigInfoLayer_soundPackDescSaved(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  void **v7; // rcx
  void **v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  void *v11; // rcx
  void *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  void *Src[2]; // [rsp+20h] [rbp-40h] BYREF
  size_t Size[2]; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  __int64 v23; // [rsp+58h] [rbp-8h]
  void *v24; // [rsp+90h] [rbp+30h]
  void *v25; // [rsp+A8h] [rbp+48h]

  if ( *(_QWORD *)(a1 + 32) ) /*0x1938ec*/
  {
    v5 = sub_3E4F0(&v21, a2); /*0x1938fa*/
    v6 = v5; /*0x1938ff*/
    if ( *(_QWORD *)(v5 + 16) ) /*0x193906*/
    {
      cocos2d::ZipUtils::base64URLEncode(Src, v5); /*0x193942*/
    }
    else
    {
      *(_OWORD *)Src = 0; /*0x19390f*/
      Size[0] = 0; /*0x193913*/
      Size[1] = 0; /*0x193917*/
      *(_OWORD *)Src = *(_OWORD *)v5; /*0x19391e*/
      *(_OWORD *)Size = *(_OWORD *)(v5 + 16); /*0x193926*/
      *(_QWORD *)(v5 + 16) = 0; /*0x19392a*/
      *(_QWORD *)(v5 + 24) = 15; /*0x19392e*/
      *(_BYTE *)v5 = 0; /*0x193936*/
    }
    sub_3C310(v6); /*0x19394c*/
    v7 = (void **)(*(_QWORD *)(a1 + 32) + 416LL); /*0x19395d*/
    if ( v7 != Src ) /*0x19396b*/
    {
      v8 = Src; /*0x19396d*/
      if ( Size[1] > 0xF ) /*0x193976*/
        v8 = (void **)Src[0]; /*0x193976*/
      sub_3F5A0(v7, v8, Size[0]); /*0x19397f*/
    }
    sub_3C310(Src); /*0x193989*/
    v9 = sub_3E4F0(&v21, a3); /*0x193995*/
    v10 = v9; /*0x19399a*/
    v11 = (void *)(*(_QWORD *)(a1 + 32) + 448LL); /*0x1939a5*/
    if ( v11 != (void *)v9 ) /*0x1939af*/
    {
      v12 = (void *)v9; /*0x1939b1*/
      if ( *(_QWORD *)(v9 + 24) > 0xFu ) /*0x1939b9*/
        v12 = *(void **)v9; /*0x1939bb*/
      sub_3F5A0(v11, v12, *(_QWORD *)(v9 + 16)); /*0x1939c2*/
    }
    sub_3C310(v10); /*0x1939cb*/
    if ( (unsigned __int8)sub_193B80(a1 - 1040) /*0x1939fc*/
      && *(int *)(*(_QWORD *)(a1 + 32) + 320LL) > 0
      && *(_DWORD *)(a1 + 40) != 2 )
    {
      v13 = a1 + 8; /*0x193a02*/
      if ( a1 == 1040 ) /*0x193a09*/
        v13 = 0; /*0x193a09*/
      v14 = *(_QWORD *)&qword_905FB0; /*0x193a0d*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x193a17*/
      {
        v24 = operator new(0x690u); /*0x193a23*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v24); /*0x193a30*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x193a41*/
        v14 = *(_QWORD *)&qword_905FB0; /*0x193a43*/
      }
      *(_QWORD *)(v14 + 1488) = v13; /*0x193a4a*/
      sub_3E4F0(&v21, *(_QWORD *)(a1 + 32) + 416LL); /*0x193a68*/
      v15 = *(_QWORD *)&qword_905FB0; /*0x193a6e*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x193a78*/
      {
        v25 = operator new(0x690u); /*0x193a84*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0x193a91*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x193aa2*/
        v15 = *(_QWORD *)&qword_905FB0; /*0x193aa4*/
      }
      if ( GJBaseGameLayer_activateEventTrigger(v15, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 320LL), (__int64)&v21, a3) ) /*0x193abc*/
      {
        v16 = *(_QWORD *)(a1 + 144); /*0x193ac9*/
        if ( v16 ) /*0x193ad3*/
        {
          *(_QWORD *)(v16 + 664) = 0; /*0x193ad5*/
          *(_QWORD *)(a1 + 144) = 0; /*0x193adc*/
        }
        v21 = 0; /*0x193ae6*/
        v22 = 0; /*0x193aea*/
        v23 = 0; /*0x193aee*/
        *(_QWORD *)&v21 = sub_3C460(32); /*0x193afc*/
        v22 = 23; /*0x193b00*/
        v23 = 31; /*0x193b08*/
        strcpy((char *)v21, "Updating description..."); /*0x193b17*/
        v17 = a1 + 16; /*0x193b3c*/
        if ( a1 == 1040 ) /*0x193b43*/
          v17 = 0; /*0x193b43*/
        v18 = sub_39D2A0(v17, &v21); /*0x193b4b*/
        *(_QWORD *)(a1 + 144) = v18; /*0x193b50*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 1064LL))(v18); /*0x193b64*/
      }
    }
  }
}

// [6/19] Address: 0x193bf0
// Method: EditorSoundConfigInfoLayer::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall EditorSoundConfigInfoLayer_uploadActionFinished(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  cocos2d::CCArray *v7; // rcx
  unsigned int v8; // ebx
  struct cocos2d::CCObject *v9; // rax
  struct cocos2d::CCObject *v10; // rdi
  struct cocos2d::CCObject *v11; // rdx
  void **v12; // rdx
  void **v13; // rdx
  void *Src[4]; // [rsp+20h] [rbp-60h] BYREF
  void *v15[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h]
  __int64 v18; // [rsp+78h] [rbp-8h]

  if ( a3 == 73 ) /*0x193bf4*/
  {
    v5 = *(_QWORD *)(a1 + 24); /*0x193c1f*/
    if ( v5 ) /*0x193c26*/
    {
      if ( *(_DWORD *)(v5 + 320) == a2 ) /*0x193c32*/
      {
        v6 = sub_182B60(a1); /*0x193c3d*/
        v7 = *(cocos2d::CCArray **)(v6 + 216); /*0x193c40*/
        if ( v7 ) /*0x193c4a*/
        {
          if ( a2 > 0 ) /*0x193c53*/
          {
            v8 = 0; /*0x193c59*/
            if ( cocos2d::CCArray::count(v7) ) /*0x193c5c*/
            {
              while ( 1 ) /*0x193c79*/
              {
                v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v6 + 216), v8); /*0x193c79*/
                v10 = v9; /*0x193c7f*/
                if ( v9 ) /*0x193c85*/
                {
                  if ( *((_DWORD *)v9 + 80) == a2 ) /*0x193c8e*/
                    break; /*0x193c8e*/
                }
                if ( ++v8 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(v6 + 216)) ) /*0x193ca1*/
                  goto LABEL_21; /*0x193ca1*/
              }
              v11 = *(struct cocos2d::CCObject **)(a1 + 24); /*0x193ca8*/
              if ( v9 != v11 ) /*0x193caf*/
              {
                sub_3E4F0(Src, (char *)v11 + 416); /*0x193cc0*/
                if ( (void **)((char *)v10 + 416) != Src ) /*0x193cdb*/
                {
                  v12 = Src; /*0x193cdd*/
                  if ( Src[3] > (char *)&loc_D + 2 ) /*0x193ce6*/
                    v12 = (void **)Src[0]; /*0x193ce6*/
                  sub_3F5A0((char *)v10 + 416, v12, (size_t)Src[2]); /*0x193cef*/
                }
                sub_3C310(Src); /*0x193cf9*/
                sub_3E4F0(v15, *(_QWORD *)(a1 + 24) + 448LL); /*0x193d0d*/
                if ( (void **)((char *)v10 + 448) != v15 ) /*0x193d28*/
                {
                  v13 = v15; /*0x193d2a*/
                  if ( v15[3] > (char *)&loc_D + 2 ) /*0x193d33*/
                    v13 = (void **)v15[0]; /*0x193d33*/
                  sub_3F5A0((char *)v10 + 448, v13, (size_t)v15[2]); /*0x193d3c*/
                }
                sub_3C310(v15); /*0x193d46*/
              }
            }
          }
        }
LABEL_21:
        if ( *(_QWORD *)(a1 + 136) ) /*0x193d4b*/
        {
          v16 = 0; /*0x193d58*/
          v17 = 0; /*0x193d5c*/
          v18 = 0; /*0x193d60*/
          *(_QWORD *)&v16 = sub_3C460(32); /*0x193d6e*/
          v17 = 20; /*0x193d72*/
          v18 = 31; /*0x193d7a*/
          strcpy((char *)v16, "Description updated!"); /*0x193d89*/
          UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 136), &v16); /*0x193da4*/
          *(_QWORD *)(*(_QWORD *)(a1 + 136) + 664LL) = 0; /*0x193db0*/
          *(_QWORD *)(a1 + 136) = 0; /*0x193db7*/
        }
      }
    }
  }
}

// [7/19] Address: 0x193de0
// Method: EditorSoundConfigInfoLayer::uploadActionFailed
void __fastcall EditorSoundConfigInfoLayer_uploadActionFailed(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  if ( a3 == 73 ) /*0x193de4*/
  {
    v3 = *(_QWORD *)(a1 + 24); /*0x193def*/
    if ( v3 ) /*0x193df9*/
    {
      if ( *(_DWORD *)(v3 + 320) == a2 ) /*0x193e05*/
      {
        if ( *(_QWORD *)(a1 + 136) ) /*0x193e0b*/
        {
          v5 = 0; /*0x193e32*/
          *(_QWORD *)&v5 = sub_3C460(32); /*0x193e43*/
          v6 = 31; /*0x193e4b*/
          v7 = 31; /*0x193e54*/
          strcpy((char *)v5, "Failed. Please try again later."); /*0x193e5d*/
          UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 136), &v5); /*0x193e9b*/
          *(_QWORD *)(*(_QWORD *)(a1 + 136) + 664LL) = 0; /*0x193ea7*/
          *(_QWORD *)(a1 + 136) = 0; /*0x193eae*/
        }
      }
    }
  }
}

// [8/19] Address: 0x193ec0
// Method: EditorSoundConfigInfoLayer::onClosePopup
__int64 __fastcall EditorSoundConfigInfoLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x193ed8*/
  LOBYTE(v4) = 1; /*0x193ee1*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x193ee6*/
  *(_QWORD *)(a1 + 128) = 0; /*0x193ef1*/
  return result; /*0x193eec*/
}

// [9/19] Address: 0x1945e0
// Method: EditorSoundConfigInfoLayer::musicActionFinished
__int64 __fastcall EditorSoundConfigInfoLayer_musicActionFinished(__int64 a1, int a2)
{
  __int64 result; // rax

  result = a1; /*0x1945e0*/
  if ( a2 == 2 ) /*0x1945e6*/
  {
    if ( *(_BYTE *)(a1 - 1064 + 1106) ) /*0x1945ef*/
    {
      *(_BYTE *)(a1 + 42) = 0; /*0x1945f8*/
      return SetupSmartTemplateLayer_onClick(); /*0x1945fc*/
    }
  }
  return result; /*0x194601*/
}

// [10/19] Address: 0x194610
// Method: EditorSoundConfigInfoLayer::musicActionFailed
// Hidden C++ exception states: #wind=1
void __fastcall EditorSoundConfigInfoLayer_musicActionFailed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  char v6[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp-10h]

  if ( (_DWORD)a2 == 2 ) /*0x194613*/
  {
    v3 = (__int64 *)(a1 - 1064); /*0x194625*/
    if ( *(_BYTE *)(a1 - 1064 + 1106) ) /*0x19462c*/
    {
      *(_BYTE *)(a1 + 42) = 0; /*0x194639*/
      v9 = 0; /*0x194648*/
      v10 = 0; /*0x19464d*/
      v11 = 15; /*0x194655*/
      LOBYTE(v9) = 0; /*0x19465d*/
      v7 = 15; /*0x194662*/
      v8 = 15; /*0x19466a*/
      strcpy(v6, "Download failed"); /*0x19467a*/
      v4 = *v3; /*0x1946a6*/
      v5 = sub_3A4CA0(v6, a2, a3, 150, &v9); /*0x1946cb*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v4 + 456))(v3, v5, 100); /*0x1946dc*/
    }
  }
}

// [11/19] Address: 0x1946f0
// Method: EditorSoundConfigInfoLayer::textChanged
// Hidden C++ exception states: #wind=1
double __fastcall EditorSoundConfigInfoLayer_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rcx
  void **v6; // rdx
  double result; // xmm0_8
  void *Src[2]; // [rsp+20h] [rbp-28h] BYREF
  size_t Size; // [rsp+30h] [rbp-18h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 528) && a2 == *(_QWORD *)(a1 + 672) ) /*0x19470e*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x194725*/
    *(_OWORD *)Src = 0; /*0x19472b*/
    Size = 0; /*0x194730*/
    v10 = 0; /*0x194739*/
    v4 = -1; /*0x194742*/
    do /*0x194753*/
      ++v4; /*0x194750*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x194753*/
    sub_3C230(Src); /*0x194762*/
    v5 = (void **)(*(_QWORD *)(a1 + 528) + 384LL); /*0x194778*/
    if ( v5 != Src ) /*0x194787*/
    {
      v6 = Src; /*0x194789*/
      if ( v10 > 0xF ) /*0x194794*/
        v6 = (void **)Src[0]; /*0x194794*/
      sub_3F5A0(v5, v6, Size); /*0x19479f*/
    }
    return sub_3C310(Src); /*0x1947aa*/
  }
  return result; /*0x1947af*/
}

// [12/19] Address: 0x1947c0
// Method: EditorSoundConfigInfoLayer::likedItem
__int64 __fastcall EditorSoundConfigInfoLayer_likedItem(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct cocos2d::CCObject *v9; // rdi
  __int64 v10; // rsi
  cocos2d::CCArray *v11; // rcx
  unsigned int v12; // ebx
  struct cocos2d::CCObject *v13; // rax

  result = *(_QWORD *)(a1 + 40); /*0x1947ca*/
  if ( result && a2 == 5 && a3 == *(_DWORD *)(result + 320) ) /*0x1947ed*/
  {
    *(_BYTE *)(result + 545) = 1; /*0x1947f3*/
    v7 = *(_QWORD *)(a1 + 40); /*0x1947fa*/
    *(_DWORD *)(v7 + 352) += 2 * a4 - 1; /*0x194809*/
    if ( sub_182B60(v7) ) /*0x19480f*/
    {
      v9 = 0; /*0x19482c*/
      v10 = sub_182B60(v8); /*0x19482e*/
      v11 = *(cocos2d::CCArray **)(v10 + 208); /*0x194831*/
      if ( v11 ) /*0x19483b*/
      {
        v12 = 0; /*0x194842*/
        if ( cocos2d::CCArray::count(v11) ) /*0x194844*/
        {
          while ( 1 ) /*0x194859*/
          {
            v13 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v10 + 208), v12); /*0x194859*/
            if ( v13 ) /*0x194862*/
            {
              if ( *((_DWORD *)v13 + 80) == a3 ) /*0x19486a*/
                break; /*0x19486a*/
            }
            if ( ++v12 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(v10 + 208)) ) /*0x19487d*/
              goto LABEL_12; /*0x19487d*/
          }
          v9 = v13; /*0x194881*/
        }
      }
LABEL_12:
      if ( v9 ) /*0x194891*/
      {
        if ( v9 != *(struct cocos2d::CCObject **)(a1 + 40) ) /*0x194897*/
        {
          *((_BYTE *)v9 + 545) = 1; /*0x194899*/
          *((_DWORD *)v9 + 88) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 352LL); /*0x1948aa*/
        }
      }
    }
    return sub_1920B0(a1 - 1032); /*0x1948c5*/
  }
  return result; /*0x1948bc*/
}

// [13/19] Address: 0x195780
// Method: EditorSoundConfigInfoLayer::adminActionConfirmed
__int64 __fastcall EditorSoundConfigInfoLayer_adminActionConfirmed(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 == 7002 ) /*0x195786*/
    return sub_1956E0(a1 - 1024, a4); /*0x195792*/
  return result; /*0x195797*/
}

// [14/19] Address: 0x1957a0
// Method: EditorSoundConfigInfoLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=15
void __fastcall EditorSoundConfigInfoLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  void **v17; // rax
  char v18; // bl
  void **v19; // r14
  __int64 v20; // rbx
  __int128 v21; // xmm7
  __m128i v22; // xmm6
  void *v23; // rcx
  void **v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rbx
  void *v28; // rcx
  void *v29; // rcx
  __int64 v30; // rbx
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rdx
  unsigned __int64 v39; // rsi
  void **v40; // rax
  char v41; // bl
  void **v42; // r14
  __int64 v43; // rbx
  __int128 v44; // xmm7
  __m128i v45; // xmm6
  void *v46; // rcx
  void **v47; // rdx
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rax
  int v52; // r14d
  __int64 v53; // rbx
  cocos2d::CCArray *v54; // rcx
  struct cocos2d::CCObject *v55; // rax
  cocos2d::CCArray *v56; // rcx
  int v57; // r14d
  __int64 v58; // rbx
  cocos2d::CCArray *v59; // rcx
  struct cocos2d::CCObject *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  cocos2d::CCObject *v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rbx
  __int64 v68; // rcx
  void *v69; // [rsp+50h] [rbp-B0h]
  void *v70; // [rsp+50h] [rbp-B0h]
  void *v71[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+70h] [rbp-90h]
  unsigned __int64 v73; // [rsp+78h] [rbp-88h]
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v75; // [rsp+90h] [rbp-70h]
  unsigned __int64 v76; // [rsp+98h] [rbp-68h]
  void *Block[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-48h]
  void *v80[2]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v81; // [rsp+D0h] [rbp-30h]

  if ( !a3 ) /*0x1957a3*/
    return; /*0x1957a3*/
  v4 = 0; /*0x1957dc*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1957e8*/
  switch ( v5 ) /*0x1957f0*/
  {
    case 7001: /*0x1957f0*/
      sub_194B60(a1 - 1016, 0); /*0x1957fe*/
      return; /*0x195803*/
    case 7006: /*0x1957f0*/
      if ( *(_DWORD *)(a1 + 64) != 2 || (v7 = *(_QWORD *)(a1 + 56)) == 0 || (v8 = *(_DWORD *)(v7 + 324), v8 <= 0) ) /*0x195832*/
      {
        sub_194B60(a1 - 1016, 1); /*0x195c55*/
        return; /*0x195c5a*/
      }
      *(_OWORD *)Src = 0; /*0x19583b*/
      v75 = 0; /*0x19583f*/
      v76 = 15; /*0x195843*/
      LOBYTE(Src[0]) = 0; /*0x19584b*/
      v9 = sub_182B60(v6); /*0x19584f*/
      LOBYTE(v10) = 1; /*0x19585b*/
      if ( (unsigned __int8)sub_189930(v9, (unsigned int)v8, v10, Src) ) /*0x195860*/
      {
        *(_OWORD *)v71 = 0; /*0x195870*/
        v71[0] = (void *)sub_3C460(48); /*0x19588c*/
        v72 = 43; /*0x195891*/
        v73 = 47; /*0x19589a*/
        strcpy((char *)v71[0], "Sound pack merged into your current sounds."); /*0x1958aa*/
        v14 = sub_3E4F0(v80, v71); /*0x1958f1*/
        v15 = FLAlertLayer_create_0( /*0x19593d*/
                0,
                (unsigned int)"Applied",
                v14,
                (unsigned int)"OK",
                0,
                1132068864,
                0,
                0,
                1065353216);
        sub_3C310(v71); /*0x195945*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 1064LL))(v15); /*0x195957*/
      }
      else
      {
        v16 = v75; /*0x19595e*/
        if ( v75 ) /*0x195965*/
        {
          v71[1] = 0; /*0x1959cd*/
          v19 = Src; /*0x1959d2*/
          if ( v76 > 0xF ) /*0x1959db*/
            v19 = (void **)Src[0]; /*0x1959db*/
          v20 = 0x7FFFFFFFFFFFFFFFLL; /*0x1959e0*/
          if ( v75 > 0x7FFFFFFFFFFFFFFFLL ) /*0x1959ed*/
            sub_8D90(v12, v11, v13); /*0x1963d5*/
          if ( v75 > 0xF ) /*0x1959f7*/
          {
            if ( (v75 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x195a1c*/
            {
              v20 = v75 | 0xF; /*0x195a1e*/
              if ( (v75 | 0xF) < 0x16 ) /*0x195a29*/
                v20 = 22; /*0x195a29*/
            }
            v71[0] = (void *)sub_3C460(v20 + 1); /*0x195a36*/
            v72 = v16; /*0x195a3b*/
            v73 = v20; /*0x195a40*/
            memcpy(v71[0], v19, v16 + 1); /*0x195a4f*/
          }
          else
          {
            v72 = v75; /*0x1959f9*/
            v73 = 15; /*0x1959fe*/
            *(_OWORD *)v71 = *(_OWORD *)v19; /*0x195a0b*/
          }
          v17 = v71; /*0x195a54*/
          v18 = 2; /*0x195a59*/
        }
        else
        {
          *(_OWORD *)Block = 0; /*0x19596a*/
          Block[0] = (void *)sub_3C460(32); /*0x19597b*/
          v78 = 27; /*0x19597f*/
          v79 = 31; /*0x195987*/
          strcpy((char *)Block[0], "Failed to apply sound pack."); /*0x195996*/
          v17 = Block; /*0x1959bf*/
          v18 = 1; /*0x1959c3*/
        }
        v21 = *(_OWORD *)v17; /*0x195a5e*/
        *(_OWORD *)v80 = *(_OWORD *)v17; /*0x195a61*/
        v22 = *((__m128i *)v17 + 1); /*0x195a65*/
        v81 = v22; /*0x195a69*/
        v17[2] = 0; /*0x195a6d*/
        v17[3] = &loc_D + 2; /*0x195a71*/
        *(_BYTE *)v17 = 0; /*0x195a79*/
        if ( (v18 & 2) != 0 ) /*0x195a7f*/
        {
          v18 &= ~2u; /*0x195a81*/
          sub_3C310(v71); /*0x195a89*/
        }
        if ( (v18 & 1) != 0 && v79 > 0xF ) /*0x195a9c*/
        {
          v23 = Block[0]; /*0x195aa1*/
          if ( v79 + 1 >= 0x1000 ) /*0x195aaf*/
          {
            v23 = (void *)*((_QWORD *)Block[0] - 1); /*0x195ab5*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v23 - 8) > 0x1F ) /*0x195ac4*/
              invoke_watson(0, 0, 0, 0, 0); /*0x195ad5*/
          }
          j_j_free(v23); /*0x195adc*/
        }
        v24 = v80; /*0x195ae1*/
        if ( _mm_srli_si128(v22, 8).m128i_u64[0] > 0xF ) /*0x195af8*/
          v24 = (void **)v21; /*0x195af8*/
        *(_OWORD *)v71 = 0; /*0x195aff*/
        v72 = 0; /*0x195b04*/
        v73 = 0; /*0x195b09*/
        v25 = -1; /*0x195b0e*/
        do /*0x195b18*/
          ++v25; /*0x195b15*/
        while ( *((_BYTE *)v24 + v25) ); /*0x195b18*/
        sub_3C230(v71); /*0x195b24*/
        v26 = sub_3E4F0(Block, v71); /*0x195b3c*/
        v27 = FLAlertLayer_create_0(0, (unsigned int)"Error", v26, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x195b88*/
        sub_3C310(v71); /*0x195b90*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 1064LL))(v27); /*0x195ba2*/
        if ( v81.m128i_i64[1] > 0xFuLL ) /*0x195bad*/
        {
          v28 = v80[0]; /*0x195bb2*/
          if ( (unsigned __int64)(v81.m128i_i64[1] + 1) >= 0x1000 ) /*0x195bc0*/
          {
            v28 = (void *)*((_QWORD *)v80[0] - 1); /*0x195bc6*/
            if ( (unsigned __int64)((char *)v80[0] - (char *)v28 - 8) > 0x1F ) /*0x195bd5*/
              invoke_watson(0, 0, 0, 0, 0); /*0x195be6*/
          }
          j_j_free(v28); /*0x195bed*/
        }
      }
      if ( v76 > 0xF ) /*0x195bfb*/
      {
        v29 = Src[0]; /*0x195c04*/
        if ( v76 + 1 >= 0x1000 ) /*0x195c12*/
        {
          v29 = (void *)*((_QWORD *)Src[0] - 1); /*0x195c1c*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v29 - 8) > 0x1F ) /*0x195c2b*/
            invoke_watson(0, 0, 0, 0, 0); /*0x195c40*/
        }
LABEL_79:
        j_j_free(v29); /*0x196084*/
        return; /*0x196089*/
      }
      return; /*0x195bfb*/
    case 7003: /*0x1957f0*/
      v30 = *(_QWORD *)(a1 + 56); /*0x195c6a*/
      if ( v30 ) /*0x195c71*/
      {
        *(_OWORD *)Src = 0; /*0x195c7a*/
        v75 = 0; /*0x195c7e*/
        v76 = 15; /*0x195c82*/
        LOBYTE(Src[0]) = 0; /*0x195c8a*/
        v31 = *(_DWORD *)(v30 + 324); /*0x195c8e*/
        v32 = sub_182B60(v6); /*0x195c94*/
        if ( (unsigned __int8)GJMultiplayerManager_addComment(v32, v31, Src) ) /*0x195ca2*/
        {
          *(_OWORD *)v71 = 0; /*0x195cb2*/
          v71[0] = (void *)sub_3C460(64); /*0x195cce*/
          v72 = 52; /*0x195cd3*/
          v73 = 63; /*0x195cdc*/
          strcpy((char *)v71[0], "Sound pack updated with your current sound settings."); /*0x195cec*/
          v36 = sub_3E4F0(v80, v71); /*0x195d25*/
          v37 = FLAlertLayer_create_0( /*0x195d71*/
                  0,
                  (unsigned int)"Saved",
                  v36,
                  (unsigned int)"OK",
                  0,
                  1132068864,
                  0,
                  0,
                  1065353216);
          sub_3C310(v71); /*0x195d79*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 1064LL))(v37); /*0x195d8b*/
          sub_192340(a1 - 1016); /*0x195d94*/
          EditorUI_onTargetIDChange((_QWORD *)(a1 - 1016), v38); /*0x195da0*/
        }
        else
        {
          v39 = v75; /*0x195daa*/
          if ( v75 ) /*0x195db1*/
          {
            v71[1] = 0; /*0x195dfd*/
            v42 = Src; /*0x195e02*/
            if ( v76 > 0xF ) /*0x195e0b*/
              v42 = (void **)Src[0]; /*0x195e0b*/
            v43 = 0x7FFFFFFFFFFFFFFFLL; /*0x195e10*/
            if ( v75 > 0x7FFFFFFFFFFFFFFFLL ) /*0x195e1d*/
              sub_8D90(v34, v33, v35); /*0x1963cf*/
            if ( v75 > 0xF ) /*0x195e27*/
            {
              if ( (v75 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x195e4c*/
              {
                v43 = v75 | 0xF; /*0x195e4e*/
                if ( (v75 | 0xF) < 0x16 ) /*0x195e59*/
                  v43 = 22; /*0x195e59*/
              }
              v71[0] = (void *)sub_3C460(v43 + 1); /*0x195e66*/
              v72 = v39; /*0x195e6b*/
              v73 = v43; /*0x195e70*/
              memcpy(v71[0], v42, v39 + 1); /*0x195e7f*/
            }
            else
            {
              v72 = v75; /*0x195e29*/
              v73 = 15; /*0x195e2e*/
              *(_OWORD *)v71 = *(_OWORD *)v42; /*0x195e3b*/
            }
            v40 = v71; /*0x195e84*/
            v41 = 8; /*0x195e89*/
          }
          else
          {
            *(_OWORD *)Block = 0; /*0x195db6*/
            Block[0] = (void *)sub_3C460(32); /*0x195dc4*/
            v78 = 20; /*0x195dc8*/
            v79 = 31; /*0x195dd0*/
            strcpy((char *)Block[0], "Failed to overwrite."); /*0x195ddf*/
            v40 = Block; /*0x195def*/
            v41 = 4; /*0x195df3*/
          }
          v44 = *(_OWORD *)v40; /*0x195e8e*/
          *(_OWORD *)v80 = *(_OWORD *)v40; /*0x195e91*/
          v45 = *((__m128i *)v40 + 1); /*0x195e95*/
          v81 = v45; /*0x195e99*/
          v40[2] = 0; /*0x195e9d*/
          v40[3] = &loc_D + 2; /*0x195ea1*/
          *(_BYTE *)v40 = 0; /*0x195ea9*/
          if ( (v41 & 8) != 0 ) /*0x195eaf*/
          {
            v41 &= ~8u; /*0x195eb1*/
            if ( v73 > 0xF ) /*0x195ebd*/
            {
              v46 = v71[0]; /*0x195ec2*/
              if ( v73 + 1 >= 0x1000 ) /*0x195ed1*/
              {
                v46 = (void *)*((_QWORD *)v71[0] - 1); /*0x195ed7*/
                if ( (unsigned __int64)((char *)v71[0] - (char *)v46 - 8) > 0x1F ) /*0x195ee6*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x195ef7*/
              }
              j_j_free(v46); /*0x195efe*/
            }
          }
          if ( (v41 & 4) != 0 ) /*0x195f07*/
            sub_3C310(Block); /*0x195f0d*/
          v47 = v80; /*0x195f12*/
          if ( _mm_srli_si128(v45, 8).m128i_u64[0] > 0xF ) /*0x195f29*/
            v47 = (void **)v44; /*0x195f29*/
          *(_OWORD *)v71 = 0; /*0x195f30*/
          v72 = 0; /*0x195f35*/
          v73 = 0; /*0x195f3a*/
          v48 = -1; /*0x195f3f*/
          do /*0x195f49*/
            ++v48; /*0x195f46*/
          while ( *((_BYTE *)v47 + v48) ); /*0x195f49*/
          sub_3C230(v71); /*0x195f55*/
          v49 = sub_3E4F0(Block, v71); /*0x195f6d*/
          v50 = FLAlertLayer_create_0( /*0x195fb9*/
                  0,
                  (unsigned int)"Error",
                  v49,
                  (unsigned int)"OK",
                  0,
                  1132068864,
                  0,
                  0,
                  1065353216);
          sub_3C310(v71); /*0x195fc1*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 1064LL))(v50); /*0x195fd3*/
          sub_3C310(v80); /*0x195fda*/
        }
        sub_3C310(Src); /*0x195fe4*/
      }
      return; /*0x195fe9*/
  }
  if ( v5 != 7002 ) /*0x195ff3*/
  {
    if ( v5 != 7004 ) /*0x196093*/
    {
      if ( v5 == 7007 ) /*0x1961ab*/
      {
        v62 = qword_906070; /*0x1961b1*/
        if ( !qword_906070 ) /*0x1961bb*/
        {
          v69 = operator new(0x3D0u); /*0x1961c7*/
          qword_906070 = sub_47C350(v69); /*0x1961d5*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x1961e6*/
          v62 = qword_906070; /*0x1961e8*/
        }
        if ( *(_QWORD *)(v62 + 384) ) /*0x1961ef*/
        {
          SetupSmartTemplateLayer_onClick(a1 - 1016); /*0x196255*/
        }
        else
        {
          *(_BYTE *)(a1 + 90) = 1; /*0x1961f9*/
          MusicDownloadManager_addMusicDownloadDelegate(v62, a1 + 48); /*0x196201*/
          v63 = (cocos2d::CCObject *)qword_906070; /*0x196206*/
          if ( !qword_906070 ) /*0x196210*/
          {
            v70 = operator new(0x3D0u); /*0x19621c*/
            qword_906070 = sub_47C350(v70); /*0x19622a*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x19623b*/
            v63 = (cocos2d::CCObject *)qword_906070; /*0x19623d*/
          }
          MusicDownloadManager_getCustomContentURL(v63); /*0x196244*/
        }
        return; /*0x196249*/
      }
      if ( v5 != 7005 ) /*0x196264*/
        return; /*0x196264*/
      v64 = *(_QWORD *)(a1 + 56); /*0x19626a*/
      if ( !v64 ) /*0x196271*/
        return; /*0x196271*/
      v65 = sub_182B60(v6); /*0x196277*/
      if ( !sub_189590(v65, v64) ) /*0x196282*/
      {
        *(_OWORD *)v71 = 0; /*0x196293*/
        v71[0] = (void *)sub_3C460(64); /*0x1962af*/
        v72 = 51; /*0x1962b4*/
        v73 = 63; /*0x1962bd*/
        strcpy((char *)v71[0], "You already have 50 sound packs. Delete some first."); /*0x1962cd*/
        v66 = sub_3E4F0(v80, v71); /*0x196312*/
        v67 = FLAlertLayer_create_0( /*0x19635e*/
                0,
                (unsigned int)"Limit Reached",
                v66,
                (unsigned int)"OK",
                0,
                1132068864,
                0,
                0,
                1065353216);
        sub_3C310(v71); /*0x196366*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 1064LL))(v67); /*0x196378*/
        return; /*0x19637a*/
      }
      v68 = *(_QWORD *)(a1 + 72); /*0x19637c*/
      if ( v68 ) /*0x196383*/
        sub_18C970(v68, 1); /*0x19638a*/
LABEL_115:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 1016) + 1104LL))(a1 - 1016, 0); /*0x19638f*/
      return; /*0x19639b*/
    }
    v51 = *(_QWORD *)(a1 + 56); /*0x196099*/
    if ( !v51 ) /*0x1960a0*/
      return; /*0x1960a0*/
    if ( *(_DWORD *)(a1 + 64) == 2 && (v52 = *(_DWORD *)(v51 + 324), v52 > 0) ) /*0x1960b6*/
    {
      v53 = sub_182B60(v6); /*0x1960bd*/
      v54 = *(cocos2d::CCArray **)(v53 + 216); /*0x1960c0*/
      if ( v54 && cocos2d::CCArray::count(v54) ) /*0x1960d0*/
      {
        while ( 1 ) /*0x1960e9*/
        {
          v55 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v53 + 216), v4); /*0x1960e9*/
          if ( v55 ) /*0x1960f2*/
          {
            if ( *((_DWORD *)v55 + 81) == v52 ) /*0x1960fb*/
              break; /*0x1960fb*/
          }
          if ( ++v4 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(v53 + 216)) ) /*0x19610e*/
            goto LABEL_99; /*0x19610e*/
        }
        v56 = *(cocos2d::CCArray **)(v53 + 216); /*0x196112*/
LABEL_98:
        cocos2d::CCArray::removeObjectAtIndex(v56, v4, 1); /*0x196179*/
      }
    }
    else
    {
      v57 = *(_DWORD *)(v51 + 320); /*0x19611b*/
      v58 = sub_182B60(v6); /*0x196127*/
      v59 = *(cocos2d::CCArray **)(v58 + 208); /*0x19612a*/
      if ( v59 && cocos2d::CCArray::count(v59) ) /*0x196136*/
      {
        while ( 1 ) /*0x196149*/
        {
          v60 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v58 + 208), v4); /*0x196149*/
          if ( v60 ) /*0x196152*/
          {
            if ( *((_DWORD *)v60 + 80) == v57 ) /*0x19615b*/
              break; /*0x19615b*/
          }
          if ( ++v4 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(v58 + 208)) ) /*0x19616e*/
            goto LABEL_99; /*0x19616e*/
        }
        v56 = *(cocos2d::CCArray **)(v58 + 208); /*0x196172*/
        goto LABEL_98; /*0x196172*/
      }
    }
LABEL_99:
    v61 = *(_QWORD *)(a1 + 72); /*0x196184*/
    if ( v61 ) /*0x19618b*/
      cocos2d::CCNode::scheduleOnce(v61, sub_5AB90); /*0x19619b*/
    goto LABEL_115; /*0x1961a1*/
  }
  *(_OWORD *)Block = 0; /*0x195ffc*/
  v78 = 0; /*0x196000*/
  v79 = 15; /*0x196004*/
  LOBYTE(Block[0]) = 0; /*0x19600c*/
  *(_OWORD *)Src = 0; /*0x196010*/
  v75 = 0; /*0x196015*/
  sub_1956E0(a1 - 1016, Block); /*0x196028*/
  sub_685C0(Src); /*0x196032*/
  if ( v79 > 0xF ) /*0x196040*/
  {
    v29 = Block[0]; /*0x196049*/
    if ( v79 + 1 >= 0x1000 ) /*0x196057*/
    {
      v29 = (void *)*((_QWORD *)Block[0] - 1); /*0x19605d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v29 - 8) > 0x1F ) /*0x19606c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x19607d*/
    }
    goto LABEL_79; /*0x19606c*/
  }
}

// [15/19] Address: 0x1963e0
// Method: EditorSoundConfigInfoLayer::onClose
// Hidden C++ exception states: #wind=8
__int64 __fastcall EditorSoundConfigInfoLayer_onClose(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  void *v16; // [rsp+30h] [rbp+8h]
  void *v17; // [rsp+30h] [rbp+8h]
  void *v18; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD **)&qword_905FB0; /*0x1963fc*/
  if ( *(_QWORD *)&qword_905FB0 /*0x19643d*/
    || (v16 = operator new(0x690u),
        *(_QWORD *)&qword_905FB0 = sub_214250(v16),
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0),
        (v2 = *(_QWORD **)&qword_905FB0) != 0) )
  {
    v3 = a1 + 1000; /*0x196443*/
    if ( !a1 ) /*0x19644d*/
      v3 = 0; /*0x19644d*/
    if ( !v2 ) /*0x196454*/
    {
      v17 = operator new(0x690u); /*0x196460*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0x19646e*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x19647f*/
      v2 = *(_QWORD **)&qword_905FB0; /*0x196481*/
    }
    if ( v2[183] == v3 ) /*0x19648f*/
      v2[183] = 0; /*0x196491*/
    v4 = a1 + 1008; /*0x196498*/
    if ( !a1 ) /*0x1964a2*/
      v4 = 0; /*0x1964a2*/
    if ( v2[184] == v4 ) /*0x1964ad*/
      v2[184] = 0; /*0x1964af*/
    v5 = a1 + 1048; /*0x1964b6*/
    if ( !a1 ) /*0x1964c0*/
      v5 = 0; /*0x1964c0*/
    if ( v2[186] == v5 ) /*0x1964cb*/
      v2[186] = 0; /*0x1964cd*/
  }
  v6 = a1 + 1064; /*0x1964d4*/
  if ( !a1 ) /*0x1964de*/
    v6 = 0; /*0x1964de*/
  v7 = qword_906070; /*0x1964e2*/
  if ( !qword_906070 ) /*0x1964ec*/
  {
    v18 = operator new(0x3D0u); /*0x1964f8*/
    qword_906070 = sub_47C350(v18); /*0x196506*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x196517*/
    v7 = qword_906070; /*0x19651a*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v7, v6); /*0x196524*/
  v11 = *(_QWORD *)(a1 + 1216); /*0x196529*/
  if ( v11 ) /*0x196533*/
  {
    *(_QWORD *)(v11 + 608) = 0; /*0x196535*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1216) + 1032LL))(*(_QWORD *)(a1 + 1216), 0); /*0x196548*/
    *(_QWORD *)(a1 + 1216) = 0; /*0x19654e*/
  }
  v12 = *(_QWORD *)(a1 + 1096); /*0x196555*/
  if ( v12 ) /*0x19655f*/
    LoadingCircle_fadeAndRemove(v12, v8, v9, v10); /*0x196561*/
  *(_QWORD *)(a1 + 1096) = 0; /*0x196566*/
  v13 = *(_QWORD *)(a1 + 1088); /*0x19656d*/
  if ( v13 ) /*0x196577*/
  {
    v14 = *(_DWORD *)(a1 + 1080); /*0x196579*/
    if ( v14 == 2 || v14 == 1 ) /*0x196587*/
      cocos2d::CCNode::scheduleOnce(v13, sub_5AB90); /*0x196593*/
  }
  return SetupTriggerPopup_onClose(a1); /*0x19659f*/
}

// [16/19] Address: 0x1965c0
// Method: EditorSoundConfigInfoLayer::downloadEditorSoundFinished
// Hidden C++ exception states: #wind=1
int __fastcall EditorSoundConfigInfoLayer_downloadEditorSoundFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  int result; // eax
  __int64 v8; // rcx
  struct cocos2d::CCObject *v9; // rsi
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r12d
  __int64 v17; // rbp
  cocos2d::CCArray *v18; // rcx
  unsigned int v19; // ebx
  struct cocos2d::CCObject *v20; // rax
  __int128 v21; // [rsp+50h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-58h]
  __int64 v23; // [rsp+68h] [rbp-50h]
  _BYTE v24[32]; // [rsp+70h] [rbp-48h] BYREF

  if ( !a2 || (v6 = *(_QWORD *)(a1 + 72)) == 0 || (result = *(_DWORD *)(v6 + 320), *(_DWORD *)(a2 + 320) == result) ) /*0x1965f9*/
  {
    *(_BYTE *)(a1 + 104) = 0; /*0x1965ff*/
    v8 = *(_QWORD *)(a1 + 96); /*0x196603*/
    if ( v8 ) /*0x19660a*/
      LoadingCircle_fadeAndRemove(v8, a2, a3, a4); /*0x19660c*/
    v9 = 0; /*0x196611*/
    *(_QWORD *)(a1 + 96) = 0; /*0x196613*/
    if ( a2 ) /*0x19661a*/
    {
      v13 = *(_QWORD *)(a1 + 72); /*0x1966ee*/
      if ( v13 ) /*0x1966f5*/
      {
        sub_35DD00(v13, a2); /*0x1966fe*/
        v14 = *(_QWORD *)(a1 + 72); /*0x196703*/
        if ( *(_BYTE *)(v14 + 328) ) /*0x196707*/
          *(_DWORD *)(v14 + 336) = *(_DWORD *)(v14 + 332); /*0x196716*/
        if ( sub_182B60(v14) ) /*0x19671c*/
        {
          v16 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 320LL); /*0x19672e*/
          v17 = sub_182B60(v15); /*0x19673a*/
          v18 = *(cocos2d::CCArray **)(v17 + 208); /*0x19673d*/
          if ( v18 ) /*0x196747*/
          {
            v19 = 0; /*0x196749*/
            if ( cocos2d::CCArray::count(v18) ) /*0x19674b*/
            {
              while ( 1 ) /*0x196769*/
              {
                v20 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v17 + 208), v19); /*0x196769*/
                if ( v20 ) /*0x196772*/
                {
                  if ( *((_DWORD *)v20 + 80) == v16 ) /*0x19677b*/
                    break; /*0x19677b*/
                }
                if ( ++v19 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(v17 + 208)) ) /*0x19678e*/
                  goto LABEL_19; /*0x19678e*/
              }
              v9 = v20; /*0x196792*/
            }
          }
LABEL_19:
          if ( v9 && v9 != *(struct cocos2d::CCObject **)(a1 + 72) ) /*0x19679e*/
            sub_35DD00(v9, a2); /*0x1967a6*/
        }
      }
      EditorUI_onTargetIDChange((_QWORD *)(a1 - 1000), a2); /*0x1967b2*/
      result = sub_192340(a1 - 1000); /*0x1967be*/
      if ( *(_BYTE *)(a1 + 105) ) /*0x1967c3*/
      {
        *(_BYTE *)(a1 + 105) = 0; /*0x1967c9*/
        return sub_192AE0(a1 - 1000, 0); /*0x1967d6*/
      }
    }
    else
    {
      v21 = 0; /*0x196623*/
      *(_QWORD *)&v21 = sub_3C460(32); /*0x19663c*/
      v22 = 16; /*0x196641*/
      v23 = 31; /*0x19664a*/
      strcpy((char *)v21, "Download failed."); /*0x19665a*/
      v10 = sub_3E4F0(v24, &v21); /*0x196678*/
      v11 = FLAlertLayer_create_0(0, (unsigned int)"Error", v10, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x1966c4*/
      sub_3C310(&v21); /*0x1966cc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 1064LL))(v11); /*0x1966d7*/
      return EditorUI_onTargetIDChange((_QWORD *)(a1 - 1000), v12); /*0x1966e4*/
    }
  }
  return result; /*0x1967db*/
}

// [17/19] Address: 0x196800
// Method: EditorSoundConfigInfoLayer::downloadEditorSoundFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall EditorSoundConfigInfoLayer_downloadEditorSoundFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int128 v9; // [rsp+50h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp-30h]
  _BYTE v12[32]; // [rsp+70h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 72); /*0x196815*/
  if ( !result || (_DWORD)a2 == *(_DWORD *)(result + 320) ) /*0x196824*/
  {
    *(_WORD *)(a1 + 104) = 0; /*0x19682a*/
    v6 = *(_QWORD *)(a1 + 96); /*0x196830*/
    if ( v6 ) /*0x196837*/
      LoadingCircle_fadeAndRemove(v6, a2, a3, a4); /*0x196839*/
    *(_QWORD *)(a1 + 96) = 0; /*0x196840*/
    EditorUI_onTargetIDChange((_QWORD *)(a1 - 1000), a2); /*0x19684b*/
    v9 = 0; /*0x196853*/
    *(_QWORD *)&v9 = sub_3C460(64); /*0x19686c*/
    v10 = 52; /*0x196871*/
    v11 = 63; /*0x19687a*/
    strcpy((char *)v9, "Could not download this sound pack. Try again later."); /*0x19688a*/
    v7 = sub_3E4F0(v12, &v9); /*0x1968c7*/
    v8 = FLAlertLayer_create_0( /*0x196913*/
           0,
           (unsigned int)"Download Failed",
           v7,
           (unsigned int)"OK",
           0,
           1132068864,
           0,
           0,
           1065353216);
    sub_3C310(&v9); /*0x19691b*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 1064LL))(v8); /*0x19692d*/
  }
  return result; /*0x19692f*/
}

// [18/19] Address: 0x196950
// Method: EditorSoundConfigInfoLayer::deleteEditorSoundFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall EditorSoundConfigInfoLayer_deleteEditorSoundFinished(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  cocos2d::CCTouchDispatcher *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  _BYTE v16[32]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v17; // [rsp+70h] [rbp-58h] BYREF
  __int64 v18; // [rsp+80h] [rbp-48h]
  __int64 v19; // [rsp+88h] [rbp-40h]

  result = *(_QWORD *)(a1 + 64); /*0x19696c*/
  if ( !result || a2 == *(_DWORD *)(result + 320) ) /*0x19697b*/
  {
    v5 = sub_182B60(a1); /*0x196981*/
    v6 = sub_189290(v5, a2); /*0x19698b*/
    v7 = v6; /*0x196990*/
    if ( v6 ) /*0x196998*/
    {
      *(_DWORD *)(v6 + 320) = 0; /*0x19699a*/
      *(_QWORD *)(v6 + 368) = 0; /*0x1969a0*/
      *(_DWORD *)(v6 + 336) = 0; /*0x1969a7*/
      *(_QWORD *)(v6 + 348) = 0; /*0x1969ad*/
      *(_BYTE *)(v6 + 376) = 0; /*0x1969b4*/
      *(_DWORD *)(v6 + 364) = 0; /*0x1969bb*/
      *(_BYTE *)(v6 + 545) = 0; /*0x1969c1*/
    }
    v8 = *(_QWORD *)(a1 + 64); /*0x1969c8*/
    if ( v8 && v8 != v7 && *(_BYTE *)(v8 + 328) ) /*0x1969d6*/
    {
      *(_DWORD *)(v8 + 320) = 0; /*0x1969df*/
      *(_QWORD *)(v8 + 368) = 0; /*0x1969e5*/
      *(_DWORD *)(v8 + 336) = 0; /*0x1969ec*/
      *(_QWORD *)(v8 + 348) = 0; /*0x1969f2*/
      *(_BYTE *)(v8 + 376) = 0; /*0x1969f9*/
      *(_DWORD *)(v8 + 364) = 0; /*0x196a00*/
      *(_BYTE *)(v8 + 545) = 0; /*0x196a06*/
    }
    v9 = sub_182B60(v7); /*0x196a0d*/
    sub_189170(v9, a2); /*0x196a17*/
    v11 = cocos2d::CCDirector::sharedDirector(v10); /*0x196a1c*/
    v12 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 144LL))(v11); /*0x196a2f*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v12, (struct cocos2d::CCObject *)(a1 - 1008)); /*0x196a3b*/
    v13 = *(_QWORD *)(a1 + 80); /*0x196a41*/
    if ( v13 ) /*0x196a4b*/
      cocos2d::CCNode::scheduleOnce(v13, sub_5AB90); /*0x196a57*/
    v17 = 0; /*0x196a60*/
    *(_QWORD *)&v17 = sub_3C460(48); /*0x196a7f*/
    v18 = 35; /*0x196a84*/
    v19 = 47; /*0x196a90*/
    strcpy((char *)v17, "Sound pack removed from the server."); /*0x196aa3*/
    v14 = sub_3E4F0(v16, &v17); /*0x196ae1*/
    v15 = FLAlertLayer_create_0(0, (unsigned int)"Deleted", v14, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x196b2a*/
    sub_3C310(&v17); /*0x196b32*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 1064LL))(v15); /*0x196b3d*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 1008) + 1104LL))(a1 - 1008, 0); /*0x196b53*/
  }
  return result; /*0x196b59*/
}

// [19/19] Address: 0x196b80
// Method: EditorSoundConfigInfoLayer::deleteEditorSoundFailed
__int64 __fastcall EditorSoundConfigInfoLayer_deleteEditorSoundFailed(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  const char *v4; // rdx
  const char *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp-10h]

  result = *(_QWORD *)(a1 + 64); /*0x196b84*/
  if ( !result || a2 == *(_DWORD *)(result + 320) ) /*0x196b93*/
  {
    v9 = 0; /*0x196ba9*/
    v4 = "Featured or popular sound packs cannot be deleted."; /*0x196bb2*/
    v10 = 0; /*0x196bb9*/
    if ( a3 != -21 ) /*0x196bc2*/
      v4 = "Could not delete this sound pack from the server."; /*0x196bc2*/
    v5 = "Cannot Delete"; /*0x196bc6*/
    if ( a3 != -21 ) /*0x196bd7*/
      v5 = "Delete Failed"; /*0x196bd7*/
    v6 = -1; /*0x196bdb*/
    v8 = 0; /*0x196be2*/
    do /*0x196bf3*/
      ++v6; /*0x196bf0*/
    while ( v4[v6] ); /*0x196bf3*/
    sub_3C230(&v8); /*0x196bff*/
    v7 = FLAlertLayer_create(0, (_DWORD)v5, (unsigned int)&v8, (unsigned int)"OK", 0); /*0x196c1e*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0x196c30*/
  }
  return result; /*0x196c37*/
}
