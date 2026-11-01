#include <Geode/binding/CCPartAnimSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x48670
// Method: CCPartAnimSprite::initWithAnimDesc
// Hidden C++ exception states: #wind=12
bool __fastcall CCPartAnimSprite_initWithAnimDesc(__int64 a1, __int64 a2, struct cocos2d::CCTexture2D *a3, char a4)
{
  char v4; // r14
  bool result; // al
  __int64 v8; // rcx
  cocos2d::CCObject *v9; // rax
  cocos2d::CCObject *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  cocos2d::CCDictionary *v13; // rbx
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r15
  void *v18; // rcx
  cocos2d::CCString *v19; // rax
  const char *CString; // rax
  __int64 v21; // r8
  void *v22; // rcx
  cocos2d::CCString *v23; // rax
  unsigned int v24; // r12d
  int v25; // ebx
  void **v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r8
  void **v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  void **v35; // r14
  size_t v36; // rsi
  unsigned __int64 v37; // rax
  size_t v38; // rbx
  void **v39; // rdx
  __int64 v40; // rbx
  cocos2d::CCString *v41; // rbx
  void *v42; // rcx
  const char *v43; // rax
  __int64 v44; // r8
  void *v45; // rcx
  unsigned int v47; // [rsp+38h] [rbp-C8h]
  void *v48[2]; // [rsp+40h] [rbp-C0h] BYREF
  size_t v49; // [rsp+50h] [rbp-B0h]
  __int64 v50; // [rsp+58h] [rbp-A8h]
  void *v51[2]; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h]
  unsigned __int64 v53; // [rsp+78h] [rbp-88h]
  struct cocos2d::CCTexture2D *v54; // [rsp+80h] [rbp-80h]
  cocos2d::CCDictionary *v55; // [rsp+88h] [rbp-78h]
  void *v56; // [rsp+90h] [rbp-70h]
  void *v57; // [rsp+98h] [rbp-68h]
  __int128 Buf2; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v60; // [rsp+B8h] [rbp-48h]
  __int128 v61; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v63; // [rsp+D8h] [rbp-28h]
  __int128 v64; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v66; // [rsp+F8h] [rbp-8h]
  void *Src[2]; // [rsp+100h] [rbp+0h] BYREF
  size_t v68; // [rsp+110h] [rbp+10h]
  unsigned __int64 v69; // [rsp+118h] [rbp+18h]
  _WORD v70[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  _BYTE v73[528]; // [rsp+140h] [rbp+40h] BYREF

  v4 = a4; /*0x486a8*/
  v54 = a3; /*0x486b4*/
  result = cocos2d::CCSprite::initWithTexture((cocos2d::CCSprite *)a1, a3, (const struct cocos2d::CCRect *)&unk_903AA8); /*0x486c8*/
  if ( result ) /*0x486d0*/
  {
    v9 = (cocos2d::CCObject *)cocos2d::CCArray::create(v8); /*0x486d6*/
    *(_QWORD *)(a1 + 632) = v9; /*0x486dc*/
    cocos2d::CCObject::retain(v9); /*0x486e6*/
    v10 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x486ec*/
    *(_QWORD *)(a1 + 600) = v10; /*0x486f2*/
    cocos2d::CCObject::retain(v10); /*0x486fc*/
    v11 = sub_43FE0(); /*0x48702*/
    v12 = CCAnimateFrameCache_addSpriteFramesWithFile(v11, a2); /*0x4870d*/
    *(_BYTE *)(a1 + 616) = 1; /*0x48712*/
    HIBYTE(v70[6]) = 0; /*0x4871c*/
    v70[7] = 0; /*0x4871c*/
    v71 = 12; /*0x4871f*/
    v72 = 15; /*0x48727*/
    strcpy((char *)v70, "usedTextures"); /*0x48737*/
    v13 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::objectForKey(v12, v70); /*0x48756*/
    v55 = v13; /*0x48759*/
    sub_3C310(v70); /*0x48761*/
    v14 = 0; /*0x48766*/
    v47 = 0; /*0x48768*/
    if ( cocos2d::CCDictionary::count(v13) ) /*0x4876f*/
    {
      *(_QWORD *)&Buf2 = "texture_"; /*0x48784*/
      *((_QWORD *)&Buf2 + 1) = 0; /*0x48788*/
      do /*0x48794*/
      {
        fmt::BasicWriter<char>::BasicWriter<char>(v73); /*0x48794*/
        Buf2 = (unsigned __int64)"texture_"; /*0x4879b*/
        fmt::BasicWriter<char>::operator<<(v73, &Buf2); /*0x487a8*/
        fmt::BasicWriter<char>::operator<<(v73, v14); /*0x487b4*/
        v15 = fmt::BasicWriter<char>::c_str(v73); /*0x487be*/
        v61 = 0; /*0x487c7*/
        v62 = 0; /*0x487cb*/
        v63 = 0; /*0x487cf*/
        v16 = -1; /*0x487d3*/
        do /*0x487e3*/
          ++v16; /*0x487e0*/
        while ( *(_BYTE *)(v15 + v16) ); /*0x487e3*/
        sub_3C230(&v61); /*0x487f1*/
        v17 = cocos2d::CCDictionary::objectForKey(v13, &v61); /*0x48804*/
        if ( v63 > 0xF ) /*0x4880f*/
        {
          v18 = (void *)v61; /*0x48814*/
          if ( v63 + 1 >= 0x1000 ) /*0x48822*/
          {
            v18 = *(void **)(v61 - 8); /*0x48828*/
            if ( (unsigned __int64)(v61 - (_QWORD)v18 - 8) > 0x1F ) /*0x48837*/
              invoke_watson(0, 0, 0, 0, 0); /*0x48dc1*/
          }
          j_j_free(v18); /*0x4883d*/
        }
        v62 = 0; /*0x48842*/
        v63 = 15; /*0x48846*/
        LOBYTE(v61) = 0; /*0x4884e*/
        v65 = 7; /*0x48859*/
        v66 = 15; /*0x48861*/
        v64 = 0x65727574786574uLL; /*0x48870*/
        v19 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v17, &v64); /*0x48893*/
        CString = cocos2d::CCString::getCString(v19); /*0x4889c*/
        *(_OWORD *)Src = 0; /*0x488a5*/
        v68 = 0; /*0x488a9*/
        v69 = 0; /*0x488ad*/
        v21 = -1; /*0x488b1*/
        do /*0x488c3*/
          ++v21; /*0x488c0*/
        while ( CString[v21] ); /*0x488c3*/
        sub_3C230(Src); /*0x488d1*/
        if ( v66 > 0xF ) /*0x488df*/
        {
          v22 = (void *)v64; /*0x488e4*/
          if ( v66 + 1 >= 0x1000 ) /*0x488f2*/
          {
            v22 = *(void **)(v64 - 8); /*0x488f8*/
            if ( (unsigned __int64)(v64 - (_QWORD)v22 - 8) > 0x1F ) /*0x48907*/
              invoke_watson(0, 0, 0, 0, 0); /*0x48dd7*/
          }
          j_j_free(v22); /*0x4890d*/
        }
        v65 = 0; /*0x48912*/
        v66 = 15; /*0x48916*/
        LOBYTE(v64) = 0; /*0x4891e*/
        Buf2 = 0; /*0x48925*/
        v59 = 3; /*0x48929*/
        v60 = 15; /*0x48931*/
        LODWORD(Buf2) = 6775156; /*0x4893f*/
        v23 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v17, &Buf2); /*0x48958*/
        v24 = cocos2d::CCString::intValue(v23); /*0x48967*/
        sub_3C310(&Buf2); /*0x4896e*/
        Buf2 = 0; /*0x48976*/
        v59 = 1; /*0x4897a*/
        v60 = 15; /*0x48982*/
        LOWORD(Buf2) = (unsigned __int8)a0[0]; /*0x48991*/
        v25 = sub_3C160(Src, &Buf2); /*0x489a5*/
        sub_3C310(&Buf2); /*0x489ab*/
        if ( v4 || !v25 ) /*0x489bb*/
        {
          v57 = operator new(0x2A0u); /*0x48aa7*/
          v31 = CCSpritePart_CCSpritePart(v57); /*0x48aae*/
          v28 = v31; /*0x48ab3*/
          if ( v31 ) /*0x48ab9*/
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, struct cocos2d::CCTexture2D *))(*(_QWORD *)v31 + 904LL))( /*0x48ac5*/
                   v31,
                   v54) )
            {
              cocos2d::CCObject::autorelease((cocos2d::CCObject *)v28); /*0x48ad2*/
LABEL_36:
              if ( v25 && v4 ) /*0x48af2*/
              {
                *(_OWORD *)v48 = 0; /*0x48afb*/
                v49 = 0; /*0x48b00*/
                v50 = 0; /*0x48b09*/
                v35 = Src; /*0x48b12*/
                if ( v69 > 0xF ) /*0x48b1b*/
                  v35 = (void **)Src[0]; /*0x48b1b*/
                v36 = v68; /*0x48b20*/
                if ( v68 > 0x7FFFFFFFFFFFFFFFLL ) /*0x48b31*/
                  sub_8D90(v33, v32, v34); /*0x48e42*/
                if ( v68 > 0xF ) /*0x48b3b*/
                {
                  v38 = v68 | 0xF; /*0x48b5a*/
                  if ( (v68 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x48b61*/
                  {
                    if ( v38 < 0x16 ) /*0x48b71*/
                      v38 = 22; /*0x48b71*/
                  }
                  else
                  {
                    v38 = 0x7FFFFFFFFFFFFFFFLL; /*0x48b63*/
                  }
                  v48[0] = (void *)sub_3C460(v38 + 1); /*0x48b7e*/
                  v49 = v36; /*0x48b83*/
                  v50 = v38; /*0x48b88*/
                  memcpy(v48[0], v35, v36 + 1); /*0x48b97*/
                  v37 = v50; /*0x48b9c*/
                  v36 = v49; /*0x48ba1*/
                }
                else
                {
                  v49 = v68; /*0x48b3d*/
                  v37 = 15; /*0x48b42*/
                  v50 = 15; /*0x48b47*/
                  *(_OWORD *)v48 = *(_OWORD *)v35; /*0x48b50*/
                }
                *(_QWORD *)&Buf2 = v48; /*0x48bab*/
                if ( (void **)(v28 + 632) != v48 ) /*0x48bbe*/
                {
                  v39 = v48; /*0x48bc0*/
                  if ( v37 > 0xF ) /*0x48bc9*/
                    v39 = (void **)v48[0]; /*0x48bc9*/
                  sub_3F5A0((void *)(v28 + 632), v39, v36); /*0x48bd2*/
                }
                sub_3C310(v48); /*0x48bdd*/
                v14 = v47; /*0x48be2*/
                v4 = a4; /*0x48be6*/
              }
              goto LABEL_53; /*0x48be6*/
            }
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 8LL))(v28, 1); /*0x48ae2*/
          }
          v28 = 0; /*0x48ae5*/
          goto LABEL_36; /*0x48ae5*/
        }
        v26 = Src; /*0x489c1*/
        if ( v69 > 0xF ) /*0x489ca*/
          v26 = (void **)Src[0]; /*0x489ca*/
        v56 = operator new(0x2A0u); /*0x489d9*/
        v27 = CCSpritePart_CCSpritePart(v56); /*0x489e0*/
        v28 = v27; /*0x489e5*/
        if ( v27 ) /*0x489eb*/
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v27 + 920LL))(v27, v26) ) /*0x489fa*/
          {
            *(_OWORD *)v51 = 0; /*0x48a0b*/
            Size = 0; /*0x48a12*/
            v53 = 0; /*0x48a17*/
            v29 = -1; /*0x48a1c*/
            do /*0x48a26*/
              ++v29; /*0x48a23*/
            while ( *((_BYTE *)v26 + v29) ); /*0x48a26*/
            sub_3C230(v51); /*0x48a34*/
            if ( (void **)(v28 + 632) != v51 ) /*0x48a52*/
            {
              v30 = v51; /*0x48a54*/
              if ( v53 > 0xF ) /*0x48a5f*/
                v30 = (void **)v51[0]; /*0x48a5f*/
              sub_3F5A0((void *)(v28 + 632), v30, Size); /*0x48a6a*/
            }
            sub_3C310(v51); /*0x48a75*/
            cocos2d::CCObject::autorelease((cocos2d::CCObject *)v28); /*0x48a7d*/
            goto LABEL_53; /*0x48a83*/
          }
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 8LL))(v28, 1); /*0x48a93*/
        }
        v28 = 0; /*0x48a96*/
