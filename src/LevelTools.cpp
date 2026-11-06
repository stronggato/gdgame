#include <Geode/binding/LevelTools.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x12cbf0
// Method: LevelTools::sortSpeedObjects
int __fastcall LevelTools_sortSpeedObjects(__int64 a1, int a2)
{
  int result; // eax
  __int64 v5; // rdx
  int v6; // r13d
  int v7; // r12d
  int v8; // edi
  __int64 v9; // r14
  struct cocos2d::CCObject *v10; // rax
  unsigned int *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  _QWORD *i; // rsi
  __int64 v15; // rdx

  result = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(a1 + 664)); /*0x12cc06*/
  v6 = result; /*0x12cc0c*/
  if ( a2 >= 0 ) /*0x12cc11*/
  {
    v7 = result - 1; /*0x12cc1c*/
    if ( a2 <= result - 1 && a2 != *(_DWORD *)(a1 + 688) ) /*0x12cc30*/
    {
      v8 = 0; /*0x12cc3b*/
      *(_DWORD *)(a1 + 688) = a2; /*0x12cc3d*/
      if ( result > 0 ) /*0x12cc46*/
      {
        v9 = 0; /*0x12cc5b*/
        do /*0x12ccb7*/
        {
          v10 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 664), v9); /*0x12cc6a*/
          if ( v10 ) /*0x12cc73*/
          {
            v11 = (unsigned int *)*((_QWORD *)v10 + 7); /*0x12cc75*/
            v12 = *v11; /*0x12cc79*/
            if ( (_DWORD)v12 ) /*0x12cc7d*/
            {
              v13 = (_QWORD *)*((_QWORD *)v11 + 2); /*0x12cc7f*/
              for ( i = &v13[v12 - 1]; v13 <= i; ++v13 ) /*0x12cc8e*/
              {
                if ( !*v13 ) /*0x12cc90*/
                  break; /*0x12cc96*/
                LOBYTE(v5) = v8 == a2; /*0x12cc9d*/
                (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v13 + 336LL))(*v13, v5); /*0x12cca0*/
              }
            }
          }
          ++v8; /*0x12ccaf*/
          ++v9; /*0x12ccb1*/
        }
        while ( v8 < v6 ); /*0x12ccb7*/
      }
      LOBYTE(v5) = a2 > 0; /*0x12ccd1*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 672) + 336LL))(*(_QWORD *)(a1 + 672), v5); /*0x12ccd7*/
      LOBYTE(v15) = a2 < v7; /*0x12cce7*/
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 680) + 336LL))(*(_QWORD *)(a1 + 680), v15); /*0x12cced*/
    }
  }
  return result; /*0x12ccfd*/
}

