//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCStoryPageExposeReportObj : NSObject
{
    unsigned long long _pageType;
    NSString *_tid;
}

+ (void)ReportBubbleCommentListExposeWithTid:(id)arg1;
+ (void)ReportExposeWithPageType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (void)reportExpose;

@end

