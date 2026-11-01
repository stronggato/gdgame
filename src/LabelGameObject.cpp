#include <Geode/binding/LabelGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0x6332a0
// Method: LabelGameObject::getTextKerning
__int64 __fastcall LabelGameObject_getTextKerning(__int64 a1)
{
  return *(unsigned int *)(a1 + 1924); /*0x6332a6*/
}

// [2/14] Address: 0x6332b0
// Method: LabelGameObject::~LabelGameObject
_QWORD *__fastcall LabelGameObject__dtor_LabelGameObject(_QWORD *Block, char a2)
{
  *Block = &LabelGameObject::`vftable'; /*0x6332c4*/
  Block[40] = &LabelGameObject::`vftable'; /*0x6332d0*/
  Block[43] = &LabelGameObject::`vftable'; /*0x6332de*/
  sub_3C310(Block + 234); /*0x6332ec*/
  *Block = &EffectGameObject::`vftable'; /*0x6332fb*/
  Block[40] = &EffectGameObject::`vftable'; /*0x633305*/
  Block[43] = &EffectGameObject::`vftable'; /*0x633313*/
  TextGameObject__dtor_TextGameObject(Block); /*0x63331a*/
  if ( (a2 & 1) != 0 ) /*0x633322*/
    j_j_free(Block); /*0x63332c*/
  return Block; /*0x633331*/
}

// [3/14] Address: 0x64fb30
// Method: LabelGameObject::init
char __fastcall LabelGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x64fb3d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eCounterBtn_001.png") ) /*0x64fb47*/
    return 0; /*0x64fb68*/
  sub_287800(a1); /*0x64fb54*/
  *(_BYTE *)(a1 + 313) = 0; /*0x64fb5b*/
  return 1; /*0x64fb62*/
}

// [4/14] Address: 0x64fb70
// Method: LabelGameObject::setupCustomSprites
// Hidden C++ exception states: #wind=1
double __fastcall LabelGameObject_setupCustomSprites(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-20h]

  v9 = a2; /*0x64fb8f*/
  v4 = sub_3E4F0(&v6, a2); /*0x64fb99*/
  GameObject_setupCustomSprites(a1, v4); /*0x64fba4*/
  if ( *(_DWORD *)(a1 + 1036) == 1615 ) /*0x64fbb3*/
  {
    *(_BYTE *)(a1 + 559) = 1; /*0x64fbb5*/
    v6 = 0; /*0x64fbbf*/
    v7 = 1; /*0x64fbc4*/
    v8 = 15; /*0x64fbcd*/
    LOWORD(v6) = 48; /*0x64fbd6*/
    sub_64FC10(a1, &v6); /*0x64fbe5*/
  }
  return sub_3C310(a2); /*0x64fbf3*/
}

// [5/14] Address: 0x64fe00
// Method: LabelGameObject::removeLabel
// Hidden C++ exception states: #wind=1
void __fastcall LabelGameObject_removeLabel(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rdx
  void *Src[2]; // [rsp+20h] [rbp-28h] BYREF
  size_t Size; // [rsp+30h] [rbp-18h]
  unsigned __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 1856); /*0x64fe09*/
  if ( v2 ) /*0x64fe13*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 360) + 8LL))(v2 + 360); /*0x64fe23*/
    *(_OWORD *)Src = 0; /*0x64fe29*/
    Size = 0; /*0x64fe2e*/
    v8 = 0; /*0x64fe37*/
    v4 = -1; /*0x64fe40*/
    do /*0x64fe53*/
      ++v4; /*0x64fe50*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x64fe53*/
    sub_3C230(Src); /*0x64fe62*/
    if ( !*(_BYTE *)(a1 + 1928) ) /*0x64fe71*/
    {
      if ( (void **)(a1 + 1872) != Src ) /*0x64fe89*/
      {
        v5 = Src; /*0x64fe8b*/
        if ( v8 > 0xF ) /*0x64fe96*/
          v5 = (void **)Src[0]; /*0x64fe96*/
        sub_3F5A0((void *)(a1 + 1872), v5, Size); /*0x64fea1*/
      }
      *(_BYTE *)(a1 + 1864) = 1; /*0x64fea6*/
    }
    sub_3C310(Src); /*0x64feb2*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1856) + 528LL))(*(_QWORD *)(a1 + 1856)); /*0x64fec1*/
    *(_QWORD *)(a1 + 1856) = 0; /*0x64fec7*/
  }
}