LABEL_53:
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 64LL))(v28, v24); /*0x48bec*/
        v59 = 8; /*0x48c00*/
        v60 = 15; /*0x48c08*/
        Buf2 = *(unsigned __int64 *)"customID"; /*0x48c17*/
        v40 = cocos2d::CCDictionary::objectForKey(v17, &Buf2); /*0x48c2c*/
        sub_3C310(&Buf2); /*0x48c33*/
        if ( v40 ) /*0x48c3b*/
        {
          v59 = 8; /*0x48c49*/
          v60 = 15; /*0x48c51*/
          Buf2 = *(unsigned __int64 *)"customID"; /*0x48c60*/
          v41 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(v17, &Buf2); /*0x48c75*/
          if ( v60 > 0xF ) /*0x48c80*/
          {
            v42 = (void *)Buf2; /*0x48c85*/
            if ( v60 + 1 >= 0x1000 ) /*0x48c93*/
            {
              v42 = *(void **)(Buf2 - 8); /*0x48c99*/
              if ( (unsigned __int64)(Buf2 - (_QWORD)v42 - 8) > 0x1F ) /*0x48ca8*/
                invoke_watson(0, 0, 0, 0, 0); /*0x48df1*/
            }
            j_j_free(v42); /*0x48cae*/
          }
          v59 = 0; /*0x48cb6*/
          v60 = 15; /*0x48cba*/
          LOBYTE(Buf2) = 0; /*0x48cc2*/
          v43 = cocos2d::CCString::getCString(v41); /*0x48cc9*/
          v61 = 0; /*0x48cd2*/
          v62 = 0; /*0x48cd6*/
          v63 = 0; /*0x48cda*/
          v44 = -1; /*0x48cde*/
          do /*0x48ce8*/
            ++v44; /*0x48ce5*/
          while ( v43[v44] ); /*0x48ce8*/
          sub_3C230(&v61); /*0x48cf5*/
          cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 600), v28, &v61); /*0x48d09*/
          if ( v63 > 0xF ) /*0x48d18*/
          {
            v45 = (void *)v61; /*0x48d1d*/
            if ( v63 + 1 >= 0x1000 ) /*0x48d2b*/
            {
              v45 = *(void **)(v61 - 8); /*0x48d31*/
              if ( (unsigned __int64)(v61 - (_QWORD)v45 - 8) > 0x1F ) /*0x48d40*/
                invoke_watson(0, 0, 0, 0, 0); /*0x48e07*/
            }
            j_j_free(v45); /*0x48d46*/
          }
        }
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 632), (struct cocos2d::CCObject *)v28); /*0x48d55*/
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 448LL))(a1, v28, 0, v24); /*0x48d6b*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 336LL))(v28, 0); /*0x48d79*/
        sub_3C310(Src); /*0x48d84*/
        fmt::BasicWriter<char>::~BasicWriter<char>(v73); /*0x48d8e*/
        v47 = ++v14; /*0x48d96*/
        v13 = v55; /*0x48d9a*/
      }
      while ( v14 < cocos2d::CCDictionary::count(v55) ); /*0x48794*/
    }
    return 1; /*0x48e0e*/
  }
  return result; /*0x48e10*/
}

