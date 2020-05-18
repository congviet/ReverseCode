//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMRTCMenuResponder.h"

#import "ForwardMessageLogicDelegate.h"

@class ForwardMessageLogicController, NSString;

@interface MMRTCTextMsgFloatMenuResponder : MMRTCMenuResponder <ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController *_forwardLogicController;
}

@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onSelectTextCopy:(id)arg1;
- (void)onSelectTextForward:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

