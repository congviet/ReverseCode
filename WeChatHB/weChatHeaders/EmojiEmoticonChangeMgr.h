//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EmojiEmoticonChangeMgr : NSObject
{
    struct map<unsigned long long, tagEmojiItem *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, tagEmojiItem *>>> m_mapEmojiChangeFromSoftbankToUnified;
    struct map<unsigned long long, tagEmojiItem *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, tagEmojiItem *>>> m_mapEmojiChangeFromUnifiedToSoftbank;
}

+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)countEmojiFromSoftbank:(id)arg1;
- (unsigned int)countEmojiFromUnified:(id)arg1;
- (id)changeEmojiFromSoftbankToUnified:(id)arg1;
- (void)dealloc;
- (id)init;

@end

