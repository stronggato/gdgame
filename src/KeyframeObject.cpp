#include <Geode/binding/KeyframeObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x708d0
// Method: KeyframeObject::setupSpline
// Hidden C++ exception states: #wind=1
void __fastcall KeyframeObject_setupSpline(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  char *v5; // rsi
  char *v6; // rdi
  signed __int64 v7; // r14
  const char *v8; // rcx
  float v9; // xmm1_4
  const char *v10; // rcx
  float v11; // xmm1_4
  const char *v12; // rcx
  float v13; // xmm1_4
  const char *v14; // rcx
  const char *v15; // rcx
  const char *v16; // rcx
  const char *v17; // rcx
  const char *v18; // rcx
  const char *v19; // rcx
  const char *v20; // rcx
  const char *v21; // rcx
  const char *v22; // rcx
  const char *v23; // rcx
  const char *v24; // rcx
  const char *v25; // rcx
  const char *v26; // rcx
  const char *v27; // rcx
  const char *v28; // rcx
  const char *v29; // rcx
  const char *v30; // rcx
  const char *v31; // rcx
  float v32; // xmm1_4
  const char *v33; // rcx
  float v34; // xmm1_4
  const char *v35; // rcx
  float v36; // xmm1_4
  const char *v37; // rcx
  float v38; // xmm1_4
  const char *v39; // rcx
  float v40; // xmm1_4
  const char *v41; // rcx
  float v42; // xmm1_4
  const char *v43; // rcx
  float v44; // xmm1_4
  const char *v45; // rcx
  float v46; // xmm1_4
  const char *v47; // rcx
  const char *v48; // rcx
  const char *v49; // rcx
  const char *v50; // rcx
  const char *v51; // rcx
  float v52; // xmm1_4
  const char *v53; // rcx
  float v54; // xmm1_4
  const char *v55; // rcx
  float v56; // xmm1_4
  const char *v57; // rcx
  float v58; // xmm1_4
  const char *v59; // rcx
  float v60; // xmm1_4
  const char *v61; // rcx
  float v62; // xmm1_4
  const char *v63; // rcx
  float v64; // xmm1_4
  const char *v65; // rcx
  float v66; // xmm1_4
  const char *v67; // rcx
  float v68; // xmm1_4
  const char *v69; // rcx
  float v70; // xmm1_4
  const char *v71; // rcx
  float v72; // xmm1_4
  const char *v73; // rcx
  float v74; // xmm1_4
  const char *v75; // rcx
  const char *v76; // rcx
  const char *v77; // rcx
  const char *v78; // rcx
  const char *v79; // rcx
  const char *v80; // rcx
  const char *v81; // rcx
  const char *v82; // rcx
  const char *v83; // rcx
  const char *v84; // rcx
  const char *v85; // rcx
  const char *v86; // rcx
  const char *v87; // rcx
  int v88; // eax
  cocos2d::CCString *v89; // rax
  char *CString; // rax
  size_t v91; // r8
  const char *v92; // rcx
  const char *v93; // rcx
  float v94; // xmm1_4
  const char *v95; // rcx
  float v96; // xmm1_4
  const char *v97; // rcx
  float v98; // xmm1_4
  const char *v99; // rcx
  float v100; // xmm1_4
  const char *v101; // rcx
  const char *v102; // rcx
  const char *v103; // rcx
  const char *v104; // rcx
  const char *v105; // rcx
  const char *v106; // rcx
  float v107; // xmm1_4
  const char *v108; // rcx
  float v109; // xmm1_4
  const char *v110; // rcx
  float v111; // xmm1_4
  const char *v112; // rcx
  double v113; // xmm0_8
  float v114; // xmm0_4
  char *v115; // rax
  void *Block[2]; // [rsp+30h] [rbp-20h] BYREF
  char *v117; // [rsp+40h] [rbp-10h]

  if ( !a1[2] ) /*0x708fb*/
    return; /*0x708fb*/
  Block[0] = (void *)sub_3C460(2560); /*0x709df*/
  Block[1] = Block[0]; /*0x709e3*/
  v117 = (char *)Block[0] + 2560; /*0x709ee*/
  GameLevelManager_onUpdateDescriptionCompleted(a1, v4, (__int64)Block); /*0x709f9*/
  v5 = (char *)Block[1]; /*0x709fe*/
  v6 = (char *)Block[0]; /*0x70a05*/
  v7 = ((char *)Block[1] - (char *)Block[0]) >> 5; /*0x70a0c*/
  if ( (int)v7 >= 63 ) /*0x70a14*/
  {
    if ( *((_QWORD *)Block[0] + 3) > 0xFu ) /*0x70a1f*/
      v6 = *(char **)Block[0]; /*0x70a21*/
    *(_DWORD *)a2 = atoi(v6); /*0x70a2d*/
    v8 = (char *)Block[0] + 32; /*0x70a33*/
    if ( *((_QWORD *)Block[0] + 7) > 0xFu ) /*0x70a3c*/
      v8 = *(const char **)v8; /*0x70a3e*/
    v9 = atof(v8); /*0x70a4a*/
    *(float *)(a2 + 4) = v9; /*0x70a4e*/
    v10 = (char *)Block[0] + 64; /*0x70a57*/
    if ( *((_QWORD *)Block[0] + 11) > 0xFu ) /*0x70a60*/
      v10 = *(const char **)v10; /*0x70a62*/
    v11 = atof(v10); /*0x70a6e*/
    *(float *)(a2 + 8) = v11; /*0x70a72*/
    v12 = (char *)Block[0] + 96; /*0x70a7b*/
    if ( *((_QWORD *)Block[0] + 15) > 0xFu ) /*0x70a84*/
      v12 = *(const char **)v12; /*0x70a86*/
    v13 = atof(v12); /*0x70a92*/
    *(float *)(a2 + 12) = v13; /*0x70a96*/
    v14 = (char *)Block[0] + 128; /*0x70a9f*/
    if ( *((_QWORD *)Block[0] + 19) > 0xFu ) /*0x70aa8*/
      v14 = *(const char **)v14; /*0x70aaa*/
    *(_DWORD *)(a2 + 16) = atoi(v14); /*0x70ab3*/
    v15 = (char *)Block[0] + 160; /*0x70aba*/
    if ( *((_QWORD *)Block[0] + 23) > 0xFu ) /*0x70ac6*/
      v15 = *(const char **)v15; /*0x70ac8*/
    *(_DWORD *)(a2 + 20) = atoi(v15); /*0x70ad1*/
    v16 = (char *)Block[0] + 192; /*0x70ad8*/
    if ( *((_QWORD *)Block[0] + 27) > 0xFu ) /*0x70ae4*/
      v16 = *(const char **)v16; /*0x70ae6*/
    *(_DWORD *)(a2 + 24) = atoi(v16); /*0x70aef*/
    v17 = (char *)Block[0] + 224; /*0x70af6*/
    if ( *((_QWORD *)Block[0] + 31) > 0xFu ) /*0x70b02*/
      v17 = *(const char **)v17; /*0x70b04*/
    *(_DWORD *)(a2 + 28) = atoi(v17); /*0x70b0d*/
    v18 = (char *)Block[0] + 256; /*0x70b14*/
    if ( *((_QWORD *)Block[0] + 35) > 0xFu ) /*0x70b20*/
      v18 = *(const char **)v18; /*0x70b22*/
    *(_DWORD *)(a2 + 32) = atoi(v18); /*0x70b2b*/
    v19 = (char *)Block[0] + 288; /*0x70b32*/
    if ( *((_QWORD *)Block[0] + 39) > 0xFu ) /*0x70b3e*/
      v19 = *(const char **)v19; /*0x70b40*/
    *(_DWORD *)(a2 + 36) = atoi(v19); /*0x70b49*/
    v20 = (char *)Block[0] + 320; /*0x70b50*/
    if ( *((_QWORD *)Block[0] + 43) > 0xFu ) /*0x70b5c*/
      v20 = *(const char **)v20; /*0x70b5e*/
    *(_DWORD *)(a2 + 40) = atoi(v20); /*0x70b67*/
    v21 = (char *)Block[0] + 352; /*0x70b6e*/
    if ( *((_QWORD *)Block[0] + 47) > 0xFu ) /*0x70b7a*/
      v21 = *(const char **)v21; /*0x70b7c*/
    *(_DWORD *)(a2 + 44) = atoi(v21); /*0x70b85*/
    v22 = (char *)Block[0] + 384; /*0x70b8c*/
    if ( *((_QWORD *)Block[0] + 51) > 0xFu ) /*0x70b98*/
      v22 = *(const char **)v22; /*0x70b9a*/
    *(_DWORD *)(a2 + 48) = atoi(v22); /*0x70ba3*/
    v23 = (char *)Block[0] + 416; /*0x70baa*/
    if ( *((_QWORD *)Block[0] + 55) > 0xFu ) /*0x70bb6*/
      v23 = *(const char **)v23; /*0x70bb8*/
    *(_DWORD *)(a2 + 52) = atoi(v23); /*0x70bc1*/
    v24 = (char *)Block[0] + 448; /*0x70bc8*/
    if ( *((_QWORD *)Block[0] + 59) > 0xFu ) /*0x70bd4*/
      v24 = *(const char **)v24; /*0x70bd6*/
    *(_DWORD *)(a2 + 56) = atoi(v24); /*0x70bdf*/
    v25 = (char *)Block[0] + 480; /*0x70be6*/
    if ( *((_QWORD *)Block[0] + 63) > 0xFu ) /*0x70bf2*/
      v25 = *(const char **)v25; /*0x70bf4*/
    *(_DWORD *)(a2 + 60) = atoi(v25); /*0x70bfd*/
    v26 = (char *)Block[0] + 512; /*0x70c04*/
    if ( *((_QWORD *)Block[0] + 67) > 0xFu ) /*0x70c10*/
      v26 = *(const char **)v26; /*0x70c12*/
    *(_DWORD *)(a2 + 64) = atoi(v26); /*0x70c1b*/
    v27 = (char *)Block[0] + 544; /*0x70c22*/
    if ( *((_QWORD *)Block[0] + 71) > 0xFu ) /*0x70c2e*/
      v27 = *(const char **)v27; /*0x70c30*/
    *(_DWORD *)(a2 + 68) = atoi(v27); /*0x70c39*/
    v28 = (char *)Block[0] + 576; /*0x70c40*/
    if ( *((_QWORD *)Block[0] + 75) > 0xFu ) /*0x70c4c*/
      v28 = *(const char **)v28; /*0x70c4e*/
    *(_DWORD *)(a2 + 72) = atoi(v28); /*0x70c57*/
    v29 = (char *)Block[0] + 608; /*0x70c5e*/
    if ( *((_QWORD *)Block[0] + 79) > 0xFu ) /*0x70c6a*/
      v29 = *(const char **)v29; /*0x70c6c*/
    *(_DWORD *)(a2 + 76) = atoi(v29); /*0x70c75*/
    v30 = (char *)Block[0] + 640; /*0x70c7c*/
    if ( *((_QWORD *)Block[0] + 83) > 0xFu ) /*0x70c88*/
      v30 = *(const char **)v30; /*0x70c8a*/
    *(_DWORD *)(a2 + 80) = atoi(v30); /*0x70c93*/
    v31 = (char *)Block[0] + 672; /*0x70c9a*/
    if ( *((_QWORD *)Block[0] + 87) > 0xFu ) /*0x70ca6*/
      v31 = *(const char **)v31; /*0x70ca8*/
    v32 = atof(v31); /*0x70cb4*/
    *(float *)(a2 + 84) = v32; /*0x70cb8*/
    v33 = (char *)Block[0] + 704; /*0x70cc1*/
    if ( *((_QWORD *)Block[0] + 91) > 0xFu ) /*0x70ccd*/
      v33 = *(const char **)v33; /*0x70ccf*/
    v34 = atof(v33); /*0x70cdb*/
    *(float *)(a2 + 88) = v34; /*0x70cdf*/
    v35 = (char *)Block[0] + 736; /*0x70ce8*/
    if ( *((_QWORD *)Block[0] + 95) > 0xFu ) /*0x70cf4*/
      v35 = *(const char **)v35; /*0x70cf6*/
    v36 = atof(v35); /*0x70d02*/
    *(float *)(a2 + 92) = v36; /*0x70d06*/
    v37 = (char *)Block[0] + 768; /*0x70d0f*/
    if ( *((_QWORD *)Block[0] + 99) > 0xFu ) /*0x70d1b*/
      v37 = *(const char **)v37; /*0x70d1d*/
    v38 = atof(v37); /*0x70d29*/
    *(float *)(a2 + 96) = v38; /*0x70d2d*/
    v39 = (char *)Block[0] + 800; /*0x70d36*/
    if ( *((_QWORD *)Block[0] + 103) > 0xFu ) /*0x70d42*/
      v39 = *(const char **)v39; /*0x70d44*/
    v40 = atof(v39); /*0x70d50*/
    *(float *)(a2 + 100) = v40; /*0x70d54*/
    v41 = (char *)Block[0] + 832; /*0x70d5d*/
    if ( *((_QWORD *)Block[0] + 107) > 0xFu ) /*0x70d69*/
      v41 = *(const char **)v41; /*0x70d6b*/
    v42 = atof(v41); /*0x70d77*/
    *(float *)(a2 + 104) = v42; /*0x70d7b*/
    v43 = (char *)Block[0] + 864; /*0x70d84*/
    if ( *((_QWORD *)Block[0] + 111) > 0xFu ) /*0x70d90*/
      v43 = *(const char **)v43; /*0x70d92*/
    v44 = atof(v43); /*0x70d9e*/
    *(float *)(a2 + 108) = v44; /*0x70da2*/
    v45 = (char *)Block[0] + 896; /*0x70dab*/
    if ( *((_QWORD *)Block[0] + 115) > 0xFu ) /*0x70db7*/
      v45 = *(const char **)v45; /*0x70db9*/
    v46 = atof(v45); /*0x70dc5*/
    *(float *)(a2 + 112) = v46; /*0x70dc9*/
    v47 = (char *)Block[0] + 928; /*0x70dd2*/
    if ( *((_QWORD *)Block[0] + 119) > 0xFu ) /*0x70dde*/
      v47 = *(const char **)v47; /*0x70de0*/
    *(_DWORD *)(a2 + 116) = atoi(v47); /*0x70de9*/
    v48 = (char *)Block[0] + 960; /*0x70df0*/
    if ( *((_QWORD *)Block[0] + 123) > 0xFu ) /*0x70dfc*/
      v48 = *(const char **)v48; /*0x70dfe*/
    *(_DWORD *)(a2 + 120) = atoi(v48); /*0x70e07*/
    v49 = (char *)Block[0] + 992; /*0x70e0e*/
    if ( *((_QWORD *)Block[0] + 127) > 0xFu ) /*0x70e1a*/
      v49 = *(const char **)v49; /*0x70e1c*/
    *(_DWORD *)(a2 + 124) = atoi(v49); /*0x70e25*/
    v50 = (char *)Block[0] + 1024; /*0x70e2c*/
    if ( *((_QWORD *)Block[0] + 131) > 0xFu ) /*0x70e38*/
      v50 = *(const char **)v50; /*0x70e3a*/
    *(_DWORD *)(a2 + 128) = atoi(v50); /*0x70e43*/
    v51 = (char *)Block[0] + 1056; /*0x70e4d*/
    if ( *((_QWORD *)Block[0] + 135) > 0xFu ) /*0x70e59*/
      v51 = *(const char **)v51; /*0x70e5b*/
    v52 = atof(v51); /*0x70e67*/
    *(float *)(a2 + 132) = v52; /*0x70e6b*/
    v53 = (char *)Block[0] + 1088; /*0x70e77*/
    if ( *((_QWORD *)Block[0] + 139) > 0xFu ) /*0x70e83*/
      v53 = *(const char **)v53; /*0x70e85*/
    v54 = atof(v53); /*0x70e91*/
    *(float *)(a2 + 136) = v54; /*0x70e95*/
    v55 = (char *)Block[0] + 1120; /*0x70ea1*/
    if ( *((_QWORD *)Block[0] + 143) > 0xFu ) /*0x70ead*/
      v55 = *(const char **)v55; /*0x70eaf*/
    v56 = atof(v55); /*0x70ebb*/
    *(float *)(a2 + 140) = v56; /*0x70ebf*/
    v57 = (char *)Block[0] + 1152; /*0x70ecb*/
    if ( *((_QWORD *)Block[0] + 147) > 0xFu ) /*0x70ed7*/
      v57 = *(const char **)v57; /*0x70ed9*/
    v58 = atof(v57); /*0x70ee5*/
    *(float *)(a2 + 144) = v58; /*0x70ee9*/
    v59 = (char *)Block[0] + 1184; /*0x70ef5*/
    if ( *((_QWORD *)Block[0] + 151) > 0xFu ) /*0x70f01*/
      v59 = *(const char **)v59; /*0x70f03*/
    v60 = atof(v59); /*0x70f0f*/
    *(float *)(a2 + 148) = v60; /*0x70f13*/
    v61 = (char *)Block[0] + 1216; /*0x70f1f*/
    if ( *((_QWORD *)Block[0] + 155) > 0xFu ) /*0x70f2b*/
      v61 = *(const char **)v61; /*0x70f2d*/
    v62 = atof(v61); /*0x70f39*/
    *(float *)(a2 + 152) = v62; /*0x70f3d*/
    v63 = (char *)Block[0] + 1248; /*0x70f49*/
    if ( *((_QWORD *)Block[0] + 159) > 0xFu ) /*0x70f55*/
      v63 = *(const char **)v63; /*0x70f57*/
    v64 = atof(v63); /*0x70f63*/
    *(float *)(a2 + 156) = v64; /*0x70f67*/
    v65 = (char *)Block[0] + 1280; /*0x70f73*/
    if ( *((_QWORD *)Block[0] + 163) > 0xFu ) /*0x70f7f*/
      v65 = *(const char **)v65; /*0x70f81*/
    v66 = atof(v65); /*0x70f8d*/
    *(float *)(a2 + 160) = v66; /*0x70f91*/
    v67 = (char *)Block[0] + 1312; /*0x70f9d*/
    if ( *((_QWORD *)Block[0] + 167) > 0xFu ) /*0x70fa9*/
      v67 = *(const char **)v67; /*0x70fab*/
    v68 = atof(v67); /*0x70fb7*/
    *(float *)(a2 + 164) = v68; /*0x70fbb*/
    v69 = (char *)Block[0] + 1344; /*0x70fc7*/
    if ( *((_QWORD *)Block[0] + 171) > 0xFu ) /*0x70fd3*/
      v69 = *(const char **)v69; /*0x70fd5*/
    v70 = atof(v69); /*0x70fe1*/
    *(float *)(a2 + 168) = v70; /*0x70fe5*/
    v71 = (char *)Block[0] + 1376; /*0x70ff1*/
    if ( *((_QWORD *)Block[0] + 175) > 0xFu ) /*0x70ffd*/
      v71 = *(const char **)v71; /*0x70fff*/
    v72 = atof(v71); /*0x7100b*/
    *(float *)(a2 + 172) = v72; /*0x7100f*/
    v73 = (char *)Block[0] + 1408; /*0x7101b*/
    if ( *((_QWORD *)Block[0] + 179) > 0xFu ) /*0x71027*/
      v73 = *(const char **)v73; /*0x71029*/
    v74 = atof(v73); /*0x71035*/
    *(float *)(a2 + 176) = v74; /*0x71039*/
    v75 = (char *)Block[0] + 1440; /*0x71045*/
    if ( *((_QWORD *)Block[0] + 183) > 0xFu ) /*0x71051*/
      v75 = *(const char **)v75; /*0x71053*/
    *(_DWORD *)(a2 + 180) = atoi(v75); /*0x7105c*/
    v76 = (char *)Block[0] + 1472; /*0x71066*/
    if ( *((_QWORD *)Block[0] + 187) > 0xFu ) /*0x71072*/
      v76 = *(const char **)v76; /*0x71074*/
    *(_DWORD *)(a2 + 184) = atoi(v76); /*0x7107d*/
    v77 = (char *)Block[0] + 1504; /*0x71087*/
    if ( *((_QWORD *)Block[0] + 191) > 0xFu ) /*0x71093*/
      v77 = *(const char **)v77; /*0x71095*/
    *(_DWORD *)(a2 + 188) = atoi(v77); /*0x7109e*/
    v78 = (char *)Block[0] + 1536; /*0x710a8*/
    if ( *((_QWORD *)Block[0] + 195) > 0xFu ) /*0x710b4*/
      v78 = *(const char **)v78; /*0x710b6*/
    *(_DWORD *)(a2 + 192) = atoi(v78); /*0x710bf*/
    v79 = (char *)Block[0] + 1568; /*0x710c9*/
    if ( *((_QWORD *)Block[0] + 199) > 0xFu ) /*0x710d5*/
      v79 = *(const char **)v79; /*0x710d7*/
    *(_DWORD *)(a2 + 196) = atoi(v79); /*0x710e0*/
    v80 = (char *)Block[0] + 1600; /*0x710ea*/
    if ( *((_QWORD *)Block[0] + 203) > 0xFu ) /*0x710f6*/
      v80 = *(const char **)v80; /*0x710f8*/
    *(_DWORD *)(a2 + 200) = atoi(v80); /*0x71101*/
    v81 = (char *)Block[0] + 1632; /*0x7110b*/
    if ( *((_QWORD *)Block[0] + 207) > 0xFu ) /*0x71117*/
      v81 = *(const char **)v81; /*0x71119*/
    *(_DWORD *)(a2 + 204) = atoi(v81); /*0x71122*/
    v82 = (char *)Block[0] + 1664; /*0x7112c*/
    if ( *((_QWORD *)Block[0] + 211) > 0xFu ) /*0x71138*/
      v82 = *(const char **)v82; /*0x7113a*/
    *(_DWORD *)(a2 + 208) = atoi(v82); /*0x71143*/
    v83 = (char *)Block[0] + 1696; /*0x7114d*/
    if ( *((_QWORD *)Block[0] + 215) > 0xFu ) /*0x71159*/
      v83 = *(const char **)v83; /*0x7115b*/
    *(_BYTE *)(a2 + 212) = atoi(v83) != 0; /*0x71169*/
    v84 = (char *)Block[0] + 1728; /*0x71173*/
    if ( *((_QWORD *)Block[0] + 219) > 0xFu ) /*0x7117f*/
      v84 = *(const char **)v84; /*0x71181*/
    *(_BYTE *)(a2 + 213) = atoi(v84) != 0; /*0x7118f*/
    v85 = (char *)Block[0] + 1760; /*0x71199*/
    if ( *((_QWORD *)Block[0] + 223) > 0xFu ) /*0x711a5*/
      v85 = *(const char **)v85; /*0x711a7*/
    *(_BYTE *)(a2 + 214) = atoi(v85) != 0; /*0x711b5*/
    v86 = (char *)Block[0] + 1792; /*0x711bf*/
    if ( *((_QWORD *)Block[0] + 227) > 0xFu ) /*0x711cb*/
      v86 = *(const char **)v86; /*0x711cd*/
    *(_BYTE *)(a2 + 215) = atoi(v86) != 0; /*0x711db*/
    v87 = (char *)Block[0] + 1824; /*0x711e5*/
    if ( *((_QWORD *)Block[0] + 231) > 0xFu ) /*0x711f1*/
      v87 = *(const char **)v87; /*0x711f3*/
    v88 = atoi(v87); /*0x711f6*/
    *(_DWORD *)(a2 + 216) = v88; /*0x711fc*/
    v89 = cocos2d::CCString::createWithFormat("particle_%02d_001.png", v88); /*0x7120b*/
    CString = (char *)cocos2d::CCString::getCString(v89); /*0x71214*/
    v91 = -1; /*0x7121a*/
    do /*0x71224*/
      ++v91; /*0x71221*/
    while ( CString[v91] ); /*0x71224*/
    sub_3F5A0((void *)(a2 + 264), CString, v91); /*0x71235*/
    v92 = (char *)Block[0] + 1856; /*0x7123e*/
    if ( *((_QWORD *)Block[0] + 235) > 0xFu ) /*0x7124a*/
      v92 = *(const char **)v92; /*0x7124c*/
    *(_BYTE *)(a2 + 220) = atoi(v92) != 0; /*0x7125a*/
    v93 = (char *)Block[0] + 1888; /*0x71264*/
    if ( *((_QWORD *)Block[0] + 239) > 0xFu ) /*0x71270*/
      v93 = *(const char **)v93; /*0x71272*/
    v94 = atof(v93); /*0x7127e*/
    *(float *)(a2 + 224) = v94; /*0x71282*/
    v95 = (char *)Block[0] + 1920; /*0x7128e*/
    if ( *((_QWORD *)Block[0] + 243) > 0xFu ) /*0x7129a*/
      v95 = *(const char **)v95; /*0x7129c*/
    v96 = atof(v95); /*0x712a8*/
    *(float *)(a2 + 228) = v96; /*0x712ac*/
    v97 = (char *)Block[0] + 1952; /*0x712b8*/
    if ( *((_QWORD *)Block[0] + 247) > 0xFu ) /*0x712c4*/
      v97 = *(const char **)v97; /*0x712c6*/
    v98 = atof(v97); /*0x712d2*/
    *(float *)(a2 + 232) = v98; /*0x712d6*/
    v99 = (char *)Block[0] + 1984; /*0x712e2*/
    if ( *((_QWORD *)Block[0] + 251) > 0xFu ) /*0x712ee*/
      v99 = *(const char **)v99; /*0x712f0*/
    v100 = atof(v99); /*0x712fc*/
    *(float *)(a2 + 236) = v100; /*0x71300*/
    if ( (int)v7 <= 63 ) /*0x7130c*/
    {
      *(_BYTE *)(a2 + 240) = 0; /*0x714b7*/
    }
    else
    {
      v101 = (char *)Block[0] + 2016; /*0x71316*/
      if ( *((_QWORD *)Block[0] + 255) > 0xFu ) /*0x71322*/
        v101 = *(const char **)v101; /*0x71324*/
      *(_BYTE *)(a2 + 240) = atoi(v101) != 0; /*0x71332*/
      if ( (int)v7 > 64 ) /*0x7133c*/
      {
        v102 = (char *)Block[0] + 2048; /*0x71346*/
        if ( *((_QWORD *)Block[0] + 259) > 0xFu ) /*0x71352*/
          v102 = *(const char **)v102; /*0x71354*/
        *(_BYTE *)(a2 + 241) = atoi(v102) != 0; /*0x71362*/
        if ( (int)v7 > 65 ) /*0x7136c*/
        {
          v103 = (char *)Block[0] + 2080; /*0x71376*/
          if ( *((_QWORD *)Block[0] + 263) > 0xFu ) /*0x71382*/
            v103 = *(const char **)v103; /*0x71384*/
          *(_BYTE *)(a2 + 242) = atoi(v103) != 0; /*0x71392*/
          if ( (int)v7 > 66 ) /*0x7139c*/
          {
            v104 = (char *)Block[0] + 2112; /*0x713a6*/
            if ( *((_QWORD *)Block[0] + 267) > 0xFu ) /*0x713b2*/
              v104 = *(const char **)v104; /*0x713b4*/
            *(_BYTE *)(a2 + 243) = atoi(v104) != 0; /*0x713c2*/
            if ( (int)v7 > 67 ) /*0x713cc*/
            {
              v105 = (char *)Block[0] + 2144; /*0x713d6*/
              if ( *((_QWORD *)Block[0] + 271) > 0xFu ) /*0x713e2*/
                v105 = *(const char **)v105; /*0x713e4*/
              *(_BYTE *)(a2 + 244) = atoi(v105) != 0; /*0x713f2*/
              if ( (int)v7 > 68 ) /*0x713fc*/
              {
                v106 = (char *)Block[0] + 2176; /*0x71406*/
                if ( *((_QWORD *)Block[0] + 275) > 0xFu ) /*0x71412*/
                  v106 = *(const char **)v106; /*0x71414*/
                v107 = atof(v106); /*0x71420*/
                *(float *)(a2 + 248) = v107; /*0x71424*/
                if ( (int)v7 > 69 ) /*0x71430*/
                {
                  v108 = (char *)Block[0] + 2208; /*0x7143a*/
                  if ( *((_QWORD *)Block[0] + 279) > 0xFu ) /*0x71446*/
                    v108 = *(const char **)v108; /*0x71448*/
                  v109 = atof(v108); /*0x71454*/
                  *(float *)(a2 + 252) = v109; /*0x71458*/
                  if ( (int)v7 > 70 ) /*0x71464*/
                  {
                    v110 = (char *)Block[0] + 2240; /*0x7146e*/
                    if ( *((_QWORD *)Block[0] + 283) > 0xFu ) /*0x7147a*/
                      v110 = *(const char **)v110; /*0x7147c*/
                    v111 = atof(v110); /*0x71488*/
                    *(float *)(a2 + 256) = v111; /*0x7148c*/
                    if ( (int)v7 > 71 ) /*0x71498*/
                    {
                      v112 = (char *)Block[0] + 2272; /*0x7149e*/
                      if ( *((_QWORD *)Block[0] + 287) > 0xFu ) /*0x714aa*/
                        v112 = *(const char **)v112; /*0x714ac*/
                      v113 = atof(v112); /*0x714af*/
                      goto LABEL_168; /*0x714b5*/
                    }
LABEL_167:
                    v113 = 0.0; /*0x714ef*/
LABEL_168:
                    v114 = v113; /*0x714f2*/
                    *(float *)(a2 + 260) = v114; /*0x714f6*/
                    v5 = (char *)Block[1]; /*0x714fe*/
                    v6 = (char *)Block[0]; /*0x71502*/
                    goto LABEL_169; /*0x71502*/
                  }
LABEL_166:
                  *(_DWORD *)(a2 + 256) = 0; /*0x714e8*/
                  goto LABEL_167; /*0x714e8*/
                }
LABEL_165:
                *(_DWORD *)(a2 + 252) = 0; /*0x714e1*/
                goto LABEL_166; /*0x714e1*/
              }
LABEL_164:
              *(_DWORD *)(a2 + 248) = 0; /*0x714da*/
              goto LABEL_165; /*0x714da*/
            }
LABEL_163:
            *(_BYTE *)(a2 + 244) = 0; /*0x714d3*/
            goto LABEL_164; /*0x714d3*/
          }
LABEL_162:
          *(_BYTE *)(a2 + 243) = 0; /*0x714cc*/
          goto LABEL_163; /*0x714cc*/
        }
LABEL_161:
        *(_BYTE *)(a2 + 242) = 0; /*0x714c5*/
        goto LABEL_162; /*0x714c5*/
      }
    }
    *(_BYTE *)(a2 + 241) = 0; /*0x714be*/
    goto LABEL_161; /*0x714be*/
  }
LABEL_169:
  if ( v6 ) /*0x71509*/
  {
    if ( v6 != v5 ) /*0x7150e*/
    {
      do /*0x7151f*/
      {
        sub_3C310(v6); /*0x71513*/
        v6 += 32; /*0x71518*/
      }
      while ( v6 != v5 ); /*0x7151f*/
      v6 = (char *)Block[0]; /*0x71521*/
    }
    v115 = v6; /*0x71530*/
    if ( ((v117 - v6) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 ) /*0x7153a*/
    {
      v6 = (char *)*((_QWORD *)v6 - 1); /*0x71540*/
      if ( (unsigned __int64)(v115 - v6 - 8) > 0x1F ) /*0x7154f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x71560*/
    }
    j_j_free(v6); /*0x7156a*/
  }
}
