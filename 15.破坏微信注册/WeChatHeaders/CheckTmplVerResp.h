//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface CheckTmplVerResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *cdnUrl; // @dynamic cdnUrl;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSMutableArray *tmplInfoList; // @dynamic tmplInfoList;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(nonatomic) unsigned int versionLowerBound; // @dynamic versionLowerBound;

@end

