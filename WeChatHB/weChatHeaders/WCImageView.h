//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIControl.h"

#import "MMDragDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCFacadeExt.h"
#import "WCForceTouchPreviewProtocol.h"

@class MMDragManager, MMFICImageTableChunk, NSString, UIDragInteraction, UIImage, UIImageView, UILabel, UINavigationController, UIView, WCDataItem, WCMediaItem;

@interface WCImageView : MMUIControl <WCFacadeExt, WCActionSheetDelegate, WCForceTouchPreviewProtocol, MMDragDelegate>
{
    WCDataItem *m_dataItem;
    WCMediaItem *m_mediaData;
    int m_uiImageType;
    int m_uiPrecedentImageType;
    unsigned int m_uiSourceType;
    _Bool m_bIsLongPressHandled;
    int m_style;
    int m_photoType;
    _Bool m_isImageReady;
    UIImageView *m_imageView;
    UINavigationController *navigationController;
    UIImageView *m_lockStausView;
    UIImageView *m_sharedStausView;
    UILabel *m_nickLabel;
    UIView *m_highLightView;
    id <WCImageViewDelegate> m_delegate;
    _Bool _isGridPreviewImg;
    MMFICImageTableChunk *_imageDataChunk;
    MMDragManager *dragManager;
    UIImageView *tmp_liftingImgView;
    UIDragInteraction *dragInteraction;
    UIImage *m_image;
}

@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(retain, nonatomic) MMFICImageTableChunk *imageDataChunk; // @synthesize imageDataChunk=_imageDataChunk;
@property(readonly, nonatomic) _Bool m_isImageReady; // @synthesize m_isImageReady;
@property(nonatomic) int m_photoType; // @synthesize m_photoType;
@property(nonatomic) int m_style; // @synthesize m_style;
@property(nonatomic) unsigned int m_uiSourceType; // @synthesize m_uiSourceType;
@property(readonly, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView;
@property(readonly, nonatomic) UIImage *m_image; // @synthesize m_image;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController;
@property(nonatomic) __weak id <WCImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) int m_uiImageType; // @synthesize m_uiImageType;
@property(readonly, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)showOwnerNickname:(_Bool)arg1 username:(id)arg2;
- (void)showSharedStatus:(_Bool)arg1;
- (void)showLockStatus:(_Bool)arg1;
- (void)LongPressEvents;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationShow:(_Bool)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)triggerClickAction;
- (void)onClickWCImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMediaData:(id)arg1 imageType:(int)arg2 isGridPreviewImg:(_Bool)arg3;
- (id)initWithMediaData:(id)arg1 imageType:(int)arg2 precedentImageType:(int)arg3;
- (id)initWithMediaData:(id)arg1 imageType:(int)arg2;
- (void)initData:(id)arg1 imageType:(int)arg2 precedentImageType:(int)arg3;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)reloadImage;
- (id)getImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