// [3/9] Address: 0x45e730
// Method: LevelTools::getAudioTitle
__int64 __fastcall LevelTools_getAudioTitle(__int64 a1, int a2)
{
  __int64 result; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax

  switch ( a2 )
  {
    case -1:
      *(_OWORD *)a1 = 0; /*0x45eae3*/
      *(_QWORD *)(a1 + 16) = 0; /*0x45eae6*/
      *(_QWORD *)(a1 + 24) = 0; /*0x45eaea*/
      v6 = (char *)sub_3C460(32); /*0x45eaee*/
      *(_QWORD *)a1 = v6; /*0x45eaf3*/
      *(_QWORD *)(a1 + 16) = 24; /*0x45eaf6*/
      *(_QWORD *)(a1 + 24) = 31; /*0x45eafe*/
      strcpy(v6, "Practice: Stay Inside Me");
      result = a1; /*0x45eb21*/
      break; /*0x45eb29*/
    case 0:
      *(_OWORD *)a1 = 0; /*0x45e8e4*/
      *(_QWORD *)(a1 + 16) = 14; /*0x45e8e7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e8ef*/
      strcpy((char *)a1, "Stereo Madness"); /*0x45e8ff*/
      result = a1; /*0x45e917*/
      break; /*0x45e923*/
    case 1:
      *(_OWORD *)a1 = 0; /*0x45e760*/
      *(_QWORD *)(a1 + 16) = 13; /*0x45e763*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e76b*/
      strcpy((char *)a1, "Back On Track"); /*0x45e77b*/
      result = a1; /*0x45e792*/
      break; /*0x45e79e*/
    case 2:
      *(_OWORD *)a1 = 0; /*0x45e8aa*/
      *(_QWORD *)(a1 + 16) = 10; /*0x45e8ad*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e8b5*/
      strcpy((char *)a1, "Polargeist"); /*0x45e8c5*/
      result = a1; /*0x45e8d4*/
      break; /*0x45e8e0*/
    case 3:
      *(_OWORD *)a1 = 0; /*0x45e869*/
      *(_QWORD *)(a1 + 16) = 7; /*0x45e86c*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e874*/
      *(_DWORD *)a1 = 544830020; /*0x45e883*/
      *(_WORD *)(a1 + 4) = 30031; /*0x45e88c*/
      *(_BYTE *)(a1 + 6) = 116; /*0x45e897*/
      *(_BYTE *)(a1 + 7) = 0; /*0x45e89d*/
      result = a1; /*0x45e89a*/
      break; /*0x45e8a6*/
    case 4:
      *(_OWORD *)a1 = 0; /*0x45e7a2*/
      *(_QWORD *)(a1 + 16) = 15; /*0x45e7a5*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e7ad*/
      strcpy((char *)a1, "Base After Base"); /*0x45e7bd*/
      result = a1; /*0x45e7df*/
      break; /*0x45e7eb*/
    case 5:
      *(_OWORD *)a1 = 0; /*0x45e7ef*/
      *(_QWORD *)(a1 + 16) = 11; /*0x45e7f2*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e7fa*/
      strcpy((char *)a1, "Cant Let Go"); /*0x45e80a*/
      result = a1; /*0x45e823*/
      break; /*0x45e82f*/
    case 6:
      *(_OWORD *)a1 = 0; /*0x45e95c*/
      *(_QWORD *)(a1 + 16) = 6; /*0x45e95f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e967*/
      strcpy((char *)a1, "Jumper"); /*0x45e975*/
      result = a1; /*0x45e982*/
      break; /*0x45e98e*/
    case 7:
      *(_OWORD *)a1 = 0; /*0x45e992*/
      *(_QWORD *)(a1 + 16) = 12; /*0x45e995*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e99d*/
      strcpy((char *)a1, "Time Machine"); /*0x45e9ad*/
      result = a1; /*0x45e9ba*/
      break; /*0x45e9c6*/
    case 8:
      *(_OWORD *)a1 = 0; /*0x45e833*/
      *(_QWORD *)(a1 + 16) = 6; /*0x45e836*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e83e*/
      strcpy((char *)a1, "Cycles"); /*0x45e84c*/
      result = a1; /*0x45e859*/
      break; /*0x45e865*/
    case 9:
      *(_OWORD *)a1 = 0; /*0x45e927*/
      *(_QWORD *)(a1 + 16) = 5; /*0x45e92a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e932*/
      *(_DWORD *)a1 = 1702122360; /*0x45e940*/
      *(_BYTE *)(a1 + 4) = 112; /*0x45e949*/
      *(_BYTE *)(a1 + 5) = 0; /*0x45e94f*/
      result = a1; /*0x45e94c*/
      break; /*0x45e958*/
    case 10:
      *(_OWORD *)a1 = 0; /*0x45e9ca*/
      *(_QWORD *)(a1 + 16) = 11; /*0x45e9cd*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45e9d5*/
      strcpy((char *)a1, "Clutterfunk"); /*0x45e9e5*/
      result = a1; /*0x45e9fe*/
      break; /*0x45ea0a*/
    case 11:
      *(_OWORD *)a1 = 0; /*0x45ea13*/
      *(_QWORD *)(a1 + 16) = 0; /*0x45ea16*/
      *(_QWORD *)(a1 + 24) = 0; /*0x45ea1a*/
      v4 = (char *)sub_3C460(32); /*0x45ea1e*/
      *(_QWORD *)a1 = v4; /*0x45ea23*/
      *(_QWORD *)(a1 + 16) = 20; /*0x45ea26*/
      *(_QWORD *)(a1 + 24) = 31; /*0x45ea2e*/
      strcpy(v4, "Theory of Everything"); /*0x45ea3d*/
      result = a1; /*0x45ea4d*/
      break; /*0x45ea55*/
    case 12:
      *(_OWORD *)a1 = 0; /*0x45ea5e*/
      *(_QWORD *)(a1 + 16) = 0; /*0x45ea61*/
      *(_QWORD *)(a1 + 24) = 0; /*0x45ea65*/
      v5 = (char *)sub_3C460(32); /*0x45ea69*/
      *(_QWORD *)a1 = v5; /*0x45ea6e*/
      *(_QWORD *)(a1 + 16) = 21; /*0x45ea71*/
      *(_QWORD *)(a1 + 24) = 31; /*0x45ea79*/
      strcpy(v5, "Electroman Adventures"); /*0x45ea88*/
      result = a1; /*0x45eaa2*/
      break; /*0x45eaaa*/
    case 13:
      *(_OWORD *)a1 = 0; /*0x45eab8*/
      *(_QWORD *)(a1 + 16) = 8; /*0x45eabb*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45eac3*/
      strcpy((char *)a1, "Clubstep"); /*0x45eacb*/
      result = a1; /*0x45eace*/
      break; /*0x45eada*/
    case 14:
      *(_OWORD *)a1 = 0; /*0x45eb2d*/
      *(_QWORD *)(a1 + 16) = 14; /*0x45eb30*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45eb38*/
      strcpy((char *)a1, "Electrodynamix"); /*0x45eb48*/
      result = a1; /*0x45eb60*/
      break; /*0x45eb6c*/
    case 15:
      *(_OWORD *)a1 = 0; /*0x45eb70*/
      *(_QWORD *)(a1 + 16) = 13; /*0x45eb73*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45eb7b*/
      strcpy((char *)a1, "Hexagon Force"); /*0x45eb8b*/
      result = a1; /*0x45eba2*/
      break; /*0x45ebae*/
    case 16:
      *(_OWORD *)a1 = 0; /*0x45ebb7*/
      *(_QWORD *)(a1 + 16) = 0; /*0x45ebba*/
      *(_QWORD *)(a1 + 24) = 0; /*0x45ebbe*/
      v7 = (char *)sub_3C460(32); /*0x45ebc2*/
      *(_QWORD *)a1 = v7; /*0x45ebc7*/
      *(_QWORD *)(a1 + 16) = 16; /*0x45ebca*/
      *(_QWORD *)(a1 + 24) = 31; /*0x45ebd2*/
      strcpy(v7, "Blast Processing"); /*0x45ebe1*/
      result = a1; /*0x45ebe8*/
      break; /*0x45ebf0*/
    case 17:
      *(_OWORD *)a1 = 0; /*0x45ebf9*/
      *(_QWORD *)(a1 + 16) = 0; /*0x45ebfc*/
      *(_QWORD *)(a1 + 24) = 0; /*0x45ec00*/
      v8 = (char *)sub_3C460(32); /*0x45ec04*/
      *(_QWORD *)a1 = v8; /*0x45ec09*/
      *(_QWORD *)(a1 + 16) = 22; /*0x45ec0c*/
      *(_QWORD *)(a1 + 24) = 31; /*0x45ec14*/
      strcpy(v8, "Theory of Everything 2"); /*0x45ec23*/
      result = a1; /*0x45ec3e*/
      break; /*0x45ec46*/
    case 18:
      *(_OWORD *)a1 = 0; /*0x45ec4f*/
      *(_QWORD *)(a1 + 16) = 0; /*0x45ec52*/
      *(_QWORD *)(a1 + 24) = 0; /*0x45ec56*/
      v9 = (char *)sub_3C460(32); /*0x45ec5a*/
      *(_QWORD *)a1 = v9; /*0x45ec5f*/
      *(_QWORD *)(a1 + 16) = 21; /*0x45ec62*/
      *(_QWORD *)(a1 + 24) = 31; /*0x45ec6a*/
      strcpy(v9, "Geometrical Dominator"); /*0x45ec79*/
      result = a1; /*0x45ec93*/
      break; /*0x45ec9b*/
    case 19:
      *(_OWORD *)a1 = 0; /*0x45ec9f*/
      *(_QWORD *)(a1 + 16) = 10; /*0x45eca2*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ecaa*/
      strcpy((char *)a1, "Deadlocked"); /*0x45ecba*/
      result = a1; /*0x45ecc9*/
      break; /*0x45ecd5*/
    case 20:
      *(_OWORD *)a1 = 0; /*0x45eda1*/
      *(_QWORD *)(a1 + 16) = 10; /*0x45eda4*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45edac*/
      strcpy((char *)a1, "Fingerdash"); /*0x45edbc*/
      result = a1; /*0x45edcb*/
      break; /*0x45edd7*/
    case 21:
      *(_OWORD *)a1 = 0; /*0x45ee17*/
      *(_QWORD *)(a1 + 16) = 4; /*0x45ee1a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ee22*/
      strcpy((char *)a1, "Dash"); /*0x45ee2a*/
      result = a1; /*0x45ee14*/
      break; /*0x45ee39*/
    case 22:
      *(_OWORD *)a1 = 0; /*0x45eddb*/
      *(_QWORD *)(a1 + 16) = 9; /*0x45edde*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ede6*/
      strcpy((char *)a1, "Explorers"); /*0x45edf6*/
      result = a1; /*0x45ee04*/
      break; /*0x45ee10*/
    case 23:
      *(_OWORD *)a1 = 0; /*0x45ecd9*/
      *(_QWORD *)(a1 + 16) = 14; /*0x45ecdc*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ece4*/
      strcpy((char *)a1, "The Seven Seas"); /*0x45ecf4*/
      result = a1; /*0x45ed0c*/
      break; /*0x45ed18*/
    case 24:
      *(_OWORD *)a1 = 0; /*0x45ed1c*/
      *(_QWORD *)(a1 + 16) = 12; /*0x45ed1f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ed27*/
      strcpy((char *)a1, "Viking Arena"); /*0x45ed37*/
      result = a1; /*0x45ed44*/
      break; /*0x45ed50*/
    case 25:
      *(_OWORD *)a1 = 0; /*0x45ed54*/
      *(_QWORD *)(a1 + 16) = 15; /*0x45ed57*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ed5f*/
      strcpy((char *)a1, "Airborne Robots"); /*0x45ed6f*/
      result = a1; /*0x45ed91*/
      break; /*0x45ed9d*/
    case 26:
      *(_OWORD *)a1 = 0; /*0x45ee3d*/
      *(_QWORD *)(a1 + 16) = 6; /*0x45ee40*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ee48*/
      strcpy((char *)a1, "Secret"); /*0x45ee56*/
      result = a1; /*0x45ee63*/
      break; /*0x45ee6f*/
    case 27:
      *(_OWORD *)a1 = 0; /*0x45ee73*/
      *(_QWORD *)(a1 + 16) = 7; /*0x45ee76*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ee7e*/
      *(_DWORD *)a1 = 1819894096; /*0x45ee8d*/
      *(_WORD *)(a1 + 4) = 24943; /*0x45ee96*/
      *(_BYTE *)(a1 + 6) = 100; /*0x45eea1*/
      *(_BYTE *)(a1 + 7) = 0; /*0x45eea7*/
      result = a1; /*0x45eea4*/
      break; /*0x45eeb0*/
    case 28:
      *(_OWORD *)a1 = 0; /*0x45eeb4*/
      *(_QWORD *)(a1 + 16) = 10; /*0x45eeb7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45eebf*/
      strcpy((char *)a1, "Beast Mode"); /*0x45eecf*/
      result = a1; /*0x45eede*/
      break; /*0x45eeea*/
    case 29:
      *(_OWORD *)a1 = 0; /*0x45eeee*/
      *(_QWORD *)(a1 + 16) = 7; /*0x45eef1*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45eef9*/
      *(_DWORD *)a1 = 1751343437; /*0x45ef08*/
      *(_WORD *)(a1 + 4) = 28265; /*0x45ef11*/
      *(_BYTE *)(a1 + 6) = 97; /*0x45ef1c*/
      *(_BYTE *)(a1 + 7) = 0; /*0x45ef22*/
      result = a1; /*0x45ef1f*/
      break; /*0x45ef2b*/
    case 30:
      *(_OWORD *)a1 = 0; /*0x45ef2f*/
      *(_QWORD *)(a1 + 16) = 5; /*0x45ef32*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ef3a*/
      *(_DWORD *)a1 = 1918985561; /*0x45ef48*/
      *(_BYTE *)(a1 + 4) = 115; /*0x45ef51*/
      *(_BYTE *)(a1 + 5) = 0; /*0x45ef57*/
      result = a1; /*0x45ef54*/
      break; /*0x45ef60*/
    case 31:
      *(_OWORD *)a1 = 0; /*0x45ef64*/
      *(_QWORD *)(a1 + 16) = 10; /*0x45ef67*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45ef6f*/
      strcpy((char *)a1, "Frontlines"); /*0x45ef7f*/
      result = a1; /*0x45ef8e*/
      break; /*0x45ef9a*/
    case 32:
      *(_OWORD *)a1 = 0; /*0x45f015*/
      *(_QWORD *)(a1 + 16) = 13; /*0x45f018*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45f020*/
      strcpy((char *)a1, "Space Pirates"); /*0x45f030*/
      result = a1; /*0x45f047*/
      break; /*0x45f053*/
    case 33:
      *(_OWORD *)a1 = 0; /*0x45efd4*/
      *(_QWORD *)(a1 + 16) = 7; /*0x45efd7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45efdf*/
      *(_DWORD *)a1 = 1769108563; /*0x45efee*/
      *(_WORD *)(a1 + 4) = 25963; /*0x45eff7*/
      *(_BYTE *)(a1 + 6) = 114; /*0x45f002*/
      *(_BYTE *)(a1 + 7) = 0; /*0x45f008*/
      result = a1; /*0x45f005*/
      break; /*0x45f011*/
    case 34:
      *(_OWORD *)a1 = 0; /*0x45ef9e*/
      *(_QWORD *)(a1 + 16) = 6; /*0x45efa1*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45efa9*/
      strcpy((char *)a1, "Embers"); /*0x45efb7*/
      result = a1; /*0x45efc4*/
      break; /*0x45efd0*/
    case 35:
      *(_OWORD *)a1 = 0; /*0x45f057*/
      *(_QWORD *)(a1 + 16) = 7; /*0x45f05a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45f062*/
      *(_DWORD *)a1 = 1853189970; /*0x45f071*/
      *(_WORD *)(a1 + 4) = 8292; /*0x45f07a*/
      *(_BYTE *)(a1 + 6) = 49; /*0x45f085*/
      *(_BYTE *)(a1 + 7) = 0; /*0x45f08b*/
      result = a1; /*0x45f088*/
      break; /*0x45f094*/
    case 36:
      *(_OWORD *)a1 = 0; /*0x45f09d*/
      *(_QWORD *)(a1 + 16) = 0; /*0x45f0a0*/
      *(_QWORD *)(a1 + 24) = 0; /*0x45f0a4*/
      v10 = (char *)sub_3C460(32); /*0x45f0a8*/
      *(_QWORD *)a1 = v10; /*0x45f0ad*/
      *(_QWORD *)(a1 + 16) = 17; /*0x45f0b0*/
      *(_QWORD *)(a1 + 24) = 31; /*0x45f0b8*/
      strcpy(v10, "Monster Dance Off"); /*0x45f0c7*/
      result = a1; /*0x45f0d8*/
      break; /*0x45f0e0*/
    case 37:
      *(_OWORD *)a1 = 0; /*0x45f0e4*/
      *(_QWORD *)(a1 + 16) = 11; /*0x45f0e7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45f0ef*/
      strcpy((char *)a1, "Press Start"); /*0x45f0ff*/
      result = a1; /*0x45f118*/
      break; /*0x45f124*/
    case 38:
      *(_OWORD *)a1 = 0; /*0x45f128*/
      *(_QWORD *)(a1 + 16) = 7; /*0x45f12b*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45f133*/
      *(_DWORD *)a1 = 1801678670; /*0x45f142*/
      *(_WORD *)(a1 + 4) = 17696; /*0x45f14b*/
      *(_BYTE *)(a1 + 6) = 109; /*0x45f156*/
      *(_BYTE *)(a1 + 7) = 0; /*0x45f15c*/
      result = a1; /*0x45f159*/
      break; /*0x45f165*/
    case 39:
      *(_OWORD *)a1 = 0; /*0x45f169*/
      *(_QWORD *)(a1 + 16) = 10; /*0x45f16c*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45f174*/
      strcpy((char *)a1, "Power Trip"); /*0x45f184*/
      result = a1; /*0x45f193*/
      break; /*0x45f19f*/
    default:
      *(_OWORD *)a1 = 0; /*0x45f1a3*/
      *(_QWORD *)(a1 + 16) = 7; /*0x45f1a6*/
      *(_QWORD *)(a1 + 24) = 15; /*0x45f1ae*/
      *(_DWORD *)a1 = 1852534357; /*0x45f1bd*/
      *(_WORD *)(a1 + 4) = 30575; /*0x45f1c6*/
      *(_BYTE *)(a1 + 6) = 110; /*0x45f1d1*/
      *(_BYTE *)(a1 + 7) = 0; /*0x45f1d7*/
      result = a1; /*0x45f1d4*/
      break; /*0x45f1d4*/
  }
  return result; /*0x45e799*/
}

