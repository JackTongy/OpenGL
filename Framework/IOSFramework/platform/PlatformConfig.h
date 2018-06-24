//
//  PlatformConfig.h
//  Hello_Triangle
//
//  Created by mac-mini-li on 2018/6/22.
//  Copyright © 2018年 mac-mini-li. All rights reserved.
//

#ifndef __PLATFORM_CONFIG_H__
#define __PLATFORM_CONFIG_H__

// define supported target platform macro which CC uses.
#define CL_PLATFORM_UNKNOWN            0
#define CL_PLATFORM_IOS                1

// iphone
#ifdef CC_TARGET_OS_IPHONE
#undef CL_TARGET_PLATFORM
#define CL_TARGET_PLATFORM CL_PLATFORM_IOS
#endif

#endif /* __PLATFORM_CONFIG_H__ */