// [2/11] Address: 0x48e50
// Method: CCPartAnimSprite::setDisplayFrame
void __fastcall CCPartAnimSprite_setDisplayFrame(__int64 a1, cocos2d::CCObject *a2)
{
  cocos2d::CCObject *v4; // rcx
  const char *CString; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int *v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 *i; // rdx
  __int64 v13; // rax
  int *v14; // r15
  __int64 v15; // r14
  __int64 j; // rbp
  __int64 v17; // rdi
  struct cocos2d::CCObject *v18; // rbx
  __int64 FrameName; // rax
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int *v24; // rbx
  __int64 v25; // rax
  _BYTE **v26; // rbx
  _BYTE **k; // rdi
  _BYTE *v28; // rcx
  _BYTE v29[32]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 ) /*0x48e53*/
  {
    v4 = *(cocos2d::CCObject **)(a1 + 608); /*0x48e65*/
    if ( a2 != v4 ) /*0x48e6f*/
    {
      if ( v4 ) /*0x48e78*/
        cocos2d::CCObject::release(v4); /*0x48e7a*/
      *(_QWORD *)(a1 + 608) = a2; /*0x48e83*/
      cocos2d::CCObject::retain(a2); /*0x48e8a*/
      CString = cocos2d::CCString::getCString(a2); /*0x48e99*/
      v6 = sub_43FE0(); /*0x48e9c*/
      v7 = CCAnimateFrameCache_spriteFrameByName(v6, CString); /*0x48eac*/
      if ( v7 ) /*0x48eb2*/
      {
        v8 = *(_QWORD *)(a1 + 632); /*0x48eb8*/
        if ( v8 ) /*0x48ecf*/
        {
          v9 = *(unsigned int **)(v8 + 56); /*0x48ed1*/
          v10 = *v9; /*0x48ed5*/
          if ( (_DWORD)v10 ) /*0x48ed9*/
          {
            v11 = (__int64 *)*((_QWORD *)v9 + 2); /*0x48edb*/
            for ( i = &v11[v10 - 1]; v11 <= i; *(_BYTE *)(v13 + 624) = 0 ) /*0x48ee9*/
            {
              v13 = *v11; /*0x48ef0*/
              if ( !*v11 ) /*0x48ef0*/
                break; /*0x48ef6*/
              ++v11; /*0x48ef8*/
            }
          }
        }
        v14 = *(int **)(v7 + 56); /*0x48f08*/
        v15 = *v14; /*0x48f14*/
        if ( v15 > 0 ) /*0x48f1a*/
        {
          for ( j = 0; j < v15; ++j ) /*0x48f28*/
          {
            v17 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 8 * j); /*0x48f4b*/
            v18 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 632), *(_DWORD *)(v17 + 88)); /*0x48f5b*/
            cocos2d::CCNode::stopAllActions(v18); /*0x48f5e*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v18 + 184LL))(v18, v17 + 56); /*0x48f75*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 120LL))(v18); /*0x48f96*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 136LL))(v18); /*0x48fb9*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 352LL))(v18); /*0x48fc6*/
            if ( *(_BYTE *)(v17 + 92) ) /*0x48fcc*/
            {
              (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v18 + 1008LL))( /*0x48fdc*/
                v18,
                *(_QWORD *)(v17 + 96));
              FrameName = cocos2d::CCSpriteFrame::getFrameName(*(_QWORD *)(v17 + 96), v29); /*0x48feb*/
              CCSpritePart_frameChanged(v18, FrameName); /*0x48ff7*/
            }
            v20 = *(_DWORD *)(v17 + 84); /*0x49002*/
            if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v18 + 96LL))(v18) != v20 ) /*0x4900a*/
              (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 584LL))( /*0x49018*/
                a1,
                v18,
                v20);
            v22 = *(_QWORD *)v18; /*0x4901e*/
            LOBYTE(v21) = 1; /*0x49021*/
            *((_BYTE *)v18 + 624) = 1; /*0x49026*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v22 + 336))(v18, v21); /*0x4902d*/
          }
        }
        v23 = *(_QWORD *)(a1 + 632); /*0x49051*/
        if ( v23 ) /*0x49068*/
        {
          v24 = *(unsigned int **)(v23 + 56); /*0x4906a*/
          v25 = *v24; /*0x4906e*/
          if ( (_DWORD)v25 ) /*0x49072*/
          {
            v26 = (_BYTE **)*((_QWORD *)v24 + 2); /*0x49074*/
            for ( k = &v26[v25 - 1]; v26 <= k; ++v26 ) /*0x49083*/
            {
              v28 = *v26; /*0x49085*/
              if ( !*v26 ) /*0x49085*/
                break; /*0x4908b*/
              if ( !v28[624] ) /*0x4908d*/
                (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v28 + 336LL))(v28, 0); /*0x4909b*/
            }
          }
        }
      }
      *(_BYTE *)(a1 + 616) = 1; /*0x490b2*/
    }
  }
}

