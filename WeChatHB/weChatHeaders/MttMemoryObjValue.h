//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MttMemoryCommon.h"

@class MttMemory;

@interface MttMemoryObjValue : MttMemoryCommon
{
    int _pos;
    MttMemory *_obj;
}

+ (id)instanceWithPropertyInfo:(id)arg1;
@property(retain, nonatomic) MttMemory *obj; // @synthesize obj=_obj;
@property(nonatomic) int pos; // @synthesize pos=_pos;
- (void).cxx_destruct;
- (id)JSONObject;

@end

