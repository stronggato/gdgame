#include <Geode/binding/CharacterColorPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/8] Address: 0xa0400
// Method: CharacterColorPage::toggleShip
// Hidden C++ exception states: #wind=2
__int64 __fastcall CharacterColorPage_toggleShip(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rax
  void *v9; // [rsp+48h] [rbp+10h]
  void *v10; // [rsp+48h] [rbp+10h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2); /*0xa0423*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0xa043e*/
  {
    v4 = qword_905FD0; /*0xa0440*/
    if ( !qword_905FD0 ) /*0xa044a*/
    {
      v9 = operator new(0x6E8u); /*0xa0456*/
      qword_905FD0 = sub_2723A0(v9); /*0xa0464*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa0475*/
      v4 = qword_905FD0; /*0xa0477*/
    }
    v5 = (unsigned int)(*(_DWORD *)(v4 + 916) - *(_DWORD *)(v4 + 920)); /*0xa0484*/
    v6 = 8; /*0xa048a*/
  }
  else
  {
    v7 = qword_905FD0; /*0xa0499*/
    if ( !qword_905FD0 ) /*0xa04a3*/
    {
      v10 = operator new(0x6E8u); /*0xa04af*/
      qword_905FD0 = sub_2723A0(v10); /*0xa04bd*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa04ce*/
      v7 = qword_905FD0; /*0xa04d0*/
    }
    v5 = (unsigned int)(*(_DWORD *)(v7 + 760) - *(_DWORD *)(v7 + 764)); /*0xa04dd*/
    v6 = 1; /*0xa04e3*/
  }
  SimplePlayer_updatePlayerFrame(v3, v5, v6); /*0xa04ee*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 160LL))(v3); /*0xa04fc*/
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, v6);
}

// [3/8] Address: 0xa05a0
// Method: CharacterColorPage::createColorMenu
// Hidden C++ exception states: #wind=3
void __fastcall CharacterColorPage_createColorMenu(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  cocos2d::CCObject *v4; // rax
  __int64 v5; // rdi
  struct cocos2d::CCObject *v6; // rbx
  cocos2d::CCObject *v7; // rax
  int i; // esi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // r13
  const char *v13; // rcx
  struct cocos2d::CCSprite *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  cocos2d::CCObject *v17; // rdi
  float v18; // xmm1_4
  float v19; // xmm2_4
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  void (__fastcall **v24)(__int64, char *); // rbx
  char *v25; // rax
  void *v26; // rcx
  int v27; // [rsp+30h] [rbp-D0h]
  float v28[2]; // [rsp+38h] [rbp-C8h] BYREF
  float v29[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v30[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v31[12]; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE v32[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v34[8]; // [rsp+68h] [rbp-98h] BYREF
  void *v35; // [rsp+70h] [rbp-90h]
  _BYTE v36[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v37[8]; // [rsp+80h] [rbp-80h] BYREF
  void *v38; // [rsp+88h] [rbp-78h]
  __int128 v39; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-58h]

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0xa0614*/
  cocos2d::CCDirector::getWinSize(v2, v28); /*0xa0622*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, v28[0] * 0.5, (float)(v28[1] * 0.5) - 59.0); /*0xa0654*/
  v4 = (cocos2d::CCObject *)cocos2d::CCArray::create(v3); /*0xa065a*/
  *(_QWORD *)(a1 + 704) = v4; /*0xa0660*/
  cocos2d::CCObject::retain(v4); /*0xa066a*/
  v5 = 3; /*0xa0670*/
  do /*0xa06d3*/
  {
    v6 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_select_001.png"); /*0xa068d*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v6 + 160LL))(v6); /*0xa06a0*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0xa06bc*/
      *(_QWORD *)(a1 + 584),
      v6,
      11);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 704), v6); /*0xa06c9*/
    --v5; /*0xa06cf*/
  }
  while ( v5 ); /*0xa06d3*/
  v7 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0xa06d5*/
  *(_QWORD *)(a1 + 696) = v7; /*0xa06db*/
  cocos2d::CCObject::retain(v7); /*0xa06e5*/
  for ( i = 0; i < 144; ++i ) /*0xa06eb*/
  {
    v27 = (int)floorf((float)(i / 18)); /*0xa076c*/
    v10 = CharacterColorPage_colorForIndex(v9, (unsigned int)i); /*0xa0772*/
    v11 = v10; /*0xa0777*/
    if ( v10 < 0 ) /*0xa077c*/
      continue; /*0xa077c*/
    v12 = ColorChannelSprite_create(); /*0xa0787*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 696), (struct cocos2d::CCObject *)v12, v11); /*0xa0797*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 160LL))(v12); /*0xa07af*/
    v39 = 0; /*0xa07b4*/
    v40 = 0; /*0xa07b8*/
    v41 = 0; /*0xa07c0*/
    *(_QWORD *)&v39 = sub_3C460(32); /*0xa07d2*/
    v40 = 19; /*0xa07d6*/
    v41 = 31; /*0xa07de*/
    strcpy((char *)v39, "GJ_lockGray_001.png"); /*0xa07ed*/
    v13 = (const char *)&v39; /*0xa0809*/
    if ( v41 > 0xF ) /*0xa0812*/
      v13 = (const char *)v39; /*0xa0812*/
    v14 = cocos2d::CCSprite::createWithSpriteFrameName(v13); /*0xa081d*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 160LL))(v14); /*0xa0831*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v14 + 64LL))(v14, 100); /*0xa0842*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 464LL))(v12, v14); /*0xa0856*/
    v15 = *(_QWORD *)v14; /*0xa0859*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v34, *(float *)(v12 + 432) * 0.5, *(float *)(v12 + 436) * 0.5); /*0xa087d*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v15 + 184))(v14, v16); /*0xa0889*/
    v35 = operator new(0x208u); /*0xa0899*/
    v17 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v35); /*0xa08a6*/
    if ( !v17 ) /*0xa08ac*/
      goto LABEL_11; /*0xa08ac*/
    if ( !(unsigned __int8)sub_47940((_DWORD)v17, v12, 0, a1, (__int64)sub_A1510) ) /*0xa08d0*/
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1); /*0xa08e2*/
LABEL_11:
      v17 = 0; /*0xa08e5*/
      goto LABEL_12; /*0xa08e5*/
    }
    cocos2d::CCObject::autorelease(v17); /*0xa08d2*/
