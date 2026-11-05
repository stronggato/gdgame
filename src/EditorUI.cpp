#include <Geode/binding/EditorUI.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/110] Address: 0x57070
// Method: EditorUI::sliderChanged
__m128 __fastcall EditorUI_sliderChanged(__int64 a1)
{
  __int64 v2; // rbx
  float i; // xmm7_4
  __int64 (__fastcall *v4)(__int64); // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int128 v7; // xmm6
  char v9; // [rsp+50h] [rbp+8h] BYREF
  float v10; // [rsp+54h] [rbp+Ch]

  v2 = a1; /*0x5708c*/
  for ( i = 1.0; v2; v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 504LL))(v2) ) /*0x5709a*/
    i = i * (*(float (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x570b2*/
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL); /*0x570d1*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x570dd*/
  v6 = v4(a1); /*0x570e0*/
  cocos2d::CCNode::convertToWorldSpace(v6, &v9, v5); /*0x570ed*/
  v7 = 0x3F000000u; /*0x570ff*/
  *(float *)&v7 = 0.5 - *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1) + 4); /*0x5710a*/
  *(float *)&v7 = (float)(*(float *)&v7 /*0x57127*/
                        * *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1) + 4))
                * i;
  *(float *)&v7 = *(float *)&v7 + v10; /*0x57130*/
  return (__m128)v7; /*0x57139*/
}

// [2/110] Address: 0x814e0
// Method: EditorUI::selectObjects
// Hidden C++ exception states: #wind=1
void __fastcall EditorUI_selectObjects(__int64 a1, struct cocos2d::CCNode *a2, unsigned int a3, unsigned int a4)
{
  float v4; // xmm0_4
  cocos2d::CCNode *v9; // rcx
  float v10; // xmm1_4
  int v11; // ebx
  __int64 *v12; // r15
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 *i; // rcx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 j; // rax
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int128 v25; // [rsp+30h] [rbp-68h] BYREF
  __int128 v26; // [rsp+40h] [rbp-58h]

  if ( a2 ) /*0x814e3*/
  {
    if ( *(float *)(a1 + 520) > 0.0 ) /*0x81520*/
    {
      (*(void (__fastcall **)(struct cocos2d::CCNode *))(*(_QWORD *)a2 + 232LL))(a2); /*0x81543*/
      v10 = *(float *)(a1 + 520); /*0x81549*/
      if ( v10 > 0.0 ) /*0x81554*/
        v11 = (int)floorf((float)-v4 / v10); /*0x8156a*/
      else
        v11 = 0; /*0x81556*/
      if ( _RTDynamicCast( /*0x81589*/
             a2,
             0,
             &cocos2d::CCNode `RTTI Type Descriptor',
             &cocos2d::CCMenuItem `RTTI Type Descriptor',
             0) )
      {
        v12 = (__int64 *)(a1 + 544); /*0x81597*/
        v13 = *(__int64 **)(a1 + 544); /*0x8159e*/
        v14 = (__int64 *)v13[1]; /*0x815a1*/
        for ( i = v13; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 ) /*0x815a8*/
        {
          if ( *((_DWORD *)v14 + 8) >= v11 ) /*0x815b3*/
            i = v14; /*0x815bb*/
          else
            v14 += 2; /*0x815b5*/
        }
        if ( *((_BYTE *)i + 25) || v11 < *((_DWORD *)i + 8) || i == v13 ) /*0x815d5*/
        {
          v17 = sub_81250(a1, (unsigned int)v11); /*0x815ea*/
          v16 = sub_81450(a1); /*0x815f5*/
          v20 = *v12; /*0x815f8*/
          v21 = *(_QWORD *)(*v12 + 8); /*0x815fb*/
          *(_QWORD *)&v26 = v21; /*0x815ff*/
          DWORD2(v26) = 0; /*0x81606*/
          for ( j = v20; !*(_BYTE *)(v21 + 25); v21 = *(_QWORD *)v21 ) /*0x8160d*/
          {
            *(_QWORD *)&v26 = v21; /*0x81612*/
            if ( *(_DWORD *)(v21 + 32) >= v11 ) /*0x8161a*/
            {
              DWORD2(v26) = 1; /*0x81626*/
              j = v21; /*0x8162e*/
            }
            else
            {
              DWORD2(v26) = 0; /*0x8161c*/
              v21 += 16; /*0x81620*/
            }
          }
          if ( *(_BYTE *)(j + 25) || v11 < *(_DWORD *)(j + 32) ) /*0x81641*/
          {
            if ( v12[1] == 0x555555555555555LL ) /*0x81651*/
              sub_5AC20(v21, 0, v18, v19); /*0x81718*/
            v23 = operator new(0x30u); /*0x81666*/
            v23[8] = v11; /*0x8166c*/
            *((_QWORD *)v23 + 5) = 0; /*0x8166f*/
            *(_QWORD *)v23 = v20; /*0x81677*/
            *((_QWORD *)v23 + 1) = v20; /*0x8167a*/
            *((_QWORD *)v23 + 2) = v20; /*0x8167e*/
            *((_WORD *)v23 + 12) = 0; /*0x81682*/
            v25 = v26; /*0x8168d*/
            j = sub_69600(v12, &v25, v23); /*0x8169d*/
          }
          *(_QWORD *)(j + 40) = v16; /*0x816a2*/
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v17 + 456LL))(v17, v16, 10); /*0x816b5*/
        }
        else
        {
          v16 = i[5]; /*0x815d7*/
        }
        (*(void (__fastcall **)(__int64, struct cocos2d::CCNode *, _QWORD, _QWORD))(*(_QWORD *)v16 + 448LL))( /*0x816ca*/
          v16,
          a2,
          a3,
          a4);
      }
      else
      {
        v24 = sub_81250(a1, (unsigned int)v11); /*0x816d7*/
        (*(void (__fastcall **)(__int64, struct cocos2d::CCNode *, _QWORD, _QWORD))(*(_QWORD *)v24 + 448LL))( /*0x816f2*/
          v24,
          a2,
          a3,
          a4);
      }
    }
    else
    {
      v9 = *(cocos2d::CCNode **)(a1 + 416); /*0x81522*/
      if ( v9 ) /*0x8152c*/
        cocos2d::CCNode::addChild(v9, a2, a3, a4); /*0x81532*/
    }
  }
}

// [3/110] Address: 0x100c90
// Method: EditorUI::spriteFromObjectString
// Hidden C++ exception states: #wind=1
__int64 __fastcall EditorUI_spriteFromObjectString(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // r14
  int v7; // ebp
  __int64 v8; // r13
  int v9; // r9d
  __int64 v10; // r15
  __int64 v11; // r8
  float v12; // xmm7_4
  float v13; // xmm6_4
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  struct cocos2d::CCLabelBMFont *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  float v23; // xmm7_4
  float v24; // xmm6_4
  __int64 v25; // rbx
  __int64 v26; // rax
  int v28; // [rsp+20h] [rbp-108h]
  _BYTE v31[8]; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE v32[8]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v33[32]; // [rsp+48h] [rbp-E0h] BYREF

  v2 = a2; /*0x100ce8*/
  v3 = a1; /*0x100cf0*/
  v4 = (a2[1] - *a2) / 12; /*0x100d19*/
  v5 = (unsigned int)(v4 + 6); /*0x100d1c*/
  v28 = (int)v5 / 7; /*0x100d34*/
  v6 = cocos2d::CCNode::create(v5, (unsigned int)((int)v5 / 7)); /*0x100d3e*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 584) + 456LL))(*(_QWORD *)(v3 + 584), v6, 2); /*0x100d5b*/
  v7 = 0; /*0x100d5e*/
  v8 = (int)v4; /*0x100d60*/
  v9 = 7; /*0x100d63*/
  if ( (int)v4 > 0 ) /*0x100d87*/
  {
    v10 = 0; /*0x100d8d*/
    do /*0x100f1a*/
    {
      v11 = (unsigned int)(v4 - 7 * (v7 / 7)); /*0x100dca*/
      if ( (int)v11 > 7 ) /*0x100dd1*/
        v11 = 7; /*0x100dd1*/
      v12 = (float)((float)(v7 % 7) - (float)((float)(v11 - 1) * 0.5)) * 50.0; /*0x100df4*/
      v13 = (float)(v7 / -7) * 72.0; /*0x100e02*/
      v14 = *v2; /*0x100e07*/
      v15 = *(unsigned int *)(v10 + *v2 + 4); /*0x100e0a*/
      if ( !(_DWORD)v15 ) /*0x100e11*/
        v15 = 0xFFFFFFFFLL; /*0x100e11*/
      v16 = GJDifficultySprite_create(v15, 0, v11, 7); /*0x100e1c*/
      GauntletSelectLayer_playUnlockAnimation(v16, *(unsigned int *)(v10 + v14)); /*0x100e26*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 160LL))(v16); /*0x100e3c*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 456LL))(v6, v16, 2); /*0x100e54*/
      v17 = *(_QWORD *)v16; /*0x100e57*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, v12, v13); /*0x100e65*/
      (*(void (__fastcall **)(__int64, __int64))(v17 + 184))(v16, v18); /*0x100e71*/
      v19 = GameToolbox_pointsToString(v33, *(unsigned int *)(v10 + v14 + 8)); /*0x100e81*/
      if ( *(_QWORD *)(v19 + 24) > 0xFu ) /*0x100e8c*/
        v19 = *(_QWORD *)v19; /*0x100e8e*/
      v20 = cocos2d::CCLabelBMFont::create((const char *)v19, (const char *)&qword_6FFF68); /*0x100ea1*/
      sub_3C310(v33); /*0x100ea9*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v20 + 160LL))(v20); /*0x100ebf*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v6 + 456LL))(v6, v20, 2); /*0x100ed7*/
      v21 = *(_QWORD *)v20; /*0x100eda*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v31, v12, v13 - 30.0); /*0x100eed*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v21 + 184))(v20, v22); /*0x100ef9*/
      ++v7; /*0x100eff*/
      v10 += 12; /*0x100f01*/
      --v8; /*0x100f05*/
      v9 = 7; /*0x100f09*/
      v2 = a2; /*0x100f0f*/
    }
    while ( v8 ); /*0x100f1a*/
    v3 = a1; /*0x100f20*/
  }
  v23 = (float)((float)(v28 - 1) * 72.0) + 66.0; /*0x100f37*/
  if ( (int)v4 < 7 ) /*0x100f43*/
    v9 = v4; /*0x100f43*/
  v24 = fminf(fminf(1.0, 340.0 / (float)((float)v9 * 50.0)), (float)(*(float *)(v3 + 728) - 108.0) / v23); /*0x100f80*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6); /*0x100f8d*/
  v25 = *(_QWORD *)v6; /*0x100f93*/
  cocos2d::CCPoint::CCPoint( /*0x100fbf*/
    (cocos2d::CCPoint *)v31,
    *(float *)(v3 + 732),
    (float)((float)((float)(v23 * 0.5) - 26.0) * v24) + *(float *)(v3 + 736));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v25 + 184))(v6, v26); /*0x100fd1*/
}

// [4/110] Address: 0x15a000
// Method: EditorUI::onAssignNewGroupID
// Hidden C++ exception states: #wind=3
void __fastcall EditorUI_onAssignNewGroupID(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _BYTE *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int8 isSpecialChestUnlocked; // si
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int *v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 *i; // r14
  __int64 v15; // rbx
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF
  void *v17; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 576); /*0x15a015*/
  if ( v2 && *(_QWORD *)(a1 + 568) ) /*0x15a025*/
  {
    v4 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 952LL))(v2); /*0x15a03c*/
    v5 = *(_QWORD *)(a1 + 568); /*0x15a049*/
    if ( !qword_905FE0 ) /*0x15a058*/
    {
      v17 = operator new(0x3E8u); /*0x15a064*/
      qword_905FE0 = sub_2D2B40(v17); /*0x15a072*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x15a07f*/
    }
    sub_2EB110(v3, v16, *(unsigned int *)(v5 + 56)); /*0x15a08b*/
    v6 = qword_905FE0; /*0x15a091*/
    if ( !qword_905FE0 ) /*0x15a09b*/
    {
      v17 = operator new(0x3E8u); /*0x15a0a7*/
      qword_905FE0 = sub_2D2B40(v17); /*0x15a0b5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x15a0c6*/
      v6 = qword_905FE0; /*0x15a0c8*/
    }
    isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v6, v16); /*0x15a0d9*/
    if ( isSpecialChestUnlocked ) /*0x15a0de*/
    {
      v4[608] = 0; /*0x15a0e4*/
      LOBYTE(v8) = 1; /*0x15a0eb*/
      sub_562400(v4, 4, v8); /*0x15a0f6*/
      v9 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 480LL))(v4); /*0x15a101*/
      if ( v9 ) /*0x15a10a*/
      {
        v11 = *(unsigned int **)(v9 + 56); /*0x15a10c*/
        v12 = *v11; /*0x15a110*/
        if ( (_DWORD)v12 ) /*0x15a114*/
        {
          v13 = (__int64 *)*((_QWORD *)v11 + 2); /*0x15a116*/
          for ( i = &v13[v12 - 1]; v13 <= i; ++v13 ) /*0x15a125*/
          {
            v15 = *v13; /*0x15a127*/
            if ( !*v13 ) /*0x15a127*/
              break; /*0x15a12d*/
            LOBYTE(v10) = -106; /*0x15a136*/
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v15 + 320) + 40LL))(v15 + 320, v10); /*0x15a13f*/
            LOWORD(v17) = -26986; /*0x15a14e*/
            BYTE2(v17) = -106; /*0x15a153*/
            (**(void (__fastcall ***)(__int64, void **))(v15 + 320))(v15 + 320, &v17); /*0x15a16b*/
          }
        }
      }
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 576) + 936LL))( /*0x15a188*/
      *(_QWORD *)(a1 + 576),
      isSpecialChestUnlocked ^ 1u);
  }
}

// [5/110] Address: 0x193130
// Method: EditorUI::onTargetIDChange
int __fastcall EditorUI_onTargetIDChange(_QWORD *a1, __int64 a2)
{
  struct cocos2d::CCObject *v2; // rax
  char v4; // r14
  int v5; // ebp
  struct cocos2d::CCObject *v6; // rdi
  cocos2d::CCArray *v7; // rcx
  unsigned int v8; // ebx
  char v9; // bp
  __int64 v10; // rcx
  _BYTE *v11; // rbx
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rcx
  struct cocos2d::CCObject *v15; // r15
  __int64 v16; // rdi
  const char *v17; // rbx
  cocos2d::CCSpriteFrameCache *v18; // rax
  struct cocos2d::CCSpriteFrame *v19; // rax
  __int64 v20; // rcx
  _BYTE *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // bl
  __int64 v27; // rcx
  __int64 v28; // rcx

  v2 = (struct cocos2d::CCObject *)a1[134]; /*0x193138*/
  if ( v2 && *((_BYTE *)v2 + 544) ) /*0x193156*/
  {
    v4 = 1; /*0x19315f*/
  }
  else
  {
    v4 = 0; /*0x193164*/
    if ( !v2 ) /*0x19316a*/
    {
LABEL_11:
      v9 = 0; /*0x1931df*/
      goto LABEL_12; /*0x1931df*/
    }
  }
  v2 = (struct cocos2d::CCObject *)sub_182B60(); /*0x19316c*/
  if ( !v2 ) /*0x193174*/
    goto LABEL_11; /*0x193174*/
  v5 = *(_DWORD *)(a1[134] + 320LL); /*0x19317d*/
  v2 = (struct cocos2d::CCObject *)sub_182B60(); /*0x193183*/
  v6 = v2; /*0x193188*/
  v7 = (cocos2d::CCArray *)*((_QWORD *)v2 + 26); /*0x19318b*/
  if ( !v7 ) /*0x193195*/
    goto LABEL_11; /*0x193195*/
  v8 = 0; /*0x193197*/
  LODWORD(v2) = cocos2d::CCArray::count(v7); /*0x193199*/
  if ( !(_DWORD)v2 ) /*0x1931a1*/
    goto LABEL_11; /*0x1931a1*/
  while ( 1 ) /*0x1931b9*/
  {
    v2 = cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)v6 + 26), v8); /*0x1931b9*/
    if ( v2 ) /*0x1931c2*/
    {
      if ( *((_DWORD *)v2 + 80) == v5 ) /*0x1931ca*/
        break; /*0x1931ca*/
    }
    ++v8; /*0x1931d3*/
    LODWORD(v2) = cocos2d::CCArray::count(*((cocos2d::CCArray **)v6 + 26)); /*0x1931d5*/
    if ( v8 >= (unsigned int)v2 ) /*0x1931dd*/
      goto LABEL_11; /*0x1931dd*/
  }
  v9 = 1; /*0x193203*/
LABEL_12:
  v10 = a1[141]; /*0x1931e2*/
  v11 = a1 + 138; /*0x1931e9*/
  if ( v10 ) /*0x1931f3*/
  {
    if ( !v4 || *v11 ) /*0x1931fa*/
      a2 = 0; /*0x193208*/
    else
      LOBYTE(a2) = 1; /*0x1931ff*/
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 936LL))(v10, a2); /*0x19320d*/
  }
  v12 = a1[142]; /*0x193213*/
  if ( v12 ) /*0x19321d*/
  {
    if ( v4 && (v13 = *v11 == 0, v11 = a1 + 138, v13) ) /*0x19322e*/
      LOBYTE(a2) = 1; /*0x193230*/
    else
      a2 = 0; /*0x193234*/
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 936LL))(v12, a2); /*0x193239*/
  }
  v14 = a1[143]; /*0x19323f*/
  if ( v14 ) /*0x193249*/
  {
    if ( (v4 || v9) && !*v11 ) /*0x19325a*/
      LOBYTE(a2) = 1; /*0x19325f*/
    else
      a2 = 0; /*0x193263*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 936LL))(v14, a2); /*0x193268*/
    v2 = (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[143] + 952LL))(a1[143]); /*0x193278*/
    v15 = v2; /*0x19327e*/
    if ( v2 ) /*0x193284*/
    {
      v16 = *(_QWORD *)v2; /*0x193286*/
      v17 = "gj_heartOff_001.png"; /*0x193289*/
      if ( v9 ) /*0x19329a*/
        v17 = "gj_heartOn_001.png"; /*0x19329a*/
      v18 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x19329e*/
      v19 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v18, v17); /*0x1932aa*/
      LODWORD(v2) = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSpriteFrame *))(v16 + 1008))( /*0x1932b6*/
                      v15,
                      v19);
    }
  }
  v20 = a1[146]; /*0x1932c1*/
  v21 = a1 + 138; /*0x1932c8*/
  if ( v20 ) /*0x1932dc*/
  {
    if ( !v4 || *v21 ) /*0x1932e3*/
      a2 = 0; /*0x1932ec*/
    else
      LOBYTE(a2) = 1; /*0x1932e8*/
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 936LL))(v20, a2); /*0x1932f1*/
  }
  v22 = a1[144]; /*0x1932f7*/
  if ( v22 ) /*0x193301*/
  {
    LOBYTE(a2) = *v21 == 0; /*0x193309*/
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 936LL))(v22, a2); /*0x19330c*/
  }
  v23 = a1[145]; /*0x193312*/
  if ( v23 ) /*0x19331c*/
  {
    LOBYTE(a2) = *v21 == 0; /*0x193324*/
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 936LL))(v23, a2); /*0x193327*/
    v21 = a1 + 138; /*0x19332d*/
  }
  v24 = a1[147]; /*0x193334*/
  if ( v24 ) /*0x19333e*/
  {
    v25 = a1[134]; /*0x193340*/
    v26 = v25 && *(int *)(v25 + 320) > 0 && !*v21; /*0x19335e*/
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v24 + 336LL))(v24, v26); /*0x193366*/
    LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, bool))(*(_QWORD *)a1[147] + 936LL))(a1[147], v26); /*0x193379*/
    v21 = a1 + 138; /*0x19337f*/
  }
  v27 = a1[149]; /*0x193386*/
  if ( v27 ) /*0x193390*/
  {
    LOBYTE(a2) = *v21 == 0; /*0x193398*/
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 936LL))(v27, a2); /*0x19339b*/
  }
  v28 = a1[150]; /*0x1933a1*/
  if ( v28 ) /*0x1933b0*/
  {
    if ( !v4 || *v21 ) /*0x1933b7*/
    {
      LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 936LL))(v28, 0); /*0x1933db*/
    }
    else
    {
      LOBYTE(a2) = 1; /*0x1933bf*/
      LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 936LL))(v28, a2); /*0x1933c8*/
    }
  }
  return (int)v2; /*0x1933e2*/
}

// [6/110] Address: 0x193f10
// Method: EditorUI::onCopyState
// Hidden C++ exception states: #wind=1
void __fastcall EditorUI_onCopyState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 1072) ) /*0x193f19*/
  {
    v4 = qword_905FD0; /*0x193f23*/
    if ( !qword_905FD0 ) /*0x193f2d*/
    {
      v6 = operator new(0x6E8u); /*0x193f39*/
      qword_905FD0 = sub_2723A0(v6); /*0x193f47*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x193f58*/
      v4 = qword_905FD0; /*0x193f5a*/
    }
    LOBYTE(a3) = 1; /*0x193f61*/
    sub_27ACB0(v4, "0047", a3); /*0x193f6b*/
    v5 = ProfilePage_create(*(unsigned int *)(*(_QWORD *)(a1 + 1072) + 344LL), 0); /*0x193f7f*/
    if ( v5 ) /*0x193f87*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x193f9b*/
  }
}

// [7/110] Address: 0x1a60d0
// Method: EditorUI::EditorUI
// Hidden C++ exception states: #wind=8
__int64 __fastcall EditorUI_EditorUI(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax

  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)a1); /*0x1a60e2*/
  *(_QWORD *)a1 = &EditorUI::`vftable'; /*0x1a60f0*/
  *(_QWORD *)(a1 + 320) = &EditorUI::`vftable'; /*0x1a60fa*/
  *(_QWORD *)(a1 + 328) = &EditorUI::`vftable'; /*0x1a6108*/
  *(_QWORD *)(a1 + 336) = &EditorUI::`vftable'; /*0x1a6116*/
  *(_QWORD *)(a1 + 344) = &EditorUI::`vftable'; /*0x1a6124*/
  *(_QWORD *)(a1 + 352) = &EditorUI::`vftable'; /*0x1a6132*/
  *(_QWORD *)(a1 + 408) = &EditorUI::`vftable'; /*0x1a6140*/
  *(_QWORD *)(a1 + 416) = &EditorUI::`vftable'; /*0x1a614e*/
  *(_QWORD *)(a1 + 424) = &EditorUI::`vftable'; /*0x1a615c*/
  *(_QWORD *)(a1 + 432) = &EditorUI::`vftable'; /*0x1a616a*/
  *(_QWORD *)(a1 + 440) = &EditorUI::`vftable'; /*0x1a6178*/
  *(_QWORD *)(a1 + 448) = &EditorUI::`vftable'; /*0x1a6186*/
  *(_QWORD *)(a1 + 456) = &EditorUI::`vftable'; /*0x1a6194*/
  *(_DWORD *)(a1 + 464) = 0; /*0x1a61a9*/
  *(_QWORD *)(a1 + 472) = 0; /*0x1a61ac*/
  *(_QWORD *)(a1 + 480) = 0; /*0x1a61b0*/
  v2 = operator new(0x30u); /*0x1a61b9*/
  *v2 = v2; /*0x1a61be*/
  v2[1] = v2; /*0x1a61c1*/
  *(_QWORD *)(a1 + 472) = v2; /*0x1a61c5*/
  *(_QWORD *)(a1 + 488) = 0; /*0x1a61c9*/
  *(_QWORD *)(a1 + 496) = 0; /*0x1a61cd*/
  *(_QWORD *)(a1 + 504) = 0; /*0x1a61d1*/
  *(_QWORD *)(a1 + 512) = 7; /*0x1a61d5*/
  *(_QWORD *)(a1 + 520) = 8; /*0x1a61dd*/
  *(_DWORD *)(a1 + 464) = 1065353216; /*0x1a61e5*/
  v3 = *(_QWORD *)(a1 + 472); /*0x1a61ec*/
  v4 = operator new(0x80u); /*0x1a6216*/
  v5 = *(_QWORD **)(a1 + 488); /*0x1a6219*/
  v6 = (__int64)(*(_QWORD *)(a1 + 504) - (_QWORD)v5) >> 3; /*0x1a6224*/
  if ( v6 ) /*0x1a622b*/
  {
    if ( (unsigned __int64)(8 * v6) >= 0x1000 ) /*0x1a623c*/
    {
      if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F ) /*0x1a6251*/
        invoke_watson(0, 0, 0, 0, 0); /*0x1a6290*/
      v5 = (_QWORD *)*(v5 - 1); /*0x1a6253*/
    }
    j_j_free(v5); /*0x1a6256*/
  }
  *(_QWORD *)(a1 + 488) = v4; /*0x1a625b*/
  v7 = v4 + 16; /*0x1a625f*/
  *(_QWORD *)(a1 + 496) = v4 + 16; /*0x1a6266*/
  *(_QWORD *)(a1 + 504) = v4 + 16; /*0x1a626a*/
  do /*0x1a627d*/
    *v4++ = v3; /*0x1a6273*/
  while ( v4 != v7 ); /*0x1a627d*/
  sub_1A6040(a1 + 528); /*0x1a62a9*/
  *(_DWORD *)(a1 + 600) = 0; /*0x1a62ba*/
  *(_QWORD *)(a1 + 608) = 0; /*0x1a62bc*/
  *(_QWORD *)(a1 + 616) = 0; /*0x1a62c0*/
  v8 = operator new(0x20u); /*0x1a62c9*/
  *v8 = v8; /*0x1a62ce*/
  v8[1] = v8; /*0x1a62d1*/
  *(_QWORD *)(a1 + 608) = v8; /*0x1a62d5*/
  *(_QWORD *)(a1 + 624) = 0; /*0x1a62dd*/
  *(_QWORD *)(a1 + 632) = 0; /*0x1a62e0*/
  *(_QWORD *)(a1 + 640) = 0; /*0x1a62e4*/
  *(_QWORD *)(a1 + 648) = 7; /*0x1a62e8*/
  *(_QWORD *)(a1 + 656) = 8; /*0x1a62f0*/
  *(_DWORD *)(a1 + 600) = 1065353216; /*0x1a62f8*/
  sub_3E200(a1 + 624, 16, *(_QWORD *)(a1 + 608)); /*0x1a6307*/
  *(_BYTE *)(a1 + 664) = 0; /*0x1a630d*/
  *(_QWORD *)(a1 + 672) = 0; /*0x1a6314*/
  *(_BYTE *)(a1 + 680) = 0; /*0x1a631b*/
  *(_QWORD *)(a1 + 696) = 1106247680; /*0x1a6322*/
  *(_BYTE *)(a1 + 704) = 0; /*0x1a632d*/
  *(_QWORD *)(a1 + 708) = -1; /*0x1a6334*/
  *(_BYTE *)(a1 + 716) = 0; /*0x1a633f*/
  *(_QWORD *)(a1 + 720) = 0; /*0x1a6346*/
  *(_QWORD *)(a1 + 728) = 0; /*0x1a634d*/
  *(_DWORD *)(a1 + 736) = 0; /*0x1a6354*/
  *(_BYTE *)(a1 + 740) = 0; /*0x1a635e*/
  *(_QWORD *)(a1 + 744) = -1; /*0x1a6365*/
  *(_DWORD *)(a1 + 752) = -1; /*0x1a6370*/
  *(_BYTE *)(a1 + 756) = 0; /*0x1a637a*/
  *(_QWORD *)(a1 + 760) = -1; /*0x1a6381*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 768)); /*0x1a6393*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 776)); /*0x1a63a0*/
  *(_QWORD *)(a1 + 784) = 0; /*0x1a63a6*/
  *(_DWORD *)(a1 + 792) = 1065353216; /*0x1a63ad*/
  *(_WORD *)(a1 + 796) = 0; /*0x1a63b7*/
  *(_BYTE *)(a1 + 798) = 0; /*0x1a63c0*/
  *(_QWORD *)(a1 + 800) = 0; /*0x1a63c7*/
  *(_QWORD *)(a1 + 808) = 0; /*0x1a63ce*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 816)); /*0x1a63dc*/
  *(_BYTE *)(a1 + 824) = 0; /*0x1a63e2*/
  *(_QWORD *)(a1 + 832) = 0; /*0x1a63e9*/
  *(_QWORD *)(a1 + 840) = 0; /*0x1a63f0*/
  *(_QWORD *)(a1 + 864) = 0; /*0x1a63f7*/
  *(_QWORD *)(a1 + 872) = 0; /*0x1a63fe*/
  *(_QWORD *)(a1 + 880) = 0; /*0x1a6405*/
  *(_QWORD *)(a1 + 888) = 0; /*0x1a640c*/
  *(_QWORD *)(a1 + 896) = 0; /*0x1a6413*/
  *(_DWORD *)(a1 + 904) = 0; /*0x1a641a*/
  *(_WORD *)(a1 + 908) = 0; /*0x1a6420*/
  *(_DWORD *)(a1 + 912) = 0; /*0x1a6429*/
  *(_WORD *)(a1 + 916) = 0; /*0x1a6433*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 920)); /*0x1a6443*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 936)); /*0x1a6450*/
  *(_QWORD *)(a1 + 944) = 0; /*0x1a6456*/
  *(_QWORD *)(a1 + 952) = 0; /*0x1a645d*/
  *(_QWORD *)(a1 + 960) = 0; /*0x1a6464*/
  *(_QWORD *)(a1 + 968) = 0; /*0x1a646b*/
  *(_QWORD *)(a1 + 976) = 0; /*0x1a6472*/
  *(_QWORD *)(a1 + 984) = 0; /*0x1a6479*/
  *(_QWORD *)(a1 + 992) = 0; /*0x1a6480*/
  *(_QWORD *)(a1 + 1000) = 0; /*0x1a6487*/
  *(_QWORD *)(a1 + 1016) = 0; /*0x1a648e*/
  *(_QWORD *)(a1 + 1024) = 0; /*0x1a6495*/
  *(_QWORD *)(a1 + 1032) = 0; /*0x1a649c*/
  *(_QWORD *)(a1 + 1064) = 0; /*0x1a64a3*/
  *(_QWORD *)(a1 + 1080) = 0; /*0x1a64aa*/
  *(_QWORD *)(a1 + 1088) = 0; /*0x1a64b1*/
  *(_QWORD *)(a1 + 1096) = 0; /*0x1a64b8*/
  *(_QWORD *)(a1 + 1104) = 0; /*0x1a64bf*/
  *(_QWORD *)(a1 + 1112) = 0; /*0x1a64c6*/
  *(_QWORD *)(a1 + 1120) = 0; /*0x1a64cd*/
  *(_QWORD *)(a1 + 1128) = 0; /*0x1a64d4*/
  *(_QWORD *)(a1 + 1136) = 0; /*0x1a64db*/
  *(_QWORD *)(a1 + 1160) = 0; /*0x1a64e2*/
  *(_QWORD *)(a1 + 1168) = 0; /*0x1a64e9*/
  *(_QWORD *)(a1 + 1176) = 0; /*0x1a64f0*/
  *(_QWORD *)(a1 + 1360) = 0; /*0x1a64f7*/
  *(_QWORD *)(a1 + 1376) = 0; /*0x1a64fe*/
  *(_QWORD *)(a1 + 1384) = 0; /*0x1a6505*/
  *(_QWORD *)(a1 + 1400) = 0; /*0x1a650c*/
  *(_QWORD *)(a1 + 1424) = 0; /*0x1a6513*/
  *(_QWORD *)(a1 + 1432) = 0; /*0x1a651a*/
  sub_65870(a1 + 1440); /*0x1a6528*/
  *(_QWORD *)(a1 + 1504) = 0; /*0x1a652e*/
  *(_QWORD *)(a1 + 1512) = 0; /*0x1a6535*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1520)); /*0x1a6543*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1528)); /*0x1a6550*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1536)); /*0x1a655d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1544)); /*0x1a656a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1552)); /*0x1a6577*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1560)); /*0x1a6584*/
  *(_QWORD *)(a1 + 1568) = 0; /*0x1a658a*/
  *(_QWORD *)(a1 + 1576) = 0; /*0x1a6591*/
  *(_WORD *)(a1 + 1584) = 0; /*0x1a6598*/
  *(_BYTE *)(a1 + 1586) = 0; /*0x1a65a1*/
  *(_QWORD *)(a1 + 1592) = 0; /*0x1a65a8*/
  *(_QWORD *)(a1 + 1600) = 0; /*0x1a65af*/
  *(_DWORD *)(a1 + 1608) = 0; /*0x1a65b6*/
  *(_DWORD *)(a1 + 1612) = 1; /*0x1a65bc*/
  *(_QWORD *)(a1 + 1616) = 0; /*0x1a65c6*/
  *(_QWORD *)(a1 + 1624) = 0; /*0x1a65cd*/
  *(_QWORD *)(a1 + 1632) = 0; /*0x1a65d4*/
  *(_BYTE *)(a1 + 1640) = 0; /*0x1a65db*/
  *(_QWORD *)(a1 + 1656) = 1065353216; /*0x1a65e2*/
  *(_QWORD *)(a1 + 1664) = 0; /*0x1a65ed*/
  *(_DWORD *)(a1 + 1672) = 1; /*0x1a65f4*/
  *(_QWORD *)(a1 + 1680) = 0; /*0x1a65fe*/
  *(_QWORD *)(a1 + 1688) = 0; /*0x1a6605*/
  *(_QWORD *)(a1 + 1696) = 0; /*0x1a660c*/
  *(_DWORD *)(a1 + 1704) = 1092616192; /*0x1a6613*/
  return a1; /*0x1a6620*/
}

// [8/110] Address: 0x1a6630
// Method: EditorUI::getUI
__int64 __fastcall EditorUI_getUI(__int64 a1)
{
  return a1 - 440; /*0x1a6637*/
}

// [9/110] Address: 0x1a6640
// Method: EditorUI::getTransformNode
__int64 __fastcall EditorUI_getTransformNode(__int64 a1)
{
  return *(_QWORD *)(a1 + 408); /*0x1a6647*/
}

// [11/110] Address: 0x1aa5c0
// Method: EditorUI::updateButtons
// Hidden C++ exception states: #wind=2
__int64 __fastcall EditorUI_updateButtons(__int64 a1)
{
  bool v2; // bp
  __int16 *v3; // r12
  __int16 *v4; // rsi
  unsigned __int8 v5; // di
  unsigned __int8 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int16 *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  bool v12; // bp
  __int16 *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned int v16; // edi
  __int16 *v17; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  __int16 v20; // ax
  char v21; // cl
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int16 *v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // edi
  __int16 *v29; // rdx
  __int64 v30; // rdx
  __int16 *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int16 *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  bool v37; // di
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int16 *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int16 *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  cocos2d::CCArray **v47; // r13
  bool v48; // bp
  __int16 *v49; // rsi
  unsigned __int8 v50; // di
  __int64 result; // rax
  char v52; // bp
  __int64 *v53; // r14
  __int64 v54; // rsi
  const char *v55; // rdi
  cocos2d::CCSpriteFrameCache *v56; // rax
  struct cocos2d::CCSpriteFrame *v57; // rax
  __int64 v58; // rdx
  char v59; // si
  bool v60; // di
  __int16 *v61; // rdx
  __int64 v62; // rdx
  bool v63; // di
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int *v66; // rcx
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  void *v70; // [rsp+50h] [rbp+8h] BYREF

  EditorUI_toggleEditObjectButton(); /*0x1aa5df*/
  v2 = *(_QWORD *)(a1 + 1568) || cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1aa604*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1176) + 408LL) = v2; /*0x1aa60e*/
  v3 = &word_6FE290; /*0x1aa61c*/
  v4 = &word_6FE290; /*0x1aa623*/
  if ( v2 ) /*0x1aa629*/
    v4 = &word_6FE29C; /*0x1aa629*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1176) + 320LL))(*(_QWORD *)(a1 + 1176) + 320LL, v4); /*0x1aa641*/
  v5 = -81; /*0x1aa651*/
  v6 = -1; /*0x1aa656*/
  if ( v2 ) /*0x1aa65f*/
    v5 = -1; /*0x1aa65f*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 1176) + 320LL) + 40LL))( /*0x1aa66a*/
    *(_QWORD *)(a1 + 1176) + 320LL,
    v5);
  *(_BYTE *)(*(_QWORD *)(a1 + 1184) + 408LL) = v2; /*0x1aa674*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1184) + 320LL))(*(_QWORD *)(a1 + 1184) + 320LL, v4); /*0x1aa68f*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 1184) + 320LL) + 40LL))( /*0x1aa6a6*/
    *(_QWORD *)(a1 + 1184) + 320LL,
    v5);
  v7 = qword_905FD0; /*0x1aa6a9*/
  if ( !qword_905FD0 ) /*0x1aa6b3*/
  {
    v70 = operator new(0x6E8u); /*0x1aa6bf*/
    qword_905FD0 = sub_2723A0(v70); /*0x1aa6cd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1aa6de*/
    v7 = qword_905FD0; /*0x1aa6e0*/
  }
  v8 = *(_QWORD *)(v7 + 536); /*0x1aa6e7*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1192) + 408LL) = v8 != 0; /*0x1aa6fb*/
  v9 = &word_6FE290; /*0x1aa701*/
  if ( v8 ) /*0x1aa707*/
    v9 = &word_6FE29C; /*0x1aa707*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1192) + 320LL))(*(_QWORD *)(a1 + 1192) + 320LL, v9); /*0x1aa71c*/
  v10 = 175; /*0x1aa72c*/
  if ( v8 ) /*0x1aa734*/
    v10 = 255; /*0x1aa734*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1192) + 320LL) + 40LL))( /*0x1aa73b*/
    *(_QWORD *)(a1 + 1192) + 320LL,
    v10);
  if ( *(_BYTE *)(a1 + 1661) || *(_DWORD *)(a1 + 1508) != 1 ) /*0x1aa74e*/
    v11 = 0; /*0x1aa754*/
  else
    LOBYTE(v11) = 1; /*0x1aa750*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 952) + 336LL))(*(_QWORD *)(a1 + 952), v11); /*0x1aa760*/
  sub_1F20D0(a1); /*0x1aa769*/
  sub_1B84B0(a1, 0); /*0x1aa773*/
  v12 = *(_QWORD *)(a1 + 1568) || cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1aa798*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1016) + 408LL) = v12; /*0x1aa7a2*/
  v13 = &word_6FE290; /*0x1aa7a9*/
  if ( v12 ) /*0x1aa7af*/
    v13 = &word_6FE29C; /*0x1aa7af*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1016) + 320LL))(*(_QWORD *)(a1 + 1016) + 320LL, v13); /*0x1aa7c4*/
  v14 = 175; /*0x1aa7d4*/
  if ( v12 ) /*0x1aa7dc*/
    v14 = 255; /*0x1aa7dc*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1016) + 320LL) + 40LL))( /*0x1aa7e3*/
    *(_QWORD *)(a1 + 1016) + 320LL,
    v14);
  v15 = a1 + 1512; /*0x1aa7e6*/
  v16 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(*(_QWORD *)(a1 + 1512) + 14976LL)); /*0x1aa7fd*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 408LL) = v16 != 0; /*0x1aa80b*/
  v17 = &word_6FE290; /*0x1aa811*/
  if ( v16 ) /*0x1aa816*/
    v17 = &word_6FE29C; /*0x1aa816*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1120) + 320LL))(*(_QWORD *)(a1 + 1120) + 320LL, v17); /*0x1aa82b*/
  v18 = 175; /*0x1aa83c*/
  if ( v16 ) /*0x1aa843*/
    v18 = 255; /*0x1aa843*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1120) + 320LL) + 40LL))( /*0x1aa84a*/
    *(_QWORD *)(a1 + 1120) + 320LL,
    v18);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1280) + 936LL))(*(_QWORD *)(a1 + 1280), v12); /*0x1aa85b*/
  v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1280) + 952LL))(*(_QWORD *)(a1 + 1280)); /*0x1aa871*/
  if ( v12 ) /*0x1aa877*/
  {
    v20 = -1; /*0x1aa879*/
    v21 = -1; /*0x1aa880*/
  }
  else
  {
    v20 = -22874; /*0x1aa889*/
    v21 = -90; /*0x1aa890*/
  }
  LOWORD(v70) = v20; /*0x1aa897*/
  BYTE2(v70) = v21; /*0x1aa89c*/
  v22 = v19[79]; /*0x1aa8a0*/
  if ( v22 ) /*0x1aa8aa*/
  {
    (**(void (__fastcall ***)(__int64, void **))(v22 + 368))(v22 + 368, &v70); /*0x1aa8bb*/
    v15 = a1 + 1512; /*0x1aa8bd*/
  }
  v23 = v19[80]; /*0x1aa8c4*/
  if ( v23 ) /*0x1aa8ce*/
    (**(void (__fastcall ***)(__int64, void **))(v23 + 320))(v23 + 320, &v70); /*0x1aa8df*/
  v24 = v19[82]; /*0x1aa8e1*/
  if ( v24 ) /*0x1aa8eb*/
  {
    (**(void (__fastcall ***)(__int64, void **))(v24 + 320))(v24 + 320, &v70); /*0x1aa8fc*/
  }
  else
  {
    v25 = v19[81]; /*0x1aa900*/
    if ( v25 ) /*0x1aa90a*/
    {
      (**(void (__fastcall ***)(__int64, void **))(v25 + 320))(v25 + 320, &v70); /*0x1aa91b*/
      v15 = a1 + 1512; /*0x1aa91d*/
    }
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 1072) + 408LL) = v12; /*0x1aa92b*/
  v26 = &word_6FE290; /*0x1aa932*/
  if ( v12 ) /*0x1aa938*/
    v26 = &word_6FE29C; /*0x1aa938*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1072) + 320LL))(*(_QWORD *)(a1 + 1072) + 320LL, v26); /*0x1aa94d*/
  v27 = 175; /*0x1aa95d*/
  if ( v12 ) /*0x1aa965*/
    v27 = 255; /*0x1aa965*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1072) + 320LL) + 40LL))( /*0x1aa96c*/
    *(_QWORD *)(a1 + 1072) + 320LL,
    v27);
  v28 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(*(_QWORD *)v15 + 14984LL)); /*0x1aa97f*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1128) + 408LL) = v28 != 0; /*0x1aa98d*/
  v29 = &word_6FE290; /*0x1aa993*/
  if ( v28 ) /*0x1aa998*/
    v29 = &word_6FE29C; /*0x1aa998*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1128) + 320LL))(*(_QWORD *)(a1 + 1128) + 320LL, v29); /*0x1aa9ad*/
  v30 = 175; /*0x1aa9be*/
  if ( v28 ) /*0x1aa9c5*/
    v30 = 255; /*0x1aa9c5*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1128) + 320LL) + 40LL))( /*0x1aa9cc*/
    *(_QWORD *)(a1 + 1128) + 320LL,
    v30);
  *(_BYTE *)(*(_QWORD *)(a1 + 1144) + 408LL) = v12; /*0x1aa9d6*/
  v31 = &word_6FE290; /*0x1aa9dd*/
  if ( v12 ) /*0x1aa9e3*/
    v31 = &word_6FE29C; /*0x1aa9e3*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1144) + 320LL))(*(_QWORD *)(a1 + 1144) + 320LL, v31); /*0x1aa9f8*/
  v32 = 175; /*0x1aaa08*/
  if ( v12 ) /*0x1aaa10*/
    v32 = 255; /*0x1aaa10*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1144) + 320LL) + 40LL))( /*0x1aaa17*/
    *(_QWORD *)(a1 + 1144) + 320LL,
    v32);
  v33 = *(_QWORD *)(a1 + 1568); /*0x1aaa1a*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1200) + 408LL) = v33 != 0; /*0x1aaa2e*/
  v34 = &word_6FE290; /*0x1aaa34*/
  if ( v33 ) /*0x1aaa3a*/
    v34 = &word_6FE29C; /*0x1aaa3a*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1200) + 320LL))(*(_QWORD *)(a1 + 1200) + 320LL, v34); /*0x1aaa4f*/
  v35 = 175; /*0x1aaa5f*/
  if ( v33 ) /*0x1aaa67*/
    v35 = 255; /*0x1aaa67*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1200) + 320LL) + 40LL))( /*0x1aaa6e*/
    *(_QWORD *)(a1 + 1200) + 320LL,
    v35);
  v36 = *(_QWORD *)(a1 + 1568); /*0x1aaa71*/
  v37 = v36 != 0; /*0x1aaa7b*/
  if ( !v36 && cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1aaa8b*/
  {
    v37 = 1; /*0x1aaac0*/
    if ( (int)sub_1B27B0(v38, *(_QWORD *)(a1 + 944), 0) <= 0 ) /*0x1aaaa6*/
    {
      LOBYTE(v40) = 1; /*0x1aaaa8*/
      if ( (int)sub_1B27B0(v39, *(_QWORD *)(a1 + 944), v40) <= 0 ) /*0x1aaab9*/
        v37 = 0; /*0x1aaaa6*/
    }
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 1224) + 408LL) = v37; /*0x1aaaca*/
  v41 = &word_6FE290; /*0x1aaad1*/
  if ( v37 ) /*0x1aaad7*/
    v41 = &word_6FE29C; /*0x1aaad7*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1224) + 320LL))(*(_QWORD *)(a1 + 1224) + 320LL, v41); /*0x1aaaec*/
  v42 = 175; /*0x1aaafc*/
  if ( v37 ) /*0x1aab04*/
    v42 = 255; /*0x1aab04*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1224) + 320LL) + 40LL))( /*0x1aab0b*/
    *(_QWORD *)(a1 + 1224) + 320LL,
    v42);
  v43 = *(_QWORD *)(a1 + 1568); /*0x1aab0e*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1200) + 408LL) = v43 != 0; /*0x1aab22*/
  v44 = &word_6FE290; /*0x1aab28*/
  if ( v43 ) /*0x1aab2e*/
    v44 = &word_6FE29C; /*0x1aab2e*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1200) + 320LL))(*(_QWORD *)(a1 + 1200) + 320LL, v44); /*0x1aab43*/
  v45 = 175; /*0x1aab53*/
  if ( v43 ) /*0x1aab5b*/
    v45 = 255; /*0x1aab5b*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1200) + 320LL) + 40LL))( /*0x1aab62*/
    *(_QWORD *)(a1 + 1200) + 320LL,
    v45);
  v46 = qword_905FD0; /*0x1aab65*/
  if ( !qword_905FD0 ) /*0x1aab6f*/
  {
    v70 = operator new(0x6E8u); /*0x1aab7b*/
    qword_905FD0 = sub_2723A0(v70); /*0x1aab89*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1aab9a*/
    v46 = qword_905FD0; /*0x1aab9c*/
  }
  v47 = (cocos2d::CCArray **)(a1 + 944); /*0x1aabaa*/
  v48 = *(_QWORD *)(*(_QWORD *)(v46 + 568) + 14840LL) && (*(_QWORD *)(a1 + 1568) || cocos2d::CCArray::count(*v47)); /*0x1aabd3*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1208) + 408LL) = v48; /*0x1aabe2*/
  v49 = &word_6FE290; /*0x1aabf7*/
  if ( v48 ) /*0x1aabfd*/
    v49 = &word_6FE29C; /*0x1aabfd*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1208) + 320LL))(*(_QWORD *)(a1 + 1208) + 320LL, v49); /*0x1aac07*/
  v50 = -81; /*0x1aac17*/
  if ( v48 ) /*0x1aac1f*/
    v50 = -1; /*0x1aac1f*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 1208) + 320LL) + 40LL))( /*0x1aac2a*/
    *(_QWORD *)(a1 + 1208) + 320LL,
    v50);
  *(_BYTE *)(*(_QWORD *)(a1 + 1216) + 408LL) = v48; /*0x1aac34*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1216) + 320LL))(*(_QWORD *)(a1 + 1216) + 320LL, v49); /*0x1aac4f*/
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 1216) + 320LL) + 40LL))( /*0x1aac66*/
             *(_QWORD *)(a1 + 1216) + 320LL,
             v50);
  if ( *(_BYTE *)(a1 + 915) ) /*0x1aac69*/
  {
    v52 = *(_BYTE *)(a1 + 916); /*0x1aac76*/
    v53 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1112) + 952LL))(*(_QWORD *)(a1 + 1112)); /*0x1aac8d*/
    v54 = *v53; /*0x1aac90*/
    v55 = "gj_linkEnableBtn_001.png"; /*0x1aac9a*/
    if ( v52 ) /*0x1aaca4*/
      v55 = "gj_linkDisableBtn_001.png"; /*0x1aaca4*/
    v56 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1aaca8*/
    v57 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v56, v55); /*0x1aacb4*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v54 + 1008))(v53, v57); /*0x1aacc0*/
    v58 = 255; /*0x1aacd4*/
    if ( *(_BYTE *)(a1 + 916) ) /*0x1aacdc*/
      v58 = 200; /*0x1aace3*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1112) + 320LL) + 40LL))( /*0x1aace9*/
      *(_QWORD *)(a1 + 1112) + 320LL,
      v58);
    v59 = *(_BYTE *)(a1 + 916); /*0x1aacec*/
    v60 = cocos2d::CCArray::count(*v47) && !*(_BYTE *)(a1 + 916); /*0x1aad0f*/
    *(_BYTE *)(*(_QWORD *)(a1 + 1096) + 408LL) = v60; /*0x1aad19*/
    v61 = &word_6FE290; /*0x1aad2e*/
    if ( v60 ) /*0x1aad3b*/
      v61 = &word_6FE29C; /*0x1aad3b*/
    (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1096) + 320LL))(*(_QWORD *)(a1 + 1096) + 320LL, v61); /*0x1aad42*/
    if ( v60 ) /*0x1aad4d*/
    {
      v62 = 255; /*0x1aad4f*/
    }
    else
    {
      v62 = 175; /*0x1aad54*/
      if ( v59 ) /*0x1aad5c*/
        v62 = 75; /*0x1aad5c*/
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1096) + 320LL) + 40LL))( /*0x1aad71*/
      *(_QWORD *)(a1 + 1096) + 320LL,
      v62);
    v63 = 0; /*0x1aad74*/
    if ( !*(_BYTE *)(a1 + 916) ) /*0x1aad77*/
    {
      v64 = *(_QWORD *)(a1 + 1568); /*0x1aad80*/
      if ( v64 ) /*0x1aad8a*/
      {
        v63 = *(_DWORD *)(v64 + 880) > 0; /*0x1aad93*/
      }
      else if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1aada0*/
      {
        v65 = *(_QWORD *)(a1 + 944); /*0x1aadaa*/
        if ( v65 ) /*0x1aadb4*/
        {
          v66 = *(unsigned int **)(v65 + 56); /*0x1aadb6*/
          v67 = *v66; /*0x1aadba*/
          if ( (_DWORD)v67 ) /*0x1aadbe*/
          {
            v68 = *((_QWORD *)v66 + 2); /*0x1aadc0*/
            v69 = v68 + 8 * (v67 - 1); /*0x1aadc8*/
            if ( v68 <= v69 ) /*0x1aadcf*/
            {
              while ( *(_QWORD *)v68 ) /*0x1aadd7*/
              {
                if ( *(int *)(*(_QWORD *)v68 + 880LL) > 0 ) /*0x1aade0*/
                {
                  v63 = 1; /*0x1aaded*/
                  break; /*0x1aaded*/
                }
                v68 += 8LL; /*0x1aade2*/
                if ( v68 > v69 ) /*0x1aade9*/
                  break; /*0x1aade9*/
              }
            }
          }
        }
      }
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 408LL) = v63; /*0x1aadf0*/
    if ( v63 ) /*0x1aae0f*/
      v3 = &word_6FE29C; /*0x1aae0f*/
    (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1104) + 320LL))(*(_QWORD *)(a1 + 1104) + 320LL, v3); /*0x1aae19*/
    if ( !v63 ) /*0x1aae1e*/
    {
      v6 = -81; /*0x1aae20*/
      if ( v59 ) /*0x1aae29*/
        v6 = 75; /*0x1aae29*/
    }
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 1104) + 320LL) + 40LL))( /*0x1aae42*/
             *(_QWORD *)(a1 + 1104) + 320LL,
             v6);
  }
  return result; /*0x1aae45*/
}

// [12/110] Address: 0x1ab190
// Method: EditorUI::getSpriteButton
__int64 __fastcall EditorUI_getSpriteButton(
        int a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        const struct cocos2d::CCPoint *a7,
        int a8)
{
  unsigned int v11; // ebx
  __int64 v12; // rax
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF

  v11 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName(a2); /*0x1ab1c3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v14, a7); /*0x1ab1c6*/
  return sub_1AB220(a1, v11, a3, a4, a5, a6, v12, a8); /*0x1ab20b*/
}

// [13/110] Address: 0x1ab560
// Method: EditorUI::updateSlider
__int64 __fastcall EditorUI_updateSlider(__int64 a1)
{
  (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 1512) + 4360LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4360LL)); /*0x1ab583*/
  sub_1BC6D0(a1); /*0x1ab590*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 1512) + 4360LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4360LL)); /*0x1ab5c3*/
  return sub_83840(*(_QWORD *)(a1 + 888)); /*0x1ab604*/
}

// [14/110] Address: 0x1abd90
// Method: EditorUI::moveGamelayer
__int64 __fastcall EditorUI_moveGamelayer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4360LL); /*0x1abdac*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4); /*0x1abdb9*/
  cocos2d::CCPoint::operator+(v5, &v7, a2); /*0x1abdca*/
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 184LL))(v4, &v7); /*0x1abddb*/
  return EditorUI_constrainGameLayerPosition(a1); /*0x1abdef*/
}

// [16/110] Address: 0x1addf0
// Method: EditorUI::onDeleteSelected
// Hidden C++ exception states: #wind=6
__int64 __fastcall EditorUI_onDeleteSelected(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // eax
  char v6; // r15
  cocos2d::CCArray *v7; // rbp
  unsigned int i; // edi
  struct cocos2d::CCObject *v9; // rsi
  __int64 v10; // rcx
  unsigned int j; // r12d
  struct cocos2d::CCObject *v12; // rax
  struct cocos2d::CCObject *v13; // rsi
  __int64 v14; // rdi
  cocos2d::CCObject **v15; // rdi
  __int64 v16; // rcx
  cocos2d::CCArray *v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // r14d
  _BYTE **v20; // rdi
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  _BYTE *v25; // rsi
  __int64 v26; // rbp
  cocos2d::CCObject *v27; // r15
  cocos2d::CCObject *v28; // rax
  unsigned int v29; // r14d
  __int64 v30; // rdx

  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1ade16*/
  {
    v2 = sub_182B60(); /*0x1ade24*/
    sub_182FE0(v2, 102); /*0x1ade31*/
    v3 = *(_QWORD *)(a1 + 1512) + 15472LL; /*0x1ade3d*/
    v4 = *(unsigned int *)(*(_QWORD *)(a1 + 1512) + 15568LL); /*0x1ade44*/
    if ( (int)v4 >= 0 ) /*0x1ade4d*/
    {
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15504LL) - v4; /*0x1ade53*/
      v4 = 0; /*0x1ade55*/
      if ( v5 > 1 ) /*0x1ade5b*/
      {
        do /*0x1ade6c*/
        {
          if ( (int)v4 >= 7 ) /*0x1ade63*/
            break; /*0x1ade63*/
          v5 = (unsigned int)v5 >> 1; /*0x1ade65*/
          v4 = (unsigned int)(v4 + 1); /*0x1ade67*/
        }
        while ( (unsigned int)v5 > 1 ); /*0x1ade6c*/
      }
      ++*(_DWORD *)(v3 + 4LL * (int)v4 + 64); /*0x1ade71*/
    }
    *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 32); /*0x1ade7a*/
    v6 = 0; /*0x1ade7e*/
    v7 = (cocos2d::CCArray *)cocos2d::CCArray::create(v4); /*0x1ade87*/
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); ++i ) /*0x1ade94*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), i); /*0x1adeaf*/
      if ( (unsigned __int8)sub_1AD990(v10, v9) ) /*0x1adeb5*/
        cocos2d::CCArray::addObject(v7, v9); /*0x1adec4*/
    }
    for ( j = 0; j < cocos2d::CCArray::count(v7); ++j ) /*0x1adee3*/
    {
      v12 = cocos2d::CCArray::objectAtIndex(v7, j); /*0x1adf06*/
      v13 = v12; /*0x1adf0c*/
      if ( *((_DWORD *)v12 + 259) == 747 ) /*0x1adf1d*/
        v6 = 1; /*0x1adf1d*/
      *((_BYTE *)v12 + 1140) = *((_BYTE *)v12 + 1141); /*0x1adf28*/
      EditorUI_deselectObject(a1, v12); /*0x1adf34*/
      v14 = *(_QWORD *)(a1 + 1512); /*0x1adf39*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v13 + 1160LL))(v13, 1); /*0x1adf51*/
      GJBaseGameLayer_removeObjectFromSection(v14, v13); /*0x1adf5a*/
      sub_3F1780(v14, v13); /*0x1adf65*/
      *(_BYTE *)(v14 + 15730) = 1; /*0x1adf6a*/
      sub_1FF670(a1); /*0x1adf74*/
      sub_1FFD20(a1); /*0x1adf7c*/
      sub_200430(a1); /*0x1adf84*/
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15480LL) += cocos2d::CCArray::count(v7); /*0x1adfae*/
    v15 = (cocos2d::CCObject **)operator new(0xA0u); /*0x1adfbe*/
    cocos2d::CCObject::CCObject((cocos2d::CCObject *)v15); /*0x1adfc9*/
    *v15 = (cocos2d::CCObject *)&UndoObject::`vftable'; /*0x1adfd7*/
    v15[7] = 0; /*0x1adfda*/
    *((_DWORD *)v15 + 16) = 0; /*0x1adfde*/
    v15[9] = 0; /*0x1adfe2*/
    *((_WORD *)v15 + 40) = 0; /*0x1adfe6*/
    sub_1A6040((char *)v15 + 84); /*0x1adff0*/
    if ( v7 ) /*0x1adff9*/
    {
      v17 = (cocos2d::CCArray *)cocos2d::CCArray::create(v16); /*0x1adffb*/
      v15[9] = v17; /*0x1ae001*/
      cocos2d::CCArray::addObjectsFromArray(v17, v7); /*0x1ae00b*/
      cocos2d::CCObject::retain(v15[9]); /*0x1ae015*/
    }
    *((_DWORD *)v15 + 16) = 4; /*0x1ae01b*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v15); /*0x1ae025*/
    v18 = *(_QWORD *)(a1 + 1512); /*0x1ae02b*/
    cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v18 + 14984)); /*0x1ae039*/
    v19 = 1000; /*0x1ae044*/
    if ( !*(_BYTE *)(v18 + 14726) ) /*0x1ae04a*/
      v19 = 200; /*0x1ae051*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v18 + 14976)) >= v19 ) /*0x1ae065*/
      cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v18 + 14976), 0, 1); /*0x1ae073*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v18 + 14976), (struct cocos2d::CCObject *)v15); /*0x1ae083*/
    if ( v6 ) /*0x1ae08c*/
      EditorUI_deselectTargetPortals(a1); /*0x1ae091*/
    v20 = (_BYTE **)(a1 + 1568); /*0x1ae096*/
  }
  else
  {
    v20 = (_BYTE **)(a1 + 1568); /*0x1ae0a2*/
    if ( *(_QWORD *)(a1 + 1568) && (unsigned __int8)((__int64 (*)(void))sub_1AD990)() ) /*0x1ae0b5*/
    {
      v21 = *(_QWORD *)(a1 + 1512) + 15472LL; /*0x1ae0c9*/
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15568LL); /*0x1ae0d0*/
      if ( v22 >= 0 ) /*0x1ae0d8*/
      {
        v23 = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15504LL) - v22; /*0x1ae0dd*/
        v24 = 0; /*0x1ae0df*/
        if ( v23 > 1 ) /*0x1ae0e5*/
        {
          do /*0x1ae0f3*/
          {
            if ( v24 >= 7 ) /*0x1ae0ea*/
              break; /*0x1ae0ea*/
            v23 = (unsigned int)v23 >> 1; /*0x1ae0ec*/
            ++v24; /*0x1ae0ee*/
          }
          while ( (unsigned int)v23 > 1 ); /*0x1ae0f3*/
        }
        ++*(_DWORD *)(v21 + 4LL * v24 + 64); /*0x1ae0f8*/
        v20 = (_BYTE **)(a1 + 1568); /*0x1ae0fc*/
      }
      *(_DWORD *)(v21 + 96) = *(_DWORD *)(v21 + 32); /*0x1ae106*/
      v25 = *v20; /*0x1ae109*/
      if ( *v20 ) /*0x1ae109*/
      {
        v25[1140] = v25[1141]; /*0x1ae11c*/
        EditorUI_deselectObject(a1, v25); /*0x1ae128*/
        v26 = *(_QWORD *)(a1 + 1512); /*0x1ae12d*/
        ++*(_DWORD *)(v26 + 15480); /*0x1ae134*/
        cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v26 + 14984)); /*0x1ae141*/
        v27 = (cocos2d::CCObject *)operator new(0xA0u); /*0x1ae151*/
        cocos2d::CCObject::CCObject(v27); /*0x1ae15c*/
        *(_QWORD *)v27 = &UndoObject::`vftable'; /*0x1ae16a*/
        *((_QWORD *)v27 + 7) = 0; /*0x1ae16d*/
        *((_DWORD *)v27 + 16) = 0; /*0x1ae171*/
        *((_QWORD *)v27 + 9) = 0; /*0x1ae175*/
        *((_WORD *)v27 + 40) = 0; /*0x1ae179*/
        sub_1A6040((char *)v27 + 84); /*0x1ae184*/
        v28 = (cocos2d::CCObject *)GameObjectCopy_create(v25); /*0x1ae18d*/
        *((_QWORD *)v27 + 7) = v28; /*0x1ae192*/
        cocos2d::CCObject::retain(v28); /*0x1ae199*/
        *((_DWORD *)v27 + 16) = 1; /*0x1ae19f*/
        cocos2d::CCObject::autorelease(v27); /*0x1ae1aa*/
        cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v26 + 14984)); /*0x1ae1b7*/
        v29 = 1000; /*0x1ae1c2*/
        if ( !*(_BYTE *)(v26 + 14726) ) /*0x1ae1c8*/
          v29 = 200; /*0x1ae1cf*/
        if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v26 + 14976)) >= v29 ) /*0x1ae1e3*/
          cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v26 + 14976), 0, 1); /*0x1ae1f1*/
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v26 + 14976), v27); /*0x1ae201*/
        LOBYTE(v30) = 1; /*0x1ae20a*/
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v25 + 1160LL))(v25, v30); /*0x1ae20f*/
        GJBaseGameLayer_removeObjectFromSection(v26, v25); /*0x1ae21b*/
        sub_3F1780(v26, v25); /*0x1ae226*/
        *(_BYTE *)(v26 + 15730) = 1; /*0x1ae22b*/
        sub_1FF670(a1); /*0x1ae235*/
        sub_1FFD20(a1); /*0x1ae23d*/
        sub_200430(a1); /*0x1ae245*/
      }
    }
  }
  if ( !*v20 && !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1ae257*/
  {
    sub_1FF670(a1); /*0x1ae264*/
    sub_1FFD20(a1); /*0x1ae26c*/
    sub_200430(a1); /*0x1ae274*/
  }
  EditorUI_updateObjectInfoLabel(a1); /*0x1ae27c*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 432) + 40LL))(a1 + 432); /*0x1ae28b*/
  return EditorUI_updateButtons(a1); /*0x1ae291*/
}

// [17/110] Address: 0x1ae430
// Method: EditorUI::FLAlert_Clicked
__int64 __fastcall EditorUI_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1ae44f*/
  if ( (_DWORD)result == 122 ) /*0x1ae455*/
  {
    *(_BYTE *)(a1 + 272) = 0; /*0x1ae457*/
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1ae474*/
    if ( (_DWORD)result == 125 ) /*0x1ae47a*/
    {
      *(_BYTE *)(a1 + 272) = 0; /*0x1ae47c*/
      if ( a3 ) /*0x1ae486*/
      {
        result = *(_QWORD *)(a1 + 1104); /*0x1ae488*/
        *(_BYTE *)(*(_QWORD *)(result + 2168) + 1296LL) = 1; /*0x1ae496*/
      }
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1ae4b3*/
      if ( (_DWORD)result == 126 ) /*0x1ae4b9*/
      {
        *(_BYTE *)(a1 + 272) = 0; /*0x1ae4bb*/
        if ( a3 ) /*0x1ae4c5*/
        {
          result = *(_QWORD *)(a1 + 1104); /*0x1ae4c7*/
          *(_BYTE *)(*(_QWORD *)(result + 2168) + 1297LL) = 1; /*0x1ae4d5*/
        }
      }
      else if ( a3 ) /*0x1ae4ef*/
      {
        return SFXBrowser_onCredits(a1 - 408); /*0x1ae4f8*/
      }
    }
  }
  return result; /*0x1ae45e*/
}

// [18/110] Address: 0x1ae510
// Method: EditorUI::setIDPopupClosed
// Hidden C++ exception states: #wind=4
void __fastcall EditorUI_setIDPopupClosed(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  struct cocos2d::CCString *v8; // rax
  void *v9; // rcx
  __int64 v10; // rbx
  cocos2d::CCString *v11; // rax
  const char *CString; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  struct cocos2d::CCString *v15; // rax
  void *v16; // rcx
  _BYTE *v17; // rax
  size_t v18; // r8
  __int64 v19; // rdi
  void *v20; // rcx
  void **v21; // rdx
  void *v22; // rcx
  void *v23; // [rsp+30h] [rbp-50h]
  void *v24; // [rsp+30h] [rbp-50h]
  void *Block[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  unsigned __int64 v27; // [rsp+50h] [rbp-30h]
  void *v28[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v29; // [rsp+68h] [rbp-18h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x1ae545*/
  {
    v6 = qword_905FD0; /*0x1ae54b*/
    if ( !qword_905FD0 ) /*0x1ae555*/
    {
      v23 = operator new(0x6E8u); /*0x1ae561*/
      qword_905FD0 = sub_2723A0(v23); /*0x1ae56e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1ae57f*/
      v6 = qword_905FD0; /*0x1ae581*/
    }
    *(_OWORD *)Block = 0; /*0x1ae58b*/
    v26 = 3; /*0x1ae58f*/
    v27 = 15; /*0x1ae597*/
    LODWORD(Block[0]) = 6256231; /*0x1ae5a5*/
    sub_43D80(Block, "0133", 4u); /*0x1ae5c8*/
    v7 = *(_QWORD *)(v6 + 432); /*0x1ae5cd*/
    v8 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a3); /*0x1ae5dd*/
    cocos2d::CCDictionary::setObject(v7, v8, Block); /*0x1ae5ed*/
    if ( v27 > 0xF ) /*0x1ae5fc*/
    {
      v9 = Block[0]; /*0x1ae601*/
      if ( v27 + 1 >= 0x1000 ) /*0x1ae60f*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x1ae615*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x1ae624*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1ae637*/
      }
      j_j_free(v9); /*0x1ae63e*/
    }
    v10 = *(_QWORD *)(a1 + 904); /*0x1ae643*/
    v11 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a3); /*0x1ae653*/
    CString = cocos2d::CCString::getCString(v11); /*0x1ae65c*/
    ButtonSprite_setString(v10, CString); /*0x1ae668*/
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x1ae67e*/
  {
    v13 = qword_905FD0; /*0x1ae684*/
    if ( !qword_905FD0 ) /*0x1ae68e*/
    {
      v24 = operator new(0x6E8u); /*0x1ae69a*/
      qword_905FD0 = sub_2723A0(v24); /*0x1ae6a7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1ae6b8*/
      v13 = qword_905FD0; /*0x1ae6ba*/
    }
    *(_OWORD *)Block = 0; /*0x1ae6c4*/
    v26 = 3; /*0x1ae6c8*/
    v27 = 15; /*0x1ae6d0*/
    LODWORD(Block[0]) = 6256231; /*0x1ae6de*/
    sub_43D80(Block, "0139", 4u); /*0x1ae701*/
    v14 = *(_QWORD *)(v13 + 432); /*0x1ae706*/
    v15 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a3); /*0x1ae716*/
    cocos2d::CCDictionary::setObject(v14, v15, Block); /*0x1ae726*/
    if ( v27 > 0xF ) /*0x1ae735*/
    {
      v16 = Block[0]; /*0x1ae73a*/
      if ( v27 + 1 >= 0x1000 ) /*0x1ae748*/
      {
        v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x1ae74e*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x1ae75d*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1ae770*/
      }
      j_j_free(v16); /*0x1ae777*/
    }
    *(_OWORD *)v28 = 0; /*0x1ae77f*/
    *(_QWORD *)&v29 = 0; /*0x1ae785*/
    *((_QWORD *)&v29 + 1) = 15; /*0x1ae789*/
    LOBYTE(v28[0]) = 0; /*0x1ae791*/
    if ( (int)a3 < 1000 ) /*0x1ae79a*/
    {
      v19 = GameToolbox_intToString(Block, a3); /*0x1ae7d6*/
      if ( v28 != (void **)v19 ) /*0x1ae7e0*/
      {
        if ( *((_QWORD *)&v29 + 1) > 0xFu ) /*0x1ae7ea*/
        {
          v20 = v28[0]; /*0x1ae7ef*/
          if ( (unsigned __int64)(*((_QWORD *)&v29 + 1) + 1LL) >= 0x1000 ) /*0x1ae7fd*/
          {
            v20 = (void *)*((_QWORD *)v28[0] - 1); /*0x1ae803*/
            if ( (unsigned __int64)((char *)v28[0] - (char *)v20 - 8) > 0x1F ) /*0x1ae812*/
              invoke_watson(0, 0, 0, 0, 0); /*0x1ae823*/
          }
          j_j_free(v20); /*0x1ae82a*/
        }
        *(_QWORD *)&v29 = 0; /*0x1ae82f*/
        *((_QWORD *)&v29 + 1) = 15; /*0x1ae833*/
        LOBYTE(v28[0]) = 0; /*0x1ae83b*/
        *(_OWORD *)v28 = *(_OWORD *)v19; /*0x1ae842*/
        v29 = *(_OWORD *)(v19 + 16); /*0x1ae84a*/
        *(_QWORD *)(v19 + 16) = 0; /*0x1ae84e*/
        *(_QWORD *)(v19 + 24) = 15; /*0x1ae852*/
        *(_BYTE *)v19 = 0; /*0x1ae85a*/
      }
      sub_3C310(Block); /*0x1ae861*/
    }
    else
    {
      v17 = (_BYTE *)GJSpecialColorSelect_textForColorIdx(a3); /*0x1ae79e*/
      v18 = -1; /*0x1ae7a3*/
      do /*0x1ae7b3*/
        ++v18; /*0x1ae7b0*/
      while ( v17[v18] ); /*0x1ae7b3*/
      sub_3F5A0(v28, v17, v18); /*0x1ae7c1*/
    }
    v21 = v28; /*0x1ae866*/
    if ( *((_QWORD *)&v29 + 1) > 0xFu ) /*0x1ae86f*/
      v21 = (void **)v28[0]; /*0x1ae86f*/
    ButtonSprite_setString(*(_QWORD *)(a1 + 912), v21); /*0x1ae87b*/
    if ( *((_QWORD *)&v29 + 1) > 0xFu ) /*0x1ae889*/
    {
      v22 = v28[0]; /*0x1ae88e*/
      if ( (unsigned __int64)(*((_QWORD *)&v29 + 1) + 1LL) >= 0x1000 ) /*0x1ae89c*/
      {
        v22 = (void *)*((_QWORD *)v28[0] - 1); /*0x1ae8a2*/
        if ( (unsigned __int64)((char *)v28[0] - (char *)v22 - 8) > 0x1F ) /*0x1ae8b1*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1ae8c2*/
      }
      j_j_free(v22); /*0x1ae8c9*/
    }
  }
}

// [19/110] Address: 0x1af550
// Method: EditorUI::onCreateButton
__int64 __fastcall EditorUI_onCreateButton(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax

  v2 = 0; /*0x1af55d*/
  if ( *(_DWORD *)(a1 + 1392) != *(_DWORD *)(a2 + 552) ) /*0x1af569*/
    v2 = *(_DWORD *)(a2 + 552); /*0x1af569*/
  *(_DWORD *)(a1 + 1392) = v2; /*0x1af56d*/
  v4 = sub_182B60(); /*0x1af573*/
  sub_182FE0(v4, 277); /*0x1af580*/
  GameStatsManager_verifyUserCoins(a1, 0); /*0x1af58a*/
  return GJRotationControl_finishTouch(a1); /*0x1af592*/
}

// [20/110] Address: 0x1b0c40
// Method: EditorUI::createUndoObject
// Hidden C++ exception states: #wind=4
cocos2d::CCArray **__fastcall EditorUI_createUndoObject(__int64 a1, __int64 a2, char a3)
{
  cocos2d::CCArray *v5; // rbp
  cocos2d::CCArray **v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct cocos2d::CCObject *v9; // rax
  struct cocos2d::CCObject *v10; // rax
  cocos2d::CCObject *v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // edi

  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b0c60*/
  {
    v5 = *(cocos2d::CCArray **)(a1 + 944); /*0x1b0c73*/
    v6 = (cocos2d::CCArray **)operator new(0xA0u); /*0x1b0c7f*/
    cocos2d::CCObject::CCObject((cocos2d::CCObject *)v6); /*0x1b0c8a*/
    *v6 = (cocos2d::CCArray *)&UndoObject::`vftable'; /*0x1b0c98*/
    v7 = 0; /*0x1b0c9b*/
    v6[7] = 0; /*0x1b0c9d*/
    *((_DWORD *)v6 + 16) = 0; /*0x1b0ca1*/
    v6[9] = 0; /*0x1b0ca4*/
    *((_WORD *)v6 + 40) = 0; /*0x1b0ca8*/
    sub_1A6040((char *)v6 + 84); /*0x1b0cb0*/
    v6[9] = (cocos2d::CCArray *)cocos2d::CCArray::create(v8); /*0x1b0cbc*/
    if ( cocos2d::CCArray::count(v5) ) /*0x1b0cc3*/
    {
      do /*0x1b0cfd*/
      {
        v9 = cocos2d::CCArray::objectAtIndex(v5, v7); /*0x1b0cd5*/
        v10 = (struct cocos2d::CCObject *)GameObjectCopy_create(v9); /*0x1b0cde*/
        cocos2d::CCArray::addObject(v6[9], v10); /*0x1b0cea*/
        ++v7; /*0x1b0cf0*/
      }
      while ( v7 < cocos2d::CCArray::count(v5) ); /*0x1b0cfd*/
    }
    v11 = v6[9]; /*0x1b0cff*/
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 1568); /*0x1b0d05*/
    v6 = (cocos2d::CCArray **)operator new(0xA0u); /*0x1b0d11*/
    cocos2d::CCObject::CCObject((cocos2d::CCObject *)v6); /*0x1b0d1c*/
    *v6 = (cocos2d::CCArray *)&UndoObject::`vftable'; /*0x1b0d2a*/
    v6[7] = 0; /*0x1b0d2f*/
    *((_DWORD *)v6 + 16) = 0; /*0x1b0d33*/
    v6[9] = 0; /*0x1b0d36*/
    *((_WORD *)v6 + 40) = 0; /*0x1b0d3a*/
    sub_1A6040((char *)v6 + 84); /*0x1b0d42*/
    if ( !v12 ) /*0x1b0d4b*/
      goto LABEL_8; /*0x1b0d4b*/
    v13 = GameObjectCopy_create(v12); /*0x1b0d50*/
    v6[7] = (cocos2d::CCArray *)v13; /*0x1b0d55*/
    v11 = (cocos2d::CCObject *)v13; /*0x1b0d59*/
  }
  cocos2d::CCObject::retain(v11); /*0x1b0d5c*/
LABEL_8:
  *((_DWORD *)v6 + 16) = 5; /*0x1b0d62*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x1b0d6c*/
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 840) + 344LL))(*(_QWORD *)(a1 + 840)) ) /*0x1b0d7c*/
  {
    v14 = sub_200810(a1); /*0x1b0d89*/
    sub_1B0E20((char *)v6 + 84, v14); /*0x1b0d95*/
    *((_BYTE *)v6 + 81) = 1; /*0x1b0d9a*/
  }
  if ( !a3 ) /*0x1b0da1*/
  {
    v15 = *(_QWORD *)(a1 + 1512); /*0x1b0da3*/
    cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v15 + 14984)); /*0x1b0db1*/
    v16 = 1000; /*0x1b0db7*/
    if ( !*(_BYTE *)(v15 + 14726) ) /*0x1b0dc1*/
      v16 = 200; /*0x1b0dc8*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v15 + 14976)) >= v16 ) /*0x1b0dda*/
      cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v15 + 14976), 0, 1); /*0x1b0de8*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v15 + 14976), (struct cocos2d::CCObject *)v6); /*0x1b0df8*/
  }
  return v6; /*0x1b0e01*/
}

// [21/110] Address: 0x1b0eb0
// Method: EditorUI::createUndoSelectObject
// Hidden C++ exception states: #wind=2
void __fastcall EditorUI_createUndoSelectObject(__int64 a1, char a2)
{
  struct cocos2d::CCArray *SelectedObjects; // rbx
  cocos2d::CCObject **v5; // rdi
  __int64 v6; // rcx
  cocos2d::CCArray *v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebx

  SelectedObjects = (struct cocos2d::CCArray *)EditorUI_getSelectedObjects(a1); /*0x1b0ecf*/
  v5 = (cocos2d::CCObject **)operator new(0xA0u); /*0x1b0edc*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v5); /*0x1b0ee7*/
  *v5 = (cocos2d::CCObject *)&UndoObject::`vftable'; /*0x1b0ef5*/
  v5[7] = 0; /*0x1b0efa*/
  *((_DWORD *)v5 + 16) = 0; /*0x1b0efe*/
  v5[9] = 0; /*0x1b0f01*/
  *((_WORD *)v5 + 40) = 0; /*0x1b0f05*/
  sub_1A6040((char *)v5 + 84); /*0x1b0f0d*/
  if ( SelectedObjects ) /*0x1b0f16*/
  {
    v7 = (cocos2d::CCArray *)cocos2d::CCArray::create(v6); /*0x1b0f18*/
    v5[9] = v7; /*0x1b0f1e*/
    cocos2d::CCArray::addObjectsFromArray(v7, SelectedObjects); /*0x1b0f28*/
    cocos2d::CCObject::retain(v5[9]); /*0x1b0f32*/
  }
  *((_DWORD *)v5 + 16) = 6; /*0x1b0f38*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v5); /*0x1b0f42*/
  *((_BYTE *)v5 + 80) = a2; /*0x1b0f48*/
  v8 = *(_QWORD *)(a1 + 1512); /*0x1b0f4c*/
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v8 + 14984)); /*0x1b0f5a*/
  v9 = 1000; /*0x1b0f60*/
  if ( !*(_BYTE *)(v8 + 14726) ) /*0x1b0f6a*/
    v9 = 200; /*0x1b0f71*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v8 + 14976)) >= v9 ) /*0x1b0f83*/
    cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v8 + 14976), 0, 1); /*0x1b0f91*/
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v8 + 14976), (struct cocos2d::CCObject *)v5); /*0x1b0fb5*/
}

// [22/110] Address: 0x1b1a90
// Method: EditorUI::updatePlaybackBtn
__int64 __fastcall EditorUI_updatePlaybackBtn(__int64 a1)
{
  int v2; // ebp
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  cocos2d::CCSpriteFrameCache *v6; // rax
  const char *v7; // rdx
  struct cocos2d::CCSpriteFrame *v8; // rax
  __int64 v9; // rax
  __int16 *v10; // rdx
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 2204LL); /*0x1b1ab1*/
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1040) + 952LL))(*(_QWORD *)(a1 + 1040)); /*0x1b1aca*/
  v4 = v3; /*0x1b1ad7*/
  if ( !*(_BYTE *)(a1 + 664) || v2 ) /*0x1b1ade*/
  {
    v5 = *v3; /*0x1b1af2*/
    v6 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1b1af5*/
    v7 = "GJ_playMusicBtn_001.png"; /*0x1b1afb*/
  }
  else
  {
    v5 = *v3; /*0x1b1ae0*/
    v6 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1b1ae3*/
    v7 = "GJ_stopMusicBtn_001.png"; /*0x1b1ae9*/
  }
  v8 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v6, v7); /*0x1b1b05*/
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSpriteFrame *))(v5 + 1008))(v4, v8); /*0x1b1b11*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 408LL) = v2 == 0; /*0x1b1b1e*/
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1040) + 952LL))(*(_QWORD *)(a1 + 1040)); /*0x1b1b2f*/
  v10 = &word_6FE290; /*0x1b1b37*/
  if ( !v2 ) /*0x1b1b4c*/
    v10 = &word_6FE29C; /*0x1b1b4c*/
  (**(void (__fastcall ***)(__int64, __int16 *))(v9 + 320))(v9 + 320, v10); /*0x1b1b53*/
  v11 = 175; /*0x1b1b5c*/
  if ( !v2 ) /*0x1b1b6f*/
    v11 = 255; /*0x1b1b6f*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1040) + 320LL) + 40LL))( /*0x1b1b75*/
             *(_QWORD *)(a1 + 1040) + 320LL,
             v11);
  *(_BYTE *)(a1 + 716) = *(_BYTE *)(a1 + 664) && (result = *(_QWORD *)(a1 + 1512), !*(_DWORD *)(result + 2204)); /*0x1b1bb2*/
  return result; /*0x1b1bac*/
}

// [23/110] Address: 0x1b1bc0
// Method: EditorUI::songStateChanged
__int64 __fastcall EditorUI_songStateChanged(__int64 a1)
{
  return EditorUI_updatePlaybackBtn(a1 - 448);
}

// [24/110] Address: 0x1b1bd0
// Method: EditorUI::onPlaytest
// Hidden C++ exception states: #wind=1
void __fastcall EditorUI_onPlaytest(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char v5; // si
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // rbp
  cocos2d::CCSpriteFrameCache *v13; // rax
  const char *v14; // rdx
  struct cocos2d::CCSpriteFrame *v15; // rax
  __int64 v16; // rdx
  void *v17; // [rsp+40h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 1660) ) /*0x1b1bee*/
  {
    v4 = sub_182B60(); /*0x1b1bfb*/
    sub_182FE0(v4, 210); /*0x1b1c08*/
    v5 = 0; /*0x1b1c0d*/
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 2204LL) != 1 ) /*0x1b1c1e*/
    {
      v5 = 1; /*0x1b1c20*/
      GJBaseGameLayer_pauseAudio(); /*0x1b1c23*/
    }
    v6 = 0; /*0x1b1c28*/
    *(_BYTE *)(a1 + 664) = 0; /*0x1b1c2b*/
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 2204LL) != 1 ) /*0x1b1c40*/
      sub_1AD1A0(a1, *(_QWORD *)(a1 + 984)); /*0x1b1c4c*/
    EditorUI_deselectAll(a1); /*0x1b1c54*/
    v8 = *(_QWORD *)(a1 + 1512); /*0x1b1c59*/
    v9 = *(_DWORD *)(v8 + 2204); /*0x1b1c60*/
    switch ( v9 ) /*0x1b1c69*/
    {
      case 1: /*0x1b1c69*/
        sub_3FBDD0(); /*0x1b1c6b*/
        break;
      case 2: /*0x1b1c69*/
        sub_3FBF80(); /*0x1b1c7a*/
        break;
      case 0: /*0x1b1c69*/
        *(float *)(a1 + 1656) = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 4360) + 168LL))(*(_QWORD *)(v8 + 4360)); /*0x1b1c9d*/
        LevelEditorLayer_onPlaytest(*(_QWORD *)(a1 + 1512)); /*0x1b1cac*/
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1512) + 12976LL) ) /*0x1b1cb8*/
          goto LABEL_16; /*0x1b1cb8*/
        v10 = qword_905FD0; /*0x1b1cc2*/
        if ( !qword_905FD0 ) /*0x1b1ccc*/
        {
          v17 = operator new(0x6E8u); /*0x1b1cd8*/
          qword_905FD0 = sub_2723A0(v17); /*0x1b1ce6*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1b1cf7*/
          v10 = qword_905FD0; /*0x1b1cf9*/
        }
        if ( GameManager_getGameVariable(v10, "0150") ) /*0x1b1d07*/
          v6 = 1; /*0x1b1d10*/
        else
LABEL_16:
          v6 = 0; /*0x1b1d15*/
        break;
    }
    LOBYTE(v7) = *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 2204LL) != 1; /*0x1b1d26*/
    LevelInfoLayer_create(a1, v7); /*0x1b1d2c*/
    v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1048) + 952LL))(*(_QWORD *)(a1 + 1048)); /*0x1b1d41*/
    v12 = *v11; /*0x1b1d44*/
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 2204LL) == 1 ) /*0x1b1d55*/
    {
      v13 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1b1d57*/
      v14 = "GJ_pauseEditorBtn_001.png"; /*0x1b1d5d*/
    }
    else
    {
      v13 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1b1d66*/
      v14 = "GJ_playEditorBtn_001.png"; /*0x1b1d6c*/
    }
    v15 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v13, v14); /*0x1b1d76*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v12 + 1008))(v11, v15); /*0x1b1d82*/
    LOBYTE(v16) = *(_BYTE *)(a1 + 1661) == 0; /*0x1b1d96*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1056) + 336LL))(*(_QWORD *)(a1 + 1056), v16); /*0x1b1d9c*/
    EditorUI_updatePlaybackBtn(a1); /*0x1b1da5*/
    if ( v6 ) /*0x1b1dad*/
      EditorUI_onPlaytest(a1, a2); /*0x1b1db5*/
    if ( v5 ) /*0x1b1dbd*/
      *(_BYTE *)(*(_QWORD *)(a1 + 1512) + 14502LL) = 1; /*0x1b1dc6*/
  }
}

// [25/110] Address: 0x1b1e50
// Method: EditorUI::playtestStopped
__int64 __fastcall EditorUI_playtestStopped(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rbx
  cocos2d::CCSpriteFrameCache *v6; // rax
  struct cocos2d::CCSpriteFrame *v7; // rax
  __int64 result; // rax
  cocos2d::CCNode *v9; // rcx

  LOBYTE(a2) = 1; /*0x1b1e5f*/
  LevelInfoLayer_create(a1, a2); /*0x1b1e69*/
  v3 = *(_QWORD *)(a1 + 1048); /*0x1b1e6e*/
  *(_QWORD *)(a1 + 708) = -1; /*0x1b1e75*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 952LL))(v3); /*0x1b1e8c*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 168LL))(v4); /*0x1b1e92*/
  v5 = *(_QWORD *)v4; /*0x1b1e98*/
  v6 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x1b1ea6*/
  v7 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v6, "GJ_playEditorBtn_001.png"); /*0x1b1eb6*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v5 + 1008))(v4, v7); /*0x1b1ec2*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 160LL))(v4); /*0x1b1ed9*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1056) + 336LL))(*(_QWORD *)(a1 + 1056), 0); /*0x1b1eeb*/
  EditorUI_updatePlaybackBtn(a1); /*0x1b1ef4*/
  result = sub_1B2060(a1); /*0x1b1f04*/
  v9 = *(cocos2d::CCNode **)(a1 + 1600); /*0x1b1f09*/
  if ( v9 ) /*0x1b1f13*/
  {
    cocos2d::CCNode::stopAllActions(v9); /*0x1b1f15*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 1600) + 368LL) + 40LL))( /*0x1b1f2e*/
      *(_QWORD *)(a1 + 1600) + 368LL,
      0);
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1600) + 336LL))(*(_QWORD *)(a1 + 1600), 0); /*0x1b1f3d*/
  }
  return result; /*0x1b1f43*/
}

// [26/110] Address: 0x1b2530
// Method: EditorUI::showMaxError
// Hidden C++ exception states: #wind=1
void __fastcall EditorUI_showMaxError(__int64 a1)
{
  cocos2d::CCString *v2; // rax
  int v3; // edi
  const char *CString; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rbx
  __int128 v8; // [rsp+50h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  _BYTE v11[32]; // [rsp+70h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 680) ) /*0x1b2545*/
  {
    *(_BYTE *)(a1 + 680) = 1; /*0x1b2552*/
    v2 = cocos2d::CCString::createWithFormat( /*0x1b2565*/
           "You have reached the upper max limit of <cg>%i</c> objects. This limit can be removed completely, but it is <"
           "cr>not</c> recommended. Levels with object count above this limit will display a <co>warning</c> when played "
           "online.\n"
           "<cy>Unoptimized levels that use too many objects have a lower chance of being rated and featured.</c>",
           80000);
    v3 = a1 + 408; /*0x1b256b*/
    if ( !a1 ) /*0x1b2577*/
      v3 = 0; /*0x1b2577*/
    CString = cocos2d::CCString::getCString(v2); /*0x1b257e*/
    v8 = 0; /*0x1b2587*/
    v9 = 0; /*0x1b258c*/
    v10 = 0; /*0x1b2591*/
    v5 = -1; /*0x1b2596*/
    do /*0x1b25a3*/
      ++v5; /*0x1b25a0*/
    while ( CString[v5] ); /*0x1b25a3*/
    sub_3C230(&v8); /*0x1b25b1*/
    v6 = sub_3E4F0(v11, &v8); /*0x1b25cd*/
    v7 = FLAlertLayer_create_0( /*0x1b2621*/
           v3,
           (unsigned int)"Max Objects",
           v6,
           (unsigned int)"Cancel",
           (__int64)"Unlimited",
           1136525312,
           0,
           0,
           1065353216);
    sub_3C310(&v8); /*0x1b2629*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 64LL))(v7, 126); /*0x1b263d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0x1b264d*/
  }
}

// [27/110] Address: 0x1b2670
// Method: EditorUI::showMaxBasicError
// Hidden C++ exception states: #wind=1
void __fastcall EditorUI_showMaxBasicError(__int64 a1)
{
  cocos2d::CCString *v2; // rax
  int v3; // edi
  const char *CString; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rbx
  __int128 v8; // [rsp+50h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  _BYTE v11[32]; // [rsp+70h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 680) ) /*0x1b2685*/
  {
    *(_BYTE *)(a1 + 680) = 1; /*0x1b2692*/
    v2 = cocos2d::CCString::createWithFormat( /*0x1b26ab*/
           "You have reached the max limit of <cg>%i</c> objects. You can increase it to <cy>%i</c>, but your level may b"
           "ecome unstable on some devices, so it is recommended to stay below this limit. Levels with object count above"
           " this limit will display a <co>warning</c> when played online.",
           40000,
           80000);
    v3 = a1 + 408; /*0x1b26b1*/
    if ( !a1 ) /*0x1b26bd*/
      v3 = 0; /*0x1b26bd*/
    CString = cocos2d::CCString::getCString(v2); /*0x1b26c4*/
    v8 = 0; /*0x1b26cd*/
    v9 = 0; /*0x1b26d2*/
    v10 = 0; /*0x1b26d7*/
    v5 = -1; /*0x1b26dc*/
    do /*0x1b26e6*/
      ++v5; /*0x1b26e3*/
    while ( CString[v5] ); /*0x1b26e6*/
    sub_3C230(&v8); /*0x1b26f4*/
    v6 = sub_3E4F0(v11, &v8); /*0x1b2710*/
    v7 = FLAlertLayer_create_0( /*0x1b2764*/
           v3,
           (unsigned int)"Max Objects",
           v6,
           (unsigned int)"Cancel",
           (__int64)"Increase",
           1136525312,
           0,
           0,
           1065353216);
    sub_3C310(&v8); /*0x1b276c*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 64LL))(v7, 125); /*0x1b2780*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0x1b2790*/
  }
}

// [28/110] Address: 0x1b2850
// Method: EditorUI::onGoToLayer
unsigned int __fastcall EditorUI_onGoToLayer(__int64 a1)
{
  unsigned int result; // eax
  int v3; // r12d
  __int64 v4; // rax
  int v5; // ebx
  int v6; // edi
  cocos2d::CCArray *v7; // r14
  int v8; // esi
  unsigned int v9; // ebp
  int v10; // ecx
  cocos2d::CCArray *v11; // r14
  unsigned int v12; // ebp
  int v13; // ecx

  if ( *(_QWORD *)(a1 + 1568) || (result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944))) != 0 ) /*0x1b2874*/
  {
    v3 = *(__int16 *)(*(_QWORD *)(a1 + 1512) + 14930LL); /*0x1b2890*/
    v4 = *(_QWORD *)(a1 + 1568); /*0x1b2898*/
    if ( v4 ) /*0x1b28a2*/
    {
      v5 = *(__int16 *)(v4 + 1210); /*0x1b28a4*/
      v6 = *(__int16 *)(v4 + 1212); /*0x1b28ab*/
    }
    else
    {
      v7 = *(cocos2d::CCArray **)(a1 + 944); /*0x1b28b7*/
      v6 = 0; /*0x1b28be*/
      v8 = -1; /*0x1b28ca*/
      if ( !v7 ) /*0x1b28d2*/
        goto LABEL_12; /*0x1b28d2*/
      v5 = -1; /*0x1b28d7*/
      v9 = 0; /*0x1b28d9*/
      if ( !cocos2d::CCArray::count(v7) ) /*0x1b28db*/
        goto LABEL_12; /*0x1b28db*/
      do /*0x1b2910*/
      {
        v10 = *((__int16 *)cocos2d::CCArray::objectAtIndex(v7, v9) + 605); /*0x1b28f0*/
        if ( v5 == -1 ) /*0x1b28f9*/
        {
          v5 = v10; /*0x1b28fb*/
        }
        else if ( v5 != v10 ) /*0x1b2901*/
        {
          goto LABEL_12; /*0x1b2901*/
        }
        ++v9; /*0x1b2906*/
      }
      while ( v9 < cocos2d::CCArray::count(v7) ); /*0x1b2910*/
      if ( v5 == -1 ) /*0x1b2914*/
LABEL_12:
        v5 = 0; /*0x1b2916*/
      v11 = *(cocos2d::CCArray **)(a1 + 944); /*0x1b2918*/
      if ( v11 ) /*0x1b2922*/
      {
        v12 = 0; /*0x1b2927*/
        if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b2929*/
        {
          do /*0x1b295f*/
          {
            v13 = *((__int16 *)cocos2d::CCArray::objectAtIndex(v11, v12) + 606); /*0x1b293e*/
            if ( v8 == -1 ) /*0x1b2948*/
            {
              v8 = v13; /*0x1b294a*/
            }
            else if ( v8 != v13 ) /*0x1b2950*/
            {
              goto LABEL_21; /*0x1b2950*/
            }
            ++v12; /*0x1b2955*/
          }
          while ( v12 < cocos2d::CCArray::count(v11) ); /*0x1b295f*/
          if ( v8 != -1 ) /*0x1b2964*/
            v6 = v8; /*0x1b2966*/
        }
      }
    }
LABEL_21:
    if ( v6 ) /*0x1b2974*/
    {
      if ( v5 ) /*0x1b2978*/
      {
        if ( v3 != v6 ) /*0x1b2981*/
        {
LABEL_26:
          *(_WORD *)(*(_QWORD *)(a1 + 1512) + 14930LL) = v6; /*0x1b2985*/
          return EditorUI_updateGroupIDLabel(a1); /*0x1b2996*/
        }
      }
      else
      {
        LOWORD(v5) = v6; /*0x1b297a*/
      }
    }
    LOWORD(v6) = v5; /*0x1b2983*/
    goto LABEL_26; /*0x1b2983*/
  }
  return result; /*0x1b29aa*/
}

// [29/110] Address: 0x1b2b00
// Method: EditorUI::onGoToBaseLayer
__int64 __fastcall EditorUI_onGoToBaseLayer(__int64 a1)
{
  *(_WORD *)(*(_QWORD *)(a1 + 1512) + 14930LL) = -1; /*0x1b2b07*/
  return EditorUI_updateGroupIDLabel(a1);
}

// [30/110] Address: 0x1b2b50
// Method: EditorUI::selectBuildTab
unsigned int __fastcall EditorUI_selectBuildTab(__int64 a1, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int v3; // edi
  __int64 v5; // rax
  cocos2d::CCArray *v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // edi
  struct cocos2d::CCObject *v9; // r14
  __int64 v10; // rdx
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rdx

  result = *(_DWORD *)(a1 + 1608); /*0x1b2b5a*/
  v3 = a2; /*0x1b2b60*/
  if ( result != a2 && (*(_DWORD *)(a1 + 1508) == 2 || result == -1) ) /*0x1b2b79*/
  {
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1240)) - 1 < a2 ) /*0x1b2b95*/
      cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1240)); /*0x1b2b9e*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1240)) - 1 < v3 ) /*0x1b2bb5*/
      v3 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1240)) - 1; /*0x1b2bc4*/
    v5 = sub_182B60(); /*0x1b2bc7*/
    sub_182FE0(v5, 164); /*0x1b2bd4*/
    v6 = *(cocos2d::CCArray **)(a1 + 1240); /*0x1b2bd9*/
    v7 = 0; /*0x1b2be0*/
    *(_DWORD *)(a1 + 1608) = v3; /*0x1b2be2*/
    v8 = 0; /*0x1b2be8*/
    if ( cocos2d::CCArray::count(v6) ) /*0x1b2bea*/
    {
      do /*0x1b2c4b*/
      {
        v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1240), v8); /*0x1b2c15*/
        LOBYTE(v10) = v8 == *(_DWORD *)(a1 + 1608); /*0x1b2c18*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 336LL))(v9, v10); /*0x1b2c28*/
        if ( v8 == *(_DWORD *)(a1 + 1608) ) /*0x1b2c31*/
          *(_QWORD *)(a1 + 872) = v9; /*0x1b2c33*/
        ++v8; /*0x1b2c41*/
      }
      while ( v8 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1240)) ); /*0x1b2c4b*/
    }
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1256)); /*0x1b2c59*/
    if ( result ) /*0x1b2c61*/
    {
      do /*0x1b2ca1*/
      {
        v11 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 1256), v7); /*0x1b2c79*/
        LOBYTE(v12) = v7 == *(_DWORD *)(a1 + 1608); /*0x1b2c88*/
        CCMenuItemToggler_toggle(v11, v12); /*0x1b2c8b*/
        ++v7; /*0x1b2c97*/
        result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 1256)); /*0x1b2c99*/
      }
      while ( v7 < result ); /*0x1b2ca1*/
    }
  }
  return result; /*0x1b2ca8*/
}

// [31/110] Address: 0x1b2cc0
// Method: EditorUI::addObjectsToSmartTemplate
// Hidden C++ exception states: #wind=7
double __fastcall EditorUI_addObjectsToSmartTemplate(__int64 a1, __int64 a2, cocos2d::CCArray *a3)
{
  double result; // xmm0_8
  cocos2d::CCArray *v4; // r15
  __int64 v5; // r14
  cocos2d::CCDictionary *v6; // rsi
  unsigned int v7; // edi
  struct cocos2d::CCObject *v8; // rax
  int *v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  struct cocos2d::CCObject *v12; // rsi
  cocos2d::CCArray *v13; // r14
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  const struct cocos2d::CCPoint *v19; // rdx
  int v20; // eax
  int v21; // ecx
  __int64 SmartNeighbor; // rdi
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rbx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  bool v38; // r12
  bool v39; // si
  bool v40; // di
  bool v41; // r15
  bool v42; // r13
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // r11
  bool v47; // zf
  float v48; // xmm0_4
  float v49; // xmm1_4
  __int64 v50; // rbx
  float *v51; // rax
  struct cocos2d::CCArray *v52; // rax
  int v53; // eax
  int v54; // eax
  __int64 v55; // rbx
  void *v56; // rcx
  __m128i v57; // xmm1
  cocos2d::CCArray *v58; // rax
  cocos2d::CCArray *v59; // rsi
  unsigned int v60; // edi
  unsigned int v61; // ebx
  struct cocos2d::CCObject *v62; // rdi
  bool v63; // r15
  bool v64; // r13
  struct cocos2d::CCObject *v65; // rax
  unsigned int *v66; // rbx
  const struct cocos2d::CCPoint *v67; // rax
  const struct cocos2d::CCPoint *v68; // r8
  const struct cocos2d::CCPoint *v69; // r8
  float v70; // xmm0_4
  float v71; // xmm6_4
  int v72; // eax
  unsigned int v73; // eax
  float v74; // xmm8_4
  __int64 v75; // rcx
  const struct cocos2d::CCPoint *v76; // r8
  float v77; // xmm8_4
  __int64 v78; // rcx
  const struct cocos2d::CCPoint *v79; // r8
  float v80; // xmm8_4
  __int64 v81; // rcx
  const struct cocos2d::CCPoint *v82; // r8
  float v83; // xmm8_4
  __int64 v84; // rcx
  const struct cocos2d::CCPoint *v85; // r8
  float v86; // xmm8_4
  __int64 v87; // rcx
  const struct cocos2d::CCPoint *v88; // r8
  float v89; // xmm8_4
  __int64 v90; // rcx
  const struct cocos2d::CCPoint *v91; // r8
  float v92; // xmm8_4
  __int64 v93; // rcx
  const struct cocos2d::CCPoint *v94; // r8
  float v95; // xmm8_4
  __int64 v96; // rcx
  const struct cocos2d::CCPoint *v97; // r8
  unsigned int v98; // ebx
  __int64 v99; // rax
  struct cocos2d::CCObject *v100; // rdi
  __int64 v101; // rbx
  __int64 v102; // rbx
  unsigned __int8 v103; // al
  __int64 v104; // rbx
  unsigned __int8 v105; // al
  __int64 v106; // rsi
  __int64 v107; // rbx
  __int64 v108; // rdx
  size_t *v109; // rsi
  __int64 v110; // r14
  __int64 v111; // rbx
  __int64 v112; // rcx
  cocos2d::CCArray *v113; // rdi
  unsigned int v114; // ebx
  struct cocos2d::CCObject *v115; // rax
  __int64 v116; // rbx
  void *v117; // rdx
  void *v118; // rdx
  __int64 v119; // rax
  bool v120; // [rsp+60h] [rbp-A0h]
  bool v121; // [rsp+61h] [rbp-9Fh]
  bool v122; // [rsp+62h] [rbp-9Eh]
  bool v123; // [rsp+63h] [rbp-9Dh]
  char v124; // [rsp+64h] [rbp-9Ch]
  char v125; // [rsp+65h] [rbp-9Bh]
  char v126; // [rsp+66h] [rbp-9Ah]
  char v127; // [rsp+67h] [rbp-99h]
  bool v128; // [rsp+68h] [rbp-98h]
  float v129[2]; // [rsp+70h] [rbp-90h] BYREF
  char v130[8]; // [rsp+78h] [rbp-88h] BYREF
  char v131[8]; // [rsp+80h] [rbp-80h] BYREF
  int v132; // [rsp+88h] [rbp-78h]
  float v133; // [rsp+90h] [rbp-70h] BYREF
  float v134; // [rsp+94h] [rbp-6Ch]
  float v135; // [rsp+98h] [rbp-68h]
  float v136; // [rsp+9Ch] [rbp-64h]
  int v137; // [rsp+A0h] [rbp-60h]
  int v138; // [rsp+A4h] [rbp-5Ch]
  int v139; // [rsp+A8h] [rbp-58h]
  int v140; // [rsp+ACh] [rbp-54h]
  unsigned int v141; // [rsp+B0h] [rbp-50h]
  struct cocos2d::CCObject *v142; // [rsp+B8h] [rbp-48h]
  float v143[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v144; // [rsp+C8h] [rbp-38h]
  __int64 v145; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v146; // [rsp+D8h] [rbp-28h]
  __int64 v147; // [rsp+E0h] [rbp-20h]
  __int64 v148; // [rsp+E8h] [rbp-18h]
  char v149[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v150; // [rsp+F8h] [rbp-8h]
  _BYTE *v151; // [rsp+100h] [rbp+0h]
  __int64 v152; // [rsp+108h] [rbp+8h]
  __int64 v153; // [rsp+110h] [rbp+10h]
  __int64 v154; // [rsp+118h] [rbp+18h]
  cocos2d::CCDictionary *v155; // [rsp+120h] [rbp+20h]
  cocos2d::CCArray *v156; // [rsp+128h] [rbp+28h]
  __int64 v157; // [rsp+130h] [rbp+30h]
  char v158[8]; // [rsp+138h] [rbp+38h] BYREF
  cocos2d::CCDictionary *v159; // [rsp+140h] [rbp+40h]
  char v160[8]; // [rsp+148h] [rbp+48h] BYREF
  char v161[8]; // [rsp+150h] [rbp+50h] BYREF
  char v162[8]; // [rsp+158h] [rbp+58h] BYREF
  char v163[8]; // [rsp+160h] [rbp+60h] BYREF
  char v164[8]; // [rsp+168h] [rbp+68h] BYREF
  char v165[8]; // [rsp+170h] [rbp+70h] BYREF
  char v166[8]; // [rsp+178h] [rbp+78h] BYREF
  char v167[8]; // [rsp+180h] [rbp+80h] BYREF
  char v168[8]; // [rsp+188h] [rbp+88h] BYREF
  char v169[8]; // [rsp+190h] [rbp+90h] BYREF
  char v170[8]; // [rsp+198h] [rbp+98h] BYREF
  char v171[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v172[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  char v173[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v174[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v175[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v176[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  char v177[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v178[8]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v179[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  char v180[8]; // [rsp+1E8h] [rbp+E8h] BYREF
  char v181[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v182[8]; // [rsp+1F8h] [rbp+F8h] BYREF
  char v183[8]; // [rsp+200h] [rbp+100h] BYREF
  char v184[8]; // [rsp+208h] [rbp+108h] BYREF
  char v185[8]; // [rsp+210h] [rbp+110h] BYREF
  char v186[8]; // [rsp+218h] [rbp+118h] BYREF
  char v187[8]; // [rsp+220h] [rbp+120h] BYREF
  char v188[16]; // [rsp+228h] [rbp+128h] BYREF
  _BYTE v189[32]; // [rsp+238h] [rbp+138h] BYREF
  char v190[32]; // [rsp+258h] [rbp+158h] BYREF
  __int128 v191; // [rsp+278h] [rbp+178h] BYREF
  __m128i v192; // [rsp+288h] [rbp+188h]
  _BYTE v193[32]; // [rsp+298h] [rbp+198h] BYREF
  _BYTE v194[32]; // [rsp+2B8h] [rbp+1B8h] BYREF

  if ( a2 ) /*0x1b2cc3*/
  {
    v4 = a3; /*0x1b2d2c*/
    v156 = a3; /*0x1b2d2f*/
    v5 = a2; /*0x1b2d33*/
    v150 = a2; /*0x1b2d36*/
    v145 = a1; /*0x1b2d3a*/
    v155 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x1b2d44*/
    v6 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x1b2d4e*/
    v159 = v6; /*0x1b2d51*/
    v7 = 0; /*0x1b2d58*/
    while ( v7 < cocos2d::CCArray::count(v4) ) /*0x1b2d5e*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v4, v7); /*0x1b2d75*/
      v9 = (int *)v8; /*0x1b2d7b*/
      if ( *((_DWORD *)v8 + 314) == 5 ) /*0x1b2d85*/
      {
        v10 = *((_DWORD *)v8 + 259); /*0x1b2d97*/
        if ( v10 == 2896 || v10 == 2897 ) /*0x1b2da9*/
          GameObject_determineSlopeDirection(v9); /*0x1b2dae*/
        if ( v9[220] > 0 ) /*0x1b2dbc*/
          cocos2d::CCDictionary::setObject(v6, (struct cocos2d::CCObject *)v9, v9[220]); /*0x1b2dc7*/
        ++v7; /*0x1b2dcd*/
      }
      else
      {
        cocos2d::CCArray::removeObjectAtIndex(v4, v7, 1); /*0x1b2d8f*/
      }
    }
    v11 = 0; /*0x1b2ddc*/
    v141 = 0; /*0x1b2ddf*/
    if ( cocos2d::CCArray::count(v4) ) /*0x1b2de5*/
    {
      while ( 1 ) /*0x1b2e3b*/
      {
        v12 = cocos2d::CCArray::objectAtIndex(v4, v11); /*0x1b2e3b*/
        v142 = v12; /*0x1b2e3e*/
        if ( !*((_BYTE *)v12 + 1360) ) /*0x1b2e42*/
          break; /*0x1b2e42*/
LABEL_144:
        v141 = ++v11; /*0x1b3bda*/
        if ( v11 >= cocos2d::CCArray::count(v4) ) /*0x1b3be8*/
        {
          v5 = v150; /*0x1b3bee*/
          goto LABEL_146; /*0x1b3bee*/
        }
      }
      v13 = 0; /*0x1b2e4f*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v187, (const struct cocos2d::CCPoint *)&dword_9046E8); /*0x1b2e60*/
      v15 = GJSmartTemplate_smartObjectToType(v12, v14); /*0x1b2e6c*/
      GJSmartTemplate_offsetForType(v143, v15); /*0x1b2e77*/
      v16 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v12 + 200LL))(v12); /*0x1b2e82*/
      cocos2d::CCPoint::operator+(v16, v130, v143); /*0x1b2e94*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v149); /*0x1b2e9e*/
      v140 = 1; /*0x1b2ea4*/
      if ( v143[0] == *(float *)&dword_9046E8 && v143[1] == *(float *)&dword_9046EC ) /*0x1b2ec9*/
      {
        v127 = 0; /*0x1b2ecb*/
      }
      else
      {
        v127 = 1; /*0x1b2ed2*/
        v140 = 2; /*0x1b2ed7*/
        cocos2d::CCPoint::operator-(v143, v158); /*0x1b2ee6*/
        v17 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v12 + 200LL))(v12); /*0x1b2ef2*/
        cocos2d::CCPoint::operator+(v17, v176, v158); /*0x1b2f06*/
        cocos2d::CCPoint::operator=(v149, v176); /*0x1b2f17*/
      }
      v191 = 0; /*0x1b2f20*/
      v192.m128i_i64[0] = 0; /*0x1b2f27*/
      v146 = 15; /*0x1b2f33*/
      v192.m128i_i64[1] = 15; /*0x1b2f37*/
      LOBYTE(v191) = 0; /*0x1b2f3e*/
      v18 = 0; /*0x1b2f45*/
      v132 = 0; /*0x1b2f48*/
      do /*0x1b3409*/
      {
        v19 = (const struct cocos2d::CCPoint *)v130; /*0x1b2f50*/
        if ( v18 ) /*0x1b2f5b*/
          v19 = (const struct cocos2d::CCPoint *)v149; /*0x1b2f5b*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v129, v19); /*0x1b2f64*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v177, (const struct cocos2d::CCPoint *)v129); /*0x1b2f76*/
        SmartNeighbor = EditorUI_getSmartNeighbor(v21, (_DWORD)v12, v20, 1, (__int64)v4); /*0x1b2f92*/
        v148 = SmartNeighbor; /*0x1b2f95*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v178, (const struct cocos2d::CCPoint *)v129); /*0x1b2fa5*/
        v25 = EditorUI_getSmartNeighbor(v24, (_DWORD)v12, v23, 2, (__int64)v4); /*0x1b2fc1*/
        v151 = (_BYTE *)v25; /*0x1b2fc4*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v179, (const struct cocos2d::CCPoint *)v129); /*0x1b2fd4*/
        v152 = EditorUI_getSmartNeighbor(v27, (_DWORD)v12, v26, 3, (__int64)v4); /*0x1b2ff0*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v180, (const struct cocos2d::CCPoint *)v129); /*0x1b3000*/
        v154 = EditorUI_getSmartNeighbor(v29, (_DWORD)v12, v28, 4, (__int64)v4); /*0x1b301c*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v181, (const struct cocos2d::CCPoint *)v129); /*0x1b302c*/
        v157 = EditorUI_getSmartNeighbor(v31, (_DWORD)v12, v30, 5, (__int64)v4); /*0x1b3048*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v182, (const struct cocos2d::CCPoint *)v129); /*0x1b3058*/
        v144 = EditorUI_getSmartNeighbor(v33, (_DWORD)v12, v32, 6, (__int64)v4); /*0x1b3074*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v183, (const struct cocos2d::CCPoint *)v129); /*0x1b3084*/
        v147 = EditorUI_getSmartNeighbor(v35, (_DWORD)v12, v34, 7, (__int64)v4); /*0x1b30a0*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v184, (const struct cocos2d::CCPoint *)v129); /*0x1b30b0*/
        v43 = EditorUI_getSmartNeighbor(v37, (_DWORD)v12, v36, 8, (__int64)v4); /*0x1b30c7*/
        v45 = v43; /*0x1b30cc*/
        v153 = v43; /*0x1b30cf*/
        v38 = SmartNeighbor != 0; /*0x1b30d6*/
        v39 = v25 != 0; /*0x1b30dd*/
        v40 = v152 != 0; /*0x1b30e8*/
        v41 = v154 != 0; /*0x1b30f3*/
        v42 = v157 != 0; /*0x1b30fe*/
        LOBYTE(v43) = v144 != 0; /*0x1b3107*/
        v137 = v43; /*0x1b310a*/
        v44 = v147; /*0x1b310d*/
        LOBYTE(v44) = v147 != 0; /*0x1b3114*/
        v138 = v44; /*0x1b3117*/
        LOBYTE(v45) = v45 != 0; /*0x1b311d*/
        v139 = v45; /*0x1b3120*/
        v46 = v144; /*0x1b3128*/
        if ( v148 ) /*0x1b312c*/
        {
          if ( *(_BYTE *)(v148 + 1360) ) /*0x1b3136*/
            v38 = 0; /*0x1b3144*/
          v46 = v144; /*0x1b3148*/
        }
        if ( v25 ) /*0x1b314f*/
        {
          v47 = *(_BYTE *)(v25 + 1360) == 0; /*0x1b3155*/
          LODWORD(v25) = 0; /*0x1b315c*/
          if ( !v47 ) /*0x1b3161*/
            v39 = 0; /*0x1b3161*/
        }
        if ( v152 && *(_BYTE *)(v152 + 1360) ) /*0x1b316d*/
          v40 = v25; /*0x1b3175*/
        if ( v154 && *(_BYTE *)(v154 + 1360) ) /*0x1b3181*/
          v41 = v25; /*0x1b3189*/
        if ( v157 && *(_BYTE *)(v157 + 1360) ) /*0x1b3196*/
          v42 = v25; /*0x1b319e*/
        if ( v46 ) /*0x1b31a5*/
        {
          LODWORD(v43) = (unsigned __int8)v43; /*0x1b31a7*/
          if ( *(_BYTE *)(v46 + 1360) ) /*0x1b31aa*/
            LODWORD(v43) = v25; /*0x1b31b2*/
          v137 = v43; /*0x1b31b5*/
        }
        if ( v147 ) /*0x1b31bf*/
        {
          v44 = (unsigned __int8)v44; /*0x1b31c1*/
          if ( *(_BYTE *)(v147 + 1360) ) /*0x1b31c4*/
            v44 = v25; /*0x1b31cb*/
          v138 = v44; /*0x1b31ce*/
        }
        if ( v153 ) /*0x1b31d8*/
        {
          LODWORD(v45) = (unsigned __int8)v45; /*0x1b31da*/
          if ( *(_BYTE *)(v153 + 1360) ) /*0x1b31dd*/
            LODWORD(v45) = v25; /*0x1b31e4*/
          v139 = v45; /*0x1b31e7*/
        }
        cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v133, v129[0] - 14.0, v129[1] - 14.0, 28.0, 28.0); /*0x1b320f*/
        v48 = v136; /*0x1b3215*/
        if ( !v38 ) /*0x1b321d*/
        {
          v48 = v136 + 14.0; /*0x1b321f*/
          v136 = v136 + 14.0; /*0x1b3224*/
        }
        if ( !v39 ) /*0x1b322c*/
        {
          v136 = v48 + 14.0; /*0x1b3233*/
          v134 = v134 + -14.0; /*0x1b3242*/
        }
        v49 = v135; /*0x1b3247*/
        if ( !v40 ) /*0x1b324f*/
        {
          v49 = v135 + 14.0; /*0x1b3251*/
          v135 = v135 + 14.0; /*0x1b3256*/
          v133 = v133 + -14.0; /*0x1b3265*/
        }
        if ( !v41 ) /*0x1b326d*/
          v135 = v49 + 14.0; /*0x1b3274*/
        v50 = *(_QWORD *)(v145 + 1512); /*0x1b327d*/
        v51 = (float *)cocos2d::CCRect::CCRect((cocos2d::CCRect *)v188, (const struct cocos2d::CCRect *)&v133); /*0x1b328f*/
        v52 = LevelEditorLayer_objectsInRect(v50, v51, 1); /*0x1b329e*/
        if ( v13 ) /*0x1b32a6*/
        {
          if ( v52 ) /*0x1b32b0*/
            cocos2d::CCArray::addObjectsFromArray(v13, v52); /*0x1b32b8*/
        }
        else
        {
          v13 = v52; /*0x1b32a8*/
        }
        v53 = v132; /*0x1b32be*/
        if ( v132 ) /*0x1b32c3*/
        {
          v12 = v142; /*0x1b33f3*/
          v38 = v128; /*0x1b33f7*/
        }
        else
        {
          v128 = v38; /*0x1b32c9*/
          v120 = v39; /*0x1b32ce*/
          v121 = v40; /*0x1b32d3*/
          v122 = v41; /*0x1b32d8*/
          v123 = v42; /*0x1b32dd*/
          v124 = v137; /*0x1b32e6*/
          v125 = v138; /*0x1b32ee*/
          v126 = v139; /*0x1b32f6*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v185, (const struct cocos2d::CCPoint *)v129); /*0x1b3306*/
          v12 = v142; /*0x1b3352*/
          v55 = GJSmartTemplate_keyFromNeighbors( /*0x1b3365*/
                  (unsigned int)v193,
                  v54,
                  (_DWORD)v142,
                  v148,
                  (__int64)v151,
                  v152,
                  v154,
                  v157,
                  v144,
                  v147,
                  v153);
          if ( &v191 != (__int128 *)v55 ) /*0x1b3372*/
          {
            if ( v146 > 0xF ) /*0x1b337c*/
            {
              v56 = (void *)v191; /*0x1b3382*/
              if ( v146 + 1 >= 0x1000 ) /*0x1b3393*/
              {
                v56 = *(void **)(v191 - 8); /*0x1b3399*/
                if ( (unsigned __int64)(v191 - (_QWORD)v56 - 8) > 0x1F ) /*0x1b33a8*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x1b3c70*/
              }
              j_j_free(v56); /*0x1b33ae*/
            }
            v191 = *(_OWORD *)v55; /*0x1b33b6*/
            v192 = *(__m128i *)(v55 + 16); /*0x1b33c1*/
            v57 = v192; /*0x1b33bd*/
            *(_QWORD *)(v55 + 16) = 0; /*0x1b33ca*/
            *(_QWORD *)(v55 + 24) = 15; /*0x1b33ce*/
            *(_BYTE *)v55 = 0; /*0x1b33d6*/
            v146 = _mm_srli_si128(v57, 8).m128i_u64[0]; /*0x1b33dd*/
          }
          sub_3C310(v193); /*0x1b33e9*/
          v53 = v132; /*0x1b33ee*/
        }
        v18 = v53 + 1; /*0x1b33fd*/
        v132 = v18; /*0x1b33ff*/
        v4 = v156; /*0x1b3405*/
      }
      while ( v18 < v140 ); /*0x1b3409*/
      if ( *((int *)v12 + 220) > 0 ) /*0x1b3418*/
      {
        v58 = cocos2d::CCDictionary::objectForKey( /*0x1b3433*/
                *(cocos2d::CCDictionary **)(*(_QWORD *)(v145 + 1512) + 4320LL),
                *((int *)v12 + 220));
        v59 = v58; /*0x1b3439*/
        v60 = 0; /*0x1b343c*/
        if ( !v58 || (v61 = 0, !cocos2d::CCArray::count(v58)) ) /*0x1b344c*/
        {
          v12 = v142; /*0x1b38c3*/
          goto LABEL_79; /*0x1b38c7*/
        }
        do /*0x1b3497*/
        {
          v62 = cocos2d::CCArray::objectAtIndex(v59, v61); /*0x1b346b*/
          if ( !cocos2d::CCArray::containsObject(v13, v62) ) /*0x1b3474*/
            cocos2d::CCArray::addObject(v13, v62); /*0x1b3484*/
          ++v61; /*0x1b348a*/
        }
        while ( v61 < cocos2d::CCArray::count(v59) ); /*0x1b3497*/
        v12 = v142; /*0x1b3499*/
      }
      v60 = 0; /*0x1b349d*/
LABEL_79:
      if ( v13 ) /*0x1b34a2*/
      {
        v63 = v120; /*0x1b34b1*/
        v64 = v121; /*0x1b34b7*/
        if ( cocos2d::CCArray::count(v13) ) /*0x1b34ab*/
        {
          do /*0x1b38e5*/
          {
            v65 = cocos2d::CCArray::objectAtIndex(v13, v60); /*0x1b34ca*/
            v66 = (unsigned int *)v65; /*0x1b34d0*/
            if ( *((_DWORD *)v65 + 314) == 5 || cocos2d::CCDictionary::objectForKey(v155, *((unsigned int *)v65 + 231)) ) /*0x1b34ea*/
              goto LABEL_124; /*0x1b34ea*/
            v67 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v66 + 200LL))(v66); /*0x1b3506*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v131, v67); /*0x1b350f*/
            v70 = cocos2d::ccpDistance((cocos2d *)v130, (const struct cocos2d::CCPoint *)v131, v68); /*0x1b351e*/
            v71 = v70; /*0x1b3524*/
            if ( v127 ) /*0x1b352c*/
              v71 = fminf(v70, cocos2d::ccpDistance((cocos2d *)v149, (const struct cocos2d::CCPoint *)v131, v69)); /*0x1b353c*/
            v72 = v66[220]; /*0x1b3540*/
            if ( v72 > 0 && v72 != *((_DWORD *)v12 + 220) && cocos2d::CCDictionary::objectForKey(v159, (int)v66[220]) ) /*0x1b355a*/
              goto LABEL_124; /*0x1b355a*/
            v73 = v66[220]; /*0x1b3569*/
            if ( v73 && v73 == *((_DWORD *)v12 + 220) ) /*0x1b3579*/
              goto LABEL_122; /*0x1b3579*/
            if ( v38 ) /*0x1b3582*/
            {
              v74 = 30.0; /*0x1b3584*/
              ObjectToolbox_sharedState(); /*0x1b3588*/
              if ( ObjectToolbox_gridNodeSizeForKey(v75, 0) == 15.0 ) /*0x1b3599*/
                v74 = 15.0; /*0x1b359b*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v160, 0.0, v74); /*0x1b35aa*/
              cocos2d::CCPoint::operator+(v130, v161, v160); /*0x1b35bd*/
              if ( v71 > cocos2d::ccpDistance((cocos2d *)v131, (const struct cocos2d::CCPoint *)v161, v76) ) /*0x1b35d4*/
                goto LABEL_124; /*0x1b35d4*/
            }
            if ( v120 ) /*0x1b35dd*/
            {
              v77 = 30.0; /*0x1b35df*/
              ObjectToolbox_sharedState(); /*0x1b35e3*/
              if ( ObjectToolbox_gridNodeSizeForKey(v78, 0) == 15.0 ) /*0x1b35f4*/
                v77 = 15.0; /*0x1b35f6*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, 0.0, -v77); /*0x1b3609*/
              cocos2d::CCPoint::operator+(v130, v163, v162); /*0x1b361c*/
              if ( v71 > cocos2d::ccpDistance((cocos2d *)v131, (const struct cocos2d::CCPoint *)v163, v79) ) /*0x1b3633*/
                goto LABEL_124; /*0x1b3633*/
            }
            if ( v121 ) /*0x1b363c*/
            {
              v80 = 30.0; /*0x1b363e*/
              ObjectToolbox_sharedState(); /*0x1b3642*/
              if ( ObjectToolbox_gridNodeSizeForKey(v81, 0) == 15.0 ) /*0x1b3653*/
                v80 = 15.0; /*0x1b3655*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v164, -v80, 0.0); /*0x1b3668*/
              cocos2d::CCPoint::operator+(v130, v165, v164); /*0x1b367b*/
              if ( v71 > cocos2d::ccpDistance((cocos2d *)v131, (const struct cocos2d::CCPoint *)v165, v82) ) /*0x1b3692*/
                goto LABEL_124; /*0x1b3692*/
            }
            if ( v122 ) /*0x1b369d*/
            {
              v83 = 30.0; /*0x1b369f*/
              ObjectToolbox_sharedState(); /*0x1b36a3*/
              if ( ObjectToolbox_gridNodeSizeForKey(v84, 0) == 15.0 ) /*0x1b36b4*/
                v83 = 15.0; /*0x1b36b6*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v166, v83, 0.0); /*0x1b36c5*/
              cocos2d::CCPoint::operator+(v130, v167, v166); /*0x1b36db*/
              if ( v71 > cocos2d::ccpDistance((cocos2d *)v131, (const struct cocos2d::CCPoint *)v167, v85) ) /*0x1b36f5*/
                goto LABEL_124; /*0x1b36f5*/
            }
            if ( v123 ) /*0x1b3700*/
            {
              v86 = 30.0; /*0x1b3702*/
              ObjectToolbox_sharedState(); /*0x1b3706*/
              if ( ObjectToolbox_gridNodeSizeForKey(v87, 0) == 15.0 ) /*0x1b3717*/
                v86 = 15.0; /*0x1b3719*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v168, -v86, v86); /*0x1b3730*/
              cocos2d::CCPoint::operator+(v130, v169, v168); /*0x1b3749*/
              if ( v71 > cocos2d::ccpDistance((cocos2d *)v131, (const struct cocos2d::CCPoint *)v169, v88) ) /*0x1b3763*/
                goto LABEL_124; /*0x1b3763*/
            }
            if ( v124 ) /*0x1b376e*/
            {
              v89 = 30.0; /*0x1b3770*/
              ObjectToolbox_sharedState(); /*0x1b3774*/
              if ( ObjectToolbox_gridNodeSizeForKey(v90, 0) == 15.0 ) /*0x1b3785*/
                v89 = 15.0; /*0x1b3787*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v170, v89, v89); /*0x1b379a*/
              cocos2d::CCPoint::operator+(v130, v171, v170); /*0x1b37b3*/
              if ( v71 > cocos2d::ccpDistance((cocos2d *)v131, (const struct cocos2d::CCPoint *)v171, v91) ) /*0x1b37cd*/
                goto LABEL_124; /*0x1b37cd*/
            }
            if ( v125 ) /*0x1b37d8*/
            {
              v92 = 30.0; /*0x1b37da*/
              ObjectToolbox_sharedState(); /*0x1b37de*/
              if ( ObjectToolbox_gridNodeSizeForKey(v93, 0) == 15.0 ) /*0x1b37ef*/
                v92 = 15.0; /*0x1b37f1*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v172, -v92, -v92); /*0x1b3808*/
              cocos2d::CCPoint::operator+(v130, v173, v172); /*0x1b3821*/
              if ( v71 > cocos2d::ccpDistance((cocos2d *)v131, (const struct cocos2d::CCPoint *)v173, v94) ) /*0x1b383b*/
                goto LABEL_124; /*0x1b383b*/
            }
            if ( !v126 ) /*0x1b3846*/
              goto LABEL_122; /*0x1b3846*/
            v95 = 30.0; /*0x1b3848*/
            ObjectToolbox_sharedState(); /*0x1b384c*/
            if ( ObjectToolbox_gridNodeSizeForKey(v96, 0) == 15.0 ) /*0x1b385d*/
              v95 = 15.0; /*0x1b385f*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v174, v95, -v95); /*0x1b3876*/
            cocos2d::CCPoint::operator+(v130, v175, v174); /*0x1b388f*/
            if ( v71 > cocos2d::ccpDistance((cocos2d *)v131, (const struct cocos2d::CCPoint *)v175, v97) ) /*0x1b38a9*/
            {
LABEL_124:
              cocos2d::CCArray::removeObjectAtIndex(v13, v60, 1); /*0x1b38d4*/
            }
            else
            {
LABEL_122:
              cocos2d::CCDictionary::setObject(v155, (struct cocos2d::CCObject *)v66, v66[231]); /*0x1b38b9*/
              ++v60; /*0x1b38bf*/
            }
          }
          while ( v60 < cocos2d::CCArray::count(v13) ); /*0x1b38e5*/
        }
        if ( cocos2d::CCArray::count(v13) ) /*0x1b38ee*/
        {
          v98 = *((_DWORD *)v12 + 259); /*0x1b38fc*/
          v99 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, char *))(*(_QWORD *)v12 + 1208LL))(v12, v186); /*0x1b390f*/
          v100 = (struct cocos2d::CCObject *)sub_1B0700(v145, v98, v99); /*0x1b3923*/
          cocos2d::CCArray::addObject(v13, v100); /*0x1b392c*/
          v101 = *(_QWORD *)v100; /*0x1b3932*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v12 + 360LL))(v12); /*0x1b3942*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(v101 + 352))(v100); /*0x1b394a*/
          v102 = *(_QWORD *)v100; /*0x1b3950*/
          v103 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v12 + 1272LL))(v12); /*0x1b3959*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(v102 + 1088))(v100, v103); /*0x1b3965*/
          v104 = *(_QWORD *)v100; /*0x1b396b*/
          v105 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v12 + 1280LL))(v12); /*0x1b3974*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(v104 + 1096))(v100, v105); /*0x1b3980*/
          *((_BYTE *)v100 + 1158) = 1; /*0x1b3986*/
          qsort(*(void **)(*((_QWORD *)v13 + 7) + 16LL), **((unsigned int **)v13 + 7), 8u, sub_19CC30); /*0x1b39a4*/
          v106 = v145; /*0x1b39b4*/
          GameLevelManager_onGetLevelRateInfoCompleted(v145, v193, v13); /*0x1b39bb*/
          *((_BYTE *)v100 + 1158) = 0; /*0x1b39c1*/
          *((_BYTE *)v100 + 1140) = *((_BYTE *)v100 + 1141); /*0x1b39cf*/
          EditorUI_deselectObject(v106, v100); /*0x1b39db*/
          v107 = *(_QWORD *)(v106 + 1512); /*0x1b39e0*/
          LOBYTE(v108) = 1; /*0x1b39ea*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v100 + 1160LL))(v100, v108); /*0x1b39ef*/
          GJBaseGameLayer_removeObjectFromSection(v107, v100); /*0x1b39fb*/
          sub_3F1780(v107, v100); /*0x1b3a06*/
          *(_BYTE *)(v107 + 15730) = 1; /*0x1b3a0b*/
          sub_1FF670(v106); /*0x1b3a15*/
          sub_1FFD20(v106); /*0x1b3a1d*/
          sub_200430(v106); /*0x1b3a25*/
          v151 = v189; /*0x1b3a31*/
          v109 = (size_t *)sub_3E4F0(v189, v193); /*0x1b3a48*/
          v146 = (unsigned __int64)v109; /*0x1b3a4b*/
          v110 = sub_3E4F0(v190, &v191); /*0x1b3a62*/
          v151 = (_BYTE *)v110; /*0x1b3a65*/
          v111 = v150; /*0x1b3a69*/
          sub_3F5A0((void *)(v150 + 168), &byte_6E86E0, 0); /*0x1b3a7e*/
          v113 = (cocos2d::CCArray *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v111 + 56), v110); /*0x1b3a90*/
          if ( !v113 ) /*0x1b3a96*/
          {
            v113 = (cocos2d::CCArray *)cocos2d::CCArray::create(v112); /*0x1b3a9e*/
            cocos2d::CCDictionary::setObject(*(_QWORD *)(v111 + 56), v113, v110); /*0x1b3aab*/
          }
          v114 = 0; /*0x1b3ab3*/
          if ( cocos2d::CCArray::count(v113) ) /*0x1b3ab8*/
          {
            while ( 1 ) /*0x1b3ac7*/
            {
              v115 = cocos2d::CCArray::objectAtIndex(v113, v114); /*0x1b3ac7*/
              if ( !(unsigned int)sub_3C160((char *)v115 + 88, v109) ) /*0x1b3ad4*/
                break; /*0x1b3ad4*/
              if ( ++v114 >= cocos2d::CCArray::count(v113) ) /*0x1b3aea*/
                goto LABEL_132; /*0x1b3aea*/
            }
          }
          else
          {
LABEL_132:
            v116 = GJSmartPrefab_create(); /*0x1b3aec*/
            if ( (size_t *)(v116 + 88) != v109 ) /*0x1b3afb*/
            {
              v117 = v109; /*0x1b3afd*/
              if ( v109[3] > 0xF ) /*0x1b3b05*/
                v117 = (void *)*v109; /*0x1b3b07*/
              sub_3F5A0((void *)(v116 + 88), v117, v109[2]); /*0x1b3b0e*/
            }
            if ( v116 + 56 != v110 ) /*0x1b3b1a*/
            {
              v118 = (void *)v110; /*0x1b3b1c*/
              if ( *(_QWORD *)(v110 + 24) > 0xFu ) /*0x1b3b24*/
                v118 = *(void **)v110; /*0x1b3b26*/
              sub_3F5A0((void *)(v116 + 56), v118, *(_QWORD *)(v110 + 16)); /*0x1b3b2d*/
            }
            cocos2d::CCArray::addObject(v113, (struct cocos2d::CCObject *)v116); /*0x1b3b38*/
            v119 = sub_3E4F0(v194, v110); /*0x1b3b48*/
            sub_3B34B0(v150, v119); /*0x1b3b54*/
          }
          sub_3C310(v110); /*0x1b3b5d*/
          sub_3C310(v109); /*0x1b3b66*/
          sub_3C310(v193); /*0x1b3b73*/
        }
      }
      else
      {
        v63 = v120; /*0x1b3b7a*/
        v64 = v121; /*0x1b3b80*/
      }
      sub_3C310(&v191); /*0x1b3b8d*/
      v128 = v38; /*0x1b3b92*/
      v120 = v63; /*0x1b3b97*/
      v121 = v64; /*0x1b3b9c*/
      v4 = v156; /*0x1b3bce*/
      v11 = v141; /*0x1b3bd2*/
      goto LABEL_144; /*0x1b3bd2*/
    }
LABEL_146:
    GJSmartTemplate_logTemplateStatus(v5, v194); /*0x1b3bf2*/
    return sub_3C310(v194); /*0x1b3c08*/
  }
  return result; /*0x1b3c5e*/
}

// [32/110] Address: 0x1b3c80
// Method: EditorUI::createSmartObjectsFromTemplate
// Hidden C++ exception states: #wind=9
void __fastcall EditorUI_createSmartObjectsFromTemplate(
        __int64 a1,
        __int64 a2,
        cocos2d::CCArray *a3,
        char a4,
        char a5,
        char a6)
{
  cocos2d::CCArray *v6; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  cocos2d::CCArray *v17; // r15
  __int64 v18; // rcx
  cocos2d::CCDictionary *v19; // r13
  unsigned int v20; // r12d
  struct cocos2d::CCObject *v21; // rbx
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbx
  float *v27; // rax
  cocos2d::CCArray *v28; // rax
  cocos2d::CCArray *v29; // r15
  unsigned int i; // edi
  struct cocos2d::CCObject *v31; // rax
  struct cocos2d::CCObject *v32; // rbx
  unsigned int v33; // ebx
  struct cocos2d::CCObject *v34; // rax
  struct cocos2d::CCObject *v35; // rdi
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  __int64 v43; // r13
  int v44; // eax
  int v45; // ecx
  __int64 v46; // r12
  int v47; // eax
  int v48; // ecx
  __int64 v49; // r15
  int v50; // eax
  int v51; // ecx
  __int64 v52; // r14
  __int64 v53; // rbx
  int v54; // eax
  int v55; // ecx
  __int64 v56; // rsi
  int v57; // eax
  int v58; // ecx
  __int64 v59; // rdi
  int v60; // eax
  int v61; // ecx
  __int64 v62; // rbx
  struct cocos2d::CCObject *v63; // rdi
  int v64; // eax
  __int64 v65; // rax
  void **v66; // r14
  size_t v67; // rsi
  unsigned __int64 v68; // rax
  size_t v69; // rbx
  void **v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r9
  cocos2d::CCArray *v73; // rax
  struct cocos2d::CCArray *v74; // rbx
  const struct cocos2d::CCPoint *v75; // rax
  __int64 v76; // rax
  int v77; // eax
  int v78; // r8d
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 j; // rdi
  _BYTE *v82; // rbx
  __int64 v83; // r8
  unsigned int v84; // r12d
  unsigned int v85; // ebx
  cocos2d::CCArray *k; // rdi
  struct cocos2d::CCObject *v87; // rax
  cocos2d::CCObject **v88; // rdi
  __int64 v89; // rcx
  struct cocos2d::CCArray *v90; // r15
  cocos2d::CCArray *v91; // rax
  __int64 v92; // r14
  unsigned int v93; // ebx
  unsigned int m; // r14d
  struct cocos2d::CCObject *v95; // rax
  struct cocos2d::CCObject *v96; // rdi
  __int64 v97; // rbx
  __int64 v98; // rdx
  cocos2d::CCObject **v99; // rbx
  __int64 v100; // rcx
  struct cocos2d::CCArray *v101; // r14
  cocos2d::CCArray *v102; // rax
  __int64 v103; // rdi
  __int64 v104; // [rsp+48h] [rbp-B8h]
  float v106[2]; // [rsp+68h] [rbp-98h] BYREF
  void **SmartNeighbor; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v108; // [rsp+78h] [rbp-88h]
  cocos2d::CCArray *v109; // [rsp+80h] [rbp-80h]
  char v110[8]; // [rsp+88h] [rbp-78h] BYREF
  void *v111[2]; // [rsp+90h] [rbp-70h] BYREF
  size_t v112; // [rsp+A0h] [rbp-60h]
  __int64 v113; // [rsp+A8h] [rbp-58h]
  cocos2d::CCArray *v114; // [rsp+B0h] [rbp-50h]
  struct cocos2d::CCObject *v115; // [rsp+B8h] [rbp-48h]
  __int64 v116; // [rsp+C0h] [rbp-40h]
  cocos2d::CCArray *v117; // [rsp+C8h] [rbp-38h]
  cocos2d::CCArray *v118; // [rsp+D0h] [rbp-30h]
  _QWORD v119[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v120; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v121; // [rsp+F8h] [rbp-8h]
  __int64 v122; // [rsp+100h] [rbp+0h]
  char v123[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v124; // [rsp+110h] [rbp+10h]
  cocos2d::CCDictionary *v125; // [rsp+118h] [rbp+18h]
  char v126[8]; // [rsp+120h] [rbp+20h] BYREF
  char v127[8]; // [rsp+128h] [rbp+28h] BYREF
  char v128[8]; // [rsp+130h] [rbp+30h] BYREF
  char v129[8]; // [rsp+138h] [rbp+38h] BYREF
  char v130[8]; // [rsp+140h] [rbp+40h] BYREF
  char v131[8]; // [rsp+148h] [rbp+48h] BYREF
  char v132[8]; // [rsp+150h] [rbp+50h] BYREF
  char v133[8]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v134[16]; // [rsp+160h] [rbp+60h] BYREF
  char v135[8]; // [rsp+170h] [rbp+70h] BYREF
  char v136[8]; // [rsp+178h] [rbp+78h] BYREF
  char v137[8]; // [rsp+180h] [rbp+80h] BYREF
  char v138[32]; // [rsp+188h] [rbp+88h] BYREF
  char v139[40]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v140; // [rsp+1D0h] [rbp+D0h] BYREF
  char v141[32]; // [rsp+1D8h] [rbp+D8h] BYREF
  void *Src[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  size_t Size; // [rsp+208h] [rbp+108h]
  unsigned __int64 v144; // [rsp+210h] [rbp+110h]
  int v145; // [rsp+220h] [rbp+120h]
  char v146; // [rsp+224h] [rbp+124h]
  char v147; // [rsp+225h] [rbp+125h]
  _BYTE v148[32]; // [rsp+230h] [rbp+130h] BYREF

  if ( a3 ) /*0x1b3c83*/
  {
    v6 = a3; /*0x1b3cc7*/
    v117 = a3; /*0x1b3cca*/
    v124 = a2; /*0x1b3cd1*/
    v8 = a1; /*0x1b3cd5*/
    v116 = a1; /*0x1b3cd8*/
    if ( cocos2d::CCArray::count(a3) ) /*0x1b3cdf*/
    {
      if ( a2 ) /*0x1b3cf0*/
      {
        v9 = *(_QWORD *)(v8 + 1512); /*0x1b3cf6*/
        v10 = *(_DWORD *)(v9 + 15568); /*0x1b3cfd*/
        if ( v10 >= 0 ) /*0x1b3d05*/
        {
          v11 = *(_DWORD *)(v9 + 15504) - v10; /*0x1b3d0d*/
          v12 = 0; /*0x1b3d0f*/
          if ( v11 > 1 ) /*0x1b3d14*/
          {
            do /*0x1b3d22*/
            {
              if ( v12 >= 7 ) /*0x1b3d19*/
                break; /*0x1b3d19*/
              v11 = (unsigned int)v11 >> 1; /*0x1b3d1b*/
              ++v12; /*0x1b3d1d*/
            }
            while ( (unsigned int)v11 > 1 ); /*0x1b3d22*/
          }
          ++*(_DWORD *)(v9 + 4LL * v12 + 15536); /*0x1b3d27*/
        }
        *(_DWORD *)(v9 + 15568) = *(_DWORD *)(v9 + 15504); /*0x1b3d34*/
        v13 = a2 + 112; /*0x1b3d3a*/
        v14 = *(_QWORD **)(a2 + 112); /*0x1b3d3e*/
        sub_3B95A0(v13, v13, v14[1]); /*0x1b3d4b*/
        v14[1] = v14; /*0x1b3d50*/
        *v14 = v14; /*0x1b3d54*/
        v14[2] = v14; /*0x1b3d57*/
        *(_QWORD *)(v13 + 8) = 0; /*0x1b3d5b*/
        EditorUI_deselectAll(v8); /*0x1b3d66*/
        v114 = (cocos2d::CCArray *)cocos2d::CCArray::create(v15); /*0x1b3d71*/
        v17 = (cocos2d::CCArray *)cocos2d::CCArray::create(v16); /*0x1b3d7b*/
        v109 = v17; /*0x1b3d7e*/
        v118 = (cocos2d::CCArray *)cocos2d::CCArray::create(v18); /*0x1b3d88*/
        v19 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x1b3d92*/
        v125 = v19; /*0x1b3d95*/
        v20 = 0; /*0x1b3d99*/
        if ( cocos2d::CCArray::count(v6) ) /*0x1b3d9f*/
        {
          do /*0x1b3f2d*/
          {
            v21 = cocos2d::CCArray::objectAtIndex(v6, v20); /*0x1b3dcc*/
            v22 = *((_DWORD *)v21 + 259); /*0x1b3dcf*/
            if ( v22 == 2896 || v22 == 2897 ) /*0x1b3de1*/
              GameObject_determineSlopeDirection(v21); /*0x1b3de6*/
            if ( a4 ) /*0x1b3df0*/
            {
              cocos2d::CCPoint::CCPoint( /*0x1b3e02*/
                (cocos2d::CCPoint *)&SmartNeighbor,
                (const struct cocos2d::CCPoint *)&unk_904D10);
              v24 = GJSmartTemplate_smartObjectToType(v21, v23); /*0x1b3e0e*/
              GJSmartTemplate_offsetForType(v110, v24); /*0x1b3e19*/
              v25 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v21 + 200LL))(v21); /*0x1b3e24*/
              cocos2d::CCPoint::operator+(v25, v106, v110); /*0x1b3e36*/
              cocos2d::CCRect::CCRect((cocos2d::CCRect *)v119, v106[0] - 37.5, v106[1] - 37.5, 75.0, 75.0); /*0x1b3e5d*/
              v26 = *(_QWORD *)(v8 + 1512); /*0x1b3e63*/
              v27 = (float *)cocos2d::CCRect::CCRect((cocos2d::CCRect *)v134, (const struct cocos2d::CCRect *)v119); /*0x1b3e72*/
              v28 = LevelEditorLayer_objectsInRect(v26, v27, 1); /*0x1b3e81*/
              v29 = v28; /*0x1b3e86*/
              if ( v28 ) /*0x1b3e8c*/
              {
                if ( cocos2d::CCArray::count(v28) ) /*0x1b3e95*/
                {
                  for ( i = 0; i < cocos2d::CCArray::count(v29); ++i ) /*0x1b3ea8*/
                  {
                    v31 = cocos2d::CCArray::objectAtIndex(v29, i); /*0x1b3eb7*/
                    v32 = v31; /*0x1b3ebd*/
                    if ( *((_DWORD *)v31 + 314) == 5 && !cocos2d::CCArray::containsObject(v6, v31) ) /*0x1b3ecf*/
                    {
                      cocos2d::CCArray::addObject(v6, v32); /*0x1b3edf*/
                      cocos2d::CCDictionary::setObject(v19, v32, *((unsigned int *)v32 + 231)); /*0x1b3ef2*/
                      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v32 + 64LL))( /*0x1b3f05*/
                        v32,
                        *((unsigned __int8 *)v32 + 1360));
                      *((_BYTE *)v32 + 1360) = 1; /*0x1b3f08*/
                    }
                  }
                }
              }
            }
            ++v20; /*0x1b3f1e*/
          }
          while ( v20 < cocos2d::CCArray::count(v6) ); /*0x1b3f2d*/
          v17 = v109; /*0x1b3f33*/
        }
        v33 = 0; /*0x1b3f37*/
        v108 = 0; /*0x1b3f39*/
        if ( cocos2d::CCArray::count(v6) ) /*0x1b3f40*/
        {
          while ( 1 ) /*0x1b3f55*/
          {
            v34 = cocos2d::CCArray::objectAtIndex(v6, v33); /*0x1b3f55*/
            v35 = v34; /*0x1b3f5b*/
            v115 = v34; /*0x1b3f5e*/
            if ( *((_BYTE *)v34 + 1360) ) /*0x1b3f62*/
            {
              if ( !cocos2d::CCDictionary::objectForKey(v19, *((unsigned int *)v34 + 231)) ) /*0x1b4425*/
                cocos2d::CCArray::addObject(v17, v35); /*0x1b4436*/
            }
            else
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v135, (const struct cocos2d::CCPoint *)&unk_904D10); /*0x1b3f7a*/
              v37 = GJSmartTemplate_smartObjectToType(v35, v36); /*0x1b3f86*/
              GJSmartTemplate_offsetForType(v123, v37); /*0x1b3f91*/
              v38 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v35 + 200LL))(v35); /*0x1b3f9c*/
              cocos2d::CCPoint::operator+(v38, v106, v123); /*0x1b3fae*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v136, (const struct cocos2d::CCPoint *)v106); /*0x1b3fbd*/
              SmartNeighbor = (void **)EditorUI_getSmartNeighbor(v40, (_DWORD)v35, v39, 1, (__int64)v6); /*0x1b3fd9*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (const struct cocos2d::CCPoint *)v106); /*0x1b3fea*/
              v43 = EditorUI_getSmartNeighbor(v42, (_DWORD)v35, v41, 2, (__int64)v6); /*0x1b4006*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v126, (const struct cocos2d::CCPoint *)v106); /*0x1b4012*/
              v46 = EditorUI_getSmartNeighbor(v45, (_DWORD)v35, v44, 3, (__int64)v6); /*0x1b402e*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v127, (const struct cocos2d::CCPoint *)v106); /*0x1b403a*/
              v49 = EditorUI_getSmartNeighbor(v48, (_DWORD)v35, v47, 4, (__int64)v6); /*0x1b4056*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v128, (const struct cocos2d::CCPoint *)v106); /*0x1b4062*/
              v52 = EditorUI_getSmartNeighbor(v51, (_DWORD)v35, v50, 5, (__int64)v6); /*0x1b407e*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v129, (const struct cocos2d::CCPoint *)v106); /*0x1b408a*/
              v53 = (__int64)v117; /*0x1b4093*/
              v56 = EditorUI_getSmartNeighbor(v55, (_DWORD)v35, v54, 6, (__int64)v117); /*0x1b40aa*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v130, (const struct cocos2d::CCPoint *)v106); /*0x1b40b6*/
              v59 = EditorUI_getSmartNeighbor(v58, (_DWORD)v35, v57, 7, v53); /*0x1b40d2*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v131, (const struct cocos2d::CCPoint *)v106); /*0x1b40de*/
              v62 = EditorUI_getSmartNeighbor(v61, (_DWORD)v115, v60, 8, v53); /*0x1b40fb*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v132, (const struct cocos2d::CCPoint *)v106); /*0x1b4107*/
              v104 = v59; /*0x1b4115*/
              v63 = v115; /*0x1b4138*/
              GJSmartTemplate_keyFromNeighbors( /*0x1b4146*/
                (unsigned int)v148,
                v64,
                (_DWORD)v115,
                (_DWORD)SmartNeighbor,
                v43,
                v46,
                v49,
                v52,
                v56,
                v104,
                v62);
              v65 = sub_3E4F0(v138, v148); /*0x1b415a*/
              sub_3B44C0(v124, &v140, v65); /*0x1b416d*/
              if ( v140 ) /*0x1b417b*/
              {
                cocos2d::CCArray::addObject(v118, v63); /*0x1b4188*/
                *(_OWORD *)v111 = 0; /*0x1b4191*/
                v112 = 0; /*0x1b4197*/
                v113 = 0; /*0x1b419b*/
                v66 = Src; /*0x1b419f*/
                if ( v144 > 0xF ) /*0x1b41ae*/
                  v66 = (void **)Src[0]; /*0x1b41ae*/
                v67 = Size; /*0x1b41b6*/
                if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x1b41ca*/
                  sub_8D90(); /*0x1b47cd*/
                if ( Size > 0xF ) /*0x1b41d4*/
                {
                  v69 = Size | 0xF; /*0x1b41f0*/
                  if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x1b41f7*/
                  {
                    if ( v69 < 0x16 ) /*0x1b4207*/
                      v69 = 22; /*0x1b4207*/
                  }
                  else
                  {
                    v69 = 0x7FFFFFFFFFFFFFFFLL; /*0x1b41f9*/
                  }
                  v111[0] = (void *)sub_3C460(v69 + 1); /*0x1b4214*/
                  v112 = v67; /*0x1b4218*/
                  v113 = v69; /*0x1b421c*/
                  memcpy(v111[0], v66, v67 + 1); /*0x1b422a*/
                  v68 = v113; /*0x1b422f*/
                  v67 = v112; /*0x1b4233*/
                }
                else
                {
                  v112 = Size; /*0x1b41d6*/
                  v68 = 15; /*0x1b41da*/
                  v113 = 15; /*0x1b41df*/
                  *(_OWORD *)v111 = *(_OWORD *)v66; /*0x1b41e7*/
                }
                SmartNeighbor = v111; /*0x1b423b*/
                if ( (void **)((char *)v63 + 1368) != v111 ) /*0x1b424e*/
                {
                  v70 = v111; /*0x1b4250*/
                  if ( v68 > 0xF ) /*0x1b4258*/
                    v70 = (void **)v111[0]; /*0x1b4258*/
                  sub_3F5A0((char *)v63 + 1368, v70, v67); /*0x1b4260*/
                }
                sub_3C310(v111); /*0x1b426a*/
                v71 = sub_3E4F0(v139, v140 + 88); /*0x1b4281*/
                LOBYTE(v72) = 1; /*0x1b4286*/
                v8 = v116; /*0x1b428f*/
                v73 = (cocos2d::CCArray *)EditorUI_pasteObjects(v116, v71, 0, v72); /*0x1b4296*/
                v74 = v73; /*0x1b429b*/
                if ( v73 && cocos2d::CCArray::count(v73) ) /*0x1b42aa*/
                {
                  v75 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v63 + 200LL))(v63); /*0x1b42c5*/
                  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v110, v75); /*0x1b42ce*/
                  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v133, (const struct cocos2d::CCPoint *)v110); /*0x1b42dc*/
                  EditorUI_repositionObjectsToCenter(v8, v74, v76, 0); /*0x1b42ee*/
                  if ( v147 ) /*0x1b42fa*/
                    sub_1FD040(v8, v74); /*0x1b4302*/
                  if ( v146 ) /*0x1b430e*/
                    sub_1FCE50(v8, v74); /*0x1b4316*/
                  if ( v145 > 0 ) /*0x1b4323*/
                  {
                    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v134, (const struct cocos2d::CCPoint *)&dword_9046E8); /*0x1b4339*/
                    sub_1FD230(v8, (_DWORD)v74, v78, v77, 0); /*0x1b4350*/
                  }
                  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v119, (const struct cocos2d::CCPoint *)v110); /*0x1b435d*/
                  EditorUI_repositionObjectsToCenter(v8, v74, v79, 0); /*0x1b436f*/
                  BrowseSmartKeyLayer_getAllSelectedBlocks(v8, v74); /*0x1b437a*/
                  cocos2d::CCArray::addObjectsFromArray(v114, v74); /*0x1b4386*/
                  cocos2d::CCArray::addObject(v109, v63); /*0x1b4393*/
                }
              }
              else
              {
                v120 = 0; /*0x1b439e*/
                v121 = 0; /*0x1b43a2*/
                v122 = 15; /*0x1b43aa*/
                LOBYTE(v120) = 0; /*0x1b43b2*/
                SmartNeighbor = (void **)&v120; /*0x1b43ba*/
                if ( (__int128 *)((char *)v63 + 1368) != &v120 ) /*0x1b43cd*/
                  sub_3F5A0((char *)v63 + 1368, &v120, 0); /*0x1b43d6*/
                sub_3C310(&v120); /*0x1b43e0*/
                v8 = v116; /*0x1b43e5*/
              }
              sub_3C310(Src); /*0x1b43f0*/
              sub_3C310(v141); /*0x1b43fc*/
              sub_3C310(v148); /*0x1b4409*/
              v6 = v117; /*0x1b440e*/
              v19 = v125; /*0x1b4412*/
              v33 = v108; /*0x1b4416*/
            }
            v108 = ++v33; /*0x1b443e*/
            if ( v33 >= cocos2d::CCArray::count(v6) ) /*0x1b444d*/
              break; /*0x1b444d*/
            v17 = v109; /*0x1b444f*/
          }
        }
        if ( a4 ) /*0x1b445d*/
        {
          if ( v19 ) /*0x1b4462*/
          {
            v80 = *((_QWORD *)v19 + 7); /*0x1b4464*/
            if ( v80 ) /*0x1b446b*/
            {
              for ( j = *(_QWORD *)(v80 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x1b446d*/
              {
                v82 = *(_BYTE **)(v80 + 264); /*0x1b4480*/
                v82[1360] = (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v82 + 56LL))(v82) != 0; /*0x1b4495*/
                v80 = j; /*0x1b449b*/
                if ( !j ) /*0x1b44a1*/
                  break; /*0x1b44a1*/
              }
            }
          }
        }
        EditorUI_deselectAll(v8); /*0x1b44af*/
        v84 = 1000; /*0x1b44bb*/
        if ( a6 ) /*0x1b44ce*/
        {
          v85 = 0; /*0x1b44d3*/
          for ( k = v118; v85 < cocos2d::CCArray::count(k); ++v85 ) /*0x1b44dd*/
          {
            v87 = cocos2d::CCArray::objectAtIndex(k, v85); /*0x1b44f5*/
            *((_BYTE *)v87 + 1360) = 1; /*0x1b44fb*/
            SmartGameObject_updateSmartFrame(v87); /*0x1b4505*/
          }
        }
        else if ( !a5 ) /*0x1b4525*/
        {
          v88 = (cocos2d::CCObject **)operator new(0xA0u); /*0x1b4535*/
          v119[0] = v88; /*0x1b4538*/
          cocos2d::CCObject::CCObject((cocos2d::CCObject *)v88); /*0x1b453f*/
          *v88 = (cocos2d::CCObject *)&UndoObject::`vftable'; /*0x1b4546*/
          v88[7] = 0; /*0x1b454c*/
          *((_DWORD *)v88 + 16) = 0; /*0x1b4550*/
          v88[9] = 0; /*0x1b4554*/
          *((_WORD *)v88 + 40) = 0; /*0x1b4558*/
          sub_1A6040((char *)v88 + 84); /*0x1b4561*/
          v90 = v109; /*0x1b4567*/
          if ( v109 ) /*0x1b456e*/
          {
            v91 = (cocos2d::CCArray *)cocos2d::CCArray::create(v89); /*0x1b4570*/
            v88[9] = v91; /*0x1b4576*/
            cocos2d::CCArray::addObjectsFromArray(v91, v90); /*0x1b4580*/
            cocos2d::CCObject::retain(v88[9]); /*0x1b458a*/
          }
          *((_DWORD *)v88 + 16) = 4; /*0x1b4590*/
          cocos2d::CCObject::autorelease((cocos2d::CCObject *)v88); /*0x1b459a*/
          v92 = *(_QWORD *)(v8 + 1512); /*0x1b45a0*/
          cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v92 + 14984)); /*0x1b45ae*/
          v93 = 1000; /*0x1b45b4*/
          if ( !*(_BYTE *)(v92 + 14726) ) /*0x1b45b7*/
            v93 = 200; /*0x1b45c4*/
          if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v92 + 14976)) >= v93 ) /*0x1b45d6*/
            cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v92 + 14976), 0, 1); /*0x1b45e4*/
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v92 + 14976), (struct cocos2d::CCObject *)v88); /*0x1b45f4*/
          for ( m = 0; m < cocos2d::CCArray::count(v90); ++m ) /*0x1b4600*/
          {
            v95 = cocos2d::CCArray::objectAtIndex(v90, m); /*0x1b4616*/
            v96 = v95; /*0x1b461c*/
            if ( v95 ) /*0x1b4622*/
            {
              *((_BYTE *)v95 + 1140) = *((_BYTE *)v95 + 1141); /*0x1b462b*/
              EditorUI_deselectObject(v8, v95); /*0x1b4637*/
              v97 = *(_QWORD *)(v8 + 1512); /*0x1b463c*/
              LOBYTE(v98) = 1; /*0x1b464d*/
              (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v96 + 1160LL))(v96, v98); /*0x1b4652*/
              GJBaseGameLayer_removeObjectFromSection(v97, v96); /*0x1b465b*/
              sub_3F1780(v97, v96); /*0x1b4666*/
              *(_BYTE *)(v97 + 15730) = 1; /*0x1b466b*/
              sub_1FF670(v8); /*0x1b4675*/
              sub_1FFD20(v8); /*0x1b467d*/
              sub_200430(v8); /*0x1b4685*/
            }
          }
          v6 = v114; /*0x1b469f*/
        }
        LOBYTE(v83) = 1; /*0x1b46b1*/
        sub_1C47B0(v8, v6, v83); /*0x1b46b7*/
        v99 = (cocos2d::CCObject **)operator new(0xA0u); /*0x1b46c6*/
        v119[0] = v99; /*0x1b46c9*/
        cocos2d::CCObject::CCObject((cocos2d::CCObject *)v99); /*0x1b46d0*/
        *v99 = (cocos2d::CCObject *)&UndoObject::`vftable'; /*0x1b46de*/
        v99[7] = 0; /*0x1b46e1*/
        *((_DWORD *)v99 + 16) = 0; /*0x1b46e5*/
        v99[9] = 0; /*0x1b46e9*/
        *((_WORD *)v99 + 40) = 0; /*0x1b46ed*/
        sub_1A6040((char *)v99 + 84); /*0x1b46f7*/
        v101 = v114; /*0x1b46fd*/
        if ( v114 ) /*0x1b4704*/
        {
          v102 = (cocos2d::CCArray *)cocos2d::CCArray::create(v100); /*0x1b4706*/
          v99[9] = v102; /*0x1b470c*/
          cocos2d::CCArray::addObjectsFromArray(v102, v101); /*0x1b4716*/
          cocos2d::CCObject::retain(v99[9]); /*0x1b4720*/
        }
        *((_DWORD *)v99 + 16) = 3; /*0x1b4726*/
        cocos2d::CCObject::autorelease((cocos2d::CCObject *)v99); /*0x1b4730*/
        v103 = *(_QWORD *)(v8 + 1512); /*0x1b4736*/
        cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v103 + 14984)); /*0x1b4744*/
        if ( !*(_BYTE *)(v103 + 14726) ) /*0x1b474a*/
          v84 = 200; /*0x1b4751*/
        if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v103 + 14976)) >= v84 ) /*0x1b4765*/
          cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v103 + 14976), 0, 1); /*0x1b4773*/
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v103 + 14976), (struct cocos2d::CCObject *)v99); /*0x1b4783*/
        EditorUI_updateButtons(v8); /*0x1b478c*/
        sub_1B0FC0(v8); /*0x1b4794*/
      }
    }
  }
}

// [33/110] Address: 0x1b4cd0
// Method: EditorUI::createSmartObjectsFromType
void __fastcall EditorUI_createSmartObjectsFromType(
        __int64 a1,
        unsigned int a2,
        cocos2d::CCArray *a3,
        char a4,
        char a5)
{
  __int64 v5; // r14
  __int64 v8; // rcx
  unsigned int v9; // r15d
  cocos2d::CCArray *v10; // r12
  int v11; // r13d
  unsigned int i; // edi
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct cocos2d::CCObject *v19; // r12
  int j; // ebx
  struct cocos2d::CCObject *v21; // rdi
  float v22; // xmm2_4
  cocos2d::CCPoint *v23; // rcx
  float v24; // xmm1_4
  __int64 v25; // rax
  __int64 v26; // rax
  cocos2d::CCArray *v27; // rax
  int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  cocos2d::CCArray *v32; // rsi
  unsigned int v33; // ebx
  __int16 v34; // r13
  struct cocos2d::CCObject *v35; // rax
  struct cocos2d::CCArray *RockEdges; // rax
  struct cocos2d::CCArray *RockBases; // rax
  struct cocos2d::CCArray *Outlines; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // ebx
  struct cocos2d::CCArray *k; // rdi
  struct cocos2d::CCObject *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  struct cocos2d::CCObject *v46; // rax
  struct cocos2d::CCObject *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rbx
  cocos2d::CCArray *v50; // [rsp+30h] [rbp-A8h]
  _BYTE v51[8]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+40h] [rbp-98h]
  char v53; // [rsp+48h] [rbp-90h] BYREF
  char v54; // [rsp+50h] [rbp-88h] BYREF
  char v55; // [rsp+58h] [rbp-80h] BYREF
  char v56; // [rsp+60h] [rbp-78h] BYREF
  char v59; // [rsp+F0h] [rbp+18h] BYREF
  char v60; // [rsp+F8h] [rbp+20h]

  if ( a3 ) /*0x1b4cd3*/
  {
    v60 = a4; /*0x1b4cd9*/
    v5 = a1; /*0x1b4cf2*/
    if ( cocos2d::CCArray::count(a3) ) /*0x1b4cfd*/
    {
      EditorUI_deselectAll(v5); /*0x1b4d36*/
      v9 = 0; /*0x1b4d41*/
      v50 = a3; /*0x1b4d44*/
      v52 = cocos2d::CCArray::create(v8); /*0x1b4d4c*/
      v10 = (cocos2d::CCArray *)v52; /*0x1b4d51*/
      v11 = 0; /*0x1b4d54*/
      for ( i = 0; i < cocos2d::CCArray::count(a3); ++i ) /*0x1b4d5a*/
      {
        v13 = v11; /*0x1b4d75*/
        v11 = *((__int16 *)cocos2d::CCArray::objectAtIndex(a3, i) + 605); /*0x1b4d81*/
        if ( v11 <= v13 ) /*0x1b4d8c*/
          v11 = v13; /*0x1b4d8c*/
      }
      ObjectToolbox_sharedState(); /*0x1b4d9c*/
      if ( ObjectToolbox_gridNodeSizeForKey(v14, a2) == 15.0 ) /*0x1b4db5*/
      {
        v50 = (cocos2d::CCArray *)cocos2d::CCArray::create(v15); /*0x1b4dc4*/
        v16 = 0; /*0x1b4dc9*/
        if ( cocos2d::CCArray::count(a3) ) /*0x1b4dcc*/
        {
          while ( 1 ) /*0x1b4e0b*/
          {
            v19 = cocos2d::CCArray::objectAtIndex(a3, v16); /*0x1b4e0b*/
            for ( j = 0; j < 4; ++j ) /*0x1b4e0e*/
            {
              v21 = (struct cocos2d::CCObject *)cocos2d::CCNode::create(v18, v17); /*0x1b4e1e*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v59, (const struct cocos2d::CCPoint *)&dword_9046E8); /*0x1b4e29*/
              switch ( j ) /*0x1b4e33*/
              {
                case 0: /*0x1b4e33*/
                  v22 = 7.5; /*0x1b4e68*/
                  v23 = (cocos2d::CCPoint *)&v56; /*0x1b4e6b*/
                  goto LABEL_18; /*0x1b4e6b*/
                case 1: /*0x1b4e33*/
                  v22 = 7.5; /*0x1b4e5b*/
                  v23 = (cocos2d::CCPoint *)&v55; /*0x1b4e5e*/
                  v24 = 7.5; /*0x1b4e63*/
                  break;
                case 2: /*0x1b4e33*/
                  v22 = -7.5; /*0x1b4e51*/
                  v23 = (cocos2d::CCPoint *)&v54; /*0x1b4e54*/
LABEL_18:
                  v24 = -7.5; /*0x1b4e70*/
                  break; /*0x1b4e70*/
                case 3: /*0x1b4e33*/
                  v22 = -7.5; /*0x1b4e44*/
                  v23 = (cocos2d::CCPoint *)&v53; /*0x1b4e47*/
                  v24 = 7.5; /*0x1b4e4c*/
                  break;
                default:
                  goto LABEL_20; /*0x1b4e42*/
              }
              cocos2d::CCPoint::CCPoint(v23, v24, v22); /*0x1b4e73*/
              cocos2d::CCPoint::operator=(&v59, v25); /*0x1b4e84*/
LABEL_20:
              v26 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v19 + 200LL))(v19); /*0x1b4e8a*/
              cocos2d::CCPoint::operator+(&v59, v51, v26); /*0x1b4ea7*/
              (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v21 + 184LL))(v21, v51); /*0x1b4eb8*/
              cocos2d::CCArray::addObject(v50, v21); /*0x1b4ec4*/
            }
            if ( ++v16 >= cocos2d::CCArray::count(a3) ) /*0x1b4ee2*/
            {
              v5 = a1; /*0x1b4ef5*/
              v10 = (cocos2d::CCArray *)v52; /*0x1b4efd*/
              break; /*0x1b4efd*/
            }
          }
        }
      }
      v27 = (cocos2d::CCArray *)cocos2d::CCArray::create(v15); /*0x1b4f02*/
      v28 = (int)v27; /*0x1b4f10*/
      cocos2d::CCArray::addObjectsFromArray(v27, v50); /*0x1b4f13*/
      v30 = cocos2d::CCArray::create(v29); /*0x1b4f1f*/
      v32 = (cocos2d::CCArray *)cocos2d::CCArray::create(v31); /*0x1b4f41*/
      EditorUI_processSmartObjectsFromType(v5, a2, (_DWORD)v50, v28, v30, (__int64)v32); /*0x1b4f49*/
      v33 = 0; /*0x1b4f51*/
      if ( cocos2d::CCArray::count(v32) ) /*0x1b4f54*/
      {
        v34 = v11 + 1; /*0x1b4f5e*/
        do /*0x1b4f82*/
        {
          v35 = cocos2d::CCArray::objectAtIndex(v32, v33++); /*0x1b4f67*/
          *((_WORD *)v35 + 606) = v34; /*0x1b4f72*/
        }
        while ( v33 < cocos2d::CCArray::count(v32) ); /*0x1b4f82*/
      }
      cocos2d::CCArray::addObjectsFromArray(v10, v32); /*0x1b4f8a*/
      if ( cocos2d::CCArray::count(v10) ) /*0x1b4f93*/
      {
        RockEdges = (struct cocos2d::CCArray *)EditorUI_createRockEdges(v5, v10); /*0x1b4faf*/
        if ( RockEdges ) /*0x1b4fb7*/
          cocos2d::CCArray::addObjectsFromArray(v10, RockEdges); /*0x1b4fbf*/
        RockBases = (struct cocos2d::CCArray *)EditorUI_createRockBases(v5, v10); /*0x1b4fcb*/
        if ( RockBases ) /*0x1b4fd3*/
          cocos2d::CCArray::addObjectsFromArray(v10, RockBases); /*0x1b4fdb*/
        Outlines = (struct cocos2d::CCArray *)EditorUI_createOutlines(v5, v10); /*0x1b4fe7*/
        if ( Outlines ) /*0x1b4fef*/
          cocos2d::CCArray::addObjectsFromArray(v10, Outlines); /*0x1b4ff7*/
        if ( v60 && a2 - 2703 <= 1 && v10 && cocos2d::CCArray::count(v10) ) /*0x1b5026*/
        {
          cocos2d::CCArray::create(v39); /*0x1b5030*/
          v41 = 0; /*0x1b503f*/
          for ( k = (struct cocos2d::CCArray *)cocos2d::CCArray::create(v40); v41 < cocos2d::CCArray::count(v10); ++v41 ) /*0x1b5045*/
          {
            v43 = cocos2d::CCArray::objectAtIndex(v10, v41); /*0x1b5055*/
            v44 = *((unsigned int *)v43 + 259); /*0x1b505b*/
            if ( (int)v44 >= 2808 && (int)v44 <= 2837 ) /*0x1b506f*/
              EditorUI_createExtrasForObject(v5, v44, v43, k); /*0x1b507a*/
          }
          if ( k ) /*0x1b5091*/
            cocos2d::CCArray::addObjectsFromArray(v10, k); /*0x1b5099*/
        }
        EditorUI_deselectAll(v5); /*0x1b50a2*/
        if ( a5 ) /*0x1b50af*/
        {
          v10 = a3; /*0x1b5161*/
        }
        else if ( cocos2d::CCArray::count(a3) ) /*0x1b50b8*/
        {
          do /*0x1b5159*/
          {
            v46 = cocos2d::CCArray::objectAtIndex(a3, v9); /*0x1b50d6*/
            v47 = v46; /*0x1b50dc*/
            if ( v46 ) /*0x1b50e2*/
            {
              *((_BYTE *)v46 + 1140) = *((_BYTE *)v46 + 1141); /*0x1b50ee*/
              EditorUI_deselectObject(v5, v46); /*0x1b50f7*/
              LOBYTE(v48) = 1; /*0x1b50ff*/
              v49 = *(_QWORD *)(v5 + 1512); /*0x1b5101*/
              (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v47 + 1160LL))(v47, v48); /*0x1b5112*/
              GJBaseGameLayer_removeObjectFromSection(v49, v47); /*0x1b511b*/
              sub_3F1780(v49, v47); /*0x1b5126*/
              *(_BYTE *)(v49 + 15730) = 1; /*0x1b512e*/
              sub_1FF670(v5); /*0x1b5135*/
              sub_1FFD20(v5); /*0x1b513d*/
              sub_200430(v5); /*0x1b5145*/
            }
            ++v9; /*0x1b514d*/
          }
          while ( v9 < cocos2d::CCArray::count(a3) ); /*0x1b5159*/
        }
        LOBYTE(v45) = 1; /*0x1b5167*/
        sub_1C47B0(v5, v10, v45); /*0x1b516d*/
        EditorUI_updateButtons(v5); /*0x1b5175*/
        sub_1B0FC0(v5); /*0x1b517d*/
      }
    }
  }
}

// [34/110] Address: 0x1b51b0
// Method: EditorUI::processSmartObjectsFromType
unsigned int __fastcall EditorUI_processSmartObjectsFromType(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        cocos2d::CCArray *a4,
        cocos2d::CCArray *a5,
        cocos2d::CCArray *a6)
{
  bool v10; // bl
  struct cocos2d::CCObject *v11; // r13
  int i; // ebx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  struct cocos2d::CCObject *Neighbor; // rsi
  unsigned int v17; // eax
  unsigned int SmartObjectKey; // ebp
  const struct cocos2d::CCPoint *v19; // rax
  int v20; // eax
  __int64 v21; // rax
  struct cocos2d::CCObject *v22; // rax
  unsigned int result; // eax
  struct cocos2d::CCObject *v24; // rax
  const struct cocos2d::CCPoint *v25; // rax
  unsigned int RandomStartKey; // esi
  int v27; // eax
  __int64 v28; // rax
  struct cocos2d::CCObject *v29; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v31[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v32[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v33[8]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v34[16]; // [rsp+50h] [rbp-48h] BYREF
  bool v35; // [rsp+A8h] [rbp+10h]

  v10 = a2 == 2703 || a2 == 2838 || a2 == 869; /*0x1b51e9*/
  v35 = v10; /*0x1b51f6*/
  if ( cocos2d::CCArray::count(a5) ) /*0x1b5205*/
  {
    v11 = cocos2d::CCArray::objectAtIndex(a5, 0); /*0x1b5228*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v11 + 1208LL))(v11, v31); /*0x1b5238*/
    for ( i = 1; i <= 8; ++i ) /*0x1b523b*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, (const struct cocos2d::CCPoint *)v31); /*0x1b524a*/
      Neighbor = (struct cocos2d::CCObject *)EditorUI_getNeighbor(v14, a2, v13, i, (__int64)a4); /*0x1b5262*/
      if ( Neighbor ) /*0x1b5268*/
      {
        v17 = EditorUI_convertToBaseKey(v15, *((unsigned int *)v11 + 259)); /*0x1b5275*/
        SmartObjectKey = EditorUI_getSmartObjectKey(v17, (unsigned int)i); /*0x1b5286*/
        v19 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)Neighbor + 200LL))(Neighbor); /*0x1b5292*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, v19); /*0x1b529c*/
        if ( v35 ) /*0x1b52aa*/
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v33, (const struct cocos2d::CCPoint *)v30); /*0x1b52b6*/
          SmartObjectKey = EditorUI_convertKeyBasedOnNeighbors(a1, SmartObjectKey, a2, v20, a3); /*0x1b52d9*/
        }
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v34, (const struct cocos2d::CCPoint *)v30); /*0x1b52e5*/
        v22 = (struct cocos2d::CCObject *)sub_1B0700(a1, SmartObjectKey, v21); /*0x1b52f3*/
        cocos2d::CCArray::addObject(a5, v22); /*0x1b52fe*/
        cocos2d::CCArray::removeObject(a4, Neighbor, 1); /*0x1b530d*/
      }
    }
    cocos2d::CCArray::addObject(a6, v11); /*0x1b532c*/
    cocos2d::CCArray::removeObject(a5, v11, 1); /*0x1b533b*/
    return EditorUI_processSmartObjectsFromType(a1, a2, a3, (_DWORD)a4, (__int64)a5, (__int64)a6); /*0x1b535b*/
  }
  else
  {
    result = cocos2d::CCArray::count(a4); /*0x1b536d*/
    if ( result ) /*0x1b5375*/
    {
      v24 = cocos2d::CCArray::objectAtIndex(a4, 0); /*0x1b5380*/
      v25 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v24 + 200LL))(v24); /*0x1b5393*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, v25); /*0x1b539d*/
      RandomStartKey = EditorUI_getRandomStartKey(a2); /*0x1b53aa*/
      if ( v10 ) /*0x1b53ae*/
      {
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v34, (const struct cocos2d::CCPoint *)v30); /*0x1b53ba*/
        RandomStartKey = EditorUI_convertKeyBasedOnNeighbors(a1, RandomStartKey, a2, v27, a3); /*0x1b53d5*/
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v34, (const struct cocos2d::CCPoint *)v30); /*0x1b53e1*/
      v29 = (struct cocos2d::CCObject *)sub_1B0700(a1, RandomStartKey, v28); /*0x1b53ef*/
      cocos2d::CCArray::addObject(a5, v29); /*0x1b53fa*/
      cocos2d::CCArray::removeObjectAtIndex(a4, 0, 1); /*0x1b5408*/
      return EditorUI_processSmartObjectsFromType(a1, a2, a3, (_DWORD)a4, (__int64)a5, (__int64)a6); /*0x1b542b*/
    }
  }
  return result; /*0x1b5430*/
}

// [35/110] Address: 0x1b5450
// Method: EditorUI::getSmartNeighbor
struct cocos2d::CCObject *__fastcall EditorUI_getSmartNeighbor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        cocos2d::CCArray *a5)
{
  __int64 v5; // r14
  int v7; // ebp
  __int64 v8; // rax
  cocos2d::CCArray *v9; // rsi
  unsigned int v10; // ebx
  struct cocos2d::CCObject *v11; // rax
  struct cocos2d::CCObject *v12; // rdi
  const struct cocos2d::CCRect *v13; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v16[40]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  char v18; // [rsp+78h] [rbp+10h] BYREF

  v17 = a1; /*0x1b5455*/
  v5 = 0; /*0x1b5462*/
  if ( a2 ) /*0x1b546b*/
    v7 = *(_DWORD *)(a2 + 924); /*0x1b546d*/
  else
    v7 = 0; /*0x1b5475*/
  v8 = GJSmartTemplate_offsetForDir(&v18, a4, 0); /*0x1b548b*/
  cocos2d::CCPoint::operator+(a3, &v17, v8); /*0x1b549b*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v16, *(float *)&v17 - 1.0, *((float *)&v17 + 1) - 1.0, 2.0, 2.0); /*0x1b54d0*/
  v9 = a5; /*0x1b54d6*/
  v10 = 0; /*0x1b54de*/
  if ( !cocos2d::CCArray::count(a5) ) /*0x1b54e4*/
    return 0; /*0x1b5546*/
  while ( 1 ) /*0x1b54f5*/
  {
    v11 = cocos2d::CCArray::objectAtIndex(v9, v10); /*0x1b54f5*/
    v12 = v11; /*0x1b54fb*/
    if ( *((_DWORD *)v11 + 231) != v7 ) /*0x1b5504*/
    {
      v13 = (const struct cocos2d::CCRect *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 /*0x1b5513*/
                                                                                                  + 1184LL))(v11);
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)v15, v13); /*0x1b551d*/
      if ( cocos2d::CCRect::intersectsRect((cocos2d::CCRect *)v16, (const struct cocos2d::CCRect *)v15) ) /*0x1b552d*/
        break; /*0x1b552d*/
    }
    if ( ++v10 >= cocos2d::CCArray::count(v9) ) /*0x1b5544*/
      return 0; /*0x1b5544*/
  }
  if ( *((_DWORD *)v12 + 314) == 5 ) /*0x1b5568*/
    return v12; /*0x1b5568*/
  return (struct cocos2d::CCObject *)v5; /*0x1b5548*/
}

// [36/110] Address: 0x1b5580
// Method: EditorUI::getNeighbor
struct cocos2d::CCObject *__fastcall EditorUI_getNeighbor(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        cocos2d::CCArray *a5)
{
  __int64 v6; // rax
  cocos2d::CCArray *v7; // rbp
  unsigned int v8; // edi
  int v9; // r15d
  int v10; // r14d
  struct cocos2d::CCObject *v11; // rsi
  int v12; // ebx
  int v13; // ecx
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a1; /*0x1b558f*/
  v6 = GJSmartTemplate_offsetForDir(v15, a4, a2); /*0x1b55ab*/
  cocos2d::CCPoint::operator+(a3, &v16, v6); /*0x1b55bb*/
  v7 = a5; /*0x1b55c1*/
  v8 = 0; /*0x1b55c6*/
  v9 = (int)*(float *)&v16; /*0x1b55c8*/
  v10 = (int)*((float *)&v16 + 1); /*0x1b55d2*/
  if ( !cocos2d::CCArray::count(a5) ) /*0x1b55d9*/
    return 0; /*0x1b5631*/
  while ( 1 ) /*0x1b55ee*/
  {
    v11 = cocos2d::CCArray::objectAtIndex(v7, v8); /*0x1b55ee*/
    v12 = (int)*(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 200LL))(v11); /*0x1b5603*/
    v13 = (int)*(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 200LL))(v11) + 4); /*0x1b5613*/
    if ( v9 == v12 && v10 == v13 ) /*0x1b5620*/
      break; /*0x1b5620*/
    if ( ++v8 >= cocos2d::CCArray::count(v7) ) /*0x1b562f*/
      return 0; /*0x1b562f*/
  }
  return v11; /*0x1b5633*/
}

// [37/110] Address: 0x1b5660
// Method: EditorUI::dynamicGroupUpdate
// Hidden C++ exception states: #wind=12
unsigned int __fastcall EditorUI_dynamicGroupUpdate(__int64 a1, char a2)
{
  char v2; // r14
  __int64 v3; // rdi
  unsigned int result; // eax
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // r13
  struct cocos2d::CCObject *v7; // rdx
  unsigned int v8; // esi
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  unsigned int v11; // r12d
  struct cocos2d::CCObject *v12; // r14
  int v13; // r15d
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  _QWORD *v20; // rax
  void *v21; // rcx
  _QWORD **v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v24; // rbx
  int *v25; // rdi
  unsigned int v26; // r15d
  struct cocos2d::CCObject *v27; // rax
  struct cocos2d::CCObject *v28; // r14
  int v29; // eax
  int v30; // eax
  char *v31; // r8
  char *v32; // rdx
  __int64 v33; // rbx
  __int64 i; // r14
  __int64 v35; // rbx
  __int64 v36; // r14
  _QWORD *v37; // rax
  cocos2d::CCArray *v38; // r12
  cocos2d::CCArray *v39; // rbx
  unsigned int v40; // ecx
  __int64 v41; // r8
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // r15d
  unsigned int v45; // r14d
  struct cocos2d::CCObject *v46; // rdi
  __int64 v47; // rax
  struct cocos2d::CCObject *v48; // rax
  cocos2d::CCArray *v49; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v52[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  int v57; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v58[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v64[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  _BYTE v69[16]; // [rsp+100h] [rbp+0h] BYREF
  int v70; // [rsp+110h] [rbp+10h] BYREF
  void *Block; // [rsp+118h] [rbp+18h]
  __int64 v72; // [rsp+120h] [rbp+20h]
  __int128 v73; // [rsp+128h] [rbp+28h] BYREF
  __int64 v74; // [rsp+138h] [rbp+38h]
  __int64 v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  _BYTE v77[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v78[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v79[16]; // [rsp+170h] [rbp+70h] BYREF
  char v80[16]; // [rsp+180h] [rbp+80h] BYREF
  char v81[16]; // [rsp+190h] [rbp+90h] BYREF
  char v82[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v83[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v84[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v85[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v86; // [rsp+1E0h] [rbp+E0h] BYREF
  char v87[80]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v90; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v91; // [rsp+268h] [rbp+168h] BYREF

  v2 = a2; /*0x1b5684*/
  v3 = a1; /*0x1b5688*/
  if ( !*(_QWORD *)(a1 + 1568) ) /*0x1b568b*/
  {
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1b569c*/
    if ( !result ) /*0x1b56a4*/
      return result; /*0x1b56a4*/
  }
  sub_3DB60(*(_QWORD *)(v3 + 1512) + 15664LL); /*0x1b56b8*/
  v6 = (cocos2d::CCArray *)cocos2d::CCArray::create(v5); /*0x1b56c3*/
  v49 = v6; /*0x1b56c6*/
  v7 = *(struct cocos2d::CCObject **)(v3 + 1568); /*0x1b56cb*/
  if ( v7 ) /*0x1b56d8*/
    cocos2d::CCArray::addObject(v6, v7); /*0x1b56da*/
  else
    cocos2d::CCArray::addObjectsFromArray(v6, *(struct cocos2d::CCArray **)(v3 + 944)); /*0x1b56e9*/
  v8 = 0; /*0x1b56f6*/
  v64[1] = 0; /*0x1b56fc*/
  v9 = operator new(0x18u); /*0x1b5705*/
  *v9 = v9; /*0x1b570a*/
  v9[1] = v9; /*0x1b570d*/
  v64[0] = v9; /*0x1b5711*/
  v65 = 0; /*0x1b5715*/
  v66 = 0; /*0x1b571c*/
  v67 = 7; /*0x1b5721*/
  v68 = 8; /*0x1b5729*/
  v63 = 1065353216; /*0x1b5731*/
  sub_3E200(&v65, 16, v9); /*0x1b5744*/
  v52[1] = 0; /*0x1b5753*/
  v10 = operator new(0x18u); /*0x1b575d*/
  *v10 = v10; /*0x1b5762*/
  v10[1] = v10; /*0x1b5765*/
  v52[0] = v10; /*0x1b5769*/
  v53 = 0; /*0x1b576e*/
  v54 = 0; /*0x1b5776*/
  v55 = 7; /*0x1b577c*/
  v56 = 8; /*0x1b5785*/
  v51 = 1065353216; /*0x1b578e*/
  sub_3E200(&v53, 16, v10); /*0x1b57a3*/
  v11 = 0; /*0x1b57a9*/
  v90 = 0; /*0x1b57ac*/
  if ( !cocos2d::CCArray::count(v6) ) /*0x1b57bd*/
    goto LABEL_38; /*0x1b57bd*/
  while ( 2 ) /*0x1b57c3*/
  {
    v12 = cocos2d::CCArray::objectAtIndex(v6, v11); /*0x1b57c3*/
    v13 = 0; /*0x1b57d2*/
    if ( *((__int16 *)v12 + 588) <= 0 ) /*0x1b57dc*/
      goto LABEL_23; /*0x1b57dc*/
    v14 = 0; /*0x1b57e2*/
    v15 = 0; /*0x1b57e5*/
    do /*0x1b58ba*/
    {
      if ( v15 <= 9 && (v16 = *((_QWORD *)v12 + 146)) != 0 ) /*0x1b5810*/
        v17 = *(__int16 *)(v14 + v16); /*0x1b5812*/
      else
        v17 = 0; /*0x1b5818*/
      v91 = v17; /*0x1b581a*/
      v18 = *(_QWORD *)(v53 /*0x1b5863*/
                      + 16
                      * (v55
                       & (0x100000001B3LL
                        * (((unsigned __int64)v17 >> 24)
                         ^ (0x100000001B3LL
                          * (BYTE2(v17)
                           ^ (0x100000001B3LL
                            * ((0x100000001B3LL * ((unsigned __int8)v17 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v17))))))))
                      + 8);
      if ( v18 != v52[0] ) /*0x1b586d*/
      {
        if ( v17 == *(_DWORD *)(v18 + 16) ) /*0x1b5876*/
          goto LABEL_19; /*0x1b5876*/
        while ( v18 != *(_QWORD *)(v53 /*0x1b587b*/
                                 + 16
                                 * (v55
                                  & (0x100000001B3LL
                                   * (((unsigned __int64)v17 >> 24)
                                    ^ (0x100000001B3LL
                                     * (BYTE2(v17)
                                      ^ (0x100000001B3LL
                                       * ((0x100000001B3LL * ((unsigned __int8)v17 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v17))))))))) )
        {
          v18 = *(_QWORD *)(v18 + 8); /*0x1b587d*/
          if ( v17 == *(_DWORD *)(v18 + 16) ) /*0x1b5884*/
            goto LABEL_19; /*0x1b5884*/
        }
      }
      v18 = 0; /*0x1b5888*/
LABEL_19:
      if ( !v18 ) /*0x1b588e*/
        sub_67020(&v51, v69, &v91); /*0x1b58a0*/
      ++v13; /*0x1b58a5*/
      ++v15; /*0x1b58a8*/
      v14 += 2; /*0x1b58ab*/
    }
    while ( v13 < *((__int16 *)v12 + 588) ); /*0x1b58ba*/
    v6 = v49; /*0x1b58c0*/
    v11 = v90; /*0x1b58c5*/
    v3 = a1; /*0x1b58cc*/
LABEL_23:
    v19 = *((_DWORD *)v12 + 259); /*0x1b58d3*/
    if ( v19 == 1816 ) /*0x1b58df*/
    {
      if ( *((int *)v12 + 424) > 0 ) /*0x1b58ea*/
      {
        v90 = *((_DWORD *)v12 + 424); /*0x1b58f0*/
        sub_67020(&v51, v77, &v90); /*0x1b5906*/
      }
    }
    else if ( v19 == 2903 ) /*0x1b5915*/
    {
      v72 = 0; /*0x1b591b*/
      v20 = operator new(0x18u); /*0x1b5924*/
      *v20 = v20; /*0x1b5929*/
      v20[1] = v20; /*0x1b592c*/
      Block = v20; /*0x1b5930*/
      v73 = 0; /*0x1b5937*/
      v74 = 0; /*0x1b593c*/
      v75 = 7; /*0x1b5940*/
      v76 = 8; /*0x1b5948*/
      v70 = 1065353216; /*0x1b5950*/
      sub_3E200(&v73, 16, v20); /*0x1b5963*/
      *((_DWORD *)v12 + 466) = sub_3F5B80(*(_QWORD *)(v3 + 1512), &v70); /*0x1b5979*/
      v21 = (void *)v73; /*0x1b5980*/
      if ( (_QWORD)v73 ) /*0x1b5987*/
      {
        if ( ((v74 - (_QWORD)v73) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x1b599e*/
        {
          v21 = *(void **)(v73 - 8); /*0x1b59a4*/
          if ( (unsigned __int64)(v73 - (_QWORD)v21 - 8) > 0x1F ) /*0x1b59b3*/
            invoke_watson(0, 0, 0, 0, 0); /*0x1b5a25*/
        }
        j_j_free(v21); /*0x1b59b5*/
      }
      v22 = (_QWORD **)Block; /*0x1b59ba*/
      **((_QWORD **)Block + 1) = 0; /*0x1b59c2*/
      v23 = *v22; /*0x1b59c5*/
      if ( *v22 ) /*0x1b59c5*/
      {
        do /*0x1b59e3*/
        {
          v24 = (_QWORD *)*v23; /*0x1b59d0*/
          j_j_free(v23); /*0x1b59d8*/
          v23 = v24; /*0x1b59dd*/
        }
        while ( v24 ); /*0x1b59e3*/
      }
      j_j_free(v22); /*0x1b59ed*/
    }
    v90 = ++v11; /*0x1b59f5*/
    if ( v11 < cocos2d::CCArray::count(v6) ) /*0x1b5a08*/
    {
      v3 = a1; /*0x1b5a0a*/
      continue; /*0x1b5a11*/
    }
    break;
  }
  v2 = a2; /*0x1b5a2c*/
LABEL_38:
  v25 = &v51; /*0x1b5a34*/
  if ( !v2 ) /*0x1b5a40*/
    v25 = &v63; /*0x1b5a40*/
  v26 = 0; /*0x1b5a44*/
  if ( cocos2d::CCArray::count(v6) ) /*0x1b5a4a*/
  {
    while ( 2 ) /*0x1b5a60*/
    {
      v27 = cocos2d::CCArray::objectAtIndex(v6, v26); /*0x1b5a60*/
      v28 = v27; /*0x1b5a6c*/
      if ( *((_DWORD *)v27 + 314) == 1 ) /*0x1b5a76*/
      {
        v29 = *((_DWORD *)v27 + 370); /*0x1b5a7c*/
        v90 = v29; /*0x1b5a82*/
        v91 = *((_DWORD *)v28 + 371); /*0x1b5a8f*/
        v50 = *((_DWORD *)v28 + 424); /*0x1b5a9c*/
        LODWORD(v49) = *((_DWORD *)v28 + 421); /*0x1b5aa7*/
        if ( *((_DWORD *)v28 + 259) == 1006 && !*((_DWORD *)v28 + 406) ) /*0x1b5ab8*/
        {
          if ( v29 > 999 ) /*0x1b5ac7*/
            v29 = 0; /*0x1b5ac7*/
          v90 = v29; /*0x1b5aca*/
        }
        sub_67020(v25, v77, &v90); /*0x1b5ade*/
        sub_67020(v25, v80, &v91); /*0x1b5af4*/
        sub_67020(v25, v81, &v50); /*0x1b5b08*/
        sub_67020(v25, v82, &v49); /*0x1b5b1c*/
        v30 = *((_DWORD *)v28 + 259); /*0x1b5b21*/
        switch ( v30 ) /*0x1b5b2d*/
        {
          case 901: /*0x1b5b2d*/
            v31 = (char *)v28 + 1544; /*0x1b5c4b*/
            v32 = v79; /*0x1b5c52*/
LABEL_62:
            sub_67020(v25, v32, v31); /*0x1b5c56*/
            break;
          case 1268: /*0x1b5b2d*/
            v35 = *((_QWORD *)v28 + 232); /*0x1b5be0*/
            v36 = *((_QWORD *)v28 + 233); /*0x1b5be7*/
            if ( v35 != v36 ) /*0x1b5bf1*/
            {
              if ( a2 ) /*0x1b5bf6*/
              {
                do /*0x1b5c26*/
                {
                  sub_67020(v25, v69, v35 + 8); /*0x1b5c0b*/
                  sub_67020(v25, v78, v35); /*0x1b5c1a*/
                  v35 += 16; /*0x1b5c1f*/
                }
                while ( v35 != v36 ); /*0x1b5c26*/
              }
              else
              {
                do /*0x1b5c47*/
                {
                  sub_67020(v25, v69, v35 + 8); /*0x1b5c3b*/
                  v35 += 16; /*0x1b5c40*/
                }
                while ( v35 != v36 ); /*0x1b5c47*/
              }
            }
            break;
          case 2068: /*0x1b5b2d*/
            v33 = *((_QWORD *)v28 + 232); /*0x1b5ba5*/
            for ( i = *((_QWORD *)v28 + 233); v33 != i; v33 += 16 ) /*0x1b5bb6*/
              sub_67020(v25, v87, v33); /*0x1b5bcd*/
            break;
          case 2903: /*0x1b5b2d*/
            sub_67020(v25, v83, (char *)v28 + 1868); /*0x1b5b61*/
            sub_67020(v25, v84, (char *)v28 + 1872); /*0x1b5b77*/
            sub_67020(v25, v85, (char *)v28 + 1876); /*0x1b5b8d*/
            v31 = (char *)v28 + 1880; /*0x1b5b92*/
            v32 = &v86; /*0x1b5b99*/
            goto LABEL_62; /*0x1b5ba0*/
        }
      }
      if ( ++v26 >= cocos2d::CCArray::count(v6) ) /*0x1b5c6d*/
      {
        v2 = a2; /*0x1b5c73*/
        break; /*0x1b5c73*/
      }
      continue; /*0x1b5c6d*/
    }
  }
  v90 = 0; /*0x1b5c7b*/
  sub_658F0(v25, &v90); /*0x1b5c8b*/
  v57 = 0; /*0x1b5c90*/
  v58[0] = 0; /*0x1b5c97*/
  v58[1] = 0; /*0x1b5c9b*/
  v37 = operator new(0x18u); /*0x1b5ca4*/
  *v37 = v37; /*0x1b5ca9*/
  v37[1] = v37; /*0x1b5cac*/
  v58[0] = v37; /*0x1b5cb0*/
  v59 = 0; /*0x1b5cb4*/
  v60 = 0; /*0x1b5cbb*/
  v61 = 7; /*0x1b5cc0*/
  v62 = 8; /*0x1b5cc8*/
  v57 = 1065353216; /*0x1b5cd0*/
  sub_3E200(&v59, 16, v37); /*0x1b5ce3*/
  v38 = (cocos2d::CCArray *)*((_QWORD *)v25 + 1); /*0x1b5ce9*/
  v49 = v38; /*0x1b5ced*/
  v39 = *(cocos2d::CCArray **)v38; /*0x1b5cf2*/
  if ( *(cocos2d::CCArray **)v38 != v38 ) /*0x1b5cf9*/
  {
    while ( 2 ) /*0x1b5d00*/
    {
      v40 = *((_DWORD *)v39 + 4); /*0x1b5d00*/
      v90 = v40; /*0x1b5d03*/
      v41 = HIBYTE(v40); /*0x1b5d0c*/
      if ( v2 ) /*0x1b5d1f*/
        goto LABEL_74; /*0x1b5d1f*/
      v42 = 2 /*0x1b5d63*/
          * (v55
           & (0x100000001B3LL
            * ((unsigned int)v41
             ^ (0x100000001B3LL
              * (BYTE2(v40)
               ^ (0x100000001B3LL * (BYTE1(v40) ^ (0x100000001B3LL * ((unsigned __int8)v40 ^ 0xCBF29CE484222325uLL)))))))));
      v41 = v53; /*0x1b5d66*/
      v43 = *(_QWORD *)(v53 + 8 * v42 + 8); /*0x1b5d6b*/
      if ( v43 == v52[0] ) /*0x1b5d75*/
        goto LABEL_72; /*0x1b5d75*/
      v41 = *(_QWORD *)(v53 + 8 * v42); /*0x1b5d77*/
      if ( v40 != *(_DWORD *)(v43 + 16) ) /*0x1b5d7e*/
      {
        while ( v43 != v41 ) /*0x1b5d83*/
        {
          v43 = *(_QWORD *)(v43 + 8); /*0x1b5d85*/
          if ( v40 == *(_DWORD *)(v43 + 16) ) /*0x1b5d8c*/
            goto LABEL_73; /*0x1b5d8c*/
        }
LABEL_72:
        v43 = 0; /*0x1b5d90*/
      }
LABEL_73:
      if ( v43 ) /*0x1b5d96*/
      {
LABEL_74:
        v44 = sub_3F41D0(*(_QWORD *)(a1 + 1512), &v57, v41, HIWORD(v40)); /*0x1b5db3*/
        v91 = v44; /*0x1b5db6*/
        v45 = 0; /*0x1b5dbc*/
        if ( cocos2d::CCArray::count(v6) ) /*0x1b5dc2*/
        {
          do /*0x1b5e13*/
          {
            v46 = cocos2d::CCArray::objectAtIndex(v6, v45); /*0x1b5ddf*/
            sub_1B5F10(a1, v46, v90, v44); /*0x1b5df2*/
            *((_DWORD *)v46 + 304) = 0; /*0x1b5df7*/
            *((_BYTE *)v46 + 654) = 0; /*0x1b5dfd*/
            ++v45; /*0x1b5e04*/
          }
          while ( v45 < cocos2d::CCArray::count(v6) ); /*0x1b5e13*/
          v38 = v49; /*0x1b5e15*/
        }
        sub_67020(&v57, v79, &v91); /*0x1b5e29*/
        v47 = sub_66DF0(*(_QWORD *)(a1 + 1512) + 15664LL, v78, &v90); /*0x1b5e4e*/
        *(_DWORD *)(*(_QWORD *)v47 + 20LL) = v91; /*0x1b5e5c*/
        v2 = a2; /*0x1b5e5f*/
      }
      v39 = *(cocos2d::CCArray **)v39; /*0x1b5e67*/
      if ( v39 == v38 ) /*0x1b5e6d*/
        break; /*0x1b5e6d*/
      continue; /*0x1b5e6d*/
    }
  }
  LevelEditorLayer_recreateGroups(*(_QWORD *)(a1 + 1512)); /*0x1b5e73*/
  if ( cocos2d::CCArray::count(v6) ) /*0x1b5e89*/
  {
    do /*0x1b5eb3*/
    {
      v48 = cocos2d::CCArray::objectAtIndex(v6, v8); /*0x1b5e98*/
      sub_3F0B40(v48); /*0x1b5ea1*/
      ++v8; /*0x1b5ea6*/
    }
    while ( v8 < cocos2d::CCArray::count(v6) ); /*0x1b5eb3*/
  }
  sub_3DA90(&v59); /*0x1b5eb9*/
  sub_3DB00(v58); /*0x1b5ec2*/
  sub_3DA90(&v53); /*0x1b5ecd*/
  sub_3DB00(v52); /*0x1b5ed7*/
  sub_3DA90(&v65); /*0x1b5ee1*/
  return sub_3DB00(v64); /*0x1b5eef*/
}

// [38/110] Address: 0x1b6510
// Method: EditorUI::createNewKeyframeAnim
unsigned int __fastcall EditorUI_createNewKeyframeAnim(__int64 a1)
{
  unsigned int result; // eax
  cocos2d::CCArray *v3; // rax
  struct cocos2d::CCObject *v4; // rdx
  cocos2d::CCArray *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int *v8; // r12
  __int64 v9; // rcx
  _QWORD *v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // r15
  struct cocos2d::CCObject *v13; // rax
  unsigned int *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  int v18; // ebx
  const struct cocos2d::CCPoint *v19; // rax
  __int64 v20; // rax
  struct cocos2d::CCObject *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rcx
  struct cocos2d::CCObject *v24; // rdi
  _QWORD *v25; // [rsp+70h] [rbp+8h]
  cocos2d::CCArray *v26; // [rsp+78h] [rbp+10h]
  _QWORD *v27; // [rsp+80h] [rbp+18h]
  char v28; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(a1 + 1568) || (result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944))) != 0 ) /*0x1b6533*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x1b653e*/
    v4 = *(struct cocos2d::CCObject **)(a1 + 1568); /*0x1b6544*/
    v5 = v3; /*0x1b654b*/
    if ( v4 ) /*0x1b6554*/
      cocos2d::CCArray::addObject(v3, v4); /*0x1b6556*/
    else
      cocos2d::CCArray::addObjectsFromArray(v3, *(struct cocos2d::CCArray **)(a1 + 944)); /*0x1b6565*/
    EditorUI_deselectAll(a1); /*0x1b656e*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1512) + 1072LL))(*(_QWORD *)(a1 + 1512)); /*0x1b6580*/
    v7 = cocos2d::CCArray::create(v6); /*0x1b6586*/
    v26 = (cocos2d::CCArray *)v7; /*0x1b658c*/
    if ( v5 ) /*0x1b6594*/
    {
      v8 = (unsigned int *)*((_QWORD *)v5 + 7); /*0x1b659f*/
      v9 = *v8; /*0x1b65a3*/
      if ( (_DWORD)v9 ) /*0x1b65a9*/
      {
        v10 = (_QWORD *)*((_QWORD *)v8 + 2); /*0x1b65af*/
        v25 = v10; /*0x1b65b8*/
        v11 = &v10[v9 - 1]; /*0x1b65bd*/
        v27 = v11; /*0x1b65c1*/
        if ( v10 <= v11 ) /*0x1b65cc*/
        {
          do /*0x1b6775*/
          {
            v12 = *v10; /*0x1b65f0*/
            if ( !*v10 ) /*0x1b65f0*/
              break; /*0x1b65f7*/
            if ( *(_BYTE *)(v12 + 1178) ) /*0x1b65fd*/
            {
              v13 = cocos2d::CCDictionary::objectForKey( /*0x1b6620*/
                      *(cocos2d::CCDictionary **)(*(_QWORD *)(a1 + 1512) + 4040LL),
                      *(unsigned int *)(v12 + 924));
              if ( v13 ) /*0x1b6629*/
              {
                v14 = (unsigned int *)*((_QWORD *)v13 + 7); /*0x1b662f*/
                v15 = *v14; /*0x1b6633*/
                if ( (_DWORD)v15 ) /*0x1b6638*/
                {
                  v16 = *((_QWORD *)v14 + 2); /*0x1b663e*/
                  v17 = v16 + 8 * (v15 - 1); /*0x1b6646*/
                  if ( v16 <= v17 ) /*0x1b664d*/
                  {
                    do /*0x1b6756*/
                    {
                      if ( !*(_QWORD *)v16 ) /*0x1b6660*/
                        break; /*0x1b6666*/
                      v18 = *(_DWORD *)(*(_QWORD *)v16 + 56LL); /*0x1b6672*/
                      v19 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 200LL))(v12); /*0x1b6675*/
                      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, v19); /*0x1b6686*/
                      v21 = (struct cocos2d::CCObject *)sub_1B0700(a1, 3032, v20); /*0x1b66a6*/
                      sub_3F1780(*(_QWORD *)(a1 + 1512), v21); /*0x1b66a9*/
                      cocos2d::CCArray::addObject(v26, v21); /*0x1b66b4*/
                      if ( v18 < 0 ) /*0x1b66c7*/
                        v18 = 0; /*0x1b66c7*/
                      if ( v18 > 9999 ) /*0x1b66d1*/
                        v18 = 9999; /*0x1b66d1*/
                      *((_DWORD *)v21 + 370) = v18; /*0x1b66d4*/
                      KeyframeGameObject_updateShadowObjects(v21, *(_QWORD *)(a1 + 1512), a1); /*0x1b66e1*/
                      v22 = *(_QWORD *)(a1 + 1512); /*0x1b66e6*/
                      v24 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v23); /*0x1b66f9*/
                      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v24 + 64LL))( /*0x1b6706*/
                        v24,
                        *(unsigned int *)(v22 + 13944));
                      cocos2d::CCDictionary::setObject( /*0x1b671a*/
                        *(cocos2d::CCDictionary **)(v22 + 13936),
                        v24,
                        *(int *)(v22 + 13944));
                      ++*(_DWORD *)(v22 + 13944); /*0x1b6720*/
                      *((_DWORD *)v21 + 468) = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v24 + 56LL))(v24); /*0x1b6732*/
                      *((_DWORD *)v21 + 469) = 0; /*0x1b673d*/
                      sub_3F1070(*(_QWORD *)(a1 + 1512), v21); /*0x1b674a*/
                      v16 += 8LL; /*0x1b674f*/
                    }
                    while ( v16 <= v17 ); /*0x1b6756*/
                    v10 = v25; /*0x1b675c*/
                    v11 = v27; /*0x1b6761*/
                  }
                }
              }
            }
            v25 = ++v10; /*0x1b676d*/
          }
          while ( v10 <= v11 ); /*0x1b6775*/
          v7 = (__int64)v26; /*0x1b677b*/
        }
      }
    }
    return sub_1C47B0(a1, v7, 0); /*0x1b67a2*/
  }
  return result; /*0x1b67ac*/
}

// [40/110] Address: 0x1b7780
// Method: EditorUI::editButtonUsable
char __fastcall EditorUI_editButtonUsable(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  int v4; // ebx
  cocos2d::CCArray *v5; // r14
  unsigned int v6; // esi
  struct cocos2d::CCObject *v7; // rax
  int v8; // eax
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // ebx
  struct cocos2d::CCObject *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ecx
  int v32; // ecx
  unsigned int v34; // ebx
  struct cocos2d::CCObject *v35; // rax
  struct cocos2d::CCObject *v36; // rax

  v1 = *(_QWORD *)(a1 + 1568); /*0x1b779a*/
  v2 = 0; /*0x1b77a1*/
  v4 = -1; /*0x1b77a6*/
  if ( v1 ) /*0x1b77ae*/
  {
    v4 = *(_DWORD *)(v1 + 1036); /*0x1b77b0*/
  }
  else
  {
    v5 = *(cocos2d::CCArray **)(a1 + 944); /*0x1b77b8*/
    if ( !v5 ) /*0x1b77c2*/
      goto LABEL_13; /*0x1b77c2*/
    v6 = 0; /*0x1b77c7*/
    if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b77c9*/
      goto LABEL_13; /*0x1b77d1*/
    do /*0x1b7803*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(v5, v6); /*0x1b77d8*/
      if ( v4 ) /*0x1b77e0*/
      {
        v8 = *((_DWORD *)v7 + 259); /*0x1b77e2*/
        if ( v4 == -1 ) /*0x1b77eb*/
        {
          v4 = v8; /*0x1b77ed*/
        }
        else if ( v8 != v4 ) /*0x1b77f3*/
        {
          v4 = 0; /*0x1b77f3*/
        }
      }
      ++v6; /*0x1b77f9*/
    }
    while ( v6 < cocos2d::CCArray::count(v5) ); /*0x1b7803*/
  }
  if ( v4 <= 286 ) /*0x1b780d*/
  {
    if ( v4 != 286 ) /*0x1b7814*/
    {
LABEL_13:
      switch ( v4 ) /*0x1b7845*/
      {
        case 12: /*0x1b7845*/
        case 13: /*0x1b7845*/
        case 29: /*0x1b7845*/
        case 30: /*0x1b7845*/
        case 31: /*0x1b7845*/
        case 32: /*0x1b7845*/
        case 33: /*0x1b7845*/
        case 47: /*0x1b7845*/
        case 105: /*0x1b7845*/
        case 111: /*0x1b7845*/
        case 142: /*0x1b7845*/
        case 200: /*0x1b7845*/
        case 201: /*0x1b7845*/
        case 202: /*0x1b7845*/
        case 203: /*0x1b7845*/
        case 221: /*0x1b7845*/
          return 1;
        default:
          goto LABEL_27;
      }
    }
    return 1; /*0x1b7814*/
  }
  if ( v4 > 2899 ) /*0x1b784d*/
  {
    if ( v4 > 3600 ) /*0x1b7b00*/
    {
      switch ( v4 ) /*0x1b7b63*/
      {
        case 3602: /*0x1b7b63*/
        case 3603: /*0x1b7b63*/
        case 3604: /*0x1b7b63*/
        case 3605: /*0x1b7b63*/
        case 3606: /*0x1b7b63*/
        case 3607: /*0x1b7b63*/
        case 3608: /*0x1b7b63*/
        case 3609: /*0x1b7b63*/
        case 3612: /*0x1b7b63*/
        case 3613: /*0x1b7b63*/
        case 3614: /*0x1b7b63*/
        case 3615: /*0x1b7b63*/
        case 3617: /*0x1b7b63*/
        case 3618: /*0x1b7b63*/
        case 3619: /*0x1b7b63*/
        case 3620: /*0x1b7b63*/
        case 3640: /*0x1b7b63*/
        case 3641: /*0x1b7b63*/
        case 3642: /*0x1b7b63*/
        case 3643: /*0x1b7b63*/
        case 3645: /*0x1b7b63*/
        case 3655: /*0x1b7b63*/
        case 3660: /*0x1b7b63*/
        case 3661: /*0x1b7b63*/
        case 3662: /*0x1b7b63*/
        case 3663: /*0x1b7b63*/
          return 1;
        default:
          goto LABEL_27;
      }
    }
    if ( v4 != 3600 ) /*0x1b7b02*/
    {
      switch ( v4 ) /*0x1b7b36*/
      {
        case 2900: /*0x1b7b36*/
        case 2901: /*0x1b7b36*/
        case 2903: /*0x1b7b36*/
        case 2904: /*0x1b7b36*/
        case 2905: /*0x1b7b36*/
        case 2907: /*0x1b7b36*/
        case 2909: /*0x1b7b36*/
        case 2910: /*0x1b7b36*/
        case 2911: /*0x1b7b36*/
        case 2912: /*0x1b7b36*/
        case 2913: /*0x1b7b36*/
        case 2914: /*0x1b7b36*/
        case 2915: /*0x1b7b36*/
        case 2916: /*0x1b7b36*/
        case 2917: /*0x1b7b36*/
        case 2919: /*0x1b7b36*/
        case 2920: /*0x1b7b36*/
        case 2921: /*0x1b7b36*/
        case 2922: /*0x1b7b36*/
        case 2923: /*0x1b7b36*/
        case 2924: /*0x1b7b36*/
        case 2925: /*0x1b7b36*/
        case 2999: /*0x1b7b36*/
        case 3006: /*0x1b7b36*/
        case 3007: /*0x1b7b36*/
        case 3008: /*0x1b7b36*/
        case 3009: /*0x1b7b36*/
        case 3010: /*0x1b7b36*/
        case 3011: /*0x1b7b36*/
        case 3012: /*0x1b7b36*/
        case 3013: /*0x1b7b36*/
        case 3014: /*0x1b7b36*/
        case 3015: /*0x1b7b36*/
        case 3016: /*0x1b7b36*/
        case 3022: /*0x1b7b36*/
        case 3024: /*0x1b7b36*/
        case 3029: /*0x1b7b36*/
        case 3030: /*0x1b7b36*/
        case 3031: /*0x1b7b36*/
        case 3032: /*0x1b7b36*/
        case 3033: /*0x1b7b36*/
          return 1;
        default:
          goto LABEL_27;
      }
    }
    return 1; /*0x1b7b02*/
  }
  if ( v4 == 2899 ) /*0x1b7853*/
    return 1; /*0x1b7853*/
  if ( v4 > 1585 ) /*0x1b785f*/
  {
    if ( v4 > 1912 ) /*0x1b7a92*/
    {
      switch ( v4 ) /*0x1b7af8*/
      {
        case 1913: /*0x1b7af8*/
        case 1914: /*0x1b7af8*/
        case 1916: /*0x1b7af8*/
        case 1917: /*0x1b7af8*/
        case 1931: /*0x1b7af8*/
        case 1932: /*0x1b7af8*/
        case 1933: /*0x1b7af8*/
        case 1934: /*0x1b7af8*/
        case 1935: /*0x1b7af8*/
        case 2015: /*0x1b7af8*/
        case 2016: /*0x1b7af8*/
        case 2062: /*0x1b7af8*/
        case 2063: /*0x1b7af8*/
        case 2066: /*0x1b7af8*/
        case 2067: /*0x1b7af8*/
        case 2068: /*0x1b7af8*/
        case 2069: /*0x1b7af8*/
          return 1;
        default:
          goto LABEL_27;
      }
    }
    if ( v4 != 1912 ) /*0x1b7a94*/
    {
      switch ( v4 ) /*0x1b7ac8*/
      {
        case 1595: /*0x1b7ac8*/
        case 1611: /*0x1b7ac8*/
        case 1612: /*0x1b7ac8*/
        case 1613: /*0x1b7ac8*/
        case 1616: /*0x1b7ac8*/
        case 1811: /*0x1b7ac8*/
        case 1812: /*0x1b7ac8*/
        case 1814: /*0x1b7ac8*/
        case 1815: /*0x1b7ac8*/
        case 1816: /*0x1b7ac8*/
        case 1817: /*0x1b7ac8*/
        case 1818: /*0x1b7ac8*/
        case 1819: /*0x1b7ac8*/
          return 1;
        default:
          goto LABEL_27;
      }
    }
    return 1; /*0x1b7a94*/
  }
  if ( v4 == 1585 ) /*0x1b7865*/
    return 1; /*0x1b7c60*/
  if ( v4 > 915 ) /*0x1b7871*/
  {
    if ( v4 > 1331 ) /*0x1b7a26*/
    {
      v28 = v4 - 1334; /*0x1b7a5d*/
      if ( !v28 ) /*0x1b7a63*/
        return 1; /*0x1b7a63*/
      v29 = v28 - 12; /*0x1b7a69*/
      if ( !v29 ) /*0x1b7a6c*/
        return 1; /*0x1b7a6c*/
      v30 = v29 - 1; /*0x1b7a72*/
      if ( !v30 || v30 == 173 ) /*0x1b7a81*/
        return 1; /*0x1b7a81*/
    }
    else
    {
      if ( v4 == 1331 ) /*0x1b7a28*/
        return 1; /*0x1b7a28*/
      v25 = v4 - 1006; /*0x1b7a2e*/
      if ( !v25 ) /*0x1b7a34*/
        return 1; /*0x1b7a34*/
      v26 = v25 - 1; /*0x1b7a3a*/
      if ( !v26 ) /*0x1b7a3d*/
        return 1; /*0x1b7a3d*/
      v27 = v26 - 42; /*0x1b7a43*/
      if ( !v27 || v27 == 219 ) /*0x1b7a52*/
        return 1; /*0x1b7a52*/
    }
  }
  else
  {
    if ( v4 == 915 ) /*0x1b7877*/
      return 1; /*0x1b7877*/
    if ( v4 > 744 ) /*0x1b7883*/
    {
      v23 = v4 - 745; /*0x1b79f1*/
      if ( !v23 ) /*0x1b79f7*/
        return 1; /*0x1b79f7*/
      v24 = v23 - 154; /*0x1b79fd*/
      if ( !v24 || (unsigned int)(v24 - 1) < 2 ) /*0x1b7a0c*/
        return 1; /*0x1b7a0c*/
    }
    else
    {
      if ( v4 == 744 ) /*0x1b7889*/
        return 1; /*0x1b7889*/
      v9 = v4 - 287; /*0x1b788f*/
      if ( !v9 ) /*0x1b7895*/
        return 1; /*0x1b7895*/
      v10 = v9 - 373; /*0x1b789b*/
      if ( !v10 ) /*0x1b78a1*/
        return 1; /*0x1b78a1*/
      v11 = v10 - 57; /*0x1b78a7*/
      if ( !v11 ) /*0x1b78aa*/
        return 1; /*0x1b78aa*/
      v12 = v11 - 1; /*0x1b78b0*/
      if ( !v12 || v12 == 25 ) /*0x1b78bc*/
        return 1; /*0x1b78bc*/
    }
  }
LABEL_27:
  if ( *(_QWORD *)(a1 + 1568) ) /*0x1b78c2*/
  {
    if ( (unsigned __int8)GameObject_isBasicTrigger(*(_QWORD *)(a1 + 1568)) ) /*0x1b78d1*/
      return 1; /*0x1b78d1*/
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 1104) + 4LL) ) /*0x1b78e5*/
      return 1; /*0x1b78e5*/
    v14 = *(_QWORD *)(v13 + 1112); /*0x1b78ee*/
    if ( v14 ) /*0x1b78f8*/
    {
      if ( *(_DWORD *)(v14 + 4) ) /*0x1b78fa*/
        return 1; /*0x1b78fd*/
    }
  }
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b790a*/
  {
    v15 = 0; /*0x1b791b*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b791d*/
    {
      do /*0x1b7939*/
      {
        v16 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v15); /*0x1b7939*/
        if ( *(_DWORD *)(*((_QWORD *)v16 + 138) + 4LL) ) /*0x1b7946*/
          return 1; /*0x1b795e*/
        v17 = *((_QWORD *)v16 + 139); /*0x1b794f*/
        if ( v17 ) /*0x1b7959*/
        {
          if ( *(_DWORD *)(v17 + 4) ) /*0x1b795b*/
            return 1; /*0x1b795e*/
        }
      }
      while ( ++v15 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ); /*0x1b7939*/
    }
  }
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b797e*/
  {
    v18 = 0; /*0x1b7993*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b7995*/
    {
      while ( 1 ) /*0x1b79bf*/
      {
        v19 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v18) + 259); /*0x1b79bf*/
        if ( v19 > 744 ) /*0x1b79cb*/
        {
          v31 = v19 - 899; /*0x1b7b65*/
          if ( v31 ) /*0x1b7b6b*/
          {
            v32 = v31 - 1; /*0x1b7b6d*/
            if ( v32 ) /*0x1b7b70*/
            {
              v22 = v32 == 15; /*0x1b7b72*/
LABEL_72:
              if ( !v22 ) /*0x1b7b75*/
                goto LABEL_75; /*0x1b7b75*/
            }
          }
        }
        else if ( v19 != 744 ) /*0x1b79d1*/
        {
          v20 = v19 - 29; /*0x1b79d7*/
          if ( v20 ) /*0x1b79da*/
          {
            v21 = v20 - 1; /*0x1b79e0*/
            if ( v21 ) /*0x1b79e3*/
            {
              v22 = v21 == 75; /*0x1b79e9*/
              goto LABEL_72; /*0x1b79ec*/
            }
          }
        }
        if ( ++v18 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b7b88*/
          return 1; /*0x1b7b90*/
      }
    }
    return 1; /*0x1b799d*/
  }
LABEL_75:
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b7b9c*/
  {
    v34 = 0; /*0x1b7bad*/
    if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b7bb7*/
      return 1; /*0x1b7bb7*/
    while ( 1 ) /*0x1b7bc9*/
    {
      v35 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v34); /*0x1b7bc9*/
      if ( *((_DWORD *)v35 + 259) != 3006 /*0x1b7bea*/
        && *((_DWORD *)v35 + 259) != 3007
        && *((_DWORD *)v35 + 259) != 3008
        && (unsigned int)(*((_DWORD *)v35 + 259) - 3009) > 1 )
      {
        break; /*0x1b7bea*/
      }
      if ( ++v34 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b7c02*/
        return 1; /*0x1b7c06*/
    }
  }
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b7c0f*/
  {
    if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b7c28*/
      return 1; /*0x1b7c28*/
    while ( 1 ) /*0x1b7c39*/
    {
      v36 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v2); /*0x1b7c39*/
      if ( !(unsigned __int8)GameObject_isSpawnableTrigger(v36) ) /*0x1b7c42*/
        break; /*0x1b7c42*/
      if ( ++v2 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b7c5c*/
        return 1; /*0x1b7c5c*/
    }
  }
  return 0; /*0x1b7c64*/
}

// [41/110] Address: 0x1b7fd0
// Method: EditorUI::editButton2Usable
char __fastcall EditorUI_editButton2Usable(__int64 a1)
{
  _DWORD *v1; // rax
  cocos2d::CCArray **v2; // r12
  int v3; // ebx
  unsigned int v4; // ebp
  int v6; // edi
  int v7; // esi
  cocos2d::CCArray *v8; // r13
  unsigned int v9; // r15d
  struct cocos2d::CCObject *v10; // rax
  struct cocos2d::CCObject *v11; // rdx
  int v12; // eax
  cocos2d::CCArray *v13; // r15
  unsigned int v14; // edi
  int v15; // ebx
  int v16; // ebx
  bool v17; // zf
  __int64 v18; // rcx
  _DWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  cocos2d::CCArray *v22; // rdi
  char v23; // bl
  int v24; // ebx
  unsigned int v26; // ebx
  struct cocos2d::CCObject *v27; // rax
  unsigned int v28; // edi
  struct cocos2d::CCObject *v29; // rax
  struct cocos2d::CCObject *v30; // rax

  v1 = *(_DWORD **)(a1 + 1568); /*0x1b7fe6*/
  v2 = (cocos2d::CCArray **)(a1 + 944); /*0x1b7fed*/
  v3 = -1; /*0x1b7ff4*/
  v4 = 0; /*0x1b7ff9*/
  v6 = -1; /*0x1b7ffe*/
  v7 = -1; /*0x1b8000*/
  if ( v1 ) /*0x1b8005*/
  {
    v3 = v1[259]; /*0x1b8007*/
    v6 = v1[314]; /*0x1b800d*/
    v7 = v1[233]; /*0x1b8013*/
  }
  else
  {
    v8 = *v2; /*0x1b8023*/
    if ( *v2 ) /*0x1b8023*/
    {
      v9 = 0; /*0x1b802f*/
      if ( cocos2d::CCArray::count(*v2) ) /*0x1b8032*/
      {
        do /*0x1b80a6*/
        {
          v10 = cocos2d::CCArray::objectAtIndex(v8, v9); /*0x1b8046*/
          v11 = v10; /*0x1b804c*/
          if ( v3 ) /*0x1b8051*/
          {
            if ( v3 == -1 ) /*0x1b805c*/
            {
              v3 = *((_DWORD *)v10 + 259); /*0x1b805e*/
            }
            else if ( *((_DWORD *)v10 + 259) != v3 ) /*0x1b8064*/
            {
              v3 = 0; /*0x1b8064*/
            }
          }
          if ( v6 ) /*0x1b8069*/
          {
            v12 = *((_DWORD *)v10 + 314); /*0x1b806b*/
            if ( v6 == -1 ) /*0x1b8074*/
            {
              v6 = v12; /*0x1b8076*/
            }
            else if ( v12 != v6 ) /*0x1b807c*/
            {
              v6 = 0; /*0x1b807c*/
            }
          }
          if ( v7 ) /*0x1b8081*/
          {
            if ( v7 == -1 ) /*0x1b808c*/
            {
              v7 = *((_DWORD *)v11 + 233); /*0x1b808e*/
            }
            else if ( *((_DWORD *)v11 + 233) != v7 ) /*0x1b8094*/
            {
              v7 = 0; /*0x1b8094*/
            }
          }
          ++v9; /*0x1b809a*/
        }
        while ( v9 < cocos2d::CCArray::count(v8) ); /*0x1b80a6*/
      }
    }
  }
  if ( v3 == -1 && v6 == -1 ) /*0x1b80b4*/
    return 0; /*0x1b80b4*/
  if ( v6 == 5 ) /*0x1b80bd*/
    return 1; /*0x1b80bd*/
  v13 = *v2; /*0x1b80c3*/
  if ( *v2 ) /*0x1b80c3*/
  {
    v14 = 0; /*0x1b80cf*/
    if ( cocos2d::CCArray::count(*v2) ) /*0x1b80d1*/
    {
      while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(v13, v14) + 314) != 5 ) /*0x1b80f2*/
      {
        if ( ++v14 >= cocos2d::CCArray::count(v13) ) /*0x1b8105*/
          goto LABEL_28; /*0x1b8105*/
      }
      return 1; /*0x1b80f2*/
    }
  }
LABEL_28:
  if ( v7 == 30 ) /*0x1b810a*/
    return 1; /*0x1b810a*/
  if ( v3 > 2903 ) /*0x1b8116*/
  {
    if ( v3 > 3643 ) /*0x1b8217*/
      goto LABEL_37; /*0x1b8217*/
    if ( v3 != 3643 ) /*0x1b821d*/
    {
      switch ( v3 ) /*0x1b824a*/
      {
        case 2904: /*0x1b824a*/
        case 2905: /*0x1b824a*/
        case 2907: /*0x1b824a*/
        case 2909: /*0x1b824a*/
        case 2910: /*0x1b824a*/
        case 2911: /*0x1b824a*/
        case 2912: /*0x1b824a*/
        case 2913: /*0x1b824a*/
        case 2914: /*0x1b824a*/
        case 2915: /*0x1b824a*/
        case 2916: /*0x1b824a*/
        case 2917: /*0x1b824a*/
        case 2919: /*0x1b824a*/
        case 2920: /*0x1b824a*/
        case 2921: /*0x1b824a*/
        case 2922: /*0x1b824a*/
        case 2923: /*0x1b824a*/
        case 2924: /*0x1b824a*/
          return 1;
        default:
          goto LABEL_37;
      }
    }
    return 0; /*0x1b824e*/
  }
  if ( v3 == 2903 ) /*0x1b811c*/
    return 1; /*0x1b811c*/
  if ( v3 > 1751 ) /*0x1b8128*/
  {
    v24 = v3 - 2063; /*0x1b81fd*/
    if ( !v24 ) /*0x1b8203*/
      return 1; /*0x1b8203*/
    v17 = v24 == 2; /*0x1b8209*/
  }
  else
  {
    if ( v3 == 1751 ) /*0x1b812e*/
      return 1; /*0x1b812e*/
    v15 = v3 - 1594; /*0x1b8134*/
    if ( !v15 ) /*0x1b813a*/
      return 1; /*0x1b813a*/
    v16 = v15 - 21; /*0x1b8140*/
    if ( !v16 ) /*0x1b8143*/
      return 1; /*0x1b8143*/
    v17 = v16 == 89; /*0x1b8149*/
  }
  if ( v17 ) /*0x1b814c*/
    return 1; /*0x1b8371*/
LABEL_37:
  v18 = *(_QWORD *)(a1 + 1568); /*0x1b8152*/
  if ( v18 ) /*0x1b815c*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 1648LL))(v18) == 30 ) /*0x1b816a*/
      return 1; /*0x1b816a*/
    v19 = *(_DWORD **)(a1 + 1568); /*0x1b8170*/
    v20 = v19[259]; /*0x1b8177*/
    if ( v20 == 2065 /*0x1b81c6*/
      || v20 == 1615
      || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 1584LL))(v19)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1568) + 1576LL))(*(_QWORD *)(a1 + 1568))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1568) + 1480LL))(*(_QWORD *)(a1 + 1568)) )
    {
      return 1; /*0x1b81ce*/
    }
  }
  v21 = *(_QWORD *)(a1 + 1568); /*0x1b81d4*/
  v22 = *v2; /*0x1b81db*/
  if ( !v21 ) /*0x1b81e2*/
  {
    v26 = 0; /*0x1b8256*/
    if ( cocos2d::CCArray::count(*v2) ) /*0x1b8258*/
    {
      while ( 1 ) /*0x1b8267*/
      {
        v27 = cocos2d::CCArray::objectAtIndex(v22, v26); /*0x1b8267*/
        if ( !(*(unsigned __int8 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v27 + 1480LL))(v27) ) /*0x1b827a*/
          break; /*0x1b827a*/
        if ( ++v26 >= cocos2d::CCArray::count(v22) ) /*0x1b828d*/
          return 1; /*0x1b828d*/
      }
      v23 = 0; /*0x1b8299*/
      goto LABEL_59; /*0x1b8299*/
    }
    return 1; /*0x1b828f*/
  }
  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 1480LL))(v21); /*0x1b81ed*/
  if ( v23 ) /*0x1b81f2*/
    return v23; /*0x1b81f2*/
LABEL_59:
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b82aa*/
    goto LABEL_65; /*0x1b82aa*/
  v23 = 1; /*0x1b82b3*/
  v28 = 0; /*0x1b82b5*/
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b82bf*/
    return v23; /*0x1b8294*/
  while ( 1 ) /*0x1b82ca*/
  {
    v29 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v28); /*0x1b82ca*/
    if ( (*(unsigned __int8 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v29 + 1576LL))(v29) ) /*0x1b82dd*/
      break; /*0x1b82dd*/
    if ( ++v28 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b82f4*/
      return 1; /*0x1b82f9*/
  }
  v23 = 0; /*0x1b82fb*/
LABEL_65:
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b8304*/
    return v23; /*0x1b8304*/
  v23 = 1; /*0x1b8315*/
  if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b8317*/
    return v23; /*0x1b831f*/
  while ( 1 ) /*0x1b8339*/
  {
    v30 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v4); /*0x1b8339*/
    if ( (*(unsigned __int8 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v30 + 1584LL))(v30) ) /*0x1b834c*/
      break; /*0x1b834c*/
    if ( ++v4 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1b8363*/
      return 1; /*0x1b8368*/
  }
  return 0; /*0x1b8373*/
}

// [42/110] Address: 0x1b83b0
// Method: EditorUI::toggleEditObjectButton
__int64 __fastcall EditorUI_toggleEditObjectButton(__int64 a1)
{
  __int16 *v2; // rdi
  char v3; // bl
  __int16 *v4; // rdx
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  char v7; // bl

  v2 = &word_6FE290; /*0x1b83d7*/
  v3 = EditorUI_editButtonUsable(a1); /*0x1b83e5*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1136) + 408LL) = v3; /*0x1b83e8*/
  v4 = &word_6FE290; /*0x1b83ee*/
  if ( v3 ) /*0x1b8401*/
    v4 = &word_6FE29C; /*0x1b8401*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1136) + 320LL))(*(_QWORD *)(a1 + 1136) + 320LL, v4); /*0x1b8408*/
  v5 = -81; /*0x1b8412*/
  v6 = 175; /*0x1b841e*/
  if ( v3 ) /*0x1b8428*/
    v6 = 255; /*0x1b8428*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1136) + 320LL) + 40LL))( /*0x1b842f*/
    *(_QWORD *)(a1 + 1136) + 320LL,
    v6);
  v7 = EditorUI_editButton2Usable(a1); /*0x1b8441*/
  *(_BYTE *)(*(_QWORD *)(a1 + 1160) + 408LL) = v7; /*0x1b8444*/
  if ( v7 ) /*0x1b845a*/
    v2 = &word_6FE29C; /*0x1b845a*/
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1160) + 320LL))(*(_QWORD *)(a1 + 1160) + 320LL, v2); /*0x1b8464*/
  if ( v7 ) /*0x1b8477*/
    v5 = -1; /*0x1b8477*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 1160) + 320LL) + 40LL))( /*0x1b8482*/
    *(_QWORD *)(a1 + 1160) + 320LL,
    v5);
  return sub_1BB170(a1); /*0x1b8488*/
}

// [43/110] Address: 0x1b8840
// Method: EditorUI::editObject
// Hidden C++ exception states: #wind=18
char __fastcall EditorUI_editObject(__int64 a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rdx
  int v4; // ecx
  unsigned int v5; // r13d
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // esi
  int v11; // r14d
  char v12; // r9
  char v13; // r12
  __int64 v14; // rdx
  char v15; // bl
  char v16; // r15
  _DWORD *v17; // rcx
  int v18; // ecx
  cocos2d::CCArray *v19; // rcx
  struct cocos2d::CCObject *v20; // rax
  struct cocos2d::CCObject *v21; // rbx
  char isBasicTrigger; // al
  unsigned int v23; // r8d
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  char v30; // r8
  char v31; // r9
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rdi
  cocos2d::CCObject *v35; // rsi
  __int64 (__fastcall *v36)(cocos2d::CCObject *); // rdx
  cocos2d::CCObject *v37; // rcx
  __int64 v38; // r14
  cocos2d::CCObject *v39; // rbx
  char v40; //... [44004 chars total]

// [44/110] Address: 0x1bb2e0
// Method: EditorUI::onEditColor
unsigned int __fastcall EditorUI_onEditColor(__int64 a1)
{
  unsigned int result; // eax

  if ( *(_QWORD *)(a1 + 1568) || (result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944))) != 0 ) /*0x1bb302*/
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1152) + 56LL))(*(_QWORD *)(a1 + 1152)) == 1 ) /*0x1bb317*/
      GJEffectManager_processInheritedColors(a1); /*0x1bb319*/
    else
      OptionsScrollLayer_setupList(a1); /*0x1bb32b*/
    return sub_1BB170(a1); /*0x1bb326*/
  }
  return result; /*0x1bb321*/
}

// [45/110] Address: 0x1bb350
// Method: EditorUI::getEditColorTargets
// Hidden C++ exception states: #wind=2
int __fastcall EditorUI_getEditColorTargets(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  int v7; // edi
  int v8; // ebx
  __int64 v9; // rax
  int *v10; // rdx
  int v11; // ecx
  int *v12; // rcx
  char v13; // r9
  unsigned int *v14; // r8
  __int64 *v15; // r8
  __int64 *v16; // r10
  __int64 v17; // rcx
  int *v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  void *v25; // [rsp+40h] [rbp+8h]
  void *v26; // [rsp+40h] [rbp+8h]

  v7 = -1; /*0x1bb36c*/
  v8 = -1; /*0x1bb371*/
  v9 = *(_QWORD *)(a1 + 1568); /*0x1bb373*/
  if ( !v9 ) /*0x1bb37d*/
  {
    LODWORD(v9) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1bb3f6*/
    if ( !(_DWORD)v9 ) /*0x1bb3fe*/
      goto LABEL_49; /*0x1bb3fe*/
    v7 = -2; /*0x1bb404*/
    v8 = -2; /*0x1bb409*/
    v13 = 0; /*0x1bb40b*/
    v9 = *(_QWORD *)(a1 + 944); /*0x1bb40e*/
    if ( !v9 ) /*0x1bb418*/
      goto LABEL_49; /*0x1bb418*/
    v14 = *(unsigned int **)(v9 + 56); /*0x1bb41e*/
    v9 = *v14; /*0x1bb422*/
    if ( !(_DWORD)v9 ) /*0x1bb427*/
      goto LABEL_49; /*0x1bb427*/
    v15 = (__int64 *)*((_QWORD *)v14 + 2); /*0x1bb42d*/
    v16 = &v15[v9 - 1]; /*0x1bb435*/
    if ( v15 > v16 ) /*0x1bb43c*/
      goto LABEL_49; /*0x1bb43c*/
    while ( 1 ) /*0x1bb450*/
    {
      v17 = *v15; /*0x1bb450*/
      if ( !*v15 ) /*0x1bb456*/
        goto LABEL_41; /*0x1bb456*/
      v18 = *(int **)(v17 + 1104); /*0x1bb45c*/
      v19 = v18[1]; /*0x1bb463*/
      if ( !v19 ) /*0x1bb468*/
        break; /*0x1bb468*/
      v21 = *v18; /*0x1bb488*/
      if ( v19 == v21 || !v21 ) /*0x1bb490*/
        v21 = v19; /*0x1bb492*/
      if ( v7 == -2 ) /*0x1bb497*/
      {
        v7 = v21; /*0x1bb499*/
      }
      else if ( v7 != v21 ) /*0x1bb4a3*/
      {
        v13 = 1; /*0x1bb4a3*/
      }
      v9 = *(_QWORD *)(v17 + 1112); /*0x1bb4a7*/
      if ( v9 ) /*0x1bb4b1*/
      {
        v20 = *(_DWORD *)(v9 + 4); /*0x1bb4b3*/
        if ( v20 ) /*0x1bb4b8*/
          goto LABEL_33; /*0x1bb4b8*/
      }
LABEL_39:
      if ( v13 ) /*0x1bb4da*/
        goto LABEL_49; /*0x1bb4da*/
      if ( ++v15 > v16 ) /*0x1bb4e7*/
        goto LABEL_41; /*0x1bb4e7*/
    }
    v9 = *(_QWORD *)(v17 + 1112); /*0x1bb46a*/
    if ( !v9 || !*(_DWORD *)(v9 + 4) ) /*0x1bb47a*/
      goto LABEL_49; /*0x1bb47d*/
    v20 = *(_DWORD *)(v9 + 4); /*0x1bb483*/
LABEL_33:
    LODWORD(v9) = *(_DWORD *)v9; /*0x1bb4ba*/
    if ( v20 == (_DWORD)v9 || !(_DWORD)v9 ) /*0x1bb4c2*/
      LODWORD(v9) = v20; /*0x1bb4c4*/
    if ( v8 == -2 ) /*0x1bb4c9*/
    {
      v8 = v9; /*0x1bb4cb*/
    }
    else if ( v8 != (_DWORD)v9 ) /*0x1bb4d1*/
    {
      goto LABEL_49; /*0x1bb4d1*/
    }
    goto LABEL_39; /*0x1bb4cd*/
  }
  if ( *(_DWORD *)(v9 + 1256) == 1 && (*(_BYTE *)(v9 + 1262) || *(_DWORD *)(v9 + 1036) == 1006) ) /*0x1bb39b*/
  {
    *a4 = v9; /*0x1bb39d*/
  }
  else
  {
    v10 = *(int **)(v9 + 1104); /*0x1bb3a5*/
    v11 = v10[1]; /*0x1bb3ac*/
    if ( v11 ) /*0x1bb3b1*/
    {
      v7 = *v10; /*0x1bb3b3*/
      if ( v11 == *v10 || !v7 ) /*0x1bb3bb*/
        v7 = v10[1]; /*0x1bb3bd*/
    }
    v12 = *(int **)(v9 + 1112); /*0x1bb3bf*/
    if ( v12 ) /*0x1bb3c9*/
    {
      LODWORD(v9) = v12[1]; /*0x1bb3cf*/
      if ( (_DWORD)v9 ) /*0x1bb3d4*/
      {
        v8 = *v12; /*0x1bb3da*/
        if ( (_DWORD)v9 == *v12 || !v8 ) /*0x1bb3e2*/
          v8 = v12[1]; /*0x1bb3e8*/
      }
    }
LABEL_41:
    if ( v7 >= 0 ) /*0x1bb4ef*/
    {
      v22 = qword_905FD0; /*0x1bb4f1*/
      if ( !qword_905FD0 ) /*0x1bb4fb*/
      {
        v25 = operator new(0x6E8u); /*0x1bb507*/
        qword_905FD0 = sub_2723A0(v25); /*0x1bb515*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1bb526*/
        v22 = qword_905FD0; /*0x1bb529*/
      }
      v9 = sub_3624A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 568) + 3592LL) + 320LL), (unsigned int)v7); /*0x1bb547*/
      *a2 = v9; /*0x1bb54c*/
    }
    if ( v8 >= 0 ) /*0x1bb551*/
    {
      v23 = qword_905FD0; /*0x1bb553*/
      if ( !qword_905FD0 ) /*0x1bb55d*/
      {
        v26 = operator new(0x6E8u); /*0x1bb569*/
        qword_905FD0 = sub_2723A0(v26); /*0x1bb577*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1bb588*/
        v23 = qword_905FD0; /*0x1bb58b*/
      }
      v9 = sub_3624A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 568) + 3592LL) + 320LL), (unsigned int)v8); /*0x1bb5a9*/
      *a3 = v9; /*0x1bb5ae*/
    }
  }
LABEL_49:
  if ( !*a2 ) /*0x1bb5b1*/
  {
    v9 = *a3; /*0x1bb5b7*/
    if ( *a3 ) /*0x1bb5b7*/
    {
      *a2 = v9; /*0x1bb5bf*/
      *a3 = 0; /*0x1bb5c2*/
    }
  }
  return v9; /*0x1bb5c9*/
}

// [46/110] Address: 0x1bb730
// Method: EditorUI::showLiveColorSelectForMode
// Hidden C++ exception states: #wind=1
__int64 __fastcall EditorUI_showLiveColorSelectForMode(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h]

  sub_1BB800(a1); /*0x1bb73f*/
  sub_1BBB00(a1); /*0x1bb747*/
  v4 = qword_905FD0; /*0x1bb74c*/
  if ( !qword_905FD0 ) /*0x1bb756*/
  {
    v8 = operator new(0x6E8u); /*0x1bb762*/
    qword_905FD0 = sub_2723A0(v8); /*0x1bb770*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1bb781*/
    v4 = qword_905FD0; /*0x1bb783*/
  }
  v5 = sub_3624A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 568) + 3592LL) + 320LL), a2); /*0x1bb7a1*/
  v6 = InfoLayer_create(v5, 0, 0); /*0x1bb7ae*/
  *(_QWORD *)(a1 + 1616) = v6; /*0x1bb7b3*/
  *(_QWORD *)(v6 + 736) = a1 + 416; /*0x1bb7c1*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1616) + 568LL) = a1; /*0x1bb7cf*/
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1616) + 1064LL))(*(_QWORD *)(a1 + 1616));
}

// [47/110] Address: 0x1bbf00
// Method: EditorUI::onGroupUp
__int64 __fastcall EditorUI_onGroupUp(__int64 a1)
{
  ++*(_WORD *)(*(_QWORD *)(a1 + 1512) + 14930LL); /*0x1bbf07*/
  return EditorUI_updateGroupIDLabel(a1);
}

// [48/110] Address: 0x1bbf20
// Method: EditorUI::onGroupDown
__int64 __fastcall EditorUI_onGroupDown(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax

  v1 = *(_QWORD *)(a1 + 1512); /*0x1bbf20*/
  v2 = *(__int16 *)(v1 + 14930) - 1; /*0x1bbf34*/
  if ( v2 < -1 ) /*0x1bbf39*/
    LOWORD(v2) = -1; /*0x1bbf39*/
  *(_WORD *)(v1 + 14930) = v2; /*0x1bbf3e*/
  return EditorUI_updateGroupIDLabel(a1);
}

// [49/110] Address: 0x1bbf50
// Method: EditorUI::updateGroupIDLabel
__int64 __fastcall EditorUI_updateGroupIDLabel(__int64 a1, __int64 a2, __int64 a3)
{
  const char *CString; // r9
  __int64 v5; // rdx
  cocos2d::CCString *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // r8d
  bool v10; // bl
  void (__fastcall ***v11)(_QWORD, __int16 *); // rcx
  __int16 *v12; // rdx
  __int16 v13; // bx
  __int16 v15; // [rsp+30h] [rbp+8h] BYREF
  char v16; // [rsp+32h] [rbp+Ah]

  CString = "All"; /*0x1bbf61*/
  v5 = (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 1512) + 14930LL); /*0x1bbf6b*/
  if ( (int)v5 > -1 ) /*0x1bbf75*/
  {
    v6 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v5, a3, "All"); /*0x1bbf7e*/
    CString = cocos2d::CCString::getCString(v6); /*0x1bbf8d*/
  }
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 1328) + 360LL))( /*0x1bbfa7*/
    *(_QWORD *)(a1 + 1328) + 360LL,
    CString);
  cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 1328), 38.0, 0.60000002, 0.0); /*0x1bbfc4*/
  v7 = *(_QWORD *)(a1 + 1512); /*0x1bbfca*/
  v8 = *(__int16 *)(v7 + 14930); /*0x1bbfd6*/
  if ( (unsigned __int16)v8 > 0x270Fu || !*(_BYTE *)(v7 + 14729) ) /*0x1bbfe3*/
  {
    v10 = 0; /*0x1bc037*/
    v11 = (void (__fastcall ***)(_QWORD, __int16 *))(*(_QWORD *)(a1 + 1328) + 368LL); /*0x1bc039*/
    goto LABEL_8; /*0x1bc039*/
  }
  v9 = *(_DWORD *)(*(_QWORD *)(v7 + 15272) + 4 * (v8 >> 5)) & (1 << v8); /*0x1bc00a*/
  v10 = v9 != 0; /*0x1bc00e*/
  v11 = (void (__fastcall ***)(_QWORD, __int16 *))(*(_QWORD *)(a1 + 1328) + 368LL); /*0x1bc011*/
  if ( !v9 ) /*0x1bc01b*/
  {
LABEL_8:
    v12 = &word_6FE29C; /*0x1bc040*/
    goto LABEL_9; /*0x1bc040*/
  }
  v15 = -26881; /*0x1bc01d*/
  v12 = &v15; /*0x1bc024*/
  v16 = 0; /*0x1bc029*/
LABEL_9:
  (**v11)(v11, v12); /*0x1bc047*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1648) + 336LL))(*(_QWORD *)(a1 + 1648), v10); /*0x1bc059*/
  v13 = *(_WORD *)(*(_QWORD *)(a1 + 1512) + 14930LL) >> 15; /*0x1bc077*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 1352) + 336LL))( /*0x1bc081*/
    *(_QWORD *)(a1 + 1352),
    *(_WORD *)(*(_QWORD *)(a1 + 1512) + 14930LL) >= 0);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1232) + 336LL))(
           *(_QWORD *)(a1 + 1232),
           (unsigned __int8)v13);
}

// [50/110] Address: 0x1bc230
// Method: EditorUI::resetSelectedObjectsColor
int __fastcall EditorUI_resetSelectedObjectsColor(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int *v4; // rbx
  __int64 *v5; // rbx
  __int64 *i; // rdi
  __int64 v7; // rcx
  __int16 v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+32h] [rbp+Ah]

  v2 = *(_QWORD *)(a1 + 1568); /*0x1bc239*/
  if ( v2 ) /*0x1bc243*/
  {
    v9 = -256; /*0x1bc251*/
    v10 = 0; /*0x1bc25d*/
    LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v2 + 1376LL))(v2, &v9); /*0x1bc264*/
  }
  else
  {
    LODWORD(v3) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1bc277*/
    if ( (_DWORD)v3 ) /*0x1bc27f*/
    {
      v3 = *(_QWORD *)(a1 + 944); /*0x1bc281*/
      if ( v3 ) /*0x1bc28b*/
      {
        v4 = *(unsigned int **)(v3 + 56); /*0x1bc28d*/
        v3 = *v4; /*0x1bc291*/
        if ( (_DWORD)v3 ) /*0x1bc295*/
        {
          v5 = (__int64 *)*((_QWORD *)v4 + 2); /*0x1bc297*/
          for ( i = &v5[v3 - 1]; v5 <= i; ++v5 ) /*0x1bc2ab*/
          {
            v7 = *v5; /*0x1bc2b0*/
            if ( !*v5 ) /*0x1bc2b0*/
              break; /*0x1bc2b6*/
            v9 = -256; /*0x1bc2c4*/
            v10 = 0; /*0x1bc2d0*/
            LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v7 + 1376LL))(v7, &v9); /*0x1bc2d7*/
          }
        }
      }
    }
  }
  return v3; /*0x1bc26a*/
}

// [51/110] Address: 0x1bc470
// Method: EditorUI::constrainGameLayerPosition
__int64 __fastcall EditorUI_constrainGameLayerPosition(__int64 a1, float a2, float a3)
{
  const struct cocos2d::CCPoint *v4; // rax
  float v5; // xmm6_4
  cocos2d::CCDirector *v6; // rax
  float ScreenLeft; // xmm0_4
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  cocos2d::CCDirector *v11; // rax
  float ScreenTop; // xmm6_4
  cocos2d::CCDirector *v13; // rax
  float ScreenRight; // xmm0_4
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  float v23[2]; // [rsp+20h] [rbp-60h] BYREF
  float v24[2]; // [rsp+28h] [rbp-58h] BYREF
  float v25[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v26[8]; // [rsp+38h] [rbp-48h] BYREF
  float v27; // [rsp+90h] [rbp+10h] BYREF
  float v28; // [rsp+94h] [rbp+14h]
  float v29; // [rsp+A8h] [rbp+28h] BYREF
  float v30; // [rsp+ACh] [rbp+2Ch]

  v4 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 1512) + 4360LL) /*0x1bc4b6*/
                                                                          + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 1512)
                                                                                              + 4360LL));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, v4); /*0x1bc4c3*/
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*(_QWORD *)(a1 + 1512) + 4360LL) + 184LL))( /*0x1bc4e1*/
    *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4360LL),
    &dword_9046E8);
  v5 = *(float *)(a1 + 900); /*0x1bc4e7*/
  v6 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x1bc4ef*/
  ScreenLeft = cocos2d::CCDirector::getScreenLeft(v6); /*0x1bc4f8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v24, ScreenLeft, v5); /*0x1bc508*/
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4360LL); /*0x1bc52c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v26, (float)(a2 * 30.0) - 30.0, (float)(a3 * 30.0) + 90.0); /*0x1bc547*/
  cocos2d::CCNode::convertToWorldSpace(v8, &v29, v9); /*0x1bc557*/
  v10 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 1512), v26, &v29); /*0x1bc56c*/
  cocos2d::CCPoint::operator=(&v29, v10); /*0x1bc579*/
  v11 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x1bc57f*/
  ScreenTop = cocos2d::CCDirector::getScreenTop(v11); /*0x1bc58e*/
  v13 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x1bc591*/
  ScreenRight = cocos2d::CCDirector::getScreenRight(v13); /*0x1bc59a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, ScreenRight, ScreenTop); /*0x1bc5aa*/
  v15 = *(_QWORD *)(a1 + 1512); /*0x1bc5b0*/
  v16 = *(_QWORD *)(v15 + 3592); /*0x1bc5c4*/
  v17 = *(_QWORD *)(v15 + 4360); /*0x1bc5cb*/
  v18 = 80; /*0x1bc5d2*/
  if ( *(_BYTE *)(v16 + 461) ) /*0x1bc5d7*/
    v18 = 1000; /*0x1bc5e2*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v26, 240030.0, (float)((float)((float)v18 * 30.0) + 90.0) + 30.0); /*0x1bc5fe*/
  cocos2d::CCNode::convertToWorldSpace(v17, v23, v19); /*0x1bc60e*/
  v20 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 1512), v26, v23); /*0x1bc623*/
  cocos2d::CCPoint::operator=(v23, v20); /*0x1bc630*/
  v21 = *(_QWORD *)(a1 + 1512); /*0x1bc653*/
  v27 = fmaxf(fminf(v27, v24[0] - v29), v25[0] - v23[0]); /*0x1bc676*/
  v28 = fmaxf(fminf(v28, v24[1] - v30), v25[1] - v23[1]); /*0x1bc688*/
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**(_QWORD **)(v21 + 4360) + 184LL))(*(_QWORD *)(v21 + 4360), &v27); /*0x1bc69d*/
}

// [52/110] Address: 0x1bc7f0
// Method: EditorUI::draw
void __fastcall EditorUI_draw(_BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a1[909] ) /*0x1bc7f6*/
  {
    cocos2d::ccDrawColor4B(0, 0xFFu, 0, 0xFFu); /*0x1bc813*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v5, (const struct cocos2d::CCPoint *)(a1 + 1528)); /*0x1bc825*/
    v3 = v2; /*0x1bc832*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v6, (const struct cocos2d::CCPoint *)(a1 + 1520)); /*0x1bc83a*/
    cocos2d::ccDrawRect(v4, v3); /*0x1bc846*/
  }
}

// [53/110] Address: 0x1bc860
// Method: EditorUI::findSnapObject
__int64 __fastcall EditorUI_findSnapObject(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  cocos2d::CCArray *i; // rbp
  struct cocos2d::CCObject *v7; // rsi
  cocos2d::CCRect *v8; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-28h] BYREF

  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1bc88a*/
  {
    v5 = 0; /*0x1bc8a5*/
    for ( i = (cocos2d::CCArray *)cocos2d::CCArray::create(v4); /*0x1bc8aa*/
          v5 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944));
          ++v5 )
    {
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v5); /*0x1bc8de*/
      sub_3EDE50(*(_QWORD *)(a1 + 1512), v10, v7); /*0x1bc8e1*/
      v8 = (cocos2d::CCRect *)sub_3EDE50(*(_QWORD *)(a1 + 1512), v11, v7); /*0x1bc8f5*/
      if ( cocos2d::CCRect::containsPoint(v8, a2) ) /*0x1bc900*/
        cocos2d::CCArray::addObject(i, v7); /*0x1bc910*/
    }
  }
  else
  {
    i = 0; /*0x1bc932*/
  }
  return sub_1BC960(a1, i); /*0x1bc93d*/
}

// [54/110] Address: 0x1bd960
// Method: EditorUI::ccTouchMoved
// Hidden C++ exception states: #wind=1
void __fastcall EditorUI_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  const struct cocos2d::CCPoint *v18; // r8
  float v19; // xmm0_4
  unsigned __int32 v20; // xmm3_4
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  const struct cocos2d::CCPoint *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  float v30; // xmm0_4
  __int64 v31; // rax
  unsigned int i; // esi
  struct cocos2d::CCObject *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  const struct cocos2d::CCPoint *v41; // r8
  const struct cocos2d::CCPoint *v42; // rax
  _BYTE v43[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v44[8]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v45[16]; // [rsp+30h] [rbp-20h] BYREF
  void *v46; // [rsp+80h] [rbp+30h] BYREF
  char v47; // [rsp+88h] [rbp+38h] BYREF
  char v48; // [rsp+98h] [rbp+48h] BYREF

  v6 = *(_DWORD *)(a2 + 56); /*0x1bd981*/
  if ( *(_DWORD *)(a1 + 424) == v6 ) /*0x1bd98a*/
  {
    cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1bd998*/
    v7 = *(_QWORD *)(a1 + 488); /*0x1bd99e*/
LABEL_3:
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 16LL))(v7 + 320, a2, a3); /*0x1bd9a5*/
    return; /*0x1bd9b8*/
  }
  if ( *(_DWORD *)(a1 + 428) == v6 ) /*0x1bd9c3*/
  {
    cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1bd9d1*/
    v7 = *(_QWORD *)(a1 + 512); /*0x1bd9d7*/
    goto LABEL_3; /*0x1bd9de*/
  }
  if ( *(_DWORD *)(a1 + 440) == v6 ) /*0x1bd9e6*/
  {
    cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1bd9f4*/
    v7 = *(_QWORD *)(a1 + 520); /*0x1bd9fa*/
    goto LABEL_3; /*0x1bda01*/
  }
  v8 = *(_QWORD *)(a1 + 1192); /*0x1bda03*/
  if ( *(_DWORD *)(v8 + 2204) == 1 ) /*0x1bda11*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v8 + 13952) + 320LL) + 16LL))(*(_QWORD *)(v8 + 13952) + 320LL); /*0x1bda24*/
    return; /*0x1bda27*/
  }
  if ( *(_BYTE *)(a1 + 476) ) /*0x1bda2c*/
  {
    cocos2d::CCPoint::operator+(a1 + 448, v45, a1 + 456); /*0x1bda4b*/
    cocos2d::CCPoint::operator/(v9, v43); /*0x1bda63*/
    cocos2d::CCTouch::getLocationInView(a2, &v46); /*0x1bda70*/
    v10 = cocos2d::CCDirector::sharedDirector(); /*0x1bda76*/
    v11 = cocos2d::CCDirector::convertToGL(v10, v45, &v46); /*0x1bda87*/
    cocos2d::CCPoint::operator=(&v46, v11); /*0x1bda94*/
    v12 = cocos2d::CCNode::convertToWorldSpace(a1 - 320, v45, &v46); /*0x1bdaa9*/
    cocos2d::CCPoint::operator=(&v46, v12); /*0x1bdab6*/
    v13 = *(_DWORD *)(a2 + 56); /*0x1bdabc*/
    if ( v13 == *(_DWORD *)(a1 + 432) ) /*0x1bdac5*/
    {
      v14 = a1 + 448; /*0x1bdac7*/
    }
    else
    {
      if ( v13 != *(_DWORD *)(a1 + 444) ) /*0x1bdad6*/
      {
LABEL_16:
        cocos2d::CCPoint::operator+(a1 + 448, v45, a1 + 456); /*0x1bdae9*/
        cocos2d::CCPoint::operator/(v15, &v48); /*0x1bdb0b*/
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 1192) + 4360LL); /*0x1bdb18*/
        cocos2d::CCPoint::operator-(&v48, v44, v43); /*0x1bdb2b*/
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 200LL))(v16); /*0x1bdb37*/
        cocos2d::CCPoint::operator+(v17, v45, v44); /*0x1bdb48*/
        (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 184LL))(v16, v45); /*0x1bdb58*/
        v19 = cocos2d::ccpDistance((cocos2d *)(a1 + 448), (const struct cocos2d::CCPoint *)(a1 + 456), v18); /*0x1bdb6c*/
        v20 = _mm_load_si128((const __m128i *)&xmmword_831640).m128i_u32[0]; /*0x1bdb75*/
        if ( *(_BYTE *)(a1 + 477) ) /*0x1bdb85*/
        {
LABEL_20:
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v45, (const struct cocos2d::CCPoint *)&v48); /*0x1bdbfc*/
          sub_1B20D0(a1 - 320, v22, v21); /*0x1bdc17*/
          return; /*0x1bdc1c*/
        }
        if ( v19 > 1.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - *(float *)(a1 + 464)) & v20) >= *(float *)(a1 + 468) ) /*0x1bdba9*/
        {
          *(_BYTE *)(a1 + 477) = 1; /*0x1bdbab*/
          *(float *)(a1 + 464) = v19; /*0x1bdbb2*/
          goto LABEL_20; /*0x1bdbb2*/
        }
        EditorUI_constrainGameLayerPosition(a1 - 320, -100.0, -100.0); /*0x1bdc33*/
        v23 = a1 - 320; /*0x1bdc38*/
        goto LABEL_56; /*0x1bdc3f*/
      }
      v14 = a1 + 456; /*0x1bdad8*/
    }
    cocos2d::CCPoint::operator=(v14, &v46); /*0x1bdae3*/
    goto LABEL_16; /*0x1bdae3*/
  }
  if ( *(_DWORD *)(a1 + 432) == v6 ) /*0x1bdc4a*/
  {
    cocos2d::CCTouch::getLocationInView(a2, &v47); /*0x1bdc57*/
    v24 = cocos2d::CCDirector::sharedDirector(); /*0x1bdc5d*/
    v25 = cocos2d::CCDirector::convertToGL(v24, &v46, &v47); /*0x1bdc6e*/
    cocos2d::CCPoint::operator=(&v47, v25); /*0x1bdc7b*/
    v26 = cocos2d::CCNode::convertToWorldSpace(a1 - 320, &v46, &v47); /*0x1bdc93*/
    cocos2d::CCPoint::operator=(&v47, v26); /*0x1bdca0*/
    cocos2d::CCPoint::operator=(a1 + 448, &v47); /*0x1bdcb1*/
    if ( !*(_BYTE *)(a1 + 478) ) /*0x1bdcb7*/
    {
      if ( *(_BYTE *)(a1 + 593) ) /*0x1bdcc4*/
      {
        if ( *(_BYTE *)(a1 + 1265) ) /*0x1bdcd1*/
          goto LABEL_59; /*0x1bdcd1*/
        if ( fabs(cocos2d::ccpDistance((cocos2d *)&v47, (const struct cocos2d::CCPoint *)(a1 + 1200), v27)) >= 4.0 ) /*0x1bdcf9*/
          *(_BYTE *)(a1 + 1265) = 1; /*0x1bdcfb*/
        if ( *(_BYTE *)(a1 + 1265) ) /*0x1bdd02*/
        {
LABEL_59:
          v28 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(*(_QWORD *)(a1 + 1192) + 4360LL), &v46, &v47); /*0x1bdd25*/
          cocos2d::CCPoint::operator=(&v47, v28); /*0x1bdd32*/
          if ( !cocos2d::CCPoint::equals((cocos2d::CCPoint *)&v47, (const struct cocos2d::CCPoint *)(a1 + 1232)) ) /*0x1bdd43*/
          {
            if ( !*(_BYTE *)(a1 + 591) ) /*0x1bdd51*/
            {
              if ( *(_QWORD *)(a1 + 1256) ) /*0x1bdd5d*/
              {
                v29 = qword_905FD0; /*0x1bdd6b*/
                if ( !qword_905FD0 ) /*0x1bdd75*/
                {
                  v46 = operator new(0x6E8u); /*0x1bdd81*/
                  qword_905FD0 = sub_2723A0(v46); /*0x1bdd8e*/
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1bdd9f*/
                  v29 = qword_905FD0; /*0x1bdda1*/
                }
                if ( GameManager_getGameVariable(v29, "0008") ) /*0x1bddaf*/
                {
                  v30 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1256) + 360LL))(*(_QWORD *)(a1 + 1256)); /*0x1bddc2*/
                  if ( (int)v30 == 90 * ((int)v30 / 90) ) /*0x1bdde4*/
                  {
                    LOWORD(v46) = -25601; /*0x1bddf0*/
                    BYTE2(v46) = 50; /*0x1bddf4*/
                    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 1256) + 1344LL))( /*0x1bde06*/
                      *(_QWORD *)(a1 + 1256),
                      &v46);
                  }
                }
              }
              if ( !*(_BYTE *)(a1 + 591) ) /*0x1bde0c*/
              {
                v31 = sub_182B60(); /*0x1bde15*/
                sub_182FE0(v31, 104); /*0x1bde22*/
              }
            }
            *(_BYTE *)(a1 + 591) = 1; /*0x1bde27*/
            cocos2d::CCPoint::operator-(&v47, &v48, a1 + 1232); /*0x1bde3d*/
            if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 624)) ) /*0x1bde4a*/
            {
              for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 624)); ++i ) /*0x1bde5d*/
              {
                v33 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 624), i); /*0x1bde7f*/
                cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, (const struct cocos2d::CCPoint *)&v48); /*0x1bde8a*/
                EditorUI_moveObject(a1 - 320, v33, v34); /*0x1bde99*/
              }
            }
            else
            {
              v35 = *(_QWORD *)(a1 + 1248); /*0x1bdeb3*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, (const struct cocos2d::CCPoint *)&v48); /*0x1bdec2*/
              EditorUI_moveObject(a1 - 320, v35, v36); /*0x1bded1*/
            }
            cocos2d::CCPoint::operator=(a1 + 1232, &v47); /*0x1bdee1*/
            cocos2d::CCPoint::operator+(a1 + 496, &v46, &v48); /*0x1bdef6*/
            cocos2d::CCPoint::operator=(a1 + 496, &v46); /*0x1bdf07*/
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 344LL))(*(_QWORD *)(a1 + 488)) ) /*0x1bdf17*/
            {
              v37 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 200LL))(*(_QWORD *)(a1 + 488)); /*0x1bdf2b*/
              cocos2d::CCPoint::operator+(v37, &v46, &v48); /*0x1bdf3c*/
              (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 488) + 184LL))(*(_QWORD *)(a1 + 488), &v46); /*0x1bdf50*/
              cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1bdf5e*/
              return; /*0x1bdf64*/
            }
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 512) + 344LL))(*(_QWORD *)(a1 + 512)) ) /*0x1bdf73*/
            {
              v38 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 512) + 200LL))(*(_QWORD *)(a1 + 512)); /*0x1bdf87*/
              cocos2d::CCPoint::operator+(v38, &v46, &v48); /*0x1bdf98*/
              (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 512) + 184LL))(*(_QWORD *)(a1 + 512), &v46); /*0x1bdfac*/
              cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1bdfba*/
              return; /*0x1bdfc0*/
            }
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 344LL))(*(_QWORD *)(a1 + 520)) ) /*0x1bdfcf*/
            {
              v39 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 200LL))(*(_QWORD *)(a1 + 520)); /*0x1bdfe3*/
              cocos2d::CCPoint::operator+(v39, &v46, &v48); /*0x1bdff4*/
              (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 520) + 184LL))(*(_QWORD *)(a1 + 520), &v46); /*0x1be008*/
              sub_1A2C30(*(_QWORD *)(a1 + 520)); /*0x1be015*/
            }
          }
        }
        cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1be022*/
      }
      else
      {
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, (const struct cocos2d::CCPoint *)&v47); /*0x1be035*/
        if ( (unsigned __int8)sub_1BD210(a1 - 320, v40) ) /*0x1be041*/
          return; /*0x1be048*/
        if ( *(_BYTE *)(a1 + 1264) ) /*0x1be052*/
        {
          cocos2d::CCPoint::operator-(&v47, &v46, a1 + 1232); /*0x1be0b1*/
          v42 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 1192) /*0x1be0c8*/
                                                                                                 + 4360LL)
                                                                                   + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 1192) + 4360LL));
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v42); /*0x1be0d5*/
          cocos2d::CCPoint::operator+(&v48, v45, &v46); /*0x1be0e7*/
          (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(*(_QWORD *)(a1 + 1192) + 4360LL) + 184LL))( /*0x1be102*/
            *(_QWORD *)(*(_QWORD *)(a1 + 1192) + 4360LL),
            v45);
          EditorUI_constrainGameLayerPosition(a1 - 320, -100.0, -100.0); /*0x1be116*/
          cocos2d::CCPoint::operator=(a1 + 1232, &v47); /*0x1be126*/
          v23 = a1 - 320; /*0x1be12c*/
LABEL_56:
          EditorUI_updateSlider(v23); /*0x1be12f*/
          return; /*0x1be12f*/
        }
        if ( fabs(cocos2d::ccpDistance((cocos2d *)&v47, (const struct cocos2d::CCPoint *)(a1 + 1200), v41)) >= 20.0 ) /*0x1be075*/
        {
          cocos2d::CCPoint::operator=(a1 + 1232, &v47); /*0x1be086*/
          *(_BYTE *)(a1 + 1264) = 1; /*0x1be08c*/
          cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a1 - 320), 123); /*0x1be09b*/
        }
      }
    }
  }
}

// [56/110] Address: 0x1bee60
// Method: EditorUI::keyBackClicked
__int64 __fastcall EditorUI_keyBackClicked(__int64 a1)
{
  return sub_1AA110(a1 - 336, 0);
}

// [57/110] Address: 0x1bee70
// Method: EditorUI::keyDown
void __fastcall EditorUI_keyDown(_QWORD **a1, int a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  _BYTE *v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rax

  if ( a2 == 27 ) /*0x1bee84*/
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1[61] + 344LL))(a1[61]) /*0x1beedb*/
      && ((v3 = a1[61], (v4 = v3[61]) != 0) && *(_BYTE *)(v4 + 468)
       || (v5 = v3[62]) != 0 && *(_BYTE *)(v5 + 468)
       || (v6 = v3[63]) != 0 && *(_BYTE *)(v6 + 468)) )
    {
      sub_1A22B0(); /*0x1beeee*/
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1[58] + 344LL))(a1[58]) /*0x1bef1a*/
           && (v8 = (_BYTE *)a1[58][58]) != 0
           && v8[468] )
    {
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v8 + 1032LL))(v8, 0); /*0x1bef32*/
    }
    else
    {
      LOBYTE(v7) = 1; /*0x1bef3f*/
      ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[2])(a1, 20067, v7); /*0x1bef54*/
    }
  }
  else if ( a2 == 13 /*0x1bef78*/
         && (!(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1[61] + 344LL))(a1[61])
          || !(unsigned __int8)sub_1A2310(a1[61])) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1[58] + 344LL))(a1[58]) ) /*0x1bef8b*/
    {
      v9 = a1[58]; /*0x1bef95*/
      v10 = v9[58]; /*0x1bef9c*/
      if ( v10 ) /*0x1befa6*/
      {
        if ( *(_BYTE *)(v10 + 468) ) /*0x1befa8*/
          sub_19FEF0(v9, 0); /*0x1befb3*/
      }
    }
  }
}

// [58/110] Address: 0x1befd0
// Method: EditorUI::handleAction
char __fastcall EditorUI_handleAction(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx

  if ( a3 ) /*0x1beff3*/
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 344LL))(*(_QWORD *)(a1 + 488)) /*0x1bf014*/
      && (unsigned __int8)sub_1A2310(*(_QWORD *)(a1 + 488)) )
    {
      return 1; /*0x1bf01b*/
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 344LL))(*(_QWORD *)(a1 + 464)) ) /*0x1bf02b*/
    {
      v6 = *(_QWORD *)(a1 + 464); /*0x1bf035*/
      v7 = *(_QWORD *)(v6 + 464); /*0x1bf03c*/
      if ( v7 ) /*0x1bf046*/
      {
        if ( *(_BYTE *)(v7 + 468) ) /*0x1bf048*/
        {
          sub_19FEF0(v6, 0); /*0x1bf053*/
          return 1; /*0x1bf1d9*/
        }
      }
    }
    v8 = cocos2d::CCDirector::sharedDirector(); /*0x1bf05d*/
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 176LL))(v8) + 157) ) /*0x1bf072*/
    {
      switch ( a2 ) /*0x1bf0a7*/
      {
        case 0x4E21u: /*0x1bf0a7*/
        case 0x4E22u: /*0x1bf0a7*/
        case 0x4E3Fu: /*0x1bf0a7*/
        case 0x4E40u: /*0x1bf0a7*/
        case 0x4E41u: /*0x1bf0a7*/
        case 0x4E42u: /*0x1bf0a7*/
        case 0x4E49u: /*0x1bf0a7*/
        case 0x4E4Au: /*0x1bf0a7*/
        case 0x4E4Bu: /*0x1bf0a7*/
        case 0x4E4Cu: /*0x1bf0a7*/
        case 0x4E4Du: /*0x1bf0a7*/
        case 0x4E4Eu: /*0x1bf0a7*/
        case 0x4E4Fu: /*0x1bf0a7*/
        case 0x4E50u: /*0x1bf0a7*/
        case 0x4E5Fu: /*0x1bf0a7*/
        case 0x4E60u: /*0x1bf0a7*/
        case 0x4E61u: /*0x1bf0a7*/
        case 0x4E62u: /*0x1bf0a7*/
        case 0x4E7Fu: /*0x1bf0a7*/
        case 0x4E80u: /*0x1bf0a7*/
        case 0x4E81u: /*0x1bf0a7*/
        case 0x4E82u: /*0x1bf0a7*/
        case 0x4E83u: /*0x1bf0a7*/
        case 0x4E84u: /*0x1bf0a7*/
        case 0x4E85u: /*0x1bf0a7*/
        case 0x4E86u: /*0x1bf0a7*/
        case 0x4E87u: /*0x1bf0a7*/
        case 0x4E88u: /*0x1bf0a7*/
        case 0x4E89u: /*0x1bf0a7*/
        case 0x4E8Au: /*0x1bf0a7*/
        case 0x4E8Bu: /*0x1bf0a7*/
        case 0x4E8Cu: /*0x1bf0a7*/
        case 0x4E8Du: /*0x1bf0a7*/
        case 0x4E8Eu: /*0x1bf0a7*/
        case 0x4E92u: /*0x1bf0a7*/
        case 0x4E93u: /*0x1bf0a7*/
        case 0x4ECEu: /*0x1bf0a7*/
        case 0x4ECFu: /*0x1bf0a7*/
        case 0x4ED0u: /*0x1bf0a7*/
        case 0x4ED1u: /*0x1bf0a7*/
        case 0x4ED2u: /*0x1bf0a7*/
        case 0x4ED3u: /*0x1bf0a7*/
        case 0x4ED4u: /*0x1bf0a7*/
        case 0x4ED5u: /*0x1bf0a7*/
          break;
        default:
          return 1;
      }
    }
  }
  switch ( a2 ) /*0x1bf0b1*/
  {
    case 0x4E63u: /*0x1bf0b1*/
      if ( a3 ) /*0x1bf1c9*/
        sub_1AA110(a1 - 344, 0); /*0x1bf1d4*/
      return 1; /*0x1bf1d4*/
    case 0x4E64u: /*0x1bf0b1*/
      if ( a3 ) /*0x1bf14f*/
      {
        v12 = *(_QWORD *)(a1 + 1168); /*0x1bf155*/
        v13 = a1 - 344; /*0x1bf15c*/
        if ( *(_DWORD *)(v12 + 2204) ) /*0x1bf163*/
        {
          v14 = sub_182B60(a2 - 20068); /*0x1bf181*/
          sub_182FE0(v14, 211); /*0x1bf18e*/
          LOBYTE(v15) = 1; /*0x1bf193*/
          LevelInfoLayer_create(v13, v15); /*0x1bf198*/
          if ( *(_BYTE *)(v13 + 664) ) /*0x1bf19d*/
            sub_1B15D0(v13, 0); /*0x1bf1ab*/
          LevelEditorLayer_onStopPlaytest(*(_QWORD *)(v13 + 1512)); /*0x1bf1b7*/
          EditorUI_playtestStopped(v13, v16); /*0x1bf1bf*/
        }
        else if ( *(_DWORD *)(v13 + 752) == -1 ) /*0x1bf173*/
        {
          EditorUI_onPlaytest(v13, 0); /*0x1bf17a*/
        }
      }
      return 1; /*0x1bf17f*/
    case 0x4E65u: /*0x1bf0b1*/
      *(_BYTE *)(a1 + 392) = a3; /*0x1bf102*/
      break;
    case 0x4E77u: /*0x1bf0b1*/
      if ( a3 ) /*0x1bf0cd*/
      {
        v9 = *(_DWORD *)(*(_QWORD *)(a1 + 1168) + 2204LL); /*0x1bf0da*/
        if ( v9 == 1 ) /*0x1bf0e3*/
        {
          sub_3FBDD0(); /*0x1bf0e5*/
        }
        else if ( v9 == 2 ) /*0x1bf0f2*/
        {
          sub_3FBF80(); /*0x1bf0f8*/
        }
      }
      return 1; /*0x1bf0ea*/
  }
  v10 = *(_QWORD *)(a1 + 1168); /*0x1bf109*/
  if ( *(_DWORD *)(v10 + 2204) == 1 ) /*0x1bf127*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 13952) + 544LL) + 16LL))( /*0x1bf13a*/
             *(_QWORD *)(v10 + 13952) + 544LL,
             a2,
             a3);
  else
    return sub_1BF650(a1 - 344, a2, a3); /*0x1bf142*/
}

// [59/110] Address: 0x1c22d0
// Method: EditorUI::scrollWheel
// Hidden C++ exception states: #wind=1
char __fastcall EditorUI_scrollWheel(__int64 a1, float a2, float a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  float v8; // xmm0_4
  __int64 v9; // rax
  float v10; // xmm1_4
  void *v11; // [rsp+50h] [rbp+8h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1160) + 2204LL) == 1 ) /*0x1c22f7*/
    return 0; /*0x1c22f9*/
  v6 = cocos2d::CCDirector::sharedDirector(); /*0x1c230b*/
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) + 153) ) /*0x1c2320*/
  {
    if ( a2 > 0.0 || a3 > 0.0 ) /*0x1c2338*/
    {
      v7 = a1 - 352; /*0x1c2366*/
      v8 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v7 + 1512) + 4360LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(v7 + 1512) + 4360LL)) /*0x1c238c*/
         - 0.1;
    }
    else
    {
      v7 = a1 - 352; /*0x1c233a*/
      v8 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v7 + 1512) + 4360LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(v7 + 1512) + 4360LL)) /*0x1c2360*/
         + 0.1;
    }
    fmaxf(fminf(roundf((float)(v8 / 0.1) + 0.001) * 0.1, 10.0), 0.1); /*0x1c23ae*/
    sub_1B2060(v7); /*0x1c23b8*/
    return 1; /*0x1c23bd*/
  }
  else
  {
    v9 = qword_905FD0; /*0x1c23cf*/
    if ( !qword_905FD0 ) /*0x1c23d9*/
    {
      v11 = operator new(0x6E8u); /*0x1c23e5*/
      qword_905FD0 = sub_2723A0(v11); /*0x1c23f3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1c2404*/
      v9 = qword_905FD0; /*0x1c2406*/
    }
    v10 = *(float *)(v9 + 1140); /*0x1c240d*/
    *(float *)(a1 + 1356) = (float)(v10 * a3) + *(float *)(a1 + 1356); /*0x1c2424*/
    *(float *)(a1 + 1360) = (float)(v10 * a2) + *(float *)(a1 + 1360); /*0x1c2438*/
    if ( !*(_BYTE *)(a1 + 1364) ) /*0x1c2440*/
    {
      cocos2d::CCNode::schedule(a1 - 352, sub_1C2480); /*0x1c2457*/
      *(_BYTE *)(a1 + 1364) = 1; /*0x1c245d*/
    }
    return 1; /*0x1c2464*/
  }
}

// [60/110] Address: 0x1c2ec0
// Method: EditorUI::doCopyObjects
// Hidden C++ exception states: #wind=3
int __fastcall EditorUI_doCopyObjects(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  void *v11; // [rsp+30h] [rbp-38h]
  void *v12; // [rsp+30h] [rbp-38h]
  _BYTE v13[32]; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 1568) || (LODWORD(v4) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)), (_DWORD)v4) ) /*0x1c2efd*/
  {
    v4 = *(_QWORD *)(a1 + 1568); /*0x1c2f03*/
    if ( !v4 || *(_DWORD *)(v4 + 1036) != 749 ) /*0x1c2f19*/
    {
      if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1c2f26*/
      {
        v6 = *(cocos2d::CCArray **)(a1 + 944); /*0x1c2f4b*/
      }
      else
      {
        v6 = (cocos2d::CCArray *)cocos2d::CCArray::create(v5); /*0x1c2f36*/
        cocos2d::CCArray::addObject(v6, *(struct cocos2d::CCObject **)(a1 + 1568)); /*0x1c2f43*/
      }
      v7 = sub_1C2920(a1, v13, v6, a2, 0); /*0x1c2f6b*/
      v8 = qword_905FD0; /*0x1c2f6e*/
      if ( !qword_905FD0 ) /*0x1c2f78*/
      {
        v11 = operator new(0x6E8u); /*0x1c2f84*/
        qword_905FD0 = sub_2723A0(v11); /*0x1c2f92*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1c2fa3*/
        v8 = qword_905FD0; /*0x1c2fa5*/
      }
      sub_58AD0(v8 + 520, v7); /*0x1c2fb6*/
      sub_3C310(v13); /*0x1c2fc1*/
      v9 = qword_905FD0; /*0x1c2fc6*/
      if ( !qword_905FD0 ) /*0x1c2fd0*/
      {
        v12 = operator new(0x6E8u); /*0x1c2fdc*/
        qword_905FD0 = sub_2723A0(v12); /*0x1c2fea*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1c2ff7*/
        v9 = qword_905FD0; /*0x1c2ffa*/
      }
      *(_DWORD *)(v9 + 552) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1c300e*/
      LODWORD(v4) = EditorUI_updateButtons(a1); /*0x1c3017*/
    }
  }
  return v4; /*0x1c301c*/
}

// [61/110] Address: 0x1c3320
// Method: EditorUI::pasteObjects
// Hidden C++ exception states: #wind=11
cocos2d::CCArray *__fastcall EditorUI_pasteObjects(__int64 a1, cocos2d::CCObject **a2, char a3, char a4)
{
  cocos2d::CCObject **v5; // r12
  __int64 v6; // r13
  cocos2d::CCObject *v7; // rdi
  cocos2d::CCObject *v8; // rax
  char *v9; // rbx
  __int64 v10; // rax
  size_t *v11; // rbx
  void *v12; // rdx
  size_t *v13; // rdi
  size_t *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 i; // rbx
  cocos2d::CCArray *v22; // rcx
  cocos2d::CCArray *v23; // r15
  void *v24; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r12
  bool j; // zf
  const char *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned int NextColorChannel; // eax
  unsigned int v33; // edi
  __int64 v34; // rax
  void *v35; // r14
  char *v36; // rdi
  signed __int64 v37; // rdi
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // r12
  char *v44; // rsi
  const void *v45; // rdx
  char *v46; // rcx
  char *v47; // r8
  void *v48; // rcx
  char *v49; // rbx
  __int64 v50; // r9
  __int64 v51; // rsi
  int v52; // edx
  __int64 v53; // rcx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // rsi
  __int64 *v57; // r14
  __int64 v58; // rdi
  int *v59; // rbx
  int v60; // edx
  __int64 v61; // rcx
  int v62; // eax
  int *v63; // rbx
  int v64; // edx
  __int64 v65; // rcx
  int v66; // eax
  int v67; // eax
  int v68; // edx
  __int64 v69; // rcx
  int v70; // edx
  __int64 v71; // rcx
  int *v72; // r8
  char *v73; // rdx
  int v74; // edx
  __int64 v75; // rcx
  int v76; // edx
  __int64 v77; // rcx
  void *v78; // rcx
  cocos2d::CCObject **v79; // rdi
  __int64 v80; // rcx
  cocos2d::CCArray *v81; // rax
  __int64 v82; // rsi
  unsigned int v83; // ebx
  struct cocos2d::CCObject *v84; // rax
  __int64 v85; // rcx
  unsigned int v86; // edi
  struct cocos2d::CCObject *v87; // rbx
  void *v88; // rcx
  __int16 v89; // [rsp+30h] [rbp-D0h] BYREF
  char v90; // [rsp+32h] [rbp-CEh]
  char v91; // [rsp+40h] [rbp-C0h]
  int v92; // [rsp+48h] [rbp-B8h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-B0h] BYREF
  char *v94; // [rsp+60h] [rbp-A0h]
  int v95; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v96; // [rsp+78h] [rbp-88h] BYREF
  __int64 v97; // [rsp+80h] [rbp-80h]
  __int64 v98; // [rsp+88h] [rbp-78h] BYREF
  __int128 v99; // [rsp+90h] [rbp-70h]
  __int64 v100; // [rsp+A0h] [rbp-60h]
  __int64 v101; // [rsp+A8h] [rbp-58h]
  __int64 v102; // [rsp+B0h] [rbp-50h]
  unsigned int v103; // [rsp+B8h] [rbp-48h] BYREF
  int v104; // [rsp+BCh] [rbp-44h] BYREF
  __int64 v105; // [rsp+C0h] [rbp-40h]
  cocos2d::CCArray *v106; // [rsp+C8h] [rbp-38h]
  cocos2d::CCObject **v107; // [rsp+D0h] [rbp-30h]
  __int128 v108; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v109; // [rsp+E8h] [rbp-18h]
  __int128 v110; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v111; // [rsp+100h] [rbp+0h]
  __int64 v112; // [rsp+108h] [rbp+8h] BYREF
  char v113[16]; // [rsp+118h] [rbp+18h] BYREF
  char v114[16]; // [rsp+128h] [rbp+28h] BYREF
  char v115[16]; // [rsp+138h] [rbp+38h] BYREF
  char v116[16]; // [rsp+148h] [rbp+48h] BYREF
  char v117[16]; // [rsp+158h] [rbp+58h] BYREF
  char v118; // [rsp+168h] [rbp+68h] BYREF
  char v119[16]; // [rsp+178h] [rbp+78h] BYREF
  char v120; // [rsp+188h] [rbp+88h] BYREF
  char v121[32]; // [rsp+198h] [rbp+98h] BYREF
  cocos2d::CCObject **v122; // [rsp+1B8h] [rbp+B8h]
  void *v123[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v124; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v125; // [rsp+1D8h] [rbp+D8h]

  v91 = a4; /*0x1c3358*/
  v5 = a2; /*0x1c3361*/
  v107 = a2; /*0x1c3364*/
  v6 = a1; /*0x1c3368*/
  v105 = a1; /*0x1c336b*/
  v122 = a2; /*0x1c336f*/
  *(_OWORD *)v123 = 0; /*0x1c3379*/
  v124 = 0; /*0x1c3382*/
  v125 = 15; /*0x1c3389*/
  LOBYTE(v123[0]) = 0; /*0x1c3394*/
  if ( a3 ) /*0x1c339d*/
  {
    v7 = (cocos2d::CCObject *)a2; /*0x1c33a3*/
    if ( (unsigned __int64)a2[3] > 0xF ) /*0x1c33ab*/
      v7 = *a2; /*0x1c33ad*/
    v8 = a2[2]; /*0x1c33b0*/
    if ( v8 ) /*0x1c33b8*/
    {
      v9 = (char *)v7 + (_QWORD)v8; /*0x1c33be*/
      v10 = sub_672690(v7, (char *)v7 + (_QWORD)v8, &unk_74CF9C, 1); /*0x1c33d5*/
      if ( (char *)v10 != v9 && v10 - (_QWORD)v7 != -1 ) /*0x1c33ea*/
      {
        *(_OWORD *)Block = 0; /*0x1c33f3*/
        v94 = 0; /*0x1c33fb*/
        sub_1C2580(v5, &unk_74CF9C, Block); /*0x1c340f*/
        v11 = (size_t *)Block[0]; /*0x1c3419*/
        if ( (unsigned __int64)(((char *)Block[1] - (char *)Block[0]) >> 5) > 1 ) /*0x1c3429*/
        {
          if ( v5 != Block[0] ) /*0x1c342e*/
          {
            if ( *((_QWORD *)Block[0] + 3) > 0xFu ) /*0x1c3438*/
              v11 = *(size_t **)Block[0]; /*0x1c343a*/
            sub_3F5A0(v5, v11, *((_QWORD *)Block[0] + 2)); /*0x1c3447*/
            v11 = (size_t *)Block[0]; /*0x1c344c*/
          }
          if ( v123 != (void **)(v11 + 4) ) /*0x1c345f*/
          {
            v12 = v11 + 4; /*0x1c3461*/
            if ( v11[7] > 0xF ) /*0x1c3469*/
              v12 = (void *)v11[4]; /*0x1c346b*/
            sub_3F5A0(v123, v12, v11[6]); /*0x1c3479*/
            v11 = (size_t *)Block[0]; /*0x1c347e*/
          }
        }
        if ( v11 ) /*0x1c3486*/
        {
          v13 = (size_t *)Block[1]; /*0x1c3488*/
          if ( v11 != Block[1] ) /*0x1c3490*/
          {
            do /*0x1c34a1*/
            {
              sub_3C310(v11); /*0x1c3495*/
              v11 += 4; /*0x1c349a*/
            }
            while ( v11 != v13 ); /*0x1c34a1*/
            v11 = (size_t *)Block[0]; /*0x1c34a3*/
          }
          v14 = v11; /*0x1c34b4*/
          if ( ((v94 - (char *)v11) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 ) /*0x1c34be*/
          {
            v11 = (size_t *)*(v11 - 1); /*0x1c34c4*/
            if ( (unsigned __int64)((char *)v14 - (char *)v11 - 8) > 0x1F ) /*0x1c34d3*/
              invoke_watson(0, 0, 0, 0, 0); /*0x1c34e4*/
          }
          j_j_free(v11); /*0x1c34ee*/
        }
      }
    }
  }
  v15 = sub_3F0900(*(_QWORD *)(v6 + 1512), v5); /*0x1c34fd*/
  if ( v15 != -1 ) /*0x1c3505*/
  {
    sub_1BF4A0(v6, v15); /*0x1c350c*/
LABEL_35:
    if ( v125 <= 0xF ) /*0x1c35da*/
    {
LABEL_39:
      v124 = 0; /*0x1c3610*/
      v125 = 15; /*0x1c3619*/
      LOBYTE(v123[0]) = 0; /*0x1c3624*/
      sub_3C310(v5); /*0x1c362d*/
      return 0; /*0x1c3634*/
    }
    v24 = v123[0]; /*0x1c35df*/
    if ( v125 + 1 < 0x1000 /*0x1c3605*/
      || (v24 = (void *)*((_QWORD *)v123[0] - 1), (unsigned __int64)((char *)v123[0] - (char *)v24 - 8) <= 0x1F) )
    {
      j_j_free(v24); /*0x1c360b*/
      goto LABEL_39; /*0x1c360b*/
    }
LABEL_184:
    invoke_watson(0, 0, 0, 0, 0); /*0x1c41c4*/
  }
  v16 = *(_QWORD *)(v6 + 1512); /*0x1c3516*/
  v17 = v16 + 4056; /*0x1c351d*/
  sub_3DB60(v16 + 4056); /*0x1c3527*/
  v19 = *(_QWORD *)(v16 + 4032); /*0x1c352c*/
  if ( v19 ) /*0x1c3536*/
  {
    v20 = *(_QWORD *)(v19 + 56); /*0x1c3538*/
    if ( v20 ) /*0x1c353f*/
    {
      for ( i = *(_QWORD *)(v20 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x1c3541*/
      {
        v22 = *(cocos2d::CCArray **)(v20 + 264); /*0x1c3550*/
        if ( v22 && cocos2d::CCArray::count(v22) ) /*0x1c355c*/
        {
          v92 = *(_DWORD *)(v20 + 256); /*0x1c356c*/
          sub_67020(v17, &v112, &v92); /*0x1c357c*/
        }
        v20 = i; /*0x1c3581*/
        if ( !i ) /*0x1c3587*/
          break; /*0x1c3587*/
      }
    }
  }
  v23 = (cocos2d::CCArray *)sub_3EC650( /*0x1c35b0*/
                              *(_QWORD *)(v6 + 1512),
                              v5,
                              v18,
                              *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 1512) + 2168LL) + 1297LL));
  v106 = v23; /*0x1c35b3*/
  sub_3DB60(*(_QWORD *)(v6 + 1512) + 4056LL); /*0x1c35c5*/
  if ( !v23 ) /*0x1c35cd*/
    goto LABEL_35; /*0x1c35cd*/
  *(_DWORD *)(*(_QWORD *)(v6 + 1512) + 15476LL) += cocos2d::CCArray::count(v23); /*0x1c3649*/
  if ( a3 && v124 ) /*0x1c3660*/
  {
    v95 = 0; /*0x1c3666*/
    v96 = 0; /*0x1c3671*/
    v97 = 0; /*0x1c3676*/
    v26 = operator new(0x18u); /*0x1c367f*/
    *v26 = v26; /*0x1c3684*/
    v26[1] = v26; /*0x1c3687*/
    v96 = v26; /*0x1c368b*/
    v98 = 0; /*0x1c3690*/
    v99 = 0; /*0x1c3697*/
    v100 = 7; /*0x1c369c*/
    v101 = 8; /*0x1c36a4*/
    v95 = 1065353216; /*0x1c36b4*/
    sub_3E200(&v98, 16, v26); /*0x1c36c8*/
    *(_OWORD *)Block = 0; /*0x1c36d1*/
    v94 = 0; /*0x1c36d7*/
    v110 = 0; /*0x1c36dc*/
    v111 = 0; /*0x1c36e1*/
    sub_1C2580(v123, &word_70806C, &v110); /*0x1c36f7*/
    v112 = *((_QWORD *)&v110 + 1); /*0x1c3704*/
    v27 = v110; /*0x1c3704*/
    for ( j = (_QWORD)v110 == *((_QWORD *)&v110 + 1); ; j = v27 == v112 ) /*0x1c3708*/
    {
      v102 = v27; /*0x1c370b*/
      if ( j ) /*0x1c370f*/
      {
        sub_74F50(&v110); /*0x1c3f3f*/
        v78 = Block[0]; /*0x1c3f45*/
        if ( Block[0] ) /*0x1c3f4d*/
        {
          if ( ((v94 - (char *)Block[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x1c3f65*/
          {
            v78 = (void *)*((_QWORD *)Block[0] - 1); /*0x1c3f6b*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v78 - 8) > 0x1F ) /*0x1c3f7a*/
              invoke_watson(0, 0, 0, 0, 0); /*0x1c3f8b*/
          }
          j_j_free(v78); /*0x1c3f92*/
          *(_OWORD *)Block = 0; /*0x1c3f9a*/
          v94 = 0; /*0x1c3fa0*/
        }
        sub_3DA90(&v98); /*0x1c3fa9*/
        sub_3DB00(&v96); /*0x1c3fb3*/
        v5 = v107; /*0x1c3fb8*/
        goto LABEL_167; /*0x1c3fb8*/
      }
      v108 = 0; /*0x1c3722*/
      v109 = 0; /*0x1c3727*/
      sub_1C2580(v27, &unk_709CE8, &v108); /*0x1c3739*/
      v29 = (const char *)v108; /*0x1c3742*/
      if ( (unsigned __int64)((__int64)(*((_QWORD *)&v108 + 1) - v108) >> 5) <= 1 ) /*0x1c3751*/
        break; /*0x1c3751*/
      if ( *(_QWORD *)(v108 + 24) > 0xFu ) /*0x1c375c*/
        v29 = *(const char **)v108; /*0x1c375e*/
      v103 = atoi(v29); /*0x1c3767*/
      v30 = sub_3624A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1512) + 3592LL) + 320LL), v103); /*0x1c3781*/
      v31 = v30; /*0x1c3786*/
      v89 = *(_WORD *)(v30 + 72); /*0x1c378d*/
      if ( v89 != -1 /*0x1c37be*/
        || *(_BYTE *)(v30 + 74) != 0xFF
        || *(float *)(v30 + 96) != 1.0
        || *(_DWORD *)(v30 + 120)
        || *(_BYTE *)(v30 + 84)
        || *(int *)(v30 + 88) > 0 )
      {
        NextColorChannel = LevelEditorLayer_getNextColorChannel(*(_QWORD **)(v6 + 1512)); /*0x1c37c7*/
        v33 = NextColorChannel; /*0x1c37cc*/
        if ( NextColorChannel - 1 > 0x3E6 ) /*0x1c37d7*/
          break; /*0x1c37d7*/
        v31 = sub_3624A0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1512) + 3592LL) + 320LL), NextColorChannel); /*0x1c37f9*/
        *(_DWORD *)(*(_QWORD *)sub_66DF0(&v95, v113, &v103) + 20LL) = v33; /*0x1c3811*/
      }
      if ( !v31 ) /*0x1c3817*/
        break; /*0x1c3817*/
      v34 = sub_3E4F0(v121, v108 + 32); /*0x1c382c*/
      ColorAction_setupFromString(v31, v34); /*0x1c3837*/
      v35 = Block[1]; /*0x1c383c*/
      if ( Block[1] == v94 ) /*0x1c3849*/
      {
        v37 = ((char *)Block[1] - (char *)Block[0]) >> 3; /*0x1c386f*/
        if ( v37 == 0x1FFFFFFFFFFFFFFFLL ) /*0x1c3876*/
          sub_59000(); /*0x1c4237*/
        v38 = v37 + 1; /*0x1c387c*/
        v39 = (v94 - (char *)Block[0]) >> 3; /*0x1c3883*/
        v40 = v39 >> 1; /*0x1c388a*/
        if ( v39 <= 0x1FFFFFFFFFFFFFFFLL - (v39 >> 1) ) /*0x1c3896*/
        {
          v42 = v40 + v39; /*0x1c389d*/
          v41 = v37 + 1; /*0x1c38a1*/
          if ( v42 >= v38 ) /*0x1c38a7*/
            v41 = v42; /*0x1c38a7*/
          if ( v41 > 0x1FFFFFFFFFFFFFFFLL ) /*0x1c38ae*/
            sub_8CF0(v41, v40); /*0x1c423d*/
        }
        else
        {
          v41 = 0x1FFFFFFFFFFFFFFFLL; /*0x1c3898*/
        }
        v43 = 8 * v41; /*0x1c38b4*/
        v44 = (char *)sub_3C460(8 * v41); /*0x1c38c4*/
        *(_QWORD *)&v44[8 * v37] = v31; /*0x1c38c7*/
        v45 = Block[0]; /*0x1c38d0*/
        v46 = v44; /*0x1c38d5*/
        if ( v35 == Block[1] ) /*0x1c38db*/
        {
          v47 = (char *)((char *)Block[1] - (char *)Block[0]); /*0x1c38dd*/
        }
        else
        {
          memmove(v44, Block[0], (size_t)v35 - (unsigned __int64)Block[0]); /*0x1c38e8*/
          v47 = (char *)((char *)Block[1] - (char *)v35); /*0x1c38f2*/
          v46 = &v44[8 * v37 + 8]; /*0x1c38f9*/
          v45 = v35; /*0x1c38fd*/
        }
        memmove(v46, v45, (size_t)v47); /*0x1c3900*/
        v48 = Block[0]; /*0x1c3905*/
        if ( Block[0] ) /*0x1c390d*/
        {
          if ( ((v94 - (char *)Block[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x1c3925*/
          {
            v48 = (void *)*((_QWORD *)Block[0] - 1); /*0x1c392b*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v48 - 8) > 0x1F ) /*0x1c393a*/
              invoke_watson(0, 0, 0, 0, 0); /*0x1c3f34*/
          }
          j_j_free(v48); /*0x1c3940*/
        }
        Block[0] = v44; /*0x1c3945*/
        v36 = &v44[8 * v38]; /*0x1c394a*/
        Block[1] = v36; /*0x1c394e*/
        v94 = &v44[v43]; /*0x1c3957*/
        v23 = v106; /*0x1c395c*/
        v27 = v102; /*0x1c3960*/
      }
      else
      {
        *(_QWORD *)Block[1] = v31; /*0x1c384b*/
        v36 = (char *)Block[1] + 8; /*0x1c3853*/
        Block[1] = (char *)Block[1] + 8; /*0x1c3857*/
      }
LABEL_73:
      if ( !v97 ) /*0x1c3973*/
        goto LABEL_159; /*0x1c3973*/
      v49 = (char *)Block[0]; /*0x1c3979*/
      v50 = v98; /*0x1c397e*/
      if ( Block[0] != v36 ) /*0x1c3985*/
      {
        while ( 1 ) /*0x1c39a0*/
        {
          v51 = *(_QWORD *)v49; /*0x1c39a0*/
          v52 = *(_DWORD *)(*(_QWORD *)v49 + 120LL); /*0x1c39a3*/
          v92 = v52; /*0x1c39a6*/
          if ( (unsigned int)(v52 - 1) <= 0x3E6 ) /*0x1c39b2*/
            break; /*0x1c39b2*/
LABEL_84:
          v49 += 8; /*0x1c3a4a*/
          if ( v49 == v36 ) /*0x1c3a51*/
          {
            v6 = v105; /*0x1c3a57*/
            v27 = v102; /*0x1c3a5b*/
            goto LABEL_86; /*0x1c3a5b*/
          }
        }
        v53 = *(_QWORD *)(v50 /*0x1c39fa*/
                        + 16
                        * (v100
                         & (0x100000001B3LL
                          * (HIBYTE(v52)
                           ^ (0x100000001B3LL
                            * (BYTE2(v52)
                             ^ (0x100000001B3LL
                              * ((0x100000001B3LL * ((unsigned __int8)v52 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v52))))))))
                        + 8);
        if ( (_QWORD *)v53 != v96 ) /*0x1c3a04*/
        {
          if ( v52 == *(_DWORD *)(v53 + 16) ) /*0x1c3a10*/
            goto LABEL_82; /*0x1c3a10*/
          while ( v53 != *(_QWORD *)(v50 /*0x1c3a15*/
                                   + 16
                                   * (v100
                                    & (0x100000001B3LL
                                     * (HIBYTE(v52)
                                      ^ (0x100000001B3LL
                                       * (BYTE2(v52)
                                        ^ (0x100000001B3LL
                                         * ((0x100000001B3LL * ((unsigned __int8)v52 ^ 0xCBF29CE484222325uLL))
                                          ^ BYTE1(v52))))))))) )
          {
            v53 = *(_QWORD *)(v53 + 8); /*0x1c3a17*/
            if ( v52 == *(_DWORD *)(v53 + 16) ) /*0x1c3a1e*/
              goto LABEL_82; /*0x1c3a1e*/
          }
        }
        v53 = 0; /*0x1c3a22*/
LABEL_82:
        if ( v53 ) /*0x1c3a28*/
        {
          *(_DWORD *)(v51 + 120) = *(_DWORD *)(*(_QWORD *)sub_66DF0(&v95, v114, &v92) + 20LL); /*0x1c3a43*/
          v50 = v98; /*0x1c3a46*/
        }
        goto LABEL_84; /*0x1c3a46*/
      }
LABEL_86:
      v54 = (unsigned int *)*((_QWORD *)v23 + 7); /*0x1c3a5f*/
      v55 = *v54; /*0x1c3a63*/
      if ( (_DWORD)v55 ) /*0x1c3a67*/
      {
        v56 = (__int64 *)*((_QWORD *)v54 + 2); /*0x1c3a6d*/
        v57 = &v56[v55 - 1]; /*0x1c3a75*/
        if ( v56 <= v57 ) /*0x1c3a7c*/
        {
          while ( 1 ) /*0x1c3aa0*/
          {
            v58 = *v56; /*0x1c3aa0*/
            if ( !*v56 ) /*0x1c3aa6*/
            {
LABEL_158:
              v6 = v105; /*0x1c3efe*/
              v23 = v106; /*0x1c3f02*/
              v27 = v102; /*0x1c3f06*/
              goto LABEL_159; /*0x1c3f06*/
            }
            v59 = *(int **)(v58 + 1104); /*0x1c3aac*/
            if ( v59 ) /*0x1c3ab6*/
              break; /*0x1c3ab6*/
LABEL_105:
            v63 = *(int **)(v58 + 1112); /*0x1c3b85*/
            if ( !v63 ) /*0x1c3b8f*/
              goto LABEL_121; /*0x1c3b8f*/
            v64 = *v63; /*0x1c3b98*/
            if ( v63[1] == *v63 || !v64 ) /*0x1c3ba0*/
              v64 = v63[1]; /*0x1c3ba2*/
            v92 = v64; /*0x1c3ba4*/
            v65 = *(_QWORD *)(v50 /*0x1c3bea*/
                            + 16
                            * (v100
                             & (0x100000001B3LL
                              * (HIBYTE(v64)
                               ^ (0x100000001B3LL
                                * (BYTE2(v64)
                                 ^ (0x100000001B3LL
                                  * ((0x100000001B3LL * ((unsigned __int8)v64 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v64))))))))
                            + 8);
            if ( (_QWORD *)v65 != v96 ) /*0x1c3bf4*/
            {
              if ( v64 == *(_DWORD *)(v65 + 16) ) /*0x1c3c00*/
                goto LABEL_115; /*0x1c3c00*/
              while ( v65 != *(_QWORD *)(v50 /*0x1c3c05*/
                                       + 16
                                       * (v100
                                        & (0x100000001B3LL
                                         * (HIBYTE(v64)
                                          ^ (0x100000001B3LL
                                           * (BYTE2(v64)
                                            ^ (0x100000001B3LL
                                             * ((0x100000001B3LL * ((unsigned __int8)v64 ^ 0xCBF29CE484222325uLL))
                                              ^ BYTE1(v64))))))))) )
              {
                v65 = *(_QWORD *)(v65 + 8); /*0x1c3c07*/
                if ( v64 == *(_DWORD *)(v65 + 16) ) /*0x1c3c0e*/
                  goto LABEL_115; /*0x1c3c0e*/
              }
            }
            v65 = 0; /*0x1c3c12*/
LABEL_115:
            if ( v65 ) /*0x1c3c18*/
            {
              v66 = *(_DWORD *)(*(_QWORD *)sub_66DF0(&v95, v116, &v92) + 20LL); /*0x1c3c30*/
              if ( v66 < 0 ) /*0x1c3c35*/
                v66 = 0; /*0x1c3c35*/
              if ( v66 > 1101 ) /*0x1c3c3e*/
                v66 = 1101; /*0x1c3c40*/
              *v63 = v66; /*0x1c3c51*/
              v50 = v98; /*0x1c3c53*/
            }
LABEL_121:
            v67 = *(_DWORD *)(v58 + 1036); /*0x1c3c57*/
            if ( v67 == 899 ) /*0x1c3c62*/
            {
              v68 = *(_DWORD *)(v58 + 1032); /*0x1c3c68*/
              v92 = v68; /*0x1c3c6e*/
              v69 = *(_QWORD *)(v50 /*0x1c3cb4*/
                              + 16
                              * (v100
                               & (0x100000001B3LL
                                * (HIBYTE(v68)
                                 ^ (0x100000001B3LL
                                  * (BYTE2(v68)
                                   ^ (0x100000001B3LL
                                    * ((0x100000001B3LL * ((unsigned __int8)v68 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v68))))))))
                              + 8);
              if ( (_QWORD *)v69 == v96 ) /*0x1c3cbe*/
                goto LABEL_127; /*0x1c3cbe*/
              if ( v68 != *(_DWORD *)(v69 + 16) ) /*0x1c3cca*/
              {
                while ( v69 != *(_QWORD *)(v50 /*0x1c3cd3*/
                                         + 16
                                         * (v100
                                          & (0x100000001B3LL
                                           * (HIBYTE(v68)
                                            ^ (0x100000001B3LL
                                             * (BYTE2(v68)
                                              ^ (0x100000001B3LL
                                               * ((0x100000001B3LL * ((unsigned __int8)v68 ^ 0xCBF29CE484222325uLL))
                                                ^ BYTE1(v68))))))))) )
                {
                  v69 = *(_QWORD *)(v69 + 8); /*0x1c3cd5*/
                  if ( v68 == *(_DWORD *)(v69 + 16) ) /*0x1c3cdc*/
                    goto LABEL_128; /*0x1c3cdc*/
                }
LABEL_127:
                v69 = 0; /*0x1c3ce0*/
              }
LABEL_128:
              if ( v69 ) /*0x1c3ce6*/
              {
                *(_DWORD *)(v58 + 1032) = *(_DWORD *)(*(_QWORD *)sub_66DF0(&v95, v117, &v92) + 20LL); /*0x1c3d01*/
                v50 = v98; /*0x1c3d07*/
              }
              v70 = *(_DWORD *)(v58 + 1644); /*0x1c3d0b*/
              v92 = v70; /*0x1c3d11*/
              v71 = *(_QWORD *)(v50 /*0x1c3d57*/
                              + 16
                              * (v100
                               & (0x100000001B3LL
                                * (HIBYTE(v70)
                                 ^ (0x100000001B3LL
                                  * (BYTE2(v70)
                                   ^ (0x100000001B3LL
                                    * ((0x100000001B3LL * ((unsigned __int8)v70 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v70))))))))
                              + 8);
              if ( (_QWORD *)v71 == v96 ) /*0x1c3d61*/
              {
LABEL_135:
                v71 = 0; /*0x1c3d80*/
              }
              else if ( v70 != *(_DWORD *)(v71 + 16) ) /*0x1c3d6d*/
              {
                while ( v71 != *(_QWORD *)(v50 /*0x1c3d73*/
                                         + 16
                                         * (v100
                                          & (0x100000001B3LL
                                           * (HIBYTE(v70)
                                            ^ (0x100000001B3LL
                                             * (BYTE2(v70)
                                              ^ (0x100000001B3LL
                                               * ((0x100000001B3LL * ((unsigned __int8)v70 ^ 0xCBF29CE484222325uLL))
                                                ^ BYTE1(v70))))))))) )
                {
                  v71 = *(_QWORD *)(v71 + 8); /*0x1c3d75*/
                  if ( v70 == *(_DWORD *)(v71 + 16) ) /*0x1c3d7c*/
                    goto LABEL_136; /*0x1c3d7c*/
                }
                goto LABEL_135; /*0x1c3d73*/
              }
LABEL_136:
              if ( v71 ) /*0x1c3d86*/
              {
                v72 = &v92; /*0x1c3d8c*/
                v73 = &v118; /*0x1c3d91*/
LABEL_156:
                *(_DWORD *)(v58 + 1644) = *(_DWORD *)(*(_QWORD *)sub_66DF0(&v95, v73, v72) + 20LL); /*0x1c3ed7*/
                v50 = v98; /*0x1c3eed*/
                goto LABEL_157; /*0x1c3eed*/
              }
              goto LABEL_157; /*0x1c3d86*/
            }
            if ( v67 != 1006 ) /*0x1c3d9f*/
              goto LABEL_157; /*0x1c3d9f*/
            if ( !*(_DWORD *)(v58 + 1624) ) /*0x1c3da5*/
            {
              v74 = *(_DWORD *)(v58 + 1032); /*0x1c3db2*/
              v92 = v74; /*0x1c3db8*/
              v75 = *(_QWORD *)(v50 /*0x1c3dfe*/
                              + 16
                              * (v100
                               & (0x100000001B3LL
                                * (HIBYTE(v74)
                                 ^ (0x100000001B3LL
                                  * (BYTE2(v74)
                                   ^ (0x100000001B3LL
                                    * ((0x100000001B3LL * ((unsigned __int8)v74 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v74))))))))
                              + 8);
              if ( (_QWORD *)v75 == v96 ) /*0x1c3e08*/
                goto LABEL_145; /*0x1c3e08*/
              if ( v74 != *(_DWORD *)(v75 + 16) ) /*0x1c3e14*/
              {
                while ( v75 != *(_QWORD *)(v50 /*0x1c3e19*/
                                         + 16
                                         * (v100
                                          & (0x100000001B3LL
                                           * (HIBYTE(v74)
                                            ^ (0x100000001B3LL
                                             * (BYTE2(v74)
                                              ^ (0x100000001B3LL
                                               * ((0x100000001B3LL * ((unsigned __int8)v74 ^ 0xCBF29CE484222325uLL))
                                                ^ BYTE1(v74))))))))) )
                {
                  v75 = *(_QWORD *)(v75 + 8); /*0x1c3e1b*/
                  if ( v74 == *(_DWORD *)(v75 + 16) ) /*0x1c3e22*/
                    goto LABEL_146; /*0x1c3e22*/
                }
LABEL_145:
                v75 = 0; /*0x1c3e26*/
              }
LABEL_146:
              if ( v75 ) /*0x1c3e2c*/
              {
                *(_DWORD *)(v58 + 1032) = *(_DWORD *)(*(_QWORD *)sub_66DF0(&v95, v119, &v92) + 20LL); /*0x1c3e47*/
                v50 = v98; /*0x1c3e4d*/
              }
            }
            v76 = *(_DWORD *)(v58 + 1644); /*0x1c3e51*/
            v104 = v76; /*0x1c3e57*/
            v77 = *(_QWORD *)(v50 /*0x1c3e9c*/
                            + 16
                            * (v100
                             & (0x100000001B3LL
                              * (HIBYTE(v76)
                               ^ (0x100000001B3LL
                                * (BYTE2(v76)
                                 ^ (0x100000001B3LL
                                  * ((0x100000001B3LL * ((unsigned __int8)v76 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v76))))))))
                            + 8);
            if ( (_QWORD *)v77 != v96 ) /*0x1c3ea6*/
            {
              if ( v76 == *(_DWORD *)(v77 + 16) ) /*0x1c3eb2*/
                goto LABEL_154; /*0x1c3eb2*/
              while ( v77 != *(_QWORD *)(v50 /*0x1c3eb7*/
                                       + 16
                                       * (v100
                                        & (0x100000001B3LL
                                         * (HIBYTE(v76)
                                          ^ (0x100000001B3LL
                                           * (BYTE2(v76)
                                            ^ (0x100000001B3LL
                                             * ((0x100000001B3LL * ((unsigned __int8)v76 ^ 0xCBF29CE484222325uLL))
                                              ^ BYTE1(v76))))))))) )
              {
                v77 = *(_QWORD *)(v77 + 8); /*0x1c3eb9*/
                if ( v76 == *(_DWORD *)(v77 + 16) ) /*0x1c3ec0*/
                  goto LABEL_154; /*0x1c3ec0*/
              }
            }
            v77 = 0; /*0x1c3ec4*/
LABEL_154:
            if ( v77 ) /*0x1c3eca*/
            {
              v72 = &v104; /*0x1c3ecc*/
              v73 = &v120; /*0x1c3ed0*/
              goto LABEL_156; /*0x1c3ed0*/
            }
LABEL_157:
            if ( ++v56 > v57 ) /*0x1c3ef8*/
              goto LABEL_158; /*0x1c3ef8*/
          }
          v60 = *v59; /*0x1c3abf*/
          if ( v59[1] == *v59 || !v60 ) /*0x1c3ac7*/
            v60 = v59[1]; /*0x1c3ac9*/
          v92 = v60; /*0x1c3acb*/
          v61 = *(_QWORD *)(v50 /*0x1c3b11*/
                          + 16
                          * (v100
                           & (0x100000001B3LL
                            * (HIBYTE(v60)
                             ^ (0x100000001B3LL
                              * (BYTE2(v60)
                               ^ (0x100000001B3LL
                                * ((0x100000001B3LL * ((unsigned __int8)v60 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v60))))))))
                          + 8);
          if ( (_QWORD *)v61 == v96 ) /*0x1c3b1b*/
          {
LABEL_98:
            v61 = 0; /*0x1c3b40*/
          }
          else if ( v60 != *(_DWORD *)(v61 + 16) ) /*0x1c3b27*/
          {
            while ( v61 != *(_QWORD *)(v50 /*0x1c3b33*/
                                     + 16
                                     * (v100
                                      & (0x100000001B3LL
                                       * (HIBYTE(v60)
                                        ^ (0x100000001B3LL
                                         * (BYTE2(v60)
                                          ^ (0x100000001B3LL
                                           * ((0x100000001B3LL * ((unsigned __int8)v60 ^ 0xCBF29CE484222325uLL))
                                            ^ BYTE1(v60))))))))) )
            {
              v61 = *(_QWORD *)(v61 + 8); /*0x1c3b35*/
              if ( v60 == *(_DWORD *)(v61 + 16) ) /*0x1c3b3c*/
                goto LABEL_99; /*0x1c3b3c*/
            }
            goto LABEL_98; /*0x1c3b33*/
          }
LABEL_99:
          if ( v61 ) /*0x1c3b46*/
          {
            v62 = *(_DWORD *)(*(_QWORD *)sub_66DF0(&v95, v115, &v92) + 20LL); /*0x1c3b5e*/
            if ( v62 < 0 ) /*0x1c3b63*/
              v62 = 0; /*0x1c3b63*/
            if ( v62 > 1101 ) /*0x1c3b6c*/
              v62 = 1101; /*0x1c3b6e*/
            *v59 = v62; /*0x1c3b7f*/
            v50 = v98; /*0x1c3b81*/
          }
          goto LABEL_105; /*0x1c3b81*/
        }
      }
LABEL_159:
      sub_74F50(&v108); /*0x1c3f0a*/
      v27 += 32; /*0x1c3f13*/
    }
    v36 = (char *)Block[1]; /*0x1c3969*/
    goto LABEL_73; /*0x1c3969*/
  }
LABEL_167:
  if ( !v91 ) /*0x1c3fc1*/
  {
    v79 = (cocos2d::CCObject **)operator new(0xA0u); /*0x1c3fd1*/
    v107 = v79; /*0x1c3fd4*/
    cocos2d::CCObject::CCObject((cocos2d::CCObject *)v79); /*0x1c3fdb*/
    *v79 = (cocos2d::CCObject *)&UndoObject::`vftable'; /*0x1c3fe9*/
    v79[7] = 0; /*0x1c3fef*/
    *((_DWORD *)v79 + 16) = 0; /*0x1c3ff3*/
    v79[9] = 0; /*0x1c3ff7*/
    *((_WORD *)v79 + 40) = 0; /*0x1c3ffb*/
    sub_1A6040((char *)v79 + 84); /*0x1c4004*/
    v81 = (cocos2d::CCArray *)cocos2d::CCArray::create(v80); /*0x1c400a*/
    v79[9] = v81; /*0x1c4010*/
    cocos2d::CCArray::addObjectsFromArray(v81, v23); /*0x1c401a*/
    cocos2d::CCObject::retain(v79[9]); /*0x1c4024*/
    *((_DWORD *)v79 + 16) = 3; /*0x1c402a*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v79); /*0x1c4034*/
    v82 = *(_QWORD *)(v6 + 1512); /*0x1c403a*/
    cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v82 + 14984)); /*0x1c4048*/
    v83 = 1000; /*0x1c404e*/
    if ( !*(_BYTE *)(v82 + 14726) ) /*0x1c4058*/
      v83 = 200; /*0x1c405f*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v82 + 14976)) >= v83 ) /*0x1c4071*/
      cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v82 + 14976), 0, 1); /*0x1c407f*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v82 + 14976), (struct cocos2d::CCObject *)v79); /*0x1c408f*/
  }
  if ( cocos2d::CCArray::count(v23) ) /*0x1c409d*/
  {
    EditorUI_deselectAll(v6); /*0x1c40ae*/
    if ( cocos2d::CCArray::count(v23) == 1 ) /*0x1c40c2*/
    {
      v84 = cocos2d::CCArray::objectAtIndex(v23, 0); /*0x1c40c6*/
      EditorUI_selectObject(v6, v84, 0); /*0x1c40d5*/
      v85 = *(_QWORD *)(v6 + 1568); /*0x1c40da*/
      if ( v85 ) /*0x1c40e4*/
      {
        v89 = -256; /*0x1c40f6*/
        v90 = -1; /*0x1c40fb*/
        (*(void (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v85 + 1376LL))(v85, &v89); /*0x1c4108*/
      }
    }
    else
    {
      v86 = 0; /*0x1c4110*/
      if ( cocos2d::CCArray::count(v23) ) /*0x1c4113*/
      {
        v89 = -256; /*0x1c411d*/
        do /*0x1c417a*/
        {
          v87 = cocos2d::CCArray::objectAtIndex(v23, v86); /*0x1c413b*/
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v6 + 944), v87); /*0x1c4148*/
          v89 = -256; /*0x1c414e*/
          v90 = -1; /*0x1c4153*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int16 *))(*(_QWORD *)v87 + 1376LL))(v87, &v89); /*0x1c416a*/
          ++v86; /*0x1c416d*/
        }
        while ( v86 < cocos2d::CCArray::count(v23) ); /*0x1c417a*/
      }
    }
    GJBaseGameLayer_assignNewStickyGroups(*(_QWORD *)(v6 + 1512), v23); /*0x1c4186*/
  }
  if ( v125 > 0xF ) /*0x1c4197*/
  {
    v88 = v123[0]; /*0x1c419c*/
    if ( v125 + 1 >= 0x1000 ) /*0x1c41ad*/
    {
      v88 = (void *)*((_QWORD *)v123[0] - 1); /*0x1c41b3*/
      if ( (unsigned __int64)((char *)v123[0] - (char *)v88 - 8) > 0x1F ) /*0x1c41c2*/
        goto LABEL_184; /*0x1c41c2*/
    }
    j_j_free(v88); /*0x1c41dc*/
  }
  v124 = 0; /*0x1c41e1*/
  v125 = 15; /*0x1c41e8*/
  LOBYTE(v123[0]) = 0; /*0x1c41f3*/
  sub_3C310(v5); /*0x1c41fd*/
  return v23; /*0x1c4205*/
}

// [62/110] Address: 0x1c4610
// Method: EditorUI::repositionObjectsToCenter
unsigned int __fastcall EditorUI_repositionObjectsToCenter(__int64 a1, cocos2d::CCArray *a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v8; // rdi
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[8]; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  EditorUI_getGroupCenter(a1, v10, a2); /*0x1c4630*/
  cocos2d::CCPoint::operator-(a3, v11, v10); /*0x1c4642*/
  v6 = 0; /*0x1c464b*/
  result = cocos2d::CCArray::count(a2); /*0x1c464d*/
  if ( result ) /*0x1c4655*/
  {
    do /*0x1c4699*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(a2, v6); /*0x1c4670*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v12, (const struct cocos2d::CCPoint *)v11); /*0x1c4678*/
      EditorUI_moveObject(a1, v8, v9); /*0x1c4687*/
      ++v6; /*0x1c468f*/
      result = cocos2d::CCArray::count(a2); /*0x1c4691*/
    }
    while ( v6 < result ); /*0x1c4699*/
  }
  return result; /*0x1c46a0*/
}

// [63/110] Address: 0x1c46b0
// Method: EditorUI::selectObject
__int64 __fastcall EditorUI_selectObject(__int64 a1, int *a2, char a3)
{
  __int64 result; // rax
  cocos2d::CCArray *v6; // rax
  struct cocos2d::CCArray *v7; // rax
  __int16 v8; // [rsp+40h] [rbp+18h] BYREF
  char v9; // [rsp+42h] [rbp+1Ah]

  if ( a3 || (result = sub_1C5720(), (_BYTE)result) ) /*0x1c46cc*/
  {
    if ( *(_BYTE *)(a1 + 915) /*0x1c4717*/
      && !*(_BYTE *)(a1 + 916)
      && a2[220] > 0
      && (v6 = cocos2d::CCDictionary::objectForKey(
                 *(cocos2d::CCDictionary **)(*(_QWORD *)(a1 + 1512) + 4320LL),
                 a2[220])) != 0
      && cocos2d::CCArray::count(v6) > 1 )
    {
      EditorUI_deselectAll(a1); /*0x1c471c*/
      v7 = cocos2d::CCArray::createWithObject((struct cocos2d::CCObject *)a2); /*0x1c4724*/
      return sub_1C47B0(a1, v7, 0); /*0x1c473d*/
    }
    else
    {
      *(_BYTE *)(a1 + 914) = 1; /*0x1c4745*/
      EditorUI_deselectAll(a1); /*0x1c474c*/
      v8 = -256; /*0x1c475d*/
      v9 = 0; /*0x1c476c*/
      *(_QWORD *)(a1 + 1568) = a2; /*0x1c4770*/
      (*(void (__fastcall **)(int *, __int16 *))(*(_QWORD *)a2 + 1376LL))(a2, &v8); /*0x1c477a*/
      *(_DWORD *)(*(_QWORD *)(a1 + 1568) + 1144LL) = *(_DWORD *)(a1 + 1612); /*0x1c478d*/
      *(_BYTE *)(a1 + 824) = 1; /*0x1c4796*/
      return sub_1C6900(a1); /*0x1c479d*/
    }
  }
  return result; /*0x1c4733*/
}

// [64/110] Address: 0x1c5230
// Method: EditorUI::selectAllWithDirection
__int64 __fastcall EditorUI_selectAllWithDirection(__int64 a1, char a2)
{
  cocos2d::CCArray *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  cocos2d::CCArray *v10; // r14
  struct cocos2d::CCObject *v11; // rbx
  int v12; // edx
  int v13; // eax
  float *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  float v18; // [rsp+60h] [rbp+8h] BYREF
  float v19; // [rsp+64h] [rbp+Ch]
  float v20; // [rsp+70h] [rbp+18h] BYREF
  char v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(cocos2d::CCArray **)(*(_QWORD *)(a1 + 1512) + 3600LL); /*0x1c524d*/
  v5 = cocos2d::CCDirector::sharedDirector(); /*0x1c5254*/
  cocos2d::CCDirector::getWinSize(v5, &v18); /*0x1c5262*/
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4360LL); /*0x1c5298*/
  cocos2d::CCPoint::CCPoint( /*0x1c52a7*/
    (cocos2d::CCPoint *)&v21,
    v18 * 0.5,
    (float)(*(float *)(a1 + 904) * 0.5) + (float)(v19 * 0.5));
  cocos2d::CCNode::convertToNodeSpace(v6, &v20, v7); /*0x1c52b8*/
  v9 = 0; /*0x1c52c7*/
  v10 = (cocos2d::CCArray *)cocos2d::CCArray::create(v8); /*0x1c52c9*/
  if ( cocos2d::CCArray::count(v4) ) /*0x1c52cc*/
  {
    while ( 1 ) /*0x1c52f2*/
    {
      v11 = cocos2d::CCArray::objectAtIndex(v4, v9); /*0x1c52f2*/
      v12 = *((__int16 *)v11 + 606); /*0x1c52f5*/
      v13 = *(__int16 *)(*(_QWORD *)(a1 + 1512) + 14930LL); /*0x1c52fc*/
      if ( !*((_WORD *)v11 + 606) ) /*0x1c52f5*/
        v12 = -1; /*0x1c5305*/
      if ( (_WORD)v13 != 0xFFFF && (_WORD)v13 != *((_WORD *)v11 + 605) && v13 != v12 ) /*0x1c531a*/
        goto LABEL_12; /*0x1c531a*/
      v14 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 200LL))(v11); /*0x1c5329*/
      if ( a2 ) /*0x1c532e*/
        break; /*0x1c532e*/
      if ( *v14 > v20 ) /*0x1c5346*/
        goto LABEL_11; /*0x1c5346*/
LABEL_12:
      if ( ++v9 >= cocos2d::CCArray::count(v4) ) /*0x1c5361*/
        goto LABEL_13; /*0x1c5361*/
    }
    if ( v20 <= *v14 ) /*0x1c5339*/
      goto LABEL_12; /*0x1c5339*/
LABEL_11:
    cocos2d::CCArray::addObject(v10, v11); /*0x1c5348*/
    goto LABEL_12; /*0x1c534e*/
  }
LABEL_13:
  sub_1C6790(a1, v10); /*0x1c5367*/
  v15 = *(_QWORD *)(a1 + 808); /*0x1c5372*/
  *(_DWORD *)(a1 + 744) = -1; /*0x1c5379*/
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 344LL))(v15) ) /*0x1c5383*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 808) + 336LL))(*(_QWORD *)(a1 + 808), 0); /*0x1c5399*/
    sub_1A0260(*(_QWORD *)(a1 + 808)); /*0x1c53a6*/
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 808) + 464LL); /*0x1c53b2*/
    if ( v16 ) /*0x1c53bc*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 1032LL))(v16, 0); /*0x1c53c3*/
  }
  sub_1FFD20(a1); /*0x1c53cc*/
  return sub_200430(a1); /*0x1c53d9*/
}

// [65/110] Address: 0x1c53f0
// Method: EditorUI::deselectObject
void __fastcall EditorUI_deselectObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // rcx

  v4 = *(_QWORD *)(a1 + 1568); /*0x1c5400*/
  if ( v4 && *(_DWORD *)(v4 + 924) == *(_DWORD *)(a2 + 924) ) /*0x1c5418*/
  {
    cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 124); /*0x1c5422*/
    v5 = *(_QWORD *)(a1 + 1568); /*0x1c5428*/
    if ( v5 ) /*0x1c5432*/
    {
      *(_BYTE *)(v5 + 1141) = 0; /*0x1c5434*/
      GameObject_updateObjectEditorColor(v5); /*0x1c543b*/
    }
    *(_QWORD *)(a1 + 1568) = 0; /*0x1c5443*/
    EditorUI_toggleEditObjectButton(a1); /*0x1c544e*/
    *(_BYTE *)(a1 + 824) = 1; /*0x1c545a*/
    cocos2d::CCPoint::operator=(a1 + 1544, &unk_904748); /*0x1c5468*/
    *(_BYTE *)(a1 + 824) = 1; /*0x1c546e*/
  }
  else
  {
    *(_BYTE *)(a2 + 1141) = 0; /*0x1c5483*/
    GameObject_updateObjectEditorColor(a2); /*0x1c548a*/
    if ( cocos2d::CCArray::containsObject(*(cocos2d::CCArray **)(a1 + 944), (struct cocos2d::CCObject *)a2) ) /*0x1c5499*/
    {
      v6 = *(cocos2d::CCArray **)(a1 + 944); /*0x1c54a3*/
      *(_BYTE *)(a1 + 824) = 1; /*0x1c54b0*/
      cocos2d::CCArray::removeObject(v6, (struct cocos2d::CCObject *)a2, 1); /*0x1c54b7*/
    }
  }
}

// [66/110] Address: 0x1c54d0
// Method: EditorUI::deselectAll
__int64 __fastcall EditorUI_deselectAll(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  struct cocos2d::CCObject *v4; // rax

  cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 124); /*0x1c54e2*/
  v2 = *(_QWORD *)(a1 + 1568); /*0x1c54e8*/
  if ( v2 ) /*0x1c54f2*/
  {
    *(_BYTE *)(v2 + 1141) = 0; /*0x1c54f4*/
    GameObject_updateObjectEditorColor(v2); /*0x1c54fb*/
  }
  v3 = 0; /*0x1c5500*/
  *(_QWORD *)(a1 + 1568) = 0; /*0x1c5505*/
  EditorUI_toggleEditObjectButton(a1); /*0x1c550c*/
  *(_BYTE *)(a1 + 824) = 1; /*0x1c5518*/
  cocos2d::CCPoint::operator=(a1 + 1544, &unk_904748); /*0x1c5526*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) /*0x1c5544*/
    && cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) )
  {
    do /*0x1c557f*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v3); /*0x1c5559*/
      *((_BYTE *)v4 + 1141) = 0; /*0x1c5562*/
      GameObject_updateObjectEditorColor(v4); /*0x1c5569*/
      ++v3; /*0x1c5575*/
    }
    while ( v3 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ); /*0x1c557f*/
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 944)); /*0x1c5588*/
  EditorUI_updateButtons(a1); /*0x1c5591*/
  sub_1FF670(a1); /*0x1c5599*/
  sub_1FFD20(a1); /*0x1c55a1*/
  sub_200430(a1); /*0x1c55a9*/
  return EditorUI_updateObjectInfoLabel(a1); /*0x1c55b1*/
}

// [67/110] Address: 0x1c55c0
// Method: EditorUI::deselectTargetPortals
double __fastcall EditorUI_deselectTargetPortals(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // esi
  cocos2d::CCArray *v5; // rbp
  unsigned int i; // edi
  struct cocos2d::CCObject *v7; // rax
  struct cocos2d::CCObject *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  double result; // xmm0_8

  v2 = *(cocos2d::CCArray **)(a1 + 944); /*0x1c55cd*/
  if ( v2 && cocos2d::CCArray::count(v2) ) /*0x1c55dd*/
  {
    v4 = 0; /*0x1c5602*/
    v5 = (cocos2d::CCArray *)cocos2d::CCArray::create(v3); /*0x1c5604*/
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); ++i ) /*0x1c5609*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), i); /*0x1c5629*/
      if ( *((_DWORD *)v7 + 259) == 749 ) /*0x1c5639*/
        cocos2d::CCArray::addObject(v5, v7); /*0x1c5641*/
    }
    if ( cocos2d::CCArray::count(v5) ) /*0x1c565d*/
    {
      do /*0x1c5693*/
      {
        v8 = cocos2d::CCArray::objectAtIndex(v5, v4); /*0x1c5675*/
        EditorUI_deselectObject(a1, (__int64)v8); /*0x1c5681*/
        ++v4; /*0x1c5689*/
      }
      while ( v4 < cocos2d::CCArray::count(v5) ); /*0x1c5693*/
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 1568); /*0x1c56a5*/
    if ( v9 && *(_DWORD *)(v9 + 1036) == 749 ) /*0x1c56bb*/
    {
      cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 124); /*0x1c56c5*/
      v10 = *(_QWORD *)(a1 + 1568); /*0x1c56cb*/
      if ( v10 ) /*0x1c56d5*/
      {
        *(_BYTE *)(v10 + 1141) = 0; /*0x1c56d7*/
        GameObject_updateObjectEditorColor(v10); /*0x1c56de*/
      }
      *(_QWORD *)(a1 + 1568) = 0; /*0x1c56e8*/
      EditorUI_toggleEditObjectButton(a1); /*0x1c56ef*/
      *(_BYTE *)(a1 + 824) = 1; /*0x1c56fb*/
      return cocos2d::CCPoint::operator=(a1 + 1544, &unk_904748); /*0x1c5713*/
    }
  }
  return result; /*0x1c569a*/
}

// [68/110] Address: 0x1c6850
// Method: EditorUI::getSelectedObjects
struct cocos2d::CCArray *__fastcall EditorUI_getSelectedObjects(__int64 a1)
{
  struct cocos2d::CCObject *v2; // rcx
  unsigned int v4; // ebx
  cocos2d::CCArray *i; // rsi
  struct cocos2d::CCObject *v6; // rax

  v2 = *(struct cocos2d::CCObject **)(a1 + 1568); /*0x1c6859*/
  if ( v2 && *((_DWORD *)v2 + 259) != 749 ) /*0x1c686f*/
    return cocos2d::CCArray::createWithObject(v2); /*0x1c6876*/
  v4 = 0; /*0x1c6894*/
  for ( i = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x1c6899*/
        v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944));
        ++v4 )
  {
    v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v4); /*0x1c68b9*/
    if ( *((_DWORD *)v6 + 259) != 749 ) /*0x1c68c9*/
      cocos2d::CCArray::addObject(i, v6); /*0x1c68d1*/
  }
  return i; /*0x1c6871*/
}

// [69/110] Address: 0x1c6a60
// Method: EditorUI::deselectObjectsColor
unsigned int __fastcall EditorUI_deselectObjectsColor(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int result; // eax
  unsigned int v4; // ebx
  struct cocos2d::CCObject *v5; // rax

  v2 = *(_QWORD *)(a1 + 1568); /*0x1c6a69*/
  if ( v2 ) /*0x1c6a73*/
  {
    *(_BYTE *)(v2 + 1141) = 0; /*0x1c6a75*/
    return GameObject_updateObjectEditorColor(v2); /*0x1c6a81*/
  }
  else
  {
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1c6a8d*/
    if ( result ) /*0x1c6a95*/
    {
      v4 = 0; /*0x1c6aa3*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1c6aa5*/
      if ( result ) /*0x1c6aad*/
      {
        do /*0x1c6adf*/
        {
          v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 944), v4); /*0x1c6ab9*/
          *((_BYTE *)v5 + 1141) = 0; /*0x1c6ac2*/
          GameObject_updateObjectEditorColor(v5); /*0x1c6ac9*/
          ++v4; /*0x1c6ad5*/
          result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1c6ad7*/
        }
        while ( v4 < result ); /*0x1c6adf*/
      }
    }
  }
  return result; /*0x1c6a7c*/
}

// [71/110] Address: 0x1f2a60
// Method: EditorUI::onNewCustomItem
// Hidden C++ exception states: #wind=7
double __fastcall EditorUI_onNewCustomItem(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int128 *v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  double result; // xmm0_8
  void *v11; // rcx
  __int64 v12; // rcx
  cocos2d::CCString *v13; // rax
  const char *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  __int128 *v17; // rdx
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  cocos2d::CCArray *v22; // rdi
  void **v23; // r15
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rcx
  void *v27; // [rsp+50h] [rbp-59h]
  void *v28; // [rsp+58h] [rbp-51h]
  __int128 v29; // [rsp+60h] [rbp-49h] BYREF
  __int64 v30; // [rsp+70h] [rbp-39h]
  __int64 v31; // [rsp+78h] [rbp-31h]
  _BYTE v32[32]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v34; // [rsp+B0h] [rbp+7h]
  unsigned __int64 v35; // [rsp+B8h] [rbp+Fh]
  void *Src[2]; // [rsp+C0h] [rbp+17h] BYREF
  unsigned __int64 v37; // [rsp+D0h] [rbp+27h]
  unsigned __int64 v38; // [rsp+D8h] [rbp+2Fh]

  v2 = *(cocos2d::CCArray **)(a1 + 944); /*0x1f2a91*/
  if ( v2 && cocos2d::CCArray::count(v2) > 0x3E8 ) /*0x1f2aac*/
  {
    v3 = cocos2d::CCString::createWithFormat("A custom object cannot contain more than <cg>%i</c> objects.", 1000); /*0x1f2abe*/
    CString = cocos2d::CCString::getCString(v3); /*0x1f2ac7*/
    v33 = 0; /*0x1f2ad0*/
    v34 = 0; /*0x1f2ad6*/
    v35 = 0; /*0x1f2ada*/
    v5 = -1; /*0x1f2ade*/
    v6 = -1; /*0x1f2ae5*/
    do /*0x1f2af3*/
      ++v6; /*0x1f2af0*/
    while ( CString[v6] ); /*0x1f2af3*/
    sub_3C230(&v33); /*0x1f2b00*/
    v7 = &v33; /*0x1f2b06*/
    if ( v35 > 0xF ) /*0x1f2b0f*/
      v7 = (__int128 *)v33; /*0x1f2b0f*/
    v29 = 0; /*0x1f2b17*/
    v30 = 0; /*0x1f2b1b*/
    v31 = 0; /*0x1f2b1f*/
    do /*0x1f2b26*/
      ++v5; /*0x1f2b23*/
    while ( *((_BYTE *)v7 + v5) ); /*0x1f2b26*/
    sub_3C230(&v29); /*0x1f2b33*/
    v8 = sub_3E4F0(v32, &v29); /*0x1f2b48*/
    v9 = FLAlertLayer_create_0(0, (unsigned int)"Max Limit", v8, (unsigned int)"OK", 0, 1135214592, 0, 0, 1065353216); /*0x1f2b94*/
    result = sub_3C310(&v29); /*0x1f2b9b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL))(v9); /*0x1f2bad*/
    if ( v35 > 0xF ) /*0x1f2bb8*/
    {
      v11 = (void *)v33; /*0x1f2bc1*/
      if ( v35 + 1 < 0x1000 || (v11 = *(void **)(v33 - 8), (unsigned __int64)(v33 - (_QWORD)v11 - 8) <= 0x1F) ) /*0x1f2be4*/
      {
LABEL_12:
        j_j_free(v11); /*0x1f2bea*/
        return result; /*0x1f2bef*/
      }
LABEL_25:
      invoke_watson(0, 0, 0, 0, 0); /*0x1f2d7e*/
    }
  }
  else
  {
    v12 = qword_905FD0; /*0x1f2bf4*/
    if ( !qword_905FD0 ) /*0x1f2bfe*/
    {
      v27 = operator new(0x6E8u); /*0x1f2c0a*/
      qword_905FD0 = sub_2723A0(v27); /*0x1f2c17*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1f2c28*/
      v12 = qword_905FD0; /*0x1f2c2a*/
    }
    if ( cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(v12 + 464)) < 0xC8 ) /*0x1f2c43*/
    {
      if ( *(_QWORD *)(a1 + 1568) || cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1f2da5*/
      {
        v20 = *(_QWORD *)(a1 + 1568); /*0x1f2db3*/
        if ( !v20 || *(_DWORD *)(v20 + 1036) != 749 ) /*0x1f2dc9*/
        {
          if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) ) /*0x1f2dd6*/
          {
            v22 = *(cocos2d::CCArray **)(a1 + 944); /*0x1f2dfb*/
          }
          else
          {
            v22 = (cocos2d::CCArray *)cocos2d::CCArray::create(v21); /*0x1f2de6*/
            cocos2d::CCArray::addObject(v22, *(struct cocos2d::CCObject **)(a1 + 1568)); /*0x1f2df3*/
          }
          sub_1C2920(a1, Src, v22, 0, 0); /*0x1f2e14*/
          if ( v37 && cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)) <= 0x3E8 ) /*0x1f2e37*/
          {
            v33 = 0; /*0x1f2e48*/
            v34 = 0; /*0x1f2e4e*/
            v35 = 0; /*0x1f2e52*/
            v23 = Src; /*0x1f2e56*/
            if ( v38 > 0xF ) /*0x1f2e5f*/
              v23 = (void **)Src[0]; /*0x1f2e5f*/
            v24 = v37; /*0x1f2e64*/
            v25 = 0x7FFFFFFFFFFFFFFFLL; /*0x1f2e68*/
            if ( v37 > 0x7FFFFFFFFFFFFFFFLL ) /*0x1f2e75*/
              sub_8D90(); /*0x1f2f5b*/
            if ( v37 > 0xF ) /*0x1f2e7f*/
            {
              if ( (v37 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x1f2ea1*/
              {
                v25 = v37 | 0xF; /*0x1f2ea3*/
                if ( (v37 | 0xF) < 0x16 ) /*0x1f2eae*/
                  v25 = 22; /*0x1f2eae*/
              }
              *(_QWORD *)&v33 = sub_3C460(v25 + 1); /*0x1f2ebb*/
              v34 = v24; /*0x1f2ebf*/
              v35 = v25; /*0x1f2ec3*/
              memcpy((void *)v33, v23, v24 + 1); /*0x1f2ed1*/
            }
            else
            {
              v34 = v37; /*0x1f2e81*/
              v35 = 15; /*0x1f2e85*/
              v33 = *(_OWORD *)v23; /*0x1f2e91*/
            }
            v26 = qword_905FD0; /*0x1f2ed7*/
            if ( !qword_905FD0 ) /*0x1f2ee1*/
            {
              v28 = operator new(0x6E8u); /*0x1f2eed*/
              qword_905FD0 = sub_2723A0(v28); /*0x1f2efa*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1f2f07*/
              v26 = qword_905FD0; /*0x1f2f0a*/
            }
            GameManager_addNewCustomObject(v26, (__int64)&v33); /*0x1f2f15*/
            *(_DWORD *)(a1 + 1392) = 0; /*0x1f2f1a*/
            sub_1F3740(a1); /*0x1f2f23*/
          }
          return sub_3C310(Src); /*0x1f2f2d*/
        }
      }
    }
    else
    {
      v13 = cocos2d::CCString::createWithFormat("You cannot create more than <cy>%i</c> custom objects.", 200); /*0x1f2c55*/
      v14 = cocos2d::CCString::getCString(v13); /*0x1f2c5e*/
      v33 = 0; /*0x1f2c67*/
      v34 = 0; /*0x1f2c6d*/
      v35 = 0; /*0x1f2c71*/
      v15 = -1; /*0x1f2c75*/
      v16 = -1; /*0x1f2c7c*/
      do /*0x1f2c83*/
        ++v16; /*0x1f2c80*/
      while ( v14[v16] ); /*0x1f2c83*/
      sub_3C230(&v33); /*0x1f2c90*/
      v17 = &v33; /*0x1f2c96*/
      if ( v35 > 0xF ) /*0x1f2c9f*/
        v17 = (__int128 *)v33; /*0x1f2c9f*/
      v29 = 0; /*0x1f2ca7*/
      v30 = 0; /*0x1f2cab*/
      v31 = 0; /*0x1f2caf*/
      do /*0x1f2cb6*/
        ++v15; /*0x1f2cb3*/
      while ( *((_BYTE *)v17 + v15) ); /*0x1f2cb6*/
      sub_3C230(&v29); /*0x1f2cc3*/
      v18 = sub_3E4F0(v32, &v29); /*0x1f2cd8*/
      v19 = FLAlertLayer_create_0( /*0x1f2d24*/
              0,
              (unsigned int)"Max Custom Objects",
              v18,
              (unsigned int)"OK",
              0,
              1135214592,
              0,
              0,
              1065353216);
      result = sub_3C310(&v29); /*0x1f2d2b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 1064LL))(v19); /*0x1f2d3d*/
      if ( v35 > 0xF ) /*0x1f2d48*/
      {
        v11 = (void *)v33; /*0x1f2d51*/
        if ( v35 + 1 < 0x1000 ) /*0x1f2d5f*/
          goto LABEL_12; /*0x1f2d5f*/
        v11 = *(void **)(v33 - 8); /*0x1f2d69*/
        if ( (unsigned __int64)(v33 - (_QWORD)v11 - 8) <= 0x1F ) /*0x1f2d78*/
          goto LABEL_12; /*0x1f2d78*/
        goto LABEL_25; /*0x1f2d78*/
      }
    }
  }
  return result; /*0x1f2f32*/
}

// [72/110] Address: 0x1f5e40
// Method: EditorUI::smartTypeForKey
__int64 __fastcall EditorUI_smartTypeForKey(int a1)
{
  __int64 result; // rax

  switch ( a1 ) /*0x1f5e59*/
  {
    case 0: /*0x1f5e59*/
      result = 1431; /*0x1f5e5b*/
      break; /*0x1f5e60*/
    case 1: /*0x1f5e59*/
      result = 1461; /*0x1f5e61*/
      break; /*0x1f5e66*/
    case 2: /*0x1f5e59*/
      result = 1861; /*0x1f5e67*/
      break; /*0x1f5e6c*/
    case 3: /*0x1f5e59*/
      result = 1865; /*0x1f5e6d*/
      break; /*0x1f5e72*/
    case 4: /*0x1f5e59*/
      result = 1869; /*0x1f5e73*/
      break; /*0x1f5e78*/
    case 5: /*0x1f5e59*/
      result = 1874; /*0x1f5e79*/
      break; /*0x1f5e7e*/
    case 6: /*0x1f5e59*/
      result = 1878; /*0x1f5e7f*/
      break; /*0x1f5e84*/
    case 7: /*0x1f5e59*/
      result = 1882; /*0x1f5e85*/
      break; /*0x1f5e8a*/
    case 9: /*0x1f5e59*/
      result = 2704; /*0x1f5e8b*/
      break; /*0x1f5e90*/
    case 10: /*0x1f5e59*/
      result = 2838; /*0x1f5e91*/
      break; /*0x1f5e96*/
    case 11: /*0x1f5e59*/
      result = 869; /*0x1f5e97*/
      break; /*0x1f5e9c*/
    default:
      result = 2703; /*0x1f5e9d*/
      break; /*0x1f5e9d*/
  }
  return result; /*0x1f5e60*/
}

// [73/110] Address: 0x1f5ee0
// Method: EditorUI::getRandomStartKey
__int64 __fastcall EditorUI_getRandomStartKey(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // ebx

  if ( a1 > 1861 ) /*0x1f5eea*/
  {
    if ( a1 == 2703 ) /*0x1f60c2*/
    {
      qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x1f6136*/
      return (unsigned int)((int)floorf( /*0x1f6169*/
                                   (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)
                                 + (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)) != 0)
           + 2703;
    }
    else
    {
      v9 = 2838; /*0x1f60c9*/
      if ( a1 == 2838 ) /*0x1f60d0*/
      {
        qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x1f60e3*/
        if ( (int)floorf( /*0x1f6116*/
                    (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)
                  + (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)) )
          return 2840; /*0x1f6116*/
        return v9; /*0x1f6119*/
      }
    }
  }
  else if ( a1 == 1861 ) /*0x1f5ef0*/
  {
    qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x1f6056*/
    v7 = (int)floorf((float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0) * 4.0); /*0x1f6082*/
    if ( v7 ) /*0x1f6088*/
    {
      v8 = v7 - 1; /*0x1f608a*/
      if ( v8 ) /*0x1f608d*/
      {
        if ( v8 == 1 ) /*0x1f6092*/
          return 1863; /*0x1f609e*/
        else
          return 1864; /*0x1f6094*/
      }
      else
      {
        return 1862; /*0x1f60a8*/
      }
    }
    else
    {
      return 1861; /*0x1f60b2*/
    }
  }
  else
  {
    v1 = a1 - 869; /*0x1f5ef6*/
    if ( v1 ) /*0x1f5efc*/
    {
      v2 = v1 - 562; /*0x1f5f02*/
      if ( v2 ) /*0x1f5f08*/
      {
        if ( v2 == 30 ) /*0x1f5f11*/
        {
          qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x1f5f28*/
          v3 = (int)floorf((float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0) * 4.0); /*0x1f5f54*/
          if ( v3 ) /*0x1f5f5a*/
          {
            v4 = v3 - 1; /*0x1f5f5c*/
            if ( v4 ) /*0x1f5f5f*/
            {
              if ( v4 == 1 ) /*0x1f5f64*/
                return 1463; /*0x1f5f70*/
              else
                return 1464; /*0x1f5f66*/
            }
            else
            {
              return 1462; /*0x1f5f7a*/
            }
          }
          else
          {
            return 1461; /*0x1f5f84*/
          }
        }
      }
      else
      {
        qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x1f5f9f*/
        v6 = (int)floorf((float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0) * 3.0); /*0x1f5fcb*/
        if ( v6 ) /*0x1f5fd1*/
        {
          if ( v6 == 1 ) /*0x1f5fd6*/
            return 1432; /*0x1f5fe2*/
          else
            return 1433; /*0x1f5fd8*/
        }
        else
        {
          return 1431; /*0x1f5fec*/
        }
      }
    }
    else
    {
      qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x1f6007*/
      return (unsigned int)((int)floorf( /*0x1f603a*/
                                   (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)
                                 + (float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0)) != 0)
           + 869;
    }
  }
  return result; /*0x1f5f6b*/
}

// [74/110] Address: 0x1f6180
// Method: EditorUI::getSmartObjectKey
__int64 __fastcall EditorUI_getSmartObjectKey(int a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // edx
  int v43; // edx
  int v44; // edx
  int v45; // edx
  int v46; // edx
  int v47; // edx
  int v48; // edx
  int v49; // edx
  int v50; // edx
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // edx
  int v58; // edx
  int v59; // edx
  int v60; // edx
  int v61; // edx
  int v62; // edx
  int v63; // edx
  int v64; // edx
  int v65; // edx
  int v66; // edx
  int v67; // edx
  int v68; // edx
  int v69; // edx
  int v70; // edx
  int v71; // edx
  int v72; // edx
  int v73; // edx
  int v74; // edx
  int v75; // edx
  int v76; // edx
  int v77; // edx
  int v78; // edx
  int v79; // edx
  int v80; // edx
  int v81; // edx

  if ( a1 > 1861 ) /*0x1f618c*/
  {
    if ( a1 <= 2703 ) /*0x1f630f*/
    {
      if ( a1 != 2703 ) /*0x1f6315*/
      {
        switch ( a1 ) /*0x1f633f*/
        {
          case 1862: /*0x1f633f*/
            v20 = a2 - 1; /*0x1f6341*/
            if ( !v20 ) /*0x1f6344*/
              return 1864; /*0x1f6344*/
            v21 = v20 - 1; /*0x1f6346*/
            if ( !v21 ) /*0x1f6349*/
              return 1864; /*0x1f6349*/
            if ( (unsigned int)(v21 - 1) >= 2 ) /*0x1f634e*/
              return 1863; /*0x1f634e*/
            return 1861; /*0x1f634e*/
          case 1863: /*0x1f633f*/
            v22 = a2 - 1; /*0x1f6360*/
            if ( !v22 ) /*0x1f6363*/
              return 1861; /*0x1f6363*/
            v23 = v22 - 1; /*0x1f6365*/
            if ( !v23 ) /*0x1f6368*/
              return 1861; /*0x1f6368*/
            if ( (unsigned int)(v23 - 1) <= 1 ) /*0x1f636d*/
              return 1864; /*0x1f636d*/
            return 1862; /*0x1f636d*/
          case 1864: /*0x1f633f*/
            v24 = a2 - 1; /*0x1f637f*/
            if ( !v24 ) /*0x1f6382*/
              return 1862; /*0x1f6382*/
            v25 = v24 - 1; /*0x1f6388*/
            if ( !v25 ) /*0x1f638b*/
              return 1862; /*0x1f638b*/
            if ( (unsigned int)(v25 - 1) < 2 ) /*0x1f6394*/
              return 1863; /*0x1f6394*/
            return 1861; /*0x1f63a5*/
          case 1865: /*0x1f633f*/
            v26 = a2 - 1; /*0x1f63a6*/
            if ( !v26 ) /*0x1f63a9*/
              return 1867; /*0x1f63a9*/
            v27 = v26 - 1; /*0x1f63ab*/
            if ( !v27 ) /*0x1f63ae*/
              return 1867; /*0x1f63ae*/
            if ( (unsigned int)(v27 - 1) <= 1 ) /*0x1f63b3*/
              return 1866; /*0x1f63b3*/
            return 1868; /*0x1f63b3*/
          case 1866: /*0x1f633f*/
            v28 = a2 - 1; /*0x1f63c5*/
            if ( !v28 ) /*0x1f63c8*/
              return 1868; /*0x1f63c8*/
            v29 = v28 - 1; /*0x1f63ca*/
            if ( !v29 ) /*0x1f63cd*/
              return 1868; /*0x1f63cd*/
            if ( (unsigned int)(v29 - 1) >= 2 ) /*0x1f63d2*/
              return 1867; /*0x1f63d2*/
            return 1865; /*0x1f63d2*/
          case 1867: /*0x1f633f*/
            v30 = a2 - 1; /*0x1f63e4*/
            if ( !v30 ) /*0x1f63e7*/
              return 1865; /*0x1f63e7*/
            v31 = v30 - 1; /*0x1f63e9*/
            if ( !v31 ) /*0x1f63ec*/
              return 1865; /*0x1f63ec*/
            if ( (unsigned int)(v31 - 1) > 1 ) /*0x1f63f1*/
              return 1866; /*0x1f63ba*/
            else
              return 1868; /*0x1f63f8*/
          case 1868: /*0x1f633f*/
            v32 = a2 - 1; /*0x1f6403*/
            if ( !v32 ) /*0x1f6406*/
              return 1866; /*0x1f6406*/
            v33 = v32 - 1; /*0x1f6408*/
            if ( !v33 ) /*0x1f640b*/
              return 1866; /*0x1f640b*/
            if ( (unsigned int)(v33 - 1) < 2 ) /*0x1f6410*/
              return 1867; /*0x1f63d9*/
            else
              return 1865; /*0x1f6417*/
          case 1869: /*0x1f633f*/
            v34 = a2 - 1; /*0x1f6422*/
            if ( !v34 ) /*0x1f6425*/
              return 1871; /*0x1f6425*/
            v35 = v34 - 1; /*0x1f6427*/
            if ( !v35 ) /*0x1f642a*/
              return 1871; /*0x1f642a*/
            if ( (unsigned int)(v35 - 1) <= 1 ) /*0x1f642f*/
              return 1870; /*0x1f642f*/
            return 1872; /*0x1f642f*/
          case 1870: /*0x1f633f*/
            v36 = a2 - 1; /*0x1f6441*/
            if ( !v36 ) /*0x1f6444*/
              return 1872; /*0x1f6444*/
            v37 = v36 - 1; /*0x1f6446*/
            if ( !v37 ) /*0x1f6449*/
              return 1872; /*0x1f6449*/
            if ( (unsigned int)(v37 - 1) >= 2 ) /*0x1f644e*/
              return 1871; /*0x1f644e*/
            return 1869; /*0x1f644e*/
          case 1871: /*0x1f633f*/
            v38 = a2 - 1; /*0x1f6460*/
            if ( !v38 ) /*0x1f6463*/
              return 1869; /*0x1f6463*/
            v39 = v38 - 1; /*0x1f6465*/
            if ( !v39 ) /*0x1f6468*/
              return 1869; /*0x1f6468*/
            if ( (unsigned int)(v39 - 1) > 1 ) /*0x1f646d*/
              return 1870; /*0x1f6436*/
            else
              return 1872; /*0x1f6474*/
          case 1872: /*0x1f633f*/
            v40 = a2 - 1; /*0x1f647f*/
            if ( !v40 ) /*0x1f6482*/
              return 1870; /*0x1f6482*/
            v41 = v40 - 1; /*0x1f6484*/
            if ( !v41 ) /*0x1f6487*/
              return 1870; /*0x1f6487*/
            if ( (unsigned int)(v41 - 1) < 2 ) /*0x1f648c*/
              return 1871; /*0x1f6455*/
            else
              return 1869; /*0x1f6493*/
          case 1874: /*0x1f633f*/
            v42 = a2 - 1; /*0x1f649e*/
            if ( !v42 ) /*0x1f64a1*/
              return 1876; /*0x1f64a1*/
            v43 = v42 - 1; /*0x1f64a3*/
            if ( !v43 ) /*0x1f64a6*/
              return 1876; /*0x1f64a6*/
            if ( (unsigned int)(v43 - 1) <= 1 ) /*0x1f64ab*/
              return 1875; /*0x1f64ab*/
            return 1877; /*0x1f64ab*/
          case 1875: /*0x1f633f*/
            v44 = a2 - 1; /*0x1f64bd*/
            if ( !v44 ) /*0x1f64c0*/
              return 1877; /*0x1f64c0*/
            v45 = v44 - 1; /*0x1f64c2*/
            if ( !v45 ) /*0x1f64c5*/
              return 1877; /*0x1f64c5*/
            if ( (unsigned int)(v45 - 1) >= 2 ) /*0x1f64ca*/
              return 1876; /*0x1f64ca*/
            return 1874; /*0x1f64ca*/
          case 1876: /*0x1f633f*/
            v46 = a2 - 1; /*0x1f64dc*/
            if ( !v46 ) /*0x1f64df*/
              return 1874; /*0x1f64df*/
            v47 = v46 - 1; /*0x1f64e1*/
            if ( !v47 ) /*0x1f64e4*/
              return 1874; /*0x1f64e4*/
            if ( (unsigned int)(v47 - 1) > 1 ) /*0x1f64e9*/
              return 1875; /*0x1f64b2*/
            else
              return 1877; /*0x1f64f0*/
          case 1877: /*0x1f633f*/
            v48 = a2 - 1; /*0x1f64fb*/
            if ( !v48 ) /*0x1f64fe*/
              return 1875; /*0x1f64fe*/
            v49 = v48 - 1; /*0x1f6500*/
            if ( !v49 ) /*0x1f6503*/
              return 1875; /*0x1f6503*/
            if ( (unsigned int)(v49 - 1) < 2 ) /*0x1f6508*/
              return 1876; /*0x1f64d1*/
            else
              return 1874; /*0x1f650f*/
          case 1878: /*0x1f633f*/
            v50 = a2 - 1; /*0x1f651a*/
            if ( !v50 ) /*0x1f651d*/
              return 1880; /*0x1f651d*/
            v51 = v50 - 1; /*0x1f651f*/
            if ( !v51 ) /*0x1f6522*/
              return 1880; /*0x1f6522*/
            if ( (unsigned int)(v51 - 1) <= 1 ) /*0x1f6527*/
              return 1879; /*0x1f6527*/
            return 1881; /*0x1f6527*/
          case 1879: /*0x1f633f*/
            v52 = a2 - 1; /*0x1f6539*/
            if ( !v52 ) /*0x1f653c*/
              return 1881; /*0x1f653c*/
            v53 = v52 - 1; /*0x1f653e*/
            if ( !v53 ) /*0x1f6541*/
              return 1881; /*0x1f6541*/
            if ( (unsigned int)(v53 - 1) >= 2 ) /*0x1f6546*/
              return 1880; /*0x1f6546*/
            return 1878; /*0x1f6546*/
          case 1880: /*0x1f633f*/
            v54 = a2 - 1; /*0x1f6558*/
            if ( !v54 ) /*0x1f655b*/
              return 1878; /*0x1f655b*/
            v55 = v54 - 1; /*0x1f655d*/
            if ( !v55 ) /*0x1f6560*/
              return 1878; /*0x1f6560*/
            if ( (unsigned int)(v55 - 1) > 1 ) /*0x1f6565*/
              return 1879; /*0x1f652e*/
            else
              return 1881; /*0x1f656c*/
          case 1881: /*0x1f633f*/
            v56 = a2 - 1; /*0x1f6577*/
            if ( !v56 ) /*0x1f657a*/
              return 1879; /*0x1f657a*/
            v57 = v56 - 1; /*0x1f657c*/
            if ( !v57 ) /*0x1f657f*/
              return 1879; /*0x1f657f*/
            if ( (unsigned int)(v57 - 1) < 2 ) /*0x1f6584*/
              return 1880; /*0x1f654d*/
            else
              return 1878; /*0x1f658b*/
          case 1882: /*0x1f633f*/
            v58 = a2 - 1; /*0x1f6596*/
            if ( !v58 ) /*0x1f6599*/
              goto LABEL_125; /*0x1f6599*/
            v59 = v58 - 1; /*0x1f659b*/
            if ( !v59 ) /*0x1f659e*/
              goto LABEL_125; /*0x1f659e*/
            if ( (unsigned int)(v59 - 1) <= 1 ) /*0x1f65a3*/
              goto LABEL_121; /*0x1f65a3*/
            goto LABEL_129; /*0x1f65a3*/
          case 1883: /*0x1f633f*/
            v60 = a2 - 1; /*0x1f65b5*/
            if ( !v60 ) /*0x1f65b8*/
              goto LABEL_129; /*0x1f65b8*/
            v61 = v60 - 1; /*0x1f65ba*/
            if ( !v61 ) /*0x1f65bd*/
              goto LABEL_129; /*0x1f65bd*/
            if ( (unsigned int)(v61 - 1) >= 2 ) /*0x1f65c2*/
              goto LABEL_125; /*0x1f65c2*/
            goto LABEL_133; /*0x1f65c2*/
          case 1884: /*0x1f633f*/
            v62 = a2 - 1; /*0x1f65d4*/
            if ( !v62 ) /*0x1f65d7*/
              goto LABEL_133; /*0x1f65d7*/
            v63 = v62 - 1; /*0x1f65d9*/
            if ( !v63 ) /*0x1f65dc*/
              goto LABEL_133; /*0x1f65dc*/
            if ( (unsigned int)(v63 - 1) > 1 ) /*0x1f65e1*/
LABEL_121:
              result = 1883; /*0x1f65aa*/
            else
LABEL_129:
              result = 1885; /*0x1f65e8*/
            break; /*0x1f65f2*/
          case 1885: /*0x1f633f*/
            v64 = a2 - 1; /*0x1f65f3*/
            if ( !v64 ) /*0x1f65f6*/
              goto LABEL_121; /*0x1f65f6*/
            v65 = v64 - 1; /*0x1f65f8*/
            if ( !v65 ) /*0x1f65fb*/
              goto LABEL_121; /*0x1f65fb*/
            if ( (unsigned int)(v65 - 1) < 2 ) /*0x1f6600*/
LABEL_125:
              result = 1884; /*0x1f65c9*/
            else
LABEL_133:
              result = 1882; /*0x1f6607*/
            break; /*0x1f6611*/
          default:
            return 1461;
        }
        return result; /*0x1f6611*/
      }
LABEL_164:
      if ( (unsigned int)(a2 - 3) < 2 ) /*0x1f66e3*/
        return (unsigned int)a1; /*0x1f6700*/
      else
        return (unsigned int)(a1 == 2703) + 2703; /*0x1f66f5*/
    }
    switch ( a1 ) /*0x1f661c*/
    {
      case 2704: /*0x1f661c*/
        goto LABEL_164; /*0x1f661c*/
      case 2838: /*0x1f661c*/
        v78 = a2 - 1; /*0x1f66bc*/
        if ( !v78 ) /*0x1f66bf*/
          return 2840; /*0x1f66bf*/
        v79 = v78 - 1; /*0x1f66c1*/
        if ( !v79 ) /*0x1f66c4*/
          return 2840; /*0x1f66c4*/
        v80 = v79 - 1; /*0x1f66c6*/
        if ( v80 ) /*0x1f66c9*/
        {
          v81 = v80 - 3; /*0x1f66cb*/
          if ( v81 ) /*0x1f66ce*/
          {
            if ( v81 != 2 ) /*0x1f66d3*/
              return 2839; /*0x1f66d3*/
          }
        }
        break;
      case 2839: /*0x1f661c*/
        v74 = a2 - 1; /*0x1f6698*/
        if ( v74 ) /*0x1f669b*/
        {
          v75 = v74 - 1; /*0x1f669d*/
          if ( v75 ) /*0x1f66a0*/
          {
            v76 = v75 - 1; /*0x1f66a2*/
            if ( v76 ) /*0x1f66a5*/
            {
              v77 = v76 - 3; /*0x1f66a7*/
              if ( v77 ) /*0x1f66aa*/
              {
                if ( v77 != 2 ) /*0x1f66af*/
                  return 2840; /*0x1f66af*/
              }
            }
            return 2838; /*0x1f66af*/
          }
        }
        break;
      case 2840: /*0x1f661c*/
        v70 = a2 - 1; /*0x1f6674*/
        if ( !v70 ) /*0x1f6677*/
          return 2838; /*0x1f6677*/
        v71 = v70 - 1; /*0x1f6679*/
        if ( !v71 ) /*0x1f667c*/
          return 2838; /*0x1f667c*/
        v72 = v71 - 1; /*0x1f667e*/
        if ( !v72 ) /*0x1f6681*/
          return 2839; /*0x1f6681*/
        v73 = v72 - 3; /*0x1f6683*/
        if ( !v73 || v73 == 2 ) /*0x1f668b*/
          return 2839; /*0x1f668b*/
        break;
      case 2841: /*0x1f661c*/
        v66 = a2 - 1; /*0x1f664c*/
        if ( v66 ) /*0x1f664f*/
        {
          v67 = v66 - 1; /*0x1f6655*/
          if ( v67 ) /*0x1f6658*/
          {
            v68 = v67 - 1; /*0x1f665a*/
            if ( !v68 ) /*0x1f665d*/
              return 2840; /*0x1f665d*/
            v69 = v68 - 3; /*0x1f665f*/
            if ( !v69 || v69 == 2 ) /*0x1f6667*/
              return 2840; /*0x1f6673*/
            return 2838; /*0x1f66bb*/
          }
        }
        return 2839; /*0x1f66df*/
      default:
        return 1461; /*0x1f663f*/
    }
    return 2841; /*0x1f6697*/
  }
  if ( a1 == 1861 ) /*0x1f6192*/
  {
    v18 = a2 - 1; /*0x1f62ea*/
    if ( !v18 ) /*0x1f62ed*/
      return 1863; /*0x1f62ed*/
    v19 = v18 - 1; /*0x1f62ef*/
    if ( !v19 ) /*0x1f62f2*/
      return 1863; /*0x1f6355*/
    if ( (unsigned int)(v19 - 1) > 1 ) /*0x1f62f7*/
      return 1864; /*0x1f6374*/
    return 1862; /*0x1f6308*/
  }
  v2 = 1433; /*0x1f6198*/
  if ( a1 > 1433 ) /*0x1f619f*/
  {
    v7 = a1 - 1461; /*0x1f623f*/
    if ( v7 ) /*0x1f6245*/
    {
      v8 = v7 - 1; /*0x1f624b*/
      if ( v8 ) /*0x1f624e*/
      {
        v9 = v8 - 1; /*0x1f6250*/
        if ( v9 ) /*0x1f6253*/
        {
          if ( v9 != 1 ) /*0x1f6258*/
            return 1461; /*0x1f6258*/
          v10 = a2 - 1; /*0x1f625e*/
          if ( v10 ) /*0x1f6260*/
          {
            v11 = v10 - 1; /*0x1f6262*/
            if ( v11 ) /*0x1f6264*/
            {
              if ( (unsigned int)(v11 - 1) <= 1 ) /*0x1f6268*/
                return 1463; /*0x1f627c*/
              return 1461; /*0x1f664b*/
            }
          }
          return 1462; /*0x1f62a3*/
        }
        v12 = a2 - 1; /*0x1f627d*/
        if ( !v12 ) /*0x1f6280*/
          return 1461; /*0x1f6280*/
        v13 = v12 - 1; /*0x1f6286*/
        if ( !v13 ) /*0x1f6289*/
          return 1461; /*0x1f6289*/
        if ( (unsigned int)(v13 - 1) >= 2 ) /*0x1f6292*/
          return 1462; /*0x1f6292*/
      }
      else
      {
        v14 = a2 - 1; /*0x1f62a4*/
        if ( v14 ) /*0x1f62a7*/
        {
          v15 = v14 - 1; /*0x1f62a9*/
          if ( v15 ) /*0x1f62ac*/
          {
            if ( (unsigned int)(v15 - 1) >= 2 ) /*0x1f62b1*/
              return 1463; /*0x1f62ca*/
            return 1461; /*0x1f62b1*/
          }
        }
      }
    }
    else
    {
      v16 = a2 - 1; /*0x1f62cb*/
      if ( !v16 ) /*0x1f62ce*/
        return 1463; /*0x1f62ce*/
      v17 = v16 - 1; /*0x1f62d0*/
      if ( !v17 ) /*0x1f62d3*/
        return 1463; /*0x1f62d3*/
      if ( (unsigned int)(v17 - 1) < 2 ) /*0x1f62d8*/
        return 1462; /*0x1f62d8*/
    }
    return 1464; /*0x1f62e9*/
  }
  if ( a1 != 1433 ) /*0x1f61a5*/
  {
    v3 = a1 - 869; /*0x1f61a7*/
    if ( !v3 ) /*0x1f61ad*/
      return 870; /*0x1f6231*/
    v4 = v3 - 1; /*0x1f61af*/
    if ( !v4 ) /*0x1f61b2*/
      return 869; /*0x1f6226*/
    if ( (unsigned int)(v4 - 561) > 1 ) /*0x1f61ba*/
      return 1461; /*0x1f61ba*/
  }
  qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x1f61d6*/
  v5 = (int)floorf((float)((float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0) * 3.0); /*0x1f6202*/
  if ( v5 ) /*0x1f6208*/
  {
    if ( v5 == 1 ) /*0x1f620d*/
      return 1432; /*0x1f621b*/
  }
  else
  {
    return 1431; /*0x1f6232*/
  }
  return v2; /*0x1f6216*/
}

// [75/110] Address: 0x1f6770
// Method: EditorUI::convertToBaseKey
__int64 __fastcall EditorUI_convertToBaseKey(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 > 1266 ) /*0x1f6776*/
  {
    if ( a2 > 2808 ) /*0x1f67a7*/
    {
      switch ( a2 ) /*0x1f67e4*/
      {
        case 2809: /*0x1f67e4*/
        case 2810: /*0x1f67e4*/
        case 2811: /*0x1f67e4*/
        case 2812: /*0x1f67e4*/
        case 2813: /*0x1f67e4*/
        case 2814: /*0x1f67e4*/
        case 2815: /*0x1f67e4*/
        case 2816: /*0x1f67e4*/
        case 2817: /*0x1f67e4*/
        case 2818: /*0x1f67e4*/
        case 2819: /*0x1f67e4*/
        case 2820: /*0x1f67e4*/
        case 2821: /*0x1f67e4*/
        case 2822: /*0x1f67e4*/
          return 2703;
        case 2823: /*0x1f67e4*/
        case 2824: /*0x1f67e4*/
        case 2825: /*0x1f67e4*/
        case 2826: /*0x1f67e4*/
        case 2827: /*0x1f67e4*/
        case 2828: /*0x1f67e4*/
        case 2829: /*0x1f67e4*/
        case 2830: /*0x1f67e4*/
        case 2831: /*0x1f67e4*/
        case 2832: /*0x1f67e4*/
        case 2833: /*0x1f67e4*/
        case 2834: /*0x1f67e4*/
        case 2835: /*0x1f67e4*/
        case 2836: /*0x1f67e4*/
        case 2837: /*0x1f67e4*/
          result = 2704; /*0x1f67ec*/
          break; /*0x1f67f1*/
        case 2842: /*0x1f67e4*/
        case 2846: /*0x1f67e4*/
          result = 2838; /*0x1f67f2*/
          break; /*0x1f67f7*/
        case 2843: /*0x1f67e4*/
        case 2847: /*0x1f67e4*/
          result = 2839; /*0x1f67f8*/
          break; /*0x1f67fd*/
        case 2844: /*0x1f67e4*/
        case 2848: /*0x1f67e4*/
          result = 2840; /*0x1f67fe*/
          break; /*0x1f6803*/
        case 2845: /*0x1f67e4*/
        case 2849: /*0x1f67e4*/
          result = 2841; /*0x1f6804*/
          break; /*0x1f6804*/
        default:
          return (unsigned int)a2;
      }
    }
    else if ( a2 == 2808 ) /*0x1f67a9*/
    {
      return 2703; /*0x1f67e6*/
    }
    else
    {
      if ( a2 == 1267 ) /*0x1f67b6*/
        return 869; /*0x1f67b6*/
      return (unsigned int)a2; /*0x1f67b9*/
    }
  }
  else
  {
    if ( a2 != 1266 ) /*0x1f6778*/
    {
      switch ( a2 ) /*0x1f6799*/
      {
        case 867: /*0x1f6799*/
        case 868: /*0x1f6799*/
        case 869: /*0x1f6799*/
        case 870: /*0x1f6799*/
        case 871: /*0x1f6799*/
        case 872: /*0x1f6799*/
          return 869;
        default:
          return (unsigned int)a2;
      }
    }
    return 869; /*0x1f679b*/
  }
  return result; /*0x1f67a0*/
}

// [76/110] Address: 0x1f6870
// Method: EditorUI::convertKeyBasedOnNeighbors
__int64 __fastcall EditorUI_convertKeyBasedOnNeighbors(
        __int64 a1,
        int a2,
        unsigned int a3,
        const struct cocos2d::CCPoint *a4,
        cocos2d::CCArray *a5)
{
  unsigned int v7; // ebp
  const struct cocos2d::CCPoint *v8; // r9
  cocos2d::CCArray *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct cocos2d::CCObject *Neighbor; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  struct cocos2d::CCObject *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  struct cocos2d::CCObject *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  struct cocos2d::CCObject *v21; // rcx
  __int64 result; // rax
  unsigned int v23; // eax
  bool v24; // zf
  unsigned int v25; // eax
  float v26; // xmm0_4
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  v27 = a1; /*0x1f687a*/
  v7 = EditorUI_convertToBaseKey(a1, a2); /*0x1f689e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, v8); /*0x1f68a0*/
  v9 = a5; /*0x1f68a6*/
  Neighbor = EditorUI_getNeighbor(v11, a3, v10, 1u, a5); /*0x1f68cb*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, a4); /*0x1f68ce*/
  v15 = EditorUI_getNeighbor(v14, a3, v13, 2u, v9); /*0x1f68f1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, a4); /*0x1f68f4*/
  v18 = EditorUI_getNeighbor(v17, a3, v16, 3u, v9); /*0x1f6917*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, a4); /*0x1f691a*/
  v21 = EditorUI_getNeighbor(v20, a3, v19, 4u, v9); /*0x1f6935*/
  if ( (int)v7 > 2838 ) /*0x1f693f*/
  {
    v25 = 2839; /*0x1f6c70*/
    switch ( v7 ) /*0x1f6c77*/
    {
      case 0xB17u: /*0x1f6c77*/
        if ( Neighbor && v15 && v18 ) /*0x1f6cfc*/
          goto LABEL_50; /*0x1f6cfc*/
        if ( v21 ) /*0x1f6d05*/
          return v7; /*0x1f6d05*/
        if ( !Neighbor ) /*0x1f6d0a*/
          return 2843; /*0x1f6d11*/
        v23 = 2847; /*0x1f6d13*/
        break;
      case 0xB18u: /*0x1f6c77*/
        if ( Neighbor && v15 ) /*0x1f6cc3*/
        {
          if ( v18 && v21 ) /*0x1f6cd2*/
            return 2840; /*0x1f6cd2*/
          return v7; /*0x1f6cd2*/
        }
        if ( v18 ) /*0x1f6cda*/
          return v7; /*0x1f6cda*/
        if ( !Neighbor ) /*0x1f6cdf*/
          return 2844; /*0x1f6ce6*/
        v23 = 2848; /*0x1f6ce8*/
        break;
      case 0xB19u: /*0x1f6c77*/
        if ( Neighbor && v15 && v18 ) /*0x1f6c94*/
        {
          if ( v21 ) /*0x1f6c9e*/
            return 2841; /*0x1f6c9e*/
          return v7; /*0x1f6c9e*/
        }
        if ( v21 ) /*0x1f6ca6*/
          return v7; /*0x1f6ca6*/
        if ( !Neighbor ) /*0x1f6cab*/
          return 2845; /*0x1f6cb2*/
        v23 = 2849; /*0x1f6cb4*/
        break;
      default:
        return v7; /*0x1f6c81*/
    }
LABEL_125:
    v24 = v15 == 0; /*0x1f6d18*/
LABEL_126:
    if ( v24 ) /*0x1f6d1b*/
      return v23; /*0x1f6d1b*/
    return v7; /*0x1f6d1b*/
  }
  if ( v7 == 2838 ) /*0x1f6945*/
  {
    if ( Neighbor && v15 ) /*0x1f6c36*/
    {
      if ( v18 && v21 ) /*0x1f6c44*/
        return 2838; /*0x1f6c44*/
      return v7; /*0x1f6c44*/
    }
    if ( v18 ) /*0x1f6c4f*/
      return v7; /*0x1f6c4f*/
    if ( !Neighbor ) /*0x1f6c58*/
      return 2842; /*0x1f6c5f*/
    v23 = 2846; /*0x1f6c64*/
    goto LABEL_125; /*0x1f6c69*/
  }
  if ( v7 != 869 ) /*0x1f6953*/
  {
    if ( v7 != 2703 ) /*0x1f695f*/
    {
      if ( v7 == 2704 ) /*0x1f6968*/
      {
        if ( !Neighbor ) /*0x1f6971*/
        {
          if ( v15 ) /*0x1f697a*/
          {
            if ( v18 ) /*0x1f697f*/
            {
              result = 2830; /*0x1f6984*/
              if ( v21 ) /*0x1f698e*/
                return 2823; /*0x1f698e*/
            }
            else
            {
              result = 2833; /*0x1f6999*/
              if ( v21 ) /*0x1f69a3*/
                return 2829; /*0x1f69a3*/
            }
          }
          else
          {
            if ( v18 ) /*0x1f69ae*/
            {
              if ( v21 ) /*0x1f69b3*/
                return 2828; /*0x1f69ba*/
            }
            else if ( v21 ) /*0x1f69c2*/
            {
              return 2835; /*0x1f69c9*/
            }
            return 2837 - (unsigned int)(v18 != 0); /*0x1f69ee*/
          }
          return result; /*0x1f698e*/
        }
        if ( v15 ) /*0x1f69fb*/
        {
          if ( !v18 ) /*0x1f6a3a*/
          {
            result = 2827; /*0x1f6a3f*/
            if ( v21 ) /*0x1f6a49*/
              return 2825; /*0x1f6a49*/
            return result; /*0x1f6a49*/
          }
          v23 = 2826; /*0x1f6a51*/
          v24 = v21 == 0; /*0x1f6a56*/
        }
        else
        {
          if ( !v18 ) /*0x1f6a00*/
          {
            if ( v21 ) /*0x1f6a21*/
              return 2831; /*0x1f6a23*/
            else
              return 2834; /*0x1f6a2d*/
          }
          if ( v21 ) /*0x1f6a05*/
            return 2824; /*0x1f6a0c*/
          v23 = 2832; /*0x1f6a11*/
          v24 = 1; /*0x1f6a16*/
        }
        goto LABEL_126; /*0x1f6a19*/
      }
      return v7; /*0x1f6d1e*/
    }
    if ( !Neighbor ) /*0x1f6a61*/
    {
      if ( v15 ) /*0x1f6a6a*/
      {
        if ( v18 ) /*0x1f6a6f*/
        {
          result = 2815; /*0x1f6a74*/
          if ( v21 ) /*0x1f6a7e*/
            return 2808; /*0x1f6a7e*/
        }
        else
        {
          result = 2818; /*0x1f6a89*/
          if ( v21 ) /*0x1f6a93*/
            return 2814; /*0x1f6a93*/
        }
      }
      else
      {
        if ( v18 ) /*0x1f6a9e*/
        {
          if ( v21 ) /*0x1f6aa3*/
            return 2813; /*0x1f6aaa*/
        }
        else if ( v21 ) /*0x1f6ab2*/
        {
          return 2820; /*0x1f6ab9*/
        }
        return 2822 - (unsigned int)(v18 != 0); /*0x1f6ada*/
      }
      return result; /*0x1f6a7e*/
    }
    if ( !v15 ) /*0x1f6b09*/
    {
      if ( !v18 ) /*0x1f6b0e*/
      {
        if ( v21 ) /*0x1f6b2f*/
          return 2816; /*0x1f6b31*/
        else
          return 2819; /*0x1f6b3b*/
      }
      if ( v21 ) /*0x1f6b13*/
        return 2809; /*0x1f6b1a*/
      v23 = 2817; /*0x1f6b1f*/
      v24 = 1; /*0x1f6b24*/
      goto LABEL_126; /*0x1f6b27*/
    }
    if ( !v18 ) /*0x1f6b48*/
    {
      result = 2812; /*0x1f6b4d*/
      if ( v21 ) /*0x1f6b57*/
        return 2810; /*0x1f6b57*/
      return result; /*0x1f6b57*/
    }
    if ( !v21 ) /*0x1f6b62*/
      return 2811; /*0x1f6b69*/
    v25 = 2703; /*0x1f6af6*/
LABEL_50:
    if ( v21 ) /*0x1f6afe*/
      return v25; /*0x1f6afe*/
    return v7; /*0x1f6afe*/
  }
  qword_905FA8 = 214013 * qword_905FA8 + 2531011; /*0x1f6b7f*/
  v26 = (float)(((unsigned __int64)qword_905FA8 >> 16) & 0x7FFF) / 32767.0; /*0x1f6b96*/
  if ( Neighbor ) /*0x1f6ba1*/
  {
    if ( v15 && v18 && v21 ) /*0x1f6bb0*/
      return 869; /*0x1f6bb7*/
  }
  else if ( !v15 && !v18 && !v21 ) /*0x1f6bc9*/
  {
    return (unsigned int)(v26 <= 0.5) + 867; /*0x1f6bdd*/
  }
  if ( v18 ) /*0x1f6bf1*/
  {
    if ( v21 ) /*0x1f6c0a*/
    {
      return (unsigned int)(v26 <= 0.5) + 869; /*0x1f6c23*/
    }
    else
    {
      result = 1267; /*0x1f6c0e*/
      if ( v26 > 0.5 ) /*0x1f6c18*/
        return 872; /*0x1f6c18*/
    }
  }
  else
  {
    result = 1266; /*0x1f6bf5*/
    if ( v26 > 0.5 ) /*0x1f6bff*/
      return 871; /*0x1f6bff*/
  }
  return result; /*0x1f6d20*/
}

// [77/110] Address: 0x1f6d40
// Method: EditorUI::createRockEdges
cocos2d::CCArray *__fastcall EditorUI_createRockEdges(__int64 a1, cocos2d::CCArray *a2)
{
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rsi
  __int64 v6; // rcx
  cocos2d::CCArray *v7; // r14
  unsigned int i; // ebp
  struct cocos2d::CCObject *v9; // r15
  char v10; // r13
  int j; // edi
  float v12; // xmm2_4
  cocos2d::CCPoint *v13; // rcx
  float v14; // xmm1_4
  __int64 v15; // rax
  unsigned int v16; // ebx
  struct cocos2d::CCObject *v17; // rax
  cocos2d::CCRect *v18; // rax
  struct cocos2d::CCObject *EdgeForObject; // rax
  struct cocos2d::CCObject *v20; // rax
  __int64 v21; // r8
  struct cocos2d::CCObject *v22; // rax
  struct cocos2d::CCObject *v23; // rsi
  unsigned int *v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // rdi
  _QWORD *k; // rbp
  __int64 v28; // rbx
  _BYTE v30[8]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v31[8]; // [rsp+28h] [rbp-80h] BYREF
  char v32; // [rsp+30h] [rbp-78h] BYREF
  char v33; // [rsp+38h] [rbp-70h] BYREF
  char v34; // [rsp+40h] [rbp-68h] BYREF
  char v35; // [rsp+48h] [rbp-60h] BYREF
  char v36; // [rsp+B8h] [rbp+10h]
  char v37; // [rsp+C0h] [rbp+18h]
  char v38; // [rsp+C8h] [rbp+20h] BYREF

  if ( !a2 || !cocos2d::CCArray::count(a2) ) /*0x1f6d5d*/
    return 0; /*0x1f70a3*/
  v5 = (cocos2d::CCArray *)cocos2d::CCArray::create(v4); /*0x1f6d8e*/
  v7 = (cocos2d::CCArray *)cocos2d::CCArray::create(v6); /*0x1f6d9d*/
  cocos2d::CCArray::addObjectsFromArray(v5, a2); /*0x1f6da0*/
  for ( i = 0; i < cocos2d::CCArray::count(v5); ++i ) /*0x1f6dab*/
  {
    v9 = cocos2d::CCArray::objectAtIndex(v5, i); /*0x1f6df0*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v9 + 1208LL))(v9, v30); /*0x1f6e00*/
    v10 = 0; /*0x1f6e07*/
    v37 = 0; /*0x1f6e0a*/
    v36 = 0; /*0x1f6e11*/
    for ( j = 0; j < 4; ++j ) /*0x1f6e18*/
    {
      while ( 1 ) /*0x1f6e2f*/
      {
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v38, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f6e2f*/
        switch ( j ) /*0x1f6e39*/
        {
          case 0: /*0x1f6e39*/
            v12 = 30.0; /*0x1f6e6e*/
            v13 = (cocos2d::CCPoint *)&v35; /*0x1f6e71*/
            goto LABEL_13; /*0x1f6e71*/
          case 1: /*0x1f6e39*/
            v12 = 0.0; /*0x1f6e61*/
            v13 = (cocos2d::CCPoint *)&v34; /*0x1f6e64*/
            v14 = 30.0; /*0x1f6e69*/
            break;
          case 2: /*0x1f6e39*/
            v12 = -30.0; /*0x1f6e57*/
            v13 = (cocos2d::CCPoint *)&v33; /*0x1f6e5a*/
LABEL_13:
            v14 = 0.0; /*0x1f6e76*/
            break; /*0x1f6e76*/
          case 3: /*0x1f6e39*/
            v12 = 0.0; /*0x1f6e4a*/
            v13 = (cocos2d::CCPoint *)&v32; /*0x1f6e4d*/
            v14 = -30.0; /*0x1f6e52*/
            break;
          default:
            goto LABEL_15; /*0x1f6e48*/
        }
        cocos2d::CCPoint::CCPoint(v13, v14, v12); /*0x1f6e79*/
        cocos2d::CCPoint::operator=(&v38, v15); /*0x1f6e8a*/
LABEL_15:
        cocos2d::CCPoint::operator+(v30, v31, &v38); /*0x1f6e90*/
        v16 = 0; /*0x1f6eab*/
        if ( cocos2d::CCArray::count(v5) ) /*0x1f6ead*/
        {
          do /*0x1f6eb9*/
          {
            if ( v16 != i ) /*0x1f6eb9*/
            {
              v17 = cocos2d::CCArray::objectAtIndex(v5, v16); /*0x1f6ec0*/
              v18 = (cocos2d::CCRect *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v17 + 1184LL))(v17); /*0x1f6ed3*/
              if ( cocos2d::CCRect::containsPoint(v18, (const struct cocos2d::CCPoint *)v31) ) /*0x1f6edd*/
                goto LABEL_36; /*0x1f6ee5*/
            }
          }
          while ( ++v16 < cocos2d::CCArray::count(v5) ); /*0x1f6eb9*/
        }
        EdgeForObject = (struct cocos2d::CCObject *)EditorUI_createEdgeForObject(a1, v9, (unsigned int)j); /*0x1f6efa*/
        if ( EdgeForObject ) /*0x1f6f0b*/
          cocos2d::CCArray::addObject(v7, EdgeForObject); /*0x1f6f13*/
        if ( j ) /*0x1f6f1d*/
          break; /*0x1f6f1d*/
        v10 = 1; /*0x1f7099*/
        j = 1; /*0x1f709c*/
      }
      switch ( j ) /*0x1f6f26*/
      {
        case 1: /*0x1f6f26*/
          v37 = 1; /*0x1f6f98*/
          if ( !v10 ) /*0x1f6fa3*/
            continue; /*0x1f6fa3*/
          v21 = 4; /*0x1f6fa5*/
          goto LABEL_34; /*0x1f6fa5*/
        case 2: /*0x1f6f26*/
          v36 = 1; /*0x1f6f7e*/
          if ( !v37 ) /*0x1f6f8e*/
            continue; /*0x1f6f8e*/
          v21 = 5; /*0x1f6f90*/
          goto LABEL_34; /*0x1f6f96*/
        case 3: /*0x1f6f26*/
          if ( v36 ) /*0x1f6f4d*/
          {
            v20 = (struct cocos2d::CCObject *)EditorUI_createEdgeForObject(a1, v9, 6); /*0x1f6f5b*/
            if ( v20 ) /*0x1f6f63*/
              cocos2d::CCArray::addObject(v7, v20); /*0x1f6f6b*/
          }
          if ( v10 ) /*0x1f6f74*/
          {
            v21 = 7; /*0x1f6f76*/
LABEL_34:
            v22 = (struct cocos2d::CCObject *)EditorUI_createEdgeForObject(a1, v9, v21); /*0x1f6fab*/
            if ( v22 ) /*0x1f6fb9*/
              cocos2d::CCArray::addObject(v7, v22); /*0x1f6fc1*/
            continue; /*0x1f6fc1*/
          }
          break;
      }
LABEL_36:
      ; /*0x1f6fc7*/
    }
  }
  if ( cocos2d::CCArray::count(v7) ) /*0x1f6fff*/
  {
    v23 = cocos2d::CCArray::objectAtIndex(v5, 0); /*0x1f7014*/
    if ( v23 ) /*0x1f701a*/
    {
      if ( v7 ) /*0x1f701f*/
      {
        v24 = (unsigned int *)*((_QWORD *)v7 + 7); /*0x1f7021*/
        v25 = *v24; /*0x1f7025*/
        if ( (_DWORD)v25 ) /*0x1f7029*/
        {
          v26 = (_QWORD *)*((_QWORD *)v24 + 2); /*0x1f702b*/
          for ( k = &v26[v25 - 1]; v26 <= k; *(_BYTE *)(v28 + 1156) = 1 ) /*0x1f703a*/
          {
            v28 = *v26; /*0x1f7040*/
            if ( !*v26 ) /*0x1f7040*/
              break; /*0x1f7046*/
            GameObject_duplicateColorMode(*v26, v23); /*0x1f704e*/
            GameObject_duplicateAttributes(v28, v23); /*0x1f7059*/
            ++v26; /*0x1f705e*/
          }
        }
      }
    }
  }
  return v7; /*0x1f708e*/
}

// [78/110] Address: 0x1f70b0
// Method: EditorUI::createEdgeForObject
__int64 __fastcall EditorUI_createEdgeForObject(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  float v11; // xmm1_4
  float v12; // xmm2_4
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-8h] BYREF
  char v18; // [rsp+58h] [rbp+28h] BYREF
  char v19; // [rsp+68h] [rbp+38h] BYREF

  switch ( *(_DWORD *)(a2 + 1036) ) /*0x1f70f5*/
  {
    case 0x544: /*0x1f70f5*/
      if ( !a3 ) /*0x1f729f*/
      {
        v5 = 1359; /*0x1f72c5*/
        goto LABEL_64; /*0x1f72ca*/
      }
      if ( a3 == 3 ) /*0x1f72a5*/
      {
        v5 = 1395; /*0x1f72bb*/
        goto LABEL_70; /*0x1f72c0*/
      }
      if ( a3 != 7 ) /*0x1f72ab*/
        return 0; /*0x1f72ab*/
      v5 = 1363; /*0x1f72b1*/
LABEL_78:
      sub_19CE00(&v19, v5); /*0x1f74d0*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f74e6*/
      v11 = -30.0; /*0x1f74ec*/
      goto LABEL_79; /*0x1f74ec*/
    case 0x545: /*0x1f70f5*/
      if ( a3 ) /*0x1f72d2*/
      {
        v6 = a3 - 1; /*0x1f72d4*/
        if ( !v6 ) /*0x1f72d8*/
        {
          v5 = 1357; /*0x1f72ee*/
          goto LABEL_66; /*0x1f72f3*/
        }
        if ( v6 != 3 ) /*0x1f72de*/
          return 0; /*0x1f72de*/
        v5 = 1364; /*0x1f72e4*/
LABEL_72:
        sub_19CE00(&v19, v5); /*0x1f743e*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f7454*/
        v11 = 30.0; /*0x1f745a*/
        v12 = 30.0; /*0x1f7462*/
      }
      else
      {
        v5 = 1360; /*0x1f72f8*/
LABEL_64:
        sub_19CE00(&v19, v5); /*0x1f7382*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f7398*/
        v11 = 0.0; /*0x1f739e*/
LABEL_79:
        v12 = 30.0; /*0x1f74f4*/
      }
      goto LABEL_80; /*0x1f7465*/
    case 0x546: /*0x1f70f5*/
      v7 = a3 - 2; /*0x1f7302*/
      if ( !v7 ) /*0x1f7306*/
      {
        v5 = 1361; /*0x1f732c*/
        goto LABEL_68; /*0x1f7331*/
      }
      v8 = v7 - 1; /*0x1f7308*/
      if ( v8 ) /*0x1f730c*/
      {
        if ( v8 != 3 ) /*0x1f7312*/
          return 0; /*0x1f7312*/
        v5 = 1365; /*0x1f7318*/
LABEL_76:
        sub_19CE00(&v19, v5); /*0x1f74a2*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f74b8*/
        v11 = -30.0; /*0x1f74be*/
        v12 = -30.0; /*0x1f74c6*/
      }
      else
      {
        v5 = 1356; /*0x1f7322*/
LABEL_70:
        sub_19CE00(&v19, v5); /*0x1f740d*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f7423*/
        v11 = -30.0; /*0x1f7429*/
        v12 = 0.0; /*0x1f7431*/
      }
      goto LABEL_80; /*0x1f74c9*/
    case 0x547: /*0x1f70f5*/
      v9 = a3 - 1; /*0x1f7336*/
      if ( v9 ) /*0x1f733a*/
      {
        v10 = v9 - 1; /*0x1f733c*/
        if ( v10 ) /*0x1f7340*/
        {
          if ( v10 != 3 ) /*0x1f7346*/
            return 0; /*0x1f75a1*/
          v5 = 1366; /*0x1f734c*/
LABEL_74:
          sub_19CE00(&v19, v5); /*0x1f746f*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f7485*/
          v12 = -30.0; /*0x1f748b*/
          v11 = 30.0; /*0x1f7493*/
        }
        else
        {
          v5 = 1362; /*0x1f7356*/
LABEL_68:
          sub_19CE00(&v19, v5); /*0x1f73dc*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f73f2*/
          v12 = -30.0; /*0x1f73f8*/
          v11 = 0.0; /*0x1f7400*/
        }
      }
      else
      {
        v5 = 1358; /*0x1f735d*/
LABEL_66:
        sub_19CE00(&v19, v5); /*0x1f73ab*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f73c1*/
        v11 = 30.0; /*0x1f73c7*/
        v12 = 0.0; /*0x1f73cf*/
      }
LABEL_80:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v17, v11, v12); /*0x1f74fc*/
      cocos2d::CCPoint::operator=(&v18, v13); /*0x1f750d*/
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 1208LL))(a2, v16); /*0x1f751d*/
      cocos2d::CCPoint::operator+(v16, v17, &v19); /*0x1f752f*/
      cocos2d::CCPoint::operator=(v16, v17); /*0x1f753d*/
      cocos2d::CCPoint::operator+(v16, v17, &v18); /*0x1f754f*/
      cocos2d::CCPoint::operator=(v16, v17); /*0x1f755d*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v17, (const struct cocos2d::CCPoint *)v16); /*0x1f756b*/
      result = sub_1B0700(a1, v5, v14); /*0x1f7579*/
      if ( result ) /*0x1f7581*/
        *(_WORD *)(result + 1212) = *(_WORD *)(a2 + 1210) + 1; /*0x1f758d*/
      return result;
    case 0x597: /*0x1f70f5*/
    case 0x598: /*0x1f70f5*/
    case 0x599: /*0x1f70f5*/
      switch ( a3 ) /*0x1f737b*/
      {
        case 0: /*0x1f737b*/
          v5 = 1435; /*0x1f737d*/
          goto LABEL_64; /*0x1f737d*/
        case 1: /*0x1f737b*/
          v5 = 1436; /*0x1f73a6*/
          goto LABEL_66; /*0x1f73a6*/
        case 2: /*0x1f737b*/
          v5 = 1437; /*0x1f73d7*/
          goto LABEL_68; /*0x1f73d7*/
        case 3: /*0x1f737b*/
          v5 = 1434; /*0x1f7408*/
          goto LABEL_70; /*0x1f7408*/
        case 4: /*0x1f737b*/
          v5 = 1439; /*0x1f7439*/
          goto LABEL_72; /*0x1f7439*/
        case 5: /*0x1f737b*/
          v5 = 1441; /*0x1f746a*/
          goto LABEL_74; /*0x1f746a*/
        case 6: /*0x1f737b*/
          v5 = 1440; /*0x1f749d*/
          goto LABEL_76; /*0x1f749d*/
        case 7: /*0x1f737b*/
          v5 = 1438; /*0x1f74cb*/
          goto LABEL_78; /*0x1f74cb*/
        default:
          return 0;
      }
    case 0x5B5: /*0x1f70f5*/
      switch ( a3 ) /*0x1f710f*/
      {
        case 0: /*0x1f710f*/
          v5 = 1629; /*0x1f7111*/
          goto LABEL_64; /*0x1f7116*/
        case 1: /*0x1f710f*/
          v5 = 1625; /*0x1f711b*/
          goto LABEL_66; /*0x1f7120*/
        case 2: /*0x1f710f*/
          v5 = 1633; /*0x1f7125*/
          goto LABEL_68; /*0x1f712a*/
        case 3: /*0x1f710f*/
          v5 = 1621; /*0x1f712f*/
          goto LABEL_70; /*0x1f7134*/
        case 4: /*0x1f710f*/
          v5 = 1638; /*0x1f7139*/
          goto LABEL_72; /*0x1f713e*/
        case 5: /*0x1f710f*/
          v5 = 1640; /*0x1f7143*/
          goto LABEL_74; /*0x1f7148*/
        case 6: /*0x1f710f*/
          v5 = 1639; /*0x1f714d*/
          goto LABEL_76; /*0x1f7152*/
        case 7: /*0x1f710f*/
          v5 = 1637; /*0x1f7157*/
          goto LABEL_78; /*0x1f715c*/
        default:
          return 0;
      }
    case 0x5B6: /*0x1f70f5*/
      switch ( a3 ) /*0x1f7178*/
      {
        case 0: /*0x1f7178*/
          v5 = 1630; /*0x1f717a*/
          goto LABEL_64; /*0x1f717f*/
        case 1: /*0x1f7178*/
          v5 = 1627; /*0x1f7184*/
          goto LABEL_66; /*0x1f7189*/
        case 2: /*0x1f7178*/
          v5 = 1634; /*0x1f718e*/
          goto LABEL_68; /*0x1f7193*/
        case 3: /*0x1f7178*/
          v5 = 1623; /*0x1f7198*/
          goto LABEL_70; /*0x1f719d*/
        case 4: /*0x1f7178*/
          v5 = 1642; /*0x1f71a2*/
          goto LABEL_72; /*0x1f71a7*/
        case 5: /*0x1f7178*/
          v5 = 1644; /*0x1f71ac*/
          goto LABEL_74; /*0x1f71b1*/
        case 6: /*0x1f7178*/
          v5 = 1643; /*0x1f71b6*/
          goto LABEL_76; /*0x1f71bb*/
        case 7: /*0x1f7178*/
          v5 = 1641; /*0x1f71c0*/
          goto LABEL_78; /*0x1f71c5*/
        default:
          return 0;
      }
    case 0x5B7: /*0x1f70f5*/
      switch ( a3 ) /*0x1f71e1*/
      {
        case 0: /*0x1f71e1*/
          v5 = 1631; /*0x1f71e3*/
          goto LABEL_64; /*0x1f71e8*/
        case 1: /*0x1f71e1*/
          v5 = 1626; /*0x1f71ed*/
          goto LABEL_66; /*0x1f71f2*/
        case 2: /*0x1f71e1*/
          v5 = 1635; /*0x1f71f7*/
          goto LABEL_68; /*0x1f71fc*/
        case 3: /*0x1f71e1*/
          v5 = 1622; /*0x1f7201*/
          goto LABEL_70; /*0x1f7206*/
        case 4: /*0x1f71e1*/
          v5 = 1646; /*0x1f720b*/
          goto LABEL_72; /*0x1f7210*/
        case 5: /*0x1f71e1*/
          v5 = 1648; /*0x1f7215*/
          goto LABEL_74; /*0x1f721a*/
        case 6: /*0x1f71e1*/
          v5 = 1647; /*0x1f721f*/
          goto LABEL_76; /*0x1f7224*/
        case 7: /*0x1f71e1*/
          v5 = 1645; /*0x1f7229*/
          goto LABEL_78; /*0x1f722e*/
        default:
          return 0;
      }
    case 0x5B8: /*0x1f70f5*/
      switch ( a3 ) /*0x1f724a*/
      {
        case 0: /*0x1f724a*/
          v5 = 1632; /*0x1f724c*/
          goto LABEL_64; /*0x1f7251*/
        case 1: /*0x1f724a*/
          v5 = 1628; /*0x1f7256*/
          goto LABEL_66; /*0x1f725b*/
        case 2: /*0x1f724a*/
          v5 = 1636; /*0x1f7260*/
          goto LABEL_68; /*0x1f7265*/
        case 3: /*0x1f724a*/
          v5 = 1624; /*0x1f726a*/
          goto LABEL_70; /*0x1f726f*/
        case 4: /*0x1f724a*/
          v5 = 1650; /*0x1f7274*/
          goto LABEL_72; /*0x1f7279*/
        case 5: /*0x1f724a*/
          v5 = 1652; /*0x1f727e*/
          goto LABEL_74; /*0x1f7283*/
        case 6: /*0x1f724a*/
          v5 = 1651; /*0x1f7288*/
          goto LABEL_76; /*0x1f728d*/
        case 7: /*0x1f724a*/
          v5 = 1649; /*0x1f7292*/
          goto LABEL_78; /*0x1f7297*/
        default:
          return 0;
      }
    default:
      return 0;
  }
}

// [79/110] Address: 0x1f76f0
// Method: EditorUI::createOutlines
cocos2d::CCArray *__fastcall EditorUI_createOutlines(__int64 a1, cocos2d::CCArray *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // r12
  __int64 v6; // rcx
  cocos2d::CCArray *v7; // r14
  unsigned int v8; // r15d
  struct cocos2d::CCObject *v9; // rsi
  const struct cocos2d::CCPoint *v10; // rax
  int v11; // ecx
  int v12; // r13d
  char v13; // r14
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  struct cocos2d::CCObject *v32; // rdi
  __int64 v33; // rbx
  unsigned __int8 v34; // al
  unsigned __int8 v35; // al
  float v36; // xmm0_4
  __int64 v37; // rax
  float v38; // xmm1_4
  float v39; // xmm0_4
  __int64 v40; // rax
  float v41; // xmm1_4
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // rbx
  unsigned __int8 v46; // al
  __int64 v47; // rbx
  unsigned __int8 v48; // al
  float v49; // xmm0_4
  __int64 v50; // rax
  float v51; // xmm1_4
  float v52; // xmm0_4
  __int64 v53; // rax
  float v54; // xmm1_4
  _BYTE v56[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v57[8]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v58[8]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v59[8]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v60[8]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v61[8]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v62[8]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v63[8]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v64[16]; // [rsp+70h] [rbp-78h] BYREF
  char v66; // [rsp+F8h] [rbp+10h] BYREF
  cocos2d::CCArray *v67; // [rsp+100h] [rbp+18h]
  char v68; // [rsp+108h] [rbp+20h] BYREF

  v3 = a1; /*0x1f7701*/
  if ( !a2 || !cocos2d::CCArray::count(a2) ) /*0x1f7710*/
    return 0; /*0x1f7fc5*/
  v5 = (cocos2d::CCArray *)cocos2d::CCArray::create(v4); /*0x1f773c*/
  v7 = (cocos2d::CCArray *)cocos2d::CCArray::create(v6); /*0x1f774b*/
  v67 = v7; /*0x1f774e*/
  cocos2d::CCArray::addObjectsFromArray(v5, a2); /*0x1f7756*/
  v8 = 0; /*0x1f775f*/
  if ( cocos2d::CCArray::count(v5) ) /*0x1f7762*/
  {
    while ( 1 ) /*0x1f77bc*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(v5, v8); /*0x1f77bc*/
      v10 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 200LL))(v9); /*0x1f77cc*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v66, v10); /*0x1f77d9*/
      v11 = *((_DWORD *)v9 + 259); /*0x1f77df*/
      v12 = 0; /*0x1f77e5*/
      v13 = 0; /*0x1f77e8*/
      if ( v11 <= 1621 ) /*0x1f77f1*/
      {
        if ( v11 != 1621 ) /*0x1f77f7*/
        {
          switch ( v11 ) /*0x1f7821*/
          {
            case 1348: /*0x1f7821*/
              v14 = 1386; /*0x1f7823*/
              v12 = 1382; /*0x1f7828*/
              goto LABEL_88; /*0x1f782e*/
            case 1349: /*0x1f7821*/
              v14 = 1385; /*0x1f7833*/
              v12 = 1380; /*0x1f7838*/
              goto LABEL_88; /*0x1f783e*/
            case 1350: /*0x1f7821*/
              v14 = 1384; /*0x1f7843*/
              v12 = 1381; /*0x1f7848*/
              goto LABEL_88; /*0x1f784e*/
            case 1351: /*0x1f7821*/
              v14 = 1383; /*0x1f7853*/
              v12 = 1379; /*0x1f7858*/
              goto LABEL_88; /*0x1f785e*/
            case 1356: /*0x1f7821*/
              v14 = 1368; /*0x1f786d*/
              goto LABEL_88; /*0x1f7872*/
            case 1357: /*0x1f7821*/
              v14 = 1369; /*0x1f7877*/
              goto LABEL_88; /*0x1f787c*/
            case 1358: /*0x1f7821*/
              v14 = 1370; /*0x1f7881*/
              goto LABEL_88; /*0x1f7886*/
            case 1359: /*0x1f7821*/
              v14 = 1371; /*0x1f788b*/
              goto LABEL_88; /*0x1f7890*/
            case 1360: /*0x1f7821*/
              v14 = 1372; /*0x1f7895*/
              goto LABEL_88; /*0x1f789a*/
            case 1361: /*0x1f7821*/
              v14 = 1373; /*0x1f789f*/
              goto LABEL_88; /*0x1f78a4*/
            case 1362: /*0x1f7821*/
              v14 = 1374; /*0x1f78a9*/
              goto LABEL_88; /*0x1f78ae*/
            case 1363: /*0x1f7821*/
              v14 = 1375; /*0x1f78b3*/
              goto LABEL_88; /*0x1f78b8*/
            case 1364: /*0x1f7821*/
              v14 = 1376; /*0x1f78bd*/
              goto LABEL_88; /*0x1f78c2*/
            case 1365: /*0x1f7821*/
              v14 = 1377; /*0x1f78c7*/
              goto LABEL_88; /*0x1f78cc*/
            case 1366: /*0x1f7821*/
              v14 = 1378; /*0x1f78d1*/
              goto LABEL_88; /*0x1f78d6*/
            case 1395: /*0x1f7821*/
              v14 = 1367; /*0x1f7863*/
              goto LABEL_88; /*0x1f7868*/
            case 1434: /*0x1f7821*/
              v14 = 1453; /*0x1f78db*/
              goto LABEL_88; /*0x1f78e0*/
            case 1435: /*0x1f7821*/
              v14 = 1454; /*0x1f78e5*/
              goto LABEL_88; /*0x1f78ea*/
            case 1436: /*0x1f7821*/
              v14 = 1455; /*0x1f78ef*/
              goto LABEL_88; /*0x1f78f4*/
            case 1437: /*0x1f7821*/
              v14 = 1456; /*0x1f78f9*/
              goto LABEL_88; /*0x1f78fe*/
            case 1438: /*0x1f7821*/
              v14 = 1457; /*0x1f7903*/
              goto LABEL_88; /*0x1f7908*/
            case 1439: /*0x1f7821*/
              v14 = 1458; /*0x1f790d*/
              goto LABEL_88; /*0x1f7912*/
            case 1440: /*0x1f7821*/
              v14 = 1459; /*0x1f7917*/
              goto LABEL_88; /*0x1f791c*/
            case 1441: /*0x1f7821*/
              v14 = 1460; /*0x1f7921*/
              goto LABEL_88; /*0x1f7926*/
            default:
              goto LABEL_95;
          }
        }
        v14 = 1653; /*0x1f792b*/
        goto LABEL_88; /*0x1f7930*/
      }
      if ( v11 > 2838 ) /*0x1f793b*/
      {
        switch ( v11 ) /*0x1f7ab7*/
        {
          case 2839: /*0x1f7ab7*/
          case 2840: /*0x1f7ab7*/
          case 2841: /*0x1f7ab7*/
            goto LABEL_67;
          case 2842: /*0x1f7ab7*/
          case 2844: /*0x1f7ab7*/
            v14 = 2852; /*0x1f7c8a*/
            goto LABEL_88; /*0x1f7c8f*/
          case 2843: /*0x1f7ab7*/
          case 2845: /*0x1f7ab7*/
            v14 = 2852; /*0x1f7c91*/
            goto LABEL_87; /*0x1f7c96*/
          case 2846: /*0x1f7ab7*/
          case 2848: /*0x1f7ab7*/
            v14 = 2855; /*0x1f7c98*/
            goto LABEL_88; /*0x1f7c9d*/
          case 2847: /*0x1f7ab7*/
          case 2849: /*0x1f7ab7*/
            v14 = 2855; /*0x1f7c9f*/
            goto LABEL_87; /*0x1f7c9f*/
          default:
            goto LABEL_95;
        }
      }
      if ( v11 != 2838 ) /*0x1f7941*/
      {
        switch ( v11 ) /*0x1f7963*/
        {
          case 1622: /*0x1f7963*/
            v14 = 1654; /*0x1f7965*/
            goto LABEL_88; /*0x1f796a*/
          case 1623: /*0x1f7963*/
            v14 = 1655; /*0x1f796f*/
            goto LABEL_88; /*0x1f7974*/
          case 1624: /*0x1f7963*/
            v14 = 1656; /*0x1f7979*/
            goto LABEL_88; /*0x1f797e*/
          case 1625: /*0x1f7963*/
            v14 = 1657; /*0x1f7983*/
            goto LABEL_88; /*0x1f7988*/
          case 1626: /*0x1f7963*/
            v14 = 1658; /*0x1f798d*/
            goto LABEL_88; /*0x1f7992*/
          case 1627: /*0x1f7963*/
            v14 = 1659; /*0x1f7997*/
            goto LABEL_88; /*0x1f799c*/
          case 1628: /*0x1f7963*/
            v14 = 1660; /*0x1f79a1*/
            goto LABEL_88; /*0x1f79a6*/
          case 1629: /*0x1f7963*/
            v14 = 1661; /*0x1f79ab*/
            goto LABEL_88; /*0x1f79b0*/
          case 1630: /*0x1f7963*/
            v14 = 1662; /*0x1f79b5*/
            goto LABEL_88; /*0x1f79ba*/
          case 1631: /*0x1f7963*/
            v14 = 1663; /*0x1f79bf*/
            goto LABEL_88; /*0x1f79c4*/
          case 1632: /*0x1f7963*/
            v14 = 1664; /*0x1f79c9*/
            goto LABEL_88; /*0x1f79ce*/
          case 1633: /*0x1f7963*/
            v14 = 1665; /*0x1f79d3*/
            goto LABEL_88; /*0x1f79d8*/
          case 1634: /*0x1f7963*/
            v14 = 1666; /*0x1f79dd*/
            goto LABEL_88; /*0x1f79e2*/
          case 1635: /*0x1f7963*/
            v14 = 1667; /*0x1f79e7*/
            goto LABEL_88; /*0x1f79ec*/
          case 1636: /*0x1f7963*/
            v14 = 1668; /*0x1f79f1*/
            goto LABEL_88; /*0x1f79f6*/
          case 1637: /*0x1f7963*/
            v14 = 1669; /*0x1f79fb*/
            goto LABEL_88; /*0x1f7a00*/
          case 1638: /*0x1f7963*/
            v14 = 1670; /*0x1f7a05*/
            goto LABEL_88; /*0x1f7a0a*/
          case 1639: /*0x1f7963*/
            v14 = 1671; /*0x1f7a0f*/
            goto LABEL_88; /*0x1f7a14*/
          case 1640: /*0x1f7963*/
            v14 = 1672; /*0x1f7a19*/
            goto LABEL_88; /*0x1f7a1e*/
          case 1641: /*0x1f7963*/
            v14 = 1673; /*0x1f7a23*/
            goto LABEL_88; /*0x1f7a28*/
          case 1642: /*0x1f7963*/
            v14 = 1674; /*0x1f7a2d*/
            goto LABEL_88; /*0x1f7a32*/
          case 1643: /*0x1f7963*/
            v14 = 1675; /*0x1f7a37*/
            goto LABEL_88; /*0x1f7a3c*/
          case 1644: /*0x1f7963*/
            v14 = 1676; /*0x1f7a41*/
            goto LABEL_88; /*0x1f7a46*/
          case 1645: /*0x1f7963*/
            v14 = 1677; /*0x1f7a4b*/
            goto LABEL_88; /*0x1f7a50*/
          case 1646: /*0x1f7963*/
            v14 = 1678; /*0x1f7a55*/
            goto LABEL_88; /*0x1f7a5a*/
          case 1647: /*0x1f7963*/
            v14 = 1679; /*0x1f7a5f*/
            goto LABEL_88; /*0x1f7a64*/
          case 1648: /*0x1f7963*/
            v14 = 1680; /*0x1f7a69*/
            goto LABEL_88; /*0x1f7a6e*/
          case 1649: /*0x1f7963*/
            v14 = 1681; /*0x1f7a73*/
            goto LABEL_88; /*0x1f7a78*/
          case 1650: /*0x1f7963*/
            v14 = 1682; /*0x1f7a7d*/
            goto LABEL_88; /*0x1f7a82*/
          case 1651: /*0x1f7963*/
            v14 = 1683; /*0x1f7a87*/
            goto LABEL_88; /*0x1f7a8c*/
          case 1652: /*0x1f7963*/
            v14 = 1684; /*0x1f7a91*/
            goto LABEL_88; /*0x1f7a96*/
          default:
            goto LABEL_95;
        }
      }
LABEL_67:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v68, (const struct cocos2d::CCPoint *)&v66); /*0x1f7ac9*/
      if ( !EditorUI_getNeighbor(v16, 0xB16u, v15, 1u, a2) ) /*0x1f7ae2*/
        break; /*0x1f7ae2*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v56, (const struct cocos2d::CCPoint *)&v66); /*0x1f7b03*/
      if ( !EditorUI_getNeighbor(v18, 0xB16u, v17, 2u, a2) ) /*0x1f7b1c*/
      {
        v14 = 2856; /*0x1f7b26*/
        goto LABEL_88; /*0x1f7b2b*/
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, (const struct cocos2d::CCPoint *)&v66); /*0x1f7b3d*/
      if ( !EditorUI_getNeighbor(v20, 0xB16u, v19, 3u, a2) ) /*0x1f7b56*/
      {
        v14 = 2854; /*0x1f7b60*/
        goto LABEL_88; /*0x1f7b65*/
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v58, (const struct cocos2d::CCPoint *)&v66); /*0x1f7b77*/
      if ( !EditorUI_getNeighbor(v22, 0xB16u, v21, 4u, a2) ) /*0x1f7b90*/
      {
        v14 = 2854; /*0x1f7b9a*/
        goto LABEL_87; /*0x1f7b9f*/
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v59, (const struct cocos2d::CCPoint *)&v66); /*0x1f7bb1*/
      if ( !EditorUI_getNeighbor(v24, 0xB16u, v23, 5u, a2) ) /*0x1f7bca*/
      {
        v14 = 2861; /*0x1f7bd4*/
        goto LABEL_87; /*0x1f7bd9*/
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v60, (const struct cocos2d::CCPoint *)&v66); /*0x1f7beb*/
      if ( !EditorUI_getNeighbor(v26, 0xB16u, v25, 6u, a2) ) /*0x1f7c04*/
      {
        v14 = 2861; /*0x1f7c0e*/
        goto LABEL_88; /*0x1f7c13*/
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v61, (const struct cocos2d::CCPoint *)&v66); /*0x1f7c25*/
      if ( !EditorUI_getNeighbor(v28, 0xB16u, v27, 7u, a2) ) /*0x1f7c3e*/
      {
        v14 = 2863; /*0x1f7c48*/
        goto LABEL_88; /*0x1f7c4d*/
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v62, (const struct cocos2d::CCPoint *)&v66); /*0x1f7c5c*/
      if ( !EditorUI_getNeighbor(v30, 0xB16u, v29, 8u, a2) ) /*0x1f7c75*/
      {
        v14 = 2863; /*0x1f7c83*/
LABEL_87:
        v13 = 1; /*0x1f7ca4*/
LABEL_88:
        v31 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v9 + 1208LL))(v9, v63); /*0x1f7ca7*/
        v32 = (struct cocos2d::CCObject *)sub_1B0700(v3, v14, v31); /*0x1f7cc8*/
        v33 = *(_QWORD *)v32; /*0x1f7ccb*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 360LL))(v9); /*0x1f7cd8*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(v33 + 352))(v32); /*0x1f7ce0*/
        v34 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 1272LL))(v9); /*0x1f7cf3*/
        if ( v13 ) /*0x1f7cf8*/
          v34 = v34 == 0; /*0x1f7cfc*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v32 + 1088LL))(v32, v34); /*0x1f7d0f*/
        v35 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 1280LL))(v9); /*0x1f7d18*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v32 + 1096LL))(v32, v35); /*0x1f7d2e*/
        v36 = roundf(*((float *)v9 + 290) * 1000.0); /*0x1f7d3d*/
        *((_DWORD *)v32 + 16) = 0; /*0x1f7d4c*/
        v37 = *(_QWORD *)v32; /*0x1f7d53*/
        v38 = (float)(int)v36 / 1000.0; /*0x1f7d59*/
        *((float *)v32 + 290) = v38; /*0x1f7d5d*/
        *((float *)v32 + 249) = v38; /*0x1f7d65*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(v37 + 1288))(v32); /*0x1f7d70*/
        *((_BYTE *)v32 + 848) = 1; /*0x1f7d76*/
        *((_BYTE *)v32 + 872) = 1; /*0x1f7d7d*/
        v39 = roundf(*((float *)v9 + 291) * 1000.0); /*0x1f7d90*/
        *((_DWORD *)v32 + 17) = 0; /*0x1f7d99*/
        v40 = *(_QWORD *)v32; /*0x1f7da4*/
        v41 = (float)(int)v39 / 1000.0; /*0x1f7daa*/
        *((float *)v32 + 291) = v41; /*0x1f7dae*/
        *((float *)v32 + 250) = v41; /*0x1f7db6*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(v40 + 1296))(v32); /*0x1f7dc1*/
        v7 = v67; /*0x1f7dc7*/
        *((_BYTE *)v32 + 848) = 1; /*0x1f7dd2*/
        *((_BYTE *)v32 + 872) = 1; /*0x1f7ddc*/
        *((_WORD *)v32 + 606) = *((_WORD *)v9 + 605) + 3; /*0x1f7dee*/
        cocos2d::CCArray::addObject(v7, v32); /*0x1f7df5*/
        if ( v12 > 0 ) /*0x1f7dfe*/
        {
          v42 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v9 + 1208LL))(v9, v64); /*0x1f7e0f*/
          v43 = sub_1B0700(a1, (unsigned int)v12, v42); /*0x1f7e2b*/
          v44 = *(_QWORD *)v43; /*0x1f7e2e*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 360LL))(v9); /*0x1f7e3b*/
          (*(void (__fastcall **)(__int64))(v44 + 352))(v43); /*0x1f7e43*/
          v45 = *(_QWORD *)v43; /*0x1f7e4c*/
          v46 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 1272LL))(v9); /*0x1f7e59*/
          (*(void (__fastcall **)(__int64, _QWORD))(v45 + 1088))(v43, v46); /*0x1f7e61*/
          v47 = *(_QWORD *)v43; /*0x1f7e6d*/
          v48 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 1280LL))(v9); /*0x1f7e70*/
          (*(void (__fastcall **)(__int64, _QWORD))(v47 + 1096))(v43, v48); /*0x1f7e7c*/
          v49 = roundf(*((float *)v9 + 290) * 1000.0); /*0x1f7e8e*/
          *(_DWORD *)(v43 + 64) = 0; /*0x1f7e97*/
          v50 = *(_QWORD *)v43; /*0x1f7ea6*/
          v51 = (float)(int)v49 / 1000.0; /*0x1f7eac*/
          *(float *)(v43 + 1160) = v51; /*0x1f7eb0*/
          *(float *)(v43 + 996) = v51; /*0x1f7eb8*/
          (*(void (__fastcall **)(__int64))(v50 + 1288))(v43); /*0x1f7ec3*/
          *(_BYTE *)(v43 + 848) = 1; /*0x1f7ec9*/
          *(_BYTE *)(v43 + 872) = 1; /*0x1f7ed0*/
          v52 = roundf(*((float *)v9 + 291) * 1000.0); /*0x1f7ee3*/
          *(_DWORD *)(v43 + 68) = 0; /*0x1f7eec*/
          v53 = *(_QWORD *)v43; /*0x1f7efb*/
          v54 = (float)(int)v52 / 1000.0; /*0x1f7f01*/
          *(float *)(v43 + 1164) = v54; /*0x1f7f05*/
          *(float *)(v43 + 1000) = v54; /*0x1f7f0d*/
          (*(void (__fastcall **)(__int64))(v53 + 1296))(v43); /*0x1f7f18*/
          *(_BYTE *)(v43 + 848) = 1; /*0x1f7f1e*/
          *(_BYTE *)(v43 + 872) = 1; /*0x1f7f28*/
          *(_WORD *)(v43 + 1212) = *((_WORD *)v9 + 605) + 3; /*0x1f7f3d*/
          cocos2d::CCArray::addObject(v7, (struct cocos2d::CCObject *)v43); /*0x1f7f44*/
        }
        v3 = a1; /*0x1f7f4a*/
        goto LABEL_93; /*0x1f7f4a*/
      }
LABEL_95:
      v7 = v67; /*0x1f7fbb*/
LABEL_93:
      if ( ++v8 >= cocos2d::CCArray::count(v5) ) /*0x1f7f68*/
        return v7; /*0x1f7f68*/
    }
    v14 = 2853; /*0x1f7aec*/
    goto LABEL_88; /*0x1f7af1*/
  }
  return v7; /*0x1f7fb1*/
}

// [80/110] Address: 0x1f8140
// Method: EditorUI::createRockBases
cocos2d::CCArray *__fastcall EditorUI_createRockBases(__int64 a1, cocos2d::CCArray *a2)
{
  __int64 v3; // rcx
  cocos2d::CCArray *v4; // r12
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // r13
  unsigned int v7; // r15d
  char v8; // r13
  bool v9; // r14
  bool v10; // di
  bool v11; // si
  bool v12; // bl
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  float v16; // xmm2_4
  cocos2d::CCPoint *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  float v21; // xmm1_4
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r15d
  struct cocos2d::CCObject *v30; // rax
  const struct cocos2d::CCRect *v31; // rax
  int v32; // esi
  struct cocos2d::CCObject *v33; // r14
  unsigned int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rbx
  unsigned __int8 v40; // al
  __int64 v41; // rbx
  unsigned __int8 v42; // al
  float v43; // xmm0_4
  __int64 v44; // rax
  float v45; // xmm1_4
  float v46; // xmm0_4
  __int64 v47; // rax
  float v48; // xmm1_4
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rbx
  unsigned __int8 v54; // al
  __int64 v55; // rbx
  unsigned __int8 v56; // al
  float v57; // xmm0_4
  __int64 v58; // rax
  float v59; // xmm1_4
  float v60; // xmm0_4
  __int64 v61; // rax
  float v62; // xmm1_4
  _BYTE v64[8]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v65[8]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v66[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v67[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct cocos2d::CCObject *v68; // [rsp+40h] [rbp-C0h]
  cocos2d::CCArray *v69; // [rsp+48h] [rbp-B8h]
  _BYTE v70[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v71[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v72[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v73[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v74[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v75[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v76[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v77[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v78[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v79[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v80[8]; // [rsp+A8h] [rbp-58h] BYREF
  char v81; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v82[8]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v83[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v84; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v85[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v86[8]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v87[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v88; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v89[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v90[8]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v91[8]; // [rsp+100h] [rbp+0h] BYREF
  char v92; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v93[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v94[8]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v95[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v96[8]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v97[16]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v99; // [rsp+1D8h] [rbp+D8h]
  char v100; // [rsp+1E0h] [rbp+E0h] BYREF
  char v101; // [rsp+1E8h] [rbp+E8h] BYREF

  if ( !a2 || !cocos2d::CCArray::count(a2) ) /*0x1f8165*/
    return 0; /*0x1f8ad9*/
  v4 = (cocos2d::CCArray *)cocos2d::CCArray::create(v3); /*0x1f8191*/
  v6 = (cocos2d::CCArray *)cocos2d::CCArray::create(v5); /*0x1f81a0*/
  v69 = v6; /*0x1f81a3*/
  cocos2d::CCArray::addObjectsFromArray(v4, a2); /*0x1f81a8*/
  v7 = 0; /*0x1f81ae*/
  v99 = 0; /*0x1f81b4*/
  if ( cocos2d::CCArray::count(v4) ) /*0x1f81bb*/
  {
    while ( 1 ) /*0x1f8241*/
    {
      v68 = cocos2d::CCArray::objectAtIndex(v4, v7); /*0x1f8241*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v68 + 1208LL))(v68, v67); /*0x1f8253*/
      v8 = 0; /*0x1f825b*/
      v9 = 0; /*0x1f825e*/
      v10 = 0; /*0x1f8261*/
      v11 = 0; /*0x1f8264*/
      v12 = 0; /*0x1f8267*/
      if ( (unsigned int)(*((_DWORD *)v68 + 259) - 1348) <= 3 ) /*0x1f8278*/
        break; /*0x1f8278*/
LABEL_33:
      v32 = 0; /*0x1f8610*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v70, (const struct cocos2d::CCPoint *)&unk_904788); /*0x1f8617*/
      v33 = v68; /*0x1f861d*/
      switch ( *((_DWORD *)v68 + 259) ) /*0x1f8654*/
      {
        case 0x544: /*0x1f8654*/
          if ( v8 ) /*0x1f8659*/
          {
            v34 = 1352; /*0x1f865b*/
          }
          else
          {
            v34 = 1387; /*0x1f8665*/
            if ( v12 ) /*0x1f866c*/
            {
              v32 = 1391; /*0x1f867c*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v93, 0.0, -30.0); /*0x1f8681*/
              cocos2d::CCPoint::operator=(v70, v35); /*0x1f868f*/
            }
          }
          goto LABEL_64; /*0x1f8660*/
        case 0x545: /*0x1f8654*/
          if ( v8 ) /*0x1f869d*/
          {
            v34 = 1353; /*0x1f869f*/
          }
          else
          {
            v34 = 1388; /*0x1f86a9*/
            if ( v12 ) /*0x1f86b0*/
              v32 = 1392; /*0x1f86b6*/
          }
          goto LABEL_64; /*0x1f86a4*/
        case 0x546: /*0x1f8654*/
          if ( v8 ) /*0x1f86c3*/
          {
            v34 = 1354; /*0x1f86c5*/
          }
          else
          {
            v34 = 1389; /*0x1f86cf*/
            if ( v12 ) /*0x1f86d6*/
              v32 = 1394; /*0x1f86dc*/
          }
          goto LABEL_64; /*0x1f86ca*/
        case 0x547: /*0x1f8654*/
          if ( v8 ) /*0x1f86e6*/
          {
            v34 = 1355; /*0x1f86e8*/
          }
          else
          {
            v34 = 1390; /*0x1f86ef*/
            if ( v12 ) /*0x1f86f6*/
              v32 = 1393; /*0x1f86f8*/
          }
          goto LABEL_64; /*0x1f86ed*/
        case 0x597: /*0x1f8654*/
          v34 = 1442; /*0x1f86ff*/
          goto LABEL_64; /*0x1f8704*/
        case 0x598: /*0x1f8654*/
          v34 = 1443; /*0x1f8706*/
          goto LABEL_64; /*0x1f870b*/
        case 0x599: /*0x1f8654*/
          v34 = 1444; /*0x1f870d*/
          goto LABEL_64; /*0x1f8712*/
        case 0x59A: /*0x1f8654*/
          v34 = 1445; /*0x1f8714*/
          goto LABEL_64; /*0x1f8719*/
        case 0x59B: /*0x1f8654*/
          v34 = 1446; /*0x1f871b*/
          goto LABEL_64; /*0x1f8720*/
        case 0x59C: /*0x1f8654*/
          v34 = 1447; /*0x1f8722*/
          goto LABEL_64; /*0x1f8727*/
        case 0x59D: /*0x1f8654*/
          v34 = 1448; /*0x1f8729*/
          goto LABEL_64; /*0x1f872e*/
        case 0x59E: /*0x1f8654*/
          v34 = 1449; /*0x1f8730*/
          goto LABEL_64; /*0x1f8735*/
        case 0x59F: /*0x1f8654*/
          v34 = 1450; /*0x1f8737*/
          goto LABEL_64; /*0x1f873c*/
        case 0x5A0: /*0x1f8654*/
          v34 = 1451; /*0x1f873e*/
          goto LABEL_64; /*0x1f8743*/
        case 0x5A1: /*0x1f8654*/
          v34 = 1452; /*0x1f8745*/
          goto LABEL_64; /*0x1f874a*/
        case 0x5E6: /*0x1f8654*/
          v34 = 1513; /*0x1f874c*/
          goto LABEL_64; /*0x1f8751*/
        case 0x5E7: /*0x1f8654*/
          v34 = 1514; /*0x1f8753*/
          goto LABEL_64; /*0x1f8758*/
        case 0x5E8: /*0x1f8654*/
          v34 = 1515; /*0x1f875a*/
LABEL_64:
          v36 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v33 + 1208LL))(v33, v94); /*0x1f875f*/
          v37 = sub_1B0700(a1, v34, v36); /*0x1f8783*/
          v38 = *(_QWORD *)v37; /*0x1f8786*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 360LL))(v33); /*0x1f8793*/
          (*(void (__fastcall **)(__int64))(v38 + 352))(v37); /*0x1f879b*/
          v39 = *(_QWORD *)v37; /*0x1f87a4*/
          v40 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 1272LL))(v33); /*0x1f87b1*/
          (*(void (__fastcall **)(__int64, _QWORD))(v39 + 1088))(v37, v40); /*0x1f87b9*/
          v41 = *(_QWORD *)v37; /*0x1f87c5*/
          v42 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 1280LL))(v33); /*0x1f87c8*/
          (*(void (__fastcall **)(__int64, _QWORD))(v41 + 1096))(v37, v42); /*0x1f87d4*/
          v43 = roundf(*((float *)v33 + 290) * 1000.0); /*0x1f87e8*/
          *(_DWORD *)(v37 + 64) = 0; /*0x1f87f7*/
          v44 = *(_QWORD *)v37; /*0x1f87fe*/
          v45 = (float)(int)v43 / 1000.0; /*0x1f8804*/
          *(float *)(v37 + 1160) = v45; /*0x1f8809*/
          *(float *)(v37 + 996) = v45; /*0x1f8811*/
          (*(void (__fastcall **)(__int64))(v44 + 1288))(v37); /*0x1f881d*/
          *(_BYTE *)(v37 + 848) = 1; /*0x1f8823*/
          *(_BYTE *)(v37 + 872) = 1; /*0x1f882a*/
          v46 = roundf(*((float *)v33 + 291) * 1000.0); /*0x1f883f*/
          *(_DWORD *)(v37 + 68) = 0; /*0x1f8848*/
          v47 = *(_QWORD *)v37; /*0x1f8853*/
          v48 = (float)(int)v46 / 1000.0; /*0x1f8859*/
          *(float *)(v37 + 1164) = v48; /*0x1f885e*/
          *(float *)(v37 + 1000) = v48; /*0x1f8866*/
          (*(void (__fastcall **)(__int64))(v47 + 1296))(v37); /*0x1f8872*/
          v6 = v69; /*0x1f8878*/
          *(_BYTE *)(v37 + 848) = 1; /*0x1f8880*/
          *(_BYTE *)(v37 + 872) = 1; /*0x1f888a*/
          *(_WORD *)(v37 + 1212) = *((_WORD *)v33 + 605) + 2; /*0x1f889d*/
          cocos2d::CCArray::addObject(v6, (struct cocos2d::CCObject *)v37); /*0x1f88a4*/
          if ( v32 > 0 ) /*0x1f88ac*/
          {
            (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v33 + 1208LL))(v33, v66); /*0x1f88bd*/
            v49 = sub_19CE00(v95, (unsigned int)v32); /*0x1f88c9*/
            cocos2d::CCPoint::operator+(v66, v76, v49); /*0x1f88da*/
            cocos2d::CCPoint::operator=(v66, v76); /*0x1f88e9*/
            cocos2d::CCPoint::operator+(v66, v77, v70); /*0x1f88fd*/
            cocos2d::CCPoint::operator=(v66, v77); /*0x1f890c*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, (const struct cocos2d::CCPoint *)v66); /*0x1f891b*/
            v51 = sub_1B0700(a1, (unsigned int)v32, v50); /*0x1f8935*/
            v52 = *(_QWORD *)v51; /*0x1f8938*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 360LL))(v33); /*0x1f8945*/
            (*(void (__fastcall **)(__int64))(v52 + 352))(v51); /*0x1f894d*/
            v53 = *(_QWORD *)v51; /*0x1f8956*/
            v54 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 1272LL))(v33); /*0x1f8963*/
            (*(void (__fastcall **)(__int64, _QWORD))(v53 + 1088))(v51, v54); /*0x1f896b*/
            v55 = *(_QWORD *)v51; /*0x1f8977*/
            v56 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v33 + 1280LL))(v33); /*0x1f897a*/
            (*(void (__fastcall **)(__int64, _QWORD))(v55 + 1096))(v51, v56); /*0x1f8986*/
            v57 = roundf(*((float *)v33 + 290) * 1000.0); /*0x1f899a*/
            *(_DWORD *)(v51 + 64) = 0; /*0x1f89a9*/
            v58 = *(_QWORD *)v51; /*0x1f89b0*/
            v59 = (float)(int)v57 / 1000.0; /*0x1f89b6*/
            *(float *)(v51 + 1160) = v59; /*0x1f89bb*/
            *(float *)(v51 + 996) = v59; /*0x1f89c3*/
            (*(void (__fastcall **)(__int64))(v58 + 1288))(v51); /*0x1f89cf*/
            *(_BYTE *)(v51 + 848) = 1; /*0x1f89d5*/
            *(_BYTE *)(v51 + 872) = 1; /*0x1f89dc*/
            v60 = roundf(*((float *)v33 + 291) * 1000.0); /*0x1f89f1*/
            *(_DWORD *)(v51 + 68) = 0; /*0x1f89fb*/
            v61 = *(_QWORD *)v51; /*0x1f8a02*/
            v62 = (float)(int)v60 / 1000.0; /*0x1f8a08*/
            *(float *)(v51 + 1164) = v62; /*0x1f8a0d*/
            *(float *)(v51 + 1000) = v62; /*0x1f8a15*/
            (*(void (__fastcall **)(__int64))(v61 + 1296))(v51); /*0x1f8a24*/
            *(_BYTE *)(v51 + 848) = 1; /*0x1f8a2a*/
            *(_BYTE *)(v51 + 872) = 1; /*0x1f8a34*/
            *(_WORD *)(v51 + 1212) = *((_WORD *)v33 + 605) + 2; /*0x1f8a4a*/
            cocos2d::CCArray::addObject(v6, (struct cocos2d::CCObject *)v51); /*0x1f8a51*/
          }
          break; /*0x1f8a57*/
        default:
          v6 = v69; /*0x1f8a59*/
          break; /*0x1f8a59*/
      }
      v99 = ++v7; /*0x1f8a64*/
      if ( v7 >= cocos2d::CCArray::count(v4) ) /*0x1f8a74*/
        return v6; /*0x1f8a74*/
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v100); /*0x1f8285*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v101); /*0x1f8292*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v64); /*0x1f829d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v65); /*0x1f82a8*/
    if ( *((_DWORD *)v68 + 259) != 1348 ) /*0x1f82bf*/
    {
      switch ( *((_DWORD *)v68 + 259) ) /*0x1f82c8*/
      {
        case 0x545: /*0x1f82c8*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v85, -30.0, 0.0); /*0x1f83bd*/
          cocos2d::CCPoint::operator=(&v100, v22); /*0x1f83cd*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v86, -30.0, -30.0); /*0x1f83dd*/
          cocos2d::CCPoint::operator=(&v101, v23); /*0x1f83ed*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v87, 0.0, -30.0); /*0x1f83fd*/
          cocos2d::CCPoint::operator=(v64, v24); /*0x1f840b*/
          v16 = 0.0; /*0x1f8411*/
          v17 = (cocos2d::CCPoint *)&v88; /*0x1f8414*/
          v21 = -30.0; /*0x1f8418*/
          break;
        case 0x546: /*0x1f82c8*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, 0.0, 30.0); /*0x1f8350*/
          cocos2d::CCPoint::operator=(&v100, v18); /*0x1f8360*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v82, 30.0, 30.0); /*0x1f8370*/
          cocos2d::CCPoint::operator=(&v101, v19); /*0x1f8380*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 30.0, 0.0); /*0x1f8390*/
          cocos2d::CCPoint::operator=(v64, v20); /*0x1f839e*/
          v16 = 0.0; /*0x1f83a4*/
          v17 = (cocos2d::CCPoint *)&v84; /*0x1f83a7*/
          v21 = 30.0; /*0x1f83ab*/
          break;
        case 0x547: /*0x1f82c8*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v78, 0.0, 30.0); /*0x1f82e6*/
          cocos2d::CCPoint::operator=(&v100, v13); /*0x1f82f6*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, -30.0, 30.0); /*0x1f8306*/
          cocos2d::CCPoint::operator=(&v101, v14); /*0x1f8316*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v80, -30.0, 0.0); /*0x1f8326*/
          cocos2d::CCPoint::operator=(v64, v15); /*0x1f8334*/
          v16 = 30.0; /*0x1f833a*/
          v17 = (cocos2d::CCPoint *)&v81; /*0x1f833d*/
          goto LABEL_13; /*0x1f8341*/
        default:
LABEL_15:
          cocos2d::CCPoint::operator+(v67, v72, &v100); /*0x1f8499*/
          cocos2d::CCPoint::operator+(v67, v73, &v101); /*0x1f84c1*/
          cocos2d::CCPoint::operator+(v67, v74, v64); /*0x1f84d6*/
          cocos2d::CCPoint::operator+(v67, v75, v65); /*0x1f84ea*/
          v29 = 0; /*0x1f84f3*/
          if ( cocos2d::CCArray::count(v4) ) /*0x1f84f6*/
          {
            while ( 1 ) /*0x1f8510*/
            {
              if ( v29 != v99 ) /*0x1f8517*/
              {
                v30 = cocos2d::CCArray::objectAtIndex(v4, v29); /*0x1f8523*/
                v31 = (const struct cocos2d::CCRect *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v30 + 1184LL))(v30); /*0x1f8536*/
                cocos2d::CCRect::CCRect((cocos2d::CCRect *)v71, v31); /*0x1f8540*/
                if ( !v9 ) /*0x1f8549*/
                  v9 = cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v71, (const struct cocos2d::CCPoint *)v72); /*0x1f8566*/
                if ( !v10 ) /*0x1f856d*/
                  v10 = cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v71, (const struct cocos2d::CCPoint *)v73); /*0x1f858a*/
                if ( !v11 ) /*0x1f8590*/
                  v11 = cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v71, (const struct cocos2d::CCPoint *)v74); /*0x1f85ad*/
                if ( !v12 ) /*0x1f85b2*/
                  v12 = cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v71, (const struct cocos2d::CCPoint *)v75); /*0x1f85cd*/
              }
              if ( v9 && v10 && v11 ) /*0x1f85dd*/
                break; /*0x1f85dd*/
              if ( v8 ) /*0x1f85e7*/
                goto LABEL_30; /*0x1f85e7*/
LABEL_31:
              if ( ++v29 >= cocos2d::CCArray::count(v4) ) /*0x1f85fc*/
                goto LABEL_32; /*0x1f85fc*/
            }
            v8 = 1; /*0x1f85df*/
LABEL_30:
            if ( v12 ) /*0x1f85eb*/
              goto LABEL_32; /*0x1f85eb*/
            goto LABEL_31; /*0x1f85eb*/
          }
LABEL_32:
          v7 = v99; /*0x1f8602*/
          goto LABEL_33; /*0x1f8602*/
      }
LABEL_14:
      cocos2d::CCPoint::CCPoint(v17, v21, v16); /*0x1f8485*/
      cocos2d::CCPoint::operator=(v65, v28); /*0x1f8493*/
      goto LABEL_15; /*0x1f8493*/
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v89, 30.0, 0.0); /*0x1f8427*/
    cocos2d::CCPoint::operator=(&v100, v25); /*0x1f8437*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v90, 30.0, -30.0); /*0x1f8447*/
    cocos2d::CCPoint::operator=(&v101, v26); /*0x1f8457*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v91, 0.0, -30.0); /*0x1f8467*/
    cocos2d::CCPoint::operator=(v64, v27); /*0x1f8475*/
    v16 = -30.0; /*0x1f847b*/
    v17 = (cocos2d::CCPoint *)&v92; /*0x1f847e*/
LABEL_13:
    v21 = 0.0; /*0x1f8482*/
    goto LABEL_14; /*0x1f8482*/
  }
  return v6; /*0x1f8acf*/
}

// [82/110] Address: 0x1fb930
// Method: EditorUI::createExtraObject
void __fastcall EditorUI_createExtraObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        cocos2d::CCArray *a5,
        int a6,
        __int16 a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  _BYTE v15[8]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v16[16]; // [rsp+28h] [rbp-10h] BYREF
  char v17; // [rsp+58h] [rbp+20h] BYREF

  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 1208LL))(a4, &v17); /*0x1fb95b*/
  v11 = sub_19CE00(v16, a2); /*0x1fb968*/
  cocos2d::CCPoint::operator+(&v17, v15, v11); /*0x1fb97a*/
  cocos2d::CCPoint::operator=(&v17, v15); /*0x1fb98a*/
  cocos2d::CCPoint::operator+(&v17, v15, a3); /*0x1fb99d*/
  cocos2d::CCPoint::operator=(&v17, v15); /*0x1fb9ad*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v16, (const struct cocos2d::CCPoint *)&v17); /*0x1fb9bd*/
  v13 = sub_1B0700(a1, a2, v12); /*0x1fb9cb*/
  if ( v13 ) /*0x1fb9d6*/
  {
    *(_WORD *)(v13 + 1212) = *(_WORD *)(a4 + 1210) + a7; /*0x1fb9e5*/
    v14 = *(_DWORD *)(a4 + 1136); /*0x1fb9ec*/
    if ( !v14 ) /*0x1fb9f5*/
      v14 = *(_DWORD *)(a4 + 1056); /*0x1fb9f7*/
    *(_DWORD *)(v13 + 1136) = a6 + v14; /*0x1fba02*/
    if ( a5 ) /*0x1fba10*/
      cocos2d::CCArray::addObject(a5, (struct cocos2d::CCObject *)v13); /*0x1fba12*/
  }
}

// [83/110] Address: 0x1fbdc0
// Method: EditorUI::moveObject
void __fastcall EditorUI_moveObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  float v7; // xmm2_4
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edx
  bool v13; // zf
  char v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  float v31; // [rsp+48h] [rbp+10h] BYREF
  float v32; // [rsp+4Ch] [rbp+14h]
  char v33; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 ) /*0x1fbdc3*/
    return; /*0x1fbdc3*/
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2); /*0x1fbde4*/
  cocos2d::CCPoint::operator+(v6, &v31, a3); /*0x1fbdf5*/
  v7 = fmaxf(-3000.0, v32); /*0x1fbe13*/
  v8 = *(_QWORD *)(a1 + 1512); /*0x1fbe1f*/
  v32 = v7; /*0x1fbe26*/
  v31 = fminf(240000.0, fmaxf(-3000.0, v31)); /*0x1fbe30*/
  v9 = *(_QWORD *)(v8 + 3592); /*0x1fbe36*/
  v10 = 80; /*0x1fbe3d*/
  if ( *(_BYTE *)(v9 + 461) ) /*0x1fbe42*/
    v10 = 1000; /*0x1fbe4e*/
  v32 = fminf((float)((float)v10 * 30.0) + 90.0, v7); /*0x1fbe71*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v33, (const struct cocos2d::CCPoint *)&v31); /*0x1fbe77*/
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 184LL))(a2, &v33); /*0x1fbe88*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 1224LL))(a2); /*0x1fbe94*/
  v11 = *(_QWORD *)(a1 + 1512); /*0x1fbe9a*/
  GJBaseGameLayer_removeObjectFromSection(v11, a2); /*0x1fbea7*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 1192LL))(v11, a2); /*0x1fbeb5*/
  v12 = *(_DWORD *)(a2 + 1036); /*0x1fbebb*/
  if ( v12 > 1934 ) /*0x1fbec7*/
  {
    if ( v12 == 1935 || v12 == 2900 || v12 == 2902 || v12 == 3022 ) /*0x1fbf13*/
      goto LABEL_20; /*0x1fbf13*/
    v13 = v12 == 3027; /*0x1fbf15*/
    goto LABEL_18; /*0x1fbf15*/
  }
  if ( v12 == 1934 ) /*0x1fbec9*/
  {
LABEL_20:
    v14 = 1; /*0x1fbf1f*/
    goto LABEL_21; /*0x1fbf1f*/
  }
  if ( v12 > 203 ) /*0x1fbed1*/
  {
    if ( v12 != 1334 ) /*0x1fbeef*/
    {
      v13 = v12 == 1917; /*0x1fbef1*/
      goto LABEL_18; /*0x1fbef7*/
    }
    goto LABEL_20; /*0x1fbeef*/
  }
  if ( v12 == 203 || v12 == 200 || v12 == 201 ) /*0x1fbee2*/
    goto LABEL_20; /*0x1fbee2*/
  v13 = v12 == 202; /*0x1fbee4*/
LABEL_18:
  if ( v13 ) /*0x1fbf18*/
    goto LABEL_20; /*0x1fbf18*/
  v14 = 0; /*0x1fbf1a*/
LABEL_21:
  if ( v12 == 747 ) /*0x1fbf28*/
  {
    v15 = *(_QWORD *)(a2 + 1864); /*0x1fbf2f*/
    if ( v15 ) /*0x1fbf39*/
    {
      v16 = *(_QWORD *)(a1 + 1512); /*0x1fbf3b*/
      GJBaseGameLayer_removeObjectFromSection(v16, *(_QWORD *)(a2 + 1864)); /*0x1fbf48*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 1192LL))(v16, v15); /*0x1fbf56*/
    }
  }
  v17 = *(_DWORD *)(a2 + 1036); /*0x1fbf61*/
  v18 = *(_QWORD *)(a1 + 1512); /*0x1fbf67*/
  if ( v17 <= 744 ) /*0x1fbf74*/
  {
    if ( v17 != 744 ) /*0x1fbf76*/
    {
      switch ( v17 ) /*0x1fbfa6*/
      {
        case 22: /*0x1fbfa6*/
        case 23: /*0x1fbfa6*/
        case 24: /*0x1fbfa6*/
        case 25: /*0x1fbfa6*/
        case 26: /*0x1fbfa6*/
        case 27: /*0x1fbfa6*/
        case 28: /*0x1fbfa6*/
        case 31: /*0x1fbfa6*/
        case 32: /*0x1fbfa6*/
        case 33: /*0x1fbfa6*/
        case 55: /*0x1fbfa6*/
        case 56: /*0x1fbfa6*/
        case 57: /*0x1fbfa6*/
        case 58: /*0x1fbfa6*/
        case 59: /*0x1fbfa6*/
          goto LABEL_61;
        case 29: /*0x1fbfa6*/
        case 30: /*0x1fbfa6*/
        case 105: /*0x1fbfa6*/
          goto LABEL_39;
        default:
          goto LABEL_62;
      }
      goto LABEL_62;
    }
    goto LABEL_39; /*0x1fbf76*/
  }
  if ( v17 > 2899 ) /*0x1fbfae*/
  {
    if ( v17 <= 3643 ) /*0x1fc098*/
    {
      if ( v17 != 3643 ) /*0x1fc09a*/
      {
        switch ( v17 ) /*0x1fc0c5*/
        {
          case 2903: /*0x1fc0c5*/
          case 2904: /*0x1fc0c5*/
          case 2905: /*0x1fc0c5*/
          case 2907: /*0x1fc0c5*/
          case 2909: /*0x1fc0c5*/
          case 2910: /*0x1fc0c5*/
          case 2911: /*0x1fc0c5*/
          case 2912: /*0x1fc0c5*/
          case 2913: /*0x1fc0c5*/
          case 2914: /*0x1fc0c5*/
          case 2915: /*0x1fc0c5*/
          case 2916: /*0x1fc0c5*/
          case 2917: /*0x1fc0c5*/
          case 2919: /*0x1fc0c5*/
          case 2920: /*0x1fc0c5*/
          case 2921: /*0x1fc0c5*/
          case 2922: /*0x1fc0c5*/
          case 2923: /*0x1fc0c5*/
          case 2924: /*0x1fc0c5*/
          case 3006: /*0x1fc0c5*/
          case 3007: /*0x1fc0c5*/
          case 3008: /*0x1fc0c5*/
          case 3009: /*0x1fc0c5*/
          case 3010: /*0x1fc0c5*/
          case 3016: /*0x1fc0c5*/
          case 3017: /*0x1fc0c5*/
          case 3018: /*0x1fc0c5*/
          case 3019: /*0x1fc0c5*/
          case 3020: /*0x1fc0c5*/
          case 3021: /*0x1fc0c5*/
          case 3022: /*0x1fc0c5*/
          case 3023: /*0x1fc0c5*/
          case 3024: /*0x1fc0c5*/
            goto LABEL_61;
          default:
            goto LABEL_62;
        }
        goto LABEL_62;
      }
      goto LABEL_61; /*0x1fc09a*/
    }
    if ( v17 != 3660 ) /*0x1fc0cd*/
      goto LABEL_62; /*0x1fc0cd*/
LABEL_61:
    *(_BYTE *)(*(_QWORD *)(v18 + 15008) + 516LL) = 1; /*0x1fc0cf*/
    goto LABEL_62; /*0x1fc0d6*/
  }
  if ( v17 == 2899 ) /*0x1fbfb4*/
    goto LABEL_61; /*0x1fbfb4*/
  if ( v17 > 1594 ) /*0x1fbfc0*/
  {
    if ( v17 <= 1819 ) /*0x1fc04f*/
    {
      if ( v17 != 1819 ) /*0x1fc051*/
      {
        v25 = v17 - 1612; /*0x1fc053*/
        if ( v25 ) /*0x1fc059*/
        {
          v26 = v25 - 1; /*0x1fc05b*/
          if ( v26 ) /*0x1fc05e*/
          {
            v27 = v26 - 201; /*0x1fc060*/
            if ( v27 ) /*0x1fc066*/
            {
              if ( v27 != 4 ) /*0x1fc06b*/
                goto LABEL_62; /*0x1fc06b*/
            }
          }
        }
      }
      goto LABEL_61; /*0x1fc06b*/
    }
    v28 = v17 - 1912; /*0x1fc06f*/
    if ( v28 ) /*0x1fc075*/
    {
      v29 = v28 - 3; /*0x1fc077*/
      if ( !v29 ) /*0x1fc07a*/
        goto LABEL_61; /*0x1fc07a*/
      v30 = v29 - 152; /*0x1fc07c*/
      if ( !v30 ) /*0x1fc082*/
        goto LABEL_61; /*0x1fc082*/
      if ( v30 != 1 ) /*0x1fc087*/
        goto LABEL_62; /*0x1fc087*/
    }
LABEL_56:
    *(_BYTE *)(v18 + 14892) = 1; /*0x1fc089*/
    goto LABEL_61; /*0x1fc090*/
  }
  if ( v17 == 1594 ) /*0x1fbfc6*/
    goto LABEL_61; /*0x1fbfc6*/
  if ( v17 > 1007 ) /*0x1fbfd2*/
  {
    v23 = v17 - 1049; /*0x1fc01e*/
    if ( !v23 ) /*0x1fc024*/
      goto LABEL_61; /*0x1fc024*/
    v24 = v23 - 219; /*0x1fc02a*/
    if ( v24 ) /*0x1fc030*/
    {
      if ( (unsigned int)(v24 - 78) >= 2 ) /*0x1fc035*/
        goto LABEL_62; /*0x1fc035*/
      goto LABEL_61; /*0x1fc035*/
    }
    goto LABEL_56; /*0x1fc030*/
  }
  if ( v17 == 1007 ) /*0x1fbfd4*/
  {
    *(_BYTE *)(v18 + 14891) = 1; /*0x1fc012*/
    goto LABEL_61; /*0x1fc019*/
  }
  v19 = v17 - 899; /*0x1fbfd6*/
  if ( !v19 ) /*0x1fbfdc*/
    goto LABEL_39; /*0x1fbfdc*/
  v20 = v19 - 1; /*0x1fbfde*/
  if ( !v20 ) /*0x1fbfe1*/
    goto LABEL_39; /*0x1fbfe1*/
  v21 = v20 - 1; /*0x1fbfe3*/
  if ( !v21 ) /*0x1fbfe6*/
    goto LABEL_61; /*0x1fbfe6*/
  v22 = v21 - 14; /*0x1fbfec*/
  if ( !v22 ) /*0x1fbfef*/
  {
LABEL_39:
    *(_BYTE *)(v18 + 14889) = 1; /*0x1fc006*/
    goto LABEL_61; /*0x1fc00d*/
  }
  if ( v22 == 91 ) /*0x1fbff4*/
  {
    *(_BYTE *)(v18 + 14890) = 1; /*0x1fbffa*/
    goto LABEL_61; /*0x1fc001*/
  }
LABEL_62:
  if ( *(_BYTE *)(a2 + 1261) ) /*0x1fc0dd*/
    *(_BYTE *)(v18 + 14904) = 1; /*0x1fc0e6*/
  if ( *(_BYTE *)(a2 + 1263) ) /*0x1fc0ed*/
    cocos2d::CCPoint::operator=(a2 + 1816, &dword_904F10); /*0x1fc104*/
  if ( v14 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 1528LL))(a2, v18) ) /*0x1fc11a*/
    *(_BYTE *)(a1 + 917) = 1; /*0x1fc124*/
}

// [84/110] Address: 0x1fd720
// Method: EditorUI::scaleObjects
int __fastcall EditorUI_scaleObjects(
        __int64 a1,
        cocos2d::CCArray *a2,
        float a3,
        float a4,
        cocos2d::CCPoint *a5,
        int a6,
        char a7)
{
  unsigned int v9; // edi
  struct cocos2d::CCObject *v10; // rbx
  float v11; // xmm7_4
  float v12; // xmm6_4
  __int64 v13; // rbp
  int result; // eax
  float v15; // xmm1_4
  float v16; // xmm1_4
  __int64 v17; // rcx
  __int64 GroupCenter; // rax
  unsigned int v19; // ebp
  __int64 v20; // rdi
  struct cocos2d::CCObject *v21; // rbx
  __int64 v22; // rax
  float v23; // xmm7_4
  float v24; // xmm6_4
  __int64 v25; // rax
  float v26; // xmm0_4
  __int64 v27; // rax
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int64 v30; // rax
  float v31; // xmm1_4
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-F8h] BYREF
  float v34; // [rsp+28h] [rbp-F0h] BYREF
  float v35; // [rsp+2Ch] [rbp-ECh]
  _BYTE v36[8]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v37[16]; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v38[24]; // [rsp+48h] [rbp-D0h] BYREF

  v9 = 0; /*0x1fd755*/
  if ( cocos2d::CCArray::count(a2) ) /*0x1fd780*/
  {
    while ( 1 ) /*0x1fd7d2*/
    {
      v10 = cocos2d::CCArray::objectAtIndex(a2, v9); /*0x1fd7d2*/
      v33 = *((_DWORD *)v10 + 231); /*0x1fd7e0*/
      v11 = 0.5; /*0x1fd7f8*/
      v12 = 2.0; /*0x1fd7fc*/
      v13 = *(_QWORD *)sub_1A5D10(a1 + 464, v37, &v33); /*0x1fd800*/
      if ( *(_BYTE *)(a1 + 739) ) /*0x1fd7f0*/
        break; /*0x1fd7f0*/
      if ( (unsigned __int8)GameObject_isTrigger(v10) ) /*0x1fd80e*/
        goto LABEL_5; /*0x1fd815*/
LABEL_6:
      if ( a6 == 2 ) /*0x1fd81e*/
        goto LABEL_11; /*0x1fd81e*/
      result = (int)roundf((float)(a3 * *(float *)(v13 + 28)) * 100.0); /*0x1fd834*/
      v15 = (float)result / 100.0; /*0x1fd83f*/
      if ( v11 > v15 || v15 > v12 || (float)(v15 * *((float *)v10 + 330)) == *((float *)v10 + 290) ) /*0x1fd867*/
        return result; /*0x1fd867*/
      if ( a6 != 1 ) /*0x1fd870*/
      {
LABEL_11:
        result = (int)roundf((float)(a4 * *(float *)(v13 + 32)) * 100.0); /*0x1fd886*/
        v16 = (float)result / 100.0; /*0x1fd891*/
        if ( v11 > v16 || v16 > v12 || (float)(v16 * *((float *)v10 + 331)) == *((float *)v10 + 291) ) /*0x1fd8b9*/
          return result; /*0x1fd8b9*/
      }
      if ( ++v9 >= cocos2d::CCArray::count(a2) ) /*0x1fd8cc*/
        goto LABEL_15; /*0x1fd8cc*/
    }
    v11 = 0.25; /*0x1fd805*/
LABEL_5:
    v12 = 4.0; /*0x1fd817*/
    goto LABEL_6; /*0x1fd817*/
  }
LABEL_15:
  if ( cocos2d::CCPoint::equals(a5, (const struct cocos2d::CCPoint *)&unk_9047A8) ) /*0x1fd8e4*/
  {
    GroupCenter = EditorUI_getGroupCenter(v17, v37, a2); /*0x1fd8f9*/
    cocos2d::CCPoint::operator=(a5, GroupCenter); /*0x1fd904*/
  }
  v19 = 0; /*0x1fd90d*/
  result = cocos2d::CCArray::count(a2); /*0x1fd90f*/
  if ( result ) /*0x1fd917*/
  {
    v20 = a1 + 464; /*0x1fd926*/
    do /*0x1fdb09*/
    {
      v21 = cocos2d::CCArray::objectAtIndex(a2, v19); /*0x1fd960*/
      v33 = *((_DWORD *)v21 + 231); /*0x1fd96e*/
      v22 = sub_1A5D10(v20, v38, &v33); /*0x1fd975*/
      v23 = (float)(*(float *)(*(_QWORD *)v22 + 28LL) * *((float *)v21 + 330)) * a3; /*0x1fd99d*/
      v24 = (float)(*(float *)(*(_QWORD *)v22 + 32LL) * *((float *)v21 + 331)) * a4; /*0x1fd9a2*/
      v25 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v21 + 200LL))(v21); /*0x1fd9a7*/
      cocos2d::CCPoint::operator-(v25, &v34, a5); /*0x1fd9b8*/
      if ( a6 != 2 ) /*0x1fd9c1*/
        v34 = v34 * (float)(v23 / *((float *)v21 + 290)); /*0x1fd9d8*/
      if ( a6 != 1 ) /*0x1fd9e1*/
        v35 = v35 * (float)(v24 / *((float *)v21 + 291)); /*0x1fd9f8*/
      cocos2d::CCPoint::operator+(a5, v36, &v34); /*0x1fda0b*/
      if ( a6 != 2 ) /*0x1fda14*/
      {
        v26 = roundf(v23 * 1000.0); /*0x1fda1e*/
        *((_DWORD *)v21 + 16) = 0; /*0x1fda27*/
        v27 = *(_QWORD *)v21; /*0x1fda36*/
        v28 = (float)(int)v26 / 1000.0; /*0x1fda3c*/
        *((float *)v21 + 290) = v28; /*0x1fda41*/
        *((float *)v21 + 249) = v28; /*0x1fda49*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(v27 + 1288))(v21); /*0x1fda55*/
        *((_BYTE *)v21 + 848) = 1; /*0x1fda5b*/
        *((_BYTE *)v21 + 872) = 1; /*0x1fda62*/
      }
      if ( a6 != 1 ) /*0x1fda6c*/
      {
        v29 = roundf(v24 * 1000.0); /*0x1fda76*/
        *((_DWORD *)v21 + 17) = 0; /*0x1fda7f*/
        v30 = *(_QWORD *)v21; /*0x1fda8e*/
        v31 = (float)(int)v29 / 1000.0; /*0x1fda94*/
        *((float *)v21 + 291) = v31; /*0x1fda99*/
        *((float *)v21 + 250) = v31; /*0x1fdaa1*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(v30 + 1296))(v21); /*0x1fdaad*/
        *((_BYTE *)v21 + 848) = 1; /*0x1fdab3*/
        *((_BYTE *)v21 + 872) = 1; /*0x1fdaba*/
      }
      if ( !a7 ) /*0x1fdac4*/
      {
        v32 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v21 + 200LL))(v21); /*0x1fdacc*/
        cocos2d::CCPoint::operator-(v36, v37, v32); /*0x1fdadf*/
        EditorUI_moveObject(a1, (__int64)v21, (__int64)v37); /*0x1fdaf0*/
      }
      ++v19; /*0x1fdaf8*/
      result = cocos2d::CCArray::count(a2); /*0x1fdafa*/
      v20 = a1 + 464; /*0x1fdb00*/
    }
    while ( v19 < result ); /*0x1fdb09*/
  }
  return result; /*0x1fdb17*/
}

// [85/110] Address: 0x1fe6f0
// Method: EditorUI::alignObjects
// Hidden C++ exception states: #wind=1
void __fastcall EditorUI_alignObjects(__int64 a1, cocos2d::CCArray *a2, char a3)
{
  unsigned int v5; // eax
  cocos2d::CCArray *v6; // rax
  cocos2d::CCDictionary *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // edi
  struct cocos2d::CCObject *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct cocos2d::CCObject *v14; // rax
  cocos2d::CCArray *v15; // r13
  unsigned int i; // esi
  int v17; // ebx
  struct cocos2d::CCObject *v18; // rax
  __int64 v19; // rcx
  cocos2d::CCSprite *v20; // rax
  cocos2d::CCSprite *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int *v24; // rcx
  char v25; // si
  size_t v26; // rdx
  void *v27; // rcx
  int (__cdecl *v28)(const void *, const void *); // r9
  __int64 v29; // rdx
  char v30; // di
  unsigned int *v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rbx
  _QWORD *j; // rsi
  const struct cocos2d::CCPoint *v35; // rax
  int *v36; // rbx
  const struct cocos2d::CCPoint *v37; // rax
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  cocos2d::CCPoint *v41; // rcx
  __int64 v42; // rax
  cocos2d::CCArray *v43; // rax
  cocos2d::CCArray *v44; // rsi
  unsigned int v45; // edi
  struct cocos2d::CCObject *v46; // rbx
  __int64 v47; // rax
  float v48; // [rsp+20h] [rbp-50h] BYREF
  float v49; // [rsp+24h] [rbp-4Ch]
  char v50[8]; // [rsp+28h] [rbp-48h] BYREF
  float v51[2]; // [rsp+30h] [rbp-40h] BYREF
  char v52[8]; // [rsp+38h] [rbp-38h] BYREF
  void *v53; // [rsp+40h] [rbp-30h] BYREF
  char v54[8]; // [rsp+48h] [rbp-28h] BYREF
  char v55; // [rsp+50h] [rbp-20h] BYREF
  char v56; // [rsp+58h] [rbp-18h] BYREF
  char v57[16]; // [rsp+60h] [rbp-10h] BYREF
  float v58; // [rsp+B8h] [rbp+48h] BYREF
  float v59; // [rsp+BCh] [rbp+4Ch]
  char v60; // [rsp+C0h] [rbp+50h]
  float v61; // [rsp+C8h] [rbp+58h] BYREF
  float v62; // [rsp+CCh] [rbp+5Ch]

  if ( a2 ) /*0x1fe6f3*/
  {
    v60 = a3; /*0x1fe6fe*/
    if ( cocos2d::CCArray::count(a2) >= 3 ) /*0x1fe727*/
    {
      v5 = cocos2d::CCArray::count(a2); /*0x1fe730*/
      v6 = cocos2d::CCArray::createWithCapacity(v5); /*0x1fe738*/
      cocos2d::CCArray::addObjectsFromArray(v6, a2); /*0x1fe744*/
      v7 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x1fe750*/
      v8 = 1; /*0x1fe753*/
      if ( *(_BYTE *)(a1 + 915) && !*(_BYTE *)(a1 + 916) ) /*0x1fe767*/
      {
        v9 = 0; /*0x1fe775*/
        while ( v9 < cocos2d::CCArray::count(a2) ) /*0x1fe77a*/
        {
          v10 = cocos2d::CCArray::objectAtIndex(a2, v9); /*0x1fe78f*/
          if ( *((int *)v10 + 220) <= 0 ) /*0x1fe799*/
          {
            ++v9; /*0x1fe7dd*/
          }
          else
          {
            cocos2d::CCArray::removeObjectAtIndex(a2, v9, 1); /*0x1fe7a4*/
            if ( !cocos2d::CCDictionary::objectForKey(v7, *((int *)v10 + 220)) ) /*0x1fe7b4*/
            {
              v13 = *((int *)v10 + 220); /*0x1fe7bf*/
              v14 = (struct cocos2d::CCObject *)cocos2d::CCNode::create(v12, v11); /*0x1fe7c6*/
              cocos2d::CCDictionary::setObject(v7, v14, v13); /*0x1fe7d5*/
            }
          }
        }
        v15 = cocos2d::CCDictionary::allKeys(v7); /*0x1fe7f5*/
        for ( i = 0; i < cocos2d::CCArray::count(v15); ++i ) /*0x1fe7fd*/
        {
          v17 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(v15, i) + 14); /*0x1fe81b*/
          v18 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(*(_QWORD *)(a1 + 1512) + 4320LL), v17); /*0x1fe830*/
          if ( v18 ) /*0x1fe839*/
          {
            EditorUI_getGroupCenter(v19, v50, v18); /*0x1fe849*/
            v53 = operator new(0x550u); /*0x1fe858*/
            v20 = (cocos2d::CCSprite *)GameObject_GameObject(v53); /*0x1fe85f*/
            v21 = v20; /*0x1fe864*/
            if ( v20 ) /*0x1fe86a*/
            {
              *((_DWORD *)v20 + 7) = 13; /*0x1fe86c*/
              if ( cocos2d::CCSprite::initWithSpriteFrameName(v20, "checkpoint_01_001.png") ) /*0x1fe87d*/
              {
                sub_287800(v21); /*0x1fe897*/
                *((_BYTE *)v21 + 313) = 1; /*0x1fe89c*/
                cocos2d::CCObject::autorelease(v21); /*0x1fe8a6*/
              }
              else
              {
                (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v21 + 8LL))(v21, 1); /*0x1fe890*/
                v21 = 0; /*0x1fe893*/
              }
            }
            *((_DWORD *)v21 + 259) = 44; /*0x1fe8ac*/
            *((_DWORD *)v21 + 220) = v17; /*0x1fe8b6*/
            v22 = *(_QWORD *)v21; /*0x1fe8bc*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v52, (const struct cocos2d::CCPoint *)v50); /*0x1fe8c7*/
            (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v22 + 1216))(v21, v23); /*0x1fe8d3*/
            cocos2d::CCArray::addObject(a2, v21); /*0x1fe8df*/
          }
        }
      }
      v24 = (unsigned int *)*((_QWORD *)a2 + 7); /*0x1fe8f8*/
      v25 = v60; /*0x1fe8fc*/
      v26 = *v24; /*0x1fe900*/
      v27 = (void *)*((_QWORD *)v24 + 2); /*0x1fe908*/
      v28 = sub_19CBE0; /*0x1fe90f*/
      if ( !v60 ) /*0x1fe916*/
        v28 = sub_19CB90; /*0x1fe918*/
      qsort(v27, v26, 8u, v28); /*0x1fe91f*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v58); /*0x1fe929*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v61); /*0x1fe933*/
      v30 = 1; /*0x1fe939*/
      v31 = (unsigned int *)*((_QWORD *)a2 + 7); /*0x1fe93c*/
      v32 = *v31; /*0x1fe940*/
      if ( (_DWORD)v32 ) /*0x1fe944*/
      {
        v33 = (_QWORD *)*((_QWORD *)v31 + 2); /*0x1fe94a*/
        for ( j = &v33[v32 - 1]; v33 <= j; ++v33 ) /*0x1fe959*/
        {
          if ( !*v33 ) /*0x1fe960*/
            break; /*0x1fe966*/
          v35 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v33 + 200LL))(*v33); /*0x1fe96f*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v35); /*0x1fe97c*/
          if ( v30 ) /*0x1fe985*/
          {
            v30 = 0; /*0x1fe987*/
            cocos2d::CCPoint::operator=(&v58, &v48); /*0x1fe992*/
            cocos2d::CCPoint::operator=(&v61, &v48); /*0x1fe9a0*/
          }
          else
          {
            if ( v58 > v48 ) /*0x1fe9b5*/
              v58 = v48; /*0x1fe9b7*/
            if ( v48 > v61 ) /*0x1fe9c0*/
              v61 = v48; /*0x1fe9c2*/
            if ( v59 > v49 ) /*0x1fe9d4*/
              v59 = v49; /*0x1fe9d6*/
            if ( v49 > v62 ) /*0x1fe9df*/
              v62 = v49; /*0x1fe9e1*/
          }
        }
        v25 = v60; /*0x1fe9f3*/
      }
      if ( v58 != v61 || v59 != v62 ) /*0x1fea0f*/
      {
        EditorUI_createUndoObject(a1, v29, 0); /*0x1fea1b*/
        cocos2d::CCPoint::operator-(&v61, v54, &v58); /*0x1fea2c*/
        cocos2d::CCArray::count(a2); /*0x1fea35*/
        cocos2d::CCPoint::operator*(v54, v51); /*0x1fea59*/
        if ( cocos2d::CCArray::count(a2) - 1 > 1 ) /*0x1fea6d*/
        {
          do /*0x1feb92*/
          {
            v36 = (int *)cocos2d::CCArray::objectAtIndex(a2, v8); /*0x1fea7f*/
            v37 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(int *))(*(_QWORD *)v36 + 200LL))(v36); /*0x1fea8f*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v37); /*0x1fea98*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50); /*0x1feaa2*/
            v38 = (float)(int)v8; /*0x1feaad*/
            if ( v25 ) /*0x1feab3*/
            {
              v39 = (float)(v38 * v51[1]) + v59; /*0x1feabf*/
              v40 = v48; /*0x1feac2*/
              v41 = (cocos2d::CCPoint *)&v55; /*0x1feac7*/
            }
            else
            {
              v40 = (float)(v38 * v51[0]) + v58; /*0x1fead2*/
              v39 = v49; /*0x1fead7*/
              v41 = (cocos2d::CCPoint *)&v56; /*0x1feadc*/
            }
            cocos2d::CCPoint::CCPoint(v41, v40, v39); /*0x1feae0*/
            cocos2d::CCPoint::operator=(v50, v42); /*0x1feaed*/
            cocos2d::CCPoint::operator-(v50, v52, &v48); /*0x1feaff*/
            if ( v36[259] == 44 ) /*0x1feb0c*/
            {
              v43 = cocos2d::CCDictionary::objectForKey( /*0x1feb27*/
                      *(cocos2d::CCDictionary **)(*(_QWORD *)(a1 + 1512) + 4320LL),
                      v36[220]);
              v44 = v43; /*0x1feb2d*/
              if ( v43 ) /*0x1feb33*/
              {
                v45 = 0; /*0x1feb35*/
                if ( cocos2d::CCArray::count(v43) ) /*0x1feb3a*/
                {
                  do /*0x1feb7b*/
                  {
                    v46 = cocos2d::CCArray::objectAtIndex(v44, v45); /*0x1feb4f*/
                    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, (const struct cocos2d::CCPoint *)v52); /*0x1feb5a*/
                    EditorUI_moveObject(a1, (__int64)v46, v47); /*0x1feb69*/
                    ++v45; /*0x1feb6e*/
                  }
                  while ( v45 < cocos2d::CCArray::count(v44) ); /*0x1feb7b*/
                }
              }
              v25 = v60; /*0x1feb7d*/
            }
            else
            {
              cocos2d::CCPoint::operator-(v50, &v53, &v48); /*0x1fec1d*/
              EditorUI_moveObject(a1, (__int64)v36, (__int64)&v53); /*0x1fec2d*/
            }
            ++v8; /*0x1feb81*/
          }
          while ( v8 < cocos2d::CCArray::count(a2) - 1 ); /*0x1feb92*/
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 840) + 344LL))(*(_QWORD *)(a1 + 840)) ) /*0x1feba2*/
        {
          sub_200430(a1); /*0x1febaf*/
          EditorUI_activateTransformControl(a1, 0); /*0x1febb9*/
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 808) + 344LL))(*(_QWORD *)(a1 + 808)) ) /*0x1febc8*/
        {
          *(_BYTE *)(a1 + 824) = 1; /*0x1febd2*/
          EditorUI_activateRotationControl(a1, 0); /*0x1febdf*/
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 432) + 40LL))(a1 + 432); /*0x1febee*/
        EditorUI_updateButtons(a1); /*0x1febf4*/
      }
    }
  }
}

// [86/110] Address: 0x1ff210
// Method: EditorUI::getGroupCenter
cocos2d::CCPoint *__fastcall EditorUI_getGroupCenter(__int64 a1, cocos2d::CCPoint *a2, cocos2d::CCArray *a3, char a4)
{
  struct cocos2d::CCObject *v7; // rbx
  const struct cocos2d::CCPoint *v8; // rax
  struct cocos2d::CCObject *v9; // rbx
  unsigned int v10; // edi
  float v11; // xmm10_4
  float v12; // xmm7_4
  float v13; // xmm11_4
  float v14; // xmm9_4
  struct cocos2d::CCObject *v15; // rsi
  float MaxX; // xmm6_4
  float MinX; // xmm13_4
  float MaxY; // xmm8_4
  float MinY; // xmm0_4
  _BYTE v21[16]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+E0h] [rbp+8h] BYREF

  v22 = a1; /*0x1ff215*/
  if ( cocos2d::CCArray::count(a3) == 1 ) /*0x1ff23f*/
  {
    v7 = cocos2d::CCArray::objectAtIndex(a3, 0); /*0x1ff24c*/
    sub_28A130(v7); /*0x1ff24f*/
    v8 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 200LL))(v7); /*0x1ff261*/
    cocos2d::CCPoint::CCPoint(a2, v8); /*0x1ff269*/
  }
  else
  {
    v9 = 0; /*0x1ff27c*/
    v10 = 0; /*0x1ff286*/
    v11 = 999999.0; /*0x1ff297*/
    v12 = 999999.0; /*0x1ff2a6*/
    v13 = -999999.0; /*0x1ff2aa*/
    v14 = -999999.0; /*0x1ff2b3*/
    if ( !cocos2d::CCArray::count(a3) ) /*0x1ff2b7*/
      goto LABEL_18; /*0x1ff2b7*/
    do /*0x1ff3c1*/
    {
      v15 = cocos2d::CCArray::objectAtIndex(a3, v10); /*0x1ff30e*/
      sub_28A130(v15); /*0x1ff311*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v15 + 1176LL))(v15, v21); /*0x1ff330*/
      MaxX = cocos2d::CCRect::getMaxX((cocos2d::CCRect *)v21); /*0x1ff343*/
      MinX = cocos2d::CCRect::getMinX((cocos2d::CCRect *)v21); /*0x1ff351*/
      MaxY = cocos2d::CCRect::getMaxY((cocos2d::CCRect *)v21); /*0x1ff360*/
      MinY = cocos2d::CCRect::getMinY((cocos2d::CCRect *)v21); /*0x1ff364*/
      v13 = fmaxf(MaxX, v13); /*0x1ff373*/
      if ( v11 > MinX || v11 == 0.0 ) /*0x1ff37f*/
        v11 = MinX; /*0x1ff381*/
      v14 = fmaxf(MaxY, v14); /*0x1ff38d*/
      if ( v12 > MinY || v12 == 0.0 ) /*0x1ff399*/
        v12 = MinY; /*0x1ff39b*/
      if ( *((_BYTE *)v15 + 1158) ) /*0x1ff39e*/
      {
        if ( v9 ) /*0x1ff3aa*/
          a4 = 1; /*0x1ff3ac*/
        else
          v9 = v15; /*0x1ff3b1*/
      }
      ++v10; /*0x1ff3b7*/
    }
    while ( v10 < cocos2d::CCArray::count(a3) ); /*0x1ff3c1*/
    if ( v9 && !a4 ) /*0x1ff3fa*/
    {
      (*(void (__fastcall **)(struct cocos2d::CCObject *, cocos2d::CCPoint *))(*(_QWORD *)v9 + 1208LL))(v9, a2); /*0x1ff405*/
    }
    else
    {
LABEL_18:
      cocos2d::CCPoint::CCPoint( /*0x1ff443*/
        (cocos2d::CCPoint *)&v22,
        (float)((float)(v13 - v11) * 0.5) + v11,
        (float)((float)(v14 - v12) * 0.5) + v12);
      cocos2d::CCPoint::CCPoint(a2, (const struct cocos2d::CCPoint *)&v22); /*0x1ff454*/
    }
  }
  return a2; /*0x1ff47f*/
}

// [87/110] Address: 0x1ff4a0
// Method: EditorUI::getLimitedPosition
cocos2d::CCPoint *__fastcall EditorUI_getLimitedPosition(__int64 a1, cocos2d::CCPoint *a2, float *a3)
{
  __int64 v3; // rax
  float v5; // xmm2_4
  float v6; // xmm1_4
  __int64 v7; // rcx
  int v8; // eax

  v3 = *(_QWORD *)(a1 + 1512); /*0x1ff4a6*/
  v5 = fmaxf(-3000.0, a3[1]); /*0x1ff4c8*/
  v6 = fmaxf(-3000.0, *a3); /*0x1ff4ce*/
  a3[1] = v5; /*0x1ff4d3*/
  *a3 = fminf(240000.0, v6); /*0x1ff4dd*/
  v7 = *(_QWORD *)(v3 + 3592); /*0x1ff4e2*/
  v8 = 80; /*0x1ff4e9*/
  if ( *(_BYTE *)(v7 + 461) ) /*0x1ff4ee*/
    v8 = 1000; /*0x1ff4f8*/
  a3[1] = fminf((float)((float)v8 * 30.0) + 90.0, v5); /*0x1ff519*/
  cocos2d::CCPoint::CCPoint(a2, (const struct cocos2d::CCPoint *)a3); /*0x1ff51f*/
  return a2; /*0x1ff528*/
}

// [88/110] Address: 0x1ff530
// Method: EditorUI::activateRotationControl
unsigned int __fastcall EditorUI_activateRotationControl(__int64 a1)
{
  unsigned int result; // eax
  cocos2d::CCArray *v3; // rcx
  __int64 v4; // rcx
  cocos2d::CCPoint *GroupCenter; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x1ff544*/
  if ( result || *(_QWORD *)(a1 + 1568) ) /*0x1ff54e*/
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 808) + 344LL))(*(_QWORD *)(a1 + 808)); /*0x1ff566*/
    if ( !(_BYTE)result || *(_BYTE *)(a1 + 824) ) /*0x1ff570*/
    {
      sub_200430(a1); /*0x1ff585*/
      v3 = *(cocos2d::CCArray **)(a1 + 944); /*0x1ff58a*/
      *(_BYTE *)(a1 + 824) = 0; /*0x1ff591*/
      if ( cocos2d::CCArray::count(v3) ) /*0x1ff598*/
      {
        GroupCenter = EditorUI_getGroupCenter(v4, (cocos2d::CCPoint *)&v12, *(cocos2d::CCArray **)(a1 + 944), 0); /*0x1ff5b1*/
        cocos2d::CCPoint::operator=(a1 + 816, GroupCenter); /*0x1ff5c0*/
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 808) + 184LL))(*(_QWORD *)(a1 + 808), a1 + 816); /*0x1ff5d7*/
      }
      else
      {
        v6 = *(__int64 **)(a1 + 808); /*0x1ff5e6*/
        v7 = *v6; /*0x1ff5f0*/
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1568) + 200LL))(*(_QWORD *)(a1 + 1568)); /*0x1ff5f3*/
        (*(void (__fastcall **)(__int64 *, __int64))(v7 + 184))(v6, v8); /*0x1ff5ff*/
      }
      v9 = *(__int64 **)(a1 + 808); /*0x1ff60c*/
      v10 = *v9; /*0x1ff61a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 1512) + 4360LL) + 168LL))(*(_QWORD *)(*(_QWORD *)(a1 + 1512) + 4360LL)); /*0x1ff620*/
      (*(void (__fastcall **)(__int64 *))(v10 + 160))(v9); /*0x1ff635*/
      ShaderLayer_tweenValueAuto(*(_QWORD *)(a1 + 808)); /*0x1ff645*/
      LOBYTE(v11) = 1; /*0x1ff651*/
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 808) + 336LL))(*(_QWORD *)(a1 + 808), v11); /*0x1ff656*/
    }
  }
  return result; /*0x1ff661*/
}

// [89/110] Address: 0x1ff6e0
// Method: EditorUI::angleChangeBegin
cocos2d::CCArray **__fastcall EditorUI_angleChangeBegin(__int64 a1, __int64 a2)
{
  return EditorUI_createUndoObject(a1 - 424, a2, 0);
}

// [90/110] Address: 0x1ff6f0
// Method: EditorUI::angleChanged
unsigned int __fastcall EditorUI_angleChanged(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  double v6; // xmm0_8
  float v7; // xmm6_4
  __int64 *v8; // rdi
  __int64 v9; // rsi
  unsigned int result; // eax
  int v11; // eax
  int v12; // r8d
  char v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 1144); /*0x1ff707*/
  if ( v4 ) /*0x1ff718*/
  {
    v6 = (*(double (**)(void))(*(_QWORD *)v4 + 392LL))(); /*0x1ff726*/
    v7 = *(float *)&v6; /*0x1ff733*/
    *(float *)&v6 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1144) + 376LL))(*(_QWORD *)(a1 + 1144)); /*0x1ff739*/
    v8 = *(__int64 **)(a1 + 1144); /*0x1ff73f*/
    v9 = *v8; /*0x1ff749*/
    if ( *(float *)&v6 == v7 ) /*0x1ff753*/
    {
      (*(void (__fastcall **)(_QWORD))(v9 + 360))(*(_QWORD *)(a1 + 1144)); /*0x1ff758*/
      return (*(__int64 (__fastcall **)(__int64 *))(v9 + 352))(v8); /*0x1ff768*/
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(v9 + 376))(*(_QWORD *)(a1 + 1144)); /*0x1ff776*/
      (*(void (__fastcall **)(__int64 *))(v9 + 368))(v8); /*0x1ff786*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1144) + 392LL))(*(_QWORD *)(a1 + 1144)); /*0x1ff796*/
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1144) + 384LL))(*(_QWORD *)(a1 + 1144)); /*0x1ff7ad*/
    }
  }
  else
  {
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 520)); /*0x1ff7bc*/
    if ( result ) /*0x1ff7c4*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, (const struct cocos2d::CCPoint *)(a1 + 392)); /*0x1ff7d2*/
      return sub_1FD230((int)a1 - 424, *(_QWORD *)(a1 + 520), v12, v11, a3); /*0x1ff7f1*/
    }
  }
  return result; /*0x1ff7f6*/
}

// [91/110] Address: 0x1ff810
// Method: EditorUI::transformScaleXChanged
__int64 __fastcall EditorUI_transformScaleXChanged(__int64 a1, float a2)
{
  *(float *)(a1 - 440 + 528) = a2; /*0x1ff817*/
  return sub_1FDB70();
}

// [92/110] Address: 0x1ff830
// Method: EditorUI::transformScaleYChanged
__int64 __fastcall EditorUI_transformScaleYChanged(__int64 a1, float a2)
{
  *(float *)(a1 - 440 + 532) = a2; /*0x1ff837*/
  return sub_1FDB70();
}

// [93/110] Address: 0x1ff850
// Method: EditorUI::transformScaleXYChanged
__int64 __fastcall EditorUI_transformScaleXYChanged(__int64 a1, float a2, float a3)
{
  *(float *)(a1 + 88) = a2; /*0x1ff853*/
  *(float *)(a1 + 92) = a3; /*0x1ff85f*/
  return sub_1FDB70(a1 - 440);
}

// [94/110] Address: 0x1ff870
// Method: EditorUI::transformSkewXChanged
__int64 __fastcall EditorUI_transformSkewXChanged(__int64 a1, float a2)
{
  __int64 v2; // rcx

  v2 = a1 - 440; /*0x1ff870*/
  *(float *)(v2 + 544) = a2; /*0x1ff877*/
  return sub_1FDB70(v2);
}

// [95/110] Address: 0x1ff890
// Method: EditorUI::transformSkewYChanged
__int64 __fastcall EditorUI_transformSkewYChanged(__int64 a1, float a2)
{
  __int64 v2; // rcx

  v2 = a1 - 440; /*0x1ff890*/
  *(float *)(v2 + 548) = a2; /*0x1ff897*/
  return sub_1FDB70(v2);
}

// [96/110] Address: 0x1ff8b0
// Method: EditorUI::transformRotationXChanged
__int64 __fastcall EditorUI_transformRotationXChanged(__int64 a1, float a2)
{
  __int64 v2; // rcx

  v2 = a1 - 440; /*0x1ff8b0*/
  *(float *)(v2 + 536) = a2; /*0x1ff8b7*/
  return sub_1FDB70(v2);
}

// [97/110] Address: 0x1ff8d0
// Method: EditorUI::transformRotationYChanged
__int64 __fastcall EditorUI_transformRotationYChanged(__int64 a1, float a2)
{
  __int64 v2; // rcx

  v2 = a1 - 440; /*0x1ff8d0*/
  *(float *)(v2 + 540) = a2; /*0x1ff8d7*/
  return sub_1FDB70(v2);
}

// [98/110] Address: 0x1ff8f0
// Method: EditorUI::transformRotationChanged
__int64 __fastcall EditorUI_transformRotationChanged(__int64 a1, float a2)
{
  *(float *)(a1 + 96) = a2; /*0x1ff8f3*/
  *(float *)(a1 + 100) = a2; /*0x1ff8ff*/
  return sub_1FDB70(a1 - 440);
}

// [99/110] Address: 0x1ff910
// Method: EditorUI::transformResetRotation
__int64 __fastcall EditorUI_transformResetRotation(__int64 a1)
{
  float v1; // xmm1_4
  __int64 result; // rax

  v1 = *(float *)(a1 + 96); /*0x1ff910*/
  *(float *)(a1 + 112) = v1; /*0x1ff91b*/
  if ( v1 != 0.0 ) /*0x1ff922*/
  {
    *(_QWORD *)(a1 + 96) = 0; /*0x1ff926*/
    return sub_1FDB70(a1 - 440); /*0x1ff931*/
  }
  return result; /*0x1ff936*/
}

// [100/110] Address: 0x1ff940
// Method: EditorUI::transformRestoreRotation
__int64 __fastcall EditorUI_transformRestoreRotation(float *a1)
{
  float v1; // xmm1_4
  __int64 result; // rax

  v1 = a1[28]; /*0x1ff940*/
  if ( v1 != 0.0 ) /*0x1ff94d*/
  {
    a1[24] = v1; /*0x1ff94f*/
    a1[25] = v1; /*0x1ff954*/
    return sub_1FDB70(a1 - 110); /*0x1ff960*/
  }
  return result; /*0x1ff965*/
}

// [101/110] Address: 0x1ff970
// Method: EditorUI::updateEditButtonColor
// Hidden C++ exception states: #wind=1
void __fastcall EditorUI_updateEditButtonColor(__int64 a1, __int64 a2, __int16 *a3)
{
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  void *v9; // r8
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int16 v14; // [rsp+30h] [rbp-48h] BYREF
  char v15; // [rsp+32h] [rbp-46h]
  void *Block[2]; // [rsp+40h] [rbp-38h] BYREF
  __m128i si128; // [rsp+50h] [rbp-28h]

  if ( *(_QWORD *)(a1 + 864) ) /*0x1ff98f*/
  {
    v5 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0x1ff9a4*/
    CString = cocos2d::CCString::getCString(v5); /*0x1ff9ad*/
    *(_OWORD *)Block = 0; /*0x1ff9b6*/
    si128 = 0; /*0x1ff9be*/
    v7 = -1; /*0x1ff9c4*/
    do /*0x1ff9d3*/
      ++v7; /*0x1ff9d0*/
    while ( CString[v7] ); /*0x1ff9d3*/
    sub_3C230(Block); /*0x1ff9e2*/
    v8 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 864), Block); /*0x1ff9fa*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x1ffa06*/
    {
      v9 = Block[0]; /*0x1ffa0b*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x1ffa1a*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x1ffa20*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x1ffa2f*/
          invoke_watson(0, 0, 0, 0, 0); /*0x1ffa44*/
      }
      j_j_free(v9); /*0x1ffa4e*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x1ffa5b*/
    LOBYTE(Block[0]) = 0; /*0x1ffa61*/
    if ( v8 ) /*0x1ffa69*/
    {
      v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 952LL))(v8); /*0x1ffa7b*/
      v14 = *a3; /*0x1ffa81*/
      v15 = *((_BYTE *)a3 + 2); /*0x1ffa8a*/
      v11 = v10[79]; /*0x1ffa8e*/
      if ( v11 ) /*0x1ffa98*/
        (**(void (__fastcall ***)(__int64, __int16 *))(v11 + 368))(v11 + 368, &v14); /*0x1ffaac*/
      v12 = v10[80]; /*0x1ffaaf*/
      if ( v12 ) /*0x1ffab9*/
        (**(void (__fastcall ***)(__int64, __int16 *))(v12 + 320))(v12 + 320, &v14); /*0x1ffaca*/
      v13 = v10[82]; /*0x1ffacc*/
      if ( v13 || (v13 = v10[81]) != 0 ) /*0x1ffae2*/
        (**(void (__fastcall ***)(__int64, __int16 *))(v13 + 320))(v13 + 320, &v14); /*0x1ffaf3*/
    }
  }
}

// [102/110] Address: 0x1ffdf0
// Method: EditorUI::updateScaleControl
__int64 __fastcall EditorUI_updateScaleControl(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  char isTrigger; // bp
  _QWORD *v5; // r14
  cocos2d::CCArray **v6; // rsi
  unsigned int v7; // ebx
  struct cocos2d::CCObject *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 400) + 344LL))(*(_QWORD *)(a1 + 400)); /*0x1ffe03*/
  if ( (_BYTE)result ) /*0x1ffe0b*/
  {
    v3 = *(_QWORD *)(a1 + 1136); /*0x1ffe11*/
    isTrigger = 0; /*0x1ffe1d*/
    if ( v3 ) /*0x1ffe28*/
    {
      isTrigger = GameObject_isTrigger(v3); /*0x1ffe2f*/
      v5 = (_QWORD *)(a1 + 512); /*0x1ffe32*/
    }
    else
    {
      v6 = (cocos2d::CCArray **)(a1 + 512); /*0x1ffe40*/
      v5 = (_QWORD *)(a1 + 512); /*0x1ffe4a*/
      if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 512)) ) /*0x1ffe4d*/
      {
        isTrigger = 1; /*0x1ffe5a*/
        v7 = 0; /*0x1ffe62*/
        if ( cocos2d::CCArray::count(*v6) ) /*0x1ffe64*/
        {
          while ( 1 ) /*0x1ffe75*/
          {
            v8 = cocos2d::CCArray::objectAtIndex(*v6, v7); /*0x1ffe75*/
            if ( !(unsigned __int8)GameObject_isTrigger(v8) ) /*0x1ffe7e*/
              break; /*0x1ffe7e*/
            if ( ++v7 >= cocos2d::CCArray::count(*v6) ) /*0x1ffe94*/
              goto LABEL_10; /*0x1ffe94*/
          }
          isTrigger = 0; /*0x1ffe98*/
        }
      }
    }
LABEL_10:
    v9 = *(_QWORD *)(a1 + 400); /*0x1ffea5*/
    if ( *(_BYTE *)(a1 + 307) ) /*0x1ffea5*/
    {
      *(_DWORD *)(v9 + 552) = 1082130432; /*0x1ffeb5*/
      *(_DWORD *)(*(_QWORD *)(a1 + 400) + 556LL) = 1048576000; /*0x1ffec6*/
    }
    else
    {
      *(_DWORD *)(v9 + 556) = 1056964608; /*0x1ffed2*/
      if ( isTrigger || (v10 = *(_QWORD *)(a1 + 1136)) != 0 && *(_DWORD *)(v10 + 1036) == 747 ) /*0x1ffef7*/
        *(_DWORD *)(*(_QWORD *)(a1 + 400) + 552LL) = 1082130432; /*0x1fff13*/
      else
        *(_DWORD *)(*(_QWORD *)(a1 + 400) + 552LL) = 0x40000000; /*0x1fff00*/
    }
    return GJScaleControl_loadValues(*(_QWORD *)(a1 + 400), *(_QWORD *)(a1 + 1136), *v5, a1 + 32); /*0x1fff32*/
  }
  return result; /*0x1fff41*/
}

// [103/110] Address: 0x1fff50
// Method: EditorUI::scaleChangeBegin
cocos2d::CCArray **__fastcall EditorUI_scaleChangeBegin(__int64 a1, __int64 a2)
{
  return EditorUI_createUndoObject(a1 - 432, a2, 0);
}

// [104/110] Address: 0x1fff60
// Method: EditorUI::scaleXChanged
int __fastcall EditorUI_scaleXChanged(__int64 a1, float a2, char a3)
{
  float *v3; // rbx
  float v6; // xmm0_4
  __int64 v7; // rax
  float v8; // xmm1_4
  int result; // eax
  cocos2d::CCPoint *v10; // rax
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(float **)(a1 + 1136); /*0x1fff74*/
  if ( v3 ) /*0x1fff8d*/
  {
    v6 = roundf((float)(a2 * v3[330]) * 1000.0); /*0x1fffa2*/
    v3[16] = 0.0; /*0x1fffab*/
    v7 = *(_QWORD *)v3; /*0x1fffba*/
    v8 = (float)(int)v6 / 1000.0; /*0x1fffc0*/
    v3[290] = v8; /*0x1fffc8*/
    v3[249] = v8; /*0x1fffd0*/
    result = (*(__int64 (__fastcall **)(float *))(v7 + 1288))(v3); /*0x1fffe0*/
    *((_BYTE *)v3 + 848) = 1; /*0x1fffe6*/
    *((_BYTE *)v3 + 872) = 1; /*0x1fffed*/
  }
  else
  {
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 512)); /*0x1ffffd*/
    if ( result ) /*0x200005*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, (const struct cocos2d::CCPoint *)(a1 + 384)); /*0x200013*/
      return EditorUI_scaleObjects(a1 - 432, *(cocos2d::CCArray **)(a1 + 512), a2, 0.0, v10, 1, a3); /*0x20003f*/
    }
  }
  return result; /*0x200044*/
}

// [105/110] Address: 0x200060
// Method: EditorUI::scaleYChanged
int __fastcall EditorUI_scaleYChanged(__int64 a1, float a2, char a3)
{
  float *v3; // rbx
  float v6; // xmm0_4
  __int64 v7; // rax
  float v8; // xmm1_4
  int result; // eax
  cocos2d::CCPoint *v10; // rax
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(float **)(a1 + 1136); /*0x200074*/
  if ( v3 ) /*0x20008d*/
  {
    v6 = roundf((float)(a2 * v3[331]) * 1000.0); /*0x2000a2*/
    v3[17] = 0.0; /*0x2000ab*/
    v7 = *(_QWORD *)v3; /*0x2000ba*/
    v8 = (float)(int)v6 / 1000.0; /*0x2000c0*/
    v3[291] = v8; /*0x2000c8*/
    v3[250] = v8; /*0x2000d0*/
    result = (*(__int64 (__fastcall **)(float *))(v7 + 1296))(v3); /*0x2000e0*/
    *((_BYTE *)v3 + 848) = 1; /*0x2000e6*/
    *((_BYTE *)v3 + 872) = 1; /*0x2000ed*/
  }
  else
  {
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 512)); /*0x2000fd*/
    if ( result ) /*0x200105*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, (const struct cocos2d::CCPoint *)(a1 + 384)); /*0x200113*/
      return EditorUI_scaleObjects(a1 - 432, *(cocos2d::CCArray **)(a1 + 512), 0.0, a2, v10, 2, a3); /*0x20013f*/
    }
  }
  return result; /*0x200144*/
}

// [106/110] Address: 0x200160
// Method: EditorUI::scaleXYChanged
int __fastcall EditorUI_scaleXYChanged(__int64 a1, __int64 a2, float a3, unsigned __int8 a4)
{
  float v4; // xmm1_4
  __int64 v7; // rdx
  int result; // eax
  cocos2d::CCPoint *v9; // rax
  char v10; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 1136) ) /*0x20016f*/
  {
    (**(void (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, a2, a4); /*0x200197*/
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, v7, a4); /*0x2001a6*/
  }
  else
  {
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 512)); /*0x2001b2*/
    if ( result ) /*0x2001ba*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v10, (const struct cocos2d::CCPoint *)(a1 + 384)); /*0x2001c8*/
      return EditorUI_scaleObjects(a1 - 432, *(cocos2d::CCArray **)(a1 + 512), v4, a3, v9, 0, a4); /*0x2001f4*/
    }
  }
  return result; /*0x2001f9*/
}

// [107/110] Address: 0x200220
// Method: EditorUI::activateTransformControl
unsigned int __fastcall EditorUI_activateTransformControl(__int64 a1)
{
  unsigned int result; // eax
  __int64 v3; // rcx
  __int64 v4; // rax

  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)); /*0x200230*/
  if ( result || *(_QWORD *)(a1 + 1568) ) /*0x20023a*/
  {
    v4 = sub_182B60(v3); /*0x200244*/
    sub_182FE0(v4, 189); /*0x200251*/
    sub_1FFD20(a1); /*0x200259*/
    sub_1FF670(a1); /*0x200261*/
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 840) + 344LL))(*(_QWORD *)(a1 + 840)) ) /*0x200270*/
    {
      sub_200430(a1); /*0x20027d*/
      return sub_1B84B0(a1, 0); /*0x20028c*/
    }
    else
    {
      return sub_2002B0(a1); /*0x200296*/
    }
  }
  return result; /*0x200287*/
}

// [108/110] Address: 0x2004d0
// Method: EditorUI::updateTransformControl
__int64 __fastcall EditorUI_updateTransformControl(__int64 a1)
{
  double v1; // xmm0_8
  __int64 result; // rax
  float v4; // xmm7_4
  __int64 v5; // rcx
  cocos2d::CCArray **v6; // rdi
  cocos2d::CCArray *v7; // rcx
  struct cocos2d::CCObject *v8; // rax
  struct cocos2d::CCObject *v9; // rcx
  struct cocos2d::CCArray *v10; // rdi
  int v11; // eax
  int v12; // r9d
  char v13; // [rsp+90h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 400) + 344LL))(*(_QWORD *)(a1 + 400)); /*0x2004ea*/
  if ( (_BYTE)result ) /*0x2004f2*/
  {
    *(_QWORD *)(a1 + 100) = 0; /*0x2004ff*/
    v4 = 0.0; /*0x200503*/
    *(_DWORD *)(a1 + 108) = 0; /*0x200506*/
    *(_QWORD *)(a1 + 120) = 0; /*0x200509*/
    *(_QWORD *)(a1 + 128) = 0; /*0x20050d*/
    *(_DWORD *)(a1 + 88) = 1065353216; /*0x200514*/
    *(_QWORD *)(a1 + 92) = 1065353216; /*0x20051b*/
    *(_DWORD *)(a1 + 152) = 1065353216; /*0x200523*/
    *(_DWORD *)(a1 + 156) = 1065353216; /*0x20052d*/
    if ( *(_BYTE *)(a1 + 116) ) /*0x200541*/
    {
      v5 = *(_QWORD *)(a1 + 1128); /*0x20054a*/
      *(_BYTE *)(a1 + 116) = 0; /*0x200559*/
      if ( v5 ) /*0x20055f*/
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 360LL))(v5); /*0x200564*/
        v6 = (cocos2d::CCArray **)(a1 + 504); /*0x20056a*/
LABEL_8:
        v4 = *(float *)&v1; /*0x2005ae*/
        if ( *(float *)&v1 != 0.0 && !*(_BYTE *)(*(_QWORD *)(a1 + 400) + 571LL) ) /*0x2005c4*/
        {
          v9 = *(struct cocos2d::CCObject **)(a1 + 1128); /*0x2005d1*/
          if ( v9 ) /*0x2005e0*/
            v10 = cocos2d::CCArray::createWithObject(v9); /*0x2005e8*/
          else
            v10 = *v6; /*0x2005ed*/
          sub_200740(a1 - 440, v10); /*0x2005fa*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, (const struct cocos2d::CCPoint *)(a1 + 376)); /*0x200618*/
          sub_1FDCB0(a1 - 440, (_DWORD)v10, v11, v12, 1065353216, -v4, -v4, 0, 0); /*0x200653*/
        }
        goto LABEL_14; /*0x200653*/
      }
      v6 = (cocos2d::CCArray **)(a1 + 504); /*0x200573*/
      v7 = *(cocos2d::CCArray **)(a1 + 504); /*0x20057a*/
      if ( v7 && cocos2d::CCArray::count(v7) ) /*0x200586*/
      {
        v8 = cocos2d::CCArray::objectAtIndex(*v6, 0); /*0x200599*/
        v1 = (*(double (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 360LL))(v8); /*0x2005ac*/
        goto LABEL_8; /*0x2005ac*/
      }
    }
LABEL_14:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 120LL))(*(_QWORD *)(a1 + 408)); /*0x200665*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 136LL))(*(_QWORD *)(a1 + 408)); /*0x200686*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 368LL))(*(_QWORD *)(a1 + 408)); /*0x20069b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 384LL))(*(_QWORD *)(a1 + 408)); /*0x2006b0*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 256LL))(*(_QWORD *)(a1 + 408)); /*0x2006c5*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 272LL))(*(_QWORD *)(a1 + 408)); /*0x2006da*/
    result = sub_1A32A0(*(_QWORD *)(a1 + 400), *(_QWORD *)(a1 + 1128), *(_QWORD *)(a1 + 504), a1 + 24); /*0x2006f9*/
    if ( v4 != 0.0 ) /*0x20070a*/
      return sub_1A5320(*(_QWORD *)(a1 + 400)); /*0x200716*/
  }
  return result; /*0x200720*/
}

// [109/110] Address: 0x200800
// Method: EditorUI::transformChangeBegin
cocos2d::CCArray **__fastcall EditorUI_transformChangeBegin(__int64 a1, __int64 a2)
{
  return EditorUI_createUndoObject(a1 - 440, a2, 0);
}

// [110/110] Address: 0x2008d0
// Method: EditorUI::anchorPointMoved
__int64 __fastcall EditorUI_anchorPointMoved(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(*(_QWORD *)(a1 + 1080) + 4360LL), &v6, a2); /*0x2008fb*/
  cocos2d::CCPoint::operator=(a2, v4); /*0x200907*/
  cocos2d::CCPoint::operator=(a1 + 384, a2); /*0x200917*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 184LL))(*(_QWORD *)(a1 + 408), a1 + 384);
}

// Address: 0x1be150
// Method: EditorUI::ccTouchEnded
// Hidden C++ exception states: #wind=2
double __usercall EditorUI_ccTouchEnded@<xmm0>(
        __int64 a1@<rdx>,
        __int64 a2@<rcx>,
        __int64 a3@<r8>,
        double result@<xmm0>)
{
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool GameVariable; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  const struct cocos2d::CCPoint *v16; // r8
  const struct cocos2d::CCPoint *v17; // r8
  float v18; // xmm0_4
  char v19; // bl
  float v20; // xmm0_4
  char v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  float v28; // xmm0_4
  unsigned __int8 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rbx
  cocos2d::CCPoint *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  const struct cocos2d::CCPoint *v35; // rax
  unsigned int i; // ebx
  struct cocos2d::CCObject *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  cocos2d::CCPoint *v42; // rax
  __int64 v43; // rax
  struct cocos2d::CCObject *v44; // r14
  __int64 v45; // rsi
  unsigned int v46; // ebx
  cocos2d::CCObject *v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  const struct cocos2d::CCPoint *v53; // r8
  __int64 v54; // rbx
  __int64 v55; // rax
  cocos2d::CCArray *v56; // r15
  unsigned int *v57; // rbx
  unsigned int v58; // r14d
  struct cocos2d::CCObject *v59; // rax
  __int64 v60; // rcx
  unsigned int *v61; // rsi
  struct cocos2d::CCArray *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  const struct cocos2d::CCRect *v66; // rax
  float *v67; // rax
  cocos2d::CCArray *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  const struct cocos2d::CCPoint *v75; // r8
  float v76; // xmm0_4
  __int64 v77; // rbx
  __int64 v78; // rax
  cocos2d::CCArray *v79; // r15
  unsigned int *v80; // rbx
  unsigned int v81; // r14d
  struct cocos2d::CCObject *v82; // rax
  __int64 v83; // rcx
  unsigned int *v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rcx
  struct cocos2d::CCObject *Object; // rax
  struct cocos2d::CCArray *v88; // rax
  __int64 v89; // rax
  _BYTE *v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rax
  char v93; // bl
  _BYTE v94[8]; // [rsp+30h] [rbp-59h] BYREF
  float v95; // [rsp+38h] [rbp-51h] BYREF
  float v96; // [rsp+3Ch] [rbp-4Dh]
  void *v97; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v98[8]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v99[8]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v100[16]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v101[16]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v102[56]; // [rsp+78h] [rbp-11h] BYREF
  void *v103; // [rsp+F0h] [rbp+67h] BYREF
  char v104; // [rsp+F8h] [rbp+6Fh] BYREF
  float v105; // [rsp+108h] [rbp+7Fh] BYREF
  float v106; // [rsp+10Ch] [rbp+83h]

  if ( *(_BYTE *)(a2 + 478) && *(_DWORD *)(a2 + 432) == *(_DWORD *)(a1 + 56) )
  {
    cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a2 - 320), 128);
    sub_1BD2F0(a2 - 320);
  }
  *(_BYTE *)(a2 + 504) = 0;
  cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a2 - 320), 123);
  v7 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)(a2 + 424) == v7 )
  {
    *(_DWORD *)(a2 + 424) = -1;
    v8 = *(_QWORD *)(a2 + 488);
LABEL_6:
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 24LL))(v8 + 320, a1, a3);
    return result;
  }
  if ( *(_DWORD *)(a2 + 428) == v7 )
  {
    *(_DWORD *)(a2 + 428) = -1;
    v8 = *(_QWORD *)(a2 + 512);
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a2 + 440) == v7 )
  {
    *(_DWORD *)(a2 + 440) = -1;
    v8 = *(_QWORD *)(a2 + 520);
    goto LABEL_6;
  }
  v9 = *(_QWORD *)(a2 + 1192);
  if ( *(_DWORD *)(v9 + 2204) == 1 )
  {
    v8 = *(_QWORD *)(v9 + 13952);
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a2 + 476) )
  {
    *(_DWORD *)(a2 + 444) = -1;
    *(_DWORD *)(a2 + 432) = -1;
    *(_BYTE *)(a2 + 476) = 0;
    *(_BYTE *)(a2 + 1264) = 0;
    return result;
  }
  if ( *(_DWORD *)(a2 + 432) == v7 )
  {
    v10 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v103 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v103);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v10 = qword_905FD0;
    }
    GameVariable = GameManager_getGameVariable(v10, "0059");
    cocos2d::CCTouch::getLocationInView(a1, &v104);
    v13 = cocos2d::CCDirector::sharedDirector(v12);
    v14 = cocos2d::CCDirector::convertToGL(v13, &v103, &v104);
    cocos2d::CCPoint::operator=(&v104, v14);
    cocos2d::CCNode::convertToWorldSpace(a2 - 320, &v103, &v104);
    cocos2d::CCPoint::operator=(&v104, v15);
    v18 = cocos2d::ccpDistance((cocos2d *)(a2 + 1200), (const struct cocos2d::CCPoint *)&v104, v16);
    if ( GameVariable && v18 < 2.0 )
    {
      v19 = 1;
      v20 = cocos2d::ccpDistance((cocos2d *)(a2 + 1224), (const struct cocos2d::CCPoint *)&v104, v17);
    }
    else
    {
      v20 = cocos2d::ccpDistance((cocos2d *)(a2 + 1224), (const struct cocos2d::CCPoint *)&v104, v17);
      v19 = 0;
      if ( !GameVariable )
        goto LABEL_24;
    }
    if ( v20 < 2.0 )
    {
      v21 = 1;
LABEL_25:
      *(_DWORD *)(a2 + 432) = -1;
      if ( *(_BYTE *)(a2 + 593) && *(_BYTE *)(a2 + 591) && *(_QWORD *)(a2 + 1256) )
      {
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v105, (const struct cocos2d::CCPoint *)&unk_904708);
        cocos2d::CCTouch::getLocationInView(a1, &v103);
        v23 = cocos2d::CCDirector::sharedDirector(v22);
        v24 = cocos2d::CCDirector::convertToGL(v23, &v97, &v103);
        cocos2d::CCPoint::operator=(&v103, v24);
        cocos2d::CCNode::convertToWorldSpace(a2 - 320, &v97, &v103);
        cocos2d::CCPoint::operator=(&v103, v25);
        cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(*(_QWORD *)(a2 + 1192) + 4360LL), v98, &v103);
        v26 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v97 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v97);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v26 = qword_905FD0;
        }
        if ( GameManager_getGameVariable(v26, "0008")
          && (v27 = *(_QWORD *)(a2 + 1256)) != 0
          && (v28 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v27 + 360LL))(v27), (int)v28 == 90 * ((int)v28 / 90))
          && !cocos2d::CCPoint::equals((cocos2d::CCPoint *)&v103, (const struct cocos2d::CCPoint *)(a2 + 1200)) )
        {
          v29 = 1;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v94, (const struct cocos2d::CCPoint *)v98);
          sub_1BCD60(a2 - 320, &v95, v30);
          v31 = *(_QWORD *)(a2 + 1256);
          v32 = (cocos2d::CCPoint *)sub_19CE00(v102, *(unsigned int *)(v31 + 1036));
          GameToolbox_getRelativeOffset((cocos2d::CCPoint *)v94, v31, v32);
          v33 = *(_QWORD *)(a2 + 1256);
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v100, (const struct cocos2d::CCPoint *)&v95);
          sub_1FEFA0(a2 - 320, (unsigned int)v99, (unsigned int)v94, v33, v34);
          cocos2d::CCPoint::operator+(&v95, v94, v99);
          cocos2d::CCPoint::operator=(&v95, v94);
          v35 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 1256) + 200LL))(*(_QWORD *)(a2 + 1256));
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v97, v35);
          (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a2 + 1256) + 184LL))(*(_QWORD *)(a2 + 1256), &v95);
          cocos2d::CCPoint::operator-(&v95, v94, &v97);
          cocos2d::CCPoint::operator=(&v105, v94);
          if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a2 + 624)) )
          {
            for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a2 + 624)); ++i )
            {
              v37 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a2 + 624), i);
              if ( *((_DWORD *)v37 + 231) != *(_DWORD *)(*(_QWORD *)(a2 + 1256) + 924LL) )
              {
                cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v100, (const struct cocos2d::CCPoint *)&v105);
                EditorUI_moveObject(a2 - 320, (__int64)v37, v38);
              }
            }
          }
          cocos2d::CCPoint::operator+(a2 + 496, v94, &v105);
          cocos2d::CCPoint::operator=(a2 + 496, v94);
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 488) + 344LL))(*(_QWORD *)(a2 + 488)) )
          {
            v39 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 488) + 200LL))(*(_QWORD *)(a2 + 488));
            cocos2d::CCPoint::operator+(v39, v94, &v105);
            (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a2 + 488) + 184LL))(*(_QWORD *)(a2 + 488), v94);
          }
          else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 512) + 344LL))(*(_QWORD *)(a2 + 512)) )
          {
            v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 512) + 200LL))(*(_QWORD *)(a2 + 512));
            cocos2d::CCPoint::operator+(v40, v94, &v105);
            (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a2 + 512) + 184LL))(*(_QWORD *)(a2 + 512), v94);
          }
          else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 520) + 344LL))(*(_QWORD *)(a2 + 520)) )
          {
            v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 520) + 200LL))(*(_QWORD *)(a2 + 520));
            cocos2d::CCPoint::operator+(v41, v94, &v105);
            (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a2 + 520) + 184LL))(*(_QWORD *)(a2 + 520), v94);
            sub_1A2C30(*(_QWORD *)(a2 + 520));
          }
        }
        else
        {
          v29 = 0;
        }
        v42 = (cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 1256) + 200LL))(*(_QWORD *)(a2 + 1256));
        if ( cocos2d::CCPoint::equals(v42, (const struct cocos2d::CCPoint *)(a2 + 616)) )
          *(_BYTE *)(a2 + 417) = 1;
        v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 1256) + 200LL))(*(_QWORD *)(a2 + 1256));
        cocos2d::CCPoint::operator-(v43, v101, a2 + 616);
        if ( !*(_BYTE *)(a2 + 417) )
        {
          v44 = *(struct cocos2d::CCObject **)(a2 + 408);
          if ( v44 )
          {
            v45 = *(_QWORD *)(a2 + 1192);
            cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v45 + 14984));
            v46 = 1000;
            if ( !*(_BYTE *)(v45 + 14726) )
              v46 = 200;
            if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v45 + 14976)) >= v46 )
              cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(v45 + 14976), 0, 1);
            cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v45 + 14976), v44);
            v47 = *(cocos2d::CCObject **)(a2 + 408);
            if ( v47 )
            {
              cocos2d::CCObject::release(v47);
              *(_QWORD *)(a2 + 408) = 0;
            }
          }
        }
        goto LABEL_99;
      }
      if ( !*(_BYTE *)(a2 + 589) || v19 )
      {
        if ( *(_BYTE *)(a2 + 1264) )
        {
          *(_BYTE *)(a2 + 1264) = 0;
          goto LABEL_98;
        }
        cocos2d::CCTouch::getLocationInView(a1, &v103);
        v72 = cocos2d::CCDirector::sharedDirector(v71);
        v73 = cocos2d::CCDirector::convertToGL(v72, &v105, &v103);
        cocos2d::CCPoint::operator=(&v103, v73);
        cocos2d::CCNode::convertToWorldSpace(a2 - 320, &v105, &v103);
        cocos2d::CCPoint::operator=(&v103, v74);
        v76 = cocos2d::ccpDistance((cocos2d *)(a2 + 1200), (const struct cocos2d::CCPoint *)&v103, v75);
        if ( !*(_BYTE *)(a2 + 590) || v76 < 20.0 )
        {
          if ( *(_DWORD *)(a2 + 1188) != 3 )
          {
            if ( !*(_BYTE *)(a2 + 1320) )
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, (const struct cocos2d::CCPoint *)(a2 + 1200));
              sub_1AAE70(a2 - 320, v89);
            }
            goto LABEL_98;
          }
          cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(*(_QWORD *)(a2 + 1192) + 4360LL), &v103, a2 + 1200);
          if ( !*(_QWORD *)(a2 + 1256) || !*(_BYTE *)(a2 + 418) )
          {
            v77 = *(_QWORD *)(a2 + 1192);
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v105, (const struct cocos2d::CCPoint *)&v103);
            v79 = (cocos2d::CCArray *)sub_3EDA90(v77, v78);
            v80 = 0;
            v81 = 0;
            if ( cocos2d::CCArray::count(v79) )
            {
              do
              {
                v82 = cocos2d::CCArray::objectAtIndex(v79, v81);
                v84 = (unsigned int *)v82;
                if ( !*((_BYTE *)v82 + 1141) )
                {
                  if ( !v80 || (v83 = v80[286], *((_DWORD *)v82 + 286) < (int)v83) )
                  {
                    if ( (unsigned __int8)sub_1C5720(v83, v82) )
                      v80 = v84;
                  }
                }
                ++v81;
              }
              while ( v81 < cocos2d::CCArray::count(v79) );
              if ( v80 )
              {
                v80[286] = *(_DWORD *)(a2 + 1292);
                EditorUI_createUndoSelectObject(a2 - 320, 0);
                if ( *(_BYTE *)(a2 + 589) )
                {
                  if ( v21 )
                  {
                    if ( *(_QWORD *)(a2 + 1248) )
                    {
                      v85 = a2 - 320;
                      cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)(a2 - 320), 124);
                      v86 = *(_QWORD *)(a2 - 320 + 1568);
                      if ( v86 )
                      {
                        *(_BYTE *)(v86 + 1141) = 0;
                        GameObject_updateObjectEditorColor((_QWORD *)v86);
                      }
                      *(_QWORD *)(v85 + 1568) = 0;
                      EditorUI_toggleEditObjectButton(a2 - 320);
                      *(_BYTE *)(v85 + 824) = 1;
                      cocos2d::CCPoint::operator=(v85 + 1544, &unk_904748);
                    }
                    else
                    {
                      Object = cocos2d::CCArray::lastObject(*(cocos2d::CCArray **)(a2 + 624));
                      if ( Object )
                      {
                        *((_BYTE *)Object + 1141) = 0;
                        GameObject_updateObjectEditorColor(Object);
                        cocos2d::CCArray::removeLastObject(*(cocos2d::CCArray **)(a2 + 624), 1);
                      }
                    }
                  }
                  v88 = cocos2d::CCArray::createWithObject((struct cocos2d::CCObject *)v80);
                  sub_1C47B0(a2 - 320, v88, 0);
                  goto LABEL_98;
                }
                EditorUI_selectObject(a2 - 320, (int *)v80, 0);
                goto LABEL_68;
              }
            }
          }
        }
      }
      else
      {
        v48 = *(_QWORD *)(*(_QWORD *)(a2 + 1192) + 4360LL);
        cocos2d::CCNode::convertToNodeSpace(v48, &v95, a2 + 1200);
        cocos2d::CCNode::convertToNodeSpace(v48, &v105, a2 + 1208);
        cocos2d::CCRect::CCRect(
          (cocos2d::CCRect *)v100,
          fminf(v95, v105),
          fminf(v96, v106),
          fabs(v95 - v105),
          fabs(v96 - v106));
        cocos2d::CCTouch::getLocationInView(a1, &v103);
        v50 = cocos2d::CCDirector::sharedDirector(v49);
        v51 = cocos2d::CCDirector::convertToGL(v50, v101, &v103);
        cocos2d::CCPoint::operator=(&v103, v51);
        cocos2d::CCNode::convertToWorldSpace(a2 - 320, v101, &v103);
        cocos2d::CCPoint::operator=(&v103, v52);
        if ( cocos2d::ccpDistance((cocos2d *)(a2 + 1200), (const struct cocos2d::CCPoint *)&v103, v53) >= 2.0 )
        {
          cocos2d::CCRect::CCRect((cocos2d::CCRect *)v101, (const struct cocos2d::CCRect *)v100);
          v65 = *(_QWORD *)(a2 + 1192);
          cocos2d::CCRect::CCRect((cocos2d::CCRect *)v102, v66);
          v68 = LevelEditorLayer_objectsInRect(v65, v67, 0);
          if ( cocos2d::CCArray::count(v68) )
          {
            v70 = sub_182B60(v69);
            sub_182FE0(v70, 122);
            sub_1C6790(a2 - 320, v68);
          }
          goto LABEL_98;
        }
        v54 = *(_QWORD *)(a2 + 1192);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, (const struct cocos2d::CCPoint *)&v105);
        v56 = (cocos2d::CCArray *)sub_3EDA90(v54, v55);
        v57 = 0;
        v58 = 0;
        if ( cocos2d::CCArray::count(v56) )
        {
          do
          {
            v59 = cocos2d::CCArray::objectAtIndex(v56, v58);
            v61 = (unsigned int *)v59;
            if ( !*((_BYTE *)v59 + 1141) )
            {
              if ( !v57 || (v60 = v57[286], *((_DWORD *)v59 + 286) < (int)v60) )
              {
                if ( (unsigned __int8)sub_1C5720(v60, v59) )
                  v57 = v61;
              }
            }
            ++v58;
          }
          while ( v58 < cocos2d::CCArray::count(v56) );
          if ( v57 )
          {
            v57[286] = *(_DWORD *)(a2 + 1292);
            EditorUI_createUndoSelectObject(a2 - 320, 0);
            v62 = cocos2d::CCArray::createWithObject((struct cocos2d::CCObject *)v57);
            sub_1C47B0(a2 - 320, v62, 0);
LABEL_68:
            v64 = sub_182B60(v63);
            sub_182FE0(v64, 121);
          }
        }
      }
LABEL_98:
      v29 = 0;
LABEL_99:
      v90 = *(_BYTE **)(a2 + 1256);
      if ( v90 )
      {
        if ( *(_BYTE *)(a2 + 593) && *(_BYTE *)(a2 + 591) )
        {
          if ( v90[1141] )
          {
            LOWORD(v103) = -256;
            BYTE2(v103) = 0;
            (*(void (__fastcall **)(_BYTE *, void **))(*(_QWORD *)v90 + 1376LL))(v90, &v103);
          }
          else
          {
            v90[1141] = 0;
            GameObject_updateObjectEditorColor(v90);
          }
          v92 = sub_182B60(v91);
          sub_182FE0(v92, (unsigned int)v29 + 105);
        }
        *(_QWORD *)(a2 + 1256) = 0;
      }
      *(_WORD *)(a2 + 589) = 0;
      *(_BYTE *)(a2 + 593) = 0;
      *(_BYTE *)(a2 + 417) = 0;
      cocos2d::CCPoint::operator=(a2 + 600, &unk_904708);
      *(_BYTE *)(a2 + 591) = 0;
      *(_BYTE *)(a2 + 418) = 0;
      cocos2d::CCPoint::operator=(a2 + 1216, a2 + 1200);
      *(_BYTE *)(a2 + 1265) = 0;
      v93 = *(_BYTE *)(a2 + 504);
      EditorUI_updateButtons(a2 - 320);
      ++*(_DWORD *)(a2 + 1292);
      cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a2 + 608));
      if ( v93 )
      {
        sub_1B0FC0(a2 - 320);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(a2 + 120) + 96LL))(a2 + 120);
        *(_BYTE *)(a2 + 504) = 0;
      }
      return cocos2d::CCPoint::operator=(a2 + 1224, &v104);
    }
LABEL_24:
    v21 = 0;
    goto LABEL_25;
  }
  return result;
}

// Address: 0x1f8be0
// Method: EditorUI::createExtrasForObject
void __fastcall EditorUI_createExtrasForObject(__int64 a1, int a2, __int64 a3, cocos2d::CCArray *a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // edx
  cocos2d::CCPoint *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // edx
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
  unsigned int v46; // edx
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
  cocos2d::CCPoint *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  cocos2d::CCPoint *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  _BYTE v202[8]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v203[8]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v204[8]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v205[8]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v206[8]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v207[8]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v208[8]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v209[8]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v210[8]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v211[8]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v212[8]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v213[8]; // [rsp+98h] [rbp-1h] BYREF
  _BYTE v214[8]; // [rsp+A0h] [rbp+7h] BYREF
  _BYTE v215[8]; // [rsp+A8h] [rbp+Fh] BYREF
  _BYTE v216[8]; // [rsp+B0h] [rbp+17h] BYREF
  _BYTE v217[8]; // [rsp+B8h] [rbp+1Fh] BYREF

  switch ( a2 )
  {
    case 2808:
    case 2823:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA99u, v7, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Cu, v8, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA98u, v9, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      v11 = 2715;
      goto LABEL_40;
    case 2809:
    case 2824:
      goto LABEL_6;
    case 2810:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC2u, v15, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xACBu, v16, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v18 = 2753;
      goto LABEL_8;
    case 2811:
      goto LABEL_12;
    case 2812:
      EditorUI_createExtrasForObject(a1, 2810, a3, a4);
LABEL_12:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB1u, v24, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB4u, v25, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      v27 = 2736;
      goto LABEL_13;
    case 2813:
    case 2828:
      EditorUI_createExtrasForObject(a1, 2808, a3, a4);
LABEL_6:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB78u, v12, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Eu, v13, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB77u, v14, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      v11 = 2941;
      goto LABEL_40;
    case 2814:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA96u, v32, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Cu, v33, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC2u, v34, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC8u, v35, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA95u, v36, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Bu, v37, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC1u, v38, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v11 = 2759;
      goto LABEL_40;
    case 2815:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA99u, v47, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Fu, v48, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAAEu, v49, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB4u, v50, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA98u, v51, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Eu, v52, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      v27 = 2733;
LABEL_13:
      EditorUI_createExtraObject(a1, v27, v26, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      v11 = 2739;
      goto LABEL_40;
    case 2816:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB78u, v60, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Cu, v61, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC5u, v62, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xACBu, v63, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB77u, v64, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Bu, v65, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v18 = 2756;
LABEL_8:
      EditorUI_createExtraObject(a1, v18, v17, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v11 = 2762;
      goto LABEL_40;
    case 2817:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Au, v72, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Eu, v73, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB1u, v74, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB7u, v75, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB79u, v76, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Du, v77, a3, a4, 2, 3);
      v78 = (cocos2d::CCPoint *)v202;
      goto LABEL_25;
    case 2818:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA96u, v87, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Fu, v88, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC2u, v89, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC8u, v90, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAAEu, v91, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB4u, v92, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA95u, v93, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Eu, v94, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC1u, v95, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC7u, v96, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAADu, v97, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 30.0, 0.0);
      v11 = 2739;
      goto LABEL_40;
    case 2819:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Au, v109, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Cu, v110, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC5u, v111, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xACBu, v112, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB1u, v113, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB7u, v114, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB79u, v115, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Bu, v116, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC4u, v117, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xACAu, v118, a3, a4, 2, 3);
      v78 = (cocos2d::CCPoint *)v203;
LABEL_25:
      cocos2d::CCPoint::CCPoint(v78, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB0u, v79, a3, a4, 2, 3);
      goto LABEL_26;
    case 2820:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA96u, v129, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Cu, v130, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB78u, v131, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Cu, v132, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC5u, v133, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC8u, v134, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA95u, v135, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Bu, v136, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB77u, v137, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Bu, v138, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAC4u, v139, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v11 = 2759;
      goto LABEL_40;
    case 2821:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA99u, v151, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Fu, v152, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Au, v153, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Eu, v154, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAAEu, v155, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAB7u, v156, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA98u, v157, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Eu, v158, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB79u, v159, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Du, v160, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAADu, v161, a3, a4, 2, 3);
LABEL_26:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      v11 = 2742;
      goto LABEL_40;
    case 2822:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA96u, v173, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Fu, v174, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Au, v175, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Cu, v176, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADAu, v177, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE3u, v178, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF1u, v179, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF4u, v180, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA95u, v181, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Eu, v182, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB79u, v183, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Bu, v184, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v214, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAD9u, v185, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v215, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE2u, v186, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v216, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF0u, v187, a3, a4, 2, 3);
      v23 = (cocos2d::CCPoint *)v217;
      goto LABEL_11;
    case 2825:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF1u, v19, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF4u, v20, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v22 = 2800;
      goto LABEL_10;
    case 2826:
      goto LABEL_14;
    case 2827:
      EditorUI_createExtrasForObject(a1, 2825, a3, a4);
LABEL_14:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADAu, v28, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE3u, v29, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      v31 = 2777;
      goto LABEL_15;
    case 2829:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA96u, v39, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Cu, v40, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF1u, v41, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF7u, v42, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA95u, v43, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Bu, v44, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v46 = 2800;
      goto LABEL_38;
    case 2830:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA99u, v53, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Fu, v54, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADDu, v55, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE3u, v56, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA98u, v57, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Eu, v58, a3, a4, 2, 3);
      v59 = (cocos2d::CCPoint *)v202;
      goto LABEL_21;
    case 2831:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB78u, v66, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Cu, v67, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAEEu, v68, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF4u, v69, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB77u, v70, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Bu, v71, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v22 = 2797;
LABEL_10:
      EditorUI_createExtraObject(a1, v22, v21, a3, a4, 2, 3);
      v23 = (cocos2d::CCPoint *)v202;
LABEL_11:
      cocos2d::CCPoint::CCPoint(v23, -30.0, 0.0);
      v11 = 2803;
      goto LABEL_40;
    case 2832:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Au, v80, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Eu, v81, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADAu, v82, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE0u, v83, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB79u, v84, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Du, v85, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAD9u, v86, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, 30.0, 0.0);
      v11 = 2783;
      goto LABEL_40;
    case 2833:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA96u, v98, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Fu, v99, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF1u, v100, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF7u, v101, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADDu, v102, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE3u, v103, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA95u, v104, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Eu, v105, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF0u, v106, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF6u, v107, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADCu, v108, a3, a4, 2, 3);
      goto LABEL_16;
    case 2834:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Au, v119, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Eu, v120, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF1u, v121, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF7u, v122, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADDu, v123, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE3u, v124, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB79u, v125, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Du, v126, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF0u, v127, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF6u, v128, a3, a4, 2, 3);
      v59 = (cocos2d::CCPoint *)v203;
LABEL_21:
      cocos2d::CCPoint::CCPoint(v59, 30.0, 0.0);
      v31 = 2780;
LABEL_15:
      EditorUI_createExtraObject(a1, v31, v30, a3, a4, 2, 3);
LABEL_16:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      v11 = 2786;
      goto LABEL_40;
    case 2835:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA96u, v140, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Cu, v141, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB78u, v142, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Cu, v143, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAEEu, v144, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF7u, v145, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA95u, v146, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Bu, v147, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB77u, v148, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Bu, v149, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAEDu, v150, a3, a4, 2, 3);
      goto LABEL_39;
    case 2836:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA99u, v162, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Fu, v163, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Au, v164, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Eu, v165, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADDu, v166, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE0u, v167, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA98u, v168, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Eu, v169, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB79u, v170, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Du, v171, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADCu, v172, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, 30.0, 0.0);
      v11 = 2783;
      goto LABEL_40;
    case 2837:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v217, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA96u, v188, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v216, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Fu, v189, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v215, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Au, v190, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v214, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Cu, v191, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v213, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADDu, v192, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v212, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAE0u, v193, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v211, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAEEu, v194, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v210, -30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xAF7u, v195, a3, a4, 1, 2);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v209, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA95u, v196, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v208, 0.0, 30.0);
      EditorUI_createExtraObject(a1, 0xA9Eu, v197, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB79u, v198, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v206, 0.0, -30.0);
      EditorUI_createExtraObject(a1, 0xB7Bu, v199, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADCu, v200, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v204, 30.0, 0.0);
      EditorUI_createExtraObject(a1, 0xADFu, v201, a3, a4, 2, 3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v203, -30.0, 0.0);
      v46 = 2797;
LABEL_38:
      EditorUI_createExtraObject(a1, v46, v45, a3, a4, 2, 3);
LABEL_39:
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v202, -30.0, 0.0);
      v11 = 2806;
LABEL_40:
      EditorUI_createExtraObject(a1, v11, v10, a3, a4, 2, 3);
      break;
    default:
      return;
  }
}

// Address: 0x1b67c0
// Method: EditorUI::createLoop
// Hidden C++ exception states: #wind=12
int __fastcall EditorUI_createLoop(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rax
  cocos2d::CCArray *v4; // r14
  struct cocos2d::CCObject *v5; // rdx
  unsigned int v6; // ebx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx
  cocos2d::CCArray *v9; // r13
  float v10; // xmm6_4
  float v11; // xmm9_4
  unsigned int i; // r12d
  struct cocos2d::CCObject *v13; // rax
  struct cocos2d::CCObject *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  cocos2d::CCArray *Object; // rbx
  struct cocos2d::CCObject *v18; // rax
  float *v19; // rax
  struct cocos2d::CCObject *v20; // rdx
  cocos2d::CCArray *v21; // rcx
  cocos2d::CCArray *v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r14d
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // ecx
  __int64 v31; // rbx
  __int64 *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  double v35; // xmm0_8
  float v36; // xmm11_4
  __int128 v37; // xmm6
  float v38; // xmm9_4
  float v39; // xmm8_4
  int v40; // r12d
  __int64 v41; // rcx
  unsigned int v42; // ebx
  cocos2d::CCArray *v43; // rdi
  unsigned int v44; // r13d
  cocos2d::CCArray *v45; // r14
  cocos2d::CCArray *v46; // rax
  struct cocos2d::CCObject *v47; // rax
  float *v48; // rax
  __int64 *v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int128 v52; // xmm7
  unsigned int v53; // r14d
  struct cocos2d::CCObject *v54; // rbx
  __int64 v55; // rdi
  float v56; // edi
  _QWORD *v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  float *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rbx
  int v65; // eax
  __int64 v66; // rbx
  int v68; // [rsp+20h] [rbp-E0h]
  _BYTE v69[8]; // [rsp+30h] [rbp-D0h] BYREF
  cocos2d::CCArray *v70; // [rsp+38h] [rbp-C8h]
  cocos2d::CCArray *v71; // [rsp+40h] [rbp-C0h]
  int v72; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v73; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v74; // [rsp+58h] [rbp-A8h]
  __int128 v75; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  __int64 v78; // [rsp+80h] [rbp-80h]
  _BYTE v79[8]; // [rsp+88h] [rbp-78h] BYREF
  cocos2d::CCArray *v80; // [rsp+90h] [rbp-70h]
  _BYTE v81[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v82[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v83[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v84[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v85[112]; // [rsp+B8h] [rbp-48h] BYREF
  float v86; // [rsp+170h] [rbp+70h] BYREF
  float v87; // [rsp+174h] [rbp+74h]
  unsigned int v88; // [rsp+178h] [rbp+78h] BYREF
  int v89; // [rsp+180h] [rbp+80h] BYREF
  int v90; // [rsp+188h] [rbp+88h]

  v2 = 0;
  v90 = 0;
  if ( *(_QWORD *)(a1 + 1568) || (LODWORD(v3) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 944)), (_DWORD)v3) )
  {
    v4 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1);
    v5 = *(struct cocos2d::CCObject **)(a1 + 1568);
    if ( v5 )
      cocos2d::CCArray::addObject(v4, v5);
    else
      cocos2d::CCArray::addObjectsFromArray(v4, *(struct cocos2d::CCArray **)(a1 + 944));
    v6 = 0;
    while ( v6 < cocos2d::CCArray::count(v4) )
    {
      v7 = cocos2d::CCArray::objectAtIndex(v4, v6);
      if ( GameObject_isSpawnableTrigger((__int64)v7) )
        ++v6;
      else
        cocos2d::CCArray::removeObjectAtIndex(v4, v6, 1);
    }
    qsort(*(void **)(*((_QWORD *)v4 + 7) + 16LL), **((unsigned int **)v4 + 7), 8u, sub_19CB90);
    v9 = (cocos2d::CCArray *)cocos2d::CCArray::create(v8);
    v71 = v9;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79);
    v10 = 0.0;
    v11 = 0.0;
    for ( i = 0; i < cocos2d::CCArray::count(v4); ++i )
    {
      v13 = cocos2d::CCArray::objectAtIndex(v4, i);
      v14 = v13;
      if ( !i )
      {
        v15 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, unsigned int *))(*(_QWORD *)v13 + 1208LL))(
                v13,
                &v88);
        cocos2d::CCPoint::operator=(v79, v15);
      }
      *((_BYTE *)v14 + 1489) = 1;
      *((_BYTE *)v14 + 1680) = 1;
      (*(void (__fastcall **)(struct cocos2d::CCObject *, float *))(*(_QWORD *)v14 + 1208LL))(v14, &v86);
      if ( v10 > v86 || v10 == 0.0 )
        v10 = v86;
      if ( v87 > v11 || v11 == 0.0 )
        v11 = v87;
      if ( cocos2d::CCArray::count(v9)
        && (Object = cocos2d::CCArray::lastObject(v9),
            v18 = cocos2d::CCArray::objectAtIndex(Object, 0),
            v19 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *, int *))(*(_QWORD *)v18 + 1208LL))(
                             v18,
                             &v89),
            (float)(v86 - *v19) <= 0.1) )
      {
        v20 = v14;
        v21 = Object;
      }
      else
      {
        v22 = (cocos2d::CCArray *)cocos2d::CCArray::create(v16);
        cocos2d::CCArray::addObject(v22, v14);
        v20 = v22;
        v21 = v9;
      }
      cocos2d::CCArray::addObject(v21, v20);
    }
    v74 = 0;
    v23 = operator new(0x18u);
    *v23 = v23;
    v23[1] = v23;
    v73 = v23;
    v27 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 7;
    v78 = 8;
    v72 = 1065353216;
    sub_3E200(&v75, 16, v23);
    v26 = sub_3F41D0(*(_QWORD *)(a1 + 1512), &v72, v24, v25);
    v89 = v26;
    sub_3DA90(&v75);
    sub_3DB00(&v73);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, v10, v11 + 90.0);
    v29 = sub_1B0700(a1, 1268, v28);
    v30 = v26;
    if ( v26 < 0 )
      v30 = 0;
    if ( v30 > 9999 )
      v30 = 9999;
    *(_DWORD *)(v29 + 1480) = v30;
    v31 = *(_QWORD *)(a1 + 1512);
    sub_3F1780(v31, v29);
    sub_3F1070(v31, v29);
    v32 = *(__int64 **)(a1 + 1512);
    v33 = *v32;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v86, v10, 0.0);
    v35 = (*(double (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _BYTE, _DWORD))(v33 + 1256))(
            v32,
            v34,
            0,
            0,
            0,
            0);
    v36 = *(float *)&v35;
    v37 = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v69);
    rand();
    v38 = v11 + 60.0;
    v39 = 0.0;
    v40 = v26;
    v80 = (cocos2d::CCArray *)cocos2d::CCArray::create(v41);
    *(float *)&v42 = 0.0;
    v86 = 0.0;
    if ( cocos2d::CCArray::count(v9) )
    {
      do
      {
        v88 = cocos2d::CCArray::count(v9) - 1;
        v43 = cocos2d::CCArray::objectAtIndex(v9, v42);
        v70 = v43;
        v44 = v40;
        v45 = v71;
        if ( v42 >= cocos2d::CCArray::count(v71) - 1 )
        {
          v52 = v37;
        }
        else
        {
          v46 = cocos2d::CCArray::objectAtIndex(v45, v42 + 1);
          v47 = cocos2d::CCArray::objectAtIndex(v46, 0);
          v48 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v47 + 1208LL))(
                           v47,
                           v81);
          v49 = *(__int64 **)(a1 + 1512);
          v50 = *v49;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v82, *v48, 0.0);
          LOBYTE(v68) = 0;
          *(double *)&v27 = (*(double (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, int, _DWORD))(v50 + 1256))(
                              v49,
                              v51,
                              0,
                              0,
                              v68,
                              0);
          v52 = v27;
          *(float *)&v52 = *(float *)&v27 - v36;
          *(float *)&v42 = v86;
          v43 = v70;
        }
        v53 = 0;
        if ( cocos2d::CCArray::count(v43) )
        {
          do
          {
            v54 = cocos2d::CCArray::objectAtIndex(v43, v53);
            v55 = *(_QWORD *)(a1 + 1512);
            if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v54 + 1448LL))(
                   v54,
                   v44) == 1 )
              (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, _QWORD, _QWORD))(*(_QWORD *)v55 + 1200LL))(
                v55,
                v54,
                v44,
                0);
            if ( !v53 )
            {
              v37 = v52;
              v56 = v86;
              if ( LODWORD(v86) == v88 )
              {
                v40 = v89;
              }
              else
              {
                v74 = 0;
                v57 = operator new(0x18u);
                *v57 = v57;
                v57[1] = v57;
                v73 = v57;
                v27 = 0;
                v75 = 0;
                v76 = 0;
                v77 = 7;
                v78 = 8;
                v72 = 1065353216;
                sub_3E200(&v75, 16, v57);
                v2 |= 2u;
                v90 = v2;
                v40 = sub_3F41D0(*(_QWORD *)(a1 + 1512), &v72, v58, v59);
              }
              if ( (v2 & 2) != 0 )
              {
                v2 &= ~2u;
                sub_3DA90(&v75);
                sub_3DB00(&v73);
              }
              if ( LODWORD(v56) != v88 )
              {
                v37 = v52;
                *(float *)&v37 = *(float *)&v52 - v39;
              }
              v60 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v54 + 1208LL))(
                               v54,
                               v83);
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v84, *v60, v38);
              cocos2d::CCPoint::operator=(v69, v61);
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v85, (const struct cocos2d::CCPoint *)v69);
              v63 = sub_1B0700(a1, 1268, v62);
              cocos2d::CCArray::addObject(v80, (struct cocos2d::CCObject *)v63);
              v64 = *(_QWORD *)(a1 + 1512);
              if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v63 + 1448LL))(v63, v44) == 1 )
                (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v64 + 1200LL))(v64, v63, v44, 0);
              v65 = v40;
              if ( v40 < 0 )
                v65 = 0;
              if ( v65 > 9999 )
                v65 = 9999;
              *(_DWORD *)(v63 + 1480) = v65;
              *(_DWORD *)(v63 + 1920) = v37;
              *(_BYTE *)(v63 + 1489) = 1;
              *(_BYTE *)(v63 + 1680) = 1;
              v66 = *(_QWORD *)(a1 + 1512);
              sub_3F1780(v66, v63);
              sub_3F1070(v66, v63);
              v39 = v39 + *(float *)&v37;
            }
            ++v53;
            v43 = v70;
          }
          while ( v53 < cocos2d::CCArray::count(v70) );
          *(float *)&v42 = v86;
        }
        ++v42;
        v86 = *(float *)&v42;
        v9 = v71;
      }
      while ( v42 < cocos2d::CCArray::count(v71) );
    }
    v3 = *(_QWORD *)(a1 + 1512);
    *(_DWORD *)(v3 + 14888) = 16843009;
    *(_BYTE *)(v3 + 14892) = 1;
  }
  return v3;
}

// Address: 0x1a6920
// Method: EditorUI::init
// Hidden C++ exception states: #wind=12
bool __fastcall EditorUI_init(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  cocos2d::CCObject *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  cocos2d::CCString *v15; // rax
  int v16; // ebx
  void *v17; // r8
  float v18; // xmm0_4
  __int64 v19; // rcx
  __int64 v20; // rbx
  cocos2d::CCString *v21; // rax
  int v22; // ebx
  int v23; // r8d
  void *v24; // r8
  float v25; // xmm1_4
  float v26; // xmm1_4
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rcx
  cocos2d::CCDirector *v30; // rax
  float v31; // xmm0_4
  __int64 v32; // rbx
  __int64 v33; // rax
  char *v34; // rbx
  bool (__fastcall *v35)(cocos2d::CCLayer *); // rdx
  bool v36; // al
  char *v37; // rbx
  char *v38; // rbx
  bool (__fastcall *v39)(__int64); // rdx
  bool v40; // al
  __int64 v41; // rdx
 ... [67478 chars total]

// Address: 0x1abea0
// Method: EditorUI::updateObjectInfoLabel
// Hidden C++ exception states: #wind=13
double __fastcall EditorUI_updateObjectInfoLabel(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v3; // rcx
  cocos2d::CCArray *v4; // rcx
  int v5; // edi
  int v6; // r15d
  int v7; // r14d
  int v8; // esi
  int v9; // r12d
  int v10; // r13d
  unsigned int v11; // ebx
  struct cocos2d::CCObject *v12; // rax
  struct cocos2d::CCObject *v13; // rcx
  __int16 v14; // ax
  bool v15; // al
  int v16; // edx
  int *v17; // rax
  int v18; // edx
  int v19; // eax
  __int16 v20; // ax
  char v21; // al
  int *v22; // rax
  int v23; // edx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int16 v29; // dx
  char v30; // al
  int v31; // r8d
  int *v32; // rax
  char v33; // al
  int *v34; // rax
  int v35; // edx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  int v39; // r13d
  cocos2d::CCArray *v40; // rcx
  _QWORD *v41; // r8
  __int64 v42; // r9
  struct cocos2d::CCArray *v43; // rax
  struct cocos2d::CCObject *v44; // rcx
  unsigned int *v45; // rcx
  __int64 v46; // rdx
  __int64 *v47; // r12
  __int64 *v48; // rsi
  __int64 v49; // rdi
  int v50; // r15d
  unsigned int v51; // ecx
  unsigned __int64 v52; // rsi
  __int64 v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rcx
  cocos2d::CCArray *v57; // rax
  cocos2d::CCArray *v58; // rbx
  struct cocos2d::CCObject *v59; // rax
  _QWORD *v60; // rbx
  _QWORD *v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  _DWORD *v64; // rax
  int v65; // ebx
  __int64 **v66; // rdi
  __int64 *v67; // rax
  __int64 v68; // rcx
  _DWORD *v69; // rax
  const char *v70; // r12
  const char *v71; // rdi
  const char *CString; // rax
  cocos2d::CCString *v73; // rax
  __int16 *v74; // rbx
  const char *v75; // rax
  cocos2d::CCString *v76; // rax
  const char *v77; // rsi
  const char *v78; // r15
  cocos2d::CCString *v79; // rax
  unsigned int v80; // edi
  cocos2d::CCString *v81; // rax
  cocos2d::CCString *v82; // rax
  char *v83; // rax
  size_t v84; // r8
  size_t v85; // r8
  int v86; // r14d
  __int64 *v87; // rbx
  signed int v88; // esi
  unsigned int v89; // edi
  bool v90; // di
  _QWORD *v91; // rcx
  __int64 *v92; // rax
  bool v93; // al
  char *v94; // rdx
  __int64 v95; // r8
  void **v96; // r8
  const char *v97; // rcx
  cocos2d::CCString *v98; // rax
  char *v99; // rax
  size_t v100; // r8
  void *v101; // rcx
  __int64 **v102; // rax
  __int64 *i; // rax
  __int64 *j; // rax
  void *v105; // rcx
  cocos2d::CCString *v106; // rax
  char *v107; // rax
  size_t v108; // r15
  size_t v109; // r8
  __int64 v110; // rax
  cocos2d::CCString *v111; // rax
  char *v112; // rax
  size_t v113; // r8
  cocos2d::CCString *v114; // rax
  char *v115; // rax
  size_t v116; // r8
  const char *v117; // rdx
  cocos2d::CCString *v118; // rax
  char *v119; // rax
  size_t v120; // r8
  int v121; // r14d
  __int64 *v122; // rbx
  unsigned int v123; // esi
  unsigned int v124; // edi
  bool v125; // di
  __int64 v126; // rax
  __int64 v127; // r8
  void **v128; // rdx
  size_t v129; // r8
  __int64 **v130; // rax
  __int64 *k; // rax
  __int64 *m; // rax
  __int64 v133; // rbx
  _DWORD *v134; // rdi
  cocos2d::CCString *v135; // rax
  char *v136; // rax
  size_t v137; // r8
  double v138; // xmm7_8
  double v139; // xmm8_8
  double v140; // xmm6_8
  float *v141; // rax
  cocos2d::CCString *v142; // rax
  char *v143; // rax
  size_t v144; // r8
  cocos2d::CCString *v145; // rax
  char *v146; // rax
  __int128 *p_Src; // rdx
  double result; // xmm0_8
  int v149; // [rsp+30h] [rbp-D0h]
  unsigned int v150; // [rsp+34h] [rbp-CCh]
  int v151; // [rsp+38h] [rbp-C8h]
  int v152; // [rsp+3Ch] [rbp-C4h]
  unsigned int v153; // [rsp+40h] [rbp-C0h]
  unsigned int v154; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v155; // [rsp+48h] [rbp-B8h]
  int v156; // [rsp+4Ch] [rbp-B4h]
  __int64 v157; // [rsp+50h] [rbp-B0h]
  cocos2d::CCArray *v158; // [rsp+58h] [rbp-A8h] BYREF
  __int64 **v159; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v160; // [rsp+68h] [rbp-98h]
  __int64 *v161; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v162; // [rsp+78h] [rbp-88h] BYREF
  __int64 v163; // [rsp+80h] [rbp-80h]
  __int64 **v164; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v165; // [rsp+90h] [rbp-70h]
  _QWORD *v166; // [rsp+98h] [rbp-68h]
  __int64 v167; // [rsp+A0h] [rbp-60h]
  __int64 ***v168; // [rsp+A8h] [rbp-58h]
  __int64 v169; // [rsp+B0h] [rbp-50h]
  void *v170; // [rsp+B8h] [rbp-48h]
  void *Block[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v172; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v173; // [rsp+D8h] [rbp-28h]
  __int128 Src; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v175; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v176; // [rsp+F8h] [rbp-8h]
  __int128 v177; // [rsp+100h] [rbp+0h] BYREF
  __int64 v178; // [rsp+110h] [rbp+10h]
  unsigned __int64 v179; // [rsp+118h] [rbp+18h]
  __int128 v180; // [rsp+120h] [rbp+20h] BYREF
  __int64 v181; // [rsp+130h] [rbp+30h]
  __int64 v182; // [rsp+138h] [rbp+38h]
  _BYTE v183[528]; // [rsp+140h] [rbp+40h] BYREF

  v1 = a1;
  v157 = a1;
  v2 = 0;
  v3 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v161 = (__int64 *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v161);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v3 = qword_905FD0;
  }
  if ( GameManager_getGameVariable(v3, "0041") )
  {
    v180 = 0;
    v181 = 0;
    v182 = 15;
    LOBYTE(v180) = 0;
    v156 = 0;
    v4 = *(cocos2d::CCArray **)(v1 + 944);
    if ( v4 && cocos2d::CCArray::count(v4) )
    {
      v156 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(v1 + 944));
      v5 = -2;
      v151 = -2;
      v6 = -2;
      v149 = -2;
      v7 = -1;
      v152 = -1;
      v8 = -1;
      v153 = -1;
      v9 = -1;
      v150 = -1;
      v10 = -1;
      v155 = -1;
      v11 = 0;
      if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(v157 + 944)) )
      {
        do
        {
          v12 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v157 + 944), v11);
          v13 = v12;
          if ( v6 != -10001 )
          {
            v14 = *((_WORD *)v12 + 524);
            v15 = v14 ? v14 == 1 : *((_BYTE *)v13 + 1300);
            if ( v15 || *((_QWORD *)v13 + 112) || (v16 = *(_DWORD *)(*((_QWORD *)v13 + 138) + 4LL), v16 == 1004) || !v16 )
            {
              v17 = (int *)*((_QWORD *)v13 + 138);
              if ( v17 )
              {
                v18 = v17[1];
                v19 = *v17;
                if ( v18 == v19 || !v19 )
                  v19 = v18;
                if ( v6 == -2 )
                {
                  v6 = v19;
                }
                else if ( v6 != v19 )
                {
                  v6 = -10001;
                }
              }
            }
          }
          if ( v5 != -10001 )
          {
            v20 = *((_WORD *)v13 + 524);
            if ( v20 )
              v21 = v20 == 1;
            else
              v21 = *((_BYTE *)v13 + 1300);
            if ( v21
              || *((_QWORD *)v13 + 112)
              || (v22 = (int *)*((_QWORD *)v13 + 138), v23 = v22[1], v23 == 1004)
              || !v23 )
            {
              v22 = (int *)*((_QWORD *)v13 + 139);
            }
            if ( v22 )
            {
              v24 = v22[1];
              v25 = *v22;
              if ( v24 == v25 || !v25 )
                v25 = v24;
              if ( v5 == -2 )
              {
                v5 = v25;
              }
              else if ( v5 != v25 )
              {
                v5 = -10001;
              }
            }
          }
          if ( v7 != -10001 )
          {
            v26 = *((_DWORD *)v13 + 283);
            if ( v7 == -1 )
            {
              v7 = *((_DWORD *)v13 + 283);
              if ( !v26 )
                v7 = *((_DWORD *)v13 + 281);
            }
            else
            {
              if ( !v26 )
                v26 = *((_DWORD *)v13 + 281);
              if ( v7 != v26 )
                v7 = -10001;
            }
          }
          if ( v8 != -10001 )
          {
            v27 = *((_DWORD *)v13 + 284);
            if ( v8 == -1 )
            {
              v8 = *((_DWORD *)v13 + 284);
              if ( !v27 )
                v8 = *((_DWORD *)v13 + 264);
            }
            else
            {
              if ( !v27 )
                v27 = *((_DWORD *)v13 + 264);
              if ( v8 != v27 )
                v8 = -10001;
            }
          }
          if ( v9 != -10001 )
          {
            if ( v9 == -1 )
            {
              v9 = *((__int16 *)v13 + 605);
            }
            else if ( v9 != *((__int16 *)v13 + 605) )
            {
              v9 = -10001;
            }
          }
          if ( v10 != -10001 )
          {
            if ( v10 == -1 )
            {
              v10 = *((__int16 *)v13 + 606);
            }
            else if ( v10 != *((__int16 *)v13 + 606) )
            {
              v10 = -10001;
            }
          }
          ++v11;
        }
        while ( v11 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v157 + 944)) );
        v155 = v10;
        v150 = v9;
        v149 = v6;
        v152 = v7;
        v153 = v8;
        v151 = v5;
      }
      v1 = v157;
      v2 = 0;
    }
    else
    {
      v28 = *(_QWORD *)(v1 + 1568);
      if ( !v28 )
      {
        (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(v1 + 800) + 360LL))(
          *(_QWORD *)(v1 + 800) + 360LL,
          " ");
        return sub_3C310(&v180);
      }
      v29 = *(_WORD *)(v28 + 1048);
      if ( v29 )
        v30 = v29 == 1;
      else
        v30 = *(_BYTE *)(v28 + 1300);
      if ( (v30 || *(_QWORD *)(v28 + 896) || (v31 = *(_DWORD *)(*(_QWORD *)(v28 + 1104) + 4LL), v31 == 1004) || !v31)
        && (v32 = *(int **)(v28 + 1104)) != 0 )
      {
        v6 = *v32;
        v149 = *v32;
        if ( v32[1] == *v32 || !v6 )
        {
          v6 = v32[1];
          v149 = v6;
        }
      }
      else
      {
        v6 = -2;
        v149 = -2;
      }
      if ( v29 )
        v33 = v29 == 1;
      else
        v33 = *(_BYTE *)(v28 + 1300);
      if ( v33 || *(_QWORD *)(v28 + 896) || (v34 = *(int **)(v28 + 1104), v35 = v34[1], v35 == 1004) || !v35 )
        v34 = *(int **)(v28 + 1112);
      if ( v34 )
      {
        v151 = *v34;
        if ( v34[1] == *v34 || !*v34 )
          v151 = v34[1];
      }
      else
      {
        v151 = -2;
      }
      v152 = *(_DWORD *)(v28 + 1132);
      if ( !v152 )
        v152 = *(_DWORD *)(v28 + 1124);
      v153 = *(_DWORD *)(v28 + 1136);
      if ( !v153 )
        v153 = *(_DWORD *)(v28 + 1056);
      v150 = *(__int16 *)(v28 + 1210);
      v155 = *(__int16 *)(v28 + 1212);
    }
    v165 = 0;
    v36 = operator new(0x28u);
    *v36 = v36;
    v36[1] = v36;
    v36[2] = v36;
    *((_WORD *)v36 + 12) = 257;
    v164 = (__int64 **)v36;
    v163 = 0;
    v37 = operator new(0x20u);
    *v37 = v37;
    v37[1] = v37;
    v37[2] = v37;
    *((_WORD *)v37 + 12) = 257;
    v162 = v37;
    v160 = 0;
    v38 = operator new(0x28u);
    *v38 = v38;
    v38[1] = v38;
    v38[2] = v38;
    *((_WORD *)v38 + 12) = 257;
    v159 = (__int64 **)v38;
    v39 = 0;
    v40 = *(cocos2d::CCArray **)(v1 + 944);
    if ( v40 && cocos2d::CCArray::count(v40) )
    {
      v43 = *(struct cocos2d::CCArray **)(v1 + 944);
    }
    else
    {
      v44 = *(struct cocos2d::CCObject **)(v1 + 1568);
      if ( !v44 )
      {
        v158 = 0;
LABEL_147:
        v70 = "?";
        if ( v6 == -10001 )
        {
          v71 = "?";
        }
        else
        {
          if ( v6 < 1000 )
          {
            v73 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v6);
            CString = cocos2d::CCString::getCString(v73);
          }
          else
          {
            CString = GJSpecialColorSelect_textForColorIdx(v6);
          }
          v71 = CString;
        }
        v74 = &word_709BFC;
        if ( v151 == -10001 )
        {
          v75 = "?";
        }
        else if ( v151 < 0 )
        {
          v75 = (const char *)&word_709BFC;
        }
        else if ( v151 < 1000 )
        {
          v76 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v151);
          v75 = cocos2d::CCString::getCString(v76);
        }
        else
        {
          v75 = GJSpecialColorSelect_textForColorIdx(v151);
        }
        v77 = (const char *)&word_709BFC;
        if ( v6 != -2 )
          v77 = v71;
        if ( v151 != -2 )
          v74 = (__int16 *)v75;
        v78 = "?";
        switch ( v152 )
        {
          case -5:
            v78 = "B5";
            break;
          case -3:
            v78 = "B4";
            break;
          case -1:
            v78 = "B3";
            break;
          case 1:
            v78 = "B2";
            break;
          case 3:
            v78 = "B1";
            break;
          case 5:
            v78 = "T1";
            break;
          case 7:
            v78 = "T2";
            break;
          case 9:
            v78 = "T3";
            break;
          case 11:
            v78 = "T4";
            break;
          default:
            break;
        }
        if ( v153 != -10001 )
        {
          v79 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v153);
          v70 = cocos2d::CCString::getCString(v79);
        }
        v80 = v150;
        if ( v150 != -10001 )
        {
          v81 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v150);
          cocos2d::CCString::getCString(v81);
        }
        Src = 0;
        v175 = 0;
        v176 = 15;
        LOBYTE(Src) = 0;
        if ( v151 == -2 || v149 == -2 )
        {
          sub_43D80(&Src, "C: ", 3u);
          if ( v151 == -2 )
            v74 = (__int16 *)v77;
          v85 = -1;
          do
            ++v85;
          while ( *((_BYTE *)v74 + v85) );
          sub_43D80(&Src, v74, v85);
          v83 = (char *)Delimiter;
          v84 = 1;
        }
        else
        {
          v82 = cocos2d::CCString::createWithFormat("C1: %s\nC2: %s\n", v77, (const char *)v74);
          v83 = (char *)cocos2d::CCString::getCString(v82);
          v84 = -1;
          do
            ++v84;
          while ( v83[v84] );
        }
        sub_43D80(&Src, v83, v84);
        if ( v39 > 0 )
        {
          sub_43D80(&Src, "G: ", 3u);
          v86 = 0;
          v87 = *v164;
          if ( !*((_BYTE *)*v164 + 25) )
          {
            while ( 1 )
            {
              v88 = *((_DWORD *)v87 + 7);
              v90 = 0;
              if ( v158 )
              {
                v89 = *((_DWORD *)v87 + 8);
                if ( v89 >= cocos2d::CCArray::count(v158) )
                  v90 = 1;
              }
              if ( v86 )
                sub_43D80(&Src, &unk_709CE8, 1u);
              v91 = v162;
              v92 = (__int64 *)v162[1];
              while ( !*((_BYTE *)v92 + 25) )
              {
                if ( *((_DWORD *)v92 + 7) >= v88 )
                {
                  v91 = v92;
                  v92 = (__int64 *)*v92;
                }
                else
                {
                  v92 = (__int64 *)v92[2];
                }
              }
              v93 = !*((_BYTE *)v91 + 25) && v88 >= *((_DWORD *)v91 + 7);
              v94 = &byte_6E86E0;
              if ( v93 )
                v94 = (char *)&unk_74C4D0;
              *(_OWORD *)Block = 0;
              v172 = 0;
              v173 = 0;
              v95 = -1;
              do
                ++v95;
              while ( v94[v95] );
              sub_3C230(Block);
              v96 = Block;
              v97 = "%i%s";
              if ( !v90 )
                v97 = "(%i%s)";
              if ( v173 > 0xF )
                v96 = (void **)Block[0];
              v98 = cocos2d::CCString::createWithFormat(v97, (unsigned int)v88, v96);
              v99 = (char *)cocos2d::CCString::getCString(v98);
              v100 = -1;
              do
                ++v100;
              while ( v99[v100] );
              sub_43D80(&Src, v99, v100);
              if ( ++v86 >= 5 )
                break;
              if ( v173 > 0xF )
              {
                v101 = Block[0];
                if ( v173 + 1 >= 0x1000 )
                {
                  v101 = (void *)*((_QWORD *)Block[0] - 1);
                  if ( (unsigned __int64)((char *)Block[0] - (char *)v101 - 8) > 0x1F )
                    goto LABEL_233;
                }
                j_j_free(v101);
              }
              v102 = (__int64 **)v87[2];
              if ( *((_BYTE *)v102 + 25) )
              {
                for ( i = (__int64 *)v87[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
                {
                  if ( v87 != (__int64 *)i[2] )
                    break;
                  v87 = i;
                }
                v87 = i;
              }
              else
              {
                v87 = (__int64 *)v87[2];
                for ( j = *v102; !*((_BYTE *)j + 25); j = (__int64 *)*j )
                  v87 = j;
              }
              if ( *((_BYTE *)v87 + 25) )
                goto LABEL_235;
            }
            if ( v173 > 0xF )
            {
              v105 = Block[0];
              if ( v173 + 1 >= 0x1000 )
              {
                v105 = (void *)*((_QWORD *)Block[0] - 1);
                if ( (unsigned __int64)((char *)Block[0] - (char *)v105 - 8) > 0x1F )
LABEL_233:
                  invoke_watson(0, 0, 0, 0, 0);
              }
              j_j_free(v105);
            }
LABEL_235:
            v80 = v150;
          }
          if ( v165 > 5 )
            sub_43D80(&Src, "...", 3u);
          sub_43D80(&Src, (void *)Delimiter, 1u);
        }
        v106 = cocos2d::CCString::createWithFormat("Layer: %s\nZ: %s\n", v78, v70);
        v107 = (char *)cocos2d::CCString::getCString(v106);
        v108 = -1;
        v109 = -1;
        do
          ++v109;
        while ( v107[v109] );
        sub_43D80(&Src, v107, v109);
        v177 = 0;
        v110 = 0;
        v178 = 0;
        v179 = 15;
        LOBYTE(v177) = 0;
        if ( v80 && v80 != -10001 )
        {
          v111 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v80);
          v112 = (char *)cocos2d::CCString::getCString(v111);
          v113 = -1;
          do
            ++v113;
          while ( v112[v113] );
          sub_43D80(&v177, v112, v113);
          v110 = v178;
        }
        if ( v155 && v155 != -10001 )
        {
          if ( v110 )
            v114 = cocos2d::CCString::createWithFormat(", %i", v155);
          else
            v114 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v80);
          v115 = (char *)cocos2d::CCString::getCString(v114);
          v116 = -1;
          do
            ++v116;
          while ( v115[v116] );
          sub_43D80(&v177, v115, v116);
          v110 = v178;
        }
        if ( v110 )
        {
          v117 = (const char *)&v177;
          if ( v179 > 0xF )
            v117 = (const char *)v177;
          v118 = cocos2d::CCString::createWithFormat("EL: %s\n", v117);
          v119 = (char *)cocos2d::CCString::getCString(v118);
          v120 = -1;
          do
            ++v120;
          while ( v119[v120] );
          sub_43D80(&Src, v119, v120);
        }
        if ( v160 )
        {
          sub_43D80(&Src, "CID: ", 5u);
          v121 = 0;
          v122 = *v159;
          while ( !*((_BYTE *)v122 + 25) )
          {
            v123 = *((_DWORD *)v122 + 7);
            v125 = 0;
            if ( v158 )
            {
              v124 = *((_DWORD *)v122 + 8);
              if ( v124 >= cocos2d::CCArray::count(v158) )
                v125 = 1;
            }
            if ( v121 )
              sub_43D80(&Src, &unk_709CE8, 1u);
            if ( !v125 )
              sub_43D80(&Src, &word_74CA4C, 1u);
            fmt::BasicWriter<char>::BasicWriter<char>(v183);
            fmt::BasicWriter<char>::operator<<(v183, v123);
            v126 = fmt::BasicWriter<char>::c_str(v183);
            *(_OWORD *)Block = 0;
            v172 = 0;
            v173 = 0;
            v127 = -1;
            do
              ++v127;
            while ( *(_BYTE *)(v126 + v127) );
            sub_3C230(Block);
            fmt::BasicWriter<char>::~BasicWriter<char>(v183);
            v128 = Block;
            if ( v173 > 0xF )
              v128 = (void **)Block[0];
            v129 = -1;
            do
              ++v129;
            while ( *((_BYTE *)v128 + v129) );
            sub_43D80(&Src, v128, v129);
            sub_3C310(Block);
            if ( !v125 )
              sub_43D80(&Src, ")", 1u);
            if ( ++v121 >= 5 )
              break;
            v130 = (__int64 **)v122[2];
            if ( *((_BYTE *)v130 + 25) )
            {
              for ( k = (__int64 *)v122[1]; !*((_BYTE *)k + 25); k = (__int64 *)k[1] )
              {
                if ( v122 != (__int64 *)k[2] )
                  break;
                v122 = k;
              }
              v122 = k;
            }
            else
            {
              v122 = (__int64 *)v122[2];
              for ( m = *v130; !*((_BYTE *)m + 25); m = (__int64 *)*m )
                v122 = m;
            }
          }
          if ( v160 > 5 )
            sub_43D80(&Src, "...", 3u);
          sub_43D80(&Src, (void *)Delimiter, 1u);
        }
        v133 = v157;
        v134 = *(_DWORD **)(v157 + 1568);
        if ( v134 && v134[314] == 1 )
        {
          if ( *(_QWORD *)(v134 + 447) )
          {
            v135 = cocos2d::CCString::createWithFormat("Order: %i,%i\n", v134[448], v134[447]);
            v136 = (char *)cocos2d::CCString::getCString(v135);
            v137 = -1;
            do
              ++v137;
            while ( v136[v137] );
            sub_43D80(&Src, v136, v137);
          }
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v158, (const struct cocos2d::CCPoint *)(v134 + 450));
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v161, (const struct cocos2d::CCPoint *)(v134 + 450));
          v138 = *((float *)&v161 + 1);
          v139 = *(float *)&v158;
          v140 = *(float *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v134 + 200LL))(v134) + 4);
          v141 = (float *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v134 + 200LL))(v134);
          v142 = cocos2d::CCString::createWithFormat("%.01f %.01f, %.01f %.01f\n", *v141, v140, v139, v138);
          v143 = (char *)cocos2d::CCString::getCString(v142);
          v144 = -1;
          do
            ++v144;
          while ( v143[v144] );
          sub_43D80(&Src, v143, v144);
        }
        if ( v156 > 1 )
        {
          v145 = cocos2d::CCString::createWithFormat("Objects: %i", v156);
          v146 = (char *)cocos2d::CCString::getCString(v145);
          do
            ++v108;
          while ( v146[v108] );
          sub_43D80(&Src, v146, v108);
        }
        p_Src = &Src;
        if ( v176 > 0xF )
          p_Src = (__int128 *)Src;
        (**(void (__fastcall ***)(__int64, __int128 *))(*(_QWORD *)(v133 + 800) + 360LL))(
          *(_QWORD *)(v133 + 800) + 360LL,
          p_Src);
        sub_3C310(&v177);
        sub_3C310(&Src);
        sub_7F2E0(&v159);
        sub_BB6F0(&v162, &v162);
        sub_7F2E0(&v164);
        return sub_3C310(&v180);
      }
      v43 = cocos2d::CCArray::createWithObject(v44);
    }
    v158 = v43;
    if ( v43 )
    {
      v45 = (unsigned int *)*((_QWORD *)v43 + 7);
      v46 = *v45;
      if ( (_DWORD)v46 )
      {
        v47 = (__int64 *)*((_QWORD *)v45 + 2);
        v48 = &v47[v46 - 1];
        v161 = v48;
        if ( v47 <= v48 )
        {
          do
          {
            v49 = *v47;
            if ( !*v47 )
              break;
            v50 = 0;
            if ( *(__int16 *)(v49 + 1176) > 0 )
            {
              v51 = 0;
              v52 = 0;
              do
              {
                if ( v52 <= 9 )
                {
                  v53 = *(_QWORD *)(v49 + 1168);
                  if ( v53 )
                    v51 = *(__int16 *)(v2 + v53);
                }
                v154 = v51;
                v54 = (_DWORD *)sub_10C920(&v164, &v154);
                ++*v54;
                if ( *(_BYTE *)(v49 + 1178) )
                {
                  v55 = (int)v154;
                  v56 = qword_905FD0;
                  if ( !qword_905FD0 )
                  {
                    v170 = operator new(0x6E8u);
                    qword_905FD0 = sub_2723A0(v170);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
                    v56 = qword_905FD0;
                  }
                  v57 = cocos2d::CCDictionary::objectForKey(
                          *(cocos2d::CCDictionary **)(*(_QWORD *)(v56 + 568) + 4032LL),
                          v55);
                  v58 = v57;
                  if ( v57 && cocos2d::CCArray::count(v57) )
                    v59 = cocos2d::CCArray::objectAtIndex(v58, 0);
                  else
                    v59 = 0;
                  if ( (struct cocos2d::CCObject *)v49 == v59 )
                  {
                    v60 = v162;
                    v61 = (_QWORD *)v162[1];
                    v62 = 0;
                    v41 = v162;
                    v63 = v61;
                    v42 = v154;
                    while ( !*((_BYTE *)v63 + 25) )
                    {
                      v61 = v63;
                      if ( *((_DWORD *)v63 + 7) >= (signed int)v154 )
                      {
                        v62 = 1;
                        v41 = v63;
                        v63 = (_QWORD *)*v63;
                      }
                      else
                      {
                        v62 = 0;
                        v63 = (_QWORD *)v63[2];
                      }
                    }
                    Block[0] = v61;
                    LODWORD(Block[1]) = v62;
                    if ( *((_BYTE *)v41 + 25) || (signed int)v154 < *((_DWORD *)v41 + 7) )
                    {
                      if ( v163 == 0x7FFFFFFFFFFFFFFLL )
                        sub_5AC20(v62, v61, v41, v154);
                      v166 = &v162;
                      v167 = 0;
                      v64 = operator new(0x20u);
                      v64[7] = v154;
                      *(_QWORD *)v64 = v60;
                      *((_QWORD *)v64 + 1) = v60;
                      *((_QWORD *)v64 + 2) = v60;
                      *((_WORD *)v64 + 12) = 0;
                      v167 = 0;
                      sub_69600(&v162, Block, v64);
                    }
                  }
                }
                ++v39;
                ++v50;
                ++v52;
                v2 += 2;
                v51 = 0;
              }
              while ( v50 < *(__int16 *)(v49 + 1176) );
              v48 = v161;
              v2 = 0;
            }
            if ( *(_DWORD *)(v49 + 1256) == 1 )
            {
              v65 = *(_DWORD *)(v49 + 1688);
              if ( v65 > 0 )
              {
                v66 = v159;
                v67 = v159[1];
                Block[0] = v67;
                LODWORD(Block[1]) = 0;
                v68 = (__int64)v159;
                while ( !*((_BYTE *)v67 + 25) )
                {
                  Block[0] = v67;
                  if ( *((_DWORD *)v67 + 7) >= v65 )
                  {
                    LODWORD(Block[1]) = 1;
                    v68 = (__int64)v67;
                    v67 = (__int64 *)*v67;
                  }
                  else
                  {
                    LODWORD(Block[1]) = 0;
                    v67 = (__int64 *)v67[2];
                  }
                }
                if ( *(_BYTE *)(v68 + 25) || v65 < *(_DWORD *)(v68 + 28) )
                {
                  if ( v160 == 0x666666666666666LL )
                    sub_5AC20(v68, 0x666666666666666LL, v41, v42);
                  v168 = &v159;
                  v169 = 0;
                  v69 = operator new(0x28u);
                  v69[7] = v65;
                  v69[8] = 0;
                  *(_QWORD *)v69 = v66;
                  *((_QWORD *)v69 + 1) = v66;
                  *((_QWORD *)v69 + 2) = v66;
                  *((_WORD *)v69 + 12) = 0;
                  v169 = 0;
                  v68 = sub_69600(&v159, Block, v69);
                }
                ++*(_DWORD *)(v68 + 32);
              }
            }
            ++v47;
          }
          while ( v47 <= v48 );
          v6 = v149;
        }
      }
    }
    goto LABEL_147;
  }
  return result;
}