// [3/11] Address: 0x490c0
// Method: CCPartAnimSprite::isFrameDisplayed
__int64 __fastcall CCPartAnimSprite_isFrameDisplayed(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, *(_QWORD *)(a1 + 608));
}

// [4/11] Address: 0x490e0
// Method: CCPartAnimSprite::displayFrame
__int64 __fastcall CCPartAnimSprite_displayFrame(__int64 a1)
{
  return *(_QWORD *)(a1 + 608); /*0x490e7*/
}

// [5/11] Address: 0x490f0
// Method: CCPartAnimSprite::tweenToFrame
// Hidden C++ exception states: #wind=1
void __fastcall CCPartAnimSprite_tweenToFrame(__int64 a1, cocos2d::CCString *a2, float a3)
{
  const char *CString; // rax
  __int64 v5; // r8
  void **v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 i; // rdx
  int *v15; // rax
  __int64 v16; // r13
  __int64 j; // r12
  __int64 v18; // rbp
  struct cocos2d::CCObject *v19; // r14
  float v20; // xmm7_4
  float v21; // xmm6_4
  struct cocos2d::CCAction *v22; // rsi
  struct cocos2d::CCAction *v23; // rdi
  struct cocos2d::CCAction *v24; // rbx
  __int64 FrameName; // rax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int *v29; // rbx
  __int64 v30; // rax
  _BYTE **v31; // rbx
  _BYTE **k; // rdi
  _BYTE *v33; // rcx
  void *v34; // rcx
  int *v35; // [rsp+30h] [rbp-E8h]
  _BYTE v36[32]; // [rsp+40h] [rbp-D8h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+70h] [rbp-A8h]

  if ( *(_QWORD *)(a1 + 608) ) /*0x4913c*/
  {
    CString = cocos2d::CCString::getCString(a2); /*0x49157*/
    *(_OWORD *)Block = 0; /*0x49160*/
    v38 = 0; /*0x49168*/
    v5 = -1; /*0x4916e*/
    do /*0x49178*/
      ++v5; /*0x49175*/
    while ( CString[v5] ); /*0x49178*/
    sub_3C230(Block); /*0x49187*/
    v6 = Block; /*0x4918d*/
    if ( *((_QWORD *)&v38 + 1) > 0xFu ) /*0x49198*/
      v6 = (void **)Block[0]; /*0x49198*/
    v7 = sub_43FE0(); /*0x4919e*/
    v8 = CCAnimateFrameCache_spriteFrameByName(v7, v6); /*0x491a9*/
    v9 = v8; /*0x491ae*/
    if ( v8 ) /*0x491b4*/
    {
      v10 = *(_QWORD *)(a1 + 632); /*0x491ba*/
      if ( v10 ) /*0x491c4*/
      {
        v11 = *(unsigned int **)(v10 + 56); /*0x491c6*/
        v12 = *v11; /*0x491ca*/
        if ( (_DWORD)v12 ) /*0x491ce*/
        {
          v13 = *((_QWORD *)v11 + 2); /*0x491d0*/
          for ( i = v13 + 8 * (v12 - 1); v13 <= i; v13 += 8LL ) /*0x491de*/
          {
            if ( !*(_QWORD *)v13 ) /*0x491e0*/
              break; /*0x491e6*/
            *(_BYTE *)(*(_QWORD *)v13 + 624LL) = 0; /*0x491e8*/
          }
        }
      }
      v15 = *(int **)(v8 + 56); /*0x491f8*/
      v35 = v15; /*0x491fc*/
      v16 = *v15; /*0x49201*/
      if ( v16 > 0 ) /*0x49207*/
      {
        for ( j = 0; j < v16; ++j ) /*0x4920d*/
        {
          v18 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 8 * j); /*0x49224*/
          v19 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 632), *(_DWORD *)(v18 + 88)); /*0x49238*/
          cocos2d::CCNode::stopAllActions(v19); /*0x4923e*/
          v20 = *(float *)(v18 + 64); /*0x49244*/
          if ( *(float *)(v18 + 72) != 0.0 ) /*0x49254*/
            v20 = -v20; /*0x49256*/
          v21 = *(float *)(v18 + 68); /*0x4925a*/
          if ( *(float *)(v18 + 76) != 0.0 ) /*0x4926a*/
            v21 = -v21; /*0x4926c*/
          v22 = cocos2d::CCMoveTo::create(a3, (const struct cocos2d::CCPoint *)(v18 + 56)); /*0x4927e*/
          v23 = cocos2d::CCScaleTo::create(a3, v20, v21); /*0x49291*/
          v24 = cocos2d::CCRotateTo::create(a3, *(float *)(v18 + 80)); /*0x492a3*/
          cocos2d::CCNode::runAction(v19, v22); /*0x492ac*/
          cocos2d::CCNode::runAction(v19, v23); /*0x492b8*/
          cocos2d::CCNode::runAction(v19, v24); /*0x492c4*/
          if ( *(_BYTE *)(v18 + 92) ) /*0x492ca*/
          {
            (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v19 + 1008LL))( /*0x492da*/
              v19,
              *(_QWORD *)(v18 + 96));
            FrameName = cocos2d::CCSpriteFrame::getFrameName(*(_QWORD *)(v18 + 96), v36); /*0x492e9*/
            CCSpritePart_frameChanged(v19, FrameName); /*0x492f5*/
          }
          v26 = *(_DWORD *)(v18 + 84); /*0x492fa*/
          if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v19 + 96LL))(v19) != v26 ) /*0x49308*/
            (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 584LL))(a1, v19, v26); /*0x49316*/
          *((_BYTE *)v19 + 624) = 1; /*0x4931c*/
          LOBYTE(v27) = 1; /*0x49327*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v19 + 336LL))(v19, v27); /*0x4932c*/
          v15 = v35; /*0x49338*/
        }
      }
      v28 = *(_QWORD *)(a1 + 632); /*0x49343*/
      if ( v28 ) /*0x4934d*/
      {
        v29 = *(unsigned int **)(v28 + 56); /*0x4934f*/
        v30 = *v29; /*0x49353*/
        if ( (_DWORD)v30 ) /*0x49357*/
        {
          v31 = (_BYTE **)*((_QWORD *)v29 + 2); /*0x49359*/
          for ( k = &v31[v30 - 1]; v31 <= k; ++v31 ) /*0x49368*/
          {
            v33 = *v31; /*0x49370*/
            if ( !*v31 ) /*0x49370*/
              break; /*0x49376*/
            if ( !v33[624] ) /*0x49378*/
              (*(void (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)v33 + 336LL))(v33, 0, v9); /*0x49386*/
          }
        }
      }
    }
    *(_BYTE *)(a1 + 616) = 1; /*0x49395*/
    if ( *((_QWORD *)&v38 + 1) > 0xFu ) /*0x493a6*/
    {
      v34 = Block[0]; /*0x493ab*/
      if ( (unsigned __int64)(*((_QWORD *)&v38 + 1) + 1LL) >= 0x1000 ) /*0x493ba*/
      {
        v34 = (void *)*((_QWORD *)Block[0] - 1); /*0x493c0*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v34 - 8) > 0x1F ) /*0x493cf*/
          invoke_watson(0, 0, 0, 0, 0); /*0x493e4*/
      }
      j_j_free(v34); /*0x493eb*/
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1008LL))(a1); /*0x49149*/
  }
}

