//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMScrollActionSheetItem : NSObject
{
    _Bool _disable;
    UIImage *_iconImg;
    NSString *_title;
    id _userInfo;
    double _alpha;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
- (void).cxx_destruct;
- (id)init;

@end

