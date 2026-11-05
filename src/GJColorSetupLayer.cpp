#include <Geode/binding/GJColorSetupLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x35aeb0
// Method: GJColorSetupLayer::~GJColorSetupLayer
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GJColorSetupLayer__dtor_GJColorSetupLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx

  *Block = &GJColorSetupLayer::`vftable'; /*0x35aec6*/
  Block[40] = &GJColorSetupLayer::`vftable'; /*0x35aed0*/
  Block[41] = &GJColorSetupLayer::`vftable'; /*0x35aede*/
  Block[42] = &GJColorSetupLayer::`vftable'; /*0x35aeec*/
  Block[43] = &GJColorSetupLayer::`vftable'; /*0x35aefa*/
  Block[44] = &GJColorSetupLayer::`vftable'; /*0x35af08*/
  Block[51] = &GJColorSetupLayer::`vftable'; /*0x35af16*/
  Block[54] = &GJColorSetupLayer::`vftable'; /*0x35af24*/
  Block[68] = &GJColorSetupLayer::`vftable'; /*0x35af32*/
  Block[83] = &GJColorSetupLayer::`vftable'; /*0x35af40*/
  Block[84] = &GJColorSetupLayer::`vftable'; /*0x35af4e*/
  v4 = (cocos2d::CCObject *)Block[86]; /*0x35af55*/
  if ( v4 ) /*0x35af5f*/
    cocos2d::CCObject::release(v4); /*0x35af61*/
  v5 = (cocos2d::CCObject *)Block[85]; /*0x35af67*/
  if ( v5 ) /*0x35af71*/
    cocos2d::CCObject::release(v5); /*0x35af73*/
  v6 = (cocos2d::CCObject *)Block[87]; /*0x35af79*/
  if ( v6 ) /*0x35af83*/
    cocos2d::CCObject::release(v6); /*0x35af85*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x35af8e*/
  if ( (a2 & 1) != 0 ) /*0x35af98*/
    j_j_free(Block); /*0x35afa2*/
  return Block; /*0x35afaa*/
}

// [3/9] Address: 0x35b990
// Method: GJColorSetupLayer::updateSpriteColors
unsigned int __fastcall GJColorSetupLayer_updateSpriteColors(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // ebx
  unsigned int result; // eax
  int v5; // r15d
  struct cocos2d::CCObject *v6; // rsi
  struct cocos2d::CCObject *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, __int64); // r8
  __int64 v11; // rdx
  __int64 v12; // rdx

  v2 = *(_DWORD *)(a1 + 720) * *(_DWORD *)(a1 + 724); /*0x35b9a1*/
  v3 = 0; /*0x35b9a8*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 712)); /*0x35b9b1*/
  if ( result ) /*0x35b9b9*/
  {
    v5 = v2 + 1; /*0x35b9ce*/
    do /*0x35ba92*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 712), v3); /*0x35b9f8*/
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 704), v3); /*0x35ba04*/
      v8 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v6 + 504LL))(v6); /*0x35ba11*/
      v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 936LL); /*0x35ba1a*/
      if ( (int)(v5 + v3) > 999 ) /*0x35ba2a*/
      {
        v10(v8, 0); /*0x35ba62*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v6 + 336LL))(v6, 0); /*0x35ba6d*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v7 + 336LL))(v7, 0); /*0x35ba7b*/
      }
      else
      {
        LOBYTE(v9) = 1; /*0x35ba2c*/
        v10(v8, v9); /*0x35ba2e*/
        LOBYTE(v11) = 1; /*0x35ba34*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v6 + 336LL))(v6, v11); /*0x35ba39*/
        LOBYTE(v12) = 1; /*0x35ba42*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 336LL))(v7, v12); /*0x35ba47*/
        GJColorSetupLayer_updateSpriteColor(a1, v6, v7, v5 + v3); /*0x35ba59*/
      }
      ++v3; /*0x35ba88*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 712)); /*0x35ba8a*/
    }
    while ( v3 < result ); /*0x35ba92*/
  }
  return result; /*0x35baa7*/
}

// [4/9] Address: 0x35bab0
// Method: GJColorSetupLayer::updateSpriteColor
__int64 __fastcall GJColorSetupLayer_updateSpriteColor(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  void (__fastcall **v6)(__int64, const char *); // rbx
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  bool v15; // zf
  __int64 result; // rax
  __int64 v17; // rcx
  __int16 v18; // [rsp+58h] [rbp+20h] BYREF
  char v19; // [rsp+5Ah] [rbp+22h]

  v5 = a3 + 360; /*0x35bac5*/
  v6 = *(void (__fastcall ***)(__int64, const char *))(a3 + 360); /*0x35bacc*/
  v9 = cocos2d::CCString::createWithFormat("Col %i", a4); /*0x35badf*/
  CString = cocos2d::CCString::getCString(v9); /*0x35bae8*/
  (*v6)(v5, CString); /*0x35baf4*/
  v11 = a4; /*0x35baf8*/
  if ( a4 < 0 ) /*0x35bafe*/
    v11 = 0; /*0x35bafe*/
  if ( v11 > 1101 ) /*0x35bb0a*/
    v11 = 1101; /*0x35bb0a*/
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 320LL); /*0x35bb18*/
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 736) + 8LL * v11) && (v13 = sub_3624A0(v12, (unsigned int)a4), (v14 = v13) != 0) ) /*0x35bb3f*/
  {
    sub_35F410(a2, *(unsigned int *)(v13 + 120), *(unsigned __int8 *)(v13 + 126)); /*0x35bb4c*/
    ColorChannelSprite_updateOpacity(a2); /*0x35bb59*/
    sub_35F730(a2, *(unsigned __int8 *)(v14 + 84)); /*0x35bb65*/
    v15 = *(_DWORD *)(v14 + 120) == 0; /*0x35bb6a*/
    v18 = *(_WORD *)(v14 + 72); /*0x35bb72*/
    v19 = *(_BYTE *)(v14 + 74); /*0x35bb7b*/
    if ( !v15 && !*(_BYTE *)(v14 + 126) ) /*0x35bb81*/
    {
      v18 = -22874; /*0x35bb8e*/
      v19 = -90; /*0x35bb9a*/
    }
    return (**(__int64 (__fastcall ***)(__int64, __int16 *))(a2 + 320))(a2 + 320, &v18); /*0x35bbad*/
  }
  else
  {
    (**(void (__fastcall ***)(__int64, __int16 *))(a2 + 320))(a2 + 320, &word_6FE460); /*0x35bbc2*/
    v17 = *(_QWORD *)(a2 + 600); /*0x35bbc4*/
    if ( v17 ) /*0x35bbce*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 336LL))(v17, 0); /*0x35bbd5*/
    result = ColorChannelSprite_updateOpacity(a2); /*0x35bbe6*/
    if ( *(_QWORD *)(a2 + 616) ) /*0x35bbeb*/
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 616) + 336LL))(*(_QWORD *)(a2 + 616), 0); /*0x35bc01*/
  }
  return result; /*0x35bc07*/
}

// [5/9] Address: 0x35bc70
// Method: GJColorSetupLayer::onColor
__int64 __fastcall GJColorSetupLayer_onColor(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  void (__fastcall ***v5)(_QWORD); // rcx
  __int64 v6; // rdx
  __int64 v8; // rax
  char *v9; // rax
  __int64 v10; // rcx

  v3 = *(_DWORD *)(a1 + 720) * *(_DWORD *)(a1 + 724); /*0x35bc83*/
  v4 = v3 + (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x35bc9a*/
  if ( *(_BYTE *)(a1 + 752) ) /*0x35bc93*/
  {
    v5 = *(void (__fastcall ****)(_QWORD))(a1 + 760); /*0x35bc9f*/
    *(_DWORD *)(a1 + 768) = v4; /*0x35bca6*/
    if ( v5 ) /*0x35bcaf*/
    {
      if ( (int)v4 > 0 ) /*0x35bcb3*/
        (**v5)(v5); /*0x35bcb8*/
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x35bcc2*/
    LOBYTE(v6) = 1; /*0x35bccb*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v6); /*0x35bcda*/
  }
  else
  {
    v8 = sub_3624A0(*(_QWORD *)(*(_QWORD *)(a1 + 680) + 320LL), v4); /*0x35bcef*/
    v9 = ColorSelectPopup_create(0, 0, v8); /*0x35bcfb*/
    v10 = a1 + 664; /*0x35bd02*/
    if ( !a1 ) /*0x35bd0c*/
      v10 = 0; /*0x35bd0c*/
    *((_DWORD *)v9 + 148) = 106; /*0x35bd10*/
    *((_QWORD *)v9 + 138) = v10; /*0x35bd1a*/
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 1064LL))(v9); /*0x35bd38*/
  }
}

// [6/9] Address: 0x35bd40
// Method: GJColorSetupLayer::colorSelectClosed
unsigned int __fastcall GJColorSetupLayer_colorSelectClosed(__int64 a1)
{
  return GJColorSetupLayer_updateSpriteColors(a1 - 664);
}

// [7/9] Address: 0x35bd50
// Method: GJColorSetupLayer::showPage
unsigned int __fastcall GJColorSetupLayer_showPage(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx

  v3 = a2; /*0x35bd66*/
  LOBYTE(a2) = (_DWORD)a2 != 0; /*0x35bd68*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 736) + 336LL))(*(_QWORD *)(a1 + 736), a2); /*0x35bd6e*/
  LOBYTE(v4) = v3 != *(_DWORD *)(a1 + 728) - 1; /*0x35bd85*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 744) + 336LL))(*(_QWORD *)(a1 + 744), v4); /*0x35bd8b*/
  *(_DWORD *)(*(_QWORD *)(a1 + 680) + 428LL) = v3; /*0x35bd9b*/
  return GJColorSetupLayer_updateSpriteColors(a1); /*0x35bda1*/
}

// [8/9] Address: 0x35bdb0
// Method: GJColorSetupLayer::onClose
__int64 __fastcall GJColorSetupLayer_onClose(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // rcx
  __int64 v3; // rdx

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 760); /*0x35bdb9*/
  if ( v2 && *(int *)(a1 + 768) > 0 ) /*0x35bdcd*/
    (**v2)(v2); /*0x35bdd2*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x35bddc*/
  LOBYTE(v3) = 1; /*0x35bde5*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v3);
}

// [9/9] Address: 0x35be00
// Method: GJColorSetupLayer::keyBackClicked
__int64 __fastcall GJColorSetupLayer_keyBackClicked(__int64 a1)
{
  int *v1; // rbx
  void (__fastcall ***v2)(_QWORD); // rcx
  __int64 v3; // rdx

  v1 = (int *)(a1 - 336); /*0x35be06*/
  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 424); /*0x35be0d*/
  if ( v2 && v1[192] > 0 ) /*0x35be21*/
    (**v2)(v2); /*0x35be26*/
  (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x35be30*/
  LOBYTE(v3) = 1; /*0x35be39*/
  return (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)v1 + 520LL))(v1, v3);
}

// Address: 0x35b110
// Method: GJColorSetupLayer::init
// Hidden C++ exception states: #wind=5
bool __fastcall GJColorSetupLayer_init(__int64 a1, cocos2d::CCObject *a2)
{
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64 *, __int64); // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  cocos2d::CCObject *v15; // rax
  cocos2d::CCObject *v16; // rax
  __int64 v17; // rcx
  cocos2d::CCObject *v18; // rax
  __int64 v19; // rcx
  cocos2d::CCObject *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  struct cocos2d::CCLabelBMFont *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r15d
  struct cocos2d::CCObject *v30; // r14
  float v31; // xmm0_4
  __int64 v32; // rax
  struct cocos2d::CCObject *v33; // rbx
  __int64 v34; // rax
  cocos2d::CCObject *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  struct cocos2d::CCSprite *v43; // rdi
  __int64 v44; // rax
  cocos2d::CCObject *v45; // rbx
  __int64 v46; // rax
  cocos2d::CCSprite *v47; // rdi
  __int64 v48; // rax
  cocos2d::CCObject *v49; // rbx
  __int64 v50; // rax
  cocos2d::CCObject *v51; // rbx
  cocos2d::CCObject *v52; // r14
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  _BYTE v59[8]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v60[8]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v61[8]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v62[8]; // [rsp+68h] [rbp-51h] BYREF
  void *v63; // [rsp+70h] [rbp-49h]
  _BYTE v64[8]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v65[12]; // [rsp+80h] [rbp-39h] BYREF
  float v66; // [rsp+130h] [rbp+77h] BYREF
  float v67; // [rsp+134h] [rbp+7Bh]
  char v68; // [rsp+138h] [rbp+7Fh] BYREF

  result = FLAlertLayer_init(a1, 150);
  if ( result )
  {
    *(_BYTE *)(a1 + 596) = 1;
    *(_QWORD *)(a1 + 680) = a2;
    cocos2d::CCObject::retain(a2);
    v6 = cocos2d::CCDirector::sharedDirector(v5);
    cocos2d::CCDirector::getWinSize(v6, &v66);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v65, 0.0, 0.0, 80.0, 80.0);
    v8 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v7);
    v9 = v8[40];
    v10 = *(void (__fastcall **)(__int64 *, __int64))(v9 + 40);
    LOBYTE(v9) = -1;
    v10(v8 + 40, v9);
    v11 = *v8;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v61, 450.0, 300.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 312))(v8, v12);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v8,
      4294967294LL);
    v13 = *v8;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v61, v66 * 0.5, v67 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v13 + 184))(v8, v14);
    v15 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
    *(_QWORD *)(a1 + 688) = v15;
    cocos2d::CCObject::retain(v15);
    v16 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
    *(_QWORD *)(a1 + 696) = v16;
    cocos2d::CCObject::retain(v16);
    v18 = (cocos2d::CCObject *)cocos2d::CCArray::create(v17);
    *(_QWORD *)(a1 + 704) = v18;
    cocos2d::CCObject::retain(v18);
    v20 = (cocos2d::CCObject *)cocos2d::CCArray::create(v19);
    *(_QWORD *)(a1 + 712) = v20;
    cocos2d::CCObject::retain(v20);
    *(_DWORD *)(a1 + 724) = 24;
    *(_DWORD *)(a1 + 728) = 42;
    v25 = cocos2d::CCMenu::create(v22, v21, v23, v24);
    *(_QWORD *)(a1 + 552) = v25;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v25, 10);
    v26 = cocos2d::CCLabelBMFont::create("Select Custom Color:", "goldFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v26 + 160LL))(v26);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v26);
    v27 = *(_QWORD *)v26;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v61, v66 * 0.5, (float)(v67 * 0.5) + 130.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v27 + 184))(v26, v28);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v59, (float)(v66 * 0.5) - 132.5, (float)(v67 * 0.5) + 100.0);
    v29 = 1;
    if ( *(int *)(a1 + 724) >= 1 )
    {
      while ( 1 )
      {
        v30 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68);
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v30 + 160LL))(v30);
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 584) + 464LL))(
          *(_QWORD *)(a1 + 584),
          v30);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 704), v30);
        v31 = floorf((float)((v29 - 1) / 6));
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v62, (float)((v29 - 1) % 6) * 53.0, (float)-(int)v31 * 53.0);
        cocos2d::CCPoint::operator+(v59, v60, v32);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v30 + 184LL))(v30, v60);
        v33 = ColorChannelSprite_create();
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 160LL))(v33);
        (**((void (__fastcall ***)(__int64, void *))v33 + 40))((__int64)v33 + 320, &unk_6FE450);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 712), v33);
        v63 = operator new(0x208u);
        v34 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v63);
        v35 = (cocos2d::CCObject *)v34;
        if ( !v34 )
          goto LABEL_7;
        if ( !(unsigned __int8)sub_47940(v34, (_DWORD)v33, 0, a1, (__int64)GJColorSetupLayer_onColor) )
          break;
        cocos2d::CCObject::autorelease(v35);
LABEL_8:
        (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
          *(_QWORD *)(a1 + 552),
          v35);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v64, 0.0, -22.0);
        v37 = v36;
        v38 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v30 + 200LL))(v30);
        cocos2d::CCPoint::operator+(v38, v61, v37);
        v39 = *(_QWORD *)v35;
        cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v65, v61);
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v39 + 184))(v35, v40);
        (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v35 + 64LL))(v35, (unsigned int)v29++);
        if ( v29 > *(_DWORD *)(a1 + 724) )
          goto LABEL_9;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v35 + 8LL))(v35, 1);
LABEL_7:
      v35 = 0;
      goto LABEL_8;
    }
LABEL_9:
    GJColorSetupLayer_updateSpriteColors(a1);
    v41 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v65, v66 * 0.5, v67 * 0.5);
    cocos2d::CCNode::convertToNodeSpace(v41, &v68, v42);
    v43 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v43 + 160LL))(v43);
    v65[0] = (__int64)operator new(0x208u);
    v44 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v65[0]);
    v45 = (cocos2d::CCObject *)v44;
    if ( v44 )
    {
      if ( (unsigned __int8)sub_47940(v44, (_DWORD)v43, 0, a1, (__int64)sub_35BC20) )
      {
        cocos2d::CCObject::autorelease(v45);
        goto LABEL_14;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v45 + 8LL))(v45, 1);
    }
    v45 = 0;
LABEL_14:
    *(_QWORD *)(a1 + 736) = v45;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v45);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v65, -190.0, 0.0);
    cocos2d::CCPoint::operator+(&v68, v61, v46);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 736) + 184LL))(*(_QWORD *)(a1 + 736), v61);
    *(_DWORD *)(*(_QWORD *)(a1 + 736) + 372LL) = 0x40000000;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 736) + 64LL))(*(_QWORD *)(a1 + 736), 1);
    v47 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v47 + 160LL))(v47);
    cocos2d::CCSprite::setFlipX(v47, 1);
    v65[0] = (__int64)operator new(0x208u);
    v48 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v65[0]);
    v49 = (cocos2d::CCObject *)v48;
    if ( v48 )
    {
      if ( (unsigned __int8)sub_47940(v48, (_DWORD)v47, 0, a1, (__int64)sub_35BC20) )
      {
        cocos2d::CCObject::autorelease(v49);
        goto LABEL_19;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v49 + 8LL))(v49, 1);
    }
    v49 = 0;
LABEL_19:
    *(_QWORD *)(a1 + 744) = v49;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v49);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v65, 190.0, 0.0);
    cocos2d::CCPoint::operator+(&v68, v61, v50);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 744) + 184LL))(*(_QWORD *)(a1 + 744), v61);
    *(_DWORD *)(*(_QWORD *)(a1 + 744) + 372LL) = 0x40000000;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 744) + 64LL))(*(_QWORD *)(a1 + 744), 0);
    v65[0] = (__int64)operator new(0x2C8u);
    v51 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v65[0]);
    if ( v51 )
    {
      if ( ButtonSprite_init(
             (__int64)v51,
             (__int64)"OK",
             40,
             0,
             1061997773,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_01.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v51);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v51 + 8LL))(v51, 1);
        LODWORD(v51) = 0;
      }
    }
    v65[0] = (__int64)operator new(0x208u);
    v52 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v65[0]);
    if ( v52 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v52, (_DWORD)v51, 0, a1, (__int64)GJColorSetupLayer_onClose) )
      {
        cocos2d::CCObject::autorelease(v52);
LABEL_28:
        (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
          *(_QWORD *)(a1 + 552),
          v52);
        v53 = *(_QWORD *)v52;
        v54 = *(_QWORD *)(a1 + 552);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v65, v66 * 0.5, (float)(v67 * 0.5) - 126.0);
        cocos2d::CCNode::convertToNodeSpace(v54, v64, v55);
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v53 + 184))(v52, v56);
        LODWORD(v54) = *(_DWORD *)(*(_QWORD *)(a1 + 680) + 428LL);
        *(_DWORD *)(a1 + 720) = v54;
        LOBYTE(v57) = (_DWORD)v54 != 0;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 736) + 336LL))(*(_QWORD *)(a1 + 736), v57);
        LOBYTE(v58) = (_DWORD)v54 != *(_DWORD *)(a1 + 728) - 1;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 744) + 336LL))(*(_QWORD *)(a1 + 744), v58);
        *(_DWORD *)(*(_QWORD *)(a1 + 680) + 428LL) = v54;
        GJColorSetupLayer_updateSpriteColors(a1);
        return 1;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v52 + 8LL))(v52, 1);
    }
    v52 = 0;
    goto LABEL_28;
  }
  return result;
}
