#include <Geode/binding/MusicSearchResult.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x47cbc0
// Method: MusicSearchResult::MusicSearchResult
__int64 __fastcall MusicSearchResult_MusicSearchResult(__int64 a1)
{
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)a1); /*0x47cbc9*/
  *(_QWORD *)a1 = &MusicSearchResult::`vftable'; /*0x47cbd9*/
  *(_QWORD *)(a1 + 56) = &MusicSearchResult::`vftable'; /*0x47cbe3*/
  *(_QWORD *)(a1 + 64) = 0; /*0x47cbe9*/
  *(_QWORD *)(a1 + 72) = 0; /*0x47cbed*/
  *(_QWORD *)(a1 + 80) = 0; /*0x47cbf1*/
  *(_QWORD *)(a1 + 88) = 0; /*0x47cbf5*/
  *(_QWORD *)(a1 + 96) = 0; /*0x47cbf9*/
  *(_OWORD *)(a1 + 104) = 0; /*0x47cbfd*/
  *(_QWORD *)(a1 + 120) = 0; /*0x47cc01*/
  *(_QWORD *)(a1 + 128) = 15; /*0x47cc05*/
  *(_BYTE *)(a1 + 104) = 0; /*0x47cc10*/
  *(_DWORD *)(a1 + 136) = 0; /*0x47cc13*/
  *(_WORD *)(a1 + 140) = 0; /*0x47cc19*/
  *(_BYTE *)(a1 + 142) = 0; /*0x47cc20*/
  *(_DWORD *)(a1 + 148) = 0; /*0x47cc26*/
  *(_DWORD *)(a1 + 144) = -1; /*0x47cc2c*/
  *(_QWORD *)(a1 + 152) = 0; /*0x47cc36*/
  *(_QWORD *)(a1 + 160) = 0; /*0x47cc3d*/
  *(_QWORD *)(a1 + 168) = 0; /*0x47cc44*/
  return a1; /*0x47cc4e*/
}

// [2/4] Address: 0x4937e0
// Method: MusicSearchResult::~MusicSearchResult
void __fastcall MusicSearchResult__dtor_MusicSearchResult(cocos2d::CCObject *a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *(_QWORD *)a1 = &MusicSearchResult::`vftable'; /*0x4937f0*/
  *((_QWORD *)a1 + 7) = &MusicSearchResult::`vftable'; /*0x4937fa*/
  v2 = (cocos2d::CCObject *)*((_QWORD *)a1 + 8); /*0x4937fe*/
  if ( v2 ) /*0x493805*/
    cocos2d::CCObject::release(v2); /*0x493807*/
  v3 = (cocos2d::CCObject *)*((_QWORD *)a1 + 9); /*0x49380d*/
  if ( v3 ) /*0x493814*/
    cocos2d::CCObject::release(v3); /*0x493816*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)a1 + 10); /*0x49381c*/
  if ( v4 ) /*0x493823*/
    cocos2d::CCObject::release(v4); /*0x493825*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)a1 + 11); /*0x49382b*/
  if ( v5 ) /*0x493832*/
    cocos2d::CCObject::release(v5); /*0x493834*/
  sub_685C0((char *)a1 + 152); /*0x493841*/
  sub_3C310((char *)a1 + 104); /*0x49384a*/
  cocos2d::CCObject::~CCObject(a1); /*0x493857*/
}

// [3/4] Address: 0x494740
// Method: MusicSearchResult::stateChanged
__int64 __fastcall MusicSearchResult_stateChanged(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 56) + 72LL))(
           a1 - 56,
           *(unsigned int *)(a1 - 56 + 136));
}

// [4/4] Address: 0x494760
// Method: MusicSearchResult::updateObjects
// Hidden C++ exception states: #wind=1
void __fastcall MusicSearchResult_updateObjects(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  cocos2d::CCArray *v8; // rsi
  cocos2d::CCObject *v9; // rcx
  _BYTE v10[56]; // [rsp+20h] [rbp-38h] BYREF
  void *v11; // [rsp+60h] [rbp+8h]

  *(_DWORD *)(a1 + 136) = a2; /*0x494778*/
  v4 = qword_906070; /*0x49477e*/
  if ( !qword_906070 ) /*0x494788*/
  {
    v11 = operator new(0x3D0u); /*0x494794*/
    qword_906070 = sub_47C350(v11); /*0x4947a2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x4947b3*/
    v4 = qword_906070; /*0x4947b5*/
  }
  v5 = sub_48AB90(v4, *(unsigned int *)(a1 + 144), a2); /*0x4947ca*/
  sub_493860(a1); /*0x4947d0*/
  sub_4939C0(a1); /*0x4947d8*/
  if ( *(_DWORD *)(a1 + 148) ) /*0x4947dd*/
    v5 = sub_493DD0(a1, v5); /*0x4947f1*/
  if ( *(_QWORD *)(a1 + 120) ) /*0x4947f4*/
  {
    v6 = sub_3E4F0(v10, a1 + 104); /*0x494804*/
    v5 = sub_4948A0(a1, v5, v6); /*0x494817*/
  }
  v7 = sub_493FD0(a1, v5); /*0x494825*/
  v8 = (cocos2d::CCArray *)sub_493B10(a1, v7); /*0x494833*/
  sub_494270(a1, v8, v7, v5); /*0x494842*/
  if ( *(_DWORD *)(a1 + 148) == 3 ) /*0x49484e*/
    GJBaseGameLayer_tryGetMainObject(v8, a2); /*0x494856*/
  if ( *(cocos2d::CCArray **)(a1 + 64) != v8 ) /*0x49485f*/
  {
    if ( v8 ) /*0x494864*/
      cocos2d::CCObject::retain(v8); /*0x494869*/
    v9 = *(cocos2d::CCObject **)(a1 + 64); /*0x49486f*/
    if ( v9 ) /*0x494876*/
      cocos2d::CCObject::release(v9); /*0x494878*/
    *(_QWORD *)(a1 + 64) = v8; /*0x49487e*/
  }
}
