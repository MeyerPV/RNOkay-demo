//
//  PSABaseResponse.h
//  PSA
//
//  Created by Pivulski, Nikolai on 21.06.2018.
//

#import <Foundation/Foundation.h>
#import "PSABaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSABaseResponse : NSObject

@property (copy, readonly) NSString *encryptedBody;
@property (copy, readonly) NSString *signature;
@property (copy, readonly) NSDictionary *status;

- (void)setResponseDictionary:(NSDictionary *)dictionary;
- (void)setDecryptedBody:(NSDictionary<NSString *, id> *)decryptedBody;

// To override
- (NSString *)encryptedBodyKey;
- (NSString *)signatureKey;
- (NSString *)statusKey;

@end

NS_ASSUME_NONNULL_END