// [4/9] Address: 0x45fe30
// Method: LevelTools::artistForAudio
__int64 __fastcall LevelTools_artistForAudio(int a1)
{
  __int64 result; // rax

  switch ( a1 ) /*0x45fe53*/
  {
    case -1: /*0x45fe53*/
      result = 2; /*0x45fe61*/
      break; /*0x45fe66*/
    case 0: /*0x45fe53*/
      result = 3; /*0x45fe5b*/
      break; /*0x45fe60*/
    case 2: /*0x45fe53*/
      result = 4; /*0x45fe55*/
      break; /*0x45fe5a*/
    case 6: /*0x45fe53*/
    case 7: /*0x45fe53*/
    case 10: /*0x45fe53*/
    case 12: /*0x45fe53*/
    case 15: /*0x45fe53*/
    case 16: /*0x45fe53*/
    case 18: /*0x45fe53*/
    case 32: /*0x45fe53*/
    case 33: /*0x45fe53*/
      result = 1; /*0x45fe73*/
      break; /*0x45fe78*/
    case 11: /*0x45fe53*/
    case 13: /*0x45fe53*/
    case 14: /*0x45fe53*/
    case 17: /*0x45fe53*/
      result = 5; /*0x45fe67*/
      break; /*0x45fe6c*/
    case 19: /*0x45fe53*/
    case 23: /*0x45fe53*/
    case 24: /*0x45fe53*/
    case 25: /*0x45fe53*/
    case 36: /*0x45fe53*/
      result = 6; /*0x45fe7f*/
      break; /*0x45fe84*/
    case 20: /*0x45fe53*/
    case 21: /*0x45fe53*/
    case 37: /*0x45fe53*/
      result = 7; /*0x45fe6d*/
      break; /*0x45fe72*/
    case 22: /*0x45fe53*/
      result = 11; /*0x45fe91*/
      break; /*0x45fe96*/
    case 27: /*0x45fe53*/
    case 28: /*0x45fe53*/
    case 29: /*0x45fe53*/
    case 30: /*0x45fe53*/
    case 31: /*0x45fe53*/
    case 34: /*0x45fe53*/
    case 35: /*0x45fe53*/
      result = 8; /*0x45fe79*/
      break; /*0x45fe7e*/
    case 38: /*0x45fe53*/
      result = 10; /*0x45fe85*/
      break; /*0x45fe8a*/
    case 39: /*0x45fe53*/
      result = 9; /*0x45fe8b*/
      break; /*0x45fe90*/
    default:
      result = 0; /*0x45fe97*/
      break; /*0x45fe97*/
  }
  return result; /*0x45fe5a*/
}

