//
//  SecurityProtocol.h
//  PSA
//
//  Created by Bulat, Maksim on 10/01/2019.
//

NS_ASSUME_NONNULL_BEGIN

@protocol PSASecurityProtocol <NSObject>
@required
-(void) setDataHidden:(BOOL) isDataHidden;
@end

NS_ASSUME_NONNULL_END

