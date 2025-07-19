//
//  AWHVBPVideoChannelSetupView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/5/31.
//

#import <UIKit/UIKit.h>
#import <AWHVideoBasePlayer/AWHVPVideoPlayerModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPVideoChannelSetupView : UIView

@property (nonatomic, strong) NSArray<AWHVPVideoPlayerModel *> *channelArr;

@property (nonatomic, copy) void (^selectChannelClick)(NSArray<AWHVPVideoPlayerModel *> *channelArr);

@end

NS_ASSUME_NONNULL_END
