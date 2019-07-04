//
//  PSAClientActionConstants.h
//  PSA
//
//  Created by Pivulski, Nikolai on 26.06.2018.
//

#import <Foundation/Foundation.h>

extern NSString *const PSAClientActionPathEnrollment;
extern NSInteger const PSAClientActionTypePrepareEnrollment;
extern NSInteger const PSAClientActionTypeCommitEnrollment;

extern NSString *const PSAClientActionPathAuth;
extern NSInteger const PSAClientActionTypePrepareAuth;
extern NSInteger const PSAClientActionTypeCommitAuth;
extern NSInteger const PSAClientActionTypeWakeUp;
extern NSInteger const PSAClientActionTypeHandshakeStep1;
extern NSInteger const PSAClientActionTypeHandshakeStep2;

extern NSString *const PSAClientActionPathLinkTenant;
extern NSInteger const PSAClientActionTypeLinkTenant;
extern NSInteger const PSAClientActionTypeUpdateTenant;
extern NSInteger const PSAClientActionTypeUnlinkTenant;
