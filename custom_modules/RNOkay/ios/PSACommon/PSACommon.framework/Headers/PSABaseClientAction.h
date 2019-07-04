//
//  PSABaseClientAction.h
//  PSA
//
//  Created by Pivulski, Nikolai on 26.06.2018.
//

#import <Foundation/Foundation.h>
#import "PSAClientActionConstants.h"
#import "PSABaseRequest.h"
#import "PSABaseResponse.h"
#import "PSASharedStatuses.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PSAClientActionDataSource;
@protocol PSAClientActionDelegate;

@interface PSABaseClientAction : NSObject

@property (weak, nullable) id<PSAClientActionDataSource> dataSource;
@property (weak, nullable) id<PSAClientActionDelegate> delegate;

@property (strong, readonly, nullable) PSABaseRequest *request;
@property (strong, readonly, nullable) PSABaseResponse *response;

- (void)start;

#pragma mark - To override

- (NSNumber *)actionType;
- (NSString *)urlPath;
- (NSString *)httpMethod;
- (Class)requestClass;
- (Class)responseClass;
- (PSABaseRequestHeader *)createRequestHeader;
- (PSABaseRequestData *)createRequestData;
- (PSASecretKey *)bodyKeyForResponse:(PSABaseResponse *)response;

@end

@protocol PSAClientActionDataSource <NSObject>
- (NSData *)nonce;
@end

@protocol PSAClientActionDelegate <NSObject>
- (void)clientAction:(PSABaseClientAction *)clientAction finishedWithStatus:(PSASharedStatuses) status;
@end

NS_ASSUME_NONNULL_END
