//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface WebStorageGlobalConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _realWeight;
    NSString *_appId;
    NSString *_weightStr;
}

+ (void)__wcdb_WebStorageGlobalConfigTable_multi_primary_4:(struct WCTBinding *)arg1;
+ (void)__wcdb_WebStorageGlobalConfigTable_multi_primary_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)realWeight;
+ (void)__wcdb_WebStorageGlobalConfigTable_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)weightStr;
+ (void)__wcdb_WebStorageGlobalConfigTable_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appId;
+ (void)__wcdb_WebStorageGlobalConfigTable_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int realWeight; // @synthesize realWeight=_realWeight;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