// [6/11] Address: 0x49440
// Method: CCPartAnimSprite::setScale
void __fastcall CCPartAnimSprite_setScale(cocos2d::CCSprite *a1, float a2)
{
  cocos2d::CCSprite::setScale(a1, a2); /*0x49449*/
  *((_BYTE *)a1 + 616) = 1; /*0x4944f*/
}

// [7/11] Address: 0x49460
// Method: CCPartAnimSprite::setScaleX
void __fastcall CCPartAnimSprite_setScaleX(cocos2d::CCSprite *a1, float a2)
{
  cocos2d::CCSprite::setScaleX(a1, a2); /*0x49469*/
  *((_BYTE *)a1 + 616) = 1; /*0x4946f*/
}

// [8/11] Address: 0x49480
// Method: CCPartAnimSprite::setScaleY
void __fastcall CCPartAnimSprite_setScaleY(cocos2d::CCSprite *a1, float a2)
{
  cocos2d::CCSprite::setScaleY(a1, a2); /*0x49489*/
  *((_BYTE *)a1 + 616) = 1; /*0x4948f*/
}

// [9/11] Address: 0x494a0
// Method: CCPartAnimSprite::setBlendFunc
__int64 __fastcall CCPartAnimSprite_setBlendFunc(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 i; // rsi

  v2 = a1 - 344; /*0x494ab*/
  *(_QWORD *)(a1 + 60) = a2; /*0x494b2*/
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 344) + 480LL))(a1 - 344); /*0x494bf*/
  if ( result ) /*0x494c8*/
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 480LL))(v2); /*0x494d4*/
    if ( **(_DWORD **)(result + 56) ) /*0x494de*/
    {
      v5 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 480LL))(v2) + 56) + 16LL); /*0x49503*/
      v6 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 480LL))(v2) + 56) + 16LL); /*0x49517*/
      result = **(unsigned int **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 480LL))(v2) + 56); /*0x49525*/
      for ( i = v6 + 8 * result - 8; v5 <= i; v5 += 8LL ) /*0x49532*/
      {
        if ( !*(_QWORD *)v5 ) /*0x49534*/
          break; /*0x4953a*/
        result = (**(__int64 (__fastcall ***)(__int64, __int64))(*(_QWORD *)v5 + 344LL))(*(_QWORD *)v5 + 344LL, a2); /*0x49549*/
      }
    }
  }
  return result; /*0x4955e*/
}

