//
//  AWHVLCVideoPlayerView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/12/14.
//

#import <UIKit/UIKit.h>
#import <AWHVideoBasePlayer/AWHVLCVideoPlayer.h>
#import <AWHVideoBasePlayer/AWHRMZFSliderView.h>
#import <AWHVideoBasePlayer/AWHRMZFPlayerGestureControl.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVLCVideoPlayerView : UIView

/// 播放器实例（暴露给外部）
@property (nonatomic, strong, readonly) AWHVLCVideoPlayer *player;

/// 底部工具栏
@property (nonatomic, strong, readonly) UIView *bottomToolView;

/// 顶部工具栏
@property (nonatomic, strong, readonly) UIView *topToolView;

/// 标题
@property (nonatomic, strong, readonly) UILabel *titleLabel;

/// 播放或暂停按钮
@property (nonatomic, strong, readonly) UIButton *playOrPauseBtn;

/// 播放的当前时间
@property (nonatomic, strong, readonly) UILabel *currentTimeLabel;

/// 滑杆
@property (nonatomic, strong, readonly) AWHRMZFSliderView *slider;

/// 视频总时间
@property (nonatomic, strong, readonly) UILabel *totalTimeLabel;

/// slider滑动中
@property (nonatomic, copy, nullable) void(^sliderValueChanging)(CGFloat value,BOOL forward);

/// slider滑动结束
@property (nonatomic, copy, nullable) void(^sliderValueChanged)(CGFloat value);

/// 点击返回按钮
@property (nonatomic, copy) void(^backBlock)(void);

/// 如果是暂停状态，seek完是否播放，默认YES
@property (nonatomic, assign) BOOL seekToPlay;

/// 是否是横屏模式
@property (nonatomic, assign) BOOL isLandscapeMode;

/// 重置控制层
- (void)resetControlView;

/// 显示控制层
- (void)showControlView;

/// 隐藏控制层
- (void)hideControlView;

/// 设置播放时间
- (void)currentTime:(NSTimeInterval)currentTime totalTime:(NSTimeInterval)totalTime;

/// 设置缓冲时间
- (void)bufferTime:(NSTimeInterval)bufferTime;

/// 是否响应该手势
- (BOOL)shouldResponseGestureWithPoint:(CGPoint)point withGestureType:(AWHRMZFPlayerGestureType)type touch:(nonnull UITouch *)touch;

/// 标题和全屏模式
- (void)showTitle:(NSString *_Nullable)title;

/// 根据当前播放状态取反
- (void)playOrPause;

/// 播放按钮状态
- (void)playBtnSelectedState:(BOOL)selected;

/// 调节播放进度slider和当前时间更新
- (void)sliderValueChanged:(CGFloat)value currentTimeString:(NSString *)timeString;

/// 滑杆结束滑动
- (void)sliderChangeEnded;



/// 初始化播放器View
/// @param frame 视图尺寸
- (instancetype)initWithFrame:(CGRect)frame;

/// 播放沙盒视频（外部调用）
/// @param videoPath 沙盒视频路径
/// @param startPosition 起始位置（秒）
- (void)playSandboxVideo:(NSString *)videoPath startPosition:(NSTimeInterval)startPosition;

/// 播放云端/实时流视频（外部调用）
/// @param videoUrl 视频URL（支持HTTP/HTTPS/RTSP/RTMP）
/// @param startPosition 起始位置（秒）
/// @param timeout 超时时间（秒）
- (void)playRemoteVideo:(NSURL *)videoUrl startPosition:(NSTimeInterval)startPosition timeout:(NSTimeInterval)timeout;

/// 播放
- (void)playPause;

/// 切换全屏/退出全屏
- (void)toggleFullScreen;

/// 停止播放
- (void)stopPlayback;

/// 重置播放器（切换视频时调用）
- (void)resetPlayer;

@end

NS_ASSUME_NONNULL_END
