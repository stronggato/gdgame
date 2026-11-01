#include <Geode/binding/SetGroupIDLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/18] Address: 0x300970
// Method: SetGroupIDLayer::onArrow
__int64 __fastcall SetGroupIDLayer_onArrow(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 ) /*0x300998*/
  {
    case 1: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3009a0*/
      *(_QWORD *)(a1 + 16) = 4; /*0x3009a3*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3009ab*/
      strcpy((char *)a1, "Fire"); /*0x3009b3*/
      result = a1; /*0x30099d*/
      break; /*0x3009c2*/
    case 2: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3009c6*/
      *(_QWORD *)(a1 + 16) = 3; /*0x3009c9*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3009d1*/
      *(_WORD *)a1 = 25417; /*0x3009df*/
      *(_BYTE *)(a1 + 2) = 101; /*0x3009e9*/
      *(_BYTE *)(a1 + 3) = 0; /*0x3009ef*/
      result = a1; /*0x3009ec*/
      break; /*0x3009f8*/
    case 3: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3009fc*/
      *(_QWORD *)(a1 + 16) = 6; /*0x3009ff*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300a07*/
      strcpy((char *)a1, "Poison"); /*0x300a15*/
      result = a1; /*0x300a22*/
      break; /*0x300a2e*/
    case 4: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300a32*/
      *(_QWORD *)(a1 + 16) = 6; /*0x300a35*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300a3d*/
      strcpy((char *)a1, "Shadow"); /*0x300a4b*/
      result = a1; /*0x300a58*/
      break; /*0x300a64*/
    case 5: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300a6b*/
      *(_QWORD *)(a1 + 16) = 4; /*0x300a6e*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300a76*/
      strcpy((char *)a1, "Lava"); /*0x300a7e*/
      result = a1; /*0x300a68*/
      break; /*0x300a8d*/
    case 6: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300a91*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300a94*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300a9c*/
      *(_DWORD *)a1 = 1970171714; /*0x300aaa*/
      *(_BYTE *)(a1 + 4) = 115; /*0x300ab3*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300ab9*/
      result = a1; /*0x300ab6*/
      break; /*0x300ac2*/
    case 7: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300ac6*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300ac9*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300ad1*/
      *(_DWORD *)a1 = 1868654659; /*0x300adf*/
      *(_BYTE *)(a1 + 4) = 115; /*0x300ae8*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300aee*/
      result = a1; /*0x300aeb*/
      break; /*0x300af7*/
    case 8: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300afb*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300afe*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300b06*/
      *(_DWORD *)a1 = 1869440324; /*0x300b14*/
      *(_BYTE *)(a1 + 4) = 110; /*0x300b1d*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300b23*/
      result = a1; /*0x300b20*/
      break; /*0x300b2c*/
    case 9: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300b33*/
      *(_QWORD *)(a1 + 16) = 4; /*0x300b36*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300b3e*/
      strcpy((char *)a1, "Time"); /*0x300b46*/
      result = a1; /*0x300b30*/
      break; /*0x300b55*/
    case 10: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300b59*/
      *(_QWORD *)(a1 + 16) = 7; /*0x300b5c*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300b64*/
      *(_DWORD *)a1 = 1937338947; /*0x300b73*/
      *(_WORD *)(a1 + 4) = 24948; /*0x300b7c*/
      *(_BYTE *)(a1 + 6) = 108; /*0x300b87*/
      *(_BYTE *)(a1 + 7) = 0; /*0x300b8d*/
      result = a1; /*0x300b8a*/
      break; /*0x300b96*/
    case 11: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300b9a*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300b9d*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300ba5*/
      *(_DWORD *)a1 = 1768382797; /*0x300bb3*/
      *(_BYTE *)(a1 + 4) = 99; /*0x300bbc*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300bc2*/
      result = a1; /*0x300bbf*/
      break; /*0x300bcb*/
    case 12: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300bcf*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300bd2*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300bda*/
      *(_DWORD *)a1 = 1802072147; /*0x300be8*/
      *(_BYTE *)(a1 + 4) = 101; /*0x300bf1*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300bf7*/
      result = a1; /*0x300bf4*/
      break; /*0x300c00*/
    case 13: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300c04*/
      *(_QWORD *)(a1 + 16) = 7; /*0x300c07*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300c0f*/
      *(_DWORD *)a1 = 1936617293; /*0x300c1e*/
      *(_WORD *)(a1 + 4) = 25972; /*0x300c27*/
      *(_BYTE *)(a1 + 6) = 114; /*0x300c32*/
      *(_BYTE *)(a1 + 7) = 0; /*0x300c38*/
      result = a1; /*0x300c35*/
      break; /*0x300c41*/
    case 14: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300c48*/
      *(_QWORD *)(a1 + 16) = 4; /*0x300c4b*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300c53*/
      strcpy((char *)a1, "Doom"); /*0x300c5b*/
      result = a1; /*0x300c45*/
      break; /*0x300c6a*/
    case 15: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300c6e*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300c71*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300c79*/
      *(_DWORD *)a1 = 1952539972; /*0x300c87*/
      *(_BYTE *)(a1 + 4) = 104; /*0x300c90*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300c96*/
      result = a1; /*0x300c93*/
      break; /*0x300c9f*/
    case 16: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300ca3*/
      *(_QWORD *)(a1 + 16) = 6; /*0x300ca6*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300cae*/
      strcpy((char *)a1, "Forest"); /*0x300cbc*/
      result = a1; /*0x300cc9*/
      break; /*0x300cd5*/
    case 17: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300cdc*/
      *(_QWORD *)(a1 + 16) = 4; /*0x300cdf*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300ce7*/
      strcpy((char *)a1, "Rune"); /*0x300cef*/
      result = a1; /*0x300cd9*/
      break; /*0x300cfe*/
    case 18: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300d02*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300d05*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300d0d*/
      *(_DWORD *)a1 = 1668443974; /*0x300d1b*/
      *(_BYTE *)(a1 + 4) = 101; /*0x300d24*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300d2a*/
      result = a1; /*0x300d27*/
      break; /*0x300d33*/
    case 19: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300d37*/
      *(_QWORD *)(a1 + 16) = 6; /*0x300d3a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300d42*/
      strcpy((char *)a1, "Spooky"); /*0x300d50*/
      result = a1; /*0x300d5d*/
      break; /*0x300d69*/
    case 20: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300d6d*/
      *(_QWORD *)(a1 + 16) = 6; /*0x300d70*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300d78*/
      strcpy((char *)a1, "Dragon"); /*0x300d86*/
      result = a1; /*0x300d93*/
      break; /*0x300d9f*/
    case 21: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300da3*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300da6*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300dae*/
      *(_DWORD *)a1 = 1702125911; /*0x300dbc*/
      *(_BYTE *)(a1 + 4) = 114; /*0x300dc5*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300dcb*/
      result = a1; /*0x300dc8*/
      break; /*0x300dd4*/
    case 22: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300dd8*/
      *(_QWORD *)(a1 + 16) = 7; /*0x300ddb*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300de3*/
      *(_DWORD *)a1 = 1853186376; /*0x300df2*/
      *(_WORD *)(a1 + 4) = 25972; /*0x300dfb*/
      *(_BYTE *)(a1 + 6) = 100; /*0x300e06*/
      *(_BYTE *)(a1 + 7) = 0; /*0x300e0c*/
      result = a1; /*0x300e09*/
      break; /*0x300e15*/
    case 23: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300e1c*/
      *(_QWORD *)(a1 + 16) = 4; /*0x300e1f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300e27*/
      strcpy((char *)a1, "Acid"); /*0x300e2f*/
      result = a1; /*0x300e19*/
      break; /*0x300e3e*/
    case 24: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300e42*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300e45*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300e4d*/
      *(_DWORD *)a1 = 1668573527; /*0x300e5b*/
      *(_BYTE *)(a1 + 4) = 104; /*0x300e64*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300e6a*/
      result = a1; /*0x300e67*/
      break; /*0x300e73*/
    case 25: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300e77*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300e7a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300e82*/
      *(_DWORD *)a1 = 1702326096; /*0x300e90*/
      *(_BYTE *)(a1 + 4) = 114; /*0x300e99*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300e9f*/
      result = a1; /*0x300e9c*/
      break; /*0x300ea8*/
    case 26: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300eac*/
      *(_QWORD *)(a1 + 16) = 6; /*0x300eaf*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300eb7*/
      strcpy((char *)a1, "Potion"); /*0x300ec5*/
      result = a1; /*0x300ed2*/
      break; /*0x300ede*/
    case 27: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300ee2*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300ee5*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300eed*/
      *(_DWORD *)a1 = 1801547347; /*0x300efb*/
      *(_BYTE *)(a1 + 4) = 101; /*0x300f04*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300f0a*/
      result = a1; /*0x300f07*/
      break; /*0x300f13*/
    case 28: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300f17*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300f1a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300f22*/
      *(_DWORD *)a1 = 1769500500; /*0x300f30*/
      *(_BYTE *)(a1 + 4) = 99; /*0x300f39*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300f3f*/
      result = a1; /*0x300f3c*/
      break; /*0x300f48*/
    case 29: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300f4c*/
      *(_QWORD *)(a1 + 16) = 9; /*0x300f4f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300f57*/
      strcpy((char *)a1, "Halloween"); /*0x300f67*/
      result = a1; /*0x300f75*/
      break; /*0x300f81*/
    case 30: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300f8f*/
      *(_QWORD *)(a1 + 16) = 8; /*0x300f92*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300f9a*/
      strcpy((char *)a1, "Treasure"); /*0x300fa2*/
      result = a1; /*0x300fa5*/
      break; /*0x300fb1*/
    case 31: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300fb5*/
      *(_QWORD *)(a1 + 16) = 5; /*0x300fb8*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300fc0*/
      *(_DWORD *)a1 = 1936681031; /*0x300fce*/
      *(_BYTE *)(a1 + 4) = 116; /*0x300fd7*/
      *(_BYTE *)(a1 + 5) = 0; /*0x300fdd*/
      result = a1; /*0x300fda*/
      break; /*0x300fe6*/
    case 32: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x300fea*/
      *(_QWORD *)(a1 + 16) = 6; /*0x300fed*/
      *(_QWORD *)(a1 + 24) = 15; /*0x300ff5*/
      strcpy((char *)a1, "Spider"); /*0x301003*/
      result = a1; /*0x301010*/
      break; /*0x30101c*/
    case 33: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301020*/
      *(_QWORD *)(a1 + 16) = 3; /*0x301023*/
      *(_QWORD *)(a1 + 24) = 15; /*0x30102b*/
      *(_WORD *)a1 = 25927; /*0x301039*/
      *(_BYTE *)(a1 + 2) = 109; /*0x301043*/
      *(_BYTE *)(a1 + 3) = 0; /*0x301049*/
      result = a1; /*0x301046*/
      break; /*0x301052*/
    case 34: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301056*/
      *(_QWORD *)(a1 + 16) = 7; /*0x301059*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301061*/
      *(_DWORD *)a1 = 1701211721; /*0x301070*/
      *(_WORD *)(a1 + 4) = 28274; /*0x301079*/
      *(_BYTE *)(a1 + 6) = 111; /*0x301084*/
      *(_BYTE *)(a1 + 7) = 0; /*0x30108a*/
      result = a1; /*0x301087*/
      break; /*0x301093*/
    case 35: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301097*/
      *(_QWORD *)(a1 + 16) = 6; /*0x30109a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3010a2*/
      strcpy((char *)a1, "Portal"); /*0x3010b0*/
      result = a1; /*0x3010bd*/
      break; /*0x3010c9*/
    case 36: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3010cd*/
      *(_QWORD *)(a1 + 16) = 7; /*0x3010d0*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3010d8*/
      *(_DWORD *)a1 = 1634890835; /*0x3010e7*/
      *(_WORD *)(a1 + 4) = 26478; /*0x3010f0*/
      *(_BYTE *)(a1 + 6) = 101; /*0x3010fb*/
      *(_BYTE *)(a1 + 7) = 0; /*0x301101*/
      result = a1; /*0x3010fe*/
      break; /*0x30110a*/
    case 37: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x30110e*/
      *(_QWORD *)(a1 + 16) = 7; /*0x301111*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301119*/
      *(_DWORD *)a1 = 1953390918; /*0x301128*/
      *(_WORD *)(a1 + 4) = 29537; /*0x301131*/
      *(_BYTE *)(a1 + 6) = 121; /*0x30113c*/
      *(_BYTE *)(a1 + 7) = 0; /*0x301142*/
      result = a1; /*0x30113f*/
      break; /*0x30114b*/
    case 38: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x30114f*/
      *(_QWORD *)(a1 + 16) = 9; /*0x301152*/
      *(_QWORD *)(a1 + 24) = 15; /*0x30115a*/
      strcpy((char *)a1, "Christmas"); /*0x30116a*/
      result = a1; /*0x301178*/
      break; /*0x301184*/
    case 39: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301192*/
      *(_QWORD *)(a1 + 16) = 8; /*0x301195*/
      *(_QWORD *)(a1 + 24) = 15; /*0x30119d*/
      strcpy((char *)a1, "Surprise"); /*0x3011a5*/
      result = a1; /*0x3011a8*/
      break; /*0x3011b4*/
    case 40: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3011b8*/
      *(_QWORD *)(a1 + 16) = 7; /*0x3011bb*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3011c3*/
      *(_DWORD *)a1 = 1953724749; /*0x3011d2*/
      *(_WORD *)(a1 + 4) = 29285; /*0x3011db*/
      *(_BYTE *)(a1 + 6) = 121; /*0x3011e6*/
      *(_BYTE *)(a1 + 7) = 0; /*0x3011ec*/
      result = a1; /*0x3011e9*/
      break; /*0x3011f5*/
    case 41: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3011f9*/
      *(_QWORD *)(a1 + 16) = 6; /*0x3011fc*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301204*/
      strcpy((char *)a1, "Cursed"); /*0x301212*/
      result = a1; /*0x30121f*/
      break; /*0x30122b*/
    case 42: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x30122f*/
      *(_QWORD *)(a1 + 16) = 6; /*0x301232*/
      *(_QWORD *)(a1 + 24) = 15; /*0x30123a*/
      strcpy((char *)a1, "Cyborg"); /*0x301248*/
      result = a1; /*0x301255*/
      break; /*0x301261*/
    case 43: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301265*/
      *(_QWORD *)(a1 + 16) = 6; /*0x301268*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301270*/
      strcpy((char *)a1, "Castle"); /*0x30127e*/
      result = a1; /*0x30128b*/
      break; /*0x301297*/
    case 44: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x30129b*/
      *(_QWORD *)(a1 + 16) = 5; /*0x30129e*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3012a6*/
      *(_DWORD *)a1 = 1986097735; /*0x3012b4*/
      *(_BYTE *)(a1 + 4) = 101; /*0x3012bd*/
      *(_BYTE *)(a1 + 5) = 0; /*0x3012c3*/
      result = a1; /*0x3012c0*/
      break; /*0x3012cc*/
    case 45: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3012d0*/
      *(_QWORD *)(a1 + 16) = 6; /*0x3012d3*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3012db*/
      strcpy((char *)a1, "Temple"); /*0x3012e9*/
      result = a1; /*0x3012f6*/
      break; /*0x301302*/
    case 46: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301306*/
      *(_QWORD *)(a1 + 16) = 5; /*0x301309*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301311*/
      *(_DWORD *)a1 = 1819438935; /*0x30131f*/
      *(_BYTE *)(a1 + 4) = 100; /*0x301328*/
      *(_BYTE *)(a1 + 5) = 0; /*0x30132e*/
      result = a1; /*0x30132b*/
      break; /*0x301337*/
    case 47: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x30133b*/
      *(_QWORD *)(a1 + 16) = 6; /*0x30133e*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301346*/
      strcpy((char *)a1, "Galaxy"); /*0x301354*/
      result = a1; /*0x301361*/
      break; /*0x30136d*/
    case 48: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x30137b*/
      *(_QWORD *)(a1 + 16) = 8; /*0x30137e*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301386*/
      strcpy((char *)a1, "Universe"); /*0x30138e*/
      result = a1; /*0x301391*/
      break; /*0x30139d*/
    case 49: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3013a1*/
      *(_QWORD *)(a1 + 16) = 7; /*0x3013a4*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3013ac*/
      strcpy((char *)a1, "Discord"); /*0x3013bb*/
      result = a1; /*0x3013d2*/
      break; /*0x3013de*/
    case 50: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3013e2*/
      *(_QWORD *)(a1 + 16) = 5; /*0x3013e5*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3013ed*/
      strcpy((char *)a1, "Split"); /*0x3013fb*/
      result = a1; /*0x301407*/
      break; /*0x301413*/
    case 51: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301417*/
      *(_QWORD *)(a1 + 16) = 5; /*0x30141a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301422*/
      *(_DWORD *)a1 = 542327630; /*0x301430*/
      *(_BYTE *)(a1 + 4) = 73; /*0x301439*/
      *(_BYTE *)(a1 + 5) = 0; /*0x30143f*/
      result = a1; /*0x30143c*/
      break; /*0x301448*/
    case 52: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x30144c*/
      *(_QWORD *)(a1 + 16) = 6; /*0x30144f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301457*/
      strcpy((char *)a1, "NCS II"); /*0x301465*/
      result = a1; /*0x301472*/
      break; /*0x30147e*/
    case 53: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301482*/
      *(_QWORD *)(a1 + 16) = 5; /*0x301485*/
      *(_QWORD *)(a1 + 24) = 15; /*0x30148d*/
      *(_DWORD *)a1 = 1667330131; /*0x30149b*/
      *(_BYTE *)(a1 + 4) = 101; /*0x3014a4*/
      *(_BYTE *)(a1 + 5) = 0; /*0x3014aa*/
      result = a1; /*0x3014a7*/
      break; /*0x3014b3*/
    case 54: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3014b7*/
      *(_QWORD *)(a1 + 16) = 6; /*0x3014ba*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3014c2*/
      strcpy((char *)a1, "Cosmos"); /*0x3014d0*/
      result = a1; /*0x3014dd*/
      break; /*0x3014e9*/
    case 55: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3014ed*/
      *(_QWORD *)(a1 + 16) = 6; /*0x3014f0*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3014f8*/
      strcpy((char *)a1, "Random"); /*0x301506*/
      result = a1; /*0x301513*/
      break; /*0x30151f*/
    case 56: /*0x300998*/
      sub_3C1F0(a1, "Chance"); /*0x30152a*/
      result = a1; /*0x30152f*/
      break; /*0x301537*/
    case 57: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x30153b*/
      *(_QWORD *)(a1 + 16) = 6; /*0x30153e*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301546*/
      strcpy((char *)a1, "Future"); /*0x301554*/
      result = a1; /*0x301561*/
      break; /*0x30156d*/
    case 58: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x301571*/
      *(_QWORD *)(a1 + 16) = 6; /*0x301574*/
      *(_QWORD *)(a1 + 24) = 15; /*0x30157c*/
      strcpy((char *)a1, "Utopia"); /*0x30158a*/
      result = a1; /*0x301597*/
      break; /*0x3015a3*/
    case 59: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3015a7*/
      *(_QWORD *)(a1 + 16) = 6; /*0x3015aa*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3015b2*/
      strcpy((char *)a1, "Cinema"); /*0x3015c0*/
      result = a1; /*0x3015cd*/
      break; /*0x3015d9*/
    case 60: /*0x300998*/
      *(_OWORD *)a1 = 0; /*0x3015e4*/
      *(_QWORD *)(a1 + 16) = 4; /*0x3015ed*/
      *(_QWORD *)(a1 + 24) = 15; /*0x3015f8*/
      std::_Char_traits<char,int>::copy(a1, "Love", 4); /*0x301600*/
      *(_BYTE *)(a1 + 4) = 0; /*0x301608*/
      result = a1; /*0x301605*/
      break; /*0x301611*/
    case 61: /*0x300998*/
      sub_3C1F0(a1, "Duality"); /*0x30161c*/
      result = a1; /*0x301621*/
      break; /*0x301629*/
    case 62: /*0x300998*/
      sub_3C1F0(a1, "Paradox"); /*0x301634*/
      result = a1; /*0x301639*/
      break; /*0x301641*/
    default:
      *(_OWORD *)a1 = 0; /*0x301645*/
      *(_QWORD *)(a1 + 16) = 7; /*0x301648*/
      *(_QWORD *)(a1 + 24) = 15; /*0x301650*/
      *(_DWORD *)a1 = 1852534357; /*0x30165f*/
      *(_WORD *)(a1 + 4) = 30575; /*0x301668*/
      *(_BYTE *)(a1 + 6) = 110; /*0x301673*/
      *(_BYTE *)(a1 + 7) = 0; /*0x301679*/
      result = a1; /*0x301676*/
      break; /*0x301676*/
  }
  return result; /*0x3009bd*/
}

