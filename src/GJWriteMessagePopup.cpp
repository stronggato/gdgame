#include <Geode/binding/GJWriteMessagePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x18ca90
// Method: GJWriteMessagePopup::onSend
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJWriteMessagePopup_onSend(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rdi
  _DWORD *v6; // rax
  _WORD v7[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v8; // [rsp+60h] [rbp-59h]
  __int64 v9; // [rsp+68h] [rbp-51h]
  __int128 v10; // [rsp+70h] [rbp-49h] BYREF
  __int64 v11; // [rsp+80h] [rbp-39h]
  __int64 v12; // [rsp+88h] [rbp-31h]
  __int128 v13; // [rsp+90h] [rbp-29h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-19h]
  __int64 v15; // [rsp+A8h] [rbp-11h]
  __int128 v16; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+7h]
  __int64 v18; // [rsp+C8h] [rbp+Fh]
  _BYTE v19[56]; // [rsp+D8h] [rbp+1Fh] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x18caad*/
  if ( (unsigned int)result <= 9 ) /*0x18cab3*/
  {
    if ( (_DWORD)result == 9 ) /*0x18cab9*/
    {
      a1[296] = 2; /*0x18cabf*/
      v10 = 0; /*0x18cae4*/
      v11 = 6; /*0x18cae8*/
      v12 = 15; /*0x18caf0*/
      strcpy((char *)&v10, "Search"); /*0x18cafe*/
      v13 = 0; /*0x18cb10*/
      v14 = 0; /*0x18cb16*/
      v15 = 0; /*0x18cb1a*/
      *(_QWORD *)&v13 = sub_3C460(32); /*0x18cb28*/
      v14 = 18; /*0x18cb2c*/
      v15 = 31; /*0x18cb34*/
      strcpy((char *)v13, "Search Sound Packs"); /*0x18cb43*/
      v7[7] = 0; /*0x18cb55*/
      v8 = 13; /*0x18cb59*/
      v9 = 15; /*0x18cb61*/
      strcpy((char *)v7, "Name or ID..."); /*0x18cb71*/
      sub_3E4F0(v19, a1 + 276); /*0x18cb98*/
      v5 = sub_3A34B0(v4, (unsigned int)v7, 60, (unsigned int)&v13, (__int64)&v10, 0, 0, 0, 1, 0); /*0x18cbdc*/
      if ( *(_QWORD *)(v5 + 672) ) /*0x18cbdf*/
      {
        v16 = 0; /*0x18cbef*/
        v17 = 0; /*0x18cbf3*/
        v18 = 0; /*0x18cbf7*/
        *(_QWORD *)&v16 = sub_3C460(64); /*0x18cc08*/
        v17 = 63; /*0x18cc0c*/
        v18 = 63; /*0x18cc14*/
        strcpy((char *)v16, " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"); /*0x18cc23*/
        GameManager_getMenuMusicFile(*(_DWORD **)(v5 + 672), &v16); /*0x18cc76*/
      }
      v6 = a1 + 256; /*0x18cc7b*/
      if ( !a1 ) /*0x18cc85*/
        v6 = 0; /*0x18cc85*/
      *(_QWORD *)(v5 + 752) = v6; /*0x18cc89*/
      *(_DWORD *)(v5 + 592) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 96LL))(a1) + 1; /*0x18cc9b*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x18cca7*/
    }
    else
    {
      return sub_18C970(a1, (unsigned int)result); /*0x18ccb4*/
    }
  }
  return result; /*0x18ccb9*/
}
