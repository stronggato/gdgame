#include <Geode/binding/BrowseSmartKeyLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x1b4ba0
// Method: BrowseSmartKeyLayer::getAllSelectedBlocks
unsigned int __fastcall BrowseSmartKeyLayer_getAllSelectedBlocks(__int64 a1, cocos2d::CCArray *a2)
{
  unsigned int v4; // esi
  unsigned int result; // eax
  struct cocos2d::CCObject *v6; // rax
  struct cocos2d::CCObject *v7; // rbx
  __int64 v8; // rax
  cocos2d::CCArray *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi

  v4 = 0; /*0x1b4bb9*/
  result = cocos2d::CCArray::count(a2); /*0x1b4bbb*/
  if ( result ) /*0x1b4bc3*/
  {
    do /*0x1b4ca3*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(a2, v4); /*0x1b4bd8*/
      v7 = v6; /*0x1b4bde*/
      if ( *((_DWORD *)v6 + 314) == 5 ) /*0x1b4be8*/
      {
        v8 = *((int *)v6 + 220); /*0x1b4bee*/
        if ( (int)v8 > 0 ) /*0x1b4bf7*/
        {
          v9 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(*(_QWORD *)(a1 + 1512) + 4320LL), v8); /*0x1b4c0a*/
          if ( v9 ) /*0x1b4c13*/
            cocos2d::CCArray::removeObject(v9, v7, 1); /*0x1b4c1e*/
        }
        *((_BYTE *)v7 + 1140) = *((_BYTE *)v7 + 1141); /*0x1b4c31*/
        EditorUI_deselectObject(a1, (__int64)v7); /*0x1b4c37*/
        LOBYTE(v10) = 1; /*0x1b4c3f*/
        v11 = *(_QWORD *)(a1 + 1512); /*0x1b4c41*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 1160LL))(v7, v10); /*0x1b4c4b*/
        GJBaseGameLayer_removeObjectFromSection(v11, (__int64)v7); /*0x1b4c57*/
        sub_3F1780(v11, v7); /*0x1b4c62*/
        *(_BYTE *)(v11 + 15730) = 1; /*0x1b4c6a*/
        sub_1FF670(a1); /*0x1b4c71*/
        sub_1FFD20(a1); /*0x1b4c79*/
        sub_200430(a1); /*0x1b4c81*/
        cocos2d::CCArray::removeObjectAtIndex(a2, v4, 1); /*0x1b4c8e*/
      }
      else
      {
        ++v4; /*0x1b4c96*/
      }
      result = cocos2d::CCArray::count(a2); /*0x1b4c9b*/
    }
    while ( v4 < result ); /*0x1b4ca3*/
  }
  return result; /*0x1b4cb3*/
}

// [3/4] Address: 0x5e7370
// Method: BrowseSmartKeyLayer::~BrowseSmartKeyLayer
_QWORD *__fastcall BrowseSmartKeyLayer__dtor_BrowseSmartKeyLayer(_QWORD *Block, char a2)
{
  *Block = &BrowseSmartKeyLayer::`vftable'; /*0x5e7384*/
  Block[40] = &BrowseSmartKeyLayer::`vftable'; /*0x5e7390*/
  Block[41] = &BrowseSmartKeyLayer::`vftable'; /*0x5e739e*/
  Block[42] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73ac*/
  Block[43] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73ba*/
  Block[44] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73c8*/
  Block[51] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73d6*/
  Block[54] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73e4*/
  Block[68] = &BrowseSmartKeyLayer::`vftable'; /*0x5e73f2*/
  sub_3C310(Block + 89); /*0x5e7400*/
  BrowseSmartTemplateLayer__dtor_BrowseSmartTemplateLayer(Block); /*0x5e7408*/
  if ( (a2 & 1) != 0 ) /*0x5e7410*/
    j_j_free(Block); /*0x5e741a*/
  return Block; /*0x5e741f*/
}

