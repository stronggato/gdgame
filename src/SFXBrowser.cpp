#include <Geode/binding/SFXBrowser.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/20] Address: 0x195220
// Method: SFXBrowser::onSorting
// Hidden C++ exception states: #wind=3
void __fastcall SFXBrowser_onSorting(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rdx
  void *v9; // [rsp+30h] [rbp+8h]
  void *v10; // [rsp+30h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 1072) ) /*0x195232*/
  {
    v2 = qword_905FD0; /*0x195240*/
    if ( !qword_905FD0 ) /*0x19524a*/
    {
      v9 = operator new(0x6E8u); /*0x195256*/
      qword_905FD0 = sub_2723A0(v9); /*0x195264*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x195275*/
      v2 = qword_905FD0; /*0x195277*/
    }
    if ( GameManager_getGameVariable(v2, "0218") || GameManager_getGameVariable(v2, "0219") ) /*0x19529f*/
    {
      if ( !qword_905FD0 ) /*0x195494*/
      {
        v10 = operator new(0x6E8u); /*0x1954a0*/
        qword_905FD0 = sub_2723A0(v10); /*0x1954ae*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1954bf*/
      }
      ProfilePage_showNoAccountError(); /*0x1954c1*/
    }
    else
    {
      v4 = GJAccountManager_sharedState(v3); /*0x1952ac*/
      if ( *(_DWORD *)(v4 + 360) - *(_DWORD *)(v4 + 364) > 0 ) /*0x1952bf*/
      {
        v6 = *(_QWORD *)(a1 + 1072); /*0x1952e1*/
        v7 = operator new(0x460u); /*0x1952f2*/
        SetupTriggerPopup_SetupTriggerPopup((__int64)v7); /*0x1952fd*/
        *v7 = &EditorSoundConfigUploadPopup::`vftable'; /*0x195309*/
        v7[40] = &EditorSoundConfigUploadPopup::`vftable'; /*0x195313*/
        v7[41] = &EditorSoundConfigUploadPopup::`vftable'; /*0x195321*/
        v7[42] = &EditorSoundConfigUploadPopup::`vftable'; /*0x19532f*/
        v7[43] = &EditorSoundConfigUploadPopup::`vftable'; /*0x19533d*/
        v7[44] = &EditorSoundConfigUploadPopup::`vftable'; /*0x19534b*/
        v7[51] = &EditorSoundConfigUploadPopup::`vftable'; /*0x195359*/
        v7[54] = &EditorSoundConfigUploadPopup::`vftable'; /*0x195367*/
        v7[68] = &EditorSoundConfigUploadPopup::`vftable'; /*0x195375*/
        v7[83] = &EditorSoundConfigUploadPopup::`vftable'; /*0x195383*/
        v7[84] = &EditorSoundConfigUploadPopup::`vftable'; /*0x195391*/
        v7[125] = &EditorSoundConfigUploadPopup::`vftable'; /*0x19539f*/
        v7[126] = 0; /*0x1953a8*/
        v7[127] = 0; /*0x1953af*/
        v7[128] = 0; /*0x1953b6*/
        v7[129] = 0; /*0x1953bd*/
        *((_BYTE *)v7 + 1040) = 0; /*0x1953c4*/
        v7[131] = 0; /*0x1953ca*/
        v7[132] = 0; /*0x1953d1*/
        v7[133] = 0; /*0x1953d8*/
        v7[134] = 0; /*0x1953df*/
        v7[135] = 0; /*0x1953e6*/
        *((_WORD *)v7 + 544) = 0; /*0x1953ed*/
        *((_DWORD *)v7 + 273) = 0; /*0x1953f4*/
        v7[137] = 0; /*0x1953fa*/
        *((_DWORD *)v7 + 276) = 0; /*0x195401*/
        v7[139] = 0; /*0x195407*/
        if ( (unsigned __int8)GJScoreCell_loadFromScore(v7, v6, a1) ) /*0x195417*/
        {
          cocos2d::CCObject::autorelease((cocos2d::CCObject *)v7); /*0x195423*/
          if ( v7 ) /*0x19542c*/
          {
            v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 1064LL); /*0x195435*/
            if ( v8 == SetupTriggerPopup_show ) /*0x195449*/
              SetupTriggerPopup_show((__int64)v7); /*0x19545a*/
            else
              v8((__int64)v7); /*0x19546e*/
          }
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 8LL))(v7, 1); /*0x195488*/
        }
      }
      else
      {
        GJAccountManager_sharedState((unsigned int)(*(_DWORD *)(v4 + 360) - *(_DWORD *)(v4 + 364))); /*0x1952c1*/
        sub_305EE0(v5, "upload <cg>sound packs</c>"); /*0x1952dc*/
      }
    }
  }
}

// [2/20] Address: 0x1adc50
// Method: SFXBrowser::onCredits
__int64 __fastcall SFXBrowser_onCredits(__int64 a1)
{
  __int64 v2; // r8
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // eax
  struct cocos2d::CCArray *v9; // rbx
  __int64 v10; // rdx
  unsigned int *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 *i; // rbp
  __int64 v15; // rbx
  int v16; // eax
  __int64 result; // rax

  EditorUI_deselectAll(a1); /*0x1adc5d*/
  *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 15480LL) += *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 14992LL) /*0x1adc75*/
                                                 - *(_DWORD *)(*(_QWORD *)(a1 + 1512) + 14996LL);
  v2 = *(_QWORD *)(a1 + 1512); /*0x1adc7b*/
  v3 = *(_DWORD *)(v2 + 15568); /*0x1adc82*/
  if ( v3 >= 0 ) /*0x1adc8b*/
  {
    v4 = *(_DWORD *)(v2 + 15504) - v3; /*0x1adc94*/
    v5 = 0; /*0x1adc96*/
    if ( v4 > 1 ) /*0x1adc9b*/
    {
      do /*0x1adcac*/
      {
        if ( v5 >= 7 ) /*0x1adca3*/
          break; /*0x1adca3*/
        v4 = (unsigned int)v4 >> 1; /*0x1adca5*/
        ++v5; /*0x1adca7*/
      }
      while ( (unsigned int)v4 > 1 ); /*0x1adcac*/
    }
    ++*(_DWORD *)(v2 + 4LL * v5 + 15536); /*0x1adcb1*/
  }
  *(_DWORD *)(v2 + 15568) = *(_DWORD *)(v2 + 15504); /*0x1adcc0*/
  v6 = *(_QWORD *)(a1 + 1512); /*0x1adcc7*/
  v7 = *(_QWORD *)(v6 + 14968); /*0x1adcce*/
  *(_BYTE *)(v6 + 15576) = 1; /*0x1adcd5*/
  if ( v7 ) /*0x1adcdf*/
    EditorUI_deselectAll(v7); /*0x1adce1*/
  v8 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(v6 + 3600)); /*0x1adced*/
  v9 = cocos2d::CCArray::createWithCapacity(v8); /*0x1add05*/
  cocos2d::CCArray::addObjectsFromArray(v9, *(struct cocos2d::CCArray **)(v6 + 3600)); /*0x1add08*/
  if ( v9 ) /*0x1add11*/
  {
    v11 = (unsigned int *)*((_QWORD *)v9 + 7); /*0x1add18*/
    v12 = *v11; /*0x1add1c*/
    if ( (_DWORD)v12 ) /*0x1add20*/
    {
      v13 = (__int64 *)*((_QWORD *)v11 + 2); /*0x1add22*/
      for ( i = &v13[v12 - 1]; v13 <= i; *(_BYTE *)(v6 + 15730) = 1 ) /*0x1add36*/
      {
        v15 = *v13; /*0x1add38*/
        if ( !*v13 ) /*0x1add38*/
          break; /*0x1add3e*/
        LOBYTE(v10) = 1; /*0x1add43*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 1160LL))(*v13, v10); /*0x1add48*/
        GJBaseGameLayer_removeObjectFromSection(v6, v15); /*0x1add54*/
        sub_3F1780(v6, v15); /*0x1add5f*/
        ++v13; /*0x1add64*/
      }
    }
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v6 + 14984)); /*0x1add85*/
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v6 + 14976)); /*0x1add92*/
  *(_DWORD *)(v6 + 15000) = 0; /*0x1add98*/
  v16 = rand(); /*0x1adda2*/
  *(_BYTE *)(v6 + 15730) = 1; /*0x1addad*/
  *(_BYTE *)(v6 + 15576) = 0; /*0x1addb4*/
  result = (unsigned int)(int)(float)((float)((float)v16 / 32767.0) * 1000.0); /*0x1addd2*/
  *(_DWORD *)(v6 + 14996) = result; /*0x1addd6*/
  *(_DWORD *)(v6 + 14992) = result; /*0x1adddc*/
  return result; /*0x1adde2*/
}

// [3/20] Address: 0x614980
// Method: SFXBrowser::musicActionFinished
void __fastcall SFXBrowser_musicActionFinished(__int64 a1, int a2)
{
  cocos2d::CCObject *v3; // rcx
  void *v4; // [rsp+40h] [rbp+18h]

  if ( a2 == 2 && *(_BYTE *)(a1 + 436) ) /*0x61498e*/
  {
    *(_BYTE *)(a1 + 456) = 1; /*0x614997*/
    v3 = (cocos2d::CCObject *)qword_906070; /*0x61499e*/
    if ( !qword_906070 ) /*0x6149a8*/
    {
      v4 = operator new(0x3D0u); /*0x6149b4*/
      qword_906070 = sub_47C350(v4); /*0x6149c2*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x6149d3*/
      v3 = (cocos2d::CCObject *)qword_906070; /*0x6149d5*/
    }
    if ( *((_QWORD *)v3 + 48) ) /*0x6149dc*/
    {
      *(_BYTE *)(a1 + 436) = 0; /*0x6149f7*/
      sub_48B220(); /*0x614a03*/
    }
    else
    {
      *(_BYTE *)(a1 + 436) = 1; /*0x6149e6*/
      MusicDownloadManager_getCustomContentURL(v3); /*0x6149f2*/
    }
  }
  else
  {
    sub_613C00(a1 - 664); /*0x614a14*/
  }
}

// [4/20] Address: 0x614a20
// Method: SFXBrowser::musicActionFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall SFXBrowser_musicActionFailed(__int64 a1, int a2)
{
  cocos2d::CCNode *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]

  v4 = *(cocos2d::CCNode **)(a1 + 416); /*0x614a35*/
  cocos2d::CCNode::stopActionByTag(v4, 0); /*0x614a41*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)v4 + 40) + 40LL))((_QWORD *)v4 + 40, 0); /*0x614a53*/
  result = (*(__int64 (__fastcall **)(cocos2d::CCNode *, _QWORD))(*(_QWORD *)v4 + 336LL))(v4, 0); /*0x614a5e*/
  if ( a2 == 4 && !*(_BYTE *)(a1 + 456) ) /*0x614a6d*/
  {
    v10 = 0; /*0x614a8a*/
    v11 = 0; /*0x614a91*/
    v12 = 15; /*0x614a96*/
    LOBYTE(v10) = 0; /*0x614a9f*/
    v13 = 0; /*0x614aa3*/
    v14 = 0; /*0x614aa8*/
    v15 = 0; /*0x614aad*/
    *(_QWORD *)&v13 = sub_3C460(48); /*0x614abc*/
    v14 = 34; /*0x614ac1*/
    v15 = 47; /*0x614aca*/
    strcpy((char *)v13, "SFX Library is the latest version."); /*0x614ada*/
    v6 = *(_QWORD *)(a1 - 664); /*0x614af7*/
    v9 = sub_3A4CA0(&v13, v7, v8, 150, &v10); /*0x614b23*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v6 + 456))(a1 - 664, v9, 100); /*0x614b38*/
  }
  return result; /*0x614b3e*/
}

