//
//  PSALog.h
//  PSA
//
//  Created by Pivulski, Nikolai on 27.06.2018.
//

#import <Foundation/Foundation.h>

#ifndef PSALog_h
#define PSALog_h

#ifdef DEBUG
#define PSALog(args...) [PSALog info:__FILE__ :__LINE__ :__PRETTY_FUNCTION__ :args]
#else
#define PSALog(...)
#endif

@protocol PSALogger
- (void)info:(nullable NSString *)file
            :(int)lineNumber
            :(nullable NSString *)functionName
            :(nullable NSString *)message;
@end

@interface PSALog : NSObject
+ (void)initWithLogger:(id<PSALogger>)logger;
+ (void)info:(const char *)file :(int)lineNumber :(const char *)function :(NSString *)format, ...;
@end

#endif /* PSALog_h */
