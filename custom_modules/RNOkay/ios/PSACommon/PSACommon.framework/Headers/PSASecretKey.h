//
//  PSARSAKey.h
//  PSA
//
//  Created by Pivulski, Nikolai on 14.06.2018.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PSASecretKeyType) {
    PSASecretKeyTypeAES,
    PSASecretKeyTypeRSAPublic,
    PSASecretKeyTypeRSAPrivate
};

@interface PSASecretKey : NSObject

@property (strong, readonly) NSData *data;
@property (assign, readonly) PSASecretKeyType type;

- (instancetype)initWithData:(NSData *)data type:(PSASecretKeyType)type;
- (NSUInteger)keySize;

@end

NS_ASSUME_NONNULL_END
