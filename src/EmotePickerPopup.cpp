#include <Geode/binding/EmotePickerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x1211b0
// Method: EmotePickerPopup::~EmotePickerPopup
cocos2d::CCNode *__fastcall EmotePickerPopup__dtor_EmotePickerPopup(cocos2d::CCNode *Block, char a2)
{
  _QWORD *v4; // rcx

  v4 = (_QWORD *)*((_QWORD *)Block + 150); /*0x1211bf*/
  if ( v4 ) /*0x1211c9*/
  {
    if ( ((*((_QWORD *)Block + 152) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x1211e0*/
    {
      if ( (unsigned __int64)v4 - *(v4 - 1) - 8 > 0x1F ) /*0x1211f5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x121250*/
      v4 = (_QWORD *)*(v4 - 1); /*0x1211f7*/
    }
    j_j_free(v4); /*0x1211fa*/
    *((_QWORD *)Block + 150) = 0; /*0x121201*/
    *((_QWORD *)Block + 151) = 0; /*0x121208*/
    *((_QWORD *)Block + 152) = 0; /*0x12120f*/
  }
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x121219*/
  if ( (a2 & 1) != 0 ) /*0x121222*/
    j_j_free(Block); /*0x12122c*/
  return Block; /*0x121234*/
}

// [2/7] Address: 0x121730
// Method: EmotePickerPopup::textChanged
__int64 __fastcall EmotePickerPopup_textChanged(__int64 a1)
{
  return sub_122110(a1 - 544);
}

// [3/7] Address: 0x121740
// Method: EmotePickerPopup::onBuildWindowContent
// Hidden C++ exception states: #wind=2
__int64 __fastcall EmotePickerPopup_onBuildWindowContent(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  const void **v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdi
  __int64 *v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  char *v22; // r14
  __int64 *v23; // r8
  _BYTE *v24; // rdx
  char *v25; // rcx
  size_t v26; // r8
  int v27; // ebx
  __int64 v28; // rdi
  char *v29; // rdx
  __int128 v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h]
  void *v34; // [rsp+88h] [rbp+10h]
  __int64 v35; // [rsp+88h] [rbp+10h]

  v2 = a1; /*0x121759*/
  v3 = (const void **)(a1 + 1200); /*0x12175c*/
  v4 = *(_QWORD *)(a1 + 1200); /*0x121763*/
  if ( v4 != *(_QWORD *)(a1 + 1208) ) /*0x12176a*/
    *(_QWORD *)(a1 + 1208) = v4; /*0x12176c*/
  v31 = 0; /*0x121773*/
  v32 = 0; /*0x12177b*/
  v5 = qword_905FD0; /*0x121780*/
  if ( !qword_905FD0 ) /*0x12178a*/
  {
    v34 = operator new(0x6E8u); /*0x121796*/
    qword_905FD0 = sub_2723A0(v34); /*0x1217a7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1217b8*/
    v5 = qword_905FD0; /*0x1217ba*/
  }
  sub_120D40(v5 + 1704, a2, &v31); /*0x1217cd*/
  v6 = 0; /*0x1217d2*/
  v7 = v31; /*0x1217da*/
  if ( (__int64)(*((_QWORD *)&v31 + 1) - v31) >> 5 ) /*0x1217e2*/
  {
    v8 = 0; /*0x1217f9*/
    do /*0x12199a*/
    {
      v9 = sub_7DE30(v8 + v7); /*0x121809*/
      v11 = v9; /*0x12180e*/
      if ( v9 && !*(_BYTE *)(v9 + 27) ) /*0x12181a*/
      {
        SetupSmartBlockLayer_onCreateAll(v10); /*0x121824*/
        v12 = (int)Block; /*0x121830*/
        if ( (int)(((_BYTE *)*(&Block + 1) - (_BYTE *)Block) / 48) <= 0 ) /*0x121850*/
          v12 = 0; /*0x121850*/
        v13 = sub_121A40(v2, v11, (unsigned int)(((int)v11 - v12) / 48 + 100000)); /*0x12187b*/
        v35 = v13; /*0x121880*/
        if ( v13 ) /*0x12188b*/
        {
          v17 = (__int64 *)v3[1]; /*0x121891*/
          v18 = (__int64 *)v3[2]; /*0x121895*/
          if ( v17 == v18 ) /*0x12189c*/
          {
            v19 = ((char *)v17 - (_BYTE *)*v3) >> 3; /*0x1218b4*/
            if ( v19 == 0x1FFFFFFFFFFFFFFFLL ) /*0x1218bb*/
              sub_59000(v14, v18, v15, v16); /*0x121a30*/
            v20 = ((char *)v18 - (_BYTE *)*v3) >> 3; /*0x1218c8*/
            if ( v20 <= 0x1FFFFFFFFFFFFFFFLL - (v20 >> 1) ) /*0x1218db*/
            {
              v21 = v19 + 1; /*0x1218eb*/
              if ( v20 + (v20 >> 1) >= v19 + 1 ) /*0x1218f1*/
                v21 = v20 + (v20 >> 1); /*0x1218f1*/
              if ( v21 > 0x1FFFFFFFFFFFFFFFLL ) /*0x1218f8*/
                sub_8CF0(v20 >> 1, v20); /*0x121a2a*/
            }
            else
            {
              v21 = 0x1FFFFFFFFFFFFFFFLL; /*0x1218dd*/
            }
            v22 = (char *)sub_3C460(8 * v21); /*0x12190b*/
            *(_QWORD *)&v22[8 * v19] = v35; /*0x121916*/
            v23 = (__int64 *)v3[1]; /*0x12191a*/
            v24 = *v3; /*0x12191e*/
            v25 = v22; /*0x121921*/
            if ( v17 == v23 ) /*0x121927*/
            {
              v26 = (char *)v23 - v24; /*0x121929*/
            }
            else
            {
              memmove(v22, v24, (char *)v17 - v24); /*0x121934*/
              v26 = (_BYTE *)v3[1] - (_BYTE *)v17; /*0x12193d*/
              v25 = &v22[8 * v19 + 8]; /*0x121944*/
              v24 = v17; /*0x121948*/
            }
            memmove(v25, v24, v26); /*0x12194b*/
            sub_BBD70(v3, v22, v19 + 1, v21); /*0x12195c*/
            v2 = a1; /*0x121961*/
          }
          else
          {
            *v17 = v13; /*0x12189e*/
            v3[1] = (char *)v3[1] + 8; /*0x1218a1*/
          }
        }
      }
      ++v6; /*0x12197f*/
      v8 += 32; /*0x121982*/
      v7 = v31; /*0x12198b*/
    }
    while ( v6 < (__int64)(*((_QWORD *)&v31 + 1) - v31) >> 5 ); /*0x12199a*/
  }
  v27 = 0; /*0x1219a0*/
  v28 = 0; /*0x1219a2*/
  do /*0x1219fd*/
  {
    SetupSmartBlockLayer_onCreateAll(v7); /*0x1219a5*/
    v7 = (_BYTE *)*(&Block + 1) - (_BYTE *)Block; /*0x1219b8*/
    v29 = (char *)Block + v28; /*0x1219d1*/
    if ( v27 >= (*((_DWORD *)&Block + 2) - (int)Block) / 48 ) /*0x1219d5*/
      v29 = 0; /*0x1219d7*/
    if ( *(_QWORD *)v29 && !v29[27] ) /*0x1219e0*/
      sub_121A40(v2, v29, (unsigned int)v27); /*0x1219ec*/
    ++v27; /*0x1219f1*/
    v28 += 48; /*0x1219f3*/
  }
  while ( v27 < 262 ); /*0x1219fd*/
  sub_121B20(v2); /*0x121a02*/
  return sub_74F50(&v31); /*0x121a12*/
}

// [4/7] Address: 0x121e50
// Method: EmotePickerPopup::onWindowResized
// attributes: thunk
__int64 __fastcall EmotePickerPopup_onWindowResized(__int64 a1)
{
  return sub_121B20(a1);
}

// [5/7] Address: 0x121e60
// Method: EmotePickerPopup::ccTouchBegan
char __fastcall EmotePickerPopup_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  float *v3; // rbx
  float v7; // xmm4_4
  const struct cocos2d::CCPoint *Location; // rax
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF
  char v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+88h] [rbp+20h] BYREF

  v3 = (float *)(a1 - 320); /*0x121e6c*/
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 320) + 344LL))(a1 - 320) ) /*0x121e8a*/
    goto LABEL_4; /*0x121e8a*/
  sub_17BF50(v3); /*0x121e93*/
  if ( *(_DWORD *)(a1 + 740) != -1 ) /*0x121e9f*/
  {
    v7 = v3[262]; /*0x121ea5*/
    cocos2d::CCRect::CCRect( /*0x121f1e*/
      (cocos2d::CCRect *)v11,
      (float)(v3[263] - (float)((float)(v7 * v3[260]) * 0.5)) - 6.0,
      (float)(v3[264] - (float)((float)(v7 * v3[261]) * 0.5)) - 6.0,
      (float)(v7 * v3[260]) + 12.0,
      (float)(v7 * v3[261]) + 12.0);
    Location = (const struct cocos2d::CCPoint *)cocos2d::CCTouch::getLocation(a2, &v13); /*0x121f2f*/
    if ( !cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v11, Location) ) /*0x121f3d*/
      goto LABEL_4; /*0x121f4a*/
    return 1; /*0x121fe5*/
  }
  if ( (unsigned __int8)sub_17C880(v3, a2, a3) ) /*0x121fca*/
  {
    *(_DWORD *)(a1 + 740) = *(_DWORD *)(a2 + 56); /*0x121fda*/
    return 1; /*0x121fda*/
  }
