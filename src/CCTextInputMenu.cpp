#include <Geode/binding/CCTextInputMenu.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x4c250
// Method: CCTextInputMenu::~CCTextInputMenu
cocos2d::CCLayer *__fastcall CCTextInputMenu__dtor_CCTextInputMenu(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCLayer::~CCLayer(Block); /*0x4c25f*/
  if ( (a2 & 1) != 0 ) /*0x4c268*/
    j_j_free(Block); /*0x4c272*/
  return Block; /*0x4c277*/
}

// [2/4] Address: 0x4cad0
// Method: CCTextInputMenu::registerWithTouchDispatcher
void __fastcall CCTextInputMenu_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  struct cocos2d::CCTouchDelegate *v6; // rbx
  int v7; // edi
  cocos2d::CCTouchDispatcher *v8; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x4caed*/
  v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x4cafc*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x4caff*/
  v6 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x4cb08*/
  v7 = *(_DWORD *)(v5 + 128); /*0x4cb0f*/
  if ( !a1 ) /*0x4cb24*/
    v6 = 0; /*0x4cb24*/
  v8 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4); /*0x4cb28*/
  cocos2d::CCTouchDispatcher::addTargetedDelegate(v8, v6, v7 - 2, 1); /*0x4cb4c*/
}

// [3/4] Address: 0x4cb60
// Method: CCTextInputMenu::ccTouchBegan
char __fastcall CCTextInputMenu_ccTouchBegan(__int64 a1, __int64 a2)
{
  const struct cocos2d::CCPoint *Location; // rax
  __int64 v4; // rdx
  __int64 v6; // rax
  cocos2d::CCObject *v7; // rbx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  Location = (const struct cocos2d::CCPoint *)cocos2d::CCTouch::getLocation(a2, &v8); /*0x4cb74*/
  if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)(a1 + 96), Location) ) /*0x4cb81*/
    return 1; /*0x4cb8b*/
  v6 = *(_QWORD *)(a1 + 88); /*0x4cb93*/
  v7 = *(cocos2d::CCObject **)(v6 + 704); /*0x4cb97*/
  if ( v7 ) /*0x4cba1*/
  {
    *(_QWORD *)(v6 + 704) = 0; /*0x4cba3*/
    LOBYTE(v4) = 1; /*0x4cbae*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 520LL))(v7, v4); /*0x4cbb6*/
    cocos2d::CCObject::release(v7); /*0x4cbbf*/
  }
  return 0; /*0x4cb8d*/
}

// [4/4] Address: 0x4cbd0
// Method: CCTextInputMenu::rightClick
char __fastcall CCTextInputMenu_rightClick(__int64 a1, float a2, float a3)
{
  const struct cocos2d::CCPoint *v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax
  cocos2d::CCObject *v8; // rbx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v9, a2, a3); /*0x4cbde*/
  if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)(a1 + 64), v4) ) /*0x4cbeb*/
    return 1; /*0x4cbf5*/
  v7 = *(_QWORD *)(a1 + 56); /*0x4cbfd*/
  v8 = *(cocos2d::CCObject **)(v7 + 704); /*0x4cc01*/
  if ( v8 ) /*0x4cc0b*/
  {
    *(_QWORD *)(v7 + 704) = 0; /*0x4cc0d*/
    LOBYTE(v5) = 1; /*0x4cc18*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v8 + 520LL))(v8, v5); /*0x4cc20*/
    cocos2d::CCObject::release(v8); /*0x4cc29*/
  }
  return 0; /*0x4cbf7*/
}
