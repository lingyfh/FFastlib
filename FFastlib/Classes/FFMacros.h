//
//  FFMacros.h
//  Pods
//
//  Created by yunfenghan Ling on 7/5/16.
//
//

#define mark - 一些常用方法，常量

// 当前是否为测试模式
#ifdef DEBUG
#define FFDEBUG_MODE YES
#else
#define FFDEBUG_MODE NO
#endif

// 将16进制的颜色值,透明度，转换为uicolor
#define UIColorFromRGBA(rgbValue, alphaValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(float)alphaValue]

#define UIColorFromRGB(rgbValue) UIColorFromRGBA(rgbValue, 1.0)

// 设置尺寸
#define FFDeviceRect [[UIScreen mainScreen] bounds]
#define FFSCREEN_SCALE [[UIScreen mainScreen] scale]
#define FFScreen_W [UIScreen mainScreen].currentMode.size.width
#define FFScreen_H [UIScreen mainScreen].currentMode.size.height

// 当前系统语言
#define FFCurrentLanguage [[NSLocale preferredLanguages] count] > 0 ? [[NSLocale preferredLanguages] objectAtIndex:0] : @""
#define FFAppVerName [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define FFAppVerCode [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define FFAppBundleID [[NSBundle mainBundle] bundleIdentifier]
#define FFSysName [[[UIDevice currentDevice] systemName] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]
#define FFSysVersion [[[UIDevice currentDevice] systemVersion] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]
#define FFSysModel [[[UIDevice currentDevice] model] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]