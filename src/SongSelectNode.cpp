#include <Geode/binding/SongSelectNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/15] Address: 0x1616c0
// Method: SongSelectNode::~SongSelectNode
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall SongSelectNode__dtor_SongSelectNode(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx

  *(_QWORD *)Block = &SongSelectNode::`vftable'; /*0x1616d6*/
  *((_QWORD *)Block + 40) = &SongSelectNode::`vftable'; /*0x1616e0*/
  *((_QWORD *)Block + 41) = &SongSelectNode::`vftable'; /*0x1616ee*/
  *((_QWORD *)Block + 42) = &SongSelectNode::`vftable'; /*0x1616fc*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 45); /*0x161703*/
  if ( v4 ) /*0x16170d*/
    cocos2d::CCObject::release(v4); /*0x16170f*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 46); /*0x161715*/
  if ( v5 ) /*0x16171f*/
    cocos2d::CCObject::release(v5); /*0x161721*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 47); /*0x161727*/
  if ( v6 ) /*0x161731*/
    cocos2d::CCObject::release(v6); /*0x161733*/
  cocos2d::CCNode::~CCNode(Block); /*0x16173c*/
  if ( (a2 & 1) != 0 ) /*0x161747*/
    j_j_free(Block); /*0x161751*/
  return Block; /*0x161759*/
}

// [3/15] Address: 0x165710
// Method: SongSelectNode::create
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall SongSelectNode_create(
        int a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        const struct cocos2d::CCPoint *a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  cocos2d::CCNode *v12; // r14
  __int64 v13; // rax
  cocos2d::CCNode *v15; // [rsp+50h] [rbp-18h] BYREF

  v12 = (cocos2d::CCNode *)operator new(0x1B0u); /*0x16573f*/
  v15 = v12; /*0x165742*/
  cocos2d::CCNode::CCNode(v12); /*0x16574a*/
  *(_QWORD *)v12 = &SongSelectNode::`vftable'; /*0x165757*/
  *((_QWORD *)v12 + 40) = &SongSelectNode::`vftable'; /*0x165761*/
  *((_QWORD *)v12 + 41) = &SongSelectNode::`vftable'; /*0x16576f*/
  *((_QWORD *)v12 + 42) = &SongSelectNode::`vftable'; /*0x16577d*/
  *((_DWORD *)v12 + 86) = 0; /*0x165784*/
  *((_WORD *)v12 + 174) = 0; /*0x16578f*/
  *((_QWORD *)v12 + 45) = 0; /*0x165799*/
  *((_QWORD *)v12 + 53) = 0; /*0x1657a4*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, a5); /*0x1657bc*/
  if ( (unsigned __int8)sub_165850((_DWORD)v12, a1, a2, a3, a4, v13, a6, a7, a8) ) /*0x165800*/
  {
    cocos2d::CCObject::autorelease(v12); /*0x16580c*/
    return v12; /*0x165812*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1); /*0x165826*/
    return 0; /*0x165829*/
  }
}

// [4/15] Address: 0x1661c0
// Method: SongSelectNode::updateAudioLabel
// Hidden C++ exception states: #wind=1
double __fastcall SongSelectNode_updateAudioLabel(__int64 a1)
{
  const char *v2; // r8
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF

  LevelTools_getAudioTitle(v6, *(unsigned int *)(a1 + 344)); /*0x1661e3*/
  v2 = (const char *)v6; /*0x1661e9*/
  if ( v6[3] > 0xFu ) /*0x1661f4*/
    v2 = (const char *)v6[0]; /*0x1661f4*/
  v3 = cocos2d::CCString::createWithFormat("%02d: %s", *(_DWORD *)(a1 + 344) + 1, v2);
  CString = cocos2d::CCString::getCString(v3); /*0x166212*/
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 352) + 360LL))( /*0x16622f*/
    *(_QWORD *)(a1 + 352) + 360LL,
    CString);
  if ( (float)(200.0 /*0x166259*/
             / *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 320LL))(*(_QWORD *)(a1 + 352))) <= 0.80000001 )
    (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 320LL))(*(_QWORD *)(a1 + 352)); /*0x166265*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 160LL))(*(_QWORD *)(a1 + 352)); /*0x166281*/
  return sub_3C310(v6); /*0x166292*/
}

