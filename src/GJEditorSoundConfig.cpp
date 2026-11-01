#include <Geode/binding/GJEditorSoundConfig.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x35c6e0
// Method: GJEditorSoundConfig::~GJEditorSoundConfig
cocos2d::CCNode *__fastcall GJEditorSoundConfig__dtor_GJEditorSoundConfig(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GJEditorSoundConfig::`vftable'; /*0x35c6f4*/
  sub_3C310((char *)Block + 512); /*0x35c700*/
  sub_3C310((char *)Block + 480); /*0x35c70c*/
  sub_3C310((char *)Block + 448); /*0x35c718*/
  sub_3C310((char *)Block + 416); /*0x35c724*/
  sub_3C310((char *)Block + 384); /*0x35c730*/
  cocos2d::CCNode::~CCNode(Block); /*0x35c738*/
  if ( (a2 & 1) != 0 ) /*0x35c741*/
    j_j_free(Block); /*0x35c74b*/
  return Block; /*0x35c750*/
}

// [2/2] Address: 0x35de90
// Method: GJEditorSoundConfig::encodeWithCoder
__int64 __fastcall GJEditorSoundConfig_encodeWithCoder(__int64 a1, DS_Dictionary *a2)
{
  DS_Dictionary::setIntegerForKey(a2, "k_es_id", *(_DWORD *)(a1 + 320)); /*0x35deb1*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_lid", *(_DWORD *)(a1 + 324)); /*0x35dec8*/
  DS_Dictionary::setBoolForKey(a2, "k_es_au", *(_BYTE *)(a1 + 328)); /*0x35dee0*/
  DS_Dictionary::setStringForKey(a2, "k_es_name", a1 + 384); /*0x35def7*/
  DS_Dictionary::setStringForKey(a2, "k_es_desc", a1 + 416); /*0x35df0e*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_ver", *(_DWORD *)(a1 + 332)); /*0x35df25*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_lver", *(_DWORD *)(a1 + 336)); /*0x35df3c*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_orig", *(_DWORD *)(a1 + 340)); /*0x35df53*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_acc", *(_DWORD *)(a1 + 344)); /*0x35df6a*/
  DS_Dictionary::setStringForKey(a2, "k_es_user", a1 + 480); /*0x35df81*/
  DS_Dictionary::setStringForKey(a2, "k_es_data", a1 + 512); /*0x35df98*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_dl", *(_DWORD *)(a1 + 348)); /*0x35dfaf*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_likes", *(_DWORD *)(a1 + 352)); /*0x35dfc6*/
  DS_Dictionary::setBoolForKey(a2, "k_es_feat", *(_BYTE *)(a1 + 376)); /*0x35dfde*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_count", *(_DWORD *)(a1 + 356)); /*0x35dff5*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_sc", *(_DWORD *)(a1 + 360)); /*0x35e00c*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_unl", *(_DWORD *)(a1 + 364)); /*0x35e023*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_up", *(_DWORD *)(a1 + 368)); /*0x35e03a*/
  DS_Dictionary::setIntegerForKey(a2, "k_es_upd", *(_DWORD *)(a1 + 372)); /*0x35e051*/
  DS_Dictionary::setBoolForKey(a2, "k_es_hd", *(_BYTE *)(a1 + 544)); /*0x35e069*/
  DS_Dictionary::setBoolForKey(a2, "k_es_liked", *(_BYTE *)(a1 + 545)); /*0x35e081*/
  return DS_Dictionary::setStringForKey(a2, "k_es_emote", a1 + 448); /*0x35e098*/
}
