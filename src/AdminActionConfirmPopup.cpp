#include <Geode/binding/AdminActionConfirmPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0xa4020
// Method: AdminActionConfirmPopup::~AdminActionConfirmPopup
char *__fastcall AdminActionConfirmPopup__dtor_AdminActionConfirmPopup(char *Block, char a2)
{
  sub_3DA90(Block + 1080); /*0xa4036*/
  sub_685C0(Block + 1056); /*0xa4042*/
  sub_3C310(Block + 1016); /*0xa404e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0xa4056*/
  if ( (a2 & 1) != 0 ) /*0xa405e*/
    j_j_free(Block); /*0xa4068*/
  return Block; /*0xa406d*/
}

// [2/2] Address: 0xa53c0
// Method: AdminActionConfirmPopup::onClose
__int64 __fastcall AdminActionConfirmPopup_onClose(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1048); /*0xa53ca*/
  if ( v1 ) /*0xa53da*/
  {
    *(_QWORD *)(v1 + 608) = 0; /*0xa53dc*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1048) + 1032LL))(*(_QWORD *)(a1 + 1048), 0); /*0xa53f3*/
  }
  return SetupTriggerPopup_onClose(a1); /*0xa53ff*/
}
