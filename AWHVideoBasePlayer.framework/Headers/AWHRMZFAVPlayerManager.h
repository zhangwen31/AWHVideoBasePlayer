//
//  AWHRMZFAVPlayerManager.h
//  AWHRMZFPlayer
//
// Copyright (c) 2016年 任子丰 ( http://github.com/renzifeng )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AWHVideoBasePlayer/AWHRMZFPlayerMediaPlayback.h>

@interface AWHRMZFAVPlayerManager : NSObject <AWHRMZFPlayerMediaPlayback>

@property (nonatomic, strong, readonly) AVURLAsset *asset;
@property (nonatomic, strong, readonly) AVPlayerItem *playerItem;
@property (nonatomic, strong, readonly) AVPlayer *player;
@property (nonatomic, assign) NSTimeInterval timeRefreshInterval;
/// 视频请求头
@property (nonatomic, strong) NSDictionary *requestHeader;

@property (nonatomic, strong, readonly) AVPlayerLayer *avPlayerLayer;
/// 是否不是第一次请求
@property (nonatomic, assign) BOOL isFirstFailed;
/// 请求失败 是否第一次请求失败
@property (nonatomic, copy) void (^playFailedBlock)(BOOL isFirstFailed);

@end
