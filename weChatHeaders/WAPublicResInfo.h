//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAPublicResInfo : NSObject <PBCoding>
{
    _Bool bIsForceUpdate;
    unsigned int version;
    unsigned int updateTime;
    unsigned int updateScene;
    unsigned int updateType;
    unsigned int oldVersion;
    NSString *pkgDownloadUrl;
    NSString *checkSum;
    NSString *pkgPatchUrl;
}

+ (void)initialize;
@property(nonatomic) unsigned int oldVersion; // @synthesize oldVersion;
@property(retain, nonatomic) NSString *pkgPatchUrl; // @synthesize pkgPatchUrl;
@property(nonatomic) unsigned int updateType; // @synthesize updateType;
@property(nonatomic) unsigned int updateScene; // @synthesize updateScene;
@property(nonatomic) _Bool bIsForceUpdate; // @synthesize bIsForceUpdate;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
@property(retain, nonatomic) NSString *pkgDownloadUrl; // @synthesize pkgDownloadUrl;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

