//
//  PSASharedStatuses.h
//  PSACommon
//
//  Created by Bulat, Maksim on 18/12/2018.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum PSASharedStatuses{
    TimeOutError = 30,
    NoInternetError = 20,
    Undefined = 0,
    Success = 1
} PSASharedStatuses;

extern NSString * _Nonnull const StatusToString[];

NS_ASSUME_NONNULL_END
