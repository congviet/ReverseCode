//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString;

@interface FTSMsgItem : NSObject
{
    unsigned int _localId;
    unsigned int _createTime;
    NSString *_userName;
    NSString *_ftsContent;
    CMessageWrap *_msgWrap;
}

@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *ftsContent; // @synthesize ftsContent=_ftsContent;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (long long)compareMsgItemAscending:(id)arg1;
- (id)init;

@end

