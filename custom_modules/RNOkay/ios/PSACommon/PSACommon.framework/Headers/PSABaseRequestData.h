//
//  PSAClientData.h
//  PSA
//
//  Created by Pivulski, Nikolai on 21.06.2018.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PSABaseRequestData : NSObject

@property (strong, readonly, nullable) NSData *nonce;

- (instancetype)initWithNonce:(nullable NSData *)nonce;

- (nullable NSDictionary<NSString *, id> *)requestDictionary;

@end

NS_ASSUME_NONNULL_END
