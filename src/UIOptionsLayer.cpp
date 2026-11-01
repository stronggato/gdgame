#include <Geode/binding/UIOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x59da70
// Method: UIOptionsLayer::getValue
__int64 __fastcall UIOptionsLayer_getValue(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 ) /*0x59da95*/
  {
    case -11: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59dc1f*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59dc22*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59dc2a*/
      strcpy((char *)a1, "TR"); /*0x59dc32*/
      result = a1; /*0x59dc1c*/
      break; /*0x59dc3f*/
    case -10: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59dbf8*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59dbfb*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59dc03*/
      strcpy((char *)a1, "CR"); /*0x59dc0b*/
      result = a1; /*0x59dbf5*/
      break; /*0x59dc18*/
    case -9: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59dbd1*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59dbd4*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59dbdc*/
      strcpy((char *)a1, "BR"); /*0x59dbe4*/
      result = a1; /*0x59dbce*/
      break; /*0x59dbf1*/
    case -8: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59dbaa*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59dbad*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59dbb5*/
      strcpy((char *)a1, "TC"); /*0x59dbbd*/
      result = a1; /*0x59dba7*/
      break; /*0x59dbca*/
    case -7: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59db83*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59db86*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59db8e*/
      strcpy((char *)a1, "BC"); /*0x59db96*/
      result = a1; /*0x59db80*/
      break; /*0x59dba3*/
    case -6: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59db5c*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59db5f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59db67*/
      strcpy((char *)a1, "TL"); /*0x59db6f*/
      result = a1; /*0x59db59*/
      break; /*0x59db7c*/
    case -5: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59db35*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59db38*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59db40*/
      strcpy((char *)a1, "CL"); /*0x59db48*/
      result = a1; /*0x59db32*/
      break; /*0x59db55*/
    case -4: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59db0e*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59db11*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59db19*/
      strcpy((char *)a1, "BL"); /*0x59db21*/
      result = a1; /*0x59db0b*/
      break; /*0x59db2e*/
    case -3: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59daeb*/
      *(_QWORD *)(a1 + 16) = 1; /*0x59daee*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59daf6*/
      *(_WORD *)a1 = 67; /*0x59dafe*/
      result = a1; /*0x59dae8*/
      break; /*0x59db07*/
    case -2: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59dac4*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59dac7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59dacf*/
      strcpy((char *)a1, "P2"); /*0x59dad7*/
      result = a1; /*0x59dac1*/
      break; /*0x59dae4*/
    case -1: /*0x59da95*/
      *(_OWORD *)a1 = 0; /*0x59da9d*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59daa0*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59daa8*/
      strcpy((char *)a1, "P1"); /*0x59dab0*/
      result = a1; /*0x59da9a*/
      break; /*0x59dabd*/
    default:
      *(_OWORD *)a1 = 0; /*0x59dc46*/
      *(_QWORD *)(a1 + 16) = 2; /*0x59dc49*/
      *(_QWORD *)(a1 + 24) = 15; /*0x59dc51*/
      strcpy((char *)a1, "NA"); /*0x59dc59*/
      result = a1; /*0x59dc43*/
      break; /*0x59dc43*/
  }
  return result; /*0x59dab9*/
}
