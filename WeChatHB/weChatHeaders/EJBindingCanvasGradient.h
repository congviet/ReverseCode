//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingBase.h"

@class EJCanvasGradient;

@interface EJBindingCanvasGradient : EJBindingBase
{
    EJCanvasGradient *gradient;
}

+ (void *)_ptr_to_get___type;
+ (void *)_ptr_to_get_instance;
+ (id)gradientFromInstance:(unsigned long long)arg1;
+ (void *)_ptr_to_func_addColorStop;
+ (id)gradientFromJSValue:(struct OpaqueJSValue *)arg1;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 gradient:(id)arg3;
- (struct OpaqueJSValue *)_get___type:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_instance:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func_addColorStop:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)dealloc;

@end

