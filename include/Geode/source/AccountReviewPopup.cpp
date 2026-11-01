
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountReviewPopup.hpp>
#include <Geode/cocos/platform/win32/CCFileUtilsWin32.h>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

AccountReviewPopup::~AccountReviewPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AccountReviewPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xadf70, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AccountReviewPopup(geode::CutoffConstructor, sizeof(AccountReviewPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto AccountReviewPopup::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::clearPageContent() -> decltype(clearPageContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::clearPageContent), this);
	using FunctionType = decltype(clearPageContent())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AccountReviewPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xae210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AccountReviewPopup::dropdownSelectionChanged(Dropdown* p0, int p1) -> decltype(dropdownSelectionChanged(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<Dropdown*, int>::func(&AccountReviewPopup::dropdownSelectionChanged), this);
	using FunctionType = decltype(dropdownSelectionChanged(p0, p1))(*)(AccountReviewPopup*, Dropdown*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::reviewChoicePicked(int p0, int p1, std::string const& p2) -> decltype(reviewChoicePicked(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, int, std::string const&>::func(&AccountReviewPopup::reviewChoicePicked), this);
	using FunctionType = decltype(reviewChoicePicked(p0, p1, p2))(*)(AccountReviewPopup*, int, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb9690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&AccountReviewPopup::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(AccountReviewPopup*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbb800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AccountReviewPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(AccountReviewPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xba270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&AccountReviewPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(AccountReviewPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbbc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::commentDeleteFailed(int p0, int p1) -> decltype(commentDeleteFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::commentDeleteFailed), this);
	using FunctionType = decltype(commentDeleteFailed(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbad40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbacf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbad10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminAccountReviewFinished(int p0, AccountReviewCard const& p1) -> decltype(adminAccountReviewFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, AccountReviewCard const&>::func(&AccountReviewPopup::adminAccountReviewFinished), this);
	using FunctionType = decltype(adminAccountReviewFinished(p0, p1))(*)(AccountReviewPopup*, int, AccountReviewCard const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xafbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminAccountReviewFailed(int p0) -> decltype(adminAccountReviewFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminAccountReviewFailed), this);
	using FunctionType = decltype(adminAccountReviewFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xafef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminReportedContentFinished(int p0, cocos2d::CCArray* p1, AdminReportedMeta const& p2) -> decltype(adminReportedContentFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, AdminReportedMeta const&>::func(&AccountReviewPopup::adminReportedContentFinished), this);
	using FunctionType = decltype(adminReportedContentFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, AdminReportedMeta const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb27b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminReportedContentFailed(int p0) -> decltype(adminReportedContentFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminReportedContentFailed), this);
	using FunctionType = decltype(adminReportedContentFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminAbuseInfoFinished(int p0, cocos2d::CCArray* p1, AdminAbuseMeta const& p2) -> decltype(adminAbuseInfoFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, AdminAbuseMeta const&>::func(&AccountReviewPopup::adminAbuseInfoFinished), this);
	using FunctionType = decltype(adminAbuseInfoFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, AdminAbuseMeta const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb29d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminAbuseInfoFailed(int p0) -> decltype(adminAbuseInfoFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminAbuseInfoFailed), this);
	using FunctionType = decltype(adminAbuseInfoFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminUserHistoryFinished(int p0, cocos2d::CCArray* p1, int p2, int p3, int p4) -> decltype(adminUserHistoryFinished(p0, p1, p2, p3, p4)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, int, int, int>::func(&AccountReviewPopup::adminUserHistoryFinished), this);
	using FunctionType = decltype(adminUserHistoryFinished(p0, p1, p2, p3, p4))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3, p4);
}

auto AccountReviewPopup::adminUserHistoryFailed(int p0) -> decltype(adminUserHistoryFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminUserHistoryFailed), this);
	using FunctionType = decltype(adminUserHistoryFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminClearReportsFinished(int p0, int p1) -> decltype(adminClearReportsFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::adminClearReportsFinished), this);
	using FunctionType = decltype(adminClearReportsFinished(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb9c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminClearReportsFailed(int p0) -> decltype(adminClearReportsFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminClearReportsFailed), this);
	using FunctionType = decltype(adminClearReportsFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb9ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminDeleteCommentsFinished(int p0) -> decltype(adminDeleteCommentsFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminDeleteCommentsFinished), this);
	using FunctionType = decltype(adminDeleteCommentsFinished(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbba40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminDeleteCommentsFailed() -> decltype(adminDeleteCommentsFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::adminDeleteCommentsFailed), this);
	using FunctionType = decltype(adminDeleteCommentsFailed())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbbb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::adminCloseCaseFinished(int p0, int p1, bool p2) -> decltype(adminCloseCaseFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, int, bool>::func(&AccountReviewPopup::adminCloseCaseFinished), this);
	using FunctionType = decltype(adminCloseCaseFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbbd20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminCloseCaseFailed(int p0) -> decltype(adminCloseCaseFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminCloseCaseFailed), this);
	using FunctionType = decltype(adminCloseCaseFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
