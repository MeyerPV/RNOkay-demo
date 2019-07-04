
#import "RNOkaySdk.h"

#import <PSA/PSA.h>

@implementation RNOkaySdk

RCT_EXPORT_MODULE();

RCT_REMAP_METHOD(authorization,
                 spaAuthorizationData: (NSDictionary *) spaAuthorizationData
                 resolver:(RCTPromiseResolveBlock)resolve
                 rejecter:(RCTPromiseRejectBlock)reject)
{
    @try{
        NSNumber *sessionId = [spaAuthorizationData valueForKeyPath:@"SpaAuthorizationData.sessionId"];
        [PSA startAuthorizationWithTheme: nil
                               sessionId: sessionId
                              completion:^(BOOL result, PSASharedStatuses status) {
                                  NSString *response = [[NSString alloc] init];
                                  if(status != Success) {
                                      response = @"Authorization finished: Error";
                                  } else {
                                      response = @"Authorization finished: OK";
                                  }
                                  resolve(response);
                              }];
    }
    @catch (NSError *error) {
        reject(@"Error",@"Error", error);
    }
}


RCT_REMAP_METHOD(enrollProcedure,
                 spaEnrollData: (NSDictionary *)spaEnrollData
                 resolver:(RCTPromiseResolveBlock)resolve
                 rejecter:(RCTPromiseRejectBlock)reject)
{
    @try{
        NSString *appPns = [spaEnrollData valueForKeyPath:@"SpaEnrollData.appPns"];
        NSString *host = [spaEnrollData valueForKeyPath:@"SpaEnrollData.host"];
        NSString *installationId = [spaEnrollData valueForKeyPath:@"SpaEnrollData.installationId"];
        NSString *pubPss = [spaEnrollData valueForKeyPath:@"SpaEnrollData.pubPss"];
        [PSA startEnrollmentWithHost: host
                      installationId: installationId
                        pubPssBase64: pubPss
                        idCompletion:^(PSASharedStatuses status) {
                            NSString *response = [[NSString alloc] init];
                            if(status != Success) {
                                response = @"Enrollment finished: Error";
                            } else {
                                response = @"Enrollment finished: OK";
                            }
                            resolve(response);
                        }];
    }
    @catch (NSError *error) {
        reject(@"Error",@"Error", error);
    }
}


RCT_REMAP_METHOD(isEnrolled,
                 isEnrolledWithResolver:(RCTPromiseResolveBlock)resolve
                 rejecter:(RCTPromiseRejectBlock)reject)
{
    @try{
        BOOL isEnrolled = [PSA isEnrolled];
        resolve(isEnrolled ? @"true" : @"false");
    }
    @catch (NSError *error) {
        reject(@"Error",@"Error", error);
    }
}


RCT_REMAP_METHOD(updateDeviceToken,
                 token: (NSString *) token
                 resolver:(RCTPromiseResolveBlock)resolve
                 rejecter:(RCTPromiseRejectBlock)reject)
{
    @try{
        [PSA updateDeviceToken:token];
        
    }
    @catch (NSError *error) {
        reject(@"Error",@"Error", error);
    }
}

RCT_REMAP_METHOD(isReadyForAuthorization,
                 isReadyForAuthorizationdWithResolver:(RCTPromiseResolveBlock)resolve
                 rejecter:(RCTPromiseRejectBlock)reject)
{
    @try{
        BOOL isReadyForAuthorization = [PSA isReadyForAuthorization];
        resolve(isReadyForAuthorization ? @"true" : @"false");
    }
    @catch (NSError *error) {
        reject(@"Error",@"Error", error);
    }
}

@end

