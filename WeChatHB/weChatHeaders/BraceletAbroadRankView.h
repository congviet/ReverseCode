//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ShareViewDelegate.h"

@class DeviceRankInfo, NSString, UILabel;

@interface BraceletAbroadRankView : UIView <ShareViewDelegate>
{
    DeviceRankInfo *m_rankInfo;
    UILabel *m_oShareLabel;
    id <BraceletAbroadRankViewDelegate><NSObject> _delegate;
}

@property(nonatomic) __weak id <BraceletAbroadRankViewDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClick;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 DeviceRankInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

