//
//  AWHVPVoiceCallsTwoView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/5/25.
//

#import <UIKit/UIKit.h>
#import <AWHVideoBasePlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPVoiceCallsTwoView : UIView

@property (nonatomic, strong) AWHVPVideoPlayerModel *model;

@property(nonatomic,copy)NSString *carId;
/// 对讲连接失败
@property (nonatomic, copy) void (^intercomConnectionFailed)(void);
/// 关闭对讲点击
@property (nonatomic, copy) void (^closeClick)(void);

- (void)play;

- (void)close;

@end

NS_ASSUME_NONNULL_END
