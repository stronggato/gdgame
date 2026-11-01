#include <Geode/binding/EditorSFXActionConfigLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x180e50
// Method: EditorSFXActionConfigLayer::~EditorSFXActionConfigLayer
cocos2d::CCNode *__fastcall EditorSFXActionConfigLayer__dtor_EditorSFXActionConfigLayer(
        cocos2d::CCNode *Block,
        char a2)
{
  *(_QWORD *)Block = &EditorSFXActionConfigLayer::`vftable'; /*0x180e63*/
  *((_QWORD *)Block + 40) = &EditorSFXActionConfigLayer::`vftable'; /*0x180e70*/
  *((_QWORD *)Block + 41) = &EditorSFXActionConfigLayer::`vftable'; /*0x180e7e*/
  *((_QWORD *)Block + 42) = &EditorSFXActionConfigLayer::`vftable'; /*0x180e8c*/
  *((_QWORD *)Block + 43) = &EditorSFXActionConfigLayer::`vftable'; /*0x180e9a*/
  *((_QWORD *)Block + 44) = &EditorSFXActionConfigLayer::`vftable'; /*0x180ea8*/
  *((_QWORD *)Block + 51) = &EditorSFXActionConfigLayer::`vftable'; /*0x180eb6*/
  *((_QWORD *)Block + 54) = &EditorSFXActionConfigLayer::`vftable'; /*0x180ec4*/
  *((_QWORD *)Block + 68) = &EditorSFXActionConfigLayer::`vftable'; /*0x180ed2*/
  *((_QWORD *)Block + 83) = &EditorSFXActionConfigLayer::`vftable'; /*0x180ee0*/
  *((_QWORD *)Block + 84) = &EditorSFXActionConfigLayer::`vftable'; /*0x180eee*/
  *((_QWORD *)Block + 125) = &EditorSFXActionConfigLayer::`vftable'; /*0x180efc*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x180f03*/
  if ( (a2 & 1) != 0 ) /*0x180f0b*/
    j_j_free(Block); /*0x180f15*/
  return Block; /*0x180f1a*/
}

// [2/9] Address: 0x182240
// Method: EditorSFXActionConfigLayer::getValue
// attributes: thunk
double __fastcall EditorSFXActionConfigLayer_getValue(__int64 a1, int a2)
{
  return SetupTriggerPopup_getValue(a1, a2);
}

// [3/9] Address: 0x1823b0
// Method: EditorSFXActionConfigLayer::sfxBrowserClosed
void __fastcall EditorSFXActionConfigLayer_sfxBrowserClosed(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  struct cocos2d::CCObject *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  cocos2d::CCArray **v9; // rax

  if ( a2 && *(int *)(a2 + 1088) > 0 ) /*0x1823cd*/
  {
    v4 = GJRobotSprite_create(); /*0x1823d4*/
    v5 = (struct cocos2d::CCObject *)v4; /*0x1823d9*/
    if ( v4 ) /*0x1823df*/
    {
      v6 = *(unsigned int *)(a2 + 1024); /*0x1823e1*/
      *(_DWORD *)(v4 + 1892) = v6; /*0x1823e7*/
      v7 = *(_DWORD *)(a1 + 8); /*0x1823ed*/
      v8 = sub_182B60(v6); /*0x1823f0*/
      v9 = (cocos2d::CCArray **)sub_182E90(v8, v7); /*0x1823fa*/
      cocos2d::CCArray::addObject(*v9, v5); /*0x182405*/
      cocos2d::CCNode::scheduleOnce(a1 - 1000, sub_182440); /*0x18241c*/
    }
  }
}

// [4/9] Address: 0x182660
// Method: EditorSFXActionConfigLayer::rebuildContent
// attributes: thunk
__int64 EditorSFXActionConfigLayer_rebuildContent()
{
  return sub_1816A0();
}

// [5/9] Address: 0x182670
// Method: EditorSFXActionConfigLayer::onClose
__int64 __fastcall EditorSFXActionConfigLayer_onClose(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 1024); /*0x182680*/
  if ( v2 ) /*0x18268a*/
    cocos2d::CCNode::scheduleOnce(v2, sub_5AB90); /*0x182696*/
  return SetupTriggerPopup_onClose(a1); /*0x1826a2*/
}

