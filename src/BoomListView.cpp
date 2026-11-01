#include <Geode/binding/BoomListView.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x3e5d0
// Method: BoomListView::BoomListView
__int64 __fastcall BoomListView_BoomListView(__int64 a1)
{
  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)a1); /*0x3e5d9*/
  *(_QWORD *)a1 = &BoomListView::`vftable'; /*0x3e5e6*/
  *(_QWORD *)(a1 + 320) = &BoomListView::`vftable'; /*0x3e5f0*/
  *(_QWORD *)(a1 + 328) = &BoomListView::`vftable'; /*0x3e5fe*/
  *(_QWORD *)(a1 + 336) = &BoomListView::`vftable'; /*0x3e60c*/
  *(_QWORD *)(a1 + 344) = &BoomListView::`vftable'; /*0x3e61a*/
  *(_QWORD *)(a1 + 352) = &BoomListView::`vftable'; /*0x3e628*/
  *(_QWORD *)(a1 + 408) = &BoomListView::`vftable'; /*0x3e636*/
  *(_QWORD *)(a1 + 416) = &BoomListView::`vftable'; /*0x3e644*/
  *(_QWORD *)(a1 + 424) = 0; /*0x3e64d*/
  *(_QWORD *)(a1 + 432) = 0; /*0x3e654*/
  *(_QWORD *)(a1 + 440) = 0; /*0x3e65b*/
  *(_QWORD *)(a1 + 448) = 0; /*0x3e662*/
  *(_DWORD *)(a1 + 456) = 0; /*0x3e669*/
  *(_BYTE *)(a1 + 460) = 0; /*0x3e66f*/
  return a1; /*0x3e678*/
}

// [2/9] Address: 0x3e6c0
// Method: BoomListView::~BoomListView
void __fastcall BoomListView__dtor_BoomListView(cocos2d::CCLayer *a1)
{
  cocos2d::CCObject *v2; // rcx

  *(_QWORD *)a1 = &BoomListView::`vftable'; /*0x3e6d0*/
  *((_QWORD *)a1 + 40) = &BoomListView::`vftable'; /*0x3e6da*/
  *((_QWORD *)a1 + 41) = &BoomListView::`vftable'; /*0x3e6e8*/
  *((_QWORD *)a1 + 42) = &BoomListView::`vftable'; /*0x3e6f6*/
  *((_QWORD *)a1 + 43) = &BoomListView::`vftable'; /*0x3e704*/
  *((_QWORD *)a1 + 44) = &BoomListView::`vftable'; /*0x3e712*/
  *((_QWORD *)a1 + 51) = &BoomListView::`vftable'; /*0x3e720*/
  *((_QWORD *)a1 + 52) = &BoomListView::`vftable'; /*0x3e72e*/
  v2 = (cocos2d::CCObject *)*((_QWORD *)a1 + 54); /*0x3e735*/
  if ( v2 ) /*0x3e73f*/
    cocos2d::CCObject::release(v2); /*0x3e741*/
  cocos2d::CCLayer::~CCLayer(a1); /*0x3e74f*/
}

