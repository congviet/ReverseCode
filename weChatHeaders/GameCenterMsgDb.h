//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCTDatabase, WCTTable;

@interface GameCenterMsgDb : NSObject
{
    WCTDatabase *_db;
    WCTTable *_table;
}

@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)getMsgNeedMergeWith:(id)arg1;
- (struct Expression)buildWhereCondition:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(_Bool)arg3;
- (id)getDbPath;
- (void)closeDbBeforeInit;
- (_Bool)isMsgExistBySvrMsgId:(id)arg1;
- (_Bool)createTable;
- (id)getAllMsg;
- (_Bool)setMsgCenterAllRead;
- (_Bool)setMsgCenterOneMsgRead:(unsigned int)arg1;
- (id)getMsgListByPage:(int)arg1 lastLocalId:(int)arg2 maxCount:(int)arg3;
- (id)getMsgListByPageForJsApi:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(_Bool)arg3 maxCount:(int)arg4;
- (id)getMsgCenterReadListBefore:(unsigned int)arg1;
- (id)getMsgCenterUnreadList;
- (_Bool)deleteMsgBeforeTimeStamp:(unsigned int)arg1;
- (_Bool)deleteMsgByLocalId:(int)arg1;
- (_Bool)deleteAllMsg;
- (id)getMsgByLocalId:(int)arg1;
- (unsigned int)saveMsgToDB:(id)arg1;
- (_Bool)initDb;

@end

