//
//  AWHVPPTZControlView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/27.
//

#import <UIKit/UIKit.h>
#import <AWHVideoBasePlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPPTZControlView : UIView

@property (nonatomic, strong) AWHVPVideoPlayerModel *model;
//实时视频  云台操作区分1078与28181（28181云台只有变倍、方向和速度三个参数）videos  (vs:   tc: t :"28181")   t 标识协议类型是2818.
@property(nonatomic,strong)NSString *t;

@property(nonatomic,copy)void (^GetSpeedValue)(NSInteger speed);

@property (nonatomic, copy) void (^functionClick)(NSString *function);

@end

NS_ASSUME_NONNULL_END
