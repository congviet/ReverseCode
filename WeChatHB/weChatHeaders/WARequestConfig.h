//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WANetworkConfigBase.h"

#import "WANetworkConfigBaseDataSource.h"

@class NSString;

@interface WARequestConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>
{
    unsigned int _requestMaxConcurrentCount;
}

@property(nonatomic) unsigned int requestMaxConcurrentCount; // @synthesize requestMaxConcurrentCount=_requestMaxConcurrentCount;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configMaxTimeoutMS;
- (id)configDomainList;
- (void)loadConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

