//
//  PSACryptUtils.h
//  PSA
//
//  Created by Pivulski, Nikolai on 14.06.2018.
//

#import <Foundation/Foundation.h>
#import "PSACryptUtilsB64.h"
#import "PSACryptUtilsAsymmetric.h"
#import "PSACryptUtilsSymmetric.h"
#import "PSACryptUtilsMD5.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSACryptUtils : NSObject

+ (nullable NSData *)generateNonce;

+ (nullable NSData *)generateNonce:(nullable NSString *)seed data:(nullable NSData *)data;

+ (void)logCryptoPPException:(const char *)exceptionUTF8String;

@end

NS_ASSUME_NONNULL_END
