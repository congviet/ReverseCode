//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJCanvasContextWebGL.h"

@class EJTexture;

@interface EJCanvasContextWebGLTexture : EJCanvasContextWebGL
{
    EJTexture *texture;
}

- (id)texture;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (void)create;
- (void)dealloc;

@end