// [3/9] Address: 0x3e760
// Method: BoomListView::init
// Hidden C++ exception states: #wind=2
bool __fastcall BoomListView_init(__int64 a1, cocos2d::CCObject *a2, __int64 a3, float a4, int a5, int a6, int a7)
{
  bool result; // al
  __int64 v11; // rcx
  __int64 v12; // rdx
  const struct cocos2d::CCRect *v13; // rax
  const struct cocos2d::CCRect *v14; // rbx
  char *v15; // r14
  const struct cocos2d::CCRect *v16; // rax
  float *v17; // rax
  __int64 v18; // rcx
  cocos2d::CCObject *v19; // rax
  __int64 v20; // rcx
  cocos2d::CCObject *v21; // rax
  __int64 v22; // rcx
  cocos2d::CCObject *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  float v26[2]; // [rsp+30h] [rbp-68h] BYREF
  char *v27; // [rsp+38h] [rbp-60h] BYREF
  char v28[16]; // [rsp+40h] [rbp-58h] BYREF
  char v29[16]; // [rsp+50h] [rbp-48h] BYREF
  char v30[16]; // [rsp+60h] [rbp-38h] BYREF

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x3e792*/
  if ( result ) /*0x3e79a*/
  {
    if ( !a2 ) /*0x3e7a3*/
      a2 = (cocos2d::CCObject *)cocos2d::CCArray::create(v11); /*0x3e7ab*/
    *(_QWORD *)(a1 + 432) = a2; /*0x3e7ae*/
    cocos2d::CCObject::retain(a2); /*0x3e7b8*/
    *(float *)(a1 + 444) = a4; /*0x3e7be*/
    *(_DWORD *)(a1 + 448) = a5; /*0x3e7d0*/
    *(_DWORD *)(a1 + 456) = 0; /*0x3e7dc*/
    LOBYTE(v12) = 1; /*0x3e7e6*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v12); /*0x3e7eb*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v26, *(float *)(a1 + 448), *(float *)(a1 + 444)); /*0x3e808*/
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)a1 + 312LL))(a1, v26); /*0x3e819*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v28, 0.0, 0.0, v26[0], v26[1]); /*0x3e84a*/
    v14 = v13; /*0x3e850*/
    v15 = (char *)operator new(0x298u); /*0x3e85d*/
    v27 = v15; /*0x3e860*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v29, v14); /*0x3e86d*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v30, v16); /*0x3e87b*/
    CCScrollLayerExt_CCScrollLayerExt((__int64)v15, v17); /*0x3e887*/
    *(_QWORD *)v15 = &TableView::`vftable'; /*0x3e89b*/
    *((_QWORD *)v15 + 40) = &TableView::`vftable'; /*0x3e8a5*/
    *((_QWORD *)v15 + 41) = &TableView::`vftable'; /*0x3e8b3*/
    *((_QWORD *)v15 + 42) = &TableView::`vftable'; /*0x3e8c1*/
    *((_QWORD *)v15 + 43) = &TableView::`vftable'; /*0x3e8cf*/
    *((_QWORD *)v15 + 44) = &TableView::`vftable'; /*0x3e8dd*/
    *((_QWORD *)v15 + 51) = &TableView::`vftable'; /*0x3e8eb*/
    *((_QWORD *)v15 + 65) = &TableView::`vftable'; /*0x3e8f9*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v15 + 544)); /*0x3e903*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v15 + 552)); /*0x3e910*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v15 + 560)); /*0x3e91d*/
    *((_QWORD *)v15 + 76) = 0; /*0x3e923*/
    *((_QWORD *)v15 + 77) = 0; /*0x3e92a*/
    *((_QWORD *)v15 + 78) = 0; /*0x3e931*/
    v15[632] = 1; /*0x3e938*/
    cocos2d::CCLayer::setTouchEnabled((cocos2d::CCLayer *)v15, 1); /*0x3e945*/
    cocos2d::CCLayer::setMouseEnabled((cocos2d::CCLayer *)v15, 1); /*0x3e950*/
    *(_WORD *)(v15 + 489) = 0; /*0x3e956*/
    v15[491] = 1; /*0x3e95e*/
    *((_QWORD *)v15 + 80) = 0; /*0x3e966*/
    *((_QWORD *)v15 + 59) = v15 + 520; /*0x3e96d*/
    v15[528] = 0; /*0x3e974*/
    v19 = (cocos2d::CCObject *)cocos2d::CCArray::create(v18); /*0x3e97b*/
    *((_QWORD *)v15 + 74) = v19; /*0x3e981*/
    cocos2d::CCObject::retain(v19); /*0x3e98b*/
    v21 = (cocos2d::CCObject *)cocos2d::CCArray::create(v20); /*0x3e991*/
    *((_QWORD *)v15 + 73) = v21; /*0x3e997*/
    cocos2d::CCObject::retain(v21); /*0x3e9a1*/
    v23 = (cocos2d::CCObject *)cocos2d::CCArray::create(v22); /*0x3e9a7*/
    *((_QWORD *)v15 + 75) = v23; /*0x3e9ad*/
    cocos2d::CCObject::retain(v23); /*0x3e9b7*/
    *((_DWORD *)v15 + 163) = 0; /*0x3e9bd*/
    *((_WORD *)v15 + 328) = 0; /*0x3e9c4*/
    *((_QWORD *)v15 + 76) = a1 + 408; /*0x3e9cc*/
    *((_QWORD *)v15 + 77) = a1 + 416; /*0x3e9d3*/
    *((_QWORD *)v15 + 78) = a3; /*0x3e9da*/
    v24 = *(_QWORD *)v15; /*0x3e9e1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, 0.0, 0.0); /*0x3e9ef*/
    (*(void (__fastcall **)(char *, __int64))(v24 + 184))(v15, v25); /*0x3e9fb*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v15); /*0x3ea04*/
    *(_QWORD *)(a1 + 424) = v15; /*0x3ea0a*/
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 464LL))(a1, v15); /*0x3ea1a*/
    *(_DWORD *)(a1 + 440) = a7; /*0x3ea27*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1032LL))(a1); /*0x3ea3d*/
    if ( *(float *)(a1 + 444) > (float)((float)(int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)) /*0x3ea6f*/
                                      * *(float *)(a1 + 452)) )
    {
      *(_BYTE *)(a1 + 460) = 1; /*0x3ea71*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 424) + 920LL))(*(_QWORD *)(a1 + 424), 0); /*0x3ea85*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 424) + 1024LL))(*(_QWORD *)(a1 + 424), 0); /*0x3ea97*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 424) + 1008LL))(*(_QWORD *)(a1 + 424), 0); /*0x3eaa9*/
    }
    return 1; /*0x3eaaf*/
  }
  return result; /*0x3eab1*/
}

