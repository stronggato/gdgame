#include <Geode/binding/CreateGuidelinesLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x131c50
// Method: CreateGuidelinesLayer::onRecord
void __fastcall CreateGuidelinesLayer_onRecord(cocos2d::CCNode *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r8
  const char *v5; // rcx
  double v6; // xmm0_8
  __int64 v7; // rdx
  float v8; // xmm6_4
  char *v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int16 *); // rcx
  __int16 v11; // [rsp+30h] [rbp-48h] BYREF
  char v12; // [rsp+32h] [rbp-46h]
  char *String[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h]

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 85) + 1032LL))(*((_QWORD *)a1 + 85), 0); /*0x131c79*/
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 85) + 600LL) + 600LL; /*0x131c8d*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2); /*0x131c97*/
  *(_OWORD *)String = 0; /*0x131ca0*/
  v4 = -1; /*0x131ca5*/
  v14 = 0; /*0x131cac*/
  do /*0x131cb5*/
    ++v4; /*0x131cb2*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x131cb5*/
  sub_3C230(String); /*0x131cc4*/
  v5 = (const char *)String; /*0x131ccf*/
  if ( *((_QWORD *)&v14 + 1) > 0xFu ) /*0x131cd4*/
    v5 = String[0]; /*0x131cd4*/
  v6 = atof(v5); /*0x131cda*/
  v7 = *((_QWORD *)&v14 + 1); /*0x131ce0*/
  if ( *((_QWORD *)&v14 + 1) > 0xFu ) /*0x131cf0*/
  {
    v9 = String[0]; /*0x131cf2*/
    if ( (unsigned __int64)(*((_QWORD *)&v14 + 1) + 1LL) >= 0x1000 ) /*0x131d04*/
    {
      v9 = (char *)*((_QWORD *)String[0] - 1); /*0x131d06*/
      if ( (unsigned __int64)(String[0] - v9 - 8) > 0x1F ) /*0x131d19*/
        invoke_watson(0, 0, 0, 0, 0); /*0x131d2e*/
    }
    j_j_free(v9); /*0x131d35*/
  }
  LOBYTE(v7) = 1; /*0x131d3a*/
  CreateGuidelinesLayer_toggleItems(a1, v7); /*0x131d3f*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 85) + 920LL))(*((_QWORD *)a1 + 85), 0); /*0x131d50*/
  v8 = v6; /*0x131ce8*/
  *((float *)a1 + 180) = v8; /*0x131d5d*/
  sub_3F5A0((char *)a1 + 736, &byte_6E86E0, 0); /*0x131d6f*/
  v10 = (void (__fastcall ***)(_QWORD, __int16 *))(*((_QWORD *)a1 + 89) + 320LL); /*0x131d80*/
  *((_DWORD *)a1 + 182) = 0; /*0x131d87*/
  v11 = -26881; /*0x131d91*/
  v12 = 0; /*0x131d98*/
  (**v10)(v10, &v11); /*0x131da0*/
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 89) + 160LL))(*((_QWORD *)a1 + 89)); /*0x131db4*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1088LL))(a1); /*0x131dc0*/
  *((_BYTE *)a1 + 724) = 1; /*0x131dc9*/
  cocos2d::CCNode::scheduleUpdate(a1); /*0x131dd0*/
}

// [2/13] Address: 0x131df0
// Method: CreateGuidelinesLayer::playMusic
// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateGuidelinesLayer_playMusic(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  void *v6; // [rsp+58h] [rbp+10h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 672) + 16LL))(*(_QWORD *)(a1 + 672), v5); /*0x131e19*/
  v3 = qword_905F60; /*0x131e1c*/
  if ( !qword_905F60 ) /*0x131e26*/
  {
    v6 = operator new(0x8A8u); /*0x131e32*/
    qword_905F60 = sub_5AE20(v6); /*0x131e40*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x131e51*/
    v3 = qword_905F60; /*0x131e53*/
  }
  return FMODAudioEngine_loadAndPlayMusic(v3, v2, (int)(float)(*(float *)(a1 + 720) * 1000.0)); /*0x131e77*/
}

