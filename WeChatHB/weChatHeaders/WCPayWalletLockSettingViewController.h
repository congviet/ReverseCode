//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayPaySecurityCgiDelegate.h"

@class NSString, WCPayPaySecurityCgi;

@interface WCPayWalletLockSettingViewController : WCPayBaseViewController <WCPayPaySecurityCgiDelegate>
{
    id <WCPayWalletLockSettingViewControllerDelegate> _delegate;
    WCPayPaySecurityCgi *_m_securityCgi;
}

@property(retain, nonatomic) WCPayPaySecurityCgi *m_securityCgi; // @synthesize m_securityCgi=_m_securityCgi;
@property(nonatomic) __weak id <WCPayWalletLockSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickModifyPatternLock;
- (void)clickClose;
- (void)clickPatternLock;
- (void)clickTouchLock;
- (_Bool)isTouchLockOpen;
- (_Bool)isSpecailPatternLockOpen;
- (_Bool)patternLockIsCurrentWalletLock;
- (void)reloadTableView;
- (void)reload;
- (void)viewDidLoad;
- (unsigned int)walletLockVCEntryScene;
- (void)onConfirmError;
- (void)paySecurityCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)paySecurityCgi:(id)arg1 didGetResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

