#include <Geode/binding/CustomListView.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x1423e0
// Method: CustomListView::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CustomListView_create(cocos2d::CCObject *a1, __int64 a2, float a3, float a4, __int64 a5, int a6)
{
  _QWORD *v8; // rsi
  int v10; // [rsp+28h] [rbp-50h]

  v8 = operator new(0x1D8u); /*0x14240f*/
  BoomListView_BoomListView((__int64)v8); /*0x14241a*/
  *v8 = &CustomListView::`vftable'; /*0x142426*/
  v8[40] = &CustomListView::`vftable'; /*0x142430*/
  v8[41] = &CustomListView::`vftable'; /*0x14243e*/
  v8[42] = &CustomListView::`vftable'; /*0x14244c*/
  v8[43] = &CustomListView::`vftable'; /*0x14245a*/
  v8[44] = &CustomListView::`vftable'; /*0x142468*/
  v8[51] = &CustomListView::`vftable'; /*0x142476*/
  v8[52] = &CustomListView::`vftable'; /*0x142484*/
  *((_DWORD *)v8 + 116) = 0; /*0x14248b*/
  if ( BoomListView_init((__int64)v8, a1, a2, a3, SLODWORD(a4), v10, a6) ) /*0x1424c1*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v8); /*0x1424cd*/
    return v8; /*0x1424d3*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 8LL))(v8, 1); /*0x1424e7*/
    return 0; /*0x1424ea*/
  }
}

