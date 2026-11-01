#include <Geode/binding/DialogObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x9df80
// Method: DialogObject::create
// Hidden C++ exception states: #wind=3
__int64 __fastcall DialogObject_create(_QWORD *a1, __int64 a2, __int64 a3, const struct cocos2d::CCPoint *a4)
{
  unsigned int v7; // r15d
  __int64 v8; // rdi
  unsigned int v9; // ebp
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  struct cocos2d::CCString *v14; // rax
  void *v15; // rcx
  int v16; // edi
  __int64 v17; // rbx
  const struct cocos2d::CCPoint *v18; // rax
  __int64 v19; // rax
  int v20; // ebx
  const struct cocos2d::CCPoint *v21; // rax
  char *v22; // rax
  __int64 v23; // rcx
  void *v25; // [rsp+60h] [rbp-88h] BYREF
  void *v26; // [rsp+68h] [rbp-80h] BYREF
  void *Block[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v28; // [rsp+80h] [rbp-68h]
  unsigned __int64 v29; // [rsp+88h] [rbp-60h]

  v7 = *(_DWORD *)(a3 + 104); /*0x9dfbd*/
  v8 = qword_905FE0; /*0x9dfc1*/
  if ( !qword_905FE0 ) /*0x9dfcb*/
  {
    v25 = operator new(0x3E8u); /*0x9dfd7*/
    qword_905FE0 = sub_2D2B40(v25); /*0x9dfe5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9dff6*/
    v8 = qword_905FE0; /*0x9dff8*/
  }
  if ( *(_BYTE *)(a3 + 100) && !GameStatsManager_hasCompletedChallenge(v8, a3) ) /*0x9e00f*/
  {
    v9 = *(_DWORD *)(a3 + 72) - *(_DWORD *)(a3 + 76); /*0x9e01f*/
    v10 = cocos2d::CCString::createWithFormat("c%i%i", *(_DWORD *)(a3 + 104), *(_DWORD *)(a3 + 96)); /*0x9e030*/
    CString = cocos2d::CCString::getCString(v10); /*0x9e039*/
    *(_OWORD *)Block = 0; /*0x9e042*/
    v28 = 0; /*0x9e047*/
    v29 = 0; /*0x9e04f*/
    v12 = -1; /*0x9e057*/
    do /*0x9e063*/
      ++v12; /*0x9e060*/
    while ( CString[v12] ); /*0x9e063*/
    sub_3C230(Block); /*0x9e072*/
    v13 = *(_QWORD *)(v8 + 816); /*0x9e078*/
    v14 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v9); /*0x9e088*/
    cocos2d::CCDictionary::setObject(v13, v14, Block); /*0x9e099*/
    if ( v29 > 0xF ) /*0x9e0ac*/
    {
      v15 = Block[0]; /*0x9e0b1*/
      if ( v29 + 1 >= 0x1000 ) /*0x9e0c0*/
      {
        v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x9e0c6*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x9e0d5*/
          invoke_watson(0, 0, 0, 0, 0); /*0x9e0e6*/
      }
      j_j_free(v15); /*0x9e0ed*/
    }
    GameStatsManager_incrementStat(v8, "13", v9); /*0x9e0ff*/
  }
  if ( a1[90] ) /*0x9e107*/
  {
    v16 = *(_DWORD *)(a3 + 72) - *(_DWORD *)(a3 + 76); /*0x9e114*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, a4); /*0x9e11c*/
    v17 = a1[90]; /*0x9e122*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, v18); /*0x9e131*/
    sub_139750(v17, 3, v16, 0, v19, 0); /*0x9e153*/
  }
  else
  {
    v20 = *(_DWORD *)(a3 + 72) - *(_DWORD *)(a3 + 76); /*0x9e160*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, a4); /*0x9e168*/
    v22 = CurrencyRewardLayer_create(0, 0, 0, v20, 0, 0, 0, 0, v21, 0, 0, 1065353216); /*0x9e1ad*/
    a1[90] = v22; /*0x9e1b2*/
    *((_QWORD *)v22 + 51) = a1 + 85; /*0x9e1c0*/
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 456LL))(a1, a1[90], 14); /*0x9e1da*/
  }
  ChallengesPage_exitNodeAtSlot((__int64)a1, v7, 0.0); /*0x9e1e9*/
  v23 = qword_905FE0; /*0x9e1ee*/
  if ( !qword_905FE0 ) /*0x9e1f8*/
  {
    v26 = operator new(0x3E8u); /*0x9e204*/
    qword_905FE0 = sub_2D2B40(v26); /*0x9e212*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9e223*/
    v23 = qword_905FE0; /*0x9e226*/
  }
  GameStatsManager_processChallengeQueue(v23, v7); /*0x9e230*/
  ChallengesPage_createChallengeNode((__int64)a1, v7, 0, 0.5, 1u); /*0x9e24b*/
  ChallengesPage_updateTimers((__int64)a1); /*0x9e256*/
  return ChallengesPage_updateDots((__int64)a1); /*0x9e263*/
}

// [2/2] Address: 0x1722b0
// Method: DialogObject::~DialogObject
cocos2d::CCObject *__fastcall DialogObject__dtor_DialogObject(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 88); /*0x1722c3*/
  sub_3C310((char *)Block + 56); /*0x1722cc*/
  cocos2d::CCObject::~CCObject(Block); /*0x1722d4*/
  if ( (a2 & 1) != 0 ) /*0x1722dd*/
    j_j_free(Block); /*0x1722e7*/
  return Block; /*0x1722ec*/
}
