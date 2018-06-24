//
//  PlatformMacros.h
//  Hello_Triangle
//
//  Created by mac-mini-li on 2018/6/22.
//  Copyright © 2018年 mac-mini-li. All rights reserved.
//

#ifndef __PLATFORM_MACROS_H__
#define __PLATFORM_MACROS_H__

/// @name namespace O
/// @{
#ifdef __cplusplus
#define NS_CL_BEGIN                     namespace chenlyee {
#define NS_CL_END                       }
#define USING_NS_CL                     using namespace chenlyee
#define NS_CL                           ::chenlyee
#else
#define NS_CL_BEGIN
#define NS_CL_END
#define USING_NS_CL
#define NS_CL
#endif
//  end of namespace group
/// @}


#endif /* __PLATFORM_MACROS_H__ */
