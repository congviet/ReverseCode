//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmojiInfoObj, NSMutableSet, NSString;

@interface EmoticonDownloadInfo : NSObject
{
    _Bool _isDownloading;
    NSString *_key;
    EmojiInfoObj *_emojiInfoObj;
    NSMutableSet *_msgWrapSet;
}

@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) NSMutableSet *msgWrapSet; // @synthesize msgWrapSet=_msgWrapSet;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;

@end