// [4/9] Address: 0x3ec20
// Method: BoomListView::setupList
__int64 __fastcall BoomListView_setupList(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 424); /*0x3ec29*/
  if ( *(_DWORD *)(a1 + 440) == 10 ) /*0x3ec37*/
  {
    *(_DWORD *)(a1 + 452) = 1117782016; /*0x3ec39*/
    TableView_reloadData(v2); /*0x3ec43*/
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 496LL) = 1084227584; /*0x3ec4f*/
  }
  else
  {
    *(_DWORD *)(a1 + 452) = 1109393408; /*0x3ec5b*/
    TableView_reloadData(v2); /*0x3ec65*/
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 496LL) = 1106247680; /*0x3ec71*/
  }
  v3 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 432)); /*0x3ec82*/
  v4 = *(_QWORD *)(a1 + 424); /*0x3ec88*/
  if ( v3 == 1 ) /*0x3ec92*/
    return sub_49D80(v4); /*0x3eca1*/
  else
    return sub_49E30(v4); /*0x3ecab*/
}

// [5/9] Address: 0x3ecb0
// Method: BoomListView::cellHeightForRowAtIndexPath
float __fastcall BoomListView_cellHeightForRowAtIndexPath(__int64 a1)
{
  return *(float *)(a1 + 44); /*0x3ecb5*/
}

// [6/9] Address: 0x3ecc0
// Method: BoomListView::numberOfRowsInSection
unsigned int __fastcall BoomListView_numberOfRowsInSection(__int64 a1)
{
  return cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 16));
}