// [5/20] Address: 0x6174c0
// Method: SFXBrowser::sfxFolderPicked
// Hidden C++ exception states: #wind=10
double __fastcall SFXBrowser_sfxFolderPicked(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  int v6; // ebx
  int v7; // ecx
  __int64 v8; // rdi
  __int64 v9; // rbx
  cocos2d::CCDictionary *v10; // rcx
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rdx
  cocos2d::CCDictionary *v13; // rcx
  const char *v14; // rdx
  cocos2d::CCString *v15; // rax
  const char *CString; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // xmm0
  void **v22; // r15
  char *v23; // rsi
  unsigned __int64 v24; // r13
  __int64 v25; // rbx
  unsigned __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  char *v32; // rax
  int v33; // r15d
  int v34; // esi
  int v35; // r13d
  __int128 *v37; // rdi
  __int128 *v38; // rbx
  __int64 v39; // rdx
  cocos2d::CCDictionary *v40; // rcx
  struct cocos2d::CCObject *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rbx
  void *v44; // rcx
  __int64 v45; // rdi
  cocos2d::CCDictionary *v46; // rcx
  struct cocos2d::CCObject *v47; // rax
  __int64 v48; // rdx
  cocos2d::CCDictionary *v49; // rcx
  const char *v50; // r8
  bool v51; // cc
  cocos2d::CCString *v52; // rax
  char *v53; // rax
  size_t v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  void **v58; // rsi
  unsigned __int64 v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rax
  double result; // xmm0_8
  __int128 v65; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v66; // [rsp+40h] [rbp-79h]
  __int64 v67; // [rsp+48h] [rbp-71h]
  __int128 *i; // [rsp+50h] [rbp-69h] BYREF
  __int128 *v69; // [rsp+58h] [rbp-61h]
  __int64 v70; // [rsp+60h] [rbp-59h]
  __int128 v71; // [rsp+68h] [rbp-51h] BYREF
  __int64 v72; // [rsp+78h] [rbp-41h]
  __int64 v73; // [rsp+80h] [rbp-39h]
  __int128 *v74; // [rsp+88h] [rbp-31h]
  void *v75[2]; // [rsp+90h] [rbp-29h] BYREF
  unsigned __int64 v76; // [rsp+A0h] [rbp-19h]
  unsigned __int64 v77; // [rsp+A8h] [rbp-11h]
  void *Src[2]; // [rsp+B0h] [rbp-9h] BYREF
  unsigned __int64 v79; // [rsp+C0h] [rbp+7h]
  unsigned __int64 v80; // [rsp+C8h] [rbp+Fh]

  v4 = a3; /*0x6174ea*/
  v70 = a1; /*0x6174f0*/
  if ( *(int *)(a1 + 324) > 0 ) /*0x6174fb*/
  {
    i = &v71; /*0x617505*/
    v6 = sub_3E4F0(&v71, a4); /*0x617515*/
    v7 = qword_906070; /*0x617518*/
    if ( !qword_906070 ) /*0x617522*/
    {
      v69 = (__int128 *)operator new(0x3D0u); /*0x61752e*/
      qword_906070 = sub_47C350(v69); /*0x61753b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x61754c*/
      v7 = qword_906070; /*0x61754e*/
    }
    v8 = sub_482240(v7, *(_DWORD *)(a1 + 324), v4, v6, *(_DWORD *)(a1 + 328)); /*0x617570*/
    *(_QWORD *)(a1 + 324) = 0; /*0x617576*/
    v9 = qword_906070; /*0x61757d*/
    if ( !qword_906070 ) /*0x617587*/
    {
      v69 = (__int128 *)operator new(0x3D0u); /*0x617593*/
      qword_906070 = sub_47C350(v69); /*0x6175a0*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x6175b1*/
      v9 = qword_906070; /*0x6175b3*/
    }
    v10 = *(cocos2d::CCDictionary **)(v9 + 920); /*0x6175be*/
    if ( v10 /*0x617601*/
      && *(int *)(v8 + 60) > 0
      && (v11 = cocos2d::CCDictionary::objectForKey(v10, *(int *)(v8 + 60))) != 0
      && (*((_BYTE *)v11 + 72)
       || (v12 = *((int *)v11 + 15), (v13 = *(cocos2d::CCDictionary **)(v9 + 920)) != 0)
       && (int)v12 > 0
       && (v11 = cocos2d::CCDictionary::objectForKey(v13, v12)) != 0
       && *((_BYTE *)v11 + 72)) )
    {
      v14 = (char *)v11 + 80; /*0x617607*/
      if ( *((_QWORD *)v11 + 13) > 0xFu ) /*0x617610*/
        v14 = *(const char **)v14; /*0x617612*/
      v15 = cocos2d::CCString::createWithFormat("Added to %s", v14); /*0x61761c*/
      CString = cocos2d::CCString::getCString(v15); /*0x617625*/
    }
    else
    {
      CString = "Sound added"; /*0x61762d*/
    }
    *(_OWORD *)Src = 0; /*0x617637*/
    v79 = 0; /*0x61763b*/
    v80 = 0; /*0x61763f*/
    v17 = -1; /*0x617643*/
    do /*0x617653*/
      ++v17; /*0x617650*/
    while ( CString[v17] ); /*0x617653*/
    sub_3C230(Src); /*0x617661*/
    v69 = &v71; /*0x61766b*/
    *(_QWORD *)&v21 = 0; /*0x61766f*/
    v71 = 0; /*0x617672*/
    v72 = 0; /*0x617676*/
    v73 = 15; /*0x61767a*/
    LOBYTE(v71) = 0; /*0x617682*/
    v65 = 0; /*0x617686*/
    v66 = 0; /*0x61768b*/
    v67 = 0; /*0x61768f*/
    v22 = Src; /*0x617693*/
    v23 = (char *)Src[0]; /*0x617697*/
    v24 = v80; /*0x61769b*/
    if ( v80 > 0xF ) /*0x6176a3*/
      v22 = (void **)Src[0]; /*0x6176a3*/
    v25 = 0x7FFFFFFFFFFFFFFFLL; /*0x6176a7*/
    v26 = v79; /*0x6176b1*/
    if ( v79 > 0x7FFFFFFFFFFFFFFFLL ) /*0x6176b8*/
      sub_8D90(v19, v18, v20); /*0x617b97*/
    if ( v79 > 0xF ) /*0x6176c2*/
    {
      if ( (v79 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x6176e5*/
      {
        v25 = v79 | 0xF; /*0x6176e7*/
        if ( (v79 | 0xF) < 0x16 ) /*0x6176f2*/
          v25 = 22; /*0x6176f2*/
      }
      *(_QWORD *)&v65 = sub_3C460(v25 + 1); /*0x6176ff*/
      v66 = v26; /*0x617704*/
      v67 = v25; /*0x617708*/
      memcpy((void *)v65, v22, v26 + 1); /*0x617716*/
    }
    else
    {
      v66 = v79; /*0x6176c4*/
      v67 = 15; /*0x6176c8*/
      v21 = *(_OWORD *)v22; /*0x6176d0*/
      v65 = *(_OWORD *)v22; /*0x6176d4*/
    }
    v27 = v70; /*0x61771b*/
    v28 = *(_QWORD *)(v70 - 704); /*0x61771f*/
    v29 = sub_3A4CA0(&v65, v18, v20, 150, &v71); /*0x61774a*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(v28 + 456))(v27 - 704, v29, 100); /*0x61775f*/
    v30 = *(_QWORD *)(v27 + 8); /*0x617765*/
    if ( v30 ) /*0x61776c*/
    {
      v31 = *(_DWORD *)(v30 + 148); /*0x61776e*/
      if ( v31 == 4 || v31 == 3 ) /*0x61777c*/
        cocos2d::CCNode::scheduleOnce(v27 - 704, sub_5AB90); /*0x61778f*/
    }
    if ( v24 > 0xF ) /*0x61779a*/
    {
      v32 = v23; /*0x6177a4*/
      if ( v24 + 1 >= 0x1000 ) /*0x6177ae*/
      {
        v23 = (char *)*((_QWORD *)v23 - 1); /*0x6177b4*/
        if ( (unsigned __int64)(v32 - v23 - 8) > 0x1F ) /*0x6177c3*/
          invoke_watson(0, 0, 0, 0, 0); /*0x6177d4*/
      }
      j_j_free(v23); /*0x6177de*/
    }
    goto LABEL_90; /*0x6177e3*/
  }
  v33 = 0; /*0x6177e8*/
  v34 = 0; /*0x6177eb*/
  v35 = 0; /*0x6177ed*/
  v37 = *(__int128 **)(a1 + 304); /*0x6177f3*/
  v38 = *(__int128 **)v37; /*0x6177fa*/
  for ( i = v38; i != v37; v38 = i ) /*0x617804*/
  {
    if ( !qword_906070 ) /*0x617818*/
    {
      v69 = (__int128 *)operator new(0x3D0u); /*0x617824*/
      qword_906070 = sub_47C350(v69); /*0x617831*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x617842*/
    }
    v39 = *((int *)v38 + 7); /*0x617844*/
    v40 = *(cocos2d::CCDictionary **)(qword_906070 + 920); /*0x61784f*/
    if ( v40 ) /*0x617859*/
    {
      if ( (int)v39 > 0 ) /*0x61785d*/
      {
        v41 = cocos2d::CCDictionary::objectForKey(v40, v39); /*0x61785f*/
        if ( v41 ) /*0x617868*/
        {
          if ( *((_DWORD *)v41 + 15) == (_DWORD)v4 ) /*0x61786e*/
          {
            ++v35; /*0x617870*/
          }
          else
          {
            v42 = qword_906070; /*0x617875*/
            if ( !qword_906070 ) /*0x61787f*/
            {
              v74 = (__int128 *)operator new(0x3D0u); /*0x61788b*/
              qword_906070 = sub_47C350(v74); /*0x617898*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x6178a9*/
              v42 = qword_906070; /*0x6178ab*/
            }
            if ( (unsigned __int8)sub_485CD0(v42, *((unsigned int *)v38 + 7), (unsigned int)v4) ) /*0x6178b8*/
              ++v33; /*0x6178c1*/
            else
              ++v34; /*0x6178c6*/
          }
        }
      }
    }
    sub_BB770(&i, v39); /*0x6178cc*/
    v37 = *(__int128 **)(a1 + 304); /*0x6178d1*/
  }
  v43 = (_QWORD *)*((_QWORD *)v37 + 1); /*0x6178e5*/
  while ( !*((_BYTE *)v43 + 25) ) /*0x6178e9*/
  {
    sub_BB690(a1 + 304, a1 + 304, v43[2]); /*0x617902*/
    v44 = v43; /*0x617907*/
    v43 = (_QWORD *)*v43; /*0x61790a*/
    j_j_free(v44); /*0x617912*/
  }
  *((_QWORD *)v37 + 1) = v37; /*0x61791d*/
  *(_QWORD *)v37 = v37; /*0x617921*/
  *((_QWORD *)v37 + 2) = v37; /*0x617924*/
  *(_QWORD *)(a1 + 312) = 0; /*0x61792a*/
  if ( !qword_906070 ) /*0x617938*/
  {
    v74 = (__int128 *)operator new(0x3D0u); /*0x617944*/
    qword_906070 = sub_47C350(v74); /*0x617951*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x617962*/
  }
  v45 = qword_906070; /*0x617964*/
  v46 = *(cocos2d::CCDictionary **)(qword_906070 + 920); /*0x61796b*/
  if ( v46 /*0x6179af*/
    && (int)v4 > 0
    && (v47 = cocos2d::CCDictionary::objectForKey(v46, v4)) != 0
    && (*((_BYTE *)v47 + 72)
     || (v48 = *((int *)v47 + 15), (v49 = *(cocos2d::CCDictionary **)(v45 + 920)) != 0)
     && (int)v48 > 0
     && (v47 = cocos2d::CCDictionary::objectForKey(v49, v48)) != 0
     && *((_BYTE *)v47 + 72)) )
  {
    v50 = (char *)v47 + 80; /*0x6179b5*/
    if ( *((_QWORD *)v47 + 13) > 0xFu ) /*0x6179be*/
      v50 = *(const char **)v50; /*0x6179c0*/
  }
  else
  {
    v50 = "folder"; /*0x6179c5*/
  }
  *(_OWORD *)v75 = 0; /*0x6179cf*/
  v76 = 0; /*0x6179d3*/
  v77 = 15; /*0x6179d7*/
  LOBYTE(v75[0]) = 0; /*0x6179df*/
  if ( v33 ) /*0x6179e6*/
  {
    v51 = v34 <= 0; /*0x617a03*/
  }
  else
  {
    v51 = v34 <= 0; /*0x6179e8*/
    if ( !v34 ) /*0x6179ea*/
    {
      if ( v35 > 0 ) /*0x6179ef*/
      {
        v52 = cocos2d::CCString::createWithFormat("Already in %s", v50); /*0x6179fb*/
        goto LABEL_75; /*0x617a01*/
      }
      goto LABEL_74; /*0x6179ef*/
    }
  }
  if ( !v51 ) /*0x617a05*/
  {
    v52 = cocos2d::CCString::createWithFormat("Moved %i to %s, skipped %i", v33, v50, v34); /*0x617a14*/
    goto LABEL_75; /*0x617a1a*/
  }
LABEL_74:
  v52 = cocos2d::CCString::createWithFormat("Moved %i to %s", v33, v50); /*0x617a1c*/
LABEL_75:
  v53 = (char *)cocos2d::CCString::getCString(v52); /*0x617a2c*/
  v54 = -1; /*0x617a3c*/
  do /*0x617a46*/
    ++v54; /*0x617a43*/
  while ( v53[v54] ); /*0x617a46*/
  sub_3F5A0(v75, v53, v54); /*0x617a4d*/
  v74 = &v71; /*0x617a56*/
  v71 = 0; /*0x617a5d*/
  v72 = 0; /*0x617a61*/
  v73 = 15; /*0x617a65*/
  LOBYTE(v71) = 0; /*0x617a6d*/
  v65 = 0; /*0x617a71*/
  v66 = 0; /*0x617a76*/
  v67 = 0; /*0x617a7a*/
  v58 = v75; /*0x617a7e*/
  if ( v77 > 0xF ) /*0x617a87*/
    v58 = (void **)v75[0]; /*0x617a87*/
  v59 = v76; /*0x617a8c*/
  v60 = 0x7FFFFFFFFFFFFFFFLL; /*0x617a90*/
  if ( v76 > 0x7FFFFFFFFFFFFFFFLL ) /*0x617a9d*/
    sub_8D90(v56, v55, v57); /*0x617b91*/
  if ( v76 > 0xF ) /*0x617aa7*/
  {
    if ( (v76 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x617ac9*/
    {
      v60 = v76 | 0xF; /*0x617acb*/
      if ( (v76 | 0xF) < 0x16 ) /*0x617ad6*/
        v60 = 22; /*0x617ad6*/
    }
    *(_QWORD *)&v65 = sub_3C460(v60 + 1); /*0x617ae3*/
    v66 = v59; /*0x617ae8*/
    v67 = v60; /*0x617aec*/
    memcpy((void *)v65, v58, v59 + 1); /*0x617afa*/
  }
  else
  {
    v66 = v76; /*0x617aa9*/
    v67 = 15; /*0x617aad*/
    v65 = *(_OWORD *)v58; /*0x617ab8*/
  }
  v61 = v70; /*0x617aff*/
  v62 = *(_QWORD *)(v70 - 704); /*0x617b03*/
  v63 = sub_3A4CA0(&v65, v55, v57, 150, &v71); /*0x617b2e*/
  (*(void (__fastcall **)(__int64, __int64, __int64))(v62 + 456))(v61 - 704, v63, 100); /*0x617b43*/
  cocos2d::CCNode::scheduleOnce(v61 - 704, sub_5AB90); /*0x617b5a*/
  *(double *)&v21 = sub_3C310(v75); /*0x617b65*/
LABEL_90:
  *(_QWORD *)&result = v21; /*0x617b6a*/
  return result; /*0x617b6a*/
}

// [6/20] Address: 0x618160
// Method: SFXBrowser::isCustomIDSelected
bool __fastcall SFXBrowser_isCustomIDSelected(__int64 a1, int a2)
{
  __int64 *v2; // r8
  __int64 *i; // rax

  v2 = *(__int64 **)(a1 + 336); /*0x618160*/
  for ( i = (__int64 *)v2[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i ) /*0x61816b*/
  {
    if ( *((_DWORD *)i + 7) >= a2 ) /*0x618174*/
      v2 = i; /*0x61817c*/
    else
      i += 2; /*0x618176*/
  }
  return !*((_BYTE *)v2 + 25) && a2 >= *((_DWORD *)v2 + 7); /*0x618197*/
}

// [7/20] Address: 0x618a80
// Method: SFXBrowser::sfxFoldersPicked
// Hidden C++ exception states: #wind=9
void __fastcall SFXBrowser_sfxFoldersPicked(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r14
  int v7; // ecx
  bool v8; // r12
  int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // r8
  int *v15; // rcx
  char v16; // r9
  const char *CString; // rax
  __int64 v18; // rdx
  const char *v19; // r8
  cocos2d::CCString *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  void **v25; // rsi
  __int64 v26; // rbx
  unsigned __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rsi
  _QWORD *v31; // rbx
  void *v32; // rcx
  _QWORD *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  void *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // rax
  void *v47; // [rsp+30h] [rbp-59h]
  void *v48; // [rsp+30h] [rbp-59h]
  void *v49; // [rsp+30h] [rbp-59h]
  __int128 v51; // [rsp+40h] [rbp-49h] BYREF
  __int64 v52; // [rsp+50h] [rbp-39h]
  __int64 v53; // [rsp+58h] [rbp-31h]
  __int128 *v54; // [rsp+60h] [rbp-29h]
  __int128 v55; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 v56; // [rsp+78h] [rbp-11h]
  __int64 v57; // [rsp+80h] [rbp-9h]
  void *Src[2]; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp+Fh]
  unsigned __int64 v60; // [rsp+A0h] [rbp+17h]

  v4 = qword_905FD0; /*0x618ab1*/
  if ( !qword_905FD0 ) /*0x618abb*/
  {
    v47 = operator new(0x6E8u); /*0x618ac7*/
    qword_905FD0 = sub_2723A0(v47); /*0x618ad4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x618ae5*/
    v4 = qword_905FD0; /*0x618ae7*/
  }
  v5 = *(_QWORD *)(v4 + 568); /*0x618aee*/
  if ( v5 ) /*0x618af8*/
  {
    v6 = *(_QWORD *)(v5 + 3592); /*0x618afe*/
    if ( v6 ) /*0x618b08*/
    {
      v7 = *(_DWORD *)(v6 + 696); /*0x618b0e*/
      v8 = v7 && v7 == *(_DWORD *)(v4 + 692) - *(_DWORD *)(v4 + 696); /*0x618b29*/
      if ( !a3[1] ) /*0x618b33*/
      {
        v9 = 0; /*0x618b39*/
LABEL_46:
        *(_DWORD *)(v6 + 696) = 0; /*0x618ddb*/
        v30 = *(_QWORD **)(v6 + 704); /*0x618de2*/
        v31 = (_QWORD *)v30[1]; /*0x618de9*/
        while ( !*((_BYTE *)v31 + 25) ) /*0x618ded*/
        {
          sub_BB690(v6 + 704, v6 + 704, v31[2]); /*0x618e05*/
          v32 = v31; /*0x618e0a*/
          v31 = (_QWORD *)*v31; /*0x618e0d*/
          j_j_free(v32); /*0x618e15*/
        }
        v30[1] = v30; /*0x618e22*/
        *v30 = v30; /*0x618e26*/
        v30[2] = v30; /*0x618e29*/
        *(_QWORD *)(v6 + 712) = 0; /*0x618e2d*/
        v33 = (_QWORD *)(v6 + 664); /*0x618e34*/
        v33[2] = 0; /*0x618e3b*/
        if ( v33[3] > 0xFu ) /*0x618e44*/
          v33 = (_QWORD *)*v33; /*0x618e46*/
        *(_BYTE *)v33 = 0; /*0x618e49*/
        if ( v9 <= 1000 ) /*0x618e54*/
        {
          if ( a3[1] ) /*0x618f0c*/
          {
            v54 = &v51; /*0x618f1b*/
            v51 = 0; /*0x618f22*/
            v52 = 0; /*0x618f26*/
            v53 = 15; /*0x618f2a*/
            LOBYTE(v51) = 0; /*0x618f32*/
            *(_OWORD *)Src = 0; /*0x618f36*/
            v59 = 0; /*0x618f3a*/
            v60 = 0; /*0x618f3e*/
            Src[0] = (void *)sub_3C460(32); /*0x618f4c*/
            v59 = 26; /*0x618f50*/
            v60 = 31; /*0x618f58*/
            strcpy((char *)Src[0], "No custom folders to share"); /*0x618f67*/
            v34 = a1; /*0x618f86*/
            v39 = *(_QWORD *)(a1 - 704); /*0x618f8a*/
            v42 = sub_3A4CA0(Src, v40, v41, 150, &v51); /*0x618fb4*/
            (*(void (__fastcall **)(__int64, __int64, __int64))(v39 + 456))(a1 - 704, v42, 100); /*0x618fc9*/
          }
          else if ( v8 ) /*0x618fd7*/
          {
            v54 = &v51; /*0x618fe1*/
            v51 = 0; /*0x618fe8*/
            v52 = 0; /*0x618fec*/
            v53 = 15; /*0x618ff0*/
            LOBYTE(v51) = 0; /*0x618ff8*/
            *(_OWORD *)Src = 0; /*0x618ffc*/
            v59 = 0; /*0x619000*/
            v60 = 0; /*0x619004*/
            v43 = (void *)sub_3C460(48); /*0x61900d*/
            Src[0] = v43; /*0x619015*/
            v59 = 43; /*0x619019*/
            v60 = 47; /*0x619021*/
            strcpy((char *)v43, "SFX folders no longer saved with this level"); /*0x619030*/
            v34 = a1; /*0x619064*/
            v44 = *(_QWORD *)(a1 - 704); /*0x619068*/
            v46 = sub_3A4CA0(Src, v43, v45, 150, &v51); /*0x619092*/
            (*(void (__fastcall **)(__int64, __int64, __int64))(v44 + 456))(a1 - 704, v46, 100); /*0x6190a7*/
          }
          else
          {
            v34 = a1; /*0x6190af*/
          }
        }
        else
        {
          v54 = &v51; /*0x618e5e*/
          v51 = 0; /*0x618e65*/
          v52 = 0; /*0x618e69*/
          v53 = 15; /*0x618e6d*/
          LOBYTE(v51) = 0; /*0x618e75*/
          *(_OWORD *)Src = 0; /*0x618e79*/
          v59 = 0; /*0x618e7d*/
          v60 = 0; /*0x618e81*/
          Src[0] = (void *)sub_3C460(32); /*0x618e8f*/
          v59 = 24; /*0x618e93*/
          v60 = 31; /*0x618e9b*/
          strcpy((char *)Src[0], "Setup too large to share"); /*0x618eaa*/
          v34 = a1; /*0x618ebe*/
          v35 = *(_QWORD *)(a1 - 704); /*0x618ec2*/
          v38 = sub_3A4CA0(Src, v36, v37, 150, &v51); /*0x618eec*/
          (*(void (__fastcall **)(__int64, __int64, __int64))(v35 + 456))(a1 - 704, v38, 100); /*0x618f01*/
        }
        sub_6190F0(v34 - 704); /*0x6190ba*/
        return; /*0x6190ba*/
      }
      v10 = qword_906070; /*0x618b41*/
      if ( !qword_906070 ) /*0x618b4b*/
      {
        v48 = operator new(0x3D0u); /*0x618b57*/
        qword_906070 = sub_47C350(v48); /*0x618b64*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x618b75*/
        v10 = qword_906070; /*0x618b77*/
      }
      v9 = sub_481D40(v10, a3); /*0x618b86*/
      if ( (unsigned int)(v9 - 1) > 0x3E7 ) /*0x618b92*/
        goto LABEL_46; /*0x618b92*/
      v11 = qword_905FD0; /*0x618b98*/
      if ( !qword_905FD0 ) /*0x618ba2*/
      {
        v49 = operator new(0x6E8u); /*0x618bae*/
        qword_905FD0 = sub_2723A0(v49); /*0x618bbb*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x618bcc*/
        v11 = qword_905FD0; /*0x618bce*/
      }
      *(_DWORD *)(v6 + 696) = *(_DWORD *)(v11 + 692) - *(_DWORD *)(v11 + 696); /*0x618be1*/
      sub_C4C80(v6 + 704, a3); /*0x618bf2*/
      v12 = (__int64 *)*a3; /*0x618bf7*/
      v13 = *(__int64 **)(*a3 + 8LL); /*0x618bfa*/
      v14 = (__int64 *)*a3; /*0x618bfe*/
      v15 = (int *)v13; /*0x618c01*/
      v16 = *((_BYTE *)v13 + 25); /*0x618c04*/
      if ( !v16 ) /*0x618c0c*/
      {
        do /*0x618c26*/
        {
          if ( v15[7] >= -1 ) /*0x618c14*/
          {
            v14 = (__int64 *)v15; /*0x618c1c*/
            v15 = *(int **)v15; /*0x618c1f*/
          }
          else
          {
            v15 = (int *)*((_QWORD *)v15 + 2); /*0x618c16*/
          }
        }
        while ( !*((_BYTE *)v15 + 25) ); /*0x618c26*/
      }
      if ( !*((_BYTE *)v14 + 25) && *((int *)v14 + 7) <= -1 ) /*0x618c34*/
        goto LABEL_30; /*0x618c34*/
      if ( !v16 ) /*0x618c39*/
      {
        do /*0x618c56*/
        {
          if ( *((int *)v13 + 7) >= 1 ) /*0x618c44*/
          {
            v12 = v13; /*0x618c4c*/
            v13 = (__int64 *)*v13; /*0x618c4f*/
          }
          else
          {
            v13 = (__int64 *)v13[2]; /*0x618c46*/
          }
        }
        while ( !*((_BYTE *)v13 + 25) ); /*0x618c56*/
      }
      if ( *((_BYTE *)v12 + 25) || *((int *)v12 + 7) > 1 ) /*0x618c62*/
      {
        v18 = a3[1]; /*0x618c6d*/
        v19 = (const char *)&unk_70802C; /*0x618c78*/
        if ( v18 == 1 ) /*0x618c83*/
          v19 = &byte_6E86E0; /*0x618c83*/
        v20 = cocos2d::CCString::createWithFormat("%i folder%s will be saved with this level", v18, v19); /*0x618c8e*/
        CString = cocos2d::CCString::getCString(v20); /*0x618c97*/
      }
      else
      {
LABEL_30:
        CString = "All SFX folders will be saved with this level"; /*0x618c64*/
      }
      *(_OWORD *)Src = 0; /*0x618ca0*/
      v59 = 0; /*0x618ca6*/
      v60 = 0; /*0x618caa*/
      v21 = -1; /*0x618cae*/
      do /*0x618cb8*/
        ++v21; /*0x618cb5*/
      while ( CString[v21] ); /*0x618cb8*/
      sub_3C230(Src); /*0x618cc5*/
      v51 = 0; /*0x618cd6*/
      v52 = 0; /*0x618cda*/
      v53 = 15; /*0x618cde*/
      LOBYTE(v51) = 0; /*0x618ce6*/
      v55 = 0; /*0x618cea*/
      v56 = 0; /*0x618cee*/
      v57 = 0; /*0x618cf2*/
      v25 = Src; /*0x618cf6*/
      if ( v60 > 0xF ) /*0x618cff*/
        v25 = (void **)Src[0]; /*0x618cff*/
      v26 = 0x7FFFFFFFFFFFFFFFLL; /*0x618d04*/
      v27 = v59; /*0x618d0e*/
      if ( v59 > 0x7FFFFFFFFFFFFFFFLL ) /*0x618d15*/
        sub_8D90(v23, v22, v24); /*0x6190e6*/
      if ( v59 > 0xF ) /*0x618d1f*/
      {
        if ( (v59 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x618d40*/
        {
          v26 = v59 | 0xF; /*0x618d42*/
          if ( (v59 | 0xF) < 0x16 ) /*0x618d4d*/
            v26 = 22; /*0x618d4d*/
        }
        *(_QWORD *)&v55 = sub_3C460(v26 + 1); /*0x618d5a*/
        v56 = v27; /*0x618d5e*/
        v57 = v26; /*0x618d62*/
        memcpy((void *)v55, v25, v27 + 1); /*0x618d70*/
      }
      else
      {
        v56 = v59; /*0x618d21*/
        v57 = 15; /*0x618d25*/
        v55 = *(_OWORD *)v25; /*0x618d30*/
      }
      v28 = *(_QWORD *)(a1 - 704); /*0x618d79*/
      v29 = sub_3A4CA0(&v55, v22, v24, 150, &v51); /*0x618da3*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(v28 + 456))(a1 - 704, v29, 100); /*0x618db8*/
      sub_6190F0(a1 - 704); /*0x618dc5*/
      sub_3C310(Src); /*0x618dcf*/
    }
  }
}

// [8/20] Address: 0x619790
// Method: SFXBrowser::setTextPopupClosed
// Hidden C++ exception states: #wind=14
double __fastcall SFXBrowser_setTextPopupClosed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r14
  void **v8; // rax
  char v9; // bl
  void *v10; // rcx
  int v11; // ecx
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  cocos2d::CCDictionary *v24; // rcx
  struct cocos2d::CCObject *v25; // r14
  __int64 v26; // rax
  size_t v27; // r8
  void *v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rdx
  char *v32; // r8
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  void *v40; // [rsp+30h] [rbp-99h] BYREF
  void *v41; // [rsp+38h] [rbp-91h] BYREF
  void **v42; // [rsp+40h] [rbp-89h]
  void *Block[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v44; // [rsp+58h] [rbp-71h]
  unsigned __int64 v45; // [rsp+60h] [rbp-69h]
  __int64 v46; // [rsp+68h] [rbp-61h]
  _QWORD v47[2]; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-49h]
  unsigned __int64 v49; // [rsp+88h] [rbp-41h]
  void *v50[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-29h]
  _BYTE v52[32]; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v53; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v54; // [rsp+E0h] [rbp+17h]
  __int64 v55; // [rsp+E8h] [rbp+1Fh]

  v46 = a3; /*0x6197bc*/
  LODWORD(v40) = 0; /*0x6197c3*/
  if ( *(_BYTE *)(a1 + 264) ) /*0x6197c8*/
  {
    *(_BYTE *)(a1 + 264) = 0; /*0x6197d5*/
    v5 = qword_905FD0; /*0x6197dc*/
    if ( !qword_905FD0 ) /*0x6197e6*/
    {
      v41 = operator new(0x6E8u); /*0x6197f2*/
      qword_905FD0 = sub_2723A0(v41); /*0x619800*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x619811*/
      v5 = qword_905FD0; /*0x619813*/
    }
    v6 = *(_QWORD *)(v5 + 568); /*0x61981a*/
    if ( v6 ) /*0x619824*/
    {
      v7 = *(_QWORD *)(v6 + 3592); /*0x61982a*/
      if ( v7 ) /*0x619834*/
      {
        if ( *(_QWORD *)(a3 + 16) ) /*0x61983a*/
        {
          v8 = (void **)sub_3E4F0(v52, a3); /*0x619878*/
          v9 = 2; /*0x61987d*/
        }
        else
        {
          Block[1] = 0; /*0x619841*/
          v44 = 8; /*0x619845*/
          v45 = 15; /*0x61984d*/
          Block[0] = (void *)0x646574726F706D49LL; /*0x61985c*/
          v8 = Block; /*0x619865*/
          v9 = 1; /*0x61986a*/
        }
        *(_OWORD *)v50 = *(_OWORD *)v8; /*0x619885*/
        v51 = *((_OWORD *)v8 + 1); /*0x61988d*/
        v8[2] = 0; /*0x619891*/
        v8[3] = &loc_D + 2; /*0x619895*/
        *(_BYTE *)v8 = 0; /*0x61989d*/
        if ( (v9 & 2) != 0 ) /*0x6198a3*/
        {
          v9 &= ~2u; /*0x6198a5*/
          sub_3C310(v52); /*0x6198ac*/
        }
        if ( (v9 & 1) != 0 && v45 > 0xF ) /*0x6198bf*/
        {
          v10 = Block[0]; /*0x6198c4*/
          if ( v45 + 1 >= 0x1000 ) /*0x6198d3*/
          {
            v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x6198d9*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x6198e8*/
              invoke_watson(0, 0, 0, 0, 0); /*0x6198f9*/
          }
          j_j_free(v10); /*0x619900*/
        }
        LODWORD(v41) = 0; /*0x619905*/
        LODWORD(v40) = 0; /*0x61990a*/
        v11 = qword_906070; /*0x61990f*/
        if ( *(_QWORD *)(v7 + 680) ) /*0x619916*/
        {
          if ( !qword_906070 ) /*0x619923*/
          {
            v42 = (void **)operator new(0x3D0u); /*0x61992f*/
            qword_906070 = sub_47C350(v42); /*0x61993d*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x61994e*/
            v11 = qword_906070; /*0x619950*/
          }
          sub_484060(v11, v7 + 664, (unsigned int)v50, 0, (__int64)&v41, (__int64)&v40); /*0x619979*/
        }
        else
        {
          if ( !qword_906070 ) /*0x619983*/
          {
            v42 = (void **)operator new(0x3D0u); /*0x61998f*/
            qword_906070 = sub_47C350(v42); /*0x61999d*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x6199ae*/
            v11 = qword_906070; /*0x6199b0*/
          }
          sub_4849B0(v11, v7 + 648, (unsigned int)v50, (unsigned int)&v41, (__int64)&v40); /*0x6199d1*/
        }
        if ( (int)v40 <= 0 ) /*0x6199e2*/
          v12 = cocos2d::CCString::createWithFormat("Imported %i", (_DWORD)v41); /*0x6199fa*/
        else
          v12 = cocos2d::CCString::createWithFormat("Imported %i (%i existing)", (_DWORD)v41, (_DWORD)v40); /*0x6199eb*/
        CString = cocos2d::CCString::getCString(v12); /*0x619a03*/
        v53 = 0; /*0x619a0c*/
        v54 = 0; /*0x619a10*/
        v55 = 0; /*0x619a14*/
        v14 = -1; /*0x619a18*/
        do /*0x619a23*/
          ++v14; /*0x619a20*/
        while ( CString[v14] ); /*0x619a23*/
        sub_3C230(&v53); /*0x619a31*/
        v42 = Block; /*0x619a3c*/
        *(_OWORD *)Block = 0; /*0x619a44*/
        v44 = 0; /*0x619a49*/
        v45 = 15; /*0x619a4d*/
        LOBYTE(Block[0]) = 0; /*0x619a55*/
        v15 = sub_3E4F0(v52, &v53); /*0x619a62*/
        v16 = *(_QWORD *)(a1 - 688); /*0x619a67*/
        v19 = sub_3A4CA0(v15, v17, v18, 150, Block); /*0x619a91*/
        (*(void (__fastcall **)(__int64, __int64, __int64))(v16 + 456))(a1 - 688, v19, 100); /*0x619aa6*/
        cocos2d::CCNode::scheduleOnce(a1 - 688, sub_5AB90); /*0x619abd*/
        sub_3C310(&v53); /*0x619ac8*/
        if ( *((_QWORD *)&v51 + 1) > 0xFu ) /*0x619ad6*/
        {
          v20 = v50[0]; /*0x619adf*/
          if ( (unsigned __int64)(*((_QWORD *)&v51 + 1) + 1LL) >= 0x1000 ) /*0x619aed*/
          {
            v20 = (void *)*((_QWORD *)v50[0] - 1); /*0x619af3*/
            if ( (unsigned __int64)((char *)v50[0] - (char *)v20 - 8) > 0x1F ) /*0x619b02*/
              invoke_watson(0, 0, 0, 0, 0); /*0x619b13*/
          }
          j_j_free(v20); /*0x619b1a*/
        }
      }
    }
  }
  else
  {
    if ( *(int *)(a1 + 348) <= 1 ) /*0x619b2b*/
    {
      if ( *(_QWORD *)(a3 + 16) ) /*0x619ca3*/
      {
        v36 = *(_QWORD *)(a1 + 24); /*0x619cae*/
        if ( v36 ) /*0x619cb5*/
        {
          if ( *(_DWORD *)(v36 + 148) == 4 && *(_QWORD *)(v36 + 184) ) /*0x619cc4*/
          {
            v42 = (void **)v52; /*0x619cd2*/
            v37 = sub_3E4F0(v52, a3); /*0x619ce3*/
            v38 = qword_906070; /*0x619ce6*/
            if ( !qword_906070 ) /*0x619cf0*/
            {
              v40 = operator new(0x3D0u); /*0x619cfc*/
              qword_906070 = sub_47C350(v40); /*0x619d0a*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x619d1b*/
              v38 = qword_906070; /*0x619d1d*/
            }
            sub_4820A0(v38, v37, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 184LL) + 76LL), 0); /*0x619d39*/
          }
        }
      }
    }
    else
    {
      if ( *(_QWORD *)(a3 + 16) ) /*0x619b31*/
      {
        v42 = (void **)v52; /*0x619b40*/
        v21 = sub_3E4F0(v52, a3); /*0x619b51*/
        v40 = (void *)v21; /*0x619b54*/
        v22 = qword_906070; /*0x619b59*/
        if ( !qword_906070 ) /*0x619b63*/
        {
          v41 = operator new(0x3D0u); /*0x619b6f*/
          qword_906070 = sub_47C350(v41); /*0x619b7d*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x619b8e*/
          v22 = qword_906070; /*0x619b90*/
        }
        v23 = *(int *)(a1 + 348); /*0x619b97*/
        v24 = *(cocos2d::CCDictionary **)(v22 + 920); /*0x619b9e*/
        if ( v24 && (int)v23 > 0 ) /*0x619bac*/
          v25 = cocos2d::CCDictionary::objectForKey(v24, v23); /*0x619bb4*/
        else
          v25 = 0; /*0x619bb9*/
        v26 = sub_481FA0(v50, v21); /*0x619bc3*/
        sub_58AD0(v21, v26); /*0x619bce*/
        sub_3C310(v50); /*0x619bd7*/
        if ( v25 ) /*0x619bdf*/
        {
          v27 = *(_QWORD *)(v21 + 16); /*0x619be5*/
          if ( v27 ) /*0x619bec*/
          {
            if ( (struct cocos2d::CCObject *)((char *)v25 + 80) != (struct cocos2d::CCObject *)v21 ) /*0x619bf9*/
            {
              v28 = (void *)v21; /*0x619bfb*/
              if ( *(_QWORD *)(v21 + 24) > 0xFu ) /*0x619c03*/
                v28 = *(void **)v21; /*0x619c05*/
              sub_3F5A0((char *)v25 + 80, v28, v27); /*0x619c08*/
            }
            sub_3E4F0(v47, v21); /*0x619c14*/
            v29 = 0; /*0x619c19*/
            v30 = v48; /*0x619c1c*/
            if ( v48 ) /*0x619c23*/
            {
              v31 = v49; /*0x619c25*/
              v32 = (char *)v47[0]; /*0x619c29*/
              do /*0x619c76*/
              {
                v33 = (char *)v47; /*0x619c30*/
                if ( v31 > 0xF ) /*0x619c38*/
                  v33 = v32; /*0x619c38*/
                if ( v33[v29] >= 65 ) /*0x619c40*/
                {
                  v34 = (char *)v47; /*0x619c42*/
                  if ( v31 > 0xF ) /*0x619c4a*/
                    v34 = v32; /*0x619c4a*/
                  if ( v34[v29] <= 90 ) /*0x619c52*/
                  {
                    v35 = (char *)v47; /*0x619c54*/
                    if ( v31 > 0xF ) /*0x619c5c*/
                      v35 = v32; /*0x619c5c*/
                    v35[v29] += 32; /*0x619c60*/
                    v31 = v49; /*0x619c64*/
                    v30 = v48; /*0x619c68*/
                    v32 = (char *)v47[0]; /*0x619c6c*/
                  }
                }
                ++v29; /*0x619c70*/
              }
              while ( v29 < v30 ); /*0x619c76*/
            }
            sub_58AD0((char *)v25 + 112, v47); /*0x619c80*/
            sub_3C310(v47); /*0x619c89*/
          }
        }
        sub_3C310(v21); /*0x619c92*/
      }
      *(_DWORD *)(a1 + 348) = 0; /*0x619c97*/
    }
    cocos2d::CCNode::scheduleOnce(a1 - 688, sub_5AB90); /*0x619d4f*/
  }
  return sub_3C310(a3); /*0x619d5e*/
}

// [9/20] Address: 0x619d90
// Method: SFXBrowser::FLAlert_Clicked
// Hidden C++ exception states: #wind=7
void __fastcall SFXBrowser_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ecx
  void *v11; // rcx
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void **v18; // r14
  _BYTE *v19; // rsi
  unsigned __int64 v20; // r15
  __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  _BYTE *v25; // rax
  int v26; // [rsp+30h] [rbp-59h] BYREF
  void *v27; // [rsp+38h] [rbp-51h] BYREF
  __int128 v28; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-39h]
  __int64 v30; // [rsp+58h] [rbp-31h]
  __int128 *v31; // [rsp+60h] [rbp-29h]
  __int128 v32; // [rsp+68h] [rbp-21h] BYREF
  __int64 v33; // [rsp+78h] [rbp-11h]
  __int64 v34; // [rsp+80h] [rbp-9h]
  void *Src[2]; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp+Fh]
  unsigned __int64 v37; // [rsp+A0h] [rbp+17h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 10 ) /*0x619dd0*/
  {
    if ( a3 ) /*0x619dd5*/
      sub_617E20(a1 - 696); /*0x619de2*/
    return; /*0x619de7*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 11 && a3 ) /*0x619e01*/
  {
    v7 = qword_905FD0; /*0x619e07*/
    if ( !qword_905FD0 ) /*0x619e11*/
    {
      v27 = operator new(0x6E8u); /*0x619e1d*/
      qword_905FD0 = sub_2723A0(v27); /*0x619e2a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x619e3b*/
      v7 = qword_905FD0; /*0x619e3d*/
    }
    v8 = *(_QWORD *)(v7 + 568); /*0x619e44*/
    if ( v8 ) /*0x619e4e*/
    {
      v9 = *(_QWORD *)(v8 + 3592); /*0x619e54*/
      if ( v9 ) /*0x619e5e*/
      {
        if ( *(_QWORD *)(v9 + 680) ) /*0x619e64*/
        {
          v26 = 0; /*0x619e75*/
          LODWORD(v27) = 0; /*0x619e79*/
          *(_OWORD *)Src = 0; /*0x619e80*/
          v36 = 0; /*0x619e84*/
          v37 = 15; /*0x619e88*/
          LOBYTE(Src[0]) = 0; /*0x619e90*/
          v10 = qword_906070; /*0x619e94*/
          if ( !qword_906070 ) /*0x619e9e*/
          {
            v31 = (__int128 *)operator new(0x3D0u); /*0x619eaa*/
            qword_906070 = sub_47C350(v31); /*0x619eb7*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x619ec8*/
            v10 = qword_906070; /*0x619eca*/
          }
          LOBYTE(v6) = 1; /*0x619ef8*/
          sub_484060( /*0x619eff*/
            v10,
            *(_QWORD *)(*(_QWORD *)(v7 + 568) + 3592LL) + 664,
            (unsigned int)Src,
            v6,
            (__int64)&v26,
            (__int64)&v27);
          if ( v37 > 0xF ) /*0x619f0d*/
          {
            v11 = Src[0]; /*0x619f12*/
            if ( v37 + 1 >= 0x1000 ) /*0x619f20*/
            {
              v11 = (void *)*((_QWORD *)Src[0] - 1); /*0x619f26*/
              if ( (unsigned __int64)((char *)Src[0] - (char *)v11 - 8) > 0x1F ) /*0x619f35*/
                goto LABEL_31; /*0x619f35*/
            }
            j_j_free(v11); /*0x619f3b*/
          }
          v12 = cocos2d::CCString::createWithFormat("Imported %i", v26); /*0x619f4a*/
          CString = cocos2d::CCString::getCString(v12); /*0x619f53*/
          *(_OWORD *)Src = 0; /*0x619f5c*/
          v36 = 0; /*0x619f60*/
          v37 = 0; /*0x619f64*/
          v14 = -1; /*0x619f68*/
          do /*0x619f73*/
            ++v14; /*0x619f70*/
          while ( CString[v14] ); /*0x619f73*/
          sub_3C230(Src); /*0x619f81*/
          v31 = &v32; /*0x619f8b*/
          v32 = 0; /*0x619f92*/
          v33 = 0; /*0x619f96*/
          v34 = 15; /*0x619f9a*/
          LOBYTE(v32) = 0; /*0x619fa2*/
          v28 = 0; /*0x619fa6*/
          v29 = 0; /*0x619faa*/
          v30 = 0; /*0x619fae*/
          v18 = Src; /*0x619fb2*/
          v19 = Src[0]; /*0x619fb6*/
          v20 = v37; /*0x619fba*/
          if ( v37 > 0xF ) /*0x619fc2*/
            v18 = (void **)Src[0]; /*0x619fc2*/
          v21 = 0x7FFFFFFFFFFFFFFFLL; /*0x619fc6*/
          v22 = v36; /*0x619fd0*/
          if ( v36 > 0x7FFFFFFFFFFFFFFFLL ) /*0x619fd7*/
            sub_8D90(v16, v15, v17); /*0x61a105*/
          if ( v36 > 0xF ) /*0x619fe1*/
          {
            if ( (v36 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x61a003*/
            {
              v21 = v36 | 0xF; /*0x61a005*/
              if ( (v36 | 0xF) < 0x16 ) /*0x61a010*/
                v21 = 22; /*0x61a010*/
            }
            *(_QWORD *)&v28 = sub_3C460(v21 + 1); /*0x61a01d*/
            v29 = v22; /*0x61a021*/
            v30 = v21; /*0x61a025*/
            memcpy((void *)v28, v18, v22 + 1); /*0x61a033*/
          }
          else
          {
            v29 = v36; /*0x619fe3*/
            v30 = 15; /*0x619fe7*/
            v28 = *(_OWORD *)v18; /*0x619ff3*/
          }
          v23 = *(_QWORD *)(a1 - 696); /*0x61a038*/
          v24 = sub_3A4CA0(&v28, v15, v17, 150, &v32); /*0x61a062*/
          (*(void (__fastcall **)(__int64, __int64, __int64))(v23 + 456))(a1 - 696, v24, 100); /*0x61a077*/
          cocos2d::CCNode::scheduleOnce(a1 - 696, sub_5AB90); /*0x61a08e*/
          if ( v20 > 0xF ) /*0x61a099*/
          {
            v25 = v19; /*0x61a09f*/
            if ( v20 + 1 < 0x1000 || (v19 = (_BYTE *)*((_QWORD *)v19 - 1), (unsigned __int64)(v25 - v19 - 8) <= 0x1F) ) /*0x61a0be*/
            {
              j_j_free(v19); /*0x61a0d9*/
              return; /*0x61a0d9*/
            }
LABEL_31:
            invoke_watson(0, 0, 0, 0, 0); /*0x61a0c0*/
          }
        }
      }
    }
  }
}

// [10/20] Address: 0x61a4c0
// Method: SFXBrowser::sortSelectClosed
void __fastcall SFXBrowser_sortSelectClosed(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 32); /*0x61a4c0*/
  if ( v2 ) /*0x61a4c7*/
  {
    v3 = *(_DWORD *)(a2 + 664); /*0x61a4c9*/
    if ( *(_DWORD *)(a1 + 424) != v3 ) /*0x61a4d5*/
    {
      *(_DWORD *)(a1 + 424) = v3; /*0x61a4d7*/
      *(_DWORD *)(v2 + 96) = 0; /*0x61a4eb*/
      cocos2d::CCNode::scheduleOnce(a1 - 680, sub_5AB90); /*0x61a4f6*/
    }
  }
}

// [11/20] Address: 0x61a910
// Method: SFXBrowser::rebuildContent
// attributes: thunk
__int64 SFXBrowser_rebuildContent()
{
  return sub_616F20();
}

// [12/20] Address: 0x61aa00
// Method: SFXBrowser::textChanged
void __fastcall SFXBrowser_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rsi
  const void *v7; // rdx
  void **v8; // rcx
  void **v9; // rbx
  unsigned __int64 v10; // rbp
  size_t v11; // r14
  void **v12; // rdx
  void **v13; // rax
  void *Buf1[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v16; // [rsp+50h] [rbp-38h]

  if ( *(_BYTE *)(a1 + 336) ) /*0x61aa2b*/
  {
    v3 = *(_QWORD *)(a1 + 304); /*0x61aa38*/
    if ( a2 == v3 ) /*0x61aa42*/
    {
      if ( *(_QWORD *)(a1 + 168) ) /*0x61aa48*/
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 600) + 600LL) + 8LL))(*(_QWORD *)(v3 + 600) + 600LL); /*0x61aa66*/
        *(_OWORD *)Buf1 = 0; /*0x61aa6c*/
        Size = 0; /*0x61aa71*/
        v16 = 0; /*0x61aa76*/
        v5 = -1; /*0x61aa7b*/
        do /*0x61aa85*/
          ++v5; /*0x61aa82*/
        while ( *(_BYTE *)(v4 + v5) ); /*0x61aa85*/
        sub_3C230(Buf1); /*0x61aa93*/
        v6 = (void **)(*(_QWORD *)(a1 + 168) + 104LL); /*0x61aaa0*/
        v7 = v6; /*0x61aaa4*/
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 168) + 128LL) > 0xFu ) /*0x61aaac*/
          v7 = *v6; /*0x61aaae*/
        v8 = Buf1; /*0x61aab1*/
        v9 = (void **)Buf1[0]; /*0x61aab6*/
        v10 = v16; /*0x61aabb*/
        if ( v16 > 0xF ) /*0x61aac4*/
          v8 = (void **)Buf1[0]; /*0x61aac4*/
        v11 = Size; /*0x61aac8*/
        if ( Size != *(_QWORD *)(*(_QWORD *)(a1 + 168) + 120LL) || Size && memcmp(v8, v7, Size) ) /*0x61aadb*/
        {
          if ( v6 != Buf1 ) /*0x61aaec*/
          {
            v12 = Buf1; /*0x61aaee*/
            if ( v10 > 0xF ) /*0x61aaf7*/
              v12 = v9; /*0x61aaf7*/
            sub_3F5A0(v6, v12, v11); /*0x61ab01*/
            v10 = v16; /*0x61ab06*/
            v9 = (void **)Buf1[0]; /*0x61ab0b*/
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 168) + 96LL) = 0; /*0x61ab17*/
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 72LL))( /*0x61ab2b*/
            *(_QWORD *)(a1 + 168),
            *(unsigned int *)(a1 + 560));
          sub_614B60(a1 - 544, *(_QWORD *)(a1 + 168)); /*0x61ab3c*/
        }
        if ( v10 > 0xF ) /*0x61ab46*/
        {
          v13 = v9; /*0x61ab4c*/
          if ( v10 + 1 >= 0x1000 ) /*0x61ab56*/
          {
            v9 = (void **)*(v9 - 1); /*0x61ab5c*/
            if ( (unsigned __int64)((char *)v13 - (char *)v9 - 8) > 0x1F ) /*0x61ab6b*/
              invoke_watson(0, 0, 0, 0, 0); /*0x61ab7c*/
          }
          j_j_free(v9); /*0x61ab86*/
        }
      }
    }
  }
}

