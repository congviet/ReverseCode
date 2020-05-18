//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WCStoryCommentsForSelfShowViewModelDelegate.h"

@class NSMutableArray, NSString, WCStoryCommentsForSelfShowView, WCStoryCommentsForSelfShowViewModel;

@interface WCStoryCommentsForSelfViewController : MMUIViewController <UIViewControllerAnimatedTransitioning, WCStoryCommentsForSelfShowViewModelDelegate, UIViewControllerTransitioningDelegate>
{
    id <WCStoryCommentsForSelfViewControllerDelegate> _delegate;
    NSMutableArray *_commentList;
    WCStoryCommentsForSelfShowView *_commentView;
    WCStoryCommentsForSelfShowViewModel *_viewModel;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) WCStoryCommentsForSelfShowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCStoryCommentsForSelfShowView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(nonatomic) __weak id <WCStoryCommentsForSelfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)WCStoryCommentsForSelfShowViewModelDidDoubleClickHeadView:(id)arg1;
- (void)WCStoryCommentsForSelfShowViewModelDidClickHeadView:(id)arg1;
- (void)viewWillDismiss:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)onDismissViewController;
- (_Bool)hidesStatusBar;
- (void)initViewWithIconFrame:(struct CGRect)arg1;
- (id)initWithCommentList:(id)arg1 iconFrame:(struct CGRect)arg2 withComplete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

