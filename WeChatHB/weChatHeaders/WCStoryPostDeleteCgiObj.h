//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCStoryBaseCGIObj.h"

@class WCStoryDataItem;

@interface WCStoryPostDeleteCgiObj : WCStoryBaseCGIObj
{
    WCStoryDataItem *_dataItem;
    CDUnknownBlockType _deletePostBlock;
    CDUnknownBlockType _dbSyncBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dbSyncBlock; // @synthesize dbSyncBlock=_dbSyncBlock;
@property(copy, nonatomic) CDUnknownBlockType deletePostBlock; // @synthesize deletePostBlock=_deletePostBlock;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1 reponse:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDataItem:(id)arg1;

@end