// [6/14] Address: 0x64fee0
// Method: LabelGameObject::setOpacity
__int64 __fastcall LabelGameObject_setOpacity(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = GameObject_setOpacity(a1, a2); /*0x64fee9*/
  v4 = *(_QWORD *)(a1 + 1536); /*0x64feee*/
  if ( v4 ) /*0x64fef8*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 368) + 40LL))( /*0x64ff0d*/
             v4 + 368,
             *(unsigned __int8 *)(a1 + 9));
  return result; /*0x64ff11*/
}

// [7/14] Address: 0x64ff20
// Method: LabelGameObject::updateTextKerning
__int64 __fastcall LabelGameObject_updateTextKerning(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1856); /*0x64ff20*/
  *(_DWORD *)(a1 + 1924) = a2; /*0x64ff27*/
  if ( result ) /*0x64ff30*/
    *(_DWORD *)(result + 528) = a2; /*0x64ff32*/
  return result; /*0x64ff38*/
}

// [8/14] Address: 0x64ff40
// Method: LabelGameObject::updatePreviewLabel
// Hidden C++ exception states: #wind=1
__int64 __fastcall LabelGameObject_updatePreviewLabel(__int64 a1)
{
  int v2; // eax
  const char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  __int128 v7; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D0h]
  __int64 v9; // [rsp+38h] [rbp-C8h]
  __int128 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  _BYTE v13[528]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = *(_DWORD *)(a1 + 1916); /*0x64ff69*/
  switch ( v2 ) /*0x64ff72*/
  {
    case -1: /*0x64ff72*/
      v7 = 0; /*0x64ff77*/
      v8 = 4; /*0x64ff7c*/
      v9 = 15; /*0x64ff85*/
      strcpy((char *)&v7, "C:GT"); /*0x64ff8e*/
      return LabelGameObject_updateLabel(a1, &v7); /*0x64ffa0*/
    case -2: /*0x64ff72*/
      v7 = 0; /*0x64ffb2*/
      v8 = 4; /*0x64ffb7*/
      v9 = 15; /*0x64ffc0*/
      strcpy((char *)&v7, "C:GP"); /*0x64ffc9*/
      return LabelGameObject_updateLabel(a1, &v7); /*0x64ffdb*/
    case -3: /*0x64ff72*/
      v7 = 0; /*0x64ffed*/
      v8 = 4; /*0x64fff2*/
      v9 = 15; /*0x64fffb*/
      strcpy((char *)&v7, "C:AT"); /*0x650004*/
      return LabelGameObject_updateLabel(a1, &v7); /*0x650016*/
    default:
      fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x650025*/
      *((_QWORD *)&v7 + 1) = 0; /*0x65002c*/
      v4 = "T:"; /*0x650046*/
      if ( !*(_BYTE *)(a1 + 1920) ) /*0x65003f*/
        v4 = "C:"; /*0x65004f*/
      *(_QWORD *)&v7 = v4; /*0x650056*/
      fmt::BasicWriter<char>::operator<<(v13, &v7); /*0x65005b*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x65006c*/
      v5 = fmt::BasicWriter<char>::c_str(v13); /*0x650077*/
      v10 = 0; /*0x650080*/
      v11 = 0; /*0x650085*/
      v12 = 0; /*0x65008e*/
      v6 = -1; /*0x650097*/
      do /*0x6500a3*/
        ++v6; /*0x6500a0*/
      while ( *(_BYTE *)(v5 + v6) ); /*0x6500a3*/
      sub_3C230(&v10); /*0x6500b2*/
      LabelGameObject_updateLabel(a1, &v10); /*0x6500bf*/
      return fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x6500ca*/
  }
}

// [9/14] Address: 0x6500f0
// Method: LabelGameObject::updateLabel
// Hidden C++ exception states: #wind=1
double __fastcall LabelGameObject_updateLabel(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx

  v2 = a2; /*0x650109*/
  if ( !*(_BYTE *)(a1 + 1928) ) /*0x650114*/
  {
    v4 = *(_QWORD *)(a1 + 1856); /*0x65011d*/
    if ( v4 ) /*0x650127*/
    {
      *(_DWORD *)(v4 + 528) = *(_DWORD *)(a1 + 1924); /*0x65012f*/
      if ( a2[3] > 0xFu ) /*0x65013a*/
        a2 = (_QWORD *)*a2; /*0x65013c*/
      (**(void (__fastcall ***)(__int64, _QWORD *))(*(_QWORD *)(a1 + 1856) + 360LL))(*(_QWORD *)(a1 + 1856) + 360LL, a2); /*0x650150*/
    }
    *(_BYTE *)(a1 + 1864) = 0; /*0x650152*/
  }
  return sub_3C310(v2); /*0x650161*/
}

