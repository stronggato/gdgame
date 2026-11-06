#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/BoomListView.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub CCScrollLayerExt_CCScrollLayerExt;
inline GDStub SmartTemplateCell_loadFromObject;
inline GDStub TableView_reloadData;
using namespace cocos2d;

// [1/9] Address: 0x3e5d0
// Method: BoomListView::BoomListView
BoomListView::BoomListView()
{
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

//   cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)a1); /*0x3e5d9*/ // cleaned base ctor/dtor
//   *(_QWORD *)a1   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e5e6*/ // cleaned vftable
//   *(_QWORD *)(a1 + 320)   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e5f0*/ // cleaned vftable
//   *(_QWORD *)(a1 + 328)   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e5fe*/ // cleaned vftable
//   *(_QWORD *)(a1 + 336)   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e60c*/ // cleaned vftable
//   *(_QWORD *)(a1 + 344)   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e61a*/ // cleaned vftable
//   *(_QWORD *)(a1 + 352)   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e628*/ // cleaned vftable
//   *(_QWORD *)(a1 + 408)   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e636*/ // cleaned vftable
//   *(_QWORD *)(a1 + 416)   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e644*/ // cleaned vftable
  *(_QWORD *)(a1 + 424)   = (uintptr_t)((uintptr_t)(0)); /*0x3e64d*/
  *(_QWORD *)(a1 + 432)   = (uintptr_t)((uintptr_t)(0)); /*0x3e654*/
  *(_QWORD *)(a1 + 440)   = (uintptr_t)((uintptr_t)(0)); /*0x3e65b*/
  *(_QWORD *)(a1 + 448)   = (uintptr_t)((uintptr_t)(0)); /*0x3e662*/
  *(_DWORD *)(a1 + 456)  = (uintptr_t)(0); /*0x3e669*/
  *(_BYTE *)(a1 + 460)  = (uintptr_t)(0); /*0x3e66f*/
  return; /*0x3e678*/
}

// [2/9] Address: 0x3e6c0
// Method: BoomListView::~BoomListView
BoomListView::~BoomListView()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCObject *v2; // rcx

//   *(_QWORD *)a1   = (uintptr_t)((uintptr_t)(&BoomListView::`vftable')); /*0x3e6d0*/ // cleaned vftable
//   *((_QWORD *)a1 + 40)  = (uintptr_t)(&BoomListView::`vftable'); /*0x3e6da*/ // cleaned vftable
//   *((_QWORD *)a1 + 41)  = (uintptr_t)(&BoomListView::`vftable'); /*0x3e6e8*/ // cleaned vftable
//   *((_QWORD *)a1 + 42)  = (uintptr_t)(&BoomListView::`vftable'); /*0x3e6f6*/ // cleaned vftable
//   *((_QWORD *)a1 + 43)  = (uintptr_t)(&BoomListView::`vftable'); /*0x3e704*/ // cleaned vftable
//   *((_QWORD *)a1 + 44)  = (uintptr_t)(&BoomListView::`vftable'); /*0x3e712*/ // cleaned vftable
//   *((_QWORD *)a1 + 51)  = (uintptr_t)(&BoomListView::`vftable'); /*0x3e720*/ // cleaned vftable
//   *((_QWORD *)a1 + 52)  = (uintptr_t)(&BoomListView::`vftable'); /*0x3e72e*/ // cleaned vftable
  v2 = (decltype(v2))((cocos2d::CCObject *)*((_QWORD *)a1 + 54)); /*0x3e735*/
  if ( v2 ) /*0x3e73f*/
    CCObject_release(v2); /*0x3e741*/
//   cocos2d::CCLayer::~CCLayer(a1); /*0x3e74f*/ // cleaned base ctor/dtor
}