// [5/9] Address: 0x460200
// Method: LevelTools::urlForAudio
__int64 __fastcall LevelTools_urlForAudio(__int64 a1, int a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rcx
  __int64 result; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rax
  _BYTE *v9; // rcx
  _BYTE *v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rax
  _BYTE *v13; // rcx
  _BYTE *v14; // rax
  _BYTE *v15; // rcx
  _BYTE *v16; // rax
  _BYTE *v17; // rcx
  _BYTE *v18; // rax
  _BYTE *v19; // rcx
  _BYTE *v20; // rax
  _BYTE *v21; // rcx
  _BYTE *v22; // rax
  _BYTE *v23; // rcx
  _BYTE *v24; // rax
  _BYTE *v25; // rcx
  _BYTE *v26; // rax
  _BYTE *v27; // rcx
  _BYTE *v28; // rax
  _BYTE *v29; // rcx
  _BYTE *v30; // rax
  _BYTE *v31; // rcx
  _BYTE *v32; // rax
  _BYTE *v33; // rcx
  _BYTE *v34; // rax
  _BYTE *v35; // rcx
  _BYTE *v36; // rax
  _BYTE *v37; // rcx
  _BYTE *v38; // rax
  _BYTE *v39; // rcx
  _BYTE *v40; // rax
  _BYTE *v41; // rcx
  char *v42; // rax
  _BYTE *v43; // rax
  _BYTE *v44; // rcx
  _BYTE *v45; // rax
  _BYTE *v46; // rcx
  _BYTE *v47; // rax
  _BYTE *v48; // rcx
  _BYTE *v49; // rax
  _BYTE *v50; // rcx
  _BYTE *v51; // rax
  _BYTE *v52; // rcx
  _BYTE *v53; // rax
  _BYTE *v54; // rcx
  char *v55; // rax
  _BYTE *v56; // rax
  _BYTE *v57; // rcx
  _BYTE *v58; // rax
  _BYTE *v59; // rcx
  _BYTE *v60; // rax
  _BYTE *v61; // rcx
  _BYTE *v62; // rax
  _BYTE *v63; // rcx
  _BYTE *v64; // rax
  _BYTE *v65; // rcx
  _BYTE *v66; // rax
  _BYTE *v67; // rcx
  _BYTE *v68; // rax
  _BYTE *v69; // rcx
  _BYTE *v70; // rax
  _BYTE *v71; // rcx
  _BYTE *v72; // rax
  _BYTE *v73; // rcx
  _BYTE *v74; // rax
  _BYTE *v75; // rcx
  _BYTE *v76; // rax
  _BYTE *v77; // rcx
  _BYTE *v78; // rax
  _BYTE *v79; // rcx
  _BYTE *v80; // rax
  _BYTE *v81; // rcx

  switch ( a2 ) /*0x46022b*/
  {
    case -1: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4608e1*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4608e4*/
      *(_QWORD *)(a1 + 24) = 0; /*0x4608e8*/
      v34 = (_BYTE *)sub_3C460(48); /*0x4608ec*/
      *(_QWORD *)a1 = v34; /*0x4608f1*/
      v35 = v34; /*0x4608f4*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4608f7*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4608ff*/
      qmemcpy(v34, "https://www.youtube.com/watch?v=5Epc1Beme90", 43); /*0x46090e*/
      v35[43] = 0; /*0x460941*/
      result = a1; /*0x46093e*/
      break; /*0x46094a*/
    case 0: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4604e1*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4604e4*/
      *(_QWORD *)(a1 + 24) = 0; /*0x4604e8*/
      v16 = (_BYTE *)sub_3C460(48); /*0x4604ec*/
      *(_QWORD *)a1 = v16; /*0x4604f1*/
      v17 = v16; /*0x4604f4*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4604f7*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4604ff*/
      qmemcpy(v16, "https://www.youtube.com/watch?v=JhKyKEDxo8Q", 43); /*0x46050e*/
      v17[43] = 0; /*0x460541*/
      result = a1; /*0x46053e*/
      break; /*0x46054a*/
    case 1: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460235*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460238*/
      *(_QWORD *)(a1 + 24) = 0; /*0x46023c*/
      v3 = (_BYTE *)sub_3C460(48); /*0x460240*/
      *(_QWORD *)a1 = v3; /*0x460245*/
      v4 = v3; /*0x460248*/
      *(_QWORD *)(a1 + 16) = 43; /*0x46024b*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460253*/
      qmemcpy(v3, "https://www.youtube.com/watch?v=N9vDTYZpqXM", 43); /*0x460262*/
      v4[43] = 0; /*0x460295*/
      result = a1; /*0x460292*/
      break; /*0x46029e*/
    case 2: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x46046f*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460472*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460476*/
      v14 = (_BYTE *)sub_3C460(48); /*0x46047a*/
      *(_QWORD *)a1 = v14; /*0x46047f*/
      v15 = v14; /*0x460482*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460485*/
      *(_QWORD *)(a1 + 24) = 47; /*0x46048d*/
      qmemcpy(v14, "https://www.youtube.com/watch?v=4W28wWWxKuQ", 43); /*0x46049c*/
      v15[43] = 0; /*0x4604cf*/
      result = a1; /*0x4604cc*/
      break; /*0x4604d8*/
    case 3: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4603fd*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460400*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460404*/
      v12 = (_BYTE *)sub_3C460(48); /*0x460408*/
      *(_QWORD *)a1 = v12; /*0x46040d*/
      v13 = v12; /*0x460410*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460413*/
      *(_QWORD *)(a1 + 24) = 47; /*0x46041b*/
      qmemcpy(v12, "https://www.youtube.com/watch?v=FnXabH2q2A0", 43); /*0x46042a*/
      v13[43] = 0; /*0x46045d*/
      result = a1; /*0x46045a*/
      break; /*0x460466*/
    case 4: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4602a7*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4602aa*/
      *(_QWORD *)(a1 + 24) = 0; /*0x4602ae*/
      v6 = (_BYTE *)sub_3C460(48); /*0x4602b2*/
      *(_QWORD *)a1 = v6; /*0x4602b7*/
      v7 = v6; /*0x4602ba*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4602bd*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4602c5*/
      qmemcpy(v6, "https://www.youtube.com/watch?v=TZULkgQPHt0", 43); /*0x4602d4*/
      v7[43] = 0; /*0x460307*/
      result = a1; /*0x460304*/
      break; /*0x460310*/
    case 5: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460319*/
      *(_QWORD *)(a1 + 16) = 0; /*0x46031c*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460320*/
      v8 = (_BYTE *)sub_3C460(48); /*0x460324*/
      *(_QWORD *)a1 = v8; /*0x460329*/
      v9 = v8; /*0x46032c*/
      *(_QWORD *)(a1 + 16) = 43; /*0x46032f*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460337*/
      qmemcpy(v8, "https://www.youtube.com/watch?v=fLnF-QnR1Zw", 43); /*0x460346*/
      v9[43] = 0; /*0x460379*/
      result = a1; /*0x460376*/
      break; /*0x460382*/
    case 6: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4605c5*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4605c8*/
      *(_QWORD *)(a1 + 24) = 0; /*0x4605cc*/
      v20 = (_BYTE *)sub_3C460(48); /*0x4605d0*/
      *(_QWORD *)a1 = v20; /*0x4605d5*/
      v21 = v20; /*0x4605d8*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4605db*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4605e3*/
      qmemcpy(v20, "https://www.youtube.com/watch?v=ZXHO4AN_49Q", 43); /*0x4605f2*/
      v21[43] = 0; /*0x460625*/
      result = a1; /*0x460622*/
      break; /*0x46062e*/
    case 7: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460637*/
      *(_QWORD *)(a1 + 16) = 0; /*0x46063a*/
      *(_QWORD *)(a1 + 24) = 0; /*0x46063e*/
      v22 = (_BYTE *)sub_3C460(48); /*0x460642*/
      *(_QWORD *)a1 = v22; /*0x460647*/
      v23 = v22; /*0x46064a*/
      *(_QWORD *)(a1 + 16) = 43; /*0x46064d*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460655*/
      qmemcpy(v22, "https://www.youtube.com/watch?v=zZ1L9JD6l0g", 43); /*0x460664*/
      v23[43] = 0; /*0x460697*/
      result = a1; /*0x460694*/
      break; /*0x4606a0*/
    case 8: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x46038b*/
      *(_QWORD *)(a1 + 16) = 0; /*0x46038e*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460392*/
      v10 = (_BYTE *)sub_3C460(48); /*0x460396*/
      *(_QWORD *)a1 = v10; /*0x46039b*/
      v11 = v10; /*0x46039e*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4603a1*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4603a9*/
      qmemcpy(v10, "https://www.youtube.com/watch?v=KDdvGZn6Gfs", 43); /*0x4603b8*/
      v11[43] = 0; /*0x4603eb*/
      result = a1; /*0x4603e8*/
      break; /*0x4603f4*/
    case 9: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460553*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460556*/
      *(_QWORD *)(a1 + 24) = 0; /*0x46055a*/
      v18 = (_BYTE *)sub_3C460(48); /*0x46055e*/
      *(_QWORD *)a1 = v18; /*0x460563*/
      v19 = v18; /*0x460566*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460569*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460571*/
      qmemcpy(v18, "https://www.youtube.com/watch?v=PSvYfVGyQfw", 43); /*0x460580*/
      v19[43] = 0; /*0x4605b3*/
      result = a1; /*0x4605b0*/
      break; /*0x4605bc*/
    case 10: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4606a9*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4606ac*/
      *(_QWORD *)(a1 + 24) = 0; /*0x4606b0*/
      v24 = (_BYTE *)sub_3C460(48); /*0x4606b4*/
      *(_QWORD *)a1 = v24; /*0x4606b9*/
      v25 = v24; /*0x4606bc*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4606bf*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4606c7*/
      qmemcpy(v24, "https://www.youtube.com/watch?v=D5uJOpItgNg", 43); /*0x4606d6*/
      v25[43] = 0; /*0x460709*/
      result = a1; /*0x460706*/
      break; /*0x460712*/
    case 11: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x46071b*/
      *(_QWORD *)(a1 + 16) = 0; /*0x46071e*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460722*/
      v26 = (_BYTE *)sub_3C460(48); /*0x460726*/
      *(_QWORD *)a1 = v26; /*0x46072b*/
      v27 = v26; /*0x46072e*/
      *(_QWORD *)(a1 + 16) = 46; /*0x460731*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460739*/
      qmemcpy(v26, "https://www.newgrounds.com/audio/listen/354826", 46); /*0x460748*/
      v27[46] = 0; /*0x46077a*/
      result = a1; /*0x460777*/
      break; /*0x460783*/
    case 12: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4607fe*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460801*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460805*/
      v30 = (_BYTE *)sub_3C460(48); /*0x460809*/
      *(_QWORD *)a1 = v30; /*0x46080e*/
      v31 = v30; /*0x460811*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460814*/
      *(_QWORD *)(a1 + 24) = 47; /*0x46081c*/
      qmemcpy(v30, "https://www.youtube.com/watch?v=Pb6KyewC_Vg", 43); /*0x46082b*/
      v31[43] = 0; /*0x46085e*/
      result = a1; /*0x46085b*/
      break; /*0x460867*/
    case 13: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460870*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460873*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460877*/
      v32 = (_BYTE *)sub_3C460(48); /*0x46087b*/
      *(_QWORD *)a1 = v32; /*0x460880*/
      v33 = v32; /*0x460883*/
      *(_QWORD *)(a1 + 16) = 46; /*0x460886*/
      *(_QWORD *)(a1 + 24) = 47; /*0x46088e*/
      qmemcpy(v32, "https://www.newgrounds.com/audio/listen/396093", 46); /*0x46089d*/
      v33[46] = 0; /*0x4608cf*/
      result = a1; /*0x4608cc*/
      break; /*0x4608d8*/
    case 14: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460953*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460956*/
      *(_QWORD *)(a1 + 24) = 0; /*0x46095a*/
      v36 = (_BYTE *)sub_3C460(48); /*0x46095e*/
      *(_QWORD *)a1 = v36; /*0x460963*/
      v37 = v36; /*0x460966*/
      *(_QWORD *)(a1 + 16) = 46; /*0x460969*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460971*/
      qmemcpy(v36, "https://www.newgrounds.com/audio/listen/368392", 46); /*0x460980*/
      v37[46] = 0; /*0x4609b2*/
      result = a1; /*0x4609af*/
      break; /*0x4609bb*/
    case 15: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4609c4*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4609c7*/
      *(_QWORD *)(a1 + 24) = 0; /*0x4609cb*/
      v38 = (_BYTE *)sub_3C460(48); /*0x4609cf*/
      *(_QWORD *)a1 = v38; /*0x4609d4*/
      v39 = v38; /*0x4609d7*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4609da*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4609e2*/
      qmemcpy(v38, "https://www.youtube.com/watch?v=afwK743PL2Y", 43); /*0x4609f1*/
      v39[43] = 0; /*0x460a24*/
      result = a1; /*0x460a21*/
      break; /*0x460a2d*/
    case 16: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460a36*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460a39*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460a3d*/
      v40 = (_BYTE *)sub_3C460(48); /*0x460a41*/
      *(_QWORD *)a1 = v40; /*0x460a46*/
      v41 = v40; /*0x460a49*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460a4c*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460a54*/
      qmemcpy(v40, "https://www.youtube.com/watch?v=Z5RufkDHsdM", 43); /*0x460a63*/
      v41[43] = 0; /*0x460a96*/
      result = a1; /*0x460a93*/
      break; /*0x460a9f*/
    case 17: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x46078c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x46078f*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460793*/
      v28 = (_BYTE *)sub_3C460(48); /*0x460797*/
      *(_QWORD *)a1 = v28; /*0x46079c*/
      v29 = v28; /*0x46079f*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4607a2*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4607aa*/
      qmemcpy(v28, "https://www.youtube.com/watch?v=fn98711CEoI", 43); /*0x4607b9*/
      v29[43] = 0; /*0x4607ec*/
      result = a1; /*0x4607e9*/
      break; /*0x4607f5*/
    case 18: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460aa8*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460aab*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460aaf*/
      v42 = (char *)sub_3C460(64); /*0x460ab3*/
      *(_QWORD *)a1 = v42; /*0x460ab8*/
      *(_QWORD *)(a1 + 16) = 48; /*0x460abb*/
      *(_QWORD *)(a1 + 24) = 63; /*0x460ac3*/
      strcpy(v42, "https://www.robtopgames.com/geometricaldominator"); /*0x460ad2*/
      result = a1; /*0x460aef*/
      break; /*0x460af7*/
    case 19: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460b00*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460b03*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460b07*/
      v43 = (_BYTE *)sub_3C460(48); /*0x460b0b*/
      *(_QWORD *)a1 = v43; /*0x460b10*/
      v44 = v43; /*0x460b13*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460b16*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460b1e*/
      qmemcpy(v43, "https://www.youtube.com/watch?v=QRGkFkf2r0U", 43); /*0x460b2d*/
      v44[43] = 0; /*0x460b60*/
      result = a1; /*0x460b5d*/
      break; /*0x460b69*/
    case 20: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460cc8*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460ccb*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460ccf*/
      v51 = (_BYTE *)sub_3C460(48); /*0x460cd3*/
      *(_QWORD *)a1 = v51; /*0x460cd8*/
      v52 = v51; /*0x460cdb*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460cde*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460ce6*/
      qmemcpy(v51, "https://www.youtube.com/watch?v=BuPmq7yjDnI", 43); /*0x460cf5*/
      v52[43] = 0; /*0x460d28*/
      result = a1; /*0x460d25*/
      break; /*0x460d31*/
    case 21: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460dac*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460daf*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460db3*/
      v55 = (char *)sub_3C460(48); /*0x460db7*/
      *(_QWORD *)a1 = v55; /*0x460dbc*/
      *(_QWORD *)(a1 + 16) = 32; /*0x460dbf*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460dc7*/
      strcpy(v55, "https://www.robtopgames.com/dash"); /*0x460dd6*/
      result = a1; /*0x460de8*/
      break; /*0x460df0*/
    case 22: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460d3a*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460d3d*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460d41*/
      v53 = (_BYTE *)sub_3C460(48); /*0x460d45*/
      *(_QWORD *)a1 = v53; /*0x460d4a*/
      v54 = v53; /*0x460d4d*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460d50*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460d58*/
      qmemcpy(v53, "https://www.youtube.com/watch?v=fc1tg9qkGyI", 43); /*0x460d67*/
      v54[43] = 0; /*0x460d9a*/
      result = a1; /*0x460d97*/
      break; /*0x460da3*/
    case 23: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460b72*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460b75*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460b79*/
      v45 = (_BYTE *)sub_3C460(48); /*0x460b7d*/
      *(_QWORD *)a1 = v45; /*0x460b82*/
      v46 = v45; /*0x460b85*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460b88*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460b90*/
      qmemcpy(v45, "https://www.youtube.com/watch?v=38fPQ5JKQ_Q", 43); /*0x460b9f*/
      v46[43] = 0; /*0x460bd2*/
      result = a1; /*0x460bcf*/
      break; /*0x460bdb*/
    case 24: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460be4*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460be7*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460beb*/
      v47 = (_BYTE *)sub_3C460(48); /*0x460bef*/
      *(_QWORD *)a1 = v47; /*0x460bf4*/
      v48 = v47; /*0x460bf7*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460bfa*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460c02*/
      qmemcpy(v47, "https://www.youtube.com/watch?v=RaJ6Vf2w9hY", 43); /*0x460c11*/
      v48[43] = 0; /*0x460c44*/
      result = a1; /*0x460c41*/
      break; /*0x460c4d*/
    case 25: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460c56*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460c59*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460c5d*/
      v49 = (_BYTE *)sub_3C460(48); /*0x460c61*/
      *(_QWORD *)a1 = v49; /*0x460c66*/
      v50 = v49; /*0x460c69*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460c6c*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460c74*/
      qmemcpy(v49, "https://www.youtube.com/watch?v=guBpnPY32s0", 43); /*0x460c83*/
      v50[43] = 0; /*0x460cb6*/
      result = a1; /*0x460cb3*/
      break; /*0x460cbf*/
    case 27: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460df9*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460dfc*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460e00*/
      v56 = (_BYTE *)sub_3C460(48); /*0x460e04*/
      *(_QWORD *)a1 = v56; /*0x460e09*/
      v57 = v56; /*0x460e0c*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460e0f*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460e17*/
      qmemcpy(v56, "https://www.youtube.com/watch?v=2SFOjJxEL7g", 43); /*0x460e26*/
      v57[43] = 0; /*0x460e59*/
      result = a1; /*0x460e56*/
      break; /*0x460e62*/
    case 28: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460e6b*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460e6e*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460e72*/
      v58 = (_BYTE *)sub_3C460(48); /*0x460e76*/
      *(_QWORD *)a1 = v58; /*0x460e7b*/
      v59 = v58; /*0x460e7e*/
      *(_QWORD *)(a1 + 16) = 46; /*0x460e81*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460e89*/
      qmemcpy(v58, "https://www.newgrounds.com/audio/listen/589874", 46); /*0x460e98*/
      v59[46] = 0; /*0x460eca*/
      result = a1; /*0x460ec7*/
      break; /*0x460ed3*/
    case 29: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460edc*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460edf*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460ee3*/
      v60 = (_BYTE *)sub_3C460(48); /*0x460ee7*/
      *(_QWORD *)a1 = v60; /*0x460eec*/
      v61 = v60; /*0x460eef*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460ef2*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460efa*/
      qmemcpy(v60, "https://www.youtube.com/watch?v=EWjZOxs87yg", 43); /*0x460f09*/
      v61[43] = 0; /*0x460f3c*/
      result = a1; /*0x460f39*/
      break; /*0x460f45*/
    case 30: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460f4e*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460f51*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460f55*/
      v62 = (_BYTE *)sub_3C460(48); /*0x460f59*/
      *(_QWORD *)a1 = v62; /*0x460f5e*/
      v63 = v62; /*0x460f61*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460f64*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460f6c*/
      qmemcpy(v62, "https://www.youtube.com/watch?v=0MZvDD_sy-w", 43); /*0x460f7b*/
      v63[43] = 0; /*0x460fae*/
      result = a1; /*0x460fab*/
      break; /*0x460fb7*/
    case 31: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x460fc0*/
      *(_QWORD *)(a1 + 16) = 0; /*0x460fc3*/
      *(_QWORD *)(a1 + 24) = 0; /*0x460fc7*/
      v64 = (_BYTE *)sub_3C460(48); /*0x460fcb*/
      *(_QWORD *)a1 = v64; /*0x460fd0*/
      v65 = v64; /*0x460fd3*/
      *(_QWORD *)(a1 + 16) = 43; /*0x460fd6*/
      *(_QWORD *)(a1 + 24) = 47; /*0x460fde*/
      qmemcpy(v64, "https://www.youtube.com/watch?v=f3wAripOdag", 43); /*0x460fed*/
      v65[43] = 0; /*0x461020*/
      result = a1; /*0x46101d*/
      break; /*0x461029*/
    case 32: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x461032*/
      *(_QWORD *)(a1 + 16) = 0; /*0x461035*/
      *(_QWORD *)(a1 + 24) = 0; /*0x461039*/
      v66 = (_BYTE *)sub_3C460(48); /*0x46103d*/
      *(_QWORD *)a1 = v66; /*0x461042*/
      v67 = v66; /*0x461045*/
      *(_QWORD *)(a1 + 16) = 43; /*0x461048*/
      *(_QWORD *)(a1 + 24) = 47; /*0x461050*/
      qmemcpy(v66, "https://www.youtube.com/watch?v=Cu7HaeRHMhM", 43); /*0x46105f*/
      v67[43] = 0; /*0x461092*/
      result = a1; /*0x46108f*/
      break; /*0x46109b*/
    case 33: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4610a4*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4610a7*/
      *(_QWORD *)(a1 + 24) = 0; /*0x4610ab*/
      v68 = (_BYTE *)sub_3C460(48); /*0x4610af*/
      *(_QWORD *)a1 = v68; /*0x4610b4*/
      v69 = v68; /*0x4610b7*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4610ba*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4610c2*/
      qmemcpy(v68, "https://www.youtube.com/watch?v=MU9wRCGt9h8", 43); /*0x4610d1*/
      v69[43] = 0; /*0x461104*/
      result = a1; /*0x461101*/
      break; /*0x46110d*/
    case 34: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x461116*/
      *(_QWORD *)(a1 + 16) = 0; /*0x461119*/
      *(_QWORD *)(a1 + 24) = 0; /*0x46111d*/
      v70 = (_BYTE *)sub_3C460(48); /*0x461121*/
      *(_QWORD *)a1 = v70; /*0x461126*/
      v71 = v70; /*0x461129*/
      *(_QWORD *)(a1 + 16) = 43; /*0x46112c*/
      *(_QWORD *)(a1 + 24) = 47; /*0x461134*/
      qmemcpy(v70, "https://www.youtube.com/watch?v=nMDMlIvdqlA", 43); /*0x461143*/
      v71[43] = 0; /*0x461176*/
      result = a1; /*0x461173*/
      break; /*0x46117f*/
    case 35: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x461188*/
      *(_QWORD *)(a1 + 16) = 0; /*0x46118b*/
      *(_QWORD *)(a1 + 24) = 0; /*0x46118f*/
      v72 = (_BYTE *)sub_3C460(48); /*0x461193*/
      *(_QWORD *)a1 = v72; /*0x461198*/
      v73 = v72; /*0x46119b*/
      *(_QWORD *)(a1 + 16) = 43; /*0x46119e*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4611a6*/
      qmemcpy(v72, "https://www.youtube.com/watch?v=NvQoY4gTIGU", 43); /*0x4611b5*/
      v73[43] = 0; /*0x4611e8*/
      result = a1; /*0x4611e5*/
      break; /*0x4611f1*/
    case 36: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4611fa*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4611fd*/
      *(_QWORD *)(a1 + 24) = 0; /*0x461201*/
      v74 = (_BYTE *)sub_3C460(48); /*0x461205*/
      *(_QWORD *)a1 = v74; /*0x46120a*/
      v75 = v74; /*0x46120d*/
      *(_QWORD *)(a1 + 16) = 43; /*0x461210*/
      *(_QWORD *)(a1 + 24) = 47; /*0x461218*/
      qmemcpy(v74, "https://www.youtube.com/watch?v=B8YkwDbGBr8", 43); /*0x461227*/
      v75[43] = 0; /*0x46125a*/
      result = a1; /*0x461257*/
      break; /*0x461263*/
    case 37: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x46126c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x46126f*/
      *(_QWORD *)(a1 + 24) = 0; /*0x461273*/
      v76 = (_BYTE *)sub_3C460(48); /*0x461277*/
      *(_QWORD *)a1 = v76; /*0x46127c*/
      v77 = v76; /*0x46127f*/
      *(_QWORD *)(a1 + 16) = 43; /*0x461282*/
      *(_QWORD *)(a1 + 24) = 47; /*0x46128a*/
      qmemcpy(v76, "https://www.youtube.com/watch?v=XoLouT7TqZY", 43); /*0x461299*/
      v77[43] = 0; /*0x4612cc*/
      result = a1; /*0x4612c9*/
      break; /*0x4612d5*/
    case 38: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x4612de*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4612e1*/
      *(_QWORD *)(a1 + 24) = 0; /*0x4612e5*/
      v78 = (_BYTE *)sub_3C460(48); /*0x4612e9*/
      *(_QWORD *)a1 = v78; /*0x4612ee*/
      v79 = v78; /*0x4612f1*/
      *(_QWORD *)(a1 + 16) = 43; /*0x4612f4*/
      *(_QWORD *)(a1 + 24) = 47; /*0x4612fc*/
      qmemcpy(v78, "https://www.youtube.com/watch?v=ePv2X_CCaGg", 43); /*0x46130b*/
      v79[43] = 0; /*0x46133e*/
      result = a1; /*0x46133b*/
      break; /*0x461347*/
    case 39: /*0x46022b*/
      *(_OWORD *)a1 = 0; /*0x461350*/
      *(_QWORD *)(a1 + 16) = 0; /*0x461353*/
      *(_QWORD *)(a1 + 24) = 0; /*0x461357*/
      v80 = (_BYTE *)sub_3C460(48); /*0x46135b*/
      *(_QWORD *)a1 = v80; /*0x461360*/
      v81 = v80; /*0x461363*/
      *(_QWORD *)(a1 + 16) = 43; /*0x461366*/
      *(_QWORD *)(a1 + 24) = 47; /*0x46136e*/
      qmemcpy(v80, "https://www.youtube.com/watch?v=l6OsF7RlQb4", 43); /*0x46137d*/
      v81[43] = 0; /*0x4613b0*/
      result = a1; /*0x4613ad*/
      break; /*0x4613b9*/
    default:
      *(_OWORD *)a1 = 0; /*0x4613c0*/
      *(_QWORD *)(a1 + 16) = 0; /*0x4613c3*/
      *(_QWORD *)(a1 + 24) = 15; /*0x4613c7*/
      *(_BYTE *)a1 = 0; /*0x4613cf*/
      result = a1; /*0x4613bd*/
      break; /*0x4613bd*/
  }
  return result; /*0x460299*/
}

