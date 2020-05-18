//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface DBBottle : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _localId;
    unsigned int _serverId;
    long long lastInsertedRowID;
    NSString *_encryptUserName;
    NSString *_bottleId;
    NSString *_ext;
}

+ (void)__wcdb_DBBottle_primary_164:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ext;
+ (void)__wcdb_DBBottle_synthesize_163:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bottleId;
+ (void)__wcdb_DBBottle_synthesize_162:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)encryptUserName;
+ (void)__wcdb_DBBottle_synthesize_161:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBBottle_default_160:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)serverId;
+ (void)__wcdb_DBBottle_synthesize_159:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localId;
+ (void)__wcdb_DBBottle_synthesize_158:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *bottleId; // @synthesize bottleId=_bottleId;
@property(retain, nonatomic) NSString *encryptUserName; // @synthesize encryptUserName=_encryptUserName;
@property(nonatomic) unsigned int serverId; // @synthesize serverId=_serverId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;

@end

