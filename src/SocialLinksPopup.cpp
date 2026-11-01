#include <Geode/binding/SocialLinksPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x3956f0
// Method: SocialLinksPopup::~SocialLinksPopup
_QWORD *__fastcall SocialLinksPopup__dtor_SocialLinksPopup(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &SocialLinksPopup::`vftable'; /*0x395706*/
  Block[40] = &SocialLinksPopup::`vftable'; /*0x395710*/
  Block[41] = &SocialLinksPopup::`vftable'; /*0x39571e*/
  Block[42] = &SocialLinksPopup::`vftable'; /*0x39572c*/
  Block[43] = &SocialLinksPopup::`vftable'; /*0x39573a*/
  Block[44] = &SocialLinksPopup::`vftable'; /*0x395748*/
  Block[51] = &SocialLinksPopup::`vftable'; /*0x395756*/
  Block[54] = &SocialLinksPopup::`vftable'; /*0x395764*/
  Block[68] = &SocialLinksPopup::`vftable'; /*0x395772*/
  v4 = (cocos2d::CCObject *)Block[84]; /*0x395779*/
  if ( v4 ) /*0x395783*/
    cocos2d::CCObject::release(v4); /*0x395785*/
  StarInfoPopup__dtor_StarInfoPopup((__int64)Block); /*0x39578e*/
  if ( (a2 & 1) != 0 ) /*0x395798*/
    j_j_free(Block); /*0x3957a2*/
  return Block; /*0x3957aa*/
}

// [2/2] Address: 0x39c600
// Method: SocialLinksPopup::keyBackClicked
__int64 __fastcall SocialLinksPopup_keyBackClicked(__int64 a1)
{
  return sub_39C560(a1 - 336, 0);
}
