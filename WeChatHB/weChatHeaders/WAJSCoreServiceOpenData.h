//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAAppTaskReferrerInfo, WAApptaskPluginResInfo;

@interface WAJSCoreServiceOpenData : NSObject
{
    _Bool _reLaunch;
    _Bool _isSticky;
    WAAppTaskReferrerInfo *_referrerInfo;
    WAApptaskPluginResInfo *_pluginResInfo;
    NSString *_path;
}

@property(nonatomic) _Bool isSticky; // @synthesize isSticky=_isSticky;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool reLaunch; // @synthesize reLaunch=_reLaunch;
@property(retain, nonatomic) WAApptaskPluginResInfo *pluginResInfo; // @synthesize pluginResInfo=_pluginResInfo;
@property(retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
- (void).cxx_destruct;

@end

