#include <Geode/binding/InfoLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/26] Address: 0x122790
// Method: InfoLayer::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall InfoLayer_create(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14

  v6 = operator new(0x360u); /*0x1227b5*/
  FLAlertLayer_FLAlertLayer(v6); /*0x1227c0*/
  *v6 = &ColorSelectLiveOverlay::`vftable'; /*0x1227cc*/
  v6[40] = &ColorSelectLiveOverlay::`vftable'; /*0x1227d6*/
  v6[41] = &ColorSelectLiveOverlay::`vftable'; /*0x1227e4*/
  v6[42] = &ColorSelectLiveOverlay::`vftable'; /*0x1227f2*/
  v6[43] = &ColorSelectLiveOverlay::`vftable'; /*0x122800*/
  v6[44] = &ColorSelectLiveOverlay::`vftable'; /*0x12280e*/
  v6[51] = &ColorSelectLiveOverlay::`vftable'; /*0x12281c*/
  v6[54] = &ColorSelectLiveOverlay::`vftable'; /*0x12282a*/
  v6[68] = &ColorSelectLiveOverlay::`vftable'; /*0x122838*/
  v6[83] = 0; /*0x122841*/
  v6[85] = 0; /*0x122848*/
  v6[86] = 0; /*0x12284f*/
  v6[87] = 0; /*0x122856*/
  *(_QWORD *)((char *)v6 + 716) = 0; /*0x12285d*/
  *((_DWORD *)v6 + 181) = 0; /*0x122864*/
  *((_DWORD *)v6 + 182) = 1065353216; /*0x12286b*/
  v6[92] = 0; /*0x122876*/
  *((_WORD *)v6 + 372) = 0; /*0x12287d*/
  *((_BYTE *)v6 + 746) = 0; /*0x122885*/
  v6[97] = 0; /*0x12288c*/
  v6[102] = 0; /*0x122893*/
  *((_WORD *)v6 + 428) = 0; /*0x12289a*/
  if ( (unsigned __int8)sub_1228F0(v6, a1, a2, a3) ) /*0x1228ae*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x1228ba*/
    return v6; /*0x1228c0*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0x1228d4*/
    return 0; /*0x1228d7*/
  }
}

// [2/26] Address: 0x15fb50
// Method: InfoLayer::onCopyLevelID
// Hidden C++ exception states: #wind=2
__int64 __fastcall InfoLayer_onCopyLevelID(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 336); /*0x15fb5d*/
  if ( result ) /*0x15fb67*/
  {
    v3 = qword_906070; /*0x15fb6d*/
    if ( *(int *)(result + 76) <= 0 ) /*0x15fb78*/
    {
      if ( !qword_906070 ) /*0x15fbea*/
      {
        v6 = operator new(0x3D0u); /*0x15fbf6*/
        qword_906070 = sub_47C350(v6); /*0x15fc04*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x15fc15*/
        v3 = qword_906070; /*0x15fc17*/
      }
      LODWORD(v6) = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 56LL); /*0x15fc28*/
      if ( (int)v6 <= 0 || sub_658F0(v3 + 648, &v6) ) /*0x15fc3c*/
        return sub_1600C0(a1); /*0x15fc44*/
      v4 = v3 + 648; /*0x15fc46*/
    }
    else
    {
      if ( !qword_906070 ) /*0x15fb7d*/
      {
        v6 = operator new(0x3D0u); /*0x15fb89*/
        qword_906070 = sub_47C350(v6); /*0x15fb97*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x15fba8*/
        v3 = qword_906070; /*0x15fbaa*/
      }
      LODWORD(v6) = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 76LL); /*0x15fbbb*/
      if ( (int)v6 <= 1 || sub_658F0(v3 + 712, &v6) ) /*0x15fbd4*/
        return sub_1600C0(a1); /*0x15fbdc*/
      v4 = v3 + 712; /*0x15fbde*/
    }
    sub_67020(v4, v5, &v6); /*0x15fc57*/
    return sub_1600C0(a1); /*0x15fc5c*/
  }
  return result; /*0x15fc64*/
}

// [3/26] Address: 0x248210
// Method: InfoLayer::onLevelInfo
// Hidden C++ exception states: #wind=4
cocos2d::CCArray *__fastcall InfoLayer_onLevelInfo(_QWORD *a1)
{
  _QWORD *v1; // rbx
  cocos2d::CCArray *v2; // r12
  __int64 v3; // r8
  cocos2d::CCArray *v4; // r15
  void *v5; // r8
  unsigned int i; // r14d
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // r8
  cocos2d::CCArray *v10; // rdi
  void *v11; // rcx
  char *v12; // rsi
  __int128 *v13; // rbx
  cocos2d::CCString *v14; // rax
  const char *v15; // rax
  cocos2d::CCString *v16; // rax
  cocos2d::CCString *v17; // rax
  const char *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  void *v22; // rcx
  cocos2d::CCString *v23; // rax
  const char *v24; // rax
  cocos2d::CCString *v25; // rax
  __int128 v27; // [rsp+30h] [rbp-69h] BYREF
  __int128 v28; // [rsp+40h] [rbp-59h]
  char *v29; // [rsp+50h] [rbp-49h]
  __int128 *v30; // [rsp+58h] [rbp-41h]
  void *Block[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v32; // [rsp+70h] [rbp-29h]
  unsigned __int64 v33; // [rsp+78h] [rbp-21h]
  __int128 v34; // [rsp+80h] [rbp-19h] BYREF
  __int64 v35; // [rsp+90h] [rbp-9h]
  unsigned __int64 v36; // [rsp+98h] [rbp-1h]
  __int128 v37; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v38; // [rsp+B0h] [rbp+17h]

  v1 = a1; /*0x248242*/
  v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x24824e*/
  if ( v1[2] ) /*0x248251*/
  {
    if ( v1[3] > 0xFu ) /*0x248260*/
      v1 = (_QWORD *)*v1; /*0x248262*/
    *(_OWORD *)Block = 0; /*0x248268*/
    v32 = 0; /*0x24826c*/
    v33 = 0; /*0x248270*/
    v3 = -1; /*0x248274*/
    do /*0x248283*/
      ++v3; /*0x248280*/
    while ( *((_BYTE *)v1 + v3) ); /*0x248283*/
    sub_3C230(Block); /*0x248290*/
    v4 = (cocos2d::CCArray *)sub_D09B0(Block, &word_70806C); /*0x2482a6*/
    if ( v33 > 0xF ) /*0x2482b1*/
    {
      v5 = Block[0]; /*0x2482b6*/
      if ( v33 + 1 >= 0x1000 ) /*0x2482c4*/
      {
        v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x2482ca*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x2482d9*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2482ea*/
      }
      j_j_free(v5); /*0x2482f4*/
    }
    v32 = 0; /*0x2482f9*/
    v33 = 15; /*0x2482fd*/
    LOBYTE(Block[0]) = 0; /*0x248305*/
    for ( i = 0; i < cocos2d::CCArray::count(v4); ++i ) /*0x24830f*/
    {
      v7 = cocos2d::CCArray::stringAtIndex(v4, i); /*0x24832a*/
      CString = cocos2d::CCString::getCString(v7); /*0x248333*/
      v34 = 0; /*0x24833c*/
      v35 = 0; /*0x248340*/
      v36 = 0; /*0x248344*/
      v9 = -1; /*0x248348*/
      do /*0x248353*/
        ++v9; /*0x248350*/
      while ( CString[v9] ); /*0x248353*/
      sub_3C230(&v34); /*0x248361*/
      v10 = (cocos2d::CCArray *)sub_D09B0(&v34, &word_7222A8); /*0x248377*/
      if ( v36 > 0xF ) /*0x248382*/
      {
        v11 = (void *)v34; /*0x248387*/
        if ( v36 + 1 >= 0x1000 ) /*0x248395*/
        {
          v11 = *(void **)(v34 - 8); /*0x24839b*/
          if ( (unsigned __int64)(v34 - (_QWORD)v11 - 8) > 0x1F ) /*0x2483aa*/
            invoke_watson(0, 0, 0, 0, 0); /*0x248636*/
        }
        j_j_free(v11); /*0x2483b0*/
      }
      v35 = 0; /*0x2483b5*/
      v36 = 15; /*0x2483b9*/
      LOBYTE(v34) = 0; /*0x2483c1*/
      if ( cocos2d::CCArray::count(v10) >= 4 ) /*0x2483d1*/
      {
        v12 = (char *)operator new(0x78u); /*0x2483e1*/
        v29 = v12; /*0x2483e4*/
        cocos2d::CCObject::CCObject((cocos2d::CCObject *)v12); /*0x2483eb*/
        *(_QWORD *)v12 = &GJThreadMessage::`vftable'; /*0x2483f1*/
        *((_QWORD *)v12 + 7) = 0; /*0x2483f4*/
        *((_DWORD *)v12 + 16) = 0; /*0x2483f8*/
        v13 = (__int128 *)(v12 + 72); /*0x2483fc*/
        *(_OWORD *)(v12 + 72) = 0; /*0x248403*/
        *((_QWORD *)v12 + 11) = 0; /*0x248406*/
        *((_QWORD *)v12 + 12) = 15; /*0x24840a*/
        v12[72] = 0; /*0x248412*/
        *((_QWORD *)v12 + 13) = 0; /*0x248415*/
        v12[112] = 0; /*0x248419*/
        cocos2d::CCObject::autorelease((cocos2d::CCObject *)v12); /*0x248420*/
        v14 = cocos2d::CCArray::stringAtIndex(v10, 0); /*0x24842b*/
        v15 = cocos2d::CCString::getCString(v14); /*0x248434*/
        *((_QWORD *)v12 + 7) = atoll(v15); /*0x248443*/
        v16 = cocos2d::CCArray::stringAtIndex(v10, 1u); /*0x24844f*/
        *((_DWORD *)v12 + 16) = cocos2d::CCString::intValue(v16); /*0x24845e*/
        v17 = cocos2d::CCArray::stringAtIndex(v10, 2u); /*0x248469*/
        v18 = cocos2d::CCString::getCString(v17); /*0x248472*/
        v27 = 0; /*0x24847b*/
        v28 = 0u; /*0x24847f*/
        v19 = -1; /*0x248487*/
        do /*0x248493*/
          ++v19; /*0x248490*/
        while ( v18[v19] ); /*0x248493*/
        sub_3C230(&v27); /*0x2484a1*/
        v30 = &v27; /*0x2484aa*/
        if ( (_QWORD)v28 ) /*0x2484b3*/
        {
          cocos2d::ZipUtils::base64URLDecode(&v37, &v27); /*0x2484df*/
        }
        else
        {
          v37 = v27; /*0x2484b9*/
          v38 = v28; /*0x2484c1*/
          *(_QWORD *)&v28 = 0; /*0x2484c5*/
          *((_QWORD *)&v28 + 1) = 15; /*0x2484c9*/
          LOBYTE(v27) = 0; /*0x2484d1*/
        }
        sub_3C310(&v27); /*0x2484ea*/
        if ( v13 == &v37 ) /*0x2484f6*/
        {
          if ( *((_QWORD *)&v38 + 1) > 0xFu ) /*0x24854b*/
          {
            v22 = (void *)v37; /*0x248550*/
            if ( (unsigned __int64)(*((_QWORD *)&v38 + 1) + 1LL) >= 0x1000 ) /*0x24855e*/
            {
              v22 = *(void **)(v37 - 8); /*0x248564*/
              if ( (unsigned __int64)(v37 - (_QWORD)v22 - 8) > 0x1F ) /*0x248573*/
LABEL_41:
                invoke_watson(0, 0, 0, 0, 0); /*0x24863d*/
            }
            j_j_free(v22); /*0x248579*/
          }
        }
        else
        {
          v20 = *((_QWORD *)v12 + 12); /*0x2484f8*/
          if ( v20 > 0xF ) /*0x248500*/
          {
            v21 = *(_QWORD **)v13; /*0x248505*/
            if ( v20 + 1 >= 0x1000 ) /*0x24850f*/
            {
              if ( (unsigned __int64)v21 - *(v21 - 1) - 8 > 0x1F ) /*0x248524*/
                goto LABEL_41; /*0x248524*/
              v21 = (_QWORD *)*(v21 - 1); /*0x24852a*/
            }
            j_j_free(v21); /*0x24852d*/
          }
          *v13 = v37; /*0x248536*/
          *(_OWORD *)(v12 + 88) = v38; /*0x24853d*/
        }
        v23 = cocos2d::CCArray::stringAtIndex(v10, 3u); /*0x248586*/
        v24 = cocos2d::CCString::getCString(v23); /*0x24858f*/
        *((_QWORD *)v12 + 13) = atoll(v24); /*0x24859e*/
        if ( cocos2d::CCArray::count(v10) >= 5 ) /*0x2485ae*/
        {
          v25 = cocos2d::CCArray::stringAtIndex(v10, 4u); /*0x2485b8*/
          v12[112] = cocos2d::CCString::intValue(v25) != 0; /*0x2485cc*/
        }
        cocos2d::CCArray::addObject(v2, (struct cocos2d::CCObject *)v12); /*0x2485d5*/
      }
    }
  }
  return v2; /*0x2485fa*/
}

