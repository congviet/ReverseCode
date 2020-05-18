//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSCTarget, NSString, NSTimer;

@interface JSCScreencastSession : NSObject
{
    JSCTarget *_target;
    int _frameId;
    struct vector<bool, std::__1::allocator<bool>> _framesAcked;
    int _frameInterval;
    NSString *_format;
    int _quality;
    int _maxWidth;
    int _maxHeight;
    NSTimer *_timerCookie;
    int _deviceWidth;
    int _deviceHeight;
    int _offsetTop;
    int _pageScaleFactor;
    int _scrollOffsetX;
    int _scrollOffsetY;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)recordingLoop;
- (void)ackFrame:(int)arg1;
- (void)stop;
- (void)start;
- (void)dispose;
- (id)initWithTarget:(id)arg1 format:(id)arg2 quality:(int)arg3 maxWidth:(int)arg4 maxHeight:(int)arg5;

@end

