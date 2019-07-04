//
//  PSAJsonByteObjectConverter.h
//  PSA
//
//  Created by Pivulski, Nikolai on 21.06.2018.
//

#import <Foundation/Foundation.h>
#import "PSABaseRequest.h"
#import "PSABaseResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSAJsonByteObjectConverter : NSObject

+ (nullable NSData *)dataFromRequest:(nullable PSABaseRequest *)object;
+ (nullable PSABaseResponse *)responseFromData:(nullable NSData *)data objectClass:(Class)objectClass;

+ (nullable NSDictionary *)dictionaryFromData:(nullable NSData *)data;
+ (nullable NSData *)dataFromDictionary:(nullable NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
