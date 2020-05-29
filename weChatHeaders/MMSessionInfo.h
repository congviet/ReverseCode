//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class CContact, CMessageWrap, MMSessionInfoExt, NSString;

@interface MMSessionInfo : NSObject <WCTTableCoding>
{
    NSString *m_nsUserName;
    NSString *m_nsFilePath;
    unsigned int m_uUnReadCount;
    _Bool m_bShowUnReadAsRedDot;
    CContact *m_contact;
    CMessageWrap *m_msgWrap;
    unsigned int m_uLastTime;
    _Bool m_bIsTop;
    unsigned int m_uTopTime;
    unsigned int m_uUnTopTime;
    unsigned int m_uAtMeCount;
    unsigned int m_uGreenLabelType;
    NSString *m_draftMsg;
    unsigned int m_draftMsgTime;
    NSString *m_atUserList;
    unsigned int m_uNewInvCount;
    _Bool m_uNewInvApprove;
    _Bool m_bNeedContactVerify;
    unsigned int m_uNewNotifyMsgCount;
    unsigned int m_uBrandNotifyType;
    unsigned int m_uTransferCount;
    unsigned int m_uAACount;
    unsigned int _ConIntRes2;
    MMSessionInfoExt *m_extendFields;
    NSString *m_waUpdatableMsgDigest;
}

+ (void)__wcdb_MMSessionInfo_primary_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_extendFields;
+ (void)__wcdb_MMSessionInfo_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsFilePath;
+ (void)__wcdb_MMSessionInfo_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)ConIntRes2;
+ (void)__wcdb_MMSessionInfo_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_bShowUnReadAsRedDot;
+ (void)__wcdb_MMSessionInfo_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uUnReadCount;
+ (void)__wcdb_MMSessionInfo_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uLastTime;
+ (void)__wcdb_MMSessionInfo_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsUserName;
+ (void)__wcdb_MMSessionInfo_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
@property(nonatomic) unsigned int m_uBrandNotifyType; // @synthesize m_uBrandNotifyType;
@property(nonatomic) unsigned int m_uNewNotifyMsgCount; // @synthesize m_uNewNotifyMsgCount;
@property(retain, nonatomic) NSString *m_waUpdatableMsgDigest; // @synthesize m_waUpdatableMsgDigest;
@property(nonatomic) unsigned int m_uAACount; // @synthesize m_uAACount;
@property(nonatomic) unsigned int m_uTransferCount; // @synthesize m_uTransferCount;
@property(nonatomic) _Bool m_bNeedContactVerify; // @synthesize m_bNeedContactVerify;
@property(nonatomic) _Bool m_uNewInvApprove; // @synthesize m_uNewInvApprove;
@property(nonatomic) unsigned int m_uNewInvCount; // @synthesize m_uNewInvCount;
@property(retain, nonatomic) NSString *m_atUserList; // @synthesize m_atUserList;
@property(nonatomic) unsigned int m_draftMsgTime; // @synthesize m_draftMsgTime;
@property(retain, nonatomic) NSString *m_draftMsg; // @synthesize m_draftMsg;
@property(nonatomic) unsigned int m_uGreenLabelType; // @synthesize m_uGreenLabelType;
@property(nonatomic) unsigned int m_uAtMeCount; // @synthesize m_uAtMeCount;
@property(nonatomic) unsigned int m_uUnTopTime; // @synthesize m_uUnTopTime;
@property(nonatomic) unsigned int m_uTopTime; // @synthesize m_uTopTime;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) _Bool m_bIsTop; // @synthesize m_bIsTop;
@property(nonatomic) unsigned int m_uLastTime; // @synthesize m_uLastTime;
@property(nonatomic) _Bool m_bShowUnReadAsRedDot; // @synthesize m_bShowUnReadAsRedDot;
@property(nonatomic) unsigned int m_uUnReadCount; // @synthesize m_uUnReadCount;
@property(retain, nonatomic) MMSessionInfoExt *m_extendFields; // @synthesize m_extendFields;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
- (void).cxx_destruct;
- (id)description;
- (long long)compare:(id)arg1;
- (void)tryLoadExtInfo;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
