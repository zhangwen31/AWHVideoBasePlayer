//
//  AWHVBPSelectTimeRangeView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2023/11/4.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBHistoryVideoModel.h>

typedef NS_ENUM(NSInteger, AWHVBPDownloadFormatType) {
    AWHVBPDownloadFormatTypeDefualt      = 0,    // 原始格式
    AWHVBPDownloadFormatTypeMP4          = 1,    // MP4格式
    AWHVBPDownloadFormatTypeFLV          = 2,    // FLV格式
    AWHVBPDownloadFormatTypeMPEGTS       = 3,    // MPEG-TS格式
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPSelectTimeRangeView : UIView

@property(nonatomic, strong) AWHBBHistoryVideoModel *model;

@property(nonatomic,strong, readonly)NSString *startTime;

@property(nonatomic,strong, readonly)NSString *endTime;

@property(nonatomic,assign, readonly)AWHVBPDownloadFormatType formatType;

@property(nonatomic, copy) void (^selectTimeBlock)(NSString *startTime, NSString *endTime, NSString *format);

@end

NS_ASSUME_NONNULL_END
