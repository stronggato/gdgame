#include <Geode/binding/GJFriendRequest.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0xccbd0
// Method: GJFriendRequest::create
// Hidden C++ exception states: #wind=9
void __fastcall GJFriendRequest_create(__int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  signed __int64 v4; // rdx
  void *v5; // rcx
  void *v6; // r8
  __int64 v7; // rbx
  void **v8; // rax
  void **v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // ebx
  _DWORD *v13; // rax
  __int64 v14; // rax
  const char *v15; // r8
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r12d
  void **v23; // r14
  char *v24; // rsi
  unsigned __int64 v25; // r15
  __int64 v26; // rbx
  unsigned __int64 v27; // rdi
  cocos2d::CCObject *v28; // rbx
  int v29; // eax
  char *v30; // rax
  void *v31; // r8
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  void **v35; // [rsp+70h] [rbp-90h]
  __int128 *v36; // [rsp+78h] [rbp-88h]
  void *v37[2]; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  char v39[32]; // [rsp+98h] [rbp-68h] BYREF
  void *Block[2]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v42; // [rsp+D0h] [rbp-30h]
  _QWORD Src[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v45; // [rsp+F0h] [rbp-10h]
  _BYTE v46[32]; // [rsp+F8h] [rbp-8h] BYREF

  *(_OWORD *)v37 = 0; /*0xccc10*/
  v38 = 0; /*0xccc15*/
  *(_OWORD *)Block = 0; /*0xccc19*/
  v41 = 0; /*0xccc1d*/
  v42 = 15; /*0xccc21*/
  LOBYTE(Block[0]) = 0; /*0xccc29*/
  sub_9C250(Src); /*0xccc31*/
  LODWORD(v35) = 1; /*0xccc36*/
  if ( v44 ) /*0xccc45*/
  {
    v2 = Src; /*0xccc47*/
    if ( v45 > 0xF ) /*0xccc57*/
      v2 = (_QWORD *)Src[0]; /*0xccc57*/
    if ( *((_BYTE *)v2 + v44 - 1) != 47 ) /*0xccc60*/
    {
      v3 = Src; /*0xccc62*/
      if ( v45 > 0xF ) /*0xccc6a*/
        v3 = (_QWORD *)Src[0]; /*0xccc6a*/
      if ( *((_BYTE *)v3 + v44 - 1) != 92 ) /*0xccc73*/
        sub_43D80(Src, "/", 1u); /*0xccc86*/
    }
  }
  sub_CAF60(Src); /*0xccc97*/
  sub_3C310(Src); /*0xccca1*/
  v4 = v42; /*0xccca7*/
  if ( v42 > 0xF ) /*0xcccaf*/
  {
    v5 = Block[0]; /*0xcccb4*/
    if ( v42 + 1 >= 0x1000 ) /*0xcccc2*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0xcccc8*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0xcccd7*/
        invoke_watson(0, 0, 0, 0, 0); /*0xccce8*/
    }
    j_j_free(v5); /*0xcccef*/
  }
  v6 = v37[1]; /*0xccd02*/
  if ( v37[0] == v37[1] ) /*0xccd09*/
  {
    v35 = Block; /*0xccd13*/
    *(_OWORD *)Block = 0; /*0xccd1b*/
    v41 = 0; /*0xccd1f*/
    v42 = 15; /*0xccd23*/
    LOBYTE(Block[0]) = 0; /*0xccd2b*/
    *((_QWORD *)&v32 + 1) = 29552; /*0xccd2f*/
    v33 = 10; /*0xccd34*/
    v34 = 15; /*0xccd3d*/
    *(_QWORD *)&v32 = 0x756B636162206F4ELL; /*0xccd4e*/
    v7 = *a1; /*0xccd65*/
    v8 = Block; /*0xccd68*/
    v9 = (void **)&v32; /*0xccd6c*/
LABEL_16:
    v10 = sub_3A4CA0(v9, v4, v6, 150, v8); /*0xccd71*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v7 + 456))(a1, v10, 100); /*0xccd9d*/
    goto LABEL_49; /*0xccda3*/
  }
  v11 = 0; /*0xccda8*/
  v12 = 0; /*0xccdab*/
  v6 = (void *)((char *)v37[1] - (char *)v37[0]); /*0xccdae*/
  v4 = ((char *)v37[1] - (char *)v37[0]) / 168; /*0xccdc5*/
  if ( !v4 ) /*0xccdc8*/
    goto LABEL_53; /*0xccdc8*/
  v13 = (char *)v37[0] + 160; /*0xccdce*/
  do /*0xccdea*/
  {
    if ( *((_QWORD *)v13 - 14) ) /*0xccdd5*/
    {
      v11 += *v13; /*0xccddc*/
      ++v12; /*0xccdde*/
    }
    v13 += 42; /*0xccde0*/
    --v4; /*0xccde6*/
  }
  while ( v4 ); /*0xccdea*/
  if ( !v12 ) /*0xccdee*/
  {
LABEL_53:
    v36 = &v32; /*0xcd0c6*/
    v32 = 0; /*0xcd0ce*/
    v33 = 0; /*0xcd0d3*/
    v34 = 15; /*0xcd0d8*/
    LOBYTE(v32) = 0; /*0xcd0e1*/
    Block[1] = sub_7370; /*0xcd0e6*/
    v41 = 10; /*0xcd0ea*/
    v42 = 15; /*0xcd0f2*/
    Block[0] = (void *)0x756B636162206F4ELL; /*0xcd102*/
    v7 = *a1; /*0xcd116*/
    v8 = (void **)&v32; /*0xcd119*/
    v9 = Block; /*0xcd11e*/
    goto LABEL_16; /*0xcd122*/
  }
  v14 = sub_47D740(v46, v11); /*0xccdfa*/
  if ( *(_QWORD *)(v14 + 24) > 0xFu ) /*0xcce05*/
    v14 = *(_QWORD *)v14; /*0xcce07*/
  v15 = (const char *)&unk_70802C; /*0xcce11*/
  if ( v12 == 1 ) /*0xcce1b*/
    v15 = &byte_6E86E0; /*0xcce1b*/
  v16 = cocos2d::CCString::createWithFormat( /*0xcce2b*/
          "Delete all <cy>%i</c> backup%s (%s)?\n<cy>This cannot be undone.</c>",
          v12,
          v15,
          (const char *)v14);
  CString = cocos2d::CCString::getCString(v16); /*0xcce34*/
  *(_OWORD *)Block = 0; /*0xcce3d*/
  v41 = 0; /*0xcce41*/
  v42 = 0; /*0xcce45*/
  v18 = -1; /*0xcce49*/
  do /*0xcce53*/
    ++v18; /*0xcce50*/
  while ( CString[v18] ); /*0xcce53*/
  sub_3C230(Block); /*0xcce61*/
  sub_3C310(v46); /*0xcce6b*/
  v22 = (_DWORD)a1 + 1000; /*0xcce70*/
  if ( !a1 ) /*0xcce7a*/
    v22 = 0; /*0xcce7a*/
  v32 = 0; /*0xcce81*/
  v33 = 0; /*0xcce86*/
  v34 = 0; /*0xcce8b*/
  v23 = Block; /*0xcce90*/
  v24 = (char *)Block[0]; /*0xcce94*/
  v25 = v42; /*0xcce98*/
  if ( v42 > 0xF ) /*0xccea0*/
    v23 = (void **)Block[0]; /*0xccea0*/
  v26 = 0x7FFFFFFFFFFFFFFFLL; /*0xccea4*/
  v27 = v41; /*0xcceae*/
  if ( v41 > 0x7FFFFFFFFFFFFFFFLL ) /*0xcceb5*/
    sub_8D90(v20, v19, v21); /*0xcd15c*/
  if ( v41 > 0xF ) /*0xccebf*/
  {
    if ( (v41 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xccee4*/
    {
      v26 = v41 | 0xF; /*0xccee6*/
      if ( (v41 | 0xF) < 0x16 ) /*0xccef1*/
        v26 = 22; /*0xccef1*/
    }
    *(_QWORD *)&v32 = sub_3C460(v26 + 1); /*0xccefe*/
    v33 = v27; /*0xccf03*/
    v34 = v26; /*0xccf08*/
    memcpy((void *)v32, v23, v27 + 1); /*0xccf17*/
  }
  else
  {
    v33 = v41; /*0xccec1*/
    v34 = 15; /*0xccec6*/
    v32 = *(_OWORD *)v23; /*0xcced3*/
  }
  v35 = (void **)&v32; /*0xccf21*/
  v36 = (__int128 *)operator new(0x298u); /*0xccf30*/
  v28 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer((__int64)v36); /*0xccf3d*/
  if ( v28 ) /*0xccf43*/
  {
    sub_3E4F0(v39, &v32); /*0xccf52*/
    if ( (unsigned __int8)GJRateLevelLayer_init( /*0xccfa9*/
                            (_DWORD)v28,
                            v22,
                            (unsigned int)"Delete All",
                            v29,
                            (__int64)"Back",
                            (__int64)"Delete",
                            1136525312,
                            0,
                            0,
                            1065353216) )
    {
      cocos2d::CCObject::autorelease(v28); /*0xccfb5*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v28 + 8LL))(v28, 1); /*0xccfc5*/
      v28 = 0; /*0xccfc8*/
    }
  }
  sub_3C310(&v32); /*0xccfd0*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v28 + 64LL))(v28, 2); /*0xccfe0*/
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v28 + 1064LL))(v28); /*0xccfe9*/
  if ( v25 > 0xF ) /*0xccff4*/
  {
    v30 = v24; /*0xccffa*/
    if ( v25 + 1 >= 0x1000 ) /*0xcd004*/
    {
      v24 = (char *)*((_QWORD *)v24 - 1); /*0xcd00a*/
      if ( (unsigned __int64)(v30 - v24 - 8) > 0x1F ) /*0xcd019*/
        invoke_watson(0, 0, 0, 0, 0); /*0xcd02a*/
    }
    j_j_free(v24); /*0xcd034*/
  }
LABEL_49:
  if ( v37[0] ) /*0xcd04a*/
  {
    sub_CE060(v37[0], v37[1]); /*0xcd054*/
    v31 = v37[0]; /*0xcd05d*/
    if ( (unsigned __int64)(168 * ((signed __int64)(v38 - (unsigned __int64)v37[0]) / 168)) >= 0x1000 ) /*0xcd08c*/
    {
      v31 = (void *)*((_QWORD *)v37[0] - 1); /*0xcd096*/
      if ( (unsigned __int64)((char *)v37[0] - (char *)v31 - 8) > 0x1F ) /*0xcd0a5*/
        invoke_watson(0, 0, 0, 0, 0); /*0xcd0ba*/
    }
    j_j_free(v31); /*0xcd12a*/
  }
}

// [2/2] Address: 0x215be0
// Method: GJFriendRequest::~GJFriendRequest
cocos2d::CCNode *__fastcall GJFriendRequest__dtor_GJFriendRequest(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GJFriendRequest::`vftable'; /*0x215bf4*/
  sub_3C310((char *)Block + 368); /*0x215c00*/
  sub_3C310((char *)Block + 336); /*0x215c0c*/
  cocos2d::CCNode::~CCNode(Block); /*0x215c14*/
  if ( (a2 & 1) != 0 ) /*0x215c1d*/
    j_j_free(Block); /*0x215c27*/
  return Block; /*0x215c2c*/
}
