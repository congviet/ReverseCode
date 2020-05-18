//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt.h"
#import "IMsgExt.h"
#import "MMResDownloadMgrDelegate.h"
#import "MMResInfoMgr.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MMResInfoMgr, MMResourceDownloadMgr, NSString;

@interface MMResourceService : MMService <MMResInfoMgr, PBMessageObserverDelegate, MMResDownloadMgrDelegate, IMsgExt, CNetworkStatusExt, MMService>
{
    NSString *KEY_UPDATE_RES_KEY;
    NSString *ACCESS_RES_GROUP;
    MMResInfoMgr *_resInfoMgr;
    MMResourceDownloadMgr *_resDownloadMgr;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ForceUpdateErrorHandler:(id)arg1 ErrorType:(long long)arg2;
- (void)ForceUpdateErrorHandler:(id)arg1;
- (_Bool)isForceUpdateMessageReturn:(id)arg1;
- (id)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getResInfo:(unsigned int)arg1;
- (_Bool)insertNewResInfo:(id)arg1;
- (void)onDownloadTaskEnd:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)handleDownloadTask:(id)arg1 downloadData:(id)arg2;
- (void)OnResUpdateFinishOnMainThread:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (_Bool)isResDependOnClientVersion:(unsigned int)arg1;
- (id)parseCacheNode:(struct XmlReaderNode_t *)arg1;
- (id)parseDecryptNode:(struct XmlReaderNode_t *)arg1;
- (id)parseDeleteNode:(struct XmlReaderNode_t *)arg1;
- (const char *)readChildText:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (void)processResDeleteRequest:(id)arg1 Scene:(int)arg2;
- (void)processResDecryptRequest:(id)arg1 Scene:(int)arg2;
- (_Bool)isNeedToDownloadNonWebRes:(id)arg1;
- (void)createDownloadTask:(id)arg1;
- (void)processResCacheRequest:(id)arg1 Scene:(int)arg2;
- (void)parseNewXml:(id)arg1;
- (id)convertResTypeLogStringFromReqList:(id)arg1;
- (void)reloadDownloadTask;
- (void)checkTestResUpdate:(unsigned int)arg1 WithSubType:(unsigned int)arg2;
- (void)forceUpdateRes:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 ForceWithoutLogin:(_Bool)arg3;
- (void)forceUpdateRes:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (void)checkResUpdate:(unsigned int)arg1;
- (void)checkAllTestResUpdate;
- (void)checkAllResUpdate;
- (void)getCheckResUpdateRequest:(id)arg1;
- (id)getResData:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 ErrorCode:(long long *)arg3;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 getVersion:(unsigned int *)arg3;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (void)manualDecryptWithDecryptXml:(id)arg1;
- (id)getTestList;
- (void)clearABTestData:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (void)dealloc;
- (void)checkAndReloadDownloadTask;
- (void)deleteAESKeyInKeyChain:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithKeyVersion:(unsigned int)arg3 WithEID:(unsigned int)arg4;
- (void)saveAESKeyInKeyChain:(id)arg1 WithResType:(unsigned int)arg2 WithSubtype:(unsigned int)arg3 WithKeyVersion:(unsigned int)arg4 WithEID:(unsigned int)arg5;
- (id)getAESKeyInKeyChain:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithKeyVersion:(unsigned int)arg3 WithEID:(unsigned int)arg4;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (_Bool)isRequestInNonAuth;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

