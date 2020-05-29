//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WAIAPManagerExt.h"

@class NSString, WAIAPPayRequset;

@interface WAJSEventHandler_requestVirtualPayment : WAJSEventHandler_BaseEvent <WAIAPManagerExt>
{
    WAIAPPayRequset *_curReq;
}

@property(retain, nonatomic) WAIAPPayRequset *curReq; // @synthesize curReq=_curReq;
- (void).cxx_destruct;
- (void)onWAIAPFail:(id)arg1 errInfo:(id)arg2;
- (void)onWAIAPPaySuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
