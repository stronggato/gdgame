#include <Geode/binding/ItemTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x633540
// Method: ItemTriggerGameObject::~ItemTriggerGameObject
cocos2d::CCSprite *__fastcall ItemTriggerGameObject__dtor_ItemTriggerGameObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x633553*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x633560*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x63356e*/
  TextGameObject__dtor_TextGameObject(Block); /*0x633575*/
  if ( (a2 & 1) != 0 ) /*0x63357d*/
    j_j_free(Block); /*0x633587*/
  return Block; /*0x63358c*/
}

// [2/5] Address: 0x65bd20
// Method: ItemTriggerGameObject::customSetup
char __fastcall ItemTriggerGameObject_customSetup(__int64 a1)
{
  char result; // al

  result = EffectGameObject_customSetup(a1); /*0x65bd29*/
  if ( *(_DWORD *)(a1 + 1036) == 3620 ) /*0x65bd38*/
  {
    *(_DWORD *)(a1 + 1876) = 3; /*0x65bd3a*/
    *(_QWORD *)(a1 + 1880) = 3; /*0x65bd44*/
  }
  return result; /*0x65bd4f*/
}

// [3/5] Address: 0x65bd60
// Method: ItemTriggerGameObject::triggerObject
// Hidden C++ exception states: #wind=2
void __fastcall ItemTriggerGameObject_triggerObject(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  char v6; // bl
  _BYTE *v7; // rcx
  _BYTE *Block; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  _BYTE v10[24]; // [rsp+48h] [rbp-20h] BYREF

  switch ( *(_DWORD *)(a1 + 1036) ) /*0x65bd8e*/
  {
    case 0xE23: /*0x65bd8e*/
      GJBaseGameLayer_activateItemEditTrigger((__int64)a2, a1); /*0x65be7e*/
      break;
    case 0xE24: /*0x65bd8e*/
      if ( a4 ) /*0x65bdbd*/
      {
        sub_18A9D0(v10, a4); /*0x65bdc7*/
        v6 = 1; /*0x65bdcd*/
      }
      else
      {
        Block = 0; /*0x65bdd7*/
        v9 = 0; /*0x65bddd*/
        v6 = 2; /*0x65bde7*/
      }
      GJBaseGameLayer_activateItemCompareTrigger((__int64)a2, a1); /*0x65bdf9*/
      if ( (v6 & 2) != 0 ) /*0x65be02*/
      {
        v6 &= ~2u; /*0x65be04*/
        v7 = Block; /*0x65be07*/
        if ( Block ) /*0x65be0f*/
        {
          if ( ((v9 - (_QWORD)Block) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x65be27*/
          {
            v7 = (_BYTE *)*((_QWORD *)Block - 1); /*0x65be2d*/
            if ( (unsigned __int64)(Block - v7 - 8) > 0x1F ) /*0x65be3c*/
              invoke_watson(0, 0, 0, 0, 0); /*0x65be4d*/
          }
          j_j_free(v7); /*0x65be54*/
        }
      }
      if ( (v6 & 1) != 0 ) /*0x65be6a*/
        sub_685C0(v10); /*0x65be71*/
      break;
    case 0xE39: /*0x65bd8e*/
      GJBaseGameLayer_activatePersistentItemTrigger((__int64)a2, a1); /*0x65bdb0*/
      break;
    default:
      EffectGameObject_triggerObject(a1, a2, a3, a4); /*0x65bda0*/
      break;
  }
}

// [4/5] Address: 0x65bea0
// Method: ItemTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall ItemTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v11 = a2; /*0x65bed8*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65bee5*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v14, a3); /*0x65bef9*/
  v11 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v12, SaveString); /*0x65bf10*/
  fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65bf1f*/
  sub_3C310(v14); /*0x65bf2d*/
  if ( *(_DWORD *)(a1 + 1036) == 3619 ) /*0x65bf3e*/
  {
    if ( *(_DWORD *)(a1 + 1696) ) /*0x65c5d8*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c5e1*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c5e6*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c5f5*/
      fmt::BasicWriter<char>::operator<<(v13, 80); /*0x65c605*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c60b*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c610*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c61f*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x65c630*/
    }
    if ( *(_DWORD *)(a1 + 1684) ) /*0x65c636*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c63f*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c644*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c653*/
      fmt::BasicWriter<char>::operator<<(v13, 95); /*0x65c663*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c669*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c66e*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c67d*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1684)); /*0x65c68e*/
    }
    if ( *(_DWORD *)(a1 + 1856) ) /*0x65c694*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c69d*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c6a2*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c6b1*/
      fmt::BasicWriter<char>::operator<<(v13, 476); /*0x65c6c1*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c6c7*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c6cc*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c6db*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x65c6ec*/
    }
    if ( *(_DWORD *)(a1 + 1860) ) /*0x65c6f2*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c6fb*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c700*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c70f*/
      fmt::BasicWriter<char>::operator<<(v13, 477); /*0x65c71f*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c725*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c72a*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c739*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1860)); /*0x65c74a*/
    }
    if ( *(_DWORD *)(a1 + 1864) ) /*0x65c750*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c759*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c75e*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c76d*/
      fmt::BasicWriter<char>::operator<<(v13, 478); /*0x65c77d*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c783*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c788*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c797*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1864)); /*0x65c7a8*/
    }
    if ( *(_DWORD *)(a1 + 1480) ) /*0x65c7ae*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c7b7*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c7bc*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c7cb*/
      fmt::BasicWriter<char>::operator<<(v13, 51); /*0x65c7db*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c7e1*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c7e6*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c7f5*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x65c806*/
    }
    if ( *(float *)(a1 + 1868) != 0.0 ) /*0x65c81c*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c81e*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c823*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c832*/
      fmt::BasicWriter<char>::operator<<(v13, 479); /*0x65c842*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c848*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c84d*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c85c*/
      fmt::BasicWriter<char>::operator<<(v13); /*0x65c872*/
    }
    if ( *(_DWORD *)(a1 + 1876) ) /*0x65c878*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c881*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c886*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c895*/
      fmt::BasicWriter<char>::operator<<(v13, 480); /*0x65c8a5*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c8ab*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c8b0*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c8bf*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1876)); /*0x65c8d0*/
    }
    if ( *(_DWORD *)(a1 + 1880) ) /*0x65c8d6*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c8df*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c8e4*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c8f3*/
      fmt::BasicWriter<char>::operator<<(v13, 481); /*0x65c903*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c909*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c90e*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c91d*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1880)); /*0x65c92e*/
    }
    if ( *(_DWORD *)(a1 + 1884) ) /*0x65c934*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c93d*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c942*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c951*/
      fmt::BasicWriter<char>::operator<<(v13, 482); /*0x65c961*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c967*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c96c*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c97b*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1884)); /*0x65c98c*/
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 1036) != 3620 ) /*0x65bf47*/
    {
      if ( *(_DWORD *)(a1 + 1036) == 3641 ) /*0x65bf50*/
      {
        if ( *(_DWORD *)(a1 + 1696) ) /*0x65bf5d*/
        {
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65bf66*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65bf6b*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65bf7a*/
          fmt::BasicWriter<char>::operator<<(v13, 80); /*0x65bf8a*/
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65bf90*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65bf95*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65bfa4*/
          fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x65bfb5*/
        }
        if ( *(_BYTE *)(a1 + 1908) ) /*0x65bfbb*/
        {
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65bfc4*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65bfc9*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65bfd8*/
          fmt::BasicWriter<char>::operator<<(v13, 491); /*0x65bfe8*/
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65bfee*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65bff3*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c002*/
          fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1908)); /*0x65c014*/
        }
        if ( *(_BYTE *)(a1 + 1909) ) /*0x65c01a*/
        {
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65c023*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65c028*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c037*/
          fmt::BasicWriter<char>::operator<<(v13, 492); /*0x65c047*/
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65c04d*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65c052*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c061*/
          fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1909)); /*0x65c073*/
        }
        if ( *(_BYTE *)(a1 + 1910) ) /*0x65c079*/
        {
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65c082*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65c087*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c096*/
          fmt::BasicWriter<char>::operator<<(v13, 493); /*0x65c0a6*/
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65c0ac*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65c0b1*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c0c0*/
          fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1910)); /*0x65c0d2*/
        }
        if ( *(_BYTE *)(a1 + 1911) ) /*0x65c0d8*/
        {
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65c0e5*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65c0ea*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c0f9*/
          fmt::BasicWriter<char>::operator<<(v13, 494); /*0x65c109*/
          *(_QWORD *)&v11 = &unk_709CE8; /*0x65c10f*/
          *((_QWORD *)&v11 + 1) = 0; /*0x65c114*/
          fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c123*/
          v7 = *(unsigned __int8 *)(a1 + 1911); /*0x65c129*/
LABEL_66:
          fmt::BasicWriter<char>::operator<<(v13, v7); /*0x65caff*/
          goto LABEL_67; /*0x65cb04*/
        }
      }
      goto LABEL_67; /*0x65c0df*/
    }
    if ( *(_DWORD *)(a1 + 1696) ) /*0x65c13c*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c145*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c14a*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c159*/
      fmt::BasicWriter<char>::operator<<(v13, 80); /*0x65c169*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c16f*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c174*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c183*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x65c194*/
    }
    if ( *(_DWORD *)(a1 + 1684) ) /*0x65c19a*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c1a3*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c1a8*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c1b7*/
      fmt::BasicWriter<char>::operator<<(v13, 95); /*0x65c1c7*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c1cd*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c1d2*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c1e1*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1684)); /*0x65c1f2*/
    }
    if ( *(_DWORD *)(a1 + 1480) ) /*0x65c1f8*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c201*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c206*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c215*/
      fmt::BasicWriter<char>::operator<<(v13, 51); /*0x65c225*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c22b*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c230*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c23f*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x65c250*/
    }
    if ( *(_DWORD *)(a1 + 1484) ) /*0x65c256*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c25f*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c264*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c273*/
      fmt::BasicWriter<char>::operator<<(v13, 71); /*0x65c283*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c289*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c28e*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c29d*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1484)); /*0x65c2ae*/
    }
    if ( *(_DWORD *)(a1 + 1856) ) /*0x65c2b4*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c2bd*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c2c2*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c2d1*/
      fmt::BasicWriter<char>::operator<<(v13, 476); /*0x65c2e1*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c2e7*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c2ec*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c2fb*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x65c30c*/
    }
    if ( *(_DWORD *)(a1 + 1860) ) /*0x65c312*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c31b*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c320*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c32f*/
      fmt::BasicWriter<char>::operator<<(v13, 477); /*0x65c33f*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c345*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c34a*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c359*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1860)); /*0x65c36a*/
    }
    if ( *(float *)(a1 + 1868) != 0.0 ) /*0x65c380*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c382*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c387*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c396*/
      fmt::BasicWriter<char>::operator<<(v13, 479); /*0x65c3a6*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c3ac*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c3b1*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c3c0*/
      fmt::BasicWriter<char>::operator<<(v13); /*0x65c3d6*/
    }
    if ( *(float *)(a1 + 1872) != 0.0 ) /*0x65c3e9*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c3eb*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c3f0*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c3ff*/
      fmt::BasicWriter<char>::operator<<(v13, 483); /*0x65c40f*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c415*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c41a*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c429*/
      fmt::BasicWriter<char>::operator<<(v13); /*0x65c43f*/
    }
    if ( *(_DWORD *)(a1 + 1876) ) /*0x65c445*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c44e*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c453*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c462*/
      fmt::BasicWriter<char>::operator<<(v13, 480); /*0x65c472*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c478*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c47d*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c48c*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1876)); /*0x65c49d*/
    }
    if ( *(_DWORD *)(a1 + 1880) ) /*0x65c4a3*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c4ac*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c4b1*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c4c0*/
      fmt::BasicWriter<char>::operator<<(v13, 481); /*0x65c4d0*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c4d6*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c4db*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c4ea*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1880)); /*0x65c4fb*/
    }
    if ( *(_DWORD *)(a1 + 1884) ) /*0x65c501*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c50a*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c50f*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c51e*/
      fmt::BasicWriter<char>::operator<<(v13, 482); /*0x65c52e*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c534*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c539*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c548*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1884)); /*0x65c559*/
    }
    if ( *(float *)(a1 + 1888) != 0.0 ) /*0x65c56c*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c572*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c577*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c586*/
      fmt::BasicWriter<char>::operator<<(v13, 484); /*0x65c596*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65c59c*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65c5a1*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c5b0*/
      fmt::BasicWriter<char>::operator<<(v13); /*0x65c5c6*/
    }
  }
  if ( *(_DWORD *)(a1 + 1892) ) /*0x65c992*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x65c99b*/
    *((_QWORD *)&v11 + 1) = 0; /*0x65c9a0*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c9af*/
    fmt::BasicWriter<char>::operator<<(v13, 485); /*0x65c9bf*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x65c9c5*/
    *((_QWORD *)&v11 + 1) = 0; /*0x65c9ca*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65c9d9*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1892)); /*0x65c9ea*/
  }
  if ( *(_DWORD *)(a1 + 1896) ) /*0x65c9f0*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x65c9f9*/
    *((_QWORD *)&v11 + 1) = 0; /*0x65c9fe*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65ca0d*/
    fmt::BasicWriter<char>::operator<<(v13, 486); /*0x65ca1d*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x65ca23*/
    *((_QWORD *)&v11 + 1) = 0; /*0x65ca28*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65ca37*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1896)); /*0x65ca48*/
  }
  if ( *(_DWORD *)(a1 + 1900) ) /*0x65ca4e*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x65ca57*/
    *((_QWORD *)&v11 + 1) = 0; /*0x65ca5c*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65ca6b*/
    fmt::BasicWriter<char>::operator<<(v13, 578); /*0x65ca7b*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x65ca81*/
    *((_QWORD *)&v11 + 1) = 0; /*0x65ca86*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65ca95*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1900)); /*0x65caa6*/
  }
  if ( *(_DWORD *)(a1 + 1904) ) /*0x65caac*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x65cab5*/
    *((_QWORD *)&v11 + 1) = 0; /*0x65caba*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65cac9*/
    fmt::BasicWriter<char>::operator<<(v13, 579); /*0x65cad9*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x65cadf*/
    *((_QWORD *)&v11 + 1) = 0; /*0x65cae4*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65caf3*/
    v7 = *(unsigned int *)(a1 + 1904); /*0x65caf9*/
    goto LABEL_66; /*0x65caf9*/
  }
