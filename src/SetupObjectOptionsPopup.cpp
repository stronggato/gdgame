#include <Geode/binding/SetupObjectOptionsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0xe4360
// Method: SetupObjectOptionsPopup::onExtendedCollision
// Hidden C++ exception states: #wind=3
int __fastcall SetupObjectOptionsPopup_onExtendedCollision(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  const void *v5; // rcx
  size_t v6; // r8
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rsi
  const char *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+48h] [rbp-40h]
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]
  __int64 v24; // [rsp+68h] [rbp-20h]
  void *v25; // [rsp+98h] [rbp+10h]

  v3 = -1; /*0xe4375*/
  if ( !a2 ) /*0xe437f*/
    goto LABEL_9; /*0xe437f*/
  v4 = -1; /*0xe4381*/
  do /*0xe4387*/
    ++v4; /*0xe4384*/
  while ( a2[v4] ); /*0xe4387*/
  v5 = (const void *)(a1 + 32); /*0xe438d*/
  if ( *(_QWORD *)(a1 + 56) > 0xFu ) /*0xe4396*/
    v5 = *(const void **)(a1 + 32); /*0xe4398*/
  v6 = *(_QWORD *)(a1 + 48); /*0xe439c*/
  if ( v6 == v4 ) /*0xe43a3*/
  {
    if ( !v6 || (LODWORD(v4) = memcmp(v5, a2, v6), !(_DWORD)v4) ) /*0xe43b5*/
    {
LABEL_9:
      v7 = a1 - 664; /*0xe43bb*/
      v8 = a1; /*0xe43c2*/
      if ( a1 == 664 ) /*0xe43ca*/
        v8 = 0; /*0xe43ca*/
      v9 = *(_QWORD *)&qword_905FB0; /*0xe43ce*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xe43d8*/
      {
        v25 = operator new(0x690u); /*0xe43e4*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v25); /*0xe43f5*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xe4406*/
        v9 = *(_QWORD *)&qword_905FB0; /*0xe4408*/
      }
      if ( *(_QWORD *)(v9 + 1352) == v8 ) /*0xe4416*/
        *(_QWORD *)(v9 + 1352) = 0; /*0xe4418*/
      v10 = *(_QWORD *)(a1 + 64); /*0xe441f*/
      if ( v10 ) /*0xe4426*/
      {
        LoadingCircle_fadeAndRemove(v10); /*0xe4428*/
        *(_QWORD *)(a1 + 64) = 0; /*0xe442d*/
      }
      v11 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v10) + 272); /*0xe4437*/
      v19 = 0; /*0xe444e*/
      v20 = 0; /*0xe4453*/
      v21 = 15; /*0xe4458*/
      LOBYTE(v19) = 0; /*0xe4461*/
      v12 = "Level not found"; /*0xe446d*/
      if ( *(_BYTE *)(a1 + 12) ) /*0xe4474*/
        v12 = "List not found"; /*0xe4478*/
      v22 = 0; /*0xe447c*/
      v23 = 0; /*0xe4481*/
      v24 = 0; /*0xe4486*/
      do /*0xe4493*/
        ++v3; /*0xe4490*/
      while ( v12[v3] ); /*0xe4493*/
      sub_3C230(&v22); /*0xe44a1*/
      v13 = *v11; /*0xe44a6*/
      v16 = sub_3A4CA0(&v22, v14, v15, 150, &v19); /*0xe44ce*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v13 + 456))(v11, v16, 1000); /*0xe44df*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 992LL))(a1 - 664, 0); /*0xe44ed*/
      LOBYTE(v17) = 1; /*0xe44f6*/
      LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 520LL))(a1 - 664, v17); /*0xe44fb*/
    }
  }
  return v4; /*0xe4501*/
}

