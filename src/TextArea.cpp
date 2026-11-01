#include <Geode/binding/TextArea.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x88c40
// Method: TextArea::~TextArea
cocos2d::CCSprite *__fastcall TextArea__dtor_TextArea(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &TextArea::`vftable'; /*0x88c56*/
  *((_QWORD *)Block + 40) = &TextArea::`vftable'; /*0x88c60*/
  *((_QWORD *)Block + 43) = &TextArea::`vftable'; /*0x88c6e*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 90); /*0x88c75*/
  if ( v4 ) /*0x88c7f*/
    cocos2d::CCObject::release(v4); /*0x88c81*/
  sub_3C310((char *)Block + 632); /*0x88c8e*/
  cocos2d::CCSprite::~CCSprite(Block); /*0x88c96*/
  if ( (a2 & 1) != 0 ) /*0x88ca1*/
    j_j_free(Block); /*0x88cab*/
  return Block; /*0x88cb3*/
}

// [2/9] Address: 0x88cc0
// Method: TextArea::create
// Hidden C++ exception states: #wind=6
char *__fastcall TextArea_create(
        __int64 a1,
        _BYTE *a2,
        float a3,
        float a4,
        const struct cocos2d::CCPoint *a5,
        int a6,
        char a7,
        int a8)
{
  char *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbx
  size_t v14; // r8
  __int64 v15; // rax
  char v17[8]; // [rsp+30h] [rbp-B8h] BYREF
  char v18[32]; // [rsp+38h] [rbp-B0h] BYREF
  char v19[32]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-70h]

  v20 = a1; /*0x88cff*/
  v10 = (char *)operator new(0x2E0u); /*0x88d16*/
  cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)v10); /*0x88d21*/
  *(_QWORD *)v10 = &TextArea::`vftable'; /*0x88d2f*/
  *((_QWORD *)v10 + 40) = &TextArea::`vftable'; /*0x88d39*/
  *((_QWORD *)v10 + 43) = &TextArea::`vftable'; /*0x88d47*/
  *((_WORD *)v10 + 300) = 256; /*0x88d4e*/
  *(_QWORD *)(v10 + 604) = 0; /*0x88d5a*/
  *((_QWORD *)v10 + 77) = 0; /*0x88d61*/
  *((_QWORD *)v10 + 78) = 0; /*0x88d68*/
  *(_OWORD *)(v10 + 632) = 0; /*0x88d72*/
  *((_QWORD *)v10 + 81) = 0; /*0x88d79*/
  *((_QWORD *)v10 + 82) = 15; /*0x88d80*/
  v10[632] = 0; /*0x88d8b*/
  *((_DWORD *)v10 + 166) = 0; /*0x88d92*/
  v10[668] = 0; /*0x88d99*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v10 + 672)); /*0x88da7*/
  v10[680] = 0; /*0x88dad*/
  *((_QWORD *)v10 + 86) = 0; /*0x88db4*/
  *((_DWORD *)v10 + 174) = 0; /*0x88dbb*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v10 + 700)); /*0x88dc9*/
  *((_QWORD *)v10 + 89) = 0; /*0x88dcf*/
  *((_QWORD *)v10 + 90) = 0; /*0x88dd6*/
  *((_DWORD *)v10 + 182) = 0; /*0x88ddd*/
  v11 = sub_3E4F0(v18, a1); /*0x88dfb*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v17, a5); /*0x88e0b*/
  v13 = v12; /*0x88e11*/
  if ( cocos2d::CCSprite::init((cocos2d::CCSprite *)v10) ) /*0x88e17*/
  {
    *((float *)v10 + 156) = a4; /*0x88e3f*/
    cocos2d::CCPoint::operator=(v10 + 672, v13); /*0x88e51*/
    v14 = -1; /*0x88e57*/
    do /*0x88e63*/
      ++v14; /*0x88e60*/
    while ( a2[v14] ); /*0x88e63*/
    sub_3F5A0(v10 + 632, a2, v14); /*0x88e74*/
    *((float *)v10 + 171) = a3; /*0x88e79*/
    *((_DWORD *)v10 + 166) = a6; /*0x88e8a*/
    v10[600] = a7; /*0x88e9a*/
    *((_DWORD *)v10 + 151) = a8; /*0x88ea7*/
    v15 = sub_3E4F0(v19, v11); /*0x88eb5*/
    TextArea_setString(v10, v15); /*0x88ec0*/
    sub_3C310(v11); /*0x88ec9*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v10); /*0x88ed1*/
  }
  else
  {
    sub_3C310(v11); /*0x88e24*/
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x88e34*/
    v10 = 0; /*0x88e37*/
  }
  sub_3C310(a1); /*0x88edb*/
  return v10; /*0x88ee3*/
}

