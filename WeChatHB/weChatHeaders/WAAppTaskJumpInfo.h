//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WAAppTaskJumpInfo : NSObject
{
    unsigned int _sourceType;
    NSString *_sourceAppID;
    NSString *_agentId;
}

@property(retain, nonatomic) NSString *agentId; // @synthesize agentId=_agentId;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *sourceAppID; // @synthesize sourceAppID=_sourceAppID;
- (void).cxx_destruct;
- (id)description;

@end