LABEL_12:
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v17 + 64LL))(v17, (unsigned int)v11); /*0xa08e7*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v17); /*0xa0900*/
    v18 = 0.0; /*0xa0906*/
    if ( (unsigned int)(i - 54) > 0x51 ) /*0xa0912*/
      v19 = 0.0; /*0xa0919*/
    else
      v19 = -0.80000001; /*0xa0914*/
    if ( i >= 136 ) /*0xa0922*/
      v19 = 0.40000001; /*0xa0924*/
    if ( (unsigned int)(i - 4) <= 0x8A ) /*0xa092d*/
    {
      switch ( *(_BYTE *)(i - 4 - 4096LL + 662304) ) /*0xa094e*/
      {
        case 0: /*0xa094e*/
          v18 = 1.0; /*0xa0950*/
          break; /*0xa0950*/
        case 1: /*0xa094e*/
          break;
      }
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v31, v18, v19); /*0xa0958*/
    cocos2d::CCPoint::operator*(v31, v29); /*0xa0971*/
    cocos2d::CCPoint::CCPoint( /*0xa09b5*/
      (cocos2d::CCPoint *)v36,
      (float)((float)((float)((float)(i % 18) * 24.0) - 204.0) + v29[0]) + 6.0,
      (float)(96.0 - (float)((float)v27 * 24.0)) + v29[1]);
    cocos2d::CCPoint::operator+(v32, v33, v20); /*0xa09c8*/
    v21 = *(_QWORD *)v17; /*0xa09ce*/
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v37, v33); /*0xa09e1*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v21 + 184))(v17, v22); /*0xa09ed*/
    v23 = qword_905FD0; /*0xa09f3*/
    if ( !qword_905FD0 ) /*0xa09fd*/
    {
      v38 = operator new(0x6E8u); /*0xa0a09*/
      qword_905FD0 = sub_2723A0(v38); /*0xa0a16*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa0a27*/
      v23 = qword_905FD0; /*0xa0a29*/
    }
    v24 = *(void (__fastcall ***)(__int64, char *))(v12 + 320); /*0xa0a30*/
    v25 = GameManager_colorForIdx(v23, v30, v11); /*0xa0a3f*/
    (*v24)(v12 + 320, v25); /*0xa0a4e*/
    if ( v41 > 0xF ) /*0xa0a59*/
    {
      v26 = (void *)v39; /*0xa0a5e*/
      if ( v41 + 1 >= 0x1000 ) /*0xa0a6c*/
      {
        v26 = *(void **)(v39 - 8); /*0xa0a72*/
        if ( (unsigned __int64)(v39 - (_QWORD)v26 - 8) > 0x1F ) /*0xa0a81*/
          invoke_watson(0, 0, 0, 0, 0); /*0xa0b0e*/
      }
      j_j_free(v26); /*0xa0a83*/
    }
  }
}

// [4/8] Address: 0xa0bb0
// Method: CharacterColorPage::activeColorForMode
// Hidden C++ exception states: #wind=3
__int64 __fastcall CharacterColorPage_activeColorForMode(__int64 a1, int a2)
{
  int v2; // edx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h]
  void *v8; // [rsp+30h] [rbp+8h]
  void *v9; // [rsp+30h] [rbp+8h]

  if ( a2 ) /*0xa0bbb*/
  {
    v2 = a2 - 1; /*0xa0bc1*/
    if ( v2 ) /*0xa0bc4*/
    {
      if ( v2 == 1 ) /*0xa0bc9*/
      {
        v4 = qword_905FD0; /*0xa0bd2*/
        if ( !qword_905FD0 ) /*0xa0bdc*/
        {
          v7 = operator new(0x6E8u); /*0xa0be8*/
          qword_905FD0 = sub_2723A0(v7); /*0xa0bf6*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa0c07*/
          v4 = qword_905FD0; /*0xa0c09*/
        }
        return (unsigned int)(*(_DWORD *)(v4 + 868) - *(_DWORD *)(v4 + 872)); /*0xa0c16*/
      }
      else
      {
        return 0; /*0xa0bcb*/
      }
    }
    else
    {
      v5 = qword_905FD0; /*0xa0c21*/
      if ( !qword_905FD0 ) /*0xa0c2b*/
      {
        v8 = operator new(0x6E8u); /*0xa0c37*/
        qword_905FD0 = sub_2723A0(v8); /*0xa0c45*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa0c56*/
        v5 = qword_905FD0; /*0xa0c58*/
      }
      return (unsigned int)(*(_DWORD *)(v5 + 856) - *(_DWORD *)(v5 + 860)); /*0xa0c65*/
    }
  }
  else
  {
    v6 = qword_905FD0; /*0xa0c70*/
    if ( !qword_905FD0 ) /*0xa0c7a*/
    {
      v9 = operator new(0x6E8u); /*0xa0c86*/
      qword_905FD0 = sub_2723A0(v9); /*0xa0c94*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa0ca5*/
      v6 = qword_905FD0; /*0xa0ca7*/
    }
    return (unsigned int)(*(_DWORD *)(v6 + 844) - *(_DWORD *)(v6 + 848)); /*0xa0cb4*/
  }
}

