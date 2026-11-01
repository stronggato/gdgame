#include <Geode/binding/CCMenuItemToggler.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x47f30
// Method: CCMenuItemToggler::~CCMenuItemToggler
cocos2d::CCMenuItem *__fastcall CCMenuItemToggler__dtor_CCMenuItemToggler(cocos2d::CCMenuItem *Block, char a2)
{
  cocos2d::CCMenuItem::~CCMenuItem(Block); /*0x47f3f*/
  if ( (a2 & 1) != 0 ) /*0x47f48*/
    j_j_free(Block); /*0x47f52*/
  return Block; /*0x47f57*/
}

// [2/10] Address: 0x47f70
// Method: CCMenuItemToggler::create
// Hidden C++ exception states: #wind=1
cocos2d::CCMenuItem *__fastcall CCMenuItemToggler_create(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  cocos2d::CCMenuItem *v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD v22[2]; // [rsp+20h] [rbp-28h] BYREF

  v8 = (cocos2d::CCMenuItem *)operator new(0x190u); /*0x47fa5*/
  v22[0] = v8; /*0x47fa8*/
  cocos2d::CCMenuItem::CCMenuItem(v8); /*0x47fb0*/
  *(_QWORD *)v8 = &CCMenuItemToggler::`vftable'; /*0x47fbd*/
  *((_QWORD *)v8 + 40) = &CCMenuItemToggler::`vftable'; /*0x47fc7*/
  *((_QWORD *)v8 + 47) = 0; /*0x47fce*/
  *((_QWORD *)v8 + 48) = 0; /*0x47fd9*/
  *((_WORD *)v8 + 196) = 0; /*0x47fe4*/
  if ( (unsigned __int8)cocos2d::CCMenuItem::initWithTarget(v8, a3, a4) ) /*0x47ff6*/
  {
    *((_QWORD *)v8 + 47) = CCMenuItemSpriteExtra_create(a1, 0, v8, CCMenuItemToggler_normalTouch); /*0x48018*/
    *((_QWORD *)v8 + 48) = CCMenuItemSpriteExtra_create(a2, 0, v8, CCMenuItemToggler_selectedTouch); /*0x48033*/
    (*(void (__fastcall **)(cocos2d::CCMenuItem *, _QWORD))(*(_QWORD *)v8 + 464LL))(v8, *((_QWORD *)v8 + 47)); /*0x48047*/
    (*(void (__fastcall **)(cocos2d::CCMenuItem *, _QWORD))(*(_QWORD *)v8 + 464LL))(v8, *((_QWORD *)v8 + 48)); /*0x4805a*/
    v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 47) + 952LL))(*((_QWORD *)v8 + 47)); /*0x48070*/
    v10 = *v9; /*0x48073*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v22, 0.5, 0.5); /*0x48089*/
    (*(void (__fastcall **)(__int64 *, __int64))(v10 + 288))(v9, v11); /*0x48095*/
    v12 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 48) + 952LL))(*((_QWORD *)v8 + 48)); /*0x480ab*/
    v13 = *v12; /*0x480ae*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v22, 0.5, 0.5); /*0x480bc*/
    (*(void (__fastcall **)(__int64 *, __int64))(v13 + 288))(v12, v14); /*0x480c8*/
    v15 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 47) + 952LL))(*((_QWORD *)v8 + 47)); /*0x480de*/
    v16 = *v15; /*0x480e1*/
    cocos2d::CCNode::convertToNodeSpace(*((_QWORD *)v8 + 47), v22, &unk_903A80); /*0x480f7*/
    (*(void (__fastcall **)(__int64 *, __int64))(v16 + 184))(v15, v17); /*0x48103*/
    v18 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 48) + 952LL))(*((_QWORD *)v8 + 48)); /*0x48119*/
    v19 = *v18; /*0x4811c*/
    cocos2d::CCNode::convertToNodeSpace(*((_QWORD *)v8 + 48), v22, &unk_903A80); /*0x48132*/
    (*(void (__fastcall **)(__int64 *, __int64))(v19 + 184))(v18, v20); /*0x4813e*/
    *((_BYTE *)v8 + 393) = 0; /*0x48144*/
    CCMenuItemToggler_toggle(v8, 0); /*0x48150*/
    cocos2d::CCObject::autorelease(v8); /*0x48158*/
    return v8; /*0x4815e*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCMenuItem *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1); /*0x48172*/
    return 0; /*0x48175*/
  }
}

// [3/10] Address: 0x481a0
// Method: CCMenuItemToggler::setSizeMult
__int64 __fastcall CCMenuItemToggler_setSizeMult(__int64 a1, float a2)
{
  *(float *)(*(_QWORD *)(a1 + 376) + 372LL) = a2; /*0x481a7*/
  *(float *)(*(_QWORD *)(a1 + 384) + 372LL) = a2; /*0x481b6*/
  return CCMenuItemToggler_toggle(a1, *(unsigned __int8 *)(a1 + 392));
}

