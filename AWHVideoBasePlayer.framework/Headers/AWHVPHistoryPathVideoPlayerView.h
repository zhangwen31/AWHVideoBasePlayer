//
//  AWHVPHistoryPathVideoPlayerView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2024/12/21.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHVPCarVideoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPHistoryPathVideoPlayerView : UIView

@property (nonatomic, strong) NSString *carId;

@property (nonatomic, strong) NSString *carName;

@property (nonatomic, strong) NSString *channel;

@property (nonatomic, strong) NSString *channelName;

@property (nonatomic, strong) NSString *endTime;

@property (nonatomic, strong) NSString *startTime;

/// 视频通道
@property(nonatomic,strong)NSArray<AWHVPCarVideoModel *> *videoArray;

@property(nonatomic,copy)void (^clearBackClick)(void);

- (void)play;

@end

NS_ASSUME_NONNULL_END
