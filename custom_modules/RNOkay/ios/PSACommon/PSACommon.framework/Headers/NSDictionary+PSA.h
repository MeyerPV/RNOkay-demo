//
//  NSDictionary+PSA.h
//  PSA
//
//  Created by Pivulski, Nikolai on 29.06.2018.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (PSA)

- (nullable NSNumber *)integerValueForKey:(NSString *)key;
- (nullable UIColor *)colorValueForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
