//
//  AWHVPRealTimeVideoFootView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/12.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
typedef void (^ReturnTitleBlock)(NSString *title);
NS_ASSUME_NONNULL_BEGIN

@interface AWHVPRealTimeVideoFootView : UIView
@property(nonatomic,strong)UIButton *talkbackBtn;
@property(nonatomic,strong)UIButton *carstateBtn;
//云台控制
@property(nonatomic,strong)UIButton *PTZControlBtn;
@property(nonatomic,strong)AWHBBCarModel *model;
@property(nonatomic,copy)ReturnTitleBlock ReturnTitleBlock;
- (void)closeAllFunction;
@end

NS_ASSUME_NONNULL_END
