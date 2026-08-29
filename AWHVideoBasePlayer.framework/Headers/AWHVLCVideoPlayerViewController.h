//
//  AWHVLCVideoPlayerViewController.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/12/14.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVLCVideoPlayerViewController : AWHBBBaseViewController

/// 是否是横屏模式
@property (nonatomic, assign) BOOL isLandscapeMode;

@property (nonatomic, copy) void (^backBlock)(void);

/// 初始化方式1：播放沙盒视频
/// @param videoPath 沙盒视频路径
- (instancetype)initWithSandboxVideoPath:(NSString *)videoPath;

/// 初始化方式2：播放云端/实时流视频
/// @param videoUrl 视频URL（HTTP/HTTPS/RTSP/RTMP）
/// @param timeout 超时时间（秒）
- (instancetype)initWithRemoteVideoUrl:(NSURL *)videoUrl timeout:(NSTimeInterval)timeout;

/// 外部设置播放地址（切换视频）
/// @param videoUrl 视频URL
/// @param isRealTime 是否是实时流
- (void)setPlaybackUrl:(NSURL *)videoUrl isRealTime:(BOOL)isRealTime;

@end

NS_ASSUME_NONNULL_END