// [4/26] Address: 0x283230
// Method: InfoLayer::toggleSmallCommentMode
// Hidden C++ exception states: #wind=1
__int64 __fastcall InfoLayer_toggleSmallCommentMode(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  void *v6; // [rsp+50h] [rbp+8h]

  if ( !*(_QWORD *)&qword_905FB0 ) /*0x283245*/
  {
    v6 = operator new(0x690u); /*0x283251*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x28325f*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x283270*/
  }
  v2 = (_QWORD *)sub_220990(a1, v5, 0); /*0x28327f*/
  v3 = (_QWORD *)(a1 + 360); /*0x283282*/
  if ( v3 != v2 ) /*0x28328c*/
  {
    sub_271550(v3); /*0x283291*/
    *v3 = *v2; /*0x283299*/
    v3[1] = v2[1]; /*0x2832a0*/
    v3[2] = v2[2]; /*0x2832a8*/
    *v2 = 0; /*0x2832ae*/
    v2[1] = 0; /*0x2832b1*/
    v2[2] = 0; /*0x2832b5*/
  }
  return sub_271550(v5); /*0x2832c3*/
}

// [5/26] Address: 0x3c9e50
// Method: InfoLayer::~InfoLayer
// Hidden C++ exception states: #wind=1
char *__fastcall InfoLayer__dtor_InfoLayer(char *Block, char a2)
{
  char *v4; // rdi
  char *v5; // rsi
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  __int64 v10; // rax
  void *v11; // rax
  char *v12; // rcx
  char *v13; // rcx
  cocos2d::CCNotificationCenter *v14; // rax

  *(_QWORD *)Block = &InfoLayer::`vftable'; /*0x3c9e70*/
  *((_QWORD *)Block + 40) = &InfoLayer::`vftable'; /*0x3c9e7a*/
  *((_QWORD *)Block + 41) = &InfoLayer::`vftable'; /*0x3c9e88*/
  *((_QWORD *)Block + 42) = &InfoLayer::`vftable'; /*0x3c9e96*/
  *((_QWORD *)Block + 43) = &InfoLayer::`vftable'; /*0x3c9ea4*/
  *((_QWORD *)Block + 44) = &InfoLayer::`vftable'; /*0x3c9eb2*/
  *((_QWORD *)Block + 51) = &InfoLayer::`vftable'; /*0x3c9ec0*/
  *((_QWORD *)Block + 54) = &InfoLayer::`vftable'; /*0x3c9ece*/
  *((_QWORD *)Block + 68) = &InfoLayer::`vftable'; /*0x3c9edc*/
  v4 = Block + 664; /*0x3c9ee3*/
  *((_QWORD *)Block + 83) = &InfoLayer::`vftable'; /*0x3c9ef1*/
  v5 = Block + 672; /*0x3c9ef4*/
  *((_QWORD *)Block + 84) = &InfoLayer::`vftable'; /*0x3c9f02*/
  *((_QWORD *)Block + 85) = &InfoLayer::`vftable'; /*0x3c9f0c*/
  *((_QWORD *)Block + 86) = &InfoLayer::`vftable'; /*0x3c9f1a*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x3c9f21*/
  if ( v6 ) /*0x3c9f2b*/
    cocos2d::CCObject::release(v6); /*0x3c9f2d*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 88); /*0x3c9f33*/
  if ( v7 ) /*0x3c9f3d*/
    cocos2d::CCObject::release(v7); /*0x3c9f3f*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 89); /*0x3c9f45*/
  if ( v8 ) /*0x3c9f4f*/
    cocos2d::CCObject::release(v8); /*0x3c9f51*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 90); /*0x3c9f57*/
  if ( v9 ) /*0x3c9f61*/
    cocos2d::CCObject::release(v9); /*0x3c9f63*/
  v10 = *(_QWORD *)&qword_905FB0; /*0x3c9f69*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3c9f73*/
  {
    v11 = operator new(0x690u); /*0x3c9f7a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0x3c9f87*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3c9f98*/
    v10 = *(_QWORD *)&qword_905FB0; /*0x3c9f9a*/
  }
  v12 = *(char **)(v10 + 1368); /*0x3c9fa1*/
  if ( v12 && v12 == v4 ) /*0x3c9fb2*/
    *(_QWORD *)(v10 + 1368) = 0; /*0x3c9fb4*/
  v13 = *(char **)(v10 + 1376); /*0x3c9fbb*/
  if ( v13 && v13 == v5 ) /*0x3c9fca*/
    *(_QWORD *)(v10 + 1376) = 0; /*0x3c9fcc*/
  v14 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(v13, 0); /*0x3c9fd3*/
  cocos2d::CCNotificationCenter::removeObserver(v14, (struct cocos2d::CCObject *)Block, "CommentCellToggleNotification"); /*0x3c9fe6*/
  sub_821C0(Block + 936); /*0x3c9ff3*/
  sub_3C310(Block + 728); /*0x3c9fff*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x3ca007*/
  if ( (a2 & 1) != 0 ) /*0x3ca011*/
    j_j_free(Block); /*0x3ca01b*/
  return Block; /*0x3ca023*/
}

// [6/26] Address: 0x3cc500
// Method: InfoLayer::getSpriteButton
// Hidden C++ exception states: #wind=1
_DWORD *__fastcall InfoLayer_getSpriteButton(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const struct cocos2d::CCPoint *a6)
{
  unsigned int v9; // esi
  cocos2d::CCObject *v10; // rbx
  int v11; // r9d
  __int64 v12; // rax
  _DWORD *v13; // rbx
  int v14; // xmm6_4
  void *v16; // [rsp+98h] [rbp+20h] BYREF

  v9 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName(a2); /*0x3cc529*/
  v16 = operator new(0x2C8u); /*0x3cc536*/
  v10 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v16); /*0x3cc546*/
  if ( v10 ) /*0x3cc54c*/
  {
    if ( (unsigned __int8)sub_41960((_DWORD)v10, v9, 32, v11, 1107296256, 1065353216) ) /*0x3cc590*/
    {
      cocos2d::CCObject::autorelease(v10); /*0x3cc59c*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x3cc5ac*/
      v10 = 0; /*0x3cc5af*/
    }
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, a6); /*0x3cc5c1*/
  cocos2d::CCPoint::operator=((char *)v10 + 672, v12); /*0x3cc5d1*/
  sub_420E0(v10); /*0x3cc5da*/
  v13 = (_DWORD *)CCMenuItemSpriteExtra_create(v10, 0, a1, a3); /*0x3cc5ef*/
  v14 = a5; /*0x3cc5fc*/
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 160LL))(v13); /*0x3cc60b*/
  v13[101] = v14; /*0x3cc60d*/
  if ( a4 ) /*0x3cc618*/
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a4 + 464LL))(a4, v13); /*0x3cc62a*/
  return v13; /*0x3cc630*/
}

// [7/26] Address: 0x3cc650
// Method: InfoLayer::setupLevelInfo
__int64 __fastcall InfoLayer_setupLevelInfo(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edx
  int v5; // ebx
  __int64 v6; // rbx
  _DWORD *v7; // rax
  cocos2d::CCString *v8; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v10; // rsi
  __int64 v11; // r14
  const char *v12; // rax
  cocos2d::CCString *v13; // rax
  struct cocos2d::CCLabelBMFont *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  float v19; // [rsp+50h] [rbp+8h] BYREF
  float v20; // [rsp+54h] [rbp+Ch]
  char v21; // [rsp+58h] [rbp+10h] BYREF
  char v22; // [rsp+60h] [rbp+18h] BYREF
  char v23; // [rsp+68h] [rbp+20h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x3cc65d*/
  cocos2d::CCDirector::getWinSize(v2, &v19); /*0x3cc66b*/
  v3 = *(_QWORD *)(a1 + 712); /*0x3cc671*/
  if ( v3 ) /*0x3cc67b*/
  {
    v4 = *(_DWORD *)(v3 + 348); /*0x3cc67d*/
    v5 = *(_DWORD *)(v3 + 344); /*0x3cc683*/
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 720); /*0x3cc68b*/
    if ( v6 ) /*0x3cc695*/
    {
      v4 = *(_DWORD *)(v6 + 332); /*0x3cc697*/
      v5 = *(_DWORD *)(v6 + 320); /*0x3cc69d*/
    }
    else
    {
      v7 = *(_DWORD **)(a1 + 696); /*0x3cc6a5*/
      v5 = v7[82] - v7[83]; /*0x3cc6b2*/
      v4 = v7[215]; /*0x3cc6b8*/
    }
  }
  v8 = cocos2d::CCString::createWithFormat("Version: %i", v4);
  CString = cocos2d::CCString::getCString(v8); /*0x3cc6ce*/
  v10 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt"); /*0x3cc6f1*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x3cc701*/
    *(_QWORD *)(a1 + 584),
    v10,
    2);
  v11 = cocos2d::CCMenu::create(); /*0x3cc71a*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v11, 2); /*0x3cc720*/
  v12 = "ID: na";
  if ( v5 )
  {
    v13 = cocos2d::CCString::createWithFormat("ID: %i", v5);
    v12 = cocos2d::CCString::getCString(v13); /*0x3cc744*/
  }
  v14 = cocos2d::CCLabelBMFont::create(v12, "goldFont.fnt"); /*0x3cc76d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, v19 * 0.5, (float)((float)(v20 * 0.5) - 145.0) + 14.0); /*0x3cc78e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, -50.0, 0.0); /*0x3cc7a4*/
  cocos2d::CCPoint::operator+(&v21, &v22, v15); /*0x3cc7b7*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, char *))(*(_QWORD *)v10 + 184LL))(v10, &v22); /*0x3cc7c8*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v10 + 160LL))(v10); /*0x3cc7dc*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v14 + 160LL))(v14); /*0x3cc7f0*/
  v16 = CCMenuItemSpriteExtra_create(v14, 0, a1, sub_3CCA60); /*0x3cc805*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 464LL))(v11, v16); /*0x3cc81a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, 50.0, 0.0); /*0x3cc82d*/
  cocos2d::CCPoint::operator+(&v21, &v22, v17); /*0x3cc840*/
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 184LL))(v11, &v22); /*0x3cc857*/
}

// [8/26] Address: 0x3ccb60
// Method: InfoLayer::FLAlert_Clicked
__int64 __fastcall InfoLayer_FLAlert_Clicked(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3ccb6f*/
  if ( (_DWORD)result == 3 ) /*0x3ccb75*/
    return InfoLayer_onComment(a1 - 680, 0); /*0x3ccb85*/
  return result; /*0x3ccb80*/
}

// [9/26] Address: 0x3ccb90
// Method: InfoLayer::onMore
_DWORD *__fastcall InfoLayer_onMore(_QWORD *a1)
{
  _DWORD *result; // rax
  signed int v2; // ecx
  char *v3; // rax

  result = (_DWORD *)a1[89]; /*0x3ccb94*/
  if ( result ) /*0x3ccb9e*/
  {
    v2 = result[91]; /*0x3ccba0*/
  }
  else
  {
    result = (_DWORD *)a1[90]; /*0x3ccba8*/
    if ( result ) /*0x3ccbb2*/
    {
      v2 = result[86]; /*0x3ccbb4*/
    }
    else
    {
      result = (_DWORD *)a1[87]; /*0x3ccbbc*/
      if ( !result ) /*0x3ccbc6*/
        return result; /*0x3ccbc6*/
      v2 = result[165] - result[166]; /*0x3ccbce*/
    }
  }
  if ( v2 > 0 ) /*0x3ccbd6*/
  {
    v3 = ProfilePage_create(v2, 0); /*0x3ccbda*/
    return (_DWORD *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 1064LL))(v3); /*0x3ccbf0*/
  }
  return result; /*0x3ccbec*/
}

// [10/26] Address: 0x3ccc00
// Method: InfoLayer::onOriginal
__int64 __fastcall InfoLayer_onOriginal(__int64 a1)
{
  cocos2d::CCString *v2; // rax
  const char *CString; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  struct cocos2d::CCScene *v6; // rax
  struct cocos2d::CCScene *v7; // rbx
  __int64 v8; // rcx
  cocos2d::CCDirector *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v2 = cocos2d::CCString::createWithFormat( /*0x3ccc27*/
         (const char *)&word_6E86F8,
         (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 696) + 1060LL) - *(_DWORD *)(*(_QWORD *)(a1 + 696) + 1064LL)));
  CString = cocos2d::CCString::getCString(v2); /*0x3ccc30*/
  v11 = 0; /*0x3ccc3b*/
  v12 = 0; /*0x3ccc40*/
  v4 = -1; /*0x3ccc45*/
  v13 = 0; /*0x3ccc4c*/
  do /*0x3ccc54*/
    ++v4; /*0x3ccc51*/
  while ( CString[v4] ); /*0x3ccc54*/
  sub_3C230(&v11); /*0x3ccc62*/
  v5 = GJSearchObject_create_0(0, &v11); /*0x3ccc6e*/
  v6 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v5); /*0x3ccc76*/
  v7 = cocos2d::CCTransitionFade::create(0.5, v6); /*0x3ccc8c*/
  v9 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v8); /*0x3ccc8f*/
  cocos2d::CCDirector::replaceScene(v9, v7); /*0x3ccc9b*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 1040LL))(*(_QWORD *)(a1 + 552), 0);
}

// [11/26] Address: 0x3cccc0
// Method: InfoLayer::onComment
// Hidden C++ exception states: #wind=6
__int64 __fastcall InfoLayer_onComment(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  cocos2d::CCString *v14; // rax
  const char *CString; // rbx
  __int64 v16; // rcx
  int v17; // eax
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rbx
  int v23; // ebx
  const char *v24; // r14
  __int64 v25; // rcx
  int v26; // r15d
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // eax
  _DWORD *v30; // rax
  __int64 v31; // rdx
  __int128 v32; // [rsp+50h] [rbp-9h] BYREF
  __int64 v33; // [rsp+60h] [rbp+7h]
  __int64 v34; // [rsp+68h] [rbp+Fh]
  __int128 v35; // [rsp+70h] [rbp+17h] BYREF
  __int64 v36; // [rsp+80h] [rbp+27h]
  __int64 v37; // [rsp+88h] [rbp+2Fh]
  void *v38; // [rsp+D0h] [rbp+77h]
  void *v39; // [rsp+D0h] [rbp+77h]
  void *v40; // [rsp+D0h] [rbp+77h]
  void *v41; // [rsp+D0h] [rbp+77h]
  void *v42; // [rsp+D0h] [rbp+77h]

  v2 = GJAccountManager_sharedState(a1); /*0x3cccdb*/
  if ( *(_DWORD *)(v2 + 360) - *(_DWORD *)(v2 + 364) <= 0 ) /*0x3cccee*/
  {
    GJAccountManager_sharedState(v3); /*0x3cccf0*/
    return sub_305EE0(v4, "post <cg>comments</c>"); /*0x3ccd01*/
  }
  v6 = qword_905FD0; /*0x3ccd06*/
  if ( !qword_905FD0 ) /*0x3ccd10*/
  {
    v38 = operator new(0x6E8u); /*0x3ccd1c*/
    qword_905FD0 = sub_2723A0(v38); /*0x3ccd29*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3ccd3a*/
    v6 = qword_905FD0; /*0x3ccd3c*/
  }
  if ( !GameManager_getGameVariable(v6, "0012") ) /*0x3ccd4a*/
  {
    v8 = qword_905FD0; /*0x3ccd57*/
    if ( !qword_905FD0 ) /*0x3ccd61*/
    {
      v39 = operator new(0x6E8u); /*0x3ccd6d*/
      qword_905FD0 = sub_2723A0(v39); /*0x3ccd7a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3ccd8b*/
      v8 = qword_905FD0; /*0x3ccd8e*/
    }
    LOBYTE(v7) = 1; /*0x3ccd95*/
    sub_27ACB0(v8, "0012", v7); /*0x3ccd9f*/
    v9 = a1 + 680; /*0x3ccda4*/
    if ( !a1 ) /*0x3ccdb0*/
      v9 = 0; /*0x3ccdb0*/
    v32 = 0; /*0x3ccdb7*/
    v33 = 0; /*0x3ccdbb*/
    v34 = 0; /*0x3ccdbf*/
    *(_QWORD *)&v32 = sub_3C460(256); /*0x3ccdd0*/
    v33 = 253; /*0x3ccdd4*/
    v34 = 255; /*0x3ccddc*/
    strcpy( /*0x3ccdee*/
      (char *)v32,
      "1. Do <cr>not</c> spam.\n"
      "2. Do <cr>not</c> harass other players.\n"
      "3. Do <cr>not</c> post inappropriate or controversial content.\n"
      "4. Do <cr>not</c> try to bypass these rules.\n"
      "<cy>These rules and their enforcement are entirely at Moderators' discretion.</c>");
    v10 = sub_3E4F0(&v35, &v32); /*0x3cce99*/
    v11 = FLAlertLayer_create_0( /*0x3ccee6*/
            v9,
            (unsigned int)"Comment Rules",
            v10,
            (unsigned int)"Next",
            0,
            1136525312,
            0,
            0,
            1065353216);
    sub_3C310(&v32); /*0x3cceed*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL))(v11, 3); /*0x3ccf01*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 1064LL))(v11); /*0x3ccf11*/
  }
  v12 = *(_QWORD *)(a1 + 704); /*0x3ccf16*/
  if ( v12 && *(_BYTE *)(a1 + 888) ) /*0x3ccf22*/
    v13 = *(_DWORD *)(v12 + 392); /*0x3ccf2b*/
  else
    v13 = sub_3CC4A0(a1); /*0x3ccf3b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3ccf45*/
  {
    v40 = operator new(0x690u); /*0x3ccf51*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v40); /*0x3ccf5e*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3ccf6f*/
  }
  v14 = cocos2d::CCString::createWithFormat("c_%i", v13); /*0x3ccf7a*/
  CString = cocos2d::CCString::getCString(v14); /*0x3ccf89*/
  v16 = *(_QWORD *)&qword_905FB0; /*0x3ccf8c*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3ccf96*/
  {
    v41 = operator new(0x690u); /*0x3ccfa2*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v41); /*0x3ccfaf*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3ccfc0*/
    v16 = *(_QWORD *)&qword_905FB0; /*0x3ccfc2*/
  }
  v17 = sub_21ED50(v16, CString); /*0x3ccfd4*/
  if ( (unsigned int)(v17 - 1) <= 0xE ) /*0x3ccfdf*/
  {
    v18 = cocos2d::CCString::createWithFormat("Please wait %i seconds before posting a new comment!", v17); /*0x3ccfee*/
    v19 = cocos2d::CCString::getCString(v18); /*0x3ccff7*/
    v32 = 0; /*0x3cd000*/
    v33 = 0; /*0x3cd006*/
    v34 = 0; /*0x3cd00a*/
    v20 = -1; /*0x3cd00e*/
    do /*0x3cd018*/
      ++v20; /*0x3cd015*/
    while ( v19[v20] ); /*0x3cd018*/
    sub_3C230(&v32); /*0x3cd025*/
    v21 = sub_3E4F0(&v35, &v32); /*0x3cd03a*/
    v22 = FLAlertLayer_create_0(0, (unsigned int)"Too fast", v21, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x3cd086*/
    sub_3C310(&v32); /*0x3cd08d*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 1064LL))(v22); /*0x3cd09f*/
  }
  if ( *(_QWORD *)(a1 + 720) ) /*0x3cd0a6*/
  {
    v23 = 6; /*0x3cd0c9*/
    if ( *(_BYTE *)(a1 + 888) ) /*0x3cd0ce*/
    {
LABEL_27:
      v24 = "Mod Comment"; /*0x3cd0d7*/
      if ( *(_QWORD *)(a1 + 704) ) /*0x3cd0e5*/
        v24 = "Add Note"; /*0x3cd0ec*/
      goto LABEL_31; /*0x3cd0ec*/
    }
  }
  else
  {
    v23 = 0; /*0x3cd0af*/
    if ( *(_BYTE *)(a1 + 888) ) /*0x3cd0b1*/
    {
      LOBYTE(v23) = *(_QWORD *)(a1 + 704) != 0; /*0x3cd0c1*/
      v23 += 7; /*0x3cd0c4*/
      goto LABEL_27; /*0x3cd0c7*/
    }
  }
  v24 = "Add Comment"; /*0x3cd0f2*/
LABEL_31:
  if ( v23 ) /*0x3cd0fb*/
    goto LABEL_35; /*0x3cd0fb*/
  v25 = qword_905FD0; /*0x3cd0fd*/
  if ( !qword_905FD0 ) /*0x3cd107*/
  {
    v42 = operator new(0x6E8u); /*0x3cd113*/
    qword_905FD0 = sub_2723A0(v42); /*0x3cd120*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3cd131*/
    v25 = qword_905FD0; /*0x3cd133*/
  }
  v26 = 140; /*0x3cd149*/
  if ( *(_DWORD *)(v25 + 1064) - *(_DWORD *)(v25 + 1068) != 2 ) /*0x3cd14f*/
LABEL_35:
    v26 = 100; /*0x3cd151*/
  v32 = 0; /*0x3cd162*/
  v33 = 0; /*0x3cd166*/
  v34 = 15; /*0x3cd16a*/
  LOBYTE(v32) = 0; /*0x3cd172*/
  v35 = 0; /*0x3cd176*/
  v36 = 0; /*0x3cd17a*/
  v37 = 0; /*0x3cd17e*/
  v27 = -1; /*0x3cd182*/
  do /*0x3cd193*/
    ++v27; /*0x3cd190*/
  while ( v24[v27] ); /*0x3cd193*/
  sub_3C230(&v35); /*0x3cd1a1*/
  v28 = *(_QWORD *)(a1 + 704); /*0x3cd1a6*/
  if ( v28 && *(_BYTE *)(a1 + 888) ) /*0x3cd1b2*/
    v29 = *(_DWORD *)(v28 + 392); /*0x3cd1bb*/
  else
    v29 = sub_3CC4A0(a1); /*0x3cd1c6*/
  v30 = (_DWORD *)ShareCommentLayer_create((unsigned int)&v35, v26, v23, v29, (__int64)&v32); /*0x3cd1e2*/
  v31 = *(_QWORD *)(a1 + 696); /*0x3cd1e7*/
  if ( v31 ) /*0x3cd1f1*/
    v30[205] = *(_DWORD *)(v31 + 936) - *(_DWORD *)(v31 + 940); /*0x3cd1ff*/
  return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 1064LL))(v30); /*0x3cd214*/
}

// [12/26] Address: 0x3cd950
// Method: InfoLayer::keyBackClicked
__int64 __fastcall InfoLayer_keyBackClicked(__int64 a1)
{
  return sub_3CD8C0(a1 - 336, 0);
}

// [13/26] Address: 0x3cdaa0
// Method: InfoLayer::loadPage
// Hidden C++ exception states: #wind=9
void __fastcall InfoLayer_loadPage(__int64 a1, int a2, char a3)
{
  int v6; // ebp
  __int64 v7; // rcx
  BOOL GameVariable; // r13d
  char v9; // cl
  int v10; // edi
  __int64 v11; // rax
  int v12; // esi
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rdx
  void *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  _QWORD *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // rdx
  char v31; // cl
  int v32; // ebp
  __int64 v33; // rax
  unsigned int v34; // edi
  void *v35; // [rsp+30h] [rbp-68h]
  void *v36; // [rsp+30h] [rbp-68h]
  void *v37; // [rsp+30h] [rbp-68h]
  void *v38; // [rsp+30h] [rbp-68h]
  void *v39; // [rsp+30h] [rbp-68h]
  void *v40; // [rsp+30h] [rbp-68h]
  void *v41; // [rsp+30h] [rbp-68h]
  void *v42; // [rsp+30h] [rbp-68h]
  void *v43; // [rsp+30h] [rbp-68h]
  void *Block[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v45; // [rsp+48h] [rbp-50h]
  unsigned __int64 v46; // [rsp+50h] [rbp-48h]

  v6 = 0; /*0x3cdacd*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 848) + 336LL))(*(_QWORD *)(a1 + 848), 0); /*0x3cdadb*/
  v7 = qword_905FD0; /*0x3cdae1*/
  if ( !qword_905FD0 ) /*0x3cdaeb*/
  {
    v35 = operator new(0x6E8u); /*0x3cdaf7*/
    qword_905FD0 = sub_2723A0(v35); /*0x3cdb05*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3cdb16*/
    v7 = qword_905FD0; /*0x3cdb18*/
  }
  GameVariable = GameManager_getGameVariable(v7, "0069"); /*0x3cdb2b*/
  v9 = *(_BYTE *)(a1 + 888); /*0x3cdb2f*/
  if ( v9 ) /*0x3cdb38*/
    v10 = (*(_QWORD *)(a1 + 704) != 0) + 4; /*0x3cdb4f*/
  else
    v10 = *(_DWORD *)(a1 + 884); /*0x3cdb3a*/
  v11 = *(_QWORD *)(a1 + 704); /*0x3cdb52*/
  if ( v11 && v9 ) /*0x3cdb60*/
    v12 = *(_DWORD *)(v11 + 392); /*0x3cdb62*/
  else
    v12 = sub_3CC4A0(a1); /*0x3cdb72*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3cdb7c*/
  {
    v36 = operator new(0x690u); /*0x3cdb88*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v36); /*0x3cdb96*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cdba7*/
  }
  v13 = cocos2d::CCString::createWithFormat("comment_%i_%i_%i_%i", v12, a2, GameVariable, v10); /*0x3cdbbc*/
  CString = cocos2d::CCString::getCString(v13); /*0x3cdbc5*/
  *(_OWORD *)Block = 0; /*0x3cdbce*/
  v45 = 0; /*0x3cdbd3*/
  v46 = 0; /*0x3cdbd8*/
  v15 = -1; /*0x3cdbdd*/
  v16 = -1; /*0x3cdbe4*/
  do /*0x3cdbf3*/
    ++v16; /*0x3cdbf0*/
  while ( CString[v16] ); /*0x3cdbf3*/
  sub_3C230(Block); /*0x3cdc02*/
  v17 = (_QWORD *)(a1 + 728); /*0x3cdc07*/
  sub_58AD0(a1 + 728, Block); /*0x3cdc16*/
  v18 = v46; /*0x3cdc1b*/
  if ( v46 > 0xF ) /*0x3cdc24*/
  {
    v19 = Block[0]; /*0x3cdc29*/
    if ( v46 + 1 >= 0x1000 ) /*0x3cdc38*/
    {
      v19 = (void *)*((_QWORD *)Block[0] - 1); /*0x3cdc3e*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F ) /*0x3cdc4d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3cdc5e*/
    }
    j_j_free(v19); /*0x3cdc65*/
  }
  LOBYTE(v18) = 1; /*0x3cdc74*/
  (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1 + 760) + 336LL))(*(_QWORD *)(a1 + 760), v18); /*0x3cdc76*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 776) + 336LL))(*(_QWORD *)(a1 + 776), 0); /*0x3cdc88*/
  if ( a2 <= 0 ) /*0x3cdc9b*/
    v20 = 0; /*0x3cdca1*/
  else
    LOBYTE(v20) = 1; /*0x3cdc9d*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 800) + 336LL))(*(_QWORD *)(a1 + 800), v20); /*0x3cdca3*/
  v21 = (_QWORD *)(a1 + 728); /*0x3cdca9*/
  if ( *(_QWORD *)(a1 + 752) > 0xFu ) /*0x3cdcb1*/
    v21 = (_QWORD *)*v17; /*0x3cdcb3*/
  v22 = *(_QWORD *)&qword_905FB0; /*0x3cdcb6*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3cdcc0*/
  {
    v37 = operator new(0x690u); /*0x3cdccc*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v37); /*0x3cdcda*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cdceb*/
    v22 = *(_QWORD *)&qword_905FB0; /*0x3cdcee*/
  }
  if ( sub_23AF70(v22, v21) ) /*0x3cdcf8*/
    LOBYTE(v23) = 1; /*0x3cdd0c*/
  else
    v23 = 0; /*0x3cdd10*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 792) + 336LL))(*(_QWORD *)(a1 + 792), v23); /*0x3cdd12*/
  if ( *(_QWORD *)(a1 + 752) > 0xFu ) /*0x3cdd1e*/
    v17 = (_QWORD *)*v17; /*0x3cdd20*/
  v24 = *(_QWORD *)&qword_905FB0; /*0x3cdd23*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3cdd2d*/
  {
    v38 = operator new(0x690u); /*0x3cdd39*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v38); /*0x3cdd47*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cdd58*/
    v24 = *(_QWORD *)&qword_905FB0; /*0x3cdd5b*/
  }
  v25 = sub_21E690(v24, v17); /*0x3cdd6a*/
  if ( v25 ) /*0x3cdd70*/
  {
    v26 = (_QWORD *)(a1 + 728); /*0x3cdd76*/
    if ( *(_QWORD *)(a1 + 752) > 0xFu ) /*0x3cdd82*/
      v26 = (_QWORD *)*v26; /*0x3cdd84*/
    v27 = *(_QWORD *)&qword_905FB0; /*0x3cdd87*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3cdd91*/
    {
      v39 = operator new(0x690u); /*0x3cdd9d*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v39); /*0x3cddab*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cddbc*/
      v27 = *(_QWORD *)&qword_905FB0; /*0x3cddbf*/
    }
    v28 = sub_21E790(v27, v26); /*0x3cddc9*/
    *(_OWORD *)Block = 0; /*0x3cddd1*/
    v45 = 0; /*0x3cddd6*/
    v46 = 0; /*0x3cdddb*/
    do /*0x3cdde3*/
      ++v15; /*0x3cdde0*/
    while ( *(_BYTE *)(v28 + v15) ); /*0x3cdde3*/
    sub_3C230(Block); /*0x3cddf4*/
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)(a1 + 664) + 24LL))(a1 + 664, Block); /*0x3cde1d*/
    (**(void (__fastcall ***)(__int64, __int64))(a1 + 664))(a1 + 664, v25); /*0x3cde42*/
  }
  else
  {
    if ( !a3 ) /*0x3cde4c*/
      sub_3CE030(a1, 0); /*0x3cde53*/
    v29 = *(_QWORD *)&qword_905FB0; /*0x3cde5f*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3cde69*/
    {
      v40 = operator new(0x690u); /*0x3cde75*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v40); /*0x3cde83*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cde90*/
      v29 = *(_QWORD *)&qword_905FB0; /*0x3cde93*/
    }
    *(_QWORD *)(v29 + 1368) = a1 + 664; /*0x3cde9a*/
    v30 = qword_905FD0; /*0x3cdea1*/
    if ( !qword_905FD0 ) /*0x3cdeab*/
    {
      v41 = operator new(0x6E8u); /*0x3cdeb7*/
      qword_905FD0 = sub_2723A0(v41); /*0x3cdec5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3cded6*/
      v30 = qword_905FD0; /*0x3cded8*/
      v29 = *(_QWORD *)&qword_905FB0; /*0x3cdedf*/
    }
    if ( *(_DWORD *)(v30 + 692) == *(_DWORD *)(v30 + 696) ) /*0x3cdef2*/
    {
      *(_BYTE *)(a1 + 880) = 1; /*0x3cdef4*/
      if ( !v29 ) /*0x3cdefe*/
      {
        v42 = operator new(0x690u); /*0x3cdf0a*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v42); /*0x3cdf18*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cdf29*/
        v29 = *(_QWORD *)&qword_905FB0; /*0x3cdf2b*/
      }
      GameLevelManager_updateUserScore(v29); /*0x3cdf35*/
    }
    else
    {
      v31 = *(_BYTE *)(a1 + 888); /*0x3cdf3f*/
      if ( v31 ) /*0x3cdf48*/
      {
        LOBYTE(v6) = *(_QWORD *)(a1 + 704) != 0; /*0x3cdf5a*/
        v32 = v6 + 4; /*0x3cdf5e*/
      }
      else
      {
        v32 = *(_DWORD *)(a1 + 884); /*0x3cdf4a*/
      }
      v33 = *(_QWORD *)(a1 + 704); /*0x3cdf61*/
      if ( v33 && v31 ) /*0x3cdf6f*/
        v34 = *(_DWORD *)(v33 + 392); /*0x3cdf71*/
      else
        v34 = sub_3CC4A0(a1); /*0x3cdf81*/
      if ( !v29 ) /*0x3cdf86*/
      {
        v43 = operator new(0x690u); /*0x3cdf92*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v43); /*0x3cdfa0*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cdfb1*/
        v29 = *(_QWORD *)&qword_905FB0; /*0x3cdfb3*/
      }
      GameLevelManager_getLevelComments(v29, v34, a2, *(_DWORD *)(a1 + 864), GameVariable, v32); /*0x3cdfd2*/
    }
    if ( !a3 ) /*0x3cdfda*/
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 768) + 360LL))( /*0x3cdff4*/
        *(_QWORD *)(a1 + 768) + 360LL,
        " ");
  }
  *(_DWORD *)(a1 + 876) = a2; /*0x3cdff6*/
}

// [14/26] Address: 0x3ce470
// Method: InfoLayer::loadCommentsFinished
__int64 __fastcall InfoLayer_loadCommentsFinished(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_3CD960(a1 - 664, a3); /*0x3ce48f*/
  if ( (_BYTE)result ) /*0x3ce496*/
  {
    sub_3CE030(a1 - 664, a2); /*0x3ce4a2*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 336LL))(*(_QWORD *)(a1 + 96), 0); /*0x3ce4b0*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 336LL))(*(_QWORD *)(a1 + 112), 0); /*0x3ce4bf*/
  }
  return result; /*0x3ce4c5*/
}

// [15/26] Address: 0x3ce4e0
// Method: InfoLayer::loadCommentsFailed
__int64 __fastcall InfoLayer_loadCommentsFailed(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = sub_3CD960(a1 - 664, a2); /*0x3ce4f0*/
  if ( (_BYTE)result ) /*0x3ce4f7*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 336LL))(*(_QWORD *)(a1 + 96), 0); /*0x3ce502*/
    LOBYTE(v4) = 1; /*0x3ce50c*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 112) + 336LL))(*(_QWORD *)(a1 + 112), v4); /*0x3ce516*/
  }
  return result; /*0x3ce51d*/
}

// [16/26] Address: 0x3ce530
// Method: InfoLayer::setupPageInfo
// Hidden C++ exception states: #wind=2
double __fastcall InfoLayer_setupPageInfo(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // r8
  cocos2d::CCArray *v7; // rsi
  void *v8; // r8
  cocos2d::CCString *v9; // rax
  cocos2d::CCString *v10; // rax
  cocos2d::CCString *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // edx
  int v16; // r8d
  cocos2d::CCString *v17; // rax
  const char *CString; // rax
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __m128i si128; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int8)sub_3CD960(a1 - 664, a3) ) /*0x3ce55c*/
  {
    v5 = a2; /*0x3ce569*/
    if ( a2[3] > 0xFu ) /*0x3ce571*/
      v5 = (_QWORD *)*a2; /*0x3ce573*/
    *(_OWORD *)Block = 0; /*0x3ce579*/
    si128 = 0; /*0x3ce581*/
    v6 = -1; /*0x3ce587*/
    do /*0x3ce593*/
      ++v6; /*0x3ce590*/
    while ( *((_BYTE *)v5 + v6) ); /*0x3ce593*/
    sub_3C230(Block); /*0x3ce59f*/
    v7 = (cocos2d::CCArray *)sub_20BF00(Block); /*0x3ce5af*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x3ce5bb*/
    {
      v8 = Block[0]; /*0x3ce5c0*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x3ce5cf*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x3ce5d5*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x3ce5e4*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3ce5f9*/
      }
      j_j_free(v8); /*0x3ce603*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x3ce610*/
    LOBYTE(Block[0]) = 0; /*0x3ce616*/
    if ( cocos2d::CCArray::count(v7) >= 3 ) /*0x3ce627*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(v7, 0); /*0x3ce632*/
      *(_DWORD *)(a1 + 200) = cocos2d::CCString::intValue(v9); /*0x3ce641*/
      v10 = cocos2d::CCArray::objectAtIndex(v7, 1u); /*0x3ce64f*/
      *(_DWORD *)(a1 + 204) = cocos2d::CCString::intValue(v10); /*0x3ce65e*/
      v11 = cocos2d::CCArray::objectAtIndex(v7, 2u); /*0x3ce66c*/
      *(_DWORD *)(a1 + 208) = cocos2d::CCString::intValue(v11); /*0x3ce67b*/
      if ( *(_DWORD *)(a1 + 204) ) /*0x3ce68b*/
        LOBYTE(v12) = 1; /*0x3ce698*/
      else
        v12 = 0; /*0x3ce694*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 136) + 336LL))(*(_QWORD *)(a1 + 136), v12); /*0x3ce69a*/
      if ( *(_DWORD *)(a1 + 204) + *(_DWORD *)(a1 + 208) < *(_DWORD *)(a1 + 200) ) /*0x3ce6bc*/
        LOBYTE(v13) = 1; /*0x3ce6c2*/
      else
        v13 = 0; /*0x3ce6be*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 128) + 336LL))(*(_QWORD *)(a1 + 128), v13); /*0x3ce6c4*/
      v14 = *(_DWORD *)(a1 + 200); /*0x3ce6cb*/
      v15 = *(_DWORD *)(a1 + 204); /*0x3ce6d2*/
      v16 = v15 + *(_DWORD *)(a1 + 208); /*0x3ce6df*/
      if ( v16 >= v14 ) /*0x3ce6e5*/
        v16 = *(_DWORD *)(a1 + 200); /*0x3ce6e5*/
      v17 = cocos2d::CCString::createWithFormat("%i to %i of %i", v15 + 1, v16, v14); /*0x3ce6f2*/
      CString = cocos2d::CCString::getCString(v17); /*0x3ce6fb*/
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 104) + 360LL))( /*0x3ce715*/
        *(_QWORD *)(a1 + 104) + 360LL,
        CString);
    }
  }
  return sub_3C310(a2); /*0x3ce721*/
}

// [17/26] Address: 0x3ce740
// Method: InfoLayer::updateUserScoreFinished
// Hidden C++ exception states: #wind=2
void __fastcall InfoLayer_updateUserScoreFinished(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned int v5; // eax
  int v6; // r8d
  void *v7; // [rsp+50h] [rbp+8h]
  void *v8; // [rsp+50h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 216) ) /*0x3ce755*/
  {
    *(_BYTE *)(a1 + 216) = 0; /*0x3ce762*/
    if ( *(_BYTE *)(a1 + 224) ) /*0x3ce769*/
      v2 = (*(_QWORD *)(a1 + 40) != 0) + 4; /*0x3ce784*/
    else
      v2 = *(_DWORD *)(a1 + 220); /*0x3ce772*/
    v3 = qword_905FD0; /*0x3ce787*/
    if ( !qword_905FD0 ) /*0x3ce791*/
    {
      v7 = operator new(0x6E8u); /*0x3ce79d*/
      qword_905FD0 = sub_2723A0(v7); /*0x3ce7ab*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3ce7bc*/
      v3 = qword_905FD0; /*0x3ce7be*/
    }
    v4 = *(_QWORD *)&qword_905FB0; /*0x3ce7c5*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3ce7cf*/
    {
      v8 = operator new(0x690u); /*0x3ce7db*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v8); /*0x3ce7e9*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3ce7f6*/
      v4 = *(_QWORD *)&qword_905FB0; /*0x3ce7f9*/
    }
    GameManager_getGameVariable(v3, "0069"); /*0x3ce80a*/
    v5 = sub_3CC4A0(a1 - 664); /*0x3ce81a*/
    GameLevelManager_getLevelComments(v4, v5, *(_DWORD *)(a1 + 212), *(_DWORD *)(a1 + 200), v6, v2); /*0x3ce83b*/
  }
}

// [18/26] Address: 0x3ce880
// Method: InfoLayer::commentUploadFinished
// Hidden C++ exception states: #wind=1
void __fastcall InfoLayer_commentUploadFinished(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h]

  v2 = a2; /*0x3ce886*/
  if ( !*(_QWORD *)(a1 + 32) || *(_BYTE *)(a1 + 216) ) /*0x3ce890*/
  {
    v3 = a1 - 672; /*0x3ce89d*/
    v4 = *(_QWORD *)(a1 - 672 + 704); /*0x3ce8a4*/
    if ( v4 && *(_BYTE *)(v3 + 888) ) /*0x3ce8b0*/
      v5 = *(_DWORD *)(v4 + 392); /*0x3ce8b9*/
    else
      v5 = sub_3CC4A0(a1 - 672); /*0x3ce8c4*/
    if ( v2 == v5 ) /*0x3ce8cc*/
    {
      v6 = qword_905FD0; /*0x3ce8ce*/
      if ( !qword_905FD0 ) /*0x3ce8d8*/
      {
        v7 = operator new(0x6E8u); /*0x3ce8e4*/
        qword_905FD0 = sub_2723A0(v7); /*0x3ce8f2*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3ce903*/
        v6 = qword_905FD0; /*0x3ce905*/
      }
      sub_27ACB0(v6, "0069", 0); /*0x3ce916*/
      InfoLayer_updateCommentModeButtons(v3); /*0x3ce91e*/
      InfoLayer_loadPage(v3, 0, 0); /*0x3ce930*/
    }
  }
}

// [19/26] Address: 0x3ce940
// Method: InfoLayer::commentUploadFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall InfoLayer_commentUploadFailed(__int64 a1, int a2, int a3)
{
  int v3; // r9d
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int128 v8; // [rsp+50h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  _BYTE v11[40]; // [rsp+70h] [rbp-28h] BYREF

  v3 = a2; /*0x3ce949*/
  result = *(_QWORD *)(a1 + 32); /*0x3ce94c*/
  if ( !result || *(_BYTE *)(a1 + 216) ) /*0x3ce955*/
  {
    v5 = a1 - 672; /*0x3ce962*/
    if ( result && *(_BYTE *)(v5 + 888) ) /*0x3ce96e*/
      result = *(unsigned int *)(result + 392); /*0x3ce977*/
    else
      result = sub_3CC4A0(v5); /*0x3ce97f*/
    if ( v3 == (_DWORD)result && a3 == -1 ) /*0x3ce991*/
    {
      v8 = 0; /*0x3ce99a*/
      *(_QWORD *)&v8 = sub_3C460(48); /*0x3ce9b8*/
      v9 = 46; /*0x3ce9bd*/
      v10 = 47; /*0x3ce9c6*/
      strcpy((char *)v8, "Comment upload failed. Please try again later."); /*0x3ce9d6*/
      v6 = sub_3E4F0(v11, &v8); /*0x3cea1f*/
      v7 = FLAlertLayer_create_0(0, (unsigned int)"Failed", v6, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x3cea6a*/
      sub_3C310(&v8); /*0x3cea72*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0x3cea84*/
    }
  }
  return result; /*0x3cea86*/
}

// [20/26] Address: 0x3ceef0
// Method: InfoLayer::toggleCommentMode
// Hidden C++ exception states: #wind=2
void __fastcall InfoLayer_toggleCommentMode(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rcx
  void *v6; // [rsp+38h] [rbp+10h]
  void *v7; // [rsp+38h] [rbp+10h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3ceeff*/
  v5 = qword_905FD0; /*0x3cef02*/
  if ( v3 ) /*0x3cef0b*/
  {
    if ( !qword_905FD0 ) /*0x3cef4c*/
    {
      v7 = operator new(0x6E8u); /*0x3cef58*/
      qword_905FD0 = sub_2723A0(v7); /*0x3cef66*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3cef77*/
      v5 = qword_905FD0; /*0x3cef79*/
    }
    v4 = 0; /*0x3cef80*/
  }
  else
  {
    if ( !qword_905FD0 ) /*0x3cef10*/
    {
      v6 = operator new(0x6E8u); /*0x3cef1c*/
      qword_905FD0 = sub_2723A0(v6); /*0x3cef2a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3cef3b*/
      v5 = qword_905FD0; /*0x3cef3d*/
    }
    LOBYTE(v4) = 1; /*0x3cef44*/
  }
  sub_27ACB0(v5, "0069", v4); /*0x3cef8a*/
  InfoLayer_updateCommentModeButtons(a1); /*0x3cef92*/
  InfoLayer_loadPage(a1, 0, 0); /*0x3cefa4*/
}

// [21/26] Address: 0x3cefb0
// Method: InfoLayer::updateCommentModeButtons
__int64 __fastcall InfoLayer_updateCommentModeButtons(__int64 a1)
{
  __int64 v2; // rcx
  bool GameVariable; // di
  __int64 v4; // rax
  const char *v5; // rbx
  const char *v6; // rdx
  __int64 v7; // rax
  void *v9; // [rsp+30h] [rbp+8h]

  v2 = qword_905FD0; /*0x3cefc7*/
  if ( !qword_905FD0 ) /*0x3cefd1*/
  {
    v9 = operator new(0x6E8u); /*0x3cefdd*/
    qword_905FD0 = sub_2723A0(v9); /*0x3cefeb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3ceffc*/
    v2 = qword_905FD0; /*0x3ceffe*/
  }
  GameVariable = GameManager_getGameVariable(v2, "0069"); /*0x3cf011*/
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 808) + 952LL))(*(_QWORD *)(a1 + 808)); /*0x3cf01e*/
  v5 = "GJ_button_01.png"; /*0x3cf02b*/
  v6 = "GJ_button_01.png"; /*0x3cf032*/
  if ( GameVariable ) /*0x3cf038*/
    v6 = "GJ_button_02.png"; /*0x3cf038*/
  sub_41FC0(v4, v6); /*0x3cf03f*/
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 816) + 952LL))(*(_QWORD *)(a1 + 816)); /*0x3cf04e*/
  if ( !GameVariable ) /*0x3cf057*/
    v5 = "GJ_button_02.png"; /*0x3cf057*/
  sub_41FC0(v7, v5); /*0x3cf061*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 808) + 936LL))(*(_QWORD *)(a1 + 808), !GameVariable); /*0x3cf077*/
  return (*(__int64 (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 816) + 936LL))(
           *(_QWORD *)(a1 + 816),
           GameVariable);
}

// [22/26] Address: 0x3cf320
// Method: InfoLayer::show
__int64 __fastcall InfoLayer_show(__int64 a1)
{
  unsigned __int8 v3; // al
  float v4; // xmm6_4
  struct cocos2d::CCActionInterval *v5; // rax
  struct cocos2d::CCAction *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct cocos2d::CCAction *v9; // rax
  __int64 v10; // rdx

  if ( *(_BYTE *)(a1 + 596) ) /*0x3cf326*/
    return FLAlertLayer_show(a1); /*0x3cf337*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 408) + 32LL))(a1 + 408); /*0x3cf354*/
  v4 = (float)v3; /*0x3cf370*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 160LL))(*(_QWORD *)(a1 + 584)); /*0x3cf373*/
  v5 = cocos2d::CCScaleTo::create(0.30000001, 1.0); /*0x3cf389*/
  v6 = cocos2d::CCEaseElasticOut::create(v5, 1.6); /*0x3cf39a*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 584), v6); /*0x3cf3aa*/
  v8 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(v7) + 272); /*0x3cf3bd*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x3cf3c4*/
    v8 = *(_QWORD *)(a1 + 568); /*0x3cf3ce*/
  if ( !*(_DWORD *)(a1 + 592) ) /*0x3cf3b6*/
    *(_DWORD *)(a1 + 592) = 105; /*0x3cf3dd*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 456LL))(v8, a1); /*0x3cf3ea*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, 0); /*0x3cf400*/
  v9 = cocos2d::CCFadeTo::create(0.14, (int)v4); /*0x3cf40f*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v9); /*0x3cf41b*/
  LOBYTE(v10) = 1; /*0x3cf424*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, v10); /*0x3cf332*/
}

// [23/26] Address: 0x3d0380
// Method: InfoLayer::adminActionConfirmed
__int64 __fastcall InfoLayer_adminActionConfirmed(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 == 4 ) /*0x3d0383*/
    return sub_3D03A0(a1 - 688, a4); /*0x3d038f*/
  return result; /*0x3d0394*/
}

// [24/26] Address: 0x3d0660
// Method: InfoLayer::bulkCommentDeleteFinished
// Hidden C++ exception states: #wind=2
void __fastcall InfoLayer_bulkCommentDeleteFinished(__int64 a1, int a2)
{
  __int64 *v3; // r12
  const char *v4; // r8
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void **v11; // r14
  char *v12; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  char *v18; // rax
  __int128 v19; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+48h] [rbp-41h]
  __int128 v22; // [rsp+50h] [rbp-39h] BYREF
  __int64 v23; // [rsp+60h] [rbp-29h]
  __int64 v24; // [rsp+68h] [rbp-21h]
  __int128 *v25; // [rsp+70h] [rbp-19h]
  void *Src[2]; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp+7h]
  unsigned __int64 v28; // [rsp+98h] [rbp+Fh]

  v3 = (__int64 *)(a1 - 672); /*0x3d068c*/
  sub_3CFDB0(a1 - 672); /*0x3d0696*/
  SetGroupIDLayer_onClose(v3, 0); /*0x3d06a0*/
  v4 = (const char *)&unk_70802C; /*0x3d06ac*/
  if ( a2 == 1 ) /*0x3d06b6*/
    v4 = &byte_6E86E0; /*0x3d06b6*/
  v5 = cocos2d::CCString::createWithFormat("Deleted %i comment%s", a2, v4); /*0x3d06c3*/
  CString = cocos2d::CCString::getCString(v5); /*0x3d06cc*/
  *(_OWORD *)Src = 0; /*0x3d06d5*/
  v27 = 0; /*0x3d06dc*/
  v28 = 0; /*0x3d06e0*/
  v7 = -1; /*0x3d06e4*/
  do /*0x3d06f3*/
    ++v7; /*0x3d06f0*/
  while ( CString[v7] ); /*0x3d06f3*/
  sub_3C230(Src); /*0x3d0700*/
  v25 = &v22; /*0x3d070a*/
  v22 = 0; /*0x3d0711*/
  v23 = 0; /*0x3d0715*/
  v24 = 15; /*0x3d0719*/
  LOBYTE(v22) = 0; /*0x3d0721*/
  v19 = 0; /*0x3d0725*/
  v20 = 0; /*0x3d0729*/
  v21 = 0; /*0x3d072d*/
  v11 = Src; /*0x3d0731*/
  v12 = (char *)Src[0]; /*0x3d0735*/
  v13 = v28; /*0x3d0739*/
  if ( v28 > 0xF ) /*0x3d0741*/
    v11 = (void **)Src[0]; /*0x3d0741*/
  v14 = 0x7FFFFFFFFFFFFFFFLL; /*0x3d0745*/
  v15 = v27; /*0x3d074f*/
  if ( v27 > 0x7FFFFFFFFFFFFFFFLL ) /*0x3d0756*/
    sub_8D90(v9, v8, v10); /*0x3d0866*/
  if ( v27 > 0xF ) /*0x3d0760*/
  {
    if ( (v27 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3d0782*/
    {
      v14 = v27 | 0xF; /*0x3d0784*/
      if ( (v27 | 0xF) < 0x16 ) /*0x3d078f*/
        v14 = 22; /*0x3d078f*/
    }
    *(_QWORD *)&v19 = sub_3C460(v14 + 1); /*0x3d079c*/
    v20 = v15; /*0x3d07a0*/
    v21 = v14; /*0x3d07a4*/
    memcpy((void *)v19, v11, v15 + 1); /*0x3d07b2*/
  }
  else
  {
    v20 = v27; /*0x3d0762*/
    v21 = 15; /*0x3d0766*/
    v19 = *(_OWORD *)v11; /*0x3d0772*/
  }
  v16 = *v3; /*0x3d07b7*/
  v17 = sub_3A4CA0(&v19, v8, v10, 150, &v22); /*0x3d07de*/
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v16 + 456))(v3, v17, 100); /*0x3d07ef*/
  if ( v13 > 0xF ) /*0x3d07fa*/
  {
    v18 = v12; /*0x3d0800*/
    if ( v13 + 1 >= 0x1000 ) /*0x3d080a*/
    {
      v12 = (char *)*((_QWORD *)v12 - 1); /*0x3d0810*/
      if ( (unsigned __int64)(v18 - v12 - 8) > 0x1F ) /*0x3d081f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3d0830*/
    }
    j_j_free(v12); /*0x3d083a*/
  }
}

// [25/26] Address: 0x3d0870
// Method: InfoLayer::bulkCommentDeleteFailed
// Hidden C++ exception states: #wind=1
__int64 InfoLayer_bulkCommentDeleteFailed()
{
  int v0; // eax
  __int64 v1; // rbx
  __int128 v3; // [rsp+50h] [rbp-48h] BYREF
  __int64 v4; // [rsp+60h] [rbp-38h]
  __int64 v5; // [rsp+68h] [rbp-30h]
  _BYTE v6[40]; // [rsp+70h] [rbp-28h] BYREF

  v3 = 0; /*0x3d087c*/
  *(_QWORD *)&v3 = sub_3C460(64); /*0x3d0897*/
  v4 = 49; /*0x3d089c*/
  v5 = 63; /*0x3d08a5*/
  strcpy((char *)v3, "Request <cr>failed</c>. No comments were deleted."); /*0x3d08b5*/
  v0 = sub_3E4F0(v6, &v3); /*0x3d08f2*/
  v1 = FLAlertLayer_create_0(0, (unsigned int)"Bulk Delete", v0, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x3d093d*/
  sub_3C310(&v3); /*0x3d0945*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 1064LL))(v1); /*0x3d0959*/
}

// [26/26] Address: 0x3d0970
// Method: InfoLayer::keyDown
__int64 __fastcall InfoLayer_keyDown(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  cocos2d::CCArray *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  if ( (unsigned __int8)sub_3CF440(a1 - 344) && a2 == 65 ) /*0x3d099f*/
  {
    v5 = cocos2d::CCDirector::sharedDirector(v4); /*0x3d09a1*/
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5) + 153) /*0x3d09d4*/
      || (v7 = cocos2d::CCDirector::sharedDirector(v6),
          *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7) + 155)) )
    {
      v8 = *(_QWORD *)(a1 + 560); /*0x3d09e1*/
      if ( v8 ) /*0x3d09eb*/
      {
        v9 = *(cocos2d::CCArray **)(v8 + 432); /*0x3d09f1*/
        if ( v9 ) /*0x3d09fb*/
        {
          if ( cocos2d::CCArray::count(v9) ) /*0x3d0a01*/
            return sub_3CFEB0(a1 - 344, 0); /*0x3d0a19*/
        }
      }
    }
  }
  else if ( a2 == 82 ) /*0x3d0a1e*/
  {
    v11 = cocos2d::CCDirector::sharedDirector(v4); /*0x3d0a20*/
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 176LL))(v11) + 153) /*0x3d0a53*/
      || (v13 = cocos2d::CCDirector::sharedDirector(v12),
          *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13) + 155)) )
    {
      v14 = *(_QWORD *)(a1 + 512); /*0x3d0a5c*/
      if ( v14 ) /*0x3d0a66*/
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 344LL))(v14) ) /*0x3d0a6b*/
          return SetGroupIDLayer_onClose(a1 - 344, 0); /*0x3d0a83*/
      }
    }
  }
  return FLAlertLayer_keyDown(a1, a2); /*0x3d0a92*/
}
