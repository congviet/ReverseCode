//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayControlData, WCPayFetchBalanceReport;

@protocol WCPayNewFetchViewControllerDelegate <NSObject>

@optional
- (WCPayFetchBalanceReport *)getReportLogic;
- (void)WCPayFetchViewControllerAddCard;
- (void)WCPayFetchViewControllerNext:(WCPayControlData *)arg1 FetchAll:(_Bool)arg2;
- (void)WCPayFetchViewControllerCancel:(_Bool)arg1;
@end

