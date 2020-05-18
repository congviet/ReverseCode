//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface DBContact : NSObject <WCTTableCoding>
{
    unsigned int _version;
    unsigned int _uin;
    unsigned int _sex;
    unsigned int _type;
    unsigned int _LastChatTime;
    NSString *_userName;
    NSString *_nickName;
    NSString *_email;
    NSString *_mobile;
    NSString *_fullPinYin;
    NSData *_extent;
    NSString *_image;
    NSString *_draft;
}

+ (void)__wcdb_DBContact_primary_19:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBContact_not_null_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)draft;
+ (void)__wcdb_DBContact_synthesize_17:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBContact_default_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)LastChatTime;
+ (void)__wcdb_DBContact_synthesize_15:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBContact_default_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (void)__wcdb_DBContact_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)image;
+ (void)__wcdb_DBContact_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extent;
+ (void)__wcdb_DBContact_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fullPinYin;
+ (void)__wcdb_DBContact_synthesize_10:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBContact_default_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sex;
+ (void)__wcdb_DBContact_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)mobile;
+ (void)__wcdb_DBContact_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)email;
+ (void)__wcdb_DBContact_synthesize_6:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBContact_default_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)uin;
+ (void)__wcdb_DBContact_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickName;
+ (void)__wcdb_DBContact_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (void)__wcdb_DBContact_synthesize_2:(struct WCTBinding *)arg1;
+ (void)__wcdb_DBContact_default_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)version;
+ (void)__wcdb_DBContact_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int LastChatTime; // @synthesize LastChatTime=_LastChatTime;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *extent; // @synthesize extent=_extent;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin=_fullPinYin;
@property(nonatomic) unsigned int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) unsigned int uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

