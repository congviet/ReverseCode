//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "PBMessageObserverDelegate.h"

@class JSEvent, NSDictionary;

@interface WCPayJSApiSecureTunnelControlLogic : WCPayControlLogic <PBMessageObserverDelegate>
{
    NSDictionary *m_param;
    JSEvent *m_jsEvent;
    id <SecureTunnelLogicDelegate> m_delegate;
}

@property(nonatomic) __weak id <SecureTunnelLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) JSEvent *m_jsEvent; // @synthesize m_jsEvent;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1 delegate:(id)arg2 param:(id)arg3;

@end

