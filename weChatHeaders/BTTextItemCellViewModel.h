//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTReaderItemCellViewModel.h"

#import "RichTextLayoutDelegate.h"

@class NSString;

@interface BTTextItemCellViewModel : BTReaderItemCellViewModel <RichTextLayoutDelegate>
{
    _Bool _canFullText;
    _Bool _isFullText;
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
@property(nonatomic) _Bool isFullText; // @synthesize isFullText=_isFullText;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (id)coverImgURL;
- (id)titleLabelStyles;
@property(readonly, nonatomic) unsigned long long parserTypes;
@property(readonly, nonatomic) _Bool canFullText;
- (struct CGSize)titleSize;
- (double)viewHeight;
- (id)itemViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
