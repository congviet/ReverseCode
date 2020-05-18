//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavoritesSearchReportData : NSObject
{
    unsigned int _favEntranceScene;
    unsigned int _favEntranceIndex;
    unsigned int _favId;
    unsigned int _actionTimeDuration;
    unsigned int _filterType;
    unsigned long long _actionType;
    unsigned long long _favBeforeEntranceScene;
    NSString *_searchText;
}

@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) unsigned int actionTimeDuration; // @synthesize actionTimeDuration=_actionTimeDuration;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned int favEntranceIndex; // @synthesize favEntranceIndex=_favEntranceIndex;
@property(nonatomic) unsigned long long favBeforeEntranceScene; // @synthesize favBeforeEntranceScene=_favBeforeEntranceScene;
@property(nonatomic) unsigned int favEntranceScene; // @synthesize favEntranceScene=_favEntranceScene;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)init;

@end

