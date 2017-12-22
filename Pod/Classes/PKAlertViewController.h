//
//  PKAlertViewController.h
//  Pods
//
//  Created by Satoshi Ohki on 2015/02/21.
//
//

#import <UIKit/UIKit.h>

#import "PKAlertUtility.h"
#import "PKAlertActionCollectionViewController.h"

@class PKAlertControllerConfiguration;

#pragma mark - PKAlertViewController

@interface PKAlertViewController : UIViewController

@property (nonatomic, readonly) PKAlertControllerConfiguration *configuration;
@property (nonatomic) PKAlertActionCollectionViewController *actionCollectionViewController;
@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *actionContainerView;

+ (void)registerStoryboard:(UIStoryboard *)storyboard;
+ (instancetype)instantiateOwnerViewController;
+ (instancetype)alertControllerWithConfigurationBlock:(PKAlertControllerConfigurationBlock)configurationBlock;
+ (instancetype)simpleAlertControllerWithConfigurationBlock:(PKAlertControllerConfigurationBlock)configurationBlock;
+ (instancetype)alertControllerWithConfiguration:(PKAlertControllerConfiguration *)configuration;

@end