// [3/9] Address: 0x88f20
// Method: TextArea::setString
// Hidden C++ exception states: #wind=6
double __fastcall TextArea_setString(__int64 *a1, const void **a2)
{
  const void *v4; // rcx
  size_t v5; // rdi
  size_t v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // xmm8_4
  int v11; // esi
  char v12; // bp
  char v13; // r14
  int v14; // r15d
  const struct cocos2d::CCPoint *v15; // rax
  const struct cocos2d::CCPoint *v16; // rdi
  int v17; // xmm6_4
  char *v18; // r12
  int v19; // ebx
  __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // rbx
  __int64 v23; // rax
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  __int64 v28; // [rsp+60h] [rbp-108h] BYREF
  __int64 *v29; // [rsp+68h] [rbp-100h]
  _BYTE *v30; // [rsp+70h] [rbp-F8h]
  const void **v31; // [rsp+78h] [rbp-F0h]
  __int128 Buf2; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+90h] [rbp-D8h]
  __int64 v34; // [rsp+98h] [rbp-D0h]
  char v35[8]; // [rsp+A0h] [rbp-C8h] BYREF
  char v36[8]; // [rsp+A8h] [rbp-C0h] BYREF
  _BYTE v37[32]; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v38[32]; // [rsp+D0h] [rbp-98h] BYREF
  const void **v39; // [rsp+F0h] [rbp-78h]

  v31 = a2; /*0x88f5d*/
  v39 = a2; /*0x88f65*/
  Buf2 = 0; /*0x88f6e*/
  v33 = 0; /*0x88f76*/
  v34 = 15; /*0x88f7d*/
  LOBYTE(Buf2) = 0; /*0x88f88*/
  v4 = a2; /*0x88f90*/
  if ( (unsigned __int64)a2[3] > 0xF ) /*0x88f98*/
    v4 = *a2; /*0x88f9a*/
  v5 = (size_t)a2[2]; /*0x88f9d*/
  v6 = v5; /*0x88fa1*/
  if ( v5 ) /*0x88fa7*/
    v6 = 0; /*0x88fa7*/
  if ( memcmp(v4, &Buf2, v6) ) /*0x88fb3*/
  {
    if ( v5 ) /*0x88fc6*/
      goto LABEL_10; /*0x88fc6*/
    goto LABEL_9; /*0x88fc6*/
  }
  if ( !v5 ) /*0x88fbf*/
LABEL_9:
    sub_3F5A0(a2, " ", 1u); /*0x88fc8*/
