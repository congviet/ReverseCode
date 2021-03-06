//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "MMImagePickerManagerDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, UINavigationController;

@interface WAJSEventHandler_chooseMultiMedia : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    UINavigationController *m_oVideoPicker;
    NSMutableArray *m_localIds;
    _Bool _savedAssets;
    _Bool _savedImage;
    _Bool _isFromPicker;
    unsigned int _maxDuration;
    unsigned int _processedAssetCount;
    long long _count;
    NSMutableArray *_mediaObjectArray;
    NSMutableArray *_resultObjectArray;
    NSObject<OS_dispatch_queue> *_queueCopyVideoFile;
    NSMutableArray *_imagesIndex;
    double _locationDistance;
    NSString *_poiName;
    struct CLLocationCoordinate2D _coordinate;
}

@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) double locationDistance; // @synthesize locationDistance=_locationDistance;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSMutableArray *imagesIndex; // @synthesize imagesIndex=_imagesIndex;
@property(nonatomic) unsigned int processedAssetCount; // @synthesize processedAssetCount=_processedAssetCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueCopyVideoFile; // @synthesize queueCopyVideoFile=_queueCopyVideoFile;
@property(retain, nonatomic) NSMutableArray *resultObjectArray; // @synthesize resultObjectArray=_resultObjectArray;
@property(retain, nonatomic) NSMutableArray *mediaObjectArray; // @synthesize mediaObjectArray=_mediaObjectArray;
@property(nonatomic) _Bool isFromPicker; // @synthesize isFromPicker=_isFromPicker;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) unsigned int maxDuration; // @synthesize maxDuration=_maxDuration;
- (void).cxx_destruct;
- (unsigned int)generateScoreWithDistance:(int)arg1;
- (id)generateMediaMarkInfoWithTime:(unsigned int)arg1 andDistance:(int)arg2;
- (void)dismissPicker;
- (id)getImageOrientationString:(long long)arg1;
- (void)didTakeVideoWithIndex:(int)arg1;
- (void)asyncHandleCancel;
- (int)getVideoDuration:(id)arg1;
- (void)handleImageByLoacalIds:(id)arg1;
- (void)handleImageByImage:(id)arg1;
- (void)processVideo:(id)arg1 withIndex:(int)arg2;
- (void)processVideo:(id)arg1;
- (void)processVideoFromPicker:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightCameraCancel;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (void)showAlbumPicker;
- (void)showSystemCamera;
- (void)showSightCamera;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