// [13/20] Address: 0x61abc0
// Method: SFXBrowser::cellPerformedAction
// Hidden C++ exception states: #wind=13
char __fastcall SFXBrowser_cellPerformedAction(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  cocos2d::CCObject *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  int *v11; // rbx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  double v15; // xmm0_8
  int v16; // xmm6_4
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // r12d
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rbx
  cocos2d::CCSpriteFrameCache *v26; // rax
  struct cocos2d::CCSpriteFrame *v27; // rax
  __int64 v28; // rbx
  unsigned int *v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rbx
  _QWORD *i; // rdi
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  cocos2d::CCDictionary *v37; // rcx
  struct cocos2d::CCObject *v38; // rax
  char v39; // al
  int v40; // r14d
  _QWORD *v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  cocos2d::CCDictionary *v46; // rcx
  __int64 v47; // rsi
  struct cocos2d::CCObject *v48; // rax
  const char *v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // r8
  int v52; // eax
  _QWORD *v53; // r15
  __int64 v54; // rax
  __int64 v55; // rdx
  cocos2d::CCDictionary *v56; // rcx
  struct cocos2d::CCObject *v57; // rax
  char *v58; // r8
  cocos2d::CCString *v59; // rax
  const char *CString; // rax
  void *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  int *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  cocos2d::CCDictionary *v67; // rcx
  struct cocos2d::CCObject *v68; // rsi
  __int64 v69; // [rsp+50h] [rbp-B0h]
  void *v70; // [rsp+50h] [rbp-B0h]
  void *v71; // [rsp+50h] [rbp-B0h]
  void *v72; // [rsp+50h] [rbp-B0h]
  __int128 v73; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v74; // [rsp+70h] [rbp-90h] BYREF
  __int64 v75; // [rsp+80h] [rbp-80h]
  __int64 v76; // [rsp+88h] [rbp-78h]
  __int128 v77; // [rsp+90h] [rbp-70h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  __int128 v80; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-40h]
  __int64 v82; // [rsp+C8h] [rbp-38h]
  __int128 *v83; // [rsp+D0h] [rbp-30h]
  __int128 *v84; // [rsp+D8h] [rbp-28h]
  _BYTE v85[32]; // [rsp+E0h] [rbp-20h] BYREF
  void *Block[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v87; // [rsp+110h] [rbp+10h]
  unsigned __int64 v88; // [rsp+118h] [rbp+18h]
  _BYTE v89[32]; // [rsp+120h] [rbp+20h] BYREF

  if ( (unsigned int)(a3 - 21) > 1 ) /*0x61abfe*/
    return 0; /*0x61ac00*/
  switch ( a4 )
  {
    case 1:
      v6 = *(_QWORD *)(a2 + 568); /*0x61ac11*/
      if ( *(_BYTE *)(v6 + 72) ) /*0x61ac18*/
      {
        v7 = SFXSearchResult_create(*(unsigned int *)(a1 + 416)); /*0x61ac2d*/
        *(_DWORD *)(v7 + 148) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 148LL); /*0x61ac3a*/
        v8 = *(cocos2d::CCObject **)(v7 + 184); /*0x61ac40*/
        if ( v6 ) /*0x61ac4c*/
        {
          if ( (cocos2d::CCObject *)v6 != v8 ) /*0x61ac51*/
          {
            if ( v8 ) /*0x61ac56*/
              cocos2d::CCObject::release(v8); /*0x61ac58*/
            *(_QWORD *)(v7 + 184) = v6; /*0x61ac5e*/
            cocos2d::CCObject::retain((cocos2d::CCObject *)v6); /*0x61ac68*/
          }
        }
        else
        {
          if ( v8 ) /*0x61ac73*/
            cocos2d::CCObject::release(v8); /*0x61ac75*/
          *(_QWORD *)(v7 + 184) = 0; /*0x61ac7b*/
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, *(unsigned int *)(a1 + 432)); /*0x61ac8f*/
        *(_DWORD *)(v7 + 96) = 0; /*0x61ac92*/
        if ( !*(_BYTE *)(a1 + 208) ) /*0x61ac96*/
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 148LL) == 4 ) /*0x61acae*/
            v11 = (int *)(v6 + 76); /*0x61acb0*/
          else
            v11 = (int *)(v6 + 56); /*0x61acb6*/
          v12 = *v11; /*0x61acba*/
          v13 = *(_QWORD *)(a1 + 56); /*0x61acbc*/
          if ( v13 && (v14 = *(_QWORD *)(v13 + 544)) != 0 ) /*0x61accf*/
          {
            v15 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 424) + 480LL) + 232LL))(*(_QWORD *)(*(_QWORD *)(v14 + 424) + 480LL)); /*0x61ace2*/
            v16 = LODWORD(v15); /*0x61ace8*/
          }
          else
          {
            v16 = 0; /*0x61aced*/
          }
          v17 = *(_QWORD *)(a1 + 40); /*0x61acf0*/
          v18 = *(unsigned int *)(v17 + 148); /*0x61acf4*/
          v19 = *(_DWORD *)(v17 + 96); /*0x61acfb*/
          LODWORD(v69) = *(_DWORD *)(v17 + 148); /*0x61acff*/
          HIDWORD(v69) = v12; /*0x61ad04*/
          v20 = *(_QWORD *)(a1 + 384); /*0x61ad0f*/
          v21 = *(_QWORD **)(v20 + 8); /*0x61ad12*/
          Block[0] = v21; /*0x61ad16*/
          LODWORD(Block[1]) = 0; /*0x61ad1a*/
          while ( !*((_BYTE *)v21 + 25) ) /*0x61ad1d*/
          {
            Block[0] = v21; /*0x61ad23*/
            if ( *((_DWORD *)v21 + 7) < (int)v18 || *((_DWORD *)v21 + 7) <= (int)v18 && *((_DWORD *)v21 + 8) < v12 ) /*0x61ad32*/
            {
              LODWORD(Block[1]) = 0; /*0x61ad43*/
              v21 = (_QWORD *)v21[2]; /*0x61ad46*/
            }
            else
            {
              LODWORD(Block[1]) = 1; /*0x61ad34*/
              v20 = (__int64)v21; /*0x61ad3b*/
              v21 = (_QWORD *)*v21; /*0x61ad3e*/
            }
          }
          if ( *(_BYTE *)(v20 + 25) /*0x61ad61*/
            || (int)v18 < *(_DWORD *)(v20 + 28)
            || (int)v18 <= *(_DWORD *)(v20 + 28) && v12 < *(_DWORD *)(v20 + 32) )
          {
            if ( *(_QWORD *)(a1 + 392) == 0x555555555555555LL ) /*0x61ad71*/
              sub_5AC20(v9, v20, v18, v10); /*0x61b4c1*/
            v22 = *(_QWORD *)(a1 + 384); /*0x61ad77*/
            v23 = operator new(0x30u); /*0x61ad89*/
            *(_QWORD *)((char *)v23 + 28) = v69; /*0x61ad94*/
            *(_QWORD *)((char *)v23 + 36) = 0; /*0x61ad98*/
            *v23 = v22; /*0x61ad9c*/
            v23[1] = v22; /*0x61ad9f*/
            v23[2] = v22; /*0x61ada3*/
            *((_WORD *)v23 + 12) = 0; /*0x61ada7*/
            v73 = *(_OWORD *)Block; /*0x61adb1*/
            v20 = sub_69600(a1 + 384, &v73, v23); /*0x61adc6*/
          }
          *(_DWORD *)(v20 + 36) = v19; /*0x61adc9*/
          *(_DWORD *)(v20 + 40) = v16; /*0x61adcd*/
        }
        if ( *(_BYTE *)(a1 + 208) ) /*0x61add2*/
        {
          *(_BYTE *)(a1 + 208) = 0; /*0x61ade0*/
          v24 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 952LL))(*(_QWORD *)(a1 + 168)); /*0x61adf8*/
          v25 = *v24; /*0x61adfb*/
          v26 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x61adfe*/
          v27 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v26, "gj_findBtn_001.png"); /*0x61ae0e*/
          (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v25 + 1008))(v24, v27); /*0x61ae1a*/
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 336LL))(*(_QWORD *)(a1 + 184), 0); /*0x61ae2c*/
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 176) + 336LL))(*(_QWORD *)(a1 + 176), 0); /*0x61ae3e*/
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 176) + 920LL))(*(_QWORD *)(a1 + 176), 0); /*0x61ae50*/
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 176) + 1032LL))(*(_QWORD *)(a1 + 176), 0); /*0x61ae62*/
          v74 = 0; /*0x61ae6b*/
          v75 = 0; /*0x61ae70*/
          v76 = 15; /*0x61ae74*/
          LOBYTE(v74) = 0; /*0x61ae7c*/
          CCTextInputNode_setString(*(_QWORD *)(a1 + 176), &v74); /*0x61ae8d*/
          v28 = *(_QWORD *)(a1 + 200); /*0x61ae92*/
          if ( v28 ) /*0x61ae9c*/
          {
            v29 = *(unsigned int **)(v28 + 56); /*0x61ae9e*/
            v30 = *v29; /*0x61aea2*/
            if ( (_DWORD)v30 ) /*0x61aea6*/
            {
              v31 = (_QWORD *)*((_QWORD *)v29 + 2); /*0x61aea8*/
              for ( i = &v31[v30 - 1]; v31 <= i; ++v31 ) /*0x61aeb7*/
              {
                if ( !*v31 ) /*0x61aec0*/
                  break; /*0x61aec6*/
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v31 + 336LL))(*v31, 0); /*0x61aecd*/
              }
            }
          }
        }
        sub_614B60(a1 - 672, v7); /*0x61aee6*/
      }
      else
      {
        *(_DWORD *)(a1 + 416) = *(_DWORD *)(v6 + 56); /*0x61aef3*/
        *(_DWORD *)(a1 + 352) = *(_DWORD *)(*(_QWORD *)(a2 + 568) + 76LL); /*0x61af03*/
        *(_BYTE *)(a1 + 429) = 1; /*0x61af0a*/
        v33 = qword_906070; /*0x61af12*/
        if ( !qword_906070 ) /*0x61af1c*/
        {
          v70 = operator new(0x3D0u); /*0x61af28*/
          qword_906070 = sub_47C350(v70); /*0x61af36*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x61af47*/
          v33 = qword_906070; /*0x61af49*/
        }
        sub_480BA0(v33, *(unsigned int *)(a1 + 416), *(unsigned int *)(a1 + 352)); /*0x61af5e*/
        CustomListView_reloadAll(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 544LL)); /*0x61af6e*/
      }
      break;
    case 7:
      v34 = *(_QWORD *)(a2 + 568); /*0x61af82*/
      if ( *(int *)(v34 + 76) <= 0 ) /*0x61af8e*/
        goto LABEL_55; /*0x61af8e*/
      v35 = qword_906070; /*0x61af90*/
      if ( !qword_906070 ) /*0x61af9a*/
      {
        v71 = operator new(0x3D0u); /*0x61afa6*/
        qword_906070 = sub_47C350(v71); /*0x61afb4*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x61afc5*/
        v35 = qword_906070; /*0x61afc7*/
      }
      v36 = *(int *)(v34 + 76); /*0x61afce*/
      v37 = *(cocos2d::CCDictionary **)(v35 + 920); /*0x61afd2*/
      if ( v37 && (int)v36 > 0 ) /*0x61afe0*/
        v38 = cocos2d::CCDictionary::objectForKey(v37, v36); /*0x61afe2*/
      else
        v38 = 0; /*0x61afea*/
      if ( v38 == (struct cocos2d::CCObject *)v34 ) /*0x61aff0*/
        v39 = 1; /*0x61aff2*/
      else