LABEL_10:
  if ( a1[77] ) /*0x88fdd*/
  {
    TextArea_stopAllCharacterActions(a1); /*0x88fea*/
    (*(void (__fastcall **)(__int64 *, _QWORD))(a1[40] + 40))(a1 + 40, 0); /*0x88ffb*/
    LOBYTE(v7) = 1; /*0x89008*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[77] + 576LL))(a1[77], v7); /*0x8900a*/
    LOBYTE(v8) = 1; /*0x8901a*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[77] + 520LL))(a1[77], v8); /*0x8901c*/
    a1[77] = 0; /*0x89022*/
  }
  v30 = v37; /*0x89031*/
  v9 = sub_3E4F0(v37, a2); /*0x89046*/
  v28 = v9; /*0x89049*/
  v29 = a1 + 79; /*0x89055*/
  if ( (unsigned __int64)a1[82] > 0xF ) /*0x8905f*/
    v29 = (__int64 *)a1[79]; /*0x89064*/
  v10 = *((_DWORD *)a1 + 152); /*0x89069*/
  v11 = *((_DWORD *)a1 + 151); /*0x89072*/
  v12 = *((_BYTE *)a1 + 601); /*0x89079*/
  v13 = *((_BYTE *)a1 + 600); /*0x89081*/
  v14 = (int)*((float *)a1 + 166); /*0x89089*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v35, (const struct cocos2d::CCPoint *)(a1 + 84)); /*0x890a1*/
  v16 = v15; /*0x890a7*/
  v17 = *((_DWORD *)a1 + 156); /*0x890aa*/
  v18 = (char *)operator new(0x2B8u); /*0x890c6*/
  cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)v18); /*0x890d1*/
  *(_QWORD *)v18 = &MultilineBitmapFont::`vftable'; /*0x890df*/
  *((_QWORD *)v18 + 40) = &MultilineBitmapFont::`vftable'; /*0x890ea*/
  *((_QWORD *)v18 + 43) = &MultilineBitmapFont::`vftable'; /*0x890f9*/
  *((_QWORD *)v18 + 75) = 0; /*0x89103*/
  v18[608] = 0; /*0x8910b*/
  *(_QWORD *)(v18 + 612) = 0; /*0x89113*/
  *((_QWORD *)v18 + 78) = 0; /*0x8911b*/
  *((_QWORD *)v18 + 79) = 0; /*0x89123*/
  *((_QWORD *)v18 + 80) = 0; /*0x8912b*/
  *((_QWORD *)v18 + 81) = 0; /*0x89133*/
  *((_DWORD *)v18 + 164) = 0; /*0x8913b*/
  v18[660] = 0; /*0x89143*/
  *((_QWORD *)v18 + 83) = 0; /*0x8914b*/
  *((_QWORD *)v18 + 84) = 0; /*0x89153*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v18 + 680)); /*0x89163*/
  *((_DWORD *)v18 + 172) = 0; /*0x89169*/
  v18[692] = 0; /*0x89175*/
  v30 = v38; /*0x89186*/
  v19 = sub_3E4F0(v38, v9); /*0x8919b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Buf2, v16); /*0x891a9*/
  if ( (unsigned __int8)MultilineBitmapFont_initWithFont( /*0x891e3*/
                          (_DWORD)v18,
                          (_DWORD)v29,
                          v19,
                          v21,
                          v17,
                          v20,
                          v14,
                          v13,
                          v12,
                          v11,
                          v10) )
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v18); /*0x891ef*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v18 + 8LL))(v18, 1); /*0x89201*/
    v18 = 0; /*0x89205*/
  }
  sub_3C310(v28); /*0x8920d*/
  a1[77] = (__int64)v18; /*0x89212*/
  *((_DWORD *)a1 + 173) = *((_DWORD *)v18 + 169); /*0x89221*/
  *((_DWORD *)a1 + 172) = *((_DWORD *)v18 + 168); /*0x89230*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, (const struct cocos2d::CCPoint *)(v18 + 680)); /*0x89244*/
  cocos2d::CCPoint::operator=((char *)a1 + 700, &v28); /*0x89256*/
  *((_DWORD *)a1 + 174) = *(_DWORD *)(a1[77] + 688); /*0x89269*/
  v22 = *a1; /*0x89270*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&Buf2, 0.0, 0.0, (float)*((int *)a1 + 173), (float)*((int *)a1 + 172)); /*0x892a0*/
  (*(void (__fastcall **)(__int64 *, __int64))(v22 + 992))(a1, v23); /*0x892ac*/
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 456))(a1, a1[77], 1); /*0x892c6*/
  v24 = *((float *)a1 + 169); /*0x892cc*/
  v25 = roundf((float)*((int *)a1 + 172)) * v24; /*0x892ea*/
  v26 = roundf((float)*((int *)a1 + 173) * *((float *)a1 + 168)); /*0x89303*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v36, v26, v25); /*0x89317*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[77] + 184LL))(a1[77], (__int64)a1 + 700); /*0x8932e*/
  return sub_3C310(v31); /*0x8933f*/
}

// [4/9] Address: 0x89600
// Method: TextArea::stopAllCharacterActions
void __fastcall TextArea_stopAllCharacterActions(__int64 a1)
{
  int *v2; // r14
  __int64 v3; // rbp
  __int64 i; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rax
  cocos2d::CCNode **v9; // rbx
  cocos2d::CCNode **j; // rdi

  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 616) + 480LL))(*(_QWORD *)(a1 + 616)) ) /*0x89613*/
  {
    v2 = *(int **)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 616) + 480LL))(*(_QWORD *)(a1 + 616)) + 56); /*0x8963c*/
    v3 = *v2; /*0x89640*/
    if ( v3 > 0 ) /*0x89646*/
    {
      for ( i = 0; i < v3; ++i ) /*0x8964d*/
      {
        v5 = *(_QWORD *)(*((_QWORD *)v2 + 2) + 8 * i); /*0x89658*/
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 480LL))(v5); /*0x8965f*/
        if ( v6 ) /*0x89668*/
        {
          v7 = *(unsigned int **)(v6 + 56); /*0x8966a*/
          v8 = *v7; /*0x8966e*/
          if ( (_DWORD)v8 ) /*0x89672*/
          {
            v9 = (cocos2d::CCNode **)*((_QWORD *)v7 + 2); /*0x89674*/
            for ( j = &v9[v8 - 1]; v9 <= j; ++v9 ) /*0x89683*/
            {
              if ( !*v9 ) /*0x89685*/
                break; /*0x8968b*/
              cocos2d::CCNode::stopAllActions(*v9); /*0x8968d*/
            }
          }
        }
      }
    }
  }
}

// [5/9] Address: 0x896c0
// Method: TextArea::finishFade
__int64 __fastcall TextArea_finishFade(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 712); /*0x896c0*/
  *(_BYTE *)(a1 + 680) = 1; /*0x896c7*/
  if ( v1 ) /*0x896d1*/
    return (**v1)(v1, a1); /*0x896dc*/
  return result; /*0x896df*/
}

// [6/9] Address: 0x896e0
// Method: TextArea::setOpacity
__int64 __fastcall TextArea_setOpacity(cocos2d::CCSprite *a1, unsigned __int8 a2)
{
  cocos2d::CCSprite::setOpacity(a1, a2); /*0x896f0*/
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 37) + 320LL) + 40LL))(
           *((_QWORD *)a1 + 37) + 320LL,
           a2);
}

// [7/9] Address: 0x89720
// Method: TextArea::colorAllCharactersTo
__int64 __fastcall TextArea_colorAllCharactersTo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int *v4; // r13
  __int64 v5; // r15
  __int64 i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  int *v9; // rsi
  __int64 v10; // rbp
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rcx

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 616) + 480LL))(*(_QWORD *)(a1 + 616)); /*0x89737*/
  v4 = *(int **)(result + 56); /*0x8973d*/
  v5 = *v4; /*0x89741*/
  if ( v5 > 0 ) /*0x89748*/
  {
    for ( i = 0; i < v5; ++i ) /*0x8975e*/
    {
      v7 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8 * i); /*0x89764*/
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 480LL))(v7); /*0x8976b*/
      v8 = 0; /*0x89771*/
      v9 = *(int **)(result + 56); /*0x89773*/
      v10 = *v9; /*0x89777*/
      if ( v10 > 0 ) /*0x8977d*/
      {
        do /*0x8979d*/
        {
          v11 = (__int64 (__fastcall ***)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)v9 + 2) + 8 * v8) + 320LL); /*0x8978b*/
          result = (**v11)(v11, a2); /*0x89795*/
          ++v8; /*0x89797*/
        }
        while ( v8 < v10 ); /*0x8979d*/
      }
    }
  }
  return result; /*0x897bb*/
}

// [8/9] Address: 0x897d0
// Method: TextArea::update
void __fastcall TextArea_update(__int64 a1, float a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdi
  __int64 i; // rbp
  cocos2d::CCArray *v6; // rdi
  float *v7; // rax
  float *v8; // rbx
  float v9; // xmm0_4
  float v10; // xmm6_4
  int v11; // eax
  float v12; // xmm7_4
  float v13; // xmm8_4
  int v14; // eax
  unsigned int *v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 *j; // rsi
  __int64 v19; // rbx
  char v20; // [rsp+A0h] [rbp+8h] BYREF
  char v21; // [rsp+B0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 720); /*0x897e5*/
  *(float *)(a1 + 728) = a2 + *(float *)(a1 + 728); /*0x897ef*/
  if ( v2 ) /*0x897fa*/
  {
    v4 = *(_QWORD *)(v2 + 56); /*0x89800*/
    if ( v4 ) /*0x89807*/
    {
      for ( i = *(_QWORD *)(v4 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x89815*/
      {
        v6 = *(cocos2d::CCArray **)(v4 + 264); /*0x89860*/
        v7 = (float *)cocos2d::CCArray::objectAtIndex(v6, 0); /*0x8986c*/
        v8 = v7; /*0x89872*/
        if ( v7 ) /*0x89878*/
        {
          v9 = *(float *)(a1 + 728); /*0x8987e*/
          if ( v9 > v7[157] ) /*0x8988e*/
          {
            v10 = v7[156]; /*0x8989c*/
            v7[157] = v9 + v7[155]; /*0x898a4*/
            v11 = rand(); /*0x898ac*/
            v12 = v8[156]; /*0x898b2*/
            v13 = (float)v11 / 32767.0; /*0x898c3*/
            v14 = rand(); /*0x898c8*/
            cocos2d::CCPoint::CCPoint( /*0x8990c*/
              (cocos2d::CCPoint *)&v20,
              (float)((float)((float)((float)((float)v14 / 32767.0) + (float)((float)v14 / 32767.0)) - 1.0) * v12) * 0.5,
              (float)((float)((float)(v13 + v13) - 1.0) * v10) * 0.5);
            if ( v6 ) /*0x89915*/
            {
              v15 = (unsigned int *)*((_QWORD *)v6 + 7); /*0x89917*/
              v16 = *v15; /*0x8991b*/
              if ( (_DWORD)v16 ) /*0x8991f*/
              {
                v17 = (__int64 *)*((_QWORD *)v15 + 2); /*0x89921*/
                for ( j = &v17[v16 - 1]; v17 <= j; ++v17 ) /*0x89930*/
                {
                  v19 = *v17; /*0x89932*/
                  if ( !*v17 ) /*0x89932*/
                    break; /*0x89938*/
                  cocos2d::CCPoint::operator+(v19 + 636, &v21, &v20); /*0x89951*/
                  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 184LL))(v19, &v21); /*0x89965*/
                }
              }
            }
          }
        }
        v4 = i; /*0x89974*/
        if ( !i ) /*0x8997a*/
          break; /*0x8997a*/
      }
    }
  }
}

// [9/9] Address: 0x899d0
// Method: TextArea::fadeInCharacters
__m128 __fastcall TextArea_fadeInCharacters(__int64 a1, float a2, float a3, char a4, int a5)
{
  cocos2d::CCObject *v6; // rcx
  __int128 v7; // xmm12
  char v8; // bl
  int v9; // ebp
  float v11; // xmm8_4
  cocos2d::CCObject *v13; // rax
  int v14; // esi
  int *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // ebx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  float v22; // xmm7_4
  unsigned int *v23; // r14
  __int64 v24; // rax
  cocos2d::CCNode **v25; // r14
  cocos2d::CCNode **v26; // r12
  cocos2d::CCNode *v27; // rdi
  float v28; // xmm6_4
  struct cocos2d::CCFadeIn *v29; // rax
  struct cocos2d::CCFadeIn *v30; // rbx
  struct cocos2d::CCFiniteTimeAction *v31; // rax
  struct cocos2d::CCAction *v32; // rax
  float v33; // xmm1_4
  float v34; // xmm0_4
  struct cocos2d::CCActionInterval *v35; // rax
  struct cocos2d::CCEaseInOut *v36; // rbx
  struct cocos2d::CCFiniteTimeAction *v37; // rax
  struct cocos2d::CCAction *v38; // rax
  int v39; // esi
  __int64 v40; // rax
  __int64 v41; // rcx
  struct cocos2d::CCObject *v42; // rbx
  struct cocos2d::CCFiniteTimeAction *v43; // rbx
  __int64 v44; // rax
  struct cocos2d::CCAction *v45; // rax
  int v47; // [rsp+20h] [rbp-E8h]
  int v48; // [rsp+24h] [rbp-E4h]
  __int64 v49; // [rsp+28h] [rbp-E0h]
  __int64 v50; // [rsp+30h] [rbp-D8h]
  int *v51; // [rsp+38h] [rbp-D0h]
  char v52; // [rsp+110h] [rbp+8h]

  v6 = *(cocos2d::CCObject **)(a1 + 720); /*0x899e5*/
  v7 = 0; /*0x899ec*/
  v8 = 0; /*0x899f4*/
  v9 = 0; /*0x899fa*/
  v11 = 0.0; /*0x89a11*/
  v52 = 0; /*0x89a2a*/
  if ( v6 ) /*0x89a34*/
  {
    cocos2d::CCObject::release(v6); /*0x89a36*/
    *(_QWORD *)(a1 + 720) = 0; /*0x89a3c*/
  }
  v13 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x89a43*/
  *(_QWORD *)(a1 + 720) = v13; /*0x89a4c*/
  cocos2d::CCObject::retain(v13); /*0x89a53*/
  v14 = 0; /*0x89a69*/
  v48 = 0; /*0x89a6b*/
  v15 = *(int **)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 616) + 480LL))(*(_QWORD *)(a1 + 616)) + 56); /*0x89a6f*/
  v51 = v15; /*0x89a73*/
  v16 = *v15; /*0x89a78*/
  v49 = v16; /*0x89a7b*/
  v17 = v16; /*0x89a80*/
  if ( (int)v16 > 0 ) /*0x89a85*/
  {
    v18 = v16 - 1; /*0x89a93*/
    v19 = 0; /*0x89a9e*/
    v50 = 0; /*0x89af0*/
    v47 = v16 - 1; /*0x89af5*/
    do /*0x89d51*/
    {
      v20 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 8 * v19); /*0x89b04*/
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 480LL))(v20); /*0x89b0b*/
      v22 = 0.0; /*0x89b11*/
      if ( v21 ) /*0x89b17*/
      {
        v23 = *(unsigned int **)(v21 + 56); /*0x89b1d*/
        v24 = *v23; /*0x89b21*/
        if ( (_DWORD)v24 ) /*0x89b26*/
        {
          v25 = (cocos2d::CCNode **)*((_QWORD *)v23 + 2); /*0x89b2c*/
          v26 = &v25[v24 - 1]; /*0x89b34*/
          if ( v25 <= v26 ) /*0x89b3b*/
          {
            do /*0x89ccb*/
            {
              v27 = *v25; /*0x89b41*/
              if ( !*v25 ) /*0x89b41*/
                break; /*0x89b47*/
              if ( !a4 ) /*0x89b50*/
              {
                cocos2d::CCNode::stopAllActions(*v25); /*0x89b55*/
                (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v27 + 40) + 40LL))((__int64)v27 + 320, 0); /*0x89b67*/
                v11 = v11 + *((float *)v27 + 154); /*0x89b6a*/
              }
              v22 = a2; /*0x89b7a*/
              if ( *((_BYTE *)v27 + 608) ) /*0x89b73*/
                v22 = *((float *)v27 + 153); /*0x89b80*/
              v28 = (float)((float)v9 * a3) + v11; /*0x89b97*/
              if ( a4 ) /*0x89b9f*/
                v29 = cocos2d::CCFadeOut::create(v22); /*0x89ba1*/
              else
                v29 = cocos2d::CCFadeIn::create(v22); /*0x89ba9*/
              v30 = v29; /*0x89bb2*/
              v31 = cocos2d::CCDelayTime::create(v28); /*0x89bb5*/
              v32 = cocos2d::CCSequence::create(v31, v30, 0); /*0x89bc4*/
              cocos2d::CCNode::runAction(v27, v32); /*0x89bd0*/
              if ( a5 == 1 ) /*0x89bde*/
              {
                v33 = 1.4; /*0x89be0*/
                if ( a4 ) /*0x89be7*/
                {
                  v34 = v22; /*0x89be9*/
                }
                else
                {
                  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v27 + 160LL))(v27); /*0x89bf4*/
                  v33 = 1.0; /*0x89bfd*/
                  v34 = v22 * 0.5; /*0x89c01*/
                }
                v35 = cocos2d::CCScaleTo::create(v34, v33); /*0x89c06*/
                v36 = cocos2d::CCEaseInOut::create(v35, 2.0); /*0x89c1c*/
                v37 = cocos2d::CCDelayTime::create(v28); /*0x89c1f*/
                v38 = cocos2d::CCSequence::create(v37, v36, 0); /*0x89c2e*/
                cocos2d::CCNode::runAction(v27, v38); /*0x89c3a*/
              }
              v39 = v9 + 1; /*0x89c47*/
              if ( *((_BYTE *)v27 + 608) ) /*0x89c40*/
                v39 = v9; /*0x89c4a*/
              if ( *((int *)v27 + 158) > 0 ) /*0x89c54*/
              {
                v40 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v27 + 200LL))(v27); /*0x89c5c*/
                cocos2d::CCPoint::operator=((char *)v27 + 636, v40); /*0x89c6c*/
                v42 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 720), *((int *)v27 + 158)); /*0x89c86*/
                if ( !v42 ) /*0x89c8c*/
                {
                  v42 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v41); /*0x89ca5*/
                  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 720), v42, *((int *)v27 + 158)); /*0x89ca8*/
                }
                cocos2d::CCArray::addObject(v42, v27); /*0x89cb4*/
                v52 = 1; /*0x89cba*/
              }
              ++v25; /*0x89cc2*/
              v9 = v39; /*0x89cc6*/
            }
            while ( v25 <= v26 ); /*0x89ccb*/
            v19 = v50; /*0x89cd1*/
            v14 = v48; /*0x89cd6*/
            v18 = v47; /*0x89cda*/
          }
        }
        v17 = v49; /*0x89cde*/
      }
      if ( v14 == v18 ) /*0x89ce5*/
      {
        v7 = COERCE_UNSIGNED_INT((float)v9); /*0x89cec*/
        *(float *)&v7 = (float)((float)(*(float *)&v7 * a3) + v22) + v11; /*0x89cfa*/
        v43 = cocos2d::CCDelayTime::create(*(float *)&v7); /*0x89d13*/
        v44 = cocos2d::CCCallFunc::create(a1, TextArea_finishFade); /*0x89d16*/
        v45 = cocos2d::CCSequence::create(v43, v44, 0); /*0x89d25*/
        cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v45); /*0x89d31*/
        v18 = v47; /*0x89d37*/
      }
      v15 = v51; /*0x89d3b*/
      ++v14; /*0x89d40*/
      ++v19; /*0x89d42*/
      v48 = v14; /*0x89d45*/
      v50 = v19; /*0x89d49*/
    }
    while ( v19 < v17 ); /*0x89d51*/
    v8 = v52; /*0x89d92*/
  }
  cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)a1); /*0x89d9d*/
  if ( v8 ) /*0x89deb*/
    cocos2d::CCNode::scheduleUpdate((cocos2d::CCNode *)a1); /*0x89ded*/
  else
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)a1); /*0x89e07*/
  return (__m128)v7; /*0x89df7*/
}
