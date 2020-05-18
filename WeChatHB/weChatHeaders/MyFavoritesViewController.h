//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "FavFileDetailDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "FavNotePostDelegate.h"
#import "FavSearchControllerDelegate.h"
#import "FavSightViewDelegate.h"
#import "FavTagSearchFilterDelegate.h"
#import "FavTagViewDelegate.h"
#import "FavVideoDetailDelegate.h"
#import "FavoritesDataControllerDelegate.h"
#import "IFavSightViewExt.h"
#import "IFavoritesExt.h"
#import "IWNAudioMgrExt.h"
#import "ViewLocationDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"
#import "WNArticleToolViewDelegate.h"

@class FavClickStreamHelper, FavForwardLogicController, FavTypeItemsView, FavWarningBannerView, MMFavoritesDataController, MMFavoritesSearchController, MMTableView, MMUIWindow, MainFrameActionFloatView, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIView, WNToolViewHelper;

@interface MyFavoritesViewController : MMSearchBarDisplayController <WNArticleToolViewDelegate, IWNAudioMgrExt, ViewLocationDelegate, FavNotePostDelegate, FavSearchControllerDelegate, FavoritesDataControllerDelegate, IFavoritesExt, FavFileDetailDelegate, FavVideoDetailDelegate, FavTagSearchFilterDelegate, FavForwardLogicDelegate, FavTagViewDelegate, WCActionSheetDelegate, WCNetworkMediaPlayerDelegate, IFavSightViewExt, FavSightViewDelegate>
{
    MMFavoritesDataController *m_dataController;
    MMFavoritesSearchController *m_searchController;
    UIView *m_multiSelectActionView;
    NSMutableArray *m_multiSelectButtons;
    FavForwardLogicController *m_favForwardController;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    UIView *m_headView;
    UIButton *m_bannerBtn;
    UIView *m_footerView;
    UIActivityIndicatorView *m_activityView;
    MMUIWindow *m_fullScreenWindow;
    FavTypeItemsView *m_favTypeItemsView;
    FavWarningBannerView *m_favBannerView;
    _Bool m_hasLogCostTime;
    FavForwardLogicController *m_favForwardLogicController;
    FavClickStreamHelper *m_clickHelper;
    id <MyFavoritesViewControllerDelegate> _m_delegate;
    MainFrameActionFloatView *_menuView;
    WNToolViewHelper *_noteToolHelper;
}

@property(retain, nonatomic) WNToolViewHelper *noteToolHelper; // @synthesize noteToolHelper=_noteToolHelper;
@property(retain, nonatomic) MainFrameActionFloatView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) __weak id <MyFavoritesViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (_Bool)onResponseForSelectFavItem:(id)arg1;
- (void)jumpToViewStreamVideo:(id)arg1;
- (id)getCurrentViewController;
- (void)onLoadingMore;
- (void)reloadTableAtIndexPath:(id)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)showEmptyView;
- (void)addPostItem:(id)arg1;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addTagForItems;
- (void)onForwardItems;
- (void)forwardItem:(id)arg1;
- (void)onDeleteItems;
- (void)hideSelectActionView;
- (void)onMultiSelectDone;
- (void)checkShowNewTips;
- (id)createBtnWithImg:(id)arg1 accessibilityStr:(id)arg2 Sel:(SEL)arg3;
- (void)initMultiSelectActionView;
- (void)enableBtns;
- (void)disableBtns;
- (void)hideSearchBar;
- (void)onBtnEdit;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnNewFavoritesItemUpdate:(id)arg1;
- (void)OnGetNextPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnHasAnyFavoriteData:(_Bool)arg1;
- (void)onHandleJumpToViewDetail:(id)arg1;
- (void)stopActivityLoading;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (void)OpenVideoFavItem:(id)arg1;
- (void)OpenVideoFile:(id)arg1;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (_Bool)onSearchCellViewCanShowMenuItems;
- (_Bool)shouldShowSearchResult:(id)arg1;
- (void)onDidEndSearch;
- (void)onWillEndSearch;
- (void)onWillBeginSearch;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)hideWarningBanner;
- (void)showWarningBanner;
- (void)showCapacityWarningTips;
- (void)showUploadFailForCapacityTips;
- (void)showUploadFailTips;
- (_Bool)checkForCapacityWarningBanner;
- (_Bool)checkForFailBanner;
- (void)checkForBanner;
- (void)hideVisibleCellMenu;
- (void)goToCapacityViewController;
- (void)restartAllFailedItem;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onViewControllerBeDeleted;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)initEmptyView;
- (void)initLoadingView;
- (void)initTableFooterView;
- (void)initWarningBanner;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)resetHeaderView:(id)arg1;
- (void)initHeaderView;
- (void)initTableView;
- (void)setViewTitle;
- (void)onReturn;
- (void)initNavigationBar;
- (id)getAddBarButton;
- (id)getBackBarButton;
- (id)getCancelBarButton;
- (void)onBackButtonClicked;
- (void)updateSelectActionView;
- (void)reLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)HideLoadingView;
- (void)reloadTableView;
- (_Bool)isSeachActive;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)onCancelSelectLocation;
- (void)onCancelSelectPictures;
- (void)insertItems:(id)arg1;
- (_Bool)needHoldLoadingViewInSelf;
- (id)getViewController;
- (void)onShowChooseLocation;
- (void)onShowPostNewNoteWithVoice;
- (void)onShowChoosePicture;
- (void)onShowPostNewNoteWithCreationType:(unsigned int)arg1;
- (void)onShowPostNewNoteWithMenuNote;
- (void)onShowPostNewNote;
- (void)relayoutMenuView;
- (void)onPopVCToDismissMenuView;
- (void)userHideMenu;
- (void)onClickNewBtn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

