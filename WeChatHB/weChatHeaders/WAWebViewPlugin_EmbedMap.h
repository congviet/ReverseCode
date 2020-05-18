//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "WAMapViewDelegate.h"

@class NSString;

@interface WAWebViewPlugin_EmbedMap : WAWebViewPlugin_embedView <WAMapViewDelegate>
{
}

- (void)onMapIndoorChange:(id)arg1 building:(id)arg2 level:(id)arg3;
- (id)makeIndoorInfoByMapId:(unsigned int)arg1 building:(id)arg2 level:(id)arg3;
- (void)onMapPoiClick:(id)arg1 poi:(id)arg2;
- (void)onMapCalloutClick:(id)arg1 data:(id)arg2;
- (void)onMapTap:(id)arg1;
- (void)onRegionDidChange:(id)arg1 reason:(unsigned long long)arg2;
- (void)onRegionWillChange:(id)arg1;
- (void)onControlClick:(id)arg1 data:(id)arg2;
- (void)onMarkerClick:(id)arg1 data:(id)arg2;
- (_Bool)removeMap:(unsigned int)arg1;
- (id)getMapView:(unsigned int)arg1;
- (_Bool)insertMap:(id)arg1 result:(id *)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onWeAppEnterForeground:(id)arg1;
- (void)onWeAppEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