// [2/6] Address: 0x142510
// Method: CustomListView::getListCell
// Hidden C++ exception states: #wind=36
__int64 __fastcall CustomListView_getListCell(__int64 a1, __int64 a2)
{
  int v3; // r8d
  _QWORD *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx
  cocos2d::CCObject *v9; // rax
  void *v10; // [rsp+40h] [rbp+10h]
  void *v11; // [rsp+40h] [rbp+10h]
  void *v12; // [rsp+40h] [rbp+10h]
  void *v13; // [rsp+40h] [rbp+10h]
  void *v14; // [rsp+40h] [rbp+10h]
  void *v15; // [rsp+40h] [rbp+10h]
  void *v16; // [rsp+40h] [rbp+10h]
  void *v17; // [rsp+40h] [rbp+10h]
  void *v18; // [rsp+40h] [rbp+10h]
  void *v19; // [rsp+40h] [rbp+10h]
  void *v20; // [rsp+40h] [rbp+10h]
  void *v21; // [rsp+40h] [rbp+10h]
  void *v22; // [rsp+40h] [rbp+10h]

  CustomListView_getCellHeight(*(unsigned int *)(a1 + 440)); /*0x14253c*/
  switch ( v3 ) /*0x142564*/
  {
    case 2: /*0x142564*/
      v4 = operator new(0x230u); /*0x1428ae*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x1428c6*/
      *v4 = &StatsCell::`vftable'; /*0x1428d2*/
      v4[40] = &StatsCell::`vftable'; /*0x1428dc*/
      v4[41] = &StatsCell::`vftable'; /*0x1428ea*/
      v4[42] = &StatsCell::`vftable'; /*0x1428f8*/
      v4[43] = &StatsCell::`vftable'; /*0x142906*/
      v4[44] = &StatsCell::`vftable'; /*0x142914*/
      return (__int64)v4; /*0x14291b*/
    case 3: /*0x142564*/
      v4 = operator new(0x230u); /*0x142570*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142588*/
      *v4 = &AchievementCell::`vftable'; /*0x142594*/
      v4[40] = &AchievementCell::`vftable'; /*0x14259e*/
      v4[41] = &AchievementCell::`vftable'; /*0x1425ac*/
      v4[42] = &AchievementCell::`vftable'; /*0x1425ba*/
      v4[43] = &AchievementCell::`vftable'; /*0x1425c8*/
      v4[44] = &AchievementCell::`vftable'; /*0x1425d6*/
      return (__int64)v4; /*0x1425dd*/
    case 4: /*0x142564*/
    case 5: /*0x142564*/
      v13 = operator new(0x268u); /*0x142819*/
      return LevelCell_LevelCell((__int64)v13); /*0x142834*/
    case 6: /*0x142564*/
    case 15: /*0x142564*/
      v17 = operator new(0x268u); /*0x142a65*/
      return CommentCell_CommentCell((__int64)v17, a2); /*0x142a80*/
    case 7: /*0x142564*/
    case 8: /*0x142564*/
      v16 = operator new(0x268u); /*0x142a34*/
      result = CommentCell_CommentCell((__int64)v16, a2); /*0x142a49*/
      *(_BYTE *)(result + 602) = 1; /*0x142a4f*/
      return result; /*0x142a56*/
    case 11: /*0x142564*/
      v4 = operator new(0x238u); /*0x14292a*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142942*/
      *v4 = &SongCell::`vftable'; /*0x14294e*/
      v4[40] = &SongCell::`vftable'; /*0x142958*/
      v4[41] = &SongCell::`vftable'; /*0x142966*/
      v4[42] = &SongCell::`vftable'; /*0x142974*/
      v4[43] = &SongCell::`vftable'; /*0x142982*/
      v4[44] = &SongCell::`vftable'; /*0x142990*/
      v4[70] = 0; /*0x142999*/
      return (__int64)v4; /*0x1429a0*/
    case 12: /*0x142564*/
      v4 = operator new(0x240u); /*0x142ab9*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142ad1*/
      *v4 = &GJScoreCell::`vftable'; /*0x142add*/
      v4[40] = &GJScoreCell::`vftable'; /*0x142ae7*/
      v4[41] = &GJScoreCell::`vftable'; /*0x142af5*/
      v4[42] = &GJScoreCell::`vftable'; /*0x142b03*/
      v4[43] = &GJScoreCell::`vftable'; /*0x142b11*/
      v4[44] = &GJScoreCell::`vftable'; /*0x142b1f*/
      v4[70] = &GJScoreCell::`vftable'; /*0x142b2d*/
      v4[71] = 0; /*0x142b36*/
      return (__int64)v4; /*0x142b3d*/
    case 13: /*0x142564*/
      v4 = operator new(0x258u); /*0x142f50*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142f68*/
      *v4 = &MapPackCell::`vftable'; /*0x142f75*/
      v4[40] = &MapPackCell::`vftable'; /*0x142f7f*/
      v4[41] = &MapPackCell::`vftable'; /*0x142f8d*/
      v4[42] = &MapPackCell::`vftable'; /*0x142f9b*/
      v4[43] = &MapPackCell::`vftable'; /*0x142fa9*/
      v4[44] = &MapPackCell::`vftable'; /*0x142fb7*/
      v7 = (cocos2d::CCObject *)cocos2d::CCArray::create(v6); /*0x142fbe*/
      v4[74] = v7; /*0x142fc4*/
      cocos2d::CCObject::retain(v7); /*0x142fce*/
      v9 = (cocos2d::CCObject *)cocos2d::CCArray::create(v8); /*0x142fd4*/
      v4[73] = v9; /*0x142fda*/
      cocos2d::CCObject::retain(v9); /*0x142fe4*/
      v4[70] = 0; /*0x142fec*/
      v4[71] = 0; /*0x142ff3*/
      v4[72] = 0; /*0x142ffa*/
      return (__int64)v4; /*0x143001*/
    case 14: /*0x142564*/
      v10 = operator new(0x248u); /*0x142671*/
      return sub_14DDB0(v10, a2); /*0x14268c*/
    case 16: /*0x142564*/
      v4 = operator new(0x248u); /*0x142cdb*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142cf3*/
      *v4 = &GJRequestCell::`vftable'; /*0x142cff*/
      v4[40] = &GJRequestCell::`vftable'; /*0x142d09*/
      v4[41] = &GJRequestCell::`vftable'; /*0x142d17*/
      v4[42] = &GJRequestCell::`vftable'; /*0x142d25*/
      v4[43] = &GJRequestCell::`vftable'; /*0x142d33*/
      v4[44] = &GJRequestCell::`vftable'; /*0x142d41*/
      v4[70] = 0; /*0x142d4a*/
      v4[71] = 0; /*0x142d51*/
      *((_BYTE *)v4 + 576) = 0; /*0x142d58*/
      return (__int64)v4; /*0x142d5e*/
    case 17: /*0x142564*/
      v4 = operator new(0x260u); /*0x142d6d*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142d85*/
      *v4 = &GJMessageCell::`vftable'; /*0x142d91*/
      v4[40] = &GJMessageCell::`vftable'; /*0x142d9b*/
      v4[41] = &GJMessageCell::`vftable'; /*0x142da9*/
      v4[42] = &GJMessageCell::`vftable'; /*0x142db7*/
      v4[43] = &GJMessageCell::`vftable'; /*0x142dc5*/
      v4[44] = &GJMessageCell::`vftable'; /*0x142dd3*/
      v4[70] = &GJMessageCell::`vftable'; /*0x142de1*/
      v4[71] = &GJMessageCell::`vftable'; /*0x142def*/
      v4[72] = &GJMessageCell::`vftable'; /*0x142dfd*/
      v4[73] = 0; /*0x142e06*/
      v4[74] = 0; /*0x142e0d*/
      v4[75] = 0; /*0x142e14*/
      return (__int64)v4; /*0x142e1b*/
    case 18: /*0x142564*/
      v4 = operator new(0x238u); /*0x142b4c*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142b64*/
      *v4 = &GJLevelScoreCell::`vftable'; /*0x142b70*/
      v4[40] = &GJLevelScoreCell::`vftable'; /*0x142b7a*/
      v4[41] = &GJLevelScoreCell::`vftable'; /*0x142b88*/
      v4[42] = &GJLevelScoreCell::`vftable'; /*0x142b96*/
      v4[43] = &GJLevelScoreCell::`vftable'; /*0x142ba4*/
      v4[44] = &GJLevelScoreCell::`vftable'; /*0x142bb2*/
      v4[70] = 0; /*0x142bbb*/
      return (__int64)v4; /*0x142bc2*/
    case 19: /*0x142564*/
      v4 = operator new(0x238u); /*0x1429af*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x1429c7*/
      *v4 = &ArtistCell::`vftable'; /*0x1429d3*/
      v4[40] = &ArtistCell::`vftable'; /*0x1429dd*/
      v4[41] = &ArtistCell::`vftable'; /*0x1429eb*/
      v4[42] = &ArtistCell::`vftable'; /*0x1429f9*/
      v4[43] = &ArtistCell::`vftable'; /*0x142a07*/
      v4[44] = &ArtistCell::`vftable'; /*0x142a15*/
      v4[70] = 0; /*0x142a1e*/
      return (__int64)v4; /*0x142a25*/
    case 20: /*0x142564*/
      v4 = operator new(0x238u); /*0x143010*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x143028*/
      *v4 = &SmartTemplateCell::`vftable'; /*0x143034*/
      v4[40] = &SmartTemplateCell::`vftable'; /*0x14303e*/
      v4[41] = &SmartTemplateCell::`vftable'; /*0x14304c*/
      v4[42] = &SmartTemplateCell::`vftable'; /*0x14305a*/
      v4[43] = &SmartTemplateCell::`vftable'; /*0x143068*/
      v4[44] = &SmartTemplateCell::`vftable'; /*0x143076*/
      v4[70] = 0; /*0x14307f*/
      return (__int64)v4; /*0x143086*/
    case 21: /*0x142564*/
      v11 = operator new(0x248u); /*0x1427be*/
      return sub_14E340(v11, a2); /*0x1427d9*/
    case 22: /*0x142564*/
      v12 = operator new(0x248u); /*0x1427e8*/
      result = sub_14E340(v12, a2); /*0x1427fd*/
      *(_BYTE *)(result + 578) = 1; /*0x142803*/
      return result; /*0x14280a*/
    case 23: /*0x142564*/
      v4 = operator new(0x248u); /*0x14269b*/
      sub_14DDB0(v4, a2); /*0x1426b3*/
      *v4 = &CustomMusicCell::`vftable'; /*0x1426bf*/
      v4[40] = &CustomMusicCell::`vftable'; /*0x1426c9*/
      v4[41] = &CustomMusicCell::`vftable'; /*0x1426d7*/
      v4[42] = &CustomMusicCell::`vftable'; /*0x1426e5*/
      v4[43] = &CustomMusicCell::`vftable'; /*0x1426f3*/
      v4[44] = &CustomMusicCell::`vftable'; /*0x142701*/
      v4[70] = &CustomMusicCell::`vftable'; /*0x14270f*/
      v4[71] = 0; /*0x142718*/
      return (__int64)v4; /*0x14271f*/
    case 24: /*0x142564*/
      v4 = operator new(0x238u); /*0x14272e*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142746*/
      *v4 = &OptionsCell::`vftable'; /*0x142753*/
      v4[40] = &OptionsCell::`vftable'; /*0x14275d*/
      v4[41] = &OptionsCell::`vftable'; /*0x14276b*/
      v4[42] = &OptionsCell::`vftable'; /*0x142779*/
      v4[43] = &OptionsCell::`vftable'; /*0x142787*/
      v4[44] = &OptionsCell::`vftable'; /*0x142795*/
      v4[70] = 0; /*0x14279e*/
      cocos2d::CCLayer::init((cocos2d::CCLayer *)v4); /*0x1427a8*/
      return (__int64)v4; /*0x1427af*/
    case 25: /*0x142564*/
    case 27: /*0x142564*/
      v18 = operator new(0x240u); /*0x143095*/
      return LevelListCell_LevelListCell(v18, a2); /*0x1430b0*/
    case 26: /*0x142564*/
    case 29: /*0x142564*/
      v15 = operator new(0x268u); /*0x14287d*/
      result = LevelCell_LevelCell((__int64)v15); /*0x142892*/
      *(_BYTE *)(result + 608) = 1; /*0x142898*/
      return result; /*0x14289f*/
    case 28: /*0x142564*/
      v19 = operator new(0x240u); /*0x1430bf*/
      result = LevelListCell_LevelListCell(v19, a2); /*0x1430d4*/
      *(_BYTE *)(result + 568) = 1; /*0x1430da*/
      return result; /*0x1430e1*/
    case 31: /*0x142564*/
      v4 = operator new(0x238u); /*0x142bd1*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142be9*/
      *v4 = &GJLocalLevelScoreCell::`vftable'; /*0x142bf5*/
      v4[40] = &GJLocalLevelScoreCell::`vftable'; /*0x142bff*/
      v4[41] = &GJLocalLevelScoreCell::`vftable'; /*0x142c0d*/
      v4[42] = &GJLocalLevelScoreCell::`vftable'; /*0x142c1b*/
      v4[43] = &GJLocalLevelScoreCell::`vftable'; /*0x142c29*/
      v4[44] = &GJLocalLevelScoreCell::`vftable'; /*0x142c37*/
      v4[70] = 0; /*0x142c40*/
      return (__int64)v4; /*0x142c47*/
    case 32: /*0x142564*/
      v4 = operator new(0x238u); /*0x1425ec*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142604*/
      *v4 = &URLCell::`vftable'; /*0x142610*/
      v4[40] = &URLCell::`vftable'; /*0x14261a*/
      v4[41] = &URLCell::`vftable'; /*0x142628*/
      v4[42] = &URLCell::`vftable'; /*0x142636*/
      v4[43] = &URLCell::`vftable'; /*0x142644*/
      v4[44] = &URLCell::`vftable'; /*0x142652*/
      v4[70] = 0; /*0x14265b*/
      return (__int64)v4; /*0x142662*/
    case 33: /*0x142564*/
      v4 = operator new(0x238u); /*0x143123*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x14313b*/
      *v4 = &FontPreviewCell::`vftable'; /*0x143147*/
      v4[40] = &FontPreviewCell::`vftable'; /*0x143151*/
      v4[41] = &FontPreviewCell::`vftable'; /*0x14315f*/
      v4[42] = &FontPreviewCell::`vftable'; /*0x14316d*/
      v4[43] = &FontPreviewCell::`vftable'; /*0x14317b*/
      v4[44] = &FontPreviewCell::`vftable'; /*0x143189*/
      *((_DWORD *)v4 + 140) = 0; /*0x14319a*/
      return (__int64)v4; /*0x1431a0*/
    case 34: /*0x142564*/
      v21 = operator new(0x250u); /*0x1431af*/
      return sub_18E020(v21, a2); /*0x1431ca*/
    case 35: /*0x142564*/
      v22 = operator new(0x250u); /*0x1431d9*/
      result = sub_18E020(v22, a2); /*0x1431ee*/
      *(_BYTE *)(result + 584) = 1; /*0x1431f4*/
      return result; /*0x1431fb*/
    case 36: /*0x142564*/
      v4 = operator new(0x240u); /*0x142e2a*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142e42*/
      *v4 = &GJThreadCell::`vftable'; /*0x142e4e*/
      v4[40] = &GJThreadCell::`vftable'; /*0x142e58*/
      v4[41] = &GJThreadCell::`vftable'; /*0x142e66*/
      v4[42] = &GJThreadCell::`vftable'; /*0x142e74*/
      v4[43] = &GJThreadCell::`vftable'; /*0x142e82*/
      v4[44] = &GJThreadCell::`vftable'; /*0x142e90*/
      v4[70] = 0; /*0x142e99*/
      v4[71] = 0; /*0x142ea0*/
      return (__int64)v4; /*0x142ea7*/
    case 37: /*0x142564*/
      v14 = operator new(0x268u); /*0x142843*/
      result = LevelCell_LevelCell((__int64)v14); /*0x142858*/
      *(_BYTE *)(result + 608) = 1; /*0x14285e*/
      *(_WORD *)(result + 576) = 257; /*0x142865*/
      return result; /*0x14286e*/
    case 38: /*0x142564*/
      v4 = operator new(0x238u); /*0x142c56*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142c6e*/
      *v4 = &GJCompactUserCell::`vftable'; /*0x142c7a*/
      v4[40] = &GJCompactUserCell::`vftable'; /*0x142c84*/
      v4[41] = &GJCompactUserCell::`vftable'; /*0x142c92*/
      v4[42] = &GJCompactUserCell::`vftable'; /*0x142ca0*/
      v4[43] = &GJCompactUserCell::`vftable'; /*0x142cae*/
      v4[44] = &GJCompactUserCell::`vftable'; /*0x142cbc*/
      v4[70] = 0; /*0x142cc5*/
      return (__int64)v4; /*0x142ccc*/
    case 39: /*0x142564*/
      v20 = operator new(0x240u); /*0x1430f0*/
      result = LevelListCell_LevelListCell(v20, a2); /*0x143105*/
      *(_WORD *)(result + 568) = 257; /*0x14310b*/
      return result; /*0x143114*/
    case 40: /*0x142564*/
      v4 = operator new(0x248u); /*0x142eb6*/
      SmartTemplateCell_loadFromObject(v4, a2); /*0x142ece*/
      *v4 = &GJNotificationCell::`vftable'; /*0x142eda*/
      v4[40] = &GJNotificationCell::`vftable'; /*0x142ee4*/
      v4[41] = &GJNotificationCell::`vftable'; /*0x142ef2*/
      v4[42] = &GJNotificationCell::`vftable'; /*0x142f00*/
      v4[43] = &GJNotificationCell::`vftable'; /*0x142f0e*/
      v4[44] = &GJNotificationCell::`vftable'; /*0x142f1c*/
      v4[70] = &GJNotificationCell::`vftable'; /*0x142f2a*/
      v4[71] = 0; /*0x142f33*/
      v4[72] = 0; /*0x142f3a*/
      return (__int64)v4; /*0x142f41*/
    default:
      if ( v3 == 10 ) /*0x143204*/
      {
        v4 = operator new(0x258u); /*0x143214*/
        SmartTemplateCell_loadFromObject(v4, a2); /*0x143231*/
        *v4 = &GameCell::`vftable'; /*0x14323d*/
        v4[40] = &GameCell::`vftable'; /*0x143247*/
        v4[41] = &GameCell::`vftable'; /*0x143255*/
        v4[42] = &GameCell::`vftable'; /*0x143263*/
        v4[43] = &GameCell::`vftable'; /*0x143271*/
        v4[44] = &GameCell::`vftable'; /*0x14327f*/
        *(_OWORD *)(v4 + 71) = 0; /*0x143289*/
        v4[73] = 0; /*0x143292*/
        v4[74] = 15; /*0x143299*/
        *((_BYTE *)v4 + 568) = 0; /*0x1432a4*/
        v4[70] = 0; /*0x1432aa*/
      }
      else
      {
        v4 = operator new(0x238u); /*0x1432bd*/
        SmartTemplateCell_loadFromObject(v4, a2); /*0x1432da*/
        *v4 = &ListCell::`vftable'; /*0x1432e6*/
        v4[40] = &ListCell::`vftable'; /*0x1432f0*/
        v4[41] = &ListCell::`vftable'; /*0x1432fe*/
        v4[42] = &ListCell::`vftable'; /*0x14330c*/
        v4[43] = &ListCell::`vftable'; /*0x14331a*/
        v4[44] = &ListCell::`vftable'; /*0x143328*/
      }
      return (__int64)v4;
  }
}

