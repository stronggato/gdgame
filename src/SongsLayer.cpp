#include <Geode/binding/SongsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x631aa0
// Method: SongsLayer::~SongsLayer
struct cocos2d::CCObject *__fastcall SongsLayer__dtor_SongsLayer(struct cocos2d::CCObject *Block, char a2)
{
  *(_QWORD *)Block = &SongsLayer::`vftable'; /*0x631ab3*/
  *((_QWORD *)Block + 40) = &SongsLayer::`vftable'; /*0x631ac0*/
  *((_QWORD *)Block + 41) = &SongsLayer::`vftable'; /*0x631ace*/
  *((_QWORD *)Block + 42) = &SongsLayer::`vftable'; /*0x631adc*/
  *((_QWORD *)Block + 43) = &SongsLayer::`vftable'; /*0x631aea*/
  *((_QWORD *)Block + 44) = &SongsLayer::`vftable'; /*0x631af8*/
  *((_QWORD *)Block + 51) = &SongsLayer::`vftable'; /*0x631b06*/
  *((_QWORD *)Block + 54) = &SongsLayer::`vftable'; /*0x631b14*/
  GJDropDownLayer__dtor_GJDropDownLayer(Block); /*0x631b1b*/
  if ( (a2 & 1) != 0 ) /*0x631b23*/
    j_j_free(Block); /*0x631b2d*/
  return Block; /*0x631b32*/
}

// [2/3] Address: 0x631b40
// Method: SongsLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *SongsLayer_create()
{
  cocos2d::CCObject *v0; // rbx

  v0 = (cocos2d::CCObject *)operator new(0x260u); /*0x631b50*/
  GJDropDownLayer_GJDropDownLayer((__int64)v0); /*0x631b5b*/
  *(_QWORD *)v0 = &SongsLayer::`vftable'; /*0x631b67*/
  *((_QWORD *)v0 + 40) = &SongsLayer::`vftable'; /*0x631b71*/
  *((_QWORD *)v0 + 41) = &SongsLayer::`vftable'; /*0x631b7f*/
  *((_QWORD *)v0 + 42) = &SongsLayer::`vftable'; /*0x631b8d*/
  *((_QWORD *)v0 + 43) = &SongsLayer::`vftable'; /*0x631b9b*/
  *((_QWORD *)v0 + 44) = &SongsLayer::`vftable'; /*0x631ba9*/
  *((_QWORD *)v0 + 51) = &SongsLayer::`vftable'; /*0x631bb7*/
  *((_QWORD *)v0 + 54) = &SongsLayer::`vftable'; /*0x631bc5*/
  if ( GJDropDownLayer_init((__int64 *)v0, (int)"Soundtrack", 220.0, 0) ) /*0x631be1*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x631bed*/
    return v0; /*0x631bf3*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x631c04*/
    return 0; /*0x631c07*/
  }
}

