//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBottomBar.h"

@class UIButton;

@interface MMMultiSelectToolView : WCBottomBar
{
    UIButton *m_btnForward;
    UIButton *m_btnFavAdd;
    UIButton *m_btnDelete;
    UIButton *m_btnMore;
    id <MMMultiSelectToolViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <MMMultiSelectToolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onBtnClicked:(id)arg1;
- (void)updateBtnsWithSelectCount:(unsigned int)arg1;
- (id)createBtnWithImg:(id)arg1 Tag:(long long)arg2;
- (void)initSubView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

