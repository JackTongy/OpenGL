//
//  CLESRenderer.h
//  Hello_Triangle
//
//  Created by mac-mini-li on 2018/6/22.
//  Copyright © 2018年 mac-mini-li. All rights reserved.
//

#include "platform/PlatformConfig.h"
#if CL_TARGET_PLATFORM == CL_PLATFORM_IOS

#include "platform/PlatformMacros.h"
#import <QuartzCore/QuartzCore.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>

@protocol ESRenderer <NSObject>

//- (id) initWithDepthFormat:(unsigned int)depthFormat withPixelFormat:(unsigned int)pixelFormat withSharegroup:(EAGLSharegroup*)sharegroup withMultiSampling:(BOOL) multiSampling withNumberOfSamples:(unsigned int) requestedSamples;
- (id)initWithDepthFormat:(unsigned int)depthFormat withPixelFormat:(unsigned int)pixelFormat;

//- (BOOL) resizeFromLayer:(CAEAGLLayer *)layer;

- (EAGLContext*) context;
//- (CGSize) backingSize;

//- (unsigned int) colorRenderBuffer;
//- (unsigned int) defaultFrameBuffer;
//- (unsigned int) msaaFrameBuffer;
//- (unsigned int) msaaColorBuffer;
@end

#endif // CL_PLATFORM_IOS
