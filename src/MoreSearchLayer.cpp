#include <Geode/binding/MoreSearchLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x92d10
// Method: MoreSearchLayer::onClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall MoreSearchLayer_onClose(__int64 a1, char a2)
{
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rax
  bool v7; // r14
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 v10; // rdi
  void (__fastcall **v11)(__int64, const char *); // rbx
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // rax
  const char *v15; // rdx
  __int64 v16; // rdi
  void (__fastcall **v17)(__int64, const char *); // rbx
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // rbx
  _DWORD v26[4]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v27; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h]
  unsigned __int64 v29; // [rsp+48h] [rbp-18h]

  v4 = 0; /*0x92d40*/
  v26[0] = 0; /*0x92d42*/
  v5 = GJAccountManager_sharedState(); /*0x92d45*/
  v7 = 0; /*0x92d80*/
  if ( *(_DWORD *)(v5 + 360) != *(_DWORD *)(v5 + 364) ) /*0x92d58*/
  {
    v6 = GJAccountManager_sharedState(); /*0x92d5a*/
    sub_3E4F0(&v27, v6 + 376); /*0x92d6a*/
    v4 = 3; /*0x92d6f*/
    if ( v28 ) /*0x92d79*/
      v7 = 1; /*0x92d58*/
  }
  if ( (v4 & 1) != 0 ) /*0x92d86*/
    sub_3C310(&v27); /*0x92d8c*/
  LOWORD(v26[0]) = -1; /*0x92d98*/
  BYTE2(v26[0]) = -1; /*0x92da3*/
  TextArea_colorAllCharactersTo(*(_QWORD *)(a1 + 648), (__int64)v26); /*0x92db1*/
  v8 = GJAccountManager_sharedState(); /*0x92db6*/
  if ( v7 )
  {
    sub_3E4F0(&v27, v8 + 328); /*0x92dcb*/
    v9 = (const char *)&v27; /*0x92dd1*/
    if ( v29 > 0xF ) /*0x92dda*/
      v9 = (const char *)v27; /*0x92dda*/
    v10 = *(_QWORD *)(a1 + 640); /*0x92ddf*/
    v11 = *(void (__fastcall ***)(__int64, const char *))(v10 + 360); /*0x92de6*/
    v12 = cocos2d::CCString::createWithFormat("Linked to account: %s", v9);
    CString = cocos2d::CCString::getCString(v12); /*0x92dfd*/
    (*v11)(v10 + 360, CString); /*0x92e0d*/
    sub_3C310(&v27); /*0x92e14*/
    v27 = 0; /*0x92e1c*/
    v28 = 0; /*0x92e20*/
    v29 = 15; /*0x92e28*/
    LOBYTE(v27) = 0; /*0x92e30*/
  }
  else if ( *(_DWORD *)(v8 + 360) == *(_DWORD *)(v8 + 364) )
  {
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 640) + 360LL))( /*0x92f00*/
      *(_QWORD *)(a1 + 640) + 360LL,
      "Not logged in");
    v27 = 0; /*0x92f05*/
    v28 = 0; /*0x92f09*/
    v29 = 0; /*0x92f11*/
    *(_QWORD *)&v27 = sub_3C460(64); /*0x92f26*/
    v28 = 62; /*0x92f2a*/
    v29 = 63; /*0x92f32*/
    strcpy((char *)v27, "Create an account to back up\nand load your data from the cloud"); /*0x92f41*/
  }
  else
  {
    v14 = GJAccountManager_sharedState(); /*0x92e4e*/
    sub_3E4F0(&v27, v14 + 328); /*0x92e5e*/
    v15 = (const char *)&v27; /*0x92e64*/
    if ( v29 > 0xF ) /*0x92e6d*/
      v15 = (const char *)v27; /*0x92e6d*/
    v16 = *(_QWORD *)(a1 + 640); /*0x92e72*/
    v17 = *(void (__fastcall ***)(__int64, const char *))(v16 + 360); /*0x92e79*/
    v18 = cocos2d::CCString::createWithFormat("Linked to account: %s", v15);
    v19 = cocos2d::CCString::getCString(v18); /*0x92e90*/
    (*v17)(v16 + 360, v19); /*0x92ea0*/
    sub_3C310(&v27); /*0x92ea7*/
    v28 = 14; /*0x92eb2*/
    v29 = 15; /*0x92eba*/
    strcpy((char *)&v27, "Login required"); /*0x92eca*/
    HIBYTE(v27) = 0; /*0x92ed5*/
  }
  TextArea_setString(*(__int64 **)(a1 + 648), (const void **)&v27); /*0x92f8a*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 656) + 336LL))(*(_QWORD *)(a1 + 656), !v7); /*0x92fa3*/
  v20 = GJAccountManager_sharedState(); /*0x92fa9*/
  v21 = *(unsigned int *)(v20 + 364); /*0x92fb5*/
  LOBYTE(v21) = *(_DWORD *)(v20 + 360) == (_DWORD)v21; /*0x92fc1*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 664) + 336LL))(*(_QWORD *)(a1 + 664), v21); /*0x92fc7*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 672) + 336LL))(*(_QWORD *)(a1 + 672), v7); /*0x92fdb*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 680) + 336LL))(*(_QWORD *)(a1 + 680), v7); /*0x92fef*/
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), !v7); /*0x93002*/
  v22 = GJAccountManager_sharedState(); /*0x93008*/
  v23 = *(unsigned int *)(v22 + 364); /*0x93014*/
  LOBYTE(v23) = *(_DWORD *)(v22 + 360) != (_DWORD)v23; /*0x93020*/
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), v23); /*0x93026*/
  if ( a2 ) /*0x9302f*/
  {
    if ( !*(_BYTE *)(a1 + 716) ) /*0x93031*/
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 672) + 936LL))(*(_QWORD *)(a1 + 672), 0); /*0x93046*/
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 672) + 952LL))(*(_QWORD *)(a1 + 672)); /*0x9305c*/
      memset(v26, 125, 3); /*0x9305f*/
      (**(void (__fastcall ***)(__int64, _DWORD *))(*(_QWORD *)(v25 + 656) + 320LL))( /*0x93081*/
        *(_QWORD *)(v25 + 656) + 320LL,
        v26);
      memset(v26, 125, 3); /*0x93084*/
      return (**(__int64 (__fastcall ***)(__int64, _DWORD *))(*(_QWORD *)(v25 + 632) + 368LL))( /*0x930a3*/
               *(_QWORD *)(v25 + 632) + 368LL,
               v26);
    }
  }
  return result; /*0x930a5*/
}

