//
//  AWHVPAudioManager.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/9/28.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

NS_ASSUME_NONNULL_BEGIN

@class AWHVPAudioManager;
@protocol AWHVPAudioManagerDelegate <NSObject>
//录音回调
- (void)audioRecord:(AWHVPAudioManager*)AudioRecord recordCallBack:(AudioBufferList*)bufferList inNumberFrames:(UInt32)inNumberFrames;
//播放录音回调
- (void)audioPlayer:(AWHVPAudioManager*)AudioRecord playCallBack:(AudioBufferList*)bufferList inNumberFrames:(UInt32)inNumberFrames;
//录音音量
- (void)audioRecordInputCallBackVoiceGrade:(CGFloat)volume;
//播放音量
- (void)audioRecordOutputCallBackVoiceGrade:(CGFloat)volume;

@end

@interface AWHVPAudioManager : NSObject

@property (nonatomic, weak) id<AWHVPAudioManagerDelegate> delegate;

@property (nonatomic, assign) BOOL isAudioStart;

+ (instancetype)shareManager;

- (void)start;
- (void)stop;
- (void)invalid;

@end

NS_ASSUME_NONNULL_END
