//
//  AWHVPRealtimeAlarmCell.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPRealtimeAlarmCell : UITableViewCell

@property(nonatomic,strong)UIImageView *leftImageView;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UILabel *subTitleLab;
@property(nonatomic,assign)BOOL isHiddenLine;

@end

NS_ASSUME_NONNULL_END