// [10/11] Address: 0x49570
// Method: CCPartAnimSprite::setColor
__int64 __fastcall CCPartAnimSprite_setColor(__int64 a1, const struct cocos2d::_ccColor3B *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 i; // rdi

  cocos2d::CCSprite::setColor((cocos2d::CCSprite *)(a1 + 320), a2); /*0x49587*/
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 480LL))(a1); /*0x49593*/
  if ( result ) /*0x4959c*/
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 480LL))(a1); /*0x495a8*/
    if ( **(_DWORD **)(result + 56) ) /*0x495b2*/
    {
      v5 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 480LL))(a1) + 56) + 16LL); /*0x495d7*/
      v6 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 480LL))(a1) + 56) + 16LL); /*0x495e8*/
      result = **(unsigned int **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 480LL))(a1) + 56); /*0x495f9*/
      for ( i = v6 + 8 * result - 8; v5 <= i; v5 += 8LL ) /*0x49606*/
      {
        if ( !*(_QWORD *)v5 ) /*0x49608*/
          break; /*0x4960e*/
        result = (**(__int64 (__fastcall ***)(__int64, const struct cocos2d::_ccColor3B *))(*(_QWORD *)v5 + 320LL))( /*0x4961d*/
                   *(_QWORD *)v5 + 320LL,
                   a2);
      }
    }
  }
  return result; /*0x49632*/
}

