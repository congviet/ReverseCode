//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QMapKit/QAnnotationView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface QAnnotationView (ExtendedAnimation) <CAAnimationDelegate>
- (void)animationWithDuration:(double)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animationWithDuration:(double)arg1 coordinates:(struct CLLocationCoordinate2D *)arg2 coordinatesCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tb_executeAnimation:(id)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)tb_constructKeyframeAnimationWithCoordinates:(struct CLLocationCoordinate2D *)arg1 coordinateCount:(unsigned long long)arg2 duration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