// [3/18] Address: 0x380340
// Method: SetGroupIDLayer::onExtra2
int __fastcall SetGroupIDLayer_onExtra2(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  __int64 v5; // rdi
  void (__fastcall **v6)(__int64, void *); // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  cocos2d::CCArray *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  cocos2d::CCArray *v19; // rdi
  unsigned int v20; // ebx
  struct cocos2d::CCObject *v21; // rax

  v2 = *(_QWORD *)(a1 + 600); /*0x38034f*/
  v4 = *(_BYTE *)(a1 + 620) == 0; /*0x380359*/
  v5 = v2 + 320; /*0x380367*/
  v6 = *(void (__fastcall ***)(__int64, void *))(v2 + 320); /*0x38036e*/
  v7 = v2 + 320; /*0x380371*/
  if ( v4 ) /*0x380374*/
  {
    (*v6)(v7, &unk_6FE468); /*0x3804ee*/
    LOBYTE(v18) = 120; /*0x3804f3*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v2 + 320, v18); /*0x3804f8*/
    v9 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 480LL))(v2); /*0x380501*/
    v19 = v9; /*0x380507*/
    if ( v9 ) /*0x38050d*/
    {
      v20 = 0; /*0x380512*/
      for ( LODWORD(v9) = cocos2d::CCArray::count(v9); v20 < (unsigned int)v9; LODWORD(v9) = cocos2d::CCArray::count(v19) ) /*0x38051c*/
      {
        v21 = cocos2d::CCArray::objectAtIndex(v19, v20); /*0x380525*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v21 + 336LL))(v21, 0); /*0x38053a*/
        ++v20; /*0x380540*/
      }
    }
  }
  else
  {
    (*v6)(v7, &unk_6FE468); /*0x38037a*/
    LOBYTE(v8) = 120; /*0x38037f*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v2 + 320, v8); /*0x380384*/
    *(_BYTE *)(v2 + 660) = 0; /*0x38038a*/
    SimplePlayer_updateColors(v2); /*0x380391*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 608) + 336LL))(*(_QWORD *)(v2 + 608), 0); /*0x3803a2*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 616) + 336LL))(*(_QWORD *)(v2 + 616), 0); /*0x3803b4*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 632) + 336LL))(*(_QWORD *)(v2 + 632), 0); /*0x3803c6*/
    LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 624) + 336LL))( /*0x3803d8*/
                    *(_QWORD *)(v2 + 624),
                    0);
    v10 = *(_QWORD *)(v2 + 640); /*0x3803de*/
    if ( v10 ) /*0x3803e8*/
      LODWORD(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 1104LL))(v10); /*0x3803ed*/
    v11 = *(_QWORD *)(v2 + 640); /*0x3803f3*/
    if ( v11 ) /*0x3803fd*/
      LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 768) + 336LL))( /*0x38040b*/
                      *(_QWORD *)(v11 + 768),
                      0);
    v12 = *(_QWORD *)(v2 + 648); /*0x380411*/
    if ( v12 ) /*0x38041b*/
      LODWORD(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 1104LL))(v12); /*0x380420*/
    v13 = *(_QWORD *)(v2 + 648); /*0x380426*/
    if ( v13 ) /*0x380430*/
      LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 768) + 336LL))( /*0x38043e*/
                      *(_QWORD *)(v13 + 768),
                      0);
    v14 = *(_QWORD *)(v2 + 640); /*0x380444*/
    if ( v14 ) /*0x38044e*/
    {
      *(_WORD *)(v14 + 753) = *(_WORD *)a2; /*0x380453*/
      *(_BYTE *)(v14 + 755) = *(_BYTE *)(a2 + 2); /*0x38045e*/
      sub_3A9500(); /*0x380464*/
      LOBYTE(v15) = -66; /*0x380470*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v2 + 640) + 320LL) + 40LL))( /*0x38047c*/
        *(_QWORD *)(v2 + 640) + 320LL,
        v15);
      LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 640) + 1104LL))(*(_QWORD *)(v2 + 640)); /*0x380489*/
    }
    v16 = *(_QWORD *)(v2 + 648); /*0x38048f*/
    if ( v16 ) /*0x380499*/
    {
      *(_WORD *)(v16 + 753) = *(_WORD *)a2; /*0x3804a2*/
      *(_BYTE *)(v16 + 755) = *(_BYTE *)(a2 + 2); /*0x3804ad*/
      sub_3A9500(); /*0x3804b3*/
      LOBYTE(v17) = -66; /*0x3804bf*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v2 + 648) + 320LL) + 40LL))( /*0x3804cb*/
        *(_QWORD *)(v2 + 648) + 320LL,
        v17);
      LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 648) + 1104LL))(*(_QWORD *)(v2 + 648)); /*0x3804e7*/
    }
  }
  return (int)v9; /*0x38054c*/
}

