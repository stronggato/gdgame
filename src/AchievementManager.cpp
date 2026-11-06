#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/AchievementManager.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub AchievementManager_addManualAchievements;
inline GDStub AchievementManager_init;
inline GDStub AchievementManager_percentForAchievement;
inline GDStub LevelAreaLayer_addGodRay;
inline GDStub xmmword_830EF0;
inline GDStub xmmword_830F10;
inline GDStub xmmword_830F20;
inline GDStub xmmword_830F30;
inline GDStub xmmword_830F70;
inline GDStub xmmword_831000;
inline GDStub xmmword_831020;
using namespace cocos2d;

// [1/8] Address: 0x8db0
// Method: AchievementManager::~AchievementManager
AchievementManager::~AchievementManager()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx

//   *(_QWORD *)Block   = (uintptr_t)((uintptr_t)(&AchievementManager::`vftable')); /*0x8dc6*/ // cleaned vftable
  qword_905F38 = 0; /*0x8dc9*/
  v4 = (decltype(v4))((cocos2d::CCObject *)*((_QWORD *)Block + 44)); /*0x8dd4*/
  if ( v4 ) /*0x8dde*/
    CCObject_release(v4); /*0x8de0*/
  v5 = (decltype(v5))((cocos2d::CCObject *)*((_QWORD *)Block + 41)); /*0x8de6*/
  if ( v5 ) /*0x8df0*/
    CCObject_release(v5); /*0x8df2*/
  v6 = (decltype(v6))((cocos2d::CCObject *)*((_QWORD *)Block + 40)); /*0x8df8*/
  if ( v6 ) /*0x8e02*/
    CCObject_release(v6); /*0x8e04*/
  v7 = (decltype(v7))((cocos2d::CCObject *)*((_QWORD *)Block + 46)); /*0x8e0a*/
  if ( v7 ) /*0x8e14*/
    CCObject_release(v7); /*0x8e16*/
  v8 = (decltype(v8))((cocos2d::CCObject *)*((_QWORD *)Block + 48)); /*0x8e1c*/
  if ( v8 ) /*0x8e26*/
    CCObject_release(v8); /*0x8e28*/
//   cocos2d::CCNode::~CCNode(Block); /*0x8e31*/ // cleaned base ctor/dtor
//   if ( (a2 & 1) != 0 ) /*0x8e3c*/
//     j_j_free(Block); /*0x8e46*/ // cleaned scalar delete
  return; /*0x8e4e*/
}

// [2/8] Address: 0x9000
// Method: AchievementManager::sharedState
AchievementManager* AchievementManager::sharedState()
{
  uint64_t a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 result; // rax
  cocos2d::CCNode *v1; // [rsp+30h] [rbp+8h]

  result = qword_905F38; /*0x9006*/
  if ( !qword_905F38 ) /*0x9010*/
  {
    v1 = (decltype(v1))((cocos2d::CCNode *)operator new(0x188u)); /*0x9023*/
//     cocos2d::CCNode::CCNode(v1); /*0x902b*/ // cleaned base ctor/dtor
//     *(_QWORD *)v1   = (uintptr_t)((uintptr_t)(&AchievementManager::`vftable')); /*0x9038*/ // cleaned vftable
    *((_QWORD *)v1 + 40)  = (uintptr_t)(0); /*0x903d*/
    *((_QWORD *)v1 + 41)  = (uintptr_t)(0); /*0x9044*/
    *((_QWORD *)v1 + 42)  = (uintptr_t)(0); /*0x904b*/
    *((_QWORD *)v1 + 43)  = (uintptr_t)(0); /*0x9052*/
    *((_QWORD *)v1 + 44)  = (uintptr_t)(0); /*0x9059*/
    *((_BYTE *)v1 + 360)  = (uintptr_t)(0); /*0x9060*/
    *((_QWORD *)v1 + 46)  = (uintptr_t)(0); /*0x9066*/
    *((_DWORD *)v1 + 94)  = (uintptr_t)(0); /*0x906d*/
    *((_QWORD *)v1 + 48)  = (uintptr_t)(0); /*0x9073*/
    qword_905F38 = (__int64)v1; /*0x907a*/
    AchievementManager_init(v1); /*0x9097*/
    return (AchievementManager*)qword_905F38; /*0x909c*/
  }
  return (AchievementManager*)result; /*0x90a3*/
}