LABEL_55:
        v39 = 0; /*0x61aff6*/
      if ( !*(_BYTE *)(v34 + 72) && !v39 ) /*0x61b004*/
      {
        *(_DWORD *)(a1 + 356) = *(_DWORD *)(v34 + 56); /*0x61b00d*/
        *(_DWORD *)(a1 + 360) = *(_DWORD *)(v34 + 76); /*0x61b017*/
        if ( a1 == 672 ) /*0x61b028*/
          v40 = 0; /*0x61b030*/
        else
          v40 = a1 + 32; /*0x61b02a*/
        v73 = 0u; /*0x61b033*/
        v41 = operator new(0x20u); /*0x61b042*/
        *v41 = v41; /*0x61b047*/
        v41[1] = v41; /*0x61b04a*/
        v41[2] = v41; /*0x61b04e*/
        *((_WORD *)v41 + 12) = 257; /*0x61b052*/
        *(_QWORD *)&v73 = v41; /*0x61b058*/
        v42 = sub_C1E50(0, (int)v34 + 80, (unsigned int)&v73, v40, 0); /*0x61b074*/
        sub_BB6F0(&v73, &v73); /*0x61b081*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 1064LL))(v42); /*0x61b093*/
      }
      break;
    case 6:
      v43 = *(_QWORD *)(a2 + 568); /*0x61b0a4*/
      if ( *(int *)(v43 + 76) > 1 )
      {
        v44 = qword_906070; /*0x61b0b5*/
        if ( !qword_906070 ) /*0x61b0bf*/
        {
          v72 = operator new(0x3D0u); /*0x61b0cb*/
          qword_906070 = sub_47C350(v72); /*0x61b0d9*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x61b0ea*/
          v44 = qword_906070; /*0x61b0ec*/
        }
        v45 = *(int *)(v43 + 76); /*0x61b0f3*/
        v46 = *(cocos2d::CCDictionary **)(v44 + 920); /*0x61b0f7*/
        v47 = 0; /*0x61b0fe*/
        if ( v46 && (int)v45 > 0 ) /*0x61b107*/
          v48 = cocos2d::CCDictionary::objectForKey(v46, v45); /*0x61b109*/
        else
          v48 = 0; /*0x61b111*/
        if ( v48 == (struct cocos2d::CCObject *)v43 )
        {
          *(_DWORD *)(a1 + 364) = *(_DWORD *)(v43 + 76); /*0x61b120*/
          *(_BYTE *)(a1 + 280) = 0; /*0x61b127*/
          v83 = &v80; /*0x61b13b*/
          v84 = &v74; /*0x61b144*/
          v77 = 0; /*0x61b14b*/
          v78 = 2; /*0x61b14f*/
          v79 = 15; /*0x61b157*/
          strcpy((char *)&v77, "OK"); /*0x61b166*/
          v49 = "Rename Sound"; /*0x61b175*/
          if ( *(_BYTE *)(v43 + 72) ) /*0x61b17c*/
            v49 = "Rename Folder"; /*0x61b180*/
          v80 = 0; /*0x61b184*/
          v81 = 0; /*0x61b188*/
          v82 = 0; /*0x61b18c*/
          v50 = -1; /*0x61b190*/
          v51 = -1; /*0x61b197*/
          do /*0x61b1a3*/
            ++v51; /*0x61b1a0*/
          while ( v49[v51] ); /*0x61b1a3*/
          sub_3C230(&v80); /*0x61b1ae*/
          v74 = 0; /*0x61b1b7*/
          v75 = 4; /*0x61b1bc*/
          v76 = 15; /*0x61b1c4*/
          strcpy((char *)&v74, "Name"); /*0x61b1d2*/
          v52 = sub_3E4F0(v85, v43 + 80); /*0x61b1e3*/
          v53 = (_QWORD *)sub_3A34B0(v52, (unsigned int)&v74, 30, (unsigned int)&v80, (__int64)&v77, 0, 0, 1, 1, 0); /*0x61b228*/
          if ( !*(_BYTE *)(v43 + 72) )
          {
            v54 = qword_906070; /*0x61b235*/
            if ( !qword_906070 ) /*0x61b23f*/
            {
              *(_QWORD *)&v73 = operator new(0x3D0u); /*0x61b24b*/
              qword_906070 = sub_47C350(v73); /*0x61b259*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x61b26a*/
              v54 = qword_906070; /*0x61b26c*/
            }
            v55 = *(int *)(v43 + 56); /*0x61b273*/
            v56 = *(cocos2d::CCDictionary **)(v54 + 408); /*0x61b277*/
            if ( v56 ) /*0x61b281*/
            {
              v57 = cocos2d::CCDictionary::objectForKey(v56, v55); /*0x61b283*/
              LODWORD(v55) = *(_DWORD *)(v43 + 56); /*0x61b289*/
            }
            else
            {
              v57 = 0; /*0x61b28e*/
            }
            if ( v57 ) /*0x61b294*/
            {
              v58 = (char *)v57 + 80; /*0x61b296*/
              if ( *((_QWORD *)v57 + 13) > 0xFu ) /*0x61b29f*/
                v58 = *(char **)v58; /*0x61b2a1*/
            }
            else
            {
              v58 = &byte_6E86E0; /*0x61b2a6*/
            }
            v59 = cocos2d::CCString::createWithFormat("%i: %s", v55, v58);
            CString = cocos2d::CCString::getCString(v59); /*0x61b2bd*/
            *(_OWORD *)Block = 0; /*0x61b2c6*/
            v87 = 0; /*0x61b2ca*/
            v88 = 0; /*0x61b2ce*/
            do /*0x61b2d5*/
              ++v50; /*0x61b2d2*/
            while ( CString[v50] ); /*0x61b2d5*/
            sub_3C230(Block); /*0x61b2e5*/
            sub_3A4570(v53, Block); /*0x61b2f2*/
            if ( v88 > 0xF ) /*0x61b300*/
            {
              v61 = Block[0]; /*0x61b305*/
              if ( v88 + 1 >= 0x1000 ) /*0x61b313*/
              {
                v61 = (void *)*((_QWORD *)Block[0] - 1); /*0x61b319*/
                if ( (unsigned __int64)((char *)Block[0] - (char *)v61 - 8) > 0x1F ) /*0x61b328*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x61b339*/
              }
              j_j_free(v61); /*0x61b340*/
            }
            v87 = 0; /*0x61b345*/
            v88 = 15; /*0x61b349*/
            LOBYTE(Block[0]) = 0; /*0x61b351*/
          }
          v62 = qword_906070; /*0x61b355*/
          if ( !qword_906070 ) /*0x61b35f*/
          {
            *(_QWORD *)&v73 = operator new(0x3D0u); /*0x61b36b*/
            qword_906070 = sub_47C350(v73); /*0x61b379*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x61b38a*/
            v62 = qword_906070; /*0x61b38c*/
          }
          v63 = sub_482F30(v62, v89, v43); /*0x61b39a*/
          sub_3A4690(v53, v63); /*0x61b3a6*/
          sub_3C310(v89); /*0x61b3b0*/
          if ( a1 != 672 ) /*0x61b3bf*/
            v47 = a1 + 16; /*0x61b3c1*/
          v53[94] = v47; /*0x61b3c5*/
          (*(void (__fastcall **)(_QWORD *))(*v53 + 1064LL))(v53); /*0x61b3d2*/
        }
      }
      break;
    case 8:
      v64 = *(int **)(a2 + 568); /*0x61b3e7*/
      if ( v64[19] > 1 ) /*0x61b3f2*/
      {
        v65 = qword_906070; /*0x61b3f8*/
        if ( !qword_906070 ) /*0x61b402*/
        {
          *(_QWORD *)&v73 = operator new(0x3D0u); /*0x61b40e*/
          qword_906070 = sub_47C350(v73); /*0x61b41c*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x61b42d*/
          v65 = qword_906070; /*0x61b42f*/
        }
        v66 = v64[19]; /*0x61b436*/
        v67 = *(cocos2d::CCDictionary **)(v65 + 920); /*0x61b43a*/
        if ( v67 && (int)v66 > 0 ) /*0x61b448*/
          v68 = cocos2d::CCDictionary::objectForKey(v67, v66); /*0x61b450*/
        else
          v68 = 0; /*0x61b455*/
        if ( v68 == (struct cocos2d::CCObject *)v64 ) /*0x61b45a*/
        {
          if ( !sub_BB450(a1 + 336, v64 + 19) ) /*0x61b467*/
            sub_BB1F0(a1 + 336, &v73, v64 + 19); /*0x61b481*/
          sub_615710(a1 - 672); /*0x61b48d*/
        }
      }
      break;
  }
  return 1; /*0x61b494*/
}