// [3/9] Address: 0x3e760
// Method: BoomListView::init
bool BoomListView::init(cocos2d::CCArray* entries, BoomListType type, float width, float height)
{
  __int64 a1 = (__int64)this;
  cocos2d::CCObject* a2 = (decltype(a2))((cocos2d::CCObject*)to_gd_arg(entries));
  __int64 a3 = (__int64)to_gd_arg(type);
  float a4 = (float)to_gd_arg(width);
  int a5 = (int)to_gd_arg(height);
  int a6 = (int)to_gd_arg(0);
  int a7 = (int)to_gd_arg(0);
  uint64_t a8 = 0;

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

  result = (((cocos2d::CCLayer*)((cocos2d::CCLayer *)a1))->init()); /*0x3e792*/
  if ( result ) /*0x3e79a*/
  {
    if ( !a2 ) /*0x3e7a3*/
      a2 = (decltype(a2))((cocos2d::CCObject *)cocos2d::CCArray::createWithCapacity((unsigned int)(v11))); /*0x3e7ab*/
    *(_QWORD *)(a1 + 432)   = (uintptr_t)((uintptr_t)(a2)); /*0x3e7ae*/
    CCObject_retain(a2); /*0x3e7b8*/
    *(float *)(a1 + 444) = a4; /*0x3e7be*/
    *(_DWORD *)(a1 + 448)  = (uintptr_t)(a5); /*0x3e7d0*/
    *(_DWORD *)(a1 + 456)  = (uintptr_t)(0); /*0x3e7dc*/
    LOBYTE(v12) = 1; /*0x3e7e6*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v12); /*0x3e7eb*/
//     new ((cocos2d::CCSize*)v26) cocos2d::CCSize(*(float *)(a1 + 448), *(float *)(a1 + 444)); /*0x3e808*/ // cleaned base ctor/dtor
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)a1 + 312LL))(a1, v26); /*0x3e819*/
//     new ((cocos2d::CCRect*)v28) cocos2d::CCRect(0.0, 0.0, v26[0], v26[1]); /*0x3e84a*/ // cleaned base ctor/dtor
    v14 = (decltype(v14))v13; /*0x3e850*/
    v15 = (char *)operator new(0x298u); /*0x3e85d*/
    v27 = v15; /*0x3e860*/
//     new ((cocos2d::CCRect*)v29) cocos2d::CCRect(v14); /*0x3e86d*/ // cleaned base ctor/dtor
//     new ((cocos2d::CCRect*)v30) cocos2d::CCRect(v16); /*0x3e87b*/ // cleaned base ctor/dtor
//     CCScrollLayerExt_CCScrollLayerExt((__int64)v15, v17); /*0x3e887*/ // cleaned base ctor
//     *(_QWORD *)v15   = (uintptr_t)((uintptr_t)(&TableView::`vftable')); /*0x3e89b*/ // cleaned vftable
//     *((_QWORD *)v15 + 40)  = (uintptr_t)(&TableView::`vftable'); /*0x3e8a5*/ // cleaned vftable
//     *((_QWORD *)v15 + 41)  = (uintptr_t)(&TableView::`vftable'); /*0x3e8b3*/ // cleaned vftable
//     *((_QWORD *)v15 + 42)  = (uintptr_t)(&TableView::`vftable'); /*0x3e8c1*/ // cleaned vftable
//     *((_QWORD *)v15 + 43)  = (uintptr_t)(&TableView::`vftable'); /*0x3e8cf*/ // cleaned vftable
//     *((_QWORD *)v15 + 44)  = (uintptr_t)(&TableView::`vftable'); /*0x3e8dd*/ // cleaned vftable
//     *((_QWORD *)v15 + 51)  = (uintptr_t)(&TableView::`vftable'); /*0x3e8eb*/ // cleaned vftable
//     *((_QWORD *)v15 + 65)  = (uintptr_t)(&TableView::`vftable'); /*0x3e8f9*/ // cleaned vftable
//     cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v15 + 544)); /*0x3e903*/ // cleaned base ctor/dtor
//     cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v15 + 552)); /*0x3e910*/ // cleaned base ctor/dtor
//     cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v15 + 560)); /*0x3e91d*/ // cleaned base ctor/dtor
    *((_QWORD *)v15 + 76)  = (uintptr_t)(0); /*0x3e923*/
    *((_QWORD *)v15 + 77)  = (uintptr_t)(0); /*0x3e92a*/
    *((_QWORD *)v15 + 78)  = (uintptr_t)(0); /*0x3e931*/
    v15[632] = 1; /*0x3e938*/
    (((cocos2d::CCLayer*)((cocos2d::CCLayer *)v15))->setTouchEnabled((bool)(1))); /*0x3e945*/
    // cleaned setMouseEnabled /*0x3e950*/
    *(_WORD *)(v15 + 489)  = (uintptr_t)(0); /*0x3e956*/
    v15[491] = 1; /*0x3e95e*/
    *((_QWORD *)v15 + 80)  = (uintptr_t)(0); /*0x3e966*/
    *((_QWORD *)v15 + 59)  = (uintptr_t)(v15 + 520); /*0x3e96d*/
    v15[528] = 0; /*0x3e974*/
    v19 = (decltype(v19))((cocos2d::CCObject *)cocos2d::CCArray::createWithCapacity((unsigned int)(v18))); /*0x3e97b*/
    *((_QWORD *)v15 + 74)  = (uintptr_t)(v19); /*0x3e981*/
    CCObject_retain(v19); /*0x3e98b*/
    v21 = (decltype(v21))((cocos2d::CCObject *)cocos2d::CCArray::createWithCapacity((unsigned int)(v20))); /*0x3e991*/
    *((_QWORD *)v15 + 73)  = (uintptr_t)(v21); /*0x3e997*/
    CCObject_retain(v21); /*0x3e9a1*/
    v23 = (decltype(v23))((cocos2d::CCObject *)cocos2d::CCArray::createWithCapacity((unsigned int)(v22))); /*0x3e9a7*/
    *((_QWORD *)v15 + 75)  = (uintptr_t)(v23); /*0x3e9ad*/
    CCObject_retain(v23); /*0x3e9b7*/
    *((_DWORD *)v15 + 163)  = (uintptr_t)(0); /*0x3e9bd*/
    *((_WORD *)v15 + 328)  = (uintptr_t)(0); /*0x3e9c4*/
    *((_QWORD *)v15 + 76)  = (uintptr_t)(a1 + 408); /*0x3e9cc*/
    *((_QWORD *)v15 + 77)  = (uintptr_t)(a1 + 416); /*0x3e9d3*/
    *((_QWORD *)v15 + 78)  = (uintptr_t)(a3); /*0x3e9da*/
    v24 = *(_QWORD *)v15; /*0x3e9e1*/