// [7/9] Address: 0x463d40
// Method: LevelTools::verifyLevelIntegrity
bool __fastcall LevelTools_verifyLevelIntegrity(__int64 a1, int a2)
{
  int v2; // ebx
  bool result; // al

  v2 = *(_DWORD *)(a1 + 16); /*0x463d46*/
  switch ( a2 ) /*0x463d69*/
  {
    case 1: /*0x463d69*/
      sub_3C310(a1); /*0x463d6b*/
      result = v2 == 41941; /*0x463d76*/
      break; /*0x463d7e*/
    case 2: /*0x463d69*/
      sub_3C310(a1); /*0x463d7f*/
      result = v2 == 27194; /*0x463d8a*/
      break; /*0x463d92*/
    case 3: /*0x463d69*/
      sub_3C310(a1); /*0x463d93*/
      result = v2 == 27485; /*0x463d9e*/
      break; /*0x463da6*/
    case 4: /*0x463d69*/
      sub_3C310(a1); /*0x463da7*/
      result = v2 == 28387; /*0x463db2*/
      break; /*0x463dba*/
    case 5: /*0x463d69*/
      sub_3C310(a1); /*0x463dbb*/
      result = v2 == 39306; /*0x463dc6*/
      break; /*0x463dce*/
    case 6: /*0x463d69*/
      sub_3C310(a1); /*0x463dcf*/
      result = v2 == 32534; /*0x463dda*/
      break; /*0x463de2*/
    case 7: /*0x463d69*/
      sub_3C310(a1); /*0x463de3*/
      result = v2 == 52577; /*0x463dee*/
      break; /*0x463df6*/
    case 8: /*0x463d69*/
      sub_3C310(a1); /*0x463df7*/
      result = v2 == 68387; /*0x463e02*/
      break; /*0x463e0a*/
    case 9: /*0x463d69*/
      sub_3C310(a1); /*0x463e0b*/
      result = v2 == 73863; /*0x463e16*/
      break; /*0x463e1e*/
    case 10: /*0x463d69*/
      sub_3C310(a1); /*0x463e1f*/
      result = v2 == 95360; /*0x463e2a*/
      break; /*0x463e32*/
    case 11: /*0x463d69*/
      sub_3C310(a1); /*0x463e33*/
      result = v2 == 96482; /*0x463e3e*/
      break; /*0x463e46*/
    case 12: /*0x463d69*/
      sub_3C310(a1); /*0x463e47*/
      result = v2 == 91628; /*0x463e52*/
      break; /*0x463e5a*/
    case 13: /*0x463d69*/
      sub_3C310(a1); /*0x463e5b*/
      result = v2 == 119893; /*0x463e66*/
      break; /*0x463e6e*/
    case 14: /*0x463d69*/
      sub_3C310(a1); /*0x463e6f*/
      result = v2 == 162731; /*0x463e7a*/
      break; /*0x463e82*/
    case 15: /*0x463d69*/
      sub_3C310(a1); /*0x463e83*/
      result = v2 == 207047; /*0x463e8e*/
      break; /*0x463e96*/
    case 16: /*0x463d69*/
      sub_3C310(a1); /*0x463e97*/
      result = v2 == 238937; /*0x463ea2*/
      break; /*0x463eaa*/
    case 17: /*0x463d69*/
      sub_3C310(a1); /*0x463eab*/
      result = v2 == 290335; /*0x463eb6*/
      break; /*0x463ebe*/
    case 18: /*0x463d69*/
      sub_3C310(a1); /*0x463ebf*/
      result = v2 == 370132; /*0x463eca*/
      break; /*0x463ed2*/
    case 19: /*0x463d69*/
      sub_3C310(a1); /*0x463ed3*/
      result = v2 == 635171; /*0x463ede*/
      break; /*0x463ee6*/
    case 20: /*0x463d69*/
      sub_3C310(a1); /*0x463ee7*/
      result = v2 == 739125; /*0x463ef2*/
      break; /*0x463efa*/
    default:
      sub_3C310(a1); /*0x463efb*/
      result = 1; /*0x463f00*/
      break; /*0x463f00*/
  }
  return result; /*0x463d79*/
}