// [14/20] Address: 0x61b4d0
// Method: SFXBrowser::getSelectedCellCustomIdx
__int64 __fastcall SFXBrowser_getSelectedCellCustomIdx(__int64 a1)
{
  return *(unsigned int *)(a1 + 352); /*0x61b4d6*/
}

// [15/20] Address: 0x61b4e0
// Method: SFXBrowser::inCustomSFXTree
bool __fastcall SFXBrowser_inCustomSFXTree(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40); /*0x61b4e0*/
  return v1 && *(_DWORD *)(v1 + 148) == 4; /*0x61b4f4*/
}

// [16/20] Address: 0x61b500
// Method: SFXBrowser::showsSFXInfoButton
bool __fastcall SFXBrowser_showsSFXInfoButton(__int64 a1)
{
  __int64 v1; // rax
  int v2; // eax
  bool result; // al

  v1 = *(_QWORD *)(a1 + 40); /*0x61b500*/
  result = 0; /*0x61b518*/
  if ( v1 ) /*0x61b507*/
  {
    v2 = *(_DWORD *)(v1 + 148); /*0x61b509*/
    if ( v2 ) /*0x61b511*/
    {
      if ( v2 != 4 ) /*0x61b516*/
        return 1; /*0x61b507*/
    }
  }
  return result; /*0x61b51a*/
}

