//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseEvent, BaseRequest, NSString;

@interface QueryWeChatWalletRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int balanceVersion; // @dynamic balanceVersion;
@property(retain, nonatomic) BaseEvent *baseEvent; // @dynamic baseEvent;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindTypeCond; // @dynamic bindTypeCond;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) int isDeviceOpenTouch; // @dynamic isDeviceOpenTouch;
@property(nonatomic) int isRealTime; // @dynamic isRealTime;
@property(nonatomic) int isRoot; // @dynamic isRoot;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end

