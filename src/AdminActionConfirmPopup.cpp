#include <Geode/Bindings.hpp>
#include <Geode/binding/AdminActionConfirmPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0xa4020
// Method: AdminActionConfirmPopup::~AdminActionConfirmPopup
AdminActionConfirmPopup::~AdminActionConfirmPopup()
{
  auto Block = (char*)this;
  auto a1 = (char*)this;
  char a2 = 0;

  sub_3DA90(Block + 1080); /*0xa4036*/
  sub_685C0(Block + 1056); /*0xa4042*/
  sub_3C310(Block + 1016); /*0xa404e*/
// //   UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0xa4056*/ // cleaned dtor call // cleaned dtor call
// //   if ( (a2 & 1) != 0 ) /*0xa405e*/
// //     j_j_free(Block); /*0xa4068*/ // cleaned scalar delete // cleaned scalar delete
  return; /*0xa406d*/
}

// [2/2] Address: 0xa53c0
// Method: AdminActionConfirmPopup::onClose
void AdminActionConfirmPopup::onClose(cocos2d::CCObject* sender)
{
  auto a1 = (char*)this;
  auto a2 = sender;

  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1048); /*0xa53ca*/
  if ( v1 ) /*0xa53da*/
  {
    *(_QWORD *)(v1 + 608) = 0; /*0xa53dc*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1048) + 1032LL))(*(_QWORD *)(a1 + 1048), 0); /*0xa53f3*/
  }
  SetupTriggerPopup_onClose(a1); return; /*0xa53ff*/
}
