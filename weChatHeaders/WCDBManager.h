//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, WCDBErrorReport, WCDBPerformanceReport, WCDBRecover;

@interface WCDBManager : MMService <MMService>
{
    WCDBErrorReport *_errorReport;
    WCDBPerformanceReport *_performanceReport;
    WCDBRecover *_recover;
}

@property(readonly, nonatomic) WCDBRecover *recover; // @synthesize recover=_recover;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