// [3/13] Address: 0x131f60
// Method: CreateGuidelinesLayer::recordingDidStop
// Hidden C++ exception states: #wind=6
void __fastcall CreateGuidelinesLayer_recordingDidStop(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, const char *); // rcx
  void (__fastcall **v3)(_QWORD, const char *); // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  void *v7; // rcx
  void *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  void *v12; // rcx
  void *v13; // rdx
  _BYTE v14[32]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v16[32]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v17[32]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v18[16]; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-28h]

  v2 = (void (__fastcall ***)(_QWORD, const char *))(*(_QWORD *)(a1 + 704) + 360LL); /*0x131f89*/
  v3 = *v2; /*0x131f90*/
  if ( *(_QWORD *)(a1 + 752) ) /*0x131f93*/
  {
    (*v3)(v2, "Guidelines saved"); /*0x131fb2*/
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 672) + 24LL))(*(_QWORD *)(a1 + 672)); /*0x131fbe*/
    sub_3E4F0(v18, v4 + 392); /*0x131fd0*/
    v5 = a1 + 736; /*0x131fd6*/
    if ( v19 ) /*0x131fe6*/
    {
      v9 = sub_3E4F0(v14, v5); /*0x132070*/
      v10 = sub_3E4F0(v15, v18); /*0x132080*/
      CreateGuidelinesLayer_getMergedRecordString(a1, v17, v10, v9); /*0x132097*/
      v11 = sub_3E4F0(v16, v17); /*0x1320b9*/
      v12 = (void *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 672) + 24LL))(*(_QWORD *)(a1 + 672)) + 392); /*0x1320cf*/
      if ( v12 != (void *)v11 ) /*0x1320d9*/
      {
        v13 = (void *)v11; /*0x1320db*/
        if ( *(_QWORD *)(v11 + 24) > 0xFu ) /*0x1320e3*/
          v13 = *(void **)v11; /*0x1320e5*/
        sub_3F5A0(v12, v13, *(_QWORD *)(v11 + 16)); /*0x1320ec*/
      }
      sub_3C310(v11); /*0x1320f5*/
      *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 672) + 24LL))(*(_QWORD *)(a1 + 672)) + 424) = 1; /*0x132107*/
      sub_3C310(v17); /*0x132116*/
    }
    else
    {
      v6 = sub_3E4F0(v17, v5); /*0x132002*/
      v7 = (void *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 672) + 24LL))(*(_QWORD *)(a1 + 672)) + 392); /*0x132018*/
      if ( v7 != (void *)v6 ) /*0x132022*/
      {
        v8 = (void *)v6; /*0x132024*/
        if ( *(_QWORD *)(v6 + 24) > 0xFu ) /*0x13202c*/
          v8 = *(void **)v6; /*0x13202e*/
        sub_3F5A0(v7, v8, *(_QWORD *)(v6 + 16)); /*0x132035*/
      }
      sub_3C310(v6); /*0x13203e*/
      *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 672) + 24LL))(*(_QWORD *)(a1 + 672)) + 424) = 1; /*0x132050*/
    }
    sub_3C310(v18); /*0x132124*/
  }
  else
  {
    (*v3)(v2, &byte_6E86E0); /*0x131fa4*/
  }
  if ( *(int *)(a1 + 728) > 1000 ) /*0x132133*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 704) + 360LL))( /*0x13214d*/
      *(_QWORD *)(a1 + 704) + 360LL,
      "Maximum limit exceeded");
  *(_DWORD *)(a1 + 728) = 0; /*0x13214f*/
}