// [3/3] Address: 0x631c10
// Method: SongsLayer::customSetup
// Hidden C++ exception states: #wind=23
__int64 __fastcall SongsLayer_customSetup(__int64 a1)
{
  cocos2d::CCArray *v2; // rdi
  cocos2d::CCObject *v3; // rbx
  cocos2d::CCObject *v4; // rbx
  cocos2d::CCObject *v5; // rbx
  cocos2d::CCObject *v6; // rbx
  cocos2d::CCObject *v7; // rbx
  cocos2d::CCObject *v8; // rbx
  cocos2d::CCObject *v9; // rbx
  cocos2d::CCObject *v10; // rbx
  cocos2d::CCObject *v11; // rbx
  cocos2d::CCObject *v12; // rbx
  cocos2d::CCObject *v13; // rbx
  cocos2d::CCObject *v14; // rbx
  cocos2d::CCObject *v15; // rbx
  cocos2d::CCObject *v16; // rbx
  cocos2d::CCObject *v17; // rbx
  cocos2d::CCObject *v18; // rbx
  cocos2d::CCObject *v19; // rbx
  cocos2d::CCObject *v20; // rbx
  cocos2d::CCObject *v21; // rbx
  cocos2d::CCObject *v22; // rbx
  cocos2d::CCObject *v23; // rbx
  cocos2d::CCObject *v24; // rbx
  cocos2d::CCObject *v25; // rbx
  _QWORD *v26; // rax
  __int64 v28; // [rsp+20h] [rbp-28h]

  v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x631c2d*/
  v3 = (cocos2d::CCObject *)operator new(0x40u); /*0x631c3a*/
  *(_OWORD *)v3 = 0; /*0x631c45*/
  *((_OWORD *)v3 + 1) = 0; /*0x631c48*/
  *((_OWORD *)v3 + 2) = 0; /*0x631c4c*/
  *((_OWORD *)v3 + 3) = 0; /*0x631c50*/
  cocos2d::CCObject::CCObject(v3); /*0x631c57*/
  *(_QWORD *)v3 = &SongObject::`vftable'; /*0x631c64*/
  *((_DWORD *)v3 + 14) = 0; /*0x631c67*/
  cocos2d::CCObject::autorelease(v3); /*0x631c71*/
  cocos2d::CCArray::addObject(v2, v3); /*0x631c7d*/
  v4 = (cocos2d::CCObject *)operator new(0x40u); /*0x631c8d*/
  *(_OWORD *)v4 = 0; /*0x631c98*/
  *((_OWORD *)v4 + 1) = 0; /*0x631c9b*/
  *((_OWORD *)v4 + 2) = 0; /*0x631c9f*/
  *((_OWORD *)v4 + 3) = 0; /*0x631ca3*/
  cocos2d::CCObject::CCObject(v4); /*0x631caa*/
  *(_QWORD *)v4 = &SongObject::`vftable'; /*0x631cb0*/
  *((_DWORD *)v4 + 14) = 1; /*0x631cb3*/
  cocos2d::CCObject::autorelease(v4); /*0x631cbd*/
  cocos2d::CCArray::addObject(v2, v4); /*0x631cc9*/
  v5 = (cocos2d::CCObject *)operator new(0x40u); /*0x631cd9*/
  *(_OWORD *)v5 = 0; /*0x631ce4*/
  *((_OWORD *)v5 + 1) = 0; /*0x631ce7*/
  *((_OWORD *)v5 + 2) = 0; /*0x631ceb*/
  *((_OWORD *)v5 + 3) = 0; /*0x631cef*/
  cocos2d::CCObject::CCObject(v5); /*0x631cf6*/
  *(_QWORD *)v5 = &SongObject::`vftable'; /*0x631cfc*/
  *((_DWORD *)v5 + 14) = 2; /*0x631cff*/
  cocos2d::CCObject::autorelease(v5); /*0x631d09*/
  cocos2d::CCArray::addObject(v2, v5); /*0x631d15*/
  v6 = (cocos2d::CCObject *)operator new(0x40u); /*0x631d25*/
  *(_OWORD *)v6 = 0; /*0x631d30*/
  *((_OWORD *)v6 + 1) = 0; /*0x631d33*/
  *((_OWORD *)v6 + 2) = 0; /*0x631d37*/
  *((_OWORD *)v6 + 3) = 0; /*0x631d3b*/
  cocos2d::CCObject::CCObject(v6); /*0x631d42*/
  *(_QWORD *)v6 = &SongObject::`vftable'; /*0x631d48*/
  *((_DWORD *)v6 + 14) = 3; /*0x631d4b*/
  cocos2d::CCObject::autorelease(v6); /*0x631d55*/
  cocos2d::CCArray::addObject(v2, v6); /*0x631d61*/
  v7 = (cocos2d::CCObject *)operator new(0x40u); /*0x631d71*/
  *(_OWORD *)v7 = 0; /*0x631d7c*/
  *((_OWORD *)v7 + 1) = 0; /*0x631d7f*/
  *((_OWORD *)v7 + 2) = 0; /*0x631d83*/
  *((_OWORD *)v7 + 3) = 0; /*0x631d87*/
  cocos2d::CCObject::CCObject(v7); /*0x631d8e*/
  *(_QWORD *)v7 = &SongObject::`vftable'; /*0x631d94*/
  *((_DWORD *)v7 + 14) = 4; /*0x631d97*/
  cocos2d::CCObject::autorelease(v7); /*0x631da1*/
  cocos2d::CCArray::addObject(v2, v7); /*0x631dad*/
  v8 = (cocos2d::CCObject *)operator new(0x40u); /*0x631dbd*/
  *(_OWORD *)v8 = 0; /*0x631dc8*/
  *((_OWORD *)v8 + 1) = 0; /*0x631dcb*/
  *((_OWORD *)v8 + 2) = 0; /*0x631dcf*/
  *((_OWORD *)v8 + 3) = 0; /*0x631dd3*/
  cocos2d::CCObject::CCObject(v8); /*0x631dda*/
  *(_QWORD *)v8 = &SongObject::`vftable'; /*0x631de0*/
  *((_DWORD *)v8 + 14) = 5; /*0x631de3*/
  cocos2d::CCObject::autorelease(v8); /*0x631ded*/
  cocos2d::CCArray::addObject(v2, v8); /*0x631df9*/
  v9 = (cocos2d::CCObject *)operator new(0x40u); /*0x631e09*/
  *(_OWORD *)v9 = 0; /*0x631e14*/
  *((_OWORD *)v9 + 1) = 0; /*0x631e17*/
  *((_OWORD *)v9 + 2) = 0; /*0x631e1b*/
  *((_OWORD *)v9 + 3) = 0; /*0x631e1f*/
  cocos2d::CCObject::CCObject(v9); /*0x631e26*/
  *(_QWORD *)v9 = &SongObject::`vftable'; /*0x631e2c*/
  *((_DWORD *)v9 + 14) = 6; /*0x631e2f*/
  cocos2d::CCObject::autorelease(v9); /*0x631e39*/
  cocos2d::CCArray::addObject(v2, v9); /*0x631e45*/
  v10 = (cocos2d::CCObject *)operator new(0x40u); /*0x631e55*/
  *(_OWORD *)v10 = 0; /*0x631e60*/
  *((_OWORD *)v10 + 1) = 0; /*0x631e63*/
  *((_OWORD *)v10 + 2) = 0; /*0x631e67*/
  *((_OWORD *)v10 + 3) = 0; /*0x631e6b*/
  cocos2d::CCObject::CCObject(v10); /*0x631e72*/
  *(_QWORD *)v10 = &SongObject::`vftable'; /*0x631e78*/
  *((_DWORD *)v10 + 14) = 7; /*0x631e7b*/
  cocos2d::CCObject::autorelease(v10); /*0x631e85*/
  cocos2d::CCArray::addObject(v2, v10); /*0x631e91*/
  v11 = (cocos2d::CCObject *)operator new(0x40u); /*0x631ea1*/
  *(_OWORD *)v11 = 0; /*0x631eac*/
  *((_OWORD *)v11 + 1) = 0; /*0x631eaf*/
  *((_OWORD *)v11 + 2) = 0; /*0x631eb3*/
  *((_OWORD *)v11 + 3) = 0; /*0x631eb7*/
  cocos2d::CCObject::CCObject(v11); /*0x631ebe*/
  *(_QWORD *)v11 = &SongObject::`vftable'; /*0x631ec4*/
  *((_DWORD *)v11 + 14) = 8; /*0x631ec7*/
  cocos2d::CCObject::autorelease(v11); /*0x631ed1*/
  cocos2d::CCArray::addObject(v2, v11); /*0x631edd*/
  v12 = (cocos2d::CCObject *)operator new(0x40u); /*0x631eed*/
  *(_OWORD *)v12 = 0; /*0x631ef8*/
  *((_OWORD *)v12 + 1) = 0; /*0x631efb*/
  *((_OWORD *)v12 + 2) = 0; /*0x631eff*/
  *((_OWORD *)v12 + 3) = 0; /*0x631f03*/
  cocos2d::CCObject::CCObject(v12); /*0x631f0a*/
  *(_QWORD *)v12 = &SongObject::`vftable'; /*0x631f10*/
  *((_DWORD *)v12 + 14) = 9; /*0x631f13*/
  cocos2d::CCObject::autorelease(v12); /*0x631f1d*/
  cocos2d::CCArray::addObject(v2, v12); /*0x631f29*/
  v13 = (cocos2d::CCObject *)operator new(0x40u); /*0x631f39*/
  *(_OWORD *)v13 = 0; /*0x631f44*/
  *((_OWORD *)v13 + 1) = 0; /*0x631f47*/
  *((_OWORD *)v13 + 2) = 0; /*0x631f4b*/
  *((_OWORD *)v13 + 3) = 0; /*0x631f4f*/
  cocos2d::CCObject::CCObject(v13); /*0x631f56*/
  *(_QWORD *)v13 = &SongObject::`vftable'; /*0x631f5c*/
  *((_DWORD *)v13 + 14) = 10; /*0x631f5f*/
  cocos2d::CCObject::autorelease(v13); /*0x631f69*/
  cocos2d::CCArray::addObject(v2, v13); /*0x631f75*/
  v14 = (cocos2d::CCObject *)operator new(0x40u); /*0x631f85*/
  *(_OWORD *)v14 = 0; /*0x631f90*/
  *((_OWORD *)v14 + 1) = 0; /*0x631f93*/
  *((_OWORD *)v14 + 2) = 0; /*0x631f97*/
  *((_OWORD *)v14 + 3) = 0; /*0x631f9b*/
  cocos2d::CCObject::CCObject(v14); /*0x631fa2*/
  *(_QWORD *)v14 = &SongObject::`vftable'; /*0x631fa8*/
  *((_DWORD *)v14 + 14) = 11; /*0x631fab*/
  cocos2d::CCObject::autorelease(v14); /*0x631fb5*/
  cocos2d::CCArray::addObject(v2, v14); /*0x631fc1*/
  v15 = (cocos2d::CCObject *)operator new(0x40u); /*0x631fd1*/
  *(_OWORD *)v15 = 0; /*0x631fdc*/
  *((_OWORD *)v15 + 1) = 0; /*0x631fdf*/
  *((_OWORD *)v15 + 2) = 0; /*0x631fe3*/
  *((_OWORD *)v15 + 3) = 0; /*0x631fe7*/
  cocos2d::CCObject::CCObject(v15); /*0x631fee*/
  *(_QWORD *)v15 = &SongObject::`vftable'; /*0x631ff4*/
  *((_DWORD *)v15 + 14) = 12; /*0x631ff7*/
  cocos2d::CCObject::autorelease(v15); /*0x632001*/
  cocos2d::CCArray::addObject(v2, v15); /*0x63200d*/
  v16 = (cocos2d::CCObject *)operator new(0x40u); /*0x63201d*/
  *(_OWORD *)v16 = 0; /*0x632028*/
  *((_OWORD *)v16 + 1) = 0; /*0x63202b*/
  *((_OWORD *)v16 + 2) = 0; /*0x63202f*/
  *((_OWORD *)v16 + 3) = 0; /*0x632033*/
  cocos2d::CCObject::CCObject(v16); /*0x63203a*/
  *(_QWORD *)v16 = &SongObject::`vftable'; /*0x632040*/
  *((_DWORD *)v16 + 14) = 13; /*0x632043*/
  cocos2d::CCObject::autorelease(v16); /*0x63204d*/
  cocos2d::CCArray::addObject(v2, v16); /*0x632059*/
  v17 = (cocos2d::CCObject *)operator new(0x40u); /*0x632069*/
  *(_OWORD *)v17 = 0; /*0x632074*/
  *((_OWORD *)v17 + 1) = 0; /*0x632077*/
  *((_OWORD *)v17 + 2) = 0; /*0x63207b*/
  *((_OWORD *)v17 + 3) = 0; /*0x63207f*/
  cocos2d::CCObject::CCObject(v17); /*0x632086*/
  *(_QWORD *)v17 = &SongObject::`vftable'; /*0x63208c*/
  *((_DWORD *)v17 + 14) = 14; /*0x63208f*/
  cocos2d::CCObject::autorelease(v17); /*0x632099*/
  cocos2d::CCArray::addObject(v2, v17); /*0x6320a5*/
  v18 = (cocos2d::CCObject *)operator new(0x40u); /*0x6320b5*/
  *(_OWORD *)v18 = 0; /*0x6320c0*/
  *((_OWORD *)v18 + 1) = 0; /*0x6320c3*/
  *((_OWORD *)v18 + 2) = 0; /*0x6320c7*/
  *((_OWORD *)v18 + 3) = 0; /*0x6320cb*/
  cocos2d::CCObject::CCObject(v18); /*0x6320d2*/
  *(_QWORD *)v18 = &SongObject::`vftable'; /*0x6320d8*/
  *((_DWORD *)v18 + 14) = 15; /*0x6320db*/
  cocos2d::CCObject::autorelease(v18); /*0x6320e5*/
  cocos2d::CCArray::addObject(v2, v18); /*0x6320f1*/
  v19 = (cocos2d::CCObject *)operator new(0x40u); /*0x632101*/
  *(_OWORD *)v19 = 0; /*0x63210c*/
  *((_OWORD *)v19 + 1) = 0; /*0x63210f*/
  *((_OWORD *)v19 + 2) = 0; /*0x632113*/
  *((_OWORD *)v19 + 3) = 0; /*0x632117*/
  cocos2d::CCObject::CCObject(v19); /*0x63211e*/
  *(_QWORD *)v19 = &SongObject::`vftable'; /*0x632124*/
  *((_DWORD *)v19 + 14) = 16; /*0x632127*/
  cocos2d::CCObject::autorelease(v19); /*0x632131*/
  cocos2d::CCArray::addObject(v2, v19); /*0x63213d*/
  v20 = (cocos2d::CCObject *)operator new(0x40u); /*0x63214d*/
  *(_OWORD *)v20 = 0; /*0x632158*/
  *((_OWORD *)v20 + 1) = 0; /*0x63215b*/
  *((_OWORD *)v20 + 2) = 0; /*0x63215f*/
  *((_OWORD *)v20 + 3) = 0; /*0x632163*/
  cocos2d::CCObject::CCObject(v20); /*0x63216a*/
  *(_QWORD *)v20 = &SongObject::`vftable'; /*0x632170*/
  *((_DWORD *)v20 + 14) = 17; /*0x632173*/
  cocos2d::CCObject::autorelease(v20); /*0x63217d*/
  cocos2d::CCArray::addObject(v2, v20); /*0x632189*/
  v21 = (cocos2d::CCObject *)operator new(0x40u); /*0x632199*/
  *(_OWORD *)v21 = 0; /*0x6321a4*/
  *((_OWORD *)v21 + 1) = 0; /*0x6321a7*/
  *((_OWORD *)v21 + 2) = 0; /*0x6321ab*/
  *((_OWORD *)v21 + 3) = 0; /*0x6321af*/
  cocos2d::CCObject::CCObject(v21); /*0x6321b6*/
  *(_QWORD *)v21 = &SongObject::`vftable'; /*0x6321bc*/
  *((_DWORD *)v21 + 14) = 18; /*0x6321bf*/
  cocos2d::CCObject::autorelease(v21); /*0x6321c9*/
  cocos2d::CCArray::addObject(v2, v21); /*0x6321d5*/
  v22 = (cocos2d::CCObject *)operator new(0x40u); /*0x6321e5*/
  *(_OWORD *)v22 = 0; /*0x6321f0*/
  *((_OWORD *)v22 + 1) = 0; /*0x6321f3*/
  *((_OWORD *)v22 + 2) = 0; /*0x6321f7*/
  *((_OWORD *)v22 + 3) = 0; /*0x6321fb*/
  cocos2d::CCObject::CCObject(v22); /*0x632202*/
  *(_QWORD *)v22 = &SongObject::`vftable'; /*0x632208*/
  *((_DWORD *)v22 + 14) = 19; /*0x63220b*/
  cocos2d::CCObject::autorelease(v22); /*0x632215*/
  cocos2d::CCArray::addObject(v2, v22); /*0x632221*/
  v23 = (cocos2d::CCObject *)operator new(0x40u); /*0x632231*/
  *(_OWORD *)v23 = 0; /*0x63223c*/
  *((_OWORD *)v23 + 1) = 0; /*0x63223f*/
  *((_OWORD *)v23 + 2) = 0; /*0x632243*/
  *((_OWORD *)v23 + 3) = 0; /*0x632247*/
  cocos2d::CCObject::CCObject(v23); /*0x63224e*/
  *(_QWORD *)v23 = &SongObject::`vftable'; /*0x632254*/
  *((_DWORD *)v23 + 14) = 20; /*0x632257*/
  cocos2d::CCObject::autorelease(v23); /*0x632261*/
  cocos2d::CCArray::addObject(v2, v23); /*0x63226d*/
  v24 = (cocos2d::CCObject *)operator new(0x40u); /*0x63227d*/
  *(_OWORD *)v24 = 0; /*0x632288*/
  *((_OWORD *)v24 + 1) = 0; /*0x63228b*/
  *((_OWORD *)v24 + 2) = 0; /*0x63228f*/
  *((_OWORD *)v24 + 3) = 0; /*0x632293*/
  cocos2d::CCObject::CCObject(v24); /*0x63229a*/
  *(_QWORD *)v24 = &SongObject::`vftable'; /*0x6322a0*/
  *((_DWORD *)v24 + 14) = 21; /*0x6322a3*/
  cocos2d::CCObject::autorelease(v24); /*0x6322ad*/
  cocos2d::CCArray::addObject(v2, v24); /*0x6322b9*/
  v25 = (cocos2d::CCObject *)operator new(0x40u); /*0x6322c9*/
  *(_OWORD *)v25 = 0; /*0x6322d4*/
  *((_OWORD *)v25 + 1) = 0; /*0x6322d7*/
  *((_OWORD *)v25 + 2) = 0; /*0x6322db*/
  *((_OWORD *)v25 + 3) = 0; /*0x6322df*/
  cocos2d::CCObject::CCObject(v25); /*0x6322e6*/
  *(_QWORD *)v25 = &SongObject::`vftable'; /*0x6322ec*/
  *((_DWORD *)v25 + 14) = -1; /*0x6322ef*/
  cocos2d::CCObject::autorelease(v25); /*0x6322f9*/
  cocos2d::CCArray::addObject(v2, v25); /*0x632305*/
  v26 = CustomListView_create(v2, 0, 220.0, 356.0, v28, 11); /*0x632331*/
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 568) + 456LL))( /*0x632350*/
           *(_QWORD *)(a1 + 568),
           v26,
           6);
}
