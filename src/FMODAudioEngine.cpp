#include <Geode/binding/FMODAudioEngine.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/45] Address: 0x5bc50
// Method: FMODAudioEngine::setupAudioEngine
// Hidden C++ exception states: #wind=2
__int64 __fastcall FMODAudioEngine_setupAudioEngine(__int64 a1)
{
  _QWORD *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rcx
  bool GameVariable; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int v14; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-2Ch] BYREF
  _BYTE v16[4]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v17[4]; // [rsp+2Ch] [rbp-24h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  void *v21; // [rsp+48h] [rbp-8h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+98h] [rbp+48h] BYREF
  int v24; // [rsp+A0h] [rbp+50h] BYREF
  int v25; // [rsp+A8h] [rbp+58h] BYREF

  v2 = (_QWORD *)(a1 + 560); /*0x5bc65*/
  *(_DWORD *)(a1 + 608) = FMOD_System_Create(a1 + 560, 131633); /*0x5bc7a*/
  LODWORD(v22) = 0; /*0x5bc84*/
  FMOD::System::getVersion(*v2, &v22); /*0x5bc8f*/
  FMOD_Debug_Initialize(0, 0, 0, 0); /*0x5bc9f*/
  v24 = 0; /*0x5bca5*/
  v23 = 1; /*0x5bca9*/
  FMOD::System::getStreamBufferSize(*v2, &v24, &v23); /*0x5bcbb*/
  v3 = qword_905FD0; /*0x5bcc1*/
  if ( !qword_905FD0 ) /*0x5bccb*/
  {
    v21 = operator new(0x6E8u); /*0x5bcd7*/
    qword_905FD0 = sub_2723A0(v21); /*0x5bce4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5bcf5*/
    v3 = qword_905FD0; /*0x5bcf7*/
  }
  if ( !GameManager_getGameVariable(v3, "0159") ) /*0x5bd05*/
    FMOD::System::setDSPBufferSize(*v2, 512, 4); /*0x5bd1c*/
  FMOD::System::getDSPBufferSize(*v2, v17, v16); /*0x5bd2d*/
  FMOD::System::getSoftwareFormat(*v2, v18, 0, 0); /*0x5bd40*/
  FMOD::System::getSoftwareFormat(*v2, &v25, &v15, &v14); /*0x5bd55*/
  v4 = qword_905FD0; /*0x5bd5b*/
  if ( !qword_905FD0 ) /*0x5bd65*/
  {
    v21 = operator new(0x6E8u); /*0x5bd71*/
    qword_905FD0 = sub_2723A0(v21); /*0x5bd7e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5bd8f*/
    v4 = qword_905FD0; /*0x5bd91*/
  }
  GameVariable = GameManager_getGameVariable(v4, "0142"); /*0x5bd9f*/
  *(_BYTE *)(a1 + 616) = GameVariable; /*0x5bda4*/
  v6 = 44100; /*0x5bdab*/
  if ( GameVariable ) /*0x5bdb7*/
    v6 = 24000; /*0x5bdb7*/
  v25 = v6; /*0x5bdba*/
  FMOD::System::setSoftwareFormat(*v2, v6, v15, v14); /*0x5bdc8*/
  *(_DWORD *)(a1 + 608) = FMOD::System::init(*v2, 128, 0, v22); /*0x5bde3*/
  *(_DWORD *)(a1 + 608) = FMOD::System::getSoftwareFormat(*v2, a1 + 612, 0, 0); /*0x5be00*/
  FMOD::System::createChannelGroup(*v2, 0, a1 + 552); /*0x5be13*/
  FMOD::ChannelControl::setVolumeRamp(*(_QWORD *)(a1 + 552), 0); /*0x5be22*/
  FMOD::ChannelControl::getDSP(*(_QWORD *)(a1 + 552), 0xFFFFFFFFLL, a1 + 568); /*0x5be3b*/
  LOBYTE(v7) = 1; /*0x5be41*/
  FMOD::DSP::setMeteringEnabled(*(_QWORD *)(a1 + 568), 0, v7); /*0x5be4d*/
  FMOD::System::createChannelGroup(*v2, 0, a1 + 584); /*0x5be5f*/
  FMOD::System::createChannelGroup(*v2, 0, a1 + 592); /*0x5be71*/
  LOBYTE(v8) = 1; /*0x5be7a*/
  FMOD::ChannelGroup::addGroup(*(_QWORD *)(a1 + 584), *(_QWORD *)(a1 + 592), v8, 0); /*0x5be8b*/
  FMOD::System::createChannelGroup(*v2, 0, a1 + 600); /*0x5be9d*/
  v19 = 0; /*0x5bea3*/
  FMOD::System::createDSPByType(*v2, 11, &v19); /*0x5beb3*/
  FMOD::DSP::setParameterFloat(v19, 1); /*0x5bec5*/
  LOBYTE(v9) = 1; /*0x5becb*/
  FMOD::DSP::setParameterBool(v19, 3, v9); /*0x5bed7*/
  *(_DWORD *)(a1 + 608) = FMOD::ChannelControl::addDSP(*(_QWORD *)(a1 + 584), 1, v19); /*0x5bef3*/
  FMOD::System::createDSPByType(*v2, 11, &v19); /*0x5bf06*/
  FMOD::DSP::setParameterFloat(v19, 1); /*0x5bf18*/
  LOBYTE(v10) = 1; /*0x5bf1e*/
  FMOD::DSP::setParameterBool(v19, 3, v10); /*0x5bf2a*/
  *(_DWORD *)(a1 + 608) = FMOD::ChannelControl::addDSP(*(_QWORD *)(a1 + 552), 1, v19); /*0x5bf46*/
  v20 = 0; /*0x5bf4d*/
  FMOD::System::createDSPByType(*v2, 19, &v20); /*0x5bf5d*/
  FMOD::ChannelControl::addDSP(*(_QWORD *)(a1 + 592), 0, v20); /*0x5bf70*/
  LOBYTE(v11) = 1; /*0x5bf76*/
  FMODAudioEngine_updateReverb(a1, *(unsigned int *)(a1 + 1768), v11); /*0x5bf83*/
  FMOD::ChannelControl::getDSP(*(_QWORD *)(a1 + 584), 0xFFFFFFFFLL, a1 + 576); /*0x5bf9b*/
  LOBYTE(v12) = 1; /*0x5bfa1*/
  return FMOD::DSP::setMeteringEnabled(*(_QWORD *)(a1 + 576), 0, v12); /*0x5bfb3*/
}

// [2/45] Address: 0x5bfd0
// Method: FMODAudioEngine::updateReverb
void __fastcall FMODAudioEngine_updateReverb(__int64 a1, int a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // [rsp+C0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 1768) != a2 || a3 ) /*0x5bfee*/
  {
    v5 = *(_QWORD *)(a1 + 592); /*0x5c6a0*/
    v6 = 0; /*0x5c6b1*/
    FMOD::ChannelControl::getDSP(v5, 0, &v6); /*0x5c6bd*/
    FMOD::DSP::setParameterFloat(v6, 0); /*0x5c6d1*/
    FMOD::DSP::setParameterFloat(v6, 1); /*0x5c6e8*/
    FMOD::DSP::setParameterFloat(v6, 2); /*0x5c6ff*/
    FMOD::DSP::setParameterFloat(v6, 3); /*0x5c71a*/
    FMOD::DSP::setParameterFloat(v6, 4); /*0x5c730*/
    FMOD::DSP::setParameterFloat(v6, 5); /*0x5c746*/
    FMOD::DSP::setParameterFloat(v6, 6); /*0x5c75d*/
    FMOD::DSP::setParameterFloat(v6, 7); /*0x5c778*/
    FMOD::DSP::setParameterFloat(v6, 8); /*0x5c78e*/
    FMOD::DSP::setParameterFloat(v6, 9); /*0x5c7a5*/
    FMOD::DSP::setParameterFloat(v6, 10); /*0x5c7bc*/
    FMOD::DSP::setParameterFloat(v6, 11); /*0x5c7d3*/
    *(_DWORD *)(a1 + 1768) = a2; /*0x5c816*/
  }
}

// [3/45] Address: 0x5c890
// Method: FMODAudioEngine::reverbToString
__int64 __fastcall FMODAudioEngine_reverbToString(__int64 a1, int a2)
{
  __int64 result; // rax
  char *v4; // rax

  switch ( a2 ) /*0x5c8b9*/
  {
    case 0: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5c8be*/
      *(_QWORD *)(a1 + 16) = 7; /*0x5c8c1*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5c8c9*/
      *(_DWORD *)a1 = 1162757447; /*0x5c8d8*/
      *(_WORD *)(a1 + 4) = 18770; /*0x5c8e1*/
      *(_BYTE *)(a1 + 6) = 67; /*0x5c8ec*/
      *(_BYTE *)(a1 + 7) = 0; /*0x5c8f2*/
      result = a1; /*0x5c8ef*/
      break; /*0x5c8fb*/
    case 1: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5c8ff*/
      *(_QWORD *)(a1 + 16) = 10; /*0x5c902*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5c90a*/
      strcpy((char *)a1, "PADDEDCELL"); /*0x5c91a*/
      result = a1; /*0x5c929*/
      break; /*0x5c935*/
    case 2: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5c93c*/
      *(_QWORD *)(a1 + 16) = 4; /*0x5c93f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5c947*/
      strcpy((char *)a1, "ROOM"); /*0x5c94f*/
      result = a1; /*0x5c939*/
      break; /*0x5c95e*/
    case 3: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5c96c*/
      *(_QWORD *)(a1 + 16) = 8; /*0x5c96f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5c977*/
      strcpy((char *)a1, "BATHROOM"); /*0x5c97f*/
      result = a1; /*0x5c982*/
      break; /*0x5c98e*/
    case 4: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5c992*/
      *(_QWORD *)(a1 + 16) = 10; /*0x5c995*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5c99d*/
      strcpy((char *)a1, "LIVINGROOM"); /*0x5c9ad*/
      result = a1; /*0x5c9bc*/
      break; /*0x5c9c8*/
    case 5: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5c9cc*/
      *(_QWORD *)(a1 + 16) = 9; /*0x5c9cf*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5c9d7*/
      strcpy((char *)a1, "STONEROOM"); /*0x5c9e7*/
      result = a1; /*0x5c9f5*/
      break; /*0x5ca01*/
    case 6: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5ca05*/
      *(_QWORD *)(a1 + 16) = 10; /*0x5ca08*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5ca10*/
      strcpy((char *)a1, "AUDITORIUM"); /*0x5ca20*/
      result = a1; /*0x5ca2f*/
      break; /*0x5ca3b*/
    case 7: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5ca3f*/
      *(_QWORD *)(a1 + 16) = 11; /*0x5ca42*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5ca4a*/
      strcpy((char *)a1, "CONCERTHALL"); /*0x5ca5a*/
      result = a1; /*0x5ca73*/
      break; /*0x5ca7f*/
    case 8: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5ca86*/
      *(_QWORD *)(a1 + 16) = 4; /*0x5ca89*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5ca91*/
      strcpy((char *)a1, "CAVE"); /*0x5ca99*/
      result = a1; /*0x5ca83*/
      break; /*0x5caa8*/
    case 9: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5caac*/
      *(_QWORD *)(a1 + 16) = 5; /*0x5caaf*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cab7*/
      *(_DWORD *)a1 = 1313165889; /*0x5cac5*/
      *(_BYTE *)(a1 + 4) = 65; /*0x5cace*/
      *(_BYTE *)(a1 + 5) = 0; /*0x5cad4*/
      result = a1; /*0x5cad1*/
      break; /*0x5cadd*/
    case 10: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cae1*/
      *(_QWORD *)(a1 + 16) = 6; /*0x5cae4*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5caec*/
      strcpy((char *)a1, "HANGAR"); /*0x5cafa*/
      result = a1; /*0x5cb07*/
      break; /*0x5cb13*/
    case 11: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cb1c*/
      *(_QWORD *)(a1 + 16) = 0; /*0x5cb1f*/
      *(_QWORD *)(a1 + 24) = 0; /*0x5cb23*/
      v4 = (char *)sub_3C460(32); /*0x5cb27*/
      *(_QWORD *)a1 = v4; /*0x5cb2c*/
      *(_QWORD *)(a1 + 16) = 16; /*0x5cb2f*/
      *(_QWORD *)(a1 + 24) = 31; /*0x5cb37*/
      strcpy(v4, "CARPETTEDHALLWAY"); /*0x5cb46*/
      result = a1; /*0x5cb4d*/
      break; /*0x5cb55*/
    case 12: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cb59*/
      *(_QWORD *)(a1 + 16) = 7; /*0x5cb5c*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cb64*/
      *(_DWORD *)a1 = 1280065864; /*0x5cb73*/
      *(_WORD *)(a1 + 4) = 16727; /*0x5cb7c*/
      *(_BYTE *)(a1 + 6) = 89; /*0x5cb87*/
      *(_BYTE *)(a1 + 7) = 0; /*0x5cb8d*/
      result = a1; /*0x5cb8a*/
      break; /*0x5cb96*/
    case 13: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cb9a*/
      *(_QWORD *)(a1 + 16) = 13; /*0x5cb9d*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cba5*/
      strcpy((char *)a1, "STONECORRIDOR"); /*0x5cbb5*/
      result = a1; /*0x5cbcc*/
      break; /*0x5cbd8*/
    case 14: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cbdc*/
      *(_QWORD *)(a1 + 16) = 5; /*0x5cbdf*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cbe7*/
      *(_DWORD *)a1 = 1162628161; /*0x5cbf5*/
      *(_BYTE *)(a1 + 4) = 89; /*0x5cbfe*/
      *(_BYTE *)(a1 + 5) = 0; /*0x5cc04*/
      result = a1; /*0x5cc01*/
      break; /*0x5cc0d*/
    case 15: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cc11*/
      *(_QWORD *)(a1 + 16) = 6; /*0x5cc14*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cc1c*/
      strcpy((char *)a1, "FOREST"); /*0x5cc2a*/
      result = a1; /*0x5cc37*/
      break; /*0x5cc43*/
    case 16: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cc4a*/
      *(_QWORD *)(a1 + 16) = 4; /*0x5cc4d*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cc55*/
      strcpy((char *)a1, "CITY"); /*0x5cc5d*/
      result = a1; /*0x5cc47*/
      break; /*0x5cc6c*/
    case 17: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cc70*/
      *(_QWORD *)(a1 + 16) = 9; /*0x5cc73*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cc7b*/
      strcpy((char *)a1, "MOUNTAINS"); /*0x5cc8b*/
      result = a1; /*0x5cc99*/
      break; /*0x5cca5*/
    case 18: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cca9*/
      *(_QWORD *)(a1 + 16) = 6; /*0x5ccac*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5ccb4*/
      strcpy((char *)a1, "QUARRY"); /*0x5ccc2*/
      result = a1; /*0x5cccf*/
      break; /*0x5ccdb*/
    case 19: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5ccdf*/
      *(_QWORD *)(a1 + 16) = 5; /*0x5cce2*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5ccea*/
      *(_DWORD *)a1 = 1229016144; /*0x5ccf8*/
      *(_BYTE *)(a1 + 4) = 78; /*0x5cd01*/
      *(_BYTE *)(a1 + 5) = 0; /*0x5cd07*/
      result = a1; /*0x5cd04*/
      break; /*0x5cd10*/
    case 20: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cd14*/
      *(_QWORD *)(a1 + 16) = 10; /*0x5cd17*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cd1f*/
      strcpy((char *)a1, "PARKINGLOT"); /*0x5cd2f*/
      result = a1; /*0x5cd3e*/
      break; /*0x5cd4a*/
    case 21: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cd4e*/
      *(_QWORD *)(a1 + 16) = 9; /*0x5cd51*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cd59*/
      strcpy((char *)a1, "SEWERPIPE"); /*0x5cd69*/
      result = a1; /*0x5cd77*/
      break; /*0x5cd83*/
    case 22: /*0x5c8b9*/
      *(_OWORD *)a1 = 0; /*0x5cd87*/
      *(_QWORD *)(a1 + 16) = 10; /*0x5cd8a*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cd92*/
      strcpy((char *)a1, "UNDERWATER"); /*0x5cda2*/
      result = a1; /*0x5cdb1*/
      break; /*0x5cdbd*/
    default:
      *(_OWORD *)a1 = 0; /*0x5cdc4*/
      *(_QWORD *)(a1 + 16) = 2; /*0x5cdc7*/
      *(_QWORD *)(a1 + 24) = 15; /*0x5cdcf*/
      strcpy((char *)a1, "NA"); /*0x5cdd7*/
      result = a1; /*0x5cdc1*/
      break; /*0x5cdc1*/
  }
  return result; /*0x5c8f6*/
}

