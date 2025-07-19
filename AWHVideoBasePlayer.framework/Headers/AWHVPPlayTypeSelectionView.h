//
//  AWHVPPlayTypeSelectionView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2023/7/1.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBNSENUM.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPPlayTypeSelectionView : UIView

//播放类型选择
@property(nonatomic,copy)void (^videoPlayTypeSelectionBlock)(AWHBPBHistoryVideoPlayType type);

@end

NS_ASSUME_NONNULL_END
