//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, WCADCanvasInfo, WCAdWeAppInfo;

@interface WCADTurnActionInfo : NSObject <NSCoding>
{
    int _actionType;
    NSString *_adActionLink;
    WCAdWeAppInfo *_weappInfo;
    WCADCanvasInfo *_canvasInfo;
}

@property(retain, nonatomic) WCADCanvasInfo *canvasInfo; // @synthesize canvasInfo=_canvasInfo;
@property(retain, nonatomic) WCAdWeAppInfo *weappInfo; // @synthesize weappInfo=_weappInfo;
@property(retain, nonatomic) NSString *adActionLink; // @synthesize adActionLink=_adActionLink;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

