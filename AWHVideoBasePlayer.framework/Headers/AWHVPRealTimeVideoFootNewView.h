//
//  AWHVPRealTimeVideoFootNewView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/5/25.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^AWHVPRealTimeVideoReturnTitleBlock)(NSString *title, BOOL isSelect);
@interface AWHVPRealTimeVideoFootNewView : UIView

@property (nonatomic, strong) NSArray<NSString *> *functionArr;

@property(nonatomic,strong)AWHBBCarModel *model;
@property(nonatomic,copy)AWHVPRealTimeVideoReturnTitleBlock ReturnTitleBlock;
- (void)closeAllFunction;

@end

NS_ASSUME_NONNULL_END