LABEL_4:
  cocos2d::CCTouch::getLocation(a2, &v12); /*0x121f50*/
  if ( !*(_QWORD *)(a1 + 832) /*0x121f85*/
    || (cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, (const struct cocos2d::CCPoint *)&v12),
        !(unsigned __int8)sub_57940(*(_QWORD *)(a1 + 832), v9)) )
  {
    if ( !cocos2d::CCRect::containsPoint((cocos2d::CCRect *)(a1 + 856), (const struct cocos2d::CCPoint *)&v12) ) /*0x121f9a*/
      (*(void (__fastcall **)(float *, _QWORD))(*(_QWORD *)v3 + 1104LL))(v3, 0); /*0x121fac*/
  }
  return 0; /*0x121fb4*/
}

// [6/7] Address: 0x122500
// Method: EmotePickerPopup::keyDown
void __fastcall EmotePickerPopup_keyDown(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = a1 - 344; /*0x122517*/
  if ( a2 == 27 ) /*0x122526*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1104LL))(a1 - 344, 0); /*0x122530*/
    return; /*0x122536*/
  }
  v5 = *(_QWORD *)(v2 + 1168); /*0x122538*/
  if ( v5 ) /*0x122542*/
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 16LL))(v5, v2, a2); /*0x122550*/
  if ( !*(_BYTE *)(v2 + 1079) ) /*0x122553*/
  {
    v6 = qword_903788; /*0x12255c*/
    if ( !qword_903788 ) /*0x122566*/
    {
LABEL_9:
      v7 = *(_QWORD *)(a1 + 656); /*0x12257e*/
      if ( v7 ) /*0x122588*/
        (**(void (__fastcall ***)(__int64, _QWORD))(v7 + 344))(v7 + 344, a2); /*0x122599*/
      return; /*0x12259b*/
    }
    while ( v6 != v2 ) /*0x12256b*/
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 504LL))(v6); /*0x122576*/
      if ( !v6 ) /*0x12257c*/
        goto LABEL_9; /*0x12257c*/
    }
  }
  *(_BYTE *)(a1 + 735) = 0; /*0x12259d*/
  if ( a2 == 13 ) /*0x1225a7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 1216LL))(v2); /*0x1225af*/
}

// [7/7] Address: 0x1225d0
// Method: EmotePickerPopup::show
__int64 __fastcall EmotePickerPopup_show(__int64 a1)
{
  *(_DWORD *)(a1 + 592) = 0; /*0x1225d0*/
  return SetupTriggerPopup_show(a1);
}
