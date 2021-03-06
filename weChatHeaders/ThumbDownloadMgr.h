//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"

@class CdnTaskInfo, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface ThumbDownloadMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *m_arrQueue;
    CdnTaskInfo *m_oCurTaskInfo;
    NSObject<OS_dispatch_queue> *m_thumbDownloadQueue;
}

@property(retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo; // @synthesize m_oCurTaskInfo;
- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)DownloadFail:(int)arg1;
- (void)StopDownloadThumbByUsrName:(id)arg1;
- (void)StopDownloadThumb:(id)arg1;
- (void)StopCurDownload;
- (_Bool)StartDownloadThumb:(id)arg1;
- (_Bool)IsDownloadingThumb:(id)arg1;
- (void)CheckQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

