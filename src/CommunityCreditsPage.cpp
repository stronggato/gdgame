#include <Geode/binding/CommunityCreditsPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x12cd10
// Method: CommunityCreditsPage::show
__int64 __fastcall CommunityCreditsPage_show(__int64 a1)
{
  float v3; // xmm6_4
  const struct cocos2d::CCPoint *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCAction *v9; // rax
  __int64 v10; // rcx
  cocos2d::CCScene *v11; // rbx
  int v12; // eax
  struct cocos2d::CCAction *v13; // rax
  __int64 v14; // rdx
  float v15; // [rsp+50h] [rbp+8h] BYREF
  char v16; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 596) ) /*0x12cd16*/
    return FLAlertLayer_show(a1); /*0x12cd22*/
  v3 = (float)(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 408) + 32LL))(a1 + 408); /*0x12cd63*/
  v4 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 200LL))(*(_QWORD *)(a1 + 584)); /*0x12cd66*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, v4); /*0x12cd74*/
  v5 = *(__int64 **)(a1 + 584); /*0x12cd7a*/
  v6 = *v5; /*0x12cd94*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, v15, 160.0); /*0x12cd97*/
  (*(void (__fastcall **)(__int64 *, __int64))(v6 + 184))(v5, v7); /*0x12cda3*/
  v8 = cocos2d::CCMoveTo::create(0.5, (const struct cocos2d::CCPoint *)&v15); /*0x12cdb6*/
  v9 = cocos2d::CCEaseElasticOut::create(v8, 0.60000002); /*0x12cdc7*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 584), v9); /*0x12cdd7*/
  v11 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v10) + 272); /*0x12cde8*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x12cdef*/
  {
    v11 = *(cocos2d::CCScene **)(a1 + 568); /*0x12cdfb*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v11) + 1 >= 105 ) /*0x12ce0e*/
      v12 = cocos2d::CCScene::getHighestChildZ(v11) + 1; /*0x12ce20*/
    else
      v12 = 105; /*0x12ce10*/
    *(_DWORD *)(a1 + 592) = v12; /*0x12ce22*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0x12ce28*/
    *(_DWORD *)(a1 + 592) = 105; /*0x12ce34*/
  (*(void (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v11 + 456LL))(v11, a1); /*0x12ce4d*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, 0); /*0x12ce63*/
  v13 = cocos2d::CCFadeTo::create(0.14, (int)v3); /*0x12ce72*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v13); /*0x12ce7e*/
  LOBYTE(v14) = 1; /*0x12ce87*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, v14); /*0x12cd27*/
}
