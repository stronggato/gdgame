#include <Geode/binding/CreatorSettingsDelegate.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x175ba0
// Method: CreatorSettingsDelegate::~CreatorSettingsDelegate
_QWORD *__fastcall CreatorSettingsDelegate__dtor_CreatorSettingsDelegate(_QWORD *a1, char a2)
{
  *a1 = &CreatorSettingsDelegate::`vftable'; /*0x175bb0*/
  if ( (a2 & 1) != 0 ) /*0x175bb6*/
    j_j_free(a1); /*0x175bbd*/
  return a1; /*0x175bc5*/
}
