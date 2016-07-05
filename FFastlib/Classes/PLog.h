//
//  PLog.h
//  Pods
//
//  Created by yunfenghan Ling on 6/2/16.
//
//

#ifndef PLog_h
#define PLog_h


#endif /* PLog_h */

#ifdef DEBUG
#define PLog(format, ...) NSLog(format, ## __VA_ARGS__)
#else
#define PLog(format, ...)
#endif