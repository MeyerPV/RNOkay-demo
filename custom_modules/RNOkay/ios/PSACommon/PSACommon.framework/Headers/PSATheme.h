//
//  PSATheme.h
//  PSA
//
//  Created by Pivulski, Nikolai on 06.07.2018.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const PSAThemeLogoKey;
extern NSString *const PSAThemeTitleKey;
extern NSString *const PSAThemeLogoDataKey;
extern NSString *const PSAThemeScreenBackgroundColorKey;
extern NSString *const PSAThemeActivityIndicatorColor;
extern NSString *const PSAThemeTitleTextColorKey;
extern NSString *const PSAThemeQuestionMarkColorKey;
extern NSString *const PSAThemeTransactionTypeTextColorKey;
extern NSString *const PSAThemeInfoSectionTitleColorKey;
extern NSString *const PSAThemeInfoSectionValueColorKey;
extern NSString *const PSAThemeFromTextColorKey;
extern NSString *const PSAThemeMessageTextColorKey;
extern NSString *const PSAThemeAuthInfoBackgroundColorKey;
extern NSString *const PSAThemeShowDetailsTextColorKey;
extern NSString *const PSAThemeConfirmButtonBackgroundColorKey;
extern NSString *const PSAThemeConfirmButtonTextColorKey;
extern NSString *const PSAThemeCancelButtonBackgroundColorKey;
extern NSString *const PSAThemeCancelButtonTextColorKey;
extern NSString *const PSAThemeAuthConfirmationBackgroundColorKey;
extern NSString *const PSAThemeAuthConfirmationTitleColorKey;
extern NSString *const PSAThemeAuthConfirmationMessageColorKey;
extern NSString *const PSAThemeAuthConfirmationThumbColorKey;
extern NSString *const PSAThemeAuthConfirmationApostropheColorKey;
extern NSString *const PSAThemeAuthConfirmationButtonBackgroundColorKey;
extern NSString *const PSAThemeAuthConfirmationButtonTextColorKey;
extern NSString *const PSAThemeAuthCancellationBackgroundColorKey;
extern NSString *const PSAThemeAuthCancellationTitleColorKey;
extern NSString *const PSAThemeAuthCancellationMessageColorKey;
extern NSString *const PSAThemeAuthCancellationThumbColorKey;
extern NSString *const PSAThemeAuthCancellationApostropheColorKey;
extern NSString *const PSAThemeAuthCancellationButtonBackgroundColorKey;
extern NSString *const PSAThemeAuthCancellationButtonTextColorKey;
extern NSString *const PSAThemePinTitleTextColorKey;
extern NSString *const PSAThemePinValueTextColorKey;
extern NSString *const PSAThemePinNumberButtonTextColorKey;
extern NSString *const PSAThemePinNumberButtonBackgroundColorKey;
extern NSString *const PSAThemePinRemoveButtonTextColorKey;
extern NSString *const PSAThemePinRemoveButtonBackgroundColorKey;

@interface PSATheme : NSObject <NSCoding>

@property (strong, readonly, nullable) UIImage *logo;
@property (copy, readonly, nullable) NSString *title;

- (instancetype)initWithTitle:(nullable NSString *)title;

- (void)setResponseDictionary:(nullable NSDictionary<NSString *, id> *)responseDictionary;

- (UIColor *)getColorForKey:(nullable NSString *)key;

@end

NS_ASSUME_NONNULL_END
