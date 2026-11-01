#include <Geode/binding/SongInfoLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x62ebe0
// Method: SongInfoLayer::~SongInfoLayer
_QWORD *__fastcall SongInfoLayer__dtor_SongInfoLayer(_QWORD *Block, char a2)
{
  *Block = &SongInfoLayer::`vftable'; /*0x62ebf4*/
  Block[40] = &SongInfoLayer::`vftable'; /*0x62ec00*/
  Block[41] = &SongInfoLayer::`vftable'; /*0x62ec0e*/
  Block[42] = &SongInfoLayer::`vftable'; /*0x62ec1c*/
  Block[43] = &SongInfoLayer::`vftable'; /*0x62ec2a*/
  Block[44] = &SongInfoLayer::`vftable'; /*0x62ec38*/
  Block[51] = &SongInfoLayer::`vftable'; /*0x62ec46*/
  Block[54] = &SongInfoLayer::`vftable'; /*0x62ec54*/
  Block[68] = &SongInfoLayer::`vftable'; /*0x62ec62*/
  sub_74F50(Block + 92); /*0x62ec70*/
  sub_3C310(Block + 87); /*0x62ec7c*/
  sub_3C310(Block + 83); /*0x62ec88*/
  StarInfoPopup__dtor_StarInfoPopup((__int64)Block); /*0x62ec90*/
  if ( (a2 & 1) != 0 ) /*0x62ec98*/
    j_j_free(Block); /*0x62eca2*/
  return Block; /*0x62eca7*/
}
