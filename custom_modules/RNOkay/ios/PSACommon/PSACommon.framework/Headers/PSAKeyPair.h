//
//  PSAKeyPair.h
//  PSA
//
//  Created by Pivulski, Nikolai on 14.06.2018.
//

#import <Foundation/Foundation.h>
#import "PSASecretKey.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSAKeyPair : NSObject

@property (strong, readonly) PSASecretKey *publicKey;
@property (strong, readonly) PSASecretKey *privateKey;

- (instancetype)initWithPublicKeyData:(NSData *)publicKeyData
                               privateKeyData:(NSData *)privateKeyData;

@end

NS_ASSUME_NONNULL_END