// [8/9] Address: 0x463ff0
// Method: LevelTools::moveTriggerObjectsToArray
int __fastcall LevelTools_moveTriggerObjectsToArray(cocos2d::CCArray *a1, cocos2d::CCDictionary *a2, int a3)
{
  struct cocos2d::CCObject *v5; // rax
  cocos2d::CCArray *v6; // rbx
  struct cocos2d::CCObject *v7; // rdi
  struct cocos2d::CCObject *v8; // rax

  v5 = cocos2d::CCDictionary::objectForKey(a2, a3); /*0x46400b*/
  v6 = v5; /*0x464011*/
  if ( v5 ) /*0x464017*/
  {
LABEL_2:
    LODWORD(v5) = cocos2d::CCArray::count(v6); /*0x464022*/
    if ( (_DWORD)v5 ) /*0x46402d*/
    {
      while ( 1 ) /*0x464033*/
      {
        LODWORD(v5) = cocos2d::CCArray::count(v6); /*0x464033*/
        if ( !(_DWORD)v5 ) /*0x46403b*/
          break; /*0x46403b*/
        v7 = cocos2d::CCArray::objectAtIndex(v6, 0); /*0x46404d*/
        v8 = cocos2d::CCArray::objectAtIndex(v6, 0); /*0x464050*/
        cocos2d::CCArray::addObject(a1, v8); /*0x46405c*/
        cocos2d::CCArray::removeObjectAtIndex(v6, 0, 1); /*0x46406a*/
        if ( *((_DWORD *)v7 + 259) == 2900 && *((_BYTE *)v7 + 1876) ) /*0x46407c*/
        {
          v5 = cocos2d::CCDictionary::objectForKey(a2, *((int *)v7 + 470)); /*0x46408f*/
          v6 = v5; /*0x464095*/
          if ( v5 ) /*0x46409b*/
            goto LABEL_2; /*0x46409b*/
          return (int)v5; /*0x46409b*/
        }
      }
    }
  }
  return (int)v5; /*0x4640a2*/
}

// [9/9] Address: 0x4640c0
// Method: LevelTools::sortChannelOrderObjects
void __fastcall LevelTools_sortChannelOrderObjects(cocos2d::CCArray *a1, cocos2d::CCDictionary *a2, char a3)
{
  __int64 v5; // rax
  unsigned int *v6; // rdi
  cocos2d::CCDictionary *v7; // r12
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *i; // r14
  __int64 v11; // rbx
  __int64 v12; // rsi
  int ObjectDirection; // eax
  struct cocos2d::CCObject *v14; // rax
  unsigned int *v15; // rbx
  __int64 v16; // rax
  int **v17; // rbx
  int **j; // r15
  int *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rcx
  struct cocos2d::CCObject *v22; // rdi
  unsigned int v23; // esi
  cocos2d::CCArray *v24; // rdi
  unsigned int v25; // r14d
  __int64 v26; // r15
  struct cocos2d::CCObject *v27; // rax
  int v28; // ebx
  void **v29; // rcx
  int v30; // ebx
  int v31; // ebx
  int (__cdecl *v32)(const void *, const void *); // r9
  struct cocos2d::CCObject *v33; // rax
  struct cocos2d::CCArray *v34; // rax

  if ( a1 ) /*0x4640c3*/
  {
    v5 = cocos2d::CCDictionary::create(); /*0x4640f4*/
    v6 = (unsigned int *)*((_QWORD *)a1 + 7); /*0x4640fa*/
    v7 = (cocos2d::CCDictionary *)v5; /*0x4640fe*/
    v8 = *v6; /*0x464101*/
    if ( (_DWORD)v8 ) /*0x464105*/
    {
      v9 = (__int64 *)*((_QWORD *)v6 + 2); /*0x464107*/
      for ( i = &v9[v8 - 1]; v9 <= i; ++v9 ) /*0x464116*/
      {
        v11 = *v9; /*0x464118*/
        if ( !*v9 ) /*0x464118*/
          break; /*0x46411e*/
        if ( *(_DWORD *)(v11 + 1036) == 2900 ) /*0x46412a*/
        {
          if ( *(_BYTE *)(v11 + 1876) ) /*0x46412c*/
          {
            v12 = *(int *)(v11 + 1880); /*0x464135*/
            if ( !cocos2d::CCDictionary::objectForKey(v7, v12) ) /*0x464142*/
            {
              ObjectDirection = GameObject_getObjectDirection(v11); /*0x464150*/
              v14 = cocos2d::CCInteger::create(ObjectDirection); /*0x464157*/
              cocos2d::CCDictionary::setObject(v7, v14, v12); /*0x464166*/
            }
          }
        }
      }
    }
    if ( !a2 ) /*0x464178*/
      a2 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x464180*/
    v15 = (unsigned int *)*((_QWORD *)a1 + 7); /*0x464183*/
    v16 = *v15; /*0x46418c*/
    if ( (_DWORD)v16 ) /*0x464190*/
    {
      v17 = (int **)*((_QWORD *)v15 + 2); /*0x464192*/
      for ( j = &v17[v16 - 1]; v17 <= j; ++v17 ) /*0x4641a1*/
      {
        v19 = *v17; /*0x4641a3*/
        if ( !*v17 ) /*0x4641a3*/
          break; /*0x4641a9*/
        v20 = v19[448]; /*0x4641ab*/
        v22 = cocos2d::CCDictionary::objectForKey(a2, v20); /*0x4641be*/
        if ( !v22 ) /*0x4641c4*/
        {
          v22 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v21); /*0x4641d5*/
          cocos2d::CCDictionary::setObject(a2, v22, v20); /*0x4641d8*/
        }
        cocos2d::CCArray::addObject(v22, (struct cocos2d::CCObject *)v19); /*0x4641e4*/
      }
    }
    v23 = 0; /*0x4641fc*/
    v24 = cocos2d::CCDictionary::allKeys(a2); /*0x464201*/
    v25 = 0; /*0x464204*/
    if ( cocos2d::CCArray::count(v24) ) /*0x464207*/
    {
      while ( 1 ) /*0x46422f*/
      {
        v26 = *((int *)cocos2d::CCArray::objectAtIndex(v24, v25) + 14); /*0x46422f*/
        v27 = cocos2d::CCDictionary::objectForKey(v7, v26); /*0x464236*/
        if ( !v27 ) /*0x464245*/
          break; /*0x464245*/
        v28 = *((_DWORD *)v27 + 14); /*0x464247*/
        v29 = (void **)*((_QWORD *)cocos2d::CCDictionary::objectForKey(a2, v26) + 7); /*0x464250*/
        v30 = v28 - 1; /*0x464254*/
        if ( v30 ) /*0x464257*/
        {
          v31 = v30 - 1; /*0x464259*/
          if ( v31 ) /*0x46425c*/
          {
            if ( v31 != 1 ) /*0x464261*/
              goto LABEL_27; /*0x464261*/
            v32 = (int (__cdecl *)(const void *, const void *))sub_45BCC0; /*0x464263*/
          }
          else
          {
            v32 = (int (__cdecl *)(const void *, const void *))sub_45BE00; /*0x46426c*/
          }
        }
        else
        {
          v32 = (int (__cdecl *)(const void *, const void *))sub_45BD60; /*0x464275*/
        }
LABEL_28:
        qsort(v29[2], *(unsigned int *)v29, 8u, v32); /*0x46428f*/
        if ( ++v25 >= cocos2d::CCArray::count(v24) ) /*0x4642b0*/
          goto LABEL_29; /*0x4642b0*/
      }
      v29 = (void **)*((_QWORD *)cocos2d::CCDictionary::objectForKey(a2, v26) + 7); /*0x464284*/
LABEL_27:
      v32 = sub_45BC20; /*0x464288*/
      goto LABEL_28; /*0x464288*/
    }
LABEL_29:
    if ( a3 ) /*0x4642cf*/
    {
      cocos2d::CCArray::removeAllObjects(a1); /*0x4642d4*/
      LevelTools_moveTriggerObjectsToArray(a1, a2, 0); /*0x4642e3*/
      if ( cocos2d::CCArray::count(v24) ) /*0x4642eb*/
      {
        do /*0x464326*/
        {
          v33 = cocos2d::CCArray::objectAtIndex(v24, v23); /*0x4642fa*/
          v34 = cocos2d::CCDictionary::objectForKey(a2, *((int *)v33 + 14)); /*0x464307*/
          cocos2d::CCArray::addObjectsFromArray(a1, v34); /*0x464313*/
          ++v23; /*0x46431c*/
        }
        while ( v23 < cocos2d::CCArray::count(v24) ); /*0x464326*/
      }
    }
  }
}

