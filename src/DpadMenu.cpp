#include <Geode/binding/DpadMenu.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x1f0150
// Method: DpadMenu::ccTouchBegan
char __fastcall DpadMenu_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 Location; // rax
  __int64 v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_DWORD *)(a1 + 116) /*0x1f018c*/
    && *(_BYTE *)(a1 - 34)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 320) + 1032LL))(a1 - 320) )
  {
    v4 = *(_QWORD *)(a1 - 104); /*0x1f019a*/
    if ( v4 ) /*0x1f01a1*/
    {
      while ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 344LL))(v4) ) /*0x1f01b1*/
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 504LL))(v4); /*0x1f01bf*/
        if ( !v4 ) /*0x1f01c5*/
          goto LABEL_7; /*0x1f01c5*/
      }
    }
    else
    {
LABEL_7:
      Location = cocos2d::CCTouch::getLocation(a2, &v8); /*0x1f01c7*/
      if ( !(unsigned __int8)sub_497E0(a1 - 320, Location) ) /*0x1f01df*/
      {
        v6 = sub_1F02A0(a1 - 320, a2); /*0x1f01f2*/
        *(_QWORD *)(a1 + 120) = v6; /*0x1f01f7*/
        if ( v6 ) /*0x1f01fe*/
        {
          *(_DWORD *)(a1 + 116) = 1; /*0x1f0200*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 896LL))(v6); /*0x1f0214*/
          return 1; /*0x1f0218*/
        }
      }
    }
  }
  return 0; /*0x1f021c*/
}

// [2/3] Address: 0x1f0240
// Method: DpadMenu::ccTouchMoved
__int64 __fastcall DpadMenu_ccTouchMoved(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx

  result = sub_1F02A0(a1 - 320, a2); /*0x1f0254*/
  v4 = *(_QWORD *)(a1 + 120); /*0x1f0259*/
  v5 = result; /*0x1f025d*/
  if ( result != v4 ) /*0x1f0263*/
  {
    if ( v4 ) /*0x1f0268*/
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 904LL))(v4); /*0x1f026d*/
    *(_QWORD *)(a1 + 120) = v5; /*0x1f0273*/
    if ( v5 ) /*0x1f027a*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 896LL))(v5); /*0x1f0282*/
  }
  return result; /*0x1f0288*/
}

// [3/3] Address: 0x1f03c0
// Method: DpadMenu::~DpadMenu
cocos2d::CCMenu *__fastcall DpadMenu__dtor_DpadMenu(cocos2d::CCMenu *Block, char a2)
{
  cocos2d::CCMenu::~CCMenu(Block); /*0x1f03cf*/
  if ( (a2 & 1) != 0 ) /*0x1f03d8*/
    j_j_free(Block); /*0x1f03e2*/
  return Block; /*0x1f03e7*/
}
