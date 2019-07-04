//
//  PSABaseClientActionController.h
//  PSA
//
//  Created by Pivulski, Nikolai on 26.06.2018.
//

#import <Foundation/Foundation.h>
#include "PSABaseClientAction.h"
#import "PSASharedStatuses.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PSABaseClientActionControllerDelegate;

@interface PSABaseClientActionController : NSObject <PSAClientActionDataSource, PSAClientActionDelegate>

@property (nonatomic, weak, nullable) id<PSABaseClientActionControllerDelegate> delegate;

- (void)start;

// for sublasses
- (void)runNextAction:(PSABaseClientAction *)clientAction;
- (void)addAction:(PSABaseClientAction *)clientAction;

// to override
- (BOOL)isReadyForStart;
- (void)setupData;
- (NSArray<PSABaseClientAction *> *)createActions;
- (void)resetData;
- (void)saveActionResponse:(PSABaseClientAction *)clientAction;

@end

@protocol PSABaseClientActionControllerDelegate <NSObject>
- (void)clientActionController:(PSABaseClientActionController *)controller finishedWithStatus:(PSASharedStatuses)status;
@end

NS_ASSUME_NONNULL_END
