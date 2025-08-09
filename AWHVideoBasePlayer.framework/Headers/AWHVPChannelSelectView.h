//
//  AWHVPChannelSelectView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2024/12/21.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHVPCarVideoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPChannelSelectView : UIView

@property (nonatomic, copy) void (^selectVideoChannelBlock)(AWHVPCarVideoModel *model);

+ (AWHVPChannelSelectView *)createChannelSelectWithVideoArray:(NSArray<AWHVPCarVideoModel *> *)videoArray;

@end

NS_ASSUME_NONNULL_END
