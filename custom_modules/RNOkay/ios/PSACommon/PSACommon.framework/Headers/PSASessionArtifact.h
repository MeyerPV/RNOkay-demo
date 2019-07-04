//
//  PSASessionArtifact.h
//  PSA
//
//  Created by Pivulski, Nikolai on 05.07.2018.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PSASessionArtifact : NSObject

- (instancetype)initWithType:(NSNumber *)type;

- (nullable NSDictionary<NSString *, id> *)requestDictionary;

@end

NS_ASSUME_NONNULL_END