// [3/6] Address: 0x1433f0
// Method: CustomListView::getCellHeight
float __fastcall CustomListView_getCellHeight(int a1)
{
  float result; // xmm0_4

  switch ( a1 ) /*0x143418*/
  {
    case 2: /*0x143418*/
    case 16: /*0x143418*/
    case 18: /*0x143418*/
    case 19: /*0x143418*/
    case 20: /*0x143418*/
    case 36: /*0x143418*/
    case 38: /*0x143418*/
    case 40: /*0x143418*/
      result = 40.0; /*0x14346b*/
      break; /*0x143473*/
    case 3: /*0x143418*/
    case 6: /*0x143418*/
      result = 80.0; /*0x14343e*/
      break; /*0x143446*/
    case 5: /*0x143418*/
      result = 70.0; /*0x14341a*/
      break; /*0x143422*/
    case 7: /*0x143418*/
    case 8: /*0x143418*/
      result = 36.0; /*0x143435*/
      break; /*0x14343d*/
    case 10: /*0x143418*/
      result = 94.0; /*0x143474*/
      break; /*0x14347c*/
    case 11: /*0x143418*/
    case 12: /*0x143418*/
    case 21: /*0x143418*/
    case 23: /*0x143418*/
      result = 60.0; /*0x143447*/
      break; /*0x14344f*/
    case 13: /*0x143418*/
    case 14: /*0x143418*/
      result = 100.0; /*0x143462*/
      break; /*0x14346a*/
    case 17: /*0x143418*/
    case 26: /*0x143418*/
    case 29: /*0x143418*/
    case 37: /*0x143418*/
      result = 50.0; /*0x143459*/
      break; /*0x143461*/
    case 22: /*0x143418*/
      result = 20.0; /*0x14342c*/
      break; /*0x143434*/
    case 24: /*0x143418*/
      result = 25.0; /*0x14347d*/
      break; /*0x143485*/
    case 31: /*0x143418*/
      result = 21.5; /*0x143450*/
      break; /*0x143458*/
    case 32: /*0x143418*/
      result = 24.0; /*0x143423*/
      break; /*0x14342b*/
    case 33: /*0x143418*/
      result = 28.0; /*0x143486*/
      break; /*0x14348e*/
    case 34: /*0x143418*/
    case 35: /*0x143418*/
      result = 42.0; /*0x14348f*/
      break; /*0x143497*/
    default:
      result = 90.0; /*0x143498*/
      break; /*0x143498*/
  }
  return result; /*0x143422*/
}

