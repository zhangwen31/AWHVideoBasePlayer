//
//  AWHVPRealTimeVideoCollectionFootView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/12.
//

#import <UIKit/UIKit.h>
#import <AWHVideoBasePlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^CodeSelectBlock)(NSString *string);
@interface AWHVPRealTimeVideoCollectionFootView : UIView

@property (nonatomic, strong) AWHVPVideoPlayerModel *model;

@property (nonatomic, assign) AWHVPMovieScalingMode movieScalingMode;

@property (nonatomic, strong) NSString *codeName;

@property (nonatomic, assign) CGFloat spacing;
//是否关闭全屏
@property (nonatomic, assign) BOOL isCloseFill;

@property(nonatomic,copy)CodeSelectBlock CodeSelectBlock;
@property(nonatomic,copy)void (^selectClick)(AWHVPVideoPlayerModel *model);
//是否正在加载
- (void)loading;
//是否正在播放
- (void)play;
//是否链接失败
- (void)linkFailed;
//静音
- (void)mute;

@end

NS_ASSUME_NONNULL_END
