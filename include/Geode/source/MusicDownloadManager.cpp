
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
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

MusicDownloadManager::~MusicDownloadManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MusicDownloadManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x47f160, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MusicDownloadManager(geode::CutoffConstructor, sizeof(MusicDownloadManager));
		geode::DestructorLock::addLock(this);
	}
}

auto MusicDownloadManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6cc60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto MusicDownloadManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicDownloadManager::init), this);
	using FunctionType = decltype(init())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicDownloadManager::addDLToActive(char const* tag, cocos2d::CCObject* obj) -> decltype(addDLToActive(tag, obj)) {
	using FunctionType = decltype(addDLToActive(tag, obj))(*)(MusicDownloadManager*, char const*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4810f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag, obj);
}

auto MusicDownloadManager::addMusicDownloadDelegate(MusicDownloadDelegate* delegate) -> decltype(addMusicDownloadDelegate(delegate)) {
	using FunctionType = decltype(addMusicDownloadDelegate(delegate))(*)(MusicDownloadManager*, MusicDownloadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::addSongObjectFromString(std::string str) -> decltype(addSongObjectFromString(str)) {
	using FunctionType = decltype(addSongObjectFromString(str))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a1e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto MusicDownloadManager::clearUnusedSongs() -> decltype(clearUnusedSongs()) {
	using FunctionType = decltype(clearUnusedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::downloadCustomSong(int id) -> decltype(downloadCustomSong(id)) {
	using FunctionType = decltype(downloadCustomSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x489240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSFX(int id) -> decltype(downloadSFX(id)) {
	using FunctionType = decltype(downloadSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48be40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSFXLibrary() -> decltype(downloadSFXLibrary()) {
	throw std::runtime_error("MusicDownloadManager::downloadSFXLibrary not implemented");
}

auto MusicDownloadManager::downloadSongStarted(int id) -> decltype(downloadSongStarted(id)) {
	using FunctionType = decltype(downloadSongStarted(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::filterMusicByArtistID(int id, cocos2d::CCArray* songs) -> decltype(filterMusicByArtistID(id, songs)) {
	throw std::runtime_error("MusicDownloadManager::filterMusicByArtistID not implemented");
}

auto MusicDownloadManager::filterMusicByTag(int id, cocos2d::CCArray* songs) -> decltype(filterMusicByTag(id, songs)) {
	throw std::runtime_error("MusicDownloadManager::filterMusicByTag not implemented");
}

auto MusicDownloadManager::generateCustomContentURL(std::string path) -> decltype(generateCustomContentURL(path)) {
	using FunctionType = decltype(generateCustomContentURL(path))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48da30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto MusicDownloadManager::getCustomContentURL() -> decltype(getCustomContentURL()) {
	using FunctionType = decltype(getCustomContentURL())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getDLObject(char const* id) -> decltype(getDLObject(id)) {
	throw std::runtime_error("MusicDownloadManager::getDLObject not implemented");
}

auto MusicDownloadManager::getDownloadedSongs() -> decltype(getDownloadedSongs()) {
	using FunctionType = decltype(getDownloadedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4806a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getSongInfoObject(int id) -> decltype(getSongInfoObject(id)) {
	using FunctionType = decltype(getSongInfoObject(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(MusicDownloadManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto MusicDownloadManager::isRunningActionForSongID(int id) -> decltype(isRunningActionForSongID(id)) {
	using FunctionType = decltype(isRunningActionForSongID(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isSongDownloaded(int id) -> decltype(isSongDownloaded(id)) {
	throw std::runtime_error("MusicDownloadManager::isSongDownloaded not implemented");
}

auto MusicDownloadManager::loadSongInfoFinished(SongInfoObject* object) -> decltype(loadSongInfoFinished(object)) {
	using FunctionType = decltype(loadSongInfoFinished(object))(*)(MusicDownloadManager*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto MusicDownloadManager::onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSFXCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSFXCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc58f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSongCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSongCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSongCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onGetSongInfoCompleted(std::string response, std::string tag) -> decltype(onGetSongInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetSongInfoCompleted(response, tag))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c89a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::parseMusicLibrary() -> decltype(parseMusicLibrary()) {
	throw std::runtime_error("MusicDownloadManager::parseMusicLibrary not implemented");
}

auto MusicDownloadManager::parseSFXLibrary() -> decltype(parseSFXLibrary()) {
	using FunctionType = decltype(parseSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ca40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::pathForSFX(int id) -> decltype(pathForSFX(id)) {
	using FunctionType = decltype(pathForSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSong(int id) -> decltype(pathForSong(id)) {
	using FunctionType = decltype(pathForSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::ProcessHttpGetRequest(std::string url, std::string tag, cocos2d::extension::SEL_HttpResponse selector, int connectTimeout, int readTimeout) -> decltype(ProcessHttpGetRequest(url, tag, selector, connectTimeout, readTimeout)) {
	using FunctionType = decltype(ProcessHttpGetRequest(url, tag, selector, connectTimeout, readTimeout))(*)(MusicDownloadManager*, std::string, std::string, cocos2d::extension::SEL_HttpResponse, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ee00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url, tag, selector, connectTimeout, readTimeout);
}

auto MusicDownloadManager::ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(MusicDownloadManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ecc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto MusicDownloadManager::removeDLFromActive(char const* tag) -> decltype(removeDLFromActive(tag)) {
	throw std::runtime_error("MusicDownloadManager::removeDLFromActive not implemented");
}

auto MusicDownloadManager::removeMusicDownloadDelegate(MusicDownloadDelegate* delegate) -> decltype(removeMusicDownloadDelegate(delegate)) {
	using FunctionType = decltype(removeMusicDownloadDelegate(delegate))(*)(MusicDownloadManager*, MusicDownloadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::showTOS(FLAlertLayerProtocol* delegate) -> decltype(showTOS(delegate)) {
	using FunctionType = decltype(showTOS(delegate))(*)(MusicDownloadManager*, FLAlertLayerProtocol*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::songStateChanged() -> decltype(songStateChanged()) {
	using FunctionType = decltype(songStateChanged())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