// [4/45] Address: 0x5cf60
// Method: FMODAudioEngine::clearAllAudio
__int64 __fastcall FMODAudioEngine_clearAllAudio(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  sub_613B0(); /*0x5cf69*/
  if ( *(_QWORD *)(a1 + 552) ) /*0x5cf6e*/
    FMOD::ChannelControl::stop(); /*0x5cf7a*/
  sub_3DB60(a1 + 1096); /*0x5cf87*/
  sub_3DB60(a1 + 1160); /*0x5cf93*/
  sub_3DB60(a1 + 1224); /*0x5cf9f*/
  sub_662D0(a1 + 664); /*0x5cfab*/
  sub_662D0(a1 + 680); /*0x5cfb7*/
  result = sub_662D0(a1 + 696); /*0x5cfc3*/
  if ( *(_BYTE *)(a1 + 617) ) /*0x5cfc8*/
  {
    v3 = *(_QWORD *)(a1 + 552); /*0x5cfd1*/
    *(_BYTE *)(a1 + 617) = 0; /*0x5cfda*/
    FMOD::ChannelControl::setPaused(v3, 0); /*0x5cfe1*/
    return FMOD::ChannelControl::setPaused(*(_QWORD *)(a1 + 584), 0); /*0x5cff5*/
  }
  return result; /*0x5cff0*/
}

// [5/45] Address: 0x5d010
// Method: FMODAudioEngine::update
void __fastcall FMODAudioEngine_update(__int64 a1, float a2)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  int OpenState; // eax
  bool v10; // zf
  __int64 v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm7_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  int v16; // eax
  float v17; // xmm1_4
  float v18; // xmm1_4
  __int64 v19; // rbx
  float v20; // xmm9_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  __int64 v25; // rbx
  float v26; // xmm9_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  _DWORD v31[4]; // [rsp+30h] [rbp-1A8h] BYREF
  float v32[68]; // [rsp+40h] [rbp-198h] BYREF

  if ( !*(_BYTE *)(a1 + 617) ) /*0x5d02d*/
  {
    v3 = a2 + *(float *)(a1 + 660); /*0x5d044*/
    v4 = a2 + *(float *)(a1 + 656); /*0x5d04c*/
    *(float *)(a1 + 660) = v3; /*0x5d062*/
    *(float *)(a1 + 656) = v4; /*0x5d06a*/
    FMOD::System::update(*(_QWORD *)(a1 + 560)); /*0x5d083*/
    sub_629C0(a1); /*0x5d08c*/
    FMODAudioEngine_updateTemporaryEffects(a1); /*0x5d094*/
    v5 = *(_QWORD *)(a1 + 1552); /*0x5d099*/
    v6 = 0; /*0x5d0aa*/
    if ( (*(_QWORD *)(a1 + 1560) - v5) >> 3 ) /*0x5d0b0*/
    {
      v7 = 0; /*0x5d0cd*/
      do /*0x5d152*/
      {
        v8 = *(_QWORD *)(v5 + v7); /*0x5d0d0*/
        OpenState = FMOD::Sound::getOpenState(v8, v31, 0, 0, 0); /*0x5d0e7*/
        v10 = (v31[0] & 0xFFFFFFFD) == 0; /*0x5d0ed*/
        *(_DWORD *)(a1 + 608) = OpenState; /*0x5d0f5*/
        if ( v10 ) /*0x5d0fb*/
        {
          FMOD::Sound::release(v8); /*0x5d108*/
          v11 = *(_QWORD *)(a1 + 1552) + 8LL * v6; /*0x5d11f*/
          memmove((void *)v11, (const void *)(v11 + 8), *(_QWORD *)(a1 + 1560) - (v11 + 8)); /*0x5d12a*/
          *(_QWORD *)(a1 + 1560) -= 8LL; /*0x5d12f*/
        }
        else
        {
          ++v6; /*0x5d0fd*/
          v7 += 8; /*0x5d0ff*/
        }
        v5 = *(_QWORD *)(a1 + 1552); /*0x5d137*/
      }
      while ( v6 < (unsigned __int64)((*(_QWORD *)(a1 + 1560) - v5) >> 3) ); /*0x5d152*/
    }
    sub_631B0(a1); /*0x5d16b*/
    v12 = *(float *)(a1 + 524); /*0x5d170*/
    if ( v12 != 0.0 ) /*0x5d189*/
    {
      if ( v12 < 0.0 ) /*0x5d192*/
      {
        v12 = *(float *)(a1 + 660); /*0x5d194*/
        *(float *)(a1 + 524) = v12; /*0x5d19c*/
      }
      v13 = *(float *)(a1 + 660) - v12; /*0x5d1b7*/
      FMOD::ChannelControl::setVolume(*(_QWORD *)(a1 + 552)); /*0x5d213*/
      if ( v13 >= *(float *)(a1 + 520) ) /*0x5d220*/
        *(_DWORD *)(a1 + 524) = 0; /*0x5d222*/
    }
    if ( *(float *)(a1 + 656) >= 0.016666668 ) /*0x5d249*/
    {
      if ( *(_BYTE *)(a1 + 544) ) /*0x5d24f*/
      {
        memset(v32, 0, 0x108u); /*0x5d269*/
        FMOD::DSP::getMeteringInfo(*(_QWORD *)(a1 + 568), 0, v32); /*0x5d27c*/
        v14 = v32[1]; /*0x5d28b*/
        if ( LOWORD(v32[65]) == 2 ) /*0x5d294*/
          v14 = (float)(v32[2] + v32[1]) * 0.5; /*0x5d2a0*/
        v15 = *(float *)(a1 + 512); /*0x5d2a4*/
        if ( v15 > 0.0 ) /*0x5d2af*/
          v14 = v14 / v15; /*0x5d2b1*/
        v16 = *(_DWORD *)(a1 + 540); /*0x5d2b5*/
        v17 = v14 + 0.1; /*0x5d2bb*/
        if ( v16 < 3 /*0x5d304*/
          || (float)(*(float *)(a1 + 532) * 1.1) > v17
          || (float)(*(float *)(a1 + 536) * 0.94999999) > v17
          && *(float *)(a1 + 532) > (float)(*(float *)(a1 + 536) * 0.2) )
        {
          v18 = *(float *)(a1 + 532) * 0.93000001; /*0x5d31f*/
        }
        else
        {
          *(float *)(a1 + 536) = v17; /*0x5d306*/
          v16 = 0; /*0x5d30e*/
          v18 = v17 * 1.1; /*0x5d311*/
        }
        *(float *)(a1 + 528) = v18; /*0x5d32b*/
        if ( v18 <= 0.1 ) /*0x5d333*/
          *(_DWORD *)(a1 + 536) = 0; /*0x5d335*/
        *(float *)(a1 + 532) = v18; /*0x5d33e*/
        *(_DWORD *)(a1 + 540) = v16 + 1; /*0x5d346*/
      }
      FMODAudioEngine_updateChannelTweens(a1); /*0x5d34f*/
      *(_DWORD *)(a1 + 656) = 0; /*0x5d354*/
    }
    if ( *(_BYTE *)(a1 + 2184) ) /*0x5d35b*/
    {
      v19 = *(_QWORD *)(a1 + 568); /*0x5d389*/
      v20 = *(float *)(a1 + 512); /*0x5d396*/
      memset(v32, 0, 0x108u); /*0x5d39f*/
      FMOD::DSP::getMeteringInfo(v19, 0, v32); /*0x5d3ae*/
      v21 = v32[1]; /*0x5d3bd*/
      if ( LOWORD(v32[65]) == 2 ) /*0x5d3c3*/
        v21 = (float)(v32[1] + v32[2]) * 0.5; /*0x5d3cb*/
      if ( v20 != 1.0 ) /*0x5d3d5*/
        v21 = v21 / v20; /*0x5d3d7*/
      v22 = *(float *)(a1 + 660); /*0x5d3dc*/
      v23 = (float)(v22 - *(float *)(a1 + 2188)) * 0.5; /*0x5d400*/
      if ( v21 > (float)(*(float *)(a1 + 2192) - v23) || v23 < 0.0 ) /*0x5d410*/
      {
        *(float *)(a1 + 2192) = v21; /*0x5d42a*/
        v24 = v21; /*0x5d432*/
        *(float *)(a1 + 2188) = v22; /*0x5d435*/
      }
      else
      {
        v24 = (float)(*(float *)(a1 + 2196) * 0.89999998) + (float)(v21 * 0.1); /*0x5d424*/
      }
      *(float *)(a1 + 2196) = v24; /*0x5d43d*/
      v25 = *(_QWORD *)(a1 + 576); /*0x5d44a*/
      v26 = *(float *)(a1 + 516); /*0x5d453*/
      memset(v32, 0, 0x108u); /*0x5d462*/
      FMOD::DSP::getMeteringInfo(v25, 0, v32); /*0x5d471*/
      v27 = v32[1]; /*0x5d480*/
      if ( LOWORD(v32[65]) == 2 ) /*0x5d486*/
        v27 = (float)(v32[1] + v32[2]) * 0.5; /*0x5d48e*/
      if ( v26 != 1.0 ) /*0x5d498*/
        v27 = v27 / v26; /*0x5d49a*/
      v28 = *(float *)(a1 + 660); /*0x5d49f*/
      v29 = (float)(v28 - *(float *)(a1 + 2200)) * 0.5; /*0x5d4c3*/
      if ( v27 > (float)(*(float *)(a1 + 2204) - v29) || v29 < 0.0 ) /*0x5d4d3*/
      {
        *(float *)(a1 + 2204) = v27; /*0x5d4ed*/
        v30 = v27; /*0x5d4f5*/
        *(float *)(a1 + 2200) = v28; /*0x5d4f8*/
      }
      else
      {
        v30 = (float)(*(float *)(a1 + 2208) * 0.89999998) + (float)(v27 * 0.1); /*0x5d4e7*/
      }
      *(float *)(a1 + 2208) = v30; /*0x5d500*/
    }
  }
}

// [7/45] Address: 0x5e200
// Method: FMODAudioEngine::updateChannelTweens
char __fastcall FMODAudioEngine_updateChannelTweens(__int64 a1)
{
  int i; // edi
  __int64 v3; // rax
  __int64 **v4; // rsi
  __int64 *m; // rax
  __int64 *v6; // rbx
  float v7; // xmm0_4
  __int64 v8; // rdx
  int v9; // ecx
  float v10; // xmm1_4
  __int64 **v11; // rcx
  __int64 *v12; // rdx
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 *v15; // rcx

  for ( i = 0; i < 3; ++i ) /*0x5e227*/
  {
    if ( i == 1 ) /*0x5e243*/
    {
      v3 = 680; /*0x5e245*/
    }
    else
    {
      v3 = 664; /*0x5e24f*/
      if ( i == 2 ) /*0x5e254*/
        v3 = 696; /*0x5e254*/
    }
    v4 = (__int64 **)(v3 + a1); /*0x5e258*/
    m = *(__int64 **)(v3 + a1); /*0x5e25c*/
    v6 = (__int64 *)*m; /*0x5e260*/
    if ( (__int64 *)*m != m ) /*0x5e266*/
    {
      do /*0x5e3a2*/
      {
        v7 = *(float *)(a1 + 656) + *((float *)v6 + 9); /*0x5e27b*/
        v8 = *((unsigned int *)v6 + 7); /*0x5e280*/
        v9 = *((_DWORD *)v6 + 8); /*0x5e283*/
        *((float *)v6 + 9) = v7; /*0x5e286*/
        v10 = fminf(1.0, v7 / *((float *)v6 + 10)); /*0x5e290*/
        if ( v10 < 0.0 ) /*0x5e297*/
          v10 = 0.0; /*0x5e299*/
        *((float *)v6 + 13) = (float)((float)(*((float *)v6 + 12) - *((float *)v6 + 11)) * v10) + *((float *)v6 + 11); /*0x5e2b2*/
        LOBYTE(m) = v10 == 1.0; /*0x5e2b9*/
        *((_BYTE *)v6 + 56) = v10 == 1.0; /*0x5e2c1*/
        if ( v9 ) /*0x5e2c6*/
        {
          if ( v9 == 1 ) /*0x5e2d8*/
            LOBYTE(m) = FMODAudioEngine_setChannelPitch(a1, v8, (unsigned int)i); /*0x5e2e0*/
        }
        else
        {
          LOBYTE(m) = sub_60860(a1, v8, (unsigned int)i); /*0x5e2ce*/
        }
        v11 = (__int64 **)v6[2]; /*0x5e2e9*/
        if ( *((_BYTE *)v6 + 56) ) /*0x5e2e5*/
        {
          v12 = v6; /*0x5e2f3*/
          if ( *((_BYTE *)v11 + 25) ) /*0x5e2ef*/
          {
            for ( j = (__int64 *)v6[1]; !*((_BYTE *)j + 25); j = (__int64 *)j[1] ) /*0x5e2fc*/
            {
              if ( v6 != (__int64 *)j[2] ) /*0x5e306*/
                break; /*0x5e306*/
              v6 = j; /*0x5e308*/
            }
            v6 = j; /*0x5e318*/
            LOBYTE(m) = sub_68550(v4, v12); /*0x5e31b*/
          }
          else
          {
            v6 = (__int64 *)v6[2]; /*0x5e322*/
            for ( k = *v11; !*((_BYTE *)k + 25); k = (__int64 *)*k ) /*0x5e328*/
              v6 = k; /*0x5e333*/
            LOBYTE(m) = sub_68550(v4, v12); /*0x5e342*/
          }
        }
        else if ( *((_BYTE *)v11 + 25) ) /*0x5e349*/
        {
          for ( m = (__int64 *)v6[1]; !*((_BYTE *)m + 25); m = (__int64 *)m[1] ) /*0x5e353*/
          {
            if ( v6 != (__int64 *)m[2] ) /*0x5e364*/
              break; /*0x5e364*/
            v6 = m; /*0x5e366*/
          }
          v6 = m; /*0x5e373*/
        }
        else
        {
          v6 = (__int64 *)v6[2]; /*0x5e378*/
          v15 = *v11; /*0x5e37b*/
          if ( !*((_BYTE *)v15 + 25) ) /*0x5e37e*/
          {
            do /*0x5e39d*/
            {
              m = (__int64 *)*v15; /*0x5e390*/
              v6 = v15; /*0x5e393*/
              v15 = m; /*0x5e396*/
            }
            while ( !*((_BYTE *)m + 25) ); /*0x5e39d*/
          }
        }
      }
      while ( v6 != *v4 ); /*0x5e3a2*/
    }
  }
  return (char)m; /*0x5e3b3*/
}

// [8/45] Address: 0x5e3e0
// Method: FMODAudioEngine::pitchForIdx
float __fastcall FMODAudioEngine_pitchForIdx(int a1)
{
  float result; // xmm0_4

  if ( !a1 ) /*0x5e3e2*/
    return 1.0; /*0x5e4e2*/
  switch ( a1 ) /*0x5e408*/
  {
    case -12: /*0x5e408*/
      result = 0.5; /*0x5e40a*/
      break; /*0x5e412*/
    case -11: /*0x5e408*/
      result = 0.52973157; /*0x5e413*/
      break; /*0x5e41b*/
    case -10: /*0x5e408*/
      result = 0.56123102; /*0x5e41c*/
      break; /*0x5e424*/
    case -9: /*0x5e408*/
      result = 0.59460354; /*0x5e425*/
      break; /*0x5e42d*/
    case -8: /*0x5e408*/
      result = 0.62996054; /*0x5e42e*/
      break; /*0x5e436*/
    case -7: /*0x5e408*/
      result = 0.66741991; /*0x5e437*/
      break; /*0x5e43f*/
    case -6: /*0x5e408*/
      result = 0.70710677; /*0x5e440*/
      break; /*0x5e448*/
    case -5: /*0x5e408*/
      result = 0.74915355; /*0x5e449*/
      break; /*0x5e451*/
    case -4: /*0x5e408*/
      result = 0.79370052; /*0x5e452*/
      break; /*0x5e45a*/
    case -3: /*0x5e408*/
      result = 0.84089643; /*0x5e45b*/
      break; /*0x5e463*/
    case -2: /*0x5e408*/
      result = 0.8908987; /*0x5e464*/
      break; /*0x5e46c*/
    case -1: /*0x5e408*/
      result = 0.9438743; /*0x5e46d*/
      break; /*0x5e475*/
    case 1: /*0x5e408*/
      result = 1.0594631; /*0x5e476*/
      break; /*0x5e47e*/
    case 2: /*0x5e408*/
      result = 1.1225621; /*0x5e47f*/
      break; /*0x5e487*/
    case 3: /*0x5e408*/
      result = 1.1892071; /*0x5e488*/
      break; /*0x5e490*/
    case 4: /*0x5e408*/
      result = 1.2599211; /*0x5e491*/
      break; /*0x5e499*/
    case 5: /*0x5e408*/
      result = 1.3348398; /*0x5e49a*/
      break; /*0x5e4a2*/
    case 6: /*0x5e408*/
      result = 1.4142135; /*0x5e4a3*/
      break; /*0x5e4ab*/
    case 7: /*0x5e408*/
      result = 1.4983071; /*0x5e4ac*/
      break; /*0x5e4b4*/
    case 8: /*0x5e408*/
      result = 1.587401; /*0x5e4b5*/
      break; /*0x5e4bd*/
    case 9: /*0x5e408*/
      result = 1.6817929; /*0x5e4be*/
      break; /*0x5e4c6*/
    case 10: /*0x5e408*/
      result = 1.7817974; /*0x5e4c7*/
      break; /*0x5e4cf*/
    case 11: /*0x5e408*/
      result = 1.8877486; /*0x5e4d0*/
      break; /*0x5e4d8*/
    case 12: /*0x5e408*/
      result = 2.0; /*0x5e4d9*/
      break; /*0x5e4e1*/
    default:
      return 1.0;
  }
  return result; /*0x5e412*/
}

