//
//  AWHVPMultiplePlaySelectionView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2023/7/1.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBNSENUM.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPMultiplePlaySelectionView : UIView

//倍数选择
@property(nonatomic,copy)void (^multiplePlaySelectionBlock)(AWHBPBHistoryMultiplePlayType multipleType);

- (instancetype)initWithPlayTypeArray:(NSArray *)playTypeArray;

@end

NS_ASSUME_NONNULL_END
