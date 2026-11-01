#include <Geode/binding/ChanceTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x650750
// Method: ChanceTriggerGameObject::remapChanceObjects
void __fastcall ChanceTriggerGameObject_remapChanceObjects(__int64 a1, _QWORD *a2)
{
  unsigned __int8 *v2; // rbx
  unsigned __int8 *v4; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  v2 = *(unsigned __int8 **)(a1 + 1864); /*0x650752*/
  v4 = *(unsigned __int8 **)(a1 + 1856); /*0x65075c*/
  if ( v4 != v2 ) /*0x650766*/
  {
    v5 = a2[1]; /*0x65076c*/
    v6 = v5; /*0x650775*/
    while ( 1 ) /*0x6507d7*/
    {
      v7 = (__int64 *)(a2[3] /*0x6507d7*/
                     + 16
                     * (a2[6]
                      & (0x100000001B3LL
                       * (v4[3]
                        ^ (0x100000001B3LL
                         * (v4[2] ^ (0x100000001B3LL * (v4[1] ^ (0x100000001B3LL * (*v4 ^ 0xCBF29CE484222325uLL))))))))));
      v8 = v7[1]; /*0x6507db*/
      if ( v8 == v6 ) /*0x6507e2*/
        goto LABEL_9; /*0x6507e2*/
      v9 = *v7; /*0x6507e7*/
      if ( *(_DWORD *)v4 != *(_DWORD *)(v8 + 16) ) /*0x6507ed*/
        break; /*0x6507ed*/
LABEL_10:
      if ( !v8 ) /*0x65080b*/
        v8 = v6; /*0x65080b*/
      if ( v8 != v6 ) /*0x650812*/
      {
        *(_DWORD *)v4 = *(_DWORD *)(v8 + 20); /*0x650817*/
        v5 = a2[1]; /*0x65081a*/
        v6 = v5; /*0x65081e*/
      }
      v4 += 16; /*0x650821*/
      if ( v4 == v2 ) /*0x650828*/
        return; /*0x650828*/
    }
    while ( v8 != v9 ) /*0x6507f3*/
    {
      v8 = *(_QWORD *)(v8 + 8); /*0x6507f5*/
      if ( *(_DWORD *)v4 == *(_DWORD *)(v8 + 16) ) /*0x6507fc*/
      {
        v6 = v5; /*0x6507fe*/
        goto LABEL_10; /*0x650801*/
      }
    }
    v6 = v5; /*0x650803*/
LABEL_9:
    v8 = 0; /*0x650806*/
    goto LABEL_10; /*0x650806*/
  }
}
