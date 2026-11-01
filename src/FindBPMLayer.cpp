#include <Geode/binding/FindBPMLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x1307b0
// Method: FindBPMLayer::~FindBPMLayer
__int64 __fastcall FindBPMLayer__dtor_FindBPMLayer(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx

  *a1 = &CreateGuidelinesLayer::`vftable'; /*0x1307c0*/
  a1[40] = &CreateGuidelinesLayer::`vftable'; /*0x1307ca*/
  a1[41] = &CreateGuidelinesLayer::`vftable'; /*0x1307d8*/
  a1[42] = &CreateGuidelinesLayer::`vftable'; /*0x1307e6*/
  a1[43] = &CreateGuidelinesLayer::`vftable'; /*0x1307f4*/
  a1[44] = &CreateGuidelinesLayer::`vftable'; /*0x130802*/
  a1[51] = &CreateGuidelinesLayer::`vftable'; /*0x130810*/
  a1[54] = &CreateGuidelinesLayer::`vftable'; /*0x13081e*/
  a1[68] = &CreateGuidelinesLayer::`vftable'; /*0x13082c*/
  a1[83] = &CreateGuidelinesLayer::`vftable'; /*0x13083a*/
  v2 = (cocos2d::CCObject *)a1[86]; /*0x130841*/
  if ( v2 ) /*0x13084b*/
    cocos2d::CCObject::release(v2); /*0x13084d*/
  v3 = (cocos2d::CCObject *)a1[87]; /*0x130853*/
  if ( v3 ) /*0x13085d*/
    cocos2d::CCObject::release(v3); /*0x13085f*/
  sub_3C310(a1 + 92); /*0x13086c*/
  return StarInfoPopup__dtor_StarInfoPopup(a1); /*0x130874*/
}

// [2/5] Address: 0x132b70
// Method: FindBPMLayer::onRecord
__int64 __fastcall FindBPMLayer_onRecord(cocos2d::CCNode *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, __int16 *); // rcx

  CreateGuidelinesLayer_onRecord(a1); /*0x132b79*/
  v2 = (__int64 (__fastcall ***)(_QWORD, __int16 *))(*((_QWORD *)a1 + 97) + 360LL); /*0x132b8e*/
  *((_QWORD *)a1 + 98) = 0; /*0x132b95*/
  return (**v2)(v2, &word_709BFC);
}

// [3/5] Address: 0x132c70
// Method: FindBPMLayer::playMusic
// Hidden C++ exception states: #wind=3
__int64 __fastcall FindBPMLayer_playMusic(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rdi
  __int64 v4; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  void *v7; // [rsp+58h] [rbp+10h]
  void *v8; // [rsp+58h] [rbp+10h]

  v2 = qword_906070; /*0x132c87*/
  if ( !qword_906070 ) /*0x132c91*/
  {
    v7 = operator new(0x3D0u); /*0x132c9d*/
    qword_906070 = sub_47C350(v7); /*0x132cab*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x132cbc*/
    v2 = qword_906070; /*0x132cbe*/
  }
  v3 = MusicDownloadManager_pathForSong(v2, v6, *(_DWORD *)(a1 + 768)); /*0x132cd6*/
  v4 = qword_905F60; /*0x132cd9*/
  if ( !qword_905F60 ) /*0x132ce3*/
  {
    v8 = operator new(0x8A8u); /*0x132cef*/
    qword_905F60 = sub_5AE20(v8); /*0x132cfd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x132d0e*/
    v4 = qword_905F60; /*0x132d10*/
  }
  return FMODAudioEngine_loadAndPlayMusic(v4, (__int64)v3, (int)(float)(*(float *)(a1 + 720) * 1000.0)); /*0x132d34*/
}

// [4/5] Address: 0x132d40
// Method: FindBPMLayer::registerTouch
// Hidden C++ exception states: #wind=1
double __fastcall FindBPMLayer_registerTouch(__int64 a1)
{
  int v2; // ecx
  float v3; // xmm0_4
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  double result; // xmm0_8
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1 + 788); /*0x132d58*/
  *(_DWORD *)(a1 + 788) = v2 + 1; /*0x132d61*/
  if ( v2 + 1 > 1 ) /*0x132d6a*/
  {
    v3 = roundf(60.0 / (float)((float)(*(float *)(a1 + 720) - *(float *)(a1 + 784)) / (float)v2)); /*0x132dcc*/
    *(_DWORD *)(a1 + 792) = (int)v3; /*0x132dd5*/
    v4 = (_QWORD *)GameToolbox_intToString((__int64)v7, (int)v3); /*0x132de0*/
    v5 = v4; /*0x132de5*/
    if ( v4[3] > 0xFu ) /*0x132ded*/
      v5 = (_QWORD *)*v4; /*0x132def*/
    (**(void (__fastcall ***)(__int64, _QWORD *))(*(_QWORD *)(a1 + 776) + 360LL))(*(_QWORD *)(a1 + 776) + 360LL, v5); /*0x132e03*/
    return sub_3C310(v7); /*0x132e0b*/
  }
  else
  {
    *(_DWORD *)(a1 + 784) = *(_DWORD *)(a1 + 720); /*0x132d72*/
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 776) + 360LL))( /*0x132d90*/
      *(_QWORD *)(a1 + 776) + 360LL,
      "0");
  }
  return result; /*0x132d92*/
}

// [5/5] Address: 0x132e30
// Method: FindBPMLayer::onClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall FindBPMLayer_onClose(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  void *v5; // [rsp+30h] [rbp+8h]

  v2 = qword_906070; /*0x132e39*/
  if ( !qword_906070 ) /*0x132e43*/
  {
    v5 = operator new(0x3D0u); /*0x132e4f*/
    qword_906070 = sub_47C350(v5); /*0x132e5d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x132e6e*/
    v2 = qword_906070; /*0x132e70*/
  }
  MusicDownloadManager_songStateChanged(v2); /*0x132e77*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x132e84*/
  LOBYTE(v3) = 1; /*0x132e8d*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v3);
}
