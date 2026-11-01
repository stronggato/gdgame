#include <Geode/binding/ItemInfoPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0xb1650
// Method: ItemInfoPopup::onCredit
__int64 __fastcall ItemInfoPopup_onCredit(__int64 a1)
{
  char *v1; // rax

  v1 = ProfilePage_create(*(_DWORD *)(a1 + 840), 0); /*0xb165c*/
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 1064LL))(v1); /*0xb166e*/
}

// [2/3] Address: 0x377b00
// Method: ItemInfoPopup::~ItemInfoPopup
_QWORD *__fastcall ItemInfoPopup__dtor_ItemInfoPopup(_QWORD *Block, char a2)
{
  *Block = &ItemInfoPopup::`vftable'; /*0x377b13*/
  Block[40] = &ItemInfoPopup::`vftable'; /*0x377b20*/
  Block[41] = &ItemInfoPopup::`vftable'; /*0x377b2e*/
  Block[42] = &ItemInfoPopup::`vftable'; /*0x377b3c*/
  Block[43] = &ItemInfoPopup::`vftable'; /*0x377b4a*/
  Block[44] = &ItemInfoPopup::`vftable'; /*0x377b58*/
  Block[51] = &ItemInfoPopup::`vftable'; /*0x377b66*/
  Block[54] = &ItemInfoPopup::`vftable'; /*0x377b74*/
  Block[68] = &ItemInfoPopup::`vftable'; /*0x377b82*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x377b89*/
  if ( (a2 & 1) != 0 ) /*0x377b91*/
    j_j_free(Block); /*0x377b9b*/
  return Block; /*0x377ba0*/
}

// [3/3] Address: 0x382960
// Method: ItemInfoPopup::nameForUnlockType
__int64 __fastcall ItemInfoPopup_nameForUnlockType(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax

  switch ( a3 ) /*0x38298e*/
  {
    case 1: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382996*/
      *(_QWORD *)(a1 + 16) = 4; /*0x382999*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3829a1*/
      strcpy((char *)a1, "Cube"); /*0x3829a9*/
      result = a1; /*0x382993*/
      break; /*0x3829b8*/
    case 2: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x3829bc*/
      *(_QWORD *)(a1 + 16) = 10; /*0x3829bf*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3829c7*/
      strcpy((char *)a1, "Main Color"); /*0x3829d7*/
      result = a1; /*0x3829e6*/
      break; /*0x3829f2*/
    case 3: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x3829f6*/
      *(_QWORD *)(a1 + 16) = 15; /*0x3829f9*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382a01*/
      strcpy((char *)a1, "Secondary Color"); /*0x382a11*/
      result = a1; /*0x382a33*/
      break; /*0x382a3f*/
    case 4: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382a46*/
      *(_QWORD *)(a1 + 16) = 4; /*0x382a49*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382a51*/
      strcpy((char *)a1, "Ship"); /*0x382a59*/
      result = a1; /*0x382a43*/
      break; /*0x382a68*/
    case 5: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382a6f*/
      *(_QWORD *)(a1 + 16) = 4; /*0x382a72*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382a7a*/
      strcpy((char *)a1, "Ball"); /*0x382a82*/
      result = a1; /*0x382a6c*/
      break; /*0x382a91*/
    case 6: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382a95*/
      *(_QWORD *)(a1 + 16) = 3; /*0x382a98*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382aa0*/
      *(_WORD *)a1 = 18005; /*0x382aae*/
      *(_BYTE *)(a1 + 2) = 79; /*0x382ab8*/
      *(_BYTE *)(a1 + 3) = 0; /*0x382abe*/
      result = a1; /*0x382abb*/
      break; /*0x382ac7*/
    case 7: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382ace*/
      *(_QWORD *)(a1 + 16) = 4; /*0x382ad1*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382ad9*/
      strcpy((char *)a1, "Wave"); /*0x382ae1*/
      result = a1; /*0x382acb*/
      break; /*0x382af0*/
    case 8: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382af4*/
      *(_QWORD *)(a1 + 16) = 5; /*0x382af7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382aff*/
      strcpy((char *)a1, "Robot"); /*0x382b0d*/
      result = a1; /*0x382b19*/
      break; /*0x382b25*/
    case 9: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382b29*/
      *(_QWORD *)(a1 + 16) = 6; /*0x382b2c*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382b34*/
      strcpy((char *)a1, "Spider"); /*0x382b42*/
      result = a1; /*0x382b4f*/
      break; /*0x382b5b*/
    case 10: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382b5f*/
      *(_QWORD *)(a1 + 16) = 5; /*0x382b62*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382b6a*/
      strcpy((char *)a1, "Trail"); /*0x382b78*/
      result = a1; /*0x382b84*/
      break; /*0x382b90*/
    case 11: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382b94*/
      *(_QWORD *)(a1 + 16) = 12; /*0x382b97*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382b9f*/
      strcpy((char *)a1, "Death Effect"); /*0x382baf*/
      result = a1; /*0x382bbc*/
      break; /*0x382bc8*/
    case 12: /*0x38298e*/
      switch ( a2 ) /*0x382be2*/
      {
        case 4: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382be7*/
          *(_QWORD *)(a1 + 16) = 13; /*0x382bea*/
          *(_QWORD *)(a1 + 24) = 15; /*0x382bf2*/
          strcpy((char *)a1, "Master Emblem"); /*0x382c02*/
          result = a1; /*0x382c19*/
          break; /*0x382c25*/
        case 6: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382cb3*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382cb6*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382cba*/
          v6 = (char *)sub_3C460(32); /*0x382cbe*/
          *(_QWORD *)a1 = v6; /*0x382cc3*/
          *(_QWORD *)(a1 + 16) = 16; /*0x382cc6*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382cce*/
          strcpy(v6, "The Path of Fire"); /*0x382cdd*/
          result = a1; /*0x382ce4*/
          break; /*0x382cec*/
        case 7: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382cf0*/
          *(_QWORD *)(a1 + 16) = 15; /*0x382cf3*/
          *(_QWORD *)(a1 + 24) = 15; /*0x382cfb*/
          strcpy((char *)a1, "The Path of Ice"); /*0x382d0b*/
          result = a1; /*0x382d2d*/
          break; /*0x382d39*/
        case 8: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382d42*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382d45*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382d49*/
          v7 = (char *)sub_3C460(32); /*0x382d4d*/
          *(_QWORD *)a1 = v7; /*0x382d52*/
          *(_QWORD *)(a1 + 16) = 18; /*0x382d55*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382d5d*/
          strcpy(v7, "The Path of Poison"); /*0x382d6c*/
          result = a1; /*0x382d7e*/
          break; /*0x382d86*/
        case 9: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382d8f*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382d92*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382d96*/
          v8 = (char *)sub_3C460(32); /*0x382d9a*/
          *(_QWORD *)a1 = v8; /*0x382d9f*/
          *(_QWORD *)(a1 + 16) = 18; /*0x382da2*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382daa*/
          strcpy(v8, "The Path of Shadow"); /*0x382db9*/
          result = a1; /*0x382dcb*/
          break; /*0x382dd3*/
        case 10: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382ddc*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382ddf*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382de3*/
          v9 = (char *)sub_3C460(32); /*0x382de7*/
          *(_QWORD *)a1 = v9; /*0x382dec*/
          *(_QWORD *)(a1 + 16) = 16; /*0x382def*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382df7*/
          strcpy(v9, "The Path of Lava"); /*0x382e06*/
          result = a1; /*0x382e0d*/
          break; /*0x382e15*/
        case 11: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382e1e*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382e21*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382e25*/
          v10 = (char *)sub_3C460(32); /*0x382e29*/
          *(_QWORD *)a1 = v10; /*0x382e2e*/
          *(_QWORD *)(a1 + 16) = 17; /*0x382e31*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382e39*/
          strcpy(v10, "The Path of Earth"); /*0x382e48*/
          result = a1; /*0x382e59*/
          break; /*0x382e61*/
        case 12: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382e6a*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382e6d*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382e71*/
          v11 = (char *)sub_3C460(32); /*0x382e75*/
          *(_QWORD *)a1 = v11; /*0x382e7a*/
          *(_QWORD *)(a1 + 16) = 17; /*0x382e7d*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382e85*/
          strcpy(v11, "The Path of Blood"); /*0x382e94*/
          result = a1; /*0x382ea5*/
          break; /*0x382ead*/
        case 13: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382eb6*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382eb9*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382ebd*/
          v12 = (char *)sub_3C460(32); /*0x382ec1*/
          *(_QWORD *)a1 = v12; /*0x382ec6*/
          *(_QWORD *)(a1 + 16) = 17; /*0x382ec9*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382ed1*/
          strcpy(v12, "The Path of Metal"); /*0x382ee0*/
          result = a1; /*0x382ef1*/
          break; /*0x382ef9*/
        case 14: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382f02*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382f05*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382f09*/
          v13 = (char *)sub_3C460(32); /*0x382f0d*/
          *(_QWORD *)a1 = v13; /*0x382f12*/
          *(_QWORD *)(a1 + 16) = 17; /*0x382f15*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382f1d*/
          strcpy(v13, "The Path of Light"); /*0x382f2c*/
          result = a1; /*0x382f3d*/
          break; /*0x382f45*/
        case 15: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382f4e*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382f51*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382f55*/
          v14 = (char *)sub_3C460(32); /*0x382f59*/
          *(_QWORD *)a1 = v14; /*0x382f5e*/
          *(_QWORD *)(a1 + 16) = 17; /*0x382f61*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382f69*/
          strcpy(v14, "The Path of Souls"); /*0x382f78*/
          result = a1; /*0x382f89*/
          break; /*0x382f91*/
        case 16: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382c2e*/
          *(_QWORD *)(a1 + 16) = 0; /*0x382c31*/
          *(_QWORD *)(a1 + 24) = 0; /*0x382c35*/
          v5 = (char *)sub_3C460(32); /*0x382c39*/
          *(_QWORD *)a1 = v5; /*0x382c3e*/
          *(_QWORD *)(a1 + 16) = 16; /*0x382c41*/
          *(_QWORD *)(a1 + 24) = 31; /*0x382c49*/
          strcpy(v5, "Music Customizer"); /*0x382c58*/
          result = a1; /*0x382c5f*/
          break; /*0x382c67*/
        case 17: /*0x382be2*/
          *(_OWORD *)a1 = 0; /*0x382c6b*/
          *(_QWORD *)(a1 + 16) = 14; /*0x382c6e*/
          *(_QWORD *)(a1 + 24) = 15; /*0x382c76*/
          strcpy((char *)a1, "Music Unlocker"); /*0x382c86*/
          result = a1; /*0x382c9e*/
          break; /*0x382caa*/
        default:
          *(_OWORD *)a1 = 0; /*0x382f98*/
          *(_QWORD *)(a1 + 16) = 4; /*0x382f9b*/
          *(_QWORD *)(a1 + 24) = 15; /*0x382fa3*/
          strcpy((char *)a1, "Item"); /*0x382fab*/
          result = a1; /*0x382f95*/
          break; /*0x382fba*/
      }
      break; /*0x382fba*/
    case 13: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382fbe*/
      *(_QWORD *)(a1 + 16) = 5; /*0x382fc1*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382fc9*/
      strcpy((char *)a1, "Swing"); /*0x382fd7*/
      result = a1; /*0x382fe3*/
      break; /*0x382fef*/
    case 14: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x382ff3*/
      *(_QWORD *)(a1 + 16) = 7; /*0x382ff6*/
      *(_QWORD *)(a1 + 24) = 15; /*0x382ffe*/
      strcpy((char *)a1, "Jetpack"); /*0x38300d*/
      result = a1; /*0x383024*/
      break; /*0x383030*/
    case 15: /*0x38298e*/
      *(_OWORD *)a1 = 0; /*0x383034*/
      *(_QWORD *)(a1 + 16) = 9; /*0x383037*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38303f*/
      strcpy((char *)a1, "Ship Fire"); /*0x38304f*/
      result = a1; /*0x38305d*/
      break; /*0x383069*/
    default:
      *(_OWORD *)a1 = 0; /*0x383070*/
      *(_QWORD *)(a1 + 16) = 2; /*0x383073*/
      *(_QWORD *)(a1 + 24) = 15; /*0x38307b*/
      strcpy((char *)a1, "NA"); /*0x383083*/
      result = a1; /*0x38306d*/
      break; /*0x38306d*/
  }
  return result; /*0x3829b3*/
}
