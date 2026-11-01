#include <Geode/binding/EndTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x658e10
// Method: EndTriggerGameObject::init
char __fastcall EndTriggerGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x658e1d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eEndBtn_001.png") ) /*0x658e27*/
    return 0; /*0x658e73*/
  sub_287800(a1); /*0x658e34*/
  *(_BYTE *)(a1 + 313) = 0; /*0x658e39*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x658e42*/
  *(_WORD *)(a1 + 1465) = -1; /*0x658e4c*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x658e55*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x658e5c*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x658e66*/
  return 1; /*0x658e6d*/
}

// [2/4] Address: 0x658e80
// Method: EndTriggerGameObject::triggerObject
// Hidden C++ exception states: #wind=2
void __fastcall EndTriggerGameObject_triggerObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v6; // r8
  char v7; // bl
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  _BYTE v11[24]; // [rsp+48h] [rbp-20h] BYREF

  if ( a4 ) /*0x658ea3*/
  {
    v6 = (void **)sub_18A9D0(v11, a4); /*0x658eb2*/
    v7 = 1; /*0x658eb5*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x658ebf*/
    v10 = 0; /*0x658ec5*/
    v6 = Block; /*0x658eca*/
    v7 = 2; /*0x658ecf*/
  }
  (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a2 + 1128LL))(a2, a1, v6); /*0x658ee1*/
  if ( (v7 & 2) != 0 ) /*0x658eeb*/
  {
    v7 &= ~2u; /*0x658eed*/
    v8 = Block[0]; /*0x658ef0*/
    if ( Block[0] ) /*0x658ef8*/
    {
      if ( ((v10 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x658f10*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x658f16*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x658f25*/
          invoke_watson(0, 0, 0, 0, 0); /*0x658f36*/
      }
      j_j_free(v8); /*0x658f3d*/
      *(_OWORD *)Block = 0; /*0x658f45*/
      v10 = 0; /*0x658f4b*/
    }
  }
  if ( (v7 & 1) != 0 ) /*0x658f53*/
    sub_685C0(v11); /*0x658f5a*/
}

// [3/4] Address: 0x658f80
// Method: EndTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall EndTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x658fb0*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x658fbd*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x658fcf*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x658fe6*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x658ff5*/
  sub_3C310(v12); /*0x659001*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x65900d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x659016*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65901b*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65902a*/
    fmt::BasicWriter<char>::operator<<(v13, 51); /*0x65903a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x659040*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659045*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659054*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x659065*/
  }
  if ( *(_DWORD *)(a1 + 1484) ) /*0x65906b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x659074*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659079*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659088*/
    fmt::BasicWriter<char>::operator<<(v13, 71); /*0x659098*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65909e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6590a3*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6590b2*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1484)); /*0x6590c3*/
  }
  if ( *(_BYTE *)(a1 + 1856) ) /*0x6590c9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6590d2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6590d7*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6590e6*/
    fmt::BasicWriter<char>::operator<<(v13, 460); /*0x6590f6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6590fc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659101*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659110*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1856)); /*0x659122*/
  }
  if ( *(_BYTE *)(a1 + 1857) ) /*0x659128*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x659131*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659136*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x659145*/
    fmt::BasicWriter<char>::operator<<(v13, 461); /*0x659155*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65915b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659160*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65916f*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1857)); /*0x659181*/
  }
  if ( *(_BYTE *)(a1 + 1858) ) /*0x659187*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x659190*/
    *((_QWORD *)&v10 + 1) = 0; /*0x659195*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6591a4*/
    fmt::BasicWriter<char>::operator<<(v13, 487); /*0x6591b4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6591ba*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6591bf*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6591ce*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1858)); /*0x6591e0*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x6591eb*/
  *(_OWORD *)a2 = 0; /*0x6591f4*/
  *(_QWORD *)(a2 + 16) = 0; /*0x6591f7*/
  *(_QWORD *)(a2 + 24) = 0; /*0x6591fb*/
  v8 = -1; /*0x6591ff*/
  do /*0x659209*/
    ++v8; /*0x659206*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x659209*/
  sub_3C230(a2); /*0x659216*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x659221*/
  return a2; /*0x65922a*/
}

// [4/4] Address: 0x659250
// Method: EndTriggerGameObject::customObjectSetup
bool __fastcall EndTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  int v14; // eax
  const char *v15; // rcx
  const char *v16; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x659273*/
  v6 = 9999; /*0x65927b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x659280*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x659293*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65929f*/
      v9 = *(const char **)v9; /*0x6592a1*/
    v8 = atoi(v9); /*0x6592a4*/
    v7 = 0; /*0x6592aa*/
    if ( v8 < 0 ) /*0x6592ae*/
      v8 = 0; /*0x6592ae*/
    if ( v8 > 9999 ) /*0x6592b3*/
      v8 = 9999; /*0x6592b5*/
  }
  else
  {
    v7 = 0; /*0x65928a*/
    v8 = 0; /*0x65928c*/
  }
  *(_DWORD *)(a1 + 1480) = v8; /*0x6592b7*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x6592c0*/
  {
    v10 = 0; /*0x6592ca*/
LABEL_16:
    v6 = v10; /*0x6592f1*/
    goto LABEL_17; /*0x6592f1*/
  }
  v11 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x6592d1*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x6592dd*/
    v11 = *(const char **)v11; /*0x6592df*/
  v10 = atoi(v11); /*0x6592e2*/
  if ( v10 < 0 ) /*0x6592ea*/
    v10 = 0; /*0x6592ea*/
  if ( v10 <= 9999 ) /*0x6592ef*/
    goto LABEL_16; /*0x6592ef*/
LABEL_17:
  *(_DWORD *)(a1 + 1484) = v6; /*0x6592f3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3680LL) ) /*0x6592fc*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 14720LL); /*0x65930d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14744LL) > 0xFu ) /*0x659319*/
      v13 = *(const char **)v13; /*0x65931b*/
    v12 = atoi(v13); /*0x65931e*/
  }
  else
  {
    v12 = 0; /*0x659306*/
  }
  *(_BYTE *)(a1 + 1856) = v12 != 0; /*0x659329*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3688LL) ) /*0x659332*/
  {
    v15 = (const char *)(*(_QWORD *)a2 + 14752LL); /*0x659343*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14776LL) > 0xFu ) /*0x65934f*/
      v15 = *(const char **)v15; /*0x659351*/
    v14 = atoi(v15); /*0x659354*/
  }
  else
  {
    v14 = 0; /*0x65933c*/
  }
  *(_BYTE *)(a1 + 1857) = v14 != 0; /*0x65935f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3896LL) ) /*0x659368*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 15584LL); /*0x659375*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 15608LL) > 0xFu ) /*0x659381*/
      v16 = *(const char **)v16; /*0x659383*/
    v7 = atoi(v16); /*0x65938c*/
  }
  *(_BYTE *)(a1 + 1858) = v7 != 0; /*0x6593a2*/
  return v7 != 0; /*0x659395*/
}
