//
//  PSAServerTask.h
//  PSA
//
//  Created by Pivulski, Nikolai on 21.06.2018.
//

#import <Foundation/Foundation.h>
#import "PSABaseClientAction.h"
#import "PSABaseResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface PSAServerTask : NSObject

- (void)runClientAction:(nullable PSABaseClientAction *)clientAction
             completion:(void (^)(PSABaseResponse *, NSError *))completion;

@end

NS_ASSUME_NONNULL_END
