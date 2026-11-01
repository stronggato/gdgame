#include <Geode/binding/StatsCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x14c3f0
// Method: StatsCell::loadFromObject
__int64 __fastcall StatsCell_loadFromObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rcx
  const char *v7; // rax
  struct cocos2d::CCLabelBMFont *v8; // rsi
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  char v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2; /*0x14c413*/
  LOBYTE(a2) = -1; /*0x14c422*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 408LL) + 40LL))( /*0x14c427*/
    *(_QWORD *)(a1 + 536) + 408LL,
    a2);
  LOBYTE(v4) = 1; /*0x14c431*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), v4); /*0x14c436*/
  v5 = *(_DWORD *)(v3 + 64); /*0x14c440*/
  v7 = ColorSelectPopup_hexToColor(v6, *(_QWORD *)(v3 + 56)); /*0x14c443*/
  v8 = cocos2d::CCLabelBMFont::create(v7, "goldFont.fnt"); /*0x14c45f*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))( /*0x14c46f*/
    *(_QWORD *)(a1 + 544),
    v8);
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v8 + 320LL))(v8) > 200.0 ) /*0x14c498*/
  {
    fminf( /*0x14c4b3*/
      1.0,
      200.0 / *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v8 + 320LL))(v8));
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v8 + 160LL))(v8); /*0x14c4b7*/
  }
  v9 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v5); /*0x14c4c6*/
  CString = cocos2d::CCString::getCString(v9); /*0x14c4cf*/
  v11 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt"); /*0x14c4ec*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))( /*0x14c4fc*/
    *(_QWORD *)(a1 + 544),
    v11);
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 320LL))(v11) > 100.0 ) /*0x14c51d*/
  {
    fminf( /*0x14c538*/
      1.0,
      100.0 / *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 320LL))(v11));
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 160LL))(v11); /*0x14c53c*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v8 + 168LL))(v8); /*0x14c548*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v8 + 160LL))(v8); /*0x14c55f*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 168LL))(v11); /*0x14c56b*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 160LL))(v11); /*0x14c582*/
  v12 = *(_QWORD *)v8; /*0x14c595*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 0.0, 0.5); /*0x14c59e*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 288))(v8, v13); /*0x14c5aa*/
  v14 = *(_QWORD *)v11; /*0x14c5b0*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 1.0, 0.5); /*0x14c5be*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v14 + 288))(v11, v15); /*0x14c5ca*/
  v16 = *(_QWORD *)v8; /*0x14c5e5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 20.0, (float)(*(float *)(a1 + 532) * 0.5) - 1.0); /*0x14c5f0*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v16 + 184))(v8, v17); /*0x14c5fc*/
  v18 = *(_QWORD *)v11; /*0x14c617*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 330.0, (float)(*(float *)(a1 + 532) * 0.5) - 1.0); /*0x14c622*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v18 + 184))(v11, v19); /*0x14c634*/
}
