//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface InternalFavorDescView : UIView
{
    id <InternalFavorDescViewDelegate> _m_delegate;
}

@property(nonatomic) __weak id <InternalFavorDescViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)updateDescList:(id)arg1 selected:(_Bool)arg2 totalDiscount:(id)arg3;
- (void)onClick;
- (id)init;

@end

