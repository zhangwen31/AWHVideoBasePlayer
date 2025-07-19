//
//  AWHVPRealTimeAlarmDetailsModel.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/10/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHVPRealTimeAlarmDetailsModel : NSObject

@property(nonatomic,copy)NSString *carId;
@property(nonatomic,copy)NSString *carPlate;
@property(nonatomic,copy)NSString *alarmName;
@property(nonatomic,copy)NSString *time;
@property(nonatomic,copy)NSString *speed;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *carName;
@property(nonatomic,copy)NSString *fjNum;
@property(nonatomic,copy)NSString *alarmType;
@property(nonatomic,copy)NSString *teamName;

@end

NS_ASSUME_NONNULL_END
