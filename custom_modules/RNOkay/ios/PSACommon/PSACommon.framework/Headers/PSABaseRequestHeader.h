//
//  PSABaseRequestHeader.h
//  PSA
//
//  Created by Pivulski, Nikolai on 21.06.2018.
//

#import <Foundation/Foundation.h>
#import "PSASecretKey.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSABaseRequestHeader : NSObject

@property (strong, readonly) NSNumber *type;
@property (strong, readonly) NSData *nIV;
@property (strong, readonly) PSASecretKey *symmetricKeyPSA;

- (instancetype)initWithType:(NSNumber *)type;

- (nullable NSDictionary<NSString *, id> *)requestDictionary;

@end

NS_ASSUME_NONNULL_END
