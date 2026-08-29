//
//  AWHVLCVideoPlayer.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/12/14.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVLCVideoPlayer : NSObject

/// 播放状态回调（YES:播放中 NO:暂停/停止）
@property (nonatomic, copy) void(^playStateChangeBlock)(BOOL isPlaying);
/// 进度更新回调（当前时间、总时长、进度0~1）
@property (nonatomic, copy) void(^progressUpdateBlock)(NSTimeInterval currentTime, NSTimeInterval totalTime, CGFloat progress);
/// 播放完成回调
@property (nonatomic, copy) void(^playCompletionBlock)(void);
/// 播放错误回调
@property (nonatomic, copy) void(^playErrorBlock)(NSString *errorMsg);
/// 缓冲进度回调（0~1，仅云端视频有效）
@property (nonatomic, copy) void(^bufferProgressBlock)(CGFloat bufferProgress);

#pragma mark - 初始化（返回实例）
/// 初始化播放器并绑定播放视图容器
/// @param containerView 播放视图容器
/// @return 播放器实例
- (instancetype)initWithContainerView:(UIView *)containerView;

#pragma mark - 播放控制
/// 播放沙盒视频
/// @param filePath 沙盒视频路径
/// @param startPosition 起始播放位置（秒）
- (void)playVideoWithSandboxPath:(NSString *)filePath startPosition:(NSTimeInterval)startPosition;

/// 播放云端视频（HTTP/HTTPS）
/// @param videoUrl 云端视频URL（支持http/https）
/// @param startPosition 起始播放位置（秒）
/// @param timeout 网络超时时间（秒，0为默认值10秒）
- (void)playVideoWithRemoteURL:(NSURL *)videoUrl
                startPosition:(NSTimeInterval)startPosition
                       timeout:(NSTimeInterval)timeout;

/// 暂停播放
- (void)pause;
/// 恢复播放
- (void)resume;
/// 停止播放
- (void)stop;

#pragma mark - 进度/音量/速率控制
/// 跳转进度（云端/本地均支持，仅更新UI）
- (void)seekToPosition:(NSTimeInterval)position;
/// 设置音量（0~100）
- (void)setVolume:(NSInteger)volume;
/// 设置播放速率（0.5~2.0）
- (void)setPlaybackRate:(float)rate;

#pragma mark - 网络播放配置
/// 设置网络缓存大小（仅云端视频有效）
/// @param cacheSize 缓存大小（MB，默认50MB）
- (void)setNetworkCacheSize:(NSInteger)cacheSize;

/// 设置是否允许使用移动网络播放（默认YES）
@property (nonatomic, assign) BOOL allowCellularPlayback;

#pragma mark - 信息获取
/// 当前播放进度（0~1）
- (CGFloat)currentProgress;
/// 视频总时长（秒）
- (NSTimeInterval)totalDuration;
/// 当前播放位置（秒）
- (NSTimeInterval)currentPosition;
/// 当前缓冲进度（0~1，仅云端视频有效）
- (CGFloat)currentBufferProgress;

@end

NS_ASSUME_NONNULL_END
