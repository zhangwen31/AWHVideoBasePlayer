//
//  AWHVBPVideoSetupView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/5/31.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPVideoSetupView : UIView

@property (nonatomic, copy) void (^selectScaleBlcok)(NSString *scaleName);

@property (nonatomic, copy) void (^selectTypeBlcok)(NSString *typeName);

@end

NS_ASSUME_NONNULL_END
