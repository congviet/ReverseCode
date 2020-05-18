//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IAudioReceiverExt.h"
#import "IAudioSenderExt.h"

@class MMTimer, NSString;

@interface BottleAudioView : MMUIView <IAudioSenderExt, IAudioReceiverExt>
{
    _Bool mIsPlayEnabled;
    _Bool mIsAudioPlaying;
    _Bool mIsAudioRecording;
    unsigned int mAudioSessionId;
    unsigned int mMessageId;
    unsigned int mStartRecordTime;
    NSString *mChatName;
    id <NSObject> mStopPlayTargetor;
    SEL mStopPlaySelector;
    MMTimer *mRecordTimer;
    id <NSObject> mStopRecordTargetor;
    SEL mStopRecordSelector;
}

@property(nonatomic) SEL mStopRecordSelector; // @synthesize mStopRecordSelector;
@property(nonatomic) id <NSObject> mStopRecordTargetor; // @synthesize mStopRecordTargetor;
@property(retain, nonatomic) MMTimer *mRecordTimer; // @synthesize mRecordTimer;
@property(nonatomic) unsigned int mStartRecordTime; // @synthesize mStartRecordTime;
@property(nonatomic) SEL mStopPlaySelector; // @synthesize mStopPlaySelector;
@property(nonatomic) __weak id <NSObject> mStopPlayTargetor; // @synthesize mStopPlayTargetor;
@property(nonatomic) unsigned int mMessageId; // @synthesize mMessageId;
@property(retain, nonatomic) NSString *mChatName; // @synthesize mChatName;
@property(nonatomic) unsigned int mAudioSessionId; // @synthesize mAudioSessionId;
- (void).cxx_destruct;
- (void)addStopRecordTarget:(id)arg1 action:(SEL)arg2;
- (unsigned int)stopRecord;
- (void)startRecord;
- (void)addStopPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)stopPlay;
- (void)startPlay;
- (void)setChatName:(id)arg1 andMessageId:(unsigned int)arg2;
- (void)setAudioSessionId:(unsigned int)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)readyRecordWithPlayEnabeld:(_Bool)arg1;
- (void)readyPlayWithAudioTime:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleInterruption;
- (unsigned int)realStopRecord;
- (unsigned int)realStartRecord;
- (void)onTimeCount;
- (void)stopPlayAnimation;
- (void)startPlayAnimation;
- (void)stopRecordAnimation;
- (void)startRecordAnimation;
- (void)initViewForPlayReadyWithAudioTime:(unsigned int)arg1;
- (void)initViewForRecordStart;
- (void)initViewForRecordReadyWithText:(id)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;

@end

