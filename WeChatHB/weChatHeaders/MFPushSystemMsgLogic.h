//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "INetworkStatusMgrExt.h"

@class MFBannerBtn, MMTimer, NSString, NetworkCheckViewController, UIButton<MFBanner>, UIViewController;

@interface MFPushSystemMsgLogic : MMObject <INetworkStatusMgrExt>
{
    MFBannerBtn *m_banner;
    NetworkCheckViewController *m_networkCheckViewController;
    unsigned int m_uiTipStatus;
    NSString *m_bannerDesc;
    MMTimer *m_progressTimer;
    id <MFPushSystemMsgDelegate> _delegate;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <MFPushSystemMsgDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton<MFBanner> *bannerBtn; // @synthesize bannerBtn=m_banner;
- (void).cxx_destruct;
- (void)showNetworkTip:(id)arg1;
- (void)updateSystemNetworkNotification:(unsigned int)arg1;
- (void)onNetworkCheckFinished:(_Bool)arg1 baseNetOK:(_Bool)arg2 longLinkOK:(_Bool)arg3 kvString:(id)arg4;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)dismissSystemMessage;
- (void)updateMessage:(id)arg1;
- (void)updateProgress;
- (void)onBannerClick:(id)arg1;
- (void)makeNewPushSymtemView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

