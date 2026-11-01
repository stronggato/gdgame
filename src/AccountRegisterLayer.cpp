#include <Geode/binding/AccountRegisterLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0x8c9f0
// Method: AccountRegisterLayer::createTextLabel
// Hidden C++ exception states: #wind=1
struct cocos2d::CCLabelBMFont *__fastcall AccountRegisterLayer_createTextLabel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4)
{
  const char *v8; // rcx
  struct cocos2d::CCLabelBMFont *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]

  v16 = a3; /*0x8ca18*/
  v8 = (const char *)a3; /*0x8ca1d*/
  if ( *(_QWORD *)(a3 + 24) > 0xFu ) /*0x8ca25*/
    v8 = *(const char **)a3; /*0x8ca27*/
  v9 = cocos2d::CCLabelBMFont::create(v8, (const char *)&qword_6FFF68); /*0x8ca37*/
  v10 = *(_QWORD *)v9; /*0x8ca3a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v14, 0.0, 0.0); /*0x8ca48*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v10 + 288))(v9, v11); /*0x8ca54*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v15, (float)-*a4 * 0.5, (float)(a4[1] * 0.5) + 1.0); /*0x8ca88*/
  cocos2d::CCPoint::operator+(a2, v14, v12); /*0x8ca99*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v9 + 184LL))(v9, v14); /*0x8caaa*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v9 + 160LL))(v9); /*0x8cabe*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x8cad1*/
    *(_QWORD *)(a1 + 584),
    v9);
  sub_3C310(a3); /*0x8cadb*/
  return v9; /*0x8cae3*/
}

// [2/14] Address: 0x8cb00
// Method: AccountRegisterLayer::createTextInput
// Hidden C++ exception states: #wind=1
char *__fastcall AccountRegisterLayer_createTextInput(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 v8; // r8
  char *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx

  v8 = (__int64)a4; /*0x8cb29*/
  if ( (unsigned __int64)a4[3] > 0xF ) /*0x8cb31*/
    v8 = *a4; /*0x8cb33*/
  v9 = CCTextInputNode_create(a1, a2, v8); /*0x8cb68*/
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v9, 20); /*0x8cb85*/
  *((_DWORD *)v9 + 143) = 1061997773; /*0x8cb88*/
  sub_555B0(v9, v10); /*0x8cb95*/
  v11 = a1 + 544; /*0x8cb9a*/
  if ( !a1 ) /*0x8cba6*/
    v11 = 0; /*0x8cba6*/
  *((_QWORD *)v9 + 76) = v11; /*0x8cbaa*/
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, a5); /*0x8cbbe*/
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 184LL))(v9, a2); /*0x8cbca*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v9 + 75) + 336LL))(*((_QWORD *)v9 + 75), 0); /*0x8cbdc*/
  *((_WORD *)v9 + 290) = -21896; /*0x8cbe2*/
  v9[582] = -16; /*0x8cbeb*/
  sub_555B0(v9, v12); /*0x8cbf5*/
  *((_DWORD *)v9 + 144) = 1056964608; /*0x8cbfa*/
  sub_555B0(v9, v13); /*0x8cc07*/
  sub_3C310(a4); /*0x8cc10*/
  return v9; /*0x8cc18*/
}

// [3/14] Address: 0x8cc30
// Method: AccountRegisterLayer::registerAccountFinished
// Hidden C++ exception states: #wind=2
__int64 __fastcall AccountRegisterLayer_registerAccountFinished(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  void **v6; // rdx
  cocos2d::CCString *v7; // rax
  const char *CString; // rdi
  void *v9; // r8
  int v10; // ebp
  int v11; // eax
  __int64 v12; // rbx
  __int128 v14; // [rsp+58h] [rbp-70h] BYREF
  __int64 v15; // [rsp+68h] [rbp-60h]
  __int64 v16; // [rsp+70h] [rbp-58h]
  void *Block[2]; // [rsp+80h] [rbp-48h] BYREF
  __m128i si128; // [rsp+90h] [rbp-38h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 600LL) + 600LL; /*0x8cc68*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2); /*0x8cc72*/
  *(_OWORD *)Block = 0; /*0x8cc78*/
  si128 = 0; /*0x8cc83*/
  v4 = -1; /*0x8cc8c*/
  v5 = -1; /*0x8cc93*/
  do /*0x8cc99*/
    ++v5; /*0x8cc96*/
  while ( *(_BYTE *)(v3 + v5) ); /*0x8cc99*/
  sub_3C230(Block); /*0x8ccaa*/
  v6 = Block; /*0x8ccb0*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x8ccc1*/
    v6 = (void **)Block[0]; /*0x8ccc1*/
  v7 = cocos2d::CCString::createWithFormat( /*0x8ccd1*/
         "Thank you for registering.\n"
         "A confirmation email has been sent to your inbox <cy>%s</c>.\n"
         "Please <cg>activate</c> your account.",
         (const char *)v6);
  CString = cocos2d::CCString::getCString(v7); /*0x8cce0*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x8ccef*/
  {
    v9 = Block[0]; /*0x8ccf4*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x8cd06*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x8cd0c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x8cd1b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x8cd2c*/
    }
    j_j_free(v9); /*0x8cd36*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x8cd43*/
  LOBYTE(Block[0]) = 0; /*0x8cd4c*/
  v10 = a1 + 8; /*0x8cd5b*/
  if ( a1 == 664 ) /*0x8cd62*/
    v10 = 0; /*0x8cd62*/
  v14 = 0; /*0x8cd69*/
  v15 = 0; /*0x8cd6e*/
  v16 = 0; /*0x8cd73*/
  do /*0x8cd83*/
    ++v4; /*0x8cd80*/
  while ( CString[v4] ); /*0x8cd83*/
  sub_3C230(&v14); /*0x8cd94*/
  v11 = sub_3E4F0(Block, &v14); /*0x8cdb0*/
  v12 = FLAlertLayer_create_0(v10, (unsigned int)"Created", v11, (unsigned int)"OK", 0, 1134559232, 0, 0, 1065353216); /*0x8cdfd*/
  sub_3C310(&v14); /*0x8ce05*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 1); /*0x8ce19*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 1064LL))(v12); /*0x8ce29*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 104) + 336LL))(*(_QWORD *)(a1 + 104), 0); /*0x8ce3a*/
}