// [3/5] Address: 0x43c3a0
// Method: MoreSearchLayer::createToggleButton
// Hidden C++ exception states: #wind=1
cocos2d::CCMenuItem *__fastcall MoreSearchLayer_createToggleButton(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6)
{
  struct cocos2d::CCSprite *v10; // r12
  struct cocos2d::CCSprite *v11; // rbx
  cocos2d::CCMenuItem *v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rax
  const char *v15; // rcx
  struct cocos2d::CCLabelBMFont *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  float *v19; // rax
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v23[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h]

  v24 = a2; /*0x43c3d2*/
  v22 = a6; /*0x43c3e7*/
  v10 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"); /*0x43c3f9*/
  v11 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"); /*0x43c409*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 160LL))(v10); /*0x43c422*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v11 + 160LL))(v11); /*0x43c43a*/
  v12 = CCMenuItemToggler_create((__int64)v10, (__int64)v11, a1, a3); /*0x43c44e*/
  CCMenuItemToggler_toggle((__int64)v12, a4); /*0x43c458*/
  (*(void (__fastcall **)(__int64, cocos2d::CCMenuItem *))(*(_QWORD *)a5 + 464LL))(a5, v12); /*0x43c46d*/
  v13 = *(_QWORD *)v12; /*0x43c470*/
  cocos2d::CCNode::convertToNodeSpace(a5, &v22, a6); /*0x43c483*/
  (*(void (__fastcall **)(cocos2d::CCMenuItem *, __int64))(v13 + 184))(v12, v14); /*0x43c48f*/
  *(_DWORD *)(*((_QWORD *)v12 + 47) + 372LL) = 1069547520; /*0x43c49c*/
  *(_DWORD *)(*((_QWORD *)v12 + 48) + 372LL) = 1069547520; /*0x43c4ad*/
  CCMenuItemToggler_toggle((__int64)v12, *((unsigned __int8 *)v12 + 392)); /*0x43c4c2*/
  v15 = (const char *)a2; /*0x43c4c7*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x43c4cf*/
    v15 = *(const char **)a2; /*0x43c4d1*/
  v16 = cocos2d::CCLabelBMFont::create(v15, (const char *)&qword_6FFF68); /*0x43c4e1*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x43c4f8*/
    *(_QWORD *)(a1 + 584),
    v16);
  v17 = *(_QWORD *)v16; /*0x43c4fb*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 0.0, 0.5); /*0x43c511*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v17 + 288))(v16, v18); /*0x43c51d*/
  v19 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 320LL))(v10); /*0x43c52a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v23, (float)((float)(*v19 * 0.5) * 0.80000001) + 8.0, 0.0); /*0x43c550*/
  cocos2d::CCPoint::operator+(a6, &v22, v20); /*0x43c561*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64 *))(*(_QWORD *)v16 + 184LL))(v16, &v22); /*0x43c572*/
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 320LL))(v16) > 80.0 ) /*0x43c593*/
  {
    (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 320LL))(v16); /*0x43c59b*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 160LL))(v16); /*0x43c5ae*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 168LL))(v16); /*0x43c5ba*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 160LL))(v16); /*0x43c5d1*/
  sub_3C310(a2); /*0x43c5db*/
  return v12; /*0x43c5e3*/
}

