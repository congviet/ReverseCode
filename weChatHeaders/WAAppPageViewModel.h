//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAAppMessageBaseViewModel.h"

#import "IWAUpdatableMsgMgrExt.h"

@class CContact, NSString;

@interface WAAppPageViewModel : WAAppMessageBaseViewModel <IWAUpdatableMsgMgrExt>
{
    double _cacheTitleHeight;
    double _cacheDescHeight;
    double _cacheUpdatableContentHeight;
    CContact *_appContact;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(retain, nonatomic) CContact *appContact; // @synthesize appContact=_appContact;
- (void).cxx_destruct;
- (void)onUpdatableMsgEntryStateChanged:(id)arg1;
- (id)getSubscribeMsgText;
- (_Bool)shouldShowSubscribeEntry;
- (id)getLatestUpdatableMsgInfo;
- (_Bool)shouldShowUpdatableContent;
- (double)waSystemTextFontSize;
- (id)getImageIfDownFail;
- (id)scaleFixOriginThumbImage;
- (id)originThumbImage;
- (unsigned int)thumbDownloadStatus;
- (struct CGSize)waSystemTextViewSize;
- (double)imageHeight;
- (double)descHeight;
- (double)updatableContentHeight;
- (double)titleHeight;
- (struct CGSize)measure:(struct CGSize)arg1;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)additionalAccessibilityDescription;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

