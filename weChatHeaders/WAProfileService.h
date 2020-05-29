//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class GetProfileInfoResponse_WxaEvaluateWordingList, NSMutableDictionary, NSString;

@interface WAProfileService : MMService <PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_dicUserName2LastForegroundTime;
    GetProfileInfoResponse_WxaEvaluateWordingList *_evaluateWordingList;
}

@property(retain, nonatomic) GetProfileInfoResponse_WxaEvaluateWordingList *evaluateWordingList; // @synthesize evaluateWordingList=_evaluateWordingList;
@property(retain, nonatomic) NSMutableDictionary *dicUserName2LastForegroundTime; // @synthesize dicUserName2LastForegroundTime=_dicUserName2LastForegroundTime;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onUpdateProfileEvaluate:(id)arg1;
- (_Bool)updateProfileEvaluateForUserName:(id)arg1 OperType:(int)arg2 RatingValue:(double)arg3;
- (_Bool)updateProfileLikeStatusForUserName:(id)arg1 myselfLike:(_Bool)arg2;
- (_Bool)skipProfileEvaluateForUserName:(id)arg1;
- (_Bool)updateProfileEvaluateForUserName:(id)arg1 RatingValue:(double)arg2;
- (void)saveWording:(id)arg1;
- (void)onFetchProfileBaseInfo:(id)arg1;
- (_Bool)fetchProfileInfoForUserName:(id)arg1;
- (_Bool)canPopEvaluateDueToMinStayTime:(unsigned int)arg1 UserName:(id)arg2;
- (void)updateForegroundTimeForUserName:(id)arg1;
- (_Bool)saveDataToCacheFile:(id)arg1 Path:(id)arg2;
- (_Bool)loadDataFromFile:(id)arg1 ToClass:(Class)arg2 ToData:(id *)arg3;
- (void)saveWordingToCache;
- (void)loadCacheWording;
- (id)getDefaultEvaluateWordingForScore:(int)arg1;
- (id)getEvaluteWordingForScore:(int)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
