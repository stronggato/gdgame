#include <Geode/binding/GJItemIcon.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x4cc40
// Method: GJItemIcon::darkenStoreItem_0
void __fastcall GJItemIcon_darkenStoreItem_0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r8
  cocos2d::CCObject *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 408); /*0x4cc4f*/
  if ( (unsigned __int8)sub_58200(v1) ) /*0x4cc5b*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v1 + 600) + 600LL) + 8LL))(*(_QWORD *)(v1 + 600) + 600LL); /*0x4cc75*/
    v7 = 0; /*0x4cc7b*/
    v6 = 0; /*0x4cc80*/
    v8 = 0; /*0x4cc85*/
    v4 = -1; /*0x4cc8a*/
    do /*0x4cc94*/
      ++v4; /*0x4cc91*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x4cc94*/
    sub_3C230(&v6); /*0x4cca2*/
    sub_8AAB0(&v6); /*0x4ccac*/
  }
  v5 = *(cocos2d::CCObject **)(v1 + 704); /*0x4ccb1*/
  if ( v5 ) /*0x4ccbb*/
  {
    *(_QWORD *)(v1 + 704) = 0; /*0x4ccbd*/
    LOBYTE(v2) = 1; /*0x4ccc4*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 520LL))(v5, v2); /*0x4cccc*/
    cocos2d::CCObject::release(v5); /*0x4ccd5*/
  }
}