// [4/14] Address: 0x8ce70
// Method: AccountRegisterLayer::registerAccountFailed
__int64 __fastcall AccountRegisterLayer_registerAccountFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = a1 - 664; /*0x8ce76*/
  AccountRegisterLayer_updateLabel(a1 - 664); /*0x8ce80*/
  LOBYTE(v2) = 1; /*0x8ce85*/
  AccountRegisterLayer_toggleUI(v1, v2); /*0x8ce8a*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 768) + 336LL))(*(_QWORD *)(v1 + 768), 0);
}

// [5/14] Address: 0x8ceb0
// Method: AccountRegisterLayer::updateLabel
__int64 __fastcall AccountRegisterLayer_updateLabel(_QWORD *a1, int a2)
{
  const char *v3; // rdx
  __int64 v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int16 *); // rcx
  __int16 v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+3Ah] [rbp+12h]

  switch ( a2 ) /*0x8cee1*/
  {
    case -99: /*0x8cee1*/
      (**(void (__fastcall ***)(__int64, const char *))(a1[95] + 360LL))(a1[95] + 360LL, "Emails do not match"); /*0x8d03e*/
      v4 = a1[95]; /*0x8d040*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD00); /*0x8d047*/
    case -15: /*0x8cee1*/
      (**(void (__fastcall ***)(__int64, const char *))(a1[92] + 360LL))(a1[92] + 360LL, "Too common"); /*0x8d012*/
      v4 = a1[92]; /*0x8d014*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD00); /*0x8d01b*/
    case -14: /*0x8cee1*/
      (**(void (__fastcall ***)(__int64, const char *))(a1[92] + 360LL))(a1[92] + 360LL, "Invalid characters"); /*0x8cfef*/
      v4 = a1[92]; /*0x8cff1*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD00); /*0x8cff8*/
    case -9: /*0x8cee1*/
      v3 = "Too short. Minimum 3 characters"; /*0x8d01d*/
      goto LABEL_14; /*0x8d024*/
    case -8: /*0x8cee1*/
      (**(void (__fastcall ***)(__int64, const char *))(a1[92] + 360LL))(a1[92] + 360LL, "Minimum 8 characters"); /*0x8cfab*/
      v5 = (__int64 (__fastcall ***)(_QWORD, __int16 *))(a1[92] + 368LL); /*0x8cfb9*/
      v7 = -21896; /*0x8cfc0*/
      v8 = -16; /*0x8cfc7*/
      return (**v5)(v5, &v7); /*0x8cfd6*/
    case -7: /*0x8cee1*/
      (**(void (__fastcall ***)(__int64, const char *))(a1[93] + 360LL))(a1[93] + 360LL, "Passwords do not match"); /*0x8cf85*/
      v4 = a1[93]; /*0x8cf87*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD00); /*0x8cf8e*/
    case -6: /*0x8cee1*/
      (**(void (__fastcall ***)(__int64, const char *))(a1[94] + 360LL))(a1[94] + 360LL, "Cannot use this email"); /*0x8cf2d*/
      v4 = a1[94]; /*0x8cf2f*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD00); /*0x8cf36*/
    case -5: /*0x8cee1*/
      (**(void (__fastcall ***)(__int64, const char *))(a1[92] + 360LL))(a1[92] + 360LL, "Password is invalid"); /*0x8cf5f*/
      v4 = a1[92]; /*0x8cf61*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD00); /*0x8cf68*/
    case -4: /*0x8cee1*/
      v3 = "Username is invalid"; /*0x8cf3b*/
      goto LABEL_14; /*0x8cf42*/
    case -3: /*0x8cee1*/
      (**(void (__fastcall ***)(__int64, const char *))(a1[94] + 360LL))(a1[94] + 360LL, "Email is already in use"); /*0x8cf07*/
      v4 = a1[94]; /*0x8cf09*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD00); /*0x8cf10*/
    case -2: /*0x8cee1*/
      v3 = "Username is already in use"; /*0x8cee3*/
      goto LABEL_14; /*0x8ceea*/
    default:
      v3 = "Something went wrong."; /*0x8d049*/
LABEL_14:
      (**(void (__fastcall ***)(__int64, const char *))(a1[90] + 360LL))(a1[90] + 360LL, v3); /*0x8d050*/
      v4 = a1[90]; /*0x8d063*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 368))(v4 + 368, &word_6FDD00);
  }
}

// [6/14] Address: 0x8d120
// Method: AccountRegisterLayer::resetLabel
__int64 __fastcall AccountRegisterLayer_resetLabel(_QWORD *a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx

  v3 = a2 - 1; /*0x8d129*/
  if ( !v3 ) /*0x8d12c*/
  {
    (**(void (__fastcall ***)(__int64, __int128 *))(a1[90] + 360LL))(a1[90] + 360LL, &xmmword_7119A8); /*0x8d23e*/
    v7 = a1[90]; /*0x8d240*/
    return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v7 + 368))(v7 + 368, &word_6FDD04); /*0x8d240*/
  }
  v4 = v3 - 1; /*0x8d132*/
  if ( v4 ) /*0x8d135*/
  {
    v5 = v4 - 1; /*0x8d13b*/
    if ( v5 ) /*0x8d13e*/
    {
      v6 = v5 - 1; /*0x8d140*/
      if ( v6 ) /*0x8d143*/
      {
        if ( v6 != 1 ) /*0x8d148*/
          return result; /*0x8d148*/
      }
      else
      {
        (**(void (__fastcall ***)(__int64, int *))(a1[94] + 360LL))(a1[94] + 360LL, &dword_711AB4); /*0x8d168*/
        (**(void (__fastcall ***)(__int64, __int16 *))(a1[94] + 368LL))(a1[94] + 368LL, &word_6FDD04); /*0x8d182*/
      }
      (**(void (__fastcall ***)(__int64, __int64 *))(a1[95] + 360LL))(a1[95] + 360LL, &qword_7119E0); /*0x8d19c*/
      v7 = a1[95]; /*0x8d19e*/
    }
    else
    {
      (**(void (__fastcall ***)(__int64, __int128 *))(a1[93] + 360LL))(a1[93] + 360LL, &xmmword_711980); /*0x8d1c2*/
      v7 = a1[93]; /*0x8d1c4*/
    }
    return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v7 + 368))(v7 + 368, &word_6FDD04); /*0x8d25d*/
  }
  (**(void (__fastcall ***)(__int64, __int64 *))(a1[91] + 360LL))(a1[91] + 360LL, &qword_711960); /*0x8d1e5*/
  result = (**(__int64 (__fastcall ***)(__int64, __int16 *))(a1[91] + 368LL))(a1[91] + 368LL, &word_6FDD04); /*0x8d1ff*/
  v9 = a1[92]; /*0x8d201*/
  if ( v9 ) /*0x8d20b*/
    return (**(__int64 (__fastcall ***)(__int64, char *))(v9 + 360))(v9 + 360, &byte_6E86E0); /*0x8d223*/
  return result; /*0x8d14a*/
}