// [4/6] Address: 0x143510
// Method: CustomListView::loadCell
__int64 __fastcall CustomListView_loadCell(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  int v5; // edx
  struct cocos2d::CCObject *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // rcx
  bool v10; // zf
  __int64 result; // rax
  struct cocos2d::CCObject *v12; // rax
  void (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  __int64 v14; // rdx
  struct cocos2d::CCObject *v15; // rax
  struct cocos2d::CCObject *v16; // rax
  struct cocos2d::CCObject *v17; // rax
  struct cocos2d::CCObject *v18; // rax
  struct cocos2d::CCObject *v19; // rax
  struct cocos2d::CCObject *v20; // rax
  struct cocos2d::CCObject *v21; // rax
  struct cocos2d::CCObject *v22; // rax
  struct cocos2d::CCObject *v23; // rax
  struct cocos2d::CCObject *v24; // rax
  struct cocos2d::CCObject *v25; // rax
  int v26; // edi
  struct cocos2d::CCObject *v27; // rsi
  void (__fastcall ***v28)(_QWORD, _BYTE *); // rcx
  __int64 v29; // rdx
  struct cocos2d::CCObject *v30; // rsi
  void (__fastcall ***v31)(_QWORD, _BYTE *); // rcx
  __int64 v32; // rdx
  struct cocos2d::CCObject *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rbx
  void (__fastcall ***v38)(_QWORD, _BYTE *); // rcx
  __int64 v39; // rdx
  struct cocos2d::CCObject *v40; // rsi
  void (__fastcall ***v41)(_QWORD, _BYTE *); // rcx
  __int64 v42; // rdx
  struct cocos2d::CCObject *v43; // rsi
  void (__fastcall ***v44)(_QWORD, _BYTE *); // rcx
  __int64 v45; // rdx
  struct cocos2d::CCObject *v46; // rax
  cocos2d::CCObject *v47; // rax
  struct cocos2d::CCObject *v48; // rax
  struct cocos2d::CCObject *v49; // rax
  unsigned int v50; // r15d
  __int64 v51; // rcx
  struct cocos2d::CCObject *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  cocos2d::CCArray *v55; // rcx
  cocos2d::CCString *v56; // rax
  const char *CString; // rax
  __int64 v58; // r8
  __int128 v59; // [rsp+20h] [rbp-20h] BYREF
  __int64 v60; // [rsp+30h] [rbp-10h]
  __int64 v61; // [rsp+38h] [rbp-8h]
  _BYTE v62[3]; // [rsp+60h] [rbp+20h] BYREF

  v4 = 0; /*0x143528*/
  v5 = *(_DWORD *)(a1 + 440); /*0x14352b*/
  switch ( v5 ) /*0x143557*/
  {
    case 2: /*0x143557*/
      v21 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143711*/
      StatsCell_loadFromObject(a2, v21); /*0x14371d*/
      goto LABEL_3; /*0x143722*/
    case 3: /*0x143557*/
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143563*/
      sub_144BC0(a2, v8); /*0x14356f*/
LABEL_3:
      v9 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x143574*/
      v10 = (a3 & 1) == 0; /*0x143586*/
      goto LABEL_4; /*0x143586*/
    case 4: /*0x143557*/
    case 5: /*0x143557*/
    case 26: /*0x143557*/
    case 29: /*0x143557*/
    case 37: /*0x143557*/
      v18 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x1436b7*/
      LevelCell_loadFromLevel(a2, (__int64)v18); /*0x1436c3*/
      goto LABEL_15; /*0x1436c8*/
    case 6: /*0x143557*/
    case 7: /*0x143557*/
    case 8: /*0x143557*/
    case 15: /*0x143557*/
      v25 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x14378d*/
      sub_14F970(a2, v25); /*0x143799*/
      v9 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x1437a9*/
      v26 = a3 & 1; /*0x1437b0*/
      if ( *(_BYTE *)(a2 + 602) ) /*0x1437b3*/
      {
        if ( v26 ) /*0x1437be*/
        {
          *(_WORD *)v62 = 20368; /*0x1437c0*/
          v62[2] = 39; /*0x1437c6*/
        }
        else
        {
          *(_WORD *)v62 = 21916; /*0x1437d4*/
          v62[2] = 42; /*0x1437da*/
        }
      }
      else
      {
        v10 = v26 == 0; /*0x1437e8*/
LABEL_4:
        if ( v10 ) /*0x14358a*/
        {
          *(_WORD *)v62 = 22689; /*0x1435a0*/
          v62[2] = 44; /*0x1435a6*/
        }
        else
        {
          *(_WORD *)v62 = 29378; /*0x14358c*/
          v62[2] = 62; /*0x143592*/
        }
      }
      return (**v9)(v9, v62); /*0x14359b*/
    case 11: /*0x143557*/
      v22 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143730*/
      SongCell_loadFromObject(a2, v22); /*0x14373c*/
      goto LABEL_15; /*0x143741*/
    case 12: /*0x143557*/
      v27 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143805*/
      v28 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x143808*/
      if ( (a3 & 1) != 0 ) /*0x143813*/
      {
        *(_WORD *)v62 = 29378; /*0x143815*/
        v62[2] = 62; /*0x14381b*/
      }
      else
      {
        *(_WORD *)v62 = 22689; /*0x14382d*/
        v62[2] = 44; /*0x143837*/
      }
      (**v28)(v28, v62); /*0x143829*/
      LOBYTE(v29) = -1; /*0x143847*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 536) + 408LL) + 40LL))( /*0x143853*/
        *(_QWORD *)(a2 + 536) + 408LL,
        v29);
      return sub_152DE0(a2, v27); /*0x143861*/
    case 13: /*0x143557*/
      v19 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x1436d3*/
      MapPackCell_loadFromMapPack(a2, v19); /*0x1436df*/
      goto LABEL_15; /*0x1436e4*/
    case 14: /*0x143557*/
      v12 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x1435bd*/
      CustomSongCell_loadFromObject(a2, v12); /*0x1435c9*/
      goto LABEL_9; /*0x1435c9*/
    case 16: /*0x143557*/
      v43 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143a3c*/
      v44 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x143a3f*/
      if ( (a3 & 1) != 0 ) /*0x143a4a*/
      {
        *(_WORD *)v62 = 29378; /*0x143a4c*/
        v62[2] = 62; /*0x143a52*/
      }
      else
      {
        *(_WORD *)v62 = 22689; /*0x143a64*/
        v62[2] = 44; /*0x143a6e*/
      }
      (**v44)(v44, v62); /*0x143a60*/
      LOBYTE(v45) = -1; /*0x143a7e*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 536) + 408LL) + 40LL))( /*0x143a8a*/
        *(_QWORD *)(a2 + 536) + 408LL,
        v45);
      return sub_156810(a2, v43); /*0x143a98*/
    case 17: /*0x143557*/
      v46 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143aa6*/
      GJMessageCell_loadFromMessage(a2, v46); /*0x143ab2*/
      goto LABEL_15; /*0x143ab7*/
    case 18: /*0x143557*/
      v30 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x14387c*/
      v31 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x14387f*/
      if ( (a3 & 1) != 0 ) /*0x14388a*/
      {
        *(_WORD *)v62 = 29378; /*0x14388c*/
        v62[2] = 62; /*0x143892*/
      }
      else
      {
        *(_WORD *)v62 = 22689; /*0x1438a4*/
        v62[2] = 44; /*0x1438ae*/
      }
      (**v31)(v31, v62); /*0x1438a0*/
      LOBYTE(v32) = -1; /*0x1438be*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 536) + 408LL) + 40LL))( /*0x1438ca*/
        *(_QWORD *)(a2 + 536) + 408LL,
        v32);
      return GJLevelScoreCell_loadFromScore(a2, v30); /*0x1438d8*/
    case 19: /*0x143557*/
      v23 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x14374f*/
      ArtistCell_loadFromObject(a2, v23); /*0x14375b*/
      goto LABEL_15; /*0x143760*/
    case 20: /*0x143557*/
      v49 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143b03*/
      sub_15B710(a2, v49); /*0x143b0f*/
      return sub_15BB10(a2, a3); /*0x143b1e*/
    case 21: /*0x143557*/
    case 22: /*0x143557*/
      v17 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x14368e*/
      sub_14E3F0(a2, v17); /*0x14369a*/
      return sub_14E6D0(a2, a3); /*0x1436a9*/
    case 23: /*0x143557*/
      v15 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143625*/
      CustomMusicCell_loadFromObject(a2, v15); /*0x143631*/
LABEL_9:
      v13 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x1435ce*/
      if ( (a3 & 1) != 0 ) /*0x1435e4*/
        memset(v62, 50, sizeof(v62)); /*0x1435e6*/
      else
        memset(v62, 75, sizeof(v62)); /*0x1435f2*/
      goto LABEL_12; /*0x1435f0*/
    case 24: /*0x143557*/
      v16 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143641*/
      sub_14EBD0(a2, v16); /*0x14364d*/
      goto LABEL_15; /*0x14364d*/
    case 25: /*0x143557*/
    case 27: /*0x143557*/
    case 28: /*0x143557*/
    case 39: /*0x143557*/
      v20 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x1436f2*/
      LevelListCell_loadFromList(a2, v20); /*0x1436fe*/
      goto LABEL_15; /*0x143703*/
    case 31: /*0x143557*/
      v33 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x1438e6*/
      OptionsCell_loadFromObject(a2, v33); /*0x1438f2*/
      v34 = *(_QWORD *)(a2 + 560); /*0x1438f7*/
      if ( v34 && *(_BYTE *)(v34 + 64) ) /*0x143903*/
      {
        *(_WORD *)v62 = -26906; /*0x143909*/
        v62[2] = 10; /*0x143913*/
        v35 = a2 + 536; /*0x143917*/
        (**(void (__fastcall ***)(__int64, _BYTE *))(*(_QWORD *)v35 + 408LL))(*(_QWORD *)v35 + 408LL, v62); /*0x14392b*/
        LOBYTE(v36) = -1; /*0x143930*/
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)v35 + 408LL) + 40LL))( /*0x14393c*/
                 *(_QWORD *)v35 + 408LL,
                 v36);
      }
      else
      {
        v37 = a2 + 536; /*0x143944*/
        v38 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)v37 + 408LL); /*0x14394e*/
        if ( (a3 & 1) != 0 ) /*0x143959*/
        {
          *(_WORD *)v62 = 29378; /*0x14395b*/
          v62[2] = 62; /*0x143965*/
        }
        else
        {
          *(_WORD *)v62 = 22689; /*0x143985*/
          v62[2] = 44; /*0x14398f*/
        }
        (**v38)(v38, v62); /*0x14396c*/
        LOBYTE(v39) = -1; /*0x143971*/
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)v37 + 408LL) + 40LL))( /*0x14397d*/
                 *(_QWORD *)v37 + 408LL,
                 v39);
      }
    case 32: /*0x143557*/
      v24 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x14376e*/
      URLCell_loadFromObject(a2, v24); /*0x14377a*/
      goto LABEL_15; /*0x14377f*/
    case 33: /*0x143557*/
      v50 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3) + 14); /*0x143b37*/
      v51 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 624LL); /*0x143b42*/
      if ( v51 ) /*0x143b4c*/
        LODWORD(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51); /*0x143b54*/
      sub_588C70(a2, v50, (unsigned int)v4); /*0x143b60*/
      result = 4281096353LL; /*0x143b69*/
      if ( (a3 & 1) != 0 ) /*0x143b73*/
        result = 4282282690LL; /*0x143b73*/
      *(_DWORD *)(a2 + 560) = result; /*0x143b76*/
      return result; /*0x143b81*/
    case 34: /*0x143557*/
    case 35: /*0x143557*/
      v52 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143b8f*/
      v53 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 624LL); /*0x143b9c*/
      v54 = v53 - 1016; /*0x143ba6*/
      if ( !v53 ) /*0x143bad*/
        v54 = 0; /*0x143bad*/
      if ( v54 ) /*0x143bb4*/
        v4 = v54 + 1008; /*0x143bb6*/
      *(_QWORD *)(a2 + 568) = v4; /*0x143bc0*/
      sub_18E150(a2, v52); /*0x143bca*/
      v13 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x143bda*/
      if ( (a3 & 1) == 0 ) /*0x143be5*/
        goto LABEL_17; /*0x143be5*/
      *(_WORD *)v62 = 26805; /*0x143beb*/
      v62[2] = 56; /*0x143bf1*/
      goto LABEL_12; /*0x143bf5*/
    case 36: /*0x143557*/
      v47 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143ac5*/
      AccountLoginLayer_init(a2, v47); /*0x143ad1*/
      goto LABEL_15; /*0x143ad6*/
    case 38: /*0x143557*/
      v40 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x1439c5*/
      v41 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x1439c8*/
      if ( (a3 & 1) != 0 ) /*0x1439d3*/
      {
        *(_WORD *)v62 = 29378; /*0x1439d5*/
        v62[2] = 62; /*0x1439db*/
      }
      else
      {
        *(_WORD *)v62 = 22689; /*0x1439ed*/
        v62[2] = 44; /*0x1439f7*/
      }
      (**v41)(v41, v62); /*0x1439e9*/
      LOBYTE(v42) = -1; /*0x143a07*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 536) + 408LL) + 40LL))( /*0x143a13*/
        *(_QWORD *)(a2 + 536) + 408LL,
        v42);
      return sub_155730(a2, v40); /*0x143a21*/
    case 40: /*0x143557*/
      v48 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), a3); /*0x143ae4*/
      sub_158BA0(a2, v48); /*0x143af0*/
