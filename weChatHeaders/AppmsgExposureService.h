//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface AppmsgExposureService : MMService <MMService>
{
    NSMutableDictionary *_uid2HasExposuredMap;
}

- (void).cxx_destruct;
- (void)reportWithId:(unsigned int)arg1 key:(long long)arg2 value:(unsigned int)arg3;
- (void)logErrorIfHasExposuredButNotReport:(unsigned int)arg1;
- (void)doReportExposureItem:(id)arg1 url:(id)arg2 chatType:(unsigned int)arg3;
- (void)reportIfExposuredWithScene:(unsigned int)arg1 innerID:(id)arg2;
- (void)exposuredWithScene:(unsigned int)arg1 innerID:(id)arg2 contentUrl:(id)arg3 chatName:(id)arg4 readerUrlList:(id)arg5;
- (id)uidForScene:(unsigned int)arg1 innerID:(id)arg2;
- (void)snsLogErrorIfHasExposuredButNotReport;
- (void)snsReportIfExposuredWithTid:(id)arg1;
- (void)snsExposuredWithTid:(id)arg1 contentUrl:(id)arg2;
- (void)chatLogErrorIfHasExposuredButNotReport;
- (void)chatReportIfExposuredWithSvrID:(unsigned long long)arg1;
- (void)chatExposuredWithSvrID:(unsigned long long)arg1 contentUrl:(id)arg2 chatName:(id)arg3 readerUrlList:(id)arg4;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