// [7/14] Address: 0x8d270
// Method: AccountRegisterLayer::FLAlert_Clicked
__int64 __fastcall AccountRegisterLayer_FLAlert_Clicked(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x8d27f*/
  if ( (_DWORD)result == 1 ) /*0x8d285*/
  {
    v4 = a1 - 672; /*0x8d287*/
    AccountRegisterLayer_disableNodes(v4); /*0x8d291*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 992LL))(v4, 0); /*0x8d29e*/
    LOBYTE(v5) = 1; /*0x8d2a7*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 520LL))(v4, v5); /*0x8d2b1*/
  }
  return result; /*0x8d2b8*/
}

// [8/14] Address: 0x8ddc0
// Method: AccountRegisterLayer::onClose
__int64 __fastcall AccountRegisterLayer_onClose(__int64 a1)
{
  __int64 v2; // rdx

  AccountRegisterLayer_disableNodes(a1); /*0x8ddc9*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x8ddd6*/
  LOBYTE(v2) = 1; /*0x8dddf*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2);
}

// [9/14] Address: 0x8ddf0
// Method: AccountRegisterLayer::keyBackClicked
__int64 __fastcall AccountRegisterLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = a1 - 336; /*0x8ddf6*/
  AccountRegisterLayer_disableNodes(a1 - 336); /*0x8de00*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x8de0d*/
  LOBYTE(v2) = 1; /*0x8de16*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v2);
}

// [10/14] Address: 0x8de30
// Method: AccountRegisterLayer::disableNodes
__int64 __fastcall AccountRegisterLayer_disableNodes(_QWORD **a1)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[85] + 1032LL))(a1[85], 0); /*0x8de45*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[86] + 1032LL))(a1[86], 0); /*0x8de57*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[87] + 1032LL))(a1[87], 0); /*0x8de69*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[88] + 1032LL))(a1[88], 0); /*0x8de7b*/
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1[89] + 1032LL))(a1[89], 0);
}