LABEL_15:
      v13 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(a2 + 536) + 408LL); /*0x143652*/
      if ( (a3 & 1) != 0 ) /*0x143668*/
      {
        *(_WORD *)v62 = 29378; /*0x14366a*/
        v62[2] = 62; /*0x143670*/
      }
      else
      {
LABEL_17:
        *(_WORD *)v62 = 22689; /*0x143676*/
        v62[2] = 44; /*0x14367c*/
      }
LABEL_12:
      (**v13)(v13, v62); /*0x1435fc*/
      LOBYTE(v14) = -1; /*0x143608*/
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 536) + 408LL) + 40LL))( /*0x143614*/
                 *(_QWORD *)(a2 + 536) + 408LL,
                 v14);
      break; /*0x143617*/
    default:
      v55 = *(cocos2d::CCArray **)(a1 + 432); /*0x143bfa*/
      if ( v5 == 10 ) /*0x143c06*/
      {
        v56 = cocos2d::CCArray::objectAtIndex(v55, a3); /*0x143c08*/
        CString = cocos2d::CCString::getCString(v56); /*0x143c11*/
        v60 = 0; /*0x143c1a*/
        v59 = 0; /*0x143c1e*/
        v61 = 0; /*0x143c22*/
        v58 = -1; /*0x143c26*/
        do /*0x143c33*/
          ++v58; /*0x143c30*/
        while ( CString[v58] ); /*0x143c33*/
        sub_3C230(&v59); /*0x143c40*/
        result = sub_3F0D0(a2, &v59); /*0x143c4c*/
      }
      else
      {
        result = (__int64)cocos2d::CCArray::objectAtIndex(v55, a3); /*0x143c53*/
      }
      break; /*0x143c51*/
  }
  return result; /*0x143c59*/
}

// [5/6] Address: 0x143d10
// Method: CustomListView::setupList
// Hidden C++ exception states: #wind=4
int __fastcall CustomListView_setupList(__int64 a1)
{
  _QWORD *v2; // rbx
  float v3; // xmm6_4
  int v4; // xmm8_4
  __int64 *v5; // rsi
  cocos2d::CCArray *v6; // rcx
  cocos2d::CCArray *v7; // rcx
  cocos2d::CCArray *v8; // rcx
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // r14d
  cocos2d::CCArray *v15; // rcx
  int v16; // ebx
  char v17; // r15
  int v18; // ebp
  unsigned int v19; // esi
  struct cocos2d::CCObject *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm8_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  __int64 v26; // rcx
  float v27; // xmm6_4
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r14
  int v31; // r14d
  unsigned int v32; // esi
  struct cocos2d::CCObject *v33; // rax
  int v34; // ebx
  char v35; // r14
  unsigned int v36; // ebp
  unsigned int v37; // esi
  struct cocos2d::CCObject *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rcx
  bool v41; // zf
  float v42; // xmm9_4
  float v43; // xmm8_4
  __int64 *v44; // rbx
  __int64 v45; // rax
  __m128i v46; // xmm6
  float *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  char v50; // r15
  __int64 v51; // rcx
  int v52; // r14d
  unsigned int v53; // esi
  unsigned int v54; // eax
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // esi
  __int64 v60; // rcx
  void *v62; // [rsp+80h] [rbp+8h] BYREF

  *(float *)(a1 + 452) = CustomListView_getCellHeight(*(_DWORD *)(a1 + 440)); /*0x143d4c*/
  v2 = (_QWORD *)(a1 + 424); /*0x143d6b*/
  if ( *(float *)(a1 + 444) > (float)((float)(int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)) /*0x143d85*/
                                    * *(float *)(a1 + 452)) )
  {
    *(_BYTE *)(a1 + 460) = 1; /*0x143d87*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 920LL))(*v2, 0); /*0x143d96*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 1024LL))(*v2, 0); /*0x143da4*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 1008LL))(*v2, 0); /*0x143db2*/
  }
  v3 = 0.0; /*0x143db8*/
  v4 = 0x40000000; /*0x143dbb*/
  v5 = (__int64 *)(a1 + 424); /*0x143dcd*/
  switch ( *(_DWORD *)(a1 + 440) ) /*0x143dfc*/
  {
    case 3: /*0x143dfc*/
    case 0xD: /*0x143dfc*/
    case 0xE: /*0x143dfc*/
      v3 = 2.0; /*0x143dfe*/
      break; /*0x143e02*/
    case 4: /*0x143dfc*/
    case 5: /*0x143dfc*/
    case 0xC: /*0x143dfc*/
    case 0x11: /*0x143dfc*/
    case 0x12: /*0x143dfc*/
    case 0x15: /*0x143dfc*/
    case 0x16: /*0x143dfc*/
    case 0x17: /*0x143dfc*/
    case 0x18: /*0x143dfc*/
    case 0x19: /*0x143dfc*/
    case 0x1A: /*0x143dfc*/
    case 0x1B: /*0x143dfc*/
    case 0x1C: /*0x143dfc*/
    case 0x1D: /*0x143dfc*/
    case 0x1F: /*0x143dfc*/
    case 0x21: /*0x143dfc*/
    case 0x22: /*0x143dfc*/
    case 0x23: /*0x143dfc*/
    case 0x26: /*0x143dfc*/
    case 0x27: /*0x143dfc*/
      v7 = *(cocos2d::CCArray **)(a1 + 432); /*0x143e32*/
      if ( v7 ) /*0x143e3c*/
        v3 = (float)(int)cocos2d::CCArray::count(v7) * 0.5; /*0x143e4e*/
      v5 = (__int64 *)(a1 + 424); /*0x143e52*/
      break; /*0x143e59*/
    case 6: /*0x143dfc*/
    case 7: /*0x143dfc*/
    case 8: /*0x143dfc*/
    case 0xF: /*0x143dfc*/
    case 0x13: /*0x143dfc*/
    case 0x20: /*0x143dfc*/
      v8 = *(cocos2d::CCArray **)(a1 + 432); /*0x143e5b*/
      if ( v8 ) /*0x143e65*/
        v3 = (float)((float)(int)cocos2d::CCArray::count(v8) * 0.5) - 1.0; /*0x143e7b*/
      else
        v3 = 1.0; /*0x143e85*/
      break; /*0x143e83*/
    case 0xA: /*0x143dfc*/
      v3 = -6.0; /*0x143e8f*/
      v4 = 1092616192; /*0x143e97*/
      break; /*0x143e97*/
    case 0x10: /*0x143dfc*/
    case 0x24: /*0x143dfc*/
    case 0x25: /*0x143dfc*/
    case 0x28: /*0x143dfc*/
      v6 = *(cocos2d::CCArray **)(a1 + 432); /*0x143e07*/
      if ( v6 ) /*0x143e11*/
        v3 = (float)((float)(int)cocos2d::CCArray::count(v6) * 0.5) - 2.0; /*0x143e2b*/
      break; /*0x143e30*/
    default:
      break;
  }
  TableView_reloadData(*v5); /*0x143ea3*/
  *(float *)(*v5 + 496) = v3; /*0x143eab*/
  *(_DWORD *)(*v5 + 500) = v4; /*0x143eb6*/
  v9 = *(_DWORD *)(a1 + 440); /*0x143ebf*/
  switch ( v9 ) /*0x143ee5*/
  {
    case 2: /*0x143ee5*/
    case 3: /*0x143ee5*/
    case 6: /*0x143ee5*/
    case 7: /*0x143ee5*/
    case 8: /*0x143ee5*/
    case 10: /*0x143ee5*/
    case 11: /*0x143ee5*/
    case 13: /*0x143ee5*/
    case 14: /*0x143ee5*/
    case 15: /*0x143ee5*/
    case 16: /*0x143ee5*/
    case 17: /*0x143ee5*/
    case 19: /*0x143ee5*/
    case 20: /*0x143ee5*/
    case 23: /*0x143ee5*/
    case 24: /*0x143ee5*/
    case 28: /*0x143ee5*/
    case 31: /*0x143ee5*/
    case 32: /*0x143ee5*/
    case 37: /*0x143ee5*/
    case 38: /*0x143ee5*/
    case 39: /*0x143ee5*/
      v10 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x143eee*/
      v11 = *(_QWORD *)(a1 + 424); /*0x143ef4*/
      goto LABEL_84; /*0x143efb*/
    case 4: /*0x143ee5*/
    case 5: /*0x143ee5*/
    case 26: /*0x143ee5*/
    case 29: /*0x143ee5*/
      LODWORD(v12) = sub_3EAE0(a1); /*0x143f20*/
      if ( (_BYTE)v12 ) /*0x143f27*/
        return v12; /*0x143f27*/
      v13 = qword_905FD0; /*0x143f2d*/
      if ( !qword_905FD0 ) /*0x143f37*/
      {
        v62 = operator new(0x6E8u); /*0x143f43*/
        qword_905FD0 = sub_2723A0(v62); /*0x143f54*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x143f65*/
        v13 = qword_905FD0; /*0x143f67*/
      }
      v14 = *(_DWORD *)(v13 + 996); /*0x143f6e*/
      v15 = *(cocos2d::CCArray **)(a1 + 432); /*0x143f75*/
      if ( !v14 ) /*0x143f7f*/
        goto LABEL_83; /*0x143f7f*/
      v16 = -1; /*0x143f85*/
      v17 = 0; /*0x143f8a*/
      v18 = 0; /*0x143f8d*/
      v19 = 0; /*0x143f8f*/
      if ( !cocos2d::CCArray::count(v15) ) /*0x143f99*/
        goto LABEL_28; /*0x143f99*/
      while ( 1 ) /*0x143fa9*/
      {
        v20 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), v19); /*0x143fa9*/
        if ( *((_DWORD *)v20 + 82) - *((_DWORD *)v20 + 83) == v14 || *((_DWORD *)v20 + 306) == v14 ) /*0x143fc7*/
          goto LABEL_27; /*0x143fc7*/
        ++v16; /*0x143fc9*/
        if ( ++v19 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)) ) /*0x143fdc*/
          goto LABEL_28; /*0x143fdc*/
      }
    case 12: /*0x143ee5*/
    case 18: /*0x143ee5*/
      v34 = -1; /*0x144183*/
      v35 = 0; /*0x144188*/
      v36 = 0; /*0x14418b*/
      v37 = 0; /*0x14418d*/
      if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)) ) /*0x14419e*/
        goto LABEL_49; /*0x14419e*/
      while ( 1 ) /*0x1441a9*/
      {
        v38 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), v37); /*0x1441a9*/
        if ( (unsigned __int8)GJUserScore_isCurrentUser(v38) ) /*0x1441b2*/
          break; /*0x1441b2*/
        ++v34; /*0x1441bb*/
        if ( ++v37 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)) ) /*0x1441ce*/
          goto LABEL_49; /*0x1441ce*/
      }
      v35 = 1; /*0x1441d2*/
      v36 = v34 + 2; /*0x1441d5*/
