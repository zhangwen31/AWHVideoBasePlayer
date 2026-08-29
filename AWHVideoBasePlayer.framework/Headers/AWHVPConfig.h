//
//  AWHVPConfig.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/22.
//

#import <Foundation/Foundation.h>
#import "AWHVideoCacheModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPConfig : NSObject
/**
 * 视频接口返回状态说明
 * -9: 账号或密码不正确
 * -8: 无车辆权限
 * -7: 未绑定视频终端 (该车辆不是视频设备)
 * -6: 车辆欠费
 * -5: 视频类型不正确 (设备是国标28181，但以部标1078形式录入平台，或者反之，则会报该错误)
 * -4: 设备没有回应，请稍后再试
 * -3: 车辆不存在
 * -2: 系统异常
 * -1: 设备离线
 * 0：成功
 * 1: 设备返回失败
 * 2 : 设备返回消息有误
 * 3 : 设备不支持
 * 13: 对讲被占用
 * 14: 广播被占用
 * 15: 上级平台正在播放
 * 16: 紧急报警正在录像
 * 17: 广播端口分配完毕
 * 20: 该通道正在回放
 * 21: 上级平台正在回放
 * 30: 809成功
 * 31: 809返回失败
 * 32: 809不支持
 * 33: 809会话结束
 * 34: 809时效口令错误
 * 35: 809不满足跨域条件
 * 42: 账号使用流量已超出设置
 * 43: 设备使用流量已超出设置
 * 44: 服务器带宽已满，请稍后再试
 */
+ (NSString *)getVideoStatusDescription:(NSInteger)status;

/// 获取平台视频目录地址
+ (NSString *)getPlatformVideoDirectoryPath;

/// 获取平台视频目录名称解析内容
+ (NSDictionary *)getPlatformVideoNameFile;

/// 保存平台视频目录名称解析内容
/// @param dict 名称解析内容  md5: name
+ (void)savePlatformVideoNameFile:(NSDictionary *)dict;

/// 校验沙盒 Video/Platform 目录下是否存在指定视频文件
/// @param targetFileName 目标文件名（如 @"通立设备.1(2025-12-04 11.12.16 - 2025-12-04 11.12.23).mp4"）
/// @return YES：存在；NO：不存在
+ (BOOL)isVideoExistsWithFileName:(NSString *)targetFileName;

/// 获取平台视频缓存数组名称
/// @return 所有视频MP4数组
+ (NSArray<AWHVideoCacheModel *> *)getPlatformVideos;

#pragma mark - 批量删除：删除全部缓存视频
/// 删除沙盒 Video/Platform 目录下所有视频文件
/// @param completion 回调（success：是否删除成功；deletedCount：成功删除的文件数；error：错误信息）
+ (void)deleteAllCachedPlatformVideosWithCompletion:(void(^)(BOOL success, NSInteger deletedCount, NSError *error))completion;

#pragma mark - 批量删除：删除指定视频列表
/// 删除指定文件名的视频（精准匹配）
/// @param fileNames 要删除的视频文件名数组（如 @[@"video1.mp4", @"video2.mp4"]）
/// @param completion 回调
+ (void)deleteSpecifiedPlatformVideosWithFileNames:(NSArray<NSString *> *)fileNames completion:(void(^)(BOOL success, NSInteger deletedCount, NSError *error))completion;

#pragma mark - 批量删除：删除过期视频（按时间筛选）
/// 删除指定时间之前的缓存视频（如 7天前的视频）
/// @param expiredDays 过期天数（如 7 表示删除 7天前及更早的视频）
/// @param completion 回调
+ (void)deleteExpiredPlatformVideosWithExpiredDays:(NSInteger)expiredDays completion:(void(^)(BOOL success, NSInteger deletedCount, NSError *error))completion;

@end

NS_ASSUME_NONNULL_END
