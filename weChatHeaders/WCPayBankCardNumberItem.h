//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayTenpaySecureCtrlItem.h"

@class NSString, UILabel;

@interface WCPayBankCardNumberItem : WCPayTenpaySecureCtrlItem
{
    UILabel *m_bankcardLabel;
    NSString *m_value;
    _Bool m_isUnselectable;
    NSString *m_starBankNumber;
}

@property(retain, nonatomic) NSString *m_starBankNumber; // @synthesize m_starBankNumber;
- (void).cxx_destruct;
- (void)setBankCardNumber:(id)arg1 starBankNumber:(id)arg2;
- (id)getValue;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;

@end