// [4/18] Address: 0x3cc870
// Method: SetGroupIDLayer::onClose
// Hidden C++ exception states: #wind=3
void __fastcall SetGroupIDLayer_onClose(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v4; // cl
  int v5; // edi
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rcx
  void *v9; // [rsp+40h] [rbp+18h]
  void *v10; // [rsp+40h] [rbp+18h]
  void *v11; // [rsp+40h] [rbp+18h]

  v2 = *(_QWORD *)&qword_905FB0; /*0x3cc882*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3cc88c*/
  {
    v9 = operator new(0x690u); /*0x3cc898*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0x3cc8a6*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cc8b7*/
    v2 = *(_QWORD *)&qword_905FB0; /*0x3cc8b9*/
  }
  if ( (unsigned int)sub_21ED50(v2, "upd_comments") - 1 > 4 ) /*0x3cc8d9*/
  {
    v3 = *(_QWORD *)&qword_905FB0; /*0x3cc8df*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3cc8e9*/
    {
      v10 = operator new(0x690u); /*0x3cc8f5*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x3cc903*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cc914*/
      v3 = *(_QWORD *)&qword_905FB0; /*0x3cc917*/
    }
    GameLevelManager_makeTimeStamp(v3, (__int64)"upd_comments"); /*0x3cc925*/
    v4 = *(_BYTE *)(a1 + 888); /*0x3cc92a*/
    if ( v4 ) /*0x3cc933*/
      v5 = (*(_QWORD *)(a1 + 704) != 0) + 4; /*0x3cc94a*/
    else
      v5 = *(_DWORD *)(a1 + 884); /*0x3cc935*/
    v6 = *(_QWORD *)(a1 + 704); /*0x3cc94d*/
    if ( v6 && v4 ) /*0x3cc95b*/
      v7 = *(_DWORD *)(v6 + 392); /*0x3cc95d*/
    else
      v7 = sub_3CC4A0(a1); /*0x3cc96d*/
    v8 = *(_QWORD *)&qword_905FB0; /*0x3cc96f*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3cc979*/
    {
      v11 = operator new(0x690u); /*0x3cc985*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0x3cc993*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3cc9a4*/
      v8 = *(_QWORD *)&qword_905FB0; /*0x3cc9a6*/
    }
    GameLevelManager_resetCommentTimersForLevelID(v8, v7, v5); /*0x3cc9b2*/
    InfoLayer_loadPage(a1, 0, 1); /*0x3cc9bf*/
  }
}

