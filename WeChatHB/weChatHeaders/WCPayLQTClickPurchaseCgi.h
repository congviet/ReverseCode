//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@interface WCPayLQTClickPurchaseCgi : WCPayBaseCgi
{
    id <WCPayLQTClickPurchaseCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayLQTClickPurchaseCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void).cxx_destruct;
- (id)processCacheDataBeforeSetAsResponse:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2 useCache:(_Bool)arg3;

@end

