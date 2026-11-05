#include <Geode/binding/ColorAction.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x35e980
// Method: ColorAction::~ColorAction
cocos2d::CCObject *__fastcall ColorAction__dtor_ColorAction(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject::~CCObject(Block); /*0x35e98f*/
  if ( (a2 & 1) != 0 ) /*0x35e998*/
    j_j_free(Block); /*0x35e9a2*/
  return Block; /*0x35e9a7*/
}

// [2/3] Address: 0x35f8c0
// Method: ColorAction::create
// Hidden C++ exception states: #wind=1
char *ColorAction_create()
{
  char *v1; // [rsp+30h] [rbp+8h]

  v1 = (char *)operator new(0xA8u); /*0x35f8ea*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v1); /*0x35f8f2*/
  *(_QWORD *)v1 = &ColorAction::`vftable'; /*0x35f8ff*/
  *((_WORD *)v1 + 28) = 0; /*0x35f902*/
  *((_QWORD *)v1 + 8) = 1065353216; /*0x35f908*/
  *((_DWORD *)v1 + 20) = 0; /*0x35f912*/
  v1[84] = 0; /*0x35f915*/
  *((_QWORD *)v1 + 11) = 0; /*0x35f918*/
  *((_DWORD *)v1 + 24) = 1065353216; /*0x35f91c*/
  *((_DWORD *)v1 + 25) = 1065353216; /*0x35f923*/
  *(_OWORD *)(v1 + 104) = xmmword_8F8490; /*0x35f931*/
  *((_DWORD *)v1 + 30) = 0; /*0x35f935*/
  *((_WORD *)v1 + 62) = 0; /*0x35f938*/
  v1[126] = 0; /*0x35f93c*/
  *((_QWORD *)v1 + 16) = 0; /*0x35f93f*/
  v1[136] = 0; /*0x35f946*/
  *((_QWORD *)v1 + 18) = 0; /*0x35f94c*/
  *((_QWORD *)v1 + 19) = 0; /*0x35f953*/
  *((_QWORD *)v1 + 20) = 0; /*0x35f95a*/
  *((_WORD *)v1 + 36) = -1; /*0x35f961*/
  v1[74] = -1; /*0x35f965*/
  *(_WORD *)(v1 + 75) = -1; /*0x35f969*/
  v1[77] = -1; /*0x35f96d*/
  *((_DWORD *)v1 + 22) = -1; /*0x35f971*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v1); /*0x35f97b*/
  return v1; /*0x35f984*/
}

// [3/3] Address: 0x360290
// Method: ColorAction::setupFromString
// Hidden C++ exception states: #wind=2
double __fastcall ColorAction_setupFromString(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v7; // [rsp+30h] [rbp-18h]

  v7 = a2; /*0x3602af*/
  *(_OWORD *)Block = 0; /*0x3602b7*/
  v4 = operator new(0x60u); /*0x3602c2*/
  *v4 = v4; /*0x3602c7*/
  v4[1] = v4; /*0x3602ca*/
  v4[2] = v4; /*0x3602ce*/
  *((_WORD *)v4 + 12) = 257; /*0x3602d2*/
  Block[0] = v4; /*0x3602d8*/
  GameLevelManager_onUpdateUserScoreCompleted(a2, (__int64)&unk_70F154, (__int64)Block); /*0x3602ec*/
  sub_360350(a1, Block); /*0x3602f9*/
  sub_D0820(Block, Block, *((_QWORD *)Block[0] + 1)); /*0x360312*/
  j_j_free(Block[0]); /*0x360321*/
  return sub_3C310(a2); /*0x36032f*/
}

// Address: 0x250dd0
// Method: ColorAction::writeSaveString
// Hidden C++ exception states: #wind=4
double __fastcall sub_250A50(__int64 a1, unsigned __int8 a2, int a3, int a4, __int64 a5, char a6)
{
  int v8; // r14d
  const char *v10; // rdx
  const char *v11; // rax
  cocos2d::CCString *v12; // rax
  const char *CString; // rsi
  __int64 v14; // rcx
  cocos2d::CCString *v15; // rax
  const char *v16; // rax
  cocos2d::CCString *v17; // rax
  char *v18; // rax
  __int64 v19; // rbx
  size_t v20; // r8
  char *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  void **v24; // rdx
  void *v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rdx
  double result; // xmm0_8
  uintptr_t Reserved; // [rsp+20h] [rbp-B9h]
  __int128 v30; // [rsp+48h] [rbp-91h] BYREF
  __int64 v31; // [rsp+58h] [rbp-81h]
  __int64 v32; // [rsp+60h] [rbp-79h]
  __int128 v33; // [rsp+68h] [rbp-71h] BYREF
  __int64 v34; // [rsp+78h] [rbp-61h]
  __int64 v35; // [rsp+80h] [rbp-59h]
  __int128 *v36; // [rsp+88h] [rbp-51h]
  void *Block[2]; // [rsp+98h] [rbp-41h] BYREF
  size_t Size[2]; // [rsp+A8h] [rbp-31h]
  _QWORD Src[4]; // [rsp+B8h] [rbp-21h] BYREF

  v8 = a2;
  v10 = "fReq";
  if ( a6 )
    v10 = "fReqI";
  if ( *(_QWORD *)(a5 + 16) )
  {
    v11 = (const char *)a5;
    if ( *(_QWORD *)(a5 + 24) > 0xFu )
      v11 = *(const char **)a5;
    v12 = cocos2d::CCString::createWithFormat("%sS_%i_%i_%s", v10, v8, a3, v11);
  }
  else
  {
    v12 = cocos2d::CCString::createWithFormat("%s_%i_%i", v10, v8, a3);
  }
  CString = cocos2d::CCString::getCString(v12);
  if ( !(unsigned __int8)sub_21E890(a1, CString) )
  {
    sub_21E960(a1, CString);
    GameLevelManager_getBasePostString(v14, Src);
    LODWORD(Reserved) = 103;
    v15 = cocos2d::CCString::createWithFormat(
            "%c%s%s%c%c%s",
            87,
            "mfd",
            "2893",
            Reserved,
            98,
            (const char *)&word_708030);
    v16 = cocos2d::CCString::getCString(v15);
    v17 = cocos2d::CCString::createWithFormat("&page=%i&total=%i&secret=%s", a3, a4, v16);
    v18 = (char *)cocos2d::CCString::getCString(v17);
    v19 = -1;
    v20 = -1;
    do
      ++v20;
    while ( v18[v20] );
    sub_43D80(Src, v18, v20);
    if ( a6 )
    {
      v21 = "&getSent=2";
    }
    else
    {
      if ( !(_BYTE)v8 )
      {
LABEL_16:
        if ( *(_QWORD *)(a5 + 16) )
        {
          sub_43D80(Src, "&search=", 8u);
          sub_3E4F0(&v30, a5);
          v23 = v22;
          if ( *(_QWORD *)(v22 + 16) )
          {
            cocos2d::ZipUtils::base64URLEncode(Block, v22);
          }
          else
          {
            *(_OWORD *)Block = 0;
            *(_OWORD *)Size = 0;
            *(_OWORD *)Block = *(_OWORD *)v22;
            *(_OWORD *)Size = *(_OWORD *)(v22 + 16);
            *(_QWORD *)(v22 + 16) = 0;
            *(_QWORD *)(v22 + 24) = 15;
            *(_BYTE *)v22 = 0;
          }
          sub_3C310(v23);
          v24 = Block;
          if ( Size[1] > 0xF )
            v24 = (void **)Block[0];
          sub_43D80(Src, v24, Size[0]);
          if ( Size[1] > 0xF )
          {
            v25 = Block[0];
            if ( Size[1] + 1 >= 0x1000 )
            {
              v25 = (void *)*((_QWORD *)Block[0] - 1);
              if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F )
                invoke_watson(0, 0, 0, 0, 0);
            }
            j_j_free(v25);
          }
        }
        v36 = &v30;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v26 = -1;
        do
          ++v26;
        while ( CString[v26] );
        sub_3C230(&v33);
        v27 = Src;
        if ( Src[3] > 0xFu )
          v27 = (_QWORD *)Src[0];
        v30 = 0;
        v31 = 0;
        v32 = 0;
        do
          ++v19;
        while ( *((_BYTE *)v27 + v19) );
        sub_3C230(&v30);
        *(_OWORD *)Block = 0;
        Size[0] = 0;
        Size[1] = 0;
        Block[0] = (void *)sub_3C460(64);
        Size[0] = 60;
        Size[1] = 63;
        strcpy((char *)Block[0], "https://www.boomlings.com/database/getGJFriendRequests20.php");
        sub_216210(a1, Block, &v30, &v33, 34);
        return sub_3C310(Src);
      }
      v21 = "&getSent=1";
    }
    sub_43D80(Src, v21, 0xAu);
    goto LABEL_16;
  }
  return result;
}
