//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavClickStreamData : NSObject
{
    unsigned int _enterPageTime;
    NSString *_className;
    long long _stayTime;
    NSString *_sessionId;
}

@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int enterPageTime; // @synthesize enterPageTime=_enterPageTime;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)jsonString;
- (id)initWithClassName:(id)arg1 enterPageTime:(unsigned int)arg2 stayTime:(long long)arg3 sessionId:(id)arg4;

@end
