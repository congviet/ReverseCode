//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface CheckBigFileUploadRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fileExt; // @dynamic fileExt;
@property(retain, nonatomic) NSString *fileMd5; // @dynamic fileMd5;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

