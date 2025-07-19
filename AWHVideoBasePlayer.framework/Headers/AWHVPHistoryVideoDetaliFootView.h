//
//  AWHVPHistoryVideoDetaliFootView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^PlaySelectBlock)(NSString *string);
typedef void(^PlayerBlock)(void);
@interface AWHVPHistoryVideoDetaliFootView : UIView
@property(nonatomic,strong)UILabel *totleTimeLab;
@property(nonatomic,copy)PlaySelectBlock PlaySelectBlock;
@property(nonatomic,copy)PlayerBlock PlayerBlock;
@end

NS_ASSUME_NONNULL_END
