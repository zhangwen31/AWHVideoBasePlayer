//
//  AWHVBPFloatingDisplayContentView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/6/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPFloatingDisplayContentView : UIView

@property (nonatomic, copy) void (^clickClose)(void);

@property (nonatomic, copy) void (^selectFunctionClick)(NSString *name);

@end

NS_ASSUME_NONNULL_END