// [9/45] Address: 0x5e550
// Method: FMODAudioEngine::getChannelGroup
__int64 __fastcall FMODAudioEngine_getChannelGroup(_QWORD *a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _BYTE v18[16]; // [rsp+20h] [rbp-10h] BYREF
  int v19; // [rsp+48h] [rbp+18h] BYREF
  __int64 v20; // [rsp+58h] [rbp+28h] BYREF

  v19 = a2; /*0x5e55a*/
  if ( a2 == -999999 ) /*0x5e573*/
    return a1[75]; /*0x5e58b*/
  if ( !a2 ) /*0x5e58e*/
  {
    if ( a3 ) /*0x5e593*/
      return a1[74]; /*0x5e595*/
    else
      return a1[73]; /*0x5e5ac*/
  }
  v6 = 0; /*0x5e5c3*/
  v20 = 0; /*0x5e5d0*/
  if ( a3 ) /*0x5e5e1*/
  {
    v11 = a1[268]; /*0x5e66a*/
    v12 = 2 /*0x5e6a3*/
        * (a1[271]
         & (0x100000001B3LL
          * (HIBYTE(v19)
           ^ (0x100000001B3LL
            * (BYTE2(v19)
             ^ (0x100000001B3LL * (BYTE1(v19) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))));
    v13 = *(_QWORD *)(v11 /*0x5e6a6*/
                    + 16
                    * (a1[271]
                     & (0x100000001B3LL
                      * (HIBYTE(v19)
                       ^ (0x100000001B3LL
                        * (BYTE2(v19)
                         ^ (0x100000001B3LL
                          * (BYTE1(v19) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))))
                    + 8);
    if ( v13 != a1[266] ) /*0x5e6b2*/
    {
      v14 = *(_QWORD *)(v11 + 8 * v12); /*0x5e6b4*/
      if ( a2 == *(_DWORD *)(v13 + 16) ) /*0x5e6bb*/
      {
LABEL_19:
        v6 = v13; /*0x5e6ce*/
      }
      else
      {
        while ( v13 != v14 ) /*0x5e6c3*/
        {
          v13 = *(_QWORD *)(v13 + 8); /*0x5e6c5*/
          if ( a2 == *(_DWORD *)(v13 + 16) ) /*0x5e6cc*/
            goto LABEL_19; /*0x5e6cc*/
        }
      }
    }
    if ( v6 ) /*0x5e6d4*/
    {
      v10 = a1 + 265; /*0x5e6d6*/
LABEL_22:
      result = *(_QWORD *)(*(_QWORD *)sub_66670(v10, v18, &v19) + 24LL); /*0x5e6dd*/
      v20 = result; /*0x5e6f1*/
      if ( result ) /*0x5e6f8*/
        return result; /*0x5e6f8*/
    }
  }
  else
  {
    v7 = a1[260]; /*0x5e61b*/
    v8 = *(_QWORD *)(v7 /*0x5e630*/
                   + 16
                   * (a1[263]
                    & (0x100000001B3LL
                     * (HIBYTE(a2)
                      ^ (0x100000001B3LL
                       * (BYTE2(a2)
                        ^ (0x100000001B3LL
                         * (BYTE1(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))))
                   + 8);
    if ( v8 != a1[258] ) /*0x5e63c*/
    {
      v9 = *(_QWORD *)(v7 /*0x5e63e*/
                     + 16
                     * (a1[263]
                      & (0x100000001B3LL
                       * (HIBYTE(a2)
                        ^ (0x100000001B3LL
                         * (BYTE2(a2)
                          ^ (0x100000001B3LL
                           * (BYTE1(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL))))))))));
      if ( a2 == *(_DWORD *)(v8 + 16) ) /*0x5e645*/
      {
LABEL_12:
        v6 = v8; /*0x5e655*/
      }
      else
      {
        while ( v8 != v9 ) /*0x5e64a*/
        {
          v8 = *(_QWORD *)(v8 + 8); /*0x5e64c*/
          if ( a2 == *(_DWORD *)(v8 + 16) ) /*0x5e653*/
            goto LABEL_12; /*0x5e653*/
        }
      }
    }
    if ( v6 ) /*0x5e65b*/
    {
      v10 = a1 + 257; /*0x5e661*/
      goto LABEL_22; /*0x5e668*/
    }
  }
  FMOD::System::createChannelGroup(a1[70], 0, &v20); /*0x5e6fe*/
  if ( !sub_659E0(a1 + 113, &v19) ) /*0x5e71c*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 113, v18, &v19) + 20LL) = 1065353216; /*0x5e73d*/
  if ( !sub_659E0(a1 + 121, &v19) ) /*0x5e74f*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 121, v18, &v19) + 20LL) = 1065353216; /*0x5e770*/
  if ( !sub_659E0(a1 + 129, &v19) ) /*0x5e782*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 129, v18, &v19) + 20LL) = 1065353216; /*0x5e7a3*/
  LOBYTE(v15) = 1; /*0x5e7b1*/
  if ( a3 ) /*0x5e7b7*/
  {
    FMOD::ChannelGroup::addGroup(a1[74], v20, v15, 0); /*0x5e7c0*/
    v16 = a1 + 265; /*0x5e7c6*/
  }
  else
  {
    FMOD::ChannelGroup::addGroup(a1[73], v20, v15, 0); /*0x5e7d6*/
    v16 = a1 + 257; /*0x5e7dc*/
  }
  v17 = sub_66670(v16, v18, &v19); /*0x5e7eb*/
  *(_QWORD *)(*(_QWORD *)v17 + 24LL) = v20; /*0x5e7f7*/
  return v20; /*0x5e57c*/
}

// [10/45] Address: 0x5e810
// Method: FMODAudioEngine::playEffect
// Hidden C++ exception states: #wind=1
__int64 __fastcall FMODAudioEngine_playEffect(int a1, __int64 a2)
{
  int v4; // eax
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // ebx
  _BYTE v9[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]

  v10 = a2; /*0x5e82f*/
  v4 = sub_3E4F0(v9, a2); /*0x5e839*/
  v7 = FMODAudioEngine_playEffect_0(a1, v4, v5, v6, 1065353216); /*0x5e85a*/
  sub_3C310(a2); /*0x5e85f*/
  return v7; /*0x5e866*/
}

// [11/45] Address: 0x5e890
// Method: FMODAudioEngine::playEffect_0
// Hidden C++ exception states: #wind=1
__int64 __fastcall FMODAudioEngine_playEffect_0(int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ebx
  _QWORD v12[5]; // [rsp+A8h] [rbp-70h] BYREF

  v12[4] = a2; /*0x5e8c4*/
  v7 = sub_3E4F0(v12, a2); /*0x5e8cc*/
  v10 = FMODAudioEngine_playEffectAdvanced(a1, v7, v8, v9, a5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); /*0x5e942*/
  sub_3C310(a2); /*0x5e947*/
  return v10; /*0x5e94e*/
}

// [14/45] Address: 0x5f560
// Method: FMODAudioEngine::registerChannel
__int64 __fastcall FMODAudioEngine_registerChannel(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+50h] [rbp+20h] BYREF
  int v13; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = a4; /*0x5f560*/
  v14 = a3; /*0x5f565*/
  if ( !a3 ) /*0x5f57d*/
  {
    a3 = dword_8F835C; /*0x5f57f*/
    v14 = dword_8F835C++; /*0x5f586*/
  }
  FMOD::ChannelControl::setUserData(a2, a3); /*0x5f59a*/
  *(_QWORD *)(*(_QWORD *)sub_66670(a1 + 1640, v11, &v14) + 24LL) = a2; /*0x5f5bb*/
  v12 = 0; /*0x5f5c2*/
  FMOD::ChannelControl::getVolume(a2, &v12); /*0x5f5c9*/
  v6 = sub_66DF0(a1 + 712, v11, &v14); /*0x5f5de*/
  *(_DWORD *)(*(_QWORD *)v6 + 20LL) = v12; /*0x5f5f3*/
  *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 776, v11, &v14) + 20LL) = 1065353216; /*0x5f60b*/
  v13 = 0; /*0x5f615*/
  FMOD::ChannelControl::getPitch(a2, &v13); /*0x5f61c*/
  v7 = sub_66DF0(a1 + 840, v11, &v14); /*0x5f631*/
  *(_DWORD *)(*(_QWORD *)v7 + 20LL) = v13; /*0x5f63e*/
  if ( v15 ) /*0x5f647*/
  {
    v8 = sub_66DF0(a1 + 1776, v11, &v14); /*0x5f658*/
    *(_DWORD *)(*(_QWORD *)v8 + 20LL) = v15; /*0x5f66b*/
    v9 = sub_66DF0(a1 + 1840, v11, &v15); /*0x5f675*/
    *(_DWORD *)(*(_QWORD *)v9 + 20LL) = v14; /*0x5f680*/
  }
  return v14; /*0x5f686*/
}

// [15/45] Address: 0x5fa10
// Method: FMODAudioEngine::channelStopped
void __fastcall FMODAudioEngine_channelStopped(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  void **v7; // rbx
  unsigned int i; // edi
  void **v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rdi
  void **v14; // rdx
  void **v15; // rax
  void *v16; // rax
  _QWORD *v17; // rcx
  void **v18; // rax
  void **v19; // rbx
  void *v20; // rax
  _QWORD *v21; // rdx
  void **v22; // rdx
  void **v23; // rax
  void *v24; // rax
  _QWORD *v25; // rcx
  __int64 v26[9]; // [rsp+20h] [rbp-48h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  FMOD::ChannelControl::getUserData(a2, &v28); /*0x5fa39*/
  v6 = v28; /*0x5fa3f*/
  v7 = 0; /*0x5fa4c*/
  v27 = 0; /*0x5fa51*/
  FMOD::ChannelControl::getNumDSPs(a2, &v27); /*0x5fa55*/
  for ( i = 0; (int)i < v27; ++i ) /*0x5fa61*/
  {
    v26[0] = 0; /*0x5fa75*/
    FMOD::ChannelControl::getDSP(a2, i, v26); /*0x5fa7f*/
    if ( v26[0] ) /*0x5fa8d*/
    {
      FMOD::ChannelControl::removeDSP(a2); /*0x5fa92*/
      FMOD::DSP::release(v26[0]); /*0x5fa9d*/
    }
  }
  v9 = (void **)a1[198]; /*0x5fabd*/
  v10 = (__int64 *)(a1[200] /*0x5fb09*/
                  + 16
                  * (a1[203]
                   & (0x100000001B3LL
                    * (BYTE3(v28)
                     ^ (0x100000001B3LL
                      * (BYTE2(v28)
                       ^ (0x100000001B3LL
                        * (BYTE1(v28) ^ (0x100000001B3LL * ((unsigned __int8)v6 ^ 0xCBF29CE484222325uLL))))))))));
  v11 = v10[1]; /*0x5fb10*/
  if ( (void **)v11 != v9 ) /*0x5fb17*/
  {
    v12 = *v10; /*0x5fb19*/
    if ( v6 == *(_DWORD *)(v11 + 16) ) /*0x5fb20*/
    {
LABEL_9:
      v7 = (void **)v11; /*0x5fb31*/
    }
    else
    {
      while ( v11 != v12 ) /*0x5fb25*/
      {
        v11 = *(_QWORD *)(v11 + 8); /*0x5fb27*/
        if ( v6 == *(_DWORD *)(v11 + 16) ) /*0x5fb2f*/
          goto LABEL_9; /*0x5fb2f*/
      }
    }
  }
  if ( !v7 ) /*0x5fb37*/
    v7 = (void **)a1[198]; /*0x5fb37*/
  if ( v7 != v9 ) /*0x5fb3e*/
  {
    v13 = v7[3]; /*0x5fb44*/
    if ( v13 ) /*0x5fb4b*/
    {
      FMOD::ChannelControl::removeDSP(a2); /*0x5fb53*/
      FMOD::DSP::release(v13); /*0x5fb5c*/
    }
    v14 = (void **)(a1[200] /*0x5fb99*/
                  + 16
                  * (a1[203]
                   & (0x100000001B3LL
                    * (*((unsigned __int8 *)v7 + 19)
                     ^ (0x100000001B3LL
                      * (*((unsigned __int8 *)v7 + 18)
                       ^ (0x100000001B3LL
                        * (*((unsigned __int8 *)v7 + 17)
                         ^ (0x100000001B3LL * (*((unsigned __int8 *)v7 + 16) ^ 0xCBF29CE484222325uLL))))))))));
    v15 = (void **)*v14; /*0x5fba0*/
    if ( v14[1] == v7 ) /*0x5fba7*/
    {
      if ( v15 == v7 ) /*0x5fbac*/
      {
        v16 = (void *)a1[198]; /*0x5fbae*/
        *v14 = v16; /*0x5fbb5*/
      }
      else
      {
        v16 = v7[1]; /*0x5fbbe*/
      }
      v14[1] = v16; /*0x5fbb8*/
    }
    else if ( v15 == v7 ) /*0x5fbcb*/
    {
      *v14 = *v7; /*0x5fbd0*/
    }
    v17 = *v7; /*0x5fbd3*/
    --a1[199]; /*0x5fbdb*/
    *(_QWORD *)v7[1] = v17; /*0x5fbe6*/
    v17[1] = v7[1]; /*0x5fbed*/
    j_j_free(v7); /*0x5fbf4*/
  }
  sub_5F690(a1, v6); /*0x5fbff*/
  if ( a3 ) /*0x5fc07*/
  {
    v18 = (void **)a1[41]; /*0x5fc0d*/
    v19 = (void **)*v18; /*0x5fc14*/
    if ( *v18 != v18 ) /*0x5fc1a*/
    {
      while ( *((_DWORD *)v19 + 6) != v6 ) /*0x5fc24*/
      {
        v19 = (void **)*v19; /*0x5fc26*/
        if ( v19 == v18 ) /*0x5fc2c*/
          return; /*0x5fc2c*/
      }
      v20 = v19[4]; /*0x5fc33*/
      if ( v20 ) /*0x5fc3e*/
      {
        v21 = (_QWORD *)a1[195]; /*0x5fc47*/
        if ( v21 == (_QWORD *)a1[196] ) /*0x5fc4f*/
        {
          sub_68840(a1 + 194, v21, v19 + 4); /*0x5fc5b*/
        }
        else
        {
          *v21 = v20; /*0x5fc51*/
          a1[195] += 8LL; /*0x5fc54*/
        }
      }
      v22 = (void **)(a1[43] /*0x5fc97*/
                    + 16
                    * (a1[46]
                     & (0x100000001B3LL
                      * (*((unsigned __int8 *)v19 + 19)
                       ^ (0x100000001B3LL
                        * (*((unsigned __int8 *)v19 + 18)
                         ^ (0x100000001B3LL
                          * (*((unsigned __int8 *)v19 + 17)
                           ^ (0x100000001B3LL * (*((unsigned __int8 *)v19 + 16) ^ 0xCBF29CE484222325uLL))))))))));
      v23 = (void **)*v22; /*0x5fc9e*/
      if ( v22[1] == v19 ) /*0x5fca5*/
      {
        if ( v23 == v19 ) /*0x5fcaa*/
        {
          v24 = (void *)a1[41]; /*0x5fcac*/
          *v22 = v24; /*0x5fcb3*/
        }
        else
        {
          v24 = v19[1]; /*0x5fcbc*/
        }
        v22[1] = v24; /*0x5fcb6*/
      }
      else if ( v23 == v19 ) /*0x5fcc9*/
      {
        *v22 = *v19; /*0x5fcce*/
      }
      v25 = *v19; /*0x5fcd1*/
      --a1[42]; /*0x5fcd4*/
      *(_QWORD *)v19[1] = v25; /*0x5fcdf*/
      v25[1] = v19[1]; /*0x5fce6*/
      sub_3C310(v19 + 5); /*0x5fcee*/
      j_j_free(v19); /*0x5fcfb*/
    }
  }
}

// [16/45] Address: 0x602a0
// Method: FMODAudioEngine::stopChannel
void __fastcall FMODAudioEngine_stopChannel(__int64 a1, __int64 a2, char a3, float a4)
{
  __int64 v7; // r9
  float v8; // xmm2_4
  float v9; // xmm1_4
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __m128i v14; // xmm0
  __int64 v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  unsigned __int64 v19; // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  if ( a2 ) /*0x602a3*/
  {
    if ( a3 || a4 > 0.0 ) /*0x602dd*/
    {
      FMOD::ChannelControl::getUserData(a2, &v21); /*0x602f8*/
      sub_67020(a1 + 1704, v20, &v21); /*0x60320*/
      if ( a3 ) /*0x60328*/
        FMOD::Channel::setLoopCount(a2, 0); /*0x6032f*/
      if ( a4 > 0.0 ) /*0x60339*/
      {
        *(_DWORD *)(a1 + 608) = FMOD::ChannelControl::getDSPClock(a2, 0, &v21); /*0x60363*/
        FMODAudioEngine_stopAndGetFade(a1, a2); /*0x60369*/
        if ( v21 < 0 ) /*0x6038f*/
          v8 = (float)(v21 & 1 | (unsigned int)((unsigned __int64)v21 >> 1)) /*0x603a9*/
             + (float)(v21 & 1 | (unsigned int)((unsigned __int64)v21 >> 1));
        else
          v8 = (float)(int)v21; /*0x60391*/
        v9 = (float)((float)*(int *)(a1 + 612) * a4) + v8; /*0x603b5*/
        v10 = 0; /*0x603b9*/
        if ( v9 >= 9.223372e18 ) /*0x603c8*/
        {
          v9 = v9 - 9.223372e18; /*0x603ca*/
          if ( v9 < 9.223372e18 ) /*0x603d1*/
            v10 = 0x8000000000000000uLL; /*0x603d3*/
        }
        LOBYTE(v7) = 1; /*0x603db*/
        FMOD::ChannelControl::setDelay(a2, 0, v10 + (unsigned int)(int)v9, v7); /*0x603e6*/
        v11 = v21; /*0x603ec*/
        *(_DWORD *)(a1 + 608) = v12; /*0x603fb*/
        v13 = FMOD::ChannelControl::addFadePoint(a2, v11); /*0x60401*/
        v14 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 612)); /*0x60407*/
        v15 = v21; /*0x60412*/
        *(_DWORD *)(a1 + 608) = v13; /*0x60420*/
        v16 = _mm_cvtepi32_ps(v14).m128_f32[0] * a4; /*0x60429*/
        if ( v15 < 0 ) /*0x60430*/
          v17 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1)) /*0x6044a*/
              + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
        else
          v17 = (float)(int)v15; /*0x60432*/
        v18 = v16 + v17; /*0x6044e*/
        v19 = 0; /*0x60452*/
        if ( v18 >= 9.223372e18 ) /*0x60457*/
        {
          v18 = v18 - 9.223372e18; /*0x60459*/
          if ( v18 < 9.223372e18 ) /*0x60460*/
            v19 = 0x8000000000000000uLL; /*0x60462*/
        }
        *(_DWORD *)(a1 + 608) = FMOD::ChannelControl::addFadePoint(a2, v19 + (unsigned int)(int)v18); /*0x6047e*/
      }
    }
    else
    {
      FMOD::ChannelControl::stop(a2); /*0x602e2*/
    }
  }
}

// [17/45] Address: 0x604b0
// Method: FMODAudioEngine::stopAndGetFade
float __fastcall FMODAudioEngine_stopAndGetFade(__int64 a1, __int64 a2)
{
  int FadePoints; // eax
  bool v5; // zf
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  float v10; // xmm1_4
  unsigned __int64 v11; // rax
  int v12; // ecx
  float v13; // xmm0_4
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]
  int v18; // [rsp+48h] [rbp+10h] BYREF
  float v19; // [rsp+50h] [rbp+18h] BYREF
  float v20; // [rsp+54h] [rbp+1Ch]
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 ) /*0x604c3*/
    return 1.0; /*0x604c3*/
  v18 = 0; /*0x604cc*/
  FadePoints = FMOD_Channel_GetFadePoints(a2, &v18, 0, 0); /*0x604df*/
  v5 = v18 == 0; /*0x604e5*/
  *(_DWORD *)(a1 + 608) = FadePoints; /*0x604ea*/
  if ( v5 ) /*0x604f0*/
    return 1.0; /*0x605dc*/
  FMOD_Channel_GetDSPClock(a2, 0, &v21); /*0x60500*/
  *(_DWORD *)(a1 + 608) = FMOD::ChannelControl::getDSPClock(a2, 0, &v21); /*0x60523*/
  v6 = FMOD_Channel_GetFadePoints(a2, &v18, &v16, &v19); /*0x6052e*/
  v7 = v17; /*0x60534*/
  v8 = v16; /*0x6053c*/
  *(_DWORD *)(a1 + 608) = v6; /*0x60541*/
  FMOD_Channel_RemoveFadePoints(a2, v8, v7); /*0x60547*/
  v9 = v17 - v16; /*0x6055a*/
  if ( v17 - v16 < 0 ) /*0x6056d*/
  {
    v11 = v9 & 1 | ((unsigned __int64)(v17 - v16) >> 1); /*0x6057f*/
    v10 = (float)(int)v11 + (float)(int)v11; /*0x60587*/
  }
  else
  {
    v10 = (float)v9; /*0x6056f*/
  }
  v12 = v21 - v16; /*0x60590*/
  v13 = (float)(v20 - v19) / v10; /*0x60593*/
  if ( v21 - v16 >= 0 ) /*0x6059a*/
    return (float)(v13 * (float)v12) + v19; /*0x605a5*/
  v15 = v12 & 1 | ((unsigned __int64)(v21 - v16) >> 1); /*0x605bd*/
  return (float)(v13 * (float)((float)(int)v15 + (float)(int)v15)) + v19; /*0x605a9*/
}

