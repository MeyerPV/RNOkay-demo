//
//  PSAAttributedStringUtils.h
//  PSA
//
//  Created by Sadovsky, Aleksandr on 9/11/18.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface PSAAttributedStringUtils : NSObject
+ (NSAttributedString *)createFromAttributedString:(NSAttributedString *)attributedString inRange:(NSRange)range withColor:(UIColor *)color;
@end
