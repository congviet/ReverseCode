//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MemberListViewController.h"

#import "IContactRelatedGroupDataExt.h"
#import "MemberDataDelegate.h"

@class CContact, ContactRelatedGroupLogic, NSString;

@interface ContactRelatedChatRoomListViewController : MemberListViewController <MemberDataDelegate, IContactRelatedGroupDataExt>
{
    NSString *_customTitle;
    ContactRelatedGroupLogic *_relatedGroupLogic;
    CContact *_contact;
}

@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) ContactRelatedGroupLogic *relatedGroupLogic; // @synthesize relatedGroupLogic=_relatedGroupLogic;
@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
- (void).cxx_destruct;
- (void)onCRGDataUpdated;
- (void)commitEditingStyle:(long long)arg1 ForIndexPath:(id)arg2;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (long long)getEditingStyleForIndexPath:(id)arg1;
- (void)JumpToChatRoom:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (double)cellHeight;
- (void)showContactInfoView:(id)arg1;
- (void)updateCount;
- (_Bool)hasIndexBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

