//
//  PSANetworkingUtils.h
//  PSA
//
//  Created by Pivulski, Nikolai on 20.06.2018.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PSANetworkingUtils : NSObject

+ (void)runDataTaskWithURLRequest:(nullable NSURLRequest *)urlRequest completion:(void (^)(NSData *, NSError *))completion;
+ (nullable NSURLRequest *)createRequestWithURL:(nullable NSURL *)url httpMethod:(NSString *)httpMethod httpBody:(NSData *)httpBody;

@end

NS_ASSUME_NONNULL_END
