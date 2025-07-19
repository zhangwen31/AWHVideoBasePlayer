//
//  AWHVPRealTimeVideoHeaderView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^QueryMileageHeadCellBlock)(NSString *titleLabText);
@interface AWHVPRealTimeVideoHeaderView : UIView<UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UITableView *tableView;
@property (nonatomic, copy) NSString *plateName;
@property (nonatomic, assign) BOOL HasAlready;
@property (nonatomic, copy) QueryMileageHeadCellBlock QueryMileageHeadCellBlock;

@end

NS_ASSUME_NONNULL_END
