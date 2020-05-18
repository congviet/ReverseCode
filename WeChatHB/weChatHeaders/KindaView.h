//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KindaUIViewDelegate.h"
#import "KindaViewBase.h"
#import "MMKView.h"

@class KindaUIView, MMKViewOnClickCallback, MMKViewOnLongClickCallback, NSString, UIView;

@interface KindaView : NSObject <KindaUIViewDelegate, MMKView, KindaViewBase>
{
    float width;
    float height;
    long long alignSelf;
    float flexBasis;
    long long positionType;
    float left;
    float top;
    float right;
    float bottom;
    float minWidth;
    float maxWidth;
    float minHeight;
    float maxHeight;
    float aspectRatio;
    float flexGrow;
    float flexShrink;
    float marginLeft;
    float marginTop;
    float marginRight;
    float marginBottom;
    float paddingLeft;
    float paddingTop;
    float paddingRight;
    float paddingBottom;
    float leftPercent;
    float topPercent;
    float rightPercent;
    float bottomPercent;
    float widthPercent;
    float heightPercent;
    float marginLeftPercent;
    float marginTopPercent;
    float marginRightPercent;
    float marginBottomPercent;
    long long backgroundColor;
    NSString *viewid;
    KindaUIView *m_view;
    MMKViewOnClickCallback *m_onClickCallback;
    MMKViewOnLongClickCallback *m_onLongClickCallback;
    long long m_visible;
    long long m_borderColor;
    long long m_borderPressedColor;
    long long m_shadowColor;
    NSString *m_viewId;
    UIView *parent;
}

@property(nonatomic) __weak UIView *parent; // @synthesize parent;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)notifyLayout;
- (void)onLongGesture:(id)arg1;
- (void)onTapGesture:(id)arg1;
- (float)getAlpha;
- (void)setAlpha:(float)arg1;
- (float)getScaleY;
- (void)setScaleY:(float)arg1;
- (float)getScaleX;
- (void)setScaleX:(float)arg1;
- (float)getRotation;
- (void)setRotation:(float)arg1;
- (_Bool)getEnableHighLight;
- (void)setEnableHighLight:(_Bool)arg1;
- (float)getMarginBottomPercent;
- (void)setMarginBottomPercent:(float)arg1;
- (float)getMarginRightPercent;
- (void)setMarginRightPercent:(float)arg1;
- (float)getMarginTopPercent;
- (void)setMarginTopPercent:(float)arg1;
- (float)getMarginLeftPercent;
- (void)setMarginLeftPercent:(float)arg1;
- (float)getHeightPercent;
- (void)setHeightPercent:(float)arg1;
- (float)getWidthPercent;
- (void)setWidthPercent:(float)arg1;
- (float)getBottomPercent;
- (void)setBottomPercent:(float)arg1;
- (float)getRightPercent;
- (void)setRightPercent:(float)arg1;
- (float)getTopPercent;
- (void)setTopPercent:(float)arg1;
- (float)getLeftPercent;
- (void)setLeftPercent:(float)arg1;
- (void)setTopRightCornerRadius:(float)arg1;
- (void)setTopLeftCornerRadius:(float)arg1;
- (void)setBottomRightCornerRadius:(float)arg1;
- (void)setBottomLeftCornerRadius:(float)arg1;
- (void)initWithPlatformDelegate:(id)arg1;
- (float)getTopRightCornerRadius;
- (float)getTopLeftCornerRadius;
- (float)getBottomRightCornerRadius;
- (float)getBottomLeftCornerRadius;
- (void)setOnLongClickCallback:(id)arg1;
- (void)setOnClickCallback:(id)arg1;
- (void)setOnTouchCallback:(id)arg1;
- (id)getId;
- (void)setId:(id)arg1;
- (float)getShadowRadius;
- (void)setShadowRadius:(float)arg1;
- (float)getShadowOffset;
- (void)setShadowOffset:(float)arg1;
- (long long)getShadowColor;
- (void)setShadowColor:(long long)arg1;
- (float)getCornerRadius;
- (void)setCornerRadius:(float)arg1;
- (long long)getBorderPressedColor;
- (void)setBorderPressedColor:(long long)arg1;
- (long long)getBorderColor;
- (void)setBorderColor:(long long)arg1;
- (float)getBorderWidth;
- (void)setBorderWidth:(float)arg1;
- (long long)getVisible;
- (void)setVisible:(long long)arg1;
- (_Bool)getClickable;
- (void)setClickable:(_Bool)arg1;
- (_Bool)getAccessible;
- (void)setAccessible:(_Bool)arg1;
- (long long)getBackgroundColor;
- (void)setBackgroundColor:(long long)arg1;
- (float)getPaddingBottom;
- (void)setPaddingBottom:(float)arg1;
- (float)getPaddingRight;
- (void)setPaddingRight:(float)arg1;
- (float)getPaddingTop;
- (void)setPaddingTop:(float)arg1;
- (float)getPaddingLeft;
- (void)setPaddingLeft:(float)arg1;
- (float)getMarginBottom;
- (void)setMarginBottom:(float)arg1;
- (float)getMarginRight;
- (void)setMarginRight:(float)arg1;
- (float)getMarginTop;
- (void)setMarginTop:(float)arg1;
- (float)getMarginLeft;
- (void)setMarginLeft:(float)arg1;
- (float)getFlexShrink;
- (void)setFlexShrink:(float)arg1;
- (float)getFlexGrow;
- (void)setFlexGrow:(float)arg1;
- (float)getAspectRatio;
- (void)setAspectRatio:(float)arg1;
- (float)getMaxHeight;
- (void)setMaxHeight:(float)arg1;
- (float)getMinHeight;
- (void)setMinHeight:(float)arg1;
- (float)getMaxWidth;
- (void)setMaxWidth:(float)arg1;
- (float)getMinWidth;
- (void)setMinWidth:(float)arg1;
- (float)getBottom;
- (void)setBottom:(float)arg1;
- (float)getRight;
- (void)setRight:(float)arg1;
- (float)getTop;
- (void)setTop:(float)arg1;
- (float)getLeft;
- (void)setLeft:(float)arg1;
- (long long)getPositionType;
- (void)setPositionType:(long long)arg1;
- (float)getFlexBasis;
- (void)setFlexBasis:(float)arg1;
- (long long)getAlignSelf;
- (void)setAlignSelf:(long long)arg1;
- (float)getHeight;
- (void)setHeight:(float)arg1;
- (float)getWidth;
- (void)setWidth:(float)arg1;
- (id)getViewId;
- (void)setViewId:(id)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

