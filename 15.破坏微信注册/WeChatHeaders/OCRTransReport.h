//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface OCRTransReport : NSObject
{
    unsigned int _source;
    unsigned int _captureCost;
    unsigned int _result;
    unsigned int _uploadCost;
    unsigned int _ocrTranslateCost;
    unsigned int _totalCost;
    unsigned int _showOriginCount;
    unsigned int _hasSaveResult;
    unsigned int _hasSaveOrigin;
    NSDate *_startTime;
    NSDate *_captureTime;
    NSDate *_startUploadTime;
    NSDate *_endUploadTime;
    NSDate *_getResultTime;
}

@property(retain, nonatomic) NSDate *getResultTime; // @synthesize getResultTime=_getResultTime;
@property(retain, nonatomic) NSDate *endUploadTime; // @synthesize endUploadTime=_endUploadTime;
@property(retain, nonatomic) NSDate *startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(retain, nonatomic) NSDate *captureTime; // @synthesize captureTime=_captureTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int hasSaveOrigin; // @synthesize hasSaveOrigin=_hasSaveOrigin;
@property(nonatomic) unsigned int hasSaveResult; // @synthesize hasSaveResult=_hasSaveResult;
@property(nonatomic) unsigned int showOriginCount; // @synthesize showOriginCount=_showOriginCount;
@property(nonatomic) unsigned int totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) unsigned int ocrTranslateCost; // @synthesize ocrTranslateCost=_ocrTranslateCost;
@property(nonatomic) unsigned int uploadCost; // @synthesize uploadCost=_uploadCost;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(nonatomic) unsigned int captureCost; // @synthesize captureCost=_captureCost;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)dealloc;
- (void)report;

@end

