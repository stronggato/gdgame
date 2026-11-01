
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameLevelManager.hpp>
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

GameLevelManager::~GameLevelManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GameLevelManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2195e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GameLevelManager(geode::CutoffConstructor, sizeof(GameLevelManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GameLevelManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameLevelManager::init), this);
	using FunctionType = decltype(init())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x219860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameLevelManager::blockUser(int accountID) -> decltype(blockUser(accountID)) {
	throw std::runtime_error("GameLevelManager::blockUser not implemented");
}

auto GameLevelManager::createAndGetCommentsFull(std::string p0, int p1, bool p2, CommentKeyType p3) -> decltype(createAndGetCommentsFull(p0, p1, p2, p3)) {
	using FunctionType = decltype(createAndGetCommentsFull(p0, p1, p2, p3))(*)(GameLevelManager*, std::string, int, bool, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto GameLevelManager::createAndGetScores(std::string str, GJScoreType type) -> decltype(createAndGetScores(str, type)) {
	using FunctionType = decltype(createAndGetScores(str, type))(*)(GameLevelManager*, std::string, GJScoreType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21cb00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, type);
}

auto GameLevelManager::createNewLevel() -> decltype(createNewLevel()) {
	using FunctionType = decltype(createNewLevel())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x219eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createNewLevelList() -> decltype(createNewLevelList()) {
	throw std::runtime_error("GameLevelManager::createNewLevelList not implemented");
}

auto GameLevelManager::deleteComment(int id, CommentType type, int parentID) -> decltype(deleteComment(id, type, parentID)) {
	throw std::runtime_error("GameLevelManager::deleteComment not implemented");
}

auto GameLevelManager::deleteFriendRequests(int accountID, cocos2d::CCArray* accounts, bool sent) -> decltype(deleteFriendRequests(accountID, accounts, sent)) {
	using FunctionType = decltype(deleteFriendRequests(accountID, accounts, sent))(*)(GameLevelManager*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, accounts, sent);
}

auto GameLevelManager::deleteLevel(GJGameLevel* level) -> decltype(deleteLevel(level)) {
	throw std::runtime_error("GameLevelManager::deleteLevel not implemented");
}

auto GameLevelManager::deleteLevelList(GJLevelList* list) -> decltype(deleteLevelList(list)) {
	using FunctionType = decltype(deleteLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21afe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::deleteServerLevel(int p0, std::string const& p1, std::vector<int> const& p2) -> decltype(deleteServerLevel(p0, p1, p2)) {
	using FunctionType = decltype(deleteServerLevel(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19a6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::deleteServerLevelList(int p0, std::string const& p1, std::vector<int> const& p2) -> decltype(deleteServerLevelList(p0, p1, p2)) {
	using FunctionType = decltype(deleteServerLevelList(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x244a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::downloadUserMessage(int id, bool sent) -> decltype(downloadUserMessage(id, sent)) {
	using FunctionType = decltype(downloadUserMessage(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2390c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2228a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2224e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getAccountComments(int accountID, int page, int total) -> decltype(getAccountComments(accountID, page, total)) {
	using FunctionType = decltype(getAccountComments(accountID, page, total))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ac00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, page, total);
}

auto GameLevelManager::getBasePostString() -> decltype(getBasePostString()) {
	using FunctionType = decltype(getBasePostString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedDailyLevels() -> decltype(getCompletedDailyLevels()) {
	using FunctionType = decltype(getCompletedDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedEventLevels(int minStars, int maxStars) -> decltype(getCompletedEventLevels(minStars, maxStars)) {
	using FunctionType = decltype(getCompletedEventLevels(minStars, maxStars))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, minStars, maxStars);
}

auto GameLevelManager::getCompletedWeeklyLevels() -> decltype(getCompletedWeeklyLevels()) {
	using FunctionType = decltype(getCompletedWeeklyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21df70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDemonLevelsString() -> decltype(getDemonLevelsString()) {
	using FunctionType = decltype(getDemonLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21d420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDifficultyStr(bool isNA, bool isEasy, bool isNormal, bool isHard, bool isHarder, bool isInsane, bool isDemon, bool isAuto) -> decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto)) {
	using FunctionType = decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2280f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto);
}

auto GameLevelManager::getGauntletLevels(int id) -> decltype(getGauntletLevels(id)) {
	using FunctionType = decltype(getGauntletLevels(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22f630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getGJChallenges() -> decltype(getGJChallenges()) {
	using FunctionType = decltype(getGJChallenges())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25bc40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGJSecretReward(std::string key) -> decltype(getGJSecretReward(key)) {
	using FunctionType = decltype(getGJSecretReward(key))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ffd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getLeaderboardScores(LeaderboardType type, LeaderboardStat stat) -> decltype(getLeaderboardScores(type, stat)) {
	using FunctionType = decltype(getLeaderboardScores(type, stat))(*)(GameLevelManager*, LeaderboardType, LeaderboardStat);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, stat);
}

auto GameLevelManager::getLengthStr(bool isTiny, bool isShort, bool isMedium, bool isLong, bool isXL, bool isPlat) -> decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat)) {
	using FunctionType = decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2283a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, isTiny, isShort, isMedium, isLong, isXL, isPlat);
}

auto GameLevelManager::getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype) -> decltype(getLevelComments(ID, page, total, mode, keytype)) {
	using FunctionType = decltype(getLevelComments(ID, page, total, mode, keytype))(*)(GameLevelManager*, int, int, int, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, ID, page, total, mode, keytype);
}

auto GameLevelManager::getLevelLists(GJSearchObject* object) -> decltype(getLevelLists(object)) {
	using FunctionType = decltype(getLevelLists(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x179160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getLevelRateInfo(int id) -> decltype(getLevelRateInfo(id)) {
	using FunctionType = decltype(getLevelRateInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22d130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getLocalLevelList(int uniqueID) -> decltype(getLocalLevelList(uniqueID)) {
	throw std::runtime_error("GameLevelManager::getLocalLevelList not implemented");
}

auto GameLevelManager::getMainLevel(int levelID, bool dontGetLevelString) -> decltype(getMainLevel(levelID, dontGetLevelString)) {
	using FunctionType = decltype(getMainLevel(levelID, dontGetLevelString))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x219a60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID, dontGetLevelString);
}

auto GameLevelManager::getMapPacks(GJSearchObject* object) -> decltype(getMapPacks(object)) {
	using FunctionType = decltype(getMapPacks(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getNextLevelName(std::string name) -> decltype(getNextLevelName(name)) {
	using FunctionType = decltype(getNextLevelName(name))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21a1c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto GameLevelManager::getOnlineLevels(GJSearchObject* object) -> decltype(getOnlineLevels(object)) {
	using FunctionType = decltype(getOnlineLevels(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getSavedDailyLevel(int dailyID) -> decltype(getSavedDailyLevel(dailyID)) {
	throw std::runtime_error("GameLevelManager::getSavedDailyLevel not implemented");
}

auto GameLevelManager::getSavedGauntletLevel(int id) -> decltype(getSavedGauntletLevel(id)) {
	throw std::runtime_error("GameLevelManager::getSavedGauntletLevel not implemented");
}

auto GameLevelManager::getSavedLevel(int id) -> decltype(getSavedLevel(id)) {
	throw std::runtime_error("GameLevelManager::getSavedLevel not implemented");
}

auto GameLevelManager::getSavedLevelLists(int folder) -> decltype(getSavedLevelLists(folder)) {
	using FunctionType = decltype(getSavedLevelLists(folder))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1747a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, folder);
}

auto GameLevelManager::getSplitIntFromKey(char const* key, int index) -> decltype(getSplitIntFromKey(key, index)) {
	using FunctionType = decltype(getSplitIntFromKey(key, index))(*)(GameLevelManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23bb00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, index);
}

auto GameLevelManager::getStarLevelsString() -> decltype(getStarLevelsString()) {
	using FunctionType = decltype(getStarLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21d620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getStoredOnlineLevels(char const* key) -> decltype(getStoredOnlineLevels(key)) {
	throw std::runtime_error("GameLevelManager::getStoredOnlineLevels not implemented");
}

auto GameLevelManager::getTopArtists(int page, int total) -> decltype(getTopArtists(page, total)) {
	using FunctionType = decltype(getTopArtists(page, total))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x237470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, total);
}

auto GameLevelManager::getUsers(GJSearchObject* object) -> decltype(getUsers(object)) {
	using FunctionType = decltype(getUsers(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x237c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	throw std::runtime_error("GameLevelManager::handleIt not implemented");
}

auto GameLevelManager::hasDownloadedLevel(int id) -> decltype(hasDownloadedLevel(id)) {
	throw std::runtime_error("GameLevelManager::hasDownloadedLevel not implemented");
}

auto GameLevelManager::hasLikedAccountItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedAccountItem(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedAccountItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x259740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasLikedItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedItem(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x259740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasLikedItemFullCheck(LikeItemType p0, int p1, int p2) -> decltype(hasLikedItemFullCheck(p0, p1, p2)) {
	using FunctionType = decltype(hasLikedItemFullCheck(p0, p1, p2))(*)(GameLevelManager*, LikeItemType, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2596b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::isTimeValid(char const* key, float length) -> decltype(isTimeValid(key, length)) {
	throw std::runtime_error("GameLevelManager::isTimeValid not implemented");
}

auto GameLevelManager::levelIDFromCommentKey(char const* key) -> decltype(levelIDFromCommentKey(key)) {
	using FunctionType = decltype(levelIDFromCommentKey(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfeb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::likeItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(likeItem(type, id, liked, parentID)) {
	using FunctionType = decltype(likeItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x297740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::limitSavedLevels() -> decltype(limitSavedLevels()) {
	using FunctionType = decltype(limitSavedLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2200e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::makeTimeStamp(char const* key) -> decltype(makeTimeStamp(key)) {
	using FunctionType = decltype(makeTimeStamp(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21faf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::markItemAsLiked(LikeItemType type, int id, bool liked, int parentID) -> decltype(markItemAsLiked(type, id, liked, parentID)) {
	using FunctionType = decltype(markItemAsLiked(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::markLevelAsDownloaded(int id) -> decltype(markLevelAsDownloaded(id)) {
	using FunctionType = decltype(markLevelAsDownloaded(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::onAcceptFriendRequestCompleted(std::string response, std::string tag) -> decltype(onAcceptFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onAcceptFriendRequestCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onBanUserCompleted(std::string response, std::string tag) -> decltype(onBanUserCompleted(response, tag)) {
	using FunctionType = decltype(onBanUserCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x232cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteCommentCompleted(std::string response, std::string tag) -> decltype(onDeleteCommentCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteCommentCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteUserMessagesCompleted(std::string response, std::string tag) -> decltype(onDeleteUserMessagesCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteUserMessagesCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x253440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDownloadUserMessageCompleted(std::string response, std::string tag) -> decltype(onDownloadUserMessageCompleted(response, tag)) {
	using FunctionType = decltype(onDownloadUserMessageCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGauntletsCompleted(std::string response, std::string tag) -> decltype(onGetGauntletsCompleted(response, tag)) {
	using FunctionType = decltype(onGetGauntletsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22bad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJChallengesCompleted(std::string response, std::string tag) -> decltype(onGetGJChallengesCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJChallengesCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25c0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJDailyLevelStateCompleted(std::string response, std::string tag) -> decltype(onGetGJDailyLevelStateCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJDailyLevelStateCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLeaderboardScoresCompleted(std::string response, std::string tag) -> decltype(onGetLeaderboardScoresCompleted(response, tag)) {
	using FunctionType = decltype(onGetLeaderboardScoresCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelLeaderboardCompleted(std::string response, std::string tag) -> decltype(onGetLevelLeaderboardCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelLeaderboardCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x238570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelRateInfoCompleted(std::string response, std::string tag) -> decltype(onGetLevelRateInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelRateInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c3cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelSaveDataCompleted(std::string response, std::string tag) -> decltype(onGetLevelSaveDataCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelSaveDataCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetMapPacksCompleted(std::string response, std::string tag) -> decltype(onGetMapPacksCompleted(response, tag)) {
	using FunctionType = decltype(onGetMapPacksCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetOnlineLevelsCompleted(std::string response, std::string tag) -> decltype(onGetOnlineLevelsCompleted(response, tag)) {
	using FunctionType = decltype(onGetOnlineLevelsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetTopArtistsCompleted(std::string response, std::string tag) -> decltype(onGetTopArtistsCompleted(response, tag)) {
	using FunctionType = decltype(onGetTopArtistsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22ed30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUserListCompleted(std::string response, std::string tag) -> decltype(onGetUserListCompleted(response, tag)) {
	using FunctionType = decltype(onGetUserListCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GameLevelManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x217520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GameLevelManager::onRateStarsCompleted(std::string response, std::string tag) -> decltype(onRateStarsCompleted(response, tag)) {
	using FunctionType = decltype(onRateStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x232300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRemoveFriendCompleted(std::string response, std::string tag) -> decltype(onRemoveFriendCompleted(response, tag)) {
	using FunctionType = decltype(onRemoveFriendCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRequestUserAccessCompleted(std::string response, std::string tag) -> decltype(onRequestUserAccessCompleted(response, tag)) {
	using FunctionType = decltype(onRequestUserAccessCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x259380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRestoreItemsCompleted(std::string response, std::string tag) -> decltype(onRestoreItemsCompleted(response, tag)) {
	using FunctionType = decltype(onRestoreItemsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25e1f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSuggestLevelStarsCompleted(std::string response, std::string tag) -> decltype(onSuggestLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSuggestLevelStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateDescriptionCompleted(std::string response, std::string tag) -> decltype(onUpdateDescriptionCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateDescriptionCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6bf10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateUserScoreCompleted(std::string response, std::string tag) -> decltype(onUpdateUserScoreCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateUserScoreCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadCommentCompleted(std::string response, std::string tag) -> decltype(onUploadCommentCompleted(response, tag)) {
	using FunctionType = decltype(onUploadCommentCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x237eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadFriendRequestCompleted(std::string response, std::string tag) -> decltype(onUploadFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onUploadFriendRequestCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2528e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadUserMessageCompleted(std::string response, std::string tag) -> decltype(onUploadUserMessageCompleted(response, tag)) {
	using FunctionType = decltype(onUploadUserMessageCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::processOnDownloadLevelCompleted(std::string response, std::string tag, bool update) -> decltype(processOnDownloadLevelCompleted(response, tag, update)) {
	using FunctionType = decltype(processOnDownloadLevelCompleted(response, tag, update))(*)(GameLevelManager*, std::string, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22ff60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag, update);
}

auto GameLevelManager::rateDemon(int id, int diff, bool moderator) -> decltype(rateDemon(id, diff, moderator)) {
	using FunctionType = decltype(rateDemon(id, diff, moderator))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, diff, moderator);
}

auto GameLevelManager::removeDLFromActive(char const* key) -> decltype(removeDLFromActive(key)) {
	throw std::runtime_error("GameLevelManager::removeDLFromActive not implemented");
}

auto GameLevelManager::removeUserFromList(int id, UserListType type) -> decltype(removeUserFromList(id, type)) {
	using FunctionType = decltype(removeUserFromList(id, type))(*)(GameLevelManager*, int, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::resetCommentTimersForAccountID(int id) -> decltype(resetCommentTimersForAccountID(id)) {
	using FunctionType = decltype(resetCommentTimersForAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23de00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::resetCommentTimersForLevelID(int id, CommentKeyType type) -> decltype(resetCommentTimersForLevelID(id, type)) {
	using FunctionType = decltype(resetCommentTimersForLevelID(id, type))(*)(GameLevelManager*, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23dc20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::resetStoredUserList(UserListType type) -> decltype(resetStoredUserList(type)) {
	throw std::runtime_error("GameLevelManager::resetStoredUserList not implemented");
}

auto GameLevelManager::saveFetchedLevels(cocos2d::CCArray* levels) -> decltype(saveFetchedLevels(levels)) {
	using FunctionType = decltype(saveFetchedLevels(levels))(*)(GameLevelManager*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21c2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GameLevelManager::saveLevelList(GJLevelList* list) -> decltype(saveLevelList(list)) {
	throw std::runtime_error("GameLevelManager::saveLevelList not implemented");
}

auto GameLevelManager::storeUserName(int userID, int accountID, std::string userName) -> decltype(storeUserName(userID, accountID, userName)) {
	throw std::runtime_error("GameLevelManager::storeUserName not implemented");
}

auto GameLevelManager::submitUserInfo() -> decltype(submitUserInfo()) {
	using FunctionType = decltype(submitUserInfo())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25e4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::suggestLevelStars(int p0, int p1, int p2, bool p3, int p4) -> decltype(suggestLevelStars(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(suggestLevelStars(p0, p1, p2, p3, p4))(*)(GameLevelManager*, int, int, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto GameLevelManager::updateLevel(GJGameLevel* level) -> decltype(updateLevel(level)) {
	using FunctionType = decltype(updateLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2318a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateLevelOrders() -> decltype(updateLevelOrders()) {
	using FunctionType = decltype(updateLevelOrders())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6605a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::updateLevelRewards(GJGameLevel* level) -> decltype(updateLevelRewards(level)) {
	using FunctionType = decltype(updateLevelRewards(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21bca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateUserScore() -> decltype(updateUserScore()) {
	using FunctionType = decltype(updateUserScore())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::uploadComment(std::string content, CommentType type, int levelID, int percent) -> decltype(uploadComment(content, type, levelID, percent)) {
	throw std::runtime_error("GameLevelManager::uploadComment not implemented");
}

auto GameLevelManager::uploadLevelList(GJLevelList* list) -> decltype(uploadLevelList(list)) {
	using FunctionType = decltype(uploadLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5439c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::userNameForUserID(int id) -> decltype(userNameForUserID(id)) {
	using FunctionType = decltype(userNameForUserID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21b6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::writeSpecialFilters(GJSearchObject* object) -> decltype(writeSpecialFilters(object)) {
	using FunctionType = decltype(writeSpecialFilters(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2285f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}
