#include <Geode/binding/RateStarsModLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x55a610
// Method: RateStarsModLayer::~RateStarsModLayer
// Hidden C++ exception states: #wind=1
char *__fastcall RateStarsModLayer__dtor_RateStarsModLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx

  *(_QWORD *)Block = &RateStarsModLayer::`vftable'; /*0x55a62b*/
  *((_QWORD *)Block + 40) = &RateStarsModLayer::`vftable'; /*0x55a635*/
  *((_QWORD *)Block + 41) = &RateStarsModLayer::`vftable'; /*0x55a643*/
  *((_QWORD *)Block + 42) = &RateStarsModLayer::`vftable'; /*0x55a651*/
  *((_QWORD *)Block + 43) = &RateStarsModLayer::`vftable'; /*0x55a65f*/
  *((_QWORD *)Block + 44) = &RateStarsModLayer::`vftable'; /*0x55a66d*/
  *((_QWORD *)Block + 51) = &RateStarsModLayer::`vftable'; /*0x55a67b*/
  *((_QWORD *)Block + 54) = &RateStarsModLayer::`vftable'; /*0x55a689*/
  *((_QWORD *)Block + 68) = &RateStarsModLayer::`vftable'; /*0x55a697*/
  *((_QWORD *)Block + 83) = &RateStarsModLayer::`vftable'; /*0x55a6a5*/
  v4 = Block + 672; /*0x55a6ac*/
  *((_QWORD *)Block + 84) = &RateStarsModLayer::`vftable'; /*0x55a6ba*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x55a6bd*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x55a6c7*/
  {
    v6 = operator new(0x690u); /*0x55a6ce*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x55a6db*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x55a6ec*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x55a6ee*/
  }
  if ( *(char **)(v5 + 1488) == v4 ) /*0x55a6fc*/
    *(_QWORD *)(v5 + 1488) = 0; /*0x55a6fe*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x55a709*/
  if ( v7 ) /*0x55a713*/
    cocos2d::CCObject::release(v7); /*0x55a715*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 88); /*0x55a71b*/
  if ( v8 ) /*0x55a725*/
    cocos2d::CCObject::release(v8); /*0x55a727*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x55a730*/
  if ( (a2 & 1) != 0 ) /*0x55a73a*/
    j_j_free(Block); /*0x55a744*/
  return Block; /*0x55a74c*/
}

// [2/5] Address: 0x55b8f0
// Method: RateStarsModLayer::uploadActionFinished
double __fastcall RateStarsModLayer_uploadActionFinished(__int64 a1, int a2)
{
  bool v3; // zf
  double result; // xmm0_8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 40) ) /*0x55b8fc*/
  {
    v3 = *(_QWORD *)(a1 + 64) == 0; /*0x55b8fe*/
    *(_BYTE *)(a1 + 8) = 1; /*0x55b903*/
    if ( !v3 ) /*0x55b907*/
    {
      v5 = 0; /*0x55b918*/
      *(_QWORD *)&v5 = sub_3C460(32); /*0x55b92e*/
      v6 = 17; /*0x55b938*/
      v7 = 31; /*0x55b941*/
      strcpy((char *)v5, "Rating submitted!"); /*0x55b94a*/
      return UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 64), &v5); /*0x55b95f*/
    }
  }
  return result; /*0x55b964*/
}

// [3/5] Address: 0x55b970
// Method: RateStarsModLayer::uploadActionFailed
void __fastcall RateStarsModLayer_uploadActionFailed(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 40) ) /*0x55b97c*/
  {
    if ( *(_QWORD *)(a1 + 64) ) /*0x55b982*/
    {
      v3 = 0; /*0x55b9a6*/
      *(_QWORD *)&v3 = sub_3C460(32); /*0x55b9b7*/
      v4 = 31; /*0x55b9bf*/
      v5 = 31; /*0x55b9c8*/
      strcpy((char *)v3, "Failed. Please try again later."); /*0x55b9d1*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 64), &v3); /*0x55ba0c*/
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 664LL) = 0; /*0x55ba15*/
      *(_QWORD *)(a1 + 64) = 0; /*0x55ba1c*/
    }
  }
}

// [4/5] Address: 0x55ba30
// Method: RateStarsModLayer::onClosePopup
__int64 __fastcall RateStarsModLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD); // rcx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x55ba48*/
  LOBYTE(v4) = 1; /*0x55ba51*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x55ba56*/
  v6 = *(_BYTE *)(a1 + 16) == 0; /*0x55ba5c*/
  *(_QWORD *)(a1 + 72) = 0; /*0x55ba60*/
  if ( !v6 ) /*0x55ba68*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 664) + 992LL))(a1 - 664, 0); /*0x55ba7a*/
    LOBYTE(v7) = 1; /*0x55ba8e*/
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 664) + 520LL))(a1 - 664, v7); /*0x55ba90*/
    v8 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 96); /*0x55ba96*/
    if ( v8 ) /*0x55ba9d*/
      return (**v8)(v8); /*0x55baa2*/
  }
  return result; /*0x55baa4*/
}

// [5/5] Address: 0x55baf0
// Method: RateStarsModLayer::keyBackClicked
__int64 __fastcall RateStarsModLayer_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x55baf6*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x55bb05*/
  LOBYTE(v2) = 1; /*0x55bb0e*/
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2); /*0x55bb13*/
  v4 = (__int64 (__fastcall ***)(_QWORD))v1[95]; /*0x55bb19*/
  if ( v4 ) /*0x55bb23*/
    return (**v4)(v4); /*0x55bb2d*/
  return result; /*0x55bb30*/
}