// [10/14] Address: 0x650180
// Method: LabelGameObject::customObjectSetup
bool __fastcall LabelGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  unsigned int v13; // eax
  const char *v14; // rcx
  int v15; // eax
  const char *v16; // rcx
  __int64 *v17; // rbp
  __int64 v18; // rbx
  float v19; // xmm1_4
  __int64 v20; // rax
  const char *v21; // rcx
  char v23; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0; /*0x65018c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x6501a1*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x6501b1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x6501bd*/
      v8 = *(const char **)v8; /*0x6501bf*/
    v7 = atoi(v8); /*0x6501c2*/
  }
  else
  {
    v7 = 0; /*0x6501aa*/
  }
  *(_DWORD *)(a1 + 1696) = v7; /*0x6501c8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3112LL) ) /*0x6501d1*/
  {
    v10 = (const char *)(*(_QWORD *)a2 + 12448LL); /*0x6501e1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12472LL) > 0xFu ) /*0x6501ed*/
      v10 = *(const char **)v10; /*0x6501ef*/
    v9 = atoi(v10); /*0x6501f2*/
  }
  else
  {
    v9 = 0; /*0x6501da*/
  }
  *(_BYTE *)(a1 + 1912) = v9 != 0; /*0x6501fd*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3120LL) ) /*0x650206*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 12480LL); /*0x650216*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12504LL) > 0xFu ) /*0x650222*/
      v12 = *(const char **)v12; /*0x650224*/
    v11 = atoi(v12); /*0x650227*/
  }
  else
  {
    v11 = 0; /*0x65020f*/
  }
  *(_DWORD *)(a1 + 1916) = v11; /*0x65022d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3904LL) ) /*0x650236*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 15616LL); /*0x650246*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 15640LL) > 0xFu ) /*0x650252*/
      v14 = *(const char **)v14; /*0x650254*/
    v13 = atoi(v14); /*0x650257*/
  }
  else
  {
    v13 = 0; /*0x65023f*/
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1600LL))(a1, v13); /*0x65026c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3128LL) ) /*0x650272*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 12512LL); /*0x650282*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12536LL) > 0xFu ) /*0x65028e*/
      v16 = *(const char **)v16; /*0x650290*/
    v15 = atoi(v16); /*0x650293*/
  }
  else
  {
    v15 = 0; /*0x65027b*/
  }
  v17 = *(__int64 **)(a1 + 1856); /*0x650299*/
  *(_DWORD *)(a1 + 1908) = v15; /*0x6502a0*/
  if ( v17 ) /*0x6502a9*/
  {
    v18 = *v17; /*0x6502b0*/
    if ( v15 == 1 ) /*0x6502b7*/
    {
      v19 = 0.0; /*0x6502c1*/
    }
    else if ( v15 == 2 ) /*0x6502c9*/
    {
      v19 = 1.0; /*0x6502d3*/
    }
    else
    {
      v19 = 0.5; /*0x6502dd*/
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, v19, 0.5); /*0x6502ed*/
    (*(void (__fastcall **)(__int64 *, __int64))(v18 + 288))(v17, v20); /*0x6502f9*/
  }
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3728LL) ) /*0x650311*/
  {
    v21 = (const char *)(*(_QWORD *)a2 + 14912LL); /*0x65031d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14936LL) > 0xFu ) /*0x650329*/
      v21 = *(const char **)v21; /*0x65032b*/
    v3 = atoi(v21); /*0x650334*/
  }
  *(_BYTE *)(a1 + 1920) = v3 != 0; /*0x65033b*/
  return v3 != 0; /*0x650341*/
}

