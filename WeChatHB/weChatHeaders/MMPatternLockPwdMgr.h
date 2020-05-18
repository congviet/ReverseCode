//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CSettingExt.h"
#import "IWCPayControlLogicExt.h"
#import "MMService.h"
#import "MMUIViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WCPayWalletUpdateExt.h"

@class MMPatternLockBufferData, NSString;

@interface MMPatternLockPwdMgr : MMService <WCPayWalletUpdateExt, PBMessageObserverDelegate, CSettingExt, MMUIViewControllerDelegate, IWCPayControlLogicExt, MMService>
{
    _Bool _isLocalVerify;
    _Bool _isNeedVerifyPwd;
    _Bool _isCloseViaToken;
    int _userRegFlag;
    unsigned int _m_payCardListTag;
    MMPatternLockBufferData *_lockBuffer;
}

@property unsigned int m_payCardListTag; // @synthesize m_payCardListTag=_m_payCardListTag;
@property(nonatomic) _Bool isCloseViaToken; // @synthesize isCloseViaToken=_isCloseViaToken;
@property(nonatomic) int userRegFlag; // @synthesize userRegFlag=_userRegFlag;
@property(nonatomic) _Bool isNeedVerifyPwd; // @synthesize isNeedVerifyPwd=_isNeedVerifyPwd;
@property(nonatomic) _Bool isLocalVerify; // @synthesize isLocalVerify=_isLocalVerify;
@property(retain, nonatomic) MMPatternLockBufferData *lockBuffer; // @synthesize lockBuffer=_lockBuffer;
- (void).cxx_destruct;
- (void)onWCPayWalletUpdateDidCall;
- (void)OnPayCardListChanged:(id)arg1;
- (id)getViewController;
- (void)onSettingChanged:(int)arg1;
- (void)handlePatternLockCheckStatusBack:(id)arg1;
- (void)onOpPatternLockResponseOKWithOpCmd:(unsigned int)arg1;
- (void)onOpPatternLockResponseErrorWithOpCmd:(unsigned int)arg1;
- (void)onGetOpPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetRegisterNewPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkPatternLockStatusViaSvr;
- (id)getBufferKeyDataWithVersion:(unsigned int)arg1;
- (int)verifyLockInfoIsValid;
- (int)verifyBufferDataIsInvalid;
- (void)sendPatternLockOpRequestWithCmdID:(unsigned int)arg1 oldHash:(id)arg2 newHash:(id)arg3;
- (_Bool)updateBufferDataWithSvrBuffer:(id)arg1;
- (unsigned long long)getPatternLockTimeInterval;
- (_Bool)isNeedSvrVerify;
- (void)verifyPatternLockPwdWithPatternHash:(id)arg1;
- (void)modifyPatternLockPwdWithOldPatternHash:(id)arg1 andNewHash:(id)arg2;
- (void)closePatternLockPwdWithUserToken:(id)arg1;
- (void)closePatternLockPwdWithPatternHash:(id)arg1;
- (void)setupNewPatternLockPwdWithUserToken:(id)arg1 andPatternHash:(id)arg2;
- (unsigned long long)isPatternLockSetup;
- (void)initData;
- (void)stopPayCardListLogic;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

