//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class OpenECardAuthReq;

@interface WCPayOpenECardAuthCgi : WCPayBaseCgi
{
    OpenECardAuthReq *_authRequest;
}

@property(retain, nonatomic) OpenECardAuthReq *authRequest; // @synthesize authRequest=_authRequest;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)failWithECardCgiError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayOpenECardAuthCgiDelegate> delegate; // @dynamic delegate;

@end

