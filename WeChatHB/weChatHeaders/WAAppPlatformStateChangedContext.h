//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WAAppStateChangedContextInfo;

@interface WAAppPlatformStateChangedContext : MMObject
{
    unsigned int _changeReason;
    unsigned long long _platformType;
    unsigned long long _changeDirection;
    WAAppStateChangedContextInfo *_contextInfo;
}

@property(retain, nonatomic) WAAppStateChangedContextInfo *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) unsigned int changeReason; // @synthesize changeReason=_changeReason;
@property(nonatomic) unsigned long long changeDirection; // @synthesize changeDirection=_changeDirection;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
- (void).cxx_destruct;
- (id)description;

@end

