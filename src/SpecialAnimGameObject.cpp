#include <Geode/binding/SpecialAnimGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x2a38b0
// Method: SpecialAnimGameObject::updateSyncedAnimation
char __fastcall SpecialAnimGameObject_updateSyncedAnimation(__int64 *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  LOBYTE(v3) = EnhancedGameObject_updateSyncedAnimation(a1, a2, 0xFFFFFFFFLL); /*0x2a38bf*/
  if ( !*((_BYTE *)a1 + 1435) ) /*0x2a38c4*/
  {
    switch ( *((_DWORD *)a1 + 259) ) /*0x2a38dd*/
    {
      case 0x7FE: /*0x2a38dd*/
        v3 = *((_DWORD *)a1 + 362); /*0x2a3990*/
        if ( v3 == 1 || v3 > 3 ) /*0x2a399e*/
        {
          v6 = *a1; /*0x2a39ad*/
          *((_BYTE *)a1 + 1465) = 0; /*0x2a39ba*/
          LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64 *, void *))(v6 + 1440))(a1, &unk_6FE428); /*0x2a39c1*/
          *((_BYTE *)a1 + 1465) = 1; /*0x2a39c7*/
        }
        else
        {
          *((_BYTE *)a1 + 1465) = 0; /*0x2a39a0*/
        }
        break;
      case 0x7FF: /*0x2a38dd*/
        if ( *((_DWORD *)a1 + 362) == 1 ) /*0x2a3937*/
        {
          v5 = *a1; /*0x2a3939*/
          *((_WORD *)a1 + 732) = 0; /*0x2a3946*/
          (*(void (__fastcall **)(__int64 *, void *))(v5 + 1432))(a1, &unk_6FE428); /*0x2a394f*/
          (*(void (__fastcall **)(__int64 *, void *))(*a1 + 1440))(a1, &unk_6FE428); /*0x2a3962*/
          *((_BYTE *)a1 + 1464) = 1; /*0x2a396a*/
          *((_BYTE *)a1 + 1465) = 1; /*0x2a3970*/
          LOBYTE(v3) = 1; /*0x2a3968*/
        }
        else
        {
          *((_BYTE *)a1 + 1464) = 0; /*0x2a397e*/
          *((_BYTE *)a1 + 1465) = 0; /*0x2a3984*/
          LOBYTE(v3) = 0; /*0x2a397c*/
        }
        break;
      case 0x807: /*0x2a38dd*/
        if ( *((_DWORD *)a1 + 362) == 1 ) /*0x2a38f8*/
        {
          v4 = *a1; /*0x2a38fa*/
          *((_BYTE *)a1 + 1464) = 0; /*0x2a3907*/
          (*(void (__fastcall **)(__int64 *, void *))(v4 + 1432))(a1, &unk_6FE428); /*0x2a390e*/
          *((_BYTE *)a1 + 1464) = 1; /*0x2a3916*/
          LOBYTE(v3) = 1; /*0x2a3914*/
        }
        else
        {
          *((_BYTE *)a1 + 1464) = 0; /*0x2a3924*/
          LOBYTE(v3) = 0; /*0x2a3922*/
        }
        break;
    }
  }
  return v3; /*0x2a391c*/
}

// [2/6] Address: 0x63e970
// Method: SpecialAnimGameObject::updateMainColor
__int64 __fastcall SpecialAnimGameObject_updateMainColor(_BYTE *a1)
{
  __int64 result; // rax

  if ( !a1[1464] ) /*0x63e970*/
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1344LL))(a1); /*0x63e97c*/
  return result; /*0x63e983*/
}

// [3/6] Address: 0x63e990
// Method: SpecialAnimGameObject::updateSecondaryColor
__int64 __fastcall SpecialAnimGameObject_updateSecondaryColor(_BYTE *a1)
{
  __int64 result; // rax

  if ( !a1[1465] ) /*0x63e990*/
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 944LL))(a1); /*0x63e99c*/
  return result; /*0x63e9a3*/
}

// [4/6] Address: 0x63e9b0
// Method: SpecialAnimGameObject::resetObject
char __fastcall SpecialAnimGameObject_resetObject(__int64 a1)
{
  *(_WORD *)(a1 + 1464) = 0; /*0x63e9b0*/
  return EnhancedGameObject_resetObject(a1);
}

// [5/6] Address: 0x63e9c0
// Method: SpecialAnimGameObject::customObjectSetup
bool __fastcall SpecialAnimGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  const char *v7; // rcx
  bool result; // al

  EnhancedGameObject_customObjectSetup(a1, a2, a3); /*0x63e9d8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1016LL) ) /*0x63e9e0*/
  {
    v7 = (const char *)(*(_QWORD *)a2 + 4064LL); /*0x63e9f1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4088LL) > 0xFu ) /*0x63e9fd*/
      v7 = *(const char **)v7; /*0x63e9ff*/
    v6 = atoi(v7); /*0x63ea02*/
  }
  else
  {
    v6 = 0; /*0x63e9ea*/
  }
  result = v6 != 0; /*0x63ea14*/
  *(_BYTE *)(a1 + 1435) = result; /*0x63ea17*/
  return result; /*0x63ea0f*/
}

// [6/6] Address: 0x63ea30
// Method: SpecialAnimGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall SpecialAnimGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-288h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-270h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-260h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-238h] BYREF

  *(_QWORD *)&v10 = a2; /*0x63ea5a*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x63ea66*/
  SaveString = EnhancedGameObject_getSaveString(a1, (__int64)v12, a3); /*0x63ea78*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x63ea8f*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63ea9e*/
  sub_3C310(v12); /*0x63eaaa*/
  if ( *(_BYTE *)(a1 + 1435) ) /*0x63eaaf*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63eabf*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63eac4*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63ead3*/
    fmt::BasicWriter<char>::operator<<(v13, 127); /*0x63eae3*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63eae9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63eaee*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63eafd*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1435)); /*0x63eb0f*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x63eb1a*/
  *(_OWORD *)a2 = 0; /*0x63eb23*/
  *(_QWORD *)(a2 + 16) = 0; /*0x63eb26*/
  *(_QWORD *)(a2 + 24) = 0; /*0x63eb2a*/
  v8 = -1; /*0x63eb2e*/
  do /*0x63eb38*/
    ++v8; /*0x63eb35*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x63eb38*/
  sub_3C230(a2); /*0x63eb45*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x63eb50*/
  return a2; /*0x63eb59*/
}