// [4/13] Address: 0x132180
// Method: CreateGuidelinesLayer::getMergedRecordString
// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreateGuidelinesLayer_getMergedRecordString(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  cocos2d::CCArray *v7; // rbp
  cocos2d::CCArray *v8; // r14
  __int64 v9; // rcx
  cocos2d::CCArray *v10; // r12
  int v11; // r13d
  char v12; // di
  float v13; // xmm7_4
  float v14; // xmm6_4
  cocos2d::CCString *v15; // rax
  cocos2d::CCString *v16; // rax
  float v17; // xmm1_4
  cocos2d::CCArray *v18; // rbx
  struct cocos2d::CCObject *v19; // rax
  struct cocos2d::CCObject *v20; // rax
  cocos2d::CCString *v21; // rax
  float v22; // xmm0_4
  cocos2d::CCString *v23; // rax
  char *CString; // rax
  size_t v25; // r8

  v6 = 0; /*0x1321dd*/
  v7 = (cocos2d::CCArray *)sub_99060(a3); /*0x1321eb*/
  v8 = (cocos2d::CCArray *)sub_99060(a4); /*0x1321f6*/
  v10 = (cocos2d::CCArray *)cocos2d::CCArray::create(v9); /*0x1321ff*/
  v11 = 0; /*0x132202*/
  v12 = 1; /*0x132205*/
  while ( 1 ) /*0x132211*/
  {
    v13 = 9999999.0; /*0x132211*/
    v14 = 9999999.0; /*0x132215*/
    if ( cocos2d::CCArray::count(v7) > 1 ) /*0x132225*/
    {
      v15 = cocos2d::CCArray::stringAtIndex(v7, 0); /*0x13222c*/
      v14 = cocos2d::CCString::floatValue(v15); /*0x13223b*/
    }
    if ( cocos2d::CCArray::count(v8) > 1 ) /*0x13224a*/
    {
      v16 = cocos2d::CCArray::stringAtIndex(v8, 0); /*0x132251*/
      v13 = cocos2d::CCString::floatValue(v16); /*0x132260*/
    }
    v17 = fminf(v14, v13); /*0x132266*/
    if ( v17 != 9999999.0 ) /*0x132270*/
    {
      if ( v17 == v14 ) /*0x132277*/
      {
        v18 = v7; /*0x132279*/
LABEL_11:
        v19 = cocos2d::CCArray::objectAtIndex(v18, 0); /*0x13228d*/
        cocos2d::CCArray::addObject(v10, v19); /*0x13229e*/
        v20 = cocos2d::CCArray::objectAtIndex(v18, 1u); /*0x1322ac*/
        cocos2d::CCArray::addObject(v10, v20); /*0x1322b8*/
        cocos2d::CCArray::removeObjectAtIndex(v18, 0, 1); /*0x1322c6*/
        cocos2d::CCArray::removeObjectAtIndex(v18, 0, 1); /*0x1322d4*/
        ++v11; /*0x1322da*/
        goto LABEL_13; /*0x1322dd*/
      }
      if ( v17 == v13 ) /*0x132283*/
      {
        v18 = v8; /*0x132285*/
        goto LABEL_11; /*0x132285*/
      }
    }
    v12 = 0; /*0x1322df*/
LABEL_13:
    if ( v11 > 1000 ) /*0x1322e9*/
      break; /*0x1322e9*/
    if ( !v12 ) /*0x1322ee*/
      goto LABEL_17; /*0x1322ee*/
  }
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 704) + 360LL))( /*0x132313*/
    *(_QWORD *)(a1 + 704) + 360LL,
    "Maximum limit exceeded");
LABEL_17:
  *(_OWORD *)a2 = 0; /*0x132315*/
  a2[2] = 0; /*0x13231c*/
  a2[3] = 15; /*0x132320*/
  *(_BYTE *)a2 = 0; /*0x132328*/
  if ( cocos2d::CCArray::count(v10) ) /*0x132337*/
  {
    do /*0x1323a3*/
    {
      v21 = cocos2d::CCArray::stringAtIndex(v10, v6); /*0x132346*/
      v22 = cocos2d::CCString::floatValue(v21); /*0x13234f*/
      v23 = cocos2d::CCString::createWithFormat("%0.2f~0~", v22); /*0x132368*/
      CString = (char *)cocos2d::CCString::getCString(v23); /*0x132371*/
      v25 = -1; /*0x132377*/
      do /*0x132383*/
        ++v25; /*0x132380*/
      while ( CString[v25] ); /*0x132383*/
      sub_43D80(a2, CString, v25); /*0x132390*/
      v6 += 2; /*0x132395*/
    }
    while ( v6 < cocos2d::CCArray::count(v10) ); /*0x1323a3*/
  }
  sub_3C310(a3); /*0x1323aa*/
  sub_3C310(a4); /*0x1323b5*/
  return a2; /*0x1323bd*/
}

