//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface FavRightTopMenuView : UIView
{
    id <FavRightTopMenuViewDelegate> _delegate;
    NSArray *_arrTopMenuData;
    UIView *_menuView;
}

@property(retain, nonatomic) UIView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) NSArray *arrTopMenuData; // @synthesize arrTopMenuData=_arrTopMenuData;
@property(nonatomic) __weak id <FavRightTopMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hideMenuView;
- (void)showMenuView;
- (void)onClickMenuBtn:(id)arg1;
- (void)configMenuView;
- (void)configMenuData:(id)arg1;
- (id)init;

@end