//     new ((cocos2d::CCPoint*)&v27) cocos2d::CCPoint(0.0, 0.0); /*0x3e9ef*/ // cleaned base ctor/dtor
    (*(void (__fastcall **)(char *, __int64))(v24 + 184))(v15, v25); /*0x3e9fb*/
    CCObject_autorelease((cocos2d::CCObject *)v15); /*0x3ea04*/
    *(_QWORD *)(a1 + 424)   = (uintptr_t)((uintptr_t)(v15)); /*0x3ea0a*/
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 464LL))(a1, v15); /*0x3ea1a*/
    *(_DWORD *)(a1 + 440)  = (uintptr_t)(a7); /*0x3ea27*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1032LL))(a1); /*0x3ea3d*/
    if ( *(float *)(a1 + 444) > (float)((float)(int)(((cocos2d::CCArray*)(*(cocos2d::CCArray **)(a1 + 432)))->count()) /*0x3ea6f*/
                                      * *(float *)(a1 + 452)) )
    {
      *(_BYTE *)(a1 + 460)  = (uintptr_t)(1); /*0x3ea71*/
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
void BoomListView::setupList(float yOffset)
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 424); /*0x3ec29*/
  if ( *(_DWORD *)(a1 + 440) == 10 ) /*0x3ec37*/
  {
    *(_DWORD *)(a1 + 452)  = (uintptr_t)(1117782016); /*0x3ec39*/
    TableView_reloadData(v2); /*0x3ec43*/
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 496LL)   = (uintptr_t)((uintptr_t)(1084227584)); /*0x3ec4f*/
  }
  else
  {
    *(_DWORD *)(a1 + 452)  = (uintptr_t)(1109393408); /*0x3ec5b*/
    TableView_reloadData(v2); /*0x3ec65*/
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 496LL)   = (uintptr_t)((uintptr_t)(1106247680)); /*0x3ec71*/
  }
  v3 = (((cocos2d::CCArray*)(*(cocos2d::CCArray **)(a1 + 432)))->count()); /*0x3ec82*/
  v4 = *(_QWORD *)(a1 + 424); /*0x3ec88*/
  if ( v3 == 1 ) /*0x3ec92*/
    { sub_49D80(v4); return; } /*0x3eca1*/
  else
    { sub_49E30(v4); return; } /*0x3ecab*/
}

// [5/9] Address: 0x3ecb0
// Method: BoomListView::cellHeightForRowAtIndexPath
float BoomListView::cellHeightForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView)
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  return *(float *)(a1 + 44); /*0x3ecb5*/
}

// [6/9] Address: 0x3ecc0
// Method: BoomListView::numberOfRowsInSection
int BoomListView::numberOfRowsInSection(unsigned int section, TableView* tableView)
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  return (((cocos2d::CCArray*)(*(cocos2d::CCArray **)(a1 + 16)))->count());
}

// [7/9] Address: 0x3ece0
// Method: BoomListView::cellForRowAtIndexPath
TableViewCell* BoomListView::cellForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(indexPath);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  unsigned int v3; // esi
  __int64 v4; // rbx

  v3 = *(_DWORD *)(a2 + 56); /*0x3ecff*/
  v4 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)(((uintptr_t)a1 - 416)) + 1040LL))(((uintptr_t)a1 - 416), "cell-identifier"); /*0x3ed19*/
  CCObject_autorelease((cocos2d::CCObject *)v4); /*0x3ed1c*/
  *(_QWORD *)(v4 + 416)   = (uintptr_t)((uintptr_t)(*(_QWORD *)(a1 + 8))); /*0x3ed2d*/
  *(_DWORD *)(v4 + 552)  = (uintptr_t)(*(_DWORD *)(a1 + 24)); /*0x3ed3a*/
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(((uintptr_t)a1 - 416)) + 1048LL))(((uintptr_t)a1 - 416), v4, v3); /*0x3ed51*/
  return (TableViewCell*)v4; /*0x3ed54*/
}