// [5/13] Address: 0x132400
// Method: CreateGuidelinesLayer::toggleItems
unsigned int __fastcall CreateGuidelinesLayer_toggleItems(__int64 a1, unsigned __int8 a2)
{
  unsigned int v3; // ebx
  unsigned int i; // esi
  struct cocos2d::CCObject *v6; // rax
  unsigned int result; // eax
  struct cocos2d::CCObject *v8; // rax

  v3 = 0; /*0x13241f*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); ++i ) /*0x132427*/
  {
    v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), i); /*0x132449*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v6 + 336LL))(v6, a2 ^ 1u); /*0x132460*/
  }
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 696)); /*0x132482*/
  if ( result ) /*0x13248f*/
  {
    do /*0x1324c5*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 696), v3); /*0x13249a*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v8 + 336LL))(v8, a2); /*0x1324b1*/
      ++v3; /*0x1324bb*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 696)); /*0x1324bd*/
    }
    while ( v3 < result ); /*0x1324c5*/
  }
  return result; /*0x1324c7*/
}

// [6/13] Address: 0x1324e0
// Method: CreateGuidelinesLayer::update
void __fastcall CreateGuidelinesLayer_update(__int64 a1, float a2)
{
  *(float *)(a1 + 720) = a2 + *(float *)(a1 + 720); /*0x1324e8*/
}

// [7/13] Address: 0x132500
// Method: CreateGuidelinesLayer::onInfo
// Hidden C++ exception states: #wind=1
__int64 CreateGuidelinesLayer_onInfo()
{
  __int64 v0; // r8
  _OWORD *v1; // rcx
  const char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  cocos2d::CCObject *v5; // rbx
  __int128 v7; // [rsp+50h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  _BYTE v10[40]; // [rsp+70h] [rbp-28h] BYREF

  v7 = 0; /*0x13250c*/
  v0 = sub_3C460(304); /*0x132527*/
  *(_QWORD *)&v7 = v0; /*0x13252a*/
  v8 = 289; /*0x13252f*/
  v9 = 303; /*0x132538*/
  v1 = (_OWORD *)v0; /*0x132541*/
  v2 = "Guidelines can be used to make it easier to syncronize music and gameplay. Create your own custom song guidelines" /*0x132544*/
       " using this interface. Tap on record to start recording, then tap on the screen to create markings. Press on the "
       "stop button to stop recording and save your created guidelines.";
  v3 = 2; /*0x13254b*/
  do /*0x1325a0*/
  {
    *v1 = *(_OWORD *)v2; /*0x132553*/
    v1[1] = *((_OWORD *)v2 + 1); /*0x13255a*/
    v1[2] = *((_OWORD *)v2 + 2); /*0x132562*/
    v1[3] = *((_OWORD *)v2 + 3); /*0x13256a*/
    v1[4] = *((_OWORD *)v2 + 4); /*0x132572*/
    v1[5] = *((_OWORD *)v2 + 5); /*0x13257a*/
    v1[6] = *((_OWORD *)v2 + 6); /*0x132582*/
    v1 += 8; /*0x132586*/
    *(v1 - 1) = *((_OWORD *)v2 + 7); /*0x132591*/
    v2 += 128; /*0x132595*/
    --v3; /*0x13259c*/
  }
  while ( v3 ); /*0x1325a0*/
  *v1 = *(_OWORD *)v2; /*0x1325a5*/
  v1[1] = *((_OWORD *)v2 + 1); /*0x1325ac*/
  *((_BYTE *)v1 + 32) = v2[32]; /*0x1325b4*/
  *(_BYTE *)(v0 + 289) = 0; /*0x1325b7*/
  v4 = sub_3E4F0(v10, &v7); /*0x1325d5*/
  v5 = FLAlertLayer_create_0(0, (int)"Guidelines", v4, (__int64)"OK", 0, 1137180672, 0, 0, 1065353216); /*0x132621*/
  sub_3C310(&v7); /*0x132629*/
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v5 + 1064LL))(v5); /*0x13263d*/
}

// [8/13] Address: 0x132650
// Method: CreateGuidelinesLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateGuidelinesLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  void **v7; // rcx
  void **v8; // rdx
  void *Src[2]; // [rsp+20h] [rbp-28h] BYREF
  size_t Size; // [rsp+30h] [rbp-18h]
  unsigned __int64 v11; // [rsp+38h] [rbp-10h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x132667*/
  if ( (_DWORD)result == 1 ) /*0x13266d*/
  {
    if ( a3 ) /*0x132676*/
    {
      result = (**(__int64 (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 40) + 360LL))( /*0x132691*/
                 *(_QWORD *)(a1 + 40) + 360LL,
                 "Guidelines cleared");
      v6 = *(_QWORD *)(a1 + 8); /*0x132693*/
      if ( v6 ) /*0x13269a*/
      {
        *(_OWORD *)Src = 0; /*0x1326ad*/
        Size = 0; /*0x1326b2*/
        v11 = 15; /*0x1326bb*/
        LOBYTE(Src[0]) = 0; /*0x1326c4*/
        v7 = (void **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) + 392); /*0x1326da*/
        if ( v7 != Src ) /*0x1326e9*/
        {
          v8 = Src; /*0x1326eb*/
          if ( v11 > 0xF ) /*0x1326f6*/
            v8 = (void **)Src[0]; /*0x1326f6*/
          sub_3F5A0(v7, v8, Size); /*0x132701*/
        }
        sub_3C310(Src); /*0x13270c*/
        result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8)); /*0x132718*/
        *(_BYTE *)(result + 424) = 1; /*0x13271b*/
      }
    }
  }
  return result; /*0x132722*/
}