LABEL_49:
      v39 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x1441d8*/
      v40 = *(_QWORD *)(a1 + 424); /*0x1441e5*/
      if ( v39 == 1 ) /*0x1441ef*/
        LODWORD(v12) = sub_49D80(v40); /*0x1441f9*/
      else
        LODWORD(v12) = sub_49E30(v40); /*0x144200*/
      v41 = v35 == 0; /*0x144205*/
      goto LABEL_53; /*0x144205*/
    case 21: /*0x143ee5*/
    case 22: /*0x143ee5*/
      v34 = -1; /*0x1442d9*/
      v50 = 0; /*0x1442de*/
      v51 = *(_QWORD *)(*v5 + 624); /*0x1442e4*/
      v36 = 0; /*0x1442eb*/
      if ( !v51 ) /*0x1442f0*/
        goto LABEL_66; /*0x1442f0*/
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v51 + 56LL))(v51) ) /*0x1442f5*/
        goto LABEL_66; /*0x1442f5*/
      v52 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v5 + 624) + 8LL))(*(_QWORD *)(*v5 + 624)); /*0x14430c*/
      v53 = 0; /*0x14430f*/
      if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)) ) /*0x144318*/
        goto LABEL_66; /*0x144320*/
      while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), v53) + 14) != v52 ) /*0x144343*/
      {
        ++v34; /*0x144345*/
        if ( ++v53 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)) ) /*0x144358*/
          goto LABEL_66; /*0x144358*/
      }
      v50 = 1; /*0x14435c*/
      v36 = v34 + 2; /*0x14435f*/
LABEL_66:
      v54 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x144362*/
      v55 = *(_QWORD *)(a1 + 424); /*0x14436f*/
      if ( v54 == 1 ) /*0x144379*/
        LODWORD(v12) = sub_49D80(v55); /*0x144383*/
      else
        LODWORD(v12) = sub_49E30(v55); /*0x144390*/
      v41 = v50 == 0; /*0x144388*/
LABEL_53:
      if ( v41 ) /*0x144208*/
        return v12; /*0x144208*/
      LODWORD(v12) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x144215*/
      if ( (_DWORD)v12 == 1 ) /*0x14421e*/
        return v12; /*0x14421e*/
      v42 = *(float *)(a1 + 452); /*0x144224*/
      v43 = *(float *)(a1 + 444) * 0.5; /*0x144236*/
      if ( (float)((float)v34 * v42) <= v43 ) /*0x14424b*/
        return v12; /*0x14424b*/
      v44 = *(__int64 **)(*(_QWORD *)(a1 + 424) + 480LL); /*0x144258*/
      v45 = (*(__int64 (__fastcall **)(__int64 *))(*v44 + 200))(v44); /*0x144265*/
      v46 = _mm_cvtsi32_si128(v36); /*0x14426b*/
LABEL_57:
      v27 = (float)((float)((float)(_mm_cvtepi32_ps(v46).m128_f32[0] * v42) - v43) - (float)(v42 * 0.5)) /*0x14426f*/
          + *(float *)(v45 + 4);
      v29 = *v44; /*0x14428b*/
      v28 = v44; /*0x14428e*/
      goto LABEL_58; /*0x14428e*/
    case 25: /*0x143ee5*/
    case 27: /*0x143ee5*/
      LODWORD(v12) = sub_3EAE0(a1); /*0x1440bb*/
      if ( (_BYTE)v12 ) /*0x1440c2*/
        return v12; /*0x1440c2*/
      v30 = qword_905FD0; /*0x1440c8*/
      if ( !qword_905FD0 ) /*0x1440d2*/
      {
        v62 = operator new(0x6E8u); /*0x1440de*/
        qword_905FD0 = sub_2723A0(v62); /*0x1440ef*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x144100*/
        v30 = qword_905FD0; /*0x144102*/
      }
      v31 = *(_DWORD *)(v30 + 1000); /*0x144109*/
      v15 = *(cocos2d::CCArray **)(a1 + 432); /*0x144110*/
      if ( !v31 ) /*0x14411a*/
        goto LABEL_83; /*0x14411a*/
      v16 = -1; /*0x144120*/
      v17 = 0; /*0x144125*/
      v18 = 0; /*0x144128*/
      v32 = 0; /*0x14412a*/
      if ( !cocos2d::CCArray::count(v15) ) /*0x144134*/
        goto LABEL_28; /*0x144134*/
      break; /*0x144134*/
    case 33: /*0x143ee5*/
      v56 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x1443a4*/
      v57 = *v5; /*0x1443aa*/
      if ( v56 == 1 ) /*0x1443b0*/
        sub_49D80(v57); /*0x1443ba*/
      else
        sub_49E30(v57); /*0x1443c1*/
      v12 = *v5; /*0x1443c6*/
      v58 = *(_QWORD *)(*v5 + 624); /*0x1443c9*/
      if ( !v58 ) /*0x1443d3*/
        return v12; /*0x1443d3*/
      LODWORD(v12) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 56LL))(v58); /*0x1443dc*/
      if ( !(_BYTE)v12 ) /*0x1443e1*/
        return v12; /*0x1443e1*/
      LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v5 + 624) + 8LL))(*(_QWORD *)(*v5 + 624)); /*0x1443f4*/
      v59 = v12; /*0x1443f7*/
      if ( (int)v12 <= 0 ) /*0x1443fb*/
        return v12; /*0x1443fb*/
      LODWORD(v12) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x144408*/
      if ( (unsigned int)v12 <= 1 ) /*0x144411*/
        return v12; /*0x144411*/
      v42 = *(float *)(a1 + 452); /*0x144417*/
      v43 = *(float *)(a1 + 444) * 0.5; /*0x144429*/
      if ( (float)((float)v59 * v42) <= v43 ) /*0x14443e*/
        return v12; /*0x14443e*/
      v44 = *(__int64 **)(*(_QWORD *)(a1 + 424) + 480LL); /*0x14444b*/
      v45 = (*(__int64 (__fastcall **)(__int64 *))(*v44 + 200))(v44); /*0x144458*/
      v46 = _mm_cvtsi32_si128(v59 + 1); /*0x144461*/
      goto LABEL_57; /*0x144465*/
    case 34: /*0x143ee5*/
    case 35: /*0x143ee5*/
    case 36: /*0x143ee5*/
    case 40: /*0x143ee5*/
      LODWORD(v12) = sub_3EAE0(a1); /*0x143f07*/
      if ( !(_BYTE)v12 ) /*0x143f0e*/
        goto LABEL_82; /*0x143f0e*/
      return v12; /*0x143f0e*/
    default:
      v60 = *v5; /*0x14446a*/
      if ( v9 == 10 ) /*0x144470*/
      {
        *(_DWORD *)(a1 + 452) = 1117782016; /*0x144472*/
        TableView_reloadData(v60); /*0x14447c*/
        *(_DWORD *)(*v5 + 496) = 1084227584; /*0x144484*/
      }
      else
      {
        *(_DWORD *)(a1 + 452) = 1109393408; /*0x144490*/
        TableView_reloadData(v60); /*0x14449a*/
        *(_DWORD *)(*v5 + 496) = 1106247680; /*0x1444a2*/
      }
LABEL_82:
      v15 = *(cocos2d::CCArray **)(a1 + 432); /*0x1444ac*/
LABEL_83:
      v10 = cocos2d::CCArray::count(v15); /*0x1444b3*/
      v11 = *v5; /*0x1444b9*/