// [18/45] Address: 0x605f0
// Method: FMODAudioEngine::updateChannel
// Hidden C++ exception states: #wind=1
__int64 __fastcall FMODAudioEngine_updateChannel(
        __int64 a1,
        signed int a2,
        unsigned int a3,
        signed int a4,
        float a5,
        int a6)
{
  __int64 v10; // rax
  _QWORD *v11; // r15
  __int64 result; // rax
  __int64 v13; // r9
  unsigned int v14; // xmm1_4
  float v15; // xmm6_4
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 *v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 *v21; // rax
  char *v22; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-60h] BYREF
  __int128 v24; // [rsp+30h] [rbp-50h] BYREF
  __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  __int128 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  unsigned int v28; // [rsp+A8h] [rbp+28h] BYREF

  v28 = a2; /*0x605ff*/
  if ( a3 == 1 ) /*0x60627*/
  {
    v10 = 680; /*0x60629*/
  }
  else
  {
    v10 = 664; /*0x60630*/
    if ( a3 == 2 ) /*0x6063d*/
      v10 = 696; /*0x6063d*/
  }
  v11 = (_QWORD *)(v10 + a1); /*0x60640*/
  v23 = __PAIR64__(a4, a2); /*0x60644*/
  result = sub_66340(v10 + a1, &v23); /*0x60652*/
  v14 = 0; /*0x60657*/
  v15 = a5; /*0x6065a*/
  if ( a5 <= 0.0 ) /*0x60662*/
  {
    if ( !a4 ) /*0x60666*/
      return sub_60860(a1, v28, a3); /*0x60676*/
    if ( a4 == 1 ) /*0x60683*/
      return FMODAudioEngine_setChannelPitch(a1, v28, a3); /*0x60697*/
    return result; /*0x6067b*/
  }
  if ( !a4 ) /*0x606a3*/
  {
    if ( a3 == 1 ) /*0x606a8*/
    {
      *(_QWORD *)&v24 = 0x3FF0000000000000LL; /*0x606b2*/
      sub_64F70(a1 + 904, &v25, &v28, &v24); /*0x606ca*/
      v16 = a1 + 904; /*0x606cf*/
    }
    else
    {
      v16 = a1 + 1096; /*0x606db*/
      if ( a3 != 2 ) /*0x606e2*/
        v16 = a1 + 712; /*0x606e4*/
    }
LABEL_21:
    v14 = *(_DWORD *)(*(_QWORD *)sub_66DF0(v16, &v25, &v28) + 20LL); /*0x60727*/
    goto LABEL_22; /*0x60737*/
  }
  if ( a4 == 1 ) /*0x60705*/
  {
    if ( a3 == 1 ) /*0x60709*/
    {
      v16 = a1 + 1032; /*0x6070b*/
    }
    else
    {
      v16 = a1 + 1224; /*0x60717*/
      if ( a3 != 2 ) /*0x6071e*/
        v16 = a1 + 840; /*0x60720*/
    }
    goto LABEL_21; /*0x60712*/
  }
LABEL_22:
  LODWORD(v26) = 0; /*0x6073c*/
  *(_QWORD *)((char *)&v26 + 4) = __PAIR64__(v14, LODWORD(v15)); /*0x60743*/
  HIDWORD(v26) = a6; /*0x60752*/
  LODWORD(v27) = v14; /*0x60757*/
  BYTE4(v27) = 0; /*0x6075c*/
  v17 = (__int64 *)*v11; /*0x60760*/
  v18 = *(__int64 **)(*v11 + 8LL); /*0x60763*/
  v19 = 0; /*0x60767*/
  v20 = (__int64 *)*v11; /*0x60769*/
  if ( !*((_BYTE *)v18 + 25) ) /*0x6076c*/
  {
    v21 = *(__int64 **)(*v11 + 8LL); /*0x60772*/
    do /*0x6079c*/
    {
      v18 = v21; /*0x60775*/
      if ( *((_DWORD *)v21 + 7) < a2 || *((_DWORD *)v21 + 7) <= a2 && *((_DWORD *)v21 + 8) < a4 ) /*0x60783*/
      {
        v19 = 0; /*0x6078f*/
        v21 += 2; /*0x60791*/
      }
      else
      {
        v19 = 1; /*0x60785*/
        v20 = v21; /*0x6078a*/
      }
      v21 = (__int64 *)*v21; /*0x60795*/
    }
    while ( !*((_BYTE *)v21 + 25) ); /*0x6079c*/
  }
  *(_QWORD *)&v25 = v18; /*0x6079e*/
  *((_QWORD *)&v25 + 1) = __PAIR64__(HIDWORD(v26), v19); /*0x607a2*/
  result = HIDWORD(v26); /*0x607a5*/
  if ( *((_BYTE *)v20 + 25) || a2 < *((_DWORD *)v20 + 7) || a2 <= *((_DWORD *)v20 + 7) && a4 < *((_DWORD *)v20 + 8) ) /*0x607bc*/
  {
    if ( v11[1] == 0x3FFFFFFFFFFFFFFLL ) /*0x607cc*/
      sub_5AC20(v19, v20, v18, v13); /*0x6084d*/
    v24 = (unsigned __int64)v11; /*0x607d2*/
    v22 = (char *)operator new(0x40u); /*0x607e3*/
    *(_QWORD *)(v22 + 28) = v23; /*0x607ed*/
    *(_OWORD *)(v22 + 36) = v26; /*0x607f5*/
    *(_QWORD *)(v22 + 52) = v27; /*0x607fe*/
    *(_QWORD *)v22 = v17; /*0x60803*/
    *((_QWORD *)v22 + 1) = v17; /*0x60806*/
    *((_QWORD *)v22 + 2) = v17; /*0x6080a*/
    *((_WORD *)v22 + 12) = 0; /*0x6080e*/
    v24 = v25; /*0x60818*/
    return sub_69600(v11, &v24, v22); /*0x60826*/
  }
  return result; /*0x6082b*/
}

// [19/45] Address: 0x60c00
// Method: FMODAudioEngine::setChannelPitch
__int64 __fastcall FMODAudioEngine_setChannelPitch(_QWORD *a1, unsigned int a2, int a3, float a4)
{
  __int64 ChannelGroup; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = a2; /*0x60c00*/
  if ( a3 == 1 ) /*0x60c1d*/
  {
    *(float *)(*(_QWORD *)sub_66DF0(a1 + 129, v8, &v9) + 20LL) = a4; /*0x60c39*/
    ChannelGroup = FMODAudioEngine_getChannelGroup(a1, v9, 0); /*0x60c42*/
    FMOD::ChannelControl::setPitch(ChannelGroup); /*0x60c4d*/
    result = FMODAudioEngine_getChannelGroup(a1, v9, 1); /*0x60c5d*/
    return FMOD::ChannelControl::setPitch(result); /*0x60cf1*/
  }
  if ( a3 == 2 ) /*0x60c70*/
  {
    *(float *)(*(_QWORD *)sub_66DF0(a1 + 153, v8, &v9) + 20LL) = a4; /*0x60c86*/
    v10 = v9; /*0x60c96*/
    if ( sub_659E0(a1 + 40, &v10) ) /*0x60c9a*/
      v7 = *(unsigned int *)(*(_QWORD *)sub_674B0(a1 + 40, v8, &v10) + 24LL); /*0x60cbd*/
    else
      v7 = 0; /*0x60cc2*/
  }
  else
  {
    *(float *)(*(_QWORD *)sub_66DF0(a1 + 105, v8, &v9) + 20LL) = a4; /*0x60cd5*/
    v7 = v9; /*0x60cda*/
  }
  result = sub_5FDE0(a1, v7); /*0x60ce1*/
  if ( result ) /*0x60ce9*/
    return FMOD::ChannelControl::setPitch(result); /*0x60ce9*/
  return result; /*0x60cf7*/
}

// [20/45] Address: 0x60d10
// Method: FMODAudioEngine::preloadEffect
// Hidden C++ exception states: #wind=4
__int64 __fastcall FMODAudioEngine_preloadEffect(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 i; // rcx
  __int64 v7; // rbx
  __int64 v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  void **v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  void *v16; // r8
  void *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v19[40]; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+64h] [rbp-9Ch]
  __int128 v22; // [rsp+74h] [rbp-8Ch]
  __int128 v23; // [rsp+84h] [rbp-7Ch]
  __int128 v24; // [rsp+94h] [rbp-6Ch]
  __int128 v25; // [rsp+A4h] [rbp-5Ch]
  __int128 v26; // [rsp+B4h] [rbp-4Ch]
  __int64 v27; // [rsp+C4h] [rbp-3Ch]
  int v28; // [rsp+CCh] [rbp-34h]
  int v29; // [rsp+D0h] [rbp-30h]
  __int128 v30; // [rsp+D4h] [rbp-2Ch]
  __int128 v31; // [rsp+E4h] [rbp-1Ch]
  __int128 v32; // [rsp+F4h] [rbp-Ch]
  __int128 v33; // [rsp+104h] [rbp+4h]
  __int128 v34; // [rsp+114h] [rbp+14h]
  __int128 v35; // [rsp+124h] [rbp+24h]
  __int64 v36; // [rsp+134h] [rbp+34h]
  int v37; // [rsp+13Ch] [rbp+3Ch]
  _QWORD *v38; // [rsp+140h] [rbp+40h]
  void *Block[2]; // [rsp+148h] [rbp+48h] BYREF
  __m128i si128; // [rsp+158h] [rbp+58h]
  _BYTE v41[32]; // [rsp+168h] [rbp+68h] BYREF

  v2 = a2; /*0x60d38*/
  v38 = a2; /*0x60d3e*/
  if ( a2[3] > 0xFu ) /*0x60d47*/
    a2 = (_QWORD *)*a2; /*0x60d49*/
  v4 = 0xCBF29CE484222325uLL; /*0x60d4c*/
  v5 = v2[2]; /*0x60d56*/
  for ( i = 0; i < v5; ++i ) /*0x60d5f*/
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v4); /*0x60d77*/
  if ( *(_QWORD *)(sub_665A0(a1 + 384, v19, v2, v4) + 8) ) /*0x60d97*/
  {
    v7 = *(_QWORD *)sub_67240(a1 + 384, v19, v2); /*0x60db2*/
    sub_3C310(v2); /*0x60db8*/
    return v7 + 48; /*0x60dbd*/
  }
  else
  {
    v18 = 0; /*0x60dc6*/
    v9 = cocos2d::CCFileUtils::sharedFileUtils(); /*0x60dcf*/
    v10 = v2; /*0x60dd5*/
    if ( v2[3] > 0xFu ) /*0x60ddd*/
      v10 = (_QWORD *)*v2; /*0x60ddf*/
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *, _QWORD))(*(_QWORD *)v9 + 40LL))( /*0x60df3*/
                      v9,
                      v41,
                      v10,
                      0);
    if ( v11[3] > 0xFu ) /*0x60dfc*/
      v11 = (_QWORD *)*v11; /*0x60dfe*/
    *(_OWORD *)Block = 0; /*0x60e04*/
    si128 = 0; /*0x60e0b*/
    v12 = -1; /*0x60e10*/
    do /*0x60e23*/
      ++v12; /*0x60e20*/
    while ( *((_BYTE *)v11 + v12) ); /*0x60e23*/
    sub_3C230(Block); /*0x60e31*/
    sub_3C310(v41); /*0x60e3b*/
    v21 = 0; /*0x60e45*/
    v22 = 0; /*0x60e4a*/
    v23 = 0; /*0x60e4f*/
    v24 = 0; /*0x60e53*/
    v25 = 0; /*0x60e57*/
    v26 = 0; /*0x60e5b*/
    v27 = 0; /*0x60e5f*/
    v28 = 0; /*0x60e63*/
    v30 = 0; /*0x60e66*/
    v31 = 0; /*0x60e6a*/
    v32 = 0; /*0x60e6e*/
    v33 = 0; /*0x60e72*/
    v34 = 0; /*0x60e76*/
    v35 = 0; /*0x60e7a*/
    v36 = 0; /*0x60e7e*/
    v37 = 0; /*0x60e82*/
    v20 = 224; /*0x60e85*/
    v29 = 10; /*0x60e8d*/
    v13 = Block; /*0x60e94*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x60e9d*/
      v13 = (void **)Block[0]; /*0x60e9d*/
    *(_DWORD *)(a1 + 608) = FMOD::System::createSound(*(_QWORD *)(a1 + 560), v13, 134217738, &v20, &v18); /*0x60ec4*/
    if ( v18 ) /*0x60ed0*/
    {
      v14 = sub_3E4F0(v19, v2); /*0x60ede*/
      v15 = FMODAudioEngine_storeEffect(a1, v18, v14); /*0x60ef3*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x60efe*/
      {
        v16 = Block[0]; /*0x60f03*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x60f11*/
        {
          v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x60f17*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x60f26*/
            invoke_watson(0, 0, 0, 0, 0); /*0x60f3b*/
        }
        j_j_free(v16); /*0x60f45*/
      }
      si128 = _mm_load_si128((const __m128i *)&Size); /*0x60f52*/
      LOBYTE(Block[0]) = 0; /*0x60f57*/
      sub_3C310(v2); /*0x60f5e*/
      return v15; /*0x60f63*/
    }
    else
    {
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x60f70*/
      {
        v17 = Block[0]; /*0x60f75*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x60f83*/
        {
          v17 = (void *)*((_QWORD *)Block[0] - 1); /*0x60f89*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F ) /*0x60f98*/
            invoke_watson(0, 0, 0, 0, 0); /*0x60fad*/
        }
        j_j_free(v17); /*0x60fb4*/
      }
      si128 = _mm_load_si128((const __m128i *)&Size); /*0x60fc1*/
      LOBYTE(Block[0]) = 0; /*0x60fc6*/
      sub_3C310(v2); /*0x60fcd*/
      return 0; /*0x60fd2*/
    }
  }
}

