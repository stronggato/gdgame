#include <Geode/binding/GJMessagePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0xbd210
// Method: GJMessagePopup::create
// Hidden C++ exception states: #wind=1
char *__fastcall GJMessagePopup_create(__int64 a1)
{
  char *v2; // rdi

  v2 = (char *)operator new(0x498u); /*0xbd22c*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v2); /*0xbd237*/
  *(_QWORD *)v2 = &ReportPopup::`vftable'; /*0xbd243*/
  *((_QWORD *)v2 + 40) = &ReportPopup::`vftable'; /*0xbd24d*/
  *((_QWORD *)v2 + 41) = &ReportPopup::`vftable'; /*0xbd25b*/
  *((_QWORD *)v2 + 42) = &ReportPopup::`vftable'; /*0xbd269*/
  *((_QWORD *)v2 + 43) = &ReportPopup::`vftable'; /*0xbd277*/
  *((_QWORD *)v2 + 44) = &ReportPopup::`vftable'; /*0xbd285*/
  *((_QWORD *)v2 + 51) = &ReportPopup::`vftable'; /*0xbd293*/
  *((_QWORD *)v2 + 54) = &ReportPopup::`vftable'; /*0xbd2a1*/
  *((_QWORD *)v2 + 68) = &ReportPopup::`vftable'; /*0xbd2af*/
  *((_QWORD *)v2 + 83) = &ReportPopup::`vftable'; /*0xbd2bd*/
  *((_QWORD *)v2 + 84) = &ReportPopup::`vftable'; /*0xbd2cb*/
  *((_QWORD *)v2 + 125) = &ReportPopup::`vftable'; /*0xbd2d9*/
  *((_QWORD *)v2 + 126) = 0; /*0xbd2e2*/
  *((_DWORD *)v2 + 254) = 0; /*0xbd2e9*/
  *((_OWORD *)v2 + 64) = 0; /*0xbd2f2*/
  *((_QWORD *)v2 + 130) = 0; /*0xbd2f9*/
  *((_QWORD *)v2 + 131) = 15; /*0xbd300*/
  v2[1024] = 0; /*0xbd30b*/
  *((_OWORD *)v2 + 66) = 0; /*0xbd312*/
  *((_QWORD *)v2 + 134) = 0; /*0xbd319*/
  *((_QWORD *)v2 + 135) = 15; /*0xbd320*/
  v2[1056] = 0; /*0xbd32b*/
  *((_QWORD *)v2 + 136) = 0; /*0xbd332*/
  *(_OWORD *)(v2 + 1096) = 0; /*0xbd339*/
  *((_QWORD *)v2 + 139) = 0; /*0xbd340*/
  *((_QWORD *)v2 + 140) = 15; /*0xbd347*/
  v2[1096] = 0; /*0xbd352*/
  *((_QWORD *)v2 + 141) = 0; /*0xbd359*/
  *((_QWORD *)v2 + 142) = 0; /*0xbd360*/
  *((_QWORD *)v2 + 143) = 0; /*0xbd367*/
  *((_QWORD *)v2 + 144) = 0; /*0xbd36e*/
  *((_QWORD *)v2 + 145) = 0; /*0xbd375*/
  *((_QWORD *)v2 + 146) = 0; /*0xbd37c*/
  if ( (unsigned __int8)sub_BE960(v2, a1) ) /*0xbd389*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0xbd395*/
    return v2; /*0xbd39b*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0xbd3bd*/
    return 0; /*0xbd3c0*/
  }
}