// [3/8] Address: 0x90c0
// Method: AchievementManager::init
bool AchievementManager::init()
{
  _QWORD* a1 = (_QWORD*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rax
  cocos2d::CCObject *v4; // rax
  cocos2d::CCObject *v5; // rax

  v2 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 1); /*0x90d5*/
  a1[48] = (uintptr_t)(v2); /*0x90db*/
  CCObject_retain(v2); /*0x90e5*/
  v3 = (decltype(v3))((cocos2d::CCObject *)cocos2d::CCDictionary::create()); /*0x90eb*/
  a1[41] = (uintptr_t)(v3); /*0x90f1*/
  CCObject_retain(v3); /*0x90fb*/
  AchievementManager_addManualAchievements(a1); /*0x9104*/
  v4 = LevelAreaLayer_addGodRay((__int64)a1, 0); /*0x910e*/
  a1[40] = (uintptr_t)(v4); /*0x9113*/
  CCObject_retain(v4); /*0x911d*/
  v5 = LevelAreaLayer_addGodRay((__int64)a1, 1); /*0x9128*/
  a1[46] = (uintptr_t)(v5); /*0x912d*/
  CCObject_retain(v5); /*0x9137*/
  sub_3B630(a1); /*0x9140*/
  return 1; /*0x9147*/
}

