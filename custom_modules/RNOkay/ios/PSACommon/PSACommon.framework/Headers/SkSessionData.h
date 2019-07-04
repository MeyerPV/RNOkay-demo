//
//  SkSessionData.h
//  PSACommon
//
//  Created by Sadovsky, Aleksandr on 8/1/18.
//

#import <Foundation/Foundation.h>
#import "PSASecretKey.h"

@interface SkSessionData : NSObject
@property (strong, readonly, nullable) PSASecretKey *skStorage;
@property (strong, readonly, nullable) NSData *nIV;

- (instancetype)initWithSkStorage:(PSASecretKey *)skStorage nIV:(NSData *)nIV;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)dictionary;
@end