// [5/15] Address: 0x1662b0
// Method: SongSelectNode::audioNext
double __fastcall SongSelectNode_audioNext(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  double result; // xmm0_8

  v1 = *(_DWORD *)(a1 + 344); /*0x1662b0*/
  if ( v1 != 21 ) /*0x1662b9*/
  {
    v2 = v1 + 1; /*0x1662bb*/
    *(_BYTE *)(a1 + 349) = 1; /*0x1662bd*/
    if ( v2 > 21 ) /*0x1662cb*/
      v2 = 21; /*0x1662cb*/
    if ( v2 < 0 ) /*0x1662d2*/
      v2 = 0; /*0x1662d2*/
    *(_DWORD *)(a1 + 344) = v2; /*0x1662d5*/
    return SongSelectNode_updateAudioLabel(a1); /*0x1662db*/
  }
  return result; /*0x1662e0*/
}

// [6/15] Address: 0x1662f0
// Method: SongSelectNode::audioPrevious
double __fastcall SongSelectNode_audioPrevious(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  double result; // xmm0_8

  v1 = *(_DWORD *)(a1 + 344); /*0x1662f0*/
  if ( v1 ) /*0x1662f8*/
  {
    v2 = v1 - 1; /*0x1662fa*/
    *(_BYTE *)(a1 + 349) = 1; /*0x1662fc*/
    if ( v2 > 21 ) /*0x16630a*/
      v2 = 21; /*0x16630a*/
    if ( v2 < 0 ) /*0x166311*/
      v2 = 0; /*0x166311*/
    *(_DWORD *)(a1 + 344) = v2; /*0x166314*/
    return SongSelectNode_updateAudioLabel(a1); /*0x16631a*/
  }
  return result; /*0x16631f*/
}

// [7/15] Address: 0x166350
// Method: SongSelectNode::onSongMode
__int64 __fastcall SongSelectNode_onSongMode(__int64 a1, int a2)
{
  bool v4; // r14
  int v5; // ebp
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int i; // edi
  struct cocos2d::CCObject *v11; // rax
  unsigned int j; // edi
  struct cocos2d::CCObject *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  cocos2d::CCObject *v17; // rsi
  __int64 v18; // rcx
  cocos2d::CCObject *v19; // rax
  cocos2d::CCObject *v20; // rcx

  v4 = a2 == 2; /*0x166377*/
  v5 = 0; /*0x16637b*/
  if ( *(_BYTE *)(a1 + 348) != (a2 == 2) ) /*0x166384*/
  {
    *(_BYTE *)(a1 + 348) = v4; /*0x166386*/
    *(_DWORD *)(a1 + 344) = 0; /*0x16638d*/
    *(_BYTE *)(a1 + 349) = 1; /*0x166393*/
    if ( a2 != 2 ) /*0x16639d*/
      SongSelectNode_updateAudioLabel(a1); /*0x16639f*/
  }
  v6 = "GJ_button_04.png"; /*0x1663b6*/
  v7 = "GJ_button_01.png"; /*0x1663bd*/
  if ( a2 == 2 ) /*0x1663c0*/
    v7 = "GJ_button_04.png"; /*0x1663c0*/
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 952LL))(*(_QWORD *)(a1 + 384)); /*0x1663c7*/
  sub_41FC0(v8, v7); /*0x1663d3*/
  if ( a2 == 2 ) /*0x1663e3*/
    v6 = "GJ_button_01.png"; /*0x1663e3*/
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 952LL))(*(_QWORD *)(a1 + 392)); /*0x1663ea*/
  sub_41FC0(v9, v6); /*0x1663f6*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 368)); ++i ) /*0x166404*/
  {
    v11 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 368), i); /*0x166429*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, bool))(*(_QWORD *)v11 + 336LL))(v11, a2 != 2); /*0x166440*/
  }
  for ( j = 0; j < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 376)); ++j ) /*0x16645f*/
  {
    v13 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 376), j); /*0x166479*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, bool))(*(_QWORD *)v13 + 336LL))(v13, v4); /*0x166490*/
  }
  if ( *(_BYTE *)(a1 + 348) ) /*0x1664a6*/
    v14 = *(unsigned int *)(a1 + 344); /*0x1664af*/
  else
    v14 = 0; /*0x1664b7*/
  v15 = SongInfoObject_create_0(v14); /*0x1664b9*/
  v16 = *(_QWORD *)(a1 + 416); /*0x1664be*/
  v17 = (cocos2d::CCObject *)v15; /*0x1664c5*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 376) + 336LL))(*(_QWORD *)(v16 + 376), 0); /*0x1664db*/
  v18 = *(_QWORD *)(v16 + 480); /*0x1664de*/
  if ( v18 ) /*0x1664e8*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 336LL))(v18, 0); /*0x1664f6*/
  v19 = *(cocos2d::CCObject **)(v16 + 336); /*0x1664f8*/
  if ( v19 != v17 ) /*0x166502*/
  {
    if ( v17 ) /*0x166507*/
      cocos2d::CCObject::retain(v17); /*0x16650c*/
    v20 = *(cocos2d::CCObject **)(v16 + 336); /*0x166512*/
    if ( v20 ) /*0x16651c*/
      cocos2d::CCObject::release(v20); /*0x16651e*/
    *(_QWORD *)(v16 + 336) = v17; /*0x166524*/
    v19 = v17; /*0x16652b*/
  }
  if ( v19 ) /*0x166531*/
    v5 = *((_DWORD *)v19 + 80); /*0x166533*/
  *(_DWORD *)(v16 + 504) = v5; /*0x16653c*/
  CustomSongWidget_updateSongInfo(v16); /*0x166542*/
  return SongSelectNode_updateWidgetVisibility(a1); /*0x16654a*/
}