// [2/5] Address: 0x591870
// Method: SetupObjectOptionsPopup::determineStartValues
void __fastcall SetupObjectOptionsPopup_determineStartValues(__int64 a1)
{
  cocos2d::CCArray *v2; // rdi
  unsigned int v3; // esi
  struct cocos2d::CCObject *v4; // rax

  if ( *(_QWORD *)(a1 + 664) ) /*0x59187a*/
  {
    v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x591897*/
    cocos2d::CCArray::addObject(v2, *(struct cocos2d::CCObject **)(a1 + 664)); /*0x59189a*/
  }
  else
  {
    v2 = *(cocos2d::CCArray **)(a1 + 672); /*0x5918a2*/
  }
  if ( v2 ) /*0x5918ac*/
  {
    if ( cocos2d::CCArray::count(v2) ) /*0x5918b5*/
    {
      v3 = 0; /*0x5918cb*/
      *(_DWORD *)(a1 + 680) = 16843009; /*0x5918cd*/
      *(_DWORD *)(a1 + 684) = 16843009; /*0x5918d7*/
      *(_DWORD *)(a1 + 694) = 16843009; /*0x5918e1*/
      *(_DWORD *)(a1 + 688) = 16843009; /*0x5918eb*/
      *(_WORD *)(a1 + 692) = 257; /*0x5918f5*/
      *(_WORD *)(a1 + 698) = 257; /*0x5918fe*/
      *(_WORD *)(a1 + 701) = 257; /*0x591907*/
      *(_BYTE *)(a1 + 700) = 1; /*0x591910*/
      *(_WORD *)(a1 + 713) = 257; /*0x591917*/
      for ( *(_BYTE *)(a1 + 712) = 0; v3 < cocos2d::CCArray::count(v2); ++v3 ) /*0x591927*/
      {
        v4 = cocos2d::CCArray::objectAtIndex(v2, v3); /*0x59193a*/
        if ( !*((_BYTE *)v4 + 1305) ) /*0x591940*/
          *(_BYTE *)(a1 + 680) = 0; /*0x591949*/
        if ( !*((_BYTE *)v4 + 1051) ) /*0x591950*/
          *(_BYTE *)(a1 + 681) = 0; /*0x591959*/
        if ( !*((_BYTE *)v4 + 1050) ) /*0x591960*/
          *(_BYTE *)(a1 + 682) = 0; /*0x591969*/
        if ( !*((_BYTE *)v4 + 1158) ) /*0x591970*/
          *(_BYTE *)(a1 + 696) = 0; /*0x591979*/
        if ( !*((_BYTE *)v4 + 1159) ) /*0x591980*/
          *(_BYTE *)(a1 + 697) = 0; /*0x591989*/
        if ( !*((_BYTE *)v4 + 1267) ) /*0x591990*/
          *(_BYTE *)(a1 + 695) = 0; /*0x591999*/
        if ( !*((_BYTE *)v4 + 1052) ) /*0x5919a0*/
          *(_BYTE *)(a1 + 683) = 0; /*0x5919a9*/
        if ( !*((_BYTE *)v4 + 1053) ) /*0x5919b0*/
          *(_BYTE *)(a1 + 684) = 0; /*0x5919b9*/
        if ( !*((_BYTE *)v4 + 1222) ) /*0x5919c0*/
          *(_BYTE *)(a1 + 685) = 0; /*0x5919c9*/
        if ( !*((_BYTE *)v4 + 1301) ) /*0x5919d0*/
          *(_BYTE *)(a1 + 686) = 0; /*0x5919d9*/
        if ( !*((_BYTE *)v4 + 1302) ) /*0x5919e0*/
          *(_BYTE *)(a1 + 687) = 0; /*0x5919e9*/
        if ( !*((_BYTE *)v4 + 640) ) /*0x5919f0*/
          *(_BYTE *)(a1 + 701) = 0; /*0x5919f9*/
        if ( !*((_BYTE *)v4 + 977) ) /*0x591a00*/
          *(_BYTE *)(a1 + 693) = 0; /*0x591a09*/
        if ( !*((_BYTE *)v4 + 1303) ) /*0x591a10*/
          *(_BYTE *)(a1 + 688) = 0; /*0x591a19*/
        if ( !*((_BYTE *)v4 + 1304) ) /*0x591a20*/
          *(_BYTE *)(a1 + 689) = 0; /*0x591a29*/
        if ( !*((_BYTE *)v4 + 1308) ) /*0x591a30*/
          *(_BYTE *)(a1 + 690) = 0; /*0x591a39*/
        if ( !*((_BYTE *)v4 + 1309) ) /*0x591a40*/
          *(_BYTE *)(a1 + 691) = 0; /*0x591a49*/
        if ( !*((_BYTE *)v4 + 1310) ) /*0x591a50*/
          *(_BYTE *)(a1 + 692) = 0; /*0x591a59*/
        if ( !*((_BYTE *)v4 + 1307) ) /*0x591a60*/
          *(_BYTE *)(a1 + 694) = 0; /*0x591a69*/
        if ( !*((_BYTE *)v4 + 1306) ) /*0x591a70*/
          *(_BYTE *)(a1 + 698) = 0; /*0x591a79*/
        if ( !*((_BYTE *)v4 + 1028) ) /*0x591a80*/
          *(_BYTE *)(a1 + 699) = 0; /*0x591a89*/
        if ( *((_DWORD *)v4 + 314) == 1 ) /*0x591a97*/
        {
          *(_BYTE *)(a1 + 712) = 1; /*0x591a99*/
          if ( !*((_BYTE *)v4 + 1796) ) /*0x591aa0*/
            *(_BYTE *)(a1 + 700) = 0; /*0x591aa9*/
          if ( !*((_BYTE *)v4 + 1756) ) /*0x591ab0*/
            *(_BYTE *)(a1 + 713) = 0; /*0x591ab9*/
          if ( !*((_BYTE *)v4 + 1490) ) /*0x591ac0*/
            *(_BYTE *)(a1 + 714) = 0; /*0x591ac9*/
        }
      }
    }
  }
}

