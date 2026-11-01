#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ProfilePage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFinished
		#define GEODE_STATICS_getUserInfoFinished
		GEODE_AS_STATIC_FUNCTION(getUserInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFailed
		#define GEODE_STATICS_getUserInfoFailed
		GEODE_AS_STATIC_FUNCTION(getUserInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_userInfoChanged
		#define GEODE_STATICS_userInfoChanged
		GEODE_AS_STATIC_FUNCTION(userInfoChanged) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFinished
		#define GEODE_STATICS_loadCommentsFinished
		GEODE_AS_STATIC_FUNCTION(loadCommentsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFailed
		#define GEODE_STATICS_loadCommentsFailed
		GEODE_AS_STATIC_FUNCTION(loadCommentsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFinished
		#define GEODE_STATICS_commentUploadFinished
		GEODE_AS_STATIC_FUNCTION(commentUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFailed
		#define GEODE_STATICS_commentUploadFailed
		GEODE_AS_STATIC_FUNCTION(commentUploadFailed) 
	#endif

	#ifndef GEODE_STATICS_commentDeleteFailed
		#define GEODE_STATICS_commentDeleteFailed
		GEODE_AS_STATIC_FUNCTION(commentDeleteFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_ownsTouchPrio
		#define GEODE_STATICS_ownsTouchPrio
		GEODE_AS_STATIC_FUNCTION(ownsTouchPrio) 
	#endif

	#ifndef GEODE_STATICS_followUserFinished
		#define GEODE_STATICS_followUserFinished
		GEODE_AS_STATIC_FUNCTION(followUserFinished) 
	#endif

	#ifndef GEODE_STATICS_followUserFailed
		#define GEODE_STATICS_followUserFailed
		GEODE_AS_STATIC_FUNCTION(followUserFailed) 
	#endif

	#ifndef GEODE_STATICS_createOfflineNotice
		#define GEODE_STATICS_createOfflineNotice
		GEODE_AS_STATIC_FUNCTION(createOfflineNotice) 
	#endif

	#ifndef GEODE_STATICS_createUnfriendAlert
		#define GEODE_STATICS_createUnfriendAlert
		GEODE_AS_STATIC_FUNCTION(createUnfriendAlert) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_loadPageFromUserInfo
		#define GEODE_STATICS_loadPageFromUserInfo
		GEODE_AS_STATIC_FUNCTION(loadPageFromUserInfo) 
	#endif

	#ifndef GEODE_STATICS_onAdminPanel
		#define GEODE_STATICS_onAdminPanel
		GEODE_AS_STATIC_FUNCTION(onAdminPanel) 
	#endif

	#ifndef GEODE_STATICS_onBlockUser
		#define GEODE_STATICS_onBlockUser
		GEODE_AS_STATIC_FUNCTION(onBlockUser) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onComment
		#define GEODE_STATICS_onComment
		GEODE_AS_STATIC_FUNCTION(onComment) 
	#endif

	#ifndef GEODE_STATICS_onCommentHistory
		#define GEODE_STATICS_onCommentHistory
		GEODE_AS_STATIC_FUNCTION(onCommentHistory) 
	#endif

	#ifndef GEODE_STATICS_onCopyName
		#define GEODE_STATICS_onCopyName
		GEODE_AS_STATIC_FUNCTION(onCopyName) 
	#endif

	#ifndef GEODE_STATICS_onFollow
		#define GEODE_STATICS_onFollow
		GEODE_AS_STATIC_FUNCTION(onFollow) 
	#endif

	#ifndef GEODE_STATICS_onFriend
		#define GEODE_STATICS_onFriend
		GEODE_AS_STATIC_FUNCTION(onFriend) 
	#endif

	#ifndef GEODE_STATICS_onFriends
		#define GEODE_STATICS_onFriends
		GEODE_AS_STATIC_FUNCTION(onFriends) 
	#endif

	#ifndef GEODE_STATICS_onIconInfo
		#define GEODE_STATICS_onIconInfo
		GEODE_AS_STATIC_FUNCTION(onIconInfo) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onMessages
		#define GEODE_STATICS_onMessages
		GEODE_AS_STATIC_FUNCTION(onMessages) 
	#endif

	#ifndef GEODE_STATICS_onModInfo
		#define GEODE_STATICS_onModInfo
		GEODE_AS_STATIC_FUNCTION(onModInfo) 
	#endif

	#ifndef GEODE_STATICS_onModNotes
		#define GEODE_STATICS_onModNotes
		GEODE_AS_STATIC_FUNCTION(onModNotes) 
	#endif

	#ifndef GEODE_STATICS_onMyLevels
		#define GEODE_STATICS_onMyLevels
		GEODE_AS_STATIC_FUNCTION(onMyLevels) 
	#endif

	#ifndef GEODE_STATICS_onMyLists
		#define GEODE_STATICS_onMyLists
		GEODE_AS_STATIC_FUNCTION(onMyLists) 
	#endif

	#ifndef GEODE_STATICS_onMyStuff
		#define GEODE_STATICS_onMyStuff
		GEODE_AS_STATIC_FUNCTION(onMyStuff) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onNotifications
		#define GEODE_STATICS_onNotifications
		GEODE_AS_STATIC_FUNCTION(onNotifications) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onReportUser
		#define GEODE_STATICS_onReportUser
		GEODE_AS_STATIC_FUNCTION(onReportUser) 
	#endif

	#ifndef GEODE_STATICS_onRequests
		#define GEODE_STATICS_onRequests
		GEODE_AS_STATIC_FUNCTION(onRequests) 
	#endif

	#ifndef GEODE_STATICS_onSendMessage
		#define GEODE_STATICS_onSendMessage
		GEODE_AS_STATIC_FUNCTION(onSendMessage) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onSocialPage
		#define GEODE_STATICS_onSocialPage
		GEODE_AS_STATIC_FUNCTION(onSocialPage) 
	#endif

	#ifndef GEODE_STATICS_onStatInfo
		#define GEODE_STATICS_onStatInfo
		GEODE_AS_STATIC_FUNCTION(onStatInfo) 
	#endif

	#ifndef GEODE_STATICS_onUnblockUser
		#define GEODE_STATICS_onUnblockUser
		GEODE_AS_STATIC_FUNCTION(onUnblockUser) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_setupAccountButtons
		#define GEODE_STATICS_setupAccountButtons
		GEODE_AS_STATIC_FUNCTION(setupAccountButtons) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_showNoAccountError
		#define GEODE_STATICS_showNoAccountError
		GEODE_AS_STATIC_FUNCTION(showNoAccountError) 
	#endif

	#ifndef GEODE_STATICS_toggleShip
		#define GEODE_STATICS_toggleShip
		GEODE_AS_STATIC_FUNCTION(toggleShip) 
	#endif

	#ifndef GEODE_STATICS_unblockUser
		#define GEODE_STATICS_unblockUser
		GEODE_AS_STATIC_FUNCTION(unblockUser) 
	#endif

	#ifndef GEODE_STATICS_updateFollowButton
		#define GEODE_STATICS_updateFollowButton
		GEODE_AS_STATIC_FUNCTION(updateFollowButton) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFinished
		#define GEODE_CONCEPT_CHECK_updateUserScoreFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFailed
		#define GEODE_CONCEPT_CHECK_updateUserScoreFailed
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserInfoFinished
		#define GEODE_CONCEPT_CHECK_getUserInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(getUserInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserInfoFailed
		#define GEODE_CONCEPT_CHECK_getUserInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(getUserInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userInfoChanged
		#define GEODE_CONCEPT_CHECK_userInfoChanged
		GEODE_CONCEPT_FUNCTION_CHECK(userInfoChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCommentsFinished
		#define GEODE_CONCEPT_CHECK_loadCommentsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadCommentsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCommentsFailed
		#define GEODE_CONCEPT_CHECK_loadCommentsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadCommentsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentUploadFinished
		#define GEODE_CONCEPT_CHECK_commentUploadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(commentUploadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentUploadFailed
		#define GEODE_CONCEPT_CHECK_commentUploadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(commentUploadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentDeleteFailed
		#define GEODE_CONCEPT_CHECK_commentDeleteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(commentDeleteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownsTouchPrio
		#define GEODE_CONCEPT_CHECK_ownsTouchPrio
		GEODE_CONCEPT_FUNCTION_CHECK(ownsTouchPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followUserFinished
		#define GEODE_CONCEPT_CHECK_followUserFinished
		GEODE_CONCEPT_FUNCTION_CHECK(followUserFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followUserFailed
		#define GEODE_CONCEPT_CHECK_followUserFailed
		GEODE_CONCEPT_FUNCTION_CHECK(followUserFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blockUser
		#define GEODE_CONCEPT_CHECK_blockUser
		GEODE_CONCEPT_FUNCTION_CHECK(blockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createOfflineNotice
		#define GEODE_CONCEPT_CHECK_createOfflineNotice
		GEODE_CONCEPT_FUNCTION_CHECK(createOfflineNotice) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createUnfriendAlert
		#define GEODE_CONCEPT_CHECK_createUnfriendAlert
		GEODE_CONCEPT_FUNCTION_CHECK(createUnfriendAlert) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOnWatchlist
		#define GEODE_CONCEPT_CHECK_isOnWatchlist
		GEODE_CONCEPT_FUNCTION_CHECK(isOnWatchlist) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPage
		#define GEODE_CONCEPT_CHECK_loadPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPageFromUserInfo
		#define GEODE_CONCEPT_CHECK_loadPageFromUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(loadPageFromUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminPanel
		#define GEODE_CONCEPT_CHECK_onAdminPanel
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminPanel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBlockUser
		#define GEODE_CONCEPT_CHECK_onBlockUser
		GEODE_CONCEPT_FUNCTION_CHECK(onBlockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onComment
		#define GEODE_CONCEPT_CHECK_onComment
		GEODE_CONCEPT_FUNCTION_CHECK(onComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCommentHistory
		#define GEODE_CONCEPT_CHECK_onCommentHistory
		GEODE_CONCEPT_FUNCTION_CHECK(onCommentHistory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyName
		#define GEODE_CONCEPT_CHECK_onCopyName
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFollow
		#define GEODE_CONCEPT_CHECK_onFollow
		GEODE_CONCEPT_FUNCTION_CHECK(onFollow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFriend
		#define GEODE_CONCEPT_CHECK_onFriend
		GEODE_CONCEPT_FUNCTION_CHECK(onFriend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFriends
		#define GEODE_CONCEPT_CHECK_onFriends
		GEODE_CONCEPT_FUNCTION_CHECK(onFriends) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onIconInfo
		#define GEODE_CONCEPT_CHECK_onIconInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onIconInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMessages
		#define GEODE_CONCEPT_CHECK_onMessages
		GEODE_CONCEPT_FUNCTION_CHECK(onMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onModInfo
		#define GEODE_CONCEPT_CHECK_onModInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onModInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onModNotes
		#define GEODE_CONCEPT_CHECK_onModNotes
		GEODE_CONCEPT_FUNCTION_CHECK(onModNotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMyLevels
		#define GEODE_CONCEPT_CHECK_onMyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(onMyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMyLists
		#define GEODE_CONCEPT_CHECK_onMyLists
		GEODE_CONCEPT_FUNCTION_CHECK(onMyLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMyStuff
		#define GEODE_CONCEPT_CHECK_onMyStuff
		GEODE_CONCEPT_FUNCTION_CHECK(onMyStuff) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNotifications
		#define GEODE_CONCEPT_CHECK_onNotifications
		GEODE_CONCEPT_FUNCTION_CHECK(onNotifications) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReportUser
		#define GEODE_CONCEPT_CHECK_onReportUser
		GEODE_CONCEPT_FUNCTION_CHECK(onReportUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRequests
		#define GEODE_CONCEPT_CHECK_onRequests
		GEODE_CONCEPT_FUNCTION_CHECK(onRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSendMessage
		#define GEODE_CONCEPT_CHECK_onSendMessage
		GEODE_CONCEPT_FUNCTION_CHECK(onSendMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSocialPage
		#define GEODE_CONCEPT_CHECK_onSocialPage
		GEODE_CONCEPT_FUNCTION_CHECK(onSocialPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStatInfo
		#define GEODE_CONCEPT_CHECK_onStatInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onStatInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnblockUser
		#define GEODE_CONCEPT_CHECK_onUnblockUser
		GEODE_CONCEPT_FUNCTION_CHECK(onUnblockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupAccountButtons
		#define GEODE_CONCEPT_CHECK_setupAccountButtons
		GEODE_CONCEPT_FUNCTION_CHECK(setupAccountButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupComments
		#define GEODE_CONCEPT_CHECK_setupComments
		GEODE_CONCEPT_FUNCTION_CHECK(setupComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCommentsBrowser
		#define GEODE_CONCEPT_CHECK_setupCommentsBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showNoAccountError
		#define GEODE_CONCEPT_CHECK_showNoAccountError
		GEODE_CONCEPT_FUNCTION_CHECK(showNoAccountError) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMainPageVisibility
		#define GEODE_CONCEPT_CHECK_toggleMainPageVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMainPageVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleShip
		#define GEODE_CONCEPT_CHECK_toggleShip
		GEODE_CONCEPT_FUNCTION_CHECK(toggleShip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unblockUser
		#define GEODE_CONCEPT_CHECK_unblockUser
		GEODE_CONCEPT_FUNCTION_CHECK(unblockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFollowButton
		#define GEODE_CONCEPT_CHECK_updateFollowButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateFollowButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelsLabel
		#define GEODE_CONCEPT_CHECK_updateLevelsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelsLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageArrows
		#define GEODE_CONCEPT_CHECK_updatePageArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageArrows) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ProfilePage> : ModifyBase<ModifyDerive<Der, ProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ProfilePage>>;
		using ModifyBase<ModifyDerive<Der, ProfilePage>>::ModifyBase;
		using Base = ProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x54c7c0, Thiscall, ProfilePage)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54ca10, Default, ProfilePage, create, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46290, Thiscall, ProfilePage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x555280, Thiscall, ProfilePage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x555630, Thiscall, ProfilePage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x554af0, Thiscall, ProfilePage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5554b0, Thiscall, ProfilePage, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5555e0, Thiscall, ProfilePage, updateUserScoreFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x555ec0, Thiscall, ProfilePage, getUserInfoFinished, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x555fe0, Thiscall, ProfilePage, getUserInfoFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556030, Thiscall, ProfilePage, userInfoChanged, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5566a0, Thiscall, ProfilePage, loadCommentsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556720, Thiscall, ProfilePage, loadCommentsFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556780, Thiscall, ProfilePage, setupPageInfo, std::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5569a0, Thiscall, ProfilePage, commentUploadFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5569f0, Thiscall, ProfilePage, commentUploadFailed, int, CommentError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x556b30, Thiscall, ProfilePage, commentDeleteFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x554ef0, Thiscall, ProfilePage, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x554f40, Thiscall, ProfilePage, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x555140, Thiscall, ProfilePage, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff70, Thiscall, ProfilePage, ownsTouchPrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x553f80, Thiscall, ProfilePage, followUserFinished, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5547c0, Thiscall, ProfilePage, followUserFailed, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ProfilePage, blockUser, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, createOfflineNotice, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, createUnfriendAlert, FLAlertLayerProtocol*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54cc20, Thiscall, ProfilePage, init, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ProfilePage, isOnWatchlist, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5561f0, Thiscall, ProfilePage, loadPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, loadPageFromUserInfo, GJUserScore*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onAdminPanel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x553690, Thiscall, ProfilePage, onBlockUser, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x552f10, Thiscall, ProfilePage, onComment, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onCommentHistory, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbe610, Thiscall, ProfilePage, onCopyName, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x41c4e0, Thiscall, ProfilePage, onFollow, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onFriend, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onFriends, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onIconInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcd7b0, Thiscall, ProfilePage, onInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onMessages, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onModInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onModNotes, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x552ad0, Thiscall, ProfilePage, onMyLevels, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x552c50, Thiscall, ProfilePage, onMyLists, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onMyStuff, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ProfilePage, onNextPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onNotifications, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ProfilePage, onPrevPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onReportUser, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onRequests, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onSendMessage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x555940, Thiscall, ProfilePage, onSettings, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onSocialPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onStatInfo, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, onUnblockUser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54df70, Thiscall, ProfilePage, onUpdate, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, setupAccountButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ProfilePage, setupComments, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c780, Thiscall, ProfilePage, showNoAccountError, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ProfilePage, toggleMainPageVisibility, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, toggleShip, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, unblockUser, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ProfilePage, updateFollowButton, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ProfilePage, updateLevelsLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa7790, Thiscall, ProfilePage, updatePageArrows, )
		}
	};
}