// [2/7] Address: 0x1fba60
// Method: GJItemIcon::createBrowserItem
// Hidden C++ exception states: #wind=2
unsigned int __fastcall GJItemIcon_createBrowserItem(__int64 a1, unsigned int a2)
{
  cocos2d::CCArray **v4; // rsi
  unsigned int result; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebp
  _DWORD *v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  struct cocos2d::CCObject *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  cocos2d::CCObject *v19; // rsi
  cocos2d::CCObject *v20; // rax
  __int64 v21; // rbp
  unsigned int v22; // ebx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // [rsp+40h] [rbp+8h] BYREF
  cocos2d::CCObject *v27; // [rsp+50h] [rbp+18h] BYREF

  v4 = (cocos2d::CCArray **)(a1 + 944); /*0x1fba71*/
  if ( *(_QWORD *)(a1 + 1568) || (result = cocos2d::CCArray::count(*v4)) != 0 ) /*0x1fba8d*/
  {
    v6 = cocos2d::CCDirector::sharedDirector(a1); /*0x1fba93*/
    v8 = 0; /*0x1fbaa8*/
    if ( !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) + 157) ) /*0x1fbaaa*/
    {
      v9 = (_DWORD *)(*(_QWORD *)(a1 + 1512) + 15472LL); /*0x1fbaba*/
      ++v9[3]; /*0x1fbac1*/
      v7 = (unsigned int)v9[24]; /*0x1fbac4*/
      if ( (int)v7 >= 0 ) /*0x1fbac9*/
      {
        v10 = v9[8] - v7; /*0x1fbace*/
        v7 = 0; /*0x1fbad0*/
        if ( v10 > 1 ) /*0x1fbad5*/
        {
          do /*0x1fbae3*/
          {
            if ( (int)v7 >= 7 ) /*0x1fbada*/
              break; /*0x1fbada*/
            v10 = (unsigned int)v10 >> 1; /*0x1fbadc*/
            v7 = (unsigned int)(v7 + 1); /*0x1fbade*/
          }
          while ( (unsigned int)v10 > 1 ); /*0x1fbae3*/
        }
        ++v9[(int)v7 + 16]; /*0x1fbae8*/
        v4 = (cocos2d::CCArray **)(a1 + 944); /*0x1fbaec*/
      }
      v9[24] = v9[8]; /*0x1fbaf6*/
    }
    v11 = sub_182B60(v7); /*0x1fbaf9*/
    sub_182FE0(v11, 150); /*0x1fbb06*/
    switch ( a2 ) /*0x1fbb2e*/
    {
      case 1u: /*0x1fbb2e*/
      case 2u: /*0x1fbb2e*/
      case 3u: /*0x1fbb2e*/
      case 4u: /*0x1fbb2e*/
      case 0xDu: /*0x1fbb2e*/
      case 0xEu: /*0x1fbb2e*/
      case 0xFu: /*0x1fbb2e*/
      case 0x10u: /*0x1fbb2e*/
      case 0x19u: /*0x1fbb2e*/
      case 0x1Au: /*0x1fbb2e*/
      case 0x1Bu: /*0x1fbb2e*/
      case 0x1Cu: /*0x1fbb2e*/
        v13 = sub_182B60(v12); /*0x1fbb54*/
        v14 = 151; /*0x1fbb59*/
        goto LABEL_16; /*0x1fbb5e*/
      case 5u: /*0x1fbb2e*/
      case 6u: /*0x1fbb2e*/
      case 7u: /*0x1fbb2e*/
      case 8u: /*0x1fbb2e*/
        v13 = sub_182B60(v12); /*0x1fbb3c*/
        v14 = 152; /*0x1fbb41*/
        goto LABEL_16; /*0x1fbb46*/
      case 9u: /*0x1fbb2e*/
      case 0xAu: /*0x1fbb2e*/
      case 0xBu: /*0x1fbb2e*/
      case 0xCu: /*0x1fbb2e*/
        v13 = sub_182B60(v12); /*0x1fbb30*/
        v14 = 153; /*0x1fbb35*/
        goto LABEL_16; /*0x1fbb3a*/
      case 0x11u: /*0x1fbb2e*/
      case 0x12u: /*0x1fbb2e*/
      case 0x13u: /*0x1fbb2e*/
      case 0x14u: /*0x1fbb2e*/
      case 0x15u: /*0x1fbb2e*/
      case 0x16u: /*0x1fbb2e*/
      case 0x17u: /*0x1fbb2e*/
      case 0x18u: /*0x1fbb2e*/
      case 0x1Du: /*0x1fbb2e*/
      case 0x1Eu: /*0x1fbb2e*/
      case 0x1Fu: /*0x1fbb2e*/
      case 0x20u: /*0x1fbb2e*/
        v13 = sub_182B60(v12); /*0x1fbb48*/
        v14 = 155; /*0x1fbb4d*/
        goto LABEL_16; /*0x1fbb52*/
      case 0x21u: /*0x1fbb2e*/
      case 0x22u: /*0x1fbb2e*/
      case 0x23u: /*0x1fbb2e*/
      case 0x24u: /*0x1fbb2e*/
        v13 = sub_182B60(v12); /*0x1fbb60*/
        v14 = 276; /*0x1fbb65*/
LABEL_16:
        sub_182FE0(v13, v14); /*0x1fbb6a*/
        break; /*0x1fbb6d*/
      default:
        break;
    }
    sub_1FECB0(a1, &v26, a2); /*0x1fbb72*/
    if ( cocos2d::CCArray::count(*v4) ) /*0x1fbb85*/
    {
      EditorUI_createUndoObject(a1, v15, 0); /*0x1fbb95*/
      if ( cocos2d::CCArray::count(*v4) ) /*0x1fbb9d*/
      {
        do /*0x1fbbe9*/
        {
          v16 = cocos2d::CCArray::objectAtIndex(*v4, v8); /*0x1fbbbb*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, (const struct cocos2d::CCPoint *)&v26); /*0x1fbbc8*/
          EditorUI_moveObject(a1, (__int64)v16, v17); /*0x1fbbd7*/
          ++v8; /*0x1fbbdc*/
        }
        while ( v8 < cocos2d::CCArray::count(*v4) ); /*0x1fbbe9*/
      }
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 1568); /*0x1fbbf0*/
      v19 = (cocos2d::CCObject *)operator new(0xA0u); /*0x1fbc01*/
      v27 = v19; /*0x1fbc04*/
      cocos2d::CCObject::CCObject(v19); /*0x1fbc0c*/
      *(_QWORD *)v19 = &UndoObject::`vftable'; /*0x1fbc1a*/
      *((_QWORD *)v19 + 7) = 0; /*0x1fbc1d*/
      *((_DWORD *)v19 + 16) = 0; /*0x1fbc21*/
      *((_QWORD *)v19 + 9) = 0; /*0x1fbc24*/
      *((_WORD *)v19 + 40) = 0; /*0x1fbc28*/
      sub_1A6040((char *)v19 + 84); /*0x1fbc32*/
      if ( v18 ) /*0x1fbc3b*/
      {
        v20 = (cocos2d::CCObject *)GameObjectCopy_create(v18); /*0x1fbc40*/
        *((_QWORD *)v19 + 7) = v20; /*0x1fbc45*/
        cocos2d::CCObject::retain(v20); /*0x1fbc4c*/
      }
      *((_DWORD *)v19 + 16) = 5; /*0x1fbc52*/
      cocos2d::CCObject::autorelease(v19); /*0x1fbc5c*/
      v21 = *(_QWORD *)(a1 + 1512); /*0x1fbc62*/
      cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v21 + 14984)); /*0x1fbc70*/
      v22 = 1000; /*0x1fbc76*/
      if ( !*(_BYTE *)(v21 + 14726) ) /*0x1fbc80*/
        v22 = 200; /*0x1fbc87*/
      if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v21 + 14976)) >= v22 ) /*0x1fbc99*/
        cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v21 + 14976), 0, 1); /*0x1fbca7*/
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v21 + 14976), v19); /*0x1fbcb7*/
      v23 = *(_QWORD *)(a1 + 1568); /*0x1fbcbd*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, (const struct cocos2d::CCPoint *)&v26); /*0x1fbcce*/
      EditorUI_moveObject(a1, v23, v24); /*0x1fbcdd*/
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 840) + 344LL))(*(_QWORD *)(a1 + 840)) ) /*0x1fbcec*/
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 840) + 200LL))(*(_QWORD *)(a1 + 840)); /*0x1fbd00*/
      cocos2d::CCPoint::operator+(v25, &v27, &v26); /*0x1fbd13*/
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject **))(**(_QWORD **)(a1 + 840) + 184LL))( /*0x1fbd28*/
        *(_QWORD *)(a1 + 840),
        &v27);
      sub_1A2C30(*(_QWORD *)(a1 + 840)); /*0x1fbd35*/
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 808) + 344LL))(*(_QWORD *)(a1 + 808)) ) /*0x1fbd44*/
    {
      *(_BYTE *)(a1 + 824) = 1; /*0x1fbd4e*/
      EditorUI_activateRotationControl(a1); /*0x1fbd5a*/
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 432) + 40LL))(a1 + 432); /*0x1fbd69*/
    return EditorUI_updateButtons(a1); /*0x1fbd6f*/
  }
  return result; /*0x1fbd74*/
}

// [3/7] Address: 0x37f880
// Method: GJItemIcon::createStoreItem
// Hidden C++ exception states: #wind=2
char *__fastcall GJItemIcon_createStoreItem(int a1, int a2, char a3)
{
  char *v6; // r15
  __int16 v8; // [rsp+50h] [rbp-48h] BYREF
  char v9; // [rsp+52h] [rbp-46h]
  __int16 v10; // [rsp+60h] [rbp-38h] BYREF
  char v11; // [rsp+62h] [rbp-36h]

  v8 = -256; /*0x37f8a4*/
  v6 = (char *)operator new(0x278u); /*0x37f8c3*/
  cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)v6); /*0x37f8d1*/
  *(_QWORD *)v6 = &GJItemIcon::`vftable'; /*0x37f8df*/
  *((_QWORD *)v6 + 40) = &GJItemIcon::`vftable'; /*0x37f8e9*/
  *((_QWORD *)v6 + 43) = &GJItemIcon::`vftable'; /*0x37f8f7*/
  *((_QWORD *)v6 + 75) = 0; /*0x37f901*/
  *((_DWORD *)v6 + 152) = 0; /*0x37f908*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)(v6 + 612)); /*0x37f916*/
  v6[620] = 0; /*0x37f91c*/
  *((_QWORD *)v6 + 78) = 0; /*0x37f923*/
  v9 = -1; /*0x37f934*/
  v10 = -1; /*0x37f939*/
  v11 = -1; /*0x37f93e*/
  if ( (unsigned __int8)sub_37FAE0((_DWORD)v6, a1, a2, (unsigned int)&v10, (__int64)&v8, a3) ) /*0x37f964*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x37f970*/
    return v6; /*0x37f976*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x37f98a*/
    return 0; /*0x37f98d*/
  }
}