// [7/9] Address: 0x3ece0
// Method: BoomListView::cellForRowAtIndexPath
__int64 __fastcall BoomListView_cellForRowAtIndexPath(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbx

  v3 = *(_DWORD *)(a2 + 56); /*0x3ecff*/
  v4 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)(a1 - 416) + 1040LL))(a1 - 416, "cell-identifier"); /*0x3ed19*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x3ed1c*/
  *(_QWORD *)(v4 + 416) = *(_QWORD *)(a1 + 8); /*0x3ed2d*/
  *(_DWORD *)(v4 + 552) = *(_DWORD *)(a1 + 24); /*0x3ed3a*/
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 - 416) + 1048LL))(a1 - 416, v4, v3); /*0x3ed51*/
  return v4; /*0x3ed54*/
}

// [8/9] Address: 0x3ed70
// Method: BoomListView::getListCell
// Hidden C++ exception states: #wind=2
char *__fastcall BoomListView_getListCell(__int64 a1, __int64 a2)
{
  char *v4; // [rsp+30h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 440) == 10 ) /*0x3ed8c*/
  {
    v4 = (char *)operator new(0x258u); /*0x3ed9f*/
    SmartTemplateCell_loadFromObject(v4, a2); /*0x3edba*/
    *(_QWORD *)v4 = &GameCell::`vftable'; /*0x3edc6*/
    *((_QWORD *)v4 + 40) = &GameCell::`vftable'; /*0x3edd0*/
    *((_QWORD *)v4 + 41) = &GameCell::`vftable'; /*0x3edde*/
    *((_QWORD *)v4 + 42) = &GameCell::`vftable'; /*0x3edec*/
    *((_QWORD *)v4 + 43) = &GameCell::`vftable'; /*0x3edfa*/
    *((_QWORD *)v4 + 44) = &GameCell::`vftable'; /*0x3ee08*/
    *(_OWORD *)(v4 + 568) = 0; /*0x3ee12*/
    *((_QWORD *)v4 + 73) = 0; /*0x3ee1b*/
    *((_QWORD *)v4 + 74) = 15; /*0x3ee22*/
    v4[568] = 0; /*0x3ee2d*/
    *((_QWORD *)v4 + 70) = 0; /*0x3ee33*/
  }
  else
  {
    v4 = (char *)operator new(0x238u); /*0x3ee5a*/
    SmartTemplateCell_loadFromObject(v4, a2); /*0x3ee75*/
    *(_QWORD *)v4 = &ListCell::`vftable'; /*0x3ee81*/
    *((_QWORD *)v4 + 40) = &ListCell::`vftable'; /*0x3ee8b*/
    *((_QWORD *)v4 + 41) = &ListCell::`vftable'; /*0x3ee99*/
    *((_QWORD *)v4 + 42) = &ListCell::`vftable'; /*0x3eea7*/
    *((_QWORD *)v4 + 43) = &ListCell::`vftable'; /*0x3eeb5*/
    *((_QWORD *)v4 + 44) = &ListCell::`vftable'; /*0x3eec3*/
  }
  return v4; /*0x3ee3d*/
}

// [9/9] Address: 0x3eee0
// Method: BoomListView::loadCell
struct cocos2d::CCObject *__fastcall BoomListView_loadCell(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v4; // zf
  cocos2d::CCArray *v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 440) == 10; /*0x3eef0*/
  v5 = *(cocos2d::CCArray **)(a1 + 432); /*0x3eefa*/
  if ( !v4 ) /*0x3eefd*/
    return cocos2d::CCArray::objectAtIndex(v5, a3); /*0x3ef5e*/
  v6 = cocos2d::CCArray::objectAtIndex(v5, a3); /*0x3eeff*/
  CString = cocos2d::CCString::getCString(v6); /*0x3ef08*/
  v10 = 0; /*0x3ef13*/
  v11 = 0; /*0x3ef18*/
  v8 = -1; /*0x3ef1d*/
  v12 = 0; /*0x3ef24*/
  do /*0x3ef33*/
    ++v8; /*0x3ef30*/
  while ( CString[v8] ); /*0x3ef33*/
  sub_3C230(&v10); /*0x3ef41*/
  return (struct cocos2d::CCObject *)sub_3F0D0(a2, &v10); /*0x3ef53*/
}
