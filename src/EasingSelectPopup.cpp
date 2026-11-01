#include <Geode/binding/EasingSelectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x174470
// Method: EasingSelectPopup::valueDidChange
void __fastcall EasingSelectPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  bool v6; // zf
  unsigned int v7; // eax
  int v8; // edx
  __int64 v9; // rcx

  v4 = *(_QWORD *)(a1 + 1000); /*0x17447e*/
  if ( v4 ) /*0x17448b*/
  {
    v5 = *(_DWORD *)(a1 + 1008); /*0x174491*/
    if ( a2 == v5 ) /*0x174499*/
    {
      v6 = *(_BYTE *)(a1 + 1020) == 0; /*0x17449b*/
      *(_DWORD *)(a1 + 1024) = 0; /*0x1744a2*/
      if ( v6 ) /*0x1744ac*/
      {
        sub_60A5A0(v4, v5); /*0x1744b0*/
        sub_60ABF0(*(_QWORD *)(a1 + 1000), *(unsigned int *)(a1 + 1008)); /*0x1744cf*/
      }
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 1016); /*0x1744d4*/
      if ( a2 == v7 ) /*0x1744dc*/
      {
        sub_60ABF0(v4, v7); /*0x1744e0*/
        v8 = *(_DWORD *)(a1 + 1016); /*0x1744e5*/
        v9 = *(_QWORD *)(a1 + 1000); /*0x1744eb*/
        if ( v8 == 85 ) /*0x1744f5*/
        {
          *(float *)(v9 + 820) = a3; /*0x1744f7*/
          sub_60F800(*(_QWORD *)(a1 + 1000)); /*0x174510*/
        }
        else
        {
          SetupTriggerPopup_updateCustomEaseRateLabel(v9, v8, a3); /*0x174518*/
        }
      }
    }
  }
}

// [2/3] Address: 0x174530
// Method: EasingSelectPopup::update
int __fastcall EasingSelectPopup_update(unsigned int *a1, float a2)
{
  struct cocos2d::CCObject *v2; // rax
  float v4; // xmm13_4
  float v5; // xmm7_4
  float v6; // xmm12_4
  float v7; // xmm0_4
  unsigned int v8; // edi
  signed int v9; // ebp
  struct cocos2d::CCObject *v10; // r14
  struct cocos2d::CCObject *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  v2 = (struct cocos2d::CCObject *)&retaddr; /*0x174530*/
  if ( *((_QWORD *)a1 + 129) && *((_QWORD *)a1 + 132) ) /*0x174553*/
  {
    v4 = fmaxf(0.1, (*(float (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 1168LL))(a1, a1[252])); /*0x1745b5*/
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 1168LL))(a1, a1[254]); /*0x1745ba*/
    v5 = a2 + *((float *)a1 + 256); /*0x1745eb*/
    v6 = v4 + 0.5; /*0x174600*/
    *((float *)a1 + 256) = v5; /*0x174605*/
    v7 = (float)(v4 + 0.5) + 0.45000002; /*0x174611*/
    if ( v5 >= v7 ) /*0x17461c*/
    {
      v5 = v5 - v7; /*0x17461e*/
      *((float *)a1 + 256) = v5; /*0x174622*/
    }
    v8 = 0; /*0x17462e*/
    if ( v5 < 0.0 ) /*0x174634*/
    {
      a1[256] = 0; /*0x174636*/
      v5 = 0.0; /*0x17463c*/
    }
    LODWORD(v2) = cocos2d::CCArray::count(*((cocos2d::CCArray **)a1 + 129)); /*0x174646*/
    v9 = (int)v2; /*0x17464c*/
    if ( (int)v2 > 0 ) /*0x174650*/
    {
      do /*0x1746b8*/
      {
        v10 = cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)a1 + 129), v8); /*0x1746b8*/
        v2 = cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)a1 + 132), v8); /*0x1746bb*/
        v11 = v2; /*0x1746c1*/
        if ( !v10 || !v2 ) /*0x1746d0*/
          goto LABEL_21; /*0x1746d0*/
        (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v10 + 320LL))(v10); /*0x1746fb*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v10 + 128LL))(v10); /*0x17470b*/
        if ( v5 >= 0.30000001 ) /*0x17472f*/
        {
          if ( v5 >= 0.5 ) /*0x174767*/
          {
            if ( v6 <= v5 ) /*0x17478e*/
            {
              sub_720C0(v12, v8); /*0x1747da*/
              (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 208LL))(v11); /*0x174812*/
              if ( (float)(v6 + 0.050000001) <= v5 ) /*0x174810*/
                v15 = (unsigned int)(int)(float)((float)(1.0 /*0x17484b*/
                                                       - fminf(
                                                           1.0,
                                                           (float)((float)((float)(v5 - 0.5) - v4) - 0.050000001)
                                                         / 0.40000001))
                                               * 255.0);
              else
                LOBYTE(v15) = -1; /*0x174814*/
              v14 = *((_QWORD *)v11 + 40); /*0x17484f*/
              v13 = (_QWORD *)((char *)v11 + 320); /*0x174856*/
              goto LABEL_20; /*0x174856*/
            }
            sub_720C0(v12, v8); /*0x1747b8*/
          }
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 208LL))(v11); /*0x174773*/
          v13 = (_QWORD *)((char *)v11 + 320); /*0x174779*/
          LOBYTE(v15) = -1; /*0x174780*/
          v14 = *((_QWORD *)v11 + 40); /*0x174782*/
        }
        else
        {
          (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v11 + 208LL))(v11); /*0x17473b*/
          v13 = (_QWORD *)((char *)v11 + 320); /*0x174744*/
          v14 = *((_QWORD *)v11 + 40); /*0x17474b*/
          v15 = (unsigned int)(int)(float)((float)(v5 / 0.30000001) * 255.0); /*0x17475a*/
        }
LABEL_20:
        LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v14 + 40))(v13, v15); /*0x17485d*/
LABEL_21:
        ++v8; /*0x174869*/
      }
      while ( (int)v8 < v9 ); /*0x1746b8*/
    }
  }
  return (int)v2; /*0x1748e3*/
}

// [3/3] Address: 0x174920
// Method: EasingSelectPopup::onClose
__int64 __fastcall EasingSelectPopup_onClose(cocos2d::CCNode *a1)
{
  cocos2d::CCNode::unscheduleUpdate(a1); /*0x174930*/
  return SetupTriggerPopup_onClose((__int64)a1); /*0x17493c*/
}