// [5/8] Address: 0xa1820
// Method: CharacterColorPage::colorForIndex
__int64 __fastcall CharacterColorPage_colorForIndex(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 ) /*0xa1840*/
  {
    case 0: /*0xa1840*/
      result = 51; /*0xa1842*/
      break; /*0xa1847*/
    case 1: /*0xa1840*/
      result = 19; /*0xa1848*/
      break; /*0xa184d*/
    case 2: /*0xa1840*/
      result = 48; /*0xa184e*/
      break; /*0xa1853*/
    case 3: /*0xa1840*/
      result = 9; /*0xa1854*/
      break; /*0xa1859*/
    case 4: /*0xa1840*/
      result = 62; /*0xa188a*/
      break; /*0xa188f*/
    case 5: /*0xa1840*/
      result = 63; /*0xa1890*/
      break; /*0xa1895*/
    case 6: /*0xa1840*/
      result = 10; /*0xa1896*/
      break; /*0xa189b*/
    case 7: /*0xa1840*/
      result = 29; /*0xa189c*/
      break; /*0xa18a1*/
    case 9: /*0xa1840*/
      result = 70; /*0xa18d2*/
      break; /*0xa18d7*/
    case 10: /*0xa1840*/
      result = 42; /*0xa18d8*/
      break; /*0xa18dd*/
    case 11: /*0xa1840*/
      result = 11; /*0xa18de*/
      break; /*0xa18e3*/
    case 12: /*0xa1840*/
      result = 27; /*0xa18e4*/
      break; /*0xa18e9*/
    case 13: /*0xa1840*/
      result = 72; /*0xa191a*/
      break; /*0xa191f*/
    case 14: /*0xa1840*/
      result = 73; /*0xa1920*/
      break; /*0xa1925*/
    case 15: /*0xa1840*/
      result = 0; /*0xa1926*/
      break; /*0xa1928*/
    case 16: /*0xa1840*/
      result = 1; /*0xa1929*/
      break; /*0xa192e*/
    case 18: /*0xa1840*/
      result = 37; /*0xa185a*/
      break; /*0xa185f*/
    case 19: /*0xa1840*/
      result = 53; /*0xa1860*/
      break; /*0xa1865*/
    case 20: /*0xa1840*/
      result = 54; /*0xa1866*/
      break; /*0xa186b*/
    case 21: /*0xa1840*/
      result = 55; /*0xa186c*/
      break; /*0xa1871*/
    case 22: /*0xa1840*/
      result = 26; /*0xa18a2*/
      break; /*0xa18a7*/
    case 23: /*0xa1840*/
      result = 59; /*0xa18a8*/
      break; /*0xa18ad*/
    case 24: /*0xa1840*/
      result = 60; /*0xa18ae*/
      break; /*0xa18b3*/
    case 25: /*0xa1840*/
      result = 61; /*0xa18b4*/
      break; /*0xa18b9*/
    case 27: /*0xa1840*/
      result = 71; /*0xa18ea*/
      break; /*0xa18ef*/
    case 28: /*0xa1840*/
      result = 14; /*0xa18f0*/
      break; /*0xa18f5*/
    case 29: /*0xa1840*/
      result = 31; /*0xa18f6*/
      break; /*0xa18fb*/
    case 30: /*0xa1840*/
      result = 45; /*0xa18fc*/
      break; /*0xa1901*/
    case 31: /*0xa1840*/
      result = 105; /*0xa192f*/
      break; /*0xa1934*/
    case 32: /*0xa1840*/
      result = 28; /*0xa1935*/
      break; /*0xa193a*/
    case 33: /*0xa1840*/
      result = 32; /*0xa193b*/
      break; /*0xa1940*/
    case 34: /*0xa1840*/
      result = 20; /*0xa1941*/
      break; /*0xa1946*/
    case 36: /*0xa1840*/
      result = 25; /*0xa1872*/
      break; /*0xa1877*/
    case 37: /*0xa1840*/
      result = 56; /*0xa1878*/
      break; /*0xa187d*/
    case 38: /*0xa1840*/
      result = 57; /*0xa187e*/
      break; /*0xa1883*/
    case 39: /*0xa1840*/
      result = 58; /*0xa1884*/
      break; /*0xa1889*/
    case 40: /*0xa1840*/
      result = 30; /*0xa18ba*/
      break; /*0xa18bf*/
    case 41: /*0xa1840*/
      result = 64; /*0xa18c0*/
      break; /*0xa18c5*/
    case 42: /*0xa1840*/
      result = 65; /*0xa18c6*/
      break; /*0xa18cb*/
    case 43: /*0xa1840*/
      result = 66; /*0xa18cc*/
      break; /*0xa18d1*/
    case 45: /*0xa1840*/
      result = 46; /*0xa1902*/
      break; /*0xa1907*/
    case 46: /*0xa1840*/
      result = 67; /*0xa1908*/
      break; /*0xa190d*/
    case 47: /*0xa1840*/
      result = 68; /*0xa190e*/
      break; /*0xa1913*/
    case 48: /*0xa1840*/
      result = 69; /*0xa1914*/
      break; /*0xa1919*/
    case 49: /*0xa1840*/
      result = 2; /*0xa1947*/
      break; /*0xa194c*/
    case 50: /*0xa1840*/
      result = 38; /*0xa194d*/
      break; /*0xa1952*/
    case 51: /*0xa1840*/
      result = 79; /*0xa1953*/
      break; /*0xa1958*/
    case 52: /*0xa1840*/
      result = 80; /*0xa1959*/
      break; /*0xa195e*/
    case 54: /*0xa1840*/
      result = 74; /*0xa195f*/
      break; /*0xa1964*/
    case 55: /*0xa1840*/
      result = 75; /*0xa1965*/
      break; /*0xa196a*/
    case 56: /*0xa1840*/
      result = 44; /*0xa196b*/
      break; /*0xa1970*/
    case 57: /*0xa1840*/
      result = 3; /*0xa1971*/
      break; /*0xa1976*/
    case 58: /*0xa1840*/
      result = 83; /*0xa19a7*/
      break; /*0xa19ac*/
    case 59: /*0xa1840*/
      result = 16; /*0xa19ad*/
      break; /*0xa19b2*/
    case 60: /*0xa1840*/
      result = 4; /*0xa19b3*/
      break; /*0xa19b8*/
    case 61: /*0xa1840*/
      result = 5; /*0xa19b9*/
      break; /*0xa19be*/
    case 63: /*0xa1840*/
      result = 52; /*0xa1a07*/
      break; /*0xa1a0c*/
    case 64: /*0xa1840*/
      result = 41; /*0xa1a0d*/
      break; /*0xa1a12*/
    case 65: /*0xa1840*/
      result = 6; /*0xa1a13*/
      break; /*0xa1a18*/
    case 66: /*0xa1840*/
      result = 35; /*0xa1a19*/
      break; /*0xa1a1e*/
    case 67: /*0xa1840*/
      result = 98; /*0xa1a4f*/
      break; /*0xa1a54*/
    case 68: /*0xa1840*/
      result = 8; /*0xa1a55*/
      break; /*0xa1a5a*/
    case 69: /*0xa1840*/
      result = 36; /*0xa1a5b*/
      break; /*0xa1a60*/
    case 70: /*0xa1840*/
      result = 103; /*0xa1a61*/
      break; /*0xa1a66*/
    case 72: /*0xa1840*/
      result = 40; /*0xa1977*/
      break; /*0xa197c*/
    case 73: /*0xa1840*/
      result = 76; /*0xa197d*/
      break; /*0xa1982*/
    case 74: /*0xa1840*/
      result = 77; /*0xa1983*/
      break; /*0xa1988*/
    case 75: /*0xa1840*/
      result = 78; /*0xa1989*/
      break; /*0xa198e*/
    case 76: /*0xa1840*/
      result = 22; /*0xa19bf*/
      break; /*0xa19c4*/
    case 77: /*0xa1840*/
      result = 39; /*0xa19c5*/
      break; /*0xa19ca*/
    case 78: /*0xa1840*/
      result = 84; /*0xa19cb*/
      break; /*0xa19d0*/
    case 79: /*0xa1840*/
      result = 50; /*0xa19d1*/
      break; /*0xa19d6*/
    case 81: /*0xa1840*/
      result = 47; /*0xa1a1f*/
      break; /*0xa1a24*/
    case 82: /*0xa1840*/
      result = 23; /*0xa1a25*/
      break; /*0xa1a2a*/
    case 83: /*0xa1840*/
      result = 92; /*0xa1a2b*/
      break; /*0xa1a30*/
    case 84: /*0xa1840*/
      result = 93; /*0xa1a31*/
      break; /*0xa1a36*/
    case 85: /*0xa1840*/
      result = 7; /*0xa1a67*/
      break; /*0xa1a6c*/
    case 86: /*0xa1840*/
      result = 13; /*0xa1a6d*/
      break; /*0xa1a72*/
    case 87: /*0xa1840*/
      result = 24; /*0xa1a73*/
      break; /*0xa1a78*/
    case 88: /*0xa1840*/
      result = 104; /*0xa1a79*/
      break; /*0xa1a7e*/
    case 90: /*0xa1840*/
      result = 33; /*0xa198f*/
      break; /*0xa1994*/
    case 91: /*0xa1840*/
      result = 21; /*0xa1995*/
      break; /*0xa199a*/
    case 92: /*0xa1840*/
      result = 81; /*0xa199b*/
      break; /*0xa19a0*/
    case 93: /*0xa1840*/
      result = 82; /*0xa19a1*/
      break; /*0xa19a6*/
    case 94: /*0xa1840*/
      result = 34; /*0xa19d7*/
      break; /*0xa19dc*/
    case 95: /*0xa1840*/
      result = 85; /*0xa19dd*/
      break; /*0xa19e2*/
    case 96: /*0xa1840*/
      result = 86; /*0xa19e3*/
      break; /*0xa19e8*/
    case 97: /*0xa1840*/
      result = 87; /*0xa19e9*/
      break; /*0xa19ee*/
    case 99: /*0xa1840*/
      result = 49; /*0xa1a37*/
      break; /*0xa1a3c*/
    case 100: /*0xa1840*/
      result = 95; /*0xa1a3d*/
      break; /*0xa1a42*/
    case 101: /*0xa1840*/
      result = 96; /*0xa1a43*/
      break; /*0xa1a48*/
    case 102: /*0xa1840*/
      result = 97; /*0xa1a49*/
      break; /*0xa1a4e*/
    case 103: /*0xa1840*/
      result = 43; /*0xa1a7f*/
      break; /*0xa1a84*/
    case 104: /*0xa1840*/
      result = 99; /*0xa1a85*/
      break; /*0xa1a8a*/
    case 105: /*0xa1840*/
      result = 100; /*0xa1a8b*/
      break; /*0xa1a90*/
    case 106: /*0xa1840*/
      result = 101; /*0xa1a91*/
      break; /*0xa1a96*/
    case 112: /*0xa1840*/
      result = 106; /*0xa19ef*/
      break; /*0xa19f4*/
    case 113: /*0xa1840*/
      result = 88; /*0xa19f5*/
      break; /*0xa19fa*/
    case 114: /*0xa1840*/
      result = 89; /*0xa19fb*/
      break; /*0xa1a00*/
    case 115: /*0xa1840*/
      result = 90; /*0xa1a01*/
      break; /*0xa1a06*/
    case 136: /*0xa1840*/
      result = 12; /*0xa1a97*/
      break; /*0xa1a9c*/
    case 137: /*0xa1840*/
      result = 91; /*0xa1a9d*/
      break; /*0xa1aa2*/
    case 138: /*0xa1840*/
      result = 17; /*0xa1aa3*/
      break; /*0xa1aa8*/
    case 139: /*0xa1840*/
      result = 102; /*0xa1aa9*/
      break; /*0xa1aae*/
    case 140: /*0xa1840*/
      result = 18; /*0xa1aaf*/
      break; /*0xa1ab4*/
    case 141: /*0xa1840*/
      result = 94; /*0xa1ab5*/
      break; /*0xa1aba*/
    case 142: /*0xa1840*/
      result = 15; /*0xa1abb*/
      break; /*0xa1ac0*/
    default:
      result = 0xFFFFFFFFLL; /*0xa1ac1*/
      break; /*0xa1ac1*/
  }
  return result; /*0xa1847*/
}

