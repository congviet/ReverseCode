//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableDictionary, NSString;

@interface FTSTopHitValue : NSObject <PBCoding>
{
    unsigned int clickScore;
    unsigned int timestamp;
    NSString *key;
    NSMutableDictionary *dicGroupMember;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMember; // @synthesize dicGroupMember;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp;
@property(nonatomic) unsigned int clickScore; // @synthesize clickScore;
@property(retain, nonatomic) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (unsigned int)getABTestThredshold;
- (unsigned int)getABTestValidDays;
- (_Bool)isDisplayAvailable:(int)arg1;
- (_Bool)isDisplayAvailable;
- (_Bool)isOutOfDate;
- (long long)compareTopHitValueAscending:(id)arg1;
- (void)minusScore:(int)arg1;
- (void)minusScore;
- (void)addScore:(int)arg1;
- (void)addScore;
- (_Bool)isValid;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