// [11/11] Address: 0x49640
// Method: CCPartAnimSprite::setOpacity
__int64 __fastcall CCPartAnimSprite_setOpacity(cocos2d::CCSprite *a1, unsigned __int8 a2)
{
  char *v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 i; // rdi

  cocos2d::CCSprite::setOpacity(a1, a2); /*0x49655*/
  v4 = (char *)a1 - 320; /*0x4965b*/
  result = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 480LL))(v4); /*0x49668*/
  if ( result ) /*0x49671*/
  {
    result = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 480LL))(v4); /*0x4967d*/
    if ( **(_DWORD **)(result + 56) ) /*0x49687*/
    {
      v6 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 480LL))(v4) + 56) + 16LL); /*0x496a7*/
      v7 = *(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 480LL))(v4) + 56) + 16LL); /*0x496bb*/
      result = **(unsigned int **)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 480LL))(v4) + 56); /*0x496c9*/
      for ( i = v7 + 8 * result - 8; v6 <= i; v6 += 8LL ) /*0x496d6*/
      {
        if ( !*(_QWORD *)v6 ) /*0x496d8*/
          break; /*0x496de*/
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v6 + 320LL) + 40LL))( /*0x496ee*/
                   *(_QWORD *)v6 + 320LL,
                   a2);
      }
    }
  }
  return result; /*0x496ff*/
}
