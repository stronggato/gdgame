#include <Geode/binding/GlobalKeybindSource.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x3d1710
// Method: GlobalKeybindSource::~GlobalKeybindSource
_QWORD *__fastcall GlobalKeybindSource__dtor_GlobalKeybindSource(_QWORD *a1, char a2)
{
  *a1 = &KeybindSource::`vftable'; /*0x3d1720*/
  if ( (a2 & 1) != 0 ) /*0x3d1726*/
    j_j_free(a1); /*0x3d172d*/
  return a1; /*0x3d1735*/
}

// [2/5] Address: 0x3d1740
// Method: GlobalKeybindSource::chordsForAction
__int64 __fastcall GlobalKeybindSource_chordsForAction(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax

  v5 = sub_384880(); /*0x3d1750*/
  sub_384CF0(v5, a2, a3); /*0x3d175e*/
  return a2; /*0x3d1763*/
}

// [3/5] Address: 0x3d1780
// Method: GlobalKeybindSource::actionsForChord
__int64 __fastcall GlobalKeybindSource_actionsForChord(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax

  v5 = sub_384880(); /*0x3d1790*/
  sub_384E80(v5, a2, a3); /*0x3d179e*/
  return a2; /*0x3d17a3*/
}

// [4/5] Address: 0x3d17c0
// Method: GlobalKeybindSource::bindChord
__int64 __fastcall GlobalKeybindSource_bindChord(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax

  v5 = sub_384880(); /*0x3d17cf*/
  return sub_385430(v5, a2, a3); /*0x3d17dc*/
}

// [5/5] Address: 0x3d17f0
// Method: GlobalKeybindSource::unbindChord
__int64 __fastcall GlobalKeybindSource_unbindChord(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax

  v5 = sub_384880(); /*0x3d17ff*/
  return sub_385F90(v5, a2, a3); /*0x3d180c*/
}
