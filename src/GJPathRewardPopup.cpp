#include <Geode/binding/GJPathRewardPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3947a0
// Method: GJPathRewardPopup::onClaim
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJPathRewardPopup_onClaim(unsigned int *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 result; // rax
  struct cocos2d::CCAction *v6; // rax
  __int64 v7; // rbx
  struct cocos2d::CCFiniteTimeAction *v8; // rax
  struct cocos2d::CCAction *v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  cocos2d::CCObject *v14; // rcx
  void *v15; // [rsp+20h] [rbp-68h]
  _BYTE v16[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v17[32]; // [rsp+48h] [rbp-40h] BYREF

  v2 = qword_905FE0; /*0x3947c4*/
  if ( !qword_905FE0 ) /*0x3947ce*/
  {
    v15 = operator new(0x3E8u); /*0x3947da*/
    qword_905FE0 = sub_2D2B40(v15); /*0x3947e8*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3947f9*/
    v2 = qword_905FE0; /*0x3947fb*/
  }
  sub_2EB030(a1, v17, a1[166]); /*0x39480e*/
  sub_3E4F0(v16, v17); /*0x39481e*/
  v4 = GameStatsManager_unlockSpecialChest(v2, v3); /*0x39482e*/
  sub_3C310(v17); /*0x394836*/
  if ( !v4 ) /*0x39483e*/
    return GJPromoPopup_onClose((struct cocos2d::CCObject *)a1); /*0x394843*/
  v6 = cocos2d::CCFadeTo::create(0.2, 0); /*0x394857*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v6); /*0x394863*/
  v7 = cocos2d::CCCallFunc::create(a1, GJPromoPopup_onClose); /*0x394879*/
  v8 = cocos2d::CCDelayTime::create(0.2); /*0x394884*/
  v9 = cocos2d::CCSequence::create(v8, v7, 0); /*0x394893*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v9); /*0x39489f*/
  v10 = sub_55E830(*(unsigned int *)(v4 + 64), 0); /*0x3948af*/
  v11 = (__int64 *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 504LL))(a1); /*0x3948c1*/
  v12 = *v11; /*0x3948c4*/
  v13 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 96LL))(a1); /*0x3948d1*/
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v12 + 456))(v11, v10, (unsigned int)(v13 + 1)); /*0x3948dd*/
  v14 = *(cocos2d::CCObject **)(v10 + 704); /*0x3948e3*/
  if ( v14 ) /*0x3948ed*/
    cocos2d::CCObject::release(v14); /*0x3948ef*/
  *(_QWORD *)(v10 + 704) = v4; /*0x3948f5*/
  cocos2d::CCObject::retain((cocos2d::CCObject *)v4); /*0x3948ff*/
  if ( !*(_BYTE *)(v4 + 80) || (result = *(unsigned int *)(v10 + 696), *(_DWORD *)(v4 + 64) == (_DWORD)result) ) /*0x394914*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 720) + 336LL))(*(_QWORD *)(v10 + 720), 0); /*0x394922*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 720) + 936LL))(*(_QWORD *)(v10 + 720), 0); /*0x394934*/
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 712) + 336LL))(*(_QWORD *)(v10 + 712), 0); /*0x394946*/
    *(_BYTE *)(v10 + 700) = 1; /*0x39494c*/
    if ( *(_BYTE *)(v10 + 701) ) /*0x394953*/
      return RewardUnlockLayer_playRewardEffect(v10); /*0x39495f*/
  }
  return result; /*0x394964*/
}
