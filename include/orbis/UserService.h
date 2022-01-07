Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@xXxTheDarkprogramerxXx 
OpenOrbis
/
OpenOrbis-PS4-Toolchain
Public
Code
Issues
13
Pull requests
1
Actions
Projects
1
Wiki
Security
Insights
OpenOrbis-PS4-Toolchain/include/orbis/UserService.h
@bucanero
bucanero clean up
Latest commit 4b58032 29 days ago
 History
 4 contributors
@bucanero@Cryptogenic@xXxTheDarkprogramerxXx@0x199
359 lines (353 sloc)  14.9 KB
   
#ifndef _SCE_USER_SERVICE_H_
#define _SCE_USER_SERVICE_H_

#include <stddef.h>
#include <stdint.h>
#include <orbis/_types/user.h>
#include <orbis/_types/errors.h>

#ifdef __cplusplus 
extern "C" {
#endif

int sceUserServiceGetInitialUser(int *);
int sceUserServiceGetUserName(int, char *, const size_t);
int sceUserServiceInitialize(void *);
int sceUserServiceGetLoginUserIdList(OrbisUserServiceLoginUserIdList *);
int sceUserServiceGetForegroundUser(int* user_id);
int sceUserServiceGetNpAccountId(const OrbisUserServiceUserId, uint64_t *account_id);
int sceUserServiceGetUserColor(const OrbisUserServiceUserId, OrbisUserServiceUserColor *);

void sceUserServiceDestroyUser();
void sceUserServiceGetAccessibilityKeyremapData();
void sceUserServiceGetAccessibilityKeyremapEnable();
void sceUserServiceGetAccessibilityZoom();
void sceUserServiceGetAccountRemarks();
void sceUserServiceGetAgeVerified();
void sceUserServiceGetAppearOfflineSetting();
void sceUserServiceGetAppSortOrder();
void sceUserServiceGetAutoLoginEnabled();
void sceUserServiceGetCreatedVersion();
void sceUserServiceGetCurrentUserGroupIndex();
void sceUserServiceGetDefaultNewUserGroupName();
void sceUserServiceGetDeletedUserInfo();
void sceUserServiceGetDiscPlayerFlag();
void sceUserServiceGetEvent();
void sceUserServiceGetEventCalendarType();
void sceUserServiceGetEventFilterTeamEvent();
void sceUserServiceGetEventSortEvent();
void sceUserServiceGetEventSortTitle();
void sceUserServiceGetEventUiFlag();
void sceUserServiceGetEventVsh();
void sceUserServiceGetFaceRecognitionDeleteCount();
void sceUserServiceGetFaceRecognitionRegisterCount();
void sceUserServiceGetFileBrowserFilter();
void sceUserServiceGetFileBrowserSortContent();
void sceUserServiceGetFileBrowserSortTitle();
void sceUserServiceGetFileSelectorFilter();
void sceUserServiceGetFileSelectorSortContent();
void sceUserServiceGetFileSelectorSortTitle();
void sceUserServiceGetFriendCustomListLastFocus();
void sceUserServiceGetFriendFlag();
void sceUserServiceGetGlsAccessTokenNiconicoLive();
void sceUserServiceGetGlsAccessTokenTwitch();
void sceUserServiceGetGlsAccessTokenUstream();
void sceUserServiceGetGlsAnonymousUserId();
void sceUserServiceGetGlsBcTags();
void sceUserServiceGetGlsBcTitle();
void sceUserServiceGetGlsBroadcastChannel();
void sceUserServiceGetGlsBroadcastersComment();
void sceUserServiceGetGlsBroadcastersCommentColor();
void sceUserServiceGetGlsBroadcastService();
void sceUserServiceGetGlsBroadcastUiLayout();
void sceUserServiceGetGlsCamCrop();
void sceUserServiceGetGlsCameraBgFilter();
void sceUserServiceGetGlsCameraBrightness();
void sceUserServiceGetGlsCameraChromaKeyLevel();
void sceUserServiceGetGlsCameraContrast();
void sceUserServiceGetGlsCameraDepthLevel();
void sceUserServiceGetGlsCameraEdgeLevel();
void sceUserServiceGetGlsCameraEffect();
void sceUserServiceGetGlsCameraEliminationLevel();
void sceUserServiceGetGlsCameraPosition();
void sceUserServiceGetGlsCameraReflection();
void sceUserServiceGetGlsCameraSize();
void sceUserServiceGetGlsCameraTransparency();
void sceUserServiceGetGlsCommunityId();
void sceUserServiceGetGlsFloatingMessage();
void sceUserServiceGetGlsHintFlag();
void sceUserServiceGetGlsInitSpectating();
void sceUserServiceGetGlsIsCameraHidden();
void sceUserServiceGetGlsIsFacebookEnabled();
void sceUserServiceGetGlsIsMuteEnabled();
void sceUserServiceGetGlsIsRecDisabled();
void sceUserServiceGetGlsIsRecievedMessageHidden();
void sceUserServiceGetGlsIsTwitterEnabled();
void sceUserServiceGetGlsLanguageFilter();
void sceUserServiceGetGlsLfpsSortOrder();
void sceUserServiceGetGlsLiveQuality();
void sceUserServiceGetGlsLiveQuality2();
void sceUserServiceGetGlsLiveQuality3();
void sceUserServiceGetGlsLiveQuality4();
void sceUserServiceGetGlsLiveQuality5();
void sceUserServiceGetGlsMessageFilterLevel();
void sceUserServiceGetGlsTtsFlags();
void sceUserServiceGetGlsTtsPitch();
void sceUserServiceGetGlsTtsSpeed();
void sceUserServiceGetGlsTtsVolume();
void sceUserServiceGetHmuBrightness();
void sceUserServiceGetHmuZoom();
void sceUserServiceGetHoldAudioOutDevice();
void sceUserServiceGetHomeDirectory();
void sceUserServiceGetImeAutoCapitalEnabled();
void sceUserServiceGetImeInitFlag();
void sceUserServiceGetImeInputType();
void sceUserServiceGetImeLastUnit();
void sceUserServiceGetImePointerMode();
void sceUserServiceGetImePredictiveTextEnabled();
void sceUserServiceGetImeRunCount();
void sceUserServiceGetIPDLeft();
void sceUserServiceGetIPDRight();
void sceUserServiceGetIsFakePlus();
void sceUserServiceGetIsQuickSignup();
void sceUserServiceGetIsRemotePlayAllowed();
void sceUserServiceGetJapaneseInputType();
void sceUserServiceGetKeyboardType();
void sceUserServiceGetKeyRepeatSpeed();
void sceUserServiceGetKeyRepeatStartingTime();
void sceUserServiceGetKratosPrimaryUser();
void sceUserServiceGetLastLoginOrder();
void sceUserServiceGetLightBarBaseBrightness();
void sceUserServiceGetLoginFlag();
void sceUserServiceGetMicLevel();
void sceUserServiceGetMouseHandType();
void sceUserServiceGetMousePointerSpeed();
void sceUserServiceGetNotificationBehavior();
void sceUserServiceGetNotificationSettings();
void sceUserServiceGetNpAccountUpgradeFlag();
void sceUserServiceGetNpAuthErrorFlag();
void sceUserServiceGetNpEnv();
void sceUserServiceGetNpLoginId();
void sceUserServiceGetNpOfflineAccountAdult();
void sceUserServiceGetNpOfflineAccountId();
void sceUserServiceGetNpSubAccount();
void sceUserServiceGetPadSpeakerVolume();
void sceUserServiceGetParentalBdAge();
void sceUserServiceGetParentalBrowser();
void sceUserServiceGetParentalDvd();
void sceUserServiceGetParentalDvdRegion();
void sceUserServiceGetParentalGame();
void sceUserServiceGetParentalMorpheus();
void sceUserServiceGetPartyMuteList();
void sceUserServiceGetPartyMuteListA();
void sceUserServiceGetPartySettingFlags();
void sceUserServiceGetPasscode();
void sceUserServiceGetPlayTogetherFlags();
void sceUserServiceGetPsnPasswordForDebug();
void sceUserServiceGetRegisteredHomeUserIdList();
void sceUserServiceGetRegisteredUserIdList();
void sceUserServiceGetSaveDataAutoUpload();
void sceUserServiceGetSaveDataSort();
void sceUserServiceGetSaveDataTutorialFlag();
void sceUserServiceGetSecureHomeDirectory();
void sceUserServiceGetShareButtonAssign();
void sceUserServiceGetShareDailymotionAccessToken();
void sceUserServiceGetShareDailymotionRefreshToken();
void sceUserServiceGetSharePlayFlags();
void sceUserServiceGetSharePlayFramerateHost();
void sceUserServiceGetSharePlayResolutionHost();
void sceUserServiceGetShareStatus();
void sceUserServiceGetShareStatus2();
void sceUserServiceGetSystemLoggerHashedAccountId();
void sceUserServiceGetSystemLoggerHashedAccountIdClockType();
void sceUserServiceGetSystemLoggerHashedAccountIdParam();
void sceUserServiceGetSystemLoggerHashedAccountIdTtl();
void sceUserServiceGetTeamShowAboutTeam();
void sceUserServiceGetThemeBgImageDimmer();
void sceUserServiceGetThemeBgImageWaveColor();
void sceUserServiceGetThemeBgImageZoom();
void sceUserServiceGetThemeEntitlementId();
void sceUserServiceGetThemeHomeShareOwner();
void sceUserServiceGetThemeTextShadow();
void sceUserServiceGetThemeWaveColor();
void sceUserServiceGetTopMenuLimitItem();
void sceUserServiceGetTopMenuNotificationFlag();
void sceUserServiceGetTopMenuTutorialFlag();
void sceUserServiceGetTraditionalChineseInputType();
void sceUserServiceGetUserGroupName();
void sceUserServiceGetUserGroupNameList();
void sceUserServiceGetUserGroupNum();
void sceUserServiceGetUserStatus();
void sceUserServiceGetVibrationEnabled();
void sceUserServiceGetVoiceRecognitionTutorialState();
void sceUserServiceGetVolumeForController();
void sceUserServiceGetVolumeForGenericUSB();
void sceUserServiceGetVolumeForMorpheusSidetone();
void sceUserServiceGetVolumeForSidetone();
void sceUserServiceInitialize2();
void sceUserServiceIsGuestUser();
void sceUserServiceIsKratosPrimaryUser();
void sceUserServiceIsKratosUser();
void sceUserServiceIsLoggedIn();
void sceUserServiceIsLoggedInWithoutLock();
void sceUserServiceIsSharePlayClientUser();
void sceUserServiceIsUserStorageAccountBound();
void sceUserServiceLogin();
void sceUserServiceLogout();
void sceUserServiceRegisterEventCallback();
void sceUserServiceSetAccessibilityKeyremapData();
void sceUserServiceSetAccessibilityKeyremapEnable();
void sceUserServiceSetAccessibilityZoom();
void sceUserServiceSetAccountRemarks();
void sceUserServiceSetAgeVerified();
void sceUserServiceSetAppearOfflineSetting();
void sceUserServiceSetAppSortOrder();
void sceUserServiceSetAutoLoginEnabled();
void sceUserServiceSetCreatedVersion();
void sceUserServiceSetDiscPlayerFlag();
void sceUserServiceSetEventCalendarType();
void sceUserServiceSetEventFilterTeamEvent();
void sceUserServiceSetEventSortEvent();
void sceUserServiceSetEventSortTitle();
void sceUserServiceSetEventUiFlag();
void sceUserServiceSetFaceRecognitionDeleteCount();
void sceUserServiceSetFaceRecognitionRegisterCount();
void sceUserServiceSetFileBrowserFilter();
void sceUserServiceSetFileBrowserSortContent();
void sceUserServiceSetFileBrowserSortTitle();
void sceUserServiceSetFileSelectorFilter();
void sceUserServiceSetFileSelectorSortContent();
void sceUserServiceSetFileSelectorSortTitle();
void sceUserServiceSetForegroundUser();
void sceUserServiceSetFriendCustomListLastFocus();
void sceUserServiceSetFriendFlag();
void sceUserServiceSetGlsAccessTokenNiconicoLive();
void sceUserServiceSetGlsAccessTokenTwitch();
void sceUserServiceSetGlsAccessTokenUstream();
void sceUserServiceSetGlsAnonymousUserId();
void sceUserServiceSetGlsBcTags();
void sceUserServiceSetGlsBcTitle();
void sceUserServiceSetGlsBroadcastChannel();
void sceUserServiceSetGlsBroadcastersComment();
void sceUserServiceSetGlsBroadcastersCommentColor();
void sceUserServiceSetGlsBroadcastService();
void sceUserServiceSetGlsBroadcastUiLayout();
void sceUserServiceSetGlsCamCrop();
void sceUserServiceSetGlsCameraBgFilter();
void sceUserServiceSetGlsCameraBrightness();
void sceUserServiceSetGlsCameraChromaKeyLevel();
void sceUserServiceSetGlsCameraContrast();
void sceUserServiceSetGlsCameraDepthLevel();
void sceUserServiceSetGlsCameraEdgeLevel();
void sceUserServiceSetGlsCameraEffect();
void sceUserServiceSetGlsCameraEliminationLevel();
void sceUserServiceSetGlsCameraPosition();
void sceUserServiceSetGlsCameraReflection();
void sceUserServiceSetGlsCameraSize();
void sceUserServiceSetGlsCameraTransparency();
void sceUserServiceSetGlsCommunityId();
void sceUserServiceSetGlsFloatingMessage();
void sceUserServiceSetGlsHintFlag();
void sceUserServiceSetGlsInitSpectating();
void sceUserServiceSetGlsIsCameraHidden();
void sceUserServiceSetGlsIsFacebookEnabled();
void sceUserServiceSetGlsIsMuteEnabled();
void sceUserServiceSetGlsIsRecDisabled();
void sceUserServiceSetGlsIsRecievedMessageHidden();
void sceUserServiceSetGlsIsTwitterEnabled();
void sceUserServiceSetGlsLanguageFilter();
void sceUserServiceSetGlsLfpsSortOrder();
void sceUserServiceSetGlsLiveQuality();
void sceUserServiceSetGlsLiveQuality2();
void sceUserServiceSetGlsLiveQuality3();
void sceUserServiceSetGlsLiveQuality4();
void sceUserServiceSetGlsLiveQuality5();
void sceUserServiceSetGlsMessageFilterLevel();
void sceUserServiceSetGlsTtsFlags();
void sceUserServiceSetGlsTtsPitch();
void sceUserServiceSetGlsTtsSpeed();
void sceUserServiceSetGlsTtsVolume();
void sceUserServiceSetHmuBrightness();
void sceUserServiceSetHmuZoom();
void sceUserServiceSetHoldAudioOutDevice();
void sceUserServiceSetImeAutoCapitalEnabled();
void sceUserServiceSetImeInitFlag();
void sceUserServiceSetImeInputType();
void sceUserServiceSetImeLastUnit();
void sceUserServiceSetImePointerMode();
void sceUserServiceSetImePredictiveTextEnabled();
void sceUserServiceSetImeRunCount();
void sceUserServiceSetIPDLeft();
void sceUserServiceSetIPDRight();
void sceUserServiceSetIsFakePlus();
void sceUserServiceSetIsQuickSignup();
void sceUserServiceSetIsRemotePlayAllowed();
void sceUserServiceSetJapaneseInputType();
void sceUserServiceSetKeyboardType();
void sceUserServiceSetKeyRepeatSpeed();
void sceUserServiceSetKeyRepeatStartingTime();
void sceUserServiceSetLightBarBaseBrightness();
void sceUserServiceSetLoginFlag();
void sceUserServiceSetMicLevel();
void sceUserServiceSetMouseHandType();
void sceUserServiceSetMousePointerSpeed();
void sceUserServiceSetNotificationBehavior();
void sceUserServiceSetNotificationSettings();
void sceUserServiceSetNpAccountUpgradeFlag();
void sceUserServiceSetNpAuthErrorFlag();
void sceUserServiceSetNpEnv();
void sceUserServiceSetNpLoginId();
void sceUserServiceSetNpOfflineAccountAdult();
void sceUserServiceSetNpSubAccount();
void sceUserServiceSetPadSpeakerVolume();
void sceUserServiceSetParentalBdAge();
void sceUserServiceSetParentalBrowser();
void sceUserServiceSetParentalDvd();
void sceUserServiceSetParentalDvdRegion();
void sceUserServiceSetParentalGame();
void sceUserServiceSetParentalMorpheus();
void sceUserServiceSetPartyMuteList();
void sceUserServiceSetPartyMuteListA();
void sceUserServiceSetPartySettingFlags();
void sceUserServiceSetPasscode();
void sceUserServiceSetPlayTogetherFlags();
void sceUserServiceSetPsnPasswordForDebug();
void sceUserServiceSetSaveDataAutoUpload();
void sceUserServiceSetSaveDataSort();
void sceUserServiceSetSaveDataTutorialFlag();
void sceUserServiceSetShareButtonAssign();
void sceUserServiceSetShareDailymotionAccessToken();
void sceUserServiceSetShareDailymotionRefreshToken();
void sceUserServiceSetSharePlayFlags();
void sceUserServiceSetSharePlayFramerateHost();
void sceUserServiceSetSharePlayResolutionHost();
void sceUserServiceSetShareStatus();
void sceUserServiceSetShareStatus2();
void sceUserServiceSetSystemLoggerHashedAccountId();
void sceUserServiceSetSystemLoggerHashedAccountIdClockType();
void sceUserServiceSetSystemLoggerHashedAccountIdParam();
void sceUserServiceSetSystemLoggerHashedAccountIdTtl();
void sceUserServiceSetTeamShowAboutTeam();
void sceUserServiceSetThemeBgImageDimmer();
void sceUserServiceSetThemeBgImageWaveColor();
void sceUserServiceSetThemeBgImageZoom();
void sceUserServiceSetThemeEntitlementId();
void sceUserServiceSetThemeHomeShareOwner();
void sceUserServiceSetThemeTextShadow();
void sceUserServiceSetThemeWaveColor();
void sceUserServiceSetTopMenuLimitItem();
void sceUserServiceSetTopMenuNotificationFlag();
void sceUserServiceSetTopMenuTutorialFlag();
void sceUserServiceSetTraditionalChineseInputType();
void sceUserServiceSetUserGroupIndex();
void sceUserServiceSetUserGroupName();
void sceUserServiceSetUserName();
void sceUserServiceSetUserStatus();
void sceUserServiceSetVibrationEnabled();
void sceUserServiceSetVoiceRecognitionTutorialState();
void sceUserServiceSetVolumeForController();
void sceUserServiceSetVolumeForGenericUSB();
void sceUserServiceSetVolumeForMorpheusSidetone();
void sceUserServiceSetVolumeForSidetone();
int sceUserServiceTerminate();
void sceUserServiceUnregisterEventCallback();

#ifdef __cplusplus
}
#endif
#endif