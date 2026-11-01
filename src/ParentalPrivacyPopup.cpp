#include <Geode/binding/ParentalPrivacyPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x4c6a10
// Method: ParentalPrivacyPopup::~ParentalPrivacyPopup
// Hidden C++ exception states: #wind=1
char *__fastcall ParentalPrivacyPopup__dtor_ParentalPrivacyPopup(char *Block, char a2)
{
  char *v4; // rsi
  __int64 v5; // rax
  void *v6; // rax

  *(_QWORD *)Block = &ParentalPrivacyPopup::`vftable'; /*0x4c6a30*/
  *((_QWORD *)Block + 40) = &ParentalPrivacyPopup::`vftable'; /*0x4c6a3a*/
  *((_QWORD *)Block + 41) = &ParentalPrivacyPopup::`vftable'; /*0x4c6a48*/
  *((_QWORD *)Block + 42) = &ParentalPrivacyPopup::`vftable'; /*0x4c6a56*/
  *((_QWORD *)Block + 43) = &ParentalPrivacyPopup::`vftable'; /*0x4c6a64*/
  *((_QWORD *)Block + 44) = &ParentalPrivacyPopup::`vftable'; /*0x4c6a72*/
  *((_QWORD *)Block + 51) = &ParentalPrivacyPopup::`vftable'; /*0x4c6a80*/
  *((_QWORD *)Block + 54) = &ParentalPrivacyPopup::`vftable'; /*0x4c6a8e*/
  *((_QWORD *)Block + 68) = &ParentalPrivacyPopup::`vftable'; /*0x4c6a9c*/
  *((_QWORD *)Block + 88) = &ParentalPrivacyPopup::`vftable'; /*0x4c6ab1*/
  v4 = Block + 712; /*0x4c6ab4*/
  *((_QWORD *)Block + 89) = &ParentalPrivacyPopup::`vftable'; /*0x4c6ac2*/
  if ( *(char **)(GJAccountManager_sharedState() + 448) == Block + 704 ) /*0x4c6ad1*/
    *(_QWORD *)(GJAccountManager_sharedState() + 448) = 0; /*0x4c6ad8*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x4c6ae3*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x4c6aed*/
  {
    v6 = operator new(0x690u); /*0x4c6af4*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x4c6b01*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4c6b12*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x4c6b14*/
  }
  if ( *(char **)(v5 + 1480) == v4 ) /*0x4c6b22*/
    *(_QWORD *)(v5 + 1480) = 0; /*0x4c6b24*/
  UploadActionPopup__dtor_UploadActionPopup(Block); /*0x4c6b32*/
  if ( (a2 & 1) != 0 ) /*0x4c6b3c*/
    j_j_free(Block); /*0x4c6b46*/
  return Block; /*0x4c6b4e*/
}

// [2/5] Address: 0x4d13c0
// Method: ParentalPrivacyPopup::getUserInfoFinished
// Hidden C++ exception states: #wind=2
void __fastcall ParentalPrivacyPopup_getUserInfoFinished(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  void *v7; // [rsp+38h] [rbp+10h]

  v4 = GJAccountManager_sharedState(); /*0x4d13da*/
  if ( a2[98] == *(_DWORD *)(v4 + 360) - *(_DWORD *)(v4 + 364) ) /*0x4d13f4*/
  {
    v5 = a1 - 712; /*0x4d13f6*/
    if ( a1 == 712 ) /*0x4d1402*/
      a1 = 0; /*0x4d1402*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x4d1406*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x4d1410*/
    {
      v7 = operator new(0x690u); /*0x4d141c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x4d142a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4d143b*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x4d143d*/
    }
    if ( *(_QWORD *)(v6 + 1480) == a1 ) /*0x4d144b*/
      *(_QWORD *)(v6 + 1480) = 0; /*0x4d144d*/
    GJBaseGameLayer_getRecordString(v5, a2); /*0x4d145a*/
  }
}

// [3/5] Address: 0x4d1480
// Method: ParentalPrivacyPopup::getUserInfoFailed
// Hidden C++ exception states: #wind=2
__int64 __fastcall ParentalPrivacyPopup_getUserInfoFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // [rsp+40h] [rbp+18h]

  result = GJAccountManager_sharedState(); /*0x4d1494*/
  if ( a2 == *(_DWORD *)(result + 360) - *(_DWORD *)(result + 364) ) /*0x4d14aa*/
  {
    v5 = a1; /*0x4d14b3*/
    if ( a1 == 712 ) /*0x4d14bb*/
      v5 = 0; /*0x4d14bb*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x4d14bf*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x4d14c9*/
    {
      v7 = operator new(0x690u); /*0x4d14d5*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x4d14e3*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4d14f4*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x4d14f6*/
    }
    if ( *(_QWORD *)(v6 + 1480) == v5 ) /*0x4d1504*/
      *(_QWORD *)(v6 + 1480) = 0; /*0x4d1506*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 8LL))(a1 - 8); /*0x4d1514*/
  }
  return result; /*0x4d1517*/
}

// [4/5] Address: 0x4d1530
// Method: ParentalPrivacyPopup::updateSettingsFinished
// Hidden C++ exception states: #wind=13
double __fastcall ParentalPrivacyPopup_updateSettingsFinished(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rcx
  struct cocos2d::CCObject *v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rbx
  cocos2d::CCString *v8; // rax
  int v9; // ebx
  void *v10; // r8
  __int64 v11; // rbx
  cocos2d::CCString *v12; // rax
  int v13; // ebx
  void *v14; // r8
  __int64 v15; // rbx
  cocos2d::CCString *v16; // rax
  int v17; // ebx
  void *v18; // r8
  __int64 v19; // rbx
  cocos2d::CCString *v20; // rax
  int v21; // ebx
  void *v22; // r8
  __int64 v23; // rbx
  cocos2d::CCString *v24; // rax
  int v25; // ebx
  void *v26; // r8
  char v27; // si
  __int64 v28; // rbx
  __int64 v29; // rbx
  struct cocos2d::CCString *v30; // rax
  void *v31; // rcx
  const char *v32; // rdx
  __int64 v33; // r8
  void *v35; // [rsp+30h] [rbp-89h]
  void *v36; // [rsp+30h] [rbp-89h]
  void *v37; // [rsp+30h] [rbp-89h]
  void *v38; // [rsp+30h] [rbp-89h]
  void *v39; // [rsp+30h] [rbp-89h]
  void *v40; // [rsp+30h] [rbp-89h]
  void *v41; // [rsp+30h] [rbp-89h]
  void *v42[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v43; // [rsp+48h] [rbp-71h]
  unsigned __int64 v44; // [rsp+50h] [rbp-69h]
  void *Block[2]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v46; // [rsp+68h] [rbp-51h]
  unsigned __int64 v47; // [rsp+70h] [rbp-49h]
  void *Src[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v49; // [rsp+88h] [rbp-31h]
  unsigned __int64 v50; // [rsp+90h] [rbp-29h]
  void *v51[2]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-11h]
  unsigned __int64 v53; // [rsp+B0h] [rbp-9h]
  void *v54[2]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v55; // [rsp+C8h] [rbp+Fh]
  unsigned __int64 v56; // [rsp+D0h] [rbp+17h]
  void *v57[2]; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v58; // [rsp+E8h] [rbp+2Fh]
  unsigned __int64 v59; // [rsp+F0h] [rbp+37h]

  v2 = GJAccountManager_sharedState(); /*0x4d1561*/
  v3 = *(_DWORD *)(v2 + 360) - *(_DWORD *)(v2 + 364); /*0x4d156c*/
  v4 = *(_QWORD *)&qword_905FB0; /*0x4d1572*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x4d157c*/
  {
    v35 = operator new(0x690u); /*0x4d1588*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v35); /*0x4d1596*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4d15a7*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x4d15a9*/
  }
  v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v4 + 1232), v3); /*0x4d15c0*/
  v6 = 2; /*0x4d15c6*/
  if ( v5 ) /*0x4d15cf*/
  {
    if ( *(_BYTE *)(a1 + 16) ) /*0x4d15d5*/
    {
      v7 = qword_905FD0; /*0x4d15df*/
      if ( !qword_905FD0 ) /*0x4d15e9*/
      {
        v36 = operator new(0x6E8u); /*0x4d15f5*/
        qword_905FD0 = sub_2723A0(v36); /*0x4d1603*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d1614*/
        v7 = qword_905FD0; /*0x4d1616*/
      }
      *(_OWORD *)Block = 0; /*0x4d1620*/
      v46 = 3; /*0x4d1624*/
      v47 = 15; /*0x4d162c*/
      LODWORD(Block[0]) = 6256231; /*0x4d163a*/
      sub_43D80(Block, "0222", 4u); /*0x4d165d*/
      v8 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v7 + 432), Block); /*0x4d166d*/
      v9 = cocos2d::CCString::intValue(v8); /*0x4d167c*/
      if ( v47 > 0xF ) /*0x4d1686*/
      {
        v10 = Block[0]; /*0x4d168b*/
        if ( v47 + 1 >= 0x1000 ) /*0x4d1699*/
        {
          v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x4d169f*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x4d16ae*/
            invoke_watson(0, 0, 0, 0, 0); /*0x4d16bf*/
        }
        j_j_free(v10); /*0x4d16c9*/
      }
      v46 = 0; /*0x4d16ce*/
      v47 = 15; /*0x4d16d2*/
      LOBYTE(Block[0]) = 0; /*0x4d16da*/
    }
    else
    {
      v9 = 2; /*0x4d16e0*/
    }
    *((_DWORD *)v5 + 113) = v9; /*0x4d16e3*/
    if ( *(_BYTE *)(a1 + 16) ) /*0x4d16e9*/
    {
      v11 = qword_905FD0; /*0x4d16f3*/
      if ( !qword_905FD0 ) /*0x4d16fd*/
      {
        v37 = operator new(0x6E8u); /*0x4d1709*/
        qword_905FD0 = sub_2723A0(v37); /*0x4d1717*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d1728*/
        v11 = qword_905FD0; /*0x4d172a*/
      }
      *(_OWORD *)Src = 0; /*0x4d1734*/
      v49 = 3; /*0x4d1738*/
      v50 = 15; /*0x4d1740*/
      LODWORD(Src[0]) = 6256231; /*0x4d174e*/
      sub_43D80(Src, "0223", 4u); /*0x4d1771*/
      v12 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v11 + 432), Src); /*0x4d1781*/
      v13 = cocos2d::CCString::intValue(v12); /*0x4d1790*/
      if ( v50 > 0xF ) /*0x4d179a*/
      {
        v14 = Src[0]; /*0x4d179f*/
        if ( v50 + 1 >= 0x1000 ) /*0x4d17ad*/
        {
          v14 = (void *)*((_QWORD *)Src[0] - 1); /*0x4d17b3*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v14 - 8) > 0x1F ) /*0x4d17c2*/
            invoke_watson(0, 0, 0, 0, 0); /*0x4d17d3*/
        }
        j_j_free(v14); /*0x4d17dd*/
      }
      v49 = 0; /*0x4d17e2*/
      v50 = 15; /*0x4d17e6*/
      LOBYTE(Src[0]) = 0; /*0x4d17ee*/
    }
    else
    {
      v13 = 1; /*0x4d17f4*/
    }
    *((_DWORD *)v5 + 114) = v13; /*0x4d17f9*/
    if ( *(_BYTE *)(a1 + 16) ) /*0x4d17ff*/
    {
      v15 = qword_905FD0; /*0x4d1809*/
      if ( !qword_905FD0 ) /*0x4d1813*/
      {
        v38 = operator new(0x6E8u); /*0x4d181f*/
        qword_905FD0 = sub_2723A0(v38); /*0x4d182d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d183e*/
        v15 = qword_905FD0; /*0x4d1840*/
      }
      *(_OWORD *)v51 = 0; /*0x4d184a*/
      v52 = 3; /*0x4d184e*/
      v53 = 15; /*0x4d1856*/
      LODWORD(v51[0]) = 6256231; /*0x4d1864*/
      sub_43D80(v51, "0224", 4u); /*0x4d1887*/
      v16 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v15 + 432), v51); /*0x4d1897*/
      v17 = cocos2d::CCString::intValue(v16); /*0x4d18a6*/
      if ( v53 > 0xF ) /*0x4d18b0*/
      {
        v18 = v51[0]; /*0x4d18b5*/
        if ( v53 + 1 >= 0x1000 ) /*0x4d18c3*/
        {
          v18 = (void *)*((_QWORD *)v51[0] - 1); /*0x4d18c9*/
          if ( (unsigned __int64)((char *)v51[0] - (char *)v18 - 8) > 0x1F ) /*0x4d18d8*/
            invoke_watson(0, 0, 0, 0, 0); /*0x4d18e9*/
        }
        j_j_free(v18); /*0x4d18f3*/
      }
      v52 = 0; /*0x4d18f8*/
      v53 = 15; /*0x4d18fc*/
      LOBYTE(v51[0]) = 0; /*0x4d1904*/
    }
    else
    {
      v17 = 2; /*0x4d190a*/
    }
    *((_DWORD *)v5 + 115) = v17; /*0x4d190d*/
    if ( *(_BYTE *)(a1 + 16) ) /*0x4d1913*/
    {
      v19 = qword_905FD0; /*0x4d191d*/
      if ( !qword_905FD0 ) /*0x4d1927*/
      {
        v39 = operator new(0x6E8u); /*0x4d1933*/
        qword_905FD0 = sub_2723A0(v39); /*0x4d1941*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d1952*/
        v19 = qword_905FD0; /*0x4d1954*/
      }
      *(_OWORD *)v54 = 0; /*0x4d195e*/
      v55 = 3; /*0x4d1962*/
      v56 = 15; /*0x4d196a*/
      LODWORD(v54[0]) = 6256231; /*0x4d1978*/
      sub_43D80(v54, "0225", 4u); /*0x4d199b*/
      v20 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v19 + 432), v54); /*0x4d19ab*/
      v21 = cocos2d::CCString::intValue(v20); /*0x4d19ba*/
      if ( v56 > 0xF ) /*0x4d19c4*/
      {
        v22 = v54[0]; /*0x4d19c9*/
        if ( v56 + 1 >= 0x1000 ) /*0x4d19d7*/
        {
          v22 = (void *)*((_QWORD *)v54[0] - 1); /*0x4d19dd*/
          if ( (unsigned __int64)((char *)v54[0] - (char *)v22 - 8) > 0x1F ) /*0x4d19ec*/
            invoke_watson(0, 0, 0, 0, 0); /*0x4d19fd*/
        }
        j_j_free(v22); /*0x4d1a07*/
      }
      v55 = 0; /*0x4d1a0c*/
      v56 = 15; /*0x4d1a10*/
      LOBYTE(v54[0]) = 0; /*0x4d1a18*/
    }
    else
    {
      v21 = 2; /*0x4d1a1e*/
    }
    *((_DWORD *)v5 + 116) = v21; /*0x4d1a21*/
    if ( *(_BYTE *)(a1 + 16) ) /*0x4d1a27*/
    {
      v23 = qword_905FD0; /*0x4d1a31*/
      if ( !qword_905FD0 ) /*0x4d1a3b*/
      {
        v40 = operator new(0x6E8u); /*0x4d1a47*/
        qword_905FD0 = sub_2723A0(v40); /*0x4d1a55*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d1a66*/
        v23 = qword_905FD0; /*0x4d1a68*/
      }
      *(_OWORD *)v57 = 0; /*0x4d1a72*/
      v58 = 3; /*0x4d1a76*/
      v59 = 15; /*0x4d1a7e*/
      LODWORD(v57[0]) = 6256231; /*0x4d1a8c*/
      sub_43D80(v57, "0226", 4u); /*0x4d1aaf*/
      v24 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v23 + 432), v57); /*0x4d1abf*/
      v25 = cocos2d::CCString::intValue(v24); /*0x4d1ace*/
      if ( v59 > 0xF ) /*0x4d1ad8*/
      {
        v26 = v57[0]; /*0x4d1add*/
        if ( v59 + 1 >= 0x1000 ) /*0x4d1aeb*/
        {
          v26 = (void *)*((_QWORD *)v57[0] - 1); /*0x4d1af1*/
          if ( (unsigned __int64)((char *)v57[0] - (char *)v26 - 8) > 0x1F ) /*0x4d1b00*/
            invoke_watson(0, 0, 0, 0, 0); /*0x4d1b11*/
        }
        j_j_free(v26); /*0x4d1b1b*/
      }
      v58 = 0; /*0x4d1b20*/
      v59 = 15; /*0x4d1b24*/
      LOBYTE(v57[0]) = 0; /*0x4d1b2c*/
    }
    else
    {
      v25 = 2; /*0x4d1b32*/
    }
    *((_DWORD *)v5 + 117) = v25; /*0x4d1b35*/
  }
  v27 = *(_BYTE *)(a1 + 16); /*0x4d1b3b*/
  v28 = qword_905FD0; /*0x4d1b3f*/
  if ( !qword_905FD0 ) /*0x4d1b49*/
  {
    v41 = operator new(0x6E8u); /*0x4d1b55*/
    qword_905FD0 = sub_2723A0(v41); /*0x4d1b63*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d1b74*/
    v28 = qword_905FD0; /*0x4d1b76*/
  }
  *(_OWORD *)v42 = 0; /*0x4d1b80*/
  v43 = 3; /*0x4d1b85*/
  v44 = 15; /*0x4d1b8d*/
  LODWORD(v42[0]) = 6256231; /*0x4d1b9b*/
  sub_43D80(v42, "0227", 4u); /*0x4d1bc0*/
  v29 = *(_QWORD *)(v28 + 432); /*0x4d1bc5*/
  if ( v27 ) /*0x4d1bcf*/
    v6 = 0; /*0x4d1bcf*/
  v30 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v6); /*0x4d1bdd*/
  cocos2d::CCDictionary::setObject(v29, v30, v42); /*0x4d1bee*/
  if ( v44 > 0xF ) /*0x4d1bfd*/
  {
    v31 = v42[0]; /*0x4d1c02*/
    if ( v44 + 1 >= 0x1000 ) /*0x4d1c11*/
    {
      v31 = (void *)*((_QWORD *)v42[0] - 1); /*0x4d1c17*/
      if ( (unsigned __int64)((char *)v42[0] - (char *)v31 - 8) > 0x1F ) /*0x4d1c26*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4d1c37*/
    }
    j_j_free(v31); /*0x4d1c3e*/
  }
  v32 = "Privacy settings updated!"; /*0x4d1c4a*/
  if ( *(_BYTE *)(a1 + 16) ) /*0x4d1c51*/
    v32 = "Privacy settings restored!"; /*0x4d1c55*/
  *(_OWORD *)v42 = 0; /*0x4d1c5c*/
  v43 = 0; /*0x4d1c61*/
  v44 = 0; /*0x4d1c65*/
  v33 = -1; /*0x4d1c69*/
  do /*0x4d1c73*/
    ++v33; /*0x4d1c70*/
  while ( v32[v33] ); /*0x4d1c73*/
  sub_3C230(v42); /*0x4d1c7f*/
  return UploadActionPopup_showSuccessMessage(a1 - 704, v42); /*0x4d1c95*/
}

// [5/5] Address: 0x4d1cc0
// Method: ParentalPrivacyPopup::updateSettingsFailed
double __fastcall ParentalPrivacyPopup_updateSettingsFailed(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v3 = 0; /*0x4d1cdd*/
  *(_QWORD *)&v3 = sub_3C460(48); /*0x4d1cee*/
  v4 = 41; /*0x4d1cf8*/
  v5 = 47; /*0x4d1d01*/
  strcpy((char *)v3, "Update failed. The game will retry later."); /*0x4d1d0a*/
  return UploadActionPopup_showFailMessage(a1 - 704, &v3); /*0x4d1d3f*/
}