// [21/45] Address: 0x61000
// Method: FMODAudioEngine::storeEffect
// Hidden C++ exception states: #wind=4
__int64 __fastcall FMODAudioEngine_storeEffect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  void *v7; // rdx
  __int64 v8; // rbx
  _QWORD v10[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+50h] [rbp-68h]
  __int64 v13; // [rsp+58h] [rbp-60h] BYREF
  _OWORD v14[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v15; // [rsp+80h] [rbp-38h]
  int v16; // [rsp+88h] [rbp-30h]
  char v17; // [rsp+8Ch] [rbp-2Ch]

  v12 = a3; /*0x6102a*/
  FMOD::Sound::setLoopCount(a2, 0); /*0x61034*/
  v6 = sub_3E4F0(v11, a3); /*0x61047*/
  v10[0] = v6; /*0x6104a*/
  v14[0] = 0; /*0x61052*/
  v14[1] = _mm_load_si128((const __m128i *)&Size); /*0x6105f*/
  LOBYTE(v14[0]) = 0; /*0x61065*/
  v15 = 0; /*0x6106c*/
  v16 = 0; /*0x61074*/
  v17 = 0; /*0x6107b*/
  v13 = a2; /*0x61082*/
  if ( v14 != (_OWORD *)v6 ) /*0x6108f*/
  {
    v7 = (void *)v6; /*0x61091*/
    if ( *(_QWORD *)(v6 + 24) > 0xFu ) /*0x61099*/
      v7 = *(void **)v6; /*0x6109b*/
    sub_3F5A0(v14, v7, *(_QWORD *)(v6 + 16)); /*0x610a7*/
  }
  sub_3C310(v6); /*0x610b0*/
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64 *))sub_651A0)(a1 + 384, v10, a3, &v13); /*0x610ca*/
  sub_3C310(v14); /*0x610d5*/
  v8 = *(_QWORD *)sub_67240(a1 + 384, v10, a3); /*0x610ee*/
  FMOD::Sound::getLength(a2, v8 + 88, 1); /*0x610fe*/
  sub_3C310(a3); /*0x61108*/
  return v8 + 48; /*0x61111*/
}

// [22/45] Address: 0x61140
// Method: FMODAudioEngine::preloadEffectAsync
// Hidden C++ exception states: #wind=4
__int64 __fastcall FMODAudioEngine_preloadEffectAsync(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 i; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // r8
  void **v12; // rdx
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+54h] [rbp-ACh]
  __int128 v20; // [rsp+64h] [rbp-9Ch]
  __int128 v21; // [rsp+74h] [rbp-8Ch]
  __int128 v22; // [rsp+84h] [rbp-7Ch]
  __int128 v23; // [rsp+94h] [rbp-6Ch]
  __int128 v24; // [rsp+A4h] [rbp-5Ch]
  __int64 v25; // [rsp+B4h] [rbp-4Ch]
  int v26; // [rsp+BCh] [rbp-44h]
  int v27; // [rsp+C0h] [rbp-40h]
  __int128 v28; // [rsp+C4h] [rbp-3Ch]
  __int128 v29; // [rsp+D4h] [rbp-2Ch]
  __int128 v30; // [rsp+E4h] [rbp-1Ch]
  __int128 v31; // [rsp+F4h] [rbp-Ch]
  __int128 v32; // [rsp+104h] [rbp+4h]
  __int128 v33; // [rsp+114h] [rbp+14h]
  __int64 v34; // [rsp+124h] [rbp+24h]
  int v35; // [rsp+12Ch] [rbp+2Ch]
  _QWORD *v36; // [rsp+130h] [rbp+30h]
  void *Block[2]; // [rsp+138h] [rbp+38h] BYREF
  __m128i si128; // [rsp+148h] [rbp+48h]
  _BYTE v39[32]; // [rsp+158h] [rbp+58h] BYREF

  v2 = a2; /*0x61162*/
  v36 = a2; /*0x61168*/
  if ( a2[3] > 0xFu ) /*0x61171*/
    a2 = (_QWORD *)*a2; /*0x61173*/
  v4 = 0xCBF29CE484222325uLL; /*0x61176*/
  v5 = v2[2]; /*0x61180*/
  for ( i = 0; i < v5; ++i ) /*0x61189*/
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v4); /*0x611a7*/
  if ( *(_QWORD *)(sub_665A0(a1 + 1992, v17, v2, v4) + 8) ) /*0x611c7*/
  {
    v7 = *(_QWORD *)(*(_QWORD *)sub_66900(a1 + 1992, v17, v2) + 48LL); /*0x611e5*/
  }
  else
  {
    v16 = 0; /*0x611ee*/
    v8 = cocos2d::CCFileUtils::sharedFileUtils(); /*0x611f7*/
    v9 = v2; /*0x611fd*/
    if ( v2[3] > 0xFu ) /*0x61205*/
      v9 = (_QWORD *)*v2; /*0x61207*/
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *, _QWORD))(*(_QWORD *)v8 + 40LL))( /*0x6121b*/
                      v8,
                      v39,
                      v9,
                      0);
    if ( v10[3] > 0xFu ) /*0x61224*/
      v10 = (_QWORD *)*v10; /*0x61226*/
    *(_OWORD *)Block = 0; /*0x6122c*/
    si128 = 0; /*0x61233*/
    v11 = -1; /*0x61238*/
    do /*0x61243*/
      ++v11; /*0x61240*/
    while ( *((_BYTE *)v10 + v11) ); /*0x61243*/
    sub_3C230(Block); /*0x61251*/
    sub_3C310(v39); /*0x6125b*/
    v19 = 0; /*0x61265*/
    v20 = 0; /*0x6126a*/
    v21 = 0; /*0x6126f*/
    v22 = 0; /*0x61274*/
    v23 = 0; /*0x61278*/
    v24 = 0; /*0x6127c*/
    v25 = 0; /*0x61280*/
    v26 = 0; /*0x61284*/
    v28 = 0; /*0x61287*/
    v29 = 0; /*0x6128b*/
    v30 = 0; /*0x6128f*/
    v31 = 0; /*0x61293*/
    v32 = 0; /*0x61297*/
    v33 = 0; /*0x6129b*/
    v34 = 0; /*0x6129f*/
    v35 = 0; /*0x612a3*/
    v18 = 224; /*0x612a6*/
    v27 = 10; /*0x612ae*/
    v12 = Block; /*0x612b5*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x612be*/
      v12 = (void **)Block[0]; /*0x612be*/
    *(_DWORD *)(a1 + 608) = FMOD::System::createSound(*(_QWORD *)(a1 + 560), v12, 134283274, &v18, &v16); /*0x612e5*/
    v7 = v16; /*0x612eb*/
    if ( v16 ) /*0x612f3*/
    {
      v13 = sub_66900(a1 + 1992, v17, v2); /*0x61304*/
      *(_QWORD *)(*(_QWORD *)v13 + 48LL) = v16; /*0x61311*/
      v7 = v16; /*0x61315*/
    }
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x61322*/
    {
      v14 = Block[0]; /*0x61327*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x61335*/
      {
        v14 = (void *)*((_QWORD *)Block[0] - 1); /*0x6133b*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F ) /*0x6134a*/
          invoke_watson(0, 0, 0, 0, 0); /*0x6135f*/
      }
      j_j_free(v14); /*0x61366*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x61373*/
    LOBYTE(Block[0]) = 0; /*0x61378*/
  }
  sub_3C310(v2); /*0x6137f*/
  return v7; /*0x61387*/
}

// [23/45] Address: 0x61570
// Method: FMODAudioEngine::lengthForSound
// Hidden C++ exception states: #wind=1
__int64 __fastcall FMODAudioEngine_lengthForSound(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 i; // rcx
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-18h]

  v2 = a2; /*0x61589*/
  v10 = a2; /*0x6158f*/
  if ( a2[3] > 0xFu ) /*0x61599*/
    a2 = (_QWORD *)*a2; /*0x6159b*/
  v4 = 0xCBF29CE484222325uLL; /*0x6159e*/
  v5 = v2[2]; /*0x615a8*/
  for ( i = 0; i < v5; ++i ) /*0x615b1*/
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v4); /*0x615c7*/
  if ( *(_QWORD *)(sub_665A0(a1 + 384, v9, v2, v4) + 8) ) /*0x615e7*/
  {
    v7 = *(_DWORD *)(*(_QWORD *)sub_67240(a1 + 384, v9, v2) + 88LL); /*0x61605*/
    sub_3C310(v2); /*0x6160b*/
    return v7; /*0x61610*/
  }
  else
  {
    sub_3C310(v2); /*0x61617*/
    return 0; /*0x6161c*/
  }
}

// [24/45] Address: 0x617c0
// Method: FMODAudioEngine::isMusicPlaying
bool __fastcall FMODAudioEngine_isMusicPlaying(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2; /*0x617c9*/
  v8 = 1; /*0x617d2*/
  if ( sub_659E0(a1 + 320, &v7) ) /*0x617de*/
  {
    v3 = sub_674B0(a1 + 320, v6, &v7); /*0x617f9*/
    v4 = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v3 + 24LL)); /*0x61807*/
    if ( v4 ) /*0x6180f*/
      FMOD::ChannelControl::getPaused(v4, &v8); /*0x61819*/
  }
  return v8 == 0; /*0x61827*/
}

// [25/45] Address: 0x61830
// Method: FMODAudioEngine::stopAllMusic
// Hidden C++ exception states: #wind=1
__int64 __fastcall FMODAudioEngine_stopAllMusic(__int64 a1, char a2)
{
  __int64 v3; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int *v7; // rdi
  unsigned int *v8; // r8
  unsigned int *i; // rbx
  __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  unsigned int *v12; // [rsp+30h] [rbp-18h]

  if ( a2 ) /*0x61844*/
  {
    v3 = *(_QWORD *)(a1 + 552); /*0x61846*/
    if ( v3 ) /*0x61850*/
      FMOD::ChannelControl::stop(v3); /*0x61852*/
    sub_3DB60(a1 + 1096); /*0x6185f*/
    sub_3DB60(a1 + 1160); /*0x6186b*/
    return sub_3DB60(a1 + 1224); /*0x61886*/
  }
  else
  {
    v11 = 0; /*0x6188e*/
    v12 = 0; /*0x61894*/
    v5 = *(_QWORD **)(a1 + 328); /*0x6189d*/
    v6 = (_QWORD *)*v5; /*0x618a4*/
    v7 = 0; /*0x618a7*/
    if ( (_QWORD *)*v5 != v5 ) /*0x618af*/
    {
      do /*0x618f3*/
      {
        if ( !*((_BYTE *)v6 + 73) ) /*0x618b1*/
        {
          v8 = (unsigned int *)(v6 + 3); /*0x618b7*/
          if ( v7 == v12 ) /*0x618c0*/
          {
            sub_689C0(&v11, v7, v8); /*0x618df*/
            v7 = (unsigned int *)*((_QWORD *)&v11 + 1); /*0x618e4*/
          }
          else
          {
            *v7 = *v8; /*0x618c5*/
            v7 = (unsigned int *)(*((_QWORD *)&v11 + 1) + 4LL); /*0x618cc*/
            *((_QWORD *)&v11 + 1) += 4LL; /*0x618d0*/
          }
        }
        v6 = (_QWORD *)*v6; /*0x618e9*/
      }
      while ( v6 != *(_QWORD **)(a1 + 328) ); /*0x618f3*/
    }
    for ( i = (unsigned int *)v11; i != v7; ++i ) /*0x618fd*/
    {
      v10 = sub_5FDE0(a1, *i); /*0x61905*/
      if ( v10 ) /*0x6190d*/
        FMOD::ChannelControl::stop(v10); /*0x61912*/
    }
    return sub_685C0(&v11); /*0x61926*/
  }
}

// [26/45] Address: 0x61940
// Method: FMODAudioEngine::resumeAllMusic
int **__fastcall FMODAudioEngine_resumeAllMusic(__int64 a1)
{
  int **result; // rax
  int *v3; // rbx

  result = *(int ***)(a1 + 328); /*0x6194a*/
  v3 = *result; /*0x61954*/
  if ( *result != (int *)result ) /*0x6195a*/
  {
    do /*0x6198b*/
    {
      if ( v3[4] >= 0 ) /*0x61964*/
      {
        result = (int **)sub_5FDE0(a1, (unsigned int)v3[6]); /*0x6196c*/
        if ( result ) /*0x61974*/
          result = (int **)FMOD::ChannelControl::setPaused(result, 0); /*0x6197b*/
      }
      v3 = *(int **)v3; /*0x61981*/
    }
    while ( v3 != *(int **)(a1 + 328) ); /*0x6198b*/
  }
  return result; /*0x6198d*/
}

// [27/45] Address: 0x61ae0
// Method: FMODAudioEngine::loadAndPlayMusic
// Hidden C++ exception states: #wind=1
__int64 __fastcall FMODAudioEngine_loadAndPlayMusic(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v14; // [rsp+78h] [rbp-30h]

  v14 = a2; /*0x61b06*/
  v6 = sub_3E4F0(v13, a2); /*0x61b10*/
  FMODAudioEngine_loadMusic(a1, v6, v7, v8, 1065353216, 0, 0, 0, 0); /*0x61b46*/
  if ( a3 ) /*0x61b4d*/
    FMODAudioEngine_setMusicTimeMS(a1, a3, 0, 0); /*0x61b5a*/
  v12 = 0; /*0x61b5f*/
  if ( sub_659E0(a1 + 320, &v12) ) /*0x61b73*/
  {
    v9 = sub_674B0(a1 + 320, v13, &v12); /*0x61b8e*/
    v10 = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v9 + 24LL)); /*0x61b9c*/
    if ( v10 ) /*0x61ba4*/
      FMOD::ChannelControl::setPaused(v10, 0); /*0x61bab*/
  }
  return sub_3C310(a2); /*0x61bba*/
}

// [28/45] Address: 0x61be0
// Method: FMODAudioEngine::playMusic
// Hidden C++ exception states: #wind=1
__int64 __fastcall FMODAudioEngine_playMusic(__int64 a1, __int64 a2, char a3, float a4)
{
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v14[8]; // [rsp+50h] [rbp-88h] BYREF
  int v15; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v17; // [rsp+80h] [rbp-58h]

  v17 = a2; /*0x61c17*/
  if ( *(_QWORD *)(a1 + 552) ) /*0x61c1b*/
  {
    v7 = sub_3E4F0(v16, a2); /*0x61c2d*/
    FMODAudioEngine_loadMusic(a1, v7, v8, v9, 1065353216, a3, 0, 0, 0); /*0x61c60*/
    if ( a4 > 0.0 ) /*0x61c68*/
      FMODAudioEngine_fadeInMusic(a1); /*0x61c70*/
    v15 = 0; /*0x61c75*/
    if ( sub_659E0(a1 + 320, &v15) ) /*0x61c85*/
    {
      v10 = sub_674B0(a1 + 320, v16, &v15); /*0x61ca0*/
      v11 = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v10 + 24LL)); /*0x61cae*/
      if ( v11 ) /*0x61cb6*/
        FMOD::ChannelControl::setPaused(v11, 0); /*0x61cbd*/
    }
    v14[0] = 0; /*0x61cc3*/
    FMOD::ChannelControl::getPaused(*(_QWORD *)(a1 + 552), v14); /*0x61cd4*/
    v15 = 0; /*0x61cda*/
    if ( sub_659E0(a1 + 320, &v15) ) /*0x61cea*/
    {
      v12 = sub_674B0(a1 + 320, v16, &v15); /*0x61d05*/
      sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v12 + 24LL)); /*0x61d13*/
    }
  }
  return sub_3C310(a2); /*0x61d21*/
}

