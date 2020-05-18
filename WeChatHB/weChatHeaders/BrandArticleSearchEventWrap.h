//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSJSEventDelegate.h"

@class BrandArticleSearchLogic, NSString;

@interface BrandArticleSearchEventWrap : NSObject <FTSJSEventDelegate>
{
    id <BrandArticleSearchEventWrapDelegate> _delegate;
    BrandArticleSearchLogic *_searchLogic;
}

@property(retain, nonatomic) BrandArticleSearchLogic *searchLogic; // @synthesize searchLogic=_searchLogic;
@property(nonatomic) __weak id <BrandArticleSearchEventWrapDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onSearchInputChanged:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onFailReceiveJson;
- (void)onReceiveJson:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

