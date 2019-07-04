//
//  PSAPublic.h
//  PSA
//
//  Created by Pivulski, Nikolai on 28.06.2018.
//

#import <Foundation/Foundation.h>
#import <PSACommon/PSACommon.h>

@interface PSA : NSObject
+ (void)reset;

+ (void)updateDeviceToken:(NSString *)deviceToken;
+ (BOOL)isReadyForEnrollment;
+ (BOOL)isEnrolled;
+ (void)startEnrollmentWithHost:(nullable NSString *)host
                 installationId:(nullable NSString *)installationId
                   pubPssBase64:(nullable NSString *)pubPssBase64
                   idCompletion:(void (^)(PSASharedStatuses))completion;

+ (BOOL)isReadyForAuthorization;
+ (void)startAuthorizationWithTheme:(nullable PSATheme *)theme
                          sessionId:(nullable NSNumber *)sessionId
                         completion:(void (^)(BOOL, PSASharedStatuses))completion;
+ (void)onApplicationWillResignActive:(UIApplication *)application;
+ (void)onApplicationWillEnterForeground:(UIApplication *)application;


@end