// [31/45] Address: 0x62b80
// Method: FMODAudioEngine::queuedEffectFinishedLoading
// Hidden C++ exception states: #wind=2
__int64 __fastcall FMODAudioEngine_queuedEffectFinishedLoading(__int64 a1, void *a2)
{
  int v4; // r14d
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 i; // rbx
  _BYTE v15[32]; // [rsp+A8h] [rbp-78h] BYREF
  void *v16; // [rsp+C8h] [rbp-58h]
  _BYTE Buf1[32]; // [rsp+D0h] [rbp-50h] BYREF
  __int128 v18; // [rsp+F0h] [rbp-30h]
  char v19; // [rsp+100h] [rbp-20h]
  char v20; // [rsp+101h] [rbp-1Fh]
  int v21; // [rsp+104h] [rbp-1Ch]
  int v22; // [rsp+108h] [rbp-18h]
  int v23; // [rsp+10Ch] [rbp-14h]
  int v24; // [rsp+110h] [rbp-10h]
  char v25; // [rsp+114h] [rbp-Ch]
  int v26; // [rsp+118h] [rbp-8h]
  char v27; // [rsp+11Ch] [rbp-4h]
  char v28; // [rsp+11Dh] [rbp-3h]
  int v29; // [rsp+120h] [rbp+0h]
  __int64 v30; // [rsp+128h] [rbp+8h]
  int v31; // [rsp+130h] [rbp+10h]
  int v32; // [rsp+134h] [rbp+14h]
  int v33; // [rsp+138h] [rbp+18h]

  v16 = a2; /*0x62bb0*/
  v4 = 0; /*0x62bb4*/
  v5 = *(_QWORD *)(a1 + 1968); /*0x62bb7*/
  if ( (*(_QWORD *)(a1 + 1976) - v5) / 112 ) /*0x62be0*/
  {
    v6 = 0; /*0x62be9*/
    do /*0x62e41*/
    {
      v7 = v6 + v5; /*0x62bf0*/
      sub_3E4F0(Buf1, v6 + v5); /*0x62bfb*/
      v18 = *(_OWORD *)(v7 + 32); /*0x62c04*/
      v19 = *(_BYTE *)(v7 + 48); /*0x62c0c*/
      v20 = *(_BYTE *)(v7 + 49); /*0x62c13*/
      v21 = *(_DWORD *)(v7 + 52); /*0x62c19*/
      v22 = *(_DWORD *)(v7 + 56); /*0x62c1f*/
      v23 = *(_DWORD *)(v7 + 60); /*0x62c25*/
      v24 = *(_DWORD *)(v7 + 64); /*0x62c2b*/
      v25 = *(_BYTE *)(v7 + 68); /*0x62c32*/
      v26 = *(_DWORD *)(v7 + 72); /*0x62c38*/
      v27 = *(_BYTE *)(v7 + 76); /*0x62c3f*/
      v28 = *(_BYTE *)(v7 + 77); /*0x62c46*/
      v29 = *(_DWORD *)(v7 + 80); /*0x62c4c*/
      v30 = *(_QWORD *)(v7 + 88); /*0x62c53*/
      v31 = *(_DWORD *)(v7 + 96); /*0x62c5a*/
      v32 = *(_DWORD *)(v7 + 100); /*0x62c62*/
      v33 = *(_DWORD *)(v7 + 104); /*0x62c6a*/
      if ( (unsigned int)sub_3C160(Buf1, a2) ) /*0x62c74*/
      {
        ++v4; /*0x62dff*/
        v6 += 112; /*0x62e02*/
      }
      else
      {
        v8 = sub_3E4F0(v15, Buf1); /*0x62c89*/
        FMODAudioEngine_playEffectAdvanced( /*0x62d28*/
          a1,
          v8,
          v9,
          v10,
          DWORD2(v18),
          HIDWORD(v18),
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          0,
          v29,
          v31,
          v32,
          v33);
        v11 = *(_QWORD *)(a1 + 1968) + 112LL * v4; /*0x62d34*/
        v12 = *(_QWORD *)(a1 + 1976); /*0x62d3b*/
        for ( i = v11 + 112; i != v12; i += 112 ) /*0x62d49*/
        {
          sub_58AD0(v11, i); /*0x62d56*/
          *(_DWORD *)(v11 + 32) = *(_DWORD *)(i + 32); /*0x62d5e*/
          *(_DWORD *)(v11 + 36) = *(_DWORD *)(i + 36); /*0x62d64*/
          *(_DWORD *)(v11 + 40) = *(_DWORD *)(i + 40); /*0x62d6a*/
          *(_DWORD *)(v11 + 44) = *(_DWORD *)(i + 44); /*0x62d70*/
          *(_BYTE *)(v11 + 48) = *(_BYTE *)(i + 48); /*0x62d77*/
          *(_BYTE *)(v11 + 49) = *(_BYTE *)(i + 49); /*0x62d7e*/
          *(_DWORD *)(v11 + 52) = *(_DWORD *)(i + 52); /*0x62d84*/
          *(_DWORD *)(v11 + 56) = *(_DWORD *)(i + 56); /*0x62d8a*/
          *(_DWORD *)(v11 + 60) = *(_DWORD *)(i + 60); /*0x62d90*/
          *(_DWORD *)(v11 + 64) = *(_DWORD *)(i + 64); /*0x62d96*/
          *(_BYTE *)(v11 + 68) = *(_BYTE *)(i + 68); /*0x62d9d*/
          *(_DWORD *)(v11 + 72) = *(_DWORD *)(i + 72); /*0x62da3*/
          *(_BYTE *)(v11 + 76) = *(_BYTE *)(i + 76); /*0x62daa*/
          *(_BYTE *)(v11 + 77) = *(_BYTE *)(i + 77); /*0x62db1*/
          *(_DWORD *)(v11 + 80) = *(_DWORD *)(i + 80); /*0x62db7*/
          *(_QWORD *)(v11 + 88) = *(_QWORD *)(i + 88); /*0x62dbe*/
          *(_DWORD *)(v11 + 96) = *(_DWORD *)(i + 96); /*0x62dc5*/
          *(_DWORD *)(v11 + 100) = *(_DWORD *)(i + 100); /*0x62dcb*/
          *(_DWORD *)(v11 + 104) = *(_DWORD *)(i + 104); /*0x62dd1*/
          v11 += 112; /*0x62dd4*/
        }
        sub_3C310(*(_QWORD *)(a1 + 1976) - 112LL); /*0x62df0*/
        *(_QWORD *)(a1 + 1976) -= 112LL; /*0x62df5*/
      }
      sub_3C310(Buf1); /*0x62e0a*/
      v5 = *(_QWORD *)(a1 + 1968); /*0x62e0f*/
    }
    while ( v4 < (unsigned __int64)((*(_QWORD *)(a1 + 1976) - v5) / 112) ); /*0x62e41*/
  }
  return sub_3C310(a2); /*0x62e4f*/
}

// [32/45] Address: 0x62f20
// Method: FMODAudioEngine::updateTemporaryEffects
void __fastcall FMODAudioEngine_updateTemporaryEffects(__int64 a1)
{
  _QWORD **v1; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rdi
  int OpenState; // eax
  bool v8; // zf
  _QWORD *v9; // rdx
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int64 i; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 j; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rdi
  _BYTE v30[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v31[16]; // [rsp+40h] [rbp-38h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD ***)(a1 + 456); /*0x62f29*/
  v3 = *v1; /*0x62f33*/
  if ( *v1 != v1 ) /*0x62f39*/
  {
    v4 = (_QWORD *)(a1 + 384); /*0x62f5c*/
    do /*0x63177*/
    {
      v5 = sub_67240(v4, v30, v3 + 2); /*0x62f8c*/
      v6 = *(_QWORD **)v5; /*0x62f91*/
      if ( *(_DWORD *)(*(_QWORD *)v5 + 92LL) /*0x62fcc*/
        || (OpenState = FMOD::Sound::getOpenState(v6[6], &v32, 0, 0, 0),
            v8 = (v32 & 0xFFFFFFFD) == 0,
            *(_DWORD *)(a1 + 608) = OpenState,
            !v8) )
      {
        v3 = (_QWORD *)*v3; /*0x6316d*/
      }
      else
      {
        v9 = *(_QWORD **)(a1 + 1560); /*0x62fd9*/
        if ( v9 == *(_QWORD **)(a1 + 1568) ) /*0x62fe1*/
        {
          sub_68840(a1 + 1552, v9, v6 + 6); /*0x62ff5*/
        }
        else
        {
          *v9 = v6[6]; /*0x62fe7*/
          *(_QWORD *)(a1 + 1560) += 8LL; /*0x62fea*/
        }
        v10 = v6 + 7; /*0x62fff*/
        v11 = v6 + 7; /*0x63003*/
        if ( v6[10] > 0xFu ) /*0x63006*/
          v11 = (_QWORD *)*v10; /*0x63008*/
        v12 = v6[9]; /*0x6300b*/
        v13 = 0xCBF29CE484222325uLL; /*0x6300f*/
        for ( i = 0; i < v12; v13 = 0x100000001B3LL * (v15 ^ v13) ) /*0x63018*/
          v15 = *((unsigned __int8 *)v11 + i++); /*0x63020*/
        v16 = *(_QWORD **)(sub_665A0(v4, v31, v10, v13) + 8); /*0x63043*/
        if ( v16 ) /*0x6304a*/
        {
          v17 = (_QWORD *)(v4[3] + 16 * (v13 & v4[6])); /*0x63057*/
          v18 = (_QWORD *)*v17; /*0x6305b*/
          if ( (_QWORD *)v17[1] == v16 ) /*0x63062*/
          {
            if ( v18 == v16 ) /*0x63067*/
            {
              v19 = v4[1]; /*0x63069*/
              *v17 = v19; /*0x6306d*/
            }
            else
            {
              v19 = v16[1]; /*0x63076*/
            }
            v17[1] = v19; /*0x63070*/
          }
          else if ( v18 == v16 ) /*0x63083*/
          {
            *v17 = *v16; /*0x63088*/
          }
          v20 = *v16; /*0x6308b*/
          --v4[2]; /*0x63092*/
          *(_QWORD *)v16[1] = v20; /*0x6309a*/
          *(_QWORD *)(v20 + 8) = v16[1]; /*0x630a1*/
          sub_3C310(v16 + 7); /*0x630a5*/
          sub_3C310(v16 + 2); /*0x630ae*/
          j_j_free(v16); /*0x630bb*/
        }
        v21 = v3 + 2; /*0x630c5*/
        if ( v3[5] > 0xFu ) /*0x630c9*/
          v21 = (_QWORD *)v3[2]; /*0x630cb*/
        v22 = v3[4]; /*0x630cf*/
        v23 = 0xCBF29CE484222325uLL; /*0x630d3*/
        for ( j = 0; j < v22; v23 = 0x100000001B3LL * (v25 ^ v23) ) /*0x630dc*/
          v25 = *((unsigned __int8 *)v21 + j++); /*0x630e0*/
        v26 = (_QWORD *)(*(_QWORD *)(a1 + 472) + 16 * (*(_QWORD *)(a1 + 496) & v23)); /*0x630ff*/
        v27 = (_QWORD *)*v26; /*0x63106*/
        if ( (_QWORD *)v26[1] == v3 ) /*0x6310d*/
        {
          if ( v27 == v3 ) /*0x63112*/
          {
            v28 = *(_QWORD *)(a1 + 456); /*0x63114*/
            *v26 = v28; /*0x6311b*/
          }
          else
          {
            v28 = v3[1]; /*0x63124*/
          }
          v26[1] = v28; /*0x6311e*/
        }
        else if ( v27 == v3 ) /*0x63131*/
        {
          *v26 = *v3; /*0x63136*/
        }
        v29 = (_QWORD *)*v3; /*0x63139*/
        --*(_QWORD *)(a1 + 464); /*0x63140*/
        *(_QWORD *)v3[1] = v29; /*0x6314b*/
        v29[1] = v3[1]; /*0x63152*/
        sub_3C310(v3 + 2); /*0x63156*/
        j_j_free(v3); /*0x63163*/
        v3 = v29; /*0x63168*/
      }
    }
    while ( v3 != *(_QWORD **)(a1 + 456) ); /*0x63177*/
  }
}

// [33/45] Address: 0x63990
// Method: FMODAudioEngine::swapMusicIndex
// Hidden C++ exception states: #wind=1
__int64 __fastcall FMODAudioEngine_swapMusicIndex(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rsi
  int v10; // xmm6_4
  __int64 v11; // rbx
  int v12; // xmm6_4
  __int64 v13; // rbx
  int v14; // xmm6_4
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 v17; // rbx
  char v18; // r14
  char v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rsi
  void *v22; // rdx
  __int64 v23; // rbx
  void **v24; // rdx
  __int64 v25; // rsi
  void *v26; // rdx
  int *v27; // rdx
  void *v28; // rdx
  int v29; // [rsp+20h] [rbp-59h] BYREF
  int v30; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v31[16]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v32[16]; // [rsp+40h] [rbp-39h] BYREF
  int v33; // [rsp+50h] [rbp-29h]
  __int64 v34; // [rsp+58h] [rbp-21h]
  void *Src[4]; // [rsp+60h] [rbp-19h] BYREF
  char v36; // [rsp+80h] [rbp+7h]
  char v37; // [rsp+81h] [rbp+8h]

  v29 = a2; /*0x639c5*/
  v30 = a3; /*0x639c8*/
  v4 = a1 + 320; /*0x639cc*/
  v5 = sub_659E0(a1 + 320, &v29); /*0x639df*/
  v6 = sub_659E0(v4, &v30); /*0x639ee*/
  v7 = a1 + 1096; /*0x639f1*/
  if ( !sub_659E0(a1 + 1096, &v29) ) /*0x639ff*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 1096, v31, &v29) + 20LL) = 1065353216; /*0x63a1c*/
  if ( !sub_659E0(a1 + 1096, &v30) ) /*0x63a2a*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 1096, v31, &v30) + 20LL) = 1065353216; /*0x63a47*/
  v8 = a1 + 1160; /*0x63a4e*/
  if ( !sub_659E0(a1 + 1160, &v29) ) /*0x63a5c*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 1160, v31, &v29) + 20LL) = 1065353216; /*0x63a79*/
  if ( !sub_659E0(a1 + 1160, &v30) ) /*0x63a87*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 1160, v31, &v30) + 20LL) = 1065353216; /*0x63aa4*/
  v9 = a1 + 1224; /*0x63aab*/
  if ( !sub_659E0(v9, &v29) ) /*0x63ab9*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(v9, v31, &v29) + 20LL) = 1065353216; /*0x63ad6*/
  if ( !sub_659E0(v9, &v30) ) /*0x63ae4*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(v9, v31, &v30) + 20LL) = 1065353216; /*0x63b01*/
  v10 = *(_DWORD *)(*(_QWORD *)sub_66DF0(v7, v31, &v29) + 20LL); /*0x63b1b*/
  v11 = *(_QWORD *)sub_66DF0(v7, v31, &v30); /*0x63b30*/
  *(_DWORD *)(*(_QWORD *)sub_66DF0(v7, v32, &v29) + 20LL) = *(_DWORD *)(v11 + 20); /*0x63b49*/
  *(_DWORD *)(*(_QWORD *)sub_66DF0(v7, v32, &v30) + 20LL) = v10; /*0x63b5f*/
  v12 = *(_DWORD *)(*(_QWORD *)sub_66DF0(v8, v32, &v29) + 20LL); /*0x63b77*/
  v13 = *(_QWORD *)sub_66DF0(v8, v32, &v29); /*0x63b8c*/
  *(_DWORD *)(v13 + 20) = *(_DWORD *)(*(_QWORD *)sub_66DF0(v8, v31, &v30) + 20LL); /*0x63ba5*/
  *(_DWORD *)(*(_QWORD *)sub_66DF0(v8, v32, &v30) + 20LL) = v12; /*0x63bbb*/
  v14 = *(_DWORD *)(*(_QWORD *)sub_66DF0(v9, v32, &v29) + 20LL); /*0x63bd3*/
  v15 = *(_QWORD *)sub_66DF0(v9, v32, &v30); /*0x63be8*/
  *(_DWORD *)(*(_QWORD *)sub_66DF0(v9, v31, &v29) + 20LL) = *(_DWORD *)(v15 + 20); /*0x63c01*/
  result = sub_66DF0(v9, v32, &v30); /*0x63c0f*/
  *(_DWORD *)(*(_QWORD *)result + 20LL) = v14; /*0x63c17*/
  if ( !v5 ) /*0x63c1f*/
  {
    if ( !v6 ) /*0x63d85*/
      return result; /*0x63d85*/
    v17 = *(_QWORD *)sub_674B0(v4, v32, &v30); /*0x63d97*/
    v25 = *(_QWORD *)sub_674B0(v4, v31, &v29); /*0x63daa*/
    *(_DWORD *)(v25 + 24) = *(_DWORD *)(v17 + 24); /*0x63db0*/
    *(_QWORD *)(v25 + 32) = *(_QWORD *)(v17 + 32); /*0x63db7*/
    if ( v25 + 40 != v17 + 40 ) /*0x63dc6*/
    {
      v28 = (void *)(v17 + 40); /*0x63dc8*/
      if ( *(_QWORD *)(v17 + 64) > 0xFu ) /*0x63dd0*/
        v28 = *(void **)(v17 + 40); /*0x63dd2*/
      sub_3F5A0((void *)(v25 + 40), v28, *(_QWORD *)(v17 + 56)); /*0x63dd9*/
    }
    v27 = &v30; /*0x63dde*/
    goto LABEL_35; /*0x63dde*/
  }
  v17 = *(_QWORD *)sub_674B0(v4, v32, &v29); /*0x63c35*/
  if ( !v6 ) /*0x63c3b*/
  {
    v25 = *(_QWORD *)sub_674B0(v4, v31, &v30); /*0x63d48*/
    *(_DWORD *)(v25 + 24) = *(_DWORD *)(v17 + 24); /*0x63d4e*/
    *(_QWORD *)(v25 + 32) = *(_QWORD *)(v17 + 32); /*0x63d55*/
    if ( v25 + 40 != v17 + 40 ) /*0x63d64*/
    {
      v26 = (void *)(v17 + 40); /*0x63d66*/
      if ( *(_QWORD *)(v17 + 64) > 0xFu ) /*0x63d6e*/
        v26 = *(void **)(v17 + 40); /*0x63d70*/
      sub_3F5A0((void *)(v25 + 40), v26, *(_QWORD *)(v17 + 56)); /*0x63d77*/
    }
    v27 = &v29; /*0x63d7c*/
LABEL_35:
    *(_BYTE *)(v25 + 72) = *(_BYTE *)(v17 + 72); /*0x63de2*/
    *(_BYTE *)(v25 + 73) = *(_BYTE *)(v17 + 73); /*0x63ded*/
    return sub_65DA0(v4, v27); /*0x63df3*/
  }
  v33 = *(_DWORD *)(v17 + 24); /*0x63c44*/
  v34 = *(_QWORD *)(v17 + 32); /*0x63c4b*/
  sub_3E4F0(Src, v17 + 40); /*0x63c57*/
  v18 = *(_BYTE *)(v17 + 72); /*0x63c5c*/
  v36 = v18; /*0x63c61*/
  v19 = *(_BYTE *)(v17 + 73); /*0x63c65*/
  v37 = v19; /*0x63c6a*/
  v20 = *(_QWORD *)sub_674B0(v4, v32, &v30); /*0x63c7e*/
  v21 = *(_QWORD *)sub_674B0(v4, v31, &v29); /*0x63c91*/
  *(_DWORD *)(v21 + 24) = *(_DWORD *)(v20 + 24); /*0x63c97*/
  *(_QWORD *)(v21 + 32) = *(_QWORD *)(v20 + 32); /*0x63c9e*/
  if ( v21 + 40 != v20 + 40 ) /*0x63cad*/
  {
    v22 = (void *)(v20 + 40); /*0x63caf*/
    if ( *(_QWORD *)(v20 + 64) > 0xFu ) /*0x63cb7*/
      v22 = *(void **)(v20 + 40); /*0x63cb9*/
    sub_3F5A0((void *)(v21 + 40), v22, *(_QWORD *)(v20 + 56)); /*0x63cc0*/
  }
  *(_BYTE *)(v21 + 72) = *(_BYTE *)(v20 + 72); /*0x63cc9*/
  *(_BYTE *)(v21 + 73) = *(_BYTE *)(v20 + 73); /*0x63cd0*/
  v23 = *(_QWORD *)sub_674B0(v4, v32, &v30); /*0x63ce3*/
  *(_DWORD *)(v23 + 24) = v33; /*0x63ce9*/
  *(_QWORD *)(v23 + 32) = v34; /*0x63cf0*/
  if ( (void **)(v23 + 40) != Src ) /*0x63cff*/
  {
    v24 = Src; /*0x63d01*/
    if ( Src[3] > (char *)&loc_D + 2 ) /*0x63d0a*/
      v24 = (void **)Src[0]; /*0x63d0a*/
    sub_3F5A0((void *)(v23 + 40), v24, (size_t)Src[2]); /*0x63d13*/
    v19 = v37; /*0x63d18*/
    v18 = v36; /*0x63d1d*/
  }
  *(_BYTE *)(v23 + 72) = v18; /*0x63d22*/
  *(_BYTE *)(v23 + 73) = v19; /*0x63d26*/
  return sub_3C310(Src); /*0x63df8*/
}

// [34/45] Address: 0x63e30
// Method: FMODAudioEngine::setMusicTimeMS
__int64 __fastcall FMODAudioEngine_setMusicTimeMS(__int64 a1, int a2, char a3, int a4)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rbx
  _BYTE v13[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = a4; /*0x63e30*/
  v7 = sub_674B0(a1 + 320, v13, &v15); /*0x63e5d*/
  result = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v7 + 24LL)); /*0x63e6b*/
  v9 = result; /*0x63e70*/
  if ( result ) /*0x63e76*/
  {
    v10 = sub_674B0(a1 + 320, v13, &v15); /*0x63e95*/
    v11 = 40; /*0x63e9d*/
    if ( *(_BYTE *)(*(_QWORD *)v10 + 72LL) ) /*0x63eab*/
      v11 = 0; /*0x63eb2*/
    result = FMOD::Channel::setPosition(v9, (unsigned int)(a2 + *(_DWORD *)(a1 + 620) + v11), 1); /*0x63ebf*/
    if ( !a3 ) /*0x63ec8*/
    {
      result = sub_674B0(a1 + 320, v13, &v15); /*0x63ede*/
      v12 = *(_QWORD *)(*(_QWORD *)result + 32LL); /*0x63ee6*/
      if ( v12 ) /*0x63eed*/
      {
        *(_DWORD *)(a1 + 608) = FMOD::Sound::getOpenState(v12, &v14, 0, 0, 0); /*0x63f08*/
        for ( result = v14; v14; result = v14 ) /*0x63f14*/
        {
          result = (unsigned int)(result - 2); /*0x63f16*/
          if ( (result & 0xFFFFFFFB) == 0 ) /*0x63f1e*/
            break; /*0x63f1e*/
          *(_DWORD *)(a1 + 608) = FMOD::Sound::getOpenState(v12, &v14, 0, 0, 0); /*0x63f39*/
        }
      }
    }
  }
  return result; /*0x63f4c*/
}