// [11/14] Address: 0x650350
// Method: LabelGameObject::setObjectColor
__int64 __fastcall LabelGameObject_setObjectColor(__int64 a1, __int16 *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = GameObject_setObjectColor(a1, a2); /*0x650359*/
  v4 = *(_QWORD *)(a1 + 1856); /*0x65035e*/
  if ( v4 ) /*0x650368*/
  {
    if ( !*(_BYTE *)(a1 + 1904) ) /*0x65036a*/
      return (**(__int64 (__fastcall ***)(__int64, __int64))(v4 + 368))(v4 + 368, a1 + 333); /*0x650389*/
  }
  return result; /*0x65038c*/
}

// [12/14] Address: 0x6503a0
// Method: LabelGameObject::addMainSpriteToParent
char __fastcall LabelGameObject_addMainSpriteToParent(__int64 a1, char a2)
{
  char result; // al
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h]

  result = GameObject_addMainSpriteToParent((_BYTE *)a1, a2); /*0x6503a9*/
  v4 = *(_QWORD *)(a1 + 1856); /*0x6503b5*/
  if ( *(_BYTE *)(a1 + 892) ) /*0x6503ae*/
    v5 = 0x100000302LL; /*0x6503be*/
  else
    v5 = 0x30300000001LL; /*0x6503d0*/
  if ( v4 ) /*0x6503e3*/
    return (**(__int64 (__fastcall ***)(__int64, __int64))(v4 + 320))(v4 + 320, v5); /*0x6503f9*/
  return result; /*0x6503fc*/
}

// [13/14] Address: 0x650410
// Method: LabelGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall LabelGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 updated; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x650440*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65044d*/
  updated = UpdateAccountSettingsPopup_init(a1, v12, a3); /*0x65045f*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, updated); /*0x650476*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x650485*/
  sub_3C310(v12); /*0x650491*/
  if ( *(_DWORD *)(a1 + 1696) ) /*0x65049d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6504a6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6504ab*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6504ba*/
    fmt::BasicWriter<char>::operator<<(v13, 80); /*0x6504ca*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6504d0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6504d5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6504e4*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x6504f5*/
  }
  if ( *(_BYTE *)(a1 + 1912) ) /*0x6504fb*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x650504*/
    *((_QWORD *)&v10 + 1) = 0; /*0x650509*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x650518*/
    fmt::BasicWriter<char>::operator<<(v13, 389); /*0x650528*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65052e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x650533*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x650542*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1912)); /*0x650554*/
  }
  if ( *(_DWORD *)(a1 + 1916) ) /*0x65055a*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x650563*/
    *((_QWORD *)&v10 + 1) = 0; /*0x650568*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x650577*/
    fmt::BasicWriter<char>::operator<<(v13, 390); /*0x650587*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65058d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x650592*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6505a1*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1916)); /*0x6505b2*/
  }
  if ( *(_DWORD *)(a1 + 1908) ) /*0x6505b8*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6505c1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6505c6*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6505d5*/
    fmt::BasicWriter<char>::operator<<(v13, 391); /*0x6505e5*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6505eb*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6505f0*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6505ff*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1908)); /*0x650610*/
  }
  if ( *(_BYTE *)(a1 + 1920) ) /*0x650616*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65061f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x650624*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x650633*/
    fmt::BasicWriter<char>::operator<<(v13, 466); /*0x650643*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x650649*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65064e*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65065d*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1920)); /*0x65066f*/
  }
  if ( *(_DWORD *)(a1 + 1924) ) /*0x650675*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65067e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x650683*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x650692*/
    fmt::BasicWriter<char>::operator<<(v13, 488); /*0x6506a2*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6506a8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6506ad*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6506bc*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1924)); /*0x6506cd*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x6506d8*/
  *(_OWORD *)a2 = 0; /*0x6506e1*/
  *(_QWORD *)(a2 + 16) = 0; /*0x6506e4*/
  *(_QWORD *)(a2 + 24) = 0; /*0x6506e8*/
  v8 = -1; /*0x6506ec*/
  do /*0x6506f6*/
    ++v8; /*0x6506f3*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x6506f6*/
  sub_3C230(a2); /*0x650703*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65070e*/
  return a2; /*0x650717*/
}

// [14/14] Address: 0x650740
// Method: LabelGameObject::resetObject
char __fastcall LabelGameObject_resetObject(__int64 a1)
{
  *(_BYTE *)(a1 + 1928) = 0; /*0x650740*/
  return EnhancedGameObject_resetObject(a1);
}