// [4/8] Address: 0x9150
// Method: AchievementManager::addAchievement
void AchievementManager::addAchievement(std::string identifier, std::string title, std::string achievedDescription, std::string unachievedDescription, std::string icon, int limits)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(identifier);
  __int64 a3 = (__int64)to_gd_arg(title);
  __int64 a4 = (__int64)to_gd_arg(achievedDescription);
  __int64 a5 = (__int64)to_gd_arg(unachievedDescription);
  __int64 a6 = (__int64)to_gd_arg(icon);
  int a7 = (int)to_gd_arg(limits);
  uint64_t a8 = 0;

  __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // rax
  void *v19; // rcx
  __int64 v20; // rax
  void *v21; // rcx
  struct cocos2d::CCString *v22; // rax
  void *v23; // rcx
  struct cocos2d::CCString *v24; // rax
  void *v25; // rcx
  void *Block[2]; // [rsp+60h] [rbp-31h] BYREF
  __m128i si128; // [rsp+70h] [rbp-21h]

  v11 = (uintptr_t)cocos2d::CCDictionary::create(); /*0x91ac*/
  Block[1] = (void*)(uintptr_t)(algn_7264 + 1); /*0x91b2*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F70); /*0x91be*/
  Block[0] = (void*)(uintptr_t)((void *)0x696669746E656469LL); /*0x91cb*/
  v12 = (uintptr_t)cocos2d::CCString::create((const char*)to_gd_arg(a2)); /*0x91e2*/
  (((cocos2d::CCDictionary*)(v11))->setObject((cocos2d::CCObject*)(v12), (const char*)to_gd_arg(Block))); /*0x91f2*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x9201*/
  {
    v13 = Block[0]; /*0x9206*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x9214*/
    {
      v13 = (void *)*((_QWORD *)Block[0] - 1); /*0x921a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0x9229*/
        invoke_watson(0, 0, 0, 0, 0); /*0x923e*/
    }
//     j_j_free(v13); /*0x9245*/ // cleaned scalar delete
  }
  *(_OWORD *)Block  = (uintptr_t)(0); /*0x924d*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F20); /*0x9259*/
  strcpy((char *)Block, "title"); /*0x9264*/
  v14 = (uintptr_t)cocos2d::CCString::create((const char*)to_gd_arg(a3)); /*0x9278*/
  (((cocos2d::CCDictionary*)(v11))->setObject((cocos2d::CCObject*)(v14), (const char*)to_gd_arg(Block))); /*0x9288*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x9297*/
  {
    v15 = Block[0]; /*0x929c*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x92aa*/
    {
      v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x92b0*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x92bf*/
        invoke_watson(0, 0, 0, 0, 0); /*0x92d4*/
    }
//     j_j_free(v15); /*0x92db*/ // cleaned scalar delete
  }
  *(_OWORD *)Block  = (uintptr_t)(0); /*0x92e3*/
  si128 = _mm_setzero_si128(); /*0x92ea*/
  Block[0] = (void*)(uintptr_t)((void *)sub_3C460(32)); /*0x92f9*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_831000); /*0x9305*/
  strcpy((char *)Block[0], "achievedDescription"); /*0x9311*/
  v16 = (uintptr_t)cocos2d::CCString::create((const char*)to_gd_arg(a4)); /*0x9330*/
  (((cocos2d::CCDictionary*)(v11))->setObject((cocos2d::CCObject*)(v16), (const char*)to_gd_arg(Block))); /*0x9340*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x934f*/
  {
    v17 = Block[0]; /*0x9354*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x9362*/
    {
      v17 = (void *)*((_QWORD *)Block[0] - 1); /*0x9368*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F ) /*0x9377*/
        invoke_watson(0, 0, 0, 0, 0); /*0x938c*/
    }
//     j_j_free(v17); /*0x9393*/ // cleaned scalar delete
  }
  *(_OWORD *)Block  = (uintptr_t)(0); /*0x939b*/
  si128 = _mm_setzero_si128(); /*0x93a2*/
  Block[0] = (void*)(uintptr_t)((void *)sub_3C460(32)); /*0x93b1*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_831020); /*0x93bd*/
  strcpy((char *)Block[0], "unachievedDescription"); /*0x93c9*/
  v18 = (uintptr_t)cocos2d::CCString::create((const char*)to_gd_arg(a5)); /*0x93e7*/
  (((cocos2d::CCDictionary*)(v11))->setObject((cocos2d::CCObject*)(v18), (const char*)to_gd_arg(Block))); /*0x93f7*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x9406*/
  {
    v19 = Block[0]; /*0x940b*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x9419*/
    {
      v19 = (void *)*((_QWORD *)Block[0] - 1); /*0x941f*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F ) /*0x942e*/
        invoke_watson(0, 0, 0, 0, 0); /*0x9443*/
    }
//     j_j_free(v19); /*0x944a*/ // cleaned scalar delete
  }
  *(_OWORD *)Block  = (uintptr_t)(0); /*0x9452*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F10); /*0x945e*/
  strcpy((char *)Block, "icon"); /*0x9463*/
  v20 = (uintptr_t)cocos2d::CCString::create((const char*)to_gd_arg(a6)); /*0x9471*/
  (((cocos2d::CCDictionary*)(v11))->setObject((cocos2d::CCObject*)(v20), (const char*)to_gd_arg(Block))); /*0x9481*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x9490*/
  {
    v21 = Block[0]; /*0x9495*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x94a3*/
    {
      v21 = (void *)*((_QWORD *)Block[0] - 1); /*0x94a9*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0x94b8*/
        invoke_watson(0, 0, 0, 0, 0); /*0x94cd*/
    }
//     j_j_free(v21); /*0x94d4*/ // cleaned scalar delete
  }
  if ( a7 > 0 ) /*0x94db*/
  {
    *(_OWORD *)Block  = (uintptr_t)(0); /*0x94e4*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_830F30); /*0x94f0*/
    strcpy((char *)Block, "limits"); /*0x94fb*/
    v22 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)a7); /*0x9516*/
    (((cocos2d::CCDictionary*)(v11))->setObject((cocos2d::CCObject*)(v22), (const char*)to_gd_arg(Block))); /*0x9526*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x9535*/
    {
      v23 = Block[0]; /*0x953a*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x9548*/
      {
        v23 = (void *)*((_QWORD *)Block[0] - 1); /*0x954e*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v23 - 8) > 0x1F ) /*0x955d*/
          invoke_watson(0, 0, 0, 0, 0); /*0x9572*/
      }
//       j_j_free(v23); /*0x9579*/ // cleaned scalar delete
    }
  }
  *(_OWORD *)Block  = (uintptr_t)(0); /*0x9581*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F20); /*0x958d*/
  strcpy((char *)Block, "order"); /*0x9598*/
  v24 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)++*(_DWORD *)(a1 + 376)); /*0x95bc*/
  (((cocos2d::CCDictionary*)(v11))->setObject((cocos2d::CCObject*)(v24), (const char*)to_gd_arg(Block))); /*0x95cc*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x95db*/
  {
    v25 = Block[0]; /*0x95e0*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x95ee*/
    {
      v25 = (void *)*((_QWORD *)Block[0] - 1); /*0x95f4*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F ) /*0x9603*/
        invoke_watson(0, 0, 0, 0, 0); /*0x9618*/
    }
//     j_j_free(v25); /*0x961f*/ // cleaned scalar delete
  }
  if ( (unsigned int)(a7 - 2) <= 2 ) /*0x962a*/
  {
    *(_OWORD *)Block  = (uintptr_t)(0); /*0x962f*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_830EF0); /*0x963b*/
    strcpy((char *)Block, "un"); /*0x9645*/
    (((cocos2d::CCDictionary*)(v11))->setObject((cocos2d::CCObject*)(*(_QWORD *)(a1 + 384)), (const char*)to_gd_arg(Block))); /*0x965b*/
    sub_3C310(Block); /*0x9666*/
  }
  (((cocos2d::CCDictionary*)(*(_QWORD *)(a1 + 328)))->setObject((cocos2d::CCObject*)(v11), (const char*)to_gd_arg(a2))); /*0x9678*/
  sub_3C310(a2); /*0x9682*/
  sub_3C310(a3); /*0x968b*/
  sub_3C310(a4); /*0x9694*/
  sub_3C310(a5); /*0x969e*/
  { sub_3C310(a6); return; } /*0x96ac*/
}

