//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavMMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavLocRemarkDelegate.h"
#import "FavTagViewDelegate.h"
#import "FavlocationLabelViewDelegate.h"
#import "ILocationMgrExt.h"
#import "IScanStreetViewMgrExt.h"
#import "NavigateLogicControllerDelegate.h"
#import "QMapViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class FavForwardLogicController, FavLocationLabelView, FavoritesBrowseDetailReportData, FavoritesItem, MMHeadImageAnnotation, NSString, NSURL, NavigateLogicController, QMapView, UIButton;

@interface FavLocationDetailViewController : FavMMUIViewController <FavTagViewDelegate, QMapViewDelegate, ILocationMgrExt, FavLocRemarkDelegate, WCActionSheetDelegate, FavForwardLogicDelegate, NavigateLogicControllerDelegate, IScanStreetViewMgrExt, FavlocationLabelViewDelegate>
{
    FavoritesItem *m_favItem;
    QMapView *m_mapView;
    FavLocationLabelView *m_locLabelView;
    struct CLLocationCoordinate2D m_location;
    double m_scale;
    NSString *m_nsPoiName;
    NSString *m_nsLocation;
    NSString *m_nsUserName;
    NSURL *m_streetViewUrl;
    _Bool m_bLoadFinish;
    unsigned long long m_headingTag;
    double m_trueHeading;
    MMHeadImageAnnotation *m_myselfAnnotation;
    UIButton *m_myLocationButton;
    UIButton *m_streetButton;
    FavForwardLogicController *m_favForwardController;
    NavigateLogicController *m_navigateLogicController;
    _Bool _hasReportLocateError;
    FavoritesBrowseDetailReportData *_reportData;
}

@property(retain, nonatomic) FavoritesBrowseDetailReportData *reportData; // @synthesize reportData=_reportData;
- (void).cxx_destruct;
- (id)sessionId;
- (id)getFavForawrdViewController;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)stopUpdateTrueHeading;
- (void)startUpdateTrueHeading;
- (void)onPresentViewControlelr:(id)arg1 Animated:(_Bool)arg2;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)onFavTagEditOK;
- (void)onFavLocReamrkComplete:(id)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(_Bool)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)onEditFavTag;
- (void)onEditFavRemark;
- (id)getLocationText:(struct CLLocationCoordinate2D)arg1;
- (void)onFavTagEditBegin:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (void)onOpenStreetView:(id)arg1;
- (id)getUserLocation;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3;
- (void)onNavigateToPOI:(id)arg1;
- (void)setAnnotation:(id)arg1 Coordinate:(struct CLLocationCoordinate2D)arg2 Animated:(_Bool)arg3 Duration:(float)arg4;
- (_Bool)isOnUserLocation:(struct CLLocationCoordinate2D)arg1;
- (void)onMyLocationButtonClick;
- (void)addAnotation:(struct CLLocationCoordinate2D)arg1;
- (void)hideLoactionLabelView;
- (void)showLocationLabelView;
- (void)showLocationCalloutView;
- (void)OnSendStreetViewLocation:(id)arg1 Err:(int)arg2;
- (void)openStreetView;
- (void)startGetStreetViewUrl;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)reloadStreetBtn;
- (void)initView;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithFavItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

