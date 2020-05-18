//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMGameUIViewController.h"

#import "GameCenterRankedGameInfoCellDelegate.h"
#import "GameCenterRecentGamesCellDelegate.h"
#import "GameCenterUserActionCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GameCenterForeignLogicController, MMLoadingView, MMTableView, NSMutableSet, NSString;

@interface GameCenterForeignHomeViewControllerV4 : MMGameUIViewController <GameCenterUserActionCellDelegate, UITableViewDelegate, UITableViewDataSource, GameCenterRecentGamesCellDelegate, GameCenterRankedGameInfoCellDelegate>
{
    MMLoadingView *_loadingView;
    MMTableView *_tableView;
    GameCenterForeignLogicController *_foreignLogicController;
    _Bool _bHasH5FloatLayer;
    _Bool _retFromCgi;
    int _entryNotifyType;
    NSMutableSet *_reportedIndexSet;
}

@property(retain, nonatomic) NSMutableSet *reportedIndexSet; // @synthesize reportedIndexSet=_reportedIndexSet;
@property(nonatomic) _Bool retFromCgi; // @synthesize retFromCgi=_retFromCgi;
@property(nonatomic) _Bool bHasH5FloatLayer; // @synthesize bHasH5FloatLayer=_bHasH5FloatLayer;
@property(nonatomic) int entryNotifyType; // @synthesize entryNotifyType=_entryNotifyType;
- (void).cxx_destruct;
- (_Bool)needKvReportOnce:(long long)arg1 row:(long long)arg2;
- (void)promotedGameExposureKvReport:(id)arg1 Index:(long long)arg2;
- (void)onSearchClicked:(id)arg1;
- (void)onGiftClicked:(id)arg1;
- (void)onMsgCenterClicked:(id)arg1;
- (void)onProfileClicked:(id)arg1;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 sourceScene:(int)arg2;
- (void)searchBarDidEndSearch;
- (void)searchBarBecomeFirstResponder;
- (void)onInstalledMoreIconClicked:(id)arg1;
- (void)onRecentGameIconClicked:(id)arg1;
- (void)rankedGameInfoCellDownloadButtonClicked:(id)arg1;
- (void)bubbleButtonClicked;
- (int)openGameListView;
- (void)showWebViewWithUrl:(id)arg1 EntryScene:(id)arg2;
- (int)openGameDetailViewWithGameInfo:(id)arg1 sourceScene:(int)arg2;
- (id)makeBubbleCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeMyActionCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeInstalledCellWithReusableCell:(id)arg1 identifier:(id)arg2 index:(long long)arg3;
- (id)makeMoreGamesCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makePromotedGameCellWithReusableCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (void)viewDidTransitionToNewSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showSettingView;
- (void)initRightBarBtns;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithSourceScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

