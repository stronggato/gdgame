#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/CCMoveCNode.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};

using namespace cocos2d;

// [1/1] Address: 0x35ea00
// Method: CCMoveCNode::~CCMoveCNode
CCMoveCNode::~CCMoveCNode()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  sub_3DA90(Block + 216); /*0x35ea16*/
//   cocos2d::CCObject::~CCObject((cocos2d::CCObject *)Block); /*0x35ea1e*/ // cleaned base ctor/dtor
//   if ( (a2 & 1) != 0 ) /*0x35ea27*/
//     j_j_free(Block); /*0x35ea31*/ // cleaned scalar delete
  return; /*0x35ea36*/
}
