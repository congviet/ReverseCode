//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CBottle, CBottleContact, CMessageWrap, NSString;

@protocol IBottleMgrExt

@optional
- (void)OnUpdateBottle:(unsigned int)arg1;
- (void)OnDeleteSessionByBottle:(CBottle *)arg1;
- (void)OnBottleBan:(unsigned int)arg1 FishNetNum:(unsigned int)arg2;
- (void)OnGetCountOK:(unsigned int)arg1 FishNetNum:(unsigned int)arg2;
- (void)OnGetCountFail;
- (void)OnFishNumChanged:(unsigned int)arg1;
- (void)OnThrowNumChanged:(unsigned int)arg1;
- (void)OnThrowBack:(unsigned int)arg1;
- (void)OnThrowBackFail;
- (void)OnFishBottleFail:(unsigned int)arg1;
- (void)OnFishBottleOK:(unsigned int)arg1 fishCount:(unsigned int)arg2 msgType:(unsigned int)arg3 userName:(NSString *)arg4 bottle:(CBottle *)arg5;
- (void)OnOpenBottleFail;
- (void)OnOpenBottleOK:(CBottle *)arg1 Contact:(CBottleContact *)arg2 MsgWrap:(CMessageWrap *)arg3;
- (void)OnThrowBottleFail:(unsigned int)arg1;
- (void)OnThrowBottleOK:(unsigned int)arg1 throwCount:(unsigned int)arg2 distance:(unsigned int)arg3;
@end

