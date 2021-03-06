//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class FakeHeadImageView, FakeMainFrameCellData, MMCPLabel, UILabel;

@interface FakeMainFrameItemView : MMUIView
{
    FakeHeadImageView *m_frameHeadView;
    MMCPLabel *m_nameLabel;
    UILabel *m_timeLabel;
    MMCPLabel *m_messageLabel;
    FakeMainFrameCellData *m_cellData;
}

- (void).cxx_destruct;
- (id)getLabelNameColor;
- (void)updateNameLabel;
- (void)updateTimeLabel;
- (void)updateMessageLabel;
- (void)updateHeadView;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)initWithCellData:(id)arg1 frame:(struct CGRect)arg2;

@end

