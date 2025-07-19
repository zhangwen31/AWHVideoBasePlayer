//
//  AWHVPVideoPlayerModel.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/23.
//

#import <Foundation/Foundation.h>
#import <AWHBPublicBusiness/AWHVPCarVideoModel.h>

typedef NS_ENUM(NSInteger, AWHVPMovieScalingMode) {
    AWHVPMovieScalingModeNone               = 0,       // No scaling
    AWHVPMovieScalingModeAspectFit          = 2,  // Uniform scale until one dimension fits
    AWHVPMovieScalingModeFill               = 1,       // Non-uniform scale. Both render dimensions will exactly match the visible bounds
    AWHVPMovieScalingModeAspectFill         = 3, // Uniform scale until the movie fills the visible bounds. One dimension may have clipped contents
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPVideoPlayerModel : NSObject

@property (nonatomic, strong) NSString *urlStr;

@property (nonatomic, strong) NSString *uuid;
//声音是否打卡
@property (nonatomic, assign) BOOL isVoiceOpen;
//是否在播放
@property (nonatomic, assign) BOOL isPlay;
//是否播放成功
@property (nonatomic, assign) BOOL isPlaySuccess;
//是否在停止播放
@property (nonatomic, assign) BOOL isStopPlay;
//是否选中
@property (nonatomic, assign) BOOL isSelect;
//是否正在加载
@property (nonatomic, assign) BOOL isLoading;
//链接失败
@property (nonatomic, assign) BOOL isLinkFailed;

@property (nonatomic, strong) NSString *failedMsg;
//选择码流名称
@property (nonatomic, strong) NSString *selectCodeName;
//补光是否打开
@property (nonatomic, assign) BOOL isFillLight;
//雨刷是否打开
@property (nonatomic, assign) BOOL isWiper;
//旋转速度0-255,默认127
@property (nonatomic, assign) NSInteger speed;

@property (nonatomic, assign) AWHVPMovieScalingMode movieScalingMode;
//通道
@property (nonatomic, strong) NSString *channelStr;
//通道
@property (nonatomic, assign) NSInteger channel;
//固定通道
@property (nonatomic, assign) NSInteger fixedChannel;

@property (nonatomic, assign) NSInteger num;

@property (nonatomic, strong) AWHVPCarVideoModel *model;
/// 是否隐藏
@property (nonatomic, assign) BOOL isHidden;

@end

NS_ASSUME_NONNULL_END
