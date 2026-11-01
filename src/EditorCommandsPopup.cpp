#include <Geode/binding/EditorCommandsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x17aff0
// Method: EditorCommandsPopup::~EditorCommandsPopup
cocos2d::CCNode *__fastcall EditorCommandsPopup__dtor_EditorCommandsPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &EditorCommandsPopup::`vftable'; /*0x17b003*/
  *((_QWORD *)Block + 40) = &EditorCommandsPopup::`vftable'; /*0x17b010*/
  *((_QWORD *)Block + 41) = &EditorCommandsPopup::`vftable'; /*0x17b01e*/
  *((_QWORD *)Block + 42) = &EditorCommandsPopup::`vftable'; /*0x17b02c*/
  *((_QWORD *)Block + 43) = &EditorCommandsPopup::`vftable'; /*0x17b03a*/
  *((_QWORD *)Block + 44) = &EditorCommandsPopup::`vftable'; /*0x17b048*/
  *((_QWORD *)Block + 51) = &EditorCommandsPopup::`vftable'; /*0x17b056*/
  *((_QWORD *)Block + 54) = &EditorCommandsPopup::`vftable'; /*0x17b064*/
  *((_QWORD *)Block + 68) = &EditorCommandsPopup::`vftable'; /*0x17b072*/
  *((_QWORD *)Block + 83) = &EditorCommandsPopup::`vftable'; /*0x17b080*/
  *((_QWORD *)Block + 84) = &EditorCommandsPopup::`vftable'; /*0x17b08e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x17b095*/
  if ( (a2 & 1) != 0 ) /*0x17b09d*/
    j_j_free(Block); /*0x17b0a7*/
  return Block; /*0x17b0ac*/
}

// [2/3] Address: 0x17b0c0
// Method: EditorCommandsPopup::onBuildWindowContent
__int64 __fastcall EditorCommandsPopup_onBuildWindowContent(__int64 a1)
{
  sub_17B270(a1, "Regroup", 1); /*0x17b0d6*/
  sub_17B270(a1, "Build Helper", 2); /*0x17b0eb*/
  sub_17B270(a1, "Create Loop", 3); /*0x17b100*/
  sub_17B270(a1, "Create Gradient", 19); /*0x17b115*/
  sub_17B270(a1, "Align X", 4); /*0x17b12a*/
  sub_17B270(a1, "Align Y", 5); /*0x17b13f*/
  sub_17B270(a1, "Distribute X", 6); /*0x17b154*/
  sub_17B270(a1, "Distribute Y", 7); /*0x17b169*/
  sub_17B270(a1, "Select All", 8); /*0x17b17e*/
  sub_17B270(a1, "Select All Left", 9); /*0x17b193*/
  sub_17B270(a1, "Select All Right", 10); /*0x17b1a8*/
  sub_17B270(a1, "New Group X", 11); /*0x17b1bd*/
  sub_17B270(a1, "New Group Y", 12); /*0x17b1d2*/
  sub_17B270(a1, "Copy + Color", 13); /*0x17b1e7*/
  sub_17B270(a1, "Paste + Color", 14); /*0x17b1fc*/
  sub_17B270(a1, "Create Extras", 15); /*0x17b211*/
  sub_17B270(a1, "Unlock Layers", 16); /*0x17b226*/
  sub_17B270(a1, "Reset Unused", 17); /*0x17b23b*/
  sub_17B270(a1, "Uncheck Portals", 18); /*0x17b250*/
  return sub_17B380(a1); /*0x17b258*/
}

// [3/3] Address: 0x17b5b0
// Method: EditorCommandsPopup::onWindowResized
// attributes: thunk
__int64 __fastcall EditorCommandsPopup_onWindowResized(__int64 a1)
{
  return sub_17B380(a1);
}