// Address: 0x45bea0
// Method: LevelTools::getLevel
// Hidden C++ exception states: #wind=2
_DWORD *__fastcall LevelTools_getLevel(int a1, char a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 AudioTitle; // rax
  __int64 v7; // rsi
  void *v8; // rdx
  int v9; // eax
  void **v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  void *v15; // rdx
  int v16; // eax
  void **v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  void *v20; // rdx
  int v21; // eax
  void **v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  void *v25; // rdx
  int v26; // eax
  void **v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rsi
  void *v30; // rdx
  int v31; // eax
  void **v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  void *v35; // rdx
  int v36; // eax
  void **v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  void *v40; // rdx
  int v41; // eax
  void **v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rsi
  void *v45; // rdx
  int v46; // eax
  void... [35823 chars total]

// Address: 0x462b80
// Method: LevelTools::timeForPos
// Hidden C++ exception states: #wind=5
float __fastcall LevelTools_timeForPos(
        float *a1,
        cocos2d::CCArray *a2,
        int a3,
        int a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        int a10)
{
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  float v16; // xmm10_4
  float v17; // xmm12_4
  float v18; // xmm13_4
  __int64 j; // rdx
  _QWORD *v20; // rdi
  __int64 v21; // r8
  int v22; // esi
  char v23; // r14
  unsigned int *v24; // rcx
  __int64 v25; // rax
  unsigned __int32 v26; // xmm15_4
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // r9
  int v30; // ebx
  float v31; // xmm1_4
  float v32; // xmm0_4
  __int64 v33; // r15
  float v34; // xmm9_4
  __int64 v35; // rax
  __int64 i; // rcx
  _DWORD *v37; // rax
  int v38; // r12d
  __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rax
  _DWORD *v42; // rax
  const struct cocos2d::CCPoint *v43; // rdi
  float v44; // xmm7_4
  float v45; // xmm7_4
  float v46; // xmm6_4
  float v47; // xmm6_4
  int v48; // r14d
  float v49; // xmm8_4
  float v50; // xmm0_4
  float v51; // xmm8_4
  _QWORD *v52; // rbx
  __int64 v53; // rax
  _DWORD *v54; // rax
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // xmm0_4
  int v63; // eax
  bool v64; // al
  int v65; // eax
  float v66; // xmm0_4
  float v67; // xmm1_4
  float v68; // xmm6_4
  float v69; // xmm6_4
  float v70; // xmm0_4
  float v71; // [rsp+20h] [rbp-E0h] BYREF
  float v72; // [rsp+24h] [rbp-DCh]
  __int64 v73; // [rsp+30h] [rbp-D0h] BYREF
  int v74; // [rsp+38h] [rbp-C8h]
  _QWORD *v75; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+58h] [rbp-A8h]
  float v77; // [rsp+60h] [rbp-A0h] BYREF
  float v78; // [rsp+64h] [rbp-9Ch]
  _QWORD *v79; // [rsp+68h] [rbp-98h]
  float v80[2]; // [rsp+74h] [rbp-8Ch] BYREF
  float v81[2]; // [rsp+7Ch] [rbp-84h] BYREF
  char v82[4]; // [rsp+84h] [rbp-7Ch] BYREF
  float v83; // [rsp+88h] [rbp-78h]
  char v84[4]; // [rsp+8Ch] [rbp-74h] BYREF
  float v85; // [rsp+90h] [rbp-70h]
  float v86[2]; // [rsp+94h] [rbp-6Ch] BYREF
  float v87[2]; // [rsp+9Ch] [rbp-64h] BYREF
  char v88[4]; // [rsp+A4h] [rbp-5Ch] BYREF
  float v89; // [rsp+A8h] [rbp-58h]
  char v90[4]; // [rsp+ACh] [rbp-54h] BYREF
  float v91; // [rsp+B0h] [rbp-50h]
  char v92[8]; // [rsp+B4h] [rbp-4Ch] BYREF
  char v93[8]; // [rsp+BCh] [rbp-44h] BYREF
  _BYTE v94[12]; // [rsp+C4h] [rbp-3Ch] BYREF
  _QWORD *v95; // [rsp+D0h] [rbp-30h]
  _QWORD *v96; // [rsp+D8h] [rbp-28h]
  __int64 v97; // [rsp+E0h] [rbp-20h]
  _QWORD *v98; // [rsp+E8h] [rbp-18h]
  __int64 v99; // [rsp+F0h] [rbp-10h]
  _QWORD *v100; // [rsp+F8h] [rbp-8h]
  __int64 v101; // [rsp+100h] [rbp+0h]
  _QWORD *v102; // [rsp+108h] [rbp+8h]
  __int64 v103; // [rsp+110h] [rbp+10h]
  char v104; // [rsp+200h] [rbp+100h]

  if ( *a1 <= 0.0 )
    return 0.0;
  if ( a7 )
    goto LABEL_12;
  v13 = a3 - 1;
  if ( !v13 )
  {
    v16 = 251.16008;
    goto LABEL_13;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v16 = 387.42014;
    goto LABEL_13;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = 468.00015;
    goto LABEL_13;
  }
  if ( v15 != 1 )
  {
LABEL_12:
    v16 = 311.58011;
    goto LABEL_13;
  }
  v16 = 576.00018;
LABEL_13:
  byte_905D0C = 0;
  byte_9037DF = 0;
  v17 = 1.0;
  dword_8F84A4 = 1065353216;
  if ( !a2 || !cocos2d::CCArray::count(a2) || a7 )
    return *a1 / v16;
  v18 = 0.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v71, (const struct cocos2d::CCPoint *)&unk_905178);
  v75 = 0;
  v76 = 0;
  v20 = operator new(0x28u);
  *v20 = v20;
  v20[1] = v20;
  v20[2] = v20;
  *((_WORD *)v20 + 12) = 257;
  v75 = v20;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v104 = 0;
  v24 = (unsigned int *)*((_QWORD *)a2 + 7);
  v25 = *v24;
  v26 = _mm_load_si128((const __m128i *)&xmmword_831640).m128i_u32[0];
  if ( (_DWORD)v25 )
  {
    v27 = (_QWORD *)*((_QWORD *)v24 + 2);
    v79 = v27;
    v28 = &v27[v25 - 1];
    v95 = v28;
    if ( v27 <= v28 )
    {
      v29 = 1;
      v30 = a5;
      v31 = v72;
      v32 = v71;
      while ( 1 )
      {
        v33 = *v27;
        if ( !*v27 )
          goto LABEL_143;
        v34 = v17 * v16;
        if ( a6 || *(_WORD *)(v33 + 1798) != 0xFFFD )
          break;
LABEL_133:
        v79 = ++v27;
        if ( v27 > v28 )
          goto LABEL_143;
      }
      v35 = v20[1];
      v73 = v35;
      v74 = 0;
      for ( i = (__int64)v20; !*(_BYTE *)(v35 + 25); v35 = *(_QWORD *)v35 )
      {
        v73 = v35;
        if ( *(_DWORD *)(v35 + 28) >= v22 )
        {
          v74 = 1;
          i = v35;
        }
        else
        {
          v74 = 0;
          v35 += 16;
        }
      }
      if ( *(_BYTE *)(i + 25) || v22 < *(_DWORD *)(i + 28) )
      {
        if ( v76 == 0x666666666666666LL )
          goto LABEL_149;
        v96 = &v75;
        v97 = 0;
        v37 = operator new(0x28u);
        v37[7] = v22;
        v37[8] = 0;
        *(_QWORD *)v37 = v20;
        *((_QWORD *)v37 + 1) = v20;
        *((_QWORD *)v37 + 2) = v20;
        *((_WORD *)v37 + 12) = 0;
        v97 = 0;
        i = sub_69600(&v75, &v73, v37);
        v20 = v75;
        v21 = 0;
        v29 = 1;
      }
      v38 = *(_DWORD *)(i + 32);
      v39 = v20[1];
      v73 = v39;
      v74 = 0;
      for ( i = (__int64)v20; !*(_BYTE *)(v39 + 25); v39 = *(_QWORD *)v39 )
      {
        v73 = v39;
        if ( *(_DWORD *)(v39 + 28) >= v22 )
        {
          v74 = 1;
          i = v39;
        }
        else
        {
          v74 = 0;
          v39 += 16;
        }
      }
      if ( *(_BYTE *)(i + 25) || v22 < *(_DWORD *)(i + 28) )
      {
        if ( v76 == 0x666666666666666LL )
          goto LABEL_149;
        v98 = &v75;
        v99 = 0;
        v40 = operator new(0x28u);
        v40[7] = v22;
        v40[8] = 0;
        *(_QWORD *)v40 = v20;
        *((_QWORD *)v40 + 1) = v20;
        *((_QWORD *)v40 + 2) = v20;
        *((_WORD *)v40 + 12) = 0;
        v99 = 0;
        i = sub_69600(&v75, &v73, v40);
        v20 = v75;
        v21 = 0;
      }
      if ( *(_DWORD *)(v33 + 1788) > *(_DWORD *)(i + 32) )
      {
        v41 = v20[1];
        v73 = v41;
        v74 = 0;
        for ( j = (__int64)v20; !*(_BYTE *)(v41 + 25); v41 = *(_QWORD *)v41 )
        {
          v73 = v41;
          if ( *(_DWORD *)(v41 + 28) >= v22 )
          {
            v74 = 1;
            j = v41;
          }
          else
          {
            v74 = 0;
            v41 += 16;
          }
        }
        if ( *(_BYTE *)(j + 25) || v22 < *(_DWORD *)(j + 28) )
        {
          if ( v76 == 0x666666666666666LL )
            goto LABEL_149;
          v100 = &v75;
          v101 = 0;
          v42 = operator new(0x28u);
          v42[7] = v22;
          v42[8] = 0;
          *(_QWORD *)v42 = v20;
          *((_QWORD *)v42 + 1) = v20;
          *((_QWORD *)v42 + 2) = v20;
          *((_WORD *)v42 + 12) = 0;
          v101 = 0;
          j = sub_69600(&v75, &v73, v42);
        }
        *(_DWORD *)(j + 32) = *(_DWORD *)(v33 + 1788);
      }
      if ( a10 > 0 )
      {
        if ( *(_DWORD *)(v33 + 924) == a10 )
          v23 = 1;
        v104 = v23;
      }
      v43 = (const struct cocos2d::CCPoint *)(v33 + 1800);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v80, (const struct cocos2d::CCPoint *)(v33 + 1800));
      if ( v80[0] >= 0.0 )
      {
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v81, (const struct cocos2d::CCPoint *)(v33 + 1800));
        v44 = v81[0];
      }
      else
      {
        v44 = 0.0;
      }
      v45 = v44 - v71;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v82, (const struct cocos2d::CCPoint *)(v33 + 1800));
      if ( v83 >= 0.0 )
      {
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v84, (const struct cocos2d::CCPoint *)(v33 + 1800));
        v46 = v85;
      }
      else
      {
        v46 = 0.0;
      }
      v47 = v46 - v72;
      v48 = (unsigned __int8)byte_9037DF;
      if ( byte_905D0C )
      {
        if ( !byte_9037DF )
        {
          v45 = fminf(0.0, v45);
          v49 = v45;
          goto LABEL_69;
        }
        v50 = fmaxf(0.0, v47);
      }
      else
      {
        if ( !byte_9037DF )
        {
          v45 = fmaxf(0.0, v45);
          v49 = v45;
          goto LABEL_69;
        }
        v50 = fminf(0.0, v47);
      }
      v47 = v50;
      v49 = v50;