LABEL_67:
  v8 = fmt::BasicWriter<char>::c_str(v13); /*0x65cb0a*/
  *(_OWORD *)a2 = 0; /*0x65cb18*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65cb1b*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65cb1f*/
  v9 = -1; /*0x65cb23*/
  do /*0x65cb33*/
    ++v9; /*0x65cb30*/
  while ( *(_BYTE *)(v8 + v9) ); /*0x65cb33*/
  sub_3C230(a2); /*0x65cb40*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65cb4b*/
  return a2; /*0x65cb54*/
}

// [5/5] Address: 0x65cb80
// Method: ItemTriggerGameObject::customObjectSetup
char __fastcall ItemTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // ebx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  int v14; // eax
  const char *v15; // rcx
  const char *v16; // rcx
  int v17; // ebx
  int v18; // eax
  const char *v19; // rcx
  int v20; // eax
  const char *v21; // rcx
  int v22; // eax
  const char *v23; // rcx
  int v24; // eax
  const char *v25; // rcx
  int v26; // eax
  const char *v27; // rcx
  int v28; // eax
  const char *v29; // rcx
  float v30; // xmm6_4
  float v31; // xmm1_4
  const char *v32; // rcx
  float v33; // xmm8_4
  float v34; // xmm1_4
  const char *v35; // rcx
  float v36; // xmm8_4
  int v37; // eax
  const char *v38; // rcx
  int v39; // eax
  const char *v40; // rcx
  int v41; // eax
  const char *v42; // rcx
  const char *v43; // rcx
  float v44; // xmm8_4
  int v45; // eax
  const char *v46; // rcx
  int v47; // eax
  const char *v48; // rcx
  int v49; // eax
  const char *v50; // rcx
  int v51; // eax
  const char *v52; // rcx
  int v53; // eax
  const char *v54; // rcx
  int v55; // eax
  const char *v56; // rcx
  float v57; // xmm1_4
  const char *v58; // rcx
  float v59; // xmm6_4
  int v60; // eax
  const char *v61; // rcx
  int v62; // eax
  const char *v63; // rcx
  int v64; // eax
  const char *v65; // rcx
  int v66; // eax
  const char *v67; // rcx
  int v68; // eax
  const char *v69; // rcx
  int v70; // eax
  const char *v71; // rcx
  const char *v72; // rcx

  LOBYTE(v6) = EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65cba3*/
  if ( *(_DWORD *)(a1 + 1036) == 3619 ) /*0x65cbb4*/
  {
    v17 = 0; /*0x65cfcf*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x65cfd1*/
    {
      v46 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x65cfe1*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x65cfed*/
        v46 = *(const char **)v46; /*0x65cfef*/
      v45 = atoi(v46); /*0x65cff2*/
    }
    else
    {
      v45 = 0; /*0x65cfda*/
    }
    *(_DWORD *)(a1 + 1696) = v45; /*0x65cff8*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 760LL) ) /*0x65d001*/
    {
      v48 = (const char *)(*(_QWORD *)a2 + 3040LL); /*0x65d011*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 3064LL) > 0xFu ) /*0x65d01d*/
        v48 = *(const char **)v48; /*0x65d01f*/
      v47 = atoi(v48); /*0x65d022*/
    }
    else
    {
      v47 = 0; /*0x65d00a*/
    }
    *(_DWORD *)(a1 + 1684) = v47; /*0x65d028*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3808LL) ) /*0x65d031*/
    {
      v50 = (const char *)(*(_QWORD *)a2 + 15232LL); /*0x65d041*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15256LL) > 0xFu ) /*0x65d04d*/
        v50 = *(const char **)v50; /*0x65d04f*/
      v49 = atoi(v50); /*0x65d052*/
    }
    else
    {
      v49 = 0; /*0x65d03a*/
    }
    *(_DWORD *)(a1 + 1856) = v49; /*0x65d058*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3816LL) ) /*0x65d061*/
    {
      v52 = (const char *)(*(_QWORD *)a2 + 15264LL); /*0x65d071*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15288LL) > 0xFu ) /*0x65d07d*/
        v52 = *(const char **)v52; /*0x65d07f*/
      v51 = atoi(v52); /*0x65d082*/
    }
    else
    {
      v51 = 0; /*0x65d06a*/
    }
    *(_DWORD *)(a1 + 1860) = v51; /*0x65d088*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3824LL) ) /*0x65d091*/
    {
      v54 = (const char *)(*(_QWORD *)a2 + 15296LL); /*0x65d0a1*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15320LL) > 0xFu ) /*0x65d0ad*/
        v54 = *(const char **)v54; /*0x65d0af*/
      v53 = atoi(v54); /*0x65d0b2*/
    }
    else
    {
      v53 = 0; /*0x65d09a*/
    }
    *(_DWORD *)(a1 + 1864) = v53; /*0x65d0b8*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x65d0c1*/
    {
      v56 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x65d0d1*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65d0dd*/
        v56 = *(const char **)v56; /*0x65d0df*/
      v55 = atoi(v56); /*0x65d0e2*/
    }
    else
    {
      v55 = 0; /*0x65d0ca*/
    }
    *(_DWORD *)(a1 + 1480) = v55; /*0x65d0e8*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3832LL) ) /*0x65d0f1*/
    {
      v58 = (const char *)(*(_QWORD *)a2 + 15328LL); /*0x65d102*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15352LL) > 0xFu ) /*0x65d10e*/
        v58 = *(const char **)v58; /*0x65d110*/
      v59 = atof(v58); /*0x65d11c*/
      if ( isnan(v59) ) /*0x65d123*/
        v57 = 0.0; /*0x65d12d*/
      else
        v57 = fminf(1000000000.0, fmaxf(-1000000000.0, v59)); /*0x65d146*/
    }
    else
    {
      v57 = 0.0; /*0x65d0fa*/
    }
    *(float *)(a1 + 1868) = v57; /*0x65d14a*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3840LL) ) /*0x65d155*/
    {
      v61 = (const char *)(*(_QWORD *)a2 + 15360LL); /*0x65d165*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15384LL) > 0xFu ) /*0x65d171*/
        v61 = *(const char **)v61; /*0x65d173*/
      v60 = atoi(v61); /*0x65d176*/
    }
    else
    {
      v60 = 0; /*0x65d15e*/
    }
    *(_DWORD *)(a1 + 1876) = v60; /*0x65d17c*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3848LL) ) /*0x65d185*/
    {
      v63 = (const char *)(*(_QWORD *)a2 + 15392LL); /*0x65d195*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15416LL) > 0xFu ) /*0x65d1a1*/
        v63 = *(const char **)v63; /*0x65d1a3*/
      v62 = atoi(v63); /*0x65d1a6*/
    }
    else
    {
      v62 = 0; /*0x65d18e*/
    }
    *(_DWORD *)(a1 + 1880) = v62; /*0x65d1ac*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3856LL) ) /*0x65d1b5*/
    {
      v65 = (const char *)(*(_QWORD *)a2 + 15424LL); /*0x65d1c5*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15448LL) > 0xFu ) /*0x65d1d1*/
        v65 = *(const char **)v65; /*0x65d1d3*/
      v64 = atoi(v65); /*0x65d1d6*/
    }
    else
    {
      v64 = 0; /*0x65d1be*/
    }
    *(_DWORD *)(a1 + 1884) = v64; /*0x65d1dc*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 1036) != 3620 ) /*0x65cbbd*/
    {
      if ( *(_DWORD *)(a1 + 1036) == 3641 ) /*0x65cbc6*/
      {
        v7 = 0; /*0x65cbcf*/
        if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x65cbd1*/
        {
          v9 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x65cbe1*/
          if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x65cbed*/
            v9 = *(const char **)v9; /*0x65cbef*/
          v8 = atoi(v9); /*0x65cbf2*/
        }
        else
        {
          v8 = 0; /*0x65cbda*/
        }
        *(_DWORD *)(a1 + 1696) = v8; /*0x65cbf8*/
        if ( *(_QWORD *)(*(_QWORD *)a3 + 3928LL) ) /*0x65cc01*/
        {
          v11 = (const char *)(*(_QWORD *)a2 + 15712LL); /*0x65cc11*/
          if ( *(_QWORD *)(*(_QWORD *)a2 + 15736LL) > 0xFu ) /*0x65cc1d*/
            v11 = *(const char **)v11; /*0x65cc1f*/
          v10 = atoi(v11); /*0x65cc22*/
        }
        else
        {
          v10 = 0; /*0x65cc0a*/
        }
        *(_BYTE *)(a1 + 1908) = v10 != 0; /*0x65cc2d*/
        if ( *(_QWORD *)(*(_QWORD *)a3 + 3936LL) ) /*0x65cc36*/
        {
          v13 = (const char *)(*(_QWORD *)a2 + 15744LL); /*0x65cc46*/
          if ( *(_QWORD *)(*(_QWORD *)a2 + 15768LL) > 0xFu ) /*0x65cc52*/
            v13 = *(const char **)v13; /*0x65cc54*/
          v12 = atoi(v13); /*0x65cc57*/
        }
        else
        {
          v12 = 0; /*0x65cc3f*/
        }
        *(_BYTE *)(a1 + 1909) = v12 != 0; /*0x65cc62*/
        if ( *(_QWORD *)(*(_QWORD *)a3 + 3944LL) ) /*0x65cc6b*/
        {
          v15 = (const char *)(*(_QWORD *)a2 + 15776LL); /*0x65cc7b*/
          if ( *(_QWORD *)(*(_QWORD *)a2 + 15800LL) > 0xFu ) /*0x65cc87*/
            v15 = *(const char **)v15; /*0x65cc89*/
          v14 = atoi(v15); /*0x65cc8c*/
        }
        else
        {
          v14 = 0; /*0x65cc74*/
        }
        *(_BYTE *)(a1 + 1910) = v14 != 0; /*0x65cc97*/
        if ( *(_QWORD *)(*(_QWORD *)a3 + 3952LL) ) /*0x65cca0*/
        {
          v16 = (const char *)(*(_QWORD *)a2 + 15808LL); /*0x65ccac*/
          if ( *(_QWORD *)(*(_QWORD *)a2 + 15832LL) > 0xFu ) /*0x65ccb8*/
            v16 = *(const char **)v16; /*0x65ccba*/
          v7 = atoi(v16); /*0x65ccc3*/
        }
        *(_BYTE *)(a1 + 1911) = v7 != 0; /*0x65ccca*/
        LOBYTE(v6) = v7 != 0; /*0x65ccc7*/
      }
      return v6; /*0x65ccd0*/
    }
    v17 = 0; /*0x65ccd8*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x65ccdf*/
    {
      v19 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x65ccef*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x65ccfb*/
        v19 = *(const char **)v19; /*0x65ccfd*/
      v18 = atoi(v19); /*0x65cd00*/
    }
    else
    {
      v18 = 0; /*0x65cce8*/
    }
    *(_DWORD *)(a1 + 1696) = v18; /*0x65cd06*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 760LL) ) /*0x65cd0f*/
    {
      v21 = (const char *)(*(_QWORD *)a2 + 3040LL); /*0x65cd1f*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 3064LL) > 0xFu ) /*0x65cd2b*/
        v21 = *(const char **)v21; /*0x65cd2d*/
      v20 = atoi(v21); /*0x65cd30*/
    }
    else
    {
      v20 = 0; /*0x65cd18*/
    }
    *(_DWORD *)(a1 + 1684) = v20; /*0x65cd36*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x65cd3f*/
    {
      v23 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x65cd4f*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65cd5b*/
        v23 = *(const char **)v23; /*0x65cd5d*/
      v22 = atoi(v23); /*0x65cd60*/
    }
    else
    {
      v22 = 0; /*0x65cd48*/
    }
    *(_DWORD *)(a1 + 1480) = v22; /*0x65cd66*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x65cd6f*/
    {
      v25 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x65cd7f*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x65cd8b*/
        v25 = *(const char **)v25; /*0x65cd8d*/
      v24 = atoi(v25); /*0x65cd90*/
    }
    else
    {
      v24 = 0; /*0x65cd78*/
    }
    *(_DWORD *)(a1 + 1484) = v24; /*0x65cd96*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3808LL) ) /*0x65cd9f*/
    {
      v27 = (const char *)(*(_QWORD *)a2 + 15232LL); /*0x65cdaf*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15256LL) > 0xFu ) /*0x65cdbb*/
        v27 = *(const char **)v27; /*0x65cdbd*/
      v26 = atoi(v27); /*0x65cdc0*/
    }
    else
    {
      v26 = 0; /*0x65cda8*/
    }
    *(_DWORD *)(a1 + 1856) = v26; /*0x65cdc6*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3816LL) ) /*0x65cdcf*/
    {
      v29 = (const char *)(*(_QWORD *)a2 + 15264LL); /*0x65cddf*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15288LL) > 0xFu ) /*0x65cdeb*/
        v29 = *(const char **)v29; /*0x65cded*/
      v28 = atoi(v29); /*0x65cdf0*/
    }
    else
    {
      v28 = 0; /*0x65cdd8*/
    }
    *(_DWORD *)(a1 + 1860) = v28; /*0x65cdfe*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3832LL) ) /*0x65ce0d*/
    {
      v32 = (const char *)(*(_QWORD *)a2 + 15328LL); /*0x65ce21*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15352LL) > 0xFu ) /*0x65ce2d*/
        v32 = *(const char **)v32; /*0x65ce2f*/
      v33 = atof(v32); /*0x65ce3c*/
      v30 = 0.0; /*0x65ce4b*/
      if ( isnan(v33) ) /*0x65ce45*/
        v31 = 0.0; /*0x65ce52*/
      else
        v31 = fminf(1000000000.0, fmaxf(-1000000000.0, v33)); /*0x65ce67*/
    }
    else
    {
      v30 = 0.0; /*0x65ce16*/
      v31 = 0.0; /*0x65ce19*/
    }
    *(float *)(a1 + 1868) = v31; /*0x65ce6b*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3864LL) ) /*0x65ce76*/
    {
      v35 = (const char *)(*(_QWORD *)a2 + 15456LL); /*0x65ce87*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15480LL) > 0xFu ) /*0x65ce93*/
        v35 = *(const char **)v35; /*0x65ce95*/
      v36 = atof(v35); /*0x65cea2*/
      if ( isnan(v36) ) /*0x65ceab*/
        v34 = 0.0; /*0x65ceb5*/
      else
        v34 = fminf(1000000000.0, fmaxf(-1000000000.0, v36)); /*0x65ceca*/
    }
    else
    {
      v34 = 0.0; /*0x65ce7f*/
    }
    *(float *)(a1 + 1872) = v34; /*0x65cece*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3840LL) ) /*0x65ced9*/
    {
      v38 = (const char *)(*(_QWORD *)a2 + 15360LL); /*0x65cee9*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15384LL) > 0xFu ) /*0x65cef5*/
        v38 = *(const char **)v38; /*0x65cef7*/
      v37 = atoi(v38); /*0x65cefa*/
    }
    else
    {
      v37 = 0; /*0x65cee2*/
    }
    *(_DWORD *)(a1 + 1876) = v37; /*0x65cf00*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3848LL) ) /*0x65cf09*/
    {
      v40 = (const char *)(*(_QWORD *)a2 + 15392LL); /*0x65cf19*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15416LL) > 0xFu ) /*0x65cf25*/
        v40 = *(const char **)v40; /*0x65cf27*/
      v39 = atoi(v40); /*0x65cf2a*/
    }
    else
    {
      v39 = 0; /*0x65cf12*/
    }
    *(_DWORD *)(a1 + 1880) = v39; /*0x65cf30*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3856LL) ) /*0x65cf39*/
    {
      v42 = (const char *)(*(_QWORD *)a2 + 15424LL); /*0x65cf49*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15448LL) > 0xFu ) /*0x65cf55*/
        v42 = *(const char **)v42; /*0x65cf57*/
      v41 = atoi(v42); /*0x65cf5a*/
    }
    else
    {
      v41 = 0; /*0x65cf42*/
    }
    *(_DWORD *)(a1 + 1884) = v41; /*0x65cf60*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3872LL) ) /*0x65cf69*/
    {
      v43 = (const char *)(*(_QWORD *)a2 + 15488LL); /*0x65cf75*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15512LL) > 0xFu ) /*0x65cf81*/
        v43 = *(const char **)v43; /*0x65cf83*/
      v44 = atof(v43); /*0x65cf90*/
      if ( !isnan(v44) ) /*0x65cf99*/
        v30 = fminf(1000000000.0, fmaxf(-1000000000.0, v44)); /*0x65cfb0*/
    }
    *(float *)(a1 + 1888) = v30; /*0x65cfbf*/
  }
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3880LL) ) /*0x65d1e5*/
  {
    v67 = (const char *)(*(_QWORD *)a2 + 15520LL); /*0x65d1f5*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 15544LL) > 0xFu ) /*0x65d201*/
      v67 = *(const char **)v67; /*0x65d203*/
    v66 = atoi(v67); /*0x65d206*/
  }
  else
  {
    v66 = 0; /*0x65d1ee*/
  }
  *(_DWORD *)(a1 + 1892) = v66; /*0x65d20c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3888LL) ) /*0x65d215*/
  {
    v69 = (const char *)(*(_QWORD *)a2 + 15552LL); /*0x65d225*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 15576LL) > 0xFu ) /*0x65d231*/
      v69 = *(const char **)v69; /*0x65d233*/
    v68 = atoi(v69); /*0x65d236*/
  }
  else
  {
    v68 = 0; /*0x65d21e*/
  }
  *(_DWORD *)(a1 + 1896) = v68; /*0x65d23c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4624LL) ) /*0x65d245*/
  {
    v71 = (const char *)(*(_QWORD *)a2 + 18496LL); /*0x65d255*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18520LL) > 0xFu ) /*0x65d261*/
      v71 = *(const char **)v71; /*0x65d263*/
    v70 = atoi(v71); /*0x65d266*/
  }
  else
  {
    v70 = 0; /*0x65d24e*/
  }
  *(_DWORD *)(a1 + 1900) = v70; /*0x65d26c*/
  v6 = *(_QWORD *)a3; /*0x65d272*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4632LL) ) /*0x65d275*/
  {
    v72 = (const char *)(*(_QWORD *)a2 + 18528LL); /*0x65d281*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18552LL) > 0xFu ) /*0x65d28d*/
      v72 = *(const char **)v72; /*0x65d28f*/
    LODWORD(v6) = atoi(v72); /*0x65d292*/
    v17 = v6; /*0x65d298*/
  }
  *(_DWORD *)(a1 + 1904) = v17; /*0x65d29a*/
  return v6; /*0x65d2a0*/
}
