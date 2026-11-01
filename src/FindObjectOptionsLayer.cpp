#include <Geode/binding/FindObjectOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x17e640
// Method: FindObjectOptionsLayer::init
bool __fastcall FindObjectOptionsLayer_init(__int64 a1)
{
  *(_DWORD *)(a1 + 1000) = 1108344832; /*0x17e651*/
  *(_DWORD *)(a1 + 1020) = 1053609165; /*0x17e65b*/
  return (unsigned __int8)sub_397170(a1, 1) != 0; /*0x17e66f*/
}

// [2/2] Address: 0x17e680
// Method: FindObjectOptionsLayer::setupOptions
__int64 __fastcall FindObjectOptionsLayer_setupOptions(__int64 a1)
{
  return GJOptionsLayer_addGVToggle(
           a1,
           (int)"Apply Filters",
           "0231",
           (__int64)"Only finds objects that pass the <cy>color</c> and <cy>custom object</c> filters from the delete tab.");
}