// [6/18] Address: 0x58cc30
// Method: SetGroupIDLayer::onPaste
// Hidden C++ exception states: #wind=2
__int64 __fastcall SetGroupIDLayer_onPaste(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int *v7; // r8
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  __int64 v13; // r8
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 *i; // rbp
  __int64 result; // rax
  void *v19; // [rsp+30h] [rbp+8h]

  v2 = qword_905FD0; /*0x58cc47*/
  if ( !qword_905FD0 ) /*0x58cc51*/
  {
    v19 = operator new(0x6E8u); /*0x58cc5d*/
    qword_905FD0 = sub_2723A0(v19); /*0x58cc6b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58cc7c*/
    v2 = qword_905FD0; /*0x58cc7e*/
  }
  v3 = *(_QWORD *)(a1 + 680); /*0x58cc85*/
  v4 = *(_QWORD *)(a1 + 672); /*0x58cc8c*/
  v5 = *(_QWORD *)(v2 + 568); /*0x58cc93*/
  v6 = *(_QWORD *)(v5 + 14840); /*0x58cc9a*/
  if ( v6 ) /*0x58cca4*/
  {
    if ( v4 ) /*0x58ccad*/
    {
      GameObject_duplicateAttributes(*(_QWORD *)(a1 + 672), v6); /*0x58ccb2*/
      *(_BYTE *)(v4 + 1156) = 1; /*0x58ccb7*/
    }
    else if ( v3 ) /*0x58ccc3*/
    {
      v7 = *(unsigned int **)(v3 + 56); /*0x58ccc5*/
      v8 = *v7; /*0x58ccc9*/
      if ( (_DWORD)v8 ) /*0x58ccce*/
      {
        v9 = (__int64 *)*((_QWORD *)v7 + 2); /*0x58ccd0*/
        if ( v9 <= &v9[v8 - 1] ) /*0x58ccdf*/
        {
          do /*0x58cd03*/
          {
            if ( !*v9 ) /*0x58cce1*/
              break; /*0x58cce7*/
            GameObject_duplicateAttributes(*v9, *(_QWORD *)(v5 + 14840)); /*0x58ccf0*/
            *(_BYTE *)(v10 + 1156) = 1; /*0x58ccf5*/
            v9 = (__int64 *)(v11 + 8); /*0x58ccfc*/
          }
          while ( (unsigned __int64)v9 <= v12 ); /*0x58cd03*/
        }
      }
    }
    if ( !GameManager_getGameVariable(v2, "0156") ) /*0x58cd0f*/
    {
      v13 = *(_QWORD *)(v5 + 14840); /*0x58cd18*/
      if ( v13 ) /*0x58cd22*/
      {
        if ( v4 ) /*0x58cd27*/
        {
          LevelEditorLayer_applyGroupState(v5, v4, v13); /*0x58cd2f*/
        }
        else if ( v3 ) /*0x58cd39*/
        {
          v14 = *(unsigned int **)(v3 + 56); /*0x58cd3b*/
          v15 = *v14; /*0x58cd3f*/
          if ( (_DWORD)v15 ) /*0x58cd43*/
          {
            v16 = (__int64 *)*((_QWORD *)v14 + 2); /*0x58cd45*/
            for ( i = &v16[v15 - 1]; v16 <= i; ++v16 ) /*0x58cd54*/
            {
              if ( !*v16 ) /*0x58cd56*/
                break; /*0x58cd5c*/
              LevelEditorLayer_applyGroupState(v5, *v16, *(_QWORD *)(v5 + 14840)); /*0x58cd68*/
            }
          }
        }
      }
    }
  }
  *(_BYTE *)(a1 + 797) = 1; /*0x58cd76*/
  sub_58C870(a1); /*0x58cd80*/
  sub_58F430(a1); /*0x58cd88*/
  sub_58F250(a1); /*0x58cd90*/
  sub_58F2E0(a1); /*0x58cd98*/
  sub_58F370(a1); /*0x58cda0*/
  sub_58F7B0(a1); /*0x58cda8*/
  result = sub_58D630(a1); /*0x58cdb0*/
  *(_BYTE *)(a1 + 797) = 0; /*0x58cdb5*/
  return result; /*0x58cdbc*/
}

