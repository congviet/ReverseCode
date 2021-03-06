//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCCrashBlockMonitorDelegate.h"

@class MMFPSMonitor, NSString, WCCrashBlockMonitorConfig, WCCrashBlockMonitorPlugin;

@interface WCCrashBlockHandler : NSObject <WCCrashBlockMonitorDelegate>
{
    WCCrashBlockMonitorPlugin *_plugin;
    WCCrashBlockMonitorConfig *_config;
    MMFPSMonitor *_fpsMonitor;
}

+ (_Bool)p_isDumpTypeRelatedToFOOM:(unsigned long long)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) MMFPSMonitor *fpsMonitor; // @synthesize fpsMonitor=_fpsMonitor;
@property(retain, nonatomic) WCCrashBlockMonitorConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCCrashBlockMonitorPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)p_reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3 dumpType:(unsigned long long)arg4;
- (void)onCrashBlockMonitorIntervalCPUTooHigh;
- (void)onCrashBlockMonitorCurrentCPUTooHigh;
- (id)onCrashBlockMonitorGetUserInfoForFPSWithDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorDumpFilter:(unsigned long long)arg1;
- (void)onCrashBlockMonitorGetDumpFile:(id)arg1 withDumpType:(unsigned long long)arg2;
- (void)onCrashBlockMonitorEnterNextCheckWithDumpType:(unsigned long long)arg1;
- (void)onCrashBlockMonitorBeginDump:(unsigned long long)arg1 blockTime:(unsigned long long)arg2;
- (void)onClientVersionChange;
- (void)refreshKSCrashReportAppVersion;
- (void)handleBackgroundLaunch;
- (void)handleSuspend;
- (_Bool)hasCrashReport;
- (id)getCrashBlockPluginConfiguration;
- (id)getCrashBlockPlugin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

