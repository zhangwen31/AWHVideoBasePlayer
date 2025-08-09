//
//  AWHVBPVideoDownloadView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2023/11/11.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBHistoryVideoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPVideoDownloadView : UIView

@property(nonatomic, strong, readonly) AWHBBHistoryVideoModel *model;

@property(nonatomic,strong, readonly)NSString *startTime;

@property(nonatomic,strong, readonly)NSString *endTime;

@property(nonatomic,assign, readonly)NSString *format;

- (void)setupModel:(AWHBBHistoryVideoModel *)model startTime:(NSString *)startTime endTime:(NSString *)endTime format:(NSString *)format carId:(NSString *)carId;

@end

NS_ASSUME_NONNULL_END
