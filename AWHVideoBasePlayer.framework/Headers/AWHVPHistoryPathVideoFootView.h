//
//  AWHVPHistoryPathVideoFootView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2024/12/21.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomProgress.h>
#import <AWHBPublicBusiness/AWHBPBNSENUM.h>
#import <AWHBPublicBusiness/AWHVPCarVideoModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^HistoryPathCodeSelectBlock)(NSString *string);

@interface AWHVPHistoryPathVideoFootView : UIView

@property(nonatomic,copy)HistoryPathCodeSelectBlock CodeSelectBlock;

@property(nonatomic,assign)NSInteger time;
//倍数
@property(nonatomic,assign)AWHBPBHistoryMultiplePlayType multipleType;

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
/// 视频通道
@property(nonatomic,strong)NSArray<AWHVPCarVideoModel *> *videoArray;

//是否正在加载
- (void)loading;
//是否正在播放
- (void)play;
//播放失败
- (void)playFail;

- (void)timerInvalidate;

@end

NS_ASSUME_NONNULL_END
