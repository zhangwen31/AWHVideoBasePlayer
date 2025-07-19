//
//  AWHVPRealTimeAlarmModel.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPRealTimeAlarmModel : NSObject

//报警类型
@property(nonatomic,copy)NSString *alarmType;
//报警名称
@property(nonatomic,copy)NSString *alarmName;
//报警数
@property(nonatomic,copy)NSString *alarmNum;
//图标链接
@property(nonatomic,copy)NSString *iconLink;

@end

NS_ASSUME_NONNULL_END
