//
//  PSACryptUtilsSymmetric.h
//  PSA
//
//  Created by Pivulski, Nikolai on 19.06.2018.
//

#import <Foundation/Foundation.h>
#import "PSASecretKey.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSACryptUtilsSymmetric : NSObject

+ (nullable PSASecretKey *)generateSecretKey;
+ (nullable NSData *)generateIV;
+ (nullable PSASecretKey *)restoreKeyFromData:(nullable NSData *)secretKey;
+ (nullable NSData *)encryptData:(nullable NSData *)data secretKey:(nullable PSASecretKey *)secretKey iv:(nullable NSData *)iv;
+ (nullable NSData *)decryptData:(nullable NSData *)encryptedData secretKey:(nullable PSASecretKey *)secretKey iv:(nullable NSData *)iv;

@end

NS_ASSUME_NONNULL_END
