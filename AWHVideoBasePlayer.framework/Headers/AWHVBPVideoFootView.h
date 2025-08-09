//
//  AWHVBPVideoFootView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2024/12/7.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomProgress.h>
#import <AWHBPublicBusiness/AWHBPBNSENUM.h>

typedef void(^CodeSelectBlock)(NSString *string);
NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPVideoFootView : UIView

@property(nonatomic,copy)CodeSelectBlock CodeSelectBlock;

@property(nonatomic,assign)NSInteger time;
//倍数
@property(nonatomic,assign)AWHBPBHistoryMultiplePlayType multipleType;
//终端视频
@property (nonatomic, strong) AWHBPBCustomProgress *custompro;
//点击进度条
@property(nonatomic,copy)GetSliderValue GetSliderValue;
//开始拖动进度条
@property(nonatomic,copy)StartSliderValue StartSliderValue;
//拖动进度条
@property(nonatomic,copy)GetSliderValue PhaseSliderValue;
//播放类型
@property (nonatomic, assign) AWHBPBHistoryVideoPlayType playType;
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
