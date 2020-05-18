//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class MMTimer, UIView;

@interface FaceRecogScanAnimationView : UIImageView
{
    UIImageView *_faceCircle;
    UIImageView *_faceFrame;
    UIImageView *_faceFrameNet;
    UIView *_faceScanLineBG;
    UIImageView *_faceScanLine;
    UIImageView *_faceStars;
    UIImageView *_resultOkIcon;
    UIImageView *_resultOkStar;
    _Bool _bStop;
    MMTimer *_timer;
    _Bool _darkNet;
}

- (void).cxx_destruct;
- (void)resetView;
- (void)showOK;
- (void)animationFromBottom;
- (void)animationFromTop;
- (void)updateStar;
- (void)stopAnimation;
- (void)startAnimation;
- (void)dealloc;
- (id)init;
- (id)initWithDarkMode:(_Bool)arg1;

@end