// [3/5] Address: 0x591dd0
// Method: SetupObjectOptionsPopup::onDisableObject
// Hidden C++ exception states: #wind=1
unsigned int __fastcall SetupObjectOptionsPopup_onDisableObject(__int64 a1)
{
  struct cocos2d::CCObject *v2; // rcx
  cocos2d::CCArray *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned int v6; // esi
  unsigned int result; // eax
  struct cocos2d::CCObject *v8; // rax
  struct cocos2d::CCObject *v9; // rbx
  void *v10; // [rsp+40h] [rbp+8h]

  *(_BYTE *)(a1 + 685) = *(_BYTE *)(a1 + 685) == 0; /*0x591def*/
  v2 = *(struct cocos2d::CCObject **)(a1 + 664); /*0x591df5*/
  if ( v2 ) /*0x591dff*/
    v3 = cocos2d::CCArray::createWithObject(v2); /*0x591e07*/
  else
    v3 = *(cocos2d::CCArray **)(a1 + 672); /*0x591e0c*/
  v4 = qword_905FD0; /*0x591e13*/
  if ( !qword_905FD0 ) /*0x591e1d*/
  {
    v10 = operator new(0x6E8u); /*0x591e29*/
    qword_905FD0 = sub_2723A0(v10); /*0x591e37*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x591e48*/
    v4 = qword_905FD0; /*0x591e4a*/
  }
  v5 = *(_QWORD *)(v4 + 568); /*0x591e51*/
  v6 = 0; /*0x591e58*/
  result = cocos2d::CCArray::count(v3); /*0x591e5d*/
  if ( result ) /*0x591e65*/
  {
    do /*0x591edf*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v3, v6); /*0x591e75*/
      v9 = v8; /*0x591e7b*/
      if ( v5 ) /*0x591e81*/
        GJBaseGameLayer_removeObjectFromSection(v5, (__int64)v8); /*0x591e89*/
      *((_BYTE *)v9 + 1222) = *(_BYTE *)(a1 + 685); /*0x591e96*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v9 + 1656LL))( /*0x591eaf*/
        v9,
        *((unsigned int *)v9 + 233));
      (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v9 + 1464LL))(v9); /*0x591eb8*/
      if ( v5 ) /*0x591ec1*/
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)v5 + 1192LL))(v5, v9); /*0x591ecc*/
      ++v6; /*0x591ed2*/
      result = cocos2d::CCArray::count(v3); /*0x591ed7*/
    }
    while ( v6 < result ); /*0x591edf*/
  }
  return result; /*0x591ee1*/
}

// [4/5] Address: 0x592820
// Method: SetupObjectOptionsPopup::onReverse
int __fastcall SetupObjectOptionsPopup_onReverse(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  bool v4; // cl
  unsigned int v5; // edi
  struct cocos2d::CCObject *v6; // rax

  v1 = *(_QWORD *)(a1 + 704); /*0x592826*/
  if ( v1 ) /*0x592833*/
    *(_BYTE *)(v1 + 805) = 1; /*0x592835*/
  v3 = *(_QWORD *)(a1 + 664); /*0x592843*/
  v4 = *(_BYTE *)(a1 + 700) == 0; /*0x59284a*/
  *(_BYTE *)(a1 + 700) = v4; /*0x59284d*/
  if ( v3 ) /*0x592856*/
  {
    if ( *(_DWORD *)(v3 + 1256) == 1 ) /*0x59285f*/
      *(_BYTE *)(v3 + 1796) = v4; /*0x592861*/
  }
  else
  {
    v5 = 0; /*0x592879*/
    for ( LODWORD(v3) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 672)); /*0x592883*/
          v5 < (unsigned int)v3;
          LODWORD(v3) = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 672)) )
    {
      v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 672), v5); /*0x592899*/
      if ( *((_DWORD *)v6 + 314) == 1 ) /*0x5928a6*/
        *((_BYTE *)v6 + 1796) = *(_BYTE *)(a1 + 700); /*0x5928af*/
      ++v5; /*0x5928bc*/
    }
  }
  return v3; /*0x592867*/
}

// [5/5] Address: 0x592a40
// Method: SetupObjectOptionsPopup::keyBackClicked
__int64 __fastcall SetupObjectOptionsPopup_keyBackClicked(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 1088LL))(a1 - 336, 0);
}
