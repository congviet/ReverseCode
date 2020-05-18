//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKWebView.h"

@class NSString, QBWKWebViewProxy;

@interface QBWKWebView : WKWebView
{
    QBWKWebViewProxy *_webViewProxy;
    _Bool _isInitialized;
    _Bool _isRemovedFrameInfo;
    _Bool _needInjectJsInNetwork;
    _Bool _isSelfProxyEnabled;
    NSString *_currentUserAgent;
    _Bool _hadAppendQBWebViewFlagToUA;
    _Bool _isULinksEnable;
}

+ (_Bool)isProzyAvailable;
+ (id)appendQBWebViewFlagToUA_LessThan_9_0;
+ (long long)WKProzyErrorCode;
+ (void)clearProzyMemory;
+ (_Bool)enableWKProzy:(id *)arg1;
+ (void)initialize;
@property(nonatomic) _Bool isULinksEnable; // @synthesize isULinksEnable=_isULinksEnable;
- (void).cxx_destruct;
- (void)removeFrameInfo;
- (void)destroy;
- (void)delayRelease;
- (void)dealloc;
- (id)reload;
- (id)goForward;
- (id)goBack;
@property(readonly, copy, nonatomic) NSString *selectedString;
- (id)standardizationURLString:(id)arg1;
- (id)loadRequest:(id)arg1;
- (void)addUserScirpt:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(_Bool)arg3;
- (id)UIDelegate;
- (void)setUIDelegate:(id)arg1;
- (id)navigationDelegate;
- (void)setNavigationDelegate:(id)arg1;
- (id)customUserAgent;
- (void)setCustomUserAgent:(id)arg1;
- (void)appendQBWebViewFlagToUA;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)qbSetCookie:(id)arg1;
- (void)doInit;

@end