// [6/8] Address: 0x3b230
// Method: AchievementManager::isAchievementEarned
bool AchievementManager::isAchievementEarned(char const* ach)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(ach);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  return (int)AchievementManager_percentForAchievement(a1, a2) >= 100; /*0x3b23f*/
}

// [7/8] Address: 0x3b250
// Method: AchievementManager::percentForAchievement
int AchievementManager::percentForAchievement(char const* id)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(id);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 v3; // r8
  cocos2d::CCString *v4; // rax
  unsigned int v5; // ebx
  void *v6; // r8
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  *(_OWORD *)Block  = (uintptr_t)(0); /*0x3b26b*/
  v9 = 0; /*0x3b273*/
  v3 = -1; /*0x3b279*/
  do /*0x3b283*/
    ++v3; /*0x3b280*/
  while ( *(_BYTE *)(a2 + v3) ); /*0x3b283*/
  sub_3C230(Block); /*0x3b28f*/
  v4 = (decltype(v4))((cocos2d::CCString *)(((cocos2d::CCDictionary*)(*(_QWORD *)(a1 + 352)))->valueForKey((const char*)to_gd_arg(Block)))); /*0x3b2a1*/
  v5 = (((cocos2d::CCString*)(v4))->intValue()); /*0x3b2b0*/
  if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0x3b2bb*/
  {
    v6 = Block[0]; /*0x3b2c0*/
    if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) + 1LL) >= 0x1000 ) /*0x3b2cf*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x3b2d5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x3b2e4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3b2f9*/
    }
//     j_j_free(v6); /*0x3b303*/ // cleaned scalar delete
  }
  return v5; /*0x3b30a*/
}

// [8/8] Address: 0x3ba10
// Method: AchievementManager::achievementForUnlock
std::string AchievementManager::achievementForUnlock(int id, UnlockType type)
{
  __int64 a1 = (__int64)this;
  _QWORD* a2 = (_QWORD*)to_gd_arg(id);
  int a3 = (int)to_gd_arg(type);
  int a4 = (int)to_gd_arg(0);
  uint64_t a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  int v4; // ebx
  const char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  void *v14; // rcx
  void *Block[2]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+50h] [rbp-B0h]
  _BYTE v18[528]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = a4 - 1; /*0x3ba3c*/
  Block[0] = (void*)(uintptr_t)(a2); /*0x3ba49*/
