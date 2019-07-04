//
//  SensitiveData.h
//  PSA
//
//  Created by Sadovsky, Aleksandr on 7/31/18.
//

#import <Foundation/Foundation.h>
#import "PSASecretKey.h"

@interface SensitiveData : NSObject
@property (strong, readonly, nullable) PSASecretKey *prvClient;
@property (strong, readonly, nullable) PSASecretKey *pubSps;
@property (copy, readonly, nullable) NSString *appInstanceId;

- (instancetype)initWithPrvClient:(PSASecretKey *)prvClient
                           pubSps:(PSASecretKey *)pubSps
                    appInstanceId:(NSString *)appInstanceId;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (NSDictionary *)dictionary;
@end