// [7/18] Address: 0x58cde0
// Method: SetGroupIDLayer::onExtra
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetGroupIDLayer_onExtra(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // r14
  __int64 (__fastcall *v5)(_QWORD *); // rdx

  v2 = *(_QWORD *)(a1 + 680); /*0x58cdf8*/
  v3 = *(_QWORD *)(a1 + 672); /*0x58cdff*/
  v4 = operator new(0x2D0u); /*0x58ce10*/
  FLAlertLayer_FLAlertLayer(v4); /*0x58ce1b*/
  *v4 = &SetupObjectOptionsPopup::`vftable'; /*0x58ce27*/
  v4[40] = &SetupObjectOptionsPopup::`vftable'; /*0x58ce31*/
  v4[41] = &SetupObjectOptionsPopup::`vftable'; /*0x58ce3f*/
  v4[42] = &SetupObjectOptionsPopup::`vftable'; /*0x58ce4d*/
  v4[43] = &SetupObjectOptionsPopup::`vftable'; /*0x58ce5b*/
  v4[44] = &SetupObjectOptionsPopup::`vftable'; /*0x58ce69*/
  v4[51] = &SetupObjectOptionsPopup::`vftable'; /*0x58ce77*/
  v4[54] = &SetupObjectOptionsPopup::`vftable'; /*0x58ce85*/
  v4[68] = &SetupObjectOptionsPopup::`vftable'; /*0x58ce93*/
  v4[83] = 0; /*0x58ce9a*/
  v4[84] = 0; /*0x58cea5*/
  v4[85] = 0; /*0x58ceb0*/
  *((_DWORD *)v4 + 172) = 0; /*0x58cebb*/
  *(_QWORD *)((char *)v4 + 694) = 0; /*0x58cec6*/
  *((_BYTE *)v4 + 702) = 0; /*0x58ced1*/
  v4[88] = 0; /*0x58ced9*/
  *((_WORD *)v4 + 356) = 0; /*0x58cee4*/
  if ( (unsigned __int8)sub_58FDD0(v4, v3, v2, a1) ) /*0x58cefa*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x58cf06*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x58cf16*/
    v4 = 0; /*0x58cf19*/
  }
  v5 = *(__int64 (__fastcall **)(_QWORD *))(*v4 + 1064LL); /*0x58cf1f*/
  if ( (char *)v5 == (char *)SetupSmartBlockLayer_show ) /*0x58cf33*/
    return SetupSmartBlockLayer_show(v4); /*0x58cf35*/
  else
    return v5(v4); /*0x58cf3c*/
}

// [8/18] Address: 0x58d110
// Method: SetGroupIDLayer::textChanged
void __fastcall SetGroupIDLayer_textChanged(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  const char *v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r8
  const char *v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  const char *v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rdx
  char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  const char *v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rdx
  char *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  const char *v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // rdx
  char *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  const char *v38; // rcx
  int v39; // eax
  unsigned __int64 v40; // rdx
  char *v41; // rcx
  char *String[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v43; // [rsp+48h] [rbp-18h]

  v2 = a1 - 136; /*0x58d136*/
  if ( !*((_BYTE *)a1 + 253) ) /*0x58d143*/
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 1 ) /*0x58d15c*/
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x58d173*/
      *(_OWORD *)String = 0; /*0x58d17c*/
      v6 = -1; /*0x58d180*/
      v43 = 0; /*0x58d187*/
      do /*0x58d193*/
        ++v6; /*0x58d190*/
      while ( *(_BYTE *)(v5 + v6) ); /*0x58d193*/
      sub_3C230(String); /*0x58d1a0*/
      v7 = (const char *)String; /*0x58d1aa*/
      if ( *((_QWORD *)&v43 + 1) > 0xFu ) /*0x58d1ae*/
        v7 = String[0]; /*0x58d1ae*/
      v8 = atoi(v7); /*0x58d1b3*/
      v9 = *((_QWORD *)&v43 + 1); /*0x58d1b9*/
      a1[55] = v8; /*0x58d1bd*/
      if ( v9 > 0xF ) /*0x58d1c7*/
      {
        v10 = String[0]; /*0x58d1c9*/
        if ( v9 + 1 >= 0x1000 ) /*0x58d1da*/
        {
          v10 = (char *)*((_QWORD *)String[0] - 1); /*0x58d1dc*/
          if ( (unsigned __int64)(String[0] - v10 - 8) > 0x1F ) /*0x58d1ef*/
            invoke_watson(0, 0, 0, 0, 0); /*0x58d200*/
        }
        j_j_free(v10); /*0x58d207*/
      }
      v11 = a1[55]; /*0x58d20c*/
      if ( v11 > 9999 ) /*0x58d219*/
        v11 = 9999; /*0x58d219*/
      a1[55] = v11; /*0x58d21c*/
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 5 ) /*0x58d233*/
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x58d24a*/
      *(_OWORD *)String = 0; /*0x58d253*/
      v13 = -1; /*0x58d257*/
      v43 = 0; /*0x58d25e*/
      do /*0x58d266*/
        ++v13; /*0x58d263*/
      while ( *(_BYTE *)(v12 + v13) ); /*0x58d266*/
      sub_3C230(String); /*0x58d273*/
      v14 = (const char *)String; /*0x58d27d*/
      if ( *((_QWORD *)&v43 + 1) > 0xFu ) /*0x58d281*/
        v14 = String[0]; /*0x58d281*/
      v15 = atoi(v14); /*0x58d286*/
      v16 = *((_QWORD *)&v43 + 1); /*0x58d28c*/
      a1[56] = v15; /*0x58d290*/
      if ( v16 > 0xF ) /*0x58d29a*/
      {
        v17 = String[0]; /*0x58d29c*/
        if ( v16 + 1 >= 0x1000 ) /*0x58d2ad*/
        {
          v17 = (char *)*((_QWORD *)String[0] - 1); /*0x58d2af*/
          if ( (unsigned __int64)(String[0] - v17 - 8) > 0x1F ) /*0x58d2c2*/
            invoke_watson(0, 0, 0, 0, 0); /*0x58d2d3*/
        }
        j_j_free(v17); /*0x58d2da*/
      }
      sub_58EA20(v2); /*0x58d2e2*/
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 6 ) /*0x58d2f8*/
    {
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x58d30f*/
      *(_OWORD *)String = 0; /*0x58d318*/
      v19 = -1; /*0x58d31c*/
      v43 = 0; /*0x58d323*/
      do /*0x58d333*/
        ++v19; /*0x58d330*/
      while ( *(_BYTE *)(v18 + v19) ); /*0x58d333*/
      sub_3C230(String); /*0x58d340*/
      v20 = (const char *)String; /*0x58d34a*/
      if ( *((_QWORD *)&v43 + 1) > 0xFu ) /*0x58d34e*/
        v20 = String[0]; /*0x58d34e*/
      v21 = atoi(v20); /*0x58d353*/
      v22 = *((_QWORD *)&v43 + 1); /*0x58d359*/
      a1[57] = v21; /*0x58d35d*/
      if ( v22 > 0xF ) /*0x58d367*/
      {
        v23 = String[0]; /*0x58d369*/
        if ( v22 + 1 >= 0x1000 ) /*0x58d37a*/
        {
          v23 = (char *)*((_QWORD *)String[0] - 1); /*0x58d37c*/
          if ( (unsigned __int64)(String[0] - v23 - 8) > 0x1F ) /*0x58d38f*/
            invoke_watson(0, 0, 0, 0, 0); /*0x58d3a0*/
        }
        j_j_free(v23); /*0x58d3a7*/
      }
      sub_58EAA0(v2); /*0x58d3af*/
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 7 ) /*0x58d3c5*/
    {
      v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x58d3dc*/
      *(_OWORD *)String = 0; /*0x58d3e5*/
      v25 = -1; /*0x58d3e9*/
      v43 = 0; /*0x58d3f0*/
      do /*0x58d3f8*/
        ++v25; /*0x58d3f5*/
      while ( *(_BYTE *)(v24 + v25) ); /*0x58d3f8*/
      sub_3C230(String); /*0x58d405*/
      v26 = (const char *)String; /*0x58d40f*/
      if ( *((_QWORD *)&v43 + 1) > 0xFu ) /*0x58d413*/
        v26 = String[0]; /*0x58d413*/
      v27 = atoi(v26); /*0x58d418*/
      v28 = *((_QWORD *)&v43 + 1); /*0x58d41e*/
      a1[58] = v27; /*0x58d422*/
      if ( v28 > 0xF ) /*0x58d42c*/
      {
        v29 = String[0]; /*0x58d42e*/
        if ( v28 + 1 >= 0x1000 ) /*0x58d43f*/
        {
          v29 = (char *)*((_QWORD *)String[0] - 1); /*0x58d441*/
          if ( (unsigned __int64)(String[0] - v29 - 8) > 0x1F ) /*0x58d454*/
            invoke_watson(0, 0, 0, 0, 0); /*0x58d465*/
        }
        j_j_free(v29); /*0x58d46c*/
      }
      sub_58F1B0(v2); /*0x58d474*/
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 3 ) /*0x58d48a*/
    {
      v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x58d4a1*/
      *(_OWORD *)String = 0; /*0x58d4aa*/
      v31 = -1; /*0x58d4ae*/
      v43 = 0; /*0x58d4b5*/
      do /*0x58d4c3*/
        ++v31; /*0x58d4c0*/
      while ( *(_BYTE *)(v30 + v31) ); /*0x58d4c3*/
      sub_3C230(String); /*0x58d4d0*/
      v32 = (const char *)String; /*0x58d4da*/
      if ( *((_QWORD *)&v43 + 1) > 0xFu ) /*0x58d4de*/
        v32 = String[0]; /*0x58d4de*/
      v33 = atoi(v32); /*0x58d4e3*/
      v34 = *((_QWORD *)&v43 + 1); /*0x58d4e9*/
      a1[62] = v33; /*0x58d4ed*/
      if ( v34 > 0xF ) /*0x58d4f7*/
      {
        v35 = String[0]; /*0x58d4f9*/
        if ( v34 + 1 >= 0x1000 ) /*0x58d50a*/
        {
          v35 = (char *)*((_QWORD *)String[0] - 1); /*0x58d50c*/
          if ( (unsigned __int64)(String[0] - v35 - 8) > 0x1F ) /*0x58d51f*/
            invoke_watson(0, 0, 0, 0, 0); /*0x58d530*/
        }
        j_j_free(v35); /*0x58d537*/
      }
      sub_58F910(v2); /*0x58d53f*/
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 4 ) /*0x58d555*/
    {
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x58d56c*/
      *(_OWORD *)String = 0; /*0x58d575*/
      v37 = -1; /*0x58d579*/
      v43 = 0; /*0x58d580*/
      do /*0x58d588*/
        ++v37; /*0x58d585*/
      while ( *(_BYTE *)(v36 + v37) ); /*0x58d588*/
      sub_3C230(String); /*0x58d595*/
      v38 = (const char *)String; /*0x58d59f*/
      if ( *((_QWORD *)&v43 + 1) > 0xFu ) /*0x58d5a3*/
        v38 = String[0]; /*0x58d5a3*/
      v39 = atoi(v38); /*0x58d5a8*/
      v40 = *((_QWORD *)&v43 + 1); /*0x58d5ae*/
      a1[53] = v39; /*0x58d5b2*/
      if ( v40 > 0xF ) /*0x58d5bc*/
      {
        v41 = String[0]; /*0x58d5be*/
        if ( v40 + 1 >= 0x1000 ) /*0x58d5cf*/
        {
          v41 = (char *)*((_QWORD *)String[0] - 1); /*0x58d5d1*/
          if ( (unsigned __int64)(String[0] - v41 - 8) > 0x1F ) /*0x58d5e4*/
            invoke_watson(0, 0, 0, 0, 0); /*0x58d5f5*/
        }
        j_j_free(v41); /*0x58d5fc*/
      }
      sub_58F840(v2); /*0x58d604*/
    }
  }
}

// [9/18] Address: 0x58ded0
// Method: SetGroupIDLayer::ccTouchBegan
char __fastcall SetGroupIDLayer_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  char result; // al

  v5 = *(_QWORD *)(a1 + 512); /*0x58dee5*/
  if ( v5 ) /*0x58def2*/
    sub_80640(v5, a2); /*0x58def4*/
  v7 = *(_QWORD *)(a1 + 520); /*0x58def9*/
  if ( v7 /*0x58df15*/
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 + 320) + 8LL))(v7 + 320, a2, a3) )
  {
    FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x58df25*/
    *(_BYTE *)(a1 + 528) = 1; /*0x58df2a*/
    return 1; /*0x58df42*/
  }
  result = FLAlertLayer_ccTouchBegan(a1, a2, a3); /*0x58df4c*/
  *(_BYTE *)(a1 + 528) = 0; /*0x58df51*/
  if ( result ) /*0x58df5a*/
    return 1; /*0x58df5a*/
  return result; /*0x58df33*/
}

// [10/18] Address: 0x58df70
// Method: SetGroupIDLayer::ccTouchMoved
__int64 __fastcall SetGroupIDLayer_ccTouchMoved(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx

  if ( *(_QWORD *)(a1 + 512) ) /*0x58df85*/
  {
    sub_80830(); /*0x58df94*/
    v6 = *(_QWORD *)(a1 + 512); /*0x58df99*/
    if ( *(_BYTE *)(v6 + 481) ) /*0x58dfa0*/
    {
      *(_BYTE *)(v6 + 481) = 0; /*0x58dfa9*/
      if ( !*(_BYTE *)(a1 + 528) ) /*0x58dfb7*/
        goto LABEL_7; /*0x58dfb7*/
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 320LL) + 32LL))( /*0x58dfd0*/
        *(_QWORD *)(a1 + 520) + 320LL,
        a2,
        a3);
      *(_BYTE *)(a1 + 528) = 0; /*0x58dfd3*/
    }
  }
  if ( *(_BYTE *)(a1 + 528) ) /*0x58dfda*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 320LL) + 16LL))( /*0x58dffa*/
      *(_QWORD *)(a1 + 520) + 320LL,
      a2,
      a3);
LABEL_7:
  result = *(unsigned int *)(a2 + 56); /*0x58dffd*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x58e006*/
  {
    v8 = *(_QWORD *)(a1 + 232); /*0x58e008*/
  }
  else
  {
    if ( *(_DWORD *)(a1 + 312) != (_DWORD)result ) /*0x58e017*/
      return result; /*0x58e017*/
    v8 = *(_QWORD *)(a1 + 304); /*0x58e019*/
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 16LL))(v8 + 320, a2, a3); /*0x58e033*/
}

// [11/18] Address: 0x58e050
// Method: SetGroupIDLayer::ccTouchEnded
__int64 __fastcall SetGroupIDLayer_ccTouchEnded(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char v7; // si
  __int64 *v8; // rcx
  __int64 v9; // rax

  v5 = *(_QWORD *)(a1 + 512); /*0x58e06a*/
  if ( v5 && *(_BYTE *)(v5 + 480) ) /*0x58e079*/
  {
    v7 = 1; /*0x58e082*/
  }
  else
  {
    v7 = 0; /*0x58e087*/
    if ( !v5 ) /*0x58e08d*/
      goto LABEL_6; /*0x58e08d*/
  }
  sub_80AF0(); /*0x58e08f*/
LABEL_6:
  if ( *(_BYTE *)(a1 + 528) ) /*0x58e094*/
  {
    v8 = (__int64 *)(*(_QWORD *)(a1 + 520) + 320LL); /*0x58e0a7*/
    v9 = *v8; /*0x58e0b1*/
    if ( v7 ) /*0x58e0b7*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 32))(v8, a2, a3); /*0x58e0b9*/
    else
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 24))(v8, a2, a3); /*0x58e0be*/
    *(_BYTE *)(a1 + 528) = 0; /*0x58e0c1*/
  }
  return FLAlertLayer_ccTouchEnded(a1, a2, a3); /*0x58e0d1*/
}

// [12/18] Address: 0x58e0f0
// Method: SetGroupIDLayer::ccTouchCancelled
__int64 __fastcall SetGroupIDLayer_ccTouchCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 512); /*0x58e105*/
  if ( v5 && *(_DWORD *)(a2 + 56) == *(_DWORD *)(v5 + 440) ) /*0x58e11d*/
  {
    *(_DWORD *)(v5 + 440) = -1; /*0x58e121*/
    *(_QWORD *)(v5 + 472) = 0; /*0x58e12b*/
    *(_WORD *)(v5 + 480) = 0; /*0x58e132*/
    *(_BYTE *)(v5 + 508) = 0; /*0x58e139*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)v5); /*0x58e13f*/
  }
  if ( *(_BYTE *)(a1 + 528) ) /*0x58e145*/
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 320LL) + 32LL))( /*0x58e165*/
      *(_QWORD *)(a1 + 520) + 320LL,
      a2,
      a3);
    *(_BYTE *)(a1 + 528) = 0; /*0x58e168*/
  }
  return FLAlertLayer_ccTouchCancelled(a1, a2, a3); /*0x58e178*/
}

// [13/18] Address: 0x58e190
// Method: SetGroupIDLayer::callRemoveFromGroup
// Hidden C++ exception states: #wind=5
__int64 __fastcall SetGroupIDLayer_callRemoveFromGroup(__int64 a1)
{
  int *v2; // r14
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int j; // esi
  struct cocos2d::CCObject *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int i; // edi
  struct cocos2d::CCObject *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  cocos2d::CCArray *v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  void *v17; // [rsp+40h] [rbp+8h]
  void *v18; // [rsp+40h] [rbp+8h]
  void *v19; // [rsp+40h] [rbp+8h]
  void *v20; // [rsp+40h] [rbp+8h]
  void *v21; // [rsp+50h] [rbp+18h]

  cocos2d::CCNode::unschedule(a1, SetGroupIDLayer_callRemoveFromGroup); /*0x58e1ac*/
  *(_BYTE *)(a1 + 798) = 0; /*0x58e1b2*/
  v2 = (int *)(a1 + 800); /*0x58e1b9*/
  if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 816), *(int *)(a1 + 800)) /*0x58e1e3*/
    || cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 824), *v2) )
  {
    if ( *(_QWORD *)(a1 + 672) ) /*0x58e324*/
    {
      v9 = qword_905FD0; /*0x58e32e*/
      if ( !qword_905FD0 ) /*0x58e338*/
      {
        v19 = operator new(0x6E8u); /*0x58e344*/
        qword_905FD0 = sub_2723A0(v19); /*0x58e352*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58e363*/
        v9 = qword_905FD0; /*0x58e365*/
      }
      sub_328B40(*(_QWORD *)(v9 + 568), *(_QWORD *)(a1 + 672), (unsigned int)*v2); /*0x58e37d*/
    }
    else
    {
      for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); ++i ) /*0x58e390*/
      {
        v11 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), i); /*0x58e3af*/
        v12 = qword_905FD0; /*0x58e3b2*/
        if ( !qword_905FD0 ) /*0x58e3bc*/
        {
          v20 = operator new(0x6E8u); /*0x58e3c8*/
          qword_905FD0 = sub_2723A0(v20); /*0x58e3d6*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58e3e7*/
          v12 = qword_905FD0; /*0x58e3e9*/
        }
        v13 = *(_QWORD *)(v12 + 568); /*0x58e3f0*/
        if ( v11 ) /*0x58e3fa*/
        {
          v14 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v13 + 4032), *v2); /*0x58e406*/
          if ( v14 ) /*0x58e40f*/
          {
            if ( cocos2d::CCArray::containsObject(v14, v11) ) /*0x58e417*/
            {
              v15 = qword_905FD0; /*0x58e421*/
              if ( !qword_905FD0 ) /*0x58e42b*/
              {
                v21 = operator new(0x6E8u); /*0x58e437*/
                qword_905FD0 = sub_2723A0(v21); /*0x58e445*/
                (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58e456*/
                v15 = qword_905FD0; /*0x58e458*/
              }
              sub_328B40(*(_QWORD *)(v15 + 568), v11, (unsigned int)*v2); /*0x58e46c*/
            }
          }
        }
      }
    }
  }
  else
  {
    v3 = *v2; /*0x58e1f2*/
    *(_BYTE *)(a1 + 804) = 1; /*0x58e1f5*/
    v4 = *(_QWORD *)(a1 + 672); /*0x58e1fc*/
    if ( v4 ) /*0x58e206*/
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 1456LL))(v4, v3); /*0x58e20d*/
      v5 = qword_905FD0; /*0x58e213*/
      if ( !qword_905FD0 ) /*0x58e21d*/
      {
        v17 = operator new(0x6E8u); /*0x58e229*/
        qword_905FD0 = sub_2723A0(v17); /*0x58e237*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58e248*/
        v5 = qword_905FD0; /*0x58e24a*/
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v5 + 568) + 1208LL))( /*0x58e265*/
        *(_QWORD *)(v5 + 568),
        *(_QWORD *)(a1 + 672),
        v3);
    }
    else
    {
      for ( j = 0; j < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); ++j ) /*0x58e279*/
      {
        v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), j); /*0x58e29f*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v7 + 1456LL))(v7, v3); /*0x58e2b1*/
        v8 = qword_905FD0; /*0x58e2b4*/
        if ( !qword_905FD0 ) /*0x58e2be*/
        {
          v18 = operator new(0x6E8u); /*0x58e2ca*/
          qword_905FD0 = sub_2723A0(v18); /*0x58e2d8*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58e2e9*/
          v8 = qword_905FD0; /*0x58e2eb*/
        }
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, _QWORD))(**(_QWORD **)(v8 + 568) + 1208LL))( /*0x58e302*/
          *(_QWORD *)(v8 + 568),
          v7,
          v3);
      }
    }
  }
  result = sub_58D630(a1); /*0x58e48b*/
  *v2 = 0; /*0x58e490*/
  return result; /*0x58e497*/
}

// [14/18] Address: 0x58e590
// Method: SetGroupIDLayer::onAddGroup
// Hidden C++ exception states: #wind=2
__int64 __fastcall SetGroupIDLayer_onAddGroup(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int i; // ebx
  struct cocos2d::CCObject *v6; // rsi
  __int64 v7; // rcx
  void *v9; // [rsp+30h] [rbp+8h]
  void *v10; // [rsp+30h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 764); /*0x58e5a7*/
  *(_BYTE *)(a1 + 804) = 1; /*0x58e5ad*/
  v3 = *(_QWORD *)(a1 + 672); /*0x58e5b4*/
  if ( v3 ) /*0x58e5be*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 1448LL))(v3, v2) == 1 ) /*0x58e5ce*/
    {
      v4 = qword_905FD0; /*0x58e5d4*/
      if ( !qword_905FD0 ) /*0x58e5de*/
      {
        v9 = operator new(0x6E8u); /*0x58e5ea*/
        qword_905FD0 = sub_2723A0(v9); /*0x58e5f8*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58e609*/
        v4 = qword_905FD0; /*0x58e60b*/
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v4 + 568) + 1200LL))( /*0x58e629*/
        *(_QWORD *)(v4 + 568),
        *(_QWORD *)(a1 + 672),
        v2,
        0);
    }
  }
  else
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); ++i ) /*0x58e63d*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), i); /*0x58e65f*/
      if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v6 + 1448LL))(v6, v2) == 1 ) /*0x58e677*/
      {
        v7 = qword_905FD0; /*0x58e679*/
        if ( !qword_905FD0 ) /*0x58e683*/
        {
          v10 = operator new(0x6E8u); /*0x58e68f*/
          qword_905FD0 = sub_2723A0(v10); /*0x58e69d*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58e6ae*/
          v7 = qword_905FD0; /*0x58e6b0*/
        }
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, _QWORD, _QWORD))(**(_QWORD **)(v7 + 568) + 1200LL))( /*0x58e6ca*/
          *(_QWORD *)(v7 + 568),
          v6,
          v2,
          0);
      }
    }
  }
  return sub_58D630(a1); /*0x58e6ea*/
}

// [15/18] Address: 0x58e880
// Method: SetGroupIDLayer::onZLayer
__int64 __fastcall SetGroupIDLayer_onZLayer(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int i; // edi
  struct cocos2d::CCObject *v7; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x58e88f*/
  v4 = *(_QWORD *)(a1 + 672); /*0x58e892*/
  *(_DWORD *)(a1 + 788) = v3; /*0x58e899*/
  if ( v4 ) /*0x58e8a2*/
  {
    if ( !*(_BYTE *)(v4 + 1128) ) /*0x58e8a4*/
      *(_DWORD *)(v4 + 1132) = v3; /*0x58e8ad*/
    *(_BYTE *)(*(_QWORD *)(a1 + 672) + 1156LL) = 1; /*0x58e8bd*/
    return sub_58F7B0(a1); /*0x58e8c9*/
  }
  else
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); ++i ) /*0x58e8dc*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), i); /*0x58e8f9*/
      if ( !*((_BYTE *)v7 + 1128) ) /*0x58e8ff*/
        *((_DWORD *)v7 + 283) = *(_DWORD *)(a1 + 788); /*0x58e90e*/
      *((_BYTE *)v7 + 1156) = 1; /*0x58e914*/
    }
    return sub_58F7B0(a1); /*0x58e93b*/
  }
}

// [16/18] Address: 0x58e940
// Method: SetGroupIDLayer::onZLayerShift
unsigned int __fastcall SetGroupIDLayer_onZLayerShift(__int64 a1, __int64 a2)
{
  unsigned int result; // eax
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int v7; // esi
  struct cocos2d::CCObject *v8; // rcx
  int v9; // eax
  int v10; // eax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x58e953*/
  v4 = *(cocos2d::CCArray **)(a1 + 680); /*0x58e956*/
  v5 = result; /*0x58e95d*/
  if ( v4 ) /*0x58e962*/
  {
    v6 = 0; /*0x58e96d*/
    result = cocos2d::CCArray::count(v4); /*0x58e96f*/
    if ( result ) /*0x58e977*/
    {
      v7 = -2; /*0x58e985*/
      if ( v5 == 1 ) /*0x58e98f*/
        v7 = 2; /*0x58e98f*/
      do /*0x58e9fc*/
      {
        v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), v6); /*0x58e9af*/
        v9 = *((_DWORD *)v8 + 283); /*0x58e9b2*/
        if ( !v9 ) /*0x58e9ba*/
          v9 = *((_DWORD *)v8 + 281); /*0x58e9bc*/
        v10 = v7 + v9; /*0x58e9c2*/
        if ( v10 >= -5 ) /*0x58e9c7*/
        {
          if ( v10 > 11 ) /*0x58e9d2*/
            v10 = 11; /*0x58e9d2*/
        }
        else
        {
          v10 = -5; /*0x58e9c9*/
        }
        if ( !*((_BYTE *)v8 + 1128) ) /*0x58e9d5*/
          *((_DWORD *)v8 + 283) = v10; /*0x58e9de*/
        *((_BYTE *)v8 + 1156) = 1; /*0x58e9e4*/
        ++v6; /*0x58e9eb*/
        result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); /*0x58e9f4*/
      }
      while ( v6 < result ); /*0x58e9fc*/
    }
  }
  return result; /*0x58ea08*/
}

// [17/18] Address: 0x58f120
// Method: SetGroupIDLayer::valuePopupClosed
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetGroupIDLayer_valuePopupClosed(__int64 a1, __int64 a2, float a3)
{
  int v4; // edi
  __int64 result; // rax
  __int64 v6; // rax
  void *v7; // [rsp+38h] [rbp+10h]

  v4 = (int)fmaxf(0.0, roundf(a3)); /*0x58f13d*/
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x58f147*/
  if ( (_DWORD)result == 26 ) /*0x58f14d*/
  {
    v6 = qword_905FD0; /*0x58f14f*/
    if ( !qword_905FD0 ) /*0x58f159*/
    {
      v7 = operator new(0x6E8u); /*0x58f165*/
      qword_905FD0 = sub_2723A0(v7); /*0x58f173*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58f184*/
      v6 = qword_905FD0; /*0x58f186*/
    }
    result = *(_QWORD *)(v6 + 568); /*0x58f18d*/
    *(_DWORD *)(*(_QWORD *)(result + 3592) + 444LL) = v4; /*0x58f19b*/
  }
  return result; /*0x58f1a1*/
}

// [18/18] Address: 0x58fdc0
// Method: SetGroupIDLayer::keyBackClicked
__int64 __fastcall SetGroupIDLayer_keyBackClicked(__int64 a1)
{
  return sub_58F9E0(a1 - 336, 0);
}