// [17/20] Address: 0x61b520
// Method: SFXBrowser::getSelectedCellIdx
__int64 __fastcall SFXBrowser_getSelectedCellIdx(__int64 a1)
{
  return *(unsigned int *)(a1 + 416); /*0x61b526*/
}

// [18/20] Address: 0x61b530
// Method: SFXBrowser::shouldSnapToSelected
__int64 __fastcall SFXBrowser_shouldSnapToSelected(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 430); /*0x61b537*/
}

// [19/20] Address: 0x61b610
// Method: SFXBrowser::updatePageLabel
// Hidden C++ exception states: #wind=1
void __fastcall SFXBrowser_updatePageLabel(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ebp
  unsigned __int64 v5; // rcx
  int v6; // edx
  int v7; // r8d
  cocos2d::CCString *v8; // rax
  char *CString; // rax
  size_t v10; // r8
  void **v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  void *v14; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v2 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(*(_QWORD *)(a1 + 712) + 64LL)); /*0x61b641*/
  v3 = v2; /*0x61b647*/
  v4 = 0; /*0x61b649*/
  if ( v2 > 0 ) /*0x61b64d*/
    v4 = (int)ceilf((float)((v2 - 1) / *(_DWORD *)(a1 + 1096))); /*0x61b664*/
  *(_OWORD *)Block = 0; /*0x61b66b*/
  v16 = 0; /*0x61b670*/
  v5 = 15; /*0x61b679*/
  v17 = 15; /*0x61b67e*/
  LOBYTE(Block[0]) = 0; /*0x61b683*/
  if ( v3 <= 0 ) /*0x61b68a*/
  {
    v16 = 10; /*0x61b6ee*/
    strcpy((char *)Block, "No matches"); /*0x61b6ff*/
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 96LL) * *(_DWORD *)(a1 + 1096); /*0x61b69b*/
    v7 = v3; /*0x61b6a2*/
    if ( v6 + *(_DWORD *)(a1 + 1096) < v3 ) /*0x61b6a7*/
      v7 = v6 + *(_DWORD *)(a1 + 1096); /*0x61b6a7*/
    v8 = cocos2d::CCString::createWithFormat("%i to %i of %i", v6 + 1, v7, v3); /*0x61b6b7*/
    CString = (char *)cocos2d::CCString::getCString(v8); /*0x61b6c0*/
    v10 = -1; /*0x61b6c6*/
    do /*0x61b6d3*/
      ++v10; /*0x61b6d0*/
    while ( CString[v10] ); /*0x61b6d3*/
    sub_3F5A0(Block, CString, v10); /*0x61b6e2*/
    v5 = v17; /*0x61b6e7*/
  }
  v11 = Block; /*0x61b716*/
  if ( v5 > 0xF ) /*0x61b71f*/
    v11 = (void **)Block[0]; /*0x61b71f*/
  (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 800) + 360LL))(*(_QWORD *)(a1 + 800) + 360LL, v11); /*0x61b736*/
  LOBYTE(v12) = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 96LL) > 0; /*0x61b74a*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 808) + 336LL))(*(_QWORD *)(a1 + 808), v12); /*0x61b750*/
  LOBYTE(v13) = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 96LL) < v4; /*0x61b767*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 816) + 336LL))(*(_QWORD *)(a1 + 816), v13); /*0x61b76d*/
  if ( v17 > 0xF ) /*0x61b77d*/
  {
    v14 = Block[0]; /*0x61b782*/
    if ( v17 + 1 >= 0x1000 ) /*0x61b791*/
    {
      v14 = (void *)*((_QWORD *)Block[0] - 1); /*0x61b797*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F ) /*0x61b7a6*/
        invoke_watson(0, 0, 0, 0, 0); /*0x61b7bb*/
    }
    j_j_free(v14); /*0x61b7c2*/
  }
}

// [20/20] Address: 0x61bcb0
// Method: SFXBrowser::keyBackClicked
__int64 __fastcall SFXBrowser_keyBackClicked(__int64 a1)
{
  return sub_61BA90(a1 - 336, 0);
}
