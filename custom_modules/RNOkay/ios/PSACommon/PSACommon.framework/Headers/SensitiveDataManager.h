//
//  SensitiveDataManager.h
//  PSACommon
//
//  Created by Sadovsky, Aleksandr on 8/1/18.
//

#import <Foundation/Foundation.h>
#import "SensitiveData.h"
#import "PSASecretKey.h"

@interface SensitiveDataManager : NSObject
+ (SensitiveData *)getSensitiveDataWithPrvStorage:(PSASecretKey *)prvStorage;
+ (void)saveSensitiveData:(SensitiveData *)sensitiveData pubStorage:(PSASecretKey *)pubStorage;
@end
