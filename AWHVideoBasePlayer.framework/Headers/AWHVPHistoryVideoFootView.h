//
//  AWHVPHistoryVideoFootView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/26.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomProgress.h>
#import <AWHBPublicBusiness/AWHBPBNSENUM.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^CodeSelectBlock)(NSString *string);
@interface AWHVPHistoryVideoFootView : UIView

@property(nonatomic,copy)CodeSelectBlock CodeSelectBlock;

@property(nonatomic,assign)NSInteger time;
//倍数
@property(nonatomic,assign)AWHBPBHistoryMultiplePlayType multipleType;
//终端视频
@property (nonatomic, assign) BOOL isTerminalVideo;
@property (nonatomic, strong) AWHBPBCustomProgress *custompro;
//点击进度条
@property(nonatomic,copy)GetSliderValue GetSliderValue;
//开始拖动进度条
@property(nonatomic,copy)StartSliderValue StartSliderValue;
//拖动进度条
@property(nonatomic,copy)GetSliderValue PhaseSliderValue;
//播放类型
@property (nonatomic, assign) AWHBPBHistoryVideoPlayType playType;
//恢复播放
@property(nonatomic,copy)void (^resumePlaybackBlock)(void);
//播放类型选择
@property(nonatomic,copy)void (^videoPlayTypeSelectionBlock)(AWHBPBHistoryVideoPlayType playType);
//倍数选择
@property(nonatomic,copy)void (^multiplePlaySelectionBlock)(AWHBPBHistoryMultiplePlayType multipleType);

//是否正在加载
- (void)loading;
//是否正在播放
- (void)play;
//播放失败
- (void)playFail;

- (void)timerInvalidate;

@end

NS_ASSUME_NONNULL_END
