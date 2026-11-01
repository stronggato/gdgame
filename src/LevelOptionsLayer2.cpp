#include <Geode/binding/LevelOptionsLayer2.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x458fc0
// Method: LevelOptionsLayer2::~LevelOptionsLayer2
__int64 __fastcall LevelOptionsLayer2__dtor_LevelOptionsLayer2(_QWORD *a1)
{
  *a1 = &LevelOptionsLayer::`vftable'; /*0x458fc7*/
  a1[40] = &LevelOptionsLayer::`vftable'; /*0x458fd1*/
  a1[41] = &LevelOptionsLayer::`vftable'; /*0x458fdf*/
  a1[42] = &LevelOptionsLayer::`vftable'; /*0x458fed*/
  a1[43] = &LevelOptionsLayer::`vftable'; /*0x458ffb*/
  a1[44] = &LevelOptionsLayer::`vftable'; /*0x459009*/
  a1[51] = &LevelOptionsLayer::`vftable'; /*0x459017*/
  a1[54] = &LevelOptionsLayer::`vftable'; /*0x459025*/
  a1[68] = &LevelOptionsLayer::`vftable'; /*0x459033*/
  a1[83] = &LevelOptionsLayer::`vftable'; /*0x459041*/
  a1[84] = &LevelOptionsLayer::`vftable'; /*0x45904f*/
  return SFXSettingsPopup__dtor_SFXSettingsPopup(a1);
}

// [2/2] Address: 0x459a40
// Method: LevelOptionsLayer2::setupOptions
__int64 __fastcall LevelOptionsLayer2_setupOptions(__int64 a1)
{
  __int64 result; // rax

  sub_3976E0( /*0x459a71*/
    a1,
    (unsigned int)"Allow Multi-Rotation",
    8,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 456LL),
    (__int64)"Allows multiple rotation actions to run on the same target group. This was not possible before 2.2.");
  sub_3976E0( /*0x459aa1*/
    a1,
    (unsigned int)"Enable 2.2 Changes",
    17,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 464LL),
    (__int64)"Legacy compatibility pre 2.2. Should be enabled on new levels.");
  sub_3976E0( /*0x459ad1*/
    a1,
    (unsigned int)"Allow Static-Rotate",
    18,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 467LL),
    (__int64)"Allow rotating static objects in actions and animations. There is currently no support for rotating static "
             "objects other than 90 degree steps, but use this option to allow it anyway. Hitboxes will not match the art"
             ". Can be useful in some cases.");
  sub_3976E0( /*0x459b01*/
    a1,
    (unsigned int)"Enable Player Squeeze",
    9,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 457LL),
    (__int64)"Destroys player when squeezed between two objects. This is on by default but only for levels after update 2"
             ".2 for legacy reasons. Cannot be disabled for platformer levels.");
  sub_3976E0( /*0x459b31*/
    a1,
    (unsigned int)"Fix Gravity Bug",
    10,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 458LL),
    (__int64)"Fixes an old bug that makes flipped gravity act differently than normal gravity. Old levels can break with this enabled.");
  sub_3976E0( /*0x459b61*/
    a1,
    (unsigned int)"Fix Negative Scale",
    11,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 459LL),
    (__int64)"Makes negative scaled objects collide correctly. Disabled on old levels for compatibility.");
  sub_3976E0( /*0x459b91*/
    a1,
    (unsigned int)"Fix Robot Jump",
    12,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 460LL),
    (__int64)"Fixes robot jumps being bugged on slopes and/or pads.");
  sub_3976E0( /*0x459bc1*/
    a1,
    (unsigned int)"Dynamic Level Height",
    14,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 461LL),
    (__int64)"Increases max level height dynamically (the same way as max length). This option is always enabled in platformer mode.");
  sub_3976E0( /*0x459bf1*/
    a1,
    (unsigned int)"Sort Groups",
    15,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 462LL),
    (__int64)"Makes sure that spawn groups are triggered in the correct order (left to right).");
  sub_3976E0( /*0x459c21*/
    a1,
    (unsigned int)"Fix Radius Collision",
    16,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 463LL),
    (__int64)"Replaces the player hitbox with a circle (instead of a square) for interactions with circular hitboxes. Thi"
             "s fixes some issues where collisions would not register.");
  sub_3976E0( /*0x459c51*/
    a1,
    (unsigned int)"Reverse Sync",
    19,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 468LL),
    (__int64)"Slows down or speeds up the player when reversing direction using orb or pads to keep music in sync.");
  sub_3976E0( /*0x459c81*/
    a1,
    (unsigned int)"Decrease Boost Slide",
    22,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 1136) + 469LL),
    (__int64)"Slide less after dashing or being launched by moving blocks in platformer mode.");
  result = *(_QWORD *)(a1 + 1136); /*0x459c86*/
  if ( !*(_BYTE *)(result + 470) ) /*0x459c8d*/
    return sub_3976E0( /*0x459cb5*/
             a1,
             (unsigned int)"Enable Impulse Fix",
             23,
             0,
             (__int64)"Fix moving platform impulse bugs in platformer mode.");
  return result; /*0x459cba*/
}
