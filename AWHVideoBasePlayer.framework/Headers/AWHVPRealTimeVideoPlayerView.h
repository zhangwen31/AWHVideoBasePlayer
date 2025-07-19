//
//  AWHVPRealTimeVideoPlayerView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/26.
//

#import <UIKit/UIKit.h>
#import <IJKMediaFramework/IJKMediaFramework.h>
#import <AWHVideoBasePlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPRealTimeVideoPlayerView : UIView

@property (nonatomic, strong) AWHVPVideoPlayerModel *model;
@property (nonatomic, strong) NSString *carId;
@property(nonatomic,strong)IJKFFMoviePlayerController *player;

@property(nonatomic,copy)void (^clearBackClick)(void);
@property(nonatomic,copy)void (^reconnectClick)(AWHVPVideoPlayerModel *model);

@end

NS_ASSUME_NONNULL_END