// [4/7] Address: 0x380220
// Method: GJItemIcon::setOpacity
int __fastcall GJItemIcon_setOpacity(cocos2d::CCSprite *a1, unsigned __int8 a2)
{
  cocos2d::CCArray *v4; // rax
  cocos2d::CCArray *v5; // rdi
  unsigned int v6; // ebx
  struct cocos2d::CCObject *v7; // rax

  cocos2d::CCSprite::setOpacity(a1, a2); /*0x380235*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 35) + 320LL) + 40LL))( /*0x380250*/
    *((_QWORD *)a1 + 35) + 320LL,
    a2);
  v4 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 35) + 480LL))(*((_QWORD *)a1 + 35)); /*0x38025d*/
  v5 = v4; /*0x380263*/
  if ( v4 ) /*0x380269*/
  {
    v6 = 0; /*0x38026e*/
    for ( LODWORD(v4) = cocos2d::CCArray::count(v4); v6 < (unsigned int)v4; LODWORD(v4) = cocos2d::CCArray::count(v5) ) /*0x380278*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(v5, v6); /*0x380285*/
      (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v7 + 40) + 40LL))((__int64)v7 + 320, a2); /*0x380299*/
      ++v6; /*0x38029f*/
    }
  }
  return (int)v4; /*0x3802ab*/
}

