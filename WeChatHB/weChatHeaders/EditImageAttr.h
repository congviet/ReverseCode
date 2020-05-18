//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CALayer, NSMutableArray, NSString, UIImage, WCLocationInfo;

@interface EditImageAttr : MMObject
{
    _Bool _isEdited;
    NSString *_url;
    UIImage *_editedImage;
    NSMutableArray *_drawViewArray;
    CALayer *_overlayLayer;
    WCLocationInfo *_locationInfo;
    unsigned long long _startEditTimeInMs;
}

@property(nonatomic) unsigned long long startEditTimeInMs; // @synthesize startEditTimeInMs=_startEditTimeInMs;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) NSMutableArray *drawViewArray; // @synthesize drawViewArray=_drawViewArray;
@property(retain, nonatomic) UIImage *editedImage; // @synthesize editedImage=_editedImage;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithAssetUrl:(id)arg1 withImage:(id)arg2 withDrawLayer:(id)arg3 withEdited:(_Bool)arg4;

@end