LABEL_84:
      if ( v10 == 1 ) /*0x1444bf*/
        LODWORD(v12) = sub_49D80(v11); /*0x1444c9*/
      else
        LODWORD(v12) = sub_49E30(v11); /*0x1444d0*/
      return v12; /*0x1444ce*/
  }
  while ( 1 ) /*0x144149*/
  {
    v33 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 432), v32); /*0x144149*/
    if ( *((_DWORD *)v33 + 86) == v31 || *((_DWORD *)v33 + 147) == v31 ) /*0x144163*/
      break; /*0x144163*/
    ++v16; /*0x144169*/
    if ( ++v32 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)) ) /*0x14417c*/
      goto LABEL_28; /*0x14417c*/
  }
LABEL_27:
  v17 = 1; /*0x143fe0*/
  v18 = v16 + 2; /*0x143fe3*/
LABEL_28:
  v21 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x143fe6*/
  v22 = *(_QWORD *)(a1 + 424); /*0x143ff3*/
  if ( v21 == 1 ) /*0x143ffd*/
    LODWORD(v12) = sub_49D80(v22); /*0x144007*/
  else
    LODWORD(v12) = sub_49E30(v22); /*0x14400e*/
  if ( v17 ) /*0x144016*/
  {
    LODWORD(v12) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x144023*/
    if ( (_DWORD)v12 != 1 ) /*0x14402c*/
    {
      v23 = *(float *)(a1 + 452); /*0x144032*/
      v24 = *(float *)(a1 + 444) * 0.5; /*0x144043*/
      if ( (float)((float)v16 * v23) > v24 ) /*0x144056*/
      {
        v25 = (float)((float)((float)((float)v18 * v23) - v24) - (float)(v23 * 0.5)) /*0x14408d*/
            + *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 424) + 480LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 480LL))
                       + 4);
        v26 = *(_QWORD *)(a1 + 424); /*0x144092*/
        v27 = fminf(*(float *)(v26 + 500), v25); /*0x1440a1*/
        v28 = *(__int64 **)(v26 + 480); /*0x1440a5*/
        v29 = *v28; /*0x1440ac*/
LABEL_58:
        v47 = (float *)(*(__int64 (__fastcall **)(__int64 *))(v29 + 200))(v28); /*0x144291*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v62, *v47, v27); /*0x1442a6*/
        v48 = *(_QWORD *)(a1 + 424); /*0x1442ac*/
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v48 + 480) + 184LL))(*(_QWORD *)(v48 + 480), v49); /*0x1442c7*/
        LODWORD(v12) = sub_49F80(v48, 0); /*0x1442cf*/
      }
    }
  }
  return v12; /*0x1444d5*/
}

