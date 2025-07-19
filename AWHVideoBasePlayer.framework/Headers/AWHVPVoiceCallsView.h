//
//  AWHVPVoiceCallsView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/28.
//

#import <UIKit/UIKit.h>
#import <AWHVideoBasePlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPVoiceCallsView : UIView

@property (nonatomic, strong) AWHVPVideoPlayerModel *model;

@property(nonatomic,copy)NSString *carId;
//对讲连接失败
@property (nonatomic, copy) void (^intercomConnectionFailed)(void);

- (void)play;

- (void)close;

@end

NS_ASSUME_NONNULL_END
