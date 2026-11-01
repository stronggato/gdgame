#include <Geode/binding/ListButtonPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x76b00
// Method: ListButtonPage::~ListButtonPage
cocos2d::CCLayer *__fastcall ListButtonPage__dtor_ListButtonPage(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCLayer::~CCLayer(Block); /*0x76b0f*/
  if ( (a2 & 1) != 0 ) /*0x76b18*/
    j_j_free(Block); /*0x76b22*/
  return Block; /*0x76b27*/
}

// [2/2] Address: 0x77240
// Method: ListButtonPage::create
// Hidden C++ exception states: #wind=1
cocos2d::CCLayer *__fastcall ListButtonPage_create(
        cocos2d::CCArray *a1,
        const struct cocos2d::CCPoint *a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7)
{
  cocos2d::CCLayer *v11; // r14
  float *v12; // rax
  float *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  float v19; // xmm6_4
  float v20; // xmm9_4
  int v21; // edi
  unsigned int v22; // esi
  __int64 v23; // r14
  int v24; // ebx
  int v25; // r13d
  struct cocos2d::CCObject *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-B8h] BYREF
  cocos2d::CCLayer *v30; // [rsp+28h] [rbp-B0h]
  char v31[8]; // [rsp+30h] [rbp-A8h] BYREF
  char v32[8]; // [rsp+38h] [rbp-A0h] BYREF

  v11 = (cocos2d::CCLayer *)operator new(0x198u); /*0x77298*/
  v30 = v11; /*0x7729b*/
  cocos2d::CCLayer::CCLayer(v11); /*0x772a3*/
  *(_QWORD *)v11 = &ListButtonPage::`vftable'; /*0x772b0*/
  *((_QWORD *)v11 + 40) = &ListButtonPage::`vftable'; /*0x772ba*/
  *((_QWORD *)v11 + 41) = &ListButtonPage::`vftable'; /*0x772c8*/
  *((_QWORD *)v11 + 42) = &ListButtonPage::`vftable'; /*0x772d6*/
  *((_QWORD *)v11 + 43) = &ListButtonPage::`vftable'; /*0x772e4*/
  *((_QWORD *)v11 + 44) = &ListButtonPage::`vftable'; /*0x772f2*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v31, a2); /*0x77301*/
  v13 = v12; /*0x77307*/
  if ( cocos2d::CCLayer::init(v11) ) /*0x7730d*/
  {
    v29 = cocos2d::CCMenu::create(v15, v14, v16, v17); /*0x77337*/
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v11 + 464LL))(v11, v29); /*0x77342*/
    v19 = (float)((float)((float)(a4 - 1) * 0.5) * (float)(a6 + a7)) + v13[1]; /*0x7737e*/
    v20 = (float)(*v13 - (float)((float)((float)a3 * 0.5) * a7)) - (float)((float)((float)(a3 - 1) * 0.5) * a5); /*0x773bf*/
    v21 = 0; /*0x773c4*/
    v22 = 0; /*0x773c6*/
    if ( cocos2d::CCArray::count(a1) ) /*0x773cb*/
    {
      v23 = v29; /*0x773d9*/
      do /*0x774a5*/
      {
        v24 = v21 % a3; /*0x773e5*/
        v25 = (int)floorf((float)v21 / (float)a3); /*0x773f7*/
        v26 = cocos2d::CCArray::objectAtIndex(a1, v22); /*0x77407*/
        if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v26 + 56LL))(v26) == -2 ) /*0x77416*/
        {
          v21 += a3 - v24; /*0x7741c*/
        }
        else
        {
          (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)v23 + 464LL))(v23, v26); /*0x77429*/
          cocos2d::CCPoint::CCPoint( /*0x7746e*/
            (cocos2d::CCPoint *)&v29,
            (float)((float)(a5 + a7) * (float)v24) + (float)((float)(a7 * 0.5) + v20),
            v19 - (float)((float)v25 * (float)(a6 + a7)));
          v27 = *(_QWORD *)v26; /*0x77474*/
          cocos2d::CCNode::convertToNodeSpace(v23, v32, &v29); /*0x77484*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v27 + 184))(v26, v28); /*0x77490*/
          ++v21; /*0x77496*/
        }
        ++v22; /*0x77498*/
      }
      while ( v22 < cocos2d::CCArray::count(a1) ); /*0x774a5*/
      v11 = v30; /*0x774ab*/
    }
    cocos2d::CCObject::autorelease(v11); /*0x774b3*/
    return v11; /*0x774b9*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1); /*0x77322*/
    return 0; /*0x77327*/
  }
}