// [9/13] Address: 0x132730
// Method: CreateGuidelinesLayer::keyBackClicked
__int64 __fastcall CreateGuidelinesLayer_keyBackClicked(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 result; // rax

  v1 = (_BYTE *)(a1 - 336); /*0x132730*/
  if ( !v1[724] ) /*0x132737*/
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v1 + 1080LL))(v1, 0); /*0x132745*/
  return result; /*0x13274c*/
}

// [10/13] Address: 0x132750
// Method: CreateGuidelinesLayer::registerTouch
__int64 __fastcall CreateGuidelinesLayer_registerTouch(__int64 a1)
{
  cocos2d::CCString *v2; // rax
  char *CString; // rax
  size_t v4; // r8

  v2 = cocos2d::CCString::createWithFormat("%0.2f~0~", *(float *)(a1 + 720)); /*0x132770*/
  CString = (char *)cocos2d::CCString::getCString(v2); /*0x132779*/
  v4 = -1; /*0x13277f*/
  do /*0x132789*/
    ++v4; /*0x132786*/
  while ( CString[v4] ); /*0x132789*/
  return sub_43D80((void *)(a1 + 736), CString, v4); /*0x13279a*/
}

// [11/13] Address: 0x1327b0
// Method: CreateGuidelinesLayer::ccTouchBegan
char __fastcall CreateGuidelinesLayer_ccTouchBegan(__int64 a1)
{
  _BYTE *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int16 *); // rcx
  __int16 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+32h] [rbp+Ah]

  v2 = (_BYTE *)(a1 - 320); /*0x1327b9*/
  if ( v2[724] && *(int *)(a1 + 408) <= 1000 ) /*0x1327d3*/
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 1096LL))(v2); /*0x1327d8*/
    v3 = (void (__fastcall ***)(_QWORD, __int16 *))(*(_QWORD *)(a1 + 392) + 320LL); /*0x1327ea*/
    v5 = -1; /*0x1327f1*/
    v6 = 0; /*0x1327f8*/
    (**v3)(v3, &v5); /*0x132800*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 160LL))(*(_QWORD *)(a1 + 392)); /*0x132814*/
    ++*(_DWORD *)(a1 + 408); /*0x13281a*/
  }
  return 1; /*0x132822*/
}

// [12/13] Address: 0x132830
// Method: CreateGuidelinesLayer::ccTouchEnded
__int64 __fastcall CreateGuidelinesLayer_ccTouchEnded(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int16 *); // rcx
  __int64 result; // rax
  __int16 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+32h] [rbp+Ah]

  if ( *(_BYTE *)(a1 + 404) ) /*0x132836*/
  {
    v2 = (void (__fastcall ***)(_QWORD, __int16 *))(*(_QWORD *)(a1 + 392) + 320LL); /*0x13284e*/
    v4 = -26881; /*0x132855*/
    v5 = 0; /*0x13285c*/
    (**v2)(v2, &v4); /*0x132864*/
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 160LL))(*(_QWORD *)(a1 + 392)); /*0x13287d*/
  }
  return result; /*0x132884*/
}

// [13/13] Address: 0x1328e0
// Method: CreateGuidelinesLayer::keyDown
void __fastcall CreateGuidelinesLayer_keyDown(__int64 a1, int a2)
{
  if ( a2 == 38 || a2 == 32 ) /*0x1328e8*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 344) + 1096LL))(a1 - 344); /*0x1328f8*/
  else
    FLAlertLayer_keyDown(a1, a2); /*0x1328e8*/
}
