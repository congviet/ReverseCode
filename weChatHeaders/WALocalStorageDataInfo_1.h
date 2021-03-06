//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WALocalStorageDataInfo_1 : NSObject <WCTTableCoding>
{
    int _storageId;
    unsigned int _keyAndDataLength;
    unsigned int _lastModifyTime;
    NSString *_key;
    NSString *_dataType;
    NSString *_data;
}

+ (void)__wcdb_WALocalStorageDataInfo_1_multi_primary_18:(struct WCTBinding *)arg1;
+ (void)__wcdb_WALocalStorageDataInfo_1_multi_primary_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)data;
+ (void)__wcdb_WALocalStorageDataInfo_1_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)dataType;
+ (void)__wcdb_WALocalStorageDataInfo_1_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lastModifyTime;
+ (void)__wcdb_WALocalStorageDataInfo_1_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)keyAndDataLength;
+ (void)__wcdb_WALocalStorageDataInfo_1_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)key;
+ (void)__wcdb_WALocalStorageDataInfo_1_synthesize_12:(struct WCTBinding *)arg1;
+ (void)__wcdb_WALocalStorageDataInfo_1_default_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)storageId;
+ (void)__wcdb_WALocalStorageDataInfo_1_synthesize_10:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int keyAndDataLength; // @synthesize keyAndDataLength=_keyAndDataLength;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int storageId; // @synthesize storageId=_storageId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

