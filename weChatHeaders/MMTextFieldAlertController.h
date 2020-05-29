//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

#import "UITextFieldDelegate.h"
#import "WCUIAlertViewActionSender.h"

@class NSString;

@interface MMTextFieldAlertController : UIAlertController <UITextFieldDelegate, WCUIAlertViewActionSender>
{
    unsigned int _textFieldMaxLen;
}

- (void)dealloc;
- (id)getTextField;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)setTextFieldWithMaxLen:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
