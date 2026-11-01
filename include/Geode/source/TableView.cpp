
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TableView.hpp>
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

auto TableView::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableView::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableView::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableView::onExit), this);
	using FunctionType = decltype(onExit())(*)(TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x880a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableView::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&TableView::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x880b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto TableView::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&TableView::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto TableView::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&TableView::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto TableView::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&TableView::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x882e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto TableView::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableView::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableView::scrollWheel(float y, float x) -> decltype(scrollWheel(y, x)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&TableView::scrollWheel), this);
	using FunctionType = decltype(scrollWheel(y, x))(*)(TableView*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, y, x);
}

auto TableView::checkBoundaryOfContent(float dt) -> decltype(checkBoundaryOfContent(dt)) {
	using FunctionType = decltype(checkBoundaryOfContent(dt))(*)(TableView*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto TableView::checkFirstCell(TableViewCell* cell) -> decltype(checkFirstCell(cell)) {
	using FunctionType = decltype(checkFirstCell(cell))(*)(TableView*, TableViewCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x891c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, cell);
}

auto TableView::isDuplicateIndexPath(CCIndexPath& path) -> decltype(isDuplicateIndexPath(path)) {
	using FunctionType = decltype(isDuplicateIndexPath(path))(*)(TableView*, CCIndexPath&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto TableView::isDuplicateInVisibleCellArray(CCIndexPath* path) -> decltype(isDuplicateInVisibleCellArray(path)) {
	using FunctionType = decltype(isDuplicateInVisibleCellArray(path))(*)(TableView*, CCIndexPath*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto TableView::reloadData() -> decltype(reloadData()) {
	using FunctionType = decltype(reloadData())(*)(TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TableView::touchFinish(cocos2d::CCTouch* touch) -> decltype(touchFinish(touch)) {
	using FunctionType = decltype(touchFinish(touch))(*)(TableView*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6228c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, touch);
}
