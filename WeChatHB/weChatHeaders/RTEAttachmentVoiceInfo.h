//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RTEAttachmentVoiceInfo : NSObject
{
    _Bool _isRecording;
    unsigned int _voiceDuration;
    unsigned int _voiceFmt;
    NSString *_voicePath;
}

@property(retain, nonatomic) NSString *voicePath; // @synthesize voicePath=_voicePath;
@property(nonatomic) unsigned int voiceFmt; // @synthesize voiceFmt=_voiceFmt;
@property(nonatomic) unsigned int voiceDuration; // @synthesize voiceDuration=_voiceDuration;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void).cxx_destruct;

@end