// [6/6] Address: 0x144590
// Method: CustomListView::reloadAll
void __fastcall CustomListView_reloadAll(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  unsigned int *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *k; // rdi
  unsigned int *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *ii; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 *i1; // rdi
  __int64 v19; // rcx
  cocos2d::CCObject *v20; // rdx
  unsigned int *v21; // rbx
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 *i2; // rdi
  unsigned int *v25; // rbx
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 *j; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int *v33; // rbx
  __int64 v34; // rax
  __int64 *v35; // rbx
  __int64 *n; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int *v40; // rbx
  __int64 v41; // rax
  __int64 *v42; // rbx
  __int64 *i; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int *v47; // rbx
  __int64 v48; // rax
  _QWORD *v49; // rbx
  _QWORD *nn; // rsi
  unsigned int *v51; // rsi
  unsigned int v52; // ebx
  __int64 v53; // rax
  _QWORD *v54; // rsi
  _QWORD *jj; // rbp
  __int64 v56; // rdi
  unsigned int *v57; // rsi
  unsigned int v58; // ebx
  __int64 v59; // rax
  __int64 *v60; // rsi
  __int64 *kk; // r15
  __int64 v62; // rdi
  __int64 v63; // r14
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  char v67; // bp
  char v68; // al
  unsigned int *v69; // rdi
  char v70; // bp
  __int64 v71; // rax
  __int64 *v72; // rdi
  __int64 *m; // r14
  __int64 v74; // rsi
  int v75; // eax
  __int64 v76; // rdx
  void (__fastcall ***v77)(_QWORD, _BYTE *); // rcx
  _BYTE *v78; // rdx
  __int64 v79; // rdx
  unsigned int *v80; // rsi
  char v81; // bl
  __int64 v82; // rax
  _QWORD *v83; // rsi
  _QWORD *mm; // rbp
  __int64 v85; // rdi
  void (__fastcall ***v86)(_QWORD, _BYTE *); // rcx
  _BYTE *v87; // rdx
  __int64 v88; // rdx
  _BYTE v89[3]; // [rsp+50h] [rbp+8h] BYREF
  _BYTE v90[3]; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 424); /*0x144596*/
  if ( v1 ) /*0x1445a3*/
  {
    v3 = *(_QWORD *)(v1 + 584); /*0x1445a9*/
    if ( v3 ) /*0x1445b3*/
    {
      switch ( *(_DWORD *)(a1 + 440) ) /*0x1445fc*/
      {
        case 4: /*0x1445fc*/
        case 5: /*0x1445fc*/
          v40 = *(unsigned int **)(v3 + 56); /*0x14480e*/
          v41 = *v40; /*0x144812*/
          if ( (_DWORD)v41 ) /*0x144816*/
          {
            v42 = (__int64 *)*((_QWORD *)v40 + 2); /*0x14481c*/
            for ( i = &v42[v41 - 1]; v42 <= i; ++v42 ) /*0x14482b*/
            {
              v44 = *v42; /*0x144831*/
              if ( !*v42 ) /*0x144831*/
                break; /*0x144837*/
              v45 = *(_QWORD *)(v44 + 568); /*0x14483d*/
              if ( v45 ) /*0x144847*/
              {
                v46 = *(_QWORD *)(v44 + 584); /*0x144849*/
                if ( v46 ) /*0x144853*/
                  CCMenuItemToggler_toggle(v46, *(unsigned __int8 *)(v45 + 843)); /*0x14485c*/
              }
            }
          }
          break; /*0x144868*/
        case 6: /*0x1445fc*/
        case 7: /*0x1445fc*/
        case 8: /*0x1445fc*/
        case 0xF: /*0x1445fc*/
          v25 = *(unsigned int **)(v3 + 56); /*0x14473f*/
          v26 = *v25; /*0x144743*/
          if ( (_DWORD)v26 ) /*0x144747*/
          {
            v27 = (__int64 *)*((_QWORD *)v25 + 2); /*0x14474d*/
            for ( j = &v27[v26 - 1]; v27 <= j; ++v27 ) /*0x14475c*/
            {
              v29 = *v27; /*0x144762*/
              if ( !*v27 ) /*0x144762*/
                break; /*0x144768*/
              v30 = *(_QWORD *)(v29 + 592); /*0x14476e*/
              if ( v30 ) /*0x144778*/
              {
                v31 = *(_QWORD *)(v29 + 608); /*0x14477a*/
                if ( v31 ) /*0x144784*/
                {
                  v32 = *(unsigned __int8 *)(v30 + 464); /*0x144786*/
                  if ( *(_BYTE *)(v31 + 392) != (_BYTE)v32 ) /*0x144793*/
                    CCMenuItemToggler_toggle(v31, v32); /*0x144795*/
                }
              }
            }
          }
          break; /*0x1447a1*/
        case 0xD: /*0x1445fc*/
          v4 = *(unsigned int **)(v3 + 56); /*0x1445fe*/
          v5 = *v4; /*0x144602*/
          if ( (_DWORD)v5 ) /*0x144606*/
          {
            v6 = (_QWORD *)*((_QWORD *)v4 + 2); /*0x14460c*/
            for ( k = &v6[v5 - 1]; v6 <= k; ++v6 ) /*0x14461b*/
            {
              if ( !*v6 ) /*0x144621*/
                break; /*0x144627*/
              MapPackCell_loadFromMapPack(*v6, *(_QWORD *)(*v6 + 560LL)); /*0x144634*/
            }
          }
          break; /*0x144640*/
        case 0xE: /*0x1445fc*/
        case 0x17: /*0x1445fc*/
          v69 = *(unsigned int **)(v3 + 56); /*0x1449f7*/
          v70 = 0; /*0x1449fd*/
          v71 = *v69; /*0x1449ff*/
          if ( (_DWORD)v71 ) /*0x144a03*/
          {
            v72 = (__int64 *)*((_QWORD *)v69 + 2); /*0x144a05*/
            for ( m = &v72[v71 - 1]; v72 <= m; ++v72 ) /*0x144a14*/
            {
              v74 = *v72; /*0x144a16*/
              if ( !*v72 ) /*0x144a16*/
                break; /*0x144a1c*/
              v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v74 + 560) + 8LL))(v74 + 560); /*0x144a28*/
              v76 = *(_QWORD *)(v74 + 568); /*0x144a2b*/
              if ( (*(_DWORD *)(v76 + 320) == v75) != *(_BYTE *)(v74 + 576) ) /*0x144a46*/
              {
                CustomSongCell_loadFromObject(v74, v76); /*0x144a4b*/
                v77 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(v74 + 536) + 408LL); /*0x144a57*/
                if ( (v70 & 1) != 0 ) /*0x144a62*/
                {
                  memset(v89, 50, sizeof(v89)); /*0x144a64*/
                  v78 = v89; /*0x144a6b*/
                }
                else
                {
                  memset(v90, 75, sizeof(v90)); /*0x144a77*/
                  v78 = v90; /*0x144a7e*/
                }
                (**v77)(v77, v78); /*0x144a8b*/
                LOBYTE(v79) = -1; /*0x144a94*/
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v74 + 536) + 408LL) + 40LL))( /*0x144aa0*/
                  *(_QWORD *)(v74 + 536) + 408LL,
                  v79);
              }
              ++v70; /*0x144aa3*/
            }
          }
          break; /*0x144aac*/
        case 0x10: /*0x1445fc*/
          v33 = *(unsigned int **)(v3 + 56); /*0x1447a8*/
          v34 = *v33; /*0x1447ac*/
          if ( (_DWORD)v34 ) /*0x1447b0*/
          {
            v35 = (__int64 *)*((_QWORD *)v33 + 2); /*0x1447b6*/
            for ( n = &v35[v34 - 1]; v35 <= n; ++v35 ) /*0x1447c5*/
            {
              v37 = *v35; /*0x1447d0*/
              if ( !*v35 ) /*0x1447d0*/
                break; /*0x1447d6*/
              v38 = *(_QWORD *)(v37 + 560); /*0x1447dc*/
              if ( v38 ) /*0x1447e6*/
              {
                v39 = *(_QWORD *)(v37 + 568); /*0x1447e8*/
                if ( v39 ) /*0x1447f2*/
                  CCMenuItemToggler_toggle(v39, *(unsigned __int8 *)(v38 + 796)); /*0x1447fb*/
              }
            }
          }
          break; /*0x144807*/
        case 0x11: /*0x1445fc*/
          v8 = *(unsigned int **)(v3 + 56); /*0x144647*/
          v9 = *v8; /*0x14464b*/
          if ( (_DWORD)v9 ) /*0x14464f*/
          {
            v10 = (__int64 *)*((_QWORD *)v8 + 2); /*0x144655*/
            for ( ii = &v10[v9 - 1]; v10 <= ii; ++v10 ) /*0x144664*/
            {
              v12 = *v10; /*0x144670*/
              if ( !*v10 ) /*0x144670*/
                break; /*0x144676*/
              v13 = *(_QWORD *)(v12 + 584); /*0x14467c*/
              if ( v13 ) /*0x144686*/
              {
                v14 = *(_QWORD *)(v12 + 600); /*0x144688*/
                if ( v14 ) /*0x144692*/
                  CCMenuItemToggler_toggle(v14, *(unsigned __int8 *)(v13 + 466)); /*0x14469b*/
              }
            }
          }
          break; /*0x1446a7*/
        case 0x14: /*0x1445fc*/
          v51 = *(unsigned int **)(v3 + 56); /*0x1448b7*/
          v52 = 0; /*0x1448bb*/
          v53 = *v51; /*0x1448bd*/
          if ( (_DWORD)v53 ) /*0x1448c1*/
          {
            v54 = (_QWORD *)*((_QWORD *)v51 + 2); /*0x1448c7*/
            for ( jj = &v54[v53 - 1]; v54 <= jj; ++v54 ) /*0x1448d6*/
            {
              v56 = *v54; /*0x1448e0*/
              if ( !*v54 ) /*0x1448e0*/
                break; /*0x1448e6*/
              sub_15B710(*v54, *(_QWORD *)(v56 + 560)); /*0x1448f6*/
              sub_15BB10(v56, v52++); /*0x144900*/
            }
          }
          break; /*0x14490e*/
        case 0x15: /*0x1445fc*/
        case 0x16: /*0x1445fc*/
          v57 = *(unsigned int **)(v3 + 56); /*0x144915*/
          v58 = 0; /*0x144919*/
          v59 = *v57; /*0x14491b*/
          if ( (_DWORD)v59 ) /*0x14491f*/
          {
            v60 = (__int64 *)*((_QWORD *)v57 + 2); /*0x144925*/
            for ( kk = &v60[v59 - 1]; v60 <= kk; ++v60 ) /*0x144939*/
            {
              v62 = *v60; /*0x144940*/
              if ( !*v60 ) /*0x144940*/
                break; /*0x144946*/
              v63 = v62 + 560; /*0x14494c*/
              v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v62 + 560) + 8LL))(v62 + 560); /*0x144959*/
              v65 = *(_QWORD *)(v62 + 568); /*0x14495c*/
              v67 = 0; /*0x14497d*/
              if ( *(_DWORD *)(v65 + 56) == v64 ) /*0x144966*/
              {
                v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v62 + 560); /*0x14496e*/
                v65 = *(_QWORD *)(v62 + 568); /*0x144971*/
                if ( *(_DWORD *)(v65 + 76) == v66 ) /*0x14497b*/
                  v67 = 1; /*0x144966*/
              }
              v68 = *(int *)(v65 + 76) > 0 /*0x144999*/
                 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v63 + 56LL))(v62 + 560);
              if ( v67 != *(_BYTE *)(v62 + 576) || v68 != *(_BYTE *)(v62 + 577) ) /*0x1449ae*/
              {
                sub_14E3F0(v62, *(_QWORD *)(v62 + 568)); /*0x1449ba*/
                sub_14E6D0(v62, v58); /*0x1449c4*/
              }
              ++v58; /*0x1449c9*/
            }
          }
          break; /*0x1449d2*/
        case 0x18: /*0x1445fc*/
          v80 = *(unsigned int **)(v3 + 56); /*0x144ab7*/
          v81 = 0; /*0x144abb*/
          v82 = *v80; /*0x144abd*/
          if ( (_DWORD)v82 ) /*0x144ac1*/
          {
            v83 = (_QWORD *)*((_QWORD *)v80 + 2); /*0x144ac7*/
            for ( mm = &v83[v82 - 1]; v83 <= mm; ++v83 ) /*0x144ad6*/
            {
              v85 = *v83; /*0x144ae0*/
              if ( !*v83 ) /*0x144ae0*/
                break; /*0x144ae6*/
              sub_14EBD0(*v83, *(_QWORD *)(v85 + 560)); /*0x144af6*/
              v86 = (void (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)(v85 + 536) + 408LL); /*0x144b02*/
              if ( (v81 & 1) != 0 ) /*0x144b0c*/
              {
                *(_WORD *)v89 = 29378; /*0x144b0e*/
                v87 = v89; /*0x144b15*/
                v89[2] = 62; /*0x144b1a*/
              }
              else
              {
                *(_WORD *)v90 = 22689; /*0x144b21*/
                v87 = v90; /*0x144b28*/
                v90[2] = 44; /*0x144b2d*/
              }
              (**v86)(v86, v87); /*0x144b35*/
              LOBYTE(v88) = -1; /*0x144b3e*/
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v85 + 536) + 408LL) + 40LL))( /*0x144b4a*/
                *(_QWORD *)(v85 + 536) + 408LL,
                v88);
              ++v81; /*0x144b4d*/
            }
          }
          break; /*0x144b56*/
        case 0x1A: /*0x1445fc*/
        case 0x1D: /*0x1445fc*/
          v47 = *(unsigned int **)(v3 + 56); /*0x14486f*/
          v48 = *v47; /*0x144873*/
          if ( (_DWORD)v48 ) /*0x144877*/
          {
            v49 = (_QWORD *)*((_QWORD *)v47 + 2); /*0x14487d*/
            for ( nn = &v49[v48 - 1]; v49 <= nn; ++v49 ) /*0x14488c*/
            {
              if ( !*v49 ) /*0x144892*/
                break; /*0x144898*/
              sub_14AB20(*v49, *(unsigned int *)(a1 + 464)); /*0x1448a4*/
            }
          }
          break; /*0x1448b0*/
        case 0x24: /*0x1445fc*/
          v15 = *(unsigned int **)(v3 + 56); /*0x1446ae*/
          v16 = *v15; /*0x1446b2*/
          if ( (_DWORD)v16 ) /*0x1446b6*/
          {
            v17 = (__int64 *)*((_QWORD *)v15 + 2); /*0x1446bc*/
            for ( i1 = &v17[v16 - 1]; v17 <= i1; ++v17 ) /*0x1446cb*/
            {
              v19 = *v17; /*0x1446d1*/
              if ( !*v17 ) /*0x1446d1*/
                break; /*0x1446d7*/
              v20 = *(cocos2d::CCObject **)(v19 + 560); /*0x1446dd*/
              if ( v20 ) /*0x1446e7*/
                AccountLoginLayer_init(v19, v20); /*0x1446e9*/
            }
          }
          break; /*0x1446f5*/
        case 0x28: /*0x1445fc*/
          v21 = *(unsigned int **)(v3 + 56); /*0x1446fc*/
          v22 = *v21; /*0x144700*/
          if ( (_DWORD)v22 ) /*0x144704*/
          {
            v23 = (__int64 *)*((_QWORD *)v21 + 2); /*0x14470a*/
            for ( i2 = &v23[v22 - 1]; v23 <= i2; ++v23 ) /*0x144719*/
            {
              if ( !*v23 ) /*0x144720*/
                break; /*0x144726*/
              EditorUI_onAssignNewGroupID(*v23); /*0x14472c*/
            }
          }
          break; /*0x144738*/
        default:
          return;
      }
    }
  }
}
