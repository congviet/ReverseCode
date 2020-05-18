//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSArray, NSString;

@interface WCNativeExtMgr : MMService <MMService>
{
    _Bool _bLoad;
    NSArray *_arrPBCgi;
    NSArray *_arrCmdID;
}

- (void).cxx_destruct;
- (void)checkAndLoad;
- (_Bool)IsValidCommandInVM:(unsigned int)arg1;
- (_Bool)CgiSendByLongConnInVM:(unsigned int)arg1;
- (unsigned int)ReqCmdToCgiInVM:(unsigned int)arg1;
- (unsigned int)CgiToRespCmdInVM:(unsigned int)arg1;
- (unsigned int)CgiToReqCmdInVM:(unsigned int)arg1;
- (unsigned int)getPbCgiListLenFromVM;
- (const struct PBCGIHelperWrap *)queryCgiConfigFromVM:(unsigned int)arg1;
- (const struct PBCGIHelperWrap *)queryCgiConfigAtIndexInVM:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

