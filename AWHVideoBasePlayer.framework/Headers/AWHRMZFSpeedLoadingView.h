//
//  AWHRMZFSpeedLoadingView.h
//  Pods-AWHRMZFPlayer_Example
//
//  Created by 紫枫 on 2018/6/27.
//

#import <UIKit/UIKit.h>
#import "AWHRMZFLoadingView.h"

@interface AWHRMZFSpeedLoadingView : UIView

@property (nonatomic, strong) AWHRMZFLoadingView *loadingView;

@property (nonatomic, strong) UILabel *speedTextLabel;

/**
 *  Starts animation of the spinner.
 */
- (void)startAnimating;

/**
 *  Stops animation of the spinnner.
 */
- (void)stopAnimating;

@end
