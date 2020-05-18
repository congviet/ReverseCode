//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "FullScreenGestureDelegate.h"
#import "IVOIPUILogicMgrExt.h"
#import "MediaFullScreenInterface.h"
#import "UIAlertViewDelegate.h"
#import "WCNetworkMediaCoreDelegate.h"

@class MMProgressViewEx, MMTimer, MMUILabel, NSString, UIButton, UIView, WCNetworkMediaCore, WCNetworkMediaSlider, WXFullScreenGestureRecognizer;

@interface WXNetworkVideoPlayerView : MMUIView <WCNetworkMediaCoreDelegate, UIAlertViewDelegate, IVOIPUILogicMgrExt, FullScreenGestureDelegate, MediaFullScreenInterface>
{
    WXFullScreenGestureRecognizer *m_gestureView;
    _Bool m_bShouldBeFirstFrame;
    UIView *m_thumbImageView;
    NSString *m_videoUrl;
    id <WXNetworkVideoPlayerViewTouchDelegate> m_touchDelegate;
    WCNetworkMediaCore *m_mediaCore;
    UIView *m_topView;
    UIView *m_bottomView;
    MMUILabel *m_durationLabel;
    MMUILabel *m_currentLabel;
    UIButton *m_playBtn;
    UIButton *m_closeButton;
    WCNetworkMediaSlider *m_progressSlider;
    MMProgressViewEx *m_loadingView;
    MMTimer *m_timer;
    struct CGSize m_videoSize;
}

@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) MMProgressViewEx *m_loadingView; // @synthesize m_loadingView;
@property(retain, nonatomic) WCNetworkMediaSlider *m_progressSlider; // @synthesize m_progressSlider;
@property(retain, nonatomic) UIButton *m_closeButton; // @synthesize m_closeButton;
@property(retain, nonatomic) UIButton *m_playBtn; // @synthesize m_playBtn;
@property(retain, nonatomic) MMUILabel *m_currentLabel; // @synthesize m_currentLabel;
@property(retain, nonatomic) MMUILabel *m_durationLabel; // @synthesize m_durationLabel;
@property(retain, nonatomic) UIView *m_bottomView; // @synthesize m_bottomView;
@property(retain, nonatomic) UIView *m_topView; // @synthesize m_topView;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize;
@property(retain, nonatomic) WCNetworkMediaCore *m_mediaCore; // @synthesize m_mediaCore;
@property(nonatomic) __weak id <WXNetworkVideoPlayerViewTouchDelegate> m_touchDelegate; // @synthesize m_touchDelegate;
@property(retain, nonatomic) NSString *m_videoUrl; // @synthesize m_videoUrl;
@property(retain, nonatomic) UIView *m_thumbImageView; // @synthesize m_thumbImageView;
- (void).cxx_destruct;
- (void)finishFullScreenAnimation:(struct CGRect)arg1;
- (void)beginFullScreenAnimation:(id)arg1;
- (void)beginQuitFullScreenAnimation;
- (id)getQuitAnimationView;
- (void)displayWithFrame:(struct CGRect)arg1;
- (void)resizeToFrame:(struct CGRect)arg1;
- (void)becomeInvisible;
- (void)pause;
- (void)stopPlay;
- (_Bool)startPlay;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onPlayClick;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)refreshCurrentTime;
- (void)showControlViewsInstantly;
- (void)hideControlViewsInstantly;
- (void)hideControlViewsWithAnimation;
- (void)showControlViewsWithAutoHide;
- (void)showControlViews;
- (_Bool)isControlViewsHidden;
- (void)onCloseBtnClick;
- (void)onSliderChange;
- (id)stringFromTimeInterval:(double)arg1;
- (void)updateSubviewsFrame;
- (void)initView;
- (void)initMediaCore;
- (void)whenGoingToResign;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)setTouchDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 VideoUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

