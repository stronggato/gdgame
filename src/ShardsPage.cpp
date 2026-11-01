#include <Geode/binding/ShardsPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x628b80
// Method: ShardsPage::onIconInfo
__int64 __fastcall ShardsPage_onIconInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2); /*0x628b8a*/
  v3 = sub_380790(*(unsigned int *)(v2 + 624), *(unsigned int *)(v2 + 628)); /*0x628b9c*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 1064LL))(v3); /*0x628bae*/
}

// [3/3] Address: 0x628c00
// Method: ShardsPage::goToPage
void __fastcall ShardsPage_goToPage(__int64 a1, int a2)
{
  int v4; // edi
  __int64 v5; // rdx
  int v6; // r12d
  __int64 v7; // r14
  struct cocos2d::CCObject *v8; // rax
  unsigned int *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *i; // rsi
  __int64 v13; // rdx
  __int64 *v14; // rsi
  const char *v15; // rbx
  __int64 v16; // rdi
  cocos2d::CCSpriteFrameCache *v17; // rax
  struct cocos2d::CCSpriteFrame *v18; // rax

  if ( (unsigned int)a2 <= 3 && a2 != *(_DWORD *)(a1 + 696) ) /*0x628c1b*/
  {
    *(_DWORD *)(a1 + 696) = a2; /*0x628c2b*/
    v4 = 0; /*0x628c48*/
    v6 = cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(a1 + 664)); /*0x628c4a*/
    if ( v6 > 0 ) /*0x628c4f*/
    {
      v7 = 0; /*0x628c56*/
      do /*0x628cb7*/
      {
        v8 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 664), v7); /*0x628c6a*/
        if ( v8 ) /*0x628c73*/
        {
          v9 = (unsigned int *)*((_QWORD *)v8 + 7); /*0x628c75*/
          v10 = *v9; /*0x628c79*/
          if ( (_DWORD)v10 ) /*0x628c7d*/
          {
            v11 = (_QWORD *)*((_QWORD *)v9 + 2); /*0x628c7f*/
            for ( i = &v11[v10 - 1]; v11 <= i; ++v11 ) /*0x628c8e*/
            {
              if ( !*v11 ) /*0x628c90*/
                break; /*0x628c96*/
              LOBYTE(v5) = v4 == a2; /*0x628c9d*/
              (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 336LL))(*v11, v5); /*0x628ca0*/
            }
          }
        }
        ++v4; /*0x628caf*/
        ++v7; /*0x628cb1*/
      }
      while ( v4 < v6 ); /*0x628cb7*/
    }
    LOBYTE(v5) = a2 > 0; /*0x628cc7*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 672) + 336LL))(*(_QWORD *)(a1 + 672), v5); /*0x628ccd*/
    LOBYTE(v13) = a2 < 3; /*0x628cdd*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 680) + 336LL))(*(_QWORD *)(a1 + 680), v13); /*0x628ce3*/
    v14 = *(__int64 **)(a1 + 688); /*0x628ce9*/
    v15 = "tier1Icon_001.png"; /*0x628cfa*/
    if ( a2 > 1 ) /*0x628d01*/
      v15 = "tier2Icon_001.png"; /*0x628d01*/
    v16 = *v14; /*0x628d05*/
    v17 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x628d08*/
    v18 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v17, v15); /*0x628d14*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v16 + 1008))(v14, v18); /*0x628d20*/
  }
}