// [4/5] Address: 0x43ca60
// Method: MoreSearchLayer::keyBackClicked
__int64 __fastcall MoreSearchLayer_keyBackClicked(__int64 a1)
{
  return sub_43C610(a1 - 336, 0);
}

// [5/5] Address: 0x48d530
// Method: MoreSearchLayer::updateAudioLabel
// Hidden C++ exception states: #wind=5
double __fastcall MoreSearchLayer_updateAudioLabel(__int64 a1)
{
  __int64 v2; // rcx
  double result; // xmm0_8
  __int64 v4; // rdi
  void *v5; // r8
  __int64 v6; // rax
  cocos2d::extension::CCHttpRequest *Request; // rax
  void *v8; // rcx
  void *v9; // [rsp+30h] [rbp-49h]
  __int128 v10; // [rsp+38h] [rbp-41h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h]
  __int64 v12; // [rsp+50h] [rbp-29h]
  _BYTE v13[32]; // [rsp+60h] [rbp-19h] BYREF
  void *Block[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v15; // [rsp+90h] [rbp+17h]
  unsigned __int64 v16; // [rsp+98h] [rbp+1Fh]
  _BYTE v17[32]; // [rsp+A0h] [rbp+27h] BYREF

  v2 = qword_905FD0; /*0x48d558*/
  if ( !qword_905FD0 ) /*0x48d562*/
  {
    v9 = operator new(0x6E8u); /*0x48d56e*/
    qword_905FD0 = sub_2723A0(v9); /*0x48d57b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x48d58c*/
    v2 = qword_905FD0; /*0x48d58e*/
  }
  if ( !GameManager_getGameVariable(v2, "0219") ) /*0x48d59c*/
  {
    if ( !*(_BYTE *)(a1 + 969) ) /*0x48d5a9*/
    {
      *(_BYTE *)(a1 + 969) = 1; /*0x48d5b1*/
      if ( *(_QWORD *)(a1 + 936) == *(_QWORD *)(a1 + 944) ) /*0x48d5c6*/
        sub_48DF80(a1); /*0x48d5cb*/
    }
    if ( *(_QWORD *)(a1 + 384) ) /*0x48d5d0*/
    {
      if ( !*(_BYTE *)(a1 + 968) ) /*0x48d5ee*/
      {
        result = 0.0; /*0x48d5fb*/
        *(_OWORD *)Block = 0; /*0x48d5fe*/
        v15 = 6; /*0x48d602*/
        v16 = 15; /*0x48d60a*/
        strcpy((char *)Block, "v_news"); /*0x48d618*/
        v4 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 328), Block); /*0x48d63b*/
        if ( v16 > 0xF ) /*0x48d646*/
        {
          v5 = Block[0]; /*0x48d64b*/
          if ( v16 + 1 >= 0x1000 ) /*0x48d659*/
          {
            v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x48d65f*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x48d66e*/
              invoke_watson(0, 0, 0, 0, 0); /*0x48d681*/
          }
          j_j_free(v5); /*0x48d68b*/
        }
        if ( !v4 ) /*0x48d693*/
        {
          *(_BYTE *)(a1 + 968) = 1; /*0x48d699*/
          *(_OWORD *)Block = 0; /*0x48d6a3*/
          v15 = 0; /*0x48d6a7*/
          v16 = 0; /*0x48d6ab*/
          Block[0] = (void *)sub_3C460(32); /*0x48d6b9*/
          v15 = 22; /*0x48d6bd*/
          v16 = 31; /*0x48d6c5*/
          strcpy((char *)Block[0], "/news/news_version.txt"); /*0x48d6d4*/
          MusicDownloadManager_generateCustomContentURL(a1, (__int64)v17, (__int64)Block); /*0x48d6fa*/
          v10 = 0; /*0x48d70b*/
          v11 = 0; /*0x48d70f*/
          v12 = 15; /*0x48d713*/
          LOBYTE(v10) = 0; /*0x48d71b*/
          v6 = sub_3E4F0(v13, v17); /*0x48d727*/
          Request = MusicDownloadManager_ProcessHttpGetRequest( /*0x48d74e*/
                      (cocos2d::CCObject *)a1,
                      v6,
                      (__int64)&v10,
                      (__int64)sub_48D810,
                      5,
                      10);
          *(_OWORD *)Block = 0; /*0x48d756*/
          v15 = 6; /*0x48d75a*/
          v16 = 15; /*0x48d762*/
          strcpy((char *)Block, "v_news"); /*0x48d770*/
          cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 328), Request, Block); /*0x48d790*/
          if ( v16 > 0xF ) /*0x48d79f*/
          {
            v8 = Block[0]; /*0x48d7a4*/
            if ( v16 + 1 >= 0x1000 ) /*0x48d7b2*/
            {
              v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x48d7b8*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x48d7c7*/
                invoke_watson(0, 0, 0, 0, 0); /*0x48d7d8*/
            }
            j_j_free(v8); /*0x48d7df*/
          }
          return sub_3C310(v17); /*0x48d7e9*/
        }
      }
    }
    else
    {
      *(_BYTE *)(a1 + 970) = 1; /*0x48d5da*/
      return MusicDownloadManager_getCustomContentURL((cocos2d::CCObject *)a1); /*0x48d5e4*/
    }
  }
  return result; /*0x48d7ee*/
}

// Address: 0x437870
// Method: MoreSearchLayer::init
// Hidden C++ exception states: #wind=21
bool __fastcall MoreSearchLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  cocos2d::CCObject *v10; // rax
  __int64 v11; // rcx
  cocos2d::CCObject *v12; // rax
  __int64 v13; // rcx
  cocos2d::CCObject *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  void (__fastcall *v18)(__int64 *, __int64); // r8
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  cocos2d::CCObject *v25; // rax
  struct cocos2d::CCMenu *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  struct cocos2d::CCLabelBMFont *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  float v32; // xmm10_4
  float v33; // xmm11_4
  float v34; // xmm9_4
  float v35; // xmm7_4
  float v36; // xmm12_4
  float v37; // xmm13_4
 ... [34539 chars total]
