//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString, StrongNotificationItemPB;

@interface StrongNotificationItemAndMessagePB : MMObject <PBCoding>
{
    unsigned int nsStatue;
    NSString *nsForcePushId;
    NSString *nsUsrName;
    NSString *nsDescription;
    StrongNotificationItemPB *nsStrongNotificationItem;
}

+ (void)initialize;
@property(retain, nonatomic) StrongNotificationItemPB *nsStrongNotificationItem; // @synthesize nsStrongNotificationItem;
@property(nonatomic) unsigned int nsStatue; // @synthesize nsStatue;
@property(retain, nonatomic) NSString *nsDescription; // @synthesize nsDescription;
@property(retain, nonatomic) NSString *nsUsrName; // @synthesize nsUsrName;
@property(retain, nonatomic) NSString *nsForcePushId; // @synthesize nsForcePushId;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

