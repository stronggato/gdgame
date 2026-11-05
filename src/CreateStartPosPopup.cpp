#include <Geode/binding/CreateStartPosPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x4d2560
// Method: CreateStartPosPopup::~CreateStartPosPopup
cocos2d::CCNode *__fastcall CreateStartPosPopup__dtor_CreateStartPosPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &CreateStartPosPopup::`vftable'; /*0x4d2573*/
  *((_QWORD *)Block + 40) = &CreateStartPosPopup::`vftable'; /*0x4d2580*/
  *((_QWORD *)Block + 41) = &CreateStartPosPopup::`vftable'; /*0x4d258e*/
  *((_QWORD *)Block + 42) = &CreateStartPosPopup::`vftable'; /*0x4d259c*/
  *((_QWORD *)Block + 43) = &CreateStartPosPopup::`vftable'; /*0x4d25aa*/
  *((_QWORD *)Block + 44) = &CreateStartPosPopup::`vftable'; /*0x4d25b8*/
  *((_QWORD *)Block + 51) = &CreateStartPosPopup::`vftable'; /*0x4d25c6*/
  *((_QWORD *)Block + 54) = &CreateStartPosPopup::`vftable'; /*0x4d25d4*/
  *((_QWORD *)Block + 68) = &CreateStartPosPopup::`vftable'; /*0x4d25e2*/
  *((_QWORD *)Block + 83) = &CreateStartPosPopup::`vftable'; /*0x4d25f0*/
  *((_QWORD *)Block + 84) = &CreateStartPosPopup::`vftable'; /*0x4d25fe*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x4d2605*/
  if ( (a2 & 1) != 0 ) /*0x4d260d*/
    j_j_free(Block); /*0x4d2617*/
  return Block; /*0x4d261c*/
}

// [3/4] Address: 0x4d82b0
// Method: CreateStartPosPopup::updateInputNode
struct cocos2d::CCObject *__fastcall CreateStartPosPopup_updateInputNode(__int64 a1, int a2, float a3)
{
  struct cocos2d::CCObject *result; // rax

  if ( a2 != -1 ) /*0x4d82b3*/
    return SetupTriggerPopup_updateInputNode(a1, a2, a3); /*0x4d82b3*/
  return result; /*0x4d82b9*/
}

// [4/4] Address: 0x4d8970
// Method: CreateStartPosPopup::onClose
__int64 __fastcall CreateStartPosPopup_onClose(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 1000); /*0x4d8980*/
  if ( v2 ) /*0x4d898a*/
    (**v2)(v2, a1); /*0x4d8992*/
  return SetupTriggerPopup_onClose(a1); /*0x4d899a*/
}

// Address: 0x4d7d30
// Method: CreateStartPosPopup::init
// Hidden C++ exception states: #wind=4
char __fastcall CreateStartPosPopup_init(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  cocos2d::CCArray *v10; // rdi
  cocos2d::CCObject *v11; // rbx
  struct cocos2d::CCObject *v12; // rbx
  cocos2d::CCObject *v13; // rbx
  struct cocos2d::CCObject *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  float v23; // [rsp+50h] [rbp-B0h] BYREF
  float v24; // [rsp+54h] [rbp-ACh]
  void *v25; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int128 *v29; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v34[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v35[8]; // [rsp+D8h] [rbp-28h] BYREF
  int v36; // [rsp+E0h] [rbp-20h]
  char v37; // [rsp+E4h] [rbp-1Ch]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  char v40; // [rsp+F0h] [rbp-10h]
  char v41; // [rsp+10Dh] [rbp+Dh]
  int v42; // [rsp+110h] [rbp+10h]
  _BYTE v43[32]; // [rsp+118h] [rbp+18h] BYREF
  int v44; // [rsp+138h] [rbp+38h]
  _BYTE v45[32]; // [rsp+140h] [rbp+40h] BYREF

  result = sub_6060E0(a1, 0, 0, a4, 1127481344, 1, 0);
  if ( result )
  {
    *(_BYTE *)(a1 + 744) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1);
    v27 = 15;
    v28 = 15;
    strcpy((char *)&v26, "Create StartPos");
    sub_606E80(a1, &v26);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, &v23);
    sub_9ACF0(&v33);
    v33 = -1;
    sub_3F5A0(v34, "Name:", 5u);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, v23 * 0.5, (float)(v24 * 0.5) + 15.0);
    cocos2d::CCPoint::operator=(v35, v8);
    v36 = 1061997773;
    v37 = 1;
    v40 = 0;
    v41 = 1;
    v44 = 1060320051;
    v38 = 4;
    v39 = 20;
    v42 = 1127481344;
    sub_3F5A0(v45, "StartPos Name", 0xDu);
    sub_608A30(a1, &v33);
    v10 = (cocos2d::CCArray *)cocos2d::CCArray::create(v9);
    v25 = operator new(0x2C8u);
    v11 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v25);
    if ( v11 )
    {
      if ( ButtonSprite_init(
             (__int64)v11,
             (__int64)"Cancel",
             80,
             0,
             1058642330,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_04.png",
             1105199104) )
      {
        cocos2d::CCObject::autorelease(v11);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1);
        LODWORD(v11) = 0;
      }
    }
    v12 = CCMenuItemSpriteExtra_create((int)v11, 0, a1, (__int64)sub_9C4B8);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
      *(_QWORD *)(a1 + 552),
      v12);
    cocos2d::CCArray::addObject(v10, v12);
    v25 = operator new(0x2C8u);
    v13 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v25);
    if ( v13 )
    {
      if ( ButtonSprite_init(
             (__int64)v13,
             (__int64)&dword_71EF64,
             80,
             0,
             1058642330,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_01.png",
             1105199104) )
      {
        cocos2d::CCObject::autorelease(v13);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1);
        LODWORD(v13) = 0;
      }
    }
    v14 = CCMenuItemSpriteExtra_create((int)v13, 0, a1, (__int64)sub_4D82C0);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
      *(_QWORD *)(a1 + 552),
      v14);
    cocos2d::CCArray::addObject(v10, v14);
    v15 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v25,
      v23 * 0.5,
      (float)((float)(v24 * 0.5) - (float)(*(float *)(a1 + 736) * 0.5)) + 30.0);
    cocos2d::CCNode::convertToNodeSpace(v15, &v29, v16);
    GameToolbox_alignItemsHorisontally((__int64)v10, 15.0, v17, 0);
    v29 = &v26;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    *(_QWORD *)&v26 = sub_3C460(128);
    v27 = 112;
    v28 = 127;
    strcpy(
      (char *)v26,
      "Creates a start position here with the current settings.\n"
      "<cy>Dual mode and camera settings may not be exact.</c>");
    v30 = 0;
    v31 = 0;
    v32 = 0;
    *(_QWORD *)&v30 = sub_3C460(32);
    v31 = 16;
    v32 = 31;
    strcpy((char *)v30, "Create Start Pos");
    v18 = InfoAlertButton_create((__int64)&v30, (__int64)&v26);
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v18);
    v19 = *(_QWORD *)v18;
    v20 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v29,
      (float)((float)(*(float *)(a1 + 732) * 0.5) + (float)(v23 * 0.5)) - 15.0,
      (float)((float)(v24 * 0.5) + (float)(*(float *)(a1 + 736) * 0.5)) - 15.0);
    cocos2d::CCNode::convertToNodeSpace(v20, &v25, v21);
    (*(void (__fastcall **)(char *, __int64))(v19 + 184))(v18, v22);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1136LL))(a1);
    *(_BYTE *)(a1 + 744) = 0;
    sub_3C310(v45);
    sub_3C310(v43);
    sub_3C310(v34);
    return 1;
  }
  return result;
}
