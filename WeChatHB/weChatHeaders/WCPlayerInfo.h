//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, WCPlayerReporter;

@interface WCPlayerInfo : NSObject
{
    _Bool _mute;
    _Bool _followSystemMute;
    _Bool _useCustomVolume;
    _Bool _bShouldResumeMusicAtPause;
    _Bool _bLoop;
    _Bool _remainLast;
    _Bool _bZeroSeekTolerance;
    _Bool _bFetchAllDataAndResetPlayerWhenInErrorStatus;
    _Bool _bThrottled;
    float _lazyCheckBufferTime;
    float _downloadGrading;
    unsigned int _preloadSec;
    float _videoDuration;
    unsigned int _videoLength;
    float _bitRate;
    unsigned int _videoCodec;
    unsigned int _moovPos;
    unsigned long long _playerScene;
    NSString *_streamTmpPath;
    NSString *_formatPath;
    unsigned long long _playerMode;
    long long _limitMaxDuration;
    long long _minBufferLength;
    long long _maxBufferLength;
    NSArray *_arrBufferTime;
    double _periodicTimeInterval;
    NSString *_videoGravity;
    long long _contentMode;
    long long _thumbContentMode;
    NSMutableDictionary *_dicParams;
    WCPlayerReporter *_reporter;
    struct CGSize _videoSize;
    struct CGAffineTransform _preferredTransform;
}

@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(nonatomic) unsigned int moovPos; // @synthesize moovPos=_moovPos;
@property(nonatomic) unsigned int videoCodec; // @synthesize videoCodec=_videoCodec;
@property(nonatomic) float bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) unsigned int videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) float videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSMutableDictionary *dicParams; // @synthesize dicParams=_dicParams;
@property(nonatomic) long long thumbContentMode; // @synthesize thumbContentMode=_thumbContentMode;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) double periodicTimeInterval; // @synthesize periodicTimeInterval=_periodicTimeInterval;
@property(retain, nonatomic) NSArray *arrBufferTime; // @synthesize arrBufferTime=_arrBufferTime;
@property(nonatomic) unsigned int preloadSec; // @synthesize preloadSec=_preloadSec;
@property(nonatomic) long long maxBufferLength; // @synthesize maxBufferLength=_maxBufferLength;
@property(nonatomic) long long minBufferLength; // @synthesize minBufferLength=_minBufferLength;
@property(nonatomic) float downloadGrading; // @synthesize downloadGrading=_downloadGrading;
@property(nonatomic) _Bool bThrottled; // @synthesize bThrottled=_bThrottled;
@property(nonatomic) float lazyCheckBufferTime; // @synthesize lazyCheckBufferTime=_lazyCheckBufferTime;
@property(nonatomic) _Bool bFetchAllDataAndResetPlayerWhenInErrorStatus; // @synthesize bFetchAllDataAndResetPlayerWhenInErrorStatus=_bFetchAllDataAndResetPlayerWhenInErrorStatus;
@property(nonatomic) long long limitMaxDuration; // @synthesize limitMaxDuration=_limitMaxDuration;
@property(nonatomic) _Bool bZeroSeekTolerance; // @synthesize bZeroSeekTolerance=_bZeroSeekTolerance;
@property(nonatomic) _Bool remainLast; // @synthesize remainLast=_remainLast;
@property(nonatomic) _Bool bLoop; // @synthesize bLoop=_bLoop;
@property(nonatomic) _Bool bShouldResumeMusicAtPause; // @synthesize bShouldResumeMusicAtPause=_bShouldResumeMusicAtPause;
@property(nonatomic) _Bool useCustomVolume; // @synthesize useCustomVolume=_useCustomVolume;
@property(nonatomic) _Bool followSystemMute; // @synthesize followSystemMute=_followSystemMute;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) unsigned long long playerMode; // @synthesize playerMode=_playerMode;
@property(retain, nonatomic) NSString *formatPath; // @synthesize formatPath=_formatPath;
@property(retain, nonatomic) NSString *streamTmpPath; // @synthesize streamTmpPath=_streamTmpPath;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
- (void).cxx_destruct;
- (void)resetPlayGenerateArgs;
- (_Bool)shouldStopDownloadOnStopPlay;
- (_Bool)useCustomResourceloader;
- (id)init;

@end

