//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WCProductUtil : MMObject
{
}

+ (id)wcProductInfo2WCUploadTask:(id)arg1;
+ (id)wcProductInfo2MessageWrap:(id)arg1;
+ (_Bool)isShowService:(unsigned int)arg1;
+ (_Bool)isEnoughProductInfoToShow:(id)arg1;
+ (id)getDistance:(unsigned int)arg1;
+ (id)getPriceSection:(id)arg1 lowPrice:(unsigned int)arg2 highPrice:(unsigned int)arg3;
+ (id)getPriceSingle:(id)arg1 price:(unsigned int)arg2;
+ (float)clientPrice2ServerPrice:(id)arg1;
+ (id)serverPrice2ClientPrice:(unsigned int)arg1;
+ (_Bool)canReturn:(unsigned int)arg1;
+ (_Bool)hasWarranty:(unsigned int)arg1;
+ (_Bool)hasReceipt:(unsigned int)arg1;
+ (_Bool)isFreePost:(unsigned int)arg1;

@end