// [8/15] Address: 0x166570
// Method: SongSelectNode::updateWidgetVisibility
__int64 __fastcall SongSelectNode_updateWidgetVisibility(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx

  if ( !*(_BYTE *)(a1 + 348) ) /*0x166584*/
  {
    v3 = 0; /*0x166594*/
    goto LABEL_5; /*0x166594*/
  }
  v3 = *(_DWORD *)(a1 + 344); /*0x166586*/
  if ( !v3 ) /*0x16658e*/
  {
LABEL_5:
    a2 = 0; /*0x166596*/
    goto LABEL_6; /*0x166596*/
  }
  LOBYTE(a2) = 1; /*0x166590*/
LABEL_6:
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 416) + 336LL))(*(_QWORD *)(a1 + 416), a2); /*0x166598*/
  if ( !*(_BYTE *)(a1 + 348) || v3 ) /*0x1665b3*/
    v4 = 0; /*0x1665b9*/
  else
    LOBYTE(v4) = 1; /*0x1665b5*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 400) + 336LL))(*(_QWORD *)(a1 + 400), v4); /*0x1665c5*/
  if ( *(_BYTE *)(a1 + 348) && v3 ) /*0x1665d6*/
    LOBYTE(v5) = 1; /*0x1665d8*/
  else
    v5 = 0; /*0x1665dc*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 336LL))(*(_QWORD *)(a1 + 408), v5);
}

// [9/15] Address: 0x1666d0
// Method: SongSelectNode::showCustomSongSelect
// Hidden C++ exception states: #wind=1
__int64 __fastcall SongSelectNode_showCustomSongSelect(__int64 a1)
{
  __int64 v2; // rbx
  cocos2d::CCObject *v3; // rdi
  __int64 v4; // rax
  __int64 (__fastcall *v5)(cocos2d::CCObject *); // rdx

  v2 = a1 + 336; /*0x1666e7*/
  if ( !a1 ) /*0x1666f3*/
    v2 = 0; /*0x1666f3*/
  v3 = (cocos2d::CCObject *)operator new(0x2C8u); /*0x166701*/
  FLAlertLayer_FLAlertLayer(v3); /*0x16670c*/
  *(_QWORD *)v3 = &CustomSongLayer::`vftable'; /*0x166718*/
  *((_QWORD *)v3 + 40) = &CustomSongLayer::`vftable'; /*0x166722*/
  *((_QWORD *)v3 + 41) = &CustomSongLayer::`vftable'; /*0x166730*/
  *((_QWORD *)v3 + 42) = &CustomSongLayer::`vftable'; /*0x16673e*/
  *((_QWORD *)v3 + 43) = &CustomSongLayer::`vftable'; /*0x16674c*/
  *((_QWORD *)v3 + 44) = &CustomSongLayer::`vftable'; /*0x16675a*/
  *((_QWORD *)v3 + 51) = &CustomSongLayer::`vftable'; /*0x166768*/
  *((_QWORD *)v3 + 54) = &CustomSongLayer::`vftable'; /*0x166776*/
  *((_QWORD *)v3 + 68) = &CustomSongLayer::`vftable'; /*0x166784*/
  *((_QWORD *)v3 + 83) = &CustomSongLayer::`vftable'; /*0x166792*/
  *((_QWORD *)v3 + 84) = &CustomSongLayer::`vftable'; /*0x1667a0*/
  *((_QWORD *)v3 + 85) = 0; /*0x1667a7*/
  *((_QWORD *)v3 + 86) = 0; /*0x1667ae*/
  *((_QWORD *)v3 + 88) = 0; /*0x1667b5*/
  if ( (unsigned __int8)ShareLevelSettingsLayer_init(v3, v2) ) /*0x1667c2*/
  {
    cocos2d::CCObject::autorelease(v3); /*0x1667ce*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1); /*0x1667de*/
    v3 = 0; /*0x1667e1*/
  }
  v4 = a1 + 328; /*0x1667e4*/
  if ( !a1 ) /*0x1667ee*/
    v4 = 0; /*0x1667ee*/
  *((_QWORD *)v3 + 88) = v4; /*0x1667f2*/
  v5 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v3 + 1064LL); /*0x1667fc*/
  if ( (char *)v5 == (char *)CustomSongLayer_show ) /*0x166810*/
    return CustomSongLayer_show(v3); /*0x166812*/
  else
    return v5(v3); /*0x166819*/
}

// [10/15] Address: 0x166830
// Method: SongSelectNode::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
__int64 __fastcall SongSelectNode_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  void *v8; // [rsp+38h] [rbp+10h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x166847*/
  if ( (_DWORD)result == 1 && a3 ) /*0x166851*/
  {
    v7 = qword_905FD0; /*0x166853*/
    if ( !qword_905FD0 ) /*0x16685d*/
    {
      v8 = operator new(0x6E8u); /*0x166869*/
      qword_905FD0 = sub_2723A0(v8); /*0x166877*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x166888*/
      v7 = qword_905FD0; /*0x16688a*/
    }
    LOBYTE(v6) = 1; /*0x166891*/
    sub_27ACB0(v7, "0016", v6); /*0x16689b*/
    return SongSelectNode_showCustomSongSelect(a1 - 320); /*0x1668a7*/
  }
  return result; /*0x1668ac*/
}

// [11/15] Address: 0x1668c0
// Method: SongSelectNode::customSongLayerClosed
__int64 __fastcall SongSelectNode_customSongLayerClosed(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax

  v1 = a1 - 328; /*0x1668c6*/
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 56LL))(*(_QWORD *)(a1 + 64)); /*0x1668d4*/
  return SongSelectNode_onSongMode(v1, v2); /*0x1668dc*/
}

// [12/15] Address: 0x1668f0
// Method: SongSelectNode::songIDChanged
void __fastcall SongSelectNode_songIDChanged(__int64 a1, int a2)
{
  *(_BYTE *)(a1 + 13) = 1; /*0x1668f0*/
  *(_DWORD *)(a1 + 8) = a2; /*0x1668f4*/
}

// [13/15] Address: 0x166900
// Method: SongSelectNode::getActiveSongID
__int64 __fastcall SongSelectNode_getActiveSongID(__int64 a1)
{
  return *(unsigned int *)(a1 + 8); /*0x166903*/
}

// [14/15] Address: 0x166910
// Method: SongSelectNode::getSongFileName
// Hidden C++ exception states: #wind=2
__int64 __fastcall SongSelectNode_getSongFileName(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r8
  void *v8; // [rsp+28h] [rbp-40h]
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 8) ) /*0x166934*/
  {
    v4 = qword_906070; /*0x16693e*/
    if ( !qword_906070 ) /*0x166948*/
    {
      v8 = operator new(0x3D0u); /*0x166954*/
      qword_906070 = sub_47C350(v8); /*0x166964*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x16696e*/
      v4 = qword_906070; /*0x166971*/
    }
    v5 = MusicDownloadManager_pathForSong(v4, v9, *(_DWORD *)(a1 + 8)); /*0x166981*/
    if ( v5[3] > 0xFu ) /*0x16698c*/
      v5 = (_QWORD *)*v5; /*0x16698e*/
    *(_OWORD *)a2 = 0; /*0x166994*/
    *(_QWORD *)(a2 + 16) = 0; /*0x166997*/
    *(_QWORD *)(a2 + 24) = 0; /*0x16699f*/
    v6 = -1; /*0x1669a7*/
    do /*0x1669b3*/
      ++v6; /*0x1669b0*/
    while ( *((_BYTE *)v5 + v6) ); /*0x1669b3*/
    sub_3C230(a2); /*0x1669c0*/
    sub_3C310(v9); /*0x1669cb*/
  }
  else
  {
    sub_261160(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 384LL), a2); /*0x1669dd*/
  }
  return a2; /*0x1669e5*/
}

// [15/15] Address: 0x166a00
// Method: SongSelectNode::getLevelSettings
__int64 __fastcall SongSelectNode_getLevelSettings(__int64 a1)
{
  return *(_QWORD *)(a1 + 88); /*0x166a04*/
}
