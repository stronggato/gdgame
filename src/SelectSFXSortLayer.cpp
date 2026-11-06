#include <Geode/binding/SelectSFXSortLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x61c460
// Method: SelectSFXSortLayer::onSelect
__int64 __fastcall SelectSFXSortLayer_onSelect(__int64 a1, __int64 a2)
{
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x61c46f*/
  v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 672); /*0x61c472*/
  *(_DWORD *)(a1 + 664) = v3; /*0x61c479*/
  if ( v4 ) /*0x61c482*/
    (**v4)(v4, a1); /*0x61c48a*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x61c494*/
  LOBYTE(v5) = 1; /*0x61c49d*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v5);
}

// Address: 0x61bdc0
// Method: SelectSFXSortLayer::init
// Hidden C++ exception states: #wind=3
bool __fastcall SelectSFXSortLayer_init(__int64 a1, int a2)
{
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCLabelBMFont *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // eax
  cocos2d::CCObject *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  signed int v32; // esi
  int v33; // r15d
  cocos2d::CCObject *v34; // rbx
  const char *v35; // rax
  cocos2d::CCObject *v36; // rdi
  float v37; // xmm0_4
  __int64 v38; // rax
  void *v39; // rcx
  int v40; // [rsp+50h] [rbp-79h] BYREF
  float v41; // [rsp+58h] [rbp-71h] BYREF
  float v42; // [rsp+5Ch] [rbp-6Dh]
  void *v43; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v44[8]; // [rsp+68h] [rbp-61h] BYREF
  void *v45; // [rsp+70h] [rbp-59h]
  _BYTE v46[16]; // [rsp+78h] [rbp-51h] BYREF
  __int128 v47; // [rsp+88h] [rbp-41h] BYREF
  __int64 v48; // [rsp+98h] [rbp-31h]
  unsigned __int64 v49; // [rsp+A0h] [rbp-29h]

  v40 = -1778384896;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v40);
  if ( result )
  {
    sub_5ABA0(a1);
    *(_DWORD *)(a1 + 664) = a2;
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v5);
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v6);
    v8 = cocos2d::CCDirector::sharedDirector(v7);
    cocos2d::CCDirector::getWinSize(v8, &v41);
    v9 = cocos2d::CCLayer::create();
    *(_QWORD *)(a1 + 584) = v9;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v9);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v46, 0.0, 0.0, 80.0, 80.0);
    v11 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v10);
    v12 = *v11;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v40, 360.0, 240.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v12 + 312))(v11, v13);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v11,
      0xFFFFFFFFLL);
    v14 = *v11;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v40, v41 * 0.5, v42 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 184))(v11, v15);
    v16 = cocos2d::CCLabelBMFont::create("Select Sorting", (const char *)&qword_6FFF68);
    v17 = *(_QWORD *)v16;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v40, v41 * 0.5, (float)((float)(v42 * 0.5) + 120.0) - 20.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v17 + 184))(v16, v18);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v16);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 160LL))(v16);
    v23 = cocos2d::CCMenu::create(v20, v19, v21, v22);
    *(_QWORD *)(a1 + 552) = v23;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v23, 10);
    v24 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    v25 = CCMenuItemSpriteExtra_create(v24, 0, a1, (__int64)UploadPopup_onClose);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v25);
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v25 + 160LL))(v25);
    *((_DWORD *)v25 + 93) = 1070386381;
    v26 = *(_QWORD *)v25;
    v27 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v40,
      (float)((float)(v41 * 0.5) - 180.0) + 10.0,
      (float)((float)(v42 * 0.5) + 120.0) - 10.0);
    cocos2d::CCNode::convertToNodeSpace(v27, &v43, v28);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v26 + 184))(v25, v29);
    v30 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v43, v41 * 0.5, (float)((float)(v42 * 0.5) + 30.0) + 15.0);
    cocos2d::CCNode::convertToNodeSpace(v30, v44, v31);
    v32 = 0;
    while ( 1 )
    {
      v47 = 0;
      v49 = 15;
      LOBYTE(v47) = 0;
      switch ( v32 )
      {
        case 0:
          v48 = 3;
          LOWORD(v47) = *(_WORD *)"A-Z";
          WORD1(v47) = (unsigned __int8)aAZ[2];
          break;
        case 1:
          v48 = 3;
          LOWORD(v47) = *(_WORD *)"Z-A";
          WORD1(v47) = (unsigned __int8)aZA[2];
          break;
        case 2:
          v48 = 8;
          strcpy((char *)&v47, "Shortest");
          break;
        case 3:
          v48 = 7;
          *(_QWORD *)&v47 = 0x747365676E6F4CLL;
          break;
        case 4:
          v48 = 6;
          strcpy((char *)&v47, "Newest");
          break;
        case 5:
          v48 = 6;
          strcpy((char *)&v47, "Oldest");
          break;
        default:
          v48 = 2;
          strcpy((char *)&v47, "NA");
          break;
      }
      v33 = *(_DWORD *)(a1 + 664);
      v43 = operator new(0x2C8u);
      v34 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v43);
      if ( v34 )
      {
        v35 = "GJ_button_05.png";
        if ( v32 == v33 )
          v35 = "GJ_button_02.png";
        if ( ButtonSprite_init(
               (__int64)v34,
               (__int64)&v47,
               60,
               0,
               1056964608,
               1,
               (const char *)&qword_6FFF68,
               (__int64)v35,
               1106247680) )
        {
          cocos2d::CCObject::autorelease(v34);
        }
        else
        {
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v34 + 8LL))(v34, 1);
          LODWORD(v34) = 0;
        }
      }
      v45 = operator new(0x208u);
      v36 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v45);
      if ( !v36 )
        goto LABEL_21;
      if ( !(unsigned __int8)sub_47940((_DWORD)v36, (_DWORD)v34, 0, a1, (__int64)SelectSFXSortLayer_onSelect) )
        break;
      cocos2d::CCObject::autorelease(v36);
LABEL_22:
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v36 + 64LL))(v36, (unsigned int)v32);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v36);
      v37 = floorf((float)(v32 / 2)) * -60.0;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v46, (float)((float)((float)(v32 % 2) * 100.0) - 100.0) + 50.0, v37);
      cocos2d::CCPoint::operator+(v44, &v40, v38);
      (*(void (__fastcall **)(cocos2d::CCObject *, int *))(*(_QWORD *)v36 + 184LL))(v36, &v40);
      if ( v49 > 0xF )
      {
        v39 = (void *)v47;
        if ( v49 + 1 >= 0x1000 )
        {
          v39 = *(void **)(v47 - 8);
          if ( (unsigned __int64)(v47 - (_QWORD)v39 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v39);
      }
      if ( ++v32 > 5 )
      {
        *(_DWORD *)(a1 + 640) = -1;
        *(_BYTE *)(a1 + 596) = 1;
        return 1;
      }
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v36 + 8LL))(v36, 1);
LABEL_21:
    v36 = 0;
    goto LABEL_22;
  }
  return result;
}
