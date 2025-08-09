//
//  AWHVPEchoCancellation.h
//  AWHVideoBasePlayer
//
//  Created by 王恒 on 2022/11/11.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

typedef enum : NSUInteger {
    AWHVPEchoCancellationStatus_open,
    AWHVPEchoCancellationStatus_close
} AWHVPEchoCancellationStatus;

typedef void (^AWHVPEchoCancellation_inputBlock)(AudioBufferList *bufferList,UInt32 inNumberFrames);
typedef void (^AWHVPEchoCancellation_inputVoiceGradeBlock)(CGFloat volume);
typedef void (^AWHVPEchoCancellation_outputBlock)(AudioBufferList *bufferList,UInt32 inNumberFrames);
typedef void (^AWHVPEchoCancellation_outputVoiceGradeBlock)(CGFloat volume);

@interface AWHVPEchoCancellation : NSObject

@property (nonatomic,assign, readonly) BOOL isNeedInputCallback; //需要录音回调(获取input即麦克风采集到的声音回调)
///是否开启了回声消除
@property (nonatomic,assign,readonly) AWHVPEchoCancellationStatus echoCancellationStatus;
@property (nonatomic,assign,readonly) AudioStreamBasicDescription streamFormat;
///录音的回调，回调的参数为从麦克风采集到的声音
@property (nonatomic,copy) AWHVPEchoCancellation_inputBlock bl_input;
///录音的回调，回调的参数为从麦克风采集到的声音大小
@property (nonatomic,copy) AWHVPEchoCancellation_inputVoiceGradeBlock bl_inputVoiceGrade;
///播放的回调，回调的参数 buffer 为要向播放设备（扬声器、耳机、听筒等）传的数据，在回调里把数据传给 buffer
@property (nonatomic,copy) AWHVPEchoCancellation_outputBlock bl_output;
///播放的回调，回调的参数为从麦克风采集到的声音大小
@property (nonatomic,copy) AWHVPEchoCancellation_outputVoiceGradeBlock bl_outputVoiceGrade;

+ (instancetype)shareManager;

- (instancetype)initWithRate:(int)rate bit:(int)bit channel:(int)channel;

- (void)startInput;
- (void)stopInput;

- (void)startOutput;
- (void)stopOutput;

- (void)openEchoCancellation;
- (void)closeEchoCancellation;

///开启服务，需要另外去开启 input 或者 output 功能
- (void)startService;
///停止所有功能（包括录音和播放）
- (void)stop;

// 音量控制
// output: para1 输出数据
// input : para2 输入数据
//         para3 输入长度
//         para4 音量控制参数,有效控制范围[0,100]
// 超过100，则为倍数，倍数为in_vol减去98的数值
+ (void)volume_controlOut_buf:(short *)out_buf in_buf:(short *)in_buf in_len:(int)in_len in_vol:(float)in_vol;

@end

