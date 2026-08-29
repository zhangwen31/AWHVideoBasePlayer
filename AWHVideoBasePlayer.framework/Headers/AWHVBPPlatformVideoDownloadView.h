//
//  AWHVBPPlatformVideoDownloadView.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2025/10/25.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBHistoryVideoModel.h>

typedef NS_ENUM(NSInteger, AWHVBPPlatformVideoType) {
    /// 下载中
    AWHVBPPlatformVideoTypeDownload     = 0,
    /// 下载完成
    AWHVBPPlatformVideoTypeSuccess      = 1,
    /// 下载失败
    AWHVBPPlatformVideoTypeFail         = 2,
    /// 已取消
    AWHVBPPlatformVideoTypeCancel       = 3,
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHVBPPlatformVideoDownloadView : UIView

@property (nonatomic, strong, readonly) AWHBBHistoryVideoModel *model;

@property (nonatomic, assign) AWHVBPPlatformVideoType type;

@property (nonatomic, copy) void (^downloadClick)(AWHVBPPlatformVideoType type);

@property (nonatomic, copy) void (^playVideoClick)(NSString *urlStr, NSString *title);
/// 开始下载
- (void)startDowload:(AWHBBHistoryVideoModel *)model
               carId:(NSString *)carId
          deviceName:(NSString *)deviceName;
/// 取消下载
- (void)cancleDowload;
/// 完成下载
- (void)finshDowload:(AWHBBHistoryVideoModel *)model
          deviceName:(NSString *)deviceName;

@end

NS_ASSUME_NONNULL_END