// [35/45] Address: 0x63f60
// Method: FMODAudioEngine::getMusicTimeMS
__int64 __fastcall FMODAudioEngine_getMusicTimeMS(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0; /*0x63f73*/
  v7 = 0; /*0x63f7e*/
  v2 = sub_674B0(a1 + 320, v6, &v5); /*0x63f87*/
  v3 = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v2 + 24LL)); /*0x63f95*/
  if ( v3 ) /*0x63f9d*/
    FMOD::Channel::getPosition(v3, &v7, 1); /*0x63fad*/
  return v7; /*0x63fb7*/
}

// [36/45] Address: 0x63fc0
// Method: FMODAudioEngine::getMusicLengthMS
__int64 __fastcall FMODAudioEngine_getMusicLengthMS(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0; /*0x63fcc*/
  v8 = 0; /*0x63fdb*/
  v2 = sub_674B0(a1 + 320, v6, &v5); /*0x63fed*/
  v3 = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v2 + 24LL)); /*0x63ffb*/
  if ( v3 ) /*0x64003*/
  {
    v7 = 0; /*0x6400a*/
    FMOD::Channel::getCurrentSound(v3, &v7); /*0x64016*/
    if ( v7 ) /*0x64024*/
      FMOD::Sound::getLength(v7, &v8, 1); /*0x64031*/
  }
  return v8; /*0x6403b*/
}

// [37/45] Address: 0x641f0
// Method: FMODAudioEngine::fadeInMusic
__int64 __fastcall FMODAudioEngine_fadeInMusic(__int64 a1, float a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  unsigned __int64 v14; // rax
  char v15[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0; /*0x64209*/
  result = sub_659E0(a1 + 320, &v17); /*0x64219*/
  if ( result ) /*0x64221*/
  {
    v4 = sub_674B0(a1 + 320, v15, &v17); /*0x6423d*/
    result = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v4 + 24LL)); /*0x6424b*/
    v5 = result; /*0x64250*/
    if ( result ) /*0x64256*/
    {
      FMODAudioEngine_stopAndGetFade(a1, result); /*0x64262*/
      FMOD::ChannelControl::getDSPClock(v5, 0, &v16); /*0x64271*/
      v6 = v16; /*0x64277*/
      *(_DWORD *)(a1 + 608) = v7; /*0x64282*/
      v8 = FMOD::ChannelControl::addFadePoint(v5, v6); /*0x64288*/
      v9 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 612)); /*0x6428e*/
      v10 = v16; /*0x64299*/
      *(_DWORD *)(a1 + 608) = v8; /*0x6429e*/
      v11 = _mm_cvtepi32_ps(v9).m128_f32[0] * a2; /*0x642a7*/
      if ( v10 < 0 ) /*0x642ae*/
        v12 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1)) /*0x642c8*/
            + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
      else
        v12 = (float)(int)v10; /*0x642b0*/
      v13 = v11 + v12; /*0x642cc*/
      v14 = 0; /*0x642d0*/
      if ( v13 >= 9.223372e18 ) /*0x642dd*/
      {
        v13 = v13 - 9.223372e18; /*0x642df*/
        if ( v13 < 9.223372e18 ) /*0x642e6*/
          v14 = 0x8000000000000000uLL; /*0x642f2*/
      }
      result = FMOD::ChannelControl::addFadePoint(v5, v14 + (unsigned int)(int)v13); /*0x64308*/
      *(_DWORD *)(a1 + 608) = result; /*0x6430e*/
    }
  }
  return result; /*0x64319*/
}

// [38/45] Address: 0x64330
// Method: FMODAudioEngine::fadeOutMusic
__int64 __fastcall FMODAudioEngine_fadeOutMusic(__int64 a1, float a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  unsigned __int64 v14; // rax
  char v15[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0; /*0x64349*/
  result = sub_659E0(a1 + 320, &v17); /*0x64359*/
  if ( result ) /*0x64361*/
  {
    v4 = sub_674B0(a1 + 320, v15, &v17); /*0x6437d*/
    result = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v4 + 24LL)); /*0x6438b*/
    v5 = result; /*0x64390*/
    if ( result ) /*0x64396*/
    {
      FMODAudioEngine_stopAndGetFade(a1, result); /*0x643a7*/
      FMOD::ChannelControl::getDSPClock(v5, 0, &v16); /*0x643b9*/
      v6 = v16; /*0x643bf*/
      *(_DWORD *)(a1 + 608) = v7; /*0x643ca*/
      v8 = FMOD::ChannelControl::addFadePoint(v5, v6); /*0x643d0*/
      v9 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 612)); /*0x643d6*/
      v10 = v16; /*0x643e1*/
      *(_DWORD *)(a1 + 608) = v8; /*0x643eb*/
      v11 = _mm_cvtepi32_ps(v9).m128_f32[0] * a2; /*0x643f4*/
      if ( v10 < 0 ) /*0x643fb*/
        v12 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1)) /*0x64415*/
            + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
      else
        v12 = (float)(int)v10; /*0x643fd*/
      v13 = v11 + v12; /*0x64419*/
      v14 = 0; /*0x6441d*/
      if ( v13 >= 9.223372e18 ) /*0x6442a*/
      {
        v13 = v13 - 9.223372e18; /*0x6442c*/
        if ( v13 < 9.223372e18 ) /*0x64433*/
          v14 = 0x8000000000000000uLL; /*0x6443f*/
      }
      result = FMOD::ChannelControl::addFadePoint(v5, v14 + (unsigned int)(int)v13); /*0x64450*/
      *(_DWORD *)(a1 + 608) = result; /*0x64456*/
    }
  }
  return result; /*0x64461*/
}

// [39/45] Address: 0x64470
// Method: FMODAudioEngine::fadeMusic
__int64 __fastcall FMODAudioEngine_fadeMusic(__int64 a1, float a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rcx
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  unsigned __int64 v14; // rax
  char v15[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0; /*0x64493*/
  result = sub_659E0(a1 + 320, &v17); /*0x644a1*/
  if ( result ) /*0x644a9*/
  {
    v4 = sub_674B0(a1 + 320, v15, &v17); /*0x644c5*/
    result = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v4 + 24LL)); /*0x644d3*/
    v5 = result; /*0x644d8*/
    if ( result ) /*0x644de*/
    {
      FMODAudioEngine_stopAndGetFade(a1, result); /*0x644ea*/
      FMOD::ChannelControl::getDSPClock(v5, 0, &v16); /*0x644f9*/
      v6 = v16; /*0x644ff*/
      *(_DWORD *)(a1 + 608) = v7; /*0x6450a*/
      v8 = FMOD::ChannelControl::addFadePoint(v5, v6); /*0x64510*/
      v9 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 612)); /*0x64516*/
      v10 = v16; /*0x64521*/
      *(_DWORD *)(a1 + 608) = v8; /*0x64526*/
      v11 = _mm_cvtepi32_ps(v9).m128_f32[0] * a2; /*0x6452f*/
      if ( v10 < 0 ) /*0x64536*/
        v12 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1)) /*0x64550*/
            + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
      else
        v12 = (float)(int)v10; /*0x64538*/
      v13 = v11 + v12; /*0x64554*/
      v14 = 0; /*0x64558*/
      if ( v13 >= 9.223372e18 ) /*0x64565*/
      {
        v13 = v13 - 9.223372e18; /*0x64567*/
        if ( v13 < 9.223372e18 ) /*0x6456e*/
          v14 = 0x8000000000000000uLL; /*0x6457a*/
      }
      result = FMOD::ChannelControl::addFadePoint(v5, v14 + (unsigned int)(int)v13); /*0x64591*/
      *(_DWORD *)(a1 + 608) = result; /*0x64597*/
    }
  }
  return result; /*0x645a2*/
}

// [40/45] Address: 0x645c0
// Method: FMODAudioEngine::preloadMusic
// Hidden C++ exception states: #wind=2
__int64 __fastcall FMODAudioEngine_preloadMusic(__int64 a1, size_t *a2, char a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v8; // r14d
  _QWORD *v9; // rax
  int v10; // esi
  void *v11; // r8
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int i; // ecx
  void *v18; // rdx
  size_t v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // r15
  __int64 v25; // rbx
  void **v26; // rdx
  unsigned int v27; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-59h] BYREF
  int v30; // [rsp+50h] [rbp-49h]
  __int64 v31; // [rsp+58h] [rbp-41h]
  void *Src[2]; // [rsp+60h] [rbp-39h] BYREF
  size_t Size[2]; // [rsp+70h] [rbp-29h]
  __int16 v34; // [rsp+80h] [rbp-19h]
  size_t *v35; // [rsp+88h] [rbp-11h]
  void *Block[2]; // [rsp+90h] [rbp-9h] BYREF
  __m128i si128; // [rsp+A0h] [rbp+7h]

  v4 = a4; /*0x645ea*/
  v35 = a2; /*0x645f7*/
  v27 = a4; /*0x645fb*/
  v8 = 0; /*0x645fe*/
  v28 = a4; /*0x64601*/
  if ( sub_659E0(a1 + 320, &v28) ) /*0x6460f*/
  {
    v9 = (_QWORD *)sub_674B0(a1 + 320, v29, &v28); /*0x64628*/
    sub_3E4F0(Block, *v9 + 40LL); /*0x64638*/
    v4 = v27; /*0x6463d*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x64645*/
    si128 = _mm_load_si128((const __m128i *)&::Size); /*0x64651*/
    LOBYTE(Block[0]) = 0; /*0x64656*/
  }
  v10 = sub_3C160(Block, a2); /*0x64666*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x64670*/
  {
    v11 = Block[0]; /*0x64675*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x64683*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x64689*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x64698*/
        invoke_watson(0, 0, 0, 0, 0); /*0x646a9*/
    }
    j_j_free(v11); /*0x646b3*/
    v4 = v27; /*0x646b8*/
  }
  if ( !v10 ) /*0x646bd*/
  {
    v12 = *(_QWORD *)(*(_QWORD *)sub_674B0(a1 + 320, v29, &v27) + 32LL); /*0x646d6*/
    sub_3C310(a2); /*0x646dd*/
    return v12; /*0x646e5*/
  }
  FMODAudioEngine_stopAndRemoveMusic(a1, v4); /*0x646ef*/
  v14 = sub_3E4F0(Block, a2); /*0x646fb*/
  v15 = GJAccountManager_syncAccount(a1, v14); /*0x64706*/
  v16 = v15; /*0x6470b*/
  if ( !v15 ) /*0x64711*/
    goto LABEL_18; /*0x64711*/
  if ( !a3 ) /*0x64716*/
  {
    *(_DWORD *)(a1 + 608) = FMOD::Sound::getOpenState(v15, &v28, 0, 0, 0); /*0x64734*/
    for ( i = v28; v28; i = v28 ) /*0x64740*/
    {
      if ( ((i - 2) & 0xFFFFFFFB) == 0 ) /*0x6474a*/
        break; /*0x6474a*/
      *(_DWORD *)(a1 + 608) = FMOD::Sound::getOpenState(v16, &v28, 0, 0, 0); /*0x64764*/
    }
    if ( i == 2 ) /*0x64775*/
    {
      FMOD::Sound::release(v16); /*0x6477a*/
LABEL_18:
      sub_3C310(a2); /*0x64781*/
      return 0; /*0x647b1*/
    }
  }
  v31 = 0; /*0x647b2*/
  *(_OWORD *)Src = 0; /*0x647b9*/
  *(__m128i *)Size = _mm_load_si128((const __m128i *)&::Size); /*0x647c5*/
  LOBYTE(Src[0]) = 0; /*0x647ca*/
  v34 = 0; /*0x647ce*/
  v30 = 0; /*0x647d4*/
  if ( Src != (void **)a2 ) /*0x647df*/
  {
    v18 = a2; /*0x647e1*/
    if ( a2[3] > 0xF ) /*0x647e9*/
      v18 = (void *)*a2; /*0x647eb*/
    sub_3F5A0(Src, v18, a2[2]); /*0x647f6*/
    v8 = v30; /*0x647fb*/
  }
  v31 = v16; /*0x647ff*/
  v19 = (size_t)a2; /*0x64803*/
  if ( a2[3] > 0xF ) /*0x6480b*/
    v19 = *a2; /*0x6480d*/
  v20 = a2[2]; /*0x64810*/
  if ( v20 < 4 || (v21 = v20 + v19, v22 = sub_672690(v19, v20 + v19, ".ogg", 4), v22 == v21) ) /*0x64839*/
    v23 = -1; /*0x64840*/
  else
    v23 = v22 - v19; /*0x6483b*/
  v24 = v23 != -1; /*0x6484b*/
  LOBYTE(v34) = v24; /*0x6484f*/
  v25 = *(_QWORD *)sub_674B0(a1 + 320, v29, &v27); /*0x64867*/
  *(_DWORD *)(v25 + 24) = v8; /*0x6486a*/
  *(_QWORD *)(v25 + 32) = v16; /*0x6486e*/
  if ( (void **)(v25 + 40) != Src ) /*0x6487d*/
  {
    v26 = Src; /*0x6487f*/
    if ( Size[1] > 0xF ) /*0x64888*/
      v26 = (void **)Src[0]; /*0x64888*/
    sub_3F5A0((void *)(v25 + 40), v26, Size[0]); /*0x64891*/
    v24 = v34; /*0x64896*/
  }
  *(_BYTE *)(v25 + 72) = v24; /*0x6489b*/
  *(_BYTE *)(v25 + 73) = HIBYTE(v34); /*0x648a3*/
  sub_3C310(Src); /*0x648aa*/
  sub_3C310(a2); /*0x648b3*/
  return v16; /*0x6478b*/
}