// [6/9] Address: 0x182800
// Method: EditorSFXActionConfigLayer::ccTouchBegan
char __fastcall EditorSFXActionConfigLayer_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  char result; // al
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-20h] BYREF
  float v11; // [rsp+60h] [rbp+8h] BYREF
  float v12; // [rsp+64h] [rbp+Ch]
  float v13; // [rsp+78h] [rbp+20h] BYREF
  float v14; // [rsp+7Ch] [rbp+24h]

  if ( *(_QWORD *)(a1 + 712) ) /*0x18280f*/
  {
    cocos2d::CCTouch::getLocation(a2, v9); /*0x18282e*/
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 712), &v13, &unk_9045A8); /*0x182847*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v11, (const struct cocos2d::CCSize *)(*(_QWORD *)(a1 + 712) + 424LL)); /*0x182860*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v10, v13, v14, v11, v12); /*0x182889*/
    if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v10, (const struct cocos2d::CCPoint *)v9) ) /*0x182899*/
    {
      v6 = *(_QWORD *)(a1 + 712); /*0x1828a3*/
      if ( v6 ) /*0x1828ad*/
        sub_80640(v6, a2); /*0x1828b2*/
      v7 = *(_QWORD *)(a1 + 720); /*0x1828b7*/
      if ( v7 ) /*0x1828c1*/
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 8LL))( /*0x1828d3*/
               v7 + 320,
               a2,
               a3) )
        {
          FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x1828e3*/
          *(_BYTE *)(a1 + 728) = 1; /*0x1828e8*/
          return 1; /*0x182900*/
        }
      }
    }
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x18290a*/
  *(_BYTE *)(a1 + 728) = 0; /*0x18290f*/
  if ( result ) /*0x182918*/
    return 1; /*0x182918*/
  return result; /*0x1828f1*/
}

// [7/9] Address: 0x182930
// Method: EditorSFXActionConfigLayer::ccTouchMoved
__int64 __fastcall EditorSFXActionConfigLayer_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx

  if ( *(_QWORD *)(a1 + 712) ) /*0x182945*/
  {
    sub_80830(); /*0x182954*/
    v6 = *(_QWORD *)(a1 + 712); /*0x182959*/
    if ( *(_BYTE *)(v6 + 481) ) /*0x182960*/
    {
      *(_BYTE *)(v6 + 481) = 0; /*0x182969*/
      if ( !*(_BYTE *)(a1 + 728) ) /*0x182977*/
        goto LABEL_7; /*0x182977*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 720) + 320LL) + 32LL))( /*0x182990*/
        *(_QWORD *)(a1 + 720) + 320LL,
        a2,
        a3);
      *(_BYTE *)(a1 + 728) = 0; /*0x182993*/
    }
  }
  if ( *(_BYTE *)(a1 + 728) ) /*0x18299a*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 720) + 320LL) + 16LL))( /*0x1829ba*/
      *(_QWORD *)(a1 + 720) + 320LL,
      a2,
      a3);
LABEL_7:
  result = *(unsigned int *)(a2 + 56); /*0x1829bd*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x1829c6*/
  {
    v8 = *(_QWORD *)(a1 + 232); /*0x1829c8*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x1829d7*/
      return result; /*0x1829d7*/
    v8 = *(_QWORD *)(a1 + 304); /*0x1829d9*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 16LL))(v8 + 320, a2, a3); /*0x1829f3*/
}

// [8/9] Address: 0x182a10
// Method: EditorSFXActionConfigLayer::ccTouchEnded
__int64 __fastcall EditorSFXActionConfigLayer_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char v7; // si
  __int64 *v8; // rcx
  __int64 v9; // rax

  v5 = *(_QWORD *)(a1 + 712); /*0x182a2a*/
  if ( v5 && *(_BYTE *)(v5 + 480) ) /*0x182a39*/
  {
    v7 = 1; /*0x182a42*/
  }
  else
  {
    v7 = 0; /*0x182a47*/
    if ( !v5 ) /*0x182a4d*/
      goto LABEL_6; /*0x182a4d*/
  }
  sub_80AF0(v5); /*0x182a4f*/
LABEL_6:
  if ( *(_BYTE *)(a1 + 728) ) /*0x182a54*/
  {
    v8 = (__int64 *)(*(_QWORD *)(a1 + 720) + 320LL); /*0x182a67*/
    v9 = *v8; /*0x182a71*/
    if ( v7 ) /*0x182a77*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 32))(v8, a2, a3); /*0x182a79*/
    else
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 24))(v8, a2, a3); /*0x182a7e*/
    *(_BYTE *)(a1 + 728) = 0; /*0x182a81*/
  }
  return FLAlertLayer_ccTouchEnded(a1, a2); /*0x182a91*/
}

// [9/9] Address: 0x182ab0
// Method: EditorSFXActionConfigLayer::ccTouchCancelled
__int64 __fastcall EditorSFXActionConfigLayer_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 712); /*0x182ac5*/
  if ( v5 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v5 + 440) ) /*0x182add*/
  {
    *(_DWORD *)(v5 + 440) = -1; /*0x182ae1*/
    *(_QWORD *)(v5 + 472) = 0; /*0x182aeb*/
    *(_WORD *)(v5 + 480) = 0; /*0x182af2*/
    *(_BYTE *)(v5 + 508) = 0; /*0x182af9*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v5); /*0x182aff*/
  }
  if ( *(_BYTE *)(a1 + 728) ) /*0x182b05*/
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 720) + 320LL) + 32LL))( /*0x182b25*/
      *(_QWORD *)(a1 + 720) + 320LL,
      a2,
      a3);
    *(_BYTE *)(a1 + 728) = 0; /*0x182b28*/
  }
  return FLAlertLayer_ccTouchCancelled(a1, a2); /*0x182b38*/
}
