//
//  AWHVPHistoryVideoPlayerView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/26.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBHistoryVideoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPHistoryVideoPlayerView : UIView

@property (nonatomic, strong) AWHBBHistoryVideoModel *model;
//终端视频
@property (nonatomic, assign) BOOL isTerminalVideo;

@property (nonatomic, strong) NSString *carId;

@property (nonatomic, strong) NSString *carName;

@property(nonatomic,copy)void (^clearBackClick)(void);

- (void)play;


@end

NS_ASSUME_NONNULL_END