//   fmt::BasicWriter<char>::BasicWriter<char>(v18); /*0x3ba56*/ // cleaned fmt call
  switch ( v4 ) /*0x3ba7a*/
  {
    case 0: /*0x3ba7a*/
      v8 = (char*)"icon_"; /*0x3ba7c*/
      break; /*0x3ba83*/
    case 1: /*0x3ba7a*/
      v8 = (char*)"color_"; /*0x3ba88*/
      break; /*0x3ba8f*/
    case 2: /*0x3ba7a*/
      v8 = (char*)"color2_"; /*0x3ba91*/
      break; /*0x3ba98*/
    case 3: /*0x3ba7a*/
      v8 = (char*)"ship_"; /*0x3ba9a*/
      break; /*0x3baa1*/
    case 4: /*0x3ba7a*/
      v8 = (char*)"ball_"; /*0x3baa3*/
      break; /*0x3baaa*/
    case 5: /*0x3ba7a*/
      v8 = (char*)"bird_"; /*0x3baac*/
      break; /*0x3bab3*/
    case 6: /*0x3ba7a*/
      v8 = (char*)"dart_"; /*0x3bab5*/
      break; /*0x3babc*/
    case 7: /*0x3ba7a*/
      v8 = (char*)"robot_"; /*0x3babe*/
      break; /*0x3bac5*/
    case 8: /*0x3ba7a*/
      v8 = (char*)"spider_"; /*0x3bac7*/
      break; /*0x3bace*/
    case 9: /*0x3ba7a*/
      v8 = (char*)"special_"; /*0x3bad0*/
      break; /*0x3bad7*/
    case 10: /*0x3ba7a*/
      v8 = (char*)"death_"; /*0x3bad9*/
      break; /*0x3bae0*/
    case 11: /*0x3ba7a*/
      v8 = (char*)"item_"; /*0x3baf4*/
      break; /*0x3bafb*/
    case 12: /*0x3ba7a*/
      v8 = (char*)"swing_"; /*0x3bae2*/
      break; /*0x3bae9*/
    case 13: /*0x3ba7a*/
      v8 = (char*)"jetpack_"; /*0x3baeb*/
      break; /*0x3baf2*/
    case 14: /*0x3ba7a*/
      v8 = (char*)"shipstreak_"; /*0x3bafd*/
      break; /*0x3bb04*/
    default:
      v8 = (char*)" _"; /*0x3bb06*/
      break; /*0x3bb06*/
  }
  Block[0] = (void*)(uintptr_t)((void *)v8); /*0x3bb0d*/
  Block[1] = (void*)(uintptr_t)(0); /*0x3bb12*/
//   fmt::BasicWriter<char>::operator<<(v18, Block); /*0x3bb21*/ // cleaned fmt call
  if ( a3 < 10 ) /*0x3bb2a*/
  {
    Block[0] = (void*)(uintptr_t)("0"); /*0x3bb33*/
    Block[1] = (void*)(uintptr_t)(0); /*0x3bb38*/
//     fmt::BasicWriter<char>::operator<<(v18, Block); /*0x3bb47*/ // cleaned fmt call
  }
//   fmt::BasicWriter<char>::operator<<(v18, (unsigned int)a3); /*0x3bb54*/ // cleaned fmt call
//   v9 = fmt::BasicWriter<char>::c_str(v18); /*0x3bb5f*/ // cleaned fmt call
  *(_OWORD *)Block  = (uintptr_t)(0); /*0x3bb68*/
  si128 = _mm_setzero_si128(); /*0x3bb70*/
  v10 = -1; /*0x3bb76*/
  v11 = -1; /*0x3bb7d*/
  do /*0x3bb83*/
    ++v11; /*0x3bb80*/
  while ( *(_BYTE *)(v9 + v11) ); /*0x3bb83*/
  sub_3C230(Block); /*0x3bb92*/
  v12 = (decltype(v12))((cocos2d::CCString *)(((cocos2d::CCDictionary*)(*(_QWORD *)(a1 + 336)))->valueForKey((const char*)to_gd_arg(Block)))); /*0x3bba4*/
  CString = (((cocos2d::CCString*)(v12))->getCString()); /*0x3bbad*/
  *(_OWORD *)a2  = (uintptr_t)(0); /*0x3bbb6*/
  a2[2] = 0; /*0x3bbb9*/
  a2[3] = 0; /*0x3bbbd*/
  do /*0x3bbc4*/
    ++v10; /*0x3bbc1*/
  while ( CString[v10] ); /*0x3bbc4*/
  sub_3C230(a2); /*0x3bbd3*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x3bbe2*/
  {
    v14 = Block[0]; /*0x3bbe7*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x3bbf6*/
    {
      v14 = (void *)*((_QWORD *)Block[0] - 1); /*0x3bbfc*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F ) /*0x3bc0b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3bc1c*/
    }
//     j_j_free(v14); /*0x3bc23*/ // cleaned scalar delete
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x3bc30*/
  LOBYTE(Block[0]) = 0; /*0x3bc36*/
//   fmt::BasicWriter<char>::~BasicWriter<char>(v18); /*0x3bc40*/ // cleaned fmt call
  return {}; /*0x3bc49*/
}
