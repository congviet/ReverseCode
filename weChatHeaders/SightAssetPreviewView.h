//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SightAssetPreviewView : UIView <UIScrollViewDelegate>
{
    _Bool _muted;
    _Bool _hideOverlayView;
    _Bool _scaleAspectToFill;
    _Bool _videoReady;
    float _playRate;
    float _volume;
    id <SightAssetPreviewViewDelegate> _delegate;
    NSURL *_assetURL;
    AVAsset *_asset;
    UIView *_playScrollView;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    unsigned long long _previewOrientation;
    struct CGSize _outputSize;
}

@property(nonatomic) unsigned long long previewOrientation; // @synthesize previewOrientation=_previewOrientation;
@property(nonatomic, getter=isVideoReady) _Bool videoReady; // @synthesize videoReady=_videoReady;
@property(nonatomic) _Bool scaleAspectToFill; // @synthesize scaleAspectToFill=_scaleAspectToFill;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue; // @synthesize loadingQueue=_loadingQueue;
@property(nonatomic, getter=isHideOverlayView) _Bool hideOverlayView; // @synthesize hideOverlayView=_hideOverlayView;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) UIView *playScrollView; // @synthesize playScrollView=_playScrollView;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) __weak id <SightAssetPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)croppedFrame;
- (_Bool)isPlaying;
- (void)pause;
- (void)play;
- (void)restart;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset;
- (void)loadAsset:(id)arg1;
- (struct CGRect)previewFrameWithVideoSize:(struct CGSize)arg1;
- (void)configWithAsset:(id)arg1 scaleAspectToFill:(_Bool)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentPlaybackTime;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 scaleAspectToFill:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