// [6/8] Address: 0xa1d10
// Method: CharacterColorPage::updateIconColors
// Hidden C++ exception states: #wind=8
unsigned int __fastcall CharacterColorPage_updateIconColors(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // bp
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int result; // eax
  struct cocos2d::CCObject *v8; // rbx
  __int64 v9; // rcx
  __int16 v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+52h] [rbp+Ah]
  char v12; // [rsp+58h] [rbp+10h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF
  void *v14; // [rsp+68h] [rbp+20h]

  v2 = qword_905FD0; /*0xa1d1c*/
  if ( !qword_905FD0 ) /*0xa1d26*/
  {
    v14 = operator new(0x6E8u); /*0xa1d32*/
    qword_905FD0 = sub_2723A0(v14); /*0xa1d40*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa1d51*/
    v2 = qword_905FD0; /*0xa1d53*/
  }
  v3 = *(_BYTE *)(v2 + 944); /*0xa1d5a*/
  GameManager_colorForIdx(v2, &v12, *(_DWORD *)(v2 + 844) - *(_DWORD *)(v2 + 848)); /*0xa1d74*/
  v4 = qword_905FD0; /*0xa1d79*/
  if ( !qword_905FD0 ) /*0xa1d83*/
  {
    v14 = operator new(0x6E8u); /*0xa1d8f*/
    qword_905FD0 = sub_2723A0(v14); /*0xa1d9d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa1dae*/
    v4 = qword_905FD0; /*0xa1db0*/
  }
  GameManager_colorForIdx(v4, &v13, *(_DWORD *)(v4 + 856) - *(_DWORD *)(v4 + 860)); /*0xa1dca*/
  v5 = qword_905FD0; /*0xa1dcf*/
  if ( !qword_905FD0 ) /*0xa1dd9*/
  {
    v14 = operator new(0x6E8u); /*0xa1de5*/
    qword_905FD0 = sub_2723A0(v14); /*0xa1df3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa1e04*/
    v5 = qword_905FD0; /*0xa1e06*/
  }
  GameManager_colorForIdx(v5, (char *)&v10, *(_DWORD *)(v5 + 868) - *(_DWORD *)(v5 + 872)); /*0xa1e20*/
  v6 = 0; /*0xa1e25*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); /*0xa1e2e*/
  if ( result ) /*0xa1e36*/
  {
    do /*0xa1f16*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), v6); /*0xa1e4f*/
      (**((void (__fastcall ***)(__int64, char *))v8 + 40))((__int64)v8 + 320, &v12); /*0xa1e61*/
      (**(void (__fastcall ***)(__int64, char *))(*((_QWORD *)v8 + 76) + 320LL))(*((_QWORD *)v8 + 76) + 320LL, &v13); /*0xa1e79*/
      SimplePlayer_updateColors((__int64)v8); /*0xa1e7e*/
      *((_BYTE *)v8 + 660) = v3; /*0xa1e83*/
      v9 = qword_905FD0; /*0xa1e8a*/
      if ( !qword_905FD0 ) /*0xa1e94*/
      {
        v14 = operator new(0x6E8u); /*0xa1ea0*/
        qword_905FD0 = sub_2723A0(v14); /*0xa1eae*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xa1ebf*/
        v9 = qword_905FD0; /*0xa1ec1*/
      }
      if ( *(_DWORD *)(v9 + 868) - *(_DWORD *)(v9 + 872) < 0 ) /*0xa1ed4*/
      {
        *((_BYTE *)v8 + 668) = 0; /*0xa1ef6*/
      }
      else
      {
        *((_BYTE *)v8 + 668) = 1; /*0xa1ed6*/
        *(_WORD *)((char *)v8 + 669) = v10; /*0xa1ee2*/
        *((_BYTE *)v8 + 671) = v11; /*0xa1eee*/
      }
      SimplePlayer_updateColors((__int64)v8); /*0xa1f00*/
      ++v6; /*0xa1f05*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); /*0xa1f0e*/
    }
    while ( v6 < result ); /*0xa1f16*/
  }
  return result; /*0xa1f1c*/
}