LABEL_69:
      v51 = COERCE_FLOAT(LODWORD(v49) & v26) / v34;
      if ( v104 )
        goto LABEL_152;
      if ( v30 == v22 || v30 == -1 )
      {
        if ( a4 <= 0 )
          goto LABEL_152;
        v52 = v75;
        v53 = v75[1];
        v73 = v53;
        j = 0;
        v74 = 0;
        i = (__int64)v75;
        if ( !*(_BYTE *)(v53 + 25) )
        {
          do
          {
            v73 = v53;
            if ( *(_DWORD *)(v53 + 28) >= v22 )
            {
              v74 = 1;
              i = v53;
            }
            else
            {
              v74 = 0;
              v53 += 16;
            }
            v53 = *(_QWORD *)v53;
          }
          while ( !*(_BYTE *)(v53 + 25) );
          v43 = (const struct cocos2d::CCPoint *)(v33 + 1800);
        }
        if ( *(_BYTE *)(i + 25) || v22 < *(_DWORD *)(i + 28) )
        {
          if ( v76 == 0x666666666666666LL )
LABEL_149:
            sub_5AC20(i, j, v21, v29);
          v102 = &v75;
          v103 = 0;
          v54 = operator new(0x28u);
          v54[7] = v22;
          v54[8] = 0;
          *(_QWORD *)v54 = v52;
          *((_QWORD *)v54 + 1) = v52;
          *((_QWORD *)v54 + 2) = v52;
          *((_WORD *)v54 + 12) = 0;
          v103 = 0;
          i = sub_69600(&v75, &v73, v54);
        }
        if ( *(_DWORD *)(i + 32) >= a4 || v38 == a4 )
        {
LABEL_152:
          if ( !byte_9037DF )
          {
            v55 = *a1;
            v56 = v71;
            if ( *a1 >= v71 )
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v86, v43);
              v55 = *a1;
              if ( v86[0] >= *a1 )
                goto LABEL_138;
              v56 = v71;
            }
            if ( v56 >= v55 )
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v87, v43);
              if ( *a1 >= v87[0] )
                goto LABEL_138;
            }
          }
          if ( !a9 && byte_9037DF )
          {
            if ( (v57 = a1[1], v57 >= v72)
              && (cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v88, v43), v57 = a1[1], v89 >= v57)
              || v72 >= v57 && (cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v90, v43), a1[1] >= v91) )
            {
LABEL_138:
              if ( byte_9037DF )
                v68 = v72 - a1[1];
              else
                v68 = v71 - *a1;
              v69 = (float)(COERCE_FLOAT(LODWORD(v68) & v26) / v34) + v18;
              goto LABEL_147;
            }
          }
        }
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v77, (const struct cocos2d::CCPoint *)&unk_905178);
      v58 = *(__int16 *)(v33 + 1798);
      if ( v58 == -5 )
      {
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v92, v43);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v93, (const struct cocos2d::CCPoint *)(v33 + 1916));
        cocos2d::CCPoint::operator-(v93, v94, v92);
        cocos2d::CCPoint::operator=(&v77, v94);
        if ( *(_BYTE *)(v33 + 1905) )
          v77 = 0.0;
        if ( *(_BYTE *)(v33 + 1906) )
          v78 = 0.0;
      }
      else if ( v58 == -4 )
      {
        if ( !*(_BYTE *)(v33 + 1877) )
        {
          v63 = *(_DWORD *)(v33 + 1856);
          v64 = v63 == 3 || v63 == 4;
          byte_9037DF = v64;
          v65 = *(_DWORD *)(v33 + 1860);
          if ( v65 == 1 || (byte_905D0C = 0, v65 == 3) )
            byte_905D0C = 1;
        }
        if ( *(_BYTE *)(v33 + 1876) )
          v22 = *(_DWORD *)(v33 + 1880);
      }
      else if ( v58 != -3 )
      {
        if ( v58 == -2 )
        {
          v62 = *(int *)(v33 + 1780);
          dword_8F84A4 = v62;
          if ( !a8 )
            v17 = *(float *)&v62;
        }
        else if ( v58 == -1 )
        {
          byte_905D0C = byte_905D0C == 0;
        }
        else
        {
          v59 = v58 - 1;
          if ( v59 )
          {
            v60 = v59 - 1;
            if ( v60 )
            {
              v61 = v60 - 1;
              if ( v61 )
              {
                if ( v61 == 1 )
                  v16 = 576.00018;
                else
                  v16 = 311.58011;
              }
              else
              {
                v16 = 468.00015;
              }
            }
            else
            {
              v16 = 387.42014;
            }
          }
          else
          {
            v16 = 251.16008;
          }
        }
      }
      v18 = v18 + v51;
      if ( (_BYTE)v48 && v48 == (unsigned __int8)byte_9037DF )
      {
        v66 = v71;
      }
      else
      {
        v66 = v71 + v45;
        if ( !(_BYTE)v48 && v48 == (unsigned __int8)byte_9037DF )
        {
          v67 = v72;
          goto LABEL_132;
        }
      }
      v67 = v72 + v47;
LABEL_132:
      v32 = v66 + v77;
      v71 = v32;
      v31 = v67 + v78;
      v72 = v31;
      v20 = v75;
      v27 = v79;
      v23 = v104;
      v30 = a5;
      v28 = v95;
      v21 = 0;
      v29 = 1;
      goto LABEL_133;
    }
  }
  v31 = v72;
  v32 = v71;
LABEL_143:
  if ( byte_9037DF )
    v70 = v31 - a1[1];
  else
    v70 = v32 - *a1;
  v69 = (float)(COERCE_FLOAT(LODWORD(v70) & v26) / (float)(v17 * v16)) + v18;
LABEL_147:
  sub_7F2E0(&v75);
  return v69;
}
