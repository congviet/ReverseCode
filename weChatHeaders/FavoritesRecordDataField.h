//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavoritesItemDataField.h"

@class NSString;

@interface FavoritesRecordDataField : FavoritesItemDataField
{
    unsigned int _msgLocalId;
    unsigned int _msgCreateTime;
    NSString *_chatName;
}

@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (void).cxx_destruct;
- (id)translateInfo;
- (id)GetDataPath;
- (id)GetThumbPath;

@end