// [7/8] Address: 0xa1f30
// Method: CharacterColorPage::onClose
__int64 __fastcall CharacterColorPage_onClose(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rcx
  __int64 v3; // rdx

  v2 = (void (__fastcall ***)(_QWORD))a1[89]; /*0xa1f39*/
  if ( v2 ) /*0xa1f43*/
    (**v2)(v2); /*0xa1f48*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xa1f52*/
  LOBYTE(v3) = 1; /*0xa1f5b*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v3);
}

// [8/8] Address: 0xa1f70
// Method: CharacterColorPage::keyBackClicked
__int64 __fastcall CharacterColorPage_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  void (__fastcall ***v2)(_QWORD); // rcx
  __int64 v3; // rdx

  v1 = a1 - 336; /*0xa1f76*/
  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 376); /*0xa1f7d*/
  if ( v2 ) /*0xa1f87*/
    (**v2)(v2); /*0xa1f8c*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0xa1f96*/
  LOBYTE(v3) = 1; /*0xa1f9f*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v3);
}

// Address: 0x9f690
// Method: CharacterColorPage::init
// Hidden C++ exception states: #wind=13
bool __fastcall CharacterColorPage_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  struct cocos2d::CCSprite *v12; // rax
  cocos2d::CCObject *v13; // rax
  struct cocos2d::CCMenu *v14; // rax
  __int64 v15; // rdi
  struct cocos2d::CCMenu *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  cocos2d::CCObject *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r12d
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  int i; // r13d
  unsigned int v26; // r14d
  __int64 v27; // rax
  unsigned int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  float v34; // xmm1_4
  cocos2d::CCPoint *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct cocos2d::CCObject *v39; // r12
  __int64 v40; // rax
  cocos2d::CCObject *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  cocos2d::CCObject *v49; // rax
  int j; // r12d
  int v51; // eax
  __int64 v52; // rax
  cocos2d::CCObject *v53; // r14
  cocos2d::CCObject *v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  void *v59; // rcx
  struct cocos2d::CCSprite *v60; // rdi
  struct cocos2d::CCSprite *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rcx
  struct cocos2d::CCLabelBMFont *v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  __int16 v73; // [rsp+50h] [rbp-B0h] BYREF
  char v74; // [rsp+52h] [rbp-AEh]
  float v75; // [rsp+58h] [rbp-A8h] BYREF
  float v76; // [rsp+5Ch] [rbp-A4h]
  void *v77; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v78; // [rsp+68h] [rbp-98h]
  _BYTE v79[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v80[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v81[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v82[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v83[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v84[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v85[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v86[8]; // [rsp+B0h] [rbp-50h] BYREF
  void *v87; // [rsp+B8h] [rbp-48h] BYREF
  void *v88; // [rsp+C0h] [rbp-40h]
  void *v89; // [rsp+C8h] [rbp-38h]
  void *v90; // [rsp+D0h] [rbp-30h]
  void *v91; // [rsp+D8h] [rbp-28h]
  void *v92; // [rsp+E0h] [rbp-20h]
  void *v93; // [rsp+E8h] [rbp-18h]
  char v94; // [rsp+F0h] [rbp-10h] BYREF
  void *v95; // [rsp+F8h] [rbp-8h]
  char v96; // [rsp+100h] [rbp+0h] BYREF
  void *v97; // [rsp+108h] [rbp+8h]
  __int128 v98; // [rsp+110h] [rbp+10h] BYREF
  __int64 v99; // [rsp+120h] [rbp+20h]
  unsigned __int64 v100; // [rsp+128h] [rbp+28h]

  result = FLAlertLayer_init(a1, 150);
  if ( !result )
    return result;
  v4 = cocos2d::CCDirector::sharedDirector(v3);
  cocos2d::CCDirector::getWinSize(v4, &v75);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v80, 0.0, 0.0, 80.0, 80.0);
  v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square05.png", v5);
  LOBYTE(v7) = -1;
  (*(void (__fastcall **)(__int64 *, __int64))(v6[40] + 40))(v6 + 40, v7);
  *(_DWORD *)(a1 + 672) = 1138819072;
  *(_DWORD *)(a1 + 668) = 1133903872;
  v8 = *v6;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v77, 450.0, 300.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v8 + 312))(v6, v9);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v6,
    0xFFFFFFFFLL);
  v10 = *v6;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v77, v75 * 0.5, v76 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v10 + 184))(v6, v11);
  v12 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
  LODWORD(v10) = (_DWORD)v12;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 160LL))(v12);
  v13 = CCMenuItemSpriteExtra_create(v10, 0, a1, (__int64)CharacterColorPage_onClose);
  *((_DWORD *)v13 + 93) = 1070386381;
  v14 = cocos2d::CCMenu::create(v13, 0);
  *(_QWORD *)(a1 + 552) = v14;
  v15 = *(_QWORD *)v14;
  v16 = v14;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v77,
    (float)((float)(v75 * 0.5) - (float)(*(float *)(a1 + 672) * 0.5)) + 10.0,
    (float)((float)(*(float *)(a1 + 668) * 0.5) + (float)(v76 * 0.5)) - 10.0);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v15 + 184))(v16, v17);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 552),
    10);
  v19 = (cocos2d::CCObject *)cocos2d::CCArray::create(v18);
  *(_QWORD *)(a1 + 680) = v19;
  cocos2d::CCObject::retain(v19);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v81,
    v75 * 0.5,
    (float)((float)(*(float *)(a1 + 668) * 0.5) + (float)(v76 * 0.5)) - 62.0);
  v20 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v77 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v77);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v20 = qword_905FD0;
  }
  v21 = *(_DWORD *)(v20 + 748) - *(_DWORD *)(v20 + 752);
  v78 = v21;
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v80, 0.0, 0.0, 80.0, 80.0);
  v23 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02b_001.png", v22);
  LOBYTE(v24) = 45;
  (*(void (__fastcall **)(_QWORD *, __int64))(v23[40] + 40LL))(v23 + 40, v24);
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v84, *(float *)(a1 + 672) - 30.0, 60.0);
  (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v23 + 312LL))(v23, v84);
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v23, 8);
  (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v23 + 184LL))(v23, v81);
  v73 = 0;
  v74 = 0;
  (*(void (__fastcall **)(_QWORD *, __int16 *))v23[40])(v23 + 40, &v73);
  for ( i = 0; i < 8; ++i )
  {
    v26 = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, (const struct cocos2d::CCPoint *)&unk_904008);
    switch ( i )
    {
      case 0:
        v27 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v88 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v88);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v27 = qword_905FD0;
        }
        v28 = *(_DWORD *)(v27 + 748) - *(_DWORD *)(v27 + 752);
        break;
      case 1:
        v26 = 1;
        v29 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v89 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v89);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v29 = qword_905FD0;
        }
        v28 = *(_DWORD *)(v29 + 760) - *(_DWORD *)(v29 + 764);
        break;
      case 2:
        v26 = 2;
        v30 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v90 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v90);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v30 = qword_905FD0;
        }
        v28 = *(_DWORD *)(v30 + 772) - *(_DWORD *)(v30 + 776);
        break;
      case 3:
        v26 = 3;
        v31 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v91 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v91);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v31 = qword_905FD0;
        }
        v28 = *(_DWORD *)(v31 + 784) - *(_DWORD *)(v31 + 788);
        break;
      case 4:
        v26 = 4;
        v32 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v92 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v92);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v32 = qword_905FD0;
        }
        v28 = *(_DWORD *)(v32 + 796) - *(_DWORD *)(v32 + 800);
        break;
      case 5:
        v26 = 5;
        v33 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v93 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v93);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v33 = qword_905FD0;
        }
        v28 = *(_DWORD *)(v33 + 808) - *(_DWORD *)(v33 + 812);
        v34 = -6.0;
        v35 = (cocos2d::CCPoint *)&v94;
        goto LABEL_24;
      case 6:
        v26 = 6;
        v37 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v95 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v95);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v37 = qword_905FD0;
        }
        v28 = *(_DWORD *)(v37 + 820) - *(_DWORD *)(v37 + 824);
        v34 = -4.0;
        v35 = (cocos2d::CCPoint *)&v96;
LABEL_24:
        cocos2d::CCPoint::CCPoint(v35, v34, 0.0);
        cocos2d::CCPoint::operator=(v79, v36);
        break;
      case 7:
        v26 = 7;
        v38 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v97 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v97);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v38 = qword_905FD0;
        }
        v28 = *(_DWORD *)(v38 + 832) - *(_DWORD *)(v38 + 836);
        break;
    }
    v39 = SimplePlayer_create(v21);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v85, (float)((float)i * 52.0) - 182.0, 0.0);
    cocos2d::CCPoint::operator+(v40, &v77, v79);
    cocos2d::CCPoint::operator+(v81, v82, &v77);
    if ( v26 == 1 )
    {
      v41 = CCMenuItemSpriteExtra_create((int)v39, 0, a1, (__int64)CharacterColorPage_toggleShip);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v41 + 64LL))(v41, 1);
      v42 = *(_QWORD *)v41;
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)v86, 30.0, 30.0);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v42 + 312))(v41, v43);
      v44 = *(_QWORD *)v39;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v87, 15.0, 15.0);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v44 + 184))(v39, v45);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v41);
      v46 = *(_QWORD *)v41;
      cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v80, v82);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v46 + 184))(v41, v47);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        v39,
        10);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v39 + 184LL))(v39, v82);
    }
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 680), v39);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v39 + 160LL))(v39);
    SimplePlayer_updatePlayerFrame((__int64)v39, v28, v26);
    v21 = v78;
  }
  v49 = (cocos2d::CCObject *)cocos2d::CCArray::create(v48);
  *(_QWORD *)(a1 + 688) = v49;
  cocos2d::CCObject::retain(v49);
  for ( j = 0; j < 3; ++j )
  {
    v98 = 0;
    v99 = 0;
    v100 = 15;
    LOBYTE(v98) = 0;
    if ( j )
    {
      if ( j == 1 )
      {
        v51 = 845967171;
      }
      else
      {
        if ( j != 2 )
          goto LABEL_43;
        v51 = *(_DWORD *)"Glow";
      }
    }
    else
    {
      v51 = 829189955;
    }
    v99 = 4;
    LODWORD(v98) = v51;
    BYTE4(v98) = 0;
LABEL_43:
    v80[0] = (__int64)operator new(0x2C8u);
    v52 = ButtonSprite_ButtonSprite(v80[0]);
    v53 = (cocos2d::CCObject *)v52;
    if ( v52 )
    {
      if ( ButtonSprite_init(
             v52,
             (__int64)&v98,
             40,
             0,
             1053609165,
             0,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_01.png",
             1101004800) )
      {
        cocos2d::CCObject::autorelease(v53);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v53 + 8LL))(v53, 1);
        v53 = 0;
      }
    }
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v53 + 160LL))(v53);
    v87 = operator new(0x208u);
    v54 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v87);
    if ( v54 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v54, (_DWORD)v53, 0, a1, (__int64)sub_A0CC0) )
      {
        cocos2d::CCObject::autorelease(v54);
        goto LABEL_52;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v54 + 8LL))(v54, 1);
    }
    v54 = 0;
LABEL_52:
    *((_DWORD *)v54 + 93) = 1066192077;
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v54 + 64LL))(v54, (unsigned int)j);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v54);
    v55 = *(_QWORD *)v54;
    v56 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v86,
      (float)((float)((float)(*(float *)(a1 + 672) * 0.5) + (float)(v75 * 0.5)) - 137.0) + (float)(50 * j),
      (float)((float)(*(float *)(a1 + 668) * 0.5) + (float)(v76 * 0.5)) - 17.0);
    cocos2d::CCNode::convertToNodeSpace(v56, v85, v57);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v55 + 184))(v54, v58);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 688), v53);
    if ( v100 > 0xF )
    {
      v59 = (void *)v98;
      if ( v100 + 1 >= 0x1000 )
      {
        v59 = *(void **)(v98 - 8);
        if ( (unsigned __int64)(v98 - (_QWORD)v59 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v59);
    }
  }
  CharacterColorPage_updateIconColors(a1);
  CharacterColorPage_createColorMenu(a1);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v83,
    (float)((float)(v75 * 0.5) - (float)(*(float *)(a1 + 672) * 0.5)) + 26.0,
    (float)((float)(v76 * 0.5) - (float)(*(float *)(a1 + 668) * 0.5)) + 23.0);
  v60 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png");
  v61 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v60 + 160LL))(v60);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v61 + 160LL))(v61);
  *(_QWORD *)(a1 + 720) = CCMenuItemToggler_create((__int64)v60, (__int64)v61, a1, (__int64)SetupPulsePopup_onPaste);
  v63 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v80[0] = (__int64)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v80[0]);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v63 = qword_905FD0;
  }
  LOBYTE(v62) = *(_BYTE *)(v63 + 944) == 0;
  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 720), v62);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    *(_QWORD *)(a1 + 720));
  v64 = **(_QWORD **)(a1 + 720);
  v65 = *(_QWORD *)(a1 + 720);
  cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v80, v83);
  (*(void (__fastcall **)(__int64, __int64))(v64 + 184))(v65, v66);
  v67 = *(_QWORD *)(a1 + 720);
  *(_DWORD *)(*(_QWORD *)(v67 + 376) + 372LL) = 1069547520;
  *(_DWORD *)(*(_QWORD *)(v67 + 384) + 372LL) = 1069547520;
  CCMenuItemToggler_toggle(v67, *(unsigned __int8 *)(v67 + 392));
  v68 = cocos2d::CCLabelBMFont::create("Glow", (const char *)&qword_6FFF68);
  *(_QWORD *)(a1 + 728) = v68;
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v68,
    2);
  v69 = **(_QWORD **)(a1 + 728);
  v70 = *(_QWORD *)(a1 + 728);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v80, 0.0, 0.5);
  (*(void (__fastcall **)(__int64, __int64))(v69 + 288))(v70, v71);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 728) + 160LL))(*(_QWORD *)(a1 + 728));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v80, 18.0, 0.0);
  cocos2d::CCPoint::operator+(v83, &v77, v72);
  (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 728) + 184LL))(*(_QWORD *)(a1 + 728), &v77);
  sub_A0F70(a1, 0);
  return 1;
}
