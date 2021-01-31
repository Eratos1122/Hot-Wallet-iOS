//
// AccountDetailViewController.h
//  Wallet
//
//  All rights reserved.
//

#import <UIKit/UIKit.h>
@class Account;

NS_ASSUME_NONNULL_BEGIN

@interface AccountDetailViewController : UIViewController

- (instancetype)initWithAccount:(Account *)account;

@end

NS_ASSUME_NONNULL_END