// [5/7] Address: 0x3802c0
// Method: GJItemIcon::darkenStoreItem
int __fastcall GJItemIcon_darkenStoreItem(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  char v7; // cl
  __int16 v9; // [rsp+38h] [rbp+10h]
  __int16 v10; // [rsp+40h] [rbp+18h] BYREF
  char v11; // [rsp+42h] [rbp+1Ah]

  v3 = a2 - 1; /*0x3802c7*/
  if ( !v3 ) /*0x3802ca*/
  {
    v9 = 7690; /*0x380315*/
    goto LABEL_12; /*0x380315*/
  }
  v4 = v3 - 1; /*0x3802cc*/
  if ( v4 ) /*0x3802cf*/
  {
    v5 = v4 - 1; /*0x3802d1*/
    if ( v5 ) /*0x3802d4*/
    {
      v6 = v5 - 1; /*0x3802d6*/
      if ( v6 ) /*0x3802d9*/
      {
        if ( v6 != 1 ) /*0x3802de*/
        {
          v9 = 7740; /*0x3802e0*/
LABEL_12:
          v7 = 20; /*0x38031c*/
          goto LABEL_13; /*0x38031c*/
        }
        v9 = 12850; /*0x3802e9*/
        v7 = 50; /*0x3802f0*/
      }
      else
      {
        v9 = 7700; /*0x3802f4*/
        v7 = 50; /*0x3802fb*/
      }
    }
    else
    {
      v9 = 5140; /*0x3802ff*/
      v7 = 40; /*0x380306*/
    }
  }
  else
  {
    v9 = 5665; /*0x38030a*/
    v7 = 66; /*0x380311*/
  }
LABEL_13:
  v11 = v7; /*0x38031e*/
  v10 = v9; /*0x38032f*/
  return SetGroupIDLayer_onExtra2(a1, (__int64)&v10); /*0x380339*/
}

// [6/7] Address: 0x380560
// Method: GJItemIcon::toggleEnabledState
void __fastcall GJItemIcon_toggleEnabledState(__int64 a1, char a2)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rbx
  __int16 *v3; // rdx
  cocos2d::CCArray *v4; // rax
  cocos2d::CCArray *v5; // rdi
  unsigned int v6; // ebx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx
  _BYTE v9[3]; // [rsp+30h] [rbp+8h] BYREF
  __int16 v10; // [rsp+40h] [rbp+18h] BYREF
  char v11; // [rsp+42h] [rbp+1Ah]

  if ( !*(_BYTE *)(a1 + 620) ) /*0x380564*/
  {
    v2 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 600); /*0x380576*/
    if ( a2 ) /*0x380584*/
    {
      v3 = &v10; /*0x38058d*/
      v10 = -1; /*0x380592*/
      v11 = -1; /*0x38059e*/
    }
    else
    {
      memset(v9, 100, sizeof(v9)); /*0x3805a4*/
      v3 = (__int16 *)v9; /*0x3805ab*/
    }
    (*v2[40])(v2 + 40, v3); /*0x3805bf*/
    v4 = (cocos2d::CCArray *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD)))(*v2)[60])(v2); /*0x3805c7*/
    v5 = v4; /*0x3805cd*/
    if ( v4 ) /*0x3805d3*/
    {
      v6 = 0; /*0x3805d8*/
      if ( cocos2d::CCArray::count(v4) ) /*0x3805da*/
      {
        do /*0x38060e*/
        {
          v7 = cocos2d::CCArray::objectAtIndex(v5, v6); /*0x3805e9*/
          LOBYTE(v8) = 1; /*0x3805ef*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 336LL))(v7, v8); /*0x3805fe*/
          ++v6; /*0x380604*/
        }
        while ( v6 < cocos2d::CCArray::count(v5) ); /*0x38060e*/
      }
    }
  }
}

// [7/7] Address: 0x3806f0
// Method: GJItemIcon::scaleForType
float __fastcall GJItemIcon_scaleForType(int a1)
{
  float result; // xmm0_4

  switch ( a1 ) /*0x38070b*/
  {
    case 1: /*0x38070b*/
    case 7: /*0x38070b*/
    case 10: /*0x38070b*/
    case 11: /*0x38070b*/
    case 12: /*0x38070b*/
    case 15: /*0x38070b*/
      result = 0.80000001; /*0x38070d*/
      break; /*0x380715*/
    case 4: /*0x38070b*/
    case 14: /*0x38070b*/
      result = 0.60000002; /*0x380716*/
      break; /*0x38071e*/
    case 5: /*0x38070b*/
      result = 0.75; /*0x38071f*/
      break; /*0x380727*/
    case 6: /*0x38070b*/
      result = 0.68000001; /*0x380728*/
      break; /*0x380730*/
    case 8: /*0x38070b*/
    case 9: /*0x38070b*/
      result = 0.64999998; /*0x380731*/
      break; /*0x380739*/
    case 13: /*0x38070b*/
      result = 0.69999999; /*0x38073a*/
      break; /*0x380742*/
    default:
      result = 1.0; /*0x380743*/
      break; /*0x380743*/
  }
  return result; /*0x380715*/
}
