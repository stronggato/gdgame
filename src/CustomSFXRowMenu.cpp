#include <Geode/binding/CustomSFXRowMenu.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x15d9e0
// Method: CustomSFXRowMenu::~CustomSFXRowMenu
cocos2d::CCMenu *__fastcall CustomSFXRowMenu__dtor_CustomSFXRowMenu(cocos2d::CCMenu *Block, char a2)
{
  cocos2d::CCMenu::~CCMenu(Block); /*0x15d9ef*/
  if ( (a2 & 1) != 0 ) /*0x15d9f8*/
    j_j_free(Block); /*0x15da02*/
  return Block; /*0x15da07*/
}

// [2/2] Address: 0x15da20
// Method: CustomSFXRowMenu::ccTouchBegan
bool __fastcall CustomSFXRowMenu_ccTouchBegan(
        cocos2d::CCMenu *a1,
        struct cocos2d::CCTouch *a2,
        struct cocos2d::CCEvent *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  bool result; // al
  __int64 Location; // rax
  float *v10; // rbx
  __int64 v11; // rax
  _BYTE v12[56]; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+88h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)a1 - 40) + 504LL))((__int64)a1 - 320); /*0x15da49*/
  if ( !v6 ) /*0x15da4f*/
    return cocos2d::CCMenu::ccTouchBegan(a1, a2, a3); /*0x15da4f*/
  while ( 1 ) /*0x15da71*/
  {
    v7 = _RTDynamicCast(v6, 0, &cocos2d::CCNode `RTTI Type Descriptor', &CCScrollLayerExt `RTTI Type Descriptor', 0); /*0x15da71*/
    if ( v7 ) /*0x15da77*/
      break; /*0x15da77*/
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 504LL))(v6); /*0x15da85*/
    if ( !v6 ) /*0x15da8b*/
      return cocos2d::CCMenu::ccTouchBegan(a1, a2, a3); /*0x15da8b*/
  }
  Location = cocos2d::CCTouch::getLocation(a2, &v14); /*0x15dab8*/
  cocos2d::CCNode::convertToNodeSpace(v7, &v13, Location); /*0x15dac9*/
  v10 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 320LL))(v7); /*0x15dade*/
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 320LL))(v7); /*0x15daeb*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v12, 0.0, 0.0, *v10, *(float *)(v11 + 4)); /*0x15db07*/
  result = cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v12, (const struct cocos2d::CCPoint *)&v13); /*0x15db17*/
  if ( result ) /*0x15db1f*/
    return cocos2d::CCMenu::ccTouchBegan(a1, a2, a3); /*0x15da8d*/
  return result; /*0x15da96*/
}
