//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MyFavoritesDB;

@interface FavoritesTagDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (id)getFavoritesItemDBByLocalId:(unsigned int)arg1;
- (id)getTagItemListByTags:(id)arg1;
- (_Bool)getTags:(id)arg1 byFavLocalId:(unsigned int)arg2;
- (_Bool)getDistinctTags:(id)arg1;
- (_Bool)deleteTagsByLocalFavId:(unsigned int)arg1;
- (_Bool)insertTag:(id)arg1 withFavLocalId:(unsigned int)arg2;
- (void)initDB:(id)arg1;
- (id)init;

@end