// [4/10] Address: 0x481d0
// Method: CCMenuItemToggler::selected
__int64 __fastcall CCMenuItemToggler_selected(cocos2d::CCMenuItem *a1)
{
  __int64 v2; // rcx

  cocos2d::CCMenuItem::selected(a1); /*0x481d9*/
  v2 = 384; /*0x481eb*/
  if ( !*((_BYTE *)a1 + 392) ) /*0x481df*/
    v2 = 376; /*0x481f0*/
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)((char *)a1 + v2) + 896LL))(*(_QWORD *)((char *)a1 + v2));
}

// [5/10] Address: 0x48210
// Method: CCMenuItemToggler::activate
__int64 __fastcall CCMenuItemToggler_activate(cocos2d::CCMenuItem *a1)
{
  __int64 v2; // rcx

  cocos2d::CCMenuItem::activate(a1); /*0x48219*/
  v2 = 384; /*0x4822b*/
  if ( !*((_BYTE *)a1 + 392) ) /*0x4821f*/
    v2 = 376; /*0x48230*/
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)((char *)a1 + v2) + 888LL))(*(_QWORD *)((char *)a1 + v2));
}

// [6/10] Address: 0x48250
// Method: CCMenuItemToggler::unselected
__int64 __fastcall CCMenuItemToggler_unselected(cocos2d::CCMenuItem *a1)
{
  __int64 v2; // rcx

  cocos2d::CCMenuItem::unselected(a1); /*0x48259*/
  v2 = 384; /*0x4826b*/
  if ( !*((_BYTE *)a1 + 392) ) /*0x4825f*/
    v2 = 376; /*0x48270*/
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)((char *)a1 + v2) + 904LL))(*(_QWORD *)((char *)a1 + v2));
}

// [7/10] Address: 0x48290
// Method: CCMenuItemToggler::setEnabled
__int64 __fastcall CCMenuItemToggler_setEnabled(cocos2d::CCMenuItem *a1, bool a2)
{
  cocos2d::CCMenuItem::setEnabled(a1, a2); /*0x482a0*/
  (*(void (__fastcall **)(_QWORD *, bool))(**((_QWORD **)a1 + 47) + 936LL))(*((_QWORD **)a1 + 47), a2); /*0x482b4*/
  return (*(__int64 (__fastcall **)(_QWORD *, bool))(**((_QWORD **)a1 + 48) + 936LL))(*((_QWORD **)a1 + 48), a2);
}

// [8/10] Address: 0x482e0
// Method: CCMenuItemToggler::normalTouch
__int64 __fastcall CCMenuItemToggler_normalTouch(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 393) ) /*0x482e0*/
  {
    LOBYTE(a2) = 1; /*0x482e9*/
    return CCMenuItemToggler_toggle(a1, a2); /*0x482eb*/
  }
  return result; /*0x482f0*/
}

// [9/10] Address: 0x48300
// Method: CCMenuItemToggler::selectedTouch
__int64 __fastcall CCMenuItemToggler_selectedTouch(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 393) ) /*0x48300*/
    return CCMenuItemToggler_toggle(a1, 0); /*0x4830b*/
  return result; /*0x48310*/
}

// [10/10] Address: 0x48320
// Method: CCMenuItemToggler::toggle
__int64 __fastcall CCMenuItemToggler_toggle(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rcx
  const struct cocos2d::CCSize *v5; // rax
  float v7; // [rsp+30h] [rbp+8h] BYREF
  float v8; // [rsp+34h] [rbp+Ch]
  char v9; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)(a1 + 392) = a2; /*0x4832a*/
  v3 = a2; /*0x4833a*/
  LOBYTE(a2) = a2 ^ 1; /*0x4833d*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 376) + 336LL))(*(_QWORD *)(a1 + 376), a2); /*0x48343*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 384) + 336LL))(*(_QWORD *)(a1 + 384), v3); /*0x48356*/
  v4 = 384; /*0x48368*/
  if ( !*(_BYTE *)(a1 + 392) ) /*0x4835c*/
    v4 = 376; /*0x4836d*/
  v5 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + a1) + 320LL))(*(_QWORD *)(v4 + a1)); /*0x48377*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v7, v5); /*0x48385*/
  (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)a1 + 312LL))(a1, &v7); /*0x48396*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v9, v7 * 0.5, v8 * 0.5); /*0x483bd*/
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 376) + 184LL))(*(_QWORD *)(a1 + 376), &v9); /*0x483d2*/
  return (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 384) + 184LL))(*(_QWORD *)(a1 + 384), &v9); /*0x483ed*/
}
