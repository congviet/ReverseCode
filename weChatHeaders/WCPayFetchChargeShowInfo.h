//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCPayFetchChargeShowInfoContent;

@interface WCPayFetchChargeShowInfo : NSObject
{
    unsigned int _m_id;
    WCPayFetchChargeShowInfoContent *_show_info;
}

+ (id)GenFromDictionary:(id)arg1;
@property(retain, nonatomic) WCPayFetchChargeShowInfoContent *show_info; // @synthesize show_info=_show_info;
@property(nonatomic) unsigned int m_id; // @synthesize m_id=_m_id;
- (void).cxx_destruct;
- (void)genFromDic:(id)arg1;

@end

