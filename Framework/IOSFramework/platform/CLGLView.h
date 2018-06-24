//
//  CLGLView.hpp
//  Hello_Triangle
//
//  Created by mac-mini-li on 2018/6/22.
//  Copyright © 2018年 mac-mini-li. All rights reserved.
//

#ifndef __CL_GLVIEW_H__
#define __CL_GLVIEW_H__

#import "PlatformConfig.h"

/** @struct GLContextAttrs
 *
 * There are six opengl Context Attrs.
 */
struct GLContextAttrs
{
    unsigned int redBits;
    unsigned int greenBits;
    unsigned int blueBits;
    unsigned int alphaBits;
    unsigned int depthBits;
    unsigned int stencilBits;
};

class GLView
{
public:
    GLView();
    
    virtual ~GLView() = 0;
    
    /** The OpenGL context attrs. */
    static void setGLContextAttrs(GLContextAttrs& glContextAttrs);
    
    static GLContextAttrs getGLContextAttrs();
    
    static GLContextAttrs _glContextAttrs;
    
    
    
#if CL_TARGET_PALTFORM == CL_PLATFORM_IOS
    virtual void* getEAGLView(){return nullptr;}
#endif
};

#endif /* __CL_GLVIEW_H__ */
