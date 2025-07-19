//
//  AWHVPAudioNewManager.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2024/4/13.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

NS_ASSUME_NONNULL_BEGIN

@class AWHVPAudioNewManager;
@protocol AWHVPAudioNewManagerDelegate <NSObject>
//录音回调
- (void)audioRecord:(AWHVPAudioNewManager*)AudioRecord recordCallBack:(AudioBufferList*)bufferList inNumberFrames:(UInt32)inNumberFrames;
//播放录音回调
- (void)audioPlayer:(AWHVPAudioNewManager*)AudioRecord playCallBack:(AudioBufferList*)bufferList inNumberFrames:(UInt32)inNumberFrames;
//录音音量
- (void)audioRecordInputCallBackVoiceGrade:(CGFloat)volume;
//播放音量
- (void)audioRecordOutputCallBackVoiceGrade:(CGFloat)volume;

@end

@interface AWHVPAudioNewManager : NSObject

@property (nonatomic, weak) id<AWHVPAudioNewManagerDelegate> delegate;

@property (nonatomic, assign) BOOL isAudioStart;

+ (instancetype)shareManager;

- (void)start;
- (void)stop;
- (void)invalid;

@end

NS_ASSUME_NONNULL_END
