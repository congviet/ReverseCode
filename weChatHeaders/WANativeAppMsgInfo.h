//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WANativeAppMsgInfo : MMObject
{
    unsigned int _type;
    NSString *_appNameMultiLanguageKey;
}

@property(retain, nonatomic) NSString *appNameMultiLanguageKey; // @synthesize appNameMultiLanguageKey=_appNameMultiLanguageKey;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)appDisplayName;
- (_Bool)isValid;
- (_Bool)isNearbyNativeAppMsg;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

