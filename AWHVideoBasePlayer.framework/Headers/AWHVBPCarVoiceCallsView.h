//
//  AWHVBPCarVoiceCallsView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2023/10/21.
//

#import <UIKit/UIKit.h>
#import <AWHVideoBasePlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPCarVoiceCallsView : UIView

//通道
@property (nonatomic, assign) NSInteger channel;

@property(nonatomic,copy)NSString *carId;
//对讲连接失败
@property (nonatomic, copy) void (^intercomConnectionFailed)(void);
//对讲关闭调用
@property (nonatomic, copy) void (^intercomClose)(void);

- (void)play;

- (void)close;

@end

NS_ASSUME_NONNULL_END