// [2/10] Address: 0x395b10
// Method: GJMessagePopup::~GJMessagePopup
// Hidden C++ exception states: #wind=1
char *__fastcall GJMessagePopup__dtor_GJMessagePopup(char *Block, char a2)
{
  char *v4; // rdi
  char *v5; // rsi
  __int64 v6; // rax
  void *v7; // rax
  cocos2d::CCObject *v8; // rcx

  *(_QWORD *)Block = &GJMessagePopup::`vftable'; /*0x395b30*/
  *((_QWORD *)Block + 40) = &GJMessagePopup::`vftable'; /*0x395b3a*/
  *((_QWORD *)Block + 41) = &GJMessagePopup::`vftable'; /*0x395b48*/
  *((_QWORD *)Block + 42) = &GJMessagePopup::`vftable'; /*0x395b56*/
  *((_QWORD *)Block + 43) = &GJMessagePopup::`vftable'; /*0x395b64*/
  *((_QWORD *)Block + 44) = &GJMessagePopup::`vftable'; /*0x395b72*/
  *((_QWORD *)Block + 51) = &GJMessagePopup::`vftable'; /*0x395b80*/
  *((_QWORD *)Block + 54) = &GJMessagePopup::`vftable'; /*0x395b8e*/
  *((_QWORD *)Block + 68) = &GJMessagePopup::`vftable'; /*0x395b9c*/
  v4 = Block + 664; /*0x395ba3*/
  *((_QWORD *)Block + 83) = &GJMessagePopup::`vftable'; /*0x395bb1*/
  *((_QWORD *)Block + 84) = &GJMessagePopup::`vftable'; /*0x395bbb*/
  *((_QWORD *)Block + 85) = &GJMessagePopup::`vftable'; /*0x395bc9*/
  v5 = Block + 688; /*0x395bd0*/
  *((_QWORD *)Block + 86) = &GJMessagePopup::`vftable'; /*0x395bde*/
  v6 = *(_QWORD *)&qword_905FB0; /*0x395be1*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x395beb*/
  {
    v7 = operator new(0x690u); /*0x395bf2*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x395bff*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x395c10*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x395c12*/
  }
  if ( *(char **)(v6 + 1488) == v4 ) /*0x395c22*/
    *(_QWORD *)(v6 + 1488) = 0; /*0x395c24*/
  if ( *(char **)(v6 + 1520) == v5 ) /*0x395c32*/
    *(_QWORD *)(v6 + 1520) = 0; /*0x395c34*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 89); /*0x395c3b*/
  if ( v8 ) /*0x395c45*/
    cocos2d::CCObject::release(v8); /*0x395c47*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x395c50*/
  if ( (a2 & 1) != 0 ) /*0x395c5a*/
    j_j_free(Block); /*0x395c64*/
  return Block; /*0x395c6c*/
}

// [3/10] Address: 0x3a0400
// Method: GJMessagePopup::loadFromGJMessage
// Hidden C++ exception states: #wind=6
void __fastcall GJMessagePopup_loadFromGJMessage(__int64 a1, cocos2d::CCObject *a2)
{
  cocos2d::CCObject *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  bool v8; // bl
  __m128i v9; // xmm6
  void **v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  float *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  cocos2d::CCArray *v19; // rdi
  cocos2d::CCObject *v20; // rbx
  struct cocos2d::CCObject *v21; // rbx
  cocos2d::CCObject *v22; // rbx
  struct cocos2d::CCObject *v23; // rbx
  cocos2d::CCObject *v24; // rbx
  struct cocos2d::CCObject *v25; // rbx
  __int64 v26; // rax
  void *v27; // rcx
  void *v28; // [rsp+50h] [rbp-69h] BYREF
  __int128 *v29; // [rsp+58h] [rbp-61h] BYREF
  float v30[2]; // [rsp+60h] [rbp-59h] BYREF
  void *Block[2]; // [rsp+68h] [rbp-51h] BYREF
  __m128i v32; // [rsp+78h] [rbp-41h]
  char v33[8]; // [rsp+88h] [rbp-31h] BYREF
  char v34[8]; // [rsp+90h] [rbp-29h] BYREF
  char v35[8]; // [rsp+98h] [rbp-21h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-19h] BYREF
  __m128i v37; // [rsp+B0h] [rbp-9h]

  if ( a2 ) /*0x3a0403*/
  {
    cocos2d::CCObject::retain(a2); /*0x3a0444*/
    v4 = *(cocos2d::CCObject **)(a1 + 712); /*0x3a044a*/
    if ( v4 ) /*0x3a0454*/
      cocos2d::CCObject::release(v4); /*0x3a0456*/
    *(_QWORD *)(a1 + 712) = a2; /*0x3a045c*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x3a046a*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3a0474*/
    {
      v29 = (__int128 *)operator new(0x690u); /*0x3a0480*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v29); /*0x3a048d*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3a049e*/
      v5 = *(_QWORD *)&qword_905FB0; /*0x3a04a0*/
    }
    *(_QWORD *)(v5 + 1488) = a1 + 664; /*0x3a04a7*/
    v6 = cocos2d::CCDirector::sharedDirector(v4); /*0x3a04ae*/
    cocos2d::CCDirector::getWinSize(v6, v30); /*0x3a04bb*/
    Block[1] = &loc_6563 + 4; /*0x3a04c4*/
    v32.m128i_i64[0] = 10; /*0x3a04c8*/
    v7 = 15; /*0x3a04d0*/
    v32.m128i_i64[1] = 15; /*0x3a04d5*/
    Block[0] = (void *)0x617373656D206F4ELL; /*0x3a04e1*/
    sub_3E4F0(&v36, *(_QWORD *)(a1 + 712) + 368LL); /*0x3a0507*/
    v8 = v37.m128i_i64[0] != 0; /*0x3a0511*/
    sub_3C310(&v36); /*0x3a0518*/
    if ( v8 ) /*0x3a051f*/
    {
      sub_3E4F0(&v36, *(_QWORD *)(a1 + 712) + 368LL); /*0x3a0533*/
      *(_OWORD *)Block = v36; /*0x3a053c*/
      v9 = v37; /*0x3a0540*/
      v32 = v37; /*0x3a0544*/
      v37.m128i_i64[0] = 0; /*0x3a0548*/
      v37.m128i_i64[1] = 15; /*0x3a054c*/
      LOBYTE(v36) = 0; /*0x3a0550*/
      sub_3C310(&v36); /*0x3a0558*/
      v7 = _mm_srli_si128(v9, 8).m128i_u64[0]; /*0x3a0562*/
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v33, v30[0] * 0.5, (float)(v30[1] * 0.5) - 4.0); /*0x3a058d*/
    v29 = &v36; /*0x3a0597*/
    v10 = Block; /*0x3a059b*/
    if ( v7 > 0xF ) /*0x3a05a3*/
      v10 = (void **)Block[0]; /*0x3a05a3*/
    v36 = 0; /*0x3a05ab*/
    v37 = 0u; /*0x3a05af*/
    v11 = -1; /*0x3a05b7*/
    do /*0x3a05c3*/
      ++v11; /*0x3a05c0*/
    while ( *((_BYTE *)v10 + v11) ); /*0x3a05c3*/
    sub_3C230(&v36); /*0x3a05ce*/
    SetupSmartBlockLayer_onCreateAll(v12); /*0x3a05d4*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v35, 0.0, 0.5); /*0x3a05e9*/
    v13 = (float *)TextArea_create(&v36, "chatFont.fnt"); /*0x3a062f*/
    (*(void (__fastcall **)(_QWORD, float *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v13, 6); /*0x3a064c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, 0.0, 2.0); /*0x3a065e*/
    cocos2d::CCPoint::operator+(v33, &v29, v14); /*0x3a066f*/
    (*(void (__fastcall **)(float *, __int128 **))(*(_QWORD *)v13 + 184LL))(v13, &v29); /*0x3a067f*/
    v15 = *(_QWORD *)v13; /*0x3a0685*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, 0.0, 0.5); /*0x3a0692*/
    (*(void (__fastcall **)(float *, __int64))(v15 + 288))(v13, v16); /*0x3a069e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, (float)((float)(370.0 - v13[174]) * 0.5) - 185.0, 4.0); /*0x3a06cc*/
    cocos2d::CCPoint::operator+(v33, &v29, v17); /*0x3a06dd*/
    (*(void (__fastcall **)(float *, __int128 **))(*(_QWORD *)v13 + 184LL))(v13, &v29); /*0x3a06ed*/
    (*(void (__fastcall **)(float *))(*(_QWORD *)v13 + 160LL))(v13); /*0x3a06fc*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v34, 0.0, -98.0); /*0x3a0711*/
    v19 = (cocos2d::CCArray *)cocos2d::CCArray::create(v18); /*0x3a071d*/
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 712) + 465LL) ) /*0x3a073e*/
    {
      v28 = operator new(0x2C8u); /*0x3a0755*/
      v20 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v28); /*0x3a0761*/
      if ( v20 ) /*0x3a0767*/
      {
        if ( (unsigned __int8)ButtonSprite_init( /*0x3a079e*/
                                (_DWORD)v20,
                                (unsigned int)"Reply",
                                80,
                                0,
                                1057803469,
                                1,
                                (__int64)&qword_6FFF68,
                                (__int64)"GJ_button_01.png",
                                1104150528) )
        {
          cocos2d::CCObject::autorelease(v20); /*0x3a07aa*/
        }
        else
        {
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v20 + 8LL))(v20, 1); /*0x3a07ba*/
          v20 = 0; /*0x3a07bd*/
        }
      }
      v21 = (struct cocos2d::CCObject *)CCMenuItemSpriteExtra_create( /*0x3a07d4*/
                                          v20,
                                          0,
                                          a1,
                                          MusicDownloadManager_addSongObjectFromString);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x3a07eb*/
        *(_QWORD *)(a1 + 552),
        v21);
      cocos2d::CCArray::addObject(v19, v21); /*0x3a07f4*/
    }
    v28 = operator new(0x2C8u); /*0x3a0804*/
    v22 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v28); /*0x3a0810*/
    if ( v22 ) /*0x3a0816*/
    {
      if ( (unsigned __int8)ButtonSprite_init( /*0x3a084d*/
                              (_DWORD)v22,
                              (unsigned int)"Remove",
                              65,
                              0,
                              1057803469,
                              1,
                              (__int64)&qword_6FFF68,
                              (__int64)"GJ_button_04.png",
                              1104150528) )
      {
        cocos2d::CCObject::autorelease(v22); /*0x3a0859*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v22 + 8LL))(v22, 1); /*0x3a0869*/
        v22 = 0; /*0x3a086c*/
      }
    }
    v23 = (struct cocos2d::CCObject *)CCMenuItemSpriteExtra_create(v22, 0, a1, sub_3A0A10); /*0x3a0883*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x3a089a*/
      *(_QWORD *)(a1 + 552),
      v23);
    cocos2d::CCArray::addObject(v19, v23); /*0x3a08a3*/
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 712) + 465LL) ) /*0x3a08b0*/
    {
      v28 = operator new(0x2C8u); /*0x3a08c7*/
      v24 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v28); /*0x3a08d3*/
      if ( v24 ) /*0x3a08d9*/
      {
        if ( (unsigned __int8)ButtonSprite_init( /*0x3a0910*/
                                (_DWORD)v24,
                                (unsigned int)"Block",
                                65,
                                0,
                                1057803469,
                                1,
                                (__int64)&qword_6FFF68,
                                (__int64)"GJ_button_06.png",
                                1104150528) )
        {
          cocos2d::CCObject::autorelease(v24); /*0x3a091c*/
        }
        else
        {
          (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v24 + 8LL))(v24, 1); /*0x3a092c*/
          v24 = 0; /*0x3a092f*/
        }
      }
      v25 = (struct cocos2d::CCObject *)CCMenuItemSpriteExtra_create(v24, 0, a1, GJMessagePopup_onBlock); /*0x3a0946*/
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x3a095d*/
        *(_QWORD *)(a1 + 552),
        v25);
      cocos2d::CCArray::addObject(v19, v25); /*0x3a0966*/
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, (const struct cocos2d::CCPoint *)v34); /*0x3a0974*/
    GameToolbox_alignItemsHorisontally((__int64)v19, 35.0, v26, 0); /*0x3a098b*/
    if ( v32.m128i_i64[1] > 0xFuLL ) /*0x3a0999*/
    {
      v27 = Block[0]; /*0x3a099e*/
      if ( (unsigned __int64)(v32.m128i_i64[1] + 1) >= 0x1000 ) /*0x3a09ac*/
      {
        v27 = (void *)*((_QWORD *)Block[0] - 1); /*0x3a09b2*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v27 - 8) > 0x1F ) /*0x3a09c1*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3a09d2*/
      }
      j_j_free(v27); /*0x3a09d9*/
    }
  }
}

// [4/10] Address: 0x3a0ba0
// Method: GJMessagePopup::onBlock
// Hidden C++ exception states: #wind=4
double __fastcall GJMessagePopup_onBlock(__int64 a1)
{
  int v1; // edi
  const char *v2; // r8
  const char *v3; // rdx
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  void **v8; // rdx
  cocos2d::CCObject *v9; // rbx
  int v10; // eax
  void *v11; // rcx
  void *v13; // [rsp+58h] [rbp-41h]
  __int128 v14; // [rsp+60h] [rbp-39h] BYREF
  __int64 v15; // [rsp+70h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-21h]
  _BYTE v17[32]; // [rsp+80h] [rbp-19h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+17h]
  unsigned __int64 v20; // [rsp+B8h] [rbp+1Fh]
  _QWORD v21[3]; // [rsp+C0h] [rbp+27h] BYREF
  unsigned __int64 v22; // [rsp+D8h] [rbp+3Fh]

  v1 = a1; /*0x3a0bca*/
  sub_3E4F0(v21, *(_QWORD *)(a1 + 712) + 400LL); /*0x3a0be1*/
  v2 = (const char *)v21; /*0x3a0be7*/
  if ( v22 > 0xF ) /*0x3a0bf0*/
    v2 = (const char *)v21[0]; /*0x3a0bf0*/
  v3 = (const char *)v21; /*0x3a0bf5*/
  if ( v22 > 0xF ) /*0x3a0bf9*/
    v3 = (const char *)v21[0]; /*0x3a0bf9*/
  v4 = cocos2d::CCString::createWithFormat( /*0x3a0c05*/
         "Are you sure you want to block <cg>%s</c>?\n"
         "<cg>%s</c> will no longer be able to:\n"
         "- <cy>View your profile</c>\n"
         "- <cl>Send messages</c>\n"
         "- <cp>Send friend requests</c>\n"
         "- <cr>Messages from this user will be removed</c>",
         v3,
         v2);
  CString = cocos2d::CCString::getCString(v4); /*0x3a0c0e*/
  *(_OWORD *)Block = 0; /*0x3a0c17*/
  v19 = 0; /*0x3a0c1b*/
  v20 = 0; /*0x3a0c1f*/
  v6 = -1; /*0x3a0c23*/
  v7 = -1; /*0x3a0c2a*/
  do /*0x3a0c33*/
    ++v7; /*0x3a0c30*/
  while ( CString[v7] ); /*0x3a0c33*/
  sub_3C230(Block); /*0x3a0c41*/
  v8 = Block; /*0x3a0c47*/
  if ( v20 > 0xF ) /*0x3a0c50*/
    v8 = (void **)Block[0]; /*0x3a0c50*/
  v14 = 0; /*0x3a0c58*/
  v15 = 0; /*0x3a0c5c*/
  v16 = 0; /*0x3a0c60*/
  do /*0x3a0c67*/
    ++v6; /*0x3a0c64*/
  while ( *((_BYTE *)v8 + v6) ); /*0x3a0c67*/
  sub_3C230(&v14); /*0x3a0c74*/
  v13 = operator new(0x298u); /*0x3a0c8b*/
  v9 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer((__int64)v13); /*0x3a0c97*/
  if ( v9 ) /*0x3a0c9d*/
  {
    v10 = sub_3E4F0(v17, &v14); /*0x3a0cab*/
    if ( (unsigned __int8)GJRateLevelLayer_init( /*0x3a0d06*/
                            (_DWORD)v9,
                            v1 + 680,
                            (unsigned int)"Confirm Block",
                            v10,
                            (__int64)"Back",
                            (__int64)"Block",
                            1136525312,
                            0,
                            0,
                            1065353216) )
    {
      cocos2d::CCObject::autorelease(v9); /*0x3a0d12*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x3a0d22*/
      v9 = 0; /*0x3a0d25*/
    }
  }
  sub_3C310(&v14); /*0x3a0d2c*/
  sub_41FC0(*((_QWORD *)v9 + 77), "GJ_button_06.png"); /*0x3a0d3f*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 1); /*0x3a0d4f*/
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v9 + 1064LL))(v9); /*0x3a0d58*/
  if ( v20 > 0xF ) /*0x3a0d67*/
  {
    v11 = Block[0]; /*0x3a0d6c*/
    if ( v20 + 1 >= 0x1000 ) /*0x3a0d7a*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x3a0d80*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x3a0d8f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3a0da0*/
    }
    j_j_free(v11); /*0x3a0da7*/
  }
  return sub_3C310(v21); /*0x3a0db6*/
}

// [5/10] Address: 0x3a1090
// Method: GJMessagePopup::downloadMessageFinished
__int64 __fastcall GJMessagePopup_downloadMessageFinished(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 ) /*0x3a1093*/
  {
    v2 = *(_QWORD *)(a1 + 24); /*0x3a109a*/
    result = a2[80]; /*0x3a10a1*/
    v5 = a1 - 688; /*0x3a10a7*/
    if ( *(_DWORD *)(v2 + 320) == (_DWORD)result ) /*0x3a10b5*/
    {
      GJMessagePopup_loadFromGJMessage(v5, (cocos2d::CCObject *)a2); /*0x3a10b7*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x3a10c5*/
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 336LL))(*(_QWORD *)(a1 + 16), 0); /*0x3a10d4*/
    }
  }
  return result; /*0x3a10df*/
}

// [6/10] Address: 0x3a10e0
// Method: GJMessagePopup::downloadMessageFailed
__int64 __fastcall GJMessagePopup_downloadMessageFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = *(_QWORD *)(a1 + 24); /*0x3a10e6*/
  if ( *(_DWORD *)(result + 320) == a2 ) /*0x3a10f3*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x3a10fe*/
    LOBYTE(v4) = 1; /*0x3a1108*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 336LL))(*(_QWORD *)(a1 + 16), v4); /*0x3a1112*/
  }
  return result; /*0x3a1119*/
}

// [7/10] Address: 0x3a1120
// Method: GJMessagePopup::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall GJMessagePopup_uploadActionFinished(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // r8
  void *v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h]
  unsigned __int64 v13; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 48); /*0x3a1141*/
  if ( *(_DWORD *)(v4 + 320) != a2 && (a3 != 40 || a2 != *(_DWORD *)(v4 + 324)) ) /*0x3a115d*/
    return; /*0x3a115d*/
  *(_BYTE *)(a1 + 32) = 1; /*0x3a1163*/
  if ( !*(_QWORD *)(a1 + 72) ) /*0x3a1167*/
    return; /*0x3a116c*/
  v12 = 14; /*0x3a1179*/
  v13 = 15; /*0x3a1186*/
  strcpy((char *)Block, "Unknown action"); /*0x3a1192*/
  HIBYTE(Block[1]) = 0; /*0x3a119d*/
  if ( a3 == 45 ) /*0x3a11b3*/
  {
    v12 = 15; /*0x3a11b5*/
    v5 = 0x206567617373654DLL; /*0x3a11b9*/
    Block[1] = (void *)0x6465766F6D6572LL; /*0x3a11c7*/
LABEL_9:
    Block[0] = (void *)v5; /*0x3a1212*/
    goto LABEL_10; /*0x3a1212*/
  }
  if ( a3 == 40 ) /*0x3a11e9*/
  {
    v12 = 13; /*0x3a11eb*/
    v5 = 0x6F6C622072657355LL; /*0x3a11f3*/
    strcpy((char *)&Block[1], "cked!"); /*0x3a1201*/
    goto LABEL_9; /*0x3a1201*/
  }
LABEL_10:
  v8 = 0; /*0x3a1217*/
  v9 = 0; /*0x3a1222*/
  v10 = 0; /*0x3a122a*/
  v6 = -1; /*0x3a1232*/
  do /*0x3a1243*/
    ++v6; /*0x3a1240*/
  while ( *((_BYTE *)Block + v6) ); /*0x3a1243*/
  sub_3C230(&v8); /*0x3a124e*/
  UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 72), &v8); /*0x3a125b*/
  if ( v13 > 0xF ) /*0x3a1269*/
  {
    v7 = Block[0]; /*0x3a126e*/
    if ( v13 + 1 >= 0x1000 ) /*0x3a127c*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x3a1282*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x3a1291*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3a12a6*/
    }
    j_j_free(v7); /*0x3a12ad*/
  }
}

// [8/10] Address: 0x3a12d0
// Method: GJMessagePopup::uploadActionFailed
__int64 __fastcall GJMessagePopup_uploadActionFailed(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  result = *(_QWORD *)(a1 + 48); /*0x3a12d6*/
  if ( *(_DWORD *)(result + 320) == a2 || a3 == 40 && a2 == *(_DWORD *)(result + 324) ) /*0x3a12f5*/
  {
    if ( *(_QWORD *)(a1 + 72) ) /*0x3a12fb*/
    {
      v5 = 0; /*0x3a1311*/
      *(_QWORD *)&v5 = sub_3C460(32); /*0x3a1327*/
      v6 = 31; /*0x3a132f*/
      v7 = 31; /*0x3a1338*/
      strcpy((char *)v5, "Failed. Please try again later."); /*0x3a1341*/
      return UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 72), &v5); /*0x3a137c*/
    }
  }
  return result; /*0x3a1381*/
}

// [9/10] Address: 0x3a1390
// Method: GJMessagePopup::onClosePopup
__int64 __fastcall GJMessagePopup_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rdx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x3a13a8*/
  LOBYTE(v4) = 1; /*0x3a13b1*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x3a13b6*/
  if ( a2 == *(_QWORD *)(a1 + 64) ) /*0x3a13c0*/
  {
    v6 = *(_BYTE *)(a1 + 24) == 0; /*0x3a13c2*/
    *(_QWORD *)(a1 + 64) = 0; /*0x3a13c6*/
    if ( !v6 ) /*0x3a13ce*/
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 672) + 992LL))(a1 - 672, 0); /*0x3a13e0*/
      LOBYTE(v7) = 1; /*0x3a13f4*/
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 672) + 520LL))(a1 - 672, v7); /*0x3a13f6*/
    }
  }
  return result; /*0x3a13fc*/
}

// [10/10] Address: 0x3a1410
// Method: GJMessagePopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
void __fastcall GJMessagePopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-10h]
  void *v15; // [rsp+68h] [rbp+20h]
  void *v16; // [rsp+68h] [rbp+20h]
  void *v17; // [rsp+68h] [rbp+20h]

  if ( a3 ) /*0x3a1413*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x3a1439*/
    if ( v4 ) /*0x3a143c*/
    {
      if ( v4 == 1 ) /*0x3a1445*/
      {
        v5 = *(_QWORD *)&qword_905FB0; /*0x3a144b*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x3a1455*/
        {
          v15 = operator new(0x690u); /*0x3a1461*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v15); /*0x3a146f*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3a1480*/
          v5 = *(_QWORD *)&qword_905FB0; /*0x3a1482*/
        }
        if ( (unsigned __int8)sub_2386C0( /*0x3a1498*/
                                v5,
                                *(_QWORD *)(a1 + 32),
                                0,
                                *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 465LL)) )
        {
          v6 = a1 - 16; /*0x3a14ac*/
          if ( a1 == 680 ) /*0x3a14b5*/
            v6 = 0; /*0x3a14b5*/
          v7 = *(_QWORD *)&qword_905FB0; /*0x3a14b9*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0x3a14c3*/
          {
            v16 = operator new(0x690u); /*0x3a14cf*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v16); /*0x3a14dd*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3a14ee*/
            v7 = *(_QWORD *)&qword_905FB0; /*0x3a14f0*/
          }
          *(_QWORD *)(v7 + 1488) = v6; /*0x3a14f7*/
          v8 = *(_QWORD *)(a1 + 56); /*0x3a14fe*/
          if ( v8 ) /*0x3a1505*/
            *(_QWORD *)(v8 + 664) = 0; /*0x3a1507*/
          v12 = 0; /*0x3a1511*/
          *(_QWORD *)&v12 = sub_3C460(32); /*0x3a152a*/
          v13 = 19; /*0x3a152f*/
          v14 = 31; /*0x3a1538*/
          strcpy((char *)v12, "Deleting message..."); /*0x3a1548*/
          v9 = a1 - 8; /*0x3a1564*/
          if ( a1 == 680 ) /*0x3a156b*/
            v9 = 0; /*0x3a156b*/
          goto LABEL_20; /*0x3a156b*/
        }
      }
    }
    else
    {
      v10 = *(_QWORD *)&qword_905FB0; /*0x3a1574*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x3a157e*/
      {
        v17 = operator new(0x690u); /*0x3a158a*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0x3a1598*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3a15a9*/
        v10 = *(_QWORD *)&qword_905FB0; /*0x3a15ab*/
      }
      if ( (unsigned __int8)sub_253000(v10, *(unsigned int *)(*(_QWORD *)(a1 + 32) + 324LL)) ) /*0x3a15bc*/
      {
        v12 = 0; /*0x3a15c8*/
        *(_QWORD *)&v12 = sub_3C460(32); /*0x3a15e3*/
        v13 = 16; /*0x3a15e8*/
        v14 = 31; /*0x3a15f1*/
        strcpy((char *)v12, "Blocking user..."); /*0x3a1601*/
        v9 = a1 - 8; /*0x3a1608*/
LABEL_20:
        v11 = sub_39D2A0(v9, &v12); /*0x3a160c*/
        *(_QWORD *)(a1 + 56) = v11; /*0x3a1616*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 1064LL))(v11); /*0x3a1627*/
      }
    }
  }
}
