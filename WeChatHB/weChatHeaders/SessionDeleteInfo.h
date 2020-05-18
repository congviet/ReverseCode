//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface SessionDeleteInfo : NSObject <WCTTableCoding>
{
    NSString *m_userName;
    unsigned int m_lastMsgSequence;
    unsigned int m_deleteTime;
    long long _SESSION_DEL_COL_INTRES1;
    long long _SESSION_DEL_COL_INTRES2;
    long long _SESSION_DEL_COL_INTRES3;
    NSString *_SESSION_DEL_COL_STRRES1;
    NSString *_SESSION_DEL_COL_STRRES2;
    NSString *_SESSION_DEL_COL_STRRES3;
}

+ (void)__wcdb_SessionDeleteInfo_index_15:(struct WCTBinding *)arg1;
+ (void)__wcdb_SessionDeleteInfo_primary_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)SESSION_DEL_COL_STRRES3;
+ (void)__wcdb_SessionDeleteInfo_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)SESSION_DEL_COL_STRRES2;
+ (void)__wcdb_SessionDeleteInfo_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)SESSION_DEL_COL_STRRES1;
+ (void)__wcdb_SessionDeleteInfo_synthesize_11:(struct WCTBinding *)arg1;
+ (void)__wcdb_SessionDeleteInfo_default_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)SESSION_DEL_COL_INTRES3;
+ (void)__wcdb_SessionDeleteInfo_synthesize_9:(struct WCTBinding *)arg1;
+ (void)__wcdb_SessionDeleteInfo_default_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)SESSION_DEL_COL_INTRES2;
+ (void)__wcdb_SessionDeleteInfo_synthesize_7:(struct WCTBinding *)arg1;
+ (void)__wcdb_SessionDeleteInfo_default_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)SESSION_DEL_COL_INTRES1;
+ (void)__wcdb_SessionDeleteInfo_synthesize_5:(struct WCTBinding *)arg1;
+ (void)__wcdb_SessionDeleteInfo_default_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_deleteTime;
+ (void)__wcdb_SessionDeleteInfo_synthesize_3:(struct WCTBinding *)arg1;
+ (void)__wcdb_SessionDeleteInfo_default_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_lastMsgSequence;
+ (void)__wcdb_SessionDeleteInfo_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_userName;
+ (void)__wcdb_SessionDeleteInfo_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES3; // @synthesize SESSION_DEL_COL_STRRES3=_SESSION_DEL_COL_STRRES3;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES2; // @synthesize SESSION_DEL_COL_STRRES2=_SESSION_DEL_COL_STRRES2;
@property(retain, nonatomic) NSString *SESSION_DEL_COL_STRRES1; // @synthesize SESSION_DEL_COL_STRRES1=_SESSION_DEL_COL_STRRES1;
@property(nonatomic) long long SESSION_DEL_COL_INTRES3; // @synthesize SESSION_DEL_COL_INTRES3=_SESSION_DEL_COL_INTRES3;
@property(nonatomic) long long SESSION_DEL_COL_INTRES2; // @synthesize SESSION_DEL_COL_INTRES2=_SESSION_DEL_COL_INTRES2;
@property(nonatomic) long long SESSION_DEL_COL_INTRES1; // @synthesize SESSION_DEL_COL_INTRES1=_SESSION_DEL_COL_INTRES1;
@property(nonatomic) unsigned int m_deleteTime; // @synthesize m_deleteTime;
@property(nonatomic) unsigned int m_lastMsgSequence; // @synthesize m_lastMsgSequence;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