// [11/14] Address: 0x8dea0
// Method: AccountRegisterLayer::toggleUI
__int64 __fastcall AccountRegisterLayer_toggleUI(_QWORD **a1, unsigned __int8 a2)
{
  (*(void (__fastcall **)(_QWORD *))(*a1[69] + 1040LL))(a1[69]); /*0x8deba*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[85] + 920LL))(a1[85], a2); /*0x8decd*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[86] + 920LL))(a1[86], a2); /*0x8dee0*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[87] + 920LL))(a1[87], a2); /*0x8def3*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[88] + 920LL))(a1[88], a2); /*0x8df06*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[89] + 920LL))(a1[89], a2); /*0x8df19*/
  ((void (__fastcall *)(_QWORD **, _QWORD))(*a1)[115])(a1, a2); /*0x8df28*/
  return ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[124])(a1, a2);
}

// [12/14] Address: 0x8df50
// Method: AccountRegisterLayer::textInputClosed
// Hidden C++ exception states: #wind=4
void __fastcall AccountRegisterLayer_textInputClosed(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r13
  void **v13; // r15
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void **v17; // rsi
  __int64 v18; // rdi
  size_t v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  void **v24; // rcx
  size_t v25; // r12
  size_t v26; // r8
  int v27; // eax
  size_t v28; // r14
  void **v29; // rsi
  unsigned __int64 v30; // rdx
  void *v31; // rdi
  void **v32; // rcx
  size_t v33; // r8
  _BYTE *v34; // rax
  void **v35; // rdx
  unsigned __int64 v36; // rdi
  void **v37; // rcx
  size_t v38; // r8
  void **v39; // rcx
  __int64 v40; // rax
  void **v41; // rax
  _QWORD *v42; // r12
  void **v43; // rax
  _QWORD *v44; // rdi
  void **v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int64 v49; // r14
  size_t v50; // rsi
  void **v51; // r12
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r8
  void *v56; // r9
  void **v57; // rcx
  size_t v58; // r12
  size_t v59; // r8
  void **v60; // rcx
  size_t v61; // r8
  char v62; // al
  void *v63; // rcx
  void **v64; // rdx
  void **v65; // r14
  void **v66; // rcx
  size_t v67; // r8
  void **v68; // rcx
  __int64 v69; // rax
  void **v70; // rax
  void **v71; // rsi
  __int64 v72; // rdi
  size_t v73; // rbx
  char v74; // [rsp+30h] [rbp-89h]
  bool v75; // [rsp+30h] [rbp-89h]
  char v76; // [rsp+34h] [rbp-85h]
  char v77; // [rsp+34h] [rbp-85h]
  char v78; // [rsp+34h] [rbp-85h]
  __int128 Buf2; // [rsp+40h] [rbp-79h] BYREF
  __int64 v81; // [rsp+50h] [rbp-69h]
  __int64 v82; // [rsp+58h] [rbp-61h]
  _QWORD *v83; // [rsp+60h] [rbp-59h]
  int v84; // [rsp+68h] [rbp-51h]
  void *Block[2]; // [rsp+70h] [rbp-49h]
  __int64 v86; // [rsp+80h] [rbp-39h]
  __int64 v87; // [rsp+88h] [rbp-31h]
  void *Buf1[2]; // [rsp+90h] [rbp-29h] BYREF
  size_t Size; // [rsp+A0h] [rbp-19h]
  unsigned __int64 v90; // [rsp+A8h] [rbp-11h]
  void *Src[2]; // [rsp+B0h] [rbp-9h] BYREF
  size_t v92; // [rsp+C0h] [rbp+7h]
  unsigned __int64 v93; // [rsp+C8h] [rbp+Fh]

  v3 = a1; /*0x8df7d*/
  v84 = 0; /*0x8df88*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x8df9d*/
  *(_OWORD *)Src = 0; /*0x8dfa3*/
  v92 = 0; /*0x8dfa7*/
  v93 = 0; /*0x8dfab*/
  v5 = -1; /*0x8dfaf*/
  v6 = -1; /*0x8dfb6*/
  do /*0x8dfc3*/
    ++v6; /*0x8dfc0*/
  while ( *(_BYTE *)(v4 + v6) ); /*0x8dfc3*/
  sub_3C230(Src); /*0x8dfd0*/
  v83 = v3 - 68; /*0x8dfdd*/
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x8dfe7*/
  AccountRegisterLayer_resetLabel(v3 - 68, v7); /*0x8dfef*/
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x8dffa*/
  v12 = v93; /*0x8dffd*/
  v13 = (void **)Src[0]; /*0x8e001*/
  v14 = v8 - 1; /*0x8e005*/
  if ( !v14 ) /*0x8e008*/
  {
    Buf2 = 0; /*0x8e770*/
    v71 = Src; /*0x8e774*/
    if ( v93 > 0xF ) /*0x8e77c*/
      v71 = (void **)Src[0]; /*0x8e77c*/
    v72 = 0x7FFFFFFFFFFFFFFFLL; /*0x8e780*/
    v73 = v92; /*0x8e78a*/
    if ( v92 <= 0x7FFFFFFFFFFFFFFFLL ) /*0x8e791*/
    {
      if ( v92 > 0xF ) /*0x8e79b*/
      {
        if ( (v92 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x8e7c3*/
        {
          v72 = v92 | 0xF; /*0x8e7c5*/
          if ( (v92 | 0xF) < 0x16 ) /*0x8e7d0*/
            v72 = 22; /*0x8e7d0*/
        }
        *(_QWORD *)&Buf2 = sub_3C460(v72 + 1); /*0x8e7dd*/
        v81 = v73; /*0x8e7e1*/
        v82 = v72; /*0x8e7e5*/
        memcpy((void *)Buf2, v71, v73 + 1); /*0x8e7f3*/
      }
      else
      {
        v81 = v92; /*0x8e79d*/
        v82 = 15; /*0x8e7a7*/
        Buf2 = *(_OWORD *)v71; /*0x8e7ae*/
        v3 = a1; /*0x8e7b2*/
      }
      sub_3C310(&Buf2); /*0x8e7fc*/
      if ( v73 - 1 > 1 ) /*0x8e809*/
        goto LABEL_68; /*0x8e809*/
      (**(void (__fastcall ***)(__int64, const char *))(v3[22] + 360LL))( /*0x8e827*/
        v3[22] + 360LL,
        "Too short. Minimum 3 characters");
      v20 = v3[22]; /*0x8e829*/
LABEL_19:
      (**(void (__fastcall ***)(__int64, __int16 *))(v20 + 368))(v20 + 368, &word_6FDD00); /*0x8e0ef*/
      goto LABEL_68; /*0x8e102*/
    }
LABEL_144:
    sub_8D90(v10, v9, v11); /*0x8e864*/
  }
  v15 = v14 - 1; /*0x8e00e*/
  if ( v15 ) /*0x8e011*/
  {
    v16 = v15 - 1; /*0x8e017*/
    if ( !v16 ) /*0x8e01a*/
    {
      v21 = *(_QWORD *)(v3[18] + 600LL) + 600LL; /*0x8e115*/
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21); /*0x8e11f*/
      *(_OWORD *)Buf1 = 0; /*0x8e125*/
      Size = 0; /*0x8e129*/
      v90 = 0; /*0x8e12d*/
      v23 = -1; /*0x8e131*/
      do /*0x8e137*/
        ++v23; /*0x8e134*/
      while ( *(_BYTE *)(v22 + v23) ); /*0x8e137*/
      sub_3C230(Buf1); /*0x8e145*/
      *((_QWORD *)&Buf2 + 1) = 58; /*0x8e14e*/
      v81 = 9; /*0x8e157*/
      v82 = 15; /*0x8e161*/
      *(_QWORD *)&Buf2 = 0x64726F7773736150LL; /*0x8e16d*/
      v76 = 52; /*0x8e185*/
      v84 = 52; /*0x8e189*/
      v24 = Src; /*0x8e18c*/
      if ( v12 > 0xF ) /*0x8e193*/
        v24 = v13; /*0x8e193*/
      v25 = v92; /*0x8e197*/
      v26 = v92; /*0x8e19b*/
      if ( v92 > 9 ) /*0x8e1a1*/
        v26 = 9; /*0x8e1a1*/
      v27 = memcmp(v24, &Buf2, v26); /*0x8e1a9*/
      v28 = Size; /*0x8e1ae*/
      v29 = (void **)Buf1[0]; /*0x8e1b2*/
      if ( v27 || v25 != 9 ) /*0x8e1be*/
      {
        Block[1] = 0; /*0x8e1d2*/
        v31 = (void *)sub_3C460(32); /*0x8e1e4*/
        Block[0] = v31; /*0x8e1e7*/
        v86 = 17; /*0x8e1f0*/
        v87 = 31; /*0x8e1f4*/
        strcpy((char *)v31, "Confirm Password:"); /*0x8e203*/
        v76 = 60; /*0x8e214*/
        v32 = Buf1; /*0x8e21c*/
        if ( v90 > 0xF ) /*0x8e225*/
          v32 = v29; /*0x8e225*/
        v33 = v28; /*0x8e229*/
        if ( v28 > 0x11 ) /*0x8e22f*/
          v33 = 17; /*0x8e22f*/
        if ( !memcmp(v32, v31, v33) && v28 == 17 ) /*0x8e243*/
        {
          v30 = 31; /*0x8e245*/
          v74 = 1; /*0x8e24a*/
        }
        else
        {
          v74 = 0; /*0x8e251*/
          v30 = 31; /*0x8e256*/
        }
      }
      else
      {
        v30 = v87; /*0x8e1c0*/
        v31 = Block[0]; /*0x8e1c4*/
        v74 = 1; /*0x8e1c8*/
      }
      if ( (v76 & 8) != 0 && v30 > 0xF ) /*0x8e266*/
      {
        v34 = v31; /*0x8e26b*/
        if ( v30 + 1 >= 0x1000 ) /*0x8e275*/
        {
          v31 = (void *)*((_QWORD *)v31 - 1); /*0x8e27b*/
          if ( (unsigned __int64)(v34 - (_BYTE *)v31 - 8) > 0x1F ) /*0x8e28a*/
            invoke_watson(0, 0, 0, 0, 0); /*0x8e29f*/
        }
        j_j_free(v31); /*0x8e2a9*/
      }
      v35 = Buf1; /*0x8e2af*/
      v36 = v90; /*0x8e2b3*/
      if ( v90 > 0xF ) /*0x8e2bb*/
        v35 = v29; /*0x8e2bb*/
      v37 = Src; /*0x8e2bf*/
      if ( v12 > 0xF ) /*0x8e2c7*/
        v37 = v13; /*0x8e2c7*/
      v38 = v25; /*0x8e2cb*/
      if ( v28 < v25 ) /*0x8e2d1*/
        v38 = v28; /*0x8e2d1*/
      if ( memcmp(v37, v35, v38) || v25 < v28 || v25 > v28 ) /*0x8e2e3*/
      {
        v39 = Src; /*0x8e2e5*/
        if ( v12 > 0xF ) /*0x8e2ed*/
          v39 = v13; /*0x8e2ed*/
        v40 = -1; /*0x8e2f1*/
        do /*0x8e2f7*/
          ++v40; /*0x8e2f4*/
        while ( *((_BYTE *)v39 + v40) ); /*0x8e2f7*/
        if ( v40 ) /*0x8e300*/
        {
          v41 = Buf1; /*0x8e302*/
          if ( v36 > 0xF ) /*0x8e30a*/
            v41 = v29; /*0x8e30a*/
          do /*0x8e313*/
            ++v5; /*0x8e310*/
          while ( *((_BYTE *)v41 + v5) ); /*0x8e313*/
          if ( v5 && !v74 ) /*0x8e323*/
          {
            v42 = v83; /*0x8e325*/
            (**(void (__fastcall ***)(__int64, const char *))(v83[93] + 360LL))( /*0x8e342*/
              v83[93] + 360LL,
              "Passwords do not match");
            (**(void (__fastcall ***)(__int64, __int16 *))(v42[93] + 368LL))(v42[93] + 368LL, &word_6FDD00); /*0x8e35d*/
          }
        }
      }
      if ( v36 > 0xF ) /*0x8e364*/
      {
        v43 = v29; /*0x8e36a*/
        if ( v36 + 1 >= 0x1000 ) /*0x8e374*/
        {
          v29 = (void **)*(v29 - 1); /*0x8e37a*/
          if ( (unsigned __int64)((char *)v43 - (char *)v29 - 8) > 0x1F ) /*0x8e389*/
            invoke_watson(0, 0, 0, 0, 0); /*0x8e39e*/
        }
        j_j_free(v29); /*0x8e3a8*/
      }
      goto LABEL_68; /*0x8e3a8*/
    }
    if ( v16 != 1 ) /*0x8e023*/
    {
LABEL_68:
      v44 = a1; /*0x8e3b0*/
      goto LABEL_69; /*0x8e3b0*/
    }
    *(_OWORD *)Buf1 = 0; /*0x8e02c*/
    v17 = Src; /*0x8e030*/
    if ( v93 > 0xF ) /*0x8e038*/
      v17 = (void **)Src[0]; /*0x8e038*/
    v18 = 0x7FFFFFFFFFFFFFFFLL; /*0x8e03c*/
    v19 = v92; /*0x8e046*/
    if ( v92 <= 0x7FFFFFFFFFFFFFFFLL ) /*0x8e04d*/
    {
      if ( v92 > 0xF ) /*0x8e057*/
      {
        if ( (v92 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x8e07f*/
        {
          v18 = v92 | 0xF; /*0x8e081*/
          if ( (v92 | 0xF) < 0x16 ) /*0x8e08c*/
            v18 = 22; /*0x8e08c*/
        }
        Buf1[0] = (void *)sub_3C460(v18 + 1); /*0x8e099*/
        Size = v19; /*0x8e09d*/
        v90 = v18; /*0x8e0a1*/
        memcpy(Buf1[0], v17, v19 + 1); /*0x8e0af*/
      }
      else
      {
        Size = v92; /*0x8e059*/
        v90 = 15; /*0x8e063*/
        *(_OWORD *)Buf1 = *(_OWORD *)v17; /*0x8e06a*/
        v3 = a1; /*0x8e06e*/
      }
      if ( (unsigned __int8)AccountRegisterLayer_validEmail(v10, Buf1) || !v19 ) /*0x8e0c8*/
        goto LABEL_68; /*0x8e0c8*/
      (**(void (__fastcall ***)(__int64, const char *))(v3[26] + 360LL))(v3[26] + 360LL, "Cannot use this email"); /*0x8e0e6*/
      v20 = v3[26]; /*0x8e0e8*/
      goto LABEL_19; /*0x8e0e8*/
    }
    goto LABEL_144; /*0x8e04d*/
  }
  (**(void (__fastcall ***)(__int64, __int128 *))(v3[25] + 360LL))(v3[25] + 360LL, &xmmword_711980); /*0x8e421*/
  (**(void (__fastcall ***)(__int64, __int16 *))(v3[25] + 368LL))(v3[25] + 368LL, &word_6FDD04); /*0x8e43b*/
  v49 = 15; /*0x8e43d*/
  v50 = v92; /*0x8e443*/
  if ( v92 ) /*0x8e44a*/
  {
    *(_OWORD *)Buf1 = 0; /*0x8e473*/
    Size = 0; /*0x8e477*/
    v90 = 0; /*0x8e47b*/
    v51 = Src; /*0x8e47f*/
    if ( v12 > 0xF ) /*0x8e486*/
      v51 = v13; /*0x8e486*/
    v52 = 0x7FFFFFFFFFFFFFFFLL; /*0x8e48a*/
    if ( v92 > 0x7FFFFFFFFFFFFFFFLL ) /*0x8e497*/
      sub_8D90(v47, v46, v48); /*0x8e86a*/
    if ( v92 > 0xF ) /*0x8e4a0*/
    {
      if ( (v92 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x8e4be*/
      {
        v52 = v92 | 0xF; /*0x8e4c0*/
        if ( (v92 | 0xF) < 0x16 ) /*0x8e4cb*/
          v52 = 22; /*0x8e4cb*/
      }
      Buf1[0] = (void *)sub_3C460(v52 + 1); /*0x8e4d8*/
      Size = v50; /*0x8e4dc*/
      v90 = v52; /*0x8e4e0*/
      memcpy(Buf1[0], v51, v50 + 1); /*0x8e4ee*/
    }
    else
    {
      Size = v92; /*0x8e4a2*/
      v90 = 15; /*0x8e4a6*/
      *(_OWORD *)Buf1 = *(_OWORD *)v51; /*0x8e4af*/
    }
    sub_8E870(v83, Buf1); /*0x8e4fb*/
    v44 = a1; /*0x8e500*/
  }
  else
  {
    v44 = a1; /*0x8e44c*/
    (**(void (__fastcall ***)(__int64, char *))(a1[24] + 360LL))(a1[24] + 360LL, &byte_6E86E0); /*0x8e469*/
  }
  v53 = *(_QWORD *)(v44[19] + 600LL) + 600LL; /*0x8e516*/
  v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53); /*0x8e520*/
  *(_OWORD *)Buf1 = 0; /*0x8e526*/
  Size = 0; /*0x8e52a*/
  v90 = 0; /*0x8e52e*/
  v55 = -1; /*0x8e532*/
  do /*0x8e538*/
    ++v55; /*0x8e535*/
  while ( *(_BYTE *)(v54 + v55) ); /*0x8e538*/
  sub_3C230(Buf1); /*0x8e546*/
  *(_OWORD *)Block = 0; /*0x8e54f*/
  v56 = (void *)sub_3C460(32); /*0x8e55d*/
  Block[0] = v56; /*0x8e560*/
  v86 = 17; /*0x8e569*/
  v87 = 31; /*0x8e56d*/
  strcpy((char *)v56, "Confirm Password:"); /*0x8e57c*/
  v77 = 81; /*0x8e594*/
  v57 = Buf1; /*0x8e598*/
  if ( v90 > 0xF ) /*0x8e5a1*/
    v57 = (void **)Buf1[0]; /*0x8e5a1*/
  v58 = Size; /*0x8e5a6*/
  v59 = Size; /*0x8e5aa*/
  if ( Size > 0x11 ) /*0x8e5b0*/
    v59 = 17; /*0x8e5b0*/
  if ( !memcmp(v57, v56, v59) && v58 == 17 ) /*0x8e5c4*/
  {
    v49 = v82; /*0x8e5c6*/
    v75 = 1; /*0x8e5ca*/
  }
  else
  {
    *((_QWORD *)&Buf2 + 1) = 58; /*0x8e5d4*/
    v81 = 9; /*0x8e5dd*/
    v82 = 15; /*0x8e5e1*/
    *(_QWORD *)&Buf2 = 0x64726F7773736150LL; /*0x8e5ed*/
    v77 = 83; /*0x8e605*/
    v60 = Src; /*0x8e609*/
    if ( v12 > 0xF ) /*0x8e611*/
      v60 = v13; /*0x8e611*/
    v61 = v50; /*0x8e615*/
    if ( v50 > 9 ) /*0x8e61b*/
      v61 = 9; /*0x8e61b*/
    v75 = !memcmp(v60, &Buf2, v61) && v50 == 9; /*0x8e632*/
  }
  v62 = v77; /*0x8e63e*/
  if ( (v77 & 2) != 0 ) /*0x8e644*/
  {
    v62 = v77 & 0xFD; /*0x8e646*/
    v78 = v77 & 0xFD; /*0x8e649*/
    if ( v49 > 0xF ) /*0x8e651*/
    {
      v63 = (void *)Buf2; /*0x8e657*/
      if ( v49 + 1 >= 0x1000 ) /*0x8e665*/
      {
        v63 = *(void **)(Buf2 - 8); /*0x8e66b*/
        if ( (unsigned __int64)(Buf2 - (_QWORD)v63 - 8) > 0x1F ) /*0x8e67a*/
          invoke_watson(0, 0, 0, 0, 0); /*0x8e68f*/
      }
      j_j_free(v63); /*0x8e696*/
      v62 = v78; /*0x8e69b*/
    }
  }
  if ( (v62 & 1) != 0 ) /*0x8e6a1*/
    j_j_free(Block[0]); /*0x8e6ac*/
  v64 = Buf1; /*0x8e6b1*/
  v65 = (void **)Buf1[0]; /*0x8e6ba*/
  if ( v90 > 0xF ) /*0x8e6be*/
    v64 = (void **)Buf1[0]; /*0x8e6be*/
  v66 = Src; /*0x8e6c2*/
  if ( v12 > 0xF ) /*0x8e6ca*/
    v66 = v13; /*0x8e6ca*/
  v67 = v50; /*0x8e6ce*/
  if ( v58 < v50 ) /*0x8e6d4*/
    v67 = v58; /*0x8e6d4*/
  if ( memcmp(v66, v64, v67) || v50 < v58 || v50 > v58 ) /*0x8e6e6*/
  {
    v68 = Src; /*0x8e6e8*/
    if ( v12 > 0xF ) /*0x8e6f0*/
      v68 = v13; /*0x8e6f0*/
    v69 = -1; /*0x8e6f4*/
    do /*0x8e6fa*/
      ++v69; /*0x8e6f7*/
    while ( *((_BYTE *)v68 + v69) ); /*0x8e6fa*/
    if ( v69 ) /*0x8e703*/
    {
      v70 = Buf1; /*0x8e705*/
      if ( v90 > 0xF ) /*0x8e70e*/
        v70 = v65; /*0x8e70e*/
      do /*0x8e715*/
        ++v5; /*0x8e712*/
      while ( *((_BYTE *)v70 + v5) ); /*0x8e715*/
      if ( v5 && !v75 ) /*0x8e725*/
      {
        (**(void (__fastcall ***)(__int64, const char *))(v44[25] + 360LL))(v44[25] + 360LL, "Passwords do not match"); /*0x8e73f*/
        (**(void (__fastcall ***)(__int64, __int16 *))(v44[25] + 368LL))(v44[25] + 368LL, &word_6FDD00); /*0x8e759*/
      }
    }
  }
  sub_3C310(Buf1); /*0x8e760*/
LABEL_69:
  *((_BYTE *)v44 + 232) = 0; /*0x8e3b5*/
  if ( v12 > 0xF ) /*0x8e3c0*/
  {
    v45 = v13; /*0x8e3ca*/
    if ( v12 + 1 >= 0x1000 ) /*0x8e3d4*/
    {
      v13 = (void **)*(v13 - 1); /*0x8e3de*/
      if ( (unsigned __int64)((char *)v45 - (char *)v13 - 8) > 0x1F ) /*0x8e3ed*/
        invoke_watson(0, 0, 0, 0, 0); /*0x8e402*/
    }
    j_j_free(v13); /*0x8e838*/
  }
}

// [13/14] Address: 0x8f730
// Method: AccountRegisterLayer::allowTextInput
bool __fastcall AccountRegisterLayer_allowTextInput(__int64 a1)
{
  return *(_BYTE *)(a1 + 232) == 0; /*0x8f73a*/
}

// [14/14] Address: 0x8f740
// Method: AccountRegisterLayer::validEmail
_BOOL8 __fastcall AccountRegisterLayer_validEmail(__int64 a1, __int64 a2)
{
  char *v3; // rcx
  char v4; // al
  int v5; // r10d
  int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // eax
  bool v9; // bl

  v3 = (char *)a2; /*0x8f74e*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x8f751*/
    v3 = *(char **)a2; /*0x8f753*/
  if ( !v3 ) /*0x8f759*/
    goto LABEL_19; /*0x8f759*/
  v4 = *v3; /*0x8f75f*/
  if ( (*v3 < 97 || v4 > 122) && (unsigned __int8)(v4 - 65) > 0x19u ) /*0x8f76e*/
    goto LABEL_19; /*0x8f76e*/
  v5 = -1; /*0x8f770*/
  v6 = -1; /*0x8f777*/
  v7 = -1; /*0x8f77a*/
  do /*0x8f783*/
    ++v7; /*0x8f780*/
  while ( v3[v7] ); /*0x8f783*/
  v8 = 0; /*0x8f789*/
  if ( !(_DWORD)v7 ) /*0x8f78d*/
    goto LABEL_19; /*0x8f78d*/
  do /*0x8f7ae*/
  {
    if ( *v3 == 64 ) /*0x8f798*/
    {
      v5 = v8; /*0x8f79a*/
    }
    else if ( *v3 == 46 ) /*0x8f7a3*/
    {
      v6 = v8; /*0x8f7a3*/
    }
    ++v8; /*0x8f7a7*/
    ++v3; /*0x8f7a9*/
  }
  while ( v8 < (unsigned int)v7 ); /*0x8f7ae*/
  if ( v5 == -1 || v6 == -1 || v5 > v6 ) /*0x8f7bf*/
  {
LABEL_19:
    sub_3C310(a2); /*0x8f7e0*/
    return 0; /*0x8f7e5*/
  }
  else
  {
    v9 = v6 < (int)v7 - 1; /*0x8f7ca*/
    sub_3C310(a2); /*0x8f7cd*/
    return v9; /*0x8f7d2*/
  }
}
