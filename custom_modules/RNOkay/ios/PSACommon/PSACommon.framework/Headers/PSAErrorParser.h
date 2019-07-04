//
//  PSAErrorParser.h
//  PSACommon
//
//  Created by Bulat, Maksim on 18/12/2018.
//

#import <Foundation/Foundation.h>
#import "PSASharedStatuses.h"

@interface PSAErrorParser : NSObject

- (PSASharedStatuses)parseErrorCode:(NSInteger)errorCode;

@end