// [8/9] Address: 0x3ed70
// Method: BoomListView::getListCell
TableViewCell* BoomListView::getListCell(char const* identifier)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(identifier);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  char *v4; // [rsp+30h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 440) == 10 ) /*0x3ed8c*/
  {
    v4 = (char *)operator new(0x258u); /*0x3ed9f*/
    SmartTemplateCell_loadFromObject(v4, a2); /*0x3edba*/
//     *(_QWORD *)v4   = (uintptr_t)((uintptr_t)(&GameCell::`vftable')); /*0x3edc6*/ // cleaned vftable
//     *((_QWORD *)v4 + 40)  = (uintptr_t)(&GameCell::`vftable'); /*0x3edd0*/ // cleaned vftable
//     *((_QWORD *)v4 + 41)  = (uintptr_t)(&GameCell::`vftable'); /*0x3edde*/ // cleaned vftable
//     *((_QWORD *)v4 + 42)  = (uintptr_t)(&GameCell::`vftable'); /*0x3edec*/ // cleaned vftable
//     *((_QWORD *)v4 + 43)  = (uintptr_t)(&GameCell::`vftable'); /*0x3edfa*/ // cleaned vftable
//     *((_QWORD *)v4 + 44)  = (uintptr_t)(&GameCell::`vftable'); /*0x3ee08*/ // cleaned vftable
    *(_OWORD *)(v4 + 568)  = (uintptr_t)(0); /*0x3ee12*/
    *((_QWORD *)v4 + 73)  = (uintptr_t)(0); /*0x3ee1b*/
    *((_QWORD *)v4 + 74)  = (uintptr_t)(15); /*0x3ee22*/
    v4[568] = 0; /*0x3ee2d*/
    *((_QWORD *)v4 + 70)  = (uintptr_t)(0); /*0x3ee33*/
  }
  else
  {
    v4 = (char *)operator new(0x238u); /*0x3ee5a*/
    SmartTemplateCell_loadFromObject(v4, a2); /*0x3ee75*/
//     *(_QWORD *)v4   = (uintptr_t)((uintptr_t)(&ListCell::`vftable')); /*0x3ee81*/ // cleaned vftable
//     *((_QWORD *)v4 + 40)  = (uintptr_t)(&ListCell::`vftable'); /*0x3ee8b*/ // cleaned vftable
//     *((_QWORD *)v4 + 41)  = (uintptr_t)(&ListCell::`vftable'); /*0x3ee99*/ // cleaned vftable
//     *((_QWORD *)v4 + 42)  = (uintptr_t)(&ListCell::`vftable'); /*0x3eea7*/ // cleaned vftable
//     *((_QWORD *)v4 + 43)  = (uintptr_t)(&ListCell::`vftable'); /*0x3eeb5*/ // cleaned vftable
//     *((_QWORD *)v4 + 44)  = (uintptr_t)(&ListCell::`vftable'); /*0x3eec3*/ // cleaned vftable
  }
  return (TableViewCell*)v4; /*0x3ee3d*/
}

// [9/9] Address: 0x3eee0
// Method: BoomListView::loadCell
void BoomListView::loadCell(TableViewCell* cell, int index)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(cell);
  unsigned int a3 = (unsigned int)to_gd_arg(index);
  uint64_t a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

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
    { (((cocos2d::CCArray*)(v5))->objectAtIndex(a3)); return; } /*0x3ef5e*/
  v6 = (decltype(v6))((((cocos2d::CCArray*)(v5))->objectAtIndex(a3))); /*0x3eeff*/
  CString = (((cocos2d::CCString*)(v6))->getCString()); /*0x3ef08*/
  v10 = 0; /*0x3ef13*/
  v11 = 0; /*0x3ef18*/
  v8 = -1; /*0x3ef1d*/
  v12 = 0; /*0x3ef24*/
  do /*0x3ef33*/
    ++v8; /*0x3ef30*/
  while ( CString[v8] ); /*0x3ef33*/
  sub_3C230(&v10); /*0x3ef41*/
  { (struct cocos2d::CCObject *)sub_3F0D0(a2, &v10); return; } /*0x3ef53*/
}