// [4/4] Address: 0x5ed3e0
// Method: BrowseSmartKeyLayer::onBack
// Hidden C++ exception states: #wind=1
__int64 __fastcall BrowseSmartKeyLayer_onBack(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  cocos2d::CCObject *v7; // rbx
  void *v9; // [rsp+30h] [rbp+8h]

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x5ed3ed*/
  v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x5ed3f9*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, a1); /*0x5ed405*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x5ed413*/
  LOBYTE(v4) = 1; /*0x5ed41c*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4); /*0x5ed421*/
  v5 = *((_QWORD *)a1 + 83); /*0x5ed427*/
  v9 = operator new(0x2C8u); /*0x5ed438*/
  v6 = sub_5E7270(v9); /*0x5ed440*/
  v7 = (cocos2d::CCObject *)v6; /*0x5ed445*/
  if ( v6 ) /*0x5ed44b*/
  {
    if ( (unsigned __int8)sub_5EAAA0(v6, v5) ) /*0x5ed453*/
    {
      cocos2d::CCObject::autorelease(v7); /*0x5ed45f*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x5ed46f*/
      v7 = 0; /*0x5ed472*/
    }
  }
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v7 + 1064LL))(v7);
}

// Address: 0x4462f0
// Method: BrowseSmartKeyLayer::init
// bad sp value at call has been detected, the output may be wrong!
// Hidden C++ exception states: #wind=1
const char *__fastcall BrowseSmartKeyLayer_init(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        const char *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        const char *a14)
{
  const char *v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rcx
  unsigned int v23; // r13d
  unsigned int v24; // r12d
  unsigned int v25; // r15d
  BOOL v26; // esi
  unsigned int v27; // edi
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // ebx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r8
  _QWORD v65[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v66[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v67[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v68[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v69[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v70[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v71[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v72[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v73[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v74[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v75[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v76[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v77[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v78[2]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v79[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v80[672]; // [rsp+170h] [rbp+70h] BYREF
  const char *v81; // [rsp+438h] [rbp+338h] BYREF

  v14 = a2;
  a14 = a2;
  v15 = a1;
  a13 = a1;
  v81 = a2;
  v16 = 0;
  fmt::BasicWriter<char>::BasicWriter<char>(v80);
  v81 = (const char *)&unk_78DF60;
  a5 = 0;
  v17 = *(_DWORD *)(v15 + 56);
  fmt::BasicWriter<char>::operator<<(v80, &v81);
  fmt::BasicWriter<char>::operator<<(v18, v17);
  v81 = (const char *)&unk_78DF64;
  a5 = 0;
  fmt::BasicWriter<char>::operator<<(v80, &v81);
  sub_445D80(v80, v15 + 72);
  v81 = "|3:";
  a5 = 0;
  fmt::BasicWriter<char>::operator<<(v80, &v81);
  a10 = ",ch=";
  a11 = 0;
  v81 = "cw=";
  a5 = 0;
  fmt::BasicWriter<char>::operator<<(v80, &v81);
  fmt::BasicWriter<char>::operator<<(v19);
  fmt::BasicWriter<char>::operator<<(v20, &a10);
  fmt::BasicWriter<char>::operator<<(v21);
  v81 = *(const char **)(v15 + 144);
  v22 = *(const char **)(v15 + 136);
  a10 = v22;
  if ( v22 != v81 )
  {
    do
    {
      a6 = ",ob=";
      a7 = 0;
      v79[0] = ",ns=";
      v79[1] = 0;
      v78[0] = ",sr=";
      v78[1] = 0;
      v77[0] = ",mb=";
      v77[1] = 0;
      v76[0] = ",rd=";
      v76[1] = 0;
      v75[0] = ",dz=";
      v75[1] = 0;
      v74[0] = ",o=";
      v74[1] = 0;
      v73[0] = ",s=";
      v73[1] = 0;
      v72[0] = ",h=";
      v72[1] = 0;
      v71[0] = ",w=";
      v71[1] = 0;
      v70[0] = ",oy=";
      v70[1] = 0;
      v69[0] = ",ox=";
      v69[1] = 0;
      v68[0] = ",ry=";
      v68[1] = 0;
      v67[0] = ",rx=";
      v67[1] = 0;
      v66[0] = ",ay=";
      v66[1] = 0;
      v65[0] = ";ax=";
      v65[1] = 0;
      HIDWORD(a9) = v22[36] != 0;
      LODWORD(a9) = v22[38] != 0;
      HIDWORD(a8) = v22[25] != 0;
      LODWORD(a8) = v22[24] != 0;
      v23 = *((_DWORD *)v22 + 4);
      v24 = *((_DWORD *)v22 + 1);
      v25 = *(_DWORD *)v22;
      LOBYTE(v16) = v22[57] != 0;
      v26 = v22[56] != 0;
      v27 = *((_DWORD *)v22 + 13);
      v28 = *((_DWORD *)v22 + 12);
      fmt::BasicWriter<char>::operator<<(v80, v65);
      fmt::BasicWriter<char>::operator<<(v29, v28);
      fmt::BasicWriter<char>::operator<<(v30, v66);
      fmt::BasicWriter<char>::operator<<(v31, v27);
      fmt::BasicWriter<char>::operator<<(v32, v67);
      fmt::BasicWriter<char>::operator<<(v33, v26);
      fmt::BasicWriter<char>::operator<<(v34, v68);
      fmt::BasicWriter<char>::operator<<(v35, v16);
      fmt::BasicWriter<char>::operator<<(v36, v69);
      fmt::BasicWriter<char>::operator<<(v37);
      fmt::BasicWriter<char>::operator<<(v38, v70);
      fmt::BasicWriter<char>::operator<<(v39);
      fmt::BasicWriter<char>::operator<<(v40, v71);
      fmt::BasicWriter<char>::operator<<(v41, v25);
      fmt::BasicWriter<char>::operator<<(v42, v72);
      fmt::BasicWriter<char>::operator<<(v43, v24);
      fmt::BasicWriter<char>::operator<<(v44, v73);
      fmt::BasicWriter<char>::operator<<(v45);
      fmt::BasicWriter<char>::operator<<(v46, v74);
      fmt::BasicWriter<char>::operator<<(v47, v23);
      fmt::BasicWriter<char>::operator<<(v48, v75);
      fmt::BasicWriter<char>::operator<<(v49);
      fmt::BasicWriter<char>::operator<<(v50, v76);
      fmt::BasicWriter<char>::operator<<(v51);
      fmt::BasicWriter<char>::operator<<(v52, v77);
      fmt::BasicWriter<char>::operator<<(v53, (unsigned int)a8);
      fmt::BasicWriter<char>::operator<<(v54, v78);
      fmt::BasicWriter<char>::operator<<(v55, HIDWORD(a8));
      fmt::BasicWriter<char>::operator<<(v56, v79);
      fmt::BasicWriter<char>::operator<<(v57, (unsigned int)a9);
      fmt::BasicWriter<char>::operator<<(v58, &a6);
      fmt::BasicWriter<char>::operator<<(v59, HIDWORD(a9));
      v22 = a10 + 60;
      a10 = v22;
      v16 = 0;
    }
    while ( v22 != v81 );
    v15 = a13;
    v14 = a14;
  }
  a6 = "|4:";
  a7 = 0;
  v60 = *(_DWORD *)(v15 + 68);
  fmt::BasicWriter<char>::operator<<(v80, &a6);
  fmt::BasicWriter<char>::operator<<(v61, v60);
  a6 = (const char *)&unk_78DF70;
  a7 = 0;
  fmt::BasicWriter<char>::operator<<(v80, &a6);
  sub_445D80(v80, v15 + 104);
  v62 = fmt::BasicWriter<char>::c_str(v80);
  *(_OWORD *)v14 = 0;
  *((_QWORD *)v14 + 2) = 0;
  *((_QWORD *)v14 + 3) = 0;
  v63 = -1;
  do
    ++v63;
  while ( *(_BYTE *)(v62 + v63) );
  sub_3C230(v14);
  fmt::BasicWriter<char>::~BasicWriter<char>(v80);
  return v14;
}
