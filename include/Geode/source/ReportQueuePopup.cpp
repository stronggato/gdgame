
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ReportQueuePopup.hpp>
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

ReportQueuePopup::~ReportQueuePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ReportQueuePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xc6650, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ReportQueuePopup(geode::CutoffConstructor, sizeof(ReportQueuePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto ReportQueuePopup::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ReportQueuePopup::init), this);
	using FunctionType = decltype(init())(*)(ReportQueuePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc67b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ReportQueuePopup::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ReportQueuePopup::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(ReportQueuePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc8720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ReportQueuePopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ReportQueuePopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(ReportQueuePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ReportQueuePopup::dropdownSelectionChanged(Dropdown* p0, int p1) -> decltype(dropdownSelectionChanged(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<Dropdown*, int>::func(&ReportQueuePopup::dropdownSelectionChanged), this);
	using FunctionType = decltype(dropdownSelectionChanged(p0, p1))(*)(ReportQueuePopup*, Dropdown*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc8780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ReportQueuePopup::adminReportQueueFinished(cocos2d::CCArray* p0, int p1, int p2, int p3) -> decltype(adminReportQueueFinished(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, int, int, int>::func(&ReportQueuePopup::adminReportQueueFinished), this);
	using FunctionType = decltype(adminReportQueueFinished(p0, p1, p2, p3))(*)(ReportQueuePopup*, cocos2d::CCArray*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc70e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto ReportQueuePopup::adminReportQueueFailed() -> decltype(adminReportQueueFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ReportQueuePopup::adminReportQueueFailed), this);
	using FunctionType = decltype(adminReportQueueFailed())(*)(ReportQueuePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc7210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}