// [41/45] Address: 0x648c0
// Method: FMODAudioEngine::stopAndRemoveMusic
__int64 __fastcall FMODAudioEngine_stopAndRemoveMusic(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2; /*0x648c5*/
  result = sub_659E0(a1 + 320, &v10); /*0x648dd*/
  if ( result ) /*0x648e5*/
  {
    v4 = sub_674B0(a1 + 320, v9, &v10); /*0x648fc*/
    v5 = sub_5FDE0(a1, *(unsigned int *)(*(_QWORD *)v4 + 24LL)); /*0x6490a*/
    if ( v5 ) /*0x64912*/
    {
      return FMOD::ChannelControl::stop(v5); /*0x64917*/
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)sub_674B0(a1 + 320, v9, &v10) + 32LL) ) /*0x64941*/
      {
        v6 = (_QWORD *)sub_674B0(a1 + 320, v9, &v10); /*0x64959*/
        v7 = *(_QWORD **)(a1 + 1560); /*0x64965*/
        v8 = (_QWORD *)(*v6 + 32LL); /*0x6496c*/
        if ( v7 == *(_QWORD **)(a1 + 1568) ) /*0x64974*/
        {
          sub_68840(a1 + 1552, v7, v8); /*0x64983*/
        }
        else
        {
          *v7 = *v8; /*0x64979*/
          *(_QWORD *)(a1 + 1560) += 8LL; /*0x6497c*/
        }
      }
      return sub_65DA0(a1 + 320, &v10); /*0x64994*/
    }
  }
  return result; /*0x6491d*/
}

// [42/45] Address: 0x75390
// Method: FMODAudioEngine::unloadAllEffects
void __fastcall FMODAudioEngine_unloadAllEffects(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  char *v8; // r14
  char *i; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  const void *v13; // rdx
  char *v14; // r12
  size_t v15; // r8
  char *v16; // rcx
  _QWORD *v17; // rcx

  v2 = 1; /*0x7539a*/
  v3 = a1[2]; /*0x7539f*/
  if ( v3 ) /*0x753b0*/
    v2 = v3; /*0x753b0*/
  while ( v2 == v3 || v2 < 8 ) /*0x753c4*/
  {
    if ( 0x2AAAAAAAAAAAAAALL - v2 < v2 ) /*0x753cf*/
      sub_75690(v3, 0x2AAAAAAAAAAAAAALL); /*0x7554c*/
    v2 *= 2LL; /*0x753d5*/
  }
  v4 = a1[3]; /*0x753e9*/
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL ) /*0x753f0*/
    sub_8CF0(v3, 0x2AAAAAAAAAAAAAALL); /*0x75546*/
  v5 = sub_3C460(8 * v2); /*0x75412*/
  v6 = 8 * v4; /*0x7541a*/
  v7 = v2 >> 1; /*0x75422*/
  v8 = (char *)v5; /*0x75425*/
  for ( i = (char *)(8 * v4 + v5); v2 <= v7; v2 *= 2LL ) /*0x7542f*/
    ; /*0x75431*/
  v10 = a1[2]; /*0x7543d*/
  v11 = v2 - v10; /*0x75441*/
  v12 = 8 * v10 - v6; /*0x75453*/
  memmove(i, (const void *)(a1[1] + v6), v12); /*0x7545c*/
  v13 = (const void *)a1[1]; /*0x75461*/
  v14 = &i[v12]; /*0x75465*/
  if ( v4 > v11 ) /*0x7546e*/
  {
    memmove(v14, v13, 8 * v11); /*0x754a0*/
    memmove(v8, (const void *)(8 * v11 + a1[1]), v6 - 8 * v11); /*0x754ba*/
    v16 = &v8[v6 - 8 * v11]; /*0x754bf*/
    v15 = 8 * v11; /*0x754c3*/
  }
  else
  {
    memmove(v14, v13, 8 * v4); /*0x75473*/
    memset(&v14[v6], 0, 8 * (v11 - v4)); /*0x75488*/
    v15 = 8 * v4; /*0x7548d*/
    v16 = v8; /*0x75490*/
  }
  memset(v16, 0, v15); /*0x754c8*/
  v17 = (_QWORD *)a1[1]; /*0x754cd*/
  if ( v17 ) /*0x754e3*/
  {
    if ( (unsigned __int64)(8LL * a1[2]) >= 0x1000 ) /*0x754f4*/
    {
      if ( (unsigned __int64)v17 - *(v17 - 1) - 8 > 0x1F ) /*0x75509*/
        invoke_watson(0, 0, 0, 0, 0); /*0x7553f*/
      v17 = (_QWORD *)*(v17 - 1); /*0x7550b*/
    }
    j_j_free(v17); /*0x7550e*/
  }
  a1[2] += v11; /*0x75513*/
  a1[1] = v8; /*0x7551c*/
}

// [43/45] Address: 0xfeee0
// Method: FMODAudioEngine::saveAudioState
void *__fastcall FMODAudioEngine_saveAudioState(
        char *Src,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(_QWORD, _QWORD))
{
  __int64 v6; // r12
  __int64 v9; // rax
  __int64 v11; // r12
  char *v12; // r14
  __int64 v13; // rax
  char *v14; // rsi
  char *v15; // r15
  _QWORD *v16; // rbp
  __int64 v17; // rax
  size_t v18; // r14
  __int64 v19; // rax

  v6 = a5; /*0xfeeef*/
  v9 = a2; /*0xfeefa*/
  if ( a4 < a5 ) /*0xfef03*/
  {
    while ( 1 ) /*0xfef20*/
    {
      v11 = v6 - a4; /*0xfef20*/
      v12 = &Src[8 * a4]; /*0xfef23*/
      v13 = a4; /*0xfef2a*/
      v14 = v12; /*0xfef2d*/
      if ( v11 < a4 ) /*0xfef30*/
        v13 = v11; /*0xfef30*/
      v6 = v11 - v13; /*0xfef34*/
      v15 = &v12[8 * v13]; /*0xfef37*/
      while ( 1 ) /*0xfef43*/
      {
        v16 = a3 + 1; /*0xfef43*/
        if ( !a6(*(_QWORD *)v14, *(_QWORD *)Src) ) /*0xfef4a*/
          break; /*0xfef4a*/
        v17 = *(_QWORD *)v14; /*0xfef52*/
        v14 += 8; /*0xfef55*/
        *a3 = v17; /*0xfef59*/
        if ( v14 == v15 ) /*0xfef5f*/
        {
          v18 = v12 - Src; /*0xfef61*/
          memmove(a3 + 1, Src, v18); /*0xfef6d*/
          a3 = (_QWORD *)((char *)v16 + v18); /*0xfef72*/
          goto LABEL_11; /*0xfef76*/
        }
LABEL_9:
        ++a3; /*0xfef87*/
      }
      v19 = *(_QWORD *)Src; /*0xfef78*/
      Src += 8; /*0xfef7b*/
      *a3 = v19; /*0xfef7f*/
      if ( Src != v12 ) /*0xfef85*/
        goto LABEL_9; /*0xfef85*/
      memmove(a3 + 1, v14, v15 - v14); /*0xfef9b*/
      a3 = (_QWORD *)((char *)v16 + v15 - v14); /*0xfefa0*/
LABEL_11:
      Src = v15; /*0xfefa4*/
      if ( a4 >= v6 ) /*0xfefaa*/
      {
        v9 = a2; /*0xfefc4*/
        return memmove(a3, Src, v9 - (_QWORD)Src); /*0xfefc4*/
      }
    }
  }
  return memmove(a3, Src, v9 - (_QWORD)Src); /*0xfefd5*/
}

// [44/45] Address: 0x112800
// Method: FMODAudioEngine::FMODAudioEngine
// Hidden C++ exception states: #wind=4
__int64 __fastcall FMODAudioEngine_FMODAudioEngine(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax

  cocos2d::CCNode::CCNode((cocos2d::CCNode *)a1); /*0x112812*/
  *(_QWORD *)a1 = &DeathMarkerLayer::`vftable'; /*0x112820*/
  *(_QWORD *)(a1 + 320) = 0; /*0x112825*/
  *(_QWORD *)(a1 + 328) = 0; /*0x11282c*/
  *(_QWORD *)(a1 + 336) = 0; /*0x112833*/
  *(_DWORD *)(a1 + 344) = 0; /*0x112846*/
  *(_QWORD *)(a1 + 352) = 0; /*0x112849*/
  *(_QWORD *)(a1 + 360) = 0; /*0x11284d*/
  v2 = operator new(0x30u); /*0x112856*/
  *v2 = v2; /*0x11285b*/
  v2[1] = v2; /*0x11285e*/
  *(_QWORD *)(a1 + 352) = v2; /*0x112862*/
  *(_QWORD *)(a1 + 368) = 0; /*0x112866*/
  *(_QWORD *)(a1 + 376) = 0; /*0x11286a*/
  *(_QWORD *)(a1 + 384) = 0; /*0x11286e*/
  *(_QWORD *)(a1 + 392) = 7; /*0x112872*/
  *(_QWORD *)(a1 + 400) = 8; /*0x11287a*/
  *(_DWORD *)(a1 + 344) = 1065353216; /*0x112882*/
  v3 = *(_QWORD *)(a1 + 352); /*0x112889*/
  v4 = operator new(0x80u); /*0x1128b3*/
  v5 = *(_QWORD **)(a1 + 368); /*0x1128b6*/
  v6 = (__int64)(*(_QWORD *)(a1 + 384) - (_QWORD)v5) >> 3; /*0x1128c1*/
  if ( v6 ) /*0x1128c8*/
  {
    if ( (unsigned __int64)(8 * v6) >= 0x1000 ) /*0x1128d9*/
    {
      if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F ) /*0x1128ee*/
        invoke_watson(0, 0, 0, 0, 0); /*0x11292d*/
      v5 = (_QWORD *)*(v5 - 1); /*0x1128f0*/
    }
    j_j_free(v5); /*0x1128f3*/
  }
  *(_QWORD *)(a1 + 368) = v4; /*0x1128f8*/
  v7 = v4 + 16; /*0x1128fc*/
  *(_QWORD *)(a1 + 376) = v4 + 16; /*0x112903*/
  *(_QWORD *)(a1 + 384) = v4 + 16; /*0x112907*/
  do /*0x11291a*/
    *v4++ = v3; /*0x112910*/
  while ( v4 != v7 ); /*0x11291a*/
  *(_DWORD *)(a1 + 408) = 0; /*0x11293f*/
  *(_DWORD *)(a1 + 412) = -1; /*0x112945*/
  *(_DWORD *)(a1 + 416) = 0; /*0x11294f*/
  *(_DWORD *)(a1 + 420) = -1; /*0x112955*/
  *(_BYTE *)(a1 + 424) = 0; /*0x11295f*/
  *(_QWORD *)(a1 + 432) = 0; /*0x112966*/
  *(_QWORD *)(a1 + 440) = 0; /*0x11296d*/
  *(_WORD *)(a1 + 448) = 256; /*0x112974*/
  *(_WORD *)(a1 + 450) = -1; /*0x112984*/
  *(_BYTE *)(a1 + 452) = -1; /*0x112992*/
  *(_DWORD *)(a1 + 456) = 0; /*0x112998*/
  *(_DWORD *)(a1 + 460) = 1065353216; /*0x11299e*/
  *(_DWORD *)(a1 + 464) = -1; /*0x1129a8*/
  *(_DWORD *)(a1 + 468) = 0; /*0x1129b2*/
  *(_BYTE *)(a1 + 472) = 0; /*0x1129b8*/
  *(_DWORD *)(a1 + 476) = 0; /*0x1129bf*/
  return a1; /*0x1129c8*/
}

// [45/45] Address: 0x25c400
// Method: FMODAudioEngine::createStream
// Hidden C++ exception states: #wind=4
__int64 __fastcall FMODAudioEngine_createStream(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  void *v7; // rax
  void **v8; // rdx
  __int64 v9; // rax
  void *v10; // rcx
  void *v12; // [rsp+30h] [rbp-49h]
  __int128 v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h]
  __int64 v15; // [rsp+58h] [rbp-21h]
  void *Block[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v17; // [rsp+70h] [rbp-9h]
  unsigned __int64 v18; // [rsp+78h] [rbp-1h]
  void *v19[4]; // [rsp+80h] [rbp+7h] BYREF
  _BYTE v20[32]; // [rsp+A0h] [rbp+27h] BYREF

  v3 = qword_905FD0; /*0x25c42e*/
  if ( !qword_905FD0 ) /*0x25c438*/
  {
    v12 = operator new(0x6E8u); /*0x25c444*/
    qword_905FD0 = sub_2723A0(v12); /*0x25c453*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x25c45d*/
    v3 = qword_905FD0; /*0x25c460*/
  }
  v4 = cocos2d::CCString::createWithFormat( /*0x25c47a*/
         (const char *)&word_6E86F8,
         (unsigned int)(*(_DWORD *)(v3 + 928) - *(_DWORD *)(v3 + 932)));
  CString = cocos2d::CCString::getCString(v4); /*0x25c483*/
  *(_OWORD *)Block = 0; /*0x25c48c*/
  v17 = 0; /*0x25c490*/
  v18 = 0; /*0x25c494*/
  v6 = -1; /*0x25c498*/
  do /*0x25c4a3*/
    ++v6; /*0x25c4a0*/
  while ( CString[v6] ); /*0x25c4a3*/
  sub_3C230(Block); /*0x25c4b1*/
  v13 = 0; /*0x25c4ba*/
  v14 = 5; /*0x25c4be*/
  v15 = 15; /*0x25c4c6*/
  strcpy((char *)&v13, "59182"); /*0x25c4d4*/
  cocos2d::ZipUtils::base64EncodeEnc(v19, Block, &v13); /*0x25c4f1*/
  v7 = (void *)sub_216020(v20, 5); /*0x25c501*/
  v8 = v19; /*0x25c507*/
  if ( v19[3] > (char *)&loc_D + 2 ) /*0x25c510*/
    v8 = (void **)v19[0]; /*0x25c510*/
  v9 = sub_43D80(v7, v8, (size_t)v19[2]); /*0x25c51c*/
  *(_OWORD *)a2 = 0; /*0x25c524*/
  *(_QWORD *)(a2 + 16) = 0; /*0x25c527*/
  *(_QWORD *)(a2 + 24) = 0; /*0x25c52b*/
  *(_OWORD *)a2 = *(_OWORD *)v9; /*0x25c532*/
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v9 + 16); /*0x25c539*/
  *(_QWORD *)(v9 + 16) = 0; /*0x25c53d*/
  *(_QWORD *)(v9 + 24) = 15; /*0x25c541*/
  *(_BYTE *)v9 = 0; /*0x25c549*/
  sub_3C310(v20); /*0x25c550*/
  sub_3C310(v19); /*0x25c55a*/
  if ( v18 > 0xF ) /*0x25c568*/
  {
    v10 = Block[0]; /*0x25c56d*/
    if ( v18 + 1 >= 0x1000 ) /*0x25c57b*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x25c581*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x25c590*/
        invoke_watson(0, 0, 0, 0, 0); /*0x25c5a1*/
    }
    j_j_free(v10); /*0x25c5a8*/
  }
  return a2; /*0x25c5b0*/
}
