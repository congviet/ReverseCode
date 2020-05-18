//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPlayerControlView.h"

#import "SightIconViewDelegate.h"
#import "VideoProgressBarDelegate.h"

@class MMUILabel, NSObject<WCPlayerConfigDelegate>, NSString, SightIconView, UIButton, UIImageView, UILabel, UIView, VideoProgressBar, WCPlayerConfig;

@interface WCPlayerConfigControlView : WCPlayerControlView <SightIconViewDelegate, VideoProgressBarDelegate>
{
    _Bool _fullScreen;
    _Bool _shrink;
    NSObject<WCPlayerConfigDelegate> *_delegate;
    UIView *_toolPanView;
    UIImageView *_topToolView;
    UIImageView *_bottomToolView;
    VideoProgressBar *_progressBar;
    SightIconView *_iconView;
    UILabel *_hintLabel;
    UIButton *_closeButton;
    MMUILabel *_errorLabel;
    UIButton *_attachButton;
    WCPlayerConfig *_playerConfig;
}

@property(nonatomic) _Bool shrink; // @synthesize shrink=_shrink;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) WCPlayerConfig *playerConfig; // @synthesize playerConfig=_playerConfig;
@property(retain, nonatomic) UIButton *attachButton; // @synthesize attachButton=_attachButton;
@property(retain, nonatomic) MMUILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) VideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIImageView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(retain, nonatomic) UIImageView *topToolView; // @synthesize topToolView=_topToolView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) __weak NSObject<WCPlayerConfigDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (void)updateVideoTotalTime:(double)arg1;
- (void)hiddenDownloadPercentView;
- (void)showBufferingView;
- (void)showDownloadPercentView;
- (void)onTapSightIconView;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)onVideoPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)setProgress:(double)arg1;
- (void)onProgressEnd;
- (void)setAttachButtonTitle:(id)arg1;
- (void)onCloseButtonTap:(id)arg1;
- (void)updateBottomToolViewWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)updateTopToolViewWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1 Delegate:(id)arg2 Config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

