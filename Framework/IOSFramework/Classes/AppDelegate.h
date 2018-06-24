//
//  AppDelegate.hpp
//  Hello_Triangle
//
//  Created by mac-mini-li on 2018/6/22.
//  Copyright © 2018年 mac-mini-li. All rights reserved.
//

#ifndef __APP_DELEGATE_H__
#define __APP_DELEGATE_H__

class AppDelegate
{
public:
    AppDelegate();
    virtual ~AppDelegate();
    
    virtual void initGLContextAttrs();
    
    virtual void applicationDidFinishLaunching();
    
    virtual void applicationDidEnterBackgound();
    
    virtual void applicationDidEnterForegound();
    
    virtual void update(float delayTime);
};

#endif /* __APP_DELEGATE_H__ */
